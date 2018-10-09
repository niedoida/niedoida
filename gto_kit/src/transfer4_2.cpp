/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_9_4(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 165 * OS1_S1 + 20) =
                prefactor_x * *(b + 165 * OS1_S1 + 10) -
                p_over_q * *(b + 220 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 165 * OS1_S1 + 4);
            *(b + 165 * OS1_S1 + 21) = prefactor_y * *(b + 165 * OS1_S1 + 10) -
                                       p_over_q * *(b + 221 * OS1_S1 + 10);
            *(b + 165 * OS1_S1 + 22) = prefactor_z * *(b + 165 * OS1_S1 + 10) -
                                       p_over_q * *(b + 222 * OS1_S1 + 10);
            *(b + 165 * OS1_S1 + 23) = prefactor_y * *(b + 165 * OS1_S1 + 11) -
                                       p_over_q * *(b + 221 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 165 * OS1_S1 + 4);
            *(b + 165 * OS1_S1 + 24) = prefactor_z * *(b + 165 * OS1_S1 + 11) -
                                       p_over_q * *(b + 222 * OS1_S1 + 11);
            *(b + 165 * OS1_S1 + 25) = prefactor_z * *(b + 165 * OS1_S1 + 12) -
                                       p_over_q * *(b + 222 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 165 * OS1_S1 + 4);
            *(b + 165 * OS1_S1 + 26) =
                prefactor_x * *(b + 165 * OS1_S1 + 16) -
                p_over_q * *(b + 220 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 16);
            *(b + 165 * OS1_S1 + 27) = prefactor_z * *(b + 165 * OS1_S1 + 13) -
                                       p_over_q * *(b + 222 * OS1_S1 + 13);
            *(b + 165 * OS1_S1 + 28) = prefactor_y * *(b + 165 * OS1_S1 + 15) -
                                       p_over_q * *(b + 221 * OS1_S1 + 15);
            *(b + 165 * OS1_S1 + 29) =
                prefactor_x * *(b + 165 * OS1_S1 + 19) -
                p_over_q * *(b + 220 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 19);
            *(b + 165 * OS1_S1 + 30) =
                prefactor_y * *(b + 165 * OS1_S1 + 16) -
                p_over_q * *(b + 221 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 165 * OS1_S1 + 7);
            *(b + 165 * OS1_S1 + 31) = prefactor_z * *(b + 165 * OS1_S1 + 16) -
                                       p_over_q * *(b + 222 * OS1_S1 + 16);
            *(b + 165 * OS1_S1 + 32) = prefactor_z * *(b + 165 * OS1_S1 + 17) -
                                       p_over_q * *(b + 222 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 165 * OS1_S1 + 7);
            *(b + 165 * OS1_S1 + 33) = prefactor_y * *(b + 165 * OS1_S1 + 19) -
                                       p_over_q * *(b + 221 * OS1_S1 + 19);
            *(b + 165 * OS1_S1 + 34) =
                prefactor_z * *(b + 165 * OS1_S1 + 19) -
                p_over_q * *(b + 222 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 165 * OS1_S1 + 9);
            *(b + 166 * OS1_S1 + 20) =
                prefactor_x * *(b + 166 * OS1_S1 + 10) -
                p_over_q * *(b + 221 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 166 * OS1_S1 + 4);
            *(b + 166 * OS1_S1 + 21) =
                prefactor_y * *(b + 166 * OS1_S1 + 10) -
                p_over_q * *(b + 223 * OS1_S1 + 10) +
                one_over_two_q * *(b + 120 * OS1_S1 + 10);
            *(b + 166 * OS1_S1 + 22) = prefactor_z * *(b + 166 * OS1_S1 + 10) -
                                       p_over_q * *(b + 224 * OS1_S1 + 10);
            *(b + 166 * OS1_S1 + 23) =
                prefactor_y * *(b + 166 * OS1_S1 + 11) -
                p_over_q * *(b + 223 * OS1_S1 + 11) +
                one_over_two_q * *(b + 120 * OS1_S1 + 11) +
                one_over_two_q * *(b + 166 * OS1_S1 + 4);
            *(b + 166 * OS1_S1 + 24) = prefactor_z * *(b + 166 * OS1_S1 + 11) -
                                       p_over_q * *(b + 224 * OS1_S1 + 11);
            *(b + 166 * OS1_S1 + 25) = prefactor_z * *(b + 166 * OS1_S1 + 12) -
                                       p_over_q * *(b + 224 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 166 * OS1_S1 + 4);
            *(b + 166 * OS1_S1 + 26) =
                prefactor_x * *(b + 166 * OS1_S1 + 16) -
                p_over_q * *(b + 221 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 16);
            *(b + 166 * OS1_S1 + 27) = prefactor_z * *(b + 166 * OS1_S1 + 13) -
                                       p_over_q * *(b + 224 * OS1_S1 + 13);
            *(b + 166 * OS1_S1 + 28) =
                prefactor_y * *(b + 166 * OS1_S1 + 15) -
                p_over_q * *(b + 223 * OS1_S1 + 15) +
                one_over_two_q * *(b + 120 * OS1_S1 + 15);
            *(b + 166 * OS1_S1 + 29) =
                prefactor_x * *(b + 166 * OS1_S1 + 19) -
                p_over_q * *(b + 221 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 19);
            *(b + 166 * OS1_S1 + 30) =
                prefactor_y * *(b + 166 * OS1_S1 + 16) -
                p_over_q * *(b + 223 * OS1_S1 + 16) +
                one_over_two_q * *(b + 120 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 166 * OS1_S1 + 7);
            *(b + 166 * OS1_S1 + 31) = prefactor_z * *(b + 166 * OS1_S1 + 16) -
                                       p_over_q * *(b + 224 * OS1_S1 + 16);
            *(b + 166 * OS1_S1 + 32) = prefactor_z * *(b + 166 * OS1_S1 + 17) -
                                       p_over_q * *(b + 224 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 166 * OS1_S1 + 7);
            *(b + 166 * OS1_S1 + 33) =
                prefactor_y * *(b + 166 * OS1_S1 + 19) -
                p_over_q * *(b + 223 * OS1_S1 + 19) +
                one_over_two_q * *(b + 120 * OS1_S1 + 19);
            *(b + 166 * OS1_S1 + 34) =
                prefactor_z * *(b + 166 * OS1_S1 + 19) -
                p_over_q * *(b + 224 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 166 * OS1_S1 + 9);
            *(b + 167 * OS1_S1 + 20) =
                prefactor_x * *(b + 167 * OS1_S1 + 10) -
                p_over_q * *(b + 222 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 167 * OS1_S1 + 4);
            *(b + 167 * OS1_S1 + 21) = prefactor_y * *(b + 167 * OS1_S1 + 10) -
                                       p_over_q * *(b + 224 * OS1_S1 + 10);
            *(b + 167 * OS1_S1 + 22) =
                prefactor_z * *(b + 167 * OS1_S1 + 10) -
                p_over_q * *(b + 225 * OS1_S1 + 10) +
                one_over_two_q * *(b + 120 * OS1_S1 + 10);
            *(b + 167 * OS1_S1 + 23) = prefactor_y * *(b + 167 * OS1_S1 + 11) -
                                       p_over_q * *(b + 224 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 167 * OS1_S1 + 4);
            *(b + 167 * OS1_S1 + 24) = prefactor_y * *(b + 167 * OS1_S1 + 12) -
                                       p_over_q * *(b + 224 * OS1_S1 + 12);
            *(b + 167 * OS1_S1 + 25) =
                prefactor_z * *(b + 167 * OS1_S1 + 12) -
                p_over_q * *(b + 225 * OS1_S1 + 12) +
                one_over_two_q * *(b + 120 * OS1_S1 + 12) +
                one_over_two_q * *(b + 167 * OS1_S1 + 4);
            *(b + 167 * OS1_S1 + 26) =
                prefactor_x * *(b + 167 * OS1_S1 + 16) -
                p_over_q * *(b + 222 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 16);
            *(b + 167 * OS1_S1 + 27) =
                prefactor_z * *(b + 167 * OS1_S1 + 13) -
                p_over_q * *(b + 225 * OS1_S1 + 13) +
                one_over_two_q * *(b + 120 * OS1_S1 + 13);
            *(b + 167 * OS1_S1 + 28) = prefactor_y * *(b + 167 * OS1_S1 + 15) -
                                       p_over_q * *(b + 224 * OS1_S1 + 15);
            *(b + 167 * OS1_S1 + 29) =
                prefactor_x * *(b + 167 * OS1_S1 + 19) -
                p_over_q * *(b + 222 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 19);
            *(b + 167 * OS1_S1 + 30) =
                prefactor_y * *(b + 167 * OS1_S1 + 16) -
                p_over_q * *(b + 224 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 167 * OS1_S1 + 7);
            *(b + 167 * OS1_S1 + 31) =
                prefactor_z * *(b + 167 * OS1_S1 + 16) -
                p_over_q * *(b + 225 * OS1_S1 + 16) +
                one_over_two_q * *(b + 120 * OS1_S1 + 16);
            *(b + 167 * OS1_S1 + 32) = prefactor_y * *(b + 167 * OS1_S1 + 18) -
                                       p_over_q * *(b + 224 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 167 * OS1_S1 + 9);
            *(b + 167 * OS1_S1 + 33) = prefactor_y * *(b + 167 * OS1_S1 + 19) -
                                       p_over_q * *(b + 224 * OS1_S1 + 19);
            *(b + 167 * OS1_S1 + 34) =
                prefactor_z * *(b + 167 * OS1_S1 + 19) -
                p_over_q * *(b + 225 * OS1_S1 + 19) +
                one_over_two_q * *(b + 120 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 167 * OS1_S1 + 9);
            *(b + 168 * OS1_S1 + 20) =
                prefactor_x * *(b + 168 * OS1_S1 + 10) -
                p_over_q * *(b + 223 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 4);
            *(b + 168 * OS1_S1 + 21) =
                prefactor_y * *(b + 168 * OS1_S1 + 10) -
                p_over_q * *(b + 226 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 10);
            *(b + 168 * OS1_S1 + 22) = prefactor_z * *(b + 168 * OS1_S1 + 10) -
                                       p_over_q * *(b + 227 * OS1_S1 + 10);
            *(b + 168 * OS1_S1 + 23) =
                prefactor_y * *(b + 168 * OS1_S1 + 11) -
                p_over_q * *(b + 226 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 11) +
                one_over_two_q * *(b + 168 * OS1_S1 + 4);
            *(b + 168 * OS1_S1 + 24) = prefactor_z * *(b + 168 * OS1_S1 + 11) -
                                       p_over_q * *(b + 227 * OS1_S1 + 11);
            *(b + 168 * OS1_S1 + 25) = prefactor_z * *(b + 168 * OS1_S1 + 12) -
                                       p_over_q * *(b + 227 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 168 * OS1_S1 + 4);
            *(b + 168 * OS1_S1 + 26) =
                prefactor_x * *(b + 168 * OS1_S1 + 16) -
                p_over_q * *(b + 223 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 16);
            *(b + 168 * OS1_S1 + 27) = prefactor_z * *(b + 168 * OS1_S1 + 13) -
                                       p_over_q * *(b + 227 * OS1_S1 + 13);
            *(b + 168 * OS1_S1 + 28) =
                prefactor_y * *(b + 168 * OS1_S1 + 15) -
                p_over_q * *(b + 226 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 15);
            *(b + 168 * OS1_S1 + 29) =
                prefactor_x * *(b + 168 * OS1_S1 + 19) -
                p_over_q * *(b + 223 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 19);
            *(b + 168 * OS1_S1 + 30) =
                prefactor_y * *(b + 168 * OS1_S1 + 16) -
                p_over_q * *(b + 226 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 7);
            *(b + 168 * OS1_S1 + 31) = prefactor_z * *(b + 168 * OS1_S1 + 16) -
                                       p_over_q * *(b + 227 * OS1_S1 + 16);
            *(b + 168 * OS1_S1 + 32) = prefactor_z * *(b + 168 * OS1_S1 + 17) -
                                       p_over_q * *(b + 227 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 168 * OS1_S1 + 7);
            *(b + 168 * OS1_S1 + 33) =
                prefactor_y * *(b + 168 * OS1_S1 + 19) -
                p_over_q * *(b + 226 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 19);
            *(b + 168 * OS1_S1 + 34) =
                prefactor_z * *(b + 168 * OS1_S1 + 19) -
                p_over_q * *(b + 227 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 9);
            *(b + 169 * OS1_S1 + 20) =
                prefactor_x * *(b + 169 * OS1_S1 + 10) -
                p_over_q * *(b + 224 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 169 * OS1_S1 + 4);
            *(b + 169 * OS1_S1 + 21) =
                prefactor_y * *(b + 169 * OS1_S1 + 10) -
                p_over_q * *(b + 227 * OS1_S1 + 10) +
                one_over_two_q * *(b + 122 * OS1_S1 + 10);
            *(b + 169 * OS1_S1 + 22) =
                prefactor_z * *(b + 169 * OS1_S1 + 10) -
                p_over_q * *(b + 228 * OS1_S1 + 10) +
                one_over_two_q * *(b + 121 * OS1_S1 + 10);
            *(b + 169 * OS1_S1 + 23) =
                prefactor_y * *(b + 169 * OS1_S1 + 11) -
                p_over_q * *(b + 227 * OS1_S1 + 11) +
                one_over_two_q * *(b + 122 * OS1_S1 + 11) +
                one_over_two_q * *(b + 169 * OS1_S1 + 4);
            *(b + 169 * OS1_S1 + 24) =
                prefactor_z * *(b + 169 * OS1_S1 + 11) -
                p_over_q * *(b + 228 * OS1_S1 + 11) +
                one_over_two_q * *(b + 121 * OS1_S1 + 11);
            *(b + 169 * OS1_S1 + 25) =
                prefactor_z * *(b + 169 * OS1_S1 + 12) -
                p_over_q * *(b + 228 * OS1_S1 + 12) +
                one_over_two_q * *(b + 121 * OS1_S1 + 12) +
                one_over_two_q * *(b + 169 * OS1_S1 + 4);
            *(b + 169 * OS1_S1 + 26) =
                prefactor_x * *(b + 169 * OS1_S1 + 16) -
                p_over_q * *(b + 224 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 16);
            *(b + 169 * OS1_S1 + 27) =
                prefactor_z * *(b + 169 * OS1_S1 + 13) -
                p_over_q * *(b + 228 * OS1_S1 + 13) +
                one_over_two_q * *(b + 121 * OS1_S1 + 13);
            *(b + 169 * OS1_S1 + 28) =
                prefactor_y * *(b + 169 * OS1_S1 + 15) -
                p_over_q * *(b + 227 * OS1_S1 + 15) +
                one_over_two_q * *(b + 122 * OS1_S1 + 15);
            *(b + 169 * OS1_S1 + 29) =
                prefactor_x * *(b + 169 * OS1_S1 + 19) -
                p_over_q * *(b + 224 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 19);
            *(b + 169 * OS1_S1 + 30) =
                prefactor_y * *(b + 169 * OS1_S1 + 16) -
                p_over_q * *(b + 227 * OS1_S1 + 16) +
                one_over_two_q * *(b + 122 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 169 * OS1_S1 + 7);
            *(b + 169 * OS1_S1 + 31) =
                prefactor_z * *(b + 169 * OS1_S1 + 16) -
                p_over_q * *(b + 228 * OS1_S1 + 16) +
                one_over_two_q * *(b + 121 * OS1_S1 + 16);
            *(b + 169 * OS1_S1 + 32) =
                prefactor_z * *(b + 169 * OS1_S1 + 17) -
                p_over_q * *(b + 228 * OS1_S1 + 17) +
                one_over_two_q * *(b + 121 * OS1_S1 + 17) +
                one_over_two_q * *(b + 169 * OS1_S1 + 7);
            *(b + 169 * OS1_S1 + 33) =
                prefactor_y * *(b + 169 * OS1_S1 + 19) -
                p_over_q * *(b + 227 * OS1_S1 + 19) +
                one_over_two_q * *(b + 122 * OS1_S1 + 19);
            *(b + 169 * OS1_S1 + 34) =
                prefactor_z * *(b + 169 * OS1_S1 + 19) -
                p_over_q * *(b + 228 * OS1_S1 + 19) +
                one_over_two_q * *(b + 121 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 169 * OS1_S1 + 9);
            *(b + 170 * OS1_S1 + 20) =
                prefactor_x * *(b + 170 * OS1_S1 + 10) -
                p_over_q * *(b + 225 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 4);
            *(b + 170 * OS1_S1 + 21) = prefactor_y * *(b + 170 * OS1_S1 + 10) -
                                       p_over_q * *(b + 228 * OS1_S1 + 10);
            *(b + 170 * OS1_S1 + 22) =
                prefactor_z * *(b + 170 * OS1_S1 + 10) -
                p_over_q * *(b + 229 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 10);
            *(b + 170 * OS1_S1 + 23) = prefactor_y * *(b + 170 * OS1_S1 + 11) -
                                       p_over_q * *(b + 228 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 170 * OS1_S1 + 4);
            *(b + 170 * OS1_S1 + 24) = prefactor_y * *(b + 170 * OS1_S1 + 12) -
                                       p_over_q * *(b + 228 * OS1_S1 + 12);
            *(b + 170 * OS1_S1 + 25) =
                prefactor_z * *(b + 170 * OS1_S1 + 12) -
                p_over_q * *(b + 229 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 12) +
                one_over_two_q * *(b + 170 * OS1_S1 + 4);
            *(b + 170 * OS1_S1 + 26) =
                prefactor_x * *(b + 170 * OS1_S1 + 16) -
                p_over_q * *(b + 225 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 16);
            *(b + 170 * OS1_S1 + 27) =
                prefactor_z * *(b + 170 * OS1_S1 + 13) -
                p_over_q * *(b + 229 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 13);
            *(b + 170 * OS1_S1 + 28) = prefactor_y * *(b + 170 * OS1_S1 + 15) -
                                       p_over_q * *(b + 228 * OS1_S1 + 15);
            *(b + 170 * OS1_S1 + 29) =
                prefactor_x * *(b + 170 * OS1_S1 + 19) -
                p_over_q * *(b + 225 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 19);
            *(b + 170 * OS1_S1 + 30) =
                prefactor_y * *(b + 170 * OS1_S1 + 16) -
                p_over_q * *(b + 228 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 7);
            *(b + 170 * OS1_S1 + 31) =
                prefactor_z * *(b + 170 * OS1_S1 + 16) -
                p_over_q * *(b + 229 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 16);
            *(b + 170 * OS1_S1 + 32) = prefactor_y * *(b + 170 * OS1_S1 + 18) -
                                       p_over_q * *(b + 228 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 170 * OS1_S1 + 9);
            *(b + 170 * OS1_S1 + 33) = prefactor_y * *(b + 170 * OS1_S1 + 19) -
                                       p_over_q * *(b + 228 * OS1_S1 + 19);
            *(b + 170 * OS1_S1 + 34) =
                prefactor_z * *(b + 170 * OS1_S1 + 19) -
                p_over_q * *(b + 229 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 9);
            *(b + 171 * OS1_S1 + 20) =
                prefactor_x * *(b + 171 * OS1_S1 + 10) -
                p_over_q * *(b + 226 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 171 * OS1_S1 + 4);
            *(b + 171 * OS1_S1 + 21) =
                prefactor_y * *(b + 171 * OS1_S1 + 10) -
                p_over_q * *(b + 230 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 10);
            *(b + 171 * OS1_S1 + 22) = prefactor_z * *(b + 171 * OS1_S1 + 10) -
                                       p_over_q * *(b + 231 * OS1_S1 + 10);
            *(b + 171 * OS1_S1 + 23) =
                prefactor_y * *(b + 171 * OS1_S1 + 11) -
                p_over_q * *(b + 230 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 11) +
                one_over_two_q * *(b + 171 * OS1_S1 + 4);
            *(b + 171 * OS1_S1 + 24) = prefactor_z * *(b + 171 * OS1_S1 + 11) -
                                       p_over_q * *(b + 231 * OS1_S1 + 11);
            *(b + 171 * OS1_S1 + 25) = prefactor_z * *(b + 171 * OS1_S1 + 12) -
                                       p_over_q * *(b + 231 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 171 * OS1_S1 + 4);
            *(b + 171 * OS1_S1 + 26) =
                prefactor_x * *(b + 171 * OS1_S1 + 16) -
                p_over_q * *(b + 226 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 16);
            *(b + 171 * OS1_S1 + 27) = prefactor_z * *(b + 171 * OS1_S1 + 13) -
                                       p_over_q * *(b + 231 * OS1_S1 + 13);
            *(b + 171 * OS1_S1 + 28) =
                prefactor_y * *(b + 171 * OS1_S1 + 15) -
                p_over_q * *(b + 230 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 15);
            *(b + 171 * OS1_S1 + 29) =
                prefactor_x * *(b + 171 * OS1_S1 + 19) -
                p_over_q * *(b + 226 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 19);
            *(b + 171 * OS1_S1 + 30) =
                prefactor_y * *(b + 171 * OS1_S1 + 16) -
                p_over_q * *(b + 230 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 171 * OS1_S1 + 7);
            *(b + 171 * OS1_S1 + 31) = prefactor_z * *(b + 171 * OS1_S1 + 16) -
                                       p_over_q * *(b + 231 * OS1_S1 + 16);
            *(b + 171 * OS1_S1 + 32) = prefactor_z * *(b + 171 * OS1_S1 + 17) -
                                       p_over_q * *(b + 231 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 171 * OS1_S1 + 7);
            *(b + 171 * OS1_S1 + 33) =
                prefactor_y * *(b + 171 * OS1_S1 + 19) -
                p_over_q * *(b + 230 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 19);
            *(b + 171 * OS1_S1 + 34) =
                prefactor_z * *(b + 171 * OS1_S1 + 19) -
                p_over_q * *(b + 231 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 171 * OS1_S1 + 9);
            *(b + 172 * OS1_S1 + 20) =
                prefactor_x * *(b + 172 * OS1_S1 + 10) -
                p_over_q * *(b + 227 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 4);
            *(b + 172 * OS1_S1 + 21) =
                prefactor_y * *(b + 172 * OS1_S1 + 10) -
                p_over_q * *(b + 231 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 10);
            *(b + 172 * OS1_S1 + 22) =
                prefactor_z * *(b + 172 * OS1_S1 + 10) -
                p_over_q * *(b + 232 * OS1_S1 + 10) +
                one_over_two_q * *(b + 123 * OS1_S1 + 10);
            *(b + 172 * OS1_S1 + 23) =
                prefactor_y * *(b + 172 * OS1_S1 + 11) -
                p_over_q * *(b + 231 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 11) +
                one_over_two_q * *(b + 172 * OS1_S1 + 4);
            *(b + 172 * OS1_S1 + 24) =
                prefactor_z * *(b + 172 * OS1_S1 + 11) -
                p_over_q * *(b + 232 * OS1_S1 + 11) +
                one_over_two_q * *(b + 123 * OS1_S1 + 11);
            *(b + 172 * OS1_S1 + 25) =
                prefactor_z * *(b + 172 * OS1_S1 + 12) -
                p_over_q * *(b + 232 * OS1_S1 + 12) +
                one_over_two_q * *(b + 123 * OS1_S1 + 12) +
                one_over_two_q * *(b + 172 * OS1_S1 + 4);
            *(b + 172 * OS1_S1 + 26) =
                prefactor_x * *(b + 172 * OS1_S1 + 16) -
                p_over_q * *(b + 227 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 16);
            *(b + 172 * OS1_S1 + 27) =
                prefactor_z * *(b + 172 * OS1_S1 + 13) -
                p_over_q * *(b + 232 * OS1_S1 + 13) +
                one_over_two_q * *(b + 123 * OS1_S1 + 13);
            *(b + 172 * OS1_S1 + 28) =
                prefactor_y * *(b + 172 * OS1_S1 + 15) -
                p_over_q * *(b + 231 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 15);
            *(b + 172 * OS1_S1 + 29) =
                prefactor_x * *(b + 172 * OS1_S1 + 19) -
                p_over_q * *(b + 227 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 19);
            *(b + 172 * OS1_S1 + 30) =
                prefactor_y * *(b + 172 * OS1_S1 + 16) -
                p_over_q * *(b + 231 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 7);
            *(b + 172 * OS1_S1 + 31) =
                prefactor_z * *(b + 172 * OS1_S1 + 16) -
                p_over_q * *(b + 232 * OS1_S1 + 16) +
                one_over_two_q * *(b + 123 * OS1_S1 + 16);
            *(b + 172 * OS1_S1 + 32) =
                prefactor_z * *(b + 172 * OS1_S1 + 17) -
                p_over_q * *(b + 232 * OS1_S1 + 17) +
                one_over_two_q * *(b + 123 * OS1_S1 + 17) +
                one_over_two_q * *(b + 172 * OS1_S1 + 7);
            *(b + 172 * OS1_S1 + 33) =
                prefactor_y * *(b + 172 * OS1_S1 + 19) -
                p_over_q * *(b + 231 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 19);
            *(b + 172 * OS1_S1 + 34) =
                prefactor_z * *(b + 172 * OS1_S1 + 19) -
                p_over_q * *(b + 232 * OS1_S1 + 19) +
                one_over_two_q * *(b + 123 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 9);
            *(b + 173 * OS1_S1 + 20) =
                prefactor_x * *(b + 173 * OS1_S1 + 10) -
                p_over_q * *(b + 228 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 4);
            *(b + 173 * OS1_S1 + 21) =
                prefactor_y * *(b + 173 * OS1_S1 + 10) -
                p_over_q * *(b + 232 * OS1_S1 + 10) +
                one_over_two_q * *(b + 125 * OS1_S1 + 10);
            *(b + 173 * OS1_S1 + 22) =
                prefactor_z * *(b + 173 * OS1_S1 + 10) -
                p_over_q * *(b + 233 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 10);
            *(b + 173 * OS1_S1 + 23) =
                prefactor_y * *(b + 173 * OS1_S1 + 11) -
                p_over_q * *(b + 232 * OS1_S1 + 11) +
                one_over_two_q * *(b + 125 * OS1_S1 + 11) +
                one_over_two_q * *(b + 173 * OS1_S1 + 4);
            *(b + 173 * OS1_S1 + 24) =
                prefactor_y * *(b + 173 * OS1_S1 + 12) -
                p_over_q * *(b + 232 * OS1_S1 + 12) +
                one_over_two_q * *(b + 125 * OS1_S1 + 12);
            *(b + 173 * OS1_S1 + 25) =
                prefactor_z * *(b + 173 * OS1_S1 + 12) -
                p_over_q * *(b + 233 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 12) +
                one_over_two_q * *(b + 173 * OS1_S1 + 4);
            *(b + 173 * OS1_S1 + 26) =
                prefactor_x * *(b + 173 * OS1_S1 + 16) -
                p_over_q * *(b + 228 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 16);
            *(b + 173 * OS1_S1 + 27) =
                prefactor_z * *(b + 173 * OS1_S1 + 13) -
                p_over_q * *(b + 233 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 13);
            *(b + 173 * OS1_S1 + 28) =
                prefactor_y * *(b + 173 * OS1_S1 + 15) -
                p_over_q * *(b + 232 * OS1_S1 + 15) +
                one_over_two_q * *(b + 125 * OS1_S1 + 15);
            *(b + 173 * OS1_S1 + 29) =
                prefactor_x * *(b + 173 * OS1_S1 + 19) -
                p_over_q * *(b + 228 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 19);
            *(b + 173 * OS1_S1 + 30) =
                prefactor_y * *(b + 173 * OS1_S1 + 16) -
                p_over_q * *(b + 232 * OS1_S1 + 16) +
                one_over_two_q * *(b + 125 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 7);
            *(b + 173 * OS1_S1 + 31) =
                prefactor_z * *(b + 173 * OS1_S1 + 16) -
                p_over_q * *(b + 233 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 16);
            *(b + 173 * OS1_S1 + 32) =
                prefactor_y * *(b + 173 * OS1_S1 + 18) -
                p_over_q * *(b + 232 * OS1_S1 + 18) +
                one_over_two_q * *(b + 125 * OS1_S1 + 18) +
                one_over_two_q * *(b + 173 * OS1_S1 + 9);
            *(b + 173 * OS1_S1 + 33) =
                prefactor_y * *(b + 173 * OS1_S1 + 19) -
                p_over_q * *(b + 232 * OS1_S1 + 19) +
                one_over_two_q * *(b + 125 * OS1_S1 + 19);
            *(b + 173 * OS1_S1 + 34) =
                prefactor_z * *(b + 173 * OS1_S1 + 19) -
                p_over_q * *(b + 233 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 9);
            *(b + 174 * OS1_S1 + 20) =
                prefactor_x * *(b + 174 * OS1_S1 + 10) -
                p_over_q * *(b + 229 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 174 * OS1_S1 + 4);
            *(b + 174 * OS1_S1 + 21) = prefactor_y * *(b + 174 * OS1_S1 + 10) -
                                       p_over_q * *(b + 233 * OS1_S1 + 10);
            *(b + 174 * OS1_S1 + 22) =
                prefactor_z * *(b + 174 * OS1_S1 + 10) -
                p_over_q * *(b + 234 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 10);
            *(b + 174 * OS1_S1 + 23) = prefactor_y * *(b + 174 * OS1_S1 + 11) -
                                       p_over_q * *(b + 233 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 174 * OS1_S1 + 4);
            *(b + 174 * OS1_S1 + 24) = prefactor_y * *(b + 174 * OS1_S1 + 12) -
                                       p_over_q * *(b + 233 * OS1_S1 + 12);
            *(b + 174 * OS1_S1 + 25) =
                prefactor_z * *(b + 174 * OS1_S1 + 12) -
                p_over_q * *(b + 234 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 12) +
                one_over_two_q * *(b + 174 * OS1_S1 + 4);
            *(b + 174 * OS1_S1 + 26) =
                prefactor_x * *(b + 174 * OS1_S1 + 16) -
                p_over_q * *(b + 229 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 16);
            *(b + 174 * OS1_S1 + 27) =
                prefactor_z * *(b + 174 * OS1_S1 + 13) -
                p_over_q * *(b + 234 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 13);
            *(b + 174 * OS1_S1 + 28) = prefactor_y * *(b + 174 * OS1_S1 + 15) -
                                       p_over_q * *(b + 233 * OS1_S1 + 15);
            *(b + 174 * OS1_S1 + 29) =
                prefactor_x * *(b + 174 * OS1_S1 + 19) -
                p_over_q * *(b + 229 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 19);
            *(b + 174 * OS1_S1 + 30) =
                prefactor_y * *(b + 174 * OS1_S1 + 16) -
                p_over_q * *(b + 233 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 174 * OS1_S1 + 7);
            *(b + 174 * OS1_S1 + 31) =
                prefactor_z * *(b + 174 * OS1_S1 + 16) -
                p_over_q * *(b + 234 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 16);
            *(b + 174 * OS1_S1 + 32) = prefactor_y * *(b + 174 * OS1_S1 + 18) -
                                       p_over_q * *(b + 233 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 174 * OS1_S1 + 9);
            *(b + 174 * OS1_S1 + 33) = prefactor_y * *(b + 174 * OS1_S1 + 19) -
                                       p_over_q * *(b + 233 * OS1_S1 + 19);
            *(b + 174 * OS1_S1 + 34) =
                prefactor_z * *(b + 174 * OS1_S1 + 19) -
                p_over_q * *(b + 234 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 174 * OS1_S1 + 9);
            *(b + 175 * OS1_S1 + 20) =
                prefactor_x * *(b + 175 * OS1_S1 + 10) -
                p_over_q * *(b + 230 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 175 * OS1_S1 + 4);
            *(b + 175 * OS1_S1 + 21) =
                prefactor_y * *(b + 175 * OS1_S1 + 10) -
                p_over_q * *(b + 235 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 10);
            *(b + 175 * OS1_S1 + 22) = prefactor_z * *(b + 175 * OS1_S1 + 10) -
                                       p_over_q * *(b + 236 * OS1_S1 + 10);
            *(b + 175 * OS1_S1 + 23) =
                prefactor_y * *(b + 175 * OS1_S1 + 11) -
                p_over_q * *(b + 235 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 11) +
                one_over_two_q * *(b + 175 * OS1_S1 + 4);
            *(b + 175 * OS1_S1 + 24) = prefactor_z * *(b + 175 * OS1_S1 + 11) -
                                       p_over_q * *(b + 236 * OS1_S1 + 11);
            *(b + 175 * OS1_S1 + 25) = prefactor_z * *(b + 175 * OS1_S1 + 12) -
                                       p_over_q * *(b + 236 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 175 * OS1_S1 + 4);
            *(b + 175 * OS1_S1 + 26) =
                prefactor_x * *(b + 175 * OS1_S1 + 16) -
                p_over_q * *(b + 230 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 16);
            *(b + 175 * OS1_S1 + 27) = prefactor_z * *(b + 175 * OS1_S1 + 13) -
                                       p_over_q * *(b + 236 * OS1_S1 + 13);
            *(b + 175 * OS1_S1 + 28) =
                prefactor_y * *(b + 175 * OS1_S1 + 15) -
                p_over_q * *(b + 235 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 15);
            *(b + 175 * OS1_S1 + 29) =
                prefactor_x * *(b + 175 * OS1_S1 + 19) -
                p_over_q * *(b + 230 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 19);
            *(b + 175 * OS1_S1 + 30) =
                prefactor_y * *(b + 175 * OS1_S1 + 16) -
                p_over_q * *(b + 235 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 175 * OS1_S1 + 7);
            *(b + 175 * OS1_S1 + 31) = prefactor_z * *(b + 175 * OS1_S1 + 16) -
                                       p_over_q * *(b + 236 * OS1_S1 + 16);
            *(b + 175 * OS1_S1 + 32) = prefactor_z * *(b + 175 * OS1_S1 + 17) -
                                       p_over_q * *(b + 236 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 175 * OS1_S1 + 7);
            *(b + 175 * OS1_S1 + 33) =
                prefactor_y * *(b + 175 * OS1_S1 + 19) -
                p_over_q * *(b + 235 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 19);
            *(b + 175 * OS1_S1 + 34) =
                prefactor_z * *(b + 175 * OS1_S1 + 19) -
                p_over_q * *(b + 236 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 175 * OS1_S1 + 9);
            *(b + 176 * OS1_S1 + 20) =
                prefactor_x * *(b + 176 * OS1_S1 + 10) -
                p_over_q * *(b + 231 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 176 * OS1_S1 + 4);
            *(b + 176 * OS1_S1 + 21) =
                prefactor_y * *(b + 176 * OS1_S1 + 10) -
                p_over_q * *(b + 236 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 10);
            *(b + 176 * OS1_S1 + 22) =
                prefactor_z * *(b + 176 * OS1_S1 + 10) -
                p_over_q * *(b + 237 * OS1_S1 + 10) +
                one_over_two_q * *(b + 126 * OS1_S1 + 10);
            *(b + 176 * OS1_S1 + 23) =
                prefactor_y * *(b + 176 * OS1_S1 + 11) -
                p_over_q * *(b + 236 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 11) +
                one_over_two_q * *(b + 176 * OS1_S1 + 4);
            *(b + 176 * OS1_S1 + 24) =
                prefactor_z * *(b + 176 * OS1_S1 + 11) -
                p_over_q * *(b + 237 * OS1_S1 + 11) +
                one_over_two_q * *(b + 126 * OS1_S1 + 11);
            *(b + 176 * OS1_S1 + 25) =
                prefactor_z * *(b + 176 * OS1_S1 + 12) -
                p_over_q * *(b + 237 * OS1_S1 + 12) +
                one_over_two_q * *(b + 126 * OS1_S1 + 12) +
                one_over_two_q * *(b + 176 * OS1_S1 + 4);
            *(b + 176 * OS1_S1 + 26) =
                prefactor_x * *(b + 176 * OS1_S1 + 16) -
                p_over_q * *(b + 231 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 16);
            *(b + 176 * OS1_S1 + 27) =
                prefactor_z * *(b + 176 * OS1_S1 + 13) -
                p_over_q * *(b + 237 * OS1_S1 + 13) +
                one_over_two_q * *(b + 126 * OS1_S1 + 13);
            *(b + 176 * OS1_S1 + 28) =
                prefactor_y * *(b + 176 * OS1_S1 + 15) -
                p_over_q * *(b + 236 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 15);
            *(b + 176 * OS1_S1 + 29) =
                prefactor_x * *(b + 176 * OS1_S1 + 19) -
                p_over_q * *(b + 231 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 19);
            *(b + 176 * OS1_S1 + 30) =
                prefactor_y * *(b + 176 * OS1_S1 + 16) -
                p_over_q * *(b + 236 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 176 * OS1_S1 + 7);
            *(b + 176 * OS1_S1 + 31) =
                prefactor_z * *(b + 176 * OS1_S1 + 16) -
                p_over_q * *(b + 237 * OS1_S1 + 16) +
                one_over_two_q * *(b + 126 * OS1_S1 + 16);
            *(b + 176 * OS1_S1 + 32) =
                prefactor_z * *(b + 176 * OS1_S1 + 17) -
                p_over_q * *(b + 237 * OS1_S1 + 17) +
                one_over_two_q * *(b + 126 * OS1_S1 + 17) +
                one_over_two_q * *(b + 176 * OS1_S1 + 7);
            *(b + 176 * OS1_S1 + 33) =
                prefactor_y * *(b + 176 * OS1_S1 + 19) -
                p_over_q * *(b + 236 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 19);
            *(b + 176 * OS1_S1 + 34) =
                prefactor_z * *(b + 176 * OS1_S1 + 19) -
                p_over_q * *(b + 237 * OS1_S1 + 19) +
                one_over_two_q * *(b + 126 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 176 * OS1_S1 + 9);
            *(b + 177 * OS1_S1 + 20) =
                prefactor_x * *(b + 177 * OS1_S1 + 10) -
                p_over_q * *(b + 232 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 4);
            *(b + 177 * OS1_S1 + 21) =
                prefactor_y * *(b + 177 * OS1_S1 + 10) -
                p_over_q * *(b + 237 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 10);
            *(b + 177 * OS1_S1 + 22) =
                prefactor_z * *(b + 177 * OS1_S1 + 10) -
                p_over_q * *(b + 238 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 10);
            *(b + 177 * OS1_S1 + 23) =
                prefactor_y * *(b + 177 * OS1_S1 + 11) -
                p_over_q * *(b + 237 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 11) +
                one_over_two_q * *(b + 177 * OS1_S1 + 4);
            *(b + 177 * OS1_S1 + 24) =
                prefactor_z * *(b + 177 * OS1_S1 + 11) -
                p_over_q * *(b + 238 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 11);
            *(b + 177 * OS1_S1 + 25) =
                prefactor_z * *(b + 177 * OS1_S1 + 12) -
                p_over_q * *(b + 238 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 12) +
                one_over_two_q * *(b + 177 * OS1_S1 + 4);
            *(b + 177 * OS1_S1 + 26) =
                prefactor_x * *(b + 177 * OS1_S1 + 16) -
                p_over_q * *(b + 232 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 16);
            *(b + 177 * OS1_S1 + 27) =
                prefactor_z * *(b + 177 * OS1_S1 + 13) -
                p_over_q * *(b + 238 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 13);
            *(b + 177 * OS1_S1 + 28) =
                prefactor_y * *(b + 177 * OS1_S1 + 15) -
                p_over_q * *(b + 237 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 15);
            *(b + 177 * OS1_S1 + 29) =
                prefactor_x * *(b + 177 * OS1_S1 + 19) -
                p_over_q * *(b + 232 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 19);
            *(b + 177 * OS1_S1 + 30) =
                prefactor_y * *(b + 177 * OS1_S1 + 16) -
                p_over_q * *(b + 237 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 7);
            *(b + 177 * OS1_S1 + 31) =
                prefactor_z * *(b + 177 * OS1_S1 + 16) -
                p_over_q * *(b + 238 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 16);
            *(b + 177 * OS1_S1 + 32) =
                prefactor_z * *(b + 177 * OS1_S1 + 17) -
                p_over_q * *(b + 238 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 17) +
                one_over_two_q * *(b + 177 * OS1_S1 + 7);
            *(b + 177 * OS1_S1 + 33) =
                prefactor_y * *(b + 177 * OS1_S1 + 19) -
                p_over_q * *(b + 237 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 19);
            *(b + 177 * OS1_S1 + 34) =
                prefactor_z * *(b + 177 * OS1_S1 + 19) -
                p_over_q * *(b + 238 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 9);
            *(b + 178 * OS1_S1 + 20) =
                prefactor_x * *(b + 178 * OS1_S1 + 10) -
                p_over_q * *(b + 233 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 178 * OS1_S1 + 4);
            *(b + 178 * OS1_S1 + 21) =
                prefactor_y * *(b + 178 * OS1_S1 + 10) -
                p_over_q * *(b + 238 * OS1_S1 + 10) +
                one_over_two_q * *(b + 129 * OS1_S1 + 10);
            *(b + 178 * OS1_S1 + 22) =
                prefactor_z * *(b + 178 * OS1_S1 + 10) -
                p_over_q * *(b + 239 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 10);
            *(b + 178 * OS1_S1 + 23) =
                prefactor_y * *(b + 178 * OS1_S1 + 11) -
                p_over_q * *(b + 238 * OS1_S1 + 11) +
                one_over_two_q * *(b + 129 * OS1_S1 + 11) +
                one_over_two_q * *(b + 178 * OS1_S1 + 4);
            *(b + 178 * OS1_S1 + 24) =
                prefactor_y * *(b + 178 * OS1_S1 + 12) -
                p_over_q * *(b + 238 * OS1_S1 + 12) +
                one_over_two_q * *(b + 129 * OS1_S1 + 12);
            *(b + 178 * OS1_S1 + 25) =
                prefactor_z * *(b + 178 * OS1_S1 + 12) -
                p_over_q * *(b + 239 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 12) +
                one_over_two_q * *(b + 178 * OS1_S1 + 4);
            *(b + 178 * OS1_S1 + 26) =
                prefactor_x * *(b + 178 * OS1_S1 + 16) -
                p_over_q * *(b + 233 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 16);
            *(b + 178 * OS1_S1 + 27) =
                prefactor_z * *(b + 178 * OS1_S1 + 13) -
                p_over_q * *(b + 239 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 13);
            *(b + 178 * OS1_S1 + 28) =
                prefactor_y * *(b + 178 * OS1_S1 + 15) -
                p_over_q * *(b + 238 * OS1_S1 + 15) +
                one_over_two_q * *(b + 129 * OS1_S1 + 15);
            *(b + 178 * OS1_S1 + 29) =
                prefactor_x * *(b + 178 * OS1_S1 + 19) -
                p_over_q * *(b + 233 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 19);
            *(b + 178 * OS1_S1 + 30) =
                prefactor_y * *(b + 178 * OS1_S1 + 16) -
                p_over_q * *(b + 238 * OS1_S1 + 16) +
                one_over_two_q * *(b + 129 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 178 * OS1_S1 + 7);
            *(b + 178 * OS1_S1 + 31) =
                prefactor_z * *(b + 178 * OS1_S1 + 16) -
                p_over_q * *(b + 239 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 16);
            *(b + 178 * OS1_S1 + 32) =
                prefactor_y * *(b + 178 * OS1_S1 + 18) -
                p_over_q * *(b + 238 * OS1_S1 + 18) +
                one_over_two_q * *(b + 129 * OS1_S1 + 18) +
                one_over_two_q * *(b + 178 * OS1_S1 + 9);
            *(b + 178 * OS1_S1 + 33) =
                prefactor_y * *(b + 178 * OS1_S1 + 19) -
                p_over_q * *(b + 238 * OS1_S1 + 19) +
                one_over_two_q * *(b + 129 * OS1_S1 + 19);
            *(b + 178 * OS1_S1 + 34) =
                prefactor_z * *(b + 178 * OS1_S1 + 19) -
                p_over_q * *(b + 239 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 178 * OS1_S1 + 9);
            *(b + 179 * OS1_S1 + 20) =
                prefactor_x * *(b + 179 * OS1_S1 + 10) -
                p_over_q * *(b + 234 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 179 * OS1_S1 + 4);
            *(b + 179 * OS1_S1 + 21) = prefactor_y * *(b + 179 * OS1_S1 + 10) -
                                       p_over_q * *(b + 239 * OS1_S1 + 10);
            *(b + 179 * OS1_S1 + 22) =
                prefactor_z * *(b + 179 * OS1_S1 + 10) -
                p_over_q * *(b + 240 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 10);
            *(b + 179 * OS1_S1 + 23) = prefactor_y * *(b + 179 * OS1_S1 + 11) -
                                       p_over_q * *(b + 239 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 179 * OS1_S1 + 4);
            *(b + 179 * OS1_S1 + 24) = prefactor_y * *(b + 179 * OS1_S1 + 12) -
                                       p_over_q * *(b + 239 * OS1_S1 + 12);
            *(b + 179 * OS1_S1 + 25) =
                prefactor_z * *(b + 179 * OS1_S1 + 12) -
                p_over_q * *(b + 240 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 12) +
                one_over_two_q * *(b + 179 * OS1_S1 + 4);
            *(b + 179 * OS1_S1 + 26) =
                prefactor_x * *(b + 179 * OS1_S1 + 16) -
                p_over_q * *(b + 234 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 16);
            *(b + 179 * OS1_S1 + 27) =
                prefactor_z * *(b + 179 * OS1_S1 + 13) -
                p_over_q * *(b + 240 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 13);
            *(b + 179 * OS1_S1 + 28) = prefactor_y * *(b + 179 * OS1_S1 + 15) -
                                       p_over_q * *(b + 239 * OS1_S1 + 15);
            *(b + 179 * OS1_S1 + 29) =
                prefactor_x * *(b + 179 * OS1_S1 + 19) -
                p_over_q * *(b + 234 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 19);
            *(b + 179 * OS1_S1 + 30) =
                prefactor_y * *(b + 179 * OS1_S1 + 16) -
                p_over_q * *(b + 239 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 179 * OS1_S1 + 7);
            *(b + 179 * OS1_S1 + 31) =
                prefactor_z * *(b + 179 * OS1_S1 + 16) -
                p_over_q * *(b + 240 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 16);
            *(b + 179 * OS1_S1 + 32) = prefactor_y * *(b + 179 * OS1_S1 + 18) -
                                       p_over_q * *(b + 239 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 179 * OS1_S1 + 9);
            *(b + 179 * OS1_S1 + 33) = prefactor_y * *(b + 179 * OS1_S1 + 19) -
                                       p_over_q * *(b + 239 * OS1_S1 + 19);
            *(b + 179 * OS1_S1 + 34) =
                prefactor_z * *(b + 179 * OS1_S1 + 19) -
                p_over_q * *(b + 240 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 179 * OS1_S1 + 9);
            *(b + 180 * OS1_S1 + 20) =
                prefactor_x * *(b + 180 * OS1_S1 + 10) -
                p_over_q * *(b + 235 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 180 * OS1_S1 + 4);
            *(b + 180 * OS1_S1 + 21) =
                prefactor_y * *(b + 180 * OS1_S1 + 10) -
                p_over_q * *(b + 241 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 10);
            *(b + 180 * OS1_S1 + 22) = prefactor_z * *(b + 180 * OS1_S1 + 10) -
                                       p_over_q * *(b + 242 * OS1_S1 + 10);
            *(b + 180 * OS1_S1 + 23) =
                prefactor_x * *(b + 180 * OS1_S1 + 13) -
                p_over_q * *(b + 235 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 13) +
                one_over_two_q * *(b + 180 * OS1_S1 + 7);
            *(b + 180 * OS1_S1 + 24) = prefactor_z * *(b + 180 * OS1_S1 + 11) -
                                       p_over_q * *(b + 242 * OS1_S1 + 11);
            *(b + 180 * OS1_S1 + 25) = prefactor_z * *(b + 180 * OS1_S1 + 12) -
                                       p_over_q * *(b + 242 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 180 * OS1_S1 + 4);
            *(b + 180 * OS1_S1 + 26) =
                prefactor_x * *(b + 180 * OS1_S1 + 16) -
                p_over_q * *(b + 235 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 16);
            *(b + 180 * OS1_S1 + 27) = prefactor_z * *(b + 180 * OS1_S1 + 13) -
                                       p_over_q * *(b + 242 * OS1_S1 + 13);
            *(b + 180 * OS1_S1 + 28) =
                prefactor_x * *(b + 180 * OS1_S1 + 18) -
                p_over_q * *(b + 235 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 18);
            *(b + 180 * OS1_S1 + 29) =
                prefactor_x * *(b + 180 * OS1_S1 + 19) -
                p_over_q * *(b + 235 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 19);
            *(b + 180 * OS1_S1 + 30) =
                prefactor_y * *(b + 180 * OS1_S1 + 16) -
                p_over_q * *(b + 241 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 180 * OS1_S1 + 7);
            *(b + 180 * OS1_S1 + 31) = prefactor_z * *(b + 180 * OS1_S1 + 16) -
                                       p_over_q * *(b + 242 * OS1_S1 + 16);
            *(b + 180 * OS1_S1 + 32) = prefactor_z * *(b + 180 * OS1_S1 + 17) -
                                       p_over_q * *(b + 242 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 180 * OS1_S1 + 7);
            *(b + 180 * OS1_S1 + 33) =
                prefactor_y * *(b + 180 * OS1_S1 + 19) -
                p_over_q * *(b + 241 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 19);
            *(b + 180 * OS1_S1 + 34) =
                prefactor_z * *(b + 180 * OS1_S1 + 19) -
                p_over_q * *(b + 242 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 180 * OS1_S1 + 9);
            *(b + 181 * OS1_S1 + 20) =
                prefactor_x * *(b + 181 * OS1_S1 + 10) -
                p_over_q * *(b + 236 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 181 * OS1_S1 + 4);
            *(b + 181 * OS1_S1 + 21) =
                prefactor_y * *(b + 181 * OS1_S1 + 10) -
                p_over_q * *(b + 242 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 10);
            *(b + 181 * OS1_S1 + 22) =
                prefactor_z * *(b + 181 * OS1_S1 + 10) -
                p_over_q * *(b + 243 * OS1_S1 + 10) +
                one_over_two_q * *(b + 130 * OS1_S1 + 10);
            *(b + 181 * OS1_S1 + 23) =
                prefactor_y * *(b + 181 * OS1_S1 + 11) -
                p_over_q * *(b + 242 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 11) +
                one_over_two_q * *(b + 181 * OS1_S1 + 4);
            *(b + 181 * OS1_S1 + 24) =
                prefactor_z * *(b + 181 * OS1_S1 + 11) -
                p_over_q * *(b + 243 * OS1_S1 + 11) +
                one_over_two_q * *(b + 130 * OS1_S1 + 11);
            *(b + 181 * OS1_S1 + 25) =
                prefactor_z * *(b + 181 * OS1_S1 + 12) -
                p_over_q * *(b + 243 * OS1_S1 + 12) +
                one_over_two_q * *(b + 130 * OS1_S1 + 12) +
                one_over_two_q * *(b + 181 * OS1_S1 + 4);
            *(b + 181 * OS1_S1 + 26) =
                prefactor_x * *(b + 181 * OS1_S1 + 16) -
                p_over_q * *(b + 236 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 16);
            *(b + 181 * OS1_S1 + 27) =
                prefactor_z * *(b + 181 * OS1_S1 + 13) -
                p_over_q * *(b + 243 * OS1_S1 + 13) +
                one_over_two_q * *(b + 130 * OS1_S1 + 13);
            *(b + 181 * OS1_S1 + 28) =
                prefactor_y * *(b + 181 * OS1_S1 + 15) -
                p_over_q * *(b + 242 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 15);
            *(b + 181 * OS1_S1 + 29) =
                prefactor_x * *(b + 181 * OS1_S1 + 19) -
                p_over_q * *(b + 236 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 19);
            *(b + 181 * OS1_S1 + 30) =
                prefactor_y * *(b + 181 * OS1_S1 + 16) -
                p_over_q * *(b + 242 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 181 * OS1_S1 + 7);
            *(b + 181 * OS1_S1 + 31) =
                prefactor_z * *(b + 181 * OS1_S1 + 16) -
                p_over_q * *(b + 243 * OS1_S1 + 16) +
                one_over_two_q * *(b + 130 * OS1_S1 + 16);
            *(b + 181 * OS1_S1 + 32) =
                prefactor_z * *(b + 181 * OS1_S1 + 17) -
                p_over_q * *(b + 243 * OS1_S1 + 17) +
                one_over_two_q * *(b + 130 * OS1_S1 + 17) +
                one_over_two_q * *(b + 181 * OS1_S1 + 7);
            *(b + 181 * OS1_S1 + 33) =
                prefactor_y * *(b + 181 * OS1_S1 + 19) -
                p_over_q * *(b + 242 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 19);
            *(b + 181 * OS1_S1 + 34) =
                prefactor_z * *(b + 181 * OS1_S1 + 19) -
                p_over_q * *(b + 243 * OS1_S1 + 19) +
                one_over_two_q * *(b + 130 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 181 * OS1_S1 + 9);
            *(b + 182 * OS1_S1 + 20) =
                prefactor_x * *(b + 182 * OS1_S1 + 10) -
                p_over_q * *(b + 237 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 4);
            *(b + 182 * OS1_S1 + 21) =
                prefactor_y * *(b + 182 * OS1_S1 + 10) -
                p_over_q * *(b + 243 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 10);
            *(b + 182 * OS1_S1 + 22) =
                prefactor_z * *(b + 182 * OS1_S1 + 10) -
                p_over_q * *(b + 244 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 10);
            *(b + 182 * OS1_S1 + 23) =
                prefactor_y * *(b + 182 * OS1_S1 + 11) -
                p_over_q * *(b + 243 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 11) +
                one_over_two_q * *(b + 182 * OS1_S1 + 4);
            *(b + 182 * OS1_S1 + 24) =
                prefactor_z * *(b + 182 * OS1_S1 + 11) -
                p_over_q * *(b + 244 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 11);
            *(b + 182 * OS1_S1 + 25) =
                prefactor_z * *(b + 182 * OS1_S1 + 12) -
                p_over_q * *(b + 244 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 12) +
                one_over_two_q * *(b + 182 * OS1_S1 + 4);
            *(b + 182 * OS1_S1 + 26) =
                prefactor_x * *(b + 182 * OS1_S1 + 16) -
                p_over_q * *(b + 237 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 16);
            *(b + 182 * OS1_S1 + 27) =
                prefactor_z * *(b + 182 * OS1_S1 + 13) -
                p_over_q * *(b + 244 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 13);
            *(b + 182 * OS1_S1 + 28) =
                prefactor_y * *(b + 182 * OS1_S1 + 15) -
                p_over_q * *(b + 243 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 15);
            *(b + 182 * OS1_S1 + 29) =
                prefactor_x * *(b + 182 * OS1_S1 + 19) -
                p_over_q * *(b + 237 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 19);
            *(b + 182 * OS1_S1 + 30) =
                prefactor_y * *(b + 182 * OS1_S1 + 16) -
                p_over_q * *(b + 243 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 7);
            *(b + 182 * OS1_S1 + 31) =
                prefactor_z * *(b + 182 * OS1_S1 + 16) -
                p_over_q * *(b + 244 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 16);
            *(b + 182 * OS1_S1 + 32) =
                prefactor_z * *(b + 182 * OS1_S1 + 17) -
                p_over_q * *(b + 244 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 17) +
                one_over_two_q * *(b + 182 * OS1_S1 + 7);
            *(b + 182 * OS1_S1 + 33) =
                prefactor_y * *(b + 182 * OS1_S1 + 19) -
                p_over_q * *(b + 243 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 19);
            *(b + 182 * OS1_S1 + 34) =
                prefactor_z * *(b + 182 * OS1_S1 + 19) -
                p_over_q * *(b + 244 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 9);
            *(b + 183 * OS1_S1 + 20) =
                prefactor_x * *(b + 183 * OS1_S1 + 10) -
                p_over_q * *(b + 238 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 4);
            *(b + 183 * OS1_S1 + 21) =
                prefactor_y * *(b + 183 * OS1_S1 + 10) -
                p_over_q * *(b + 244 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 10);
            *(b + 183 * OS1_S1 + 22) =
                prefactor_z * *(b + 183 * OS1_S1 + 10) -
                p_over_q * *(b + 245 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 10);
            *(b + 183 * OS1_S1 + 23) =
                prefactor_y * *(b + 183 * OS1_S1 + 11) -
                p_over_q * *(b + 244 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 11) +
                one_over_two_q * *(b + 183 * OS1_S1 + 4);
            *(b + 183 * OS1_S1 + 24) =
                prefactor_y * *(b + 183 * OS1_S1 + 12) -
                p_over_q * *(b + 244 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 12);
            *(b + 183 * OS1_S1 + 25) =
                prefactor_z * *(b + 183 * OS1_S1 + 12) -
                p_over_q * *(b + 245 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 12) +
                one_over_two_q * *(b + 183 * OS1_S1 + 4);
            *(b + 183 * OS1_S1 + 26) =
                prefactor_x * *(b + 183 * OS1_S1 + 16) -
                p_over_q * *(b + 238 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 16);
            *(b + 183 * OS1_S1 + 27) =
                prefactor_z * *(b + 183 * OS1_S1 + 13) -
                p_over_q * *(b + 245 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 13);
            *(b + 183 * OS1_S1 + 28) =
                prefactor_y * *(b + 183 * OS1_S1 + 15) -
                p_over_q * *(b + 244 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 15);
            *(b + 183 * OS1_S1 + 29) =
                prefactor_x * *(b + 183 * OS1_S1 + 19) -
                p_over_q * *(b + 238 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 19);
            *(b + 183 * OS1_S1 + 30) =
                prefactor_y * *(b + 183 * OS1_S1 + 16) -
                p_over_q * *(b + 244 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 7);
            *(b + 183 * OS1_S1 + 31) =
                prefactor_z * *(b + 183 * OS1_S1 + 16) -
                p_over_q * *(b + 245 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 16);
            *(b + 183 * OS1_S1 + 32) =
                prefactor_y * *(b + 183 * OS1_S1 + 18) -
                p_over_q * *(b + 244 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 18) +
                one_over_two_q * *(b + 183 * OS1_S1 + 9);
            *(b + 183 * OS1_S1 + 33) =
                prefactor_y * *(b + 183 * OS1_S1 + 19) -
                p_over_q * *(b + 244 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 19);
            *(b + 183 * OS1_S1 + 34) =
                prefactor_z * *(b + 183 * OS1_S1 + 19) -
                p_over_q * *(b + 245 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 9);
            *(b + 184 * OS1_S1 + 20) =
                prefactor_x * *(b + 184 * OS1_S1 + 10) -
                p_over_q * *(b + 239 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 184 * OS1_S1 + 4);
            *(b + 184 * OS1_S1 + 21) =
                prefactor_y * *(b + 184 * OS1_S1 + 10) -
                p_over_q * *(b + 245 * OS1_S1 + 10) +
                one_over_two_q * *(b + 134 * OS1_S1 + 10);
            *(b + 184 * OS1_S1 + 22) =
                prefactor_z * *(b + 184 * OS1_S1 + 10) -
                p_over_q * *(b + 246 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 10);
            *(b + 184 * OS1_S1 + 23) =
                prefactor_y * *(b + 184 * OS1_S1 + 11) -
                p_over_q * *(b + 245 * OS1_S1 + 11) +
                one_over_two_q * *(b + 134 * OS1_S1 + 11) +
                one_over_two_q * *(b + 184 * OS1_S1 + 4);
            *(b + 184 * OS1_S1 + 24) =
                prefactor_y * *(b + 184 * OS1_S1 + 12) -
                p_over_q * *(b + 245 * OS1_S1 + 12) +
                one_over_two_q * *(b + 134 * OS1_S1 + 12);
            *(b + 184 * OS1_S1 + 25) =
                prefactor_z * *(b + 184 * OS1_S1 + 12) -
                p_over_q * *(b + 246 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 12) +
                one_over_two_q * *(b + 184 * OS1_S1 + 4);
            *(b + 184 * OS1_S1 + 26) =
                prefactor_x * *(b + 184 * OS1_S1 + 16) -
                p_over_q * *(b + 239 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 16);
            *(b + 184 * OS1_S1 + 27) =
                prefactor_z * *(b + 184 * OS1_S1 + 13) -
                p_over_q * *(b + 246 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 13);
            *(b + 184 * OS1_S1 + 28) =
                prefactor_y * *(b + 184 * OS1_S1 + 15) -
                p_over_q * *(b + 245 * OS1_S1 + 15) +
                one_over_two_q * *(b + 134 * OS1_S1 + 15);
            *(b + 184 * OS1_S1 + 29) =
                prefactor_x * *(b + 184 * OS1_S1 + 19) -
                p_over_q * *(b + 239 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 19);
            *(b + 184 * OS1_S1 + 30) =
                prefactor_y * *(b + 184 * OS1_S1 + 16) -
                p_over_q * *(b + 245 * OS1_S1 + 16) +
                one_over_two_q * *(b + 134 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 184 * OS1_S1 + 7);
            *(b + 184 * OS1_S1 + 31) =
                prefactor_z * *(b + 184 * OS1_S1 + 16) -
                p_over_q * *(b + 246 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 16);
            *(b + 184 * OS1_S1 + 32) =
                prefactor_y * *(b + 184 * OS1_S1 + 18) -
                p_over_q * *(b + 245 * OS1_S1 + 18) +
                one_over_two_q * *(b + 134 * OS1_S1 + 18) +
                one_over_two_q * *(b + 184 * OS1_S1 + 9);
            *(b + 184 * OS1_S1 + 33) =
                prefactor_y * *(b + 184 * OS1_S1 + 19) -
                p_over_q * *(b + 245 * OS1_S1 + 19) +
                one_over_two_q * *(b + 134 * OS1_S1 + 19);
            *(b + 184 * OS1_S1 + 34) =
                prefactor_z * *(b + 184 * OS1_S1 + 19) -
                p_over_q * *(b + 246 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 184 * OS1_S1 + 9);
            *(b + 185 * OS1_S1 + 20) =
                prefactor_x * *(b + 185 * OS1_S1 + 10) -
                p_over_q * *(b + 240 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 185 * OS1_S1 + 4);
            *(b + 185 * OS1_S1 + 21) = prefactor_y * *(b + 185 * OS1_S1 + 10) -
                                       p_over_q * *(b + 246 * OS1_S1 + 10);
            *(b + 185 * OS1_S1 + 22) =
                prefactor_z * *(b + 185 * OS1_S1 + 10) -
                p_over_q * *(b + 247 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 10);
            *(b + 185 * OS1_S1 + 23) = prefactor_y * *(b + 185 * OS1_S1 + 11) -
                                       p_over_q * *(b + 246 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 185 * OS1_S1 + 4);
            *(b + 185 * OS1_S1 + 24) = prefactor_y * *(b + 185 * OS1_S1 + 12) -
                                       p_over_q * *(b + 246 * OS1_S1 + 12);
            *(b + 185 * OS1_S1 + 25) =
                prefactor_x * *(b + 185 * OS1_S1 + 15) -
                p_over_q * *(b + 240 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 15) +
                one_over_two_q * *(b + 185 * OS1_S1 + 9);
            *(b + 185 * OS1_S1 + 26) =
                prefactor_x * *(b + 185 * OS1_S1 + 16) -
                p_over_q * *(b + 240 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 16);
            *(b + 185 * OS1_S1 + 27) =
                prefactor_x * *(b + 185 * OS1_S1 + 17) -
                p_over_q * *(b + 240 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 17);
            *(b + 185 * OS1_S1 + 28) = prefactor_y * *(b + 185 * OS1_S1 + 15) -
                                       p_over_q * *(b + 246 * OS1_S1 + 15);
            *(b + 185 * OS1_S1 + 29) =
                prefactor_x * *(b + 185 * OS1_S1 + 19) -
                p_over_q * *(b + 240 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 19);
            *(b + 185 * OS1_S1 + 30) =
                prefactor_y * *(b + 185 * OS1_S1 + 16) -
                p_over_q * *(b + 246 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 185 * OS1_S1 + 7);
            *(b + 185 * OS1_S1 + 31) =
                prefactor_z * *(b + 185 * OS1_S1 + 16) -
                p_over_q * *(b + 247 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 16);
            *(b + 185 * OS1_S1 + 32) = prefactor_y * *(b + 185 * OS1_S1 + 18) -
                                       p_over_q * *(b + 246 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 185 * OS1_S1 + 9);
            *(b + 185 * OS1_S1 + 33) = prefactor_y * *(b + 185 * OS1_S1 + 19) -
                                       p_over_q * *(b + 246 * OS1_S1 + 19);
            *(b + 185 * OS1_S1 + 34) =
                prefactor_z * *(b + 185 * OS1_S1 + 19) -
                p_over_q * *(b + 247 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 185 * OS1_S1 + 9);
            *(b + 186 * OS1_S1 + 20) =
                prefactor_x * *(b + 186 * OS1_S1 + 10) -
                p_over_q * *(b + 241 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 186 * OS1_S1 + 4);
            *(b + 186 * OS1_S1 + 21) =
                prefactor_y * *(b + 186 * OS1_S1 + 10) -
                p_over_q * *(b + 248 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 10);
            *(b + 186 * OS1_S1 + 22) = prefactor_z * *(b + 186 * OS1_S1 + 10) -
                                       p_over_q * *(b + 249 * OS1_S1 + 10);
            *(b + 186 * OS1_S1 + 23) =
                prefactor_x * *(b + 186 * OS1_S1 + 13) -
                p_over_q * *(b + 241 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 13) +
                one_over_two_q * *(b + 186 * OS1_S1 + 7);
            *(b + 186 * OS1_S1 + 24) = prefactor_z * *(b + 186 * OS1_S1 + 11) -
                                       p_over_q * *(b + 249 * OS1_S1 + 11);
            *(b + 186 * OS1_S1 + 25) = prefactor_z * *(b + 186 * OS1_S1 + 12) -
                                       p_over_q * *(b + 249 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 186 * OS1_S1 + 4);
            *(b + 186 * OS1_S1 + 26) =
                prefactor_x * *(b + 186 * OS1_S1 + 16) -
                p_over_q * *(b + 241 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 16);
            *(b + 186 * OS1_S1 + 27) = prefactor_z * *(b + 186 * OS1_S1 + 13) -
                                       p_over_q * *(b + 249 * OS1_S1 + 13);
            *(b + 186 * OS1_S1 + 28) =
                prefactor_x * *(b + 186 * OS1_S1 + 18) -
                p_over_q * *(b + 241 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 18);
            *(b + 186 * OS1_S1 + 29) =
                prefactor_x * *(b + 186 * OS1_S1 + 19) -
                p_over_q * *(b + 241 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 19);
            *(b + 186 * OS1_S1 + 30) =
                prefactor_y * *(b + 186 * OS1_S1 + 16) -
                p_over_q * *(b + 248 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 186 * OS1_S1 + 7);
            *(b + 186 * OS1_S1 + 31) = prefactor_z * *(b + 186 * OS1_S1 + 16) -
                                       p_over_q * *(b + 249 * OS1_S1 + 16);
            *(b + 186 * OS1_S1 + 32) = prefactor_z * *(b + 186 * OS1_S1 + 17) -
                                       p_over_q * *(b + 249 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 186 * OS1_S1 + 7);
            *(b + 186 * OS1_S1 + 33) =
                prefactor_y * *(b + 186 * OS1_S1 + 19) -
                p_over_q * *(b + 248 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 19);
            *(b + 186 * OS1_S1 + 34) =
                prefactor_z * *(b + 186 * OS1_S1 + 19) -
                p_over_q * *(b + 249 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 186 * OS1_S1 + 9);
            *(b + 187 * OS1_S1 + 20) =
                prefactor_x * *(b + 187 * OS1_S1 + 10) -
                p_over_q * *(b + 242 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 187 * OS1_S1 + 4);
            *(b + 187 * OS1_S1 + 21) =
                prefactor_y * *(b + 187 * OS1_S1 + 10) -
                p_over_q * *(b + 249 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 10);
            *(b + 187 * OS1_S1 + 22) =
                prefactor_z * *(b + 187 * OS1_S1 + 10) -
                p_over_q * *(b + 250 * OS1_S1 + 10) +
                one_over_two_q * *(b + 135 * OS1_S1 + 10);
            *(b + 187 * OS1_S1 + 23) =
                prefactor_x * *(b + 187 * OS1_S1 + 13) -
                p_over_q * *(b + 242 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 13) +
                one_over_two_q * *(b + 187 * OS1_S1 + 7);
            *(b + 187 * OS1_S1 + 24) =
                prefactor_z * *(b + 187 * OS1_S1 + 11) -
                p_over_q * *(b + 250 * OS1_S1 + 11) +
                one_over_two_q * *(b + 135 * OS1_S1 + 11);
            *(b + 187 * OS1_S1 + 25) =
                prefactor_z * *(b + 187 * OS1_S1 + 12) -
                p_over_q * *(b + 250 * OS1_S1 + 12) +
                one_over_two_q * *(b + 135 * OS1_S1 + 12) +
                one_over_two_q * *(b + 187 * OS1_S1 + 4);
            *(b + 187 * OS1_S1 + 26) =
                prefactor_x * *(b + 187 * OS1_S1 + 16) -
                p_over_q * *(b + 242 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 16);
            *(b + 187 * OS1_S1 + 27) =
                prefactor_z * *(b + 187 * OS1_S1 + 13) -
                p_over_q * *(b + 250 * OS1_S1 + 13) +
                one_over_two_q * *(b + 135 * OS1_S1 + 13);
            *(b + 187 * OS1_S1 + 28) =
                prefactor_x * *(b + 187 * OS1_S1 + 18) -
                p_over_q * *(b + 242 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 18);
            *(b + 187 * OS1_S1 + 29) =
                prefactor_x * *(b + 187 * OS1_S1 + 19) -
                p_over_q * *(b + 242 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 19);
            *(b + 187 * OS1_S1 + 30) =
                prefactor_y * *(b + 187 * OS1_S1 + 16) -
                p_over_q * *(b + 249 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 187 * OS1_S1 + 7);
            *(b + 187 * OS1_S1 + 31) =
                prefactor_z * *(b + 187 * OS1_S1 + 16) -
                p_over_q * *(b + 250 * OS1_S1 + 16) +
                one_over_two_q * *(b + 135 * OS1_S1 + 16);
            *(b + 187 * OS1_S1 + 32) =
                prefactor_z * *(b + 187 * OS1_S1 + 17) -
                p_over_q * *(b + 250 * OS1_S1 + 17) +
                one_over_two_q * *(b + 135 * OS1_S1 + 17) +
                one_over_two_q * *(b + 187 * OS1_S1 + 7);
            *(b + 187 * OS1_S1 + 33) =
                prefactor_y * *(b + 187 * OS1_S1 + 19) -
                p_over_q * *(b + 249 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 19);
            *(b + 187 * OS1_S1 + 34) =
                prefactor_z * *(b + 187 * OS1_S1 + 19) -
                p_over_q * *(b + 250 * OS1_S1 + 19) +
                one_over_two_q * *(b + 135 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 187 * OS1_S1 + 9);
            *(b + 188 * OS1_S1 + 20) =
                prefactor_x * *(b + 188 * OS1_S1 + 10) -
                p_over_q * *(b + 243 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 4);
            *(b + 188 * OS1_S1 + 21) =
                prefactor_y * *(b + 188 * OS1_S1 + 10) -
                p_over_q * *(b + 250 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 10);
            *(b + 188 * OS1_S1 + 22) =
                prefactor_z * *(b + 188 * OS1_S1 + 10) -
                p_over_q * *(b + 251 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 10);
            *(b + 188 * OS1_S1 + 23) =
                prefactor_x * *(b + 188 * OS1_S1 + 13) -
                p_over_q * *(b + 243 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 13) +
                one_over_two_q * *(b + 188 * OS1_S1 + 7);
            *(b + 188 * OS1_S1 + 24) =
                prefactor_z * *(b + 188 * OS1_S1 + 11) -
                p_over_q * *(b + 251 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 11);
            *(b + 188 * OS1_S1 + 25) =
                prefactor_z * *(b + 188 * OS1_S1 + 12) -
                p_over_q * *(b + 251 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 12) +
                one_over_two_q * *(b + 188 * OS1_S1 + 4);
            *(b + 188 * OS1_S1 + 26) =
                prefactor_x * *(b + 188 * OS1_S1 + 16) -
                p_over_q * *(b + 243 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 16);
            *(b + 188 * OS1_S1 + 27) =
                prefactor_z * *(b + 188 * OS1_S1 + 13) -
                p_over_q * *(b + 251 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 13);
            *(b + 188 * OS1_S1 + 28) =
                prefactor_x * *(b + 188 * OS1_S1 + 18) -
                p_over_q * *(b + 243 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 18);
            *(b + 188 * OS1_S1 + 29) =
                prefactor_x * *(b + 188 * OS1_S1 + 19) -
                p_over_q * *(b + 243 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 19);
            *(b + 188 * OS1_S1 + 30) =
                prefactor_y * *(b + 188 * OS1_S1 + 16) -
                p_over_q * *(b + 250 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 7);
            *(b + 188 * OS1_S1 + 31) =
                prefactor_z * *(b + 188 * OS1_S1 + 16) -
                p_over_q * *(b + 251 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 16);
            *(b + 188 * OS1_S1 + 32) =
                prefactor_z * *(b + 188 * OS1_S1 + 17) -
                p_over_q * *(b + 251 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 17) +
                one_over_two_q * *(b + 188 * OS1_S1 + 7);
            *(b + 188 * OS1_S1 + 33) =
                prefactor_y * *(b + 188 * OS1_S1 + 19) -
                p_over_q * *(b + 250 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 19);
            *(b + 188 * OS1_S1 + 34) =
                prefactor_z * *(b + 188 * OS1_S1 + 19) -
                p_over_q * *(b + 251 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 9);
            *(b + 189 * OS1_S1 + 20) =
                prefactor_x * *(b + 189 * OS1_S1 + 10) -
                p_over_q * *(b + 244 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 189 * OS1_S1 + 4);
            *(b + 189 * OS1_S1 + 21) =
                prefactor_y * *(b + 189 * OS1_S1 + 10) -
                p_over_q * *(b + 251 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 10);
            *(b + 189 * OS1_S1 + 22) =
                prefactor_z * *(b + 189 * OS1_S1 + 10) -
                p_over_q * *(b + 252 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 10);
            *(b + 189 * OS1_S1 + 23) =
                prefactor_y * *(b + 189 * OS1_S1 + 11) -
                p_over_q * *(b + 251 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 11) +
                one_over_two_q * *(b + 189 * OS1_S1 + 4);
            *(b + 189 * OS1_S1 + 24) =
                prefactor_z * *(b + 189 * OS1_S1 + 11) -
                p_over_q * *(b + 252 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 11);
            *(b + 189 * OS1_S1 + 25) =
                prefactor_z * *(b + 189 * OS1_S1 + 12) -
                p_over_q * *(b + 252 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 12) +
                one_over_two_q * *(b + 189 * OS1_S1 + 4);
            *(b + 189 * OS1_S1 + 26) =
                prefactor_x * *(b + 189 * OS1_S1 + 16) -
                p_over_q * *(b + 244 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 16);
            *(b + 189 * OS1_S1 + 27) =
                prefactor_z * *(b + 189 * OS1_S1 + 13) -
                p_over_q * *(b + 252 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 13);
            *(b + 189 * OS1_S1 + 28) =
                prefactor_y * *(b + 189 * OS1_S1 + 15) -
                p_over_q * *(b + 251 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 15);
            *(b + 189 * OS1_S1 + 29) =
                prefactor_x * *(b + 189 * OS1_S1 + 19) -
                p_over_q * *(b + 244 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 19);
            *(b + 189 * OS1_S1 + 30) =
                prefactor_y * *(b + 189 * OS1_S1 + 16) -
                p_over_q * *(b + 251 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 189 * OS1_S1 + 7);
            *(b + 189 * OS1_S1 + 31) =
                prefactor_z * *(b + 189 * OS1_S1 + 16) -
                p_over_q * *(b + 252 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 16);
            *(b + 189 * OS1_S1 + 32) =
                prefactor_z * *(b + 189 * OS1_S1 + 17) -
                p_over_q * *(b + 252 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 17) +
                one_over_two_q * *(b + 189 * OS1_S1 + 7);
            *(b + 189 * OS1_S1 + 33) =
                prefactor_y * *(b + 189 * OS1_S1 + 19) -
                p_over_q * *(b + 251 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 19);
            *(b + 189 * OS1_S1 + 34) =
                prefactor_z * *(b + 189 * OS1_S1 + 19) -
                p_over_q * *(b + 252 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 189 * OS1_S1 + 9);
            *(b + 190 * OS1_S1 + 20) =
                prefactor_x * *(b + 190 * OS1_S1 + 10) -
                p_over_q * *(b + 245 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 4);
            *(b + 190 * OS1_S1 + 21) =
                prefactor_y * *(b + 190 * OS1_S1 + 10) -
                p_over_q * *(b + 252 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 10);
            *(b + 190 * OS1_S1 + 22) =
                prefactor_z * *(b + 190 * OS1_S1 + 10) -
                p_over_q * *(b + 253 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 10);
            *(b + 190 * OS1_S1 + 23) =
                prefactor_y * *(b + 190 * OS1_S1 + 11) -
                p_over_q * *(b + 252 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 11) +
                one_over_two_q * *(b + 190 * OS1_S1 + 4);
            *(b + 190 * OS1_S1 + 24) =
                prefactor_y * *(b + 190 * OS1_S1 + 12) -
                p_over_q * *(b + 252 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 12);
            *(b + 190 * OS1_S1 + 25) =
                prefactor_x * *(b + 190 * OS1_S1 + 15) -
                p_over_q * *(b + 245 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 15) +
                one_over_two_q * *(b + 190 * OS1_S1 + 9);
            *(b + 190 * OS1_S1 + 26) =
                prefactor_x * *(b + 190 * OS1_S1 + 16) -
                p_over_q * *(b + 245 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 16);
            *(b + 190 * OS1_S1 + 27) =
                prefactor_x * *(b + 190 * OS1_S1 + 17) -
                p_over_q * *(b + 245 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 17);
            *(b + 190 * OS1_S1 + 28) =
                prefactor_y * *(b + 190 * OS1_S1 + 15) -
                p_over_q * *(b + 252 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 15);
            *(b + 190 * OS1_S1 + 29) =
                prefactor_x * *(b + 190 * OS1_S1 + 19) -
                p_over_q * *(b + 245 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 19);
            *(b + 190 * OS1_S1 + 30) =
                prefactor_y * *(b + 190 * OS1_S1 + 16) -
                p_over_q * *(b + 252 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 7);
            *(b + 190 * OS1_S1 + 31) =
                prefactor_z * *(b + 190 * OS1_S1 + 16) -
                p_over_q * *(b + 253 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 16);
            *(b + 190 * OS1_S1 + 32) =
                prefactor_y * *(b + 190 * OS1_S1 + 18) -
                p_over_q * *(b + 252 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 18) +
                one_over_two_q * *(b + 190 * OS1_S1 + 9);
            *(b + 190 * OS1_S1 + 33) =
                prefactor_y * *(b + 190 * OS1_S1 + 19) -
                p_over_q * *(b + 252 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 19);
            *(b + 190 * OS1_S1 + 34) =
                prefactor_z * *(b + 190 * OS1_S1 + 19) -
                p_over_q * *(b + 253 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 9);
            *(b + 191 * OS1_S1 + 20) =
                prefactor_x * *(b + 191 * OS1_S1 + 10) -
                p_over_q * *(b + 246 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 191 * OS1_S1 + 4);
            *(b + 191 * OS1_S1 + 21) =
                prefactor_y * *(b + 191 * OS1_S1 + 10) -
                p_over_q * *(b + 253 * OS1_S1 + 10) +
                one_over_two_q * *(b + 140 * OS1_S1 + 10);
            *(b + 191 * OS1_S1 + 22) =
                prefactor_z * *(b + 191 * OS1_S1 + 10) -
                p_over_q * *(b + 254 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 10);
            *(b + 191 * OS1_S1 + 23) =
                prefactor_y * *(b + 191 * OS1_S1 + 11) -
                p_over_q * *(b + 253 * OS1_S1 + 11) +
                one_over_two_q * *(b + 140 * OS1_S1 + 11) +
                one_over_two_q * *(b + 191 * OS1_S1 + 4);
            *(b + 191 * OS1_S1 + 24) =
                prefactor_y * *(b + 191 * OS1_S1 + 12) -
                p_over_q * *(b + 253 * OS1_S1 + 12) +
                one_over_two_q * *(b + 140 * OS1_S1 + 12);
            *(b + 191 * OS1_S1 + 25) =
                prefactor_x * *(b + 191 * OS1_S1 + 15) -
                p_over_q * *(b + 246 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 15) +
                one_over_two_q * *(b + 191 * OS1_S1 + 9);
            *(b + 191 * OS1_S1 + 26) =
                prefactor_x * *(b + 191 * OS1_S1 + 16) -
                p_over_q * *(b + 246 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 16);
            *(b + 191 * OS1_S1 + 27) =
                prefactor_x * *(b + 191 * OS1_S1 + 17) -
                p_over_q * *(b + 246 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 17);
            *(b + 191 * OS1_S1 + 28) =
                prefactor_y * *(b + 191 * OS1_S1 + 15) -
                p_over_q * *(b + 253 * OS1_S1 + 15) +
                one_over_two_q * *(b + 140 * OS1_S1 + 15);
            *(b + 191 * OS1_S1 + 29) =
                prefactor_x * *(b + 191 * OS1_S1 + 19) -
                p_over_q * *(b + 246 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 19);
            *(b + 191 * OS1_S1 + 30) =
                prefactor_y * *(b + 191 * OS1_S1 + 16) -
                p_over_q * *(b + 253 * OS1_S1 + 16) +
                one_over_two_q * *(b + 140 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 191 * OS1_S1 + 7);
            *(b + 191 * OS1_S1 + 31) =
                prefactor_z * *(b + 191 * OS1_S1 + 16) -
                p_over_q * *(b + 254 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 16);
            *(b + 191 * OS1_S1 + 32) =
                prefactor_y * *(b + 191 * OS1_S1 + 18) -
                p_over_q * *(b + 253 * OS1_S1 + 18) +
                one_over_two_q * *(b + 140 * OS1_S1 + 18) +
                one_over_two_q * *(b + 191 * OS1_S1 + 9);
            *(b + 191 * OS1_S1 + 33) =
                prefactor_y * *(b + 191 * OS1_S1 + 19) -
                p_over_q * *(b + 253 * OS1_S1 + 19) +
                one_over_two_q * *(b + 140 * OS1_S1 + 19);
            *(b + 191 * OS1_S1 + 34) =
                prefactor_z * *(b + 191 * OS1_S1 + 19) -
                p_over_q * *(b + 254 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 191 * OS1_S1 + 9);
            *(b + 192 * OS1_S1 + 20) =
                prefactor_x * *(b + 192 * OS1_S1 + 10) -
                p_over_q * *(b + 247 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 192 * OS1_S1 + 4);
            *(b + 192 * OS1_S1 + 21) = prefactor_y * *(b + 192 * OS1_S1 + 10) -
                                       p_over_q * *(b + 254 * OS1_S1 + 10);
            *(b + 192 * OS1_S1 + 22) =
                prefactor_z * *(b + 192 * OS1_S1 + 10) -
                p_over_q * *(b + 255 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 10);
            *(b + 192 * OS1_S1 + 23) = prefactor_y * *(b + 192 * OS1_S1 + 11) -
                                       p_over_q * *(b + 254 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 192 * OS1_S1 + 4);
            *(b + 192 * OS1_S1 + 24) = prefactor_y * *(b + 192 * OS1_S1 + 12) -
                                       p_over_q * *(b + 254 * OS1_S1 + 12);
            *(b + 192 * OS1_S1 + 25) =
                prefactor_x * *(b + 192 * OS1_S1 + 15) -
                p_over_q * *(b + 247 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 15) +
                one_over_two_q * *(b + 192 * OS1_S1 + 9);
            *(b + 192 * OS1_S1 + 26) =
                prefactor_x * *(b + 192 * OS1_S1 + 16) -
                p_over_q * *(b + 247 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 16);
            *(b + 192 * OS1_S1 + 27) =
                prefactor_x * *(b + 192 * OS1_S1 + 17) -
                p_over_q * *(b + 247 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 17);
            *(b + 192 * OS1_S1 + 28) = prefactor_y * *(b + 192 * OS1_S1 + 15) -
                                       p_over_q * *(b + 254 * OS1_S1 + 15);
            *(b + 192 * OS1_S1 + 29) =
                prefactor_x * *(b + 192 * OS1_S1 + 19) -
                p_over_q * *(b + 247 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 19);
            *(b + 192 * OS1_S1 + 30) =
                prefactor_y * *(b + 192 * OS1_S1 + 16) -
                p_over_q * *(b + 254 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 192 * OS1_S1 + 7);
            *(b + 192 * OS1_S1 + 31) =
                prefactor_z * *(b + 192 * OS1_S1 + 16) -
                p_over_q * *(b + 255 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 16);
            *(b + 192 * OS1_S1 + 32) = prefactor_y * *(b + 192 * OS1_S1 + 18) -
                                       p_over_q * *(b + 254 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 192 * OS1_S1 + 9);
            *(b + 192 * OS1_S1 + 33) = prefactor_y * *(b + 192 * OS1_S1 + 19) -
                                       p_over_q * *(b + 254 * OS1_S1 + 19);
            *(b + 192 * OS1_S1 + 34) =
                prefactor_z * *(b + 192 * OS1_S1 + 19) -
                p_over_q * *(b + 255 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 192 * OS1_S1 + 9);
            *(b + 193 * OS1_S1 + 20) =
                prefactor_x * *(b + 193 * OS1_S1 + 10) -
                p_over_q * *(b + 248 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 4);
            *(b + 193 * OS1_S1 + 21) =
                prefactor_y * *(b + 193 * OS1_S1 + 10) -
                p_over_q * *(b + 256 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 10);
            *(b + 193 * OS1_S1 + 22) = prefactor_z * *(b + 193 * OS1_S1 + 10) -
                                       p_over_q * *(b + 257 * OS1_S1 + 10);
            *(b + 193 * OS1_S1 + 23) =
                prefactor_x * *(b + 193 * OS1_S1 + 13) -
                p_over_q * *(b + 248 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 13) +
                one_over_two_q * *(b + 193 * OS1_S1 + 7);
            *(b + 193 * OS1_S1 + 24) = prefactor_z * *(b + 193 * OS1_S1 + 11) -
                                       p_over_q * *(b + 257 * OS1_S1 + 11);
            *(b + 193 * OS1_S1 + 25) = prefactor_z * *(b + 193 * OS1_S1 + 12) -
                                       p_over_q * *(b + 257 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 193 * OS1_S1 + 4);
            *(b + 193 * OS1_S1 + 26) =
                prefactor_x * *(b + 193 * OS1_S1 + 16) -
                p_over_q * *(b + 248 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 16);
            *(b + 193 * OS1_S1 + 27) = prefactor_z * *(b + 193 * OS1_S1 + 13) -
                                       p_over_q * *(b + 257 * OS1_S1 + 13);
            *(b + 193 * OS1_S1 + 28) =
                prefactor_x * *(b + 193 * OS1_S1 + 18) -
                p_over_q * *(b + 248 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 18);
            *(b + 193 * OS1_S1 + 29) =
                prefactor_x * *(b + 193 * OS1_S1 + 19) -
                p_over_q * *(b + 248 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 19);
            *(b + 193 * OS1_S1 + 30) =
                prefactor_y * *(b + 193 * OS1_S1 + 16) -
                p_over_q * *(b + 256 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 7);
            *(b + 193 * OS1_S1 + 31) = prefactor_z * *(b + 193 * OS1_S1 + 16) -
                                       p_over_q * *(b + 257 * OS1_S1 + 16);
            *(b + 193 * OS1_S1 + 32) = prefactor_z * *(b + 193 * OS1_S1 + 17) -
                                       p_over_q * *(b + 257 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 193 * OS1_S1 + 7);
            *(b + 193 * OS1_S1 + 33) =
                prefactor_y * *(b + 193 * OS1_S1 + 19) -
                p_over_q * *(b + 256 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 19);
            *(b + 193 * OS1_S1 + 34) =
                prefactor_z * *(b + 193 * OS1_S1 + 19) -
                p_over_q * *(b + 257 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 9);
            *(b + 194 * OS1_S1 + 20) =
                prefactor_x * *(b + 194 * OS1_S1 + 10) -
                p_over_q * *(b + 249 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 4);
            *(b + 194 * OS1_S1 + 21) =
                prefactor_y * *(b + 194 * OS1_S1 + 10) -
                p_over_q * *(b + 257 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 10);
            *(b + 194 * OS1_S1 + 22) =
                prefactor_z * *(b + 194 * OS1_S1 + 10) -
                p_over_q * *(b + 258 * OS1_S1 + 10) +
                one_over_two_q * *(b + 141 * OS1_S1 + 10);
            *(b + 194 * OS1_S1 + 23) =
                prefactor_x * *(b + 194 * OS1_S1 + 13) -
                p_over_q * *(b + 249 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 13) +
                one_over_two_q * *(b + 194 * OS1_S1 + 7);
            *(b + 194 * OS1_S1 + 24) =
                prefactor_z * *(b + 194 * OS1_S1 + 11) -
                p_over_q * *(b + 258 * OS1_S1 + 11) +
                one_over_two_q * *(b + 141 * OS1_S1 + 11);
            *(b + 194 * OS1_S1 + 25) =
                prefactor_z * *(b + 194 * OS1_S1 + 12) -
                p_over_q * *(b + 258 * OS1_S1 + 12) +
                one_over_two_q * *(b + 141 * OS1_S1 + 12) +
                one_over_two_q * *(b + 194 * OS1_S1 + 4);
            *(b + 194 * OS1_S1 + 26) =
                prefactor_x * *(b + 194 * OS1_S1 + 16) -
                p_over_q * *(b + 249 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 16);
            *(b + 194 * OS1_S1 + 27) =
                prefactor_z * *(b + 194 * OS1_S1 + 13) -
                p_over_q * *(b + 258 * OS1_S1 + 13) +
                one_over_two_q * *(b + 141 * OS1_S1 + 13);
            *(b + 194 * OS1_S1 + 28) =
                prefactor_x * *(b + 194 * OS1_S1 + 18) -
                p_over_q * *(b + 249 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 18);
            *(b + 194 * OS1_S1 + 29) =
                prefactor_x * *(b + 194 * OS1_S1 + 19) -
                p_over_q * *(b + 249 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 19);
            *(b + 194 * OS1_S1 + 30) =
                prefactor_y * *(b + 194 * OS1_S1 + 16) -
                p_over_q * *(b + 257 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 7);
            *(b + 194 * OS1_S1 + 31) =
                prefactor_z * *(b + 194 * OS1_S1 + 16) -
                p_over_q * *(b + 258 * OS1_S1 + 16) +
                one_over_two_q * *(b + 141 * OS1_S1 + 16);
            *(b + 194 * OS1_S1 + 32) =
                prefactor_z * *(b + 194 * OS1_S1 + 17) -
                p_over_q * *(b + 258 * OS1_S1 + 17) +
                one_over_two_q * *(b + 141 * OS1_S1 + 17) +
                one_over_two_q * *(b + 194 * OS1_S1 + 7);
            *(b + 194 * OS1_S1 + 33) =
                prefactor_y * *(b + 194 * OS1_S1 + 19) -
                p_over_q * *(b + 257 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 19);
            *(b + 194 * OS1_S1 + 34) =
                prefactor_z * *(b + 194 * OS1_S1 + 19) -
                p_over_q * *(b + 258 * OS1_S1 + 19) +
                one_over_two_q * *(b + 141 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 9);
            *(b + 195 * OS1_S1 + 20) =
                prefactor_x * *(b + 195 * OS1_S1 + 10) -
                p_over_q * *(b + 250 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 4);
            *(b + 195 * OS1_S1 + 21) =
                prefactor_y * *(b + 195 * OS1_S1 + 10) -
                p_over_q * *(b + 258 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 10);
            *(b + 195 * OS1_S1 + 22) =
                prefactor_z * *(b + 195 * OS1_S1 + 10) -
                p_over_q * *(b + 259 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 10);
            *(b + 195 * OS1_S1 + 23) =
                prefactor_x * *(b + 195 * OS1_S1 + 13) -
                p_over_q * *(b + 250 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 13) +
                one_over_two_q * *(b + 195 * OS1_S1 + 7);
            *(b + 195 * OS1_S1 + 24) =
                prefactor_z * *(b + 195 * OS1_S1 + 11) -
                p_over_q * *(b + 259 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 11);
            *(b + 195 * OS1_S1 + 25) =
                prefactor_z * *(b + 195 * OS1_S1 + 12) -
                p_over_q * *(b + 259 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 12) +
                one_over_two_q * *(b + 195 * OS1_S1 + 4);
            *(b + 195 * OS1_S1 + 26) =
                prefactor_x * *(b + 195 * OS1_S1 + 16) -
                p_over_q * *(b + 250 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 16);
            *(b + 195 * OS1_S1 + 27) =
                prefactor_z * *(b + 195 * OS1_S1 + 13) -
                p_over_q * *(b + 259 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 13);
            *(b + 195 * OS1_S1 + 28) =
                prefactor_x * *(b + 195 * OS1_S1 + 18) -
                p_over_q * *(b + 250 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 18);
            *(b + 195 * OS1_S1 + 29) =
                prefactor_x * *(b + 195 * OS1_S1 + 19) -
                p_over_q * *(b + 250 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 19);
            *(b + 195 * OS1_S1 + 30) =
                prefactor_y * *(b + 195 * OS1_S1 + 16) -
                p_over_q * *(b + 258 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 7);
            *(b + 195 * OS1_S1 + 31) =
                prefactor_z * *(b + 195 * OS1_S1 + 16) -
                p_over_q * *(b + 259 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 16);
            *(b + 195 * OS1_S1 + 32) =
                prefactor_z * *(b + 195 * OS1_S1 + 17) -
                p_over_q * *(b + 259 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 17) +
                one_over_two_q * *(b + 195 * OS1_S1 + 7);
            *(b + 195 * OS1_S1 + 33) =
                prefactor_y * *(b + 195 * OS1_S1 + 19) -
                p_over_q * *(b + 258 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 19);
            *(b + 195 * OS1_S1 + 34) =
                prefactor_z * *(b + 195 * OS1_S1 + 19) -
                p_over_q * *(b + 259 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 9);
            *(b + 196 * OS1_S1 + 20) =
                prefactor_x * *(b + 196 * OS1_S1 + 10) -
                p_over_q * *(b + 251 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 4);
            *(b + 196 * OS1_S1 + 21) =
                prefactor_y * *(b + 196 * OS1_S1 + 10) -
                p_over_q * *(b + 259 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 10);
            *(b + 196 * OS1_S1 + 22) =
                prefactor_z * *(b + 196 * OS1_S1 + 10) -
                p_over_q * *(b + 260 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 10);
            *(b + 196 * OS1_S1 + 23) =
                prefactor_x * *(b + 196 * OS1_S1 + 13) -
                p_over_q * *(b + 251 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 13) +
                one_over_two_q * *(b + 196 * OS1_S1 + 7);
            *(b + 196 * OS1_S1 + 24) =
                prefactor_z * *(b + 196 * OS1_S1 + 11) -
                p_over_q * *(b + 260 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 11);
            *(b + 196 * OS1_S1 + 25) =
                prefactor_x * *(b + 196 * OS1_S1 + 15) -
                p_over_q * *(b + 251 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 15) +
                one_over_two_q * *(b + 196 * OS1_S1 + 9);
            *(b + 196 * OS1_S1 + 26) =
                prefactor_x * *(b + 196 * OS1_S1 + 16) -
                p_over_q * *(b + 251 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 16);
            *(b + 196 * OS1_S1 + 27) =
                prefactor_x * *(b + 196 * OS1_S1 + 17) -
                p_over_q * *(b + 251 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 17);
            *(b + 196 * OS1_S1 + 28) =
                prefactor_x * *(b + 196 * OS1_S1 + 18) -
                p_over_q * *(b + 251 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 18);
            *(b + 196 * OS1_S1 + 29) =
                prefactor_x * *(b + 196 * OS1_S1 + 19) -
                p_over_q * *(b + 251 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 19);
            *(b + 196 * OS1_S1 + 30) =
                prefactor_y * *(b + 196 * OS1_S1 + 16) -
                p_over_q * *(b + 259 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 7);
            *(b + 196 * OS1_S1 + 31) =
                prefactor_z * *(b + 196 * OS1_S1 + 16) -
                p_over_q * *(b + 260 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 16);
            *(b + 196 * OS1_S1 + 32) =
                prefactor_z * *(b + 196 * OS1_S1 + 17) -
                p_over_q * *(b + 260 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 17) +
                one_over_two_q * *(b + 196 * OS1_S1 + 7);
            *(b + 196 * OS1_S1 + 33) =
                prefactor_y * *(b + 196 * OS1_S1 + 19) -
                p_over_q * *(b + 259 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 19);
            *(b + 196 * OS1_S1 + 34) =
                prefactor_z * *(b + 196 * OS1_S1 + 19) -
                p_over_q * *(b + 260 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 9);
            *(b + 197 * OS1_S1 + 20) =
                prefactor_x * *(b + 197 * OS1_S1 + 10) -
                p_over_q * *(b + 252 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 4);
            *(b + 197 * OS1_S1 + 21) =
                prefactor_y * *(b + 197 * OS1_S1 + 10) -
                p_over_q * *(b + 260 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 10);
            *(b + 197 * OS1_S1 + 22) =
                prefactor_z * *(b + 197 * OS1_S1 + 10) -
                p_over_q * *(b + 261 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 10);
            *(b + 197 * OS1_S1 + 23) =
                prefactor_x * *(b + 197 * OS1_S1 + 13) -
                p_over_q * *(b + 252 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 13) +
                one_over_two_q * *(b + 197 * OS1_S1 + 7);
            *(b + 197 * OS1_S1 + 24) =
                prefactor_y * *(b + 197 * OS1_S1 + 12) -
                p_over_q * *(b + 260 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 12);
            *(b + 197 * OS1_S1 + 25) =
                prefactor_x * *(b + 197 * OS1_S1 + 15) -
                p_over_q * *(b + 252 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 15) +
                one_over_two_q * *(b + 197 * OS1_S1 + 9);
            *(b + 197 * OS1_S1 + 26) =
                prefactor_x * *(b + 197 * OS1_S1 + 16) -
                p_over_q * *(b + 252 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 16);
            *(b + 197 * OS1_S1 + 27) =
                prefactor_x * *(b + 197 * OS1_S1 + 17) -
                p_over_q * *(b + 252 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 17);
            *(b + 197 * OS1_S1 + 28) =
                prefactor_x * *(b + 197 * OS1_S1 + 18) -
                p_over_q * *(b + 252 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 18);
            *(b + 197 * OS1_S1 + 29) =
                prefactor_x * *(b + 197 * OS1_S1 + 19) -
                p_over_q * *(b + 252 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 19);
            *(b + 197 * OS1_S1 + 30) =
                prefactor_y * *(b + 197 * OS1_S1 + 16) -
                p_over_q * *(b + 260 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 7);
            *(b + 197 * OS1_S1 + 31) =
                prefactor_z * *(b + 197 * OS1_S1 + 16) -
                p_over_q * *(b + 261 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 16);
            *(b + 197 * OS1_S1 + 32) =
                prefactor_y * *(b + 197 * OS1_S1 + 18) -
                p_over_q * *(b + 260 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 18) +
                one_over_two_q * *(b + 197 * OS1_S1 + 9);
            *(b + 197 * OS1_S1 + 33) =
                prefactor_y * *(b + 197 * OS1_S1 + 19) -
                p_over_q * *(b + 260 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 19);
            *(b + 197 * OS1_S1 + 34) =
                prefactor_z * *(b + 197 * OS1_S1 + 19) -
                p_over_q * *(b + 261 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 9);
            *(b + 198 * OS1_S1 + 20) =
                prefactor_x * *(b + 198 * OS1_S1 + 10) -
                p_over_q * *(b + 253 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 4);
            *(b + 198 * OS1_S1 + 21) =
                prefactor_y * *(b + 198 * OS1_S1 + 10) -
                p_over_q * *(b + 261 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 10);
            *(b + 198 * OS1_S1 + 22) =
                prefactor_z * *(b + 198 * OS1_S1 + 10) -
                p_over_q * *(b + 262 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 10);
            *(b + 198 * OS1_S1 + 23) =
                prefactor_y * *(b + 198 * OS1_S1 + 11) -
                p_over_q * *(b + 261 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 11) +
                one_over_two_q * *(b + 198 * OS1_S1 + 4);
            *(b + 198 * OS1_S1 + 24) =
                prefactor_y * *(b + 198 * OS1_S1 + 12) -
                p_over_q * *(b + 261 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 12);
            *(b + 198 * OS1_S1 + 25) =
                prefactor_x * *(b + 198 * OS1_S1 + 15) -
                p_over_q * *(b + 253 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 15) +
                one_over_two_q * *(b + 198 * OS1_S1 + 9);
            *(b + 198 * OS1_S1 + 26) =
                prefactor_x * *(b + 198 * OS1_S1 + 16) -
                p_over_q * *(b + 253 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 16);
            *(b + 198 * OS1_S1 + 27) =
                prefactor_x * *(b + 198 * OS1_S1 + 17) -
                p_over_q * *(b + 253 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 17);
            *(b + 198 * OS1_S1 + 28) =
                prefactor_y * *(b + 198 * OS1_S1 + 15) -
                p_over_q * *(b + 261 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 15);
            *(b + 198 * OS1_S1 + 29) =
                prefactor_x * *(b + 198 * OS1_S1 + 19) -
                p_over_q * *(b + 253 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 19);
            *(b + 198 * OS1_S1 + 30) =
                prefactor_y * *(b + 198 * OS1_S1 + 16) -
                p_over_q * *(b + 261 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 7);
            *(b + 198 * OS1_S1 + 31) =
                prefactor_z * *(b + 198 * OS1_S1 + 16) -
                p_over_q * *(b + 262 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 16);
            *(b + 198 * OS1_S1 + 32) =
                prefactor_y * *(b + 198 * OS1_S1 + 18) -
                p_over_q * *(b + 261 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 18) +
                one_over_two_q * *(b + 198 * OS1_S1 + 9);
            *(b + 198 * OS1_S1 + 33) =
                prefactor_y * *(b + 198 * OS1_S1 + 19) -
                p_over_q * *(b + 261 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 19);
            *(b + 198 * OS1_S1 + 34) =
                prefactor_z * *(b + 198 * OS1_S1 + 19) -
                p_over_q * *(b + 262 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 9);
            *(b + 199 * OS1_S1 + 20) =
                prefactor_x * *(b + 199 * OS1_S1 + 10) -
                p_over_q * *(b + 254 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 4);
            *(b + 199 * OS1_S1 + 21) =
                prefactor_y * *(b + 199 * OS1_S1 + 10) -
                p_over_q * *(b + 262 * OS1_S1 + 10) +
                one_over_two_q * *(b + 147 * OS1_S1 + 10);
            *(b + 199 * OS1_S1 + 22) =
                prefactor_z * *(b + 199 * OS1_S1 + 10) -
                p_over_q * *(b + 263 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 10);
            *(b + 199 * OS1_S1 + 23) =
                prefactor_y * *(b + 199 * OS1_S1 + 11) -
                p_over_q * *(b + 262 * OS1_S1 + 11) +
                one_over_two_q * *(b + 147 * OS1_S1 + 11) +
                one_over_two_q * *(b + 199 * OS1_S1 + 4);
            *(b + 199 * OS1_S1 + 24) =
                prefactor_y * *(b + 199 * OS1_S1 + 12) -
                p_over_q * *(b + 262 * OS1_S1 + 12) +
                one_over_two_q * *(b + 147 * OS1_S1 + 12);
            *(b + 199 * OS1_S1 + 25) =
                prefactor_x * *(b + 199 * OS1_S1 + 15) -
                p_over_q * *(b + 254 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 15) +
                one_over_two_q * *(b + 199 * OS1_S1 + 9);
            *(b + 199 * OS1_S1 + 26) =
                prefactor_x * *(b + 199 * OS1_S1 + 16) -
                p_over_q * *(b + 254 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 16);
            *(b + 199 * OS1_S1 + 27) =
                prefactor_x * *(b + 199 * OS1_S1 + 17) -
                p_over_q * *(b + 254 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 17);
            *(b + 199 * OS1_S1 + 28) =
                prefactor_y * *(b + 199 * OS1_S1 + 15) -
                p_over_q * *(b + 262 * OS1_S1 + 15) +
                one_over_two_q * *(b + 147 * OS1_S1 + 15);
            *(b + 199 * OS1_S1 + 29) =
                prefactor_x * *(b + 199 * OS1_S1 + 19) -
                p_over_q * *(b + 254 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 19);
            *(b + 199 * OS1_S1 + 30) =
                prefactor_y * *(b + 199 * OS1_S1 + 16) -
                p_over_q * *(b + 262 * OS1_S1 + 16) +
                one_over_two_q * *(b + 147 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 7);
            *(b + 199 * OS1_S1 + 31) =
                prefactor_z * *(b + 199 * OS1_S1 + 16) -
                p_over_q * *(b + 263 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 16);
            *(b + 199 * OS1_S1 + 32) =
                prefactor_y * *(b + 199 * OS1_S1 + 18) -
                p_over_q * *(b + 262 * OS1_S1 + 18) +
                one_over_two_q * *(b + 147 * OS1_S1 + 18) +
                one_over_two_q * *(b + 199 * OS1_S1 + 9);
            *(b + 199 * OS1_S1 + 33) =
                prefactor_y * *(b + 199 * OS1_S1 + 19) -
                p_over_q * *(b + 262 * OS1_S1 + 19) +
                one_over_two_q * *(b + 147 * OS1_S1 + 19);
            *(b + 199 * OS1_S1 + 34) =
                prefactor_z * *(b + 199 * OS1_S1 + 19) -
                p_over_q * *(b + 263 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 9);
            *(b + 200 * OS1_S1 + 20) =
                prefactor_x * *(b + 200 * OS1_S1 + 10) -
                p_over_q * *(b + 255 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 4);
            *(b + 200 * OS1_S1 + 21) = prefactor_y * *(b + 200 * OS1_S1 + 10) -
                                       p_over_q * *(b + 263 * OS1_S1 + 10);
            *(b + 200 * OS1_S1 + 22) =
                prefactor_z * *(b + 200 * OS1_S1 + 10) -
                p_over_q * *(b + 264 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 10);
            *(b + 200 * OS1_S1 + 23) = prefactor_y * *(b + 200 * OS1_S1 + 11) -
                                       p_over_q * *(b + 263 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 200 * OS1_S1 + 4);
            *(b + 200 * OS1_S1 + 24) = prefactor_y * *(b + 200 * OS1_S1 + 12) -
                                       p_over_q * *(b + 263 * OS1_S1 + 12);
            *(b + 200 * OS1_S1 + 25) =
                prefactor_x * *(b + 200 * OS1_S1 + 15) -
                p_over_q * *(b + 255 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 15) +
                one_over_two_q * *(b + 200 * OS1_S1 + 9);
            *(b + 200 * OS1_S1 + 26) =
                prefactor_x * *(b + 200 * OS1_S1 + 16) -
                p_over_q * *(b + 255 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 16);
            *(b + 200 * OS1_S1 + 27) =
                prefactor_x * *(b + 200 * OS1_S1 + 17) -
                p_over_q * *(b + 255 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 17);
            *(b + 200 * OS1_S1 + 28) = prefactor_y * *(b + 200 * OS1_S1 + 15) -
                                       p_over_q * *(b + 263 * OS1_S1 + 15);
            *(b + 200 * OS1_S1 + 29) =
                prefactor_x * *(b + 200 * OS1_S1 + 19) -
                p_over_q * *(b + 255 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 19);
            *(b + 200 * OS1_S1 + 30) =
                prefactor_y * *(b + 200 * OS1_S1 + 16) -
                p_over_q * *(b + 263 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 7);
            *(b + 200 * OS1_S1 + 31) =
                prefactor_z * *(b + 200 * OS1_S1 + 16) -
                p_over_q * *(b + 264 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 16);
            *(b + 200 * OS1_S1 + 32) = prefactor_y * *(b + 200 * OS1_S1 + 18) -
                                       p_over_q * *(b + 263 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 200 * OS1_S1 + 9);
            *(b + 200 * OS1_S1 + 33) = prefactor_y * *(b + 200 * OS1_S1 + 19) -
                                       p_over_q * *(b + 263 * OS1_S1 + 19);
            *(b + 200 * OS1_S1 + 34) =
                prefactor_z * *(b + 200 * OS1_S1 + 19) -
                p_over_q * *(b + 264 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 9);
            *(b + 201 * OS1_S1 + 20) =
                prefactor_x * *(b + 201 * OS1_S1 + 10) -
                p_over_q * *(b + 256 * OS1_S1 + 10) +
                one_over_two_q * *(b + 156 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 201 * OS1_S1 + 4);
            *(b + 201 * OS1_S1 + 21) =
                prefactor_y * *(b + 201 * OS1_S1 + 10) -
                p_over_q * *(b + 265 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 10);
            *(b + 201 * OS1_S1 + 22) = prefactor_z * *(b + 201 * OS1_S1 + 10) -
                                       p_over_q * *(b + 266 * OS1_S1 + 10);
            *(b + 201 * OS1_S1 + 23) =
                prefactor_x * *(b + 201 * OS1_S1 + 13) -
                p_over_q * *(b + 256 * OS1_S1 + 13) +
                one_over_two_q * *(b + 156 * OS1_S1 + 13) +
                one_over_two_q * *(b + 201 * OS1_S1 + 7);
            *(b + 201 * OS1_S1 + 24) = prefactor_z * *(b + 201 * OS1_S1 + 11) -
                                       p_over_q * *(b + 266 * OS1_S1 + 11);
            *(b + 201 * OS1_S1 + 25) = prefactor_z * *(b + 201 * OS1_S1 + 12) -
                                       p_over_q * *(b + 266 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 201 * OS1_S1 + 4);
            *(b + 201 * OS1_S1 + 26) =
                prefactor_x * *(b + 201 * OS1_S1 + 16) -
                p_over_q * *(b + 256 * OS1_S1 + 16) +
                one_over_two_q * *(b + 156 * OS1_S1 + 16);
            *(b + 201 * OS1_S1 + 27) = prefactor_z * *(b + 201 * OS1_S1 + 13) -
                                       p_over_q * *(b + 266 * OS1_S1 + 13);
            *(b + 201 * OS1_S1 + 28) =
                prefactor_x * *(b + 201 * OS1_S1 + 18) -
                p_over_q * *(b + 256 * OS1_S1 + 18) +
                one_over_two_q * *(b + 156 * OS1_S1 + 18);
            *(b + 201 * OS1_S1 + 29) =
                prefactor_x * *(b + 201 * OS1_S1 + 19) -
                p_over_q * *(b + 256 * OS1_S1 + 19) +
                one_over_two_q * *(b + 156 * OS1_S1 + 19);
            *(b + 201 * OS1_S1 + 30) =
                prefactor_y * *(b + 201 * OS1_S1 + 16) -
                p_over_q * *(b + 265 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 201 * OS1_S1 + 7);
            *(b + 201 * OS1_S1 + 31) = prefactor_z * *(b + 201 * OS1_S1 + 16) -
                                       p_over_q * *(b + 266 * OS1_S1 + 16);
            *(b + 201 * OS1_S1 + 32) = prefactor_z * *(b + 201 * OS1_S1 + 17) -
                                       p_over_q * *(b + 266 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 201 * OS1_S1 + 7);
            *(b + 201 * OS1_S1 + 33) =
                prefactor_y * *(b + 201 * OS1_S1 + 19) -
                p_over_q * *(b + 265 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 19);
            *(b + 201 * OS1_S1 + 34) =
                prefactor_z * *(b + 201 * OS1_S1 + 19) -
                p_over_q * *(b + 266 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 201 * OS1_S1 + 9);
            *(b + 202 * OS1_S1 + 20) =
                prefactor_x * *(b + 202 * OS1_S1 + 10) -
                p_over_q * *(b + 257 * OS1_S1 + 10) +
                one_over_two_q * *(b + 157 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 202 * OS1_S1 + 4);
            *(b + 202 * OS1_S1 + 21) =
                prefactor_y * *(b + 202 * OS1_S1 + 10) -
                p_over_q * *(b + 266 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 10);
            *(b + 202 * OS1_S1 + 22) =
                prefactor_z * *(b + 202 * OS1_S1 + 10) -
                p_over_q * *(b + 267 * OS1_S1 + 10) +
                one_over_two_q * *(b + 148 * OS1_S1 + 10);
            *(b + 202 * OS1_S1 + 23) =
                prefactor_x * *(b + 202 * OS1_S1 + 13) -
                p_over_q * *(b + 257 * OS1_S1 + 13) +
                one_over_two_q * *(b + 157 * OS1_S1 + 13) +
                one_over_two_q * *(b + 202 * OS1_S1 + 7);
            *(b + 202 * OS1_S1 + 24) =
                prefactor_z * *(b + 202 * OS1_S1 + 11) -
                p_over_q * *(b + 267 * OS1_S1 + 11) +
                one_over_two_q * *(b + 148 * OS1_S1 + 11);
            *(b + 202 * OS1_S1 + 25) =
                prefactor_z * *(b + 202 * OS1_S1 + 12) -
                p_over_q * *(b + 267 * OS1_S1 + 12) +
                one_over_two_q * *(b + 148 * OS1_S1 + 12) +
                one_over_two_q * *(b + 202 * OS1_S1 + 4);
            *(b + 202 * OS1_S1 + 26) =
                prefactor_x * *(b + 202 * OS1_S1 + 16) -
                p_over_q * *(b + 257 * OS1_S1 + 16) +
                one_over_two_q * *(b + 157 * OS1_S1 + 16);
            *(b + 202 * OS1_S1 + 27) =
                prefactor_z * *(b + 202 * OS1_S1 + 13) -
                p_over_q * *(b + 267 * OS1_S1 + 13) +
                one_over_two_q * *(b + 148 * OS1_S1 + 13);
            *(b + 202 * OS1_S1 + 28) =
                prefactor_x * *(b + 202 * OS1_S1 + 18) -
                p_over_q * *(b + 257 * OS1_S1 + 18) +
                one_over_two_q * *(b + 157 * OS1_S1 + 18);
            *(b + 202 * OS1_S1 + 29) =
                prefactor_x * *(b + 202 * OS1_S1 + 19) -
                p_over_q * *(b + 257 * OS1_S1 + 19) +
                one_over_two_q * *(b + 157 * OS1_S1 + 19);
            *(b + 202 * OS1_S1 + 30) =
                prefactor_y * *(b + 202 * OS1_S1 + 16) -
                p_over_q * *(b + 266 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 202 * OS1_S1 + 7);
            *(b + 202 * OS1_S1 + 31) =
                prefactor_z * *(b + 202 * OS1_S1 + 16) -
                p_over_q * *(b + 267 * OS1_S1 + 16) +
                one_over_two_q * *(b + 148 * OS1_S1 + 16);
            *(b + 202 * OS1_S1 + 32) =
                prefactor_z * *(b + 202 * OS1_S1 + 17) -
                p_over_q * *(b + 267 * OS1_S1 + 17) +
                one_over_two_q * *(b + 148 * OS1_S1 + 17) +
                one_over_two_q * *(b + 202 * OS1_S1 + 7);
            *(b + 202 * OS1_S1 + 33) =
                prefactor_y * *(b + 202 * OS1_S1 + 19) -
                p_over_q * *(b + 266 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 19);
            *(b + 202 * OS1_S1 + 34) =
                prefactor_z * *(b + 202 * OS1_S1 + 19) -
                p_over_q * *(b + 267 * OS1_S1 + 19) +
                one_over_two_q * *(b + 148 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 202 * OS1_S1 + 9);
            *(b + 203 * OS1_S1 + 20) =
                prefactor_x * *(b + 203 * OS1_S1 + 10) -
                p_over_q * *(b + 258 * OS1_S1 + 10) +
                one_over_two_q * *(b + 158 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 4);
            *(b + 203 * OS1_S1 + 21) =
                prefactor_y * *(b + 203 * OS1_S1 + 10) -
                p_over_q * *(b + 267 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 10);
            *(b + 203 * OS1_S1 + 22) =
                prefactor_z * *(b + 203 * OS1_S1 + 10) -
                p_over_q * *(b + 268 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 10);
            *(b + 203 * OS1_S1 + 23) =
                prefactor_x * *(b + 203 * OS1_S1 + 13) -
                p_over_q * *(b + 258 * OS1_S1 + 13) +
                one_over_two_q * *(b + 158 * OS1_S1 + 13) +
                one_over_two_q * *(b + 203 * OS1_S1 + 7);
            *(b + 203 * OS1_S1 + 24) =
                prefactor_z * *(b + 203 * OS1_S1 + 11) -
                p_over_q * *(b + 268 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 11);
            *(b + 203 * OS1_S1 + 25) =
                prefactor_x * *(b + 203 * OS1_S1 + 15) -
                p_over_q * *(b + 258 * OS1_S1 + 15) +
                one_over_two_q * *(b + 158 * OS1_S1 + 15) +
                one_over_two_q * *(b + 203 * OS1_S1 + 9);
            *(b + 203 * OS1_S1 + 26) =
                prefactor_x * *(b + 203 * OS1_S1 + 16) -
                p_over_q * *(b + 258 * OS1_S1 + 16) +
                one_over_two_q * *(b + 158 * OS1_S1 + 16);
            *(b + 203 * OS1_S1 + 27) =
                prefactor_x * *(b + 203 * OS1_S1 + 17) -
                p_over_q * *(b + 258 * OS1_S1 + 17) +
                one_over_two_q * *(b + 158 * OS1_S1 + 17);
            *(b + 203 * OS1_S1 + 28) =
                prefactor_x * *(b + 203 * OS1_S1 + 18) -
                p_over_q * *(b + 258 * OS1_S1 + 18) +
                one_over_two_q * *(b + 158 * OS1_S1 + 18);
            *(b + 203 * OS1_S1 + 29) =
                prefactor_x * *(b + 203 * OS1_S1 + 19) -
                p_over_q * *(b + 258 * OS1_S1 + 19) +
                one_over_two_q * *(b + 158 * OS1_S1 + 19);
            *(b + 203 * OS1_S1 + 30) =
                prefactor_y * *(b + 203 * OS1_S1 + 16) -
                p_over_q * *(b + 267 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 7);
            *(b + 203 * OS1_S1 + 31) =
                prefactor_z * *(b + 203 * OS1_S1 + 16) -
                p_over_q * *(b + 268 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 16);
            *(b + 203 * OS1_S1 + 32) =
                prefactor_z * *(b + 203 * OS1_S1 + 17) -
                p_over_q * *(b + 268 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 17) +
                one_over_two_q * *(b + 203 * OS1_S1 + 7);
            *(b + 203 * OS1_S1 + 33) =
                prefactor_y * *(b + 203 * OS1_S1 + 19) -
                p_over_q * *(b + 267 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 19);
            *(b + 203 * OS1_S1 + 34) =
                prefactor_z * *(b + 203 * OS1_S1 + 19) -
                p_over_q * *(b + 268 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 9);
            *(b + 204 * OS1_S1 + 20) =
                prefactor_x * *(b + 204 * OS1_S1 + 10) -
                p_over_q * *(b + 259 * OS1_S1 + 10) +
                one_over_two_q * *(b + 159 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 204 * OS1_S1 + 4);
            *(b + 204 * OS1_S1 + 21) =
                prefactor_y * *(b + 204 * OS1_S1 + 10) -
                p_over_q * *(b + 268 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 10);
            *(b + 204 * OS1_S1 + 22) =
                prefactor_z * *(b + 204 * OS1_S1 + 10) -
                p_over_q * *(b + 269 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 10);
            *(b + 204 * OS1_S1 + 23) =
                prefactor_x * *(b + 204 * OS1_S1 + 13) -
                p_over_q * *(b + 259 * OS1_S1 + 13) +
                one_over_two_q * *(b + 159 * OS1_S1 + 13) +
                one_over_two_q * *(b + 204 * OS1_S1 + 7);
            *(b + 204 * OS1_S1 + 24) =
                prefactor_z * *(b + 204 * OS1_S1 + 11) -
                p_over_q * *(b + 269 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 11);
            *(b + 204 * OS1_S1 + 25) =
                prefactor_x * *(b + 204 * OS1_S1 + 15) -
                p_over_q * *(b + 259 * OS1_S1 + 15) +
                one_over_two_q * *(b + 159 * OS1_S1 + 15) +
                one_over_two_q * *(b + 204 * OS1_S1 + 9);
            *(b + 204 * OS1_S1 + 26) =
                prefactor_x * *(b + 204 * OS1_S1 + 16) -
                p_over_q * *(b + 259 * OS1_S1 + 16) +
                one_over_two_q * *(b + 159 * OS1_S1 + 16);
            *(b + 204 * OS1_S1 + 27) =
                prefactor_x * *(b + 204 * OS1_S1 + 17) -
                p_over_q * *(b + 259 * OS1_S1 + 17) +
                one_over_two_q * *(b + 159 * OS1_S1 + 17);
            *(b + 204 * OS1_S1 + 28) =
                prefactor_x * *(b + 204 * OS1_S1 + 18) -
                p_over_q * *(b + 259 * OS1_S1 + 18) +
                one_over_two_q * *(b + 159 * OS1_S1 + 18);
            *(b + 204 * OS1_S1 + 29) =
                prefactor_x * *(b + 204 * OS1_S1 + 19) -
                p_over_q * *(b + 259 * OS1_S1 + 19) +
                one_over_two_q * *(b + 159 * OS1_S1 + 19);
            *(b + 204 * OS1_S1 + 30) =
                prefactor_y * *(b + 204 * OS1_S1 + 16) -
                p_over_q * *(b + 268 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 204 * OS1_S1 + 7);
            *(b + 204 * OS1_S1 + 31) =
                prefactor_z * *(b + 204 * OS1_S1 + 16) -
                p_over_q * *(b + 269 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 16);
            *(b + 204 * OS1_S1 + 32) =
                prefactor_z * *(b + 204 * OS1_S1 + 17) -
                p_over_q * *(b + 269 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 17) +
                one_over_two_q * *(b + 204 * OS1_S1 + 7);
            *(b + 204 * OS1_S1 + 33) =
                prefactor_y * *(b + 204 * OS1_S1 + 19) -
                p_over_q * *(b + 268 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 19);
            *(b + 204 * OS1_S1 + 34) =
                prefactor_z * *(b + 204 * OS1_S1 + 19) -
                p_over_q * *(b + 269 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 204 * OS1_S1 + 9);
            *(b + 205 * OS1_S1 + 20) =
                prefactor_x * *(b + 205 * OS1_S1 + 10) -
                p_over_q * *(b + 260 * OS1_S1 + 10) +
                one_over_two_q * *(b + 160 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 205 * OS1_S1 + 4);
            *(b + 205 * OS1_S1 + 21) =
                prefactor_y * *(b + 205 * OS1_S1 + 10) -
                p_over_q * *(b + 269 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 10);
            *(b + 205 * OS1_S1 + 22) =
                prefactor_z * *(b + 205 * OS1_S1 + 10) -
                p_over_q * *(b + 270 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 10);
            *(b + 205 * OS1_S1 + 23) =
                prefactor_x * *(b + 205 * OS1_S1 + 13) -
                p_over_q * *(b + 260 * OS1_S1 + 13) +
                one_over_two_q * *(b + 160 * OS1_S1 + 13) +
                one_over_two_q * *(b + 205 * OS1_S1 + 7);
            *(b + 205 * OS1_S1 + 24) =
                prefactor_z * *(b + 205 * OS1_S1 + 11) -
                p_over_q * *(b + 270 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 11);
            *(b + 205 * OS1_S1 + 25) =
                prefactor_x * *(b + 205 * OS1_S1 + 15) -
                p_over_q * *(b + 260 * OS1_S1 + 15) +
                one_over_two_q * *(b + 160 * OS1_S1 + 15) +
                one_over_two_q * *(b + 205 * OS1_S1 + 9);
            *(b + 205 * OS1_S1 + 26) =
                prefactor_x * *(b + 205 * OS1_S1 + 16) -
                p_over_q * *(b + 260 * OS1_S1 + 16) +
                one_over_two_q * *(b + 160 * OS1_S1 + 16);
            *(b + 205 * OS1_S1 + 27) =
                prefactor_x * *(b + 205 * OS1_S1 + 17) -
                p_over_q * *(b + 260 * OS1_S1 + 17) +
                one_over_two_q * *(b + 160 * OS1_S1 + 17);
            *(b + 205 * OS1_S1 + 28) =
                prefactor_x * *(b + 205 * OS1_S1 + 18) -
                p_over_q * *(b + 260 * OS1_S1 + 18) +
                one_over_two_q * *(b + 160 * OS1_S1 + 18);
            *(b + 205 * OS1_S1 + 29) =
                prefactor_x * *(b + 205 * OS1_S1 + 19) -
                p_over_q * *(b + 260 * OS1_S1 + 19) +
                one_over_two_q * *(b + 160 * OS1_S1 + 19);
            *(b + 205 * OS1_S1 + 30) =
                prefactor_y * *(b + 205 * OS1_S1 + 16) -
                p_over_q * *(b + 269 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 205 * OS1_S1 + 7);
            *(b + 205 * OS1_S1 + 31) =
                prefactor_z * *(b + 205 * OS1_S1 + 16) -
                p_over_q * *(b + 270 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 16);
            *(b + 205 * OS1_S1 + 32) =
                prefactor_z * *(b + 205 * OS1_S1 + 17) -
                p_over_q * *(b + 270 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 17) +
                one_over_two_q * *(b + 205 * OS1_S1 + 7);
            *(b + 205 * OS1_S1 + 33) =
                prefactor_y * *(b + 205 * OS1_S1 + 19) -
                p_over_q * *(b + 269 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 19);
            *(b + 205 * OS1_S1 + 34) =
                prefactor_z * *(b + 205 * OS1_S1 + 19) -
                p_over_q * *(b + 270 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 205 * OS1_S1 + 9);
            *(b + 206 * OS1_S1 + 20) =
                prefactor_x * *(b + 206 * OS1_S1 + 10) -
                p_over_q * *(b + 261 * OS1_S1 + 10) +
                one_over_two_q * *(b + 161 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 206 * OS1_S1 + 4);
            *(b + 206 * OS1_S1 + 21) =
                prefactor_y * *(b + 206 * OS1_S1 + 10) -
                p_over_q * *(b + 270 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 10);
            *(b + 206 * OS1_S1 + 22) =
                prefactor_z * *(b + 206 * OS1_S1 + 10) -
                p_over_q * *(b + 271 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 10);
            *(b + 206 * OS1_S1 + 23) =
                prefactor_x * *(b + 206 * OS1_S1 + 13) -
                p_over_q * *(b + 261 * OS1_S1 + 13) +
                one_over_two_q * *(b + 161 * OS1_S1 + 13) +
                one_over_two_q * *(b + 206 * OS1_S1 + 7);
            *(b + 206 * OS1_S1 + 24) =
                prefactor_y * *(b + 206 * OS1_S1 + 12) -
                p_over_q * *(b + 270 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 12);
            *(b + 206 * OS1_S1 + 25) =
                prefactor_x * *(b + 206 * OS1_S1 + 15) -
                p_over_q * *(b + 261 * OS1_S1 + 15) +
                one_over_two_q * *(b + 161 * OS1_S1 + 15) +
                one_over_two_q * *(b + 206 * OS1_S1 + 9);
            *(b + 206 * OS1_S1 + 26) =
                prefactor_x * *(b + 206 * OS1_S1 + 16) -
                p_over_q * *(b + 261 * OS1_S1 + 16) +
                one_over_two_q * *(b + 161 * OS1_S1 + 16);
            *(b + 206 * OS1_S1 + 27) =
                prefactor_x * *(b + 206 * OS1_S1 + 17) -
                p_over_q * *(b + 261 * OS1_S1 + 17) +
                one_over_two_q * *(b + 161 * OS1_S1 + 17);
            *(b + 206 * OS1_S1 + 28) =
                prefactor_x * *(b + 206 * OS1_S1 + 18) -
                p_over_q * *(b + 261 * OS1_S1 + 18) +
                one_over_two_q * *(b + 161 * OS1_S1 + 18);
            *(b + 206 * OS1_S1 + 29) =
                prefactor_x * *(b + 206 * OS1_S1 + 19) -
                p_over_q * *(b + 261 * OS1_S1 + 19) +
                one_over_two_q * *(b + 161 * OS1_S1 + 19);
            *(b + 206 * OS1_S1 + 30) =
                prefactor_y * *(b + 206 * OS1_S1 + 16) -
                p_over_q * *(b + 270 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 206 * OS1_S1 + 7);
            *(b + 206 * OS1_S1 + 31) =
                prefactor_z * *(b + 206 * OS1_S1 + 16) -
                p_over_q * *(b + 271 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 16);
            *(b + 206 * OS1_S1 + 32) =
                prefactor_y * *(b + 206 * OS1_S1 + 18) -
                p_over_q * *(b + 270 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 18) +
                one_over_two_q * *(b + 206 * OS1_S1 + 9);
            *(b + 206 * OS1_S1 + 33) =
                prefactor_y * *(b + 206 * OS1_S1 + 19) -
                p_over_q * *(b + 270 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 19);
            *(b + 206 * OS1_S1 + 34) =
                prefactor_z * *(b + 206 * OS1_S1 + 19) -
                p_over_q * *(b + 271 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 206 * OS1_S1 + 9);
            *(b + 207 * OS1_S1 + 20) =
                prefactor_x * *(b + 207 * OS1_S1 + 10) -
                p_over_q * *(b + 262 * OS1_S1 + 10) +
                one_over_two_q * *(b + 162 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 4);
            *(b + 207 * OS1_S1 + 21) =
                prefactor_y * *(b + 207 * OS1_S1 + 10) -
                p_over_q * *(b + 271 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 10);
            *(b + 207 * OS1_S1 + 22) =
                prefactor_z * *(b + 207 * OS1_S1 + 10) -
                p_over_q * *(b + 272 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 10);
            *(b + 207 * OS1_S1 + 23) =
                prefactor_x * *(b + 207 * OS1_S1 + 13) -
                p_over_q * *(b + 262 * OS1_S1 + 13) +
                one_over_two_q * *(b + 162 * OS1_S1 + 13) +
                one_over_two_q * *(b + 207 * OS1_S1 + 7);
            *(b + 207 * OS1_S1 + 24) =
                prefactor_y * *(b + 207 * OS1_S1 + 12) -
                p_over_q * *(b + 271 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 12);
            *(b + 207 * OS1_S1 + 25) =
                prefactor_x * *(b + 207 * OS1_S1 + 15) -
                p_over_q * *(b + 262 * OS1_S1 + 15) +
                one_over_two_q * *(b + 162 * OS1_S1 + 15) +
                one_over_two_q * *(b + 207 * OS1_S1 + 9);
            *(b + 207 * OS1_S1 + 26) =
                prefactor_x * *(b + 207 * OS1_S1 + 16) -
                p_over_q * *(b + 262 * OS1_S1 + 16) +
                one_over_two_q * *(b + 162 * OS1_S1 + 16);
            *(b + 207 * OS1_S1 + 27) =
                prefactor_x * *(b + 207 * OS1_S1 + 17) -
                p_over_q * *(b + 262 * OS1_S1 + 17) +
                one_over_two_q * *(b + 162 * OS1_S1 + 17);
            *(b + 207 * OS1_S1 + 28) =
                prefactor_x * *(b + 207 * OS1_S1 + 18) -
                p_over_q * *(b + 262 * OS1_S1 + 18) +
                one_over_two_q * *(b + 162 * OS1_S1 + 18);
            *(b + 207 * OS1_S1 + 29) =
                prefactor_x * *(b + 207 * OS1_S1 + 19) -
                p_over_q * *(b + 262 * OS1_S1 + 19) +
                one_over_two_q * *(b + 162 * OS1_S1 + 19);
            *(b + 207 * OS1_S1 + 30) =
                prefactor_y * *(b + 207 * OS1_S1 + 16) -
                p_over_q * *(b + 271 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 7);
            *(b + 207 * OS1_S1 + 31) =
                prefactor_z * *(b + 207 * OS1_S1 + 16) -
                p_over_q * *(b + 272 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 16);
            *(b + 207 * OS1_S1 + 32) =
                prefactor_y * *(b + 207 * OS1_S1 + 18) -
                p_over_q * *(b + 271 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 18) +
                one_over_two_q * *(b + 207 * OS1_S1 + 9);
            *(b + 207 * OS1_S1 + 33) =
                prefactor_y * *(b + 207 * OS1_S1 + 19) -
                p_over_q * *(b + 271 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 19);
            *(b + 207 * OS1_S1 + 34) =
                prefactor_z * *(b + 207 * OS1_S1 + 19) -
                p_over_q * *(b + 272 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 9);
            *(b + 208 * OS1_S1 + 20) =
                prefactor_x * *(b + 208 * OS1_S1 + 10) -
                p_over_q * *(b + 263 * OS1_S1 + 10) +
                one_over_two_q * *(b + 163 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 208 * OS1_S1 + 4);
            *(b + 208 * OS1_S1 + 21) =
                prefactor_y * *(b + 208 * OS1_S1 + 10) -
                p_over_q * *(b + 272 * OS1_S1 + 10) +
                one_over_two_q * *(b + 155 * OS1_S1 + 10);
            *(b + 208 * OS1_S1 + 22) =
                prefactor_z * *(b + 208 * OS1_S1 + 10) -
                p_over_q * *(b + 273 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 10);
            *(b + 208 * OS1_S1 + 23) =
                prefactor_y * *(b + 208 * OS1_S1 + 11) -
                p_over_q * *(b + 272 * OS1_S1 + 11) +
                one_over_two_q * *(b + 155 * OS1_S1 + 11) +
                one_over_two_q * *(b + 208 * OS1_S1 + 4);
            *(b + 208 * OS1_S1 + 24) =
                prefactor_y * *(b + 208 * OS1_S1 + 12) -
                p_over_q * *(b + 272 * OS1_S1 + 12) +
                one_over_two_q * *(b + 155 * OS1_S1 + 12);
            *(b + 208 * OS1_S1 + 25) =
                prefactor_x * *(b + 208 * OS1_S1 + 15) -
                p_over_q * *(b + 263 * OS1_S1 + 15) +
                one_over_two_q * *(b + 163 * OS1_S1 + 15) +
                one_over_two_q * *(b + 208 * OS1_S1 + 9);
            *(b + 208 * OS1_S1 + 26) =
                prefactor_x * *(b + 208 * OS1_S1 + 16) -
                p_over_q * *(b + 263 * OS1_S1 + 16) +
                one_over_two_q * *(b + 163 * OS1_S1 + 16);
            *(b + 208 * OS1_S1 + 27) =
                prefactor_x * *(b + 208 * OS1_S1 + 17) -
                p_over_q * *(b + 263 * OS1_S1 + 17) +
                one_over_two_q * *(b + 163 * OS1_S1 + 17);
            *(b + 208 * OS1_S1 + 28) =
                prefactor_y * *(b + 208 * OS1_S1 + 15) -
                p_over_q * *(b + 272 * OS1_S1 + 15) +
                one_over_two_q * *(b + 155 * OS1_S1 + 15);
            *(b + 208 * OS1_S1 + 29) =
                prefactor_x * *(b + 208 * OS1_S1 + 19) -
                p_over_q * *(b + 263 * OS1_S1 + 19) +
                one_over_two_q * *(b + 163 * OS1_S1 + 19);
            *(b + 208 * OS1_S1 + 30) =
                prefactor_y * *(b + 208 * OS1_S1 + 16) -
                p_over_q * *(b + 272 * OS1_S1 + 16) +
                one_over_two_q * *(b + 155 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 208 * OS1_S1 + 7);
            *(b + 208 * OS1_S1 + 31) =
                prefactor_z * *(b + 208 * OS1_S1 + 16) -
                p_over_q * *(b + 273 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 16);
            *(b + 208 * OS1_S1 + 32) =
                prefactor_y * *(b + 208 * OS1_S1 + 18) -
                p_over_q * *(b + 272 * OS1_S1 + 18) +
                one_over_two_q * *(b + 155 * OS1_S1 + 18) +
                one_over_two_q * *(b + 208 * OS1_S1 + 9);
            *(b + 208 * OS1_S1 + 33) =
                prefactor_y * *(b + 208 * OS1_S1 + 19) -
                p_over_q * *(b + 272 * OS1_S1 + 19) +
                one_over_two_q * *(b + 155 * OS1_S1 + 19);
            *(b + 208 * OS1_S1 + 34) =
                prefactor_z * *(b + 208 * OS1_S1 + 19) -
                p_over_q * *(b + 273 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 208 * OS1_S1 + 9);
            *(b + 209 * OS1_S1 + 20) =
                prefactor_x * *(b + 209 * OS1_S1 + 10) -
                p_over_q * *(b + 264 * OS1_S1 + 10) +
                one_over_two_q * *(b + 164 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 209 * OS1_S1 + 4);
            *(b + 209 * OS1_S1 + 21) = prefactor_y * *(b + 209 * OS1_S1 + 10) -
                                       p_over_q * *(b + 273 * OS1_S1 + 10);
            *(b + 209 * OS1_S1 + 22) =
                prefactor_z * *(b + 209 * OS1_S1 + 10) -
                p_over_q * *(b + 274 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 10);
            *(b + 209 * OS1_S1 + 23) = prefactor_y * *(b + 209 * OS1_S1 + 11) -
                                       p_over_q * *(b + 273 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 209 * OS1_S1 + 4);
            *(b + 209 * OS1_S1 + 24) = prefactor_y * *(b + 209 * OS1_S1 + 12) -
                                       p_over_q * *(b + 273 * OS1_S1 + 12);
            *(b + 209 * OS1_S1 + 25) =
                prefactor_x * *(b + 209 * OS1_S1 + 15) -
                p_over_q * *(b + 264 * OS1_S1 + 15) +
                one_over_two_q * *(b + 164 * OS1_S1 + 15) +
                one_over_two_q * *(b + 209 * OS1_S1 + 9);
            *(b + 209 * OS1_S1 + 26) =
                prefactor_x * *(b + 209 * OS1_S1 + 16) -
                p_over_q * *(b + 264 * OS1_S1 + 16) +
                one_over_two_q * *(b + 164 * OS1_S1 + 16);
            *(b + 209 * OS1_S1 + 27) =
                prefactor_x * *(b + 209 * OS1_S1 + 17) -
                p_over_q * *(b + 264 * OS1_S1 + 17) +
                one_over_two_q * *(b + 164 * OS1_S1 + 17);
            *(b + 209 * OS1_S1 + 28) = prefactor_y * *(b + 209 * OS1_S1 + 15) -
                                       p_over_q * *(b + 273 * OS1_S1 + 15);
            *(b + 209 * OS1_S1 + 29) =
                prefactor_x * *(b + 209 * OS1_S1 + 19) -
                p_over_q * *(b + 264 * OS1_S1 + 19) +
                one_over_two_q * *(b + 164 * OS1_S1 + 19);
            *(b + 209 * OS1_S1 + 30) =
                prefactor_y * *(b + 209 * OS1_S1 + 16) -
                p_over_q * *(b + 273 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 209 * OS1_S1 + 7);
            *(b + 209 * OS1_S1 + 31) =
                prefactor_z * *(b + 209 * OS1_S1 + 16) -
                p_over_q * *(b + 274 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 16);
            *(b + 209 * OS1_S1 + 32) = prefactor_y * *(b + 209 * OS1_S1 + 18) -
                                       p_over_q * *(b + 273 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 209 * OS1_S1 + 9);
            *(b + 209 * OS1_S1 + 33) = prefactor_y * *(b + 209 * OS1_S1 + 19) -
                                       p_over_q * *(b + 273 * OS1_S1 + 19);
            *(b + 209 * OS1_S1 + 34) =
                prefactor_z * *(b + 209 * OS1_S1 + 19) -
                p_over_q * *(b + 274 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 209 * OS1_S1 + 9);
            *(b + 210 * OS1_S1 + 20) =
                prefactor_x * *(b + 210 * OS1_S1 + 10) -
                p_over_q * *(b + 265 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 210 * OS1_S1 + 4);
            *(b + 210 * OS1_S1 + 21) =
                prefactor_y * *(b + 210 * OS1_S1 + 10) -
                p_over_q * *(b + 275 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 10);
            *(b + 210 * OS1_S1 + 22) = prefactor_z * *(b + 210 * OS1_S1 + 10) -
                                       p_over_q * *(b + 276 * OS1_S1 + 10);
            *(b + 210 * OS1_S1 + 23) = prefactor_x * *(b + 210 * OS1_S1 + 13) -
                                       p_over_q * *(b + 265 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 210 * OS1_S1 + 7);
            *(b + 210 * OS1_S1 + 24) = prefactor_z * *(b + 210 * OS1_S1 + 11) -
                                       p_over_q * *(b + 276 * OS1_S1 + 11);
            *(b + 210 * OS1_S1 + 25) = prefactor_z * *(b + 210 * OS1_S1 + 12) -
                                       p_over_q * *(b + 276 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 210 * OS1_S1 + 4);
            *(b + 210 * OS1_S1 + 26) = prefactor_x * *(b + 210 * OS1_S1 + 16) -
                                       p_over_q * *(b + 265 * OS1_S1 + 16);
            *(b + 210 * OS1_S1 + 27) = prefactor_z * *(b + 210 * OS1_S1 + 13) -
                                       p_over_q * *(b + 276 * OS1_S1 + 13);
            *(b + 210 * OS1_S1 + 28) = prefactor_x * *(b + 210 * OS1_S1 + 18) -
                                       p_over_q * *(b + 265 * OS1_S1 + 18);
            *(b + 210 * OS1_S1 + 29) = prefactor_x * *(b + 210 * OS1_S1 + 19) -
                                       p_over_q * *(b + 265 * OS1_S1 + 19);
            *(b + 210 * OS1_S1 + 30) =
                prefactor_y * *(b + 210 * OS1_S1 + 16) -
                p_over_q * *(b + 275 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 210 * OS1_S1 + 7);
            *(b + 210 * OS1_S1 + 31) = prefactor_z * *(b + 210 * OS1_S1 + 16) -
                                       p_over_q * *(b + 276 * OS1_S1 + 16);
            *(b + 210 * OS1_S1 + 32) = prefactor_z * *(b + 210 * OS1_S1 + 17) -
                                       p_over_q * *(b + 276 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 210 * OS1_S1 + 7);
            *(b + 210 * OS1_S1 + 33) =
                prefactor_y * *(b + 210 * OS1_S1 + 19) -
                p_over_q * *(b + 275 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 19);
            *(b + 210 * OS1_S1 + 34) =
                prefactor_z * *(b + 210 * OS1_S1 + 19) -
                p_over_q * *(b + 276 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 210 * OS1_S1 + 9);
            *(b + 211 * OS1_S1 + 20) =
                prefactor_x * *(b + 211 * OS1_S1 + 10) -
                p_over_q * *(b + 266 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 211 * OS1_S1 + 4);
            *(b + 211 * OS1_S1 + 21) =
                prefactor_y * *(b + 211 * OS1_S1 + 10) -
                p_over_q * *(b + 276 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 10);
            *(b + 211 * OS1_S1 + 22) =
                prefactor_z * *(b + 211 * OS1_S1 + 10) -
                p_over_q * *(b + 277 * OS1_S1 + 10) +
                one_over_two_q * *(b + 156 * OS1_S1 + 10);
            *(b + 211 * OS1_S1 + 23) = prefactor_x * *(b + 211 * OS1_S1 + 13) -
                                       p_over_q * *(b + 266 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 211 * OS1_S1 + 7);
            *(b + 211 * OS1_S1 + 24) =
                prefactor_z * *(b + 211 * OS1_S1 + 11) -
                p_over_q * *(b + 277 * OS1_S1 + 11) +
                one_over_two_q * *(b + 156 * OS1_S1 + 11);
            *(b + 211 * OS1_S1 + 25) = prefactor_x * *(b + 211 * OS1_S1 + 15) -
                                       p_over_q * *(b + 266 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 211 * OS1_S1 + 9);
            *(b + 211 * OS1_S1 + 26) = prefactor_x * *(b + 211 * OS1_S1 + 16) -
                                       p_over_q * *(b + 266 * OS1_S1 + 16);
            *(b + 211 * OS1_S1 + 27) = prefactor_x * *(b + 211 * OS1_S1 + 17) -
                                       p_over_q * *(b + 266 * OS1_S1 + 17);
            *(b + 211 * OS1_S1 + 28) = prefactor_x * *(b + 211 * OS1_S1 + 18) -
                                       p_over_q * *(b + 266 * OS1_S1 + 18);
            *(b + 211 * OS1_S1 + 29) = prefactor_x * *(b + 211 * OS1_S1 + 19) -
                                       p_over_q * *(b + 266 * OS1_S1 + 19);
            *(b + 211 * OS1_S1 + 30) =
                prefactor_y * *(b + 211 * OS1_S1 + 16) -
                p_over_q * *(b + 276 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 211 * OS1_S1 + 7);
            *(b + 211 * OS1_S1 + 31) =
                prefactor_z * *(b + 211 * OS1_S1 + 16) -
                p_over_q * *(b + 277 * OS1_S1 + 16) +
                one_over_two_q * *(b + 156 * OS1_S1 + 16);
            *(b + 211 * OS1_S1 + 32) =
                prefactor_z * *(b + 211 * OS1_S1 + 17) -
                p_over_q * *(b + 277 * OS1_S1 + 17) +
                one_over_two_q * *(b + 156 * OS1_S1 + 17) +
                one_over_two_q * *(b + 211 * OS1_S1 + 7);
            *(b + 211 * OS1_S1 + 33) =
                prefactor_y * *(b + 211 * OS1_S1 + 19) -
                p_over_q * *(b + 276 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 19);
            *(b + 211 * OS1_S1 + 34) =
                prefactor_z * *(b + 211 * OS1_S1 + 19) -
                p_over_q * *(b + 277 * OS1_S1 + 19) +
                one_over_two_q * *(b + 156 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 211 * OS1_S1 + 9);
            *(b + 212 * OS1_S1 + 20) =
                prefactor_x * *(b + 212 * OS1_S1 + 10) -
                p_over_q * *(b + 267 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 4);
            *(b + 212 * OS1_S1 + 21) =
                prefactor_y * *(b + 212 * OS1_S1 + 10) -
                p_over_q * *(b + 277 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 10);
            *(b + 212 * OS1_S1 + 22) =
                prefactor_z * *(b + 212 * OS1_S1 + 10) -
                p_over_q * *(b + 278 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 10);
            *(b + 212 * OS1_S1 + 23) = prefactor_x * *(b + 212 * OS1_S1 + 13) -
                                       p_over_q * *(b + 267 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 212 * OS1_S1 + 7);
            *(b + 212 * OS1_S1 + 24) =
                prefactor_z * *(b + 212 * OS1_S1 + 11) -
                p_over_q * *(b + 278 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 11);
            *(b + 212 * OS1_S1 + 25) = prefactor_x * *(b + 212 * OS1_S1 + 15) -
                                       p_over_q * *(b + 267 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 212 * OS1_S1 + 9);
            *(b + 212 * OS1_S1 + 26) = prefactor_x * *(b + 212 * OS1_S1 + 16) -
                                       p_over_q * *(b + 267 * OS1_S1 + 16);
            *(b + 212 * OS1_S1 + 27) = prefactor_x * *(b + 212 * OS1_S1 + 17) -
                                       p_over_q * *(b + 267 * OS1_S1 + 17);
            *(b + 212 * OS1_S1 + 28) = prefactor_x * *(b + 212 * OS1_S1 + 18) -
                                       p_over_q * *(b + 267 * OS1_S1 + 18);
            *(b + 212 * OS1_S1 + 29) = prefactor_x * *(b + 212 * OS1_S1 + 19) -
                                       p_over_q * *(b + 267 * OS1_S1 + 19);
            *(b + 212 * OS1_S1 + 30) =
                prefactor_y * *(b + 212 * OS1_S1 + 16) -
                p_over_q * *(b + 277 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 7);
            *(b + 212 * OS1_S1 + 31) =
                prefactor_z * *(b + 212 * OS1_S1 + 16) -
                p_over_q * *(b + 278 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 16);
            *(b + 212 * OS1_S1 + 32) =
                prefactor_z * *(b + 212 * OS1_S1 + 17) -
                p_over_q * *(b + 278 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 17) +
                one_over_two_q * *(b + 212 * OS1_S1 + 7);
            *(b + 212 * OS1_S1 + 33) =
                prefactor_y * *(b + 212 * OS1_S1 + 19) -
                p_over_q * *(b + 277 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 19);
            *(b + 212 * OS1_S1 + 34) =
                prefactor_z * *(b + 212 * OS1_S1 + 19) -
                p_over_q * *(b + 278 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 9);
            *(b + 213 * OS1_S1 + 20) =
                prefactor_x * *(b + 213 * OS1_S1 + 10) -
                p_over_q * *(b + 268 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 213 * OS1_S1 + 4);
            *(b + 213 * OS1_S1 + 21) =
                prefactor_y * *(b + 213 * OS1_S1 + 10) -
                p_over_q * *(b + 278 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 10);
            *(b + 213 * OS1_S1 + 22) =
                prefactor_z * *(b + 213 * OS1_S1 + 10) -
                p_over_q * *(b + 279 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 10);
            *(b + 213 * OS1_S1 + 23) = prefactor_x * *(b + 213 * OS1_S1 + 13) -
                                       p_over_q * *(b + 268 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 213 * OS1_S1 + 7);
            *(b + 213 * OS1_S1 + 24) =
                prefactor_z * *(b + 213 * OS1_S1 + 11) -
                p_over_q * *(b + 279 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 11);
            *(b + 213 * OS1_S1 + 25) = prefactor_x * *(b + 213 * OS1_S1 + 15) -
                                       p_over_q * *(b + 268 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 213 * OS1_S1 + 9);
            *(b + 213 * OS1_S1 + 26) = prefactor_x * *(b + 213 * OS1_S1 + 16) -
                                       p_over_q * *(b + 268 * OS1_S1 + 16);
            *(b + 213 * OS1_S1 + 27) = prefactor_x * *(b + 213 * OS1_S1 + 17) -
                                       p_over_q * *(b + 268 * OS1_S1 + 17);
            *(b + 213 * OS1_S1 + 28) = prefactor_x * *(b + 213 * OS1_S1 + 18) -
                                       p_over_q * *(b + 268 * OS1_S1 + 18);
            *(b + 213 * OS1_S1 + 29) = prefactor_x * *(b + 213 * OS1_S1 + 19) -
                                       p_over_q * *(b + 268 * OS1_S1 + 19);
            *(b + 213 * OS1_S1 + 30) =
                prefactor_y * *(b + 213 * OS1_S1 + 16) -
                p_over_q * *(b + 278 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 213 * OS1_S1 + 7);
            *(b + 213 * OS1_S1 + 31) =
                prefactor_z * *(b + 213 * OS1_S1 + 16) -
                p_over_q * *(b + 279 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 16);
            *(b + 213 * OS1_S1 + 32) =
                prefactor_z * *(b + 213 * OS1_S1 + 17) -
                p_over_q * *(b + 279 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 17) +
                one_over_two_q * *(b + 213 * OS1_S1 + 7);
            *(b + 213 * OS1_S1 + 33) =
                prefactor_y * *(b + 213 * OS1_S1 + 19) -
                p_over_q * *(b + 278 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 19);
            *(b + 213 * OS1_S1 + 34) =
                prefactor_z * *(b + 213 * OS1_S1 + 19) -
                p_over_q * *(b + 279 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 213 * OS1_S1 + 9);
            *(b + 214 * OS1_S1 + 20) =
                prefactor_x * *(b + 214 * OS1_S1 + 10) -
                p_over_q * *(b + 269 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 214 * OS1_S1 + 4);
            *(b + 214 * OS1_S1 + 21) =
                prefactor_y * *(b + 214 * OS1_S1 + 10) -
                p_over_q * *(b + 279 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 10);
            *(b + 214 * OS1_S1 + 22) =
                prefactor_z * *(b + 214 * OS1_S1 + 10) -
                p_over_q * *(b + 280 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 10);
            *(b + 214 * OS1_S1 + 23) = prefactor_x * *(b + 214 * OS1_S1 + 13) -
                                       p_over_q * *(b + 269 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 214 * OS1_S1 + 7);
            *(b + 214 * OS1_S1 + 24) =
                prefactor_z * *(b + 214 * OS1_S1 + 11) -
                p_over_q * *(b + 280 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 11);
            *(b + 214 * OS1_S1 + 25) = prefactor_x * *(b + 214 * OS1_S1 + 15) -
                                       p_over_q * *(b + 269 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 214 * OS1_S1 + 9);
            *(b + 214 * OS1_S1 + 26) = prefactor_x * *(b + 214 * OS1_S1 + 16) -
                                       p_over_q * *(b + 269 * OS1_S1 + 16);
            *(b + 214 * OS1_S1 + 27) = prefactor_x * *(b + 214 * OS1_S1 + 17) -
                                       p_over_q * *(b + 269 * OS1_S1 + 17);
            *(b + 214 * OS1_S1 + 28) = prefactor_x * *(b + 214 * OS1_S1 + 18) -
                                       p_over_q * *(b + 269 * OS1_S1 + 18);
            *(b + 214 * OS1_S1 + 29) = prefactor_x * *(b + 214 * OS1_S1 + 19) -
                                       p_over_q * *(b + 269 * OS1_S1 + 19);
            *(b + 214 * OS1_S1 + 30) =
                prefactor_y * *(b + 214 * OS1_S1 + 16) -
                p_over_q * *(b + 279 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 214 * OS1_S1 + 7);
            *(b + 214 * OS1_S1 + 31) =
                prefactor_z * *(b + 214 * OS1_S1 + 16) -
                p_over_q * *(b + 280 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 16);
            *(b + 214 * OS1_S1 + 32) =
                prefactor_z * *(b + 214 * OS1_S1 + 17) -
                p_over_q * *(b + 280 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 17) +
                one_over_two_q * *(b + 214 * OS1_S1 + 7);
            *(b + 214 * OS1_S1 + 33) =
                prefactor_y * *(b + 214 * OS1_S1 + 19) -
                p_over_q * *(b + 279 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 19);
            *(b + 214 * OS1_S1 + 34) =
                prefactor_z * *(b + 214 * OS1_S1 + 19) -
                p_over_q * *(b + 280 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 214 * OS1_S1 + 9);
            *(b + 215 * OS1_S1 + 20) =
                prefactor_x * *(b + 215 * OS1_S1 + 10) -
                p_over_q * *(b + 270 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 215 * OS1_S1 + 4);
            *(b + 215 * OS1_S1 + 21) =
                prefactor_y * *(b + 215 * OS1_S1 + 10) -
                p_over_q * *(b + 280 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 10);
            *(b + 215 * OS1_S1 + 22) =
                prefactor_z * *(b + 215 * OS1_S1 + 10) -
                p_over_q * *(b + 281 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 10);
            *(b + 215 * OS1_S1 + 23) = prefactor_x * *(b + 215 * OS1_S1 + 13) -
                                       p_over_q * *(b + 270 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 215 * OS1_S1 + 7);
            *(b + 215 * OS1_S1 + 24) =
                prefactor_y * *(b + 215 * OS1_S1 + 12) -
                p_over_q * *(b + 280 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 12);
            *(b + 215 * OS1_S1 + 25) = prefactor_x * *(b + 215 * OS1_S1 + 15) -
                                       p_over_q * *(b + 270 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 215 * OS1_S1 + 9);
            *(b + 215 * OS1_S1 + 26) = prefactor_x * *(b + 215 * OS1_S1 + 16) -
                                       p_over_q * *(b + 270 * OS1_S1 + 16);
            *(b + 215 * OS1_S1 + 27) = prefactor_x * *(b + 215 * OS1_S1 + 17) -
                                       p_over_q * *(b + 270 * OS1_S1 + 17);
            *(b + 215 * OS1_S1 + 28) = prefactor_x * *(b + 215 * OS1_S1 + 18) -
                                       p_over_q * *(b + 270 * OS1_S1 + 18);
            *(b + 215 * OS1_S1 + 29) = prefactor_x * *(b + 215 * OS1_S1 + 19) -
                                       p_over_q * *(b + 270 * OS1_S1 + 19);
            *(b + 215 * OS1_S1 + 30) =
                prefactor_y * *(b + 215 * OS1_S1 + 16) -
                p_over_q * *(b + 280 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 215 * OS1_S1 + 7);
            *(b + 215 * OS1_S1 + 31) =
                prefactor_z * *(b + 215 * OS1_S1 + 16) -
                p_over_q * *(b + 281 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 16);
            *(b + 215 * OS1_S1 + 32) =
                prefactor_y * *(b + 215 * OS1_S1 + 18) -
                p_over_q * *(b + 280 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 18) +
                one_over_two_q * *(b + 215 * OS1_S1 + 9);
            *(b + 215 * OS1_S1 + 33) =
                prefactor_y * *(b + 215 * OS1_S1 + 19) -
                p_over_q * *(b + 280 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 19);
            *(b + 215 * OS1_S1 + 34) =
                prefactor_z * *(b + 215 * OS1_S1 + 19) -
                p_over_q * *(b + 281 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 215 * OS1_S1 + 9);
            *(b + 216 * OS1_S1 + 20) =
                prefactor_x * *(b + 216 * OS1_S1 + 10) -
                p_over_q * *(b + 271 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 216 * OS1_S1 + 4);
            *(b + 216 * OS1_S1 + 21) =
                prefactor_y * *(b + 216 * OS1_S1 + 10) -
                p_over_q * *(b + 281 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 10);
            *(b + 216 * OS1_S1 + 22) =
                prefactor_z * *(b + 216 * OS1_S1 + 10) -
                p_over_q * *(b + 282 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 10);
            *(b + 216 * OS1_S1 + 23) = prefactor_x * *(b + 216 * OS1_S1 + 13) -
                                       p_over_q * *(b + 271 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 216 * OS1_S1 + 7);
            *(b + 216 * OS1_S1 + 24) =
                prefactor_y * *(b + 216 * OS1_S1 + 12) -
                p_over_q * *(b + 281 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 12);
            *(b + 216 * OS1_S1 + 25) = prefactor_x * *(b + 216 * OS1_S1 + 15) -
                                       p_over_q * *(b + 271 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 216 * OS1_S1 + 9);
            *(b + 216 * OS1_S1 + 26) = prefactor_x * *(b + 216 * OS1_S1 + 16) -
                                       p_over_q * *(b + 271 * OS1_S1 + 16);
            *(b + 216 * OS1_S1 + 27) = prefactor_x * *(b + 216 * OS1_S1 + 17) -
                                       p_over_q * *(b + 271 * OS1_S1 + 17);
            *(b + 216 * OS1_S1 + 28) = prefactor_x * *(b + 216 * OS1_S1 + 18) -
                                       p_over_q * *(b + 271 * OS1_S1 + 18);
            *(b + 216 * OS1_S1 + 29) = prefactor_x * *(b + 216 * OS1_S1 + 19) -
                                       p_over_q * *(b + 271 * OS1_S1 + 19);
            *(b + 216 * OS1_S1 + 30) =
                prefactor_y * *(b + 216 * OS1_S1 + 16) -
                p_over_q * *(b + 281 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 216 * OS1_S1 + 7);
            *(b + 216 * OS1_S1 + 31) =
                prefactor_z * *(b + 216 * OS1_S1 + 16) -
                p_over_q * *(b + 282 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 16);
            *(b + 216 * OS1_S1 + 32) =
                prefactor_y * *(b + 216 * OS1_S1 + 18) -
                p_over_q * *(b + 281 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 18) +
                one_over_two_q * *(b + 216 * OS1_S1 + 9);
            *(b + 216 * OS1_S1 + 33) =
                prefactor_y * *(b + 216 * OS1_S1 + 19) -
                p_over_q * *(b + 281 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 19);
            *(b + 216 * OS1_S1 + 34) =
                prefactor_z * *(b + 216 * OS1_S1 + 19) -
                p_over_q * *(b + 282 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 216 * OS1_S1 + 9);
            *(b + 217 * OS1_S1 + 20) =
                prefactor_x * *(b + 217 * OS1_S1 + 10) -
                p_over_q * *(b + 272 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 4);
            *(b + 217 * OS1_S1 + 21) =
                prefactor_y * *(b + 217 * OS1_S1 + 10) -
                p_over_q * *(b + 282 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 10);
            *(b + 217 * OS1_S1 + 22) =
                prefactor_z * *(b + 217 * OS1_S1 + 10) -
                p_over_q * *(b + 283 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 10);
            *(b + 217 * OS1_S1 + 23) = prefactor_x * *(b + 217 * OS1_S1 + 13) -
                                       p_over_q * *(b + 272 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 217 * OS1_S1 + 7);
            *(b + 217 * OS1_S1 + 24) =
                prefactor_y * *(b + 217 * OS1_S1 + 12) -
                p_over_q * *(b + 282 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 12);
            *(b + 217 * OS1_S1 + 25) = prefactor_x * *(b + 217 * OS1_S1 + 15) -
                                       p_over_q * *(b + 272 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 217 * OS1_S1 + 9);
            *(b + 217 * OS1_S1 + 26) = prefactor_x * *(b + 217 * OS1_S1 + 16) -
                                       p_over_q * *(b + 272 * OS1_S1 + 16);
            *(b + 217 * OS1_S1 + 27) = prefactor_x * *(b + 217 * OS1_S1 + 17) -
                                       p_over_q * *(b + 272 * OS1_S1 + 17);
            *(b + 217 * OS1_S1 + 28) = prefactor_x * *(b + 217 * OS1_S1 + 18) -
                                       p_over_q * *(b + 272 * OS1_S1 + 18);
            *(b + 217 * OS1_S1 + 29) = prefactor_x * *(b + 217 * OS1_S1 + 19) -
                                       p_over_q * *(b + 272 * OS1_S1 + 19);
            *(b + 217 * OS1_S1 + 30) =
                prefactor_y * *(b + 217 * OS1_S1 + 16) -
                p_over_q * *(b + 282 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 7);
            *(b + 217 * OS1_S1 + 31) =
                prefactor_z * *(b + 217 * OS1_S1 + 16) -
                p_over_q * *(b + 283 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 16);
            *(b + 217 * OS1_S1 + 32) =
                prefactor_y * *(b + 217 * OS1_S1 + 18) -
                p_over_q * *(b + 282 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 18) +
                one_over_two_q * *(b + 217 * OS1_S1 + 9);
            *(b + 217 * OS1_S1 + 33) =
                prefactor_y * *(b + 217 * OS1_S1 + 19) -
                p_over_q * *(b + 282 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 19);
            *(b + 217 * OS1_S1 + 34) =
                prefactor_z * *(b + 217 * OS1_S1 + 19) -
                p_over_q * *(b + 283 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 9);
            *(b + 218 * OS1_S1 + 20) =
                prefactor_x * *(b + 218 * OS1_S1 + 10) -
                p_over_q * *(b + 273 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 218 * OS1_S1 + 4);
            *(b + 218 * OS1_S1 + 21) =
                prefactor_y * *(b + 218 * OS1_S1 + 10) -
                p_over_q * *(b + 283 * OS1_S1 + 10) +
                one_over_two_q * *(b + 164 * OS1_S1 + 10);
            *(b + 218 * OS1_S1 + 22) =
                prefactor_z * *(b + 218 * OS1_S1 + 10) -
                p_over_q * *(b + 284 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 10);
            *(b + 218 * OS1_S1 + 23) = prefactor_x * *(b + 218 * OS1_S1 + 13) -
                                       p_over_q * *(b + 273 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 218 * OS1_S1 + 7);
            *(b + 218 * OS1_S1 + 24) =
                prefactor_y * *(b + 218 * OS1_S1 + 12) -
                p_over_q * *(b + 283 * OS1_S1 + 12) +
                one_over_two_q * *(b + 164 * OS1_S1 + 12);
            *(b + 218 * OS1_S1 + 25) = prefactor_x * *(b + 218 * OS1_S1 + 15) -
                                       p_over_q * *(b + 273 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 218 * OS1_S1 + 9);
            *(b + 218 * OS1_S1 + 26) = prefactor_x * *(b + 218 * OS1_S1 + 16) -
                                       p_over_q * *(b + 273 * OS1_S1 + 16);
            *(b + 218 * OS1_S1 + 27) = prefactor_x * *(b + 218 * OS1_S1 + 17) -
                                       p_over_q * *(b + 273 * OS1_S1 + 17);
            *(b + 218 * OS1_S1 + 28) = prefactor_x * *(b + 218 * OS1_S1 + 18) -
                                       p_over_q * *(b + 273 * OS1_S1 + 18);
            *(b + 218 * OS1_S1 + 29) = prefactor_x * *(b + 218 * OS1_S1 + 19) -
                                       p_over_q * *(b + 273 * OS1_S1 + 19);
            *(b + 218 * OS1_S1 + 30) =
                prefactor_y * *(b + 218 * OS1_S1 + 16) -
                p_over_q * *(b + 283 * OS1_S1 + 16) +
                one_over_two_q * *(b + 164 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 218 * OS1_S1 + 7);
            *(b + 218 * OS1_S1 + 31) =
                prefactor_z * *(b + 218 * OS1_S1 + 16) -
                p_over_q * *(b + 284 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 16);
            *(b + 218 * OS1_S1 + 32) =
                prefactor_y * *(b + 218 * OS1_S1 + 18) -
                p_over_q * *(b + 283 * OS1_S1 + 18) +
                one_over_two_q * *(b + 164 * OS1_S1 + 18) +
                one_over_two_q * *(b + 218 * OS1_S1 + 9);
            *(b + 218 * OS1_S1 + 33) =
                prefactor_y * *(b + 218 * OS1_S1 + 19) -
                p_over_q * *(b + 283 * OS1_S1 + 19) +
                one_over_two_q * *(b + 164 * OS1_S1 + 19);
            *(b + 218 * OS1_S1 + 34) =
                prefactor_z * *(b + 218 * OS1_S1 + 19) -
                p_over_q * *(b + 284 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 218 * OS1_S1 + 9);
            *(b + 219 * OS1_S1 + 20) =
                prefactor_x * *(b + 219 * OS1_S1 + 10) -
                p_over_q * *(b + 274 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 219 * OS1_S1 + 4);
            *(b + 219 * OS1_S1 + 21) = prefactor_y * *(b + 219 * OS1_S1 + 10) -
                                       p_over_q * *(b + 284 * OS1_S1 + 10);
            *(b + 219 * OS1_S1 + 22) =
                prefactor_z * *(b + 219 * OS1_S1 + 10) -
                p_over_q * *(b + 285 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 10);
            *(b + 219 * OS1_S1 + 23) = prefactor_y * *(b + 219 * OS1_S1 + 11) -
                                       p_over_q * *(b + 284 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 219 * OS1_S1 + 4);
            *(b + 219 * OS1_S1 + 24) = prefactor_y * *(b + 219 * OS1_S1 + 12) -
                                       p_over_q * *(b + 284 * OS1_S1 + 12);
            *(b + 219 * OS1_S1 + 25) = prefactor_x * *(b + 219 * OS1_S1 + 15) -
                                       p_over_q * *(b + 274 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 219 * OS1_S1 + 9);
            *(b + 219 * OS1_S1 + 26) = prefactor_x * *(b + 219 * OS1_S1 + 16) -
                                       p_over_q * *(b + 274 * OS1_S1 + 16);
            *(b + 219 * OS1_S1 + 27) = prefactor_x * *(b + 219 * OS1_S1 + 17) -
                                       p_over_q * *(b + 274 * OS1_S1 + 17);
            *(b + 219 * OS1_S1 + 28) = prefactor_y * *(b + 219 * OS1_S1 + 15) -
                                       p_over_q * *(b + 284 * OS1_S1 + 15);
            *(b + 219 * OS1_S1 + 29) = prefactor_x * *(b + 219 * OS1_S1 + 19) -
                                       p_over_q * *(b + 274 * OS1_S1 + 19);
            *(b + 219 * OS1_S1 + 30) =
                prefactor_y * *(b + 219 * OS1_S1 + 16) -
                p_over_q * *(b + 284 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 219 * OS1_S1 + 7);
            *(b + 219 * OS1_S1 + 31) =
                prefactor_z * *(b + 219 * OS1_S1 + 16) -
                p_over_q * *(b + 285 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 16);
            *(b + 219 * OS1_S1 + 32) = prefactor_y * *(b + 219 * OS1_S1 + 18) -
                                       p_over_q * *(b + 284 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 219 * OS1_S1 + 9);
            *(b + 219 * OS1_S1 + 33) = prefactor_y * *(b + 219 * OS1_S1 + 19) -
                                       p_over_q * *(b + 284 * OS1_S1 + 19);
            *(b + 219 * OS1_S1 + 34) =
                prefactor_z * *(b + 219 * OS1_S1 + 19) -
                p_over_q * *(b + 285 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 219 * OS1_S1 + 9);
            return;
        }

        void transfer_10_4(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 220 * OS1_S1 + 20) =
                prefactor_x * *(b + 220 * OS1_S1 + 10) -
                p_over_q * *(b + 286 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 220 * OS1_S1 + 4);
            *(b + 220 * OS1_S1 + 21) = prefactor_y * *(b + 220 * OS1_S1 + 10) -
                                       p_over_q * *(b + 287 * OS1_S1 + 10);
            *(b + 220 * OS1_S1 + 22) = prefactor_z * *(b + 220 * OS1_S1 + 10) -
                                       p_over_q * *(b + 288 * OS1_S1 + 10);
            *(b + 220 * OS1_S1 + 23) = prefactor_y * *(b + 220 * OS1_S1 + 11) -
                                       p_over_q * *(b + 287 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 220 * OS1_S1 + 4);
            *(b + 220 * OS1_S1 + 24) = prefactor_z * *(b + 220 * OS1_S1 + 11) -
                                       p_over_q * *(b + 288 * OS1_S1 + 11);
            *(b + 220 * OS1_S1 + 25) = prefactor_z * *(b + 220 * OS1_S1 + 12) -
                                       p_over_q * *(b + 288 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 220 * OS1_S1 + 4);
            *(b + 220 * OS1_S1 + 26) =
                prefactor_x * *(b + 220 * OS1_S1 + 16) -
                p_over_q * *(b + 286 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 16);
            *(b + 220 * OS1_S1 + 27) = prefactor_z * *(b + 220 * OS1_S1 + 13) -
                                       p_over_q * *(b + 288 * OS1_S1 + 13);
            *(b + 220 * OS1_S1 + 28) = prefactor_y * *(b + 220 * OS1_S1 + 15) -
                                       p_over_q * *(b + 287 * OS1_S1 + 15);
            *(b + 220 * OS1_S1 + 29) =
                prefactor_x * *(b + 220 * OS1_S1 + 19) -
                p_over_q * *(b + 286 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 19);
            *(b + 220 * OS1_S1 + 30) =
                prefactor_y * *(b + 220 * OS1_S1 + 16) -
                p_over_q * *(b + 287 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 220 * OS1_S1 + 7);
            *(b + 220 * OS1_S1 + 31) = prefactor_z * *(b + 220 * OS1_S1 + 16) -
                                       p_over_q * *(b + 288 * OS1_S1 + 16);
            *(b + 220 * OS1_S1 + 32) = prefactor_z * *(b + 220 * OS1_S1 + 17) -
                                       p_over_q * *(b + 288 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 220 * OS1_S1 + 7);
            *(b + 220 * OS1_S1 + 33) = prefactor_y * *(b + 220 * OS1_S1 + 19) -
                                       p_over_q * *(b + 287 * OS1_S1 + 19);
            *(b + 220 * OS1_S1 + 34) =
                prefactor_z * *(b + 220 * OS1_S1 + 19) -
                p_over_q * *(b + 288 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 220 * OS1_S1 + 9);
            *(b + 221 * OS1_S1 + 20) =
                prefactor_x * *(b + 221 * OS1_S1 + 10) -
                p_over_q * *(b + 287 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 221 * OS1_S1 + 4);
            *(b + 221 * OS1_S1 + 21) =
                prefactor_y * *(b + 221 * OS1_S1 + 10) -
                p_over_q * *(b + 289 * OS1_S1 + 10) +
                one_over_two_q * *(b + 165 * OS1_S1 + 10);
            *(b + 221 * OS1_S1 + 22) = prefactor_z * *(b + 221 * OS1_S1 + 10) -
                                       p_over_q * *(b + 290 * OS1_S1 + 10);
            *(b + 221 * OS1_S1 + 23) =
                prefactor_y * *(b + 221 * OS1_S1 + 11) -
                p_over_q * *(b + 289 * OS1_S1 + 11) +
                one_over_two_q * *(b + 165 * OS1_S1 + 11) +
                one_over_two_q * *(b + 221 * OS1_S1 + 4);
            *(b + 221 * OS1_S1 + 24) = prefactor_z * *(b + 221 * OS1_S1 + 11) -
                                       p_over_q * *(b + 290 * OS1_S1 + 11);
            *(b + 221 * OS1_S1 + 25) = prefactor_z * *(b + 221 * OS1_S1 + 12) -
                                       p_over_q * *(b + 290 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 221 * OS1_S1 + 4);
            *(b + 221 * OS1_S1 + 26) =
                prefactor_x * *(b + 221 * OS1_S1 + 16) -
                p_over_q * *(b + 287 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 16);
            *(b + 221 * OS1_S1 + 27) = prefactor_z * *(b + 221 * OS1_S1 + 13) -
                                       p_over_q * *(b + 290 * OS1_S1 + 13);
            *(b + 221 * OS1_S1 + 28) =
                prefactor_y * *(b + 221 * OS1_S1 + 15) -
                p_over_q * *(b + 289 * OS1_S1 + 15) +
                one_over_two_q * *(b + 165 * OS1_S1 + 15);
            *(b + 221 * OS1_S1 + 29) =
                prefactor_x * *(b + 221 * OS1_S1 + 19) -
                p_over_q * *(b + 287 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 19);
            *(b + 221 * OS1_S1 + 30) =
                prefactor_y * *(b + 221 * OS1_S1 + 16) -
                p_over_q * *(b + 289 * OS1_S1 + 16) +
                one_over_two_q * *(b + 165 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 221 * OS1_S1 + 7);
            *(b + 221 * OS1_S1 + 31) = prefactor_z * *(b + 221 * OS1_S1 + 16) -
                                       p_over_q * *(b + 290 * OS1_S1 + 16);
            *(b + 221 * OS1_S1 + 32) = prefactor_z * *(b + 221 * OS1_S1 + 17) -
                                       p_over_q * *(b + 290 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 221 * OS1_S1 + 7);
            *(b + 221 * OS1_S1 + 33) =
                prefactor_y * *(b + 221 * OS1_S1 + 19) -
                p_over_q * *(b + 289 * OS1_S1 + 19) +
                one_over_two_q * *(b + 165 * OS1_S1 + 19);
            *(b + 221 * OS1_S1 + 34) =
                prefactor_z * *(b + 221 * OS1_S1 + 19) -
                p_over_q * *(b + 290 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 221 * OS1_S1 + 9);
            *(b + 222 * OS1_S1 + 20) =
                prefactor_x * *(b + 222 * OS1_S1 + 10) -
                p_over_q * *(b + 288 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 222 * OS1_S1 + 4);
            *(b + 222 * OS1_S1 + 21) = prefactor_y * *(b + 222 * OS1_S1 + 10) -
                                       p_over_q * *(b + 290 * OS1_S1 + 10);
            *(b + 222 * OS1_S1 + 22) =
                prefactor_z * *(b + 222 * OS1_S1 + 10) -
                p_over_q * *(b + 291 * OS1_S1 + 10) +
                one_over_two_q * *(b + 165 * OS1_S1 + 10);
            *(b + 222 * OS1_S1 + 23) = prefactor_y * *(b + 222 * OS1_S1 + 11) -
                                       p_over_q * *(b + 290 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 222 * OS1_S1 + 4);
            *(b + 222 * OS1_S1 + 24) = prefactor_y * *(b + 222 * OS1_S1 + 12) -
                                       p_over_q * *(b + 290 * OS1_S1 + 12);
            *(b + 222 * OS1_S1 + 25) =
                prefactor_z * *(b + 222 * OS1_S1 + 12) -
                p_over_q * *(b + 291 * OS1_S1 + 12) +
                one_over_two_q * *(b + 165 * OS1_S1 + 12) +
                one_over_two_q * *(b + 222 * OS1_S1 + 4);
            *(b + 222 * OS1_S1 + 26) =
                prefactor_x * *(b + 222 * OS1_S1 + 16) -
                p_over_q * *(b + 288 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 16);
            *(b + 222 * OS1_S1 + 27) =
                prefactor_z * *(b + 222 * OS1_S1 + 13) -
                p_over_q * *(b + 291 * OS1_S1 + 13) +
                one_over_two_q * *(b + 165 * OS1_S1 + 13);
            *(b + 222 * OS1_S1 + 28) = prefactor_y * *(b + 222 * OS1_S1 + 15) -
                                       p_over_q * *(b + 290 * OS1_S1 + 15);
            *(b + 222 * OS1_S1 + 29) =
                prefactor_x * *(b + 222 * OS1_S1 + 19) -
                p_over_q * *(b + 288 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 19);
            *(b + 222 * OS1_S1 + 30) =
                prefactor_y * *(b + 222 * OS1_S1 + 16) -
                p_over_q * *(b + 290 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 222 * OS1_S1 + 7);
            *(b + 222 * OS1_S1 + 31) =
                prefactor_z * *(b + 222 * OS1_S1 + 16) -
                p_over_q * *(b + 291 * OS1_S1 + 16) +
                one_over_two_q * *(b + 165 * OS1_S1 + 16);
            *(b + 222 * OS1_S1 + 32) = prefactor_y * *(b + 222 * OS1_S1 + 18) -
                                       p_over_q * *(b + 290 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 222 * OS1_S1 + 9);
            *(b + 222 * OS1_S1 + 33) = prefactor_y * *(b + 222 * OS1_S1 + 19) -
                                       p_over_q * *(b + 290 * OS1_S1 + 19);
            *(b + 222 * OS1_S1 + 34) =
                prefactor_z * *(b + 222 * OS1_S1 + 19) -
                p_over_q * *(b + 291 * OS1_S1 + 19) +
                one_over_two_q * *(b + 165 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 222 * OS1_S1 + 9);
            *(b + 223 * OS1_S1 + 20) =
                prefactor_x * *(b + 223 * OS1_S1 + 10) -
                p_over_q * *(b + 289 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 4);
            *(b + 223 * OS1_S1 + 21) =
                prefactor_y * *(b + 223 * OS1_S1 + 10) -
                p_over_q * *(b + 292 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 10);
            *(b + 223 * OS1_S1 + 22) = prefactor_z * *(b + 223 * OS1_S1 + 10) -
                                       p_over_q * *(b + 293 * OS1_S1 + 10);
            *(b + 223 * OS1_S1 + 23) =
                prefactor_y * *(b + 223 * OS1_S1 + 11) -
                p_over_q * *(b + 292 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 11) +
                one_over_two_q * *(b + 223 * OS1_S1 + 4);
            *(b + 223 * OS1_S1 + 24) = prefactor_z * *(b + 223 * OS1_S1 + 11) -
                                       p_over_q * *(b + 293 * OS1_S1 + 11);
            *(b + 223 * OS1_S1 + 25) = prefactor_z * *(b + 223 * OS1_S1 + 12) -
                                       p_over_q * *(b + 293 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 223 * OS1_S1 + 4);
            *(b + 223 * OS1_S1 + 26) =
                prefactor_x * *(b + 223 * OS1_S1 + 16) -
                p_over_q * *(b + 289 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 16);
            *(b + 223 * OS1_S1 + 27) = prefactor_z * *(b + 223 * OS1_S1 + 13) -
                                       p_over_q * *(b + 293 * OS1_S1 + 13);
            *(b + 223 * OS1_S1 + 28) =
                prefactor_y * *(b + 223 * OS1_S1 + 15) -
                p_over_q * *(b + 292 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 15);
            *(b + 223 * OS1_S1 + 29) =
                prefactor_x * *(b + 223 * OS1_S1 + 19) -
                p_over_q * *(b + 289 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 19);
            *(b + 223 * OS1_S1 + 30) =
                prefactor_y * *(b + 223 * OS1_S1 + 16) -
                p_over_q * *(b + 292 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 7);
            *(b + 223 * OS1_S1 + 31) = prefactor_z * *(b + 223 * OS1_S1 + 16) -
                                       p_over_q * *(b + 293 * OS1_S1 + 16);
            *(b + 223 * OS1_S1 + 32) = prefactor_z * *(b + 223 * OS1_S1 + 17) -
                                       p_over_q * *(b + 293 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 223 * OS1_S1 + 7);
            *(b + 223 * OS1_S1 + 33) =
                prefactor_y * *(b + 223 * OS1_S1 + 19) -
                p_over_q * *(b + 292 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 19);
            *(b + 223 * OS1_S1 + 34) =
                prefactor_z * *(b + 223 * OS1_S1 + 19) -
                p_over_q * *(b + 293 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 9);
            *(b + 224 * OS1_S1 + 20) =
                prefactor_x * *(b + 224 * OS1_S1 + 10) -
                p_over_q * *(b + 290 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 224 * OS1_S1 + 4);
            *(b + 224 * OS1_S1 + 21) =
                prefactor_y * *(b + 224 * OS1_S1 + 10) -
                p_over_q * *(b + 293 * OS1_S1 + 10) +
                one_over_two_q * *(b + 167 * OS1_S1 + 10);
            *(b + 224 * OS1_S1 + 22) =
                prefactor_z * *(b + 224 * OS1_S1 + 10) -
                p_over_q * *(b + 294 * OS1_S1 + 10) +
                one_over_two_q * *(b + 166 * OS1_S1 + 10);
            *(b + 224 * OS1_S1 + 23) =
                prefactor_y * *(b + 224 * OS1_S1 + 11) -
                p_over_q * *(b + 293 * OS1_S1 + 11) +
                one_over_two_q * *(b + 167 * OS1_S1 + 11) +
                one_over_two_q * *(b + 224 * OS1_S1 + 4);
            *(b + 224 * OS1_S1 + 24) =
                prefactor_z * *(b + 224 * OS1_S1 + 11) -
                p_over_q * *(b + 294 * OS1_S1 + 11) +
                one_over_two_q * *(b + 166 * OS1_S1 + 11);
            *(b + 224 * OS1_S1 + 25) =
                prefactor_z * *(b + 224 * OS1_S1 + 12) -
                p_over_q * *(b + 294 * OS1_S1 + 12) +
                one_over_two_q * *(b + 166 * OS1_S1 + 12) +
                one_over_two_q * *(b + 224 * OS1_S1 + 4);
            *(b + 224 * OS1_S1 + 26) =
                prefactor_x * *(b + 224 * OS1_S1 + 16) -
                p_over_q * *(b + 290 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 16);
            *(b + 224 * OS1_S1 + 27) =
                prefactor_z * *(b + 224 * OS1_S1 + 13) -
                p_over_q * *(b + 294 * OS1_S1 + 13) +
                one_over_two_q * *(b + 166 * OS1_S1 + 13);
            *(b + 224 * OS1_S1 + 28) =
                prefactor_y * *(b + 224 * OS1_S1 + 15) -
                p_over_q * *(b + 293 * OS1_S1 + 15) +
                one_over_two_q * *(b + 167 * OS1_S1 + 15);
            *(b + 224 * OS1_S1 + 29) =
                prefactor_x * *(b + 224 * OS1_S1 + 19) -
                p_over_q * *(b + 290 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 19);
            *(b + 224 * OS1_S1 + 30) =
                prefactor_y * *(b + 224 * OS1_S1 + 16) -
                p_over_q * *(b + 293 * OS1_S1 + 16) +
                one_over_two_q * *(b + 167 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 224 * OS1_S1 + 7);
            *(b + 224 * OS1_S1 + 31) =
                prefactor_z * *(b + 224 * OS1_S1 + 16) -
                p_over_q * *(b + 294 * OS1_S1 + 16) +
                one_over_two_q * *(b + 166 * OS1_S1 + 16);
            *(b + 224 * OS1_S1 + 32) =
                prefactor_z * *(b + 224 * OS1_S1 + 17) -
                p_over_q * *(b + 294 * OS1_S1 + 17) +
                one_over_two_q * *(b + 166 * OS1_S1 + 17) +
                one_over_two_q * *(b + 224 * OS1_S1 + 7);
            *(b + 224 * OS1_S1 + 33) =
                prefactor_y * *(b + 224 * OS1_S1 + 19) -
                p_over_q * *(b + 293 * OS1_S1 + 19) +
                one_over_two_q * *(b + 167 * OS1_S1 + 19);
            *(b + 224 * OS1_S1 + 34) =
                prefactor_z * *(b + 224 * OS1_S1 + 19) -
                p_over_q * *(b + 294 * OS1_S1 + 19) +
                one_over_two_q * *(b + 166 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 224 * OS1_S1 + 9);
            *(b + 225 * OS1_S1 + 20) =
                prefactor_x * *(b + 225 * OS1_S1 + 10) -
                p_over_q * *(b + 291 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 4);
            *(b + 225 * OS1_S1 + 21) = prefactor_y * *(b + 225 * OS1_S1 + 10) -
                                       p_over_q * *(b + 294 * OS1_S1 + 10);
            *(b + 225 * OS1_S1 + 22) =
                prefactor_z * *(b + 225 * OS1_S1 + 10) -
                p_over_q * *(b + 295 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 10);
            *(b + 225 * OS1_S1 + 23) = prefactor_y * *(b + 225 * OS1_S1 + 11) -
                                       p_over_q * *(b + 294 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 225 * OS1_S1 + 4);
            *(b + 225 * OS1_S1 + 24) = prefactor_y * *(b + 225 * OS1_S1 + 12) -
                                       p_over_q * *(b + 294 * OS1_S1 + 12);
            *(b + 225 * OS1_S1 + 25) =
                prefactor_z * *(b + 225 * OS1_S1 + 12) -
                p_over_q * *(b + 295 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 12) +
                one_over_two_q * *(b + 225 * OS1_S1 + 4);
            *(b + 225 * OS1_S1 + 26) =
                prefactor_x * *(b + 225 * OS1_S1 + 16) -
                p_over_q * *(b + 291 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 16);
            *(b + 225 * OS1_S1 + 27) =
                prefactor_z * *(b + 225 * OS1_S1 + 13) -
                p_over_q * *(b + 295 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 13);
            *(b + 225 * OS1_S1 + 28) = prefactor_y * *(b + 225 * OS1_S1 + 15) -
                                       p_over_q * *(b + 294 * OS1_S1 + 15);
            *(b + 225 * OS1_S1 + 29) =
                prefactor_x * *(b + 225 * OS1_S1 + 19) -
                p_over_q * *(b + 291 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 19);
            *(b + 225 * OS1_S1 + 30) =
                prefactor_y * *(b + 225 * OS1_S1 + 16) -
                p_over_q * *(b + 294 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 7);
            *(b + 225 * OS1_S1 + 31) =
                prefactor_z * *(b + 225 * OS1_S1 + 16) -
                p_over_q * *(b + 295 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 16);
            *(b + 225 * OS1_S1 + 32) = prefactor_y * *(b + 225 * OS1_S1 + 18) -
                                       p_over_q * *(b + 294 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 225 * OS1_S1 + 9);
            *(b + 225 * OS1_S1 + 33) = prefactor_y * *(b + 225 * OS1_S1 + 19) -
                                       p_over_q * *(b + 294 * OS1_S1 + 19);
            *(b + 225 * OS1_S1 + 34) =
                prefactor_z * *(b + 225 * OS1_S1 + 19) -
                p_over_q * *(b + 295 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 9);
            *(b + 226 * OS1_S1 + 20) =
                prefactor_x * *(b + 226 * OS1_S1 + 10) -
                p_over_q * *(b + 292 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 226 * OS1_S1 + 4);
            *(b + 226 * OS1_S1 + 21) =
                prefactor_y * *(b + 226 * OS1_S1 + 10) -
                p_over_q * *(b + 296 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 10);
            *(b + 226 * OS1_S1 + 22) = prefactor_z * *(b + 226 * OS1_S1 + 10) -
                                       p_over_q * *(b + 297 * OS1_S1 + 10);
            *(b + 226 * OS1_S1 + 23) =
                prefactor_y * *(b + 226 * OS1_S1 + 11) -
                p_over_q * *(b + 296 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 11) +
                one_over_two_q * *(b + 226 * OS1_S1 + 4);
            *(b + 226 * OS1_S1 + 24) = prefactor_z * *(b + 226 * OS1_S1 + 11) -
                                       p_over_q * *(b + 297 * OS1_S1 + 11);
            *(b + 226 * OS1_S1 + 25) = prefactor_z * *(b + 226 * OS1_S1 + 12) -
                                       p_over_q * *(b + 297 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 226 * OS1_S1 + 4);
            *(b + 226 * OS1_S1 + 26) =
                prefactor_x * *(b + 226 * OS1_S1 + 16) -
                p_over_q * *(b + 292 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 16);
            *(b + 226 * OS1_S1 + 27) = prefactor_z * *(b + 226 * OS1_S1 + 13) -
                                       p_over_q * *(b + 297 * OS1_S1 + 13);
            *(b + 226 * OS1_S1 + 28) =
                prefactor_y * *(b + 226 * OS1_S1 + 15) -
                p_over_q * *(b + 296 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 15);
            *(b + 226 * OS1_S1 + 29) =
                prefactor_x * *(b + 226 * OS1_S1 + 19) -
                p_over_q * *(b + 292 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 19);
            *(b + 226 * OS1_S1 + 30) =
                prefactor_y * *(b + 226 * OS1_S1 + 16) -
                p_over_q * *(b + 296 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 226 * OS1_S1 + 7);
            *(b + 226 * OS1_S1 + 31) = prefactor_z * *(b + 226 * OS1_S1 + 16) -
                                       p_over_q * *(b + 297 * OS1_S1 + 16);
            *(b + 226 * OS1_S1 + 32) = prefactor_z * *(b + 226 * OS1_S1 + 17) -
                                       p_over_q * *(b + 297 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 226 * OS1_S1 + 7);
            *(b + 226 * OS1_S1 + 33) =
                prefactor_y * *(b + 226 * OS1_S1 + 19) -
                p_over_q * *(b + 296 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 19);
            *(b + 226 * OS1_S1 + 34) =
                prefactor_z * *(b + 226 * OS1_S1 + 19) -
                p_over_q * *(b + 297 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 226 * OS1_S1 + 9);
            *(b + 227 * OS1_S1 + 20) =
                prefactor_x * *(b + 227 * OS1_S1 + 10) -
                p_over_q * *(b + 293 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 4);
            *(b + 227 * OS1_S1 + 21) =
                prefactor_y * *(b + 227 * OS1_S1 + 10) -
                p_over_q * *(b + 297 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 10);
            *(b + 227 * OS1_S1 + 22) =
                prefactor_z * *(b + 227 * OS1_S1 + 10) -
                p_over_q * *(b + 298 * OS1_S1 + 10) +
                one_over_two_q * *(b + 168 * OS1_S1 + 10);
            *(b + 227 * OS1_S1 + 23) =
                prefactor_y * *(b + 227 * OS1_S1 + 11) -
                p_over_q * *(b + 297 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 11) +
                one_over_two_q * *(b + 227 * OS1_S1 + 4);
            *(b + 227 * OS1_S1 + 24) =
                prefactor_z * *(b + 227 * OS1_S1 + 11) -
                p_over_q * *(b + 298 * OS1_S1 + 11) +
                one_over_two_q * *(b + 168 * OS1_S1 + 11);
            *(b + 227 * OS1_S1 + 25) =
                prefactor_z * *(b + 227 * OS1_S1 + 12) -
                p_over_q * *(b + 298 * OS1_S1 + 12) +
                one_over_two_q * *(b + 168 * OS1_S1 + 12) +
                one_over_two_q * *(b + 227 * OS1_S1 + 4);
            *(b + 227 * OS1_S1 + 26) =
                prefactor_x * *(b + 227 * OS1_S1 + 16) -
                p_over_q * *(b + 293 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 16);
            *(b + 227 * OS1_S1 + 27) =
                prefactor_z * *(b + 227 * OS1_S1 + 13) -
                p_over_q * *(b + 298 * OS1_S1 + 13) +
                one_over_two_q * *(b + 168 * OS1_S1 + 13);
            *(b + 227 * OS1_S1 + 28) =
                prefactor_y * *(b + 227 * OS1_S1 + 15) -
                p_over_q * *(b + 297 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 15);
            *(b + 227 * OS1_S1 + 29) =
                prefactor_x * *(b + 227 * OS1_S1 + 19) -
                p_over_q * *(b + 293 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 19);
            *(b + 227 * OS1_S1 + 30) =
                prefactor_y * *(b + 227 * OS1_S1 + 16) -
                p_over_q * *(b + 297 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 7);
            *(b + 227 * OS1_S1 + 31) =
                prefactor_z * *(b + 227 * OS1_S1 + 16) -
                p_over_q * *(b + 298 * OS1_S1 + 16) +
                one_over_two_q * *(b + 168 * OS1_S1 + 16);
            *(b + 227 * OS1_S1 + 32) =
                prefactor_z * *(b + 227 * OS1_S1 + 17) -
                p_over_q * *(b + 298 * OS1_S1 + 17) +
                one_over_two_q * *(b + 168 * OS1_S1 + 17) +
                one_over_two_q * *(b + 227 * OS1_S1 + 7);
            *(b + 227 * OS1_S1 + 33) =
                prefactor_y * *(b + 227 * OS1_S1 + 19) -
                p_over_q * *(b + 297 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 19);
            *(b + 227 * OS1_S1 + 34) =
                prefactor_z * *(b + 227 * OS1_S1 + 19) -
                p_over_q * *(b + 298 * OS1_S1 + 19) +
                one_over_two_q * *(b + 168 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 9);
            *(b + 228 * OS1_S1 + 20) =
                prefactor_x * *(b + 228 * OS1_S1 + 10) -
                p_over_q * *(b + 294 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 4);
            *(b + 228 * OS1_S1 + 21) =
                prefactor_y * *(b + 228 * OS1_S1 + 10) -
                p_over_q * *(b + 298 * OS1_S1 + 10) +
                one_over_two_q * *(b + 170 * OS1_S1 + 10);
            *(b + 228 * OS1_S1 + 22) =
                prefactor_z * *(b + 228 * OS1_S1 + 10) -
                p_over_q * *(b + 299 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 10);
            *(b + 228 * OS1_S1 + 23) =
                prefactor_y * *(b + 228 * OS1_S1 + 11) -
                p_over_q * *(b + 298 * OS1_S1 + 11) +
                one_over_two_q * *(b + 170 * OS1_S1 + 11) +
                one_over_two_q * *(b + 228 * OS1_S1 + 4);
            *(b + 228 * OS1_S1 + 24) =
                prefactor_y * *(b + 228 * OS1_S1 + 12) -
                p_over_q * *(b + 298 * OS1_S1 + 12) +
                one_over_two_q * *(b + 170 * OS1_S1 + 12);
            *(b + 228 * OS1_S1 + 25) =
                prefactor_z * *(b + 228 * OS1_S1 + 12) -
                p_over_q * *(b + 299 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 12) +
                one_over_two_q * *(b + 228 * OS1_S1 + 4);
            *(b + 228 * OS1_S1 + 26) =
                prefactor_x * *(b + 228 * OS1_S1 + 16) -
                p_over_q * *(b + 294 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 16);
            *(b + 228 * OS1_S1 + 27) =
                prefactor_z * *(b + 228 * OS1_S1 + 13) -
                p_over_q * *(b + 299 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 13);
            *(b + 228 * OS1_S1 + 28) =
                prefactor_y * *(b + 228 * OS1_S1 + 15) -
                p_over_q * *(b + 298 * OS1_S1 + 15) +
                one_over_two_q * *(b + 170 * OS1_S1 + 15);
            *(b + 228 * OS1_S1 + 29) =
                prefactor_x * *(b + 228 * OS1_S1 + 19) -
                p_over_q * *(b + 294 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 19);
            *(b + 228 * OS1_S1 + 30) =
                prefactor_y * *(b + 228 * OS1_S1 + 16) -
                p_over_q * *(b + 298 * OS1_S1 + 16) +
                one_over_two_q * *(b + 170 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 7);
            *(b + 228 * OS1_S1 + 31) =
                prefactor_z * *(b + 228 * OS1_S1 + 16) -
                p_over_q * *(b + 299 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 16);
            *(b + 228 * OS1_S1 + 32) =
                prefactor_y * *(b + 228 * OS1_S1 + 18) -
                p_over_q * *(b + 298 * OS1_S1 + 18) +
                one_over_two_q * *(b + 170 * OS1_S1 + 18) +
                one_over_two_q * *(b + 228 * OS1_S1 + 9);
            *(b + 228 * OS1_S1 + 33) =
                prefactor_y * *(b + 228 * OS1_S1 + 19) -
                p_over_q * *(b + 298 * OS1_S1 + 19) +
                one_over_two_q * *(b + 170 * OS1_S1 + 19);
            *(b + 228 * OS1_S1 + 34) =
                prefactor_z * *(b + 228 * OS1_S1 + 19) -
                p_over_q * *(b + 299 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 9);
            *(b + 229 * OS1_S1 + 20) =
                prefactor_x * *(b + 229 * OS1_S1 + 10) -
                p_over_q * *(b + 295 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 229 * OS1_S1 + 4);
            *(b + 229 * OS1_S1 + 21) = prefactor_y * *(b + 229 * OS1_S1 + 10) -
                                       p_over_q * *(b + 299 * OS1_S1 + 10);
            *(b + 229 * OS1_S1 + 22) =
                prefactor_z * *(b + 229 * OS1_S1 + 10) -
                p_over_q * *(b + 300 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 10);
            *(b + 229 * OS1_S1 + 23) = prefactor_y * *(b + 229 * OS1_S1 + 11) -
                                       p_over_q * *(b + 299 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 229 * OS1_S1 + 4);
            *(b + 229 * OS1_S1 + 24) = prefactor_y * *(b + 229 * OS1_S1 + 12) -
                                       p_over_q * *(b + 299 * OS1_S1 + 12);
            *(b + 229 * OS1_S1 + 25) =
                prefactor_z * *(b + 229 * OS1_S1 + 12) -
                p_over_q * *(b + 300 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 12) +
                one_over_two_q * *(b + 229 * OS1_S1 + 4);
            *(b + 229 * OS1_S1 + 26) =
                prefactor_x * *(b + 229 * OS1_S1 + 16) -
                p_over_q * *(b + 295 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 16);
            *(b + 229 * OS1_S1 + 27) =
                prefactor_z * *(b + 229 * OS1_S1 + 13) -
                p_over_q * *(b + 300 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 13);
            *(b + 229 * OS1_S1 + 28) = prefactor_y * *(b + 229 * OS1_S1 + 15) -
                                       p_over_q * *(b + 299 * OS1_S1 + 15);
            *(b + 229 * OS1_S1 + 29) =
                prefactor_x * *(b + 229 * OS1_S1 + 19) -
                p_over_q * *(b + 295 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 19);
            *(b + 229 * OS1_S1 + 30) =
                prefactor_y * *(b + 229 * OS1_S1 + 16) -
                p_over_q * *(b + 299 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 229 * OS1_S1 + 7);
            *(b + 229 * OS1_S1 + 31) =
                prefactor_z * *(b + 229 * OS1_S1 + 16) -
                p_over_q * *(b + 300 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 16);
            *(b + 229 * OS1_S1 + 32) = prefactor_y * *(b + 229 * OS1_S1 + 18) -
                                       p_over_q * *(b + 299 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 229 * OS1_S1 + 9);
            *(b + 229 * OS1_S1 + 33) = prefactor_y * *(b + 229 * OS1_S1 + 19) -
                                       p_over_q * *(b + 299 * OS1_S1 + 19);
            *(b + 229 * OS1_S1 + 34) =
                prefactor_z * *(b + 229 * OS1_S1 + 19) -
                p_over_q * *(b + 300 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 229 * OS1_S1 + 9);
            *(b + 230 * OS1_S1 + 20) =
                prefactor_x * *(b + 230 * OS1_S1 + 10) -
                p_over_q * *(b + 296 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 230 * OS1_S1 + 4);
            *(b + 230 * OS1_S1 + 21) =
                prefactor_y * *(b + 230 * OS1_S1 + 10) -
                p_over_q * *(b + 301 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 10);
            *(b + 230 * OS1_S1 + 22) = prefactor_z * *(b + 230 * OS1_S1 + 10) -
                                       p_over_q * *(b + 302 * OS1_S1 + 10);
            *(b + 230 * OS1_S1 + 23) =
                prefactor_y * *(b + 230 * OS1_S1 + 11) -
                p_over_q * *(b + 301 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 11) +
                one_over_two_q * *(b + 230 * OS1_S1 + 4);
            *(b + 230 * OS1_S1 + 24) = prefactor_z * *(b + 230 * OS1_S1 + 11) -
                                       p_over_q * *(b + 302 * OS1_S1 + 11);
            *(b + 230 * OS1_S1 + 25) = prefactor_z * *(b + 230 * OS1_S1 + 12) -
                                       p_over_q * *(b + 302 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 230 * OS1_S1 + 4);
            *(b + 230 * OS1_S1 + 26) =
                prefactor_x * *(b + 230 * OS1_S1 + 16) -
                p_over_q * *(b + 296 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 16);
            *(b + 230 * OS1_S1 + 27) = prefactor_z * *(b + 230 * OS1_S1 + 13) -
                                       p_over_q * *(b + 302 * OS1_S1 + 13);
            *(b + 230 * OS1_S1 + 28) =
                prefactor_y * *(b + 230 * OS1_S1 + 15) -
                p_over_q * *(b + 301 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 15);
            *(b + 230 * OS1_S1 + 29) =
                prefactor_x * *(b + 230 * OS1_S1 + 19) -
                p_over_q * *(b + 296 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 19);
            *(b + 230 * OS1_S1 + 30) =
                prefactor_y * *(b + 230 * OS1_S1 + 16) -
                p_over_q * *(b + 301 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 230 * OS1_S1 + 7);
            *(b + 230 * OS1_S1 + 31) = prefactor_z * *(b + 230 * OS1_S1 + 16) -
                                       p_over_q * *(b + 302 * OS1_S1 + 16);
            *(b + 230 * OS1_S1 + 32) = prefactor_z * *(b + 230 * OS1_S1 + 17) -
                                       p_over_q * *(b + 302 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 230 * OS1_S1 + 7);
            *(b + 230 * OS1_S1 + 33) =
                prefactor_y * *(b + 230 * OS1_S1 + 19) -
                p_over_q * *(b + 301 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 19);
            *(b + 230 * OS1_S1 + 34) =
                prefactor_z * *(b + 230 * OS1_S1 + 19) -
                p_over_q * *(b + 302 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 230 * OS1_S1 + 9);
            *(b + 231 * OS1_S1 + 20) =
                prefactor_x * *(b + 231 * OS1_S1 + 10) -
                p_over_q * *(b + 297 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 231 * OS1_S1 + 4);
            *(b + 231 * OS1_S1 + 21) =
                prefactor_y * *(b + 231 * OS1_S1 + 10) -
                p_over_q * *(b + 302 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 10);
            *(b + 231 * OS1_S1 + 22) =
                prefactor_z * *(b + 231 * OS1_S1 + 10) -
                p_over_q * *(b + 303 * OS1_S1 + 10) +
                one_over_two_q * *(b + 171 * OS1_S1 + 10);
            *(b + 231 * OS1_S1 + 23) =
                prefactor_y * *(b + 231 * OS1_S1 + 11) -
                p_over_q * *(b + 302 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 11) +
                one_over_two_q * *(b + 231 * OS1_S1 + 4);
            *(b + 231 * OS1_S1 + 24) =
                prefactor_z * *(b + 231 * OS1_S1 + 11) -
                p_over_q * *(b + 303 * OS1_S1 + 11) +
                one_over_two_q * *(b + 171 * OS1_S1 + 11);
            *(b + 231 * OS1_S1 + 25) =
                prefactor_z * *(b + 231 * OS1_S1 + 12) -
                p_over_q * *(b + 303 * OS1_S1 + 12) +
                one_over_two_q * *(b + 171 * OS1_S1 + 12) +
                one_over_two_q * *(b + 231 * OS1_S1 + 4);
            *(b + 231 * OS1_S1 + 26) =
                prefactor_x * *(b + 231 * OS1_S1 + 16) -
                p_over_q * *(b + 297 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 16);
            *(b + 231 * OS1_S1 + 27) =
                prefactor_z * *(b + 231 * OS1_S1 + 13) -
                p_over_q * *(b + 303 * OS1_S1 + 13) +
                one_over_two_q * *(b + 171 * OS1_S1 + 13);
            *(b + 231 * OS1_S1 + 28) =
                prefactor_y * *(b + 231 * OS1_S1 + 15) -
                p_over_q * *(b + 302 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 15);
            *(b + 231 * OS1_S1 + 29) =
                prefactor_x * *(b + 231 * OS1_S1 + 19) -
                p_over_q * *(b + 297 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 19);
            *(b + 231 * OS1_S1 + 30) =
                prefactor_y * *(b + 231 * OS1_S1 + 16) -
                p_over_q * *(b + 302 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 231 * OS1_S1 + 7);
            *(b + 231 * OS1_S1 + 31) =
                prefactor_z * *(b + 231 * OS1_S1 + 16) -
                p_over_q * *(b + 303 * OS1_S1 + 16) +
                one_over_two_q * *(b + 171 * OS1_S1 + 16);
            *(b + 231 * OS1_S1 + 32) =
                prefactor_z * *(b + 231 * OS1_S1 + 17) -
                p_over_q * *(b + 303 * OS1_S1 + 17) +
                one_over_two_q * *(b + 171 * OS1_S1 + 17) +
                one_over_two_q * *(b + 231 * OS1_S1 + 7);
            *(b + 231 * OS1_S1 + 33) =
                prefactor_y * *(b + 231 * OS1_S1 + 19) -
                p_over_q * *(b + 302 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 19);
            *(b + 231 * OS1_S1 + 34) =
                prefactor_z * *(b + 231 * OS1_S1 + 19) -
                p_over_q * *(b + 303 * OS1_S1 + 19) +
                one_over_two_q * *(b + 171 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 231 * OS1_S1 + 9);
            *(b + 232 * OS1_S1 + 20) =
                prefactor_x * *(b + 232 * OS1_S1 + 10) -
                p_over_q * *(b + 298 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 4);
            *(b + 232 * OS1_S1 + 21) =
                prefactor_y * *(b + 232 * OS1_S1 + 10) -
                p_over_q * *(b + 303 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 10);
            *(b + 232 * OS1_S1 + 22) =
                prefactor_z * *(b + 232 * OS1_S1 + 10) -
                p_over_q * *(b + 304 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 10);
            *(b + 232 * OS1_S1 + 23) =
                prefactor_y * *(b + 232 * OS1_S1 + 11) -
                p_over_q * *(b + 303 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 11) +
                one_over_two_q * *(b + 232 * OS1_S1 + 4);
            *(b + 232 * OS1_S1 + 24) =
                prefactor_z * *(b + 232 * OS1_S1 + 11) -
                p_over_q * *(b + 304 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 11);
            *(b + 232 * OS1_S1 + 25) =
                prefactor_z * *(b + 232 * OS1_S1 + 12) -
                p_over_q * *(b + 304 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 12) +
                one_over_two_q * *(b + 232 * OS1_S1 + 4);
            *(b + 232 * OS1_S1 + 26) =
                prefactor_x * *(b + 232 * OS1_S1 + 16) -
                p_over_q * *(b + 298 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 16);
            *(b + 232 * OS1_S1 + 27) =
                prefactor_z * *(b + 232 * OS1_S1 + 13) -
                p_over_q * *(b + 304 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 13);
            *(b + 232 * OS1_S1 + 28) =
                prefactor_y * *(b + 232 * OS1_S1 + 15) -
                p_over_q * *(b + 303 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 15);
            *(b + 232 * OS1_S1 + 29) =
                prefactor_x * *(b + 232 * OS1_S1 + 19) -
                p_over_q * *(b + 298 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 19);
            *(b + 232 * OS1_S1 + 30) =
                prefactor_y * *(b + 232 * OS1_S1 + 16) -
                p_over_q * *(b + 303 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 7);
            *(b + 232 * OS1_S1 + 31) =
                prefactor_z * *(b + 232 * OS1_S1 + 16) -
                p_over_q * *(b + 304 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 16);
            *(b + 232 * OS1_S1 + 32) =
                prefactor_z * *(b + 232 * OS1_S1 + 17) -
                p_over_q * *(b + 304 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 17) +
                one_over_two_q * *(b + 232 * OS1_S1 + 7);
            *(b + 232 * OS1_S1 + 33) =
                prefactor_y * *(b + 232 * OS1_S1 + 19) -
                p_over_q * *(b + 303 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 19);
            *(b + 232 * OS1_S1 + 34) =
                prefactor_z * *(b + 232 * OS1_S1 + 19) -
                p_over_q * *(b + 304 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 9);
            *(b + 233 * OS1_S1 + 20) =
                prefactor_x * *(b + 233 * OS1_S1 + 10) -
                p_over_q * *(b + 299 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 233 * OS1_S1 + 4);
            *(b + 233 * OS1_S1 + 21) =
                prefactor_y * *(b + 233 * OS1_S1 + 10) -
                p_over_q * *(b + 304 * OS1_S1 + 10) +
                one_over_two_q * *(b + 174 * OS1_S1 + 10);
            *(b + 233 * OS1_S1 + 22) =
                prefactor_z * *(b + 233 * OS1_S1 + 10) -
                p_over_q * *(b + 305 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 10);
            *(b + 233 * OS1_S1 + 23) =
                prefactor_y * *(b + 233 * OS1_S1 + 11) -
                p_over_q * *(b + 304 * OS1_S1 + 11) +
                one_over_two_q * *(b + 174 * OS1_S1 + 11) +
                one_over_two_q * *(b + 233 * OS1_S1 + 4);
            *(b + 233 * OS1_S1 + 24) =
                prefactor_y * *(b + 233 * OS1_S1 + 12) -
                p_over_q * *(b + 304 * OS1_S1 + 12) +
                one_over_two_q * *(b + 174 * OS1_S1 + 12);
            *(b + 233 * OS1_S1 + 25) =
                prefactor_z * *(b + 233 * OS1_S1 + 12) -
                p_over_q * *(b + 305 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 12) +
                one_over_two_q * *(b + 233 * OS1_S1 + 4);
            *(b + 233 * OS1_S1 + 26) =
                prefactor_x * *(b + 233 * OS1_S1 + 16) -
                p_over_q * *(b + 299 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 16);
            *(b + 233 * OS1_S1 + 27) =
                prefactor_z * *(b + 233 * OS1_S1 + 13) -
                p_over_q * *(b + 305 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 13);
            *(b + 233 * OS1_S1 + 28) =
                prefactor_y * *(b + 233 * OS1_S1 + 15) -
                p_over_q * *(b + 304 * OS1_S1 + 15) +
                one_over_two_q * *(b + 174 * OS1_S1 + 15);
            *(b + 233 * OS1_S1 + 29) =
                prefactor_x * *(b + 233 * OS1_S1 + 19) -
                p_over_q * *(b + 299 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 19);
            *(b + 233 * OS1_S1 + 30) =
                prefactor_y * *(b + 233 * OS1_S1 + 16) -
                p_over_q * *(b + 304 * OS1_S1 + 16) +
                one_over_two_q * *(b + 174 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 233 * OS1_S1 + 7);
            *(b + 233 * OS1_S1 + 31) =
                prefactor_z * *(b + 233 * OS1_S1 + 16) -
                p_over_q * *(b + 305 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 16);
            *(b + 233 * OS1_S1 + 32) =
                prefactor_y * *(b + 233 * OS1_S1 + 18) -
                p_over_q * *(b + 304 * OS1_S1 + 18) +
                one_over_two_q * *(b + 174 * OS1_S1 + 18) +
                one_over_two_q * *(b + 233 * OS1_S1 + 9);
            *(b + 233 * OS1_S1 + 33) =
                prefactor_y * *(b + 233 * OS1_S1 + 19) -
                p_over_q * *(b + 304 * OS1_S1 + 19) +
                one_over_two_q * *(b + 174 * OS1_S1 + 19);
            *(b + 233 * OS1_S1 + 34) =
                prefactor_z * *(b + 233 * OS1_S1 + 19) -
                p_over_q * *(b + 305 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 233 * OS1_S1 + 9);
            *(b + 234 * OS1_S1 + 20) =
                prefactor_x * *(b + 234 * OS1_S1 + 10) -
                p_over_q * *(b + 300 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 234 * OS1_S1 + 4);
            *(b + 234 * OS1_S1 + 21) = prefactor_y * *(b + 234 * OS1_S1 + 10) -
                                       p_over_q * *(b + 305 * OS1_S1 + 10);
            *(b + 234 * OS1_S1 + 22) =
                prefactor_z * *(b + 234 * OS1_S1 + 10) -
                p_over_q * *(b + 306 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 10);
            *(b + 234 * OS1_S1 + 23) = prefactor_y * *(b + 234 * OS1_S1 + 11) -
                                       p_over_q * *(b + 305 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 234 * OS1_S1 + 4);
            *(b + 234 * OS1_S1 + 24) = prefactor_y * *(b + 234 * OS1_S1 + 12) -
                                       p_over_q * *(b + 305 * OS1_S1 + 12);
            *(b + 234 * OS1_S1 + 25) =
                prefactor_z * *(b + 234 * OS1_S1 + 12) -
                p_over_q * *(b + 306 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 12) +
                one_over_two_q * *(b + 234 * OS1_S1 + 4);
            *(b + 234 * OS1_S1 + 26) =
                prefactor_x * *(b + 234 * OS1_S1 + 16) -
                p_over_q * *(b + 300 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 16);
            *(b + 234 * OS1_S1 + 27) =
                prefactor_z * *(b + 234 * OS1_S1 + 13) -
                p_over_q * *(b + 306 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 13);
            *(b + 234 * OS1_S1 + 28) = prefactor_y * *(b + 234 * OS1_S1 + 15) -
                                       p_over_q * *(b + 305 * OS1_S1 + 15);
            *(b + 234 * OS1_S1 + 29) =
                prefactor_x * *(b + 234 * OS1_S1 + 19) -
                p_over_q * *(b + 300 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 19);
            *(b + 234 * OS1_S1 + 30) =
                prefactor_y * *(b + 234 * OS1_S1 + 16) -
                p_over_q * *(b + 305 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 234 * OS1_S1 + 7);
            *(b + 234 * OS1_S1 + 31) =
                prefactor_z * *(b + 234 * OS1_S1 + 16) -
                p_over_q * *(b + 306 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 16);
            *(b + 234 * OS1_S1 + 32) = prefactor_y * *(b + 234 * OS1_S1 + 18) -
                                       p_over_q * *(b + 305 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 234 * OS1_S1 + 9);
            *(b + 234 * OS1_S1 + 33) = prefactor_y * *(b + 234 * OS1_S1 + 19) -
                                       p_over_q * *(b + 305 * OS1_S1 + 19);
            *(b + 234 * OS1_S1 + 34) =
                prefactor_z * *(b + 234 * OS1_S1 + 19) -
                p_over_q * *(b + 306 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 234 * OS1_S1 + 9);
            *(b + 235 * OS1_S1 + 20) =
                prefactor_x * *(b + 235 * OS1_S1 + 10) -
                p_over_q * *(b + 301 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 235 * OS1_S1 + 4);
            *(b + 235 * OS1_S1 + 21) =
                prefactor_y * *(b + 235 * OS1_S1 + 10) -
                p_over_q * *(b + 307 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 10);
            *(b + 235 * OS1_S1 + 22) = prefactor_z * *(b + 235 * OS1_S1 + 10) -
                                       p_over_q * *(b + 308 * OS1_S1 + 10);
            *(b + 235 * OS1_S1 + 23) =
                prefactor_y * *(b + 235 * OS1_S1 + 11) -
                p_over_q * *(b + 307 * OS1_S1 + 11) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 11) +
                one_over_two_q * *(b + 235 * OS1_S1 + 4);
            *(b + 235 * OS1_S1 + 24) = prefactor_z * *(b + 235 * OS1_S1 + 11) -
                                       p_over_q * *(b + 308 * OS1_S1 + 11);
            *(b + 235 * OS1_S1 + 25) = prefactor_z * *(b + 235 * OS1_S1 + 12) -
                                       p_over_q * *(b + 308 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 235 * OS1_S1 + 4);
            *(b + 235 * OS1_S1 + 26) =
                prefactor_x * *(b + 235 * OS1_S1 + 16) -
                p_over_q * *(b + 301 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 16);
            *(b + 235 * OS1_S1 + 27) = prefactor_z * *(b + 235 * OS1_S1 + 13) -
                                       p_over_q * *(b + 308 * OS1_S1 + 13);
            *(b + 235 * OS1_S1 + 28) =
                prefactor_y * *(b + 235 * OS1_S1 + 15) -
                p_over_q * *(b + 307 * OS1_S1 + 15) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 15);
            *(b + 235 * OS1_S1 + 29) =
                prefactor_x * *(b + 235 * OS1_S1 + 19) -
                p_over_q * *(b + 301 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 19);
            *(b + 235 * OS1_S1 + 30) =
                prefactor_y * *(b + 235 * OS1_S1 + 16) -
                p_over_q * *(b + 307 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 235 * OS1_S1 + 7);
            *(b + 235 * OS1_S1 + 31) = prefactor_z * *(b + 235 * OS1_S1 + 16) -
                                       p_over_q * *(b + 308 * OS1_S1 + 16);
            *(b + 235 * OS1_S1 + 32) = prefactor_z * *(b + 235 * OS1_S1 + 17) -
                                       p_over_q * *(b + 308 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 235 * OS1_S1 + 7);
            *(b + 235 * OS1_S1 + 33) =
                prefactor_y * *(b + 235 * OS1_S1 + 19) -
                p_over_q * *(b + 307 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 19);
            *(b + 235 * OS1_S1 + 34) =
                prefactor_z * *(b + 235 * OS1_S1 + 19) -
                p_over_q * *(b + 308 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 235 * OS1_S1 + 9);
            *(b + 236 * OS1_S1 + 20) =
                prefactor_x * *(b + 236 * OS1_S1 + 10) -
                p_over_q * *(b + 302 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 236 * OS1_S1 + 4);
            *(b + 236 * OS1_S1 + 21) =
                prefactor_y * *(b + 236 * OS1_S1 + 10) -
                p_over_q * *(b + 308 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 10);
            *(b + 236 * OS1_S1 + 22) =
                prefactor_z * *(b + 236 * OS1_S1 + 10) -
                p_over_q * *(b + 309 * OS1_S1 + 10) +
                one_over_two_q * *(b + 175 * OS1_S1 + 10);
            *(b + 236 * OS1_S1 + 23) =
                prefactor_y * *(b + 236 * OS1_S1 + 11) -
                p_over_q * *(b + 308 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 11) +
                one_over_two_q * *(b + 236 * OS1_S1 + 4);
            *(b + 236 * OS1_S1 + 24) =
                prefactor_z * *(b + 236 * OS1_S1 + 11) -
                p_over_q * *(b + 309 * OS1_S1 + 11) +
                one_over_two_q * *(b + 175 * OS1_S1 + 11);
            *(b + 236 * OS1_S1 + 25) =
                prefactor_z * *(b + 236 * OS1_S1 + 12) -
                p_over_q * *(b + 309 * OS1_S1 + 12) +
                one_over_two_q * *(b + 175 * OS1_S1 + 12) +
                one_over_two_q * *(b + 236 * OS1_S1 + 4);
            *(b + 236 * OS1_S1 + 26) =
                prefactor_x * *(b + 236 * OS1_S1 + 16) -
                p_over_q * *(b + 302 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 16);
            *(b + 236 * OS1_S1 + 27) =
                prefactor_z * *(b + 236 * OS1_S1 + 13) -
                p_over_q * *(b + 309 * OS1_S1 + 13) +
                one_over_two_q * *(b + 175 * OS1_S1 + 13);
            *(b + 236 * OS1_S1 + 28) =
                prefactor_y * *(b + 236 * OS1_S1 + 15) -
                p_over_q * *(b + 308 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 15);
            *(b + 236 * OS1_S1 + 29) =
                prefactor_x * *(b + 236 * OS1_S1 + 19) -
                p_over_q * *(b + 302 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 19);
            *(b + 236 * OS1_S1 + 30) =
                prefactor_y * *(b + 236 * OS1_S1 + 16) -
                p_over_q * *(b + 308 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 236 * OS1_S1 + 7);
            *(b + 236 * OS1_S1 + 31) =
                prefactor_z * *(b + 236 * OS1_S1 + 16) -
                p_over_q * *(b + 309 * OS1_S1 + 16) +
                one_over_two_q * *(b + 175 * OS1_S1 + 16);
            *(b + 236 * OS1_S1 + 32) =
                prefactor_z * *(b + 236 * OS1_S1 + 17) -
                p_over_q * *(b + 309 * OS1_S1 + 17) +
                one_over_two_q * *(b + 175 * OS1_S1 + 17) +
                one_over_two_q * *(b + 236 * OS1_S1 + 7);
            *(b + 236 * OS1_S1 + 33) =
                prefactor_y * *(b + 236 * OS1_S1 + 19) -
                p_over_q * *(b + 308 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 19);
            *(b + 236 * OS1_S1 + 34) =
                prefactor_z * *(b + 236 * OS1_S1 + 19) -
                p_over_q * *(b + 309 * OS1_S1 + 19) +
                one_over_two_q * *(b + 175 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 236 * OS1_S1 + 9);
            *(b + 237 * OS1_S1 + 20) =
                prefactor_x * *(b + 237 * OS1_S1 + 10) -
                p_over_q * *(b + 303 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 4);
            *(b + 237 * OS1_S1 + 21) =
                prefactor_y * *(b + 237 * OS1_S1 + 10) -
                p_over_q * *(b + 309 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 10);
            *(b + 237 * OS1_S1 + 22) =
                prefactor_z * *(b + 237 * OS1_S1 + 10) -
                p_over_q * *(b + 310 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 10);
            *(b + 237 * OS1_S1 + 23) =
                prefactor_y * *(b + 237 * OS1_S1 + 11) -
                p_over_q * *(b + 309 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 11) +
                one_over_two_q * *(b + 237 * OS1_S1 + 4);
            *(b + 237 * OS1_S1 + 24) =
                prefactor_z * *(b + 237 * OS1_S1 + 11) -
                p_over_q * *(b + 310 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 11);
            *(b + 237 * OS1_S1 + 25) =
                prefactor_z * *(b + 237 * OS1_S1 + 12) -
                p_over_q * *(b + 310 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 12) +
                one_over_two_q * *(b + 237 * OS1_S1 + 4);
            *(b + 237 * OS1_S1 + 26) =
                prefactor_x * *(b + 237 * OS1_S1 + 16) -
                p_over_q * *(b + 303 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 16);
            *(b + 237 * OS1_S1 + 27) =
                prefactor_z * *(b + 237 * OS1_S1 + 13) -
                p_over_q * *(b + 310 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 13);
            *(b + 237 * OS1_S1 + 28) =
                prefactor_y * *(b + 237 * OS1_S1 + 15) -
                p_over_q * *(b + 309 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 15);
            *(b + 237 * OS1_S1 + 29) =
                prefactor_x * *(b + 237 * OS1_S1 + 19) -
                p_over_q * *(b + 303 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 19);
            *(b + 237 * OS1_S1 + 30) =
                prefactor_y * *(b + 237 * OS1_S1 + 16) -
                p_over_q * *(b + 309 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 7);
            *(b + 237 * OS1_S1 + 31) =
                prefactor_z * *(b + 237 * OS1_S1 + 16) -
                p_over_q * *(b + 310 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 16);
            *(b + 237 * OS1_S1 + 32) =
                prefactor_z * *(b + 237 * OS1_S1 + 17) -
                p_over_q * *(b + 310 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 17) +
                one_over_two_q * *(b + 237 * OS1_S1 + 7);
            *(b + 237 * OS1_S1 + 33) =
                prefactor_y * *(b + 237 * OS1_S1 + 19) -
                p_over_q * *(b + 309 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 19);
            *(b + 237 * OS1_S1 + 34) =
                prefactor_z * *(b + 237 * OS1_S1 + 19) -
                p_over_q * *(b + 310 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 9);
            *(b + 238 * OS1_S1 + 20) =
                prefactor_x * *(b + 238 * OS1_S1 + 10) -
                p_over_q * *(b + 304 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 4);
            *(b + 238 * OS1_S1 + 21) =
                prefactor_y * *(b + 238 * OS1_S1 + 10) -
                p_over_q * *(b + 310 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 10);
            *(b + 238 * OS1_S1 + 22) =
                prefactor_z * *(b + 238 * OS1_S1 + 10) -
                p_over_q * *(b + 311 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 10);
            *(b + 238 * OS1_S1 + 23) =
                prefactor_y * *(b + 238 * OS1_S1 + 11) -
                p_over_q * *(b + 310 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 11) +
                one_over_two_q * *(b + 238 * OS1_S1 + 4);
            *(b + 238 * OS1_S1 + 24) =
                prefactor_y * *(b + 238 * OS1_S1 + 12) -
                p_over_q * *(b + 310 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 12);
            *(b + 238 * OS1_S1 + 25) =
                prefactor_z * *(b + 238 * OS1_S1 + 12) -
                p_over_q * *(b + 311 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 12) +
                one_over_two_q * *(b + 238 * OS1_S1 + 4);
            *(b + 238 * OS1_S1 + 26) =
                prefactor_x * *(b + 238 * OS1_S1 + 16) -
                p_over_q * *(b + 304 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 16);
            *(b + 238 * OS1_S1 + 27) =
                prefactor_z * *(b + 238 * OS1_S1 + 13) -
                p_over_q * *(b + 311 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 13);
            *(b + 238 * OS1_S1 + 28) =
                prefactor_y * *(b + 238 * OS1_S1 + 15) -
                p_over_q * *(b + 310 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 15);
            *(b + 238 * OS1_S1 + 29) =
                prefactor_x * *(b + 238 * OS1_S1 + 19) -
                p_over_q * *(b + 304 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 19);
            *(b + 238 * OS1_S1 + 30) =
                prefactor_y * *(b + 238 * OS1_S1 + 16) -
                p_over_q * *(b + 310 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 7);
            *(b + 238 * OS1_S1 + 31) =
                prefactor_z * *(b + 238 * OS1_S1 + 16) -
                p_over_q * *(b + 311 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 16);
            *(b + 238 * OS1_S1 + 32) =
                prefactor_y * *(b + 238 * OS1_S1 + 18) -
                p_over_q * *(b + 310 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 18) +
                one_over_two_q * *(b + 238 * OS1_S1 + 9);
            *(b + 238 * OS1_S1 + 33) =
                prefactor_y * *(b + 238 * OS1_S1 + 19) -
                p_over_q * *(b + 310 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 19);
            *(b + 238 * OS1_S1 + 34) =
                prefactor_z * *(b + 238 * OS1_S1 + 19) -
                p_over_q * *(b + 311 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 9);
            *(b + 239 * OS1_S1 + 20) =
                prefactor_x * *(b + 239 * OS1_S1 + 10) -
                p_over_q * *(b + 305 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 239 * OS1_S1 + 4);
            *(b + 239 * OS1_S1 + 21) =
                prefactor_y * *(b + 239 * OS1_S1 + 10) -
                p_over_q * *(b + 311 * OS1_S1 + 10) +
                one_over_two_q * *(b + 179 * OS1_S1 + 10);
            *(b + 239 * OS1_S1 + 22) =
                prefactor_z * *(b + 239 * OS1_S1 + 10) -
                p_over_q * *(b + 312 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 10);
            *(b + 239 * OS1_S1 + 23) =
                prefactor_y * *(b + 239 * OS1_S1 + 11) -
                p_over_q * *(b + 311 * OS1_S1 + 11) +
                one_over_two_q * *(b + 179 * OS1_S1 + 11) +
                one_over_two_q * *(b + 239 * OS1_S1 + 4);
            *(b + 239 * OS1_S1 + 24) =
                prefactor_y * *(b + 239 * OS1_S1 + 12) -
                p_over_q * *(b + 311 * OS1_S1 + 12) +
                one_over_two_q * *(b + 179 * OS1_S1 + 12);
            *(b + 239 * OS1_S1 + 25) =
                prefactor_z * *(b + 239 * OS1_S1 + 12) -
                p_over_q * *(b + 312 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 12) +
                one_over_two_q * *(b + 239 * OS1_S1 + 4);
            *(b + 239 * OS1_S1 + 26) =
                prefactor_x * *(b + 239 * OS1_S1 + 16) -
                p_over_q * *(b + 305 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 16);
            *(b + 239 * OS1_S1 + 27) =
                prefactor_z * *(b + 239 * OS1_S1 + 13) -
                p_over_q * *(b + 312 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 13);
            *(b + 239 * OS1_S1 + 28) =
                prefactor_y * *(b + 239 * OS1_S1 + 15) -
                p_over_q * *(b + 311 * OS1_S1 + 15) +
                one_over_two_q * *(b + 179 * OS1_S1 + 15);
            *(b + 239 * OS1_S1 + 29) =
                prefactor_x * *(b + 239 * OS1_S1 + 19) -
                p_over_q * *(b + 305 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 19);
            *(b + 239 * OS1_S1 + 30) =
                prefactor_y * *(b + 239 * OS1_S1 + 16) -
                p_over_q * *(b + 311 * OS1_S1 + 16) +
                one_over_two_q * *(b + 179 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 239 * OS1_S1 + 7);
            *(b + 239 * OS1_S1 + 31) =
                prefactor_z * *(b + 239 * OS1_S1 + 16) -
                p_over_q * *(b + 312 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 16);
            *(b + 239 * OS1_S1 + 32) =
                prefactor_y * *(b + 239 * OS1_S1 + 18) -
                p_over_q * *(b + 311 * OS1_S1 + 18) +
                one_over_two_q * *(b + 179 * OS1_S1 + 18) +
                one_over_two_q * *(b + 239 * OS1_S1 + 9);
            *(b + 239 * OS1_S1 + 33) =
                prefactor_y * *(b + 239 * OS1_S1 + 19) -
                p_over_q * *(b + 311 * OS1_S1 + 19) +
                one_over_two_q * *(b + 179 * OS1_S1 + 19);
            *(b + 239 * OS1_S1 + 34) =
                prefactor_z * *(b + 239 * OS1_S1 + 19) -
                p_over_q * *(b + 312 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 239 * OS1_S1 + 9);
            *(b + 240 * OS1_S1 + 20) =
                prefactor_x * *(b + 240 * OS1_S1 + 10) -
                p_over_q * *(b + 306 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 240 * OS1_S1 + 4);
            *(b + 240 * OS1_S1 + 21) = prefactor_y * *(b + 240 * OS1_S1 + 10) -
                                       p_over_q * *(b + 312 * OS1_S1 + 10);
            *(b + 240 * OS1_S1 + 22) =
                prefactor_z * *(b + 240 * OS1_S1 + 10) -
                p_over_q * *(b + 313 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 10);
            *(b + 240 * OS1_S1 + 23) = prefactor_y * *(b + 240 * OS1_S1 + 11) -
                                       p_over_q * *(b + 312 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 240 * OS1_S1 + 4);
            *(b + 240 * OS1_S1 + 24) = prefactor_y * *(b + 240 * OS1_S1 + 12) -
                                       p_over_q * *(b + 312 * OS1_S1 + 12);
            *(b + 240 * OS1_S1 + 25) =
                prefactor_z * *(b + 240 * OS1_S1 + 12) -
                p_over_q * *(b + 313 * OS1_S1 + 12) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 12) +
                one_over_two_q * *(b + 240 * OS1_S1 + 4);
            *(b + 240 * OS1_S1 + 26) =
                prefactor_x * *(b + 240 * OS1_S1 + 16) -
                p_over_q * *(b + 306 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 16);
            *(b + 240 * OS1_S1 + 27) =
                prefactor_z * *(b + 240 * OS1_S1 + 13) -
                p_over_q * *(b + 313 * OS1_S1 + 13) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 13);
            *(b + 240 * OS1_S1 + 28) = prefactor_y * *(b + 240 * OS1_S1 + 15) -
                                       p_over_q * *(b + 312 * OS1_S1 + 15);
            *(b + 240 * OS1_S1 + 29) =
                prefactor_x * *(b + 240 * OS1_S1 + 19) -
                p_over_q * *(b + 306 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 19);
            *(b + 240 * OS1_S1 + 30) =
                prefactor_y * *(b + 240 * OS1_S1 + 16) -
                p_over_q * *(b + 312 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 240 * OS1_S1 + 7);
            *(b + 240 * OS1_S1 + 31) =
                prefactor_z * *(b + 240 * OS1_S1 + 16) -
                p_over_q * *(b + 313 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 16);
            *(b + 240 * OS1_S1 + 32) = prefactor_y * *(b + 240 * OS1_S1 + 18) -
                                       p_over_q * *(b + 312 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 240 * OS1_S1 + 9);
            *(b + 240 * OS1_S1 + 33) = prefactor_y * *(b + 240 * OS1_S1 + 19) -
                                       p_over_q * *(b + 312 * OS1_S1 + 19);
            *(b + 240 * OS1_S1 + 34) =
                prefactor_z * *(b + 240 * OS1_S1 + 19) -
                p_over_q * *(b + 313 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 240 * OS1_S1 + 9);
            *(b + 241 * OS1_S1 + 20) =
                prefactor_x * *(b + 241 * OS1_S1 + 10) -
                p_over_q * *(b + 307 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 241 * OS1_S1 + 4);
            *(b + 241 * OS1_S1 + 21) =
                prefactor_y * *(b + 241 * OS1_S1 + 10) -
                p_over_q * *(b + 314 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 10);
            *(b + 241 * OS1_S1 + 22) = prefactor_z * *(b + 241 * OS1_S1 + 10) -
                                       p_over_q * *(b + 315 * OS1_S1 + 10);
            *(b + 241 * OS1_S1 + 23) =
                prefactor_x * *(b + 241 * OS1_S1 + 13) -
                p_over_q * *(b + 307 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 13) +
                one_over_two_q * *(b + 241 * OS1_S1 + 7);
            *(b + 241 * OS1_S1 + 24) = prefactor_z * *(b + 241 * OS1_S1 + 11) -
                                       p_over_q * *(b + 315 * OS1_S1 + 11);
            *(b + 241 * OS1_S1 + 25) = prefactor_z * *(b + 241 * OS1_S1 + 12) -
                                       p_over_q * *(b + 315 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 241 * OS1_S1 + 4);
            *(b + 241 * OS1_S1 + 26) =
                prefactor_x * *(b + 241 * OS1_S1 + 16) -
                p_over_q * *(b + 307 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 16);
            *(b + 241 * OS1_S1 + 27) = prefactor_z * *(b + 241 * OS1_S1 + 13) -
                                       p_over_q * *(b + 315 * OS1_S1 + 13);
            *(b + 241 * OS1_S1 + 28) =
                prefactor_x * *(b + 241 * OS1_S1 + 18) -
                p_over_q * *(b + 307 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 18);
            *(b + 241 * OS1_S1 + 29) =
                prefactor_x * *(b + 241 * OS1_S1 + 19) -
                p_over_q * *(b + 307 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 19);
            *(b + 241 * OS1_S1 + 30) =
                prefactor_y * *(b + 241 * OS1_S1 + 16) -
                p_over_q * *(b + 314 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 241 * OS1_S1 + 7);
            *(b + 241 * OS1_S1 + 31) = prefactor_z * *(b + 241 * OS1_S1 + 16) -
                                       p_over_q * *(b + 315 * OS1_S1 + 16);
            *(b + 241 * OS1_S1 + 32) = prefactor_z * *(b + 241 * OS1_S1 + 17) -
                                       p_over_q * *(b + 315 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 241 * OS1_S1 + 7);
            *(b + 241 * OS1_S1 + 33) =
                prefactor_y * *(b + 241 * OS1_S1 + 19) -
                p_over_q * *(b + 314 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 19);
            *(b + 241 * OS1_S1 + 34) =
                prefactor_z * *(b + 241 * OS1_S1 + 19) -
                p_over_q * *(b + 315 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 241 * OS1_S1 + 9);
            *(b + 242 * OS1_S1 + 20) =
                prefactor_x * *(b + 242 * OS1_S1 + 10) -
                p_over_q * *(b + 308 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 242 * OS1_S1 + 4);
            *(b + 242 * OS1_S1 + 21) =
                prefactor_y * *(b + 242 * OS1_S1 + 10) -
                p_over_q * *(b + 315 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 10);
            *(b + 242 * OS1_S1 + 22) =
                prefactor_z * *(b + 242 * OS1_S1 + 10) -
                p_over_q * *(b + 316 * OS1_S1 + 10) +
                one_over_two_q * *(b + 180 * OS1_S1 + 10);
            *(b + 242 * OS1_S1 + 23) =
                prefactor_x * *(b + 242 * OS1_S1 + 13) -
                p_over_q * *(b + 308 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 13) +
                one_over_two_q * *(b + 242 * OS1_S1 + 7);
            *(b + 242 * OS1_S1 + 24) =
                prefactor_z * *(b + 242 * OS1_S1 + 11) -
                p_over_q * *(b + 316 * OS1_S1 + 11) +
                one_over_two_q * *(b + 180 * OS1_S1 + 11);
            *(b + 242 * OS1_S1 + 25) =
                prefactor_z * *(b + 242 * OS1_S1 + 12) -
                p_over_q * *(b + 316 * OS1_S1 + 12) +
                one_over_two_q * *(b + 180 * OS1_S1 + 12) +
                one_over_two_q * *(b + 242 * OS1_S1 + 4);
            *(b + 242 * OS1_S1 + 26) =
                prefactor_x * *(b + 242 * OS1_S1 + 16) -
                p_over_q * *(b + 308 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 16);
            *(b + 242 * OS1_S1 + 27) =
                prefactor_z * *(b + 242 * OS1_S1 + 13) -
                p_over_q * *(b + 316 * OS1_S1 + 13) +
                one_over_two_q * *(b + 180 * OS1_S1 + 13);
            *(b + 242 * OS1_S1 + 28) =
                prefactor_x * *(b + 242 * OS1_S1 + 18) -
                p_over_q * *(b + 308 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 18);
            *(b + 242 * OS1_S1 + 29) =
                prefactor_x * *(b + 242 * OS1_S1 + 19) -
                p_over_q * *(b + 308 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 19);
            *(b + 242 * OS1_S1 + 30) =
                prefactor_y * *(b + 242 * OS1_S1 + 16) -
                p_over_q * *(b + 315 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 242 * OS1_S1 + 7);
            *(b + 242 * OS1_S1 + 31) =
                prefactor_z * *(b + 242 * OS1_S1 + 16) -
                p_over_q * *(b + 316 * OS1_S1 + 16) +
                one_over_two_q * *(b + 180 * OS1_S1 + 16);
            *(b + 242 * OS1_S1 + 32) =
                prefactor_z * *(b + 242 * OS1_S1 + 17) -
                p_over_q * *(b + 316 * OS1_S1 + 17) +
                one_over_two_q * *(b + 180 * OS1_S1 + 17) +
                one_over_two_q * *(b + 242 * OS1_S1 + 7);
            *(b + 242 * OS1_S1 + 33) =
                prefactor_y * *(b + 242 * OS1_S1 + 19) -
                p_over_q * *(b + 315 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 19);
            *(b + 242 * OS1_S1 + 34) =
                prefactor_z * *(b + 242 * OS1_S1 + 19) -
                p_over_q * *(b + 316 * OS1_S1 + 19) +
                one_over_two_q * *(b + 180 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 242 * OS1_S1 + 9);
            *(b + 243 * OS1_S1 + 20) =
                prefactor_x * *(b + 243 * OS1_S1 + 10) -
                p_over_q * *(b + 309 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 4);
            *(b + 243 * OS1_S1 + 21) =
                prefactor_y * *(b + 243 * OS1_S1 + 10) -
                p_over_q * *(b + 316 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 10);
            *(b + 243 * OS1_S1 + 22) =
                prefactor_z * *(b + 243 * OS1_S1 + 10) -
                p_over_q * *(b + 317 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 10);
            *(b + 243 * OS1_S1 + 23) =
                prefactor_y * *(b + 243 * OS1_S1 + 11) -
                p_over_q * *(b + 316 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 11) +
                one_over_two_q * *(b + 243 * OS1_S1 + 4);
            *(b + 243 * OS1_S1 + 24) =
                prefactor_z * *(b + 243 * OS1_S1 + 11) -
                p_over_q * *(b + 317 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 11);
            *(b + 243 * OS1_S1 + 25) =
                prefactor_z * *(b + 243 * OS1_S1 + 12) -
                p_over_q * *(b + 317 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 12) +
                one_over_two_q * *(b + 243 * OS1_S1 + 4);
            *(b + 243 * OS1_S1 + 26) =
                prefactor_x * *(b + 243 * OS1_S1 + 16) -
                p_over_q * *(b + 309 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 16);
            *(b + 243 * OS1_S1 + 27) =
                prefactor_z * *(b + 243 * OS1_S1 + 13) -
                p_over_q * *(b + 317 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 13);
            *(b + 243 * OS1_S1 + 28) =
                prefactor_y * *(b + 243 * OS1_S1 + 15) -
                p_over_q * *(b + 316 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 15);
            *(b + 243 * OS1_S1 + 29) =
                prefactor_x * *(b + 243 * OS1_S1 + 19) -
                p_over_q * *(b + 309 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 19);
            *(b + 243 * OS1_S1 + 30) =
                prefactor_y * *(b + 243 * OS1_S1 + 16) -
                p_over_q * *(b + 316 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 7);
            *(b + 243 * OS1_S1 + 31) =
                prefactor_z * *(b + 243 * OS1_S1 + 16) -
                p_over_q * *(b + 317 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 16);
            *(b + 243 * OS1_S1 + 32) =
                prefactor_z * *(b + 243 * OS1_S1 + 17) -
                p_over_q * *(b + 317 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 17) +
                one_over_two_q * *(b + 243 * OS1_S1 + 7);
            *(b + 243 * OS1_S1 + 33) =
                prefactor_y * *(b + 243 * OS1_S1 + 19) -
                p_over_q * *(b + 316 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 19);
            *(b + 243 * OS1_S1 + 34) =
                prefactor_z * *(b + 243 * OS1_S1 + 19) -
                p_over_q * *(b + 317 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 9);
            *(b + 244 * OS1_S1 + 20) =
                prefactor_x * *(b + 244 * OS1_S1 + 10) -
                p_over_q * *(b + 310 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 244 * OS1_S1 + 4);
            *(b + 244 * OS1_S1 + 21) =
                prefactor_y * *(b + 244 * OS1_S1 + 10) -
                p_over_q * *(b + 317 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 10);
            *(b + 244 * OS1_S1 + 22) =
                prefactor_z * *(b + 244 * OS1_S1 + 10) -
                p_over_q * *(b + 318 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 10);
            *(b + 244 * OS1_S1 + 23) =
                prefactor_y * *(b + 244 * OS1_S1 + 11) -
                p_over_q * *(b + 317 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 11) +
                one_over_two_q * *(b + 244 * OS1_S1 + 4);
            *(b + 244 * OS1_S1 + 24) =
                prefactor_z * *(b + 244 * OS1_S1 + 11) -
                p_over_q * *(b + 318 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 11);
            *(b + 244 * OS1_S1 + 25) =
                prefactor_z * *(b + 244 * OS1_S1 + 12) -
                p_over_q * *(b + 318 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 12) +
                one_over_two_q * *(b + 244 * OS1_S1 + 4);
            *(b + 244 * OS1_S1 + 26) =
                prefactor_x * *(b + 244 * OS1_S1 + 16) -
                p_over_q * *(b + 310 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 16);
            *(b + 244 * OS1_S1 + 27) =
                prefactor_z * *(b + 244 * OS1_S1 + 13) -
                p_over_q * *(b + 318 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 13);
            *(b + 244 * OS1_S1 + 28) =
                prefactor_y * *(b + 244 * OS1_S1 + 15) -
                p_over_q * *(b + 317 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 15);
            *(b + 244 * OS1_S1 + 29) =
                prefactor_x * *(b + 244 * OS1_S1 + 19) -
                p_over_q * *(b + 310 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 19);
            *(b + 244 * OS1_S1 + 30) =
                prefactor_y * *(b + 244 * OS1_S1 + 16) -
                p_over_q * *(b + 317 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 244 * OS1_S1 + 7);
            *(b + 244 * OS1_S1 + 31) =
                prefactor_z * *(b + 244 * OS1_S1 + 16) -
                p_over_q * *(b + 318 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 16);
            *(b + 244 * OS1_S1 + 32) =
                prefactor_z * *(b + 244 * OS1_S1 + 17) -
                p_over_q * *(b + 318 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 17) +
                one_over_two_q * *(b + 244 * OS1_S1 + 7);
            *(b + 244 * OS1_S1 + 33) =
                prefactor_y * *(b + 244 * OS1_S1 + 19) -
                p_over_q * *(b + 317 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 19);
            *(b + 244 * OS1_S1 + 34) =
                prefactor_z * *(b + 244 * OS1_S1 + 19) -
                p_over_q * *(b + 318 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 244 * OS1_S1 + 9);
            *(b + 245 * OS1_S1 + 20) =
                prefactor_x * *(b + 245 * OS1_S1 + 10) -
                p_over_q * *(b + 311 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 4);
            *(b + 245 * OS1_S1 + 21) =
                prefactor_y * *(b + 245 * OS1_S1 + 10) -
                p_over_q * *(b + 318 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 10);
            *(b + 245 * OS1_S1 + 22) =
                prefactor_z * *(b + 245 * OS1_S1 + 10) -
                p_over_q * *(b + 319 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 10);
            *(b + 245 * OS1_S1 + 23) =
                prefactor_y * *(b + 245 * OS1_S1 + 11) -
                p_over_q * *(b + 318 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 11) +
                one_over_two_q * *(b + 245 * OS1_S1 + 4);
            *(b + 245 * OS1_S1 + 24) =
                prefactor_y * *(b + 245 * OS1_S1 + 12) -
                p_over_q * *(b + 318 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 12);
            *(b + 245 * OS1_S1 + 25) =
                prefactor_z * *(b + 245 * OS1_S1 + 12) -
                p_over_q * *(b + 319 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 12) +
                one_over_two_q * *(b + 245 * OS1_S1 + 4);
            *(b + 245 * OS1_S1 + 26) =
                prefactor_x * *(b + 245 * OS1_S1 + 16) -
                p_over_q * *(b + 311 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 16);
            *(b + 245 * OS1_S1 + 27) =
                prefactor_z * *(b + 245 * OS1_S1 + 13) -
                p_over_q * *(b + 319 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 13);
            *(b + 245 * OS1_S1 + 28) =
                prefactor_y * *(b + 245 * OS1_S1 + 15) -
                p_over_q * *(b + 318 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 15);
            *(b + 245 * OS1_S1 + 29) =
                prefactor_x * *(b + 245 * OS1_S1 + 19) -
                p_over_q * *(b + 311 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 19);
            *(b + 245 * OS1_S1 + 30) =
                prefactor_y * *(b + 245 * OS1_S1 + 16) -
                p_over_q * *(b + 318 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 7);
            *(b + 245 * OS1_S1 + 31) =
                prefactor_z * *(b + 245 * OS1_S1 + 16) -
                p_over_q * *(b + 319 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 16);
            *(b + 245 * OS1_S1 + 32) =
                prefactor_y * *(b + 245 * OS1_S1 + 18) -
                p_over_q * *(b + 318 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 18) +
                one_over_two_q * *(b + 245 * OS1_S1 + 9);
            *(b + 245 * OS1_S1 + 33) =
                prefactor_y * *(b + 245 * OS1_S1 + 19) -
                p_over_q * *(b + 318 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 19);
            *(b + 245 * OS1_S1 + 34) =
                prefactor_z * *(b + 245 * OS1_S1 + 19) -
                p_over_q * *(b + 319 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 9);
            *(b + 246 * OS1_S1 + 20) =
                prefactor_x * *(b + 246 * OS1_S1 + 10) -
                p_over_q * *(b + 312 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 246 * OS1_S1 + 4);
            *(b + 246 * OS1_S1 + 21) =
                prefactor_y * *(b + 246 * OS1_S1 + 10) -
                p_over_q * *(b + 319 * OS1_S1 + 10) +
                one_over_two_q * *(b + 185 * OS1_S1 + 10);
            *(b + 246 * OS1_S1 + 22) =
                prefactor_z * *(b + 246 * OS1_S1 + 10) -
                p_over_q * *(b + 320 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 10);
            *(b + 246 * OS1_S1 + 23) =
                prefactor_y * *(b + 246 * OS1_S1 + 11) -
                p_over_q * *(b + 319 * OS1_S1 + 11) +
                one_over_two_q * *(b + 185 * OS1_S1 + 11) +
                one_over_two_q * *(b + 246 * OS1_S1 + 4);
            *(b + 246 * OS1_S1 + 24) =
                prefactor_y * *(b + 246 * OS1_S1 + 12) -
                p_over_q * *(b + 319 * OS1_S1 + 12) +
                one_over_two_q * *(b + 185 * OS1_S1 + 12);
            *(b + 246 * OS1_S1 + 25) =
                prefactor_x * *(b + 246 * OS1_S1 + 15) -
                p_over_q * *(b + 312 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 15) +
                one_over_two_q * *(b + 246 * OS1_S1 + 9);
            *(b + 246 * OS1_S1 + 26) =
                prefactor_x * *(b + 246 * OS1_S1 + 16) -
                p_over_q * *(b + 312 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 16);
            *(b + 246 * OS1_S1 + 27) =
                prefactor_x * *(b + 246 * OS1_S1 + 17) -
                p_over_q * *(b + 312 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 17);
            *(b + 246 * OS1_S1 + 28) =
                prefactor_y * *(b + 246 * OS1_S1 + 15) -
                p_over_q * *(b + 319 * OS1_S1 + 15) +
                one_over_two_q * *(b + 185 * OS1_S1 + 15);
            *(b + 246 * OS1_S1 + 29) =
                prefactor_x * *(b + 246 * OS1_S1 + 19) -
                p_over_q * *(b + 312 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 19);
            *(b + 246 * OS1_S1 + 30) =
                prefactor_y * *(b + 246 * OS1_S1 + 16) -
                p_over_q * *(b + 319 * OS1_S1 + 16) +
                one_over_two_q * *(b + 185 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 246 * OS1_S1 + 7);
            *(b + 246 * OS1_S1 + 31) =
                prefactor_z * *(b + 246 * OS1_S1 + 16) -
                p_over_q * *(b + 320 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 16);
            *(b + 246 * OS1_S1 + 32) =
                prefactor_y * *(b + 246 * OS1_S1 + 18) -
                p_over_q * *(b + 319 * OS1_S1 + 18) +
                one_over_two_q * *(b + 185 * OS1_S1 + 18) +
                one_over_two_q * *(b + 246 * OS1_S1 + 9);
            *(b + 246 * OS1_S1 + 33) =
                prefactor_y * *(b + 246 * OS1_S1 + 19) -
                p_over_q * *(b + 319 * OS1_S1 + 19) +
                one_over_two_q * *(b + 185 * OS1_S1 + 19);
            *(b + 246 * OS1_S1 + 34) =
                prefactor_z * *(b + 246 * OS1_S1 + 19) -
                p_over_q * *(b + 320 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 246 * OS1_S1 + 9);
            *(b + 247 * OS1_S1 + 20) =
                prefactor_x * *(b + 247 * OS1_S1 + 10) -
                p_over_q * *(b + 313 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 247 * OS1_S1 + 4);
            *(b + 247 * OS1_S1 + 21) = prefactor_y * *(b + 247 * OS1_S1 + 10) -
                                       p_over_q * *(b + 320 * OS1_S1 + 10);
            *(b + 247 * OS1_S1 + 22) =
                prefactor_z * *(b + 247 * OS1_S1 + 10) -
                p_over_q * *(b + 321 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 10);
            *(b + 247 * OS1_S1 + 23) = prefactor_y * *(b + 247 * OS1_S1 + 11) -
                                       p_over_q * *(b + 320 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 247 * OS1_S1 + 4);
            *(b + 247 * OS1_S1 + 24) = prefactor_y * *(b + 247 * OS1_S1 + 12) -
                                       p_over_q * *(b + 320 * OS1_S1 + 12);
            *(b + 247 * OS1_S1 + 25) =
                prefactor_x * *(b + 247 * OS1_S1 + 15) -
                p_over_q * *(b + 313 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 15) +
                one_over_two_q * *(b + 247 * OS1_S1 + 9);
            *(b + 247 * OS1_S1 + 26) =
                prefactor_x * *(b + 247 * OS1_S1 + 16) -
                p_over_q * *(b + 313 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 16);
            *(b + 247 * OS1_S1 + 27) =
                prefactor_x * *(b + 247 * OS1_S1 + 17) -
                p_over_q * *(b + 313 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 17);
            *(b + 247 * OS1_S1 + 28) = prefactor_y * *(b + 247 * OS1_S1 + 15) -
                                       p_over_q * *(b + 320 * OS1_S1 + 15);
            *(b + 247 * OS1_S1 + 29) =
                prefactor_x * *(b + 247 * OS1_S1 + 19) -
                p_over_q * *(b + 313 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 19);
            *(b + 247 * OS1_S1 + 30) =
                prefactor_y * *(b + 247 * OS1_S1 + 16) -
                p_over_q * *(b + 320 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 247 * OS1_S1 + 7);
            *(b + 247 * OS1_S1 + 31) =
                prefactor_z * *(b + 247 * OS1_S1 + 16) -
                p_over_q * *(b + 321 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 16);
            *(b + 247 * OS1_S1 + 32) = prefactor_y * *(b + 247 * OS1_S1 + 18) -
                                       p_over_q * *(b + 320 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 247 * OS1_S1 + 9);
            *(b + 247 * OS1_S1 + 33) = prefactor_y * *(b + 247 * OS1_S1 + 19) -
                                       p_over_q * *(b + 320 * OS1_S1 + 19);
            *(b + 247 * OS1_S1 + 34) =
                prefactor_z * *(b + 247 * OS1_S1 + 19) -
                p_over_q * *(b + 321 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 247 * OS1_S1 + 9);
            *(b + 248 * OS1_S1 + 20) =
                prefactor_x * *(b + 248 * OS1_S1 + 10) -
                p_over_q * *(b + 314 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 248 * OS1_S1 + 4);
            *(b + 248 * OS1_S1 + 21) =
                prefactor_y * *(b + 248 * OS1_S1 + 10) -
                p_over_q * *(b + 322 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 10);
            *(b + 248 * OS1_S1 + 22) = prefactor_z * *(b + 248 * OS1_S1 + 10) -
                                       p_over_q * *(b + 323 * OS1_S1 + 10);
            *(b + 248 * OS1_S1 + 23) =
                prefactor_x * *(b + 248 * OS1_S1 + 13) -
                p_over_q * *(b + 314 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 13) +
                one_over_two_q * *(b + 248 * OS1_S1 + 7);
            *(b + 248 * OS1_S1 + 24) = prefactor_z * *(b + 248 * OS1_S1 + 11) -
                                       p_over_q * *(b + 323 * OS1_S1 + 11);
            *(b + 248 * OS1_S1 + 25) = prefactor_z * *(b + 248 * OS1_S1 + 12) -
                                       p_over_q * *(b + 323 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 248 * OS1_S1 + 4);
            *(b + 248 * OS1_S1 + 26) =
                prefactor_x * *(b + 248 * OS1_S1 + 16) -
                p_over_q * *(b + 314 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 16);
            *(b + 248 * OS1_S1 + 27) = prefactor_z * *(b + 248 * OS1_S1 + 13) -
                                       p_over_q * *(b + 323 * OS1_S1 + 13);
            *(b + 248 * OS1_S1 + 28) =
                prefactor_x * *(b + 248 * OS1_S1 + 18) -
                p_over_q * *(b + 314 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 18);
            *(b + 248 * OS1_S1 + 29) =
                prefactor_x * *(b + 248 * OS1_S1 + 19) -
                p_over_q * *(b + 314 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 19);
            *(b + 248 * OS1_S1 + 30) =
                prefactor_y * *(b + 248 * OS1_S1 + 16) -
                p_over_q * *(b + 322 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 248 * OS1_S1 + 7);
            *(b + 248 * OS1_S1 + 31) = prefactor_z * *(b + 248 * OS1_S1 + 16) -
                                       p_over_q * *(b + 323 * OS1_S1 + 16);
            *(b + 248 * OS1_S1 + 32) = prefactor_z * *(b + 248 * OS1_S1 + 17) -
                                       p_over_q * *(b + 323 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 248 * OS1_S1 + 7);
            *(b + 248 * OS1_S1 + 33) =
                prefactor_y * *(b + 248 * OS1_S1 + 19) -
                p_over_q * *(b + 322 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 19);
            *(b + 248 * OS1_S1 + 34) =
                prefactor_z * *(b + 248 * OS1_S1 + 19) -
                p_over_q * *(b + 323 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 248 * OS1_S1 + 9);
            *(b + 249 * OS1_S1 + 20) =
                prefactor_x * *(b + 249 * OS1_S1 + 10) -
                p_over_q * *(b + 315 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 249 * OS1_S1 + 4);
            *(b + 249 * OS1_S1 + 21) =
                prefactor_y * *(b + 249 * OS1_S1 + 10) -
                p_over_q * *(b + 323 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 10);
            *(b + 249 * OS1_S1 + 22) =
                prefactor_z * *(b + 249 * OS1_S1 + 10) -
                p_over_q * *(b + 324 * OS1_S1 + 10) +
                one_over_two_q * *(b + 186 * OS1_S1 + 10);
            *(b + 249 * OS1_S1 + 23) =
                prefactor_x * *(b + 249 * OS1_S1 + 13) -
                p_over_q * *(b + 315 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 13) +
                one_over_two_q * *(b + 249 * OS1_S1 + 7);
            *(b + 249 * OS1_S1 + 24) =
                prefactor_z * *(b + 249 * OS1_S1 + 11) -
                p_over_q * *(b + 324 * OS1_S1 + 11) +
                one_over_two_q * *(b + 186 * OS1_S1 + 11);
            *(b + 249 * OS1_S1 + 25) =
                prefactor_z * *(b + 249 * OS1_S1 + 12) -
                p_over_q * *(b + 324 * OS1_S1 + 12) +
                one_over_two_q * *(b + 186 * OS1_S1 + 12) +
                one_over_two_q * *(b + 249 * OS1_S1 + 4);
            *(b + 249 * OS1_S1 + 26) =
                prefactor_x * *(b + 249 * OS1_S1 + 16) -
                p_over_q * *(b + 315 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 16);
            *(b + 249 * OS1_S1 + 27) =
                prefactor_z * *(b + 249 * OS1_S1 + 13) -
                p_over_q * *(b + 324 * OS1_S1 + 13) +
                one_over_two_q * *(b + 186 * OS1_S1 + 13);
            *(b + 249 * OS1_S1 + 28) =
                prefactor_x * *(b + 249 * OS1_S1 + 18) -
                p_over_q * *(b + 315 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 18);
            *(b + 249 * OS1_S1 + 29) =
                prefactor_x * *(b + 249 * OS1_S1 + 19) -
                p_over_q * *(b + 315 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 19);
            *(b + 249 * OS1_S1 + 30) =
                prefactor_y * *(b + 249 * OS1_S1 + 16) -
                p_over_q * *(b + 323 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 249 * OS1_S1 + 7);
            *(b + 249 * OS1_S1 + 31) =
                prefactor_z * *(b + 249 * OS1_S1 + 16) -
                p_over_q * *(b + 324 * OS1_S1 + 16) +
                one_over_two_q * *(b + 186 * OS1_S1 + 16);
            *(b + 249 * OS1_S1 + 32) =
                prefactor_z * *(b + 249 * OS1_S1 + 17) -
                p_over_q * *(b + 324 * OS1_S1 + 17) +
                one_over_two_q * *(b + 186 * OS1_S1 + 17) +
                one_over_two_q * *(b + 249 * OS1_S1 + 7);
            *(b + 249 * OS1_S1 + 33) =
                prefactor_y * *(b + 249 * OS1_S1 + 19) -
                p_over_q * *(b + 323 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 19);
            *(b + 249 * OS1_S1 + 34) =
                prefactor_z * *(b + 249 * OS1_S1 + 19) -
                p_over_q * *(b + 324 * OS1_S1 + 19) +
                one_over_two_q * *(b + 186 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 249 * OS1_S1 + 9);
            *(b + 250 * OS1_S1 + 20) =
                prefactor_x * *(b + 250 * OS1_S1 + 10) -
                p_over_q * *(b + 316 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 4);
            *(b + 250 * OS1_S1 + 21) =
                prefactor_y * *(b + 250 * OS1_S1 + 10) -
                p_over_q * *(b + 324 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 10);
            *(b + 250 * OS1_S1 + 22) =
                prefactor_z * *(b + 250 * OS1_S1 + 10) -
                p_over_q * *(b + 325 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 10);
            *(b + 250 * OS1_S1 + 23) =
                prefactor_x * *(b + 250 * OS1_S1 + 13) -
                p_over_q * *(b + 316 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 13) +
                one_over_two_q * *(b + 250 * OS1_S1 + 7);
            *(b + 250 * OS1_S1 + 24) =
                prefactor_z * *(b + 250 * OS1_S1 + 11) -
                p_over_q * *(b + 325 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 11);
            *(b + 250 * OS1_S1 + 25) =
                prefactor_z * *(b + 250 * OS1_S1 + 12) -
                p_over_q * *(b + 325 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 12) +
                one_over_two_q * *(b + 250 * OS1_S1 + 4);
            *(b + 250 * OS1_S1 + 26) =
                prefactor_x * *(b + 250 * OS1_S1 + 16) -
                p_over_q * *(b + 316 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 16);
            *(b + 250 * OS1_S1 + 27) =
                prefactor_z * *(b + 250 * OS1_S1 + 13) -
                p_over_q * *(b + 325 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 13);
            *(b + 250 * OS1_S1 + 28) =
                prefactor_x * *(b + 250 * OS1_S1 + 18) -
                p_over_q * *(b + 316 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 18);
            *(b + 250 * OS1_S1 + 29) =
                prefactor_x * *(b + 250 * OS1_S1 + 19) -
                p_over_q * *(b + 316 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 19);
            *(b + 250 * OS1_S1 + 30) =
                prefactor_y * *(b + 250 * OS1_S1 + 16) -
                p_over_q * *(b + 324 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 7);
            *(b + 250 * OS1_S1 + 31) =
                prefactor_z * *(b + 250 * OS1_S1 + 16) -
                p_over_q * *(b + 325 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 16);
            *(b + 250 * OS1_S1 + 32) =
                prefactor_z * *(b + 250 * OS1_S1 + 17) -
                p_over_q * *(b + 325 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 17) +
                one_over_two_q * *(b + 250 * OS1_S1 + 7);
            *(b + 250 * OS1_S1 + 33) =
                prefactor_y * *(b + 250 * OS1_S1 + 19) -
                p_over_q * *(b + 324 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 19);
            *(b + 250 * OS1_S1 + 34) =
                prefactor_z * *(b + 250 * OS1_S1 + 19) -
                p_over_q * *(b + 325 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 9);
            *(b + 251 * OS1_S1 + 20) =
                prefactor_x * *(b + 251 * OS1_S1 + 10) -
                p_over_q * *(b + 317 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 251 * OS1_S1 + 4);
            *(b + 251 * OS1_S1 + 21) =
                prefactor_y * *(b + 251 * OS1_S1 + 10) -
                p_over_q * *(b + 325 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 10);
            *(b + 251 * OS1_S1 + 22) =
                prefactor_z * *(b + 251 * OS1_S1 + 10) -
                p_over_q * *(b + 326 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 10);
            *(b + 251 * OS1_S1 + 23) =
                prefactor_x * *(b + 251 * OS1_S1 + 13) -
                p_over_q * *(b + 317 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 13) +
                one_over_two_q * *(b + 251 * OS1_S1 + 7);
            *(b + 251 * OS1_S1 + 24) =
                prefactor_z * *(b + 251 * OS1_S1 + 11) -
                p_over_q * *(b + 326 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 11);
            *(b + 251 * OS1_S1 + 25) =
                prefactor_z * *(b + 251 * OS1_S1 + 12) -
                p_over_q * *(b + 326 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 12) +
                one_over_two_q * *(b + 251 * OS1_S1 + 4);
            *(b + 251 * OS1_S1 + 26) =
                prefactor_x * *(b + 251 * OS1_S1 + 16) -
                p_over_q * *(b + 317 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 16);
            *(b + 251 * OS1_S1 + 27) =
                prefactor_z * *(b + 251 * OS1_S1 + 13) -
                p_over_q * *(b + 326 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 13);
            *(b + 251 * OS1_S1 + 28) =
                prefactor_x * *(b + 251 * OS1_S1 + 18) -
                p_over_q * *(b + 317 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 18);
            *(b + 251 * OS1_S1 + 29) =
                prefactor_x * *(b + 251 * OS1_S1 + 19) -
                p_over_q * *(b + 317 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 19);
            *(b + 251 * OS1_S1 + 30) =
                prefactor_y * *(b + 251 * OS1_S1 + 16) -
                p_over_q * *(b + 325 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 251 * OS1_S1 + 7);
            *(b + 251 * OS1_S1 + 31) =
                prefactor_z * *(b + 251 * OS1_S1 + 16) -
                p_over_q * *(b + 326 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 16);
            *(b + 251 * OS1_S1 + 32) =
                prefactor_z * *(b + 251 * OS1_S1 + 17) -
                p_over_q * *(b + 326 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 17) +
                one_over_two_q * *(b + 251 * OS1_S1 + 7);
            *(b + 251 * OS1_S1 + 33) =
                prefactor_y * *(b + 251 * OS1_S1 + 19) -
                p_over_q * *(b + 325 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 19);
            *(b + 251 * OS1_S1 + 34) =
                prefactor_z * *(b + 251 * OS1_S1 + 19) -
                p_over_q * *(b + 326 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 251 * OS1_S1 + 9);
            *(b + 252 * OS1_S1 + 20) =
                prefactor_x * *(b + 252 * OS1_S1 + 10) -
                p_over_q * *(b + 318 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 252 * OS1_S1 + 4);
            *(b + 252 * OS1_S1 + 21) =
                prefactor_y * *(b + 252 * OS1_S1 + 10) -
                p_over_q * *(b + 326 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 10);
            *(b + 252 * OS1_S1 + 22) =
                prefactor_z * *(b + 252 * OS1_S1 + 10) -
                p_over_q * *(b + 327 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 10);
            *(b + 252 * OS1_S1 + 23) =
                prefactor_y * *(b + 252 * OS1_S1 + 11) -
                p_over_q * *(b + 326 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 11) +
                one_over_two_q * *(b + 252 * OS1_S1 + 4);
            *(b + 252 * OS1_S1 + 24) =
                prefactor_y * *(b + 252 * OS1_S1 + 12) -
                p_over_q * *(b + 326 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 12);
            *(b + 252 * OS1_S1 + 25) =
                prefactor_x * *(b + 252 * OS1_S1 + 15) -
                p_over_q * *(b + 318 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 15) +
                one_over_two_q * *(b + 252 * OS1_S1 + 9);
            *(b + 252 * OS1_S1 + 26) =
                prefactor_x * *(b + 252 * OS1_S1 + 16) -
                p_over_q * *(b + 318 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 16);
            *(b + 252 * OS1_S1 + 27) =
                prefactor_x * *(b + 252 * OS1_S1 + 17) -
                p_over_q * *(b + 318 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 17);
            *(b + 252 * OS1_S1 + 28) =
                prefactor_y * *(b + 252 * OS1_S1 + 15) -
                p_over_q * *(b + 326 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 15);
            *(b + 252 * OS1_S1 + 29) =
                prefactor_x * *(b + 252 * OS1_S1 + 19) -
                p_over_q * *(b + 318 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 19);
            *(b + 252 * OS1_S1 + 30) =
                prefactor_y * *(b + 252 * OS1_S1 + 16) -
                p_over_q * *(b + 326 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 252 * OS1_S1 + 7);
            *(b + 252 * OS1_S1 + 31) =
                prefactor_z * *(b + 252 * OS1_S1 + 16) -
                p_over_q * *(b + 327 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 16);
            *(b + 252 * OS1_S1 + 32) =
                prefactor_y * *(b + 252 * OS1_S1 + 18) -
                p_over_q * *(b + 326 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 18) +
                one_over_two_q * *(b + 252 * OS1_S1 + 9);
            *(b + 252 * OS1_S1 + 33) =
                prefactor_y * *(b + 252 * OS1_S1 + 19) -
                p_over_q * *(b + 326 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 19);
            *(b + 252 * OS1_S1 + 34) =
                prefactor_z * *(b + 252 * OS1_S1 + 19) -
                p_over_q * *(b + 327 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 252 * OS1_S1 + 9);
            *(b + 253 * OS1_S1 + 20) =
                prefactor_x * *(b + 253 * OS1_S1 + 10) -
                p_over_q * *(b + 319 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 4);
            *(b + 253 * OS1_S1 + 21) =
                prefactor_y * *(b + 253 * OS1_S1 + 10) -
                p_over_q * *(b + 327 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 10);
            *(b + 253 * OS1_S1 + 22) =
                prefactor_z * *(b + 253 * OS1_S1 + 10) -
                p_over_q * *(b + 328 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 10);
            *(b + 253 * OS1_S1 + 23) =
                prefactor_y * *(b + 253 * OS1_S1 + 11) -
                p_over_q * *(b + 327 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 11) +
                one_over_two_q * *(b + 253 * OS1_S1 + 4);
            *(b + 253 * OS1_S1 + 24) =
                prefactor_y * *(b + 253 * OS1_S1 + 12) -
                p_over_q * *(b + 327 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 12);
            *(b + 253 * OS1_S1 + 25) =
                prefactor_x * *(b + 253 * OS1_S1 + 15) -
                p_over_q * *(b + 319 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 15) +
                one_over_two_q * *(b + 253 * OS1_S1 + 9);
            *(b + 253 * OS1_S1 + 26) =
                prefactor_x * *(b + 253 * OS1_S1 + 16) -
                p_over_q * *(b + 319 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 16);
            *(b + 253 * OS1_S1 + 27) =
                prefactor_x * *(b + 253 * OS1_S1 + 17) -
                p_over_q * *(b + 319 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 17);
            *(b + 253 * OS1_S1 + 28) =
                prefactor_y * *(b + 253 * OS1_S1 + 15) -
                p_over_q * *(b + 327 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 15);
            *(b + 253 * OS1_S1 + 29) =
                prefactor_x * *(b + 253 * OS1_S1 + 19) -
                p_over_q * *(b + 319 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 19);
            *(b + 253 * OS1_S1 + 30) =
                prefactor_y * *(b + 253 * OS1_S1 + 16) -
                p_over_q * *(b + 327 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 7);
            *(b + 253 * OS1_S1 + 31) =
                prefactor_z * *(b + 253 * OS1_S1 + 16) -
                p_over_q * *(b + 328 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 16);
            *(b + 253 * OS1_S1 + 32) =
                prefactor_y * *(b + 253 * OS1_S1 + 18) -
                p_over_q * *(b + 327 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 18) +
                one_over_two_q * *(b + 253 * OS1_S1 + 9);
            *(b + 253 * OS1_S1 + 33) =
                prefactor_y * *(b + 253 * OS1_S1 + 19) -
                p_over_q * *(b + 327 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 19);
            *(b + 253 * OS1_S1 + 34) =
                prefactor_z * *(b + 253 * OS1_S1 + 19) -
                p_over_q * *(b + 328 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 9);
            *(b + 254 * OS1_S1 + 20) =
                prefactor_x * *(b + 254 * OS1_S1 + 10) -
                p_over_q * *(b + 320 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 254 * OS1_S1 + 4);
            *(b + 254 * OS1_S1 + 21) =
                prefactor_y * *(b + 254 * OS1_S1 + 10) -
                p_over_q * *(b + 328 * OS1_S1 + 10) +
                one_over_two_q * *(b + 192 * OS1_S1 + 10);
            *(b + 254 * OS1_S1 + 22) =
                prefactor_z * *(b + 254 * OS1_S1 + 10) -
                p_over_q * *(b + 329 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 10);
            *(b + 254 * OS1_S1 + 23) =
                prefactor_y * *(b + 254 * OS1_S1 + 11) -
                p_over_q * *(b + 328 * OS1_S1 + 11) +
                one_over_two_q * *(b + 192 * OS1_S1 + 11) +
                one_over_two_q * *(b + 254 * OS1_S1 + 4);
            *(b + 254 * OS1_S1 + 24) =
                prefactor_y * *(b + 254 * OS1_S1 + 12) -
                p_over_q * *(b + 328 * OS1_S1 + 12) +
                one_over_two_q * *(b + 192 * OS1_S1 + 12);
            *(b + 254 * OS1_S1 + 25) =
                prefactor_x * *(b + 254 * OS1_S1 + 15) -
                p_over_q * *(b + 320 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 15) +
                one_over_two_q * *(b + 254 * OS1_S1 + 9);
            *(b + 254 * OS1_S1 + 26) =
                prefactor_x * *(b + 254 * OS1_S1 + 16) -
                p_over_q * *(b + 320 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 16);
            *(b + 254 * OS1_S1 + 27) =
                prefactor_x * *(b + 254 * OS1_S1 + 17) -
                p_over_q * *(b + 320 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 17);
            *(b + 254 * OS1_S1 + 28) =
                prefactor_y * *(b + 254 * OS1_S1 + 15) -
                p_over_q * *(b + 328 * OS1_S1 + 15) +
                one_over_two_q * *(b + 192 * OS1_S1 + 15);
            *(b + 254 * OS1_S1 + 29) =
                prefactor_x * *(b + 254 * OS1_S1 + 19) -
                p_over_q * *(b + 320 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 19);
            *(b + 254 * OS1_S1 + 30) =
                prefactor_y * *(b + 254 * OS1_S1 + 16) -
                p_over_q * *(b + 328 * OS1_S1 + 16) +
                one_over_two_q * *(b + 192 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 254 * OS1_S1 + 7);
            *(b + 254 * OS1_S1 + 31) =
                prefactor_z * *(b + 254 * OS1_S1 + 16) -
                p_over_q * *(b + 329 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 16);
            *(b + 254 * OS1_S1 + 32) =
                prefactor_y * *(b + 254 * OS1_S1 + 18) -
                p_over_q * *(b + 328 * OS1_S1 + 18) +
                one_over_two_q * *(b + 192 * OS1_S1 + 18) +
                one_over_two_q * *(b + 254 * OS1_S1 + 9);
            *(b + 254 * OS1_S1 + 33) =
                prefactor_y * *(b + 254 * OS1_S1 + 19) -
                p_over_q * *(b + 328 * OS1_S1 + 19) +
                one_over_two_q * *(b + 192 * OS1_S1 + 19);
            *(b + 254 * OS1_S1 + 34) =
                prefactor_z * *(b + 254 * OS1_S1 + 19) -
                p_over_q * *(b + 329 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 254 * OS1_S1 + 9);
            *(b + 255 * OS1_S1 + 20) =
                prefactor_x * *(b + 255 * OS1_S1 + 10) -
                p_over_q * *(b + 321 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 255 * OS1_S1 + 4);
            *(b + 255 * OS1_S1 + 21) = prefactor_y * *(b + 255 * OS1_S1 + 10) -
                                       p_over_q * *(b + 329 * OS1_S1 + 10);
            *(b + 255 * OS1_S1 + 22) =
                prefactor_z * *(b + 255 * OS1_S1 + 10) -
                p_over_q * *(b + 330 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 10);
            *(b + 255 * OS1_S1 + 23) = prefactor_y * *(b + 255 * OS1_S1 + 11) -
                                       p_over_q * *(b + 329 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 255 * OS1_S1 + 4);
            *(b + 255 * OS1_S1 + 24) = prefactor_y * *(b + 255 * OS1_S1 + 12) -
                                       p_over_q * *(b + 329 * OS1_S1 + 12);
            *(b + 255 * OS1_S1 + 25) =
                prefactor_x * *(b + 255 * OS1_S1 + 15) -
                p_over_q * *(b + 321 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 15) +
                one_over_two_q * *(b + 255 * OS1_S1 + 9);
            *(b + 255 * OS1_S1 + 26) =
                prefactor_x * *(b + 255 * OS1_S1 + 16) -
                p_over_q * *(b + 321 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 16);
            *(b + 255 * OS1_S1 + 27) =
                prefactor_x * *(b + 255 * OS1_S1 + 17) -
                p_over_q * *(b + 321 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 17);
            *(b + 255 * OS1_S1 + 28) = prefactor_y * *(b + 255 * OS1_S1 + 15) -
                                       p_over_q * *(b + 329 * OS1_S1 + 15);
            *(b + 255 * OS1_S1 + 29) =
                prefactor_x * *(b + 255 * OS1_S1 + 19) -
                p_over_q * *(b + 321 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 19);
            *(b + 255 * OS1_S1 + 30) =
                prefactor_y * *(b + 255 * OS1_S1 + 16) -
                p_over_q * *(b + 329 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 255 * OS1_S1 + 7);
            *(b + 255 * OS1_S1 + 31) =
                prefactor_z * *(b + 255 * OS1_S1 + 16) -
                p_over_q * *(b + 330 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 16);
            *(b + 255 * OS1_S1 + 32) = prefactor_y * *(b + 255 * OS1_S1 + 18) -
                                       p_over_q * *(b + 329 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 255 * OS1_S1 + 9);
            *(b + 255 * OS1_S1 + 33) = prefactor_y * *(b + 255 * OS1_S1 + 19) -
                                       p_over_q * *(b + 329 * OS1_S1 + 19);
            *(b + 255 * OS1_S1 + 34) =
                prefactor_z * *(b + 255 * OS1_S1 + 19) -
                p_over_q * *(b + 330 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 255 * OS1_S1 + 9);
            *(b + 256 * OS1_S1 + 20) =
                prefactor_x * *(b + 256 * OS1_S1 + 10) -
                p_over_q * *(b + 322 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 4);
            *(b + 256 * OS1_S1 + 21) =
                prefactor_y * *(b + 256 * OS1_S1 + 10) -
                p_over_q * *(b + 331 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 10);
            *(b + 256 * OS1_S1 + 22) = prefactor_z * *(b + 256 * OS1_S1 + 10) -
                                       p_over_q * *(b + 332 * OS1_S1 + 10);
            *(b + 256 * OS1_S1 + 23) =
                prefactor_x * *(b + 256 * OS1_S1 + 13) -
                p_over_q * *(b + 322 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 13) +
                one_over_two_q * *(b + 256 * OS1_S1 + 7);
            *(b + 256 * OS1_S1 + 24) = prefactor_z * *(b + 256 * OS1_S1 + 11) -
                                       p_over_q * *(b + 332 * OS1_S1 + 11);
            *(b + 256 * OS1_S1 + 25) = prefactor_z * *(b + 256 * OS1_S1 + 12) -
                                       p_over_q * *(b + 332 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 256 * OS1_S1 + 4);
            *(b + 256 * OS1_S1 + 26) =
                prefactor_x * *(b + 256 * OS1_S1 + 16) -
                p_over_q * *(b + 322 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 16);
            *(b + 256 * OS1_S1 + 27) = prefactor_z * *(b + 256 * OS1_S1 + 13) -
                                       p_over_q * *(b + 332 * OS1_S1 + 13);
            *(b + 256 * OS1_S1 + 28) =
                prefactor_x * *(b + 256 * OS1_S1 + 18) -
                p_over_q * *(b + 322 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 18);
            *(b + 256 * OS1_S1 + 29) =
                prefactor_x * *(b + 256 * OS1_S1 + 19) -
                p_over_q * *(b + 322 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 19);
            *(b + 256 * OS1_S1 + 30) =
                prefactor_y * *(b + 256 * OS1_S1 + 16) -
                p_over_q * *(b + 331 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 7);
            *(b + 256 * OS1_S1 + 31) = prefactor_z * *(b + 256 * OS1_S1 + 16) -
                                       p_over_q * *(b + 332 * OS1_S1 + 16);
            *(b + 256 * OS1_S1 + 32) = prefactor_z * *(b + 256 * OS1_S1 + 17) -
                                       p_over_q * *(b + 332 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 256 * OS1_S1 + 7);
            *(b + 256 * OS1_S1 + 33) =
                prefactor_y * *(b + 256 * OS1_S1 + 19) -
                p_over_q * *(b + 331 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 19);
            *(b + 256 * OS1_S1 + 34) =
                prefactor_z * *(b + 256 * OS1_S1 + 19) -
                p_over_q * *(b + 332 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 9);
            *(b + 257 * OS1_S1 + 20) =
                prefactor_x * *(b + 257 * OS1_S1 + 10) -
                p_over_q * *(b + 323 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 4);
            *(b + 257 * OS1_S1 + 21) =
                prefactor_y * *(b + 257 * OS1_S1 + 10) -
                p_over_q * *(b + 332 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 10);
            *(b + 257 * OS1_S1 + 22) =
                prefactor_z * *(b + 257 * OS1_S1 + 10) -
                p_over_q * *(b + 333 * OS1_S1 + 10) +
                one_over_two_q * *(b + 193 * OS1_S1 + 10);
            *(b + 257 * OS1_S1 + 23) =
                prefactor_x * *(b + 257 * OS1_S1 + 13) -
                p_over_q * *(b + 323 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 13) +
                one_over_two_q * *(b + 257 * OS1_S1 + 7);
            *(b + 257 * OS1_S1 + 24) =
                prefactor_z * *(b + 257 * OS1_S1 + 11) -
                p_over_q * *(b + 333 * OS1_S1 + 11) +
                one_over_two_q * *(b + 193 * OS1_S1 + 11);
            *(b + 257 * OS1_S1 + 25) =
                prefactor_z * *(b + 257 * OS1_S1 + 12) -
                p_over_q * *(b + 333 * OS1_S1 + 12) +
                one_over_two_q * *(b + 193 * OS1_S1 + 12) +
                one_over_two_q * *(b + 257 * OS1_S1 + 4);
            *(b + 257 * OS1_S1 + 26) =
                prefactor_x * *(b + 257 * OS1_S1 + 16) -
                p_over_q * *(b + 323 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 16);
            *(b + 257 * OS1_S1 + 27) =
                prefactor_z * *(b + 257 * OS1_S1 + 13) -
                p_over_q * *(b + 333 * OS1_S1 + 13) +
                one_over_two_q * *(b + 193 * OS1_S1 + 13);
            *(b + 257 * OS1_S1 + 28) =
                prefactor_x * *(b + 257 * OS1_S1 + 18) -
                p_over_q * *(b + 323 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 18);
            *(b + 257 * OS1_S1 + 29) =
                prefactor_x * *(b + 257 * OS1_S1 + 19) -
                p_over_q * *(b + 323 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 19);
            *(b + 257 * OS1_S1 + 30) =
                prefactor_y * *(b + 257 * OS1_S1 + 16) -
                p_over_q * *(b + 332 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 7);
            *(b + 257 * OS1_S1 + 31) =
                prefactor_z * *(b + 257 * OS1_S1 + 16) -
                p_over_q * *(b + 333 * OS1_S1 + 16) +
                one_over_two_q * *(b + 193 * OS1_S1 + 16);
            *(b + 257 * OS1_S1 + 32) =
                prefactor_z * *(b + 257 * OS1_S1 + 17) -
                p_over_q * *(b + 333 * OS1_S1 + 17) +
                one_over_two_q * *(b + 193 * OS1_S1 + 17) +
                one_over_two_q * *(b + 257 * OS1_S1 + 7);
            *(b + 257 * OS1_S1 + 33) =
                prefactor_y * *(b + 257 * OS1_S1 + 19) -
                p_over_q * *(b + 332 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 19);
            *(b + 257 * OS1_S1 + 34) =
                prefactor_z * *(b + 257 * OS1_S1 + 19) -
                p_over_q * *(b + 333 * OS1_S1 + 19) +
                one_over_two_q * *(b + 193 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 9);
            *(b + 258 * OS1_S1 + 20) =
                prefactor_x * *(b + 258 * OS1_S1 + 10) -
                p_over_q * *(b + 324 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 4);
            *(b + 258 * OS1_S1 + 21) =
                prefactor_y * *(b + 258 * OS1_S1 + 10) -
                p_over_q * *(b + 333 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 10);
            *(b + 258 * OS1_S1 + 22) =
                prefactor_z * *(b + 258 * OS1_S1 + 10) -
                p_over_q * *(b + 334 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 10);
            *(b + 258 * OS1_S1 + 23) =
                prefactor_x * *(b + 258 * OS1_S1 + 13) -
                p_over_q * *(b + 324 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 13) +
                one_over_two_q * *(b + 258 * OS1_S1 + 7);
            *(b + 258 * OS1_S1 + 24) =
                prefactor_z * *(b + 258 * OS1_S1 + 11) -
                p_over_q * *(b + 334 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 11);
            *(b + 258 * OS1_S1 + 25) =
                prefactor_z * *(b + 258 * OS1_S1 + 12) -
                p_over_q * *(b + 334 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 12) +
                one_over_two_q * *(b + 258 * OS1_S1 + 4);
            *(b + 258 * OS1_S1 + 26) =
                prefactor_x * *(b + 258 * OS1_S1 + 16) -
                p_over_q * *(b + 324 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 16);
            *(b + 258 * OS1_S1 + 27) =
                prefactor_z * *(b + 258 * OS1_S1 + 13) -
                p_over_q * *(b + 334 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 13);
            *(b + 258 * OS1_S1 + 28) =
                prefactor_x * *(b + 258 * OS1_S1 + 18) -
                p_over_q * *(b + 324 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 18);
            *(b + 258 * OS1_S1 + 29) =
                prefactor_x * *(b + 258 * OS1_S1 + 19) -
                p_over_q * *(b + 324 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 19);
            *(b + 258 * OS1_S1 + 30) =
                prefactor_y * *(b + 258 * OS1_S1 + 16) -
                p_over_q * *(b + 333 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 7);
            *(b + 258 * OS1_S1 + 31) =
                prefactor_z * *(b + 258 * OS1_S1 + 16) -
                p_over_q * *(b + 334 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 16);
            *(b + 258 * OS1_S1 + 32) =
                prefactor_z * *(b + 258 * OS1_S1 + 17) -
                p_over_q * *(b + 334 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 17) +
                one_over_two_q * *(b + 258 * OS1_S1 + 7);
            *(b + 258 * OS1_S1 + 33) =
                prefactor_y * *(b + 258 * OS1_S1 + 19) -
                p_over_q * *(b + 333 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 19);
            *(b + 258 * OS1_S1 + 34) =
                prefactor_z * *(b + 258 * OS1_S1 + 19) -
                p_over_q * *(b + 334 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 9);
            *(b + 259 * OS1_S1 + 20) =
                prefactor_x * *(b + 259 * OS1_S1 + 10) -
                p_over_q * *(b + 325 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 4);
            *(b + 259 * OS1_S1 + 21) =
                prefactor_y * *(b + 259 * OS1_S1 + 10) -
                p_over_q * *(b + 334 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 10);
            *(b + 259 * OS1_S1 + 22) =
                prefactor_z * *(b + 259 * OS1_S1 + 10) -
                p_over_q * *(b + 335 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 10);
            *(b + 259 * OS1_S1 + 23) =
                prefactor_x * *(b + 259 * OS1_S1 + 13) -
                p_over_q * *(b + 325 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 13) +
                one_over_two_q * *(b + 259 * OS1_S1 + 7);
            *(b + 259 * OS1_S1 + 24) =
                prefactor_z * *(b + 259 * OS1_S1 + 11) -
                p_over_q * *(b + 335 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 11);
            *(b + 259 * OS1_S1 + 25) =
                prefactor_x * *(b + 259 * OS1_S1 + 15) -
                p_over_q * *(b + 325 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 15) +
                one_over_two_q * *(b + 259 * OS1_S1 + 9);
            *(b + 259 * OS1_S1 + 26) =
                prefactor_x * *(b + 259 * OS1_S1 + 16) -
                p_over_q * *(b + 325 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 16);
            *(b + 259 * OS1_S1 + 27) =
                prefactor_x * *(b + 259 * OS1_S1 + 17) -
                p_over_q * *(b + 325 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 17);
            *(b + 259 * OS1_S1 + 28) =
                prefactor_x * *(b + 259 * OS1_S1 + 18) -
                p_over_q * *(b + 325 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 18);
            *(b + 259 * OS1_S1 + 29) =
                prefactor_x * *(b + 259 * OS1_S1 + 19) -
                p_over_q * *(b + 325 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 19);
            *(b + 259 * OS1_S1 + 30) =
                prefactor_y * *(b + 259 * OS1_S1 + 16) -
                p_over_q * *(b + 334 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 7);
            *(b + 259 * OS1_S1 + 31) =
                prefactor_z * *(b + 259 * OS1_S1 + 16) -
                p_over_q * *(b + 335 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 16);
            *(b + 259 * OS1_S1 + 32) =
                prefactor_z * *(b + 259 * OS1_S1 + 17) -
                p_over_q * *(b + 335 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 17) +
                one_over_two_q * *(b + 259 * OS1_S1 + 7);
            *(b + 259 * OS1_S1 + 33) =
                prefactor_y * *(b + 259 * OS1_S1 + 19) -
                p_over_q * *(b + 334 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 19);
            *(b + 259 * OS1_S1 + 34) =
                prefactor_z * *(b + 259 * OS1_S1 + 19) -
                p_over_q * *(b + 335 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 9);
            *(b + 260 * OS1_S1 + 20) =
                prefactor_x * *(b + 260 * OS1_S1 + 10) -
                p_over_q * *(b + 326 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 4);
            *(b + 260 * OS1_S1 + 21) =
                prefactor_y * *(b + 260 * OS1_S1 + 10) -
                p_over_q * *(b + 335 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 10);
            *(b + 260 * OS1_S1 + 22) =
                prefactor_z * *(b + 260 * OS1_S1 + 10) -
                p_over_q * *(b + 336 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 10);
            *(b + 260 * OS1_S1 + 23) =
                prefactor_x * *(b + 260 * OS1_S1 + 13) -
                p_over_q * *(b + 326 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 13) +
                one_over_two_q * *(b + 260 * OS1_S1 + 7);
            *(b + 260 * OS1_S1 + 24) =
                prefactor_z * *(b + 260 * OS1_S1 + 11) -
                p_over_q * *(b + 336 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 11);
            *(b + 260 * OS1_S1 + 25) =
                prefactor_x * *(b + 260 * OS1_S1 + 15) -
                p_over_q * *(b + 326 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 15) +
                one_over_two_q * *(b + 260 * OS1_S1 + 9);
            *(b + 260 * OS1_S1 + 26) =
                prefactor_x * *(b + 260 * OS1_S1 + 16) -
                p_over_q * *(b + 326 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 16);
            *(b + 260 * OS1_S1 + 27) =
                prefactor_x * *(b + 260 * OS1_S1 + 17) -
                p_over_q * *(b + 326 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 17);
            *(b + 260 * OS1_S1 + 28) =
                prefactor_x * *(b + 260 * OS1_S1 + 18) -
                p_over_q * *(b + 326 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 18);
            *(b + 260 * OS1_S1 + 29) =
                prefactor_x * *(b + 260 * OS1_S1 + 19) -
                p_over_q * *(b + 326 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 19);
            *(b + 260 * OS1_S1 + 30) =
                prefactor_y * *(b + 260 * OS1_S1 + 16) -
                p_over_q * *(b + 335 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 7);
            *(b + 260 * OS1_S1 + 31) =
                prefactor_z * *(b + 260 * OS1_S1 + 16) -
                p_over_q * *(b + 336 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 16);
            *(b + 260 * OS1_S1 + 32) =
                prefactor_z * *(b + 260 * OS1_S1 + 17) -
                p_over_q * *(b + 336 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 17) +
                one_over_two_q * *(b + 260 * OS1_S1 + 7);
            *(b + 260 * OS1_S1 + 33) =
                prefactor_y * *(b + 260 * OS1_S1 + 19) -
                p_over_q * *(b + 335 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 19);
            *(b + 260 * OS1_S1 + 34) =
                prefactor_z * *(b + 260 * OS1_S1 + 19) -
                p_over_q * *(b + 336 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 9);
            *(b + 261 * OS1_S1 + 20) =
                prefactor_x * *(b + 261 * OS1_S1 + 10) -
                p_over_q * *(b + 327 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 4);
            *(b + 261 * OS1_S1 + 21) =
                prefactor_y * *(b + 261 * OS1_S1 + 10) -
                p_over_q * *(b + 336 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 10);
            *(b + 261 * OS1_S1 + 22) =
                prefactor_z * *(b + 261 * OS1_S1 + 10) -
                p_over_q * *(b + 337 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 10);
            *(b + 261 * OS1_S1 + 23) =
                prefactor_x * *(b + 261 * OS1_S1 + 13) -
                p_over_q * *(b + 327 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 13) +
                one_over_two_q * *(b + 261 * OS1_S1 + 7);
            *(b + 261 * OS1_S1 + 24) =
                prefactor_y * *(b + 261 * OS1_S1 + 12) -
                p_over_q * *(b + 336 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 12);
            *(b + 261 * OS1_S1 + 25) =
                prefactor_x * *(b + 261 * OS1_S1 + 15) -
                p_over_q * *(b + 327 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 15) +
                one_over_two_q * *(b + 261 * OS1_S1 + 9);
            *(b + 261 * OS1_S1 + 26) =
                prefactor_x * *(b + 261 * OS1_S1 + 16) -
                p_over_q * *(b + 327 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 16);
            *(b + 261 * OS1_S1 + 27) =
                prefactor_x * *(b + 261 * OS1_S1 + 17) -
                p_over_q * *(b + 327 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 17);
            *(b + 261 * OS1_S1 + 28) =
                prefactor_x * *(b + 261 * OS1_S1 + 18) -
                p_over_q * *(b + 327 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 18);
            *(b + 261 * OS1_S1 + 29) =
                prefactor_x * *(b + 261 * OS1_S1 + 19) -
                p_over_q * *(b + 327 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 19);
            *(b + 261 * OS1_S1 + 30) =
                prefactor_y * *(b + 261 * OS1_S1 + 16) -
                p_over_q * *(b + 336 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 7);
            *(b + 261 * OS1_S1 + 31) =
                prefactor_z * *(b + 261 * OS1_S1 + 16) -
                p_over_q * *(b + 337 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 16);
            *(b + 261 * OS1_S1 + 32) =
                prefactor_y * *(b + 261 * OS1_S1 + 18) -
                p_over_q * *(b + 336 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 18) +
                one_over_two_q * *(b + 261 * OS1_S1 + 9);
            *(b + 261 * OS1_S1 + 33) =
                prefactor_y * *(b + 261 * OS1_S1 + 19) -
                p_over_q * *(b + 336 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 19);
            *(b + 261 * OS1_S1 + 34) =
                prefactor_z * *(b + 261 * OS1_S1 + 19) -
                p_over_q * *(b + 337 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 9);
            *(b + 262 * OS1_S1 + 20) =
                prefactor_x * *(b + 262 * OS1_S1 + 10) -
                p_over_q * *(b + 328 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 4);
            *(b + 262 * OS1_S1 + 21) =
                prefactor_y * *(b + 262 * OS1_S1 + 10) -
                p_over_q * *(b + 337 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 10);
            *(b + 262 * OS1_S1 + 22) =
                prefactor_z * *(b + 262 * OS1_S1 + 10) -
                p_over_q * *(b + 338 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 10);
            *(b + 262 * OS1_S1 + 23) =
                prefactor_y * *(b + 262 * OS1_S1 + 11) -
                p_over_q * *(b + 337 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 11) +
                one_over_two_q * *(b + 262 * OS1_S1 + 4);
            *(b + 262 * OS1_S1 + 24) =
                prefactor_y * *(b + 262 * OS1_S1 + 12) -
                p_over_q * *(b + 337 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 12);
            *(b + 262 * OS1_S1 + 25) =
                prefactor_x * *(b + 262 * OS1_S1 + 15) -
                p_over_q * *(b + 328 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 15) +
                one_over_two_q * *(b + 262 * OS1_S1 + 9);
            *(b + 262 * OS1_S1 + 26) =
                prefactor_x * *(b + 262 * OS1_S1 + 16) -
                p_over_q * *(b + 328 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 16);
            *(b + 262 * OS1_S1 + 27) =
                prefactor_x * *(b + 262 * OS1_S1 + 17) -
                p_over_q * *(b + 328 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 17);
            *(b + 262 * OS1_S1 + 28) =
                prefactor_y * *(b + 262 * OS1_S1 + 15) -
                p_over_q * *(b + 337 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 15);
            *(b + 262 * OS1_S1 + 29) =
                prefactor_x * *(b + 262 * OS1_S1 + 19) -
                p_over_q * *(b + 328 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 19);
            *(b + 262 * OS1_S1 + 30) =
                prefactor_y * *(b + 262 * OS1_S1 + 16) -
                p_over_q * *(b + 337 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 7);
            *(b + 262 * OS1_S1 + 31) =
                prefactor_z * *(b + 262 * OS1_S1 + 16) -
                p_over_q * *(b + 338 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 16);
            *(b + 262 * OS1_S1 + 32) =
                prefactor_y * *(b + 262 * OS1_S1 + 18) -
                p_over_q * *(b + 337 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 18) +
                one_over_two_q * *(b + 262 * OS1_S1 + 9);
            *(b + 262 * OS1_S1 + 33) =
                prefactor_y * *(b + 262 * OS1_S1 + 19) -
                p_over_q * *(b + 337 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 19);
            *(b + 262 * OS1_S1 + 34) =
                prefactor_z * *(b + 262 * OS1_S1 + 19) -
                p_over_q * *(b + 338 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 9);
            *(b + 263 * OS1_S1 + 20) =
                prefactor_x * *(b + 263 * OS1_S1 + 10) -
                p_over_q * *(b + 329 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 4);
            *(b + 263 * OS1_S1 + 21) =
                prefactor_y * *(b + 263 * OS1_S1 + 10) -
                p_over_q * *(b + 338 * OS1_S1 + 10) +
                one_over_two_q * *(b + 200 * OS1_S1 + 10);
            *(b + 263 * OS1_S1 + 22) =
                prefactor_z * *(b + 263 * OS1_S1 + 10) -
                p_over_q * *(b + 339 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 10);
            *(b + 263 * OS1_S1 + 23) =
                prefactor_y * *(b + 263 * OS1_S1 + 11) -
                p_over_q * *(b + 338 * OS1_S1 + 11) +
                one_over_two_q * *(b + 200 * OS1_S1 + 11) +
                one_over_two_q * *(b + 263 * OS1_S1 + 4);
            *(b + 263 * OS1_S1 + 24) =
                prefactor_y * *(b + 263 * OS1_S1 + 12) -
                p_over_q * *(b + 338 * OS1_S1 + 12) +
                one_over_two_q * *(b + 200 * OS1_S1 + 12);
            *(b + 263 * OS1_S1 + 25) =
                prefactor_x * *(b + 263 * OS1_S1 + 15) -
                p_over_q * *(b + 329 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 15) +
                one_over_two_q * *(b + 263 * OS1_S1 + 9);
            *(b + 263 * OS1_S1 + 26) =
                prefactor_x * *(b + 263 * OS1_S1 + 16) -
                p_over_q * *(b + 329 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 16);
            *(b + 263 * OS1_S1 + 27) =
                prefactor_x * *(b + 263 * OS1_S1 + 17) -
                p_over_q * *(b + 329 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 17);
            *(b + 263 * OS1_S1 + 28) =
                prefactor_y * *(b + 263 * OS1_S1 + 15) -
                p_over_q * *(b + 338 * OS1_S1 + 15) +
                one_over_two_q * *(b + 200 * OS1_S1 + 15);
            *(b + 263 * OS1_S1 + 29) =
                prefactor_x * *(b + 263 * OS1_S1 + 19) -
                p_over_q * *(b + 329 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 19);
            *(b + 263 * OS1_S1 + 30) =
                prefactor_y * *(b + 263 * OS1_S1 + 16) -
                p_over_q * *(b + 338 * OS1_S1 + 16) +
                one_over_two_q * *(b + 200 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 7);
            *(b + 263 * OS1_S1 + 31) =
                prefactor_z * *(b + 263 * OS1_S1 + 16) -
                p_over_q * *(b + 339 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 16);
            *(b + 263 * OS1_S1 + 32) =
                prefactor_y * *(b + 263 * OS1_S1 + 18) -
                p_over_q * *(b + 338 * OS1_S1 + 18) +
                one_over_two_q * *(b + 200 * OS1_S1 + 18) +
                one_over_two_q * *(b + 263 * OS1_S1 + 9);
            *(b + 263 * OS1_S1 + 33) =
                prefactor_y * *(b + 263 * OS1_S1 + 19) -
                p_over_q * *(b + 338 * OS1_S1 + 19) +
                one_over_two_q * *(b + 200 * OS1_S1 + 19);
            *(b + 263 * OS1_S1 + 34) =
                prefactor_z * *(b + 263 * OS1_S1 + 19) -
                p_over_q * *(b + 339 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 9);
            *(b + 264 * OS1_S1 + 20) =
                prefactor_x * *(b + 264 * OS1_S1 + 10) -
                p_over_q * *(b + 330 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 4);
            *(b + 264 * OS1_S1 + 21) = prefactor_y * *(b + 264 * OS1_S1 + 10) -
                                       p_over_q * *(b + 339 * OS1_S1 + 10);
            *(b + 264 * OS1_S1 + 22) =
                prefactor_z * *(b + 264 * OS1_S1 + 10) -
                p_over_q * *(b + 340 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 10);
            *(b + 264 * OS1_S1 + 23) = prefactor_y * *(b + 264 * OS1_S1 + 11) -
                                       p_over_q * *(b + 339 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 264 * OS1_S1 + 4);
            *(b + 264 * OS1_S1 + 24) = prefactor_y * *(b + 264 * OS1_S1 + 12) -
                                       p_over_q * *(b + 339 * OS1_S1 + 12);
            *(b + 264 * OS1_S1 + 25) =
                prefactor_x * *(b + 264 * OS1_S1 + 15) -
                p_over_q * *(b + 330 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 15) +
                one_over_two_q * *(b + 264 * OS1_S1 + 9);
            *(b + 264 * OS1_S1 + 26) =
                prefactor_x * *(b + 264 * OS1_S1 + 16) -
                p_over_q * *(b + 330 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 16);
            *(b + 264 * OS1_S1 + 27) =
                prefactor_x * *(b + 264 * OS1_S1 + 17) -
                p_over_q * *(b + 330 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 17);
            *(b + 264 * OS1_S1 + 28) = prefactor_y * *(b + 264 * OS1_S1 + 15) -
                                       p_over_q * *(b + 339 * OS1_S1 + 15);
            *(b + 264 * OS1_S1 + 29) =
                prefactor_x * *(b + 264 * OS1_S1 + 19) -
                p_over_q * *(b + 330 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 19);
            *(b + 264 * OS1_S1 + 30) =
                prefactor_y * *(b + 264 * OS1_S1 + 16) -
                p_over_q * *(b + 339 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 7);
            *(b + 264 * OS1_S1 + 31) =
                prefactor_z * *(b + 264 * OS1_S1 + 16) -
                p_over_q * *(b + 340 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 16);
            *(b + 264 * OS1_S1 + 32) = prefactor_y * *(b + 264 * OS1_S1 + 18) -
                                       p_over_q * *(b + 339 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 264 * OS1_S1 + 9);
            *(b + 264 * OS1_S1 + 33) = prefactor_y * *(b + 264 * OS1_S1 + 19) -
                                       p_over_q * *(b + 339 * OS1_S1 + 19);
            *(b + 264 * OS1_S1 + 34) =
                prefactor_z * *(b + 264 * OS1_S1 + 19) -
                p_over_q * *(b + 340 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 9);
            *(b + 265 * OS1_S1 + 20) =
                prefactor_x * *(b + 265 * OS1_S1 + 10) -
                p_over_q * *(b + 331 * OS1_S1 + 10) +
                one_over_two_q * *(b + 210 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 265 * OS1_S1 + 4);
            *(b + 265 * OS1_S1 + 21) =
                prefactor_y * *(b + 265 * OS1_S1 + 10) -
                p_over_q * *(b + 341 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 10);
            *(b + 265 * OS1_S1 + 22) = prefactor_z * *(b + 265 * OS1_S1 + 10) -
                                       p_over_q * *(b + 342 * OS1_S1 + 10);
            *(b + 265 * OS1_S1 + 23) =
                prefactor_x * *(b + 265 * OS1_S1 + 13) -
                p_over_q * *(b + 331 * OS1_S1 + 13) +
                one_over_two_q * *(b + 210 * OS1_S1 + 13) +
                one_over_two_q * *(b + 265 * OS1_S1 + 7);
            *(b + 265 * OS1_S1 + 24) = prefactor_z * *(b + 265 * OS1_S1 + 11) -
                                       p_over_q * *(b + 342 * OS1_S1 + 11);
            *(b + 265 * OS1_S1 + 25) = prefactor_z * *(b + 265 * OS1_S1 + 12) -
                                       p_over_q * *(b + 342 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 265 * OS1_S1 + 4);
            *(b + 265 * OS1_S1 + 26) =
                prefactor_x * *(b + 265 * OS1_S1 + 16) -
                p_over_q * *(b + 331 * OS1_S1 + 16) +
                one_over_two_q * *(b + 210 * OS1_S1 + 16);
            *(b + 265 * OS1_S1 + 27) = prefactor_z * *(b + 265 * OS1_S1 + 13) -
                                       p_over_q * *(b + 342 * OS1_S1 + 13);
            *(b + 265 * OS1_S1 + 28) =
                prefactor_x * *(b + 265 * OS1_S1 + 18) -
                p_over_q * *(b + 331 * OS1_S1 + 18) +
                one_over_two_q * *(b + 210 * OS1_S1 + 18);
            *(b + 265 * OS1_S1 + 29) =
                prefactor_x * *(b + 265 * OS1_S1 + 19) -
                p_over_q * *(b + 331 * OS1_S1 + 19) +
                one_over_two_q * *(b + 210 * OS1_S1 + 19);
            *(b + 265 * OS1_S1 + 30) =
                prefactor_y * *(b + 265 * OS1_S1 + 16) -
                p_over_q * *(b + 341 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 265 * OS1_S1 + 7);
            *(b + 265 * OS1_S1 + 31) = prefactor_z * *(b + 265 * OS1_S1 + 16) -
                                       p_over_q * *(b + 342 * OS1_S1 + 16);
            *(b + 265 * OS1_S1 + 32) = prefactor_z * *(b + 265 * OS1_S1 + 17) -
                                       p_over_q * *(b + 342 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 265 * OS1_S1 + 7);
            *(b + 265 * OS1_S1 + 33) =
                prefactor_y * *(b + 265 * OS1_S1 + 19) -
                p_over_q * *(b + 341 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 19);
            *(b + 265 * OS1_S1 + 34) =
                prefactor_z * *(b + 265 * OS1_S1 + 19) -
                p_over_q * *(b + 342 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 265 * OS1_S1 + 9);
            *(b + 266 * OS1_S1 + 20) =
                prefactor_x * *(b + 266 * OS1_S1 + 10) -
                p_over_q * *(b + 332 * OS1_S1 + 10) +
                one_over_two_q * *(b + 211 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 266 * OS1_S1 + 4);
            *(b + 266 * OS1_S1 + 21) =
                prefactor_y * *(b + 266 * OS1_S1 + 10) -
                p_over_q * *(b + 342 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 10);
            *(b + 266 * OS1_S1 + 22) =
                prefactor_z * *(b + 266 * OS1_S1 + 10) -
                p_over_q * *(b + 343 * OS1_S1 + 10) +
                one_over_two_q * *(b + 201 * OS1_S1 + 10);
            *(b + 266 * OS1_S1 + 23) =
                prefactor_x * *(b + 266 * OS1_S1 + 13) -
                p_over_q * *(b + 332 * OS1_S1 + 13) +
                one_over_two_q * *(b + 211 * OS1_S1 + 13) +
                one_over_two_q * *(b + 266 * OS1_S1 + 7);
            *(b + 266 * OS1_S1 + 24) =
                prefactor_z * *(b + 266 * OS1_S1 + 11) -
                p_over_q * *(b + 343 * OS1_S1 + 11) +
                one_over_two_q * *(b + 201 * OS1_S1 + 11);
            *(b + 266 * OS1_S1 + 25) =
                prefactor_z * *(b + 266 * OS1_S1 + 12) -
                p_over_q * *(b + 343 * OS1_S1 + 12) +
                one_over_two_q * *(b + 201 * OS1_S1 + 12) +
                one_over_two_q * *(b + 266 * OS1_S1 + 4);
            *(b + 266 * OS1_S1 + 26) =
                prefactor_x * *(b + 266 * OS1_S1 + 16) -
                p_over_q * *(b + 332 * OS1_S1 + 16) +
                one_over_two_q * *(b + 211 * OS1_S1 + 16);
            *(b + 266 * OS1_S1 + 27) =
                prefactor_z * *(b + 266 * OS1_S1 + 13) -
                p_over_q * *(b + 343 * OS1_S1 + 13) +
                one_over_two_q * *(b + 201 * OS1_S1 + 13);
            *(b + 266 * OS1_S1 + 28) =
                prefactor_x * *(b + 266 * OS1_S1 + 18) -
                p_over_q * *(b + 332 * OS1_S1 + 18) +
                one_over_two_q * *(b + 211 * OS1_S1 + 18);
            *(b + 266 * OS1_S1 + 29) =
                prefactor_x * *(b + 266 * OS1_S1 + 19) -
                p_over_q * *(b + 332 * OS1_S1 + 19) +
                one_over_two_q * *(b + 211 * OS1_S1 + 19);
            *(b + 266 * OS1_S1 + 30) =
                prefactor_y * *(b + 266 * OS1_S1 + 16) -
                p_over_q * *(b + 342 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 266 * OS1_S1 + 7);
            *(b + 266 * OS1_S1 + 31) =
                prefactor_z * *(b + 266 * OS1_S1 + 16) -
                p_over_q * *(b + 343 * OS1_S1 + 16) +
                one_over_two_q * *(b + 201 * OS1_S1 + 16);
            *(b + 266 * OS1_S1 + 32) =
                prefactor_z * *(b + 266 * OS1_S1 + 17) -
                p_over_q * *(b + 343 * OS1_S1 + 17) +
                one_over_two_q * *(b + 201 * OS1_S1 + 17) +
                one_over_two_q * *(b + 266 * OS1_S1 + 7);
            *(b + 266 * OS1_S1 + 33) =
                prefactor_y * *(b + 266 * OS1_S1 + 19) -
                p_over_q * *(b + 342 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 19);
            *(b + 266 * OS1_S1 + 34) =
                prefactor_z * *(b + 266 * OS1_S1 + 19) -
                p_over_q * *(b + 343 * OS1_S1 + 19) +
                one_over_two_q * *(b + 201 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 266 * OS1_S1 + 9);
            *(b + 267 * OS1_S1 + 20) =
                prefactor_x * *(b + 267 * OS1_S1 + 10) -
                p_over_q * *(b + 333 * OS1_S1 + 10) +
                one_over_two_q * *(b + 212 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 4);
            *(b + 267 * OS1_S1 + 21) =
                prefactor_y * *(b + 267 * OS1_S1 + 10) -
                p_over_q * *(b + 343 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 10);
            *(b + 267 * OS1_S1 + 22) =
                prefactor_z * *(b + 267 * OS1_S1 + 10) -
                p_over_q * *(b + 344 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 10);
            *(b + 267 * OS1_S1 + 23) =
                prefactor_x * *(b + 267 * OS1_S1 + 13) -
                p_over_q * *(b + 333 * OS1_S1 + 13) +
                one_over_two_q * *(b + 212 * OS1_S1 + 13) +
                one_over_two_q * *(b + 267 * OS1_S1 + 7);
            *(b + 267 * OS1_S1 + 24) =
                prefactor_z * *(b + 267 * OS1_S1 + 11) -
                p_over_q * *(b + 344 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 11);
            *(b + 267 * OS1_S1 + 25) =
                prefactor_x * *(b + 267 * OS1_S1 + 15) -
                p_over_q * *(b + 333 * OS1_S1 + 15) +
                one_over_two_q * *(b + 212 * OS1_S1 + 15) +
                one_over_two_q * *(b + 267 * OS1_S1 + 9);
            *(b + 267 * OS1_S1 + 26) =
                prefactor_x * *(b + 267 * OS1_S1 + 16) -
                p_over_q * *(b + 333 * OS1_S1 + 16) +
                one_over_two_q * *(b + 212 * OS1_S1 + 16);
            *(b + 267 * OS1_S1 + 27) =
                prefactor_x * *(b + 267 * OS1_S1 + 17) -
                p_over_q * *(b + 333 * OS1_S1 + 17) +
                one_over_two_q * *(b + 212 * OS1_S1 + 17);
            *(b + 267 * OS1_S1 + 28) =
                prefactor_x * *(b + 267 * OS1_S1 + 18) -
                p_over_q * *(b + 333 * OS1_S1 + 18) +
                one_over_two_q * *(b + 212 * OS1_S1 + 18);
            *(b + 267 * OS1_S1 + 29) =
                prefactor_x * *(b + 267 * OS1_S1 + 19) -
                p_over_q * *(b + 333 * OS1_S1 + 19) +
                one_over_two_q * *(b + 212 * OS1_S1 + 19);
            *(b + 267 * OS1_S1 + 30) =
                prefactor_y * *(b + 267 * OS1_S1 + 16) -
                p_over_q * *(b + 343 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 7);
            *(b + 267 * OS1_S1 + 31) =
                prefactor_z * *(b + 267 * OS1_S1 + 16) -
                p_over_q * *(b + 344 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 16);
            *(b + 267 * OS1_S1 + 32) =
                prefactor_z * *(b + 267 * OS1_S1 + 17) -
                p_over_q * *(b + 344 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 17) +
                one_over_two_q * *(b + 267 * OS1_S1 + 7);
            *(b + 267 * OS1_S1 + 33) =
                prefactor_y * *(b + 267 * OS1_S1 + 19) -
                p_over_q * *(b + 343 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 19);
            *(b + 267 * OS1_S1 + 34) =
                prefactor_z * *(b + 267 * OS1_S1 + 19) -
                p_over_q * *(b + 344 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 9);
            *(b + 268 * OS1_S1 + 20) =
                prefactor_x * *(b + 268 * OS1_S1 + 10) -
                p_over_q * *(b + 334 * OS1_S1 + 10) +
                one_over_two_q * *(b + 213 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 268 * OS1_S1 + 4);
            *(b + 268 * OS1_S1 + 21) =
                prefactor_y * *(b + 268 * OS1_S1 + 10) -
                p_over_q * *(b + 344 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 10);
            *(b + 268 * OS1_S1 + 22) =
                prefactor_z * *(b + 268 * OS1_S1 + 10) -
                p_over_q * *(b + 345 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 10);
            *(b + 268 * OS1_S1 + 23) =
                prefactor_x * *(b + 268 * OS1_S1 + 13) -
                p_over_q * *(b + 334 * OS1_S1 + 13) +
                one_over_two_q * *(b + 213 * OS1_S1 + 13) +
                one_over_two_q * *(b + 268 * OS1_S1 + 7);
            *(b + 268 * OS1_S1 + 24) =
                prefactor_z * *(b + 268 * OS1_S1 + 11) -
                p_over_q * *(b + 345 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 11);
            *(b + 268 * OS1_S1 + 25) =
                prefactor_x * *(b + 268 * OS1_S1 + 15) -
                p_over_q * *(b + 334 * OS1_S1 + 15) +
                one_over_two_q * *(b + 213 * OS1_S1 + 15) +
                one_over_two_q * *(b + 268 * OS1_S1 + 9);
            *(b + 268 * OS1_S1 + 26) =
                prefactor_x * *(b + 268 * OS1_S1 + 16) -
                p_over_q * *(b + 334 * OS1_S1 + 16) +
                one_over_two_q * *(b + 213 * OS1_S1 + 16);
            *(b + 268 * OS1_S1 + 27) =
                prefactor_x * *(b + 268 * OS1_S1 + 17) -
                p_over_q * *(b + 334 * OS1_S1 + 17) +
                one_over_two_q * *(b + 213 * OS1_S1 + 17);
            *(b + 268 * OS1_S1 + 28) =
                prefactor_x * *(b + 268 * OS1_S1 + 18) -
                p_over_q * *(b + 334 * OS1_S1 + 18) +
                one_over_two_q * *(b + 213 * OS1_S1 + 18);
            *(b + 268 * OS1_S1 + 29) =
                prefactor_x * *(b + 268 * OS1_S1 + 19) -
                p_over_q * *(b + 334 * OS1_S1 + 19) +
                one_over_two_q * *(b + 213 * OS1_S1 + 19);
            *(b + 268 * OS1_S1 + 30) =
                prefactor_y * *(b + 268 * OS1_S1 + 16) -
                p_over_q * *(b + 344 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 268 * OS1_S1 + 7);
            *(b + 268 * OS1_S1 + 31) =
                prefactor_z * *(b + 268 * OS1_S1 + 16) -
                p_over_q * *(b + 345 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 16);
            *(b + 268 * OS1_S1 + 32) =
                prefactor_z * *(b + 268 * OS1_S1 + 17) -
                p_over_q * *(b + 345 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 17) +
                one_over_two_q * *(b + 268 * OS1_S1 + 7);
            *(b + 268 * OS1_S1 + 33) =
                prefactor_y * *(b + 268 * OS1_S1 + 19) -
                p_over_q * *(b + 344 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 19);
            *(b + 268 * OS1_S1 + 34) =
                prefactor_z * *(b + 268 * OS1_S1 + 19) -
                p_over_q * *(b + 345 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 268 * OS1_S1 + 9);
            *(b + 269 * OS1_S1 + 20) =
                prefactor_x * *(b + 269 * OS1_S1 + 10) -
                p_over_q * *(b + 335 * OS1_S1 + 10) +
                one_over_two_q * *(b + 214 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 269 * OS1_S1 + 4);
            *(b + 269 * OS1_S1 + 21) =
                prefactor_y * *(b + 269 * OS1_S1 + 10) -
                p_over_q * *(b + 345 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 10);
            *(b + 269 * OS1_S1 + 22) =
                prefactor_z * *(b + 269 * OS1_S1 + 10) -
                p_over_q * *(b + 346 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 10);
            *(b + 269 * OS1_S1 + 23) =
                prefactor_x * *(b + 269 * OS1_S1 + 13) -
                p_over_q * *(b + 335 * OS1_S1 + 13) +
                one_over_two_q * *(b + 214 * OS1_S1 + 13) +
                one_over_two_q * *(b + 269 * OS1_S1 + 7);
            *(b + 269 * OS1_S1 + 24) =
                prefactor_z * *(b + 269 * OS1_S1 + 11) -
                p_over_q * *(b + 346 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 11);
            *(b + 269 * OS1_S1 + 25) =
                prefactor_x * *(b + 269 * OS1_S1 + 15) -
                p_over_q * *(b + 335 * OS1_S1 + 15) +
                one_over_two_q * *(b + 214 * OS1_S1 + 15) +
                one_over_two_q * *(b + 269 * OS1_S1 + 9);
            *(b + 269 * OS1_S1 + 26) =
                prefactor_x * *(b + 269 * OS1_S1 + 16) -
                p_over_q * *(b + 335 * OS1_S1 + 16) +
                one_over_two_q * *(b + 214 * OS1_S1 + 16);
            *(b + 269 * OS1_S1 + 27) =
                prefactor_x * *(b + 269 * OS1_S1 + 17) -
                p_over_q * *(b + 335 * OS1_S1 + 17) +
                one_over_two_q * *(b + 214 * OS1_S1 + 17);
            *(b + 269 * OS1_S1 + 28) =
                prefactor_x * *(b + 269 * OS1_S1 + 18) -
                p_over_q * *(b + 335 * OS1_S1 + 18) +
                one_over_two_q * *(b + 214 * OS1_S1 + 18);
            *(b + 269 * OS1_S1 + 29) =
                prefactor_x * *(b + 269 * OS1_S1 + 19) -
                p_over_q * *(b + 335 * OS1_S1 + 19) +
                one_over_two_q * *(b + 214 * OS1_S1 + 19);
            *(b + 269 * OS1_S1 + 30) =
                prefactor_y * *(b + 269 * OS1_S1 + 16) -
                p_over_q * *(b + 345 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 269 * OS1_S1 + 7);
            *(b + 269 * OS1_S1 + 31) =
                prefactor_z * *(b + 269 * OS1_S1 + 16) -
                p_over_q * *(b + 346 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 16);
            *(b + 269 * OS1_S1 + 32) =
                prefactor_z * *(b + 269 * OS1_S1 + 17) -
                p_over_q * *(b + 346 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 17) +
                one_over_two_q * *(b + 269 * OS1_S1 + 7);
            *(b + 269 * OS1_S1 + 33) =
                prefactor_y * *(b + 269 * OS1_S1 + 19) -
                p_over_q * *(b + 345 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 19);
            *(b + 269 * OS1_S1 + 34) =
                prefactor_z * *(b + 269 * OS1_S1 + 19) -
                p_over_q * *(b + 346 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 269 * OS1_S1 + 9);
            *(b + 270 * OS1_S1 + 20) =
                prefactor_x * *(b + 270 * OS1_S1 + 10) -
                p_over_q * *(b + 336 * OS1_S1 + 10) +
                one_over_two_q * *(b + 215 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 270 * OS1_S1 + 4);
            *(b + 270 * OS1_S1 + 21) =
                prefactor_y * *(b + 270 * OS1_S1 + 10) -
                p_over_q * *(b + 346 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 10);
            *(b + 270 * OS1_S1 + 22) =
                prefactor_z * *(b + 270 * OS1_S1 + 10) -
                p_over_q * *(b + 347 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 10);
            *(b + 270 * OS1_S1 + 23) =
                prefactor_x * *(b + 270 * OS1_S1 + 13) -
                p_over_q * *(b + 336 * OS1_S1 + 13) +
                one_over_two_q * *(b + 215 * OS1_S1 + 13) +
                one_over_two_q * *(b + 270 * OS1_S1 + 7);
            *(b + 270 * OS1_S1 + 24) =
                prefactor_y * *(b + 270 * OS1_S1 + 12) -
                p_over_q * *(b + 346 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 12);
            *(b + 270 * OS1_S1 + 25) =
                prefactor_x * *(b + 270 * OS1_S1 + 15) -
                p_over_q * *(b + 336 * OS1_S1 + 15) +
                one_over_two_q * *(b + 215 * OS1_S1 + 15) +
                one_over_two_q * *(b + 270 * OS1_S1 + 9);
            *(b + 270 * OS1_S1 + 26) =
                prefactor_x * *(b + 270 * OS1_S1 + 16) -
                p_over_q * *(b + 336 * OS1_S1 + 16) +
                one_over_two_q * *(b + 215 * OS1_S1 + 16);
            *(b + 270 * OS1_S1 + 27) =
                prefactor_x * *(b + 270 * OS1_S1 + 17) -
                p_over_q * *(b + 336 * OS1_S1 + 17) +
                one_over_two_q * *(b + 215 * OS1_S1 + 17);
            *(b + 270 * OS1_S1 + 28) =
                prefactor_x * *(b + 270 * OS1_S1 + 18) -
                p_over_q * *(b + 336 * OS1_S1 + 18) +
                one_over_two_q * *(b + 215 * OS1_S1 + 18);
            *(b + 270 * OS1_S1 + 29) =
                prefactor_x * *(b + 270 * OS1_S1 + 19) -
                p_over_q * *(b + 336 * OS1_S1 + 19) +
                one_over_two_q * *(b + 215 * OS1_S1 + 19);
            *(b + 270 * OS1_S1 + 30) =
                prefactor_y * *(b + 270 * OS1_S1 + 16) -
                p_over_q * *(b + 346 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 270 * OS1_S1 + 7);
            *(b + 270 * OS1_S1 + 31) =
                prefactor_z * *(b + 270 * OS1_S1 + 16) -
                p_over_q * *(b + 347 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 16);
            *(b + 270 * OS1_S1 + 32) =
                prefactor_y * *(b + 270 * OS1_S1 + 18) -
                p_over_q * *(b + 346 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 18) +
                one_over_two_q * *(b + 270 * OS1_S1 + 9);
            *(b + 270 * OS1_S1 + 33) =
                prefactor_y * *(b + 270 * OS1_S1 + 19) -
                p_over_q * *(b + 346 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 19);
            *(b + 270 * OS1_S1 + 34) =
                prefactor_z * *(b + 270 * OS1_S1 + 19) -
                p_over_q * *(b + 347 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 270 * OS1_S1 + 9);
            *(b + 271 * OS1_S1 + 20) =
                prefactor_x * *(b + 271 * OS1_S1 + 10) -
                p_over_q * *(b + 337 * OS1_S1 + 10) +
                one_over_two_q * *(b + 216 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 271 * OS1_S1 + 4);
            *(b + 271 * OS1_S1 + 21) =
                prefactor_y * *(b + 271 * OS1_S1 + 10) -
                p_over_q * *(b + 347 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 10);
            *(b + 271 * OS1_S1 + 22) =
                prefactor_z * *(b + 271 * OS1_S1 + 10) -
                p_over_q * *(b + 348 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 10);
            *(b + 271 * OS1_S1 + 23) =
                prefactor_x * *(b + 271 * OS1_S1 + 13) -
                p_over_q * *(b + 337 * OS1_S1 + 13) +
                one_over_two_q * *(b + 216 * OS1_S1 + 13) +
                one_over_two_q * *(b + 271 * OS1_S1 + 7);
            *(b + 271 * OS1_S1 + 24) =
                prefactor_y * *(b + 271 * OS1_S1 + 12) -
                p_over_q * *(b + 347 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 12);
            *(b + 271 * OS1_S1 + 25) =
                prefactor_x * *(b + 271 * OS1_S1 + 15) -
                p_over_q * *(b + 337 * OS1_S1 + 15) +
                one_over_two_q * *(b + 216 * OS1_S1 + 15) +
                one_over_two_q * *(b + 271 * OS1_S1 + 9);
            *(b + 271 * OS1_S1 + 26) =
                prefactor_x * *(b + 271 * OS1_S1 + 16) -
                p_over_q * *(b + 337 * OS1_S1 + 16) +
                one_over_two_q * *(b + 216 * OS1_S1 + 16);
            *(b + 271 * OS1_S1 + 27) =
                prefactor_x * *(b + 271 * OS1_S1 + 17) -
                p_over_q * *(b + 337 * OS1_S1 + 17) +
                one_over_two_q * *(b + 216 * OS1_S1 + 17);
            *(b + 271 * OS1_S1 + 28) =
                prefactor_x * *(b + 271 * OS1_S1 + 18) -
                p_over_q * *(b + 337 * OS1_S1 + 18) +
                one_over_two_q * *(b + 216 * OS1_S1 + 18);
            *(b + 271 * OS1_S1 + 29) =
                prefactor_x * *(b + 271 * OS1_S1 + 19) -
                p_over_q * *(b + 337 * OS1_S1 + 19) +
                one_over_two_q * *(b + 216 * OS1_S1 + 19);
            *(b + 271 * OS1_S1 + 30) =
                prefactor_y * *(b + 271 * OS1_S1 + 16) -
                p_over_q * *(b + 347 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 271 * OS1_S1 + 7);
            *(b + 271 * OS1_S1 + 31) =
                prefactor_z * *(b + 271 * OS1_S1 + 16) -
                p_over_q * *(b + 348 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 16);
            *(b + 271 * OS1_S1 + 32) =
                prefactor_y * *(b + 271 * OS1_S1 + 18) -
                p_over_q * *(b + 347 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 18) +
                one_over_two_q * *(b + 271 * OS1_S1 + 9);
            *(b + 271 * OS1_S1 + 33) =
                prefactor_y * *(b + 271 * OS1_S1 + 19) -
                p_over_q * *(b + 347 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 19);
            *(b + 271 * OS1_S1 + 34) =
                prefactor_z * *(b + 271 * OS1_S1 + 19) -
                p_over_q * *(b + 348 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 271 * OS1_S1 + 9);
            *(b + 272 * OS1_S1 + 20) =
                prefactor_x * *(b + 272 * OS1_S1 + 10) -
                p_over_q * *(b + 338 * OS1_S1 + 10) +
                one_over_two_q * *(b + 217 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 4);
            *(b + 272 * OS1_S1 + 21) =
                prefactor_y * *(b + 272 * OS1_S1 + 10) -
                p_over_q * *(b + 348 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 10);
            *(b + 272 * OS1_S1 + 22) =
                prefactor_z * *(b + 272 * OS1_S1 + 10) -
                p_over_q * *(b + 349 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 10);
            *(b + 272 * OS1_S1 + 23) =
                prefactor_x * *(b + 272 * OS1_S1 + 13) -
                p_over_q * *(b + 338 * OS1_S1 + 13) +
                one_over_two_q * *(b + 217 * OS1_S1 + 13) +
                one_over_two_q * *(b + 272 * OS1_S1 + 7);
            *(b + 272 * OS1_S1 + 24) =
                prefactor_y * *(b + 272 * OS1_S1 + 12) -
                p_over_q * *(b + 348 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 12);
            *(b + 272 * OS1_S1 + 25) =
                prefactor_x * *(b + 272 * OS1_S1 + 15) -
                p_over_q * *(b + 338 * OS1_S1 + 15) +
                one_over_two_q * *(b + 217 * OS1_S1 + 15) +
                one_over_two_q * *(b + 272 * OS1_S1 + 9);
            *(b + 272 * OS1_S1 + 26) =
                prefactor_x * *(b + 272 * OS1_S1 + 16) -
                p_over_q * *(b + 338 * OS1_S1 + 16) +
                one_over_two_q * *(b + 217 * OS1_S1 + 16);
            *(b + 272 * OS1_S1 + 27) =
                prefactor_x * *(b + 272 * OS1_S1 + 17) -
                p_over_q * *(b + 338 * OS1_S1 + 17) +
                one_over_two_q * *(b + 217 * OS1_S1 + 17);
            *(b + 272 * OS1_S1 + 28) =
                prefactor_x * *(b + 272 * OS1_S1 + 18) -
                p_over_q * *(b + 338 * OS1_S1 + 18) +
                one_over_two_q * *(b + 217 * OS1_S1 + 18);
            *(b + 272 * OS1_S1 + 29) =
                prefactor_x * *(b + 272 * OS1_S1 + 19) -
                p_over_q * *(b + 338 * OS1_S1 + 19) +
                one_over_two_q * *(b + 217 * OS1_S1 + 19);
            *(b + 272 * OS1_S1 + 30) =
                prefactor_y * *(b + 272 * OS1_S1 + 16) -
                p_over_q * *(b + 348 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 7);
            *(b + 272 * OS1_S1 + 31) =
                prefactor_z * *(b + 272 * OS1_S1 + 16) -
                p_over_q * *(b + 349 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 16);
            *(b + 272 * OS1_S1 + 32) =
                prefactor_y * *(b + 272 * OS1_S1 + 18) -
                p_over_q * *(b + 348 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 18) +
                one_over_two_q * *(b + 272 * OS1_S1 + 9);
            *(b + 272 * OS1_S1 + 33) =
                prefactor_y * *(b + 272 * OS1_S1 + 19) -
                p_over_q * *(b + 348 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 19);
            *(b + 272 * OS1_S1 + 34) =
                prefactor_z * *(b + 272 * OS1_S1 + 19) -
                p_over_q * *(b + 349 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 9);
            *(b + 273 * OS1_S1 + 20) =
                prefactor_x * *(b + 273 * OS1_S1 + 10) -
                p_over_q * *(b + 339 * OS1_S1 + 10) +
                one_over_two_q * *(b + 218 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 273 * OS1_S1 + 4);
            *(b + 273 * OS1_S1 + 21) =
                prefactor_y * *(b + 273 * OS1_S1 + 10) -
                p_over_q * *(b + 349 * OS1_S1 + 10) +
                one_over_two_q * *(b + 209 * OS1_S1 + 10);
            *(b + 273 * OS1_S1 + 22) =
                prefactor_z * *(b + 273 * OS1_S1 + 10) -
                p_over_q * *(b + 350 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 10);
            *(b + 273 * OS1_S1 + 23) =
                prefactor_y * *(b + 273 * OS1_S1 + 11) -
                p_over_q * *(b + 349 * OS1_S1 + 11) +
                one_over_two_q * *(b + 209 * OS1_S1 + 11) +
                one_over_two_q * *(b + 273 * OS1_S1 + 4);
            *(b + 273 * OS1_S1 + 24) =
                prefactor_y * *(b + 273 * OS1_S1 + 12) -
                p_over_q * *(b + 349 * OS1_S1 + 12) +
                one_over_two_q * *(b + 209 * OS1_S1 + 12);
            *(b + 273 * OS1_S1 + 25) =
                prefactor_x * *(b + 273 * OS1_S1 + 15) -
                p_over_q * *(b + 339 * OS1_S1 + 15) +
                one_over_two_q * *(b + 218 * OS1_S1 + 15) +
                one_over_two_q * *(b + 273 * OS1_S1 + 9);
            *(b + 273 * OS1_S1 + 26) =
                prefactor_x * *(b + 273 * OS1_S1 + 16) -
                p_over_q * *(b + 339 * OS1_S1 + 16) +
                one_over_two_q * *(b + 218 * OS1_S1 + 16);
            *(b + 273 * OS1_S1 + 27) =
                prefactor_x * *(b + 273 * OS1_S1 + 17) -
                p_over_q * *(b + 339 * OS1_S1 + 17) +
                one_over_two_q * *(b + 218 * OS1_S1 + 17);
            *(b + 273 * OS1_S1 + 28) =
                prefactor_y * *(b + 273 * OS1_S1 + 15) -
                p_over_q * *(b + 349 * OS1_S1 + 15) +
                one_over_two_q * *(b + 209 * OS1_S1 + 15);
            *(b + 273 * OS1_S1 + 29) =
                prefactor_x * *(b + 273 * OS1_S1 + 19) -
                p_over_q * *(b + 339 * OS1_S1 + 19) +
                one_over_two_q * *(b + 218 * OS1_S1 + 19);
            *(b + 273 * OS1_S1 + 30) =
                prefactor_y * *(b + 273 * OS1_S1 + 16) -
                p_over_q * *(b + 349 * OS1_S1 + 16) +
                one_over_two_q * *(b + 209 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 273 * OS1_S1 + 7);
            *(b + 273 * OS1_S1 + 31) =
                prefactor_z * *(b + 273 * OS1_S1 + 16) -
                p_over_q * *(b + 350 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 16);
            *(b + 273 * OS1_S1 + 32) =
                prefactor_y * *(b + 273 * OS1_S1 + 18) -
                p_over_q * *(b + 349 * OS1_S1 + 18) +
                one_over_two_q * *(b + 209 * OS1_S1 + 18) +
                one_over_two_q * *(b + 273 * OS1_S1 + 9);
            *(b + 273 * OS1_S1 + 33) =
                prefactor_y * *(b + 273 * OS1_S1 + 19) -
                p_over_q * *(b + 349 * OS1_S1 + 19) +
                one_over_two_q * *(b + 209 * OS1_S1 + 19);
            *(b + 273 * OS1_S1 + 34) =
                prefactor_z * *(b + 273 * OS1_S1 + 19) -
                p_over_q * *(b + 350 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 273 * OS1_S1 + 9);
            *(b + 274 * OS1_S1 + 20) =
                prefactor_x * *(b + 274 * OS1_S1 + 10) -
                p_over_q * *(b + 340 * OS1_S1 + 10) +
                one_over_two_q * *(b + 219 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 274 * OS1_S1 + 4);
            *(b + 274 * OS1_S1 + 21) = prefactor_y * *(b + 274 * OS1_S1 + 10) -
                                       p_over_q * *(b + 350 * OS1_S1 + 10);
            *(b + 274 * OS1_S1 + 22) =
                prefactor_z * *(b + 274 * OS1_S1 + 10) -
                p_over_q * *(b + 351 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 10);
            *(b + 274 * OS1_S1 + 23) = prefactor_y * *(b + 274 * OS1_S1 + 11) -
                                       p_over_q * *(b + 350 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 274 * OS1_S1 + 4);
            *(b + 274 * OS1_S1 + 24) = prefactor_y * *(b + 274 * OS1_S1 + 12) -
                                       p_over_q * *(b + 350 * OS1_S1 + 12);
            *(b + 274 * OS1_S1 + 25) =
                prefactor_x * *(b + 274 * OS1_S1 + 15) -
                p_over_q * *(b + 340 * OS1_S1 + 15) +
                one_over_two_q * *(b + 219 * OS1_S1 + 15) +
                one_over_two_q * *(b + 274 * OS1_S1 + 9);
            *(b + 274 * OS1_S1 + 26) =
                prefactor_x * *(b + 274 * OS1_S1 + 16) -
                p_over_q * *(b + 340 * OS1_S1 + 16) +
                one_over_two_q * *(b + 219 * OS1_S1 + 16);
            *(b + 274 * OS1_S1 + 27) =
                prefactor_x * *(b + 274 * OS1_S1 + 17) -
                p_over_q * *(b + 340 * OS1_S1 + 17) +
                one_over_two_q * *(b + 219 * OS1_S1 + 17);
            *(b + 274 * OS1_S1 + 28) = prefactor_y * *(b + 274 * OS1_S1 + 15) -
                                       p_over_q * *(b + 350 * OS1_S1 + 15);
            *(b + 274 * OS1_S1 + 29) =
                prefactor_x * *(b + 274 * OS1_S1 + 19) -
                p_over_q * *(b + 340 * OS1_S1 + 19) +
                one_over_two_q * *(b + 219 * OS1_S1 + 19);
            *(b + 274 * OS1_S1 + 30) =
                prefactor_y * *(b + 274 * OS1_S1 + 16) -
                p_over_q * *(b + 350 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 274 * OS1_S1 + 7);
            *(b + 274 * OS1_S1 + 31) =
                prefactor_z * *(b + 274 * OS1_S1 + 16) -
                p_over_q * *(b + 351 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 16);
            *(b + 274 * OS1_S1 + 32) = prefactor_y * *(b + 274 * OS1_S1 + 18) -
                                       p_over_q * *(b + 350 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 274 * OS1_S1 + 9);
            *(b + 274 * OS1_S1 + 33) = prefactor_y * *(b + 274 * OS1_S1 + 19) -
                                       p_over_q * *(b + 350 * OS1_S1 + 19);
            *(b + 274 * OS1_S1 + 34) =
                prefactor_z * *(b + 274 * OS1_S1 + 19) -
                p_over_q * *(b + 351 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 274 * OS1_S1 + 9);
            *(b + 275 * OS1_S1 + 20) =
                prefactor_x * *(b + 275 * OS1_S1 + 10) -
                p_over_q * *(b + 341 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 275 * OS1_S1 + 4);
            *(b + 275 * OS1_S1 + 21) =
                prefactor_y * *(b + 275 * OS1_S1 + 10) -
                p_over_q * *(b + 352 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 10);
            *(b + 275 * OS1_S1 + 22) = prefactor_z * *(b + 275 * OS1_S1 + 10) -
                                       p_over_q * *(b + 353 * OS1_S1 + 10);
            *(b + 275 * OS1_S1 + 23) = prefactor_x * *(b + 275 * OS1_S1 + 13) -
                                       p_over_q * *(b + 341 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 275 * OS1_S1 + 7);
            *(b + 275 * OS1_S1 + 24) = prefactor_z * *(b + 275 * OS1_S1 + 11) -
                                       p_over_q * *(b + 353 * OS1_S1 + 11);
            *(b + 275 * OS1_S1 + 25) = prefactor_z * *(b + 275 * OS1_S1 + 12) -
                                       p_over_q * *(b + 353 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 275 * OS1_S1 + 4);
            *(b + 275 * OS1_S1 + 26) = prefactor_x * *(b + 275 * OS1_S1 + 16) -
                                       p_over_q * *(b + 341 * OS1_S1 + 16);
            *(b + 275 * OS1_S1 + 27) = prefactor_z * *(b + 275 * OS1_S1 + 13) -
                                       p_over_q * *(b + 353 * OS1_S1 + 13);
            *(b + 275 * OS1_S1 + 28) = prefactor_x * *(b + 275 * OS1_S1 + 18) -
                                       p_over_q * *(b + 341 * OS1_S1 + 18);
            *(b + 275 * OS1_S1 + 29) = prefactor_x * *(b + 275 * OS1_S1 + 19) -
                                       p_over_q * *(b + 341 * OS1_S1 + 19);
            *(b + 275 * OS1_S1 + 30) =
                prefactor_y * *(b + 275 * OS1_S1 + 16) -
                p_over_q * *(b + 352 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 275 * OS1_S1 + 7);
            *(b + 275 * OS1_S1 + 31) = prefactor_z * *(b + 275 * OS1_S1 + 16) -
                                       p_over_q * *(b + 353 * OS1_S1 + 16);
            *(b + 275 * OS1_S1 + 32) = prefactor_z * *(b + 275 * OS1_S1 + 17) -
                                       p_over_q * *(b + 353 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 275 * OS1_S1 + 7);
            *(b + 275 * OS1_S1 + 33) =
                prefactor_y * *(b + 275 * OS1_S1 + 19) -
                p_over_q * *(b + 352 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 19);
            *(b + 275 * OS1_S1 + 34) =
                prefactor_z * *(b + 275 * OS1_S1 + 19) -
                p_over_q * *(b + 353 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 275 * OS1_S1 + 9);
            *(b + 276 * OS1_S1 + 20) =
                prefactor_x * *(b + 276 * OS1_S1 + 10) -
                p_over_q * *(b + 342 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 276 * OS1_S1 + 4);
            *(b + 276 * OS1_S1 + 21) =
                prefactor_y * *(b + 276 * OS1_S1 + 10) -
                p_over_q * *(b + 353 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 10);
            *(b + 276 * OS1_S1 + 22) =
                prefactor_z * *(b + 276 * OS1_S1 + 10) -
                p_over_q * *(b + 354 * OS1_S1 + 10) +
                one_over_two_q * *(b + 210 * OS1_S1 + 10);
            *(b + 276 * OS1_S1 + 23) = prefactor_x * *(b + 276 * OS1_S1 + 13) -
                                       p_over_q * *(b + 342 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 276 * OS1_S1 + 7);
            *(b + 276 * OS1_S1 + 24) =
                prefactor_z * *(b + 276 * OS1_S1 + 11) -
                p_over_q * *(b + 354 * OS1_S1 + 11) +
                one_over_two_q * *(b + 210 * OS1_S1 + 11);
            *(b + 276 * OS1_S1 + 25) = prefactor_x * *(b + 276 * OS1_S1 + 15) -
                                       p_over_q * *(b + 342 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 276 * OS1_S1 + 9);
            *(b + 276 * OS1_S1 + 26) = prefactor_x * *(b + 276 * OS1_S1 + 16) -
                                       p_over_q * *(b + 342 * OS1_S1 + 16);
            *(b + 276 * OS1_S1 + 27) = prefactor_x * *(b + 276 * OS1_S1 + 17) -
                                       p_over_q * *(b + 342 * OS1_S1 + 17);
            *(b + 276 * OS1_S1 + 28) = prefactor_x * *(b + 276 * OS1_S1 + 18) -
                                       p_over_q * *(b + 342 * OS1_S1 + 18);
            *(b + 276 * OS1_S1 + 29) = prefactor_x * *(b + 276 * OS1_S1 + 19) -
                                       p_over_q * *(b + 342 * OS1_S1 + 19);
            *(b + 276 * OS1_S1 + 30) =
                prefactor_y * *(b + 276 * OS1_S1 + 16) -
                p_over_q * *(b + 353 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 276 * OS1_S1 + 7);
            *(b + 276 * OS1_S1 + 31) =
                prefactor_z * *(b + 276 * OS1_S1 + 16) -
                p_over_q * *(b + 354 * OS1_S1 + 16) +
                one_over_two_q * *(b + 210 * OS1_S1 + 16);
            *(b + 276 * OS1_S1 + 32) =
                prefactor_z * *(b + 276 * OS1_S1 + 17) -
                p_over_q * *(b + 354 * OS1_S1 + 17) +
                one_over_two_q * *(b + 210 * OS1_S1 + 17) +
                one_over_two_q * *(b + 276 * OS1_S1 + 7);
            *(b + 276 * OS1_S1 + 33) =
                prefactor_y * *(b + 276 * OS1_S1 + 19) -
                p_over_q * *(b + 353 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 19);
            *(b + 276 * OS1_S1 + 34) =
                prefactor_z * *(b + 276 * OS1_S1 + 19) -
                p_over_q * *(b + 354 * OS1_S1 + 19) +
                one_over_two_q * *(b + 210 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 276 * OS1_S1 + 9);
            *(b + 277 * OS1_S1 + 20) =
                prefactor_x * *(b + 277 * OS1_S1 + 10) -
                p_over_q * *(b + 343 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 4);
            *(b + 277 * OS1_S1 + 21) =
                prefactor_y * *(b + 277 * OS1_S1 + 10) -
                p_over_q * *(b + 354 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 10);
            *(b + 277 * OS1_S1 + 22) =
                prefactor_z * *(b + 277 * OS1_S1 + 10) -
                p_over_q * *(b + 355 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 10);
            *(b + 277 * OS1_S1 + 23) = prefactor_x * *(b + 277 * OS1_S1 + 13) -
                                       p_over_q * *(b + 343 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 277 * OS1_S1 + 7);
            *(b + 277 * OS1_S1 + 24) =
                prefactor_z * *(b + 277 * OS1_S1 + 11) -
                p_over_q * *(b + 355 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 11);
            *(b + 277 * OS1_S1 + 25) = prefactor_x * *(b + 277 * OS1_S1 + 15) -
                                       p_over_q * *(b + 343 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 277 * OS1_S1 + 9);
            *(b + 277 * OS1_S1 + 26) = prefactor_x * *(b + 277 * OS1_S1 + 16) -
                                       p_over_q * *(b + 343 * OS1_S1 + 16);
            *(b + 277 * OS1_S1 + 27) = prefactor_x * *(b + 277 * OS1_S1 + 17) -
                                       p_over_q * *(b + 343 * OS1_S1 + 17);
            *(b + 277 * OS1_S1 + 28) = prefactor_x * *(b + 277 * OS1_S1 + 18) -
                                       p_over_q * *(b + 343 * OS1_S1 + 18);
            *(b + 277 * OS1_S1 + 29) = prefactor_x * *(b + 277 * OS1_S1 + 19) -
                                       p_over_q * *(b + 343 * OS1_S1 + 19);
            *(b + 277 * OS1_S1 + 30) =
                prefactor_y * *(b + 277 * OS1_S1 + 16) -
                p_over_q * *(b + 354 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 7);
            *(b + 277 * OS1_S1 + 31) =
                prefactor_z * *(b + 277 * OS1_S1 + 16) -
                p_over_q * *(b + 355 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 16);
            *(b + 277 * OS1_S1 + 32) =
                prefactor_z * *(b + 277 * OS1_S1 + 17) -
                p_over_q * *(b + 355 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 17) +
                one_over_two_q * *(b + 277 * OS1_S1 + 7);
            *(b + 277 * OS1_S1 + 33) =
                prefactor_y * *(b + 277 * OS1_S1 + 19) -
                p_over_q * *(b + 354 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 19);
            *(b + 277 * OS1_S1 + 34) =
                prefactor_z * *(b + 277 * OS1_S1 + 19) -
                p_over_q * *(b + 355 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 9);
            *(b + 278 * OS1_S1 + 20) =
                prefactor_x * *(b + 278 * OS1_S1 + 10) -
                p_over_q * *(b + 344 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 278 * OS1_S1 + 4);
            *(b + 278 * OS1_S1 + 21) =
                prefactor_y * *(b + 278 * OS1_S1 + 10) -
                p_over_q * *(b + 355 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 10);
            *(b + 278 * OS1_S1 + 22) =
                prefactor_z * *(b + 278 * OS1_S1 + 10) -
                p_over_q * *(b + 356 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 10);
            *(b + 278 * OS1_S1 + 23) = prefactor_x * *(b + 278 * OS1_S1 + 13) -
                                       p_over_q * *(b + 344 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 278 * OS1_S1 + 7);
            *(b + 278 * OS1_S1 + 24) =
                prefactor_z * *(b + 278 * OS1_S1 + 11) -
                p_over_q * *(b + 356 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 11);
            *(b + 278 * OS1_S1 + 25) = prefactor_x * *(b + 278 * OS1_S1 + 15) -
                                       p_over_q * *(b + 344 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 278 * OS1_S1 + 9);
            *(b + 278 * OS1_S1 + 26) = prefactor_x * *(b + 278 * OS1_S1 + 16) -
                                       p_over_q * *(b + 344 * OS1_S1 + 16);
            *(b + 278 * OS1_S1 + 27) = prefactor_x * *(b + 278 * OS1_S1 + 17) -
                                       p_over_q * *(b + 344 * OS1_S1 + 17);
            *(b + 278 * OS1_S1 + 28) = prefactor_x * *(b + 278 * OS1_S1 + 18) -
                                       p_over_q * *(b + 344 * OS1_S1 + 18);
            *(b + 278 * OS1_S1 + 29) = prefactor_x * *(b + 278 * OS1_S1 + 19) -
                                       p_over_q * *(b + 344 * OS1_S1 + 19);
            *(b + 278 * OS1_S1 + 30) =
                prefactor_y * *(b + 278 * OS1_S1 + 16) -
                p_over_q * *(b + 355 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 278 * OS1_S1 + 7);
            *(b + 278 * OS1_S1 + 31) =
                prefactor_z * *(b + 278 * OS1_S1 + 16) -
                p_over_q * *(b + 356 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 16);
            *(b + 278 * OS1_S1 + 32) =
                prefactor_z * *(b + 278 * OS1_S1 + 17) -
                p_over_q * *(b + 356 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 17) +
                one_over_two_q * *(b + 278 * OS1_S1 + 7);
            *(b + 278 * OS1_S1 + 33) =
                prefactor_y * *(b + 278 * OS1_S1 + 19) -
                p_over_q * *(b + 355 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 19);
            *(b + 278 * OS1_S1 + 34) =
                prefactor_z * *(b + 278 * OS1_S1 + 19) -
                p_over_q * *(b + 356 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 278 * OS1_S1 + 9);
            *(b + 279 * OS1_S1 + 20) =
                prefactor_x * *(b + 279 * OS1_S1 + 10) -
                p_over_q * *(b + 345 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 279 * OS1_S1 + 4);
            *(b + 279 * OS1_S1 + 21) =
                prefactor_y * *(b + 279 * OS1_S1 + 10) -
                p_over_q * *(b + 356 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 10);
            *(b + 279 * OS1_S1 + 22) =
                prefactor_z * *(b + 279 * OS1_S1 + 10) -
                p_over_q * *(b + 357 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 10);
            *(b + 279 * OS1_S1 + 23) = prefactor_x * *(b + 279 * OS1_S1 + 13) -
                                       p_over_q * *(b + 345 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 279 * OS1_S1 + 7);
            *(b + 279 * OS1_S1 + 24) =
                prefactor_z * *(b + 279 * OS1_S1 + 11) -
                p_over_q * *(b + 357 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 11);
            *(b + 279 * OS1_S1 + 25) = prefactor_x * *(b + 279 * OS1_S1 + 15) -
                                       p_over_q * *(b + 345 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 279 * OS1_S1 + 9);
            *(b + 279 * OS1_S1 + 26) = prefactor_x * *(b + 279 * OS1_S1 + 16) -
                                       p_over_q * *(b + 345 * OS1_S1 + 16);
            *(b + 279 * OS1_S1 + 27) = prefactor_x * *(b + 279 * OS1_S1 + 17) -
                                       p_over_q * *(b + 345 * OS1_S1 + 17);
            *(b + 279 * OS1_S1 + 28) = prefactor_x * *(b + 279 * OS1_S1 + 18) -
                                       p_over_q * *(b + 345 * OS1_S1 + 18);
            *(b + 279 * OS1_S1 + 29) = prefactor_x * *(b + 279 * OS1_S1 + 19) -
                                       p_over_q * *(b + 345 * OS1_S1 + 19);
            *(b + 279 * OS1_S1 + 30) =
                prefactor_y * *(b + 279 * OS1_S1 + 16) -
                p_over_q * *(b + 356 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 279 * OS1_S1 + 7);
            *(b + 279 * OS1_S1 + 31) =
                prefactor_z * *(b + 279 * OS1_S1 + 16) -
                p_over_q * *(b + 357 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 16);
            *(b + 279 * OS1_S1 + 32) =
                prefactor_z * *(b + 279 * OS1_S1 + 17) -
                p_over_q * *(b + 357 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 17) +
                one_over_two_q * *(b + 279 * OS1_S1 + 7);
            *(b + 279 * OS1_S1 + 33) =
                prefactor_y * *(b + 279 * OS1_S1 + 19) -
                p_over_q * *(b + 356 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 19);
            *(b + 279 * OS1_S1 + 34) =
                prefactor_z * *(b + 279 * OS1_S1 + 19) -
                p_over_q * *(b + 357 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 279 * OS1_S1 + 9);
            *(b + 280 * OS1_S1 + 20) =
                prefactor_x * *(b + 280 * OS1_S1 + 10) -
                p_over_q * *(b + 346 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 280 * OS1_S1 + 4);
            *(b + 280 * OS1_S1 + 21) =
                prefactor_y * *(b + 280 * OS1_S1 + 10) -
                p_over_q * *(b + 357 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 10);
            *(b + 280 * OS1_S1 + 22) =
                prefactor_z * *(b + 280 * OS1_S1 + 10) -
                p_over_q * *(b + 358 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 10);
            *(b + 280 * OS1_S1 + 23) = prefactor_x * *(b + 280 * OS1_S1 + 13) -
                                       p_over_q * *(b + 346 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 280 * OS1_S1 + 7);
            *(b + 280 * OS1_S1 + 24) =
                prefactor_z * *(b + 280 * OS1_S1 + 11) -
                p_over_q * *(b + 358 * OS1_S1 + 11) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 11);
            *(b + 280 * OS1_S1 + 25) = prefactor_x * *(b + 280 * OS1_S1 + 15) -
                                       p_over_q * *(b + 346 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 280 * OS1_S1 + 9);
            *(b + 280 * OS1_S1 + 26) = prefactor_x * *(b + 280 * OS1_S1 + 16) -
                                       p_over_q * *(b + 346 * OS1_S1 + 16);
            *(b + 280 * OS1_S1 + 27) = prefactor_x * *(b + 280 * OS1_S1 + 17) -
                                       p_over_q * *(b + 346 * OS1_S1 + 17);
            *(b + 280 * OS1_S1 + 28) = prefactor_x * *(b + 280 * OS1_S1 + 18) -
                                       p_over_q * *(b + 346 * OS1_S1 + 18);
            *(b + 280 * OS1_S1 + 29) = prefactor_x * *(b + 280 * OS1_S1 + 19) -
                                       p_over_q * *(b + 346 * OS1_S1 + 19);
            *(b + 280 * OS1_S1 + 30) =
                prefactor_y * *(b + 280 * OS1_S1 + 16) -
                p_over_q * *(b + 357 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 280 * OS1_S1 + 7);
            *(b + 280 * OS1_S1 + 31) =
                prefactor_z * *(b + 280 * OS1_S1 + 16) -
                p_over_q * *(b + 358 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 16);
            *(b + 280 * OS1_S1 + 32) =
                prefactor_z * *(b + 280 * OS1_S1 + 17) -
                p_over_q * *(b + 358 * OS1_S1 + 17) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 17) +
                one_over_two_q * *(b + 280 * OS1_S1 + 7);
            *(b + 280 * OS1_S1 + 33) =
                prefactor_y * *(b + 280 * OS1_S1 + 19) -
                p_over_q * *(b + 357 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 19);
            *(b + 280 * OS1_S1 + 34) =
                prefactor_z * *(b + 280 * OS1_S1 + 19) -
                p_over_q * *(b + 358 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 280 * OS1_S1 + 9);
            *(b + 281 * OS1_S1 + 20) =
                prefactor_x * *(b + 281 * OS1_S1 + 10) -
                p_over_q * *(b + 347 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 281 * OS1_S1 + 4);
            *(b + 281 * OS1_S1 + 21) =
                prefactor_y * *(b + 281 * OS1_S1 + 10) -
                p_over_q * *(b + 358 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 10);
            *(b + 281 * OS1_S1 + 22) =
                prefactor_z * *(b + 281 * OS1_S1 + 10) -
                p_over_q * *(b + 359 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 10);
            *(b + 281 * OS1_S1 + 23) = prefactor_x * *(b + 281 * OS1_S1 + 13) -
                                       p_over_q * *(b + 347 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 281 * OS1_S1 + 7);
            *(b + 281 * OS1_S1 + 24) =
                prefactor_y * *(b + 281 * OS1_S1 + 12) -
                p_over_q * *(b + 358 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 12);
            *(b + 281 * OS1_S1 + 25) = prefactor_x * *(b + 281 * OS1_S1 + 15) -
                                       p_over_q * *(b + 347 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 281 * OS1_S1 + 9);
            *(b + 281 * OS1_S1 + 26) = prefactor_x * *(b + 281 * OS1_S1 + 16) -
                                       p_over_q * *(b + 347 * OS1_S1 + 16);
            *(b + 281 * OS1_S1 + 27) = prefactor_x * *(b + 281 * OS1_S1 + 17) -
                                       p_over_q * *(b + 347 * OS1_S1 + 17);
            *(b + 281 * OS1_S1 + 28) = prefactor_x * *(b + 281 * OS1_S1 + 18) -
                                       p_over_q * *(b + 347 * OS1_S1 + 18);
            *(b + 281 * OS1_S1 + 29) = prefactor_x * *(b + 281 * OS1_S1 + 19) -
                                       p_over_q * *(b + 347 * OS1_S1 + 19);
            *(b + 281 * OS1_S1 + 30) =
                prefactor_y * *(b + 281 * OS1_S1 + 16) -
                p_over_q * *(b + 358 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 281 * OS1_S1 + 7);
            *(b + 281 * OS1_S1 + 31) =
                prefactor_z * *(b + 281 * OS1_S1 + 16) -
                p_over_q * *(b + 359 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 16);
            *(b + 281 * OS1_S1 + 32) =
                prefactor_y * *(b + 281 * OS1_S1 + 18) -
                p_over_q * *(b + 358 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 18) +
                one_over_two_q * *(b + 281 * OS1_S1 + 9);
            *(b + 281 * OS1_S1 + 33) =
                prefactor_y * *(b + 281 * OS1_S1 + 19) -
                p_over_q * *(b + 358 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 19);
            *(b + 281 * OS1_S1 + 34) =
                prefactor_z * *(b + 281 * OS1_S1 + 19) -
                p_over_q * *(b + 359 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 281 * OS1_S1 + 9);
            *(b + 282 * OS1_S1 + 20) =
                prefactor_x * *(b + 282 * OS1_S1 + 10) -
                p_over_q * *(b + 348 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 282 * OS1_S1 + 4);
            *(b + 282 * OS1_S1 + 21) =
                prefactor_y * *(b + 282 * OS1_S1 + 10) -
                p_over_q * *(b + 359 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 10);
            *(b + 282 * OS1_S1 + 22) =
                prefactor_z * *(b + 282 * OS1_S1 + 10) -
                p_over_q * *(b + 360 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 10);
            *(b + 282 * OS1_S1 + 23) = prefactor_x * *(b + 282 * OS1_S1 + 13) -
                                       p_over_q * *(b + 348 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 282 * OS1_S1 + 7);
            *(b + 282 * OS1_S1 + 24) =
                prefactor_y * *(b + 282 * OS1_S1 + 12) -
                p_over_q * *(b + 359 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 12);
            *(b + 282 * OS1_S1 + 25) = prefactor_x * *(b + 282 * OS1_S1 + 15) -
                                       p_over_q * *(b + 348 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 282 * OS1_S1 + 9);
            *(b + 282 * OS1_S1 + 26) = prefactor_x * *(b + 282 * OS1_S1 + 16) -
                                       p_over_q * *(b + 348 * OS1_S1 + 16);
            *(b + 282 * OS1_S1 + 27) = prefactor_x * *(b + 282 * OS1_S1 + 17) -
                                       p_over_q * *(b + 348 * OS1_S1 + 17);
            *(b + 282 * OS1_S1 + 28) = prefactor_x * *(b + 282 * OS1_S1 + 18) -
                                       p_over_q * *(b + 348 * OS1_S1 + 18);
            *(b + 282 * OS1_S1 + 29) = prefactor_x * *(b + 282 * OS1_S1 + 19) -
                                       p_over_q * *(b + 348 * OS1_S1 + 19);
            *(b + 282 * OS1_S1 + 30) =
                prefactor_y * *(b + 282 * OS1_S1 + 16) -
                p_over_q * *(b + 359 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 282 * OS1_S1 + 7);
            *(b + 282 * OS1_S1 + 31) =
                prefactor_z * *(b + 282 * OS1_S1 + 16) -
                p_over_q * *(b + 360 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 16);
            *(b + 282 * OS1_S1 + 32) =
                prefactor_y * *(b + 282 * OS1_S1 + 18) -
                p_over_q * *(b + 359 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 18) +
                one_over_two_q * *(b + 282 * OS1_S1 + 9);
            *(b + 282 * OS1_S1 + 33) =
                prefactor_y * *(b + 282 * OS1_S1 + 19) -
                p_over_q * *(b + 359 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 19);
            *(b + 282 * OS1_S1 + 34) =
                prefactor_z * *(b + 282 * OS1_S1 + 19) -
                p_over_q * *(b + 360 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 282 * OS1_S1 + 9);
            *(b + 283 * OS1_S1 + 20) =
                prefactor_x * *(b + 283 * OS1_S1 + 10) -
                p_over_q * *(b + 349 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 4);
            *(b + 283 * OS1_S1 + 21) =
                prefactor_y * *(b + 283 * OS1_S1 + 10) -
                p_over_q * *(b + 360 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 10);
            *(b + 283 * OS1_S1 + 22) =
                prefactor_z * *(b + 283 * OS1_S1 + 10) -
                p_over_q * *(b + 361 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 10);
            *(b + 283 * OS1_S1 + 23) = prefactor_x * *(b + 283 * OS1_S1 + 13) -
                                       p_over_q * *(b + 349 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 283 * OS1_S1 + 7);
            *(b + 283 * OS1_S1 + 24) =
                prefactor_y * *(b + 283 * OS1_S1 + 12) -
                p_over_q * *(b + 360 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 12);
            *(b + 283 * OS1_S1 + 25) = prefactor_x * *(b + 283 * OS1_S1 + 15) -
                                       p_over_q * *(b + 349 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 283 * OS1_S1 + 9);
            *(b + 283 * OS1_S1 + 26) = prefactor_x * *(b + 283 * OS1_S1 + 16) -
                                       p_over_q * *(b + 349 * OS1_S1 + 16);
            *(b + 283 * OS1_S1 + 27) = prefactor_x * *(b + 283 * OS1_S1 + 17) -
                                       p_over_q * *(b + 349 * OS1_S1 + 17);
            *(b + 283 * OS1_S1 + 28) = prefactor_x * *(b + 283 * OS1_S1 + 18) -
                                       p_over_q * *(b + 349 * OS1_S1 + 18);
            *(b + 283 * OS1_S1 + 29) = prefactor_x * *(b + 283 * OS1_S1 + 19) -
                                       p_over_q * *(b + 349 * OS1_S1 + 19);
            *(b + 283 * OS1_S1 + 30) =
                prefactor_y * *(b + 283 * OS1_S1 + 16) -
                p_over_q * *(b + 360 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 7);
            *(b + 283 * OS1_S1 + 31) =
                prefactor_z * *(b + 283 * OS1_S1 + 16) -
                p_over_q * *(b + 361 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 16);
            *(b + 283 * OS1_S1 + 32) =
                prefactor_y * *(b + 283 * OS1_S1 + 18) -
                p_over_q * *(b + 360 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 18) +
                one_over_two_q * *(b + 283 * OS1_S1 + 9);
            *(b + 283 * OS1_S1 + 33) =
                prefactor_y * *(b + 283 * OS1_S1 + 19) -
                p_over_q * *(b + 360 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 19);
            *(b + 283 * OS1_S1 + 34) =
                prefactor_z * *(b + 283 * OS1_S1 + 19) -
                p_over_q * *(b + 361 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 9);
            *(b + 284 * OS1_S1 + 20) =
                prefactor_x * *(b + 284 * OS1_S1 + 10) -
                p_over_q * *(b + 350 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 284 * OS1_S1 + 4);
            *(b + 284 * OS1_S1 + 21) =
                prefactor_y * *(b + 284 * OS1_S1 + 10) -
                p_over_q * *(b + 361 * OS1_S1 + 10) +
                one_over_two_q * *(b + 219 * OS1_S1 + 10);
            *(b + 284 * OS1_S1 + 22) =
                prefactor_z * *(b + 284 * OS1_S1 + 10) -
                p_over_q * *(b + 362 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 10);
            *(b + 284 * OS1_S1 + 23) = prefactor_x * *(b + 284 * OS1_S1 + 13) -
                                       p_over_q * *(b + 350 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 284 * OS1_S1 + 7);
            *(b + 284 * OS1_S1 + 24) =
                prefactor_y * *(b + 284 * OS1_S1 + 12) -
                p_over_q * *(b + 361 * OS1_S1 + 12) +
                one_over_two_q * *(b + 219 * OS1_S1 + 12);
            *(b + 284 * OS1_S1 + 25) = prefactor_x * *(b + 284 * OS1_S1 + 15) -
                                       p_over_q * *(b + 350 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 284 * OS1_S1 + 9);
            *(b + 284 * OS1_S1 + 26) = prefactor_x * *(b + 284 * OS1_S1 + 16) -
                                       p_over_q * *(b + 350 * OS1_S1 + 16);
            *(b + 284 * OS1_S1 + 27) = prefactor_x * *(b + 284 * OS1_S1 + 17) -
                                       p_over_q * *(b + 350 * OS1_S1 + 17);
            *(b + 284 * OS1_S1 + 28) = prefactor_x * *(b + 284 * OS1_S1 + 18) -
                                       p_over_q * *(b + 350 * OS1_S1 + 18);
            *(b + 284 * OS1_S1 + 29) = prefactor_x * *(b + 284 * OS1_S1 + 19) -
                                       p_over_q * *(b + 350 * OS1_S1 + 19);
            *(b + 284 * OS1_S1 + 30) =
                prefactor_y * *(b + 284 * OS1_S1 + 16) -
                p_over_q * *(b + 361 * OS1_S1 + 16) +
                one_over_two_q * *(b + 219 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 284 * OS1_S1 + 7);
            *(b + 284 * OS1_S1 + 31) =
                prefactor_z * *(b + 284 * OS1_S1 + 16) -
                p_over_q * *(b + 362 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 16);
            *(b + 284 * OS1_S1 + 32) =
                prefactor_y * *(b + 284 * OS1_S1 + 18) -
                p_over_q * *(b + 361 * OS1_S1 + 18) +
                one_over_two_q * *(b + 219 * OS1_S1 + 18) +
                one_over_two_q * *(b + 284 * OS1_S1 + 9);
            *(b + 284 * OS1_S1 + 33) =
                prefactor_y * *(b + 284 * OS1_S1 + 19) -
                p_over_q * *(b + 361 * OS1_S1 + 19) +
                one_over_two_q * *(b + 219 * OS1_S1 + 19);
            *(b + 284 * OS1_S1 + 34) =
                prefactor_z * *(b + 284 * OS1_S1 + 19) -
                p_over_q * *(b + 362 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 284 * OS1_S1 + 9);
            *(b + 285 * OS1_S1 + 20) =
                prefactor_x * *(b + 285 * OS1_S1 + 10) -
                p_over_q * *(b + 351 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 285 * OS1_S1 + 4);
            *(b + 285 * OS1_S1 + 21) = prefactor_y * *(b + 285 * OS1_S1 + 10) -
                                       p_over_q * *(b + 362 * OS1_S1 + 10);
            *(b + 285 * OS1_S1 + 22) =
                prefactor_z * *(b + 285 * OS1_S1 + 10) -
                p_over_q * *(b + 363 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 10);
            *(b + 285 * OS1_S1 + 23) = prefactor_y * *(b + 285 * OS1_S1 + 11) -
                                       p_over_q * *(b + 362 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 285 * OS1_S1 + 4);
            *(b + 285 * OS1_S1 + 24) = prefactor_y * *(b + 285 * OS1_S1 + 12) -
                                       p_over_q * *(b + 362 * OS1_S1 + 12);
            *(b + 285 * OS1_S1 + 25) = prefactor_x * *(b + 285 * OS1_S1 + 15) -
                                       p_over_q * *(b + 351 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 285 * OS1_S1 + 9);
            *(b + 285 * OS1_S1 + 26) = prefactor_x * *(b + 285 * OS1_S1 + 16) -
                                       p_over_q * *(b + 351 * OS1_S1 + 16);
            *(b + 285 * OS1_S1 + 27) = prefactor_x * *(b + 285 * OS1_S1 + 17) -
                                       p_over_q * *(b + 351 * OS1_S1 + 17);
            *(b + 285 * OS1_S1 + 28) = prefactor_y * *(b + 285 * OS1_S1 + 15) -
                                       p_over_q * *(b + 362 * OS1_S1 + 15);
            *(b + 285 * OS1_S1 + 29) = prefactor_x * *(b + 285 * OS1_S1 + 19) -
                                       p_over_q * *(b + 351 * OS1_S1 + 19);
            *(b + 285 * OS1_S1 + 30) =
                prefactor_y * *(b + 285 * OS1_S1 + 16) -
                p_over_q * *(b + 362 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 285 * OS1_S1 + 7);
            *(b + 285 * OS1_S1 + 31) =
                prefactor_z * *(b + 285 * OS1_S1 + 16) -
                p_over_q * *(b + 363 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 16);
            *(b + 285 * OS1_S1 + 32) = prefactor_y * *(b + 285 * OS1_S1 + 18) -
                                       p_over_q * *(b + 362 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 285 * OS1_S1 + 9);
            *(b + 285 * OS1_S1 + 33) = prefactor_y * *(b + 285 * OS1_S1 + 19) -
                                       p_over_q * *(b + 362 * OS1_S1 + 19);
            *(b + 285 * OS1_S1 + 34) =
                prefactor_z * *(b + 285 * OS1_S1 + 19) -
                p_over_q * *(b + 363 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 285 * OS1_S1 + 9);
            return;
        }
    }
}
