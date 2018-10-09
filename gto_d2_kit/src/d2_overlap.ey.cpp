/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_overlap.hpp"

#include <cmath>

#include <boost/math/special_functions/gamma.hpp>

/*

*/
#pragma GCC optimize("O0")

namespace {
    const double Pi = M_PI;
}

//
// Automatically generated, do not edit
void overlap_second_derivative_00(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C43 = ae * be;
    const double C42 = ae + be;
    const double C49 = C43 * zAB;
    const double C48 = std::pow(C42, 2);
    const double C47 = C43 * yAB;
    const double C46 = 2 * C43;
    const double C45 = C43 * xAB;
    const double C44 = Pi / C42;
    const double C53 = C49 * 1;
    const double C52 = C47 * 1;
    const double C51 = C45 * 1;
    const double C50 = std::sqrt(C44);
    const double C59 = C50 * 1;
    const double C58 = 2 * C53;
    const double C57 = 2 * C52;
    const double C56 = 2 * C51;
    const double C55 = C50 * 1;
    const double C54 = C50 * 1;
    const double C62 = C50 * C58;
    const double C61 = C50 * C57;
    const double C60 = C50 * C56;
    const double hxx000000 =
        -(C54 * C55 * C50 * (1 - (xAB * C56) / C42) * C46) / C42;
    const double hxy000000 = (C54 * C60 * C61) / C48;
    const double hxz000000 = (C55 * C60 * C62) / C48;
    const double hyy000000 =
        -(C54 * C59 * C50 * (1 - (yAB * C57) / C42) * C46) / C42;
    const double hyz000000 = (C59 * C61 * C62) / C48;
    const double hzz000000 =
        -(C59 * C55 * C50 * (1 - (zAB * C58) / C42) * C46) / C42;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * hxx000000;
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * hxy000000;
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * hxz000000;
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * hyy000000;
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * hyz000000;
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * hzz000000;
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxx000000;
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxy000000;
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxz000000;
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyy000000;
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyz000000;
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hzz000000;
    }
}

// Automatically generated, do not edit
void overlap_second_derivative_01(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C174 = ae + be;
    const double C99 = (xAB * ae) / C174;
    const double C133 = (yAB * ae) / C174;
    const double C150 = (zAB * ae) / C174;
    const double C102 = 0 * be;
    const double C101 = ae * be;
    const double C100 = ae + be;
    const double C108 = C101 * zAB;
    const double C107 = C101 * yAB;
    const double C106 = std::pow(C100, 2);
    const double C105 = 2 * C101;
    const double C104 = C101 * xAB;
    const double C103 = Pi / C100;
    const double C113 = C108 * 1;
    const double C112 = C107 * 1;
    const double C111 = 2 * C106;
    const double C110 = C104 * 1;
    const double C109 = std::sqrt(C103);
    const double C120 = C109 * C99;
    const double C119 = 2 * C113;
    const double C118 = 2 * C112;
    const double C117 = C102 / C111;
    const double C116 = 2 * C110;
    const double C115 = C109 * 1;
    const double C114 = C109 * 1;
    const double C123 = C109 * C119;
    const double C122 = C109 * C118;
    const double C121 = xAB * C116;
    const double C124 = C121 / C100;
    const double C125 = 1 - C124;
    const double C126 = C125 * ae;
    const double C127 = C126 / C100;
    const double C128 = C127 - C117;
    const double C129 = C109 * C128;
    const double C139 = C109 * 1;
    const double C138 = C109 * C116;
    const double C137 = 0 * be;
    const double C136 = yAB * C118;
    const double C135 = C109 * C133;
    const double C141 = C137 / C111;
    const double C140 = C136 / C100;
    const double C142 = 1 - C140;
    const double C143 = C142 * ae;
    const double C144 = C143 / C100;
    const double C145 = C144 - C141;
    const double C146 = C109 * C145;
    const double C154 = 0 * be;
    const double C153 = zAB * C119;
    const double C152 = C109 * C150;
    const double C156 = C154 / C111;
    const double C155 = C153 / C100;
    const double C157 = 1 - C155;
    const double C158 = C157 * ae;
    const double C159 = C158 / C100;
    const double C160 = C159 - C156;
    const double C161 = C109 * C160;
    const double C181 = C157 * C105;
    const double C180 = C142 * C105;
    const double C179 = C125 * C105;
    const double C184 = C109 * C179;
    const double C183 = C109 * C181;
    const double C182 = C109 * C180;
    const double hxx000100 =
        (C114 * C115 * C109 * ((-4 * C110) / C100 - (xAB * C179) / C100) * ae) /
        C100;
    const double hxx000010 = -(C114 * C135 * C184) / C100;
    const double hxx000001 = -(C152 * C115 * C184) / C100;
    const double hxy000100 = -(C114 * C129 * C122) / C100;
    const double hxy000010 = -(C114 * C146 * C138) / C100;
    const double hxy000001 = (C152 * C138 * C122) / C106;
    const double hxz000100 = -(C129 * C115 * C123) / C100;
    const double hxz000010 = (C135 * C138 * C123) / C106;
    const double hxz000001 = -(C161 * C115 * C138) / C100;
    const double hyy000100 = -(C114 * C120 * C182) / C100;
    const double hyy000010 =
        (C114 * C139 * C109 * ((-4 * C112) / C100 - (yAB * C180) / C100) * ae) /
        C100;
    const double hyy000001 = -(C152 * C139 * C182) / C100;
    const double hyz000100 = (C120 * C122 * C123) / C106;
    const double hyz000010 = -(C139 * C146 * C123) / C100;
    const double hyz000001 = -(C161 * C139 * C122) / C100;
    const double hzz000100 = -(C120 * C115 * C183) / C100;
    const double hzz000010 = -(C139 * C135 * C183) / C100;
    const double hzz000001 =
        (C139 * C115 * C109 * ((-4 * C113) / C100 - (zAB * C181) / C100) * ae) /
        C100;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * hxx000100;
        hxx[(Ai + 0) * matrix_size + Bi + 1] += cc * hxx000010;
        hxx[(Ai + 0) * matrix_size + Bi + 2] += cc * hxx000001;
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * hxy000100;
        hxy[(Ai + 0) * matrix_size + Bi + 1] += cc * hxy000010;
        hxy[(Ai + 0) * matrix_size + Bi + 2] += cc * hxy000001;
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * hxz000100;
        hxz[(Ai + 0) * matrix_size + Bi + 1] += cc * hxz000010;
        hxz[(Ai + 0) * matrix_size + Bi + 2] += cc * hxz000001;
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * hyy000100;
        hyy[(Ai + 0) * matrix_size + Bi + 1] += cc * hyy000010;
        hyy[(Ai + 0) * matrix_size + Bi + 2] += cc * hyy000001;
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * hyz000100;
        hyz[(Ai + 0) * matrix_size + Bi + 1] += cc * hyz000010;
        hyz[(Ai + 0) * matrix_size + Bi + 2] += cc * hyz000001;
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * hzz000100;
        hzz[(Ai + 0) * matrix_size + Bi + 1] += cc * hzz000010;
        hzz[(Ai + 0) * matrix_size + Bi + 2] += cc * hzz000001;
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxx000100;
        hxx[(Ai + 0) * matrix_size + Bi + 1] -= cc * hxx000010;
        hxx[(Ai + 0) * matrix_size + Bi + 2] -= cc * hxx000001;
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxy000100;
        hxy[(Ai + 0) * matrix_size + Bi + 1] -= cc * hxy000010;
        hxy[(Ai + 0) * matrix_size + Bi + 2] -= cc * hxy000001;
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxz000100;
        hxz[(Ai + 0) * matrix_size + Bi + 1] -= cc * hxz000010;
        hxz[(Ai + 0) * matrix_size + Bi + 2] -= cc * hxz000001;
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyy000100;
        hyy[(Ai + 0) * matrix_size + Bi + 1] -= cc * hyy000010;
        hyy[(Ai + 0) * matrix_size + Bi + 2] -= cc * hyy000001;
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyz000100;
        hyz[(Ai + 0) * matrix_size + Bi + 1] -= cc * hyz000010;
        hyz[(Ai + 0) * matrix_size + Bi + 2] -= cc * hyz000001;
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hzz000100;
        hzz[(Ai + 0) * matrix_size + Bi + 1] -= cc * hzz000010;
        hzz[(Ai + 0) * matrix_size + Bi + 2] -= cc * hzz000001;
    }
}

// Automatically generated, do not edit
void overlap_second_derivative_02(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C480 = ae + be;
    const double C498 = zAB * ae;
    const double C497 = yAB * ae;
    const double C496 = 2 * C480;
    const double C495 = std::pow(C480, 2);
    const double C494 = xAB * ae;
    const double C499 = 1 / C496;
    const double C321 = C494 / (ae + be);
    const double C323 = std::pow(C494, 2) / C495 + C499;
    const double C378 = std::pow(C497, 2) / C495 + C499;
    const double C382 = C497 / C480;
    const double C419 = std::pow(C498, 2) / C495 + C499;
    const double C423 = C498 / C480;
    const double C328 = 0 * ae;
    const double C327 = 0 * be;
    const double C326 = ae * be;
    const double C325 = 0 * be;
    const double C324 = ae + be;
    const double C337 = C326 * zAB;
    const double C336 = C326 * yAB;
    const double C335 = C328 / C324;
    const double C334 = xAB * C325;
    const double C333 = 2 * C326;
    const double C332 = C326 * xAB;
    const double C331 = 2 * C324;
    const double C330 = std::pow(C324, 2);
    const double C329 = Pi / C324;
    const double C343 = C337 * 1;
    const double C342 = C336 * 1;
    const double C341 = C334 / C324;
    const double C340 = 2 * C330;
    const double C339 = C332 * 1;
    const double C338 = std::sqrt(C329);
    const double C353 = C338 * C323;
    const double C352 = 2 * C343;
    const double C351 = 2 * C342;
    const double C350 = C339 / C330;
    const double C349 = C327 / C340;
    const double C348 = 0 - C341;
    const double C347 = C338 * 1;
    const double C346 = C338 * 1;
    const double C345 = C325 / C340;
    const double C344 = 2 * C339;
    const double C358 = C338 * C352;
    const double C357 = C338 * C351;
    const double C356 = C335 - C350;
    const double C355 = C348 * ae;
    const double C354 = xAB * C344;
    const double C360 = C355 / C324;
    const double C359 = C354 / C324;
    const double C362 = C360 - C349;
    const double C361 = 1 - C359;
    const double C365 = C362 / C331;
    const double C364 = C361 * ae;
    const double C363 = C361 * C333;
    const double C366 = C364 / C324;
    const double C367 = C366 - C345;
    const double C368 = xAB * C367;
    const double C369 = C368 + C321;
    const double C370 = C369 * ae;
    const double C371 = C370 / C324;
    const double C372 = C365 + C371;
    const double C373 = C372 + C356;
    const double C374 = C338 * C373;
    const double C391 = C338 * 1;
    const double C390 = C338 * C344;
    const double C389 = C342 / C330;
    const double C388 = 0 * ae;
    const double C387 = yAB * C351;
    const double C386 = 0 * be;
    const double C385 = 0 * be;
    const double C384 = C338 * C378;
    const double C396 = C388 / C324;
    const double C395 = C385 / C340;
    const double C394 = C387 / C324;
    const double C393 = C386 / C340;
    const double C392 = yAB * C385;
    const double C399 = C396 - C389;
    const double C398 = 1 - C394;
    const double C397 = C392 / C324;
    const double C402 = C398 * C333;
    const double C401 = C398 * ae;
    const double C400 = 0 - C397;
    const double C404 = C401 / C324;
    const double C403 = C400 * ae;
    const double C406 = C404 - C395;
    const double C405 = C403 / C324;
    const double C408 = yAB * C406;
    const double C407 = C405 - C393;
    const double C410 = C408 + C382;
    const double C409 = C407 / C331;
    const double C411 = C410 * ae;
    const double C412 = C411 / C324;
    const double C413 = C409 + C412;
    const double C414 = C413 + C399;
    const double C415 = C338 * C414;
    const double C430 = C343 / C330;
    const double C429 = 0 * ae;
    const double C428 = zAB * C352;
    const double C427 = 0 * be;
    const double C426 = 0 * be;
    const double C425 = C338 * C419;
    const double C435 = C429 / C324;
    const double C434 = C426 / C340;
    const double C433 = C428 / C324;
    const double C432 = C427 / C340;
    const double C431 = zAB * C426;
    const double C438 = C435 - C430;
    const double C437 = 1 - C433;
    const double C436 = C431 / C324;
    const double C441 = C437 * C333;
    const double C440 = C437 * ae;
    const double C439 = 0 - C436;
    const double C443 = C440 / C324;
    const double C442 = C439 * ae;
    const double C445 = C443 - C434;
    const double C444 = C442 / C324;
    const double C447 = zAB * C445;
    const double C446 = C444 - C432;
    const double C449 = C447 + C423;
    const double C448 = C446 / C331;
    const double C450 = C449 * ae;
    const double C451 = C450 / C324;
    const double C452 = C448 + C451;
    const double C453 = C452 + C438;
    const double C454 = C338 * C453;
    const double C461 = C338 * C321;
    const double C460 = C338 * C406;
    const double C459 = C338 * C367;
    const double C458 = C338 * C382;
    const double C466 = C338 * C445;
    const double C465 = C338 * C423;
    const double C513 = zAB * C441;
    const double C512 = -4 * C343;
    const double C511 = yAB * C402;
    const double C510 = -4 * C342;
    const double C509 = C338 * C363;
    const double C508 = C338 * C441;
    const double C507 = C338 * C402;
    const double C506 = xAB * C363;
    const double C505 = -4 * C339;
    const double C504 = C330 * C331;
    const double C519 = C513 / C324;
    const double C518 = C512 / C324;
    const double C517 = C511 / C324;
    const double C516 = C510 / C324;
    const double C515 = C506 / C324;
    const double C514 = C505 / C324;
    const double C522 = C518 - C519;
    const double C521 = C516 - C517;
    const double C520 = C514 - C515;
    const double C525 = C522 * ae;
    const double C524 = C521 * ae;
    const double C523 = C520 * ae;
    const double C528 = C338 * C525;
    const double C527 = C338 * C524;
    const double C526 = C338 * C523;
    const double hxx000200 =
        C338 *
        ((ae * -2 * C325) / C504 +
         (((xAB * C523) / C324 + 2 * C367) * ae) / C324 - C363 / C340) *
        C346 * C347;
    const double hxx000020 = -(C347 * C384 * C509) / C324;
    const double hxx000002 = -(C425 * C346 * C509) / C324;
    const double hxx000110 = (C347 * C458 * C526) / C324;
    const double hxx000101 = (C465 * C346 * C526) / C324;
    const double hxx000011 = -(C465 * C458 * C509) / C324;
    const double hxy000200 = -(C347 * C374 * C357) / C324;
    const double hxy000020 = -(C347 * C415 * C390) / C324;
    const double hxy000002 = (C425 * C390 * C357) / C330;
    const double hxy000110 = C459 * C460 * C347;
    const double hxy000101 = -(C465 * C459 * C357) / C324;
    const double hxy000011 = -(C465 * C460 * C390) / C324;
    const double hxz000200 = -(C374 * C346 * C358) / C324;
    const double hxz000020 = (C384 * C390 * C358) / C330;
    const double hxz000002 = -(C454 * C346 * C390) / C324;
    const double hxz000110 = -(C459 * C458 * C358) / C324;
    const double hxz000101 = C459 * C346 * C466;
    const double hxz000011 = -(C466 * C458 * C390) / C324;
    const double hyy000200 = -(C347 * C353 * C507) / C324;
    const double hyy000020 =
        C391 * C338 *
        ((ae * -2 * C385) / C504 +
         (((yAB * C524) / C324 + 2 * C406) * ae) / C324 - C402 / C340) *
        C347;
    const double hyy000002 = -(C425 * C391 * C507) / C324;
    const double hyy000110 = (C347 * C461 * C527) / C324;
    const double hyy000101 = -(C465 * C461 * C507) / C324;
    const double hyy000011 = (C465 * C391 * C527) / C324;
    const double hyz000200 = (C353 * C357 * C358) / C330;
    const double hyz000020 = -(C391 * C415 * C358) / C324;
    const double hyz000002 = -(C454 * C391 * C357) / C324;
    const double hyz000110 = -(C461 * C460 * C358) / C324;
    const double hyz000101 = -(C466 * C461 * C357) / C324;
    const double hyz000011 = C391 * C460 * C466;
    const double hzz000200 = -(C353 * C346 * C508) / C324;
    const double hzz000020 = -(C391 * C384 * C508) / C324;
    const double hzz000002 =
        C391 * C346 * C338 *
        ((ae * -2 * C426) / C504 +
         (((zAB * C525) / C324 + 2 * C445) * ae) / C324 - C441 / C340);
    const double hzz000110 = -(C461 * C458 * C508) / C324;
    const double hzz000101 = (C461 * C346 * C528) / C324;
    const double hzz000011 = (C391 * C458 * C528) / C324;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx000110;
        hxx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx000011;
        hxx[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxx000200 - 0.5 * hxx000020 + hxx000002);
        hxx[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxx000101;
        hxx[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxx000200 - std::sqrt(0.75) * hxx000020);
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy000110;
        hxy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy000011;
        hxy[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxy000200 - 0.5 * hxy000020 + hxy000002);
        hxy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxy000101;
        hxy[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxy000200 - std::sqrt(0.75) * hxy000020);
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz000110;
        hxz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz000011;
        hxz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxz000200 - 0.5 * hxz000020 + hxz000002);
        hxz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxz000101;
        hxz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxz000200 - std::sqrt(0.75) * hxz000020);
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy000110;
        hyy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy000011;
        hyy[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyy000200 - 0.5 * hyy000020 + hyy000002);
        hyy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyy000101;
        hyy[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyy000200 - std::sqrt(0.75) * hyy000020);
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz000110;
        hyz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz000011;
        hyz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyz000200 - 0.5 * hyz000020 + hyz000002);
        hyz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyz000101;
        hyz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyz000200 - std::sqrt(0.75) * hyz000020);
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz000110;
        hzz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz000011;
        hzz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hzz000200 - 0.5 * hzz000020 + hzz000002);
        hzz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hzz000101;
        hzz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hzz000200 - std::sqrt(0.75) * hzz000020);
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx000110;
        hxx[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx000011;
        hxx[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxx000200 - 0.5 * hxx000020 + hxx000002);
        hxx[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxx000101;
        hxx[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxx000200 - std::sqrt(0.75) * hxx000020);
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy000110;
        hxy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy000011;
        hxy[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxy000200 - 0.5 * hxy000020 + hxy000002);
        hxy[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxy000101;
        hxy[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxy000200 - std::sqrt(0.75) * hxy000020);
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz000110;
        hxz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz000011;
        hxz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxz000200 - 0.5 * hxz000020 + hxz000002);
        hxz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxz000101;
        hxz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxz000200 - std::sqrt(0.75) * hxz000020);
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy000110;
        hyy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy000011;
        hyy[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyy000200 - 0.5 * hyy000020 + hyy000002);
        hyy[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyy000101;
        hyy[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyy000200 - std::sqrt(0.75) * hyy000020);
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz000110;
        hyz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz000011;
        hyz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyz000200 - 0.5 * hyz000020 + hyz000002);
        hyz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyz000101;
        hyz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyz000200 - std::sqrt(0.75) * hyz000020);
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz000110;
        hzz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz000011;
        hzz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hzz000200 - 0.5 * hzz000020 + hzz000002);
        hzz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hzz000101;
        hzz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hzz000200 - std::sqrt(0.75) * hzz000020);
    }
}

// Automatically generated, do not edit
void overlap_second_derivative_10(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C1013 = ae + be;
    const double C933 = -(xAB * be) / C1013;
    const double C968 = -(yAB * be) / C1013;
    const double C987 = -(zAB * be) / C1013;
    const double C936 = 0 * be;
    const double C935 = ae * be;
    const double C934 = ae + be;
    const double C943 = C935 * zAB;
    const double C942 = C935 * yAB;
    const double C941 = 2 * C934;
    const double C940 = C936 / C934;
    const double C939 = 2 * C935;
    const double C938 = C935 * xAB;
    const double C937 = Pi / C934;
    const double C948 = C943 * 1;
    const double C947 = C942 * 1;
    const double C946 = -C940;
    const double C945 = C938 * 1;
    const double C944 = std::sqrt(C937);
    const double C955 = C944 * C933;
    const double C954 = 2 * C948;
    const double C953 = 2 * C947;
    const double C952 = C946 / C941;
    const double C951 = 2 * C945;
    const double C950 = C944 * 1;
    const double C949 = C944 * 1;
    const double C958 = C944 * C954;
    const double C957 = C944 * C953;
    const double C956 = xAB * C951;
    const double C959 = C956 / C934;
    const double C960 = 1 - C959;
    const double C961 = C960 * be;
    const double C962 = C961 / C934;
    const double C963 = C952 - C962;
    const double C964 = C944 * C963;
    const double C974 = C944 * 1;
    const double C973 = C944 * C951;
    const double C972 = yAB * C953;
    const double C971 = 0 * be;
    const double C970 = C944 * C968;
    const double C976 = C972 / C934;
    const double C975 = C971 / C934;
    const double C978 = 1 - C976;
    const double C977 = -C975;
    const double C980 = C978 * be;
    const double C979 = C977 / C941;
    const double C981 = C980 / C934;
    const double C982 = C979 - C981;
    const double C983 = C944 * C982;
    const double C991 = zAB * C954;
    const double C990 = 0 * be;
    const double C989 = C944 * C987;
    const double C993 = C991 / C934;
    const double C992 = C990 / C934;
    const double C995 = 1 - C993;
    const double C994 = -C992;
    const double C997 = C995 * be;
    const double C996 = C994 / C941;
    const double C998 = C997 / C934;
    const double C999 = C996 - C998;
    const double C1000 = C944 * C999;
    const double C1021 = C995 * C939;
    const double C1020 = std::pow(C934, 2);
    const double C1019 = C978 * C939;
    const double C1018 = C960 * C939;
    const double C1024 = C944 * C1018;
    const double C1023 = C944 * C1021;
    const double C1022 = C944 * C1019;
    const double hxx100000 =
        -(C949 * C950 * C944 * ((-4 * C945) / C934 - (xAB * C1018) / C934) *
          be) /
        C934;
    const double hxx010000 = -(C949 * C970 * C1024) / C934;
    const double hxx001000 = -(C989 * C950 * C1024) / C934;
    const double hxy100000 = -(C949 * C964 * C957) / C934;
    const double hxy010000 = -(C949 * C983 * C973) / C934;
    const double hxy001000 = (C989 * C973 * C957) / C1020;
    const double hxz100000 = -(C964 * C950 * C958) / C934;
    const double hxz010000 = (C970 * C973 * C958) / C1020;
    const double hxz001000 = -(C1000 * C950 * C973) / C934;
    const double hyy100000 = -(C949 * C955 * C1022) / C934;
    const double hyy010000 =
        -(C949 * C974 * C944 * ((-4 * C947) / C934 - (yAB * C1019) / C934) *
          be) /
        C934;
    const double hyy001000 = -(C989 * C974 * C1022) / C934;
    const double hyz100000 = (C955 * C957 * C958) / C1020;
    const double hyz010000 = -(C974 * C983 * C958) / C934;
    const double hyz001000 = -(C1000 * C974 * C957) / C934;
    const double hzz100000 = -(C955 * C950 * C1023) / C934;
    const double hzz010000 = -(C974 * C970 * C1023) / C934;
    const double hzz001000 =
        -(C974 * C950 * C944 * ((-4 * C948) / C934 - (zAB * C1021) / C934) *
          be) /
        C934;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * hxx100000;
        hxx[(Ai + 1) * matrix_size + Bi + 0] += cc * hxx010000;
        hxx[(Ai + 2) * matrix_size + Bi + 0] += cc * hxx001000;
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * hxy100000;
        hxy[(Ai + 1) * matrix_size + Bi + 0] += cc * hxy010000;
        hxy[(Ai + 2) * matrix_size + Bi + 0] += cc * hxy001000;
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * hxz100000;
        hxz[(Ai + 1) * matrix_size + Bi + 0] += cc * hxz010000;
        hxz[(Ai + 2) * matrix_size + Bi + 0] += cc * hxz001000;
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * hyy100000;
        hyy[(Ai + 1) * matrix_size + Bi + 0] += cc * hyy010000;
        hyy[(Ai + 2) * matrix_size + Bi + 0] += cc * hyy001000;
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * hyz100000;
        hyz[(Ai + 1) * matrix_size + Bi + 0] += cc * hyz010000;
        hyz[(Ai + 2) * matrix_size + Bi + 0] += cc * hyz001000;
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * hzz100000;
        hzz[(Ai + 1) * matrix_size + Bi + 0] += cc * hzz010000;
        hzz[(Ai + 2) * matrix_size + Bi + 0] += cc * hzz001000;
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxx100000;
        hxx[(Ai + 1) * matrix_size + Bi + 0] -= cc * hxx010000;
        hxx[(Ai + 2) * matrix_size + Bi + 0] -= cc * hxx001000;
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxy100000;
        hxy[(Ai + 1) * matrix_size + Bi + 0] -= cc * hxy010000;
        hxy[(Ai + 2) * matrix_size + Bi + 0] -= cc * hxy001000;
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxz100000;
        hxz[(Ai + 1) * matrix_size + Bi + 0] -= cc * hxz010000;
        hxz[(Ai + 2) * matrix_size + Bi + 0] -= cc * hxz001000;
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyy100000;
        hyy[(Ai + 1) * matrix_size + Bi + 0] -= cc * hyy010000;
        hyy[(Ai + 2) * matrix_size + Bi + 0] -= cc * hyy001000;
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyz100000;
        hyz[(Ai + 1) * matrix_size + Bi + 0] -= cc * hyz010000;
        hyz[(Ai + 2) * matrix_size + Bi + 0] -= cc * hyz001000;
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hzz100000;
        hzz[(Ai + 1) * matrix_size + Bi + 0] -= cc * hzz010000;
        hzz[(Ai + 2) * matrix_size + Bi + 0] -= cc * hzz001000;
    }
}

// Automatically generated, do not edit
void overlap_second_derivative_11(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C1355 = ae + be;
    const double C1379 = zAB * be;
    const double C1378 = yAB * be;
    const double C1377 = zAB * ae;
    const double C1376 = yAB * ae;
    const double C1375 = std::pow(C1355, 2);
    const double C1374 = xAB * be;
    const double C1373 = 2 * C1355;
    const double C1372 = xAB * ae;
    const double C1380 = 1 / C1373;
    const double C1161 = C1372 / (ae + be);
    const double C1163 = C1380 - (C1372 * C1374) / C1375;
    const double C1218 = C1376 / C1355;
    const double C1220 = -C1374 / C1355;
    const double C1242 = C1377 / C1355;
    const double C1257 = -C1378 / C1355;
    const double C1271 = C1380 - (C1376 * C1378) / C1375;
    const double C1304 = -C1379 / C1355;
    const double C1318 = C1380 - (C1377 * C1379) / C1375;
    const double C1168 = 0 * ae;
    const double C1167 = 0 * be;
    const double C1166 = ae * be;
    const double C1165 = 0 * be;
    const double C1164 = ae + be;
    const double C1177 = C1166 * zAB;
    const double C1176 = C1166 * yAB;
    const double C1175 = C1168 / C1164;
    const double C1174 = xAB * C1165;
    const double C1173 = 2 * C1166;
    const double C1172 = C1166 * xAB;
    const double C1171 = 2 * C1164;
    const double C1170 = std::pow(C1164, 2);
    const double C1169 = Pi / C1164;
    const double C1183 = C1177 * 1;
    const double C1182 = C1176 * 1;
    const double C1181 = C1174 / C1164;
    const double C1180 = 2 * C1170;
    const double C1179 = C1172 * 1;
    const double C1178 = std::sqrt(C1169);
    const double C1193 = C1178 * C1163;
    const double C1192 = 2 * C1183;
    const double C1191 = 2 * C1182;
    const double C1190 = C1179 / C1170;
    const double C1189 = C1167 / C1180;
    const double C1188 = 0 - C1181;
    const double C1187 = C1178 * 1;
    const double C1186 = C1178 * 1;
    const double C1185 = C1165 / C1180;
    const double C1184 = 2 * C1179;
    const double C1198 = C1178 * C1192;
    const double C1197 = C1178 * C1191;
    const double C1196 = C1175 - C1190;
    const double C1195 = C1188 * ae;
    const double C1194 = xAB * C1184;
    const double C1200 = C1195 / C1164;
    const double C1199 = C1194 / C1164;
    const double C1202 = C1200 - C1189;
    const double C1201 = 1 - C1199;
    const double C1205 = C1202 / C1171;
    const double C1204 = C1201 * ae;
    const double C1203 = C1201 * C1173;
    const double C1206 = C1204 / C1164;
    const double C1207 = C1206 - C1185;
    const double C1208 = xAB * C1207;
    const double C1209 = C1208 + C1161;
    const double C1210 = C1209 * be;
    const double C1211 = C1210 / C1164;
    const double C1212 = C1205 - C1211;
    const double C1213 = C1212 + C1196;
    const double C1214 = C1178 * C1213;
    const double C1226 = C1178 * C1220;
    const double C1225 = 0 * be;
    const double C1224 = yAB * C1191;
    const double C1223 = C1201 * be;
    const double C1222 = C1165 / C1164;
    const double C1221 = C1178 * C1218;
    const double C1230 = C1225 / C1180;
    const double C1229 = C1224 / C1164;
    const double C1228 = C1223 / C1164;
    const double C1227 = -C1222;
    const double C1232 = 1 - C1229;
    const double C1231 = C1227 / C1171;
    const double C1234 = C1232 * ae;
    const double C1233 = C1231 - C1228;
    const double C1236 = C1234 / C1164;
    const double C1235 = C1178 * C1233;
    const double C1237 = C1236 - C1230;
    const double C1238 = C1178 * C1237;
    const double C1246 = 0 * be;
    const double C1245 = zAB * C1192;
    const double C1244 = C1178 * C1242;
    const double C1248 = C1246 / C1180;
    const double C1247 = C1245 / C1164;
    const double C1249 = 1 - C1247;
    const double C1250 = C1249 * ae;
    const double C1251 = C1250 / C1164;
    const double C1252 = C1251 - C1248;
    const double C1253 = C1178 * C1252;
    const double C1262 = C1178 * C1161;
    const double C1261 = C1232 * be;
    const double C1260 = C1225 / C1164;
    const double C1259 = C1178 * C1207;
    const double C1258 = C1178 * C1257;
    const double C1264 = C1261 / C1164;
    const double C1263 = -C1260;
    const double C1265 = C1263 / C1171;
    const double C1266 = C1265 - C1264;
    const double C1267 = C1178 * C1266;
    const double C1283 = C1232 * C1173;
    const double C1282 = C1178 * 1;
    const double C1281 = C1178 * C1184;
    const double C1280 = C1182 / C1170;
    const double C1279 = 0 * ae;
    const double C1278 = yAB * C1237;
    const double C1277 = 0 * be;
    const double C1276 = yAB * C1225;
    const double C1275 = C1178 * C1271;
    const double C1287 = C1279 / C1164;
    const double C1286 = C1278 + C1218;
    const double C1285 = C1277 / C1180;
    const double C1284 = C1276 / C1164;
    const double C1290 = C1287 - C1280;
    const double C1289 = C1286 * be;
    const double C1288 = 0 - C1284;
    const double C1292 = C1289 / C1164;
    const double C1291 = C1288 * ae;
    const double C1293 = C1291 / C1164;
    const double C1294 = C1293 - C1285;
    const double C1295 = C1294 / C1171;
    const double C1296 = C1295 - C1292;
    const double C1297 = C1296 + C1290;
    const double C1298 = C1178 * C1297;
    const double C1307 = C1249 * be;
    const double C1306 = C1246 / C1164;
    const double C1305 = C1178 * C1304;
    const double C1309 = C1307 / C1164;
    const double C1308 = -C1306;
    const double C1310 = C1308 / C1171;
    const double C1311 = C1310 - C1309;
    const double C1312 = C1178 * C1311;
    const double C1328 = C1249 * C1173;
    const double C1327 = C1183 / C1170;
    const double C1326 = 0 * ae;
    const double C1325 = zAB * C1252;
    const double C1324 = 0 * be;
    const double C1323 = zAB * C1246;
    const double C1322 = C1178 * C1318;
    const double C1332 = C1326 / C1164;
    const double C1331 = C1325 + C1242;
    const double C1330 = C1324 / C1180;
    const double C1329 = C1323 / C1164;
    const double C1335 = C1332 - C1327;
    const double C1334 = C1331 * be;
    const double C1333 = 0 - C1329;
    const double C1337 = C1334 / C1164;
    const double C1336 = C1333 * ae;
    const double C1338 = C1336 / C1164;
    const double C1339 = C1338 - C1330;
    const double C1340 = C1339 / C1171;
    const double C1341 = C1340 - C1337;
    const double C1342 = C1341 + C1335;
    const double C1343 = C1178 * C1342;
    const double C1394 = C1178 * C1203;
    const double C1393 = zAB * C1328;
    const double C1392 = -4 * C1183;
    const double C1391 = yAB * C1283;
    const double C1390 = -4 * C1182;
    const double C1389 = C1178 * C1328;
    const double C1388 = C1178 * C1283;
    const double C1387 = xAB * C1203;
    const double C1386 = -4 * C1179;
    const double C1385 = C1170 * C1171;
    const double C1400 = C1393 / C1164;
    const double C1399 = C1392 / C1164;
    const double C1398 = C1391 / C1164;
    const double C1397 = C1390 / C1164;
    const double C1396 = C1387 / C1164;
    const double C1395 = C1386 / C1164;
    const double C1403 = C1399 - C1400;
    const double C1402 = C1397 - C1398;
    const double C1401 = C1395 - C1396;
    const double C1409 = C1403 * be;
    const double C1408 = C1402 * be;
    const double C1407 = C1403 * ae;
    const double C1406 = C1402 * ae;
    const double C1405 = C1401 * be;
    const double C1404 = C1401 * ae;
    const double C1415 = C1178 * C1409;
    const double C1414 = C1178 * C1408;
    const double C1413 = C1178 * C1404;
    const double C1412 = C1178 * C1407;
    const double C1411 = C1178 * C1406;
    const double C1410 = C1178 * C1405;
    const double hxx100100 =
        C1178 *
        ((ae * -2 * C1165) / C1385 -
         (((xAB * C1404) / C1164 + 2 * C1207) * be) / C1164 - C1203 / C1180) *
        C1186 * C1187;
    const double hxx100010 = -(C1187 * C1221 * C1410) / C1164;
    const double hxx100001 = -(C1244 * C1186 * C1410) / C1164;
    const double hxx010100 = (C1187 * C1258 * C1413) / C1164;
    const double hxx010010 = -(C1187 * C1275 * C1394) / C1164;
    const double hxx010001 = -(C1244 * C1258 * C1394) / C1164;
    const double hxx001100 = (C1305 * C1186 * C1413) / C1164;
    const double hxx001010 = -(C1305 * C1221 * C1394) / C1164;
    const double hxx001001 = -(C1322 * C1186 * C1394) / C1164;
    const double hxy100100 = -(C1187 * C1214 * C1197) / C1164;
    const double hxy100010 = C1235 * C1238 * C1187;
    const double hxy100001 = -(C1244 * C1235 * C1197) / C1164;
    const double hxy010100 = C1259 * C1267 * C1187;
    const double hxy010010 = -(C1187 * C1298 * C1281) / C1164;
    const double hxy010001 = -(C1244 * C1267 * C1281) / C1164;
    const double hxy001100 = -(C1305 * C1259 * C1197) / C1164;
    const double hxy001010 = -(C1305 * C1238 * C1281) / C1164;
    const double hxy001001 = (C1322 * C1281 * C1197) / C1170;
    const double hxz100100 = -(C1214 * C1186 * C1198) / C1164;
    const double hxz100010 = -(C1235 * C1221 * C1198) / C1164;
    const double hxz100001 = C1235 * C1186 * C1253;
    const double hxz010100 = -(C1259 * C1258 * C1198) / C1164;
    const double hxz010010 = (C1275 * C1281 * C1198) / C1170;
    const double hxz010001 = -(C1253 * C1258 * C1281) / C1164;
    const double hxz001100 = C1259 * C1186 * C1312;
    const double hxz001010 = -(C1312 * C1221 * C1281) / C1164;
    const double hxz001001 = -(C1343 * C1186 * C1281) / C1164;
    const double hyy100100 = -(C1187 * C1193 * C1388) / C1164;
    const double hyy100010 = (C1187 * C1226 * C1411) / C1164;
    const double hyy100001 = -(C1244 * C1226 * C1388) / C1164;
    const double hyy010100 = -(C1187 * C1262 * C1414) / C1164;
    const double hyy010010 =
        C1282 * C1178 *
        ((ae * -2 * C1225) / C1385 -
         (((yAB * C1406) / C1164 + 2 * C1237) * be) / C1164 - C1283 / C1180) *
        C1187;
    const double hyy010001 = -(C1244 * C1282 * C1414) / C1164;
    const double hyy001100 = -(C1305 * C1262 * C1388) / C1164;
    const double hyy001010 = (C1305 * C1282 * C1411) / C1164;
    const double hyy001001 = -(C1322 * C1282 * C1388) / C1164;
    const double hyz100100 = (C1193 * C1197 * C1198) / C1170;
    const double hyz100010 = -(C1226 * C1238 * C1198) / C1164;
    const double hyz100001 = -(C1253 * C1226 * C1197) / C1164;
    const double hyz010100 = -(C1262 * C1267 * C1198) / C1164;
    const double hyz010010 = -(C1282 * C1298 * C1198) / C1164;
    const double hyz010001 = C1282 * C1267 * C1253;
    const double hyz001100 = -(C1312 * C1262 * C1197) / C1164;
    const double hyz001010 = C1282 * C1238 * C1312;
    const double hyz001001 = -(C1343 * C1282 * C1197) / C1164;
    const double hzz100100 = -(C1193 * C1186 * C1389) / C1164;
    const double hzz100010 = -(C1226 * C1221 * C1389) / C1164;
    const double hzz100001 = (C1226 * C1186 * C1412) / C1164;
    const double hzz010100 = -(C1262 * C1258 * C1389) / C1164;
    const double hzz010010 = -(C1282 * C1275 * C1389) / C1164;
    const double hzz010001 = (C1282 * C1258 * C1412) / C1164;
    const double hzz001100 = -(C1262 * C1186 * C1415) / C1164;
    const double hzz001010 = -(C1282 * C1221 * C1415) / C1164;
    const double hzz001001 =
        C1282 * C1186 * C1178 *
        ((ae * -2 * C1246) / C1385 -
         (((zAB * C1407) / C1164 + 2 * C1252) * be) / C1164 - C1328 / C1180);
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * hxx100100;
        hxx[(Ai + 0) * matrix_size + Bi + 1] += cc * hxx100010;
        hxx[(Ai + 0) * matrix_size + Bi + 2] += cc * hxx100001;
        hxx[(Ai + 1) * matrix_size + Bi + 0] += cc * hxx010100;
        hxx[(Ai + 1) * matrix_size + Bi + 1] += cc * hxx010010;
        hxx[(Ai + 1) * matrix_size + Bi + 2] += cc * hxx010001;
        hxx[(Ai + 2) * matrix_size + Bi + 0] += cc * hxx001100;
        hxx[(Ai + 2) * matrix_size + Bi + 1] += cc * hxx001010;
        hxx[(Ai + 2) * matrix_size + Bi + 2] += cc * hxx001001;
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * hxy100100;
        hxy[(Ai + 0) * matrix_size + Bi + 1] += cc * hxy100010;
        hxy[(Ai + 0) * matrix_size + Bi + 2] += cc * hxy100001;
        hxy[(Ai + 1) * matrix_size + Bi + 0] += cc * hxy010100;
        hxy[(Ai + 1) * matrix_size + Bi + 1] += cc * hxy010010;
        hxy[(Ai + 1) * matrix_size + Bi + 2] += cc * hxy010001;
        hxy[(Ai + 2) * matrix_size + Bi + 0] += cc * hxy001100;
        hxy[(Ai + 2) * matrix_size + Bi + 1] += cc * hxy001010;
        hxy[(Ai + 2) * matrix_size + Bi + 2] += cc * hxy001001;
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * hxz100100;
        hxz[(Ai + 0) * matrix_size + Bi + 1] += cc * hxz100010;
        hxz[(Ai + 0) * matrix_size + Bi + 2] += cc * hxz100001;
        hxz[(Ai + 1) * matrix_size + Bi + 0] += cc * hxz010100;
        hxz[(Ai + 1) * matrix_size + Bi + 1] += cc * hxz010010;
        hxz[(Ai + 1) * matrix_size + Bi + 2] += cc * hxz010001;
        hxz[(Ai + 2) * matrix_size + Bi + 0] += cc * hxz001100;
        hxz[(Ai + 2) * matrix_size + Bi + 1] += cc * hxz001010;
        hxz[(Ai + 2) * matrix_size + Bi + 2] += cc * hxz001001;
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * hyy100100;
        hyy[(Ai + 0) * matrix_size + Bi + 1] += cc * hyy100010;
        hyy[(Ai + 0) * matrix_size + Bi + 2] += cc * hyy100001;
        hyy[(Ai + 1) * matrix_size + Bi + 0] += cc * hyy010100;
        hyy[(Ai + 1) * matrix_size + Bi + 1] += cc * hyy010010;
        hyy[(Ai + 1) * matrix_size + Bi + 2] += cc * hyy010001;
        hyy[(Ai + 2) * matrix_size + Bi + 0] += cc * hyy001100;
        hyy[(Ai + 2) * matrix_size + Bi + 1] += cc * hyy001010;
        hyy[(Ai + 2) * matrix_size + Bi + 2] += cc * hyy001001;
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * hyz100100;
        hyz[(Ai + 0) * matrix_size + Bi + 1] += cc * hyz100010;
        hyz[(Ai + 0) * matrix_size + Bi + 2] += cc * hyz100001;
        hyz[(Ai + 1) * matrix_size + Bi + 0] += cc * hyz010100;
        hyz[(Ai + 1) * matrix_size + Bi + 1] += cc * hyz010010;
        hyz[(Ai + 1) * matrix_size + Bi + 2] += cc * hyz010001;
        hyz[(Ai + 2) * matrix_size + Bi + 0] += cc * hyz001100;
        hyz[(Ai + 2) * matrix_size + Bi + 1] += cc * hyz001010;
        hyz[(Ai + 2) * matrix_size + Bi + 2] += cc * hyz001001;
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * hzz100100;
        hzz[(Ai + 0) * matrix_size + Bi + 1] += cc * hzz100010;
        hzz[(Ai + 0) * matrix_size + Bi + 2] += cc * hzz100001;
        hzz[(Ai + 1) * matrix_size + Bi + 0] += cc * hzz010100;
        hzz[(Ai + 1) * matrix_size + Bi + 1] += cc * hzz010010;
        hzz[(Ai + 1) * matrix_size + Bi + 2] += cc * hzz010001;
        hzz[(Ai + 2) * matrix_size + Bi + 0] += cc * hzz001100;
        hzz[(Ai + 2) * matrix_size + Bi + 1] += cc * hzz001010;
        hzz[(Ai + 2) * matrix_size + Bi + 2] += cc * hzz001001;
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxx100100;
        hxx[(Ai + 0) * matrix_size + Bi + 1] -= cc * hxx100010;
        hxx[(Ai + 0) * matrix_size + Bi + 2] -= cc * hxx100001;
        hxx[(Ai + 1) * matrix_size + Bi + 0] -= cc * hxx010100;
        hxx[(Ai + 1) * matrix_size + Bi + 1] -= cc * hxx010010;
        hxx[(Ai + 1) * matrix_size + Bi + 2] -= cc * hxx010001;
        hxx[(Ai + 2) * matrix_size + Bi + 0] -= cc * hxx001100;
        hxx[(Ai + 2) * matrix_size + Bi + 1] -= cc * hxx001010;
        hxx[(Ai + 2) * matrix_size + Bi + 2] -= cc * hxx001001;
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxy100100;
        hxy[(Ai + 0) * matrix_size + Bi + 1] -= cc * hxy100010;
        hxy[(Ai + 0) * matrix_size + Bi + 2] -= cc * hxy100001;
        hxy[(Ai + 1) * matrix_size + Bi + 0] -= cc * hxy010100;
        hxy[(Ai + 1) * matrix_size + Bi + 1] -= cc * hxy010010;
        hxy[(Ai + 1) * matrix_size + Bi + 2] -= cc * hxy010001;
        hxy[(Ai + 2) * matrix_size + Bi + 0] -= cc * hxy001100;
        hxy[(Ai + 2) * matrix_size + Bi + 1] -= cc * hxy001010;
        hxy[(Ai + 2) * matrix_size + Bi + 2] -= cc * hxy001001;
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxz100100;
        hxz[(Ai + 0) * matrix_size + Bi + 1] -= cc * hxz100010;
        hxz[(Ai + 0) * matrix_size + Bi + 2] -= cc * hxz100001;
        hxz[(Ai + 1) * matrix_size + Bi + 0] -= cc * hxz010100;
        hxz[(Ai + 1) * matrix_size + Bi + 1] -= cc * hxz010010;
        hxz[(Ai + 1) * matrix_size + Bi + 2] -= cc * hxz010001;
        hxz[(Ai + 2) * matrix_size + Bi + 0] -= cc * hxz001100;
        hxz[(Ai + 2) * matrix_size + Bi + 1] -= cc * hxz001010;
        hxz[(Ai + 2) * matrix_size + Bi + 2] -= cc * hxz001001;
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyy100100;
        hyy[(Ai + 0) * matrix_size + Bi + 1] -= cc * hyy100010;
        hyy[(Ai + 0) * matrix_size + Bi + 2] -= cc * hyy100001;
        hyy[(Ai + 1) * matrix_size + Bi + 0] -= cc * hyy010100;
        hyy[(Ai + 1) * matrix_size + Bi + 1] -= cc * hyy010010;
        hyy[(Ai + 1) * matrix_size + Bi + 2] -= cc * hyy010001;
        hyy[(Ai + 2) * matrix_size + Bi + 0] -= cc * hyy001100;
        hyy[(Ai + 2) * matrix_size + Bi + 1] -= cc * hyy001010;
        hyy[(Ai + 2) * matrix_size + Bi + 2] -= cc * hyy001001;
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyz100100;
        hyz[(Ai + 0) * matrix_size + Bi + 1] -= cc * hyz100010;
        hyz[(Ai + 0) * matrix_size + Bi + 2] -= cc * hyz100001;
        hyz[(Ai + 1) * matrix_size + Bi + 0] -= cc * hyz010100;
        hyz[(Ai + 1) * matrix_size + Bi + 1] -= cc * hyz010010;
        hyz[(Ai + 1) * matrix_size + Bi + 2] -= cc * hyz010001;
        hyz[(Ai + 2) * matrix_size + Bi + 0] -= cc * hyz001100;
        hyz[(Ai + 2) * matrix_size + Bi + 1] -= cc * hyz001010;
        hyz[(Ai + 2) * matrix_size + Bi + 2] -= cc * hyz001001;
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hzz100100;
        hzz[(Ai + 0) * matrix_size + Bi + 1] -= cc * hzz100010;
        hzz[(Ai + 0) * matrix_size + Bi + 2] -= cc * hzz100001;
        hzz[(Ai + 1) * matrix_size + Bi + 0] -= cc * hzz010100;
        hzz[(Ai + 1) * matrix_size + Bi + 1] -= cc * hzz010010;
        hzz[(Ai + 1) * matrix_size + Bi + 2] -= cc * hzz010001;
        hzz[(Ai + 2) * matrix_size + Bi + 0] -= cc * hzz001100;
        hzz[(Ai + 2) * matrix_size + Bi + 1] -= cc * hzz001010;
        hzz[(Ai + 2) * matrix_size + Bi + 2] -= cc * hzz001001;
    }
}

// Automatically generated, do not edit
void overlap_second_derivative_12(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C2822 = ae + be;
    const double C2827 = xAB * be;
    const double C2826 = xAB * ae;
    const double C2825 = 2 * C2822;
    const double C2845 = yAB * be;
    const double C2844 = yAB * ae;
    const double C2854 = zAB * be;
    const double C2853 = zAB * ae;
    const double C2870 = C2853 * C2854;
    const double C2869 = std::pow(C2825, -1);
    const double C2868 = C2844 * C2845;
    const double C2867 = zAB * ae;
    const double C2866 = yAB * ae;
    const double C2865 = C2827 / C2822;
    const double C2864 = 1 / C2825;
    const double C2863 = std::pow(C2822, 2);
    const double C2862 = 2 * C2822;
    const double C2861 = xAB * ae;
    const double C2872 = C2870 / C2863;
    const double C2871 = C2868 / C2863;
    const double C2874 = C2864 - C2872;
    const double C2873 = C2864 - C2871;
    const double C2450 = C2861 / (ae + be);
    const double C2457 = 1 / C2862 - (C2861 * xAB * be) / C2863;
    const double C2458 = std::pow(C2862, -1);
    const double C2459 = ((C2864 - (C2826 * C2827) / C2863) * C2826) / C2822 +
                         (C2826 / C2822 - C2865) / C2825;
    const double C2552 = std::pow(C2866, 2) / C2863 + C2864;
    const double C2556 = C2866 / C2822;
    const double C2558 = -C2865;
    const double C2599 = std::pow(C2867, 2) / C2863 + C2864;
    const double C2603 = C2867 / C2822;
    const double C2652 = -(yAB * be) / C2822;
    const double C2653 = std::pow(C2826, 2) / C2863 + C2864;
    const double C2671 =
        (C2873 * C2844) / C2822 + (C2844 / C2822 - C2845 / C2822) / C2825;
    const double C2737 = -(zAB * be) / C2822;
    const double C2751 =
        (C2874 * C2853) / C2822 + (C2853 / C2822 - C2854 / C2822) / C2825;
    const double C2465 = 0 * be;
    const double C2464 = 0 * ae;
    const double C2463 = ae * be;
    const double C2462 = 0 * be;
    const double C2461 = 0 * be;
    const double C2460 = ae + be;
    const double C2477 = C2463 * zAB;
    const double C2476 = C2463 * yAB;
    const double C2475 = C2462 / C2460;
    const double C2474 = xAB * C2461;
    const double C2473 = C2464 / C2460;
    const double C2472 = 2 * C2463;
    const double C2471 = C2463 * xAB;
    const double C2470 = xAB * C2462;
    const double C2469 = -2 * C2462;
    const double C2468 = 2 * C2460;
    const double C2467 = std::pow(C2460, 2);
    const double C2466 = Pi / C2460;
    const double C2486 = C2477 * 1;
    const double C2485 = C2476 * 1;
    const double C2484 = C2474 / C2460;
    const double C2483 = C2471 * 1;
    const double C2482 = 2 * C2467;
    const double C2481 = C2470 / C2460;
    const double C2480 = ae * C2469;
    const double C2479 = C2467 * C2468;
    const double C2478 = std::sqrt(C2466);
    const double C2499 = C2478 * C2459;
    const double C2498 = 2 * C2486;
    const double C2497 = 2 * C2485;
    const double C2496 = C2465 / C2482;
    const double C2495 = 0 - C2484;
    const double C2494 = C2478 * 1;
    const double C2493 = C2478 * 1;
    const double C2492 = C2483 / C2467;
    const double C2491 = C2462 / C2482;
    const double C2490 = 2 * C2483;
    const double C2489 = -4 * C2483;
    const double C2488 = C2461 / C2482;
    const double C2487 = 0 - C2481;
    const double C2506 = C2478 * C2498;
    const double C2505 = C2478 * C2497;
    const double C2504 = C2495 * ae;
    const double C2503 = C2473 - C2492;
    const double C2502 = xAB * C2490;
    const double C2501 = C2489 / C2460;
    const double C2500 = C2487 * ae;
    const double C2510 = xAB * C2503;
    const double C2509 = C2504 / C2460;
    const double C2508 = C2502 / C2460;
    const double C2507 = C2500 / C2460;
    const double C2514 = C2510 + C2458;
    const double C2513 = C2509 - C2496;
    const double C2512 = 1 - C2508;
    const double C2511 = C2507 - C2488;
    const double C2520 = C2514 * be;
    const double C2519 = xAB * C2511;
    const double C2518 = C2513 + C2475;
    const double C2517 = C2511 / C2468;
    const double C2516 = C2512 * ae;
    const double C2515 = C2512 * C2472;
    const double C2525 = C2520 / C2460;
    const double C2524 = C2519 + 0;
    const double C2523 = C2518 / C2468;
    const double C2522 = C2516 / C2460;
    const double C2521 = xAB * C2515;
    const double C2528 = C2524 * be;
    const double C2527 = C2522 - C2491;
    const double C2526 = C2521 / C2460;
    const double C2532 = C2527 / C2468;
    const double C2531 = C2528 / C2460;
    const double C2530 = xAB * C2527;
    const double C2529 = C2501 - C2526;
    const double C2536 = C2532 - C2525;
    const double C2535 = C2523 - C2531;
    const double C2534 = C2530 + C2450;
    const double C2533 = C2529 * ae;
    const double C2538 = C2535 / C2468;
    const double C2537 = C2534 * be;
    const double C2539 = C2537 / C2460;
    const double C2540 = C2517 - C2539;
    const double C2541 = C2540 + C2503;
    const double C2542 = xAB * C2541;
    const double C2543 = C2542 + C2457;
    const double C2544 = C2543 * ae;
    const double C2545 = C2544 / C2460;
    const double C2546 = C2538 + C2545;
    const double C2547 = C2546 + C2536;
    const double C2548 = C2478 * C2547;
    const double C2567 = C2478 * C2558;
    const double C2566 = C2485 / C2467;
    const double C2565 = 0 * ae;
    const double C2564 = yAB * C2497;
    const double C2563 = 0 * be;
    const double C2562 = 0 * be;
    const double C2561 = C2512 * be;
    const double C2560 = -C2475;
    const double C2559 = C2478 * C2552;
    const double C2574 = C2565 / C2460;
    const double C2573 = C2562 / C2482;
    const double C2572 = C2564 / C2460;
    const double C2571 = C2563 / C2482;
    const double C2570 = yAB * C2562;
    const double C2569 = C2561 / C2460;
    const double C2568 = C2560 / C2468;
    const double C2578 = C2574 - C2566;
    const double C2577 = 1 - C2572;
    const double C2576 = C2570 / C2460;
    const double C2575 = C2568 - C2569;
    const double C2582 = C2577 * C2472;
    const double C2581 = C2577 * ae;
    const double C2580 = 0 - C2576;
    const double C2579 = C2478 * C2575;
    const double C2584 = C2581 / C2460;
    const double C2583 = C2580 * ae;
    const double C2586 = C2584 - C2573;
    const double C2585 = C2583 / C2460;
    const double C2588 = yAB * C2586;
    const double C2587 = C2585 - C2571;
    const double C2590 = C2588 + C2556;
    const double C2589 = C2587 / C2468;
    const double C2591 = C2590 * ae;
    const double C2592 = C2591 / C2460;
    const double C2593 = C2589 + C2592;
    const double C2594 = C2593 + C2578;
    const double C2595 = C2478 * C2594;
    const double C2610 = C2486 / C2467;
    const double C2609 = 0 * ae;
    const double C2608 = zAB * C2498;
    const double C2607 = 0 * be;
    const double C2606 = 0 * be;
    const double C2605 = C2478 * C2599;
    const double C2615 = C2609 / C2460;
    const double C2614 = C2606 / C2482;
    const double C2613 = C2608 / C2460;
    const double C2612 = C2607 / C2482;
    const double C2611 = zAB * C2606;
    const double C2618 = C2615 - C2610;
    const double C2617 = 1 - C2613;
    const double C2616 = C2611 / C2460;
    const double C2621 = C2617 * C2472;
    const double C2620 = C2617 * ae;
    const double C2619 = 0 - C2616;
    const double C2623 = C2620 / C2460;
    const double C2622 = C2619 * ae;
    const double C2625 = C2623 - C2614;
    const double C2624 = C2622 / C2460;
    const double C2627 = zAB * C2625;
    const double C2626 = C2624 - C2612;
    const double C2629 = C2627 + C2603;
    const double C2628 = C2626 / C2468;
    const double C2630 = C2629 * ae;
    const double C2631 = C2630 / C2460;
    const double C2632 = C2628 + C2631;
    const double C2633 = C2632 + C2618;
    const double C2634 = C2478 * C2633;
    const double C2641 = C2478 * C2457;
    const double C2640 = C2478 * C2586;
    const double C2639 = C2478 * C2541;
    const double C2638 = C2478 * C2556;
    const double C2646 = C2478 * C2625;
    const double C2645 = C2478 * C2603;
    const double C2658 = C2478 * C2653;
    const double C2657 = C2577 * be;
    const double C2656 = C2562 / C2460;
    const double C2655 = C2534 * ae;
    const double C2654 = C2478 * C2652;
    const double C2661 = C2657 / C2460;
    const double C2660 = -C2656;
    const double C2659 = C2655 / C2460;
    const double C2663 = C2660 / C2468;
    const double C2662 = C2517 + C2659;
    const double C2665 = C2663 - C2661;
    const double C2664 = C2662 + C2503;
    const double C2667 = C2478 * C2665;
    const double C2666 = C2478 * C2664;
    const double C2688 = yAB * C2582;
    const double C2687 = -4 * C2485;
    const double C2686 = -2 * C2562;
    const double C2685 = C2478 * 1;
    const double C2684 = C2478 * C2490;
    const double C2683 = yAB * C2578;
    const double C2682 = C2586 / C2468;
    const double C2681 = C2590 * be;
    const double C2680 = yAB * C2587;
    const double C2679 = 0 * be;
    const double C2678 = yAB * C2563;
    const double C2677 = C2478 * C2671;
    const double C2696 = C2688 / C2460;
    const double C2695 = C2687 / C2460;
    const double C2694 = ae * C2686;
    const double C2693 = C2683 + C2869;
    const double C2692 = C2681 / C2460;
    const double C2691 = C2680 + 0;
    const double C2690 = C2679 / C2482;
    const double C2689 = C2678 / C2460;
    const double C2701 = C2695 - C2696;
    const double C2700 = C2693 * be;
    const double C2699 = C2589 - C2692;
    const double C2698 = C2691 * be;
    const double C2697 = 0 - C2689;
    const double C2706 = C2701 * ae;
    const double C2705 = C2700 / C2460;
    const double C2704 = C2699 + C2578;
    const double C2703 = C2698 / C2460;
    const double C2702 = C2697 * ae;
    const double C2709 = C2682 - C2705;
    const double C2708 = yAB * C2704;
    const double C2707 = C2702 / C2460;
    const double C2711 = C2708 + C2873;
    const double C2710 = C2707 - C2690;
    const double C2713 = C2711 * ae;
    const double C2712 = C2710 + C2656;
    const double C2715 = C2713 / C2460;
    const double C2714 = C2712 / C2468;
    const double C2716 = C2714 - C2703;
    const double C2717 = C2716 / C2468;
    const double C2718 = C2717 + C2715;
    const double C2719 = C2718 + C2709;
    const double C2720 = C2478 * C2719;
    const double C2729 = C2478 * C2450;
    const double C2728 = C2478 * C2704;
    const double C2727 = C2478 * C2527;
    const double C2726 = C2478 * C2873;
    const double C2740 = C2617 * be;
    const double C2739 = C2606 / C2460;
    const double C2738 = C2478 * C2737;
    const double C2742 = C2740 / C2460;
    const double C2741 = -C2739;
    const double C2743 = C2741 / C2468;
    const double C2744 = C2743 - C2742;
    const double C2745 = C2478 * C2744;
    const double C2766 = zAB * C2621;
    const double C2765 = -4 * C2486;
    const double C2764 = -2 * C2606;
    const double C2763 = zAB * C2618;
    const double C2762 = C2625 / C2468;
    const double C2761 = C2629 * be;
    const double C2760 = zAB * C2626;
    const double C2759 = 0 * be;
    const double C2758 = zAB * C2607;
    const double C2757 = C2478 * C2751;
    const double C2774 = C2766 / C2460;
    const double C2773 = C2765 / C2460;
    const double C2772 = ae * C2764;
    const double C2771 = C2763 + C2869;
    const double C2770 = C2761 / C2460;
    const double C2769 = C2760 + 0;
    const double C2768 = C2759 / C2482;
    const double C2767 = C2758 / C2460;
    const double C2779 = C2773 - C2774;
    const double C2778 = C2771 * be;
    const double C2777 = C2628 - C2770;
    const double C2776 = C2769 * be;
    const double C2775 = 0 - C2767;
    const double C2784 = C2779 * ae;
    const double C2783 = C2778 / C2460;
    const double C2782 = C2777 + C2618;
    const double C2781 = C2776 / C2460;
    const double C2780 = C2775 * ae;
    const double C2787 = C2762 - C2783;
    const double C2786 = zAB * C2782;
    const double C2785 = C2780 / C2460;
    const double C2789 = C2786 + C2874;
    const double C2788 = C2785 - C2768;
    const double C2791 = C2789 * ae;
    const double C2790 = C2788 + C2739;
    const double C2793 = C2791 / C2460;
    const double C2792 = C2790 / C2468;
    const double C2794 = C2792 - C2781;
    const double C2795 = C2794 / C2468;
    const double C2796 = C2795 + C2793;
    const double C2797 = C2796 + C2787;
    const double C2798 = C2478 * C2797;
    const double C2805 = C2478 * C2782;
    const double C2804 = C2478 * C2874;
    const double C2899 = C2779 * be;
    const double C2898 = C2478 * C2533;
    const double C2897 = C2478 * C2515;
    const double C2896 = C2701 * be;
    const double C2895 = C2478 * C2784;
    const double C2894 = C2478 * C2706;
    const double C2893 = C2621 / C2482;
    const double C2892 = 2 * C2625;
    const double C2891 = zAB * C2784;
    const double C2890 = C2772 / C2479;
    const double C2889 = C2582 / C2482;
    const double C2888 = 2 * C2586;
    const double C2887 = yAB * C2706;
    const double C2886 = C2694 / C2479;
    const double C2885 = C2529 * be;
    const double C2884 = C2478 * C2621;
    const double C2883 = C2478 * C2582;
    const double C2882 = C2515 / C2482;
    const double C2881 = 2 * C2527;
    const double C2880 = xAB * C2533;
    const double C2879 = C2480 / C2479;
    const double C2905 = C2478 * C2899;
    const double C2904 = C2478 * C2896;
    const double C2903 = C2891 / C2460;
    const double C2902 = C2887 / C2460;
    const double C2901 = C2478 * C2885;
    const double C2900 = C2880 / C2460;
    const double C2908 = C2903 + C2892;
    const double C2907 = C2902 + C2888;
    const double C2906 = C2900 + C2881;
    const double C2914 = C2908 * be;
    const double C2913 = C2907 * be;
    const double C2912 = C2906 * ae;
    const double C2911 = C2908 * ae;
    const double C2910 = C2907 * ae;
    const double C2909 = C2906 * be;
    const double C2920 = C2914 / C2460;
    const double C2919 = C2913 / C2460;
    const double C2918 = C2912 / C2460;
    const double C2917 = C2911 / C2460;
    const double C2916 = C2910 / C2460;
    const double C2915 = C2909 / C2460;
    const double C2926 = C2890 - C2920;
    const double C2925 = C2886 - C2919;
    const double C2924 = C2879 + C2918;
    const double C2923 = C2890 + C2917;
    const double C2922 = C2886 + C2916;
    const double C2921 = C2879 - C2915;
    const double C2932 = C2926 - C2893;
    const double C2931 = C2925 - C2889;
    const double C2930 = C2924 - C2882;
    const double C2929 = C2923 - C2893;
    const double C2928 = C2922 - C2889;
    const double C2927 = C2921 - C2882;
    const double C2938 = C2478 * C2932;
    const double C2937 = C2478 * C2931;
    const double C2936 = C2478 * C2930;
    const double C2935 = C2478 * C2927;
    const double C2934 = C2478 * C2929;
    const double C2933 = C2478 * C2928;
    const double hxx100200 =
        C2478 *
        (((ae * -2 * C2461) / C2479 -
          (((xAB * C2480) / C2467 + 2 * C2511) * be) / C2460) /
             C2468 +
         ((xAB * C2927 + 2 * C2541) * ae) / C2460 + C2533 / C2482 -
         ((2 * C2503 - C2521 / C2482) * be) / C2460) *
        C2493 * C2494;
    const double hxx100020 = -(C2494 * C2559 * C2901) / C2460;
    const double hxx100002 = -(C2605 * C2493 * C2901) / C2460;
    const double hxx100110 = C2935 * C2638 * C2494;
    const double hxx100101 = C2935 * C2493 * C2645;
    const double hxx100011 = -(C2645 * C2638 * C2901) / C2460;
    const double hxx010200 = C2936 * C2654 * C2494;
    const double hxx010020 = -(C2494 * C2677 * C2897) / C2460;
    const double hxx010002 = -(C2605 * C2654 * C2897) / C2460;
    const double hxx010110 = (C2494 * C2726 * C2898) / C2460;
    const double hxx010101 = (C2645 * C2654 * C2898) / C2460;
    const double hxx010011 = -(C2645 * C2726 * C2897) / C2460;
    const double hxx001200 = C2936 * C2493 * C2738;
    const double hxx001020 = -(C2738 * C2559 * C2897) / C2460;
    const double hxx001002 = -(C2757 * C2493 * C2897) / C2460;
    const double hxx001110 = (C2738 * C2638 * C2898) / C2460;
    const double hxx001101 = (C2804 * C2493 * C2898) / C2460;
    const double hxx001011 = -(C2804 * C2638 * C2897) / C2460;
    const double hxy100200 = -(C2494 * C2548 * C2505) / C2460;
    const double hxy100020 = C2579 * C2595 * C2494;
    const double hxy100002 = -(C2605 * C2579 * C2505) / C2460;
    const double hxy100110 = C2639 * C2640 * C2494;
    const double hxy100101 = -(C2645 * C2639 * C2505) / C2460;
    const double hxy100011 = C2579 * C2640 * C2645;
    const double hxy010200 = C2666 * C2667 * C2494;
    const double hxy010020 = -(C2494 * C2720 * C2684) / C2460;
    const double hxy010002 = -(C2605 * C2667 * C2684) / C2460;
    const double hxy010110 = C2727 * C2728 * C2494;
    const double hxy010101 = C2727 * C2667 * C2645;
    const double hxy010011 = -(C2645 * C2728 * C2684) / C2460;
    const double hxy001200 = -(C2738 * C2666 * C2505) / C2460;
    const double hxy001020 = -(C2738 * C2595 * C2684) / C2460;
    const double hxy001002 = (C2757 * C2684 * C2505) / C2467;
    const double hxy001110 = C2727 * C2640 * C2738;
    const double hxy001101 = -(C2804 * C2727 * C2505) / C2460;
    const double hxy001011 = -(C2804 * C2640 * C2684) / C2460;
    const double hxz100200 = -(C2548 * C2493 * C2506) / C2460;
    const double hxz100020 = -(C2579 * C2559 * C2506) / C2460;
    const double hxz100002 = C2579 * C2493 * C2634;
    const double hxz100110 = -(C2639 * C2638 * C2506) / C2460;
    const double hxz100101 = C2639 * C2493 * C2646;
    const double hxz100011 = C2579 * C2638 * C2646;
    const double hxz010200 = -(C2666 * C2654 * C2506) / C2460;
    const double hxz010020 = (C2677 * C2684 * C2506) / C2467;
    const double hxz010002 = -(C2634 * C2654 * C2684) / C2460;
    const double hxz010110 = -(C2727 * C2726 * C2506) / C2460;
    const double hxz010101 = C2727 * C2654 * C2646;
    const double hxz010011 = -(C2646 * C2726 * C2684) / C2460;
    const double hxz001200 = C2666 * C2493 * C2745;
    const double hxz001020 = -(C2745 * C2559 * C2684) / C2460;
    const double hxz001002 = -(C2798 * C2493 * C2684) / C2460;
    const double hxz001110 = C2727 * C2638 * C2745;
    const double hxz001101 = C2727 * C2493 * C2805;
    const double hxz001011 = -(C2805 * C2638 * C2684) / C2460;
    const double hyy100200 = -(C2494 * C2499 * C2883) / C2460;
    const double hyy100020 = C2567 * C2933 * C2494;
    const double hyy100002 = -(C2605 * C2567 * C2883) / C2460;
    const double hyy100110 = (C2494 * C2641 * C2894) / C2460;
    const double hyy100101 = -(C2645 * C2641 * C2883) / C2460;
    const double hyy100011 = (C2645 * C2567 * C2894) / C2460;
    const double hyy010200 = -(C2494 * C2658 * C2904) / C2460;
    const double hyy010020 =
        C2685 * C2478 *
        (((ae * -2 * C2563) / C2479 -
          (((yAB * C2694) / C2467 + 2 * C2587) * be) / C2460) /
             C2468 +
         ((yAB * C2931 + 2 * C2704) * ae) / C2460 + C2706 / C2482 -
         ((2 * C2578 - C2688 / C2482) * be) / C2460) *
        C2494;
    const double hyy010002 = -(C2605 * C2685 * C2904) / C2460;
    const double hyy010110 = C2729 * C2937 * C2494;
    const double hyy010101 = -(C2645 * C2729 * C2904) / C2460;
    const double hyy010011 = C2685 * C2937 * C2645;
    const double hyy001200 = -(C2738 * C2658 * C2883) / C2460;
    const double hyy001020 = C2685 * C2933 * C2738;
    const double hyy001002 = -(C2757 * C2685 * C2883) / C2460;
    const double hyy001110 = (C2738 * C2729 * C2894) / C2460;
    const double hyy001101 = -(C2804 * C2729 * C2883) / C2460;
    const double hyy001011 = (C2804 * C2685 * C2894) / C2460;
    const double hyz100200 = (C2499 * C2505 * C2506) / C2467;
    const double hyz100020 = -(C2567 * C2595 * C2506) / C2460;
    const double hyz100002 = -(C2634 * C2567 * C2505) / C2460;
    const double hyz100110 = -(C2641 * C2640 * C2506) / C2460;
    const double hyz100101 = -(C2646 * C2641 * C2505) / C2460;
    const double hyz100011 = C2567 * C2640 * C2646;
    const double hyz010200 = -(C2658 * C2667 * C2506) / C2460;
    const double hyz010020 = -(C2685 * C2720 * C2506) / C2460;
    const double hyz010002 = C2685 * C2667 * C2634;
    const double hyz010110 = -(C2729 * C2728 * C2506) / C2460;
    const double hyz010101 = C2729 * C2667 * C2646;
    const double hyz010011 = C2685 * C2728 * C2646;
    const double hyz001200 = -(C2745 * C2658 * C2505) / C2460;
    const double hyz001020 = C2685 * C2595 * C2745;
    const double hyz001002 = -(C2798 * C2685 * C2505) / C2460;
    const double hyz001110 = C2729 * C2640 * C2745;
    const double hyz001101 = -(C2805 * C2729 * C2505) / C2460;
    const double hyz001011 = C2685 * C2640 * C2805;
    const double hzz100200 = -(C2499 * C2493 * C2884) / C2460;
    const double hzz100020 = -(C2567 * C2559 * C2884) / C2460;
    const double hzz100002 = C2567 * C2493 * C2934;
    const double hzz100110 = -(C2641 * C2638 * C2884) / C2460;
    const double hzz100101 = (C2641 * C2493 * C2895) / C2460;
    const double hzz100011 = (C2567 * C2638 * C2895) / C2460;
    const double hzz010200 = -(C2658 * C2654 * C2884) / C2460;
    const double hzz010020 = -(C2685 * C2677 * C2884) / C2460;
    const double hzz010002 = C2685 * C2654 * C2934;
    const double hzz010110 = -(C2729 * C2726 * C2884) / C2460;
    const double hzz010101 = (C2729 * C2654 * C2895) / C2460;
    const double hzz010011 = (C2685 * C2726 * C2895) / C2460;
    const double hzz001200 = -(C2658 * C2493 * C2905) / C2460;
    const double hzz001020 = -(C2685 * C2559 * C2905) / C2460;
    const double hzz001002 =
        C2685 * C2493 * C2478 *
        (((ae * -2 * C2607) / C2479 -
          (((zAB * C2772) / C2467 + 2 * C2626) * be) / C2460) /
             C2468 +
         ((zAB * C2932 + 2 * C2782) * ae) / C2460 + C2784 / C2482 -
         ((2 * C2618 - C2766 / C2482) * be) / C2460);
    const double hzz001110 = -(C2729 * C2638 * C2905) / C2460;
    const double hzz001101 = C2729 * C2493 * C2938;
    const double hzz001011 = C2685 * C2638 * C2938;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx100110;
        hxx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx100011;
        hxx[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxx100200 - 0.5 * hxx100020 + hxx100002);
        hxx[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxx100101;
        hxx[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxx100200 - std::sqrt(0.75) * hxx100020);
        hxx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx010110;
        hxx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx010011;
        hxx[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxx010200 - 0.5 * hxx010020 + hxx010002);
        hxx[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxx010101;
        hxx[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxx010200 - std::sqrt(0.75) * hxx010020);
        hxx[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx001110;
        hxx[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx001011;
        hxx[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxx001200 - 0.5 * hxx001020 + hxx001002);
        hxx[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxx001101;
        hxx[(Ai + 2) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxx001200 - std::sqrt(0.75) * hxx001020);
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy100110;
        hxy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy100011;
        hxy[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxy100200 - 0.5 * hxy100020 + hxy100002);
        hxy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxy100101;
        hxy[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxy100200 - std::sqrt(0.75) * hxy100020);
        hxy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy010110;
        hxy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy010011;
        hxy[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxy010200 - 0.5 * hxy010020 + hxy010002);
        hxy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxy010101;
        hxy[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxy010200 - std::sqrt(0.75) * hxy010020);
        hxy[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy001110;
        hxy[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy001011;
        hxy[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxy001200 - 0.5 * hxy001020 + hxy001002);
        hxy[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxy001101;
        hxy[(Ai + 2) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxy001200 - std::sqrt(0.75) * hxy001020);
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz100110;
        hxz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz100011;
        hxz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxz100200 - 0.5 * hxz100020 + hxz100002);
        hxz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxz100101;
        hxz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxz100200 - std::sqrt(0.75) * hxz100020);
        hxz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz010110;
        hxz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz010011;
        hxz[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxz010200 - 0.5 * hxz010020 + hxz010002);
        hxz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxz010101;
        hxz[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxz010200 - std::sqrt(0.75) * hxz010020);
        hxz[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz001110;
        hxz[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz001011;
        hxz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxz001200 - 0.5 * hxz001020 + hxz001002);
        hxz[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxz001101;
        hxz[(Ai + 2) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxz001200 - std::sqrt(0.75) * hxz001020);
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy100110;
        hyy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy100011;
        hyy[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyy100200 - 0.5 * hyy100020 + hyy100002);
        hyy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyy100101;
        hyy[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyy100200 - std::sqrt(0.75) * hyy100020);
        hyy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy010110;
        hyy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy010011;
        hyy[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyy010200 - 0.5 * hyy010020 + hyy010002);
        hyy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyy010101;
        hyy[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyy010200 - std::sqrt(0.75) * hyy010020);
        hyy[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy001110;
        hyy[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy001011;
        hyy[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyy001200 - 0.5 * hyy001020 + hyy001002);
        hyy[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyy001101;
        hyy[(Ai + 2) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyy001200 - std::sqrt(0.75) * hyy001020);
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz100110;
        hyz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz100011;
        hyz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyz100200 - 0.5 * hyz100020 + hyz100002);
        hyz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyz100101;
        hyz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyz100200 - std::sqrt(0.75) * hyz100020);
        hyz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz010110;
        hyz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz010011;
        hyz[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyz010200 - 0.5 * hyz010020 + hyz010002);
        hyz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyz010101;
        hyz[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyz010200 - std::sqrt(0.75) * hyz010020);
        hyz[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz001110;
        hyz[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz001011;
        hyz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyz001200 - 0.5 * hyz001020 + hyz001002);
        hyz[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyz001101;
        hyz[(Ai + 2) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyz001200 - std::sqrt(0.75) * hyz001020);
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz100110;
        hzz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz100011;
        hzz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hzz100200 - 0.5 * hzz100020 + hzz100002);
        hzz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hzz100101;
        hzz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hzz100200 - std::sqrt(0.75) * hzz100020);
        hzz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz010110;
        hzz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz010011;
        hzz[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hzz010200 - 0.5 * hzz010020 + hzz010002);
        hzz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hzz010101;
        hzz[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hzz010200 - std::sqrt(0.75) * hzz010020);
        hzz[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz001110;
        hzz[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz001011;
        hzz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hzz001200 - 0.5 * hzz001020 + hzz001002);
        hzz[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hzz001101;
        hzz[(Ai + 2) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hzz001200 - std::sqrt(0.75) * hzz001020);
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx100110;
        hxx[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx100011;
        hxx[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxx100200 - 0.5 * hxx100020 + hxx100002);
        hxx[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxx100101;
        hxx[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxx100200 - std::sqrt(0.75) * hxx100020);
        hxx[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx010110;
        hxx[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx010011;
        hxx[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxx010200 - 0.5 * hxx010020 + hxx010002);
        hxx[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxx010101;
        hxx[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxx010200 - std::sqrt(0.75) * hxx010020);
        hxx[(Ai + 2) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx001110;
        hxx[(Ai + 2) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx001011;
        hxx[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxx001200 - 0.5 * hxx001020 + hxx001002);
        hxx[(Ai + 2) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxx001101;
        hxx[(Ai + 2) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxx001200 - std::sqrt(0.75) * hxx001020);
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy100110;
        hxy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy100011;
        hxy[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxy100200 - 0.5 * hxy100020 + hxy100002);
        hxy[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxy100101;
        hxy[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxy100200 - std::sqrt(0.75) * hxy100020);
        hxy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy010110;
        hxy[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy010011;
        hxy[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxy010200 - 0.5 * hxy010020 + hxy010002);
        hxy[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxy010101;
        hxy[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxy010200 - std::sqrt(0.75) * hxy010020);
        hxy[(Ai + 2) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy001110;
        hxy[(Ai + 2) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy001011;
        hxy[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxy001200 - 0.5 * hxy001020 + hxy001002);
        hxy[(Ai + 2) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxy001101;
        hxy[(Ai + 2) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxy001200 - std::sqrt(0.75) * hxy001020);
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz100110;
        hxz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz100011;
        hxz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxz100200 - 0.5 * hxz100020 + hxz100002);
        hxz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxz100101;
        hxz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxz100200 - std::sqrt(0.75) * hxz100020);
        hxz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz010110;
        hxz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz010011;
        hxz[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxz010200 - 0.5 * hxz010020 + hxz010002);
        hxz[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxz010101;
        hxz[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxz010200 - std::sqrt(0.75) * hxz010020);
        hxz[(Ai + 2) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz001110;
        hxz[(Ai + 2) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz001011;
        hxz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxz001200 - 0.5 * hxz001020 + hxz001002);
        hxz[(Ai + 2) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxz001101;
        hxz[(Ai + 2) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxz001200 - std::sqrt(0.75) * hxz001020);
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy100110;
        hyy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy100011;
        hyy[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyy100200 - 0.5 * hyy100020 + hyy100002);
        hyy[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyy100101;
        hyy[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyy100200 - std::sqrt(0.75) * hyy100020);
        hyy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy010110;
        hyy[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy010011;
        hyy[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyy010200 - 0.5 * hyy010020 + hyy010002);
        hyy[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyy010101;
        hyy[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyy010200 - std::sqrt(0.75) * hyy010020);
        hyy[(Ai + 2) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy001110;
        hyy[(Ai + 2) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy001011;
        hyy[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyy001200 - 0.5 * hyy001020 + hyy001002);
        hyy[(Ai + 2) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyy001101;
        hyy[(Ai + 2) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyy001200 - std::sqrt(0.75) * hyy001020);
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz100110;
        hyz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz100011;
        hyz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyz100200 - 0.5 * hyz100020 + hyz100002);
        hyz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyz100101;
        hyz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyz100200 - std::sqrt(0.75) * hyz100020);
        hyz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz010110;
        hyz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz010011;
        hyz[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyz010200 - 0.5 * hyz010020 + hyz010002);
        hyz[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyz010101;
        hyz[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyz010200 - std::sqrt(0.75) * hyz010020);
        hyz[(Ai + 2) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz001110;
        hyz[(Ai + 2) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz001011;
        hyz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyz001200 - 0.5 * hyz001020 + hyz001002);
        hyz[(Ai + 2) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyz001101;
        hyz[(Ai + 2) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyz001200 - std::sqrt(0.75) * hyz001020);
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz100110;
        hzz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz100011;
        hzz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hzz100200 - 0.5 * hzz100020 + hzz100002);
        hzz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hzz100101;
        hzz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hzz100200 - std::sqrt(0.75) * hzz100020);
        hzz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz010110;
        hzz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz010011;
        hzz[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hzz010200 - 0.5 * hzz010020 + hzz010002);
        hzz[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hzz010101;
        hzz[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hzz010200 - std::sqrt(0.75) * hzz010020);
        hzz[(Ai + 2) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz001110;
        hzz[(Ai + 2) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz001011;
        hzz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hzz001200 - 0.5 * hzz001020 + hzz001002);
        hzz[(Ai + 2) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hzz001101;
        hzz[(Ai + 2) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hzz001200 - std::sqrt(0.75) * hzz001020);
    }
}

// Automatically generated, do not edit
void overlap_second_derivative_20(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C6473 = ae + be;
    const double C6491 = zAB * be;
    const double C6490 = yAB * be;
    const double C6489 = 2 * C6473;
    const double C6488 = std::pow(C6473, 2);
    const double C6487 = xAB * be;
    const double C6492 = 1 / C6489;
    const double C6297 = -C6487 / (ae + be);
    const double C6299 = std::pow(C6487, 2) / C6488 + C6492;
    const double C6359 = std::pow(C6490, 2) / C6488 + C6492;
    const double C6363 = -C6490 / C6473;
    const double C6406 = std::pow(C6491, 2) / C6488 + C6492;
    const double C6410 = -C6491 / C6473;
    const double C6304 = 0 * be;
    const double C6303 = 0 * be;
    const double C6302 = ae * be;
    const double C6301 = 0 * be;
    const double C6300 = ae + be;
    const double C6315 = C6302 * zAB;
    const double C6314 = C6302 * yAB;
    const double C6313 = C6304 / C6300;
    const double C6312 = xAB * C6301;
    const double C6311 = C6303 / C6300;
    const double C6310 = 2 * C6302;
    const double C6309 = C6302 * xAB;
    const double C6308 = C6301 / C6300;
    const double C6307 = 2 * C6300;
    const double C6306 = std::pow(C6300, 2);
    const double C6305 = Pi / C6300;
    const double C6322 = C6315 * 1;
    const double C6321 = C6314 * 1;
    const double C6320 = C6312 / C6300;
    const double C6319 = -C6311;
    const double C6318 = C6309 * 1;
    const double C6317 = -C6308;
    const double C6316 = std::sqrt(C6305);
    const double C6331 = C6316 * C6299;
    const double C6330 = 2 * C6322;
    const double C6329 = 2 * C6321;
    const double C6328 = 0 - C6320;
    const double C6327 = C6319 / C6307;
    const double C6326 = C6316 * 1;
    const double C6325 = C6316 * 1;
    const double C6324 = 2 * C6318;
    const double C6323 = C6317 / C6307;
    const double C6336 = C6316 * C6330;
    const double C6335 = C6316 * C6329;
    const double C6334 = C6324 / C6300;
    const double C6333 = C6328 * be;
    const double C6332 = xAB * C6324;
    const double C6339 = -C6334;
    const double C6338 = C6333 / C6300;
    const double C6337 = C6332 / C6300;
    const double C6342 = C6339 / C6307;
    const double C6341 = C6327 - C6338;
    const double C6340 = 1 - C6337;
    const double C6346 = C6342 - C6313;
    const double C6345 = C6341 / C6307;
    const double C6344 = C6340 * C6310;
    const double C6343 = C6340 * be;
    const double C6347 = C6343 / C6300;
    const double C6348 = C6323 - C6347;
    const double C6349 = xAB * C6348;
    const double C6350 = C6349 + C6297;
    const double C6351 = C6350 * be;
    const double C6352 = C6351 / C6300;
    const double C6353 = C6345 - C6352;
    const double C6354 = C6353 + C6346;
    const double C6355 = C6316 * C6354;
    const double C6372 = C6316 * 1;
    const double C6371 = C6316 * C6324;
    const double C6370 = 0 * be;
    const double C6369 = C6329 / C6300;
    const double C6368 = yAB * C6329;
    const double C6367 = 0 * be;
    const double C6366 = 0 * be;
    const double C6365 = C6316 * C6359;
    const double C6378 = C6370 / C6300;
    const double C6377 = -C6369;
    const double C6376 = C6368 / C6300;
    const double C6375 = C6367 / C6300;
    const double C6374 = yAB * C6367;
    const double C6373 = C6366 / C6300;
    const double C6383 = C6377 / C6307;
    const double C6382 = 1 - C6376;
    const double C6381 = -C6375;
    const double C6380 = C6374 / C6300;
    const double C6379 = -C6373;
    const double C6389 = C6382 * C6310;
    const double C6388 = C6383 - C6378;
    const double C6387 = C6382 * be;
    const double C6386 = C6381 / C6307;
    const double C6385 = 0 - C6380;
    const double C6384 = C6379 / C6307;
    const double C6391 = C6387 / C6300;
    const double C6390 = C6385 * be;
    const double C6393 = C6386 - C6391;
    const double C6392 = C6390 / C6300;
    const double C6395 = yAB * C6393;
    const double C6394 = C6384 - C6392;
    const double C6397 = C6395 + C6363;
    const double C6396 = C6394 / C6307;
    const double C6398 = C6397 * be;
    const double C6399 = C6398 / C6300;
    const double C6400 = C6396 - C6399;
    const double C6401 = C6400 + C6388;
    const double C6402 = C6316 * C6401;
    const double C6417 = 0 * be;
    const double C6416 = C6330 / C6300;
    const double C6415 = zAB * C6330;
    const double C6414 = 0 * be;
    const double C6413 = 0 * be;
    const double C6412 = C6316 * C6406;
    const double C6423 = C6417 / C6300;
    const double C6422 = -C6416;
    const double C6421 = C6415 / C6300;
    const double C6420 = C6414 / C6300;
    const double C6419 = zAB * C6414;
    const double C6418 = C6413 / C6300;
    const double C6428 = C6422 / C6307;
    const double C6427 = 1 - C6421;
    const double C6426 = -C6420;
    const double C6425 = C6419 / C6300;
    const double C6424 = -C6418;
    const double C6434 = C6427 * C6310;
    const double C6433 = C6428 - C6423;
    const double C6432 = C6427 * be;
    const double C6431 = C6426 / C6307;
    const double C6430 = 0 - C6425;
    const double C6429 = C6424 / C6307;
    const double C6436 = C6432 / C6300;
    const double C6435 = C6430 * be;
    const double C6438 = C6431 - C6436;
    const double C6437 = C6435 / C6300;
    const double C6440 = zAB * C6438;
    const double C6439 = C6429 - C6437;
    const double C6442 = C6440 + C6410;
    const double C6441 = C6439 / C6307;
    const double C6443 = C6442 * be;
    const double C6444 = C6443 / C6300;
    const double C6445 = C6441 - C6444;
    const double C6446 = C6445 + C6433;
    const double C6447 = C6316 * C6446;
    const double C6454 = C6316 * C6297;
    const double C6453 = C6316 * C6393;
    const double C6452 = C6316 * C6348;
    const double C6451 = C6316 * C6363;
    const double C6459 = C6316 * C6438;
    const double C6458 = C6316 * C6410;
    const double C6506 = zAB * C6434;
    const double C6505 = -4 * C6322;
    const double C6504 = yAB * C6389;
    const double C6503 = -4 * C6321;
    const double C6502 = C6316 * C6344;
    const double C6501 = C6316 * C6434;
    const double C6500 = C6316 * C6389;
    const double C6499 = 2 * C6306;
    const double C6498 = xAB * C6344;
    const double C6497 = -4 * C6318;
    const double C6512 = C6506 / C6300;
    const double C6511 = C6505 / C6300;
    const double C6510 = C6504 / C6300;
    const double C6509 = C6503 / C6300;
    const double C6508 = C6498 / C6300;
    const double C6507 = C6497 / C6300;
    const double C6515 = C6511 - C6512;
    const double C6514 = C6509 - C6510;
    const double C6513 = C6507 - C6508;
    const double C6518 = C6515 * be;
    const double C6517 = C6514 * be;
    const double C6516 = C6513 * be;
    const double C6521 = C6316 * C6518;
    const double C6520 = C6316 * C6517;
    const double C6519 = C6316 * C6516;
    const double hxx200000 =
        C6316 *
        ((-(be * -2 * C6301) / C6306) / C6307 -
         ((2 * C6348 - (xAB * C6516) / C6300) * be) / C6300 - C6344 / C6499) *
        C6325 * C6326;
    const double hxx020000 = -(C6326 * C6365 * C6502) / C6300;
    const double hxx002000 = -(C6412 * C6325 * C6502) / C6300;
    const double hxx110000 = -(C6326 * C6451 * C6519) / C6300;
    const double hxx101000 = -(C6458 * C6325 * C6519) / C6300;
    const double hxx011000 = -(C6458 * C6451 * C6502) / C6300;
    const double hxy200000 = -(C6326 * C6355 * C6335) / C6300;
    const double hxy020000 = -(C6326 * C6402 * C6371) / C6300;
    const double hxy002000 = (C6412 * C6371 * C6335) / C6306;
    const double hxy110000 = C6452 * C6453 * C6326;
    const double hxy101000 = -(C6458 * C6452 * C6335) / C6300;
    const double hxy011000 = -(C6458 * C6453 * C6371) / C6300;
    const double hxz200000 = -(C6355 * C6325 * C6336) / C6300;
    const double hxz020000 = (C6365 * C6371 * C6336) / C6306;
    const double hxz002000 = -(C6447 * C6325 * C6371) / C6300;
    const double hxz110000 = -(C6452 * C6451 * C6336) / C6300;
    const double hxz101000 = C6452 * C6325 * C6459;
    const double hxz011000 = -(C6459 * C6451 * C6371) / C6300;
    const double hyy200000 = -(C6326 * C6331 * C6500) / C6300;
    const double hyy020000 =
        C6372 * C6316 *
        ((-(be * -2 * C6367) / C6306) / C6307 -
         ((2 * C6393 - (yAB * C6517) / C6300) * be) / C6300 - C6389 / C6499) *
        C6326;
    const double hyy002000 = -(C6412 * C6372 * C6500) / C6300;
    const double hyy110000 = -(C6326 * C6454 * C6520) / C6300;
    const double hyy101000 = -(C6458 * C6454 * C6500) / C6300;
    const double hyy011000 = -(C6458 * C6372 * C6520) / C6300;
    const double hyz200000 = (C6331 * C6335 * C6336) / C6306;
    const double hyz020000 = -(C6372 * C6402 * C6336) / C6300;
    const double hyz002000 = -(C6447 * C6372 * C6335) / C6300;
    const double hyz110000 = -(C6454 * C6453 * C6336) / C6300;
    const double hyz101000 = -(C6459 * C6454 * C6335) / C6300;
    const double hyz011000 = C6372 * C6453 * C6459;
    const double hzz200000 = -(C6331 * C6325 * C6501) / C6300;
    const double hzz020000 = -(C6372 * C6365 * C6501) / C6300;
    const double hzz002000 =
        C6372 * C6325 * C6316 *
        ((-(be * -2 * C6414) / C6306) / C6307 -
         ((2 * C6438 - (zAB * C6518) / C6300) * be) / C6300 - C6434 / C6499);
    const double hzz110000 = -(C6454 * C6451 * C6501) / C6300;
    const double hzz101000 = -(C6454 * C6325 * C6521) / C6300;
    const double hzz011000 = -(C6372 * C6451 * C6521) / C6300;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx110000;
        hxx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx011000;
        hxx[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hxx200000 - 0.5 * hxx020000 + hxx002000);
        hxx[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx101000;
        hxx[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hxx200000 - std::sqrt(0.75) * hxx020000);
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy110000;
        hxy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy011000;
        hxy[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hxy200000 - 0.5 * hxy020000 + hxy002000);
        hxy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy101000;
        hxy[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hxy200000 - std::sqrt(0.75) * hxy020000);
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz110000;
        hxz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz011000;
        hxz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hxz200000 - 0.5 * hxz020000 + hxz002000);
        hxz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz101000;
        hxz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hxz200000 - std::sqrt(0.75) * hxz020000);
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy110000;
        hyy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy011000;
        hyy[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hyy200000 - 0.5 * hyy020000 + hyy002000);
        hyy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy101000;
        hyy[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hyy200000 - std::sqrt(0.75) * hyy020000);
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz110000;
        hyz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz011000;
        hyz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hyz200000 - 0.5 * hyz020000 + hyz002000);
        hyz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz101000;
        hyz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hyz200000 - std::sqrt(0.75) * hyz020000);
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz110000;
        hzz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz011000;
        hzz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hzz200000 - 0.5 * hzz020000 + hzz002000);
        hzz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz101000;
        hzz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hzz200000 - std::sqrt(0.75) * hzz020000);
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx110000;
        hxx[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx011000;
        hxx[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hxx200000 - 0.5 * hxx020000 + hxx002000);
        hxx[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx101000;
        hxx[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hxx200000 - std::sqrt(0.75) * hxx020000);
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy110000;
        hxy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy011000;
        hxy[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hxy200000 - 0.5 * hxy020000 + hxy002000);
        hxy[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy101000;
        hxy[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hxy200000 - std::sqrt(0.75) * hxy020000);
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz110000;
        hxz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz011000;
        hxz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hxz200000 - 0.5 * hxz020000 + hxz002000);
        hxz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz101000;
        hxz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hxz200000 - std::sqrt(0.75) * hxz020000);
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy110000;
        hyy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy011000;
        hyy[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hyy200000 - 0.5 * hyy020000 + hyy002000);
        hyy[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy101000;
        hyy[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hyy200000 - std::sqrt(0.75) * hyy020000);
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz110000;
        hyz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz011000;
        hyz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hyz200000 - 0.5 * hyz020000 + hyz002000);
        hyz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz101000;
        hyz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hyz200000 - std::sqrt(0.75) * hyz020000);
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz110000;
        hzz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz011000;
        hzz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hzz200000 - 0.5 * hzz020000 + hzz002000);
        hzz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz101000;
        hzz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hzz200000 - std::sqrt(0.75) * hzz020000);
    }
}

// Automatically generated, do not edit
void overlap_second_derivative_21(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C7343 = ae + be;
    const double C7348 = 2 * C7343;
    const double C7347 = xAB * be;
    const double C7346 = xAB * ae;
    const double C7362 = yAB * be;
    const double C7361 = yAB * ae;
    const double C7375 = zAB * be;
    const double C7374 = zAB * ae;
    const double C7391 = C7374 * C7375;
    const double C7390 = zAB * be;
    const double C7389 = std::pow(C7348, -1);
    const double C7388 = C7361 * C7362;
    const double C7387 = yAB * be;
    const double C7386 = 1 / C7348;
    const double C7385 = C7347 / C7343;
    const double C7384 = std::pow(C7343, 2);
    const double C7383 = 2 * C7343;
    const double C7382 = xAB * ae;
    const double C7393 = C7391 / C7384;
    const double C7392 = C7388 / C7384;
    const double C7395 = C7386 - C7393;
    const double C7394 = C7386 - C7392;
    const double C6926 = C7382 / (ae + be);
    const double C6933 = 1 / C7383 - (C7382 * xAB * be) / C7384;
    const double C6934 = std::pow(C7383, -1);
    const double C6935 = (C7346 / C7343 - C7385) / C7348 -
                         ((C7386 - (C7346 * C7347) / C7384) * C7347) / C7343;
    const double C7028 = (yAB * ae) / C7343;
    const double C7029 = -C7385;
    const double C7031 = std::pow(C7347, 2) / C7384 + C7386;
    const double C7071 = (zAB * ae) / C7343;
    const double C7086 = std::pow(C7387, 2) / C7384 + C7386;
    const double C7089 = -C7387 / C7343;
    const double C7128 =
        (C7361 / C7343 - C7362 / C7343) / C7348 - (C7394 * C7362) / C7343;
    const double C7194 = std::pow(C7390, 2) / C7384 + C7386;
    const double C7197 = -C7390 / C7343;
    const double C7236 =
        (C7374 / C7343 - C7375 / C7343) / C7348 - (C7395 * C7375) / C7343;
    const double C6941 = 0 * be;
    const double C6940 = 0 * ae;
    const double C6939 = ae * be;
    const double C6938 = 0 * be;
    const double C6937 = 0 * be;
    const double C6936 = ae + be;
    const double C6953 = C6939 * zAB;
    const double C6952 = C6939 * yAB;
    const double C6951 = C6938 / C6936;
    const double C6950 = xAB * C6937;
    const double C6949 = C6940 / C6936;
    const double C6948 = 2 * C6939;
    const double C6947 = C6939 * xAB;
    const double C6946 = xAB * C6938;
    const double C6945 = -2 * C6938;
    const double C6944 = 2 * C6936;
    const double C6943 = std::pow(C6936, 2);
    const double C6942 = Pi / C6936;
    const double C6962 = C6953 * 1;
    const double C6961 = C6952 * 1;
    const double C6960 = C6950 / C6936;
    const double C6959 = C6947 * 1;
    const double C6958 = 2 * C6943;
    const double C6957 = C6946 / C6936;
    const double C6956 = ae * C6945;
    const double C6955 = C6943 * C6944;
    const double C6954 = std::sqrt(C6942);
    const double C6975 = C6954 * C6935;
    const double C6974 = 2 * C6962;
    const double C6973 = 2 * C6961;
    const double C6972 = C6941 / C6958;
    const double C6971 = 0 - C6960;
    const double C6970 = C6954 * 1;
    const double C6969 = C6954 * 1;
    const double C6968 = C6959 / C6943;
    const double C6967 = C6938 / C6958;
    const double C6966 = 2 * C6959;
    const double C6965 = -4 * C6959;
    const double C6964 = C6937 / C6958;
    const double C6963 = 0 - C6957;
    const double C6982 = C6954 * C6974;
    const double C6981 = C6954 * C6973;
    const double C6980 = C6971 * ae;
    const double C6979 = C6949 - C6968;
    const double C6978 = xAB * C6966;
    const double C6977 = C6965 / C6936;
    const double C6976 = C6963 * ae;
    const double C6986 = xAB * C6979;
    const double C6985 = C6980 / C6936;
    const double C6984 = C6978 / C6936;
    const double C6983 = C6976 / C6936;
    const double C6990 = C6986 + C6934;
    const double C6989 = C6985 - C6972;
    const double C6988 = 1 - C6984;
    const double C6987 = C6983 - C6964;
    const double C6996 = C6990 * be;
    const double C6995 = xAB * C6987;
    const double C6994 = C6989 + C6951;
    const double C6993 = C6987 / C6944;
    const double C6992 = C6988 * ae;
    const double C6991 = C6988 * C6948;
    const double C7001 = C6996 / C6936;
    const double C7000 = C6995 + 0;
    const double C6999 = C6994 / C6944;
    const double C6998 = C6992 / C6936;
    const double C6997 = xAB * C6991;
    const double C7004 = C7000 * be;
    const double C7003 = C6998 - C6967;
    const double C7002 = C6997 / C6936;
    const double C7008 = C7003 / C6944;
    const double C7007 = C7004 / C6936;
    const double C7006 = xAB * C7003;
    const double C7005 = C6977 - C7002;
    const double C7012 = C7008 - C7001;
    const double C7011 = C6999 - C7007;
    const double C7010 = C7006 + C6926;
    const double C7009 = C7005 * ae;
    const double C7014 = C7011 / C6944;
    const double C7013 = C7010 * be;
    const double C7015 = C7013 / C6936;
    const double C7016 = C6993 - C7015;
    const double C7017 = C7016 + C6979;
    const double C7018 = xAB * C7017;
    const double C7019 = C7018 + C6933;
    const double C7020 = C7019 * be;
    const double C7021 = C7020 / C6936;
    const double C7022 = C7014 - C7021;
    const double C7023 = C7022 + C7012;
    const double C7024 = C6954 * C7023;
    const double C7041 = C6954 * C7031;
    const double C7040 = 0 * be;
    const double C7039 = yAB * C6973;
    const double C7038 = 0 * be;
    const double C7037 = C6966 / C6936;
    const double C7036 = C6963 * be;
    const double C7035 = C6937 / C6936;
    const double C7034 = C6954 * C7028;
    const double C7033 = C6988 * be;
    const double C7032 = -C6951;
    const double C7049 = C7040 / C6958;
    const double C7048 = C7039 / C6936;
    const double C7047 = C7038 / C6936;
    const double C7046 = -C7037;
    const double C7045 = C7036 / C6936;
    const double C7044 = -C7035;
    const double C7043 = C7033 / C6936;
    const double C7042 = C7032 / C6944;
    const double C7053 = 1 - C7048;
    const double C7052 = C7046 / C6944;
    const double C7051 = C7044 / C6944;
    const double C7050 = C7042 - C7043;
    const double C7057 = C7053 * ae;
    const double C7056 = C7052 - C7047;
    const double C7055 = xAB * C7050;
    const double C7054 = C7051 - C7045;
    const double C7060 = C7057 / C6936;
    const double C7059 = C7055 + C7029;
    const double C7058 = C7054 / C6944;
    const double C7062 = C7060 - C7049;
    const double C7061 = C7059 * be;
    const double C7064 = C6954 * C7062;
    const double C7063 = C7061 / C6936;
    const double C7065 = C7058 - C7063;
    const double C7066 = C7065 + C7056;
    const double C7067 = C6954 * C7066;
    const double C7075 = 0 * be;
    const double C7074 = zAB * C6974;
    const double C7073 = C6954 * C7071;
    const double C7077 = C7075 / C6958;
    const double C7076 = C7074 / C6936;
    const double C7078 = 1 - C7076;
    const double C7079 = C7078 * ae;
    const double C7080 = C7079 / C6936;
    const double C7081 = C7080 - C7077;
    const double C7082 = C6954 * C7081;
    const double C7100 = C7053 * C6948;
    const double C7099 = C6954 * C6926;
    const double C7098 = 0 * be;
    const double C7097 = C6973 / C6936;
    const double C7096 = C7053 * be;
    const double C7095 = C7040 / C6936;
    const double C7094 = yAB * C7040;
    const double C7093 = 0 * be;
    const double C7092 = C6954 * C7003;
    const double C7091 = C6954 * C7086;
    const double C7106 = C7098 / C6936;
    const double C7105 = -C7097;
    const double C7104 = C7096 / C6936;
    const double C7103 = -C7095;
    const double C7102 = C7094 / C6936;
    const double C7101 = C7093 / C6936;
    const double C7110 = C7105 / C6944;
    const double C7109 = C7103 / C6944;
    const double C7108 = 0 - C7102;
    const double C7107 = -C7101;
    const double C7114 = C7110 - C7106;
    const double C7113 = C7109 - C7104;
    const double C7112 = C7108 * be;
    const double C7111 = C7107 / C6944;
    const double C7116 = yAB * C7113;
    const double C7115 = C7112 / C6936;
    const double C7118 = C7116 + C7089;
    const double C7117 = C7111 - C7115;
    const double C7120 = C7118 * be;
    const double C7119 = C7117 / C6944;
    const double C7121 = C7120 / C6936;
    const double C7122 = C7119 - C7121;
    const double C7123 = C7122 + C7114;
    const double C7124 = C6954 * C7123;
    const double C7147 = yAB * C7100;
    const double C7146 = -4 * C6961;
    const double C7145 = -2 * C7040;
    const double C7144 = C6954 * 1;
    const double C7143 = C6954 * C6966;
    const double C7142 = C7062 / C6944;
    const double C7141 = C6961 / C6943;
    const double C7140 = 0 * ae;
    const double C7139 = yAB * C7062;
    const double C7138 = C7093 / C6958;
    const double C7137 = C7108 * ae;
    const double C7136 = 0 * be;
    const double C7135 = yAB * C7093;
    const double C7134 = C6954 * C7128;
    const double C7155 = C7147 / C6936;
    const double C7154 = C7146 / C6936;
    const double C7153 = ae * C7145;
    const double C7152 = C7140 / C6936;
    const double C7151 = C7139 + C7028;
    const double C7150 = C7137 / C6936;
    const double C7149 = C7136 / C6958;
    const double C7148 = C7135 / C6936;
    const double C7160 = C7154 - C7155;
    const double C7159 = C7152 - C7141;
    const double C7158 = C7151 * be;
    const double C7157 = C7150 - C7138;
    const double C7156 = 0 - C7148;
    const double C7166 = C7160 * ae;
    const double C7165 = yAB * C7159;
    const double C7164 = C7158 / C6936;
    const double C7163 = C7157 / C6944;
    const double C7162 = yAB * C7157;
    const double C7161 = C7156 * ae;
    const double C7170 = C7165 + C7389;
    const double C7169 = C7163 - C7164;
    const double C7168 = C7162 + 0;
    const double C7167 = C7161 / C6936;
    const double C7174 = C7170 * be;
    const double C7173 = C7169 + C7159;
    const double C7172 = C7168 * be;
    const double C7171 = C7167 - C7149;
    const double C7178 = C7174 / C6936;
    const double C7177 = yAB * C7173;
    const double C7176 = C7172 / C6936;
    const double C7175 = C7171 + C7095;
    const double C7181 = C7142 - C7178;
    const double C7180 = C7177 + C7394;
    const double C7179 = C7175 / C6944;
    const double C7183 = C7180 * be;
    const double C7182 = C7179 - C7176;
    const double C7185 = C7183 / C6936;
    const double C7184 = C7182 / C6944;
    const double C7186 = C7184 - C7185;
    const double C7187 = C7186 + C7181;
    const double C7188 = C6954 * C7187;
    const double C7206 = C7078 * C6948;
    const double C7205 = 0 * be;
    const double C7204 = C6974 / C6936;
    const double C7203 = C7078 * be;
    const double C7202 = C7075 / C6936;
    const double C7201 = zAB * C7075;
    const double C7200 = 0 * be;
    const double C7199 = C6954 * C7194;
    const double C7212 = C7205 / C6936;
    const double C7211 = -C7204;
    const double C7210 = C7203 / C6936;
    const double C7209 = -C7202;
    const double C7208 = C7201 / C6936;
    const double C7207 = C7200 / C6936;
    const double C7216 = C7211 / C6944;
    const double C7215 = C7209 / C6944;
    const double C7214 = 0 - C7208;
    const double C7213 = -C7207;
    const double C7220 = C7216 - C7212;
    const double C7219 = C7215 - C7210;
    const double C7218 = C7214 * be;
    const double C7217 = C7213 / C6944;
    const double C7222 = zAB * C7219;
    const double C7221 = C7218 / C6936;
    const double C7224 = C7222 + C7197;
    const double C7223 = C7217 - C7221;
    const double C7226 = C7224 * be;
    const double C7225 = C7223 / C6944;
    const double C7227 = C7226 / C6936;
    const double C7228 = C7225 - C7227;
    const double C7229 = C7228 + C7220;
    const double C7230 = C6954 * C7229;
    const double C7253 = zAB * C7206;
    const double C7252 = -4 * C6962;
    const double C7251 = -2 * C7075;
    const double C7250 = C7081 / C6944;
    const double C7249 = C6962 / C6943;
    const double C7248 = 0 * ae;
    const double C7247 = zAB * C7081;
    const double C7246 = C7200 / C6958;
    const double C7245 = C7214 * ae;
    const double C7244 = 0 * be;
    const double C7243 = zAB * C7200;
    const double C7242 = C6954 * C7236;
    const double C7261 = C7253 / C6936;
    const double C7260 = C7252 / C6936;
    const double C7259 = ae * C7251;
    const double C7258 = C7248 / C6936;
    const double C7257 = C7247 + C7071;
    const double C7256 = C7245 / C6936;
    const double C7255 = C7244 / C6958;
    const double C7254 = C7243 / C6936;
    const double C7266 = C7260 - C7261;
    const double C7265 = C7258 - C7249;
    const double C7264 = C7257 * be;
    const double C7263 = C7256 - C7246;
    const double C7262 = 0 - C7254;
    const double C7272 = C7266 * ae;
    const double C7271 = zAB * C7265;
    const double C7270 = C7264 / C6936;
    const double C7269 = C7263 / C6944;
    const double C7268 = zAB * C7263;
    const double C7267 = C7262 * ae;
    const double C7276 = C7271 + C7389;
    const double C7275 = C7269 - C7270;
    const double C7274 = C7268 + 0;
    const double C7273 = C7267 / C6936;
    const double C7280 = C7276 * be;
    const double C7279 = C7275 + C7265;
    const double C7278 = C7274 * be;
    const double C7277 = C7273 - C7255;
    const double C7284 = C7280 / C6936;
    const double C7283 = zAB * C7279;
    const double C7282 = C7278 / C6936;
    const double C7281 = C7277 + C7202;
    const double C7287 = C7250 - C7284;
    const double C7286 = C7283 + C7395;
    const double C7285 = C7281 / C6944;
    const double C7289 = C7286 * be;
    const double C7288 = C7285 - C7282;
    const double C7291 = C7289 / C6936;
    const double C7290 = C7288 / C6944;
    const double C7292 = C7290 - C7291;
    const double C7293 = C7292 + C7287;
    const double C7294 = C6954 * C7293;
    const double C7301 = C6954 * C6933;
    const double C7300 = C6954 * C7113;
    const double C7299 = C6954 * C7017;
    const double C7298 = C6954 * C7089;
    const double C7308 = C6954 * C7029;
    const double C7307 = C6954 * C7173;
    const double C7306 = C6954 * C7050;
    const double C7305 = C6954 * C7394;
    const double C7315 = C6954 * C7219;
    const double C7314 = C6954 * C7197;
    const double C7322 = C6954 * C7279;
    const double C7321 = C6954 * C7395;
    const double C7426 = 2 * C7081;
    const double C7425 = zAB * C7272;
    const double C7424 = C7259 / C6955;
    const double C7423 = C7206 / C6958;
    const double C7422 = C7266 * be;
    const double C7421 = 2 * C7219;
    const double C7420 = be * C7251;
    const double C7419 = 2 * C7062;
    const double C7418 = yAB * C7166;
    const double C7417 = C7153 / C6955;
    const double C7416 = C6954 * C6991;
    const double C7415 = C7100 / C6958;
    const double C7414 = C7160 * be;
    const double C7413 = 2 * C7113;
    const double C7412 = be * C7145;
    const double C7411 = C6954 * C7009;
    const double C7410 = C6954 * C7272;
    const double C7409 = C6954 * C7166;
    const double C7408 = C7005 * be;
    const double C7407 = 2 * C7050;
    const double C7406 = be * C6945;
    const double C7405 = C6954 * C7206;
    const double C7404 = C6954 * C7100;
    const double C7403 = C6991 / C6958;
    const double C7402 = 2 * C7003;
    const double C7401 = xAB * C7009;
    const double C7400 = C6956 / C6955;
    const double C7438 = C6954 * C7422;
    const double C7437 = C6954 * C7408;
    const double C7436 = C6954 * C7414;
    const double C7435 = C7425 / C6936;
    const double C7434 = zAB * C7422;
    const double C7433 = C7420 / C6943;
    const double C7432 = C7418 / C6936;
    const double C7431 = yAB * C7414;
    const double C7430 = C7412 / C6943;
    const double C7429 = xAB * C7408;
    const double C7428 = C7406 / C6943;
    const double C7427 = C7401 / C6936;
    const double C7447 = C7435 + C7426;
    const double C7446 = C7434 / C6936;
    const double C7445 = -C7433;
    const double C7444 = C7432 + C7419;
    const double C7443 = C7431 / C6936;
    const double C7442 = -C7430;
    const double C7441 = C7429 / C6936;
    const double C7440 = -C7428;
    const double C7439 = C7427 + C7402;
    const double C7456 = C7447 * be;
    const double C7455 = C7421 - C7446;
    const double C7454 = C7445 / C6944;
    const double C7453 = C7444 * be;
    const double C7452 = C7413 - C7443;
    const double C7451 = C7442 / C6944;
    const double C7450 = C7407 - C7441;
    const double C7449 = C7440 / C6944;
    const double C7448 = C7439 * be;
    const double C7462 = C7456 / C6936;
    const double C7461 = C7455 * be;
    const double C7460 = C7453 / C6936;
    const double C7459 = C7452 * be;
    const double C7458 = C7450 * be;
    const double C7457 = C7448 / C6936;
    const double C7468 = C7424 - C7462;
    const double C7467 = C7461 / C6936;
    const double C7466 = C7417 - C7460;
    const double C7465 = C7459 / C6936;
    const double C7464 = C7458 / C6936;
    const double C7463 = C7400 - C7457;
    const double C7474 = C7468 - C7423;
    const double C7473 = C7454 - C7467;
    const double C7472 = C7466 - C7415;
    const double C7471 = C7451 - C7465;
    const double C7470 = C7449 - C7464;
    const double C7469 = C7463 - C7403;
    const double C7480 = C6954 * C7474;
    const double C7479 = C6954 * C7472;
    const double C7478 = C6954 * C7469;
    const double C7477 = C7473 - C7423;
    const double C7476 = C7471 - C7415;
    const double C7475 = C7470 - C7403;
    const double C7483 = C6954 * C7477;
    const double C7482 = C6954 * C7476;
    const double C7481 = C6954 * C7475;
    const double hxx200100 =
        C6954 *
        (((ae * -2 * C6937) / C6955 -
          (((xAB * C6956) / C6943 + 2 * C6987) * be) / C6936) /
             C6944 -
         ((xAB * C7469 + 2 * C7017) * be) / C6936 + C7009 / C6958 -
         ((2 * C6979 - C6997 / C6958) * be) / C6936) *
        C6969 * C6970;
    const double hxx200010 = C7481 * C7034 * C6970;
    const double hxx200001 = C7481 * C6969 * C7073;
    const double hxx020100 = (C6970 * C7091 * C7411) / C6936;
    const double hxx020010 = -(C6970 * C7134 * C7416) / C6936;
    const double hxx020001 = -(C7073 * C7091 * C7416) / C6936;
    const double hxx002100 = (C7199 * C6969 * C7411) / C6936;
    const double hxx002010 = -(C7199 * C7034 * C7416) / C6936;
    const double hxx002001 = -(C7242 * C6969 * C7416) / C6936;
    const double hxx110100 = C7478 * C7298 * C6970;
    const double hxx110010 = -(C6970 * C7305 * C7437) / C6936;
    const double hxx110001 = -(C7073 * C7298 * C7437) / C6936;
    const double hxx101100 = C7478 * C6969 * C7314;
    const double hxx101010 = -(C7314 * C7034 * C7437) / C6936;
    const double hxx101001 = -(C7321 * C6969 * C7437) / C6936;
    const double hxx011100 = (C7314 * C7298 * C7411) / C6936;
    const double hxx011010 = -(C7314 * C7305 * C7416) / C6936;
    const double hxx011001 = -(C7321 * C7298 * C7416) / C6936;
    const double hxy200100 = -(C6970 * C7024 * C6981) / C6936;
    const double hxy200010 = C7067 * C7064 * C6970;
    const double hxy200001 = -(C7073 * C7067 * C6981) / C6936;
    const double hxy020100 = C7092 * C7124 * C6970;
    const double hxy020010 = -(C6970 * C7188 * C7143) / C6936;
    const double hxy020001 = -(C7073 * C7124 * C7143) / C6936;
    const double hxy002100 = -(C7199 * C7092 * C6981) / C6936;
    const double hxy002010 = -(C7199 * C7064 * C7143) / C6936;
    const double hxy002001 = (C7242 * C7143 * C6981) / C6943;
    const double hxy110100 = C7299 * C7300 * C6970;
    const double hxy110010 = C7306 * C7307 * C6970;
    const double hxy110001 = C7306 * C7300 * C7073;
    const double hxy101100 = -(C7314 * C7299 * C6981) / C6936;
    const double hxy101010 = C7306 * C7064 * C7314;
    const double hxy101001 = -(C7321 * C7306 * C6981) / C6936;
    const double hxy011100 = C7092 * C7300 * C7314;
    const double hxy011010 = -(C7314 * C7307 * C7143) / C6936;
    const double hxy011001 = -(C7321 * C7300 * C7143) / C6936;
    const double hxz200100 = -(C7024 * C6969 * C6982) / C6936;
    const double hxz200010 = -(C7067 * C7034 * C6982) / C6936;
    const double hxz200001 = C7067 * C6969 * C7082;
    const double hxz020100 = -(C7092 * C7091 * C6982) / C6936;
    const double hxz020010 = (C7134 * C7143 * C6982) / C6943;
    const double hxz020001 = -(C7082 * C7091 * C7143) / C6936;
    const double hxz002100 = C7092 * C6969 * C7230;
    const double hxz002010 = -(C7230 * C7034 * C7143) / C6936;
    const double hxz002001 = -(C7294 * C6969 * C7143) / C6936;
    const double hxz110100 = -(C7299 * C7298 * C6982) / C6936;
    const double hxz110010 = -(C7306 * C7305 * C6982) / C6936;
    const double hxz110001 = C7306 * C7298 * C7082;
    const double hxz101100 = C7299 * C6969 * C7315;
    const double hxz101010 = C7306 * C7034 * C7315;
    const double hxz101001 = C7306 * C6969 * C7322;
    const double hxz011100 = C7092 * C7298 * C7315;
    const double hxz011010 = -(C7315 * C7305 * C7143) / C6936;
    const double hxz011001 = -(C7322 * C7298 * C7143) / C6936;
    const double hyy200100 = -(C6970 * C6975 * C7404) / C6936;
    const double hyy200010 = (C6970 * C7041 * C7409) / C6936;
    const double hyy200001 = -(C7073 * C7041 * C7404) / C6936;
    const double hyy020100 = C7099 * C7482 * C6970;
    const double hyy020010 =
        C7144 * C6954 *
        (((ae * -2 * C7093) / C6955 -
          (((yAB * C7153) / C6943 + 2 * C7157) * be) / C6936) /
             C6944 -
         ((yAB * C7472 + 2 * C7173) * be) / C6936 + C7166 / C6958 -
         ((2 * C7159 - C7147 / C6958) * be) / C6936) *
        C6970;
    const double hyy020001 = C7144 * C7482 * C7073;
    const double hyy002100 = -(C7199 * C7099 * C7404) / C6936;
    const double hyy002010 = (C7199 * C7144 * C7409) / C6936;
    const double hyy002001 = -(C7242 * C7144 * C7404) / C6936;
    const double hyy110100 = -(C6970 * C7301 * C7436) / C6936;
    const double hyy110010 = C7308 * C7479 * C6970;
    const double hyy110001 = -(C7073 * C7308 * C7436) / C6936;
    const double hyy101100 = -(C7314 * C7301 * C7404) / C6936;
    const double hyy101010 = (C7314 * C7308 * C7409) / C6936;
    const double hyy101001 = -(C7321 * C7308 * C7404) / C6936;
    const double hyy011100 = -(C7314 * C7099 * C7436) / C6936;
    const double hyy011010 = C7144 * C7479 * C7314;
    const double hyy011001 = -(C7321 * C7144 * C7436) / C6936;
    const double hyz200100 = (C6975 * C6981 * C6982) / C6943;
    const double hyz200010 = -(C7041 * C7064 * C6982) / C6936;
    const double hyz200001 = -(C7082 * C7041 * C6981) / C6936;
    const double hyz020100 = -(C7099 * C7124 * C6982) / C6936;
    const double hyz020010 = -(C7144 * C7188 * C6982) / C6936;
    const double hyz020001 = C7144 * C7124 * C7082;
    const double hyz002100 = -(C7230 * C7099 * C6981) / C6936;
    const double hyz002010 = C7144 * C7064 * C7230;
    const double hyz002001 = -(C7294 * C7144 * C6981) / C6936;
    const double hyz110100 = -(C7301 * C7300 * C6982) / C6936;
    const double hyz110010 = -(C7308 * C7307 * C6982) / C6936;
    const double hyz110001 = C7308 * C7300 * C7082;
    const double hyz101100 = -(C7315 * C7301 * C6981) / C6936;
    const double hyz101010 = C7308 * C7064 * C7315;
    const double hyz101001 = -(C7322 * C7308 * C6981) / C6936;
    const double hyz011100 = C7099 * C7300 * C7315;
    const double hyz011010 = C7144 * C7307 * C7315;
    const double hyz011001 = C7144 * C7300 * C7322;
    const double hzz200100 = -(C6975 * C6969 * C7405) / C6936;
    const double hzz200010 = -(C7041 * C7034 * C7405) / C6936;
    const double hzz200001 = (C7041 * C6969 * C7410) / C6936;
    const double hzz020100 = -(C7099 * C7091 * C7405) / C6936;
    const double hzz020010 = -(C7144 * C7134 * C7405) / C6936;
    const double hzz020001 = (C7144 * C7091 * C7410) / C6936;
    const double hzz002100 = C7099 * C6969 * C7483;
    const double hzz002010 = C7144 * C7034 * C7483;
    const double hzz002001 =
        C7144 * C6969 * C6954 *
        (((ae * -2 * C7200) / C6955 -
          (((zAB * C7259) / C6943 + 2 * C7263) * be) / C6936) /
             C6944 -
         ((zAB * C7474 + 2 * C7279) * be) / C6936 + C7272 / C6958 -
         ((2 * C7265 - C7253 / C6958) * be) / C6936);
    const double hzz110100 = -(C7301 * C7298 * C7405) / C6936;
    const double hzz110010 = -(C7308 * C7305 * C7405) / C6936;
    const double hzz110001 = (C7308 * C7298 * C7410) / C6936;
    const double hzz101100 = -(C7301 * C6969 * C7438) / C6936;
    const double hzz101010 = -(C7308 * C7034 * C7438) / C6936;
    const double hzz101001 = C7308 * C6969 * C7480;
    const double hzz011100 = -(C7099 * C7298 * C7438) / C6936;
    const double hzz011010 = -(C7144 * C7305 * C7438) / C6936;
    const double hzz011001 = C7144 * C7298 * C7480;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx110100;
        hxx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx110010;
        hxx[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxx110001;
        hxx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx011100;
        hxx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx011010;
        hxx[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxx011001;
        hxx[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hxx200100 - 0.5 * hxx020100 + hxx002100);
        hxx[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (-0.5 * hxx200010 - 0.5 * hxx020010 + hxx002010);
        hxx[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxx200001 - 0.5 * hxx020001 + hxx002001);
        hxx[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx101100;
        hxx[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx101010;
        hxx[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxx101001;
        hxx[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hxx200100 - std::sqrt(0.75) * hxx020100);
        hxx[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(0.75) * hxx200010 - std::sqrt(0.75) * hxx020010);
        hxx[(Ai + 4) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(0.75) * hxx200001 - std::sqrt(0.75) * hxx020001);
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy110100;
        hxy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy110010;
        hxy[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxy110001;
        hxy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy011100;
        hxy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy011010;
        hxy[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxy011001;
        hxy[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hxy200100 - 0.5 * hxy020100 + hxy002100);
        hxy[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (-0.5 * hxy200010 - 0.5 * hxy020010 + hxy002010);
        hxy[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxy200001 - 0.5 * hxy020001 + hxy002001);
        hxy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy101100;
        hxy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy101010;
        hxy[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxy101001;
        hxy[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hxy200100 - std::sqrt(0.75) * hxy020100);
        hxy[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(0.75) * hxy200010 - std::sqrt(0.75) * hxy020010);
        hxy[(Ai + 4) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(0.75) * hxy200001 - std::sqrt(0.75) * hxy020001);
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz110100;
        hxz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz110010;
        hxz[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxz110001;
        hxz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz011100;
        hxz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz011010;
        hxz[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxz011001;
        hxz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hxz200100 - 0.5 * hxz020100 + hxz002100);
        hxz[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (-0.5 * hxz200010 - 0.5 * hxz020010 + hxz002010);
        hxz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxz200001 - 0.5 * hxz020001 + hxz002001);
        hxz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz101100;
        hxz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz101010;
        hxz[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxz101001;
        hxz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hxz200100 - std::sqrt(0.75) * hxz020100);
        hxz[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(0.75) * hxz200010 - std::sqrt(0.75) * hxz020010);
        hxz[(Ai + 4) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(0.75) * hxz200001 - std::sqrt(0.75) * hxz020001);
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy110100;
        hyy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy110010;
        hyy[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hyy110001;
        hyy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy011100;
        hyy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy011010;
        hyy[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hyy011001;
        hyy[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hyy200100 - 0.5 * hyy020100 + hyy002100);
        hyy[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (-0.5 * hyy200010 - 0.5 * hyy020010 + hyy002010);
        hyy[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyy200001 - 0.5 * hyy020001 + hyy002001);
        hyy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy101100;
        hyy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy101010;
        hyy[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hyy101001;
        hyy[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hyy200100 - std::sqrt(0.75) * hyy020100);
        hyy[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(0.75) * hyy200010 - std::sqrt(0.75) * hyy020010);
        hyy[(Ai + 4) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(0.75) * hyy200001 - std::sqrt(0.75) * hyy020001);
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz110100;
        hyz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz110010;
        hyz[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hyz110001;
        hyz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz011100;
        hyz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz011010;
        hyz[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hyz011001;
        hyz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hyz200100 - 0.5 * hyz020100 + hyz002100);
        hyz[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (-0.5 * hyz200010 - 0.5 * hyz020010 + hyz002010);
        hyz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyz200001 - 0.5 * hyz020001 + hyz002001);
        hyz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz101100;
        hyz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz101010;
        hyz[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hyz101001;
        hyz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hyz200100 - std::sqrt(0.75) * hyz020100);
        hyz[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(0.75) * hyz200010 - std::sqrt(0.75) * hyz020010);
        hyz[(Ai + 4) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(0.75) * hyz200001 - std::sqrt(0.75) * hyz020001);
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz110100;
        hzz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz110010;
        hzz[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hzz110001;
        hzz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz011100;
        hzz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz011010;
        hzz[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hzz011001;
        hzz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hzz200100 - 0.5 * hzz020100 + hzz002100);
        hzz[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (-0.5 * hzz200010 - 0.5 * hzz020010 + hzz002010);
        hzz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hzz200001 - 0.5 * hzz020001 + hzz002001);
        hzz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz101100;
        hzz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz101010;
        hzz[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hzz101001;
        hzz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hzz200100 - std::sqrt(0.75) * hzz020100);
        hzz[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(0.75) * hzz200010 - std::sqrt(0.75) * hzz020010);
        hzz[(Ai + 4) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(0.75) * hzz200001 - std::sqrt(0.75) * hzz020001);
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx110100;
        hxx[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx110010;
        hxx[(Ai + 0) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxx110001;
        hxx[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx011100;
        hxx[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx011010;
        hxx[(Ai + 1) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxx011001;
        hxx[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hxx200100 - 0.5 * hxx020100 + hxx002100);
        hxx[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (-0.5 * hxx200010 - 0.5 * hxx020010 + hxx002010);
        hxx[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxx200001 - 0.5 * hxx020001 + hxx002001);
        hxx[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx101100;
        hxx[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx101010;
        hxx[(Ai + 3) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxx101001;
        hxx[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hxx200100 - std::sqrt(0.75) * hxx020100);
        hxx[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(0.75) * hxx200010 - std::sqrt(0.75) * hxx020010);
        hxx[(Ai + 4) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(0.75) * hxx200001 - std::sqrt(0.75) * hxx020001);
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy110100;
        hxy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy110010;
        hxy[(Ai + 0) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxy110001;
        hxy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy011100;
        hxy[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy011010;
        hxy[(Ai + 1) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxy011001;
        hxy[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hxy200100 - 0.5 * hxy020100 + hxy002100);
        hxy[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (-0.5 * hxy200010 - 0.5 * hxy020010 + hxy002010);
        hxy[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxy200001 - 0.5 * hxy020001 + hxy002001);
        hxy[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy101100;
        hxy[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy101010;
        hxy[(Ai + 3) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxy101001;
        hxy[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hxy200100 - std::sqrt(0.75) * hxy020100);
        hxy[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(0.75) * hxy200010 - std::sqrt(0.75) * hxy020010);
        hxy[(Ai + 4) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(0.75) * hxy200001 - std::sqrt(0.75) * hxy020001);
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz110100;
        hxz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz110010;
        hxz[(Ai + 0) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxz110001;
        hxz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz011100;
        hxz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz011010;
        hxz[(Ai + 1) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxz011001;
        hxz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hxz200100 - 0.5 * hxz020100 + hxz002100);
        hxz[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (-0.5 * hxz200010 - 0.5 * hxz020010 + hxz002010);
        hxz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxz200001 - 0.5 * hxz020001 + hxz002001);
        hxz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz101100;
        hxz[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz101010;
        hxz[(Ai + 3) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxz101001;
        hxz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hxz200100 - std::sqrt(0.75) * hxz020100);
        hxz[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(0.75) * hxz200010 - std::sqrt(0.75) * hxz020010);
        hxz[(Ai + 4) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(0.75) * hxz200001 - std::sqrt(0.75) * hxz020001);
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy110100;
        hyy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy110010;
        hyy[(Ai + 0) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hyy110001;
        hyy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy011100;
        hyy[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy011010;
        hyy[(Ai + 1) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hyy011001;
        hyy[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hyy200100 - 0.5 * hyy020100 + hyy002100);
        hyy[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (-0.5 * hyy200010 - 0.5 * hyy020010 + hyy002010);
        hyy[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyy200001 - 0.5 * hyy020001 + hyy002001);
        hyy[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy101100;
        hyy[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy101010;
        hyy[(Ai + 3) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hyy101001;
        hyy[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hyy200100 - std::sqrt(0.75) * hyy020100);
        hyy[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(0.75) * hyy200010 - std::sqrt(0.75) * hyy020010);
        hyy[(Ai + 4) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(0.75) * hyy200001 - std::sqrt(0.75) * hyy020001);
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz110100;
        hyz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz110010;
        hyz[(Ai + 0) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hyz110001;
        hyz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz011100;
        hyz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz011010;
        hyz[(Ai + 1) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hyz011001;
        hyz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hyz200100 - 0.5 * hyz020100 + hyz002100);
        hyz[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (-0.5 * hyz200010 - 0.5 * hyz020010 + hyz002010);
        hyz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyz200001 - 0.5 * hyz020001 + hyz002001);
        hyz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz101100;
        hyz[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz101010;
        hyz[(Ai + 3) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hyz101001;
        hyz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hyz200100 - std::sqrt(0.75) * hyz020100);
        hyz[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(0.75) * hyz200010 - std::sqrt(0.75) * hyz020010);
        hyz[(Ai + 4) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(0.75) * hyz200001 - std::sqrt(0.75) * hyz020001);
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz110100;
        hzz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz110010;
        hzz[(Ai + 0) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hzz110001;
        hzz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz011100;
        hzz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz011010;
        hzz[(Ai + 1) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hzz011001;
        hzz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hzz200100 - 0.5 * hzz020100 + hzz002100);
        hzz[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (-0.5 * hzz200010 - 0.5 * hzz020010 + hzz002010);
        hzz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hzz200001 - 0.5 * hzz020001 + hzz002001);
        hzz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz101100;
        hzz[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz101010;
        hzz[(Ai + 3) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hzz101001;
        hzz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hzz200100 - std::sqrt(0.75) * hzz020100);
        hzz[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(0.75) * hzz200010 - std::sqrt(0.75) * hzz020010);
        hzz[(Ai + 4) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(0.75) * hzz200001 - std::sqrt(0.75) * hzz020001);
    }
}

// Automatically generated, do not edit
void overlap_second_derivative_22(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C11579 = ae + be;
    const double C11590 = xAB * be;
    const double C11589 = xAB * ae;
    const double C11588 = 2 * C11579;
    const double C11596 = C11589 * C11590;
    const double C11595 = 1 / C11588;
    const double C11594 = std::pow(C11579, 2);
    const double C11597 = C11596 / C11594;
    const double C11598 = C11595 - C11597;
    const double C11619 = yAB * be;
    const double C11618 = yAB * ae;
    const double C11620 = C11618 * C11619;
    const double C11621 = C11620 / C11594;
    const double C11622 = C11595 - C11621;
    const double C11640 = zAB * be;
    const double C11639 = zAB * ae;
    const double C11641 = C11639 * C11640;
    const double C11642 = C11641 / C11594;
    const double C11643 = C11595 - C11642;
    const double C11675 = C11640 / C11579;
    const double C11674 = C11639 / C11579;
    const double C11673 = C11643 * C11639;
    const double C11672 = zAB * be;
    const double C11671 = 2 * C11594;
    const double C11670 = C11619 / C11579;
    const double C11669 = C11618 / C11579;
    const double C11668 = C11622 * C11618;
    const double C11667 = yAB * be;
    const double C11666 = zAB * ae;
    const double C11665 = yAB * ae;
    const double C11664 = std::pow(C11589, 2);
    const double C11663 = std::pow(C11588, -1);
    const double C11662 = C11590 / C11579;
    const double C11661 = C11589 / C11579;
    const double C11660 = std::pow(C11579, 2);
    const double C11659 = 2 * C11579;
    const double C11658 = xAB * ae;
    const double C11681 = C11674 - C11675;
    const double C11680 = C11673 / C11579;
    const double C11679 = C11669 - C11670;
    const double C11678 = C11668 / C11579;
    const double C11677 = C11664 / C11594;
    const double C11676 = C11661 - C11662;
    const double C11685 = C11681 / C11588;
    const double C11684 = C11679 / C11588;
    const double C11683 = C11677 + C11595;
    const double C11682 = C11676 / C11588;
    const double C11687 = C11680 + C11685;
    const double C11686 = C11678 + C11684;
    const double C10843 = C11658 / (ae + be);
    const double C10845 = 1 / C11659 - (C11658 * xAB * be) / C11660;
    const double C10846 = std::pow(C11659, -1);
    const double C10853 =
        ((1 / C11588 - (C11589 * C11590) / C11660) * C11589) / C11579 + C11682;
    const double C10854 = C11589 / (2 * C11660) - (C11663 * C11590) / C11579;
    const double C10856 =
        (C11683 + 2 * C11598) / C11588 -
        (((C11598 * C11589) / C11579 + C11682) * C11590) / C11579;
    const double C11020 = std::pow(C11665, 2) / C11594 + C11595;
    const double C11021 = -C11662;
    const double C11025 = C11665 / C11579;
    const double C11027 = std::pow(C11590, 2) / C11594 + C11595;
    const double C11087 = std::pow(C11666, 2) / C11594 + C11595;
    const double C11091 = C11666 / C11579;
    const double C11126 = C11682 - (C11598 * C11590) / C11579;
    const double C11145 = std::pow(C11667, 2) / C11594 + C11595;
    const double C11146 = -C11667 / C11579;
    const double C11184 =
        (std::pow(C11618, 2) / C11594 + C11595 + 2 * C11622) / C11588 -
        (C11686 * C11619) / C11579;
    const double C11195 = C11618 / C11671 - (C11663 * C11619) / C11579;
    const double C11317 = C11684 - (C11622 * C11619) / C11579;
    const double C11333 = std::pow(C11672, 2) / C11594 + C11595;
    const double C11334 = -C11672 / C11579;
    const double C11367 =
        (std::pow(C11639, 2) / C11594 + C11595 + 2 * C11643) / C11588 -
        (C11687 * C11640) / C11579;
    const double C11378 = C11639 / C11671 - (C11663 * C11640) / C11579;
    const double C11498 = C11685 - (C11643 * C11640) / C11579;
    const double C10864 = 0 * be;
    const double C10863 = 0 * be;
    const double C10862 = 0 * ae;
    const double C10861 = ae * be;
    const double C10860 = 0 * be;
    const double C10859 = 0 * be;
    const double C10858 = 0 * be;
    const double C10857 = ae + be;
    const double C10880 = C10861 * zAB;
    const double C10879 = C10861 * yAB;
    const double C10878 = C10864 / C10857;
    const double C10877 = 2 * C10859;
    const double C10876 = xAB * C10858;
    const double C10875 = C10862 / C10857;
    const double C10874 = 2 * C10861;
    const double C10873 = C10861 * xAB;
    const double C10872 = xAB * C10860;
    const double C10871 = -2 * C10860;
    const double C10870 = C10860 / C10857;
    const double C10869 = xAB * C10859;
    const double C10868 = -2 * C10859;
    const double C10867 = 2 * C10857;
    const double C10866 = std::pow(C10857, 2);
    const double C10865 = Pi / C10857;
    const double C10892 = C10880 * 1;
    const double C10891 = C10879 * 1;
    const double C10890 = C10877 / C10857;
    const double C10889 = C10876 / C10857;
    const double C10888 = C10873 * 1;
    const double C10887 = C10872 / C10857;
    const double C10886 = ae * C10871;
    const double C10885 = 2 * C10866;
    const double C10884 = C10869 / C10857;
    const double C10883 = ae * C10868;
    const double C10882 = C10866 * C10867;
    const double C10881 = std::sqrt(C10865);
    const double C10910 = C10881 * C10856;
    const double C10909 = 2 * C10892;
    const double C10908 = 2 * C10891;
    const double C10907 = C10863 / C10885;
    const double C10906 = 0 - C10889;
    const double C10905 = C10881 * 1;
    const double C10904 = C10881 * 1;
    const double C10903 = C10888 / C10866;
    const double C10902 = C10860 / C10885;
    const double C10901 = 2 * C10888;
    const double C10900 = -4 * C10888;
    const double C10899 = C10886 / C10882;
    const double C10898 = C10859 / C10885;
    const double C10897 = 0 - C10887;
    const double C10896 = xAB * C10886;
    const double C10895 = C10883 / C10882;
    const double C10894 = C10858 / C10885;
    const double C10893 = 0 - C10884;
    const double C10919 = C10881 * C10909;
    const double C10918 = C10881 * C10908;
    const double C10917 = C10906 * ae;
    const double C10916 = C10875 - C10903;
    const double C10915 = xAB * C10901;
    const double C10914 = C10900 / C10857;
    const double C10913 = C10897 * ae;
    const double C10912 = C10896 / C10866;
    const double C10911 = C10893 * ae;
    const double C10926 = C10916 / C10867;
    const double C10925 = C10917 / C10857;
    const double C10924 = xAB * C10916;
    const double C10923 = 2 * C10916;
    const double C10922 = C10915 / C10857;
    const double C10921 = C10913 / C10857;
    const double C10920 = C10911 / C10857;
    const double C10933 = C10926 - C10878;
    const double C10932 = C10898 - C10921;
    const double C10931 = C10925 - C10907;
    const double C10930 = C10924 + C10846;
    const double C10929 = 1 - C10922;
    const double C10928 = C10921 - C10898;
    const double C10927 = C10920 - C10894;
    const double C10942 = 2 * C10933;
    const double C10941 = C10931 + C10890;
    const double C10940 = C10930 * be;
    const double C10939 = C10928 / C10867;
    const double C10938 = C10929 * ae;
    const double C10937 = C10929 * C10874;
    const double C10936 = xAB * C10928;
    const double C10935 = 2 * C10928;
    const double C10934 = C10927 + C10870;
    const double C10951 = xAB * C10934;
    const double C10950 = C10941 / C10867;
    const double C10949 = C10940 / C10857;
    const double C10948 = C10937 / C10885;
    const double C10947 = C10938 / C10857;
    const double C10946 = xAB * C10937;
    const double C10945 = C10936 + 0;
    const double C10944 = C10934 / C10867;
    const double C10943 = C10912 + C10935;
    const double C10957 = C10951 + 0;
    const double C10956 = C10946 / C10885;
    const double C10955 = C10947 - C10902;
    const double C10954 = C10946 / C10857;
    const double C10953 = C10945 * be;
    const double C10952 = C10943 * be;
    const double C10965 = C10957 * be;
    const double C10964 = C10955 / C10867;
    const double C10963 = C10923 - C10956;
    const double C10962 = xAB * C10955;
    const double C10961 = 2 * C10955;
    const double C10960 = C10914 - C10954;
    const double C10959 = C10953 / C10857;
    const double C10958 = C10952 / C10857;
    const double C10972 = C10965 / C10857;
    const double C10971 = C10964 - C10949;
    const double C10970 = C10963 * be;
    const double C10969 = C10962 + C10843;
    const double C10968 = C10960 * ae;
    const double C10967 = C10944 - C10959;
    const double C10966 = C10895 - C10958;
    const double C10980 = xAB * C10971;
    const double C10979 = xAB * C10967;
    const double C10978 = C10950 - C10972;
    const double C10977 = C10967 / C10867;
    const double C10976 = C10970 / C10857;
    const double C10975 = C10968 / C10885;
    const double C10974 = C10969 * be;
    const double C10973 = xAB * C10968;
    const double C10986 = C10980 + C10854;
    const double C10985 = C10979 + 0;
    const double C10984 = C10978 + C10932;
    const double C10983 = C10975 - C10976;
    const double C10982 = C10974 / C10857;
    const double C10981 = C10973 / C10857;
    const double C10991 = C10986 * ae;
    const double C10990 = C10985 * ae;
    const double C10989 = C10984 / C10867;
    const double C10988 = C10939 - C10982;
    const double C10987 = C10981 + C10961;
    const double C10995 = C10991 / C10857;
    const double C10994 = C10990 / C10857;
    const double C10993 = C10988 + C10916;
    const double C10992 = C10987 * be;
    const double C10999 = C10993 / C10867;
    const double C10998 = C10989 + C10994;
    const double C10997 = xAB * C10993;
    const double C10996 = C10992 / C10857;
    const double C11003 = C10999 + C10995;
    const double C11002 = C10998 / C10867;
    const double C11001 = C10997 + C10845;
    const double C11000 = C10899 - C10996;
    const double C11006 = C11003 + C10942;
    const double C11005 = C11001 * ae;
    const double C11004 = C11000 - C10948;
    const double C11007 = C11005 / C10857;
    const double C11008 = C10977 + C11007;
    const double C11009 = C11008 + C10971;
    const double C11010 = xAB * C11009;
    const double C11011 = C11010 + C10853;
    const double C11012 = C11011 * be;
    const double C11013 = C11012 / C10857;
    const double C11014 = C11002 - C11013;
    const double C11015 = C11014 + C11006;
    const double C11016 = C10881 * C11015;
    const double C11040 = C10881 * C11027;
    const double C11039 = C10891 / C10866;
    const double C11038 = 0 * ae;
    const double C11037 = yAB * C10908;
    const double C11036 = 0 * be;
    const double C11035 = 0 * be;
    const double C11034 = 0 * be;
    const double C11033 = C10901 / C10857;
    const double C11032 = C10897 * be;
    const double C11031 = C10859 / C10857;
    const double C11030 = C10881 * C11020;
    const double C11029 = C10929 * be;
    const double C11028 = -C10870;
    const double C11051 = C11038 / C10857;
    const double C11050 = C11035 / C10885;
    const double C11049 = C11037 / C10857;
    const double C11048 = C11036 / C10885;
    const double C11047 = yAB * C11035;
    const double C11046 = C11034 / C10857;
    const double C11045 = -C11033;
    const double C11044 = C11032 / C10857;
    const double C11043 = -C11031;
    const double C11042 = C11029 / C10857;
    const double C11041 = C11028 / C10867;
    const double C11057 = C11051 - C11039;
    const double C11056 = 1 - C11049;
    const double C11055 = C11047 / C10857;
    const double C11054 = C11045 / C10867;
    const double C11053 = C11043 / C10867;
    const double C11052 = C11041 - C11042;
    const double C11063 = C11056 * C10874;
    const double C11062 = C11056 * ae;
    const double C11061 = 0 - C11055;
    const double C11060 = C11054 - C11046;
    const double C11059 = xAB * C11052;
    const double C11058 = C11053 - C11044;
    const double C11067 = C11062 / C10857;
    const double C11066 = C11061 * ae;
    const double C11065 = C11059 + C11021;
    const double C11064 = C11058 / C10867;
    const double C11070 = C11067 - C11050;
    const double C11069 = C11066 / C10857;
    const double C11068 = C11065 * be;
    const double C11073 = yAB * C11070;
    const double C11072 = C11069 - C11048;
    const double C11071 = C11068 / C10857;
    const double C11076 = C11073 + C11025;
    const double C11075 = C11072 / C10867;
    const double C11074 = C11064 - C11071;
    const double C11078 = C11076 * ae;
    const double C11077 = C11074 + C11060;
    const double C11080 = C11078 / C10857;
    const double C11079 = C10881 * C11077;
    const double C11081 = C11075 + C11080;
    const double C11082 = C11081 + C11057;
    const double C11083 = C10881 * C11082;
    const double C11098 = C10892 / C10866;
    const double C11097 = 0 * ae;
    const double C11096 = zAB * C10909;
    const double C11095 = 0 * be;
    const double C11094 = 0 * be;
    const double C11093 = C10881 * C11087;
    const double C11103 = C11097 / C10857;
    const double C11102 = C11094 / C10885;
    const double C11101 = C11096 / C10857;
    const double C11100 = C11095 / C10885;
    const double C11099 = zAB * C11094;
    const double C11106 = C11103 - C11098;
    const double C11105 = 1 - C11101;
    const double C11104 = C11099 / C10857;
    const double C11109 = C11105 * C10874;
    const double C11108 = C11105 * ae;
    const double C11107 = 0 - C11104;
    const double C11111 = C11108 / C10857;
    const double C11110 = C11107 * ae;
    const double C11113 = C11111 - C11102;
    const double C11112 = C11110 / C10857;
    const double C11115 = zAB * C11113;
    const double C11114 = C11112 - C11100;
    const double C11117 = C11115 + C11091;
    const double C11116 = C11114 / C10867;
    const double C11118 = C11117 * ae;
    const double C11119 = C11118 / C10857;
    const double C11120 = C11116 + C11119;
    const double C11121 = C11120 + C11106;
    const double C11122 = C10881 * C11121;
    const double C11130 = C10881 * C11126;
    const double C11129 = C10881 * C11070;
    const double C11128 = C11001 * be;
    const double C11127 = C10881 * C11025;
    const double C11131 = C11128 / C10857;
    const double C11132 = C10977 - C11131;
    const double C11133 = C11132 + C10971;
    const double C11134 = C10881 * C11133;
    const double C11139 = C10881 * C11113;
    const double C11138 = C10881 * C11091;
    const double C11156 = C10881 * C11683;
    const double C11155 = 0 * be;
    const double C11154 = C10908 / C10857;
    const double C11153 = C11056 * be;
    const double C11152 = C11035 / C10857;
    const double C11151 = C11061 * be;
    const double C11150 = C11036 / C10857;
    const double C11149 = C10969 * ae;
    const double C11148 = C10881 * C11145;
    const double C11163 = C11155 / C10857;
    const double C11162 = -C11154;
    const double C11161 = C11153 / C10857;
    const double C11160 = -C11152;
    const double C11159 = C11151 / C10857;
    const double C11158 = -C11150;
    const double C11157 = C11149 / C10857;
    const double C11167 = C11162 / C10867;
    const double C11166 = C11160 / C10867;
    const double C11165 = C11158 / C10867;
    const double C11164 = C10939 + C11157;
    const double C11171 = C11167 - C11163;
    const double C11170 = C11166 - C11161;
    const double C11169 = C11165 - C11159;
    const double C11168 = C11164 + C10916;
    const double C11174 = yAB * C11170;
    const double C11173 = C11169 / C10867;
    const double C11172 = C10881 * C11168;
    const double C11175 = C11174 + C11146;
    const double C11176 = C11175 * be;
    const double C11177 = C11176 / C10857;
    const double C11178 = C11173 - C11177;
    const double C11179 = C11178 + C11171;
    const double C11180 = C10881 * C11179;
    const double C11218 = 2 * C11057;
    const double C11217 = C11063 / C10885;
    const double C11216 = 2 * C11070;
    const double C11215 = yAB * C11063;
    const double C11214 = -4 * C10891;
    const double C11213 = 2 * C11072;
    const double C11212 = -2 * C11035;
    const double C11211 = -2 * C11036;
    const double C11210 = C10881 * 1;
    const double C11209 = C10881 * C10901;
    const double C11208 = 0 * be;
    const double C11207 = C11057 / C10867;
    const double C11206 = yAB * C11057;
    const double C11205 = C11070 / C10867;
    const double C11204 = C11076 * be;
    const double C11203 = yAB * C11072;
    const double C11202 = C11048 - C11069;
    const double C11201 = yAB * C11036;
    const double C11200 = 2 * C11036;
    const double C11199 = 0 * be;
    const double C11198 = 0 * be;
    const double C11197 = C10881 * C11184;
    const double C11232 = C11215 / C10885;
    const double C11231 = C11215 / C10857;
    const double C11230 = C11214 / C10857;
    const double C11229 = ae * C11212;
    const double C11228 = ae * C11211;
    const double C11227 = C11208 / C10857;
    const double C11226 = C11206 + C11663;
    const double C11225 = C11204 / C10857;
    const double C11224 = C11203 + 0;
    const double C11223 = C11198 / C10885;
    const double C11222 = C11201 / C10857;
    const double C11221 = C11200 / C10857;
    const double C11220 = C11199 / C10885;
    const double C11219 = yAB * C11198;
    const double C11243 = C11218 - C11232;
    const double C11242 = C11230 - C11231;
    const double C11241 = C11229 / C10882;
    const double C11240 = yAB * C11229;
    const double C11239 = C11228 / C10882;
    const double C11238 = C11207 - C11227;
    const double C11237 = C11226 * be;
    const double C11236 = C11075 - C11225;
    const double C11235 = C11224 * be;
    const double C11234 = 0 - C11222;
    const double C11233 = C11219 / C10857;
    const double C11252 = C11243 * be;
    const double C11251 = C11242 * ae;
    const double C11250 = C11240 / C10866;
    const double C11249 = 2 * C11238;
    const double C11248 = C11237 / C10857;
    const double C11247 = C11236 + C11057;
    const double C11246 = C11235 / C10857;
    const double C11245 = C11234 * ae;
    const double C11244 = 0 - C11233;
    const double C11261 = C11252 / C10857;
    const double C11260 = C11251 / C10885;
    const double C11259 = yAB * C11251;
    const double C11258 = C11250 + C11213;
    const double C11257 = C11247 / C10867;
    const double C11256 = C11205 - C11248;
    const double C11255 = yAB * C11247;
    const double C11254 = C11245 / C10857;
    const double C11253 = C11244 * ae;
    const double C11268 = C11260 - C11261;
    const double C11267 = C11259 / C10857;
    const double C11266 = C11258 * be;
    const double C11265 = yAB * C11256;
    const double C11264 = C11255 + C11622;
    const double C11263 = C11254 - C11223;
    const double C11262 = C11253 / C10857;
    const double C11274 = C11267 + C11216;
    const double C11273 = C11266 / C10857;
    const double C11272 = C11265 + C11195;
    const double C11271 = C11264 * ae;
    const double C11270 = C11263 + C11152;
    const double C11269 = C11262 - C11220;
    const double C11281 = C11274 * be;
    const double C11280 = C11239 - C11273;
    const double C11279 = C11272 * ae;
    const double C11278 = C11271 / C10857;
    const double C11277 = C11270 / C10867;
    const double C11276 = yAB * C11270;
    const double C11275 = C11269 + C11221;
    const double C11286 = C11281 / C10857;
    const double C11285 = C11279 / C10857;
    const double C11284 = C11277 - C11246;
    const double C11283 = C11276 + 0;
    const double C11282 = C11275 / C10867;
    const double C11291 = C11241 - C11286;
    const double C11290 = C11257 + C11285;
    const double C11289 = C11284 / C10867;
    const double C11288 = yAB * C11284;
    const double C11287 = C11283 * be;
    const double C11296 = C11291 - C11217;
    const double C11295 = C11290 + C11249;
    const double C11294 = C11289 + C11278;
    const double C11293 = C11288 + 0;
    const double C11292 = C11287 / C10857;
    const double C11299 = C11294 + C11256;
    const double C11298 = C11293 * ae;
    const double C11297 = C11282 - C11292;
    const double C11302 = yAB * C11299;
    const double C11301 = C11298 / C10857;
    const double C11300 = C11297 + C11202;
    const double C11304 = C11302 + C11686;
    const double C11303 = C11300 / C10867;
    const double C11306 = C11304 * be;
    const double C11305 = C11303 + C11301;
    const double C11308 = C11306 / C10857;
    const double C11307 = C11305 / C10867;
    const double C11309 = C11307 - C11308;
    const double C11310 = C11309 + C11295;
    const double C11311 = C10881 * C11310;
    const double C11321 = C10881 * C10843;
    const double C11320 = C11264 * be;
    const double C11319 = C10881 * C10955;
    const double C11318 = C10881 * C11317;
    const double C11322 = C11320 / C10857;
    const double C11323 = C11289 - C11322;
    const double C11324 = C11323 + C11256;
    const double C11325 = C10881 * C11324;
    const double C11341 = 0 * be;
    const double C11340 = C10909 / C10857;
    const double C11339 = C11105 * be;
    const double C11338 = C11094 / C10857;
    const double C11337 = C11107 * be;
    const double C11336 = C11095 / C10857;
    const double C11335 = C10881 * C11333;
    const double C11347 = C11341 / C10857;
    const double C11346 = -C11340;
    const double C11345 = C11339 / C10857;
    const double C11344 = -C11338;
    const double C11343 = C11337 / C10857;
    const double C11342 = -C11336;
    const double C11350 = C11346 / C10867;
    const double C11349 = C11344 / C10867;
    const double C11348 = C11342 / C10867;
    const double C11353 = C11350 - C11347;
    const double C11352 = C11349 - C11345;
    const double C11351 = C11348 - C11343;
    const double C11355 = zAB * C11352;
    const double C11354 = C11351 / C10867;
    const double C11356 = C11355 + C11334;
    const double C11357 = C11356 * be;
    const double C11358 = C11357 / C10857;
    const double C11359 = C11354 - C11358;
    const double C11360 = C11359 + C11353;
    const double C11361 = C10881 * C11360;
    const double C11399 = 2 * C11106;
    const double C11398 = C11109 / C10885;
    const double C11397 = 2 * C11113;
    const double C11396 = zAB * C11109;
    const double C11395 = -4 * C10892;
    const double C11394 = 2 * C11114;
    const double C11393 = -2 * C11094;
    const double C11392 = -2 * C11095;
    const double C11391 = 0 * be;
    const double C11390 = C11106 / C10867;
    const double C11389 = zAB * C11106;
    const double C11388 = C11113 / C10867;
    const double C11387 = C11117 * be;
    const double C11386 = zAB * C11114;
    const double C11385 = C11100 - C11112;
    const double C11384 = zAB * C11095;
    const double C11383 = 2 * C11095;
    const double C11382 = 0 * be;
    const double C11381 = 0 * be;
    const double C11380 = C10881 * C11367;
    const double C11413 = C11396 / C10885;
    const double C11412 = C11396 / C10857;
    const double C11411 = C11395 / C10857;
    const double C11410 = ae * C11393;
    const double C11409 = ae * C11392;
    const double C11408 = C11391 / C10857;
    const double C11407 = C11389 + C11663;
    const double C11406 = C11387 / C10857;
    const double C11405 = C11386 + 0;
    const double C11404 = C11381 / C10885;
    const double C11403 = C11384 / C10857;
    const double C11402 = C11383 / C10857;
    const double C11401 = C11382 / C10885;
    const double C11400 = zAB * C11381;
    const double C11424 = C11399 - C11413;
    const double C11423 = C11411 - C11412;
    const double C11422 = C11410 / C10882;
    const double C11421 = zAB * C11410;
    const double C11420 = C11409 / C10882;
    const double C11419 = C11390 - C11408;
    const double C11418 = C11407 * be;
    const double C11417 = C11116 - C11406;
    const double C11416 = C11405 * be;
    const double C11415 = 0 - C11403;
    const double C11414 = C11400 / C10857;
    const double C11433 = C11424 * be;
    const double C11432 = C11423 * ae;
    const double C11431 = C11421 / C10866;
    const double C11430 = 2 * C11419;
    const double C11429 = C11418 / C10857;
    const double C11428 = C11417 + C11106;
    const double C11427 = C11416 / C10857;
    const double C11426 = C11415 * ae;
    const double C11425 = 0 - C11414;
    const double C11442 = C11433 / C10857;
    const double C11441 = C11432 / C10885;
    const double C11440 = zAB * C11432;
    const double C11439 = C11431 + C11394;
    const double C11438 = C11428 / C10867;
    const double C11437 = C11388 - C11429;
    const double C11436 = zAB * C11428;
    const double C11435 = C11426 / C10857;
    const double C11434 = C11425 * ae;
    const double C11449 = C11441 - C11442;
    const double C11448 = C11440 / C10857;
    const double C11447 = C11439 * be;
    const double C11446 = zAB * C11437;
    const double C11445 = C11436 + C11643;
    const double C11444 = C11435 - C11404;
    const double C11443 = C11434 / C10857;
    const double C11455 = C11448 + C11397;
    const double C11454 = C11447 / C10857;
    const double C11453 = C11446 + C11378;
    const double C11452 = C11445 * ae;
    const double C11451 = C11444 + C11338;
    const double C11450 = C11443 - C11401;
    const double C11462 = C11455 * be;
    const double C11461 = C11420 - C11454;
    const double C11460 = C11453 * ae;
    const double C11459 = C11452 / C10857;
    const double C11458 = C11451 / C10867;
    const double C11457 = zAB * C11451;
    const double C11456 = C11450 + C11402;
    const double C11467 = C11462 / C10857;
    const double C11466 = C11460 / C10857;
    const double C11465 = C11458 - C11427;
    const double C11464 = C11457 + 0;
    const double C11463 = C11456 / C10867;
    const double C11472 = C11422 - C11467;
    const double C11471 = C11438 + C11466;
    const double C11470 = C11465 / C10867;
    const double C11469 = zAB * C11465;
    const double C11468 = C11464 * be;
    const double C11477 = C11472 - C11398;
    const double C11476 = C11471 + C11430;
    const double C11475 = C11470 + C11459;
    const double C11474 = C11469 + 0;
    const double C11473 = C11468 / C10857;
    const double C11480 = C11475 + C11437;
    const double C11479 = C11474 * ae;
    const double C11478 = C11463 - C11473;
    const double C11483 = zAB * C11480;
    const double C11482 = C11479 / C10857;
    const double C11481 = C11478 + C11385;
    const double C11485 = C11483 + C11687;
    const double C11484 = C11481 / C10867;
    const double C11487 = C11485 * be;
    const double C11486 = C11484 + C11482;
    const double C11489 = C11487 / C10857;
    const double C11488 = C11486 / C10867;
    const double C11490 = C11488 - C11489;
    const double C11491 = C11490 + C11476;
    const double C11492 = C10881 * C11491;
    const double C11500 = C11445 * be;
    const double C11499 = C10881 * C11498;
    const double C11501 = C11500 / C10857;
    const double C11502 = C11470 - C11501;
    const double C11503 = C11502 + C11437;
    const double C11504 = C10881 * C11503;
    const double C11513 = C10881 * C10853;
    const double C11512 = C10881 * C11170;
    const double C11511 = C10881 * C11009;
    const double C11510 = C10881 * C11146;
    const double C11520 = C10881 * C11021;
    const double C11519 = C10881 * C11299;
    const double C11518 = C10881 * C11052;
    const double C11517 = C10881 * C11686;
    const double C11529 = C10881 * C10845;
    const double C11528 = C10881 * C11247;
    const double C11527 = C10881 * C10993;
    const double C11526 = C10881 * C11622;
    const double C11538 = C10881 * C11352;
    const double C11537 = C10881 * C11334;
    const double C11545 = C10881 * C11480;
    const double C11544 = C10881 * C11687;
    const double C11552 = C10881 * C11428;
    const double C11551 = C10881 * C11643;
    const double C11722 = C10881 * C11477;
    const double C11721 = C10881 * C11296;
    const double C11720 = C10881 * C11004;
    const double C11719 = 2 * C11428;
    const double C11718 = zAB * C11477;
    const double C11717 = C11461 / C10867;
    const double C11716 = C11423 * be;
    const double C11715 = 2 * C11352;
    const double C11714 = be * C11393;
    const double C11713 = C10881 * C10968;
    const double C11712 = 2 * C11247;
    const double C11711 = yAB * C11296;
    const double C11710 = C11280 / C10867;
    const double C11709 = C10881 * C10937;
    const double C11708 = C11242 * be;
    const double C11707 = 2 * C11170;
    const double C11706 = be * C11212;
    const double C11705 = C10987 * ae;
    const double C11704 = C10881 * C11432;
    const double C11703 = C10881 * C11251;
    const double C11702 = C11455 * ae;
    const double C11701 = C11274 * ae;
    const double C11700 = C10960 * be;
    const double C11699 = 2 * C11052;
    const double C11698 = be * C10871;
    const double C11697 = C10881 * C11109;
    const double C11696 = C10881 * C11063;
    const double C11695 = 4 * C10866;
    const double C11694 = 2 * C10993;
    const double C11693 = xAB * C11004;
    const double C11692 = C10966 / C10867;
    const double C11738 = C10881 * C11716;
    const double C11737 = C10881 * C11700;
    const double C11736 = C10881 * C11708;
    const double C11735 = C11718 + C11719;
    const double C11734 = zAB * C11716;
    const double C11733 = C11714 / C10866;
    const double C11732 = C11711 + C11712;
    const double C11731 = yAB * C11708;
    const double C11730 = C11706 / C10866;
    const double C11729 = C11705 / C10857;
    const double C11728 = C11702 / C10857;
    const double C11727 = C11701 / C10857;
    const double C11726 = xAB * C11700;
    const double C11725 = C11698 / C10866;
    const double C11724 = C10857 * C11695;
    const double C11723 = C11693 + C11694;
    const double C11753 = C11735 * be;
    const double C11752 = C11735 * ae;
    const double C11751 = C11734 / C10857;
    const double C11750 = -C11733;
    const double C11749 = C11732 * be;
    const double C11748 = C11732 * ae;
    const double C11747 = C11731 / C10857;
    const double C11746 = -C11730;
    const double C11745 = C10899 + C11729;
    const double C11744 = C11723 * be;
    const double C11743 = C11422 + C11728;
    const double C11742 = C11241 + C11727;
    const double C11741 = C11726 / C10857;
    const double C11740 = -C11725;
    const double C11739 = C11723 * ae;
    const double C11768 = C11753 / C10857;
    const double C11767 = C11752 / C10857;
    const double C11766 = C11715 - C11751;
    const double C11765 = C11750 / C10867;
    const double C11764 = C11749 / C10857;
    const double C11763 = C11748 / C10857;
    const double C11762 = C11707 - C11747;
    const double C11761 = C11746 / C10867;
    const double C11760 = C11745 - C10948;
    const double C11759 = C11744 / C10857;
    const double C11758 = C11743 - C11398;
    const double C11757 = C11742 - C11217;
    const double C11756 = C11699 - C11741;
    const double C11755 = C11740 / C10867;
    const double C11754 = C11739 / C10857;
    const double C11780 = C11717 - C11768;
    const double C11779 = C11717 + C11767;
    const double C11778 = C11766 * be;
    const double C11777 = C11710 - C11764;
    const double C11776 = C11710 + C11763;
    const double C11775 = C11762 * be;
    const double C11774 = C10881 * C11760;
    const double C11773 = C11692 - C11759;
    const double C11772 = C10881 * C11758;
    const double C11771 = C10881 * C11757;
    const double C11770 = C11756 * be;
    const double C11769 = C11692 + C11754;
    const double C11789 = C11780 + C11449;
    const double C11788 = C11779 + C11449;
    const double C11787 = C11778 / C10857;
    const double C11786 = C11777 + C11268;
    const double C11785 = C11776 + C11268;
    const double C11784 = C11775 / C10857;
    const double C11783 = C11773 + C10983;
    const double C11782 = C11770 / C10857;
    const double C11781 = C11769 + C10983;
    const double C11798 = C10881 * C11788;
    const double C11797 = C10881 * C11785;
    const double C11796 = C10881 * C11781;
    const double C11795 = C10881 * C11789;
    const double C11794 = C11765 - C11787;
    const double C11793 = C10881 * C11786;
    const double C11792 = C11761 - C11784;
    const double C11791 = C10881 * C11783;
    const double C11790 = C11755 - C11782;
    const double C11801 = C11794 - C11398;
    const double C11800 = C11792 - C11217;
    const double C11799 = C11790 - C10948;
    const double C11804 = C10881 * C11801;
    const double C11803 = C10881 * C11800;
    const double C11802 = C10881 * C11799;
    const double hxx200200 =
        C10881 *
        ((((ae * -2 * C10858) / C10882 -
           (((xAB * C10883) / C10866 + 2 * C10934) * be) / C10857 -
           C10886 / C10866) /
              C10867 +
          ((xAB * C10966 + 2 * C10967) * ae) / C10857) /
             C10867 -
         ((xAB * C11781 + 2 * C11009) * be) / C10857 + C11004 / C10867 +
         ((xAB * C10983 + 2 * C10971) * ae) / C10857 + (-2 * C10937) / C11724) *
        C10904 * C10905;
    const double hxx200020 = C11802 * C11030 * C10905;
    const double hxx200002 = C11802 * C10904 * C11093;
    const double hxx200110 = C11791 * C11127 * C10905;
    const double hxx200101 = C11791 * C10904 * C11138;
    const double hxx200011 = C11802 * C11127 * C11138;
    const double hxx020200 = C11774 * C11148 * C10905;
    const double hxx020020 = -(C10905 * C11197 * C11709) / C10857;
    const double hxx020002 = -(C11093 * C11148 * C11709) / C10857;
    const double hxx020110 = (C10905 * C11318 * C11713) / C10857;
    const double hxx020101 = (C11138 * C11148 * C11713) / C10857;
    const double hxx020011 = -(C11138 * C11318 * C11709) / C10857;
    const double hxx002200 = C11774 * C10904 * C11335;
    const double hxx002020 = -(C11335 * C11030 * C11709) / C10857;
    const double hxx002002 = -(C11380 * C10904 * C11709) / C10857;
    const double hxx002110 = (C11335 * C11127 * C11713) / C10857;
    const double hxx002101 = (C11499 * C10904 * C11713) / C10857;
    const double hxx002011 = -(C11499 * C11127 * C11709) / C10857;
    const double hxx110200 = C11796 * C11510 * C10905;
    const double hxx110020 = -(C10905 * C11517 * C11737) / C10857;
    const double hxx110002 = -(C11093 * C11510 * C11737) / C10857;
    const double hxx110110 = C11720 * C11526 * C10905;
    const double hxx110101 = C11720 * C11510 * C11138;
    const double hxx110011 = -(C11138 * C11526 * C11737) / C10857;
    const double hxx101200 = C11796 * C10904 * C11537;
    const double hxx101020 = -(C11537 * C11030 * C11737) / C10857;
    const double hxx101002 = -(C11544 * C10904 * C11737) / C10857;
    const double hxx101110 = C11720 * C11127 * C11537;
    const double hxx101101 = C11720 * C10904 * C11551;
    const double hxx101011 = -(C11551 * C11127 * C11737) / C10857;
    const double hxx011200 = C11774 * C11510 * C11537;
    const double hxx011020 = -(C11537 * C11517 * C11709) / C10857;
    const double hxx011002 = -(C11544 * C11510 * C11709) / C10857;
    const double hxx011110 = (C11537 * C11526 * C11713) / C10857;
    const double hxx011101 = (C11551 * C11510 * C11713) / C10857;
    const double hxx011011 = -(C11551 * C11526 * C11709) / C10857;
    const double hxy200200 = -(C10905 * C11016 * C10918) / C10857;
    const double hxy200020 = C11079 * C11083 * C10905;
    const double hxy200002 = -(C11093 * C11079 * C10918) / C10857;
    const double hxy200110 = C11134 * C11129 * C10905;
    const double hxy200101 = -(C11138 * C11134 * C10918) / C10857;
    const double hxy200011 = C11079 * C11129 * C11138;
    const double hxy020200 = C11172 * C11180 * C10905;
    const double hxy020020 = -(C10905 * C11311 * C11209) / C10857;
    const double hxy020002 = -(C11093 * C11180 * C11209) / C10857;
    const double hxy020110 = C11319 * C11325 * C10905;
    const double hxy020101 = C11319 * C11180 * C11138;
    const double hxy020011 = -(C11138 * C11325 * C11209) / C10857;
    const double hxy002200 = -(C11335 * C11172 * C10918) / C10857;
    const double hxy002020 = -(C11335 * C11083 * C11209) / C10857;
    const double hxy002002 = (C11380 * C11209 * C10918) / C10866;
    const double hxy002110 = C11319 * C11129 * C11335;
    const double hxy002101 = -(C11499 * C11319 * C10918) / C10857;
    const double hxy002011 = -(C11499 * C11129 * C11209) / C10857;
    const double hxy110200 = C11511 * C11512 * C10905;
    const double hxy110020 = C11518 * C11519 * C10905;
    const double hxy110002 = C11518 * C11512 * C11093;
    const double hxy110110 = C11527 * C11528 * C10905;
    const double hxy110101 = C11527 * C11512 * C11138;
    const double hxy110011 = C11518 * C11528 * C11138;
    const double hxy101200 = -(C11537 * C11511 * C10918) / C10857;
    const double hxy101020 = C11518 * C11083 * C11537;
    const double hxy101002 = -(C11544 * C11518 * C10918) / C10857;
    const double hxy101110 = C11527 * C11129 * C11537;
    const double hxy101101 = -(C11551 * C11527 * C10918) / C10857;
    const double hxy101011 = C11518 * C11129 * C11551;
    const double hxy011200 = C11172 * C11512 * C11537;
    const double hxy011020 = -(C11537 * C11519 * C11209) / C10857;
    const double hxy011002 = -(C11544 * C11512 * C11209) / C10857;
    const double hxy011110 = C11319 * C11528 * C11537;
    const double hxy011101 = C11319 * C11512 * C11551;
    const double hxy011011 = -(C11551 * C11528 * C11209) / C10857;
    const double hxz200200 = -(C11016 * C10904 * C10919) / C10857;
    const double hxz200020 = -(C11079 * C11030 * C10919) / C10857;
    const double hxz200002 = C11079 * C10904 * C11122;
    const double hxz200110 = -(C11134 * C11127 * C10919) / C10857;
    const double hxz200101 = C11134 * C10904 * C11139;
    const double hxz200011 = C11079 * C11127 * C11139;
    const double hxz020200 = -(C11172 * C11148 * C10919) / C10857;
    const double hxz020020 = (C11197 * C11209 * C10919) / C10866;
    const double hxz020002 = -(C11122 * C11148 * C11209) / C10857;
    const double hxz020110 = -(C11319 * C11318 * C10919) / C10857;
    const double hxz020101 = C11319 * C11148 * C11139;
    const double hxz020011 = -(C11139 * C11318 * C11209) / C10857;
    const double hxz002200 = C11172 * C10904 * C11361;
    const double hxz002020 = -(C11361 * C11030 * C11209) / C10857;
    const double hxz002002 = -(C11492 * C10904 * C11209) / C10857;
    const double hxz002110 = C11319 * C11127 * C11361;
    const double hxz002101 = C11319 * C10904 * C11504;
    const double hxz002011 = -(C11504 * C11127 * C11209) / C10857;
    const double hxz110200 = -(C11511 * C11510 * C10919) / C10857;
    const double hxz110020 = -(C11518 * C11517 * C10919) / C10857;
    const double hxz110002 = C11518 * C11510 * C11122;
    const double hxz110110 = -(C11527 * C11526 * C10919) / C10857;
    const double hxz110101 = C11527 * C11510 * C11139;
    const double hxz110011 = C11518 * C11526 * C11139;
    const double hxz101200 = C11511 * C10904 * C11538;
    const double hxz101020 = C11518 * C11030 * C11538;
    const double hxz101002 = C11518 * C10904 * C11545;
    const double hxz101110 = C11527 * C11127 * C11538;
    const double hxz101101 = C11527 * C10904 * C11552;
    const double hxz101011 = C11518 * C11127 * C11552;
    const double hxz011200 = C11172 * C11510 * C11538;
    const double hxz011020 = -(C11538 * C11517 * C11209) / C10857;
    const double hxz011002 = -(C11545 * C11510 * C11209) / C10857;
    const double hxz011110 = C11319 * C11526 * C11538;
    const double hxz011101 = C11319 * C11510 * C11552;
    const double hxz011011 = -(C11552 * C11526 * C11209) / C10857;
    const double hyy200200 = -(C10905 * C10910 * C11696) / C10857;
    const double hyy200020 = C11040 * C11771 * C10905;
    const double hyy200002 = -(C11093 * C11040 * C11696) / C10857;
    const double hyy200110 = (C10905 * C11130 * C11703) / C10857;
    const double hyy200101 = -(C11138 * C11130 * C11696) / C10857;
    const double hyy200011 = (C11138 * C11040 * C11703) / C10857;
    const double hyy020200 = C11156 * C11803 * C10905;
    const double hyy020020 =
        C11210 * C10881 *
        ((((ae * -2 * C11198) / C10882 -
           (((yAB * C11228) / C10866 + 2 * C11270) * be) / C10857 -
           C11229 / C10866) /
              C10867 +
          ((yAB * C11280 + 2 * C11284) * ae) / C10857) /
             C10867 -
         ((yAB * C11785 + 2 * C11299) * be) / C10857 + C11296 / C10867 +
         ((yAB * C11268 + 2 * C11256) * ae) / C10857 + (-2 * C11063) / C11724) *
        C10905;
    const double hyy020002 = C11210 * C11803 * C11093;
    const double hyy020110 = C11321 * C11793 * C10905;
    const double hyy020101 = C11321 * C11803 * C11138;
    const double hyy020011 = C11210 * C11793 * C11138;
    const double hyy002200 = -(C11335 * C11156 * C11696) / C10857;
    const double hyy002020 = C11210 * C11771 * C11335;
    const double hyy002002 = -(C11380 * C11210 * C11696) / C10857;
    const double hyy002110 = (C11335 * C11321 * C11703) / C10857;
    const double hyy002101 = -(C11499 * C11321 * C11696) / C10857;
    const double hyy002011 = (C11499 * C11210 * C11703) / C10857;
    const double hyy110200 = -(C10905 * C11513 * C11736) / C10857;
    const double hyy110020 = C11520 * C11797 * C10905;
    const double hyy110002 = -(C11093 * C11520 * C11736) / C10857;
    const double hyy110110 = C11529 * C11721 * C10905;
    const double hyy110101 = -(C11138 * C11529 * C11736) / C10857;
    const double hyy110011 = C11520 * C11721 * C11138;
    const double hyy101200 = -(C11537 * C11513 * C11696) / C10857;
    const double hyy101020 = C11520 * C11771 * C11537;
    const double hyy101002 = -(C11544 * C11520 * C11696) / C10857;
    const double hyy101110 = (C11537 * C11529 * C11703) / C10857;
    const double hyy101101 = -(C11551 * C11529 * C11696) / C10857;
    const double hyy101011 = (C11551 * C11520 * C11703) / C10857;
    const double hyy011200 = -(C11537 * C11156 * C11736) / C10857;
    const double hyy011020 = C11210 * C11797 * C11537;
    const double hyy011002 = -(C11544 * C11210 * C11736) / C10857;
    const double hyy011110 = C11321 * C11721 * C11537;
    const double hyy011101 = -(C11551 * C11321 * C11736) / C10857;
    const double hyy011011 = C11210 * C11721 * C11551;
    const double hyz200200 = (C10910 * C10918 * C10919) / C10866;
    const double hyz200020 = -(C11040 * C11083 * C10919) / C10857;
    const double hyz200002 = -(C11122 * C11040 * C10918) / C10857;
    const double hyz200110 = -(C11130 * C11129 * C10919) / C10857;
    const double hyz200101 = -(C11139 * C11130 * C10918) / C10857;
    const double hyz200011 = C11040 * C11129 * C11139;
    const double hyz020200 = -(C11156 * C11180 * C10919) / C10857;
    const double hyz020020 = -(C11210 * C11311 * C10919) / C10857;
    const double hyz020002 = C11210 * C11180 * C11122;
    const double hyz020110 = -(C11321 * C11325 * C10919) / C10857;
    const double hyz020101 = C11321 * C11180 * C11139;
    const double hyz020011 = C11210 * C11325 * C11139;
    const double hyz002200 = -(C11361 * C11156 * C10918) / C10857;
    const double hyz002020 = C11210 * C11083 * C11361;
    const double hyz002002 = -(C11492 * C11210 * C10918) / C10857;
    const double hyz002110 = C11321 * C11129 * C11361;
    const double hyz002101 = -(C11504 * C11321 * C10918) / C10857;
    const double hyz002011 = C11210 * C11129 * C11504;
    const double hyz110200 = -(C11513 * C11512 * C10919) / C10857;
    const double hyz110020 = -(C11520 * C11519 * C10919) / C10857;
    const double hyz110002 = C11520 * C11512 * C11122;
    const double hyz110110 = -(C11529 * C11528 * C10919) / C10857;
    const double hyz110101 = C11529 * C11512 * C11139;
    const double hyz110011 = C11520 * C11528 * C11139;
    const double hyz101200 = -(C11538 * C11513 * C10918) / C10857;
    const double hyz101020 = C11520 * C11083 * C11538;
    const double hyz101002 = -(C11545 * C11520 * C10918) / C10857;
    const double hyz101110 = C11529 * C11129 * C11538;
    const double hyz101101 = -(C11552 * C11529 * C10918) / C10857;
    const double hyz101011 = C11520 * C11129 * C11552;
    const double hyz011200 = C11156 * C11512 * C11538;
    const double hyz011020 = C11210 * C11519 * C11538;
    const double hyz011002 = C11210 * C11512 * C11545;
    const double hyz011110 = C11321 * C11528 * C11538;
    const double hyz011101 = C11321 * C11512 * C11552;
    const double hyz011011 = C11210 * C11528 * C11552;
    const double hzz200200 = -(C10910 * C10904 * C11697) / C10857;
    const double hzz200020 = -(C11040 * C11030 * C11697) / C10857;
    const double hzz200002 = C11040 * C10904 * C11772;
    const double hzz200110 = -(C11130 * C11127 * C11697) / C10857;
    const double hzz200101 = (C11130 * C10904 * C11704) / C10857;
    const double hzz200011 = (C11040 * C11127 * C11704) / C10857;
    const double hzz020200 = -(C11156 * C11148 * C11697) / C10857;
    const double hzz020020 = -(C11210 * C11197 * C11697) / C10857;
    const double hzz020002 = C11210 * C11148 * C11772;
    const double hzz020110 = -(C11321 * C11318 * C11697) / C10857;
    const double hzz020101 = (C11321 * C11148 * C11704) / C10857;
    const double hzz020011 = (C11210 * C11318 * C11704) / C10857;
    const double hzz002200 = C11156 * C10904 * C11804;
    const double hzz002020 = C11210 * C11030 * C11804;
    const double hzz002002 =
        C11210 * C10904 * C10881 *
        ((((ae * -2 * C11381) / C10882 -
           (((zAB * C11409) / C10866 + 2 * C11451) * be) / C10857 -
           C11410 / C10866) /
              C10867 +
          ((zAB * C11461 + 2 * C11465) * ae) / C10857) /
             C10867 -
         ((zAB * C11788 + 2 * C11480) * be) / C10857 + C11477 / C10867 +
         ((zAB * C11449 + 2 * C11437) * ae) / C10857 + (-2 * C11109) / C11724);
    const double hzz002110 = C11321 * C11127 * C11804;
    const double hzz002101 = C11321 * C10904 * C11795;
    const double hzz002011 = C11210 * C11127 * C11795;
    const double hzz110200 = -(C11513 * C11510 * C11697) / C10857;
    const double hzz110020 = -(C11520 * C11517 * C11697) / C10857;
    const double hzz110002 = C11520 * C11510 * C11772;
    const double hzz110110 = -(C11529 * C11526 * C11697) / C10857;
    const double hzz110101 = (C11529 * C11510 * C11704) / C10857;
    const double hzz110011 = (C11520 * C11526 * C11704) / C10857;
    const double hzz101200 = -(C11513 * C10904 * C11738) / C10857;
    const double hzz101020 = -(C11520 * C11030 * C11738) / C10857;
    const double hzz101002 = C11520 * C10904 * C11798;
    const double hzz101110 = -(C11529 * C11127 * C11738) / C10857;
    const double hzz101101 = C11529 * C10904 * C11722;
    const double hzz101011 = C11520 * C11127 * C11722;
    const double hzz011200 = -(C11156 * C11510 * C11738) / C10857;
    const double hzz011020 = -(C11210 * C11517 * C11738) / C10857;
    const double hzz011002 = C11210 * C11510 * C11798;
    const double hzz011110 = -(C11321 * C11526 * C11738) / C10857;
    const double hzz011101 = C11321 * C11510 * C11722;
    const double hzz011011 = C11210 * C11526 * C11722;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxx110110;
        hxx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxx110011;
        hxx[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxx110002 -
                  (std::sqrt(0.75) * hxx110020 + std::sqrt(0.75) * hxx110200));
        hxx[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxx110101;
        hxx[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxx110200 - std::sqrt(2.25) * hxx110020);
        hxx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxx011110;
        hxx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxx011011;
        hxx[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxx011002 -
                  (std::sqrt(0.75) * hxx011020 + std::sqrt(0.75) * hxx011200));
        hxx[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxx011101;
        hxx[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxx011200 - std::sqrt(2.25) * hxx011020);
        hxx[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(3.0) * hxx002110 -
                  (std::sqrt(0.75) * hxx020110 + std::sqrt(0.75) * hxx200110));
        hxx[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(3.0) * hxx002011 -
                  (std::sqrt(0.75) * hxx020011 + std::sqrt(0.75) * hxx200011));
        hxx[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (0.25 * hxx200200 + 0.25 * hxx200020 - 0.5 * hxx200002 +
                  0.25 * hxx020200 + 0.25 * hxx020020 - 0.5 * hxx020002 -
                  0.5 * hxx002200 - 0.5 * hxx002020 + hxx002002);
        hxx[(Ai + 2) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(3.0) * hxx002101 -
                  (std::sqrt(0.75) * hxx020101 + std::sqrt(0.75) * hxx200101));
        hxx[(Ai + 2) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.1875) * hxx200020 - std::sqrt(0.1875) * hxx200200 -
             std::sqrt(0.1875) * hxx020200 + std::sqrt(0.1875) * hxx020020 +
             std::sqrt(0.75) * hxx002200 - std::sqrt(0.75) * hxx002020);
        hxx[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxx101110;
        hxx[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxx101011;
        hxx[(Ai + 3) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxx101002 -
                  (std::sqrt(0.75) * hxx101020 + std::sqrt(0.75) * hxx101200));
        hxx[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxx101101;
        hxx[(Ai + 3) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxx101200 - std::sqrt(2.25) * hxx101020);
        hxx[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(2.25) * hxx200110 - std::sqrt(2.25) * hxx020110);
        hxx[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(2.25) * hxx200011 - std::sqrt(2.25) * hxx020011);
        hxx[(Ai + 4) * matrix_size + Bi + 2] +=
            cc *
            (std::sqrt(0.75) * hxx200002 -
             (std::sqrt(0.1875) * hxx200020 + std::sqrt(0.1875) * hxx200200) +
             std::sqrt(0.1875) * hxx020200 + std::sqrt(0.1875) * hxx020020 -
             std::sqrt(0.75) * hxx020002);
        hxx[(Ai + 4) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(2.25) * hxx200101 - std::sqrt(2.25) * hxx020101);
        hxx[(Ai + 4) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.5625) * hxx200200 - std::sqrt(0.5625) * hxx200020 -
             std::sqrt(0.5625) * hxx020200 + std::sqrt(0.5625) * hxx020020);
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxy110110;
        hxy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxy110011;
        hxy[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxy110002 -
                  (std::sqrt(0.75) * hxy110020 + std::sqrt(0.75) * hxy110200));
        hxy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxy110101;
        hxy[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxy110200 - std::sqrt(2.25) * hxy110020);
        hxy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxy011110;
        hxy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxy011011;
        hxy[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxy011002 -
                  (std::sqrt(0.75) * hxy011020 + std::sqrt(0.75) * hxy011200));
        hxy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxy011101;
        hxy[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxy011200 - std::sqrt(2.25) * hxy011020);
        hxy[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(3.0) * hxy002110 -
                  (std::sqrt(0.75) * hxy020110 + std::sqrt(0.75) * hxy200110));
        hxy[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(3.0) * hxy002011 -
                  (std::sqrt(0.75) * hxy020011 + std::sqrt(0.75) * hxy200011));
        hxy[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (0.25 * hxy200200 + 0.25 * hxy200020 - 0.5 * hxy200002 +
                  0.25 * hxy020200 + 0.25 * hxy020020 - 0.5 * hxy020002 -
                  0.5 * hxy002200 - 0.5 * hxy002020 + hxy002002);
        hxy[(Ai + 2) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(3.0) * hxy002101 -
                  (std::sqrt(0.75) * hxy020101 + std::sqrt(0.75) * hxy200101));
        hxy[(Ai + 2) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.1875) * hxy200020 - std::sqrt(0.1875) * hxy200200 -
             std::sqrt(0.1875) * hxy020200 + std::sqrt(0.1875) * hxy020020 +
             std::sqrt(0.75) * hxy002200 - std::sqrt(0.75) * hxy002020);
        hxy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxy101110;
        hxy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxy101011;
        hxy[(Ai + 3) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxy101002 -
                  (std::sqrt(0.75) * hxy101020 + std::sqrt(0.75) * hxy101200));
        hxy[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxy101101;
        hxy[(Ai + 3) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxy101200 - std::sqrt(2.25) * hxy101020);
        hxy[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(2.25) * hxy200110 - std::sqrt(2.25) * hxy020110);
        hxy[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(2.25) * hxy200011 - std::sqrt(2.25) * hxy020011);
        hxy[(Ai + 4) * matrix_size + Bi + 2] +=
            cc *
            (std::sqrt(0.75) * hxy200002 -
             (std::sqrt(0.1875) * hxy200020 + std::sqrt(0.1875) * hxy200200) +
             std::sqrt(0.1875) * hxy020200 + std::sqrt(0.1875) * hxy020020 -
             std::sqrt(0.75) * hxy020002);
        hxy[(Ai + 4) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(2.25) * hxy200101 - std::sqrt(2.25) * hxy020101);
        hxy[(Ai + 4) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.5625) * hxy200200 - std::sqrt(0.5625) * hxy200020 -
             std::sqrt(0.5625) * hxy020200 + std::sqrt(0.5625) * hxy020020);
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxz110110;
        hxz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxz110011;
        hxz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxz110002 -
                  (std::sqrt(0.75) * hxz110020 + std::sqrt(0.75) * hxz110200));
        hxz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxz110101;
        hxz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxz110200 - std::sqrt(2.25) * hxz110020);
        hxz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxz011110;
        hxz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxz011011;
        hxz[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxz011002 -
                  (std::sqrt(0.75) * hxz011020 + std::sqrt(0.75) * hxz011200));
        hxz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxz011101;
        hxz[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxz011200 - std::sqrt(2.25) * hxz011020);
        hxz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(3.0) * hxz002110 -
                  (std::sqrt(0.75) * hxz020110 + std::sqrt(0.75) * hxz200110));
        hxz[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(3.0) * hxz002011 -
                  (std::sqrt(0.75) * hxz020011 + std::sqrt(0.75) * hxz200011));
        hxz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (0.25 * hxz200200 + 0.25 * hxz200020 - 0.5 * hxz200002 +
                  0.25 * hxz020200 + 0.25 * hxz020020 - 0.5 * hxz020002 -
                  0.5 * hxz002200 - 0.5 * hxz002020 + hxz002002);
        hxz[(Ai + 2) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(3.0) * hxz002101 -
                  (std::sqrt(0.75) * hxz020101 + std::sqrt(0.75) * hxz200101));
        hxz[(Ai + 2) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.1875) * hxz200020 - std::sqrt(0.1875) * hxz200200 -
             std::sqrt(0.1875) * hxz020200 + std::sqrt(0.1875) * hxz020020 +
             std::sqrt(0.75) * hxz002200 - std::sqrt(0.75) * hxz002020);
        hxz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxz101110;
        hxz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxz101011;
        hxz[(Ai + 3) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxz101002 -
                  (std::sqrt(0.75) * hxz101020 + std::sqrt(0.75) * hxz101200));
        hxz[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxz101101;
        hxz[(Ai + 3) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxz101200 - std::sqrt(2.25) * hxz101020);
        hxz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(2.25) * hxz200110 - std::sqrt(2.25) * hxz020110);
        hxz[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(2.25) * hxz200011 - std::sqrt(2.25) * hxz020011);
        hxz[(Ai + 4) * matrix_size + Bi + 2] +=
            cc *
            (std::sqrt(0.75) * hxz200002 -
             (std::sqrt(0.1875) * hxz200020 + std::sqrt(0.1875) * hxz200200) +
             std::sqrt(0.1875) * hxz020200 + std::sqrt(0.1875) * hxz020020 -
             std::sqrt(0.75) * hxz020002);
        hxz[(Ai + 4) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(2.25) * hxz200101 - std::sqrt(2.25) * hxz020101);
        hxz[(Ai + 4) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.5625) * hxz200200 - std::sqrt(0.5625) * hxz200020 -
             std::sqrt(0.5625) * hxz020200 + std::sqrt(0.5625) * hxz020020);
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hyy110110;
        hyy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hyy110011;
        hyy[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hyy110002 -
                  (std::sqrt(0.75) * hyy110020 + std::sqrt(0.75) * hyy110200));
        hyy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hyy110101;
        hyy[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hyy110200 - std::sqrt(2.25) * hyy110020);
        hyy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hyy011110;
        hyy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hyy011011;
        hyy[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hyy011002 -
                  (std::sqrt(0.75) * hyy011020 + std::sqrt(0.75) * hyy011200));
        hyy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hyy011101;
        hyy[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hyy011200 - std::sqrt(2.25) * hyy011020);
        hyy[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(3.0) * hyy002110 -
                  (std::sqrt(0.75) * hyy020110 + std::sqrt(0.75) * hyy200110));
        hyy[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(3.0) * hyy002011 -
                  (std::sqrt(0.75) * hyy020011 + std::sqrt(0.75) * hyy200011));
        hyy[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (0.25 * hyy200200 + 0.25 * hyy200020 - 0.5 * hyy200002 +
                  0.25 * hyy020200 + 0.25 * hyy020020 - 0.5 * hyy020002 -
                  0.5 * hyy002200 - 0.5 * hyy002020 + hyy002002);
        hyy[(Ai + 2) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(3.0) * hyy002101 -
                  (std::sqrt(0.75) * hyy020101 + std::sqrt(0.75) * hyy200101));
        hyy[(Ai + 2) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.1875) * hyy200020 - std::sqrt(0.1875) * hyy200200 -
             std::sqrt(0.1875) * hyy020200 + std::sqrt(0.1875) * hyy020020 +
             std::sqrt(0.75) * hyy002200 - std::sqrt(0.75) * hyy002020);
        hyy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hyy101110;
        hyy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hyy101011;
        hyy[(Ai + 3) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hyy101002 -
                  (std::sqrt(0.75) * hyy101020 + std::sqrt(0.75) * hyy101200));
        hyy[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hyy101101;
        hyy[(Ai + 3) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hyy101200 - std::sqrt(2.25) * hyy101020);
        hyy[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(2.25) * hyy200110 - std::sqrt(2.25) * hyy020110);
        hyy[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(2.25) * hyy200011 - std::sqrt(2.25) * hyy020011);
        hyy[(Ai + 4) * matrix_size + Bi + 2] +=
            cc *
            (std::sqrt(0.75) * hyy200002 -
             (std::sqrt(0.1875) * hyy200020 + std::sqrt(0.1875) * hyy200200) +
             std::sqrt(0.1875) * hyy020200 + std::sqrt(0.1875) * hyy020020 -
             std::sqrt(0.75) * hyy020002);
        hyy[(Ai + 4) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(2.25) * hyy200101 - std::sqrt(2.25) * hyy020101);
        hyy[(Ai + 4) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.5625) * hyy200200 - std::sqrt(0.5625) * hyy200020 -
             std::sqrt(0.5625) * hyy020200 + std::sqrt(0.5625) * hyy020020);
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hyz110110;
        hyz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hyz110011;
        hyz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hyz110002 -
                  (std::sqrt(0.75) * hyz110020 + std::sqrt(0.75) * hyz110200));
        hyz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hyz110101;
        hyz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hyz110200 - std::sqrt(2.25) * hyz110020);
        hyz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hyz011110;
        hyz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hyz011011;
        hyz[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hyz011002 -
                  (std::sqrt(0.75) * hyz011020 + std::sqrt(0.75) * hyz011200));
        hyz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hyz011101;
        hyz[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hyz011200 - std::sqrt(2.25) * hyz011020);
        hyz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(3.0) * hyz002110 -
                  (std::sqrt(0.75) * hyz020110 + std::sqrt(0.75) * hyz200110));
        hyz[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(3.0) * hyz002011 -
                  (std::sqrt(0.75) * hyz020011 + std::sqrt(0.75) * hyz200011));
        hyz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (0.25 * hyz200200 + 0.25 * hyz200020 - 0.5 * hyz200002 +
                  0.25 * hyz020200 + 0.25 * hyz020020 - 0.5 * hyz020002 -
                  0.5 * hyz002200 - 0.5 * hyz002020 + hyz002002);
        hyz[(Ai + 2) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(3.0) * hyz002101 -
                  (std::sqrt(0.75) * hyz020101 + std::sqrt(0.75) * hyz200101));
        hyz[(Ai + 2) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.1875) * hyz200020 - std::sqrt(0.1875) * hyz200200 -
             std::sqrt(0.1875) * hyz020200 + std::sqrt(0.1875) * hyz020020 +
             std::sqrt(0.75) * hyz002200 - std::sqrt(0.75) * hyz002020);
        hyz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hyz101110;
        hyz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hyz101011;
        hyz[(Ai + 3) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hyz101002 -
                  (std::sqrt(0.75) * hyz101020 + std::sqrt(0.75) * hyz101200));
        hyz[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hyz101101;
        hyz[(Ai + 3) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hyz101200 - std::sqrt(2.25) * hyz101020);
        hyz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(2.25) * hyz200110 - std::sqrt(2.25) * hyz020110);
        hyz[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(2.25) * hyz200011 - std::sqrt(2.25) * hyz020011);
        hyz[(Ai + 4) * matrix_size + Bi + 2] +=
            cc *
            (std::sqrt(0.75) * hyz200002 -
             (std::sqrt(0.1875) * hyz200020 + std::sqrt(0.1875) * hyz200200) +
             std::sqrt(0.1875) * hyz020200 + std::sqrt(0.1875) * hyz020020 -
             std::sqrt(0.75) * hyz020002);
        hyz[(Ai + 4) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(2.25) * hyz200101 - std::sqrt(2.25) * hyz020101);
        hyz[(Ai + 4) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.5625) * hyz200200 - std::sqrt(0.5625) * hyz200020 -
             std::sqrt(0.5625) * hyz020200 + std::sqrt(0.5625) * hyz020020);
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hzz110110;
        hzz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hzz110011;
        hzz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hzz110002 -
                  (std::sqrt(0.75) * hzz110020 + std::sqrt(0.75) * hzz110200));
        hzz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hzz110101;
        hzz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hzz110200 - std::sqrt(2.25) * hzz110020);
        hzz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hzz011110;
        hzz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hzz011011;
        hzz[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hzz011002 -
                  (std::sqrt(0.75) * hzz011020 + std::sqrt(0.75) * hzz011200));
        hzz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hzz011101;
        hzz[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hzz011200 - std::sqrt(2.25) * hzz011020);
        hzz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(3.0) * hzz002110 -
                  (std::sqrt(0.75) * hzz020110 + std::sqrt(0.75) * hzz200110));
        hzz[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(3.0) * hzz002011 -
                  (std::sqrt(0.75) * hzz020011 + std::sqrt(0.75) * hzz200011));
        hzz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (0.25 * hzz200200 + 0.25 * hzz200020 - 0.5 * hzz200002 +
                  0.25 * hzz020200 + 0.25 * hzz020020 - 0.5 * hzz020002 -
                  0.5 * hzz002200 - 0.5 * hzz002020 + hzz002002);
        hzz[(Ai + 2) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(3.0) * hzz002101 -
                  (std::sqrt(0.75) * hzz020101 + std::sqrt(0.75) * hzz200101));
        hzz[(Ai + 2) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.1875) * hzz200020 - std::sqrt(0.1875) * hzz200200 -
             std::sqrt(0.1875) * hzz020200 + std::sqrt(0.1875) * hzz020020 +
             std::sqrt(0.75) * hzz002200 - std::sqrt(0.75) * hzz002020);
        hzz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hzz101110;
        hzz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hzz101011;
        hzz[(Ai + 3) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hzz101002 -
                  (std::sqrt(0.75) * hzz101020 + std::sqrt(0.75) * hzz101200));
        hzz[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hzz101101;
        hzz[(Ai + 3) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hzz101200 - std::sqrt(2.25) * hzz101020);
        hzz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(2.25) * hzz200110 - std::sqrt(2.25) * hzz020110);
        hzz[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(2.25) * hzz200011 - std::sqrt(2.25) * hzz020011);
        hzz[(Ai + 4) * matrix_size + Bi + 2] +=
            cc *
            (std::sqrt(0.75) * hzz200002 -
             (std::sqrt(0.1875) * hzz200020 + std::sqrt(0.1875) * hzz200200) +
             std::sqrt(0.1875) * hzz020200 + std::sqrt(0.1875) * hzz020020 -
             std::sqrt(0.75) * hzz020002);
        hzz[(Ai + 4) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(2.25) * hzz200101 - std::sqrt(2.25) * hzz020101);
        hzz[(Ai + 4) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.5625) * hzz200200 - std::sqrt(0.5625) * hzz200020 -
             std::sqrt(0.5625) * hzz020200 + std::sqrt(0.5625) * hzz020020);
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxx110110;
        hxx[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxx110011;
        hxx[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxx110002 -
                  (std::sqrt(0.75) * hxx110020 + std::sqrt(0.75) * hxx110200));
        hxx[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxx110101;
        hxx[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxx110200 - std::sqrt(2.25) * hxx110020);
        hxx[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxx011110;
        hxx[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxx011011;
        hxx[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxx011002 -
                  (std::sqrt(0.75) * hxx011020 + std::sqrt(0.75) * hxx011200));
        hxx[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxx011101;
        hxx[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxx011200 - std::sqrt(2.25) * hxx011020);
        hxx[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(3.0) * hxx002110 -
                  (std::sqrt(0.75) * hxx020110 + std::sqrt(0.75) * hxx200110));
        hxx[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(3.0) * hxx002011 -
                  (std::sqrt(0.75) * hxx020011 + std::sqrt(0.75) * hxx200011));
        hxx[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (0.25 * hxx200200 + 0.25 * hxx200020 - 0.5 * hxx200002 +
                  0.25 * hxx020200 + 0.25 * hxx020020 - 0.5 * hxx020002 -
                  0.5 * hxx002200 - 0.5 * hxx002020 + hxx002002);
        hxx[(Ai + 2) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(3.0) * hxx002101 -
                  (std::sqrt(0.75) * hxx020101 + std::sqrt(0.75) * hxx200101));
        hxx[(Ai + 2) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.1875) * hxx200020 - std::sqrt(0.1875) * hxx200200 -
             std::sqrt(0.1875) * hxx020200 + std::sqrt(0.1875) * hxx020020 +
             std::sqrt(0.75) * hxx002200 - std::sqrt(0.75) * hxx002020);
        hxx[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxx101110;
        hxx[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxx101011;
        hxx[(Ai + 3) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxx101002 -
                  (std::sqrt(0.75) * hxx101020 + std::sqrt(0.75) * hxx101200));
        hxx[(Ai + 3) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxx101101;
        hxx[(Ai + 3) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxx101200 - std::sqrt(2.25) * hxx101020);
        hxx[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(2.25) * hxx200110 - std::sqrt(2.25) * hxx020110);
        hxx[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(2.25) * hxx200011 - std::sqrt(2.25) * hxx020011);
        hxx[(Ai + 4) * matrix_size + Bi + 2] -=
            cc *
            (std::sqrt(0.75) * hxx200002 -
             (std::sqrt(0.1875) * hxx200020 + std::sqrt(0.1875) * hxx200200) +
             std::sqrt(0.1875) * hxx020200 + std::sqrt(0.1875) * hxx020020 -
             std::sqrt(0.75) * hxx020002);
        hxx[(Ai + 4) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(2.25) * hxx200101 - std::sqrt(2.25) * hxx020101);
        hxx[(Ai + 4) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.5625) * hxx200200 - std::sqrt(0.5625) * hxx200020 -
             std::sqrt(0.5625) * hxx020200 + std::sqrt(0.5625) * hxx020020);
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxy110110;
        hxy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxy110011;
        hxy[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxy110002 -
                  (std::sqrt(0.75) * hxy110020 + std::sqrt(0.75) * hxy110200));
        hxy[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxy110101;
        hxy[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxy110200 - std::sqrt(2.25) * hxy110020);
        hxy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxy011110;
        hxy[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxy011011;
        hxy[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxy011002 -
                  (std::sqrt(0.75) * hxy011020 + std::sqrt(0.75) * hxy011200));
        hxy[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxy011101;
        hxy[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxy011200 - std::sqrt(2.25) * hxy011020);
        hxy[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(3.0) * hxy002110 -
                  (std::sqrt(0.75) * hxy020110 + std::sqrt(0.75) * hxy200110));
        hxy[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(3.0) * hxy002011 -
                  (std::sqrt(0.75) * hxy020011 + std::sqrt(0.75) * hxy200011));
        hxy[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (0.25 * hxy200200 + 0.25 * hxy200020 - 0.5 * hxy200002 +
                  0.25 * hxy020200 + 0.25 * hxy020020 - 0.5 * hxy020002 -
                  0.5 * hxy002200 - 0.5 * hxy002020 + hxy002002);
        hxy[(Ai + 2) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(3.0) * hxy002101 -
                  (std::sqrt(0.75) * hxy020101 + std::sqrt(0.75) * hxy200101));
        hxy[(Ai + 2) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.1875) * hxy200020 - std::sqrt(0.1875) * hxy200200 -
             std::sqrt(0.1875) * hxy020200 + std::sqrt(0.1875) * hxy020020 +
             std::sqrt(0.75) * hxy002200 - std::sqrt(0.75) * hxy002020);
        hxy[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxy101110;
        hxy[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxy101011;
        hxy[(Ai + 3) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxy101002 -
                  (std::sqrt(0.75) * hxy101020 + std::sqrt(0.75) * hxy101200));
        hxy[(Ai + 3) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxy101101;
        hxy[(Ai + 3) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxy101200 - std::sqrt(2.25) * hxy101020);
        hxy[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(2.25) * hxy200110 - std::sqrt(2.25) * hxy020110);
        hxy[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(2.25) * hxy200011 - std::sqrt(2.25) * hxy020011);
        hxy[(Ai + 4) * matrix_size + Bi + 2] -=
            cc *
            (std::sqrt(0.75) * hxy200002 -
             (std::sqrt(0.1875) * hxy200020 + std::sqrt(0.1875) * hxy200200) +
             std::sqrt(0.1875) * hxy020200 + std::sqrt(0.1875) * hxy020020 -
             std::sqrt(0.75) * hxy020002);
        hxy[(Ai + 4) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(2.25) * hxy200101 - std::sqrt(2.25) * hxy020101);
        hxy[(Ai + 4) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.5625) * hxy200200 - std::sqrt(0.5625) * hxy200020 -
             std::sqrt(0.5625) * hxy020200 + std::sqrt(0.5625) * hxy020020);
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxz110110;
        hxz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxz110011;
        hxz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxz110002 -
                  (std::sqrt(0.75) * hxz110020 + std::sqrt(0.75) * hxz110200));
        hxz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxz110101;
        hxz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxz110200 - std::sqrt(2.25) * hxz110020);
        hxz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxz011110;
        hxz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxz011011;
        hxz[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxz011002 -
                  (std::sqrt(0.75) * hxz011020 + std::sqrt(0.75) * hxz011200));
        hxz[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxz011101;
        hxz[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxz011200 - std::sqrt(2.25) * hxz011020);
        hxz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(3.0) * hxz002110 -
                  (std::sqrt(0.75) * hxz020110 + std::sqrt(0.75) * hxz200110));
        hxz[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(3.0) * hxz002011 -
                  (std::sqrt(0.75) * hxz020011 + std::sqrt(0.75) * hxz200011));
        hxz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (0.25 * hxz200200 + 0.25 * hxz200020 - 0.5 * hxz200002 +
                  0.25 * hxz020200 + 0.25 * hxz020020 - 0.5 * hxz020002 -
                  0.5 * hxz002200 - 0.5 * hxz002020 + hxz002002);
        hxz[(Ai + 2) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(3.0) * hxz002101 -
                  (std::sqrt(0.75) * hxz020101 + std::sqrt(0.75) * hxz200101));
        hxz[(Ai + 2) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.1875) * hxz200020 - std::sqrt(0.1875) * hxz200200 -
             std::sqrt(0.1875) * hxz020200 + std::sqrt(0.1875) * hxz020020 +
             std::sqrt(0.75) * hxz002200 - std::sqrt(0.75) * hxz002020);
        hxz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxz101110;
        hxz[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxz101011;
        hxz[(Ai + 3) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxz101002 -
                  (std::sqrt(0.75) * hxz101020 + std::sqrt(0.75) * hxz101200));
        hxz[(Ai + 3) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxz101101;
        hxz[(Ai + 3) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxz101200 - std::sqrt(2.25) * hxz101020);
        hxz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(2.25) * hxz200110 - std::sqrt(2.25) * hxz020110);
        hxz[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(2.25) * hxz200011 - std::sqrt(2.25) * hxz020011);
        hxz[(Ai + 4) * matrix_size + Bi + 2] -=
            cc *
            (std::sqrt(0.75) * hxz200002 -
             (std::sqrt(0.1875) * hxz200020 + std::sqrt(0.1875) * hxz200200) +
             std::sqrt(0.1875) * hxz020200 + std::sqrt(0.1875) * hxz020020 -
             std::sqrt(0.75) * hxz020002);
        hxz[(Ai + 4) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(2.25) * hxz200101 - std::sqrt(2.25) * hxz020101);
        hxz[(Ai + 4) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.5625) * hxz200200 - std::sqrt(0.5625) * hxz200020 -
             std::sqrt(0.5625) * hxz020200 + std::sqrt(0.5625) * hxz020020);
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hyy110110;
        hyy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hyy110011;
        hyy[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hyy110002 -
                  (std::sqrt(0.75) * hyy110020 + std::sqrt(0.75) * hyy110200));
        hyy[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hyy110101;
        hyy[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hyy110200 - std::sqrt(2.25) * hyy110020);
        hyy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hyy011110;
        hyy[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hyy011011;
        hyy[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hyy011002 -
                  (std::sqrt(0.75) * hyy011020 + std::sqrt(0.75) * hyy011200));
        hyy[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hyy011101;
        hyy[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hyy011200 - std::sqrt(2.25) * hyy011020);
        hyy[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(3.0) * hyy002110 -
                  (std::sqrt(0.75) * hyy020110 + std::sqrt(0.75) * hyy200110));
        hyy[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(3.0) * hyy002011 -
                  (std::sqrt(0.75) * hyy020011 + std::sqrt(0.75) * hyy200011));
        hyy[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (0.25 * hyy200200 + 0.25 * hyy200020 - 0.5 * hyy200002 +
                  0.25 * hyy020200 + 0.25 * hyy020020 - 0.5 * hyy020002 -
                  0.5 * hyy002200 - 0.5 * hyy002020 + hyy002002);
        hyy[(Ai + 2) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(3.0) * hyy002101 -
                  (std::sqrt(0.75) * hyy020101 + std::sqrt(0.75) * hyy200101));
        hyy[(Ai + 2) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.1875) * hyy200020 - std::sqrt(0.1875) * hyy200200 -
             std::sqrt(0.1875) * hyy020200 + std::sqrt(0.1875) * hyy020020 +
             std::sqrt(0.75) * hyy002200 - std::sqrt(0.75) * hyy002020);
        hyy[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hyy101110;
        hyy[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hyy101011;
        hyy[(Ai + 3) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hyy101002 -
                  (std::sqrt(0.75) * hyy101020 + std::sqrt(0.75) * hyy101200));
        hyy[(Ai + 3) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hyy101101;
        hyy[(Ai + 3) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hyy101200 - std::sqrt(2.25) * hyy101020);
        hyy[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(2.25) * hyy200110 - std::sqrt(2.25) * hyy020110);
        hyy[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(2.25) * hyy200011 - std::sqrt(2.25) * hyy020011);
        hyy[(Ai + 4) * matrix_size + Bi + 2] -=
            cc *
            (std::sqrt(0.75) * hyy200002 -
             (std::sqrt(0.1875) * hyy200020 + std::sqrt(0.1875) * hyy200200) +
             std::sqrt(0.1875) * hyy020200 + std::sqrt(0.1875) * hyy020020 -
             std::sqrt(0.75) * hyy020002);
        hyy[(Ai + 4) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(2.25) * hyy200101 - std::sqrt(2.25) * hyy020101);
        hyy[(Ai + 4) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.5625) * hyy200200 - std::sqrt(0.5625) * hyy200020 -
             std::sqrt(0.5625) * hyy020200 + std::sqrt(0.5625) * hyy020020);
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hyz110110;
        hyz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hyz110011;
        hyz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hyz110002 -
                  (std::sqrt(0.75) * hyz110020 + std::sqrt(0.75) * hyz110200));
        hyz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hyz110101;
        hyz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hyz110200 - std::sqrt(2.25) * hyz110020);
        hyz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hyz011110;
        hyz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hyz011011;
        hyz[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hyz011002 -
                  (std::sqrt(0.75) * hyz011020 + std::sqrt(0.75) * hyz011200));
        hyz[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hyz011101;
        hyz[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hyz011200 - std::sqrt(2.25) * hyz011020);
        hyz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(3.0) * hyz002110 -
                  (std::sqrt(0.75) * hyz020110 + std::sqrt(0.75) * hyz200110));
        hyz[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(3.0) * hyz002011 -
                  (std::sqrt(0.75) * hyz020011 + std::sqrt(0.75) * hyz200011));
        hyz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (0.25 * hyz200200 + 0.25 * hyz200020 - 0.5 * hyz200002 +
                  0.25 * hyz020200 + 0.25 * hyz020020 - 0.5 * hyz020002 -
                  0.5 * hyz002200 - 0.5 * hyz002020 + hyz002002);
        hyz[(Ai + 2) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(3.0) * hyz002101 -
                  (std::sqrt(0.75) * hyz020101 + std::sqrt(0.75) * hyz200101));
        hyz[(Ai + 2) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.1875) * hyz200020 - std::sqrt(0.1875) * hyz200200 -
             std::sqrt(0.1875) * hyz020200 + std::sqrt(0.1875) * hyz020020 +
             std::sqrt(0.75) * hyz002200 - std::sqrt(0.75) * hyz002020);
        hyz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hyz101110;
        hyz[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hyz101011;
        hyz[(Ai + 3) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hyz101002 -
                  (std::sqrt(0.75) * hyz101020 + std::sqrt(0.75) * hyz101200));
        hyz[(Ai + 3) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hyz101101;
        hyz[(Ai + 3) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hyz101200 - std::sqrt(2.25) * hyz101020);
        hyz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(2.25) * hyz200110 - std::sqrt(2.25) * hyz020110);
        hyz[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(2.25) * hyz200011 - std::sqrt(2.25) * hyz020011);
        hyz[(Ai + 4) * matrix_size + Bi + 2] -=
            cc *
            (std::sqrt(0.75) * hyz200002 -
             (std::sqrt(0.1875) * hyz200020 + std::sqrt(0.1875) * hyz200200) +
             std::sqrt(0.1875) * hyz020200 + std::sqrt(0.1875) * hyz020020 -
             std::sqrt(0.75) * hyz020002);
        hyz[(Ai + 4) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(2.25) * hyz200101 - std::sqrt(2.25) * hyz020101);
        hyz[(Ai + 4) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.5625) * hyz200200 - std::sqrt(0.5625) * hyz200020 -
             std::sqrt(0.5625) * hyz020200 + std::sqrt(0.5625) * hyz020020);
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hzz110110;
        hzz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hzz110011;
        hzz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hzz110002 -
                  (std::sqrt(0.75) * hzz110020 + std::sqrt(0.75) * hzz110200));
        hzz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hzz110101;
        hzz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hzz110200 - std::sqrt(2.25) * hzz110020);
        hzz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hzz011110;
        hzz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hzz011011;
        hzz[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hzz011002 -
                  (std::sqrt(0.75) * hzz011020 + std::sqrt(0.75) * hzz011200));
        hzz[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hzz011101;
        hzz[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hzz011200 - std::sqrt(2.25) * hzz011020);
        hzz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(3.0) * hzz002110 -
                  (std::sqrt(0.75) * hzz020110 + std::sqrt(0.75) * hzz200110));
        hzz[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(3.0) * hzz002011 -
                  (std::sqrt(0.75) * hzz020011 + std::sqrt(0.75) * hzz200011));
        hzz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (0.25 * hzz200200 + 0.25 * hzz200020 - 0.5 * hzz200002 +
                  0.25 * hzz020200 + 0.25 * hzz020020 - 0.5 * hzz020002 -
                  0.5 * hzz002200 - 0.5 * hzz002020 + hzz002002);
        hzz[(Ai + 2) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(3.0) * hzz002101 -
                  (std::sqrt(0.75) * hzz020101 + std::sqrt(0.75) * hzz200101));
        hzz[(Ai + 2) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.1875) * hzz200020 - std::sqrt(0.1875) * hzz200200 -
             std::sqrt(0.1875) * hzz020200 + std::sqrt(0.1875) * hzz020020 +
             std::sqrt(0.75) * hzz002200 - std::sqrt(0.75) * hzz002020);
        hzz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hzz101110;
        hzz[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hzz101011;
        hzz[(Ai + 3) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hzz101002 -
                  (std::sqrt(0.75) * hzz101020 + std::sqrt(0.75) * hzz101200));
        hzz[(Ai + 3) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hzz101101;
        hzz[(Ai + 3) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hzz101200 - std::sqrt(2.25) * hzz101020);
        hzz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(2.25) * hzz200110 - std::sqrt(2.25) * hzz020110);
        hzz[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(2.25) * hzz200011 - std::sqrt(2.25) * hzz020011);
        hzz[(Ai + 4) * matrix_size + Bi + 2] -=
            cc *
            (std::sqrt(0.75) * hzz200002 -
             (std::sqrt(0.1875) * hzz200020 + std::sqrt(0.1875) * hzz200200) +
             std::sqrt(0.1875) * hzz020200 + std::sqrt(0.1875) * hzz020020 -
             std::sqrt(0.75) * hzz020002);
        hzz[(Ai + 4) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(2.25) * hzz200101 - std::sqrt(2.25) * hzz020101);
        hzz[(Ai + 4) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.5625) * hzz200200 - std::sqrt(0.5625) * hzz200020 -
             std::sqrt(0.5625) * hzz020200 + std::sqrt(0.5625) * hzz020020);
    }
}
