/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef D2_OVERLAP_MATRIX_HPP
#define D2_OVERLAP_MATRIX_HPP

#include "gto_d2_kit/d2_overlap.hpp"
    
typedef void (*D2S)(double, double, double, double, double, double, double* const, double* const, 
                    double* const, double* const, double* const, double* const,
                   bool, std::size_t,std::size_t, std::size_t);
 D2S ad2s[3][3] = {
    { overlap_second_derivative_00,  overlap_second_derivative_01, overlap_second_derivative_02   },
	{ overlap_second_derivative_10,  overlap_second_derivative_11, overlap_second_derivative_12   },
    { overlap_second_derivative_20,  overlap_second_derivative_21, overlap_second_derivative_22   }
};

#endif
