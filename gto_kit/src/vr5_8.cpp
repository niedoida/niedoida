/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/vr.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void vr5_8(const double alpha_over_p,
                   const double one_over_two_p,
                   const unsigned m,
                   const double X_PA,
                   const double Y_PA,
                   const double Z_PA,
                   const double alpha_X,
                   const double alpha_Y,
                   const double alpha_Z,
                   double* NIEDOIDA_RESTRICT b)
        {
            *(b + 1 * OS1_S1 + 4) =
                X_PA * *(b + 0 * OS1_S1 + 4) + alpha_X * *(b + 0 * OS1_S1 + 5);
            *(b + 2 * OS1_S1 + 4) =
                Y_PA * *(b + 0 * OS1_S1 + 4) + alpha_Y * *(b + 0 * OS1_S1 + 5);
            *(b + 3 * OS1_S1 + 4) =
                Z_PA * *(b + 0 * OS1_S1 + 4) + alpha_Z * *(b + 0 * OS1_S1 + 5);
            *(b + 4 * OS1_S1 + 3) =
                X_PA * *(b + 1 * OS1_S1 + 3) + alpha_X * *(b + 1 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 0 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 0 * OS1_S1 + 4));
            *(b + 7 * OS1_S1 + 3) =
                Y_PA * *(b + 2 * OS1_S1 + 3) + alpha_Y * *(b + 2 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 0 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 0 * OS1_S1 + 4));
            *(b + 9 * OS1_S1 + 3) =
                Z_PA * *(b + 3 * OS1_S1 + 3) + alpha_Z * *(b + 3 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 0 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 0 * OS1_S1 + 4));
            *(b + 10 * OS1_S1 + 2) = X_PA * *(b + 4 * OS1_S1 + 2) +
                                     alpha_X * *(b + 4 * OS1_S1 + 3) +
                                     2 * one_over_two_p *
                                         (*(b + 1 * OS1_S1 + 2) -
                                          alpha_over_p * *(b + 1 * OS1_S1 + 3));
            *(b + 11 * OS1_S1 + 2) =
                Y_PA * *(b + 4 * OS1_S1 + 2) + alpha_Y * *(b + 4 * OS1_S1 + 3);
            *(b + 12 * OS1_S1 + 2) =
                Z_PA * *(b + 4 * OS1_S1 + 2) + alpha_Z * *(b + 4 * OS1_S1 + 3);
            *(b + 16 * OS1_S1 + 2) = Y_PA * *(b + 7 * OS1_S1 + 2) +
                                     alpha_Y * *(b + 7 * OS1_S1 + 3) +
                                     2 * one_over_two_p *
                                         (*(b + 2 * OS1_S1 + 2) -
                                          alpha_over_p * *(b + 2 * OS1_S1 + 3));
            *(b + 17 * OS1_S1 + 2) =
                Z_PA * *(b + 7 * OS1_S1 + 2) + alpha_Z * *(b + 7 * OS1_S1 + 3);
            *(b + 19 * OS1_S1 + 2) = Z_PA * *(b + 9 * OS1_S1 + 2) +
                                     alpha_Z * *(b + 9 * OS1_S1 + 3) +
                                     2 * one_over_two_p *
                                         (*(b + 3 * OS1_S1 + 2) -
                                          alpha_over_p * *(b + 3 * OS1_S1 + 3));
            *(b + 20 * OS1_S1 + 1) = X_PA * *(b + 10 * OS1_S1 + 1) +
                                     alpha_X * *(b + 10 * OS1_S1 + 2) +
                                     3 * one_over_two_p *
                                         (*(b + 4 * OS1_S1 + 1) -
                                          alpha_over_p * *(b + 4 * OS1_S1 + 2));
            *(b + 21 * OS1_S1 + 1) = Y_PA * *(b + 10 * OS1_S1 + 1) +
                                     alpha_Y * *(b + 10 * OS1_S1 + 2);
            *(b + 22 * OS1_S1 + 1) = Z_PA * *(b + 10 * OS1_S1 + 1) +
                                     alpha_Z * *(b + 10 * OS1_S1 + 2);
            *(b + 23 * OS1_S1 + 1) =
                Y_PA * *(b + 11 * OS1_S1 + 1) +
                alpha_Y * *(b + 11 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 4 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 4 * OS1_S1 + 2));
            *(b + 25 * OS1_S1 + 1) =
                Z_PA * *(b + 12 * OS1_S1 + 1) +
                alpha_Z * *(b + 12 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 4 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 4 * OS1_S1 + 2));
            *(b + 26 * OS1_S1 + 1) = X_PA * *(b + 16 * OS1_S1 + 1) +
                                     alpha_X * *(b + 16 * OS1_S1 + 2);
            *(b + 29 * OS1_S1 + 1) = X_PA * *(b + 19 * OS1_S1 + 1) +
                                     alpha_X * *(b + 19 * OS1_S1 + 2);
            *(b + 30 * OS1_S1 + 1) = Y_PA * *(b + 16 * OS1_S1 + 1) +
                                     alpha_Y * *(b + 16 * OS1_S1 + 2) +
                                     3 * one_over_two_p *
                                         (*(b + 7 * OS1_S1 + 1) -
                                          alpha_over_p * *(b + 7 * OS1_S1 + 2));
            *(b + 31 * OS1_S1 + 1) = Z_PA * *(b + 16 * OS1_S1 + 1) +
                                     alpha_Z * *(b + 16 * OS1_S1 + 2);
            *(b + 32 * OS1_S1 + 1) =
                Z_PA * *(b + 17 * OS1_S1 + 1) +
                alpha_Z * *(b + 17 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 7 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 7 * OS1_S1 + 2));
            *(b + 33 * OS1_S1 + 1) = Y_PA * *(b + 19 * OS1_S1 + 1) +
                                     alpha_Y * *(b + 19 * OS1_S1 + 2);
            *(b + 34 * OS1_S1 + 1) = Z_PA * *(b + 19 * OS1_S1 + 1) +
                                     alpha_Z * *(b + 19 * OS1_S1 + 2) +
                                     3 * one_over_two_p *
                                         (*(b + 9 * OS1_S1 + 1) -
                                          alpha_over_p * *(b + 9 * OS1_S1 + 2));
            *(b + 35 * OS1_S1 + 0) =
                X_PA * *(b + 20 * OS1_S1 + 0) +
                alpha_X * *(b + 20 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 10 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 10 * OS1_S1 + 1));
            *(b + 36 * OS1_S1 + 0) = Y_PA * *(b + 20 * OS1_S1 + 0) +
                                     alpha_Y * *(b + 20 * OS1_S1 + 1);
            *(b + 37 * OS1_S1 + 0) = Z_PA * *(b + 20 * OS1_S1 + 0) +
                                     alpha_Z * *(b + 20 * OS1_S1 + 1);
            *(b + 38 * OS1_S1 + 0) =
                Y_PA * *(b + 21 * OS1_S1 + 0) +
                alpha_Y * *(b + 21 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 10 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 10 * OS1_S1 + 1));
            *(b + 39 * OS1_S1 + 0) = Z_PA * *(b + 21 * OS1_S1 + 0) +
                                     alpha_Z * *(b + 21 * OS1_S1 + 1);
            *(b + 40 * OS1_S1 + 0) =
                Z_PA * *(b + 22 * OS1_S1 + 0) +
                alpha_Z * *(b + 22 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 10 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 10 * OS1_S1 + 1));
            *(b + 41 * OS1_S1 + 0) =
                X_PA * *(b + 26 * OS1_S1 + 0) +
                alpha_X * *(b + 26 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 16 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 16 * OS1_S1 + 1));
            *(b + 42 * OS1_S1 + 0) = Z_PA * *(b + 23 * OS1_S1 + 0) +
                                     alpha_Z * *(b + 23 * OS1_S1 + 1);
            *(b + 43 * OS1_S1 + 0) = Y_PA * *(b + 25 * OS1_S1 + 0) +
                                     alpha_Y * *(b + 25 * OS1_S1 + 1);
            *(b + 44 * OS1_S1 + 0) =
                X_PA * *(b + 29 * OS1_S1 + 0) +
                alpha_X * *(b + 29 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 19 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 19 * OS1_S1 + 1));
            *(b + 45 * OS1_S1 + 0) = X_PA * *(b + 30 * OS1_S1 + 0) +
                                     alpha_X * *(b + 30 * OS1_S1 + 1);
            *(b + 46 * OS1_S1 + 0) = Z_PA * *(b + 26 * OS1_S1 + 0) +
                                     alpha_Z * *(b + 26 * OS1_S1 + 1);
            *(b + 47 * OS1_S1 + 0) = X_PA * *(b + 32 * OS1_S1 + 0) +
                                     alpha_X * *(b + 32 * OS1_S1 + 1);
            *(b + 48 * OS1_S1 + 0) = Y_PA * *(b + 29 * OS1_S1 + 0) +
                                     alpha_Y * *(b + 29 * OS1_S1 + 1);
            *(b + 49 * OS1_S1 + 0) = X_PA * *(b + 34 * OS1_S1 + 0) +
                                     alpha_X * *(b + 34 * OS1_S1 + 1);
            *(b + 50 * OS1_S1 + 0) =
                Y_PA * *(b + 30 * OS1_S1 + 0) +
                alpha_Y * *(b + 30 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 16 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 16 * OS1_S1 + 1));
            *(b + 51 * OS1_S1 + 0) = Z_PA * *(b + 30 * OS1_S1 + 0) +
                                     alpha_Z * *(b + 30 * OS1_S1 + 1);
            *(b + 52 * OS1_S1 + 0) =
                Z_PA * *(b + 31 * OS1_S1 + 0) +
                alpha_Z * *(b + 31 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 16 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 16 * OS1_S1 + 1));
            *(b + 53 * OS1_S1 + 0) =
                Y_PA * *(b + 33 * OS1_S1 + 0) +
                alpha_Y * *(b + 33 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 19 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 19 * OS1_S1 + 1));
            *(b + 54 * OS1_S1 + 0) = Y_PA * *(b + 34 * OS1_S1 + 0) +
                                     alpha_Y * *(b + 34 * OS1_S1 + 1);
            *(b + 55 * OS1_S1 + 0) =
                Z_PA * *(b + 34 * OS1_S1 + 0) +
                alpha_Z * *(b + 34 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 19 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 19 * OS1_S1 + 1));
            if (m > 5) {
                *(b + 1 * OS1_S1 + 5) = X_PA * *(b + 0 * OS1_S1 + 5) +
                                        alpha_X * *(b + 0 * OS1_S1 + 6);
                *(b + 2 * OS1_S1 + 5) = Y_PA * *(b + 0 * OS1_S1 + 5) +
                                        alpha_Y * *(b + 0 * OS1_S1 + 6);
                *(b + 3 * OS1_S1 + 5) = Z_PA * *(b + 0 * OS1_S1 + 5) +
                                        alpha_Z * *(b + 0 * OS1_S1 + 6);
                *(b + 4 * OS1_S1 + 4) =
                    X_PA * *(b + 1 * OS1_S1 + 4) +
                    alpha_X * *(b + 1 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 5));
                *(b + 7 * OS1_S1 + 4) =
                    Y_PA * *(b + 2 * OS1_S1 + 4) +
                    alpha_Y * *(b + 2 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 5));
                *(b + 9 * OS1_S1 + 4) =
                    Z_PA * *(b + 3 * OS1_S1 + 4) +
                    alpha_Z * *(b + 3 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 5));
                *(b + 10 * OS1_S1 + 3) =
                    X_PA * *(b + 4 * OS1_S1 + 3) +
                    alpha_X * *(b + 4 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 1 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 1 * OS1_S1 + 4));
                *(b + 11 * OS1_S1 + 3) = Y_PA * *(b + 4 * OS1_S1 + 3) +
                                         alpha_Y * *(b + 4 * OS1_S1 + 4);
                *(b + 16 * OS1_S1 + 3) =
                    Y_PA * *(b + 7 * OS1_S1 + 3) +
                    alpha_Y * *(b + 7 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 2 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 2 * OS1_S1 + 4));
                *(b + 19 * OS1_S1 + 3) =
                    Z_PA * *(b + 9 * OS1_S1 + 3) +
                    alpha_Z * *(b + 9 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 3 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 3 * OS1_S1 + 4));
                *(b + 20 * OS1_S1 + 2) =
                    X_PA * *(b + 10 * OS1_S1 + 2) +
                    alpha_X * *(b + 10 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 4 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 4 * OS1_S1 + 3));
                *(b + 21 * OS1_S1 + 2) = Y_PA * *(b + 10 * OS1_S1 + 2) +
                                         alpha_Y * *(b + 10 * OS1_S1 + 3);
                *(b + 22 * OS1_S1 + 2) = Z_PA * *(b + 10 * OS1_S1 + 2) +
                                         alpha_Z * *(b + 10 * OS1_S1 + 3);
                *(b + 23 * OS1_S1 + 2) =
                    Y_PA * *(b + 11 * OS1_S1 + 2) +
                    alpha_Y * *(b + 11 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 4 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 4 * OS1_S1 + 3));
                *(b + 26 * OS1_S1 + 2) = X_PA * *(b + 16 * OS1_S1 + 2) +
                                         alpha_X * *(b + 16 * OS1_S1 + 3);
                *(b + 29 * OS1_S1 + 2) = X_PA * *(b + 19 * OS1_S1 + 2) +
                                         alpha_X * *(b + 19 * OS1_S1 + 3);
                *(b + 30 * OS1_S1 + 2) =
                    Y_PA * *(b + 16 * OS1_S1 + 2) +
                    alpha_Y * *(b + 16 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 7 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 7 * OS1_S1 + 3));
                *(b + 31 * OS1_S1 + 2) = Z_PA * *(b + 16 * OS1_S1 + 2) +
                                         alpha_Z * *(b + 16 * OS1_S1 + 3);
                *(b + 33 * OS1_S1 + 2) = Y_PA * *(b + 19 * OS1_S1 + 2) +
                                         alpha_Y * *(b + 19 * OS1_S1 + 3);
                *(b + 34 * OS1_S1 + 2) =
                    Z_PA * *(b + 19 * OS1_S1 + 2) +
                    alpha_Z * *(b + 19 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 9 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 9 * OS1_S1 + 3));
                *(b + 35 * OS1_S1 + 1) =
                    X_PA * *(b + 20 * OS1_S1 + 1) +
                    alpha_X * *(b + 20 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 10 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 10 * OS1_S1 + 2));
                *(b + 36 * OS1_S1 + 1) = Y_PA * *(b + 20 * OS1_S1 + 1) +
                                         alpha_Y * *(b + 20 * OS1_S1 + 2);
                *(b + 37 * OS1_S1 + 1) = Z_PA * *(b + 20 * OS1_S1 + 1) +
                                         alpha_Z * *(b + 20 * OS1_S1 + 2);
                *(b + 38 * OS1_S1 + 1) =
                    Y_PA * *(b + 21 * OS1_S1 + 1) +
                    alpha_Y * *(b + 21 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 10 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 10 * OS1_S1 + 2));
                *(b + 40 * OS1_S1 + 1) =
                    Z_PA * *(b + 22 * OS1_S1 + 1) +
                    alpha_Z * *(b + 22 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 10 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 10 * OS1_S1 + 2));
                *(b + 41 * OS1_S1 + 1) =
                    X_PA * *(b + 26 * OS1_S1 + 1) +
                    alpha_X * *(b + 26 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 16 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 16 * OS1_S1 + 2));
                *(b + 42 * OS1_S1 + 1) = Z_PA * *(b + 23 * OS1_S1 + 1) +
                                         alpha_Z * *(b + 23 * OS1_S1 + 2);
                *(b + 44 * OS1_S1 + 1) =
                    X_PA * *(b + 29 * OS1_S1 + 1) +
                    alpha_X * *(b + 29 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 19 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 19 * OS1_S1 + 2));
                *(b + 45 * OS1_S1 + 1) = X_PA * *(b + 30 * OS1_S1 + 1) +
                                         alpha_X * *(b + 30 * OS1_S1 + 2);
                *(b + 49 * OS1_S1 + 1) = X_PA * *(b + 34 * OS1_S1 + 1) +
                                         alpha_X * *(b + 34 * OS1_S1 + 2);
                *(b + 50 * OS1_S1 + 1) =
                    Y_PA * *(b + 30 * OS1_S1 + 1) +
                    alpha_Y * *(b + 30 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 16 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 16 * OS1_S1 + 2));
                *(b + 51 * OS1_S1 + 1) = Z_PA * *(b + 30 * OS1_S1 + 1) +
                                         alpha_Z * *(b + 30 * OS1_S1 + 2);
                *(b + 52 * OS1_S1 + 1) =
                    Z_PA * *(b + 31 * OS1_S1 + 1) +
                    alpha_Z * *(b + 31 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 16 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 16 * OS1_S1 + 2));
                *(b + 53 * OS1_S1 + 1) =
                    Y_PA * *(b + 33 * OS1_S1 + 1) +
                    alpha_Y * *(b + 33 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 19 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 19 * OS1_S1 + 2));
                *(b + 54 * OS1_S1 + 1) = Y_PA * *(b + 34 * OS1_S1 + 1) +
                                         alpha_Y * *(b + 34 * OS1_S1 + 2);
                *(b + 55 * OS1_S1 + 1) =
                    Z_PA * *(b + 34 * OS1_S1 + 1) +
                    alpha_Z * *(b + 34 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 19 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 19 * OS1_S1 + 2));
                *(b + 56 * OS1_S1 + 0) =
                    X_PA * *(b + 35 * OS1_S1 + 0) +
                    alpha_X * *(b + 35 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 20 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 20 * OS1_S1 + 1));
                *(b + 57 * OS1_S1 + 0) = Y_PA * *(b + 35 * OS1_S1 + 0) +
                                         alpha_Y * *(b + 35 * OS1_S1 + 1);
                *(b + 58 * OS1_S1 + 0) = Z_PA * *(b + 35 * OS1_S1 + 0) +
                                         alpha_Z * *(b + 35 * OS1_S1 + 1);
                *(b + 59 * OS1_S1 + 0) =
                    Y_PA * *(b + 36 * OS1_S1 + 0) +
                    alpha_Y * *(b + 36 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 20 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 20 * OS1_S1 + 1));
                *(b + 60 * OS1_S1 + 0) = Z_PA * *(b + 36 * OS1_S1 + 0) +
                                         alpha_Z * *(b + 36 * OS1_S1 + 1);
                *(b + 61 * OS1_S1 + 0) =
                    Z_PA * *(b + 37 * OS1_S1 + 0) +
                    alpha_Z * *(b + 37 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 20 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 20 * OS1_S1 + 1));
                *(b + 62 * OS1_S1 + 0) =
                    Y_PA * *(b + 38 * OS1_S1 + 0) +
                    alpha_Y * *(b + 38 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 21 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 21 * OS1_S1 + 1));
                *(b + 63 * OS1_S1 + 0) = Z_PA * *(b + 38 * OS1_S1 + 0) +
                                         alpha_Z * *(b + 38 * OS1_S1 + 1);
                *(b + 64 * OS1_S1 + 0) = Y_PA * *(b + 40 * OS1_S1 + 0) +
                                         alpha_Y * *(b + 40 * OS1_S1 + 1);
                *(b + 65 * OS1_S1 + 0) =
                    Z_PA * *(b + 40 * OS1_S1 + 0) +
                    alpha_Z * *(b + 40 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 22 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 22 * OS1_S1 + 1));
                *(b + 66 * OS1_S1 + 0) =
                    X_PA * *(b + 45 * OS1_S1 + 0) +
                    alpha_X * *(b + 45 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 30 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 30 * OS1_S1 + 1));
                *(b + 67 * OS1_S1 + 0) = Z_PA * *(b + 41 * OS1_S1 + 0) +
                                         alpha_Z * *(b + 41 * OS1_S1 + 1);
                *(b + 68 * OS1_S1 + 0) =
                    Z_PA * *(b + 42 * OS1_S1 + 0) +
                    alpha_Z * *(b + 42 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 23 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 23 * OS1_S1 + 1));
                *(b + 69 * OS1_S1 + 0) = Y_PA * *(b + 44 * OS1_S1 + 0) +
                                         alpha_Y * *(b + 44 * OS1_S1 + 1);
                *(b + 70 * OS1_S1 + 0) =
                    X_PA * *(b + 49 * OS1_S1 + 0) +
                    alpha_X * *(b + 49 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 34 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 34 * OS1_S1 + 1));
                *(b + 71 * OS1_S1 + 0) = X_PA * *(b + 50 * OS1_S1 + 0) +
                                         alpha_X * *(b + 50 * OS1_S1 + 1);
                *(b + 72 * OS1_S1 + 0) = Z_PA * *(b + 45 * OS1_S1 + 0) +
                                         alpha_Z * *(b + 45 * OS1_S1 + 1);
                *(b + 73 * OS1_S1 + 0) = X_PA * *(b + 52 * OS1_S1 + 0) +
                                         alpha_X * *(b + 52 * OS1_S1 + 1);
                *(b + 74 * OS1_S1 + 0) = X_PA * *(b + 53 * OS1_S1 + 0) +
                                         alpha_X * *(b + 53 * OS1_S1 + 1);
                *(b + 75 * OS1_S1 + 0) = Y_PA * *(b + 49 * OS1_S1 + 0) +
                                         alpha_Y * *(b + 49 * OS1_S1 + 1);
                *(b + 76 * OS1_S1 + 0) = X_PA * *(b + 55 * OS1_S1 + 0) +
                                         alpha_X * *(b + 55 * OS1_S1 + 1);
                *(b + 77 * OS1_S1 + 0) =
                    Y_PA * *(b + 50 * OS1_S1 + 0) +
                    alpha_Y * *(b + 50 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 30 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 30 * OS1_S1 + 1));
                *(b + 78 * OS1_S1 + 0) = Z_PA * *(b + 50 * OS1_S1 + 0) +
                                         alpha_Z * *(b + 50 * OS1_S1 + 1);
                *(b + 79 * OS1_S1 + 0) =
                    Z_PA * *(b + 51 * OS1_S1 + 0) +
                    alpha_Z * *(b + 51 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 30 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 30 * OS1_S1 + 1));
                *(b + 80 * OS1_S1 + 0) =
                    Z_PA * *(b + 52 * OS1_S1 + 0) +
                    alpha_Z * *(b + 52 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 31 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 31 * OS1_S1 + 1));
                *(b + 81 * OS1_S1 + 0) =
                    Y_PA * *(b + 54 * OS1_S1 + 0) +
                    alpha_Y * *(b + 54 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 34 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 34 * OS1_S1 + 1));
                *(b + 82 * OS1_S1 + 0) = Y_PA * *(b + 55 * OS1_S1 + 0) +
                                         alpha_Y * *(b + 55 * OS1_S1 + 1);
                *(b + 83 * OS1_S1 + 0) =
                    Z_PA * *(b + 55 * OS1_S1 + 0) +
                    alpha_Z * *(b + 55 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 34 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 34 * OS1_S1 + 1));
                if (m > 6) {
                    *(b + 1 * OS1_S1 + 6) = X_PA * *(b + 0 * OS1_S1 + 6) +
                                            alpha_X * *(b + 0 * OS1_S1 + 7);
                    *(b + 2 * OS1_S1 + 6) = Y_PA * *(b + 0 * OS1_S1 + 6) +
                                            alpha_Y * *(b + 0 * OS1_S1 + 7);
                    *(b + 3 * OS1_S1 + 6) = Z_PA * *(b + 0 * OS1_S1 + 6) +
                                            alpha_Z * *(b + 0 * OS1_S1 + 7);
                    *(b + 4 * OS1_S1 + 5) =
                        X_PA * *(b + 1 * OS1_S1 + 5) +
                        alpha_X * *(b + 1 * OS1_S1 + 6) +
                        one_over_two_p * (*(b + 0 * OS1_S1 + 5) -
                                          alpha_over_p * *(b + 0 * OS1_S1 + 6));
                    *(b + 7 * OS1_S1 + 5) =
                        Y_PA * *(b + 2 * OS1_S1 + 5) +
                        alpha_Y * *(b + 2 * OS1_S1 + 6) +
                        one_over_two_p * (*(b + 0 * OS1_S1 + 5) -
                                          alpha_over_p * *(b + 0 * OS1_S1 + 6));
                    *(b + 9 * OS1_S1 + 5) =
                        Z_PA * *(b + 3 * OS1_S1 + 5) +
                        alpha_Z * *(b + 3 * OS1_S1 + 6) +
                        one_over_two_p * (*(b + 0 * OS1_S1 + 5) -
                                          alpha_over_p * *(b + 0 * OS1_S1 + 6));
                    *(b + 10 * OS1_S1 + 4) =
                        X_PA * *(b + 4 * OS1_S1 + 4) +
                        alpha_X * *(b + 4 * OS1_S1 + 5) +
                        2 * one_over_two_p *
                            (*(b + 1 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 1 * OS1_S1 + 5));
                    *(b + 16 * OS1_S1 + 4) =
                        Y_PA * *(b + 7 * OS1_S1 + 4) +
                        alpha_Y * *(b + 7 * OS1_S1 + 5) +
                        2 * one_over_two_p *
                            (*(b + 2 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 2 * OS1_S1 + 5));
                    *(b + 19 * OS1_S1 + 4) =
                        Z_PA * *(b + 9 * OS1_S1 + 4) +
                        alpha_Z * *(b + 9 * OS1_S1 + 5) +
                        2 * one_over_two_p *
                            (*(b + 3 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 3 * OS1_S1 + 5));
                    *(b + 20 * OS1_S1 + 3) =
                        X_PA * *(b + 10 * OS1_S1 + 3) +
                        alpha_X * *(b + 10 * OS1_S1 + 4) +
                        3 * one_over_two_p *
                            (*(b + 4 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 4 * OS1_S1 + 4));
                    *(b + 21 * OS1_S1 + 3) = Y_PA * *(b + 10 * OS1_S1 + 3) +
                                             alpha_Y * *(b + 10 * OS1_S1 + 4);
                    *(b + 22 * OS1_S1 + 3) = Z_PA * *(b + 10 * OS1_S1 + 3) +
                                             alpha_Z * *(b + 10 * OS1_S1 + 4);
                    *(b + 26 * OS1_S1 + 3) = X_PA * *(b + 16 * OS1_S1 + 3) +
                                             alpha_X * *(b + 16 * OS1_S1 + 4);
                    *(b + 29 * OS1_S1 + 3) = X_PA * *(b + 19 * OS1_S1 + 3) +
                                             alpha_X * *(b + 19 * OS1_S1 + 4);
                    *(b + 30 * OS1_S1 + 3) =
                        Y_PA * *(b + 16 * OS1_S1 + 3) +
                        alpha_Y * *(b + 16 * OS1_S1 + 4) +
                        3 * one_over_two_p *
                            (*(b + 7 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 7 * OS1_S1 + 4));
                    *(b + 31 * OS1_S1 + 3) = Z_PA * *(b + 16 * OS1_S1 + 3) +
                                             alpha_Z * *(b + 16 * OS1_S1 + 4);
                    *(b + 34 * OS1_S1 + 3) =
                        Z_PA * *(b + 19 * OS1_S1 + 3) +
                        alpha_Z * *(b + 19 * OS1_S1 + 4) +
                        3 * one_over_two_p *
                            (*(b + 9 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 9 * OS1_S1 + 4));
                    *(b + 35 * OS1_S1 + 2) =
                        X_PA * *(b + 20 * OS1_S1 + 2) +
                        alpha_X * *(b + 20 * OS1_S1 + 3) +
                        4 * one_over_two_p *
                            (*(b + 10 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 10 * OS1_S1 + 3));
                    *(b + 36 * OS1_S1 + 2) = Y_PA * *(b + 20 * OS1_S1 + 2) +
                                             alpha_Y * *(b + 20 * OS1_S1 + 3);
                    *(b + 37 * OS1_S1 + 2) = Z_PA * *(b + 20 * OS1_S1 + 2) +
                                             alpha_Z * *(b + 20 * OS1_S1 + 3);
                    *(b + 38 * OS1_S1 + 2) =
                        Y_PA * *(b + 21 * OS1_S1 + 2) +
                        alpha_Y * *(b + 21 * OS1_S1 + 3) +
                        one_over_two_p *
                            (*(b + 10 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 10 * OS1_S1 + 3));
                    *(b + 40 * OS1_S1 + 2) =
                        Z_PA * *(b + 22 * OS1_S1 + 2) +
                        alpha_Z * *(b + 22 * OS1_S1 + 3) +
                        one_over_two_p *
                            (*(b + 10 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 10 * OS1_S1 + 3));
                    *(b + 41 * OS1_S1 + 2) =
                        X_PA * *(b + 26 * OS1_S1 + 2) +
                        alpha_X * *(b + 26 * OS1_S1 + 3) +
                        one_over_two_p *
                            (*(b + 16 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 16 * OS1_S1 + 3));
                    *(b + 44 * OS1_S1 + 2) =
                        X_PA * *(b + 29 * OS1_S1 + 2) +
                        alpha_X * *(b + 29 * OS1_S1 + 3) +
                        one_over_two_p *
                            (*(b + 19 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 19 * OS1_S1 + 3));
                    *(b + 45 * OS1_S1 + 2) = X_PA * *(b + 30 * OS1_S1 + 2) +
                                             alpha_X * *(b + 30 * OS1_S1 + 3);
                    *(b + 49 * OS1_S1 + 2) = X_PA * *(b + 34 * OS1_S1 + 2) +
                                             alpha_X * *(b + 34 * OS1_S1 + 3);
                    *(b + 50 * OS1_S1 + 2) =
                        Y_PA * *(b + 30 * OS1_S1 + 2) +
                        alpha_Y * *(b + 30 * OS1_S1 + 3) +
                        4 * one_over_two_p *
                            (*(b + 16 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 16 * OS1_S1 + 3));
                    *(b + 51 * OS1_S1 + 2) = Z_PA * *(b + 30 * OS1_S1 + 2) +
                                             alpha_Z * *(b + 30 * OS1_S1 + 3);
                    *(b + 52 * OS1_S1 + 2) =
                        Z_PA * *(b + 31 * OS1_S1 + 2) +
                        alpha_Z * *(b + 31 * OS1_S1 + 3) +
                        one_over_two_p *
                            (*(b + 16 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 16 * OS1_S1 + 3));
                    *(b + 54 * OS1_S1 + 2) = Y_PA * *(b + 34 * OS1_S1 + 2) +
                                             alpha_Y * *(b + 34 * OS1_S1 + 3);
                    *(b + 55 * OS1_S1 + 2) =
                        Z_PA * *(b + 34 * OS1_S1 + 2) +
                        alpha_Z * *(b + 34 * OS1_S1 + 3) +
                        4 * one_over_two_p *
                            (*(b + 19 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 19 * OS1_S1 + 3));
                    *(b + 56 * OS1_S1 + 1) =
                        X_PA * *(b + 35 * OS1_S1 + 1) +
                        alpha_X * *(b + 35 * OS1_S1 + 2) +
                        5 * one_over_two_p *
                            (*(b + 20 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 20 * OS1_S1 + 2));
                    *(b + 57 * OS1_S1 + 1) = Y_PA * *(b + 35 * OS1_S1 + 1) +
                                             alpha_Y * *(b + 35 * OS1_S1 + 2);
                    *(b + 58 * OS1_S1 + 1) = Z_PA * *(b + 35 * OS1_S1 + 1) +
                                             alpha_Z * *(b + 35 * OS1_S1 + 2);
                    *(b + 59 * OS1_S1 + 1) =
                        Y_PA * *(b + 36 * OS1_S1 + 1) +
                        alpha_Y * *(b + 36 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 20 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 20 * OS1_S1 + 2));
                    *(b + 61 * OS1_S1 + 1) =
                        Z_PA * *(b + 37 * OS1_S1 + 1) +
                        alpha_Z * *(b + 37 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 20 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 20 * OS1_S1 + 2));
                    *(b + 62 * OS1_S1 + 1) =
                        Y_PA * *(b + 38 * OS1_S1 + 1) +
                        alpha_Y * *(b + 38 * OS1_S1 + 2) +
                        2 * one_over_two_p *
                            (*(b + 21 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 21 * OS1_S1 + 2));
                    *(b + 63 * OS1_S1 + 1) = Z_PA * *(b + 38 * OS1_S1 + 1) +
                                             alpha_Z * *(b + 38 * OS1_S1 + 2);
                    *(b + 65 * OS1_S1 + 1) =
                        Z_PA * *(b + 40 * OS1_S1 + 1) +
                        alpha_Z * *(b + 40 * OS1_S1 + 2) +
                        2 * one_over_two_p *
                            (*(b + 22 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 22 * OS1_S1 + 2));
                    *(b + 66 * OS1_S1 + 1) =
                        X_PA * *(b + 45 * OS1_S1 + 1) +
                        alpha_X * *(b + 45 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 30 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 30 * OS1_S1 + 2));
                    *(b + 67 * OS1_S1 + 1) = Z_PA * *(b + 41 * OS1_S1 + 1) +
                                             alpha_Z * *(b + 41 * OS1_S1 + 2);
                    *(b + 69 * OS1_S1 + 1) = Y_PA * *(b + 44 * OS1_S1 + 1) +
                                             alpha_Y * *(b + 44 * OS1_S1 + 2);
                    *(b + 70 * OS1_S1 + 1) =
                        X_PA * *(b + 49 * OS1_S1 + 1) +
                        alpha_X * *(b + 49 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 34 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 34 * OS1_S1 + 2));
                    *(b + 71 * OS1_S1 + 1) = X_PA * *(b + 50 * OS1_S1 + 1) +
                                             alpha_X * *(b + 50 * OS1_S1 + 2);
                    *(b + 76 * OS1_S1 + 1) = X_PA * *(b + 55 * OS1_S1 + 1) +
                                             alpha_X * *(b + 55 * OS1_S1 + 2);
                    *(b + 77 * OS1_S1 + 1) =
                        Y_PA * *(b + 50 * OS1_S1 + 1) +
                        alpha_Y * *(b + 50 * OS1_S1 + 2) +
                        5 * one_over_two_p *
                            (*(b + 30 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 30 * OS1_S1 + 2));
                    *(b + 78 * OS1_S1 + 1) = Z_PA * *(b + 50 * OS1_S1 + 1) +
                                             alpha_Z * *(b + 50 * OS1_S1 + 2);
                    *(b + 79 * OS1_S1 + 1) =
                        Z_PA * *(b + 51 * OS1_S1 + 1) +
                        alpha_Z * *(b + 51 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 30 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 30 * OS1_S1 + 2));
                    *(b + 80 * OS1_S1 + 1) =
                        Z_PA * *(b + 52 * OS1_S1 + 1) +
                        alpha_Z * *(b + 52 * OS1_S1 + 2) +
                        2 * one_over_two_p *
                            (*(b + 31 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 31 * OS1_S1 + 2));
                    *(b + 81 * OS1_S1 + 1) =
                        Y_PA * *(b + 54 * OS1_S1 + 1) +
                        alpha_Y * *(b + 54 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 34 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 34 * OS1_S1 + 2));
                    *(b + 82 * OS1_S1 + 1) = Y_PA * *(b + 55 * OS1_S1 + 1) +
                                             alpha_Y * *(b + 55 * OS1_S1 + 2);
                    *(b + 83 * OS1_S1 + 1) =
                        Z_PA * *(b + 55 * OS1_S1 + 1) +
                        alpha_Z * *(b + 55 * OS1_S1 + 2) +
                        5 * one_over_two_p *
                            (*(b + 34 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 34 * OS1_S1 + 2));
                    *(b + 84 * OS1_S1 + 0) =
                        X_PA * *(b + 56 * OS1_S1 + 0) +
                        alpha_X * *(b + 56 * OS1_S1 + 1) +
                        6 * one_over_two_p *
                            (*(b + 35 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 35 * OS1_S1 + 1));
                    *(b + 85 * OS1_S1 + 0) = Y_PA * *(b + 56 * OS1_S1 + 0) +
                                             alpha_Y * *(b + 56 * OS1_S1 + 1);
                    *(b + 86 * OS1_S1 + 0) = Z_PA * *(b + 56 * OS1_S1 + 0) +
                                             alpha_Z * *(b + 56 * OS1_S1 + 1);
                    *(b + 87 * OS1_S1 + 0) =
                        Y_PA * *(b + 57 * OS1_S1 + 0) +
                        alpha_Y * *(b + 57 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 35 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 35 * OS1_S1 + 1));
                    *(b + 88 * OS1_S1 + 0) = Z_PA * *(b + 57 * OS1_S1 + 0) +
                                             alpha_Z * *(b + 57 * OS1_S1 + 1);
                    *(b + 89 * OS1_S1 + 0) =
                        Z_PA * *(b + 58 * OS1_S1 + 0) +
                        alpha_Z * *(b + 58 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 35 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 35 * OS1_S1 + 1));
                    *(b + 90 * OS1_S1 + 0) =
                        Y_PA * *(b + 59 * OS1_S1 + 0) +
                        alpha_Y * *(b + 59 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 36 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 36 * OS1_S1 + 1));
                    *(b + 91 * OS1_S1 + 0) = Z_PA * *(b + 59 * OS1_S1 + 0) +
                                             alpha_Z * *(b + 59 * OS1_S1 + 1);
                    *(b + 92 * OS1_S1 + 0) = Y_PA * *(b + 61 * OS1_S1 + 0) +
                                             alpha_Y * *(b + 61 * OS1_S1 + 1);
                    *(b + 93 * OS1_S1 + 0) =
                        Z_PA * *(b + 61 * OS1_S1 + 0) +
                        alpha_Z * *(b + 61 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 37 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 37 * OS1_S1 + 1));
                    *(b + 94 * OS1_S1 + 0) =
                        X_PA * *(b + 66 * OS1_S1 + 0) +
                        alpha_X * *(b + 66 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 45 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 45 * OS1_S1 + 1));
                    *(b + 95 * OS1_S1 + 0) = Z_PA * *(b + 62 * OS1_S1 + 0) +
                                             alpha_Z * *(b + 62 * OS1_S1 + 1);
                    *(b + 96 * OS1_S1 + 0) =
                        Z_PA * *(b + 63 * OS1_S1 + 0) +
                        alpha_Z * *(b + 63 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 38 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 38 * OS1_S1 + 1));
                    *(b + 97 * OS1_S1 + 0) = Y_PA * *(b + 65 * OS1_S1 + 0) +
                                             alpha_Y * *(b + 65 * OS1_S1 + 1);
                    *(b + 98 * OS1_S1 + 0) =
                        X_PA * *(b + 70 * OS1_S1 + 0) +
                        alpha_X * *(b + 70 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 49 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 49 * OS1_S1 + 1));
                    *(b + 99 * OS1_S1 + 0) =
                        X_PA * *(b + 71 * OS1_S1 + 0) +
                        alpha_X * *(b + 71 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 50 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 50 * OS1_S1 + 1));
                    *(b + 100 * OS1_S1 + 0) = Z_PA * *(b + 66 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 66 * OS1_S1 + 1);
                    *(b + 101 * OS1_S1 + 0) =
                        Z_PA * *(b + 67 * OS1_S1 + 0) +
                        alpha_Z * *(b + 67 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 41 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 41 * OS1_S1 + 1));
                    *(b + 102 * OS1_S1 + 0) =
                        Y_PA * *(b + 69 * OS1_S1 + 0) +
                        alpha_Y * *(b + 69 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 44 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 44 * OS1_S1 + 1));
                    *(b + 103 * OS1_S1 + 0) = Y_PA * *(b + 70 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 70 * OS1_S1 + 1);
                    *(b + 104 * OS1_S1 + 0) =
                        X_PA * *(b + 76 * OS1_S1 + 0) +
                        alpha_X * *(b + 76 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 55 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 55 * OS1_S1 + 1));
                    *(b + 105 * OS1_S1 + 0) = X_PA * *(b + 77 * OS1_S1 + 0) +
                                              alpha_X * *(b + 77 * OS1_S1 + 1);
                    *(b + 106 * OS1_S1 + 0) = Z_PA * *(b + 71 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 71 * OS1_S1 + 1);
                    *(b + 107 * OS1_S1 + 0) = X_PA * *(b + 79 * OS1_S1 + 0) +
                                              alpha_X * *(b + 79 * OS1_S1 + 1);
                    *(b + 108 * OS1_S1 + 0) = X_PA * *(b + 80 * OS1_S1 + 0) +
                                              alpha_X * *(b + 80 * OS1_S1 + 1);
                    *(b + 109 * OS1_S1 + 0) = X_PA * *(b + 81 * OS1_S1 + 0) +
                                              alpha_X * *(b + 81 * OS1_S1 + 1);
                    *(b + 110 * OS1_S1 + 0) = Y_PA * *(b + 76 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 76 * OS1_S1 + 1);
                    *(b + 111 * OS1_S1 + 0) = X_PA * *(b + 83 * OS1_S1 + 0) +
                                              alpha_X * *(b + 83 * OS1_S1 + 1);
                    *(b + 112 * OS1_S1 + 0) =
                        Y_PA * *(b + 77 * OS1_S1 + 0) +
                        alpha_Y * *(b + 77 * OS1_S1 + 1) +
                        6 * one_over_two_p *
                            (*(b + 50 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 50 * OS1_S1 + 1));
                    *(b + 113 * OS1_S1 + 0) = Z_PA * *(b + 77 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 77 * OS1_S1 + 1);
                    *(b + 114 * OS1_S1 + 0) =
                        Z_PA * *(b + 78 * OS1_S1 + 0) +
                        alpha_Z * *(b + 78 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 50 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 50 * OS1_S1 + 1));
                    *(b + 115 * OS1_S1 + 0) =
                        Z_PA * *(b + 79 * OS1_S1 + 0) +
                        alpha_Z * *(b + 79 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 51 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 51 * OS1_S1 + 1));
                    *(b + 116 * OS1_S1 + 0) =
                        Y_PA * *(b + 81 * OS1_S1 + 0) +
                        alpha_Y * *(b + 81 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 54 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 54 * OS1_S1 + 1));
                    *(b + 117 * OS1_S1 + 0) =
                        Y_PA * *(b + 82 * OS1_S1 + 0) +
                        alpha_Y * *(b + 82 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 55 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 55 * OS1_S1 + 1));
                    *(b + 118 * OS1_S1 + 0) = Y_PA * *(b + 83 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 83 * OS1_S1 + 1);
                    *(b + 119 * OS1_S1 + 0) =
                        Z_PA * *(b + 83 * OS1_S1 + 0) +
                        alpha_Z * *(b + 83 * OS1_S1 + 1) +
                        6 * one_over_two_p *
                            (*(b + 55 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 55 * OS1_S1 + 1));
                    if (m > 7) {
                        *(b + 1 * OS1_S1 + 7) = X_PA * *(b + 0 * OS1_S1 + 7) +
                                                alpha_X * *(b + 0 * OS1_S1 + 8);
                        *(b + 2 * OS1_S1 + 7) = Y_PA * *(b + 0 * OS1_S1 + 7) +
                                                alpha_Y * *(b + 0 * OS1_S1 + 8);
                        *(b + 3 * OS1_S1 + 7) = Z_PA * *(b + 0 * OS1_S1 + 7) +
                                                alpha_Z * *(b + 0 * OS1_S1 + 8);
                        *(b + 4 * OS1_S1 + 6) =
                            X_PA * *(b + 1 * OS1_S1 + 6) +
                            alpha_X * *(b + 1 * OS1_S1 + 7) +
                            one_over_two_p *
                                (*(b + 0 * OS1_S1 + 6) -
                                 alpha_over_p * *(b + 0 * OS1_S1 + 7));
                        *(b + 7 * OS1_S1 + 6) =
                            Y_PA * *(b + 2 * OS1_S1 + 6) +
                            alpha_Y * *(b + 2 * OS1_S1 + 7) +
                            one_over_two_p *
                                (*(b + 0 * OS1_S1 + 6) -
                                 alpha_over_p * *(b + 0 * OS1_S1 + 7));
                        *(b + 9 * OS1_S1 + 6) =
                            Z_PA * *(b + 3 * OS1_S1 + 6) +
                            alpha_Z * *(b + 3 * OS1_S1 + 7) +
                            one_over_two_p *
                                (*(b + 0 * OS1_S1 + 6) -
                                 alpha_over_p * *(b + 0 * OS1_S1 + 7));
                        *(b + 10 * OS1_S1 + 5) =
                            X_PA * *(b + 4 * OS1_S1 + 5) +
                            alpha_X * *(b + 4 * OS1_S1 + 6) +
                            2 * one_over_two_p *
                                (*(b + 1 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 1 * OS1_S1 + 6));
                        *(b + 16 * OS1_S1 + 5) =
                            Y_PA * *(b + 7 * OS1_S1 + 5) +
                            alpha_Y * *(b + 7 * OS1_S1 + 6) +
                            2 * one_over_two_p *
                                (*(b + 2 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 2 * OS1_S1 + 6));
                        *(b + 19 * OS1_S1 + 5) =
                            Z_PA * *(b + 9 * OS1_S1 + 5) +
                            alpha_Z * *(b + 9 * OS1_S1 + 6) +
                            2 * one_over_two_p *
                                (*(b + 3 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 3 * OS1_S1 + 6));
                        *(b + 20 * OS1_S1 + 4) =
                            X_PA * *(b + 10 * OS1_S1 + 4) +
                            alpha_X * *(b + 10 * OS1_S1 + 5) +
                            3 * one_over_two_p *
                                (*(b + 4 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 4 * OS1_S1 + 5));
                        *(b + 21 * OS1_S1 + 4) =
                            Y_PA * *(b + 10 * OS1_S1 + 4) +
                            alpha_Y * *(b + 10 * OS1_S1 + 5);
                        *(b + 22 * OS1_S1 + 4) =
                            Z_PA * *(b + 10 * OS1_S1 + 4) +
                            alpha_Z * *(b + 10 * OS1_S1 + 5);
                        *(b + 30 * OS1_S1 + 4) =
                            Y_PA * *(b + 16 * OS1_S1 + 4) +
                            alpha_Y * *(b + 16 * OS1_S1 + 5) +
                            3 * one_over_two_p *
                                (*(b + 7 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 7 * OS1_S1 + 5));
                        *(b + 31 * OS1_S1 + 4) =
                            Z_PA * *(b + 16 * OS1_S1 + 4) +
                            alpha_Z * *(b + 16 * OS1_S1 + 5);
                        *(b + 34 * OS1_S1 + 4) =
                            Z_PA * *(b + 19 * OS1_S1 + 4) +
                            alpha_Z * *(b + 19 * OS1_S1 + 5) +
                            3 * one_over_two_p *
                                (*(b + 9 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 9 * OS1_S1 + 5));
                        *(b + 35 * OS1_S1 + 3) =
                            X_PA * *(b + 20 * OS1_S1 + 3) +
                            alpha_X * *(b + 20 * OS1_S1 + 4) +
                            4 * one_over_two_p *
                                (*(b + 10 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 10 * OS1_S1 + 4));
                        *(b + 36 * OS1_S1 + 3) =
                            Y_PA * *(b + 20 * OS1_S1 + 3) +
                            alpha_Y * *(b + 20 * OS1_S1 + 4);
                        *(b + 37 * OS1_S1 + 3) =
                            Z_PA * *(b + 20 * OS1_S1 + 3) +
                            alpha_Z * *(b + 20 * OS1_S1 + 4);
                        *(b + 38 * OS1_S1 + 3) =
                            Y_PA * *(b + 21 * OS1_S1 + 3) +
                            alpha_Y * *(b + 21 * OS1_S1 + 4) +
                            one_over_two_p *
                                (*(b + 10 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 10 * OS1_S1 + 4));
                        *(b + 40 * OS1_S1 + 3) =
                            Z_PA * *(b + 22 * OS1_S1 + 3) +
                            alpha_Z * *(b + 22 * OS1_S1 + 4) +
                            one_over_two_p *
                                (*(b + 10 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 10 * OS1_S1 + 4));
                        *(b + 45 * OS1_S1 + 3) =
                            X_PA * *(b + 30 * OS1_S1 + 3) +
                            alpha_X * *(b + 30 * OS1_S1 + 4);
                        *(b + 49 * OS1_S1 + 3) =
                            X_PA * *(b + 34 * OS1_S1 + 3) +
                            alpha_X * *(b + 34 * OS1_S1 + 4);
                        *(b + 50 * OS1_S1 + 3) =
                            Y_PA * *(b + 30 * OS1_S1 + 3) +
                            alpha_Y * *(b + 30 * OS1_S1 + 4) +
                            4 * one_over_two_p *
                                (*(b + 16 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 16 * OS1_S1 + 4));
                        *(b + 51 * OS1_S1 + 3) =
                            Z_PA * *(b + 30 * OS1_S1 + 3) +
                            alpha_Z * *(b + 30 * OS1_S1 + 4);
                        *(b + 52 * OS1_S1 + 3) =
                            Z_PA * *(b + 31 * OS1_S1 + 3) +
                            alpha_Z * *(b + 31 * OS1_S1 + 4) +
                            one_over_two_p *
                                (*(b + 16 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 16 * OS1_S1 + 4));
                        *(b + 54 * OS1_S1 + 3) =
                            Y_PA * *(b + 34 * OS1_S1 + 3) +
                            alpha_Y * *(b + 34 * OS1_S1 + 4);
                        *(b + 55 * OS1_S1 + 3) =
                            Z_PA * *(b + 34 * OS1_S1 + 3) +
                            alpha_Z * *(b + 34 * OS1_S1 + 4) +
                            4 * one_over_two_p *
                                (*(b + 19 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 19 * OS1_S1 + 4));
                        *(b + 56 * OS1_S1 + 2) =
                            X_PA * *(b + 35 * OS1_S1 + 2) +
                            alpha_X * *(b + 35 * OS1_S1 + 3) +
                            5 * one_over_two_p *
                                (*(b + 20 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 20 * OS1_S1 + 3));
                        *(b + 57 * OS1_S1 + 2) =
                            Y_PA * *(b + 35 * OS1_S1 + 2) +
                            alpha_Y * *(b + 35 * OS1_S1 + 3);
                        *(b + 58 * OS1_S1 + 2) =
                            Z_PA * *(b + 35 * OS1_S1 + 2) +
                            alpha_Z * *(b + 35 * OS1_S1 + 3);
                        *(b + 59 * OS1_S1 + 2) =
                            Y_PA * *(b + 36 * OS1_S1 + 2) +
                            alpha_Y * *(b + 36 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 20 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 20 * OS1_S1 + 3));
                        *(b + 61 * OS1_S1 + 2) =
                            Z_PA * *(b + 37 * OS1_S1 + 2) +
                            alpha_Z * *(b + 37 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 20 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 20 * OS1_S1 + 3));
                        *(b + 62 * OS1_S1 + 2) =
                            Y_PA * *(b + 38 * OS1_S1 + 2) +
                            alpha_Y * *(b + 38 * OS1_S1 + 3) +
                            2 * one_over_two_p *
                                (*(b + 21 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 21 * OS1_S1 + 3));
                        *(b + 65 * OS1_S1 + 2) =
                            Z_PA * *(b + 40 * OS1_S1 + 2) +
                            alpha_Z * *(b + 40 * OS1_S1 + 3) +
                            2 * one_over_two_p *
                                (*(b + 22 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 22 * OS1_S1 + 3));
                        *(b + 66 * OS1_S1 + 2) =
                            X_PA * *(b + 45 * OS1_S1 + 2) +
                            alpha_X * *(b + 45 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 30 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 30 * OS1_S1 + 3));
                        *(b + 70 * OS1_S1 + 2) =
                            X_PA * *(b + 49 * OS1_S1 + 2) +
                            alpha_X * *(b + 49 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 34 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 34 * OS1_S1 + 3));
                        *(b + 71 * OS1_S1 + 2) =
                            X_PA * *(b + 50 * OS1_S1 + 2) +
                            alpha_X * *(b + 50 * OS1_S1 + 3);
                        *(b + 76 * OS1_S1 + 2) =
                            X_PA * *(b + 55 * OS1_S1 + 2) +
                            alpha_X * *(b + 55 * OS1_S1 + 3);
                        *(b + 77 * OS1_S1 + 2) =
                            Y_PA * *(b + 50 * OS1_S1 + 2) +
                            alpha_Y * *(b + 50 * OS1_S1 + 3) +
                            5 * one_over_two_p *
                                (*(b + 30 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 30 * OS1_S1 + 3));
                        *(b + 78 * OS1_S1 + 2) =
                            Z_PA * *(b + 50 * OS1_S1 + 2) +
                            alpha_Z * *(b + 50 * OS1_S1 + 3);
                        *(b + 79 * OS1_S1 + 2) =
                            Z_PA * *(b + 51 * OS1_S1 + 2) +
                            alpha_Z * *(b + 51 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 30 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 30 * OS1_S1 + 3));
                        *(b + 80 * OS1_S1 + 2) =
                            Z_PA * *(b + 52 * OS1_S1 + 2) +
                            alpha_Z * *(b + 52 * OS1_S1 + 3) +
                            2 * one_over_two_p *
                                (*(b + 31 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 31 * OS1_S1 + 3));
                        *(b + 81 * OS1_S1 + 2) =
                            Y_PA * *(b + 54 * OS1_S1 + 2) +
                            alpha_Y * *(b + 54 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 34 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 34 * OS1_S1 + 3));
                        *(b + 82 * OS1_S1 + 2) =
                            Y_PA * *(b + 55 * OS1_S1 + 2) +
                            alpha_Y * *(b + 55 * OS1_S1 + 3);
                        *(b + 83 * OS1_S1 + 2) =
                            Z_PA * *(b + 55 * OS1_S1 + 2) +
                            alpha_Z * *(b + 55 * OS1_S1 + 3) +
                            5 * one_over_two_p *
                                (*(b + 34 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 34 * OS1_S1 + 3));
                        *(b + 84 * OS1_S1 + 1) =
                            X_PA * *(b + 56 * OS1_S1 + 1) +
                            alpha_X * *(b + 56 * OS1_S1 + 2) +
                            6 * one_over_two_p *
                                (*(b + 35 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 35 * OS1_S1 + 2));
                        *(b + 85 * OS1_S1 + 1) =
                            Y_PA * *(b + 56 * OS1_S1 + 1) +
                            alpha_Y * *(b + 56 * OS1_S1 + 2);
                        *(b + 86 * OS1_S1 + 1) =
                            Z_PA * *(b + 56 * OS1_S1 + 1) +
                            alpha_Z * *(b + 56 * OS1_S1 + 2);
                        *(b + 87 * OS1_S1 + 1) =
                            Y_PA * *(b + 57 * OS1_S1 + 1) +
                            alpha_Y * *(b + 57 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 35 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 35 * OS1_S1 + 2));
                        *(b + 89 * OS1_S1 + 1) =
                            Z_PA * *(b + 58 * OS1_S1 + 1) +
                            alpha_Z * *(b + 58 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 35 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 35 * OS1_S1 + 2));
                        *(b + 90 * OS1_S1 + 1) =
                            Y_PA * *(b + 59 * OS1_S1 + 1) +
                            alpha_Y * *(b + 59 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 36 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 36 * OS1_S1 + 2));
                        *(b + 91 * OS1_S1 + 1) =
                            Z_PA * *(b + 59 * OS1_S1 + 1) +
                            alpha_Z * *(b + 59 * OS1_S1 + 2);
                        *(b + 93 * OS1_S1 + 1) =
                            Z_PA * *(b + 61 * OS1_S1 + 1) +
                            alpha_Z * *(b + 61 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 37 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 37 * OS1_S1 + 2));
                        *(b + 94 * OS1_S1 + 1) =
                            X_PA * *(b + 66 * OS1_S1 + 1) +
                            alpha_X * *(b + 66 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 45 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 45 * OS1_S1 + 2));
                        *(b + 95 * OS1_S1 + 1) =
                            Z_PA * *(b + 62 * OS1_S1 + 1) +
                            alpha_Z * *(b + 62 * OS1_S1 + 2);
                        *(b + 97 * OS1_S1 + 1) =
                            Y_PA * *(b + 65 * OS1_S1 + 1) +
                            alpha_Y * *(b + 65 * OS1_S1 + 2);
                        *(b + 98 * OS1_S1 + 1) =
                            X_PA * *(b + 70 * OS1_S1 + 1) +
                            alpha_X * *(b + 70 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 49 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 49 * OS1_S1 + 2));
                        *(b + 99 * OS1_S1 + 1) =
                            X_PA * *(b + 71 * OS1_S1 + 1) +
                            alpha_X * *(b + 71 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 50 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 50 * OS1_S1 + 2));
                        *(b + 100 * OS1_S1 + 1) =
                            Z_PA * *(b + 66 * OS1_S1 + 1) +
                            alpha_Z * *(b + 66 * OS1_S1 + 2);
                        *(b + 103 * OS1_S1 + 1) =
                            Y_PA * *(b + 70 * OS1_S1 + 1) +
                            alpha_Y * *(b + 70 * OS1_S1 + 2);
                        *(b + 104 * OS1_S1 + 1) =
                            X_PA * *(b + 76 * OS1_S1 + 1) +
                            alpha_X * *(b + 76 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 55 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 55 * OS1_S1 + 2));
                        *(b + 105 * OS1_S1 + 1) =
                            X_PA * *(b + 77 * OS1_S1 + 1) +
                            alpha_X * *(b + 77 * OS1_S1 + 2);
                        *(b + 108 * OS1_S1 + 1) =
                            X_PA * *(b + 80 * OS1_S1 + 1) +
                            alpha_X * *(b + 80 * OS1_S1 + 2);
                        *(b + 111 * OS1_S1 + 1) =
                            X_PA * *(b + 83 * OS1_S1 + 1) +
                            alpha_X * *(b + 83 * OS1_S1 + 2);
                        *(b + 112 * OS1_S1 + 1) =
                            Y_PA * *(b + 77 * OS1_S1 + 1) +
                            alpha_Y * *(b + 77 * OS1_S1 + 2) +
                            6 * one_over_two_p *
                                (*(b + 50 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 50 * OS1_S1 + 2));
                        *(b + 113 * OS1_S1 + 1) =
                            Z_PA * *(b + 77 * OS1_S1 + 1) +
                            alpha_Z * *(b + 77 * OS1_S1 + 2);
                        *(b + 114 * OS1_S1 + 1) =
                            Z_PA * *(b + 78 * OS1_S1 + 1) +
                            alpha_Z * *(b + 78 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 50 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 50 * OS1_S1 + 2));
                        *(b + 115 * OS1_S1 + 1) =
                            Z_PA * *(b + 79 * OS1_S1 + 1) +
                            alpha_Z * *(b + 79 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 51 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 51 * OS1_S1 + 2));
                        *(b + 116 * OS1_S1 + 1) =
                            Y_PA * *(b + 81 * OS1_S1 + 1) +
                            alpha_Y * *(b + 81 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 54 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 54 * OS1_S1 + 2));
                        *(b + 117 * OS1_S1 + 1) =
                            Y_PA * *(b + 82 * OS1_S1 + 1) +
                            alpha_Y * *(b + 82 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 55 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 55 * OS1_S1 + 2));
                        *(b + 118 * OS1_S1 + 1) =
                            Y_PA * *(b + 83 * OS1_S1 + 1) +
                            alpha_Y * *(b + 83 * OS1_S1 + 2);
                        *(b + 119 * OS1_S1 + 1) =
                            Z_PA * *(b + 83 * OS1_S1 + 1) +
                            alpha_Z * *(b + 83 * OS1_S1 + 2) +
                            6 * one_over_two_p *
                                (*(b + 55 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 55 * OS1_S1 + 2));
                        *(b + 120 * OS1_S1 + 0) =
                            X_PA * *(b + 84 * OS1_S1 + 0) +
                            alpha_X * *(b + 84 * OS1_S1 + 1) +
                            7 * one_over_two_p *
                                (*(b + 56 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 56 * OS1_S1 + 1));
                        *(b + 121 * OS1_S1 + 0) =
                            Y_PA * *(b + 84 * OS1_S1 + 0) +
                            alpha_Y * *(b + 84 * OS1_S1 + 1);
                        *(b + 122 * OS1_S1 + 0) =
                            Z_PA * *(b + 84 * OS1_S1 + 0) +
                            alpha_Z * *(b + 84 * OS1_S1 + 1);
                        *(b + 123 * OS1_S1 + 0) =
                            Y_PA * *(b + 85 * OS1_S1 + 0) +
                            alpha_Y * *(b + 85 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 56 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 56 * OS1_S1 + 1));
                        *(b + 124 * OS1_S1 + 0) =
                            Z_PA * *(b + 85 * OS1_S1 + 0) +
                            alpha_Z * *(b + 85 * OS1_S1 + 1);
                        *(b + 125 * OS1_S1 + 0) =
                            Z_PA * *(b + 86 * OS1_S1 + 0) +
                            alpha_Z * *(b + 86 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 56 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 56 * OS1_S1 + 1));
                        *(b + 126 * OS1_S1 + 0) =
                            Y_PA * *(b + 87 * OS1_S1 + 0) +
                            alpha_Y * *(b + 87 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 57 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 57 * OS1_S1 + 1));
                        *(b + 127 * OS1_S1 + 0) =
                            Z_PA * *(b + 87 * OS1_S1 + 0) +
                            alpha_Z * *(b + 87 * OS1_S1 + 1);
                        *(b + 128 * OS1_S1 + 0) =
                            Y_PA * *(b + 89 * OS1_S1 + 0) +
                            alpha_Y * *(b + 89 * OS1_S1 + 1);
                        *(b + 129 * OS1_S1 + 0) =
                            Z_PA * *(b + 89 * OS1_S1 + 0) +
                            alpha_Z * *(b + 89 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 58 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 58 * OS1_S1 + 1));
                        *(b + 130 * OS1_S1 + 0) =
                            Y_PA * *(b + 90 * OS1_S1 + 0) +
                            alpha_Y * *(b + 90 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 59 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 59 * OS1_S1 + 1));
                        *(b + 131 * OS1_S1 + 0) =
                            Z_PA * *(b + 90 * OS1_S1 + 0) +
                            alpha_Z * *(b + 90 * OS1_S1 + 1);
                        *(b + 132 * OS1_S1 + 0) =
                            Z_PA * *(b + 91 * OS1_S1 + 0) +
                            alpha_Z * *(b + 91 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 59 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 59 * OS1_S1 + 1));
                        *(b + 133 * OS1_S1 + 0) =
                            Y_PA * *(b + 93 * OS1_S1 + 0) +
                            alpha_Y * *(b + 93 * OS1_S1 + 1);
                        *(b + 134 * OS1_S1 + 0) =
                            Z_PA * *(b + 93 * OS1_S1 + 0) +
                            alpha_Z * *(b + 93 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 61 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 61 * OS1_S1 + 1));
                        *(b + 135 * OS1_S1 + 0) =
                            X_PA * *(b + 99 * OS1_S1 + 0) +
                            alpha_X * *(b + 99 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 71 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 71 * OS1_S1 + 1));
                        *(b + 136 * OS1_S1 + 0) =
                            Z_PA * *(b + 94 * OS1_S1 + 0) +
                            alpha_Z * *(b + 94 * OS1_S1 + 1);
                        *(b + 137 * OS1_S1 + 0) =
                            Z_PA * *(b + 95 * OS1_S1 + 0) +
                            alpha_Z * *(b + 95 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 62 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 62 * OS1_S1 + 1));
                        *(b + 138 * OS1_S1 + 0) =
                            Y_PA * *(b + 97 * OS1_S1 + 0) +
                            alpha_Y * *(b + 97 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 65 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 65 * OS1_S1 + 1));
                        *(b + 139 * OS1_S1 + 0) =
                            Y_PA * *(b + 98 * OS1_S1 + 0) +
                            alpha_Y * *(b + 98 * OS1_S1 + 1);
                        *(b + 140 * OS1_S1 + 0) =
                            X_PA * *(b + 104 * OS1_S1 + 0) +
                            alpha_X * *(b + 104 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 76 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 76 * OS1_S1 + 1));
                        *(b + 141 * OS1_S1 + 0) =
                            X_PA * *(b + 105 * OS1_S1 + 0) +
                            alpha_X * *(b + 105 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 77 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 77 * OS1_S1 + 1));
                        *(b + 142 * OS1_S1 + 0) =
                            Z_PA * *(b + 99 * OS1_S1 + 0) +
                            alpha_Z * *(b + 99 * OS1_S1 + 1);
                        *(b + 143 * OS1_S1 + 0) =
                            Z_PA * *(b + 100 * OS1_S1 + 0) +
                            alpha_Z * *(b + 100 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 66 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 66 * OS1_S1 + 1));
                        *(b + 144 * OS1_S1 + 0) =
                            X_PA * *(b + 108 * OS1_S1 + 0) +
                            alpha_X * *(b + 108 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 80 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 80 * OS1_S1 + 1));
                        *(b + 145 * OS1_S1 + 0) =
                            Y_PA * *(b + 103 * OS1_S1 + 0) +
                            alpha_Y * *(b + 103 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 70 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 70 * OS1_S1 + 1));
                        *(b + 146 * OS1_S1 + 0) =
                            Y_PA * *(b + 104 * OS1_S1 + 0) +
                            alpha_Y * *(b + 104 * OS1_S1 + 1);
                        *(b + 147 * OS1_S1 + 0) =
                            X_PA * *(b + 111 * OS1_S1 + 0) +
                            alpha_X * *(b + 111 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 83 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 83 * OS1_S1 + 1));
                        *(b + 148 * OS1_S1 + 0) =
                            X_PA * *(b + 112 * OS1_S1 + 0) +
                            alpha_X * *(b + 112 * OS1_S1 + 1);
                        *(b + 149 * OS1_S1 + 0) =
                            Z_PA * *(b + 105 * OS1_S1 + 0) +
                            alpha_Z * *(b + 105 * OS1_S1 + 1);
                        *(b + 150 * OS1_S1 + 0) =
                            X_PA * *(b + 114 * OS1_S1 + 0) +
                            alpha_X * *(b + 114 * OS1_S1 + 1);
                        *(b + 151 * OS1_S1 + 0) =
                            X_PA * *(b + 115 * OS1_S1 + 0) +
                            alpha_X * *(b + 115 * OS1_S1 + 1);
                        *(b + 152 * OS1_S1 + 0) =
                            X_PA * *(b + 116 * OS1_S1 + 0) +
                            alpha_X * *(b + 116 * OS1_S1 + 1);
                        *(b + 153 * OS1_S1 + 0) =
                            X_PA * *(b + 117 * OS1_S1 + 0) +
                            alpha_X * *(b + 117 * OS1_S1 + 1);
                        *(b + 154 * OS1_S1 + 0) =
                            Y_PA * *(b + 111 * OS1_S1 + 0) +
                            alpha_Y * *(b + 111 * OS1_S1 + 1);
                        *(b + 155 * OS1_S1 + 0) =
                            X_PA * *(b + 119 * OS1_S1 + 0) +
                            alpha_X * *(b + 119 * OS1_S1 + 1);
                        *(b + 156 * OS1_S1 + 0) =
                            Y_PA * *(b + 112 * OS1_S1 + 0) +
                            alpha_Y * *(b + 112 * OS1_S1 + 1) +
                            7 * one_over_two_p *
                                (*(b + 77 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 77 * OS1_S1 + 1));
                        *(b + 157 * OS1_S1 + 0) =
                            Z_PA * *(b + 112 * OS1_S1 + 0) +
                            alpha_Z * *(b + 112 * OS1_S1 + 1);
                        *(b + 158 * OS1_S1 + 0) =
                            Z_PA * *(b + 113 * OS1_S1 + 0) +
                            alpha_Z * *(b + 113 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 77 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 77 * OS1_S1 + 1));
                        *(b + 159 * OS1_S1 + 0) =
                            Z_PA * *(b + 114 * OS1_S1 + 0) +
                            alpha_Z * *(b + 114 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 78 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 78 * OS1_S1 + 1));
                        *(b + 160 * OS1_S1 + 0) =
                            Z_PA * *(b + 115 * OS1_S1 + 0) +
                            alpha_Z * *(b + 115 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 79 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 79 * OS1_S1 + 1));
                        *(b + 161 * OS1_S1 + 0) =
                            Y_PA * *(b + 117 * OS1_S1 + 0) +
                            alpha_Y * *(b + 117 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 82 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 82 * OS1_S1 + 1));
                        *(b + 162 * OS1_S1 + 0) =
                            Y_PA * *(b + 118 * OS1_S1 + 0) +
                            alpha_Y * *(b + 118 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 83 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 83 * OS1_S1 + 1));
                        *(b + 163 * OS1_S1 + 0) =
                            Y_PA * *(b + 119 * OS1_S1 + 0) +
                            alpha_Y * *(b + 119 * OS1_S1 + 1);
                        *(b + 164 * OS1_S1 + 0) =
                            Z_PA * *(b + 119 * OS1_S1 + 0) +
                            alpha_Z * *(b + 119 * OS1_S1 + 1) +
                            7 * one_over_two_p *
                                (*(b + 83 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 83 * OS1_S1 + 1));
                    }
                }
            }
            return;
        }
    }
}
