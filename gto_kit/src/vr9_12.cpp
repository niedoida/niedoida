/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/vr.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void vr9_12(const double alpha_over_p,
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
            *(b + 1 * OS1_S1 + 8) =
                X_PA * *(b + 0 * OS1_S1 + 8) + alpha_X * *(b + 0 * OS1_S1 + 9);
            *(b + 2 * OS1_S1 + 8) =
                Y_PA * *(b + 0 * OS1_S1 + 8) + alpha_Y * *(b + 0 * OS1_S1 + 9);
            *(b + 3 * OS1_S1 + 8) =
                Z_PA * *(b + 0 * OS1_S1 + 8) + alpha_Z * *(b + 0 * OS1_S1 + 9);
            *(b + 4 * OS1_S1 + 7) =
                X_PA * *(b + 1 * OS1_S1 + 7) + alpha_X * *(b + 1 * OS1_S1 + 8) +
                one_over_two_p * (*(b + 0 * OS1_S1 + 7) -
                                  alpha_over_p * *(b + 0 * OS1_S1 + 8));
            *(b + 7 * OS1_S1 + 7) =
                Y_PA * *(b + 2 * OS1_S1 + 7) + alpha_Y * *(b + 2 * OS1_S1 + 8) +
                one_over_two_p * (*(b + 0 * OS1_S1 + 7) -
                                  alpha_over_p * *(b + 0 * OS1_S1 + 8));
            *(b + 9 * OS1_S1 + 7) =
                Z_PA * *(b + 3 * OS1_S1 + 7) + alpha_Z * *(b + 3 * OS1_S1 + 8) +
                one_over_two_p * (*(b + 0 * OS1_S1 + 7) -
                                  alpha_over_p * *(b + 0 * OS1_S1 + 8));
            *(b + 10 * OS1_S1 + 6) = X_PA * *(b + 4 * OS1_S1 + 6) +
                                     alpha_X * *(b + 4 * OS1_S1 + 7) +
                                     2 * one_over_two_p *
                                         (*(b + 1 * OS1_S1 + 6) -
                                          alpha_over_p * *(b + 1 * OS1_S1 + 7));
            *(b + 16 * OS1_S1 + 6) = Y_PA * *(b + 7 * OS1_S1 + 6) +
                                     alpha_Y * *(b + 7 * OS1_S1 + 7) +
                                     2 * one_over_two_p *
                                         (*(b + 2 * OS1_S1 + 6) -
                                          alpha_over_p * *(b + 2 * OS1_S1 + 7));
            *(b + 19 * OS1_S1 + 6) = Z_PA * *(b + 9 * OS1_S1 + 6) +
                                     alpha_Z * *(b + 9 * OS1_S1 + 7) +
                                     2 * one_over_two_p *
                                         (*(b + 3 * OS1_S1 + 6) -
                                          alpha_over_p * *(b + 3 * OS1_S1 + 7));
            *(b + 20 * OS1_S1 + 5) = X_PA * *(b + 10 * OS1_S1 + 5) +
                                     alpha_X * *(b + 10 * OS1_S1 + 6) +
                                     3 * one_over_two_p *
                                         (*(b + 4 * OS1_S1 + 5) -
                                          alpha_over_p * *(b + 4 * OS1_S1 + 6));
            *(b + 21 * OS1_S1 + 5) = Y_PA * *(b + 10 * OS1_S1 + 5) +
                                     alpha_Y * *(b + 10 * OS1_S1 + 6);
            *(b + 30 * OS1_S1 + 5) = Y_PA * *(b + 16 * OS1_S1 + 5) +
                                     alpha_Y * *(b + 16 * OS1_S1 + 6) +
                                     3 * one_over_two_p *
                                         (*(b + 7 * OS1_S1 + 5) -
                                          alpha_over_p * *(b + 7 * OS1_S1 + 6));
            *(b + 34 * OS1_S1 + 5) = Z_PA * *(b + 19 * OS1_S1 + 5) +
                                     alpha_Z * *(b + 19 * OS1_S1 + 6) +
                                     3 * one_over_two_p *
                                         (*(b + 9 * OS1_S1 + 5) -
                                          alpha_over_p * *(b + 9 * OS1_S1 + 6));
            *(b + 35 * OS1_S1 + 4) =
                X_PA * *(b + 20 * OS1_S1 + 4) +
                alpha_X * *(b + 20 * OS1_S1 + 5) +
                4 * one_over_two_p *
                    (*(b + 10 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 10 * OS1_S1 + 5));
            *(b + 36 * OS1_S1 + 4) = Y_PA * *(b + 20 * OS1_S1 + 4) +
                                     alpha_Y * *(b + 20 * OS1_S1 + 5);
            *(b + 37 * OS1_S1 + 4) = Z_PA * *(b + 20 * OS1_S1 + 4) +
                                     alpha_Z * *(b + 20 * OS1_S1 + 5);
            *(b + 38 * OS1_S1 + 4) =
                Y_PA * *(b + 21 * OS1_S1 + 4) +
                alpha_Y * *(b + 21 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 10 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 10 * OS1_S1 + 5));
            *(b + 45 * OS1_S1 + 4) = X_PA * *(b + 30 * OS1_S1 + 4) +
                                     alpha_X * *(b + 30 * OS1_S1 + 5);
            *(b + 49 * OS1_S1 + 4) = X_PA * *(b + 34 * OS1_S1 + 4) +
                                     alpha_X * *(b + 34 * OS1_S1 + 5);
            *(b + 50 * OS1_S1 + 4) =
                Y_PA * *(b + 30 * OS1_S1 + 4) +
                alpha_Y * *(b + 30 * OS1_S1 + 5) +
                4 * one_over_two_p *
                    (*(b + 16 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 16 * OS1_S1 + 5));
            *(b + 51 * OS1_S1 + 4) = Z_PA * *(b + 30 * OS1_S1 + 4) +
                                     alpha_Z * *(b + 30 * OS1_S1 + 5);
            *(b + 54 * OS1_S1 + 4) = Y_PA * *(b + 34 * OS1_S1 + 4) +
                                     alpha_Y * *(b + 34 * OS1_S1 + 5);
            *(b + 55 * OS1_S1 + 4) =
                Z_PA * *(b + 34 * OS1_S1 + 4) +
                alpha_Z * *(b + 34 * OS1_S1 + 5) +
                4 * one_over_two_p *
                    (*(b + 19 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 19 * OS1_S1 + 5));
            *(b + 56 * OS1_S1 + 3) =
                X_PA * *(b + 35 * OS1_S1 + 3) +
                alpha_X * *(b + 35 * OS1_S1 + 4) +
                5 * one_over_two_p *
                    (*(b + 20 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 20 * OS1_S1 + 4));
            *(b + 57 * OS1_S1 + 3) = Y_PA * *(b + 35 * OS1_S1 + 3) +
                                     alpha_Y * *(b + 35 * OS1_S1 + 4);
            *(b + 58 * OS1_S1 + 3) = Z_PA * *(b + 35 * OS1_S1 + 3) +
                                     alpha_Z * *(b + 35 * OS1_S1 + 4);
            *(b + 59 * OS1_S1 + 3) =
                Y_PA * *(b + 36 * OS1_S1 + 3) +
                alpha_Y * *(b + 36 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 20 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 20 * OS1_S1 + 4));
            *(b + 61 * OS1_S1 + 3) =
                Z_PA * *(b + 37 * OS1_S1 + 3) +
                alpha_Z * *(b + 37 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 20 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 20 * OS1_S1 + 4));
            *(b + 62 * OS1_S1 + 3) =
                Y_PA * *(b + 38 * OS1_S1 + 3) +
                alpha_Y * *(b + 38 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 21 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 21 * OS1_S1 + 4));
            *(b + 66 * OS1_S1 + 3) =
                X_PA * *(b + 45 * OS1_S1 + 3) +
                alpha_X * *(b + 45 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 30 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 30 * OS1_S1 + 4));
            *(b + 70 * OS1_S1 + 3) =
                X_PA * *(b + 49 * OS1_S1 + 3) +
                alpha_X * *(b + 49 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 34 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 34 * OS1_S1 + 4));
            *(b + 71 * OS1_S1 + 3) = X_PA * *(b + 50 * OS1_S1 + 3) +
                                     alpha_X * *(b + 50 * OS1_S1 + 4);
            *(b + 76 * OS1_S1 + 3) = X_PA * *(b + 55 * OS1_S1 + 3) +
                                     alpha_X * *(b + 55 * OS1_S1 + 4);
            *(b + 77 * OS1_S1 + 3) =
                Y_PA * *(b + 50 * OS1_S1 + 3) +
                alpha_Y * *(b + 50 * OS1_S1 + 4) +
                5 * one_over_two_p *
                    (*(b + 30 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 30 * OS1_S1 + 4));
            *(b + 78 * OS1_S1 + 3) = Z_PA * *(b + 50 * OS1_S1 + 3) +
                                     alpha_Z * *(b + 50 * OS1_S1 + 4);
            *(b + 79 * OS1_S1 + 3) =
                Z_PA * *(b + 51 * OS1_S1 + 3) +
                alpha_Z * *(b + 51 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 30 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 30 * OS1_S1 + 4));
            *(b + 81 * OS1_S1 + 3) =
                Y_PA * *(b + 54 * OS1_S1 + 3) +
                alpha_Y * *(b + 54 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 34 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 34 * OS1_S1 + 4));
            *(b + 82 * OS1_S1 + 3) = Y_PA * *(b + 55 * OS1_S1 + 3) +
                                     alpha_Y * *(b + 55 * OS1_S1 + 4);
            *(b + 83 * OS1_S1 + 3) =
                Z_PA * *(b + 55 * OS1_S1 + 3) +
                alpha_Z * *(b + 55 * OS1_S1 + 4) +
                5 * one_over_two_p *
                    (*(b + 34 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 34 * OS1_S1 + 4));
            *(b + 84 * OS1_S1 + 2) =
                X_PA * *(b + 56 * OS1_S1 + 2) +
                alpha_X * *(b + 56 * OS1_S1 + 3) +
                6 * one_over_two_p *
                    (*(b + 35 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 35 * OS1_S1 + 3));
            *(b + 85 * OS1_S1 + 2) = Y_PA * *(b + 56 * OS1_S1 + 2) +
                                     alpha_Y * *(b + 56 * OS1_S1 + 3);
            *(b + 86 * OS1_S1 + 2) = Z_PA * *(b + 56 * OS1_S1 + 2) +
                                     alpha_Z * *(b + 56 * OS1_S1 + 3);
            *(b + 87 * OS1_S1 + 2) =
                Y_PA * *(b + 57 * OS1_S1 + 2) +
                alpha_Y * *(b + 57 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 35 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 35 * OS1_S1 + 3));
            *(b + 89 * OS1_S1 + 2) =
                Z_PA * *(b + 58 * OS1_S1 + 2) +
                alpha_Z * *(b + 58 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 35 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 35 * OS1_S1 + 3));
            *(b + 90 * OS1_S1 + 2) =
                Y_PA * *(b + 59 * OS1_S1 + 2) +
                alpha_Y * *(b + 59 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 36 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 36 * OS1_S1 + 3));
            *(b + 93 * OS1_S1 + 2) =
                Z_PA * *(b + 61 * OS1_S1 + 2) +
                alpha_Z * *(b + 61 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 37 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 37 * OS1_S1 + 3));
            *(b + 94 * OS1_S1 + 2) =
                X_PA * *(b + 66 * OS1_S1 + 2) +
                alpha_X * *(b + 66 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 45 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 45 * OS1_S1 + 3));
            *(b + 95 * OS1_S1 + 2) = Z_PA * *(b + 62 * OS1_S1 + 2) +
                                     alpha_Z * *(b + 62 * OS1_S1 + 3);
            *(b + 98 * OS1_S1 + 2) =
                X_PA * *(b + 70 * OS1_S1 + 2) +
                alpha_X * *(b + 70 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 49 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 49 * OS1_S1 + 3));
            *(b + 99 * OS1_S1 + 2) =
                X_PA * *(b + 71 * OS1_S1 + 2) +
                alpha_X * *(b + 71 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 50 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 50 * OS1_S1 + 3));
            *(b + 104 * OS1_S1 + 2) =
                X_PA * *(b + 76 * OS1_S1 + 2) +
                alpha_X * *(b + 76 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 55 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 55 * OS1_S1 + 3));
            *(b + 105 * OS1_S1 + 2) = X_PA * *(b + 77 * OS1_S1 + 2) +
                                      alpha_X * *(b + 77 * OS1_S1 + 3);
            *(b + 111 * OS1_S1 + 2) = X_PA * *(b + 83 * OS1_S1 + 2) +
                                      alpha_X * *(b + 83 * OS1_S1 + 3);
            *(b + 112 * OS1_S1 + 2) =
                Y_PA * *(b + 77 * OS1_S1 + 2) +
                alpha_Y * *(b + 77 * OS1_S1 + 3) +
                6 * one_over_two_p *
                    (*(b + 50 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 50 * OS1_S1 + 3));
            *(b + 113 * OS1_S1 + 2) = Z_PA * *(b + 77 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 77 * OS1_S1 + 3);
            *(b + 114 * OS1_S1 + 2) =
                Z_PA * *(b + 78 * OS1_S1 + 2) +
                alpha_Z * *(b + 78 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 50 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 50 * OS1_S1 + 3));
            *(b + 115 * OS1_S1 + 2) =
                Z_PA * *(b + 79 * OS1_S1 + 2) +
                alpha_Z * *(b + 79 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 51 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 51 * OS1_S1 + 3));
            *(b + 116 * OS1_S1 + 2) =
                Y_PA * *(b + 81 * OS1_S1 + 2) +
                alpha_Y * *(b + 81 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 54 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 54 * OS1_S1 + 3));
            *(b + 117 * OS1_S1 + 2) =
                Y_PA * *(b + 82 * OS1_S1 + 2) +
                alpha_Y * *(b + 82 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 55 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 55 * OS1_S1 + 3));
            *(b + 118 * OS1_S1 + 2) = Y_PA * *(b + 83 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 83 * OS1_S1 + 3);
            *(b + 119 * OS1_S1 + 2) =
                Z_PA * *(b + 83 * OS1_S1 + 2) +
                alpha_Z * *(b + 83 * OS1_S1 + 3) +
                6 * one_over_two_p *
                    (*(b + 55 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 55 * OS1_S1 + 3));
            *(b + 120 * OS1_S1 + 1) =
                X_PA * *(b + 84 * OS1_S1 + 1) +
                alpha_X * *(b + 84 * OS1_S1 + 2) +
                7 * one_over_two_p *
                    (*(b + 56 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 56 * OS1_S1 + 2));
            *(b + 121 * OS1_S1 + 1) = Y_PA * *(b + 84 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 84 * OS1_S1 + 2);
            *(b + 122 * OS1_S1 + 1) = Z_PA * *(b + 84 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 84 * OS1_S1 + 2);
            *(b + 123 * OS1_S1 + 1) =
                Y_PA * *(b + 85 * OS1_S1 + 1) +
                alpha_Y * *(b + 85 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 56 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 56 * OS1_S1 + 2));
            *(b + 125 * OS1_S1 + 1) =
                Z_PA * *(b + 86 * OS1_S1 + 1) +
                alpha_Z * *(b + 86 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 56 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 56 * OS1_S1 + 2));
            *(b + 126 * OS1_S1 + 1) =
                Y_PA * *(b + 87 * OS1_S1 + 1) +
                alpha_Y * *(b + 87 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 57 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 57 * OS1_S1 + 2));
            *(b + 127 * OS1_S1 + 1) = Z_PA * *(b + 87 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 87 * OS1_S1 + 2);
            *(b + 129 * OS1_S1 + 1) =
                Z_PA * *(b + 89 * OS1_S1 + 1) +
                alpha_Z * *(b + 89 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 58 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 58 * OS1_S1 + 2));
            *(b + 130 * OS1_S1 + 1) =
                Y_PA * *(b + 90 * OS1_S1 + 1) +
                alpha_Y * *(b + 90 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 59 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 59 * OS1_S1 + 2));
            *(b + 131 * OS1_S1 + 1) = Z_PA * *(b + 90 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 90 * OS1_S1 + 2);
            *(b + 133 * OS1_S1 + 1) = Y_PA * *(b + 93 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 93 * OS1_S1 + 2);
            *(b + 134 * OS1_S1 + 1) =
                Z_PA * *(b + 93 * OS1_S1 + 1) +
                alpha_Z * *(b + 93 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 61 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 61 * OS1_S1 + 2));
            *(b + 135 * OS1_S1 + 1) =
                X_PA * *(b + 99 * OS1_S1 + 1) +
                alpha_X * *(b + 99 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 71 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 71 * OS1_S1 + 2));
            *(b + 136 * OS1_S1 + 1) = Z_PA * *(b + 94 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 94 * OS1_S1 + 2);
            *(b + 137 * OS1_S1 + 1) =
                Z_PA * *(b + 95 * OS1_S1 + 1) +
                alpha_Z * *(b + 95 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 62 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 62 * OS1_S1 + 2));
            *(b + 139 * OS1_S1 + 1) = Y_PA * *(b + 98 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 98 * OS1_S1 + 2);
            *(b + 140 * OS1_S1 + 1) =
                X_PA * *(b + 104 * OS1_S1 + 1) +
                alpha_X * *(b + 104 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 76 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 76 * OS1_S1 + 2));
            *(b + 141 * OS1_S1 + 1) =
                X_PA * *(b + 105 * OS1_S1 + 1) +
                alpha_X * *(b + 105 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 77 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 77 * OS1_S1 + 2));
            *(b + 142 * OS1_S1 + 1) = Z_PA * *(b + 99 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 99 * OS1_S1 + 2);
            *(b + 146 * OS1_S1 + 1) = Y_PA * *(b + 104 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 104 * OS1_S1 + 2);
            *(b + 147 * OS1_S1 + 1) =
                X_PA * *(b + 111 * OS1_S1 + 1) +
                alpha_X * *(b + 111 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 83 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 83 * OS1_S1 + 2));
            *(b + 148 * OS1_S1 + 1) = X_PA * *(b + 112 * OS1_S1 + 1) +
                                      alpha_X * *(b + 112 * OS1_S1 + 2);
            *(b + 151 * OS1_S1 + 1) = X_PA * *(b + 115 * OS1_S1 + 1) +
                                      alpha_X * *(b + 115 * OS1_S1 + 2);
            *(b + 152 * OS1_S1 + 1) = X_PA * *(b + 116 * OS1_S1 + 1) +
                                      alpha_X * *(b + 116 * OS1_S1 + 2);
            *(b + 155 * OS1_S1 + 1) = X_PA * *(b + 119 * OS1_S1 + 1) +
                                      alpha_X * *(b + 119 * OS1_S1 + 2);
            *(b + 156 * OS1_S1 + 1) =
                Y_PA * *(b + 112 * OS1_S1 + 1) +
                alpha_Y * *(b + 112 * OS1_S1 + 2) +
                7 * one_over_two_p *
                    (*(b + 77 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 77 * OS1_S1 + 2));
            *(b + 157 * OS1_S1 + 1) = Z_PA * *(b + 112 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 112 * OS1_S1 + 2);
            *(b + 158 * OS1_S1 + 1) =
                Z_PA * *(b + 113 * OS1_S1 + 1) +
                alpha_Z * *(b + 113 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 77 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 77 * OS1_S1 + 2));
            *(b + 159 * OS1_S1 + 1) =
                Z_PA * *(b + 114 * OS1_S1 + 1) +
                alpha_Z * *(b + 114 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 78 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 78 * OS1_S1 + 2));
            *(b + 160 * OS1_S1 + 1) =
                Z_PA * *(b + 115 * OS1_S1 + 1) +
                alpha_Z * *(b + 115 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 79 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 79 * OS1_S1 + 2));
            *(b + 161 * OS1_S1 + 1) =
                Y_PA * *(b + 117 * OS1_S1 + 1) +
                alpha_Y * *(b + 117 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 82 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 82 * OS1_S1 + 2));
            *(b + 162 * OS1_S1 + 1) =
                Y_PA * *(b + 118 * OS1_S1 + 1) +
                alpha_Y * *(b + 118 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 83 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 83 * OS1_S1 + 2));
            *(b + 163 * OS1_S1 + 1) = Y_PA * *(b + 119 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 119 * OS1_S1 + 2);
            *(b + 164 * OS1_S1 + 1) =
                Z_PA * *(b + 119 * OS1_S1 + 1) +
                alpha_Z * *(b + 119 * OS1_S1 + 2) +
                7 * one_over_two_p *
                    (*(b + 83 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 83 * OS1_S1 + 2));
            *(b + 165 * OS1_S1 + 0) =
                X_PA * *(b + 120 * OS1_S1 + 0) +
                alpha_X * *(b + 120 * OS1_S1 + 1) +
                8 * one_over_two_p *
                    (*(b + 84 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 84 * OS1_S1 + 1));
            *(b + 166 * OS1_S1 + 0) = Y_PA * *(b + 120 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 120 * OS1_S1 + 1);
            *(b + 167 * OS1_S1 + 0) = Z_PA * *(b + 120 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 120 * OS1_S1 + 1);
            *(b + 168 * OS1_S1 + 0) =
                Y_PA * *(b + 121 * OS1_S1 + 0) +
                alpha_Y * *(b + 121 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 84 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 84 * OS1_S1 + 1));
            *(b + 169 * OS1_S1 + 0) = Z_PA * *(b + 121 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 121 * OS1_S1 + 1);
            *(b + 170 * OS1_S1 + 0) =
                Z_PA * *(b + 122 * OS1_S1 + 0) +
                alpha_Z * *(b + 122 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 84 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 84 * OS1_S1 + 1));
            *(b + 171 * OS1_S1 + 0) =
                Y_PA * *(b + 123 * OS1_S1 + 0) +
                alpha_Y * *(b + 123 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 85 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 85 * OS1_S1 + 1));
            *(b + 172 * OS1_S1 + 0) = Z_PA * *(b + 123 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 123 * OS1_S1 + 1);
            *(b + 173 * OS1_S1 + 0) = Y_PA * *(b + 125 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 125 * OS1_S1 + 1);
            *(b + 174 * OS1_S1 + 0) =
                Z_PA * *(b + 125 * OS1_S1 + 0) +
                alpha_Z * *(b + 125 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 86 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 86 * OS1_S1 + 1));
            *(b + 175 * OS1_S1 + 0) =
                Y_PA * *(b + 126 * OS1_S1 + 0) +
                alpha_Y * *(b + 126 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 87 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 87 * OS1_S1 + 1));
            *(b + 176 * OS1_S1 + 0) = Z_PA * *(b + 126 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 126 * OS1_S1 + 1);
            *(b + 177 * OS1_S1 + 0) =
                Z_PA * *(b + 127 * OS1_S1 + 0) +
                alpha_Z * *(b + 127 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 87 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 87 * OS1_S1 + 1));
            *(b + 178 * OS1_S1 + 0) = Y_PA * *(b + 129 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 129 * OS1_S1 + 1);
            *(b + 179 * OS1_S1 + 0) =
                Z_PA * *(b + 129 * OS1_S1 + 0) +
                alpha_Z * *(b + 129 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 89 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 89 * OS1_S1 + 1));
            *(b + 180 * OS1_S1 + 0) =
                X_PA * *(b + 135 * OS1_S1 + 0) +
                alpha_X * *(b + 135 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 99 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 99 * OS1_S1 + 1));
            *(b + 181 * OS1_S1 + 0) = Z_PA * *(b + 130 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 130 * OS1_S1 + 1);
            *(b + 182 * OS1_S1 + 0) =
                Z_PA * *(b + 131 * OS1_S1 + 0) +
                alpha_Z * *(b + 131 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 90 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 90 * OS1_S1 + 1));
            *(b + 183 * OS1_S1 + 0) =
                Y_PA * *(b + 133 * OS1_S1 + 0) +
                alpha_Y * *(b + 133 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 93 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 93 * OS1_S1 + 1));
            *(b + 184 * OS1_S1 + 0) = Y_PA * *(b + 134 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 134 * OS1_S1 + 1);
            *(b + 185 * OS1_S1 + 0) =
                X_PA * *(b + 140 * OS1_S1 + 0) +
                alpha_X * *(b + 140 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 104 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 104 * OS1_S1 + 1));
            *(b + 186 * OS1_S1 + 0) =
                X_PA * *(b + 141 * OS1_S1 + 0) +
                alpha_X * *(b + 141 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 105 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 105 * OS1_S1 + 1));
            *(b + 187 * OS1_S1 + 0) = Z_PA * *(b + 135 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 135 * OS1_S1 + 1);
            *(b + 188 * OS1_S1 + 0) =
                Z_PA * *(b + 136 * OS1_S1 + 0) +
                alpha_Z * *(b + 136 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 94 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 94 * OS1_S1 + 1));
            *(b + 189 * OS1_S1 + 0) =
                Z_PA * *(b + 137 * OS1_S1 + 0) +
                alpha_Z * *(b + 137 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 95 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 95 * OS1_S1 + 1));
            *(b + 190 * OS1_S1 + 0) =
                Y_PA * *(b + 139 * OS1_S1 + 0) +
                alpha_Y * *(b + 139 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 98 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 98 * OS1_S1 + 1));
            *(b + 191 * OS1_S1 + 0) = Y_PA * *(b + 140 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 140 * OS1_S1 + 1);
            *(b + 192 * OS1_S1 + 0) =
                X_PA * *(b + 147 * OS1_S1 + 0) +
                alpha_X * *(b + 147 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 111 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 111 * OS1_S1 + 1));
            *(b + 193 * OS1_S1 + 0) =
                X_PA * *(b + 148 * OS1_S1 + 0) +
                alpha_X * *(b + 148 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 112 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 112 * OS1_S1 + 1));
            *(b + 194 * OS1_S1 + 0) = Z_PA * *(b + 141 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 141 * OS1_S1 + 1);
            *(b + 195 * OS1_S1 + 0) =
                Z_PA * *(b + 142 * OS1_S1 + 0) +
                alpha_Z * *(b + 142 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 99 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 99 * OS1_S1 + 1));
            *(b + 196 * OS1_S1 + 0) =
                X_PA * *(b + 151 * OS1_S1 + 0) +
                alpha_X * *(b + 151 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 115 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 115 * OS1_S1 + 1));
            *(b + 197 * OS1_S1 + 0) =
                X_PA * *(b + 152 * OS1_S1 + 0) +
                alpha_X * *(b + 152 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 116 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 116 * OS1_S1 + 1));
            *(b + 198 * OS1_S1 + 0) =
                Y_PA * *(b + 146 * OS1_S1 + 0) +
                alpha_Y * *(b + 146 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 104 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 104 * OS1_S1 + 1));
            *(b + 199 * OS1_S1 + 0) = Y_PA * *(b + 147 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 147 * OS1_S1 + 1);
            *(b + 200 * OS1_S1 + 0) =
                X_PA * *(b + 155 * OS1_S1 + 0) +
                alpha_X * *(b + 155 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 119 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 119 * OS1_S1 + 1));
            *(b + 201 * OS1_S1 + 0) = X_PA * *(b + 156 * OS1_S1 + 0) +
                                      alpha_X * *(b + 156 * OS1_S1 + 1);
            *(b + 202 * OS1_S1 + 0) = Z_PA * *(b + 148 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 148 * OS1_S1 + 1);
            *(b + 203 * OS1_S1 + 0) = X_PA * *(b + 158 * OS1_S1 + 0) +
                                      alpha_X * *(b + 158 * OS1_S1 + 1);
            *(b + 204 * OS1_S1 + 0) = X_PA * *(b + 159 * OS1_S1 + 0) +
                                      alpha_X * *(b + 159 * OS1_S1 + 1);
            *(b + 205 * OS1_S1 + 0) = X_PA * *(b + 160 * OS1_S1 + 0) +
                                      alpha_X * *(b + 160 * OS1_S1 + 1);
            *(b + 206 * OS1_S1 + 0) = X_PA * *(b + 161 * OS1_S1 + 0) +
                                      alpha_X * *(b + 161 * OS1_S1 + 1);
            *(b + 207 * OS1_S1 + 0) = X_PA * *(b + 162 * OS1_S1 + 0) +
                                      alpha_X * *(b + 162 * OS1_S1 + 1);
            *(b + 208 * OS1_S1 + 0) = Y_PA * *(b + 155 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 155 * OS1_S1 + 1);
            *(b + 209 * OS1_S1 + 0) = X_PA * *(b + 164 * OS1_S1 + 0) +
                                      alpha_X * *(b + 164 * OS1_S1 + 1);
            *(b + 210 * OS1_S1 + 0) =
                Y_PA * *(b + 156 * OS1_S1 + 0) +
                alpha_Y * *(b + 156 * OS1_S1 + 1) +
                8 * one_over_two_p *
                    (*(b + 112 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 112 * OS1_S1 + 1));
            *(b + 211 * OS1_S1 + 0) = Z_PA * *(b + 156 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 156 * OS1_S1 + 1);
            *(b + 212 * OS1_S1 + 0) =
                Z_PA * *(b + 157 * OS1_S1 + 0) +
                alpha_Z * *(b + 157 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 112 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 112 * OS1_S1 + 1));
            *(b + 213 * OS1_S1 + 0) =
                Z_PA * *(b + 158 * OS1_S1 + 0) +
                alpha_Z * *(b + 158 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 113 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 113 * OS1_S1 + 1));
            *(b + 214 * OS1_S1 + 0) =
                Z_PA * *(b + 159 * OS1_S1 + 0) +
                alpha_Z * *(b + 159 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 114 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 114 * OS1_S1 + 1));
            *(b + 215 * OS1_S1 + 0) =
                Y_PA * *(b + 161 * OS1_S1 + 0) +
                alpha_Y * *(b + 161 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 117 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 117 * OS1_S1 + 1));
            *(b + 216 * OS1_S1 + 0) =
                Y_PA * *(b + 162 * OS1_S1 + 0) +
                alpha_Y * *(b + 162 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 118 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 118 * OS1_S1 + 1));
            *(b + 217 * OS1_S1 + 0) =
                Y_PA * *(b + 163 * OS1_S1 + 0) +
                alpha_Y * *(b + 163 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 119 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 119 * OS1_S1 + 1));
            *(b + 218 * OS1_S1 + 0) = Y_PA * *(b + 164 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 164 * OS1_S1 + 1);
            *(b + 219 * OS1_S1 + 0) =
                Z_PA * *(b + 164 * OS1_S1 + 0) +
                alpha_Z * *(b + 164 * OS1_S1 + 1) +
                8 * one_over_two_p *
                    (*(b + 119 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 119 * OS1_S1 + 1));
            if (m > 9) {
                *(b + 1 * OS1_S1 + 9) = X_PA * *(b + 0 * OS1_S1 + 9) +
                                        alpha_X * *(b + 0 * OS1_S1 + 10);
                *(b + 2 * OS1_S1 + 9) = Y_PA * *(b + 0 * OS1_S1 + 9) +
                                        alpha_Y * *(b + 0 * OS1_S1 + 10);
                *(b + 3 * OS1_S1 + 9) = Z_PA * *(b + 0 * OS1_S1 + 9) +
                                        alpha_Z * *(b + 0 * OS1_S1 + 10);
                *(b + 4 * OS1_S1 + 8) =
                    X_PA * *(b + 1 * OS1_S1 + 8) +
                    alpha_X * *(b + 1 * OS1_S1 + 9) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 8) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 9));
                *(b + 7 * OS1_S1 + 8) =
                    Y_PA * *(b + 2 * OS1_S1 + 8) +
                    alpha_Y * *(b + 2 * OS1_S1 + 9) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 8) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 9));
                *(b + 9 * OS1_S1 + 8) =
                    Z_PA * *(b + 3 * OS1_S1 + 8) +
                    alpha_Z * *(b + 3 * OS1_S1 + 9) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 8) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 9));
                *(b + 10 * OS1_S1 + 7) =
                    X_PA * *(b + 4 * OS1_S1 + 7) +
                    alpha_X * *(b + 4 * OS1_S1 + 8) +
                    2 * one_over_two_p *
                        (*(b + 1 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 1 * OS1_S1 + 8));
                *(b + 16 * OS1_S1 + 7) =
                    Y_PA * *(b + 7 * OS1_S1 + 7) +
                    alpha_Y * *(b + 7 * OS1_S1 + 8) +
                    2 * one_over_two_p *
                        (*(b + 2 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 2 * OS1_S1 + 8));
                *(b + 19 * OS1_S1 + 7) =
                    Z_PA * *(b + 9 * OS1_S1 + 7) +
                    alpha_Z * *(b + 9 * OS1_S1 + 8) +
                    2 * one_over_two_p *
                        (*(b + 3 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 3 * OS1_S1 + 8));
                *(b + 20 * OS1_S1 + 6) =
                    X_PA * *(b + 10 * OS1_S1 + 6) +
                    alpha_X * *(b + 10 * OS1_S1 + 7) +
                    3 * one_over_two_p *
                        (*(b + 4 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 4 * OS1_S1 + 7));
                *(b + 30 * OS1_S1 + 6) =
                    Y_PA * *(b + 16 * OS1_S1 + 6) +
                    alpha_Y * *(b + 16 * OS1_S1 + 7) +
                    3 * one_over_two_p *
                        (*(b + 7 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 7 * OS1_S1 + 7));
                *(b + 34 * OS1_S1 + 6) =
                    Z_PA * *(b + 19 * OS1_S1 + 6) +
                    alpha_Z * *(b + 19 * OS1_S1 + 7) +
                    3 * one_over_two_p *
                        (*(b + 9 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 9 * OS1_S1 + 7));
                *(b + 35 * OS1_S1 + 5) =
                    X_PA * *(b + 20 * OS1_S1 + 5) +
                    alpha_X * *(b + 20 * OS1_S1 + 6) +
                    4 * one_over_two_p *
                        (*(b + 10 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 10 * OS1_S1 + 6));
                *(b + 36 * OS1_S1 + 5) = Y_PA * *(b + 20 * OS1_S1 + 5) +
                                         alpha_Y * *(b + 20 * OS1_S1 + 6);
                *(b + 37 * OS1_S1 + 5) = Z_PA * *(b + 20 * OS1_S1 + 5) +
                                         alpha_Z * *(b + 20 * OS1_S1 + 6);
                *(b + 45 * OS1_S1 + 5) = X_PA * *(b + 30 * OS1_S1 + 5) +
                                         alpha_X * *(b + 30 * OS1_S1 + 6);
                *(b + 49 * OS1_S1 + 5) = X_PA * *(b + 34 * OS1_S1 + 5) +
                                         alpha_X * *(b + 34 * OS1_S1 + 6);
                *(b + 50 * OS1_S1 + 5) =
                    Y_PA * *(b + 30 * OS1_S1 + 5) +
                    alpha_Y * *(b + 30 * OS1_S1 + 6) +
                    4 * one_over_two_p *
                        (*(b + 16 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 16 * OS1_S1 + 6));
                *(b + 51 * OS1_S1 + 5) = Z_PA * *(b + 30 * OS1_S1 + 5) +
                                         alpha_Z * *(b + 30 * OS1_S1 + 6);
                *(b + 55 * OS1_S1 + 5) =
                    Z_PA * *(b + 34 * OS1_S1 + 5) +
                    alpha_Z * *(b + 34 * OS1_S1 + 6) +
                    4 * one_over_two_p *
                        (*(b + 19 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 19 * OS1_S1 + 6));
                *(b + 56 * OS1_S1 + 4) =
                    X_PA * *(b + 35 * OS1_S1 + 4) +
                    alpha_X * *(b + 35 * OS1_S1 + 5) +
                    5 * one_over_two_p *
                        (*(b + 20 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 20 * OS1_S1 + 5));
                *(b + 57 * OS1_S1 + 4) = Y_PA * *(b + 35 * OS1_S1 + 4) +
                                         alpha_Y * *(b + 35 * OS1_S1 + 5);
                *(b + 58 * OS1_S1 + 4) = Z_PA * *(b + 35 * OS1_S1 + 4) +
                                         alpha_Z * *(b + 35 * OS1_S1 + 5);
                *(b + 59 * OS1_S1 + 4) =
                    Y_PA * *(b + 36 * OS1_S1 + 4) +
                    alpha_Y * *(b + 36 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 20 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 20 * OS1_S1 + 5));
                *(b + 61 * OS1_S1 + 4) =
                    Z_PA * *(b + 37 * OS1_S1 + 4) +
                    alpha_Z * *(b + 37 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 20 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 20 * OS1_S1 + 5));
                *(b + 66 * OS1_S1 + 4) =
                    X_PA * *(b + 45 * OS1_S1 + 4) +
                    alpha_X * *(b + 45 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 30 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 30 * OS1_S1 + 5));
                *(b + 70 * OS1_S1 + 4) =
                    X_PA * *(b + 49 * OS1_S1 + 4) +
                    alpha_X * *(b + 49 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 34 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 34 * OS1_S1 + 5));
                *(b + 71 * OS1_S1 + 4) = X_PA * *(b + 50 * OS1_S1 + 4) +
                                         alpha_X * *(b + 50 * OS1_S1 + 5);
                *(b + 76 * OS1_S1 + 4) = X_PA * *(b + 55 * OS1_S1 + 4) +
                                         alpha_X * *(b + 55 * OS1_S1 + 5);
                *(b + 77 * OS1_S1 + 4) =
                    Y_PA * *(b + 50 * OS1_S1 + 4) +
                    alpha_Y * *(b + 50 * OS1_S1 + 5) +
                    5 * one_over_two_p *
                        (*(b + 30 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 30 * OS1_S1 + 5));
                *(b + 78 * OS1_S1 + 4) = Z_PA * *(b + 50 * OS1_S1 + 4) +
                                         alpha_Z * *(b + 50 * OS1_S1 + 5);
                *(b + 79 * OS1_S1 + 4) =
                    Z_PA * *(b + 51 * OS1_S1 + 4) +
                    alpha_Z * *(b + 51 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 30 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 30 * OS1_S1 + 5));
                *(b + 82 * OS1_S1 + 4) = Y_PA * *(b + 55 * OS1_S1 + 4) +
                                         alpha_Y * *(b + 55 * OS1_S1 + 5);
                *(b + 83 * OS1_S1 + 4) =
                    Z_PA * *(b + 55 * OS1_S1 + 4) +
                    alpha_Z * *(b + 55 * OS1_S1 + 5) +
                    5 * one_over_two_p *
                        (*(b + 34 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 34 * OS1_S1 + 5));
                *(b + 84 * OS1_S1 + 3) =
                    X_PA * *(b + 56 * OS1_S1 + 3) +
                    alpha_X * *(b + 56 * OS1_S1 + 4) +
                    6 * one_over_two_p *
                        (*(b + 35 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 35 * OS1_S1 + 4));
                *(b + 85 * OS1_S1 + 3) = Y_PA * *(b + 56 * OS1_S1 + 3) +
                                         alpha_Y * *(b + 56 * OS1_S1 + 4);
                *(b + 86 * OS1_S1 + 3) = Z_PA * *(b + 56 * OS1_S1 + 3) +
                                         alpha_Z * *(b + 56 * OS1_S1 + 4);
                *(b + 87 * OS1_S1 + 3) =
                    Y_PA * *(b + 57 * OS1_S1 + 3) +
                    alpha_Y * *(b + 57 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 35 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 35 * OS1_S1 + 4));
                *(b + 89 * OS1_S1 + 3) =
                    Z_PA * *(b + 58 * OS1_S1 + 3) +
                    alpha_Z * *(b + 58 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 35 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 35 * OS1_S1 + 4));
                *(b + 90 * OS1_S1 + 3) =
                    Y_PA * *(b + 59 * OS1_S1 + 3) +
                    alpha_Y * *(b + 59 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 36 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 36 * OS1_S1 + 4));
                *(b + 93 * OS1_S1 + 3) =
                    Z_PA * *(b + 61 * OS1_S1 + 3) +
                    alpha_Z * *(b + 61 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 37 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 37 * OS1_S1 + 4));
                *(b + 94 * OS1_S1 + 3) =
                    X_PA * *(b + 66 * OS1_S1 + 3) +
                    alpha_X * *(b + 66 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 45 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 45 * OS1_S1 + 4));
                *(b + 98 * OS1_S1 + 3) =
                    X_PA * *(b + 70 * OS1_S1 + 3) +
                    alpha_X * *(b + 70 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 49 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 49 * OS1_S1 + 4));
                *(b + 99 * OS1_S1 + 3) =
                    X_PA * *(b + 71 * OS1_S1 + 3) +
                    alpha_X * *(b + 71 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 50 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 50 * OS1_S1 + 4));
                *(b + 104 * OS1_S1 + 3) =
                    X_PA * *(b + 76 * OS1_S1 + 3) +
                    alpha_X * *(b + 76 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 55 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 55 * OS1_S1 + 4));
                *(b + 105 * OS1_S1 + 3) = X_PA * *(b + 77 * OS1_S1 + 3) +
                                          alpha_X * *(b + 77 * OS1_S1 + 4);
                *(b + 111 * OS1_S1 + 3) = X_PA * *(b + 83 * OS1_S1 + 3) +
                                          alpha_X * *(b + 83 * OS1_S1 + 4);
                *(b + 112 * OS1_S1 + 3) =
                    Y_PA * *(b + 77 * OS1_S1 + 3) +
                    alpha_Y * *(b + 77 * OS1_S1 + 4) +
                    6 * one_over_two_p *
                        (*(b + 50 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 50 * OS1_S1 + 4));
                *(b + 113 * OS1_S1 + 3) = Z_PA * *(b + 77 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 77 * OS1_S1 + 4);
                *(b + 114 * OS1_S1 + 3) =
                    Z_PA * *(b + 78 * OS1_S1 + 3) +
                    alpha_Z * *(b + 78 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 50 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 50 * OS1_S1 + 4));
                *(b + 115 * OS1_S1 + 3) =
                    Z_PA * *(b + 79 * OS1_S1 + 3) +
                    alpha_Z * *(b + 79 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 51 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 51 * OS1_S1 + 4));
                *(b + 117 * OS1_S1 + 3) =
                    Y_PA * *(b + 82 * OS1_S1 + 3) +
                    alpha_Y * *(b + 82 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 55 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 55 * OS1_S1 + 4));
                *(b + 118 * OS1_S1 + 3) = Y_PA * *(b + 83 * OS1_S1 + 3) +
                                          alpha_Y * *(b + 83 * OS1_S1 + 4);
                *(b + 119 * OS1_S1 + 3) =
                    Z_PA * *(b + 83 * OS1_S1 + 3) +
                    alpha_Z * *(b + 83 * OS1_S1 + 4) +
                    6 * one_over_two_p *
                        (*(b + 55 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 55 * OS1_S1 + 4));
                *(b + 120 * OS1_S1 + 2) =
                    X_PA * *(b + 84 * OS1_S1 + 2) +
                    alpha_X * *(b + 84 * OS1_S1 + 3) +
                    7 * one_over_two_p *
                        (*(b + 56 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 56 * OS1_S1 + 3));
                *(b + 121 * OS1_S1 + 2) = Y_PA * *(b + 84 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 84 * OS1_S1 + 3);
                *(b + 122 * OS1_S1 + 2) = Z_PA * *(b + 84 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 84 * OS1_S1 + 3);
                *(b + 123 * OS1_S1 + 2) =
                    Y_PA * *(b + 85 * OS1_S1 + 2) +
                    alpha_Y * *(b + 85 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 56 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 56 * OS1_S1 + 3));
                *(b + 125 * OS1_S1 + 2) =
                    Z_PA * *(b + 86 * OS1_S1 + 2) +
                    alpha_Z * *(b + 86 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 56 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 56 * OS1_S1 + 3));
                *(b + 126 * OS1_S1 + 2) =
                    Y_PA * *(b + 87 * OS1_S1 + 2) +
                    alpha_Y * *(b + 87 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 57 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 57 * OS1_S1 + 3));
                *(b + 129 * OS1_S1 + 2) =
                    Z_PA * *(b + 89 * OS1_S1 + 2) +
                    alpha_Z * *(b + 89 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 58 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 58 * OS1_S1 + 3));
                *(b + 130 * OS1_S1 + 2) =
                    Y_PA * *(b + 90 * OS1_S1 + 2) +
                    alpha_Y * *(b + 90 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 59 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 59 * OS1_S1 + 3));
                *(b + 131 * OS1_S1 + 2) = Z_PA * *(b + 90 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 90 * OS1_S1 + 3);
                *(b + 134 * OS1_S1 + 2) =
                    Z_PA * *(b + 93 * OS1_S1 + 2) +
                    alpha_Z * *(b + 93 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 61 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 61 * OS1_S1 + 3));
                *(b + 135 * OS1_S1 + 2) =
                    X_PA * *(b + 99 * OS1_S1 + 2) +
                    alpha_X * *(b + 99 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 71 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 71 * OS1_S1 + 3));
                *(b + 136 * OS1_S1 + 2) = Z_PA * *(b + 94 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 94 * OS1_S1 + 3);
                *(b + 139 * OS1_S1 + 2) = Y_PA * *(b + 98 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 98 * OS1_S1 + 3);
                *(b + 140 * OS1_S1 + 2) =
                    X_PA * *(b + 104 * OS1_S1 + 2) +
                    alpha_X * *(b + 104 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 76 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 76 * OS1_S1 + 3));
                *(b + 141 * OS1_S1 + 2) =
                    X_PA * *(b + 105 * OS1_S1 + 2) +
                    alpha_X * *(b + 105 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 77 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 77 * OS1_S1 + 3));
                *(b + 147 * OS1_S1 + 2) =
                    X_PA * *(b + 111 * OS1_S1 + 2) +
                    alpha_X * *(b + 111 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 83 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 83 * OS1_S1 + 3));
                *(b + 148 * OS1_S1 + 2) = X_PA * *(b + 112 * OS1_S1 + 2) +
                                          alpha_X * *(b + 112 * OS1_S1 + 3);
                *(b + 155 * OS1_S1 + 2) = X_PA * *(b + 119 * OS1_S1 + 2) +
                                          alpha_X * *(b + 119 * OS1_S1 + 3);
                *(b + 156 * OS1_S1 + 2) =
                    Y_PA * *(b + 112 * OS1_S1 + 2) +
                    alpha_Y * *(b + 112 * OS1_S1 + 3) +
                    7 * one_over_two_p *
                        (*(b + 77 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 77 * OS1_S1 + 3));
                *(b + 157 * OS1_S1 + 2) = Z_PA * *(b + 112 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 112 * OS1_S1 + 3);
                *(b + 158 * OS1_S1 + 2) =
                    Z_PA * *(b + 113 * OS1_S1 + 2) +
                    alpha_Z * *(b + 113 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 77 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 77 * OS1_S1 + 3));
                *(b + 159 * OS1_S1 + 2) =
                    Z_PA * *(b + 114 * OS1_S1 + 2) +
                    alpha_Z * *(b + 114 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 78 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 78 * OS1_S1 + 3));
                *(b + 160 * OS1_S1 + 2) =
                    Z_PA * *(b + 115 * OS1_S1 + 2) +
                    alpha_Z * *(b + 115 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 79 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 79 * OS1_S1 + 3));
                *(b + 161 * OS1_S1 + 2) =
                    Y_PA * *(b + 117 * OS1_S1 + 2) +
                    alpha_Y * *(b + 117 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 82 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 82 * OS1_S1 + 3));
                *(b + 162 * OS1_S1 + 2) =
                    Y_PA * *(b + 118 * OS1_S1 + 2) +
                    alpha_Y * *(b + 118 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 83 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 83 * OS1_S1 + 3));
                *(b + 163 * OS1_S1 + 2) = Y_PA * *(b + 119 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 119 * OS1_S1 + 3);
                *(b + 164 * OS1_S1 + 2) =
                    Z_PA * *(b + 119 * OS1_S1 + 2) +
                    alpha_Z * *(b + 119 * OS1_S1 + 3) +
                    7 * one_over_two_p *
                        (*(b + 83 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 83 * OS1_S1 + 3));
                *(b + 165 * OS1_S1 + 1) =
                    X_PA * *(b + 120 * OS1_S1 + 1) +
                    alpha_X * *(b + 120 * OS1_S1 + 2) +
                    8 * one_over_two_p *
                        (*(b + 84 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 84 * OS1_S1 + 2));
                *(b + 166 * OS1_S1 + 1) = Y_PA * *(b + 120 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 120 * OS1_S1 + 2);
                *(b + 167 * OS1_S1 + 1) = Z_PA * *(b + 120 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 120 * OS1_S1 + 2);
                *(b + 168 * OS1_S1 + 1) =
                    Y_PA * *(b + 121 * OS1_S1 + 1) +
                    alpha_Y * *(b + 121 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 84 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 84 * OS1_S1 + 2));
                *(b + 170 * OS1_S1 + 1) =
                    Z_PA * *(b + 122 * OS1_S1 + 1) +
                    alpha_Z * *(b + 122 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 84 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 84 * OS1_S1 + 2));
                *(b + 171 * OS1_S1 + 1) =
                    Y_PA * *(b + 123 * OS1_S1 + 1) +
                    alpha_Y * *(b + 123 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 85 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 85 * OS1_S1 + 2));
                *(b + 172 * OS1_S1 + 1) = Z_PA * *(b + 123 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 123 * OS1_S1 + 2);
                *(b + 174 * OS1_S1 + 1) =
                    Z_PA * *(b + 125 * OS1_S1 + 1) +
                    alpha_Z * *(b + 125 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 86 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 86 * OS1_S1 + 2));
                *(b + 175 * OS1_S1 + 1) =
                    Y_PA * *(b + 126 * OS1_S1 + 1) +
                    alpha_Y * *(b + 126 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 87 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 87 * OS1_S1 + 2));
                *(b + 176 * OS1_S1 + 1) = Z_PA * *(b + 126 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 126 * OS1_S1 + 2);
                *(b + 178 * OS1_S1 + 1) = Y_PA * *(b + 129 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 129 * OS1_S1 + 2);
                *(b + 179 * OS1_S1 + 1) =
                    Z_PA * *(b + 129 * OS1_S1 + 1) +
                    alpha_Z * *(b + 129 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 89 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 89 * OS1_S1 + 2));
                *(b + 180 * OS1_S1 + 1) =
                    X_PA * *(b + 135 * OS1_S1 + 1) +
                    alpha_X * *(b + 135 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 99 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 99 * OS1_S1 + 2));
                *(b + 181 * OS1_S1 + 1) = Z_PA * *(b + 130 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 130 * OS1_S1 + 2);
                *(b + 182 * OS1_S1 + 1) =
                    Z_PA * *(b + 131 * OS1_S1 + 1) +
                    alpha_Z * *(b + 131 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 90 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 90 * OS1_S1 + 2));
                *(b + 184 * OS1_S1 + 1) = Y_PA * *(b + 134 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 134 * OS1_S1 + 2);
                *(b + 185 * OS1_S1 + 1) =
                    X_PA * *(b + 140 * OS1_S1 + 1) +
                    alpha_X * *(b + 140 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 104 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 104 * OS1_S1 + 2));
                *(b + 186 * OS1_S1 + 1) =
                    X_PA * *(b + 141 * OS1_S1 + 1) +
                    alpha_X * *(b + 141 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 105 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 105 * OS1_S1 + 2));
                *(b + 187 * OS1_S1 + 1) = Z_PA * *(b + 135 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 135 * OS1_S1 + 2);
                *(b + 188 * OS1_S1 + 1) =
                    Z_PA * *(b + 136 * OS1_S1 + 1) +
                    alpha_Z * *(b + 136 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 94 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 94 * OS1_S1 + 2));
                *(b + 190 * OS1_S1 + 1) =
                    Y_PA * *(b + 139 * OS1_S1 + 1) +
                    alpha_Y * *(b + 139 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 98 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 98 * OS1_S1 + 2));
                *(b + 191 * OS1_S1 + 1) = Y_PA * *(b + 140 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 140 * OS1_S1 + 2);
                *(b + 192 * OS1_S1 + 1) =
                    X_PA * *(b + 147 * OS1_S1 + 1) +
                    alpha_X * *(b + 147 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 111 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 111 * OS1_S1 + 2));
                *(b + 193 * OS1_S1 + 1) =
                    X_PA * *(b + 148 * OS1_S1 + 1) +
                    alpha_X * *(b + 148 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 112 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 112 * OS1_S1 + 2));
                *(b + 194 * OS1_S1 + 1) = Z_PA * *(b + 141 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 141 * OS1_S1 + 2);
                *(b + 199 * OS1_S1 + 1) = Y_PA * *(b + 147 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 147 * OS1_S1 + 2);
                *(b + 200 * OS1_S1 + 1) =
                    X_PA * *(b + 155 * OS1_S1 + 1) +
                    alpha_X * *(b + 155 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 119 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 119 * OS1_S1 + 2));
                *(b + 201 * OS1_S1 + 1) = X_PA * *(b + 156 * OS1_S1 + 1) +
                                          alpha_X * *(b + 156 * OS1_S1 + 2);
                *(b + 204 * OS1_S1 + 1) = X_PA * *(b + 159 * OS1_S1 + 1) +
                                          alpha_X * *(b + 159 * OS1_S1 + 2);
                *(b + 205 * OS1_S1 + 1) = X_PA * *(b + 160 * OS1_S1 + 1) +
                                          alpha_X * *(b + 160 * OS1_S1 + 2);
                *(b + 206 * OS1_S1 + 1) = X_PA * *(b + 161 * OS1_S1 + 1) +
                                          alpha_X * *(b + 161 * OS1_S1 + 2);
                *(b + 209 * OS1_S1 + 1) = X_PA * *(b + 164 * OS1_S1 + 1) +
                                          alpha_X * *(b + 164 * OS1_S1 + 2);
                *(b + 210 * OS1_S1 + 1) =
                    Y_PA * *(b + 156 * OS1_S1 + 1) +
                    alpha_Y * *(b + 156 * OS1_S1 + 2) +
                    8 * one_over_two_p *
                        (*(b + 112 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 112 * OS1_S1 + 2));
                *(b + 211 * OS1_S1 + 1) = Z_PA * *(b + 156 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 156 * OS1_S1 + 2);
                *(b + 212 * OS1_S1 + 1) =
                    Z_PA * *(b + 157 * OS1_S1 + 1) +
                    alpha_Z * *(b + 157 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 112 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 112 * OS1_S1 + 2));
                *(b + 213 * OS1_S1 + 1) =
                    Z_PA * *(b + 158 * OS1_S1 + 1) +
                    alpha_Z * *(b + 158 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 113 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 113 * OS1_S1 + 2));
                *(b + 214 * OS1_S1 + 1) =
                    Z_PA * *(b + 159 * OS1_S1 + 1) +
                    alpha_Z * *(b + 159 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 114 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 114 * OS1_S1 + 2));
                *(b + 215 * OS1_S1 + 1) =
                    Y_PA * *(b + 161 * OS1_S1 + 1) +
                    alpha_Y * *(b + 161 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 117 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 117 * OS1_S1 + 2));
                *(b + 216 * OS1_S1 + 1) =
                    Y_PA * *(b + 162 * OS1_S1 + 1) +
                    alpha_Y * *(b + 162 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 118 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 118 * OS1_S1 + 2));
                *(b + 217 * OS1_S1 + 1) =
                    Y_PA * *(b + 163 * OS1_S1 + 1) +
                    alpha_Y * *(b + 163 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 119 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 119 * OS1_S1 + 2));
                *(b + 218 * OS1_S1 + 1) = Y_PA * *(b + 164 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 164 * OS1_S1 + 2);
                *(b + 219 * OS1_S1 + 1) =
                    Z_PA * *(b + 164 * OS1_S1 + 1) +
                    alpha_Z * *(b + 164 * OS1_S1 + 2) +
                    8 * one_over_two_p *
                        (*(b + 119 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 119 * OS1_S1 + 2));
                *(b + 220 * OS1_S1 + 0) =
                    X_PA * *(b + 165 * OS1_S1 + 0) +
                    alpha_X * *(b + 165 * OS1_S1 + 1) +
                    9 * one_over_two_p *
                        (*(b + 120 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 120 * OS1_S1 + 1));
                *(b + 221 * OS1_S1 + 0) = Y_PA * *(b + 165 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 165 * OS1_S1 + 1);
                *(b + 222 * OS1_S1 + 0) = Z_PA * *(b + 165 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 165 * OS1_S1 + 1);
                *(b + 223 * OS1_S1 + 0) =
                    Y_PA * *(b + 166 * OS1_S1 + 0) +
                    alpha_Y * *(b + 166 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 120 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 120 * OS1_S1 + 1));
                *(b + 224 * OS1_S1 + 0) = Z_PA * *(b + 166 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 166 * OS1_S1 + 1);
                *(b + 225 * OS1_S1 + 0) =
                    Z_PA * *(b + 167 * OS1_S1 + 0) +
                    alpha_Z * *(b + 167 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 120 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 120 * OS1_S1 + 1));
                *(b + 226 * OS1_S1 + 0) =
                    Y_PA * *(b + 168 * OS1_S1 + 0) +
                    alpha_Y * *(b + 168 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 121 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 121 * OS1_S1 + 1));
                *(b + 227 * OS1_S1 + 0) = Z_PA * *(b + 168 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 168 * OS1_S1 + 1);
                *(b + 228 * OS1_S1 + 0) = Y_PA * *(b + 170 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 170 * OS1_S1 + 1);
                *(b + 229 * OS1_S1 + 0) =
                    Z_PA * *(b + 170 * OS1_S1 + 0) +
                    alpha_Z * *(b + 170 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 122 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 122 * OS1_S1 + 1));
                *(b + 230 * OS1_S1 + 0) =
                    Y_PA * *(b + 171 * OS1_S1 + 0) +
                    alpha_Y * *(b + 171 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 123 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 123 * OS1_S1 + 1));
                *(b + 231 * OS1_S1 + 0) = Z_PA * *(b + 171 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 171 * OS1_S1 + 1);
                *(b + 232 * OS1_S1 + 0) =
                    Z_PA * *(b + 172 * OS1_S1 + 0) +
                    alpha_Z * *(b + 172 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 123 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 123 * OS1_S1 + 1));
                *(b + 233 * OS1_S1 + 0) = Y_PA * *(b + 174 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 174 * OS1_S1 + 1);
                *(b + 234 * OS1_S1 + 0) =
                    Z_PA * *(b + 174 * OS1_S1 + 0) +
                    alpha_Z * *(b + 174 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 125 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 125 * OS1_S1 + 1));
                *(b + 235 * OS1_S1 + 0) =
                    Y_PA * *(b + 175 * OS1_S1 + 0) +
                    alpha_Y * *(b + 175 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 126 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 126 * OS1_S1 + 1));
                *(b + 236 * OS1_S1 + 0) = Z_PA * *(b + 175 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 175 * OS1_S1 + 1);
                *(b + 237 * OS1_S1 + 0) =
                    Z_PA * *(b + 176 * OS1_S1 + 0) +
                    alpha_Z * *(b + 176 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 126 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 126 * OS1_S1 + 1));
                *(b + 238 * OS1_S1 + 0) =
                    Y_PA * *(b + 178 * OS1_S1 + 0) +
                    alpha_Y * *(b + 178 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 129 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 129 * OS1_S1 + 1));
                *(b + 239 * OS1_S1 + 0) = Y_PA * *(b + 179 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 179 * OS1_S1 + 1);
                *(b + 240 * OS1_S1 + 0) =
                    Z_PA * *(b + 179 * OS1_S1 + 0) +
                    alpha_Z * *(b + 179 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 129 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 129 * OS1_S1 + 1));
                *(b + 241 * OS1_S1 + 0) =
                    X_PA * *(b + 186 * OS1_S1 + 0) +
                    alpha_X * *(b + 186 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 141 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 141 * OS1_S1 + 1));
                *(b + 242 * OS1_S1 + 0) = Z_PA * *(b + 180 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 180 * OS1_S1 + 1);
                *(b + 243 * OS1_S1 + 0) =
                    Z_PA * *(b + 181 * OS1_S1 + 0) +
                    alpha_Z * *(b + 181 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 130 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 130 * OS1_S1 + 1));
                *(b + 244 * OS1_S1 + 0) =
                    Z_PA * *(b + 182 * OS1_S1 + 0) +
                    alpha_Z * *(b + 182 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 131 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 131 * OS1_S1 + 1));
                *(b + 245 * OS1_S1 + 0) =
                    Y_PA * *(b + 184 * OS1_S1 + 0) +
                    alpha_Y * *(b + 184 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 134 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 134 * OS1_S1 + 1));
                *(b + 246 * OS1_S1 + 0) = Y_PA * *(b + 185 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 185 * OS1_S1 + 1);
                *(b + 247 * OS1_S1 + 0) =
                    X_PA * *(b + 192 * OS1_S1 + 0) +
                    alpha_X * *(b + 192 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 147 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 147 * OS1_S1 + 1));
                *(b + 248 * OS1_S1 + 0) =
                    X_PA * *(b + 193 * OS1_S1 + 0) +
                    alpha_X * *(b + 193 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 148 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 148 * OS1_S1 + 1));
                *(b + 249 * OS1_S1 + 0) = Z_PA * *(b + 186 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 186 * OS1_S1 + 1);
                *(b + 250 * OS1_S1 + 0) =
                    Z_PA * *(b + 187 * OS1_S1 + 0) +
                    alpha_Z * *(b + 187 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 135 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 135 * OS1_S1 + 1));
                *(b + 251 * OS1_S1 + 0) =
                    Z_PA * *(b + 188 * OS1_S1 + 0) +
                    alpha_Z * *(b + 188 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 136 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 136 * OS1_S1 + 1));
                *(b + 252 * OS1_S1 + 0) =
                    Y_PA * *(b + 190 * OS1_S1 + 0) +
                    alpha_Y * *(b + 190 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 139 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 139 * OS1_S1 + 1));
                *(b + 253 * OS1_S1 + 0) =
                    Y_PA * *(b + 191 * OS1_S1 + 0) +
                    alpha_Y * *(b + 191 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 140 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 140 * OS1_S1 + 1));
                *(b + 254 * OS1_S1 + 0) = Y_PA * *(b + 192 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 192 * OS1_S1 + 1);
                *(b + 255 * OS1_S1 + 0) =
                    X_PA * *(b + 200 * OS1_S1 + 0) +
                    alpha_X * *(b + 200 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 155 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 155 * OS1_S1 + 1));
                *(b + 256 * OS1_S1 + 0) =
                    X_PA * *(b + 201 * OS1_S1 + 0) +
                    alpha_X * *(b + 201 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 156 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 156 * OS1_S1 + 1));
                *(b + 257 * OS1_S1 + 0) = Z_PA * *(b + 193 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 193 * OS1_S1 + 1);
                *(b + 258 * OS1_S1 + 0) =
                    Z_PA * *(b + 194 * OS1_S1 + 0) +
                    alpha_Z * *(b + 194 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 141 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 141 * OS1_S1 + 1));
                *(b + 259 * OS1_S1 + 0) =
                    X_PA * *(b + 204 * OS1_S1 + 0) +
                    alpha_X * *(b + 204 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 159 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 159 * OS1_S1 + 1));
                *(b + 260 * OS1_S1 + 0) =
                    X_PA * *(b + 205 * OS1_S1 + 0) +
                    alpha_X * *(b + 205 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 160 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 160 * OS1_S1 + 1));
                *(b + 261 * OS1_S1 + 0) =
                    X_PA * *(b + 206 * OS1_S1 + 0) +
                    alpha_X * *(b + 206 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 161 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 161 * OS1_S1 + 1));
                *(b + 262 * OS1_S1 + 0) =
                    Y_PA * *(b + 199 * OS1_S1 + 0) +
                    alpha_Y * *(b + 199 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 147 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 147 * OS1_S1 + 1));
                *(b + 263 * OS1_S1 + 0) = Y_PA * *(b + 200 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 200 * OS1_S1 + 1);
                *(b + 264 * OS1_S1 + 0) =
                    X_PA * *(b + 209 * OS1_S1 + 0) +
                    alpha_X * *(b + 209 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 164 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 164 * OS1_S1 + 1));
                *(b + 265 * OS1_S1 + 0) = X_PA * *(b + 210 * OS1_S1 + 0) +
                                          alpha_X * *(b + 210 * OS1_S1 + 1);
                *(b + 266 * OS1_S1 + 0) = Z_PA * *(b + 201 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 201 * OS1_S1 + 1);
                *(b + 267 * OS1_S1 + 0) = X_PA * *(b + 212 * OS1_S1 + 0) +
                                          alpha_X * *(b + 212 * OS1_S1 + 1);
                *(b + 268 * OS1_S1 + 0) = X_PA * *(b + 213 * OS1_S1 + 0) +
                                          alpha_X * *(b + 213 * OS1_S1 + 1);
                *(b + 269 * OS1_S1 + 0) = X_PA * *(b + 214 * OS1_S1 + 0) +
                                          alpha_X * *(b + 214 * OS1_S1 + 1);
                *(b + 270 * OS1_S1 + 0) = X_PA * *(b + 215 * OS1_S1 + 0) +
                                          alpha_X * *(b + 215 * OS1_S1 + 1);
                *(b + 271 * OS1_S1 + 0) = X_PA * *(b + 216 * OS1_S1 + 0) +
                                          alpha_X * *(b + 216 * OS1_S1 + 1);
                *(b + 272 * OS1_S1 + 0) = X_PA * *(b + 217 * OS1_S1 + 0) +
                                          alpha_X * *(b + 217 * OS1_S1 + 1);
                *(b + 273 * OS1_S1 + 0) = Y_PA * *(b + 209 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 209 * OS1_S1 + 1);
                *(b + 274 * OS1_S1 + 0) = X_PA * *(b + 219 * OS1_S1 + 0) +
                                          alpha_X * *(b + 219 * OS1_S1 + 1);
                *(b + 275 * OS1_S1 + 0) =
                    Y_PA * *(b + 210 * OS1_S1 + 0) +
                    alpha_Y * *(b + 210 * OS1_S1 + 1) +
                    9 * one_over_two_p *
                        (*(b + 156 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 156 * OS1_S1 + 1));
                *(b + 276 * OS1_S1 + 0) = Z_PA * *(b + 210 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 210 * OS1_S1 + 1);
                *(b + 277 * OS1_S1 + 0) =
                    Z_PA * *(b + 211 * OS1_S1 + 0) +
                    alpha_Z * *(b + 211 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 156 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 156 * OS1_S1 + 1));
                *(b + 278 * OS1_S1 + 0) =
                    Z_PA * *(b + 212 * OS1_S1 + 0) +
                    alpha_Z * *(b + 212 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 157 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 157 * OS1_S1 + 1));
                *(b + 279 * OS1_S1 + 0) =
                    Z_PA * *(b + 213 * OS1_S1 + 0) +
                    alpha_Z * *(b + 213 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 158 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 158 * OS1_S1 + 1));
                *(b + 280 * OS1_S1 + 0) =
                    Z_PA * *(b + 214 * OS1_S1 + 0) +
                    alpha_Z * *(b + 214 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 159 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 159 * OS1_S1 + 1));
                *(b + 281 * OS1_S1 + 0) =
                    Y_PA * *(b + 216 * OS1_S1 + 0) +
                    alpha_Y * *(b + 216 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 162 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 162 * OS1_S1 + 1));
                *(b + 282 * OS1_S1 + 0) =
                    Y_PA * *(b + 217 * OS1_S1 + 0) +
                    alpha_Y * *(b + 217 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 163 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 163 * OS1_S1 + 1));
                *(b + 283 * OS1_S1 + 0) =
                    Y_PA * *(b + 218 * OS1_S1 + 0) +
                    alpha_Y * *(b + 218 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 164 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 164 * OS1_S1 + 1));
                *(b + 284 * OS1_S1 + 0) = Y_PA * *(b + 219 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 219 * OS1_S1 + 1);
                *(b + 285 * OS1_S1 + 0) =
                    Z_PA * *(b + 219 * OS1_S1 + 0) +
                    alpha_Z * *(b + 219 * OS1_S1 + 1) +
                    9 * one_over_two_p *
                        (*(b + 164 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 164 * OS1_S1 + 1));
                if (m > 10) {
                    *(b + 1 * OS1_S1 + 10) = X_PA * *(b + 0 * OS1_S1 + 10) +
                                             alpha_X * *(b + 0 * OS1_S1 + 11);
                    *(b + 2 * OS1_S1 + 10) = Y_PA * *(b + 0 * OS1_S1 + 10) +
                                             alpha_Y * *(b + 0 * OS1_S1 + 11);
                    *(b + 3 * OS1_S1 + 10) = Z_PA * *(b + 0 * OS1_S1 + 10) +
                                             alpha_Z * *(b + 0 * OS1_S1 + 11);
                    *(b + 4 * OS1_S1 + 9) =
                        X_PA * *(b + 1 * OS1_S1 + 9) +
                        alpha_X * *(b + 1 * OS1_S1 + 10) +
                        one_over_two_p *
                            (*(b + 0 * OS1_S1 + 9) -
                             alpha_over_p * *(b + 0 * OS1_S1 + 10));
                    *(b + 7 * OS1_S1 + 9) =
                        Y_PA * *(b + 2 * OS1_S1 + 9) +
                        alpha_Y * *(b + 2 * OS1_S1 + 10) +
                        one_over_two_p *
                            (*(b + 0 * OS1_S1 + 9) -
                             alpha_over_p * *(b + 0 * OS1_S1 + 10));
                    *(b + 9 * OS1_S1 + 9) =
                        Z_PA * *(b + 3 * OS1_S1 + 9) +
                        alpha_Z * *(b + 3 * OS1_S1 + 10) +
                        one_over_two_p *
                            (*(b + 0 * OS1_S1 + 9) -
                             alpha_over_p * *(b + 0 * OS1_S1 + 10));
                    *(b + 10 * OS1_S1 + 8) =
                        X_PA * *(b + 4 * OS1_S1 + 8) +
                        alpha_X * *(b + 4 * OS1_S1 + 9) +
                        2 * one_over_two_p *
                            (*(b + 1 * OS1_S1 + 8) -
                             alpha_over_p * *(b + 1 * OS1_S1 + 9));
                    *(b + 16 * OS1_S1 + 8) =
                        Y_PA * *(b + 7 * OS1_S1 + 8) +
                        alpha_Y * *(b + 7 * OS1_S1 + 9) +
                        2 * one_over_two_p *
                            (*(b + 2 * OS1_S1 + 8) -
                             alpha_over_p * *(b + 2 * OS1_S1 + 9));
                    *(b + 19 * OS1_S1 + 8) =
                        Z_PA * *(b + 9 * OS1_S1 + 8) +
                        alpha_Z * *(b + 9 * OS1_S1 + 9) +
                        2 * one_over_two_p *
                            (*(b + 3 * OS1_S1 + 8) -
                             alpha_over_p * *(b + 3 * OS1_S1 + 9));
                    *(b + 20 * OS1_S1 + 7) =
                        X_PA * *(b + 10 * OS1_S1 + 7) +
                        alpha_X * *(b + 10 * OS1_S1 + 8) +
                        3 * one_over_two_p *
                            (*(b + 4 * OS1_S1 + 7) -
                             alpha_over_p * *(b + 4 * OS1_S1 + 8));
                    *(b + 30 * OS1_S1 + 7) =
                        Y_PA * *(b + 16 * OS1_S1 + 7) +
                        alpha_Y * *(b + 16 * OS1_S1 + 8) +
                        3 * one_over_two_p *
                            (*(b + 7 * OS1_S1 + 7) -
                             alpha_over_p * *(b + 7 * OS1_S1 + 8));
                    *(b + 34 * OS1_S1 + 7) =
                        Z_PA * *(b + 19 * OS1_S1 + 7) +
                        alpha_Z * *(b + 19 * OS1_S1 + 8) +
                        3 * one_over_two_p *
                            (*(b + 9 * OS1_S1 + 7) -
                             alpha_over_p * *(b + 9 * OS1_S1 + 8));
                    *(b + 35 * OS1_S1 + 6) =
                        X_PA * *(b + 20 * OS1_S1 + 6) +
                        alpha_X * *(b + 20 * OS1_S1 + 7) +
                        4 * one_over_two_p *
                            (*(b + 10 * OS1_S1 + 6) -
                             alpha_over_p * *(b + 10 * OS1_S1 + 7));
                    *(b + 36 * OS1_S1 + 6) = Y_PA * *(b + 20 * OS1_S1 + 6) +
                                             alpha_Y * *(b + 20 * OS1_S1 + 7);
                    *(b + 37 * OS1_S1 + 6) = Z_PA * *(b + 20 * OS1_S1 + 6) +
                                             alpha_Z * *(b + 20 * OS1_S1 + 7);
                    *(b + 50 * OS1_S1 + 6) =
                        Y_PA * *(b + 30 * OS1_S1 + 6) +
                        alpha_Y * *(b + 30 * OS1_S1 + 7) +
                        4 * one_over_two_p *
                            (*(b + 16 * OS1_S1 + 6) -
                             alpha_over_p * *(b + 16 * OS1_S1 + 7));
                    *(b + 51 * OS1_S1 + 6) = Z_PA * *(b + 30 * OS1_S1 + 6) +
                                             alpha_Z * *(b + 30 * OS1_S1 + 7);
                    *(b + 55 * OS1_S1 + 6) =
                        Z_PA * *(b + 34 * OS1_S1 + 6) +
                        alpha_Z * *(b + 34 * OS1_S1 + 7) +
                        4 * one_over_two_p *
                            (*(b + 19 * OS1_S1 + 6) -
                             alpha_over_p * *(b + 19 * OS1_S1 + 7));
                    *(b + 56 * OS1_S1 + 5) =
                        X_PA * *(b + 35 * OS1_S1 + 5) +
                        alpha_X * *(b + 35 * OS1_S1 + 6) +
                        5 * one_over_two_p *
                            (*(b + 20 * OS1_S1 + 5) -
                             alpha_over_p * *(b + 20 * OS1_S1 + 6));
                    *(b + 57 * OS1_S1 + 5) = Y_PA * *(b + 35 * OS1_S1 + 5) +
                                             alpha_Y * *(b + 35 * OS1_S1 + 6);
                    *(b + 58 * OS1_S1 + 5) = Z_PA * *(b + 35 * OS1_S1 + 5) +
                                             alpha_Z * *(b + 35 * OS1_S1 + 6);
                    *(b + 59 * OS1_S1 + 5) =
                        Y_PA * *(b + 36 * OS1_S1 + 5) +
                        alpha_Y * *(b + 36 * OS1_S1 + 6) +
                        one_over_two_p *
                            (*(b + 20 * OS1_S1 + 5) -
                             alpha_over_p * *(b + 20 * OS1_S1 + 6));
                    *(b + 61 * OS1_S1 + 5) =
                        Z_PA * *(b + 37 * OS1_S1 + 5) +
                        alpha_Z * *(b + 37 * OS1_S1 + 6) +
                        one_over_two_p *
                            (*(b + 20 * OS1_S1 + 5) -
                             alpha_over_p * *(b + 20 * OS1_S1 + 6));
                    *(b + 71 * OS1_S1 + 5) = X_PA * *(b + 50 * OS1_S1 + 5) +
                                             alpha_X * *(b + 50 * OS1_S1 + 6);
                    *(b + 76 * OS1_S1 + 5) = X_PA * *(b + 55 * OS1_S1 + 5) +
                                             alpha_X * *(b + 55 * OS1_S1 + 6);
                    *(b + 77 * OS1_S1 + 5) =
                        Y_PA * *(b + 50 * OS1_S1 + 5) +
                        alpha_Y * *(b + 50 * OS1_S1 + 6) +
                        5 * one_over_two_p *
                            (*(b + 30 * OS1_S1 + 5) -
                             alpha_over_p * *(b + 30 * OS1_S1 + 6));
                    *(b + 78 * OS1_S1 + 5) = Z_PA * *(b + 50 * OS1_S1 + 5) +
                                             alpha_Z * *(b + 50 * OS1_S1 + 6);
                    *(b + 79 * OS1_S1 + 5) =
                        Z_PA * *(b + 51 * OS1_S1 + 5) +
                        alpha_Z * *(b + 51 * OS1_S1 + 6) +
                        one_over_two_p *
                            (*(b + 30 * OS1_S1 + 5) -
                             alpha_over_p * *(b + 30 * OS1_S1 + 6));
                    *(b + 82 * OS1_S1 + 5) = Y_PA * *(b + 55 * OS1_S1 + 5) +
                                             alpha_Y * *(b + 55 * OS1_S1 + 6);
                    *(b + 83 * OS1_S1 + 5) =
                        Z_PA * *(b + 55 * OS1_S1 + 5) +
                        alpha_Z * *(b + 55 * OS1_S1 + 6) +
                        5 * one_over_two_p *
                            (*(b + 34 * OS1_S1 + 5) -
                             alpha_over_p * *(b + 34 * OS1_S1 + 6));
                    *(b + 84 * OS1_S1 + 4) =
                        X_PA * *(b + 56 * OS1_S1 + 4) +
                        alpha_X * *(b + 56 * OS1_S1 + 5) +
                        6 * one_over_two_p *
                            (*(b + 35 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 35 * OS1_S1 + 5));
                    *(b + 85 * OS1_S1 + 4) = Y_PA * *(b + 56 * OS1_S1 + 4) +
                                             alpha_Y * *(b + 56 * OS1_S1 + 5);
                    *(b + 86 * OS1_S1 + 4) = Z_PA * *(b + 56 * OS1_S1 + 4) +
                                             alpha_Z * *(b + 56 * OS1_S1 + 5);
                    *(b + 87 * OS1_S1 + 4) =
                        Y_PA * *(b + 57 * OS1_S1 + 4) +
                        alpha_Y * *(b + 57 * OS1_S1 + 5) +
                        one_over_two_p *
                            (*(b + 35 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 35 * OS1_S1 + 5));
                    *(b + 89 * OS1_S1 + 4) =
                        Z_PA * *(b + 58 * OS1_S1 + 4) +
                        alpha_Z * *(b + 58 * OS1_S1 + 5) +
                        one_over_two_p *
                            (*(b + 35 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 35 * OS1_S1 + 5));
                    *(b + 90 * OS1_S1 + 4) =
                        Y_PA * *(b + 59 * OS1_S1 + 4) +
                        alpha_Y * *(b + 59 * OS1_S1 + 5) +
                        2 * one_over_two_p *
                            (*(b + 36 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 36 * OS1_S1 + 5));
                    *(b + 93 * OS1_S1 + 4) =
                        Z_PA * *(b + 61 * OS1_S1 + 4) +
                        alpha_Z * *(b + 61 * OS1_S1 + 5) +
                        2 * one_over_two_p *
                            (*(b + 37 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 37 * OS1_S1 + 5));
                    *(b + 99 * OS1_S1 + 4) =
                        X_PA * *(b + 71 * OS1_S1 + 4) +
                        alpha_X * *(b + 71 * OS1_S1 + 5) +
                        one_over_two_p *
                            (*(b + 50 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 50 * OS1_S1 + 5));
                    *(b + 104 * OS1_S1 + 4) =
                        X_PA * *(b + 76 * OS1_S1 + 4) +
                        alpha_X * *(b + 76 * OS1_S1 + 5) +
                        one_over_two_p *
                            (*(b + 55 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 55 * OS1_S1 + 5));
                    *(b + 105 * OS1_S1 + 4) = X_PA * *(b + 77 * OS1_S1 + 4) +
                                              alpha_X * *(b + 77 * OS1_S1 + 5);
                    *(b + 111 * OS1_S1 + 4) = X_PA * *(b + 83 * OS1_S1 + 4) +
                                              alpha_X * *(b + 83 * OS1_S1 + 5);
                    *(b + 112 * OS1_S1 + 4) =
                        Y_PA * *(b + 77 * OS1_S1 + 4) +
                        alpha_Y * *(b + 77 * OS1_S1 + 5) +
                        6 * one_over_two_p *
                            (*(b + 50 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 50 * OS1_S1 + 5));
                    *(b + 113 * OS1_S1 + 4) = Z_PA * *(b + 77 * OS1_S1 + 4) +
                                              alpha_Z * *(b + 77 * OS1_S1 + 5);
                    *(b + 114 * OS1_S1 + 4) =
                        Z_PA * *(b + 78 * OS1_S1 + 4) +
                        alpha_Z * *(b + 78 * OS1_S1 + 5) +
                        one_over_two_p *
                            (*(b + 50 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 50 * OS1_S1 + 5));
                    *(b + 115 * OS1_S1 + 4) =
                        Z_PA * *(b + 79 * OS1_S1 + 4) +
                        alpha_Z * *(b + 79 * OS1_S1 + 5) +
                        2 * one_over_two_p *
                            (*(b + 51 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 51 * OS1_S1 + 5));
                    *(b + 117 * OS1_S1 + 4) =
                        Y_PA * *(b + 82 * OS1_S1 + 4) +
                        alpha_Y * *(b + 82 * OS1_S1 + 5) +
                        one_over_two_p *
                            (*(b + 55 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 55 * OS1_S1 + 5));
                    *(b + 118 * OS1_S1 + 4) = Y_PA * *(b + 83 * OS1_S1 + 4) +
                                              alpha_Y * *(b + 83 * OS1_S1 + 5);
                    *(b + 119 * OS1_S1 + 4) =
                        Z_PA * *(b + 83 * OS1_S1 + 4) +
                        alpha_Z * *(b + 83 * OS1_S1 + 5) +
                        6 * one_over_two_p *
                            (*(b + 55 * OS1_S1 + 4) -
                             alpha_over_p * *(b + 55 * OS1_S1 + 5));
                    *(b + 120 * OS1_S1 + 3) =
                        X_PA * *(b + 84 * OS1_S1 + 3) +
                        alpha_X * *(b + 84 * OS1_S1 + 4) +
                        7 * one_over_two_p *
                            (*(b + 56 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 56 * OS1_S1 + 4));
                    *(b + 121 * OS1_S1 + 3) = Y_PA * *(b + 84 * OS1_S1 + 3) +
                                              alpha_Y * *(b + 84 * OS1_S1 + 4);
                    *(b + 122 * OS1_S1 + 3) = Z_PA * *(b + 84 * OS1_S1 + 3) +
                                              alpha_Z * *(b + 84 * OS1_S1 + 4);
                    *(b + 123 * OS1_S1 + 3) =
                        Y_PA * *(b + 85 * OS1_S1 + 3) +
                        alpha_Y * *(b + 85 * OS1_S1 + 4) +
                        one_over_two_p *
                            (*(b + 56 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 56 * OS1_S1 + 4));
                    *(b + 125 * OS1_S1 + 3) =
                        Z_PA * *(b + 86 * OS1_S1 + 3) +
                        alpha_Z * *(b + 86 * OS1_S1 + 4) +
                        one_over_two_p *
                            (*(b + 56 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 56 * OS1_S1 + 4));
                    *(b + 126 * OS1_S1 + 3) =
                        Y_PA * *(b + 87 * OS1_S1 + 3) +
                        alpha_Y * *(b + 87 * OS1_S1 + 4) +
                        2 * one_over_two_p *
                            (*(b + 57 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 57 * OS1_S1 + 4));
                    *(b + 129 * OS1_S1 + 3) =
                        Z_PA * *(b + 89 * OS1_S1 + 3) +
                        alpha_Z * *(b + 89 * OS1_S1 + 4) +
                        2 * one_over_two_p *
                            (*(b + 58 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 58 * OS1_S1 + 4));
                    *(b + 130 * OS1_S1 + 3) =
                        Y_PA * *(b + 90 * OS1_S1 + 3) +
                        alpha_Y * *(b + 90 * OS1_S1 + 4) +
                        3 * one_over_two_p *
                            (*(b + 59 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 59 * OS1_S1 + 4));
                    *(b + 134 * OS1_S1 + 3) =
                        Z_PA * *(b + 93 * OS1_S1 + 3) +
                        alpha_Z * *(b + 93 * OS1_S1 + 4) +
                        3 * one_over_two_p *
                            (*(b + 61 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 61 * OS1_S1 + 4));
                    *(b + 135 * OS1_S1 + 3) =
                        X_PA * *(b + 99 * OS1_S1 + 3) +
                        alpha_X * *(b + 99 * OS1_S1 + 4) +
                        2 * one_over_two_p *
                            (*(b + 71 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 71 * OS1_S1 + 4));
                    *(b + 140 * OS1_S1 + 3) =
                        X_PA * *(b + 104 * OS1_S1 + 3) +
                        alpha_X * *(b + 104 * OS1_S1 + 4) +
                        2 * one_over_two_p *
                            (*(b + 76 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 76 * OS1_S1 + 4));
                    *(b + 141 * OS1_S1 + 3) =
                        X_PA * *(b + 105 * OS1_S1 + 3) +
                        alpha_X * *(b + 105 * OS1_S1 + 4) +
                        one_over_two_p *
                            (*(b + 77 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 77 * OS1_S1 + 4));
                    *(b + 147 * OS1_S1 + 3) =
                        X_PA * *(b + 111 * OS1_S1 + 3) +
                        alpha_X * *(b + 111 * OS1_S1 + 4) +
                        one_over_two_p *
                            (*(b + 83 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 83 * OS1_S1 + 4));
                    *(b + 148 * OS1_S1 + 3) = X_PA * *(b + 112 * OS1_S1 + 3) +
                                              alpha_X * *(b + 112 * OS1_S1 + 4);
                    *(b + 155 * OS1_S1 + 3) = X_PA * *(b + 119 * OS1_S1 + 3) +
                                              alpha_X * *(b + 119 * OS1_S1 + 4);
                    *(b + 156 * OS1_S1 + 3) =
                        Y_PA * *(b + 112 * OS1_S1 + 3) +
                        alpha_Y * *(b + 112 * OS1_S1 + 4) +
                        7 * one_over_two_p *
                            (*(b + 77 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 77 * OS1_S1 + 4));
                    *(b + 157 * OS1_S1 + 3) = Z_PA * *(b + 112 * OS1_S1 + 3) +
                                              alpha_Z * *(b + 112 * OS1_S1 + 4);
                    *(b + 158 * OS1_S1 + 3) =
                        Z_PA * *(b + 113 * OS1_S1 + 3) +
                        alpha_Z * *(b + 113 * OS1_S1 + 4) +
                        one_over_two_p *
                            (*(b + 77 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 77 * OS1_S1 + 4));
                    *(b + 159 * OS1_S1 + 3) =
                        Z_PA * *(b + 114 * OS1_S1 + 3) +
                        alpha_Z * *(b + 114 * OS1_S1 + 4) +
                        2 * one_over_two_p *
                            (*(b + 78 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 78 * OS1_S1 + 4));
                    *(b + 160 * OS1_S1 + 3) =
                        Z_PA * *(b + 115 * OS1_S1 + 3) +
                        alpha_Z * *(b + 115 * OS1_S1 + 4) +
                        3 * one_over_two_p *
                            (*(b + 79 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 79 * OS1_S1 + 4));
                    *(b + 161 * OS1_S1 + 3) =
                        Y_PA * *(b + 117 * OS1_S1 + 3) +
                        alpha_Y * *(b + 117 * OS1_S1 + 4) +
                        2 * one_over_two_p *
                            (*(b + 82 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 82 * OS1_S1 + 4));
                    *(b + 162 * OS1_S1 + 3) =
                        Y_PA * *(b + 118 * OS1_S1 + 3) +
                        alpha_Y * *(b + 118 * OS1_S1 + 4) +
                        one_over_two_p *
                            (*(b + 83 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 83 * OS1_S1 + 4));
                    *(b + 163 * OS1_S1 + 3) = Y_PA * *(b + 119 * OS1_S1 + 3) +
                                              alpha_Y * *(b + 119 * OS1_S1 + 4);
                    *(b + 164 * OS1_S1 + 3) =
                        Z_PA * *(b + 119 * OS1_S1 + 3) +
                        alpha_Z * *(b + 119 * OS1_S1 + 4) +
                        7 * one_over_two_p *
                            (*(b + 83 * OS1_S1 + 3) -
                             alpha_over_p * *(b + 83 * OS1_S1 + 4));
                    *(b + 165 * OS1_S1 + 2) =
                        X_PA * *(b + 120 * OS1_S1 + 2) +
                        alpha_X * *(b + 120 * OS1_S1 + 3) +
                        8 * one_over_two_p *
                            (*(b + 84 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 84 * OS1_S1 + 3));
                    *(b + 166 * OS1_S1 + 2) = Y_PA * *(b + 120 * OS1_S1 + 2) +
                                              alpha_Y * *(b + 120 * OS1_S1 + 3);
                    *(b + 167 * OS1_S1 + 2) = Z_PA * *(b + 120 * OS1_S1 + 2) +
                                              alpha_Z * *(b + 120 * OS1_S1 + 3);
                    *(b + 168 * OS1_S1 + 2) =
                        Y_PA * *(b + 121 * OS1_S1 + 2) +
                        alpha_Y * *(b + 121 * OS1_S1 + 3) +
                        one_over_two_p *
                            (*(b + 84 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 84 * OS1_S1 + 3));
                    *(b + 170 * OS1_S1 + 2) =
                        Z_PA * *(b + 122 * OS1_S1 + 2) +
                        alpha_Z * *(b + 122 * OS1_S1 + 3) +
                        one_over_two_p *
                            (*(b + 84 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 84 * OS1_S1 + 3));
                    *(b + 171 * OS1_S1 + 2) =
                        Y_PA * *(b + 123 * OS1_S1 + 2) +
                        alpha_Y * *(b + 123 * OS1_S1 + 3) +
                        2 * one_over_two_p *
                            (*(b + 85 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 85 * OS1_S1 + 3));
                    *(b + 174 * OS1_S1 + 2) =
                        Z_PA * *(b + 125 * OS1_S1 + 2) +
                        alpha_Z * *(b + 125 * OS1_S1 + 3) +
                        2 * one_over_two_p *
                            (*(b + 86 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 86 * OS1_S1 + 3));
                    *(b + 175 * OS1_S1 + 2) =
                        Y_PA * *(b + 126 * OS1_S1 + 2) +
                        alpha_Y * *(b + 126 * OS1_S1 + 3) +
                        3 * one_over_two_p *
                            (*(b + 87 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 87 * OS1_S1 + 3));
                    *(b + 176 * OS1_S1 + 2) = Z_PA * *(b + 126 * OS1_S1 + 2) +
                                              alpha_Z * *(b + 126 * OS1_S1 + 3);
                    *(b + 179 * OS1_S1 + 2) =
                        Z_PA * *(b + 129 * OS1_S1 + 2) +
                        alpha_Z * *(b + 129 * OS1_S1 + 3) +
                        3 * one_over_two_p *
                            (*(b + 89 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 89 * OS1_S1 + 3));
                    *(b + 180 * OS1_S1 + 2) =
                        X_PA * *(b + 135 * OS1_S1 + 2) +
                        alpha_X * *(b + 135 * OS1_S1 + 3) +
                        3 * one_over_two_p *
                            (*(b + 99 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 99 * OS1_S1 + 3));
                    *(b + 181 * OS1_S1 + 2) = Z_PA * *(b + 130 * OS1_S1 + 2) +
                                              alpha_Z * *(b + 130 * OS1_S1 + 3);
                    *(b + 184 * OS1_S1 + 2) = Y_PA * *(b + 134 * OS1_S1 + 2) +
                                              alpha_Y * *(b + 134 * OS1_S1 + 3);
                    *(b + 185 * OS1_S1 + 2) =
                        X_PA * *(b + 140 * OS1_S1 + 2) +
                        alpha_X * *(b + 140 * OS1_S1 + 3) +
                        3 * one_over_two_p *
                            (*(b + 104 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 104 * OS1_S1 + 3));
                    *(b + 186 * OS1_S1 + 2) =
                        X_PA * *(b + 141 * OS1_S1 + 2) +
                        alpha_X * *(b + 141 * OS1_S1 + 3) +
                        2 * one_over_two_p *
                            (*(b + 105 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 105 * OS1_S1 + 3));
                    *(b + 187 * OS1_S1 + 2) = Z_PA * *(b + 135 * OS1_S1 + 2) +
                                              alpha_Z * *(b + 135 * OS1_S1 + 3);
                    *(b + 191 * OS1_S1 + 2) = Y_PA * *(b + 140 * OS1_S1 + 2) +
                                              alpha_Y * *(b + 140 * OS1_S1 + 3);
                    *(b + 192 * OS1_S1 + 2) =
                        X_PA * *(b + 147 * OS1_S1 + 2) +
                        alpha_X * *(b + 147 * OS1_S1 + 3) +
                        2 * one_over_two_p *
                            (*(b + 111 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 111 * OS1_S1 + 3));
                    *(b + 193 * OS1_S1 + 2) =
                        X_PA * *(b + 148 * OS1_S1 + 2) +
                        alpha_X * *(b + 148 * OS1_S1 + 3) +
                        one_over_two_p *
                            (*(b + 112 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 112 * OS1_S1 + 3));
                    *(b + 200 * OS1_S1 + 2) =
                        X_PA * *(b + 155 * OS1_S1 + 2) +
                        alpha_X * *(b + 155 * OS1_S1 + 3) +
                        one_over_two_p *
                            (*(b + 119 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 119 * OS1_S1 + 3));
                    *(b + 201 * OS1_S1 + 2) = X_PA * *(b + 156 * OS1_S1 + 2) +
                                              alpha_X * *(b + 156 * OS1_S1 + 3);
                    *(b + 205 * OS1_S1 + 2) = X_PA * *(b + 160 * OS1_S1 + 2) +
                                              alpha_X * *(b + 160 * OS1_S1 + 3);
                    *(b + 209 * OS1_S1 + 2) = X_PA * *(b + 164 * OS1_S1 + 2) +
                                              alpha_X * *(b + 164 * OS1_S1 + 3);
                    *(b + 210 * OS1_S1 + 2) =
                        Y_PA * *(b + 156 * OS1_S1 + 2) +
                        alpha_Y * *(b + 156 * OS1_S1 + 3) +
                        8 * one_over_two_p *
                            (*(b + 112 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 112 * OS1_S1 + 3));
                    *(b + 211 * OS1_S1 + 2) = Z_PA * *(b + 156 * OS1_S1 + 2) +
                                              alpha_Z * *(b + 156 * OS1_S1 + 3);
                    *(b + 212 * OS1_S1 + 2) =
                        Z_PA * *(b + 157 * OS1_S1 + 2) +
                        alpha_Z * *(b + 157 * OS1_S1 + 3) +
                        one_over_two_p *
                            (*(b + 112 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 112 * OS1_S1 + 3));
                    *(b + 213 * OS1_S1 + 2) =
                        Z_PA * *(b + 158 * OS1_S1 + 2) +
                        alpha_Z * *(b + 158 * OS1_S1 + 3) +
                        2 * one_over_two_p *
                            (*(b + 113 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 113 * OS1_S1 + 3));
                    *(b + 214 * OS1_S1 + 2) =
                        Z_PA * *(b + 159 * OS1_S1 + 2) +
                        alpha_Z * *(b + 159 * OS1_S1 + 3) +
                        3 * one_over_two_p *
                            (*(b + 114 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 114 * OS1_S1 + 3));
                    *(b + 215 * OS1_S1 + 2) =
                        Y_PA * *(b + 161 * OS1_S1 + 2) +
                        alpha_Y * *(b + 161 * OS1_S1 + 3) +
                        3 * one_over_two_p *
                            (*(b + 117 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 117 * OS1_S1 + 3));
                    *(b + 216 * OS1_S1 + 2) =
                        Y_PA * *(b + 162 * OS1_S1 + 2) +
                        alpha_Y * *(b + 162 * OS1_S1 + 3) +
                        2 * one_over_two_p *
                            (*(b + 118 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 118 * OS1_S1 + 3));
                    *(b + 217 * OS1_S1 + 2) =
                        Y_PA * *(b + 163 * OS1_S1 + 2) +
                        alpha_Y * *(b + 163 * OS1_S1 + 3) +
                        one_over_two_p *
                            (*(b + 119 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 119 * OS1_S1 + 3));
                    *(b + 218 * OS1_S1 + 2) = Y_PA * *(b + 164 * OS1_S1 + 2) +
                                              alpha_Y * *(b + 164 * OS1_S1 + 3);
                    *(b + 219 * OS1_S1 + 2) =
                        Z_PA * *(b + 164 * OS1_S1 + 2) +
                        alpha_Z * *(b + 164 * OS1_S1 + 3) +
                        8 * one_over_two_p *
                            (*(b + 119 * OS1_S1 + 2) -
                             alpha_over_p * *(b + 119 * OS1_S1 + 3));
                    *(b + 220 * OS1_S1 + 1) =
                        X_PA * *(b + 165 * OS1_S1 + 1) +
                        alpha_X * *(b + 165 * OS1_S1 + 2) +
                        9 * one_over_two_p *
                            (*(b + 120 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 120 * OS1_S1 + 2));
                    *(b + 221 * OS1_S1 + 1) = Y_PA * *(b + 165 * OS1_S1 + 1) +
                                              alpha_Y * *(b + 165 * OS1_S1 + 2);
                    *(b + 222 * OS1_S1 + 1) = Z_PA * *(b + 165 * OS1_S1 + 1) +
                                              alpha_Z * *(b + 165 * OS1_S1 + 2);
                    *(b + 223 * OS1_S1 + 1) =
                        Y_PA * *(b + 166 * OS1_S1 + 1) +
                        alpha_Y * *(b + 166 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 120 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 120 * OS1_S1 + 2));
                    *(b + 225 * OS1_S1 + 1) =
                        Z_PA * *(b + 167 * OS1_S1 + 1) +
                        alpha_Z * *(b + 167 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 120 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 120 * OS1_S1 + 2));
                    *(b + 226 * OS1_S1 + 1) =
                        Y_PA * *(b + 168 * OS1_S1 + 1) +
                        alpha_Y * *(b + 168 * OS1_S1 + 2) +
                        2 * one_over_two_p *
                            (*(b + 121 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 121 * OS1_S1 + 2));
                    *(b + 227 * OS1_S1 + 1) = Z_PA * *(b + 168 * OS1_S1 + 1) +
                                              alpha_Z * *(b + 168 * OS1_S1 + 2);
                    *(b + 229 * OS1_S1 + 1) =
                        Z_PA * *(b + 170 * OS1_S1 + 1) +
                        alpha_Z * *(b + 170 * OS1_S1 + 2) +
                        2 * one_over_two_p *
                            (*(b + 122 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 122 * OS1_S1 + 2));
                    *(b + 230 * OS1_S1 + 1) =
                        Y_PA * *(b + 171 * OS1_S1 + 1) +
                        alpha_Y * *(b + 171 * OS1_S1 + 2) +
                        3 * one_over_two_p *
                            (*(b + 123 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 123 * OS1_S1 + 2));
                    *(b + 231 * OS1_S1 + 1) = Z_PA * *(b + 171 * OS1_S1 + 1) +
                                              alpha_Z * *(b + 171 * OS1_S1 + 2);
                    *(b + 233 * OS1_S1 + 1) = Y_PA * *(b + 174 * OS1_S1 + 1) +
                                              alpha_Y * *(b + 174 * OS1_S1 + 2);
                    *(b + 234 * OS1_S1 + 1) =
                        Z_PA * *(b + 174 * OS1_S1 + 1) +
                        alpha_Z * *(b + 174 * OS1_S1 + 2) +
                        3 * one_over_two_p *
                            (*(b + 125 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 125 * OS1_S1 + 2));
                    *(b + 235 * OS1_S1 + 1) =
                        Y_PA * *(b + 175 * OS1_S1 + 1) +
                        alpha_Y * *(b + 175 * OS1_S1 + 2) +
                        4 * one_over_two_p *
                            (*(b + 126 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 126 * OS1_S1 + 2));
                    *(b + 236 * OS1_S1 + 1) = Z_PA * *(b + 175 * OS1_S1 + 1) +
                                              alpha_Z * *(b + 175 * OS1_S1 + 2);
                    *(b + 237 * OS1_S1 + 1) =
                        Z_PA * *(b + 176 * OS1_S1 + 1) +
                        alpha_Z * *(b + 176 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 126 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 126 * OS1_S1 + 2));
                    *(b + 239 * OS1_S1 + 1) = Y_PA * *(b + 179 * OS1_S1 + 1) +
                                              alpha_Y * *(b + 179 * OS1_S1 + 2);
                    *(b + 240 * OS1_S1 + 1) =
                        Z_PA * *(b + 179 * OS1_S1 + 1) +
                        alpha_Z * *(b + 179 * OS1_S1 + 2) +
                        4 * one_over_two_p *
                            (*(b + 129 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 129 * OS1_S1 + 2));
                    *(b + 241 * OS1_S1 + 1) =
                        X_PA * *(b + 186 * OS1_S1 + 1) +
                        alpha_X * *(b + 186 * OS1_S1 + 2) +
                        3 * one_over_two_p *
                            (*(b + 141 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 141 * OS1_S1 + 2));
                    *(b + 242 * OS1_S1 + 1) = Z_PA * *(b + 180 * OS1_S1 + 1) +
                                              alpha_Z * *(b + 180 * OS1_S1 + 2);
                    *(b + 243 * OS1_S1 + 1) =
                        Z_PA * *(b + 181 * OS1_S1 + 1) +
                        alpha_Z * *(b + 181 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 130 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 130 * OS1_S1 + 2));
                    *(b + 245 * OS1_S1 + 1) =
                        Y_PA * *(b + 184 * OS1_S1 + 1) +
                        alpha_Y * *(b + 184 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 134 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 134 * OS1_S1 + 2));
                    *(b + 246 * OS1_S1 + 1) = Y_PA * *(b + 185 * OS1_S1 + 1) +
                                              alpha_Y * *(b + 185 * OS1_S1 + 2);
                    *(b + 247 * OS1_S1 + 1) =
                        X_PA * *(b + 192 * OS1_S1 + 1) +
                        alpha_X * *(b + 192 * OS1_S1 + 2) +
                        3 * one_over_two_p *
                            (*(b + 147 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 147 * OS1_S1 + 2));
                    *(b + 248 * OS1_S1 + 1) =
                        X_PA * *(b + 193 * OS1_S1 + 1) +
                        alpha_X * *(b + 193 * OS1_S1 + 2) +
                        2 * one_over_two_p *
                            (*(b + 148 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 148 * OS1_S1 + 2));
                    *(b + 249 * OS1_S1 + 1) = Z_PA * *(b + 186 * OS1_S1 + 1) +
                                              alpha_Z * *(b + 186 * OS1_S1 + 2);
                    *(b + 250 * OS1_S1 + 1) =
                        Z_PA * *(b + 187 * OS1_S1 + 1) +
                        alpha_Z * *(b + 187 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 135 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 135 * OS1_S1 + 2));
                    *(b + 253 * OS1_S1 + 1) =
                        Y_PA * *(b + 191 * OS1_S1 + 1) +
                        alpha_Y * *(b + 191 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 140 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 140 * OS1_S1 + 2));
                    *(b + 254 * OS1_S1 + 1) = Y_PA * *(b + 192 * OS1_S1 + 1) +
                                              alpha_Y * *(b + 192 * OS1_S1 + 2);
                    *(b + 255 * OS1_S1 + 1) =
                        X_PA * *(b + 200 * OS1_S1 + 1) +
                        alpha_X * *(b + 200 * OS1_S1 + 2) +
                        2 * one_over_two_p *
                            (*(b + 155 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 155 * OS1_S1 + 2));
                    *(b + 256 * OS1_S1 + 1) =
                        X_PA * *(b + 201 * OS1_S1 + 1) +
                        alpha_X * *(b + 201 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 156 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 156 * OS1_S1 + 2));
                    *(b + 257 * OS1_S1 + 1) = Z_PA * *(b + 193 * OS1_S1 + 1) +
                                              alpha_Z * *(b + 193 * OS1_S1 + 2);
                    *(b + 260 * OS1_S1 + 1) =
                        X_PA * *(b + 205 * OS1_S1 + 1) +
                        alpha_X * *(b + 205 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 160 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 160 * OS1_S1 + 2));
                    *(b + 263 * OS1_S1 + 1) = Y_PA * *(b + 200 * OS1_S1 + 1) +
                                              alpha_Y * *(b + 200 * OS1_S1 + 2);
                    *(b + 264 * OS1_S1 + 1) =
                        X_PA * *(b + 209 * OS1_S1 + 1) +
                        alpha_X * *(b + 209 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 164 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 164 * OS1_S1 + 2));
                    *(b + 265 * OS1_S1 + 1) = X_PA * *(b + 210 * OS1_S1 + 1) +
                                              alpha_X * *(b + 210 * OS1_S1 + 2);
                    *(b + 268 * OS1_S1 + 1) = X_PA * *(b + 213 * OS1_S1 + 1) +
                                              alpha_X * *(b + 213 * OS1_S1 + 2);
                    *(b + 269 * OS1_S1 + 1) = X_PA * *(b + 214 * OS1_S1 + 1) +
                                              alpha_X * *(b + 214 * OS1_S1 + 2);
                    *(b + 270 * OS1_S1 + 1) = X_PA * *(b + 215 * OS1_S1 + 1) +
                                              alpha_X * *(b + 215 * OS1_S1 + 2);
                    *(b + 271 * OS1_S1 + 1) = X_PA * *(b + 216 * OS1_S1 + 1) +
                                              alpha_X * *(b + 216 * OS1_S1 + 2);
                    *(b + 274 * OS1_S1 + 1) = X_PA * *(b + 219 * OS1_S1 + 1) +
                                              alpha_X * *(b + 219 * OS1_S1 + 2);
                    *(b + 275 * OS1_S1 + 1) =
                        Y_PA * *(b + 210 * OS1_S1 + 1) +
                        alpha_Y * *(b + 210 * OS1_S1 + 2) +
                        9 * one_over_two_p *
                            (*(b + 156 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 156 * OS1_S1 + 2));
                    *(b + 276 * OS1_S1 + 1) = Z_PA * *(b + 210 * OS1_S1 + 1) +
                                              alpha_Z * *(b + 210 * OS1_S1 + 2);
                    *(b + 277 * OS1_S1 + 1) =
                        Z_PA * *(b + 211 * OS1_S1 + 1) +
                        alpha_Z * *(b + 211 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 156 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 156 * OS1_S1 + 2));
                    *(b + 278 * OS1_S1 + 1) =
                        Z_PA * *(b + 212 * OS1_S1 + 1) +
                        alpha_Z * *(b + 212 * OS1_S1 + 2) +
                        2 * one_over_two_p *
                            (*(b + 157 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 157 * OS1_S1 + 2));
                    *(b + 279 * OS1_S1 + 1) =
                        Z_PA * *(b + 213 * OS1_S1 + 1) +
                        alpha_Z * *(b + 213 * OS1_S1 + 2) +
                        3 * one_over_two_p *
                            (*(b + 158 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 158 * OS1_S1 + 2));
                    *(b + 280 * OS1_S1 + 1) =
                        Z_PA * *(b + 214 * OS1_S1 + 1) +
                        alpha_Z * *(b + 214 * OS1_S1 + 2) +
                        4 * one_over_two_p *
                            (*(b + 159 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 159 * OS1_S1 + 2));
                    *(b + 281 * OS1_S1 + 1) =
                        Y_PA * *(b + 216 * OS1_S1 + 1) +
                        alpha_Y * *(b + 216 * OS1_S1 + 2) +
                        3 * one_over_two_p *
                            (*(b + 162 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 162 * OS1_S1 + 2));
                    *(b + 282 * OS1_S1 + 1) =
                        Y_PA * *(b + 217 * OS1_S1 + 1) +
                        alpha_Y * *(b + 217 * OS1_S1 + 2) +
                        2 * one_over_two_p *
                            (*(b + 163 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 163 * OS1_S1 + 2));
                    *(b + 283 * OS1_S1 + 1) =
                        Y_PA * *(b + 218 * OS1_S1 + 1) +
                        alpha_Y * *(b + 218 * OS1_S1 + 2) +
                        one_over_two_p *
                            (*(b + 164 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 164 * OS1_S1 + 2));
                    *(b + 284 * OS1_S1 + 1) = Y_PA * *(b + 219 * OS1_S1 + 1) +
                                              alpha_Y * *(b + 219 * OS1_S1 + 2);
                    *(b + 285 * OS1_S1 + 1) =
                        Z_PA * *(b + 219 * OS1_S1 + 1) +
                        alpha_Z * *(b + 219 * OS1_S1 + 2) +
                        9 * one_over_two_p *
                            (*(b + 164 * OS1_S1 + 1) -
                             alpha_over_p * *(b + 164 * OS1_S1 + 2));
                    *(b + 286 * OS1_S1 + 0) =
                        X_PA * *(b + 220 * OS1_S1 + 0) +
                        alpha_X * *(b + 220 * OS1_S1 + 1) +
                        10 * one_over_two_p *
                            (*(b + 165 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 165 * OS1_S1 + 1));
                    *(b + 287 * OS1_S1 + 0) = Y_PA * *(b + 220 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 220 * OS1_S1 + 1);
                    *(b + 288 * OS1_S1 + 0) = Z_PA * *(b + 220 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 220 * OS1_S1 + 1);
                    *(b + 289 * OS1_S1 + 0) =
                        Y_PA * *(b + 221 * OS1_S1 + 0) +
                        alpha_Y * *(b + 221 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 165 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 165 * OS1_S1 + 1));
                    *(b + 290 * OS1_S1 + 0) = Z_PA * *(b + 221 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 221 * OS1_S1 + 1);
                    *(b + 291 * OS1_S1 + 0) =
                        Z_PA * *(b + 222 * OS1_S1 + 0) +
                        alpha_Z * *(b + 222 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 165 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 165 * OS1_S1 + 1));
                    *(b + 292 * OS1_S1 + 0) =
                        Y_PA * *(b + 223 * OS1_S1 + 0) +
                        alpha_Y * *(b + 223 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 166 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 166 * OS1_S1 + 1));
                    *(b + 293 * OS1_S1 + 0) = Z_PA * *(b + 223 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 223 * OS1_S1 + 1);
                    *(b + 294 * OS1_S1 + 0) = Y_PA * *(b + 225 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 225 * OS1_S1 + 1);
                    *(b + 295 * OS1_S1 + 0) =
                        Z_PA * *(b + 225 * OS1_S1 + 0) +
                        alpha_Z * *(b + 225 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 167 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 167 * OS1_S1 + 1));
                    *(b + 296 * OS1_S1 + 0) =
                        Y_PA * *(b + 226 * OS1_S1 + 0) +
                        alpha_Y * *(b + 226 * OS1_S1 + 1) +
                        3 * one_over_two_p *
                            (*(b + 168 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 168 * OS1_S1 + 1));
                    *(b + 297 * OS1_S1 + 0) = Z_PA * *(b + 226 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 226 * OS1_S1 + 1);
                    *(b + 298 * OS1_S1 + 0) =
                        Z_PA * *(b + 227 * OS1_S1 + 0) +
                        alpha_Z * *(b + 227 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 168 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 168 * OS1_S1 + 1));
                    *(b + 299 * OS1_S1 + 0) = Y_PA * *(b + 229 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 229 * OS1_S1 + 1);
                    *(b + 300 * OS1_S1 + 0) =
                        Z_PA * *(b + 229 * OS1_S1 + 0) +
                        alpha_Z * *(b + 229 * OS1_S1 + 1) +
                        3 * one_over_two_p *
                            (*(b + 170 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 170 * OS1_S1 + 1));
                    *(b + 301 * OS1_S1 + 0) =
                        Y_PA * *(b + 230 * OS1_S1 + 0) +
                        alpha_Y * *(b + 230 * OS1_S1 + 1) +
                        4 * one_over_two_p *
                            (*(b + 171 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 171 * OS1_S1 + 1));
                    *(b + 302 * OS1_S1 + 0) = Z_PA * *(b + 230 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 230 * OS1_S1 + 1);
                    *(b + 303 * OS1_S1 + 0) =
                        Z_PA * *(b + 231 * OS1_S1 + 0) +
                        alpha_Z * *(b + 231 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 171 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 171 * OS1_S1 + 1));
                    *(b + 304 * OS1_S1 + 0) =
                        Y_PA * *(b + 233 * OS1_S1 + 0) +
                        alpha_Y * *(b + 233 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 174 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 174 * OS1_S1 + 1));
                    *(b + 305 * OS1_S1 + 0) = Y_PA * *(b + 234 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 234 * OS1_S1 + 1);
                    *(b + 306 * OS1_S1 + 0) =
                        Z_PA * *(b + 234 * OS1_S1 + 0) +
                        alpha_Z * *(b + 234 * OS1_S1 + 1) +
                        4 * one_over_two_p *
                            (*(b + 174 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 174 * OS1_S1 + 1));
                    *(b + 307 * OS1_S1 + 0) =
                        X_PA * *(b + 241 * OS1_S1 + 0) +
                        alpha_X * *(b + 241 * OS1_S1 + 1) +
                        4 * one_over_two_p *
                            (*(b + 186 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 186 * OS1_S1 + 1));
                    *(b + 308 * OS1_S1 + 0) = Z_PA * *(b + 235 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 235 * OS1_S1 + 1);
                    *(b + 309 * OS1_S1 + 0) =
                        Z_PA * *(b + 236 * OS1_S1 + 0) +
                        alpha_Z * *(b + 236 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 175 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 175 * OS1_S1 + 1));
                    *(b + 310 * OS1_S1 + 0) =
                        Z_PA * *(b + 237 * OS1_S1 + 0) +
                        alpha_Z * *(b + 237 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 176 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 176 * OS1_S1 + 1));
                    *(b + 311 * OS1_S1 + 0) =
                        Y_PA * *(b + 239 * OS1_S1 + 0) +
                        alpha_Y * *(b + 239 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 179 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 179 * OS1_S1 + 1));
                    *(b + 312 * OS1_S1 + 0) = Y_PA * *(b + 240 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 240 * OS1_S1 + 1);
                    *(b + 313 * OS1_S1 + 0) =
                        X_PA * *(b + 247 * OS1_S1 + 0) +
                        alpha_X * *(b + 247 * OS1_S1 + 1) +
                        4 * one_over_two_p *
                            (*(b + 192 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 192 * OS1_S1 + 1));
                    *(b + 314 * OS1_S1 + 0) =
                        X_PA * *(b + 248 * OS1_S1 + 0) +
                        alpha_X * *(b + 248 * OS1_S1 + 1) +
                        3 * one_over_two_p *
                            (*(b + 193 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 193 * OS1_S1 + 1));
                    *(b + 315 * OS1_S1 + 0) = Z_PA * *(b + 241 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 241 * OS1_S1 + 1);
                    *(b + 316 * OS1_S1 + 0) =
                        Z_PA * *(b + 242 * OS1_S1 + 0) +
                        alpha_Z * *(b + 242 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 180 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 180 * OS1_S1 + 1));
                    *(b + 317 * OS1_S1 + 0) =
                        Z_PA * *(b + 243 * OS1_S1 + 0) +
                        alpha_Z * *(b + 243 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 181 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 181 * OS1_S1 + 1));
                    *(b + 318 * OS1_S1 + 0) =
                        Y_PA * *(b + 245 * OS1_S1 + 0) +
                        alpha_Y * *(b + 245 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 184 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 184 * OS1_S1 + 1));
                    *(b + 319 * OS1_S1 + 0) =
                        Y_PA * *(b + 246 * OS1_S1 + 0) +
                        alpha_Y * *(b + 246 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 185 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 185 * OS1_S1 + 1));
                    *(b + 320 * OS1_S1 + 0) = Y_PA * *(b + 247 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 247 * OS1_S1 + 1);
                    *(b + 321 * OS1_S1 + 0) =
                        X_PA * *(b + 255 * OS1_S1 + 0) +
                        alpha_X * *(b + 255 * OS1_S1 + 1) +
                        3 * one_over_two_p *
                            (*(b + 200 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 200 * OS1_S1 + 1));
                    *(b + 322 * OS1_S1 + 0) =
                        X_PA * *(b + 256 * OS1_S1 + 0) +
                        alpha_X * *(b + 256 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 201 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 201 * OS1_S1 + 1));
                    *(b + 323 * OS1_S1 + 0) = Z_PA * *(b + 248 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 248 * OS1_S1 + 1);
                    *(b + 324 * OS1_S1 + 0) =
                        Z_PA * *(b + 249 * OS1_S1 + 0) +
                        alpha_Z * *(b + 249 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 186 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 186 * OS1_S1 + 1));
                    *(b + 325 * OS1_S1 + 0) =
                        Z_PA * *(b + 250 * OS1_S1 + 0) +
                        alpha_Z * *(b + 250 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 187 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 187 * OS1_S1 + 1));
                    *(b + 326 * OS1_S1 + 0) =
                        X_PA * *(b + 260 * OS1_S1 + 0) +
                        alpha_X * *(b + 260 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 205 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 205 * OS1_S1 + 1));
                    *(b + 327 * OS1_S1 + 0) =
                        Y_PA * *(b + 253 * OS1_S1 + 0) +
                        alpha_Y * *(b + 253 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 191 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 191 * OS1_S1 + 1));
                    *(b + 328 * OS1_S1 + 0) =
                        Y_PA * *(b + 254 * OS1_S1 + 0) +
                        alpha_Y * *(b + 254 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 192 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 192 * OS1_S1 + 1));
                    *(b + 329 * OS1_S1 + 0) = Y_PA * *(b + 255 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 255 * OS1_S1 + 1);
                    *(b + 330 * OS1_S1 + 0) =
                        X_PA * *(b + 264 * OS1_S1 + 0) +
                        alpha_X * *(b + 264 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 209 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 209 * OS1_S1 + 1));
                    *(b + 331 * OS1_S1 + 0) =
                        X_PA * *(b + 265 * OS1_S1 + 0) +
                        alpha_X * *(b + 265 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 210 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 210 * OS1_S1 + 1));
                    *(b + 332 * OS1_S1 + 0) = Z_PA * *(b + 256 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 256 * OS1_S1 + 1);
                    *(b + 333 * OS1_S1 + 0) =
                        Z_PA * *(b + 257 * OS1_S1 + 0) +
                        alpha_Z * *(b + 257 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 193 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 193 * OS1_S1 + 1));
                    *(b + 334 * OS1_S1 + 0) =
                        X_PA * *(b + 268 * OS1_S1 + 0) +
                        alpha_X * *(b + 268 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 213 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 213 * OS1_S1 + 1));
                    *(b + 335 * OS1_S1 + 0) =
                        X_PA * *(b + 269 * OS1_S1 + 0) +
                        alpha_X * *(b + 269 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 214 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 214 * OS1_S1 + 1));
                    *(b + 336 * OS1_S1 + 0) =
                        X_PA * *(b + 270 * OS1_S1 + 0) +
                        alpha_X * *(b + 270 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 215 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 215 * OS1_S1 + 1));
                    *(b + 337 * OS1_S1 + 0) =
                        X_PA * *(b + 271 * OS1_S1 + 0) +
                        alpha_X * *(b + 271 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 216 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 216 * OS1_S1 + 1));
                    *(b + 338 * OS1_S1 + 0) =
                        Y_PA * *(b + 263 * OS1_S1 + 0) +
                        alpha_Y * *(b + 263 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 200 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 200 * OS1_S1 + 1));
                    *(b + 339 * OS1_S1 + 0) = Y_PA * *(b + 264 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 264 * OS1_S1 + 1);
                    *(b + 340 * OS1_S1 + 0) =
                        X_PA * *(b + 274 * OS1_S1 + 0) +
                        alpha_X * *(b + 274 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 219 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 219 * OS1_S1 + 1));
                    *(b + 341 * OS1_S1 + 0) = X_PA * *(b + 275 * OS1_S1 + 0) +
                                              alpha_X * *(b + 275 * OS1_S1 + 1);
                    *(b + 342 * OS1_S1 + 0) = Z_PA * *(b + 265 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 265 * OS1_S1 + 1);
                    *(b + 343 * OS1_S1 + 0) = X_PA * *(b + 277 * OS1_S1 + 0) +
                                              alpha_X * *(b + 277 * OS1_S1 + 1);
                    *(b + 344 * OS1_S1 + 0) = X_PA * *(b + 278 * OS1_S1 + 0) +
                                              alpha_X * *(b + 278 * OS1_S1 + 1);
                    *(b + 345 * OS1_S1 + 0) = X_PA * *(b + 279 * OS1_S1 + 0) +
                                              alpha_X * *(b + 279 * OS1_S1 + 1);
                    *(b + 346 * OS1_S1 + 0) = X_PA * *(b + 280 * OS1_S1 + 0) +
                                              alpha_X * *(b + 280 * OS1_S1 + 1);
                    *(b + 347 * OS1_S1 + 0) = X_PA * *(b + 281 * OS1_S1 + 0) +
                                              alpha_X * *(b + 281 * OS1_S1 + 1);
                    *(b + 348 * OS1_S1 + 0) = X_PA * *(b + 282 * OS1_S1 + 0) +
                                              alpha_X * *(b + 282 * OS1_S1 + 1);
                    *(b + 349 * OS1_S1 + 0) = X_PA * *(b + 283 * OS1_S1 + 0) +
                                              alpha_X * *(b + 283 * OS1_S1 + 1);
                    *(b + 350 * OS1_S1 + 0) = Y_PA * *(b + 274 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 274 * OS1_S1 + 1);
                    *(b + 351 * OS1_S1 + 0) = X_PA * *(b + 285 * OS1_S1 + 0) +
                                              alpha_X * *(b + 285 * OS1_S1 + 1);
                    *(b + 352 * OS1_S1 + 0) =
                        Y_PA * *(b + 275 * OS1_S1 + 0) +
                        alpha_Y * *(b + 275 * OS1_S1 + 1) +
                        10 * one_over_two_p *
                            (*(b + 210 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 210 * OS1_S1 + 1));
                    *(b + 353 * OS1_S1 + 0) = Z_PA * *(b + 275 * OS1_S1 + 0) +
                                              alpha_Z * *(b + 275 * OS1_S1 + 1);
                    *(b + 354 * OS1_S1 + 0) =
                        Z_PA * *(b + 276 * OS1_S1 + 0) +
                        alpha_Z * *(b + 276 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 210 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 210 * OS1_S1 + 1));
                    *(b + 355 * OS1_S1 + 0) =
                        Z_PA * *(b + 277 * OS1_S1 + 0) +
                        alpha_Z * *(b + 277 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 211 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 211 * OS1_S1 + 1));
                    *(b + 356 * OS1_S1 + 0) =
                        Z_PA * *(b + 278 * OS1_S1 + 0) +
                        alpha_Z * *(b + 278 * OS1_S1 + 1) +
                        3 * one_over_two_p *
                            (*(b + 212 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 212 * OS1_S1 + 1));
                    *(b + 357 * OS1_S1 + 0) =
                        Z_PA * *(b + 279 * OS1_S1 + 0) +
                        alpha_Z * *(b + 279 * OS1_S1 + 1) +
                        4 * one_over_two_p *
                            (*(b + 213 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 213 * OS1_S1 + 1));
                    *(b + 358 * OS1_S1 + 0) =
                        Y_PA * *(b + 281 * OS1_S1 + 0) +
                        alpha_Y * *(b + 281 * OS1_S1 + 1) +
                        4 * one_over_two_p *
                            (*(b + 216 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 216 * OS1_S1 + 1));
                    *(b + 359 * OS1_S1 + 0) =
                        Y_PA * *(b + 282 * OS1_S1 + 0) +
                        alpha_Y * *(b + 282 * OS1_S1 + 1) +
                        3 * one_over_two_p *
                            (*(b + 217 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 217 * OS1_S1 + 1));
                    *(b + 360 * OS1_S1 + 0) =
                        Y_PA * *(b + 283 * OS1_S1 + 0) +
                        alpha_Y * *(b + 283 * OS1_S1 + 1) +
                        2 * one_over_two_p *
                            (*(b + 218 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 218 * OS1_S1 + 1));
                    *(b + 361 * OS1_S1 + 0) =
                        Y_PA * *(b + 284 * OS1_S1 + 0) +
                        alpha_Y * *(b + 284 * OS1_S1 + 1) +
                        one_over_two_p *
                            (*(b + 219 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 219 * OS1_S1 + 1));
                    *(b + 362 * OS1_S1 + 0) = Y_PA * *(b + 285 * OS1_S1 + 0) +
                                              alpha_Y * *(b + 285 * OS1_S1 + 1);
                    *(b + 363 * OS1_S1 + 0) =
                        Z_PA * *(b + 285 * OS1_S1 + 0) +
                        alpha_Z * *(b + 285 * OS1_S1 + 1) +
                        10 * one_over_two_p *
                            (*(b + 219 * OS1_S1 + 0) -
                             alpha_over_p * *(b + 219 * OS1_S1 + 1));
                    if (m > 11) {
                        *(b + 1 * OS1_S1 + 11) =
                            X_PA * *(b + 0 * OS1_S1 + 11) +
                            alpha_X * *(b + 0 * OS1_S1 + 12);
                        *(b + 2 * OS1_S1 + 11) =
                            Y_PA * *(b + 0 * OS1_S1 + 11) +
                            alpha_Y * *(b + 0 * OS1_S1 + 12);
                        *(b + 3 * OS1_S1 + 11) =
                            Z_PA * *(b + 0 * OS1_S1 + 11) +
                            alpha_Z * *(b + 0 * OS1_S1 + 12);
                        *(b + 4 * OS1_S1 + 10) =
                            X_PA * *(b + 1 * OS1_S1 + 10) +
                            alpha_X * *(b + 1 * OS1_S1 + 11) +
                            one_over_two_p *
                                (*(b + 0 * OS1_S1 + 10) -
                                 alpha_over_p * *(b + 0 * OS1_S1 + 11));
                        *(b + 7 * OS1_S1 + 10) =
                            Y_PA * *(b + 2 * OS1_S1 + 10) +
                            alpha_Y * *(b + 2 * OS1_S1 + 11) +
                            one_over_two_p *
                                (*(b + 0 * OS1_S1 + 10) -
                                 alpha_over_p * *(b + 0 * OS1_S1 + 11));
                        *(b + 9 * OS1_S1 + 10) =
                            Z_PA * *(b + 3 * OS1_S1 + 10) +
                            alpha_Z * *(b + 3 * OS1_S1 + 11) +
                            one_over_two_p *
                                (*(b + 0 * OS1_S1 + 10) -
                                 alpha_over_p * *(b + 0 * OS1_S1 + 11));
                        *(b + 10 * OS1_S1 + 9) =
                            X_PA * *(b + 4 * OS1_S1 + 9) +
                            alpha_X * *(b + 4 * OS1_S1 + 10) +
                            2 * one_over_two_p *
                                (*(b + 1 * OS1_S1 + 9) -
                                 alpha_over_p * *(b + 1 * OS1_S1 + 10));
                        *(b + 16 * OS1_S1 + 9) =
                            Y_PA * *(b + 7 * OS1_S1 + 9) +
                            alpha_Y * *(b + 7 * OS1_S1 + 10) +
                            2 * one_over_two_p *
                                (*(b + 2 * OS1_S1 + 9) -
                                 alpha_over_p * *(b + 2 * OS1_S1 + 10));
                        *(b + 19 * OS1_S1 + 9) =
                            Z_PA * *(b + 9 * OS1_S1 + 9) +
                            alpha_Z * *(b + 9 * OS1_S1 + 10) +
                            2 * one_over_two_p *
                                (*(b + 3 * OS1_S1 + 9) -
                                 alpha_over_p * *(b + 3 * OS1_S1 + 10));
                        *(b + 20 * OS1_S1 + 8) =
                            X_PA * *(b + 10 * OS1_S1 + 8) +
                            alpha_X * *(b + 10 * OS1_S1 + 9) +
                            3 * one_over_two_p *
                                (*(b + 4 * OS1_S1 + 8) -
                                 alpha_over_p * *(b + 4 * OS1_S1 + 9));
                        *(b + 30 * OS1_S1 + 8) =
                            Y_PA * *(b + 16 * OS1_S1 + 8) +
                            alpha_Y * *(b + 16 * OS1_S1 + 9) +
                            3 * one_over_two_p *
                                (*(b + 7 * OS1_S1 + 8) -
                                 alpha_over_p * *(b + 7 * OS1_S1 + 9));
                        *(b + 34 * OS1_S1 + 8) =
                            Z_PA * *(b + 19 * OS1_S1 + 8) +
                            alpha_Z * *(b + 19 * OS1_S1 + 9) +
                            3 * one_over_two_p *
                                (*(b + 9 * OS1_S1 + 8) -
                                 alpha_over_p * *(b + 9 * OS1_S1 + 9));
                        *(b + 35 * OS1_S1 + 7) =
                            X_PA * *(b + 20 * OS1_S1 + 7) +
                            alpha_X * *(b + 20 * OS1_S1 + 8) +
                            4 * one_over_two_p *
                                (*(b + 10 * OS1_S1 + 7) -
                                 alpha_over_p * *(b + 10 * OS1_S1 + 8));
                        *(b + 36 * OS1_S1 + 7) =
                            Y_PA * *(b + 20 * OS1_S1 + 7) +
                            alpha_Y * *(b + 20 * OS1_S1 + 8);
                        *(b + 50 * OS1_S1 + 7) =
                            Y_PA * *(b + 30 * OS1_S1 + 7) +
                            alpha_Y * *(b + 30 * OS1_S1 + 8) +
                            4 * one_over_two_p *
                                (*(b + 16 * OS1_S1 + 7) -
                                 alpha_over_p * *(b + 16 * OS1_S1 + 8));
                        *(b + 55 * OS1_S1 + 7) =
                            Z_PA * *(b + 34 * OS1_S1 + 7) +
                            alpha_Z * *(b + 34 * OS1_S1 + 8) +
                            4 * one_over_two_p *
                                (*(b + 19 * OS1_S1 + 7) -
                                 alpha_over_p * *(b + 19 * OS1_S1 + 8));
                        *(b + 56 * OS1_S1 + 6) =
                            X_PA * *(b + 35 * OS1_S1 + 6) +
                            alpha_X * *(b + 35 * OS1_S1 + 7) +
                            5 * one_over_two_p *
                                (*(b + 20 * OS1_S1 + 6) -
                                 alpha_over_p * *(b + 20 * OS1_S1 + 7));
                        *(b + 57 * OS1_S1 + 6) =
                            Y_PA * *(b + 35 * OS1_S1 + 6) +
                            alpha_Y * *(b + 35 * OS1_S1 + 7);
                        *(b + 58 * OS1_S1 + 6) =
                            Z_PA * *(b + 35 * OS1_S1 + 6) +
                            alpha_Z * *(b + 35 * OS1_S1 + 7);
                        *(b + 59 * OS1_S1 + 6) =
                            Y_PA * *(b + 36 * OS1_S1 + 6) +
                            alpha_Y * *(b + 36 * OS1_S1 + 7) +
                            one_over_two_p *
                                (*(b + 20 * OS1_S1 + 6) -
                                 alpha_over_p * *(b + 20 * OS1_S1 + 7));
                        *(b + 71 * OS1_S1 + 6) =
                            X_PA * *(b + 50 * OS1_S1 + 6) +
                            alpha_X * *(b + 50 * OS1_S1 + 7);
                        *(b + 76 * OS1_S1 + 6) =
                            X_PA * *(b + 55 * OS1_S1 + 6) +
                            alpha_X * *(b + 55 * OS1_S1 + 7);
                        *(b + 77 * OS1_S1 + 6) =
                            Y_PA * *(b + 50 * OS1_S1 + 6) +
                            alpha_Y * *(b + 50 * OS1_S1 + 7) +
                            5 * one_over_two_p *
                                (*(b + 30 * OS1_S1 + 6) -
                                 alpha_over_p * *(b + 30 * OS1_S1 + 7));
                        *(b + 78 * OS1_S1 + 6) =
                            Z_PA * *(b + 50 * OS1_S1 + 6) +
                            alpha_Z * *(b + 50 * OS1_S1 + 7);
                        *(b + 82 * OS1_S1 + 6) =
                            Y_PA * *(b + 55 * OS1_S1 + 6) +
                            alpha_Y * *(b + 55 * OS1_S1 + 7);
                        *(b + 83 * OS1_S1 + 6) =
                            Z_PA * *(b + 55 * OS1_S1 + 6) +
                            alpha_Z * *(b + 55 * OS1_S1 + 7) +
                            5 * one_over_two_p *
                                (*(b + 34 * OS1_S1 + 6) -
                                 alpha_over_p * *(b + 34 * OS1_S1 + 7));
                        *(b + 84 * OS1_S1 + 5) =
                            X_PA * *(b + 56 * OS1_S1 + 5) +
                            alpha_X * *(b + 56 * OS1_S1 + 6) +
                            6 * one_over_two_p *
                                (*(b + 35 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 35 * OS1_S1 + 6));
                        *(b + 85 * OS1_S1 + 5) =
                            Y_PA * *(b + 56 * OS1_S1 + 5) +
                            alpha_Y * *(b + 56 * OS1_S1 + 6);
                        *(b + 86 * OS1_S1 + 5) =
                            Z_PA * *(b + 56 * OS1_S1 + 5) +
                            alpha_Z * *(b + 56 * OS1_S1 + 6);
                        *(b + 87 * OS1_S1 + 5) =
                            Y_PA * *(b + 57 * OS1_S1 + 5) +
                            alpha_Y * *(b + 57 * OS1_S1 + 6) +
                            one_over_two_p *
                                (*(b + 35 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 35 * OS1_S1 + 6));
                        *(b + 89 * OS1_S1 + 5) =
                            Z_PA * *(b + 58 * OS1_S1 + 5) +
                            alpha_Z * *(b + 58 * OS1_S1 + 6) +
                            one_over_two_p *
                                (*(b + 35 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 35 * OS1_S1 + 6));
                        *(b + 90 * OS1_S1 + 5) =
                            Y_PA * *(b + 59 * OS1_S1 + 5) +
                            alpha_Y * *(b + 59 * OS1_S1 + 6) +
                            2 * one_over_two_p *
                                (*(b + 36 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 36 * OS1_S1 + 6));
                        *(b + 99 * OS1_S1 + 5) =
                            X_PA * *(b + 71 * OS1_S1 + 5) +
                            alpha_X * *(b + 71 * OS1_S1 + 6) +
                            one_over_two_p *
                                (*(b + 50 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 50 * OS1_S1 + 6));
                        *(b + 104 * OS1_S1 + 5) =
                            X_PA * *(b + 76 * OS1_S1 + 5) +
                            alpha_X * *(b + 76 * OS1_S1 + 6) +
                            one_over_two_p *
                                (*(b + 55 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 55 * OS1_S1 + 6));
                        *(b + 105 * OS1_S1 + 5) =
                            X_PA * *(b + 77 * OS1_S1 + 5) +
                            alpha_X * *(b + 77 * OS1_S1 + 6);
                        *(b + 111 * OS1_S1 + 5) =
                            X_PA * *(b + 83 * OS1_S1 + 5) +
                            alpha_X * *(b + 83 * OS1_S1 + 6);
                        *(b + 112 * OS1_S1 + 5) =
                            Y_PA * *(b + 77 * OS1_S1 + 5) +
                            alpha_Y * *(b + 77 * OS1_S1 + 6) +
                            6 * one_over_two_p *
                                (*(b + 50 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 50 * OS1_S1 + 6));
                        *(b + 113 * OS1_S1 + 5) =
                            Z_PA * *(b + 77 * OS1_S1 + 5) +
                            alpha_Z * *(b + 77 * OS1_S1 + 6);
                        *(b + 114 * OS1_S1 + 5) =
                            Z_PA * *(b + 78 * OS1_S1 + 5) +
                            alpha_Z * *(b + 78 * OS1_S1 + 6) +
                            one_over_two_p *
                                (*(b + 50 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 50 * OS1_S1 + 6));
                        *(b + 117 * OS1_S1 + 5) =
                            Y_PA * *(b + 82 * OS1_S1 + 5) +
                            alpha_Y * *(b + 82 * OS1_S1 + 6) +
                            one_over_two_p *
                                (*(b + 55 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 55 * OS1_S1 + 6));
                        *(b + 118 * OS1_S1 + 5) =
                            Y_PA * *(b + 83 * OS1_S1 + 5) +
                            alpha_Y * *(b + 83 * OS1_S1 + 6);
                        *(b + 119 * OS1_S1 + 5) =
                            Z_PA * *(b + 83 * OS1_S1 + 5) +
                            alpha_Z * *(b + 83 * OS1_S1 + 6) +
                            6 * one_over_two_p *
                                (*(b + 55 * OS1_S1 + 5) -
                                 alpha_over_p * *(b + 55 * OS1_S1 + 6));
                        *(b + 120 * OS1_S1 + 4) =
                            X_PA * *(b + 84 * OS1_S1 + 4) +
                            alpha_X * *(b + 84 * OS1_S1 + 5) +
                            7 * one_over_two_p *
                                (*(b + 56 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 56 * OS1_S1 + 5));
                        *(b + 121 * OS1_S1 + 4) =
                            Y_PA * *(b + 84 * OS1_S1 + 4) +
                            alpha_Y * *(b + 84 * OS1_S1 + 5);
                        *(b + 122 * OS1_S1 + 4) =
                            Z_PA * *(b + 84 * OS1_S1 + 4) +
                            alpha_Z * *(b + 84 * OS1_S1 + 5);
                        *(b + 123 * OS1_S1 + 4) =
                            Y_PA * *(b + 85 * OS1_S1 + 4) +
                            alpha_Y * *(b + 85 * OS1_S1 + 5) +
                            one_over_two_p *
                                (*(b + 56 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 56 * OS1_S1 + 5));
                        *(b + 125 * OS1_S1 + 4) =
                            Z_PA * *(b + 86 * OS1_S1 + 4) +
                            alpha_Z * *(b + 86 * OS1_S1 + 5) +
                            one_over_two_p *
                                (*(b + 56 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 56 * OS1_S1 + 5));
                        *(b + 126 * OS1_S1 + 4) =
                            Y_PA * *(b + 87 * OS1_S1 + 4) +
                            alpha_Y * *(b + 87 * OS1_S1 + 5) +
                            2 * one_over_two_p *
                                (*(b + 57 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 57 * OS1_S1 + 5));
                        *(b + 129 * OS1_S1 + 4) =
                            Z_PA * *(b + 89 * OS1_S1 + 4) +
                            alpha_Z * *(b + 89 * OS1_S1 + 5) +
                            2 * one_over_two_p *
                                (*(b + 58 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 58 * OS1_S1 + 5));
                        *(b + 130 * OS1_S1 + 4) =
                            Y_PA * *(b + 90 * OS1_S1 + 4) +
                            alpha_Y * *(b + 90 * OS1_S1 + 5) +
                            3 * one_over_two_p *
                                (*(b + 59 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 59 * OS1_S1 + 5));
                        *(b + 135 * OS1_S1 + 4) =
                            X_PA * *(b + 99 * OS1_S1 + 4) +
                            alpha_X * *(b + 99 * OS1_S1 + 5) +
                            2 * one_over_two_p *
                                (*(b + 71 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 71 * OS1_S1 + 5));
                        *(b + 140 * OS1_S1 + 4) =
                            X_PA * *(b + 104 * OS1_S1 + 4) +
                            alpha_X * *(b + 104 * OS1_S1 + 5) +
                            2 * one_over_two_p *
                                (*(b + 76 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 76 * OS1_S1 + 5));
                        *(b + 141 * OS1_S1 + 4) =
                            X_PA * *(b + 105 * OS1_S1 + 4) +
                            alpha_X * *(b + 105 * OS1_S1 + 5) +
                            one_over_two_p *
                                (*(b + 77 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 77 * OS1_S1 + 5));
                        *(b + 147 * OS1_S1 + 4) =
                            X_PA * *(b + 111 * OS1_S1 + 4) +
                            alpha_X * *(b + 111 * OS1_S1 + 5) +
                            one_over_two_p *
                                (*(b + 83 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 83 * OS1_S1 + 5));
                        *(b + 148 * OS1_S1 + 4) =
                            X_PA * *(b + 112 * OS1_S1 + 4) +
                            alpha_X * *(b + 112 * OS1_S1 + 5);
                        *(b + 155 * OS1_S1 + 4) =
                            X_PA * *(b + 119 * OS1_S1 + 4) +
                            alpha_X * *(b + 119 * OS1_S1 + 5);
                        *(b + 156 * OS1_S1 + 4) =
                            Y_PA * *(b + 112 * OS1_S1 + 4) +
                            alpha_Y * *(b + 112 * OS1_S1 + 5) +
                            7 * one_over_two_p *
                                (*(b + 77 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 77 * OS1_S1 + 5));
                        *(b + 157 * OS1_S1 + 4) =
                            Z_PA * *(b + 112 * OS1_S1 + 4) +
                            alpha_Z * *(b + 112 * OS1_S1 + 5);
                        *(b + 158 * OS1_S1 + 4) =
                            Z_PA * *(b + 113 * OS1_S1 + 4) +
                            alpha_Z * *(b + 113 * OS1_S1 + 5) +
                            one_over_two_p *
                                (*(b + 77 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 77 * OS1_S1 + 5));
                        *(b + 159 * OS1_S1 + 4) =
                            Z_PA * *(b + 114 * OS1_S1 + 4) +
                            alpha_Z * *(b + 114 * OS1_S1 + 5) +
                            2 * one_over_two_p *
                                (*(b + 78 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 78 * OS1_S1 + 5));
                        *(b + 161 * OS1_S1 + 4) =
                            Y_PA * *(b + 117 * OS1_S1 + 4) +
                            alpha_Y * *(b + 117 * OS1_S1 + 5) +
                            2 * one_over_two_p *
                                (*(b + 82 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 82 * OS1_S1 + 5));
                        *(b + 162 * OS1_S1 + 4) =
                            Y_PA * *(b + 118 * OS1_S1 + 4) +
                            alpha_Y * *(b + 118 * OS1_S1 + 5) +
                            one_over_two_p *
                                (*(b + 83 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 83 * OS1_S1 + 5));
                        *(b + 163 * OS1_S1 + 4) =
                            Y_PA * *(b + 119 * OS1_S1 + 4) +
                            alpha_Y * *(b + 119 * OS1_S1 + 5);
                        *(b + 164 * OS1_S1 + 4) =
                            Z_PA * *(b + 119 * OS1_S1 + 4) +
                            alpha_Z * *(b + 119 * OS1_S1 + 5) +
                            7 * one_over_two_p *
                                (*(b + 83 * OS1_S1 + 4) -
                                 alpha_over_p * *(b + 83 * OS1_S1 + 5));
                        *(b + 165 * OS1_S1 + 3) =
                            X_PA * *(b + 120 * OS1_S1 + 3) +
                            alpha_X * *(b + 120 * OS1_S1 + 4) +
                            8 * one_over_two_p *
                                (*(b + 84 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 84 * OS1_S1 + 4));
                        *(b + 166 * OS1_S1 + 3) =
                            Y_PA * *(b + 120 * OS1_S1 + 3) +
                            alpha_Y * *(b + 120 * OS1_S1 + 4);
                        *(b + 167 * OS1_S1 + 3) =
                            Z_PA * *(b + 120 * OS1_S1 + 3) +
                            alpha_Z * *(b + 120 * OS1_S1 + 4);
                        *(b + 168 * OS1_S1 + 3) =
                            Y_PA * *(b + 121 * OS1_S1 + 3) +
                            alpha_Y * *(b + 121 * OS1_S1 + 4) +
                            one_over_two_p *
                                (*(b + 84 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 84 * OS1_S1 + 4));
                        *(b + 170 * OS1_S1 + 3) =
                            Z_PA * *(b + 122 * OS1_S1 + 3) +
                            alpha_Z * *(b + 122 * OS1_S1 + 4) +
                            one_over_two_p *
                                (*(b + 84 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 84 * OS1_S1 + 4));
                        *(b + 171 * OS1_S1 + 3) =
                            Y_PA * *(b + 123 * OS1_S1 + 3) +
                            alpha_Y * *(b + 123 * OS1_S1 + 4) +
                            2 * one_over_two_p *
                                (*(b + 85 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 85 * OS1_S1 + 4));
                        *(b + 174 * OS1_S1 + 3) =
                            Z_PA * *(b + 125 * OS1_S1 + 3) +
                            alpha_Z * *(b + 125 * OS1_S1 + 4) +
                            2 * one_over_two_p *
                                (*(b + 86 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 86 * OS1_S1 + 4));
                        *(b + 175 * OS1_S1 + 3) =
                            Y_PA * *(b + 126 * OS1_S1 + 3) +
                            alpha_Y * *(b + 126 * OS1_S1 + 4) +
                            3 * one_over_two_p *
                                (*(b + 87 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 87 * OS1_S1 + 4));
                        *(b + 179 * OS1_S1 + 3) =
                            Z_PA * *(b + 129 * OS1_S1 + 3) +
                            alpha_Z * *(b + 129 * OS1_S1 + 4) +
                            3 * one_over_two_p *
                                (*(b + 89 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 89 * OS1_S1 + 4));
                        *(b + 180 * OS1_S1 + 3) =
                            X_PA * *(b + 135 * OS1_S1 + 3) +
                            alpha_X * *(b + 135 * OS1_S1 + 4) +
                            3 * one_over_two_p *
                                (*(b + 99 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 99 * OS1_S1 + 4));
                        *(b + 181 * OS1_S1 + 3) =
                            Z_PA * *(b + 130 * OS1_S1 + 3) +
                            alpha_Z * *(b + 130 * OS1_S1 + 4);
                        *(b + 185 * OS1_S1 + 3) =
                            X_PA * *(b + 140 * OS1_S1 + 3) +
                            alpha_X * *(b + 140 * OS1_S1 + 4) +
                            3 * one_over_two_p *
                                (*(b + 104 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 104 * OS1_S1 + 4));
                        *(b + 186 * OS1_S1 + 3) =
                            X_PA * *(b + 141 * OS1_S1 + 3) +
                            alpha_X * *(b + 141 * OS1_S1 + 4) +
                            2 * one_over_two_p *
                                (*(b + 105 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 105 * OS1_S1 + 4));
                        *(b + 192 * OS1_S1 + 3) =
                            X_PA * *(b + 147 * OS1_S1 + 3) +
                            alpha_X * *(b + 147 * OS1_S1 + 4) +
                            2 * one_over_two_p *
                                (*(b + 111 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 111 * OS1_S1 + 4));
                        *(b + 193 * OS1_S1 + 3) =
                            X_PA * *(b + 148 * OS1_S1 + 3) +
                            alpha_X * *(b + 148 * OS1_S1 + 4) +
                            one_over_two_p *
                                (*(b + 112 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 112 * OS1_S1 + 4));
                        *(b + 200 * OS1_S1 + 3) =
                            X_PA * *(b + 155 * OS1_S1 + 3) +
                            alpha_X * *(b + 155 * OS1_S1 + 4) +
                            one_over_two_p *
                                (*(b + 119 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 119 * OS1_S1 + 4));
                        *(b + 201 * OS1_S1 + 3) =
                            X_PA * *(b + 156 * OS1_S1 + 3) +
                            alpha_X * *(b + 156 * OS1_S1 + 4);
                        *(b + 209 * OS1_S1 + 3) =
                            X_PA * *(b + 164 * OS1_S1 + 3) +
                            alpha_X * *(b + 164 * OS1_S1 + 4);
                        *(b + 210 * OS1_S1 + 3) =
                            Y_PA * *(b + 156 * OS1_S1 + 3) +
                            alpha_Y * *(b + 156 * OS1_S1 + 4) +
                            8 * one_over_two_p *
                                (*(b + 112 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 112 * OS1_S1 + 4));
                        *(b + 211 * OS1_S1 + 3) =
                            Z_PA * *(b + 156 * OS1_S1 + 3) +
                            alpha_Z * *(b + 156 * OS1_S1 + 4);
                        *(b + 212 * OS1_S1 + 3) =
                            Z_PA * *(b + 157 * OS1_S1 + 3) +
                            alpha_Z * *(b + 157 * OS1_S1 + 4) +
                            one_over_two_p *
                                (*(b + 112 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 112 * OS1_S1 + 4));
                        *(b + 213 * OS1_S1 + 3) =
                            Z_PA * *(b + 158 * OS1_S1 + 3) +
                            alpha_Z * *(b + 158 * OS1_S1 + 4) +
                            2 * one_over_two_p *
                                (*(b + 113 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 113 * OS1_S1 + 4));
                        *(b + 214 * OS1_S1 + 3) =
                            Z_PA * *(b + 159 * OS1_S1 + 3) +
                            alpha_Z * *(b + 159 * OS1_S1 + 4) +
                            3 * one_over_two_p *
                                (*(b + 114 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 114 * OS1_S1 + 4));
                        *(b + 215 * OS1_S1 + 3) =
                            Y_PA * *(b + 161 * OS1_S1 + 3) +
                            alpha_Y * *(b + 161 * OS1_S1 + 4) +
                            3 * one_over_two_p *
                                (*(b + 117 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 117 * OS1_S1 + 4));
                        *(b + 216 * OS1_S1 + 3) =
                            Y_PA * *(b + 162 * OS1_S1 + 3) +
                            alpha_Y * *(b + 162 * OS1_S1 + 4) +
                            2 * one_over_two_p *
                                (*(b + 118 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 118 * OS1_S1 + 4));
                        *(b + 217 * OS1_S1 + 3) =
                            Y_PA * *(b + 163 * OS1_S1 + 3) +
                            alpha_Y * *(b + 163 * OS1_S1 + 4) +
                            one_over_two_p *
                                (*(b + 119 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 119 * OS1_S1 + 4));
                        *(b + 218 * OS1_S1 + 3) =
                            Y_PA * *(b + 164 * OS1_S1 + 3) +
                            alpha_Y * *(b + 164 * OS1_S1 + 4);
                        *(b + 219 * OS1_S1 + 3) =
                            Z_PA * *(b + 164 * OS1_S1 + 3) +
                            alpha_Z * *(b + 164 * OS1_S1 + 4) +
                            8 * one_over_two_p *
                                (*(b + 119 * OS1_S1 + 3) -
                                 alpha_over_p * *(b + 119 * OS1_S1 + 4));
                        *(b + 220 * OS1_S1 + 2) =
                            X_PA * *(b + 165 * OS1_S1 + 2) +
                            alpha_X * *(b + 165 * OS1_S1 + 3) +
                            9 * one_over_two_p *
                                (*(b + 120 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 120 * OS1_S1 + 3));
                        *(b + 221 * OS1_S1 + 2) =
                            Y_PA * *(b + 165 * OS1_S1 + 2) +
                            alpha_Y * *(b + 165 * OS1_S1 + 3);
                        *(b + 222 * OS1_S1 + 2) =
                            Z_PA * *(b + 165 * OS1_S1 + 2) +
                            alpha_Z * *(b + 165 * OS1_S1 + 3);
                        *(b + 223 * OS1_S1 + 2) =
                            Y_PA * *(b + 166 * OS1_S1 + 2) +
                            alpha_Y * *(b + 166 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 120 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 120 * OS1_S1 + 3));
                        *(b + 225 * OS1_S1 + 2) =
                            Z_PA * *(b + 167 * OS1_S1 + 2) +
                            alpha_Z * *(b + 167 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 120 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 120 * OS1_S1 + 3));
                        *(b + 226 * OS1_S1 + 2) =
                            Y_PA * *(b + 168 * OS1_S1 + 2) +
                            alpha_Y * *(b + 168 * OS1_S1 + 3) +
                            2 * one_over_two_p *
                                (*(b + 121 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 121 * OS1_S1 + 3));
                        *(b + 229 * OS1_S1 + 2) =
                            Z_PA * *(b + 170 * OS1_S1 + 2) +
                            alpha_Z * *(b + 170 * OS1_S1 + 3) +
                            2 * one_over_two_p *
                                (*(b + 122 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 122 * OS1_S1 + 3));
                        *(b + 230 * OS1_S1 + 2) =
                            Y_PA * *(b + 171 * OS1_S1 + 2) +
                            alpha_Y * *(b + 171 * OS1_S1 + 3) +
                            3 * one_over_two_p *
                                (*(b + 123 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 123 * OS1_S1 + 3));
                        *(b + 231 * OS1_S1 + 2) =
                            Z_PA * *(b + 171 * OS1_S1 + 2) +
                            alpha_Z * *(b + 171 * OS1_S1 + 3);
                        *(b + 234 * OS1_S1 + 2) =
                            Z_PA * *(b + 174 * OS1_S1 + 2) +
                            alpha_Z * *(b + 174 * OS1_S1 + 3) +
                            3 * one_over_two_p *
                                (*(b + 125 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 125 * OS1_S1 + 3));
                        *(b + 235 * OS1_S1 + 2) =
                            Y_PA * *(b + 175 * OS1_S1 + 2) +
                            alpha_Y * *(b + 175 * OS1_S1 + 3) +
                            4 * one_over_two_p *
                                (*(b + 126 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 126 * OS1_S1 + 3));
                        *(b + 236 * OS1_S1 + 2) =
                            Z_PA * *(b + 175 * OS1_S1 + 2) +
                            alpha_Z * *(b + 175 * OS1_S1 + 3);
                        *(b + 239 * OS1_S1 + 2) =
                            Y_PA * *(b + 179 * OS1_S1 + 2) +
                            alpha_Y * *(b + 179 * OS1_S1 + 3);
                        *(b + 240 * OS1_S1 + 2) =
                            Z_PA * *(b + 179 * OS1_S1 + 2) +
                            alpha_Z * *(b + 179 * OS1_S1 + 3) +
                            4 * one_over_two_p *
                                (*(b + 129 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 129 * OS1_S1 + 3));
                        *(b + 241 * OS1_S1 + 2) =
                            X_PA * *(b + 186 * OS1_S1 + 2) +
                            alpha_X * *(b + 186 * OS1_S1 + 3) +
                            3 * one_over_two_p *
                                (*(b + 141 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 141 * OS1_S1 + 3));
                        *(b + 242 * OS1_S1 + 2) =
                            Z_PA * *(b + 180 * OS1_S1 + 2) +
                            alpha_Z * *(b + 180 * OS1_S1 + 3);
                        *(b + 243 * OS1_S1 + 2) =
                            Z_PA * *(b + 181 * OS1_S1 + 2) +
                            alpha_Z * *(b + 181 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 130 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 130 * OS1_S1 + 3));
                        *(b + 246 * OS1_S1 + 2) =
                            Y_PA * *(b + 185 * OS1_S1 + 2) +
                            alpha_Y * *(b + 185 * OS1_S1 + 3);
                        *(b + 247 * OS1_S1 + 2) =
                            X_PA * *(b + 192 * OS1_S1 + 2) +
                            alpha_X * *(b + 192 * OS1_S1 + 3) +
                            3 * one_over_two_p *
                                (*(b + 147 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 147 * OS1_S1 + 3));
                        *(b + 248 * OS1_S1 + 2) =
                            X_PA * *(b + 193 * OS1_S1 + 2) +
                            alpha_X * *(b + 193 * OS1_S1 + 3) +
                            2 * one_over_two_p *
                                (*(b + 148 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 148 * OS1_S1 + 3));
                        *(b + 249 * OS1_S1 + 2) =
                            Z_PA * *(b + 186 * OS1_S1 + 2) +
                            alpha_Z * *(b + 186 * OS1_S1 + 3);
                        *(b + 254 * OS1_S1 + 2) =
                            Y_PA * *(b + 192 * OS1_S1 + 2) +
                            alpha_Y * *(b + 192 * OS1_S1 + 3);
                        *(b + 255 * OS1_S1 + 2) =
                            X_PA * *(b + 200 * OS1_S1 + 2) +
                            alpha_X * *(b + 200 * OS1_S1 + 3) +
                            2 * one_over_two_p *
                                (*(b + 155 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 155 * OS1_S1 + 3));
                        *(b + 256 * OS1_S1 + 2) =
                            X_PA * *(b + 201 * OS1_S1 + 2) +
                            alpha_X * *(b + 201 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 156 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 156 * OS1_S1 + 3));
                        *(b + 264 * OS1_S1 + 2) =
                            X_PA * *(b + 209 * OS1_S1 + 2) +
                            alpha_X * *(b + 209 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 164 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 164 * OS1_S1 + 3));
                        *(b + 265 * OS1_S1 + 2) =
                            X_PA * *(b + 210 * OS1_S1 + 2) +
                            alpha_X * *(b + 210 * OS1_S1 + 3);
                        *(b + 269 * OS1_S1 + 2) =
                            X_PA * *(b + 214 * OS1_S1 + 2) +
                            alpha_X * *(b + 214 * OS1_S1 + 3);
                        *(b + 270 * OS1_S1 + 2) =
                            X_PA * *(b + 215 * OS1_S1 + 2) +
                            alpha_X * *(b + 215 * OS1_S1 + 3);
                        *(b + 274 * OS1_S1 + 2) =
                            X_PA * *(b + 219 * OS1_S1 + 2) +
                            alpha_X * *(b + 219 * OS1_S1 + 3);
                        *(b + 275 * OS1_S1 + 2) =
                            Y_PA * *(b + 210 * OS1_S1 + 2) +
                            alpha_Y * *(b + 210 * OS1_S1 + 3) +
                            9 * one_over_two_p *
                                (*(b + 156 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 156 * OS1_S1 + 3));
                        *(b + 276 * OS1_S1 + 2) =
                            Z_PA * *(b + 210 * OS1_S1 + 2) +
                            alpha_Z * *(b + 210 * OS1_S1 + 3);
                        *(b + 277 * OS1_S1 + 2) =
                            Z_PA * *(b + 211 * OS1_S1 + 2) +
                            alpha_Z * *(b + 211 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 156 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 156 * OS1_S1 + 3));
                        *(b + 278 * OS1_S1 + 2) =
                            Z_PA * *(b + 212 * OS1_S1 + 2) +
                            alpha_Z * *(b + 212 * OS1_S1 + 3) +
                            2 * one_over_two_p *
                                (*(b + 157 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 157 * OS1_S1 + 3));
                        *(b + 279 * OS1_S1 + 2) =
                            Z_PA * *(b + 213 * OS1_S1 + 2) +
                            alpha_Z * *(b + 213 * OS1_S1 + 3) +
                            3 * one_over_two_p *
                                (*(b + 158 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 158 * OS1_S1 + 3));
                        *(b + 280 * OS1_S1 + 2) =
                            Z_PA * *(b + 214 * OS1_S1 + 2) +
                            alpha_Z * *(b + 214 * OS1_S1 + 3) +
                            4 * one_over_two_p *
                                (*(b + 159 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 159 * OS1_S1 + 3));
                        *(b + 281 * OS1_S1 + 2) =
                            Y_PA * *(b + 216 * OS1_S1 + 2) +
                            alpha_Y * *(b + 216 * OS1_S1 + 3) +
                            3 * one_over_two_p *
                                (*(b + 162 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 162 * OS1_S1 + 3));
                        *(b + 282 * OS1_S1 + 2) =
                            Y_PA * *(b + 217 * OS1_S1 + 2) +
                            alpha_Y * *(b + 217 * OS1_S1 + 3) +
                            2 * one_over_two_p *
                                (*(b + 163 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 163 * OS1_S1 + 3));
                        *(b + 283 * OS1_S1 + 2) =
                            Y_PA * *(b + 218 * OS1_S1 + 2) +
                            alpha_Y * *(b + 218 * OS1_S1 + 3) +
                            one_over_two_p *
                                (*(b + 164 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 164 * OS1_S1 + 3));
                        *(b + 284 * OS1_S1 + 2) =
                            Y_PA * *(b + 219 * OS1_S1 + 2) +
                            alpha_Y * *(b + 219 * OS1_S1 + 3);
                        *(b + 285 * OS1_S1 + 2) =
                            Z_PA * *(b + 219 * OS1_S1 + 2) +
                            alpha_Z * *(b + 219 * OS1_S1 + 3) +
                            9 * one_over_two_p *
                                (*(b + 164 * OS1_S1 + 2) -
                                 alpha_over_p * *(b + 164 * OS1_S1 + 3));
                        *(b + 286 * OS1_S1 + 1) =
                            X_PA * *(b + 220 * OS1_S1 + 1) +
                            alpha_X * *(b + 220 * OS1_S1 + 2) +
                            10 * one_over_two_p *
                                (*(b + 165 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 165 * OS1_S1 + 2));
                        *(b + 287 * OS1_S1 + 1) =
                            Y_PA * *(b + 220 * OS1_S1 + 1) +
                            alpha_Y * *(b + 220 * OS1_S1 + 2);
                        *(b + 288 * OS1_S1 + 1) =
                            Z_PA * *(b + 220 * OS1_S1 + 1) +
                            alpha_Z * *(b + 220 * OS1_S1 + 2);
                        *(b + 289 * OS1_S1 + 1) =
                            Y_PA * *(b + 221 * OS1_S1 + 1) +
                            alpha_Y * *(b + 221 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 165 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 165 * OS1_S1 + 2));
                        *(b + 291 * OS1_S1 + 1) =
                            Z_PA * *(b + 222 * OS1_S1 + 1) +
                            alpha_Z * *(b + 222 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 165 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 165 * OS1_S1 + 2));
                        *(b + 292 * OS1_S1 + 1) =
                            Y_PA * *(b + 223 * OS1_S1 + 1) +
                            alpha_Y * *(b + 223 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 166 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 166 * OS1_S1 + 2));
                        *(b + 293 * OS1_S1 + 1) =
                            Z_PA * *(b + 223 * OS1_S1 + 1) +
                            alpha_Z * *(b + 223 * OS1_S1 + 2);
                        *(b + 295 * OS1_S1 + 1) =
                            Z_PA * *(b + 225 * OS1_S1 + 1) +
                            alpha_Z * *(b + 225 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 167 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 167 * OS1_S1 + 2));
                        *(b + 296 * OS1_S1 + 1) =
                            Y_PA * *(b + 226 * OS1_S1 + 1) +
                            alpha_Y * *(b + 226 * OS1_S1 + 2) +
                            3 * one_over_two_p *
                                (*(b + 168 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 168 * OS1_S1 + 2));
                        *(b + 297 * OS1_S1 + 1) =
                            Z_PA * *(b + 226 * OS1_S1 + 1) +
                            alpha_Z * *(b + 226 * OS1_S1 + 2);
                        *(b + 299 * OS1_S1 + 1) =
                            Y_PA * *(b + 229 * OS1_S1 + 1) +
                            alpha_Y * *(b + 229 * OS1_S1 + 2);
                        *(b + 300 * OS1_S1 + 1) =
                            Z_PA * *(b + 229 * OS1_S1 + 1) +
                            alpha_Z * *(b + 229 * OS1_S1 + 2) +
                            3 * one_over_two_p *
                                (*(b + 170 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 170 * OS1_S1 + 2));
                        *(b + 301 * OS1_S1 + 1) =
                            Y_PA * *(b + 230 * OS1_S1 + 1) +
                            alpha_Y * *(b + 230 * OS1_S1 + 2) +
                            4 * one_over_two_p *
                                (*(b + 171 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 171 * OS1_S1 + 2));
                        *(b + 302 * OS1_S1 + 1) =
                            Z_PA * *(b + 230 * OS1_S1 + 1) +
                            alpha_Z * *(b + 230 * OS1_S1 + 2);
                        *(b + 303 * OS1_S1 + 1) =
                            Z_PA * *(b + 231 * OS1_S1 + 1) +
                            alpha_Z * *(b + 231 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 171 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 171 * OS1_S1 + 2));
                        *(b + 305 * OS1_S1 + 1) =
                            Y_PA * *(b + 234 * OS1_S1 + 1) +
                            alpha_Y * *(b + 234 * OS1_S1 + 2);
                        *(b + 306 * OS1_S1 + 1) =
                            Z_PA * *(b + 234 * OS1_S1 + 1) +
                            alpha_Z * *(b + 234 * OS1_S1 + 2) +
                            4 * one_over_two_p *
                                (*(b + 174 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 174 * OS1_S1 + 2));
                        *(b + 307 * OS1_S1 + 1) =
                            X_PA * *(b + 241 * OS1_S1 + 1) +
                            alpha_X * *(b + 241 * OS1_S1 + 2) +
                            4 * one_over_two_p *
                                (*(b + 186 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 186 * OS1_S1 + 2));
                        *(b + 308 * OS1_S1 + 1) =
                            Z_PA * *(b + 235 * OS1_S1 + 1) +
                            alpha_Z * *(b + 235 * OS1_S1 + 2);
                        *(b + 309 * OS1_S1 + 1) =
                            Z_PA * *(b + 236 * OS1_S1 + 1) +
                            alpha_Z * *(b + 236 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 175 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 175 * OS1_S1 + 2));
                        *(b + 311 * OS1_S1 + 1) =
                            Y_PA * *(b + 239 * OS1_S1 + 1) +
                            alpha_Y * *(b + 239 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 179 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 179 * OS1_S1 + 2));
                        *(b + 312 * OS1_S1 + 1) =
                            Y_PA * *(b + 240 * OS1_S1 + 1) +
                            alpha_Y * *(b + 240 * OS1_S1 + 2);
                        *(b + 313 * OS1_S1 + 1) =
                            X_PA * *(b + 247 * OS1_S1 + 1) +
                            alpha_X * *(b + 247 * OS1_S1 + 2) +
                            4 * one_over_two_p *
                                (*(b + 192 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 192 * OS1_S1 + 2));
                        *(b + 314 * OS1_S1 + 1) =
                            X_PA * *(b + 248 * OS1_S1 + 1) +
                            alpha_X * *(b + 248 * OS1_S1 + 2) +
                            3 * one_over_two_p *
                                (*(b + 193 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 193 * OS1_S1 + 2));
                        *(b + 315 * OS1_S1 + 1) =
                            Z_PA * *(b + 241 * OS1_S1 + 1) +
                            alpha_Z * *(b + 241 * OS1_S1 + 2);
                        *(b + 316 * OS1_S1 + 1) =
                            Z_PA * *(b + 242 * OS1_S1 + 1) +
                            alpha_Z * *(b + 242 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 180 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 180 * OS1_S1 + 2));
                        *(b + 317 * OS1_S1 + 1) =
                            Z_PA * *(b + 243 * OS1_S1 + 1) +
                            alpha_Z * *(b + 243 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 181 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 181 * OS1_S1 + 2));
                        *(b + 319 * OS1_S1 + 1) =
                            Y_PA * *(b + 246 * OS1_S1 + 1) +
                            alpha_Y * *(b + 246 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 185 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 185 * OS1_S1 + 2));
                        *(b + 320 * OS1_S1 + 1) =
                            Y_PA * *(b + 247 * OS1_S1 + 1) +
                            alpha_Y * *(b + 247 * OS1_S1 + 2);
                        *(b + 321 * OS1_S1 + 1) =
                            X_PA * *(b + 255 * OS1_S1 + 1) +
                            alpha_X * *(b + 255 * OS1_S1 + 2) +
                            3 * one_over_two_p *
                                (*(b + 200 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 200 * OS1_S1 + 2));
                        *(b + 322 * OS1_S1 + 1) =
                            X_PA * *(b + 256 * OS1_S1 + 1) +
                            alpha_X * *(b + 256 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 201 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 201 * OS1_S1 + 2));
                        *(b + 323 * OS1_S1 + 1) =
                            Z_PA * *(b + 248 * OS1_S1 + 1) +
                            alpha_Z * *(b + 248 * OS1_S1 + 2);
                        *(b + 324 * OS1_S1 + 1) =
                            Z_PA * *(b + 249 * OS1_S1 + 1) +
                            alpha_Z * *(b + 249 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 186 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 186 * OS1_S1 + 2));
                        *(b + 328 * OS1_S1 + 1) =
                            Y_PA * *(b + 254 * OS1_S1 + 1) +
                            alpha_Y * *(b + 254 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 192 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 192 * OS1_S1 + 2));
                        *(b + 329 * OS1_S1 + 1) =
                            Y_PA * *(b + 255 * OS1_S1 + 1) +
                            alpha_Y * *(b + 255 * OS1_S1 + 2);
                        *(b + 330 * OS1_S1 + 1) =
                            X_PA * *(b + 264 * OS1_S1 + 1) +
                            alpha_X * *(b + 264 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 209 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 209 * OS1_S1 + 2));
                        *(b + 331 * OS1_S1 + 1) =
                            X_PA * *(b + 265 * OS1_S1 + 1) +
                            alpha_X * *(b + 265 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 210 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 210 * OS1_S1 + 2));
                        *(b + 332 * OS1_S1 + 1) =
                            Z_PA * *(b + 256 * OS1_S1 + 1) +
                            alpha_Z * *(b + 256 * OS1_S1 + 2);
                        *(b + 335 * OS1_S1 + 1) =
                            X_PA * *(b + 269 * OS1_S1 + 1) +
                            alpha_X * *(b + 269 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 214 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 214 * OS1_S1 + 2));
                        *(b + 336 * OS1_S1 + 1) =
                            X_PA * *(b + 270 * OS1_S1 + 1) +
                            alpha_X * *(b + 270 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 215 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 215 * OS1_S1 + 2));
                        *(b + 339 * OS1_S1 + 1) =
                            Y_PA * *(b + 264 * OS1_S1 + 1) +
                            alpha_Y * *(b + 264 * OS1_S1 + 2);
                        *(b + 340 * OS1_S1 + 1) =
                            X_PA * *(b + 274 * OS1_S1 + 1) +
                            alpha_X * *(b + 274 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 219 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 219 * OS1_S1 + 2));
                        *(b + 341 * OS1_S1 + 1) =
                            X_PA * *(b + 275 * OS1_S1 + 1) +
                            alpha_X * *(b + 275 * OS1_S1 + 2);
                        *(b + 344 * OS1_S1 + 1) =
                            X_PA * *(b + 278 * OS1_S1 + 1) +
                            alpha_X * *(b + 278 * OS1_S1 + 2);
                        *(b + 345 * OS1_S1 + 1) =
                            X_PA * *(b + 279 * OS1_S1 + 1) +
                            alpha_X * *(b + 279 * OS1_S1 + 2);
                        *(b + 346 * OS1_S1 + 1) =
                            X_PA * *(b + 280 * OS1_S1 + 1) +
                            alpha_X * *(b + 280 * OS1_S1 + 2);
                        *(b + 347 * OS1_S1 + 1) =
                            X_PA * *(b + 281 * OS1_S1 + 1) +
                            alpha_X * *(b + 281 * OS1_S1 + 2);
                        *(b + 348 * OS1_S1 + 1) =
                            X_PA * *(b + 282 * OS1_S1 + 1) +
                            alpha_X * *(b + 282 * OS1_S1 + 2);
                        *(b + 351 * OS1_S1 + 1) =
                            X_PA * *(b + 285 * OS1_S1 + 1) +
                            alpha_X * *(b + 285 * OS1_S1 + 2);
                        *(b + 352 * OS1_S1 + 1) =
                            Y_PA * *(b + 275 * OS1_S1 + 1) +
                            alpha_Y * *(b + 275 * OS1_S1 + 2) +
                            10 * one_over_two_p *
                                (*(b + 210 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 210 * OS1_S1 + 2));
                        *(b + 353 * OS1_S1 + 1) =
                            Z_PA * *(b + 275 * OS1_S1 + 1) +
                            alpha_Z * *(b + 275 * OS1_S1 + 2);
                        *(b + 354 * OS1_S1 + 1) =
                            Z_PA * *(b + 276 * OS1_S1 + 1) +
                            alpha_Z * *(b + 276 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 210 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 210 * OS1_S1 + 2));
                        *(b + 355 * OS1_S1 + 1) =
                            Z_PA * *(b + 277 * OS1_S1 + 1) +
                            alpha_Z * *(b + 277 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 211 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 211 * OS1_S1 + 2));
                        *(b + 356 * OS1_S1 + 1) =
                            Z_PA * *(b + 278 * OS1_S1 + 1) +
                            alpha_Z * *(b + 278 * OS1_S1 + 2) +
                            3 * one_over_two_p *
                                (*(b + 212 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 212 * OS1_S1 + 2));
                        *(b + 357 * OS1_S1 + 1) =
                            Z_PA * *(b + 279 * OS1_S1 + 1) +
                            alpha_Z * *(b + 279 * OS1_S1 + 2) +
                            4 * one_over_two_p *
                                (*(b + 213 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 213 * OS1_S1 + 2));
                        *(b + 358 * OS1_S1 + 1) =
                            Y_PA * *(b + 281 * OS1_S1 + 1) +
                            alpha_Y * *(b + 281 * OS1_S1 + 2) +
                            4 * one_over_two_p *
                                (*(b + 216 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 216 * OS1_S1 + 2));
                        *(b + 359 * OS1_S1 + 1) =
                            Y_PA * *(b + 282 * OS1_S1 + 1) +
                            alpha_Y * *(b + 282 * OS1_S1 + 2) +
                            3 * one_over_two_p *
                                (*(b + 217 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 217 * OS1_S1 + 2));
                        *(b + 360 * OS1_S1 + 1) =
                            Y_PA * *(b + 283 * OS1_S1 + 1) +
                            alpha_Y * *(b + 283 * OS1_S1 + 2) +
                            2 * one_over_two_p *
                                (*(b + 218 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 218 * OS1_S1 + 2));
                        *(b + 361 * OS1_S1 + 1) =
                            Y_PA * *(b + 284 * OS1_S1 + 1) +
                            alpha_Y * *(b + 284 * OS1_S1 + 2) +
                            one_over_two_p *
                                (*(b + 219 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 219 * OS1_S1 + 2));
                        *(b + 362 * OS1_S1 + 1) =
                            Y_PA * *(b + 285 * OS1_S1 + 1) +
                            alpha_Y * *(b + 285 * OS1_S1 + 2);
                        *(b + 363 * OS1_S1 + 1) =
                            Z_PA * *(b + 285 * OS1_S1 + 1) +
                            alpha_Z * *(b + 285 * OS1_S1 + 2) +
                            10 * one_over_two_p *
                                (*(b + 219 * OS1_S1 + 1) -
                                 alpha_over_p * *(b + 219 * OS1_S1 + 2));
                        *(b + 364 * OS1_S1 + 0) =
                            X_PA * *(b + 286 * OS1_S1 + 0) +
                            alpha_X * *(b + 286 * OS1_S1 + 1) +
                            11 * one_over_two_p *
                                (*(b + 220 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 220 * OS1_S1 + 1));
                        *(b + 365 * OS1_S1 + 0) =
                            Y_PA * *(b + 286 * OS1_S1 + 0) +
                            alpha_Y * *(b + 286 * OS1_S1 + 1);
                        *(b + 366 * OS1_S1 + 0) =
                            Z_PA * *(b + 286 * OS1_S1 + 0) +
                            alpha_Z * *(b + 286 * OS1_S1 + 1);
                        *(b + 367 * OS1_S1 + 0) =
                            Y_PA * *(b + 287 * OS1_S1 + 0) +
                            alpha_Y * *(b + 287 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 220 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 220 * OS1_S1 + 1));
                        *(b + 368 * OS1_S1 + 0) =
                            Z_PA * *(b + 287 * OS1_S1 + 0) +
                            alpha_Z * *(b + 287 * OS1_S1 + 1);
                        *(b + 369 * OS1_S1 + 0) =
                            Z_PA * *(b + 288 * OS1_S1 + 0) +
                            alpha_Z * *(b + 288 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 220 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 220 * OS1_S1 + 1));
                        *(b + 370 * OS1_S1 + 0) =
                            Y_PA * *(b + 289 * OS1_S1 + 0) +
                            alpha_Y * *(b + 289 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 221 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 221 * OS1_S1 + 1));
                        *(b + 371 * OS1_S1 + 0) =
                            Z_PA * *(b + 289 * OS1_S1 + 0) +
                            alpha_Z * *(b + 289 * OS1_S1 + 1);
                        *(b + 372 * OS1_S1 + 0) =
                            Y_PA * *(b + 291 * OS1_S1 + 0) +
                            alpha_Y * *(b + 291 * OS1_S1 + 1);
                        *(b + 373 * OS1_S1 + 0) =
                            Z_PA * *(b + 291 * OS1_S1 + 0) +
                            alpha_Z * *(b + 291 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 222 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 222 * OS1_S1 + 1));
                        *(b + 374 * OS1_S1 + 0) =
                            Y_PA * *(b + 292 * OS1_S1 + 0) +
                            alpha_Y * *(b + 292 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 223 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 223 * OS1_S1 + 1));
                        *(b + 375 * OS1_S1 + 0) =
                            Z_PA * *(b + 292 * OS1_S1 + 0) +
                            alpha_Z * *(b + 292 * OS1_S1 + 1);
                        *(b + 376 * OS1_S1 + 0) =
                            Z_PA * *(b + 293 * OS1_S1 + 0) +
                            alpha_Z * *(b + 293 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 223 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 223 * OS1_S1 + 1));
                        *(b + 377 * OS1_S1 + 0) =
                            Y_PA * *(b + 295 * OS1_S1 + 0) +
                            alpha_Y * *(b + 295 * OS1_S1 + 1);
                        *(b + 378 * OS1_S1 + 0) =
                            Z_PA * *(b + 295 * OS1_S1 + 0) +
                            alpha_Z * *(b + 295 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 225 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 225 * OS1_S1 + 1));
                        *(b + 379 * OS1_S1 + 0) =
                            Y_PA * *(b + 296 * OS1_S1 + 0) +
                            alpha_Y * *(b + 296 * OS1_S1 + 1) +
                            4 * one_over_two_p *
                                (*(b + 226 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 226 * OS1_S1 + 1));
                        *(b + 380 * OS1_S1 + 0) =
                            Z_PA * *(b + 296 * OS1_S1 + 0) +
                            alpha_Z * *(b + 296 * OS1_S1 + 1);
                        *(b + 381 * OS1_S1 + 0) =
                            Z_PA * *(b + 297 * OS1_S1 + 0) +
                            alpha_Z * *(b + 297 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 226 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 226 * OS1_S1 + 1));
                        *(b + 382 * OS1_S1 + 0) =
                            Y_PA * *(b + 299 * OS1_S1 + 0) +
                            alpha_Y * *(b + 299 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 229 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 229 * OS1_S1 + 1));
                        *(b + 383 * OS1_S1 + 0) =
                            Y_PA * *(b + 300 * OS1_S1 + 0) +
                            alpha_Y * *(b + 300 * OS1_S1 + 1);
                        *(b + 384 * OS1_S1 + 0) =
                            Z_PA * *(b + 300 * OS1_S1 + 0) +
                            alpha_Z * *(b + 300 * OS1_S1 + 1) +
                            4 * one_over_two_p *
                                (*(b + 229 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 229 * OS1_S1 + 1));
                        *(b + 385 * OS1_S1 + 0) =
                            Y_PA * *(b + 301 * OS1_S1 + 0) +
                            alpha_Y * *(b + 301 * OS1_S1 + 1) +
                            5 * one_over_two_p *
                                (*(b + 230 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 230 * OS1_S1 + 1));
                        *(b + 386 * OS1_S1 + 0) =
                            Z_PA * *(b + 301 * OS1_S1 + 0) +
                            alpha_Z * *(b + 301 * OS1_S1 + 1);
                        *(b + 387 * OS1_S1 + 0) =
                            Z_PA * *(b + 302 * OS1_S1 + 0) +
                            alpha_Z * *(b + 302 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 230 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 230 * OS1_S1 + 1));
                        *(b + 388 * OS1_S1 + 0) =
                            Z_PA * *(b + 303 * OS1_S1 + 0) +
                            alpha_Z * *(b + 303 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 231 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 231 * OS1_S1 + 1));
                        *(b + 389 * OS1_S1 + 0) =
                            Y_PA * *(b + 305 * OS1_S1 + 0) +
                            alpha_Y * *(b + 305 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 234 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 234 * OS1_S1 + 1));
                        *(b + 390 * OS1_S1 + 0) =
                            Y_PA * *(b + 306 * OS1_S1 + 0) +
                            alpha_Y * *(b + 306 * OS1_S1 + 1);
                        *(b + 391 * OS1_S1 + 0) =
                            Z_PA * *(b + 306 * OS1_S1 + 0) +
                            alpha_Z * *(b + 306 * OS1_S1 + 1) +
                            5 * one_over_two_p *
                                (*(b + 234 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 234 * OS1_S1 + 1));
                        *(b + 392 * OS1_S1 + 0) =
                            X_PA * *(b + 314 * OS1_S1 + 0) +
                            alpha_X * *(b + 314 * OS1_S1 + 1) +
                            4 * one_over_two_p *
                                (*(b + 248 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 248 * OS1_S1 + 1));
                        *(b + 393 * OS1_S1 + 0) =
                            Z_PA * *(b + 307 * OS1_S1 + 0) +
                            alpha_Z * *(b + 307 * OS1_S1 + 1);
                        *(b + 394 * OS1_S1 + 0) =
                            Z_PA * *(b + 308 * OS1_S1 + 0) +
                            alpha_Z * *(b + 308 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 235 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 235 * OS1_S1 + 1));
                        *(b + 395 * OS1_S1 + 0) =
                            Z_PA * *(b + 309 * OS1_S1 + 0) +
                            alpha_Z * *(b + 309 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 236 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 236 * OS1_S1 + 1));
                        *(b + 396 * OS1_S1 + 0) =
                            Y_PA * *(b + 311 * OS1_S1 + 0) +
                            alpha_Y * *(b + 311 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 239 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 239 * OS1_S1 + 1));
                        *(b + 397 * OS1_S1 + 0) =
                            Y_PA * *(b + 312 * OS1_S1 + 0) +
                            alpha_Y * *(b + 312 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 240 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 240 * OS1_S1 + 1));
                        *(b + 398 * OS1_S1 + 0) =
                            Y_PA * *(b + 313 * OS1_S1 + 0) +
                            alpha_Y * *(b + 313 * OS1_S1 + 1);
                        *(b + 399 * OS1_S1 + 0) =
                            X_PA * *(b + 321 * OS1_S1 + 0) +
                            alpha_X * *(b + 321 * OS1_S1 + 1) +
                            4 * one_over_two_p *
                                (*(b + 255 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 255 * OS1_S1 + 1));
                        *(b + 400 * OS1_S1 + 0) =
                            X_PA * *(b + 322 * OS1_S1 + 0) +
                            alpha_X * *(b + 322 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 256 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 256 * OS1_S1 + 1));
                        *(b + 401 * OS1_S1 + 0) =
                            Z_PA * *(b + 314 * OS1_S1 + 0) +
                            alpha_Z * *(b + 314 * OS1_S1 + 1);
                        *(b + 402 * OS1_S1 + 0) =
                            Z_PA * *(b + 315 * OS1_S1 + 0) +
                            alpha_Z * *(b + 315 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 241 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 241 * OS1_S1 + 1));
                        *(b + 403 * OS1_S1 + 0) =
                            Z_PA * *(b + 316 * OS1_S1 + 0) +
                            alpha_Z * *(b + 316 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 242 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 242 * OS1_S1 + 1));
                        *(b + 404 * OS1_S1 + 0) =
                            Z_PA * *(b + 317 * OS1_S1 + 0) +
                            alpha_Z * *(b + 317 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 243 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 243 * OS1_S1 + 1));
                        *(b + 405 * OS1_S1 + 0) =
                            Y_PA * *(b + 319 * OS1_S1 + 0) +
                            alpha_Y * *(b + 319 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 246 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 246 * OS1_S1 + 1));
                        *(b + 406 * OS1_S1 + 0) =
                            Y_PA * *(b + 320 * OS1_S1 + 0) +
                            alpha_Y * *(b + 320 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 247 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 247 * OS1_S1 + 1));
                        *(b + 407 * OS1_S1 + 0) =
                            Y_PA * *(b + 321 * OS1_S1 + 0) +
                            alpha_Y * *(b + 321 * OS1_S1 + 1);
                        *(b + 408 * OS1_S1 + 0) =
                            X_PA * *(b + 330 * OS1_S1 + 0) +
                            alpha_X * *(b + 330 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 264 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 264 * OS1_S1 + 1));
                        *(b + 409 * OS1_S1 + 0) =
                            X_PA * *(b + 331 * OS1_S1 + 0) +
                            alpha_X * *(b + 331 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 265 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 265 * OS1_S1 + 1));
                        *(b + 410 * OS1_S1 + 0) =
                            Z_PA * *(b + 322 * OS1_S1 + 0) +
                            alpha_Z * *(b + 322 * OS1_S1 + 1);
                        *(b + 411 * OS1_S1 + 0) =
                            Z_PA * *(b + 323 * OS1_S1 + 0) +
                            alpha_Z * *(b + 323 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 248 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 248 * OS1_S1 + 1));
                        *(b + 412 * OS1_S1 + 0) =
                            Z_PA * *(b + 324 * OS1_S1 + 0) +
                            alpha_Z * *(b + 324 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 249 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 249 * OS1_S1 + 1));
                        *(b + 413 * OS1_S1 + 0) =
                            X_PA * *(b + 335 * OS1_S1 + 0) +
                            alpha_X * *(b + 335 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 269 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 269 * OS1_S1 + 1));
                        *(b + 414 * OS1_S1 + 0) =
                            X_PA * *(b + 336 * OS1_S1 + 0) +
                            alpha_X * *(b + 336 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 270 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 270 * OS1_S1 + 1));
                        *(b + 415 * OS1_S1 + 0) =
                            Y_PA * *(b + 328 * OS1_S1 + 0) +
                            alpha_Y * *(b + 328 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 254 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 254 * OS1_S1 + 1));
                        *(b + 416 * OS1_S1 + 0) =
                            Y_PA * *(b + 329 * OS1_S1 + 0) +
                            alpha_Y * *(b + 329 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 255 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 255 * OS1_S1 + 1));
                        *(b + 417 * OS1_S1 + 0) =
                            Y_PA * *(b + 330 * OS1_S1 + 0) +
                            alpha_Y * *(b + 330 * OS1_S1 + 1);
                        *(b + 418 * OS1_S1 + 0) =
                            X_PA * *(b + 340 * OS1_S1 + 0) +
                            alpha_X * *(b + 340 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 274 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 274 * OS1_S1 + 1));
                        *(b + 419 * OS1_S1 + 0) =
                            X_PA * *(b + 341 * OS1_S1 + 0) +
                            alpha_X * *(b + 341 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 275 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 275 * OS1_S1 + 1));
                        *(b + 420 * OS1_S1 + 0) =
                            Z_PA * *(b + 331 * OS1_S1 + 0) +
                            alpha_Z * *(b + 331 * OS1_S1 + 1);
                        *(b + 421 * OS1_S1 + 0) =
                            Z_PA * *(b + 332 * OS1_S1 + 0) +
                            alpha_Z * *(b + 332 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 256 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 256 * OS1_S1 + 1));
                        *(b + 422 * OS1_S1 + 0) =
                            X_PA * *(b + 344 * OS1_S1 + 0) +
                            alpha_X * *(b + 344 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 278 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 278 * OS1_S1 + 1));
                        *(b + 423 * OS1_S1 + 0) =
                            X_PA * *(b + 345 * OS1_S1 + 0) +
                            alpha_X * *(b + 345 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 279 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 279 * OS1_S1 + 1));
                        *(b + 424 * OS1_S1 + 0) =
                            X_PA * *(b + 346 * OS1_S1 + 0) +
                            alpha_X * *(b + 346 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 280 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 280 * OS1_S1 + 1));
                        *(b + 425 * OS1_S1 + 0) =
                            X_PA * *(b + 347 * OS1_S1 + 0) +
                            alpha_X * *(b + 347 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 281 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 281 * OS1_S1 + 1));
                        *(b + 426 * OS1_S1 + 0) =
                            X_PA * *(b + 348 * OS1_S1 + 0) +
                            alpha_X * *(b + 348 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 282 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 282 * OS1_S1 + 1));
                        *(b + 427 * OS1_S1 + 0) =
                            Y_PA * *(b + 339 * OS1_S1 + 0) +
                            alpha_Y * *(b + 339 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 264 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 264 * OS1_S1 + 1));
                        *(b + 428 * OS1_S1 + 0) =
                            Y_PA * *(b + 340 * OS1_S1 + 0) +
                            alpha_Y * *(b + 340 * OS1_S1 + 1);
                        *(b + 429 * OS1_S1 + 0) =
                            X_PA * *(b + 351 * OS1_S1 + 0) +
                            alpha_X * *(b + 351 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 285 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 285 * OS1_S1 + 1));
                        *(b + 430 * OS1_S1 + 0) =
                            X_PA * *(b + 352 * OS1_S1 + 0) +
                            alpha_X * *(b + 352 * OS1_S1 + 1);
                        *(b + 431 * OS1_S1 + 0) =
                            Z_PA * *(b + 341 * OS1_S1 + 0) +
                            alpha_Z * *(b + 341 * OS1_S1 + 1);
                        *(b + 432 * OS1_S1 + 0) =
                            X_PA * *(b + 354 * OS1_S1 + 0) +
                            alpha_X * *(b + 354 * OS1_S1 + 1);
                        *(b + 433 * OS1_S1 + 0) =
                            X_PA * *(b + 355 * OS1_S1 + 0) +
                            alpha_X * *(b + 355 * OS1_S1 + 1);
                        *(b + 434 * OS1_S1 + 0) =
                            X_PA * *(b + 356 * OS1_S1 + 0) +
                            alpha_X * *(b + 356 * OS1_S1 + 1);
                        *(b + 435 * OS1_S1 + 0) =
                            X_PA * *(b + 357 * OS1_S1 + 0) +
                            alpha_X * *(b + 357 * OS1_S1 + 1);
                        *(b + 436 * OS1_S1 + 0) =
                            X_PA * *(b + 358 * OS1_S1 + 0) +
                            alpha_X * *(b + 358 * OS1_S1 + 1);
                        *(b + 437 * OS1_S1 + 0) =
                            X_PA * *(b + 359 * OS1_S1 + 0) +
                            alpha_X * *(b + 359 * OS1_S1 + 1);
                        *(b + 438 * OS1_S1 + 0) =
                            X_PA * *(b + 360 * OS1_S1 + 0) +
                            alpha_X * *(b + 360 * OS1_S1 + 1);
                        *(b + 439 * OS1_S1 + 0) =
                            X_PA * *(b + 361 * OS1_S1 + 0) +
                            alpha_X * *(b + 361 * OS1_S1 + 1);
                        *(b + 440 * OS1_S1 + 0) =
                            Y_PA * *(b + 351 * OS1_S1 + 0) +
                            alpha_Y * *(b + 351 * OS1_S1 + 1);
                        *(b + 441 * OS1_S1 + 0) =
                            X_PA * *(b + 363 * OS1_S1 + 0) +
                            alpha_X * *(b + 363 * OS1_S1 + 1);
                        *(b + 442 * OS1_S1 + 0) =
                            Y_PA * *(b + 352 * OS1_S1 + 0) +
                            alpha_Y * *(b + 352 * OS1_S1 + 1) +
                            11 * one_over_two_p *
                                (*(b + 275 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 275 * OS1_S1 + 1));
                        *(b + 443 * OS1_S1 + 0) =
                            Z_PA * *(b + 352 * OS1_S1 + 0) +
                            alpha_Z * *(b + 352 * OS1_S1 + 1);
                        *(b + 444 * OS1_S1 + 0) =
                            Z_PA * *(b + 353 * OS1_S1 + 0) +
                            alpha_Z * *(b + 353 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 275 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 275 * OS1_S1 + 1));
                        *(b + 445 * OS1_S1 + 0) =
                            Z_PA * *(b + 354 * OS1_S1 + 0) +
                            alpha_Z * *(b + 354 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 276 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 276 * OS1_S1 + 1));
                        *(b + 446 * OS1_S1 + 0) =
                            Z_PA * *(b + 355 * OS1_S1 + 0) +
                            alpha_Z * *(b + 355 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 277 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 277 * OS1_S1 + 1));
                        *(b + 447 * OS1_S1 + 0) =
                            Z_PA * *(b + 356 * OS1_S1 + 0) +
                            alpha_Z * *(b + 356 * OS1_S1 + 1) +
                            4 * one_over_two_p *
                                (*(b + 278 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 278 * OS1_S1 + 1));
                        *(b + 448 * OS1_S1 + 0) =
                            Z_PA * *(b + 357 * OS1_S1 + 0) +
                            alpha_Z * *(b + 357 * OS1_S1 + 1) +
                            5 * one_over_two_p *
                                (*(b + 279 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 279 * OS1_S1 + 1));
                        *(b + 449 * OS1_S1 + 0) =
                            Y_PA * *(b + 359 * OS1_S1 + 0) +
                            alpha_Y * *(b + 359 * OS1_S1 + 1) +
                            4 * one_over_two_p *
                                (*(b + 282 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 282 * OS1_S1 + 1));
                        *(b + 450 * OS1_S1 + 0) =
                            Y_PA * *(b + 360 * OS1_S1 + 0) +
                            alpha_Y * *(b + 360 * OS1_S1 + 1) +
                            3 * one_over_two_p *
                                (*(b + 283 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 283 * OS1_S1 + 1));
                        *(b + 451 * OS1_S1 + 0) =
                            Y_PA * *(b + 361 * OS1_S1 + 0) +
                            alpha_Y * *(b + 361 * OS1_S1 + 1) +
                            2 * one_over_two_p *
                                (*(b + 284 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 284 * OS1_S1 + 1));
                        *(b + 452 * OS1_S1 + 0) =
                            Y_PA * *(b + 362 * OS1_S1 + 0) +
                            alpha_Y * *(b + 362 * OS1_S1 + 1) +
                            one_over_two_p *
                                (*(b + 285 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 285 * OS1_S1 + 1));
                        *(b + 453 * OS1_S1 + 0) =
                            Y_PA * *(b + 363 * OS1_S1 + 0) +
                            alpha_Y * *(b + 363 * OS1_S1 + 1);
                        *(b + 454 * OS1_S1 + 0) =
                            Z_PA * *(b + 363 * OS1_S1 + 0) +
                            alpha_Z * *(b + 363 * OS1_S1 + 1) +
                            11 * one_over_two_p *
                                (*(b + 285 * OS1_S1 + 0) -
                                 alpha_over_p * *(b + 285 * OS1_S1 + 1));
                    }
                }
            }
            return;
        }
    }
}
