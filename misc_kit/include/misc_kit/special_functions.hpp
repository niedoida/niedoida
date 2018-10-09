/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_MISC_KIT_SPECIAL_FUNCTIONS_HPP
#define NIEDOIDA_MISC_KIT_SPECIAL_FUNCTIONS_HPP

#include <cassert>
#include <cmath>
#include <memory>

#include <boost/math/constants/constants.hpp>
#include <boost/multi_array.hpp>

namespace niedoida {
    namespace misc {
        /**
         * @defgroup special_functions Special functions
         *
         * @brief Commonly used special functions.
         * 
         * @ingroup misc
         * @{
         */

        /**
         * @brief Boys function, reference implementation.
         * 
         */
        double boys(int n, double x);

        /**
         * @brief Boys function, optimized implementation
         * 
         */
        class FastBoys {
        public:
            FastBoys(unsigned maxn = 16, double step = 0.01, double limit = 50); //up to g quartets

            double operator ()(const unsigned n, const double x) const;
            void generalized_boys(const unsigned n, const double x, 
                                  const double prefactor, double* A) const; 

        private:
            double _limit;
            double _inverse_step;
            std::unique_ptr<boost::multi_array<double, 3> > _b;
            std::unique_ptr<boost::multi_array<double, 2> > _c;
            double* _b_data;
            unsigned _b_size_23;
            unsigned _b_size_3;
            double* _c_data;
            unsigned _c_size_2;
        };

        inline
        double FastBoys::operator ()(const unsigned n, const double x) const 
        {
            assert(_b.get());
            
            using boost::math::double_constants::pi;

            double f;
            if (x <= _limit) {
                assert(n < _b->shape()[0]);	
                const double* current = _b_data + n * _b_size_23 + static_cast<unsigned>(x * _inverse_step) * _b_size_3;
                f = *current + x * (*(current + 1) + x * 
                                    (*(current + 2) + x * 
                                     (*(current + 3) + x *
                                      *(current + 4)))); 
            } else {
                f = 0.5 * std::sqrt(pi / x);
                const double one_over_two_x = 1 / (2 * x);
                const double exp_x = std::exp(-x);
                for (unsigned m = 0; m < n; ++m)
                    f = ((2 * m + 1) * f - exp_x) * one_over_two_x;
            }
            return f;
        }

        /* optimized implementation of generalized Boys function returning 
           prefactor * F_k(x), where k = 0,...,n using  memory pointed by A
        */
        inline
        void FastBoys::generalized_boys(const unsigned n, const double x, 
                                        const double prefactor, double* NIEDOIDA_RESTRICT A) const 
        {
            assert(_b.get());

            using boost::math::double_constants::pi;
            
            if (x <= _limit) {
                assert(n < _b->shape()[0]);
                const unsigned number = static_cast<unsigned>(x * _inverse_step);
                const double* NIEDOIDA_RESTRICT current = _b_data + n * _b_size_23 + number * _b_size_3;
                const double c0 = *current;
                const double c1 = *(current + 1);
                const double c2 = *(current + 2);
                const double c3 = *(current + 3);
                const double c4 = *(current + 4);
                const double x2 = x * x;
                const double x3 = x2 * x;
                const double x4 = x2 * x2;
                *(A + n) = prefactor * (c0 + x * c1 + x2 * c2 + x3 * c3 + x4 * c4);
                if(n != 0) {
                    const double* NIEDOIDA_RESTRICT current_exp = _c_data + number * _c_size_2;
                    const double d0 = *current_exp;
                    const double d1 = *(current_exp + 1);
                    const double d2 = *(current_exp + 2);
                    const double d3 = *(current_exp + 3);
                    const double d4 = *(current_exp + 4);
                    const double d5 = *(current_exp + 5);
                    const double x5 = x4 * x;
                    const double prf_exp_x = prefactor * (d0 - x * d1 + x2 * d2 - x3 * d3 + x4 * d4 - x5 * d5);
                    const double _2x = x + x;
                    switch(n) {
                    case 16:
                        *(A + 15) = (_2x * *(A + 16) + prf_exp_x) * (1.0 / 31.0);
                    case 15:
                        *(A + 14) = (_2x * *(A + 15) + prf_exp_x) * (1.0 / 29.0);
                    case 14:
                        *(A + 13) = (_2x * *(A + 14) + prf_exp_x) * (1.0 / 27.0);
                    case 13:
                        *(A + 12) = (_2x * *(A + 13) + prf_exp_x) * (1.0 / 25.0);
                    case 12:
                        *(A + 11) = (_2x * *(A + 12) + prf_exp_x) * (1.0 / 23.0);
                    case 11:
                        *(A + 10) = (_2x * *(A + 11) + prf_exp_x) * (1.0 / 21.0);
                    case 10:
                        *(A + 9) = (_2x * *(A + 10) + prf_exp_x) * (1.0 / 19.0);
                    case 9:
                        *(A + 8) = (_2x * *(A + 9) + prf_exp_x) * (1.0 / 17.0);
                    case 8:
                        *(A + 7) = (_2x * *(A + 8) + prf_exp_x) * (1.0 / 15.0);
                    case 7:
                        *(A + 6) = (_2x * *(A + 7) + prf_exp_x) * (1.0 / 13.0);
                    case 6:
                        *(A + 5) = (_2x * *(A + 6) + prf_exp_x) * (1.0 / 11.0);
                    case 5:
                        *(A + 4) = (_2x * *(A + 5) + prf_exp_x) * (1.0 / 9.0);
                    case 4:
                        *(A + 3) = (_2x * *(A + 4) + prf_exp_x) * (1.0 / 7.0);
                    case 3:
                        *(A + 2) = (_2x * *(A + 3) + prf_exp_x) * (1.0 / 5.0);
                    case 2:
                        *(A + 1) = (_2x * *(A + 2) + prf_exp_x) * (1.0 / 3.0);
                    case 1:
                        *A = _2x * *(A + 1) + prf_exp_x;
                    }
                }
            } else {
                *A = 0.5 * prefactor * std::sqrt(pi / x);
                const double _inv_2x = 1 / (2 * x);
                for (unsigned m = 0; m < n; ++m)
                    *(A + m + 1) = *(A + m) * (2 * m + 1) * _inv_2x; 
            }
            return;
        } 

        extern FastBoys fast_boys;

        /**
         * @brief Lambert W function.
         *
         * Returns W(-1, x) for negative arguments, W(x) for positive ones.
         *
         * Implementation for positive arguments is sketchy, and works only
         * for certain ranges.
         *
         * @todo Find an approximation for x in (0.4; 3.0)
         * 
         * @test check_lambert_W()
         *
         */
        double lambert_W(double x);

        /**
         * @}
         */
    }
}

#endif
