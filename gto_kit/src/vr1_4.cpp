/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/vr.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void vr1_4(const double alpha_over_p,
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
            *(b + 1 * OS1_S1 + 0) =
                X_PA * *(b + 0 * OS1_S1 + 0) + alpha_X * *(b + 0 * OS1_S1 + 1);
            *(b + 2 * OS1_S1 + 0) =
                Y_PA * *(b + 0 * OS1_S1 + 0) + alpha_Y * *(b + 0 * OS1_S1 + 1);
            *(b + 3 * OS1_S1 + 0) =
                Z_PA * *(b + 0 * OS1_S1 + 0) + alpha_Z * *(b + 0 * OS1_S1 + 1);
            if (m > 1) {
                *(b + 1 * OS1_S1 + 1) = X_PA * *(b + 0 * OS1_S1 + 1) +
                                        alpha_X * *(b + 0 * OS1_S1 + 2);
                *(b + 2 * OS1_S1 + 1) = Y_PA * *(b + 0 * OS1_S1 + 1) +
                                        alpha_Y * *(b + 0 * OS1_S1 + 2);
                *(b + 3 * OS1_S1 + 1) = Z_PA * *(b + 0 * OS1_S1 + 1) +
                                        alpha_Z * *(b + 0 * OS1_S1 + 2);
                *(b + 4 * OS1_S1 + 0) =
                    X_PA * *(b + 1 * OS1_S1 + 0) +
                    alpha_X * *(b + 1 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 1));
                *(b + 5 * OS1_S1 + 0) = Y_PA * *(b + 1 * OS1_S1 + 0) +
                                        alpha_Y * *(b + 1 * OS1_S1 + 1);
                *(b + 6 * OS1_S1 + 0) = Z_PA * *(b + 1 * OS1_S1 + 0) +
                                        alpha_Z * *(b + 1 * OS1_S1 + 1);
                *(b + 7 * OS1_S1 + 0) =
                    Y_PA * *(b + 2 * OS1_S1 + 0) +
                    alpha_Y * *(b + 2 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 1));
                *(b + 8 * OS1_S1 + 0) = Z_PA * *(b + 2 * OS1_S1 + 0) +
                                        alpha_Z * *(b + 2 * OS1_S1 + 1);
                *(b + 9 * OS1_S1 + 0) =
                    Z_PA * *(b + 3 * OS1_S1 + 0) +
                    alpha_Z * *(b + 3 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 1));
                if (m > 2) {
                    *(b + 1 * OS1_S1 + 2) = X_PA * *(b + 0 * OS1_S1 + 2) +
                                            alpha_X * *(b + 0 * OS1_S1 + 3);
                    *(b + 2 * OS1_S1 + 2) = Y_PA * *(b + 0 * OS1_S1 + 2) +
                                            alpha_Y * *(b + 0 * OS1_S1 + 3);
                    *(b + 3 * OS1_S1 + 2) = Z_PA * *(b + 0 * OS1_S1 + 2) +
                                            alpha_Z * *(b + 0 * OS1_S1 + 3);
                    *(b + 4 * OS1_S1 + 1) =
                        X_PA * *(b + 1 * OS1_S1 + 1) +
                        alpha_X * *(b + 1 * OS1_S1 + 2) +
                        one_over_two_p * (*(b + 0 * OS1_S1 + 1) -
                                          alpha_over_p * *(b + 0 * OS1_S1 + 2));
                    *(b + 5 * OS1_S1 + 1) = Y_PA * *(b + 1 * OS1_S1 + 1) +
                                            alpha_Y * *(b + 1 * OS1_S1 + 2);
                    *(b + 7 * OS1_S1 + 1) =
                        Y_PA * *(b + 2 * OS1_S1 + 1) +
                        alpha_Y * *(b + 2 * OS1_S1 + 2) +
                        one_over_two_p * (*(b + 0 * OS1_S1 + 1) -
                                          alpha_over_p * *(b + 0 * OS1_S1 + 2));
                    *(b + 9 * OS1_S1 + 1) =
                        Z_PA * *(b + 3 * OS1_S1 + 1) +
                        alpha_Z * *(b + 3 * OS1_S1 + 2) +
                        one_over_two_p * (*(b + 0 * OS1_S1 + 1) -
                                          alpha_over_p * *(b + 0 * OS1_S1 + 2));
                    *(b + 10 * OS1_S1 + 0) =
                        X_PA * *(b + 4 * OS1_S1 + 0) +
                        alpha_X * *(b + 4 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 1 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 1 * OS1_S1 + 1));
                    *(b + 11 * OS1_S1 + 0) = Y_PA * *(b + 4 * OS1_S1 + 0) +
                                             alpha_Y * *(b + 4 * OS1_S1 + 1);
                    *(b + 12 * OS1_S1 + 0) = Z_PA * *(b + 4 * OS1_S1 + 0) +
                                             alpha_Z * *(b + 4 * OS1_S1 + 1);
                    *(b + 13 * OS1_S1 + 0) = X_PA * *(b + 7 * OS1_S1 + 0) +
                                             alpha_X * *(b + 7 * OS1_S1 + 1);
                    *(b + 14 * OS1_S1 + 0) = Z_PA * *(b + 5 * OS1_S1 + 0) +
                                             alpha_Z * *(b + 5 * OS1_S1 + 1);
                    *(b + 15 * OS1_S1 + 0) = X_PA * *(b + 9 * OS1_S1 + 0) +
                                             alpha_X * *(b + 9 * OS1_S1 + 1);
                    *(b + 16 * OS1_S1 + 0) =
                        Y_PA * *(b + 7 * OS1_S1 + 0) +
                        alpha_Y * *(b + 7 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 2 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 2 * OS1_S1 + 1));
                    *(b + 17 * OS1_S1 + 0) = Z_PA * *(b + 7 * OS1_S1 + 0) +
                                             alpha_Z * *(b + 7 * OS1_S1 + 1);
                    *(b + 18 * OS1_S1 + 0) = Y_PA * *(b + 9 * OS1_S1 + 0) +
                                             alpha_Y * *(b + 9 * OS1_S1 + 1);
                    *(b + 19 * OS1_S1 + 0) =
                        Z_PA * *(b + 9 * OS1_S1 + 0) +
                        alpha_Z * *(b + 9 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 3 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 3 * OS1_S1 + 1));
                    if (m > 3) {
                        *(b + 1 * OS1_S1 + 3) = X_PA * *(b + 0 * OS1_S1 + 3) +
                                                alpha_X * *(b + 0 * OS1_S1 + 4);
                        *(b + 2 * OS1_S1 + 3) = Y_PA * *(b + 0 * OS1_S1 + 3) +
                                                alpha_Y * *(b + 0 * OS1_S1 + 4);
                        *(b + 3 * OS1_S1 + 3) = Z_PA * *(b + 0 * OS1_S1 + 3) +
                                                alpha_Z * *(b + 0 * OS1_S1 + 4);
                        *(b + 4 * OS1_S1 + 2) =
                            X_PA * *(b + 1 * OS1_S1 + 2) +
                            alpha_X * *(b + 1 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 0 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 0 * OS1_S1 + 3));
                        *(b + 7 * OS1_S1 + 2) =
                            Y_PA * *(b + 2 * OS1_S1 + 2) +
                            alpha_Y * *(b + 2 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 0 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 0 * OS1_S1 + 3));
                        *(b + 9 * OS1_S1 + 2) =
                            Z_PA * *(b + 3 * OS1_S1 + 2) +
                            alpha_Z * *(b + 3 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 0 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 0 * OS1_S1 + 3));
                        *(b + 10 * OS1_S1 + 1) =
                            X_PA * *(b + 4 * OS1_S1 + 1) +
                            alpha_X * *(b + 4 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 1 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 1 * OS1_S1 + 2));
                        *(b + 11 * OS1_S1 + 1) =
                            Y_PA * *(b + 4 * OS1_S1 + 1) +
                            alpha_Y * *(b + 4 * OS1_S1 + 2);
                        *(b + 12 * OS1_S1 + 1) =
                            Z_PA * *(b + 4 * OS1_S1 + 1) +
                            alpha_Z * *(b + 4 * OS1_S1 + 2);
                        *(b + 13 * OS1_S1 + 1) =
                            X_PA * *(b + 7 * OS1_S1 + 1) +
                            alpha_X * *(b + 7 * OS1_S1 + 2);
                        *(b + 15 * OS1_S1 + 1) =
                            X_PA * *(b + 9 * OS1_S1 + 1) +
                            alpha_X * *(b + 9 * OS1_S1 + 2);
                        *(b + 16 * OS1_S1 + 1) =
                            Y_PA * *(b + 7 * OS1_S1 + 1) +
                            alpha_Y * *(b + 7 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 2 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 2 * OS1_S1 + 2));
                        *(b + 17 * OS1_S1 + 1) =
                            Z_PA * *(b + 7 * OS1_S1 + 1) +
                            alpha_Z * *(b + 7 * OS1_S1 + 2);
                        *(b + 19 * OS1_S1 + 1) =
                            Z_PA * *(b + 9 * OS1_S1 + 1) +
                            alpha_Z * *(b + 9 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 3 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 3 * OS1_S1 + 2));
                        *(b + 20 * OS1_S1 + 0) =
                            X_PA * *(b + 10 * OS1_S1 + 0) +
                            alpha_X * *(b + 10 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 4 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 4 * OS1_S1 + 1));
                        *(b + 21 * OS1_S1 + 0) =
                            Y_PA * *(b + 10 * OS1_S1 + 0) +
                            alpha_Y * *(b + 10 * OS1_S1 + 1);
                        *(b + 22 * OS1_S1 + 0) =
                            Z_PA * *(b + 10 * OS1_S1 + 0) +
                            alpha_Z * *(b + 10 * OS1_S1 + 1);
                        *(b + 23 * OS1_S1 + 0) =
                            Y_PA * *(b + 11 * OS1_S1 + 0) +
                            alpha_Y * *(b + 11 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 4 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 4 * OS1_S1 + 1));
                        *(b + 24 * OS1_S1 + 0) =
                            Z_PA * *(b + 11 * OS1_S1 + 0) +
                            alpha_Z * *(b + 11 * OS1_S1 + 1);
                        *(b + 25 * OS1_S1 + 0) =
                            Z_PA * *(b + 12 * OS1_S1 + 0) +
                            alpha_Z * *(b + 12 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 4 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 4 * OS1_S1 + 1));
                        *(b + 26 * OS1_S1 + 0) =
                            X_PA * *(b + 16 * OS1_S1 + 0) +
                            alpha_X * *(b + 16 * OS1_S1 + 1);
                        *(b + 27 * OS1_S1 + 0) =
                            Z_PA * *(b + 13 * OS1_S1 + 0) +
                            alpha_Z * *(b + 13 * OS1_S1 + 1);
                        *(b + 28 * OS1_S1 + 0) =
                            Y_PA * *(b + 15 * OS1_S1 + 0) +
                            alpha_Y * *(b + 15 * OS1_S1 + 1);
                        *(b + 29 * OS1_S1 + 0) =
                            X_PA * *(b + 19 * OS1_S1 + 0) +
                            alpha_X * *(b + 19 * OS1_S1 + 1);
                        *(b + 30 * OS1_S1 + 0) =
                            Y_PA * *(b + 16 * OS1_S1 + 0) +
                            alpha_Y * *(b + 16 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 7 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 7 * OS1_S1 + 1));
                        *(b + 31 * OS1_S1 + 0) =
                            Z_PA * *(b + 16 * OS1_S1 + 0) +
                            alpha_Z * *(b + 16 * OS1_S1 + 1);
                        *(b + 32 * OS1_S1 + 0) =
                            Z_PA * *(b + 17 * OS1_S1 + 0) +
                            alpha_Z * *(b + 17 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 7 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 7 * OS1_S1 + 1));
                        *(b + 33 * OS1_S1 + 0) =
                            Y_PA * *(b + 19 * OS1_S1 + 0) +
                            alpha_Y * *(b + 19 * OS1_S1 + 1);
                        *(b + 34 * OS1_S1 + 0) =
                            Z_PA * *(b + 19 * OS1_S1 + 0) +
                            alpha_Z * *(b + 19 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 9 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 9 * OS1_S1 + 1));
                    }
                }
            }
            return;
        }
    }
}
