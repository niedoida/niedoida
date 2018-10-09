/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef D2_KINETIC_MATRIX_HPP
#define D2_KINETIC_MATRIX_HPP

#include "gto_d2_kit/d2_kinetic.hpp"

typedef void (*D2K)(double, double, double, double, double, double, double* const , double* const, 
                   double* const,double* const, double* const, double* const,
                   bool,std::size_t, std::size_t, std::size_t);

 D2K ad2k[3][3] = {
    { kinetic_second_derivative_00,  kinetic_second_derivative_01,  kinetic_second_derivative_02  },
	{ kinetic_second_derivative_10,  kinetic_second_derivative_11,  kinetic_second_derivative_12  },
    { kinetic_second_derivative_20,  kinetic_second_derivative_21,  kinetic_second_derivative_22  }
};
#endif