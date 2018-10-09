/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef D2_OVERLAP_HPP
#define	D2_OVERLAP_HPP

#include <cstdlib>

void overlap_second_derivative_00(double, double, double, double, double, double, double* const, double* const, 
                        double* const, double* const, double* const, double* const,
				    bool, std::size_t,std::size_t, std::size_t);

void overlap_second_derivative_01(double, double, double, double, double, double, double* const, double* const, 
                        double* const, double* const, double* const, double* const,
				    bool, std::size_t,std::size_t, std::size_t);

void overlap_second_derivative_02(double, double, double, double, double, double, double* const, double* const, 
                        double* const, double* const, double* const, double* const,
				    bool, std::size_t,std::size_t, std::size_t);

void overlap_second_derivative_10(double, double, double, double, double, double, double* const, double* const, 
                        double* const, double* const, double* const, double* const,
				    bool, std::size_t,std::size_t, std::size_t);

void overlap_second_derivative_11(double, double, double, double, double, double, double* const, double* const, 
                        double* const, double* const, double* const, double* const,
				    bool, std::size_t,std::size_t, std::size_t);

void overlap_second_derivative_12(double, double, double, double, double, double, double* const, double* const, 
                        double* const, double* const, double* const, double* const,
				    bool, std::size_t,std::size_t, std::size_t);

void overlap_second_derivative_20(double, double, double, double, double, double, double* const, double* const, 
                        double* const, double* const, double* const, double* const,
				    bool, std::size_t,std::size_t, std::size_t);

void overlap_second_derivative_21(double, double, double, double, double, double, double* const, double* const, 
                        double* const, double* const, double* const, double* const,
				    bool, std::size_t,std::size_t, std::size_t);

void overlap_second_derivative_22(double, double, double, double, double, double, double* const, double* const, 
                        double* const, double* const, double* const, double* const,
				    bool, std::size_t,std::size_t, std::size_t);

#endif
