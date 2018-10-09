/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/vr.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void vr13_14(const double alpha_over_p,
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
            *(b + 1 * OS1_S1 + 12) = X_PA * *(b + 0 * OS1_S1 + 12) +
                                     alpha_X * *(b + 0 * OS1_S1 + 13);
            *(b + 2 * OS1_S1 + 12) = Y_PA * *(b + 0 * OS1_S1 + 12) +
                                     alpha_Y * *(b + 0 * OS1_S1 + 13);
            *(b + 3 * OS1_S1 + 12) = Z_PA * *(b + 0 * OS1_S1 + 12) +
                                     alpha_Z * *(b + 0 * OS1_S1 + 13);
            *(b + 4 * OS1_S1 + 11) =
                X_PA * *(b + 1 * OS1_S1 + 11) +
                alpha_X * *(b + 1 * OS1_S1 + 12) +
                one_over_two_p * (*(b + 0 * OS1_S1 + 11) -
                                  alpha_over_p * *(b + 0 * OS1_S1 + 12));
            *(b + 7 * OS1_S1 + 11) =
                Y_PA * *(b + 2 * OS1_S1 + 11) +
                alpha_Y * *(b + 2 * OS1_S1 + 12) +
                one_over_two_p * (*(b + 0 * OS1_S1 + 11) -
                                  alpha_over_p * *(b + 0 * OS1_S1 + 12));
            *(b + 9 * OS1_S1 + 11) =
                Z_PA * *(b + 3 * OS1_S1 + 11) +
                alpha_Z * *(b + 3 * OS1_S1 + 12) +
                one_over_two_p * (*(b + 0 * OS1_S1 + 11) -
                                  alpha_over_p * *(b + 0 * OS1_S1 + 12));
            *(b + 10 * OS1_S1 + 10) =
                X_PA * *(b + 4 * OS1_S1 + 10) +
                alpha_X * *(b + 4 * OS1_S1 + 11) +
                2 * one_over_two_p *
                    (*(b + 1 * OS1_S1 + 10) -
                     alpha_over_p * *(b + 1 * OS1_S1 + 11));
            *(b + 16 * OS1_S1 + 10) =
                Y_PA * *(b + 7 * OS1_S1 + 10) +
                alpha_Y * *(b + 7 * OS1_S1 + 11) +
                2 * one_over_two_p *
                    (*(b + 2 * OS1_S1 + 10) -
                     alpha_over_p * *(b + 2 * OS1_S1 + 11));
            *(b + 19 * OS1_S1 + 10) =
                Z_PA * *(b + 9 * OS1_S1 + 10) +
                alpha_Z * *(b + 9 * OS1_S1 + 11) +
                2 * one_over_two_p *
                    (*(b + 3 * OS1_S1 + 10) -
                     alpha_over_p * *(b + 3 * OS1_S1 + 11));
            *(b + 20 * OS1_S1 + 9) =
                X_PA * *(b + 10 * OS1_S1 + 9) +
                alpha_X * *(b + 10 * OS1_S1 + 10) +
                3 * one_over_two_p *
                    (*(b + 4 * OS1_S1 + 9) -
                     alpha_over_p * *(b + 4 * OS1_S1 + 10));
            *(b + 30 * OS1_S1 + 9) =
                Y_PA * *(b + 16 * OS1_S1 + 9) +
                alpha_Y * *(b + 16 * OS1_S1 + 10) +
                3 * one_over_two_p *
                    (*(b + 7 * OS1_S1 + 9) -
                     alpha_over_p * *(b + 7 * OS1_S1 + 10));
            *(b + 34 * OS1_S1 + 9) =
                Z_PA * *(b + 19 * OS1_S1 + 9) +
                alpha_Z * *(b + 19 * OS1_S1 + 10) +
                3 * one_over_two_p *
                    (*(b + 9 * OS1_S1 + 9) -
                     alpha_over_p * *(b + 9 * OS1_S1 + 10));
            *(b + 35 * OS1_S1 + 8) =
                X_PA * *(b + 20 * OS1_S1 + 8) +
                alpha_X * *(b + 20 * OS1_S1 + 9) +
                4 * one_over_two_p *
                    (*(b + 10 * OS1_S1 + 8) -
                     alpha_over_p * *(b + 10 * OS1_S1 + 9));
            *(b + 50 * OS1_S1 + 8) =
                Y_PA * *(b + 30 * OS1_S1 + 8) +
                alpha_Y * *(b + 30 * OS1_S1 + 9) +
                4 * one_over_two_p *
                    (*(b + 16 * OS1_S1 + 8) -
                     alpha_over_p * *(b + 16 * OS1_S1 + 9));
            *(b + 55 * OS1_S1 + 8) =
                Z_PA * *(b + 34 * OS1_S1 + 8) +
                alpha_Z * *(b + 34 * OS1_S1 + 9) +
                4 * one_over_two_p *
                    (*(b + 19 * OS1_S1 + 8) -
                     alpha_over_p * *(b + 19 * OS1_S1 + 9));
            *(b + 56 * OS1_S1 + 7) =
                X_PA * *(b + 35 * OS1_S1 + 7) +
                alpha_X * *(b + 35 * OS1_S1 + 8) +
                5 * one_over_two_p *
                    (*(b + 20 * OS1_S1 + 7) -
                     alpha_over_p * *(b + 20 * OS1_S1 + 8));
            *(b + 57 * OS1_S1 + 7) = Y_PA * *(b + 35 * OS1_S1 + 7) +
                                     alpha_Y * *(b + 35 * OS1_S1 + 8);
            *(b + 58 * OS1_S1 + 7) = Z_PA * *(b + 35 * OS1_S1 + 7) +
                                     alpha_Z * *(b + 35 * OS1_S1 + 8);
            *(b + 71 * OS1_S1 + 7) = X_PA * *(b + 50 * OS1_S1 + 7) +
                                     alpha_X * *(b + 50 * OS1_S1 + 8);
            *(b + 76 * OS1_S1 + 7) = X_PA * *(b + 55 * OS1_S1 + 7) +
                                     alpha_X * *(b + 55 * OS1_S1 + 8);
            *(b + 77 * OS1_S1 + 7) =
                Y_PA * *(b + 50 * OS1_S1 + 7) +
                alpha_Y * *(b + 50 * OS1_S1 + 8) +
                5 * one_over_two_p *
                    (*(b + 30 * OS1_S1 + 7) -
                     alpha_over_p * *(b + 30 * OS1_S1 + 8));
            *(b + 78 * OS1_S1 + 7) = Z_PA * *(b + 50 * OS1_S1 + 7) +
                                     alpha_Z * *(b + 50 * OS1_S1 + 8);
            *(b + 83 * OS1_S1 + 7) =
                Z_PA * *(b + 55 * OS1_S1 + 7) +
                alpha_Z * *(b + 55 * OS1_S1 + 8) +
                5 * one_over_two_p *
                    (*(b + 34 * OS1_S1 + 7) -
                     alpha_over_p * *(b + 34 * OS1_S1 + 8));
            *(b + 84 * OS1_S1 + 6) =
                X_PA * *(b + 56 * OS1_S1 + 6) +
                alpha_X * *(b + 56 * OS1_S1 + 7) +
                6 * one_over_two_p *
                    (*(b + 35 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 35 * OS1_S1 + 7));
            *(b + 85 * OS1_S1 + 6) = Y_PA * *(b + 56 * OS1_S1 + 6) +
                                     alpha_Y * *(b + 56 * OS1_S1 + 7);
            *(b + 86 * OS1_S1 + 6) = Z_PA * *(b + 56 * OS1_S1 + 6) +
                                     alpha_Z * *(b + 56 * OS1_S1 + 7);
            *(b + 87 * OS1_S1 + 6) =
                Y_PA * *(b + 57 * OS1_S1 + 6) +
                alpha_Y * *(b + 57 * OS1_S1 + 7) +
                one_over_two_p * (*(b + 35 * OS1_S1 + 6) -
                                  alpha_over_p * *(b + 35 * OS1_S1 + 7));
            *(b + 89 * OS1_S1 + 6) =
                Z_PA * *(b + 58 * OS1_S1 + 6) +
                alpha_Z * *(b + 58 * OS1_S1 + 7) +
                one_over_two_p * (*(b + 35 * OS1_S1 + 6) -
                                  alpha_over_p * *(b + 35 * OS1_S1 + 7));
            *(b + 99 * OS1_S1 + 6) =
                X_PA * *(b + 71 * OS1_S1 + 6) +
                alpha_X * *(b + 71 * OS1_S1 + 7) +
                one_over_two_p * (*(b + 50 * OS1_S1 + 6) -
                                  alpha_over_p * *(b + 50 * OS1_S1 + 7));
            *(b + 104 * OS1_S1 + 6) =
                X_PA * *(b + 76 * OS1_S1 + 6) +
                alpha_X * *(b + 76 * OS1_S1 + 7) +
                one_over_two_p * (*(b + 55 * OS1_S1 + 6) -
                                  alpha_over_p * *(b + 55 * OS1_S1 + 7));
            *(b + 105 * OS1_S1 + 6) = X_PA * *(b + 77 * OS1_S1 + 6) +
                                      alpha_X * *(b + 77 * OS1_S1 + 7);
            *(b + 111 * OS1_S1 + 6) = X_PA * *(b + 83 * OS1_S1 + 6) +
                                      alpha_X * *(b + 83 * OS1_S1 + 7);
            *(b + 112 * OS1_S1 + 6) =
                Y_PA * *(b + 77 * OS1_S1 + 6) +
                alpha_Y * *(b + 77 * OS1_S1 + 7) +
                6 * one_over_two_p *
                    (*(b + 50 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 50 * OS1_S1 + 7));
            *(b + 113 * OS1_S1 + 6) = Z_PA * *(b + 77 * OS1_S1 + 6) +
                                      alpha_Z * *(b + 77 * OS1_S1 + 7);
            *(b + 114 * OS1_S1 + 6) =
                Z_PA * *(b + 78 * OS1_S1 + 6) +
                alpha_Z * *(b + 78 * OS1_S1 + 7) +
                one_over_two_p * (*(b + 50 * OS1_S1 + 6) -
                                  alpha_over_p * *(b + 50 * OS1_S1 + 7));
            *(b + 118 * OS1_S1 + 6) = Y_PA * *(b + 83 * OS1_S1 + 6) +
                                      alpha_Y * *(b + 83 * OS1_S1 + 7);
            *(b + 119 * OS1_S1 + 6) =
                Z_PA * *(b + 83 * OS1_S1 + 6) +
                alpha_Z * *(b + 83 * OS1_S1 + 7) +
                6 * one_over_two_p *
                    (*(b + 55 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 55 * OS1_S1 + 7));
            *(b + 120 * OS1_S1 + 5) =
                X_PA * *(b + 84 * OS1_S1 + 5) +
                alpha_X * *(b + 84 * OS1_S1 + 6) +
                7 * one_over_two_p *
                    (*(b + 56 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 56 * OS1_S1 + 6));
            *(b + 121 * OS1_S1 + 5) = Y_PA * *(b + 84 * OS1_S1 + 5) +
                                      alpha_Y * *(b + 84 * OS1_S1 + 6);
            *(b + 122 * OS1_S1 + 5) = Z_PA * *(b + 84 * OS1_S1 + 5) +
                                      alpha_Z * *(b + 84 * OS1_S1 + 6);
            *(b + 123 * OS1_S1 + 5) =
                Y_PA * *(b + 85 * OS1_S1 + 5) +
                alpha_Y * *(b + 85 * OS1_S1 + 6) +
                one_over_two_p * (*(b + 56 * OS1_S1 + 5) -
                                  alpha_over_p * *(b + 56 * OS1_S1 + 6));
            *(b + 125 * OS1_S1 + 5) =
                Z_PA * *(b + 86 * OS1_S1 + 5) +
                alpha_Z * *(b + 86 * OS1_S1 + 6) +
                one_over_two_p * (*(b + 56 * OS1_S1 + 5) -
                                  alpha_over_p * *(b + 56 * OS1_S1 + 6));
            *(b + 126 * OS1_S1 + 5) =
                Y_PA * *(b + 87 * OS1_S1 + 5) +
                alpha_Y * *(b + 87 * OS1_S1 + 6) +
                2 * one_over_two_p *
                    (*(b + 57 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 57 * OS1_S1 + 6));
            *(b + 129 * OS1_S1 + 5) =
                Z_PA * *(b + 89 * OS1_S1 + 5) +
                alpha_Z * *(b + 89 * OS1_S1 + 6) +
                2 * one_over_two_p *
                    (*(b + 58 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 58 * OS1_S1 + 6));
            *(b + 135 * OS1_S1 + 5) =
                X_PA * *(b + 99 * OS1_S1 + 5) +
                alpha_X * *(b + 99 * OS1_S1 + 6) +
                2 * one_over_two_p *
                    (*(b + 71 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 71 * OS1_S1 + 6));
            *(b + 140 * OS1_S1 + 5) =
                X_PA * *(b + 104 * OS1_S1 + 5) +
                alpha_X * *(b + 104 * OS1_S1 + 6) +
                2 * one_over_two_p *
                    (*(b + 76 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 76 * OS1_S1 + 6));
            *(b + 141 * OS1_S1 + 5) =
                X_PA * *(b + 105 * OS1_S1 + 5) +
                alpha_X * *(b + 105 * OS1_S1 + 6) +
                one_over_two_p * (*(b + 77 * OS1_S1 + 5) -
                                  alpha_over_p * *(b + 77 * OS1_S1 + 6));
            *(b + 147 * OS1_S1 + 5) =
                X_PA * *(b + 111 * OS1_S1 + 5) +
                alpha_X * *(b + 111 * OS1_S1 + 6) +
                one_over_two_p * (*(b + 83 * OS1_S1 + 5) -
                                  alpha_over_p * *(b + 83 * OS1_S1 + 6));
            *(b + 148 * OS1_S1 + 5) = X_PA * *(b + 112 * OS1_S1 + 5) +
                                      alpha_X * *(b + 112 * OS1_S1 + 6);
            *(b + 155 * OS1_S1 + 5) = X_PA * *(b + 119 * OS1_S1 + 5) +
                                      alpha_X * *(b + 119 * OS1_S1 + 6);
            *(b + 156 * OS1_S1 + 5) =
                Y_PA * *(b + 112 * OS1_S1 + 5) +
                alpha_Y * *(b + 112 * OS1_S1 + 6) +
                7 * one_over_two_p *
                    (*(b + 77 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 77 * OS1_S1 + 6));
            *(b + 157 * OS1_S1 + 5) = Z_PA * *(b + 112 * OS1_S1 + 5) +
                                      alpha_Z * *(b + 112 * OS1_S1 + 6);
            *(b + 158 * OS1_S1 + 5) =
                Z_PA * *(b + 113 * OS1_S1 + 5) +
                alpha_Z * *(b + 113 * OS1_S1 + 6) +
                one_over_two_p * (*(b + 77 * OS1_S1 + 5) -
                                  alpha_over_p * *(b + 77 * OS1_S1 + 6));
            *(b + 159 * OS1_S1 + 5) =
                Z_PA * *(b + 114 * OS1_S1 + 5) +
                alpha_Z * *(b + 114 * OS1_S1 + 6) +
                2 * one_over_two_p *
                    (*(b + 78 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 78 * OS1_S1 + 6));
            *(b + 162 * OS1_S1 + 5) =
                Y_PA * *(b + 118 * OS1_S1 + 5) +
                alpha_Y * *(b + 118 * OS1_S1 + 6) +
                one_over_two_p * (*(b + 83 * OS1_S1 + 5) -
                                  alpha_over_p * *(b + 83 * OS1_S1 + 6));
            *(b + 163 * OS1_S1 + 5) = Y_PA * *(b + 119 * OS1_S1 + 5) +
                                      alpha_Y * *(b + 119 * OS1_S1 + 6);
            *(b + 164 * OS1_S1 + 5) =
                Z_PA * *(b + 119 * OS1_S1 + 5) +
                alpha_Z * *(b + 119 * OS1_S1 + 6) +
                7 * one_over_two_p *
                    (*(b + 83 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 83 * OS1_S1 + 6));
            *(b + 165 * OS1_S1 + 4) =
                X_PA * *(b + 120 * OS1_S1 + 4) +
                alpha_X * *(b + 120 * OS1_S1 + 5) +
                8 * one_over_two_p *
                    (*(b + 84 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 84 * OS1_S1 + 5));
            *(b + 166 * OS1_S1 + 4) = Y_PA * *(b + 120 * OS1_S1 + 4) +
                                      alpha_Y * *(b + 120 * OS1_S1 + 5);
            *(b + 167 * OS1_S1 + 4) = Z_PA * *(b + 120 * OS1_S1 + 4) +
                                      alpha_Z * *(b + 120 * OS1_S1 + 5);
            *(b + 168 * OS1_S1 + 4) =
                Y_PA * *(b + 121 * OS1_S1 + 4) +
                alpha_Y * *(b + 121 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 84 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 84 * OS1_S1 + 5));
            *(b + 170 * OS1_S1 + 4) =
                Z_PA * *(b + 122 * OS1_S1 + 4) +
                alpha_Z * *(b + 122 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 84 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 84 * OS1_S1 + 5));
            *(b + 171 * OS1_S1 + 4) =
                Y_PA * *(b + 123 * OS1_S1 + 4) +
                alpha_Y * *(b + 123 * OS1_S1 + 5) +
                2 * one_over_two_p *
                    (*(b + 85 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 85 * OS1_S1 + 5));
            *(b + 174 * OS1_S1 + 4) =
                Z_PA * *(b + 125 * OS1_S1 + 4) +
                alpha_Z * *(b + 125 * OS1_S1 + 5) +
                2 * one_over_two_p *
                    (*(b + 86 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 86 * OS1_S1 + 5));
            *(b + 175 * OS1_S1 + 4) =
                Y_PA * *(b + 126 * OS1_S1 + 4) +
                alpha_Y * *(b + 126 * OS1_S1 + 5) +
                3 * one_over_two_p *
                    (*(b + 87 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 87 * OS1_S1 + 5));
            *(b + 179 * OS1_S1 + 4) =
                Z_PA * *(b + 129 * OS1_S1 + 4) +
                alpha_Z * *(b + 129 * OS1_S1 + 5) +
                3 * one_over_two_p *
                    (*(b + 89 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 89 * OS1_S1 + 5));
            *(b + 180 * OS1_S1 + 4) =
                X_PA * *(b + 135 * OS1_S1 + 4) +
                alpha_X * *(b + 135 * OS1_S1 + 5) +
                3 * one_over_two_p *
                    (*(b + 99 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 99 * OS1_S1 + 5));
            *(b + 185 * OS1_S1 + 4) =
                X_PA * *(b + 140 * OS1_S1 + 4) +
                alpha_X * *(b + 140 * OS1_S1 + 5) +
                3 * one_over_two_p *
                    (*(b + 104 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 104 * OS1_S1 + 5));
            *(b + 186 * OS1_S1 + 4) =
                X_PA * *(b + 141 * OS1_S1 + 4) +
                alpha_X * *(b + 141 * OS1_S1 + 5) +
                2 * one_over_two_p *
                    (*(b + 105 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 105 * OS1_S1 + 5));
            *(b + 192 * OS1_S1 + 4) =
                X_PA * *(b + 147 * OS1_S1 + 4) +
                alpha_X * *(b + 147 * OS1_S1 + 5) +
                2 * one_over_two_p *
                    (*(b + 111 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 111 * OS1_S1 + 5));
            *(b + 193 * OS1_S1 + 4) =
                X_PA * *(b + 148 * OS1_S1 + 4) +
                alpha_X * *(b + 148 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 112 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 112 * OS1_S1 + 5));
            *(b + 200 * OS1_S1 + 4) =
                X_PA * *(b + 155 * OS1_S1 + 4) +
                alpha_X * *(b + 155 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 119 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 119 * OS1_S1 + 5));
            *(b + 201 * OS1_S1 + 4) = X_PA * *(b + 156 * OS1_S1 + 4) +
                                      alpha_X * *(b + 156 * OS1_S1 + 5);
            *(b + 209 * OS1_S1 + 4) = X_PA * *(b + 164 * OS1_S1 + 4) +
                                      alpha_X * *(b + 164 * OS1_S1 + 5);
            *(b + 210 * OS1_S1 + 4) =
                Y_PA * *(b + 156 * OS1_S1 + 4) +
                alpha_Y * *(b + 156 * OS1_S1 + 5) +
                8 * one_over_two_p *
                    (*(b + 112 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 112 * OS1_S1 + 5));
            *(b + 211 * OS1_S1 + 4) = Z_PA * *(b + 156 * OS1_S1 + 4) +
                                      alpha_Z * *(b + 156 * OS1_S1 + 5);
            *(b + 212 * OS1_S1 + 4) =
                Z_PA * *(b + 157 * OS1_S1 + 4) +
                alpha_Z * *(b + 157 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 112 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 112 * OS1_S1 + 5));
            *(b + 213 * OS1_S1 + 4) =
                Z_PA * *(b + 158 * OS1_S1 + 4) +
                alpha_Z * *(b + 158 * OS1_S1 + 5) +
                2 * one_over_two_p *
                    (*(b + 113 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 113 * OS1_S1 + 5));
            *(b + 214 * OS1_S1 + 4) =
                Z_PA * *(b + 159 * OS1_S1 + 4) +
                alpha_Z * *(b + 159 * OS1_S1 + 5) +
                3 * one_over_two_p *
                    (*(b + 114 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 114 * OS1_S1 + 5));
            *(b + 216 * OS1_S1 + 4) =
                Y_PA * *(b + 162 * OS1_S1 + 4) +
                alpha_Y * *(b + 162 * OS1_S1 + 5) +
                2 * one_over_two_p *
                    (*(b + 118 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 118 * OS1_S1 + 5));
            *(b + 217 * OS1_S1 + 4) =
                Y_PA * *(b + 163 * OS1_S1 + 4) +
                alpha_Y * *(b + 163 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 119 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 119 * OS1_S1 + 5));
            *(b + 218 * OS1_S1 + 4) = Y_PA * *(b + 164 * OS1_S1 + 4) +
                                      alpha_Y * *(b + 164 * OS1_S1 + 5);
            *(b + 219 * OS1_S1 + 4) =
                Z_PA * *(b + 164 * OS1_S1 + 4) +
                alpha_Z * *(b + 164 * OS1_S1 + 5) +
                8 * one_over_two_p *
                    (*(b + 119 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 119 * OS1_S1 + 5));
            *(b + 220 * OS1_S1 + 3) =
                X_PA * *(b + 165 * OS1_S1 + 3) +
                alpha_X * *(b + 165 * OS1_S1 + 4) +
                9 * one_over_two_p *
                    (*(b + 120 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 120 * OS1_S1 + 4));
            *(b + 221 * OS1_S1 + 3) = Y_PA * *(b + 165 * OS1_S1 + 3) +
                                      alpha_Y * *(b + 165 * OS1_S1 + 4);
            *(b + 222 * OS1_S1 + 3) = Z_PA * *(b + 165 * OS1_S1 + 3) +
                                      alpha_Z * *(b + 165 * OS1_S1 + 4);
            *(b + 223 * OS1_S1 + 3) =
                Y_PA * *(b + 166 * OS1_S1 + 3) +
                alpha_Y * *(b + 166 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 120 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 120 * OS1_S1 + 4));
            *(b + 225 * OS1_S1 + 3) =
                Z_PA * *(b + 167 * OS1_S1 + 3) +
                alpha_Z * *(b + 167 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 120 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 120 * OS1_S1 + 4));
            *(b + 226 * OS1_S1 + 3) =
                Y_PA * *(b + 168 * OS1_S1 + 3) +
                alpha_Y * *(b + 168 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 121 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 121 * OS1_S1 + 4));
            *(b + 229 * OS1_S1 + 3) =
                Z_PA * *(b + 170 * OS1_S1 + 3) +
                alpha_Z * *(b + 170 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 122 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 122 * OS1_S1 + 4));
            *(b + 230 * OS1_S1 + 3) =
                Y_PA * *(b + 171 * OS1_S1 + 3) +
                alpha_Y * *(b + 171 * OS1_S1 + 4) +
                3 * one_over_two_p *
                    (*(b + 123 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 123 * OS1_S1 + 4));
            *(b + 234 * OS1_S1 + 3) =
                Z_PA * *(b + 174 * OS1_S1 + 3) +
                alpha_Z * *(b + 174 * OS1_S1 + 4) +
                3 * one_over_two_p *
                    (*(b + 125 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 125 * OS1_S1 + 4));
            *(b + 235 * OS1_S1 + 3) =
                Y_PA * *(b + 175 * OS1_S1 + 3) +
                alpha_Y * *(b + 175 * OS1_S1 + 4) +
                4 * one_over_two_p *
                    (*(b + 126 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 126 * OS1_S1 + 4));
            *(b + 236 * OS1_S1 + 3) = Z_PA * *(b + 175 * OS1_S1 + 3) +
                                      alpha_Z * *(b + 175 * OS1_S1 + 4);
            *(b + 240 * OS1_S1 + 3) =
                Z_PA * *(b + 179 * OS1_S1 + 3) +
                alpha_Z * *(b + 179 * OS1_S1 + 4) +
                4 * one_over_two_p *
                    (*(b + 129 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 129 * OS1_S1 + 4));
            *(b + 241 * OS1_S1 + 3) =
                X_PA * *(b + 186 * OS1_S1 + 3) +
                alpha_X * *(b + 186 * OS1_S1 + 4) +
                3 * one_over_two_p *
                    (*(b + 141 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 141 * OS1_S1 + 4));
            *(b + 242 * OS1_S1 + 3) = Z_PA * *(b + 180 * OS1_S1 + 3) +
                                      alpha_Z * *(b + 180 * OS1_S1 + 4);
            *(b + 246 * OS1_S1 + 3) = Y_PA * *(b + 185 * OS1_S1 + 3) +
                                      alpha_Y * *(b + 185 * OS1_S1 + 4);
            *(b + 247 * OS1_S1 + 3) =
                X_PA * *(b + 192 * OS1_S1 + 3) +
                alpha_X * *(b + 192 * OS1_S1 + 4) +
                3 * one_over_two_p *
                    (*(b + 147 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 147 * OS1_S1 + 4));
            *(b + 248 * OS1_S1 + 3) =
                X_PA * *(b + 193 * OS1_S1 + 3) +
                alpha_X * *(b + 193 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 148 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 148 * OS1_S1 + 4));
            *(b + 255 * OS1_S1 + 3) =
                X_PA * *(b + 200 * OS1_S1 + 3) +
                alpha_X * *(b + 200 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 155 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 155 * OS1_S1 + 4));
            *(b + 256 * OS1_S1 + 3) =
                X_PA * *(b + 201 * OS1_S1 + 3) +
                alpha_X * *(b + 201 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 156 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 156 * OS1_S1 + 4));
            *(b + 264 * OS1_S1 + 3) =
                X_PA * *(b + 209 * OS1_S1 + 3) +
                alpha_X * *(b + 209 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 164 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 164 * OS1_S1 + 4));
            *(b + 265 * OS1_S1 + 3) = X_PA * *(b + 210 * OS1_S1 + 3) +
                                      alpha_X * *(b + 210 * OS1_S1 + 4);
            *(b + 274 * OS1_S1 + 3) = X_PA * *(b + 219 * OS1_S1 + 3) +
                                      alpha_X * *(b + 219 * OS1_S1 + 4);
            *(b + 275 * OS1_S1 + 3) =
                Y_PA * *(b + 210 * OS1_S1 + 3) +
                alpha_Y * *(b + 210 * OS1_S1 + 4) +
                9 * one_over_two_p *
                    (*(b + 156 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 156 * OS1_S1 + 4));
            *(b + 276 * OS1_S1 + 3) = Z_PA * *(b + 210 * OS1_S1 + 3) +
                                      alpha_Z * *(b + 210 * OS1_S1 + 4);
            *(b + 277 * OS1_S1 + 3) =
                Z_PA * *(b + 211 * OS1_S1 + 3) +
                alpha_Z * *(b + 211 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 156 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 156 * OS1_S1 + 4));
            *(b + 278 * OS1_S1 + 3) =
                Z_PA * *(b + 212 * OS1_S1 + 3) +
                alpha_Z * *(b + 212 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 157 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 157 * OS1_S1 + 4));
            *(b + 279 * OS1_S1 + 3) =
                Z_PA * *(b + 213 * OS1_S1 + 3) +
                alpha_Z * *(b + 213 * OS1_S1 + 4) +
                3 * one_over_two_p *
                    (*(b + 158 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 158 * OS1_S1 + 4));
            *(b + 280 * OS1_S1 + 3) =
                Z_PA * *(b + 214 * OS1_S1 + 3) +
                alpha_Z * *(b + 214 * OS1_S1 + 4) +
                4 * one_over_two_p *
                    (*(b + 159 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 159 * OS1_S1 + 4));
            *(b + 281 * OS1_S1 + 3) =
                Y_PA * *(b + 216 * OS1_S1 + 3) +
                alpha_Y * *(b + 216 * OS1_S1 + 4) +
                3 * one_over_two_p *
                    (*(b + 162 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 162 * OS1_S1 + 4));
            *(b + 282 * OS1_S1 + 3) =
                Y_PA * *(b + 217 * OS1_S1 + 3) +
                alpha_Y * *(b + 217 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 163 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 163 * OS1_S1 + 4));
            *(b + 283 * OS1_S1 + 3) =
                Y_PA * *(b + 218 * OS1_S1 + 3) +
                alpha_Y * *(b + 218 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 164 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 164 * OS1_S1 + 4));
            *(b + 284 * OS1_S1 + 3) = Y_PA * *(b + 219 * OS1_S1 + 3) +
                                      alpha_Y * *(b + 219 * OS1_S1 + 4);
            *(b + 285 * OS1_S1 + 3) =
                Z_PA * *(b + 219 * OS1_S1 + 3) +
                alpha_Z * *(b + 219 * OS1_S1 + 4) +
                9 * one_over_two_p *
                    (*(b + 164 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 164 * OS1_S1 + 4));
            *(b + 286 * OS1_S1 + 2) =
                X_PA * *(b + 220 * OS1_S1 + 2) +
                alpha_X * *(b + 220 * OS1_S1 + 3) +
                10 * one_over_two_p *
                    (*(b + 165 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 165 * OS1_S1 + 3));
            *(b + 287 * OS1_S1 + 2) = Y_PA * *(b + 220 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 220 * OS1_S1 + 3);
            *(b + 288 * OS1_S1 + 2) = Z_PA * *(b + 220 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 220 * OS1_S1 + 3);
            *(b + 289 * OS1_S1 + 2) =
                Y_PA * *(b + 221 * OS1_S1 + 2) +
                alpha_Y * *(b + 221 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 165 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 165 * OS1_S1 + 3));
            *(b + 291 * OS1_S1 + 2) =
                Z_PA * *(b + 222 * OS1_S1 + 2) +
                alpha_Z * *(b + 222 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 165 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 165 * OS1_S1 + 3));
            *(b + 292 * OS1_S1 + 2) =
                Y_PA * *(b + 223 * OS1_S1 + 2) +
                alpha_Y * *(b + 223 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 166 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 166 * OS1_S1 + 3));
            *(b + 295 * OS1_S1 + 2) =
                Z_PA * *(b + 225 * OS1_S1 + 2) +
                alpha_Z * *(b + 225 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 167 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 167 * OS1_S1 + 3));
            *(b + 296 * OS1_S1 + 2) =
                Y_PA * *(b + 226 * OS1_S1 + 2) +
                alpha_Y * *(b + 226 * OS1_S1 + 3) +
                3 * one_over_two_p *
                    (*(b + 168 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 168 * OS1_S1 + 3));
            *(b + 297 * OS1_S1 + 2) = Z_PA * *(b + 226 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 226 * OS1_S1 + 3);
            *(b + 300 * OS1_S1 + 2) =
                Z_PA * *(b + 229 * OS1_S1 + 2) +
                alpha_Z * *(b + 229 * OS1_S1 + 3) +
                3 * one_over_two_p *
                    (*(b + 170 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 170 * OS1_S1 + 3));
            *(b + 301 * OS1_S1 + 2) =
                Y_PA * *(b + 230 * OS1_S1 + 2) +
                alpha_Y * *(b + 230 * OS1_S1 + 3) +
                4 * one_over_two_p *
                    (*(b + 171 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 171 * OS1_S1 + 3));
            *(b + 302 * OS1_S1 + 2) = Z_PA * *(b + 230 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 230 * OS1_S1 + 3);
            *(b + 305 * OS1_S1 + 2) = Y_PA * *(b + 234 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 234 * OS1_S1 + 3);
            *(b + 306 * OS1_S1 + 2) =
                Z_PA * *(b + 234 * OS1_S1 + 2) +
                alpha_Z * *(b + 234 * OS1_S1 + 3) +
                4 * one_over_two_p *
                    (*(b + 174 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 174 * OS1_S1 + 3));
            *(b + 307 * OS1_S1 + 2) =
                X_PA * *(b + 241 * OS1_S1 + 2) +
                alpha_X * *(b + 241 * OS1_S1 + 3) +
                4 * one_over_two_p *
                    (*(b + 186 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 186 * OS1_S1 + 3));
            *(b + 308 * OS1_S1 + 2) = Z_PA * *(b + 235 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 235 * OS1_S1 + 3);
            *(b + 309 * OS1_S1 + 2) =
                Z_PA * *(b + 236 * OS1_S1 + 2) +
                alpha_Z * *(b + 236 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 175 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 175 * OS1_S1 + 3));
            *(b + 312 * OS1_S1 + 2) = Y_PA * *(b + 240 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 240 * OS1_S1 + 3);
            *(b + 313 * OS1_S1 + 2) =
                X_PA * *(b + 247 * OS1_S1 + 2) +
                alpha_X * *(b + 247 * OS1_S1 + 3) +
                4 * one_over_two_p *
                    (*(b + 192 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 192 * OS1_S1 + 3));
            *(b + 314 * OS1_S1 + 2) =
                X_PA * *(b + 248 * OS1_S1 + 2) +
                alpha_X * *(b + 248 * OS1_S1 + 3) +
                3 * one_over_two_p *
                    (*(b + 193 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 193 * OS1_S1 + 3));
            *(b + 315 * OS1_S1 + 2) = Z_PA * *(b + 241 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 241 * OS1_S1 + 3);
            *(b + 316 * OS1_S1 + 2) =
                Z_PA * *(b + 242 * OS1_S1 + 2) +
                alpha_Z * *(b + 242 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 180 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 180 * OS1_S1 + 3));
            *(b + 319 * OS1_S1 + 2) =
                Y_PA * *(b + 246 * OS1_S1 + 2) +
                alpha_Y * *(b + 246 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 185 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 185 * OS1_S1 + 3));
            *(b + 320 * OS1_S1 + 2) = Y_PA * *(b + 247 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 247 * OS1_S1 + 3);
            *(b + 321 * OS1_S1 + 2) =
                X_PA * *(b + 255 * OS1_S1 + 2) +
                alpha_X * *(b + 255 * OS1_S1 + 3) +
                3 * one_over_two_p *
                    (*(b + 200 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 200 * OS1_S1 + 3));
            *(b + 322 * OS1_S1 + 2) =
                X_PA * *(b + 256 * OS1_S1 + 2) +
                alpha_X * *(b + 256 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 201 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 201 * OS1_S1 + 3));
            *(b + 323 * OS1_S1 + 2) = Z_PA * *(b + 248 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 248 * OS1_S1 + 3);
            *(b + 329 * OS1_S1 + 2) = Y_PA * *(b + 255 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 255 * OS1_S1 + 3);
            *(b + 330 * OS1_S1 + 2) =
                X_PA * *(b + 264 * OS1_S1 + 2) +
                alpha_X * *(b + 264 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 209 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 209 * OS1_S1 + 3));
            *(b + 331 * OS1_S1 + 2) =
                X_PA * *(b + 265 * OS1_S1 + 2) +
                alpha_X * *(b + 265 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 210 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 210 * OS1_S1 + 3));
            *(b + 340 * OS1_S1 + 2) =
                X_PA * *(b + 274 * OS1_S1 + 2) +
                alpha_X * *(b + 274 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 219 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 219 * OS1_S1 + 3));
            *(b + 341 * OS1_S1 + 2) = X_PA * *(b + 275 * OS1_S1 + 2) +
                                      alpha_X * *(b + 275 * OS1_S1 + 3);
            *(b + 345 * OS1_S1 + 2) = X_PA * *(b + 279 * OS1_S1 + 2) +
                                      alpha_X * *(b + 279 * OS1_S1 + 3);
            *(b + 346 * OS1_S1 + 2) = X_PA * *(b + 280 * OS1_S1 + 2) +
                                      alpha_X * *(b + 280 * OS1_S1 + 3);
            *(b + 347 * OS1_S1 + 2) = X_PA * *(b + 281 * OS1_S1 + 2) +
                                      alpha_X * *(b + 281 * OS1_S1 + 3);
            *(b + 351 * OS1_S1 + 2) = X_PA * *(b + 285 * OS1_S1 + 2) +
                                      alpha_X * *(b + 285 * OS1_S1 + 3);
            *(b + 352 * OS1_S1 + 2) =
                Y_PA * *(b + 275 * OS1_S1 + 2) +
                alpha_Y * *(b + 275 * OS1_S1 + 3) +
                10 * one_over_two_p *
                    (*(b + 210 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 210 * OS1_S1 + 3));
            *(b + 353 * OS1_S1 + 2) = Z_PA * *(b + 275 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 275 * OS1_S1 + 3);
            *(b + 354 * OS1_S1 + 2) =
                Z_PA * *(b + 276 * OS1_S1 + 2) +
                alpha_Z * *(b + 276 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 210 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 210 * OS1_S1 + 3));
            *(b + 355 * OS1_S1 + 2) =
                Z_PA * *(b + 277 * OS1_S1 + 2) +
                alpha_Z * *(b + 277 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 211 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 211 * OS1_S1 + 3));
            *(b + 356 * OS1_S1 + 2) =
                Z_PA * *(b + 278 * OS1_S1 + 2) +
                alpha_Z * *(b + 278 * OS1_S1 + 3) +
                3 * one_over_two_p *
                    (*(b + 212 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 212 * OS1_S1 + 3));
            *(b + 357 * OS1_S1 + 2) =
                Z_PA * *(b + 279 * OS1_S1 + 2) +
                alpha_Z * *(b + 279 * OS1_S1 + 3) +
                4 * one_over_two_p *
                    (*(b + 213 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 213 * OS1_S1 + 3));
            *(b + 358 * OS1_S1 + 2) =
                Y_PA * *(b + 281 * OS1_S1 + 2) +
                alpha_Y * *(b + 281 * OS1_S1 + 3) +
                4 * one_over_two_p *
                    (*(b + 216 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 216 * OS1_S1 + 3));
            *(b + 359 * OS1_S1 + 2) =
                Y_PA * *(b + 282 * OS1_S1 + 2) +
                alpha_Y * *(b + 282 * OS1_S1 + 3) +
                3 * one_over_two_p *
                    (*(b + 217 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 217 * OS1_S1 + 3));
            *(b + 360 * OS1_S1 + 2) =
                Y_PA * *(b + 283 * OS1_S1 + 2) +
                alpha_Y * *(b + 283 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 218 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 218 * OS1_S1 + 3));
            *(b + 361 * OS1_S1 + 2) =
                Y_PA * *(b + 284 * OS1_S1 + 2) +
                alpha_Y * *(b + 284 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 219 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 219 * OS1_S1 + 3));
            *(b + 362 * OS1_S1 + 2) = Y_PA * *(b + 285 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 285 * OS1_S1 + 3);
            *(b + 363 * OS1_S1 + 2) =
                Z_PA * *(b + 285 * OS1_S1 + 2) +
                alpha_Z * *(b + 285 * OS1_S1 + 3) +
                10 * one_over_two_p *
                    (*(b + 219 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 219 * OS1_S1 + 3));
            *(b + 364 * OS1_S1 + 1) =
                X_PA * *(b + 286 * OS1_S1 + 1) +
                alpha_X * *(b + 286 * OS1_S1 + 2) +
                11 * one_over_two_p *
                    (*(b + 220 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 220 * OS1_S1 + 2));
            *(b + 365 * OS1_S1 + 1) = Y_PA * *(b + 286 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 286 * OS1_S1 + 2);
            *(b + 366 * OS1_S1 + 1) = Z_PA * *(b + 286 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 286 * OS1_S1 + 2);
            *(b + 367 * OS1_S1 + 1) =
                Y_PA * *(b + 287 * OS1_S1 + 1) +
                alpha_Y * *(b + 287 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 220 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 220 * OS1_S1 + 2));
            *(b + 369 * OS1_S1 + 1) =
                Z_PA * *(b + 288 * OS1_S1 + 1) +
                alpha_Z * *(b + 288 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 220 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 220 * OS1_S1 + 2));
            *(b + 370 * OS1_S1 + 1) =
                Y_PA * *(b + 289 * OS1_S1 + 1) +
                alpha_Y * *(b + 289 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 221 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 221 * OS1_S1 + 2));
            *(b + 371 * OS1_S1 + 1) = Z_PA * *(b + 289 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 289 * OS1_S1 + 2);
            *(b + 373 * OS1_S1 + 1) =
                Z_PA * *(b + 291 * OS1_S1 + 1) +
                alpha_Z * *(b + 291 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 222 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 222 * OS1_S1 + 2));
            *(b + 374 * OS1_S1 + 1) =
                Y_PA * *(b + 292 * OS1_S1 + 1) +
                alpha_Y * *(b + 292 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 223 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 223 * OS1_S1 + 2));
            *(b + 375 * OS1_S1 + 1) = Z_PA * *(b + 292 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 292 * OS1_S1 + 2);
            *(b + 377 * OS1_S1 + 1) = Y_PA * *(b + 295 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 295 * OS1_S1 + 2);
            *(b + 378 * OS1_S1 + 1) =
                Z_PA * *(b + 295 * OS1_S1 + 1) +
                alpha_Z * *(b + 295 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 225 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 225 * OS1_S1 + 2));
            *(b + 379 * OS1_S1 + 1) =
                Y_PA * *(b + 296 * OS1_S1 + 1) +
                alpha_Y * *(b + 296 * OS1_S1 + 2) +
                4 * one_over_two_p *
                    (*(b + 226 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 226 * OS1_S1 + 2));
            *(b + 380 * OS1_S1 + 1) = Z_PA * *(b + 296 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 296 * OS1_S1 + 2);
            *(b + 381 * OS1_S1 + 1) =
                Z_PA * *(b + 297 * OS1_S1 + 1) +
                alpha_Z * *(b + 297 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 226 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 226 * OS1_S1 + 2));
            *(b + 383 * OS1_S1 + 1) = Y_PA * *(b + 300 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 300 * OS1_S1 + 2);
            *(b + 384 * OS1_S1 + 1) =
                Z_PA * *(b + 300 * OS1_S1 + 1) +
                alpha_Z * *(b + 300 * OS1_S1 + 2) +
                4 * one_over_two_p *
                    (*(b + 229 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 229 * OS1_S1 + 2));
            *(b + 385 * OS1_S1 + 1) =
                Y_PA * *(b + 301 * OS1_S1 + 1) +
                alpha_Y * *(b + 301 * OS1_S1 + 2) +
                5 * one_over_two_p *
                    (*(b + 230 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 230 * OS1_S1 + 2));
            *(b + 386 * OS1_S1 + 1) = Z_PA * *(b + 301 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 301 * OS1_S1 + 2);
            *(b + 387 * OS1_S1 + 1) =
                Z_PA * *(b + 302 * OS1_S1 + 1) +
                alpha_Z * *(b + 302 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 230 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 230 * OS1_S1 + 2));
            *(b + 389 * OS1_S1 + 1) =
                Y_PA * *(b + 305 * OS1_S1 + 1) +
                alpha_Y * *(b + 305 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 234 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 234 * OS1_S1 + 2));
            *(b + 390 * OS1_S1 + 1) = Y_PA * *(b + 306 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 306 * OS1_S1 + 2);
            *(b + 391 * OS1_S1 + 1) =
                Z_PA * *(b + 306 * OS1_S1 + 1) +
                alpha_Z * *(b + 306 * OS1_S1 + 2) +
                5 * one_over_two_p *
                    (*(b + 234 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 234 * OS1_S1 + 2));
            *(b + 392 * OS1_S1 + 1) =
                X_PA * *(b + 314 * OS1_S1 + 1) +
                alpha_X * *(b + 314 * OS1_S1 + 2) +
                4 * one_over_two_p *
                    (*(b + 248 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 248 * OS1_S1 + 2));
            *(b + 393 * OS1_S1 + 1) = Z_PA * *(b + 307 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 307 * OS1_S1 + 2);
            *(b + 394 * OS1_S1 + 1) =
                Z_PA * *(b + 308 * OS1_S1 + 1) +
                alpha_Z * *(b + 308 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 235 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 235 * OS1_S1 + 2));
            *(b + 395 * OS1_S1 + 1) =
                Z_PA * *(b + 309 * OS1_S1 + 1) +
                alpha_Z * *(b + 309 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 236 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 236 * OS1_S1 + 2));
            *(b + 397 * OS1_S1 + 1) =
                Y_PA * *(b + 312 * OS1_S1 + 1) +
                alpha_Y * *(b + 312 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 240 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 240 * OS1_S1 + 2));
            *(b + 398 * OS1_S1 + 1) = Y_PA * *(b + 313 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 313 * OS1_S1 + 2);
            *(b + 399 * OS1_S1 + 1) =
                X_PA * *(b + 321 * OS1_S1 + 1) +
                alpha_X * *(b + 321 * OS1_S1 + 2) +
                4 * one_over_two_p *
                    (*(b + 255 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 255 * OS1_S1 + 2));
            *(b + 400 * OS1_S1 + 1) =
                X_PA * *(b + 322 * OS1_S1 + 1) +
                alpha_X * *(b + 322 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 256 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 256 * OS1_S1 + 2));
            *(b + 401 * OS1_S1 + 1) = Z_PA * *(b + 314 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 314 * OS1_S1 + 2);
            *(b + 402 * OS1_S1 + 1) =
                Z_PA * *(b + 315 * OS1_S1 + 1) +
                alpha_Z * *(b + 315 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 241 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 241 * OS1_S1 + 2));
            *(b + 403 * OS1_S1 + 1) =
                Z_PA * *(b + 316 * OS1_S1 + 1) +
                alpha_Z * *(b + 316 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 242 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 242 * OS1_S1 + 2));
            *(b + 405 * OS1_S1 + 1) =
                Y_PA * *(b + 319 * OS1_S1 + 1) +
                alpha_Y * *(b + 319 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 246 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 246 * OS1_S1 + 2));
            *(b + 406 * OS1_S1 + 1) =
                Y_PA * *(b + 320 * OS1_S1 + 1) +
                alpha_Y * *(b + 320 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 247 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 247 * OS1_S1 + 2));
            *(b + 407 * OS1_S1 + 1) = Y_PA * *(b + 321 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 321 * OS1_S1 + 2);
            *(b + 408 * OS1_S1 + 1) =
                X_PA * *(b + 330 * OS1_S1 + 1) +
                alpha_X * *(b + 330 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 264 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 264 * OS1_S1 + 2));
            *(b + 409 * OS1_S1 + 1) =
                X_PA * *(b + 331 * OS1_S1 + 1) +
                alpha_X * *(b + 331 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 265 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 265 * OS1_S1 + 2));
            *(b + 410 * OS1_S1 + 1) = Z_PA * *(b + 322 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 322 * OS1_S1 + 2);
            *(b + 411 * OS1_S1 + 1) =
                Z_PA * *(b + 323 * OS1_S1 + 1) +
                alpha_Z * *(b + 323 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 248 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 248 * OS1_S1 + 2));
            *(b + 416 * OS1_S1 + 1) =
                Y_PA * *(b + 329 * OS1_S1 + 1) +
                alpha_Y * *(b + 329 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 255 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 255 * OS1_S1 + 2));
            *(b + 417 * OS1_S1 + 1) = Y_PA * *(b + 330 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 330 * OS1_S1 + 2);
            *(b + 418 * OS1_S1 + 1) =
                X_PA * *(b + 340 * OS1_S1 + 1) +
                alpha_X * *(b + 340 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 274 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 274 * OS1_S1 + 2));
            *(b + 419 * OS1_S1 + 1) =
                X_PA * *(b + 341 * OS1_S1 + 1) +
                alpha_X * *(b + 341 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 275 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 275 * OS1_S1 + 2));
            *(b + 420 * OS1_S1 + 1) = Z_PA * *(b + 331 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 331 * OS1_S1 + 2);
            *(b + 423 * OS1_S1 + 1) =
                X_PA * *(b + 345 * OS1_S1 + 1) +
                alpha_X * *(b + 345 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 279 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 279 * OS1_S1 + 2));
            *(b + 424 * OS1_S1 + 1) =
                X_PA * *(b + 346 * OS1_S1 + 1) +
                alpha_X * *(b + 346 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 280 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 280 * OS1_S1 + 2));
            *(b + 425 * OS1_S1 + 1) =
                X_PA * *(b + 347 * OS1_S1 + 1) +
                alpha_X * *(b + 347 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 281 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 281 * OS1_S1 + 2));
            *(b + 428 * OS1_S1 + 1) = Y_PA * *(b + 340 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 340 * OS1_S1 + 2);
            *(b + 429 * OS1_S1 + 1) =
                X_PA * *(b + 351 * OS1_S1 + 1) +
                alpha_X * *(b + 351 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 285 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 285 * OS1_S1 + 2));
            *(b + 430 * OS1_S1 + 1) = X_PA * *(b + 352 * OS1_S1 + 1) +
                                      alpha_X * *(b + 352 * OS1_S1 + 2);
            *(b + 433 * OS1_S1 + 1) = X_PA * *(b + 355 * OS1_S1 + 1) +
                                      alpha_X * *(b + 355 * OS1_S1 + 2);
            *(b + 434 * OS1_S1 + 1) = X_PA * *(b + 356 * OS1_S1 + 1) +
                                      alpha_X * *(b + 356 * OS1_S1 + 2);
            *(b + 435 * OS1_S1 + 1) = X_PA * *(b + 357 * OS1_S1 + 1) +
                                      alpha_X * *(b + 357 * OS1_S1 + 2);
            *(b + 436 * OS1_S1 + 1) = X_PA * *(b + 358 * OS1_S1 + 1) +
                                      alpha_X * *(b + 358 * OS1_S1 + 2);
            *(b + 437 * OS1_S1 + 1) = X_PA * *(b + 359 * OS1_S1 + 1) +
                                      alpha_X * *(b + 359 * OS1_S1 + 2);
            *(b + 438 * OS1_S1 + 1) = X_PA * *(b + 360 * OS1_S1 + 1) +
                                      alpha_X * *(b + 360 * OS1_S1 + 2);
            *(b + 441 * OS1_S1 + 1) = X_PA * *(b + 363 * OS1_S1 + 1) +
                                      alpha_X * *(b + 363 * OS1_S1 + 2);
            *(b + 442 * OS1_S1 + 1) =
                Y_PA * *(b + 352 * OS1_S1 + 1) +
                alpha_Y * *(b + 352 * OS1_S1 + 2) +
                11 * one_over_two_p *
                    (*(b + 275 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 275 * OS1_S1 + 2));
            *(b + 443 * OS1_S1 + 1) = Z_PA * *(b + 352 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 352 * OS1_S1 + 2);
            *(b + 444 * OS1_S1 + 1) =
                Z_PA * *(b + 353 * OS1_S1 + 1) +
                alpha_Z * *(b + 353 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 275 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 275 * OS1_S1 + 2));
            *(b + 445 * OS1_S1 + 1) =
                Z_PA * *(b + 354 * OS1_S1 + 1) +
                alpha_Z * *(b + 354 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 276 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 276 * OS1_S1 + 2));
            *(b + 446 * OS1_S1 + 1) =
                Z_PA * *(b + 355 * OS1_S1 + 1) +
                alpha_Z * *(b + 355 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 277 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 277 * OS1_S1 + 2));
            *(b + 447 * OS1_S1 + 1) =
                Z_PA * *(b + 356 * OS1_S1 + 1) +
                alpha_Z * *(b + 356 * OS1_S1 + 2) +
                4 * one_over_two_p *
                    (*(b + 278 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 278 * OS1_S1 + 2));
            *(b + 448 * OS1_S1 + 1) =
                Z_PA * *(b + 357 * OS1_S1 + 1) +
                alpha_Z * *(b + 357 * OS1_S1 + 2) +
                5 * one_over_two_p *
                    (*(b + 279 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 279 * OS1_S1 + 2));
            *(b + 449 * OS1_S1 + 1) =
                Y_PA * *(b + 359 * OS1_S1 + 1) +
                alpha_Y * *(b + 359 * OS1_S1 + 2) +
                4 * one_over_two_p *
                    (*(b + 282 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 282 * OS1_S1 + 2));
            *(b + 450 * OS1_S1 + 1) =
                Y_PA * *(b + 360 * OS1_S1 + 1) +
                alpha_Y * *(b + 360 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 283 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 283 * OS1_S1 + 2));
            *(b + 451 * OS1_S1 + 1) =
                Y_PA * *(b + 361 * OS1_S1 + 1) +
                alpha_Y * *(b + 361 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 284 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 284 * OS1_S1 + 2));
            *(b + 452 * OS1_S1 + 1) =
                Y_PA * *(b + 362 * OS1_S1 + 1) +
                alpha_Y * *(b + 362 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 285 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 285 * OS1_S1 + 2));
            *(b + 453 * OS1_S1 + 1) = Y_PA * *(b + 363 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 363 * OS1_S1 + 2);
            *(b + 454 * OS1_S1 + 1) =
                Z_PA * *(b + 363 * OS1_S1 + 1) +
                alpha_Z * *(b + 363 * OS1_S1 + 2) +
                11 * one_over_two_p *
                    (*(b + 285 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 285 * OS1_S1 + 2));
            *(b + 455 * OS1_S1 + 0) =
                X_PA * *(b + 364 * OS1_S1 + 0) +
                alpha_X * *(b + 364 * OS1_S1 + 1) +
                12 * one_over_two_p *
                    (*(b + 286 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 286 * OS1_S1 + 1));
            *(b + 456 * OS1_S1 + 0) = Y_PA * *(b + 364 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 364 * OS1_S1 + 1);
            *(b + 457 * OS1_S1 + 0) = Z_PA * *(b + 364 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 364 * OS1_S1 + 1);
            *(b + 458 * OS1_S1 + 0) =
                Y_PA * *(b + 365 * OS1_S1 + 0) +
                alpha_Y * *(b + 365 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 286 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 286 * OS1_S1 + 1));
            *(b + 459 * OS1_S1 + 0) = Z_PA * *(b + 365 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 365 * OS1_S1 + 1);
            *(b + 460 * OS1_S1 + 0) =
                Z_PA * *(b + 366 * OS1_S1 + 0) +
                alpha_Z * *(b + 366 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 286 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 286 * OS1_S1 + 1));
            *(b + 461 * OS1_S1 + 0) =
                Y_PA * *(b + 367 * OS1_S1 + 0) +
                alpha_Y * *(b + 367 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 287 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 287 * OS1_S1 + 1));
            *(b + 462 * OS1_S1 + 0) = Z_PA * *(b + 367 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 367 * OS1_S1 + 1);
            *(b + 463 * OS1_S1 + 0) = Y_PA * *(b + 369 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 369 * OS1_S1 + 1);
            *(b + 464 * OS1_S1 + 0) =
                Z_PA * *(b + 369 * OS1_S1 + 0) +
                alpha_Z * *(b + 369 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 288 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 288 * OS1_S1 + 1));
            *(b + 465 * OS1_S1 + 0) =
                Y_PA * *(b + 370 * OS1_S1 + 0) +
                alpha_Y * *(b + 370 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 289 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 289 * OS1_S1 + 1));
            *(b + 466 * OS1_S1 + 0) = Z_PA * *(b + 370 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 370 * OS1_S1 + 1);
            *(b + 467 * OS1_S1 + 0) =
                Z_PA * *(b + 371 * OS1_S1 + 0) +
                alpha_Z * *(b + 371 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 289 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 289 * OS1_S1 + 1));
            *(b + 468 * OS1_S1 + 0) = Y_PA * *(b + 373 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 373 * OS1_S1 + 1);
            *(b + 469 * OS1_S1 + 0) =
                Z_PA * *(b + 373 * OS1_S1 + 0) +
                alpha_Z * *(b + 373 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 291 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 291 * OS1_S1 + 1));
            *(b + 470 * OS1_S1 + 0) =
                Y_PA * *(b + 374 * OS1_S1 + 0) +
                alpha_Y * *(b + 374 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 292 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 292 * OS1_S1 + 1));
            *(b + 471 * OS1_S1 + 0) = Z_PA * *(b + 374 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 374 * OS1_S1 + 1);
            *(b + 472 * OS1_S1 + 0) =
                Z_PA * *(b + 375 * OS1_S1 + 0) +
                alpha_Z * *(b + 375 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 292 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 292 * OS1_S1 + 1));
            *(b + 473 * OS1_S1 + 0) =
                Y_PA * *(b + 377 * OS1_S1 + 0) +
                alpha_Y * *(b + 377 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 295 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 295 * OS1_S1 + 1));
            *(b + 474 * OS1_S1 + 0) = Y_PA * *(b + 378 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 378 * OS1_S1 + 1);
            *(b + 475 * OS1_S1 + 0) =
                Z_PA * *(b + 378 * OS1_S1 + 0) +
                alpha_Z * *(b + 378 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 295 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 295 * OS1_S1 + 1));
            *(b + 476 * OS1_S1 + 0) =
                Y_PA * *(b + 379 * OS1_S1 + 0) +
                alpha_Y * *(b + 379 * OS1_S1 + 1) +
                5 * one_over_two_p *
                    (*(b + 296 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 296 * OS1_S1 + 1));
            *(b + 477 * OS1_S1 + 0) = Z_PA * *(b + 379 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 379 * OS1_S1 + 1);
            *(b + 478 * OS1_S1 + 0) =
                Z_PA * *(b + 380 * OS1_S1 + 0) +
                alpha_Z * *(b + 380 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 296 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 296 * OS1_S1 + 1));
            *(b + 479 * OS1_S1 + 0) =
                Z_PA * *(b + 381 * OS1_S1 + 0) +
                alpha_Z * *(b + 381 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 297 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 297 * OS1_S1 + 1));
            *(b + 480 * OS1_S1 + 0) =
                Y_PA * *(b + 383 * OS1_S1 + 0) +
                alpha_Y * *(b + 383 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 300 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 300 * OS1_S1 + 1));
            *(b + 481 * OS1_S1 + 0) = Y_PA * *(b + 384 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 384 * OS1_S1 + 1);
            *(b + 482 * OS1_S1 + 0) =
                Z_PA * *(b + 384 * OS1_S1 + 0) +
                alpha_Z * *(b + 384 * OS1_S1 + 1) +
                5 * one_over_two_p *
                    (*(b + 300 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 300 * OS1_S1 + 1));
            *(b + 483 * OS1_S1 + 0) =
                X_PA * *(b + 392 * OS1_S1 + 0) +
                alpha_X * *(b + 392 * OS1_S1 + 1) +
                5 * one_over_two_p *
                    (*(b + 314 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 314 * OS1_S1 + 1));
            *(b + 484 * OS1_S1 + 0) = Z_PA * *(b + 385 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 385 * OS1_S1 + 1);
            *(b + 485 * OS1_S1 + 0) =
                Z_PA * *(b + 386 * OS1_S1 + 0) +
                alpha_Z * *(b + 386 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 301 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 301 * OS1_S1 + 1));
            *(b + 486 * OS1_S1 + 0) =
                Z_PA * *(b + 387 * OS1_S1 + 0) +
                alpha_Z * *(b + 387 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 302 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 302 * OS1_S1 + 1));
            *(b + 487 * OS1_S1 + 0) =
                Y_PA * *(b + 389 * OS1_S1 + 0) +
                alpha_Y * *(b + 389 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 305 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 305 * OS1_S1 + 1));
            *(b + 488 * OS1_S1 + 0) =
                Y_PA * *(b + 390 * OS1_S1 + 0) +
                alpha_Y * *(b + 390 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 306 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 306 * OS1_S1 + 1));
            *(b + 489 * OS1_S1 + 0) = Y_PA * *(b + 391 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 391 * OS1_S1 + 1);
            *(b + 490 * OS1_S1 + 0) =
                X_PA * *(b + 399 * OS1_S1 + 0) +
                alpha_X * *(b + 399 * OS1_S1 + 1) +
                5 * one_over_two_p *
                    (*(b + 321 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 321 * OS1_S1 + 1));
            *(b + 491 * OS1_S1 + 0) =
                X_PA * *(b + 400 * OS1_S1 + 0) +
                alpha_X * *(b + 400 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 322 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 322 * OS1_S1 + 1));
            *(b + 492 * OS1_S1 + 0) = Z_PA * *(b + 392 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 392 * OS1_S1 + 1);
            *(b + 493 * OS1_S1 + 0) =
                Z_PA * *(b + 393 * OS1_S1 + 0) +
                alpha_Z * *(b + 393 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 307 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 307 * OS1_S1 + 1));
            *(b + 494 * OS1_S1 + 0) =
                Z_PA * *(b + 394 * OS1_S1 + 0) +
                alpha_Z * *(b + 394 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 308 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 308 * OS1_S1 + 1));
            *(b + 495 * OS1_S1 + 0) =
                Z_PA * *(b + 395 * OS1_S1 + 0) +
                alpha_Z * *(b + 395 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 309 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 309 * OS1_S1 + 1));
            *(b + 496 * OS1_S1 + 0) =
                Y_PA * *(b + 397 * OS1_S1 + 0) +
                alpha_Y * *(b + 397 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 312 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 312 * OS1_S1 + 1));
            *(b + 497 * OS1_S1 + 0) =
                Y_PA * *(b + 398 * OS1_S1 + 0) +
                alpha_Y * *(b + 398 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 313 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 313 * OS1_S1 + 1));
            *(b + 498 * OS1_S1 + 0) = Y_PA * *(b + 399 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 399 * OS1_S1 + 1);
            *(b + 499 * OS1_S1 + 0) =
                X_PA * *(b + 408 * OS1_S1 + 0) +
                alpha_X * *(b + 408 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 330 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 330 * OS1_S1 + 1));
            *(b + 500 * OS1_S1 + 0) =
                X_PA * *(b + 409 * OS1_S1 + 0) +
                alpha_X * *(b + 409 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 331 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 331 * OS1_S1 + 1));
            *(b + 501 * OS1_S1 + 0) = Z_PA * *(b + 400 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 400 * OS1_S1 + 1);
            *(b + 502 * OS1_S1 + 0) =
                Z_PA * *(b + 401 * OS1_S1 + 0) +
                alpha_Z * *(b + 401 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 314 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 314 * OS1_S1 + 1));
            *(b + 503 * OS1_S1 + 0) =
                Z_PA * *(b + 402 * OS1_S1 + 0) +
                alpha_Z * *(b + 402 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 315 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 315 * OS1_S1 + 1));
            *(b + 504 * OS1_S1 + 0) =
                Z_PA * *(b + 403 * OS1_S1 + 0) +
                alpha_Z * *(b + 403 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 316 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 316 * OS1_S1 + 1));
            *(b + 505 * OS1_S1 + 0) =
                Y_PA * *(b + 405 * OS1_S1 + 0) +
                alpha_Y * *(b + 405 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 319 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 319 * OS1_S1 + 1));
            *(b + 506 * OS1_S1 + 0) =
                Y_PA * *(b + 406 * OS1_S1 + 0) +
                alpha_Y * *(b + 406 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 320 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 320 * OS1_S1 + 1));
            *(b + 507 * OS1_S1 + 0) =
                Y_PA * *(b + 407 * OS1_S1 + 0) +
                alpha_Y * *(b + 407 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 321 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 321 * OS1_S1 + 1));
            *(b + 508 * OS1_S1 + 0) = Y_PA * *(b + 408 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 408 * OS1_S1 + 1);
            *(b + 509 * OS1_S1 + 0) =
                X_PA * *(b + 418 * OS1_S1 + 0) +
                alpha_X * *(b + 418 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 340 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 340 * OS1_S1 + 1));
            *(b + 510 * OS1_S1 + 0) =
                X_PA * *(b + 419 * OS1_S1 + 0) +
                alpha_X * *(b + 419 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 341 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 341 * OS1_S1 + 1));
            *(b + 511 * OS1_S1 + 0) = Z_PA * *(b + 409 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 409 * OS1_S1 + 1);
            *(b + 512 * OS1_S1 + 0) =
                Z_PA * *(b + 410 * OS1_S1 + 0) +
                alpha_Z * *(b + 410 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 322 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 322 * OS1_S1 + 1));
            *(b + 513 * OS1_S1 + 0) =
                Z_PA * *(b + 411 * OS1_S1 + 0) +
                alpha_Z * *(b + 411 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 323 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 323 * OS1_S1 + 1));
            *(b + 514 * OS1_S1 + 0) =
                X_PA * *(b + 423 * OS1_S1 + 0) +
                alpha_X * *(b + 423 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 345 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 345 * OS1_S1 + 1));
            *(b + 515 * OS1_S1 + 0) =
                X_PA * *(b + 424 * OS1_S1 + 0) +
                alpha_X * *(b + 424 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 346 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 346 * OS1_S1 + 1));
            *(b + 516 * OS1_S1 + 0) =
                X_PA * *(b + 425 * OS1_S1 + 0) +
                alpha_X * *(b + 425 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 347 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 347 * OS1_S1 + 1));
            *(b + 517 * OS1_S1 + 0) =
                Y_PA * *(b + 416 * OS1_S1 + 0) +
                alpha_Y * *(b + 416 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 329 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 329 * OS1_S1 + 1));
            *(b + 518 * OS1_S1 + 0) =
                Y_PA * *(b + 417 * OS1_S1 + 0) +
                alpha_Y * *(b + 417 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 330 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 330 * OS1_S1 + 1));
            *(b + 519 * OS1_S1 + 0) = Y_PA * *(b + 418 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 418 * OS1_S1 + 1);
            *(b + 520 * OS1_S1 + 0) =
                X_PA * *(b + 429 * OS1_S1 + 0) +
                alpha_X * *(b + 429 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 351 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 351 * OS1_S1 + 1));
            *(b + 521 * OS1_S1 + 0) =
                X_PA * *(b + 430 * OS1_S1 + 0) +
                alpha_X * *(b + 430 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 352 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 352 * OS1_S1 + 1));
            *(b + 522 * OS1_S1 + 0) = Z_PA * *(b + 419 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 419 * OS1_S1 + 1);
            *(b + 523 * OS1_S1 + 0) =
                Z_PA * *(b + 420 * OS1_S1 + 0) +
                alpha_Z * *(b + 420 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 331 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 331 * OS1_S1 + 1));
            *(b + 524 * OS1_S1 + 0) =
                X_PA * *(b + 433 * OS1_S1 + 0) +
                alpha_X * *(b + 433 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 355 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 355 * OS1_S1 + 1));
            *(b + 525 * OS1_S1 + 0) =
                X_PA * *(b + 434 * OS1_S1 + 0) +
                alpha_X * *(b + 434 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 356 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 356 * OS1_S1 + 1));
            *(b + 526 * OS1_S1 + 0) =
                X_PA * *(b + 435 * OS1_S1 + 0) +
                alpha_X * *(b + 435 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 357 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 357 * OS1_S1 + 1));
            *(b + 527 * OS1_S1 + 0) =
                X_PA * *(b + 436 * OS1_S1 + 0) +
                alpha_X * *(b + 436 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 358 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 358 * OS1_S1 + 1));
            *(b + 528 * OS1_S1 + 0) =
                X_PA * *(b + 437 * OS1_S1 + 0) +
                alpha_X * *(b + 437 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 359 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 359 * OS1_S1 + 1));
            *(b + 529 * OS1_S1 + 0) =
                X_PA * *(b + 438 * OS1_S1 + 0) +
                alpha_X * *(b + 438 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 360 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 360 * OS1_S1 + 1));
            *(b + 530 * OS1_S1 + 0) =
                Y_PA * *(b + 428 * OS1_S1 + 0) +
                alpha_Y * *(b + 428 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 340 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 340 * OS1_S1 + 1));
            *(b + 531 * OS1_S1 + 0) = Y_PA * *(b + 429 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 429 * OS1_S1 + 1);
            *(b + 532 * OS1_S1 + 0) =
                X_PA * *(b + 441 * OS1_S1 + 0) +
                alpha_X * *(b + 441 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 363 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 363 * OS1_S1 + 1));
            *(b + 533 * OS1_S1 + 0) = X_PA * *(b + 442 * OS1_S1 + 0) +
                                      alpha_X * *(b + 442 * OS1_S1 + 1);
            *(b + 534 * OS1_S1 + 0) = Z_PA * *(b + 430 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 430 * OS1_S1 + 1);
            *(b + 535 * OS1_S1 + 0) = X_PA * *(b + 444 * OS1_S1 + 0) +
                                      alpha_X * *(b + 444 * OS1_S1 + 1);
            *(b + 536 * OS1_S1 + 0) = X_PA * *(b + 445 * OS1_S1 + 0) +
                                      alpha_X * *(b + 445 * OS1_S1 + 1);
            *(b + 537 * OS1_S1 + 0) = X_PA * *(b + 446 * OS1_S1 + 0) +
                                      alpha_X * *(b + 446 * OS1_S1 + 1);
            *(b + 538 * OS1_S1 + 0) = X_PA * *(b + 447 * OS1_S1 + 0) +
                                      alpha_X * *(b + 447 * OS1_S1 + 1);
            *(b + 539 * OS1_S1 + 0) = X_PA * *(b + 448 * OS1_S1 + 0) +
                                      alpha_X * *(b + 448 * OS1_S1 + 1);
            *(b + 540 * OS1_S1 + 0) = X_PA * *(b + 449 * OS1_S1 + 0) +
                                      alpha_X * *(b + 449 * OS1_S1 + 1);
            *(b + 541 * OS1_S1 + 0) = X_PA * *(b + 450 * OS1_S1 + 0) +
                                      alpha_X * *(b + 450 * OS1_S1 + 1);
            *(b + 542 * OS1_S1 + 0) = X_PA * *(b + 451 * OS1_S1 + 0) +
                                      alpha_X * *(b + 451 * OS1_S1 + 1);
            *(b + 543 * OS1_S1 + 0) = X_PA * *(b + 452 * OS1_S1 + 0) +
                                      alpha_X * *(b + 452 * OS1_S1 + 1);
            *(b + 544 * OS1_S1 + 0) = Y_PA * *(b + 441 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 441 * OS1_S1 + 1);
            *(b + 545 * OS1_S1 + 0) = X_PA * *(b + 454 * OS1_S1 + 0) +
                                      alpha_X * *(b + 454 * OS1_S1 + 1);
            *(b + 546 * OS1_S1 + 0) =
                Y_PA * *(b + 442 * OS1_S1 + 0) +
                alpha_Y * *(b + 442 * OS1_S1 + 1) +
                12 * one_over_two_p *
                    (*(b + 352 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 352 * OS1_S1 + 1));
            *(b + 547 * OS1_S1 + 0) = Z_PA * *(b + 442 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 442 * OS1_S1 + 1);
            *(b + 548 * OS1_S1 + 0) =
                Z_PA * *(b + 443 * OS1_S1 + 0) +
                alpha_Z * *(b + 443 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 352 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 352 * OS1_S1 + 1));
            *(b + 549 * OS1_S1 + 0) =
                Z_PA * *(b + 444 * OS1_S1 + 0) +
                alpha_Z * *(b + 444 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 353 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 353 * OS1_S1 + 1));
            *(b + 550 * OS1_S1 + 0) =
                Z_PA * *(b + 445 * OS1_S1 + 0) +
                alpha_Z * *(b + 445 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 354 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 354 * OS1_S1 + 1));
            *(b + 551 * OS1_S1 + 0) =
                Z_PA * *(b + 446 * OS1_S1 + 0) +
                alpha_Z * *(b + 446 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 355 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 355 * OS1_S1 + 1));
            *(b + 552 * OS1_S1 + 0) =
                Z_PA * *(b + 447 * OS1_S1 + 0) +
                alpha_Z * *(b + 447 * OS1_S1 + 1) +
                5 * one_over_two_p *
                    (*(b + 356 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 356 * OS1_S1 + 1));
            *(b + 553 * OS1_S1 + 0) =
                Y_PA * *(b + 449 * OS1_S1 + 0) +
                alpha_Y * *(b + 449 * OS1_S1 + 1) +
                5 * one_over_two_p *
                    (*(b + 359 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 359 * OS1_S1 + 1));
            *(b + 554 * OS1_S1 + 0) =
                Y_PA * *(b + 450 * OS1_S1 + 0) +
                alpha_Y * *(b + 450 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 360 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 360 * OS1_S1 + 1));
            *(b + 555 * OS1_S1 + 0) =
                Y_PA * *(b + 451 * OS1_S1 + 0) +
                alpha_Y * *(b + 451 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 361 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 361 * OS1_S1 + 1));
            *(b + 556 * OS1_S1 + 0) =
                Y_PA * *(b + 452 * OS1_S1 + 0) +
                alpha_Y * *(b + 452 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 362 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 362 * OS1_S1 + 1));
            *(b + 557 * OS1_S1 + 0) =
                Y_PA * *(b + 453 * OS1_S1 + 0) +
                alpha_Y * *(b + 453 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 363 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 363 * OS1_S1 + 1));
            *(b + 558 * OS1_S1 + 0) = Y_PA * *(b + 454 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 454 * OS1_S1 + 1);
            *(b + 559 * OS1_S1 + 0) =
                Z_PA * *(b + 454 * OS1_S1 + 0) +
                alpha_Z * *(b + 454 * OS1_S1 + 1) +
                12 * one_over_two_p *
                    (*(b + 363 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 363 * OS1_S1 + 1));
            if (m > 13) {
                *(b + 1 * OS1_S1 + 13) = X_PA * *(b + 0 * OS1_S1 + 13) +
                                         alpha_X * *(b + 0 * OS1_S1 + 14);
                *(b + 2 * OS1_S1 + 13) = Y_PA * *(b + 0 * OS1_S1 + 13) +
                                         alpha_Y * *(b + 0 * OS1_S1 + 14);
                *(b + 3 * OS1_S1 + 13) = Z_PA * *(b + 0 * OS1_S1 + 13) +
                                         alpha_Z * *(b + 0 * OS1_S1 + 14);
                *(b + 4 * OS1_S1 + 12) =
                    X_PA * *(b + 1 * OS1_S1 + 12) +
                    alpha_X * *(b + 1 * OS1_S1 + 13) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 12) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 13));
                *(b + 7 * OS1_S1 + 12) =
                    Y_PA * *(b + 2 * OS1_S1 + 12) +
                    alpha_Y * *(b + 2 * OS1_S1 + 13) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 12) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 13));
                *(b + 9 * OS1_S1 + 12) =
                    Z_PA * *(b + 3 * OS1_S1 + 12) +
                    alpha_Z * *(b + 3 * OS1_S1 + 13) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 12) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 13));
                *(b + 10 * OS1_S1 + 11) =
                    X_PA * *(b + 4 * OS1_S1 + 11) +
                    alpha_X * *(b + 4 * OS1_S1 + 12) +
                    2 * one_over_two_p *
                        (*(b + 1 * OS1_S1 + 11) -
                         alpha_over_p * *(b + 1 * OS1_S1 + 12));
                *(b + 16 * OS1_S1 + 11) =
                    Y_PA * *(b + 7 * OS1_S1 + 11) +
                    alpha_Y * *(b + 7 * OS1_S1 + 12) +
                    2 * one_over_two_p *
                        (*(b + 2 * OS1_S1 + 11) -
                         alpha_over_p * *(b + 2 * OS1_S1 + 12));
                *(b + 19 * OS1_S1 + 11) =
                    Z_PA * *(b + 9 * OS1_S1 + 11) +
                    alpha_Z * *(b + 9 * OS1_S1 + 12) +
                    2 * one_over_two_p *
                        (*(b + 3 * OS1_S1 + 11) -
                         alpha_over_p * *(b + 3 * OS1_S1 + 12));
                *(b + 20 * OS1_S1 + 10) =
                    X_PA * *(b + 10 * OS1_S1 + 10) +
                    alpha_X * *(b + 10 * OS1_S1 + 11) +
                    3 * one_over_two_p *
                        (*(b + 4 * OS1_S1 + 10) -
                         alpha_over_p * *(b + 4 * OS1_S1 + 11));
                *(b + 30 * OS1_S1 + 10) =
                    Y_PA * *(b + 16 * OS1_S1 + 10) +
                    alpha_Y * *(b + 16 * OS1_S1 + 11) +
                    3 * one_over_two_p *
                        (*(b + 7 * OS1_S1 + 10) -
                         alpha_over_p * *(b + 7 * OS1_S1 + 11));
                *(b + 34 * OS1_S1 + 10) =
                    Z_PA * *(b + 19 * OS1_S1 + 10) +
                    alpha_Z * *(b + 19 * OS1_S1 + 11) +
                    3 * one_over_two_p *
                        (*(b + 9 * OS1_S1 + 10) -
                         alpha_over_p * *(b + 9 * OS1_S1 + 11));
                *(b + 35 * OS1_S1 + 9) =
                    X_PA * *(b + 20 * OS1_S1 + 9) +
                    alpha_X * *(b + 20 * OS1_S1 + 10) +
                    4 * one_over_two_p *
                        (*(b + 10 * OS1_S1 + 9) -
                         alpha_over_p * *(b + 10 * OS1_S1 + 10));
                *(b + 50 * OS1_S1 + 9) =
                    Y_PA * *(b + 30 * OS1_S1 + 9) +
                    alpha_Y * *(b + 30 * OS1_S1 + 10) +
                    4 * one_over_two_p *
                        (*(b + 16 * OS1_S1 + 9) -
                         alpha_over_p * *(b + 16 * OS1_S1 + 10));
                *(b + 55 * OS1_S1 + 9) =
                    Z_PA * *(b + 34 * OS1_S1 + 9) +
                    alpha_Z * *(b + 34 * OS1_S1 + 10) +
                    4 * one_over_two_p *
                        (*(b + 19 * OS1_S1 + 9) -
                         alpha_over_p * *(b + 19 * OS1_S1 + 10));
                *(b + 56 * OS1_S1 + 8) =
                    X_PA * *(b + 35 * OS1_S1 + 8) +
                    alpha_X * *(b + 35 * OS1_S1 + 9) +
                    5 * one_over_two_p *
                        (*(b + 20 * OS1_S1 + 8) -
                         alpha_over_p * *(b + 20 * OS1_S1 + 9));
                *(b + 57 * OS1_S1 + 8) = Y_PA * *(b + 35 * OS1_S1 + 8) +
                                         alpha_Y * *(b + 35 * OS1_S1 + 9);
                *(b + 58 * OS1_S1 + 8) = Z_PA * *(b + 35 * OS1_S1 + 8) +
                                         alpha_Z * *(b + 35 * OS1_S1 + 9);
                *(b + 77 * OS1_S1 + 8) =
                    Y_PA * *(b + 50 * OS1_S1 + 8) +
                    alpha_Y * *(b + 50 * OS1_S1 + 9) +
                    5 * one_over_two_p *
                        (*(b + 30 * OS1_S1 + 8) -
                         alpha_over_p * *(b + 30 * OS1_S1 + 9));
                *(b + 78 * OS1_S1 + 8) = Z_PA * *(b + 50 * OS1_S1 + 8) +
                                         alpha_Z * *(b + 50 * OS1_S1 + 9);
                *(b + 83 * OS1_S1 + 8) =
                    Z_PA * *(b + 55 * OS1_S1 + 8) +
                    alpha_Z * *(b + 55 * OS1_S1 + 9) +
                    5 * one_over_two_p *
                        (*(b + 34 * OS1_S1 + 8) -
                         alpha_over_p * *(b + 34 * OS1_S1 + 9));
                *(b + 84 * OS1_S1 + 7) =
                    X_PA * *(b + 56 * OS1_S1 + 7) +
                    alpha_X * *(b + 56 * OS1_S1 + 8) +
                    6 * one_over_two_p *
                        (*(b + 35 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 35 * OS1_S1 + 8));
                *(b + 85 * OS1_S1 + 7) = Y_PA * *(b + 56 * OS1_S1 + 7) +
                                         alpha_Y * *(b + 56 * OS1_S1 + 8);
                *(b + 86 * OS1_S1 + 7) = Z_PA * *(b + 56 * OS1_S1 + 7) +
                                         alpha_Z * *(b + 56 * OS1_S1 + 8);
                *(b + 87 * OS1_S1 + 7) =
                    Y_PA * *(b + 57 * OS1_S1 + 7) +
                    alpha_Y * *(b + 57 * OS1_S1 + 8) +
                    one_over_two_p * (*(b + 35 * OS1_S1 + 7) -
                                      alpha_over_p * *(b + 35 * OS1_S1 + 8));
                *(b + 89 * OS1_S1 + 7) =
                    Z_PA * *(b + 58 * OS1_S1 + 7) +
                    alpha_Z * *(b + 58 * OS1_S1 + 8) +
                    one_over_two_p * (*(b + 35 * OS1_S1 + 7) -
                                      alpha_over_p * *(b + 35 * OS1_S1 + 8));
                *(b + 105 * OS1_S1 + 7) = X_PA * *(b + 77 * OS1_S1 + 7) +
                                          alpha_X * *(b + 77 * OS1_S1 + 8);
                *(b + 111 * OS1_S1 + 7) = X_PA * *(b + 83 * OS1_S1 + 7) +
                                          alpha_X * *(b + 83 * OS1_S1 + 8);
                *(b + 112 * OS1_S1 + 7) =
                    Y_PA * *(b + 77 * OS1_S1 + 7) +
                    alpha_Y * *(b + 77 * OS1_S1 + 8) +
                    6 * one_over_two_p *
                        (*(b + 50 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 50 * OS1_S1 + 8));
                *(b + 113 * OS1_S1 + 7) = Z_PA * *(b + 77 * OS1_S1 + 7) +
                                          alpha_Z * *(b + 77 * OS1_S1 + 8);
                *(b + 114 * OS1_S1 + 7) =
                    Z_PA * *(b + 78 * OS1_S1 + 7) +
                    alpha_Z * *(b + 78 * OS1_S1 + 8) +
                    one_over_two_p * (*(b + 50 * OS1_S1 + 7) -
                                      alpha_over_p * *(b + 50 * OS1_S1 + 8));
                *(b + 118 * OS1_S1 + 7) = Y_PA * *(b + 83 * OS1_S1 + 7) +
                                          alpha_Y * *(b + 83 * OS1_S1 + 8);
                *(b + 119 * OS1_S1 + 7) =
                    Z_PA * *(b + 83 * OS1_S1 + 7) +
                    alpha_Z * *(b + 83 * OS1_S1 + 8) +
                    6 * one_over_two_p *
                        (*(b + 55 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 55 * OS1_S1 + 8));
                *(b + 120 * OS1_S1 + 6) =
                    X_PA * *(b + 84 * OS1_S1 + 6) +
                    alpha_X * *(b + 84 * OS1_S1 + 7) +
                    7 * one_over_two_p *
                        (*(b + 56 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 56 * OS1_S1 + 7));
                *(b + 121 * OS1_S1 + 6) = Y_PA * *(b + 84 * OS1_S1 + 6) +
                                          alpha_Y * *(b + 84 * OS1_S1 + 7);
                *(b + 122 * OS1_S1 + 6) = Z_PA * *(b + 84 * OS1_S1 + 6) +
                                          alpha_Z * *(b + 84 * OS1_S1 + 7);
                *(b + 123 * OS1_S1 + 6) =
                    Y_PA * *(b + 85 * OS1_S1 + 6) +
                    alpha_Y * *(b + 85 * OS1_S1 + 7) +
                    one_over_two_p * (*(b + 56 * OS1_S1 + 6) -
                                      alpha_over_p * *(b + 56 * OS1_S1 + 7));
                *(b + 125 * OS1_S1 + 6) =
                    Z_PA * *(b + 86 * OS1_S1 + 6) +
                    alpha_Z * *(b + 86 * OS1_S1 + 7) +
                    one_over_two_p * (*(b + 56 * OS1_S1 + 6) -
                                      alpha_over_p * *(b + 56 * OS1_S1 + 7));
                *(b + 126 * OS1_S1 + 6) =
                    Y_PA * *(b + 87 * OS1_S1 + 6) +
                    alpha_Y * *(b + 87 * OS1_S1 + 7) +
                    2 * one_over_two_p *
                        (*(b + 57 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 57 * OS1_S1 + 7));
                *(b + 129 * OS1_S1 + 6) =
                    Z_PA * *(b + 89 * OS1_S1 + 6) +
                    alpha_Z * *(b + 89 * OS1_S1 + 7) +
                    2 * one_over_two_p *
                        (*(b + 58 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 58 * OS1_S1 + 7));
                *(b + 141 * OS1_S1 + 6) =
                    X_PA * *(b + 105 * OS1_S1 + 6) +
                    alpha_X * *(b + 105 * OS1_S1 + 7) +
                    one_over_two_p * (*(b + 77 * OS1_S1 + 6) -
                                      alpha_over_p * *(b + 77 * OS1_S1 + 7));
                *(b + 147 * OS1_S1 + 6) =
                    X_PA * *(b + 111 * OS1_S1 + 6) +
                    alpha_X * *(b + 111 * OS1_S1 + 7) +
                    one_over_two_p * (*(b + 83 * OS1_S1 + 6) -
                                      alpha_over_p * *(b + 83 * OS1_S1 + 7));
                *(b + 148 * OS1_S1 + 6) = X_PA * *(b + 112 * OS1_S1 + 6) +
                                          alpha_X * *(b + 112 * OS1_S1 + 7);
                *(b + 155 * OS1_S1 + 6) = X_PA * *(b + 119 * OS1_S1 + 6) +
                                          alpha_X * *(b + 119 * OS1_S1 + 7);
                *(b + 156 * OS1_S1 + 6) =
                    Y_PA * *(b + 112 * OS1_S1 + 6) +
                    alpha_Y * *(b + 112 * OS1_S1 + 7) +
                    7 * one_over_two_p *
                        (*(b + 77 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 77 * OS1_S1 + 7));
                *(b + 157 * OS1_S1 + 6) = Z_PA * *(b + 112 * OS1_S1 + 6) +
                                          alpha_Z * *(b + 112 * OS1_S1 + 7);
                *(b + 158 * OS1_S1 + 6) =
                    Z_PA * *(b + 113 * OS1_S1 + 6) +
                    alpha_Z * *(b + 113 * OS1_S1 + 7) +
                    one_over_two_p * (*(b + 77 * OS1_S1 + 6) -
                                      alpha_over_p * *(b + 77 * OS1_S1 + 7));
                *(b + 159 * OS1_S1 + 6) =
                    Z_PA * *(b + 114 * OS1_S1 + 6) +
                    alpha_Z * *(b + 114 * OS1_S1 + 7) +
                    2 * one_over_two_p *
                        (*(b + 78 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 78 * OS1_S1 + 7));
                *(b + 162 * OS1_S1 + 6) =
                    Y_PA * *(b + 118 * OS1_S1 + 6) +
                    alpha_Y * *(b + 118 * OS1_S1 + 7) +
                    one_over_two_p * (*(b + 83 * OS1_S1 + 6) -
                                      alpha_over_p * *(b + 83 * OS1_S1 + 7));
                *(b + 163 * OS1_S1 + 6) = Y_PA * *(b + 119 * OS1_S1 + 6) +
                                          alpha_Y * *(b + 119 * OS1_S1 + 7);
                *(b + 164 * OS1_S1 + 6) =
                    Z_PA * *(b + 119 * OS1_S1 + 6) +
                    alpha_Z * *(b + 119 * OS1_S1 + 7) +
                    7 * one_over_two_p *
                        (*(b + 83 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 83 * OS1_S1 + 7));
                *(b + 165 * OS1_S1 + 5) =
                    X_PA * *(b + 120 * OS1_S1 + 5) +
                    alpha_X * *(b + 120 * OS1_S1 + 6) +
                    8 * one_over_two_p *
                        (*(b + 84 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 84 * OS1_S1 + 6));
                *(b + 166 * OS1_S1 + 5) = Y_PA * *(b + 120 * OS1_S1 + 5) +
                                          alpha_Y * *(b + 120 * OS1_S1 + 6);
                *(b + 167 * OS1_S1 + 5) = Z_PA * *(b + 120 * OS1_S1 + 5) +
                                          alpha_Z * *(b + 120 * OS1_S1 + 6);
                *(b + 168 * OS1_S1 + 5) =
                    Y_PA * *(b + 121 * OS1_S1 + 5) +
                    alpha_Y * *(b + 121 * OS1_S1 + 6) +
                    one_over_two_p * (*(b + 84 * OS1_S1 + 5) -
                                      alpha_over_p * *(b + 84 * OS1_S1 + 6));
                *(b + 170 * OS1_S1 + 5) =
                    Z_PA * *(b + 122 * OS1_S1 + 5) +
                    alpha_Z * *(b + 122 * OS1_S1 + 6) +
                    one_over_two_p * (*(b + 84 * OS1_S1 + 5) -
                                      alpha_over_p * *(b + 84 * OS1_S1 + 6));
                *(b + 171 * OS1_S1 + 5) =
                    Y_PA * *(b + 123 * OS1_S1 + 5) +
                    alpha_Y * *(b + 123 * OS1_S1 + 6) +
                    2 * one_over_two_p *
                        (*(b + 85 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 85 * OS1_S1 + 6));
                *(b + 174 * OS1_S1 + 5) =
                    Z_PA * *(b + 125 * OS1_S1 + 5) +
                    alpha_Z * *(b + 125 * OS1_S1 + 6) +
                    2 * one_over_two_p *
                        (*(b + 86 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 86 * OS1_S1 + 6));
                *(b + 175 * OS1_S1 + 5) =
                    Y_PA * *(b + 126 * OS1_S1 + 5) +
                    alpha_Y * *(b + 126 * OS1_S1 + 6) +
                    3 * one_over_two_p *
                        (*(b + 87 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 87 * OS1_S1 + 6));
                *(b + 179 * OS1_S1 + 5) =
                    Z_PA * *(b + 129 * OS1_S1 + 5) +
                    alpha_Z * *(b + 129 * OS1_S1 + 6) +
                    3 * one_over_two_p *
                        (*(b + 89 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 89 * OS1_S1 + 6));
                *(b + 186 * OS1_S1 + 5) =
                    X_PA * *(b + 141 * OS1_S1 + 5) +
                    alpha_X * *(b + 141 * OS1_S1 + 6) +
                    2 * one_over_two_p *
                        (*(b + 105 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 105 * OS1_S1 + 6));
                *(b + 192 * OS1_S1 + 5) =
                    X_PA * *(b + 147 * OS1_S1 + 5) +
                    alpha_X * *(b + 147 * OS1_S1 + 6) +
                    2 * one_over_two_p *
                        (*(b + 111 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 111 * OS1_S1 + 6));
                *(b + 193 * OS1_S1 + 5) =
                    X_PA * *(b + 148 * OS1_S1 + 5) +
                    alpha_X * *(b + 148 * OS1_S1 + 6) +
                    one_over_two_p * (*(b + 112 * OS1_S1 + 5) -
                                      alpha_over_p * *(b + 112 * OS1_S1 + 6));
                *(b + 200 * OS1_S1 + 5) =
                    X_PA * *(b + 155 * OS1_S1 + 5) +
                    alpha_X * *(b + 155 * OS1_S1 + 6) +
                    one_over_two_p * (*(b + 119 * OS1_S1 + 5) -
                                      alpha_over_p * *(b + 119 * OS1_S1 + 6));
                *(b + 201 * OS1_S1 + 5) = X_PA * *(b + 156 * OS1_S1 + 5) +
                                          alpha_X * *(b + 156 * OS1_S1 + 6);
                *(b + 209 * OS1_S1 + 5) = X_PA * *(b + 164 * OS1_S1 + 5) +
                                          alpha_X * *(b + 164 * OS1_S1 + 6);
                *(b + 210 * OS1_S1 + 5) =
                    Y_PA * *(b + 156 * OS1_S1 + 5) +
                    alpha_Y * *(b + 156 * OS1_S1 + 6) +
                    8 * one_over_two_p *
                        (*(b + 112 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 112 * OS1_S1 + 6));
                *(b + 211 * OS1_S1 + 5) = Z_PA * *(b + 156 * OS1_S1 + 5) +
                                          alpha_Z * *(b + 156 * OS1_S1 + 6);
                *(b + 212 * OS1_S1 + 5) =
                    Z_PA * *(b + 157 * OS1_S1 + 5) +
                    alpha_Z * *(b + 157 * OS1_S1 + 6) +
                    one_over_two_p * (*(b + 112 * OS1_S1 + 5) -
                                      alpha_over_p * *(b + 112 * OS1_S1 + 6));
                *(b + 213 * OS1_S1 + 5) =
                    Z_PA * *(b + 158 * OS1_S1 + 5) +
                    alpha_Z * *(b + 158 * OS1_S1 + 6) +
                    2 * one_over_two_p *
                        (*(b + 113 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 113 * OS1_S1 + 6));
                *(b + 214 * OS1_S1 + 5) =
                    Z_PA * *(b + 159 * OS1_S1 + 5) +
                    alpha_Z * *(b + 159 * OS1_S1 + 6) +
                    3 * one_over_two_p *
                        (*(b + 114 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 114 * OS1_S1 + 6));
                *(b + 216 * OS1_S1 + 5) =
                    Y_PA * *(b + 162 * OS1_S1 + 5) +
                    alpha_Y * *(b + 162 * OS1_S1 + 6) +
                    2 * one_over_two_p *
                        (*(b + 118 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 118 * OS1_S1 + 6));
                *(b + 217 * OS1_S1 + 5) =
                    Y_PA * *(b + 163 * OS1_S1 + 5) +
                    alpha_Y * *(b + 163 * OS1_S1 + 6) +
                    one_over_two_p * (*(b + 119 * OS1_S1 + 5) -
                                      alpha_over_p * *(b + 119 * OS1_S1 + 6));
                *(b + 218 * OS1_S1 + 5) = Y_PA * *(b + 164 * OS1_S1 + 5) +
                                          alpha_Y * *(b + 164 * OS1_S1 + 6);
                *(b + 219 * OS1_S1 + 5) =
                    Z_PA * *(b + 164 * OS1_S1 + 5) +
                    alpha_Z * *(b + 164 * OS1_S1 + 6) +
                    8 * one_over_two_p *
                        (*(b + 119 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 119 * OS1_S1 + 6));
                *(b + 220 * OS1_S1 + 4) =
                    X_PA * *(b + 165 * OS1_S1 + 4) +
                    alpha_X * *(b + 165 * OS1_S1 + 5) +
                    9 * one_over_two_p *
                        (*(b + 120 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 120 * OS1_S1 + 5));
                *(b + 221 * OS1_S1 + 4) = Y_PA * *(b + 165 * OS1_S1 + 4) +
                                          alpha_Y * *(b + 165 * OS1_S1 + 5);
                *(b + 222 * OS1_S1 + 4) = Z_PA * *(b + 165 * OS1_S1 + 4) +
                                          alpha_Z * *(b + 165 * OS1_S1 + 5);
                *(b + 223 * OS1_S1 + 4) =
                    Y_PA * *(b + 166 * OS1_S1 + 4) +
                    alpha_Y * *(b + 166 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 120 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 120 * OS1_S1 + 5));
                *(b + 225 * OS1_S1 + 4) =
                    Z_PA * *(b + 167 * OS1_S1 + 4) +
                    alpha_Z * *(b + 167 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 120 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 120 * OS1_S1 + 5));
                *(b + 226 * OS1_S1 + 4) =
                    Y_PA * *(b + 168 * OS1_S1 + 4) +
                    alpha_Y * *(b + 168 * OS1_S1 + 5) +
                    2 * one_over_two_p *
                        (*(b + 121 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 121 * OS1_S1 + 5));
                *(b + 229 * OS1_S1 + 4) =
                    Z_PA * *(b + 170 * OS1_S1 + 4) +
                    alpha_Z * *(b + 170 * OS1_S1 + 5) +
                    2 * one_over_two_p *
                        (*(b + 122 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 122 * OS1_S1 + 5));
                *(b + 230 * OS1_S1 + 4) =
                    Y_PA * *(b + 171 * OS1_S1 + 4) +
                    alpha_Y * *(b + 171 * OS1_S1 + 5) +
                    3 * one_over_two_p *
                        (*(b + 123 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 123 * OS1_S1 + 5));
                *(b + 234 * OS1_S1 + 4) =
                    Z_PA * *(b + 174 * OS1_S1 + 4) +
                    alpha_Z * *(b + 174 * OS1_S1 + 5) +
                    3 * one_over_two_p *
                        (*(b + 125 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 125 * OS1_S1 + 5));
                *(b + 235 * OS1_S1 + 4) =
                    Y_PA * *(b + 175 * OS1_S1 + 4) +
                    alpha_Y * *(b + 175 * OS1_S1 + 5) +
                    4 * one_over_two_p *
                        (*(b + 126 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 126 * OS1_S1 + 5));
                *(b + 240 * OS1_S1 + 4) =
                    Z_PA * *(b + 179 * OS1_S1 + 4) +
                    alpha_Z * *(b + 179 * OS1_S1 + 5) +
                    4 * one_over_two_p *
                        (*(b + 129 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 129 * OS1_S1 + 5));
                *(b + 241 * OS1_S1 + 4) =
                    X_PA * *(b + 186 * OS1_S1 + 4) +
                    alpha_X * *(b + 186 * OS1_S1 + 5) +
                    3 * one_over_two_p *
                        (*(b + 141 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 141 * OS1_S1 + 5));
                *(b + 247 * OS1_S1 + 4) =
                    X_PA * *(b + 192 * OS1_S1 + 4) +
                    alpha_X * *(b + 192 * OS1_S1 + 5) +
                    3 * one_over_two_p *
                        (*(b + 147 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 147 * OS1_S1 + 5));
                *(b + 248 * OS1_S1 + 4) =
                    X_PA * *(b + 193 * OS1_S1 + 4) +
                    alpha_X * *(b + 193 * OS1_S1 + 5) +
                    2 * one_over_two_p *
                        (*(b + 148 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 148 * OS1_S1 + 5));
                *(b + 255 * OS1_S1 + 4) =
                    X_PA * *(b + 200 * OS1_S1 + 4) +
                    alpha_X * *(b + 200 * OS1_S1 + 5) +
                    2 * one_over_two_p *
                        (*(b + 155 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 155 * OS1_S1 + 5));
                *(b + 256 * OS1_S1 + 4) =
                    X_PA * *(b + 201 * OS1_S1 + 4) +
                    alpha_X * *(b + 201 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 156 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 156 * OS1_S1 + 5));
                *(b + 264 * OS1_S1 + 4) =
                    X_PA * *(b + 209 * OS1_S1 + 4) +
                    alpha_X * *(b + 209 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 164 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 164 * OS1_S1 + 5));
                *(b + 265 * OS1_S1 + 4) = X_PA * *(b + 210 * OS1_S1 + 4) +
                                          alpha_X * *(b + 210 * OS1_S1 + 5);
                *(b + 274 * OS1_S1 + 4) = X_PA * *(b + 219 * OS1_S1 + 4) +
                                          alpha_X * *(b + 219 * OS1_S1 + 5);
                *(b + 275 * OS1_S1 + 4) =
                    Y_PA * *(b + 210 * OS1_S1 + 4) +
                    alpha_Y * *(b + 210 * OS1_S1 + 5) +
                    9 * one_over_two_p *
                        (*(b + 156 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 156 * OS1_S1 + 5));
                *(b + 276 * OS1_S1 + 4) = Z_PA * *(b + 210 * OS1_S1 + 4) +
                                          alpha_Z * *(b + 210 * OS1_S1 + 5);
                *(b + 277 * OS1_S1 + 4) =
                    Z_PA * *(b + 211 * OS1_S1 + 4) +
                    alpha_Z * *(b + 211 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 156 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 156 * OS1_S1 + 5));
                *(b + 278 * OS1_S1 + 4) =
                    Z_PA * *(b + 212 * OS1_S1 + 4) +
                    alpha_Z * *(b + 212 * OS1_S1 + 5) +
                    2 * one_over_two_p *
                        (*(b + 157 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 157 * OS1_S1 + 5));
                *(b + 279 * OS1_S1 + 4) =
                    Z_PA * *(b + 213 * OS1_S1 + 4) +
                    alpha_Z * *(b + 213 * OS1_S1 + 5) +
                    3 * one_over_two_p *
                        (*(b + 158 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 158 * OS1_S1 + 5));
                *(b + 280 * OS1_S1 + 4) =
                    Z_PA * *(b + 214 * OS1_S1 + 4) +
                    alpha_Z * *(b + 214 * OS1_S1 + 5) +
                    4 * one_over_two_p *
                        (*(b + 159 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 159 * OS1_S1 + 5));
                *(b + 281 * OS1_S1 + 4) =
                    Y_PA * *(b + 216 * OS1_S1 + 4) +
                    alpha_Y * *(b + 216 * OS1_S1 + 5) +
                    3 * one_over_two_p *
                        (*(b + 162 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 162 * OS1_S1 + 5));
                *(b + 282 * OS1_S1 + 4) =
                    Y_PA * *(b + 217 * OS1_S1 + 4) +
                    alpha_Y * *(b + 217 * OS1_S1 + 5) +
                    2 * one_over_two_p *
                        (*(b + 163 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 163 * OS1_S1 + 5));
                *(b + 283 * OS1_S1 + 4) =
                    Y_PA * *(b + 218 * OS1_S1 + 4) +
                    alpha_Y * *(b + 218 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 164 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 164 * OS1_S1 + 5));
                *(b + 284 * OS1_S1 + 4) = Y_PA * *(b + 219 * OS1_S1 + 4) +
                                          alpha_Y * *(b + 219 * OS1_S1 + 5);
                *(b + 285 * OS1_S1 + 4) =
                    Z_PA * *(b + 219 * OS1_S1 + 4) +
                    alpha_Z * *(b + 219 * OS1_S1 + 5) +
                    9 * one_over_two_p *
                        (*(b + 164 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 164 * OS1_S1 + 5));
                *(b + 286 * OS1_S1 + 3) =
                    X_PA * *(b + 220 * OS1_S1 + 3) +
                    alpha_X * *(b + 220 * OS1_S1 + 4) +
                    10 * one_over_two_p *
                        (*(b + 165 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 165 * OS1_S1 + 4));
                *(b + 287 * OS1_S1 + 3) = Y_PA * *(b + 220 * OS1_S1 + 3) +
                                          alpha_Y * *(b + 220 * OS1_S1 + 4);
                *(b + 288 * OS1_S1 + 3) = Z_PA * *(b + 220 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 220 * OS1_S1 + 4);
                *(b + 289 * OS1_S1 + 3) =
                    Y_PA * *(b + 221 * OS1_S1 + 3) +
                    alpha_Y * *(b + 221 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 165 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 165 * OS1_S1 + 4));
                *(b + 291 * OS1_S1 + 3) =
                    Z_PA * *(b + 222 * OS1_S1 + 3) +
                    alpha_Z * *(b + 222 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 165 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 165 * OS1_S1 + 4));
                *(b + 292 * OS1_S1 + 3) =
                    Y_PA * *(b + 223 * OS1_S1 + 3) +
                    alpha_Y * *(b + 223 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 166 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 166 * OS1_S1 + 4));
                *(b + 295 * OS1_S1 + 3) =
                    Z_PA * *(b + 225 * OS1_S1 + 3) +
                    alpha_Z * *(b + 225 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 167 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 167 * OS1_S1 + 4));
                *(b + 296 * OS1_S1 + 3) =
                    Y_PA * *(b + 226 * OS1_S1 + 3) +
                    alpha_Y * *(b + 226 * OS1_S1 + 4) +
                    3 * one_over_two_p *
                        (*(b + 168 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 168 * OS1_S1 + 4));
                *(b + 300 * OS1_S1 + 3) =
                    Z_PA * *(b + 229 * OS1_S1 + 3) +
                    alpha_Z * *(b + 229 * OS1_S1 + 4) +
                    3 * one_over_two_p *
                        (*(b + 170 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 170 * OS1_S1 + 4));
                *(b + 301 * OS1_S1 + 3) =
                    Y_PA * *(b + 230 * OS1_S1 + 3) +
                    alpha_Y * *(b + 230 * OS1_S1 + 4) +
                    4 * one_over_two_p *
                        (*(b + 171 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 171 * OS1_S1 + 4));
                *(b + 302 * OS1_S1 + 3) = Z_PA * *(b + 230 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 230 * OS1_S1 + 4);
                *(b + 306 * OS1_S1 + 3) =
                    Z_PA * *(b + 234 * OS1_S1 + 3) +
                    alpha_Z * *(b + 234 * OS1_S1 + 4) +
                    4 * one_over_two_p *
                        (*(b + 174 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 174 * OS1_S1 + 4));
                *(b + 307 * OS1_S1 + 3) =
                    X_PA * *(b + 241 * OS1_S1 + 3) +
                    alpha_X * *(b + 241 * OS1_S1 + 4) +
                    4 * one_over_two_p *
                        (*(b + 186 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 186 * OS1_S1 + 4));
                *(b + 308 * OS1_S1 + 3) = Z_PA * *(b + 235 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 235 * OS1_S1 + 4);
                *(b + 312 * OS1_S1 + 3) = Y_PA * *(b + 240 * OS1_S1 + 3) +
                                          alpha_Y * *(b + 240 * OS1_S1 + 4);
                *(b + 313 * OS1_S1 + 3) =
                    X_PA * *(b + 247 * OS1_S1 + 3) +
                    alpha_X * *(b + 247 * OS1_S1 + 4) +
                    4 * one_over_two_p *
                        (*(b + 192 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 192 * OS1_S1 + 4));
                *(b + 314 * OS1_S1 + 3) =
                    X_PA * *(b + 248 * OS1_S1 + 3) +
                    alpha_X * *(b + 248 * OS1_S1 + 4) +
                    3 * one_over_two_p *
                        (*(b + 193 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 193 * OS1_S1 + 4));
                *(b + 315 * OS1_S1 + 3) = Z_PA * *(b + 241 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 241 * OS1_S1 + 4);
                *(b + 320 * OS1_S1 + 3) = Y_PA * *(b + 247 * OS1_S1 + 3) +
                                          alpha_Y * *(b + 247 * OS1_S1 + 4);
                *(b + 321 * OS1_S1 + 3) =
                    X_PA * *(b + 255 * OS1_S1 + 3) +
                    alpha_X * *(b + 255 * OS1_S1 + 4) +
                    3 * one_over_two_p *
                        (*(b + 200 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 200 * OS1_S1 + 4));
                *(b + 322 * OS1_S1 + 3) =
                    X_PA * *(b + 256 * OS1_S1 + 3) +
                    alpha_X * *(b + 256 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 201 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 201 * OS1_S1 + 4));
                *(b + 330 * OS1_S1 + 3) =
                    X_PA * *(b + 264 * OS1_S1 + 3) +
                    alpha_X * *(b + 264 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 209 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 209 * OS1_S1 + 4));
                *(b + 331 * OS1_S1 + 3) =
                    X_PA * *(b + 265 * OS1_S1 + 3) +
                    alpha_X * *(b + 265 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 210 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 210 * OS1_S1 + 4));
                *(b + 340 * OS1_S1 + 3) =
                    X_PA * *(b + 274 * OS1_S1 + 3) +
                    alpha_X * *(b + 274 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 219 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 219 * OS1_S1 + 4));
                *(b + 341 * OS1_S1 + 3) = X_PA * *(b + 275 * OS1_S1 + 3) +
                                          alpha_X * *(b + 275 * OS1_S1 + 4);
                *(b + 346 * OS1_S1 + 3) = X_PA * *(b + 280 * OS1_S1 + 3) +
                                          alpha_X * *(b + 280 * OS1_S1 + 4);
                *(b + 351 * OS1_S1 + 3) = X_PA * *(b + 285 * OS1_S1 + 3) +
                                          alpha_X * *(b + 285 * OS1_S1 + 4);
                *(b + 352 * OS1_S1 + 3) =
                    Y_PA * *(b + 275 * OS1_S1 + 3) +
                    alpha_Y * *(b + 275 * OS1_S1 + 4) +
                    10 * one_over_two_p *
                        (*(b + 210 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 210 * OS1_S1 + 4));
                *(b + 353 * OS1_S1 + 3) = Z_PA * *(b + 275 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 275 * OS1_S1 + 4);
                *(b + 354 * OS1_S1 + 3) =
                    Z_PA * *(b + 276 * OS1_S1 + 3) +
                    alpha_Z * *(b + 276 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 210 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 210 * OS1_S1 + 4));
                *(b + 355 * OS1_S1 + 3) =
                    Z_PA * *(b + 277 * OS1_S1 + 3) +
                    alpha_Z * *(b + 277 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 211 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 211 * OS1_S1 + 4));
                *(b + 356 * OS1_S1 + 3) =
                    Z_PA * *(b + 278 * OS1_S1 + 3) +
                    alpha_Z * *(b + 278 * OS1_S1 + 4) +
                    3 * one_over_two_p *
                        (*(b + 212 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 212 * OS1_S1 + 4));
                *(b + 357 * OS1_S1 + 3) =
                    Z_PA * *(b + 279 * OS1_S1 + 3) +
                    alpha_Z * *(b + 279 * OS1_S1 + 4) +
                    4 * one_over_two_p *
                        (*(b + 213 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 213 * OS1_S1 + 4));
                *(b + 358 * OS1_S1 + 3) =
                    Y_PA * *(b + 281 * OS1_S1 + 3) +
                    alpha_Y * *(b + 281 * OS1_S1 + 4) +
                    4 * one_over_two_p *
                        (*(b + 216 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 216 * OS1_S1 + 4));
                *(b + 359 * OS1_S1 + 3) =
                    Y_PA * *(b + 282 * OS1_S1 + 3) +
                    alpha_Y * *(b + 282 * OS1_S1 + 4) +
                    3 * one_over_two_p *
                        (*(b + 217 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 217 * OS1_S1 + 4));
                *(b + 360 * OS1_S1 + 3) =
                    Y_PA * *(b + 283 * OS1_S1 + 3) +
                    alpha_Y * *(b + 283 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 218 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 218 * OS1_S1 + 4));
                *(b + 361 * OS1_S1 + 3) =
                    Y_PA * *(b + 284 * OS1_S1 + 3) +
                    alpha_Y * *(b + 284 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 219 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 219 * OS1_S1 + 4));
                *(b + 362 * OS1_S1 + 3) = Y_PA * *(b + 285 * OS1_S1 + 3) +
                                          alpha_Y * *(b + 285 * OS1_S1 + 4);
                *(b + 363 * OS1_S1 + 3) =
                    Z_PA * *(b + 285 * OS1_S1 + 3) +
                    alpha_Z * *(b + 285 * OS1_S1 + 4) +
                    10 * one_over_two_p *
                        (*(b + 219 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 219 * OS1_S1 + 4));
                *(b + 364 * OS1_S1 + 2) =
                    X_PA * *(b + 286 * OS1_S1 + 2) +
                    alpha_X * *(b + 286 * OS1_S1 + 3) +
                    11 * one_over_two_p *
                        (*(b + 220 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 220 * OS1_S1 + 3));
                *(b + 365 * OS1_S1 + 2) = Y_PA * *(b + 286 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 286 * OS1_S1 + 3);
                *(b + 366 * OS1_S1 + 2) = Z_PA * *(b + 286 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 286 * OS1_S1 + 3);
                *(b + 367 * OS1_S1 + 2) =
                    Y_PA * *(b + 287 * OS1_S1 + 2) +
                    alpha_Y * *(b + 287 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 220 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 220 * OS1_S1 + 3));
                *(b + 369 * OS1_S1 + 2) =
                    Z_PA * *(b + 288 * OS1_S1 + 2) +
                    alpha_Z * *(b + 288 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 220 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 220 * OS1_S1 + 3));
                *(b + 370 * OS1_S1 + 2) =
                    Y_PA * *(b + 289 * OS1_S1 + 2) +
                    alpha_Y * *(b + 289 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 221 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 221 * OS1_S1 + 3));
                *(b + 373 * OS1_S1 + 2) =
                    Z_PA * *(b + 291 * OS1_S1 + 2) +
                    alpha_Z * *(b + 291 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 222 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 222 * OS1_S1 + 3));
                *(b + 374 * OS1_S1 + 2) =
                    Y_PA * *(b + 292 * OS1_S1 + 2) +
                    alpha_Y * *(b + 292 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 223 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 223 * OS1_S1 + 3));
                *(b + 375 * OS1_S1 + 2) = Z_PA * *(b + 292 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 292 * OS1_S1 + 3);
                *(b + 378 * OS1_S1 + 2) =
                    Z_PA * *(b + 295 * OS1_S1 + 2) +
                    alpha_Z * *(b + 295 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 225 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 225 * OS1_S1 + 3));
                *(b + 379 * OS1_S1 + 2) =
                    Y_PA * *(b + 296 * OS1_S1 + 2) +
                    alpha_Y * *(b + 296 * OS1_S1 + 3) +
                    4 * one_over_two_p *
                        (*(b + 226 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 226 * OS1_S1 + 3));
                *(b + 380 * OS1_S1 + 2) = Z_PA * *(b + 296 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 296 * OS1_S1 + 3);
                *(b + 383 * OS1_S1 + 2) = Y_PA * *(b + 300 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 300 * OS1_S1 + 3);
                *(b + 384 * OS1_S1 + 2) =
                    Z_PA * *(b + 300 * OS1_S1 + 2) +
                    alpha_Z * *(b + 300 * OS1_S1 + 3) +
                    4 * one_over_two_p *
                        (*(b + 229 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 229 * OS1_S1 + 3));
                *(b + 385 * OS1_S1 + 2) =
                    Y_PA * *(b + 301 * OS1_S1 + 2) +
                    alpha_Y * *(b + 301 * OS1_S1 + 3) +
                    5 * one_over_two_p *
                        (*(b + 230 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 230 * OS1_S1 + 3));
                *(b + 386 * OS1_S1 + 2) = Z_PA * *(b + 301 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 301 * OS1_S1 + 3);
                *(b + 387 * OS1_S1 + 2) =
                    Z_PA * *(b + 302 * OS1_S1 + 2) +
                    alpha_Z * *(b + 302 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 230 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 230 * OS1_S1 + 3));
                *(b + 390 * OS1_S1 + 2) = Y_PA * *(b + 306 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 306 * OS1_S1 + 3);
                *(b + 391 * OS1_S1 + 2) =
                    Z_PA * *(b + 306 * OS1_S1 + 2) +
                    alpha_Z * *(b + 306 * OS1_S1 + 3) +
                    5 * one_over_two_p *
                        (*(b + 234 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 234 * OS1_S1 + 3));
                *(b + 392 * OS1_S1 + 2) =
                    X_PA * *(b + 314 * OS1_S1 + 2) +
                    alpha_X * *(b + 314 * OS1_S1 + 3) +
                    4 * one_over_two_p *
                        (*(b + 248 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 248 * OS1_S1 + 3));
                *(b + 393 * OS1_S1 + 2) = Z_PA * *(b + 307 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 307 * OS1_S1 + 3);
                *(b + 394 * OS1_S1 + 2) =
                    Z_PA * *(b + 308 * OS1_S1 + 2) +
                    alpha_Z * *(b + 308 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 235 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 235 * OS1_S1 + 3));
                *(b + 397 * OS1_S1 + 2) =
                    Y_PA * *(b + 312 * OS1_S1 + 2) +
                    alpha_Y * *(b + 312 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 240 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 240 * OS1_S1 + 3));
                *(b + 398 * OS1_S1 + 2) = Y_PA * *(b + 313 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 313 * OS1_S1 + 3);
                *(b + 399 * OS1_S1 + 2) =
                    X_PA * *(b + 321 * OS1_S1 + 2) +
                    alpha_X * *(b + 321 * OS1_S1 + 3) +
                    4 * one_over_two_p *
                        (*(b + 255 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 255 * OS1_S1 + 3));
                *(b + 400 * OS1_S1 + 2) =
                    X_PA * *(b + 322 * OS1_S1 + 2) +
                    alpha_X * *(b + 322 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 256 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 256 * OS1_S1 + 3));
                *(b + 401 * OS1_S1 + 2) = Z_PA * *(b + 314 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 314 * OS1_S1 + 3);
                *(b + 402 * OS1_S1 + 2) =
                    Z_PA * *(b + 315 * OS1_S1 + 2) +
                    alpha_Z * *(b + 315 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 241 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 241 * OS1_S1 + 3));
                *(b + 406 * OS1_S1 + 2) =
                    Y_PA * *(b + 320 * OS1_S1 + 2) +
                    alpha_Y * *(b + 320 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 247 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 247 * OS1_S1 + 3));
                *(b + 407 * OS1_S1 + 2) = Y_PA * *(b + 321 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 321 * OS1_S1 + 3);
                *(b + 408 * OS1_S1 + 2) =
                    X_PA * *(b + 330 * OS1_S1 + 2) +
                    alpha_X * *(b + 330 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 264 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 264 * OS1_S1 + 3));
                *(b + 409 * OS1_S1 + 2) =
                    X_PA * *(b + 331 * OS1_S1 + 2) +
                    alpha_X * *(b + 331 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 265 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 265 * OS1_S1 + 3));
                *(b + 410 * OS1_S1 + 2) = Z_PA * *(b + 322 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 322 * OS1_S1 + 3);
                *(b + 417 * OS1_S1 + 2) = Y_PA * *(b + 330 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 330 * OS1_S1 + 3);
                *(b + 418 * OS1_S1 + 2) =
                    X_PA * *(b + 340 * OS1_S1 + 2) +
                    alpha_X * *(b + 340 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 274 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 274 * OS1_S1 + 3));
                *(b + 419 * OS1_S1 + 2) =
                    X_PA * *(b + 341 * OS1_S1 + 2) +
                    alpha_X * *(b + 341 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 275 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 275 * OS1_S1 + 3));
                *(b + 424 * OS1_S1 + 2) =
                    X_PA * *(b + 346 * OS1_S1 + 2) +
                    alpha_X * *(b + 346 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 280 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 280 * OS1_S1 + 3));
                *(b + 429 * OS1_S1 + 2) =
                    X_PA * *(b + 351 * OS1_S1 + 2) +
                    alpha_X * *(b + 351 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 285 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 285 * OS1_S1 + 3));
                *(b + 430 * OS1_S1 + 2) = X_PA * *(b + 352 * OS1_S1 + 2) +
                                          alpha_X * *(b + 352 * OS1_S1 + 3);
                *(b + 434 * OS1_S1 + 2) = X_PA * *(b + 356 * OS1_S1 + 2) +
                                          alpha_X * *(b + 356 * OS1_S1 + 3);
                *(b + 435 * OS1_S1 + 2) = X_PA * *(b + 357 * OS1_S1 + 2) +
                                          alpha_X * *(b + 357 * OS1_S1 + 3);
                *(b + 436 * OS1_S1 + 2) = X_PA * *(b + 358 * OS1_S1 + 2) +
                                          alpha_X * *(b + 358 * OS1_S1 + 3);
                *(b + 437 * OS1_S1 + 2) = X_PA * *(b + 359 * OS1_S1 + 2) +
                                          alpha_X * *(b + 359 * OS1_S1 + 3);
                *(b + 441 * OS1_S1 + 2) = X_PA * *(b + 363 * OS1_S1 + 2) +
                                          alpha_X * *(b + 363 * OS1_S1 + 3);
                *(b + 442 * OS1_S1 + 2) =
                    Y_PA * *(b + 352 * OS1_S1 + 2) +
                    alpha_Y * *(b + 352 * OS1_S1 + 3) +
                    11 * one_over_two_p *
                        (*(b + 275 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 275 * OS1_S1 + 3));
                *(b + 443 * OS1_S1 + 2) = Z_PA * *(b + 352 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 352 * OS1_S1 + 3);
                *(b + 444 * OS1_S1 + 2) =
                    Z_PA * *(b + 353 * OS1_S1 + 2) +
                    alpha_Z * *(b + 353 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 275 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 275 * OS1_S1 + 3));
                *(b + 445 * OS1_S1 + 2) =
                    Z_PA * *(b + 354 * OS1_S1 + 2) +
                    alpha_Z * *(b + 354 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 276 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 276 * OS1_S1 + 3));
                *(b + 446 * OS1_S1 + 2) =
                    Z_PA * *(b + 355 * OS1_S1 + 2) +
                    alpha_Z * *(b + 355 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 277 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 277 * OS1_S1 + 3));
                *(b + 447 * OS1_S1 + 2) =
                    Z_PA * *(b + 356 * OS1_S1 + 2) +
                    alpha_Z * *(b + 356 * OS1_S1 + 3) +
                    4 * one_over_two_p *
                        (*(b + 278 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 278 * OS1_S1 + 3));
                *(b + 448 * OS1_S1 + 2) =
                    Z_PA * *(b + 357 * OS1_S1 + 2) +
                    alpha_Z * *(b + 357 * OS1_S1 + 3) +
                    5 * one_over_two_p *
                        (*(b + 279 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 279 * OS1_S1 + 3));
                *(b + 449 * OS1_S1 + 2) =
                    Y_PA * *(b + 359 * OS1_S1 + 2) +
                    alpha_Y * *(b + 359 * OS1_S1 + 3) +
                    4 * one_over_two_p *
                        (*(b + 282 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 282 * OS1_S1 + 3));
                *(b + 450 * OS1_S1 + 2) =
                    Y_PA * *(b + 360 * OS1_S1 + 2) +
                    alpha_Y * *(b + 360 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 283 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 283 * OS1_S1 + 3));
                *(b + 451 * OS1_S1 + 2) =
                    Y_PA * *(b + 361 * OS1_S1 + 2) +
                    alpha_Y * *(b + 361 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 284 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 284 * OS1_S1 + 3));
                *(b + 452 * OS1_S1 + 2) =
                    Y_PA * *(b + 362 * OS1_S1 + 2) +
                    alpha_Y * *(b + 362 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 285 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 285 * OS1_S1 + 3));
                *(b + 453 * OS1_S1 + 2) = Y_PA * *(b + 363 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 363 * OS1_S1 + 3);
                *(b + 454 * OS1_S1 + 2) =
                    Z_PA * *(b + 363 * OS1_S1 + 2) +
                    alpha_Z * *(b + 363 * OS1_S1 + 3) +
                    11 * one_over_two_p *
                        (*(b + 285 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 285 * OS1_S1 + 3));
                *(b + 455 * OS1_S1 + 1) =
                    X_PA * *(b + 364 * OS1_S1 + 1) +
                    alpha_X * *(b + 364 * OS1_S1 + 2) +
                    12 * one_over_two_p *
                        (*(b + 286 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 286 * OS1_S1 + 2));
                *(b + 456 * OS1_S1 + 1) = Y_PA * *(b + 364 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 364 * OS1_S1 + 2);
                *(b + 457 * OS1_S1 + 1) = Z_PA * *(b + 364 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 364 * OS1_S1 + 2);
                *(b + 458 * OS1_S1 + 1) =
                    Y_PA * *(b + 365 * OS1_S1 + 1) +
                    alpha_Y * *(b + 365 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 286 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 286 * OS1_S1 + 2));
                *(b + 460 * OS1_S1 + 1) =
                    Z_PA * *(b + 366 * OS1_S1 + 1) +
                    alpha_Z * *(b + 366 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 286 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 286 * OS1_S1 + 2));
                *(b + 461 * OS1_S1 + 1) =
                    Y_PA * *(b + 367 * OS1_S1 + 1) +
                    alpha_Y * *(b + 367 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 287 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 287 * OS1_S1 + 2));
                *(b + 462 * OS1_S1 + 1) = Z_PA * *(b + 367 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 367 * OS1_S1 + 2);
                *(b + 464 * OS1_S1 + 1) =
                    Z_PA * *(b + 369 * OS1_S1 + 1) +
                    alpha_Z * *(b + 369 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 288 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 288 * OS1_S1 + 2));
                *(b + 465 * OS1_S1 + 1) =
                    Y_PA * *(b + 370 * OS1_S1 + 1) +
                    alpha_Y * *(b + 370 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 289 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 289 * OS1_S1 + 2));
                *(b + 466 * OS1_S1 + 1) = Z_PA * *(b + 370 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 370 * OS1_S1 + 2);
                *(b + 468 * OS1_S1 + 1) = Y_PA * *(b + 373 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 373 * OS1_S1 + 2);
                *(b + 469 * OS1_S1 + 1) =
                    Z_PA * *(b + 373 * OS1_S1 + 1) +
                    alpha_Z * *(b + 373 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 291 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 291 * OS1_S1 + 2));
                *(b + 470 * OS1_S1 + 1) =
                    Y_PA * *(b + 374 * OS1_S1 + 1) +
                    alpha_Y * *(b + 374 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 292 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 292 * OS1_S1 + 2));
                *(b + 471 * OS1_S1 + 1) = Z_PA * *(b + 374 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 374 * OS1_S1 + 2);
                *(b + 472 * OS1_S1 + 1) =
                    Z_PA * *(b + 375 * OS1_S1 + 1) +
                    alpha_Z * *(b + 375 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 292 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 292 * OS1_S1 + 2));
                *(b + 474 * OS1_S1 + 1) = Y_PA * *(b + 378 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 378 * OS1_S1 + 2);
                *(b + 475 * OS1_S1 + 1) =
                    Z_PA * *(b + 378 * OS1_S1 + 1) +
                    alpha_Z * *(b + 378 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 295 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 295 * OS1_S1 + 2));
                *(b + 476 * OS1_S1 + 1) =
                    Y_PA * *(b + 379 * OS1_S1 + 1) +
                    alpha_Y * *(b + 379 * OS1_S1 + 2) +
                    5 * one_over_two_p *
                        (*(b + 296 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 296 * OS1_S1 + 2));
                *(b + 477 * OS1_S1 + 1) = Z_PA * *(b + 379 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 379 * OS1_S1 + 2);
                *(b + 478 * OS1_S1 + 1) =
                    Z_PA * *(b + 380 * OS1_S1 + 1) +
                    alpha_Z * *(b + 380 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 296 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 296 * OS1_S1 + 2));
                *(b + 480 * OS1_S1 + 1) =
                    Y_PA * *(b + 383 * OS1_S1 + 1) +
                    alpha_Y * *(b + 383 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 300 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 300 * OS1_S1 + 2));
                *(b + 481 * OS1_S1 + 1) = Y_PA * *(b + 384 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 384 * OS1_S1 + 2);
                *(b + 482 * OS1_S1 + 1) =
                    Z_PA * *(b + 384 * OS1_S1 + 1) +
                    alpha_Z * *(b + 384 * OS1_S1 + 2) +
                    5 * one_over_two_p *
                        (*(b + 300 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 300 * OS1_S1 + 2));
                *(b + 483 * OS1_S1 + 1) =
                    X_PA * *(b + 392 * OS1_S1 + 1) +
                    alpha_X * *(b + 392 * OS1_S1 + 2) +
                    5 * one_over_two_p *
                        (*(b + 314 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 314 * OS1_S1 + 2));
                *(b + 484 * OS1_S1 + 1) = Z_PA * *(b + 385 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 385 * OS1_S1 + 2);
                *(b + 485 * OS1_S1 + 1) =
                    Z_PA * *(b + 386 * OS1_S1 + 1) +
                    alpha_Z * *(b + 386 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 301 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 301 * OS1_S1 + 2));
                *(b + 486 * OS1_S1 + 1) =
                    Z_PA * *(b + 387 * OS1_S1 + 1) +
                    alpha_Z * *(b + 387 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 302 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 302 * OS1_S1 + 2));
                *(b + 488 * OS1_S1 + 1) =
                    Y_PA * *(b + 390 * OS1_S1 + 1) +
                    alpha_Y * *(b + 390 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 306 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 306 * OS1_S1 + 2));
                *(b + 489 * OS1_S1 + 1) = Y_PA * *(b + 391 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 391 * OS1_S1 + 2);
                *(b + 490 * OS1_S1 + 1) =
                    X_PA * *(b + 399 * OS1_S1 + 1) +
                    alpha_X * *(b + 399 * OS1_S1 + 2) +
                    5 * one_over_two_p *
                        (*(b + 321 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 321 * OS1_S1 + 2));
                *(b + 491 * OS1_S1 + 1) =
                    X_PA * *(b + 400 * OS1_S1 + 1) +
                    alpha_X * *(b + 400 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 322 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 322 * OS1_S1 + 2));
                *(b + 492 * OS1_S1 + 1) = Z_PA * *(b + 392 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 392 * OS1_S1 + 2);
                *(b + 493 * OS1_S1 + 1) =
                    Z_PA * *(b + 393 * OS1_S1 + 1) +
                    alpha_Z * *(b + 393 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 307 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 307 * OS1_S1 + 2));
                *(b + 494 * OS1_S1 + 1) =
                    Z_PA * *(b + 394 * OS1_S1 + 1) +
                    alpha_Z * *(b + 394 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 308 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 308 * OS1_S1 + 2));
                *(b + 496 * OS1_S1 + 1) =
                    Y_PA * *(b + 397 * OS1_S1 + 1) +
                    alpha_Y * *(b + 397 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 312 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 312 * OS1_S1 + 2));
                *(b + 497 * OS1_S1 + 1) =
                    Y_PA * *(b + 398 * OS1_S1 + 1) +
                    alpha_Y * *(b + 398 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 313 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 313 * OS1_S1 + 2));
                *(b + 498 * OS1_S1 + 1) = Y_PA * *(b + 399 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 399 * OS1_S1 + 2);
                *(b + 499 * OS1_S1 + 1) =
                    X_PA * *(b + 408 * OS1_S1 + 1) +
                    alpha_X * *(b + 408 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 330 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 330 * OS1_S1 + 2));
                *(b + 500 * OS1_S1 + 1) =
                    X_PA * *(b + 409 * OS1_S1 + 1) +
                    alpha_X * *(b + 409 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 331 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 331 * OS1_S1 + 2));
                *(b + 501 * OS1_S1 + 1) = Z_PA * *(b + 400 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 400 * OS1_S1 + 2);
                *(b + 502 * OS1_S1 + 1) =
                    Z_PA * *(b + 401 * OS1_S1 + 1) +
                    alpha_Z * *(b + 401 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 314 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 314 * OS1_S1 + 2));
                *(b + 503 * OS1_S1 + 1) =
                    Z_PA * *(b + 402 * OS1_S1 + 1) +
                    alpha_Z * *(b + 402 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 315 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 315 * OS1_S1 + 2));
                *(b + 506 * OS1_S1 + 1) =
                    Y_PA * *(b + 406 * OS1_S1 + 1) +
                    alpha_Y * *(b + 406 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 320 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 320 * OS1_S1 + 2));
                *(b + 507 * OS1_S1 + 1) =
                    Y_PA * *(b + 407 * OS1_S1 + 1) +
                    alpha_Y * *(b + 407 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 321 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 321 * OS1_S1 + 2));
                *(b + 508 * OS1_S1 + 1) = Y_PA * *(b + 408 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 408 * OS1_S1 + 2);
                *(b + 509 * OS1_S1 + 1) =
                    X_PA * *(b + 418 * OS1_S1 + 1) +
                    alpha_X * *(b + 418 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 340 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 340 * OS1_S1 + 2));
                *(b + 510 * OS1_S1 + 1) =
                    X_PA * *(b + 419 * OS1_S1 + 1) +
                    alpha_X * *(b + 419 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 341 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 341 * OS1_S1 + 2));
                *(b + 511 * OS1_S1 + 1) = Z_PA * *(b + 409 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 409 * OS1_S1 + 2);
                *(b + 512 * OS1_S1 + 1) =
                    Z_PA * *(b + 410 * OS1_S1 + 1) +
                    alpha_Z * *(b + 410 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 322 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 322 * OS1_S1 + 2));
                *(b + 515 * OS1_S1 + 1) =
                    X_PA * *(b + 424 * OS1_S1 + 1) +
                    alpha_X * *(b + 424 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 346 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 346 * OS1_S1 + 2));
                *(b + 518 * OS1_S1 + 1) =
                    Y_PA * *(b + 417 * OS1_S1 + 1) +
                    alpha_Y * *(b + 417 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 330 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 330 * OS1_S1 + 2));
                *(b + 519 * OS1_S1 + 1) = Y_PA * *(b + 418 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 418 * OS1_S1 + 2);
                *(b + 520 * OS1_S1 + 1) =
                    X_PA * *(b + 429 * OS1_S1 + 1) +
                    alpha_X * *(b + 429 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 351 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 351 * OS1_S1 + 2));
                *(b + 521 * OS1_S1 + 1) =
                    X_PA * *(b + 430 * OS1_S1 + 1) +
                    alpha_X * *(b + 430 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 352 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 352 * OS1_S1 + 2));
                *(b + 522 * OS1_S1 + 1) = Z_PA * *(b + 419 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 419 * OS1_S1 + 2);
                *(b + 525 * OS1_S1 + 1) =
                    X_PA * *(b + 434 * OS1_S1 + 1) +
                    alpha_X * *(b + 434 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 356 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 356 * OS1_S1 + 2));
                *(b + 526 * OS1_S1 + 1) =
                    X_PA * *(b + 435 * OS1_S1 + 1) +
                    alpha_X * *(b + 435 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 357 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 357 * OS1_S1 + 2));
                *(b + 527 * OS1_S1 + 1) =
                    X_PA * *(b + 436 * OS1_S1 + 1) +
                    alpha_X * *(b + 436 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 358 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 358 * OS1_S1 + 2));
                *(b + 528 * OS1_S1 + 1) =
                    X_PA * *(b + 437 * OS1_S1 + 1) +
                    alpha_X * *(b + 437 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 359 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 359 * OS1_S1 + 2));
                *(b + 531 * OS1_S1 + 1) = Y_PA * *(b + 429 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 429 * OS1_S1 + 2);
                *(b + 532 * OS1_S1 + 1) =
                    X_PA * *(b + 441 * OS1_S1 + 1) +
                    alpha_X * *(b + 441 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 363 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 363 * OS1_S1 + 2));
                *(b + 533 * OS1_S1 + 1) = X_PA * *(b + 442 * OS1_S1 + 1) +
                                          alpha_X * *(b + 442 * OS1_S1 + 2);
                *(b + 536 * OS1_S1 + 1) = X_PA * *(b + 445 * OS1_S1 + 1) +
                                          alpha_X * *(b + 445 * OS1_S1 + 2);
                *(b + 537 * OS1_S1 + 1) = X_PA * *(b + 446 * OS1_S1 + 1) +
                                          alpha_X * *(b + 446 * OS1_S1 + 2);
                *(b + 538 * OS1_S1 + 1) = X_PA * *(b + 447 * OS1_S1 + 1) +
                                          alpha_X * *(b + 447 * OS1_S1 + 2);
                *(b + 539 * OS1_S1 + 1) = X_PA * *(b + 448 * OS1_S1 + 1) +
                                          alpha_X * *(b + 448 * OS1_S1 + 2);
                *(b + 540 * OS1_S1 + 1) = X_PA * *(b + 449 * OS1_S1 + 1) +
                                          alpha_X * *(b + 449 * OS1_S1 + 2);
                *(b + 541 * OS1_S1 + 1) = X_PA * *(b + 450 * OS1_S1 + 1) +
                                          alpha_X * *(b + 450 * OS1_S1 + 2);
                *(b + 542 * OS1_S1 + 1) = X_PA * *(b + 451 * OS1_S1 + 1) +
                                          alpha_X * *(b + 451 * OS1_S1 + 2);
                *(b + 545 * OS1_S1 + 1) = X_PA * *(b + 454 * OS1_S1 + 1) +
                                          alpha_X * *(b + 454 * OS1_S1 + 2);
                *(b + 546 * OS1_S1 + 1) =
                    Y_PA * *(b + 442 * OS1_S1 + 1) +
                    alpha_Y * *(b + 442 * OS1_S1 + 2) +
                    12 * one_over_two_p *
                        (*(b + 352 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 352 * OS1_S1 + 2));
                *(b + 547 * OS1_S1 + 1) = Z_PA * *(b + 442 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 442 * OS1_S1 + 2);
                *(b + 548 * OS1_S1 + 1) =
                    Z_PA * *(b + 443 * OS1_S1 + 1) +
                    alpha_Z * *(b + 443 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 352 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 352 * OS1_S1 + 2));
                *(b + 549 * OS1_S1 + 1) =
                    Z_PA * *(b + 444 * OS1_S1 + 1) +
                    alpha_Z * *(b + 444 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 353 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 353 * OS1_S1 + 2));
                *(b + 550 * OS1_S1 + 1) =
                    Z_PA * *(b + 445 * OS1_S1 + 1) +
                    alpha_Z * *(b + 445 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 354 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 354 * OS1_S1 + 2));
                *(b + 551 * OS1_S1 + 1) =
                    Z_PA * *(b + 446 * OS1_S1 + 1) +
                    alpha_Z * *(b + 446 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 355 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 355 * OS1_S1 + 2));
                *(b + 552 * OS1_S1 + 1) =
                    Z_PA * *(b + 447 * OS1_S1 + 1) +
                    alpha_Z * *(b + 447 * OS1_S1 + 2) +
                    5 * one_over_two_p *
                        (*(b + 356 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 356 * OS1_S1 + 2));
                *(b + 553 * OS1_S1 + 1) =
                    Y_PA * *(b + 449 * OS1_S1 + 1) +
                    alpha_Y * *(b + 449 * OS1_S1 + 2) +
                    5 * one_over_two_p *
                        (*(b + 359 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 359 * OS1_S1 + 2));
                *(b + 554 * OS1_S1 + 1) =
                    Y_PA * *(b + 450 * OS1_S1 + 1) +
                    alpha_Y * *(b + 450 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 360 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 360 * OS1_S1 + 2));
                *(b + 555 * OS1_S1 + 1) =
                    Y_PA * *(b + 451 * OS1_S1 + 1) +
                    alpha_Y * *(b + 451 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 361 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 361 * OS1_S1 + 2));
                *(b + 556 * OS1_S1 + 1) =
                    Y_PA * *(b + 452 * OS1_S1 + 1) +
                    alpha_Y * *(b + 452 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 362 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 362 * OS1_S1 + 2));
                *(b + 557 * OS1_S1 + 1) =
                    Y_PA * *(b + 453 * OS1_S1 + 1) +
                    alpha_Y * *(b + 453 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 363 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 363 * OS1_S1 + 2));
                *(b + 558 * OS1_S1 + 1) = Y_PA * *(b + 454 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 454 * OS1_S1 + 2);
                *(b + 559 * OS1_S1 + 1) =
                    Z_PA * *(b + 454 * OS1_S1 + 1) +
                    alpha_Z * *(b + 454 * OS1_S1 + 2) +
                    12 * one_over_two_p *
                        (*(b + 363 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 363 * OS1_S1 + 2));
                *(b + 560 * OS1_S1 + 0) =
                    X_PA * *(b + 455 * OS1_S1 + 0) +
                    alpha_X * *(b + 455 * OS1_S1 + 1) +
                    13 * one_over_two_p *
                        (*(b + 364 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 364 * OS1_S1 + 1));
                *(b + 561 * OS1_S1 + 0) = Y_PA * *(b + 455 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 455 * OS1_S1 + 1);
                *(b + 562 * OS1_S1 + 0) = Z_PA * *(b + 455 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 455 * OS1_S1 + 1);
                *(b + 563 * OS1_S1 + 0) =
                    Y_PA * *(b + 456 * OS1_S1 + 0) +
                    alpha_Y * *(b + 456 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 364 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 364 * OS1_S1 + 1));
                *(b + 564 * OS1_S1 + 0) = Z_PA * *(b + 456 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 456 * OS1_S1 + 1);
                *(b + 565 * OS1_S1 + 0) =
                    Z_PA * *(b + 457 * OS1_S1 + 0) +
                    alpha_Z * *(b + 457 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 364 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 364 * OS1_S1 + 1));
                *(b + 566 * OS1_S1 + 0) =
                    Y_PA * *(b + 458 * OS1_S1 + 0) +
                    alpha_Y * *(b + 458 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 365 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 365 * OS1_S1 + 1));
                *(b + 567 * OS1_S1 + 0) = Z_PA * *(b + 458 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 458 * OS1_S1 + 1);
                *(b + 568 * OS1_S1 + 0) = Y_PA * *(b + 460 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 460 * OS1_S1 + 1);
                *(b + 569 * OS1_S1 + 0) =
                    Z_PA * *(b + 460 * OS1_S1 + 0) +
                    alpha_Z * *(b + 460 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 366 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 366 * OS1_S1 + 1));
                *(b + 570 * OS1_S1 + 0) =
                    Y_PA * *(b + 461 * OS1_S1 + 0) +
                    alpha_Y * *(b + 461 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 367 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 367 * OS1_S1 + 1));
                *(b + 571 * OS1_S1 + 0) = Z_PA * *(b + 461 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 461 * OS1_S1 + 1);
                *(b + 572 * OS1_S1 + 0) =
                    Z_PA * *(b + 462 * OS1_S1 + 0) +
                    alpha_Z * *(b + 462 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 367 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 367 * OS1_S1 + 1));
                *(b + 573 * OS1_S1 + 0) = Y_PA * *(b + 464 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 464 * OS1_S1 + 1);
                *(b + 574 * OS1_S1 + 0) =
                    Z_PA * *(b + 464 * OS1_S1 + 0) +
                    alpha_Z * *(b + 464 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 369 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 369 * OS1_S1 + 1));
                *(b + 575 * OS1_S1 + 0) =
                    Y_PA * *(b + 465 * OS1_S1 + 0) +
                    alpha_Y * *(b + 465 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 370 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 370 * OS1_S1 + 1));
                *(b + 576 * OS1_S1 + 0) = Z_PA * *(b + 465 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 465 * OS1_S1 + 1);
                *(b + 577 * OS1_S1 + 0) =
                    Z_PA * *(b + 466 * OS1_S1 + 0) +
                    alpha_Z * *(b + 466 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 370 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 370 * OS1_S1 + 1));
                *(b + 578 * OS1_S1 + 0) =
                    Y_PA * *(b + 468 * OS1_S1 + 0) +
                    alpha_Y * *(b + 468 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 373 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 373 * OS1_S1 + 1));
                *(b + 579 * OS1_S1 + 0) = Y_PA * *(b + 469 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 469 * OS1_S1 + 1);
                *(b + 580 * OS1_S1 + 0) =
                    Z_PA * *(b + 469 * OS1_S1 + 0) +
                    alpha_Z * *(b + 469 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 373 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 373 * OS1_S1 + 1));
                *(b + 581 * OS1_S1 + 0) =
                    Y_PA * *(b + 470 * OS1_S1 + 0) +
                    alpha_Y * *(b + 470 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 374 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 374 * OS1_S1 + 1));
                *(b + 582 * OS1_S1 + 0) = Z_PA * *(b + 470 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 470 * OS1_S1 + 1);
                *(b + 583 * OS1_S1 + 0) =
                    Z_PA * *(b + 471 * OS1_S1 + 0) +
                    alpha_Z * *(b + 471 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 374 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 374 * OS1_S1 + 1));
                *(b + 584 * OS1_S1 + 0) =
                    Z_PA * *(b + 472 * OS1_S1 + 0) +
                    alpha_Z * *(b + 472 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 375 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 375 * OS1_S1 + 1));
                *(b + 585 * OS1_S1 + 0) =
                    Y_PA * *(b + 474 * OS1_S1 + 0) +
                    alpha_Y * *(b + 474 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 378 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 378 * OS1_S1 + 1));
                *(b + 586 * OS1_S1 + 0) = Y_PA * *(b + 475 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 475 * OS1_S1 + 1);
                *(b + 587 * OS1_S1 + 0) =
                    Z_PA * *(b + 475 * OS1_S1 + 0) +
                    alpha_Z * *(b + 475 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 378 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 378 * OS1_S1 + 1));
                *(b + 588 * OS1_S1 + 0) =
                    Y_PA * *(b + 476 * OS1_S1 + 0) +
                    alpha_Y * *(b + 476 * OS1_S1 + 1) +
                    6 * one_over_two_p *
                        (*(b + 379 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 379 * OS1_S1 + 1));
                *(b + 589 * OS1_S1 + 0) = Z_PA * *(b + 476 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 476 * OS1_S1 + 1);
                *(b + 590 * OS1_S1 + 0) =
                    Z_PA * *(b + 477 * OS1_S1 + 0) +
                    alpha_Z * *(b + 477 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 379 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 379 * OS1_S1 + 1));
                *(b + 591 * OS1_S1 + 0) =
                    Z_PA * *(b + 478 * OS1_S1 + 0) +
                    alpha_Z * *(b + 478 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 380 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 380 * OS1_S1 + 1));
                *(b + 592 * OS1_S1 + 0) =
                    Y_PA * *(b + 480 * OS1_S1 + 0) +
                    alpha_Y * *(b + 480 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 383 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 383 * OS1_S1 + 1));
                *(b + 593 * OS1_S1 + 0) =
                    Y_PA * *(b + 481 * OS1_S1 + 0) +
                    alpha_Y * *(b + 481 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 384 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 384 * OS1_S1 + 1));
                *(b + 594 * OS1_S1 + 0) = Y_PA * *(b + 482 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 482 * OS1_S1 + 1);
                *(b + 595 * OS1_S1 + 0) =
                    Z_PA * *(b + 482 * OS1_S1 + 0) +
                    alpha_Z * *(b + 482 * OS1_S1 + 1) +
                    6 * one_over_two_p *
                        (*(b + 384 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 384 * OS1_S1 + 1));
                *(b + 596 * OS1_S1 + 0) =
                    X_PA * *(b + 491 * OS1_S1 + 0) +
                    alpha_X * *(b + 491 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 400 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 400 * OS1_S1 + 1));
                *(b + 597 * OS1_S1 + 0) = Z_PA * *(b + 483 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 483 * OS1_S1 + 1);
                *(b + 598 * OS1_S1 + 0) =
                    Z_PA * *(b + 484 * OS1_S1 + 0) +
                    alpha_Z * *(b + 484 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 385 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 385 * OS1_S1 + 1));
                *(b + 599 * OS1_S1 + 0) =
                    Z_PA * *(b + 485 * OS1_S1 + 0) +
                    alpha_Z * *(b + 485 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 386 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 386 * OS1_S1 + 1));
                *(b + 600 * OS1_S1 + 0) =
                    Z_PA * *(b + 486 * OS1_S1 + 0) +
                    alpha_Z * *(b + 486 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 387 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 387 * OS1_S1 + 1));
                *(b + 601 * OS1_S1 + 0) =
                    Y_PA * *(b + 488 * OS1_S1 + 0) +
                    alpha_Y * *(b + 488 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 390 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 390 * OS1_S1 + 1));
                *(b + 602 * OS1_S1 + 0) =
                    Y_PA * *(b + 489 * OS1_S1 + 0) +
                    alpha_Y * *(b + 489 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 391 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 391 * OS1_S1 + 1));
                *(b + 603 * OS1_S1 + 0) = Y_PA * *(b + 490 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 490 * OS1_S1 + 1);
                *(b + 604 * OS1_S1 + 0) =
                    X_PA * *(b + 499 * OS1_S1 + 0) +
                    alpha_X * *(b + 499 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 408 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 408 * OS1_S1 + 1));
                *(b + 605 * OS1_S1 + 0) =
                    X_PA * *(b + 500 * OS1_S1 + 0) +
                    alpha_X * *(b + 500 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 409 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 409 * OS1_S1 + 1));
                *(b + 606 * OS1_S1 + 0) = Z_PA * *(b + 491 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 491 * OS1_S1 + 1);
                *(b + 607 * OS1_S1 + 0) =
                    Z_PA * *(b + 492 * OS1_S1 + 0) +
                    alpha_Z * *(b + 492 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 392 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 392 * OS1_S1 + 1));
                *(b + 608 * OS1_S1 + 0) =
                    Z_PA * *(b + 493 * OS1_S1 + 0) +
                    alpha_Z * *(b + 493 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 393 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 393 * OS1_S1 + 1));
                *(b + 609 * OS1_S1 + 0) =
                    Z_PA * *(b + 494 * OS1_S1 + 0) +
                    alpha_Z * *(b + 494 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 394 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 394 * OS1_S1 + 1));
                *(b + 610 * OS1_S1 + 0) =
                    Y_PA * *(b + 496 * OS1_S1 + 0) +
                    alpha_Y * *(b + 496 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 397 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 397 * OS1_S1 + 1));
                *(b + 611 * OS1_S1 + 0) =
                    Y_PA * *(b + 497 * OS1_S1 + 0) +
                    alpha_Y * *(b + 497 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 398 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 398 * OS1_S1 + 1));
                *(b + 612 * OS1_S1 + 0) =
                    Y_PA * *(b + 498 * OS1_S1 + 0) +
                    alpha_Y * *(b + 498 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 399 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 399 * OS1_S1 + 1));
                *(b + 613 * OS1_S1 + 0) = Y_PA * *(b + 499 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 499 * OS1_S1 + 1);
                *(b + 614 * OS1_S1 + 0) =
                    X_PA * *(b + 509 * OS1_S1 + 0) +
                    alpha_X * *(b + 509 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 418 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 418 * OS1_S1 + 1));
                *(b + 615 * OS1_S1 + 0) =
                    X_PA * *(b + 510 * OS1_S1 + 0) +
                    alpha_X * *(b + 510 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 419 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 419 * OS1_S1 + 1));
                *(b + 616 * OS1_S1 + 0) = Z_PA * *(b + 500 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 500 * OS1_S1 + 1);
                *(b + 617 * OS1_S1 + 0) =
                    Z_PA * *(b + 501 * OS1_S1 + 0) +
                    alpha_Z * *(b + 501 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 400 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 400 * OS1_S1 + 1));
                *(b + 618 * OS1_S1 + 0) =
                    Z_PA * *(b + 502 * OS1_S1 + 0) +
                    alpha_Z * *(b + 502 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 401 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 401 * OS1_S1 + 1));
                *(b + 619 * OS1_S1 + 0) =
                    Z_PA * *(b + 503 * OS1_S1 + 0) +
                    alpha_Z * *(b + 503 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 402 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 402 * OS1_S1 + 1));
                *(b + 620 * OS1_S1 + 0) =
                    X_PA * *(b + 515 * OS1_S1 + 0) +
                    alpha_X * *(b + 515 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 424 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 424 * OS1_S1 + 1));
                *(b + 621 * OS1_S1 + 0) =
                    Y_PA * *(b + 506 * OS1_S1 + 0) +
                    alpha_Y * *(b + 506 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 406 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 406 * OS1_S1 + 1));
                *(b + 622 * OS1_S1 + 0) =
                    Y_PA * *(b + 507 * OS1_S1 + 0) +
                    alpha_Y * *(b + 507 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 407 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 407 * OS1_S1 + 1));
                *(b + 623 * OS1_S1 + 0) =
                    Y_PA * *(b + 508 * OS1_S1 + 0) +
                    alpha_Y * *(b + 508 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 408 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 408 * OS1_S1 + 1));
                *(b + 624 * OS1_S1 + 0) = Y_PA * *(b + 509 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 509 * OS1_S1 + 1);
                *(b + 625 * OS1_S1 + 0) =
                    X_PA * *(b + 520 * OS1_S1 + 0) +
                    alpha_X * *(b + 520 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 429 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 429 * OS1_S1 + 1));
                *(b + 626 * OS1_S1 + 0) =
                    X_PA * *(b + 521 * OS1_S1 + 0) +
                    alpha_X * *(b + 521 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 430 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 430 * OS1_S1 + 1));
                *(b + 627 * OS1_S1 + 0) = Z_PA * *(b + 510 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 510 * OS1_S1 + 1);
                *(b + 628 * OS1_S1 + 0) =
                    Z_PA * *(b + 511 * OS1_S1 + 0) +
                    alpha_Z * *(b + 511 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 409 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 409 * OS1_S1 + 1));
                *(b + 629 * OS1_S1 + 0) =
                    Z_PA * *(b + 512 * OS1_S1 + 0) +
                    alpha_Z * *(b + 512 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 410 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 410 * OS1_S1 + 1));
                *(b + 630 * OS1_S1 + 0) =
                    X_PA * *(b + 525 * OS1_S1 + 0) +
                    alpha_X * *(b + 525 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 434 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 434 * OS1_S1 + 1));
                *(b + 631 * OS1_S1 + 0) =
                    X_PA * *(b + 526 * OS1_S1 + 0) +
                    alpha_X * *(b + 526 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 435 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 435 * OS1_S1 + 1));
                *(b + 632 * OS1_S1 + 0) =
                    X_PA * *(b + 527 * OS1_S1 + 0) +
                    alpha_X * *(b + 527 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 436 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 436 * OS1_S1 + 1));
                *(b + 633 * OS1_S1 + 0) =
                    X_PA * *(b + 528 * OS1_S1 + 0) +
                    alpha_X * *(b + 528 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 437 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 437 * OS1_S1 + 1));
                *(b + 634 * OS1_S1 + 0) =
                    Y_PA * *(b + 518 * OS1_S1 + 0) +
                    alpha_Y * *(b + 518 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 417 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 417 * OS1_S1 + 1));
                *(b + 635 * OS1_S1 + 0) =
                    Y_PA * *(b + 519 * OS1_S1 + 0) +
                    alpha_Y * *(b + 519 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 418 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 418 * OS1_S1 + 1));
                *(b + 636 * OS1_S1 + 0) = Y_PA * *(b + 520 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 520 * OS1_S1 + 1);
                *(b + 637 * OS1_S1 + 0) =
                    X_PA * *(b + 532 * OS1_S1 + 0) +
                    alpha_X * *(b + 532 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 441 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 441 * OS1_S1 + 1));
                *(b + 638 * OS1_S1 + 0) =
                    X_PA * *(b + 533 * OS1_S1 + 0) +
                    alpha_X * *(b + 533 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 442 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 442 * OS1_S1 + 1));
                *(b + 639 * OS1_S1 + 0) = Z_PA * *(b + 521 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 521 * OS1_S1 + 1);
                *(b + 640 * OS1_S1 + 0) =
                    Z_PA * *(b + 522 * OS1_S1 + 0) +
                    alpha_Z * *(b + 522 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 419 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 419 * OS1_S1 + 1));
                *(b + 641 * OS1_S1 + 0) =
                    X_PA * *(b + 536 * OS1_S1 + 0) +
                    alpha_X * *(b + 536 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 445 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 445 * OS1_S1 + 1));
                *(b + 642 * OS1_S1 + 0) =
                    X_PA * *(b + 537 * OS1_S1 + 0) +
                    alpha_X * *(b + 537 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 446 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 446 * OS1_S1 + 1));
                *(b + 643 * OS1_S1 + 0) =
                    X_PA * *(b + 538 * OS1_S1 + 0) +
                    alpha_X * *(b + 538 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 447 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 447 * OS1_S1 + 1));
                *(b + 644 * OS1_S1 + 0) =
                    X_PA * *(b + 539 * OS1_S1 + 0) +
                    alpha_X * *(b + 539 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 448 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 448 * OS1_S1 + 1));
                *(b + 645 * OS1_S1 + 0) =
                    X_PA * *(b + 540 * OS1_S1 + 0) +
                    alpha_X * *(b + 540 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 449 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 449 * OS1_S1 + 1));
                *(b + 646 * OS1_S1 + 0) =
                    X_PA * *(b + 541 * OS1_S1 + 0) +
                    alpha_X * *(b + 541 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 450 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 450 * OS1_S1 + 1));
                *(b + 647 * OS1_S1 + 0) =
                    X_PA * *(b + 542 * OS1_S1 + 0) +
                    alpha_X * *(b + 542 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 451 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 451 * OS1_S1 + 1));
                *(b + 648 * OS1_S1 + 0) =
                    Y_PA * *(b + 531 * OS1_S1 + 0) +
                    alpha_Y * *(b + 531 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 429 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 429 * OS1_S1 + 1));
                *(b + 649 * OS1_S1 + 0) = Y_PA * *(b + 532 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 532 * OS1_S1 + 1);
                *(b + 650 * OS1_S1 + 0) =
                    X_PA * *(b + 545 * OS1_S1 + 0) +
                    alpha_X * *(b + 545 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 454 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 454 * OS1_S1 + 1));
                *(b + 651 * OS1_S1 + 0) = X_PA * *(b + 546 * OS1_S1 + 0) +
                                          alpha_X * *(b + 546 * OS1_S1 + 1);
                *(b + 652 * OS1_S1 + 0) = Z_PA * *(b + 533 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 533 * OS1_S1 + 1);
                *(b + 653 * OS1_S1 + 0) = X_PA * *(b + 548 * OS1_S1 + 0) +
                                          alpha_X * *(b + 548 * OS1_S1 + 1);
                *(b + 654 * OS1_S1 + 0) = X_PA * *(b + 549 * OS1_S1 + 0) +
                                          alpha_X * *(b + 549 * OS1_S1 + 1);
                *(b + 655 * OS1_S1 + 0) = X_PA * *(b + 550 * OS1_S1 + 0) +
                                          alpha_X * *(b + 550 * OS1_S1 + 1);
                *(b + 656 * OS1_S1 + 0) = X_PA * *(b + 551 * OS1_S1 + 0) +
                                          alpha_X * *(b + 551 * OS1_S1 + 1);
                *(b + 657 * OS1_S1 + 0) = X_PA * *(b + 552 * OS1_S1 + 0) +
                                          alpha_X * *(b + 552 * OS1_S1 + 1);
                *(b + 658 * OS1_S1 + 0) = X_PA * *(b + 553 * OS1_S1 + 0) +
                                          alpha_X * *(b + 553 * OS1_S1 + 1);
                *(b + 659 * OS1_S1 + 0) = X_PA * *(b + 554 * OS1_S1 + 0) +
                                          alpha_X * *(b + 554 * OS1_S1 + 1);
                *(b + 660 * OS1_S1 + 0) = X_PA * *(b + 555 * OS1_S1 + 0) +
                                          alpha_X * *(b + 555 * OS1_S1 + 1);
                *(b + 661 * OS1_S1 + 0) = X_PA * *(b + 556 * OS1_S1 + 0) +
                                          alpha_X * *(b + 556 * OS1_S1 + 1);
                *(b + 662 * OS1_S1 + 0) = X_PA * *(b + 557 * OS1_S1 + 0) +
                                          alpha_X * *(b + 557 * OS1_S1 + 1);
                *(b + 663 * OS1_S1 + 0) = Y_PA * *(b + 545 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 545 * OS1_S1 + 1);
                *(b + 664 * OS1_S1 + 0) = X_PA * *(b + 559 * OS1_S1 + 0) +
                                          alpha_X * *(b + 559 * OS1_S1 + 1);
                *(b + 665 * OS1_S1 + 0) =
                    Y_PA * *(b + 546 * OS1_S1 + 0) +
                    alpha_Y * *(b + 546 * OS1_S1 + 1) +
                    13 * one_over_two_p *
                        (*(b + 442 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 442 * OS1_S1 + 1));
                *(b + 666 * OS1_S1 + 0) = Z_PA * *(b + 546 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 546 * OS1_S1 + 1);
                *(b + 667 * OS1_S1 + 0) =
                    Z_PA * *(b + 547 * OS1_S1 + 0) +
                    alpha_Z * *(b + 547 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 442 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 442 * OS1_S1 + 1));
                *(b + 668 * OS1_S1 + 0) =
                    Z_PA * *(b + 548 * OS1_S1 + 0) +
                    alpha_Z * *(b + 548 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 443 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 443 * OS1_S1 + 1));
                *(b + 669 * OS1_S1 + 0) =
                    Z_PA * *(b + 549 * OS1_S1 + 0) +
                    alpha_Z * *(b + 549 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 444 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 444 * OS1_S1 + 1));
                *(b + 670 * OS1_S1 + 0) =
                    Z_PA * *(b + 550 * OS1_S1 + 0) +
                    alpha_Z * *(b + 550 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 445 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 445 * OS1_S1 + 1));
                *(b + 671 * OS1_S1 + 0) =
                    Z_PA * *(b + 551 * OS1_S1 + 0) +
                    alpha_Z * *(b + 551 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 446 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 446 * OS1_S1 + 1));
                *(b + 672 * OS1_S1 + 0) =
                    Z_PA * *(b + 552 * OS1_S1 + 0) +
                    alpha_Z * *(b + 552 * OS1_S1 + 1) +
                    6 * one_over_two_p *
                        (*(b + 447 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 447 * OS1_S1 + 1));
                *(b + 673 * OS1_S1 + 0) =
                    Y_PA * *(b + 554 * OS1_S1 + 0) +
                    alpha_Y * *(b + 554 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 450 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 450 * OS1_S1 + 1));
                *(b + 674 * OS1_S1 + 0) =
                    Y_PA * *(b + 555 * OS1_S1 + 0) +
                    alpha_Y * *(b + 555 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 451 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 451 * OS1_S1 + 1));
                *(b + 675 * OS1_S1 + 0) =
                    Y_PA * *(b + 556 * OS1_S1 + 0) +
                    alpha_Y * *(b + 556 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 452 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 452 * OS1_S1 + 1));
                *(b + 676 * OS1_S1 + 0) =
                    Y_PA * *(b + 557 * OS1_S1 + 0) +
                    alpha_Y * *(b + 557 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 453 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 453 * OS1_S1 + 1));
                *(b + 677 * OS1_S1 + 0) =
                    Y_PA * *(b + 558 * OS1_S1 + 0) +
                    alpha_Y * *(b + 558 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 454 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 454 * OS1_S1 + 1));
                *(b + 678 * OS1_S1 + 0) = Y_PA * *(b + 559 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 559 * OS1_S1 + 1);
                *(b + 679 * OS1_S1 + 0) =
                    Z_PA * *(b + 559 * OS1_S1 + 0) +
                    alpha_Z * *(b + 559 * OS1_S1 + 1) +
                    13 * one_over_two_p *
                        (*(b + 454 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 454 * OS1_S1 + 1));
            }
            return;
        }
    }
}
