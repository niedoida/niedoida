/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/vr.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void vr15_16(const double alpha_over_p,
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
            *(b + 1 * OS1_S1 + 14) = X_PA * *(b + 0 * OS1_S1 + 14) +
                                     alpha_X * *(b + 0 * OS1_S1 + 15);
            *(b + 2 * OS1_S1 + 14) = Y_PA * *(b + 0 * OS1_S1 + 14) +
                                     alpha_Y * *(b + 0 * OS1_S1 + 15);
            *(b + 3 * OS1_S1 + 14) = Z_PA * *(b + 0 * OS1_S1 + 14) +
                                     alpha_Z * *(b + 0 * OS1_S1 + 15);
            *(b + 4 * OS1_S1 + 13) =
                X_PA * *(b + 1 * OS1_S1 + 13) +
                alpha_X * *(b + 1 * OS1_S1 + 14) +
                one_over_two_p * (*(b + 0 * OS1_S1 + 13) -
                                  alpha_over_p * *(b + 0 * OS1_S1 + 14));
            *(b + 7 * OS1_S1 + 13) =
                Y_PA * *(b + 2 * OS1_S1 + 13) +
                alpha_Y * *(b + 2 * OS1_S1 + 14) +
                one_over_two_p * (*(b + 0 * OS1_S1 + 13) -
                                  alpha_over_p * *(b + 0 * OS1_S1 + 14));
            *(b + 9 * OS1_S1 + 13) =
                Z_PA * *(b + 3 * OS1_S1 + 13) +
                alpha_Z * *(b + 3 * OS1_S1 + 14) +
                one_over_two_p * (*(b + 0 * OS1_S1 + 13) -
                                  alpha_over_p * *(b + 0 * OS1_S1 + 14));
            *(b + 10 * OS1_S1 + 12) =
                X_PA * *(b + 4 * OS1_S1 + 12) +
                alpha_X * *(b + 4 * OS1_S1 + 13) +
                2 * one_over_two_p *
                    (*(b + 1 * OS1_S1 + 12) -
                     alpha_over_p * *(b + 1 * OS1_S1 + 13));
            *(b + 16 * OS1_S1 + 12) =
                Y_PA * *(b + 7 * OS1_S1 + 12) +
                alpha_Y * *(b + 7 * OS1_S1 + 13) +
                2 * one_over_two_p *
                    (*(b + 2 * OS1_S1 + 12) -
                     alpha_over_p * *(b + 2 * OS1_S1 + 13));
            *(b + 19 * OS1_S1 + 12) =
                Z_PA * *(b + 9 * OS1_S1 + 12) +
                alpha_Z * *(b + 9 * OS1_S1 + 13) +
                2 * one_over_two_p *
                    (*(b + 3 * OS1_S1 + 12) -
                     alpha_over_p * *(b + 3 * OS1_S1 + 13));
            *(b + 20 * OS1_S1 + 11) =
                X_PA * *(b + 10 * OS1_S1 + 11) +
                alpha_X * *(b + 10 * OS1_S1 + 12) +
                3 * one_over_two_p *
                    (*(b + 4 * OS1_S1 + 11) -
                     alpha_over_p * *(b + 4 * OS1_S1 + 12));
            *(b + 30 * OS1_S1 + 11) =
                Y_PA * *(b + 16 * OS1_S1 + 11) +
                alpha_Y * *(b + 16 * OS1_S1 + 12) +
                3 * one_over_two_p *
                    (*(b + 7 * OS1_S1 + 11) -
                     alpha_over_p * *(b + 7 * OS1_S1 + 12));
            *(b + 34 * OS1_S1 + 11) =
                Z_PA * *(b + 19 * OS1_S1 + 11) +
                alpha_Z * *(b + 19 * OS1_S1 + 12) +
                3 * one_over_two_p *
                    (*(b + 9 * OS1_S1 + 11) -
                     alpha_over_p * *(b + 9 * OS1_S1 + 12));
            *(b + 35 * OS1_S1 + 10) =
                X_PA * *(b + 20 * OS1_S1 + 10) +
                alpha_X * *(b + 20 * OS1_S1 + 11) +
                4 * one_over_two_p *
                    (*(b + 10 * OS1_S1 + 10) -
                     alpha_over_p * *(b + 10 * OS1_S1 + 11));
            *(b + 50 * OS1_S1 + 10) =
                Y_PA * *(b + 30 * OS1_S1 + 10) +
                alpha_Y * *(b + 30 * OS1_S1 + 11) +
                4 * one_over_two_p *
                    (*(b + 16 * OS1_S1 + 10) -
                     alpha_over_p * *(b + 16 * OS1_S1 + 11));
            *(b + 55 * OS1_S1 + 10) =
                Z_PA * *(b + 34 * OS1_S1 + 10) +
                alpha_Z * *(b + 34 * OS1_S1 + 11) +
                4 * one_over_two_p *
                    (*(b + 19 * OS1_S1 + 10) -
                     alpha_over_p * *(b + 19 * OS1_S1 + 11));
            *(b + 56 * OS1_S1 + 9) =
                X_PA * *(b + 35 * OS1_S1 + 9) +
                alpha_X * *(b + 35 * OS1_S1 + 10) +
                5 * one_over_two_p *
                    (*(b + 20 * OS1_S1 + 9) -
                     alpha_over_p * *(b + 20 * OS1_S1 + 10));
            *(b + 57 * OS1_S1 + 9) = Y_PA * *(b + 35 * OS1_S1 + 9) +
                                     alpha_Y * *(b + 35 * OS1_S1 + 10);
            *(b + 77 * OS1_S1 + 9) =
                Y_PA * *(b + 50 * OS1_S1 + 9) +
                alpha_Y * *(b + 50 * OS1_S1 + 10) +
                5 * one_over_two_p *
                    (*(b + 30 * OS1_S1 + 9) -
                     alpha_over_p * *(b + 30 * OS1_S1 + 10));
            *(b + 83 * OS1_S1 + 9) =
                Z_PA * *(b + 55 * OS1_S1 + 9) +
                alpha_Z * *(b + 55 * OS1_S1 + 10) +
                5 * one_over_two_p *
                    (*(b + 34 * OS1_S1 + 9) -
                     alpha_over_p * *(b + 34 * OS1_S1 + 10));
            *(b + 84 * OS1_S1 + 8) =
                X_PA * *(b + 56 * OS1_S1 + 8) +
                alpha_X * *(b + 56 * OS1_S1 + 9) +
                6 * one_over_two_p *
                    (*(b + 35 * OS1_S1 + 8) -
                     alpha_over_p * *(b + 35 * OS1_S1 + 9));
            *(b + 85 * OS1_S1 + 8) = Y_PA * *(b + 56 * OS1_S1 + 8) +
                                     alpha_Y * *(b + 56 * OS1_S1 + 9);
            *(b + 86 * OS1_S1 + 8) = Z_PA * *(b + 56 * OS1_S1 + 8) +
                                     alpha_Z * *(b + 56 * OS1_S1 + 9);
            *(b + 87 * OS1_S1 + 8) =
                Y_PA * *(b + 57 * OS1_S1 + 8) +
                alpha_Y * *(b + 57 * OS1_S1 + 9) +
                one_over_two_p * (*(b + 35 * OS1_S1 + 8) -
                                  alpha_over_p * *(b + 35 * OS1_S1 + 9));
            *(b + 105 * OS1_S1 + 8) = X_PA * *(b + 77 * OS1_S1 + 8) +
                                      alpha_X * *(b + 77 * OS1_S1 + 9);
            *(b + 111 * OS1_S1 + 8) = X_PA * *(b + 83 * OS1_S1 + 8) +
                                      alpha_X * *(b + 83 * OS1_S1 + 9);
            *(b + 112 * OS1_S1 + 8) =
                Y_PA * *(b + 77 * OS1_S1 + 8) +
                alpha_Y * *(b + 77 * OS1_S1 + 9) +
                6 * one_over_two_p *
                    (*(b + 50 * OS1_S1 + 8) -
                     alpha_over_p * *(b + 50 * OS1_S1 + 9));
            *(b + 113 * OS1_S1 + 8) = Z_PA * *(b + 77 * OS1_S1 + 8) +
                                      alpha_Z * *(b + 77 * OS1_S1 + 9);
            *(b + 118 * OS1_S1 + 8) = Y_PA * *(b + 83 * OS1_S1 + 8) +
                                      alpha_Y * *(b + 83 * OS1_S1 + 9);
            *(b + 119 * OS1_S1 + 8) =
                Z_PA * *(b + 83 * OS1_S1 + 8) +
                alpha_Z * *(b + 83 * OS1_S1 + 9) +
                6 * one_over_two_p *
                    (*(b + 55 * OS1_S1 + 8) -
                     alpha_over_p * *(b + 55 * OS1_S1 + 9));
            *(b + 120 * OS1_S1 + 7) =
                X_PA * *(b + 84 * OS1_S1 + 7) +
                alpha_X * *(b + 84 * OS1_S1 + 8) +
                7 * one_over_two_p *
                    (*(b + 56 * OS1_S1 + 7) -
                     alpha_over_p * *(b + 56 * OS1_S1 + 8));
            *(b + 121 * OS1_S1 + 7) = Y_PA * *(b + 84 * OS1_S1 + 7) +
                                      alpha_Y * *(b + 84 * OS1_S1 + 8);
            *(b + 122 * OS1_S1 + 7) = Z_PA * *(b + 84 * OS1_S1 + 7) +
                                      alpha_Z * *(b + 84 * OS1_S1 + 8);
            *(b + 123 * OS1_S1 + 7) =
                Y_PA * *(b + 85 * OS1_S1 + 7) +
                alpha_Y * *(b + 85 * OS1_S1 + 8) +
                one_over_two_p * (*(b + 56 * OS1_S1 + 7) -
                                  alpha_over_p * *(b + 56 * OS1_S1 + 8));
            *(b + 125 * OS1_S1 + 7) =
                Z_PA * *(b + 86 * OS1_S1 + 7) +
                alpha_Z * *(b + 86 * OS1_S1 + 8) +
                one_over_two_p * (*(b + 56 * OS1_S1 + 7) -
                                  alpha_over_p * *(b + 56 * OS1_S1 + 8));
            *(b + 126 * OS1_S1 + 7) =
                Y_PA * *(b + 87 * OS1_S1 + 7) +
                alpha_Y * *(b + 87 * OS1_S1 + 8) +
                2 * one_over_two_p *
                    (*(b + 57 * OS1_S1 + 7) -
                     alpha_over_p * *(b + 57 * OS1_S1 + 8));
            *(b + 141 * OS1_S1 + 7) =
                X_PA * *(b + 105 * OS1_S1 + 7) +
                alpha_X * *(b + 105 * OS1_S1 + 8) +
                one_over_two_p * (*(b + 77 * OS1_S1 + 7) -
                                  alpha_over_p * *(b + 77 * OS1_S1 + 8));
            *(b + 147 * OS1_S1 + 7) =
                X_PA * *(b + 111 * OS1_S1 + 7) +
                alpha_X * *(b + 111 * OS1_S1 + 8) +
                one_over_two_p * (*(b + 83 * OS1_S1 + 7) -
                                  alpha_over_p * *(b + 83 * OS1_S1 + 8));
            *(b + 148 * OS1_S1 + 7) = X_PA * *(b + 112 * OS1_S1 + 7) +
                                      alpha_X * *(b + 112 * OS1_S1 + 8);
            *(b + 155 * OS1_S1 + 7) = X_PA * *(b + 119 * OS1_S1 + 7) +
                                      alpha_X * *(b + 119 * OS1_S1 + 8);
            *(b + 156 * OS1_S1 + 7) =
                Y_PA * *(b + 112 * OS1_S1 + 7) +
                alpha_Y * *(b + 112 * OS1_S1 + 8) +
                7 * one_over_two_p *
                    (*(b + 77 * OS1_S1 + 7) -
                     alpha_over_p * *(b + 77 * OS1_S1 + 8));
            *(b + 157 * OS1_S1 + 7) = Z_PA * *(b + 112 * OS1_S1 + 7) +
                                      alpha_Z * *(b + 112 * OS1_S1 + 8);
            *(b + 158 * OS1_S1 + 7) =
                Z_PA * *(b + 113 * OS1_S1 + 7) +
                alpha_Z * *(b + 113 * OS1_S1 + 8) +
                one_over_two_p * (*(b + 77 * OS1_S1 + 7) -
                                  alpha_over_p * *(b + 77 * OS1_S1 + 8));
            *(b + 162 * OS1_S1 + 7) =
                Y_PA * *(b + 118 * OS1_S1 + 7) +
                alpha_Y * *(b + 118 * OS1_S1 + 8) +
                one_over_two_p * (*(b + 83 * OS1_S1 + 7) -
                                  alpha_over_p * *(b + 83 * OS1_S1 + 8));
            *(b + 163 * OS1_S1 + 7) = Y_PA * *(b + 119 * OS1_S1 + 7) +
                                      alpha_Y * *(b + 119 * OS1_S1 + 8);
            *(b + 164 * OS1_S1 + 7) =
                Z_PA * *(b + 119 * OS1_S1 + 7) +
                alpha_Z * *(b + 119 * OS1_S1 + 8) +
                7 * one_over_two_p *
                    (*(b + 83 * OS1_S1 + 7) -
                     alpha_over_p * *(b + 83 * OS1_S1 + 8));
            *(b + 165 * OS1_S1 + 6) =
                X_PA * *(b + 120 * OS1_S1 + 6) +
                alpha_X * *(b + 120 * OS1_S1 + 7) +
                8 * one_over_two_p *
                    (*(b + 84 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 84 * OS1_S1 + 7));
            *(b + 166 * OS1_S1 + 6) = Y_PA * *(b + 120 * OS1_S1 + 6) +
                                      alpha_Y * *(b + 120 * OS1_S1 + 7);
            *(b + 167 * OS1_S1 + 6) = Z_PA * *(b + 120 * OS1_S1 + 6) +
                                      alpha_Z * *(b + 120 * OS1_S1 + 7);
            *(b + 168 * OS1_S1 + 6) =
                Y_PA * *(b + 121 * OS1_S1 + 6) +
                alpha_Y * *(b + 121 * OS1_S1 + 7) +
                one_over_two_p * (*(b + 84 * OS1_S1 + 6) -
                                  alpha_over_p * *(b + 84 * OS1_S1 + 7));
            *(b + 170 * OS1_S1 + 6) =
                Z_PA * *(b + 122 * OS1_S1 + 6) +
                alpha_Z * *(b + 122 * OS1_S1 + 7) +
                one_over_two_p * (*(b + 84 * OS1_S1 + 6) -
                                  alpha_over_p * *(b + 84 * OS1_S1 + 7));
            *(b + 171 * OS1_S1 + 6) =
                Y_PA * *(b + 123 * OS1_S1 + 6) +
                alpha_Y * *(b + 123 * OS1_S1 + 7) +
                2 * one_over_two_p *
                    (*(b + 85 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 85 * OS1_S1 + 7));
            *(b + 174 * OS1_S1 + 6) =
                Z_PA * *(b + 125 * OS1_S1 + 6) +
                alpha_Z * *(b + 125 * OS1_S1 + 7) +
                2 * one_over_two_p *
                    (*(b + 86 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 86 * OS1_S1 + 7));
            *(b + 175 * OS1_S1 + 6) =
                Y_PA * *(b + 126 * OS1_S1 + 6) +
                alpha_Y * *(b + 126 * OS1_S1 + 7) +
                3 * one_over_two_p *
                    (*(b + 87 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 87 * OS1_S1 + 7));
            *(b + 186 * OS1_S1 + 6) =
                X_PA * *(b + 141 * OS1_S1 + 6) +
                alpha_X * *(b + 141 * OS1_S1 + 7) +
                2 * one_over_two_p *
                    (*(b + 105 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 105 * OS1_S1 + 7));
            *(b + 192 * OS1_S1 + 6) =
                X_PA * *(b + 147 * OS1_S1 + 6) +
                alpha_X * *(b + 147 * OS1_S1 + 7) +
                2 * one_over_two_p *
                    (*(b + 111 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 111 * OS1_S1 + 7));
            *(b + 193 * OS1_S1 + 6) =
                X_PA * *(b + 148 * OS1_S1 + 6) +
                alpha_X * *(b + 148 * OS1_S1 + 7) +
                one_over_two_p * (*(b + 112 * OS1_S1 + 6) -
                                  alpha_over_p * *(b + 112 * OS1_S1 + 7));
            *(b + 200 * OS1_S1 + 6) =
                X_PA * *(b + 155 * OS1_S1 + 6) +
                alpha_X * *(b + 155 * OS1_S1 + 7) +
                one_over_two_p * (*(b + 119 * OS1_S1 + 6) -
                                  alpha_over_p * *(b + 119 * OS1_S1 + 7));
            *(b + 201 * OS1_S1 + 6) = X_PA * *(b + 156 * OS1_S1 + 6) +
                                      alpha_X * *(b + 156 * OS1_S1 + 7);
            *(b + 209 * OS1_S1 + 6) = X_PA * *(b + 164 * OS1_S1 + 6) +
                                      alpha_X * *(b + 164 * OS1_S1 + 7);
            *(b + 210 * OS1_S1 + 6) =
                Y_PA * *(b + 156 * OS1_S1 + 6) +
                alpha_Y * *(b + 156 * OS1_S1 + 7) +
                8 * one_over_two_p *
                    (*(b + 112 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 112 * OS1_S1 + 7));
            *(b + 211 * OS1_S1 + 6) = Z_PA * *(b + 156 * OS1_S1 + 6) +
                                      alpha_Z * *(b + 156 * OS1_S1 + 7);
            *(b + 212 * OS1_S1 + 6) =
                Z_PA * *(b + 157 * OS1_S1 + 6) +
                alpha_Z * *(b + 157 * OS1_S1 + 7) +
                one_over_two_p * (*(b + 112 * OS1_S1 + 6) -
                                  alpha_over_p * *(b + 112 * OS1_S1 + 7));
            *(b + 213 * OS1_S1 + 6) =
                Z_PA * *(b + 158 * OS1_S1 + 6) +
                alpha_Z * *(b + 158 * OS1_S1 + 7) +
                2 * one_over_two_p *
                    (*(b + 113 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 113 * OS1_S1 + 7));
            *(b + 216 * OS1_S1 + 6) =
                Y_PA * *(b + 162 * OS1_S1 + 6) +
                alpha_Y * *(b + 162 * OS1_S1 + 7) +
                2 * one_over_two_p *
                    (*(b + 118 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 118 * OS1_S1 + 7));
            *(b + 217 * OS1_S1 + 6) =
                Y_PA * *(b + 163 * OS1_S1 + 6) +
                alpha_Y * *(b + 163 * OS1_S1 + 7) +
                one_over_two_p * (*(b + 119 * OS1_S1 + 6) -
                                  alpha_over_p * *(b + 119 * OS1_S1 + 7));
            *(b + 218 * OS1_S1 + 6) = Y_PA * *(b + 164 * OS1_S1 + 6) +
                                      alpha_Y * *(b + 164 * OS1_S1 + 7);
            *(b + 219 * OS1_S1 + 6) =
                Z_PA * *(b + 164 * OS1_S1 + 6) +
                alpha_Z * *(b + 164 * OS1_S1 + 7) +
                8 * one_over_two_p *
                    (*(b + 119 * OS1_S1 + 6) -
                     alpha_over_p * *(b + 119 * OS1_S1 + 7));
            *(b + 220 * OS1_S1 + 5) =
                X_PA * *(b + 165 * OS1_S1 + 5) +
                alpha_X * *(b + 165 * OS1_S1 + 6) +
                9 * one_over_two_p *
                    (*(b + 120 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 120 * OS1_S1 + 6));
            *(b + 221 * OS1_S1 + 5) = Y_PA * *(b + 165 * OS1_S1 + 5) +
                                      alpha_Y * *(b + 165 * OS1_S1 + 6);
            *(b + 222 * OS1_S1 + 5) = Z_PA * *(b + 165 * OS1_S1 + 5) +
                                      alpha_Z * *(b + 165 * OS1_S1 + 6);
            *(b + 223 * OS1_S1 + 5) =
                Y_PA * *(b + 166 * OS1_S1 + 5) +
                alpha_Y * *(b + 166 * OS1_S1 + 6) +
                one_over_two_p * (*(b + 120 * OS1_S1 + 5) -
                                  alpha_over_p * *(b + 120 * OS1_S1 + 6));
            *(b + 225 * OS1_S1 + 5) =
                Z_PA * *(b + 167 * OS1_S1 + 5) +
                alpha_Z * *(b + 167 * OS1_S1 + 6) +
                one_over_two_p * (*(b + 120 * OS1_S1 + 5) -
                                  alpha_over_p * *(b + 120 * OS1_S1 + 6));
            *(b + 226 * OS1_S1 + 5) =
                Y_PA * *(b + 168 * OS1_S1 + 5) +
                alpha_Y * *(b + 168 * OS1_S1 + 6) +
                2 * one_over_two_p *
                    (*(b + 121 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 121 * OS1_S1 + 6));
            *(b + 229 * OS1_S1 + 5) =
                Z_PA * *(b + 170 * OS1_S1 + 5) +
                alpha_Z * *(b + 170 * OS1_S1 + 6) +
                2 * one_over_two_p *
                    (*(b + 122 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 122 * OS1_S1 + 6));
            *(b + 230 * OS1_S1 + 5) =
                Y_PA * *(b + 171 * OS1_S1 + 5) +
                alpha_Y * *(b + 171 * OS1_S1 + 6) +
                3 * one_over_two_p *
                    (*(b + 123 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 123 * OS1_S1 + 6));
            *(b + 234 * OS1_S1 + 5) =
                Z_PA * *(b + 174 * OS1_S1 + 5) +
                alpha_Z * *(b + 174 * OS1_S1 + 6) +
                3 * one_over_two_p *
                    (*(b + 125 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 125 * OS1_S1 + 6));
            *(b + 235 * OS1_S1 + 5) =
                Y_PA * *(b + 175 * OS1_S1 + 5) +
                alpha_Y * *(b + 175 * OS1_S1 + 6) +
                4 * one_over_two_p *
                    (*(b + 126 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 126 * OS1_S1 + 6));
            *(b + 241 * OS1_S1 + 5) =
                X_PA * *(b + 186 * OS1_S1 + 5) +
                alpha_X * *(b + 186 * OS1_S1 + 6) +
                3 * one_over_two_p *
                    (*(b + 141 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 141 * OS1_S1 + 6));
            *(b + 247 * OS1_S1 + 5) =
                X_PA * *(b + 192 * OS1_S1 + 5) +
                alpha_X * *(b + 192 * OS1_S1 + 6) +
                3 * one_over_two_p *
                    (*(b + 147 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 147 * OS1_S1 + 6));
            *(b + 248 * OS1_S1 + 5) =
                X_PA * *(b + 193 * OS1_S1 + 5) +
                alpha_X * *(b + 193 * OS1_S1 + 6) +
                2 * one_over_two_p *
                    (*(b + 148 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 148 * OS1_S1 + 6));
            *(b + 255 * OS1_S1 + 5) =
                X_PA * *(b + 200 * OS1_S1 + 5) +
                alpha_X * *(b + 200 * OS1_S1 + 6) +
                2 * one_over_two_p *
                    (*(b + 155 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 155 * OS1_S1 + 6));
            *(b + 256 * OS1_S1 + 5) =
                X_PA * *(b + 201 * OS1_S1 + 5) +
                alpha_X * *(b + 201 * OS1_S1 + 6) +
                one_over_two_p * (*(b + 156 * OS1_S1 + 5) -
                                  alpha_over_p * *(b + 156 * OS1_S1 + 6));
            *(b + 264 * OS1_S1 + 5) =
                X_PA * *(b + 209 * OS1_S1 + 5) +
                alpha_X * *(b + 209 * OS1_S1 + 6) +
                one_over_two_p * (*(b + 164 * OS1_S1 + 5) -
                                  alpha_over_p * *(b + 164 * OS1_S1 + 6));
            *(b + 265 * OS1_S1 + 5) = X_PA * *(b + 210 * OS1_S1 + 5) +
                                      alpha_X * *(b + 210 * OS1_S1 + 6);
            *(b + 274 * OS1_S1 + 5) = X_PA * *(b + 219 * OS1_S1 + 5) +
                                      alpha_X * *(b + 219 * OS1_S1 + 6);
            *(b + 275 * OS1_S1 + 5) =
                Y_PA * *(b + 210 * OS1_S1 + 5) +
                alpha_Y * *(b + 210 * OS1_S1 + 6) +
                9 * one_over_two_p *
                    (*(b + 156 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 156 * OS1_S1 + 6));
            *(b + 276 * OS1_S1 + 5) = Z_PA * *(b + 210 * OS1_S1 + 5) +
                                      alpha_Z * *(b + 210 * OS1_S1 + 6);
            *(b + 277 * OS1_S1 + 5) =
                Z_PA * *(b + 211 * OS1_S1 + 5) +
                alpha_Z * *(b + 211 * OS1_S1 + 6) +
                one_over_two_p * (*(b + 156 * OS1_S1 + 5) -
                                  alpha_over_p * *(b + 156 * OS1_S1 + 6));
            *(b + 278 * OS1_S1 + 5) =
                Z_PA * *(b + 212 * OS1_S1 + 5) +
                alpha_Z * *(b + 212 * OS1_S1 + 6) +
                2 * one_over_two_p *
                    (*(b + 157 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 157 * OS1_S1 + 6));
            *(b + 279 * OS1_S1 + 5) =
                Z_PA * *(b + 213 * OS1_S1 + 5) +
                alpha_Z * *(b + 213 * OS1_S1 + 6) +
                3 * one_over_two_p *
                    (*(b + 158 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 158 * OS1_S1 + 6));
            *(b + 281 * OS1_S1 + 5) =
                Y_PA * *(b + 216 * OS1_S1 + 5) +
                alpha_Y * *(b + 216 * OS1_S1 + 6) +
                3 * one_over_two_p *
                    (*(b + 162 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 162 * OS1_S1 + 6));
            *(b + 282 * OS1_S1 + 5) =
                Y_PA * *(b + 217 * OS1_S1 + 5) +
                alpha_Y * *(b + 217 * OS1_S1 + 6) +
                2 * one_over_two_p *
                    (*(b + 163 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 163 * OS1_S1 + 6));
            *(b + 283 * OS1_S1 + 5) =
                Y_PA * *(b + 218 * OS1_S1 + 5) +
                alpha_Y * *(b + 218 * OS1_S1 + 6) +
                one_over_two_p * (*(b + 164 * OS1_S1 + 5) -
                                  alpha_over_p * *(b + 164 * OS1_S1 + 6));
            *(b + 284 * OS1_S1 + 5) = Y_PA * *(b + 219 * OS1_S1 + 5) +
                                      alpha_Y * *(b + 219 * OS1_S1 + 6);
            *(b + 285 * OS1_S1 + 5) =
                Z_PA * *(b + 219 * OS1_S1 + 5) +
                alpha_Z * *(b + 219 * OS1_S1 + 6) +
                9 * one_over_two_p *
                    (*(b + 164 * OS1_S1 + 5) -
                     alpha_over_p * *(b + 164 * OS1_S1 + 6));
            *(b + 286 * OS1_S1 + 4) =
                X_PA * *(b + 220 * OS1_S1 + 4) +
                alpha_X * *(b + 220 * OS1_S1 + 5) +
                10 * one_over_two_p *
                    (*(b + 165 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 165 * OS1_S1 + 5));
            *(b + 287 * OS1_S1 + 4) = Y_PA * *(b + 220 * OS1_S1 + 4) +
                                      alpha_Y * *(b + 220 * OS1_S1 + 5);
            *(b + 288 * OS1_S1 + 4) = Z_PA * *(b + 220 * OS1_S1 + 4) +
                                      alpha_Z * *(b + 220 * OS1_S1 + 5);
            *(b + 289 * OS1_S1 + 4) =
                Y_PA * *(b + 221 * OS1_S1 + 4) +
                alpha_Y * *(b + 221 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 165 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 165 * OS1_S1 + 5));
            *(b + 291 * OS1_S1 + 4) =
                Z_PA * *(b + 222 * OS1_S1 + 4) +
                alpha_Z * *(b + 222 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 165 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 165 * OS1_S1 + 5));
            *(b + 292 * OS1_S1 + 4) =
                Y_PA * *(b + 223 * OS1_S1 + 4) +
                alpha_Y * *(b + 223 * OS1_S1 + 5) +
                2 * one_over_two_p *
                    (*(b + 166 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 166 * OS1_S1 + 5));
            *(b + 295 * OS1_S1 + 4) =
                Z_PA * *(b + 225 * OS1_S1 + 4) +
                alpha_Z * *(b + 225 * OS1_S1 + 5) +
                2 * one_over_two_p *
                    (*(b + 167 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 167 * OS1_S1 + 5));
            *(b + 296 * OS1_S1 + 4) =
                Y_PA * *(b + 226 * OS1_S1 + 4) +
                alpha_Y * *(b + 226 * OS1_S1 + 5) +
                3 * one_over_two_p *
                    (*(b + 168 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 168 * OS1_S1 + 5));
            *(b + 300 * OS1_S1 + 4) =
                Z_PA * *(b + 229 * OS1_S1 + 4) +
                alpha_Z * *(b + 229 * OS1_S1 + 5) +
                3 * one_over_two_p *
                    (*(b + 170 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 170 * OS1_S1 + 5));
            *(b + 301 * OS1_S1 + 4) =
                Y_PA * *(b + 230 * OS1_S1 + 4) +
                alpha_Y * *(b + 230 * OS1_S1 + 5) +
                4 * one_over_two_p *
                    (*(b + 171 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 171 * OS1_S1 + 5));
            *(b + 306 * OS1_S1 + 4) =
                Z_PA * *(b + 234 * OS1_S1 + 4) +
                alpha_Z * *(b + 234 * OS1_S1 + 5) +
                4 * one_over_two_p *
                    (*(b + 174 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 174 * OS1_S1 + 5));
            *(b + 307 * OS1_S1 + 4) =
                X_PA * *(b + 241 * OS1_S1 + 4) +
                alpha_X * *(b + 241 * OS1_S1 + 5) +
                4 * one_over_two_p *
                    (*(b + 186 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 186 * OS1_S1 + 5));
            *(b + 308 * OS1_S1 + 4) = Z_PA * *(b + 235 * OS1_S1 + 4) +
                                      alpha_Z * *(b + 235 * OS1_S1 + 5);
            *(b + 313 * OS1_S1 + 4) =
                X_PA * *(b + 247 * OS1_S1 + 4) +
                alpha_X * *(b + 247 * OS1_S1 + 5) +
                4 * one_over_two_p *
                    (*(b + 192 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 192 * OS1_S1 + 5));
            *(b + 314 * OS1_S1 + 4) =
                X_PA * *(b + 248 * OS1_S1 + 4) +
                alpha_X * *(b + 248 * OS1_S1 + 5) +
                3 * one_over_two_p *
                    (*(b + 193 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 193 * OS1_S1 + 5));
            *(b + 321 * OS1_S1 + 4) =
                X_PA * *(b + 255 * OS1_S1 + 4) +
                alpha_X * *(b + 255 * OS1_S1 + 5) +
                3 * one_over_two_p *
                    (*(b + 200 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 200 * OS1_S1 + 5));
            *(b + 322 * OS1_S1 + 4) =
                X_PA * *(b + 256 * OS1_S1 + 4) +
                alpha_X * *(b + 256 * OS1_S1 + 5) +
                2 * one_over_two_p *
                    (*(b + 201 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 201 * OS1_S1 + 5));
            *(b + 330 * OS1_S1 + 4) =
                X_PA * *(b + 264 * OS1_S1 + 4) +
                alpha_X * *(b + 264 * OS1_S1 + 5) +
                2 * one_over_two_p *
                    (*(b + 209 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 209 * OS1_S1 + 5));
            *(b + 331 * OS1_S1 + 4) =
                X_PA * *(b + 265 * OS1_S1 + 4) +
                alpha_X * *(b + 265 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 210 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 210 * OS1_S1 + 5));
            *(b + 340 * OS1_S1 + 4) =
                X_PA * *(b + 274 * OS1_S1 + 4) +
                alpha_X * *(b + 274 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 219 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 219 * OS1_S1 + 5));
            *(b + 341 * OS1_S1 + 4) = X_PA * *(b + 275 * OS1_S1 + 4) +
                                      alpha_X * *(b + 275 * OS1_S1 + 5);
            *(b + 351 * OS1_S1 + 4) = X_PA * *(b + 285 * OS1_S1 + 4) +
                                      alpha_X * *(b + 285 * OS1_S1 + 5);
            *(b + 352 * OS1_S1 + 4) =
                Y_PA * *(b + 275 * OS1_S1 + 4) +
                alpha_Y * *(b + 275 * OS1_S1 + 5) +
                10 * one_over_two_p *
                    (*(b + 210 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 210 * OS1_S1 + 5));
            *(b + 353 * OS1_S1 + 4) = Z_PA * *(b + 275 * OS1_S1 + 4) +
                                      alpha_Z * *(b + 275 * OS1_S1 + 5);
            *(b + 354 * OS1_S1 + 4) =
                Z_PA * *(b + 276 * OS1_S1 + 4) +
                alpha_Z * *(b + 276 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 210 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 210 * OS1_S1 + 5));
            *(b + 355 * OS1_S1 + 4) =
                Z_PA * *(b + 277 * OS1_S1 + 4) +
                alpha_Z * *(b + 277 * OS1_S1 + 5) +
                2 * one_over_two_p *
                    (*(b + 211 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 211 * OS1_S1 + 5));
            *(b + 356 * OS1_S1 + 4) =
                Z_PA * *(b + 278 * OS1_S1 + 4) +
                alpha_Z * *(b + 278 * OS1_S1 + 5) +
                3 * one_over_two_p *
                    (*(b + 212 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 212 * OS1_S1 + 5));
            *(b + 357 * OS1_S1 + 4) =
                Z_PA * *(b + 279 * OS1_S1 + 4) +
                alpha_Z * *(b + 279 * OS1_S1 + 5) +
                4 * one_over_two_p *
                    (*(b + 213 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 213 * OS1_S1 + 5));
            *(b + 358 * OS1_S1 + 4) =
                Y_PA * *(b + 281 * OS1_S1 + 4) +
                alpha_Y * *(b + 281 * OS1_S1 + 5) +
                4 * one_over_two_p *
                    (*(b + 216 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 216 * OS1_S1 + 5));
            *(b + 359 * OS1_S1 + 4) =
                Y_PA * *(b + 282 * OS1_S1 + 4) +
                alpha_Y * *(b + 282 * OS1_S1 + 5) +
                3 * one_over_two_p *
                    (*(b + 217 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 217 * OS1_S1 + 5));
            *(b + 360 * OS1_S1 + 4) =
                Y_PA * *(b + 283 * OS1_S1 + 4) +
                alpha_Y * *(b + 283 * OS1_S1 + 5) +
                2 * one_over_two_p *
                    (*(b + 218 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 218 * OS1_S1 + 5));
            *(b + 361 * OS1_S1 + 4) =
                Y_PA * *(b + 284 * OS1_S1 + 4) +
                alpha_Y * *(b + 284 * OS1_S1 + 5) +
                one_over_two_p * (*(b + 219 * OS1_S1 + 4) -
                                  alpha_over_p * *(b + 219 * OS1_S1 + 5));
            *(b + 362 * OS1_S1 + 4) = Y_PA * *(b + 285 * OS1_S1 + 4) +
                                      alpha_Y * *(b + 285 * OS1_S1 + 5);
            *(b + 363 * OS1_S1 + 4) =
                Z_PA * *(b + 285 * OS1_S1 + 4) +
                alpha_Z * *(b + 285 * OS1_S1 + 5) +
                10 * one_over_two_p *
                    (*(b + 219 * OS1_S1 + 4) -
                     alpha_over_p * *(b + 219 * OS1_S1 + 5));
            *(b + 364 * OS1_S1 + 3) =
                X_PA * *(b + 286 * OS1_S1 + 3) +
                alpha_X * *(b + 286 * OS1_S1 + 4) +
                11 * one_over_two_p *
                    (*(b + 220 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 220 * OS1_S1 + 4));
            *(b + 365 * OS1_S1 + 3) = Y_PA * *(b + 286 * OS1_S1 + 3) +
                                      alpha_Y * *(b + 286 * OS1_S1 + 4);
            *(b + 366 * OS1_S1 + 3) = Z_PA * *(b + 286 * OS1_S1 + 3) +
                                      alpha_Z * *(b + 286 * OS1_S1 + 4);
            *(b + 367 * OS1_S1 + 3) =
                Y_PA * *(b + 287 * OS1_S1 + 3) +
                alpha_Y * *(b + 287 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 220 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 220 * OS1_S1 + 4));
            *(b + 369 * OS1_S1 + 3) =
                Z_PA * *(b + 288 * OS1_S1 + 3) +
                alpha_Z * *(b + 288 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 220 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 220 * OS1_S1 + 4));
            *(b + 370 * OS1_S1 + 3) =
                Y_PA * *(b + 289 * OS1_S1 + 3) +
                alpha_Y * *(b + 289 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 221 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 221 * OS1_S1 + 4));
            *(b + 373 * OS1_S1 + 3) =
                Z_PA * *(b + 291 * OS1_S1 + 3) +
                alpha_Z * *(b + 291 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 222 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 222 * OS1_S1 + 4));
            *(b + 374 * OS1_S1 + 3) =
                Y_PA * *(b + 292 * OS1_S1 + 3) +
                alpha_Y * *(b + 292 * OS1_S1 + 4) +
                3 * one_over_two_p *
                    (*(b + 223 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 223 * OS1_S1 + 4));
            *(b + 378 * OS1_S1 + 3) =
                Z_PA * *(b + 295 * OS1_S1 + 3) +
                alpha_Z * *(b + 295 * OS1_S1 + 4) +
                3 * one_over_two_p *
                    (*(b + 225 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 225 * OS1_S1 + 4));
            *(b + 379 * OS1_S1 + 3) =
                Y_PA * *(b + 296 * OS1_S1 + 3) +
                alpha_Y * *(b + 296 * OS1_S1 + 4) +
                4 * one_over_two_p *
                    (*(b + 226 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 226 * OS1_S1 + 4));
            *(b + 380 * OS1_S1 + 3) = Z_PA * *(b + 296 * OS1_S1 + 3) +
                                      alpha_Z * *(b + 296 * OS1_S1 + 4);
            *(b + 384 * OS1_S1 + 3) =
                Z_PA * *(b + 300 * OS1_S1 + 3) +
                alpha_Z * *(b + 300 * OS1_S1 + 4) +
                4 * one_over_two_p *
                    (*(b + 229 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 229 * OS1_S1 + 4));
            *(b + 385 * OS1_S1 + 3) =
                Y_PA * *(b + 301 * OS1_S1 + 3) +
                alpha_Y * *(b + 301 * OS1_S1 + 4) +
                5 * one_over_two_p *
                    (*(b + 230 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 230 * OS1_S1 + 4));
            *(b + 386 * OS1_S1 + 3) = Z_PA * *(b + 301 * OS1_S1 + 3) +
                                      alpha_Z * *(b + 301 * OS1_S1 + 4);
            *(b + 390 * OS1_S1 + 3) = Y_PA * *(b + 306 * OS1_S1 + 3) +
                                      alpha_Y * *(b + 306 * OS1_S1 + 4);
            *(b + 391 * OS1_S1 + 3) =
                Z_PA * *(b + 306 * OS1_S1 + 3) +
                alpha_Z * *(b + 306 * OS1_S1 + 4) +
                5 * one_over_two_p *
                    (*(b + 234 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 234 * OS1_S1 + 4));
            *(b + 392 * OS1_S1 + 3) =
                X_PA * *(b + 314 * OS1_S1 + 3) +
                alpha_X * *(b + 314 * OS1_S1 + 4) +
                4 * one_over_two_p *
                    (*(b + 248 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 248 * OS1_S1 + 4));
            *(b + 393 * OS1_S1 + 3) = Z_PA * *(b + 307 * OS1_S1 + 3) +
                                      alpha_Z * *(b + 307 * OS1_S1 + 4);
            *(b + 394 * OS1_S1 + 3) =
                Z_PA * *(b + 308 * OS1_S1 + 3) +
                alpha_Z * *(b + 308 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 235 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 235 * OS1_S1 + 4));
            *(b + 398 * OS1_S1 + 3) = Y_PA * *(b + 313 * OS1_S1 + 3) +
                                      alpha_Y * *(b + 313 * OS1_S1 + 4);
            *(b + 399 * OS1_S1 + 3) =
                X_PA * *(b + 321 * OS1_S1 + 3) +
                alpha_X * *(b + 321 * OS1_S1 + 4) +
                4 * one_over_two_p *
                    (*(b + 255 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 255 * OS1_S1 + 4));
            *(b + 400 * OS1_S1 + 3) =
                X_PA * *(b + 322 * OS1_S1 + 3) +
                alpha_X * *(b + 322 * OS1_S1 + 4) +
                3 * one_over_two_p *
                    (*(b + 256 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 256 * OS1_S1 + 4));
            *(b + 401 * OS1_S1 + 3) = Z_PA * *(b + 314 * OS1_S1 + 3) +
                                      alpha_Z * *(b + 314 * OS1_S1 + 4);
            *(b + 407 * OS1_S1 + 3) = Y_PA * *(b + 321 * OS1_S1 + 3) +
                                      alpha_Y * *(b + 321 * OS1_S1 + 4);
            *(b + 408 * OS1_S1 + 3) =
                X_PA * *(b + 330 * OS1_S1 + 3) +
                alpha_X * *(b + 330 * OS1_S1 + 4) +
                3 * one_over_two_p *
                    (*(b + 264 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 264 * OS1_S1 + 4));
            *(b + 409 * OS1_S1 + 3) =
                X_PA * *(b + 331 * OS1_S1 + 3) +
                alpha_X * *(b + 331 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 265 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 265 * OS1_S1 + 4));
            *(b + 418 * OS1_S1 + 3) =
                X_PA * *(b + 340 * OS1_S1 + 3) +
                alpha_X * *(b + 340 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 274 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 274 * OS1_S1 + 4));
            *(b + 419 * OS1_S1 + 3) =
                X_PA * *(b + 341 * OS1_S1 + 3) +
                alpha_X * *(b + 341 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 275 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 275 * OS1_S1 + 4));
            *(b + 429 * OS1_S1 + 3) =
                X_PA * *(b + 351 * OS1_S1 + 3) +
                alpha_X * *(b + 351 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 285 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 285 * OS1_S1 + 4));
            *(b + 430 * OS1_S1 + 3) = X_PA * *(b + 352 * OS1_S1 + 3) +
                                      alpha_X * *(b + 352 * OS1_S1 + 4);
            *(b + 435 * OS1_S1 + 3) = X_PA * *(b + 357 * OS1_S1 + 3) +
                                      alpha_X * *(b + 357 * OS1_S1 + 4);
            *(b + 436 * OS1_S1 + 3) = X_PA * *(b + 358 * OS1_S1 + 3) +
                                      alpha_X * *(b + 358 * OS1_S1 + 4);
            *(b + 441 * OS1_S1 + 3) = X_PA * *(b + 363 * OS1_S1 + 3) +
                                      alpha_X * *(b + 363 * OS1_S1 + 4);
            *(b + 442 * OS1_S1 + 3) =
                Y_PA * *(b + 352 * OS1_S1 + 3) +
                alpha_Y * *(b + 352 * OS1_S1 + 4) +
                11 * one_over_two_p *
                    (*(b + 275 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 275 * OS1_S1 + 4));
            *(b + 443 * OS1_S1 + 3) = Z_PA * *(b + 352 * OS1_S1 + 3) +
                                      alpha_Z * *(b + 352 * OS1_S1 + 4);
            *(b + 444 * OS1_S1 + 3) =
                Z_PA * *(b + 353 * OS1_S1 + 3) +
                alpha_Z * *(b + 353 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 275 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 275 * OS1_S1 + 4));
            *(b + 445 * OS1_S1 + 3) =
                Z_PA * *(b + 354 * OS1_S1 + 3) +
                alpha_Z * *(b + 354 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 276 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 276 * OS1_S1 + 4));
            *(b + 446 * OS1_S1 + 3) =
                Z_PA * *(b + 355 * OS1_S1 + 3) +
                alpha_Z * *(b + 355 * OS1_S1 + 4) +
                3 * one_over_two_p *
                    (*(b + 277 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 277 * OS1_S1 + 4));
            *(b + 447 * OS1_S1 + 3) =
                Z_PA * *(b + 356 * OS1_S1 + 3) +
                alpha_Z * *(b + 356 * OS1_S1 + 4) +
                4 * one_over_two_p *
                    (*(b + 278 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 278 * OS1_S1 + 4));
            *(b + 448 * OS1_S1 + 3) =
                Z_PA * *(b + 357 * OS1_S1 + 3) +
                alpha_Z * *(b + 357 * OS1_S1 + 4) +
                5 * one_over_two_p *
                    (*(b + 279 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 279 * OS1_S1 + 4));
            *(b + 449 * OS1_S1 + 3) =
                Y_PA * *(b + 359 * OS1_S1 + 3) +
                alpha_Y * *(b + 359 * OS1_S1 + 4) +
                4 * one_over_two_p *
                    (*(b + 282 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 282 * OS1_S1 + 4));
            *(b + 450 * OS1_S1 + 3) =
                Y_PA * *(b + 360 * OS1_S1 + 3) +
                alpha_Y * *(b + 360 * OS1_S1 + 4) +
                3 * one_over_two_p *
                    (*(b + 283 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 283 * OS1_S1 + 4));
            *(b + 451 * OS1_S1 + 3) =
                Y_PA * *(b + 361 * OS1_S1 + 3) +
                alpha_Y * *(b + 361 * OS1_S1 + 4) +
                2 * one_over_two_p *
                    (*(b + 284 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 284 * OS1_S1 + 4));
            *(b + 452 * OS1_S1 + 3) =
                Y_PA * *(b + 362 * OS1_S1 + 3) +
                alpha_Y * *(b + 362 * OS1_S1 + 4) +
                one_over_two_p * (*(b + 285 * OS1_S1 + 3) -
                                  alpha_over_p * *(b + 285 * OS1_S1 + 4));
            *(b + 453 * OS1_S1 + 3) = Y_PA * *(b + 363 * OS1_S1 + 3) +
                                      alpha_Y * *(b + 363 * OS1_S1 + 4);
            *(b + 454 * OS1_S1 + 3) =
                Z_PA * *(b + 363 * OS1_S1 + 3) +
                alpha_Z * *(b + 363 * OS1_S1 + 4) +
                11 * one_over_two_p *
                    (*(b + 285 * OS1_S1 + 3) -
                     alpha_over_p * *(b + 285 * OS1_S1 + 4));
            *(b + 455 * OS1_S1 + 2) =
                X_PA * *(b + 364 * OS1_S1 + 2) +
                alpha_X * *(b + 364 * OS1_S1 + 3) +
                12 * one_over_two_p *
                    (*(b + 286 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 286 * OS1_S1 + 3));
            *(b + 456 * OS1_S1 + 2) = Y_PA * *(b + 364 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 364 * OS1_S1 + 3);
            *(b + 457 * OS1_S1 + 2) = Z_PA * *(b + 364 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 364 * OS1_S1 + 3);
            *(b + 458 * OS1_S1 + 2) =
                Y_PA * *(b + 365 * OS1_S1 + 2) +
                alpha_Y * *(b + 365 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 286 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 286 * OS1_S1 + 3));
            *(b + 460 * OS1_S1 + 2) =
                Z_PA * *(b + 366 * OS1_S1 + 2) +
                alpha_Z * *(b + 366 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 286 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 286 * OS1_S1 + 3));
            *(b + 461 * OS1_S1 + 2) =
                Y_PA * *(b + 367 * OS1_S1 + 2) +
                alpha_Y * *(b + 367 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 287 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 287 * OS1_S1 + 3));
            *(b + 464 * OS1_S1 + 2) =
                Z_PA * *(b + 369 * OS1_S1 + 2) +
                alpha_Z * *(b + 369 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 288 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 288 * OS1_S1 + 3));
            *(b + 465 * OS1_S1 + 2) =
                Y_PA * *(b + 370 * OS1_S1 + 2) +
                alpha_Y * *(b + 370 * OS1_S1 + 3) +
                3 * one_over_two_p *
                    (*(b + 289 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 289 * OS1_S1 + 3));
            *(b + 466 * OS1_S1 + 2) = Z_PA * *(b + 370 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 370 * OS1_S1 + 3);
            *(b + 469 * OS1_S1 + 2) =
                Z_PA * *(b + 373 * OS1_S1 + 2) +
                alpha_Z * *(b + 373 * OS1_S1 + 3) +
                3 * one_over_two_p *
                    (*(b + 291 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 291 * OS1_S1 + 3));
            *(b + 470 * OS1_S1 + 2) =
                Y_PA * *(b + 374 * OS1_S1 + 2) +
                alpha_Y * *(b + 374 * OS1_S1 + 3) +
                4 * one_over_two_p *
                    (*(b + 292 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 292 * OS1_S1 + 3));
            *(b + 471 * OS1_S1 + 2) = Z_PA * *(b + 374 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 374 * OS1_S1 + 3);
            *(b + 474 * OS1_S1 + 2) = Y_PA * *(b + 378 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 378 * OS1_S1 + 3);
            *(b + 475 * OS1_S1 + 2) =
                Z_PA * *(b + 378 * OS1_S1 + 2) +
                alpha_Z * *(b + 378 * OS1_S1 + 3) +
                4 * one_over_two_p *
                    (*(b + 295 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 295 * OS1_S1 + 3));
            *(b + 476 * OS1_S1 + 2) =
                Y_PA * *(b + 379 * OS1_S1 + 2) +
                alpha_Y * *(b + 379 * OS1_S1 + 3) +
                5 * one_over_two_p *
                    (*(b + 296 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 296 * OS1_S1 + 3));
            *(b + 477 * OS1_S1 + 2) = Z_PA * *(b + 379 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 379 * OS1_S1 + 3);
            *(b + 478 * OS1_S1 + 2) =
                Z_PA * *(b + 380 * OS1_S1 + 2) +
                alpha_Z * *(b + 380 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 296 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 296 * OS1_S1 + 3));
            *(b + 481 * OS1_S1 + 2) = Y_PA * *(b + 384 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 384 * OS1_S1 + 3);
            *(b + 482 * OS1_S1 + 2) =
                Z_PA * *(b + 384 * OS1_S1 + 2) +
                alpha_Z * *(b + 384 * OS1_S1 + 3) +
                5 * one_over_two_p *
                    (*(b + 300 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 300 * OS1_S1 + 3));
            *(b + 483 * OS1_S1 + 2) =
                X_PA * *(b + 392 * OS1_S1 + 2) +
                alpha_X * *(b + 392 * OS1_S1 + 3) +
                5 * one_over_two_p *
                    (*(b + 314 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 314 * OS1_S1 + 3));
            *(b + 484 * OS1_S1 + 2) = Z_PA * *(b + 385 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 385 * OS1_S1 + 3);
            *(b + 485 * OS1_S1 + 2) =
                Z_PA * *(b + 386 * OS1_S1 + 2) +
                alpha_Z * *(b + 386 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 301 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 301 * OS1_S1 + 3));
            *(b + 488 * OS1_S1 + 2) =
                Y_PA * *(b + 390 * OS1_S1 + 2) +
                alpha_Y * *(b + 390 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 306 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 306 * OS1_S1 + 3));
            *(b + 489 * OS1_S1 + 2) = Y_PA * *(b + 391 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 391 * OS1_S1 + 3);
            *(b + 490 * OS1_S1 + 2) =
                X_PA * *(b + 399 * OS1_S1 + 2) +
                alpha_X * *(b + 399 * OS1_S1 + 3) +
                5 * one_over_two_p *
                    (*(b + 321 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 321 * OS1_S1 + 3));
            *(b + 491 * OS1_S1 + 2) =
                X_PA * *(b + 400 * OS1_S1 + 2) +
                alpha_X * *(b + 400 * OS1_S1 + 3) +
                4 * one_over_two_p *
                    (*(b + 322 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 322 * OS1_S1 + 3));
            *(b + 492 * OS1_S1 + 2) = Z_PA * *(b + 392 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 392 * OS1_S1 + 3);
            *(b + 493 * OS1_S1 + 2) =
                Z_PA * *(b + 393 * OS1_S1 + 2) +
                alpha_Z * *(b + 393 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 307 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 307 * OS1_S1 + 3));
            *(b + 494 * OS1_S1 + 2) =
                Z_PA * *(b + 394 * OS1_S1 + 2) +
                alpha_Z * *(b + 394 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 308 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 308 * OS1_S1 + 3));
            *(b + 497 * OS1_S1 + 2) =
                Y_PA * *(b + 398 * OS1_S1 + 2) +
                alpha_Y * *(b + 398 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 313 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 313 * OS1_S1 + 3));
            *(b + 498 * OS1_S1 + 2) = Y_PA * *(b + 399 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 399 * OS1_S1 + 3);
            *(b + 499 * OS1_S1 + 2) =
                X_PA * *(b + 408 * OS1_S1 + 2) +
                alpha_X * *(b + 408 * OS1_S1 + 3) +
                4 * one_over_two_p *
                    (*(b + 330 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 330 * OS1_S1 + 3));
            *(b + 500 * OS1_S1 + 2) =
                X_PA * *(b + 409 * OS1_S1 + 2) +
                alpha_X * *(b + 409 * OS1_S1 + 3) +
                3 * one_over_two_p *
                    (*(b + 331 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 331 * OS1_S1 + 3));
            *(b + 501 * OS1_S1 + 2) = Z_PA * *(b + 400 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 400 * OS1_S1 + 3);
            *(b + 502 * OS1_S1 + 2) =
                Z_PA * *(b + 401 * OS1_S1 + 2) +
                alpha_Z * *(b + 401 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 314 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 314 * OS1_S1 + 3));
            *(b + 507 * OS1_S1 + 2) =
                Y_PA * *(b + 407 * OS1_S1 + 2) +
                alpha_Y * *(b + 407 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 321 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 321 * OS1_S1 + 3));
            *(b + 508 * OS1_S1 + 2) = Y_PA * *(b + 408 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 408 * OS1_S1 + 3);
            *(b + 509 * OS1_S1 + 2) =
                X_PA * *(b + 418 * OS1_S1 + 2) +
                alpha_X * *(b + 418 * OS1_S1 + 3) +
                3 * one_over_two_p *
                    (*(b + 340 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 340 * OS1_S1 + 3));
            *(b + 510 * OS1_S1 + 2) =
                X_PA * *(b + 419 * OS1_S1 + 2) +
                alpha_X * *(b + 419 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 341 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 341 * OS1_S1 + 3));
            *(b + 511 * OS1_S1 + 2) = Z_PA * *(b + 409 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 409 * OS1_S1 + 3);
            *(b + 519 * OS1_S1 + 2) = Y_PA * *(b + 418 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 418 * OS1_S1 + 3);
            *(b + 520 * OS1_S1 + 2) =
                X_PA * *(b + 429 * OS1_S1 + 2) +
                alpha_X * *(b + 429 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 351 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 351 * OS1_S1 + 3));
            *(b + 521 * OS1_S1 + 2) =
                X_PA * *(b + 430 * OS1_S1 + 2) +
                alpha_X * *(b + 430 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 352 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 352 * OS1_S1 + 3));
            *(b + 526 * OS1_S1 + 2) =
                X_PA * *(b + 435 * OS1_S1 + 2) +
                alpha_X * *(b + 435 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 357 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 357 * OS1_S1 + 3));
            *(b + 527 * OS1_S1 + 2) =
                X_PA * *(b + 436 * OS1_S1 + 2) +
                alpha_X * *(b + 436 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 358 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 358 * OS1_S1 + 3));
            *(b + 532 * OS1_S1 + 2) =
                X_PA * *(b + 441 * OS1_S1 + 2) +
                alpha_X * *(b + 441 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 363 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 363 * OS1_S1 + 3));
            *(b + 533 * OS1_S1 + 2) = X_PA * *(b + 442 * OS1_S1 + 2) +
                                      alpha_X * *(b + 442 * OS1_S1 + 3);
            *(b + 537 * OS1_S1 + 2) = X_PA * *(b + 446 * OS1_S1 + 2) +
                                      alpha_X * *(b + 446 * OS1_S1 + 3);
            *(b + 538 * OS1_S1 + 2) = X_PA * *(b + 447 * OS1_S1 + 2) +
                                      alpha_X * *(b + 447 * OS1_S1 + 3);
            *(b + 539 * OS1_S1 + 2) = X_PA * *(b + 448 * OS1_S1 + 2) +
                                      alpha_X * *(b + 448 * OS1_S1 + 3);
            *(b + 540 * OS1_S1 + 2) = X_PA * *(b + 449 * OS1_S1 + 2) +
                                      alpha_X * *(b + 449 * OS1_S1 + 3);
            *(b + 541 * OS1_S1 + 2) = X_PA * *(b + 450 * OS1_S1 + 2) +
                                      alpha_X * *(b + 450 * OS1_S1 + 3);
            *(b + 545 * OS1_S1 + 2) = X_PA * *(b + 454 * OS1_S1 + 2) +
                                      alpha_X * *(b + 454 * OS1_S1 + 3);
            *(b + 546 * OS1_S1 + 2) =
                Y_PA * *(b + 442 * OS1_S1 + 2) +
                alpha_Y * *(b + 442 * OS1_S1 + 3) +
                12 * one_over_two_p *
                    (*(b + 352 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 352 * OS1_S1 + 3));
            *(b + 547 * OS1_S1 + 2) = Z_PA * *(b + 442 * OS1_S1 + 2) +
                                      alpha_Z * *(b + 442 * OS1_S1 + 3);
            *(b + 548 * OS1_S1 + 2) =
                Z_PA * *(b + 443 * OS1_S1 + 2) +
                alpha_Z * *(b + 443 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 352 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 352 * OS1_S1 + 3));
            *(b + 549 * OS1_S1 + 2) =
                Z_PA * *(b + 444 * OS1_S1 + 2) +
                alpha_Z * *(b + 444 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 353 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 353 * OS1_S1 + 3));
            *(b + 550 * OS1_S1 + 2) =
                Z_PA * *(b + 445 * OS1_S1 + 2) +
                alpha_Z * *(b + 445 * OS1_S1 + 3) +
                3 * one_over_two_p *
                    (*(b + 354 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 354 * OS1_S1 + 3));
            *(b + 551 * OS1_S1 + 2) =
                Z_PA * *(b + 446 * OS1_S1 + 2) +
                alpha_Z * *(b + 446 * OS1_S1 + 3) +
                4 * one_over_two_p *
                    (*(b + 355 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 355 * OS1_S1 + 3));
            *(b + 552 * OS1_S1 + 2) =
                Z_PA * *(b + 447 * OS1_S1 + 2) +
                alpha_Z * *(b + 447 * OS1_S1 + 3) +
                5 * one_over_two_p *
                    (*(b + 356 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 356 * OS1_S1 + 3));
            *(b + 553 * OS1_S1 + 2) =
                Y_PA * *(b + 449 * OS1_S1 + 2) +
                alpha_Y * *(b + 449 * OS1_S1 + 3) +
                5 * one_over_two_p *
                    (*(b + 359 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 359 * OS1_S1 + 3));
            *(b + 554 * OS1_S1 + 2) =
                Y_PA * *(b + 450 * OS1_S1 + 2) +
                alpha_Y * *(b + 450 * OS1_S1 + 3) +
                4 * one_over_two_p *
                    (*(b + 360 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 360 * OS1_S1 + 3));
            *(b + 555 * OS1_S1 + 2) =
                Y_PA * *(b + 451 * OS1_S1 + 2) +
                alpha_Y * *(b + 451 * OS1_S1 + 3) +
                3 * one_over_two_p *
                    (*(b + 361 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 361 * OS1_S1 + 3));
            *(b + 556 * OS1_S1 + 2) =
                Y_PA * *(b + 452 * OS1_S1 + 2) +
                alpha_Y * *(b + 452 * OS1_S1 + 3) +
                2 * one_over_two_p *
                    (*(b + 362 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 362 * OS1_S1 + 3));
            *(b + 557 * OS1_S1 + 2) =
                Y_PA * *(b + 453 * OS1_S1 + 2) +
                alpha_Y * *(b + 453 * OS1_S1 + 3) +
                one_over_two_p * (*(b + 363 * OS1_S1 + 2) -
                                  alpha_over_p * *(b + 363 * OS1_S1 + 3));
            *(b + 558 * OS1_S1 + 2) = Y_PA * *(b + 454 * OS1_S1 + 2) +
                                      alpha_Y * *(b + 454 * OS1_S1 + 3);
            *(b + 559 * OS1_S1 + 2) =
                Z_PA * *(b + 454 * OS1_S1 + 2) +
                alpha_Z * *(b + 454 * OS1_S1 + 3) +
                12 * one_over_two_p *
                    (*(b + 363 * OS1_S1 + 2) -
                     alpha_over_p * *(b + 363 * OS1_S1 + 3));
            *(b + 560 * OS1_S1 + 1) =
                X_PA * *(b + 455 * OS1_S1 + 1) +
                alpha_X * *(b + 455 * OS1_S1 + 2) +
                13 * one_over_two_p *
                    (*(b + 364 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 364 * OS1_S1 + 2));
            *(b + 561 * OS1_S1 + 1) = Y_PA * *(b + 455 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 455 * OS1_S1 + 2);
            *(b + 562 * OS1_S1 + 1) = Z_PA * *(b + 455 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 455 * OS1_S1 + 2);
            *(b + 563 * OS1_S1 + 1) =
                Y_PA * *(b + 456 * OS1_S1 + 1) +
                alpha_Y * *(b + 456 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 364 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 364 * OS1_S1 + 2));
            *(b + 565 * OS1_S1 + 1) =
                Z_PA * *(b + 457 * OS1_S1 + 1) +
                alpha_Z * *(b + 457 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 364 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 364 * OS1_S1 + 2));
            *(b + 566 * OS1_S1 + 1) =
                Y_PA * *(b + 458 * OS1_S1 + 1) +
                alpha_Y * *(b + 458 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 365 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 365 * OS1_S1 + 2));
            *(b + 567 * OS1_S1 + 1) = Z_PA * *(b + 458 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 458 * OS1_S1 + 2);
            *(b + 569 * OS1_S1 + 1) =
                Z_PA * *(b + 460 * OS1_S1 + 1) +
                alpha_Z * *(b + 460 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 366 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 366 * OS1_S1 + 2));
            *(b + 570 * OS1_S1 + 1) =
                Y_PA * *(b + 461 * OS1_S1 + 1) +
                alpha_Y * *(b + 461 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 367 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 367 * OS1_S1 + 2));
            *(b + 571 * OS1_S1 + 1) = Z_PA * *(b + 461 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 461 * OS1_S1 + 2);
            *(b + 573 * OS1_S1 + 1) = Y_PA * *(b + 464 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 464 * OS1_S1 + 2);
            *(b + 574 * OS1_S1 + 1) =
                Z_PA * *(b + 464 * OS1_S1 + 1) +
                alpha_Z * *(b + 464 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 369 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 369 * OS1_S1 + 2));
            *(b + 575 * OS1_S1 + 1) =
                Y_PA * *(b + 465 * OS1_S1 + 1) +
                alpha_Y * *(b + 465 * OS1_S1 + 2) +
                4 * one_over_two_p *
                    (*(b + 370 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 370 * OS1_S1 + 2));
            *(b + 576 * OS1_S1 + 1) = Z_PA * *(b + 465 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 465 * OS1_S1 + 2);
            *(b + 577 * OS1_S1 + 1) =
                Z_PA * *(b + 466 * OS1_S1 + 1) +
                alpha_Z * *(b + 466 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 370 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 370 * OS1_S1 + 2));
            *(b + 579 * OS1_S1 + 1) = Y_PA * *(b + 469 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 469 * OS1_S1 + 2);
            *(b + 580 * OS1_S1 + 1) =
                Z_PA * *(b + 469 * OS1_S1 + 1) +
                alpha_Z * *(b + 469 * OS1_S1 + 2) +
                4 * one_over_two_p *
                    (*(b + 373 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 373 * OS1_S1 + 2));
            *(b + 581 * OS1_S1 + 1) =
                Y_PA * *(b + 470 * OS1_S1 + 1) +
                alpha_Y * *(b + 470 * OS1_S1 + 2) +
                5 * one_over_two_p *
                    (*(b + 374 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 374 * OS1_S1 + 2));
            *(b + 582 * OS1_S1 + 1) = Z_PA * *(b + 470 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 470 * OS1_S1 + 2);
            *(b + 583 * OS1_S1 + 1) =
                Z_PA * *(b + 471 * OS1_S1 + 1) +
                alpha_Z * *(b + 471 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 374 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 374 * OS1_S1 + 2));
            *(b + 585 * OS1_S1 + 1) =
                Y_PA * *(b + 474 * OS1_S1 + 1) +
                alpha_Y * *(b + 474 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 378 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 378 * OS1_S1 + 2));
            *(b + 586 * OS1_S1 + 1) = Y_PA * *(b + 475 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 475 * OS1_S1 + 2);
            *(b + 587 * OS1_S1 + 1) =
                Z_PA * *(b + 475 * OS1_S1 + 1) +
                alpha_Z * *(b + 475 * OS1_S1 + 2) +
                5 * one_over_two_p *
                    (*(b + 378 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 378 * OS1_S1 + 2));
            *(b + 588 * OS1_S1 + 1) =
                Y_PA * *(b + 476 * OS1_S1 + 1) +
                alpha_Y * *(b + 476 * OS1_S1 + 2) +
                6 * one_over_two_p *
                    (*(b + 379 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 379 * OS1_S1 + 2));
            *(b + 589 * OS1_S1 + 1) = Z_PA * *(b + 476 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 476 * OS1_S1 + 2);
            *(b + 590 * OS1_S1 + 1) =
                Z_PA * *(b + 477 * OS1_S1 + 1) +
                alpha_Z * *(b + 477 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 379 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 379 * OS1_S1 + 2));
            *(b + 591 * OS1_S1 + 1) =
                Z_PA * *(b + 478 * OS1_S1 + 1) +
                alpha_Z * *(b + 478 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 380 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 380 * OS1_S1 + 2));
            *(b + 593 * OS1_S1 + 1) =
                Y_PA * *(b + 481 * OS1_S1 + 1) +
                alpha_Y * *(b + 481 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 384 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 384 * OS1_S1 + 2));
            *(b + 594 * OS1_S1 + 1) = Y_PA * *(b + 482 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 482 * OS1_S1 + 2);
            *(b + 595 * OS1_S1 + 1) =
                Z_PA * *(b + 482 * OS1_S1 + 1) +
                alpha_Z * *(b + 482 * OS1_S1 + 2) +
                6 * one_over_two_p *
                    (*(b + 384 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 384 * OS1_S1 + 2));
            *(b + 596 * OS1_S1 + 1) =
                X_PA * *(b + 491 * OS1_S1 + 1) +
                alpha_X * *(b + 491 * OS1_S1 + 2) +
                5 * one_over_two_p *
                    (*(b + 400 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 400 * OS1_S1 + 2));
            *(b + 597 * OS1_S1 + 1) = Z_PA * *(b + 483 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 483 * OS1_S1 + 2);
            *(b + 598 * OS1_S1 + 1) =
                Z_PA * *(b + 484 * OS1_S1 + 1) +
                alpha_Z * *(b + 484 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 385 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 385 * OS1_S1 + 2));
            *(b + 599 * OS1_S1 + 1) =
                Z_PA * *(b + 485 * OS1_S1 + 1) +
                alpha_Z * *(b + 485 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 386 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 386 * OS1_S1 + 2));
            *(b + 601 * OS1_S1 + 1) =
                Y_PA * *(b + 488 * OS1_S1 + 1) +
                alpha_Y * *(b + 488 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 390 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 390 * OS1_S1 + 2));
            *(b + 602 * OS1_S1 + 1) =
                Y_PA * *(b + 489 * OS1_S1 + 1) +
                alpha_Y * *(b + 489 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 391 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 391 * OS1_S1 + 2));
            *(b + 603 * OS1_S1 + 1) = Y_PA * *(b + 490 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 490 * OS1_S1 + 2);
            *(b + 604 * OS1_S1 + 1) =
                X_PA * *(b + 499 * OS1_S1 + 1) +
                alpha_X * *(b + 499 * OS1_S1 + 2) +
                5 * one_over_two_p *
                    (*(b + 408 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 408 * OS1_S1 + 2));
            *(b + 605 * OS1_S1 + 1) =
                X_PA * *(b + 500 * OS1_S1 + 1) +
                alpha_X * *(b + 500 * OS1_S1 + 2) +
                4 * one_over_two_p *
                    (*(b + 409 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 409 * OS1_S1 + 2));
            *(b + 606 * OS1_S1 + 1) = Z_PA * *(b + 491 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 491 * OS1_S1 + 2);
            *(b + 607 * OS1_S1 + 1) =
                Z_PA * *(b + 492 * OS1_S1 + 1) +
                alpha_Z * *(b + 492 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 392 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 392 * OS1_S1 + 2));
            *(b + 608 * OS1_S1 + 1) =
                Z_PA * *(b + 493 * OS1_S1 + 1) +
                alpha_Z * *(b + 493 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 393 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 393 * OS1_S1 + 2));
            *(b + 609 * OS1_S1 + 1) =
                Z_PA * *(b + 494 * OS1_S1 + 1) +
                alpha_Z * *(b + 494 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 394 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 394 * OS1_S1 + 2));
            *(b + 611 * OS1_S1 + 1) =
                Y_PA * *(b + 497 * OS1_S1 + 1) +
                alpha_Y * *(b + 497 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 398 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 398 * OS1_S1 + 2));
            *(b + 612 * OS1_S1 + 1) =
                Y_PA * *(b + 498 * OS1_S1 + 1) +
                alpha_Y * *(b + 498 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 399 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 399 * OS1_S1 + 2));
            *(b + 613 * OS1_S1 + 1) = Y_PA * *(b + 499 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 499 * OS1_S1 + 2);
            *(b + 614 * OS1_S1 + 1) =
                X_PA * *(b + 509 * OS1_S1 + 1) +
                alpha_X * *(b + 509 * OS1_S1 + 2) +
                4 * one_over_two_p *
                    (*(b + 418 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 418 * OS1_S1 + 2));
            *(b + 615 * OS1_S1 + 1) =
                X_PA * *(b + 510 * OS1_S1 + 1) +
                alpha_X * *(b + 510 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 419 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 419 * OS1_S1 + 2));
            *(b + 616 * OS1_S1 + 1) = Z_PA * *(b + 500 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 500 * OS1_S1 + 2);
            *(b + 617 * OS1_S1 + 1) =
                Z_PA * *(b + 501 * OS1_S1 + 1) +
                alpha_Z * *(b + 501 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 400 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 400 * OS1_S1 + 2));
            *(b + 618 * OS1_S1 + 1) =
                Z_PA * *(b + 502 * OS1_S1 + 1) +
                alpha_Z * *(b + 502 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 401 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 401 * OS1_S1 + 2));
            *(b + 622 * OS1_S1 + 1) =
                Y_PA * *(b + 507 * OS1_S1 + 1) +
                alpha_Y * *(b + 507 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 407 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 407 * OS1_S1 + 2));
            *(b + 623 * OS1_S1 + 1) =
                Y_PA * *(b + 508 * OS1_S1 + 1) +
                alpha_Y * *(b + 508 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 408 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 408 * OS1_S1 + 2));
            *(b + 624 * OS1_S1 + 1) = Y_PA * *(b + 509 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 509 * OS1_S1 + 2);
            *(b + 625 * OS1_S1 + 1) =
                X_PA * *(b + 520 * OS1_S1 + 1) +
                alpha_X * *(b + 520 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 429 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 429 * OS1_S1 + 2));
            *(b + 626 * OS1_S1 + 1) =
                X_PA * *(b + 521 * OS1_S1 + 1) +
                alpha_X * *(b + 521 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 430 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 430 * OS1_S1 + 2));
            *(b + 627 * OS1_S1 + 1) = Z_PA * *(b + 510 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 510 * OS1_S1 + 2);
            *(b + 628 * OS1_S1 + 1) =
                Z_PA * *(b + 511 * OS1_S1 + 1) +
                alpha_Z * *(b + 511 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 409 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 409 * OS1_S1 + 2));
            *(b + 631 * OS1_S1 + 1) =
                X_PA * *(b + 526 * OS1_S1 + 1) +
                alpha_X * *(b + 526 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 435 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 435 * OS1_S1 + 2));
            *(b + 632 * OS1_S1 + 1) =
                X_PA * *(b + 527 * OS1_S1 + 1) +
                alpha_X * *(b + 527 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 436 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 436 * OS1_S1 + 2));
            *(b + 635 * OS1_S1 + 1) =
                Y_PA * *(b + 519 * OS1_S1 + 1) +
                alpha_Y * *(b + 519 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 418 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 418 * OS1_S1 + 2));
            *(b + 636 * OS1_S1 + 1) = Y_PA * *(b + 520 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 520 * OS1_S1 + 2);
            *(b + 637 * OS1_S1 + 1) =
                X_PA * *(b + 532 * OS1_S1 + 1) +
                alpha_X * *(b + 532 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 441 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 441 * OS1_S1 + 2));
            *(b + 638 * OS1_S1 + 1) =
                X_PA * *(b + 533 * OS1_S1 + 1) +
                alpha_X * *(b + 533 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 442 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 442 * OS1_S1 + 2));
            *(b + 639 * OS1_S1 + 1) = Z_PA * *(b + 521 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 521 * OS1_S1 + 2);
            *(b + 642 * OS1_S1 + 1) =
                X_PA * *(b + 537 * OS1_S1 + 1) +
                alpha_X * *(b + 537 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 446 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 446 * OS1_S1 + 2));
            *(b + 643 * OS1_S1 + 1) =
                X_PA * *(b + 538 * OS1_S1 + 1) +
                alpha_X * *(b + 538 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 447 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 447 * OS1_S1 + 2));
            *(b + 644 * OS1_S1 + 1) =
                X_PA * *(b + 539 * OS1_S1 + 1) +
                alpha_X * *(b + 539 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 448 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 448 * OS1_S1 + 2));
            *(b + 645 * OS1_S1 + 1) =
                X_PA * *(b + 540 * OS1_S1 + 1) +
                alpha_X * *(b + 540 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 449 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 449 * OS1_S1 + 2));
            *(b + 646 * OS1_S1 + 1) =
                X_PA * *(b + 541 * OS1_S1 + 1) +
                alpha_X * *(b + 541 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 450 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 450 * OS1_S1 + 2));
            *(b + 649 * OS1_S1 + 1) = Y_PA * *(b + 532 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 532 * OS1_S1 + 2);
            *(b + 650 * OS1_S1 + 1) =
                X_PA * *(b + 545 * OS1_S1 + 1) +
                alpha_X * *(b + 545 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 454 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 454 * OS1_S1 + 2));
            *(b + 651 * OS1_S1 + 1) = X_PA * *(b + 546 * OS1_S1 + 1) +
                                      alpha_X * *(b + 546 * OS1_S1 + 2);
            *(b + 654 * OS1_S1 + 1) = X_PA * *(b + 549 * OS1_S1 + 1) +
                                      alpha_X * *(b + 549 * OS1_S1 + 2);
            *(b + 655 * OS1_S1 + 1) = X_PA * *(b + 550 * OS1_S1 + 1) +
                                      alpha_X * *(b + 550 * OS1_S1 + 2);
            *(b + 656 * OS1_S1 + 1) = X_PA * *(b + 551 * OS1_S1 + 1) +
                                      alpha_X * *(b + 551 * OS1_S1 + 2);
            *(b + 657 * OS1_S1 + 1) = X_PA * *(b + 552 * OS1_S1 + 1) +
                                      alpha_X * *(b + 552 * OS1_S1 + 2);
            *(b + 658 * OS1_S1 + 1) = X_PA * *(b + 553 * OS1_S1 + 1) +
                                      alpha_X * *(b + 553 * OS1_S1 + 2);
            *(b + 659 * OS1_S1 + 1) = X_PA * *(b + 554 * OS1_S1 + 1) +
                                      alpha_X * *(b + 554 * OS1_S1 + 2);
            *(b + 660 * OS1_S1 + 1) = X_PA * *(b + 555 * OS1_S1 + 1) +
                                      alpha_X * *(b + 555 * OS1_S1 + 2);
            *(b + 661 * OS1_S1 + 1) = X_PA * *(b + 556 * OS1_S1 + 1) +
                                      alpha_X * *(b + 556 * OS1_S1 + 2);
            *(b + 664 * OS1_S1 + 1) = X_PA * *(b + 559 * OS1_S1 + 1) +
                                      alpha_X * *(b + 559 * OS1_S1 + 2);
            *(b + 665 * OS1_S1 + 1) =
                Y_PA * *(b + 546 * OS1_S1 + 1) +
                alpha_Y * *(b + 546 * OS1_S1 + 2) +
                13 * one_over_two_p *
                    (*(b + 442 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 442 * OS1_S1 + 2));
            *(b + 666 * OS1_S1 + 1) = Z_PA * *(b + 546 * OS1_S1 + 1) +
                                      alpha_Z * *(b + 546 * OS1_S1 + 2);
            *(b + 667 * OS1_S1 + 1) =
                Z_PA * *(b + 547 * OS1_S1 + 1) +
                alpha_Z * *(b + 547 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 442 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 442 * OS1_S1 + 2));
            *(b + 668 * OS1_S1 + 1) =
                Z_PA * *(b + 548 * OS1_S1 + 1) +
                alpha_Z * *(b + 548 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 443 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 443 * OS1_S1 + 2));
            *(b + 669 * OS1_S1 + 1) =
                Z_PA * *(b + 549 * OS1_S1 + 1) +
                alpha_Z * *(b + 549 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 444 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 444 * OS1_S1 + 2));
            *(b + 670 * OS1_S1 + 1) =
                Z_PA * *(b + 550 * OS1_S1 + 1) +
                alpha_Z * *(b + 550 * OS1_S1 + 2) +
                4 * one_over_two_p *
                    (*(b + 445 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 445 * OS1_S1 + 2));
            *(b + 671 * OS1_S1 + 1) =
                Z_PA * *(b + 551 * OS1_S1 + 1) +
                alpha_Z * *(b + 551 * OS1_S1 + 2) +
                5 * one_over_two_p *
                    (*(b + 446 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 446 * OS1_S1 + 2));
            *(b + 672 * OS1_S1 + 1) =
                Z_PA * *(b + 552 * OS1_S1 + 1) +
                alpha_Z * *(b + 552 * OS1_S1 + 2) +
                6 * one_over_two_p *
                    (*(b + 447 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 447 * OS1_S1 + 2));
            *(b + 673 * OS1_S1 + 1) =
                Y_PA * *(b + 554 * OS1_S1 + 1) +
                alpha_Y * *(b + 554 * OS1_S1 + 2) +
                5 * one_over_two_p *
                    (*(b + 450 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 450 * OS1_S1 + 2));
            *(b + 674 * OS1_S1 + 1) =
                Y_PA * *(b + 555 * OS1_S1 + 1) +
                alpha_Y * *(b + 555 * OS1_S1 + 2) +
                4 * one_over_two_p *
                    (*(b + 451 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 451 * OS1_S1 + 2));
            *(b + 675 * OS1_S1 + 1) =
                Y_PA * *(b + 556 * OS1_S1 + 1) +
                alpha_Y * *(b + 556 * OS1_S1 + 2) +
                3 * one_over_two_p *
                    (*(b + 452 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 452 * OS1_S1 + 2));
            *(b + 676 * OS1_S1 + 1) =
                Y_PA * *(b + 557 * OS1_S1 + 1) +
                alpha_Y * *(b + 557 * OS1_S1 + 2) +
                2 * one_over_two_p *
                    (*(b + 453 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 453 * OS1_S1 + 2));
            *(b + 677 * OS1_S1 + 1) =
                Y_PA * *(b + 558 * OS1_S1 + 1) +
                alpha_Y * *(b + 558 * OS1_S1 + 2) +
                one_over_two_p * (*(b + 454 * OS1_S1 + 1) -
                                  alpha_over_p * *(b + 454 * OS1_S1 + 2));
            *(b + 678 * OS1_S1 + 1) = Y_PA * *(b + 559 * OS1_S1 + 1) +
                                      alpha_Y * *(b + 559 * OS1_S1 + 2);
            *(b + 679 * OS1_S1 + 1) =
                Z_PA * *(b + 559 * OS1_S1 + 1) +
                alpha_Z * *(b + 559 * OS1_S1 + 2) +
                13 * one_over_two_p *
                    (*(b + 454 * OS1_S1 + 1) -
                     alpha_over_p * *(b + 454 * OS1_S1 + 2));
            *(b + 680 * OS1_S1 + 0) =
                X_PA * *(b + 560 * OS1_S1 + 0) +
                alpha_X * *(b + 560 * OS1_S1 + 1) +
                14 * one_over_two_p *
                    (*(b + 455 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 455 * OS1_S1 + 1));
            *(b + 681 * OS1_S1 + 0) = Y_PA * *(b + 560 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 560 * OS1_S1 + 1);
            *(b + 682 * OS1_S1 + 0) = Z_PA * *(b + 560 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 560 * OS1_S1 + 1);
            *(b + 683 * OS1_S1 + 0) =
                Y_PA * *(b + 561 * OS1_S1 + 0) +
                alpha_Y * *(b + 561 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 455 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 455 * OS1_S1 + 1));
            *(b + 684 * OS1_S1 + 0) = Z_PA * *(b + 561 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 561 * OS1_S1 + 1);
            *(b + 685 * OS1_S1 + 0) =
                Z_PA * *(b + 562 * OS1_S1 + 0) +
                alpha_Z * *(b + 562 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 455 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 455 * OS1_S1 + 1));
            *(b + 686 * OS1_S1 + 0) =
                Y_PA * *(b + 563 * OS1_S1 + 0) +
                alpha_Y * *(b + 563 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 456 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 456 * OS1_S1 + 1));
            *(b + 687 * OS1_S1 + 0) = Z_PA * *(b + 563 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 563 * OS1_S1 + 1);
            *(b + 688 * OS1_S1 + 0) = Y_PA * *(b + 565 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 565 * OS1_S1 + 1);
            *(b + 689 * OS1_S1 + 0) =
                Z_PA * *(b + 565 * OS1_S1 + 0) +
                alpha_Z * *(b + 565 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 457 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 457 * OS1_S1 + 1));
            *(b + 690 * OS1_S1 + 0) =
                Y_PA * *(b + 566 * OS1_S1 + 0) +
                alpha_Y * *(b + 566 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 458 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 458 * OS1_S1 + 1));
            *(b + 691 * OS1_S1 + 0) = Z_PA * *(b + 566 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 566 * OS1_S1 + 1);
            *(b + 692 * OS1_S1 + 0) =
                Z_PA * *(b + 567 * OS1_S1 + 0) +
                alpha_Z * *(b + 567 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 458 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 458 * OS1_S1 + 1));
            *(b + 693 * OS1_S1 + 0) = Y_PA * *(b + 569 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 569 * OS1_S1 + 1);
            *(b + 694 * OS1_S1 + 0) =
                Z_PA * *(b + 569 * OS1_S1 + 0) +
                alpha_Z * *(b + 569 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 460 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 460 * OS1_S1 + 1));
            *(b + 695 * OS1_S1 + 0) =
                Y_PA * *(b + 570 * OS1_S1 + 0) +
                alpha_Y * *(b + 570 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 461 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 461 * OS1_S1 + 1));
            *(b + 696 * OS1_S1 + 0) = Z_PA * *(b + 570 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 570 * OS1_S1 + 1);
            *(b + 697 * OS1_S1 + 0) =
                Z_PA * *(b + 571 * OS1_S1 + 0) +
                alpha_Z * *(b + 571 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 461 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 461 * OS1_S1 + 1));
            *(b + 698 * OS1_S1 + 0) =
                Y_PA * *(b + 573 * OS1_S1 + 0) +
                alpha_Y * *(b + 573 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 464 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 464 * OS1_S1 + 1));
            *(b + 699 * OS1_S1 + 0) = Y_PA * *(b + 574 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 574 * OS1_S1 + 1);
            *(b + 700 * OS1_S1 + 0) =
                Z_PA * *(b + 574 * OS1_S1 + 0) +
                alpha_Z * *(b + 574 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 464 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 464 * OS1_S1 + 1));
            *(b + 701 * OS1_S1 + 0) =
                Y_PA * *(b + 575 * OS1_S1 + 0) +
                alpha_Y * *(b + 575 * OS1_S1 + 1) +
                5 * one_over_two_p *
                    (*(b + 465 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 465 * OS1_S1 + 1));
            *(b + 702 * OS1_S1 + 0) = Z_PA * *(b + 575 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 575 * OS1_S1 + 1);
            *(b + 703 * OS1_S1 + 0) =
                Z_PA * *(b + 576 * OS1_S1 + 0) +
                alpha_Z * *(b + 576 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 465 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 465 * OS1_S1 + 1));
            *(b + 704 * OS1_S1 + 0) =
                Z_PA * *(b + 577 * OS1_S1 + 0) +
                alpha_Z * *(b + 577 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 466 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 466 * OS1_S1 + 1));
            *(b + 705 * OS1_S1 + 0) =
                Y_PA * *(b + 579 * OS1_S1 + 0) +
                alpha_Y * *(b + 579 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 469 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 469 * OS1_S1 + 1));
            *(b + 706 * OS1_S1 + 0) = Y_PA * *(b + 580 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 580 * OS1_S1 + 1);
            *(b + 707 * OS1_S1 + 0) =
                Z_PA * *(b + 580 * OS1_S1 + 0) +
                alpha_Z * *(b + 580 * OS1_S1 + 1) +
                5 * one_over_two_p *
                    (*(b + 469 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 469 * OS1_S1 + 1));
            *(b + 708 * OS1_S1 + 0) =
                Y_PA * *(b + 581 * OS1_S1 + 0) +
                alpha_Y * *(b + 581 * OS1_S1 + 1) +
                6 * one_over_two_p *
                    (*(b + 470 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 470 * OS1_S1 + 1));
            *(b + 709 * OS1_S1 + 0) = Z_PA * *(b + 581 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 581 * OS1_S1 + 1);
            *(b + 710 * OS1_S1 + 0) =
                Z_PA * *(b + 582 * OS1_S1 + 0) +
                alpha_Z * *(b + 582 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 470 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 470 * OS1_S1 + 1));
            *(b + 711 * OS1_S1 + 0) =
                Z_PA * *(b + 583 * OS1_S1 + 0) +
                alpha_Z * *(b + 583 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 471 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 471 * OS1_S1 + 1));
            *(b + 712 * OS1_S1 + 0) =
                Y_PA * *(b + 585 * OS1_S1 + 0) +
                alpha_Y * *(b + 585 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 474 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 474 * OS1_S1 + 1));
            *(b + 713 * OS1_S1 + 0) =
                Y_PA * *(b + 586 * OS1_S1 + 0) +
                alpha_Y * *(b + 586 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 475 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 475 * OS1_S1 + 1));
            *(b + 714 * OS1_S1 + 0) = Y_PA * *(b + 587 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 587 * OS1_S1 + 1);
            *(b + 715 * OS1_S1 + 0) =
                Z_PA * *(b + 587 * OS1_S1 + 0) +
                alpha_Z * *(b + 587 * OS1_S1 + 1) +
                6 * one_over_two_p *
                    (*(b + 475 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 475 * OS1_S1 + 1));
            *(b + 716 * OS1_S1 + 0) =
                X_PA * *(b + 596 * OS1_S1 + 0) +
                alpha_X * *(b + 596 * OS1_S1 + 1) +
                6 * one_over_two_p *
                    (*(b + 491 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 491 * OS1_S1 + 1));
            *(b + 717 * OS1_S1 + 0) = Z_PA * *(b + 588 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 588 * OS1_S1 + 1);
            *(b + 718 * OS1_S1 + 0) =
                Z_PA * *(b + 589 * OS1_S1 + 0) +
                alpha_Z * *(b + 589 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 476 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 476 * OS1_S1 + 1));
            *(b + 719 * OS1_S1 + 0) =
                Z_PA * *(b + 590 * OS1_S1 + 0) +
                alpha_Z * *(b + 590 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 477 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 477 * OS1_S1 + 1));
            *(b + 720 * OS1_S1 + 0) =
                Z_PA * *(b + 591 * OS1_S1 + 0) +
                alpha_Z * *(b + 591 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 478 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 478 * OS1_S1 + 1));
            *(b + 721 * OS1_S1 + 0) =
                Y_PA * *(b + 593 * OS1_S1 + 0) +
                alpha_Y * *(b + 593 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 481 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 481 * OS1_S1 + 1));
            *(b + 722 * OS1_S1 + 0) =
                Y_PA * *(b + 594 * OS1_S1 + 0) +
                alpha_Y * *(b + 594 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 482 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 482 * OS1_S1 + 1));
            *(b + 723 * OS1_S1 + 0) = Y_PA * *(b + 595 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 595 * OS1_S1 + 1);
            *(b + 724 * OS1_S1 + 0) =
                X_PA * *(b + 604 * OS1_S1 + 0) +
                alpha_X * *(b + 604 * OS1_S1 + 1) +
                6 * one_over_two_p *
                    (*(b + 499 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 499 * OS1_S1 + 1));
            *(b + 725 * OS1_S1 + 0) =
                X_PA * *(b + 605 * OS1_S1 + 0) +
                alpha_X * *(b + 605 * OS1_S1 + 1) +
                5 * one_over_two_p *
                    (*(b + 500 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 500 * OS1_S1 + 1));
            *(b + 726 * OS1_S1 + 0) = Z_PA * *(b + 596 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 596 * OS1_S1 + 1);
            *(b + 727 * OS1_S1 + 0) =
                Z_PA * *(b + 597 * OS1_S1 + 0) +
                alpha_Z * *(b + 597 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 483 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 483 * OS1_S1 + 1));
            *(b + 728 * OS1_S1 + 0) =
                Z_PA * *(b + 598 * OS1_S1 + 0) +
                alpha_Z * *(b + 598 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 484 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 484 * OS1_S1 + 1));
            *(b + 729 * OS1_S1 + 0) =
                Z_PA * *(b + 599 * OS1_S1 + 0) +
                alpha_Z * *(b + 599 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 485 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 485 * OS1_S1 + 1));
            *(b + 730 * OS1_S1 + 0) =
                Y_PA * *(b + 601 * OS1_S1 + 0) +
                alpha_Y * *(b + 601 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 488 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 488 * OS1_S1 + 1));
            *(b + 731 * OS1_S1 + 0) =
                Y_PA * *(b + 602 * OS1_S1 + 0) +
                alpha_Y * *(b + 602 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 489 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 489 * OS1_S1 + 1));
            *(b + 732 * OS1_S1 + 0) =
                Y_PA * *(b + 603 * OS1_S1 + 0) +
                alpha_Y * *(b + 603 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 490 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 490 * OS1_S1 + 1));
            *(b + 733 * OS1_S1 + 0) = Y_PA * *(b + 604 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 604 * OS1_S1 + 1);
            *(b + 734 * OS1_S1 + 0) =
                X_PA * *(b + 614 * OS1_S1 + 0) +
                alpha_X * *(b + 614 * OS1_S1 + 1) +
                5 * one_over_two_p *
                    (*(b + 509 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 509 * OS1_S1 + 1));
            *(b + 735 * OS1_S1 + 0) =
                X_PA * *(b + 615 * OS1_S1 + 0) +
                alpha_X * *(b + 615 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 510 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 510 * OS1_S1 + 1));
            *(b + 736 * OS1_S1 + 0) = Z_PA * *(b + 605 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 605 * OS1_S1 + 1);
            *(b + 737 * OS1_S1 + 0) =
                Z_PA * *(b + 606 * OS1_S1 + 0) +
                alpha_Z * *(b + 606 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 491 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 491 * OS1_S1 + 1));
            *(b + 738 * OS1_S1 + 0) =
                Z_PA * *(b + 607 * OS1_S1 + 0) +
                alpha_Z * *(b + 607 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 492 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 492 * OS1_S1 + 1));
            *(b + 739 * OS1_S1 + 0) =
                Z_PA * *(b + 608 * OS1_S1 + 0) +
                alpha_Z * *(b + 608 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 493 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 493 * OS1_S1 + 1));
            *(b + 740 * OS1_S1 + 0) =
                Z_PA * *(b + 609 * OS1_S1 + 0) +
                alpha_Z * *(b + 609 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 494 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 494 * OS1_S1 + 1));
            *(b + 741 * OS1_S1 + 0) =
                Y_PA * *(b + 611 * OS1_S1 + 0) +
                alpha_Y * *(b + 611 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 497 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 497 * OS1_S1 + 1));
            *(b + 742 * OS1_S1 + 0) =
                Y_PA * *(b + 612 * OS1_S1 + 0) +
                alpha_Y * *(b + 612 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 498 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 498 * OS1_S1 + 1));
            *(b + 743 * OS1_S1 + 0) =
                Y_PA * *(b + 613 * OS1_S1 + 0) +
                alpha_Y * *(b + 613 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 499 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 499 * OS1_S1 + 1));
            *(b + 744 * OS1_S1 + 0) = Y_PA * *(b + 614 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 614 * OS1_S1 + 1);
            *(b + 745 * OS1_S1 + 0) =
                X_PA * *(b + 625 * OS1_S1 + 0) +
                alpha_X * *(b + 625 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 520 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 520 * OS1_S1 + 1));
            *(b + 746 * OS1_S1 + 0) =
                X_PA * *(b + 626 * OS1_S1 + 0) +
                alpha_X * *(b + 626 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 521 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 521 * OS1_S1 + 1));
            *(b + 747 * OS1_S1 + 0) = Z_PA * *(b + 615 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 615 * OS1_S1 + 1);
            *(b + 748 * OS1_S1 + 0) =
                Z_PA * *(b + 616 * OS1_S1 + 0) +
                alpha_Z * *(b + 616 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 500 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 500 * OS1_S1 + 1));
            *(b + 749 * OS1_S1 + 0) =
                Z_PA * *(b + 617 * OS1_S1 + 0) +
                alpha_Z * *(b + 617 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 501 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 501 * OS1_S1 + 1));
            *(b + 750 * OS1_S1 + 0) =
                Z_PA * *(b + 618 * OS1_S1 + 0) +
                alpha_Z * *(b + 618 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 502 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 502 * OS1_S1 + 1));
            *(b + 751 * OS1_S1 + 0) =
                X_PA * *(b + 631 * OS1_S1 + 0) +
                alpha_X * *(b + 631 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 526 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 526 * OS1_S1 + 1));
            *(b + 752 * OS1_S1 + 0) =
                X_PA * *(b + 632 * OS1_S1 + 0) +
                alpha_X * *(b + 632 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 527 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 527 * OS1_S1 + 1));
            *(b + 753 * OS1_S1 + 0) =
                Y_PA * *(b + 622 * OS1_S1 + 0) +
                alpha_Y * *(b + 622 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 507 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 507 * OS1_S1 + 1));
            *(b + 754 * OS1_S1 + 0) =
                Y_PA * *(b + 623 * OS1_S1 + 0) +
                alpha_Y * *(b + 623 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 508 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 508 * OS1_S1 + 1));
            *(b + 755 * OS1_S1 + 0) =
                Y_PA * *(b + 624 * OS1_S1 + 0) +
                alpha_Y * *(b + 624 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 509 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 509 * OS1_S1 + 1));
            *(b + 756 * OS1_S1 + 0) = Y_PA * *(b + 625 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 625 * OS1_S1 + 1);
            *(b + 757 * OS1_S1 + 0) =
                X_PA * *(b + 637 * OS1_S1 + 0) +
                alpha_X * *(b + 637 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 532 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 532 * OS1_S1 + 1));
            *(b + 758 * OS1_S1 + 0) =
                X_PA * *(b + 638 * OS1_S1 + 0) +
                alpha_X * *(b + 638 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 533 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 533 * OS1_S1 + 1));
            *(b + 759 * OS1_S1 + 0) = Z_PA * *(b + 626 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 626 * OS1_S1 + 1);
            *(b + 760 * OS1_S1 + 0) =
                Z_PA * *(b + 627 * OS1_S1 + 0) +
                alpha_Z * *(b + 627 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 510 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 510 * OS1_S1 + 1));
            *(b + 761 * OS1_S1 + 0) =
                Z_PA * *(b + 628 * OS1_S1 + 0) +
                alpha_Z * *(b + 628 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 511 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 511 * OS1_S1 + 1));
            *(b + 762 * OS1_S1 + 0) =
                X_PA * *(b + 642 * OS1_S1 + 0) +
                alpha_X * *(b + 642 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 537 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 537 * OS1_S1 + 1));
            *(b + 763 * OS1_S1 + 0) =
                X_PA * *(b + 643 * OS1_S1 + 0) +
                alpha_X * *(b + 643 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 538 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 538 * OS1_S1 + 1));
            *(b + 764 * OS1_S1 + 0) =
                X_PA * *(b + 644 * OS1_S1 + 0) +
                alpha_X * *(b + 644 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 539 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 539 * OS1_S1 + 1));
            *(b + 765 * OS1_S1 + 0) =
                X_PA * *(b + 645 * OS1_S1 + 0) +
                alpha_X * *(b + 645 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 540 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 540 * OS1_S1 + 1));
            *(b + 766 * OS1_S1 + 0) =
                X_PA * *(b + 646 * OS1_S1 + 0) +
                alpha_X * *(b + 646 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 541 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 541 * OS1_S1 + 1));
            *(b + 767 * OS1_S1 + 0) =
                Y_PA * *(b + 635 * OS1_S1 + 0) +
                alpha_Y * *(b + 635 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 519 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 519 * OS1_S1 + 1));
            *(b + 768 * OS1_S1 + 0) =
                Y_PA * *(b + 636 * OS1_S1 + 0) +
                alpha_Y * *(b + 636 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 520 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 520 * OS1_S1 + 1));
            *(b + 769 * OS1_S1 + 0) = Y_PA * *(b + 637 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 637 * OS1_S1 + 1);
            *(b + 770 * OS1_S1 + 0) =
                X_PA * *(b + 650 * OS1_S1 + 0) +
                alpha_X * *(b + 650 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 545 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 545 * OS1_S1 + 1));
            *(b + 771 * OS1_S1 + 0) =
                X_PA * *(b + 651 * OS1_S1 + 0) +
                alpha_X * *(b + 651 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 546 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 546 * OS1_S1 + 1));
            *(b + 772 * OS1_S1 + 0) = Z_PA * *(b + 638 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 638 * OS1_S1 + 1);
            *(b + 773 * OS1_S1 + 0) =
                Z_PA * *(b + 639 * OS1_S1 + 0) +
                alpha_Z * *(b + 639 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 521 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 521 * OS1_S1 + 1));
            *(b + 774 * OS1_S1 + 0) =
                X_PA * *(b + 654 * OS1_S1 + 0) +
                alpha_X * *(b + 654 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 549 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 549 * OS1_S1 + 1));
            *(b + 775 * OS1_S1 + 0) =
                X_PA * *(b + 655 * OS1_S1 + 0) +
                alpha_X * *(b + 655 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 550 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 550 * OS1_S1 + 1));
            *(b + 776 * OS1_S1 + 0) =
                X_PA * *(b + 656 * OS1_S1 + 0) +
                alpha_X * *(b + 656 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 551 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 551 * OS1_S1 + 1));
            *(b + 777 * OS1_S1 + 0) =
                X_PA * *(b + 657 * OS1_S1 + 0) +
                alpha_X * *(b + 657 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 552 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 552 * OS1_S1 + 1));
            *(b + 778 * OS1_S1 + 0) =
                X_PA * *(b + 658 * OS1_S1 + 0) +
                alpha_X * *(b + 658 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 553 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 553 * OS1_S1 + 1));
            *(b + 779 * OS1_S1 + 0) =
                X_PA * *(b + 659 * OS1_S1 + 0) +
                alpha_X * *(b + 659 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 554 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 554 * OS1_S1 + 1));
            *(b + 780 * OS1_S1 + 0) =
                X_PA * *(b + 660 * OS1_S1 + 0) +
                alpha_X * *(b + 660 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 555 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 555 * OS1_S1 + 1));
            *(b + 781 * OS1_S1 + 0) =
                X_PA * *(b + 661 * OS1_S1 + 0) +
                alpha_X * *(b + 661 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 556 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 556 * OS1_S1 + 1));
            *(b + 782 * OS1_S1 + 0) =
                Y_PA * *(b + 649 * OS1_S1 + 0) +
                alpha_Y * *(b + 649 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 532 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 532 * OS1_S1 + 1));
            *(b + 783 * OS1_S1 + 0) = Y_PA * *(b + 650 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 650 * OS1_S1 + 1);
            *(b + 784 * OS1_S1 + 0) =
                X_PA * *(b + 664 * OS1_S1 + 0) +
                alpha_X * *(b + 664 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 559 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 559 * OS1_S1 + 1));
            *(b + 785 * OS1_S1 + 0) = X_PA * *(b + 665 * OS1_S1 + 0) +
                                      alpha_X * *(b + 665 * OS1_S1 + 1);
            *(b + 786 * OS1_S1 + 0) = Z_PA * *(b + 651 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 651 * OS1_S1 + 1);
            *(b + 787 * OS1_S1 + 0) = X_PA * *(b + 667 * OS1_S1 + 0) +
                                      alpha_X * *(b + 667 * OS1_S1 + 1);
            *(b + 788 * OS1_S1 + 0) = X_PA * *(b + 668 * OS1_S1 + 0) +
                                      alpha_X * *(b + 668 * OS1_S1 + 1);
            *(b + 789 * OS1_S1 + 0) = X_PA * *(b + 669 * OS1_S1 + 0) +
                                      alpha_X * *(b + 669 * OS1_S1 + 1);
            *(b + 790 * OS1_S1 + 0) = X_PA * *(b + 670 * OS1_S1 + 0) +
                                      alpha_X * *(b + 670 * OS1_S1 + 1);
            *(b + 791 * OS1_S1 + 0) = X_PA * *(b + 671 * OS1_S1 + 0) +
                                      alpha_X * *(b + 671 * OS1_S1 + 1);
            *(b + 792 * OS1_S1 + 0) = X_PA * *(b + 672 * OS1_S1 + 0) +
                                      alpha_X * *(b + 672 * OS1_S1 + 1);
            *(b + 793 * OS1_S1 + 0) = X_PA * *(b + 673 * OS1_S1 + 0) +
                                      alpha_X * *(b + 673 * OS1_S1 + 1);
            *(b + 794 * OS1_S1 + 0) = X_PA * *(b + 674 * OS1_S1 + 0) +
                                      alpha_X * *(b + 674 * OS1_S1 + 1);
            *(b + 795 * OS1_S1 + 0) = X_PA * *(b + 675 * OS1_S1 + 0) +
                                      alpha_X * *(b + 675 * OS1_S1 + 1);
            *(b + 796 * OS1_S1 + 0) = X_PA * *(b + 676 * OS1_S1 + 0) +
                                      alpha_X * *(b + 676 * OS1_S1 + 1);
            *(b + 797 * OS1_S1 + 0) = X_PA * *(b + 677 * OS1_S1 + 0) +
                                      alpha_X * *(b + 677 * OS1_S1 + 1);
            *(b + 798 * OS1_S1 + 0) = Y_PA * *(b + 664 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 664 * OS1_S1 + 1);
            *(b + 799 * OS1_S1 + 0) = X_PA * *(b + 679 * OS1_S1 + 0) +
                                      alpha_X * *(b + 679 * OS1_S1 + 1);
            *(b + 800 * OS1_S1 + 0) =
                Y_PA * *(b + 665 * OS1_S1 + 0) +
                alpha_Y * *(b + 665 * OS1_S1 + 1) +
                14 * one_over_two_p *
                    (*(b + 546 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 546 * OS1_S1 + 1));
            *(b + 801 * OS1_S1 + 0) = Z_PA * *(b + 665 * OS1_S1 + 0) +
                                      alpha_Z * *(b + 665 * OS1_S1 + 1);
            *(b + 802 * OS1_S1 + 0) =
                Z_PA * *(b + 666 * OS1_S1 + 0) +
                alpha_Z * *(b + 666 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 546 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 546 * OS1_S1 + 1));
            *(b + 803 * OS1_S1 + 0) =
                Z_PA * *(b + 667 * OS1_S1 + 0) +
                alpha_Z * *(b + 667 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 547 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 547 * OS1_S1 + 1));
            *(b + 804 * OS1_S1 + 0) =
                Z_PA * *(b + 668 * OS1_S1 + 0) +
                alpha_Z * *(b + 668 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 548 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 548 * OS1_S1 + 1));
            *(b + 805 * OS1_S1 + 0) =
                Z_PA * *(b + 669 * OS1_S1 + 0) +
                alpha_Z * *(b + 669 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 549 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 549 * OS1_S1 + 1));
            *(b + 806 * OS1_S1 + 0) =
                Z_PA * *(b + 670 * OS1_S1 + 0) +
                alpha_Z * *(b + 670 * OS1_S1 + 1) +
                5 * one_over_two_p *
                    (*(b + 550 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 550 * OS1_S1 + 1));
            *(b + 807 * OS1_S1 + 0) =
                Z_PA * *(b + 671 * OS1_S1 + 0) +
                alpha_Z * *(b + 671 * OS1_S1 + 1) +
                6 * one_over_two_p *
                    (*(b + 551 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 551 * OS1_S1 + 1));
            *(b + 808 * OS1_S1 + 0) =
                Y_PA * *(b + 673 * OS1_S1 + 0) +
                alpha_Y * *(b + 673 * OS1_S1 + 1) +
                6 * one_over_two_p *
                    (*(b + 554 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 554 * OS1_S1 + 1));
            *(b + 809 * OS1_S1 + 0) =
                Y_PA * *(b + 674 * OS1_S1 + 0) +
                alpha_Y * *(b + 674 * OS1_S1 + 1) +
                5 * one_over_two_p *
                    (*(b + 555 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 555 * OS1_S1 + 1));
            *(b + 810 * OS1_S1 + 0) =
                Y_PA * *(b + 675 * OS1_S1 + 0) +
                alpha_Y * *(b + 675 * OS1_S1 + 1) +
                4 * one_over_two_p *
                    (*(b + 556 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 556 * OS1_S1 + 1));
            *(b + 811 * OS1_S1 + 0) =
                Y_PA * *(b + 676 * OS1_S1 + 0) +
                alpha_Y * *(b + 676 * OS1_S1 + 1) +
                3 * one_over_two_p *
                    (*(b + 557 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 557 * OS1_S1 + 1));
            *(b + 812 * OS1_S1 + 0) =
                Y_PA * *(b + 677 * OS1_S1 + 0) +
                alpha_Y * *(b + 677 * OS1_S1 + 1) +
                2 * one_over_two_p *
                    (*(b + 558 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 558 * OS1_S1 + 1));
            *(b + 813 * OS1_S1 + 0) =
                Y_PA * *(b + 678 * OS1_S1 + 0) +
                alpha_Y * *(b + 678 * OS1_S1 + 1) +
                one_over_two_p * (*(b + 559 * OS1_S1 + 0) -
                                  alpha_over_p * *(b + 559 * OS1_S1 + 1));
            *(b + 814 * OS1_S1 + 0) = Y_PA * *(b + 679 * OS1_S1 + 0) +
                                      alpha_Y * *(b + 679 * OS1_S1 + 1);
            *(b + 815 * OS1_S1 + 0) =
                Z_PA * *(b + 679 * OS1_S1 + 0) +
                alpha_Z * *(b + 679 * OS1_S1 + 1) +
                14 * one_over_two_p *
                    (*(b + 559 * OS1_S1 + 0) -
                     alpha_over_p * *(b + 559 * OS1_S1 + 1));
            if (m > 15) {
                *(b + 1 * OS1_S1 + 15) = X_PA * *(b + 0 * OS1_S1 + 15) +
                                         alpha_X * *(b + 0 * OS1_S1 + 16);
                *(b + 2 * OS1_S1 + 15) = Y_PA * *(b + 0 * OS1_S1 + 15) +
                                         alpha_Y * *(b + 0 * OS1_S1 + 16);
                *(b + 3 * OS1_S1 + 15) = Z_PA * *(b + 0 * OS1_S1 + 15) +
                                         alpha_Z * *(b + 0 * OS1_S1 + 16);
                *(b + 4 * OS1_S1 + 14) =
                    X_PA * *(b + 1 * OS1_S1 + 14) +
                    alpha_X * *(b + 1 * OS1_S1 + 15) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 14) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 15));
                *(b + 7 * OS1_S1 + 14) =
                    Y_PA * *(b + 2 * OS1_S1 + 14) +
                    alpha_Y * *(b + 2 * OS1_S1 + 15) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 14) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 15));
                *(b + 9 * OS1_S1 + 14) =
                    Z_PA * *(b + 3 * OS1_S1 + 14) +
                    alpha_Z * *(b + 3 * OS1_S1 + 15) +
                    one_over_two_p * (*(b + 0 * OS1_S1 + 14) -
                                      alpha_over_p * *(b + 0 * OS1_S1 + 15));
                *(b + 10 * OS1_S1 + 13) =
                    X_PA * *(b + 4 * OS1_S1 + 13) +
                    alpha_X * *(b + 4 * OS1_S1 + 14) +
                    2 * one_over_two_p *
                        (*(b + 1 * OS1_S1 + 13) -
                         alpha_over_p * *(b + 1 * OS1_S1 + 14));
                *(b + 16 * OS1_S1 + 13) =
                    Y_PA * *(b + 7 * OS1_S1 + 13) +
                    alpha_Y * *(b + 7 * OS1_S1 + 14) +
                    2 * one_over_two_p *
                        (*(b + 2 * OS1_S1 + 13) -
                         alpha_over_p * *(b + 2 * OS1_S1 + 14));
                *(b + 19 * OS1_S1 + 13) =
                    Z_PA * *(b + 9 * OS1_S1 + 13) +
                    alpha_Z * *(b + 9 * OS1_S1 + 14) +
                    2 * one_over_two_p *
                        (*(b + 3 * OS1_S1 + 13) -
                         alpha_over_p * *(b + 3 * OS1_S1 + 14));
                *(b + 20 * OS1_S1 + 12) =
                    X_PA * *(b + 10 * OS1_S1 + 12) +
                    alpha_X * *(b + 10 * OS1_S1 + 13) +
                    3 * one_over_two_p *
                        (*(b + 4 * OS1_S1 + 12) -
                         alpha_over_p * *(b + 4 * OS1_S1 + 13));
                *(b + 30 * OS1_S1 + 12) =
                    Y_PA * *(b + 16 * OS1_S1 + 12) +
                    alpha_Y * *(b + 16 * OS1_S1 + 13) +
                    3 * one_over_two_p *
                        (*(b + 7 * OS1_S1 + 12) -
                         alpha_over_p * *(b + 7 * OS1_S1 + 13));
                *(b + 34 * OS1_S1 + 12) =
                    Z_PA * *(b + 19 * OS1_S1 + 12) +
                    alpha_Z * *(b + 19 * OS1_S1 + 13) +
                    3 * one_over_two_p *
                        (*(b + 9 * OS1_S1 + 12) -
                         alpha_over_p * *(b + 9 * OS1_S1 + 13));
                *(b + 35 * OS1_S1 + 11) =
                    X_PA * *(b + 20 * OS1_S1 + 11) +
                    alpha_X * *(b + 20 * OS1_S1 + 12) +
                    4 * one_over_two_p *
                        (*(b + 10 * OS1_S1 + 11) -
                         alpha_over_p * *(b + 10 * OS1_S1 + 12));
                *(b + 50 * OS1_S1 + 11) =
                    Y_PA * *(b + 30 * OS1_S1 + 11) +
                    alpha_Y * *(b + 30 * OS1_S1 + 12) +
                    4 * one_over_two_p *
                        (*(b + 16 * OS1_S1 + 11) -
                         alpha_over_p * *(b + 16 * OS1_S1 + 12));
                *(b + 55 * OS1_S1 + 11) =
                    Z_PA * *(b + 34 * OS1_S1 + 11) +
                    alpha_Z * *(b + 34 * OS1_S1 + 12) +
                    4 * one_over_two_p *
                        (*(b + 19 * OS1_S1 + 11) -
                         alpha_over_p * *(b + 19 * OS1_S1 + 12));
                *(b + 56 * OS1_S1 + 10) =
                    X_PA * *(b + 35 * OS1_S1 + 10) +
                    alpha_X * *(b + 35 * OS1_S1 + 11) +
                    5 * one_over_two_p *
                        (*(b + 20 * OS1_S1 + 10) -
                         alpha_over_p * *(b + 20 * OS1_S1 + 11));
                *(b + 77 * OS1_S1 + 10) =
                    Y_PA * *(b + 50 * OS1_S1 + 10) +
                    alpha_Y * *(b + 50 * OS1_S1 + 11) +
                    5 * one_over_two_p *
                        (*(b + 30 * OS1_S1 + 10) -
                         alpha_over_p * *(b + 30 * OS1_S1 + 11));
                *(b + 83 * OS1_S1 + 10) =
                    Z_PA * *(b + 55 * OS1_S1 + 10) +
                    alpha_Z * *(b + 55 * OS1_S1 + 11) +
                    5 * one_over_two_p *
                        (*(b + 34 * OS1_S1 + 10) -
                         alpha_over_p * *(b + 34 * OS1_S1 + 11));
                *(b + 84 * OS1_S1 + 9) =
                    X_PA * *(b + 56 * OS1_S1 + 9) +
                    alpha_X * *(b + 56 * OS1_S1 + 10) +
                    6 * one_over_two_p *
                        (*(b + 35 * OS1_S1 + 9) -
                         alpha_over_p * *(b + 35 * OS1_S1 + 10));
                *(b + 85 * OS1_S1 + 9) = Y_PA * *(b + 56 * OS1_S1 + 9) +
                                         alpha_Y * *(b + 56 * OS1_S1 + 10);
                *(b + 86 * OS1_S1 + 9) = Z_PA * *(b + 56 * OS1_S1 + 9) +
                                         alpha_Z * *(b + 56 * OS1_S1 + 10);
                *(b + 105 * OS1_S1 + 9) = X_PA * *(b + 77 * OS1_S1 + 9) +
                                          alpha_X * *(b + 77 * OS1_S1 + 10);
                *(b + 111 * OS1_S1 + 9) = X_PA * *(b + 83 * OS1_S1 + 9) +
                                          alpha_X * *(b + 83 * OS1_S1 + 10);
                *(b + 112 * OS1_S1 + 9) =
                    Y_PA * *(b + 77 * OS1_S1 + 9) +
                    alpha_Y * *(b + 77 * OS1_S1 + 10) +
                    6 * one_over_two_p *
                        (*(b + 50 * OS1_S1 + 9) -
                         alpha_over_p * *(b + 50 * OS1_S1 + 10));
                *(b + 113 * OS1_S1 + 9) = Z_PA * *(b + 77 * OS1_S1 + 9) +
                                          alpha_Z * *(b + 77 * OS1_S1 + 10);
                *(b + 119 * OS1_S1 + 9) =
                    Z_PA * *(b + 83 * OS1_S1 + 9) +
                    alpha_Z * *(b + 83 * OS1_S1 + 10) +
                    6 * one_over_two_p *
                        (*(b + 55 * OS1_S1 + 9) -
                         alpha_over_p * *(b + 55 * OS1_S1 + 10));
                *(b + 120 * OS1_S1 + 8) =
                    X_PA * *(b + 84 * OS1_S1 + 8) +
                    alpha_X * *(b + 84 * OS1_S1 + 9) +
                    7 * one_over_two_p *
                        (*(b + 56 * OS1_S1 + 8) -
                         alpha_over_p * *(b + 56 * OS1_S1 + 9));
                *(b + 121 * OS1_S1 + 8) = Y_PA * *(b + 84 * OS1_S1 + 8) +
                                          alpha_Y * *(b + 84 * OS1_S1 + 9);
                *(b + 122 * OS1_S1 + 8) = Z_PA * *(b + 84 * OS1_S1 + 8) +
                                          alpha_Z * *(b + 84 * OS1_S1 + 9);
                *(b + 123 * OS1_S1 + 8) =
                    Y_PA * *(b + 85 * OS1_S1 + 8) +
                    alpha_Y * *(b + 85 * OS1_S1 + 9) +
                    one_over_two_p * (*(b + 56 * OS1_S1 + 8) -
                                      alpha_over_p * *(b + 56 * OS1_S1 + 9));
                *(b + 125 * OS1_S1 + 8) =
                    Z_PA * *(b + 86 * OS1_S1 + 8) +
                    alpha_Z * *(b + 86 * OS1_S1 + 9) +
                    one_over_two_p * (*(b + 56 * OS1_S1 + 8) -
                                      alpha_over_p * *(b + 56 * OS1_S1 + 9));
                *(b + 141 * OS1_S1 + 8) =
                    X_PA * *(b + 105 * OS1_S1 + 8) +
                    alpha_X * *(b + 105 * OS1_S1 + 9) +
                    one_over_two_p * (*(b + 77 * OS1_S1 + 8) -
                                      alpha_over_p * *(b + 77 * OS1_S1 + 9));
                *(b + 147 * OS1_S1 + 8) =
                    X_PA * *(b + 111 * OS1_S1 + 8) +
                    alpha_X * *(b + 111 * OS1_S1 + 9) +
                    one_over_two_p * (*(b + 83 * OS1_S1 + 8) -
                                      alpha_over_p * *(b + 83 * OS1_S1 + 9));
                *(b + 148 * OS1_S1 + 8) = X_PA * *(b + 112 * OS1_S1 + 8) +
                                          alpha_X * *(b + 112 * OS1_S1 + 9);
                *(b + 155 * OS1_S1 + 8) = X_PA * *(b + 119 * OS1_S1 + 8) +
                                          alpha_X * *(b + 119 * OS1_S1 + 9);
                *(b + 156 * OS1_S1 + 8) =
                    Y_PA * *(b + 112 * OS1_S1 + 8) +
                    alpha_Y * *(b + 112 * OS1_S1 + 9) +
                    7 * one_over_two_p *
                        (*(b + 77 * OS1_S1 + 8) -
                         alpha_over_p * *(b + 77 * OS1_S1 + 9));
                *(b + 157 * OS1_S1 + 8) = Z_PA * *(b + 112 * OS1_S1 + 8) +
                                          alpha_Z * *(b + 112 * OS1_S1 + 9);
                *(b + 158 * OS1_S1 + 8) =
                    Z_PA * *(b + 113 * OS1_S1 + 8) +
                    alpha_Z * *(b + 113 * OS1_S1 + 9) +
                    one_over_two_p * (*(b + 77 * OS1_S1 + 8) -
                                      alpha_over_p * *(b + 77 * OS1_S1 + 9));
                *(b + 163 * OS1_S1 + 8) = Y_PA * *(b + 119 * OS1_S1 + 8) +
                                          alpha_Y * *(b + 119 * OS1_S1 + 9);
                *(b + 164 * OS1_S1 + 8) =
                    Z_PA * *(b + 119 * OS1_S1 + 8) +
                    alpha_Z * *(b + 119 * OS1_S1 + 9) +
                    7 * one_over_two_p *
                        (*(b + 83 * OS1_S1 + 8) -
                         alpha_over_p * *(b + 83 * OS1_S1 + 9));
                *(b + 165 * OS1_S1 + 7) =
                    X_PA * *(b + 120 * OS1_S1 + 7) +
                    alpha_X * *(b + 120 * OS1_S1 + 8) +
                    8 * one_over_two_p *
                        (*(b + 84 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 84 * OS1_S1 + 8));
                *(b + 166 * OS1_S1 + 7) = Y_PA * *(b + 120 * OS1_S1 + 7) +
                                          alpha_Y * *(b + 120 * OS1_S1 + 8);
                *(b + 167 * OS1_S1 + 7) = Z_PA * *(b + 120 * OS1_S1 + 7) +
                                          alpha_Z * *(b + 120 * OS1_S1 + 8);
                *(b + 168 * OS1_S1 + 7) =
                    Y_PA * *(b + 121 * OS1_S1 + 7) +
                    alpha_Y * *(b + 121 * OS1_S1 + 8) +
                    one_over_two_p * (*(b + 84 * OS1_S1 + 7) -
                                      alpha_over_p * *(b + 84 * OS1_S1 + 8));
                *(b + 170 * OS1_S1 + 7) =
                    Z_PA * *(b + 122 * OS1_S1 + 7) +
                    alpha_Z * *(b + 122 * OS1_S1 + 8) +
                    one_over_two_p * (*(b + 84 * OS1_S1 + 7) -
                                      alpha_over_p * *(b + 84 * OS1_S1 + 8));
                *(b + 171 * OS1_S1 + 7) =
                    Y_PA * *(b + 123 * OS1_S1 + 7) +
                    alpha_Y * *(b + 123 * OS1_S1 + 8) +
                    2 * one_over_two_p *
                        (*(b + 85 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 85 * OS1_S1 + 8));
                *(b + 174 * OS1_S1 + 7) =
                    Z_PA * *(b + 125 * OS1_S1 + 7) +
                    alpha_Z * *(b + 125 * OS1_S1 + 8) +
                    2 * one_over_two_p *
                        (*(b + 86 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 86 * OS1_S1 + 8));
                *(b + 186 * OS1_S1 + 7) =
                    X_PA * *(b + 141 * OS1_S1 + 7) +
                    alpha_X * *(b + 141 * OS1_S1 + 8) +
                    2 * one_over_two_p *
                        (*(b + 105 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 105 * OS1_S1 + 8));
                *(b + 192 * OS1_S1 + 7) =
                    X_PA * *(b + 147 * OS1_S1 + 7) +
                    alpha_X * *(b + 147 * OS1_S1 + 8) +
                    2 * one_over_two_p *
                        (*(b + 111 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 111 * OS1_S1 + 8));
                *(b + 193 * OS1_S1 + 7) =
                    X_PA * *(b + 148 * OS1_S1 + 7) +
                    alpha_X * *(b + 148 * OS1_S1 + 8) +
                    one_over_two_p * (*(b + 112 * OS1_S1 + 7) -
                                      alpha_over_p * *(b + 112 * OS1_S1 + 8));
                *(b + 200 * OS1_S1 + 7) =
                    X_PA * *(b + 155 * OS1_S1 + 7) +
                    alpha_X * *(b + 155 * OS1_S1 + 8) +
                    one_over_two_p * (*(b + 119 * OS1_S1 + 7) -
                                      alpha_over_p * *(b + 119 * OS1_S1 + 8));
                *(b + 201 * OS1_S1 + 7) = X_PA * *(b + 156 * OS1_S1 + 7) +
                                          alpha_X * *(b + 156 * OS1_S1 + 8);
                *(b + 209 * OS1_S1 + 7) = X_PA * *(b + 164 * OS1_S1 + 7) +
                                          alpha_X * *(b + 164 * OS1_S1 + 8);
                *(b + 210 * OS1_S1 + 7) =
                    Y_PA * *(b + 156 * OS1_S1 + 7) +
                    alpha_Y * *(b + 156 * OS1_S1 + 8) +
                    8 * one_over_two_p *
                        (*(b + 112 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 112 * OS1_S1 + 8));
                *(b + 211 * OS1_S1 + 7) = Z_PA * *(b + 156 * OS1_S1 + 7) +
                                          alpha_Z * *(b + 156 * OS1_S1 + 8);
                *(b + 212 * OS1_S1 + 7) =
                    Z_PA * *(b + 157 * OS1_S1 + 7) +
                    alpha_Z * *(b + 157 * OS1_S1 + 8) +
                    one_over_two_p * (*(b + 112 * OS1_S1 + 7) -
                                      alpha_over_p * *(b + 112 * OS1_S1 + 8));
                *(b + 213 * OS1_S1 + 7) =
                    Z_PA * *(b + 158 * OS1_S1 + 7) +
                    alpha_Z * *(b + 158 * OS1_S1 + 8) +
                    2 * one_over_two_p *
                        (*(b + 113 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 113 * OS1_S1 + 8));
                *(b + 217 * OS1_S1 + 7) =
                    Y_PA * *(b + 163 * OS1_S1 + 7) +
                    alpha_Y * *(b + 163 * OS1_S1 + 8) +
                    one_over_two_p * (*(b + 119 * OS1_S1 + 7) -
                                      alpha_over_p * *(b + 119 * OS1_S1 + 8));
                *(b + 218 * OS1_S1 + 7) = Y_PA * *(b + 164 * OS1_S1 + 7) +
                                          alpha_Y * *(b + 164 * OS1_S1 + 8);
                *(b + 219 * OS1_S1 + 7) =
                    Z_PA * *(b + 164 * OS1_S1 + 7) +
                    alpha_Z * *(b + 164 * OS1_S1 + 8) +
                    8 * one_over_two_p *
                        (*(b + 119 * OS1_S1 + 7) -
                         alpha_over_p * *(b + 119 * OS1_S1 + 8));
                *(b + 220 * OS1_S1 + 6) =
                    X_PA * *(b + 165 * OS1_S1 + 6) +
                    alpha_X * *(b + 165 * OS1_S1 + 7) +
                    9 * one_over_two_p *
                        (*(b + 120 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 120 * OS1_S1 + 7));
                *(b + 221 * OS1_S1 + 6) = Y_PA * *(b + 165 * OS1_S1 + 6) +
                                          alpha_Y * *(b + 165 * OS1_S1 + 7);
                *(b + 222 * OS1_S1 + 6) = Z_PA * *(b + 165 * OS1_S1 + 6) +
                                          alpha_Z * *(b + 165 * OS1_S1 + 7);
                *(b + 223 * OS1_S1 + 6) =
                    Y_PA * *(b + 166 * OS1_S1 + 6) +
                    alpha_Y * *(b + 166 * OS1_S1 + 7) +
                    one_over_two_p * (*(b + 120 * OS1_S1 + 6) -
                                      alpha_over_p * *(b + 120 * OS1_S1 + 7));
                *(b + 225 * OS1_S1 + 6) =
                    Z_PA * *(b + 167 * OS1_S1 + 6) +
                    alpha_Z * *(b + 167 * OS1_S1 + 7) +
                    one_over_two_p * (*(b + 120 * OS1_S1 + 6) -
                                      alpha_over_p * *(b + 120 * OS1_S1 + 7));
                *(b + 226 * OS1_S1 + 6) =
                    Y_PA * *(b + 168 * OS1_S1 + 6) +
                    alpha_Y * *(b + 168 * OS1_S1 + 7) +
                    2 * one_over_two_p *
                        (*(b + 121 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 121 * OS1_S1 + 7));
                *(b + 229 * OS1_S1 + 6) =
                    Z_PA * *(b + 170 * OS1_S1 + 6) +
                    alpha_Z * *(b + 170 * OS1_S1 + 7) +
                    2 * one_over_two_p *
                        (*(b + 122 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 122 * OS1_S1 + 7));
                *(b + 230 * OS1_S1 + 6) =
                    Y_PA * *(b + 171 * OS1_S1 + 6) +
                    alpha_Y * *(b + 171 * OS1_S1 + 7) +
                    3 * one_over_two_p *
                        (*(b + 123 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 123 * OS1_S1 + 7));
                *(b + 234 * OS1_S1 + 6) =
                    Z_PA * *(b + 174 * OS1_S1 + 6) +
                    alpha_Z * *(b + 174 * OS1_S1 + 7) +
                    3 * one_over_two_p *
                        (*(b + 125 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 125 * OS1_S1 + 7));
                *(b + 241 * OS1_S1 + 6) =
                    X_PA * *(b + 186 * OS1_S1 + 6) +
                    alpha_X * *(b + 186 * OS1_S1 + 7) +
                    3 * one_over_two_p *
                        (*(b + 141 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 141 * OS1_S1 + 7));
                *(b + 247 * OS1_S1 + 6) =
                    X_PA * *(b + 192 * OS1_S1 + 6) +
                    alpha_X * *(b + 192 * OS1_S1 + 7) +
                    3 * one_over_two_p *
                        (*(b + 147 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 147 * OS1_S1 + 7));
                *(b + 248 * OS1_S1 + 6) =
                    X_PA * *(b + 193 * OS1_S1 + 6) +
                    alpha_X * *(b + 193 * OS1_S1 + 7) +
                    2 * one_over_two_p *
                        (*(b + 148 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 148 * OS1_S1 + 7));
                *(b + 255 * OS1_S1 + 6) =
                    X_PA * *(b + 200 * OS1_S1 + 6) +
                    alpha_X * *(b + 200 * OS1_S1 + 7) +
                    2 * one_over_two_p *
                        (*(b + 155 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 155 * OS1_S1 + 7));
                *(b + 256 * OS1_S1 + 6) =
                    X_PA * *(b + 201 * OS1_S1 + 6) +
                    alpha_X * *(b + 201 * OS1_S1 + 7) +
                    one_over_two_p * (*(b + 156 * OS1_S1 + 6) -
                                      alpha_over_p * *(b + 156 * OS1_S1 + 7));
                *(b + 264 * OS1_S1 + 6) =
                    X_PA * *(b + 209 * OS1_S1 + 6) +
                    alpha_X * *(b + 209 * OS1_S1 + 7) +
                    one_over_two_p * (*(b + 164 * OS1_S1 + 6) -
                                      alpha_over_p * *(b + 164 * OS1_S1 + 7));
                *(b + 265 * OS1_S1 + 6) = X_PA * *(b + 210 * OS1_S1 + 6) +
                                          alpha_X * *(b + 210 * OS1_S1 + 7);
                *(b + 274 * OS1_S1 + 6) = X_PA * *(b + 219 * OS1_S1 + 6) +
                                          alpha_X * *(b + 219 * OS1_S1 + 7);
                *(b + 275 * OS1_S1 + 6) =
                    Y_PA * *(b + 210 * OS1_S1 + 6) +
                    alpha_Y * *(b + 210 * OS1_S1 + 7) +
                    9 * one_over_two_p *
                        (*(b + 156 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 156 * OS1_S1 + 7));
                *(b + 276 * OS1_S1 + 6) = Z_PA * *(b + 210 * OS1_S1 + 6) +
                                          alpha_Z * *(b + 210 * OS1_S1 + 7);
                *(b + 277 * OS1_S1 + 6) =
                    Z_PA * *(b + 211 * OS1_S1 + 6) +
                    alpha_Z * *(b + 211 * OS1_S1 + 7) +
                    one_over_two_p * (*(b + 156 * OS1_S1 + 6) -
                                      alpha_over_p * *(b + 156 * OS1_S1 + 7));
                *(b + 278 * OS1_S1 + 6) =
                    Z_PA * *(b + 212 * OS1_S1 + 6) +
                    alpha_Z * *(b + 212 * OS1_S1 + 7) +
                    2 * one_over_two_p *
                        (*(b + 157 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 157 * OS1_S1 + 7));
                *(b + 279 * OS1_S1 + 6) =
                    Z_PA * *(b + 213 * OS1_S1 + 6) +
                    alpha_Z * *(b + 213 * OS1_S1 + 7) +
                    3 * one_over_two_p *
                        (*(b + 158 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 158 * OS1_S1 + 7));
                *(b + 282 * OS1_S1 + 6) =
                    Y_PA * *(b + 217 * OS1_S1 + 6) +
                    alpha_Y * *(b + 217 * OS1_S1 + 7) +
                    2 * one_over_two_p *
                        (*(b + 163 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 163 * OS1_S1 + 7));
                *(b + 283 * OS1_S1 + 6) =
                    Y_PA * *(b + 218 * OS1_S1 + 6) +
                    alpha_Y * *(b + 218 * OS1_S1 + 7) +
                    one_over_two_p * (*(b + 164 * OS1_S1 + 6) -
                                      alpha_over_p * *(b + 164 * OS1_S1 + 7));
                *(b + 284 * OS1_S1 + 6) = Y_PA * *(b + 219 * OS1_S1 + 6) +
                                          alpha_Y * *(b + 219 * OS1_S1 + 7);
                *(b + 285 * OS1_S1 + 6) =
                    Z_PA * *(b + 219 * OS1_S1 + 6) +
                    alpha_Z * *(b + 219 * OS1_S1 + 7) +
                    9 * one_over_two_p *
                        (*(b + 164 * OS1_S1 + 6) -
                         alpha_over_p * *(b + 164 * OS1_S1 + 7));
                *(b + 286 * OS1_S1 + 5) =
                    X_PA * *(b + 220 * OS1_S1 + 5) +
                    alpha_X * *(b + 220 * OS1_S1 + 6) +
                    10 * one_over_two_p *
                        (*(b + 165 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 165 * OS1_S1 + 6));
                *(b + 287 * OS1_S1 + 5) = Y_PA * *(b + 220 * OS1_S1 + 5) +
                                          alpha_Y * *(b + 220 * OS1_S1 + 6);
                *(b + 288 * OS1_S1 + 5) = Z_PA * *(b + 220 * OS1_S1 + 5) +
                                          alpha_Z * *(b + 220 * OS1_S1 + 6);
                *(b + 289 * OS1_S1 + 5) =
                    Y_PA * *(b + 221 * OS1_S1 + 5) +
                    alpha_Y * *(b + 221 * OS1_S1 + 6) +
                    one_over_two_p * (*(b + 165 * OS1_S1 + 5) -
                                      alpha_over_p * *(b + 165 * OS1_S1 + 6));
                *(b + 291 * OS1_S1 + 5) =
                    Z_PA * *(b + 222 * OS1_S1 + 5) +
                    alpha_Z * *(b + 222 * OS1_S1 + 6) +
                    one_over_two_p * (*(b + 165 * OS1_S1 + 5) -
                                      alpha_over_p * *(b + 165 * OS1_S1 + 6));
                *(b + 292 * OS1_S1 + 5) =
                    Y_PA * *(b + 223 * OS1_S1 + 5) +
                    alpha_Y * *(b + 223 * OS1_S1 + 6) +
                    2 * one_over_two_p *
                        (*(b + 166 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 166 * OS1_S1 + 6));
                *(b + 295 * OS1_S1 + 5) =
                    Z_PA * *(b + 225 * OS1_S1 + 5) +
                    alpha_Z * *(b + 225 * OS1_S1 + 6) +
                    2 * one_over_two_p *
                        (*(b + 167 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 167 * OS1_S1 + 6));
                *(b + 296 * OS1_S1 + 5) =
                    Y_PA * *(b + 226 * OS1_S1 + 5) +
                    alpha_Y * *(b + 226 * OS1_S1 + 6) +
                    3 * one_over_two_p *
                        (*(b + 168 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 168 * OS1_S1 + 6));
                *(b + 300 * OS1_S1 + 5) =
                    Z_PA * *(b + 229 * OS1_S1 + 5) +
                    alpha_Z * *(b + 229 * OS1_S1 + 6) +
                    3 * one_over_two_p *
                        (*(b + 170 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 170 * OS1_S1 + 6));
                *(b + 301 * OS1_S1 + 5) =
                    Y_PA * *(b + 230 * OS1_S1 + 5) +
                    alpha_Y * *(b + 230 * OS1_S1 + 6) +
                    4 * one_over_two_p *
                        (*(b + 171 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 171 * OS1_S1 + 6));
                *(b + 306 * OS1_S1 + 5) =
                    Z_PA * *(b + 234 * OS1_S1 + 5) +
                    alpha_Z * *(b + 234 * OS1_S1 + 6) +
                    4 * one_over_two_p *
                        (*(b + 174 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 174 * OS1_S1 + 6));
                *(b + 307 * OS1_S1 + 5) =
                    X_PA * *(b + 241 * OS1_S1 + 5) +
                    alpha_X * *(b + 241 * OS1_S1 + 6) +
                    4 * one_over_two_p *
                        (*(b + 186 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 186 * OS1_S1 + 6));
                *(b + 313 * OS1_S1 + 5) =
                    X_PA * *(b + 247 * OS1_S1 + 5) +
                    alpha_X * *(b + 247 * OS1_S1 + 6) +
                    4 * one_over_two_p *
                        (*(b + 192 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 192 * OS1_S1 + 6));
                *(b + 314 * OS1_S1 + 5) =
                    X_PA * *(b + 248 * OS1_S1 + 5) +
                    alpha_X * *(b + 248 * OS1_S1 + 6) +
                    3 * one_over_two_p *
                        (*(b + 193 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 193 * OS1_S1 + 6));
                *(b + 321 * OS1_S1 + 5) =
                    X_PA * *(b + 255 * OS1_S1 + 5) +
                    alpha_X * *(b + 255 * OS1_S1 + 6) +
                    3 * one_over_two_p *
                        (*(b + 200 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 200 * OS1_S1 + 6));
                *(b + 322 * OS1_S1 + 5) =
                    X_PA * *(b + 256 * OS1_S1 + 5) +
                    alpha_X * *(b + 256 * OS1_S1 + 6) +
                    2 * one_over_two_p *
                        (*(b + 201 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 201 * OS1_S1 + 6));
                *(b + 330 * OS1_S1 + 5) =
                    X_PA * *(b + 264 * OS1_S1 + 5) +
                    alpha_X * *(b + 264 * OS1_S1 + 6) +
                    2 * one_over_two_p *
                        (*(b + 209 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 209 * OS1_S1 + 6));
                *(b + 331 * OS1_S1 + 5) =
                    X_PA * *(b + 265 * OS1_S1 + 5) +
                    alpha_X * *(b + 265 * OS1_S1 + 6) +
                    one_over_two_p * (*(b + 210 * OS1_S1 + 5) -
                                      alpha_over_p * *(b + 210 * OS1_S1 + 6));
                *(b + 340 * OS1_S1 + 5) =
                    X_PA * *(b + 274 * OS1_S1 + 5) +
                    alpha_X * *(b + 274 * OS1_S1 + 6) +
                    one_over_two_p * (*(b + 219 * OS1_S1 + 5) -
                                      alpha_over_p * *(b + 219 * OS1_S1 + 6));
                *(b + 341 * OS1_S1 + 5) = X_PA * *(b + 275 * OS1_S1 + 5) +
                                          alpha_X * *(b + 275 * OS1_S1 + 6);
                *(b + 351 * OS1_S1 + 5) = X_PA * *(b + 285 * OS1_S1 + 5) +
                                          alpha_X * *(b + 285 * OS1_S1 + 6);
                *(b + 352 * OS1_S1 + 5) =
                    Y_PA * *(b + 275 * OS1_S1 + 5) +
                    alpha_Y * *(b + 275 * OS1_S1 + 6) +
                    10 * one_over_two_p *
                        (*(b + 210 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 210 * OS1_S1 + 6));
                *(b + 353 * OS1_S1 + 5) = Z_PA * *(b + 275 * OS1_S1 + 5) +
                                          alpha_Z * *(b + 275 * OS1_S1 + 6);
                *(b + 354 * OS1_S1 + 5) =
                    Z_PA * *(b + 276 * OS1_S1 + 5) +
                    alpha_Z * *(b + 276 * OS1_S1 + 6) +
                    one_over_two_p * (*(b + 210 * OS1_S1 + 5) -
                                      alpha_over_p * *(b + 210 * OS1_S1 + 6));
                *(b + 355 * OS1_S1 + 5) =
                    Z_PA * *(b + 277 * OS1_S1 + 5) +
                    alpha_Z * *(b + 277 * OS1_S1 + 6) +
                    2 * one_over_two_p *
                        (*(b + 211 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 211 * OS1_S1 + 6));
                *(b + 356 * OS1_S1 + 5) =
                    Z_PA * *(b + 278 * OS1_S1 + 5) +
                    alpha_Z * *(b + 278 * OS1_S1 + 6) +
                    3 * one_over_two_p *
                        (*(b + 212 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 212 * OS1_S1 + 6));
                *(b + 357 * OS1_S1 + 5) =
                    Z_PA * *(b + 279 * OS1_S1 + 5) +
                    alpha_Z * *(b + 279 * OS1_S1 + 6) +
                    4 * one_over_two_p *
                        (*(b + 213 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 213 * OS1_S1 + 6));
                *(b + 359 * OS1_S1 + 5) =
                    Y_PA * *(b + 282 * OS1_S1 + 5) +
                    alpha_Y * *(b + 282 * OS1_S1 + 6) +
                    3 * one_over_two_p *
                        (*(b + 217 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 217 * OS1_S1 + 6));
                *(b + 360 * OS1_S1 + 5) =
                    Y_PA * *(b + 283 * OS1_S1 + 5) +
                    alpha_Y * *(b + 283 * OS1_S1 + 6) +
                    2 * one_over_two_p *
                        (*(b + 218 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 218 * OS1_S1 + 6));
                *(b + 361 * OS1_S1 + 5) =
                    Y_PA * *(b + 284 * OS1_S1 + 5) +
                    alpha_Y * *(b + 284 * OS1_S1 + 6) +
                    one_over_two_p * (*(b + 219 * OS1_S1 + 5) -
                                      alpha_over_p * *(b + 219 * OS1_S1 + 6));
                *(b + 362 * OS1_S1 + 5) = Y_PA * *(b + 285 * OS1_S1 + 5) +
                                          alpha_Y * *(b + 285 * OS1_S1 + 6);
                *(b + 363 * OS1_S1 + 5) =
                    Z_PA * *(b + 285 * OS1_S1 + 5) +
                    alpha_Z * *(b + 285 * OS1_S1 + 6) +
                    10 * one_over_two_p *
                        (*(b + 219 * OS1_S1 + 5) -
                         alpha_over_p * *(b + 219 * OS1_S1 + 6));
                *(b + 364 * OS1_S1 + 4) =
                    X_PA * *(b + 286 * OS1_S1 + 4) +
                    alpha_X * *(b + 286 * OS1_S1 + 5) +
                    11 * one_over_two_p *
                        (*(b + 220 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 220 * OS1_S1 + 5));
                *(b + 365 * OS1_S1 + 4) = Y_PA * *(b + 286 * OS1_S1 + 4) +
                                          alpha_Y * *(b + 286 * OS1_S1 + 5);
                *(b + 366 * OS1_S1 + 4) = Z_PA * *(b + 286 * OS1_S1 + 4) +
                                          alpha_Z * *(b + 286 * OS1_S1 + 5);
                *(b + 367 * OS1_S1 + 4) =
                    Y_PA * *(b + 287 * OS1_S1 + 4) +
                    alpha_Y * *(b + 287 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 220 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 220 * OS1_S1 + 5));
                *(b + 369 * OS1_S1 + 4) =
                    Z_PA * *(b + 288 * OS1_S1 + 4) +
                    alpha_Z * *(b + 288 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 220 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 220 * OS1_S1 + 5));
                *(b + 370 * OS1_S1 + 4) =
                    Y_PA * *(b + 289 * OS1_S1 + 4) +
                    alpha_Y * *(b + 289 * OS1_S1 + 5) +
                    2 * one_over_two_p *
                        (*(b + 221 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 221 * OS1_S1 + 5));
                *(b + 373 * OS1_S1 + 4) =
                    Z_PA * *(b + 291 * OS1_S1 + 4) +
                    alpha_Z * *(b + 291 * OS1_S1 + 5) +
                    2 * one_over_two_p *
                        (*(b + 222 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 222 * OS1_S1 + 5));
                *(b + 374 * OS1_S1 + 4) =
                    Y_PA * *(b + 292 * OS1_S1 + 4) +
                    alpha_Y * *(b + 292 * OS1_S1 + 5) +
                    3 * one_over_two_p *
                        (*(b + 223 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 223 * OS1_S1 + 5));
                *(b + 378 * OS1_S1 + 4) =
                    Z_PA * *(b + 295 * OS1_S1 + 4) +
                    alpha_Z * *(b + 295 * OS1_S1 + 5) +
                    3 * one_over_two_p *
                        (*(b + 225 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 225 * OS1_S1 + 5));
                *(b + 379 * OS1_S1 + 4) =
                    Y_PA * *(b + 296 * OS1_S1 + 4) +
                    alpha_Y * *(b + 296 * OS1_S1 + 5) +
                    4 * one_over_two_p *
                        (*(b + 226 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 226 * OS1_S1 + 5));
                *(b + 384 * OS1_S1 + 4) =
                    Z_PA * *(b + 300 * OS1_S1 + 4) +
                    alpha_Z * *(b + 300 * OS1_S1 + 5) +
                    4 * one_over_two_p *
                        (*(b + 229 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 229 * OS1_S1 + 5));
                *(b + 385 * OS1_S1 + 4) =
                    Y_PA * *(b + 301 * OS1_S1 + 4) +
                    alpha_Y * *(b + 301 * OS1_S1 + 5) +
                    5 * one_over_two_p *
                        (*(b + 230 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 230 * OS1_S1 + 5));
                *(b + 386 * OS1_S1 + 4) = Z_PA * *(b + 301 * OS1_S1 + 4) +
                                          alpha_Z * *(b + 301 * OS1_S1 + 5);
                *(b + 391 * OS1_S1 + 4) =
                    Z_PA * *(b + 306 * OS1_S1 + 4) +
                    alpha_Z * *(b + 306 * OS1_S1 + 5) +
                    5 * one_over_two_p *
                        (*(b + 234 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 234 * OS1_S1 + 5));
                *(b + 392 * OS1_S1 + 4) =
                    X_PA * *(b + 314 * OS1_S1 + 4) +
                    alpha_X * *(b + 314 * OS1_S1 + 5) +
                    4 * one_over_two_p *
                        (*(b + 248 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 248 * OS1_S1 + 5));
                *(b + 393 * OS1_S1 + 4) = Z_PA * *(b + 307 * OS1_S1 + 4) +
                                          alpha_Z * *(b + 307 * OS1_S1 + 5);
                *(b + 398 * OS1_S1 + 4) = Y_PA * *(b + 313 * OS1_S1 + 4) +
                                          alpha_Y * *(b + 313 * OS1_S1 + 5);
                *(b + 399 * OS1_S1 + 4) =
                    X_PA * *(b + 321 * OS1_S1 + 4) +
                    alpha_X * *(b + 321 * OS1_S1 + 5) +
                    4 * one_over_two_p *
                        (*(b + 255 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 255 * OS1_S1 + 5));
                *(b + 400 * OS1_S1 + 4) =
                    X_PA * *(b + 322 * OS1_S1 + 4) +
                    alpha_X * *(b + 322 * OS1_S1 + 5) +
                    3 * one_over_two_p *
                        (*(b + 256 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 256 * OS1_S1 + 5));
                *(b + 408 * OS1_S1 + 4) =
                    X_PA * *(b + 330 * OS1_S1 + 4) +
                    alpha_X * *(b + 330 * OS1_S1 + 5) +
                    3 * one_over_two_p *
                        (*(b + 264 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 264 * OS1_S1 + 5));
                *(b + 409 * OS1_S1 + 4) =
                    X_PA * *(b + 331 * OS1_S1 + 4) +
                    alpha_X * *(b + 331 * OS1_S1 + 5) +
                    2 * one_over_two_p *
                        (*(b + 265 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 265 * OS1_S1 + 5));
                *(b + 418 * OS1_S1 + 4) =
                    X_PA * *(b + 340 * OS1_S1 + 4) +
                    alpha_X * *(b + 340 * OS1_S1 + 5) +
                    2 * one_over_two_p *
                        (*(b + 274 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 274 * OS1_S1 + 5));
                *(b + 419 * OS1_S1 + 4) =
                    X_PA * *(b + 341 * OS1_S1 + 4) +
                    alpha_X * *(b + 341 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 275 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 275 * OS1_S1 + 5));
                *(b + 429 * OS1_S1 + 4) =
                    X_PA * *(b + 351 * OS1_S1 + 4) +
                    alpha_X * *(b + 351 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 285 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 285 * OS1_S1 + 5));
                *(b + 430 * OS1_S1 + 4) = X_PA * *(b + 352 * OS1_S1 + 4) +
                                          alpha_X * *(b + 352 * OS1_S1 + 5);
                *(b + 441 * OS1_S1 + 4) = X_PA * *(b + 363 * OS1_S1 + 4) +
                                          alpha_X * *(b + 363 * OS1_S1 + 5);
                *(b + 442 * OS1_S1 + 4) =
                    Y_PA * *(b + 352 * OS1_S1 + 4) +
                    alpha_Y * *(b + 352 * OS1_S1 + 5) +
                    11 * one_over_two_p *
                        (*(b + 275 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 275 * OS1_S1 + 5));
                *(b + 443 * OS1_S1 + 4) = Z_PA * *(b + 352 * OS1_S1 + 4) +
                                          alpha_Z * *(b + 352 * OS1_S1 + 5);
                *(b + 444 * OS1_S1 + 4) =
                    Z_PA * *(b + 353 * OS1_S1 + 4) +
                    alpha_Z * *(b + 353 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 275 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 275 * OS1_S1 + 5));
                *(b + 445 * OS1_S1 + 4) =
                    Z_PA * *(b + 354 * OS1_S1 + 4) +
                    alpha_Z * *(b + 354 * OS1_S1 + 5) +
                    2 * one_over_two_p *
                        (*(b + 276 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 276 * OS1_S1 + 5));
                *(b + 446 * OS1_S1 + 4) =
                    Z_PA * *(b + 355 * OS1_S1 + 4) +
                    alpha_Z * *(b + 355 * OS1_S1 + 5) +
                    3 * one_over_two_p *
                        (*(b + 277 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 277 * OS1_S1 + 5));
                *(b + 447 * OS1_S1 + 4) =
                    Z_PA * *(b + 356 * OS1_S1 + 4) +
                    alpha_Z * *(b + 356 * OS1_S1 + 5) +
                    4 * one_over_two_p *
                        (*(b + 278 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 278 * OS1_S1 + 5));
                *(b + 448 * OS1_S1 + 4) =
                    Z_PA * *(b + 357 * OS1_S1 + 4) +
                    alpha_Z * *(b + 357 * OS1_S1 + 5) +
                    5 * one_over_two_p *
                        (*(b + 279 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 279 * OS1_S1 + 5));
                *(b + 449 * OS1_S1 + 4) =
                    Y_PA * *(b + 359 * OS1_S1 + 4) +
                    alpha_Y * *(b + 359 * OS1_S1 + 5) +
                    4 * one_over_two_p *
                        (*(b + 282 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 282 * OS1_S1 + 5));
                *(b + 450 * OS1_S1 + 4) =
                    Y_PA * *(b + 360 * OS1_S1 + 4) +
                    alpha_Y * *(b + 360 * OS1_S1 + 5) +
                    3 * one_over_two_p *
                        (*(b + 283 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 283 * OS1_S1 + 5));
                *(b + 451 * OS1_S1 + 4) =
                    Y_PA * *(b + 361 * OS1_S1 + 4) +
                    alpha_Y * *(b + 361 * OS1_S1 + 5) +
                    2 * one_over_two_p *
                        (*(b + 284 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 284 * OS1_S1 + 5));
                *(b + 452 * OS1_S1 + 4) =
                    Y_PA * *(b + 362 * OS1_S1 + 4) +
                    alpha_Y * *(b + 362 * OS1_S1 + 5) +
                    one_over_two_p * (*(b + 285 * OS1_S1 + 4) -
                                      alpha_over_p * *(b + 285 * OS1_S1 + 5));
                *(b + 453 * OS1_S1 + 4) = Y_PA * *(b + 363 * OS1_S1 + 4) +
                                          alpha_Y * *(b + 363 * OS1_S1 + 5);
                *(b + 454 * OS1_S1 + 4) =
                    Z_PA * *(b + 363 * OS1_S1 + 4) +
                    alpha_Z * *(b + 363 * OS1_S1 + 5) +
                    11 * one_over_two_p *
                        (*(b + 285 * OS1_S1 + 4) -
                         alpha_over_p * *(b + 285 * OS1_S1 + 5));
                *(b + 455 * OS1_S1 + 3) =
                    X_PA * *(b + 364 * OS1_S1 + 3) +
                    alpha_X * *(b + 364 * OS1_S1 + 4) +
                    12 * one_over_two_p *
                        (*(b + 286 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 286 * OS1_S1 + 4));
                *(b + 456 * OS1_S1 + 3) = Y_PA * *(b + 364 * OS1_S1 + 3) +
                                          alpha_Y * *(b + 364 * OS1_S1 + 4);
                *(b + 457 * OS1_S1 + 3) = Z_PA * *(b + 364 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 364 * OS1_S1 + 4);
                *(b + 458 * OS1_S1 + 3) =
                    Y_PA * *(b + 365 * OS1_S1 + 3) +
                    alpha_Y * *(b + 365 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 286 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 286 * OS1_S1 + 4));
                *(b + 460 * OS1_S1 + 3) =
                    Z_PA * *(b + 366 * OS1_S1 + 3) +
                    alpha_Z * *(b + 366 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 286 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 286 * OS1_S1 + 4));
                *(b + 461 * OS1_S1 + 3) =
                    Y_PA * *(b + 367 * OS1_S1 + 3) +
                    alpha_Y * *(b + 367 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 287 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 287 * OS1_S1 + 4));
                *(b + 464 * OS1_S1 + 3) =
                    Z_PA * *(b + 369 * OS1_S1 + 3) +
                    alpha_Z * *(b + 369 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 288 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 288 * OS1_S1 + 4));
                *(b + 465 * OS1_S1 + 3) =
                    Y_PA * *(b + 370 * OS1_S1 + 3) +
                    alpha_Y * *(b + 370 * OS1_S1 + 4) +
                    3 * one_over_two_p *
                        (*(b + 289 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 289 * OS1_S1 + 4));
                *(b + 469 * OS1_S1 + 3) =
                    Z_PA * *(b + 373 * OS1_S1 + 3) +
                    alpha_Z * *(b + 373 * OS1_S1 + 4) +
                    3 * one_over_two_p *
                        (*(b + 291 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 291 * OS1_S1 + 4));
                *(b + 470 * OS1_S1 + 3) =
                    Y_PA * *(b + 374 * OS1_S1 + 3) +
                    alpha_Y * *(b + 374 * OS1_S1 + 4) +
                    4 * one_over_two_p *
                        (*(b + 292 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 292 * OS1_S1 + 4));
                *(b + 471 * OS1_S1 + 3) = Z_PA * *(b + 374 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 374 * OS1_S1 + 4);
                *(b + 475 * OS1_S1 + 3) =
                    Z_PA * *(b + 378 * OS1_S1 + 3) +
                    alpha_Z * *(b + 378 * OS1_S1 + 4) +
                    4 * one_over_two_p *
                        (*(b + 295 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 295 * OS1_S1 + 4));
                *(b + 476 * OS1_S1 + 3) =
                    Y_PA * *(b + 379 * OS1_S1 + 3) +
                    alpha_Y * *(b + 379 * OS1_S1 + 4) +
                    5 * one_over_two_p *
                        (*(b + 296 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 296 * OS1_S1 + 4));
                *(b + 477 * OS1_S1 + 3) = Z_PA * *(b + 379 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 379 * OS1_S1 + 4);
                *(b + 481 * OS1_S1 + 3) = Y_PA * *(b + 384 * OS1_S1 + 3) +
                                          alpha_Y * *(b + 384 * OS1_S1 + 4);
                *(b + 482 * OS1_S1 + 3) =
                    Z_PA * *(b + 384 * OS1_S1 + 3) +
                    alpha_Z * *(b + 384 * OS1_S1 + 4) +
                    5 * one_over_two_p *
                        (*(b + 300 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 300 * OS1_S1 + 4));
                *(b + 483 * OS1_S1 + 3) =
                    X_PA * *(b + 392 * OS1_S1 + 3) +
                    alpha_X * *(b + 392 * OS1_S1 + 4) +
                    5 * one_over_two_p *
                        (*(b + 314 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 314 * OS1_S1 + 4));
                *(b + 484 * OS1_S1 + 3) = Z_PA * *(b + 385 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 385 * OS1_S1 + 4);
                *(b + 485 * OS1_S1 + 3) =
                    Z_PA * *(b + 386 * OS1_S1 + 3) +
                    alpha_Z * *(b + 386 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 301 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 301 * OS1_S1 + 4));
                *(b + 489 * OS1_S1 + 3) = Y_PA * *(b + 391 * OS1_S1 + 3) +
                                          alpha_Y * *(b + 391 * OS1_S1 + 4);
                *(b + 490 * OS1_S1 + 3) =
                    X_PA * *(b + 399 * OS1_S1 + 3) +
                    alpha_X * *(b + 399 * OS1_S1 + 4) +
                    5 * one_over_two_p *
                        (*(b + 321 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 321 * OS1_S1 + 4));
                *(b + 491 * OS1_S1 + 3) =
                    X_PA * *(b + 400 * OS1_S1 + 3) +
                    alpha_X * *(b + 400 * OS1_S1 + 4) +
                    4 * one_over_two_p *
                        (*(b + 322 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 322 * OS1_S1 + 4));
                *(b + 492 * OS1_S1 + 3) = Z_PA * *(b + 392 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 392 * OS1_S1 + 4);
                *(b + 493 * OS1_S1 + 3) =
                    Z_PA * *(b + 393 * OS1_S1 + 3) +
                    alpha_Z * *(b + 393 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 307 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 307 * OS1_S1 + 4));
                *(b + 497 * OS1_S1 + 3) =
                    Y_PA * *(b + 398 * OS1_S1 + 3) +
                    alpha_Y * *(b + 398 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 313 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 313 * OS1_S1 + 4));
                *(b + 498 * OS1_S1 + 3) = Y_PA * *(b + 399 * OS1_S1 + 3) +
                                          alpha_Y * *(b + 399 * OS1_S1 + 4);
                *(b + 499 * OS1_S1 + 3) =
                    X_PA * *(b + 408 * OS1_S1 + 3) +
                    alpha_X * *(b + 408 * OS1_S1 + 4) +
                    4 * one_over_two_p *
                        (*(b + 330 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 330 * OS1_S1 + 4));
                *(b + 500 * OS1_S1 + 3) =
                    X_PA * *(b + 409 * OS1_S1 + 3) +
                    alpha_X * *(b + 409 * OS1_S1 + 4) +
                    3 * one_over_two_p *
                        (*(b + 331 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 331 * OS1_S1 + 4));
                *(b + 501 * OS1_S1 + 3) = Z_PA * *(b + 400 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 400 * OS1_S1 + 4);
                *(b + 508 * OS1_S1 + 3) = Y_PA * *(b + 408 * OS1_S1 + 3) +
                                          alpha_Y * *(b + 408 * OS1_S1 + 4);
                *(b + 509 * OS1_S1 + 3) =
                    X_PA * *(b + 418 * OS1_S1 + 3) +
                    alpha_X * *(b + 418 * OS1_S1 + 4) +
                    3 * one_over_two_p *
                        (*(b + 340 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 340 * OS1_S1 + 4));
                *(b + 510 * OS1_S1 + 3) =
                    X_PA * *(b + 419 * OS1_S1 + 3) +
                    alpha_X * *(b + 419 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 341 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 341 * OS1_S1 + 4));
                *(b + 520 * OS1_S1 + 3) =
                    X_PA * *(b + 429 * OS1_S1 + 3) +
                    alpha_X * *(b + 429 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 351 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 351 * OS1_S1 + 4));
                *(b + 521 * OS1_S1 + 3) =
                    X_PA * *(b + 430 * OS1_S1 + 3) +
                    alpha_X * *(b + 430 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 352 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 352 * OS1_S1 + 4));
                *(b + 532 * OS1_S1 + 3) =
                    X_PA * *(b + 441 * OS1_S1 + 3) +
                    alpha_X * *(b + 441 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 363 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 363 * OS1_S1 + 4));
                *(b + 533 * OS1_S1 + 3) = X_PA * *(b + 442 * OS1_S1 + 3) +
                                          alpha_X * *(b + 442 * OS1_S1 + 4);
                *(b + 538 * OS1_S1 + 3) = X_PA * *(b + 447 * OS1_S1 + 3) +
                                          alpha_X * *(b + 447 * OS1_S1 + 4);
                *(b + 539 * OS1_S1 + 3) = X_PA * *(b + 448 * OS1_S1 + 3) +
                                          alpha_X * *(b + 448 * OS1_S1 + 4);
                *(b + 540 * OS1_S1 + 3) = X_PA * *(b + 449 * OS1_S1 + 3) +
                                          alpha_X * *(b + 449 * OS1_S1 + 4);
                *(b + 545 * OS1_S1 + 3) = X_PA * *(b + 454 * OS1_S1 + 3) +
                                          alpha_X * *(b + 454 * OS1_S1 + 4);
                *(b + 546 * OS1_S1 + 3) =
                    Y_PA * *(b + 442 * OS1_S1 + 3) +
                    alpha_Y * *(b + 442 * OS1_S1 + 4) +
                    12 * one_over_two_p *
                        (*(b + 352 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 352 * OS1_S1 + 4));
                *(b + 547 * OS1_S1 + 3) = Z_PA * *(b + 442 * OS1_S1 + 3) +
                                          alpha_Z * *(b + 442 * OS1_S1 + 4);
                *(b + 548 * OS1_S1 + 3) =
                    Z_PA * *(b + 443 * OS1_S1 + 3) +
                    alpha_Z * *(b + 443 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 352 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 352 * OS1_S1 + 4));
                *(b + 549 * OS1_S1 + 3) =
                    Z_PA * *(b + 444 * OS1_S1 + 3) +
                    alpha_Z * *(b + 444 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 353 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 353 * OS1_S1 + 4));
                *(b + 550 * OS1_S1 + 3) =
                    Z_PA * *(b + 445 * OS1_S1 + 3) +
                    alpha_Z * *(b + 445 * OS1_S1 + 4) +
                    3 * one_over_two_p *
                        (*(b + 354 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 354 * OS1_S1 + 4));
                *(b + 551 * OS1_S1 + 3) =
                    Z_PA * *(b + 446 * OS1_S1 + 3) +
                    alpha_Z * *(b + 446 * OS1_S1 + 4) +
                    4 * one_over_two_p *
                        (*(b + 355 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 355 * OS1_S1 + 4));
                *(b + 552 * OS1_S1 + 3) =
                    Z_PA * *(b + 447 * OS1_S1 + 3) +
                    alpha_Z * *(b + 447 * OS1_S1 + 4) +
                    5 * one_over_two_p *
                        (*(b + 356 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 356 * OS1_S1 + 4));
                *(b + 553 * OS1_S1 + 3) =
                    Y_PA * *(b + 449 * OS1_S1 + 3) +
                    alpha_Y * *(b + 449 * OS1_S1 + 4) +
                    5 * one_over_two_p *
                        (*(b + 359 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 359 * OS1_S1 + 4));
                *(b + 554 * OS1_S1 + 3) =
                    Y_PA * *(b + 450 * OS1_S1 + 3) +
                    alpha_Y * *(b + 450 * OS1_S1 + 4) +
                    4 * one_over_two_p *
                        (*(b + 360 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 360 * OS1_S1 + 4));
                *(b + 555 * OS1_S1 + 3) =
                    Y_PA * *(b + 451 * OS1_S1 + 3) +
                    alpha_Y * *(b + 451 * OS1_S1 + 4) +
                    3 * one_over_two_p *
                        (*(b + 361 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 361 * OS1_S1 + 4));
                *(b + 556 * OS1_S1 + 3) =
                    Y_PA * *(b + 452 * OS1_S1 + 3) +
                    alpha_Y * *(b + 452 * OS1_S1 + 4) +
                    2 * one_over_two_p *
                        (*(b + 362 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 362 * OS1_S1 + 4));
                *(b + 557 * OS1_S1 + 3) =
                    Y_PA * *(b + 453 * OS1_S1 + 3) +
                    alpha_Y * *(b + 453 * OS1_S1 + 4) +
                    one_over_two_p * (*(b + 363 * OS1_S1 + 3) -
                                      alpha_over_p * *(b + 363 * OS1_S1 + 4));
                *(b + 558 * OS1_S1 + 3) = Y_PA * *(b + 454 * OS1_S1 + 3) +
                                          alpha_Y * *(b + 454 * OS1_S1 + 4);
                *(b + 559 * OS1_S1 + 3) =
                    Z_PA * *(b + 454 * OS1_S1 + 3) +
                    alpha_Z * *(b + 454 * OS1_S1 + 4) +
                    12 * one_over_two_p *
                        (*(b + 363 * OS1_S1 + 3) -
                         alpha_over_p * *(b + 363 * OS1_S1 + 4));
                *(b + 560 * OS1_S1 + 2) =
                    X_PA * *(b + 455 * OS1_S1 + 2) +
                    alpha_X * *(b + 455 * OS1_S1 + 3) +
                    13 * one_over_two_p *
                        (*(b + 364 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 364 * OS1_S1 + 3));
                *(b + 561 * OS1_S1 + 2) = Y_PA * *(b + 455 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 455 * OS1_S1 + 3);
                *(b + 562 * OS1_S1 + 2) = Z_PA * *(b + 455 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 455 * OS1_S1 + 3);
                *(b + 563 * OS1_S1 + 2) =
                    Y_PA * *(b + 456 * OS1_S1 + 2) +
                    alpha_Y * *(b + 456 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 364 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 364 * OS1_S1 + 3));
                *(b + 565 * OS1_S1 + 2) =
                    Z_PA * *(b + 457 * OS1_S1 + 2) +
                    alpha_Z * *(b + 457 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 364 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 364 * OS1_S1 + 3));
                *(b + 566 * OS1_S1 + 2) =
                    Y_PA * *(b + 458 * OS1_S1 + 2) +
                    alpha_Y * *(b + 458 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 365 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 365 * OS1_S1 + 3));
                *(b + 569 * OS1_S1 + 2) =
                    Z_PA * *(b + 460 * OS1_S1 + 2) +
                    alpha_Z * *(b + 460 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 366 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 366 * OS1_S1 + 3));
                *(b + 570 * OS1_S1 + 2) =
                    Y_PA * *(b + 461 * OS1_S1 + 2) +
                    alpha_Y * *(b + 461 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 367 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 367 * OS1_S1 + 3));
                *(b + 571 * OS1_S1 + 2) = Z_PA * *(b + 461 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 461 * OS1_S1 + 3);
                *(b + 574 * OS1_S1 + 2) =
                    Z_PA * *(b + 464 * OS1_S1 + 2) +
                    alpha_Z * *(b + 464 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 369 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 369 * OS1_S1 + 3));
                *(b + 575 * OS1_S1 + 2) =
                    Y_PA * *(b + 465 * OS1_S1 + 2) +
                    alpha_Y * *(b + 465 * OS1_S1 + 3) +
                    4 * one_over_two_p *
                        (*(b + 370 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 370 * OS1_S1 + 3));
                *(b + 576 * OS1_S1 + 2) = Z_PA * *(b + 465 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 465 * OS1_S1 + 3);
                *(b + 579 * OS1_S1 + 2) = Y_PA * *(b + 469 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 469 * OS1_S1 + 3);
                *(b + 580 * OS1_S1 + 2) =
                    Z_PA * *(b + 469 * OS1_S1 + 2) +
                    alpha_Z * *(b + 469 * OS1_S1 + 3) +
                    4 * one_over_two_p *
                        (*(b + 373 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 373 * OS1_S1 + 3));
                *(b + 581 * OS1_S1 + 2) =
                    Y_PA * *(b + 470 * OS1_S1 + 2) +
                    alpha_Y * *(b + 470 * OS1_S1 + 3) +
                    5 * one_over_two_p *
                        (*(b + 374 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 374 * OS1_S1 + 3));
                *(b + 582 * OS1_S1 + 2) = Z_PA * *(b + 470 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 470 * OS1_S1 + 3);
                *(b + 583 * OS1_S1 + 2) =
                    Z_PA * *(b + 471 * OS1_S1 + 2) +
                    alpha_Z * *(b + 471 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 374 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 374 * OS1_S1 + 3));
                *(b + 586 * OS1_S1 + 2) = Y_PA * *(b + 475 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 475 * OS1_S1 + 3);
                *(b + 587 * OS1_S1 + 2) =
                    Z_PA * *(b + 475 * OS1_S1 + 2) +
                    alpha_Z * *(b + 475 * OS1_S1 + 3) +
                    5 * one_over_two_p *
                        (*(b + 378 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 378 * OS1_S1 + 3));
                *(b + 588 * OS1_S1 + 2) =
                    Y_PA * *(b + 476 * OS1_S1 + 2) +
                    alpha_Y * *(b + 476 * OS1_S1 + 3) +
                    6 * one_over_two_p *
                        (*(b + 379 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 379 * OS1_S1 + 3));
                *(b + 589 * OS1_S1 + 2) = Z_PA * *(b + 476 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 476 * OS1_S1 + 3);
                *(b + 590 * OS1_S1 + 2) =
                    Z_PA * *(b + 477 * OS1_S1 + 2) +
                    alpha_Z * *(b + 477 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 379 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 379 * OS1_S1 + 3));
                *(b + 593 * OS1_S1 + 2) =
                    Y_PA * *(b + 481 * OS1_S1 + 2) +
                    alpha_Y * *(b + 481 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 384 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 384 * OS1_S1 + 3));
                *(b + 594 * OS1_S1 + 2) = Y_PA * *(b + 482 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 482 * OS1_S1 + 3);
                *(b + 595 * OS1_S1 + 2) =
                    Z_PA * *(b + 482 * OS1_S1 + 2) +
                    alpha_Z * *(b + 482 * OS1_S1 + 3) +
                    6 * one_over_two_p *
                        (*(b + 384 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 384 * OS1_S1 + 3));
                *(b + 596 * OS1_S1 + 2) =
                    X_PA * *(b + 491 * OS1_S1 + 2) +
                    alpha_X * *(b + 491 * OS1_S1 + 3) +
                    5 * one_over_two_p *
                        (*(b + 400 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 400 * OS1_S1 + 3));
                *(b + 597 * OS1_S1 + 2) = Z_PA * *(b + 483 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 483 * OS1_S1 + 3);
                *(b + 598 * OS1_S1 + 2) =
                    Z_PA * *(b + 484 * OS1_S1 + 2) +
                    alpha_Z * *(b + 484 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 385 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 385 * OS1_S1 + 3));
                *(b + 599 * OS1_S1 + 2) =
                    Z_PA * *(b + 485 * OS1_S1 + 2) +
                    alpha_Z * *(b + 485 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 386 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 386 * OS1_S1 + 3));
                *(b + 602 * OS1_S1 + 2) =
                    Y_PA * *(b + 489 * OS1_S1 + 2) +
                    alpha_Y * *(b + 489 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 391 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 391 * OS1_S1 + 3));
                *(b + 603 * OS1_S1 + 2) = Y_PA * *(b + 490 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 490 * OS1_S1 + 3);
                *(b + 604 * OS1_S1 + 2) =
                    X_PA * *(b + 499 * OS1_S1 + 2) +
                    alpha_X * *(b + 499 * OS1_S1 + 3) +
                    5 * one_over_two_p *
                        (*(b + 408 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 408 * OS1_S1 + 3));
                *(b + 605 * OS1_S1 + 2) =
                    X_PA * *(b + 500 * OS1_S1 + 2) +
                    alpha_X * *(b + 500 * OS1_S1 + 3) +
                    4 * one_over_two_p *
                        (*(b + 409 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 409 * OS1_S1 + 3));
                *(b + 606 * OS1_S1 + 2) = Z_PA * *(b + 491 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 491 * OS1_S1 + 3);
                *(b + 607 * OS1_S1 + 2) =
                    Z_PA * *(b + 492 * OS1_S1 + 2) +
                    alpha_Z * *(b + 492 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 392 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 392 * OS1_S1 + 3));
                *(b + 608 * OS1_S1 + 2) =
                    Z_PA * *(b + 493 * OS1_S1 + 2) +
                    alpha_Z * *(b + 493 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 393 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 393 * OS1_S1 + 3));
                *(b + 611 * OS1_S1 + 2) =
                    Y_PA * *(b + 497 * OS1_S1 + 2) +
                    alpha_Y * *(b + 497 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 398 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 398 * OS1_S1 + 3));
                *(b + 612 * OS1_S1 + 2) =
                    Y_PA * *(b + 498 * OS1_S1 + 2) +
                    alpha_Y * *(b + 498 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 399 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 399 * OS1_S1 + 3));
                *(b + 613 * OS1_S1 + 2) = Y_PA * *(b + 499 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 499 * OS1_S1 + 3);
                *(b + 614 * OS1_S1 + 2) =
                    X_PA * *(b + 509 * OS1_S1 + 2) +
                    alpha_X * *(b + 509 * OS1_S1 + 3) +
                    4 * one_over_two_p *
                        (*(b + 418 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 418 * OS1_S1 + 3));
                *(b + 615 * OS1_S1 + 2) =
                    X_PA * *(b + 510 * OS1_S1 + 2) +
                    alpha_X * *(b + 510 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 419 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 419 * OS1_S1 + 3));
                *(b + 616 * OS1_S1 + 2) = Z_PA * *(b + 500 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 500 * OS1_S1 + 3);
                *(b + 617 * OS1_S1 + 2) =
                    Z_PA * *(b + 501 * OS1_S1 + 2) +
                    alpha_Z * *(b + 501 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 400 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 400 * OS1_S1 + 3));
                *(b + 623 * OS1_S1 + 2) =
                    Y_PA * *(b + 508 * OS1_S1 + 2) +
                    alpha_Y * *(b + 508 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 408 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 408 * OS1_S1 + 3));
                *(b + 624 * OS1_S1 + 2) = Y_PA * *(b + 509 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 509 * OS1_S1 + 3);
                *(b + 625 * OS1_S1 + 2) =
                    X_PA * *(b + 520 * OS1_S1 + 2) +
                    alpha_X * *(b + 520 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 429 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 429 * OS1_S1 + 3));
                *(b + 626 * OS1_S1 + 2) =
                    X_PA * *(b + 521 * OS1_S1 + 2) +
                    alpha_X * *(b + 521 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 430 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 430 * OS1_S1 + 3));
                *(b + 627 * OS1_S1 + 2) = Z_PA * *(b + 510 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 510 * OS1_S1 + 3);
                *(b + 636 * OS1_S1 + 2) = Y_PA * *(b + 520 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 520 * OS1_S1 + 3);
                *(b + 637 * OS1_S1 + 2) =
                    X_PA * *(b + 532 * OS1_S1 + 2) +
                    alpha_X * *(b + 532 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 441 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 441 * OS1_S1 + 3));
                *(b + 638 * OS1_S1 + 2) =
                    X_PA * *(b + 533 * OS1_S1 + 2) +
                    alpha_X * *(b + 533 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 442 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 442 * OS1_S1 + 3));
                *(b + 643 * OS1_S1 + 2) =
                    X_PA * *(b + 538 * OS1_S1 + 2) +
                    alpha_X * *(b + 538 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 447 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 447 * OS1_S1 + 3));
                *(b + 644 * OS1_S1 + 2) =
                    X_PA * *(b + 539 * OS1_S1 + 2) +
                    alpha_X * *(b + 539 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 448 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 448 * OS1_S1 + 3));
                *(b + 645 * OS1_S1 + 2) =
                    X_PA * *(b + 540 * OS1_S1 + 2) +
                    alpha_X * *(b + 540 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 449 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 449 * OS1_S1 + 3));
                *(b + 650 * OS1_S1 + 2) =
                    X_PA * *(b + 545 * OS1_S1 + 2) +
                    alpha_X * *(b + 545 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 454 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 454 * OS1_S1 + 3));
                *(b + 651 * OS1_S1 + 2) = X_PA * *(b + 546 * OS1_S1 + 2) +
                                          alpha_X * *(b + 546 * OS1_S1 + 3);
                *(b + 655 * OS1_S1 + 2) = X_PA * *(b + 550 * OS1_S1 + 2) +
                                          alpha_X * *(b + 550 * OS1_S1 + 3);
                *(b + 656 * OS1_S1 + 2) = X_PA * *(b + 551 * OS1_S1 + 2) +
                                          alpha_X * *(b + 551 * OS1_S1 + 3);
                *(b + 657 * OS1_S1 + 2) = X_PA * *(b + 552 * OS1_S1 + 2) +
                                          alpha_X * *(b + 552 * OS1_S1 + 3);
                *(b + 658 * OS1_S1 + 2) = X_PA * *(b + 553 * OS1_S1 + 2) +
                                          alpha_X * *(b + 553 * OS1_S1 + 3);
                *(b + 659 * OS1_S1 + 2) = X_PA * *(b + 554 * OS1_S1 + 2) +
                                          alpha_X * *(b + 554 * OS1_S1 + 3);
                *(b + 660 * OS1_S1 + 2) = X_PA * *(b + 555 * OS1_S1 + 2) +
                                          alpha_X * *(b + 555 * OS1_S1 + 3);
                *(b + 664 * OS1_S1 + 2) = X_PA * *(b + 559 * OS1_S1 + 2) +
                                          alpha_X * *(b + 559 * OS1_S1 + 3);
                *(b + 665 * OS1_S1 + 2) =
                    Y_PA * *(b + 546 * OS1_S1 + 2) +
                    alpha_Y * *(b + 546 * OS1_S1 + 3) +
                    13 * one_over_two_p *
                        (*(b + 442 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 442 * OS1_S1 + 3));
                *(b + 666 * OS1_S1 + 2) = Z_PA * *(b + 546 * OS1_S1 + 2) +
                                          alpha_Z * *(b + 546 * OS1_S1 + 3);
                *(b + 667 * OS1_S1 + 2) =
                    Z_PA * *(b + 547 * OS1_S1 + 2) +
                    alpha_Z * *(b + 547 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 442 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 442 * OS1_S1 + 3));
                *(b + 668 * OS1_S1 + 2) =
                    Z_PA * *(b + 548 * OS1_S1 + 2) +
                    alpha_Z * *(b + 548 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 443 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 443 * OS1_S1 + 3));
                *(b + 669 * OS1_S1 + 2) =
                    Z_PA * *(b + 549 * OS1_S1 + 2) +
                    alpha_Z * *(b + 549 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 444 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 444 * OS1_S1 + 3));
                *(b + 670 * OS1_S1 + 2) =
                    Z_PA * *(b + 550 * OS1_S1 + 2) +
                    alpha_Z * *(b + 550 * OS1_S1 + 3) +
                    4 * one_over_two_p *
                        (*(b + 445 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 445 * OS1_S1 + 3));
                *(b + 671 * OS1_S1 + 2) =
                    Z_PA * *(b + 551 * OS1_S1 + 2) +
                    alpha_Z * *(b + 551 * OS1_S1 + 3) +
                    5 * one_over_two_p *
                        (*(b + 446 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 446 * OS1_S1 + 3));
                *(b + 672 * OS1_S1 + 2) =
                    Z_PA * *(b + 552 * OS1_S1 + 2) +
                    alpha_Z * *(b + 552 * OS1_S1 + 3) +
                    6 * one_over_two_p *
                        (*(b + 447 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 447 * OS1_S1 + 3));
                *(b + 673 * OS1_S1 + 2) =
                    Y_PA * *(b + 554 * OS1_S1 + 2) +
                    alpha_Y * *(b + 554 * OS1_S1 + 3) +
                    5 * one_over_two_p *
                        (*(b + 450 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 450 * OS1_S1 + 3));
                *(b + 674 * OS1_S1 + 2) =
                    Y_PA * *(b + 555 * OS1_S1 + 2) +
                    alpha_Y * *(b + 555 * OS1_S1 + 3) +
                    4 * one_over_two_p *
                        (*(b + 451 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 451 * OS1_S1 + 3));
                *(b + 675 * OS1_S1 + 2) =
                    Y_PA * *(b + 556 * OS1_S1 + 2) +
                    alpha_Y * *(b + 556 * OS1_S1 + 3) +
                    3 * one_over_two_p *
                        (*(b + 452 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 452 * OS1_S1 + 3));
                *(b + 676 * OS1_S1 + 2) =
                    Y_PA * *(b + 557 * OS1_S1 + 2) +
                    alpha_Y * *(b + 557 * OS1_S1 + 3) +
                    2 * one_over_two_p *
                        (*(b + 453 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 453 * OS1_S1 + 3));
                *(b + 677 * OS1_S1 + 2) =
                    Y_PA * *(b + 558 * OS1_S1 + 2) +
                    alpha_Y * *(b + 558 * OS1_S1 + 3) +
                    one_over_two_p * (*(b + 454 * OS1_S1 + 2) -
                                      alpha_over_p * *(b + 454 * OS1_S1 + 3));
                *(b + 678 * OS1_S1 + 2) = Y_PA * *(b + 559 * OS1_S1 + 2) +
                                          alpha_Y * *(b + 559 * OS1_S1 + 3);
                *(b + 679 * OS1_S1 + 2) =
                    Z_PA * *(b + 559 * OS1_S1 + 2) +
                    alpha_Z * *(b + 559 * OS1_S1 + 3) +
                    13 * one_over_two_p *
                        (*(b + 454 * OS1_S1 + 2) -
                         alpha_over_p * *(b + 454 * OS1_S1 + 3));
                *(b + 680 * OS1_S1 + 1) =
                    X_PA * *(b + 560 * OS1_S1 + 1) +
                    alpha_X * *(b + 560 * OS1_S1 + 2) +
                    14 * one_over_two_p *
                        (*(b + 455 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 455 * OS1_S1 + 2));
                *(b + 681 * OS1_S1 + 1) = Y_PA * *(b + 560 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 560 * OS1_S1 + 2);
                *(b + 682 * OS1_S1 + 1) = Z_PA * *(b + 560 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 560 * OS1_S1 + 2);
                *(b + 683 * OS1_S1 + 1) =
                    Y_PA * *(b + 561 * OS1_S1 + 1) +
                    alpha_Y * *(b + 561 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 455 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 455 * OS1_S1 + 2));
                *(b + 685 * OS1_S1 + 1) =
                    Z_PA * *(b + 562 * OS1_S1 + 1) +
                    alpha_Z * *(b + 562 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 455 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 455 * OS1_S1 + 2));
                *(b + 686 * OS1_S1 + 1) =
                    Y_PA * *(b + 563 * OS1_S1 + 1) +
                    alpha_Y * *(b + 563 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 456 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 456 * OS1_S1 + 2));
                *(b + 687 * OS1_S1 + 1) = Z_PA * *(b + 563 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 563 * OS1_S1 + 2);
                *(b + 689 * OS1_S1 + 1) =
                    Z_PA * *(b + 565 * OS1_S1 + 1) +
                    alpha_Z * *(b + 565 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 457 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 457 * OS1_S1 + 2));
                *(b + 690 * OS1_S1 + 1) =
                    Y_PA * *(b + 566 * OS1_S1 + 1) +
                    alpha_Y * *(b + 566 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 458 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 458 * OS1_S1 + 2));
                *(b + 691 * OS1_S1 + 1) = Z_PA * *(b + 566 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 566 * OS1_S1 + 2);
                *(b + 693 * OS1_S1 + 1) = Y_PA * *(b + 569 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 569 * OS1_S1 + 2);
                *(b + 694 * OS1_S1 + 1) =
                    Z_PA * *(b + 569 * OS1_S1 + 1) +
                    alpha_Z * *(b + 569 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 460 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 460 * OS1_S1 + 2));
                *(b + 695 * OS1_S1 + 1) =
                    Y_PA * *(b + 570 * OS1_S1 + 1) +
                    alpha_Y * *(b + 570 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 461 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 461 * OS1_S1 + 2));
                *(b + 696 * OS1_S1 + 1) = Z_PA * *(b + 570 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 570 * OS1_S1 + 2);
                *(b + 697 * OS1_S1 + 1) =
                    Z_PA * *(b + 571 * OS1_S1 + 1) +
                    alpha_Z * *(b + 571 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 461 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 461 * OS1_S1 + 2));
                *(b + 699 * OS1_S1 + 1) = Y_PA * *(b + 574 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 574 * OS1_S1 + 2);
                *(b + 700 * OS1_S1 + 1) =
                    Z_PA * *(b + 574 * OS1_S1 + 1) +
                    alpha_Z * *(b + 574 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 464 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 464 * OS1_S1 + 2));
                *(b + 701 * OS1_S1 + 1) =
                    Y_PA * *(b + 575 * OS1_S1 + 1) +
                    alpha_Y * *(b + 575 * OS1_S1 + 2) +
                    5 * one_over_two_p *
                        (*(b + 465 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 465 * OS1_S1 + 2));
                *(b + 702 * OS1_S1 + 1) = Z_PA * *(b + 575 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 575 * OS1_S1 + 2);
                *(b + 703 * OS1_S1 + 1) =
                    Z_PA * *(b + 576 * OS1_S1 + 1) +
                    alpha_Z * *(b + 576 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 465 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 465 * OS1_S1 + 2));
                *(b + 705 * OS1_S1 + 1) =
                    Y_PA * *(b + 579 * OS1_S1 + 1) +
                    alpha_Y * *(b + 579 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 469 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 469 * OS1_S1 + 2));
                *(b + 706 * OS1_S1 + 1) = Y_PA * *(b + 580 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 580 * OS1_S1 + 2);
                *(b + 707 * OS1_S1 + 1) =
                    Z_PA * *(b + 580 * OS1_S1 + 1) +
                    alpha_Z * *(b + 580 * OS1_S1 + 2) +
                    5 * one_over_two_p *
                        (*(b + 469 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 469 * OS1_S1 + 2));
                *(b + 708 * OS1_S1 + 1) =
                    Y_PA * *(b + 581 * OS1_S1 + 1) +
                    alpha_Y * *(b + 581 * OS1_S1 + 2) +
                    6 * one_over_two_p *
                        (*(b + 470 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 470 * OS1_S1 + 2));
                *(b + 709 * OS1_S1 + 1) = Z_PA * *(b + 581 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 581 * OS1_S1 + 2);
                *(b + 710 * OS1_S1 + 1) =
                    Z_PA * *(b + 582 * OS1_S1 + 1) +
                    alpha_Z * *(b + 582 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 470 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 470 * OS1_S1 + 2));
                *(b + 711 * OS1_S1 + 1) =
                    Z_PA * *(b + 583 * OS1_S1 + 1) +
                    alpha_Z * *(b + 583 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 471 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 471 * OS1_S1 + 2));
                *(b + 713 * OS1_S1 + 1) =
                    Y_PA * *(b + 586 * OS1_S1 + 1) +
                    alpha_Y * *(b + 586 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 475 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 475 * OS1_S1 + 2));
                *(b + 714 * OS1_S1 + 1) = Y_PA * *(b + 587 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 587 * OS1_S1 + 2);
                *(b + 715 * OS1_S1 + 1) =
                    Z_PA * *(b + 587 * OS1_S1 + 1) +
                    alpha_Z * *(b + 587 * OS1_S1 + 2) +
                    6 * one_over_two_p *
                        (*(b + 475 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 475 * OS1_S1 + 2));
                *(b + 716 * OS1_S1 + 1) =
                    X_PA * *(b + 596 * OS1_S1 + 1) +
                    alpha_X * *(b + 596 * OS1_S1 + 2) +
                    6 * one_over_two_p *
                        (*(b + 491 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 491 * OS1_S1 + 2));
                *(b + 717 * OS1_S1 + 1) = Z_PA * *(b + 588 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 588 * OS1_S1 + 2);
                *(b + 718 * OS1_S1 + 1) =
                    Z_PA * *(b + 589 * OS1_S1 + 1) +
                    alpha_Z * *(b + 589 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 476 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 476 * OS1_S1 + 2));
                *(b + 719 * OS1_S1 + 1) =
                    Z_PA * *(b + 590 * OS1_S1 + 1) +
                    alpha_Z * *(b + 590 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 477 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 477 * OS1_S1 + 2));
                *(b + 721 * OS1_S1 + 1) =
                    Y_PA * *(b + 593 * OS1_S1 + 1) +
                    alpha_Y * *(b + 593 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 481 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 481 * OS1_S1 + 2));
                *(b + 722 * OS1_S1 + 1) =
                    Y_PA * *(b + 594 * OS1_S1 + 1) +
                    alpha_Y * *(b + 594 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 482 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 482 * OS1_S1 + 2));
                *(b + 723 * OS1_S1 + 1) = Y_PA * *(b + 595 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 595 * OS1_S1 + 2);
                *(b + 724 * OS1_S1 + 1) =
                    X_PA * *(b + 604 * OS1_S1 + 1) +
                    alpha_X * *(b + 604 * OS1_S1 + 2) +
                    6 * one_over_two_p *
                        (*(b + 499 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 499 * OS1_S1 + 2));
                *(b + 725 * OS1_S1 + 1) =
                    X_PA * *(b + 605 * OS1_S1 + 1) +
                    alpha_X * *(b + 605 * OS1_S1 + 2) +
                    5 * one_over_two_p *
                        (*(b + 500 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 500 * OS1_S1 + 2));
                *(b + 726 * OS1_S1 + 1) = Z_PA * *(b + 596 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 596 * OS1_S1 + 2);
                *(b + 727 * OS1_S1 + 1) =
                    Z_PA * *(b + 597 * OS1_S1 + 1) +
                    alpha_Z * *(b + 597 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 483 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 483 * OS1_S1 + 2));
                *(b + 728 * OS1_S1 + 1) =
                    Z_PA * *(b + 598 * OS1_S1 + 1) +
                    alpha_Z * *(b + 598 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 484 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 484 * OS1_S1 + 2));
                *(b + 729 * OS1_S1 + 1) =
                    Z_PA * *(b + 599 * OS1_S1 + 1) +
                    alpha_Z * *(b + 599 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 485 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 485 * OS1_S1 + 2));
                *(b + 731 * OS1_S1 + 1) =
                    Y_PA * *(b + 602 * OS1_S1 + 1) +
                    alpha_Y * *(b + 602 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 489 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 489 * OS1_S1 + 2));
                *(b + 732 * OS1_S1 + 1) =
                    Y_PA * *(b + 603 * OS1_S1 + 1) +
                    alpha_Y * *(b + 603 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 490 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 490 * OS1_S1 + 2));
                *(b + 733 * OS1_S1 + 1) = Y_PA * *(b + 604 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 604 * OS1_S1 + 2);
                *(b + 734 * OS1_S1 + 1) =
                    X_PA * *(b + 614 * OS1_S1 + 1) +
                    alpha_X * *(b + 614 * OS1_S1 + 2) +
                    5 * one_over_two_p *
                        (*(b + 509 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 509 * OS1_S1 + 2));
                *(b + 735 * OS1_S1 + 1) =
                    X_PA * *(b + 615 * OS1_S1 + 1) +
                    alpha_X * *(b + 615 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 510 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 510 * OS1_S1 + 2));
                *(b + 736 * OS1_S1 + 1) = Z_PA * *(b + 605 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 605 * OS1_S1 + 2);
                *(b + 737 * OS1_S1 + 1) =
                    Z_PA * *(b + 606 * OS1_S1 + 1) +
                    alpha_Z * *(b + 606 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 491 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 491 * OS1_S1 + 2));
                *(b + 738 * OS1_S1 + 1) =
                    Z_PA * *(b + 607 * OS1_S1 + 1) +
                    alpha_Z * *(b + 607 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 492 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 492 * OS1_S1 + 2));
                *(b + 739 * OS1_S1 + 1) =
                    Z_PA * *(b + 608 * OS1_S1 + 1) +
                    alpha_Z * *(b + 608 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 493 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 493 * OS1_S1 + 2));
                *(b + 741 * OS1_S1 + 1) =
                    Y_PA * *(b + 611 * OS1_S1 + 1) +
                    alpha_Y * *(b + 611 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 497 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 497 * OS1_S1 + 2));
                *(b + 742 * OS1_S1 + 1) =
                    Y_PA * *(b + 612 * OS1_S1 + 1) +
                    alpha_Y * *(b + 612 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 498 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 498 * OS1_S1 + 2));
                *(b + 743 * OS1_S1 + 1) =
                    Y_PA * *(b + 613 * OS1_S1 + 1) +
                    alpha_Y * *(b + 613 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 499 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 499 * OS1_S1 + 2));
                *(b + 744 * OS1_S1 + 1) = Y_PA * *(b + 614 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 614 * OS1_S1 + 2);
                *(b + 745 * OS1_S1 + 1) =
                    X_PA * *(b + 625 * OS1_S1 + 1) +
                    alpha_X * *(b + 625 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 520 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 520 * OS1_S1 + 2));
                *(b + 746 * OS1_S1 + 1) =
                    X_PA * *(b + 626 * OS1_S1 + 1) +
                    alpha_X * *(b + 626 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 521 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 521 * OS1_S1 + 2));
                *(b + 747 * OS1_S1 + 1) = Z_PA * *(b + 615 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 615 * OS1_S1 + 2);
                *(b + 748 * OS1_S1 + 1) =
                    Z_PA * *(b + 616 * OS1_S1 + 1) +
                    alpha_Z * *(b + 616 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 500 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 500 * OS1_S1 + 2));
                *(b + 749 * OS1_S1 + 1) =
                    Z_PA * *(b + 617 * OS1_S1 + 1) +
                    alpha_Z * *(b + 617 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 501 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 501 * OS1_S1 + 2));
                *(b + 754 * OS1_S1 + 1) =
                    Y_PA * *(b + 623 * OS1_S1 + 1) +
                    alpha_Y * *(b + 623 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 508 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 508 * OS1_S1 + 2));
                *(b + 755 * OS1_S1 + 1) =
                    Y_PA * *(b + 624 * OS1_S1 + 1) +
                    alpha_Y * *(b + 624 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 509 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 509 * OS1_S1 + 2));
                *(b + 756 * OS1_S1 + 1) = Y_PA * *(b + 625 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 625 * OS1_S1 + 2);
                *(b + 757 * OS1_S1 + 1) =
                    X_PA * *(b + 637 * OS1_S1 + 1) +
                    alpha_X * *(b + 637 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 532 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 532 * OS1_S1 + 2));
                *(b + 758 * OS1_S1 + 1) =
                    X_PA * *(b + 638 * OS1_S1 + 1) +
                    alpha_X * *(b + 638 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 533 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 533 * OS1_S1 + 2));
                *(b + 759 * OS1_S1 + 1) = Z_PA * *(b + 626 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 626 * OS1_S1 + 2);
                *(b + 760 * OS1_S1 + 1) =
                    Z_PA * *(b + 627 * OS1_S1 + 1) +
                    alpha_Z * *(b + 627 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 510 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 510 * OS1_S1 + 2));
                *(b + 763 * OS1_S1 + 1) =
                    X_PA * *(b + 643 * OS1_S1 + 1) +
                    alpha_X * *(b + 643 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 538 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 538 * OS1_S1 + 2));
                *(b + 764 * OS1_S1 + 1) =
                    X_PA * *(b + 644 * OS1_S1 + 1) +
                    alpha_X * *(b + 644 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 539 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 539 * OS1_S1 + 2));
                *(b + 765 * OS1_S1 + 1) =
                    X_PA * *(b + 645 * OS1_S1 + 1) +
                    alpha_X * *(b + 645 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 540 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 540 * OS1_S1 + 2));
                *(b + 768 * OS1_S1 + 1) =
                    Y_PA * *(b + 636 * OS1_S1 + 1) +
                    alpha_Y * *(b + 636 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 520 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 520 * OS1_S1 + 2));
                *(b + 769 * OS1_S1 + 1) = Y_PA * *(b + 637 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 637 * OS1_S1 + 2);
                *(b + 770 * OS1_S1 + 1) =
                    X_PA * *(b + 650 * OS1_S1 + 1) +
                    alpha_X * *(b + 650 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 545 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 545 * OS1_S1 + 2));
                *(b + 771 * OS1_S1 + 1) =
                    X_PA * *(b + 651 * OS1_S1 + 1) +
                    alpha_X * *(b + 651 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 546 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 546 * OS1_S1 + 2));
                *(b + 772 * OS1_S1 + 1) = Z_PA * *(b + 638 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 638 * OS1_S1 + 2);
                *(b + 775 * OS1_S1 + 1) =
                    X_PA * *(b + 655 * OS1_S1 + 1) +
                    alpha_X * *(b + 655 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 550 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 550 * OS1_S1 + 2));
                *(b + 776 * OS1_S1 + 1) =
                    X_PA * *(b + 656 * OS1_S1 + 1) +
                    alpha_X * *(b + 656 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 551 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 551 * OS1_S1 + 2));
                *(b + 777 * OS1_S1 + 1) =
                    X_PA * *(b + 657 * OS1_S1 + 1) +
                    alpha_X * *(b + 657 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 552 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 552 * OS1_S1 + 2));
                *(b + 778 * OS1_S1 + 1) =
                    X_PA * *(b + 658 * OS1_S1 + 1) +
                    alpha_X * *(b + 658 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 553 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 553 * OS1_S1 + 2));
                *(b + 779 * OS1_S1 + 1) =
                    X_PA * *(b + 659 * OS1_S1 + 1) +
                    alpha_X * *(b + 659 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 554 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 554 * OS1_S1 + 2));
                *(b + 780 * OS1_S1 + 1) =
                    X_PA * *(b + 660 * OS1_S1 + 1) +
                    alpha_X * *(b + 660 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 555 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 555 * OS1_S1 + 2));
                *(b + 783 * OS1_S1 + 1) = Y_PA * *(b + 650 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 650 * OS1_S1 + 2);
                *(b + 784 * OS1_S1 + 1) =
                    X_PA * *(b + 664 * OS1_S1 + 1) +
                    alpha_X * *(b + 664 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 559 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 559 * OS1_S1 + 2));
                *(b + 785 * OS1_S1 + 1) = X_PA * *(b + 665 * OS1_S1 + 1) +
                                          alpha_X * *(b + 665 * OS1_S1 + 2);
                *(b + 788 * OS1_S1 + 1) = X_PA * *(b + 668 * OS1_S1 + 1) +
                                          alpha_X * *(b + 668 * OS1_S1 + 2);
                *(b + 789 * OS1_S1 + 1) = X_PA * *(b + 669 * OS1_S1 + 1) +
                                          alpha_X * *(b + 669 * OS1_S1 + 2);
                *(b + 790 * OS1_S1 + 1) = X_PA * *(b + 670 * OS1_S1 + 1) +
                                          alpha_X * *(b + 670 * OS1_S1 + 2);
                *(b + 791 * OS1_S1 + 1) = X_PA * *(b + 671 * OS1_S1 + 1) +
                                          alpha_X * *(b + 671 * OS1_S1 + 2);
                *(b + 792 * OS1_S1 + 1) = X_PA * *(b + 672 * OS1_S1 + 1) +
                                          alpha_X * *(b + 672 * OS1_S1 + 2);
                *(b + 793 * OS1_S1 + 1) = X_PA * *(b + 673 * OS1_S1 + 1) +
                                          alpha_X * *(b + 673 * OS1_S1 + 2);
                *(b + 794 * OS1_S1 + 1) = X_PA * *(b + 674 * OS1_S1 + 1) +
                                          alpha_X * *(b + 674 * OS1_S1 + 2);
                *(b + 795 * OS1_S1 + 1) = X_PA * *(b + 675 * OS1_S1 + 1) +
                                          alpha_X * *(b + 675 * OS1_S1 + 2);
                *(b + 796 * OS1_S1 + 1) = X_PA * *(b + 676 * OS1_S1 + 1) +
                                          alpha_X * *(b + 676 * OS1_S1 + 2);
                *(b + 799 * OS1_S1 + 1) = X_PA * *(b + 679 * OS1_S1 + 1) +
                                          alpha_X * *(b + 679 * OS1_S1 + 2);
                *(b + 800 * OS1_S1 + 1) =
                    Y_PA * *(b + 665 * OS1_S1 + 1) +
                    alpha_Y * *(b + 665 * OS1_S1 + 2) +
                    14 * one_over_two_p *
                        (*(b + 546 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 546 * OS1_S1 + 2));
                *(b + 801 * OS1_S1 + 1) = Z_PA * *(b + 665 * OS1_S1 + 1) +
                                          alpha_Z * *(b + 665 * OS1_S1 + 2);
                *(b + 802 * OS1_S1 + 1) =
                    Z_PA * *(b + 666 * OS1_S1 + 1) +
                    alpha_Z * *(b + 666 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 546 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 546 * OS1_S1 + 2));
                *(b + 803 * OS1_S1 + 1) =
                    Z_PA * *(b + 667 * OS1_S1 + 1) +
                    alpha_Z * *(b + 667 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 547 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 547 * OS1_S1 + 2));
                *(b + 804 * OS1_S1 + 1) =
                    Z_PA * *(b + 668 * OS1_S1 + 1) +
                    alpha_Z * *(b + 668 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 548 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 548 * OS1_S1 + 2));
                *(b + 805 * OS1_S1 + 1) =
                    Z_PA * *(b + 669 * OS1_S1 + 1) +
                    alpha_Z * *(b + 669 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 549 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 549 * OS1_S1 + 2));
                *(b + 806 * OS1_S1 + 1) =
                    Z_PA * *(b + 670 * OS1_S1 + 1) +
                    alpha_Z * *(b + 670 * OS1_S1 + 2) +
                    5 * one_over_two_p *
                        (*(b + 550 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 550 * OS1_S1 + 2));
                *(b + 807 * OS1_S1 + 1) =
                    Z_PA * *(b + 671 * OS1_S1 + 1) +
                    alpha_Z * *(b + 671 * OS1_S1 + 2) +
                    6 * one_over_two_p *
                        (*(b + 551 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 551 * OS1_S1 + 2));
                *(b + 808 * OS1_S1 + 1) =
                    Y_PA * *(b + 673 * OS1_S1 + 1) +
                    alpha_Y * *(b + 673 * OS1_S1 + 2) +
                    6 * one_over_two_p *
                        (*(b + 554 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 554 * OS1_S1 + 2));
                *(b + 809 * OS1_S1 + 1) =
                    Y_PA * *(b + 674 * OS1_S1 + 1) +
                    alpha_Y * *(b + 674 * OS1_S1 + 2) +
                    5 * one_over_two_p *
                        (*(b + 555 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 555 * OS1_S1 + 2));
                *(b + 810 * OS1_S1 + 1) =
                    Y_PA * *(b + 675 * OS1_S1 + 1) +
                    alpha_Y * *(b + 675 * OS1_S1 + 2) +
                    4 * one_over_two_p *
                        (*(b + 556 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 556 * OS1_S1 + 2));
                *(b + 811 * OS1_S1 + 1) =
                    Y_PA * *(b + 676 * OS1_S1 + 1) +
                    alpha_Y * *(b + 676 * OS1_S1 + 2) +
                    3 * one_over_two_p *
                        (*(b + 557 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 557 * OS1_S1 + 2));
                *(b + 812 * OS1_S1 + 1) =
                    Y_PA * *(b + 677 * OS1_S1 + 1) +
                    alpha_Y * *(b + 677 * OS1_S1 + 2) +
                    2 * one_over_two_p *
                        (*(b + 558 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 558 * OS1_S1 + 2));
                *(b + 813 * OS1_S1 + 1) =
                    Y_PA * *(b + 678 * OS1_S1 + 1) +
                    alpha_Y * *(b + 678 * OS1_S1 + 2) +
                    one_over_two_p * (*(b + 559 * OS1_S1 + 1) -
                                      alpha_over_p * *(b + 559 * OS1_S1 + 2));
                *(b + 814 * OS1_S1 + 1) = Y_PA * *(b + 679 * OS1_S1 + 1) +
                                          alpha_Y * *(b + 679 * OS1_S1 + 2);
                *(b + 815 * OS1_S1 + 1) =
                    Z_PA * *(b + 679 * OS1_S1 + 1) +
                    alpha_Z * *(b + 679 * OS1_S1 + 2) +
                    14 * one_over_two_p *
                        (*(b + 559 * OS1_S1 + 1) -
                         alpha_over_p * *(b + 559 * OS1_S1 + 2));
                *(b + 816 * OS1_S1 + 0) =
                    X_PA * *(b + 680 * OS1_S1 + 0) +
                    alpha_X * *(b + 680 * OS1_S1 + 1) +
                    15 * one_over_two_p *
                        (*(b + 560 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 560 * OS1_S1 + 1));
                *(b + 817 * OS1_S1 + 0) = Y_PA * *(b + 680 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 680 * OS1_S1 + 1);
                *(b + 818 * OS1_S1 + 0) = Z_PA * *(b + 680 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 680 * OS1_S1 + 1);
                *(b + 819 * OS1_S1 + 0) =
                    Y_PA * *(b + 681 * OS1_S1 + 0) +
                    alpha_Y * *(b + 681 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 560 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 560 * OS1_S1 + 1));
                *(b + 820 * OS1_S1 + 0) = Z_PA * *(b + 681 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 681 * OS1_S1 + 1);
                *(b + 821 * OS1_S1 + 0) =
                    Z_PA * *(b + 682 * OS1_S1 + 0) +
                    alpha_Z * *(b + 682 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 560 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 560 * OS1_S1 + 1));
                *(b + 822 * OS1_S1 + 0) =
                    Y_PA * *(b + 683 * OS1_S1 + 0) +
                    alpha_Y * *(b + 683 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 561 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 561 * OS1_S1 + 1));
                *(b + 823 * OS1_S1 + 0) = Z_PA * *(b + 683 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 683 * OS1_S1 + 1);
                *(b + 824 * OS1_S1 + 0) = Y_PA * *(b + 685 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 685 * OS1_S1 + 1);
                *(b + 825 * OS1_S1 + 0) =
                    Z_PA * *(b + 685 * OS1_S1 + 0) +
                    alpha_Z * *(b + 685 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 562 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 562 * OS1_S1 + 1));
                *(b + 826 * OS1_S1 + 0) =
                    Y_PA * *(b + 686 * OS1_S1 + 0) +
                    alpha_Y * *(b + 686 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 563 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 563 * OS1_S1 + 1));
                *(b + 827 * OS1_S1 + 0) = Z_PA * *(b + 686 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 686 * OS1_S1 + 1);
                *(b + 828 * OS1_S1 + 0) =
                    Z_PA * *(b + 687 * OS1_S1 + 0) +
                    alpha_Z * *(b + 687 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 563 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 563 * OS1_S1 + 1));
                *(b + 829 * OS1_S1 + 0) = Y_PA * *(b + 689 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 689 * OS1_S1 + 1);
                *(b + 830 * OS1_S1 + 0) =
                    Z_PA * *(b + 689 * OS1_S1 + 0) +
                    alpha_Z * *(b + 689 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 565 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 565 * OS1_S1 + 1));
                *(b + 831 * OS1_S1 + 0) =
                    Y_PA * *(b + 690 * OS1_S1 + 0) +
                    alpha_Y * *(b + 690 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 566 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 566 * OS1_S1 + 1));
                *(b + 832 * OS1_S1 + 0) = Z_PA * *(b + 690 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 690 * OS1_S1 + 1);
                *(b + 833 * OS1_S1 + 0) =
                    Z_PA * *(b + 691 * OS1_S1 + 0) +
                    alpha_Z * *(b + 691 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 566 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 566 * OS1_S1 + 1));
                *(b + 834 * OS1_S1 + 0) =
                    Y_PA * *(b + 693 * OS1_S1 + 0) +
                    alpha_Y * *(b + 693 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 569 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 569 * OS1_S1 + 1));
                *(b + 835 * OS1_S1 + 0) = Y_PA * *(b + 694 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 694 * OS1_S1 + 1);
                *(b + 836 * OS1_S1 + 0) =
                    Z_PA * *(b + 694 * OS1_S1 + 0) +
                    alpha_Z * *(b + 694 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 569 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 569 * OS1_S1 + 1));
                *(b + 837 * OS1_S1 + 0) =
                    Y_PA * *(b + 695 * OS1_S1 + 0) +
                    alpha_Y * *(b + 695 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 570 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 570 * OS1_S1 + 1));
                *(b + 838 * OS1_S1 + 0) = Z_PA * *(b + 695 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 695 * OS1_S1 + 1);
                *(b + 839 * OS1_S1 + 0) =
                    Z_PA * *(b + 696 * OS1_S1 + 0) +
                    alpha_Z * *(b + 696 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 570 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 570 * OS1_S1 + 1));
                *(b + 840 * OS1_S1 + 0) =
                    Z_PA * *(b + 697 * OS1_S1 + 0) +
                    alpha_Z * *(b + 697 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 571 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 571 * OS1_S1 + 1));
                *(b + 841 * OS1_S1 + 0) =
                    Y_PA * *(b + 699 * OS1_S1 + 0) +
                    alpha_Y * *(b + 699 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 574 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 574 * OS1_S1 + 1));
                *(b + 842 * OS1_S1 + 0) = Y_PA * *(b + 700 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 700 * OS1_S1 + 1);
                *(b + 843 * OS1_S1 + 0) =
                    Z_PA * *(b + 700 * OS1_S1 + 0) +
                    alpha_Z * *(b + 700 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 574 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 574 * OS1_S1 + 1));
                *(b + 844 * OS1_S1 + 0) =
                    Y_PA * *(b + 701 * OS1_S1 + 0) +
                    alpha_Y * *(b + 701 * OS1_S1 + 1) +
                    6 * one_over_two_p *
                        (*(b + 575 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 575 * OS1_S1 + 1));
                *(b + 845 * OS1_S1 + 0) = Z_PA * *(b + 701 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 701 * OS1_S1 + 1);
                *(b + 846 * OS1_S1 + 0) =
                    Z_PA * *(b + 702 * OS1_S1 + 0) +
                    alpha_Z * *(b + 702 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 575 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 575 * OS1_S1 + 1));
                *(b + 847 * OS1_S1 + 0) =
                    Z_PA * *(b + 703 * OS1_S1 + 0) +
                    alpha_Z * *(b + 703 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 576 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 576 * OS1_S1 + 1));
                *(b + 848 * OS1_S1 + 0) =
                    Y_PA * *(b + 705 * OS1_S1 + 0) +
                    alpha_Y * *(b + 705 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 579 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 579 * OS1_S1 + 1));
                *(b + 849 * OS1_S1 + 0) =
                    Y_PA * *(b + 706 * OS1_S1 + 0) +
                    alpha_Y * *(b + 706 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 580 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 580 * OS1_S1 + 1));
                *(b + 850 * OS1_S1 + 0) = Y_PA * *(b + 707 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 707 * OS1_S1 + 1);
                *(b + 851 * OS1_S1 + 0) =
                    Z_PA * *(b + 707 * OS1_S1 + 0) +
                    alpha_Z * *(b + 707 * OS1_S1 + 1) +
                    6 * one_over_two_p *
                        (*(b + 580 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 580 * OS1_S1 + 1));
                *(b + 852 * OS1_S1 + 0) =
                    Y_PA * *(b + 708 * OS1_S1 + 0) +
                    alpha_Y * *(b + 708 * OS1_S1 + 1) +
                    7 * one_over_two_p *
                        (*(b + 581 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 581 * OS1_S1 + 1));
                *(b + 853 * OS1_S1 + 0) = Z_PA * *(b + 708 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 708 * OS1_S1 + 1);
                *(b + 854 * OS1_S1 + 0) =
                    Z_PA * *(b + 709 * OS1_S1 + 0) +
                    alpha_Z * *(b + 709 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 581 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 581 * OS1_S1 + 1));
                *(b + 855 * OS1_S1 + 0) =
                    Z_PA * *(b + 710 * OS1_S1 + 0) +
                    alpha_Z * *(b + 710 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 582 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 582 * OS1_S1 + 1));
                *(b + 856 * OS1_S1 + 0) =
                    Z_PA * *(b + 711 * OS1_S1 + 0) +
                    alpha_Z * *(b + 711 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 583 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 583 * OS1_S1 + 1));
                *(b + 857 * OS1_S1 + 0) =
                    Y_PA * *(b + 713 * OS1_S1 + 0) +
                    alpha_Y * *(b + 713 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 586 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 586 * OS1_S1 + 1));
                *(b + 858 * OS1_S1 + 0) =
                    Y_PA * *(b + 714 * OS1_S1 + 0) +
                    alpha_Y * *(b + 714 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 587 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 587 * OS1_S1 + 1));
                *(b + 859 * OS1_S1 + 0) = Y_PA * *(b + 715 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 715 * OS1_S1 + 1);
                *(b + 860 * OS1_S1 + 0) =
                    Z_PA * *(b + 715 * OS1_S1 + 0) +
                    alpha_Z * *(b + 715 * OS1_S1 + 1) +
                    7 * one_over_two_p *
                        (*(b + 587 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 587 * OS1_S1 + 1));
                *(b + 861 * OS1_S1 + 0) =
                    X_PA * *(b + 725 * OS1_S1 + 0) +
                    alpha_X * *(b + 725 * OS1_S1 + 1) +
                    6 * one_over_two_p *
                        (*(b + 605 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 605 * OS1_S1 + 1));
                *(b + 862 * OS1_S1 + 0) = Z_PA * *(b + 716 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 716 * OS1_S1 + 1);
                *(b + 863 * OS1_S1 + 0) =
                    Z_PA * *(b + 717 * OS1_S1 + 0) +
                    alpha_Z * *(b + 717 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 588 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 588 * OS1_S1 + 1));
                *(b + 864 * OS1_S1 + 0) =
                    Z_PA * *(b + 718 * OS1_S1 + 0) +
                    alpha_Z * *(b + 718 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 589 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 589 * OS1_S1 + 1));
                *(b + 865 * OS1_S1 + 0) =
                    Z_PA * *(b + 719 * OS1_S1 + 0) +
                    alpha_Z * *(b + 719 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 590 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 590 * OS1_S1 + 1));
                *(b + 866 * OS1_S1 + 0) =
                    Y_PA * *(b + 721 * OS1_S1 + 0) +
                    alpha_Y * *(b + 721 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 593 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 593 * OS1_S1 + 1));
                *(b + 867 * OS1_S1 + 0) =
                    Y_PA * *(b + 722 * OS1_S1 + 0) +
                    alpha_Y * *(b + 722 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 594 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 594 * OS1_S1 + 1));
                *(b + 868 * OS1_S1 + 0) =
                    Y_PA * *(b + 723 * OS1_S1 + 0) +
                    alpha_Y * *(b + 723 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 595 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 595 * OS1_S1 + 1));
                *(b + 869 * OS1_S1 + 0) = Y_PA * *(b + 724 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 724 * OS1_S1 + 1);
                *(b + 870 * OS1_S1 + 0) =
                    X_PA * *(b + 734 * OS1_S1 + 0) +
                    alpha_X * *(b + 734 * OS1_S1 + 1) +
                    6 * one_over_two_p *
                        (*(b + 614 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 614 * OS1_S1 + 1));
                *(b + 871 * OS1_S1 + 0) =
                    X_PA * *(b + 735 * OS1_S1 + 0) +
                    alpha_X * *(b + 735 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 615 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 615 * OS1_S1 + 1));
                *(b + 872 * OS1_S1 + 0) = Z_PA * *(b + 725 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 725 * OS1_S1 + 1);
                *(b + 873 * OS1_S1 + 0) =
                    Z_PA * *(b + 726 * OS1_S1 + 0) +
                    alpha_Z * *(b + 726 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 596 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 596 * OS1_S1 + 1));
                *(b + 874 * OS1_S1 + 0) =
                    Z_PA * *(b + 727 * OS1_S1 + 0) +
                    alpha_Z * *(b + 727 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 597 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 597 * OS1_S1 + 1));
                *(b + 875 * OS1_S1 + 0) =
                    Z_PA * *(b + 728 * OS1_S1 + 0) +
                    alpha_Z * *(b + 728 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 598 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 598 * OS1_S1 + 1));
                *(b + 876 * OS1_S1 + 0) =
                    Z_PA * *(b + 729 * OS1_S1 + 0) +
                    alpha_Z * *(b + 729 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 599 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 599 * OS1_S1 + 1));
                *(b + 877 * OS1_S1 + 0) =
                    Y_PA * *(b + 731 * OS1_S1 + 0) +
                    alpha_Y * *(b + 731 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 602 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 602 * OS1_S1 + 1));
                *(b + 878 * OS1_S1 + 0) =
                    Y_PA * *(b + 732 * OS1_S1 + 0) +
                    alpha_Y * *(b + 732 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 603 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 603 * OS1_S1 + 1));
                *(b + 879 * OS1_S1 + 0) =
                    Y_PA * *(b + 733 * OS1_S1 + 0) +
                    alpha_Y * *(b + 733 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 604 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 604 * OS1_S1 + 1));
                *(b + 880 * OS1_S1 + 0) = Y_PA * *(b + 734 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 734 * OS1_S1 + 1);
                *(b + 881 * OS1_S1 + 0) =
                    X_PA * *(b + 745 * OS1_S1 + 0) +
                    alpha_X * *(b + 745 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 625 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 625 * OS1_S1 + 1));
                *(b + 882 * OS1_S1 + 0) =
                    X_PA * *(b + 746 * OS1_S1 + 0) +
                    alpha_X * *(b + 746 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 626 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 626 * OS1_S1 + 1));
                *(b + 883 * OS1_S1 + 0) = Z_PA * *(b + 735 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 735 * OS1_S1 + 1);
                *(b + 884 * OS1_S1 + 0) =
                    Z_PA * *(b + 736 * OS1_S1 + 0) +
                    alpha_Z * *(b + 736 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 605 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 605 * OS1_S1 + 1));
                *(b + 885 * OS1_S1 + 0) =
                    Z_PA * *(b + 737 * OS1_S1 + 0) +
                    alpha_Z * *(b + 737 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 606 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 606 * OS1_S1 + 1));
                *(b + 886 * OS1_S1 + 0) =
                    Z_PA * *(b + 738 * OS1_S1 + 0) +
                    alpha_Z * *(b + 738 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 607 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 607 * OS1_S1 + 1));
                *(b + 887 * OS1_S1 + 0) =
                    Z_PA * *(b + 739 * OS1_S1 + 0) +
                    alpha_Z * *(b + 739 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 608 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 608 * OS1_S1 + 1));
                *(b + 888 * OS1_S1 + 0) =
                    Y_PA * *(b + 741 * OS1_S1 + 0) +
                    alpha_Y * *(b + 741 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 611 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 611 * OS1_S1 + 1));
                *(b + 889 * OS1_S1 + 0) =
                    Y_PA * *(b + 742 * OS1_S1 + 0) +
                    alpha_Y * *(b + 742 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 612 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 612 * OS1_S1 + 1));
                *(b + 890 * OS1_S1 + 0) =
                    Y_PA * *(b + 743 * OS1_S1 + 0) +
                    alpha_Y * *(b + 743 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 613 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 613 * OS1_S1 + 1));
                *(b + 891 * OS1_S1 + 0) =
                    Y_PA * *(b + 744 * OS1_S1 + 0) +
                    alpha_Y * *(b + 744 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 614 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 614 * OS1_S1 + 1));
                *(b + 892 * OS1_S1 + 0) = Y_PA * *(b + 745 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 745 * OS1_S1 + 1);
                *(b + 893 * OS1_S1 + 0) =
                    X_PA * *(b + 757 * OS1_S1 + 0) +
                    alpha_X * *(b + 757 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 637 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 637 * OS1_S1 + 1));
                *(b + 894 * OS1_S1 + 0) =
                    X_PA * *(b + 758 * OS1_S1 + 0) +
                    alpha_X * *(b + 758 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 638 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 638 * OS1_S1 + 1));
                *(b + 895 * OS1_S1 + 0) = Z_PA * *(b + 746 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 746 * OS1_S1 + 1);
                *(b + 896 * OS1_S1 + 0) =
                    Z_PA * *(b + 747 * OS1_S1 + 0) +
                    alpha_Z * *(b + 747 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 615 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 615 * OS1_S1 + 1));
                *(b + 897 * OS1_S1 + 0) =
                    Z_PA * *(b + 748 * OS1_S1 + 0) +
                    alpha_Z * *(b + 748 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 616 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 616 * OS1_S1 + 1));
                *(b + 898 * OS1_S1 + 0) =
                    Z_PA * *(b + 749 * OS1_S1 + 0) +
                    alpha_Z * *(b + 749 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 617 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 617 * OS1_S1 + 1));
                *(b + 899 * OS1_S1 + 0) =
                    X_PA * *(b + 763 * OS1_S1 + 0) +
                    alpha_X * *(b + 763 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 643 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 643 * OS1_S1 + 1));
                *(b + 900 * OS1_S1 + 0) =
                    X_PA * *(b + 764 * OS1_S1 + 0) +
                    alpha_X * *(b + 764 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 644 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 644 * OS1_S1 + 1));
                *(b + 901 * OS1_S1 + 0) =
                    X_PA * *(b + 765 * OS1_S1 + 0) +
                    alpha_X * *(b + 765 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 645 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 645 * OS1_S1 + 1));
                *(b + 902 * OS1_S1 + 0) =
                    Y_PA * *(b + 754 * OS1_S1 + 0) +
                    alpha_Y * *(b + 754 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 623 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 623 * OS1_S1 + 1));
                *(b + 903 * OS1_S1 + 0) =
                    Y_PA * *(b + 755 * OS1_S1 + 0) +
                    alpha_Y * *(b + 755 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 624 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 624 * OS1_S1 + 1));
                *(b + 904 * OS1_S1 + 0) =
                    Y_PA * *(b + 756 * OS1_S1 + 0) +
                    alpha_Y * *(b + 756 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 625 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 625 * OS1_S1 + 1));
                *(b + 905 * OS1_S1 + 0) = Y_PA * *(b + 757 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 757 * OS1_S1 + 1);
                *(b + 906 * OS1_S1 + 0) =
                    X_PA * *(b + 770 * OS1_S1 + 0) +
                    alpha_X * *(b + 770 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 650 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 650 * OS1_S1 + 1));
                *(b + 907 * OS1_S1 + 0) =
                    X_PA * *(b + 771 * OS1_S1 + 0) +
                    alpha_X * *(b + 771 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 651 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 651 * OS1_S1 + 1));
                *(b + 908 * OS1_S1 + 0) = Z_PA * *(b + 758 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 758 * OS1_S1 + 1);
                *(b + 909 * OS1_S1 + 0) =
                    Z_PA * *(b + 759 * OS1_S1 + 0) +
                    alpha_Z * *(b + 759 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 626 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 626 * OS1_S1 + 1));
                *(b + 910 * OS1_S1 + 0) =
                    Z_PA * *(b + 760 * OS1_S1 + 0) +
                    alpha_Z * *(b + 760 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 627 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 627 * OS1_S1 + 1));
                *(b + 911 * OS1_S1 + 0) =
                    X_PA * *(b + 775 * OS1_S1 + 0) +
                    alpha_X * *(b + 775 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 655 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 655 * OS1_S1 + 1));
                *(b + 912 * OS1_S1 + 0) =
                    X_PA * *(b + 776 * OS1_S1 + 0) +
                    alpha_X * *(b + 776 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 656 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 656 * OS1_S1 + 1));
                *(b + 913 * OS1_S1 + 0) =
                    X_PA * *(b + 777 * OS1_S1 + 0) +
                    alpha_X * *(b + 777 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 657 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 657 * OS1_S1 + 1));
                *(b + 914 * OS1_S1 + 0) =
                    X_PA * *(b + 778 * OS1_S1 + 0) +
                    alpha_X * *(b + 778 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 658 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 658 * OS1_S1 + 1));
                *(b + 915 * OS1_S1 + 0) =
                    X_PA * *(b + 779 * OS1_S1 + 0) +
                    alpha_X * *(b + 779 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 659 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 659 * OS1_S1 + 1));
                *(b + 916 * OS1_S1 + 0) =
                    X_PA * *(b + 780 * OS1_S1 + 0) +
                    alpha_X * *(b + 780 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 660 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 660 * OS1_S1 + 1));
                *(b + 917 * OS1_S1 + 0) =
                    Y_PA * *(b + 768 * OS1_S1 + 0) +
                    alpha_Y * *(b + 768 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 636 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 636 * OS1_S1 + 1));
                *(b + 918 * OS1_S1 + 0) =
                    Y_PA * *(b + 769 * OS1_S1 + 0) +
                    alpha_Y * *(b + 769 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 637 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 637 * OS1_S1 + 1));
                *(b + 919 * OS1_S1 + 0) = Y_PA * *(b + 770 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 770 * OS1_S1 + 1);
                *(b + 920 * OS1_S1 + 0) =
                    X_PA * *(b + 784 * OS1_S1 + 0) +
                    alpha_X * *(b + 784 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 664 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 664 * OS1_S1 + 1));
                *(b + 921 * OS1_S1 + 0) =
                    X_PA * *(b + 785 * OS1_S1 + 0) +
                    alpha_X * *(b + 785 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 665 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 665 * OS1_S1 + 1));
                *(b + 922 * OS1_S1 + 0) = Z_PA * *(b + 771 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 771 * OS1_S1 + 1);
                *(b + 923 * OS1_S1 + 0) =
                    Z_PA * *(b + 772 * OS1_S1 + 0) +
                    alpha_Z * *(b + 772 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 638 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 638 * OS1_S1 + 1));
                *(b + 924 * OS1_S1 + 0) =
                    X_PA * *(b + 788 * OS1_S1 + 0) +
                    alpha_X * *(b + 788 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 668 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 668 * OS1_S1 + 1));
                *(b + 925 * OS1_S1 + 0) =
                    X_PA * *(b + 789 * OS1_S1 + 0) +
                    alpha_X * *(b + 789 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 669 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 669 * OS1_S1 + 1));
                *(b + 926 * OS1_S1 + 0) =
                    X_PA * *(b + 790 * OS1_S1 + 0) +
                    alpha_X * *(b + 790 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 670 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 670 * OS1_S1 + 1));
                *(b + 927 * OS1_S1 + 0) =
                    X_PA * *(b + 791 * OS1_S1 + 0) +
                    alpha_X * *(b + 791 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 671 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 671 * OS1_S1 + 1));
                *(b + 928 * OS1_S1 + 0) =
                    X_PA * *(b + 792 * OS1_S1 + 0) +
                    alpha_X * *(b + 792 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 672 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 672 * OS1_S1 + 1));
                *(b + 929 * OS1_S1 + 0) =
                    X_PA * *(b + 793 * OS1_S1 + 0) +
                    alpha_X * *(b + 793 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 673 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 673 * OS1_S1 + 1));
                *(b + 930 * OS1_S1 + 0) =
                    X_PA * *(b + 794 * OS1_S1 + 0) +
                    alpha_X * *(b + 794 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 674 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 674 * OS1_S1 + 1));
                *(b + 931 * OS1_S1 + 0) =
                    X_PA * *(b + 795 * OS1_S1 + 0) +
                    alpha_X * *(b + 795 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 675 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 675 * OS1_S1 + 1));
                *(b + 932 * OS1_S1 + 0) =
                    X_PA * *(b + 796 * OS1_S1 + 0) +
                    alpha_X * *(b + 796 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 676 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 676 * OS1_S1 + 1));
                *(b + 933 * OS1_S1 + 0) =
                    Y_PA * *(b + 783 * OS1_S1 + 0) +
                    alpha_Y * *(b + 783 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 650 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 650 * OS1_S1 + 1));
                *(b + 934 * OS1_S1 + 0) = Y_PA * *(b + 784 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 784 * OS1_S1 + 1);
                *(b + 935 * OS1_S1 + 0) =
                    X_PA * *(b + 799 * OS1_S1 + 0) +
                    alpha_X * *(b + 799 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 679 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 679 * OS1_S1 + 1));
                *(b + 936 * OS1_S1 + 0) = X_PA * *(b + 800 * OS1_S1 + 0) +
                                          alpha_X * *(b + 800 * OS1_S1 + 1);
                *(b + 937 * OS1_S1 + 0) = Z_PA * *(b + 785 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 785 * OS1_S1 + 1);
                *(b + 938 * OS1_S1 + 0) = X_PA * *(b + 802 * OS1_S1 + 0) +
                                          alpha_X * *(b + 802 * OS1_S1 + 1);
                *(b + 939 * OS1_S1 + 0) = X_PA * *(b + 803 * OS1_S1 + 0) +
                                          alpha_X * *(b + 803 * OS1_S1 + 1);
                *(b + 940 * OS1_S1 + 0) = X_PA * *(b + 804 * OS1_S1 + 0) +
                                          alpha_X * *(b + 804 * OS1_S1 + 1);
                *(b + 941 * OS1_S1 + 0) = X_PA * *(b + 805 * OS1_S1 + 0) +
                                          alpha_X * *(b + 805 * OS1_S1 + 1);
                *(b + 942 * OS1_S1 + 0) = X_PA * *(b + 806 * OS1_S1 + 0) +
                                          alpha_X * *(b + 806 * OS1_S1 + 1);
                *(b + 943 * OS1_S1 + 0) = X_PA * *(b + 807 * OS1_S1 + 0) +
                                          alpha_X * *(b + 807 * OS1_S1 + 1);
                *(b + 944 * OS1_S1 + 0) = X_PA * *(b + 808 * OS1_S1 + 0) +
                                          alpha_X * *(b + 808 * OS1_S1 + 1);
                *(b + 945 * OS1_S1 + 0) = X_PA * *(b + 809 * OS1_S1 + 0) +
                                          alpha_X * *(b + 809 * OS1_S1 + 1);
                *(b + 946 * OS1_S1 + 0) = X_PA * *(b + 810 * OS1_S1 + 0) +
                                          alpha_X * *(b + 810 * OS1_S1 + 1);
                *(b + 947 * OS1_S1 + 0) = X_PA * *(b + 811 * OS1_S1 + 0) +
                                          alpha_X * *(b + 811 * OS1_S1 + 1);
                *(b + 948 * OS1_S1 + 0) = X_PA * *(b + 812 * OS1_S1 + 0) +
                                          alpha_X * *(b + 812 * OS1_S1 + 1);
                *(b + 949 * OS1_S1 + 0) = X_PA * *(b + 813 * OS1_S1 + 0) +
                                          alpha_X * *(b + 813 * OS1_S1 + 1);
                *(b + 950 * OS1_S1 + 0) = Y_PA * *(b + 799 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 799 * OS1_S1 + 1);
                *(b + 951 * OS1_S1 + 0) = X_PA * *(b + 815 * OS1_S1 + 0) +
                                          alpha_X * *(b + 815 * OS1_S1 + 1);
                *(b + 952 * OS1_S1 + 0) =
                    Y_PA * *(b + 800 * OS1_S1 + 0) +
                    alpha_Y * *(b + 800 * OS1_S1 + 1) +
                    15 * one_over_two_p *
                        (*(b + 665 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 665 * OS1_S1 + 1));
                *(b + 953 * OS1_S1 + 0) = Z_PA * *(b + 800 * OS1_S1 + 0) +
                                          alpha_Z * *(b + 800 * OS1_S1 + 1);
                *(b + 954 * OS1_S1 + 0) =
                    Z_PA * *(b + 801 * OS1_S1 + 0) +
                    alpha_Z * *(b + 801 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 665 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 665 * OS1_S1 + 1));
                *(b + 955 * OS1_S1 + 0) =
                    Z_PA * *(b + 802 * OS1_S1 + 0) +
                    alpha_Z * *(b + 802 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 666 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 666 * OS1_S1 + 1));
                *(b + 956 * OS1_S1 + 0) =
                    Z_PA * *(b + 803 * OS1_S1 + 0) +
                    alpha_Z * *(b + 803 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 667 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 667 * OS1_S1 + 1));
                *(b + 957 * OS1_S1 + 0) =
                    Z_PA * *(b + 804 * OS1_S1 + 0) +
                    alpha_Z * *(b + 804 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 668 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 668 * OS1_S1 + 1));
                *(b + 958 * OS1_S1 + 0) =
                    Z_PA * *(b + 805 * OS1_S1 + 0) +
                    alpha_Z * *(b + 805 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 669 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 669 * OS1_S1 + 1));
                *(b + 959 * OS1_S1 + 0) =
                    Z_PA * *(b + 806 * OS1_S1 + 0) +
                    alpha_Z * *(b + 806 * OS1_S1 + 1) +
                    6 * one_over_two_p *
                        (*(b + 670 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 670 * OS1_S1 + 1));
                *(b + 960 * OS1_S1 + 0) =
                    Z_PA * *(b + 807 * OS1_S1 + 0) +
                    alpha_Z * *(b + 807 * OS1_S1 + 1) +
                    7 * one_over_two_p *
                        (*(b + 671 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 671 * OS1_S1 + 1));
                *(b + 961 * OS1_S1 + 0) =
                    Y_PA * *(b + 809 * OS1_S1 + 0) +
                    alpha_Y * *(b + 809 * OS1_S1 + 1) +
                    6 * one_over_two_p *
                        (*(b + 674 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 674 * OS1_S1 + 1));
                *(b + 962 * OS1_S1 + 0) =
                    Y_PA * *(b + 810 * OS1_S1 + 0) +
                    alpha_Y * *(b + 810 * OS1_S1 + 1) +
                    5 * one_over_two_p *
                        (*(b + 675 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 675 * OS1_S1 + 1));
                *(b + 963 * OS1_S1 + 0) =
                    Y_PA * *(b + 811 * OS1_S1 + 0) +
                    alpha_Y * *(b + 811 * OS1_S1 + 1) +
                    4 * one_over_two_p *
                        (*(b + 676 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 676 * OS1_S1 + 1));
                *(b + 964 * OS1_S1 + 0) =
                    Y_PA * *(b + 812 * OS1_S1 + 0) +
                    alpha_Y * *(b + 812 * OS1_S1 + 1) +
                    3 * one_over_two_p *
                        (*(b + 677 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 677 * OS1_S1 + 1));
                *(b + 965 * OS1_S1 + 0) =
                    Y_PA * *(b + 813 * OS1_S1 + 0) +
                    alpha_Y * *(b + 813 * OS1_S1 + 1) +
                    2 * one_over_two_p *
                        (*(b + 678 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 678 * OS1_S1 + 1));
                *(b + 966 * OS1_S1 + 0) =
                    Y_PA * *(b + 814 * OS1_S1 + 0) +
                    alpha_Y * *(b + 814 * OS1_S1 + 1) +
                    one_over_two_p * (*(b + 679 * OS1_S1 + 0) -
                                      alpha_over_p * *(b + 679 * OS1_S1 + 1));
                *(b + 967 * OS1_S1 + 0) = Y_PA * *(b + 815 * OS1_S1 + 0) +
                                          alpha_Y * *(b + 815 * OS1_S1 + 1);
                *(b + 968 * OS1_S1 + 0) =
                    Z_PA * *(b + 815 * OS1_S1 + 0) +
                    alpha_Z * *(b + 815 * OS1_S1 + 1) +
                    15 * one_over_two_p *
                        (*(b + 679 * OS1_S1 + 0) -
                         alpha_over_p * *(b + 679 * OS1_S1 + 1));
            }
            return;
        }
    }
}
