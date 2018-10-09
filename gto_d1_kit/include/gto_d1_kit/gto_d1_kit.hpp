/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef GTO_D1_KIT_HPP
#define GTO_D1_KIT_HPP

#include <cstdlib>

void gto_overlap_gradient(
    const unsigned Al, const unsigned Bl,
    double ae, double be, double cc,
    double xAB, double yAB, double zAB,
    double* const gx,
    double* const gy,
    double* const gz,
    std::size_t matrix_size, 
    std::size_t Ai, std::size_t Bi);

void gto_kinetic_gradient(
    const unsigned Al, const unsigned Bl,
    double ae, double be, double cc,
    double xAB, double yAB, double zAB,
    double* const gx,
    double* const gy,
    double* const gz,
    std::size_t matrix_size, 
    std::size_t Ai, std::size_t Bi);

void gto_two_electrons_gradient(
    const std::size_t atom,
    const unsigned Al,
    const unsigned Bl,
    const unsigned Cl,
    const unsigned Dl,
    const double ae,
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
    double* const gx,
    double* const gy,
    double* const gz);

void gto_vne_gradient(
    const std::size_t atom,
    const unsigned Al, const unsigned Bl,
    double ae, double be,
    double xA, double yA, double zA,
    double xB, double yB, double zB,
    double xC, double yC, double zC,
    const double* bs,
    double* const gx,
    double* const gy,
    double* const gz,
    std::size_t matrix_size,
    std::size_t Ai, std::size_t Bi);

#endif
