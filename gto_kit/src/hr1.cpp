/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/hr.hpp"

namespace niedoida {
    namespace gto {
        void hr_01(const double X_AB,
                   const double Y_AB,
                   const double Z_AB,
                   const unsigned k_begin,
                   const unsigned k_end,
                   double* const b,
                   const unsigned s_12,
                   const unsigned s)
        {
            for (unsigned k = k_begin; k < k_end; ++k) {
                *(b + k * s_12 + 0 * s + 1) =
                    *(b + k * s_12 + 1 * s + 0) +
                    X_AB * *(b + k * s_12 + 0 * s + 0);
                *(b + k * s_12 + 0 * s + 2) =
                    *(b + k * s_12 + 2 * s + 0) +
                    Y_AB * *(b + k * s_12 + 0 * s + 0);
                *(b + k * s_12 + 0 * s + 3) =
                    *(b + k * s_12 + 3 * s + 0) +
                    Z_AB * *(b + k * s_12 + 0 * s + 0);
            }
        }

        void hr_11(const double X_AB,
                   const double Y_AB,
                   const double Z_AB,
                   const unsigned k_begin,
                   const unsigned k_end,
                   double* const b,
                   const unsigned s_12,
                   const unsigned s)
        {
            for (unsigned k = k_begin; k < k_end; ++k) {
                *(b + k * s_12 + 1 * s + 1) =
                    *(b + k * s_12 + 4 * s + 0) +
                    X_AB * *(b + k * s_12 + 1 * s + 0);
                *(b + k * s_12 + 1 * s + 2) =
                    *(b + k * s_12 + 5 * s + 0) +
                    Y_AB * *(b + k * s_12 + 1 * s + 0);
                *(b + k * s_12 + 1 * s + 3) =
                    *(b + k * s_12 + 6 * s + 0) +
                    Z_AB * *(b + k * s_12 + 1 * s + 0);
                *(b + k * s_12 + 2 * s + 1) =
                    *(b + k * s_12 + 5 * s + 0) +
                    X_AB * *(b + k * s_12 + 2 * s + 0);
                *(b + k * s_12 + 2 * s + 2) =
                    *(b + k * s_12 + 7 * s + 0) +
                    Y_AB * *(b + k * s_12 + 2 * s + 0);
                *(b + k * s_12 + 2 * s + 3) =
                    *(b + k * s_12 + 8 * s + 0) +
                    Z_AB * *(b + k * s_12 + 2 * s + 0);
                *(b + k * s_12 + 3 * s + 1) =
                    *(b + k * s_12 + 6 * s + 0) +
                    X_AB * *(b + k * s_12 + 3 * s + 0);
                *(b + k * s_12 + 3 * s + 2) =
                    *(b + k * s_12 + 8 * s + 0) +
                    Y_AB * *(b + k * s_12 + 3 * s + 0);
                *(b + k * s_12 + 3 * s + 3) =
                    *(b + k * s_12 + 9 * s + 0) +
                    Z_AB * *(b + k * s_12 + 3 * s + 0);
            }
        }

        void hr_21(const double X_AB,
                   const double Y_AB,
                   const double Z_AB,
                   const unsigned k_begin,
                   const unsigned k_end,
                   double* const b,
                   const unsigned s_12,
                   const unsigned s)
        {
            for (unsigned k = k_begin; k < k_end; ++k) {
                *(b + k * s_12 + 4 * s + 1) =
                    *(b + k * s_12 + 10 * s + 0) +
                    X_AB * *(b + k * s_12 + 4 * s + 0);
                *(b + k * s_12 + 4 * s + 2) =
                    *(b + k * s_12 + 11 * s + 0) +
                    Y_AB * *(b + k * s_12 + 4 * s + 0);
                *(b + k * s_12 + 4 * s + 3) =
                    *(b + k * s_12 + 12 * s + 0) +
                    Z_AB * *(b + k * s_12 + 4 * s + 0);
                *(b + k * s_12 + 5 * s + 1) =
                    *(b + k * s_12 + 11 * s + 0) +
                    X_AB * *(b + k * s_12 + 5 * s + 0);
                *(b + k * s_12 + 5 * s + 2) =
                    *(b + k * s_12 + 13 * s + 0) +
                    Y_AB * *(b + k * s_12 + 5 * s + 0);
                *(b + k * s_12 + 5 * s + 3) =
                    *(b + k * s_12 + 14 * s + 0) +
                    Z_AB * *(b + k * s_12 + 5 * s + 0);
                *(b + k * s_12 + 6 * s + 1) =
                    *(b + k * s_12 + 12 * s + 0) +
                    X_AB * *(b + k * s_12 + 6 * s + 0);
                *(b + k * s_12 + 6 * s + 2) =
                    *(b + k * s_12 + 14 * s + 0) +
                    Y_AB * *(b + k * s_12 + 6 * s + 0);
                *(b + k * s_12 + 6 * s + 3) =
                    *(b + k * s_12 + 15 * s + 0) +
                    Z_AB * *(b + k * s_12 + 6 * s + 0);
                *(b + k * s_12 + 7 * s + 1) =
                    *(b + k * s_12 + 13 * s + 0) +
                    X_AB * *(b + k * s_12 + 7 * s + 0);
                *(b + k * s_12 + 7 * s + 2) =
                    *(b + k * s_12 + 16 * s + 0) +
                    Y_AB * *(b + k * s_12 + 7 * s + 0);
                *(b + k * s_12 + 7 * s + 3) =
                    *(b + k * s_12 + 17 * s + 0) +
                    Z_AB * *(b + k * s_12 + 7 * s + 0);
                *(b + k * s_12 + 8 * s + 1) =
                    *(b + k * s_12 + 14 * s + 0) +
                    X_AB * *(b + k * s_12 + 8 * s + 0);
                *(b + k * s_12 + 8 * s + 2) =
                    *(b + k * s_12 + 17 * s + 0) +
                    Y_AB * *(b + k * s_12 + 8 * s + 0);
                *(b + k * s_12 + 8 * s + 3) =
                    *(b + k * s_12 + 18 * s + 0) +
                    Z_AB * *(b + k * s_12 + 8 * s + 0);
                *(b + k * s_12 + 9 * s + 1) =
                    *(b + k * s_12 + 15 * s + 0) +
                    X_AB * *(b + k * s_12 + 9 * s + 0);
                *(b + k * s_12 + 9 * s + 2) =
                    *(b + k * s_12 + 18 * s + 0) +
                    Y_AB * *(b + k * s_12 + 9 * s + 0);
                *(b + k * s_12 + 9 * s + 3) =
                    *(b + k * s_12 + 19 * s + 0) +
                    Z_AB * *(b + k * s_12 + 9 * s + 0);
            }
        }

        void hr_31(const double X_AB,
                   const double Y_AB,
                   const double Z_AB,
                   const unsigned k_begin,
                   const unsigned k_end,
                   double* const b,
                   const unsigned s_12,
                   const unsigned s)
        {
            for (unsigned k = k_begin; k < k_end; ++k) {
                *(b + k * s_12 + 10 * s + 1) =
                    *(b + k * s_12 + 20 * s + 0) +
                    X_AB * *(b + k * s_12 + 10 * s + 0);
                *(b + k * s_12 + 10 * s + 2) =
                    *(b + k * s_12 + 21 * s + 0) +
                    Y_AB * *(b + k * s_12 + 10 * s + 0);
                *(b + k * s_12 + 10 * s + 3) =
                    *(b + k * s_12 + 22 * s + 0) +
                    Z_AB * *(b + k * s_12 + 10 * s + 0);
                *(b + k * s_12 + 11 * s + 1) =
                    *(b + k * s_12 + 21 * s + 0) +
                    X_AB * *(b + k * s_12 + 11 * s + 0);
                *(b + k * s_12 + 11 * s + 2) =
                    *(b + k * s_12 + 23 * s + 0) +
                    Y_AB * *(b + k * s_12 + 11 * s + 0);
                *(b + k * s_12 + 11 * s + 3) =
                    *(b + k * s_12 + 24 * s + 0) +
                    Z_AB * *(b + k * s_12 + 11 * s + 0);
                *(b + k * s_12 + 12 * s + 1) =
                    *(b + k * s_12 + 22 * s + 0) +
                    X_AB * *(b + k * s_12 + 12 * s + 0);
                *(b + k * s_12 + 12 * s + 2) =
                    *(b + k * s_12 + 24 * s + 0) +
                    Y_AB * *(b + k * s_12 + 12 * s + 0);
                *(b + k * s_12 + 12 * s + 3) =
                    *(b + k * s_12 + 25 * s + 0) +
                    Z_AB * *(b + k * s_12 + 12 * s + 0);
                *(b + k * s_12 + 13 * s + 1) =
                    *(b + k * s_12 + 23 * s + 0) +
                    X_AB * *(b + k * s_12 + 13 * s + 0);
                *(b + k * s_12 + 13 * s + 2) =
                    *(b + k * s_12 + 26 * s + 0) +
                    Y_AB * *(b + k * s_12 + 13 * s + 0);
                *(b + k * s_12 + 13 * s + 3) =
                    *(b + k * s_12 + 27 * s + 0) +
                    Z_AB * *(b + k * s_12 + 13 * s + 0);
                *(b + k * s_12 + 14 * s + 1) =
                    *(b + k * s_12 + 24 * s + 0) +
                    X_AB * *(b + k * s_12 + 14 * s + 0);
                *(b + k * s_12 + 14 * s + 2) =
                    *(b + k * s_12 + 27 * s + 0) +
                    Y_AB * *(b + k * s_12 + 14 * s + 0);
                *(b + k * s_12 + 14 * s + 3) =
                    *(b + k * s_12 + 28 * s + 0) +
                    Z_AB * *(b + k * s_12 + 14 * s + 0);
                *(b + k * s_12 + 15 * s + 1) =
                    *(b + k * s_12 + 25 * s + 0) +
                    X_AB * *(b + k * s_12 + 15 * s + 0);
                *(b + k * s_12 + 15 * s + 2) =
                    *(b + k * s_12 + 28 * s + 0) +
                    Y_AB * *(b + k * s_12 + 15 * s + 0);
                *(b + k * s_12 + 15 * s + 3) =
                    *(b + k * s_12 + 29 * s + 0) +
                    Z_AB * *(b + k * s_12 + 15 * s + 0);
                *(b + k * s_12 + 16 * s + 1) =
                    *(b + k * s_12 + 26 * s + 0) +
                    X_AB * *(b + k * s_12 + 16 * s + 0);
                *(b + k * s_12 + 16 * s + 2) =
                    *(b + k * s_12 + 30 * s + 0) +
                    Y_AB * *(b + k * s_12 + 16 * s + 0);
                *(b + k * s_12 + 16 * s + 3) =
                    *(b + k * s_12 + 31 * s + 0) +
                    Z_AB * *(b + k * s_12 + 16 * s + 0);
                *(b + k * s_12 + 17 * s + 1) =
                    *(b + k * s_12 + 27 * s + 0) +
                    X_AB * *(b + k * s_12 + 17 * s + 0);
                *(b + k * s_12 + 17 * s + 2) =
                    *(b + k * s_12 + 31 * s + 0) +
                    Y_AB * *(b + k * s_12 + 17 * s + 0);
                *(b + k * s_12 + 17 * s + 3) =
                    *(b + k * s_12 + 32 * s + 0) +
                    Z_AB * *(b + k * s_12 + 17 * s + 0);
                *(b + k * s_12 + 18 * s + 1) =
                    *(b + k * s_12 + 28 * s + 0) +
                    X_AB * *(b + k * s_12 + 18 * s + 0);
                *(b + k * s_12 + 18 * s + 2) =
                    *(b + k * s_12 + 32 * s + 0) +
                    Y_AB * *(b + k * s_12 + 18 * s + 0);
                *(b + k * s_12 + 18 * s + 3) =
                    *(b + k * s_12 + 33 * s + 0) +
                    Z_AB * *(b + k * s_12 + 18 * s + 0);
                *(b + k * s_12 + 19 * s + 1) =
                    *(b + k * s_12 + 29 * s + 0) +
                    X_AB * *(b + k * s_12 + 19 * s + 0);
                *(b + k * s_12 + 19 * s + 2) =
                    *(b + k * s_12 + 33 * s + 0) +
                    Y_AB * *(b + k * s_12 + 19 * s + 0);
                *(b + k * s_12 + 19 * s + 3) =
                    *(b + k * s_12 + 34 * s + 0) +
                    Z_AB * *(b + k * s_12 + 19 * s + 0);
            }
        }

        void hr_41(const double X_AB,
                   const double Y_AB,
                   const double Z_AB,
                   const unsigned k_begin,
                   const unsigned k_end,
                   double* const b,
                   const unsigned s_12,
                   const unsigned s)
        {
            for (unsigned k = k_begin; k < k_end; ++k) {
                *(b + k * s_12 + 20 * s + 1) =
                    *(b + k * s_12 + 35 * s + 0) +
                    X_AB * *(b + k * s_12 + 20 * s + 0);
                *(b + k * s_12 + 20 * s + 2) =
                    *(b + k * s_12 + 36 * s + 0) +
                    Y_AB * *(b + k * s_12 + 20 * s + 0);
                *(b + k * s_12 + 20 * s + 3) =
                    *(b + k * s_12 + 37 * s + 0) +
                    Z_AB * *(b + k * s_12 + 20 * s + 0);
                *(b + k * s_12 + 21 * s + 1) =
                    *(b + k * s_12 + 36 * s + 0) +
                    X_AB * *(b + k * s_12 + 21 * s + 0);
                *(b + k * s_12 + 21 * s + 2) =
                    *(b + k * s_12 + 38 * s + 0) +
                    Y_AB * *(b + k * s_12 + 21 * s + 0);
                *(b + k * s_12 + 21 * s + 3) =
                    *(b + k * s_12 + 39 * s + 0) +
                    Z_AB * *(b + k * s_12 + 21 * s + 0);
                *(b + k * s_12 + 22 * s + 1) =
                    *(b + k * s_12 + 37 * s + 0) +
                    X_AB * *(b + k * s_12 + 22 * s + 0);
                *(b + k * s_12 + 22 * s + 2) =
                    *(b + k * s_12 + 39 * s + 0) +
                    Y_AB * *(b + k * s_12 + 22 * s + 0);
                *(b + k * s_12 + 22 * s + 3) =
                    *(b + k * s_12 + 40 * s + 0) +
                    Z_AB * *(b + k * s_12 + 22 * s + 0);
                *(b + k * s_12 + 23 * s + 1) =
                    *(b + k * s_12 + 38 * s + 0) +
                    X_AB * *(b + k * s_12 + 23 * s + 0);
                *(b + k * s_12 + 23 * s + 2) =
                    *(b + k * s_12 + 41 * s + 0) +
                    Y_AB * *(b + k * s_12 + 23 * s + 0);
                *(b + k * s_12 + 23 * s + 3) =
                    *(b + k * s_12 + 42 * s + 0) +
                    Z_AB * *(b + k * s_12 + 23 * s + 0);
                *(b + k * s_12 + 24 * s + 1) =
                    *(b + k * s_12 + 39 * s + 0) +
                    X_AB * *(b + k * s_12 + 24 * s + 0);
                *(b + k * s_12 + 24 * s + 2) =
                    *(b + k * s_12 + 42 * s + 0) +
                    Y_AB * *(b + k * s_12 + 24 * s + 0);
                *(b + k * s_12 + 24 * s + 3) =
                    *(b + k * s_12 + 43 * s + 0) +
                    Z_AB * *(b + k * s_12 + 24 * s + 0);
                *(b + k * s_12 + 25 * s + 1) =
                    *(b + k * s_12 + 40 * s + 0) +
                    X_AB * *(b + k * s_12 + 25 * s + 0);
                *(b + k * s_12 + 25 * s + 2) =
                    *(b + k * s_12 + 43 * s + 0) +
                    Y_AB * *(b + k * s_12 + 25 * s + 0);
                *(b + k * s_12 + 25 * s + 3) =
                    *(b + k * s_12 + 44 * s + 0) +
                    Z_AB * *(b + k * s_12 + 25 * s + 0);
                *(b + k * s_12 + 26 * s + 1) =
                    *(b + k * s_12 + 41 * s + 0) +
                    X_AB * *(b + k * s_12 + 26 * s + 0);
                *(b + k * s_12 + 26 * s + 2) =
                    *(b + k * s_12 + 45 * s + 0) +
                    Y_AB * *(b + k * s_12 + 26 * s + 0);
                *(b + k * s_12 + 26 * s + 3) =
                    *(b + k * s_12 + 46 * s + 0) +
                    Z_AB * *(b + k * s_12 + 26 * s + 0);
                *(b + k * s_12 + 27 * s + 1) =
                    *(b + k * s_12 + 42 * s + 0) +
                    X_AB * *(b + k * s_12 + 27 * s + 0);
                *(b + k * s_12 + 27 * s + 2) =
                    *(b + k * s_12 + 46 * s + 0) +
                    Y_AB * *(b + k * s_12 + 27 * s + 0);
                *(b + k * s_12 + 27 * s + 3) =
                    *(b + k * s_12 + 47 * s + 0) +
                    Z_AB * *(b + k * s_12 + 27 * s + 0);
                *(b + k * s_12 + 28 * s + 1) =
                    *(b + k * s_12 + 43 * s + 0) +
                    X_AB * *(b + k * s_12 + 28 * s + 0);
                *(b + k * s_12 + 28 * s + 2) =
                    *(b + k * s_12 + 47 * s + 0) +
                    Y_AB * *(b + k * s_12 + 28 * s + 0);
                *(b + k * s_12 + 28 * s + 3) =
                    *(b + k * s_12 + 48 * s + 0) +
                    Z_AB * *(b + k * s_12 + 28 * s + 0);
                *(b + k * s_12 + 29 * s + 1) =
                    *(b + k * s_12 + 44 * s + 0) +
                    X_AB * *(b + k * s_12 + 29 * s + 0);
                *(b + k * s_12 + 29 * s + 2) =
                    *(b + k * s_12 + 48 * s + 0) +
                    Y_AB * *(b + k * s_12 + 29 * s + 0);
                *(b + k * s_12 + 29 * s + 3) =
                    *(b + k * s_12 + 49 * s + 0) +
                    Z_AB * *(b + k * s_12 + 29 * s + 0);
                *(b + k * s_12 + 30 * s + 1) =
                    *(b + k * s_12 + 45 * s + 0) +
                    X_AB * *(b + k * s_12 + 30 * s + 0);
                *(b + k * s_12 + 30 * s + 2) =
                    *(b + k * s_12 + 50 * s + 0) +
                    Y_AB * *(b + k * s_12 + 30 * s + 0);
                *(b + k * s_12 + 30 * s + 3) =
                    *(b + k * s_12 + 51 * s + 0) +
                    Z_AB * *(b + k * s_12 + 30 * s + 0);
                *(b + k * s_12 + 31 * s + 1) =
                    *(b + k * s_12 + 46 * s + 0) +
                    X_AB * *(b + k * s_12 + 31 * s + 0);
                *(b + k * s_12 + 31 * s + 2) =
                    *(b + k * s_12 + 51 * s + 0) +
                    Y_AB * *(b + k * s_12 + 31 * s + 0);
                *(b + k * s_12 + 31 * s + 3) =
                    *(b + k * s_12 + 52 * s + 0) +
                    Z_AB * *(b + k * s_12 + 31 * s + 0);
                *(b + k * s_12 + 32 * s + 1) =
                    *(b + k * s_12 + 47 * s + 0) +
                    X_AB * *(b + k * s_12 + 32 * s + 0);
                *(b + k * s_12 + 32 * s + 2) =
                    *(b + k * s_12 + 52 * s + 0) +
                    Y_AB * *(b + k * s_12 + 32 * s + 0);
                *(b + k * s_12 + 32 * s + 3) =
                    *(b + k * s_12 + 53 * s + 0) +
                    Z_AB * *(b + k * s_12 + 32 * s + 0);
                *(b + k * s_12 + 33 * s + 1) =
                    *(b + k * s_12 + 48 * s + 0) +
                    X_AB * *(b + k * s_12 + 33 * s + 0);
                *(b + k * s_12 + 33 * s + 2) =
                    *(b + k * s_12 + 53 * s + 0) +
                    Y_AB * *(b + k * s_12 + 33 * s + 0);
                *(b + k * s_12 + 33 * s + 3) =
                    *(b + k * s_12 + 54 * s + 0) +
                    Z_AB * *(b + k * s_12 + 33 * s + 0);
                *(b + k * s_12 + 34 * s + 1) =
                    *(b + k * s_12 + 49 * s + 0) +
                    X_AB * *(b + k * s_12 + 34 * s + 0);
                *(b + k * s_12 + 34 * s + 2) =
                    *(b + k * s_12 + 54 * s + 0) +
                    Y_AB * *(b + k * s_12 + 34 * s + 0);
                *(b + k * s_12 + 34 * s + 3) =
                    *(b + k * s_12 + 55 * s + 0) +
                    Z_AB * *(b + k * s_12 + 34 * s + 0);
            }
        }
        
        void hr_51(const double X_AB,
                   const double Y_AB,
                   const double Z_AB,
                   const unsigned k_begin,
                   const unsigned k_end,
                   double* const b,
                   const unsigned s_12,
                   const unsigned s)
        {
            return;
        }
    }
}
