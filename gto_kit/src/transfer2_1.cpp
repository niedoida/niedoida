/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_9_2(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 165 * OS1_S1 + 4) =
                prefactor_x * *(b + 165 * OS1_S1 + 1) -
                p_over_q * *(b + 220 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 1) +
                one_over_two_q * *(b + 165 * OS1_S1 + 0);
            *(b + 165 * OS1_S1 + 5) = prefactor_y * *(b + 165 * OS1_S1 + 1) -
                                      p_over_q * *(b + 221 * OS1_S1 + 1);
            *(b + 165 * OS1_S1 + 6) = prefactor_z * *(b + 165 * OS1_S1 + 1) -
                                      p_over_q * *(b + 222 * OS1_S1 + 1);
            *(b + 165 * OS1_S1 + 7) = prefactor_y * *(b + 165 * OS1_S1 + 2) -
                                      p_over_q * *(b + 221 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 165 * OS1_S1 + 0);
            *(b + 165 * OS1_S1 + 8) = prefactor_z * *(b + 165 * OS1_S1 + 2) -
                                      p_over_q * *(b + 222 * OS1_S1 + 2);
            *(b + 165 * OS1_S1 + 9) = prefactor_z * *(b + 165 * OS1_S1 + 3) -
                                      p_over_q * *(b + 222 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 165 * OS1_S1 + 0);
            *(b + 166 * OS1_S1 + 4) =
                prefactor_x * *(b + 166 * OS1_S1 + 1) -
                p_over_q * *(b + 221 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 1) +
                one_over_two_q * *(b + 166 * OS1_S1 + 0);
            *(b + 166 * OS1_S1 + 5) = prefactor_y * *(b + 166 * OS1_S1 + 1) -
                                      p_over_q * *(b + 223 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 120 * OS1_S1 + 1);
            *(b + 166 * OS1_S1 + 6) = prefactor_z * *(b + 166 * OS1_S1 + 1) -
                                      p_over_q * *(b + 224 * OS1_S1 + 1);
            *(b + 166 * OS1_S1 + 7) = prefactor_y * *(b + 166 * OS1_S1 + 2) -
                                      p_over_q * *(b + 223 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 120 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 166 * OS1_S1 + 0);
            *(b + 166 * OS1_S1 + 8) = prefactor_z * *(b + 166 * OS1_S1 + 2) -
                                      p_over_q * *(b + 224 * OS1_S1 + 2);
            *(b + 166 * OS1_S1 + 9) = prefactor_z * *(b + 166 * OS1_S1 + 3) -
                                      p_over_q * *(b + 224 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 166 * OS1_S1 + 0);
            *(b + 167 * OS1_S1 + 4) =
                prefactor_x * *(b + 167 * OS1_S1 + 1) -
                p_over_q * *(b + 222 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 1) +
                one_over_two_q * *(b + 167 * OS1_S1 + 0);
            *(b + 167 * OS1_S1 + 5) = prefactor_y * *(b + 167 * OS1_S1 + 1) -
                                      p_over_q * *(b + 224 * OS1_S1 + 1);
            *(b + 167 * OS1_S1 + 6) = prefactor_z * *(b + 167 * OS1_S1 + 1) -
                                      p_over_q * *(b + 225 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 120 * OS1_S1 + 1);
            *(b + 167 * OS1_S1 + 7) = prefactor_y * *(b + 167 * OS1_S1 + 2) -
                                      p_over_q * *(b + 224 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 167 * OS1_S1 + 0);
            *(b + 167 * OS1_S1 + 8) = prefactor_y * *(b + 167 * OS1_S1 + 3) -
                                      p_over_q * *(b + 224 * OS1_S1 + 3);
            *(b + 167 * OS1_S1 + 9) = prefactor_z * *(b + 167 * OS1_S1 + 3) -
                                      p_over_q * *(b + 225 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 120 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 167 * OS1_S1 + 0);
            *(b + 168 * OS1_S1 + 4) =
                prefactor_x * *(b + 168 * OS1_S1 + 1) -
                p_over_q * *(b + 223 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 1) +
                one_over_two_q * *(b + 168 * OS1_S1 + 0);
            *(b + 168 * OS1_S1 + 5) =
                prefactor_y * *(b + 168 * OS1_S1 + 1) -
                p_over_q * *(b + 226 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 1);
            *(b + 168 * OS1_S1 + 6) = prefactor_z * *(b + 168 * OS1_S1 + 1) -
                                      p_over_q * *(b + 227 * OS1_S1 + 1);
            *(b + 168 * OS1_S1 + 7) =
                prefactor_y * *(b + 168 * OS1_S1 + 2) -
                p_over_q * *(b + 226 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 2) +
                one_over_two_q * *(b + 168 * OS1_S1 + 0);
            *(b + 168 * OS1_S1 + 8) = prefactor_z * *(b + 168 * OS1_S1 + 2) -
                                      p_over_q * *(b + 227 * OS1_S1 + 2);
            *(b + 168 * OS1_S1 + 9) = prefactor_z * *(b + 168 * OS1_S1 + 3) -
                                      p_over_q * *(b + 227 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 168 * OS1_S1 + 0);
            *(b + 169 * OS1_S1 + 4) =
                prefactor_x * *(b + 169 * OS1_S1 + 1) -
                p_over_q * *(b + 224 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 1) +
                one_over_two_q * *(b + 169 * OS1_S1 + 0);
            *(b + 169 * OS1_S1 + 5) = prefactor_y * *(b + 169 * OS1_S1 + 1) -
                                      p_over_q * *(b + 227 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 122 * OS1_S1 + 1);
            *(b + 169 * OS1_S1 + 6) = prefactor_z * *(b + 169 * OS1_S1 + 1) -
                                      p_over_q * *(b + 228 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 121 * OS1_S1 + 1);
            *(b + 169 * OS1_S1 + 7) = prefactor_y * *(b + 169 * OS1_S1 + 2) -
                                      p_over_q * *(b + 227 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 122 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 169 * OS1_S1 + 0);
            *(b + 169 * OS1_S1 + 8) = prefactor_z * *(b + 169 * OS1_S1 + 2) -
                                      p_over_q * *(b + 228 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 121 * OS1_S1 + 2);
            *(b + 169 * OS1_S1 + 9) = prefactor_z * *(b + 169 * OS1_S1 + 3) -
                                      p_over_q * *(b + 228 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 121 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 169 * OS1_S1 + 0);
            *(b + 170 * OS1_S1 + 4) =
                prefactor_x * *(b + 170 * OS1_S1 + 1) -
                p_over_q * *(b + 225 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 1) +
                one_over_two_q * *(b + 170 * OS1_S1 + 0);
            *(b + 170 * OS1_S1 + 5) = prefactor_y * *(b + 170 * OS1_S1 + 1) -
                                      p_over_q * *(b + 228 * OS1_S1 + 1);
            *(b + 170 * OS1_S1 + 6) =
                prefactor_z * *(b + 170 * OS1_S1 + 1) -
                p_over_q * *(b + 229 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 1);
            *(b + 170 * OS1_S1 + 7) = prefactor_y * *(b + 170 * OS1_S1 + 2) -
                                      p_over_q * *(b + 228 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 170 * OS1_S1 + 0);
            *(b + 170 * OS1_S1 + 8) = prefactor_y * *(b + 170 * OS1_S1 + 3) -
                                      p_over_q * *(b + 228 * OS1_S1 + 3);
            *(b + 170 * OS1_S1 + 9) =
                prefactor_z * *(b + 170 * OS1_S1 + 3) -
                p_over_q * *(b + 229 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 3) +
                one_over_two_q * *(b + 170 * OS1_S1 + 0);
            *(b + 171 * OS1_S1 + 4) =
                prefactor_x * *(b + 171 * OS1_S1 + 1) -
                p_over_q * *(b + 226 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 1) +
                one_over_two_q * *(b + 171 * OS1_S1 + 0);
            *(b + 171 * OS1_S1 + 5) =
                prefactor_y * *(b + 171 * OS1_S1 + 1) -
                p_over_q * *(b + 230 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 1);
            *(b + 171 * OS1_S1 + 6) = prefactor_z * *(b + 171 * OS1_S1 + 1) -
                                      p_over_q * *(b + 231 * OS1_S1 + 1);
            *(b + 171 * OS1_S1 + 7) =
                prefactor_y * *(b + 171 * OS1_S1 + 2) -
                p_over_q * *(b + 230 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 2) +
                one_over_two_q * *(b + 171 * OS1_S1 + 0);
            *(b + 171 * OS1_S1 + 8) = prefactor_z * *(b + 171 * OS1_S1 + 2) -
                                      p_over_q * *(b + 231 * OS1_S1 + 2);
            *(b + 171 * OS1_S1 + 9) = prefactor_z * *(b + 171 * OS1_S1 + 3) -
                                      p_over_q * *(b + 231 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 171 * OS1_S1 + 0);
            *(b + 172 * OS1_S1 + 4) =
                prefactor_x * *(b + 172 * OS1_S1 + 1) -
                p_over_q * *(b + 227 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 1) +
                one_over_two_q * *(b + 172 * OS1_S1 + 0);
            *(b + 172 * OS1_S1 + 5) =
                prefactor_y * *(b + 172 * OS1_S1 + 1) -
                p_over_q * *(b + 231 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 1);
            *(b + 172 * OS1_S1 + 6) = prefactor_z * *(b + 172 * OS1_S1 + 1) -
                                      p_over_q * *(b + 232 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 123 * OS1_S1 + 1);
            *(b + 172 * OS1_S1 + 7) =
                prefactor_y * *(b + 172 * OS1_S1 + 2) -
                p_over_q * *(b + 231 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 2) +
                one_over_two_q * *(b + 172 * OS1_S1 + 0);
            *(b + 172 * OS1_S1 + 8) = prefactor_z * *(b + 172 * OS1_S1 + 2) -
                                      p_over_q * *(b + 232 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 123 * OS1_S1 + 2);
            *(b + 172 * OS1_S1 + 9) = prefactor_z * *(b + 172 * OS1_S1 + 3) -
                                      p_over_q * *(b + 232 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 123 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 172 * OS1_S1 + 0);
            *(b + 173 * OS1_S1 + 4) =
                prefactor_x * *(b + 173 * OS1_S1 + 1) -
                p_over_q * *(b + 228 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 1) +
                one_over_two_q * *(b + 173 * OS1_S1 + 0);
            *(b + 173 * OS1_S1 + 5) = prefactor_y * *(b + 173 * OS1_S1 + 1) -
                                      p_over_q * *(b + 232 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 125 * OS1_S1 + 1);
            *(b + 173 * OS1_S1 + 6) =
                prefactor_z * *(b + 173 * OS1_S1 + 1) -
                p_over_q * *(b + 233 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 1);
            *(b + 173 * OS1_S1 + 7) = prefactor_y * *(b + 173 * OS1_S1 + 2) -
                                      p_over_q * *(b + 232 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 125 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 173 * OS1_S1 + 0);
            *(b + 173 * OS1_S1 + 8) = prefactor_y * *(b + 173 * OS1_S1 + 3) -
                                      p_over_q * *(b + 232 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 125 * OS1_S1 + 3);
            *(b + 173 * OS1_S1 + 9) =
                prefactor_z * *(b + 173 * OS1_S1 + 3) -
                p_over_q * *(b + 233 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 3) +
                one_over_two_q * *(b + 173 * OS1_S1 + 0);
            *(b + 174 * OS1_S1 + 4) =
                prefactor_x * *(b + 174 * OS1_S1 + 1) -
                p_over_q * *(b + 229 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 1) +
                one_over_two_q * *(b + 174 * OS1_S1 + 0);
            *(b + 174 * OS1_S1 + 5) = prefactor_y * *(b + 174 * OS1_S1 + 1) -
                                      p_over_q * *(b + 233 * OS1_S1 + 1);
            *(b + 174 * OS1_S1 + 6) =
                prefactor_z * *(b + 174 * OS1_S1 + 1) -
                p_over_q * *(b + 234 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 1);
            *(b + 174 * OS1_S1 + 7) = prefactor_y * *(b + 174 * OS1_S1 + 2) -
                                      p_over_q * *(b + 233 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 174 * OS1_S1 + 0);
            *(b + 174 * OS1_S1 + 8) = prefactor_y * *(b + 174 * OS1_S1 + 3) -
                                      p_over_q * *(b + 233 * OS1_S1 + 3);
            *(b + 174 * OS1_S1 + 9) =
                prefactor_z * *(b + 174 * OS1_S1 + 3) -
                p_over_q * *(b + 234 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 3) +
                one_over_two_q * *(b + 174 * OS1_S1 + 0);
            *(b + 175 * OS1_S1 + 4) =
                prefactor_x * *(b + 175 * OS1_S1 + 1) -
                p_over_q * *(b + 230 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 1) +
                one_over_two_q * *(b + 175 * OS1_S1 + 0);
            *(b + 175 * OS1_S1 + 5) =
                prefactor_y * *(b + 175 * OS1_S1 + 1) -
                p_over_q * *(b + 235 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 1);
            *(b + 175 * OS1_S1 + 6) = prefactor_z * *(b + 175 * OS1_S1 + 1) -
                                      p_over_q * *(b + 236 * OS1_S1 + 1);
            *(b + 175 * OS1_S1 + 7) =
                prefactor_y * *(b + 175 * OS1_S1 + 2) -
                p_over_q * *(b + 235 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 2) +
                one_over_two_q * *(b + 175 * OS1_S1 + 0);
            *(b + 175 * OS1_S1 + 8) = prefactor_z * *(b + 175 * OS1_S1 + 2) -
                                      p_over_q * *(b + 236 * OS1_S1 + 2);
            *(b + 175 * OS1_S1 + 9) = prefactor_z * *(b + 175 * OS1_S1 + 3) -
                                      p_over_q * *(b + 236 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 175 * OS1_S1 + 0);
            *(b + 176 * OS1_S1 + 4) =
                prefactor_x * *(b + 176 * OS1_S1 + 1) -
                p_over_q * *(b + 231 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 1) +
                one_over_two_q * *(b + 176 * OS1_S1 + 0);
            *(b + 176 * OS1_S1 + 5) =
                prefactor_y * *(b + 176 * OS1_S1 + 1) -
                p_over_q * *(b + 236 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 1);
            *(b + 176 * OS1_S1 + 6) = prefactor_z * *(b + 176 * OS1_S1 + 1) -
                                      p_over_q * *(b + 237 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 126 * OS1_S1 + 1);
            *(b + 176 * OS1_S1 + 7) =
                prefactor_y * *(b + 176 * OS1_S1 + 2) -
                p_over_q * *(b + 236 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 2) +
                one_over_two_q * *(b + 176 * OS1_S1 + 0);
            *(b + 176 * OS1_S1 + 8) = prefactor_z * *(b + 176 * OS1_S1 + 2) -
                                      p_over_q * *(b + 237 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 126 * OS1_S1 + 2);
            *(b + 176 * OS1_S1 + 9) = prefactor_z * *(b + 176 * OS1_S1 + 3) -
                                      p_over_q * *(b + 237 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 126 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 176 * OS1_S1 + 0);
            *(b + 177 * OS1_S1 + 4) =
                prefactor_x * *(b + 177 * OS1_S1 + 1) -
                p_over_q * *(b + 232 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 1) +
                one_over_two_q * *(b + 177 * OS1_S1 + 0);
            *(b + 177 * OS1_S1 + 5) =
                prefactor_y * *(b + 177 * OS1_S1 + 1) -
                p_over_q * *(b + 237 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 1);
            *(b + 177 * OS1_S1 + 6) =
                prefactor_z * *(b + 177 * OS1_S1 + 1) -
                p_over_q * *(b + 238 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 1);
            *(b + 177 * OS1_S1 + 7) =
                prefactor_y * *(b + 177 * OS1_S1 + 2) -
                p_over_q * *(b + 237 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 2) +
                one_over_two_q * *(b + 177 * OS1_S1 + 0);
            *(b + 177 * OS1_S1 + 8) =
                prefactor_z * *(b + 177 * OS1_S1 + 2) -
                p_over_q * *(b + 238 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 2);
            *(b + 177 * OS1_S1 + 9) =
                prefactor_z * *(b + 177 * OS1_S1 + 3) -
                p_over_q * *(b + 238 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 3) +
                one_over_two_q * *(b + 177 * OS1_S1 + 0);
            *(b + 178 * OS1_S1 + 4) =
                prefactor_x * *(b + 178 * OS1_S1 + 1) -
                p_over_q * *(b + 233 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 1) +
                one_over_two_q * *(b + 178 * OS1_S1 + 0);
            *(b + 178 * OS1_S1 + 5) = prefactor_y * *(b + 178 * OS1_S1 + 1) -
                                      p_over_q * *(b + 238 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 129 * OS1_S1 + 1);
            *(b + 178 * OS1_S1 + 6) =
                prefactor_z * *(b + 178 * OS1_S1 + 1) -
                p_over_q * *(b + 239 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 1);
            *(b + 178 * OS1_S1 + 7) = prefactor_y * *(b + 178 * OS1_S1 + 2) -
                                      p_over_q * *(b + 238 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 129 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 178 * OS1_S1 + 0);
            *(b + 178 * OS1_S1 + 8) = prefactor_y * *(b + 178 * OS1_S1 + 3) -
                                      p_over_q * *(b + 238 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 129 * OS1_S1 + 3);
            *(b + 178 * OS1_S1 + 9) =
                prefactor_z * *(b + 178 * OS1_S1 + 3) -
                p_over_q * *(b + 239 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 3) +
                one_over_two_q * *(b + 178 * OS1_S1 + 0);
            *(b + 179 * OS1_S1 + 4) =
                prefactor_x * *(b + 179 * OS1_S1 + 1) -
                p_over_q * *(b + 234 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 1) +
                one_over_two_q * *(b + 179 * OS1_S1 + 0);
            *(b + 179 * OS1_S1 + 5) = prefactor_y * *(b + 179 * OS1_S1 + 1) -
                                      p_over_q * *(b + 239 * OS1_S1 + 1);
            *(b + 179 * OS1_S1 + 6) =
                prefactor_z * *(b + 179 * OS1_S1 + 1) -
                p_over_q * *(b + 240 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 1);
            *(b + 179 * OS1_S1 + 7) = prefactor_y * *(b + 179 * OS1_S1 + 2) -
                                      p_over_q * *(b + 239 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 179 * OS1_S1 + 0);
            *(b + 179 * OS1_S1 + 8) = prefactor_y * *(b + 179 * OS1_S1 + 3) -
                                      p_over_q * *(b + 239 * OS1_S1 + 3);
            *(b + 179 * OS1_S1 + 9) =
                prefactor_z * *(b + 179 * OS1_S1 + 3) -
                p_over_q * *(b + 240 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 3) +
                one_over_two_q * *(b + 179 * OS1_S1 + 0);
            *(b + 180 * OS1_S1 + 4) =
                prefactor_x * *(b + 180 * OS1_S1 + 1) -
                p_over_q * *(b + 235 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 1) +
                one_over_two_q * *(b + 180 * OS1_S1 + 0);
            *(b + 180 * OS1_S1 + 5) =
                prefactor_x * *(b + 180 * OS1_S1 + 2) -
                p_over_q * *(b + 235 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 2);
            *(b + 180 * OS1_S1 + 6) = prefactor_z * *(b + 180 * OS1_S1 + 1) -
                                      p_over_q * *(b + 242 * OS1_S1 + 1);
            *(b + 180 * OS1_S1 + 7) =
                prefactor_y * *(b + 180 * OS1_S1 + 2) -
                p_over_q * *(b + 241 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 2) +
                one_over_two_q * *(b + 180 * OS1_S1 + 0);
            *(b + 180 * OS1_S1 + 8) = prefactor_z * *(b + 180 * OS1_S1 + 2) -
                                      p_over_q * *(b + 242 * OS1_S1 + 2);
            *(b + 180 * OS1_S1 + 9) = prefactor_z * *(b + 180 * OS1_S1 + 3) -
                                      p_over_q * *(b + 242 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 180 * OS1_S1 + 0);
            *(b + 181 * OS1_S1 + 4) =
                prefactor_x * *(b + 181 * OS1_S1 + 1) -
                p_over_q * *(b + 236 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 1) +
                one_over_two_q * *(b + 181 * OS1_S1 + 0);
            *(b + 181 * OS1_S1 + 5) =
                prefactor_y * *(b + 181 * OS1_S1 + 1) -
                p_over_q * *(b + 242 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 1);
            *(b + 181 * OS1_S1 + 6) = prefactor_z * *(b + 181 * OS1_S1 + 1) -
                                      p_over_q * *(b + 243 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 130 * OS1_S1 + 1);
            *(b + 181 * OS1_S1 + 7) =
                prefactor_y * *(b + 181 * OS1_S1 + 2) -
                p_over_q * *(b + 242 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 2) +
                one_over_two_q * *(b + 181 * OS1_S1 + 0);
            *(b + 181 * OS1_S1 + 8) = prefactor_z * *(b + 181 * OS1_S1 + 2) -
                                      p_over_q * *(b + 243 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 130 * OS1_S1 + 2);
            *(b + 181 * OS1_S1 + 9) = prefactor_z * *(b + 181 * OS1_S1 + 3) -
                                      p_over_q * *(b + 243 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 130 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 181 * OS1_S1 + 0);
            *(b + 182 * OS1_S1 + 4) =
                prefactor_x * *(b + 182 * OS1_S1 + 1) -
                p_over_q * *(b + 237 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 1) +
                one_over_two_q * *(b + 182 * OS1_S1 + 0);
            *(b + 182 * OS1_S1 + 5) =
                prefactor_y * *(b + 182 * OS1_S1 + 1) -
                p_over_q * *(b + 243 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 1);
            *(b + 182 * OS1_S1 + 6) =
                prefactor_z * *(b + 182 * OS1_S1 + 1) -
                p_over_q * *(b + 244 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 1);
            *(b + 182 * OS1_S1 + 7) =
                prefactor_y * *(b + 182 * OS1_S1 + 2) -
                p_over_q * *(b + 243 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 2) +
                one_over_two_q * *(b + 182 * OS1_S1 + 0);
            *(b + 182 * OS1_S1 + 8) =
                prefactor_z * *(b + 182 * OS1_S1 + 2) -
                p_over_q * *(b + 244 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 2);
            *(b + 182 * OS1_S1 + 9) =
                prefactor_z * *(b + 182 * OS1_S1 + 3) -
                p_over_q * *(b + 244 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 3) +
                one_over_two_q * *(b + 182 * OS1_S1 + 0);
            *(b + 183 * OS1_S1 + 4) =
                prefactor_x * *(b + 183 * OS1_S1 + 1) -
                p_over_q * *(b + 238 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 1) +
                one_over_two_q * *(b + 183 * OS1_S1 + 0);
            *(b + 183 * OS1_S1 + 5) =
                prefactor_y * *(b + 183 * OS1_S1 + 1) -
                p_over_q * *(b + 244 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 1);
            *(b + 183 * OS1_S1 + 6) =
                prefactor_z * *(b + 183 * OS1_S1 + 1) -
                p_over_q * *(b + 245 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 1);
            *(b + 183 * OS1_S1 + 7) =
                prefactor_y * *(b + 183 * OS1_S1 + 2) -
                p_over_q * *(b + 244 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 2) +
                one_over_two_q * *(b + 183 * OS1_S1 + 0);
            *(b + 183 * OS1_S1 + 8) =
                prefactor_y * *(b + 183 * OS1_S1 + 3) -
                p_over_q * *(b + 244 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 3);
            *(b + 183 * OS1_S1 + 9) =
                prefactor_z * *(b + 183 * OS1_S1 + 3) -
                p_over_q * *(b + 245 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 3) +
                one_over_two_q * *(b + 183 * OS1_S1 + 0);
            *(b + 184 * OS1_S1 + 4) =
                prefactor_x * *(b + 184 * OS1_S1 + 1) -
                p_over_q * *(b + 239 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 1) +
                one_over_two_q * *(b + 184 * OS1_S1 + 0);
            *(b + 184 * OS1_S1 + 5) = prefactor_y * *(b + 184 * OS1_S1 + 1) -
                                      p_over_q * *(b + 245 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 134 * OS1_S1 + 1);
            *(b + 184 * OS1_S1 + 6) =
                prefactor_z * *(b + 184 * OS1_S1 + 1) -
                p_over_q * *(b + 246 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 1);
            *(b + 184 * OS1_S1 + 7) = prefactor_y * *(b + 184 * OS1_S1 + 2) -
                                      p_over_q * *(b + 245 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 134 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 184 * OS1_S1 + 0);
            *(b + 184 * OS1_S1 + 8) = prefactor_y * *(b + 184 * OS1_S1 + 3) -
                                      p_over_q * *(b + 245 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 134 * OS1_S1 + 3);
            *(b + 184 * OS1_S1 + 9) =
                prefactor_z * *(b + 184 * OS1_S1 + 3) -
                p_over_q * *(b + 246 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 3) +
                one_over_two_q * *(b + 184 * OS1_S1 + 0);
            *(b + 185 * OS1_S1 + 4) =
                prefactor_x * *(b + 185 * OS1_S1 + 1) -
                p_over_q * *(b + 240 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 1) +
                one_over_two_q * *(b + 185 * OS1_S1 + 0);
            *(b + 185 * OS1_S1 + 5) = prefactor_y * *(b + 185 * OS1_S1 + 1) -
                                      p_over_q * *(b + 246 * OS1_S1 + 1);
            *(b + 185 * OS1_S1 + 6) =
                prefactor_x * *(b + 185 * OS1_S1 + 3) -
                p_over_q * *(b + 240 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 3);
            *(b + 185 * OS1_S1 + 7) = prefactor_y * *(b + 185 * OS1_S1 + 2) -
                                      p_over_q * *(b + 246 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 185 * OS1_S1 + 0);
            *(b + 185 * OS1_S1 + 8) = prefactor_y * *(b + 185 * OS1_S1 + 3) -
                                      p_over_q * *(b + 246 * OS1_S1 + 3);
            *(b + 185 * OS1_S1 + 9) =
                prefactor_z * *(b + 185 * OS1_S1 + 3) -
                p_over_q * *(b + 247 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 3) +
                one_over_two_q * *(b + 185 * OS1_S1 + 0);
            *(b + 186 * OS1_S1 + 4) =
                prefactor_x * *(b + 186 * OS1_S1 + 1) -
                p_over_q * *(b + 241 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 1) +
                one_over_two_q * *(b + 186 * OS1_S1 + 0);
            *(b + 186 * OS1_S1 + 5) =
                prefactor_x * *(b + 186 * OS1_S1 + 2) -
                p_over_q * *(b + 241 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 2);
            *(b + 186 * OS1_S1 + 6) = prefactor_z * *(b + 186 * OS1_S1 + 1) -
                                      p_over_q * *(b + 249 * OS1_S1 + 1);
            *(b + 186 * OS1_S1 + 7) =
                prefactor_y * *(b + 186 * OS1_S1 + 2) -
                p_over_q * *(b + 248 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 2) +
                one_over_two_q * *(b + 186 * OS1_S1 + 0);
            *(b + 186 * OS1_S1 + 8) = prefactor_z * *(b + 186 * OS1_S1 + 2) -
                                      p_over_q * *(b + 249 * OS1_S1 + 2);
            *(b + 186 * OS1_S1 + 9) = prefactor_z * *(b + 186 * OS1_S1 + 3) -
                                      p_over_q * *(b + 249 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 186 * OS1_S1 + 0);
            *(b + 187 * OS1_S1 + 4) =
                prefactor_x * *(b + 187 * OS1_S1 + 1) -
                p_over_q * *(b + 242 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 1) +
                one_over_two_q * *(b + 187 * OS1_S1 + 0);
            *(b + 187 * OS1_S1 + 5) =
                prefactor_x * *(b + 187 * OS1_S1 + 2) -
                p_over_q * *(b + 242 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 2);
            *(b + 187 * OS1_S1 + 6) = prefactor_z * *(b + 187 * OS1_S1 + 1) -
                                      p_over_q * *(b + 250 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 135 * OS1_S1 + 1);
            *(b + 187 * OS1_S1 + 7) =
                prefactor_y * *(b + 187 * OS1_S1 + 2) -
                p_over_q * *(b + 249 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 2) +
                one_over_two_q * *(b + 187 * OS1_S1 + 0);
            *(b + 187 * OS1_S1 + 8) = prefactor_z * *(b + 187 * OS1_S1 + 2) -
                                      p_over_q * *(b + 250 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 135 * OS1_S1 + 2);
            *(b + 187 * OS1_S1 + 9) = prefactor_z * *(b + 187 * OS1_S1 + 3) -
                                      p_over_q * *(b + 250 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 135 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 187 * OS1_S1 + 0);
            *(b + 188 * OS1_S1 + 4) =
                prefactor_x * *(b + 188 * OS1_S1 + 1) -
                p_over_q * *(b + 243 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 1) +
                one_over_two_q * *(b + 188 * OS1_S1 + 0);
            *(b + 188 * OS1_S1 + 5) =
                prefactor_x * *(b + 188 * OS1_S1 + 2) -
                p_over_q * *(b + 243 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 2);
            *(b + 188 * OS1_S1 + 6) =
                prefactor_z * *(b + 188 * OS1_S1 + 1) -
                p_over_q * *(b + 251 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 1);
            *(b + 188 * OS1_S1 + 7) =
                prefactor_y * *(b + 188 * OS1_S1 + 2) -
                p_over_q * *(b + 250 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 2) +
                one_over_two_q * *(b + 188 * OS1_S1 + 0);
            *(b + 188 * OS1_S1 + 8) =
                prefactor_z * *(b + 188 * OS1_S1 + 2) -
                p_over_q * *(b + 251 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 2);
            *(b + 188 * OS1_S1 + 9) =
                prefactor_z * *(b + 188 * OS1_S1 + 3) -
                p_over_q * *(b + 251 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 3) +
                one_over_two_q * *(b + 188 * OS1_S1 + 0);
            *(b + 189 * OS1_S1 + 4) =
                prefactor_x * *(b + 189 * OS1_S1 + 1) -
                p_over_q * *(b + 244 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 1) +
                one_over_two_q * *(b + 189 * OS1_S1 + 0);
            *(b + 189 * OS1_S1 + 5) =
                prefactor_y * *(b + 189 * OS1_S1 + 1) -
                p_over_q * *(b + 251 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 1);
            *(b + 189 * OS1_S1 + 6) =
                prefactor_z * *(b + 189 * OS1_S1 + 1) -
                p_over_q * *(b + 252 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 1);
            *(b + 189 * OS1_S1 + 7) =
                prefactor_y * *(b + 189 * OS1_S1 + 2) -
                p_over_q * *(b + 251 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 2) +
                one_over_two_q * *(b + 189 * OS1_S1 + 0);
            *(b + 189 * OS1_S1 + 8) =
                prefactor_z * *(b + 189 * OS1_S1 + 2) -
                p_over_q * *(b + 252 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 2);
            *(b + 189 * OS1_S1 + 9) =
                prefactor_z * *(b + 189 * OS1_S1 + 3) -
                p_over_q * *(b + 252 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 3) +
                one_over_two_q * *(b + 189 * OS1_S1 + 0);
            *(b + 190 * OS1_S1 + 4) =
                prefactor_x * *(b + 190 * OS1_S1 + 1) -
                p_over_q * *(b + 245 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 1) +
                one_over_two_q * *(b + 190 * OS1_S1 + 0);
            *(b + 190 * OS1_S1 + 5) =
                prefactor_y * *(b + 190 * OS1_S1 + 1) -
                p_over_q * *(b + 252 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 1);
            *(b + 190 * OS1_S1 + 6) =
                prefactor_x * *(b + 190 * OS1_S1 + 3) -
                p_over_q * *(b + 245 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 3);
            *(b + 190 * OS1_S1 + 7) =
                prefactor_y * *(b + 190 * OS1_S1 + 2) -
                p_over_q * *(b + 252 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 2) +
                one_over_two_q * *(b + 190 * OS1_S1 + 0);
            *(b + 190 * OS1_S1 + 8) =
                prefactor_y * *(b + 190 * OS1_S1 + 3) -
                p_over_q * *(b + 252 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 3);
            *(b + 190 * OS1_S1 + 9) =
                prefactor_z * *(b + 190 * OS1_S1 + 3) -
                p_over_q * *(b + 253 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 3) +
                one_over_two_q * *(b + 190 * OS1_S1 + 0);
            *(b + 191 * OS1_S1 + 4) =
                prefactor_x * *(b + 191 * OS1_S1 + 1) -
                p_over_q * *(b + 246 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 1) +
                one_over_two_q * *(b + 191 * OS1_S1 + 0);
            *(b + 191 * OS1_S1 + 5) = prefactor_y * *(b + 191 * OS1_S1 + 1) -
                                      p_over_q * *(b + 253 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 140 * OS1_S1 + 1);
            *(b + 191 * OS1_S1 + 6) =
                prefactor_x * *(b + 191 * OS1_S1 + 3) -
                p_over_q * *(b + 246 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 3);
            *(b + 191 * OS1_S1 + 7) = prefactor_y * *(b + 191 * OS1_S1 + 2) -
                                      p_over_q * *(b + 253 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 140 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 191 * OS1_S1 + 0);
            *(b + 191 * OS1_S1 + 8) = prefactor_y * *(b + 191 * OS1_S1 + 3) -
                                      p_over_q * *(b + 253 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 140 * OS1_S1 + 3);
            *(b + 191 * OS1_S1 + 9) =
                prefactor_z * *(b + 191 * OS1_S1 + 3) -
                p_over_q * *(b + 254 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 3) +
                one_over_two_q * *(b + 191 * OS1_S1 + 0);
            *(b + 192 * OS1_S1 + 4) =
                prefactor_x * *(b + 192 * OS1_S1 + 1) -
                p_over_q * *(b + 247 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 1) +
                one_over_two_q * *(b + 192 * OS1_S1 + 0);
            *(b + 192 * OS1_S1 + 5) = prefactor_y * *(b + 192 * OS1_S1 + 1) -
                                      p_over_q * *(b + 254 * OS1_S1 + 1);
            *(b + 192 * OS1_S1 + 6) =
                prefactor_x * *(b + 192 * OS1_S1 + 3) -
                p_over_q * *(b + 247 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 3);
            *(b + 192 * OS1_S1 + 7) = prefactor_y * *(b + 192 * OS1_S1 + 2) -
                                      p_over_q * *(b + 254 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 192 * OS1_S1 + 0);
            *(b + 192 * OS1_S1 + 8) = prefactor_y * *(b + 192 * OS1_S1 + 3) -
                                      p_over_q * *(b + 254 * OS1_S1 + 3);
            *(b + 192 * OS1_S1 + 9) =
                prefactor_z * *(b + 192 * OS1_S1 + 3) -
                p_over_q * *(b + 255 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 3) +
                one_over_two_q * *(b + 192 * OS1_S1 + 0);
            *(b + 193 * OS1_S1 + 4) =
                prefactor_x * *(b + 193 * OS1_S1 + 1) -
                p_over_q * *(b + 248 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 1) +
                one_over_two_q * *(b + 193 * OS1_S1 + 0);
            *(b + 193 * OS1_S1 + 5) =
                prefactor_x * *(b + 193 * OS1_S1 + 2) -
                p_over_q * *(b + 248 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 2);
            *(b + 193 * OS1_S1 + 6) = prefactor_z * *(b + 193 * OS1_S1 + 1) -
                                      p_over_q * *(b + 257 * OS1_S1 + 1);
            *(b + 193 * OS1_S1 + 7) =
                prefactor_y * *(b + 193 * OS1_S1 + 2) -
                p_over_q * *(b + 256 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 2) +
                one_over_two_q * *(b + 193 * OS1_S1 + 0);
            *(b + 193 * OS1_S1 + 8) = prefactor_z * *(b + 193 * OS1_S1 + 2) -
                                      p_over_q * *(b + 257 * OS1_S1 + 2);
            *(b + 193 * OS1_S1 + 9) = prefactor_z * *(b + 193 * OS1_S1 + 3) -
                                      p_over_q * *(b + 257 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 193 * OS1_S1 + 0);
            *(b + 194 * OS1_S1 + 4) =
                prefactor_x * *(b + 194 * OS1_S1 + 1) -
                p_over_q * *(b + 249 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 1) +
                one_over_two_q * *(b + 194 * OS1_S1 + 0);
            *(b + 194 * OS1_S1 + 5) =
                prefactor_x * *(b + 194 * OS1_S1 + 2) -
                p_over_q * *(b + 249 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 2);
            *(b + 194 * OS1_S1 + 6) = prefactor_z * *(b + 194 * OS1_S1 + 1) -
                                      p_over_q * *(b + 258 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 141 * OS1_S1 + 1);
            *(b + 194 * OS1_S1 + 7) =
                prefactor_y * *(b + 194 * OS1_S1 + 2) -
                p_over_q * *(b + 257 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 2) +
                one_over_two_q * *(b + 194 * OS1_S1 + 0);
            *(b + 194 * OS1_S1 + 8) = prefactor_z * *(b + 194 * OS1_S1 + 2) -
                                      p_over_q * *(b + 258 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 141 * OS1_S1 + 2);
            *(b + 194 * OS1_S1 + 9) = prefactor_z * *(b + 194 * OS1_S1 + 3) -
                                      p_over_q * *(b + 258 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 141 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 194 * OS1_S1 + 0);
            *(b + 195 * OS1_S1 + 4) =
                prefactor_x * *(b + 195 * OS1_S1 + 1) -
                p_over_q * *(b + 250 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 1) +
                one_over_two_q * *(b + 195 * OS1_S1 + 0);
            *(b + 195 * OS1_S1 + 5) =
                prefactor_x * *(b + 195 * OS1_S1 + 2) -
                p_over_q * *(b + 250 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 2);
            *(b + 195 * OS1_S1 + 6) =
                prefactor_z * *(b + 195 * OS1_S1 + 1) -
                p_over_q * *(b + 259 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 1);
            *(b + 195 * OS1_S1 + 7) =
                prefactor_y * *(b + 195 * OS1_S1 + 2) -
                p_over_q * *(b + 258 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 2) +
                one_over_two_q * *(b + 195 * OS1_S1 + 0);
            *(b + 195 * OS1_S1 + 8) =
                prefactor_z * *(b + 195 * OS1_S1 + 2) -
                p_over_q * *(b + 259 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 2);
            *(b + 195 * OS1_S1 + 9) =
                prefactor_z * *(b + 195 * OS1_S1 + 3) -
                p_over_q * *(b + 259 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 3) +
                one_over_two_q * *(b + 195 * OS1_S1 + 0);
            *(b + 196 * OS1_S1 + 4) =
                prefactor_x * *(b + 196 * OS1_S1 + 1) -
                p_over_q * *(b + 251 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 1) +
                one_over_two_q * *(b + 196 * OS1_S1 + 0);
            *(b + 196 * OS1_S1 + 5) =
                prefactor_x * *(b + 196 * OS1_S1 + 2) -
                p_over_q * *(b + 251 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 2);
            *(b + 196 * OS1_S1 + 6) =
                prefactor_x * *(b + 196 * OS1_S1 + 3) -
                p_over_q * *(b + 251 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 3);
            *(b + 196 * OS1_S1 + 7) =
                prefactor_y * *(b + 196 * OS1_S1 + 2) -
                p_over_q * *(b + 259 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 2) +
                one_over_two_q * *(b + 196 * OS1_S1 + 0);
            *(b + 196 * OS1_S1 + 8) =
                prefactor_z * *(b + 196 * OS1_S1 + 2) -
                p_over_q * *(b + 260 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 2);
            *(b + 196 * OS1_S1 + 9) =
                prefactor_z * *(b + 196 * OS1_S1 + 3) -
                p_over_q * *(b + 260 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 3) +
                one_over_two_q * *(b + 196 * OS1_S1 + 0);
            *(b + 197 * OS1_S1 + 4) =
                prefactor_x * *(b + 197 * OS1_S1 + 1) -
                p_over_q * *(b + 252 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 1) +
                one_over_two_q * *(b + 197 * OS1_S1 + 0);
            *(b + 197 * OS1_S1 + 5) =
                prefactor_x * *(b + 197 * OS1_S1 + 2) -
                p_over_q * *(b + 252 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 2);
            *(b + 197 * OS1_S1 + 6) =
                prefactor_x * *(b + 197 * OS1_S1 + 3) -
                p_over_q * *(b + 252 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 3);
            *(b + 197 * OS1_S1 + 7) =
                prefactor_y * *(b + 197 * OS1_S1 + 2) -
                p_over_q * *(b + 260 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 2) +
                one_over_two_q * *(b + 197 * OS1_S1 + 0);
            *(b + 197 * OS1_S1 + 8) =
                prefactor_y * *(b + 197 * OS1_S1 + 3) -
                p_over_q * *(b + 260 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 3);
            *(b + 197 * OS1_S1 + 9) =
                prefactor_z * *(b + 197 * OS1_S1 + 3) -
                p_over_q * *(b + 261 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 3) +
                one_over_two_q * *(b + 197 * OS1_S1 + 0);
            *(b + 198 * OS1_S1 + 4) =
                prefactor_x * *(b + 198 * OS1_S1 + 1) -
                p_over_q * *(b + 253 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 1) +
                one_over_two_q * *(b + 198 * OS1_S1 + 0);
            *(b + 198 * OS1_S1 + 5) =
                prefactor_y * *(b + 198 * OS1_S1 + 1) -
                p_over_q * *(b + 261 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 1);
            *(b + 198 * OS1_S1 + 6) =
                prefactor_x * *(b + 198 * OS1_S1 + 3) -
                p_over_q * *(b + 253 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 3);
            *(b + 198 * OS1_S1 + 7) =
                prefactor_y * *(b + 198 * OS1_S1 + 2) -
                p_over_q * *(b + 261 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 2) +
                one_over_two_q * *(b + 198 * OS1_S1 + 0);
            *(b + 198 * OS1_S1 + 8) =
                prefactor_y * *(b + 198 * OS1_S1 + 3) -
                p_over_q * *(b + 261 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 3);
            *(b + 198 * OS1_S1 + 9) =
                prefactor_z * *(b + 198 * OS1_S1 + 3) -
                p_over_q * *(b + 262 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 3) +
                one_over_two_q * *(b + 198 * OS1_S1 + 0);
            *(b + 199 * OS1_S1 + 4) =
                prefactor_x * *(b + 199 * OS1_S1 + 1) -
                p_over_q * *(b + 254 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 1) +
                one_over_two_q * *(b + 199 * OS1_S1 + 0);
            *(b + 199 * OS1_S1 + 5) = prefactor_y * *(b + 199 * OS1_S1 + 1) -
                                      p_over_q * *(b + 262 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 147 * OS1_S1 + 1);
            *(b + 199 * OS1_S1 + 6) =
                prefactor_x * *(b + 199 * OS1_S1 + 3) -
                p_over_q * *(b + 254 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 3);
            *(b + 199 * OS1_S1 + 7) = prefactor_y * *(b + 199 * OS1_S1 + 2) -
                                      p_over_q * *(b + 262 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 147 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 199 * OS1_S1 + 0);
            *(b + 199 * OS1_S1 + 8) = prefactor_y * *(b + 199 * OS1_S1 + 3) -
                                      p_over_q * *(b + 262 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 147 * OS1_S1 + 3);
            *(b + 199 * OS1_S1 + 9) =
                prefactor_z * *(b + 199 * OS1_S1 + 3) -
                p_over_q * *(b + 263 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 3) +
                one_over_two_q * *(b + 199 * OS1_S1 + 0);
            *(b + 200 * OS1_S1 + 4) =
                prefactor_x * *(b + 200 * OS1_S1 + 1) -
                p_over_q * *(b + 255 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 1) +
                one_over_two_q * *(b + 200 * OS1_S1 + 0);
            *(b + 200 * OS1_S1 + 5) = prefactor_y * *(b + 200 * OS1_S1 + 1) -
                                      p_over_q * *(b + 263 * OS1_S1 + 1);
            *(b + 200 * OS1_S1 + 6) =
                prefactor_x * *(b + 200 * OS1_S1 + 3) -
                p_over_q * *(b + 255 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 3);
            *(b + 200 * OS1_S1 + 7) = prefactor_y * *(b + 200 * OS1_S1 + 2) -
                                      p_over_q * *(b + 263 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 200 * OS1_S1 + 0);
            *(b + 200 * OS1_S1 + 8) = prefactor_y * *(b + 200 * OS1_S1 + 3) -
                                      p_over_q * *(b + 263 * OS1_S1 + 3);
            *(b + 200 * OS1_S1 + 9) =
                prefactor_z * *(b + 200 * OS1_S1 + 3) -
                p_over_q * *(b + 264 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 3) +
                one_over_two_q * *(b + 200 * OS1_S1 + 0);
            *(b + 201 * OS1_S1 + 4) = prefactor_x * *(b + 201 * OS1_S1 + 1) -
                                      p_over_q * *(b + 256 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 156 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 201 * OS1_S1 + 0);
            *(b + 201 * OS1_S1 + 5) = prefactor_x * *(b + 201 * OS1_S1 + 2) -
                                      p_over_q * *(b + 256 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 156 * OS1_S1 + 2);
            *(b + 201 * OS1_S1 + 6) = prefactor_z * *(b + 201 * OS1_S1 + 1) -
                                      p_over_q * *(b + 266 * OS1_S1 + 1);
            *(b + 201 * OS1_S1 + 7) =
                prefactor_y * *(b + 201 * OS1_S1 + 2) -
                p_over_q * *(b + 265 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 2) +
                one_over_two_q * *(b + 201 * OS1_S1 + 0);
            *(b + 201 * OS1_S1 + 8) = prefactor_z * *(b + 201 * OS1_S1 + 2) -
                                      p_over_q * *(b + 266 * OS1_S1 + 2);
            *(b + 201 * OS1_S1 + 9) = prefactor_z * *(b + 201 * OS1_S1 + 3) -
                                      p_over_q * *(b + 266 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 201 * OS1_S1 + 0);
            *(b + 202 * OS1_S1 + 4) = prefactor_x * *(b + 202 * OS1_S1 + 1) -
                                      p_over_q * *(b + 257 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 157 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 202 * OS1_S1 + 0);
            *(b + 202 * OS1_S1 + 5) = prefactor_x * *(b + 202 * OS1_S1 + 2) -
                                      p_over_q * *(b + 257 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 157 * OS1_S1 + 2);
            *(b + 202 * OS1_S1 + 6) = prefactor_z * *(b + 202 * OS1_S1 + 1) -
                                      p_over_q * *(b + 267 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 148 * OS1_S1 + 1);
            *(b + 202 * OS1_S1 + 7) =
                prefactor_y * *(b + 202 * OS1_S1 + 2) -
                p_over_q * *(b + 266 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 2) +
                one_over_two_q * *(b + 202 * OS1_S1 + 0);
            *(b + 202 * OS1_S1 + 8) = prefactor_z * *(b + 202 * OS1_S1 + 2) -
                                      p_over_q * *(b + 267 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 148 * OS1_S1 + 2);
            *(b + 202 * OS1_S1 + 9) = prefactor_z * *(b + 202 * OS1_S1 + 3) -
                                      p_over_q * *(b + 267 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 148 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 202 * OS1_S1 + 0);
            *(b + 203 * OS1_S1 + 4) = prefactor_x * *(b + 203 * OS1_S1 + 1) -
                                      p_over_q * *(b + 258 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 158 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 203 * OS1_S1 + 0);
            *(b + 203 * OS1_S1 + 5) = prefactor_x * *(b + 203 * OS1_S1 + 2) -
                                      p_over_q * *(b + 258 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 158 * OS1_S1 + 2);
            *(b + 203 * OS1_S1 + 6) = prefactor_x * *(b + 203 * OS1_S1 + 3) -
                                      p_over_q * *(b + 258 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 158 * OS1_S1 + 3);
            *(b + 203 * OS1_S1 + 7) =
                prefactor_y * *(b + 203 * OS1_S1 + 2) -
                p_over_q * *(b + 267 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 2) +
                one_over_two_q * *(b + 203 * OS1_S1 + 0);
            *(b + 203 * OS1_S1 + 8) =
                prefactor_z * *(b + 203 * OS1_S1 + 2) -
                p_over_q * *(b + 268 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 2);
            *(b + 203 * OS1_S1 + 9) =
                prefactor_z * *(b + 203 * OS1_S1 + 3) -
                p_over_q * *(b + 268 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 3) +
                one_over_two_q * *(b + 203 * OS1_S1 + 0);
            *(b + 204 * OS1_S1 + 4) = prefactor_x * *(b + 204 * OS1_S1 + 1) -
                                      p_over_q * *(b + 259 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 159 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 204 * OS1_S1 + 0);
            *(b + 204 * OS1_S1 + 5) = prefactor_x * *(b + 204 * OS1_S1 + 2) -
                                      p_over_q * *(b + 259 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 159 * OS1_S1 + 2);
            *(b + 204 * OS1_S1 + 6) = prefactor_x * *(b + 204 * OS1_S1 + 3) -
                                      p_over_q * *(b + 259 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 159 * OS1_S1 + 3);
            *(b + 204 * OS1_S1 + 7) =
                prefactor_y * *(b + 204 * OS1_S1 + 2) -
                p_over_q * *(b + 268 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 2) +
                one_over_two_q * *(b + 204 * OS1_S1 + 0);
            *(b + 204 * OS1_S1 + 8) =
                prefactor_z * *(b + 204 * OS1_S1 + 2) -
                p_over_q * *(b + 269 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 2);
            *(b + 204 * OS1_S1 + 9) =
                prefactor_z * *(b + 204 * OS1_S1 + 3) -
                p_over_q * *(b + 269 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 3) +
                one_over_two_q * *(b + 204 * OS1_S1 + 0);
            *(b + 205 * OS1_S1 + 4) = prefactor_x * *(b + 205 * OS1_S1 + 1) -
                                      p_over_q * *(b + 260 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 160 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 205 * OS1_S1 + 0);
            *(b + 205 * OS1_S1 + 5) = prefactor_x * *(b + 205 * OS1_S1 + 2) -
                                      p_over_q * *(b + 260 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 160 * OS1_S1 + 2);
            *(b + 205 * OS1_S1 + 6) = prefactor_x * *(b + 205 * OS1_S1 + 3) -
                                      p_over_q * *(b + 260 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 160 * OS1_S1 + 3);
            *(b + 205 * OS1_S1 + 7) =
                prefactor_y * *(b + 205 * OS1_S1 + 2) -
                p_over_q * *(b + 269 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 2) +
                one_over_two_q * *(b + 205 * OS1_S1 + 0);
            *(b + 205 * OS1_S1 + 8) =
                prefactor_z * *(b + 205 * OS1_S1 + 2) -
                p_over_q * *(b + 270 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 2);
            *(b + 205 * OS1_S1 + 9) =
                prefactor_z * *(b + 205 * OS1_S1 + 3) -
                p_over_q * *(b + 270 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 3) +
                one_over_two_q * *(b + 205 * OS1_S1 + 0);
            *(b + 206 * OS1_S1 + 4) = prefactor_x * *(b + 206 * OS1_S1 + 1) -
                                      p_over_q * *(b + 261 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 161 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 206 * OS1_S1 + 0);
            *(b + 206 * OS1_S1 + 5) = prefactor_x * *(b + 206 * OS1_S1 + 2) -
                                      p_over_q * *(b + 261 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 161 * OS1_S1 + 2);
            *(b + 206 * OS1_S1 + 6) = prefactor_x * *(b + 206 * OS1_S1 + 3) -
                                      p_over_q * *(b + 261 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 161 * OS1_S1 + 3);
            *(b + 206 * OS1_S1 + 7) =
                prefactor_y * *(b + 206 * OS1_S1 + 2) -
                p_over_q * *(b + 270 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 2) +
                one_over_two_q * *(b + 206 * OS1_S1 + 0);
            *(b + 206 * OS1_S1 + 8) =
                prefactor_y * *(b + 206 * OS1_S1 + 3) -
                p_over_q * *(b + 270 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 3);
            *(b + 206 * OS1_S1 + 9) =
                prefactor_z * *(b + 206 * OS1_S1 + 3) -
                p_over_q * *(b + 271 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 3) +
                one_over_two_q * *(b + 206 * OS1_S1 + 0);
            *(b + 207 * OS1_S1 + 4) = prefactor_x * *(b + 207 * OS1_S1 + 1) -
                                      p_over_q * *(b + 262 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 162 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 207 * OS1_S1 + 0);
            *(b + 207 * OS1_S1 + 5) = prefactor_x * *(b + 207 * OS1_S1 + 2) -
                                      p_over_q * *(b + 262 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 162 * OS1_S1 + 2);
            *(b + 207 * OS1_S1 + 6) = prefactor_x * *(b + 207 * OS1_S1 + 3) -
                                      p_over_q * *(b + 262 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 162 * OS1_S1 + 3);
            *(b + 207 * OS1_S1 + 7) =
                prefactor_y * *(b + 207 * OS1_S1 + 2) -
                p_over_q * *(b + 271 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 2) +
                one_over_two_q * *(b + 207 * OS1_S1 + 0);
            *(b + 207 * OS1_S1 + 8) =
                prefactor_y * *(b + 207 * OS1_S1 + 3) -
                p_over_q * *(b + 271 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 3);
            *(b + 207 * OS1_S1 + 9) =
                prefactor_z * *(b + 207 * OS1_S1 + 3) -
                p_over_q * *(b + 272 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 3) +
                one_over_two_q * *(b + 207 * OS1_S1 + 0);
            *(b + 208 * OS1_S1 + 4) = prefactor_x * *(b + 208 * OS1_S1 + 1) -
                                      p_over_q * *(b + 263 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 163 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 208 * OS1_S1 + 0);
            *(b + 208 * OS1_S1 + 5) = prefactor_y * *(b + 208 * OS1_S1 + 1) -
                                      p_over_q * *(b + 272 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 155 * OS1_S1 + 1);
            *(b + 208 * OS1_S1 + 6) = prefactor_x * *(b + 208 * OS1_S1 + 3) -
                                      p_over_q * *(b + 263 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 163 * OS1_S1 + 3);
            *(b + 208 * OS1_S1 + 7) = prefactor_y * *(b + 208 * OS1_S1 + 2) -
                                      p_over_q * *(b + 272 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 155 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 208 * OS1_S1 + 0);
            *(b + 208 * OS1_S1 + 8) = prefactor_y * *(b + 208 * OS1_S1 + 3) -
                                      p_over_q * *(b + 272 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 155 * OS1_S1 + 3);
            *(b + 208 * OS1_S1 + 9) =
                prefactor_z * *(b + 208 * OS1_S1 + 3) -
                p_over_q * *(b + 273 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 3) +
                one_over_two_q * *(b + 208 * OS1_S1 + 0);
            *(b + 209 * OS1_S1 + 4) = prefactor_x * *(b + 209 * OS1_S1 + 1) -
                                      p_over_q * *(b + 264 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 164 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 209 * OS1_S1 + 0);
            *(b + 209 * OS1_S1 + 5) = prefactor_y * *(b + 209 * OS1_S1 + 1) -
                                      p_over_q * *(b + 273 * OS1_S1 + 1);
            *(b + 209 * OS1_S1 + 6) = prefactor_x * *(b + 209 * OS1_S1 + 3) -
                                      p_over_q * *(b + 264 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 164 * OS1_S1 + 3);
            *(b + 209 * OS1_S1 + 7) = prefactor_y * *(b + 209 * OS1_S1 + 2) -
                                      p_over_q * *(b + 273 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 209 * OS1_S1 + 0);
            *(b + 209 * OS1_S1 + 8) = prefactor_y * *(b + 209 * OS1_S1 + 3) -
                                      p_over_q * *(b + 273 * OS1_S1 + 3);
            *(b + 209 * OS1_S1 + 9) =
                prefactor_z * *(b + 209 * OS1_S1 + 3) -
                p_over_q * *(b + 274 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 3) +
                one_over_two_q * *(b + 209 * OS1_S1 + 0);
            *(b + 210 * OS1_S1 + 4) = prefactor_x * *(b + 210 * OS1_S1 + 1) -
                                      p_over_q * *(b + 265 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 210 * OS1_S1 + 0);
            *(b + 210 * OS1_S1 + 5) = prefactor_x * *(b + 210 * OS1_S1 + 2) -
                                      p_over_q * *(b + 265 * OS1_S1 + 2);
            *(b + 210 * OS1_S1 + 6) = prefactor_z * *(b + 210 * OS1_S1 + 1) -
                                      p_over_q * *(b + 276 * OS1_S1 + 1);
            *(b + 210 * OS1_S1 + 7) =
                prefactor_y * *(b + 210 * OS1_S1 + 2) -
                p_over_q * *(b + 275 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 2) +
                one_over_two_q * *(b + 210 * OS1_S1 + 0);
            *(b + 210 * OS1_S1 + 8) = prefactor_z * *(b + 210 * OS1_S1 + 2) -
                                      p_over_q * *(b + 276 * OS1_S1 + 2);
            *(b + 210 * OS1_S1 + 9) = prefactor_z * *(b + 210 * OS1_S1 + 3) -
                                      p_over_q * *(b + 276 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 210 * OS1_S1 + 0);
            *(b + 211 * OS1_S1 + 4) = prefactor_x * *(b + 211 * OS1_S1 + 1) -
                                      p_over_q * *(b + 266 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 211 * OS1_S1 + 0);
            *(b + 211 * OS1_S1 + 5) = prefactor_x * *(b + 211 * OS1_S1 + 2) -
                                      p_over_q * *(b + 266 * OS1_S1 + 2);
            *(b + 211 * OS1_S1 + 6) = prefactor_x * *(b + 211 * OS1_S1 + 3) -
                                      p_over_q * *(b + 266 * OS1_S1 + 3);
            *(b + 211 * OS1_S1 + 7) =
                prefactor_y * *(b + 211 * OS1_S1 + 2) -
                p_over_q * *(b + 276 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 2) +
                one_over_two_q * *(b + 211 * OS1_S1 + 0);
            *(b + 211 * OS1_S1 + 8) = prefactor_z * *(b + 211 * OS1_S1 + 2) -
                                      p_over_q * *(b + 277 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 156 * OS1_S1 + 2);
            *(b + 211 * OS1_S1 + 9) = prefactor_z * *(b + 211 * OS1_S1 + 3) -
                                      p_over_q * *(b + 277 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 156 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 211 * OS1_S1 + 0);
            *(b + 212 * OS1_S1 + 4) = prefactor_x * *(b + 212 * OS1_S1 + 1) -
                                      p_over_q * *(b + 267 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 212 * OS1_S1 + 0);
            *(b + 212 * OS1_S1 + 5) = prefactor_x * *(b + 212 * OS1_S1 + 2) -
                                      p_over_q * *(b + 267 * OS1_S1 + 2);
            *(b + 212 * OS1_S1 + 6) = prefactor_x * *(b + 212 * OS1_S1 + 3) -
                                      p_over_q * *(b + 267 * OS1_S1 + 3);
            *(b + 212 * OS1_S1 + 7) =
                prefactor_y * *(b + 212 * OS1_S1 + 2) -
                p_over_q * *(b + 277 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 2) +
                one_over_two_q * *(b + 212 * OS1_S1 + 0);
            *(b + 212 * OS1_S1 + 8) =
                prefactor_z * *(b + 212 * OS1_S1 + 2) -
                p_over_q * *(b + 278 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 2);
            *(b + 212 * OS1_S1 + 9) =
                prefactor_z * *(b + 212 * OS1_S1 + 3) -
                p_over_q * *(b + 278 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 3) +
                one_over_two_q * *(b + 212 * OS1_S1 + 0);
            *(b + 213 * OS1_S1 + 4) = prefactor_x * *(b + 213 * OS1_S1 + 1) -
                                      p_over_q * *(b + 268 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 213 * OS1_S1 + 0);
            *(b + 213 * OS1_S1 + 5) = prefactor_x * *(b + 213 * OS1_S1 + 2) -
                                      p_over_q * *(b + 268 * OS1_S1 + 2);
            *(b + 213 * OS1_S1 + 6) = prefactor_x * *(b + 213 * OS1_S1 + 3) -
                                      p_over_q * *(b + 268 * OS1_S1 + 3);
            *(b + 213 * OS1_S1 + 7) =
                prefactor_y * *(b + 213 * OS1_S1 + 2) -
                p_over_q * *(b + 278 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 2) +
                one_over_two_q * *(b + 213 * OS1_S1 + 0);
            *(b + 213 * OS1_S1 + 8) =
                prefactor_z * *(b + 213 * OS1_S1 + 2) -
                p_over_q * *(b + 279 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 2);
            *(b + 213 * OS1_S1 + 9) =
                prefactor_z * *(b + 213 * OS1_S1 + 3) -
                p_over_q * *(b + 279 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 3) +
                one_over_two_q * *(b + 213 * OS1_S1 + 0);
            *(b + 214 * OS1_S1 + 4) = prefactor_x * *(b + 214 * OS1_S1 + 1) -
                                      p_over_q * *(b + 269 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 214 * OS1_S1 + 0);
            *(b + 214 * OS1_S1 + 5) = prefactor_x * *(b + 214 * OS1_S1 + 2) -
                                      p_over_q * *(b + 269 * OS1_S1 + 2);
            *(b + 214 * OS1_S1 + 6) = prefactor_x * *(b + 214 * OS1_S1 + 3) -
                                      p_over_q * *(b + 269 * OS1_S1 + 3);
            *(b + 214 * OS1_S1 + 7) =
                prefactor_y * *(b + 214 * OS1_S1 + 2) -
                p_over_q * *(b + 279 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 2) +
                one_over_two_q * *(b + 214 * OS1_S1 + 0);
            *(b + 214 * OS1_S1 + 8) =
                prefactor_z * *(b + 214 * OS1_S1 + 2) -
                p_over_q * *(b + 280 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 2);
            *(b + 214 * OS1_S1 + 9) =
                prefactor_z * *(b + 214 * OS1_S1 + 3) -
                p_over_q * *(b + 280 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 3) +
                one_over_two_q * *(b + 214 * OS1_S1 + 0);
            *(b + 215 * OS1_S1 + 4) = prefactor_x * *(b + 215 * OS1_S1 + 1) -
                                      p_over_q * *(b + 270 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 215 * OS1_S1 + 0);
            *(b + 215 * OS1_S1 + 5) = prefactor_x * *(b + 215 * OS1_S1 + 2) -
                                      p_over_q * *(b + 270 * OS1_S1 + 2);
            *(b + 215 * OS1_S1 + 6) = prefactor_x * *(b + 215 * OS1_S1 + 3) -
                                      p_over_q * *(b + 270 * OS1_S1 + 3);
            *(b + 215 * OS1_S1 + 7) =
                prefactor_y * *(b + 215 * OS1_S1 + 2) -
                p_over_q * *(b + 280 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 2) +
                one_over_two_q * *(b + 215 * OS1_S1 + 0);
            *(b + 215 * OS1_S1 + 8) =
                prefactor_y * *(b + 215 * OS1_S1 + 3) -
                p_over_q * *(b + 280 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 3);
            *(b + 215 * OS1_S1 + 9) =
                prefactor_z * *(b + 215 * OS1_S1 + 3) -
                p_over_q * *(b + 281 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 3) +
                one_over_two_q * *(b + 215 * OS1_S1 + 0);
            *(b + 216 * OS1_S1 + 4) = prefactor_x * *(b + 216 * OS1_S1 + 1) -
                                      p_over_q * *(b + 271 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 216 * OS1_S1 + 0);
            *(b + 216 * OS1_S1 + 5) = prefactor_x * *(b + 216 * OS1_S1 + 2) -
                                      p_over_q * *(b + 271 * OS1_S1 + 2);
            *(b + 216 * OS1_S1 + 6) = prefactor_x * *(b + 216 * OS1_S1 + 3) -
                                      p_over_q * *(b + 271 * OS1_S1 + 3);
            *(b + 216 * OS1_S1 + 7) =
                prefactor_y * *(b + 216 * OS1_S1 + 2) -
                p_over_q * *(b + 281 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 2) +
                one_over_two_q * *(b + 216 * OS1_S1 + 0);
            *(b + 216 * OS1_S1 + 8) =
                prefactor_y * *(b + 216 * OS1_S1 + 3) -
                p_over_q * *(b + 281 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 3);
            *(b + 216 * OS1_S1 + 9) =
                prefactor_z * *(b + 216 * OS1_S1 + 3) -
                p_over_q * *(b + 282 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 3) +
                one_over_two_q * *(b + 216 * OS1_S1 + 0);
            *(b + 217 * OS1_S1 + 4) = prefactor_x * *(b + 217 * OS1_S1 + 1) -
                                      p_over_q * *(b + 272 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 217 * OS1_S1 + 0);
            *(b + 217 * OS1_S1 + 5) = prefactor_x * *(b + 217 * OS1_S1 + 2) -
                                      p_over_q * *(b + 272 * OS1_S1 + 2);
            *(b + 217 * OS1_S1 + 6) = prefactor_x * *(b + 217 * OS1_S1 + 3) -
                                      p_over_q * *(b + 272 * OS1_S1 + 3);
            *(b + 217 * OS1_S1 + 7) =
                prefactor_y * *(b + 217 * OS1_S1 + 2) -
                p_over_q * *(b + 282 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 2) +
                one_over_two_q * *(b + 217 * OS1_S1 + 0);
            *(b + 217 * OS1_S1 + 8) =
                prefactor_y * *(b + 217 * OS1_S1 + 3) -
                p_over_q * *(b + 282 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 3);
            *(b + 217 * OS1_S1 + 9) =
                prefactor_z * *(b + 217 * OS1_S1 + 3) -
                p_over_q * *(b + 283 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 3) +
                one_over_two_q * *(b + 217 * OS1_S1 + 0);
            *(b + 218 * OS1_S1 + 4) = prefactor_x * *(b + 218 * OS1_S1 + 1) -
                                      p_over_q * *(b + 273 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 218 * OS1_S1 + 0);
            *(b + 218 * OS1_S1 + 5) = prefactor_x * *(b + 218 * OS1_S1 + 2) -
                                      p_over_q * *(b + 273 * OS1_S1 + 2);
            *(b + 218 * OS1_S1 + 6) = prefactor_x * *(b + 218 * OS1_S1 + 3) -
                                      p_over_q * *(b + 273 * OS1_S1 + 3);
            *(b + 218 * OS1_S1 + 7) = prefactor_y * *(b + 218 * OS1_S1 + 2) -
                                      p_over_q * *(b + 283 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 164 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 218 * OS1_S1 + 0);
            *(b + 218 * OS1_S1 + 8) = prefactor_y * *(b + 218 * OS1_S1 + 3) -
                                      p_over_q * *(b + 283 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 164 * OS1_S1 + 3);
            *(b + 218 * OS1_S1 + 9) =
                prefactor_z * *(b + 218 * OS1_S1 + 3) -
                p_over_q * *(b + 284 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 3) +
                one_over_two_q * *(b + 218 * OS1_S1 + 0);
            *(b + 219 * OS1_S1 + 4) = prefactor_x * *(b + 219 * OS1_S1 + 1) -
                                      p_over_q * *(b + 274 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 219 * OS1_S1 + 0);
            *(b + 219 * OS1_S1 + 5) = prefactor_y * *(b + 219 * OS1_S1 + 1) -
                                      p_over_q * *(b + 284 * OS1_S1 + 1);
            *(b + 219 * OS1_S1 + 6) = prefactor_x * *(b + 219 * OS1_S1 + 3) -
                                      p_over_q * *(b + 274 * OS1_S1 + 3);
            *(b + 219 * OS1_S1 + 7) = prefactor_y * *(b + 219 * OS1_S1 + 2) -
                                      p_over_q * *(b + 284 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 219 * OS1_S1 + 0);
            *(b + 219 * OS1_S1 + 8) = prefactor_y * *(b + 219 * OS1_S1 + 3) -
                                      p_over_q * *(b + 284 * OS1_S1 + 3);
            *(b + 219 * OS1_S1 + 9) =
                prefactor_z * *(b + 219 * OS1_S1 + 3) -
                p_over_q * *(b + 285 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 3) +
                one_over_two_q * *(b + 219 * OS1_S1 + 0);
            return;
        }

        void transfer_10_2(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 220 * OS1_S1 + 4) =
                prefactor_x * *(b + 220 * OS1_S1 + 1) -
                p_over_q * *(b + 286 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 1) +
                one_over_two_q * *(b + 220 * OS1_S1 + 0);
            *(b + 220 * OS1_S1 + 5) = prefactor_y * *(b + 220 * OS1_S1 + 1) -
                                      p_over_q * *(b + 287 * OS1_S1 + 1);
            *(b + 220 * OS1_S1 + 6) = prefactor_z * *(b + 220 * OS1_S1 + 1) -
                                      p_over_q * *(b + 288 * OS1_S1 + 1);
            *(b + 220 * OS1_S1 + 7) = prefactor_y * *(b + 220 * OS1_S1 + 2) -
                                      p_over_q * *(b + 287 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 220 * OS1_S1 + 0);
            *(b + 220 * OS1_S1 + 8) = prefactor_z * *(b + 220 * OS1_S1 + 2) -
                                      p_over_q * *(b + 288 * OS1_S1 + 2);
            *(b + 220 * OS1_S1 + 9) = prefactor_z * *(b + 220 * OS1_S1 + 3) -
                                      p_over_q * *(b + 288 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 220 * OS1_S1 + 0);
            *(b + 221 * OS1_S1 + 4) =
                prefactor_x * *(b + 221 * OS1_S1 + 1) -
                p_over_q * *(b + 287 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 1) +
                one_over_two_q * *(b + 221 * OS1_S1 + 0);
            *(b + 221 * OS1_S1 + 5) = prefactor_y * *(b + 221 * OS1_S1 + 1) -
                                      p_over_q * *(b + 289 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 165 * OS1_S1 + 1);
            *(b + 221 * OS1_S1 + 6) = prefactor_z * *(b + 221 * OS1_S1 + 1) -
                                      p_over_q * *(b + 290 * OS1_S1 + 1);
            *(b + 221 * OS1_S1 + 7) = prefactor_y * *(b + 221 * OS1_S1 + 2) -
                                      p_over_q * *(b + 289 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 165 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 221 * OS1_S1 + 0);
            *(b + 221 * OS1_S1 + 8) = prefactor_z * *(b + 221 * OS1_S1 + 2) -
                                      p_over_q * *(b + 290 * OS1_S1 + 2);
            *(b + 221 * OS1_S1 + 9) = prefactor_z * *(b + 221 * OS1_S1 + 3) -
                                      p_over_q * *(b + 290 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 221 * OS1_S1 + 0);
            *(b + 222 * OS1_S1 + 4) =
                prefactor_x * *(b + 222 * OS1_S1 + 1) -
                p_over_q * *(b + 288 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 1) +
                one_over_two_q * *(b + 222 * OS1_S1 + 0);
            *(b + 222 * OS1_S1 + 5) = prefactor_y * *(b + 222 * OS1_S1 + 1) -
                                      p_over_q * *(b + 290 * OS1_S1 + 1);
            *(b + 222 * OS1_S1 + 6) = prefactor_z * *(b + 222 * OS1_S1 + 1) -
                                      p_over_q * *(b + 291 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 165 * OS1_S1 + 1);
            *(b + 222 * OS1_S1 + 7) = prefactor_y * *(b + 222 * OS1_S1 + 2) -
                                      p_over_q * *(b + 290 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 222 * OS1_S1 + 0);
            *(b + 222 * OS1_S1 + 8) = prefactor_y * *(b + 222 * OS1_S1 + 3) -
                                      p_over_q * *(b + 290 * OS1_S1 + 3);
            *(b + 222 * OS1_S1 + 9) = prefactor_z * *(b + 222 * OS1_S1 + 3) -
                                      p_over_q * *(b + 291 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 165 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 222 * OS1_S1 + 0);
            *(b + 223 * OS1_S1 + 4) =
                prefactor_x * *(b + 223 * OS1_S1 + 1) -
                p_over_q * *(b + 289 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 1) +
                one_over_two_q * *(b + 223 * OS1_S1 + 0);
            *(b + 223 * OS1_S1 + 5) =
                prefactor_y * *(b + 223 * OS1_S1 + 1) -
                p_over_q * *(b + 292 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 1);
            *(b + 223 * OS1_S1 + 6) = prefactor_z * *(b + 223 * OS1_S1 + 1) -
                                      p_over_q * *(b + 293 * OS1_S1 + 1);
            *(b + 223 * OS1_S1 + 7) =
                prefactor_y * *(b + 223 * OS1_S1 + 2) -
                p_over_q * *(b + 292 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 2) +
                one_over_two_q * *(b + 223 * OS1_S1 + 0);
            *(b + 223 * OS1_S1 + 8) = prefactor_z * *(b + 223 * OS1_S1 + 2) -
                                      p_over_q * *(b + 293 * OS1_S1 + 2);
            *(b + 223 * OS1_S1 + 9) = prefactor_z * *(b + 223 * OS1_S1 + 3) -
                                      p_over_q * *(b + 293 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 223 * OS1_S1 + 0);
            *(b + 224 * OS1_S1 + 4) =
                prefactor_x * *(b + 224 * OS1_S1 + 1) -
                p_over_q * *(b + 290 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 1) +
                one_over_two_q * *(b + 224 * OS1_S1 + 0);
            *(b + 224 * OS1_S1 + 5) = prefactor_y * *(b + 224 * OS1_S1 + 1) -
                                      p_over_q * *(b + 293 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 167 * OS1_S1 + 1);
            *(b + 224 * OS1_S1 + 6) = prefactor_z * *(b + 224 * OS1_S1 + 1) -
                                      p_over_q * *(b + 294 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 166 * OS1_S1 + 1);
            *(b + 224 * OS1_S1 + 7) = prefactor_y * *(b + 224 * OS1_S1 + 2) -
                                      p_over_q * *(b + 293 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 167 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 224 * OS1_S1 + 0);
            *(b + 224 * OS1_S1 + 8) = prefactor_z * *(b + 224 * OS1_S1 + 2) -
                                      p_over_q * *(b + 294 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 166 * OS1_S1 + 2);
            *(b + 224 * OS1_S1 + 9) = prefactor_z * *(b + 224 * OS1_S1 + 3) -
                                      p_over_q * *(b + 294 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 166 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 224 * OS1_S1 + 0);
            *(b + 225 * OS1_S1 + 4) =
                prefactor_x * *(b + 225 * OS1_S1 + 1) -
                p_over_q * *(b + 291 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 1) +
                one_over_two_q * *(b + 225 * OS1_S1 + 0);
            *(b + 225 * OS1_S1 + 5) = prefactor_y * *(b + 225 * OS1_S1 + 1) -
                                      p_over_q * *(b + 294 * OS1_S1 + 1);
            *(b + 225 * OS1_S1 + 6) =
                prefactor_z * *(b + 225 * OS1_S1 + 1) -
                p_over_q * *(b + 295 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 1);
            *(b + 225 * OS1_S1 + 7) = prefactor_y * *(b + 225 * OS1_S1 + 2) -
                                      p_over_q * *(b + 294 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 225 * OS1_S1 + 0);
            *(b + 225 * OS1_S1 + 8) = prefactor_y * *(b + 225 * OS1_S1 + 3) -
                                      p_over_q * *(b + 294 * OS1_S1 + 3);
            *(b + 225 * OS1_S1 + 9) =
                prefactor_z * *(b + 225 * OS1_S1 + 3) -
                p_over_q * *(b + 295 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 3) +
                one_over_two_q * *(b + 225 * OS1_S1 + 0);
            *(b + 226 * OS1_S1 + 4) =
                prefactor_x * *(b + 226 * OS1_S1 + 1) -
                p_over_q * *(b + 292 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 1) +
                one_over_two_q * *(b + 226 * OS1_S1 + 0);
            *(b + 226 * OS1_S1 + 5) =
                prefactor_y * *(b + 226 * OS1_S1 + 1) -
                p_over_q * *(b + 296 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 1);
            *(b + 226 * OS1_S1 + 6) = prefactor_z * *(b + 226 * OS1_S1 + 1) -
                                      p_over_q * *(b + 297 * OS1_S1 + 1);
            *(b + 226 * OS1_S1 + 7) =
                prefactor_y * *(b + 226 * OS1_S1 + 2) -
                p_over_q * *(b + 296 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 2) +
                one_over_two_q * *(b + 226 * OS1_S1 + 0);
            *(b + 226 * OS1_S1 + 8) = prefactor_z * *(b + 226 * OS1_S1 + 2) -
                                      p_over_q * *(b + 297 * OS1_S1 + 2);
            *(b + 226 * OS1_S1 + 9) = prefactor_z * *(b + 226 * OS1_S1 + 3) -
                                      p_over_q * *(b + 297 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 226 * OS1_S1 + 0);
            *(b + 227 * OS1_S1 + 4) =
                prefactor_x * *(b + 227 * OS1_S1 + 1) -
                p_over_q * *(b + 293 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 1) +
                one_over_two_q * *(b + 227 * OS1_S1 + 0);
            *(b + 227 * OS1_S1 + 5) =
                prefactor_y * *(b + 227 * OS1_S1 + 1) -
                p_over_q * *(b + 297 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 1);
            *(b + 227 * OS1_S1 + 6) = prefactor_z * *(b + 227 * OS1_S1 + 1) -
                                      p_over_q * *(b + 298 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 168 * OS1_S1 + 1);
            *(b + 227 * OS1_S1 + 7) =
                prefactor_y * *(b + 227 * OS1_S1 + 2) -
                p_over_q * *(b + 297 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 2) +
                one_over_two_q * *(b + 227 * OS1_S1 + 0);
            *(b + 227 * OS1_S1 + 8) = prefactor_z * *(b + 227 * OS1_S1 + 2) -
                                      p_over_q * *(b + 298 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 168 * OS1_S1 + 2);
            *(b + 227 * OS1_S1 + 9) = prefactor_z * *(b + 227 * OS1_S1 + 3) -
                                      p_over_q * *(b + 298 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 168 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 227 * OS1_S1 + 0);
            *(b + 228 * OS1_S1 + 4) =
                prefactor_x * *(b + 228 * OS1_S1 + 1) -
                p_over_q * *(b + 294 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 1) +
                one_over_two_q * *(b + 228 * OS1_S1 + 0);
            *(b + 228 * OS1_S1 + 5) = prefactor_y * *(b + 228 * OS1_S1 + 1) -
                                      p_over_q * *(b + 298 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 170 * OS1_S1 + 1);
            *(b + 228 * OS1_S1 + 6) =
                prefactor_z * *(b + 228 * OS1_S1 + 1) -
                p_over_q * *(b + 299 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 1);
            *(b + 228 * OS1_S1 + 7) = prefactor_y * *(b + 228 * OS1_S1 + 2) -
                                      p_over_q * *(b + 298 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 170 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 228 * OS1_S1 + 0);
            *(b + 228 * OS1_S1 + 8) = prefactor_y * *(b + 228 * OS1_S1 + 3) -
                                      p_over_q * *(b + 298 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 170 * OS1_S1 + 3);
            *(b + 228 * OS1_S1 + 9) =
                prefactor_z * *(b + 228 * OS1_S1 + 3) -
                p_over_q * *(b + 299 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 3) +
                one_over_two_q * *(b + 228 * OS1_S1 + 0);
            *(b + 229 * OS1_S1 + 4) =
                prefactor_x * *(b + 229 * OS1_S1 + 1) -
                p_over_q * *(b + 295 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 1) +
                one_over_two_q * *(b + 229 * OS1_S1 + 0);
            *(b + 229 * OS1_S1 + 5) = prefactor_y * *(b + 229 * OS1_S1 + 1) -
                                      p_over_q * *(b + 299 * OS1_S1 + 1);
            *(b + 229 * OS1_S1 + 6) =
                prefactor_z * *(b + 229 * OS1_S1 + 1) -
                p_over_q * *(b + 300 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 1);
            *(b + 229 * OS1_S1 + 7) = prefactor_y * *(b + 229 * OS1_S1 + 2) -
                                      p_over_q * *(b + 299 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 229 * OS1_S1 + 0);
            *(b + 229 * OS1_S1 + 8) = prefactor_y * *(b + 229 * OS1_S1 + 3) -
                                      p_over_q * *(b + 299 * OS1_S1 + 3);
            *(b + 229 * OS1_S1 + 9) =
                prefactor_z * *(b + 229 * OS1_S1 + 3) -
                p_over_q * *(b + 300 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 3) +
                one_over_two_q * *(b + 229 * OS1_S1 + 0);
            *(b + 230 * OS1_S1 + 4) =
                prefactor_x * *(b + 230 * OS1_S1 + 1) -
                p_over_q * *(b + 296 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 1) +
                one_over_two_q * *(b + 230 * OS1_S1 + 0);
            *(b + 230 * OS1_S1 + 5) =
                prefactor_y * *(b + 230 * OS1_S1 + 1) -
                p_over_q * *(b + 301 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 1);
            *(b + 230 * OS1_S1 + 6) = prefactor_z * *(b + 230 * OS1_S1 + 1) -
                                      p_over_q * *(b + 302 * OS1_S1 + 1);
            *(b + 230 * OS1_S1 + 7) =
                prefactor_y * *(b + 230 * OS1_S1 + 2) -
                p_over_q * *(b + 301 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 2) +
                one_over_two_q * *(b + 230 * OS1_S1 + 0);
            *(b + 230 * OS1_S1 + 8) = prefactor_z * *(b + 230 * OS1_S1 + 2) -
                                      p_over_q * *(b + 302 * OS1_S1 + 2);
            *(b + 230 * OS1_S1 + 9) = prefactor_z * *(b + 230 * OS1_S1 + 3) -
                                      p_over_q * *(b + 302 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 230 * OS1_S1 + 0);
            *(b + 231 * OS1_S1 + 4) =
                prefactor_x * *(b + 231 * OS1_S1 + 1) -
                p_over_q * *(b + 297 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 1) +
                one_over_two_q * *(b + 231 * OS1_S1 + 0);
            *(b + 231 * OS1_S1 + 5) =
                prefactor_y * *(b + 231 * OS1_S1 + 1) -
                p_over_q * *(b + 302 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 1);
            *(b + 231 * OS1_S1 + 6) = prefactor_z * *(b + 231 * OS1_S1 + 1) -
                                      p_over_q * *(b + 303 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 171 * OS1_S1 + 1);
            *(b + 231 * OS1_S1 + 7) =
                prefactor_y * *(b + 231 * OS1_S1 + 2) -
                p_over_q * *(b + 302 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 2) +
                one_over_two_q * *(b + 231 * OS1_S1 + 0);
            *(b + 231 * OS1_S1 + 8) = prefactor_z * *(b + 231 * OS1_S1 + 2) -
                                      p_over_q * *(b + 303 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 171 * OS1_S1 + 2);
            *(b + 231 * OS1_S1 + 9) = prefactor_z * *(b + 231 * OS1_S1 + 3) -
                                      p_over_q * *(b + 303 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 171 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 231 * OS1_S1 + 0);
            *(b + 232 * OS1_S1 + 4) =
                prefactor_x * *(b + 232 * OS1_S1 + 1) -
                p_over_q * *(b + 298 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 1) +
                one_over_two_q * *(b + 232 * OS1_S1 + 0);
            *(b + 232 * OS1_S1 + 5) =
                prefactor_y * *(b + 232 * OS1_S1 + 1) -
                p_over_q * *(b + 303 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 1);
            *(b + 232 * OS1_S1 + 6) =
                prefactor_z * *(b + 232 * OS1_S1 + 1) -
                p_over_q * *(b + 304 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 1);
            *(b + 232 * OS1_S1 + 7) =
                prefactor_y * *(b + 232 * OS1_S1 + 2) -
                p_over_q * *(b + 303 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 2) +
                one_over_two_q * *(b + 232 * OS1_S1 + 0);
            *(b + 232 * OS1_S1 + 8) =
                prefactor_z * *(b + 232 * OS1_S1 + 2) -
                p_over_q * *(b + 304 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 2);
            *(b + 232 * OS1_S1 + 9) =
                prefactor_z * *(b + 232 * OS1_S1 + 3) -
                p_over_q * *(b + 304 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 3) +
                one_over_two_q * *(b + 232 * OS1_S1 + 0);
            *(b + 233 * OS1_S1 + 4) =
                prefactor_x * *(b + 233 * OS1_S1 + 1) -
                p_over_q * *(b + 299 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 1) +
                one_over_two_q * *(b + 233 * OS1_S1 + 0);
            *(b + 233 * OS1_S1 + 5) = prefactor_y * *(b + 233 * OS1_S1 + 1) -
                                      p_over_q * *(b + 304 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 174 * OS1_S1 + 1);
            *(b + 233 * OS1_S1 + 6) =
                prefactor_z * *(b + 233 * OS1_S1 + 1) -
                p_over_q * *(b + 305 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 1);
            *(b + 233 * OS1_S1 + 7) = prefactor_y * *(b + 233 * OS1_S1 + 2) -
                                      p_over_q * *(b + 304 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 174 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 233 * OS1_S1 + 0);
            *(b + 233 * OS1_S1 + 8) = prefactor_y * *(b + 233 * OS1_S1 + 3) -
                                      p_over_q * *(b + 304 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 174 * OS1_S1 + 3);
            *(b + 233 * OS1_S1 + 9) =
                prefactor_z * *(b + 233 * OS1_S1 + 3) -
                p_over_q * *(b + 305 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 3) +
                one_over_two_q * *(b + 233 * OS1_S1 + 0);
            *(b + 234 * OS1_S1 + 4) =
                prefactor_x * *(b + 234 * OS1_S1 + 1) -
                p_over_q * *(b + 300 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 1) +
                one_over_two_q * *(b + 234 * OS1_S1 + 0);
            *(b + 234 * OS1_S1 + 5) = prefactor_y * *(b + 234 * OS1_S1 + 1) -
                                      p_over_q * *(b + 305 * OS1_S1 + 1);
            *(b + 234 * OS1_S1 + 6) =
                prefactor_z * *(b + 234 * OS1_S1 + 1) -
                p_over_q * *(b + 306 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 1);
            *(b + 234 * OS1_S1 + 7) = prefactor_y * *(b + 234 * OS1_S1 + 2) -
                                      p_over_q * *(b + 305 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 234 * OS1_S1 + 0);
            *(b + 234 * OS1_S1 + 8) = prefactor_y * *(b + 234 * OS1_S1 + 3) -
                                      p_over_q * *(b + 305 * OS1_S1 + 3);
            *(b + 234 * OS1_S1 + 9) =
                prefactor_z * *(b + 234 * OS1_S1 + 3) -
                p_over_q * *(b + 306 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 3) +
                one_over_two_q * *(b + 234 * OS1_S1 + 0);
            *(b + 235 * OS1_S1 + 4) =
                prefactor_x * *(b + 235 * OS1_S1 + 1) -
                p_over_q * *(b + 301 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 1) +
                one_over_two_q * *(b + 235 * OS1_S1 + 0);
            *(b + 235 * OS1_S1 + 5) =
                prefactor_y * *(b + 235 * OS1_S1 + 1) -
                p_over_q * *(b + 307 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 1);
            *(b + 235 * OS1_S1 + 6) = prefactor_z * *(b + 235 * OS1_S1 + 1) -
                                      p_over_q * *(b + 308 * OS1_S1 + 1);
            *(b + 235 * OS1_S1 + 7) =
                prefactor_y * *(b + 235 * OS1_S1 + 2) -
                p_over_q * *(b + 307 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 2) +
                one_over_two_q * *(b + 235 * OS1_S1 + 0);
            *(b + 235 * OS1_S1 + 8) = prefactor_z * *(b + 235 * OS1_S1 + 2) -
                                      p_over_q * *(b + 308 * OS1_S1 + 2);
            *(b + 235 * OS1_S1 + 9) = prefactor_z * *(b + 235 * OS1_S1 + 3) -
                                      p_over_q * *(b + 308 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 235 * OS1_S1 + 0);
            *(b + 236 * OS1_S1 + 4) =
                prefactor_x * *(b + 236 * OS1_S1 + 1) -
                p_over_q * *(b + 302 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 1) +
                one_over_two_q * *(b + 236 * OS1_S1 + 0);
            *(b + 236 * OS1_S1 + 5) =
                prefactor_y * *(b + 236 * OS1_S1 + 1) -
                p_over_q * *(b + 308 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 1);
            *(b + 236 * OS1_S1 + 6) = prefactor_z * *(b + 236 * OS1_S1 + 1) -
                                      p_over_q * *(b + 309 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 175 * OS1_S1 + 1);
            *(b + 236 * OS1_S1 + 7) =
                prefactor_y * *(b + 236 * OS1_S1 + 2) -
                p_over_q * *(b + 308 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 2) +
                one_over_two_q * *(b + 236 * OS1_S1 + 0);
            *(b + 236 * OS1_S1 + 8) = prefactor_z * *(b + 236 * OS1_S1 + 2) -
                                      p_over_q * *(b + 309 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 175 * OS1_S1 + 2);
            *(b + 236 * OS1_S1 + 9) = prefactor_z * *(b + 236 * OS1_S1 + 3) -
                                      p_over_q * *(b + 309 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 175 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 236 * OS1_S1 + 0);
            *(b + 237 * OS1_S1 + 4) =
                prefactor_x * *(b + 237 * OS1_S1 + 1) -
                p_over_q * *(b + 303 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 1) +
                one_over_two_q * *(b + 237 * OS1_S1 + 0);
            *(b + 237 * OS1_S1 + 5) =
                prefactor_y * *(b + 237 * OS1_S1 + 1) -
                p_over_q * *(b + 309 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 1);
            *(b + 237 * OS1_S1 + 6) =
                prefactor_z * *(b + 237 * OS1_S1 + 1) -
                p_over_q * *(b + 310 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 1);
            *(b + 237 * OS1_S1 + 7) =
                prefactor_y * *(b + 237 * OS1_S1 + 2) -
                p_over_q * *(b + 309 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 2) +
                one_over_two_q * *(b + 237 * OS1_S1 + 0);
            *(b + 237 * OS1_S1 + 8) =
                prefactor_z * *(b + 237 * OS1_S1 + 2) -
                p_over_q * *(b + 310 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 2);
            *(b + 237 * OS1_S1 + 9) =
                prefactor_z * *(b + 237 * OS1_S1 + 3) -
                p_over_q * *(b + 310 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 3) +
                one_over_two_q * *(b + 237 * OS1_S1 + 0);
            *(b + 238 * OS1_S1 + 4) =
                prefactor_x * *(b + 238 * OS1_S1 + 1) -
                p_over_q * *(b + 304 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 1) +
                one_over_two_q * *(b + 238 * OS1_S1 + 0);
            *(b + 238 * OS1_S1 + 5) =
                prefactor_y * *(b + 238 * OS1_S1 + 1) -
                p_over_q * *(b + 310 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 1);
            *(b + 238 * OS1_S1 + 6) =
                prefactor_z * *(b + 238 * OS1_S1 + 1) -
                p_over_q * *(b + 311 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 1);
            *(b + 238 * OS1_S1 + 7) =
                prefactor_y * *(b + 238 * OS1_S1 + 2) -
                p_over_q * *(b + 310 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 2) +
                one_over_two_q * *(b + 238 * OS1_S1 + 0);
            *(b + 238 * OS1_S1 + 8) =
                prefactor_y * *(b + 238 * OS1_S1 + 3) -
                p_over_q * *(b + 310 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 3);
            *(b + 238 * OS1_S1 + 9) =
                prefactor_z * *(b + 238 * OS1_S1 + 3) -
                p_over_q * *(b + 311 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 3) +
                one_over_two_q * *(b + 238 * OS1_S1 + 0);
            *(b + 239 * OS1_S1 + 4) =
                prefactor_x * *(b + 239 * OS1_S1 + 1) -
                p_over_q * *(b + 305 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 1) +
                one_over_two_q * *(b + 239 * OS1_S1 + 0);
            *(b + 239 * OS1_S1 + 5) = prefactor_y * *(b + 239 * OS1_S1 + 1) -
                                      p_over_q * *(b + 311 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 179 * OS1_S1 + 1);
            *(b + 239 * OS1_S1 + 6) =
                prefactor_z * *(b + 239 * OS1_S1 + 1) -
                p_over_q * *(b + 312 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 1);
            *(b + 239 * OS1_S1 + 7) = prefactor_y * *(b + 239 * OS1_S1 + 2) -
                                      p_over_q * *(b + 311 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 179 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 239 * OS1_S1 + 0);
            *(b + 239 * OS1_S1 + 8) = prefactor_y * *(b + 239 * OS1_S1 + 3) -
                                      p_over_q * *(b + 311 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 179 * OS1_S1 + 3);
            *(b + 239 * OS1_S1 + 9) =
                prefactor_z * *(b + 239 * OS1_S1 + 3) -
                p_over_q * *(b + 312 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 3) +
                one_over_two_q * *(b + 239 * OS1_S1 + 0);
            *(b + 240 * OS1_S1 + 4) =
                prefactor_x * *(b + 240 * OS1_S1 + 1) -
                p_over_q * *(b + 306 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 1) +
                one_over_two_q * *(b + 240 * OS1_S1 + 0);
            *(b + 240 * OS1_S1 + 5) = prefactor_y * *(b + 240 * OS1_S1 + 1) -
                                      p_over_q * *(b + 312 * OS1_S1 + 1);
            *(b + 240 * OS1_S1 + 6) =
                prefactor_z * *(b + 240 * OS1_S1 + 1) -
                p_over_q * *(b + 313 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 1);
            *(b + 240 * OS1_S1 + 7) = prefactor_y * *(b + 240 * OS1_S1 + 2) -
                                      p_over_q * *(b + 312 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 240 * OS1_S1 + 0);
            *(b + 240 * OS1_S1 + 8) = prefactor_y * *(b + 240 * OS1_S1 + 3) -
                                      p_over_q * *(b + 312 * OS1_S1 + 3);
            *(b + 240 * OS1_S1 + 9) =
                prefactor_z * *(b + 240 * OS1_S1 + 3) -
                p_over_q * *(b + 313 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 3) +
                one_over_two_q * *(b + 240 * OS1_S1 + 0);
            *(b + 241 * OS1_S1 + 4) =
                prefactor_x * *(b + 241 * OS1_S1 + 1) -
                p_over_q * *(b + 307 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 1) +
                one_over_two_q * *(b + 241 * OS1_S1 + 0);
            *(b + 241 * OS1_S1 + 5) =
                prefactor_x * *(b + 241 * OS1_S1 + 2) -
                p_over_q * *(b + 307 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 2);
            *(b + 241 * OS1_S1 + 6) = prefactor_z * *(b + 241 * OS1_S1 + 1) -
                                      p_over_q * *(b + 315 * OS1_S1 + 1);
            *(b + 241 * OS1_S1 + 7) =
                prefactor_y * *(b + 241 * OS1_S1 + 2) -
                p_over_q * *(b + 314 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 2) +
                one_over_two_q * *(b + 241 * OS1_S1 + 0);
            *(b + 241 * OS1_S1 + 8) = prefactor_z * *(b + 241 * OS1_S1 + 2) -
                                      p_over_q * *(b + 315 * OS1_S1 + 2);
            *(b + 241 * OS1_S1 + 9) = prefactor_z * *(b + 241 * OS1_S1 + 3) -
                                      p_over_q * *(b + 315 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 241 * OS1_S1 + 0);
            *(b + 242 * OS1_S1 + 4) =
                prefactor_x * *(b + 242 * OS1_S1 + 1) -
                p_over_q * *(b + 308 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 1) +
                one_over_two_q * *(b + 242 * OS1_S1 + 0);
            *(b + 242 * OS1_S1 + 5) =
                prefactor_x * *(b + 242 * OS1_S1 + 2) -
                p_over_q * *(b + 308 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 2);
            *(b + 242 * OS1_S1 + 6) = prefactor_z * *(b + 242 * OS1_S1 + 1) -
                                      p_over_q * *(b + 316 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 180 * OS1_S1 + 1);
            *(b + 242 * OS1_S1 + 7) =
                prefactor_y * *(b + 242 * OS1_S1 + 2) -
                p_over_q * *(b + 315 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 2) +
                one_over_two_q * *(b + 242 * OS1_S1 + 0);
            *(b + 242 * OS1_S1 + 8) = prefactor_z * *(b + 242 * OS1_S1 + 2) -
                                      p_over_q * *(b + 316 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 180 * OS1_S1 + 2);
            *(b + 242 * OS1_S1 + 9) = prefactor_z * *(b + 242 * OS1_S1 + 3) -
                                      p_over_q * *(b + 316 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 180 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 242 * OS1_S1 + 0);
            *(b + 243 * OS1_S1 + 4) =
                prefactor_x * *(b + 243 * OS1_S1 + 1) -
                p_over_q * *(b + 309 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 1) +
                one_over_two_q * *(b + 243 * OS1_S1 + 0);
            *(b + 243 * OS1_S1 + 5) =
                prefactor_y * *(b + 243 * OS1_S1 + 1) -
                p_over_q * *(b + 316 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 1);
            *(b + 243 * OS1_S1 + 6) =
                prefactor_z * *(b + 243 * OS1_S1 + 1) -
                p_over_q * *(b + 317 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 1);
            *(b + 243 * OS1_S1 + 7) =
                prefactor_y * *(b + 243 * OS1_S1 + 2) -
                p_over_q * *(b + 316 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 2) +
                one_over_two_q * *(b + 243 * OS1_S1 + 0);
            *(b + 243 * OS1_S1 + 8) =
                prefactor_z * *(b + 243 * OS1_S1 + 2) -
                p_over_q * *(b + 317 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 2);
            *(b + 243 * OS1_S1 + 9) =
                prefactor_z * *(b + 243 * OS1_S1 + 3) -
                p_over_q * *(b + 317 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 3) +
                one_over_two_q * *(b + 243 * OS1_S1 + 0);
            *(b + 244 * OS1_S1 + 4) =
                prefactor_x * *(b + 244 * OS1_S1 + 1) -
                p_over_q * *(b + 310 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 1) +
                one_over_two_q * *(b + 244 * OS1_S1 + 0);
            *(b + 244 * OS1_S1 + 5) =
                prefactor_y * *(b + 244 * OS1_S1 + 1) -
                p_over_q * *(b + 317 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 1);
            *(b + 244 * OS1_S1 + 6) =
                prefactor_z * *(b + 244 * OS1_S1 + 1) -
                p_over_q * *(b + 318 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 1);
            *(b + 244 * OS1_S1 + 7) =
                prefactor_y * *(b + 244 * OS1_S1 + 2) -
                p_over_q * *(b + 317 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 2) +
                one_over_two_q * *(b + 244 * OS1_S1 + 0);
            *(b + 244 * OS1_S1 + 8) =
                prefactor_z * *(b + 244 * OS1_S1 + 2) -
                p_over_q * *(b + 318 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 2);
            *(b + 244 * OS1_S1 + 9) =
                prefactor_z * *(b + 244 * OS1_S1 + 3) -
                p_over_q * *(b + 318 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 3) +
                one_over_two_q * *(b + 244 * OS1_S1 + 0);
            *(b + 245 * OS1_S1 + 4) =
                prefactor_x * *(b + 245 * OS1_S1 + 1) -
                p_over_q * *(b + 311 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 1) +
                one_over_two_q * *(b + 245 * OS1_S1 + 0);
            *(b + 245 * OS1_S1 + 5) =
                prefactor_y * *(b + 245 * OS1_S1 + 1) -
                p_over_q * *(b + 318 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 1);
            *(b + 245 * OS1_S1 + 6) =
                prefactor_z * *(b + 245 * OS1_S1 + 1) -
                p_over_q * *(b + 319 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 1);
            *(b + 245 * OS1_S1 + 7) =
                prefactor_y * *(b + 245 * OS1_S1 + 2) -
                p_over_q * *(b + 318 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 2) +
                one_over_two_q * *(b + 245 * OS1_S1 + 0);
            *(b + 245 * OS1_S1 + 8) =
                prefactor_y * *(b + 245 * OS1_S1 + 3) -
                p_over_q * *(b + 318 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 3);
            *(b + 245 * OS1_S1 + 9) =
                prefactor_z * *(b + 245 * OS1_S1 + 3) -
                p_over_q * *(b + 319 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 3) +
                one_over_two_q * *(b + 245 * OS1_S1 + 0);
            *(b + 246 * OS1_S1 + 4) =
                prefactor_x * *(b + 246 * OS1_S1 + 1) -
                p_over_q * *(b + 312 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 1) +
                one_over_two_q * *(b + 246 * OS1_S1 + 0);
            *(b + 246 * OS1_S1 + 5) = prefactor_y * *(b + 246 * OS1_S1 + 1) -
                                      p_over_q * *(b + 319 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 185 * OS1_S1 + 1);
            *(b + 246 * OS1_S1 + 6) =
                prefactor_x * *(b + 246 * OS1_S1 + 3) -
                p_over_q * *(b + 312 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 3);
            *(b + 246 * OS1_S1 + 7) = prefactor_y * *(b + 246 * OS1_S1 + 2) -
                                      p_over_q * *(b + 319 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 185 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 246 * OS1_S1 + 0);
            *(b + 246 * OS1_S1 + 8) = prefactor_y * *(b + 246 * OS1_S1 + 3) -
                                      p_over_q * *(b + 319 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 185 * OS1_S1 + 3);
            *(b + 246 * OS1_S1 + 9) =
                prefactor_z * *(b + 246 * OS1_S1 + 3) -
                p_over_q * *(b + 320 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 3) +
                one_over_two_q * *(b + 246 * OS1_S1 + 0);
            *(b + 247 * OS1_S1 + 4) =
                prefactor_x * *(b + 247 * OS1_S1 + 1) -
                p_over_q * *(b + 313 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 1) +
                one_over_two_q * *(b + 247 * OS1_S1 + 0);
            *(b + 247 * OS1_S1 + 5) = prefactor_y * *(b + 247 * OS1_S1 + 1) -
                                      p_over_q * *(b + 320 * OS1_S1 + 1);
            *(b + 247 * OS1_S1 + 6) =
                prefactor_x * *(b + 247 * OS1_S1 + 3) -
                p_over_q * *(b + 313 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 3);
            *(b + 247 * OS1_S1 + 7) = prefactor_y * *(b + 247 * OS1_S1 + 2) -
                                      p_over_q * *(b + 320 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 247 * OS1_S1 + 0);
            *(b + 247 * OS1_S1 + 8) = prefactor_y * *(b + 247 * OS1_S1 + 3) -
                                      p_over_q * *(b + 320 * OS1_S1 + 3);
            *(b + 247 * OS1_S1 + 9) =
                prefactor_z * *(b + 247 * OS1_S1 + 3) -
                p_over_q * *(b + 321 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 3) +
                one_over_two_q * *(b + 247 * OS1_S1 + 0);
            *(b + 248 * OS1_S1 + 4) =
                prefactor_x * *(b + 248 * OS1_S1 + 1) -
                p_over_q * *(b + 314 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 1) +
                one_over_two_q * *(b + 248 * OS1_S1 + 0);
            *(b + 248 * OS1_S1 + 5) =
                prefactor_x * *(b + 248 * OS1_S1 + 2) -
                p_over_q * *(b + 314 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 2);
            *(b + 248 * OS1_S1 + 6) = prefactor_z * *(b + 248 * OS1_S1 + 1) -
                                      p_over_q * *(b + 323 * OS1_S1 + 1);
            *(b + 248 * OS1_S1 + 7) =
                prefactor_y * *(b + 248 * OS1_S1 + 2) -
                p_over_q * *(b + 322 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 2) +
                one_over_two_q * *(b + 248 * OS1_S1 + 0);
            *(b + 248 * OS1_S1 + 8) = prefactor_z * *(b + 248 * OS1_S1 + 2) -
                                      p_over_q * *(b + 323 * OS1_S1 + 2);
            *(b + 248 * OS1_S1 + 9) = prefactor_z * *(b + 248 * OS1_S1 + 3) -
                                      p_over_q * *(b + 323 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 248 * OS1_S1 + 0);
            *(b + 249 * OS1_S1 + 4) =
                prefactor_x * *(b + 249 * OS1_S1 + 1) -
                p_over_q * *(b + 315 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 1) +
                one_over_two_q * *(b + 249 * OS1_S1 + 0);
            *(b + 249 * OS1_S1 + 5) =
                prefactor_x * *(b + 249 * OS1_S1 + 2) -
                p_over_q * *(b + 315 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 2);
            *(b + 249 * OS1_S1 + 6) = prefactor_z * *(b + 249 * OS1_S1 + 1) -
                                      p_over_q * *(b + 324 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 186 * OS1_S1 + 1);
            *(b + 249 * OS1_S1 + 7) =
                prefactor_y * *(b + 249 * OS1_S1 + 2) -
                p_over_q * *(b + 323 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 2) +
                one_over_two_q * *(b + 249 * OS1_S1 + 0);
            *(b + 249 * OS1_S1 + 8) = prefactor_z * *(b + 249 * OS1_S1 + 2) -
                                      p_over_q * *(b + 324 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 186 * OS1_S1 + 2);
            *(b + 249 * OS1_S1 + 9) = prefactor_z * *(b + 249 * OS1_S1 + 3) -
                                      p_over_q * *(b + 324 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 186 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 249 * OS1_S1 + 0);
            *(b + 250 * OS1_S1 + 4) =
                prefactor_x * *(b + 250 * OS1_S1 + 1) -
                p_over_q * *(b + 316 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 1) +
                one_over_two_q * *(b + 250 * OS1_S1 + 0);
            *(b + 250 * OS1_S1 + 5) =
                prefactor_x * *(b + 250 * OS1_S1 + 2) -
                p_over_q * *(b + 316 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 2);
            *(b + 250 * OS1_S1 + 6) =
                prefactor_z * *(b + 250 * OS1_S1 + 1) -
                p_over_q * *(b + 325 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 1);
            *(b + 250 * OS1_S1 + 7) =
                prefactor_y * *(b + 250 * OS1_S1 + 2) -
                p_over_q * *(b + 324 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 2) +
                one_over_two_q * *(b + 250 * OS1_S1 + 0);
            *(b + 250 * OS1_S1 + 8) =
                prefactor_z * *(b + 250 * OS1_S1 + 2) -
                p_over_q * *(b + 325 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 2);
            *(b + 250 * OS1_S1 + 9) =
                prefactor_z * *(b + 250 * OS1_S1 + 3) -
                p_over_q * *(b + 325 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 3) +
                one_over_two_q * *(b + 250 * OS1_S1 + 0);
            *(b + 251 * OS1_S1 + 4) =
                prefactor_x * *(b + 251 * OS1_S1 + 1) -
                p_over_q * *(b + 317 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 1) +
                one_over_two_q * *(b + 251 * OS1_S1 + 0);
            *(b + 251 * OS1_S1 + 5) =
                prefactor_x * *(b + 251 * OS1_S1 + 2) -
                p_over_q * *(b + 317 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 2);
            *(b + 251 * OS1_S1 + 6) =
                prefactor_z * *(b + 251 * OS1_S1 + 1) -
                p_over_q * *(b + 326 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 1);
            *(b + 251 * OS1_S1 + 7) =
                prefactor_y * *(b + 251 * OS1_S1 + 2) -
                p_over_q * *(b + 325 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 2) +
                one_over_two_q * *(b + 251 * OS1_S1 + 0);
            *(b + 251 * OS1_S1 + 8) =
                prefactor_z * *(b + 251 * OS1_S1 + 2) -
                p_over_q * *(b + 326 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 2);
            *(b + 251 * OS1_S1 + 9) =
                prefactor_z * *(b + 251 * OS1_S1 + 3) -
                p_over_q * *(b + 326 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 3) +
                one_over_two_q * *(b + 251 * OS1_S1 + 0);
            *(b + 252 * OS1_S1 + 4) =
                prefactor_x * *(b + 252 * OS1_S1 + 1) -
                p_over_q * *(b + 318 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 1) +
                one_over_two_q * *(b + 252 * OS1_S1 + 0);
            *(b + 252 * OS1_S1 + 5) =
                prefactor_y * *(b + 252 * OS1_S1 + 1) -
                p_over_q * *(b + 326 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 1);
            *(b + 252 * OS1_S1 + 6) =
                prefactor_x * *(b + 252 * OS1_S1 + 3) -
                p_over_q * *(b + 318 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 3);
            *(b + 252 * OS1_S1 + 7) =
                prefactor_y * *(b + 252 * OS1_S1 + 2) -
                p_over_q * *(b + 326 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 2) +
                one_over_two_q * *(b + 252 * OS1_S1 + 0);
            *(b + 252 * OS1_S1 + 8) =
                prefactor_y * *(b + 252 * OS1_S1 + 3) -
                p_over_q * *(b + 326 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 3);
            *(b + 252 * OS1_S1 + 9) =
                prefactor_z * *(b + 252 * OS1_S1 + 3) -
                p_over_q * *(b + 327 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 3) +
                one_over_two_q * *(b + 252 * OS1_S1 + 0);
            *(b + 253 * OS1_S1 + 4) =
                prefactor_x * *(b + 253 * OS1_S1 + 1) -
                p_over_q * *(b + 319 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 1) +
                one_over_two_q * *(b + 253 * OS1_S1 + 0);
            *(b + 253 * OS1_S1 + 5) =
                prefactor_y * *(b + 253 * OS1_S1 + 1) -
                p_over_q * *(b + 327 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 1);
            *(b + 253 * OS1_S1 + 6) =
                prefactor_x * *(b + 253 * OS1_S1 + 3) -
                p_over_q * *(b + 319 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 3);
            *(b + 253 * OS1_S1 + 7) =
                prefactor_y * *(b + 253 * OS1_S1 + 2) -
                p_over_q * *(b + 327 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 2) +
                one_over_two_q * *(b + 253 * OS1_S1 + 0);
            *(b + 253 * OS1_S1 + 8) =
                prefactor_y * *(b + 253 * OS1_S1 + 3) -
                p_over_q * *(b + 327 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 3);
            *(b + 253 * OS1_S1 + 9) =
                prefactor_z * *(b + 253 * OS1_S1 + 3) -
                p_over_q * *(b + 328 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 3) +
                one_over_two_q * *(b + 253 * OS1_S1 + 0);
            *(b + 254 * OS1_S1 + 4) =
                prefactor_x * *(b + 254 * OS1_S1 + 1) -
                p_over_q * *(b + 320 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 1) +
                one_over_two_q * *(b + 254 * OS1_S1 + 0);
            *(b + 254 * OS1_S1 + 5) = prefactor_y * *(b + 254 * OS1_S1 + 1) -
                                      p_over_q * *(b + 328 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 192 * OS1_S1 + 1);
            *(b + 254 * OS1_S1 + 6) =
                prefactor_x * *(b + 254 * OS1_S1 + 3) -
                p_over_q * *(b + 320 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 3);
            *(b + 254 * OS1_S1 + 7) = prefactor_y * *(b + 254 * OS1_S1 + 2) -
                                      p_over_q * *(b + 328 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 192 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 254 * OS1_S1 + 0);
            *(b + 254 * OS1_S1 + 8) = prefactor_y * *(b + 254 * OS1_S1 + 3) -
                                      p_over_q * *(b + 328 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 192 * OS1_S1 + 3);
            *(b + 254 * OS1_S1 + 9) =
                prefactor_z * *(b + 254 * OS1_S1 + 3) -
                p_over_q * *(b + 329 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 3) +
                one_over_two_q * *(b + 254 * OS1_S1 + 0);
            *(b + 255 * OS1_S1 + 4) =
                prefactor_x * *(b + 255 * OS1_S1 + 1) -
                p_over_q * *(b + 321 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 1) +
                one_over_two_q * *(b + 255 * OS1_S1 + 0);
            *(b + 255 * OS1_S1 + 5) = prefactor_y * *(b + 255 * OS1_S1 + 1) -
                                      p_over_q * *(b + 329 * OS1_S1 + 1);
            *(b + 255 * OS1_S1 + 6) =
                prefactor_x * *(b + 255 * OS1_S1 + 3) -
                p_over_q * *(b + 321 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 3);
            *(b + 255 * OS1_S1 + 7) = prefactor_y * *(b + 255 * OS1_S1 + 2) -
                                      p_over_q * *(b + 329 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 255 * OS1_S1 + 0);
            *(b + 255 * OS1_S1 + 8) = prefactor_y * *(b + 255 * OS1_S1 + 3) -
                                      p_over_q * *(b + 329 * OS1_S1 + 3);
            *(b + 255 * OS1_S1 + 9) =
                prefactor_z * *(b + 255 * OS1_S1 + 3) -
                p_over_q * *(b + 330 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 3) +
                one_over_two_q * *(b + 255 * OS1_S1 + 0);
            *(b + 256 * OS1_S1 + 4) =
                prefactor_x * *(b + 256 * OS1_S1 + 1) -
                p_over_q * *(b + 322 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 1) +
                one_over_two_q * *(b + 256 * OS1_S1 + 0);
            *(b + 256 * OS1_S1 + 5) =
                prefactor_x * *(b + 256 * OS1_S1 + 2) -
                p_over_q * *(b + 322 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 2);
            *(b + 256 * OS1_S1 + 6) = prefactor_z * *(b + 256 * OS1_S1 + 1) -
                                      p_over_q * *(b + 332 * OS1_S1 + 1);
            *(b + 256 * OS1_S1 + 7) =
                prefactor_y * *(b + 256 * OS1_S1 + 2) -
                p_over_q * *(b + 331 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 2) +
                one_over_two_q * *(b + 256 * OS1_S1 + 0);
            *(b + 256 * OS1_S1 + 8) = prefactor_z * *(b + 256 * OS1_S1 + 2) -
                                      p_over_q * *(b + 332 * OS1_S1 + 2);
            *(b + 256 * OS1_S1 + 9) = prefactor_z * *(b + 256 * OS1_S1 + 3) -
                                      p_over_q * *(b + 332 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 256 * OS1_S1 + 0);
            *(b + 257 * OS1_S1 + 4) =
                prefactor_x * *(b + 257 * OS1_S1 + 1) -
                p_over_q * *(b + 323 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 1) +
                one_over_two_q * *(b + 257 * OS1_S1 + 0);
            *(b + 257 * OS1_S1 + 5) =
                prefactor_x * *(b + 257 * OS1_S1 + 2) -
                p_over_q * *(b + 323 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 2);
            *(b + 257 * OS1_S1 + 6) = prefactor_z * *(b + 257 * OS1_S1 + 1) -
                                      p_over_q * *(b + 333 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 193 * OS1_S1 + 1);
            *(b + 257 * OS1_S1 + 7) =
                prefactor_y * *(b + 257 * OS1_S1 + 2) -
                p_over_q * *(b + 332 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 2) +
                one_over_two_q * *(b + 257 * OS1_S1 + 0);
            *(b + 257 * OS1_S1 + 8) = prefactor_z * *(b + 257 * OS1_S1 + 2) -
                                      p_over_q * *(b + 333 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 193 * OS1_S1 + 2);
            *(b + 257 * OS1_S1 + 9) = prefactor_z * *(b + 257 * OS1_S1 + 3) -
                                      p_over_q * *(b + 333 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 193 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 257 * OS1_S1 + 0);
            *(b + 258 * OS1_S1 + 4) =
                prefactor_x * *(b + 258 * OS1_S1 + 1) -
                p_over_q * *(b + 324 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 1) +
                one_over_two_q * *(b + 258 * OS1_S1 + 0);
            *(b + 258 * OS1_S1 + 5) =
                prefactor_x * *(b + 258 * OS1_S1 + 2) -
                p_over_q * *(b + 324 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 2);
            *(b + 258 * OS1_S1 + 6) =
                prefactor_z * *(b + 258 * OS1_S1 + 1) -
                p_over_q * *(b + 334 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 1);
            *(b + 258 * OS1_S1 + 7) =
                prefactor_y * *(b + 258 * OS1_S1 + 2) -
                p_over_q * *(b + 333 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 2) +
                one_over_two_q * *(b + 258 * OS1_S1 + 0);
            *(b + 258 * OS1_S1 + 8) =
                prefactor_z * *(b + 258 * OS1_S1 + 2) -
                p_over_q * *(b + 334 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 2);
            *(b + 258 * OS1_S1 + 9) =
                prefactor_z * *(b + 258 * OS1_S1 + 3) -
                p_over_q * *(b + 334 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 3) +
                one_over_two_q * *(b + 258 * OS1_S1 + 0);
            *(b + 259 * OS1_S1 + 4) =
                prefactor_x * *(b + 259 * OS1_S1 + 1) -
                p_over_q * *(b + 325 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 1) +
                one_over_two_q * *(b + 259 * OS1_S1 + 0);
            *(b + 259 * OS1_S1 + 5) =
                prefactor_x * *(b + 259 * OS1_S1 + 2) -
                p_over_q * *(b + 325 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 2);
            *(b + 259 * OS1_S1 + 6) =
                prefactor_x * *(b + 259 * OS1_S1 + 3) -
                p_over_q * *(b + 325 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 3);
            *(b + 259 * OS1_S1 + 7) =
                prefactor_y * *(b + 259 * OS1_S1 + 2) -
                p_over_q * *(b + 334 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 2) +
                one_over_two_q * *(b + 259 * OS1_S1 + 0);
            *(b + 259 * OS1_S1 + 8) =
                prefactor_z * *(b + 259 * OS1_S1 + 2) -
                p_over_q * *(b + 335 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 2);
            *(b + 259 * OS1_S1 + 9) =
                prefactor_z * *(b + 259 * OS1_S1 + 3) -
                p_over_q * *(b + 335 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 3) +
                one_over_two_q * *(b + 259 * OS1_S1 + 0);
            *(b + 260 * OS1_S1 + 4) =
                prefactor_x * *(b + 260 * OS1_S1 + 1) -
                p_over_q * *(b + 326 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 1) +
                one_over_two_q * *(b + 260 * OS1_S1 + 0);
            *(b + 260 * OS1_S1 + 5) =
                prefactor_x * *(b + 260 * OS1_S1 + 2) -
                p_over_q * *(b + 326 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 2);
            *(b + 260 * OS1_S1 + 6) =
                prefactor_x * *(b + 260 * OS1_S1 + 3) -
                p_over_q * *(b + 326 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 3);
            *(b + 260 * OS1_S1 + 7) =
                prefactor_y * *(b + 260 * OS1_S1 + 2) -
                p_over_q * *(b + 335 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 2) +
                one_over_two_q * *(b + 260 * OS1_S1 + 0);
            *(b + 260 * OS1_S1 + 8) =
                prefactor_z * *(b + 260 * OS1_S1 + 2) -
                p_over_q * *(b + 336 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 2);
            *(b + 260 * OS1_S1 + 9) =
                prefactor_z * *(b + 260 * OS1_S1 + 3) -
                p_over_q * *(b + 336 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 3) +
                one_over_two_q * *(b + 260 * OS1_S1 + 0);
            *(b + 261 * OS1_S1 + 4) =
                prefactor_x * *(b + 261 * OS1_S1 + 1) -
                p_over_q * *(b + 327 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 1) +
                one_over_two_q * *(b + 261 * OS1_S1 + 0);
            *(b + 261 * OS1_S1 + 5) =
                prefactor_x * *(b + 261 * OS1_S1 + 2) -
                p_over_q * *(b + 327 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 2);
            *(b + 261 * OS1_S1 + 6) =
                prefactor_x * *(b + 261 * OS1_S1 + 3) -
                p_over_q * *(b + 327 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 3);
            *(b + 261 * OS1_S1 + 7) =
                prefactor_y * *(b + 261 * OS1_S1 + 2) -
                p_over_q * *(b + 336 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 2) +
                one_over_two_q * *(b + 261 * OS1_S1 + 0);
            *(b + 261 * OS1_S1 + 8) =
                prefactor_y * *(b + 261 * OS1_S1 + 3) -
                p_over_q * *(b + 336 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 3);
            *(b + 261 * OS1_S1 + 9) =
                prefactor_z * *(b + 261 * OS1_S1 + 3) -
                p_over_q * *(b + 337 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 3) +
                one_over_two_q * *(b + 261 * OS1_S1 + 0);
            *(b + 262 * OS1_S1 + 4) =
                prefactor_x * *(b + 262 * OS1_S1 + 1) -
                p_over_q * *(b + 328 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 1) +
                one_over_two_q * *(b + 262 * OS1_S1 + 0);
            *(b + 262 * OS1_S1 + 5) =
                prefactor_y * *(b + 262 * OS1_S1 + 1) -
                p_over_q * *(b + 337 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 1);
            *(b + 262 * OS1_S1 + 6) =
                prefactor_x * *(b + 262 * OS1_S1 + 3) -
                p_over_q * *(b + 328 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 3);
            *(b + 262 * OS1_S1 + 7) =
                prefactor_y * *(b + 262 * OS1_S1 + 2) -
                p_over_q * *(b + 337 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 2) +
                one_over_two_q * *(b + 262 * OS1_S1 + 0);
            *(b + 262 * OS1_S1 + 8) =
                prefactor_y * *(b + 262 * OS1_S1 + 3) -
                p_over_q * *(b + 337 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 3);
            *(b + 262 * OS1_S1 + 9) =
                prefactor_z * *(b + 262 * OS1_S1 + 3) -
                p_over_q * *(b + 338 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 3) +
                one_over_two_q * *(b + 262 * OS1_S1 + 0);
            *(b + 263 * OS1_S1 + 4) =
                prefactor_x * *(b + 263 * OS1_S1 + 1) -
                p_over_q * *(b + 329 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 1) +
                one_over_two_q * *(b + 263 * OS1_S1 + 0);
            *(b + 263 * OS1_S1 + 5) = prefactor_y * *(b + 263 * OS1_S1 + 1) -
                                      p_over_q * *(b + 338 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 200 * OS1_S1 + 1);
            *(b + 263 * OS1_S1 + 6) =
                prefactor_x * *(b + 263 * OS1_S1 + 3) -
                p_over_q * *(b + 329 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 3);
            *(b + 263 * OS1_S1 + 7) = prefactor_y * *(b + 263 * OS1_S1 + 2) -
                                      p_over_q * *(b + 338 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 200 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 263 * OS1_S1 + 0);
            *(b + 263 * OS1_S1 + 8) = prefactor_y * *(b + 263 * OS1_S1 + 3) -
                                      p_over_q * *(b + 338 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 200 * OS1_S1 + 3);
            *(b + 263 * OS1_S1 + 9) =
                prefactor_z * *(b + 263 * OS1_S1 + 3) -
                p_over_q * *(b + 339 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 3) +
                one_over_two_q * *(b + 263 * OS1_S1 + 0);
            *(b + 264 * OS1_S1 + 4) =
                prefactor_x * *(b + 264 * OS1_S1 + 1) -
                p_over_q * *(b + 330 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 1) +
                one_over_two_q * *(b + 264 * OS1_S1 + 0);
            *(b + 264 * OS1_S1 + 5) = prefactor_y * *(b + 264 * OS1_S1 + 1) -
                                      p_over_q * *(b + 339 * OS1_S1 + 1);
            *(b + 264 * OS1_S1 + 6) =
                prefactor_x * *(b + 264 * OS1_S1 + 3) -
                p_over_q * *(b + 330 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 3);
            *(b + 264 * OS1_S1 + 7) = prefactor_y * *(b + 264 * OS1_S1 + 2) -
                                      p_over_q * *(b + 339 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 264 * OS1_S1 + 0);
            *(b + 264 * OS1_S1 + 8) = prefactor_y * *(b + 264 * OS1_S1 + 3) -
                                      p_over_q * *(b + 339 * OS1_S1 + 3);
            *(b + 264 * OS1_S1 + 9) =
                prefactor_z * *(b + 264 * OS1_S1 + 3) -
                p_over_q * *(b + 340 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 3) +
                one_over_two_q * *(b + 264 * OS1_S1 + 0);
            *(b + 265 * OS1_S1 + 4) = prefactor_x * *(b + 265 * OS1_S1 + 1) -
                                      p_over_q * *(b + 331 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 210 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 265 * OS1_S1 + 0);
            *(b + 265 * OS1_S1 + 5) = prefactor_x * *(b + 265 * OS1_S1 + 2) -
                                      p_over_q * *(b + 331 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 210 * OS1_S1 + 2);
            *(b + 265 * OS1_S1 + 6) = prefactor_z * *(b + 265 * OS1_S1 + 1) -
                                      p_over_q * *(b + 342 * OS1_S1 + 1);
            *(b + 265 * OS1_S1 + 7) =
                prefactor_y * *(b + 265 * OS1_S1 + 2) -
                p_over_q * *(b + 341 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 2) +
                one_over_two_q * *(b + 265 * OS1_S1 + 0);
            *(b + 265 * OS1_S1 + 8) = prefactor_z * *(b + 265 * OS1_S1 + 2) -
                                      p_over_q * *(b + 342 * OS1_S1 + 2);
            *(b + 265 * OS1_S1 + 9) = prefactor_z * *(b + 265 * OS1_S1 + 3) -
                                      p_over_q * *(b + 342 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 265 * OS1_S1 + 0);
            *(b + 266 * OS1_S1 + 4) = prefactor_x * *(b + 266 * OS1_S1 + 1) -
                                      p_over_q * *(b + 332 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 211 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 266 * OS1_S1 + 0);
            *(b + 266 * OS1_S1 + 5) = prefactor_x * *(b + 266 * OS1_S1 + 2) -
                                      p_over_q * *(b + 332 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 211 * OS1_S1 + 2);
            *(b + 266 * OS1_S1 + 6) = prefactor_z * *(b + 266 * OS1_S1 + 1) -
                                      p_over_q * *(b + 343 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 201 * OS1_S1 + 1);
            *(b + 266 * OS1_S1 + 7) =
                prefactor_y * *(b + 266 * OS1_S1 + 2) -
                p_over_q * *(b + 342 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 2) +
                one_over_two_q * *(b + 266 * OS1_S1 + 0);
            *(b + 266 * OS1_S1 + 8) = prefactor_z * *(b + 266 * OS1_S1 + 2) -
                                      p_over_q * *(b + 343 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 201 * OS1_S1 + 2);
            *(b + 266 * OS1_S1 + 9) = prefactor_z * *(b + 266 * OS1_S1 + 3) -
                                      p_over_q * *(b + 343 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 201 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 266 * OS1_S1 + 0);
            *(b + 267 * OS1_S1 + 4) = prefactor_x * *(b + 267 * OS1_S1 + 1) -
                                      p_over_q * *(b + 333 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 212 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 267 * OS1_S1 + 0);
            *(b + 267 * OS1_S1 + 5) = prefactor_x * *(b + 267 * OS1_S1 + 2) -
                                      p_over_q * *(b + 333 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 212 * OS1_S1 + 2);
            *(b + 267 * OS1_S1 + 6) = prefactor_x * *(b + 267 * OS1_S1 + 3) -
                                      p_over_q * *(b + 333 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 212 * OS1_S1 + 3);
            *(b + 267 * OS1_S1 + 7) =
                prefactor_y * *(b + 267 * OS1_S1 + 2) -
                p_over_q * *(b + 343 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 2) +
                one_over_two_q * *(b + 267 * OS1_S1 + 0);
            *(b + 267 * OS1_S1 + 8) =
                prefactor_z * *(b + 267 * OS1_S1 + 2) -
                p_over_q * *(b + 344 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 2);
            *(b + 267 * OS1_S1 + 9) =
                prefactor_z * *(b + 267 * OS1_S1 + 3) -
                p_over_q * *(b + 344 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 3) +
                one_over_two_q * *(b + 267 * OS1_S1 + 0);
            *(b + 268 * OS1_S1 + 4) = prefactor_x * *(b + 268 * OS1_S1 + 1) -
                                      p_over_q * *(b + 334 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 213 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 268 * OS1_S1 + 0);
            *(b + 268 * OS1_S1 + 5) = prefactor_x * *(b + 268 * OS1_S1 + 2) -
                                      p_over_q * *(b + 334 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 213 * OS1_S1 + 2);
            *(b + 268 * OS1_S1 + 6) = prefactor_x * *(b + 268 * OS1_S1 + 3) -
                                      p_over_q * *(b + 334 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 213 * OS1_S1 + 3);
            *(b + 268 * OS1_S1 + 7) =
                prefactor_y * *(b + 268 * OS1_S1 + 2) -
                p_over_q * *(b + 344 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 2) +
                one_over_two_q * *(b + 268 * OS1_S1 + 0);
            *(b + 268 * OS1_S1 + 8) =
                prefactor_z * *(b + 268 * OS1_S1 + 2) -
                p_over_q * *(b + 345 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 2);
            *(b + 268 * OS1_S1 + 9) =
                prefactor_z * *(b + 268 * OS1_S1 + 3) -
                p_over_q * *(b + 345 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 3) +
                one_over_two_q * *(b + 268 * OS1_S1 + 0);
            *(b + 269 * OS1_S1 + 4) = prefactor_x * *(b + 269 * OS1_S1 + 1) -
                                      p_over_q * *(b + 335 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 214 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 269 * OS1_S1 + 0);
            *(b + 269 * OS1_S1 + 5) = prefactor_x * *(b + 269 * OS1_S1 + 2) -
                                      p_over_q * *(b + 335 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 214 * OS1_S1 + 2);
            *(b + 269 * OS1_S1 + 6) = prefactor_x * *(b + 269 * OS1_S1 + 3) -
                                      p_over_q * *(b + 335 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 214 * OS1_S1 + 3);
            *(b + 269 * OS1_S1 + 7) =
                prefactor_y * *(b + 269 * OS1_S1 + 2) -
                p_over_q * *(b + 345 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 2) +
                one_over_two_q * *(b + 269 * OS1_S1 + 0);
            *(b + 269 * OS1_S1 + 8) =
                prefactor_z * *(b + 269 * OS1_S1 + 2) -
                p_over_q * *(b + 346 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 2);
            *(b + 269 * OS1_S1 + 9) =
                prefactor_z * *(b + 269 * OS1_S1 + 3) -
                p_over_q * *(b + 346 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 3) +
                one_over_two_q * *(b + 269 * OS1_S1 + 0);
            *(b + 270 * OS1_S1 + 4) = prefactor_x * *(b + 270 * OS1_S1 + 1) -
                                      p_over_q * *(b + 336 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 215 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 270 * OS1_S1 + 0);
            *(b + 270 * OS1_S1 + 5) = prefactor_x * *(b + 270 * OS1_S1 + 2) -
                                      p_over_q * *(b + 336 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 215 * OS1_S1 + 2);
            *(b + 270 * OS1_S1 + 6) = prefactor_x * *(b + 270 * OS1_S1 + 3) -
                                      p_over_q * *(b + 336 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 215 * OS1_S1 + 3);
            *(b + 270 * OS1_S1 + 7) =
                prefactor_y * *(b + 270 * OS1_S1 + 2) -
                p_over_q * *(b + 346 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 2) +
                one_over_two_q * *(b + 270 * OS1_S1 + 0);
            *(b + 270 * OS1_S1 + 8) =
                prefactor_y * *(b + 270 * OS1_S1 + 3) -
                p_over_q * *(b + 346 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 3);
            *(b + 270 * OS1_S1 + 9) =
                prefactor_z * *(b + 270 * OS1_S1 + 3) -
                p_over_q * *(b + 347 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 3) +
                one_over_two_q * *(b + 270 * OS1_S1 + 0);
            *(b + 271 * OS1_S1 + 4) = prefactor_x * *(b + 271 * OS1_S1 + 1) -
                                      p_over_q * *(b + 337 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 216 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 271 * OS1_S1 + 0);
            *(b + 271 * OS1_S1 + 5) = prefactor_x * *(b + 271 * OS1_S1 + 2) -
                                      p_over_q * *(b + 337 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 216 * OS1_S1 + 2);
            *(b + 271 * OS1_S1 + 6) = prefactor_x * *(b + 271 * OS1_S1 + 3) -
                                      p_over_q * *(b + 337 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 216 * OS1_S1 + 3);
            *(b + 271 * OS1_S1 + 7) =
                prefactor_y * *(b + 271 * OS1_S1 + 2) -
                p_over_q * *(b + 347 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 2) +
                one_over_two_q * *(b + 271 * OS1_S1 + 0);
            *(b + 271 * OS1_S1 + 8) =
                prefactor_y * *(b + 271 * OS1_S1 + 3) -
                p_over_q * *(b + 347 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 3);
            *(b + 271 * OS1_S1 + 9) =
                prefactor_z * *(b + 271 * OS1_S1 + 3) -
                p_over_q * *(b + 348 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 3) +
                one_over_two_q * *(b + 271 * OS1_S1 + 0);
            *(b + 272 * OS1_S1 + 4) = prefactor_x * *(b + 272 * OS1_S1 + 1) -
                                      p_over_q * *(b + 338 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 217 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 272 * OS1_S1 + 0);
            *(b + 272 * OS1_S1 + 5) = prefactor_x * *(b + 272 * OS1_S1 + 2) -
                                      p_over_q * *(b + 338 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 217 * OS1_S1 + 2);
            *(b + 272 * OS1_S1 + 6) = prefactor_x * *(b + 272 * OS1_S1 + 3) -
                                      p_over_q * *(b + 338 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 217 * OS1_S1 + 3);
            *(b + 272 * OS1_S1 + 7) =
                prefactor_y * *(b + 272 * OS1_S1 + 2) -
                p_over_q * *(b + 348 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 2) +
                one_over_two_q * *(b + 272 * OS1_S1 + 0);
            *(b + 272 * OS1_S1 + 8) =
                prefactor_y * *(b + 272 * OS1_S1 + 3) -
                p_over_q * *(b + 348 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 3);
            *(b + 272 * OS1_S1 + 9) =
                prefactor_z * *(b + 272 * OS1_S1 + 3) -
                p_over_q * *(b + 349 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 3) +
                one_over_two_q * *(b + 272 * OS1_S1 + 0);
            *(b + 273 * OS1_S1 + 4) = prefactor_x * *(b + 273 * OS1_S1 + 1) -
                                      p_over_q * *(b + 339 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 218 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 273 * OS1_S1 + 0);
            *(b + 273 * OS1_S1 + 5) = prefactor_y * *(b + 273 * OS1_S1 + 1) -
                                      p_over_q * *(b + 349 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 209 * OS1_S1 + 1);
            *(b + 273 * OS1_S1 + 6) = prefactor_x * *(b + 273 * OS1_S1 + 3) -
                                      p_over_q * *(b + 339 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 218 * OS1_S1 + 3);
            *(b + 273 * OS1_S1 + 7) = prefactor_y * *(b + 273 * OS1_S1 + 2) -
                                      p_over_q * *(b + 349 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 209 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 273 * OS1_S1 + 0);
            *(b + 273 * OS1_S1 + 8) = prefactor_y * *(b + 273 * OS1_S1 + 3) -
                                      p_over_q * *(b + 349 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 209 * OS1_S1 + 3);
            *(b + 273 * OS1_S1 + 9) =
                prefactor_z * *(b + 273 * OS1_S1 + 3) -
                p_over_q * *(b + 350 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 3) +
                one_over_two_q * *(b + 273 * OS1_S1 + 0);
            *(b + 274 * OS1_S1 + 4) = prefactor_x * *(b + 274 * OS1_S1 + 1) -
                                      p_over_q * *(b + 340 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 219 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 274 * OS1_S1 + 0);
            *(b + 274 * OS1_S1 + 5) = prefactor_y * *(b + 274 * OS1_S1 + 1) -
                                      p_over_q * *(b + 350 * OS1_S1 + 1);
            *(b + 274 * OS1_S1 + 6) = prefactor_x * *(b + 274 * OS1_S1 + 3) -
                                      p_over_q * *(b + 340 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 219 * OS1_S1 + 3);
            *(b + 274 * OS1_S1 + 7) = prefactor_y * *(b + 274 * OS1_S1 + 2) -
                                      p_over_q * *(b + 350 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 274 * OS1_S1 + 0);
            *(b + 274 * OS1_S1 + 8) = prefactor_y * *(b + 274 * OS1_S1 + 3) -
                                      p_over_q * *(b + 350 * OS1_S1 + 3);
            *(b + 274 * OS1_S1 + 9) =
                prefactor_z * *(b + 274 * OS1_S1 + 3) -
                p_over_q * *(b + 351 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 3) +
                one_over_two_q * *(b + 274 * OS1_S1 + 0);
            *(b + 275 * OS1_S1 + 4) = prefactor_x * *(b + 275 * OS1_S1 + 1) -
                                      p_over_q * *(b + 341 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 275 * OS1_S1 + 0);
            *(b + 275 * OS1_S1 + 5) = prefactor_x * *(b + 275 * OS1_S1 + 2) -
                                      p_over_q * *(b + 341 * OS1_S1 + 2);
            *(b + 275 * OS1_S1 + 6) = prefactor_z * *(b + 275 * OS1_S1 + 1) -
                                      p_over_q * *(b + 353 * OS1_S1 + 1);
            *(b + 275 * OS1_S1 + 7) =
                prefactor_y * *(b + 275 * OS1_S1 + 2) -
                p_over_q * *(b + 352 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 2) +
                one_over_two_q * *(b + 275 * OS1_S1 + 0);
            *(b + 275 * OS1_S1 + 8) = prefactor_z * *(b + 275 * OS1_S1 + 2) -
                                      p_over_q * *(b + 353 * OS1_S1 + 2);
            *(b + 275 * OS1_S1 + 9) = prefactor_z * *(b + 275 * OS1_S1 + 3) -
                                      p_over_q * *(b + 353 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 275 * OS1_S1 + 0);
            *(b + 276 * OS1_S1 + 4) = prefactor_x * *(b + 276 * OS1_S1 + 1) -
                                      p_over_q * *(b + 342 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 276 * OS1_S1 + 0);
            *(b + 276 * OS1_S1 + 5) = prefactor_x * *(b + 276 * OS1_S1 + 2) -
                                      p_over_q * *(b + 342 * OS1_S1 + 2);
            *(b + 276 * OS1_S1 + 6) = prefactor_x * *(b + 276 * OS1_S1 + 3) -
                                      p_over_q * *(b + 342 * OS1_S1 + 3);
            *(b + 276 * OS1_S1 + 7) =
                prefactor_y * *(b + 276 * OS1_S1 + 2) -
                p_over_q * *(b + 353 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 2) +
                one_over_two_q * *(b + 276 * OS1_S1 + 0);
            *(b + 276 * OS1_S1 + 8) = prefactor_z * *(b + 276 * OS1_S1 + 2) -
                                      p_over_q * *(b + 354 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 210 * OS1_S1 + 2);
            *(b + 276 * OS1_S1 + 9) = prefactor_z * *(b + 276 * OS1_S1 + 3) -
                                      p_over_q * *(b + 354 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 210 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 276 * OS1_S1 + 0);
            *(b + 277 * OS1_S1 + 4) = prefactor_x * *(b + 277 * OS1_S1 + 1) -
                                      p_over_q * *(b + 343 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 277 * OS1_S1 + 0);
            *(b + 277 * OS1_S1 + 5) = prefactor_x * *(b + 277 * OS1_S1 + 2) -
                                      p_over_q * *(b + 343 * OS1_S1 + 2);
            *(b + 277 * OS1_S1 + 6) = prefactor_x * *(b + 277 * OS1_S1 + 3) -
                                      p_over_q * *(b + 343 * OS1_S1 + 3);
            *(b + 277 * OS1_S1 + 7) =
                prefactor_y * *(b + 277 * OS1_S1 + 2) -
                p_over_q * *(b + 354 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 2) +
                one_over_two_q * *(b + 277 * OS1_S1 + 0);
            *(b + 277 * OS1_S1 + 8) =
                prefactor_z * *(b + 277 * OS1_S1 + 2) -
                p_over_q * *(b + 355 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 2);
            *(b + 277 * OS1_S1 + 9) =
                prefactor_z * *(b + 277 * OS1_S1 + 3) -
                p_over_q * *(b + 355 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 3) +
                one_over_two_q * *(b + 277 * OS1_S1 + 0);
            *(b + 278 * OS1_S1 + 4) = prefactor_x * *(b + 278 * OS1_S1 + 1) -
                                      p_over_q * *(b + 344 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 278 * OS1_S1 + 0);
            *(b + 278 * OS1_S1 + 5) = prefactor_x * *(b + 278 * OS1_S1 + 2) -
                                      p_over_q * *(b + 344 * OS1_S1 + 2);
            *(b + 278 * OS1_S1 + 6) = prefactor_x * *(b + 278 * OS1_S1 + 3) -
                                      p_over_q * *(b + 344 * OS1_S1 + 3);
            *(b + 278 * OS1_S1 + 7) =
                prefactor_y * *(b + 278 * OS1_S1 + 2) -
                p_over_q * *(b + 355 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 2) +
                one_over_two_q * *(b + 278 * OS1_S1 + 0);
            *(b + 278 * OS1_S1 + 8) =
                prefactor_z * *(b + 278 * OS1_S1 + 2) -
                p_over_q * *(b + 356 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 2);
            *(b + 278 * OS1_S1 + 9) =
                prefactor_z * *(b + 278 * OS1_S1 + 3) -
                p_over_q * *(b + 356 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 3) +
                one_over_two_q * *(b + 278 * OS1_S1 + 0);
            *(b + 279 * OS1_S1 + 4) = prefactor_x * *(b + 279 * OS1_S1 + 1) -
                                      p_over_q * *(b + 345 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 279 * OS1_S1 + 0);
            *(b + 279 * OS1_S1 + 5) = prefactor_x * *(b + 279 * OS1_S1 + 2) -
                                      p_over_q * *(b + 345 * OS1_S1 + 2);
            *(b + 279 * OS1_S1 + 6) = prefactor_x * *(b + 279 * OS1_S1 + 3) -
                                      p_over_q * *(b + 345 * OS1_S1 + 3);
            *(b + 279 * OS1_S1 + 7) =
                prefactor_y * *(b + 279 * OS1_S1 + 2) -
                p_over_q * *(b + 356 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 2) +
                one_over_two_q * *(b + 279 * OS1_S1 + 0);
            *(b + 279 * OS1_S1 + 8) =
                prefactor_z * *(b + 279 * OS1_S1 + 2) -
                p_over_q * *(b + 357 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 2);
            *(b + 279 * OS1_S1 + 9) =
                prefactor_z * *(b + 279 * OS1_S1 + 3) -
                p_over_q * *(b + 357 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 3) +
                one_over_two_q * *(b + 279 * OS1_S1 + 0);
            *(b + 280 * OS1_S1 + 4) = prefactor_x * *(b + 280 * OS1_S1 + 1) -
                                      p_over_q * *(b + 346 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 280 * OS1_S1 + 0);
            *(b + 280 * OS1_S1 + 5) = prefactor_x * *(b + 280 * OS1_S1 + 2) -
                                      p_over_q * *(b + 346 * OS1_S1 + 2);
            *(b + 280 * OS1_S1 + 6) = prefactor_x * *(b + 280 * OS1_S1 + 3) -
                                      p_over_q * *(b + 346 * OS1_S1 + 3);
            *(b + 280 * OS1_S1 + 7) =
                prefactor_y * *(b + 280 * OS1_S1 + 2) -
                p_over_q * *(b + 357 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 2) +
                one_over_two_q * *(b + 280 * OS1_S1 + 0);
            *(b + 280 * OS1_S1 + 8) =
                prefactor_z * *(b + 280 * OS1_S1 + 2) -
                p_over_q * *(b + 358 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 2);
            *(b + 280 * OS1_S1 + 9) =
                prefactor_z * *(b + 280 * OS1_S1 + 3) -
                p_over_q * *(b + 358 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 3) +
                one_over_two_q * *(b + 280 * OS1_S1 + 0);
            *(b + 281 * OS1_S1 + 4) = prefactor_x * *(b + 281 * OS1_S1 + 1) -
                                      p_over_q * *(b + 347 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 281 * OS1_S1 + 0);
            *(b + 281 * OS1_S1 + 5) = prefactor_x * *(b + 281 * OS1_S1 + 2) -
                                      p_over_q * *(b + 347 * OS1_S1 + 2);
            *(b + 281 * OS1_S1 + 6) = prefactor_x * *(b + 281 * OS1_S1 + 3) -
                                      p_over_q * *(b + 347 * OS1_S1 + 3);
            *(b + 281 * OS1_S1 + 7) =
                prefactor_y * *(b + 281 * OS1_S1 + 2) -
                p_over_q * *(b + 358 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 2) +
                one_over_two_q * *(b + 281 * OS1_S1 + 0);
            *(b + 281 * OS1_S1 + 8) =
                prefactor_y * *(b + 281 * OS1_S1 + 3) -
                p_over_q * *(b + 358 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 3);
            *(b + 281 * OS1_S1 + 9) =
                prefactor_z * *(b + 281 * OS1_S1 + 3) -
                p_over_q * *(b + 359 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 3) +
                one_over_two_q * *(b + 281 * OS1_S1 + 0);
            *(b + 282 * OS1_S1 + 4) = prefactor_x * *(b + 282 * OS1_S1 + 1) -
                                      p_over_q * *(b + 348 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 282 * OS1_S1 + 0);
            *(b + 282 * OS1_S1 + 5) = prefactor_x * *(b + 282 * OS1_S1 + 2) -
                                      p_over_q * *(b + 348 * OS1_S1 + 2);
            *(b + 282 * OS1_S1 + 6) = prefactor_x * *(b + 282 * OS1_S1 + 3) -
                                      p_over_q * *(b + 348 * OS1_S1 + 3);
            *(b + 282 * OS1_S1 + 7) =
                prefactor_y * *(b + 282 * OS1_S1 + 2) -
                p_over_q * *(b + 359 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 2) +
                one_over_two_q * *(b + 282 * OS1_S1 + 0);
            *(b + 282 * OS1_S1 + 8) =
                prefactor_y * *(b + 282 * OS1_S1 + 3) -
                p_over_q * *(b + 359 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 3);
            *(b + 282 * OS1_S1 + 9) =
                prefactor_z * *(b + 282 * OS1_S1 + 3) -
                p_over_q * *(b + 360 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 3) +
                one_over_two_q * *(b + 282 * OS1_S1 + 0);
            *(b + 283 * OS1_S1 + 4) = prefactor_x * *(b + 283 * OS1_S1 + 1) -
                                      p_over_q * *(b + 349 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 283 * OS1_S1 + 0);
            *(b + 283 * OS1_S1 + 5) = prefactor_x * *(b + 283 * OS1_S1 + 2) -
                                      p_over_q * *(b + 349 * OS1_S1 + 2);
            *(b + 283 * OS1_S1 + 6) = prefactor_x * *(b + 283 * OS1_S1 + 3) -
                                      p_over_q * *(b + 349 * OS1_S1 + 3);
            *(b + 283 * OS1_S1 + 7) =
                prefactor_y * *(b + 283 * OS1_S1 + 2) -
                p_over_q * *(b + 360 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 2) +
                one_over_two_q * *(b + 283 * OS1_S1 + 0);
            *(b + 283 * OS1_S1 + 8) =
                prefactor_y * *(b + 283 * OS1_S1 + 3) -
                p_over_q * *(b + 360 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 3);
            *(b + 283 * OS1_S1 + 9) =
                prefactor_z * *(b + 283 * OS1_S1 + 3) -
                p_over_q * *(b + 361 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 3) +
                one_over_two_q * *(b + 283 * OS1_S1 + 0);
            *(b + 284 * OS1_S1 + 4) = prefactor_x * *(b + 284 * OS1_S1 + 1) -
                                      p_over_q * *(b + 350 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 284 * OS1_S1 + 0);
            *(b + 284 * OS1_S1 + 5) = prefactor_x * *(b + 284 * OS1_S1 + 2) -
                                      p_over_q * *(b + 350 * OS1_S1 + 2);
            *(b + 284 * OS1_S1 + 6) = prefactor_x * *(b + 284 * OS1_S1 + 3) -
                                      p_over_q * *(b + 350 * OS1_S1 + 3);
            *(b + 284 * OS1_S1 + 7) = prefactor_y * *(b + 284 * OS1_S1 + 2) -
                                      p_over_q * *(b + 361 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 219 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 284 * OS1_S1 + 0);
            *(b + 284 * OS1_S1 + 8) = prefactor_y * *(b + 284 * OS1_S1 + 3) -
                                      p_over_q * *(b + 361 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 219 * OS1_S1 + 3);
            *(b + 284 * OS1_S1 + 9) =
                prefactor_z * *(b + 284 * OS1_S1 + 3) -
                p_over_q * *(b + 362 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 3) +
                one_over_two_q * *(b + 284 * OS1_S1 + 0);
            *(b + 285 * OS1_S1 + 4) = prefactor_x * *(b + 285 * OS1_S1 + 1) -
                                      p_over_q * *(b + 351 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 285 * OS1_S1 + 0);
            *(b + 285 * OS1_S1 + 5) = prefactor_y * *(b + 285 * OS1_S1 + 1) -
                                      p_over_q * *(b + 362 * OS1_S1 + 1);
            *(b + 285 * OS1_S1 + 6) = prefactor_x * *(b + 285 * OS1_S1 + 3) -
                                      p_over_q * *(b + 351 * OS1_S1 + 3);
            *(b + 285 * OS1_S1 + 7) = prefactor_y * *(b + 285 * OS1_S1 + 2) -
                                      p_over_q * *(b + 362 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 285 * OS1_S1 + 0);
            *(b + 285 * OS1_S1 + 8) = prefactor_y * *(b + 285 * OS1_S1 + 3) -
                                      p_over_q * *(b + 362 * OS1_S1 + 3);
            *(b + 285 * OS1_S1 + 9) =
                prefactor_z * *(b + 285 * OS1_S1 + 3) -
                p_over_q * *(b + 363 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 3) +
                one_over_two_q * *(b + 285 * OS1_S1 + 0);
            return;
        }

        void transfer_11_2(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 286 * OS1_S1 + 4) =
                prefactor_x * *(b + 286 * OS1_S1 + 1) -
                p_over_q * *(b + 364 * OS1_S1 + 1) +
                11 * one_over_two_q * *(b + 220 * OS1_S1 + 1) +
                one_over_two_q * *(b + 286 * OS1_S1 + 0);
            *(b + 286 * OS1_S1 + 5) = prefactor_y * *(b + 286 * OS1_S1 + 1) -
                                      p_over_q * *(b + 365 * OS1_S1 + 1);
            *(b + 286 * OS1_S1 + 6) = prefactor_z * *(b + 286 * OS1_S1 + 1) -
                                      p_over_q * *(b + 366 * OS1_S1 + 1);
            *(b + 286 * OS1_S1 + 7) = prefactor_y * *(b + 286 * OS1_S1 + 2) -
                                      p_over_q * *(b + 365 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 286 * OS1_S1 + 0);
            *(b + 286 * OS1_S1 + 8) = prefactor_z * *(b + 286 * OS1_S1 + 2) -
                                      p_over_q * *(b + 366 * OS1_S1 + 2);
            *(b + 286 * OS1_S1 + 9) = prefactor_z * *(b + 286 * OS1_S1 + 3) -
                                      p_over_q * *(b + 366 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 286 * OS1_S1 + 0);
            *(b + 287 * OS1_S1 + 4) =
                prefactor_x * *(b + 287 * OS1_S1 + 1) -
                p_over_q * *(b + 365 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 221 * OS1_S1 + 1) +
                one_over_two_q * *(b + 287 * OS1_S1 + 0);
            *(b + 287 * OS1_S1 + 5) = prefactor_y * *(b + 287 * OS1_S1 + 1) -
                                      p_over_q * *(b + 367 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 220 * OS1_S1 + 1);
            *(b + 287 * OS1_S1 + 6) = prefactor_z * *(b + 287 * OS1_S1 + 1) -
                                      p_over_q * *(b + 368 * OS1_S1 + 1);
            *(b + 287 * OS1_S1 + 7) = prefactor_y * *(b + 287 * OS1_S1 + 2) -
                                      p_over_q * *(b + 367 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 220 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 287 * OS1_S1 + 0);
            *(b + 287 * OS1_S1 + 8) = prefactor_z * *(b + 287 * OS1_S1 + 2) -
                                      p_over_q * *(b + 368 * OS1_S1 + 2);
            *(b + 287 * OS1_S1 + 9) = prefactor_z * *(b + 287 * OS1_S1 + 3) -
                                      p_over_q * *(b + 368 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 287 * OS1_S1 + 0);
            *(b + 288 * OS1_S1 + 4) =
                prefactor_x * *(b + 288 * OS1_S1 + 1) -
                p_over_q * *(b + 366 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 222 * OS1_S1 + 1) +
                one_over_two_q * *(b + 288 * OS1_S1 + 0);
            *(b + 288 * OS1_S1 + 5) = prefactor_y * *(b + 288 * OS1_S1 + 1) -
                                      p_over_q * *(b + 368 * OS1_S1 + 1);
            *(b + 288 * OS1_S1 + 6) = prefactor_z * *(b + 288 * OS1_S1 + 1) -
                                      p_over_q * *(b + 369 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 220 * OS1_S1 + 1);
            *(b + 288 * OS1_S1 + 7) = prefactor_y * *(b + 288 * OS1_S1 + 2) -
                                      p_over_q * *(b + 368 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 288 * OS1_S1 + 0);
            *(b + 288 * OS1_S1 + 8) = prefactor_y * *(b + 288 * OS1_S1 + 3) -
                                      p_over_q * *(b + 368 * OS1_S1 + 3);
            *(b + 288 * OS1_S1 + 9) = prefactor_z * *(b + 288 * OS1_S1 + 3) -
                                      p_over_q * *(b + 369 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 220 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 288 * OS1_S1 + 0);
            *(b + 289 * OS1_S1 + 4) =
                prefactor_x * *(b + 289 * OS1_S1 + 1) -
                p_over_q * *(b + 367 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 223 * OS1_S1 + 1) +
                one_over_two_q * *(b + 289 * OS1_S1 + 0);
            *(b + 289 * OS1_S1 + 5) =
                prefactor_y * *(b + 289 * OS1_S1 + 1) -
                p_over_q * *(b + 370 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 1);
            *(b + 289 * OS1_S1 + 6) = prefactor_z * *(b + 289 * OS1_S1 + 1) -
                                      p_over_q * *(b + 371 * OS1_S1 + 1);
            *(b + 289 * OS1_S1 + 7) =
                prefactor_y * *(b + 289 * OS1_S1 + 2) -
                p_over_q * *(b + 370 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 2) +
                one_over_two_q * *(b + 289 * OS1_S1 + 0);
            *(b + 289 * OS1_S1 + 8) = prefactor_z * *(b + 289 * OS1_S1 + 2) -
                                      p_over_q * *(b + 371 * OS1_S1 + 2);
            *(b + 289 * OS1_S1 + 9) = prefactor_z * *(b + 289 * OS1_S1 + 3) -
                                      p_over_q * *(b + 371 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 289 * OS1_S1 + 0);
            *(b + 290 * OS1_S1 + 4) =
                prefactor_x * *(b + 290 * OS1_S1 + 1) -
                p_over_q * *(b + 368 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 224 * OS1_S1 + 1) +
                one_over_two_q * *(b + 290 * OS1_S1 + 0);
            *(b + 290 * OS1_S1 + 5) = prefactor_y * *(b + 290 * OS1_S1 + 1) -
                                      p_over_q * *(b + 371 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 222 * OS1_S1 + 1);
            *(b + 290 * OS1_S1 + 6) = prefactor_z * *(b + 290 * OS1_S1 + 1) -
                                      p_over_q * *(b + 372 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 221 * OS1_S1 + 1);
            *(b + 290 * OS1_S1 + 7) = prefactor_y * *(b + 290 * OS1_S1 + 2) -
                                      p_over_q * *(b + 371 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 222 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 290 * OS1_S1 + 0);
            *(b + 290 * OS1_S1 + 8) = prefactor_z * *(b + 290 * OS1_S1 + 2) -
                                      p_over_q * *(b + 372 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 221 * OS1_S1 + 2);
            *(b + 290 * OS1_S1 + 9) = prefactor_z * *(b + 290 * OS1_S1 + 3) -
                                      p_over_q * *(b + 372 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 221 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 290 * OS1_S1 + 0);
            *(b + 291 * OS1_S1 + 4) =
                prefactor_x * *(b + 291 * OS1_S1 + 1) -
                p_over_q * *(b + 369 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 225 * OS1_S1 + 1) +
                one_over_two_q * *(b + 291 * OS1_S1 + 0);
            *(b + 291 * OS1_S1 + 5) = prefactor_y * *(b + 291 * OS1_S1 + 1) -
                                      p_over_q * *(b + 372 * OS1_S1 + 1);
            *(b + 291 * OS1_S1 + 6) =
                prefactor_z * *(b + 291 * OS1_S1 + 1) -
                p_over_q * *(b + 373 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 1);
            *(b + 291 * OS1_S1 + 7) = prefactor_y * *(b + 291 * OS1_S1 + 2) -
                                      p_over_q * *(b + 372 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 291 * OS1_S1 + 0);
            *(b + 291 * OS1_S1 + 8) = prefactor_y * *(b + 291 * OS1_S1 + 3) -
                                      p_over_q * *(b + 372 * OS1_S1 + 3);
            *(b + 291 * OS1_S1 + 9) =
                prefactor_z * *(b + 291 * OS1_S1 + 3) -
                p_over_q * *(b + 373 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 3) +
                one_over_two_q * *(b + 291 * OS1_S1 + 0);
            *(b + 292 * OS1_S1 + 4) =
                prefactor_x * *(b + 292 * OS1_S1 + 1) -
                p_over_q * *(b + 370 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 226 * OS1_S1 + 1) +
                one_over_two_q * *(b + 292 * OS1_S1 + 0);
            *(b + 292 * OS1_S1 + 5) =
                prefactor_y * *(b + 292 * OS1_S1 + 1) -
                p_over_q * *(b + 374 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 1);
            *(b + 292 * OS1_S1 + 6) = prefactor_z * *(b + 292 * OS1_S1 + 1) -
                                      p_over_q * *(b + 375 * OS1_S1 + 1);
            *(b + 292 * OS1_S1 + 7) =
                prefactor_y * *(b + 292 * OS1_S1 + 2) -
                p_over_q * *(b + 374 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 2) +
                one_over_two_q * *(b + 292 * OS1_S1 + 0);
            *(b + 292 * OS1_S1 + 8) = prefactor_z * *(b + 292 * OS1_S1 + 2) -
                                      p_over_q * *(b + 375 * OS1_S1 + 2);
            *(b + 292 * OS1_S1 + 9) = prefactor_z * *(b + 292 * OS1_S1 + 3) -
                                      p_over_q * *(b + 375 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 292 * OS1_S1 + 0);
            *(b + 293 * OS1_S1 + 4) =
                prefactor_x * *(b + 293 * OS1_S1 + 1) -
                p_over_q * *(b + 371 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 227 * OS1_S1 + 1) +
                one_over_two_q * *(b + 293 * OS1_S1 + 0);
            *(b + 293 * OS1_S1 + 5) =
                prefactor_y * *(b + 293 * OS1_S1 + 1) -
                p_over_q * *(b + 375 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 1);
            *(b + 293 * OS1_S1 + 6) = prefactor_z * *(b + 293 * OS1_S1 + 1) -
                                      p_over_q * *(b + 376 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 223 * OS1_S1 + 1);
            *(b + 293 * OS1_S1 + 7) =
                prefactor_y * *(b + 293 * OS1_S1 + 2) -
                p_over_q * *(b + 375 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 2) +
                one_over_two_q * *(b + 293 * OS1_S1 + 0);
            *(b + 293 * OS1_S1 + 8) = prefactor_z * *(b + 293 * OS1_S1 + 2) -
                                      p_over_q * *(b + 376 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 223 * OS1_S1 + 2);
            *(b + 293 * OS1_S1 + 9) = prefactor_z * *(b + 293 * OS1_S1 + 3) -
                                      p_over_q * *(b + 376 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 223 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 293 * OS1_S1 + 0);
            *(b + 294 * OS1_S1 + 4) =
                prefactor_x * *(b + 294 * OS1_S1 + 1) -
                p_over_q * *(b + 372 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 228 * OS1_S1 + 1) +
                one_over_two_q * *(b + 294 * OS1_S1 + 0);
            *(b + 294 * OS1_S1 + 5) = prefactor_y * *(b + 294 * OS1_S1 + 1) -
                                      p_over_q * *(b + 376 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 225 * OS1_S1 + 1);
            *(b + 294 * OS1_S1 + 6) =
                prefactor_z * *(b + 294 * OS1_S1 + 1) -
                p_over_q * *(b + 377 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 1);
            *(b + 294 * OS1_S1 + 7) = prefactor_y * *(b + 294 * OS1_S1 + 2) -
                                      p_over_q * *(b + 376 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 225 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 294 * OS1_S1 + 0);
            *(b + 294 * OS1_S1 + 8) = prefactor_y * *(b + 294 * OS1_S1 + 3) -
                                      p_over_q * *(b + 376 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 225 * OS1_S1 + 3);
            *(b + 294 * OS1_S1 + 9) =
                prefactor_z * *(b + 294 * OS1_S1 + 3) -
                p_over_q * *(b + 377 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 3) +
                one_over_two_q * *(b + 294 * OS1_S1 + 0);
            *(b + 295 * OS1_S1 + 4) =
                prefactor_x * *(b + 295 * OS1_S1 + 1) -
                p_over_q * *(b + 373 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 229 * OS1_S1 + 1) +
                one_over_two_q * *(b + 295 * OS1_S1 + 0);
            *(b + 295 * OS1_S1 + 5) = prefactor_y * *(b + 295 * OS1_S1 + 1) -
                                      p_over_q * *(b + 377 * OS1_S1 + 1);
            *(b + 295 * OS1_S1 + 6) =
                prefactor_z * *(b + 295 * OS1_S1 + 1) -
                p_over_q * *(b + 378 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 1);
            *(b + 295 * OS1_S1 + 7) = prefactor_y * *(b + 295 * OS1_S1 + 2) -
                                      p_over_q * *(b + 377 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 295 * OS1_S1 + 0);
            *(b + 295 * OS1_S1 + 8) = prefactor_y * *(b + 295 * OS1_S1 + 3) -
                                      p_over_q * *(b + 377 * OS1_S1 + 3);
            *(b + 295 * OS1_S1 + 9) =
                prefactor_z * *(b + 295 * OS1_S1 + 3) -
                p_over_q * *(b + 378 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 3) +
                one_over_two_q * *(b + 295 * OS1_S1 + 0);
            *(b + 296 * OS1_S1 + 4) =
                prefactor_x * *(b + 296 * OS1_S1 + 1) -
                p_over_q * *(b + 374 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 230 * OS1_S1 + 1) +
                one_over_two_q * *(b + 296 * OS1_S1 + 0);
            *(b + 296 * OS1_S1 + 5) =
                prefactor_y * *(b + 296 * OS1_S1 + 1) -
                p_over_q * *(b + 379 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 1);
            *(b + 296 * OS1_S1 + 6) = prefactor_z * *(b + 296 * OS1_S1 + 1) -
                                      p_over_q * *(b + 380 * OS1_S1 + 1);
            *(b + 296 * OS1_S1 + 7) =
                prefactor_y * *(b + 296 * OS1_S1 + 2) -
                p_over_q * *(b + 379 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 2) +
                one_over_two_q * *(b + 296 * OS1_S1 + 0);
            *(b + 296 * OS1_S1 + 8) = prefactor_z * *(b + 296 * OS1_S1 + 2) -
                                      p_over_q * *(b + 380 * OS1_S1 + 2);
            *(b + 296 * OS1_S1 + 9) = prefactor_z * *(b + 296 * OS1_S1 + 3) -
                                      p_over_q * *(b + 380 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 296 * OS1_S1 + 0);
            *(b + 297 * OS1_S1 + 4) =
                prefactor_x * *(b + 297 * OS1_S1 + 1) -
                p_over_q * *(b + 375 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 231 * OS1_S1 + 1) +
                one_over_two_q * *(b + 297 * OS1_S1 + 0);
            *(b + 297 * OS1_S1 + 5) =
                prefactor_y * *(b + 297 * OS1_S1 + 1) -
                p_over_q * *(b + 380 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 1);
            *(b + 297 * OS1_S1 + 6) = prefactor_z * *(b + 297 * OS1_S1 + 1) -
                                      p_over_q * *(b + 381 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 226 * OS1_S1 + 1);
            *(b + 297 * OS1_S1 + 7) =
                prefactor_y * *(b + 297 * OS1_S1 + 2) -
                p_over_q * *(b + 380 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 2) +
                one_over_two_q * *(b + 297 * OS1_S1 + 0);
            *(b + 297 * OS1_S1 + 8) = prefactor_z * *(b + 297 * OS1_S1 + 2) -
                                      p_over_q * *(b + 381 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 226 * OS1_S1 + 2);
            *(b + 297 * OS1_S1 + 9) = prefactor_z * *(b + 297 * OS1_S1 + 3) -
                                      p_over_q * *(b + 381 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 226 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 297 * OS1_S1 + 0);
            *(b + 298 * OS1_S1 + 4) =
                prefactor_x * *(b + 298 * OS1_S1 + 1) -
                p_over_q * *(b + 376 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 232 * OS1_S1 + 1) +
                one_over_two_q * *(b + 298 * OS1_S1 + 0);
            *(b + 298 * OS1_S1 + 5) =
                prefactor_y * *(b + 298 * OS1_S1 + 1) -
                p_over_q * *(b + 381 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 1);
            *(b + 298 * OS1_S1 + 6) =
                prefactor_z * *(b + 298 * OS1_S1 + 1) -
                p_over_q * *(b + 382 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 1);
            *(b + 298 * OS1_S1 + 7) =
                prefactor_y * *(b + 298 * OS1_S1 + 2) -
                p_over_q * *(b + 381 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 2) +
                one_over_two_q * *(b + 298 * OS1_S1 + 0);
            *(b + 298 * OS1_S1 + 8) =
                prefactor_z * *(b + 298 * OS1_S1 + 2) -
                p_over_q * *(b + 382 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 2);
            *(b + 298 * OS1_S1 + 9) =
                prefactor_z * *(b + 298 * OS1_S1 + 3) -
                p_over_q * *(b + 382 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 3) +
                one_over_two_q * *(b + 298 * OS1_S1 + 0);
            *(b + 299 * OS1_S1 + 4) =
                prefactor_x * *(b + 299 * OS1_S1 + 1) -
                p_over_q * *(b + 377 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 233 * OS1_S1 + 1) +
                one_over_two_q * *(b + 299 * OS1_S1 + 0);
            *(b + 299 * OS1_S1 + 5) = prefactor_y * *(b + 299 * OS1_S1 + 1) -
                                      p_over_q * *(b + 382 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 229 * OS1_S1 + 1);
            *(b + 299 * OS1_S1 + 6) =
                prefactor_z * *(b + 299 * OS1_S1 + 1) -
                p_over_q * *(b + 383 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 1);
            *(b + 299 * OS1_S1 + 7) = prefactor_y * *(b + 299 * OS1_S1 + 2) -
                                      p_over_q * *(b + 382 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 229 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 299 * OS1_S1 + 0);
            *(b + 299 * OS1_S1 + 8) = prefactor_y * *(b + 299 * OS1_S1 + 3) -
                                      p_over_q * *(b + 382 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 229 * OS1_S1 + 3);
            *(b + 299 * OS1_S1 + 9) =
                prefactor_z * *(b + 299 * OS1_S1 + 3) -
                p_over_q * *(b + 383 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 3) +
                one_over_two_q * *(b + 299 * OS1_S1 + 0);
            *(b + 300 * OS1_S1 + 4) =
                prefactor_x * *(b + 300 * OS1_S1 + 1) -
                p_over_q * *(b + 378 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 234 * OS1_S1 + 1) +
                one_over_two_q * *(b + 300 * OS1_S1 + 0);
            *(b + 300 * OS1_S1 + 5) = prefactor_y * *(b + 300 * OS1_S1 + 1) -
                                      p_over_q * *(b + 383 * OS1_S1 + 1);
            *(b + 300 * OS1_S1 + 6) =
                prefactor_z * *(b + 300 * OS1_S1 + 1) -
                p_over_q * *(b + 384 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 1);
            *(b + 300 * OS1_S1 + 7) = prefactor_y * *(b + 300 * OS1_S1 + 2) -
                                      p_over_q * *(b + 383 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 300 * OS1_S1 + 0);
            *(b + 300 * OS1_S1 + 8) = prefactor_y * *(b + 300 * OS1_S1 + 3) -
                                      p_over_q * *(b + 383 * OS1_S1 + 3);
            *(b + 300 * OS1_S1 + 9) =
                prefactor_z * *(b + 300 * OS1_S1 + 3) -
                p_over_q * *(b + 384 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 3) +
                one_over_two_q * *(b + 300 * OS1_S1 + 0);
            *(b + 301 * OS1_S1 + 4) =
                prefactor_x * *(b + 301 * OS1_S1 + 1) -
                p_over_q * *(b + 379 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 1) +
                one_over_two_q * *(b + 301 * OS1_S1 + 0);
            *(b + 301 * OS1_S1 + 5) =
                prefactor_y * *(b + 301 * OS1_S1 + 1) -
                p_over_q * *(b + 385 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 1);
            *(b + 301 * OS1_S1 + 6) = prefactor_z * *(b + 301 * OS1_S1 + 1) -
                                      p_over_q * *(b + 386 * OS1_S1 + 1);
            *(b + 301 * OS1_S1 + 7) =
                prefactor_y * *(b + 301 * OS1_S1 + 2) -
                p_over_q * *(b + 385 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 2) +
                one_over_two_q * *(b + 301 * OS1_S1 + 0);
            *(b + 301 * OS1_S1 + 8) = prefactor_z * *(b + 301 * OS1_S1 + 2) -
                                      p_over_q * *(b + 386 * OS1_S1 + 2);
            *(b + 301 * OS1_S1 + 9) = prefactor_z * *(b + 301 * OS1_S1 + 3) -
                                      p_over_q * *(b + 386 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 301 * OS1_S1 + 0);
            *(b + 302 * OS1_S1 + 4) =
                prefactor_x * *(b + 302 * OS1_S1 + 1) -
                p_over_q * *(b + 380 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 236 * OS1_S1 + 1) +
                one_over_two_q * *(b + 302 * OS1_S1 + 0);
            *(b + 302 * OS1_S1 + 5) =
                prefactor_y * *(b + 302 * OS1_S1 + 1) -
                p_over_q * *(b + 386 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 1);
            *(b + 302 * OS1_S1 + 6) = prefactor_z * *(b + 302 * OS1_S1 + 1) -
                                      p_over_q * *(b + 387 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 230 * OS1_S1 + 1);
            *(b + 302 * OS1_S1 + 7) =
                prefactor_y * *(b + 302 * OS1_S1 + 2) -
                p_over_q * *(b + 386 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 2) +
                one_over_two_q * *(b + 302 * OS1_S1 + 0);
            *(b + 302 * OS1_S1 + 8) = prefactor_z * *(b + 302 * OS1_S1 + 2) -
                                      p_over_q * *(b + 387 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 230 * OS1_S1 + 2);
            *(b + 302 * OS1_S1 + 9) = prefactor_z * *(b + 302 * OS1_S1 + 3) -
                                      p_over_q * *(b + 387 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 230 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 302 * OS1_S1 + 0);
            *(b + 303 * OS1_S1 + 4) =
                prefactor_x * *(b + 303 * OS1_S1 + 1) -
                p_over_q * *(b + 381 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 237 * OS1_S1 + 1) +
                one_over_two_q * *(b + 303 * OS1_S1 + 0);
            *(b + 303 * OS1_S1 + 5) =
                prefactor_y * *(b + 303 * OS1_S1 + 1) -
                p_over_q * *(b + 387 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 1);
            *(b + 303 * OS1_S1 + 6) =
                prefactor_z * *(b + 303 * OS1_S1 + 1) -
                p_over_q * *(b + 388 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 1);
            *(b + 303 * OS1_S1 + 7) =
                prefactor_y * *(b + 303 * OS1_S1 + 2) -
                p_over_q * *(b + 387 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 2) +
                one_over_two_q * *(b + 303 * OS1_S1 + 0);
            *(b + 303 * OS1_S1 + 8) =
                prefactor_z * *(b + 303 * OS1_S1 + 2) -
                p_over_q * *(b + 388 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 2);
            *(b + 303 * OS1_S1 + 9) =
                prefactor_z * *(b + 303 * OS1_S1 + 3) -
                p_over_q * *(b + 388 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 3) +
                one_over_two_q * *(b + 303 * OS1_S1 + 0);
            *(b + 304 * OS1_S1 + 4) =
                prefactor_x * *(b + 304 * OS1_S1 + 1) -
                p_over_q * *(b + 382 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 238 * OS1_S1 + 1) +
                one_over_two_q * *(b + 304 * OS1_S1 + 0);
            *(b + 304 * OS1_S1 + 5) =
                prefactor_y * *(b + 304 * OS1_S1 + 1) -
                p_over_q * *(b + 388 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 1);
            *(b + 304 * OS1_S1 + 6) =
                prefactor_z * *(b + 304 * OS1_S1 + 1) -
                p_over_q * *(b + 389 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 1);
            *(b + 304 * OS1_S1 + 7) =
                prefactor_y * *(b + 304 * OS1_S1 + 2) -
                p_over_q * *(b + 388 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 2) +
                one_over_two_q * *(b + 304 * OS1_S1 + 0);
            *(b + 304 * OS1_S1 + 8) =
                prefactor_y * *(b + 304 * OS1_S1 + 3) -
                p_over_q * *(b + 388 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 3);
            *(b + 304 * OS1_S1 + 9) =
                prefactor_z * *(b + 304 * OS1_S1 + 3) -
                p_over_q * *(b + 389 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 3) +
                one_over_two_q * *(b + 304 * OS1_S1 + 0);
            *(b + 305 * OS1_S1 + 4) =
                prefactor_x * *(b + 305 * OS1_S1 + 1) -
                p_over_q * *(b + 383 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 239 * OS1_S1 + 1) +
                one_over_two_q * *(b + 305 * OS1_S1 + 0);
            *(b + 305 * OS1_S1 + 5) = prefactor_y * *(b + 305 * OS1_S1 + 1) -
                                      p_over_q * *(b + 389 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 234 * OS1_S1 + 1);
            *(b + 305 * OS1_S1 + 6) =
                prefactor_z * *(b + 305 * OS1_S1 + 1) -
                p_over_q * *(b + 390 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 1);
            *(b + 305 * OS1_S1 + 7) = prefactor_y * *(b + 305 * OS1_S1 + 2) -
                                      p_over_q * *(b + 389 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 234 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 305 * OS1_S1 + 0);
            *(b + 305 * OS1_S1 + 8) = prefactor_y * *(b + 305 * OS1_S1 + 3) -
                                      p_over_q * *(b + 389 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 234 * OS1_S1 + 3);
            *(b + 305 * OS1_S1 + 9) =
                prefactor_z * *(b + 305 * OS1_S1 + 3) -
                p_over_q * *(b + 390 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 3) +
                one_over_two_q * *(b + 305 * OS1_S1 + 0);
            *(b + 306 * OS1_S1 + 4) =
                prefactor_x * *(b + 306 * OS1_S1 + 1) -
                p_over_q * *(b + 384 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 1) +
                one_over_two_q * *(b + 306 * OS1_S1 + 0);
            *(b + 306 * OS1_S1 + 5) = prefactor_y * *(b + 306 * OS1_S1 + 1) -
                                      p_over_q * *(b + 390 * OS1_S1 + 1);
            *(b + 306 * OS1_S1 + 6) =
                prefactor_z * *(b + 306 * OS1_S1 + 1) -
                p_over_q * *(b + 391 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 1);
            *(b + 306 * OS1_S1 + 7) = prefactor_y * *(b + 306 * OS1_S1 + 2) -
                                      p_over_q * *(b + 390 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 306 * OS1_S1 + 0);
            *(b + 306 * OS1_S1 + 8) = prefactor_y * *(b + 306 * OS1_S1 + 3) -
                                      p_over_q * *(b + 390 * OS1_S1 + 3);
            *(b + 306 * OS1_S1 + 9) =
                prefactor_z * *(b + 306 * OS1_S1 + 3) -
                p_over_q * *(b + 391 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 3) +
                one_over_two_q * *(b + 306 * OS1_S1 + 0);
            *(b + 307 * OS1_S1 + 4) =
                prefactor_x * *(b + 307 * OS1_S1 + 1) -
                p_over_q * *(b + 385 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 1) +
                one_over_two_q * *(b + 307 * OS1_S1 + 0);
            *(b + 307 * OS1_S1 + 5) =
                prefactor_x * *(b + 307 * OS1_S1 + 2) -
                p_over_q * *(b + 385 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 2);
            *(b + 307 * OS1_S1 + 6) = prefactor_z * *(b + 307 * OS1_S1 + 1) -
                                      p_over_q * *(b + 393 * OS1_S1 + 1);
            *(b + 307 * OS1_S1 + 7) =
                prefactor_y * *(b + 307 * OS1_S1 + 2) -
                p_over_q * *(b + 392 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 2) +
                one_over_two_q * *(b + 307 * OS1_S1 + 0);
            *(b + 307 * OS1_S1 + 8) = prefactor_z * *(b + 307 * OS1_S1 + 2) -
                                      p_over_q * *(b + 393 * OS1_S1 + 2);
            *(b + 307 * OS1_S1 + 9) = prefactor_z * *(b + 307 * OS1_S1 + 3) -
                                      p_over_q * *(b + 393 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 307 * OS1_S1 + 0);
            *(b + 308 * OS1_S1 + 4) =
                prefactor_x * *(b + 308 * OS1_S1 + 1) -
                p_over_q * *(b + 386 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 1) +
                one_over_two_q * *(b + 308 * OS1_S1 + 0);
            *(b + 308 * OS1_S1 + 5) =
                prefactor_y * *(b + 308 * OS1_S1 + 1) -
                p_over_q * *(b + 393 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 1);
            *(b + 308 * OS1_S1 + 6) = prefactor_z * *(b + 308 * OS1_S1 + 1) -
                                      p_over_q * *(b + 394 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 235 * OS1_S1 + 1);
            *(b + 308 * OS1_S1 + 7) =
                prefactor_y * *(b + 308 * OS1_S1 + 2) -
                p_over_q * *(b + 393 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 2) +
                one_over_two_q * *(b + 308 * OS1_S1 + 0);
            *(b + 308 * OS1_S1 + 8) = prefactor_z * *(b + 308 * OS1_S1 + 2) -
                                      p_over_q * *(b + 394 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 235 * OS1_S1 + 2);
            *(b + 308 * OS1_S1 + 9) = prefactor_z * *(b + 308 * OS1_S1 + 3) -
                                      p_over_q * *(b + 394 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 235 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 308 * OS1_S1 + 0);
            *(b + 309 * OS1_S1 + 4) =
                prefactor_x * *(b + 309 * OS1_S1 + 1) -
                p_over_q * *(b + 387 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 1) +
                one_over_two_q * *(b + 309 * OS1_S1 + 0);
            *(b + 309 * OS1_S1 + 5) =
                prefactor_y * *(b + 309 * OS1_S1 + 1) -
                p_over_q * *(b + 394 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 1);
            *(b + 309 * OS1_S1 + 6) =
                prefactor_z * *(b + 309 * OS1_S1 + 1) -
                p_over_q * *(b + 395 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 1);
            *(b + 309 * OS1_S1 + 7) =
                prefactor_y * *(b + 309 * OS1_S1 + 2) -
                p_over_q * *(b + 394 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 2) +
                one_over_two_q * *(b + 309 * OS1_S1 + 0);
            *(b + 309 * OS1_S1 + 8) =
                prefactor_z * *(b + 309 * OS1_S1 + 2) -
                p_over_q * *(b + 395 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 2);
            *(b + 309 * OS1_S1 + 9) =
                prefactor_z * *(b + 309 * OS1_S1 + 3) -
                p_over_q * *(b + 395 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 3) +
                one_over_two_q * *(b + 309 * OS1_S1 + 0);
            *(b + 310 * OS1_S1 + 4) =
                prefactor_x * *(b + 310 * OS1_S1 + 1) -
                p_over_q * *(b + 388 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 1) +
                one_over_two_q * *(b + 310 * OS1_S1 + 0);
            *(b + 310 * OS1_S1 + 5) =
                prefactor_y * *(b + 310 * OS1_S1 + 1) -
                p_over_q * *(b + 395 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 1);
            *(b + 310 * OS1_S1 + 6) =
                prefactor_z * *(b + 310 * OS1_S1 + 1) -
                p_over_q * *(b + 396 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 1);
            *(b + 310 * OS1_S1 + 7) =
                prefactor_y * *(b + 310 * OS1_S1 + 2) -
                p_over_q * *(b + 395 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 2) +
                one_over_two_q * *(b + 310 * OS1_S1 + 0);
            *(b + 310 * OS1_S1 + 8) =
                prefactor_z * *(b + 310 * OS1_S1 + 2) -
                p_over_q * *(b + 396 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 2);
            *(b + 310 * OS1_S1 + 9) =
                prefactor_z * *(b + 310 * OS1_S1 + 3) -
                p_over_q * *(b + 396 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 3) +
                one_over_two_q * *(b + 310 * OS1_S1 + 0);
            *(b + 311 * OS1_S1 + 4) =
                prefactor_x * *(b + 311 * OS1_S1 + 1) -
                p_over_q * *(b + 389 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 1) +
                one_over_two_q * *(b + 311 * OS1_S1 + 0);
            *(b + 311 * OS1_S1 + 5) =
                prefactor_y * *(b + 311 * OS1_S1 + 1) -
                p_over_q * *(b + 396 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 1);
            *(b + 311 * OS1_S1 + 6) =
                prefactor_z * *(b + 311 * OS1_S1 + 1) -
                p_over_q * *(b + 397 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 1);
            *(b + 311 * OS1_S1 + 7) =
                prefactor_y * *(b + 311 * OS1_S1 + 2) -
                p_over_q * *(b + 396 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 2) +
                one_over_two_q * *(b + 311 * OS1_S1 + 0);
            *(b + 311 * OS1_S1 + 8) =
                prefactor_y * *(b + 311 * OS1_S1 + 3) -
                p_over_q * *(b + 396 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 3);
            *(b + 311 * OS1_S1 + 9) =
                prefactor_z * *(b + 311 * OS1_S1 + 3) -
                p_over_q * *(b + 397 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 3) +
                one_over_two_q * *(b + 311 * OS1_S1 + 0);
            *(b + 312 * OS1_S1 + 4) =
                prefactor_x * *(b + 312 * OS1_S1 + 1) -
                p_over_q * *(b + 390 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 1) +
                one_over_two_q * *(b + 312 * OS1_S1 + 0);
            *(b + 312 * OS1_S1 + 5) = prefactor_y * *(b + 312 * OS1_S1 + 1) -
                                      p_over_q * *(b + 397 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 240 * OS1_S1 + 1);
            *(b + 312 * OS1_S1 + 6) =
                prefactor_z * *(b + 312 * OS1_S1 + 1) -
                p_over_q * *(b + 398 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 1);
            *(b + 312 * OS1_S1 + 7) = prefactor_y * *(b + 312 * OS1_S1 + 2) -
                                      p_over_q * *(b + 397 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 240 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 312 * OS1_S1 + 0);
            *(b + 312 * OS1_S1 + 8) = prefactor_y * *(b + 312 * OS1_S1 + 3) -
                                      p_over_q * *(b + 397 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 240 * OS1_S1 + 3);
            *(b + 312 * OS1_S1 + 9) =
                prefactor_z * *(b + 312 * OS1_S1 + 3) -
                p_over_q * *(b + 398 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 3) +
                one_over_two_q * *(b + 312 * OS1_S1 + 0);
            *(b + 313 * OS1_S1 + 4) =
                prefactor_x * *(b + 313 * OS1_S1 + 1) -
                p_over_q * *(b + 391 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 1) +
                one_over_two_q * *(b + 313 * OS1_S1 + 0);
            *(b + 313 * OS1_S1 + 5) = prefactor_y * *(b + 313 * OS1_S1 + 1) -
                                      p_over_q * *(b + 398 * OS1_S1 + 1);
            *(b + 313 * OS1_S1 + 6) =
                prefactor_x * *(b + 313 * OS1_S1 + 3) -
                p_over_q * *(b + 391 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 3);
            *(b + 313 * OS1_S1 + 7) = prefactor_y * *(b + 313 * OS1_S1 + 2) -
                                      p_over_q * *(b + 398 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 313 * OS1_S1 + 0);
            *(b + 313 * OS1_S1 + 8) = prefactor_y * *(b + 313 * OS1_S1 + 3) -
                                      p_over_q * *(b + 398 * OS1_S1 + 3);
            *(b + 313 * OS1_S1 + 9) =
                prefactor_z * *(b + 313 * OS1_S1 + 3) -
                p_over_q * *(b + 399 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 3) +
                one_over_two_q * *(b + 313 * OS1_S1 + 0);
            *(b + 314 * OS1_S1 + 4) =
                prefactor_x * *(b + 314 * OS1_S1 + 1) -
                p_over_q * *(b + 392 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 1) +
                one_over_two_q * *(b + 314 * OS1_S1 + 0);
            *(b + 314 * OS1_S1 + 5) =
                prefactor_x * *(b + 314 * OS1_S1 + 2) -
                p_over_q * *(b + 392 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 2);
            *(b + 314 * OS1_S1 + 6) = prefactor_z * *(b + 314 * OS1_S1 + 1) -
                                      p_over_q * *(b + 401 * OS1_S1 + 1);
            *(b + 314 * OS1_S1 + 7) =
                prefactor_y * *(b + 314 * OS1_S1 + 2) -
                p_over_q * *(b + 400 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 241 * OS1_S1 + 2) +
                one_over_two_q * *(b + 314 * OS1_S1 + 0);
            *(b + 314 * OS1_S1 + 8) = prefactor_z * *(b + 314 * OS1_S1 + 2) -
                                      p_over_q * *(b + 401 * OS1_S1 + 2);
            *(b + 314 * OS1_S1 + 9) = prefactor_z * *(b + 314 * OS1_S1 + 3) -
                                      p_over_q * *(b + 401 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 314 * OS1_S1 + 0);
            *(b + 315 * OS1_S1 + 4) =
                prefactor_x * *(b + 315 * OS1_S1 + 1) -
                p_over_q * *(b + 393 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 1) +
                one_over_two_q * *(b + 315 * OS1_S1 + 0);
            *(b + 315 * OS1_S1 + 5) =
                prefactor_x * *(b + 315 * OS1_S1 + 2) -
                p_over_q * *(b + 393 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 2);
            *(b + 315 * OS1_S1 + 6) = prefactor_z * *(b + 315 * OS1_S1 + 1) -
                                      p_over_q * *(b + 402 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 241 * OS1_S1 + 1);
            *(b + 315 * OS1_S1 + 7) =
                prefactor_y * *(b + 315 * OS1_S1 + 2) -
                p_over_q * *(b + 401 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 242 * OS1_S1 + 2) +
                one_over_two_q * *(b + 315 * OS1_S1 + 0);
            *(b + 315 * OS1_S1 + 8) = prefactor_z * *(b + 315 * OS1_S1 + 2) -
                                      p_over_q * *(b + 402 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 241 * OS1_S1 + 2);
            *(b + 315 * OS1_S1 + 9) = prefactor_z * *(b + 315 * OS1_S1 + 3) -
                                      p_over_q * *(b + 402 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 241 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 315 * OS1_S1 + 0);
            *(b + 316 * OS1_S1 + 4) =
                prefactor_x * *(b + 316 * OS1_S1 + 1) -
                p_over_q * *(b + 394 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 1) +
                one_over_two_q * *(b + 316 * OS1_S1 + 0);
            *(b + 316 * OS1_S1 + 5) =
                prefactor_x * *(b + 316 * OS1_S1 + 2) -
                p_over_q * *(b + 394 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 2);
            *(b + 316 * OS1_S1 + 6) =
                prefactor_z * *(b + 316 * OS1_S1 + 1) -
                p_over_q * *(b + 403 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 1);
            *(b + 316 * OS1_S1 + 7) =
                prefactor_y * *(b + 316 * OS1_S1 + 2) -
                p_over_q * *(b + 402 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 2) +
                one_over_two_q * *(b + 316 * OS1_S1 + 0);
            *(b + 316 * OS1_S1 + 8) =
                prefactor_z * *(b + 316 * OS1_S1 + 2) -
                p_over_q * *(b + 403 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 2);
            *(b + 316 * OS1_S1 + 9) =
                prefactor_z * *(b + 316 * OS1_S1 + 3) -
                p_over_q * *(b + 403 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 3) +
                one_over_two_q * *(b + 316 * OS1_S1 + 0);
            *(b + 317 * OS1_S1 + 4) =
                prefactor_x * *(b + 317 * OS1_S1 + 1) -
                p_over_q * *(b + 395 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 1) +
                one_over_two_q * *(b + 317 * OS1_S1 + 0);
            *(b + 317 * OS1_S1 + 5) =
                prefactor_y * *(b + 317 * OS1_S1 + 1) -
                p_over_q * *(b + 403 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 1);
            *(b + 317 * OS1_S1 + 6) =
                prefactor_z * *(b + 317 * OS1_S1 + 1) -
                p_over_q * *(b + 404 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 1);
            *(b + 317 * OS1_S1 + 7) =
                prefactor_y * *(b + 317 * OS1_S1 + 2) -
                p_over_q * *(b + 403 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 2) +
                one_over_two_q * *(b + 317 * OS1_S1 + 0);
            *(b + 317 * OS1_S1 + 8) =
                prefactor_z * *(b + 317 * OS1_S1 + 2) -
                p_over_q * *(b + 404 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 2);
            *(b + 317 * OS1_S1 + 9) =
                prefactor_z * *(b + 317 * OS1_S1 + 3) -
                p_over_q * *(b + 404 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 3) +
                one_over_two_q * *(b + 317 * OS1_S1 + 0);
            *(b + 318 * OS1_S1 + 4) =
                prefactor_x * *(b + 318 * OS1_S1 + 1) -
                p_over_q * *(b + 396 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 1) +
                one_over_two_q * *(b + 318 * OS1_S1 + 0);
            *(b + 318 * OS1_S1 + 5) =
                prefactor_y * *(b + 318 * OS1_S1 + 1) -
                p_over_q * *(b + 404 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 1);
            *(b + 318 * OS1_S1 + 6) =
                prefactor_z * *(b + 318 * OS1_S1 + 1) -
                p_over_q * *(b + 405 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 1);
            *(b + 318 * OS1_S1 + 7) =
                prefactor_y * *(b + 318 * OS1_S1 + 2) -
                p_over_q * *(b + 404 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 2) +
                one_over_two_q * *(b + 318 * OS1_S1 + 0);
            *(b + 318 * OS1_S1 + 8) =
                prefactor_y * *(b + 318 * OS1_S1 + 3) -
                p_over_q * *(b + 404 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 3);
            *(b + 318 * OS1_S1 + 9) =
                prefactor_z * *(b + 318 * OS1_S1 + 3) -
                p_over_q * *(b + 405 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 3) +
                one_over_two_q * *(b + 318 * OS1_S1 + 0);
            *(b + 319 * OS1_S1 + 4) =
                prefactor_x * *(b + 319 * OS1_S1 + 1) -
                p_over_q * *(b + 397 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 1) +
                one_over_two_q * *(b + 319 * OS1_S1 + 0);
            *(b + 319 * OS1_S1 + 5) =
                prefactor_y * *(b + 319 * OS1_S1 + 1) -
                p_over_q * *(b + 405 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 1);
            *(b + 319 * OS1_S1 + 6) =
                prefactor_x * *(b + 319 * OS1_S1 + 3) -
                p_over_q * *(b + 397 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 3);
            *(b + 319 * OS1_S1 + 7) =
                prefactor_y * *(b + 319 * OS1_S1 + 2) -
                p_over_q * *(b + 405 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 2) +
                one_over_two_q * *(b + 319 * OS1_S1 + 0);
            *(b + 319 * OS1_S1 + 8) =
                prefactor_y * *(b + 319 * OS1_S1 + 3) -
                p_over_q * *(b + 405 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 3);
            *(b + 319 * OS1_S1 + 9) =
                prefactor_z * *(b + 319 * OS1_S1 + 3) -
                p_over_q * *(b + 406 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 3) +
                one_over_two_q * *(b + 319 * OS1_S1 + 0);
            *(b + 320 * OS1_S1 + 4) =
                prefactor_x * *(b + 320 * OS1_S1 + 1) -
                p_over_q * *(b + 398 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 1) +
                one_over_two_q * *(b + 320 * OS1_S1 + 0);
            *(b + 320 * OS1_S1 + 5) = prefactor_y * *(b + 320 * OS1_S1 + 1) -
                                      p_over_q * *(b + 406 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 247 * OS1_S1 + 1);
            *(b + 320 * OS1_S1 + 6) =
                prefactor_x * *(b + 320 * OS1_S1 + 3) -
                p_over_q * *(b + 398 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 3);
            *(b + 320 * OS1_S1 + 7) = prefactor_y * *(b + 320 * OS1_S1 + 2) -
                                      p_over_q * *(b + 406 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 247 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 320 * OS1_S1 + 0);
            *(b + 320 * OS1_S1 + 8) = prefactor_y * *(b + 320 * OS1_S1 + 3) -
                                      p_over_q * *(b + 406 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 247 * OS1_S1 + 3);
            *(b + 320 * OS1_S1 + 9) =
                prefactor_z * *(b + 320 * OS1_S1 + 3) -
                p_over_q * *(b + 407 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 246 * OS1_S1 + 3) +
                one_over_two_q * *(b + 320 * OS1_S1 + 0);
            *(b + 321 * OS1_S1 + 4) =
                prefactor_x * *(b + 321 * OS1_S1 + 1) -
                p_over_q * *(b + 399 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 1) +
                one_over_two_q * *(b + 321 * OS1_S1 + 0);
            *(b + 321 * OS1_S1 + 5) = prefactor_y * *(b + 321 * OS1_S1 + 1) -
                                      p_over_q * *(b + 407 * OS1_S1 + 1);
            *(b + 321 * OS1_S1 + 6) =
                prefactor_x * *(b + 321 * OS1_S1 + 3) -
                p_over_q * *(b + 399 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 3);
            *(b + 321 * OS1_S1 + 7) = prefactor_y * *(b + 321 * OS1_S1 + 2) -
                                      p_over_q * *(b + 407 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 321 * OS1_S1 + 0);
            *(b + 321 * OS1_S1 + 8) = prefactor_y * *(b + 321 * OS1_S1 + 3) -
                                      p_over_q * *(b + 407 * OS1_S1 + 3);
            *(b + 321 * OS1_S1 + 9) =
                prefactor_z * *(b + 321 * OS1_S1 + 3) -
                p_over_q * *(b + 408 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 247 * OS1_S1 + 3) +
                one_over_two_q * *(b + 321 * OS1_S1 + 0);
            *(b + 322 * OS1_S1 + 4) =
                prefactor_x * *(b + 322 * OS1_S1 + 1) -
                p_over_q * *(b + 400 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 1) +
                one_over_two_q * *(b + 322 * OS1_S1 + 0);
            *(b + 322 * OS1_S1 + 5) =
                prefactor_x * *(b + 322 * OS1_S1 + 2) -
                p_over_q * *(b + 400 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 2);
            *(b + 322 * OS1_S1 + 6) = prefactor_z * *(b + 322 * OS1_S1 + 1) -
                                      p_over_q * *(b + 410 * OS1_S1 + 1);
            *(b + 322 * OS1_S1 + 7) =
                prefactor_y * *(b + 322 * OS1_S1 + 2) -
                p_over_q * *(b + 409 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 248 * OS1_S1 + 2) +
                one_over_two_q * *(b + 322 * OS1_S1 + 0);
            *(b + 322 * OS1_S1 + 8) = prefactor_z * *(b + 322 * OS1_S1 + 2) -
                                      p_over_q * *(b + 410 * OS1_S1 + 2);
            *(b + 322 * OS1_S1 + 9) = prefactor_z * *(b + 322 * OS1_S1 + 3) -
                                      p_over_q * *(b + 410 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 322 * OS1_S1 + 0);
            *(b + 323 * OS1_S1 + 4) =
                prefactor_x * *(b + 323 * OS1_S1 + 1) -
                p_over_q * *(b + 401 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 1) +
                one_over_two_q * *(b + 323 * OS1_S1 + 0);
            *(b + 323 * OS1_S1 + 5) =
                prefactor_x * *(b + 323 * OS1_S1 + 2) -
                p_over_q * *(b + 401 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 2);
            *(b + 323 * OS1_S1 + 6) = prefactor_z * *(b + 323 * OS1_S1 + 1) -
                                      p_over_q * *(b + 411 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 248 * OS1_S1 + 1);
            *(b + 323 * OS1_S1 + 7) =
                prefactor_y * *(b + 323 * OS1_S1 + 2) -
                p_over_q * *(b + 410 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 249 * OS1_S1 + 2) +
                one_over_two_q * *(b + 323 * OS1_S1 + 0);
            *(b + 323 * OS1_S1 + 8) = prefactor_z * *(b + 323 * OS1_S1 + 2) -
                                      p_over_q * *(b + 411 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 248 * OS1_S1 + 2);
            *(b + 323 * OS1_S1 + 9) = prefactor_z * *(b + 323 * OS1_S1 + 3) -
                                      p_over_q * *(b + 411 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 248 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 323 * OS1_S1 + 0);
            *(b + 324 * OS1_S1 + 4) =
                prefactor_x * *(b + 324 * OS1_S1 + 1) -
                p_over_q * *(b + 402 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 1) +
                one_over_two_q * *(b + 324 * OS1_S1 + 0);
            *(b + 324 * OS1_S1 + 5) =
                prefactor_x * *(b + 324 * OS1_S1 + 2) -
                p_over_q * *(b + 402 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 2);
            *(b + 324 * OS1_S1 + 6) =
                prefactor_z * *(b + 324 * OS1_S1 + 1) -
                p_over_q * *(b + 412 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 1);
            *(b + 324 * OS1_S1 + 7) =
                prefactor_y * *(b + 324 * OS1_S1 + 2) -
                p_over_q * *(b + 411 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 250 * OS1_S1 + 2) +
                one_over_two_q * *(b + 324 * OS1_S1 + 0);
            *(b + 324 * OS1_S1 + 8) =
                prefactor_z * *(b + 324 * OS1_S1 + 2) -
                p_over_q * *(b + 412 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 2);
            *(b + 324 * OS1_S1 + 9) =
                prefactor_z * *(b + 324 * OS1_S1 + 3) -
                p_over_q * *(b + 412 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 3) +
                one_over_two_q * *(b + 324 * OS1_S1 + 0);
            *(b + 325 * OS1_S1 + 4) =
                prefactor_x * *(b + 325 * OS1_S1 + 1) -
                p_over_q * *(b + 403 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 1) +
                one_over_two_q * *(b + 325 * OS1_S1 + 0);
            *(b + 325 * OS1_S1 + 5) =
                prefactor_x * *(b + 325 * OS1_S1 + 2) -
                p_over_q * *(b + 403 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 2);
            *(b + 325 * OS1_S1 + 6) =
                prefactor_z * *(b + 325 * OS1_S1 + 1) -
                p_over_q * *(b + 413 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 1);
            *(b + 325 * OS1_S1 + 7) =
                prefactor_y * *(b + 325 * OS1_S1 + 2) -
                p_over_q * *(b + 412 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 2) +
                one_over_two_q * *(b + 325 * OS1_S1 + 0);
            *(b + 325 * OS1_S1 + 8) =
                prefactor_z * *(b + 325 * OS1_S1 + 2) -
                p_over_q * *(b + 413 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 2);
            *(b + 325 * OS1_S1 + 9) =
                prefactor_z * *(b + 325 * OS1_S1 + 3) -
                p_over_q * *(b + 413 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 3) +
                one_over_two_q * *(b + 325 * OS1_S1 + 0);
            *(b + 326 * OS1_S1 + 4) =
                prefactor_x * *(b + 326 * OS1_S1 + 1) -
                p_over_q * *(b + 404 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 1) +
                one_over_two_q * *(b + 326 * OS1_S1 + 0);
            *(b + 326 * OS1_S1 + 5) =
                prefactor_x * *(b + 326 * OS1_S1 + 2) -
                p_over_q * *(b + 404 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 2);
            *(b + 326 * OS1_S1 + 6) =
                prefactor_x * *(b + 326 * OS1_S1 + 3) -
                p_over_q * *(b + 404 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 3);
            *(b + 326 * OS1_S1 + 7) =
                prefactor_y * *(b + 326 * OS1_S1 + 2) -
                p_over_q * *(b + 413 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 2) +
                one_over_two_q * *(b + 326 * OS1_S1 + 0);
            *(b + 326 * OS1_S1 + 8) =
                prefactor_z * *(b + 326 * OS1_S1 + 2) -
                p_over_q * *(b + 414 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 2);
            *(b + 326 * OS1_S1 + 9) =
                prefactor_z * *(b + 326 * OS1_S1 + 3) -
                p_over_q * *(b + 414 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 3) +
                one_over_two_q * *(b + 326 * OS1_S1 + 0);
            *(b + 327 * OS1_S1 + 4) =
                prefactor_x * *(b + 327 * OS1_S1 + 1) -
                p_over_q * *(b + 405 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 1) +
                one_over_two_q * *(b + 327 * OS1_S1 + 0);
            *(b + 327 * OS1_S1 + 5) =
                prefactor_y * *(b + 327 * OS1_S1 + 1) -
                p_over_q * *(b + 414 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 1);
            *(b + 327 * OS1_S1 + 6) =
                prefactor_x * *(b + 327 * OS1_S1 + 3) -
                p_over_q * *(b + 405 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 3);
            *(b + 327 * OS1_S1 + 7) =
                prefactor_y * *(b + 327 * OS1_S1 + 2) -
                p_over_q * *(b + 414 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 2) +
                one_over_two_q * *(b + 327 * OS1_S1 + 0);
            *(b + 327 * OS1_S1 + 8) =
                prefactor_y * *(b + 327 * OS1_S1 + 3) -
                p_over_q * *(b + 414 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 3);
            *(b + 327 * OS1_S1 + 9) =
                prefactor_z * *(b + 327 * OS1_S1 + 3) -
                p_over_q * *(b + 415 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 3) +
                one_over_two_q * *(b + 327 * OS1_S1 + 0);
            *(b + 328 * OS1_S1 + 4) =
                prefactor_x * *(b + 328 * OS1_S1 + 1) -
                p_over_q * *(b + 406 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 1) +
                one_over_two_q * *(b + 328 * OS1_S1 + 0);
            *(b + 328 * OS1_S1 + 5) =
                prefactor_y * *(b + 328 * OS1_S1 + 1) -
                p_over_q * *(b + 415 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 1);
            *(b + 328 * OS1_S1 + 6) =
                prefactor_x * *(b + 328 * OS1_S1 + 3) -
                p_over_q * *(b + 406 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 3);
            *(b + 328 * OS1_S1 + 7) =
                prefactor_y * *(b + 328 * OS1_S1 + 2) -
                p_over_q * *(b + 415 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 2) +
                one_over_two_q * *(b + 328 * OS1_S1 + 0);
            *(b + 328 * OS1_S1 + 8) =
                prefactor_y * *(b + 328 * OS1_S1 + 3) -
                p_over_q * *(b + 415 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 3);
            *(b + 328 * OS1_S1 + 9) =
                prefactor_z * *(b + 328 * OS1_S1 + 3) -
                p_over_q * *(b + 416 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 253 * OS1_S1 + 3) +
                one_over_two_q * *(b + 328 * OS1_S1 + 0);
            *(b + 329 * OS1_S1 + 4) =
                prefactor_x * *(b + 329 * OS1_S1 + 1) -
                p_over_q * *(b + 407 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 1) +
                one_over_two_q * *(b + 329 * OS1_S1 + 0);
            *(b + 329 * OS1_S1 + 5) = prefactor_y * *(b + 329 * OS1_S1 + 1) -
                                      p_over_q * *(b + 416 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 255 * OS1_S1 + 1);
            *(b + 329 * OS1_S1 + 6) =
                prefactor_x * *(b + 329 * OS1_S1 + 3) -
                p_over_q * *(b + 407 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 3);
            *(b + 329 * OS1_S1 + 7) = prefactor_y * *(b + 329 * OS1_S1 + 2) -
                                      p_over_q * *(b + 416 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 255 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 329 * OS1_S1 + 0);
            *(b + 329 * OS1_S1 + 8) = prefactor_y * *(b + 329 * OS1_S1 + 3) -
                                      p_over_q * *(b + 416 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 255 * OS1_S1 + 3);
            *(b + 329 * OS1_S1 + 9) =
                prefactor_z * *(b + 329 * OS1_S1 + 3) -
                p_over_q * *(b + 417 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 254 * OS1_S1 + 3) +
                one_over_two_q * *(b + 329 * OS1_S1 + 0);
            *(b + 330 * OS1_S1 + 4) =
                prefactor_x * *(b + 330 * OS1_S1 + 1) -
                p_over_q * *(b + 408 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 1) +
                one_over_two_q * *(b + 330 * OS1_S1 + 0);
            *(b + 330 * OS1_S1 + 5) = prefactor_y * *(b + 330 * OS1_S1 + 1) -
                                      p_over_q * *(b + 417 * OS1_S1 + 1);
            *(b + 330 * OS1_S1 + 6) =
                prefactor_x * *(b + 330 * OS1_S1 + 3) -
                p_over_q * *(b + 408 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 3);
            *(b + 330 * OS1_S1 + 7) = prefactor_y * *(b + 330 * OS1_S1 + 2) -
                                      p_over_q * *(b + 417 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 330 * OS1_S1 + 0);
            *(b + 330 * OS1_S1 + 8) = prefactor_y * *(b + 330 * OS1_S1 + 3) -
                                      p_over_q * *(b + 417 * OS1_S1 + 3);
            *(b + 330 * OS1_S1 + 9) =
                prefactor_z * *(b + 330 * OS1_S1 + 3) -
                p_over_q * *(b + 418 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 255 * OS1_S1 + 3) +
                one_over_two_q * *(b + 330 * OS1_S1 + 0);
            *(b + 331 * OS1_S1 + 4) =
                prefactor_x * *(b + 331 * OS1_S1 + 1) -
                p_over_q * *(b + 409 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 1) +
                one_over_two_q * *(b + 331 * OS1_S1 + 0);
            *(b + 331 * OS1_S1 + 5) =
                prefactor_x * *(b + 331 * OS1_S1 + 2) -
                p_over_q * *(b + 409 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 2);
            *(b + 331 * OS1_S1 + 6) = prefactor_z * *(b + 331 * OS1_S1 + 1) -
                                      p_over_q * *(b + 420 * OS1_S1 + 1);
            *(b + 331 * OS1_S1 + 7) =
                prefactor_y * *(b + 331 * OS1_S1 + 2) -
                p_over_q * *(b + 419 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 256 * OS1_S1 + 2) +
                one_over_two_q * *(b + 331 * OS1_S1 + 0);
            *(b + 331 * OS1_S1 + 8) = prefactor_z * *(b + 331 * OS1_S1 + 2) -
                                      p_over_q * *(b + 420 * OS1_S1 + 2);
            *(b + 331 * OS1_S1 + 9) = prefactor_z * *(b + 331 * OS1_S1 + 3) -
                                      p_over_q * *(b + 420 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 331 * OS1_S1 + 0);
            *(b + 332 * OS1_S1 + 4) =
                prefactor_x * *(b + 332 * OS1_S1 + 1) -
                p_over_q * *(b + 410 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 1) +
                one_over_two_q * *(b + 332 * OS1_S1 + 0);
            *(b + 332 * OS1_S1 + 5) =
                prefactor_x * *(b + 332 * OS1_S1 + 2) -
                p_over_q * *(b + 410 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 2);
            *(b + 332 * OS1_S1 + 6) = prefactor_z * *(b + 332 * OS1_S1 + 1) -
                                      p_over_q * *(b + 421 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 256 * OS1_S1 + 1);
            *(b + 332 * OS1_S1 + 7) =
                prefactor_y * *(b + 332 * OS1_S1 + 2) -
                p_over_q * *(b + 420 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 257 * OS1_S1 + 2) +
                one_over_two_q * *(b + 332 * OS1_S1 + 0);
            *(b + 332 * OS1_S1 + 8) = prefactor_z * *(b + 332 * OS1_S1 + 2) -
                                      p_over_q * *(b + 421 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 256 * OS1_S1 + 2);
            *(b + 332 * OS1_S1 + 9) = prefactor_z * *(b + 332 * OS1_S1 + 3) -
                                      p_over_q * *(b + 421 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 256 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 332 * OS1_S1 + 0);
            *(b + 333 * OS1_S1 + 4) =
                prefactor_x * *(b + 333 * OS1_S1 + 1) -
                p_over_q * *(b + 411 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 1) +
                one_over_two_q * *(b + 333 * OS1_S1 + 0);
            *(b + 333 * OS1_S1 + 5) =
                prefactor_x * *(b + 333 * OS1_S1 + 2) -
                p_over_q * *(b + 411 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 2);
            *(b + 333 * OS1_S1 + 6) =
                prefactor_z * *(b + 333 * OS1_S1 + 1) -
                p_over_q * *(b + 422 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 1);
            *(b + 333 * OS1_S1 + 7) =
                prefactor_y * *(b + 333 * OS1_S1 + 2) -
                p_over_q * *(b + 421 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 258 * OS1_S1 + 2) +
                one_over_two_q * *(b + 333 * OS1_S1 + 0);
            *(b + 333 * OS1_S1 + 8) =
                prefactor_z * *(b + 333 * OS1_S1 + 2) -
                p_over_q * *(b + 422 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 2);
            *(b + 333 * OS1_S1 + 9) =
                prefactor_z * *(b + 333 * OS1_S1 + 3) -
                p_over_q * *(b + 422 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 3) +
                one_over_two_q * *(b + 333 * OS1_S1 + 0);
            *(b + 334 * OS1_S1 + 4) =
                prefactor_x * *(b + 334 * OS1_S1 + 1) -
                p_over_q * *(b + 412 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 1) +
                one_over_two_q * *(b + 334 * OS1_S1 + 0);
            *(b + 334 * OS1_S1 + 5) =
                prefactor_x * *(b + 334 * OS1_S1 + 2) -
                p_over_q * *(b + 412 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 2);
            *(b + 334 * OS1_S1 + 6) =
                prefactor_x * *(b + 334 * OS1_S1 + 3) -
                p_over_q * *(b + 412 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 3);
            *(b + 334 * OS1_S1 + 7) =
                prefactor_y * *(b + 334 * OS1_S1 + 2) -
                p_over_q * *(b + 422 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 259 * OS1_S1 + 2) +
                one_over_two_q * *(b + 334 * OS1_S1 + 0);
            *(b + 334 * OS1_S1 + 8) =
                prefactor_z * *(b + 334 * OS1_S1 + 2) -
                p_over_q * *(b + 423 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 2);
            *(b + 334 * OS1_S1 + 9) =
                prefactor_z * *(b + 334 * OS1_S1 + 3) -
                p_over_q * *(b + 423 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 3) +
                one_over_two_q * *(b + 334 * OS1_S1 + 0);
            *(b + 335 * OS1_S1 + 4) =
                prefactor_x * *(b + 335 * OS1_S1 + 1) -
                p_over_q * *(b + 413 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 1) +
                one_over_two_q * *(b + 335 * OS1_S1 + 0);
            *(b + 335 * OS1_S1 + 5) =
                prefactor_x * *(b + 335 * OS1_S1 + 2) -
                p_over_q * *(b + 413 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 2);
            *(b + 335 * OS1_S1 + 6) =
                prefactor_x * *(b + 335 * OS1_S1 + 3) -
                p_over_q * *(b + 413 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 3);
            *(b + 335 * OS1_S1 + 7) =
                prefactor_y * *(b + 335 * OS1_S1 + 2) -
                p_over_q * *(b + 423 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 2) +
                one_over_two_q * *(b + 335 * OS1_S1 + 0);
            *(b + 335 * OS1_S1 + 8) =
                prefactor_z * *(b + 335 * OS1_S1 + 2) -
                p_over_q * *(b + 424 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 2);
            *(b + 335 * OS1_S1 + 9) =
                prefactor_z * *(b + 335 * OS1_S1 + 3) -
                p_over_q * *(b + 424 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 3) +
                one_over_two_q * *(b + 335 * OS1_S1 + 0);
            *(b + 336 * OS1_S1 + 4) =
                prefactor_x * *(b + 336 * OS1_S1 + 1) -
                p_over_q * *(b + 414 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 1) +
                one_over_two_q * *(b + 336 * OS1_S1 + 0);
            *(b + 336 * OS1_S1 + 5) =
                prefactor_x * *(b + 336 * OS1_S1 + 2) -
                p_over_q * *(b + 414 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 2);
            *(b + 336 * OS1_S1 + 6) =
                prefactor_x * *(b + 336 * OS1_S1 + 3) -
                p_over_q * *(b + 414 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 3);
            *(b + 336 * OS1_S1 + 7) =
                prefactor_y * *(b + 336 * OS1_S1 + 2) -
                p_over_q * *(b + 424 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 2) +
                one_over_two_q * *(b + 336 * OS1_S1 + 0);
            *(b + 336 * OS1_S1 + 8) =
                prefactor_y * *(b + 336 * OS1_S1 + 3) -
                p_over_q * *(b + 424 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 3);
            *(b + 336 * OS1_S1 + 9) =
                prefactor_z * *(b + 336 * OS1_S1 + 3) -
                p_over_q * *(b + 425 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 3) +
                one_over_two_q * *(b + 336 * OS1_S1 + 0);
            *(b + 337 * OS1_S1 + 4) =
                prefactor_x * *(b + 337 * OS1_S1 + 1) -
                p_over_q * *(b + 415 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 1) +
                one_over_two_q * *(b + 337 * OS1_S1 + 0);
            *(b + 337 * OS1_S1 + 5) =
                prefactor_x * *(b + 337 * OS1_S1 + 2) -
                p_over_q * *(b + 415 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 2);
            *(b + 337 * OS1_S1 + 6) =
                prefactor_x * *(b + 337 * OS1_S1 + 3) -
                p_over_q * *(b + 415 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 3);
            *(b + 337 * OS1_S1 + 7) =
                prefactor_y * *(b + 337 * OS1_S1 + 2) -
                p_over_q * *(b + 425 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 2) +
                one_over_two_q * *(b + 337 * OS1_S1 + 0);
            *(b + 337 * OS1_S1 + 8) =
                prefactor_y * *(b + 337 * OS1_S1 + 3) -
                p_over_q * *(b + 425 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 3);
            *(b + 337 * OS1_S1 + 9) =
                prefactor_z * *(b + 337 * OS1_S1 + 3) -
                p_over_q * *(b + 426 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 261 * OS1_S1 + 3) +
                one_over_two_q * *(b + 337 * OS1_S1 + 0);
            *(b + 338 * OS1_S1 + 4) =
                prefactor_x * *(b + 338 * OS1_S1 + 1) -
                p_over_q * *(b + 416 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 1) +
                one_over_two_q * *(b + 338 * OS1_S1 + 0);
            *(b + 338 * OS1_S1 + 5) =
                prefactor_y * *(b + 338 * OS1_S1 + 1) -
                p_over_q * *(b + 426 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 1);
            *(b + 338 * OS1_S1 + 6) =
                prefactor_x * *(b + 338 * OS1_S1 + 3) -
                p_over_q * *(b + 416 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 3);
            *(b + 338 * OS1_S1 + 7) =
                prefactor_y * *(b + 338 * OS1_S1 + 2) -
                p_over_q * *(b + 426 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 2) +
                one_over_two_q * *(b + 338 * OS1_S1 + 0);
            *(b + 338 * OS1_S1 + 8) =
                prefactor_y * *(b + 338 * OS1_S1 + 3) -
                p_over_q * *(b + 426 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 3);
            *(b + 338 * OS1_S1 + 9) =
                prefactor_z * *(b + 338 * OS1_S1 + 3) -
                p_over_q * *(b + 427 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 262 * OS1_S1 + 3) +
                one_over_two_q * *(b + 338 * OS1_S1 + 0);
            *(b + 339 * OS1_S1 + 4) =
                prefactor_x * *(b + 339 * OS1_S1 + 1) -
                p_over_q * *(b + 417 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 1) +
                one_over_two_q * *(b + 339 * OS1_S1 + 0);
            *(b + 339 * OS1_S1 + 5) = prefactor_y * *(b + 339 * OS1_S1 + 1) -
                                      p_over_q * *(b + 427 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 264 * OS1_S1 + 1);
            *(b + 339 * OS1_S1 + 6) =
                prefactor_x * *(b + 339 * OS1_S1 + 3) -
                p_over_q * *(b + 417 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 3);
            *(b + 339 * OS1_S1 + 7) = prefactor_y * *(b + 339 * OS1_S1 + 2) -
                                      p_over_q * *(b + 427 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 264 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 339 * OS1_S1 + 0);
            *(b + 339 * OS1_S1 + 8) = prefactor_y * *(b + 339 * OS1_S1 + 3) -
                                      p_over_q * *(b + 427 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 264 * OS1_S1 + 3);
            *(b + 339 * OS1_S1 + 9) =
                prefactor_z * *(b + 339 * OS1_S1 + 3) -
                p_over_q * *(b + 428 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 263 * OS1_S1 + 3) +
                one_over_two_q * *(b + 339 * OS1_S1 + 0);
            *(b + 340 * OS1_S1 + 4) =
                prefactor_x * *(b + 340 * OS1_S1 + 1) -
                p_over_q * *(b + 418 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 1) +
                one_over_two_q * *(b + 340 * OS1_S1 + 0);
            *(b + 340 * OS1_S1 + 5) = prefactor_y * *(b + 340 * OS1_S1 + 1) -
                                      p_over_q * *(b + 428 * OS1_S1 + 1);
            *(b + 340 * OS1_S1 + 6) =
                prefactor_x * *(b + 340 * OS1_S1 + 3) -
                p_over_q * *(b + 418 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 3);
            *(b + 340 * OS1_S1 + 7) = prefactor_y * *(b + 340 * OS1_S1 + 2) -
                                      p_over_q * *(b + 428 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 340 * OS1_S1 + 0);
            *(b + 340 * OS1_S1 + 8) = prefactor_y * *(b + 340 * OS1_S1 + 3) -
                                      p_over_q * *(b + 428 * OS1_S1 + 3);
            *(b + 340 * OS1_S1 + 9) =
                prefactor_z * *(b + 340 * OS1_S1 + 3) -
                p_over_q * *(b + 429 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 264 * OS1_S1 + 3) +
                one_over_two_q * *(b + 340 * OS1_S1 + 0);
            *(b + 341 * OS1_S1 + 4) = prefactor_x * *(b + 341 * OS1_S1 + 1) -
                                      p_over_q * *(b + 419 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 275 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 341 * OS1_S1 + 0);
            *(b + 341 * OS1_S1 + 5) = prefactor_x * *(b + 341 * OS1_S1 + 2) -
                                      p_over_q * *(b + 419 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 275 * OS1_S1 + 2);
            *(b + 341 * OS1_S1 + 6) = prefactor_z * *(b + 341 * OS1_S1 + 1) -
                                      p_over_q * *(b + 431 * OS1_S1 + 1);
            *(b + 341 * OS1_S1 + 7) =
                prefactor_y * *(b + 341 * OS1_S1 + 2) -
                p_over_q * *(b + 430 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 265 * OS1_S1 + 2) +
                one_over_two_q * *(b + 341 * OS1_S1 + 0);
            *(b + 341 * OS1_S1 + 8) = prefactor_z * *(b + 341 * OS1_S1 + 2) -
                                      p_over_q * *(b + 431 * OS1_S1 + 2);
            *(b + 341 * OS1_S1 + 9) = prefactor_z * *(b + 341 * OS1_S1 + 3) -
                                      p_over_q * *(b + 431 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 341 * OS1_S1 + 0);
            *(b + 342 * OS1_S1 + 4) = prefactor_x * *(b + 342 * OS1_S1 + 1) -
                                      p_over_q * *(b + 420 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 276 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 342 * OS1_S1 + 0);
            *(b + 342 * OS1_S1 + 5) = prefactor_x * *(b + 342 * OS1_S1 + 2) -
                                      p_over_q * *(b + 420 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 276 * OS1_S1 + 2);
            *(b + 342 * OS1_S1 + 6) = prefactor_z * *(b + 342 * OS1_S1 + 1) -
                                      p_over_q * *(b + 432 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 265 * OS1_S1 + 1);
            *(b + 342 * OS1_S1 + 7) =
                prefactor_y * *(b + 342 * OS1_S1 + 2) -
                p_over_q * *(b + 431 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 266 * OS1_S1 + 2) +
                one_over_two_q * *(b + 342 * OS1_S1 + 0);
            *(b + 342 * OS1_S1 + 8) = prefactor_z * *(b + 342 * OS1_S1 + 2) -
                                      p_over_q * *(b + 432 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 265 * OS1_S1 + 2);
            *(b + 342 * OS1_S1 + 9) = prefactor_z * *(b + 342 * OS1_S1 + 3) -
                                      p_over_q * *(b + 432 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 265 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 342 * OS1_S1 + 0);
            *(b + 343 * OS1_S1 + 4) = prefactor_x * *(b + 343 * OS1_S1 + 1) -
                                      p_over_q * *(b + 421 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 277 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 343 * OS1_S1 + 0);
            *(b + 343 * OS1_S1 + 5) = prefactor_x * *(b + 343 * OS1_S1 + 2) -
                                      p_over_q * *(b + 421 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 277 * OS1_S1 + 2);
            *(b + 343 * OS1_S1 + 6) = prefactor_x * *(b + 343 * OS1_S1 + 3) -
                                      p_over_q * *(b + 421 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 277 * OS1_S1 + 3);
            *(b + 343 * OS1_S1 + 7) =
                prefactor_y * *(b + 343 * OS1_S1 + 2) -
                p_over_q * *(b + 432 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 267 * OS1_S1 + 2) +
                one_over_two_q * *(b + 343 * OS1_S1 + 0);
            *(b + 343 * OS1_S1 + 8) =
                prefactor_z * *(b + 343 * OS1_S1 + 2) -
                p_over_q * *(b + 433 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 2);
            *(b + 343 * OS1_S1 + 9) =
                prefactor_z * *(b + 343 * OS1_S1 + 3) -
                p_over_q * *(b + 433 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 3) +
                one_over_two_q * *(b + 343 * OS1_S1 + 0);
            *(b + 344 * OS1_S1 + 4) = prefactor_x * *(b + 344 * OS1_S1 + 1) -
                                      p_over_q * *(b + 422 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 278 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 344 * OS1_S1 + 0);
            *(b + 344 * OS1_S1 + 5) = prefactor_x * *(b + 344 * OS1_S1 + 2) -
                                      p_over_q * *(b + 422 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 278 * OS1_S1 + 2);
            *(b + 344 * OS1_S1 + 6) = prefactor_x * *(b + 344 * OS1_S1 + 3) -
                                      p_over_q * *(b + 422 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 278 * OS1_S1 + 3);
            *(b + 344 * OS1_S1 + 7) =
                prefactor_y * *(b + 344 * OS1_S1 + 2) -
                p_over_q * *(b + 433 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 268 * OS1_S1 + 2) +
                one_over_two_q * *(b + 344 * OS1_S1 + 0);
            *(b + 344 * OS1_S1 + 8) =
                prefactor_z * *(b + 344 * OS1_S1 + 2) -
                p_over_q * *(b + 434 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 2);
            *(b + 344 * OS1_S1 + 9) =
                prefactor_z * *(b + 344 * OS1_S1 + 3) -
                p_over_q * *(b + 434 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 3) +
                one_over_two_q * *(b + 344 * OS1_S1 + 0);
            *(b + 345 * OS1_S1 + 4) = prefactor_x * *(b + 345 * OS1_S1 + 1) -
                                      p_over_q * *(b + 423 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 279 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 345 * OS1_S1 + 0);
            *(b + 345 * OS1_S1 + 5) = prefactor_x * *(b + 345 * OS1_S1 + 2) -
                                      p_over_q * *(b + 423 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 279 * OS1_S1 + 2);
            *(b + 345 * OS1_S1 + 6) = prefactor_x * *(b + 345 * OS1_S1 + 3) -
                                      p_over_q * *(b + 423 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 279 * OS1_S1 + 3);
            *(b + 345 * OS1_S1 + 7) =
                prefactor_y * *(b + 345 * OS1_S1 + 2) -
                p_over_q * *(b + 434 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 269 * OS1_S1 + 2) +
                one_over_two_q * *(b + 345 * OS1_S1 + 0);
            *(b + 345 * OS1_S1 + 8) =
                prefactor_z * *(b + 345 * OS1_S1 + 2) -
                p_over_q * *(b + 435 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 2);
            *(b + 345 * OS1_S1 + 9) =
                prefactor_z * *(b + 345 * OS1_S1 + 3) -
                p_over_q * *(b + 435 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 3) +
                one_over_two_q * *(b + 345 * OS1_S1 + 0);
            *(b + 346 * OS1_S1 + 4) = prefactor_x * *(b + 346 * OS1_S1 + 1) -
                                      p_over_q * *(b + 424 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 280 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 346 * OS1_S1 + 0);
            *(b + 346 * OS1_S1 + 5) = prefactor_x * *(b + 346 * OS1_S1 + 2) -
                                      p_over_q * *(b + 424 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 280 * OS1_S1 + 2);
            *(b + 346 * OS1_S1 + 6) = prefactor_x * *(b + 346 * OS1_S1 + 3) -
                                      p_over_q * *(b + 424 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 280 * OS1_S1 + 3);
            *(b + 346 * OS1_S1 + 7) =
                prefactor_y * *(b + 346 * OS1_S1 + 2) -
                p_over_q * *(b + 435 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 2) +
                one_over_two_q * *(b + 346 * OS1_S1 + 0);
            *(b + 346 * OS1_S1 + 8) =
                prefactor_z * *(b + 346 * OS1_S1 + 2) -
                p_over_q * *(b + 436 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 2);
            *(b + 346 * OS1_S1 + 9) =
                prefactor_z * *(b + 346 * OS1_S1 + 3) -
                p_over_q * *(b + 436 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 3) +
                one_over_two_q * *(b + 346 * OS1_S1 + 0);
            *(b + 347 * OS1_S1 + 4) = prefactor_x * *(b + 347 * OS1_S1 + 1) -
                                      p_over_q * *(b + 425 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 281 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 347 * OS1_S1 + 0);
            *(b + 347 * OS1_S1 + 5) = prefactor_x * *(b + 347 * OS1_S1 + 2) -
                                      p_over_q * *(b + 425 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 281 * OS1_S1 + 2);
            *(b + 347 * OS1_S1 + 6) = prefactor_x * *(b + 347 * OS1_S1 + 3) -
                                      p_over_q * *(b + 425 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 281 * OS1_S1 + 3);
            *(b + 347 * OS1_S1 + 7) =
                prefactor_y * *(b + 347 * OS1_S1 + 2) -
                p_over_q * *(b + 436 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 2) +
                one_over_two_q * *(b + 347 * OS1_S1 + 0);
            *(b + 347 * OS1_S1 + 8) =
                prefactor_y * *(b + 347 * OS1_S1 + 3) -
                p_over_q * *(b + 436 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 3);
            *(b + 347 * OS1_S1 + 9) =
                prefactor_z * *(b + 347 * OS1_S1 + 3) -
                p_over_q * *(b + 437 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 270 * OS1_S1 + 3) +
                one_over_two_q * *(b + 347 * OS1_S1 + 0);
            *(b + 348 * OS1_S1 + 4) = prefactor_x * *(b + 348 * OS1_S1 + 1) -
                                      p_over_q * *(b + 426 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 282 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 348 * OS1_S1 + 0);
            *(b + 348 * OS1_S1 + 5) = prefactor_x * *(b + 348 * OS1_S1 + 2) -
                                      p_over_q * *(b + 426 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 282 * OS1_S1 + 2);
            *(b + 348 * OS1_S1 + 6) = prefactor_x * *(b + 348 * OS1_S1 + 3) -
                                      p_over_q * *(b + 426 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 282 * OS1_S1 + 3);
            *(b + 348 * OS1_S1 + 7) =
                prefactor_y * *(b + 348 * OS1_S1 + 2) -
                p_over_q * *(b + 437 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 2) +
                one_over_two_q * *(b + 348 * OS1_S1 + 0);
            *(b + 348 * OS1_S1 + 8) =
                prefactor_y * *(b + 348 * OS1_S1 + 3) -
                p_over_q * *(b + 437 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 3);
            *(b + 348 * OS1_S1 + 9) =
                prefactor_z * *(b + 348 * OS1_S1 + 3) -
                p_over_q * *(b + 438 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 271 * OS1_S1 + 3) +
                one_over_two_q * *(b + 348 * OS1_S1 + 0);
            *(b + 349 * OS1_S1 + 4) = prefactor_x * *(b + 349 * OS1_S1 + 1) -
                                      p_over_q * *(b + 427 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 283 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 349 * OS1_S1 + 0);
            *(b + 349 * OS1_S1 + 5) = prefactor_x * *(b + 349 * OS1_S1 + 2) -
                                      p_over_q * *(b + 427 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 283 * OS1_S1 + 2);
            *(b + 349 * OS1_S1 + 6) = prefactor_x * *(b + 349 * OS1_S1 + 3) -
                                      p_over_q * *(b + 427 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 283 * OS1_S1 + 3);
            *(b + 349 * OS1_S1 + 7) =
                prefactor_y * *(b + 349 * OS1_S1 + 2) -
                p_over_q * *(b + 438 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 2) +
                one_over_two_q * *(b + 349 * OS1_S1 + 0);
            *(b + 349 * OS1_S1 + 8) =
                prefactor_y * *(b + 349 * OS1_S1 + 3) -
                p_over_q * *(b + 438 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 3);
            *(b + 349 * OS1_S1 + 9) =
                prefactor_z * *(b + 349 * OS1_S1 + 3) -
                p_over_q * *(b + 439 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 272 * OS1_S1 + 3) +
                one_over_two_q * *(b + 349 * OS1_S1 + 0);
            *(b + 350 * OS1_S1 + 4) = prefactor_x * *(b + 350 * OS1_S1 + 1) -
                                      p_over_q * *(b + 428 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 284 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 350 * OS1_S1 + 0);
            *(b + 350 * OS1_S1 + 5) = prefactor_y * *(b + 350 * OS1_S1 + 1) -
                                      p_over_q * *(b + 439 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 274 * OS1_S1 + 1);
            *(b + 350 * OS1_S1 + 6) = prefactor_x * *(b + 350 * OS1_S1 + 3) -
                                      p_over_q * *(b + 428 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 284 * OS1_S1 + 3);
            *(b + 350 * OS1_S1 + 7) = prefactor_y * *(b + 350 * OS1_S1 + 2) -
                                      p_over_q * *(b + 439 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 274 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 350 * OS1_S1 + 0);
            *(b + 350 * OS1_S1 + 8) = prefactor_y * *(b + 350 * OS1_S1 + 3) -
                                      p_over_q * *(b + 439 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 274 * OS1_S1 + 3);
            *(b + 350 * OS1_S1 + 9) =
                prefactor_z * *(b + 350 * OS1_S1 + 3) -
                p_over_q * *(b + 440 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 273 * OS1_S1 + 3) +
                one_over_two_q * *(b + 350 * OS1_S1 + 0);
            *(b + 351 * OS1_S1 + 4) = prefactor_x * *(b + 351 * OS1_S1 + 1) -
                                      p_over_q * *(b + 429 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 285 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 351 * OS1_S1 + 0);
            *(b + 351 * OS1_S1 + 5) = prefactor_y * *(b + 351 * OS1_S1 + 1) -
                                      p_over_q * *(b + 440 * OS1_S1 + 1);
            *(b + 351 * OS1_S1 + 6) = prefactor_x * *(b + 351 * OS1_S1 + 3) -
                                      p_over_q * *(b + 429 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 285 * OS1_S1 + 3);
            *(b + 351 * OS1_S1 + 7) = prefactor_y * *(b + 351 * OS1_S1 + 2) -
                                      p_over_q * *(b + 440 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 351 * OS1_S1 + 0);
            *(b + 351 * OS1_S1 + 8) = prefactor_y * *(b + 351 * OS1_S1 + 3) -
                                      p_over_q * *(b + 440 * OS1_S1 + 3);
            *(b + 351 * OS1_S1 + 9) =
                prefactor_z * *(b + 351 * OS1_S1 + 3) -
                p_over_q * *(b + 441 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 274 * OS1_S1 + 3) +
                one_over_two_q * *(b + 351 * OS1_S1 + 0);
            *(b + 352 * OS1_S1 + 4) = prefactor_x * *(b + 352 * OS1_S1 + 1) -
                                      p_over_q * *(b + 430 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 352 * OS1_S1 + 0);
            *(b + 352 * OS1_S1 + 5) = prefactor_x * *(b + 352 * OS1_S1 + 2) -
                                      p_over_q * *(b + 430 * OS1_S1 + 2);
            *(b + 352 * OS1_S1 + 6) = prefactor_z * *(b + 352 * OS1_S1 + 1) -
                                      p_over_q * *(b + 443 * OS1_S1 + 1);
            *(b + 352 * OS1_S1 + 7) =
                prefactor_y * *(b + 352 * OS1_S1 + 2) -
                p_over_q * *(b + 442 * OS1_S1 + 2) +
                11 * one_over_two_q * *(b + 275 * OS1_S1 + 2) +
                one_over_two_q * *(b + 352 * OS1_S1 + 0);
            *(b + 352 * OS1_S1 + 8) = prefactor_z * *(b + 352 * OS1_S1 + 2) -
                                      p_over_q * *(b + 443 * OS1_S1 + 2);
            *(b + 352 * OS1_S1 + 9) = prefactor_z * *(b + 352 * OS1_S1 + 3) -
                                      p_over_q * *(b + 443 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 352 * OS1_S1 + 0);
            *(b + 353 * OS1_S1 + 4) = prefactor_x * *(b + 353 * OS1_S1 + 1) -
                                      p_over_q * *(b + 431 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 353 * OS1_S1 + 0);
            *(b + 353 * OS1_S1 + 5) = prefactor_x * *(b + 353 * OS1_S1 + 2) -
                                      p_over_q * *(b + 431 * OS1_S1 + 2);
            *(b + 353 * OS1_S1 + 6) = prefactor_x * *(b + 353 * OS1_S1 + 3) -
                                      p_over_q * *(b + 431 * OS1_S1 + 3);
            *(b + 353 * OS1_S1 + 7) =
                prefactor_y * *(b + 353 * OS1_S1 + 2) -
                p_over_q * *(b + 443 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 276 * OS1_S1 + 2) +
                one_over_two_q * *(b + 353 * OS1_S1 + 0);
            *(b + 353 * OS1_S1 + 8) = prefactor_z * *(b + 353 * OS1_S1 + 2) -
                                      p_over_q * *(b + 444 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 275 * OS1_S1 + 2);
            *(b + 353 * OS1_S1 + 9) = prefactor_z * *(b + 353 * OS1_S1 + 3) -
                                      p_over_q * *(b + 444 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 275 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 353 * OS1_S1 + 0);
            *(b + 354 * OS1_S1 + 4) = prefactor_x * *(b + 354 * OS1_S1 + 1) -
                                      p_over_q * *(b + 432 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 354 * OS1_S1 + 0);
            *(b + 354 * OS1_S1 + 5) = prefactor_x * *(b + 354 * OS1_S1 + 2) -
                                      p_over_q * *(b + 432 * OS1_S1 + 2);
            *(b + 354 * OS1_S1 + 6) = prefactor_x * *(b + 354 * OS1_S1 + 3) -
                                      p_over_q * *(b + 432 * OS1_S1 + 3);
            *(b + 354 * OS1_S1 + 7) =
                prefactor_y * *(b + 354 * OS1_S1 + 2) -
                p_over_q * *(b + 444 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 277 * OS1_S1 + 2) +
                one_over_two_q * *(b + 354 * OS1_S1 + 0);
            *(b + 354 * OS1_S1 + 8) =
                prefactor_z * *(b + 354 * OS1_S1 + 2) -
                p_over_q * *(b + 445 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 2);
            *(b + 354 * OS1_S1 + 9) =
                prefactor_z * *(b + 354 * OS1_S1 + 3) -
                p_over_q * *(b + 445 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 3) +
                one_over_two_q * *(b + 354 * OS1_S1 + 0);
            *(b + 355 * OS1_S1 + 4) = prefactor_x * *(b + 355 * OS1_S1 + 1) -
                                      p_over_q * *(b + 433 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 355 * OS1_S1 + 0);
            *(b + 355 * OS1_S1 + 5) = prefactor_x * *(b + 355 * OS1_S1 + 2) -
                                      p_over_q * *(b + 433 * OS1_S1 + 2);
            *(b + 355 * OS1_S1 + 6) = prefactor_x * *(b + 355 * OS1_S1 + 3) -
                                      p_over_q * *(b + 433 * OS1_S1 + 3);
            *(b + 355 * OS1_S1 + 7) =
                prefactor_y * *(b + 355 * OS1_S1 + 2) -
                p_over_q * *(b + 445 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 278 * OS1_S1 + 2) +
                one_over_two_q * *(b + 355 * OS1_S1 + 0);
            *(b + 355 * OS1_S1 + 8) =
                prefactor_z * *(b + 355 * OS1_S1 + 2) -
                p_over_q * *(b + 446 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 2);
            *(b + 355 * OS1_S1 + 9) =
                prefactor_z * *(b + 355 * OS1_S1 + 3) -
                p_over_q * *(b + 446 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 3) +
                one_over_two_q * *(b + 355 * OS1_S1 + 0);
            *(b + 356 * OS1_S1 + 4) = prefactor_x * *(b + 356 * OS1_S1 + 1) -
                                      p_over_q * *(b + 434 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 356 * OS1_S1 + 0);
            *(b + 356 * OS1_S1 + 5) = prefactor_x * *(b + 356 * OS1_S1 + 2) -
                                      p_over_q * *(b + 434 * OS1_S1 + 2);
            *(b + 356 * OS1_S1 + 6) = prefactor_x * *(b + 356 * OS1_S1 + 3) -
                                      p_over_q * *(b + 434 * OS1_S1 + 3);
            *(b + 356 * OS1_S1 + 7) =
                prefactor_y * *(b + 356 * OS1_S1 + 2) -
                p_over_q * *(b + 446 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 279 * OS1_S1 + 2) +
                one_over_two_q * *(b + 356 * OS1_S1 + 0);
            *(b + 356 * OS1_S1 + 8) =
                prefactor_z * *(b + 356 * OS1_S1 + 2) -
                p_over_q * *(b + 447 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 2);
            *(b + 356 * OS1_S1 + 9) =
                prefactor_z * *(b + 356 * OS1_S1 + 3) -
                p_over_q * *(b + 447 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 3) +
                one_over_two_q * *(b + 356 * OS1_S1 + 0);
            *(b + 357 * OS1_S1 + 4) = prefactor_x * *(b + 357 * OS1_S1 + 1) -
                                      p_over_q * *(b + 435 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 357 * OS1_S1 + 0);
            *(b + 357 * OS1_S1 + 5) = prefactor_x * *(b + 357 * OS1_S1 + 2) -
                                      p_over_q * *(b + 435 * OS1_S1 + 2);
            *(b + 357 * OS1_S1 + 6) = prefactor_x * *(b + 357 * OS1_S1 + 3) -
                                      p_over_q * *(b + 435 * OS1_S1 + 3);
            *(b + 357 * OS1_S1 + 7) =
                prefactor_y * *(b + 357 * OS1_S1 + 2) -
                p_over_q * *(b + 447 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 2) +
                one_over_two_q * *(b + 357 * OS1_S1 + 0);
            *(b + 357 * OS1_S1 + 8) =
                prefactor_z * *(b + 357 * OS1_S1 + 2) -
                p_over_q * *(b + 448 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 2);
            *(b + 357 * OS1_S1 + 9) =
                prefactor_z * *(b + 357 * OS1_S1 + 3) -
                p_over_q * *(b + 448 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 3) +
                one_over_two_q * *(b + 357 * OS1_S1 + 0);
            *(b + 358 * OS1_S1 + 4) = prefactor_x * *(b + 358 * OS1_S1 + 1) -
                                      p_over_q * *(b + 436 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 358 * OS1_S1 + 0);
            *(b + 358 * OS1_S1 + 5) = prefactor_x * *(b + 358 * OS1_S1 + 2) -
                                      p_over_q * *(b + 436 * OS1_S1 + 2);
            *(b + 358 * OS1_S1 + 6) = prefactor_x * *(b + 358 * OS1_S1 + 3) -
                                      p_over_q * *(b + 436 * OS1_S1 + 3);
            *(b + 358 * OS1_S1 + 7) =
                prefactor_y * *(b + 358 * OS1_S1 + 2) -
                p_over_q * *(b + 448 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 2) +
                one_over_two_q * *(b + 358 * OS1_S1 + 0);
            *(b + 358 * OS1_S1 + 8) =
                prefactor_y * *(b + 358 * OS1_S1 + 3) -
                p_over_q * *(b + 448 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 3);
            *(b + 358 * OS1_S1 + 9) =
                prefactor_z * *(b + 358 * OS1_S1 + 3) -
                p_over_q * *(b + 449 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 3) +
                one_over_two_q * *(b + 358 * OS1_S1 + 0);
            *(b + 359 * OS1_S1 + 4) = prefactor_x * *(b + 359 * OS1_S1 + 1) -
                                      p_over_q * *(b + 437 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 359 * OS1_S1 + 0);
            *(b + 359 * OS1_S1 + 5) = prefactor_x * *(b + 359 * OS1_S1 + 2) -
                                      p_over_q * *(b + 437 * OS1_S1 + 2);
            *(b + 359 * OS1_S1 + 6) = prefactor_x * *(b + 359 * OS1_S1 + 3) -
                                      p_over_q * *(b + 437 * OS1_S1 + 3);
            *(b + 359 * OS1_S1 + 7) =
                prefactor_y * *(b + 359 * OS1_S1 + 2) -
                p_over_q * *(b + 449 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 2) +
                one_over_two_q * *(b + 359 * OS1_S1 + 0);
            *(b + 359 * OS1_S1 + 8) =
                prefactor_y * *(b + 359 * OS1_S1 + 3) -
                p_over_q * *(b + 449 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 3);
            *(b + 359 * OS1_S1 + 9) =
                prefactor_z * *(b + 359 * OS1_S1 + 3) -
                p_over_q * *(b + 450 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 281 * OS1_S1 + 3) +
                one_over_two_q * *(b + 359 * OS1_S1 + 0);
            *(b + 360 * OS1_S1 + 4) = prefactor_x * *(b + 360 * OS1_S1 + 1) -
                                      p_over_q * *(b + 438 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 360 * OS1_S1 + 0);
            *(b + 360 * OS1_S1 + 5) = prefactor_x * *(b + 360 * OS1_S1 + 2) -
                                      p_over_q * *(b + 438 * OS1_S1 + 2);
            *(b + 360 * OS1_S1 + 6) = prefactor_x * *(b + 360 * OS1_S1 + 3) -
                                      p_over_q * *(b + 438 * OS1_S1 + 3);
            *(b + 360 * OS1_S1 + 7) =
                prefactor_y * *(b + 360 * OS1_S1 + 2) -
                p_over_q * *(b + 450 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 2) +
                one_over_two_q * *(b + 360 * OS1_S1 + 0);
            *(b + 360 * OS1_S1 + 8) =
                prefactor_y * *(b + 360 * OS1_S1 + 3) -
                p_over_q * *(b + 450 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 3);
            *(b + 360 * OS1_S1 + 9) =
                prefactor_z * *(b + 360 * OS1_S1 + 3) -
                p_over_q * *(b + 451 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 282 * OS1_S1 + 3) +
                one_over_two_q * *(b + 360 * OS1_S1 + 0);
            *(b + 361 * OS1_S1 + 4) = prefactor_x * *(b + 361 * OS1_S1 + 1) -
                                      p_over_q * *(b + 439 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 361 * OS1_S1 + 0);
            *(b + 361 * OS1_S1 + 5) = prefactor_x * *(b + 361 * OS1_S1 + 2) -
                                      p_over_q * *(b + 439 * OS1_S1 + 2);
            *(b + 361 * OS1_S1 + 6) = prefactor_x * *(b + 361 * OS1_S1 + 3) -
                                      p_over_q * *(b + 439 * OS1_S1 + 3);
            *(b + 361 * OS1_S1 + 7) =
                prefactor_y * *(b + 361 * OS1_S1 + 2) -
                p_over_q * *(b + 451 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 2) +
                one_over_two_q * *(b + 361 * OS1_S1 + 0);
            *(b + 361 * OS1_S1 + 8) =
                prefactor_y * *(b + 361 * OS1_S1 + 3) -
                p_over_q * *(b + 451 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 3);
            *(b + 361 * OS1_S1 + 9) =
                prefactor_z * *(b + 361 * OS1_S1 + 3) -
                p_over_q * *(b + 452 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 283 * OS1_S1 + 3) +
                one_over_two_q * *(b + 361 * OS1_S1 + 0);
            *(b + 362 * OS1_S1 + 4) = prefactor_x * *(b + 362 * OS1_S1 + 1) -
                                      p_over_q * *(b + 440 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 362 * OS1_S1 + 0);
            *(b + 362 * OS1_S1 + 5) = prefactor_x * *(b + 362 * OS1_S1 + 2) -
                                      p_over_q * *(b + 440 * OS1_S1 + 2);
            *(b + 362 * OS1_S1 + 6) = prefactor_x * *(b + 362 * OS1_S1 + 3) -
                                      p_over_q * *(b + 440 * OS1_S1 + 3);
            *(b + 362 * OS1_S1 + 7) = prefactor_y * *(b + 362 * OS1_S1 + 2) -
                                      p_over_q * *(b + 452 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 285 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 362 * OS1_S1 + 0);
            *(b + 362 * OS1_S1 + 8) = prefactor_y * *(b + 362 * OS1_S1 + 3) -
                                      p_over_q * *(b + 452 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 285 * OS1_S1 + 3);
            *(b + 362 * OS1_S1 + 9) =
                prefactor_z * *(b + 362 * OS1_S1 + 3) -
                p_over_q * *(b + 453 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 284 * OS1_S1 + 3) +
                one_over_two_q * *(b + 362 * OS1_S1 + 0);
            *(b + 363 * OS1_S1 + 4) = prefactor_x * *(b + 363 * OS1_S1 + 1) -
                                      p_over_q * *(b + 441 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 363 * OS1_S1 + 0);
            *(b + 363 * OS1_S1 + 5) = prefactor_y * *(b + 363 * OS1_S1 + 1) -
                                      p_over_q * *(b + 453 * OS1_S1 + 1);
            *(b + 363 * OS1_S1 + 6) = prefactor_x * *(b + 363 * OS1_S1 + 3) -
                                      p_over_q * *(b + 441 * OS1_S1 + 3);
            *(b + 363 * OS1_S1 + 7) = prefactor_y * *(b + 363 * OS1_S1 + 2) -
                                      p_over_q * *(b + 453 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 363 * OS1_S1 + 0);
            *(b + 363 * OS1_S1 + 8) = prefactor_y * *(b + 363 * OS1_S1 + 3) -
                                      p_over_q * *(b + 453 * OS1_S1 + 3);
            *(b + 363 * OS1_S1 + 9) =
                prefactor_z * *(b + 363 * OS1_S1 + 3) -
                p_over_q * *(b + 454 * OS1_S1 + 3) +
                11 * one_over_two_q * *(b + 285 * OS1_S1 + 3) +
                one_over_two_q * *(b + 363 * OS1_S1 + 0);
            return;
        }

        void transfer_12_2(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 364 * OS1_S1 + 4) =
                prefactor_x * *(b + 364 * OS1_S1 + 1) -
                p_over_q * *(b + 455 * OS1_S1 + 1) +
                12 * one_over_two_q * *(b + 286 * OS1_S1 + 1) +
                one_over_two_q * *(b + 364 * OS1_S1 + 0);
            *(b + 364 * OS1_S1 + 5) = prefactor_y * *(b + 364 * OS1_S1 + 1) -
                                      p_over_q * *(b + 456 * OS1_S1 + 1);
            *(b + 364 * OS1_S1 + 6) = prefactor_z * *(b + 364 * OS1_S1 + 1) -
                                      p_over_q * *(b + 457 * OS1_S1 + 1);
            *(b + 364 * OS1_S1 + 7) = prefactor_y * *(b + 364 * OS1_S1 + 2) -
                                      p_over_q * *(b + 456 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 364 * OS1_S1 + 0);
            *(b + 364 * OS1_S1 + 8) = prefactor_z * *(b + 364 * OS1_S1 + 2) -
                                      p_over_q * *(b + 457 * OS1_S1 + 2);
            *(b + 364 * OS1_S1 + 9) = prefactor_z * *(b + 364 * OS1_S1 + 3) -
                                      p_over_q * *(b + 457 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 364 * OS1_S1 + 0);
            *(b + 365 * OS1_S1 + 4) =
                prefactor_x * *(b + 365 * OS1_S1 + 1) -
                p_over_q * *(b + 456 * OS1_S1 + 1) +
                11 * one_over_two_q * *(b + 287 * OS1_S1 + 1) +
                one_over_two_q * *(b + 365 * OS1_S1 + 0);
            *(b + 365 * OS1_S1 + 5) = prefactor_y * *(b + 365 * OS1_S1 + 1) -
                                      p_over_q * *(b + 458 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 286 * OS1_S1 + 1);
            *(b + 365 * OS1_S1 + 6) = prefactor_z * *(b + 365 * OS1_S1 + 1) -
                                      p_over_q * *(b + 459 * OS1_S1 + 1);
            *(b + 365 * OS1_S1 + 7) = prefactor_y * *(b + 365 * OS1_S1 + 2) -
                                      p_over_q * *(b + 458 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 286 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 365 * OS1_S1 + 0);
            *(b + 365 * OS1_S1 + 8) = prefactor_z * *(b + 365 * OS1_S1 + 2) -
                                      p_over_q * *(b + 459 * OS1_S1 + 2);
            *(b + 365 * OS1_S1 + 9) = prefactor_z * *(b + 365 * OS1_S1 + 3) -
                                      p_over_q * *(b + 459 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 365 * OS1_S1 + 0);
            *(b + 366 * OS1_S1 + 4) =
                prefactor_x * *(b + 366 * OS1_S1 + 1) -
                p_over_q * *(b + 457 * OS1_S1 + 1) +
                11 * one_over_two_q * *(b + 288 * OS1_S1 + 1) +
                one_over_two_q * *(b + 366 * OS1_S1 + 0);
            *(b + 366 * OS1_S1 + 5) = prefactor_y * *(b + 366 * OS1_S1 + 1) -
                                      p_over_q * *(b + 459 * OS1_S1 + 1);
            *(b + 366 * OS1_S1 + 6) = prefactor_z * *(b + 366 * OS1_S1 + 1) -
                                      p_over_q * *(b + 460 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 286 * OS1_S1 + 1);
            *(b + 366 * OS1_S1 + 7) = prefactor_y * *(b + 366 * OS1_S1 + 2) -
                                      p_over_q * *(b + 459 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 366 * OS1_S1 + 0);
            *(b + 366 * OS1_S1 + 8) = prefactor_y * *(b + 366 * OS1_S1 + 3) -
                                      p_over_q * *(b + 459 * OS1_S1 + 3);
            *(b + 366 * OS1_S1 + 9) = prefactor_z * *(b + 366 * OS1_S1 + 3) -
                                      p_over_q * *(b + 460 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 286 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 366 * OS1_S1 + 0);
            *(b + 367 * OS1_S1 + 4) =
                prefactor_x * *(b + 367 * OS1_S1 + 1) -
                p_over_q * *(b + 458 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 289 * OS1_S1 + 1) +
                one_over_two_q * *(b + 367 * OS1_S1 + 0);
            *(b + 367 * OS1_S1 + 5) =
                prefactor_y * *(b + 367 * OS1_S1 + 1) -
                p_over_q * *(b + 461 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 287 * OS1_S1 + 1);
            *(b + 367 * OS1_S1 + 6) = prefactor_z * *(b + 367 * OS1_S1 + 1) -
                                      p_over_q * *(b + 462 * OS1_S1 + 1);
            *(b + 367 * OS1_S1 + 7) =
                prefactor_y * *(b + 367 * OS1_S1 + 2) -
                p_over_q * *(b + 461 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 287 * OS1_S1 + 2) +
                one_over_two_q * *(b + 367 * OS1_S1 + 0);
            *(b + 367 * OS1_S1 + 8) = prefactor_z * *(b + 367 * OS1_S1 + 2) -
                                      p_over_q * *(b + 462 * OS1_S1 + 2);
            *(b + 367 * OS1_S1 + 9) = prefactor_z * *(b + 367 * OS1_S1 + 3) -
                                      p_over_q * *(b + 462 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 367 * OS1_S1 + 0);
            *(b + 368 * OS1_S1 + 4) =
                prefactor_x * *(b + 368 * OS1_S1 + 1) -
                p_over_q * *(b + 459 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 290 * OS1_S1 + 1) +
                one_over_two_q * *(b + 368 * OS1_S1 + 0);
            *(b + 368 * OS1_S1 + 5) = prefactor_y * *(b + 368 * OS1_S1 + 1) -
                                      p_over_q * *(b + 462 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 288 * OS1_S1 + 1);
            *(b + 368 * OS1_S1 + 6) = prefactor_z * *(b + 368 * OS1_S1 + 1) -
                                      p_over_q * *(b + 463 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 287 * OS1_S1 + 1);
            *(b + 368 * OS1_S1 + 7) = prefactor_y * *(b + 368 * OS1_S1 + 2) -
                                      p_over_q * *(b + 462 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 288 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 368 * OS1_S1 + 0);
            *(b + 368 * OS1_S1 + 8) = prefactor_z * *(b + 368 * OS1_S1 + 2) -
                                      p_over_q * *(b + 463 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 287 * OS1_S1 + 2);
            *(b + 368 * OS1_S1 + 9) = prefactor_z * *(b + 368 * OS1_S1 + 3) -
                                      p_over_q * *(b + 463 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 287 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 368 * OS1_S1 + 0);
            *(b + 369 * OS1_S1 + 4) =
                prefactor_x * *(b + 369 * OS1_S1 + 1) -
                p_over_q * *(b + 460 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 291 * OS1_S1 + 1) +
                one_over_two_q * *(b + 369 * OS1_S1 + 0);
            *(b + 369 * OS1_S1 + 5) = prefactor_y * *(b + 369 * OS1_S1 + 1) -
                                      p_over_q * *(b + 463 * OS1_S1 + 1);
            *(b + 369 * OS1_S1 + 6) =
                prefactor_z * *(b + 369 * OS1_S1 + 1) -
                p_over_q * *(b + 464 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 288 * OS1_S1 + 1);
            *(b + 369 * OS1_S1 + 7) = prefactor_y * *(b + 369 * OS1_S1 + 2) -
                                      p_over_q * *(b + 463 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 369 * OS1_S1 + 0);
            *(b + 369 * OS1_S1 + 8) = prefactor_y * *(b + 369 * OS1_S1 + 3) -
                                      p_over_q * *(b + 463 * OS1_S1 + 3);
            *(b + 369 * OS1_S1 + 9) =
                prefactor_z * *(b + 369 * OS1_S1 + 3) -
                p_over_q * *(b + 464 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 288 * OS1_S1 + 3) +
                one_over_two_q * *(b + 369 * OS1_S1 + 0);
            *(b + 370 * OS1_S1 + 4) =
                prefactor_x * *(b + 370 * OS1_S1 + 1) -
                p_over_q * *(b + 461 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 292 * OS1_S1 + 1) +
                one_over_two_q * *(b + 370 * OS1_S1 + 0);
            *(b + 370 * OS1_S1 + 5) =
                prefactor_y * *(b + 370 * OS1_S1 + 1) -
                p_over_q * *(b + 465 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 289 * OS1_S1 + 1);
            *(b + 370 * OS1_S1 + 6) = prefactor_z * *(b + 370 * OS1_S1 + 1) -
                                      p_over_q * *(b + 466 * OS1_S1 + 1);
            *(b + 370 * OS1_S1 + 7) =
                prefactor_y * *(b + 370 * OS1_S1 + 2) -
                p_over_q * *(b + 465 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 289 * OS1_S1 + 2) +
                one_over_two_q * *(b + 370 * OS1_S1 + 0);
            *(b + 370 * OS1_S1 + 8) = prefactor_z * *(b + 370 * OS1_S1 + 2) -
                                      p_over_q * *(b + 466 * OS1_S1 + 2);
            *(b + 370 * OS1_S1 + 9) = prefactor_z * *(b + 370 * OS1_S1 + 3) -
                                      p_over_q * *(b + 466 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 370 * OS1_S1 + 0);
            *(b + 371 * OS1_S1 + 4) =
                prefactor_x * *(b + 371 * OS1_S1 + 1) -
                p_over_q * *(b + 462 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 293 * OS1_S1 + 1) +
                one_over_two_q * *(b + 371 * OS1_S1 + 0);
            *(b + 371 * OS1_S1 + 5) =
                prefactor_y * *(b + 371 * OS1_S1 + 1) -
                p_over_q * *(b + 466 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 1);
            *(b + 371 * OS1_S1 + 6) = prefactor_z * *(b + 371 * OS1_S1 + 1) -
                                      p_over_q * *(b + 467 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 289 * OS1_S1 + 1);
            *(b + 371 * OS1_S1 + 7) =
                prefactor_y * *(b + 371 * OS1_S1 + 2) -
                p_over_q * *(b + 466 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 2) +
                one_over_two_q * *(b + 371 * OS1_S1 + 0);
            *(b + 371 * OS1_S1 + 8) = prefactor_z * *(b + 371 * OS1_S1 + 2) -
                                      p_over_q * *(b + 467 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 289 * OS1_S1 + 2);
            *(b + 371 * OS1_S1 + 9) = prefactor_z * *(b + 371 * OS1_S1 + 3) -
                                      p_over_q * *(b + 467 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 289 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 371 * OS1_S1 + 0);
            *(b + 372 * OS1_S1 + 4) =
                prefactor_x * *(b + 372 * OS1_S1 + 1) -
                p_over_q * *(b + 463 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 294 * OS1_S1 + 1) +
                one_over_two_q * *(b + 372 * OS1_S1 + 0);
            *(b + 372 * OS1_S1 + 5) = prefactor_y * *(b + 372 * OS1_S1 + 1) -
                                      p_over_q * *(b + 467 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 291 * OS1_S1 + 1);
            *(b + 372 * OS1_S1 + 6) =
                prefactor_z * *(b + 372 * OS1_S1 + 1) -
                p_over_q * *(b + 468 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 1);
            *(b + 372 * OS1_S1 + 7) = prefactor_y * *(b + 372 * OS1_S1 + 2) -
                                      p_over_q * *(b + 467 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 291 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 372 * OS1_S1 + 0);
            *(b + 372 * OS1_S1 + 8) = prefactor_y * *(b + 372 * OS1_S1 + 3) -
                                      p_over_q * *(b + 467 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 291 * OS1_S1 + 3);
            *(b + 372 * OS1_S1 + 9) =
                prefactor_z * *(b + 372 * OS1_S1 + 3) -
                p_over_q * *(b + 468 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 3) +
                one_over_two_q * *(b + 372 * OS1_S1 + 0);
            *(b + 373 * OS1_S1 + 4) =
                prefactor_x * *(b + 373 * OS1_S1 + 1) -
                p_over_q * *(b + 464 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 295 * OS1_S1 + 1) +
                one_over_two_q * *(b + 373 * OS1_S1 + 0);
            *(b + 373 * OS1_S1 + 5) = prefactor_y * *(b + 373 * OS1_S1 + 1) -
                                      p_over_q * *(b + 468 * OS1_S1 + 1);
            *(b + 373 * OS1_S1 + 6) =
                prefactor_z * *(b + 373 * OS1_S1 + 1) -
                p_over_q * *(b + 469 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 291 * OS1_S1 + 1);
            *(b + 373 * OS1_S1 + 7) = prefactor_y * *(b + 373 * OS1_S1 + 2) -
                                      p_over_q * *(b + 468 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 373 * OS1_S1 + 0);
            *(b + 373 * OS1_S1 + 8) = prefactor_y * *(b + 373 * OS1_S1 + 3) -
                                      p_over_q * *(b + 468 * OS1_S1 + 3);
            *(b + 373 * OS1_S1 + 9) =
                prefactor_z * *(b + 373 * OS1_S1 + 3) -
                p_over_q * *(b + 469 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 291 * OS1_S1 + 3) +
                one_over_two_q * *(b + 373 * OS1_S1 + 0);
            *(b + 374 * OS1_S1 + 4) =
                prefactor_x * *(b + 374 * OS1_S1 + 1) -
                p_over_q * *(b + 465 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 296 * OS1_S1 + 1) +
                one_over_two_q * *(b + 374 * OS1_S1 + 0);
            *(b + 374 * OS1_S1 + 5) =
                prefactor_y * *(b + 374 * OS1_S1 + 1) -
                p_over_q * *(b + 470 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 292 * OS1_S1 + 1);
            *(b + 374 * OS1_S1 + 6) = prefactor_z * *(b + 374 * OS1_S1 + 1) -
                                      p_over_q * *(b + 471 * OS1_S1 + 1);
            *(b + 374 * OS1_S1 + 7) =
                prefactor_y * *(b + 374 * OS1_S1 + 2) -
                p_over_q * *(b + 470 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 292 * OS1_S1 + 2) +
                one_over_two_q * *(b + 374 * OS1_S1 + 0);
            *(b + 374 * OS1_S1 + 8) = prefactor_z * *(b + 374 * OS1_S1 + 2) -
                                      p_over_q * *(b + 471 * OS1_S1 + 2);
            *(b + 374 * OS1_S1 + 9) = prefactor_z * *(b + 374 * OS1_S1 + 3) -
                                      p_over_q * *(b + 471 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 374 * OS1_S1 + 0);
            *(b + 375 * OS1_S1 + 4) =
                prefactor_x * *(b + 375 * OS1_S1 + 1) -
                p_over_q * *(b + 466 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 297 * OS1_S1 + 1) +
                one_over_two_q * *(b + 375 * OS1_S1 + 0);
            *(b + 375 * OS1_S1 + 5) =
                prefactor_y * *(b + 375 * OS1_S1 + 1) -
                p_over_q * *(b + 471 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 293 * OS1_S1 + 1);
            *(b + 375 * OS1_S1 + 6) = prefactor_z * *(b + 375 * OS1_S1 + 1) -
                                      p_over_q * *(b + 472 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 292 * OS1_S1 + 1);
            *(b + 375 * OS1_S1 + 7) =
                prefactor_y * *(b + 375 * OS1_S1 + 2) -
                p_over_q * *(b + 471 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 293 * OS1_S1 + 2) +
                one_over_two_q * *(b + 375 * OS1_S1 + 0);
            *(b + 375 * OS1_S1 + 8) = prefactor_z * *(b + 375 * OS1_S1 + 2) -
                                      p_over_q * *(b + 472 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 292 * OS1_S1 + 2);
            *(b + 375 * OS1_S1 + 9) = prefactor_z * *(b + 375 * OS1_S1 + 3) -
                                      p_over_q * *(b + 472 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 292 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 375 * OS1_S1 + 0);
            *(b + 376 * OS1_S1 + 4) =
                prefactor_x * *(b + 376 * OS1_S1 + 1) -
                p_over_q * *(b + 467 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 298 * OS1_S1 + 1) +
                one_over_two_q * *(b + 376 * OS1_S1 + 0);
            *(b + 376 * OS1_S1 + 5) =
                prefactor_y * *(b + 376 * OS1_S1 + 1) -
                p_over_q * *(b + 472 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 294 * OS1_S1 + 1);
            *(b + 376 * OS1_S1 + 6) =
                prefactor_z * *(b + 376 * OS1_S1 + 1) -
                p_over_q * *(b + 473 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 293 * OS1_S1 + 1);
            *(b + 376 * OS1_S1 + 7) =
                prefactor_y * *(b + 376 * OS1_S1 + 2) -
                p_over_q * *(b + 472 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 294 * OS1_S1 + 2) +
                one_over_two_q * *(b + 376 * OS1_S1 + 0);
            *(b + 376 * OS1_S1 + 8) =
                prefactor_z * *(b + 376 * OS1_S1 + 2) -
                p_over_q * *(b + 473 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 293 * OS1_S1 + 2);
            *(b + 376 * OS1_S1 + 9) =
                prefactor_z * *(b + 376 * OS1_S1 + 3) -
                p_over_q * *(b + 473 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 293 * OS1_S1 + 3) +
                one_over_two_q * *(b + 376 * OS1_S1 + 0);
            *(b + 377 * OS1_S1 + 4) =
                prefactor_x * *(b + 377 * OS1_S1 + 1) -
                p_over_q * *(b + 468 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 299 * OS1_S1 + 1) +
                one_over_two_q * *(b + 377 * OS1_S1 + 0);
            *(b + 377 * OS1_S1 + 5) = prefactor_y * *(b + 377 * OS1_S1 + 1) -
                                      p_over_q * *(b + 473 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 295 * OS1_S1 + 1);
            *(b + 377 * OS1_S1 + 6) =
                prefactor_z * *(b + 377 * OS1_S1 + 1) -
                p_over_q * *(b + 474 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 294 * OS1_S1 + 1);
            *(b + 377 * OS1_S1 + 7) = prefactor_y * *(b + 377 * OS1_S1 + 2) -
                                      p_over_q * *(b + 473 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 295 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 377 * OS1_S1 + 0);
            *(b + 377 * OS1_S1 + 8) = prefactor_y * *(b + 377 * OS1_S1 + 3) -
                                      p_over_q * *(b + 473 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 295 * OS1_S1 + 3);
            *(b + 377 * OS1_S1 + 9) =
                prefactor_z * *(b + 377 * OS1_S1 + 3) -
                p_over_q * *(b + 474 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 294 * OS1_S1 + 3) +
                one_over_two_q * *(b + 377 * OS1_S1 + 0);
            *(b + 378 * OS1_S1 + 4) =
                prefactor_x * *(b + 378 * OS1_S1 + 1) -
                p_over_q * *(b + 469 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 300 * OS1_S1 + 1) +
                one_over_two_q * *(b + 378 * OS1_S1 + 0);
            *(b + 378 * OS1_S1 + 5) = prefactor_y * *(b + 378 * OS1_S1 + 1) -
                                      p_over_q * *(b + 474 * OS1_S1 + 1);
            *(b + 378 * OS1_S1 + 6) =
                prefactor_z * *(b + 378 * OS1_S1 + 1) -
                p_over_q * *(b + 475 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 295 * OS1_S1 + 1);
            *(b + 378 * OS1_S1 + 7) = prefactor_y * *(b + 378 * OS1_S1 + 2) -
                                      p_over_q * *(b + 474 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 378 * OS1_S1 + 0);
            *(b + 378 * OS1_S1 + 8) = prefactor_y * *(b + 378 * OS1_S1 + 3) -
                                      p_over_q * *(b + 474 * OS1_S1 + 3);
            *(b + 378 * OS1_S1 + 9) =
                prefactor_z * *(b + 378 * OS1_S1 + 3) -
                p_over_q * *(b + 475 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 295 * OS1_S1 + 3) +
                one_over_two_q * *(b + 378 * OS1_S1 + 0);
            *(b + 379 * OS1_S1 + 4) =
                prefactor_x * *(b + 379 * OS1_S1 + 1) -
                p_over_q * *(b + 470 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 301 * OS1_S1 + 1) +
                one_over_two_q * *(b + 379 * OS1_S1 + 0);
            *(b + 379 * OS1_S1 + 5) =
                prefactor_y * *(b + 379 * OS1_S1 + 1) -
                p_over_q * *(b + 476 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 296 * OS1_S1 + 1);
            *(b + 379 * OS1_S1 + 6) = prefactor_z * *(b + 379 * OS1_S1 + 1) -
                                      p_over_q * *(b + 477 * OS1_S1 + 1);
            *(b + 379 * OS1_S1 + 7) =
                prefactor_y * *(b + 379 * OS1_S1 + 2) -
                p_over_q * *(b + 476 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 296 * OS1_S1 + 2) +
                one_over_two_q * *(b + 379 * OS1_S1 + 0);
            *(b + 379 * OS1_S1 + 8) = prefactor_z * *(b + 379 * OS1_S1 + 2) -
                                      p_over_q * *(b + 477 * OS1_S1 + 2);
            *(b + 379 * OS1_S1 + 9) = prefactor_z * *(b + 379 * OS1_S1 + 3) -
                                      p_over_q * *(b + 477 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 379 * OS1_S1 + 0);
            *(b + 380 * OS1_S1 + 4) =
                prefactor_x * *(b + 380 * OS1_S1 + 1) -
                p_over_q * *(b + 471 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 302 * OS1_S1 + 1) +
                one_over_two_q * *(b + 380 * OS1_S1 + 0);
            *(b + 380 * OS1_S1 + 5) =
                prefactor_y * *(b + 380 * OS1_S1 + 1) -
                p_over_q * *(b + 477 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 297 * OS1_S1 + 1);
            *(b + 380 * OS1_S1 + 6) = prefactor_z * *(b + 380 * OS1_S1 + 1) -
                                      p_over_q * *(b + 478 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 296 * OS1_S1 + 1);
            *(b + 380 * OS1_S1 + 7) =
                prefactor_y * *(b + 380 * OS1_S1 + 2) -
                p_over_q * *(b + 477 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 297 * OS1_S1 + 2) +
                one_over_two_q * *(b + 380 * OS1_S1 + 0);
            *(b + 380 * OS1_S1 + 8) = prefactor_z * *(b + 380 * OS1_S1 + 2) -
                                      p_over_q * *(b + 478 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 296 * OS1_S1 + 2);
            *(b + 380 * OS1_S1 + 9) = prefactor_z * *(b + 380 * OS1_S1 + 3) -
                                      p_over_q * *(b + 478 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 296 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 380 * OS1_S1 + 0);
            *(b + 381 * OS1_S1 + 4) =
                prefactor_x * *(b + 381 * OS1_S1 + 1) -
                p_over_q * *(b + 472 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 303 * OS1_S1 + 1) +
                one_over_two_q * *(b + 381 * OS1_S1 + 0);
            *(b + 381 * OS1_S1 + 5) =
                prefactor_y * *(b + 381 * OS1_S1 + 1) -
                p_over_q * *(b + 478 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 1);
            *(b + 381 * OS1_S1 + 6) =
                prefactor_z * *(b + 381 * OS1_S1 + 1) -
                p_over_q * *(b + 479 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 297 * OS1_S1 + 1);
            *(b + 381 * OS1_S1 + 7) =
                prefactor_y * *(b + 381 * OS1_S1 + 2) -
                p_over_q * *(b + 478 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 2) +
                one_over_two_q * *(b + 381 * OS1_S1 + 0);
            *(b + 381 * OS1_S1 + 8) =
                prefactor_z * *(b + 381 * OS1_S1 + 2) -
                p_over_q * *(b + 479 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 297 * OS1_S1 + 2);
            *(b + 381 * OS1_S1 + 9) =
                prefactor_z * *(b + 381 * OS1_S1 + 3) -
                p_over_q * *(b + 479 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 297 * OS1_S1 + 3) +
                one_over_two_q * *(b + 381 * OS1_S1 + 0);
            *(b + 382 * OS1_S1 + 4) =
                prefactor_x * *(b + 382 * OS1_S1 + 1) -
                p_over_q * *(b + 473 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 304 * OS1_S1 + 1) +
                one_over_two_q * *(b + 382 * OS1_S1 + 0);
            *(b + 382 * OS1_S1 + 5) =
                prefactor_y * *(b + 382 * OS1_S1 + 1) -
                p_over_q * *(b + 479 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 299 * OS1_S1 + 1);
            *(b + 382 * OS1_S1 + 6) =
                prefactor_z * *(b + 382 * OS1_S1 + 1) -
                p_over_q * *(b + 480 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 1);
            *(b + 382 * OS1_S1 + 7) =
                prefactor_y * *(b + 382 * OS1_S1 + 2) -
                p_over_q * *(b + 479 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 299 * OS1_S1 + 2) +
                one_over_two_q * *(b + 382 * OS1_S1 + 0);
            *(b + 382 * OS1_S1 + 8) =
                prefactor_y * *(b + 382 * OS1_S1 + 3) -
                p_over_q * *(b + 479 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 299 * OS1_S1 + 3);
            *(b + 382 * OS1_S1 + 9) =
                prefactor_z * *(b + 382 * OS1_S1 + 3) -
                p_over_q * *(b + 480 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 3) +
                one_over_two_q * *(b + 382 * OS1_S1 + 0);
            *(b + 383 * OS1_S1 + 4) =
                prefactor_x * *(b + 383 * OS1_S1 + 1) -
                p_over_q * *(b + 474 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 305 * OS1_S1 + 1) +
                one_over_two_q * *(b + 383 * OS1_S1 + 0);
            *(b + 383 * OS1_S1 + 5) = prefactor_y * *(b + 383 * OS1_S1 + 1) -
                                      p_over_q * *(b + 480 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 300 * OS1_S1 + 1);
            *(b + 383 * OS1_S1 + 6) =
                prefactor_z * *(b + 383 * OS1_S1 + 1) -
                p_over_q * *(b + 481 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 299 * OS1_S1 + 1);
            *(b + 383 * OS1_S1 + 7) = prefactor_y * *(b + 383 * OS1_S1 + 2) -
                                      p_over_q * *(b + 480 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 300 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 383 * OS1_S1 + 0);
            *(b + 383 * OS1_S1 + 8) = prefactor_y * *(b + 383 * OS1_S1 + 3) -
                                      p_over_q * *(b + 480 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 300 * OS1_S1 + 3);
            *(b + 383 * OS1_S1 + 9) =
                prefactor_z * *(b + 383 * OS1_S1 + 3) -
                p_over_q * *(b + 481 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 299 * OS1_S1 + 3) +
                one_over_two_q * *(b + 383 * OS1_S1 + 0);
            *(b + 384 * OS1_S1 + 4) =
                prefactor_x * *(b + 384 * OS1_S1 + 1) -
                p_over_q * *(b + 475 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 306 * OS1_S1 + 1) +
                one_over_two_q * *(b + 384 * OS1_S1 + 0);
            *(b + 384 * OS1_S1 + 5) = prefactor_y * *(b + 384 * OS1_S1 + 1) -
                                      p_over_q * *(b + 481 * OS1_S1 + 1);
            *(b + 384 * OS1_S1 + 6) =
                prefactor_z * *(b + 384 * OS1_S1 + 1) -
                p_over_q * *(b + 482 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 300 * OS1_S1 + 1);
            *(b + 384 * OS1_S1 + 7) = prefactor_y * *(b + 384 * OS1_S1 + 2) -
                                      p_over_q * *(b + 481 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 384 * OS1_S1 + 0);
            *(b + 384 * OS1_S1 + 8) = prefactor_y * *(b + 384 * OS1_S1 + 3) -
                                      p_over_q * *(b + 481 * OS1_S1 + 3);
            *(b + 384 * OS1_S1 + 9) =
                prefactor_z * *(b + 384 * OS1_S1 + 3) -
                p_over_q * *(b + 482 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 300 * OS1_S1 + 3) +
                one_over_two_q * *(b + 384 * OS1_S1 + 0);
            *(b + 385 * OS1_S1 + 4) =
                prefactor_x * *(b + 385 * OS1_S1 + 1) -
                p_over_q * *(b + 476 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 307 * OS1_S1 + 1) +
                one_over_two_q * *(b + 385 * OS1_S1 + 0);
            *(b + 385 * OS1_S1 + 5) =
                prefactor_y * *(b + 385 * OS1_S1 + 1) -
                p_over_q * *(b + 483 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 301 * OS1_S1 + 1);
            *(b + 385 * OS1_S1 + 6) = prefactor_z * *(b + 385 * OS1_S1 + 1) -
                                      p_over_q * *(b + 484 * OS1_S1 + 1);
            *(b + 385 * OS1_S1 + 7) =
                prefactor_y * *(b + 385 * OS1_S1 + 2) -
                p_over_q * *(b + 483 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 301 * OS1_S1 + 2) +
                one_over_two_q * *(b + 385 * OS1_S1 + 0);
            *(b + 385 * OS1_S1 + 8) = prefactor_z * *(b + 385 * OS1_S1 + 2) -
                                      p_over_q * *(b + 484 * OS1_S1 + 2);
            *(b + 385 * OS1_S1 + 9) = prefactor_z * *(b + 385 * OS1_S1 + 3) -
                                      p_over_q * *(b + 484 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 385 * OS1_S1 + 0);
            *(b + 386 * OS1_S1 + 4) =
                prefactor_x * *(b + 386 * OS1_S1 + 1) -
                p_over_q * *(b + 477 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 308 * OS1_S1 + 1) +
                one_over_two_q * *(b + 386 * OS1_S1 + 0);
            *(b + 386 * OS1_S1 + 5) =
                prefactor_y * *(b + 386 * OS1_S1 + 1) -
                p_over_q * *(b + 484 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 302 * OS1_S1 + 1);
            *(b + 386 * OS1_S1 + 6) = prefactor_z * *(b + 386 * OS1_S1 + 1) -
                                      p_over_q * *(b + 485 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 301 * OS1_S1 + 1);
            *(b + 386 * OS1_S1 + 7) =
                prefactor_y * *(b + 386 * OS1_S1 + 2) -
                p_over_q * *(b + 484 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 302 * OS1_S1 + 2) +
                one_over_two_q * *(b + 386 * OS1_S1 + 0);
            *(b + 386 * OS1_S1 + 8) = prefactor_z * *(b + 386 * OS1_S1 + 2) -
                                      p_over_q * *(b + 485 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 301 * OS1_S1 + 2);
            *(b + 386 * OS1_S1 + 9) = prefactor_z * *(b + 386 * OS1_S1 + 3) -
                                      p_over_q * *(b + 485 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 301 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 386 * OS1_S1 + 0);
            *(b + 387 * OS1_S1 + 4) =
                prefactor_x * *(b + 387 * OS1_S1 + 1) -
                p_over_q * *(b + 478 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 309 * OS1_S1 + 1) +
                one_over_two_q * *(b + 387 * OS1_S1 + 0);
            *(b + 387 * OS1_S1 + 5) =
                prefactor_y * *(b + 387 * OS1_S1 + 1) -
                p_over_q * *(b + 485 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 303 * OS1_S1 + 1);
            *(b + 387 * OS1_S1 + 6) =
                prefactor_z * *(b + 387 * OS1_S1 + 1) -
                p_over_q * *(b + 486 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 302 * OS1_S1 + 1);
            *(b + 387 * OS1_S1 + 7) =
                prefactor_y * *(b + 387 * OS1_S1 + 2) -
                p_over_q * *(b + 485 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 303 * OS1_S1 + 2) +
                one_over_two_q * *(b + 387 * OS1_S1 + 0);
            *(b + 387 * OS1_S1 + 8) =
                prefactor_z * *(b + 387 * OS1_S1 + 2) -
                p_over_q * *(b + 486 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 302 * OS1_S1 + 2);
            *(b + 387 * OS1_S1 + 9) =
                prefactor_z * *(b + 387 * OS1_S1 + 3) -
                p_over_q * *(b + 486 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 302 * OS1_S1 + 3) +
                one_over_two_q * *(b + 387 * OS1_S1 + 0);
            *(b + 388 * OS1_S1 + 4) =
                prefactor_x * *(b + 388 * OS1_S1 + 1) -
                p_over_q * *(b + 479 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 310 * OS1_S1 + 1) +
                one_over_two_q * *(b + 388 * OS1_S1 + 0);
            *(b + 388 * OS1_S1 + 5) =
                prefactor_y * *(b + 388 * OS1_S1 + 1) -
                p_over_q * *(b + 486 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 304 * OS1_S1 + 1);
            *(b + 388 * OS1_S1 + 6) =
                prefactor_z * *(b + 388 * OS1_S1 + 1) -
                p_over_q * *(b + 487 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 1);
            *(b + 388 * OS1_S1 + 7) =
                prefactor_y * *(b + 388 * OS1_S1 + 2) -
                p_over_q * *(b + 486 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 304 * OS1_S1 + 2) +
                one_over_two_q * *(b + 388 * OS1_S1 + 0);
            *(b + 388 * OS1_S1 + 8) =
                prefactor_z * *(b + 388 * OS1_S1 + 2) -
                p_over_q * *(b + 487 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 2);
            *(b + 388 * OS1_S1 + 9) =
                prefactor_z * *(b + 388 * OS1_S1 + 3) -
                p_over_q * *(b + 487 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 3) +
                one_over_two_q * *(b + 388 * OS1_S1 + 0);
            *(b + 389 * OS1_S1 + 4) =
                prefactor_x * *(b + 389 * OS1_S1 + 1) -
                p_over_q * *(b + 480 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 311 * OS1_S1 + 1) +
                one_over_two_q * *(b + 389 * OS1_S1 + 0);
            *(b + 389 * OS1_S1 + 5) =
                prefactor_y * *(b + 389 * OS1_S1 + 1) -
                p_over_q * *(b + 487 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 305 * OS1_S1 + 1);
            *(b + 389 * OS1_S1 + 6) =
                prefactor_z * *(b + 389 * OS1_S1 + 1) -
                p_over_q * *(b + 488 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 304 * OS1_S1 + 1);
            *(b + 389 * OS1_S1 + 7) =
                prefactor_y * *(b + 389 * OS1_S1 + 2) -
                p_over_q * *(b + 487 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 305 * OS1_S1 + 2) +
                one_over_two_q * *(b + 389 * OS1_S1 + 0);
            *(b + 389 * OS1_S1 + 8) =
                prefactor_y * *(b + 389 * OS1_S1 + 3) -
                p_over_q * *(b + 487 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 305 * OS1_S1 + 3);
            *(b + 389 * OS1_S1 + 9) =
                prefactor_z * *(b + 389 * OS1_S1 + 3) -
                p_over_q * *(b + 488 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 304 * OS1_S1 + 3) +
                one_over_two_q * *(b + 389 * OS1_S1 + 0);
            *(b + 390 * OS1_S1 + 4) =
                prefactor_x * *(b + 390 * OS1_S1 + 1) -
                p_over_q * *(b + 481 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 312 * OS1_S1 + 1) +
                one_over_two_q * *(b + 390 * OS1_S1 + 0);
            *(b + 390 * OS1_S1 + 5) = prefactor_y * *(b + 390 * OS1_S1 + 1) -
                                      p_over_q * *(b + 488 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 306 * OS1_S1 + 1);
            *(b + 390 * OS1_S1 + 6) =
                prefactor_z * *(b + 390 * OS1_S1 + 1) -
                p_over_q * *(b + 489 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 305 * OS1_S1 + 1);
            *(b + 390 * OS1_S1 + 7) = prefactor_y * *(b + 390 * OS1_S1 + 2) -
                                      p_over_q * *(b + 488 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 306 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 390 * OS1_S1 + 0);
            *(b + 390 * OS1_S1 + 8) = prefactor_y * *(b + 390 * OS1_S1 + 3) -
                                      p_over_q * *(b + 488 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 306 * OS1_S1 + 3);
            *(b + 390 * OS1_S1 + 9) =
                prefactor_z * *(b + 390 * OS1_S1 + 3) -
                p_over_q * *(b + 489 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 305 * OS1_S1 + 3) +
                one_over_two_q * *(b + 390 * OS1_S1 + 0);
            *(b + 391 * OS1_S1 + 4) =
                prefactor_x * *(b + 391 * OS1_S1 + 1) -
                p_over_q * *(b + 482 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 313 * OS1_S1 + 1) +
                one_over_two_q * *(b + 391 * OS1_S1 + 0);
            *(b + 391 * OS1_S1 + 5) = prefactor_y * *(b + 391 * OS1_S1 + 1) -
                                      p_over_q * *(b + 489 * OS1_S1 + 1);
            *(b + 391 * OS1_S1 + 6) =
                prefactor_z * *(b + 391 * OS1_S1 + 1) -
                p_over_q * *(b + 490 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 306 * OS1_S1 + 1);
            *(b + 391 * OS1_S1 + 7) = prefactor_y * *(b + 391 * OS1_S1 + 2) -
                                      p_over_q * *(b + 489 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 391 * OS1_S1 + 0);
            *(b + 391 * OS1_S1 + 8) = prefactor_y * *(b + 391 * OS1_S1 + 3) -
                                      p_over_q * *(b + 489 * OS1_S1 + 3);
            *(b + 391 * OS1_S1 + 9) =
                prefactor_z * *(b + 391 * OS1_S1 + 3) -
                p_over_q * *(b + 490 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 306 * OS1_S1 + 3) +
                one_over_two_q * *(b + 391 * OS1_S1 + 0);
            *(b + 392 * OS1_S1 + 4) =
                prefactor_x * *(b + 392 * OS1_S1 + 1) -
                p_over_q * *(b + 483 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 314 * OS1_S1 + 1) +
                one_over_two_q * *(b + 392 * OS1_S1 + 0);
            *(b + 392 * OS1_S1 + 5) =
                prefactor_x * *(b + 392 * OS1_S1 + 2) -
                p_over_q * *(b + 483 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 314 * OS1_S1 + 2);
            *(b + 392 * OS1_S1 + 6) = prefactor_z * *(b + 392 * OS1_S1 + 1) -
                                      p_over_q * *(b + 492 * OS1_S1 + 1);
            *(b + 392 * OS1_S1 + 7) =
                prefactor_y * *(b + 392 * OS1_S1 + 2) -
                p_over_q * *(b + 491 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 307 * OS1_S1 + 2) +
                one_over_two_q * *(b + 392 * OS1_S1 + 0);
            *(b + 392 * OS1_S1 + 8) = prefactor_z * *(b + 392 * OS1_S1 + 2) -
                                      p_over_q * *(b + 492 * OS1_S1 + 2);
            *(b + 392 * OS1_S1 + 9) = prefactor_z * *(b + 392 * OS1_S1 + 3) -
                                      p_over_q * *(b + 492 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 392 * OS1_S1 + 0);
            *(b + 393 * OS1_S1 + 4) =
                prefactor_x * *(b + 393 * OS1_S1 + 1) -
                p_over_q * *(b + 484 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 315 * OS1_S1 + 1) +
                one_over_two_q * *(b + 393 * OS1_S1 + 0);
            *(b + 393 * OS1_S1 + 5) =
                prefactor_x * *(b + 393 * OS1_S1 + 2) -
                p_over_q * *(b + 484 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 315 * OS1_S1 + 2);
            *(b + 393 * OS1_S1 + 6) = prefactor_z * *(b + 393 * OS1_S1 + 1) -
                                      p_over_q * *(b + 493 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 307 * OS1_S1 + 1);
            *(b + 393 * OS1_S1 + 7) =
                prefactor_y * *(b + 393 * OS1_S1 + 2) -
                p_over_q * *(b + 492 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 308 * OS1_S1 + 2) +
                one_over_two_q * *(b + 393 * OS1_S1 + 0);
            *(b + 393 * OS1_S1 + 8) = prefactor_z * *(b + 393 * OS1_S1 + 2) -
                                      p_over_q * *(b + 493 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 307 * OS1_S1 + 2);
            *(b + 393 * OS1_S1 + 9) = prefactor_z * *(b + 393 * OS1_S1 + 3) -
                                      p_over_q * *(b + 493 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 307 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 393 * OS1_S1 + 0);
            *(b + 394 * OS1_S1 + 4) =
                prefactor_x * *(b + 394 * OS1_S1 + 1) -
                p_over_q * *(b + 485 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 316 * OS1_S1 + 1) +
                one_over_two_q * *(b + 394 * OS1_S1 + 0);
            *(b + 394 * OS1_S1 + 5) =
                prefactor_y * *(b + 394 * OS1_S1 + 1) -
                p_over_q * *(b + 493 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 309 * OS1_S1 + 1);
            *(b + 394 * OS1_S1 + 6) =
                prefactor_z * *(b + 394 * OS1_S1 + 1) -
                p_over_q * *(b + 494 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 308 * OS1_S1 + 1);
            *(b + 394 * OS1_S1 + 7) =
                prefactor_y * *(b + 394 * OS1_S1 + 2) -
                p_over_q * *(b + 493 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 309 * OS1_S1 + 2) +
                one_over_two_q * *(b + 394 * OS1_S1 + 0);
            *(b + 394 * OS1_S1 + 8) =
                prefactor_z * *(b + 394 * OS1_S1 + 2) -
                p_over_q * *(b + 494 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 308 * OS1_S1 + 2);
            *(b + 394 * OS1_S1 + 9) =
                prefactor_z * *(b + 394 * OS1_S1 + 3) -
                p_over_q * *(b + 494 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 308 * OS1_S1 + 3) +
                one_over_two_q * *(b + 394 * OS1_S1 + 0);
            *(b + 395 * OS1_S1 + 4) =
                prefactor_x * *(b + 395 * OS1_S1 + 1) -
                p_over_q * *(b + 486 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 317 * OS1_S1 + 1) +
                one_over_two_q * *(b + 395 * OS1_S1 + 0);
            *(b + 395 * OS1_S1 + 5) =
                prefactor_y * *(b + 395 * OS1_S1 + 1) -
                p_over_q * *(b + 494 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 1);
            *(b + 395 * OS1_S1 + 6) =
                prefactor_z * *(b + 395 * OS1_S1 + 1) -
                p_over_q * *(b + 495 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 1);
            *(b + 395 * OS1_S1 + 7) =
                prefactor_y * *(b + 395 * OS1_S1 + 2) -
                p_over_q * *(b + 494 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 2) +
                one_over_two_q * *(b + 395 * OS1_S1 + 0);
            *(b + 395 * OS1_S1 + 8) =
                prefactor_z * *(b + 395 * OS1_S1 + 2) -
                p_over_q * *(b + 495 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 2);
            *(b + 395 * OS1_S1 + 9) =
                prefactor_z * *(b + 395 * OS1_S1 + 3) -
                p_over_q * *(b + 495 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 3) +
                one_over_two_q * *(b + 395 * OS1_S1 + 0);
            *(b + 396 * OS1_S1 + 4) =
                prefactor_x * *(b + 396 * OS1_S1 + 1) -
                p_over_q * *(b + 487 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 318 * OS1_S1 + 1) +
                one_over_two_q * *(b + 396 * OS1_S1 + 0);
            *(b + 396 * OS1_S1 + 5) =
                prefactor_y * *(b + 396 * OS1_S1 + 1) -
                p_over_q * *(b + 495 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 1);
            *(b + 396 * OS1_S1 + 6) =
                prefactor_z * *(b + 396 * OS1_S1 + 1) -
                p_over_q * *(b + 496 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 1);
            *(b + 396 * OS1_S1 + 7) =
                prefactor_y * *(b + 396 * OS1_S1 + 2) -
                p_over_q * *(b + 495 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 2) +
                one_over_two_q * *(b + 396 * OS1_S1 + 0);
            *(b + 396 * OS1_S1 + 8) =
                prefactor_y * *(b + 396 * OS1_S1 + 3) -
                p_over_q * *(b + 495 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 3);
            *(b + 396 * OS1_S1 + 9) =
                prefactor_z * *(b + 396 * OS1_S1 + 3) -
                p_over_q * *(b + 496 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 3) +
                one_over_two_q * *(b + 396 * OS1_S1 + 0);
            *(b + 397 * OS1_S1 + 4) =
                prefactor_x * *(b + 397 * OS1_S1 + 1) -
                p_over_q * *(b + 488 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 319 * OS1_S1 + 1) +
                one_over_two_q * *(b + 397 * OS1_S1 + 0);
            *(b + 397 * OS1_S1 + 5) =
                prefactor_y * *(b + 397 * OS1_S1 + 1) -
                p_over_q * *(b + 496 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 312 * OS1_S1 + 1);
            *(b + 397 * OS1_S1 + 6) =
                prefactor_z * *(b + 397 * OS1_S1 + 1) -
                p_over_q * *(b + 497 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 311 * OS1_S1 + 1);
            *(b + 397 * OS1_S1 + 7) =
                prefactor_y * *(b + 397 * OS1_S1 + 2) -
                p_over_q * *(b + 496 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 312 * OS1_S1 + 2) +
                one_over_two_q * *(b + 397 * OS1_S1 + 0);
            *(b + 397 * OS1_S1 + 8) =
                prefactor_y * *(b + 397 * OS1_S1 + 3) -
                p_over_q * *(b + 496 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 312 * OS1_S1 + 3);
            *(b + 397 * OS1_S1 + 9) =
                prefactor_z * *(b + 397 * OS1_S1 + 3) -
                p_over_q * *(b + 497 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 311 * OS1_S1 + 3) +
                one_over_two_q * *(b + 397 * OS1_S1 + 0);
            *(b + 398 * OS1_S1 + 4) =
                prefactor_x * *(b + 398 * OS1_S1 + 1) -
                p_over_q * *(b + 489 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 320 * OS1_S1 + 1) +
                one_over_two_q * *(b + 398 * OS1_S1 + 0);
            *(b + 398 * OS1_S1 + 5) = prefactor_y * *(b + 398 * OS1_S1 + 1) -
                                      p_over_q * *(b + 497 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 313 * OS1_S1 + 1);
            *(b + 398 * OS1_S1 + 6) =
                prefactor_x * *(b + 398 * OS1_S1 + 3) -
                p_over_q * *(b + 489 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 320 * OS1_S1 + 3);
            *(b + 398 * OS1_S1 + 7) = prefactor_y * *(b + 398 * OS1_S1 + 2) -
                                      p_over_q * *(b + 497 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 313 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 398 * OS1_S1 + 0);
            *(b + 398 * OS1_S1 + 8) = prefactor_y * *(b + 398 * OS1_S1 + 3) -
                                      p_over_q * *(b + 497 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 313 * OS1_S1 + 3);
            *(b + 398 * OS1_S1 + 9) =
                prefactor_z * *(b + 398 * OS1_S1 + 3) -
                p_over_q * *(b + 498 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 312 * OS1_S1 + 3) +
                one_over_two_q * *(b + 398 * OS1_S1 + 0);
            *(b + 399 * OS1_S1 + 4) =
                prefactor_x * *(b + 399 * OS1_S1 + 1) -
                p_over_q * *(b + 490 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 321 * OS1_S1 + 1) +
                one_over_two_q * *(b + 399 * OS1_S1 + 0);
            *(b + 399 * OS1_S1 + 5) = prefactor_y * *(b + 399 * OS1_S1 + 1) -
                                      p_over_q * *(b + 498 * OS1_S1 + 1);
            *(b + 399 * OS1_S1 + 6) =
                prefactor_x * *(b + 399 * OS1_S1 + 3) -
                p_over_q * *(b + 490 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 321 * OS1_S1 + 3);
            *(b + 399 * OS1_S1 + 7) = prefactor_y * *(b + 399 * OS1_S1 + 2) -
                                      p_over_q * *(b + 498 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 399 * OS1_S1 + 0);
            *(b + 399 * OS1_S1 + 8) = prefactor_y * *(b + 399 * OS1_S1 + 3) -
                                      p_over_q * *(b + 498 * OS1_S1 + 3);
            *(b + 399 * OS1_S1 + 9) =
                prefactor_z * *(b + 399 * OS1_S1 + 3) -
                p_over_q * *(b + 499 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 313 * OS1_S1 + 3) +
                one_over_two_q * *(b + 399 * OS1_S1 + 0);
            *(b + 400 * OS1_S1 + 4) =
                prefactor_x * *(b + 400 * OS1_S1 + 1) -
                p_over_q * *(b + 491 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 322 * OS1_S1 + 1) +
                one_over_two_q * *(b + 400 * OS1_S1 + 0);
            *(b + 400 * OS1_S1 + 5) =
                prefactor_x * *(b + 400 * OS1_S1 + 2) -
                p_over_q * *(b + 491 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 322 * OS1_S1 + 2);
            *(b + 400 * OS1_S1 + 6) = prefactor_z * *(b + 400 * OS1_S1 + 1) -
                                      p_over_q * *(b + 501 * OS1_S1 + 1);
            *(b + 400 * OS1_S1 + 7) =
                prefactor_y * *(b + 400 * OS1_S1 + 2) -
                p_over_q * *(b + 500 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 314 * OS1_S1 + 2) +
                one_over_two_q * *(b + 400 * OS1_S1 + 0);
            *(b + 400 * OS1_S1 + 8) = prefactor_z * *(b + 400 * OS1_S1 + 2) -
                                      p_over_q * *(b + 501 * OS1_S1 + 2);
            *(b + 400 * OS1_S1 + 9) = prefactor_z * *(b + 400 * OS1_S1 + 3) -
                                      p_over_q * *(b + 501 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 400 * OS1_S1 + 0);
            *(b + 401 * OS1_S1 + 4) =
                prefactor_x * *(b + 401 * OS1_S1 + 1) -
                p_over_q * *(b + 492 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 323 * OS1_S1 + 1) +
                one_over_two_q * *(b + 401 * OS1_S1 + 0);
            *(b + 401 * OS1_S1 + 5) =
                prefactor_x * *(b + 401 * OS1_S1 + 2) -
                p_over_q * *(b + 492 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 323 * OS1_S1 + 2);
            *(b + 401 * OS1_S1 + 6) = prefactor_z * *(b + 401 * OS1_S1 + 1) -
                                      p_over_q * *(b + 502 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 314 * OS1_S1 + 1);
            *(b + 401 * OS1_S1 + 7) =
                prefactor_y * *(b + 401 * OS1_S1 + 2) -
                p_over_q * *(b + 501 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 315 * OS1_S1 + 2) +
                one_over_two_q * *(b + 401 * OS1_S1 + 0);
            *(b + 401 * OS1_S1 + 8) = prefactor_z * *(b + 401 * OS1_S1 + 2) -
                                      p_over_q * *(b + 502 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 314 * OS1_S1 + 2);
            *(b + 401 * OS1_S1 + 9) = prefactor_z * *(b + 401 * OS1_S1 + 3) -
                                      p_over_q * *(b + 502 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 314 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 401 * OS1_S1 + 0);
            *(b + 402 * OS1_S1 + 4) =
                prefactor_x * *(b + 402 * OS1_S1 + 1) -
                p_over_q * *(b + 493 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 324 * OS1_S1 + 1) +
                one_over_two_q * *(b + 402 * OS1_S1 + 0);
            *(b + 402 * OS1_S1 + 5) =
                prefactor_x * *(b + 402 * OS1_S1 + 2) -
                p_over_q * *(b + 493 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 324 * OS1_S1 + 2);
            *(b + 402 * OS1_S1 + 6) =
                prefactor_z * *(b + 402 * OS1_S1 + 1) -
                p_over_q * *(b + 503 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 315 * OS1_S1 + 1);
            *(b + 402 * OS1_S1 + 7) =
                prefactor_y * *(b + 402 * OS1_S1 + 2) -
                p_over_q * *(b + 502 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 316 * OS1_S1 + 2) +
                one_over_two_q * *(b + 402 * OS1_S1 + 0);
            *(b + 402 * OS1_S1 + 8) =
                prefactor_z * *(b + 402 * OS1_S1 + 2) -
                p_over_q * *(b + 503 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 315 * OS1_S1 + 2);
            *(b + 402 * OS1_S1 + 9) =
                prefactor_z * *(b + 402 * OS1_S1 + 3) -
                p_over_q * *(b + 503 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 315 * OS1_S1 + 3) +
                one_over_two_q * *(b + 402 * OS1_S1 + 0);
            *(b + 403 * OS1_S1 + 4) =
                prefactor_x * *(b + 403 * OS1_S1 + 1) -
                p_over_q * *(b + 494 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 1) +
                one_over_two_q * *(b + 403 * OS1_S1 + 0);
            *(b + 403 * OS1_S1 + 5) =
                prefactor_x * *(b + 403 * OS1_S1 + 2) -
                p_over_q * *(b + 494 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 2);
            *(b + 403 * OS1_S1 + 6) =
                prefactor_z * *(b + 403 * OS1_S1 + 1) -
                p_over_q * *(b + 504 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 1);
            *(b + 403 * OS1_S1 + 7) =
                prefactor_y * *(b + 403 * OS1_S1 + 2) -
                p_over_q * *(b + 503 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 317 * OS1_S1 + 2) +
                one_over_two_q * *(b + 403 * OS1_S1 + 0);
            *(b + 403 * OS1_S1 + 8) =
                prefactor_z * *(b + 403 * OS1_S1 + 2) -
                p_over_q * *(b + 504 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 2);
            *(b + 403 * OS1_S1 + 9) =
                prefactor_z * *(b + 403 * OS1_S1 + 3) -
                p_over_q * *(b + 504 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 3) +
                one_over_two_q * *(b + 403 * OS1_S1 + 0);
            *(b + 404 * OS1_S1 + 4) =
                prefactor_x * *(b + 404 * OS1_S1 + 1) -
                p_over_q * *(b + 495 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 326 * OS1_S1 + 1) +
                one_over_two_q * *(b + 404 * OS1_S1 + 0);
            *(b + 404 * OS1_S1 + 5) =
                prefactor_y * *(b + 404 * OS1_S1 + 1) -
                p_over_q * *(b + 504 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 318 * OS1_S1 + 1);
            *(b + 404 * OS1_S1 + 6) =
                prefactor_z * *(b + 404 * OS1_S1 + 1) -
                p_over_q * *(b + 505 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 1);
            *(b + 404 * OS1_S1 + 7) =
                prefactor_y * *(b + 404 * OS1_S1 + 2) -
                p_over_q * *(b + 504 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 318 * OS1_S1 + 2) +
                one_over_two_q * *(b + 404 * OS1_S1 + 0);
            *(b + 404 * OS1_S1 + 8) =
                prefactor_z * *(b + 404 * OS1_S1 + 2) -
                p_over_q * *(b + 505 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 2);
            *(b + 404 * OS1_S1 + 9) =
                prefactor_z * *(b + 404 * OS1_S1 + 3) -
                p_over_q * *(b + 505 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 3) +
                one_over_two_q * *(b + 404 * OS1_S1 + 0);
            *(b + 405 * OS1_S1 + 4) =
                prefactor_x * *(b + 405 * OS1_S1 + 1) -
                p_over_q * *(b + 496 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 1) +
                one_over_two_q * *(b + 405 * OS1_S1 + 0);
            *(b + 405 * OS1_S1 + 5) =
                prefactor_y * *(b + 405 * OS1_S1 + 1) -
                p_over_q * *(b + 505 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 1);
            *(b + 405 * OS1_S1 + 6) =
                prefactor_x * *(b + 405 * OS1_S1 + 3) -
                p_over_q * *(b + 496 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 3);
            *(b + 405 * OS1_S1 + 7) =
                prefactor_y * *(b + 405 * OS1_S1 + 2) -
                p_over_q * *(b + 505 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 2) +
                one_over_two_q * *(b + 405 * OS1_S1 + 0);
            *(b + 405 * OS1_S1 + 8) =
                prefactor_y * *(b + 405 * OS1_S1 + 3) -
                p_over_q * *(b + 505 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 3);
            *(b + 405 * OS1_S1 + 9) =
                prefactor_z * *(b + 405 * OS1_S1 + 3) -
                p_over_q * *(b + 506 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 318 * OS1_S1 + 3) +
                one_over_two_q * *(b + 405 * OS1_S1 + 0);
            *(b + 406 * OS1_S1 + 4) =
                prefactor_x * *(b + 406 * OS1_S1 + 1) -
                p_over_q * *(b + 497 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 328 * OS1_S1 + 1) +
                one_over_two_q * *(b + 406 * OS1_S1 + 0);
            *(b + 406 * OS1_S1 + 5) =
                prefactor_y * *(b + 406 * OS1_S1 + 1) -
                p_over_q * *(b + 506 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 320 * OS1_S1 + 1);
            *(b + 406 * OS1_S1 + 6) =
                prefactor_x * *(b + 406 * OS1_S1 + 3) -
                p_over_q * *(b + 497 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 328 * OS1_S1 + 3);
            *(b + 406 * OS1_S1 + 7) =
                prefactor_y * *(b + 406 * OS1_S1 + 2) -
                p_over_q * *(b + 506 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 320 * OS1_S1 + 2) +
                one_over_two_q * *(b + 406 * OS1_S1 + 0);
            *(b + 406 * OS1_S1 + 8) =
                prefactor_y * *(b + 406 * OS1_S1 + 3) -
                p_over_q * *(b + 506 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 320 * OS1_S1 + 3);
            *(b + 406 * OS1_S1 + 9) =
                prefactor_z * *(b + 406 * OS1_S1 + 3) -
                p_over_q * *(b + 507 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 319 * OS1_S1 + 3) +
                one_over_two_q * *(b + 406 * OS1_S1 + 0);
            *(b + 407 * OS1_S1 + 4) =
                prefactor_x * *(b + 407 * OS1_S1 + 1) -
                p_over_q * *(b + 498 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 329 * OS1_S1 + 1) +
                one_over_two_q * *(b + 407 * OS1_S1 + 0);
            *(b + 407 * OS1_S1 + 5) = prefactor_y * *(b + 407 * OS1_S1 + 1) -
                                      p_over_q * *(b + 507 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 321 * OS1_S1 + 1);
            *(b + 407 * OS1_S1 + 6) =
                prefactor_x * *(b + 407 * OS1_S1 + 3) -
                p_over_q * *(b + 498 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 329 * OS1_S1 + 3);
            *(b + 407 * OS1_S1 + 7) = prefactor_y * *(b + 407 * OS1_S1 + 2) -
                                      p_over_q * *(b + 507 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 321 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 407 * OS1_S1 + 0);
            *(b + 407 * OS1_S1 + 8) = prefactor_y * *(b + 407 * OS1_S1 + 3) -
                                      p_over_q * *(b + 507 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 321 * OS1_S1 + 3);
            *(b + 407 * OS1_S1 + 9) =
                prefactor_z * *(b + 407 * OS1_S1 + 3) -
                p_over_q * *(b + 508 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 320 * OS1_S1 + 3) +
                one_over_two_q * *(b + 407 * OS1_S1 + 0);
            *(b + 408 * OS1_S1 + 4) =
                prefactor_x * *(b + 408 * OS1_S1 + 1) -
                p_over_q * *(b + 499 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 330 * OS1_S1 + 1) +
                one_over_two_q * *(b + 408 * OS1_S1 + 0);
            *(b + 408 * OS1_S1 + 5) = prefactor_y * *(b + 408 * OS1_S1 + 1) -
                                      p_over_q * *(b + 508 * OS1_S1 + 1);
            *(b + 408 * OS1_S1 + 6) =
                prefactor_x * *(b + 408 * OS1_S1 + 3) -
                p_over_q * *(b + 499 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 330 * OS1_S1 + 3);
            *(b + 408 * OS1_S1 + 7) = prefactor_y * *(b + 408 * OS1_S1 + 2) -
                                      p_over_q * *(b + 508 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 408 * OS1_S1 + 0);
            *(b + 408 * OS1_S1 + 8) = prefactor_y * *(b + 408 * OS1_S1 + 3) -
                                      p_over_q * *(b + 508 * OS1_S1 + 3);
            *(b + 408 * OS1_S1 + 9) =
                prefactor_z * *(b + 408 * OS1_S1 + 3) -
                p_over_q * *(b + 509 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 321 * OS1_S1 + 3) +
                one_over_two_q * *(b + 408 * OS1_S1 + 0);
            *(b + 409 * OS1_S1 + 4) =
                prefactor_x * *(b + 409 * OS1_S1 + 1) -
                p_over_q * *(b + 500 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 331 * OS1_S1 + 1) +
                one_over_two_q * *(b + 409 * OS1_S1 + 0);
            *(b + 409 * OS1_S1 + 5) =
                prefactor_x * *(b + 409 * OS1_S1 + 2) -
                p_over_q * *(b + 500 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 331 * OS1_S1 + 2);
            *(b + 409 * OS1_S1 + 6) = prefactor_z * *(b + 409 * OS1_S1 + 1) -
                                      p_over_q * *(b + 511 * OS1_S1 + 1);
            *(b + 409 * OS1_S1 + 7) =
                prefactor_y * *(b + 409 * OS1_S1 + 2) -
                p_over_q * *(b + 510 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 322 * OS1_S1 + 2) +
                one_over_two_q * *(b + 409 * OS1_S1 + 0);
            *(b + 409 * OS1_S1 + 8) = prefactor_z * *(b + 409 * OS1_S1 + 2) -
                                      p_over_q * *(b + 511 * OS1_S1 + 2);
            *(b + 409 * OS1_S1 + 9) = prefactor_z * *(b + 409 * OS1_S1 + 3) -
                                      p_over_q * *(b + 511 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 409 * OS1_S1 + 0);
            *(b + 410 * OS1_S1 + 4) =
                prefactor_x * *(b + 410 * OS1_S1 + 1) -
                p_over_q * *(b + 501 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 332 * OS1_S1 + 1) +
                one_over_two_q * *(b + 410 * OS1_S1 + 0);
            *(b + 410 * OS1_S1 + 5) =
                prefactor_x * *(b + 410 * OS1_S1 + 2) -
                p_over_q * *(b + 501 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 332 * OS1_S1 + 2);
            *(b + 410 * OS1_S1 + 6) = prefactor_z * *(b + 410 * OS1_S1 + 1) -
                                      p_over_q * *(b + 512 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 322 * OS1_S1 + 1);
            *(b + 410 * OS1_S1 + 7) =
                prefactor_y * *(b + 410 * OS1_S1 + 2) -
                p_over_q * *(b + 511 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 323 * OS1_S1 + 2) +
                one_over_two_q * *(b + 410 * OS1_S1 + 0);
            *(b + 410 * OS1_S1 + 8) = prefactor_z * *(b + 410 * OS1_S1 + 2) -
                                      p_over_q * *(b + 512 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 322 * OS1_S1 + 2);
            *(b + 410 * OS1_S1 + 9) = prefactor_z * *(b + 410 * OS1_S1 + 3) -
                                      p_over_q * *(b + 512 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 322 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 410 * OS1_S1 + 0);
            *(b + 411 * OS1_S1 + 4) =
                prefactor_x * *(b + 411 * OS1_S1 + 1) -
                p_over_q * *(b + 502 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 1) +
                one_over_two_q * *(b + 411 * OS1_S1 + 0);
            *(b + 411 * OS1_S1 + 5) =
                prefactor_x * *(b + 411 * OS1_S1 + 2) -
                p_over_q * *(b + 502 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 2);
            *(b + 411 * OS1_S1 + 6) =
                prefactor_z * *(b + 411 * OS1_S1 + 1) -
                p_over_q * *(b + 513 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 323 * OS1_S1 + 1);
            *(b + 411 * OS1_S1 + 7) =
                prefactor_y * *(b + 411 * OS1_S1 + 2) -
                p_over_q * *(b + 512 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 324 * OS1_S1 + 2) +
                one_over_two_q * *(b + 411 * OS1_S1 + 0);
            *(b + 411 * OS1_S1 + 8) =
                prefactor_z * *(b + 411 * OS1_S1 + 2) -
                p_over_q * *(b + 513 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 323 * OS1_S1 + 2);
            *(b + 411 * OS1_S1 + 9) =
                prefactor_z * *(b + 411 * OS1_S1 + 3) -
                p_over_q * *(b + 513 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 323 * OS1_S1 + 3) +
                one_over_two_q * *(b + 411 * OS1_S1 + 0);
            *(b + 412 * OS1_S1 + 4) =
                prefactor_x * *(b + 412 * OS1_S1 + 1) -
                p_over_q * *(b + 503 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 334 * OS1_S1 + 1) +
                one_over_two_q * *(b + 412 * OS1_S1 + 0);
            *(b + 412 * OS1_S1 + 5) =
                prefactor_x * *(b + 412 * OS1_S1 + 2) -
                p_over_q * *(b + 503 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 334 * OS1_S1 + 2);
            *(b + 412 * OS1_S1 + 6) =
                prefactor_z * *(b + 412 * OS1_S1 + 1) -
                p_over_q * *(b + 514 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 1);
            *(b + 412 * OS1_S1 + 7) =
                prefactor_y * *(b + 412 * OS1_S1 + 2) -
                p_over_q * *(b + 513 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 325 * OS1_S1 + 2) +
                one_over_two_q * *(b + 412 * OS1_S1 + 0);
            *(b + 412 * OS1_S1 + 8) =
                prefactor_z * *(b + 412 * OS1_S1 + 2) -
                p_over_q * *(b + 514 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 2);
            *(b + 412 * OS1_S1 + 9) =
                prefactor_z * *(b + 412 * OS1_S1 + 3) -
                p_over_q * *(b + 514 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 3) +
                one_over_two_q * *(b + 412 * OS1_S1 + 0);
            *(b + 413 * OS1_S1 + 4) =
                prefactor_x * *(b + 413 * OS1_S1 + 1) -
                p_over_q * *(b + 504 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 1) +
                one_over_two_q * *(b + 413 * OS1_S1 + 0);
            *(b + 413 * OS1_S1 + 5) =
                prefactor_x * *(b + 413 * OS1_S1 + 2) -
                p_over_q * *(b + 504 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 2);
            *(b + 413 * OS1_S1 + 6) =
                prefactor_x * *(b + 413 * OS1_S1 + 3) -
                p_over_q * *(b + 504 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 3);
            *(b + 413 * OS1_S1 + 7) =
                prefactor_y * *(b + 413 * OS1_S1 + 2) -
                p_over_q * *(b + 514 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 326 * OS1_S1 + 2) +
                one_over_two_q * *(b + 413 * OS1_S1 + 0);
            *(b + 413 * OS1_S1 + 8) =
                prefactor_z * *(b + 413 * OS1_S1 + 2) -
                p_over_q * *(b + 515 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 2);
            *(b + 413 * OS1_S1 + 9) =
                prefactor_z * *(b + 413 * OS1_S1 + 3) -
                p_over_q * *(b + 515 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 3) +
                one_over_two_q * *(b + 413 * OS1_S1 + 0);
            *(b + 414 * OS1_S1 + 4) =
                prefactor_x * *(b + 414 * OS1_S1 + 1) -
                p_over_q * *(b + 505 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 1) +
                one_over_two_q * *(b + 414 * OS1_S1 + 0);
            *(b + 414 * OS1_S1 + 5) =
                prefactor_x * *(b + 414 * OS1_S1 + 2) -
                p_over_q * *(b + 505 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 2);
            *(b + 414 * OS1_S1 + 6) =
                prefactor_x * *(b + 414 * OS1_S1 + 3) -
                p_over_q * *(b + 505 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 3);
            *(b + 414 * OS1_S1 + 7) =
                prefactor_y * *(b + 414 * OS1_S1 + 2) -
                p_over_q * *(b + 515 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 2) +
                one_over_two_q * *(b + 414 * OS1_S1 + 0);
            *(b + 414 * OS1_S1 + 8) =
                prefactor_y * *(b + 414 * OS1_S1 + 3) -
                p_over_q * *(b + 515 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 3);
            *(b + 414 * OS1_S1 + 9) =
                prefactor_z * *(b + 414 * OS1_S1 + 3) -
                p_over_q * *(b + 516 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 326 * OS1_S1 + 3) +
                one_over_two_q * *(b + 414 * OS1_S1 + 0);
            *(b + 415 * OS1_S1 + 4) =
                prefactor_x * *(b + 415 * OS1_S1 + 1) -
                p_over_q * *(b + 506 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 337 * OS1_S1 + 1) +
                one_over_two_q * *(b + 415 * OS1_S1 + 0);
            *(b + 415 * OS1_S1 + 5) =
                prefactor_y * *(b + 415 * OS1_S1 + 1) -
                p_over_q * *(b + 516 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 1);
            *(b + 415 * OS1_S1 + 6) =
                prefactor_x * *(b + 415 * OS1_S1 + 3) -
                p_over_q * *(b + 506 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 337 * OS1_S1 + 3);
            *(b + 415 * OS1_S1 + 7) =
                prefactor_y * *(b + 415 * OS1_S1 + 2) -
                p_over_q * *(b + 516 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 2) +
                one_over_two_q * *(b + 415 * OS1_S1 + 0);
            *(b + 415 * OS1_S1 + 8) =
                prefactor_y * *(b + 415 * OS1_S1 + 3) -
                p_over_q * *(b + 516 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 3);
            *(b + 415 * OS1_S1 + 9) =
                prefactor_z * *(b + 415 * OS1_S1 + 3) -
                p_over_q * *(b + 517 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 327 * OS1_S1 + 3) +
                one_over_two_q * *(b + 415 * OS1_S1 + 0);
            *(b + 416 * OS1_S1 + 4) =
                prefactor_x * *(b + 416 * OS1_S1 + 1) -
                p_over_q * *(b + 507 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 1) +
                one_over_two_q * *(b + 416 * OS1_S1 + 0);
            *(b + 416 * OS1_S1 + 5) =
                prefactor_y * *(b + 416 * OS1_S1 + 1) -
                p_over_q * *(b + 517 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 329 * OS1_S1 + 1);
            *(b + 416 * OS1_S1 + 6) =
                prefactor_x * *(b + 416 * OS1_S1 + 3) -
                p_over_q * *(b + 507 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 3);
            *(b + 416 * OS1_S1 + 7) =
                prefactor_y * *(b + 416 * OS1_S1 + 2) -
                p_over_q * *(b + 517 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 329 * OS1_S1 + 2) +
                one_over_two_q * *(b + 416 * OS1_S1 + 0);
            *(b + 416 * OS1_S1 + 8) =
                prefactor_y * *(b + 416 * OS1_S1 + 3) -
                p_over_q * *(b + 517 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 329 * OS1_S1 + 3);
            *(b + 416 * OS1_S1 + 9) =
                prefactor_z * *(b + 416 * OS1_S1 + 3) -
                p_over_q * *(b + 518 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 328 * OS1_S1 + 3) +
                one_over_two_q * *(b + 416 * OS1_S1 + 0);
            *(b + 417 * OS1_S1 + 4) =
                prefactor_x * *(b + 417 * OS1_S1 + 1) -
                p_over_q * *(b + 508 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 339 * OS1_S1 + 1) +
                one_over_two_q * *(b + 417 * OS1_S1 + 0);
            *(b + 417 * OS1_S1 + 5) = prefactor_y * *(b + 417 * OS1_S1 + 1) -
                                      p_over_q * *(b + 518 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 330 * OS1_S1 + 1);
            *(b + 417 * OS1_S1 + 6) =
                prefactor_x * *(b + 417 * OS1_S1 + 3) -
                p_over_q * *(b + 508 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 339 * OS1_S1 + 3);
            *(b + 417 * OS1_S1 + 7) = prefactor_y * *(b + 417 * OS1_S1 + 2) -
                                      p_over_q * *(b + 518 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 330 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 417 * OS1_S1 + 0);
            *(b + 417 * OS1_S1 + 8) = prefactor_y * *(b + 417 * OS1_S1 + 3) -
                                      p_over_q * *(b + 518 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 330 * OS1_S1 + 3);
            *(b + 417 * OS1_S1 + 9) =
                prefactor_z * *(b + 417 * OS1_S1 + 3) -
                p_over_q * *(b + 519 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 329 * OS1_S1 + 3) +
                one_over_two_q * *(b + 417 * OS1_S1 + 0);
            *(b + 418 * OS1_S1 + 4) =
                prefactor_x * *(b + 418 * OS1_S1 + 1) -
                p_over_q * *(b + 509 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 340 * OS1_S1 + 1) +
                one_over_two_q * *(b + 418 * OS1_S1 + 0);
            *(b + 418 * OS1_S1 + 5) = prefactor_y * *(b + 418 * OS1_S1 + 1) -
                                      p_over_q * *(b + 519 * OS1_S1 + 1);
            *(b + 418 * OS1_S1 + 6) =
                prefactor_x * *(b + 418 * OS1_S1 + 3) -
                p_over_q * *(b + 509 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 340 * OS1_S1 + 3);
            *(b + 418 * OS1_S1 + 7) = prefactor_y * *(b + 418 * OS1_S1 + 2) -
                                      p_over_q * *(b + 519 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 418 * OS1_S1 + 0);
            *(b + 418 * OS1_S1 + 8) = prefactor_y * *(b + 418 * OS1_S1 + 3) -
                                      p_over_q * *(b + 519 * OS1_S1 + 3);
            *(b + 418 * OS1_S1 + 9) =
                prefactor_z * *(b + 418 * OS1_S1 + 3) -
                p_over_q * *(b + 520 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 330 * OS1_S1 + 3) +
                one_over_two_q * *(b + 418 * OS1_S1 + 0);
            *(b + 419 * OS1_S1 + 4) =
                prefactor_x * *(b + 419 * OS1_S1 + 1) -
                p_over_q * *(b + 510 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 341 * OS1_S1 + 1) +
                one_over_two_q * *(b + 419 * OS1_S1 + 0);
            *(b + 419 * OS1_S1 + 5) =
                prefactor_x * *(b + 419 * OS1_S1 + 2) -
                p_over_q * *(b + 510 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 341 * OS1_S1 + 2);
            *(b + 419 * OS1_S1 + 6) = prefactor_z * *(b + 419 * OS1_S1 + 1) -
                                      p_over_q * *(b + 522 * OS1_S1 + 1);
            *(b + 419 * OS1_S1 + 7) =
                prefactor_y * *(b + 419 * OS1_S1 + 2) -
                p_over_q * *(b + 521 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 331 * OS1_S1 + 2) +
                one_over_two_q * *(b + 419 * OS1_S1 + 0);
            *(b + 419 * OS1_S1 + 8) = prefactor_z * *(b + 419 * OS1_S1 + 2) -
                                      p_over_q * *(b + 522 * OS1_S1 + 2);
            *(b + 419 * OS1_S1 + 9) = prefactor_z * *(b + 419 * OS1_S1 + 3) -
                                      p_over_q * *(b + 522 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 419 * OS1_S1 + 0);
            *(b + 420 * OS1_S1 + 4) =
                prefactor_x * *(b + 420 * OS1_S1 + 1) -
                p_over_q * *(b + 511 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 1) +
                one_over_two_q * *(b + 420 * OS1_S1 + 0);
            *(b + 420 * OS1_S1 + 5) =
                prefactor_x * *(b + 420 * OS1_S1 + 2) -
                p_over_q * *(b + 511 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 2);
            *(b + 420 * OS1_S1 + 6) = prefactor_z * *(b + 420 * OS1_S1 + 1) -
                                      p_over_q * *(b + 523 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 331 * OS1_S1 + 1);
            *(b + 420 * OS1_S1 + 7) =
                prefactor_y * *(b + 420 * OS1_S1 + 2) -
                p_over_q * *(b + 522 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 332 * OS1_S1 + 2) +
                one_over_two_q * *(b + 420 * OS1_S1 + 0);
            *(b + 420 * OS1_S1 + 8) = prefactor_z * *(b + 420 * OS1_S1 + 2) -
                                      p_over_q * *(b + 523 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 331 * OS1_S1 + 2);
            *(b + 420 * OS1_S1 + 9) = prefactor_z * *(b + 420 * OS1_S1 + 3) -
                                      p_over_q * *(b + 523 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 331 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 420 * OS1_S1 + 0);
            *(b + 421 * OS1_S1 + 4) =
                prefactor_x * *(b + 421 * OS1_S1 + 1) -
                p_over_q * *(b + 512 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 343 * OS1_S1 + 1) +
                one_over_two_q * *(b + 421 * OS1_S1 + 0);
            *(b + 421 * OS1_S1 + 5) =
                prefactor_x * *(b + 421 * OS1_S1 + 2) -
                p_over_q * *(b + 512 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 343 * OS1_S1 + 2);
            *(b + 421 * OS1_S1 + 6) =
                prefactor_z * *(b + 421 * OS1_S1 + 1) -
                p_over_q * *(b + 524 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 332 * OS1_S1 + 1);
            *(b + 421 * OS1_S1 + 7) =
                prefactor_y * *(b + 421 * OS1_S1 + 2) -
                p_over_q * *(b + 523 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 333 * OS1_S1 + 2) +
                one_over_two_q * *(b + 421 * OS1_S1 + 0);
            *(b + 421 * OS1_S1 + 8) =
                prefactor_z * *(b + 421 * OS1_S1 + 2) -
                p_over_q * *(b + 524 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 332 * OS1_S1 + 2);
            *(b + 421 * OS1_S1 + 9) =
                prefactor_z * *(b + 421 * OS1_S1 + 3) -
                p_over_q * *(b + 524 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 332 * OS1_S1 + 3) +
                one_over_two_q * *(b + 421 * OS1_S1 + 0);
            *(b + 422 * OS1_S1 + 4) =
                prefactor_x * *(b + 422 * OS1_S1 + 1) -
                p_over_q * *(b + 513 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 344 * OS1_S1 + 1) +
                one_over_two_q * *(b + 422 * OS1_S1 + 0);
            *(b + 422 * OS1_S1 + 5) =
                prefactor_x * *(b + 422 * OS1_S1 + 2) -
                p_over_q * *(b + 513 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 344 * OS1_S1 + 2);
            *(b + 422 * OS1_S1 + 6) =
                prefactor_x * *(b + 422 * OS1_S1 + 3) -
                p_over_q * *(b + 513 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 344 * OS1_S1 + 3);
            *(b + 422 * OS1_S1 + 7) =
                prefactor_y * *(b + 422 * OS1_S1 + 2) -
                p_over_q * *(b + 524 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 334 * OS1_S1 + 2) +
                one_over_two_q * *(b + 422 * OS1_S1 + 0);
            *(b + 422 * OS1_S1 + 8) =
                prefactor_z * *(b + 422 * OS1_S1 + 2) -
                p_over_q * *(b + 525 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 2);
            *(b + 422 * OS1_S1 + 9) =
                prefactor_z * *(b + 422 * OS1_S1 + 3) -
                p_over_q * *(b + 525 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 3) +
                one_over_two_q * *(b + 422 * OS1_S1 + 0);
            *(b + 423 * OS1_S1 + 4) =
                prefactor_x * *(b + 423 * OS1_S1 + 1) -
                p_over_q * *(b + 514 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 345 * OS1_S1 + 1) +
                one_over_two_q * *(b + 423 * OS1_S1 + 0);
            *(b + 423 * OS1_S1 + 5) =
                prefactor_x * *(b + 423 * OS1_S1 + 2) -
                p_over_q * *(b + 514 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 345 * OS1_S1 + 2);
            *(b + 423 * OS1_S1 + 6) =
                prefactor_x * *(b + 423 * OS1_S1 + 3) -
                p_over_q * *(b + 514 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 345 * OS1_S1 + 3);
            *(b + 423 * OS1_S1 + 7) =
                prefactor_y * *(b + 423 * OS1_S1 + 2) -
                p_over_q * *(b + 525 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 335 * OS1_S1 + 2) +
                one_over_two_q * *(b + 423 * OS1_S1 + 0);
            *(b + 423 * OS1_S1 + 8) =
                prefactor_z * *(b + 423 * OS1_S1 + 2) -
                p_over_q * *(b + 526 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 334 * OS1_S1 + 2);
            *(b + 423 * OS1_S1 + 9) =
                prefactor_z * *(b + 423 * OS1_S1 + 3) -
                p_over_q * *(b + 526 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 334 * OS1_S1 + 3) +
                one_over_two_q * *(b + 423 * OS1_S1 + 0);
            *(b + 424 * OS1_S1 + 4) =
                prefactor_x * *(b + 424 * OS1_S1 + 1) -
                p_over_q * *(b + 515 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 346 * OS1_S1 + 1) +
                one_over_two_q * *(b + 424 * OS1_S1 + 0);
            *(b + 424 * OS1_S1 + 5) =
                prefactor_x * *(b + 424 * OS1_S1 + 2) -
                p_over_q * *(b + 515 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 346 * OS1_S1 + 2);
            *(b + 424 * OS1_S1 + 6) =
                prefactor_x * *(b + 424 * OS1_S1 + 3) -
                p_over_q * *(b + 515 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 346 * OS1_S1 + 3);
            *(b + 424 * OS1_S1 + 7) =
                prefactor_y * *(b + 424 * OS1_S1 + 2) -
                p_over_q * *(b + 526 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 336 * OS1_S1 + 2) +
                one_over_two_q * *(b + 424 * OS1_S1 + 0);
            *(b + 424 * OS1_S1 + 8) =
                prefactor_z * *(b + 424 * OS1_S1 + 2) -
                p_over_q * *(b + 527 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 335 * OS1_S1 + 2);
            *(b + 424 * OS1_S1 + 9) =
                prefactor_z * *(b + 424 * OS1_S1 + 3) -
                p_over_q * *(b + 527 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 335 * OS1_S1 + 3) +
                one_over_two_q * *(b + 424 * OS1_S1 + 0);
            *(b + 425 * OS1_S1 + 4) =
                prefactor_x * *(b + 425 * OS1_S1 + 1) -
                p_over_q * *(b + 516 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 347 * OS1_S1 + 1) +
                one_over_two_q * *(b + 425 * OS1_S1 + 0);
            *(b + 425 * OS1_S1 + 5) =
                prefactor_x * *(b + 425 * OS1_S1 + 2) -
                p_over_q * *(b + 516 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 347 * OS1_S1 + 2);
            *(b + 425 * OS1_S1 + 6) =
                prefactor_x * *(b + 425 * OS1_S1 + 3) -
                p_over_q * *(b + 516 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 347 * OS1_S1 + 3);
            *(b + 425 * OS1_S1 + 7) =
                prefactor_y * *(b + 425 * OS1_S1 + 2) -
                p_over_q * *(b + 527 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 337 * OS1_S1 + 2) +
                one_over_two_q * *(b + 425 * OS1_S1 + 0);
            *(b + 425 * OS1_S1 + 8) =
                prefactor_y * *(b + 425 * OS1_S1 + 3) -
                p_over_q * *(b + 527 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 337 * OS1_S1 + 3);
            *(b + 425 * OS1_S1 + 9) =
                prefactor_z * *(b + 425 * OS1_S1 + 3) -
                p_over_q * *(b + 528 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 336 * OS1_S1 + 3) +
                one_over_two_q * *(b + 425 * OS1_S1 + 0);
            *(b + 426 * OS1_S1 + 4) =
                prefactor_x * *(b + 426 * OS1_S1 + 1) -
                p_over_q * *(b + 517 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 348 * OS1_S1 + 1) +
                one_over_two_q * *(b + 426 * OS1_S1 + 0);
            *(b + 426 * OS1_S1 + 5) =
                prefactor_x * *(b + 426 * OS1_S1 + 2) -
                p_over_q * *(b + 517 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 348 * OS1_S1 + 2);
            *(b + 426 * OS1_S1 + 6) =
                prefactor_x * *(b + 426 * OS1_S1 + 3) -
                p_over_q * *(b + 517 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 348 * OS1_S1 + 3);
            *(b + 426 * OS1_S1 + 7) =
                prefactor_y * *(b + 426 * OS1_S1 + 2) -
                p_over_q * *(b + 528 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 2) +
                one_over_two_q * *(b + 426 * OS1_S1 + 0);
            *(b + 426 * OS1_S1 + 8) =
                prefactor_y * *(b + 426 * OS1_S1 + 3) -
                p_over_q * *(b + 528 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 3);
            *(b + 426 * OS1_S1 + 9) =
                prefactor_z * *(b + 426 * OS1_S1 + 3) -
                p_over_q * *(b + 529 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 337 * OS1_S1 + 3) +
                one_over_two_q * *(b + 426 * OS1_S1 + 0);
            *(b + 427 * OS1_S1 + 4) =
                prefactor_x * *(b + 427 * OS1_S1 + 1) -
                p_over_q * *(b + 518 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 349 * OS1_S1 + 1) +
                one_over_two_q * *(b + 427 * OS1_S1 + 0);
            *(b + 427 * OS1_S1 + 5) =
                prefactor_y * *(b + 427 * OS1_S1 + 1) -
                p_over_q * *(b + 529 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 339 * OS1_S1 + 1);
            *(b + 427 * OS1_S1 + 6) =
                prefactor_x * *(b + 427 * OS1_S1 + 3) -
                p_over_q * *(b + 518 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 349 * OS1_S1 + 3);
            *(b + 427 * OS1_S1 + 7) =
                prefactor_y * *(b + 427 * OS1_S1 + 2) -
                p_over_q * *(b + 529 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 339 * OS1_S1 + 2) +
                one_over_two_q * *(b + 427 * OS1_S1 + 0);
            *(b + 427 * OS1_S1 + 8) =
                prefactor_y * *(b + 427 * OS1_S1 + 3) -
                p_over_q * *(b + 529 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 339 * OS1_S1 + 3);
            *(b + 427 * OS1_S1 + 9) =
                prefactor_z * *(b + 427 * OS1_S1 + 3) -
                p_over_q * *(b + 530 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 338 * OS1_S1 + 3) +
                one_over_two_q * *(b + 427 * OS1_S1 + 0);
            *(b + 428 * OS1_S1 + 4) =
                prefactor_x * *(b + 428 * OS1_S1 + 1) -
                p_over_q * *(b + 519 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 1) +
                one_over_two_q * *(b + 428 * OS1_S1 + 0);
            *(b + 428 * OS1_S1 + 5) = prefactor_y * *(b + 428 * OS1_S1 + 1) -
                                      p_over_q * *(b + 530 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 340 * OS1_S1 + 1);
            *(b + 428 * OS1_S1 + 6) =
                prefactor_x * *(b + 428 * OS1_S1 + 3) -
                p_over_q * *(b + 519 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 3);
            *(b + 428 * OS1_S1 + 7) = prefactor_y * *(b + 428 * OS1_S1 + 2) -
                                      p_over_q * *(b + 530 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 340 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 428 * OS1_S1 + 0);
            *(b + 428 * OS1_S1 + 8) = prefactor_y * *(b + 428 * OS1_S1 + 3) -
                                      p_over_q * *(b + 530 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 340 * OS1_S1 + 3);
            *(b + 428 * OS1_S1 + 9) =
                prefactor_z * *(b + 428 * OS1_S1 + 3) -
                p_over_q * *(b + 531 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 339 * OS1_S1 + 3) +
                one_over_two_q * *(b + 428 * OS1_S1 + 0);
            *(b + 429 * OS1_S1 + 4) =
                prefactor_x * *(b + 429 * OS1_S1 + 1) -
                p_over_q * *(b + 520 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 351 * OS1_S1 + 1) +
                one_over_two_q * *(b + 429 * OS1_S1 + 0);
            *(b + 429 * OS1_S1 + 5) = prefactor_y * *(b + 429 * OS1_S1 + 1) -
                                      p_over_q * *(b + 531 * OS1_S1 + 1);
            *(b + 429 * OS1_S1 + 6) =
                prefactor_x * *(b + 429 * OS1_S1 + 3) -
                p_over_q * *(b + 520 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 351 * OS1_S1 + 3);
            *(b + 429 * OS1_S1 + 7) = prefactor_y * *(b + 429 * OS1_S1 + 2) -
                                      p_over_q * *(b + 531 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 429 * OS1_S1 + 0);
            *(b + 429 * OS1_S1 + 8) = prefactor_y * *(b + 429 * OS1_S1 + 3) -
                                      p_over_q * *(b + 531 * OS1_S1 + 3);
            *(b + 429 * OS1_S1 + 9) =
                prefactor_z * *(b + 429 * OS1_S1 + 3) -
                p_over_q * *(b + 532 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 340 * OS1_S1 + 3) +
                one_over_two_q * *(b + 429 * OS1_S1 + 0);
            *(b + 430 * OS1_S1 + 4) = prefactor_x * *(b + 430 * OS1_S1 + 1) -
                                      p_over_q * *(b + 521 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 352 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 430 * OS1_S1 + 0);
            *(b + 430 * OS1_S1 + 5) = prefactor_x * *(b + 430 * OS1_S1 + 2) -
                                      p_over_q * *(b + 521 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 352 * OS1_S1 + 2);
            *(b + 430 * OS1_S1 + 6) = prefactor_z * *(b + 430 * OS1_S1 + 1) -
                                      p_over_q * *(b + 534 * OS1_S1 + 1);
            *(b + 430 * OS1_S1 + 7) =
                prefactor_y * *(b + 430 * OS1_S1 + 2) -
                p_over_q * *(b + 533 * OS1_S1 + 2) +
                11 * one_over_two_q * *(b + 341 * OS1_S1 + 2) +
                one_over_two_q * *(b + 430 * OS1_S1 + 0);
            *(b + 430 * OS1_S1 + 8) = prefactor_z * *(b + 430 * OS1_S1 + 2) -
                                      p_over_q * *(b + 534 * OS1_S1 + 2);
            *(b + 430 * OS1_S1 + 9) = prefactor_z * *(b + 430 * OS1_S1 + 3) -
                                      p_over_q * *(b + 534 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 430 * OS1_S1 + 0);
            *(b + 431 * OS1_S1 + 4) = prefactor_x * *(b + 431 * OS1_S1 + 1) -
                                      p_over_q * *(b + 522 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 353 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 431 * OS1_S1 + 0);
            *(b + 431 * OS1_S1 + 5) = prefactor_x * *(b + 431 * OS1_S1 + 2) -
                                      p_over_q * *(b + 522 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 353 * OS1_S1 + 2);
            *(b + 431 * OS1_S1 + 6) = prefactor_z * *(b + 431 * OS1_S1 + 1) -
                                      p_over_q * *(b + 535 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 341 * OS1_S1 + 1);
            *(b + 431 * OS1_S1 + 7) =
                prefactor_y * *(b + 431 * OS1_S1 + 2) -
                p_over_q * *(b + 534 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 342 * OS1_S1 + 2) +
                one_over_two_q * *(b + 431 * OS1_S1 + 0);
            *(b + 431 * OS1_S1 + 8) = prefactor_z * *(b + 431 * OS1_S1 + 2) -
                                      p_over_q * *(b + 535 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 341 * OS1_S1 + 2);
            *(b + 431 * OS1_S1 + 9) = prefactor_z * *(b + 431 * OS1_S1 + 3) -
                                      p_over_q * *(b + 535 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 341 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 431 * OS1_S1 + 0);
            *(b + 432 * OS1_S1 + 4) = prefactor_x * *(b + 432 * OS1_S1 + 1) -
                                      p_over_q * *(b + 523 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 354 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 432 * OS1_S1 + 0);
            *(b + 432 * OS1_S1 + 5) = prefactor_x * *(b + 432 * OS1_S1 + 2) -
                                      p_over_q * *(b + 523 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 354 * OS1_S1 + 2);
            *(b + 432 * OS1_S1 + 6) = prefactor_x * *(b + 432 * OS1_S1 + 3) -
                                      p_over_q * *(b + 523 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 354 * OS1_S1 + 3);
            *(b + 432 * OS1_S1 + 7) =
                prefactor_y * *(b + 432 * OS1_S1 + 2) -
                p_over_q * *(b + 535 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 343 * OS1_S1 + 2) +
                one_over_two_q * *(b + 432 * OS1_S1 + 0);
            *(b + 432 * OS1_S1 + 8) =
                prefactor_z * *(b + 432 * OS1_S1 + 2) -
                p_over_q * *(b + 536 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 2);
            *(b + 432 * OS1_S1 + 9) =
                prefactor_z * *(b + 432 * OS1_S1 + 3) -
                p_over_q * *(b + 536 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 3) +
                one_over_two_q * *(b + 432 * OS1_S1 + 0);
            *(b + 433 * OS1_S1 + 4) = prefactor_x * *(b + 433 * OS1_S1 + 1) -
                                      p_over_q * *(b + 524 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 355 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 433 * OS1_S1 + 0);
            *(b + 433 * OS1_S1 + 5) = prefactor_x * *(b + 433 * OS1_S1 + 2) -
                                      p_over_q * *(b + 524 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 355 * OS1_S1 + 2);
            *(b + 433 * OS1_S1 + 6) = prefactor_x * *(b + 433 * OS1_S1 + 3) -
                                      p_over_q * *(b + 524 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 355 * OS1_S1 + 3);
            *(b + 433 * OS1_S1 + 7) =
                prefactor_y * *(b + 433 * OS1_S1 + 2) -
                p_over_q * *(b + 536 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 344 * OS1_S1 + 2) +
                one_over_two_q * *(b + 433 * OS1_S1 + 0);
            *(b + 433 * OS1_S1 + 8) =
                prefactor_z * *(b + 433 * OS1_S1 + 2) -
                p_over_q * *(b + 537 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 343 * OS1_S1 + 2);
            *(b + 433 * OS1_S1 + 9) =
                prefactor_z * *(b + 433 * OS1_S1 + 3) -
                p_over_q * *(b + 537 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 343 * OS1_S1 + 3) +
                one_over_two_q * *(b + 433 * OS1_S1 + 0);
            *(b + 434 * OS1_S1 + 4) = prefactor_x * *(b + 434 * OS1_S1 + 1) -
                                      p_over_q * *(b + 525 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 356 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 434 * OS1_S1 + 0);
            *(b + 434 * OS1_S1 + 5) = prefactor_x * *(b + 434 * OS1_S1 + 2) -
                                      p_over_q * *(b + 525 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 356 * OS1_S1 + 2);
            *(b + 434 * OS1_S1 + 6) = prefactor_x * *(b + 434 * OS1_S1 + 3) -
                                      p_over_q * *(b + 525 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 356 * OS1_S1 + 3);
            *(b + 434 * OS1_S1 + 7) =
                prefactor_y * *(b + 434 * OS1_S1 + 2) -
                p_over_q * *(b + 537 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 345 * OS1_S1 + 2) +
                one_over_two_q * *(b + 434 * OS1_S1 + 0);
            *(b + 434 * OS1_S1 + 8) =
                prefactor_z * *(b + 434 * OS1_S1 + 2) -
                p_over_q * *(b + 538 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 344 * OS1_S1 + 2);
            *(b + 434 * OS1_S1 + 9) =
                prefactor_z * *(b + 434 * OS1_S1 + 3) -
                p_over_q * *(b + 538 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 344 * OS1_S1 + 3) +
                one_over_two_q * *(b + 434 * OS1_S1 + 0);
            *(b + 435 * OS1_S1 + 4) = prefactor_x * *(b + 435 * OS1_S1 + 1) -
                                      p_over_q * *(b + 526 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 357 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 435 * OS1_S1 + 0);
            *(b + 435 * OS1_S1 + 5) = prefactor_x * *(b + 435 * OS1_S1 + 2) -
                                      p_over_q * *(b + 526 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 357 * OS1_S1 + 2);
            *(b + 435 * OS1_S1 + 6) = prefactor_x * *(b + 435 * OS1_S1 + 3) -
                                      p_over_q * *(b + 526 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 357 * OS1_S1 + 3);
            *(b + 435 * OS1_S1 + 7) =
                prefactor_y * *(b + 435 * OS1_S1 + 2) -
                p_over_q * *(b + 538 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 346 * OS1_S1 + 2) +
                one_over_two_q * *(b + 435 * OS1_S1 + 0);
            *(b + 435 * OS1_S1 + 8) =
                prefactor_z * *(b + 435 * OS1_S1 + 2) -
                p_over_q * *(b + 539 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 345 * OS1_S1 + 2);
            *(b + 435 * OS1_S1 + 9) =
                prefactor_z * *(b + 435 * OS1_S1 + 3) -
                p_over_q * *(b + 539 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 345 * OS1_S1 + 3) +
                one_over_two_q * *(b + 435 * OS1_S1 + 0);
            *(b + 436 * OS1_S1 + 4) = prefactor_x * *(b + 436 * OS1_S1 + 1) -
                                      p_over_q * *(b + 527 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 358 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 436 * OS1_S1 + 0);
            *(b + 436 * OS1_S1 + 5) = prefactor_x * *(b + 436 * OS1_S1 + 2) -
                                      p_over_q * *(b + 527 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 358 * OS1_S1 + 2);
            *(b + 436 * OS1_S1 + 6) = prefactor_x * *(b + 436 * OS1_S1 + 3) -
                                      p_over_q * *(b + 527 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 358 * OS1_S1 + 3);
            *(b + 436 * OS1_S1 + 7) =
                prefactor_y * *(b + 436 * OS1_S1 + 2) -
                p_over_q * *(b + 539 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 347 * OS1_S1 + 2) +
                one_over_two_q * *(b + 436 * OS1_S1 + 0);
            *(b + 436 * OS1_S1 + 8) =
                prefactor_y * *(b + 436 * OS1_S1 + 3) -
                p_over_q * *(b + 539 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 347 * OS1_S1 + 3);
            *(b + 436 * OS1_S1 + 9) =
                prefactor_z * *(b + 436 * OS1_S1 + 3) -
                p_over_q * *(b + 540 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 346 * OS1_S1 + 3) +
                one_over_two_q * *(b + 436 * OS1_S1 + 0);
            *(b + 437 * OS1_S1 + 4) = prefactor_x * *(b + 437 * OS1_S1 + 1) -
                                      p_over_q * *(b + 528 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 359 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 437 * OS1_S1 + 0);
            *(b + 437 * OS1_S1 + 5) = prefactor_x * *(b + 437 * OS1_S1 + 2) -
                                      p_over_q * *(b + 528 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 359 * OS1_S1 + 2);
            *(b + 437 * OS1_S1 + 6) = prefactor_x * *(b + 437 * OS1_S1 + 3) -
                                      p_over_q * *(b + 528 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 359 * OS1_S1 + 3);
            *(b + 437 * OS1_S1 + 7) =
                prefactor_y * *(b + 437 * OS1_S1 + 2) -
                p_over_q * *(b + 540 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 348 * OS1_S1 + 2) +
                one_over_two_q * *(b + 437 * OS1_S1 + 0);
            *(b + 437 * OS1_S1 + 8) =
                prefactor_y * *(b + 437 * OS1_S1 + 3) -
                p_over_q * *(b + 540 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 348 * OS1_S1 + 3);
            *(b + 437 * OS1_S1 + 9) =
                prefactor_z * *(b + 437 * OS1_S1 + 3) -
                p_over_q * *(b + 541 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 347 * OS1_S1 + 3) +
                one_over_two_q * *(b + 437 * OS1_S1 + 0);
            *(b + 438 * OS1_S1 + 4) = prefactor_x * *(b + 438 * OS1_S1 + 1) -
                                      p_over_q * *(b + 529 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 360 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 438 * OS1_S1 + 0);
            *(b + 438 * OS1_S1 + 5) = prefactor_x * *(b + 438 * OS1_S1 + 2) -
                                      p_over_q * *(b + 529 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 360 * OS1_S1 + 2);
            *(b + 438 * OS1_S1 + 6) = prefactor_x * *(b + 438 * OS1_S1 + 3) -
                                      p_over_q * *(b + 529 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 360 * OS1_S1 + 3);
            *(b + 438 * OS1_S1 + 7) =
                prefactor_y * *(b + 438 * OS1_S1 + 2) -
                p_over_q * *(b + 541 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 349 * OS1_S1 + 2) +
                one_over_two_q * *(b + 438 * OS1_S1 + 0);
            *(b + 438 * OS1_S1 + 8) =
                prefactor_y * *(b + 438 * OS1_S1 + 3) -
                p_over_q * *(b + 541 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 349 * OS1_S1 + 3);
            *(b + 438 * OS1_S1 + 9) =
                prefactor_z * *(b + 438 * OS1_S1 + 3) -
                p_over_q * *(b + 542 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 348 * OS1_S1 + 3) +
                one_over_two_q * *(b + 438 * OS1_S1 + 0);
            *(b + 439 * OS1_S1 + 4) = prefactor_x * *(b + 439 * OS1_S1 + 1) -
                                      p_over_q * *(b + 530 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 361 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 439 * OS1_S1 + 0);
            *(b + 439 * OS1_S1 + 5) = prefactor_x * *(b + 439 * OS1_S1 + 2) -
                                      p_over_q * *(b + 530 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 361 * OS1_S1 + 2);
            *(b + 439 * OS1_S1 + 6) = prefactor_x * *(b + 439 * OS1_S1 + 3) -
                                      p_over_q * *(b + 530 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 361 * OS1_S1 + 3);
            *(b + 439 * OS1_S1 + 7) =
                prefactor_y * *(b + 439 * OS1_S1 + 2) -
                p_over_q * *(b + 542 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 2) +
                one_over_two_q * *(b + 439 * OS1_S1 + 0);
            *(b + 439 * OS1_S1 + 8) =
                prefactor_y * *(b + 439 * OS1_S1 + 3) -
                p_over_q * *(b + 542 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 3);
            *(b + 439 * OS1_S1 + 9) =
                prefactor_z * *(b + 439 * OS1_S1 + 3) -
                p_over_q * *(b + 543 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 349 * OS1_S1 + 3) +
                one_over_two_q * *(b + 439 * OS1_S1 + 0);
            *(b + 440 * OS1_S1 + 4) = prefactor_x * *(b + 440 * OS1_S1 + 1) -
                                      p_over_q * *(b + 531 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 362 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 440 * OS1_S1 + 0);
            *(b + 440 * OS1_S1 + 5) = prefactor_y * *(b + 440 * OS1_S1 + 1) -
                                      p_over_q * *(b + 543 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 351 * OS1_S1 + 1);
            *(b + 440 * OS1_S1 + 6) = prefactor_x * *(b + 440 * OS1_S1 + 3) -
                                      p_over_q * *(b + 531 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 362 * OS1_S1 + 3);
            *(b + 440 * OS1_S1 + 7) = prefactor_y * *(b + 440 * OS1_S1 + 2) -
                                      p_over_q * *(b + 543 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 351 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 440 * OS1_S1 + 0);
            *(b + 440 * OS1_S1 + 8) = prefactor_y * *(b + 440 * OS1_S1 + 3) -
                                      p_over_q * *(b + 543 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 351 * OS1_S1 + 3);
            *(b + 440 * OS1_S1 + 9) =
                prefactor_z * *(b + 440 * OS1_S1 + 3) -
                p_over_q * *(b + 544 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 350 * OS1_S1 + 3) +
                one_over_two_q * *(b + 440 * OS1_S1 + 0);
            *(b + 441 * OS1_S1 + 4) = prefactor_x * *(b + 441 * OS1_S1 + 1) -
                                      p_over_q * *(b + 532 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 363 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 441 * OS1_S1 + 0);
            *(b + 441 * OS1_S1 + 5) = prefactor_y * *(b + 441 * OS1_S1 + 1) -
                                      p_over_q * *(b + 544 * OS1_S1 + 1);
            *(b + 441 * OS1_S1 + 6) = prefactor_x * *(b + 441 * OS1_S1 + 3) -
                                      p_over_q * *(b + 532 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 363 * OS1_S1 + 3);
            *(b + 441 * OS1_S1 + 7) = prefactor_y * *(b + 441 * OS1_S1 + 2) -
                                      p_over_q * *(b + 544 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 441 * OS1_S1 + 0);
            *(b + 441 * OS1_S1 + 8) = prefactor_y * *(b + 441 * OS1_S1 + 3) -
                                      p_over_q * *(b + 544 * OS1_S1 + 3);
            *(b + 441 * OS1_S1 + 9) =
                prefactor_z * *(b + 441 * OS1_S1 + 3) -
                p_over_q * *(b + 545 * OS1_S1 + 3) +
                11 * one_over_two_q * *(b + 351 * OS1_S1 + 3) +
                one_over_two_q * *(b + 441 * OS1_S1 + 0);
            *(b + 442 * OS1_S1 + 4) = prefactor_x * *(b + 442 * OS1_S1 + 1) -
                                      p_over_q * *(b + 533 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 442 * OS1_S1 + 0);
            *(b + 442 * OS1_S1 + 5) = prefactor_x * *(b + 442 * OS1_S1 + 2) -
                                      p_over_q * *(b + 533 * OS1_S1 + 2);
            *(b + 442 * OS1_S1 + 6) = prefactor_z * *(b + 442 * OS1_S1 + 1) -
                                      p_over_q * *(b + 547 * OS1_S1 + 1);
            *(b + 442 * OS1_S1 + 7) =
                prefactor_y * *(b + 442 * OS1_S1 + 2) -
                p_over_q * *(b + 546 * OS1_S1 + 2) +
                12 * one_over_two_q * *(b + 352 * OS1_S1 + 2) +
                one_over_two_q * *(b + 442 * OS1_S1 + 0);
            *(b + 442 * OS1_S1 + 8) = prefactor_z * *(b + 442 * OS1_S1 + 2) -
                                      p_over_q * *(b + 547 * OS1_S1 + 2);
            *(b + 442 * OS1_S1 + 9) = prefactor_z * *(b + 442 * OS1_S1 + 3) -
                                      p_over_q * *(b + 547 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 442 * OS1_S1 + 0);
            *(b + 443 * OS1_S1 + 4) = prefactor_x * *(b + 443 * OS1_S1 + 1) -
                                      p_over_q * *(b + 534 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 443 * OS1_S1 + 0);
            *(b + 443 * OS1_S1 + 5) = prefactor_x * *(b + 443 * OS1_S1 + 2) -
                                      p_over_q * *(b + 534 * OS1_S1 + 2);
            *(b + 443 * OS1_S1 + 6) = prefactor_x * *(b + 443 * OS1_S1 + 3) -
                                      p_over_q * *(b + 534 * OS1_S1 + 3);
            *(b + 443 * OS1_S1 + 7) =
                prefactor_y * *(b + 443 * OS1_S1 + 2) -
                p_over_q * *(b + 547 * OS1_S1 + 2) +
                11 * one_over_two_q * *(b + 353 * OS1_S1 + 2) +
                one_over_two_q * *(b + 443 * OS1_S1 + 0);
            *(b + 443 * OS1_S1 + 8) = prefactor_z * *(b + 443 * OS1_S1 + 2) -
                                      p_over_q * *(b + 548 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 352 * OS1_S1 + 2);
            *(b + 443 * OS1_S1 + 9) = prefactor_z * *(b + 443 * OS1_S1 + 3) -
                                      p_over_q * *(b + 548 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 352 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 443 * OS1_S1 + 0);
            *(b + 444 * OS1_S1 + 4) = prefactor_x * *(b + 444 * OS1_S1 + 1) -
                                      p_over_q * *(b + 535 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 444 * OS1_S1 + 0);
            *(b + 444 * OS1_S1 + 5) = prefactor_x * *(b + 444 * OS1_S1 + 2) -
                                      p_over_q * *(b + 535 * OS1_S1 + 2);
            *(b + 444 * OS1_S1 + 6) = prefactor_x * *(b + 444 * OS1_S1 + 3) -
                                      p_over_q * *(b + 535 * OS1_S1 + 3);
            *(b + 444 * OS1_S1 + 7) =
                prefactor_y * *(b + 444 * OS1_S1 + 2) -
                p_over_q * *(b + 548 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 354 * OS1_S1 + 2) +
                one_over_two_q * *(b + 444 * OS1_S1 + 0);
            *(b + 444 * OS1_S1 + 8) =
                prefactor_z * *(b + 444 * OS1_S1 + 2) -
                p_over_q * *(b + 549 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 353 * OS1_S1 + 2);
            *(b + 444 * OS1_S1 + 9) =
                prefactor_z * *(b + 444 * OS1_S1 + 3) -
                p_over_q * *(b + 549 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 353 * OS1_S1 + 3) +
                one_over_two_q * *(b + 444 * OS1_S1 + 0);
            *(b + 445 * OS1_S1 + 4) = prefactor_x * *(b + 445 * OS1_S1 + 1) -
                                      p_over_q * *(b + 536 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 445 * OS1_S1 + 0);
            *(b + 445 * OS1_S1 + 5) = prefactor_x * *(b + 445 * OS1_S1 + 2) -
                                      p_over_q * *(b + 536 * OS1_S1 + 2);
            *(b + 445 * OS1_S1 + 6) = prefactor_x * *(b + 445 * OS1_S1 + 3) -
                                      p_over_q * *(b + 536 * OS1_S1 + 3);
            *(b + 445 * OS1_S1 + 7) =
                prefactor_y * *(b + 445 * OS1_S1 + 2) -
                p_over_q * *(b + 549 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 355 * OS1_S1 + 2) +
                one_over_two_q * *(b + 445 * OS1_S1 + 0);
            *(b + 445 * OS1_S1 + 8) =
                prefactor_z * *(b + 445 * OS1_S1 + 2) -
                p_over_q * *(b + 550 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 354 * OS1_S1 + 2);
            *(b + 445 * OS1_S1 + 9) =
                prefactor_z * *(b + 445 * OS1_S1 + 3) -
                p_over_q * *(b + 550 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 354 * OS1_S1 + 3) +
                one_over_two_q * *(b + 445 * OS1_S1 + 0);
            *(b + 446 * OS1_S1 + 4) = prefactor_x * *(b + 446 * OS1_S1 + 1) -
                                      p_over_q * *(b + 537 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 446 * OS1_S1 + 0);
            *(b + 446 * OS1_S1 + 5) = prefactor_x * *(b + 446 * OS1_S1 + 2) -
                                      p_over_q * *(b + 537 * OS1_S1 + 2);
            *(b + 446 * OS1_S1 + 6) = prefactor_x * *(b + 446 * OS1_S1 + 3) -
                                      p_over_q * *(b + 537 * OS1_S1 + 3);
            *(b + 446 * OS1_S1 + 7) =
                prefactor_y * *(b + 446 * OS1_S1 + 2) -
                p_over_q * *(b + 550 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 356 * OS1_S1 + 2) +
                one_over_two_q * *(b + 446 * OS1_S1 + 0);
            *(b + 446 * OS1_S1 + 8) =
                prefactor_z * *(b + 446 * OS1_S1 + 2) -
                p_over_q * *(b + 551 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 355 * OS1_S1 + 2);
            *(b + 446 * OS1_S1 + 9) =
                prefactor_z * *(b + 446 * OS1_S1 + 3) -
                p_over_q * *(b + 551 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 355 * OS1_S1 + 3) +
                one_over_two_q * *(b + 446 * OS1_S1 + 0);
            *(b + 447 * OS1_S1 + 4) = prefactor_x * *(b + 447 * OS1_S1 + 1) -
                                      p_over_q * *(b + 538 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 447 * OS1_S1 + 0);
            *(b + 447 * OS1_S1 + 5) = prefactor_x * *(b + 447 * OS1_S1 + 2) -
                                      p_over_q * *(b + 538 * OS1_S1 + 2);
            *(b + 447 * OS1_S1 + 6) = prefactor_x * *(b + 447 * OS1_S1 + 3) -
                                      p_over_q * *(b + 538 * OS1_S1 + 3);
            *(b + 447 * OS1_S1 + 7) =
                prefactor_y * *(b + 447 * OS1_S1 + 2) -
                p_over_q * *(b + 551 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 357 * OS1_S1 + 2) +
                one_over_two_q * *(b + 447 * OS1_S1 + 0);
            *(b + 447 * OS1_S1 + 8) =
                prefactor_z * *(b + 447 * OS1_S1 + 2) -
                p_over_q * *(b + 552 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 356 * OS1_S1 + 2);
            *(b + 447 * OS1_S1 + 9) =
                prefactor_z * *(b + 447 * OS1_S1 + 3) -
                p_over_q * *(b + 552 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 356 * OS1_S1 + 3) +
                one_over_two_q * *(b + 447 * OS1_S1 + 0);
            *(b + 448 * OS1_S1 + 4) = prefactor_x * *(b + 448 * OS1_S1 + 1) -
                                      p_over_q * *(b + 539 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 448 * OS1_S1 + 0);
            *(b + 448 * OS1_S1 + 5) = prefactor_x * *(b + 448 * OS1_S1 + 2) -
                                      p_over_q * *(b + 539 * OS1_S1 + 2);
            *(b + 448 * OS1_S1 + 6) = prefactor_x * *(b + 448 * OS1_S1 + 3) -
                                      p_over_q * *(b + 539 * OS1_S1 + 3);
            *(b + 448 * OS1_S1 + 7) =
                prefactor_y * *(b + 448 * OS1_S1 + 2) -
                p_over_q * *(b + 552 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 358 * OS1_S1 + 2) +
                one_over_two_q * *(b + 448 * OS1_S1 + 0);
            *(b + 448 * OS1_S1 + 8) =
                prefactor_z * *(b + 448 * OS1_S1 + 2) -
                p_over_q * *(b + 553 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 357 * OS1_S1 + 2);
            *(b + 448 * OS1_S1 + 9) =
                prefactor_z * *(b + 448 * OS1_S1 + 3) -
                p_over_q * *(b + 553 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 357 * OS1_S1 + 3) +
                one_over_two_q * *(b + 448 * OS1_S1 + 0);
            *(b + 449 * OS1_S1 + 4) = prefactor_x * *(b + 449 * OS1_S1 + 1) -
                                      p_over_q * *(b + 540 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 449 * OS1_S1 + 0);
            *(b + 449 * OS1_S1 + 5) = prefactor_x * *(b + 449 * OS1_S1 + 2) -
                                      p_over_q * *(b + 540 * OS1_S1 + 2);
            *(b + 449 * OS1_S1 + 6) = prefactor_x * *(b + 449 * OS1_S1 + 3) -
                                      p_over_q * *(b + 540 * OS1_S1 + 3);
            *(b + 449 * OS1_S1 + 7) =
                prefactor_y * *(b + 449 * OS1_S1 + 2) -
                p_over_q * *(b + 553 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 359 * OS1_S1 + 2) +
                one_over_two_q * *(b + 449 * OS1_S1 + 0);
            *(b + 449 * OS1_S1 + 8) =
                prefactor_y * *(b + 449 * OS1_S1 + 3) -
                p_over_q * *(b + 553 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 359 * OS1_S1 + 3);
            *(b + 449 * OS1_S1 + 9) =
                prefactor_z * *(b + 449 * OS1_S1 + 3) -
                p_over_q * *(b + 554 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 358 * OS1_S1 + 3) +
                one_over_two_q * *(b + 449 * OS1_S1 + 0);
            *(b + 450 * OS1_S1 + 4) = prefactor_x * *(b + 450 * OS1_S1 + 1) -
                                      p_over_q * *(b + 541 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 450 * OS1_S1 + 0);
            *(b + 450 * OS1_S1 + 5) = prefactor_x * *(b + 450 * OS1_S1 + 2) -
                                      p_over_q * *(b + 541 * OS1_S1 + 2);
            *(b + 450 * OS1_S1 + 6) = prefactor_x * *(b + 450 * OS1_S1 + 3) -
                                      p_over_q * *(b + 541 * OS1_S1 + 3);
            *(b + 450 * OS1_S1 + 7) =
                prefactor_y * *(b + 450 * OS1_S1 + 2) -
                p_over_q * *(b + 554 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 360 * OS1_S1 + 2) +
                one_over_two_q * *(b + 450 * OS1_S1 + 0);
            *(b + 450 * OS1_S1 + 8) =
                prefactor_y * *(b + 450 * OS1_S1 + 3) -
                p_over_q * *(b + 554 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 360 * OS1_S1 + 3);
            *(b + 450 * OS1_S1 + 9) =
                prefactor_z * *(b + 450 * OS1_S1 + 3) -
                p_over_q * *(b + 555 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 359 * OS1_S1 + 3) +
                one_over_two_q * *(b + 450 * OS1_S1 + 0);
            *(b + 451 * OS1_S1 + 4) = prefactor_x * *(b + 451 * OS1_S1 + 1) -
                                      p_over_q * *(b + 542 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 451 * OS1_S1 + 0);
            *(b + 451 * OS1_S1 + 5) = prefactor_x * *(b + 451 * OS1_S1 + 2) -
                                      p_over_q * *(b + 542 * OS1_S1 + 2);
            *(b + 451 * OS1_S1 + 6) = prefactor_x * *(b + 451 * OS1_S1 + 3) -
                                      p_over_q * *(b + 542 * OS1_S1 + 3);
            *(b + 451 * OS1_S1 + 7) =
                prefactor_y * *(b + 451 * OS1_S1 + 2) -
                p_over_q * *(b + 555 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 361 * OS1_S1 + 2) +
                one_over_two_q * *(b + 451 * OS1_S1 + 0);
            *(b + 451 * OS1_S1 + 8) =
                prefactor_y * *(b + 451 * OS1_S1 + 3) -
                p_over_q * *(b + 555 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 361 * OS1_S1 + 3);
            *(b + 451 * OS1_S1 + 9) =
                prefactor_z * *(b + 451 * OS1_S1 + 3) -
                p_over_q * *(b + 556 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 360 * OS1_S1 + 3) +
                one_over_two_q * *(b + 451 * OS1_S1 + 0);
            *(b + 452 * OS1_S1 + 4) = prefactor_x * *(b + 452 * OS1_S1 + 1) -
                                      p_over_q * *(b + 543 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 452 * OS1_S1 + 0);
            *(b + 452 * OS1_S1 + 5) = prefactor_x * *(b + 452 * OS1_S1 + 2) -
                                      p_over_q * *(b + 543 * OS1_S1 + 2);
            *(b + 452 * OS1_S1 + 6) = prefactor_x * *(b + 452 * OS1_S1 + 3) -
                                      p_over_q * *(b + 543 * OS1_S1 + 3);
            *(b + 452 * OS1_S1 + 7) =
                prefactor_y * *(b + 452 * OS1_S1 + 2) -
                p_over_q * *(b + 556 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 362 * OS1_S1 + 2) +
                one_over_two_q * *(b + 452 * OS1_S1 + 0);
            *(b + 452 * OS1_S1 + 8) =
                prefactor_y * *(b + 452 * OS1_S1 + 3) -
                p_over_q * *(b + 556 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 362 * OS1_S1 + 3);
            *(b + 452 * OS1_S1 + 9) =
                prefactor_z * *(b + 452 * OS1_S1 + 3) -
                p_over_q * *(b + 557 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 361 * OS1_S1 + 3) +
                one_over_two_q * *(b + 452 * OS1_S1 + 0);
            *(b + 453 * OS1_S1 + 4) = prefactor_x * *(b + 453 * OS1_S1 + 1) -
                                      p_over_q * *(b + 544 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 453 * OS1_S1 + 0);
            *(b + 453 * OS1_S1 + 5) = prefactor_x * *(b + 453 * OS1_S1 + 2) -
                                      p_over_q * *(b + 544 * OS1_S1 + 2);
            *(b + 453 * OS1_S1 + 6) = prefactor_x * *(b + 453 * OS1_S1 + 3) -
                                      p_over_q * *(b + 544 * OS1_S1 + 3);
            *(b + 453 * OS1_S1 + 7) = prefactor_y * *(b + 453 * OS1_S1 + 2) -
                                      p_over_q * *(b + 557 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 363 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 453 * OS1_S1 + 0);
            *(b + 453 * OS1_S1 + 8) = prefactor_y * *(b + 453 * OS1_S1 + 3) -
                                      p_over_q * *(b + 557 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 363 * OS1_S1 + 3);
            *(b + 453 * OS1_S1 + 9) =
                prefactor_z * *(b + 453 * OS1_S1 + 3) -
                p_over_q * *(b + 558 * OS1_S1 + 3) +
                11 * one_over_two_q * *(b + 362 * OS1_S1 + 3) +
                one_over_two_q * *(b + 453 * OS1_S1 + 0);
            *(b + 454 * OS1_S1 + 4) = prefactor_x * *(b + 454 * OS1_S1 + 1) -
                                      p_over_q * *(b + 545 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 454 * OS1_S1 + 0);
            *(b + 454 * OS1_S1 + 5) = prefactor_y * *(b + 454 * OS1_S1 + 1) -
                                      p_over_q * *(b + 558 * OS1_S1 + 1);
            *(b + 454 * OS1_S1 + 6) = prefactor_x * *(b + 454 * OS1_S1 + 3) -
                                      p_over_q * *(b + 545 * OS1_S1 + 3);
            *(b + 454 * OS1_S1 + 7) = prefactor_y * *(b + 454 * OS1_S1 + 2) -
                                      p_over_q * *(b + 558 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 454 * OS1_S1 + 0);
            *(b + 454 * OS1_S1 + 8) = prefactor_y * *(b + 454 * OS1_S1 + 3) -
                                      p_over_q * *(b + 558 * OS1_S1 + 3);
            *(b + 454 * OS1_S1 + 9) =
                prefactor_z * *(b + 454 * OS1_S1 + 3) -
                p_over_q * *(b + 559 * OS1_S1 + 3) +
                12 * one_over_two_q * *(b + 363 * OS1_S1 + 3) +
                one_over_two_q * *(b + 454 * OS1_S1 + 0);
            return;
        }

        void transfer_13_2(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 455 * OS1_S1 + 4) =
                prefactor_x * *(b + 455 * OS1_S1 + 1) -
                p_over_q * *(b + 560 * OS1_S1 + 1) +
                13 * one_over_two_q * *(b + 364 * OS1_S1 + 1) +
                one_over_two_q * *(b + 455 * OS1_S1 + 0);
            *(b + 455 * OS1_S1 + 5) = prefactor_y * *(b + 455 * OS1_S1 + 1) -
                                      p_over_q * *(b + 561 * OS1_S1 + 1);
            *(b + 455 * OS1_S1 + 6) = prefactor_z * *(b + 455 * OS1_S1 + 1) -
                                      p_over_q * *(b + 562 * OS1_S1 + 1);
            *(b + 455 * OS1_S1 + 7) = prefactor_y * *(b + 455 * OS1_S1 + 2) -
                                      p_over_q * *(b + 561 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 455 * OS1_S1 + 0);
            *(b + 455 * OS1_S1 + 8) = prefactor_z * *(b + 455 * OS1_S1 + 2) -
                                      p_over_q * *(b + 562 * OS1_S1 + 2);
            *(b + 455 * OS1_S1 + 9) = prefactor_z * *(b + 455 * OS1_S1 + 3) -
                                      p_over_q * *(b + 562 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 455 * OS1_S1 + 0);
            *(b + 456 * OS1_S1 + 4) =
                prefactor_x * *(b + 456 * OS1_S1 + 1) -
                p_over_q * *(b + 561 * OS1_S1 + 1) +
                12 * one_over_two_q * *(b + 365 * OS1_S1 + 1) +
                one_over_two_q * *(b + 456 * OS1_S1 + 0);
            *(b + 456 * OS1_S1 + 5) = prefactor_y * *(b + 456 * OS1_S1 + 1) -
                                      p_over_q * *(b + 563 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 364 * OS1_S1 + 1);
            *(b + 456 * OS1_S1 + 6) = prefactor_z * *(b + 456 * OS1_S1 + 1) -
                                      p_over_q * *(b + 564 * OS1_S1 + 1);
            *(b + 456 * OS1_S1 + 7) = prefactor_y * *(b + 456 * OS1_S1 + 2) -
                                      p_over_q * *(b + 563 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 364 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 456 * OS1_S1 + 0);
            *(b + 456 * OS1_S1 + 8) = prefactor_z * *(b + 456 * OS1_S1 + 2) -
                                      p_over_q * *(b + 564 * OS1_S1 + 2);
            *(b + 456 * OS1_S1 + 9) = prefactor_z * *(b + 456 * OS1_S1 + 3) -
                                      p_over_q * *(b + 564 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 456 * OS1_S1 + 0);
            *(b + 457 * OS1_S1 + 4) =
                prefactor_x * *(b + 457 * OS1_S1 + 1) -
                p_over_q * *(b + 562 * OS1_S1 + 1) +
                12 * one_over_two_q * *(b + 366 * OS1_S1 + 1) +
                one_over_two_q * *(b + 457 * OS1_S1 + 0);
            *(b + 457 * OS1_S1 + 5) = prefactor_y * *(b + 457 * OS1_S1 + 1) -
                                      p_over_q * *(b + 564 * OS1_S1 + 1);
            *(b + 457 * OS1_S1 + 6) = prefactor_z * *(b + 457 * OS1_S1 + 1) -
                                      p_over_q * *(b + 565 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 364 * OS1_S1 + 1);
            *(b + 457 * OS1_S1 + 7) = prefactor_y * *(b + 457 * OS1_S1 + 2) -
                                      p_over_q * *(b + 564 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 457 * OS1_S1 + 0);
            *(b + 457 * OS1_S1 + 8) = prefactor_y * *(b + 457 * OS1_S1 + 3) -
                                      p_over_q * *(b + 564 * OS1_S1 + 3);
            *(b + 457 * OS1_S1 + 9) = prefactor_z * *(b + 457 * OS1_S1 + 3) -
                                      p_over_q * *(b + 565 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 364 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 457 * OS1_S1 + 0);
            *(b + 458 * OS1_S1 + 4) =
                prefactor_x * *(b + 458 * OS1_S1 + 1) -
                p_over_q * *(b + 563 * OS1_S1 + 1) +
                11 * one_over_two_q * *(b + 367 * OS1_S1 + 1) +
                one_over_two_q * *(b + 458 * OS1_S1 + 0);
            *(b + 458 * OS1_S1 + 5) =
                prefactor_y * *(b + 458 * OS1_S1 + 1) -
                p_over_q * *(b + 566 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 365 * OS1_S1 + 1);
            *(b + 458 * OS1_S1 + 6) = prefactor_z * *(b + 458 * OS1_S1 + 1) -
                                      p_over_q * *(b + 567 * OS1_S1 + 1);
            *(b + 458 * OS1_S1 + 7) =
                prefactor_y * *(b + 458 * OS1_S1 + 2) -
                p_over_q * *(b + 566 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 365 * OS1_S1 + 2) +
                one_over_two_q * *(b + 458 * OS1_S1 + 0);
            *(b + 458 * OS1_S1 + 8) = prefactor_z * *(b + 458 * OS1_S1 + 2) -
                                      p_over_q * *(b + 567 * OS1_S1 + 2);
            *(b + 458 * OS1_S1 + 9) = prefactor_z * *(b + 458 * OS1_S1 + 3) -
                                      p_over_q * *(b + 567 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 458 * OS1_S1 + 0);
            *(b + 459 * OS1_S1 + 4) =
                prefactor_x * *(b + 459 * OS1_S1 + 1) -
                p_over_q * *(b + 564 * OS1_S1 + 1) +
                11 * one_over_two_q * *(b + 368 * OS1_S1 + 1) +
                one_over_two_q * *(b + 459 * OS1_S1 + 0);
            *(b + 459 * OS1_S1 + 5) = prefactor_y * *(b + 459 * OS1_S1 + 1) -
                                      p_over_q * *(b + 567 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 366 * OS1_S1 + 1);
            *(b + 459 * OS1_S1 + 6) = prefactor_z * *(b + 459 * OS1_S1 + 1) -
                                      p_over_q * *(b + 568 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 365 * OS1_S1 + 1);
            *(b + 459 * OS1_S1 + 7) = prefactor_y * *(b + 459 * OS1_S1 + 2) -
                                      p_over_q * *(b + 567 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 366 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 459 * OS1_S1 + 0);
            *(b + 459 * OS1_S1 + 8) = prefactor_z * *(b + 459 * OS1_S1 + 2) -
                                      p_over_q * *(b + 568 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 365 * OS1_S1 + 2);
            *(b + 459 * OS1_S1 + 9) = prefactor_z * *(b + 459 * OS1_S1 + 3) -
                                      p_over_q * *(b + 568 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 365 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 459 * OS1_S1 + 0);
            *(b + 460 * OS1_S1 + 4) =
                prefactor_x * *(b + 460 * OS1_S1 + 1) -
                p_over_q * *(b + 565 * OS1_S1 + 1) +
                11 * one_over_two_q * *(b + 369 * OS1_S1 + 1) +
                one_over_two_q * *(b + 460 * OS1_S1 + 0);
            *(b + 460 * OS1_S1 + 5) = prefactor_y * *(b + 460 * OS1_S1 + 1) -
                                      p_over_q * *(b + 568 * OS1_S1 + 1);
            *(b + 460 * OS1_S1 + 6) =
                prefactor_z * *(b + 460 * OS1_S1 + 1) -
                p_over_q * *(b + 569 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 366 * OS1_S1 + 1);
            *(b + 460 * OS1_S1 + 7) = prefactor_y * *(b + 460 * OS1_S1 + 2) -
                                      p_over_q * *(b + 568 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 460 * OS1_S1 + 0);
            *(b + 460 * OS1_S1 + 8) = prefactor_y * *(b + 460 * OS1_S1 + 3) -
                                      p_over_q * *(b + 568 * OS1_S1 + 3);
            *(b + 460 * OS1_S1 + 9) =
                prefactor_z * *(b + 460 * OS1_S1 + 3) -
                p_over_q * *(b + 569 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 366 * OS1_S1 + 3) +
                one_over_two_q * *(b + 460 * OS1_S1 + 0);
            *(b + 461 * OS1_S1 + 4) =
                prefactor_x * *(b + 461 * OS1_S1 + 1) -
                p_over_q * *(b + 566 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 370 * OS1_S1 + 1) +
                one_over_two_q * *(b + 461 * OS1_S1 + 0);
            *(b + 461 * OS1_S1 + 5) =
                prefactor_y * *(b + 461 * OS1_S1 + 1) -
                p_over_q * *(b + 570 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 367 * OS1_S1 + 1);
            *(b + 461 * OS1_S1 + 6) = prefactor_z * *(b + 461 * OS1_S1 + 1) -
                                      p_over_q * *(b + 571 * OS1_S1 + 1);
            *(b + 461 * OS1_S1 + 7) =
                prefactor_y * *(b + 461 * OS1_S1 + 2) -
                p_over_q * *(b + 570 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 367 * OS1_S1 + 2) +
                one_over_two_q * *(b + 461 * OS1_S1 + 0);
            *(b + 461 * OS1_S1 + 8) = prefactor_z * *(b + 461 * OS1_S1 + 2) -
                                      p_over_q * *(b + 571 * OS1_S1 + 2);
            *(b + 461 * OS1_S1 + 9) = prefactor_z * *(b + 461 * OS1_S1 + 3) -
                                      p_over_q * *(b + 571 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 461 * OS1_S1 + 0);
            *(b + 462 * OS1_S1 + 4) =
                prefactor_x * *(b + 462 * OS1_S1 + 1) -
                p_over_q * *(b + 567 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 371 * OS1_S1 + 1) +
                one_over_two_q * *(b + 462 * OS1_S1 + 0);
            *(b + 462 * OS1_S1 + 5) =
                prefactor_y * *(b + 462 * OS1_S1 + 1) -
                p_over_q * *(b + 571 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 368 * OS1_S1 + 1);
            *(b + 462 * OS1_S1 + 6) = prefactor_z * *(b + 462 * OS1_S1 + 1) -
                                      p_over_q * *(b + 572 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 367 * OS1_S1 + 1);
            *(b + 462 * OS1_S1 + 7) =
                prefactor_y * *(b + 462 * OS1_S1 + 2) -
                p_over_q * *(b + 571 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 368 * OS1_S1 + 2) +
                one_over_two_q * *(b + 462 * OS1_S1 + 0);
            *(b + 462 * OS1_S1 + 8) = prefactor_z * *(b + 462 * OS1_S1 + 2) -
                                      p_over_q * *(b + 572 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 367 * OS1_S1 + 2);
            *(b + 462 * OS1_S1 + 9) = prefactor_z * *(b + 462 * OS1_S1 + 3) -
                                      p_over_q * *(b + 572 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 367 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 462 * OS1_S1 + 0);
            *(b + 463 * OS1_S1 + 4) =
                prefactor_x * *(b + 463 * OS1_S1 + 1) -
                p_over_q * *(b + 568 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 372 * OS1_S1 + 1) +
                one_over_two_q * *(b + 463 * OS1_S1 + 0);
            *(b + 463 * OS1_S1 + 5) = prefactor_y * *(b + 463 * OS1_S1 + 1) -
                                      p_over_q * *(b + 572 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 369 * OS1_S1 + 1);
            *(b + 463 * OS1_S1 + 6) =
                prefactor_z * *(b + 463 * OS1_S1 + 1) -
                p_over_q * *(b + 573 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 368 * OS1_S1 + 1);
            *(b + 463 * OS1_S1 + 7) = prefactor_y * *(b + 463 * OS1_S1 + 2) -
                                      p_over_q * *(b + 572 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 369 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 463 * OS1_S1 + 0);
            *(b + 463 * OS1_S1 + 8) = prefactor_y * *(b + 463 * OS1_S1 + 3) -
                                      p_over_q * *(b + 572 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 369 * OS1_S1 + 3);
            *(b + 463 * OS1_S1 + 9) =
                prefactor_z * *(b + 463 * OS1_S1 + 3) -
                p_over_q * *(b + 573 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 368 * OS1_S1 + 3) +
                one_over_two_q * *(b + 463 * OS1_S1 + 0);
            *(b + 464 * OS1_S1 + 4) =
                prefactor_x * *(b + 464 * OS1_S1 + 1) -
                p_over_q * *(b + 569 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 373 * OS1_S1 + 1) +
                one_over_two_q * *(b + 464 * OS1_S1 + 0);
            *(b + 464 * OS1_S1 + 5) = prefactor_y * *(b + 464 * OS1_S1 + 1) -
                                      p_over_q * *(b + 573 * OS1_S1 + 1);
            *(b + 464 * OS1_S1 + 6) =
                prefactor_z * *(b + 464 * OS1_S1 + 1) -
                p_over_q * *(b + 574 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 369 * OS1_S1 + 1);
            *(b + 464 * OS1_S1 + 7) = prefactor_y * *(b + 464 * OS1_S1 + 2) -
                                      p_over_q * *(b + 573 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 464 * OS1_S1 + 0);
            *(b + 464 * OS1_S1 + 8) = prefactor_y * *(b + 464 * OS1_S1 + 3) -
                                      p_over_q * *(b + 573 * OS1_S1 + 3);
            *(b + 464 * OS1_S1 + 9) =
                prefactor_z * *(b + 464 * OS1_S1 + 3) -
                p_over_q * *(b + 574 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 369 * OS1_S1 + 3) +
                one_over_two_q * *(b + 464 * OS1_S1 + 0);
            *(b + 465 * OS1_S1 + 4) =
                prefactor_x * *(b + 465 * OS1_S1 + 1) -
                p_over_q * *(b + 570 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 374 * OS1_S1 + 1) +
                one_over_two_q * *(b + 465 * OS1_S1 + 0);
            *(b + 465 * OS1_S1 + 5) =
                prefactor_y * *(b + 465 * OS1_S1 + 1) -
                p_over_q * *(b + 575 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 370 * OS1_S1 + 1);
            *(b + 465 * OS1_S1 + 6) = prefactor_z * *(b + 465 * OS1_S1 + 1) -
                                      p_over_q * *(b + 576 * OS1_S1 + 1);
            *(b + 465 * OS1_S1 + 7) =
                prefactor_y * *(b + 465 * OS1_S1 + 2) -
                p_over_q * *(b + 575 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 370 * OS1_S1 + 2) +
                one_over_two_q * *(b + 465 * OS1_S1 + 0);
            *(b + 465 * OS1_S1 + 8) = prefactor_z * *(b + 465 * OS1_S1 + 2) -
                                      p_over_q * *(b + 576 * OS1_S1 + 2);
            *(b + 465 * OS1_S1 + 9) = prefactor_z * *(b + 465 * OS1_S1 + 3) -
                                      p_over_q * *(b + 576 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 465 * OS1_S1 + 0);
            *(b + 466 * OS1_S1 + 4) =
                prefactor_x * *(b + 466 * OS1_S1 + 1) -
                p_over_q * *(b + 571 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 375 * OS1_S1 + 1) +
                one_over_two_q * *(b + 466 * OS1_S1 + 0);
            *(b + 466 * OS1_S1 + 5) =
                prefactor_y * *(b + 466 * OS1_S1 + 1) -
                p_over_q * *(b + 576 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 371 * OS1_S1 + 1);
            *(b + 466 * OS1_S1 + 6) = prefactor_z * *(b + 466 * OS1_S1 + 1) -
                                      p_over_q * *(b + 577 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 370 * OS1_S1 + 1);
            *(b + 466 * OS1_S1 + 7) =
                prefactor_y * *(b + 466 * OS1_S1 + 2) -
                p_over_q * *(b + 576 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 371 * OS1_S1 + 2) +
                one_over_two_q * *(b + 466 * OS1_S1 + 0);
            *(b + 466 * OS1_S1 + 8) = prefactor_z * *(b + 466 * OS1_S1 + 2) -
                                      p_over_q * *(b + 577 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 370 * OS1_S1 + 2);
            *(b + 466 * OS1_S1 + 9) = prefactor_z * *(b + 466 * OS1_S1 + 3) -
                                      p_over_q * *(b + 577 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 370 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 466 * OS1_S1 + 0);
            *(b + 467 * OS1_S1 + 4) =
                prefactor_x * *(b + 467 * OS1_S1 + 1) -
                p_over_q * *(b + 572 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 376 * OS1_S1 + 1) +
                one_over_two_q * *(b + 467 * OS1_S1 + 0);
            *(b + 467 * OS1_S1 + 5) =
                prefactor_y * *(b + 467 * OS1_S1 + 1) -
                p_over_q * *(b + 577 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 372 * OS1_S1 + 1);
            *(b + 467 * OS1_S1 + 6) =
                prefactor_z * *(b + 467 * OS1_S1 + 1) -
                p_over_q * *(b + 578 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 371 * OS1_S1 + 1);
            *(b + 467 * OS1_S1 + 7) =
                prefactor_y * *(b + 467 * OS1_S1 + 2) -
                p_over_q * *(b + 577 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 372 * OS1_S1 + 2) +
                one_over_two_q * *(b + 467 * OS1_S1 + 0);
            *(b + 467 * OS1_S1 + 8) =
                prefactor_z * *(b + 467 * OS1_S1 + 2) -
                p_over_q * *(b + 578 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 371 * OS1_S1 + 2);
            *(b + 467 * OS1_S1 + 9) =
                prefactor_z * *(b + 467 * OS1_S1 + 3) -
                p_over_q * *(b + 578 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 371 * OS1_S1 + 3) +
                one_over_two_q * *(b + 467 * OS1_S1 + 0);
            *(b + 468 * OS1_S1 + 4) =
                prefactor_x * *(b + 468 * OS1_S1 + 1) -
                p_over_q * *(b + 573 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 377 * OS1_S1 + 1) +
                one_over_two_q * *(b + 468 * OS1_S1 + 0);
            *(b + 468 * OS1_S1 + 5) = prefactor_y * *(b + 468 * OS1_S1 + 1) -
                                      p_over_q * *(b + 578 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 373 * OS1_S1 + 1);
            *(b + 468 * OS1_S1 + 6) =
                prefactor_z * *(b + 468 * OS1_S1 + 1) -
                p_over_q * *(b + 579 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 372 * OS1_S1 + 1);
            *(b + 468 * OS1_S1 + 7) = prefactor_y * *(b + 468 * OS1_S1 + 2) -
                                      p_over_q * *(b + 578 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 373 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 468 * OS1_S1 + 0);
            *(b + 468 * OS1_S1 + 8) = prefactor_y * *(b + 468 * OS1_S1 + 3) -
                                      p_over_q * *(b + 578 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 373 * OS1_S1 + 3);
            *(b + 468 * OS1_S1 + 9) =
                prefactor_z * *(b + 468 * OS1_S1 + 3) -
                p_over_q * *(b + 579 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 372 * OS1_S1 + 3) +
                one_over_two_q * *(b + 468 * OS1_S1 + 0);
            *(b + 469 * OS1_S1 + 4) =
                prefactor_x * *(b + 469 * OS1_S1 + 1) -
                p_over_q * *(b + 574 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 378 * OS1_S1 + 1) +
                one_over_two_q * *(b + 469 * OS1_S1 + 0);
            *(b + 469 * OS1_S1 + 5) = prefactor_y * *(b + 469 * OS1_S1 + 1) -
                                      p_over_q * *(b + 579 * OS1_S1 + 1);
            *(b + 469 * OS1_S1 + 6) =
                prefactor_z * *(b + 469 * OS1_S1 + 1) -
                p_over_q * *(b + 580 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 373 * OS1_S1 + 1);
            *(b + 469 * OS1_S1 + 7) = prefactor_y * *(b + 469 * OS1_S1 + 2) -
                                      p_over_q * *(b + 579 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 469 * OS1_S1 + 0);
            *(b + 469 * OS1_S1 + 8) = prefactor_y * *(b + 469 * OS1_S1 + 3) -
                                      p_over_q * *(b + 579 * OS1_S1 + 3);
            *(b + 469 * OS1_S1 + 9) =
                prefactor_z * *(b + 469 * OS1_S1 + 3) -
                p_over_q * *(b + 580 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 373 * OS1_S1 + 3) +
                one_over_two_q * *(b + 469 * OS1_S1 + 0);
            *(b + 470 * OS1_S1 + 4) =
                prefactor_x * *(b + 470 * OS1_S1 + 1) -
                p_over_q * *(b + 575 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 379 * OS1_S1 + 1) +
                one_over_two_q * *(b + 470 * OS1_S1 + 0);
            *(b + 470 * OS1_S1 + 5) =
                prefactor_y * *(b + 470 * OS1_S1 + 1) -
                p_over_q * *(b + 581 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 374 * OS1_S1 + 1);
            *(b + 470 * OS1_S1 + 6) = prefactor_z * *(b + 470 * OS1_S1 + 1) -
                                      p_over_q * *(b + 582 * OS1_S1 + 1);
            *(b + 470 * OS1_S1 + 7) =
                prefactor_y * *(b + 470 * OS1_S1 + 2) -
                p_over_q * *(b + 581 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 374 * OS1_S1 + 2) +
                one_over_two_q * *(b + 470 * OS1_S1 + 0);
            *(b + 470 * OS1_S1 + 8) = prefactor_z * *(b + 470 * OS1_S1 + 2) -
                                      p_over_q * *(b + 582 * OS1_S1 + 2);
            *(b + 470 * OS1_S1 + 9) = prefactor_z * *(b + 470 * OS1_S1 + 3) -
                                      p_over_q * *(b + 582 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 470 * OS1_S1 + 0);
            *(b + 471 * OS1_S1 + 4) =
                prefactor_x * *(b + 471 * OS1_S1 + 1) -
                p_over_q * *(b + 576 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 380 * OS1_S1 + 1) +
                one_over_two_q * *(b + 471 * OS1_S1 + 0);
            *(b + 471 * OS1_S1 + 5) =
                prefactor_y * *(b + 471 * OS1_S1 + 1) -
                p_over_q * *(b + 582 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 375 * OS1_S1 + 1);
            *(b + 471 * OS1_S1 + 6) = prefactor_z * *(b + 471 * OS1_S1 + 1) -
                                      p_over_q * *(b + 583 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 374 * OS1_S1 + 1);
            *(b + 471 * OS1_S1 + 7) =
                prefactor_y * *(b + 471 * OS1_S1 + 2) -
                p_over_q * *(b + 582 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 375 * OS1_S1 + 2) +
                one_over_two_q * *(b + 471 * OS1_S1 + 0);
            *(b + 471 * OS1_S1 + 8) = prefactor_z * *(b + 471 * OS1_S1 + 2) -
                                      p_over_q * *(b + 583 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 374 * OS1_S1 + 2);
            *(b + 471 * OS1_S1 + 9) = prefactor_z * *(b + 471 * OS1_S1 + 3) -
                                      p_over_q * *(b + 583 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 374 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 471 * OS1_S1 + 0);
            *(b + 472 * OS1_S1 + 4) =
                prefactor_x * *(b + 472 * OS1_S1 + 1) -
                p_over_q * *(b + 577 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 381 * OS1_S1 + 1) +
                one_over_two_q * *(b + 472 * OS1_S1 + 0);
            *(b + 472 * OS1_S1 + 5) =
                prefactor_y * *(b + 472 * OS1_S1 + 1) -
                p_over_q * *(b + 583 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 376 * OS1_S1 + 1);
            *(b + 472 * OS1_S1 + 6) =
                prefactor_z * *(b + 472 * OS1_S1 + 1) -
                p_over_q * *(b + 584 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 375 * OS1_S1 + 1);
            *(b + 472 * OS1_S1 + 7) =
                prefactor_y * *(b + 472 * OS1_S1 + 2) -
                p_over_q * *(b + 583 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 376 * OS1_S1 + 2) +
                one_over_two_q * *(b + 472 * OS1_S1 + 0);
            *(b + 472 * OS1_S1 + 8) =
                prefactor_z * *(b + 472 * OS1_S1 + 2) -
                p_over_q * *(b + 584 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 375 * OS1_S1 + 2);
            *(b + 472 * OS1_S1 + 9) =
                prefactor_z * *(b + 472 * OS1_S1 + 3) -
                p_over_q * *(b + 584 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 375 * OS1_S1 + 3) +
                one_over_two_q * *(b + 472 * OS1_S1 + 0);
            *(b + 473 * OS1_S1 + 4) =
                prefactor_x * *(b + 473 * OS1_S1 + 1) -
                p_over_q * *(b + 578 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 382 * OS1_S1 + 1) +
                one_over_two_q * *(b + 473 * OS1_S1 + 0);
            *(b + 473 * OS1_S1 + 5) =
                prefactor_y * *(b + 473 * OS1_S1 + 1) -
                p_over_q * *(b + 584 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 377 * OS1_S1 + 1);
            *(b + 473 * OS1_S1 + 6) =
                prefactor_z * *(b + 473 * OS1_S1 + 1) -
                p_over_q * *(b + 585 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 376 * OS1_S1 + 1);
            *(b + 473 * OS1_S1 + 7) =
                prefactor_y * *(b + 473 * OS1_S1 + 2) -
                p_over_q * *(b + 584 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 377 * OS1_S1 + 2) +
                one_over_two_q * *(b + 473 * OS1_S1 + 0);
            *(b + 473 * OS1_S1 + 8) =
                prefactor_y * *(b + 473 * OS1_S1 + 3) -
                p_over_q * *(b + 584 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 377 * OS1_S1 + 3);
            *(b + 473 * OS1_S1 + 9) =
                prefactor_z * *(b + 473 * OS1_S1 + 3) -
                p_over_q * *(b + 585 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 376 * OS1_S1 + 3) +
                one_over_two_q * *(b + 473 * OS1_S1 + 0);
            *(b + 474 * OS1_S1 + 4) =
                prefactor_x * *(b + 474 * OS1_S1 + 1) -
                p_over_q * *(b + 579 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 383 * OS1_S1 + 1) +
                one_over_two_q * *(b + 474 * OS1_S1 + 0);
            *(b + 474 * OS1_S1 + 5) = prefactor_y * *(b + 474 * OS1_S1 + 1) -
                                      p_over_q * *(b + 585 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 378 * OS1_S1 + 1);
            *(b + 474 * OS1_S1 + 6) =
                prefactor_z * *(b + 474 * OS1_S1 + 1) -
                p_over_q * *(b + 586 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 377 * OS1_S1 + 1);
            *(b + 474 * OS1_S1 + 7) = prefactor_y * *(b + 474 * OS1_S1 + 2) -
                                      p_over_q * *(b + 585 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 378 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 474 * OS1_S1 + 0);
            *(b + 474 * OS1_S1 + 8) = prefactor_y * *(b + 474 * OS1_S1 + 3) -
                                      p_over_q * *(b + 585 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 378 * OS1_S1 + 3);
            *(b + 474 * OS1_S1 + 9) =
                prefactor_z * *(b + 474 * OS1_S1 + 3) -
                p_over_q * *(b + 586 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 377 * OS1_S1 + 3) +
                one_over_two_q * *(b + 474 * OS1_S1 + 0);
            *(b + 475 * OS1_S1 + 4) =
                prefactor_x * *(b + 475 * OS1_S1 + 1) -
                p_over_q * *(b + 580 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 384 * OS1_S1 + 1) +
                one_over_two_q * *(b + 475 * OS1_S1 + 0);
            *(b + 475 * OS1_S1 + 5) = prefactor_y * *(b + 475 * OS1_S1 + 1) -
                                      p_over_q * *(b + 586 * OS1_S1 + 1);
            *(b + 475 * OS1_S1 + 6) =
                prefactor_z * *(b + 475 * OS1_S1 + 1) -
                p_over_q * *(b + 587 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 378 * OS1_S1 + 1);
            *(b + 475 * OS1_S1 + 7) = prefactor_y * *(b + 475 * OS1_S1 + 2) -
                                      p_over_q * *(b + 586 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 475 * OS1_S1 + 0);
            *(b + 475 * OS1_S1 + 8) = prefactor_y * *(b + 475 * OS1_S1 + 3) -
                                      p_over_q * *(b + 586 * OS1_S1 + 3);
            *(b + 475 * OS1_S1 + 9) =
                prefactor_z * *(b + 475 * OS1_S1 + 3) -
                p_over_q * *(b + 587 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 378 * OS1_S1 + 3) +
                one_over_two_q * *(b + 475 * OS1_S1 + 0);
            *(b + 476 * OS1_S1 + 4) =
                prefactor_x * *(b + 476 * OS1_S1 + 1) -
                p_over_q * *(b + 581 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 385 * OS1_S1 + 1) +
                one_over_two_q * *(b + 476 * OS1_S1 + 0);
            *(b + 476 * OS1_S1 + 5) =
                prefactor_y * *(b + 476 * OS1_S1 + 1) -
                p_over_q * *(b + 588 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 379 * OS1_S1 + 1);
            *(b + 476 * OS1_S1 + 6) = prefactor_z * *(b + 476 * OS1_S1 + 1) -
                                      p_over_q * *(b + 589 * OS1_S1 + 1);
            *(b + 476 * OS1_S1 + 7) =
                prefactor_y * *(b + 476 * OS1_S1 + 2) -
                p_over_q * *(b + 588 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 379 * OS1_S1 + 2) +
                one_over_two_q * *(b + 476 * OS1_S1 + 0);
            *(b + 476 * OS1_S1 + 8) = prefactor_z * *(b + 476 * OS1_S1 + 2) -
                                      p_over_q * *(b + 589 * OS1_S1 + 2);
            *(b + 476 * OS1_S1 + 9) = prefactor_z * *(b + 476 * OS1_S1 + 3) -
                                      p_over_q * *(b + 589 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 476 * OS1_S1 + 0);
            *(b + 477 * OS1_S1 + 4) =
                prefactor_x * *(b + 477 * OS1_S1 + 1) -
                p_over_q * *(b + 582 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 386 * OS1_S1 + 1) +
                one_over_two_q * *(b + 477 * OS1_S1 + 0);
            *(b + 477 * OS1_S1 + 5) =
                prefactor_y * *(b + 477 * OS1_S1 + 1) -
                p_over_q * *(b + 589 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 380 * OS1_S1 + 1);
            *(b + 477 * OS1_S1 + 6) = prefactor_z * *(b + 477 * OS1_S1 + 1) -
                                      p_over_q * *(b + 590 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 379 * OS1_S1 + 1);
            *(b + 477 * OS1_S1 + 7) =
                prefactor_y * *(b + 477 * OS1_S1 + 2) -
                p_over_q * *(b + 589 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 380 * OS1_S1 + 2) +
                one_over_two_q * *(b + 477 * OS1_S1 + 0);
            *(b + 477 * OS1_S1 + 8) = prefactor_z * *(b + 477 * OS1_S1 + 2) -
                                      p_over_q * *(b + 590 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 379 * OS1_S1 + 2);
            *(b + 477 * OS1_S1 + 9) = prefactor_z * *(b + 477 * OS1_S1 + 3) -
                                      p_over_q * *(b + 590 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 379 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 477 * OS1_S1 + 0);
            *(b + 478 * OS1_S1 + 4) =
                prefactor_x * *(b + 478 * OS1_S1 + 1) -
                p_over_q * *(b + 583 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 387 * OS1_S1 + 1) +
                one_over_two_q * *(b + 478 * OS1_S1 + 0);
            *(b + 478 * OS1_S1 + 5) =
                prefactor_y * *(b + 478 * OS1_S1 + 1) -
                p_over_q * *(b + 590 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 381 * OS1_S1 + 1);
            *(b + 478 * OS1_S1 + 6) =
                prefactor_z * *(b + 478 * OS1_S1 + 1) -
                p_over_q * *(b + 591 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 380 * OS1_S1 + 1);
            *(b + 478 * OS1_S1 + 7) =
                prefactor_y * *(b + 478 * OS1_S1 + 2) -
                p_over_q * *(b + 590 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 381 * OS1_S1 + 2) +
                one_over_two_q * *(b + 478 * OS1_S1 + 0);
            *(b + 478 * OS1_S1 + 8) =
                prefactor_z * *(b + 478 * OS1_S1 + 2) -
                p_over_q * *(b + 591 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 380 * OS1_S1 + 2);
            *(b + 478 * OS1_S1 + 9) =
                prefactor_z * *(b + 478 * OS1_S1 + 3) -
                p_over_q * *(b + 591 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 380 * OS1_S1 + 3) +
                one_over_two_q * *(b + 478 * OS1_S1 + 0);
            *(b + 479 * OS1_S1 + 4) =
                prefactor_x * *(b + 479 * OS1_S1 + 1) -
                p_over_q * *(b + 584 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 388 * OS1_S1 + 1) +
                one_over_two_q * *(b + 479 * OS1_S1 + 0);
            *(b + 479 * OS1_S1 + 5) =
                prefactor_y * *(b + 479 * OS1_S1 + 1) -
                p_over_q * *(b + 591 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 382 * OS1_S1 + 1);
            *(b + 479 * OS1_S1 + 6) =
                prefactor_z * *(b + 479 * OS1_S1 + 1) -
                p_over_q * *(b + 592 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 381 * OS1_S1 + 1);
            *(b + 479 * OS1_S1 + 7) =
                prefactor_y * *(b + 479 * OS1_S1 + 2) -
                p_over_q * *(b + 591 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 382 * OS1_S1 + 2) +
                one_over_two_q * *(b + 479 * OS1_S1 + 0);
            *(b + 479 * OS1_S1 + 8) =
                prefactor_z * *(b + 479 * OS1_S1 + 2) -
                p_over_q * *(b + 592 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 381 * OS1_S1 + 2);
            *(b + 479 * OS1_S1 + 9) =
                prefactor_z * *(b + 479 * OS1_S1 + 3) -
                p_over_q * *(b + 592 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 381 * OS1_S1 + 3) +
                one_over_two_q * *(b + 479 * OS1_S1 + 0);
            *(b + 480 * OS1_S1 + 4) =
                prefactor_x * *(b + 480 * OS1_S1 + 1) -
                p_over_q * *(b + 585 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 389 * OS1_S1 + 1) +
                one_over_two_q * *(b + 480 * OS1_S1 + 0);
            *(b + 480 * OS1_S1 + 5) =
                prefactor_y * *(b + 480 * OS1_S1 + 1) -
                p_over_q * *(b + 592 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 383 * OS1_S1 + 1);
            *(b + 480 * OS1_S1 + 6) =
                prefactor_z * *(b + 480 * OS1_S1 + 1) -
                p_over_q * *(b + 593 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 382 * OS1_S1 + 1);
            *(b + 480 * OS1_S1 + 7) =
                prefactor_y * *(b + 480 * OS1_S1 + 2) -
                p_over_q * *(b + 592 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 383 * OS1_S1 + 2) +
                one_over_two_q * *(b + 480 * OS1_S1 + 0);
            *(b + 480 * OS1_S1 + 8) =
                prefactor_y * *(b + 480 * OS1_S1 + 3) -
                p_over_q * *(b + 592 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 383 * OS1_S1 + 3);
            *(b + 480 * OS1_S1 + 9) =
                prefactor_z * *(b + 480 * OS1_S1 + 3) -
                p_over_q * *(b + 593 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 382 * OS1_S1 + 3) +
                one_over_two_q * *(b + 480 * OS1_S1 + 0);
            *(b + 481 * OS1_S1 + 4) =
                prefactor_x * *(b + 481 * OS1_S1 + 1) -
                p_over_q * *(b + 586 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 390 * OS1_S1 + 1) +
                one_over_two_q * *(b + 481 * OS1_S1 + 0);
            *(b + 481 * OS1_S1 + 5) = prefactor_y * *(b + 481 * OS1_S1 + 1) -
                                      p_over_q * *(b + 593 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 384 * OS1_S1 + 1);
            *(b + 481 * OS1_S1 + 6) =
                prefactor_z * *(b + 481 * OS1_S1 + 1) -
                p_over_q * *(b + 594 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 383 * OS1_S1 + 1);
            *(b + 481 * OS1_S1 + 7) = prefactor_y * *(b + 481 * OS1_S1 + 2) -
                                      p_over_q * *(b + 593 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 384 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 481 * OS1_S1 + 0);
            *(b + 481 * OS1_S1 + 8) = prefactor_y * *(b + 481 * OS1_S1 + 3) -
                                      p_over_q * *(b + 593 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 384 * OS1_S1 + 3);
            *(b + 481 * OS1_S1 + 9) =
                prefactor_z * *(b + 481 * OS1_S1 + 3) -
                p_over_q * *(b + 594 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 383 * OS1_S1 + 3) +
                one_over_two_q * *(b + 481 * OS1_S1 + 0);
            *(b + 482 * OS1_S1 + 4) =
                prefactor_x * *(b + 482 * OS1_S1 + 1) -
                p_over_q * *(b + 587 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 391 * OS1_S1 + 1) +
                one_over_two_q * *(b + 482 * OS1_S1 + 0);
            *(b + 482 * OS1_S1 + 5) = prefactor_y * *(b + 482 * OS1_S1 + 1) -
                                      p_over_q * *(b + 594 * OS1_S1 + 1);
            *(b + 482 * OS1_S1 + 6) =
                prefactor_z * *(b + 482 * OS1_S1 + 1) -
                p_over_q * *(b + 595 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 384 * OS1_S1 + 1);
            *(b + 482 * OS1_S1 + 7) = prefactor_y * *(b + 482 * OS1_S1 + 2) -
                                      p_over_q * *(b + 594 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 482 * OS1_S1 + 0);
            *(b + 482 * OS1_S1 + 8) = prefactor_y * *(b + 482 * OS1_S1 + 3) -
                                      p_over_q * *(b + 594 * OS1_S1 + 3);
            *(b + 482 * OS1_S1 + 9) =
                prefactor_z * *(b + 482 * OS1_S1 + 3) -
                p_over_q * *(b + 595 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 384 * OS1_S1 + 3) +
                one_over_two_q * *(b + 482 * OS1_S1 + 0);
            *(b + 483 * OS1_S1 + 4) =
                prefactor_x * *(b + 483 * OS1_S1 + 1) -
                p_over_q * *(b + 588 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 392 * OS1_S1 + 1) +
                one_over_two_q * *(b + 483 * OS1_S1 + 0);
            *(b + 483 * OS1_S1 + 5) =
                prefactor_x * *(b + 483 * OS1_S1 + 2) -
                p_over_q * *(b + 588 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 392 * OS1_S1 + 2);
            *(b + 483 * OS1_S1 + 6) = prefactor_z * *(b + 483 * OS1_S1 + 1) -
                                      p_over_q * *(b + 597 * OS1_S1 + 1);
            *(b + 483 * OS1_S1 + 7) =
                prefactor_y * *(b + 483 * OS1_S1 + 2) -
                p_over_q * *(b + 596 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 385 * OS1_S1 + 2) +
                one_over_two_q * *(b + 483 * OS1_S1 + 0);
            *(b + 483 * OS1_S1 + 8) = prefactor_z * *(b + 483 * OS1_S1 + 2) -
                                      p_over_q * *(b + 597 * OS1_S1 + 2);
            *(b + 483 * OS1_S1 + 9) = prefactor_z * *(b + 483 * OS1_S1 + 3) -
                                      p_over_q * *(b + 597 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 483 * OS1_S1 + 0);
            *(b + 484 * OS1_S1 + 4) =
                prefactor_x * *(b + 484 * OS1_S1 + 1) -
                p_over_q * *(b + 589 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 393 * OS1_S1 + 1) +
                one_over_two_q * *(b + 484 * OS1_S1 + 0);
            *(b + 484 * OS1_S1 + 5) =
                prefactor_y * *(b + 484 * OS1_S1 + 1) -
                p_over_q * *(b + 597 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 386 * OS1_S1 + 1);
            *(b + 484 * OS1_S1 + 6) = prefactor_z * *(b + 484 * OS1_S1 + 1) -
                                      p_over_q * *(b + 598 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 385 * OS1_S1 + 1);
            *(b + 484 * OS1_S1 + 7) =
                prefactor_y * *(b + 484 * OS1_S1 + 2) -
                p_over_q * *(b + 597 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 386 * OS1_S1 + 2) +
                one_over_two_q * *(b + 484 * OS1_S1 + 0);
            *(b + 484 * OS1_S1 + 8) = prefactor_z * *(b + 484 * OS1_S1 + 2) -
                                      p_over_q * *(b + 598 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 385 * OS1_S1 + 2);
            *(b + 484 * OS1_S1 + 9) = prefactor_z * *(b + 484 * OS1_S1 + 3) -
                                      p_over_q * *(b + 598 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 385 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 484 * OS1_S1 + 0);
            *(b + 485 * OS1_S1 + 4) =
                prefactor_x * *(b + 485 * OS1_S1 + 1) -
                p_over_q * *(b + 590 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 394 * OS1_S1 + 1) +
                one_over_two_q * *(b + 485 * OS1_S1 + 0);
            *(b + 485 * OS1_S1 + 5) =
                prefactor_y * *(b + 485 * OS1_S1 + 1) -
                p_over_q * *(b + 598 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 387 * OS1_S1 + 1);
            *(b + 485 * OS1_S1 + 6) =
                prefactor_z * *(b + 485 * OS1_S1 + 1) -
                p_over_q * *(b + 599 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 386 * OS1_S1 + 1);
            *(b + 485 * OS1_S1 + 7) =
                prefactor_y * *(b + 485 * OS1_S1 + 2) -
                p_over_q * *(b + 598 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 387 * OS1_S1 + 2) +
                one_over_two_q * *(b + 485 * OS1_S1 + 0);
            *(b + 485 * OS1_S1 + 8) =
                prefactor_z * *(b + 485 * OS1_S1 + 2) -
                p_over_q * *(b + 599 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 386 * OS1_S1 + 2);
            *(b + 485 * OS1_S1 + 9) =
                prefactor_z * *(b + 485 * OS1_S1 + 3) -
                p_over_q * *(b + 599 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 386 * OS1_S1 + 3) +
                one_over_two_q * *(b + 485 * OS1_S1 + 0);
            *(b + 486 * OS1_S1 + 4) =
                prefactor_x * *(b + 486 * OS1_S1 + 1) -
                p_over_q * *(b + 591 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 395 * OS1_S1 + 1) +
                one_over_two_q * *(b + 486 * OS1_S1 + 0);
            *(b + 486 * OS1_S1 + 5) =
                prefactor_y * *(b + 486 * OS1_S1 + 1) -
                p_over_q * *(b + 599 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 388 * OS1_S1 + 1);
            *(b + 486 * OS1_S1 + 6) =
                prefactor_z * *(b + 486 * OS1_S1 + 1) -
                p_over_q * *(b + 600 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 387 * OS1_S1 + 1);
            *(b + 486 * OS1_S1 + 7) =
                prefactor_y * *(b + 486 * OS1_S1 + 2) -
                p_over_q * *(b + 599 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 388 * OS1_S1 + 2) +
                one_over_two_q * *(b + 486 * OS1_S1 + 0);
            *(b + 486 * OS1_S1 + 8) =
                prefactor_z * *(b + 486 * OS1_S1 + 2) -
                p_over_q * *(b + 600 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 387 * OS1_S1 + 2);
            *(b + 486 * OS1_S1 + 9) =
                prefactor_z * *(b + 486 * OS1_S1 + 3) -
                p_over_q * *(b + 600 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 387 * OS1_S1 + 3) +
                one_over_two_q * *(b + 486 * OS1_S1 + 0);
            *(b + 487 * OS1_S1 + 4) =
                prefactor_x * *(b + 487 * OS1_S1 + 1) -
                p_over_q * *(b + 592 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 396 * OS1_S1 + 1) +
                one_over_two_q * *(b + 487 * OS1_S1 + 0);
            *(b + 487 * OS1_S1 + 5) =
                prefactor_y * *(b + 487 * OS1_S1 + 1) -
                p_over_q * *(b + 600 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 389 * OS1_S1 + 1);
            *(b + 487 * OS1_S1 + 6) =
                prefactor_z * *(b + 487 * OS1_S1 + 1) -
                p_over_q * *(b + 601 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 388 * OS1_S1 + 1);
            *(b + 487 * OS1_S1 + 7) =
                prefactor_y * *(b + 487 * OS1_S1 + 2) -
                p_over_q * *(b + 600 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 389 * OS1_S1 + 2) +
                one_over_two_q * *(b + 487 * OS1_S1 + 0);
            *(b + 487 * OS1_S1 + 8) =
                prefactor_y * *(b + 487 * OS1_S1 + 3) -
                p_over_q * *(b + 600 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 389 * OS1_S1 + 3);
            *(b + 487 * OS1_S1 + 9) =
                prefactor_z * *(b + 487 * OS1_S1 + 3) -
                p_over_q * *(b + 601 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 388 * OS1_S1 + 3) +
                one_over_two_q * *(b + 487 * OS1_S1 + 0);
            *(b + 488 * OS1_S1 + 4) =
                prefactor_x * *(b + 488 * OS1_S1 + 1) -
                p_over_q * *(b + 593 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 397 * OS1_S1 + 1) +
                one_over_two_q * *(b + 488 * OS1_S1 + 0);
            *(b + 488 * OS1_S1 + 5) =
                prefactor_y * *(b + 488 * OS1_S1 + 1) -
                p_over_q * *(b + 601 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 390 * OS1_S1 + 1);
            *(b + 488 * OS1_S1 + 6) =
                prefactor_z * *(b + 488 * OS1_S1 + 1) -
                p_over_q * *(b + 602 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 389 * OS1_S1 + 1);
            *(b + 488 * OS1_S1 + 7) =
                prefactor_y * *(b + 488 * OS1_S1 + 2) -
                p_over_q * *(b + 601 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 390 * OS1_S1 + 2) +
                one_over_two_q * *(b + 488 * OS1_S1 + 0);
            *(b + 488 * OS1_S1 + 8) =
                prefactor_y * *(b + 488 * OS1_S1 + 3) -
                p_over_q * *(b + 601 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 390 * OS1_S1 + 3);
            *(b + 488 * OS1_S1 + 9) =
                prefactor_z * *(b + 488 * OS1_S1 + 3) -
                p_over_q * *(b + 602 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 389 * OS1_S1 + 3) +
                one_over_two_q * *(b + 488 * OS1_S1 + 0);
            *(b + 489 * OS1_S1 + 4) =
                prefactor_x * *(b + 489 * OS1_S1 + 1) -
                p_over_q * *(b + 594 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 398 * OS1_S1 + 1) +
                one_over_two_q * *(b + 489 * OS1_S1 + 0);
            *(b + 489 * OS1_S1 + 5) = prefactor_y * *(b + 489 * OS1_S1 + 1) -
                                      p_over_q * *(b + 602 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 391 * OS1_S1 + 1);
            *(b + 489 * OS1_S1 + 6) =
                prefactor_z * *(b + 489 * OS1_S1 + 1) -
                p_over_q * *(b + 603 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 390 * OS1_S1 + 1);
            *(b + 489 * OS1_S1 + 7) = prefactor_y * *(b + 489 * OS1_S1 + 2) -
                                      p_over_q * *(b + 602 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 391 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 489 * OS1_S1 + 0);
            *(b + 489 * OS1_S1 + 8) = prefactor_y * *(b + 489 * OS1_S1 + 3) -
                                      p_over_q * *(b + 602 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 391 * OS1_S1 + 3);
            *(b + 489 * OS1_S1 + 9) =
                prefactor_z * *(b + 489 * OS1_S1 + 3) -
                p_over_q * *(b + 603 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 390 * OS1_S1 + 3) +
                one_over_two_q * *(b + 489 * OS1_S1 + 0);
            *(b + 490 * OS1_S1 + 4) =
                prefactor_x * *(b + 490 * OS1_S1 + 1) -
                p_over_q * *(b + 595 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 399 * OS1_S1 + 1) +
                one_over_two_q * *(b + 490 * OS1_S1 + 0);
            *(b + 490 * OS1_S1 + 5) = prefactor_y * *(b + 490 * OS1_S1 + 1) -
                                      p_over_q * *(b + 603 * OS1_S1 + 1);
            *(b + 490 * OS1_S1 + 6) =
                prefactor_x * *(b + 490 * OS1_S1 + 3) -
                p_over_q * *(b + 595 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 399 * OS1_S1 + 3);
            *(b + 490 * OS1_S1 + 7) = prefactor_y * *(b + 490 * OS1_S1 + 2) -
                                      p_over_q * *(b + 603 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 490 * OS1_S1 + 0);
            *(b + 490 * OS1_S1 + 8) = prefactor_y * *(b + 490 * OS1_S1 + 3) -
                                      p_over_q * *(b + 603 * OS1_S1 + 3);
            *(b + 490 * OS1_S1 + 9) =
                prefactor_z * *(b + 490 * OS1_S1 + 3) -
                p_over_q * *(b + 604 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 391 * OS1_S1 + 3) +
                one_over_two_q * *(b + 490 * OS1_S1 + 0);
            *(b + 491 * OS1_S1 + 4) =
                prefactor_x * *(b + 491 * OS1_S1 + 1) -
                p_over_q * *(b + 596 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 400 * OS1_S1 + 1) +
                one_over_two_q * *(b + 491 * OS1_S1 + 0);
            *(b + 491 * OS1_S1 + 5) =
                prefactor_x * *(b + 491 * OS1_S1 + 2) -
                p_over_q * *(b + 596 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 400 * OS1_S1 + 2);
            *(b + 491 * OS1_S1 + 6) = prefactor_z * *(b + 491 * OS1_S1 + 1) -
                                      p_over_q * *(b + 606 * OS1_S1 + 1);
            *(b + 491 * OS1_S1 + 7) =
                prefactor_y * *(b + 491 * OS1_S1 + 2) -
                p_over_q * *(b + 605 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 392 * OS1_S1 + 2) +
                one_over_two_q * *(b + 491 * OS1_S1 + 0);
            *(b + 491 * OS1_S1 + 8) = prefactor_z * *(b + 491 * OS1_S1 + 2) -
                                      p_over_q * *(b + 606 * OS1_S1 + 2);
            *(b + 491 * OS1_S1 + 9) = prefactor_z * *(b + 491 * OS1_S1 + 3) -
                                      p_over_q * *(b + 606 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 491 * OS1_S1 + 0);
            *(b + 492 * OS1_S1 + 4) =
                prefactor_x * *(b + 492 * OS1_S1 + 1) -
                p_over_q * *(b + 597 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 401 * OS1_S1 + 1) +
                one_over_two_q * *(b + 492 * OS1_S1 + 0);
            *(b + 492 * OS1_S1 + 5) =
                prefactor_x * *(b + 492 * OS1_S1 + 2) -
                p_over_q * *(b + 597 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 401 * OS1_S1 + 2);
            *(b + 492 * OS1_S1 + 6) = prefactor_z * *(b + 492 * OS1_S1 + 1) -
                                      p_over_q * *(b + 607 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 392 * OS1_S1 + 1);
            *(b + 492 * OS1_S1 + 7) =
                prefactor_y * *(b + 492 * OS1_S1 + 2) -
                p_over_q * *(b + 606 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 393 * OS1_S1 + 2) +
                one_over_two_q * *(b + 492 * OS1_S1 + 0);
            *(b + 492 * OS1_S1 + 8) = prefactor_z * *(b + 492 * OS1_S1 + 2) -
                                      p_over_q * *(b + 607 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 392 * OS1_S1 + 2);
            *(b + 492 * OS1_S1 + 9) = prefactor_z * *(b + 492 * OS1_S1 + 3) -
                                      p_over_q * *(b + 607 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 392 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 492 * OS1_S1 + 0);
            *(b + 493 * OS1_S1 + 4) =
                prefactor_x * *(b + 493 * OS1_S1 + 1) -
                p_over_q * *(b + 598 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 402 * OS1_S1 + 1) +
                one_over_two_q * *(b + 493 * OS1_S1 + 0);
            *(b + 493 * OS1_S1 + 5) =
                prefactor_x * *(b + 493 * OS1_S1 + 2) -
                p_over_q * *(b + 598 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 402 * OS1_S1 + 2);
            *(b + 493 * OS1_S1 + 6) =
                prefactor_z * *(b + 493 * OS1_S1 + 1) -
                p_over_q * *(b + 608 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 393 * OS1_S1 + 1);
            *(b + 493 * OS1_S1 + 7) =
                prefactor_y * *(b + 493 * OS1_S1 + 2) -
                p_over_q * *(b + 607 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 394 * OS1_S1 + 2) +
                one_over_two_q * *(b + 493 * OS1_S1 + 0);
            *(b + 493 * OS1_S1 + 8) =
                prefactor_z * *(b + 493 * OS1_S1 + 2) -
                p_over_q * *(b + 608 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 393 * OS1_S1 + 2);
            *(b + 493 * OS1_S1 + 9) =
                prefactor_z * *(b + 493 * OS1_S1 + 3) -
                p_over_q * *(b + 608 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 393 * OS1_S1 + 3) +
                one_over_two_q * *(b + 493 * OS1_S1 + 0);
            *(b + 494 * OS1_S1 + 4) =
                prefactor_x * *(b + 494 * OS1_S1 + 1) -
                p_over_q * *(b + 599 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 403 * OS1_S1 + 1) +
                one_over_two_q * *(b + 494 * OS1_S1 + 0);
            *(b + 494 * OS1_S1 + 5) =
                prefactor_y * *(b + 494 * OS1_S1 + 1) -
                p_over_q * *(b + 608 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 395 * OS1_S1 + 1);
            *(b + 494 * OS1_S1 + 6) =
                prefactor_z * *(b + 494 * OS1_S1 + 1) -
                p_over_q * *(b + 609 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 394 * OS1_S1 + 1);
            *(b + 494 * OS1_S1 + 7) =
                prefactor_y * *(b + 494 * OS1_S1 + 2) -
                p_over_q * *(b + 608 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 395 * OS1_S1 + 2) +
                one_over_two_q * *(b + 494 * OS1_S1 + 0);
            *(b + 494 * OS1_S1 + 8) =
                prefactor_z * *(b + 494 * OS1_S1 + 2) -
                p_over_q * *(b + 609 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 394 * OS1_S1 + 2);
            *(b + 494 * OS1_S1 + 9) =
                prefactor_z * *(b + 494 * OS1_S1 + 3) -
                p_over_q * *(b + 609 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 394 * OS1_S1 + 3) +
                one_over_two_q * *(b + 494 * OS1_S1 + 0);
            *(b + 495 * OS1_S1 + 4) =
                prefactor_x * *(b + 495 * OS1_S1 + 1) -
                p_over_q * *(b + 600 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 404 * OS1_S1 + 1) +
                one_over_two_q * *(b + 495 * OS1_S1 + 0);
            *(b + 495 * OS1_S1 + 5) =
                prefactor_y * *(b + 495 * OS1_S1 + 1) -
                p_over_q * *(b + 609 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 396 * OS1_S1 + 1);
            *(b + 495 * OS1_S1 + 6) =
                prefactor_z * *(b + 495 * OS1_S1 + 1) -
                p_over_q * *(b + 610 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 395 * OS1_S1 + 1);
            *(b + 495 * OS1_S1 + 7) =
                prefactor_y * *(b + 495 * OS1_S1 + 2) -
                p_over_q * *(b + 609 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 396 * OS1_S1 + 2) +
                one_over_two_q * *(b + 495 * OS1_S1 + 0);
            *(b + 495 * OS1_S1 + 8) =
                prefactor_z * *(b + 495 * OS1_S1 + 2) -
                p_over_q * *(b + 610 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 395 * OS1_S1 + 2);
            *(b + 495 * OS1_S1 + 9) =
                prefactor_z * *(b + 495 * OS1_S1 + 3) -
                p_over_q * *(b + 610 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 395 * OS1_S1 + 3) +
                one_over_two_q * *(b + 495 * OS1_S1 + 0);
            *(b + 496 * OS1_S1 + 4) =
                prefactor_x * *(b + 496 * OS1_S1 + 1) -
                p_over_q * *(b + 601 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 405 * OS1_S1 + 1) +
                one_over_two_q * *(b + 496 * OS1_S1 + 0);
            *(b + 496 * OS1_S1 + 5) =
                prefactor_y * *(b + 496 * OS1_S1 + 1) -
                p_over_q * *(b + 610 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 397 * OS1_S1 + 1);
            *(b + 496 * OS1_S1 + 6) =
                prefactor_z * *(b + 496 * OS1_S1 + 1) -
                p_over_q * *(b + 611 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 396 * OS1_S1 + 1);
            *(b + 496 * OS1_S1 + 7) =
                prefactor_y * *(b + 496 * OS1_S1 + 2) -
                p_over_q * *(b + 610 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 397 * OS1_S1 + 2) +
                one_over_two_q * *(b + 496 * OS1_S1 + 0);
            *(b + 496 * OS1_S1 + 8) =
                prefactor_y * *(b + 496 * OS1_S1 + 3) -
                p_over_q * *(b + 610 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 397 * OS1_S1 + 3);
            *(b + 496 * OS1_S1 + 9) =
                prefactor_z * *(b + 496 * OS1_S1 + 3) -
                p_over_q * *(b + 611 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 396 * OS1_S1 + 3) +
                one_over_two_q * *(b + 496 * OS1_S1 + 0);
            *(b + 497 * OS1_S1 + 4) =
                prefactor_x * *(b + 497 * OS1_S1 + 1) -
                p_over_q * *(b + 602 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 406 * OS1_S1 + 1) +
                one_over_two_q * *(b + 497 * OS1_S1 + 0);
            *(b + 497 * OS1_S1 + 5) =
                prefactor_y * *(b + 497 * OS1_S1 + 1) -
                p_over_q * *(b + 611 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 398 * OS1_S1 + 1);
            *(b + 497 * OS1_S1 + 6) =
                prefactor_x * *(b + 497 * OS1_S1 + 3) -
                p_over_q * *(b + 602 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 406 * OS1_S1 + 3);
            *(b + 497 * OS1_S1 + 7) =
                prefactor_y * *(b + 497 * OS1_S1 + 2) -
                p_over_q * *(b + 611 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 398 * OS1_S1 + 2) +
                one_over_two_q * *(b + 497 * OS1_S1 + 0);
            *(b + 497 * OS1_S1 + 8) =
                prefactor_y * *(b + 497 * OS1_S1 + 3) -
                p_over_q * *(b + 611 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 398 * OS1_S1 + 3);
            *(b + 497 * OS1_S1 + 9) =
                prefactor_z * *(b + 497 * OS1_S1 + 3) -
                p_over_q * *(b + 612 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 397 * OS1_S1 + 3) +
                one_over_two_q * *(b + 497 * OS1_S1 + 0);
            *(b + 498 * OS1_S1 + 4) =
                prefactor_x * *(b + 498 * OS1_S1 + 1) -
                p_over_q * *(b + 603 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 407 * OS1_S1 + 1) +
                one_over_two_q * *(b + 498 * OS1_S1 + 0);
            *(b + 498 * OS1_S1 + 5) = prefactor_y * *(b + 498 * OS1_S1 + 1) -
                                      p_over_q * *(b + 612 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 399 * OS1_S1 + 1);
            *(b + 498 * OS1_S1 + 6) =
                prefactor_x * *(b + 498 * OS1_S1 + 3) -
                p_over_q * *(b + 603 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 407 * OS1_S1 + 3);
            *(b + 498 * OS1_S1 + 7) = prefactor_y * *(b + 498 * OS1_S1 + 2) -
                                      p_over_q * *(b + 612 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 399 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 498 * OS1_S1 + 0);
            *(b + 498 * OS1_S1 + 8) = prefactor_y * *(b + 498 * OS1_S1 + 3) -
                                      p_over_q * *(b + 612 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 399 * OS1_S1 + 3);
            *(b + 498 * OS1_S1 + 9) =
                prefactor_z * *(b + 498 * OS1_S1 + 3) -
                p_over_q * *(b + 613 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 398 * OS1_S1 + 3) +
                one_over_two_q * *(b + 498 * OS1_S1 + 0);
            *(b + 499 * OS1_S1 + 4) =
                prefactor_x * *(b + 499 * OS1_S1 + 1) -
                p_over_q * *(b + 604 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 408 * OS1_S1 + 1) +
                one_over_two_q * *(b + 499 * OS1_S1 + 0);
            *(b + 499 * OS1_S1 + 5) = prefactor_y * *(b + 499 * OS1_S1 + 1) -
                                      p_over_q * *(b + 613 * OS1_S1 + 1);
            *(b + 499 * OS1_S1 + 6) =
                prefactor_x * *(b + 499 * OS1_S1 + 3) -
                p_over_q * *(b + 604 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 408 * OS1_S1 + 3);
            *(b + 499 * OS1_S1 + 7) = prefactor_y * *(b + 499 * OS1_S1 + 2) -
                                      p_over_q * *(b + 613 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 499 * OS1_S1 + 0);
            *(b + 499 * OS1_S1 + 8) = prefactor_y * *(b + 499 * OS1_S1 + 3) -
                                      p_over_q * *(b + 613 * OS1_S1 + 3);
            *(b + 499 * OS1_S1 + 9) =
                prefactor_z * *(b + 499 * OS1_S1 + 3) -
                p_over_q * *(b + 614 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 399 * OS1_S1 + 3) +
                one_over_two_q * *(b + 499 * OS1_S1 + 0);
            *(b + 500 * OS1_S1 + 4) =
                prefactor_x * *(b + 500 * OS1_S1 + 1) -
                p_over_q * *(b + 605 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 409 * OS1_S1 + 1) +
                one_over_two_q * *(b + 500 * OS1_S1 + 0);
            *(b + 500 * OS1_S1 + 5) =
                prefactor_x * *(b + 500 * OS1_S1 + 2) -
                p_over_q * *(b + 605 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 409 * OS1_S1 + 2);
            *(b + 500 * OS1_S1 + 6) = prefactor_z * *(b + 500 * OS1_S1 + 1) -
                                      p_over_q * *(b + 616 * OS1_S1 + 1);
            *(b + 500 * OS1_S1 + 7) =
                prefactor_y * *(b + 500 * OS1_S1 + 2) -
                p_over_q * *(b + 615 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 400 * OS1_S1 + 2) +
                one_over_two_q * *(b + 500 * OS1_S1 + 0);
            *(b + 500 * OS1_S1 + 8) = prefactor_z * *(b + 500 * OS1_S1 + 2) -
                                      p_over_q * *(b + 616 * OS1_S1 + 2);
            *(b + 500 * OS1_S1 + 9) = prefactor_z * *(b + 500 * OS1_S1 + 3) -
                                      p_over_q * *(b + 616 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 500 * OS1_S1 + 0);
            *(b + 501 * OS1_S1 + 4) =
                prefactor_x * *(b + 501 * OS1_S1 + 1) -
                p_over_q * *(b + 606 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 410 * OS1_S1 + 1) +
                one_over_two_q * *(b + 501 * OS1_S1 + 0);
            *(b + 501 * OS1_S1 + 5) =
                prefactor_x * *(b + 501 * OS1_S1 + 2) -
                p_over_q * *(b + 606 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 410 * OS1_S1 + 2);
            *(b + 501 * OS1_S1 + 6) = prefactor_z * *(b + 501 * OS1_S1 + 1) -
                                      p_over_q * *(b + 617 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 400 * OS1_S1 + 1);
            *(b + 501 * OS1_S1 + 7) =
                prefactor_y * *(b + 501 * OS1_S1 + 2) -
                p_over_q * *(b + 616 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 401 * OS1_S1 + 2) +
                one_over_two_q * *(b + 501 * OS1_S1 + 0);
            *(b + 501 * OS1_S1 + 8) = prefactor_z * *(b + 501 * OS1_S1 + 2) -
                                      p_over_q * *(b + 617 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 400 * OS1_S1 + 2);
            *(b + 501 * OS1_S1 + 9) = prefactor_z * *(b + 501 * OS1_S1 + 3) -
                                      p_over_q * *(b + 617 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 400 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 501 * OS1_S1 + 0);
            *(b + 502 * OS1_S1 + 4) =
                prefactor_x * *(b + 502 * OS1_S1 + 1) -
                p_over_q * *(b + 607 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 411 * OS1_S1 + 1) +
                one_over_two_q * *(b + 502 * OS1_S1 + 0);
            *(b + 502 * OS1_S1 + 5) =
                prefactor_x * *(b + 502 * OS1_S1 + 2) -
                p_over_q * *(b + 607 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 411 * OS1_S1 + 2);
            *(b + 502 * OS1_S1 + 6) =
                prefactor_z * *(b + 502 * OS1_S1 + 1) -
                p_over_q * *(b + 618 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 401 * OS1_S1 + 1);
            *(b + 502 * OS1_S1 + 7) =
                prefactor_y * *(b + 502 * OS1_S1 + 2) -
                p_over_q * *(b + 617 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 402 * OS1_S1 + 2) +
                one_over_two_q * *(b + 502 * OS1_S1 + 0);
            *(b + 502 * OS1_S1 + 8) =
                prefactor_z * *(b + 502 * OS1_S1 + 2) -
                p_over_q * *(b + 618 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 401 * OS1_S1 + 2);
            *(b + 502 * OS1_S1 + 9) =
                prefactor_z * *(b + 502 * OS1_S1 + 3) -
                p_over_q * *(b + 618 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 401 * OS1_S1 + 3) +
                one_over_two_q * *(b + 502 * OS1_S1 + 0);
            *(b + 503 * OS1_S1 + 4) =
                prefactor_x * *(b + 503 * OS1_S1 + 1) -
                p_over_q * *(b + 608 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 412 * OS1_S1 + 1) +
                one_over_two_q * *(b + 503 * OS1_S1 + 0);
            *(b + 503 * OS1_S1 + 5) =
                prefactor_x * *(b + 503 * OS1_S1 + 2) -
                p_over_q * *(b + 608 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 412 * OS1_S1 + 2);
            *(b + 503 * OS1_S1 + 6) =
                prefactor_z * *(b + 503 * OS1_S1 + 1) -
                p_over_q * *(b + 619 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 402 * OS1_S1 + 1);
            *(b + 503 * OS1_S1 + 7) =
                prefactor_y * *(b + 503 * OS1_S1 + 2) -
                p_over_q * *(b + 618 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 403 * OS1_S1 + 2) +
                one_over_two_q * *(b + 503 * OS1_S1 + 0);
            *(b + 503 * OS1_S1 + 8) =
                prefactor_z * *(b + 503 * OS1_S1 + 2) -
                p_over_q * *(b + 619 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 402 * OS1_S1 + 2);
            *(b + 503 * OS1_S1 + 9) =
                prefactor_z * *(b + 503 * OS1_S1 + 3) -
                p_over_q * *(b + 619 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 402 * OS1_S1 + 3) +
                one_over_two_q * *(b + 503 * OS1_S1 + 0);
            *(b + 504 * OS1_S1 + 4) =
                prefactor_x * *(b + 504 * OS1_S1 + 1) -
                p_over_q * *(b + 609 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 413 * OS1_S1 + 1) +
                one_over_two_q * *(b + 504 * OS1_S1 + 0);
            *(b + 504 * OS1_S1 + 5) =
                prefactor_x * *(b + 504 * OS1_S1 + 2) -
                p_over_q * *(b + 609 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 413 * OS1_S1 + 2);
            *(b + 504 * OS1_S1 + 6) =
                prefactor_z * *(b + 504 * OS1_S1 + 1) -
                p_over_q * *(b + 620 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 403 * OS1_S1 + 1);
            *(b + 504 * OS1_S1 + 7) =
                prefactor_y * *(b + 504 * OS1_S1 + 2) -
                p_over_q * *(b + 619 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 404 * OS1_S1 + 2) +
                one_over_two_q * *(b + 504 * OS1_S1 + 0);
            *(b + 504 * OS1_S1 + 8) =
                prefactor_z * *(b + 504 * OS1_S1 + 2) -
                p_over_q * *(b + 620 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 403 * OS1_S1 + 2);
            *(b + 504 * OS1_S1 + 9) =
                prefactor_z * *(b + 504 * OS1_S1 + 3) -
                p_over_q * *(b + 620 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 403 * OS1_S1 + 3) +
                one_over_two_q * *(b + 504 * OS1_S1 + 0);
            *(b + 505 * OS1_S1 + 4) =
                prefactor_x * *(b + 505 * OS1_S1 + 1) -
                p_over_q * *(b + 610 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 414 * OS1_S1 + 1) +
                one_over_two_q * *(b + 505 * OS1_S1 + 0);
            *(b + 505 * OS1_S1 + 5) =
                prefactor_y * *(b + 505 * OS1_S1 + 1) -
                p_over_q * *(b + 620 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 405 * OS1_S1 + 1);
            *(b + 505 * OS1_S1 + 6) =
                prefactor_x * *(b + 505 * OS1_S1 + 3) -
                p_over_q * *(b + 610 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 414 * OS1_S1 + 3);
            *(b + 505 * OS1_S1 + 7) =
                prefactor_y * *(b + 505 * OS1_S1 + 2) -
                p_over_q * *(b + 620 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 405 * OS1_S1 + 2) +
                one_over_two_q * *(b + 505 * OS1_S1 + 0);
            *(b + 505 * OS1_S1 + 8) =
                prefactor_y * *(b + 505 * OS1_S1 + 3) -
                p_over_q * *(b + 620 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 405 * OS1_S1 + 3);
            *(b + 505 * OS1_S1 + 9) =
                prefactor_z * *(b + 505 * OS1_S1 + 3) -
                p_over_q * *(b + 621 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 404 * OS1_S1 + 3) +
                one_over_two_q * *(b + 505 * OS1_S1 + 0);
            *(b + 506 * OS1_S1 + 4) =
                prefactor_x * *(b + 506 * OS1_S1 + 1) -
                p_over_q * *(b + 611 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 415 * OS1_S1 + 1) +
                one_over_two_q * *(b + 506 * OS1_S1 + 0);
            *(b + 506 * OS1_S1 + 5) =
                prefactor_y * *(b + 506 * OS1_S1 + 1) -
                p_over_q * *(b + 621 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 406 * OS1_S1 + 1);
            *(b + 506 * OS1_S1 + 6) =
                prefactor_x * *(b + 506 * OS1_S1 + 3) -
                p_over_q * *(b + 611 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 415 * OS1_S1 + 3);
            *(b + 506 * OS1_S1 + 7) =
                prefactor_y * *(b + 506 * OS1_S1 + 2) -
                p_over_q * *(b + 621 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 406 * OS1_S1 + 2) +
                one_over_two_q * *(b + 506 * OS1_S1 + 0);
            *(b + 506 * OS1_S1 + 8) =
                prefactor_y * *(b + 506 * OS1_S1 + 3) -
                p_over_q * *(b + 621 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 406 * OS1_S1 + 3);
            *(b + 506 * OS1_S1 + 9) =
                prefactor_z * *(b + 506 * OS1_S1 + 3) -
                p_over_q * *(b + 622 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 405 * OS1_S1 + 3) +
                one_over_two_q * *(b + 506 * OS1_S1 + 0);
            *(b + 507 * OS1_S1 + 4) =
                prefactor_x * *(b + 507 * OS1_S1 + 1) -
                p_over_q * *(b + 612 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 416 * OS1_S1 + 1) +
                one_over_two_q * *(b + 507 * OS1_S1 + 0);
            *(b + 507 * OS1_S1 + 5) =
                prefactor_y * *(b + 507 * OS1_S1 + 1) -
                p_over_q * *(b + 622 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 407 * OS1_S1 + 1);
            *(b + 507 * OS1_S1 + 6) =
                prefactor_x * *(b + 507 * OS1_S1 + 3) -
                p_over_q * *(b + 612 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 416 * OS1_S1 + 3);
            *(b + 507 * OS1_S1 + 7) =
                prefactor_y * *(b + 507 * OS1_S1 + 2) -
                p_over_q * *(b + 622 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 407 * OS1_S1 + 2) +
                one_over_two_q * *(b + 507 * OS1_S1 + 0);
            *(b + 507 * OS1_S1 + 8) =
                prefactor_y * *(b + 507 * OS1_S1 + 3) -
                p_over_q * *(b + 622 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 407 * OS1_S1 + 3);
            *(b + 507 * OS1_S1 + 9) =
                prefactor_z * *(b + 507 * OS1_S1 + 3) -
                p_over_q * *(b + 623 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 406 * OS1_S1 + 3) +
                one_over_two_q * *(b + 507 * OS1_S1 + 0);
            *(b + 508 * OS1_S1 + 4) =
                prefactor_x * *(b + 508 * OS1_S1 + 1) -
                p_over_q * *(b + 613 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 417 * OS1_S1 + 1) +
                one_over_two_q * *(b + 508 * OS1_S1 + 0);
            *(b + 508 * OS1_S1 + 5) = prefactor_y * *(b + 508 * OS1_S1 + 1) -
                                      p_over_q * *(b + 623 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 408 * OS1_S1 + 1);
            *(b + 508 * OS1_S1 + 6) =
                prefactor_x * *(b + 508 * OS1_S1 + 3) -
                p_over_q * *(b + 613 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 417 * OS1_S1 + 3);
            *(b + 508 * OS1_S1 + 7) = prefactor_y * *(b + 508 * OS1_S1 + 2) -
                                      p_over_q * *(b + 623 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 408 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 508 * OS1_S1 + 0);
            *(b + 508 * OS1_S1 + 8) = prefactor_y * *(b + 508 * OS1_S1 + 3) -
                                      p_over_q * *(b + 623 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 408 * OS1_S1 + 3);
            *(b + 508 * OS1_S1 + 9) =
                prefactor_z * *(b + 508 * OS1_S1 + 3) -
                p_over_q * *(b + 624 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 407 * OS1_S1 + 3) +
                one_over_two_q * *(b + 508 * OS1_S1 + 0);
            *(b + 509 * OS1_S1 + 4) =
                prefactor_x * *(b + 509 * OS1_S1 + 1) -
                p_over_q * *(b + 614 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 418 * OS1_S1 + 1) +
                one_over_two_q * *(b + 509 * OS1_S1 + 0);
            *(b + 509 * OS1_S1 + 5) = prefactor_y * *(b + 509 * OS1_S1 + 1) -
                                      p_over_q * *(b + 624 * OS1_S1 + 1);
            *(b + 509 * OS1_S1 + 6) =
                prefactor_x * *(b + 509 * OS1_S1 + 3) -
                p_over_q * *(b + 614 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 418 * OS1_S1 + 3);
            *(b + 509 * OS1_S1 + 7) = prefactor_y * *(b + 509 * OS1_S1 + 2) -
                                      p_over_q * *(b + 624 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 509 * OS1_S1 + 0);
            *(b + 509 * OS1_S1 + 8) = prefactor_y * *(b + 509 * OS1_S1 + 3) -
                                      p_over_q * *(b + 624 * OS1_S1 + 3);
            *(b + 509 * OS1_S1 + 9) =
                prefactor_z * *(b + 509 * OS1_S1 + 3) -
                p_over_q * *(b + 625 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 408 * OS1_S1 + 3) +
                one_over_two_q * *(b + 509 * OS1_S1 + 0);
            *(b + 510 * OS1_S1 + 4) =
                prefactor_x * *(b + 510 * OS1_S1 + 1) -
                p_over_q * *(b + 615 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 419 * OS1_S1 + 1) +
                one_over_two_q * *(b + 510 * OS1_S1 + 0);
            *(b + 510 * OS1_S1 + 5) =
                prefactor_x * *(b + 510 * OS1_S1 + 2) -
                p_over_q * *(b + 615 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 419 * OS1_S1 + 2);
            *(b + 510 * OS1_S1 + 6) = prefactor_z * *(b + 510 * OS1_S1 + 1) -
                                      p_over_q * *(b + 627 * OS1_S1 + 1);
            *(b + 510 * OS1_S1 + 7) =
                prefactor_y * *(b + 510 * OS1_S1 + 2) -
                p_over_q * *(b + 626 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 409 * OS1_S1 + 2) +
                one_over_two_q * *(b + 510 * OS1_S1 + 0);
            *(b + 510 * OS1_S1 + 8) = prefactor_z * *(b + 510 * OS1_S1 + 2) -
                                      p_over_q * *(b + 627 * OS1_S1 + 2);
            *(b + 510 * OS1_S1 + 9) = prefactor_z * *(b + 510 * OS1_S1 + 3) -
                                      p_over_q * *(b + 627 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 510 * OS1_S1 + 0);
            *(b + 511 * OS1_S1 + 4) =
                prefactor_x * *(b + 511 * OS1_S1 + 1) -
                p_over_q * *(b + 616 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 420 * OS1_S1 + 1) +
                one_over_two_q * *(b + 511 * OS1_S1 + 0);
            *(b + 511 * OS1_S1 + 5) =
                prefactor_x * *(b + 511 * OS1_S1 + 2) -
                p_over_q * *(b + 616 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 420 * OS1_S1 + 2);
            *(b + 511 * OS1_S1 + 6) = prefactor_z * *(b + 511 * OS1_S1 + 1) -
                                      p_over_q * *(b + 628 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 409 * OS1_S1 + 1);
            *(b + 511 * OS1_S1 + 7) =
                prefactor_y * *(b + 511 * OS1_S1 + 2) -
                p_over_q * *(b + 627 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 410 * OS1_S1 + 2) +
                one_over_two_q * *(b + 511 * OS1_S1 + 0);
            *(b + 511 * OS1_S1 + 8) = prefactor_z * *(b + 511 * OS1_S1 + 2) -
                                      p_over_q * *(b + 628 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 409 * OS1_S1 + 2);
            *(b + 511 * OS1_S1 + 9) = prefactor_z * *(b + 511 * OS1_S1 + 3) -
                                      p_over_q * *(b + 628 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 409 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 511 * OS1_S1 + 0);
            *(b + 512 * OS1_S1 + 4) =
                prefactor_x * *(b + 512 * OS1_S1 + 1) -
                p_over_q * *(b + 617 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 421 * OS1_S1 + 1) +
                one_over_two_q * *(b + 512 * OS1_S1 + 0);
            *(b + 512 * OS1_S1 + 5) =
                prefactor_x * *(b + 512 * OS1_S1 + 2) -
                p_over_q * *(b + 617 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 421 * OS1_S1 + 2);
            *(b + 512 * OS1_S1 + 6) =
                prefactor_z * *(b + 512 * OS1_S1 + 1) -
                p_over_q * *(b + 629 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 410 * OS1_S1 + 1);
            *(b + 512 * OS1_S1 + 7) =
                prefactor_y * *(b + 512 * OS1_S1 + 2) -
                p_over_q * *(b + 628 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 411 * OS1_S1 + 2) +
                one_over_two_q * *(b + 512 * OS1_S1 + 0);
            *(b + 512 * OS1_S1 + 8) =
                prefactor_z * *(b + 512 * OS1_S1 + 2) -
                p_over_q * *(b + 629 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 410 * OS1_S1 + 2);
            *(b + 512 * OS1_S1 + 9) =
                prefactor_z * *(b + 512 * OS1_S1 + 3) -
                p_over_q * *(b + 629 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 410 * OS1_S1 + 3) +
                one_over_two_q * *(b + 512 * OS1_S1 + 0);
            *(b + 513 * OS1_S1 + 4) =
                prefactor_x * *(b + 513 * OS1_S1 + 1) -
                p_over_q * *(b + 618 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 422 * OS1_S1 + 1) +
                one_over_two_q * *(b + 513 * OS1_S1 + 0);
            *(b + 513 * OS1_S1 + 5) =
                prefactor_x * *(b + 513 * OS1_S1 + 2) -
                p_over_q * *(b + 618 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 422 * OS1_S1 + 2);
            *(b + 513 * OS1_S1 + 6) =
                prefactor_z * *(b + 513 * OS1_S1 + 1) -
                p_over_q * *(b + 630 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 411 * OS1_S1 + 1);
            *(b + 513 * OS1_S1 + 7) =
                prefactor_y * *(b + 513 * OS1_S1 + 2) -
                p_over_q * *(b + 629 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 412 * OS1_S1 + 2) +
                one_over_two_q * *(b + 513 * OS1_S1 + 0);
            *(b + 513 * OS1_S1 + 8) =
                prefactor_z * *(b + 513 * OS1_S1 + 2) -
                p_over_q * *(b + 630 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 411 * OS1_S1 + 2);
            *(b + 513 * OS1_S1 + 9) =
                prefactor_z * *(b + 513 * OS1_S1 + 3) -
                p_over_q * *(b + 630 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 411 * OS1_S1 + 3) +
                one_over_two_q * *(b + 513 * OS1_S1 + 0);
            *(b + 514 * OS1_S1 + 4) =
                prefactor_x * *(b + 514 * OS1_S1 + 1) -
                p_over_q * *(b + 619 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 423 * OS1_S1 + 1) +
                one_over_two_q * *(b + 514 * OS1_S1 + 0);
            *(b + 514 * OS1_S1 + 5) =
                prefactor_x * *(b + 514 * OS1_S1 + 2) -
                p_over_q * *(b + 619 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 423 * OS1_S1 + 2);
            *(b + 514 * OS1_S1 + 6) =
                prefactor_x * *(b + 514 * OS1_S1 + 3) -
                p_over_q * *(b + 619 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 423 * OS1_S1 + 3);
            *(b + 514 * OS1_S1 + 7) =
                prefactor_y * *(b + 514 * OS1_S1 + 2) -
                p_over_q * *(b + 630 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 413 * OS1_S1 + 2) +
                one_over_two_q * *(b + 514 * OS1_S1 + 0);
            *(b + 514 * OS1_S1 + 8) =
                prefactor_z * *(b + 514 * OS1_S1 + 2) -
                p_over_q * *(b + 631 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 412 * OS1_S1 + 2);
            *(b + 514 * OS1_S1 + 9) =
                prefactor_z * *(b + 514 * OS1_S1 + 3) -
                p_over_q * *(b + 631 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 412 * OS1_S1 + 3) +
                one_over_two_q * *(b + 514 * OS1_S1 + 0);
            *(b + 515 * OS1_S1 + 4) =
                prefactor_x * *(b + 515 * OS1_S1 + 1) -
                p_over_q * *(b + 620 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 424 * OS1_S1 + 1) +
                one_over_two_q * *(b + 515 * OS1_S1 + 0);
            *(b + 515 * OS1_S1 + 5) =
                prefactor_x * *(b + 515 * OS1_S1 + 2) -
                p_over_q * *(b + 620 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 424 * OS1_S1 + 2);
            *(b + 515 * OS1_S1 + 6) =
                prefactor_x * *(b + 515 * OS1_S1 + 3) -
                p_over_q * *(b + 620 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 424 * OS1_S1 + 3);
            *(b + 515 * OS1_S1 + 7) =
                prefactor_y * *(b + 515 * OS1_S1 + 2) -
                p_over_q * *(b + 631 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 414 * OS1_S1 + 2) +
                one_over_two_q * *(b + 515 * OS1_S1 + 0);
            *(b + 515 * OS1_S1 + 8) =
                prefactor_z * *(b + 515 * OS1_S1 + 2) -
                p_over_q * *(b + 632 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 413 * OS1_S1 + 2);
            *(b + 515 * OS1_S1 + 9) =
                prefactor_z * *(b + 515 * OS1_S1 + 3) -
                p_over_q * *(b + 632 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 413 * OS1_S1 + 3) +
                one_over_two_q * *(b + 515 * OS1_S1 + 0);
            *(b + 516 * OS1_S1 + 4) =
                prefactor_x * *(b + 516 * OS1_S1 + 1) -
                p_over_q * *(b + 621 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 425 * OS1_S1 + 1) +
                one_over_two_q * *(b + 516 * OS1_S1 + 0);
            *(b + 516 * OS1_S1 + 5) =
                prefactor_x * *(b + 516 * OS1_S1 + 2) -
                p_over_q * *(b + 621 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 425 * OS1_S1 + 2);
            *(b + 516 * OS1_S1 + 6) =
                prefactor_x * *(b + 516 * OS1_S1 + 3) -
                p_over_q * *(b + 621 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 425 * OS1_S1 + 3);
            *(b + 516 * OS1_S1 + 7) =
                prefactor_y * *(b + 516 * OS1_S1 + 2) -
                p_over_q * *(b + 632 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 415 * OS1_S1 + 2) +
                one_over_two_q * *(b + 516 * OS1_S1 + 0);
            *(b + 516 * OS1_S1 + 8) =
                prefactor_y * *(b + 516 * OS1_S1 + 3) -
                p_over_q * *(b + 632 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 415 * OS1_S1 + 3);
            *(b + 516 * OS1_S1 + 9) =
                prefactor_z * *(b + 516 * OS1_S1 + 3) -
                p_over_q * *(b + 633 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 414 * OS1_S1 + 3) +
                one_over_two_q * *(b + 516 * OS1_S1 + 0);
            *(b + 517 * OS1_S1 + 4) =
                prefactor_x * *(b + 517 * OS1_S1 + 1) -
                p_over_q * *(b + 622 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 426 * OS1_S1 + 1) +
                one_over_two_q * *(b + 517 * OS1_S1 + 0);
            *(b + 517 * OS1_S1 + 5) =
                prefactor_y * *(b + 517 * OS1_S1 + 1) -
                p_over_q * *(b + 633 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 416 * OS1_S1 + 1);
            *(b + 517 * OS1_S1 + 6) =
                prefactor_x * *(b + 517 * OS1_S1 + 3) -
                p_over_q * *(b + 622 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 426 * OS1_S1 + 3);
            *(b + 517 * OS1_S1 + 7) =
                prefactor_y * *(b + 517 * OS1_S1 + 2) -
                p_over_q * *(b + 633 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 416 * OS1_S1 + 2) +
                one_over_two_q * *(b + 517 * OS1_S1 + 0);
            *(b + 517 * OS1_S1 + 8) =
                prefactor_y * *(b + 517 * OS1_S1 + 3) -
                p_over_q * *(b + 633 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 416 * OS1_S1 + 3);
            *(b + 517 * OS1_S1 + 9) =
                prefactor_z * *(b + 517 * OS1_S1 + 3) -
                p_over_q * *(b + 634 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 415 * OS1_S1 + 3) +
                one_over_two_q * *(b + 517 * OS1_S1 + 0);
            *(b + 518 * OS1_S1 + 4) =
                prefactor_x * *(b + 518 * OS1_S1 + 1) -
                p_over_q * *(b + 623 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 427 * OS1_S1 + 1) +
                one_over_two_q * *(b + 518 * OS1_S1 + 0);
            *(b + 518 * OS1_S1 + 5) =
                prefactor_y * *(b + 518 * OS1_S1 + 1) -
                p_over_q * *(b + 634 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 417 * OS1_S1 + 1);
            *(b + 518 * OS1_S1 + 6) =
                prefactor_x * *(b + 518 * OS1_S1 + 3) -
                p_over_q * *(b + 623 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 427 * OS1_S1 + 3);
            *(b + 518 * OS1_S1 + 7) =
                prefactor_y * *(b + 518 * OS1_S1 + 2) -
                p_over_q * *(b + 634 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 417 * OS1_S1 + 2) +
                one_over_two_q * *(b + 518 * OS1_S1 + 0);
            *(b + 518 * OS1_S1 + 8) =
                prefactor_y * *(b + 518 * OS1_S1 + 3) -
                p_over_q * *(b + 634 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 417 * OS1_S1 + 3);
            *(b + 518 * OS1_S1 + 9) =
                prefactor_z * *(b + 518 * OS1_S1 + 3) -
                p_over_q * *(b + 635 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 416 * OS1_S1 + 3) +
                one_over_two_q * *(b + 518 * OS1_S1 + 0);
            *(b + 519 * OS1_S1 + 4) =
                prefactor_x * *(b + 519 * OS1_S1 + 1) -
                p_over_q * *(b + 624 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 428 * OS1_S1 + 1) +
                one_over_two_q * *(b + 519 * OS1_S1 + 0);
            *(b + 519 * OS1_S1 + 5) = prefactor_y * *(b + 519 * OS1_S1 + 1) -
                                      p_over_q * *(b + 635 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 418 * OS1_S1 + 1);
            *(b + 519 * OS1_S1 + 6) =
                prefactor_x * *(b + 519 * OS1_S1 + 3) -
                p_over_q * *(b + 624 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 428 * OS1_S1 + 3);
            *(b + 519 * OS1_S1 + 7) = prefactor_y * *(b + 519 * OS1_S1 + 2) -
                                      p_over_q * *(b + 635 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 418 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 519 * OS1_S1 + 0);
            *(b + 519 * OS1_S1 + 8) = prefactor_y * *(b + 519 * OS1_S1 + 3) -
                                      p_over_q * *(b + 635 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 418 * OS1_S1 + 3);
            *(b + 519 * OS1_S1 + 9) =
                prefactor_z * *(b + 519 * OS1_S1 + 3) -
                p_over_q * *(b + 636 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 417 * OS1_S1 + 3) +
                one_over_two_q * *(b + 519 * OS1_S1 + 0);
            *(b + 520 * OS1_S1 + 4) =
                prefactor_x * *(b + 520 * OS1_S1 + 1) -
                p_over_q * *(b + 625 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 429 * OS1_S1 + 1) +
                one_over_two_q * *(b + 520 * OS1_S1 + 0);
            *(b + 520 * OS1_S1 + 5) = prefactor_y * *(b + 520 * OS1_S1 + 1) -
                                      p_over_q * *(b + 636 * OS1_S1 + 1);
            *(b + 520 * OS1_S1 + 6) =
                prefactor_x * *(b + 520 * OS1_S1 + 3) -
                p_over_q * *(b + 625 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 429 * OS1_S1 + 3);
            *(b + 520 * OS1_S1 + 7) = prefactor_y * *(b + 520 * OS1_S1 + 2) -
                                      p_over_q * *(b + 636 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 520 * OS1_S1 + 0);
            *(b + 520 * OS1_S1 + 8) = prefactor_y * *(b + 520 * OS1_S1 + 3) -
                                      p_over_q * *(b + 636 * OS1_S1 + 3);
            *(b + 520 * OS1_S1 + 9) =
                prefactor_z * *(b + 520 * OS1_S1 + 3) -
                p_over_q * *(b + 637 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 418 * OS1_S1 + 3) +
                one_over_two_q * *(b + 520 * OS1_S1 + 0);
            *(b + 521 * OS1_S1 + 4) =
                prefactor_x * *(b + 521 * OS1_S1 + 1) -
                p_over_q * *(b + 626 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 430 * OS1_S1 + 1) +
                one_over_two_q * *(b + 521 * OS1_S1 + 0);
            *(b + 521 * OS1_S1 + 5) =
                prefactor_x * *(b + 521 * OS1_S1 + 2) -
                p_over_q * *(b + 626 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 430 * OS1_S1 + 2);
            *(b + 521 * OS1_S1 + 6) = prefactor_z * *(b + 521 * OS1_S1 + 1) -
                                      p_over_q * *(b + 639 * OS1_S1 + 1);
            *(b + 521 * OS1_S1 + 7) =
                prefactor_y * *(b + 521 * OS1_S1 + 2) -
                p_over_q * *(b + 638 * OS1_S1 + 2) +
                11 * one_over_two_q * *(b + 419 * OS1_S1 + 2) +
                one_over_two_q * *(b + 521 * OS1_S1 + 0);
            *(b + 521 * OS1_S1 + 8) = prefactor_z * *(b + 521 * OS1_S1 + 2) -
                                      p_over_q * *(b + 639 * OS1_S1 + 2);
            *(b + 521 * OS1_S1 + 9) = prefactor_z * *(b + 521 * OS1_S1 + 3) -
                                      p_over_q * *(b + 639 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 521 * OS1_S1 + 0);
            *(b + 522 * OS1_S1 + 4) =
                prefactor_x * *(b + 522 * OS1_S1 + 1) -
                p_over_q * *(b + 627 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 431 * OS1_S1 + 1) +
                one_over_two_q * *(b + 522 * OS1_S1 + 0);
            *(b + 522 * OS1_S1 + 5) =
                prefactor_x * *(b + 522 * OS1_S1 + 2) -
                p_over_q * *(b + 627 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 431 * OS1_S1 + 2);
            *(b + 522 * OS1_S1 + 6) = prefactor_z * *(b + 522 * OS1_S1 + 1) -
                                      p_over_q * *(b + 640 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 419 * OS1_S1 + 1);
            *(b + 522 * OS1_S1 + 7) =
                prefactor_y * *(b + 522 * OS1_S1 + 2) -
                p_over_q * *(b + 639 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 420 * OS1_S1 + 2) +
                one_over_two_q * *(b + 522 * OS1_S1 + 0);
            *(b + 522 * OS1_S1 + 8) = prefactor_z * *(b + 522 * OS1_S1 + 2) -
                                      p_over_q * *(b + 640 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 419 * OS1_S1 + 2);
            *(b + 522 * OS1_S1 + 9) = prefactor_z * *(b + 522 * OS1_S1 + 3) -
                                      p_over_q * *(b + 640 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 419 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 522 * OS1_S1 + 0);
            *(b + 523 * OS1_S1 + 4) =
                prefactor_x * *(b + 523 * OS1_S1 + 1) -
                p_over_q * *(b + 628 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 432 * OS1_S1 + 1) +
                one_over_two_q * *(b + 523 * OS1_S1 + 0);
            *(b + 523 * OS1_S1 + 5) =
                prefactor_x * *(b + 523 * OS1_S1 + 2) -
                p_over_q * *(b + 628 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 432 * OS1_S1 + 2);
            *(b + 523 * OS1_S1 + 6) =
                prefactor_z * *(b + 523 * OS1_S1 + 1) -
                p_over_q * *(b + 641 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 420 * OS1_S1 + 1);
            *(b + 523 * OS1_S1 + 7) =
                prefactor_y * *(b + 523 * OS1_S1 + 2) -
                p_over_q * *(b + 640 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 421 * OS1_S1 + 2) +
                one_over_two_q * *(b + 523 * OS1_S1 + 0);
            *(b + 523 * OS1_S1 + 8) =
                prefactor_z * *(b + 523 * OS1_S1 + 2) -
                p_over_q * *(b + 641 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 420 * OS1_S1 + 2);
            *(b + 523 * OS1_S1 + 9) =
                prefactor_z * *(b + 523 * OS1_S1 + 3) -
                p_over_q * *(b + 641 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 420 * OS1_S1 + 3) +
                one_over_two_q * *(b + 523 * OS1_S1 + 0);
            *(b + 524 * OS1_S1 + 4) =
                prefactor_x * *(b + 524 * OS1_S1 + 1) -
                p_over_q * *(b + 629 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 433 * OS1_S1 + 1) +
                one_over_two_q * *(b + 524 * OS1_S1 + 0);
            *(b + 524 * OS1_S1 + 5) =
                prefactor_x * *(b + 524 * OS1_S1 + 2) -
                p_over_q * *(b + 629 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 433 * OS1_S1 + 2);
            *(b + 524 * OS1_S1 + 6) =
                prefactor_x * *(b + 524 * OS1_S1 + 3) -
                p_over_q * *(b + 629 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 433 * OS1_S1 + 3);
            *(b + 524 * OS1_S1 + 7) =
                prefactor_y * *(b + 524 * OS1_S1 + 2) -
                p_over_q * *(b + 641 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 422 * OS1_S1 + 2) +
                one_over_two_q * *(b + 524 * OS1_S1 + 0);
            *(b + 524 * OS1_S1 + 8) =
                prefactor_z * *(b + 524 * OS1_S1 + 2) -
                p_over_q * *(b + 642 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 421 * OS1_S1 + 2);
            *(b + 524 * OS1_S1 + 9) =
                prefactor_z * *(b + 524 * OS1_S1 + 3) -
                p_over_q * *(b + 642 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 421 * OS1_S1 + 3) +
                one_over_two_q * *(b + 524 * OS1_S1 + 0);
            *(b + 525 * OS1_S1 + 4) =
                prefactor_x * *(b + 525 * OS1_S1 + 1) -
                p_over_q * *(b + 630 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 434 * OS1_S1 + 1) +
                one_over_two_q * *(b + 525 * OS1_S1 + 0);
            *(b + 525 * OS1_S1 + 5) =
                prefactor_x * *(b + 525 * OS1_S1 + 2) -
                p_over_q * *(b + 630 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 434 * OS1_S1 + 2);
            *(b + 525 * OS1_S1 + 6) =
                prefactor_x * *(b + 525 * OS1_S1 + 3) -
                p_over_q * *(b + 630 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 434 * OS1_S1 + 3);
            *(b + 525 * OS1_S1 + 7) =
                prefactor_y * *(b + 525 * OS1_S1 + 2) -
                p_over_q * *(b + 642 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 423 * OS1_S1 + 2) +
                one_over_two_q * *(b + 525 * OS1_S1 + 0);
            *(b + 525 * OS1_S1 + 8) =
                prefactor_z * *(b + 525 * OS1_S1 + 2) -
                p_over_q * *(b + 643 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 422 * OS1_S1 + 2);
            *(b + 525 * OS1_S1 + 9) =
                prefactor_z * *(b + 525 * OS1_S1 + 3) -
                p_over_q * *(b + 643 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 422 * OS1_S1 + 3) +
                one_over_two_q * *(b + 525 * OS1_S1 + 0);
            *(b + 526 * OS1_S1 + 4) =
                prefactor_x * *(b + 526 * OS1_S1 + 1) -
                p_over_q * *(b + 631 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 435 * OS1_S1 + 1) +
                one_over_two_q * *(b + 526 * OS1_S1 + 0);
            *(b + 526 * OS1_S1 + 5) =
                prefactor_x * *(b + 526 * OS1_S1 + 2) -
                p_over_q * *(b + 631 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 435 * OS1_S1 + 2);
            *(b + 526 * OS1_S1 + 6) =
                prefactor_x * *(b + 526 * OS1_S1 + 3) -
                p_over_q * *(b + 631 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 435 * OS1_S1 + 3);
            *(b + 526 * OS1_S1 + 7) =
                prefactor_y * *(b + 526 * OS1_S1 + 2) -
                p_over_q * *(b + 643 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 424 * OS1_S1 + 2) +
                one_over_two_q * *(b + 526 * OS1_S1 + 0);
            *(b + 526 * OS1_S1 + 8) =
                prefactor_z * *(b + 526 * OS1_S1 + 2) -
                p_over_q * *(b + 644 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 423 * OS1_S1 + 2);
            *(b + 526 * OS1_S1 + 9) =
                prefactor_z * *(b + 526 * OS1_S1 + 3) -
                p_over_q * *(b + 644 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 423 * OS1_S1 + 3) +
                one_over_two_q * *(b + 526 * OS1_S1 + 0);
            *(b + 527 * OS1_S1 + 4) =
                prefactor_x * *(b + 527 * OS1_S1 + 1) -
                p_over_q * *(b + 632 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 436 * OS1_S1 + 1) +
                one_over_two_q * *(b + 527 * OS1_S1 + 0);
            *(b + 527 * OS1_S1 + 5) =
                prefactor_x * *(b + 527 * OS1_S1 + 2) -
                p_over_q * *(b + 632 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 436 * OS1_S1 + 2);
            *(b + 527 * OS1_S1 + 6) =
                prefactor_x * *(b + 527 * OS1_S1 + 3) -
                p_over_q * *(b + 632 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 436 * OS1_S1 + 3);
            *(b + 527 * OS1_S1 + 7) =
                prefactor_y * *(b + 527 * OS1_S1 + 2) -
                p_over_q * *(b + 644 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 425 * OS1_S1 + 2) +
                one_over_two_q * *(b + 527 * OS1_S1 + 0);
            *(b + 527 * OS1_S1 + 8) =
                prefactor_y * *(b + 527 * OS1_S1 + 3) -
                p_over_q * *(b + 644 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 425 * OS1_S1 + 3);
            *(b + 527 * OS1_S1 + 9) =
                prefactor_z * *(b + 527 * OS1_S1 + 3) -
                p_over_q * *(b + 645 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 424 * OS1_S1 + 3) +
                one_over_two_q * *(b + 527 * OS1_S1 + 0);
            *(b + 528 * OS1_S1 + 4) =
                prefactor_x * *(b + 528 * OS1_S1 + 1) -
                p_over_q * *(b + 633 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 437 * OS1_S1 + 1) +
                one_over_two_q * *(b + 528 * OS1_S1 + 0);
            *(b + 528 * OS1_S1 + 5) =
                prefactor_x * *(b + 528 * OS1_S1 + 2) -
                p_over_q * *(b + 633 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 437 * OS1_S1 + 2);
            *(b + 528 * OS1_S1 + 6) =
                prefactor_x * *(b + 528 * OS1_S1 + 3) -
                p_over_q * *(b + 633 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 437 * OS1_S1 + 3);
            *(b + 528 * OS1_S1 + 7) =
                prefactor_y * *(b + 528 * OS1_S1 + 2) -
                p_over_q * *(b + 645 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 426 * OS1_S1 + 2) +
                one_over_two_q * *(b + 528 * OS1_S1 + 0);
            *(b + 528 * OS1_S1 + 8) =
                prefactor_y * *(b + 528 * OS1_S1 + 3) -
                p_over_q * *(b + 645 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 426 * OS1_S1 + 3);
            *(b + 528 * OS1_S1 + 9) =
                prefactor_z * *(b + 528 * OS1_S1 + 3) -
                p_over_q * *(b + 646 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 425 * OS1_S1 + 3) +
                one_over_two_q * *(b + 528 * OS1_S1 + 0);
            *(b + 529 * OS1_S1 + 4) =
                prefactor_x * *(b + 529 * OS1_S1 + 1) -
                p_over_q * *(b + 634 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 438 * OS1_S1 + 1) +
                one_over_two_q * *(b + 529 * OS1_S1 + 0);
            *(b + 529 * OS1_S1 + 5) =
                prefactor_x * *(b + 529 * OS1_S1 + 2) -
                p_over_q * *(b + 634 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 438 * OS1_S1 + 2);
            *(b + 529 * OS1_S1 + 6) =
                prefactor_x * *(b + 529 * OS1_S1 + 3) -
                p_over_q * *(b + 634 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 438 * OS1_S1 + 3);
            *(b + 529 * OS1_S1 + 7) =
                prefactor_y * *(b + 529 * OS1_S1 + 2) -
                p_over_q * *(b + 646 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 427 * OS1_S1 + 2) +
                one_over_two_q * *(b + 529 * OS1_S1 + 0);
            *(b + 529 * OS1_S1 + 8) =
                prefactor_y * *(b + 529 * OS1_S1 + 3) -
                p_over_q * *(b + 646 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 427 * OS1_S1 + 3);
            *(b + 529 * OS1_S1 + 9) =
                prefactor_z * *(b + 529 * OS1_S1 + 3) -
                p_over_q * *(b + 647 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 426 * OS1_S1 + 3) +
                one_over_two_q * *(b + 529 * OS1_S1 + 0);
            *(b + 530 * OS1_S1 + 4) =
                prefactor_x * *(b + 530 * OS1_S1 + 1) -
                p_over_q * *(b + 635 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 439 * OS1_S1 + 1) +
                one_over_two_q * *(b + 530 * OS1_S1 + 0);
            *(b + 530 * OS1_S1 + 5) =
                prefactor_y * *(b + 530 * OS1_S1 + 1) -
                p_over_q * *(b + 647 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 428 * OS1_S1 + 1);
            *(b + 530 * OS1_S1 + 6) =
                prefactor_x * *(b + 530 * OS1_S1 + 3) -
                p_over_q * *(b + 635 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 439 * OS1_S1 + 3);
            *(b + 530 * OS1_S1 + 7) =
                prefactor_y * *(b + 530 * OS1_S1 + 2) -
                p_over_q * *(b + 647 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 428 * OS1_S1 + 2) +
                one_over_two_q * *(b + 530 * OS1_S1 + 0);
            *(b + 530 * OS1_S1 + 8) =
                prefactor_y * *(b + 530 * OS1_S1 + 3) -
                p_over_q * *(b + 647 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 428 * OS1_S1 + 3);
            *(b + 530 * OS1_S1 + 9) =
                prefactor_z * *(b + 530 * OS1_S1 + 3) -
                p_over_q * *(b + 648 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 427 * OS1_S1 + 3) +
                one_over_two_q * *(b + 530 * OS1_S1 + 0);
            *(b + 531 * OS1_S1 + 4) =
                prefactor_x * *(b + 531 * OS1_S1 + 1) -
                p_over_q * *(b + 636 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 440 * OS1_S1 + 1) +
                one_over_two_q * *(b + 531 * OS1_S1 + 0);
            *(b + 531 * OS1_S1 + 5) = prefactor_y * *(b + 531 * OS1_S1 + 1) -
                                      p_over_q * *(b + 648 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 429 * OS1_S1 + 1);
            *(b + 531 * OS1_S1 + 6) =
                prefactor_x * *(b + 531 * OS1_S1 + 3) -
                p_over_q * *(b + 636 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 440 * OS1_S1 + 3);
            *(b + 531 * OS1_S1 + 7) = prefactor_y * *(b + 531 * OS1_S1 + 2) -
                                      p_over_q * *(b + 648 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 429 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 531 * OS1_S1 + 0);
            *(b + 531 * OS1_S1 + 8) = prefactor_y * *(b + 531 * OS1_S1 + 3) -
                                      p_over_q * *(b + 648 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 429 * OS1_S1 + 3);
            *(b + 531 * OS1_S1 + 9) =
                prefactor_z * *(b + 531 * OS1_S1 + 3) -
                p_over_q * *(b + 649 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 428 * OS1_S1 + 3) +
                one_over_two_q * *(b + 531 * OS1_S1 + 0);
            *(b + 532 * OS1_S1 + 4) =
                prefactor_x * *(b + 532 * OS1_S1 + 1) -
                p_over_q * *(b + 637 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 441 * OS1_S1 + 1) +
                one_over_two_q * *(b + 532 * OS1_S1 + 0);
            *(b + 532 * OS1_S1 + 5) = prefactor_y * *(b + 532 * OS1_S1 + 1) -
                                      p_over_q * *(b + 649 * OS1_S1 + 1);
            *(b + 532 * OS1_S1 + 6) =
                prefactor_x * *(b + 532 * OS1_S1 + 3) -
                p_over_q * *(b + 637 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 441 * OS1_S1 + 3);
            *(b + 532 * OS1_S1 + 7) = prefactor_y * *(b + 532 * OS1_S1 + 2) -
                                      p_over_q * *(b + 649 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 532 * OS1_S1 + 0);
            *(b + 532 * OS1_S1 + 8) = prefactor_y * *(b + 532 * OS1_S1 + 3) -
                                      p_over_q * *(b + 649 * OS1_S1 + 3);
            *(b + 532 * OS1_S1 + 9) =
                prefactor_z * *(b + 532 * OS1_S1 + 3) -
                p_over_q * *(b + 650 * OS1_S1 + 3) +
                11 * one_over_two_q * *(b + 429 * OS1_S1 + 3) +
                one_over_two_q * *(b + 532 * OS1_S1 + 0);
            *(b + 533 * OS1_S1 + 4) = prefactor_x * *(b + 533 * OS1_S1 + 1) -
                                      p_over_q * *(b + 638 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 442 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 533 * OS1_S1 + 0);
            *(b + 533 * OS1_S1 + 5) = prefactor_x * *(b + 533 * OS1_S1 + 2) -
                                      p_over_q * *(b + 638 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 442 * OS1_S1 + 2);
            *(b + 533 * OS1_S1 + 6) = prefactor_z * *(b + 533 * OS1_S1 + 1) -
                                      p_over_q * *(b + 652 * OS1_S1 + 1);
            *(b + 533 * OS1_S1 + 7) =
                prefactor_y * *(b + 533 * OS1_S1 + 2) -
                p_over_q * *(b + 651 * OS1_S1 + 2) +
                12 * one_over_two_q * *(b + 430 * OS1_S1 + 2) +
                one_over_two_q * *(b + 533 * OS1_S1 + 0);
            *(b + 533 * OS1_S1 + 8) = prefactor_z * *(b + 533 * OS1_S1 + 2) -
                                      p_over_q * *(b + 652 * OS1_S1 + 2);
            *(b + 533 * OS1_S1 + 9) = prefactor_z * *(b + 533 * OS1_S1 + 3) -
                                      p_over_q * *(b + 652 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 533 * OS1_S1 + 0);
            *(b + 534 * OS1_S1 + 4) = prefactor_x * *(b + 534 * OS1_S1 + 1) -
                                      p_over_q * *(b + 639 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 443 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 534 * OS1_S1 + 0);
            *(b + 534 * OS1_S1 + 5) = prefactor_x * *(b + 534 * OS1_S1 + 2) -
                                      p_over_q * *(b + 639 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 443 * OS1_S1 + 2);
            *(b + 534 * OS1_S1 + 6) = prefactor_z * *(b + 534 * OS1_S1 + 1) -
                                      p_over_q * *(b + 653 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 430 * OS1_S1 + 1);
            *(b + 534 * OS1_S1 + 7) =
                prefactor_y * *(b + 534 * OS1_S1 + 2) -
                p_over_q * *(b + 652 * OS1_S1 + 2) +
                11 * one_over_two_q * *(b + 431 * OS1_S1 + 2) +
                one_over_two_q * *(b + 534 * OS1_S1 + 0);
            *(b + 534 * OS1_S1 + 8) = prefactor_z * *(b + 534 * OS1_S1 + 2) -
                                      p_over_q * *(b + 653 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 430 * OS1_S1 + 2);
            *(b + 534 * OS1_S1 + 9) = prefactor_z * *(b + 534 * OS1_S1 + 3) -
                                      p_over_q * *(b + 653 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 430 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 534 * OS1_S1 + 0);
            *(b + 535 * OS1_S1 + 4) = prefactor_x * *(b + 535 * OS1_S1 + 1) -
                                      p_over_q * *(b + 640 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 444 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 535 * OS1_S1 + 0);
            *(b + 535 * OS1_S1 + 5) = prefactor_x * *(b + 535 * OS1_S1 + 2) -
                                      p_over_q * *(b + 640 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 444 * OS1_S1 + 2);
            *(b + 535 * OS1_S1 + 6) = prefactor_x * *(b + 535 * OS1_S1 + 3) -
                                      p_over_q * *(b + 640 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 444 * OS1_S1 + 3);
            *(b + 535 * OS1_S1 + 7) =
                prefactor_y * *(b + 535 * OS1_S1 + 2) -
                p_over_q * *(b + 653 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 432 * OS1_S1 + 2) +
                one_over_two_q * *(b + 535 * OS1_S1 + 0);
            *(b + 535 * OS1_S1 + 8) =
                prefactor_z * *(b + 535 * OS1_S1 + 2) -
                p_over_q * *(b + 654 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 431 * OS1_S1 + 2);
            *(b + 535 * OS1_S1 + 9) =
                prefactor_z * *(b + 535 * OS1_S1 + 3) -
                p_over_q * *(b + 654 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 431 * OS1_S1 + 3) +
                one_over_two_q * *(b + 535 * OS1_S1 + 0);
            *(b + 536 * OS1_S1 + 4) = prefactor_x * *(b + 536 * OS1_S1 + 1) -
                                      p_over_q * *(b + 641 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 445 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 536 * OS1_S1 + 0);
            *(b + 536 * OS1_S1 + 5) = prefactor_x * *(b + 536 * OS1_S1 + 2) -
                                      p_over_q * *(b + 641 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 445 * OS1_S1 + 2);
            *(b + 536 * OS1_S1 + 6) = prefactor_x * *(b + 536 * OS1_S1 + 3) -
                                      p_over_q * *(b + 641 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 445 * OS1_S1 + 3);
            *(b + 536 * OS1_S1 + 7) =
                prefactor_y * *(b + 536 * OS1_S1 + 2) -
                p_over_q * *(b + 654 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 433 * OS1_S1 + 2) +
                one_over_two_q * *(b + 536 * OS1_S1 + 0);
            *(b + 536 * OS1_S1 + 8) =
                prefactor_z * *(b + 536 * OS1_S1 + 2) -
                p_over_q * *(b + 655 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 432 * OS1_S1 + 2);
            *(b + 536 * OS1_S1 + 9) =
                prefactor_z * *(b + 536 * OS1_S1 + 3) -
                p_over_q * *(b + 655 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 432 * OS1_S1 + 3) +
                one_over_two_q * *(b + 536 * OS1_S1 + 0);
            *(b + 537 * OS1_S1 + 4) = prefactor_x * *(b + 537 * OS1_S1 + 1) -
                                      p_over_q * *(b + 642 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 446 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 537 * OS1_S1 + 0);
            *(b + 537 * OS1_S1 + 5) = prefactor_x * *(b + 537 * OS1_S1 + 2) -
                                      p_over_q * *(b + 642 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 446 * OS1_S1 + 2);
            *(b + 537 * OS1_S1 + 6) = prefactor_x * *(b + 537 * OS1_S1 + 3) -
                                      p_over_q * *(b + 642 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 446 * OS1_S1 + 3);
            *(b + 537 * OS1_S1 + 7) =
                prefactor_y * *(b + 537 * OS1_S1 + 2) -
                p_over_q * *(b + 655 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 434 * OS1_S1 + 2) +
                one_over_two_q * *(b + 537 * OS1_S1 + 0);
            *(b + 537 * OS1_S1 + 8) =
                prefactor_z * *(b + 537 * OS1_S1 + 2) -
                p_over_q * *(b + 656 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 433 * OS1_S1 + 2);
            *(b + 537 * OS1_S1 + 9) =
                prefactor_z * *(b + 537 * OS1_S1 + 3) -
                p_over_q * *(b + 656 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 433 * OS1_S1 + 3) +
                one_over_two_q * *(b + 537 * OS1_S1 + 0);
            *(b + 538 * OS1_S1 + 4) = prefactor_x * *(b + 538 * OS1_S1 + 1) -
                                      p_over_q * *(b + 643 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 447 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 538 * OS1_S1 + 0);
            *(b + 538 * OS1_S1 + 5) = prefactor_x * *(b + 538 * OS1_S1 + 2) -
                                      p_over_q * *(b + 643 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 447 * OS1_S1 + 2);
            *(b + 538 * OS1_S1 + 6) = prefactor_x * *(b + 538 * OS1_S1 + 3) -
                                      p_over_q * *(b + 643 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 447 * OS1_S1 + 3);
            *(b + 538 * OS1_S1 + 7) =
                prefactor_y * *(b + 538 * OS1_S1 + 2) -
                p_over_q * *(b + 656 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 435 * OS1_S1 + 2) +
                one_over_two_q * *(b + 538 * OS1_S1 + 0);
            *(b + 538 * OS1_S1 + 8) =
                prefactor_z * *(b + 538 * OS1_S1 + 2) -
                p_over_q * *(b + 657 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 434 * OS1_S1 + 2);
            *(b + 538 * OS1_S1 + 9) =
                prefactor_z * *(b + 538 * OS1_S1 + 3) -
                p_over_q * *(b + 657 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 434 * OS1_S1 + 3) +
                one_over_two_q * *(b + 538 * OS1_S1 + 0);
            *(b + 539 * OS1_S1 + 4) = prefactor_x * *(b + 539 * OS1_S1 + 1) -
                                      p_over_q * *(b + 644 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 448 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 539 * OS1_S1 + 0);
            *(b + 539 * OS1_S1 + 5) = prefactor_x * *(b + 539 * OS1_S1 + 2) -
                                      p_over_q * *(b + 644 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 448 * OS1_S1 + 2);
            *(b + 539 * OS1_S1 + 6) = prefactor_x * *(b + 539 * OS1_S1 + 3) -
                                      p_over_q * *(b + 644 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 448 * OS1_S1 + 3);
            *(b + 539 * OS1_S1 + 7) =
                prefactor_y * *(b + 539 * OS1_S1 + 2) -
                p_over_q * *(b + 657 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 436 * OS1_S1 + 2) +
                one_over_two_q * *(b + 539 * OS1_S1 + 0);
            *(b + 539 * OS1_S1 + 8) =
                prefactor_z * *(b + 539 * OS1_S1 + 2) -
                p_over_q * *(b + 658 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 435 * OS1_S1 + 2);
            *(b + 539 * OS1_S1 + 9) =
                prefactor_z * *(b + 539 * OS1_S1 + 3) -
                p_over_q * *(b + 658 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 435 * OS1_S1 + 3) +
                one_over_two_q * *(b + 539 * OS1_S1 + 0);
            *(b + 540 * OS1_S1 + 4) = prefactor_x * *(b + 540 * OS1_S1 + 1) -
                                      p_over_q * *(b + 645 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 449 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 540 * OS1_S1 + 0);
            *(b + 540 * OS1_S1 + 5) = prefactor_x * *(b + 540 * OS1_S1 + 2) -
                                      p_over_q * *(b + 645 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 449 * OS1_S1 + 2);
            *(b + 540 * OS1_S1 + 6) = prefactor_x * *(b + 540 * OS1_S1 + 3) -
                                      p_over_q * *(b + 645 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 449 * OS1_S1 + 3);
            *(b + 540 * OS1_S1 + 7) =
                prefactor_y * *(b + 540 * OS1_S1 + 2) -
                p_over_q * *(b + 658 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 437 * OS1_S1 + 2) +
                one_over_two_q * *(b + 540 * OS1_S1 + 0);
            *(b + 540 * OS1_S1 + 8) =
                prefactor_y * *(b + 540 * OS1_S1 + 3) -
                p_over_q * *(b + 658 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 437 * OS1_S1 + 3);
            *(b + 540 * OS1_S1 + 9) =
                prefactor_z * *(b + 540 * OS1_S1 + 3) -
                p_over_q * *(b + 659 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 436 * OS1_S1 + 3) +
                one_over_two_q * *(b + 540 * OS1_S1 + 0);
            *(b + 541 * OS1_S1 + 4) = prefactor_x * *(b + 541 * OS1_S1 + 1) -
                                      p_over_q * *(b + 646 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 450 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 541 * OS1_S1 + 0);
            *(b + 541 * OS1_S1 + 5) = prefactor_x * *(b + 541 * OS1_S1 + 2) -
                                      p_over_q * *(b + 646 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 450 * OS1_S1 + 2);
            *(b + 541 * OS1_S1 + 6) = prefactor_x * *(b + 541 * OS1_S1 + 3) -
                                      p_over_q * *(b + 646 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 450 * OS1_S1 + 3);
            *(b + 541 * OS1_S1 + 7) =
                prefactor_y * *(b + 541 * OS1_S1 + 2) -
                p_over_q * *(b + 659 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 438 * OS1_S1 + 2) +
                one_over_two_q * *(b + 541 * OS1_S1 + 0);
            *(b + 541 * OS1_S1 + 8) =
                prefactor_y * *(b + 541 * OS1_S1 + 3) -
                p_over_q * *(b + 659 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 438 * OS1_S1 + 3);
            *(b + 541 * OS1_S1 + 9) =
                prefactor_z * *(b + 541 * OS1_S1 + 3) -
                p_over_q * *(b + 660 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 437 * OS1_S1 + 3) +
                one_over_two_q * *(b + 541 * OS1_S1 + 0);
            *(b + 542 * OS1_S1 + 4) = prefactor_x * *(b + 542 * OS1_S1 + 1) -
                                      p_over_q * *(b + 647 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 451 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 542 * OS1_S1 + 0);
            *(b + 542 * OS1_S1 + 5) = prefactor_x * *(b + 542 * OS1_S1 + 2) -
                                      p_over_q * *(b + 647 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 451 * OS1_S1 + 2);
            *(b + 542 * OS1_S1 + 6) = prefactor_x * *(b + 542 * OS1_S1 + 3) -
                                      p_over_q * *(b + 647 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 451 * OS1_S1 + 3);
            *(b + 542 * OS1_S1 + 7) =
                prefactor_y * *(b + 542 * OS1_S1 + 2) -
                p_over_q * *(b + 660 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 439 * OS1_S1 + 2) +
                one_over_two_q * *(b + 542 * OS1_S1 + 0);
            *(b + 542 * OS1_S1 + 8) =
                prefactor_y * *(b + 542 * OS1_S1 + 3) -
                p_over_q * *(b + 660 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 439 * OS1_S1 + 3);
            *(b + 542 * OS1_S1 + 9) =
                prefactor_z * *(b + 542 * OS1_S1 + 3) -
                p_over_q * *(b + 661 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 438 * OS1_S1 + 3) +
                one_over_two_q * *(b + 542 * OS1_S1 + 0);
            *(b + 543 * OS1_S1 + 4) = prefactor_x * *(b + 543 * OS1_S1 + 1) -
                                      p_over_q * *(b + 648 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 452 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 543 * OS1_S1 + 0);
            *(b + 543 * OS1_S1 + 5) = prefactor_x * *(b + 543 * OS1_S1 + 2) -
                                      p_over_q * *(b + 648 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 452 * OS1_S1 + 2);
            *(b + 543 * OS1_S1 + 6) = prefactor_x * *(b + 543 * OS1_S1 + 3) -
                                      p_over_q * *(b + 648 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 452 * OS1_S1 + 3);
            *(b + 543 * OS1_S1 + 7) =
                prefactor_y * *(b + 543 * OS1_S1 + 2) -
                p_over_q * *(b + 661 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 440 * OS1_S1 + 2) +
                one_over_two_q * *(b + 543 * OS1_S1 + 0);
            *(b + 543 * OS1_S1 + 8) =
                prefactor_y * *(b + 543 * OS1_S1 + 3) -
                p_over_q * *(b + 661 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 440 * OS1_S1 + 3);
            *(b + 543 * OS1_S1 + 9) =
                prefactor_z * *(b + 543 * OS1_S1 + 3) -
                p_over_q * *(b + 662 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 439 * OS1_S1 + 3) +
                one_over_two_q * *(b + 543 * OS1_S1 + 0);
            *(b + 544 * OS1_S1 + 4) = prefactor_x * *(b + 544 * OS1_S1 + 1) -
                                      p_over_q * *(b + 649 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 453 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 544 * OS1_S1 + 0);
            *(b + 544 * OS1_S1 + 5) = prefactor_y * *(b + 544 * OS1_S1 + 1) -
                                      p_over_q * *(b + 662 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 441 * OS1_S1 + 1);
            *(b + 544 * OS1_S1 + 6) = prefactor_x * *(b + 544 * OS1_S1 + 3) -
                                      p_over_q * *(b + 649 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 453 * OS1_S1 + 3);
            *(b + 544 * OS1_S1 + 7) = prefactor_y * *(b + 544 * OS1_S1 + 2) -
                                      p_over_q * *(b + 662 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 441 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 544 * OS1_S1 + 0);
            *(b + 544 * OS1_S1 + 8) = prefactor_y * *(b + 544 * OS1_S1 + 3) -
                                      p_over_q * *(b + 662 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 441 * OS1_S1 + 3);
            *(b + 544 * OS1_S1 + 9) =
                prefactor_z * *(b + 544 * OS1_S1 + 3) -
                p_over_q * *(b + 663 * OS1_S1 + 3) +
                11 * one_over_two_q * *(b + 440 * OS1_S1 + 3) +
                one_over_two_q * *(b + 544 * OS1_S1 + 0);
            *(b + 545 * OS1_S1 + 4) = prefactor_x * *(b + 545 * OS1_S1 + 1) -
                                      p_over_q * *(b + 650 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 454 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 545 * OS1_S1 + 0);
            *(b + 545 * OS1_S1 + 5) = prefactor_y * *(b + 545 * OS1_S1 + 1) -
                                      p_over_q * *(b + 663 * OS1_S1 + 1);
            *(b + 545 * OS1_S1 + 6) = prefactor_x * *(b + 545 * OS1_S1 + 3) -
                                      p_over_q * *(b + 650 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 454 * OS1_S1 + 3);
            *(b + 545 * OS1_S1 + 7) = prefactor_y * *(b + 545 * OS1_S1 + 2) -
                                      p_over_q * *(b + 663 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 545 * OS1_S1 + 0);
            *(b + 545 * OS1_S1 + 8) = prefactor_y * *(b + 545 * OS1_S1 + 3) -
                                      p_over_q * *(b + 663 * OS1_S1 + 3);
            *(b + 545 * OS1_S1 + 9) =
                prefactor_z * *(b + 545 * OS1_S1 + 3) -
                p_over_q * *(b + 664 * OS1_S1 + 3) +
                12 * one_over_two_q * *(b + 441 * OS1_S1 + 3) +
                one_over_two_q * *(b + 545 * OS1_S1 + 0);
            *(b + 546 * OS1_S1 + 4) = prefactor_x * *(b + 546 * OS1_S1 + 1) -
                                      p_over_q * *(b + 651 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 546 * OS1_S1 + 0);
            *(b + 546 * OS1_S1 + 5) = prefactor_x * *(b + 546 * OS1_S1 + 2) -
                                      p_over_q * *(b + 651 * OS1_S1 + 2);
            *(b + 546 * OS1_S1 + 6) = prefactor_z * *(b + 546 * OS1_S1 + 1) -
                                      p_over_q * *(b + 666 * OS1_S1 + 1);
            *(b + 546 * OS1_S1 + 7) =
                prefactor_y * *(b + 546 * OS1_S1 + 2) -
                p_over_q * *(b + 665 * OS1_S1 + 2) +
                13 * one_over_two_q * *(b + 442 * OS1_S1 + 2) +
                one_over_two_q * *(b + 546 * OS1_S1 + 0);
            *(b + 546 * OS1_S1 + 8) = prefactor_z * *(b + 546 * OS1_S1 + 2) -
                                      p_over_q * *(b + 666 * OS1_S1 + 2);
            *(b + 546 * OS1_S1 + 9) = prefactor_z * *(b + 546 * OS1_S1 + 3) -
                                      p_over_q * *(b + 666 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 546 * OS1_S1 + 0);
            *(b + 547 * OS1_S1 + 4) = prefactor_x * *(b + 547 * OS1_S1 + 1) -
                                      p_over_q * *(b + 652 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 547 * OS1_S1 + 0);
            *(b + 547 * OS1_S1 + 5) = prefactor_x * *(b + 547 * OS1_S1 + 2) -
                                      p_over_q * *(b + 652 * OS1_S1 + 2);
            *(b + 547 * OS1_S1 + 6) = prefactor_x * *(b + 547 * OS1_S1 + 3) -
                                      p_over_q * *(b + 652 * OS1_S1 + 3);
            *(b + 547 * OS1_S1 + 7) =
                prefactor_y * *(b + 547 * OS1_S1 + 2) -
                p_over_q * *(b + 666 * OS1_S1 + 2) +
                12 * one_over_two_q * *(b + 443 * OS1_S1 + 2) +
                one_over_two_q * *(b + 547 * OS1_S1 + 0);
            *(b + 547 * OS1_S1 + 8) = prefactor_z * *(b + 547 * OS1_S1 + 2) -
                                      p_over_q * *(b + 667 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 442 * OS1_S1 + 2);
            *(b + 547 * OS1_S1 + 9) = prefactor_z * *(b + 547 * OS1_S1 + 3) -
                                      p_over_q * *(b + 667 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 442 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 547 * OS1_S1 + 0);
            *(b + 548 * OS1_S1 + 4) = prefactor_x * *(b + 548 * OS1_S1 + 1) -
                                      p_over_q * *(b + 653 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 548 * OS1_S1 + 0);
            *(b + 548 * OS1_S1 + 5) = prefactor_x * *(b + 548 * OS1_S1 + 2) -
                                      p_over_q * *(b + 653 * OS1_S1 + 2);
            *(b + 548 * OS1_S1 + 6) = prefactor_x * *(b + 548 * OS1_S1 + 3) -
                                      p_over_q * *(b + 653 * OS1_S1 + 3);
            *(b + 548 * OS1_S1 + 7) =
                prefactor_y * *(b + 548 * OS1_S1 + 2) -
                p_over_q * *(b + 667 * OS1_S1 + 2) +
                11 * one_over_two_q * *(b + 444 * OS1_S1 + 2) +
                one_over_two_q * *(b + 548 * OS1_S1 + 0);
            *(b + 548 * OS1_S1 + 8) =
                prefactor_z * *(b + 548 * OS1_S1 + 2) -
                p_over_q * *(b + 668 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 443 * OS1_S1 + 2);
            *(b + 548 * OS1_S1 + 9) =
                prefactor_z * *(b + 548 * OS1_S1 + 3) -
                p_over_q * *(b + 668 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 443 * OS1_S1 + 3) +
                one_over_two_q * *(b + 548 * OS1_S1 + 0);
            *(b + 549 * OS1_S1 + 4) = prefactor_x * *(b + 549 * OS1_S1 + 1) -
                                      p_over_q * *(b + 654 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 549 * OS1_S1 + 0);
            *(b + 549 * OS1_S1 + 5) = prefactor_x * *(b + 549 * OS1_S1 + 2) -
                                      p_over_q * *(b + 654 * OS1_S1 + 2);
            *(b + 549 * OS1_S1 + 6) = prefactor_x * *(b + 549 * OS1_S1 + 3) -
                                      p_over_q * *(b + 654 * OS1_S1 + 3);
            *(b + 549 * OS1_S1 + 7) =
                prefactor_y * *(b + 549 * OS1_S1 + 2) -
                p_over_q * *(b + 668 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 445 * OS1_S1 + 2) +
                one_over_two_q * *(b + 549 * OS1_S1 + 0);
            *(b + 549 * OS1_S1 + 8) =
                prefactor_z * *(b + 549 * OS1_S1 + 2) -
                p_over_q * *(b + 669 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 444 * OS1_S1 + 2);
            *(b + 549 * OS1_S1 + 9) =
                prefactor_z * *(b + 549 * OS1_S1 + 3) -
                p_over_q * *(b + 669 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 444 * OS1_S1 + 3) +
                one_over_two_q * *(b + 549 * OS1_S1 + 0);
            *(b + 550 * OS1_S1 + 4) = prefactor_x * *(b + 550 * OS1_S1 + 1) -
                                      p_over_q * *(b + 655 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 550 * OS1_S1 + 0);
            *(b + 550 * OS1_S1 + 5) = prefactor_x * *(b + 550 * OS1_S1 + 2) -
                                      p_over_q * *(b + 655 * OS1_S1 + 2);
            *(b + 550 * OS1_S1 + 6) = prefactor_x * *(b + 550 * OS1_S1 + 3) -
                                      p_over_q * *(b + 655 * OS1_S1 + 3);
            *(b + 550 * OS1_S1 + 7) =
                prefactor_y * *(b + 550 * OS1_S1 + 2) -
                p_over_q * *(b + 669 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 446 * OS1_S1 + 2) +
                one_over_two_q * *(b + 550 * OS1_S1 + 0);
            *(b + 550 * OS1_S1 + 8) =
                prefactor_z * *(b + 550 * OS1_S1 + 2) -
                p_over_q * *(b + 670 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 445 * OS1_S1 + 2);
            *(b + 550 * OS1_S1 + 9) =
                prefactor_z * *(b + 550 * OS1_S1 + 3) -
                p_over_q * *(b + 670 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 445 * OS1_S1 + 3) +
                one_over_two_q * *(b + 550 * OS1_S1 + 0);
            *(b + 551 * OS1_S1 + 4) = prefactor_x * *(b + 551 * OS1_S1 + 1) -
                                      p_over_q * *(b + 656 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 551 * OS1_S1 + 0);
            *(b + 551 * OS1_S1 + 5) = prefactor_x * *(b + 551 * OS1_S1 + 2) -
                                      p_over_q * *(b + 656 * OS1_S1 + 2);
            *(b + 551 * OS1_S1 + 6) = prefactor_x * *(b + 551 * OS1_S1 + 3) -
                                      p_over_q * *(b + 656 * OS1_S1 + 3);
            *(b + 551 * OS1_S1 + 7) =
                prefactor_y * *(b + 551 * OS1_S1 + 2) -
                p_over_q * *(b + 670 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 447 * OS1_S1 + 2) +
                one_over_two_q * *(b + 551 * OS1_S1 + 0);
            *(b + 551 * OS1_S1 + 8) =
                prefactor_z * *(b + 551 * OS1_S1 + 2) -
                p_over_q * *(b + 671 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 446 * OS1_S1 + 2);
            *(b + 551 * OS1_S1 + 9) =
                prefactor_z * *(b + 551 * OS1_S1 + 3) -
                p_over_q * *(b + 671 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 446 * OS1_S1 + 3) +
                one_over_two_q * *(b + 551 * OS1_S1 + 0);
            *(b + 552 * OS1_S1 + 4) = prefactor_x * *(b + 552 * OS1_S1 + 1) -
                                      p_over_q * *(b + 657 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 552 * OS1_S1 + 0);
            *(b + 552 * OS1_S1 + 5) = prefactor_x * *(b + 552 * OS1_S1 + 2) -
                                      p_over_q * *(b + 657 * OS1_S1 + 2);
            *(b + 552 * OS1_S1 + 6) = prefactor_x * *(b + 552 * OS1_S1 + 3) -
                                      p_over_q * *(b + 657 * OS1_S1 + 3);
            *(b + 552 * OS1_S1 + 7) =
                prefactor_y * *(b + 552 * OS1_S1 + 2) -
                p_over_q * *(b + 671 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 448 * OS1_S1 + 2) +
                one_over_two_q * *(b + 552 * OS1_S1 + 0);
            *(b + 552 * OS1_S1 + 8) =
                prefactor_z * *(b + 552 * OS1_S1 + 2) -
                p_over_q * *(b + 672 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 447 * OS1_S1 + 2);
            *(b + 552 * OS1_S1 + 9) =
                prefactor_z * *(b + 552 * OS1_S1 + 3) -
                p_over_q * *(b + 672 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 447 * OS1_S1 + 3) +
                one_over_two_q * *(b + 552 * OS1_S1 + 0);
            *(b + 553 * OS1_S1 + 4) = prefactor_x * *(b + 553 * OS1_S1 + 1) -
                                      p_over_q * *(b + 658 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 553 * OS1_S1 + 0);
            *(b + 553 * OS1_S1 + 5) = prefactor_x * *(b + 553 * OS1_S1 + 2) -
                                      p_over_q * *(b + 658 * OS1_S1 + 2);
            *(b + 553 * OS1_S1 + 6) = prefactor_x * *(b + 553 * OS1_S1 + 3) -
                                      p_over_q * *(b + 658 * OS1_S1 + 3);
            *(b + 553 * OS1_S1 + 7) =
                prefactor_y * *(b + 553 * OS1_S1 + 2) -
                p_over_q * *(b + 672 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 449 * OS1_S1 + 2) +
                one_over_two_q * *(b + 553 * OS1_S1 + 0);
            *(b + 553 * OS1_S1 + 8) =
                prefactor_y * *(b + 553 * OS1_S1 + 3) -
                p_over_q * *(b + 672 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 449 * OS1_S1 + 3);
            *(b + 553 * OS1_S1 + 9) =
                prefactor_z * *(b + 553 * OS1_S1 + 3) -
                p_over_q * *(b + 673 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 448 * OS1_S1 + 3) +
                one_over_two_q * *(b + 553 * OS1_S1 + 0);
            *(b + 554 * OS1_S1 + 4) = prefactor_x * *(b + 554 * OS1_S1 + 1) -
                                      p_over_q * *(b + 659 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 554 * OS1_S1 + 0);
            *(b + 554 * OS1_S1 + 5) = prefactor_x * *(b + 554 * OS1_S1 + 2) -
                                      p_over_q * *(b + 659 * OS1_S1 + 2);
            *(b + 554 * OS1_S1 + 6) = prefactor_x * *(b + 554 * OS1_S1 + 3) -
                                      p_over_q * *(b + 659 * OS1_S1 + 3);
            *(b + 554 * OS1_S1 + 7) =
                prefactor_y * *(b + 554 * OS1_S1 + 2) -
                p_over_q * *(b + 673 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 450 * OS1_S1 + 2) +
                one_over_two_q * *(b + 554 * OS1_S1 + 0);
            *(b + 554 * OS1_S1 + 8) =
                prefactor_y * *(b + 554 * OS1_S1 + 3) -
                p_over_q * *(b + 673 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 450 * OS1_S1 + 3);
            *(b + 554 * OS1_S1 + 9) =
                prefactor_z * *(b + 554 * OS1_S1 + 3) -
                p_over_q * *(b + 674 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 449 * OS1_S1 + 3) +
                one_over_two_q * *(b + 554 * OS1_S1 + 0);
            *(b + 555 * OS1_S1 + 4) = prefactor_x * *(b + 555 * OS1_S1 + 1) -
                                      p_over_q * *(b + 660 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 555 * OS1_S1 + 0);
            *(b + 555 * OS1_S1 + 5) = prefactor_x * *(b + 555 * OS1_S1 + 2) -
                                      p_over_q * *(b + 660 * OS1_S1 + 2);
            *(b + 555 * OS1_S1 + 6) = prefactor_x * *(b + 555 * OS1_S1 + 3) -
                                      p_over_q * *(b + 660 * OS1_S1 + 3);
            *(b + 555 * OS1_S1 + 7) =
                prefactor_y * *(b + 555 * OS1_S1 + 2) -
                p_over_q * *(b + 674 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 451 * OS1_S1 + 2) +
                one_over_two_q * *(b + 555 * OS1_S1 + 0);
            *(b + 555 * OS1_S1 + 8) =
                prefactor_y * *(b + 555 * OS1_S1 + 3) -
                p_over_q * *(b + 674 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 451 * OS1_S1 + 3);
            *(b + 555 * OS1_S1 + 9) =
                prefactor_z * *(b + 555 * OS1_S1 + 3) -
                p_over_q * *(b + 675 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 450 * OS1_S1 + 3) +
                one_over_two_q * *(b + 555 * OS1_S1 + 0);
            *(b + 556 * OS1_S1 + 4) = prefactor_x * *(b + 556 * OS1_S1 + 1) -
                                      p_over_q * *(b + 661 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 556 * OS1_S1 + 0);
            *(b + 556 * OS1_S1 + 5) = prefactor_x * *(b + 556 * OS1_S1 + 2) -
                                      p_over_q * *(b + 661 * OS1_S1 + 2);
            *(b + 556 * OS1_S1 + 6) = prefactor_x * *(b + 556 * OS1_S1 + 3) -
                                      p_over_q * *(b + 661 * OS1_S1 + 3);
            *(b + 556 * OS1_S1 + 7) =
                prefactor_y * *(b + 556 * OS1_S1 + 2) -
                p_over_q * *(b + 675 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 452 * OS1_S1 + 2) +
                one_over_two_q * *(b + 556 * OS1_S1 + 0);
            *(b + 556 * OS1_S1 + 8) =
                prefactor_y * *(b + 556 * OS1_S1 + 3) -
                p_over_q * *(b + 675 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 452 * OS1_S1 + 3);
            *(b + 556 * OS1_S1 + 9) =
                prefactor_z * *(b + 556 * OS1_S1 + 3) -
                p_over_q * *(b + 676 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 451 * OS1_S1 + 3) +
                one_over_two_q * *(b + 556 * OS1_S1 + 0);
            *(b + 557 * OS1_S1 + 4) = prefactor_x * *(b + 557 * OS1_S1 + 1) -
                                      p_over_q * *(b + 662 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 557 * OS1_S1 + 0);
            *(b + 557 * OS1_S1 + 5) = prefactor_x * *(b + 557 * OS1_S1 + 2) -
                                      p_over_q * *(b + 662 * OS1_S1 + 2);
            *(b + 557 * OS1_S1 + 6) = prefactor_x * *(b + 557 * OS1_S1 + 3) -
                                      p_over_q * *(b + 662 * OS1_S1 + 3);
            *(b + 557 * OS1_S1 + 7) =
                prefactor_y * *(b + 557 * OS1_S1 + 2) -
                p_over_q * *(b + 676 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 453 * OS1_S1 + 2) +
                one_over_two_q * *(b + 557 * OS1_S1 + 0);
            *(b + 557 * OS1_S1 + 8) =
                prefactor_y * *(b + 557 * OS1_S1 + 3) -
                p_over_q * *(b + 676 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 453 * OS1_S1 + 3);
            *(b + 557 * OS1_S1 + 9) =
                prefactor_z * *(b + 557 * OS1_S1 + 3) -
                p_over_q * *(b + 677 * OS1_S1 + 3) +
                11 * one_over_two_q * *(b + 452 * OS1_S1 + 3) +
                one_over_two_q * *(b + 557 * OS1_S1 + 0);
            *(b + 558 * OS1_S1 + 4) = prefactor_x * *(b + 558 * OS1_S1 + 1) -
                                      p_over_q * *(b + 663 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 558 * OS1_S1 + 0);
            *(b + 558 * OS1_S1 + 5) = prefactor_x * *(b + 558 * OS1_S1 + 2) -
                                      p_over_q * *(b + 663 * OS1_S1 + 2);
            *(b + 558 * OS1_S1 + 6) = prefactor_x * *(b + 558 * OS1_S1 + 3) -
                                      p_over_q * *(b + 663 * OS1_S1 + 3);
            *(b + 558 * OS1_S1 + 7) = prefactor_y * *(b + 558 * OS1_S1 + 2) -
                                      p_over_q * *(b + 677 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 454 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 558 * OS1_S1 + 0);
            *(b + 558 * OS1_S1 + 8) = prefactor_y * *(b + 558 * OS1_S1 + 3) -
                                      p_over_q * *(b + 677 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 454 * OS1_S1 + 3);
            *(b + 558 * OS1_S1 + 9) =
                prefactor_z * *(b + 558 * OS1_S1 + 3) -
                p_over_q * *(b + 678 * OS1_S1 + 3) +
                12 * one_over_two_q * *(b + 453 * OS1_S1 + 3) +
                one_over_two_q * *(b + 558 * OS1_S1 + 0);
            *(b + 559 * OS1_S1 + 4) = prefactor_x * *(b + 559 * OS1_S1 + 1) -
                                      p_over_q * *(b + 664 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 559 * OS1_S1 + 0);
            *(b + 559 * OS1_S1 + 5) = prefactor_y * *(b + 559 * OS1_S1 + 1) -
                                      p_over_q * *(b + 678 * OS1_S1 + 1);
            *(b + 559 * OS1_S1 + 6) = prefactor_x * *(b + 559 * OS1_S1 + 3) -
                                      p_over_q * *(b + 664 * OS1_S1 + 3);
            *(b + 559 * OS1_S1 + 7) = prefactor_y * *(b + 559 * OS1_S1 + 2) -
                                      p_over_q * *(b + 678 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 559 * OS1_S1 + 0);
            *(b + 559 * OS1_S1 + 8) = prefactor_y * *(b + 559 * OS1_S1 + 3) -
                                      p_over_q * *(b + 678 * OS1_S1 + 3);
            *(b + 559 * OS1_S1 + 9) =
                prefactor_z * *(b + 559 * OS1_S1 + 3) -
                p_over_q * *(b + 679 * OS1_S1 + 3) +
                13 * one_over_two_q * *(b + 454 * OS1_S1 + 3) +
                one_over_two_q * *(b + 559 * OS1_S1 + 0);
            return;
        }

        void transfer_14_2(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 560 * OS1_S1 + 4) =
                prefactor_x * *(b + 560 * OS1_S1 + 1) -
                p_over_q * *(b + 680 * OS1_S1 + 1) +
                14 * one_over_two_q * *(b + 455 * OS1_S1 + 1) +
                one_over_two_q * *(b + 560 * OS1_S1 + 0);
            *(b + 560 * OS1_S1 + 5) = prefactor_y * *(b + 560 * OS1_S1 + 1) -
                                      p_over_q * *(b + 681 * OS1_S1 + 1);
            *(b + 560 * OS1_S1 + 6) = prefactor_z * *(b + 560 * OS1_S1 + 1) -
                                      p_over_q * *(b + 682 * OS1_S1 + 1);
            *(b + 560 * OS1_S1 + 7) = prefactor_y * *(b + 560 * OS1_S1 + 2) -
                                      p_over_q * *(b + 681 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 560 * OS1_S1 + 0);
            *(b + 560 * OS1_S1 + 8) = prefactor_z * *(b + 560 * OS1_S1 + 2) -
                                      p_over_q * *(b + 682 * OS1_S1 + 2);
            *(b + 560 * OS1_S1 + 9) = prefactor_z * *(b + 560 * OS1_S1 + 3) -
                                      p_over_q * *(b + 682 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 560 * OS1_S1 + 0);
            *(b + 561 * OS1_S1 + 4) =
                prefactor_x * *(b + 561 * OS1_S1 + 1) -
                p_over_q * *(b + 681 * OS1_S1 + 1) +
                13 * one_over_two_q * *(b + 456 * OS1_S1 + 1) +
                one_over_two_q * *(b + 561 * OS1_S1 + 0);
            *(b + 561 * OS1_S1 + 5) = prefactor_y * *(b + 561 * OS1_S1 + 1) -
                                      p_over_q * *(b + 683 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 455 * OS1_S1 + 1);
            *(b + 561 * OS1_S1 + 6) = prefactor_z * *(b + 561 * OS1_S1 + 1) -
                                      p_over_q * *(b + 684 * OS1_S1 + 1);
            *(b + 561 * OS1_S1 + 7) = prefactor_y * *(b + 561 * OS1_S1 + 2) -
                                      p_over_q * *(b + 683 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 455 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 561 * OS1_S1 + 0);
            *(b + 561 * OS1_S1 + 8) = prefactor_z * *(b + 561 * OS1_S1 + 2) -
                                      p_over_q * *(b + 684 * OS1_S1 + 2);
            *(b + 561 * OS1_S1 + 9) = prefactor_z * *(b + 561 * OS1_S1 + 3) -
                                      p_over_q * *(b + 684 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 561 * OS1_S1 + 0);
            *(b + 562 * OS1_S1 + 4) =
                prefactor_x * *(b + 562 * OS1_S1 + 1) -
                p_over_q * *(b + 682 * OS1_S1 + 1) +
                13 * one_over_two_q * *(b + 457 * OS1_S1 + 1) +
                one_over_two_q * *(b + 562 * OS1_S1 + 0);
            *(b + 562 * OS1_S1 + 5) = prefactor_y * *(b + 562 * OS1_S1 + 1) -
                                      p_over_q * *(b + 684 * OS1_S1 + 1);
            *(b + 562 * OS1_S1 + 6) = prefactor_z * *(b + 562 * OS1_S1 + 1) -
                                      p_over_q * *(b + 685 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 455 * OS1_S1 + 1);
            *(b + 562 * OS1_S1 + 7) = prefactor_y * *(b + 562 * OS1_S1 + 2) -
                                      p_over_q * *(b + 684 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 562 * OS1_S1 + 0);
            *(b + 562 * OS1_S1 + 8) = prefactor_y * *(b + 562 * OS1_S1 + 3) -
                                      p_over_q * *(b + 684 * OS1_S1 + 3);
            *(b + 562 * OS1_S1 + 9) = prefactor_z * *(b + 562 * OS1_S1 + 3) -
                                      p_over_q * *(b + 685 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 455 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 562 * OS1_S1 + 0);
            *(b + 563 * OS1_S1 + 4) =
                prefactor_x * *(b + 563 * OS1_S1 + 1) -
                p_over_q * *(b + 683 * OS1_S1 + 1) +
                12 * one_over_two_q * *(b + 458 * OS1_S1 + 1) +
                one_over_two_q * *(b + 563 * OS1_S1 + 0);
            *(b + 563 * OS1_S1 + 5) =
                prefactor_y * *(b + 563 * OS1_S1 + 1) -
                p_over_q * *(b + 686 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 456 * OS1_S1 + 1);
            *(b + 563 * OS1_S1 + 6) = prefactor_z * *(b + 563 * OS1_S1 + 1) -
                                      p_over_q * *(b + 687 * OS1_S1 + 1);
            *(b + 563 * OS1_S1 + 7) =
                prefactor_y * *(b + 563 * OS1_S1 + 2) -
                p_over_q * *(b + 686 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 456 * OS1_S1 + 2) +
                one_over_two_q * *(b + 563 * OS1_S1 + 0);
            *(b + 563 * OS1_S1 + 8) = prefactor_z * *(b + 563 * OS1_S1 + 2) -
                                      p_over_q * *(b + 687 * OS1_S1 + 2);
            *(b + 563 * OS1_S1 + 9) = prefactor_z * *(b + 563 * OS1_S1 + 3) -
                                      p_over_q * *(b + 687 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 563 * OS1_S1 + 0);
            *(b + 564 * OS1_S1 + 4) =
                prefactor_x * *(b + 564 * OS1_S1 + 1) -
                p_over_q * *(b + 684 * OS1_S1 + 1) +
                12 * one_over_two_q * *(b + 459 * OS1_S1 + 1) +
                one_over_two_q * *(b + 564 * OS1_S1 + 0);
            *(b + 564 * OS1_S1 + 5) = prefactor_y * *(b + 564 * OS1_S1 + 1) -
                                      p_over_q * *(b + 687 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 457 * OS1_S1 + 1);
            *(b + 564 * OS1_S1 + 6) = prefactor_z * *(b + 564 * OS1_S1 + 1) -
                                      p_over_q * *(b + 688 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 456 * OS1_S1 + 1);
            *(b + 564 * OS1_S1 + 7) = prefactor_y * *(b + 564 * OS1_S1 + 2) -
                                      p_over_q * *(b + 687 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 457 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 564 * OS1_S1 + 0);
            *(b + 564 * OS1_S1 + 8) = prefactor_z * *(b + 564 * OS1_S1 + 2) -
                                      p_over_q * *(b + 688 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 456 * OS1_S1 + 2);
            *(b + 564 * OS1_S1 + 9) = prefactor_z * *(b + 564 * OS1_S1 + 3) -
                                      p_over_q * *(b + 688 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 456 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 564 * OS1_S1 + 0);
            *(b + 565 * OS1_S1 + 4) =
                prefactor_x * *(b + 565 * OS1_S1 + 1) -
                p_over_q * *(b + 685 * OS1_S1 + 1) +
                12 * one_over_two_q * *(b + 460 * OS1_S1 + 1) +
                one_over_two_q * *(b + 565 * OS1_S1 + 0);
            *(b + 565 * OS1_S1 + 5) = prefactor_y * *(b + 565 * OS1_S1 + 1) -
                                      p_over_q * *(b + 688 * OS1_S1 + 1);
            *(b + 565 * OS1_S1 + 6) =
                prefactor_z * *(b + 565 * OS1_S1 + 1) -
                p_over_q * *(b + 689 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 457 * OS1_S1 + 1);
            *(b + 565 * OS1_S1 + 7) = prefactor_y * *(b + 565 * OS1_S1 + 2) -
                                      p_over_q * *(b + 688 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 565 * OS1_S1 + 0);
            *(b + 565 * OS1_S1 + 8) = prefactor_y * *(b + 565 * OS1_S1 + 3) -
                                      p_over_q * *(b + 688 * OS1_S1 + 3);
            *(b + 565 * OS1_S1 + 9) =
                prefactor_z * *(b + 565 * OS1_S1 + 3) -
                p_over_q * *(b + 689 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 457 * OS1_S1 + 3) +
                one_over_two_q * *(b + 565 * OS1_S1 + 0);
            *(b + 566 * OS1_S1 + 4) =
                prefactor_x * *(b + 566 * OS1_S1 + 1) -
                p_over_q * *(b + 686 * OS1_S1 + 1) +
                11 * one_over_two_q * *(b + 461 * OS1_S1 + 1) +
                one_over_two_q * *(b + 566 * OS1_S1 + 0);
            *(b + 566 * OS1_S1 + 5) =
                prefactor_y * *(b + 566 * OS1_S1 + 1) -
                p_over_q * *(b + 690 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 458 * OS1_S1 + 1);
            *(b + 566 * OS1_S1 + 6) = prefactor_z * *(b + 566 * OS1_S1 + 1) -
                                      p_over_q * *(b + 691 * OS1_S1 + 1);
            *(b + 566 * OS1_S1 + 7) =
                prefactor_y * *(b + 566 * OS1_S1 + 2) -
                p_over_q * *(b + 690 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 458 * OS1_S1 + 2) +
                one_over_two_q * *(b + 566 * OS1_S1 + 0);
            *(b + 566 * OS1_S1 + 8) = prefactor_z * *(b + 566 * OS1_S1 + 2) -
                                      p_over_q * *(b + 691 * OS1_S1 + 2);
            *(b + 566 * OS1_S1 + 9) = prefactor_z * *(b + 566 * OS1_S1 + 3) -
                                      p_over_q * *(b + 691 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 566 * OS1_S1 + 0);
            *(b + 567 * OS1_S1 + 4) =
                prefactor_x * *(b + 567 * OS1_S1 + 1) -
                p_over_q * *(b + 687 * OS1_S1 + 1) +
                11 * one_over_two_q * *(b + 462 * OS1_S1 + 1) +
                one_over_two_q * *(b + 567 * OS1_S1 + 0);
            *(b + 567 * OS1_S1 + 5) =
                prefactor_y * *(b + 567 * OS1_S1 + 1) -
                p_over_q * *(b + 691 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 459 * OS1_S1 + 1);
            *(b + 567 * OS1_S1 + 6) = prefactor_z * *(b + 567 * OS1_S1 + 1) -
                                      p_over_q * *(b + 692 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 458 * OS1_S1 + 1);
            *(b + 567 * OS1_S1 + 7) =
                prefactor_y * *(b + 567 * OS1_S1 + 2) -
                p_over_q * *(b + 691 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 459 * OS1_S1 + 2) +
                one_over_two_q * *(b + 567 * OS1_S1 + 0);
            *(b + 567 * OS1_S1 + 8) = prefactor_z * *(b + 567 * OS1_S1 + 2) -
                                      p_over_q * *(b + 692 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 458 * OS1_S1 + 2);
            *(b + 567 * OS1_S1 + 9) = prefactor_z * *(b + 567 * OS1_S1 + 3) -
                                      p_over_q * *(b + 692 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 458 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 567 * OS1_S1 + 0);
            *(b + 568 * OS1_S1 + 4) =
                prefactor_x * *(b + 568 * OS1_S1 + 1) -
                p_over_q * *(b + 688 * OS1_S1 + 1) +
                11 * one_over_two_q * *(b + 463 * OS1_S1 + 1) +
                one_over_two_q * *(b + 568 * OS1_S1 + 0);
            *(b + 568 * OS1_S1 + 5) = prefactor_y * *(b + 568 * OS1_S1 + 1) -
                                      p_over_q * *(b + 692 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 460 * OS1_S1 + 1);
            *(b + 568 * OS1_S1 + 6) =
                prefactor_z * *(b + 568 * OS1_S1 + 1) -
                p_over_q * *(b + 693 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 459 * OS1_S1 + 1);
            *(b + 568 * OS1_S1 + 7) = prefactor_y * *(b + 568 * OS1_S1 + 2) -
                                      p_over_q * *(b + 692 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 460 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 568 * OS1_S1 + 0);
            *(b + 568 * OS1_S1 + 8) = prefactor_y * *(b + 568 * OS1_S1 + 3) -
                                      p_over_q * *(b + 692 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 460 * OS1_S1 + 3);
            *(b + 568 * OS1_S1 + 9) =
                prefactor_z * *(b + 568 * OS1_S1 + 3) -
                p_over_q * *(b + 693 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 459 * OS1_S1 + 3) +
                one_over_two_q * *(b + 568 * OS1_S1 + 0);
            *(b + 569 * OS1_S1 + 4) =
                prefactor_x * *(b + 569 * OS1_S1 + 1) -
                p_over_q * *(b + 689 * OS1_S1 + 1) +
                11 * one_over_two_q * *(b + 464 * OS1_S1 + 1) +
                one_over_two_q * *(b + 569 * OS1_S1 + 0);
            *(b + 569 * OS1_S1 + 5) = prefactor_y * *(b + 569 * OS1_S1 + 1) -
                                      p_over_q * *(b + 693 * OS1_S1 + 1);
            *(b + 569 * OS1_S1 + 6) =
                prefactor_z * *(b + 569 * OS1_S1 + 1) -
                p_over_q * *(b + 694 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 460 * OS1_S1 + 1);
            *(b + 569 * OS1_S1 + 7) = prefactor_y * *(b + 569 * OS1_S1 + 2) -
                                      p_over_q * *(b + 693 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 569 * OS1_S1 + 0);
            *(b + 569 * OS1_S1 + 8) = prefactor_y * *(b + 569 * OS1_S1 + 3) -
                                      p_over_q * *(b + 693 * OS1_S1 + 3);
            *(b + 569 * OS1_S1 + 9) =
                prefactor_z * *(b + 569 * OS1_S1 + 3) -
                p_over_q * *(b + 694 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 460 * OS1_S1 + 3) +
                one_over_two_q * *(b + 569 * OS1_S1 + 0);
            *(b + 570 * OS1_S1 + 4) =
                prefactor_x * *(b + 570 * OS1_S1 + 1) -
                p_over_q * *(b + 690 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 465 * OS1_S1 + 1) +
                one_over_two_q * *(b + 570 * OS1_S1 + 0);
            *(b + 570 * OS1_S1 + 5) =
                prefactor_y * *(b + 570 * OS1_S1 + 1) -
                p_over_q * *(b + 695 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 461 * OS1_S1 + 1);
            *(b + 570 * OS1_S1 + 6) = prefactor_z * *(b + 570 * OS1_S1 + 1) -
                                      p_over_q * *(b + 696 * OS1_S1 + 1);
            *(b + 570 * OS1_S1 + 7) =
                prefactor_y * *(b + 570 * OS1_S1 + 2) -
                p_over_q * *(b + 695 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 461 * OS1_S1 + 2) +
                one_over_two_q * *(b + 570 * OS1_S1 + 0);
            *(b + 570 * OS1_S1 + 8) = prefactor_z * *(b + 570 * OS1_S1 + 2) -
                                      p_over_q * *(b + 696 * OS1_S1 + 2);
            *(b + 570 * OS1_S1 + 9) = prefactor_z * *(b + 570 * OS1_S1 + 3) -
                                      p_over_q * *(b + 696 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 570 * OS1_S1 + 0);
            *(b + 571 * OS1_S1 + 4) =
                prefactor_x * *(b + 571 * OS1_S1 + 1) -
                p_over_q * *(b + 691 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 466 * OS1_S1 + 1) +
                one_over_two_q * *(b + 571 * OS1_S1 + 0);
            *(b + 571 * OS1_S1 + 5) =
                prefactor_y * *(b + 571 * OS1_S1 + 1) -
                p_over_q * *(b + 696 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 462 * OS1_S1 + 1);
            *(b + 571 * OS1_S1 + 6) = prefactor_z * *(b + 571 * OS1_S1 + 1) -
                                      p_over_q * *(b + 697 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 461 * OS1_S1 + 1);
            *(b + 571 * OS1_S1 + 7) =
                prefactor_y * *(b + 571 * OS1_S1 + 2) -
                p_over_q * *(b + 696 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 462 * OS1_S1 + 2) +
                one_over_two_q * *(b + 571 * OS1_S1 + 0);
            *(b + 571 * OS1_S1 + 8) = prefactor_z * *(b + 571 * OS1_S1 + 2) -
                                      p_over_q * *(b + 697 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 461 * OS1_S1 + 2);
            *(b + 571 * OS1_S1 + 9) = prefactor_z * *(b + 571 * OS1_S1 + 3) -
                                      p_over_q * *(b + 697 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 461 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 571 * OS1_S1 + 0);
            *(b + 572 * OS1_S1 + 4) =
                prefactor_x * *(b + 572 * OS1_S1 + 1) -
                p_over_q * *(b + 692 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 467 * OS1_S1 + 1) +
                one_over_two_q * *(b + 572 * OS1_S1 + 0);
            *(b + 572 * OS1_S1 + 5) =
                prefactor_y * *(b + 572 * OS1_S1 + 1) -
                p_over_q * *(b + 697 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 463 * OS1_S1 + 1);
            *(b + 572 * OS1_S1 + 6) =
                prefactor_z * *(b + 572 * OS1_S1 + 1) -
                p_over_q * *(b + 698 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 462 * OS1_S1 + 1);
            *(b + 572 * OS1_S1 + 7) =
                prefactor_y * *(b + 572 * OS1_S1 + 2) -
                p_over_q * *(b + 697 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 463 * OS1_S1 + 2) +
                one_over_two_q * *(b + 572 * OS1_S1 + 0);
            *(b + 572 * OS1_S1 + 8) =
                prefactor_z * *(b + 572 * OS1_S1 + 2) -
                p_over_q * *(b + 698 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 462 * OS1_S1 + 2);
            *(b + 572 * OS1_S1 + 9) =
                prefactor_z * *(b + 572 * OS1_S1 + 3) -
                p_over_q * *(b + 698 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 462 * OS1_S1 + 3) +
                one_over_two_q * *(b + 572 * OS1_S1 + 0);
            *(b + 573 * OS1_S1 + 4) =
                prefactor_x * *(b + 573 * OS1_S1 + 1) -
                p_over_q * *(b + 693 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 468 * OS1_S1 + 1) +
                one_over_two_q * *(b + 573 * OS1_S1 + 0);
            *(b + 573 * OS1_S1 + 5) = prefactor_y * *(b + 573 * OS1_S1 + 1) -
                                      p_over_q * *(b + 698 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 464 * OS1_S1 + 1);
            *(b + 573 * OS1_S1 + 6) =
                prefactor_z * *(b + 573 * OS1_S1 + 1) -
                p_over_q * *(b + 699 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 463 * OS1_S1 + 1);
            *(b + 573 * OS1_S1 + 7) = prefactor_y * *(b + 573 * OS1_S1 + 2) -
                                      p_over_q * *(b + 698 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 464 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 573 * OS1_S1 + 0);
            *(b + 573 * OS1_S1 + 8) = prefactor_y * *(b + 573 * OS1_S1 + 3) -
                                      p_over_q * *(b + 698 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 464 * OS1_S1 + 3);
            *(b + 573 * OS1_S1 + 9) =
                prefactor_z * *(b + 573 * OS1_S1 + 3) -
                p_over_q * *(b + 699 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 463 * OS1_S1 + 3) +
                one_over_two_q * *(b + 573 * OS1_S1 + 0);
            *(b + 574 * OS1_S1 + 4) =
                prefactor_x * *(b + 574 * OS1_S1 + 1) -
                p_over_q * *(b + 694 * OS1_S1 + 1) +
                10 * one_over_two_q * *(b + 469 * OS1_S1 + 1) +
                one_over_two_q * *(b + 574 * OS1_S1 + 0);
            *(b + 574 * OS1_S1 + 5) = prefactor_y * *(b + 574 * OS1_S1 + 1) -
                                      p_over_q * *(b + 699 * OS1_S1 + 1);
            *(b + 574 * OS1_S1 + 6) =
                prefactor_z * *(b + 574 * OS1_S1 + 1) -
                p_over_q * *(b + 700 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 464 * OS1_S1 + 1);
            *(b + 574 * OS1_S1 + 7) = prefactor_y * *(b + 574 * OS1_S1 + 2) -
                                      p_over_q * *(b + 699 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 574 * OS1_S1 + 0);
            *(b + 574 * OS1_S1 + 8) = prefactor_y * *(b + 574 * OS1_S1 + 3) -
                                      p_over_q * *(b + 699 * OS1_S1 + 3);
            *(b + 574 * OS1_S1 + 9) =
                prefactor_z * *(b + 574 * OS1_S1 + 3) -
                p_over_q * *(b + 700 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 464 * OS1_S1 + 3) +
                one_over_two_q * *(b + 574 * OS1_S1 + 0);
            *(b + 575 * OS1_S1 + 4) =
                prefactor_x * *(b + 575 * OS1_S1 + 1) -
                p_over_q * *(b + 695 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 470 * OS1_S1 + 1) +
                one_over_two_q * *(b + 575 * OS1_S1 + 0);
            *(b + 575 * OS1_S1 + 5) =
                prefactor_y * *(b + 575 * OS1_S1 + 1) -
                p_over_q * *(b + 701 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 465 * OS1_S1 + 1);
            *(b + 575 * OS1_S1 + 6) = prefactor_z * *(b + 575 * OS1_S1 + 1) -
                                      p_over_q * *(b + 702 * OS1_S1 + 1);
            *(b + 575 * OS1_S1 + 7) =
                prefactor_y * *(b + 575 * OS1_S1 + 2) -
                p_over_q * *(b + 701 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 465 * OS1_S1 + 2) +
                one_over_two_q * *(b + 575 * OS1_S1 + 0);
            *(b + 575 * OS1_S1 + 8) = prefactor_z * *(b + 575 * OS1_S1 + 2) -
                                      p_over_q * *(b + 702 * OS1_S1 + 2);
            *(b + 575 * OS1_S1 + 9) = prefactor_z * *(b + 575 * OS1_S1 + 3) -
                                      p_over_q * *(b + 702 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 575 * OS1_S1 + 0);
            *(b + 576 * OS1_S1 + 4) =
                prefactor_x * *(b + 576 * OS1_S1 + 1) -
                p_over_q * *(b + 696 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 471 * OS1_S1 + 1) +
                one_over_two_q * *(b + 576 * OS1_S1 + 0);
            *(b + 576 * OS1_S1 + 5) =
                prefactor_y * *(b + 576 * OS1_S1 + 1) -
                p_over_q * *(b + 702 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 466 * OS1_S1 + 1);
            *(b + 576 * OS1_S1 + 6) = prefactor_z * *(b + 576 * OS1_S1 + 1) -
                                      p_over_q * *(b + 703 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 465 * OS1_S1 + 1);
            *(b + 576 * OS1_S1 + 7) =
                prefactor_y * *(b + 576 * OS1_S1 + 2) -
                p_over_q * *(b + 702 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 466 * OS1_S1 + 2) +
                one_over_two_q * *(b + 576 * OS1_S1 + 0);
            *(b + 576 * OS1_S1 + 8) = prefactor_z * *(b + 576 * OS1_S1 + 2) -
                                      p_over_q * *(b + 703 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 465 * OS1_S1 + 2);
            *(b + 576 * OS1_S1 + 9) = prefactor_z * *(b + 576 * OS1_S1 + 3) -
                                      p_over_q * *(b + 703 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 465 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 576 * OS1_S1 + 0);
            *(b + 577 * OS1_S1 + 4) =
                prefactor_x * *(b + 577 * OS1_S1 + 1) -
                p_over_q * *(b + 697 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 472 * OS1_S1 + 1) +
                one_over_two_q * *(b + 577 * OS1_S1 + 0);
            *(b + 577 * OS1_S1 + 5) =
                prefactor_y * *(b + 577 * OS1_S1 + 1) -
                p_over_q * *(b + 703 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 467 * OS1_S1 + 1);
            *(b + 577 * OS1_S1 + 6) =
                prefactor_z * *(b + 577 * OS1_S1 + 1) -
                p_over_q * *(b + 704 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 466 * OS1_S1 + 1);
            *(b + 577 * OS1_S1 + 7) =
                prefactor_y * *(b + 577 * OS1_S1 + 2) -
                p_over_q * *(b + 703 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 467 * OS1_S1 + 2) +
                one_over_two_q * *(b + 577 * OS1_S1 + 0);
            *(b + 577 * OS1_S1 + 8) =
                prefactor_z * *(b + 577 * OS1_S1 + 2) -
                p_over_q * *(b + 704 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 466 * OS1_S1 + 2);
            *(b + 577 * OS1_S1 + 9) =
                prefactor_z * *(b + 577 * OS1_S1 + 3) -
                p_over_q * *(b + 704 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 466 * OS1_S1 + 3) +
                one_over_two_q * *(b + 577 * OS1_S1 + 0);
            *(b + 578 * OS1_S1 + 4) =
                prefactor_x * *(b + 578 * OS1_S1 + 1) -
                p_over_q * *(b + 698 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 473 * OS1_S1 + 1) +
                one_over_two_q * *(b + 578 * OS1_S1 + 0);
            *(b + 578 * OS1_S1 + 5) =
                prefactor_y * *(b + 578 * OS1_S1 + 1) -
                p_over_q * *(b + 704 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 468 * OS1_S1 + 1);
            *(b + 578 * OS1_S1 + 6) =
                prefactor_z * *(b + 578 * OS1_S1 + 1) -
                p_over_q * *(b + 705 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 467 * OS1_S1 + 1);
            *(b + 578 * OS1_S1 + 7) =
                prefactor_y * *(b + 578 * OS1_S1 + 2) -
                p_over_q * *(b + 704 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 468 * OS1_S1 + 2) +
                one_over_two_q * *(b + 578 * OS1_S1 + 0);
            *(b + 578 * OS1_S1 + 8) =
                prefactor_y * *(b + 578 * OS1_S1 + 3) -
                p_over_q * *(b + 704 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 468 * OS1_S1 + 3);
            *(b + 578 * OS1_S1 + 9) =
                prefactor_z * *(b + 578 * OS1_S1 + 3) -
                p_over_q * *(b + 705 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 467 * OS1_S1 + 3) +
                one_over_two_q * *(b + 578 * OS1_S1 + 0);
            *(b + 579 * OS1_S1 + 4) =
                prefactor_x * *(b + 579 * OS1_S1 + 1) -
                p_over_q * *(b + 699 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 474 * OS1_S1 + 1) +
                one_over_two_q * *(b + 579 * OS1_S1 + 0);
            *(b + 579 * OS1_S1 + 5) = prefactor_y * *(b + 579 * OS1_S1 + 1) -
                                      p_over_q * *(b + 705 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 469 * OS1_S1 + 1);
            *(b + 579 * OS1_S1 + 6) =
                prefactor_z * *(b + 579 * OS1_S1 + 1) -
                p_over_q * *(b + 706 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 468 * OS1_S1 + 1);
            *(b + 579 * OS1_S1 + 7) = prefactor_y * *(b + 579 * OS1_S1 + 2) -
                                      p_over_q * *(b + 705 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 469 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 579 * OS1_S1 + 0);
            *(b + 579 * OS1_S1 + 8) = prefactor_y * *(b + 579 * OS1_S1 + 3) -
                                      p_over_q * *(b + 705 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 469 * OS1_S1 + 3);
            *(b + 579 * OS1_S1 + 9) =
                prefactor_z * *(b + 579 * OS1_S1 + 3) -
                p_over_q * *(b + 706 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 468 * OS1_S1 + 3) +
                one_over_two_q * *(b + 579 * OS1_S1 + 0);
            *(b + 580 * OS1_S1 + 4) =
                prefactor_x * *(b + 580 * OS1_S1 + 1) -
                p_over_q * *(b + 700 * OS1_S1 + 1) +
                9 * one_over_two_q * *(b + 475 * OS1_S1 + 1) +
                one_over_two_q * *(b + 580 * OS1_S1 + 0);
            *(b + 580 * OS1_S1 + 5) = prefactor_y * *(b + 580 * OS1_S1 + 1) -
                                      p_over_q * *(b + 706 * OS1_S1 + 1);
            *(b + 580 * OS1_S1 + 6) =
                prefactor_z * *(b + 580 * OS1_S1 + 1) -
                p_over_q * *(b + 707 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 469 * OS1_S1 + 1);
            *(b + 580 * OS1_S1 + 7) = prefactor_y * *(b + 580 * OS1_S1 + 2) -
                                      p_over_q * *(b + 706 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 580 * OS1_S1 + 0);
            *(b + 580 * OS1_S1 + 8) = prefactor_y * *(b + 580 * OS1_S1 + 3) -
                                      p_over_q * *(b + 706 * OS1_S1 + 3);
            *(b + 580 * OS1_S1 + 9) =
                prefactor_z * *(b + 580 * OS1_S1 + 3) -
                p_over_q * *(b + 707 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 469 * OS1_S1 + 3) +
                one_over_two_q * *(b + 580 * OS1_S1 + 0);
            *(b + 581 * OS1_S1 + 4) =
                prefactor_x * *(b + 581 * OS1_S1 + 1) -
                p_over_q * *(b + 701 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 476 * OS1_S1 + 1) +
                one_over_two_q * *(b + 581 * OS1_S1 + 0);
            *(b + 581 * OS1_S1 + 5) =
                prefactor_y * *(b + 581 * OS1_S1 + 1) -
                p_over_q * *(b + 708 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 470 * OS1_S1 + 1);
            *(b + 581 * OS1_S1 + 6) = prefactor_z * *(b + 581 * OS1_S1 + 1) -
                                      p_over_q * *(b + 709 * OS1_S1 + 1);
            *(b + 581 * OS1_S1 + 7) =
                prefactor_y * *(b + 581 * OS1_S1 + 2) -
                p_over_q * *(b + 708 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 470 * OS1_S1 + 2) +
                one_over_two_q * *(b + 581 * OS1_S1 + 0);
            *(b + 581 * OS1_S1 + 8) = prefactor_z * *(b + 581 * OS1_S1 + 2) -
                                      p_over_q * *(b + 709 * OS1_S1 + 2);
            *(b + 581 * OS1_S1 + 9) = prefactor_z * *(b + 581 * OS1_S1 + 3) -
                                      p_over_q * *(b + 709 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 581 * OS1_S1 + 0);
            *(b + 582 * OS1_S1 + 4) =
                prefactor_x * *(b + 582 * OS1_S1 + 1) -
                p_over_q * *(b + 702 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 477 * OS1_S1 + 1) +
                one_over_two_q * *(b + 582 * OS1_S1 + 0);
            *(b + 582 * OS1_S1 + 5) =
                prefactor_y * *(b + 582 * OS1_S1 + 1) -
                p_over_q * *(b + 709 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 471 * OS1_S1 + 1);
            *(b + 582 * OS1_S1 + 6) = prefactor_z * *(b + 582 * OS1_S1 + 1) -
                                      p_over_q * *(b + 710 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 470 * OS1_S1 + 1);
            *(b + 582 * OS1_S1 + 7) =
                prefactor_y * *(b + 582 * OS1_S1 + 2) -
                p_over_q * *(b + 709 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 471 * OS1_S1 + 2) +
                one_over_two_q * *(b + 582 * OS1_S1 + 0);
            *(b + 582 * OS1_S1 + 8) = prefactor_z * *(b + 582 * OS1_S1 + 2) -
                                      p_over_q * *(b + 710 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 470 * OS1_S1 + 2);
            *(b + 582 * OS1_S1 + 9) = prefactor_z * *(b + 582 * OS1_S1 + 3) -
                                      p_over_q * *(b + 710 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 470 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 582 * OS1_S1 + 0);
            *(b + 583 * OS1_S1 + 4) =
                prefactor_x * *(b + 583 * OS1_S1 + 1) -
                p_over_q * *(b + 703 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 478 * OS1_S1 + 1) +
                one_over_two_q * *(b + 583 * OS1_S1 + 0);
            *(b + 583 * OS1_S1 + 5) =
                prefactor_y * *(b + 583 * OS1_S1 + 1) -
                p_over_q * *(b + 710 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 472 * OS1_S1 + 1);
            *(b + 583 * OS1_S1 + 6) =
                prefactor_z * *(b + 583 * OS1_S1 + 1) -
                p_over_q * *(b + 711 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 471 * OS1_S1 + 1);
            *(b + 583 * OS1_S1 + 7) =
                prefactor_y * *(b + 583 * OS1_S1 + 2) -
                p_over_q * *(b + 710 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 472 * OS1_S1 + 2) +
                one_over_two_q * *(b + 583 * OS1_S1 + 0);
            *(b + 583 * OS1_S1 + 8) =
                prefactor_z * *(b + 583 * OS1_S1 + 2) -
                p_over_q * *(b + 711 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 471 * OS1_S1 + 2);
            *(b + 583 * OS1_S1 + 9) =
                prefactor_z * *(b + 583 * OS1_S1 + 3) -
                p_over_q * *(b + 711 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 471 * OS1_S1 + 3) +
                one_over_two_q * *(b + 583 * OS1_S1 + 0);
            *(b + 584 * OS1_S1 + 4) =
                prefactor_x * *(b + 584 * OS1_S1 + 1) -
                p_over_q * *(b + 704 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 479 * OS1_S1 + 1) +
                one_over_two_q * *(b + 584 * OS1_S1 + 0);
            *(b + 584 * OS1_S1 + 5) =
                prefactor_y * *(b + 584 * OS1_S1 + 1) -
                p_over_q * *(b + 711 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 473 * OS1_S1 + 1);
            *(b + 584 * OS1_S1 + 6) =
                prefactor_z * *(b + 584 * OS1_S1 + 1) -
                p_over_q * *(b + 712 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 472 * OS1_S1 + 1);
            *(b + 584 * OS1_S1 + 7) =
                prefactor_y * *(b + 584 * OS1_S1 + 2) -
                p_over_q * *(b + 711 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 473 * OS1_S1 + 2) +
                one_over_two_q * *(b + 584 * OS1_S1 + 0);
            *(b + 584 * OS1_S1 + 8) =
                prefactor_z * *(b + 584 * OS1_S1 + 2) -
                p_over_q * *(b + 712 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 472 * OS1_S1 + 2);
            *(b + 584 * OS1_S1 + 9) =
                prefactor_z * *(b + 584 * OS1_S1 + 3) -
                p_over_q * *(b + 712 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 472 * OS1_S1 + 3) +
                one_over_two_q * *(b + 584 * OS1_S1 + 0);
            *(b + 585 * OS1_S1 + 4) =
                prefactor_x * *(b + 585 * OS1_S1 + 1) -
                p_over_q * *(b + 705 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 480 * OS1_S1 + 1) +
                one_over_two_q * *(b + 585 * OS1_S1 + 0);
            *(b + 585 * OS1_S1 + 5) =
                prefactor_y * *(b + 585 * OS1_S1 + 1) -
                p_over_q * *(b + 712 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 474 * OS1_S1 + 1);
            *(b + 585 * OS1_S1 + 6) =
                prefactor_z * *(b + 585 * OS1_S1 + 1) -
                p_over_q * *(b + 713 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 473 * OS1_S1 + 1);
            *(b + 585 * OS1_S1 + 7) =
                prefactor_y * *(b + 585 * OS1_S1 + 2) -
                p_over_q * *(b + 712 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 474 * OS1_S1 + 2) +
                one_over_two_q * *(b + 585 * OS1_S1 + 0);
            *(b + 585 * OS1_S1 + 8) =
                prefactor_y * *(b + 585 * OS1_S1 + 3) -
                p_over_q * *(b + 712 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 474 * OS1_S1 + 3);
            *(b + 585 * OS1_S1 + 9) =
                prefactor_z * *(b + 585 * OS1_S1 + 3) -
                p_over_q * *(b + 713 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 473 * OS1_S1 + 3) +
                one_over_two_q * *(b + 585 * OS1_S1 + 0);
            *(b + 586 * OS1_S1 + 4) =
                prefactor_x * *(b + 586 * OS1_S1 + 1) -
                p_over_q * *(b + 706 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 481 * OS1_S1 + 1) +
                one_over_two_q * *(b + 586 * OS1_S1 + 0);
            *(b + 586 * OS1_S1 + 5) = prefactor_y * *(b + 586 * OS1_S1 + 1) -
                                      p_over_q * *(b + 713 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 475 * OS1_S1 + 1);
            *(b + 586 * OS1_S1 + 6) =
                prefactor_z * *(b + 586 * OS1_S1 + 1) -
                p_over_q * *(b + 714 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 474 * OS1_S1 + 1);
            *(b + 586 * OS1_S1 + 7) = prefactor_y * *(b + 586 * OS1_S1 + 2) -
                                      p_over_q * *(b + 713 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 475 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 586 * OS1_S1 + 0);
            *(b + 586 * OS1_S1 + 8) = prefactor_y * *(b + 586 * OS1_S1 + 3) -
                                      p_over_q * *(b + 713 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 475 * OS1_S1 + 3);
            *(b + 586 * OS1_S1 + 9) =
                prefactor_z * *(b + 586 * OS1_S1 + 3) -
                p_over_q * *(b + 714 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 474 * OS1_S1 + 3) +
                one_over_two_q * *(b + 586 * OS1_S1 + 0);
            *(b + 587 * OS1_S1 + 4) =
                prefactor_x * *(b + 587 * OS1_S1 + 1) -
                p_over_q * *(b + 707 * OS1_S1 + 1) +
                8 * one_over_two_q * *(b + 482 * OS1_S1 + 1) +
                one_over_two_q * *(b + 587 * OS1_S1 + 0);
            *(b + 587 * OS1_S1 + 5) = prefactor_y * *(b + 587 * OS1_S1 + 1) -
                                      p_over_q * *(b + 714 * OS1_S1 + 1);
            *(b + 587 * OS1_S1 + 6) =
                prefactor_z * *(b + 587 * OS1_S1 + 1) -
                p_over_q * *(b + 715 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 475 * OS1_S1 + 1);
            *(b + 587 * OS1_S1 + 7) = prefactor_y * *(b + 587 * OS1_S1 + 2) -
                                      p_over_q * *(b + 714 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 587 * OS1_S1 + 0);
            *(b + 587 * OS1_S1 + 8) = prefactor_y * *(b + 587 * OS1_S1 + 3) -
                                      p_over_q * *(b + 714 * OS1_S1 + 3);
            *(b + 587 * OS1_S1 + 9) =
                prefactor_z * *(b + 587 * OS1_S1 + 3) -
                p_over_q * *(b + 715 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 475 * OS1_S1 + 3) +
                one_over_two_q * *(b + 587 * OS1_S1 + 0);
            *(b + 588 * OS1_S1 + 4) =
                prefactor_x * *(b + 588 * OS1_S1 + 1) -
                p_over_q * *(b + 708 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 483 * OS1_S1 + 1) +
                one_over_two_q * *(b + 588 * OS1_S1 + 0);
            *(b + 588 * OS1_S1 + 5) =
                prefactor_y * *(b + 588 * OS1_S1 + 1) -
                p_over_q * *(b + 716 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 476 * OS1_S1 + 1);
            *(b + 588 * OS1_S1 + 6) = prefactor_z * *(b + 588 * OS1_S1 + 1) -
                                      p_over_q * *(b + 717 * OS1_S1 + 1);
            *(b + 588 * OS1_S1 + 7) =
                prefactor_y * *(b + 588 * OS1_S1 + 2) -
                p_over_q * *(b + 716 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 476 * OS1_S1 + 2) +
                one_over_two_q * *(b + 588 * OS1_S1 + 0);
            *(b + 588 * OS1_S1 + 8) = prefactor_z * *(b + 588 * OS1_S1 + 2) -
                                      p_over_q * *(b + 717 * OS1_S1 + 2);
            *(b + 588 * OS1_S1 + 9) = prefactor_z * *(b + 588 * OS1_S1 + 3) -
                                      p_over_q * *(b + 717 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 588 * OS1_S1 + 0);
            *(b + 589 * OS1_S1 + 4) =
                prefactor_x * *(b + 589 * OS1_S1 + 1) -
                p_over_q * *(b + 709 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 484 * OS1_S1 + 1) +
                one_over_two_q * *(b + 589 * OS1_S1 + 0);
            *(b + 589 * OS1_S1 + 5) =
                prefactor_y * *(b + 589 * OS1_S1 + 1) -
                p_over_q * *(b + 717 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 477 * OS1_S1 + 1);
            *(b + 589 * OS1_S1 + 6) = prefactor_z * *(b + 589 * OS1_S1 + 1) -
                                      p_over_q * *(b + 718 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 476 * OS1_S1 + 1);
            *(b + 589 * OS1_S1 + 7) =
                prefactor_y * *(b + 589 * OS1_S1 + 2) -
                p_over_q * *(b + 717 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 477 * OS1_S1 + 2) +
                one_over_two_q * *(b + 589 * OS1_S1 + 0);
            *(b + 589 * OS1_S1 + 8) = prefactor_z * *(b + 589 * OS1_S1 + 2) -
                                      p_over_q * *(b + 718 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 476 * OS1_S1 + 2);
            *(b + 589 * OS1_S1 + 9) = prefactor_z * *(b + 589 * OS1_S1 + 3) -
                                      p_over_q * *(b + 718 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 476 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 589 * OS1_S1 + 0);
            *(b + 590 * OS1_S1 + 4) =
                prefactor_x * *(b + 590 * OS1_S1 + 1) -
                p_over_q * *(b + 710 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 485 * OS1_S1 + 1) +
                one_over_two_q * *(b + 590 * OS1_S1 + 0);
            *(b + 590 * OS1_S1 + 5) =
                prefactor_y * *(b + 590 * OS1_S1 + 1) -
                p_over_q * *(b + 718 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 478 * OS1_S1 + 1);
            *(b + 590 * OS1_S1 + 6) =
                prefactor_z * *(b + 590 * OS1_S1 + 1) -
                p_over_q * *(b + 719 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 477 * OS1_S1 + 1);
            *(b + 590 * OS1_S1 + 7) =
                prefactor_y * *(b + 590 * OS1_S1 + 2) -
                p_over_q * *(b + 718 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 478 * OS1_S1 + 2) +
                one_over_two_q * *(b + 590 * OS1_S1 + 0);
            *(b + 590 * OS1_S1 + 8) =
                prefactor_z * *(b + 590 * OS1_S1 + 2) -
                p_over_q * *(b + 719 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 477 * OS1_S1 + 2);
            *(b + 590 * OS1_S1 + 9) =
                prefactor_z * *(b + 590 * OS1_S1 + 3) -
                p_over_q * *(b + 719 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 477 * OS1_S1 + 3) +
                one_over_two_q * *(b + 590 * OS1_S1 + 0);
            *(b + 591 * OS1_S1 + 4) =
                prefactor_x * *(b + 591 * OS1_S1 + 1) -
                p_over_q * *(b + 711 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 486 * OS1_S1 + 1) +
                one_over_two_q * *(b + 591 * OS1_S1 + 0);
            *(b + 591 * OS1_S1 + 5) =
                prefactor_y * *(b + 591 * OS1_S1 + 1) -
                p_over_q * *(b + 719 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 479 * OS1_S1 + 1);
            *(b + 591 * OS1_S1 + 6) =
                prefactor_z * *(b + 591 * OS1_S1 + 1) -
                p_over_q * *(b + 720 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 478 * OS1_S1 + 1);
            *(b + 591 * OS1_S1 + 7) =
                prefactor_y * *(b + 591 * OS1_S1 + 2) -
                p_over_q * *(b + 719 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 479 * OS1_S1 + 2) +
                one_over_two_q * *(b + 591 * OS1_S1 + 0);
            *(b + 591 * OS1_S1 + 8) =
                prefactor_z * *(b + 591 * OS1_S1 + 2) -
                p_over_q * *(b + 720 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 478 * OS1_S1 + 2);
            *(b + 591 * OS1_S1 + 9) =
                prefactor_z * *(b + 591 * OS1_S1 + 3) -
                p_over_q * *(b + 720 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 478 * OS1_S1 + 3) +
                one_over_two_q * *(b + 591 * OS1_S1 + 0);
            *(b + 592 * OS1_S1 + 4) =
                prefactor_x * *(b + 592 * OS1_S1 + 1) -
                p_over_q * *(b + 712 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 487 * OS1_S1 + 1) +
                one_over_two_q * *(b + 592 * OS1_S1 + 0);
            *(b + 592 * OS1_S1 + 5) =
                prefactor_y * *(b + 592 * OS1_S1 + 1) -
                p_over_q * *(b + 720 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 480 * OS1_S1 + 1);
            *(b + 592 * OS1_S1 + 6) =
                prefactor_z * *(b + 592 * OS1_S1 + 1) -
                p_over_q * *(b + 721 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 479 * OS1_S1 + 1);
            *(b + 592 * OS1_S1 + 7) =
                prefactor_y * *(b + 592 * OS1_S1 + 2) -
                p_over_q * *(b + 720 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 480 * OS1_S1 + 2) +
                one_over_two_q * *(b + 592 * OS1_S1 + 0);
            *(b + 592 * OS1_S1 + 8) =
                prefactor_y * *(b + 592 * OS1_S1 + 3) -
                p_over_q * *(b + 720 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 480 * OS1_S1 + 3);
            *(b + 592 * OS1_S1 + 9) =
                prefactor_z * *(b + 592 * OS1_S1 + 3) -
                p_over_q * *(b + 721 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 479 * OS1_S1 + 3) +
                one_over_two_q * *(b + 592 * OS1_S1 + 0);
            *(b + 593 * OS1_S1 + 4) =
                prefactor_x * *(b + 593 * OS1_S1 + 1) -
                p_over_q * *(b + 713 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 488 * OS1_S1 + 1) +
                one_over_two_q * *(b + 593 * OS1_S1 + 0);
            *(b + 593 * OS1_S1 + 5) =
                prefactor_y * *(b + 593 * OS1_S1 + 1) -
                p_over_q * *(b + 721 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 481 * OS1_S1 + 1);
            *(b + 593 * OS1_S1 + 6) =
                prefactor_z * *(b + 593 * OS1_S1 + 1) -
                p_over_q * *(b + 722 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 480 * OS1_S1 + 1);
            *(b + 593 * OS1_S1 + 7) =
                prefactor_y * *(b + 593 * OS1_S1 + 2) -
                p_over_q * *(b + 721 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 481 * OS1_S1 + 2) +
                one_over_two_q * *(b + 593 * OS1_S1 + 0);
            *(b + 593 * OS1_S1 + 8) =
                prefactor_y * *(b + 593 * OS1_S1 + 3) -
                p_over_q * *(b + 721 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 481 * OS1_S1 + 3);
            *(b + 593 * OS1_S1 + 9) =
                prefactor_z * *(b + 593 * OS1_S1 + 3) -
                p_over_q * *(b + 722 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 480 * OS1_S1 + 3) +
                one_over_two_q * *(b + 593 * OS1_S1 + 0);
            *(b + 594 * OS1_S1 + 4) =
                prefactor_x * *(b + 594 * OS1_S1 + 1) -
                p_over_q * *(b + 714 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 489 * OS1_S1 + 1) +
                one_over_two_q * *(b + 594 * OS1_S1 + 0);
            *(b + 594 * OS1_S1 + 5) = prefactor_y * *(b + 594 * OS1_S1 + 1) -
                                      p_over_q * *(b + 722 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 482 * OS1_S1 + 1);
            *(b + 594 * OS1_S1 + 6) =
                prefactor_z * *(b + 594 * OS1_S1 + 1) -
                p_over_q * *(b + 723 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 481 * OS1_S1 + 1);
            *(b + 594 * OS1_S1 + 7) = prefactor_y * *(b + 594 * OS1_S1 + 2) -
                                      p_over_q * *(b + 722 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 482 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 594 * OS1_S1 + 0);
            *(b + 594 * OS1_S1 + 8) = prefactor_y * *(b + 594 * OS1_S1 + 3) -
                                      p_over_q * *(b + 722 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 482 * OS1_S1 + 3);
            *(b + 594 * OS1_S1 + 9) =
                prefactor_z * *(b + 594 * OS1_S1 + 3) -
                p_over_q * *(b + 723 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 481 * OS1_S1 + 3) +
                one_over_two_q * *(b + 594 * OS1_S1 + 0);
            *(b + 595 * OS1_S1 + 4) =
                prefactor_x * *(b + 595 * OS1_S1 + 1) -
                p_over_q * *(b + 715 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 490 * OS1_S1 + 1) +
                one_over_two_q * *(b + 595 * OS1_S1 + 0);
            *(b + 595 * OS1_S1 + 5) = prefactor_y * *(b + 595 * OS1_S1 + 1) -
                                      p_over_q * *(b + 723 * OS1_S1 + 1);
            *(b + 595 * OS1_S1 + 6) =
                prefactor_z * *(b + 595 * OS1_S1 + 1) -
                p_over_q * *(b + 724 * OS1_S1 + 1) +
                7 * one_over_two_q * *(b + 482 * OS1_S1 + 1);
            *(b + 595 * OS1_S1 + 7) = prefactor_y * *(b + 595 * OS1_S1 + 2) -
                                      p_over_q * *(b + 723 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 595 * OS1_S1 + 0);
            *(b + 595 * OS1_S1 + 8) = prefactor_y * *(b + 595 * OS1_S1 + 3) -
                                      p_over_q * *(b + 723 * OS1_S1 + 3);
            *(b + 595 * OS1_S1 + 9) =
                prefactor_z * *(b + 595 * OS1_S1 + 3) -
                p_over_q * *(b + 724 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 482 * OS1_S1 + 3) +
                one_over_two_q * *(b + 595 * OS1_S1 + 0);
            *(b + 596 * OS1_S1 + 4) =
                prefactor_x * *(b + 596 * OS1_S1 + 1) -
                p_over_q * *(b + 716 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 491 * OS1_S1 + 1) +
                one_over_two_q * *(b + 596 * OS1_S1 + 0);
            *(b + 596 * OS1_S1 + 5) =
                prefactor_x * *(b + 596 * OS1_S1 + 2) -
                p_over_q * *(b + 716 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 491 * OS1_S1 + 2);
            *(b + 596 * OS1_S1 + 6) = prefactor_z * *(b + 596 * OS1_S1 + 1) -
                                      p_over_q * *(b + 726 * OS1_S1 + 1);
            *(b + 596 * OS1_S1 + 7) =
                prefactor_y * *(b + 596 * OS1_S1 + 2) -
                p_over_q * *(b + 725 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 483 * OS1_S1 + 2) +
                one_over_two_q * *(b + 596 * OS1_S1 + 0);
            *(b + 596 * OS1_S1 + 8) = prefactor_z * *(b + 596 * OS1_S1 + 2) -
                                      p_over_q * *(b + 726 * OS1_S1 + 2);
            *(b + 596 * OS1_S1 + 9) = prefactor_z * *(b + 596 * OS1_S1 + 3) -
                                      p_over_q * *(b + 726 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 596 * OS1_S1 + 0);
            *(b + 597 * OS1_S1 + 4) =
                prefactor_x * *(b + 597 * OS1_S1 + 1) -
                p_over_q * *(b + 717 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 492 * OS1_S1 + 1) +
                one_over_two_q * *(b + 597 * OS1_S1 + 0);
            *(b + 597 * OS1_S1 + 5) =
                prefactor_x * *(b + 597 * OS1_S1 + 2) -
                p_over_q * *(b + 717 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 492 * OS1_S1 + 2);
            *(b + 597 * OS1_S1 + 6) = prefactor_z * *(b + 597 * OS1_S1 + 1) -
                                      p_over_q * *(b + 727 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 483 * OS1_S1 + 1);
            *(b + 597 * OS1_S1 + 7) =
                prefactor_y * *(b + 597 * OS1_S1 + 2) -
                p_over_q * *(b + 726 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 484 * OS1_S1 + 2) +
                one_over_two_q * *(b + 597 * OS1_S1 + 0);
            *(b + 597 * OS1_S1 + 8) = prefactor_z * *(b + 597 * OS1_S1 + 2) -
                                      p_over_q * *(b + 727 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 483 * OS1_S1 + 2);
            *(b + 597 * OS1_S1 + 9) = prefactor_z * *(b + 597 * OS1_S1 + 3) -
                                      p_over_q * *(b + 727 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 483 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 597 * OS1_S1 + 0);
            *(b + 598 * OS1_S1 + 4) =
                prefactor_x * *(b + 598 * OS1_S1 + 1) -
                p_over_q * *(b + 718 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 493 * OS1_S1 + 1) +
                one_over_two_q * *(b + 598 * OS1_S1 + 0);
            *(b + 598 * OS1_S1 + 5) =
                prefactor_y * *(b + 598 * OS1_S1 + 1) -
                p_over_q * *(b + 727 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 485 * OS1_S1 + 1);
            *(b + 598 * OS1_S1 + 6) =
                prefactor_z * *(b + 598 * OS1_S1 + 1) -
                p_over_q * *(b + 728 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 484 * OS1_S1 + 1);
            *(b + 598 * OS1_S1 + 7) =
                prefactor_y * *(b + 598 * OS1_S1 + 2) -
                p_over_q * *(b + 727 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 485 * OS1_S1 + 2) +
                one_over_two_q * *(b + 598 * OS1_S1 + 0);
            *(b + 598 * OS1_S1 + 8) =
                prefactor_z * *(b + 598 * OS1_S1 + 2) -
                p_over_q * *(b + 728 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 484 * OS1_S1 + 2);
            *(b + 598 * OS1_S1 + 9) =
                prefactor_z * *(b + 598 * OS1_S1 + 3) -
                p_over_q * *(b + 728 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 484 * OS1_S1 + 3) +
                one_over_two_q * *(b + 598 * OS1_S1 + 0);
            *(b + 599 * OS1_S1 + 4) =
                prefactor_x * *(b + 599 * OS1_S1 + 1) -
                p_over_q * *(b + 719 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 494 * OS1_S1 + 1) +
                one_over_two_q * *(b + 599 * OS1_S1 + 0);
            *(b + 599 * OS1_S1 + 5) =
                prefactor_y * *(b + 599 * OS1_S1 + 1) -
                p_over_q * *(b + 728 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 486 * OS1_S1 + 1);
            *(b + 599 * OS1_S1 + 6) =
                prefactor_z * *(b + 599 * OS1_S1 + 1) -
                p_over_q * *(b + 729 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 485 * OS1_S1 + 1);
            *(b + 599 * OS1_S1 + 7) =
                prefactor_y * *(b + 599 * OS1_S1 + 2) -
                p_over_q * *(b + 728 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 486 * OS1_S1 + 2) +
                one_over_two_q * *(b + 599 * OS1_S1 + 0);
            *(b + 599 * OS1_S1 + 8) =
                prefactor_z * *(b + 599 * OS1_S1 + 2) -
                p_over_q * *(b + 729 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 485 * OS1_S1 + 2);
            *(b + 599 * OS1_S1 + 9) =
                prefactor_z * *(b + 599 * OS1_S1 + 3) -
                p_over_q * *(b + 729 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 485 * OS1_S1 + 3) +
                one_over_two_q * *(b + 599 * OS1_S1 + 0);
            *(b + 600 * OS1_S1 + 4) =
                prefactor_x * *(b + 600 * OS1_S1 + 1) -
                p_over_q * *(b + 720 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 495 * OS1_S1 + 1) +
                one_over_two_q * *(b + 600 * OS1_S1 + 0);
            *(b + 600 * OS1_S1 + 5) =
                prefactor_y * *(b + 600 * OS1_S1 + 1) -
                p_over_q * *(b + 729 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 487 * OS1_S1 + 1);
            *(b + 600 * OS1_S1 + 6) =
                prefactor_z * *(b + 600 * OS1_S1 + 1) -
                p_over_q * *(b + 730 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 486 * OS1_S1 + 1);
            *(b + 600 * OS1_S1 + 7) =
                prefactor_y * *(b + 600 * OS1_S1 + 2) -
                p_over_q * *(b + 729 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 487 * OS1_S1 + 2) +
                one_over_two_q * *(b + 600 * OS1_S1 + 0);
            *(b + 600 * OS1_S1 + 8) =
                prefactor_z * *(b + 600 * OS1_S1 + 2) -
                p_over_q * *(b + 730 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 486 * OS1_S1 + 2);
            *(b + 600 * OS1_S1 + 9) =
                prefactor_z * *(b + 600 * OS1_S1 + 3) -
                p_over_q * *(b + 730 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 486 * OS1_S1 + 3) +
                one_over_two_q * *(b + 600 * OS1_S1 + 0);
            *(b + 601 * OS1_S1 + 4) =
                prefactor_x * *(b + 601 * OS1_S1 + 1) -
                p_over_q * *(b + 721 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 496 * OS1_S1 + 1) +
                one_over_two_q * *(b + 601 * OS1_S1 + 0);
            *(b + 601 * OS1_S1 + 5) =
                prefactor_y * *(b + 601 * OS1_S1 + 1) -
                p_over_q * *(b + 730 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 488 * OS1_S1 + 1);
            *(b + 601 * OS1_S1 + 6) =
                prefactor_z * *(b + 601 * OS1_S1 + 1) -
                p_over_q * *(b + 731 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 487 * OS1_S1 + 1);
            *(b + 601 * OS1_S1 + 7) =
                prefactor_y * *(b + 601 * OS1_S1 + 2) -
                p_over_q * *(b + 730 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 488 * OS1_S1 + 2) +
                one_over_two_q * *(b + 601 * OS1_S1 + 0);
            *(b + 601 * OS1_S1 + 8) =
                prefactor_y * *(b + 601 * OS1_S1 + 3) -
                p_over_q * *(b + 730 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 488 * OS1_S1 + 3);
            *(b + 601 * OS1_S1 + 9) =
                prefactor_z * *(b + 601 * OS1_S1 + 3) -
                p_over_q * *(b + 731 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 487 * OS1_S1 + 3) +
                one_over_two_q * *(b + 601 * OS1_S1 + 0);
            *(b + 602 * OS1_S1 + 4) =
                prefactor_x * *(b + 602 * OS1_S1 + 1) -
                p_over_q * *(b + 722 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 497 * OS1_S1 + 1) +
                one_over_two_q * *(b + 602 * OS1_S1 + 0);
            *(b + 602 * OS1_S1 + 5) =
                prefactor_y * *(b + 602 * OS1_S1 + 1) -
                p_over_q * *(b + 731 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 489 * OS1_S1 + 1);
            *(b + 602 * OS1_S1 + 6) =
                prefactor_z * *(b + 602 * OS1_S1 + 1) -
                p_over_q * *(b + 732 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 488 * OS1_S1 + 1);
            *(b + 602 * OS1_S1 + 7) =
                prefactor_y * *(b + 602 * OS1_S1 + 2) -
                p_over_q * *(b + 731 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 489 * OS1_S1 + 2) +
                one_over_two_q * *(b + 602 * OS1_S1 + 0);
            *(b + 602 * OS1_S1 + 8) =
                prefactor_y * *(b + 602 * OS1_S1 + 3) -
                p_over_q * *(b + 731 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 489 * OS1_S1 + 3);
            *(b + 602 * OS1_S1 + 9) =
                prefactor_z * *(b + 602 * OS1_S1 + 3) -
                p_over_q * *(b + 732 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 488 * OS1_S1 + 3) +
                one_over_two_q * *(b + 602 * OS1_S1 + 0);
            *(b + 603 * OS1_S1 + 4) =
                prefactor_x * *(b + 603 * OS1_S1 + 1) -
                p_over_q * *(b + 723 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 498 * OS1_S1 + 1) +
                one_over_two_q * *(b + 603 * OS1_S1 + 0);
            *(b + 603 * OS1_S1 + 5) = prefactor_y * *(b + 603 * OS1_S1 + 1) -
                                      p_over_q * *(b + 732 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 490 * OS1_S1 + 1);
            *(b + 603 * OS1_S1 + 6) =
                prefactor_x * *(b + 603 * OS1_S1 + 3) -
                p_over_q * *(b + 723 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 498 * OS1_S1 + 3);
            *(b + 603 * OS1_S1 + 7) = prefactor_y * *(b + 603 * OS1_S1 + 2) -
                                      p_over_q * *(b + 732 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 490 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 603 * OS1_S1 + 0);
            *(b + 603 * OS1_S1 + 8) = prefactor_y * *(b + 603 * OS1_S1 + 3) -
                                      p_over_q * *(b + 732 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 490 * OS1_S1 + 3);
            *(b + 603 * OS1_S1 + 9) =
                prefactor_z * *(b + 603 * OS1_S1 + 3) -
                p_over_q * *(b + 733 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 489 * OS1_S1 + 3) +
                one_over_two_q * *(b + 603 * OS1_S1 + 0);
            *(b + 604 * OS1_S1 + 4) =
                prefactor_x * *(b + 604 * OS1_S1 + 1) -
                p_over_q * *(b + 724 * OS1_S1 + 1) +
                6 * one_over_two_q * *(b + 499 * OS1_S1 + 1) +
                one_over_two_q * *(b + 604 * OS1_S1 + 0);
            *(b + 604 * OS1_S1 + 5) = prefactor_y * *(b + 604 * OS1_S1 + 1) -
                                      p_over_q * *(b + 733 * OS1_S1 + 1);
            *(b + 604 * OS1_S1 + 6) =
                prefactor_x * *(b + 604 * OS1_S1 + 3) -
                p_over_q * *(b + 724 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 499 * OS1_S1 + 3);
            *(b + 604 * OS1_S1 + 7) = prefactor_y * *(b + 604 * OS1_S1 + 2) -
                                      p_over_q * *(b + 733 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 604 * OS1_S1 + 0);
            *(b + 604 * OS1_S1 + 8) = prefactor_y * *(b + 604 * OS1_S1 + 3) -
                                      p_over_q * *(b + 733 * OS1_S1 + 3);
            *(b + 604 * OS1_S1 + 9) =
                prefactor_z * *(b + 604 * OS1_S1 + 3) -
                p_over_q * *(b + 734 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 490 * OS1_S1 + 3) +
                one_over_two_q * *(b + 604 * OS1_S1 + 0);
            *(b + 605 * OS1_S1 + 4) =
                prefactor_x * *(b + 605 * OS1_S1 + 1) -
                p_over_q * *(b + 725 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 500 * OS1_S1 + 1) +
                one_over_two_q * *(b + 605 * OS1_S1 + 0);
            *(b + 605 * OS1_S1 + 5) =
                prefactor_x * *(b + 605 * OS1_S1 + 2) -
                p_over_q * *(b + 725 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 500 * OS1_S1 + 2);
            *(b + 605 * OS1_S1 + 6) = prefactor_z * *(b + 605 * OS1_S1 + 1) -
                                      p_over_q * *(b + 736 * OS1_S1 + 1);
            *(b + 605 * OS1_S1 + 7) =
                prefactor_y * *(b + 605 * OS1_S1 + 2) -
                p_over_q * *(b + 735 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 491 * OS1_S1 + 2) +
                one_over_two_q * *(b + 605 * OS1_S1 + 0);
            *(b + 605 * OS1_S1 + 8) = prefactor_z * *(b + 605 * OS1_S1 + 2) -
                                      p_over_q * *(b + 736 * OS1_S1 + 2);
            *(b + 605 * OS1_S1 + 9) = prefactor_z * *(b + 605 * OS1_S1 + 3) -
                                      p_over_q * *(b + 736 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 605 * OS1_S1 + 0);
            *(b + 606 * OS1_S1 + 4) =
                prefactor_x * *(b + 606 * OS1_S1 + 1) -
                p_over_q * *(b + 726 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 501 * OS1_S1 + 1) +
                one_over_two_q * *(b + 606 * OS1_S1 + 0);
            *(b + 606 * OS1_S1 + 5) =
                prefactor_x * *(b + 606 * OS1_S1 + 2) -
                p_over_q * *(b + 726 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 501 * OS1_S1 + 2);
            *(b + 606 * OS1_S1 + 6) = prefactor_z * *(b + 606 * OS1_S1 + 1) -
                                      p_over_q * *(b + 737 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 491 * OS1_S1 + 1);
            *(b + 606 * OS1_S1 + 7) =
                prefactor_y * *(b + 606 * OS1_S1 + 2) -
                p_over_q * *(b + 736 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 492 * OS1_S1 + 2) +
                one_over_two_q * *(b + 606 * OS1_S1 + 0);
            *(b + 606 * OS1_S1 + 8) = prefactor_z * *(b + 606 * OS1_S1 + 2) -
                                      p_over_q * *(b + 737 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 491 * OS1_S1 + 2);
            *(b + 606 * OS1_S1 + 9) = prefactor_z * *(b + 606 * OS1_S1 + 3) -
                                      p_over_q * *(b + 737 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 491 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 606 * OS1_S1 + 0);
            *(b + 607 * OS1_S1 + 4) =
                prefactor_x * *(b + 607 * OS1_S1 + 1) -
                p_over_q * *(b + 727 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 502 * OS1_S1 + 1) +
                one_over_two_q * *(b + 607 * OS1_S1 + 0);
            *(b + 607 * OS1_S1 + 5) =
                prefactor_x * *(b + 607 * OS1_S1 + 2) -
                p_over_q * *(b + 727 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 502 * OS1_S1 + 2);
            *(b + 607 * OS1_S1 + 6) =
                prefactor_z * *(b + 607 * OS1_S1 + 1) -
                p_over_q * *(b + 738 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 492 * OS1_S1 + 1);
            *(b + 607 * OS1_S1 + 7) =
                prefactor_y * *(b + 607 * OS1_S1 + 2) -
                p_over_q * *(b + 737 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 493 * OS1_S1 + 2) +
                one_over_two_q * *(b + 607 * OS1_S1 + 0);
            *(b + 607 * OS1_S1 + 8) =
                prefactor_z * *(b + 607 * OS1_S1 + 2) -
                p_over_q * *(b + 738 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 492 * OS1_S1 + 2);
            *(b + 607 * OS1_S1 + 9) =
                prefactor_z * *(b + 607 * OS1_S1 + 3) -
                p_over_q * *(b + 738 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 492 * OS1_S1 + 3) +
                one_over_two_q * *(b + 607 * OS1_S1 + 0);
            *(b + 608 * OS1_S1 + 4) =
                prefactor_x * *(b + 608 * OS1_S1 + 1) -
                p_over_q * *(b + 728 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 503 * OS1_S1 + 1) +
                one_over_two_q * *(b + 608 * OS1_S1 + 0);
            *(b + 608 * OS1_S1 + 5) =
                prefactor_x * *(b + 608 * OS1_S1 + 2) -
                p_over_q * *(b + 728 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 503 * OS1_S1 + 2);
            *(b + 608 * OS1_S1 + 6) =
                prefactor_z * *(b + 608 * OS1_S1 + 1) -
                p_over_q * *(b + 739 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 493 * OS1_S1 + 1);
            *(b + 608 * OS1_S1 + 7) =
                prefactor_y * *(b + 608 * OS1_S1 + 2) -
                p_over_q * *(b + 738 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 494 * OS1_S1 + 2) +
                one_over_two_q * *(b + 608 * OS1_S1 + 0);
            *(b + 608 * OS1_S1 + 8) =
                prefactor_z * *(b + 608 * OS1_S1 + 2) -
                p_over_q * *(b + 739 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 493 * OS1_S1 + 2);
            *(b + 608 * OS1_S1 + 9) =
                prefactor_z * *(b + 608 * OS1_S1 + 3) -
                p_over_q * *(b + 739 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 493 * OS1_S1 + 3) +
                one_over_two_q * *(b + 608 * OS1_S1 + 0);
            *(b + 609 * OS1_S1 + 4) =
                prefactor_x * *(b + 609 * OS1_S1 + 1) -
                p_over_q * *(b + 729 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 504 * OS1_S1 + 1) +
                one_over_two_q * *(b + 609 * OS1_S1 + 0);
            *(b + 609 * OS1_S1 + 5) =
                prefactor_y * *(b + 609 * OS1_S1 + 1) -
                p_over_q * *(b + 739 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 495 * OS1_S1 + 1);
            *(b + 609 * OS1_S1 + 6) =
                prefactor_z * *(b + 609 * OS1_S1 + 1) -
                p_over_q * *(b + 740 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 494 * OS1_S1 + 1);
            *(b + 609 * OS1_S1 + 7) =
                prefactor_y * *(b + 609 * OS1_S1 + 2) -
                p_over_q * *(b + 739 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 495 * OS1_S1 + 2) +
                one_over_two_q * *(b + 609 * OS1_S1 + 0);
            *(b + 609 * OS1_S1 + 8) =
                prefactor_z * *(b + 609 * OS1_S1 + 2) -
                p_over_q * *(b + 740 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 494 * OS1_S1 + 2);
            *(b + 609 * OS1_S1 + 9) =
                prefactor_z * *(b + 609 * OS1_S1 + 3) -
                p_over_q * *(b + 740 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 494 * OS1_S1 + 3) +
                one_over_two_q * *(b + 609 * OS1_S1 + 0);
            *(b + 610 * OS1_S1 + 4) =
                prefactor_x * *(b + 610 * OS1_S1 + 1) -
                p_over_q * *(b + 730 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 505 * OS1_S1 + 1) +
                one_over_two_q * *(b + 610 * OS1_S1 + 0);
            *(b + 610 * OS1_S1 + 5) =
                prefactor_y * *(b + 610 * OS1_S1 + 1) -
                p_over_q * *(b + 740 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 496 * OS1_S1 + 1);
            *(b + 610 * OS1_S1 + 6) =
                prefactor_z * *(b + 610 * OS1_S1 + 1) -
                p_over_q * *(b + 741 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 495 * OS1_S1 + 1);
            *(b + 610 * OS1_S1 + 7) =
                prefactor_y * *(b + 610 * OS1_S1 + 2) -
                p_over_q * *(b + 740 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 496 * OS1_S1 + 2) +
                one_over_two_q * *(b + 610 * OS1_S1 + 0);
            *(b + 610 * OS1_S1 + 8) =
                prefactor_y * *(b + 610 * OS1_S1 + 3) -
                p_over_q * *(b + 740 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 496 * OS1_S1 + 3);
            *(b + 610 * OS1_S1 + 9) =
                prefactor_z * *(b + 610 * OS1_S1 + 3) -
                p_over_q * *(b + 741 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 495 * OS1_S1 + 3) +
                one_over_two_q * *(b + 610 * OS1_S1 + 0);
            *(b + 611 * OS1_S1 + 4) =
                prefactor_x * *(b + 611 * OS1_S1 + 1) -
                p_over_q * *(b + 731 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 506 * OS1_S1 + 1) +
                one_over_two_q * *(b + 611 * OS1_S1 + 0);
            *(b + 611 * OS1_S1 + 5) =
                prefactor_y * *(b + 611 * OS1_S1 + 1) -
                p_over_q * *(b + 741 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 497 * OS1_S1 + 1);
            *(b + 611 * OS1_S1 + 6) =
                prefactor_x * *(b + 611 * OS1_S1 + 3) -
                p_over_q * *(b + 731 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 506 * OS1_S1 + 3);
            *(b + 611 * OS1_S1 + 7) =
                prefactor_y * *(b + 611 * OS1_S1 + 2) -
                p_over_q * *(b + 741 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 497 * OS1_S1 + 2) +
                one_over_two_q * *(b + 611 * OS1_S1 + 0);
            *(b + 611 * OS1_S1 + 8) =
                prefactor_y * *(b + 611 * OS1_S1 + 3) -
                p_over_q * *(b + 741 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 497 * OS1_S1 + 3);
            *(b + 611 * OS1_S1 + 9) =
                prefactor_z * *(b + 611 * OS1_S1 + 3) -
                p_over_q * *(b + 742 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 496 * OS1_S1 + 3) +
                one_over_two_q * *(b + 611 * OS1_S1 + 0);
            *(b + 612 * OS1_S1 + 4) =
                prefactor_x * *(b + 612 * OS1_S1 + 1) -
                p_over_q * *(b + 732 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 507 * OS1_S1 + 1) +
                one_over_two_q * *(b + 612 * OS1_S1 + 0);
            *(b + 612 * OS1_S1 + 5) =
                prefactor_y * *(b + 612 * OS1_S1 + 1) -
                p_over_q * *(b + 742 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 498 * OS1_S1 + 1);
            *(b + 612 * OS1_S1 + 6) =
                prefactor_x * *(b + 612 * OS1_S1 + 3) -
                p_over_q * *(b + 732 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 507 * OS1_S1 + 3);
            *(b + 612 * OS1_S1 + 7) =
                prefactor_y * *(b + 612 * OS1_S1 + 2) -
                p_over_q * *(b + 742 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 498 * OS1_S1 + 2) +
                one_over_two_q * *(b + 612 * OS1_S1 + 0);
            *(b + 612 * OS1_S1 + 8) =
                prefactor_y * *(b + 612 * OS1_S1 + 3) -
                p_over_q * *(b + 742 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 498 * OS1_S1 + 3);
            *(b + 612 * OS1_S1 + 9) =
                prefactor_z * *(b + 612 * OS1_S1 + 3) -
                p_over_q * *(b + 743 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 497 * OS1_S1 + 3) +
                one_over_two_q * *(b + 612 * OS1_S1 + 0);
            *(b + 613 * OS1_S1 + 4) =
                prefactor_x * *(b + 613 * OS1_S1 + 1) -
                p_over_q * *(b + 733 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 508 * OS1_S1 + 1) +
                one_over_two_q * *(b + 613 * OS1_S1 + 0);
            *(b + 613 * OS1_S1 + 5) = prefactor_y * *(b + 613 * OS1_S1 + 1) -
                                      p_over_q * *(b + 743 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 499 * OS1_S1 + 1);
            *(b + 613 * OS1_S1 + 6) =
                prefactor_x * *(b + 613 * OS1_S1 + 3) -
                p_over_q * *(b + 733 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 508 * OS1_S1 + 3);
            *(b + 613 * OS1_S1 + 7) = prefactor_y * *(b + 613 * OS1_S1 + 2) -
                                      p_over_q * *(b + 743 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 499 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 613 * OS1_S1 + 0);
            *(b + 613 * OS1_S1 + 8) = prefactor_y * *(b + 613 * OS1_S1 + 3) -
                                      p_over_q * *(b + 743 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 499 * OS1_S1 + 3);
            *(b + 613 * OS1_S1 + 9) =
                prefactor_z * *(b + 613 * OS1_S1 + 3) -
                p_over_q * *(b + 744 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 498 * OS1_S1 + 3) +
                one_over_two_q * *(b + 613 * OS1_S1 + 0);
            *(b + 614 * OS1_S1 + 4) =
                prefactor_x * *(b + 614 * OS1_S1 + 1) -
                p_over_q * *(b + 734 * OS1_S1 + 1) +
                5 * one_over_two_q * *(b + 509 * OS1_S1 + 1) +
                one_over_two_q * *(b + 614 * OS1_S1 + 0);
            *(b + 614 * OS1_S1 + 5) = prefactor_y * *(b + 614 * OS1_S1 + 1) -
                                      p_over_q * *(b + 744 * OS1_S1 + 1);
            *(b + 614 * OS1_S1 + 6) =
                prefactor_x * *(b + 614 * OS1_S1 + 3) -
                p_over_q * *(b + 734 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 509 * OS1_S1 + 3);
            *(b + 614 * OS1_S1 + 7) = prefactor_y * *(b + 614 * OS1_S1 + 2) -
                                      p_over_q * *(b + 744 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 614 * OS1_S1 + 0);
            *(b + 614 * OS1_S1 + 8) = prefactor_y * *(b + 614 * OS1_S1 + 3) -
                                      p_over_q * *(b + 744 * OS1_S1 + 3);
            *(b + 614 * OS1_S1 + 9) =
                prefactor_z * *(b + 614 * OS1_S1 + 3) -
                p_over_q * *(b + 745 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 499 * OS1_S1 + 3) +
                one_over_two_q * *(b + 614 * OS1_S1 + 0);
            *(b + 615 * OS1_S1 + 4) =
                prefactor_x * *(b + 615 * OS1_S1 + 1) -
                p_over_q * *(b + 735 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 510 * OS1_S1 + 1) +
                one_over_two_q * *(b + 615 * OS1_S1 + 0);
            *(b + 615 * OS1_S1 + 5) =
                prefactor_x * *(b + 615 * OS1_S1 + 2) -
                p_over_q * *(b + 735 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 510 * OS1_S1 + 2);
            *(b + 615 * OS1_S1 + 6) = prefactor_z * *(b + 615 * OS1_S1 + 1) -
                                      p_over_q * *(b + 747 * OS1_S1 + 1);
            *(b + 615 * OS1_S1 + 7) =
                prefactor_y * *(b + 615 * OS1_S1 + 2) -
                p_over_q * *(b + 746 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 500 * OS1_S1 + 2) +
                one_over_two_q * *(b + 615 * OS1_S1 + 0);
            *(b + 615 * OS1_S1 + 8) = prefactor_z * *(b + 615 * OS1_S1 + 2) -
                                      p_over_q * *(b + 747 * OS1_S1 + 2);
            *(b + 615 * OS1_S1 + 9) = prefactor_z * *(b + 615 * OS1_S1 + 3) -
                                      p_over_q * *(b + 747 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 615 * OS1_S1 + 0);
            *(b + 616 * OS1_S1 + 4) =
                prefactor_x * *(b + 616 * OS1_S1 + 1) -
                p_over_q * *(b + 736 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 511 * OS1_S1 + 1) +
                one_over_two_q * *(b + 616 * OS1_S1 + 0);
            *(b + 616 * OS1_S1 + 5) =
                prefactor_x * *(b + 616 * OS1_S1 + 2) -
                p_over_q * *(b + 736 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 511 * OS1_S1 + 2);
            *(b + 616 * OS1_S1 + 6) = prefactor_z * *(b + 616 * OS1_S1 + 1) -
                                      p_over_q * *(b + 748 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 500 * OS1_S1 + 1);
            *(b + 616 * OS1_S1 + 7) =
                prefactor_y * *(b + 616 * OS1_S1 + 2) -
                p_over_q * *(b + 747 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 501 * OS1_S1 + 2) +
                one_over_two_q * *(b + 616 * OS1_S1 + 0);
            *(b + 616 * OS1_S1 + 8) = prefactor_z * *(b + 616 * OS1_S1 + 2) -
                                      p_over_q * *(b + 748 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 500 * OS1_S1 + 2);
            *(b + 616 * OS1_S1 + 9) = prefactor_z * *(b + 616 * OS1_S1 + 3) -
                                      p_over_q * *(b + 748 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 500 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 616 * OS1_S1 + 0);
            *(b + 617 * OS1_S1 + 4) =
                prefactor_x * *(b + 617 * OS1_S1 + 1) -
                p_over_q * *(b + 737 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 512 * OS1_S1 + 1) +
                one_over_two_q * *(b + 617 * OS1_S1 + 0);
            *(b + 617 * OS1_S1 + 5) =
                prefactor_x * *(b + 617 * OS1_S1 + 2) -
                p_over_q * *(b + 737 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 512 * OS1_S1 + 2);
            *(b + 617 * OS1_S1 + 6) =
                prefactor_z * *(b + 617 * OS1_S1 + 1) -
                p_over_q * *(b + 749 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 501 * OS1_S1 + 1);
            *(b + 617 * OS1_S1 + 7) =
                prefactor_y * *(b + 617 * OS1_S1 + 2) -
                p_over_q * *(b + 748 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 502 * OS1_S1 + 2) +
                one_over_two_q * *(b + 617 * OS1_S1 + 0);
            *(b + 617 * OS1_S1 + 8) =
                prefactor_z * *(b + 617 * OS1_S1 + 2) -
                p_over_q * *(b + 749 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 501 * OS1_S1 + 2);
            *(b + 617 * OS1_S1 + 9) =
                prefactor_z * *(b + 617 * OS1_S1 + 3) -
                p_over_q * *(b + 749 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 501 * OS1_S1 + 3) +
                one_over_two_q * *(b + 617 * OS1_S1 + 0);
            *(b + 618 * OS1_S1 + 4) =
                prefactor_x * *(b + 618 * OS1_S1 + 1) -
                p_over_q * *(b + 738 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 513 * OS1_S1 + 1) +
                one_over_two_q * *(b + 618 * OS1_S1 + 0);
            *(b + 618 * OS1_S1 + 5) =
                prefactor_x * *(b + 618 * OS1_S1 + 2) -
                p_over_q * *(b + 738 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 513 * OS1_S1 + 2);
            *(b + 618 * OS1_S1 + 6) =
                prefactor_z * *(b + 618 * OS1_S1 + 1) -
                p_over_q * *(b + 750 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 502 * OS1_S1 + 1);
            *(b + 618 * OS1_S1 + 7) =
                prefactor_y * *(b + 618 * OS1_S1 + 2) -
                p_over_q * *(b + 749 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 503 * OS1_S1 + 2) +
                one_over_two_q * *(b + 618 * OS1_S1 + 0);
            *(b + 618 * OS1_S1 + 8) =
                prefactor_z * *(b + 618 * OS1_S1 + 2) -
                p_over_q * *(b + 750 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 502 * OS1_S1 + 2);
            *(b + 618 * OS1_S1 + 9) =
                prefactor_z * *(b + 618 * OS1_S1 + 3) -
                p_over_q * *(b + 750 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 502 * OS1_S1 + 3) +
                one_over_two_q * *(b + 618 * OS1_S1 + 0);
            *(b + 619 * OS1_S1 + 4) =
                prefactor_x * *(b + 619 * OS1_S1 + 1) -
                p_over_q * *(b + 739 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 514 * OS1_S1 + 1) +
                one_over_two_q * *(b + 619 * OS1_S1 + 0);
            *(b + 619 * OS1_S1 + 5) =
                prefactor_x * *(b + 619 * OS1_S1 + 2) -
                p_over_q * *(b + 739 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 514 * OS1_S1 + 2);
            *(b + 619 * OS1_S1 + 6) =
                prefactor_z * *(b + 619 * OS1_S1 + 1) -
                p_over_q * *(b + 751 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 503 * OS1_S1 + 1);
            *(b + 619 * OS1_S1 + 7) =
                prefactor_y * *(b + 619 * OS1_S1 + 2) -
                p_over_q * *(b + 750 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 504 * OS1_S1 + 2) +
                one_over_two_q * *(b + 619 * OS1_S1 + 0);
            *(b + 619 * OS1_S1 + 8) =
                prefactor_z * *(b + 619 * OS1_S1 + 2) -
                p_over_q * *(b + 751 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 503 * OS1_S1 + 2);
            *(b + 619 * OS1_S1 + 9) =
                prefactor_z * *(b + 619 * OS1_S1 + 3) -
                p_over_q * *(b + 751 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 503 * OS1_S1 + 3) +
                one_over_two_q * *(b + 619 * OS1_S1 + 0);
            *(b + 620 * OS1_S1 + 4) =
                prefactor_x * *(b + 620 * OS1_S1 + 1) -
                p_over_q * *(b + 740 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 515 * OS1_S1 + 1) +
                one_over_two_q * *(b + 620 * OS1_S1 + 0);
            *(b + 620 * OS1_S1 + 5) =
                prefactor_x * *(b + 620 * OS1_S1 + 2) -
                p_over_q * *(b + 740 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 515 * OS1_S1 + 2);
            *(b + 620 * OS1_S1 + 6) =
                prefactor_x * *(b + 620 * OS1_S1 + 3) -
                p_over_q * *(b + 740 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 515 * OS1_S1 + 3);
            *(b + 620 * OS1_S1 + 7) =
                prefactor_y * *(b + 620 * OS1_S1 + 2) -
                p_over_q * *(b + 751 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 505 * OS1_S1 + 2) +
                one_over_two_q * *(b + 620 * OS1_S1 + 0);
            *(b + 620 * OS1_S1 + 8) =
                prefactor_z * *(b + 620 * OS1_S1 + 2) -
                p_over_q * *(b + 752 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 504 * OS1_S1 + 2);
            *(b + 620 * OS1_S1 + 9) =
                prefactor_z * *(b + 620 * OS1_S1 + 3) -
                p_over_q * *(b + 752 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 504 * OS1_S1 + 3) +
                one_over_two_q * *(b + 620 * OS1_S1 + 0);
            *(b + 621 * OS1_S1 + 4) =
                prefactor_x * *(b + 621 * OS1_S1 + 1) -
                p_over_q * *(b + 741 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 516 * OS1_S1 + 1) +
                one_over_two_q * *(b + 621 * OS1_S1 + 0);
            *(b + 621 * OS1_S1 + 5) =
                prefactor_y * *(b + 621 * OS1_S1 + 1) -
                p_over_q * *(b + 752 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 506 * OS1_S1 + 1);
            *(b + 621 * OS1_S1 + 6) =
                prefactor_x * *(b + 621 * OS1_S1 + 3) -
                p_over_q * *(b + 741 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 516 * OS1_S1 + 3);
            *(b + 621 * OS1_S1 + 7) =
                prefactor_y * *(b + 621 * OS1_S1 + 2) -
                p_over_q * *(b + 752 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 506 * OS1_S1 + 2) +
                one_over_two_q * *(b + 621 * OS1_S1 + 0);
            *(b + 621 * OS1_S1 + 8) =
                prefactor_y * *(b + 621 * OS1_S1 + 3) -
                p_over_q * *(b + 752 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 506 * OS1_S1 + 3);
            *(b + 621 * OS1_S1 + 9) =
                prefactor_z * *(b + 621 * OS1_S1 + 3) -
                p_over_q * *(b + 753 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 505 * OS1_S1 + 3) +
                one_over_two_q * *(b + 621 * OS1_S1 + 0);
            *(b + 622 * OS1_S1 + 4) =
                prefactor_x * *(b + 622 * OS1_S1 + 1) -
                p_over_q * *(b + 742 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 517 * OS1_S1 + 1) +
                one_over_two_q * *(b + 622 * OS1_S1 + 0);
            *(b + 622 * OS1_S1 + 5) =
                prefactor_y * *(b + 622 * OS1_S1 + 1) -
                p_over_q * *(b + 753 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 507 * OS1_S1 + 1);
            *(b + 622 * OS1_S1 + 6) =
                prefactor_x * *(b + 622 * OS1_S1 + 3) -
                p_over_q * *(b + 742 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 517 * OS1_S1 + 3);
            *(b + 622 * OS1_S1 + 7) =
                prefactor_y * *(b + 622 * OS1_S1 + 2) -
                p_over_q * *(b + 753 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 507 * OS1_S1 + 2) +
                one_over_two_q * *(b + 622 * OS1_S1 + 0);
            *(b + 622 * OS1_S1 + 8) =
                prefactor_y * *(b + 622 * OS1_S1 + 3) -
                p_over_q * *(b + 753 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 507 * OS1_S1 + 3);
            *(b + 622 * OS1_S1 + 9) =
                prefactor_z * *(b + 622 * OS1_S1 + 3) -
                p_over_q * *(b + 754 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 506 * OS1_S1 + 3) +
                one_over_two_q * *(b + 622 * OS1_S1 + 0);
            *(b + 623 * OS1_S1 + 4) =
                prefactor_x * *(b + 623 * OS1_S1 + 1) -
                p_over_q * *(b + 743 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 518 * OS1_S1 + 1) +
                one_over_two_q * *(b + 623 * OS1_S1 + 0);
            *(b + 623 * OS1_S1 + 5) =
                prefactor_y * *(b + 623 * OS1_S1 + 1) -
                p_over_q * *(b + 754 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 508 * OS1_S1 + 1);
            *(b + 623 * OS1_S1 + 6) =
                prefactor_x * *(b + 623 * OS1_S1 + 3) -
                p_over_q * *(b + 743 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 518 * OS1_S1 + 3);
            *(b + 623 * OS1_S1 + 7) =
                prefactor_y * *(b + 623 * OS1_S1 + 2) -
                p_over_q * *(b + 754 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 508 * OS1_S1 + 2) +
                one_over_two_q * *(b + 623 * OS1_S1 + 0);
            *(b + 623 * OS1_S1 + 8) =
                prefactor_y * *(b + 623 * OS1_S1 + 3) -
                p_over_q * *(b + 754 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 508 * OS1_S1 + 3);
            *(b + 623 * OS1_S1 + 9) =
                prefactor_z * *(b + 623 * OS1_S1 + 3) -
                p_over_q * *(b + 755 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 507 * OS1_S1 + 3) +
                one_over_two_q * *(b + 623 * OS1_S1 + 0);
            *(b + 624 * OS1_S1 + 4) =
                prefactor_x * *(b + 624 * OS1_S1 + 1) -
                p_over_q * *(b + 744 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 519 * OS1_S1 + 1) +
                one_over_two_q * *(b + 624 * OS1_S1 + 0);
            *(b + 624 * OS1_S1 + 5) = prefactor_y * *(b + 624 * OS1_S1 + 1) -
                                      p_over_q * *(b + 755 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 509 * OS1_S1 + 1);
            *(b + 624 * OS1_S1 + 6) =
                prefactor_x * *(b + 624 * OS1_S1 + 3) -
                p_over_q * *(b + 744 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 519 * OS1_S1 + 3);
            *(b + 624 * OS1_S1 + 7) = prefactor_y * *(b + 624 * OS1_S1 + 2) -
                                      p_over_q * *(b + 755 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 509 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 624 * OS1_S1 + 0);
            *(b + 624 * OS1_S1 + 8) = prefactor_y * *(b + 624 * OS1_S1 + 3) -
                                      p_over_q * *(b + 755 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 509 * OS1_S1 + 3);
            *(b + 624 * OS1_S1 + 9) =
                prefactor_z * *(b + 624 * OS1_S1 + 3) -
                p_over_q * *(b + 756 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 508 * OS1_S1 + 3) +
                one_over_two_q * *(b + 624 * OS1_S1 + 0);
            *(b + 625 * OS1_S1 + 4) =
                prefactor_x * *(b + 625 * OS1_S1 + 1) -
                p_over_q * *(b + 745 * OS1_S1 + 1) +
                4 * one_over_two_q * *(b + 520 * OS1_S1 + 1) +
                one_over_two_q * *(b + 625 * OS1_S1 + 0);
            *(b + 625 * OS1_S1 + 5) = prefactor_y * *(b + 625 * OS1_S1 + 1) -
                                      p_over_q * *(b + 756 * OS1_S1 + 1);
            *(b + 625 * OS1_S1 + 6) =
                prefactor_x * *(b + 625 * OS1_S1 + 3) -
                p_over_q * *(b + 745 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 520 * OS1_S1 + 3);
            *(b + 625 * OS1_S1 + 7) = prefactor_y * *(b + 625 * OS1_S1 + 2) -
                                      p_over_q * *(b + 756 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 625 * OS1_S1 + 0);
            *(b + 625 * OS1_S1 + 8) = prefactor_y * *(b + 625 * OS1_S1 + 3) -
                                      p_over_q * *(b + 756 * OS1_S1 + 3);
            *(b + 625 * OS1_S1 + 9) =
                prefactor_z * *(b + 625 * OS1_S1 + 3) -
                p_over_q * *(b + 757 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 509 * OS1_S1 + 3) +
                one_over_two_q * *(b + 625 * OS1_S1 + 0);
            *(b + 626 * OS1_S1 + 4) =
                prefactor_x * *(b + 626 * OS1_S1 + 1) -
                p_over_q * *(b + 746 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 521 * OS1_S1 + 1) +
                one_over_two_q * *(b + 626 * OS1_S1 + 0);
            *(b + 626 * OS1_S1 + 5) =
                prefactor_x * *(b + 626 * OS1_S1 + 2) -
                p_over_q * *(b + 746 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 521 * OS1_S1 + 2);
            *(b + 626 * OS1_S1 + 6) = prefactor_z * *(b + 626 * OS1_S1 + 1) -
                                      p_over_q * *(b + 759 * OS1_S1 + 1);
            *(b + 626 * OS1_S1 + 7) =
                prefactor_y * *(b + 626 * OS1_S1 + 2) -
                p_over_q * *(b + 758 * OS1_S1 + 2) +
                11 * one_over_two_q * *(b + 510 * OS1_S1 + 2) +
                one_over_two_q * *(b + 626 * OS1_S1 + 0);
            *(b + 626 * OS1_S1 + 8) = prefactor_z * *(b + 626 * OS1_S1 + 2) -
                                      p_over_q * *(b + 759 * OS1_S1 + 2);
            *(b + 626 * OS1_S1 + 9) = prefactor_z * *(b + 626 * OS1_S1 + 3) -
                                      p_over_q * *(b + 759 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 626 * OS1_S1 + 0);
            *(b + 627 * OS1_S1 + 4) =
                prefactor_x * *(b + 627 * OS1_S1 + 1) -
                p_over_q * *(b + 747 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 522 * OS1_S1 + 1) +
                one_over_two_q * *(b + 627 * OS1_S1 + 0);
            *(b + 627 * OS1_S1 + 5) =
                prefactor_x * *(b + 627 * OS1_S1 + 2) -
                p_over_q * *(b + 747 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 522 * OS1_S1 + 2);
            *(b + 627 * OS1_S1 + 6) = prefactor_z * *(b + 627 * OS1_S1 + 1) -
                                      p_over_q * *(b + 760 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 510 * OS1_S1 + 1);
            *(b + 627 * OS1_S1 + 7) =
                prefactor_y * *(b + 627 * OS1_S1 + 2) -
                p_over_q * *(b + 759 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 511 * OS1_S1 + 2) +
                one_over_two_q * *(b + 627 * OS1_S1 + 0);
            *(b + 627 * OS1_S1 + 8) = prefactor_z * *(b + 627 * OS1_S1 + 2) -
                                      p_over_q * *(b + 760 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 510 * OS1_S1 + 2);
            *(b + 627 * OS1_S1 + 9) = prefactor_z * *(b + 627 * OS1_S1 + 3) -
                                      p_over_q * *(b + 760 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 510 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 627 * OS1_S1 + 0);
            *(b + 628 * OS1_S1 + 4) =
                prefactor_x * *(b + 628 * OS1_S1 + 1) -
                p_over_q * *(b + 748 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 523 * OS1_S1 + 1) +
                one_over_two_q * *(b + 628 * OS1_S1 + 0);
            *(b + 628 * OS1_S1 + 5) =
                prefactor_x * *(b + 628 * OS1_S1 + 2) -
                p_over_q * *(b + 748 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 523 * OS1_S1 + 2);
            *(b + 628 * OS1_S1 + 6) =
                prefactor_z * *(b + 628 * OS1_S1 + 1) -
                p_over_q * *(b + 761 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 511 * OS1_S1 + 1);
            *(b + 628 * OS1_S1 + 7) =
                prefactor_y * *(b + 628 * OS1_S1 + 2) -
                p_over_q * *(b + 760 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 512 * OS1_S1 + 2) +
                one_over_two_q * *(b + 628 * OS1_S1 + 0);
            *(b + 628 * OS1_S1 + 8) =
                prefactor_z * *(b + 628 * OS1_S1 + 2) -
                p_over_q * *(b + 761 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 511 * OS1_S1 + 2);
            *(b + 628 * OS1_S1 + 9) =
                prefactor_z * *(b + 628 * OS1_S1 + 3) -
                p_over_q * *(b + 761 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 511 * OS1_S1 + 3) +
                one_over_two_q * *(b + 628 * OS1_S1 + 0);
            *(b + 629 * OS1_S1 + 4) =
                prefactor_x * *(b + 629 * OS1_S1 + 1) -
                p_over_q * *(b + 749 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 524 * OS1_S1 + 1) +
                one_over_two_q * *(b + 629 * OS1_S1 + 0);
            *(b + 629 * OS1_S1 + 5) =
                prefactor_x * *(b + 629 * OS1_S1 + 2) -
                p_over_q * *(b + 749 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 524 * OS1_S1 + 2);
            *(b + 629 * OS1_S1 + 6) =
                prefactor_z * *(b + 629 * OS1_S1 + 1) -
                p_over_q * *(b + 762 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 512 * OS1_S1 + 1);
            *(b + 629 * OS1_S1 + 7) =
                prefactor_y * *(b + 629 * OS1_S1 + 2) -
                p_over_q * *(b + 761 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 513 * OS1_S1 + 2) +
                one_over_two_q * *(b + 629 * OS1_S1 + 0);
            *(b + 629 * OS1_S1 + 8) =
                prefactor_z * *(b + 629 * OS1_S1 + 2) -
                p_over_q * *(b + 762 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 512 * OS1_S1 + 2);
            *(b + 629 * OS1_S1 + 9) =
                prefactor_z * *(b + 629 * OS1_S1 + 3) -
                p_over_q * *(b + 762 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 512 * OS1_S1 + 3) +
                one_over_two_q * *(b + 629 * OS1_S1 + 0);
            *(b + 630 * OS1_S1 + 4) =
                prefactor_x * *(b + 630 * OS1_S1 + 1) -
                p_over_q * *(b + 750 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 525 * OS1_S1 + 1) +
                one_over_two_q * *(b + 630 * OS1_S1 + 0);
            *(b + 630 * OS1_S1 + 5) =
                prefactor_x * *(b + 630 * OS1_S1 + 2) -
                p_over_q * *(b + 750 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 525 * OS1_S1 + 2);
            *(b + 630 * OS1_S1 + 6) =
                prefactor_x * *(b + 630 * OS1_S1 + 3) -
                p_over_q * *(b + 750 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 525 * OS1_S1 + 3);
            *(b + 630 * OS1_S1 + 7) =
                prefactor_y * *(b + 630 * OS1_S1 + 2) -
                p_over_q * *(b + 762 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 514 * OS1_S1 + 2) +
                one_over_two_q * *(b + 630 * OS1_S1 + 0);
            *(b + 630 * OS1_S1 + 8) =
                prefactor_z * *(b + 630 * OS1_S1 + 2) -
                p_over_q * *(b + 763 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 513 * OS1_S1 + 2);
            *(b + 630 * OS1_S1 + 9) =
                prefactor_z * *(b + 630 * OS1_S1 + 3) -
                p_over_q * *(b + 763 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 513 * OS1_S1 + 3) +
                one_over_two_q * *(b + 630 * OS1_S1 + 0);
            *(b + 631 * OS1_S1 + 4) =
                prefactor_x * *(b + 631 * OS1_S1 + 1) -
                p_over_q * *(b + 751 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 526 * OS1_S1 + 1) +
                one_over_two_q * *(b + 631 * OS1_S1 + 0);
            *(b + 631 * OS1_S1 + 5) =
                prefactor_x * *(b + 631 * OS1_S1 + 2) -
                p_over_q * *(b + 751 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 526 * OS1_S1 + 2);
            *(b + 631 * OS1_S1 + 6) =
                prefactor_x * *(b + 631 * OS1_S1 + 3) -
                p_over_q * *(b + 751 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 526 * OS1_S1 + 3);
            *(b + 631 * OS1_S1 + 7) =
                prefactor_y * *(b + 631 * OS1_S1 + 2) -
                p_over_q * *(b + 763 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 515 * OS1_S1 + 2) +
                one_over_two_q * *(b + 631 * OS1_S1 + 0);
            *(b + 631 * OS1_S1 + 8) =
                prefactor_z * *(b + 631 * OS1_S1 + 2) -
                p_over_q * *(b + 764 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 514 * OS1_S1 + 2);
            *(b + 631 * OS1_S1 + 9) =
                prefactor_z * *(b + 631 * OS1_S1 + 3) -
                p_over_q * *(b + 764 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 514 * OS1_S1 + 3) +
                one_over_two_q * *(b + 631 * OS1_S1 + 0);
            *(b + 632 * OS1_S1 + 4) =
                prefactor_x * *(b + 632 * OS1_S1 + 1) -
                p_over_q * *(b + 752 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 527 * OS1_S1 + 1) +
                one_over_two_q * *(b + 632 * OS1_S1 + 0);
            *(b + 632 * OS1_S1 + 5) =
                prefactor_x * *(b + 632 * OS1_S1 + 2) -
                p_over_q * *(b + 752 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 527 * OS1_S1 + 2);
            *(b + 632 * OS1_S1 + 6) =
                prefactor_x * *(b + 632 * OS1_S1 + 3) -
                p_over_q * *(b + 752 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 527 * OS1_S1 + 3);
            *(b + 632 * OS1_S1 + 7) =
                prefactor_y * *(b + 632 * OS1_S1 + 2) -
                p_over_q * *(b + 764 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 516 * OS1_S1 + 2) +
                one_over_two_q * *(b + 632 * OS1_S1 + 0);
            *(b + 632 * OS1_S1 + 8) =
                prefactor_y * *(b + 632 * OS1_S1 + 3) -
                p_over_q * *(b + 764 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 516 * OS1_S1 + 3);
            *(b + 632 * OS1_S1 + 9) =
                prefactor_z * *(b + 632 * OS1_S1 + 3) -
                p_over_q * *(b + 765 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 515 * OS1_S1 + 3) +
                one_over_two_q * *(b + 632 * OS1_S1 + 0);
            *(b + 633 * OS1_S1 + 4) =
                prefactor_x * *(b + 633 * OS1_S1 + 1) -
                p_over_q * *(b + 753 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 528 * OS1_S1 + 1) +
                one_over_two_q * *(b + 633 * OS1_S1 + 0);
            *(b + 633 * OS1_S1 + 5) =
                prefactor_x * *(b + 633 * OS1_S1 + 2) -
                p_over_q * *(b + 753 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 528 * OS1_S1 + 2);
            *(b + 633 * OS1_S1 + 6) =
                prefactor_x * *(b + 633 * OS1_S1 + 3) -
                p_over_q * *(b + 753 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 528 * OS1_S1 + 3);
            *(b + 633 * OS1_S1 + 7) =
                prefactor_y * *(b + 633 * OS1_S1 + 2) -
                p_over_q * *(b + 765 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 517 * OS1_S1 + 2) +
                one_over_two_q * *(b + 633 * OS1_S1 + 0);
            *(b + 633 * OS1_S1 + 8) =
                prefactor_y * *(b + 633 * OS1_S1 + 3) -
                p_over_q * *(b + 765 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 517 * OS1_S1 + 3);
            *(b + 633 * OS1_S1 + 9) =
                prefactor_z * *(b + 633 * OS1_S1 + 3) -
                p_over_q * *(b + 766 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 516 * OS1_S1 + 3) +
                one_over_two_q * *(b + 633 * OS1_S1 + 0);
            *(b + 634 * OS1_S1 + 4) =
                prefactor_x * *(b + 634 * OS1_S1 + 1) -
                p_over_q * *(b + 754 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 529 * OS1_S1 + 1) +
                one_over_two_q * *(b + 634 * OS1_S1 + 0);
            *(b + 634 * OS1_S1 + 5) =
                prefactor_y * *(b + 634 * OS1_S1 + 1) -
                p_over_q * *(b + 766 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 518 * OS1_S1 + 1);
            *(b + 634 * OS1_S1 + 6) =
                prefactor_x * *(b + 634 * OS1_S1 + 3) -
                p_over_q * *(b + 754 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 529 * OS1_S1 + 3);
            *(b + 634 * OS1_S1 + 7) =
                prefactor_y * *(b + 634 * OS1_S1 + 2) -
                p_over_q * *(b + 766 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 518 * OS1_S1 + 2) +
                one_over_two_q * *(b + 634 * OS1_S1 + 0);
            *(b + 634 * OS1_S1 + 8) =
                prefactor_y * *(b + 634 * OS1_S1 + 3) -
                p_over_q * *(b + 766 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 518 * OS1_S1 + 3);
            *(b + 634 * OS1_S1 + 9) =
                prefactor_z * *(b + 634 * OS1_S1 + 3) -
                p_over_q * *(b + 767 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 517 * OS1_S1 + 3) +
                one_over_two_q * *(b + 634 * OS1_S1 + 0);
            *(b + 635 * OS1_S1 + 4) =
                prefactor_x * *(b + 635 * OS1_S1 + 1) -
                p_over_q * *(b + 755 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 530 * OS1_S1 + 1) +
                one_over_two_q * *(b + 635 * OS1_S1 + 0);
            *(b + 635 * OS1_S1 + 5) =
                prefactor_y * *(b + 635 * OS1_S1 + 1) -
                p_over_q * *(b + 767 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 519 * OS1_S1 + 1);
            *(b + 635 * OS1_S1 + 6) =
                prefactor_x * *(b + 635 * OS1_S1 + 3) -
                p_over_q * *(b + 755 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 530 * OS1_S1 + 3);
            *(b + 635 * OS1_S1 + 7) =
                prefactor_y * *(b + 635 * OS1_S1 + 2) -
                p_over_q * *(b + 767 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 519 * OS1_S1 + 2) +
                one_over_two_q * *(b + 635 * OS1_S1 + 0);
            *(b + 635 * OS1_S1 + 8) =
                prefactor_y * *(b + 635 * OS1_S1 + 3) -
                p_over_q * *(b + 767 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 519 * OS1_S1 + 3);
            *(b + 635 * OS1_S1 + 9) =
                prefactor_z * *(b + 635 * OS1_S1 + 3) -
                p_over_q * *(b + 768 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 518 * OS1_S1 + 3) +
                one_over_two_q * *(b + 635 * OS1_S1 + 0);
            *(b + 636 * OS1_S1 + 4) =
                prefactor_x * *(b + 636 * OS1_S1 + 1) -
                p_over_q * *(b + 756 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 531 * OS1_S1 + 1) +
                one_over_two_q * *(b + 636 * OS1_S1 + 0);
            *(b + 636 * OS1_S1 + 5) = prefactor_y * *(b + 636 * OS1_S1 + 1) -
                                      p_over_q * *(b + 768 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 520 * OS1_S1 + 1);
            *(b + 636 * OS1_S1 + 6) =
                prefactor_x * *(b + 636 * OS1_S1 + 3) -
                p_over_q * *(b + 756 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 531 * OS1_S1 + 3);
            *(b + 636 * OS1_S1 + 7) = prefactor_y * *(b + 636 * OS1_S1 + 2) -
                                      p_over_q * *(b + 768 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 520 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 636 * OS1_S1 + 0);
            *(b + 636 * OS1_S1 + 8) = prefactor_y * *(b + 636 * OS1_S1 + 3) -
                                      p_over_q * *(b + 768 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 520 * OS1_S1 + 3);
            *(b + 636 * OS1_S1 + 9) =
                prefactor_z * *(b + 636 * OS1_S1 + 3) -
                p_over_q * *(b + 769 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 519 * OS1_S1 + 3) +
                one_over_two_q * *(b + 636 * OS1_S1 + 0);
            *(b + 637 * OS1_S1 + 4) =
                prefactor_x * *(b + 637 * OS1_S1 + 1) -
                p_over_q * *(b + 757 * OS1_S1 + 1) +
                3 * one_over_two_q * *(b + 532 * OS1_S1 + 1) +
                one_over_two_q * *(b + 637 * OS1_S1 + 0);
            *(b + 637 * OS1_S1 + 5) = prefactor_y * *(b + 637 * OS1_S1 + 1) -
                                      p_over_q * *(b + 769 * OS1_S1 + 1);
            *(b + 637 * OS1_S1 + 6) =
                prefactor_x * *(b + 637 * OS1_S1 + 3) -
                p_over_q * *(b + 757 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 532 * OS1_S1 + 3);
            *(b + 637 * OS1_S1 + 7) = prefactor_y * *(b + 637 * OS1_S1 + 2) -
                                      p_over_q * *(b + 769 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 637 * OS1_S1 + 0);
            *(b + 637 * OS1_S1 + 8) = prefactor_y * *(b + 637 * OS1_S1 + 3) -
                                      p_over_q * *(b + 769 * OS1_S1 + 3);
            *(b + 637 * OS1_S1 + 9) =
                prefactor_z * *(b + 637 * OS1_S1 + 3) -
                p_over_q * *(b + 770 * OS1_S1 + 3) +
                11 * one_over_two_q * *(b + 520 * OS1_S1 + 3) +
                one_over_two_q * *(b + 637 * OS1_S1 + 0);
            *(b + 638 * OS1_S1 + 4) =
                prefactor_x * *(b + 638 * OS1_S1 + 1) -
                p_over_q * *(b + 758 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 533 * OS1_S1 + 1) +
                one_over_two_q * *(b + 638 * OS1_S1 + 0);
            *(b + 638 * OS1_S1 + 5) =
                prefactor_x * *(b + 638 * OS1_S1 + 2) -
                p_over_q * *(b + 758 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 533 * OS1_S1 + 2);
            *(b + 638 * OS1_S1 + 6) = prefactor_z * *(b + 638 * OS1_S1 + 1) -
                                      p_over_q * *(b + 772 * OS1_S1 + 1);
            *(b + 638 * OS1_S1 + 7) =
                prefactor_y * *(b + 638 * OS1_S1 + 2) -
                p_over_q * *(b + 771 * OS1_S1 + 2) +
                12 * one_over_two_q * *(b + 521 * OS1_S1 + 2) +
                one_over_two_q * *(b + 638 * OS1_S1 + 0);
            *(b + 638 * OS1_S1 + 8) = prefactor_z * *(b + 638 * OS1_S1 + 2) -
                                      p_over_q * *(b + 772 * OS1_S1 + 2);
            *(b + 638 * OS1_S1 + 9) = prefactor_z * *(b + 638 * OS1_S1 + 3) -
                                      p_over_q * *(b + 772 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 638 * OS1_S1 + 0);
            *(b + 639 * OS1_S1 + 4) =
                prefactor_x * *(b + 639 * OS1_S1 + 1) -
                p_over_q * *(b + 759 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 534 * OS1_S1 + 1) +
                one_over_two_q * *(b + 639 * OS1_S1 + 0);
            *(b + 639 * OS1_S1 + 5) =
                prefactor_x * *(b + 639 * OS1_S1 + 2) -
                p_over_q * *(b + 759 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 534 * OS1_S1 + 2);
            *(b + 639 * OS1_S1 + 6) = prefactor_z * *(b + 639 * OS1_S1 + 1) -
                                      p_over_q * *(b + 773 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 521 * OS1_S1 + 1);
            *(b + 639 * OS1_S1 + 7) =
                prefactor_y * *(b + 639 * OS1_S1 + 2) -
                p_over_q * *(b + 772 * OS1_S1 + 2) +
                11 * one_over_two_q * *(b + 522 * OS1_S1 + 2) +
                one_over_two_q * *(b + 639 * OS1_S1 + 0);
            *(b + 639 * OS1_S1 + 8) = prefactor_z * *(b + 639 * OS1_S1 + 2) -
                                      p_over_q * *(b + 773 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 521 * OS1_S1 + 2);
            *(b + 639 * OS1_S1 + 9) = prefactor_z * *(b + 639 * OS1_S1 + 3) -
                                      p_over_q * *(b + 773 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 521 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 639 * OS1_S1 + 0);
            *(b + 640 * OS1_S1 + 4) =
                prefactor_x * *(b + 640 * OS1_S1 + 1) -
                p_over_q * *(b + 760 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 535 * OS1_S1 + 1) +
                one_over_two_q * *(b + 640 * OS1_S1 + 0);
            *(b + 640 * OS1_S1 + 5) =
                prefactor_x * *(b + 640 * OS1_S1 + 2) -
                p_over_q * *(b + 760 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 535 * OS1_S1 + 2);
            *(b + 640 * OS1_S1 + 6) =
                prefactor_z * *(b + 640 * OS1_S1 + 1) -
                p_over_q * *(b + 774 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 522 * OS1_S1 + 1);
            *(b + 640 * OS1_S1 + 7) =
                prefactor_y * *(b + 640 * OS1_S1 + 2) -
                p_over_q * *(b + 773 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 523 * OS1_S1 + 2) +
                one_over_two_q * *(b + 640 * OS1_S1 + 0);
            *(b + 640 * OS1_S1 + 8) =
                prefactor_z * *(b + 640 * OS1_S1 + 2) -
                p_over_q * *(b + 774 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 522 * OS1_S1 + 2);
            *(b + 640 * OS1_S1 + 9) =
                prefactor_z * *(b + 640 * OS1_S1 + 3) -
                p_over_q * *(b + 774 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 522 * OS1_S1 + 3) +
                one_over_two_q * *(b + 640 * OS1_S1 + 0);
            *(b + 641 * OS1_S1 + 4) =
                prefactor_x * *(b + 641 * OS1_S1 + 1) -
                p_over_q * *(b + 761 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 536 * OS1_S1 + 1) +
                one_over_two_q * *(b + 641 * OS1_S1 + 0);
            *(b + 641 * OS1_S1 + 5) =
                prefactor_x * *(b + 641 * OS1_S1 + 2) -
                p_over_q * *(b + 761 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 536 * OS1_S1 + 2);
            *(b + 641 * OS1_S1 + 6) =
                prefactor_x * *(b + 641 * OS1_S1 + 3) -
                p_over_q * *(b + 761 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 536 * OS1_S1 + 3);
            *(b + 641 * OS1_S1 + 7) =
                prefactor_y * *(b + 641 * OS1_S1 + 2) -
                p_over_q * *(b + 774 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 524 * OS1_S1 + 2) +
                one_over_two_q * *(b + 641 * OS1_S1 + 0);
            *(b + 641 * OS1_S1 + 8) =
                prefactor_z * *(b + 641 * OS1_S1 + 2) -
                p_over_q * *(b + 775 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 523 * OS1_S1 + 2);
            *(b + 641 * OS1_S1 + 9) =
                prefactor_z * *(b + 641 * OS1_S1 + 3) -
                p_over_q * *(b + 775 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 523 * OS1_S1 + 3) +
                one_over_two_q * *(b + 641 * OS1_S1 + 0);
            *(b + 642 * OS1_S1 + 4) =
                prefactor_x * *(b + 642 * OS1_S1 + 1) -
                p_over_q * *(b + 762 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 537 * OS1_S1 + 1) +
                one_over_two_q * *(b + 642 * OS1_S1 + 0);
            *(b + 642 * OS1_S1 + 5) =
                prefactor_x * *(b + 642 * OS1_S1 + 2) -
                p_over_q * *(b + 762 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 537 * OS1_S1 + 2);
            *(b + 642 * OS1_S1 + 6) =
                prefactor_x * *(b + 642 * OS1_S1 + 3) -
                p_over_q * *(b + 762 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 537 * OS1_S1 + 3);
            *(b + 642 * OS1_S1 + 7) =
                prefactor_y * *(b + 642 * OS1_S1 + 2) -
                p_over_q * *(b + 775 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 525 * OS1_S1 + 2) +
                one_over_two_q * *(b + 642 * OS1_S1 + 0);
            *(b + 642 * OS1_S1 + 8) =
                prefactor_z * *(b + 642 * OS1_S1 + 2) -
                p_over_q * *(b + 776 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 524 * OS1_S1 + 2);
            *(b + 642 * OS1_S1 + 9) =
                prefactor_z * *(b + 642 * OS1_S1 + 3) -
                p_over_q * *(b + 776 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 524 * OS1_S1 + 3) +
                one_over_two_q * *(b + 642 * OS1_S1 + 0);
            *(b + 643 * OS1_S1 + 4) =
                prefactor_x * *(b + 643 * OS1_S1 + 1) -
                p_over_q * *(b + 763 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 538 * OS1_S1 + 1) +
                one_over_two_q * *(b + 643 * OS1_S1 + 0);
            *(b + 643 * OS1_S1 + 5) =
                prefactor_x * *(b + 643 * OS1_S1 + 2) -
                p_over_q * *(b + 763 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 538 * OS1_S1 + 2);
            *(b + 643 * OS1_S1 + 6) =
                prefactor_x * *(b + 643 * OS1_S1 + 3) -
                p_over_q * *(b + 763 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 538 * OS1_S1 + 3);
            *(b + 643 * OS1_S1 + 7) =
                prefactor_y * *(b + 643 * OS1_S1 + 2) -
                p_over_q * *(b + 776 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 526 * OS1_S1 + 2) +
                one_over_two_q * *(b + 643 * OS1_S1 + 0);
            *(b + 643 * OS1_S1 + 8) =
                prefactor_z * *(b + 643 * OS1_S1 + 2) -
                p_over_q * *(b + 777 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 525 * OS1_S1 + 2);
            *(b + 643 * OS1_S1 + 9) =
                prefactor_z * *(b + 643 * OS1_S1 + 3) -
                p_over_q * *(b + 777 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 525 * OS1_S1 + 3) +
                one_over_two_q * *(b + 643 * OS1_S1 + 0);
            *(b + 644 * OS1_S1 + 4) =
                prefactor_x * *(b + 644 * OS1_S1 + 1) -
                p_over_q * *(b + 764 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 539 * OS1_S1 + 1) +
                one_over_two_q * *(b + 644 * OS1_S1 + 0);
            *(b + 644 * OS1_S1 + 5) =
                prefactor_x * *(b + 644 * OS1_S1 + 2) -
                p_over_q * *(b + 764 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 539 * OS1_S1 + 2);
            *(b + 644 * OS1_S1 + 6) =
                prefactor_x * *(b + 644 * OS1_S1 + 3) -
                p_over_q * *(b + 764 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 539 * OS1_S1 + 3);
            *(b + 644 * OS1_S1 + 7) =
                prefactor_y * *(b + 644 * OS1_S1 + 2) -
                p_over_q * *(b + 777 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 527 * OS1_S1 + 2) +
                one_over_two_q * *(b + 644 * OS1_S1 + 0);
            *(b + 644 * OS1_S1 + 8) =
                prefactor_z * *(b + 644 * OS1_S1 + 2) -
                p_over_q * *(b + 778 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 526 * OS1_S1 + 2);
            *(b + 644 * OS1_S1 + 9) =
                prefactor_z * *(b + 644 * OS1_S1 + 3) -
                p_over_q * *(b + 778 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 526 * OS1_S1 + 3) +
                one_over_two_q * *(b + 644 * OS1_S1 + 0);
            *(b + 645 * OS1_S1 + 4) =
                prefactor_x * *(b + 645 * OS1_S1 + 1) -
                p_over_q * *(b + 765 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 540 * OS1_S1 + 1) +
                one_over_two_q * *(b + 645 * OS1_S1 + 0);
            *(b + 645 * OS1_S1 + 5) =
                prefactor_x * *(b + 645 * OS1_S1 + 2) -
                p_over_q * *(b + 765 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 540 * OS1_S1 + 2);
            *(b + 645 * OS1_S1 + 6) =
                prefactor_x * *(b + 645 * OS1_S1 + 3) -
                p_over_q * *(b + 765 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 540 * OS1_S1 + 3);
            *(b + 645 * OS1_S1 + 7) =
                prefactor_y * *(b + 645 * OS1_S1 + 2) -
                p_over_q * *(b + 778 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 528 * OS1_S1 + 2) +
                one_over_two_q * *(b + 645 * OS1_S1 + 0);
            *(b + 645 * OS1_S1 + 8) =
                prefactor_y * *(b + 645 * OS1_S1 + 3) -
                p_over_q * *(b + 778 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 528 * OS1_S1 + 3);
            *(b + 645 * OS1_S1 + 9) =
                prefactor_z * *(b + 645 * OS1_S1 + 3) -
                p_over_q * *(b + 779 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 527 * OS1_S1 + 3) +
                one_over_two_q * *(b + 645 * OS1_S1 + 0);
            *(b + 646 * OS1_S1 + 4) =
                prefactor_x * *(b + 646 * OS1_S1 + 1) -
                p_over_q * *(b + 766 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 541 * OS1_S1 + 1) +
                one_over_two_q * *(b + 646 * OS1_S1 + 0);
            *(b + 646 * OS1_S1 + 5) =
                prefactor_x * *(b + 646 * OS1_S1 + 2) -
                p_over_q * *(b + 766 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 541 * OS1_S1 + 2);
            *(b + 646 * OS1_S1 + 6) =
                prefactor_x * *(b + 646 * OS1_S1 + 3) -
                p_over_q * *(b + 766 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 541 * OS1_S1 + 3);
            *(b + 646 * OS1_S1 + 7) =
                prefactor_y * *(b + 646 * OS1_S1 + 2) -
                p_over_q * *(b + 779 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 529 * OS1_S1 + 2) +
                one_over_two_q * *(b + 646 * OS1_S1 + 0);
            *(b + 646 * OS1_S1 + 8) =
                prefactor_y * *(b + 646 * OS1_S1 + 3) -
                p_over_q * *(b + 779 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 529 * OS1_S1 + 3);
            *(b + 646 * OS1_S1 + 9) =
                prefactor_z * *(b + 646 * OS1_S1 + 3) -
                p_over_q * *(b + 780 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 528 * OS1_S1 + 3) +
                one_over_two_q * *(b + 646 * OS1_S1 + 0);
            *(b + 647 * OS1_S1 + 4) =
                prefactor_x * *(b + 647 * OS1_S1 + 1) -
                p_over_q * *(b + 767 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 542 * OS1_S1 + 1) +
                one_over_two_q * *(b + 647 * OS1_S1 + 0);
            *(b + 647 * OS1_S1 + 5) =
                prefactor_x * *(b + 647 * OS1_S1 + 2) -
                p_over_q * *(b + 767 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 542 * OS1_S1 + 2);
            *(b + 647 * OS1_S1 + 6) =
                prefactor_x * *(b + 647 * OS1_S1 + 3) -
                p_over_q * *(b + 767 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 542 * OS1_S1 + 3);
            *(b + 647 * OS1_S1 + 7) =
                prefactor_y * *(b + 647 * OS1_S1 + 2) -
                p_over_q * *(b + 780 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 530 * OS1_S1 + 2) +
                one_over_two_q * *(b + 647 * OS1_S1 + 0);
            *(b + 647 * OS1_S1 + 8) =
                prefactor_y * *(b + 647 * OS1_S1 + 3) -
                p_over_q * *(b + 780 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 530 * OS1_S1 + 3);
            *(b + 647 * OS1_S1 + 9) =
                prefactor_z * *(b + 647 * OS1_S1 + 3) -
                p_over_q * *(b + 781 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 529 * OS1_S1 + 3) +
                one_over_two_q * *(b + 647 * OS1_S1 + 0);
            *(b + 648 * OS1_S1 + 4) =
                prefactor_x * *(b + 648 * OS1_S1 + 1) -
                p_over_q * *(b + 768 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 543 * OS1_S1 + 1) +
                one_over_two_q * *(b + 648 * OS1_S1 + 0);
            *(b + 648 * OS1_S1 + 5) =
                prefactor_y * *(b + 648 * OS1_S1 + 1) -
                p_over_q * *(b + 781 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 531 * OS1_S1 + 1);
            *(b + 648 * OS1_S1 + 6) =
                prefactor_x * *(b + 648 * OS1_S1 + 3) -
                p_over_q * *(b + 768 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 543 * OS1_S1 + 3);
            *(b + 648 * OS1_S1 + 7) =
                prefactor_y * *(b + 648 * OS1_S1 + 2) -
                p_over_q * *(b + 781 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 531 * OS1_S1 + 2) +
                one_over_two_q * *(b + 648 * OS1_S1 + 0);
            *(b + 648 * OS1_S1 + 8) =
                prefactor_y * *(b + 648 * OS1_S1 + 3) -
                p_over_q * *(b + 781 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 531 * OS1_S1 + 3);
            *(b + 648 * OS1_S1 + 9) =
                prefactor_z * *(b + 648 * OS1_S1 + 3) -
                p_over_q * *(b + 782 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 530 * OS1_S1 + 3) +
                one_over_two_q * *(b + 648 * OS1_S1 + 0);
            *(b + 649 * OS1_S1 + 4) =
                prefactor_x * *(b + 649 * OS1_S1 + 1) -
                p_over_q * *(b + 769 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 544 * OS1_S1 + 1) +
                one_over_two_q * *(b + 649 * OS1_S1 + 0);
            *(b + 649 * OS1_S1 + 5) = prefactor_y * *(b + 649 * OS1_S1 + 1) -
                                      p_over_q * *(b + 782 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 532 * OS1_S1 + 1);
            *(b + 649 * OS1_S1 + 6) =
                prefactor_x * *(b + 649 * OS1_S1 + 3) -
                p_over_q * *(b + 769 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 544 * OS1_S1 + 3);
            *(b + 649 * OS1_S1 + 7) = prefactor_y * *(b + 649 * OS1_S1 + 2) -
                                      p_over_q * *(b + 782 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 532 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 649 * OS1_S1 + 0);
            *(b + 649 * OS1_S1 + 8) = prefactor_y * *(b + 649 * OS1_S1 + 3) -
                                      p_over_q * *(b + 782 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 532 * OS1_S1 + 3);
            *(b + 649 * OS1_S1 + 9) =
                prefactor_z * *(b + 649 * OS1_S1 + 3) -
                p_over_q * *(b + 783 * OS1_S1 + 3) +
                11 * one_over_two_q * *(b + 531 * OS1_S1 + 3) +
                one_over_two_q * *(b + 649 * OS1_S1 + 0);
            *(b + 650 * OS1_S1 + 4) =
                prefactor_x * *(b + 650 * OS1_S1 + 1) -
                p_over_q * *(b + 770 * OS1_S1 + 1) +
                2 * one_over_two_q * *(b + 545 * OS1_S1 + 1) +
                one_over_two_q * *(b + 650 * OS1_S1 + 0);
            *(b + 650 * OS1_S1 + 5) = prefactor_y * *(b + 650 * OS1_S1 + 1) -
                                      p_over_q * *(b + 783 * OS1_S1 + 1);
            *(b + 650 * OS1_S1 + 6) =
                prefactor_x * *(b + 650 * OS1_S1 + 3) -
                p_over_q * *(b + 770 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 545 * OS1_S1 + 3);
            *(b + 650 * OS1_S1 + 7) = prefactor_y * *(b + 650 * OS1_S1 + 2) -
                                      p_over_q * *(b + 783 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 650 * OS1_S1 + 0);
            *(b + 650 * OS1_S1 + 8) = prefactor_y * *(b + 650 * OS1_S1 + 3) -
                                      p_over_q * *(b + 783 * OS1_S1 + 3);
            *(b + 650 * OS1_S1 + 9) =
                prefactor_z * *(b + 650 * OS1_S1 + 3) -
                p_over_q * *(b + 784 * OS1_S1 + 3) +
                12 * one_over_two_q * *(b + 532 * OS1_S1 + 3) +
                one_over_two_q * *(b + 650 * OS1_S1 + 0);
            *(b + 651 * OS1_S1 + 4) = prefactor_x * *(b + 651 * OS1_S1 + 1) -
                                      p_over_q * *(b + 771 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 546 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 651 * OS1_S1 + 0);
            *(b + 651 * OS1_S1 + 5) = prefactor_x * *(b + 651 * OS1_S1 + 2) -
                                      p_over_q * *(b + 771 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 546 * OS1_S1 + 2);
            *(b + 651 * OS1_S1 + 6) = prefactor_z * *(b + 651 * OS1_S1 + 1) -
                                      p_over_q * *(b + 786 * OS1_S1 + 1);
            *(b + 651 * OS1_S1 + 7) =
                prefactor_y * *(b + 651 * OS1_S1 + 2) -
                p_over_q * *(b + 785 * OS1_S1 + 2) +
                13 * one_over_two_q * *(b + 533 * OS1_S1 + 2) +
                one_over_two_q * *(b + 651 * OS1_S1 + 0);
            *(b + 651 * OS1_S1 + 8) = prefactor_z * *(b + 651 * OS1_S1 + 2) -
                                      p_over_q * *(b + 786 * OS1_S1 + 2);
            *(b + 651 * OS1_S1 + 9) = prefactor_z * *(b + 651 * OS1_S1 + 3) -
                                      p_over_q * *(b + 786 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 651 * OS1_S1 + 0);
            *(b + 652 * OS1_S1 + 4) = prefactor_x * *(b + 652 * OS1_S1 + 1) -
                                      p_over_q * *(b + 772 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 547 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 652 * OS1_S1 + 0);
            *(b + 652 * OS1_S1 + 5) = prefactor_x * *(b + 652 * OS1_S1 + 2) -
                                      p_over_q * *(b + 772 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 547 * OS1_S1 + 2);
            *(b + 652 * OS1_S1 + 6) = prefactor_z * *(b + 652 * OS1_S1 + 1) -
                                      p_over_q * *(b + 787 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 533 * OS1_S1 + 1);
            *(b + 652 * OS1_S1 + 7) =
                prefactor_y * *(b + 652 * OS1_S1 + 2) -
                p_over_q * *(b + 786 * OS1_S1 + 2) +
                12 * one_over_two_q * *(b + 534 * OS1_S1 + 2) +
                one_over_two_q * *(b + 652 * OS1_S1 + 0);
            *(b + 652 * OS1_S1 + 8) = prefactor_z * *(b + 652 * OS1_S1 + 2) -
                                      p_over_q * *(b + 787 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 533 * OS1_S1 + 2);
            *(b + 652 * OS1_S1 + 9) = prefactor_z * *(b + 652 * OS1_S1 + 3) -
                                      p_over_q * *(b + 787 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 533 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 652 * OS1_S1 + 0);
            *(b + 653 * OS1_S1 + 4) = prefactor_x * *(b + 653 * OS1_S1 + 1) -
                                      p_over_q * *(b + 773 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 548 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 653 * OS1_S1 + 0);
            *(b + 653 * OS1_S1 + 5) = prefactor_x * *(b + 653 * OS1_S1 + 2) -
                                      p_over_q * *(b + 773 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 548 * OS1_S1 + 2);
            *(b + 653 * OS1_S1 + 6) = prefactor_x * *(b + 653 * OS1_S1 + 3) -
                                      p_over_q * *(b + 773 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 548 * OS1_S1 + 3);
            *(b + 653 * OS1_S1 + 7) =
                prefactor_y * *(b + 653 * OS1_S1 + 2) -
                p_over_q * *(b + 787 * OS1_S1 + 2) +
                11 * one_over_two_q * *(b + 535 * OS1_S1 + 2) +
                one_over_two_q * *(b + 653 * OS1_S1 + 0);
            *(b + 653 * OS1_S1 + 8) =
                prefactor_z * *(b + 653 * OS1_S1 + 2) -
                p_over_q * *(b + 788 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 534 * OS1_S1 + 2);
            *(b + 653 * OS1_S1 + 9) =
                prefactor_z * *(b + 653 * OS1_S1 + 3) -
                p_over_q * *(b + 788 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 534 * OS1_S1 + 3) +
                one_over_two_q * *(b + 653 * OS1_S1 + 0);
            *(b + 654 * OS1_S1 + 4) = prefactor_x * *(b + 654 * OS1_S1 + 1) -
                                      p_over_q * *(b + 774 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 549 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 654 * OS1_S1 + 0);
            *(b + 654 * OS1_S1 + 5) = prefactor_x * *(b + 654 * OS1_S1 + 2) -
                                      p_over_q * *(b + 774 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 549 * OS1_S1 + 2);
            *(b + 654 * OS1_S1 + 6) = prefactor_x * *(b + 654 * OS1_S1 + 3) -
                                      p_over_q * *(b + 774 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 549 * OS1_S1 + 3);
            *(b + 654 * OS1_S1 + 7) =
                prefactor_y * *(b + 654 * OS1_S1 + 2) -
                p_over_q * *(b + 788 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 536 * OS1_S1 + 2) +
                one_over_two_q * *(b + 654 * OS1_S1 + 0);
            *(b + 654 * OS1_S1 + 8) =
                prefactor_z * *(b + 654 * OS1_S1 + 2) -
                p_over_q * *(b + 789 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 535 * OS1_S1 + 2);
            *(b + 654 * OS1_S1 + 9) =
                prefactor_z * *(b + 654 * OS1_S1 + 3) -
                p_over_q * *(b + 789 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 535 * OS1_S1 + 3) +
                one_over_two_q * *(b + 654 * OS1_S1 + 0);
            *(b + 655 * OS1_S1 + 4) = prefactor_x * *(b + 655 * OS1_S1 + 1) -
                                      p_over_q * *(b + 775 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 550 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 655 * OS1_S1 + 0);
            *(b + 655 * OS1_S1 + 5) = prefactor_x * *(b + 655 * OS1_S1 + 2) -
                                      p_over_q * *(b + 775 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 550 * OS1_S1 + 2);
            *(b + 655 * OS1_S1 + 6) = prefactor_x * *(b + 655 * OS1_S1 + 3) -
                                      p_over_q * *(b + 775 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 550 * OS1_S1 + 3);
            *(b + 655 * OS1_S1 + 7) =
                prefactor_y * *(b + 655 * OS1_S1 + 2) -
                p_over_q * *(b + 789 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 537 * OS1_S1 + 2) +
                one_over_two_q * *(b + 655 * OS1_S1 + 0);
            *(b + 655 * OS1_S1 + 8) =
                prefactor_z * *(b + 655 * OS1_S1 + 2) -
                p_over_q * *(b + 790 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 536 * OS1_S1 + 2);
            *(b + 655 * OS1_S1 + 9) =
                prefactor_z * *(b + 655 * OS1_S1 + 3) -
                p_over_q * *(b + 790 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 536 * OS1_S1 + 3) +
                one_over_two_q * *(b + 655 * OS1_S1 + 0);
            *(b + 656 * OS1_S1 + 4) = prefactor_x * *(b + 656 * OS1_S1 + 1) -
                                      p_over_q * *(b + 776 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 551 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 656 * OS1_S1 + 0);
            *(b + 656 * OS1_S1 + 5) = prefactor_x * *(b + 656 * OS1_S1 + 2) -
                                      p_over_q * *(b + 776 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 551 * OS1_S1 + 2);
            *(b + 656 * OS1_S1 + 6) = prefactor_x * *(b + 656 * OS1_S1 + 3) -
                                      p_over_q * *(b + 776 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 551 * OS1_S1 + 3);
            *(b + 656 * OS1_S1 + 7) =
                prefactor_y * *(b + 656 * OS1_S1 + 2) -
                p_over_q * *(b + 790 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 538 * OS1_S1 + 2) +
                one_over_two_q * *(b + 656 * OS1_S1 + 0);
            *(b + 656 * OS1_S1 + 8) =
                prefactor_z * *(b + 656 * OS1_S1 + 2) -
                p_over_q * *(b + 791 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 537 * OS1_S1 + 2);
            *(b + 656 * OS1_S1 + 9) =
                prefactor_z * *(b + 656 * OS1_S1 + 3) -
                p_over_q * *(b + 791 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 537 * OS1_S1 + 3) +
                one_over_two_q * *(b + 656 * OS1_S1 + 0);
            *(b + 657 * OS1_S1 + 4) = prefactor_x * *(b + 657 * OS1_S1 + 1) -
                                      p_over_q * *(b + 777 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 552 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 657 * OS1_S1 + 0);
            *(b + 657 * OS1_S1 + 5) = prefactor_x * *(b + 657 * OS1_S1 + 2) -
                                      p_over_q * *(b + 777 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 552 * OS1_S1 + 2);
            *(b + 657 * OS1_S1 + 6) = prefactor_x * *(b + 657 * OS1_S1 + 3) -
                                      p_over_q * *(b + 777 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 552 * OS1_S1 + 3);
            *(b + 657 * OS1_S1 + 7) =
                prefactor_y * *(b + 657 * OS1_S1 + 2) -
                p_over_q * *(b + 791 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 539 * OS1_S1 + 2) +
                one_over_two_q * *(b + 657 * OS1_S1 + 0);
            *(b + 657 * OS1_S1 + 8) =
                prefactor_z * *(b + 657 * OS1_S1 + 2) -
                p_over_q * *(b + 792 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 538 * OS1_S1 + 2);
            *(b + 657 * OS1_S1 + 9) =
                prefactor_z * *(b + 657 * OS1_S1 + 3) -
                p_over_q * *(b + 792 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 538 * OS1_S1 + 3) +
                one_over_two_q * *(b + 657 * OS1_S1 + 0);
            *(b + 658 * OS1_S1 + 4) = prefactor_x * *(b + 658 * OS1_S1 + 1) -
                                      p_over_q * *(b + 778 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 553 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 658 * OS1_S1 + 0);
            *(b + 658 * OS1_S1 + 5) = prefactor_x * *(b + 658 * OS1_S1 + 2) -
                                      p_over_q * *(b + 778 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 553 * OS1_S1 + 2);
            *(b + 658 * OS1_S1 + 6) = prefactor_x * *(b + 658 * OS1_S1 + 3) -
                                      p_over_q * *(b + 778 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 553 * OS1_S1 + 3);
            *(b + 658 * OS1_S1 + 7) =
                prefactor_y * *(b + 658 * OS1_S1 + 2) -
                p_over_q * *(b + 792 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 540 * OS1_S1 + 2) +
                one_over_two_q * *(b + 658 * OS1_S1 + 0);
            *(b + 658 * OS1_S1 + 8) =
                prefactor_y * *(b + 658 * OS1_S1 + 3) -
                p_over_q * *(b + 792 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 540 * OS1_S1 + 3);
            *(b + 658 * OS1_S1 + 9) =
                prefactor_z * *(b + 658 * OS1_S1 + 3) -
                p_over_q * *(b + 793 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 539 * OS1_S1 + 3) +
                one_over_two_q * *(b + 658 * OS1_S1 + 0);
            *(b + 659 * OS1_S1 + 4) = prefactor_x * *(b + 659 * OS1_S1 + 1) -
                                      p_over_q * *(b + 779 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 554 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 659 * OS1_S1 + 0);
            *(b + 659 * OS1_S1 + 5) = prefactor_x * *(b + 659 * OS1_S1 + 2) -
                                      p_over_q * *(b + 779 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 554 * OS1_S1 + 2);
            *(b + 659 * OS1_S1 + 6) = prefactor_x * *(b + 659 * OS1_S1 + 3) -
                                      p_over_q * *(b + 779 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 554 * OS1_S1 + 3);
            *(b + 659 * OS1_S1 + 7) =
                prefactor_y * *(b + 659 * OS1_S1 + 2) -
                p_over_q * *(b + 793 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 541 * OS1_S1 + 2) +
                one_over_two_q * *(b + 659 * OS1_S1 + 0);
            *(b + 659 * OS1_S1 + 8) =
                prefactor_y * *(b + 659 * OS1_S1 + 3) -
                p_over_q * *(b + 793 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 541 * OS1_S1 + 3);
            *(b + 659 * OS1_S1 + 9) =
                prefactor_z * *(b + 659 * OS1_S1 + 3) -
                p_over_q * *(b + 794 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 540 * OS1_S1 + 3) +
                one_over_two_q * *(b + 659 * OS1_S1 + 0);
            *(b + 660 * OS1_S1 + 4) = prefactor_x * *(b + 660 * OS1_S1 + 1) -
                                      p_over_q * *(b + 780 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 555 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 660 * OS1_S1 + 0);
            *(b + 660 * OS1_S1 + 5) = prefactor_x * *(b + 660 * OS1_S1 + 2) -
                                      p_over_q * *(b + 780 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 555 * OS1_S1 + 2);
            *(b + 660 * OS1_S1 + 6) = prefactor_x * *(b + 660 * OS1_S1 + 3) -
                                      p_over_q * *(b + 780 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 555 * OS1_S1 + 3);
            *(b + 660 * OS1_S1 + 7) =
                prefactor_y * *(b + 660 * OS1_S1 + 2) -
                p_over_q * *(b + 794 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 542 * OS1_S1 + 2) +
                one_over_two_q * *(b + 660 * OS1_S1 + 0);
            *(b + 660 * OS1_S1 + 8) =
                prefactor_y * *(b + 660 * OS1_S1 + 3) -
                p_over_q * *(b + 794 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 542 * OS1_S1 + 3);
            *(b + 660 * OS1_S1 + 9) =
                prefactor_z * *(b + 660 * OS1_S1 + 3) -
                p_over_q * *(b + 795 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 541 * OS1_S1 + 3) +
                one_over_two_q * *(b + 660 * OS1_S1 + 0);
            *(b + 661 * OS1_S1 + 4) = prefactor_x * *(b + 661 * OS1_S1 + 1) -
                                      p_over_q * *(b + 781 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 556 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 661 * OS1_S1 + 0);
            *(b + 661 * OS1_S1 + 5) = prefactor_x * *(b + 661 * OS1_S1 + 2) -
                                      p_over_q * *(b + 781 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 556 * OS1_S1 + 2);
            *(b + 661 * OS1_S1 + 6) = prefactor_x * *(b + 661 * OS1_S1 + 3) -
                                      p_over_q * *(b + 781 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 556 * OS1_S1 + 3);
            *(b + 661 * OS1_S1 + 7) =
                prefactor_y * *(b + 661 * OS1_S1 + 2) -
                p_over_q * *(b + 795 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 543 * OS1_S1 + 2) +
                one_over_two_q * *(b + 661 * OS1_S1 + 0);
            *(b + 661 * OS1_S1 + 8) =
                prefactor_y * *(b + 661 * OS1_S1 + 3) -
                p_over_q * *(b + 795 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 543 * OS1_S1 + 3);
            *(b + 661 * OS1_S1 + 9) =
                prefactor_z * *(b + 661 * OS1_S1 + 3) -
                p_over_q * *(b + 796 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 542 * OS1_S1 + 3) +
                one_over_two_q * *(b + 661 * OS1_S1 + 0);
            *(b + 662 * OS1_S1 + 4) = prefactor_x * *(b + 662 * OS1_S1 + 1) -
                                      p_over_q * *(b + 782 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 557 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 662 * OS1_S1 + 0);
            *(b + 662 * OS1_S1 + 5) = prefactor_x * *(b + 662 * OS1_S1 + 2) -
                                      p_over_q * *(b + 782 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 557 * OS1_S1 + 2);
            *(b + 662 * OS1_S1 + 6) = prefactor_x * *(b + 662 * OS1_S1 + 3) -
                                      p_over_q * *(b + 782 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 557 * OS1_S1 + 3);
            *(b + 662 * OS1_S1 + 7) =
                prefactor_y * *(b + 662 * OS1_S1 + 2) -
                p_over_q * *(b + 796 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 544 * OS1_S1 + 2) +
                one_over_two_q * *(b + 662 * OS1_S1 + 0);
            *(b + 662 * OS1_S1 + 8) =
                prefactor_y * *(b + 662 * OS1_S1 + 3) -
                p_over_q * *(b + 796 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 544 * OS1_S1 + 3);
            *(b + 662 * OS1_S1 + 9) =
                prefactor_z * *(b + 662 * OS1_S1 + 3) -
                p_over_q * *(b + 797 * OS1_S1 + 3) +
                11 * one_over_two_q * *(b + 543 * OS1_S1 + 3) +
                one_over_two_q * *(b + 662 * OS1_S1 + 0);
            *(b + 663 * OS1_S1 + 4) = prefactor_x * *(b + 663 * OS1_S1 + 1) -
                                      p_over_q * *(b + 783 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 558 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 663 * OS1_S1 + 0);
            *(b + 663 * OS1_S1 + 5) = prefactor_y * *(b + 663 * OS1_S1 + 1) -
                                      p_over_q * *(b + 797 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 545 * OS1_S1 + 1);
            *(b + 663 * OS1_S1 + 6) = prefactor_x * *(b + 663 * OS1_S1 + 3) -
                                      p_over_q * *(b + 783 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 558 * OS1_S1 + 3);
            *(b + 663 * OS1_S1 + 7) = prefactor_y * *(b + 663 * OS1_S1 + 2) -
                                      p_over_q * *(b + 797 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 545 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 663 * OS1_S1 + 0);
            *(b + 663 * OS1_S1 + 8) = prefactor_y * *(b + 663 * OS1_S1 + 3) -
                                      p_over_q * *(b + 797 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 545 * OS1_S1 + 3);
            *(b + 663 * OS1_S1 + 9) =
                prefactor_z * *(b + 663 * OS1_S1 + 3) -
                p_over_q * *(b + 798 * OS1_S1 + 3) +
                12 * one_over_two_q * *(b + 544 * OS1_S1 + 3) +
                one_over_two_q * *(b + 663 * OS1_S1 + 0);
            *(b + 664 * OS1_S1 + 4) = prefactor_x * *(b + 664 * OS1_S1 + 1) -
                                      p_over_q * *(b + 784 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 559 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 664 * OS1_S1 + 0);
            *(b + 664 * OS1_S1 + 5) = prefactor_y * *(b + 664 * OS1_S1 + 1) -
                                      p_over_q * *(b + 798 * OS1_S1 + 1);
            *(b + 664 * OS1_S1 + 6) = prefactor_x * *(b + 664 * OS1_S1 + 3) -
                                      p_over_q * *(b + 784 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 559 * OS1_S1 + 3);
            *(b + 664 * OS1_S1 + 7) = prefactor_y * *(b + 664 * OS1_S1 + 2) -
                                      p_over_q * *(b + 798 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 664 * OS1_S1 + 0);
            *(b + 664 * OS1_S1 + 8) = prefactor_y * *(b + 664 * OS1_S1 + 3) -
                                      p_over_q * *(b + 798 * OS1_S1 + 3);
            *(b + 664 * OS1_S1 + 9) =
                prefactor_z * *(b + 664 * OS1_S1 + 3) -
                p_over_q * *(b + 799 * OS1_S1 + 3) +
                13 * one_over_two_q * *(b + 545 * OS1_S1 + 3) +
                one_over_two_q * *(b + 664 * OS1_S1 + 0);
            *(b + 665 * OS1_S1 + 4) = prefactor_x * *(b + 665 * OS1_S1 + 1) -
                                      p_over_q * *(b + 785 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 665 * OS1_S1 + 0);
            *(b + 665 * OS1_S1 + 5) = prefactor_x * *(b + 665 * OS1_S1 + 2) -
                                      p_over_q * *(b + 785 * OS1_S1 + 2);
            *(b + 665 * OS1_S1 + 6) = prefactor_z * *(b + 665 * OS1_S1 + 1) -
                                      p_over_q * *(b + 801 * OS1_S1 + 1);
            *(b + 665 * OS1_S1 + 7) =
                prefactor_y * *(b + 665 * OS1_S1 + 2) -
                p_over_q * *(b + 800 * OS1_S1 + 2) +
                14 * one_over_two_q * *(b + 546 * OS1_S1 + 2) +
                one_over_two_q * *(b + 665 * OS1_S1 + 0);
            *(b + 665 * OS1_S1 + 8) = prefactor_z * *(b + 665 * OS1_S1 + 2) -
                                      p_over_q * *(b + 801 * OS1_S1 + 2);
            *(b + 665 * OS1_S1 + 9) = prefactor_z * *(b + 665 * OS1_S1 + 3) -
                                      p_over_q * *(b + 801 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 665 * OS1_S1 + 0);
            *(b + 666 * OS1_S1 + 4) = prefactor_x * *(b + 666 * OS1_S1 + 1) -
                                      p_over_q * *(b + 786 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 666 * OS1_S1 + 0);
            *(b + 666 * OS1_S1 + 5) = prefactor_x * *(b + 666 * OS1_S1 + 2) -
                                      p_over_q * *(b + 786 * OS1_S1 + 2);
            *(b + 666 * OS1_S1 + 6) = prefactor_x * *(b + 666 * OS1_S1 + 3) -
                                      p_over_q * *(b + 786 * OS1_S1 + 3);
            *(b + 666 * OS1_S1 + 7) =
                prefactor_y * *(b + 666 * OS1_S1 + 2) -
                p_over_q * *(b + 801 * OS1_S1 + 2) +
                13 * one_over_two_q * *(b + 547 * OS1_S1 + 2) +
                one_over_two_q * *(b + 666 * OS1_S1 + 0);
            *(b + 666 * OS1_S1 + 8) = prefactor_z * *(b + 666 * OS1_S1 + 2) -
                                      p_over_q * *(b + 802 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 546 * OS1_S1 + 2);
            *(b + 666 * OS1_S1 + 9) = prefactor_z * *(b + 666 * OS1_S1 + 3) -
                                      p_over_q * *(b + 802 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 546 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 666 * OS1_S1 + 0);
            *(b + 667 * OS1_S1 + 4) = prefactor_x * *(b + 667 * OS1_S1 + 1) -
                                      p_over_q * *(b + 787 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 667 * OS1_S1 + 0);
            *(b + 667 * OS1_S1 + 5) = prefactor_x * *(b + 667 * OS1_S1 + 2) -
                                      p_over_q * *(b + 787 * OS1_S1 + 2);
            *(b + 667 * OS1_S1 + 6) = prefactor_x * *(b + 667 * OS1_S1 + 3) -
                                      p_over_q * *(b + 787 * OS1_S1 + 3);
            *(b + 667 * OS1_S1 + 7) =
                prefactor_y * *(b + 667 * OS1_S1 + 2) -
                p_over_q * *(b + 802 * OS1_S1 + 2) +
                12 * one_over_two_q * *(b + 548 * OS1_S1 + 2) +
                one_over_two_q * *(b + 667 * OS1_S1 + 0);
            *(b + 667 * OS1_S1 + 8) =
                prefactor_z * *(b + 667 * OS1_S1 + 2) -
                p_over_q * *(b + 803 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 547 * OS1_S1 + 2);
            *(b + 667 * OS1_S1 + 9) =
                prefactor_z * *(b + 667 * OS1_S1 + 3) -
                p_over_q * *(b + 803 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 547 * OS1_S1 + 3) +
                one_over_two_q * *(b + 667 * OS1_S1 + 0);
            *(b + 668 * OS1_S1 + 4) = prefactor_x * *(b + 668 * OS1_S1 + 1) -
                                      p_over_q * *(b + 788 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 668 * OS1_S1 + 0);
            *(b + 668 * OS1_S1 + 5) = prefactor_x * *(b + 668 * OS1_S1 + 2) -
                                      p_over_q * *(b + 788 * OS1_S1 + 2);
            *(b + 668 * OS1_S1 + 6) = prefactor_x * *(b + 668 * OS1_S1 + 3) -
                                      p_over_q * *(b + 788 * OS1_S1 + 3);
            *(b + 668 * OS1_S1 + 7) =
                prefactor_y * *(b + 668 * OS1_S1 + 2) -
                p_over_q * *(b + 803 * OS1_S1 + 2) +
                11 * one_over_two_q * *(b + 549 * OS1_S1 + 2) +
                one_over_two_q * *(b + 668 * OS1_S1 + 0);
            *(b + 668 * OS1_S1 + 8) =
                prefactor_z * *(b + 668 * OS1_S1 + 2) -
                p_over_q * *(b + 804 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 548 * OS1_S1 + 2);
            *(b + 668 * OS1_S1 + 9) =
                prefactor_z * *(b + 668 * OS1_S1 + 3) -
                p_over_q * *(b + 804 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 548 * OS1_S1 + 3) +
                one_over_two_q * *(b + 668 * OS1_S1 + 0);
            *(b + 669 * OS1_S1 + 4) = prefactor_x * *(b + 669 * OS1_S1 + 1) -
                                      p_over_q * *(b + 789 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 669 * OS1_S1 + 0);
            *(b + 669 * OS1_S1 + 5) = prefactor_x * *(b + 669 * OS1_S1 + 2) -
                                      p_over_q * *(b + 789 * OS1_S1 + 2);
            *(b + 669 * OS1_S1 + 6) = prefactor_x * *(b + 669 * OS1_S1 + 3) -
                                      p_over_q * *(b + 789 * OS1_S1 + 3);
            *(b + 669 * OS1_S1 + 7) =
                prefactor_y * *(b + 669 * OS1_S1 + 2) -
                p_over_q * *(b + 804 * OS1_S1 + 2) +
                10 * one_over_two_q * *(b + 550 * OS1_S1 + 2) +
                one_over_two_q * *(b + 669 * OS1_S1 + 0);
            *(b + 669 * OS1_S1 + 8) =
                prefactor_z * *(b + 669 * OS1_S1 + 2) -
                p_over_q * *(b + 805 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 549 * OS1_S1 + 2);
            *(b + 669 * OS1_S1 + 9) =
                prefactor_z * *(b + 669 * OS1_S1 + 3) -
                p_over_q * *(b + 805 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 549 * OS1_S1 + 3) +
                one_over_two_q * *(b + 669 * OS1_S1 + 0);
            *(b + 670 * OS1_S1 + 4) = prefactor_x * *(b + 670 * OS1_S1 + 1) -
                                      p_over_q * *(b + 790 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 670 * OS1_S1 + 0);
            *(b + 670 * OS1_S1 + 5) = prefactor_x * *(b + 670 * OS1_S1 + 2) -
                                      p_over_q * *(b + 790 * OS1_S1 + 2);
            *(b + 670 * OS1_S1 + 6) = prefactor_x * *(b + 670 * OS1_S1 + 3) -
                                      p_over_q * *(b + 790 * OS1_S1 + 3);
            *(b + 670 * OS1_S1 + 7) =
                prefactor_y * *(b + 670 * OS1_S1 + 2) -
                p_over_q * *(b + 805 * OS1_S1 + 2) +
                9 * one_over_two_q * *(b + 551 * OS1_S1 + 2) +
                one_over_two_q * *(b + 670 * OS1_S1 + 0);
            *(b + 670 * OS1_S1 + 8) =
                prefactor_z * *(b + 670 * OS1_S1 + 2) -
                p_over_q * *(b + 806 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 550 * OS1_S1 + 2);
            *(b + 670 * OS1_S1 + 9) =
                prefactor_z * *(b + 670 * OS1_S1 + 3) -
                p_over_q * *(b + 806 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 550 * OS1_S1 + 3) +
                one_over_two_q * *(b + 670 * OS1_S1 + 0);
            *(b + 671 * OS1_S1 + 4) = prefactor_x * *(b + 671 * OS1_S1 + 1) -
                                      p_over_q * *(b + 791 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 671 * OS1_S1 + 0);
            *(b + 671 * OS1_S1 + 5) = prefactor_x * *(b + 671 * OS1_S1 + 2) -
                                      p_over_q * *(b + 791 * OS1_S1 + 2);
            *(b + 671 * OS1_S1 + 6) = prefactor_x * *(b + 671 * OS1_S1 + 3) -
                                      p_over_q * *(b + 791 * OS1_S1 + 3);
            *(b + 671 * OS1_S1 + 7) =
                prefactor_y * *(b + 671 * OS1_S1 + 2) -
                p_over_q * *(b + 806 * OS1_S1 + 2) +
                8 * one_over_two_q * *(b + 552 * OS1_S1 + 2) +
                one_over_two_q * *(b + 671 * OS1_S1 + 0);
            *(b + 671 * OS1_S1 + 8) =
                prefactor_z * *(b + 671 * OS1_S1 + 2) -
                p_over_q * *(b + 807 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 551 * OS1_S1 + 2);
            *(b + 671 * OS1_S1 + 9) =
                prefactor_z * *(b + 671 * OS1_S1 + 3) -
                p_over_q * *(b + 807 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 551 * OS1_S1 + 3) +
                one_over_two_q * *(b + 671 * OS1_S1 + 0);
            *(b + 672 * OS1_S1 + 4) = prefactor_x * *(b + 672 * OS1_S1 + 1) -
                                      p_over_q * *(b + 792 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 672 * OS1_S1 + 0);
            *(b + 672 * OS1_S1 + 5) = prefactor_x * *(b + 672 * OS1_S1 + 2) -
                                      p_over_q * *(b + 792 * OS1_S1 + 2);
            *(b + 672 * OS1_S1 + 6) = prefactor_x * *(b + 672 * OS1_S1 + 3) -
                                      p_over_q * *(b + 792 * OS1_S1 + 3);
            *(b + 672 * OS1_S1 + 7) =
                prefactor_y * *(b + 672 * OS1_S1 + 2) -
                p_over_q * *(b + 807 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 553 * OS1_S1 + 2) +
                one_over_two_q * *(b + 672 * OS1_S1 + 0);
            *(b + 672 * OS1_S1 + 8) =
                prefactor_z * *(b + 672 * OS1_S1 + 2) -
                p_over_q * *(b + 808 * OS1_S1 + 2) +
                7 * one_over_two_q * *(b + 552 * OS1_S1 + 2);
            *(b + 672 * OS1_S1 + 9) =
                prefactor_z * *(b + 672 * OS1_S1 + 3) -
                p_over_q * *(b + 808 * OS1_S1 + 3) +
                7 * one_over_two_q * *(b + 552 * OS1_S1 + 3) +
                one_over_two_q * *(b + 672 * OS1_S1 + 0);
            *(b + 673 * OS1_S1 + 4) = prefactor_x * *(b + 673 * OS1_S1 + 1) -
                                      p_over_q * *(b + 793 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 673 * OS1_S1 + 0);
            *(b + 673 * OS1_S1 + 5) = prefactor_x * *(b + 673 * OS1_S1 + 2) -
                                      p_over_q * *(b + 793 * OS1_S1 + 2);
            *(b + 673 * OS1_S1 + 6) = prefactor_x * *(b + 673 * OS1_S1 + 3) -
                                      p_over_q * *(b + 793 * OS1_S1 + 3);
            *(b + 673 * OS1_S1 + 7) =
                prefactor_y * *(b + 673 * OS1_S1 + 2) -
                p_over_q * *(b + 808 * OS1_S1 + 2) +
                6 * one_over_two_q * *(b + 554 * OS1_S1 + 2) +
                one_over_two_q * *(b + 673 * OS1_S1 + 0);
            *(b + 673 * OS1_S1 + 8) =
                prefactor_y * *(b + 673 * OS1_S1 + 3) -
                p_over_q * *(b + 808 * OS1_S1 + 3) +
                6 * one_over_two_q * *(b + 554 * OS1_S1 + 3);
            *(b + 673 * OS1_S1 + 9) =
                prefactor_z * *(b + 673 * OS1_S1 + 3) -
                p_over_q * *(b + 809 * OS1_S1 + 3) +
                8 * one_over_two_q * *(b + 553 * OS1_S1 + 3) +
                one_over_two_q * *(b + 673 * OS1_S1 + 0);
            *(b + 674 * OS1_S1 + 4) = prefactor_x * *(b + 674 * OS1_S1 + 1) -
                                      p_over_q * *(b + 794 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 674 * OS1_S1 + 0);
            *(b + 674 * OS1_S1 + 5) = prefactor_x * *(b + 674 * OS1_S1 + 2) -
                                      p_over_q * *(b + 794 * OS1_S1 + 2);
            *(b + 674 * OS1_S1 + 6) = prefactor_x * *(b + 674 * OS1_S1 + 3) -
                                      p_over_q * *(b + 794 * OS1_S1 + 3);
            *(b + 674 * OS1_S1 + 7) =
                prefactor_y * *(b + 674 * OS1_S1 + 2) -
                p_over_q * *(b + 809 * OS1_S1 + 2) +
                5 * one_over_two_q * *(b + 555 * OS1_S1 + 2) +
                one_over_two_q * *(b + 674 * OS1_S1 + 0);
            *(b + 674 * OS1_S1 + 8) =
                prefactor_y * *(b + 674 * OS1_S1 + 3) -
                p_over_q * *(b + 809 * OS1_S1 + 3) +
                5 * one_over_two_q * *(b + 555 * OS1_S1 + 3);
            *(b + 674 * OS1_S1 + 9) =
                prefactor_z * *(b + 674 * OS1_S1 + 3) -
                p_over_q * *(b + 810 * OS1_S1 + 3) +
                9 * one_over_two_q * *(b + 554 * OS1_S1 + 3) +
                one_over_two_q * *(b + 674 * OS1_S1 + 0);
            *(b + 675 * OS1_S1 + 4) = prefactor_x * *(b + 675 * OS1_S1 + 1) -
                                      p_over_q * *(b + 795 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 675 * OS1_S1 + 0);
            *(b + 675 * OS1_S1 + 5) = prefactor_x * *(b + 675 * OS1_S1 + 2) -
                                      p_over_q * *(b + 795 * OS1_S1 + 2);
            *(b + 675 * OS1_S1 + 6) = prefactor_x * *(b + 675 * OS1_S1 + 3) -
                                      p_over_q * *(b + 795 * OS1_S1 + 3);
            *(b + 675 * OS1_S1 + 7) =
                prefactor_y * *(b + 675 * OS1_S1 + 2) -
                p_over_q * *(b + 810 * OS1_S1 + 2) +
                4 * one_over_two_q * *(b + 556 * OS1_S1 + 2) +
                one_over_two_q * *(b + 675 * OS1_S1 + 0);
            *(b + 675 * OS1_S1 + 8) =
                prefactor_y * *(b + 675 * OS1_S1 + 3) -
                p_over_q * *(b + 810 * OS1_S1 + 3) +
                4 * one_over_two_q * *(b + 556 * OS1_S1 + 3);
            *(b + 675 * OS1_S1 + 9) =
                prefactor_z * *(b + 675 * OS1_S1 + 3) -
                p_over_q * *(b + 811 * OS1_S1 + 3) +
                10 * one_over_two_q * *(b + 555 * OS1_S1 + 3) +
                one_over_two_q * *(b + 675 * OS1_S1 + 0);
            *(b + 676 * OS1_S1 + 4) = prefactor_x * *(b + 676 * OS1_S1 + 1) -
                                      p_over_q * *(b + 796 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 676 * OS1_S1 + 0);
            *(b + 676 * OS1_S1 + 5) = prefactor_x * *(b + 676 * OS1_S1 + 2) -
                                      p_over_q * *(b + 796 * OS1_S1 + 2);
            *(b + 676 * OS1_S1 + 6) = prefactor_x * *(b + 676 * OS1_S1 + 3) -
                                      p_over_q * *(b + 796 * OS1_S1 + 3);
            *(b + 676 * OS1_S1 + 7) =
                prefactor_y * *(b + 676 * OS1_S1 + 2) -
                p_over_q * *(b + 811 * OS1_S1 + 2) +
                3 * one_over_two_q * *(b + 557 * OS1_S1 + 2) +
                one_over_two_q * *(b + 676 * OS1_S1 + 0);
            *(b + 676 * OS1_S1 + 8) =
                prefactor_y * *(b + 676 * OS1_S1 + 3) -
                p_over_q * *(b + 811 * OS1_S1 + 3) +
                3 * one_over_two_q * *(b + 557 * OS1_S1 + 3);
            *(b + 676 * OS1_S1 + 9) =
                prefactor_z * *(b + 676 * OS1_S1 + 3) -
                p_over_q * *(b + 812 * OS1_S1 + 3) +
                11 * one_over_two_q * *(b + 556 * OS1_S1 + 3) +
                one_over_two_q * *(b + 676 * OS1_S1 + 0);
            *(b + 677 * OS1_S1 + 4) = prefactor_x * *(b + 677 * OS1_S1 + 1) -
                                      p_over_q * *(b + 797 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 677 * OS1_S1 + 0);
            *(b + 677 * OS1_S1 + 5) = prefactor_x * *(b + 677 * OS1_S1 + 2) -
                                      p_over_q * *(b + 797 * OS1_S1 + 2);
            *(b + 677 * OS1_S1 + 6) = prefactor_x * *(b + 677 * OS1_S1 + 3) -
                                      p_over_q * *(b + 797 * OS1_S1 + 3);
            *(b + 677 * OS1_S1 + 7) =
                prefactor_y * *(b + 677 * OS1_S1 + 2) -
                p_over_q * *(b + 812 * OS1_S1 + 2) +
                2 * one_over_two_q * *(b + 558 * OS1_S1 + 2) +
                one_over_two_q * *(b + 677 * OS1_S1 + 0);
            *(b + 677 * OS1_S1 + 8) =
                prefactor_y * *(b + 677 * OS1_S1 + 3) -
                p_over_q * *(b + 812 * OS1_S1 + 3) +
                2 * one_over_two_q * *(b + 558 * OS1_S1 + 3);
            *(b + 677 * OS1_S1 + 9) =
                prefactor_z * *(b + 677 * OS1_S1 + 3) -
                p_over_q * *(b + 813 * OS1_S1 + 3) +
                12 * one_over_two_q * *(b + 557 * OS1_S1 + 3) +
                one_over_two_q * *(b + 677 * OS1_S1 + 0);
            *(b + 678 * OS1_S1 + 4) = prefactor_x * *(b + 678 * OS1_S1 + 1) -
                                      p_over_q * *(b + 798 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 678 * OS1_S1 + 0);
            *(b + 678 * OS1_S1 + 5) = prefactor_x * *(b + 678 * OS1_S1 + 2) -
                                      p_over_q * *(b + 798 * OS1_S1 + 2);
            *(b + 678 * OS1_S1 + 6) = prefactor_x * *(b + 678 * OS1_S1 + 3) -
                                      p_over_q * *(b + 798 * OS1_S1 + 3);
            *(b + 678 * OS1_S1 + 7) = prefactor_y * *(b + 678 * OS1_S1 + 2) -
                                      p_over_q * *(b + 813 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 559 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 678 * OS1_S1 + 0);
            *(b + 678 * OS1_S1 + 8) = prefactor_y * *(b + 678 * OS1_S1 + 3) -
                                      p_over_q * *(b + 813 * OS1_S1 + 3) +
                                      one_over_two_q * *(b + 559 * OS1_S1 + 3);
            *(b + 678 * OS1_S1 + 9) =
                prefactor_z * *(b + 678 * OS1_S1 + 3) -
                p_over_q * *(b + 814 * OS1_S1 + 3) +
                13 * one_over_two_q * *(b + 558 * OS1_S1 + 3) +
                one_over_two_q * *(b + 678 * OS1_S1 + 0);
            *(b + 679 * OS1_S1 + 4) = prefactor_x * *(b + 679 * OS1_S1 + 1) -
                                      p_over_q * *(b + 799 * OS1_S1 + 1) +
                                      one_over_two_q * *(b + 679 * OS1_S1 + 0);
            *(b + 679 * OS1_S1 + 5) = prefactor_y * *(b + 679 * OS1_S1 + 1) -
                                      p_over_q * *(b + 814 * OS1_S1 + 1);
            *(b + 679 * OS1_S1 + 6) = prefactor_x * *(b + 679 * OS1_S1 + 3) -
                                      p_over_q * *(b + 799 * OS1_S1 + 3);
            *(b + 679 * OS1_S1 + 7) = prefactor_y * *(b + 679 * OS1_S1 + 2) -
                                      p_over_q * *(b + 814 * OS1_S1 + 2) +
                                      one_over_two_q * *(b + 679 * OS1_S1 + 0);
            *(b + 679 * OS1_S1 + 8) = prefactor_y * *(b + 679 * OS1_S1 + 3) -
                                      p_over_q * *(b + 814 * OS1_S1 + 3);
            *(b + 679 * OS1_S1 + 9) =
                prefactor_z * *(b + 679 * OS1_S1 + 3) -
                p_over_q * *(b + 815 * OS1_S1 + 3) +
                14 * one_over_two_q * *(b + 559 * OS1_S1 + 3) +
                one_over_two_q * *(b + 679 * OS1_S1 + 0);
            return;
        }
    }
}
