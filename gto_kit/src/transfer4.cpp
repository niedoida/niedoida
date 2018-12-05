/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        inline void transfer_0_4(const double prefactor_x,
                                 const double prefactor_y,
                                 const double prefactor_z,
                                 const double p_over_q,
                                 const double one_over_two_q,
                                 double* NIEDOIDA_RESTRICT b)
        {
            *(b + 0 * OS1_S1 + 20) = prefactor_x * *(b + 0 * OS1_S1 + 10) -
                                     p_over_q * *(b + 1 * OS1_S1 + 10) +
                                     3 * one_over_two_q * *(b + 0 * OS1_S1 + 4);
            *(b + 0 * OS1_S1 + 21) = prefactor_y * *(b + 0 * OS1_S1 + 10) -
                                     p_over_q * *(b + 2 * OS1_S1 + 10);
            *(b + 0 * OS1_S1 + 22) = prefactor_z * *(b + 0 * OS1_S1 + 10) -
                                     p_over_q * *(b + 3 * OS1_S1 + 10);
            *(b + 0 * OS1_S1 + 23) = prefactor_y * *(b + 0 * OS1_S1 + 11) -
                                     p_over_q * *(b + 2 * OS1_S1 + 11) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 4);
            *(b + 0 * OS1_S1 + 24) = prefactor_z * *(b + 0 * OS1_S1 + 11) -
                                     p_over_q * *(b + 3 * OS1_S1 + 11);
            *(b + 0 * OS1_S1 + 25) = prefactor_z * *(b + 0 * OS1_S1 + 12) -
                                     p_over_q * *(b + 3 * OS1_S1 + 12) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 4);
            *(b + 0 * OS1_S1 + 26) = prefactor_x * *(b + 0 * OS1_S1 + 16) -
                                     p_over_q * *(b + 1 * OS1_S1 + 16);
            *(b + 0 * OS1_S1 + 27) = prefactor_z * *(b + 0 * OS1_S1 + 13) -
                                     p_over_q * *(b + 3 * OS1_S1 + 13);
            *(b + 0 * OS1_S1 + 28) = prefactor_y * *(b + 0 * OS1_S1 + 15) -
                                     p_over_q * *(b + 2 * OS1_S1 + 15);
            *(b + 0 * OS1_S1 + 29) = prefactor_x * *(b + 0 * OS1_S1 + 19) -
                                     p_over_q * *(b + 1 * OS1_S1 + 19);
            *(b + 0 * OS1_S1 + 30) = prefactor_y * *(b + 0 * OS1_S1 + 16) -
                                     p_over_q * *(b + 2 * OS1_S1 + 16) +
                                     3 * one_over_two_q * *(b + 0 * OS1_S1 + 7);
            *(b + 0 * OS1_S1 + 31) = prefactor_z * *(b + 0 * OS1_S1 + 16) -
                                     p_over_q * *(b + 3 * OS1_S1 + 16);
            *(b + 0 * OS1_S1 + 32) = prefactor_z * *(b + 0 * OS1_S1 + 17) -
                                     p_over_q * *(b + 3 * OS1_S1 + 17) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 7);
            *(b + 0 * OS1_S1 + 33) = prefactor_y * *(b + 0 * OS1_S1 + 19) -
                                     p_over_q * *(b + 2 * OS1_S1 + 19);
            *(b + 0 * OS1_S1 + 34) = prefactor_z * *(b + 0 * OS1_S1 + 19) -
                                     p_over_q * *(b + 3 * OS1_S1 + 19) +
                                     3 * one_over_two_q * *(b + 0 * OS1_S1 + 9);
            return;
        }
        void transfer_1_4(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 1 * OS1_S1 + 20) = prefactor_x * *(b + 1 * OS1_S1 + 10) -
                                     p_over_q * *(b + 4 * OS1_S1 + 10) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 10) +
                                     3 * one_over_two_q * *(b + 1 * OS1_S1 + 4);
            *(b + 1 * OS1_S1 + 21) = prefactor_y * *(b + 1 * OS1_S1 + 10) -
                                     p_over_q * *(b + 5 * OS1_S1 + 10);
            *(b + 1 * OS1_S1 + 22) = prefactor_z * *(b + 1 * OS1_S1 + 10) -
                                     p_over_q * *(b + 6 * OS1_S1 + 10);
            *(b + 1 * OS1_S1 + 23) = prefactor_y * *(b + 1 * OS1_S1 + 11) -
                                     p_over_q * *(b + 5 * OS1_S1 + 11) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 4);
            *(b + 1 * OS1_S1 + 24) = prefactor_z * *(b + 1 * OS1_S1 + 11) -
                                     p_over_q * *(b + 6 * OS1_S1 + 11);
            *(b + 1 * OS1_S1 + 25) = prefactor_z * *(b + 1 * OS1_S1 + 12) -
                                     p_over_q * *(b + 6 * OS1_S1 + 12) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 4);
            *(b + 1 * OS1_S1 + 26) = prefactor_x * *(b + 1 * OS1_S1 + 16) -
                                     p_over_q * *(b + 4 * OS1_S1 + 16) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 16);
            *(b + 1 * OS1_S1 + 27) = prefactor_z * *(b + 1 * OS1_S1 + 13) -
                                     p_over_q * *(b + 6 * OS1_S1 + 13);
            *(b + 1 * OS1_S1 + 28) = prefactor_y * *(b + 1 * OS1_S1 + 15) -
                                     p_over_q * *(b + 5 * OS1_S1 + 15);
            *(b + 1 * OS1_S1 + 29) = prefactor_x * *(b + 1 * OS1_S1 + 19) -
                                     p_over_q * *(b + 4 * OS1_S1 + 19) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 19);
            *(b + 1 * OS1_S1 + 30) = prefactor_y * *(b + 1 * OS1_S1 + 16) -
                                     p_over_q * *(b + 5 * OS1_S1 + 16) +
                                     3 * one_over_two_q * *(b + 1 * OS1_S1 + 7);
            *(b + 1 * OS1_S1 + 31) = prefactor_z * *(b + 1 * OS1_S1 + 16) -
                                     p_over_q * *(b + 6 * OS1_S1 + 16);
            *(b + 1 * OS1_S1 + 32) = prefactor_z * *(b + 1 * OS1_S1 + 17) -
                                     p_over_q * *(b + 6 * OS1_S1 + 17) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 7);
            *(b + 1 * OS1_S1 + 33) = prefactor_y * *(b + 1 * OS1_S1 + 19) -
                                     p_over_q * *(b + 5 * OS1_S1 + 19);
            *(b + 1 * OS1_S1 + 34) = prefactor_z * *(b + 1 * OS1_S1 + 19) -
                                     p_over_q * *(b + 6 * OS1_S1 + 19) +
                                     3 * one_over_two_q * *(b + 1 * OS1_S1 + 9);
            *(b + 2 * OS1_S1 + 20) = prefactor_x * *(b + 2 * OS1_S1 + 10) -
                                     p_over_q * *(b + 5 * OS1_S1 + 10) +
                                     3 * one_over_two_q * *(b + 2 * OS1_S1 + 4);
            *(b + 2 * OS1_S1 + 21) = prefactor_y * *(b + 2 * OS1_S1 + 10) -
                                     p_over_q * *(b + 7 * OS1_S1 + 10) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 10);
            *(b + 2 * OS1_S1 + 22) = prefactor_z * *(b + 2 * OS1_S1 + 10) -
                                     p_over_q * *(b + 8 * OS1_S1 + 10);
            *(b + 2 * OS1_S1 + 23) = prefactor_x * *(b + 2 * OS1_S1 + 13) -
                                     p_over_q * *(b + 5 * OS1_S1 + 13) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 7);
            *(b + 2 * OS1_S1 + 24) = prefactor_z * *(b + 2 * OS1_S1 + 11) -
                                     p_over_q * *(b + 8 * OS1_S1 + 11);
            *(b + 2 * OS1_S1 + 25) = prefactor_z * *(b + 2 * OS1_S1 + 12) -
                                     p_over_q * *(b + 8 * OS1_S1 + 12) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 4);
            *(b + 2 * OS1_S1 + 26) = prefactor_x * *(b + 2 * OS1_S1 + 16) -
                                     p_over_q * *(b + 5 * OS1_S1 + 16);
            *(b + 2 * OS1_S1 + 27) = prefactor_z * *(b + 2 * OS1_S1 + 13) -
                                     p_over_q * *(b + 8 * OS1_S1 + 13);
            *(b + 2 * OS1_S1 + 28) = prefactor_x * *(b + 2 * OS1_S1 + 18) -
                                     p_over_q * *(b + 5 * OS1_S1 + 18);
            *(b + 2 * OS1_S1 + 29) = prefactor_x * *(b + 2 * OS1_S1 + 19) -
                                     p_over_q * *(b + 5 * OS1_S1 + 19);
            *(b + 2 * OS1_S1 + 30) = prefactor_y * *(b + 2 * OS1_S1 + 16) -
                                     p_over_q * *(b + 7 * OS1_S1 + 16) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 16) +
                                     3 * one_over_two_q * *(b + 2 * OS1_S1 + 7);
            *(b + 2 * OS1_S1 + 31) = prefactor_z * *(b + 2 * OS1_S1 + 16) -
                                     p_over_q * *(b + 8 * OS1_S1 + 16);
            *(b + 2 * OS1_S1 + 32) = prefactor_z * *(b + 2 * OS1_S1 + 17) -
                                     p_over_q * *(b + 8 * OS1_S1 + 17) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 7);
            *(b + 2 * OS1_S1 + 33) = prefactor_y * *(b + 2 * OS1_S1 + 19) -
                                     p_over_q * *(b + 7 * OS1_S1 + 19) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 19);
            *(b + 2 * OS1_S1 + 34) = prefactor_z * *(b + 2 * OS1_S1 + 19) -
                                     p_over_q * *(b + 8 * OS1_S1 + 19) +
                                     3 * one_over_two_q * *(b + 2 * OS1_S1 + 9);
            *(b + 3 * OS1_S1 + 20) = prefactor_x * *(b + 3 * OS1_S1 + 10) -
                                     p_over_q * *(b + 6 * OS1_S1 + 10) +
                                     3 * one_over_two_q * *(b + 3 * OS1_S1 + 4);
            *(b + 3 * OS1_S1 + 21) = prefactor_y * *(b + 3 * OS1_S1 + 10) -
                                     p_over_q * *(b + 8 * OS1_S1 + 10);
            *(b + 3 * OS1_S1 + 22) = prefactor_z * *(b + 3 * OS1_S1 + 10) -
                                     p_over_q * *(b + 9 * OS1_S1 + 10) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 10);
            *(b + 3 * OS1_S1 + 23) = prefactor_y * *(b + 3 * OS1_S1 + 11) -
                                     p_over_q * *(b + 8 * OS1_S1 + 11) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 4);
            *(b + 3 * OS1_S1 + 24) = prefactor_y * *(b + 3 * OS1_S1 + 12) -
                                     p_over_q * *(b + 8 * OS1_S1 + 12);
            *(b + 3 * OS1_S1 + 25) = prefactor_x * *(b + 3 * OS1_S1 + 15) -
                                     p_over_q * *(b + 6 * OS1_S1 + 15) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 9);
            *(b + 3 * OS1_S1 + 26) = prefactor_x * *(b + 3 * OS1_S1 + 16) -
                                     p_over_q * *(b + 6 * OS1_S1 + 16);
            *(b + 3 * OS1_S1 + 27) = prefactor_x * *(b + 3 * OS1_S1 + 17) -
                                     p_over_q * *(b + 6 * OS1_S1 + 17);
            *(b + 3 * OS1_S1 + 28) = prefactor_y * *(b + 3 * OS1_S1 + 15) -
                                     p_over_q * *(b + 8 * OS1_S1 + 15);
            *(b + 3 * OS1_S1 + 29) = prefactor_x * *(b + 3 * OS1_S1 + 19) -
                                     p_over_q * *(b + 6 * OS1_S1 + 19);
            *(b + 3 * OS1_S1 + 30) = prefactor_y * *(b + 3 * OS1_S1 + 16) -
                                     p_over_q * *(b + 8 * OS1_S1 + 16) +
                                     3 * one_over_two_q * *(b + 3 * OS1_S1 + 7);
            *(b + 3 * OS1_S1 + 31) = prefactor_z * *(b + 3 * OS1_S1 + 16) -
                                     p_over_q * *(b + 9 * OS1_S1 + 16) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 16);
            *(b + 3 * OS1_S1 + 32) = prefactor_y * *(b + 3 * OS1_S1 + 18) -
                                     p_over_q * *(b + 8 * OS1_S1 + 18) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 9);
            *(b + 3 * OS1_S1 + 33) = prefactor_y * *(b + 3 * OS1_S1 + 19) -
                                     p_over_q * *(b + 8 * OS1_S1 + 19);
            *(b + 3 * OS1_S1 + 34) = prefactor_z * *(b + 3 * OS1_S1 + 19) -
                                     p_over_q * *(b + 9 * OS1_S1 + 19) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 19) +
                                     3 * one_over_two_q * *(b + 3 * OS1_S1 + 9);
            return;
        }
        void transfer_2_4(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 4 * OS1_S1 + 20) =
                prefactor_x * *(b + 4 * OS1_S1 + 10) -
                p_over_q * *(b + 10 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 4);
            *(b + 4 * OS1_S1 + 21) = prefactor_y * *(b + 4 * OS1_S1 + 10) -
                                     p_over_q * *(b + 11 * OS1_S1 + 10);
            *(b + 4 * OS1_S1 + 22) = prefactor_z * *(b + 4 * OS1_S1 + 10) -
                                     p_over_q * *(b + 12 * OS1_S1 + 10);
            *(b + 4 * OS1_S1 + 23) = prefactor_y * *(b + 4 * OS1_S1 + 11) -
                                     p_over_q * *(b + 11 * OS1_S1 + 11) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 4);
            *(b + 4 * OS1_S1 + 24) = prefactor_z * *(b + 4 * OS1_S1 + 11) -
                                     p_over_q * *(b + 12 * OS1_S1 + 11);
            *(b + 4 * OS1_S1 + 25) = prefactor_z * *(b + 4 * OS1_S1 + 12) -
                                     p_over_q * *(b + 12 * OS1_S1 + 12) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 4);
            *(b + 4 * OS1_S1 + 26) =
                prefactor_x * *(b + 4 * OS1_S1 + 16) -
                p_over_q * *(b + 10 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 16);
            *(b + 4 * OS1_S1 + 27) = prefactor_z * *(b + 4 * OS1_S1 + 13) -
                                     p_over_q * *(b + 12 * OS1_S1 + 13);
            *(b + 4 * OS1_S1 + 28) = prefactor_y * *(b + 4 * OS1_S1 + 15) -
                                     p_over_q * *(b + 11 * OS1_S1 + 15);
            *(b + 4 * OS1_S1 + 29) =
                prefactor_x * *(b + 4 * OS1_S1 + 19) -
                p_over_q * *(b + 10 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 19);
            *(b + 4 * OS1_S1 + 30) = prefactor_y * *(b + 4 * OS1_S1 + 16) -
                                     p_over_q * *(b + 11 * OS1_S1 + 16) +
                                     3 * one_over_two_q * *(b + 4 * OS1_S1 + 7);
            *(b + 4 * OS1_S1 + 31) = prefactor_z * *(b + 4 * OS1_S1 + 16) -
                                     p_over_q * *(b + 12 * OS1_S1 + 16);
            *(b + 4 * OS1_S1 + 32) = prefactor_z * *(b + 4 * OS1_S1 + 17) -
                                     p_over_q * *(b + 12 * OS1_S1 + 17) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 7);
            *(b + 4 * OS1_S1 + 33) = prefactor_y * *(b + 4 * OS1_S1 + 19) -
                                     p_over_q * *(b + 11 * OS1_S1 + 19);
            *(b + 4 * OS1_S1 + 34) = prefactor_z * *(b + 4 * OS1_S1 + 19) -
                                     p_over_q * *(b + 12 * OS1_S1 + 19) +
                                     3 * one_over_two_q * *(b + 4 * OS1_S1 + 9);
            *(b + 5 * OS1_S1 + 20) = prefactor_x * *(b + 5 * OS1_S1 + 10) -
                                     p_over_q * *(b + 11 * OS1_S1 + 10) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 10) +
                                     3 * one_over_two_q * *(b + 5 * OS1_S1 + 4);
            *(b + 5 * OS1_S1 + 21) = prefactor_y * *(b + 5 * OS1_S1 + 10) -
                                     p_over_q * *(b + 13 * OS1_S1 + 10) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 10);
            *(b + 5 * OS1_S1 + 22) = prefactor_z * *(b + 5 * OS1_S1 + 10) -
                                     p_over_q * *(b + 14 * OS1_S1 + 10);
            *(b + 5 * OS1_S1 + 23) = prefactor_y * *(b + 5 * OS1_S1 + 11) -
                                     p_over_q * *(b + 13 * OS1_S1 + 11) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 11) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 4);
            *(b + 5 * OS1_S1 + 24) = prefactor_z * *(b + 5 * OS1_S1 + 11) -
                                     p_over_q * *(b + 14 * OS1_S1 + 11);
            *(b + 5 * OS1_S1 + 25) = prefactor_z * *(b + 5 * OS1_S1 + 12) -
                                     p_over_q * *(b + 14 * OS1_S1 + 12) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 4);
            *(b + 5 * OS1_S1 + 26) = prefactor_x * *(b + 5 * OS1_S1 + 16) -
                                     p_over_q * *(b + 11 * OS1_S1 + 16) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 16);
            *(b + 5 * OS1_S1 + 27) = prefactor_z * *(b + 5 * OS1_S1 + 13) -
                                     p_over_q * *(b + 14 * OS1_S1 + 13);
            *(b + 5 * OS1_S1 + 28) = prefactor_y * *(b + 5 * OS1_S1 + 15) -
                                     p_over_q * *(b + 13 * OS1_S1 + 15) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 15);
            *(b + 5 * OS1_S1 + 29) = prefactor_x * *(b + 5 * OS1_S1 + 19) -
                                     p_over_q * *(b + 11 * OS1_S1 + 19) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 19);
            *(b + 5 * OS1_S1 + 30) = prefactor_y * *(b + 5 * OS1_S1 + 16) -
                                     p_over_q * *(b + 13 * OS1_S1 + 16) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 16) +
                                     3 * one_over_two_q * *(b + 5 * OS1_S1 + 7);
            *(b + 5 * OS1_S1 + 31) = prefactor_z * *(b + 5 * OS1_S1 + 16) -
                                     p_over_q * *(b + 14 * OS1_S1 + 16);
            *(b + 5 * OS1_S1 + 32) = prefactor_z * *(b + 5 * OS1_S1 + 17) -
                                     p_over_q * *(b + 14 * OS1_S1 + 17) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 7);
            *(b + 5 * OS1_S1 + 33) = prefactor_y * *(b + 5 * OS1_S1 + 19) -
                                     p_over_q * *(b + 13 * OS1_S1 + 19) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 19);
            *(b + 5 * OS1_S1 + 34) = prefactor_z * *(b + 5 * OS1_S1 + 19) -
                                     p_over_q * *(b + 14 * OS1_S1 + 19) +
                                     3 * one_over_two_q * *(b + 5 * OS1_S1 + 9);
            *(b + 6 * OS1_S1 + 20) = prefactor_x * *(b + 6 * OS1_S1 + 10) -
                                     p_over_q * *(b + 12 * OS1_S1 + 10) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 10) +
                                     3 * one_over_two_q * *(b + 6 * OS1_S1 + 4);
            *(b + 6 * OS1_S1 + 21) = prefactor_y * *(b + 6 * OS1_S1 + 10) -
                                     p_over_q * *(b + 14 * OS1_S1 + 10);
            *(b + 6 * OS1_S1 + 22) = prefactor_z * *(b + 6 * OS1_S1 + 10) -
                                     p_over_q * *(b + 15 * OS1_S1 + 10) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 10);
            *(b + 6 * OS1_S1 + 23) = prefactor_y * *(b + 6 * OS1_S1 + 11) -
                                     p_over_q * *(b + 14 * OS1_S1 + 11) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 4);
            *(b + 6 * OS1_S1 + 24) = prefactor_y * *(b + 6 * OS1_S1 + 12) -
                                     p_over_q * *(b + 14 * OS1_S1 + 12);
            *(b + 6 * OS1_S1 + 25) = prefactor_z * *(b + 6 * OS1_S1 + 12) -
                                     p_over_q * *(b + 15 * OS1_S1 + 12) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 12) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 4);
            *(b + 6 * OS1_S1 + 26) = prefactor_x * *(b + 6 * OS1_S1 + 16) -
                                     p_over_q * *(b + 12 * OS1_S1 + 16) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 16);
            *(b + 6 * OS1_S1 + 27) = prefactor_z * *(b + 6 * OS1_S1 + 13) -
                                     p_over_q * *(b + 15 * OS1_S1 + 13) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 13);
            *(b + 6 * OS1_S1 + 28) = prefactor_y * *(b + 6 * OS1_S1 + 15) -
                                     p_over_q * *(b + 14 * OS1_S1 + 15);
            *(b + 6 * OS1_S1 + 29) = prefactor_x * *(b + 6 * OS1_S1 + 19) -
                                     p_over_q * *(b + 12 * OS1_S1 + 19) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 19);
            *(b + 6 * OS1_S1 + 30) = prefactor_y * *(b + 6 * OS1_S1 + 16) -
                                     p_over_q * *(b + 14 * OS1_S1 + 16) +
                                     3 * one_over_two_q * *(b + 6 * OS1_S1 + 7);
            *(b + 6 * OS1_S1 + 31) = prefactor_z * *(b + 6 * OS1_S1 + 16) -
                                     p_over_q * *(b + 15 * OS1_S1 + 16) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 16);
            *(b + 6 * OS1_S1 + 32) = prefactor_y * *(b + 6 * OS1_S1 + 18) -
                                     p_over_q * *(b + 14 * OS1_S1 + 18) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 9);
            *(b + 6 * OS1_S1 + 33) = prefactor_y * *(b + 6 * OS1_S1 + 19) -
                                     p_over_q * *(b + 14 * OS1_S1 + 19);
            *(b + 6 * OS1_S1 + 34) = prefactor_z * *(b + 6 * OS1_S1 + 19) -
                                     p_over_q * *(b + 15 * OS1_S1 + 19) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 19) +
                                     3 * one_over_two_q * *(b + 6 * OS1_S1 + 9);
            *(b + 7 * OS1_S1 + 20) = prefactor_x * *(b + 7 * OS1_S1 + 10) -
                                     p_over_q * *(b + 13 * OS1_S1 + 10) +
                                     3 * one_over_two_q * *(b + 7 * OS1_S1 + 4);
            *(b + 7 * OS1_S1 + 21) =
                prefactor_y * *(b + 7 * OS1_S1 + 10) -
                p_over_q * *(b + 16 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 10);
            *(b + 7 * OS1_S1 + 22) = prefactor_z * *(b + 7 * OS1_S1 + 10) -
                                     p_over_q * *(b + 17 * OS1_S1 + 10);
            *(b + 7 * OS1_S1 + 23) = prefactor_x * *(b + 7 * OS1_S1 + 13) -
                                     p_over_q * *(b + 13 * OS1_S1 + 13) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 7);
            *(b + 7 * OS1_S1 + 24) = prefactor_z * *(b + 7 * OS1_S1 + 11) -
                                     p_over_q * *(b + 17 * OS1_S1 + 11);
            *(b + 7 * OS1_S1 + 25) = prefactor_z * *(b + 7 * OS1_S1 + 12) -
                                     p_over_q * *(b + 17 * OS1_S1 + 12) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 4);
            *(b + 7 * OS1_S1 + 26) = prefactor_x * *(b + 7 * OS1_S1 + 16) -
                                     p_over_q * *(b + 13 * OS1_S1 + 16);
            *(b + 7 * OS1_S1 + 27) = prefactor_z * *(b + 7 * OS1_S1 + 13) -
                                     p_over_q * *(b + 17 * OS1_S1 + 13);
            *(b + 7 * OS1_S1 + 28) = prefactor_x * *(b + 7 * OS1_S1 + 18) -
                                     p_over_q * *(b + 13 * OS1_S1 + 18);
            *(b + 7 * OS1_S1 + 29) = prefactor_x * *(b + 7 * OS1_S1 + 19) -
                                     p_over_q * *(b + 13 * OS1_S1 + 19);
            *(b + 7 * OS1_S1 + 30) =
                prefactor_y * *(b + 7 * OS1_S1 + 16) -
                p_over_q * *(b + 16 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 7);
            *(b + 7 * OS1_S1 + 31) = prefactor_z * *(b + 7 * OS1_S1 + 16) -
                                     p_over_q * *(b + 17 * OS1_S1 + 16);
            *(b + 7 * OS1_S1 + 32) = prefactor_z * *(b + 7 * OS1_S1 + 17) -
                                     p_over_q * *(b + 17 * OS1_S1 + 17) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 7);
            *(b + 7 * OS1_S1 + 33) =
                prefactor_y * *(b + 7 * OS1_S1 + 19) -
                p_over_q * *(b + 16 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 19);
            *(b + 7 * OS1_S1 + 34) = prefactor_z * *(b + 7 * OS1_S1 + 19) -
                                     p_over_q * *(b + 17 * OS1_S1 + 19) +
                                     3 * one_over_two_q * *(b + 7 * OS1_S1 + 9);
            *(b + 8 * OS1_S1 + 20) = prefactor_x * *(b + 8 * OS1_S1 + 10) -
                                     p_over_q * *(b + 14 * OS1_S1 + 10) +
                                     3 * one_over_two_q * *(b + 8 * OS1_S1 + 4);
            *(b + 8 * OS1_S1 + 21) = prefactor_y * *(b + 8 * OS1_S1 + 10) -
                                     p_over_q * *(b + 17 * OS1_S1 + 10) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 10);
            *(b + 8 * OS1_S1 + 22) = prefactor_z * *(b + 8 * OS1_S1 + 10) -
                                     p_over_q * *(b + 18 * OS1_S1 + 10) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 10);
            *(b + 8 * OS1_S1 + 23) = prefactor_x * *(b + 8 * OS1_S1 + 13) -
                                     p_over_q * *(b + 14 * OS1_S1 + 13) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 7);
            *(b + 8 * OS1_S1 + 24) = prefactor_z * *(b + 8 * OS1_S1 + 11) -
                                     p_over_q * *(b + 18 * OS1_S1 + 11) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 11);
            *(b + 8 * OS1_S1 + 25) = prefactor_x * *(b + 8 * OS1_S1 + 15) -
                                     p_over_q * *(b + 14 * OS1_S1 + 15) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 9);
            *(b + 8 * OS1_S1 + 26) = prefactor_x * *(b + 8 * OS1_S1 + 16) -
                                     p_over_q * *(b + 14 * OS1_S1 + 16);
            *(b + 8 * OS1_S1 + 27) = prefactor_x * *(b + 8 * OS1_S1 + 17) -
                                     p_over_q * *(b + 14 * OS1_S1 + 17);
            *(b + 8 * OS1_S1 + 28) = prefactor_x * *(b + 8 * OS1_S1 + 18) -
                                     p_over_q * *(b + 14 * OS1_S1 + 18);
            *(b + 8 * OS1_S1 + 29) = prefactor_x * *(b + 8 * OS1_S1 + 19) -
                                     p_over_q * *(b + 14 * OS1_S1 + 19);
            *(b + 8 * OS1_S1 + 30) = prefactor_y * *(b + 8 * OS1_S1 + 16) -
                                     p_over_q * *(b + 17 * OS1_S1 + 16) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 16) +
                                     3 * one_over_two_q * *(b + 8 * OS1_S1 + 7);
            *(b + 8 * OS1_S1 + 31) = prefactor_z * *(b + 8 * OS1_S1 + 16) -
                                     p_over_q * *(b + 18 * OS1_S1 + 16) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 16);
            *(b + 8 * OS1_S1 + 32) = prefactor_z * *(b + 8 * OS1_S1 + 17) -
                                     p_over_q * *(b + 18 * OS1_S1 + 17) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 17) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 7);
            *(b + 8 * OS1_S1 + 33) = prefactor_y * *(b + 8 * OS1_S1 + 19) -
                                     p_over_q * *(b + 17 * OS1_S1 + 19) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 19);
            *(b + 8 * OS1_S1 + 34) = prefactor_z * *(b + 8 * OS1_S1 + 19) -
                                     p_over_q * *(b + 18 * OS1_S1 + 19) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 19) +
                                     3 * one_over_two_q * *(b + 8 * OS1_S1 + 9);
            *(b + 9 * OS1_S1 + 20) = prefactor_x * *(b + 9 * OS1_S1 + 10) -
                                     p_over_q * *(b + 15 * OS1_S1 + 10) +
                                     3 * one_over_two_q * *(b + 9 * OS1_S1 + 4);
            *(b + 9 * OS1_S1 + 21) = prefactor_y * *(b + 9 * OS1_S1 + 10) -
                                     p_over_q * *(b + 18 * OS1_S1 + 10);
            *(b + 9 * OS1_S1 + 22) =
                prefactor_z * *(b + 9 * OS1_S1 + 10) -
                p_over_q * *(b + 19 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 10);
            *(b + 9 * OS1_S1 + 23) = prefactor_y * *(b + 9 * OS1_S1 + 11) -
                                     p_over_q * *(b + 18 * OS1_S1 + 11) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 4);
            *(b + 9 * OS1_S1 + 24) = prefactor_y * *(b + 9 * OS1_S1 + 12) -
                                     p_over_q * *(b + 18 * OS1_S1 + 12);
            *(b + 9 * OS1_S1 + 25) = prefactor_x * *(b + 9 * OS1_S1 + 15) -
                                     p_over_q * *(b + 15 * OS1_S1 + 15) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 9);
            *(b + 9 * OS1_S1 + 26) = prefactor_x * *(b + 9 * OS1_S1 + 16) -
                                     p_over_q * *(b + 15 * OS1_S1 + 16);
            *(b + 9 * OS1_S1 + 27) = prefactor_x * *(b + 9 * OS1_S1 + 17) -
                                     p_over_q * *(b + 15 * OS1_S1 + 17);
            *(b + 9 * OS1_S1 + 28) = prefactor_y * *(b + 9 * OS1_S1 + 15) -
                                     p_over_q * *(b + 18 * OS1_S1 + 15);
            *(b + 9 * OS1_S1 + 29) = prefactor_x * *(b + 9 * OS1_S1 + 19) -
                                     p_over_q * *(b + 15 * OS1_S1 + 19);
            *(b + 9 * OS1_S1 + 30) = prefactor_y * *(b + 9 * OS1_S1 + 16) -
                                     p_over_q * *(b + 18 * OS1_S1 + 16) +
                                     3 * one_over_two_q * *(b + 9 * OS1_S1 + 7);
            *(b + 9 * OS1_S1 + 31) =
                prefactor_z * *(b + 9 * OS1_S1 + 16) -
                p_over_q * *(b + 19 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 16);
            *(b + 9 * OS1_S1 + 32) = prefactor_y * *(b + 9 * OS1_S1 + 18) -
                                     p_over_q * *(b + 18 * OS1_S1 + 18) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 9);
            *(b + 9 * OS1_S1 + 33) = prefactor_y * *(b + 9 * OS1_S1 + 19) -
                                     p_over_q * *(b + 18 * OS1_S1 + 19);
            *(b + 9 * OS1_S1 + 34) =
                prefactor_z * *(b + 9 * OS1_S1 + 19) -
                p_over_q * *(b + 19 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 9);
            return;
        }
        void transfer_3_4(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 10 * OS1_S1 + 20) =
                prefactor_x * *(b + 10 * OS1_S1 + 10) -
                p_over_q * *(b + 20 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 10 * OS1_S1 + 4);
            *(b + 10 * OS1_S1 + 21) = prefactor_y * *(b + 10 * OS1_S1 + 10) -
                                      p_over_q * *(b + 21 * OS1_S1 + 10);
            *(b + 10 * OS1_S1 + 22) = prefactor_z * *(b + 10 * OS1_S1 + 10) -
                                      p_over_q * *(b + 22 * OS1_S1 + 10);
            *(b + 10 * OS1_S1 + 23) = prefactor_y * *(b + 10 * OS1_S1 + 11) -
                                      p_over_q * *(b + 21 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 4);
            *(b + 10 * OS1_S1 + 24) = prefactor_z * *(b + 10 * OS1_S1 + 11) -
                                      p_over_q * *(b + 22 * OS1_S1 + 11);
            *(b + 10 * OS1_S1 + 25) = prefactor_z * *(b + 10 * OS1_S1 + 12) -
                                      p_over_q * *(b + 22 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 4);
            *(b + 10 * OS1_S1 + 26) =
                prefactor_x * *(b + 10 * OS1_S1 + 16) -
                p_over_q * *(b + 20 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 16);
            *(b + 10 * OS1_S1 + 27) = prefactor_z * *(b + 10 * OS1_S1 + 13) -
                                      p_over_q * *(b + 22 * OS1_S1 + 13);
            *(b + 10 * OS1_S1 + 28) = prefactor_y * *(b + 10 * OS1_S1 + 15) -
                                      p_over_q * *(b + 21 * OS1_S1 + 15);
            *(b + 10 * OS1_S1 + 29) =
                prefactor_x * *(b + 10 * OS1_S1 + 19) -
                p_over_q * *(b + 20 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 19);
            *(b + 10 * OS1_S1 + 30) =
                prefactor_y * *(b + 10 * OS1_S1 + 16) -
                p_over_q * *(b + 21 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 10 * OS1_S1 + 7);
            *(b + 10 * OS1_S1 + 31) = prefactor_z * *(b + 10 * OS1_S1 + 16) -
                                      p_over_q * *(b + 22 * OS1_S1 + 16);
            *(b + 10 * OS1_S1 + 32) = prefactor_z * *(b + 10 * OS1_S1 + 17) -
                                      p_over_q * *(b + 22 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 7);
            *(b + 10 * OS1_S1 + 33) = prefactor_y * *(b + 10 * OS1_S1 + 19) -
                                      p_over_q * *(b + 21 * OS1_S1 + 19);
            *(b + 10 * OS1_S1 + 34) =
                prefactor_z * *(b + 10 * OS1_S1 + 19) -
                p_over_q * *(b + 22 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 10 * OS1_S1 + 9);
            *(b + 11 * OS1_S1 + 20) =
                prefactor_x * *(b + 11 * OS1_S1 + 10) -
                p_over_q * *(b + 21 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 4);
            *(b + 11 * OS1_S1 + 21) = prefactor_y * *(b + 11 * OS1_S1 + 10) -
                                      p_over_q * *(b + 23 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 10);
            *(b + 11 * OS1_S1 + 22) = prefactor_z * *(b + 11 * OS1_S1 + 10) -
                                      p_over_q * *(b + 24 * OS1_S1 + 10);
            *(b + 11 * OS1_S1 + 23) = prefactor_y * *(b + 11 * OS1_S1 + 11) -
                                      p_over_q * *(b + 23 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 4);
            *(b + 11 * OS1_S1 + 24) = prefactor_z * *(b + 11 * OS1_S1 + 11) -
                                      p_over_q * *(b + 24 * OS1_S1 + 11);
            *(b + 11 * OS1_S1 + 25) = prefactor_z * *(b + 11 * OS1_S1 + 12) -
                                      p_over_q * *(b + 24 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 4);
            *(b + 11 * OS1_S1 + 26) =
                prefactor_x * *(b + 11 * OS1_S1 + 16) -
                p_over_q * *(b + 21 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 16);
            *(b + 11 * OS1_S1 + 27) = prefactor_z * *(b + 11 * OS1_S1 + 13) -
                                      p_over_q * *(b + 24 * OS1_S1 + 13);
            *(b + 11 * OS1_S1 + 28) = prefactor_y * *(b + 11 * OS1_S1 + 15) -
                                      p_over_q * *(b + 23 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 15);
            *(b + 11 * OS1_S1 + 29) =
                prefactor_x * *(b + 11 * OS1_S1 + 19) -
                p_over_q * *(b + 21 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 19);
            *(b + 11 * OS1_S1 + 30) =
                prefactor_y * *(b + 11 * OS1_S1 + 16) -
                p_over_q * *(b + 23 * OS1_S1 + 16) +
                one_over_two_q * *(b + 4 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 7);
            *(b + 11 * OS1_S1 + 31) = prefactor_z * *(b + 11 * OS1_S1 + 16) -
                                      p_over_q * *(b + 24 * OS1_S1 + 16);
            *(b + 11 * OS1_S1 + 32) = prefactor_z * *(b + 11 * OS1_S1 + 17) -
                                      p_over_q * *(b + 24 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 7);
            *(b + 11 * OS1_S1 + 33) = prefactor_y * *(b + 11 * OS1_S1 + 19) -
                                      p_over_q * *(b + 23 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 19);
            *(b + 11 * OS1_S1 + 34) =
                prefactor_z * *(b + 11 * OS1_S1 + 19) -
                p_over_q * *(b + 24 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 9);
            *(b + 12 * OS1_S1 + 20) =
                prefactor_x * *(b + 12 * OS1_S1 + 10) -
                p_over_q * *(b + 22 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 4);
            *(b + 12 * OS1_S1 + 21) = prefactor_y * *(b + 12 * OS1_S1 + 10) -
                                      p_over_q * *(b + 24 * OS1_S1 + 10);
            *(b + 12 * OS1_S1 + 22) = prefactor_z * *(b + 12 * OS1_S1 + 10) -
                                      p_over_q * *(b + 25 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 10);
            *(b + 12 * OS1_S1 + 23) = prefactor_y * *(b + 12 * OS1_S1 + 11) -
                                      p_over_q * *(b + 24 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 4);
            *(b + 12 * OS1_S1 + 24) = prefactor_y * *(b + 12 * OS1_S1 + 12) -
                                      p_over_q * *(b + 24 * OS1_S1 + 12);
            *(b + 12 * OS1_S1 + 25) = prefactor_z * *(b + 12 * OS1_S1 + 12) -
                                      p_over_q * *(b + 25 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 4);
            *(b + 12 * OS1_S1 + 26) =
                prefactor_x * *(b + 12 * OS1_S1 + 16) -
                p_over_q * *(b + 22 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 16);
            *(b + 12 * OS1_S1 + 27) = prefactor_z * *(b + 12 * OS1_S1 + 13) -
                                      p_over_q * *(b + 25 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 13);
            *(b + 12 * OS1_S1 + 28) = prefactor_y * *(b + 12 * OS1_S1 + 15) -
                                      p_over_q * *(b + 24 * OS1_S1 + 15);
            *(b + 12 * OS1_S1 + 29) =
                prefactor_x * *(b + 12 * OS1_S1 + 19) -
                p_over_q * *(b + 22 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 19);
            *(b + 12 * OS1_S1 + 30) =
                prefactor_y * *(b + 12 * OS1_S1 + 16) -
                p_over_q * *(b + 24 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 7);
            *(b + 12 * OS1_S1 + 31) = prefactor_z * *(b + 12 * OS1_S1 + 16) -
                                      p_over_q * *(b + 25 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 16);
            *(b + 12 * OS1_S1 + 32) = prefactor_y * *(b + 12 * OS1_S1 + 18) -
                                      p_over_q * *(b + 24 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 9);
            *(b + 12 * OS1_S1 + 33) = prefactor_y * *(b + 12 * OS1_S1 + 19) -
                                      p_over_q * *(b + 24 * OS1_S1 + 19);
            *(b + 12 * OS1_S1 + 34) =
                prefactor_z * *(b + 12 * OS1_S1 + 19) -
                p_over_q * *(b + 25 * OS1_S1 + 19) +
                one_over_two_q * *(b + 4 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 9);
            *(b + 13 * OS1_S1 + 20) =
                prefactor_x * *(b + 13 * OS1_S1 + 10) -
                p_over_q * *(b + 23 * OS1_S1 + 10) +
                one_over_two_q * *(b + 7 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 4);
            *(b + 13 * OS1_S1 + 21) =
                prefactor_y * *(b + 13 * OS1_S1 + 10) -
                p_over_q * *(b + 26 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 10);
            *(b + 13 * OS1_S1 + 22) = prefactor_z * *(b + 13 * OS1_S1 + 10) -
                                      p_over_q * *(b + 27 * OS1_S1 + 10);
            *(b + 13 * OS1_S1 + 23) = prefactor_x * *(b + 13 * OS1_S1 + 13) -
                                      p_over_q * *(b + 23 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 7);
            *(b + 13 * OS1_S1 + 24) = prefactor_z * *(b + 13 * OS1_S1 + 11) -
                                      p_over_q * *(b + 27 * OS1_S1 + 11);
            *(b + 13 * OS1_S1 + 25) = prefactor_z * *(b + 13 * OS1_S1 + 12) -
                                      p_over_q * *(b + 27 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 4);
            *(b + 13 * OS1_S1 + 26) = prefactor_x * *(b + 13 * OS1_S1 + 16) -
                                      p_over_q * *(b + 23 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 16);
            *(b + 13 * OS1_S1 + 27) = prefactor_z * *(b + 13 * OS1_S1 + 13) -
                                      p_over_q * *(b + 27 * OS1_S1 + 13);
            *(b + 13 * OS1_S1 + 28) = prefactor_x * *(b + 13 * OS1_S1 + 18) -
                                      p_over_q * *(b + 23 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 18);
            *(b + 13 * OS1_S1 + 29) = prefactor_x * *(b + 13 * OS1_S1 + 19) -
                                      p_over_q * *(b + 23 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 19);
            *(b + 13 * OS1_S1 + 30) =
                prefactor_y * *(b + 13 * OS1_S1 + 16) -
                p_over_q * *(b + 26 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 7);
            *(b + 13 * OS1_S1 + 31) = prefactor_z * *(b + 13 * OS1_S1 + 16) -
                                      p_over_q * *(b + 27 * OS1_S1 + 16);
            *(b + 13 * OS1_S1 + 32) = prefactor_z * *(b + 13 * OS1_S1 + 17) -
                                      p_over_q * *(b + 27 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 7);
            *(b + 13 * OS1_S1 + 33) =
                prefactor_y * *(b + 13 * OS1_S1 + 19) -
                p_over_q * *(b + 26 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 19);
            *(b + 13 * OS1_S1 + 34) =
                prefactor_z * *(b + 13 * OS1_S1 + 19) -
                p_over_q * *(b + 27 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 9);
            *(b + 14 * OS1_S1 + 20) =
                prefactor_x * *(b + 14 * OS1_S1 + 10) -
                p_over_q * *(b + 24 * OS1_S1 + 10) +
                one_over_two_q * *(b + 8 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 14 * OS1_S1 + 4);
            *(b + 14 * OS1_S1 + 21) = prefactor_y * *(b + 14 * OS1_S1 + 10) -
                                      p_over_q * *(b + 27 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 10);
            *(b + 14 * OS1_S1 + 22) = prefactor_z * *(b + 14 * OS1_S1 + 10) -
                                      p_over_q * *(b + 28 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 10);
            *(b + 14 * OS1_S1 + 23) = prefactor_y * *(b + 14 * OS1_S1 + 11) -
                                      p_over_q * *(b + 27 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 4);
            *(b + 14 * OS1_S1 + 24) = prefactor_z * *(b + 14 * OS1_S1 + 11) -
                                      p_over_q * *(b + 28 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 11);
            *(b + 14 * OS1_S1 + 25) = prefactor_z * *(b + 14 * OS1_S1 + 12) -
                                      p_over_q * *(b + 28 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 4);
            *(b + 14 * OS1_S1 + 26) = prefactor_x * *(b + 14 * OS1_S1 + 16) -
                                      p_over_q * *(b + 24 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 16);
            *(b + 14 * OS1_S1 + 27) = prefactor_z * *(b + 14 * OS1_S1 + 13) -
                                      p_over_q * *(b + 28 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 13);
            *(b + 14 * OS1_S1 + 28) = prefactor_y * *(b + 14 * OS1_S1 + 15) -
                                      p_over_q * *(b + 27 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 15);
            *(b + 14 * OS1_S1 + 29) = prefactor_x * *(b + 14 * OS1_S1 + 19) -
                                      p_over_q * *(b + 24 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 19);
            *(b + 14 * OS1_S1 + 30) =
                prefactor_y * *(b + 14 * OS1_S1 + 16) -
                p_over_q * *(b + 27 * OS1_S1 + 16) +
                one_over_two_q * *(b + 6 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 14 * OS1_S1 + 7);
            *(b + 14 * OS1_S1 + 31) = prefactor_z * *(b + 14 * OS1_S1 + 16) -
                                      p_over_q * *(b + 28 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 16);
            *(b + 14 * OS1_S1 + 32) = prefactor_z * *(b + 14 * OS1_S1 + 17) -
                                      p_over_q * *(b + 28 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 7);
            *(b + 14 * OS1_S1 + 33) = prefactor_y * *(b + 14 * OS1_S1 + 19) -
                                      p_over_q * *(b + 27 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 19);
            *(b + 14 * OS1_S1 + 34) =
                prefactor_z * *(b + 14 * OS1_S1 + 19) -
                p_over_q * *(b + 28 * OS1_S1 + 19) +
                one_over_two_q * *(b + 5 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 14 * OS1_S1 + 9);
            *(b + 15 * OS1_S1 + 20) =
                prefactor_x * *(b + 15 * OS1_S1 + 10) -
                p_over_q * *(b + 25 * OS1_S1 + 10) +
                one_over_two_q * *(b + 9 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 4);
            *(b + 15 * OS1_S1 + 21) = prefactor_y * *(b + 15 * OS1_S1 + 10) -
                                      p_over_q * *(b + 28 * OS1_S1 + 10);
            *(b + 15 * OS1_S1 + 22) =
                prefactor_z * *(b + 15 * OS1_S1 + 10) -
                p_over_q * *(b + 29 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 10);
            *(b + 15 * OS1_S1 + 23) = prefactor_y * *(b + 15 * OS1_S1 + 11) -
                                      p_over_q * *(b + 28 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 4);
            *(b + 15 * OS1_S1 + 24) = prefactor_y * *(b + 15 * OS1_S1 + 12) -
                                      p_over_q * *(b + 28 * OS1_S1 + 12);
            *(b + 15 * OS1_S1 + 25) = prefactor_x * *(b + 15 * OS1_S1 + 15) -
                                      p_over_q * *(b + 25 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 9);
            *(b + 15 * OS1_S1 + 26) = prefactor_x * *(b + 15 * OS1_S1 + 16) -
                                      p_over_q * *(b + 25 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 16);
            *(b + 15 * OS1_S1 + 27) = prefactor_x * *(b + 15 * OS1_S1 + 17) -
                                      p_over_q * *(b + 25 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 17);
            *(b + 15 * OS1_S1 + 28) = prefactor_y * *(b + 15 * OS1_S1 + 15) -
                                      p_over_q * *(b + 28 * OS1_S1 + 15);
            *(b + 15 * OS1_S1 + 29) = prefactor_x * *(b + 15 * OS1_S1 + 19) -
                                      p_over_q * *(b + 25 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 19);
            *(b + 15 * OS1_S1 + 30) =
                prefactor_y * *(b + 15 * OS1_S1 + 16) -
                p_over_q * *(b + 28 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 7);
            *(b + 15 * OS1_S1 + 31) =
                prefactor_z * *(b + 15 * OS1_S1 + 16) -
                p_over_q * *(b + 29 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 16);
            *(b + 15 * OS1_S1 + 32) = prefactor_y * *(b + 15 * OS1_S1 + 18) -
                                      p_over_q * *(b + 28 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 9);
            *(b + 15 * OS1_S1 + 33) = prefactor_y * *(b + 15 * OS1_S1 + 19) -
                                      p_over_q * *(b + 28 * OS1_S1 + 19);
            *(b + 15 * OS1_S1 + 34) =
                prefactor_z * *(b + 15 * OS1_S1 + 19) -
                p_over_q * *(b + 29 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 9);
            *(b + 16 * OS1_S1 + 20) =
                prefactor_x * *(b + 16 * OS1_S1 + 10) -
                p_over_q * *(b + 26 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 16 * OS1_S1 + 4);
            *(b + 16 * OS1_S1 + 21) =
                prefactor_y * *(b + 16 * OS1_S1 + 10) -
                p_over_q * *(b + 30 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 10);
            *(b + 16 * OS1_S1 + 22) = prefactor_z * *(b + 16 * OS1_S1 + 10) -
                                      p_over_q * *(b + 31 * OS1_S1 + 10);
            *(b + 16 * OS1_S1 + 23) = prefactor_x * *(b + 16 * OS1_S1 + 13) -
                                      p_over_q * *(b + 26 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 7);
            *(b + 16 * OS1_S1 + 24) = prefactor_z * *(b + 16 * OS1_S1 + 11) -
                                      p_over_q * *(b + 31 * OS1_S1 + 11);
            *(b + 16 * OS1_S1 + 25) = prefactor_z * *(b + 16 * OS1_S1 + 12) -
                                      p_over_q * *(b + 31 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 4);
            *(b + 16 * OS1_S1 + 26) = prefactor_x * *(b + 16 * OS1_S1 + 16) -
                                      p_over_q * *(b + 26 * OS1_S1 + 16);
            *(b + 16 * OS1_S1 + 27) = prefactor_z * *(b + 16 * OS1_S1 + 13) -
                                      p_over_q * *(b + 31 * OS1_S1 + 13);
            *(b + 16 * OS1_S1 + 28) = prefactor_x * *(b + 16 * OS1_S1 + 18) -
                                      p_over_q * *(b + 26 * OS1_S1 + 18);
            *(b + 16 * OS1_S1 + 29) = prefactor_x * *(b + 16 * OS1_S1 + 19) -
                                      p_over_q * *(b + 26 * OS1_S1 + 19);
            *(b + 16 * OS1_S1 + 30) =
                prefactor_y * *(b + 16 * OS1_S1 + 16) -
                p_over_q * *(b + 30 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 16 * OS1_S1 + 7);
            *(b + 16 * OS1_S1 + 31) = prefactor_z * *(b + 16 * OS1_S1 + 16) -
                                      p_over_q * *(b + 31 * OS1_S1 + 16);
            *(b + 16 * OS1_S1 + 32) = prefactor_z * *(b + 16 * OS1_S1 + 17) -
                                      p_over_q * *(b + 31 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 7);
            *(b + 16 * OS1_S1 + 33) =
                prefactor_y * *(b + 16 * OS1_S1 + 19) -
                p_over_q * *(b + 30 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 19);
            *(b + 16 * OS1_S1 + 34) =
                prefactor_z * *(b + 16 * OS1_S1 + 19) -
                p_over_q * *(b + 31 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 16 * OS1_S1 + 9);
            *(b + 17 * OS1_S1 + 20) =
                prefactor_x * *(b + 17 * OS1_S1 + 10) -
                p_over_q * *(b + 27 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 4);
            *(b + 17 * OS1_S1 + 21) =
                prefactor_y * *(b + 17 * OS1_S1 + 10) -
                p_over_q * *(b + 31 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 10);
            *(b + 17 * OS1_S1 + 22) = prefactor_z * *(b + 17 * OS1_S1 + 10) -
                                      p_over_q * *(b + 32 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 10);
            *(b + 17 * OS1_S1 + 23) = prefactor_x * *(b + 17 * OS1_S1 + 13) -
                                      p_over_q * *(b + 27 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 7);
            *(b + 17 * OS1_S1 + 24) = prefactor_z * *(b + 17 * OS1_S1 + 11) -
                                      p_over_q * *(b + 32 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 11);
            *(b + 17 * OS1_S1 + 25) = prefactor_x * *(b + 17 * OS1_S1 + 15) -
                                      p_over_q * *(b + 27 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 9);
            *(b + 17 * OS1_S1 + 26) = prefactor_x * *(b + 17 * OS1_S1 + 16) -
                                      p_over_q * *(b + 27 * OS1_S1 + 16);
            *(b + 17 * OS1_S1 + 27) = prefactor_x * *(b + 17 * OS1_S1 + 17) -
                                      p_over_q * *(b + 27 * OS1_S1 + 17);
            *(b + 17 * OS1_S1 + 28) = prefactor_x * *(b + 17 * OS1_S1 + 18) -
                                      p_over_q * *(b + 27 * OS1_S1 + 18);
            *(b + 17 * OS1_S1 + 29) = prefactor_x * *(b + 17 * OS1_S1 + 19) -
                                      p_over_q * *(b + 27 * OS1_S1 + 19);
            *(b + 17 * OS1_S1 + 30) =
                prefactor_y * *(b + 17 * OS1_S1 + 16) -
                p_over_q * *(b + 31 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 7);
            *(b + 17 * OS1_S1 + 31) = prefactor_z * *(b + 17 * OS1_S1 + 16) -
                                      p_over_q * *(b + 32 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 16);
            *(b + 17 * OS1_S1 + 32) = prefactor_z * *(b + 17 * OS1_S1 + 17) -
                                      p_over_q * *(b + 32 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 7);
            *(b + 17 * OS1_S1 + 33) =
                prefactor_y * *(b + 17 * OS1_S1 + 19) -
                p_over_q * *(b + 31 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 19);
            *(b + 17 * OS1_S1 + 34) =
                prefactor_z * *(b + 17 * OS1_S1 + 19) -
                p_over_q * *(b + 32 * OS1_S1 + 19) +
                one_over_two_q * *(b + 7 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 9);
            *(b + 18 * OS1_S1 + 20) =
                prefactor_x * *(b + 18 * OS1_S1 + 10) -
                p_over_q * *(b + 28 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 4);
            *(b + 18 * OS1_S1 + 21) = prefactor_y * *(b + 18 * OS1_S1 + 10) -
                                      p_over_q * *(b + 32 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 10);
            *(b + 18 * OS1_S1 + 22) =
                prefactor_z * *(b + 18 * OS1_S1 + 10) -
                p_over_q * *(b + 33 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 10);
            *(b + 18 * OS1_S1 + 23) = prefactor_x * *(b + 18 * OS1_S1 + 13) -
                                      p_over_q * *(b + 28 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 7);
            *(b + 18 * OS1_S1 + 24) = prefactor_y * *(b + 18 * OS1_S1 + 12) -
                                      p_over_q * *(b + 32 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 12);
            *(b + 18 * OS1_S1 + 25) = prefactor_x * *(b + 18 * OS1_S1 + 15) -
                                      p_over_q * *(b + 28 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 9);
            *(b + 18 * OS1_S1 + 26) = prefactor_x * *(b + 18 * OS1_S1 + 16) -
                                      p_over_q * *(b + 28 * OS1_S1 + 16);
            *(b + 18 * OS1_S1 + 27) = prefactor_x * *(b + 18 * OS1_S1 + 17) -
                                      p_over_q * *(b + 28 * OS1_S1 + 17);
            *(b + 18 * OS1_S1 + 28) = prefactor_x * *(b + 18 * OS1_S1 + 18) -
                                      p_over_q * *(b + 28 * OS1_S1 + 18);
            *(b + 18 * OS1_S1 + 29) = prefactor_x * *(b + 18 * OS1_S1 + 19) -
                                      p_over_q * *(b + 28 * OS1_S1 + 19);
            *(b + 18 * OS1_S1 + 30) =
                prefactor_y * *(b + 18 * OS1_S1 + 16) -
                p_over_q * *(b + 32 * OS1_S1 + 16) +
                one_over_two_q * *(b + 9 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 7);
            *(b + 18 * OS1_S1 + 31) =
                prefactor_z * *(b + 18 * OS1_S1 + 16) -
                p_over_q * *(b + 33 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 16);
            *(b + 18 * OS1_S1 + 32) = prefactor_y * *(b + 18 * OS1_S1 + 18) -
                                      p_over_q * *(b + 32 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 9);
            *(b + 18 * OS1_S1 + 33) = prefactor_y * *(b + 18 * OS1_S1 + 19) -
                                      p_over_q * *(b + 32 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 19);
            *(b + 18 * OS1_S1 + 34) =
                prefactor_z * *(b + 18 * OS1_S1 + 19) -
                p_over_q * *(b + 33 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 9);
            *(b + 19 * OS1_S1 + 20) =
                prefactor_x * *(b + 19 * OS1_S1 + 10) -
                p_over_q * *(b + 29 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 19 * OS1_S1 + 4);
            *(b + 19 * OS1_S1 + 21) = prefactor_y * *(b + 19 * OS1_S1 + 10) -
                                      p_over_q * *(b + 33 * OS1_S1 + 10);
            *(b + 19 * OS1_S1 + 22) =
                prefactor_z * *(b + 19 * OS1_S1 + 10) -
                p_over_q * *(b + 34 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 10);
            *(b + 19 * OS1_S1 + 23) = prefactor_y * *(b + 19 * OS1_S1 + 11) -
                                      p_over_q * *(b + 33 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 4);
            *(b + 19 * OS1_S1 + 24) = prefactor_y * *(b + 19 * OS1_S1 + 12) -
                                      p_over_q * *(b + 33 * OS1_S1 + 12);
            *(b + 19 * OS1_S1 + 25) = prefactor_x * *(b + 19 * OS1_S1 + 15) -
                                      p_over_q * *(b + 29 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 9);
            *(b + 19 * OS1_S1 + 26) = prefactor_x * *(b + 19 * OS1_S1 + 16) -
                                      p_over_q * *(b + 29 * OS1_S1 + 16);
            *(b + 19 * OS1_S1 + 27) = prefactor_x * *(b + 19 * OS1_S1 + 17) -
                                      p_over_q * *(b + 29 * OS1_S1 + 17);
            *(b + 19 * OS1_S1 + 28) = prefactor_y * *(b + 19 * OS1_S1 + 15) -
                                      p_over_q * *(b + 33 * OS1_S1 + 15);
            *(b + 19 * OS1_S1 + 29) = prefactor_x * *(b + 19 * OS1_S1 + 19) -
                                      p_over_q * *(b + 29 * OS1_S1 + 19);
            *(b + 19 * OS1_S1 + 30) =
                prefactor_y * *(b + 19 * OS1_S1 + 16) -
                p_over_q * *(b + 33 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 19 * OS1_S1 + 7);
            *(b + 19 * OS1_S1 + 31) =
                prefactor_z * *(b + 19 * OS1_S1 + 16) -
                p_over_q * *(b + 34 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 16);
            *(b + 19 * OS1_S1 + 32) = prefactor_y * *(b + 19 * OS1_S1 + 18) -
                                      p_over_q * *(b + 33 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 9);
            *(b + 19 * OS1_S1 + 33) = prefactor_y * *(b + 19 * OS1_S1 + 19) -
                                      p_over_q * *(b + 33 * OS1_S1 + 19);
            *(b + 19 * OS1_S1 + 34) =
                prefactor_z * *(b + 19 * OS1_S1 + 19) -
                p_over_q * *(b + 34 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 19 * OS1_S1 + 9);
            return;
        }
        void transfer_4_4(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 20 * OS1_S1 + 20) =
                prefactor_x * *(b + 20 * OS1_S1 + 10) -
                p_over_q * *(b + 35 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 20 * OS1_S1 + 4);
            *(b + 20 * OS1_S1 + 21) = prefactor_y * *(b + 20 * OS1_S1 + 10) -
                                      p_over_q * *(b + 36 * OS1_S1 + 10);
            *(b + 20 * OS1_S1 + 22) = prefactor_z * *(b + 20 * OS1_S1 + 10) -
                                      p_over_q * *(b + 37 * OS1_S1 + 10);
            *(b + 20 * OS1_S1 + 23) = prefactor_y * *(b + 20 * OS1_S1 + 11) -
                                      p_over_q * *(b + 36 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 4);
            *(b + 20 * OS1_S1 + 24) = prefactor_z * *(b + 20 * OS1_S1 + 11) -
                                      p_over_q * *(b + 37 * OS1_S1 + 11);
            *(b + 20 * OS1_S1 + 25) = prefactor_z * *(b + 20 * OS1_S1 + 12) -
                                      p_over_q * *(b + 37 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 4);
            *(b + 20 * OS1_S1 + 26) =
                prefactor_x * *(b + 20 * OS1_S1 + 16) -
                p_over_q * *(b + 35 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 16);
            *(b + 20 * OS1_S1 + 27) = prefactor_z * *(b + 20 * OS1_S1 + 13) -
                                      p_over_q * *(b + 37 * OS1_S1 + 13);
            *(b + 20 * OS1_S1 + 28) = prefactor_y * *(b + 20 * OS1_S1 + 15) -
                                      p_over_q * *(b + 36 * OS1_S1 + 15);
            *(b + 20 * OS1_S1 + 29) =
                prefactor_x * *(b + 20 * OS1_S1 + 19) -
                p_over_q * *(b + 35 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 19);
            *(b + 20 * OS1_S1 + 30) =
                prefactor_y * *(b + 20 * OS1_S1 + 16) -
                p_over_q * *(b + 36 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 20 * OS1_S1 + 7);
            *(b + 20 * OS1_S1 + 31) = prefactor_z * *(b + 20 * OS1_S1 + 16) -
                                      p_over_q * *(b + 37 * OS1_S1 + 16);
            *(b + 20 * OS1_S1 + 32) = prefactor_z * *(b + 20 * OS1_S1 + 17) -
                                      p_over_q * *(b + 37 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 7);
            *(b + 20 * OS1_S1 + 33) = prefactor_y * *(b + 20 * OS1_S1 + 19) -
                                      p_over_q * *(b + 36 * OS1_S1 + 19);
            *(b + 20 * OS1_S1 + 34) =
                prefactor_z * *(b + 20 * OS1_S1 + 19) -
                p_over_q * *(b + 37 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 20 * OS1_S1 + 9);
            *(b + 21 * OS1_S1 + 20) =
                prefactor_x * *(b + 21 * OS1_S1 + 10) -
                p_over_q * *(b + 36 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 21 * OS1_S1 + 4);
            *(b + 21 * OS1_S1 + 21) = prefactor_y * *(b + 21 * OS1_S1 + 10) -
                                      p_over_q * *(b + 38 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 10);
            *(b + 21 * OS1_S1 + 22) = prefactor_z * *(b + 21 * OS1_S1 + 10) -
                                      p_over_q * *(b + 39 * OS1_S1 + 10);
            *(b + 21 * OS1_S1 + 23) = prefactor_y * *(b + 21 * OS1_S1 + 11) -
                                      p_over_q * *(b + 38 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 4);
            *(b + 21 * OS1_S1 + 24) = prefactor_z * *(b + 21 * OS1_S1 + 11) -
                                      p_over_q * *(b + 39 * OS1_S1 + 11);
            *(b + 21 * OS1_S1 + 25) = prefactor_z * *(b + 21 * OS1_S1 + 12) -
                                      p_over_q * *(b + 39 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 4);
            *(b + 21 * OS1_S1 + 26) =
                prefactor_x * *(b + 21 * OS1_S1 + 16) -
                p_over_q * *(b + 36 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 16);
            *(b + 21 * OS1_S1 + 27) = prefactor_z * *(b + 21 * OS1_S1 + 13) -
                                      p_over_q * *(b + 39 * OS1_S1 + 13);
            *(b + 21 * OS1_S1 + 28) = prefactor_y * *(b + 21 * OS1_S1 + 15) -
                                      p_over_q * *(b + 38 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 15);
            *(b + 21 * OS1_S1 + 29) =
                prefactor_x * *(b + 21 * OS1_S1 + 19) -
                p_over_q * *(b + 36 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 19);
            *(b + 21 * OS1_S1 + 30) =
                prefactor_y * *(b + 21 * OS1_S1 + 16) -
                p_over_q * *(b + 38 * OS1_S1 + 16) +
                one_over_two_q * *(b + 10 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 21 * OS1_S1 + 7);
            *(b + 21 * OS1_S1 + 31) = prefactor_z * *(b + 21 * OS1_S1 + 16) -
                                      p_over_q * *(b + 39 * OS1_S1 + 16);
            *(b + 21 * OS1_S1 + 32) = prefactor_z * *(b + 21 * OS1_S1 + 17) -
                                      p_over_q * *(b + 39 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 7);
            *(b + 21 * OS1_S1 + 33) = prefactor_y * *(b + 21 * OS1_S1 + 19) -
                                      p_over_q * *(b + 38 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 19);
            *(b + 21 * OS1_S1 + 34) =
                prefactor_z * *(b + 21 * OS1_S1 + 19) -
                p_over_q * *(b + 39 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 21 * OS1_S1 + 9);
            *(b + 22 * OS1_S1 + 20) =
                prefactor_x * *(b + 22 * OS1_S1 + 10) -
                p_over_q * *(b + 37 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 22 * OS1_S1 + 4);
            *(b + 22 * OS1_S1 + 21) = prefactor_y * *(b + 22 * OS1_S1 + 10) -
                                      p_over_q * *(b + 39 * OS1_S1 + 10);
            *(b + 22 * OS1_S1 + 22) = prefactor_z * *(b + 22 * OS1_S1 + 10) -
                                      p_over_q * *(b + 40 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 10);
            *(b + 22 * OS1_S1 + 23) = prefactor_y * *(b + 22 * OS1_S1 + 11) -
                                      p_over_q * *(b + 39 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 4);
            *(b + 22 * OS1_S1 + 24) = prefactor_y * *(b + 22 * OS1_S1 + 12) -
                                      p_over_q * *(b + 39 * OS1_S1 + 12);
            *(b + 22 * OS1_S1 + 25) = prefactor_z * *(b + 22 * OS1_S1 + 12) -
                                      p_over_q * *(b + 40 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 4);
            *(b + 22 * OS1_S1 + 26) =
                prefactor_x * *(b + 22 * OS1_S1 + 16) -
                p_over_q * *(b + 37 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 16);
            *(b + 22 * OS1_S1 + 27) = prefactor_z * *(b + 22 * OS1_S1 + 13) -
                                      p_over_q * *(b + 40 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 13);
            *(b + 22 * OS1_S1 + 28) = prefactor_y * *(b + 22 * OS1_S1 + 15) -
                                      p_over_q * *(b + 39 * OS1_S1 + 15);
            *(b + 22 * OS1_S1 + 29) =
                prefactor_x * *(b + 22 * OS1_S1 + 19) -
                p_over_q * *(b + 37 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 19);
            *(b + 22 * OS1_S1 + 30) =
                prefactor_y * *(b + 22 * OS1_S1 + 16) -
                p_over_q * *(b + 39 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 22 * OS1_S1 + 7);
            *(b + 22 * OS1_S1 + 31) = prefactor_z * *(b + 22 * OS1_S1 + 16) -
                                      p_over_q * *(b + 40 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 16);
            *(b + 22 * OS1_S1 + 32) = prefactor_y * *(b + 22 * OS1_S1 + 18) -
                                      p_over_q * *(b + 39 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 9);
            *(b + 22 * OS1_S1 + 33) = prefactor_y * *(b + 22 * OS1_S1 + 19) -
                                      p_over_q * *(b + 39 * OS1_S1 + 19);
            *(b + 22 * OS1_S1 + 34) =
                prefactor_z * *(b + 22 * OS1_S1 + 19) -
                p_over_q * *(b + 40 * OS1_S1 + 19) +
                one_over_two_q * *(b + 10 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 22 * OS1_S1 + 9);
            *(b + 23 * OS1_S1 + 20) =
                prefactor_x * *(b + 23 * OS1_S1 + 10) -
                p_over_q * *(b + 38 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 4);
            *(b + 23 * OS1_S1 + 21) =
                prefactor_y * *(b + 23 * OS1_S1 + 10) -
                p_over_q * *(b + 41 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 10);
            *(b + 23 * OS1_S1 + 22) = prefactor_z * *(b + 23 * OS1_S1 + 10) -
                                      p_over_q * *(b + 42 * OS1_S1 + 10);
            *(b + 23 * OS1_S1 + 23) =
                prefactor_y * *(b + 23 * OS1_S1 + 11) -
                p_over_q * *(b + 41 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 11) +
                one_over_two_q * *(b + 23 * OS1_S1 + 4);
            *(b + 23 * OS1_S1 + 24) = prefactor_z * *(b + 23 * OS1_S1 + 11) -
                                      p_over_q * *(b + 42 * OS1_S1 + 11);
            *(b + 23 * OS1_S1 + 25) = prefactor_z * *(b + 23 * OS1_S1 + 12) -
                                      p_over_q * *(b + 42 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 4);
            *(b + 23 * OS1_S1 + 26) =
                prefactor_x * *(b + 23 * OS1_S1 + 16) -
                p_over_q * *(b + 38 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 16);
            *(b + 23 * OS1_S1 + 27) = prefactor_z * *(b + 23 * OS1_S1 + 13) -
                                      p_over_q * *(b + 42 * OS1_S1 + 13);
            *(b + 23 * OS1_S1 + 28) =
                prefactor_y * *(b + 23 * OS1_S1 + 15) -
                p_over_q * *(b + 41 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 15);
            *(b + 23 * OS1_S1 + 29) =
                prefactor_x * *(b + 23 * OS1_S1 + 19) -
                p_over_q * *(b + 38 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 19);
            *(b + 23 * OS1_S1 + 30) =
                prefactor_y * *(b + 23 * OS1_S1 + 16) -
                p_over_q * *(b + 41 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 7);
            *(b + 23 * OS1_S1 + 31) = prefactor_z * *(b + 23 * OS1_S1 + 16) -
                                      p_over_q * *(b + 42 * OS1_S1 + 16);
            *(b + 23 * OS1_S1 + 32) = prefactor_z * *(b + 23 * OS1_S1 + 17) -
                                      p_over_q * *(b + 42 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 7);
            *(b + 23 * OS1_S1 + 33) =
                prefactor_y * *(b + 23 * OS1_S1 + 19) -
                p_over_q * *(b + 41 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 19);
            *(b + 23 * OS1_S1 + 34) =
                prefactor_z * *(b + 23 * OS1_S1 + 19) -
                p_over_q * *(b + 42 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 9);
            *(b + 24 * OS1_S1 + 20) =
                prefactor_x * *(b + 24 * OS1_S1 + 10) -
                p_over_q * *(b + 39 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 4);
            *(b + 24 * OS1_S1 + 21) = prefactor_y * *(b + 24 * OS1_S1 + 10) -
                                      p_over_q * *(b + 42 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 10);
            *(b + 24 * OS1_S1 + 22) = prefactor_z * *(b + 24 * OS1_S1 + 10) -
                                      p_over_q * *(b + 43 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 10);
            *(b + 24 * OS1_S1 + 23) = prefactor_y * *(b + 24 * OS1_S1 + 11) -
                                      p_over_q * *(b + 42 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 4);
            *(b + 24 * OS1_S1 + 24) = prefactor_z * *(b + 24 * OS1_S1 + 11) -
                                      p_over_q * *(b + 43 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 11);
            *(b + 24 * OS1_S1 + 25) = prefactor_z * *(b + 24 * OS1_S1 + 12) -
                                      p_over_q * *(b + 43 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 4);
            *(b + 24 * OS1_S1 + 26) =
                prefactor_x * *(b + 24 * OS1_S1 + 16) -
                p_over_q * *(b + 39 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 16);
            *(b + 24 * OS1_S1 + 27) = prefactor_z * *(b + 24 * OS1_S1 + 13) -
                                      p_over_q * *(b + 43 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 13);
            *(b + 24 * OS1_S1 + 28) = prefactor_y * *(b + 24 * OS1_S1 + 15) -
                                      p_over_q * *(b + 42 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 15);
            *(b + 24 * OS1_S1 + 29) =
                prefactor_x * *(b + 24 * OS1_S1 + 19) -
                p_over_q * *(b + 39 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 19);
            *(b + 24 * OS1_S1 + 30) =
                prefactor_y * *(b + 24 * OS1_S1 + 16) -
                p_over_q * *(b + 42 * OS1_S1 + 16) +
                one_over_two_q * *(b + 12 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 7);
            *(b + 24 * OS1_S1 + 31) = prefactor_z * *(b + 24 * OS1_S1 + 16) -
                                      p_over_q * *(b + 43 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 16);
            *(b + 24 * OS1_S1 + 32) = prefactor_z * *(b + 24 * OS1_S1 + 17) -
                                      p_over_q * *(b + 43 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 7);
            *(b + 24 * OS1_S1 + 33) = prefactor_y * *(b + 24 * OS1_S1 + 19) -
                                      p_over_q * *(b + 42 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 19);
            *(b + 24 * OS1_S1 + 34) =
                prefactor_z * *(b + 24 * OS1_S1 + 19) -
                p_over_q * *(b + 43 * OS1_S1 + 19) +
                one_over_two_q * *(b + 11 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 9);
            *(b + 25 * OS1_S1 + 20) =
                prefactor_x * *(b + 25 * OS1_S1 + 10) -
                p_over_q * *(b + 40 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 4);
            *(b + 25 * OS1_S1 + 21) = prefactor_y * *(b + 25 * OS1_S1 + 10) -
                                      p_over_q * *(b + 43 * OS1_S1 + 10);
            *(b + 25 * OS1_S1 + 22) =
                prefactor_z * *(b + 25 * OS1_S1 + 10) -
                p_over_q * *(b + 44 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 10);
            *(b + 25 * OS1_S1 + 23) = prefactor_y * *(b + 25 * OS1_S1 + 11) -
                                      p_over_q * *(b + 43 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 4);
            *(b + 25 * OS1_S1 + 24) = prefactor_y * *(b + 25 * OS1_S1 + 12) -
                                      p_over_q * *(b + 43 * OS1_S1 + 12);
            *(b + 25 * OS1_S1 + 25) =
                prefactor_z * *(b + 25 * OS1_S1 + 12) -
                p_over_q * *(b + 44 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 12) +
                one_over_two_q * *(b + 25 * OS1_S1 + 4);
            *(b + 25 * OS1_S1 + 26) =
                prefactor_x * *(b + 25 * OS1_S1 + 16) -
                p_over_q * *(b + 40 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 16);
            *(b + 25 * OS1_S1 + 27) =
                prefactor_z * *(b + 25 * OS1_S1 + 13) -
                p_over_q * *(b + 44 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 13);
            *(b + 25 * OS1_S1 + 28) = prefactor_y * *(b + 25 * OS1_S1 + 15) -
                                      p_over_q * *(b + 43 * OS1_S1 + 15);
            *(b + 25 * OS1_S1 + 29) =
                prefactor_x * *(b + 25 * OS1_S1 + 19) -
                p_over_q * *(b + 40 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 19);
            *(b + 25 * OS1_S1 + 30) =
                prefactor_y * *(b + 25 * OS1_S1 + 16) -
                p_over_q * *(b + 43 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 7);
            *(b + 25 * OS1_S1 + 31) =
                prefactor_z * *(b + 25 * OS1_S1 + 16) -
                p_over_q * *(b + 44 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 16);
            *(b + 25 * OS1_S1 + 32) = prefactor_y * *(b + 25 * OS1_S1 + 18) -
                                      p_over_q * *(b + 43 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 9);
            *(b + 25 * OS1_S1 + 33) = prefactor_y * *(b + 25 * OS1_S1 + 19) -
                                      p_over_q * *(b + 43 * OS1_S1 + 19);
            *(b + 25 * OS1_S1 + 34) =
                prefactor_z * *(b + 25 * OS1_S1 + 19) -
                p_over_q * *(b + 44 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 9);
            *(b + 26 * OS1_S1 + 20) =
                prefactor_x * *(b + 26 * OS1_S1 + 10) -
                p_over_q * *(b + 41 * OS1_S1 + 10) +
                one_over_two_q * *(b + 16 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 26 * OS1_S1 + 4);
            *(b + 26 * OS1_S1 + 21) =
                prefactor_y * *(b + 26 * OS1_S1 + 10) -
                p_over_q * *(b + 45 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 10);
            *(b + 26 * OS1_S1 + 22) = prefactor_z * *(b + 26 * OS1_S1 + 10) -
                                      p_over_q * *(b + 46 * OS1_S1 + 10);
            *(b + 26 * OS1_S1 + 23) = prefactor_x * *(b + 26 * OS1_S1 + 13) -
                                      p_over_q * *(b + 41 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 7);
            *(b + 26 * OS1_S1 + 24) = prefactor_z * *(b + 26 * OS1_S1 + 11) -
                                      p_over_q * *(b + 46 * OS1_S1 + 11);
            *(b + 26 * OS1_S1 + 25) = prefactor_z * *(b + 26 * OS1_S1 + 12) -
                                      p_over_q * *(b + 46 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 4);
            *(b + 26 * OS1_S1 + 26) = prefactor_x * *(b + 26 * OS1_S1 + 16) -
                                      p_over_q * *(b + 41 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 16);
            *(b + 26 * OS1_S1 + 27) = prefactor_z * *(b + 26 * OS1_S1 + 13) -
                                      p_over_q * *(b + 46 * OS1_S1 + 13);
            *(b + 26 * OS1_S1 + 28) = prefactor_x * *(b + 26 * OS1_S1 + 18) -
                                      p_over_q * *(b + 41 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 18);
            *(b + 26 * OS1_S1 + 29) = prefactor_x * *(b + 26 * OS1_S1 + 19) -
                                      p_over_q * *(b + 41 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 19);
            *(b + 26 * OS1_S1 + 30) =
                prefactor_y * *(b + 26 * OS1_S1 + 16) -
                p_over_q * *(b + 45 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 26 * OS1_S1 + 7);
            *(b + 26 * OS1_S1 + 31) = prefactor_z * *(b + 26 * OS1_S1 + 16) -
                                      p_over_q * *(b + 46 * OS1_S1 + 16);
            *(b + 26 * OS1_S1 + 32) = prefactor_z * *(b + 26 * OS1_S1 + 17) -
                                      p_over_q * *(b + 46 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 7);
            *(b + 26 * OS1_S1 + 33) =
                prefactor_y * *(b + 26 * OS1_S1 + 19) -
                p_over_q * *(b + 45 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 19);
            *(b + 26 * OS1_S1 + 34) =
                prefactor_z * *(b + 26 * OS1_S1 + 19) -
                p_over_q * *(b + 46 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 26 * OS1_S1 + 9);
            *(b + 27 * OS1_S1 + 20) =
                prefactor_x * *(b + 27 * OS1_S1 + 10) -
                p_over_q * *(b + 42 * OS1_S1 + 10) +
                one_over_two_q * *(b + 17 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 4);
            *(b + 27 * OS1_S1 + 21) =
                prefactor_y * *(b + 27 * OS1_S1 + 10) -
                p_over_q * *(b + 46 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 10);
            *(b + 27 * OS1_S1 + 22) = prefactor_z * *(b + 27 * OS1_S1 + 10) -
                                      p_over_q * *(b + 47 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 10);
            *(b + 27 * OS1_S1 + 23) = prefactor_x * *(b + 27 * OS1_S1 + 13) -
                                      p_over_q * *(b + 42 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 7);
            *(b + 27 * OS1_S1 + 24) = prefactor_z * *(b + 27 * OS1_S1 + 11) -
                                      p_over_q * *(b + 47 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 11);
            *(b + 27 * OS1_S1 + 25) = prefactor_z * *(b + 27 * OS1_S1 + 12) -
                                      p_over_q * *(b + 47 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 4);
            *(b + 27 * OS1_S1 + 26) = prefactor_x * *(b + 27 * OS1_S1 + 16) -
                                      p_over_q * *(b + 42 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 16);
            *(b + 27 * OS1_S1 + 27) = prefactor_z * *(b + 27 * OS1_S1 + 13) -
                                      p_over_q * *(b + 47 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 13);
            *(b + 27 * OS1_S1 + 28) = prefactor_x * *(b + 27 * OS1_S1 + 18) -
                                      p_over_q * *(b + 42 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 18);
            *(b + 27 * OS1_S1 + 29) = prefactor_x * *(b + 27 * OS1_S1 + 19) -
                                      p_over_q * *(b + 42 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 19);
            *(b + 27 * OS1_S1 + 30) =
                prefactor_y * *(b + 27 * OS1_S1 + 16) -
                p_over_q * *(b + 46 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 7);
            *(b + 27 * OS1_S1 + 31) = prefactor_z * *(b + 27 * OS1_S1 + 16) -
                                      p_over_q * *(b + 47 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 16);
            *(b + 27 * OS1_S1 + 32) = prefactor_z * *(b + 27 * OS1_S1 + 17) -
                                      p_over_q * *(b + 47 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 7);
            *(b + 27 * OS1_S1 + 33) =
                prefactor_y * *(b + 27 * OS1_S1 + 19) -
                p_over_q * *(b + 46 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 19);
            *(b + 27 * OS1_S1 + 34) =
                prefactor_z * *(b + 27 * OS1_S1 + 19) -
                p_over_q * *(b + 47 * OS1_S1 + 19) +
                one_over_two_q * *(b + 13 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 9);
            *(b + 28 * OS1_S1 + 20) =
                prefactor_x * *(b + 28 * OS1_S1 + 10) -
                p_over_q * *(b + 43 * OS1_S1 + 10) +
                one_over_two_q * *(b + 18 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 4);
            *(b + 28 * OS1_S1 + 21) = prefactor_y * *(b + 28 * OS1_S1 + 10) -
                                      p_over_q * *(b + 47 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 10);
            *(b + 28 * OS1_S1 + 22) =
                prefactor_z * *(b + 28 * OS1_S1 + 10) -
                p_over_q * *(b + 48 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 10);
            *(b + 28 * OS1_S1 + 23) = prefactor_y * *(b + 28 * OS1_S1 + 11) -
                                      p_over_q * *(b + 47 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 4);
            *(b + 28 * OS1_S1 + 24) = prefactor_y * *(b + 28 * OS1_S1 + 12) -
                                      p_over_q * *(b + 47 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 12);
            *(b + 28 * OS1_S1 + 25) = prefactor_x * *(b + 28 * OS1_S1 + 15) -
                                      p_over_q * *(b + 43 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 9);
            *(b + 28 * OS1_S1 + 26) = prefactor_x * *(b + 28 * OS1_S1 + 16) -
                                      p_over_q * *(b + 43 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 16);
            *(b + 28 * OS1_S1 + 27) = prefactor_x * *(b + 28 * OS1_S1 + 17) -
                                      p_over_q * *(b + 43 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 17);
            *(b + 28 * OS1_S1 + 28) = prefactor_y * *(b + 28 * OS1_S1 + 15) -
                                      p_over_q * *(b + 47 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 15);
            *(b + 28 * OS1_S1 + 29) = prefactor_x * *(b + 28 * OS1_S1 + 19) -
                                      p_over_q * *(b + 43 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 19);
            *(b + 28 * OS1_S1 + 30) =
                prefactor_y * *(b + 28 * OS1_S1 + 16) -
                p_over_q * *(b + 47 * OS1_S1 + 16) +
                one_over_two_q * *(b + 15 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 7);
            *(b + 28 * OS1_S1 + 31) =
                prefactor_z * *(b + 28 * OS1_S1 + 16) -
                p_over_q * *(b + 48 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 16);
            *(b + 28 * OS1_S1 + 32) = prefactor_y * *(b + 28 * OS1_S1 + 18) -
                                      p_over_q * *(b + 47 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 9);
            *(b + 28 * OS1_S1 + 33) = prefactor_y * *(b + 28 * OS1_S1 + 19) -
                                      p_over_q * *(b + 47 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 19);
            *(b + 28 * OS1_S1 + 34) =
                prefactor_z * *(b + 28 * OS1_S1 + 19) -
                p_over_q * *(b + 48 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 9);
            *(b + 29 * OS1_S1 + 20) =
                prefactor_x * *(b + 29 * OS1_S1 + 10) -
                p_over_q * *(b + 44 * OS1_S1 + 10) +
                one_over_two_q * *(b + 19 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 29 * OS1_S1 + 4);
            *(b + 29 * OS1_S1 + 21) = prefactor_y * *(b + 29 * OS1_S1 + 10) -
                                      p_over_q * *(b + 48 * OS1_S1 + 10);
            *(b + 29 * OS1_S1 + 22) =
                prefactor_z * *(b + 29 * OS1_S1 + 10) -
                p_over_q * *(b + 49 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 10);
            *(b + 29 * OS1_S1 + 23) = prefactor_y * *(b + 29 * OS1_S1 + 11) -
                                      p_over_q * *(b + 48 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 4);
            *(b + 29 * OS1_S1 + 24) = prefactor_y * *(b + 29 * OS1_S1 + 12) -
                                      p_over_q * *(b + 48 * OS1_S1 + 12);
            *(b + 29 * OS1_S1 + 25) = prefactor_x * *(b + 29 * OS1_S1 + 15) -
                                      p_over_q * *(b + 44 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 9);
            *(b + 29 * OS1_S1 + 26) = prefactor_x * *(b + 29 * OS1_S1 + 16) -
                                      p_over_q * *(b + 44 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 16);
            *(b + 29 * OS1_S1 + 27) = prefactor_x * *(b + 29 * OS1_S1 + 17) -
                                      p_over_q * *(b + 44 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 17);
            *(b + 29 * OS1_S1 + 28) = prefactor_y * *(b + 29 * OS1_S1 + 15) -
                                      p_over_q * *(b + 48 * OS1_S1 + 15);
            *(b + 29 * OS1_S1 + 29) = prefactor_x * *(b + 29 * OS1_S1 + 19) -
                                      p_over_q * *(b + 44 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 19);
            *(b + 29 * OS1_S1 + 30) =
                prefactor_y * *(b + 29 * OS1_S1 + 16) -
                p_over_q * *(b + 48 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 29 * OS1_S1 + 7);
            *(b + 29 * OS1_S1 + 31) =
                prefactor_z * *(b + 29 * OS1_S1 + 16) -
                p_over_q * *(b + 49 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 16);
            *(b + 29 * OS1_S1 + 32) = prefactor_y * *(b + 29 * OS1_S1 + 18) -
                                      p_over_q * *(b + 48 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 9);
            *(b + 29 * OS1_S1 + 33) = prefactor_y * *(b + 29 * OS1_S1 + 19) -
                                      p_over_q * *(b + 48 * OS1_S1 + 19);
            *(b + 29 * OS1_S1 + 34) =
                prefactor_z * *(b + 29 * OS1_S1 + 19) -
                p_over_q * *(b + 49 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 29 * OS1_S1 + 9);
            *(b + 30 * OS1_S1 + 20) =
                prefactor_x * *(b + 30 * OS1_S1 + 10) -
                p_over_q * *(b + 45 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 30 * OS1_S1 + 4);
            *(b + 30 * OS1_S1 + 21) =
                prefactor_y * *(b + 30 * OS1_S1 + 10) -
                p_over_q * *(b + 50 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 10);
            *(b + 30 * OS1_S1 + 22) = prefactor_z * *(b + 30 * OS1_S1 + 10) -
                                      p_over_q * *(b + 51 * OS1_S1 + 10);
            *(b + 30 * OS1_S1 + 23) = prefactor_x * *(b + 30 * OS1_S1 + 13) -
                                      p_over_q * *(b + 45 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 7);
            *(b + 30 * OS1_S1 + 24) = prefactor_z * *(b + 30 * OS1_S1 + 11) -
                                      p_over_q * *(b + 51 * OS1_S1 + 11);
            *(b + 30 * OS1_S1 + 25) = prefactor_z * *(b + 30 * OS1_S1 + 12) -
                                      p_over_q * *(b + 51 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 4);
            *(b + 30 * OS1_S1 + 26) = prefactor_x * *(b + 30 * OS1_S1 + 16) -
                                      p_over_q * *(b + 45 * OS1_S1 + 16);
            *(b + 30 * OS1_S1 + 27) = prefactor_z * *(b + 30 * OS1_S1 + 13) -
                                      p_over_q * *(b + 51 * OS1_S1 + 13);
            *(b + 30 * OS1_S1 + 28) = prefactor_x * *(b + 30 * OS1_S1 + 18) -
                                      p_over_q * *(b + 45 * OS1_S1 + 18);
            *(b + 30 * OS1_S1 + 29) = prefactor_x * *(b + 30 * OS1_S1 + 19) -
                                      p_over_q * *(b + 45 * OS1_S1 + 19);
            *(b + 30 * OS1_S1 + 30) =
                prefactor_y * *(b + 30 * OS1_S1 + 16) -
                p_over_q * *(b + 50 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 30 * OS1_S1 + 7);
            *(b + 30 * OS1_S1 + 31) = prefactor_z * *(b + 30 * OS1_S1 + 16) -
                                      p_over_q * *(b + 51 * OS1_S1 + 16);
            *(b + 30 * OS1_S1 + 32) = prefactor_z * *(b + 30 * OS1_S1 + 17) -
                                      p_over_q * *(b + 51 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 7);
            *(b + 30 * OS1_S1 + 33) =
                prefactor_y * *(b + 30 * OS1_S1 + 19) -
                p_over_q * *(b + 50 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 19);
            *(b + 30 * OS1_S1 + 34) =
                prefactor_z * *(b + 30 * OS1_S1 + 19) -
                p_over_q * *(b + 51 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 30 * OS1_S1 + 9);
            *(b + 31 * OS1_S1 + 20) =
                prefactor_x * *(b + 31 * OS1_S1 + 10) -
                p_over_q * *(b + 46 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 31 * OS1_S1 + 4);
            *(b + 31 * OS1_S1 + 21) =
                prefactor_y * *(b + 31 * OS1_S1 + 10) -
                p_over_q * *(b + 51 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 10);
            *(b + 31 * OS1_S1 + 22) = prefactor_z * *(b + 31 * OS1_S1 + 10) -
                                      p_over_q * *(b + 52 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 10);
            *(b + 31 * OS1_S1 + 23) = prefactor_x * *(b + 31 * OS1_S1 + 13) -
                                      p_over_q * *(b + 46 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 7);
            *(b + 31 * OS1_S1 + 24) = prefactor_z * *(b + 31 * OS1_S1 + 11) -
                                      p_over_q * *(b + 52 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 11);
            *(b + 31 * OS1_S1 + 25) = prefactor_x * *(b + 31 * OS1_S1 + 15) -
                                      p_over_q * *(b + 46 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 9);
            *(b + 31 * OS1_S1 + 26) = prefactor_x * *(b + 31 * OS1_S1 + 16) -
                                      p_over_q * *(b + 46 * OS1_S1 + 16);
            *(b + 31 * OS1_S1 + 27) = prefactor_x * *(b + 31 * OS1_S1 + 17) -
                                      p_over_q * *(b + 46 * OS1_S1 + 17);
            *(b + 31 * OS1_S1 + 28) = prefactor_x * *(b + 31 * OS1_S1 + 18) -
                                      p_over_q * *(b + 46 * OS1_S1 + 18);
            *(b + 31 * OS1_S1 + 29) = prefactor_x * *(b + 31 * OS1_S1 + 19) -
                                      p_over_q * *(b + 46 * OS1_S1 + 19);
            *(b + 31 * OS1_S1 + 30) =
                prefactor_y * *(b + 31 * OS1_S1 + 16) -
                p_over_q * *(b + 51 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 31 * OS1_S1 + 7);
            *(b + 31 * OS1_S1 + 31) = prefactor_z * *(b + 31 * OS1_S1 + 16) -
                                      p_over_q * *(b + 52 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 16);
            *(b + 31 * OS1_S1 + 32) = prefactor_z * *(b + 31 * OS1_S1 + 17) -
                                      p_over_q * *(b + 52 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 7);
            *(b + 31 * OS1_S1 + 33) =
                prefactor_y * *(b + 31 * OS1_S1 + 19) -
                p_over_q * *(b + 51 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 19);
            *(b + 31 * OS1_S1 + 34) =
                prefactor_z * *(b + 31 * OS1_S1 + 19) -
                p_over_q * *(b + 52 * OS1_S1 + 19) +
                one_over_two_q * *(b + 16 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 31 * OS1_S1 + 9);
            *(b + 32 * OS1_S1 + 20) =
                prefactor_x * *(b + 32 * OS1_S1 + 10) -
                p_over_q * *(b + 47 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 4);
            *(b + 32 * OS1_S1 + 21) =
                prefactor_y * *(b + 32 * OS1_S1 + 10) -
                p_over_q * *(b + 52 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 10);
            *(b + 32 * OS1_S1 + 22) =
                prefactor_z * *(b + 32 * OS1_S1 + 10) -
                p_over_q * *(b + 53 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 10);
            *(b + 32 * OS1_S1 + 23) = prefactor_x * *(b + 32 * OS1_S1 + 13) -
                                      p_over_q * *(b + 47 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 7);
            *(b + 32 * OS1_S1 + 24) =
                prefactor_z * *(b + 32 * OS1_S1 + 11) -
                p_over_q * *(b + 53 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 11);
            *(b + 32 * OS1_S1 + 25) = prefactor_x * *(b + 32 * OS1_S1 + 15) -
                                      p_over_q * *(b + 47 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 9);
            *(b + 32 * OS1_S1 + 26) = prefactor_x * *(b + 32 * OS1_S1 + 16) -
                                      p_over_q * *(b + 47 * OS1_S1 + 16);
            *(b + 32 * OS1_S1 + 27) = prefactor_x * *(b + 32 * OS1_S1 + 17) -
                                      p_over_q * *(b + 47 * OS1_S1 + 17);
            *(b + 32 * OS1_S1 + 28) = prefactor_x * *(b + 32 * OS1_S1 + 18) -
                                      p_over_q * *(b + 47 * OS1_S1 + 18);
            *(b + 32 * OS1_S1 + 29) = prefactor_x * *(b + 32 * OS1_S1 + 19) -
                                      p_over_q * *(b + 47 * OS1_S1 + 19);
            *(b + 32 * OS1_S1 + 30) =
                prefactor_y * *(b + 32 * OS1_S1 + 16) -
                p_over_q * *(b + 52 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 7);
            *(b + 32 * OS1_S1 + 31) =
                prefactor_z * *(b + 32 * OS1_S1 + 16) -
                p_over_q * *(b + 53 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 16);
            *(b + 32 * OS1_S1 + 32) =
                prefactor_z * *(b + 32 * OS1_S1 + 17) -
                p_over_q * *(b + 53 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 17) +
                one_over_two_q * *(b + 32 * OS1_S1 + 7);
            *(b + 32 * OS1_S1 + 33) =
                prefactor_y * *(b + 32 * OS1_S1 + 19) -
                p_over_q * *(b + 52 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 19);
            *(b + 32 * OS1_S1 + 34) =
                prefactor_z * *(b + 32 * OS1_S1 + 19) -
                p_over_q * *(b + 53 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 9);
            *(b + 33 * OS1_S1 + 20) =
                prefactor_x * *(b + 33 * OS1_S1 + 10) -
                p_over_q * *(b + 48 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 33 * OS1_S1 + 4);
            *(b + 33 * OS1_S1 + 21) = prefactor_y * *(b + 33 * OS1_S1 + 10) -
                                      p_over_q * *(b + 53 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 10);
            *(b + 33 * OS1_S1 + 22) =
                prefactor_z * *(b + 33 * OS1_S1 + 10) -
                p_over_q * *(b + 54 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 10);
            *(b + 33 * OS1_S1 + 23) = prefactor_x * *(b + 33 * OS1_S1 + 13) -
                                      p_over_q * *(b + 48 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 7);
            *(b + 33 * OS1_S1 + 24) = prefactor_y * *(b + 33 * OS1_S1 + 12) -
                                      p_over_q * *(b + 53 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 12);
            *(b + 33 * OS1_S1 + 25) = prefactor_x * *(b + 33 * OS1_S1 + 15) -
                                      p_over_q * *(b + 48 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 9);
            *(b + 33 * OS1_S1 + 26) = prefactor_x * *(b + 33 * OS1_S1 + 16) -
                                      p_over_q * *(b + 48 * OS1_S1 + 16);
            *(b + 33 * OS1_S1 + 27) = prefactor_x * *(b + 33 * OS1_S1 + 17) -
                                      p_over_q * *(b + 48 * OS1_S1 + 17);
            *(b + 33 * OS1_S1 + 28) = prefactor_x * *(b + 33 * OS1_S1 + 18) -
                                      p_over_q * *(b + 48 * OS1_S1 + 18);
            *(b + 33 * OS1_S1 + 29) = prefactor_x * *(b + 33 * OS1_S1 + 19) -
                                      p_over_q * *(b + 48 * OS1_S1 + 19);
            *(b + 33 * OS1_S1 + 30) =
                prefactor_y * *(b + 33 * OS1_S1 + 16) -
                p_over_q * *(b + 53 * OS1_S1 + 16) +
                one_over_two_q * *(b + 19 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 33 * OS1_S1 + 7);
            *(b + 33 * OS1_S1 + 31) =
                prefactor_z * *(b + 33 * OS1_S1 + 16) -
                p_over_q * *(b + 54 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 16);
            *(b + 33 * OS1_S1 + 32) = prefactor_y * *(b + 33 * OS1_S1 + 18) -
                                      p_over_q * *(b + 53 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 9);
            *(b + 33 * OS1_S1 + 33) = prefactor_y * *(b + 33 * OS1_S1 + 19) -
                                      p_over_q * *(b + 53 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 19);
            *(b + 33 * OS1_S1 + 34) =
                prefactor_z * *(b + 33 * OS1_S1 + 19) -
                p_over_q * *(b + 54 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 33 * OS1_S1 + 9);
            *(b + 34 * OS1_S1 + 20) =
                prefactor_x * *(b + 34 * OS1_S1 + 10) -
                p_over_q * *(b + 49 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 34 * OS1_S1 + 4);
            *(b + 34 * OS1_S1 + 21) = prefactor_y * *(b + 34 * OS1_S1 + 10) -
                                      p_over_q * *(b + 54 * OS1_S1 + 10);
            *(b + 34 * OS1_S1 + 22) =
                prefactor_z * *(b + 34 * OS1_S1 + 10) -
                p_over_q * *(b + 55 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 10);
            *(b + 34 * OS1_S1 + 23) = prefactor_y * *(b + 34 * OS1_S1 + 11) -
                                      p_over_q * *(b + 54 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 4);
            *(b + 34 * OS1_S1 + 24) = prefactor_y * *(b + 34 * OS1_S1 + 12) -
                                      p_over_q * *(b + 54 * OS1_S1 + 12);
            *(b + 34 * OS1_S1 + 25) = prefactor_x * *(b + 34 * OS1_S1 + 15) -
                                      p_over_q * *(b + 49 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 9);
            *(b + 34 * OS1_S1 + 26) = prefactor_x * *(b + 34 * OS1_S1 + 16) -
                                      p_over_q * *(b + 49 * OS1_S1 + 16);
            *(b + 34 * OS1_S1 + 27) = prefactor_x * *(b + 34 * OS1_S1 + 17) -
                                      p_over_q * *(b + 49 * OS1_S1 + 17);
            *(b + 34 * OS1_S1 + 28) = prefactor_y * *(b + 34 * OS1_S1 + 15) -
                                      p_over_q * *(b + 54 * OS1_S1 + 15);
            *(b + 34 * OS1_S1 + 29) = prefactor_x * *(b + 34 * OS1_S1 + 19) -
                                      p_over_q * *(b + 49 * OS1_S1 + 19);
            *(b + 34 * OS1_S1 + 30) =
                prefactor_y * *(b + 34 * OS1_S1 + 16) -
                p_over_q * *(b + 54 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 34 * OS1_S1 + 7);
            *(b + 34 * OS1_S1 + 31) =
                prefactor_z * *(b + 34 * OS1_S1 + 16) -
                p_over_q * *(b + 55 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 16);
            *(b + 34 * OS1_S1 + 32) = prefactor_y * *(b + 34 * OS1_S1 + 18) -
                                      p_over_q * *(b + 54 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 9);
            *(b + 34 * OS1_S1 + 33) = prefactor_y * *(b + 34 * OS1_S1 + 19) -
                                      p_over_q * *(b + 54 * OS1_S1 + 19);
            *(b + 34 * OS1_S1 + 34) =
                prefactor_z * *(b + 34 * OS1_S1 + 19) -
                p_over_q * *(b + 55 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 34 * OS1_S1 + 9);
            return;
        }

        void transfer_5_4(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 35 * OS1_S1 + 20) =
                prefactor_x * *(b + 35 * OS1_S1 + 10) -
                p_over_q * *(b + 56 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 35 * OS1_S1 + 4);
            *(b + 35 * OS1_S1 + 21) = prefactor_y * *(b + 35 * OS1_S1 + 10) -
                                      p_over_q * *(b + 57 * OS1_S1 + 10);
            *(b + 35 * OS1_S1 + 22) = prefactor_z * *(b + 35 * OS1_S1 + 10) -
                                      p_over_q * *(b + 58 * OS1_S1 + 10);
            *(b + 35 * OS1_S1 + 23) = prefactor_y * *(b + 35 * OS1_S1 + 11) -
                                      p_over_q * *(b + 57 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 4);
            *(b + 35 * OS1_S1 + 24) = prefactor_z * *(b + 35 * OS1_S1 + 11) -
                                      p_over_q * *(b + 58 * OS1_S1 + 11);
            *(b + 35 * OS1_S1 + 25) = prefactor_z * *(b + 35 * OS1_S1 + 12) -
                                      p_over_q * *(b + 58 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 4);
            *(b + 35 * OS1_S1 + 26) =
                prefactor_x * *(b + 35 * OS1_S1 + 16) -
                p_over_q * *(b + 56 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 16);
            *(b + 35 * OS1_S1 + 27) = prefactor_z * *(b + 35 * OS1_S1 + 13) -
                                      p_over_q * *(b + 58 * OS1_S1 + 13);
            *(b + 35 * OS1_S1 + 28) = prefactor_y * *(b + 35 * OS1_S1 + 15) -
                                      p_over_q * *(b + 57 * OS1_S1 + 15);
            *(b + 35 * OS1_S1 + 29) =
                prefactor_x * *(b + 35 * OS1_S1 + 19) -
                p_over_q * *(b + 56 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 19);
            *(b + 35 * OS1_S1 + 30) =
                prefactor_y * *(b + 35 * OS1_S1 + 16) -
                p_over_q * *(b + 57 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 35 * OS1_S1 + 7);
            *(b + 35 * OS1_S1 + 31) = prefactor_z * *(b + 35 * OS1_S1 + 16) -
                                      p_over_q * *(b + 58 * OS1_S1 + 16);
            *(b + 35 * OS1_S1 + 32) = prefactor_z * *(b + 35 * OS1_S1 + 17) -
                                      p_over_q * *(b + 58 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 7);
            *(b + 35 * OS1_S1 + 33) = prefactor_y * *(b + 35 * OS1_S1 + 19) -
                                      p_over_q * *(b + 57 * OS1_S1 + 19);
            *(b + 35 * OS1_S1 + 34) =
                prefactor_z * *(b + 35 * OS1_S1 + 19) -
                p_over_q * *(b + 58 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 35 * OS1_S1 + 9);
            *(b + 36 * OS1_S1 + 20) =
                prefactor_x * *(b + 36 * OS1_S1 + 10) -
                p_over_q * *(b + 57 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 36 * OS1_S1 + 4);
            *(b + 36 * OS1_S1 + 21) = prefactor_y * *(b + 36 * OS1_S1 + 10) -
                                      p_over_q * *(b + 59 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 10);
            *(b + 36 * OS1_S1 + 22) = prefactor_z * *(b + 36 * OS1_S1 + 10) -
                                      p_over_q * *(b + 60 * OS1_S1 + 10);
            *(b + 36 * OS1_S1 + 23) = prefactor_y * *(b + 36 * OS1_S1 + 11) -
                                      p_over_q * *(b + 59 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 4);
            *(b + 36 * OS1_S1 + 24) = prefactor_z * *(b + 36 * OS1_S1 + 11) -
                                      p_over_q * *(b + 60 * OS1_S1 + 11);
            *(b + 36 * OS1_S1 + 25) = prefactor_z * *(b + 36 * OS1_S1 + 12) -
                                      p_over_q * *(b + 60 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 4);
            *(b + 36 * OS1_S1 + 26) =
                prefactor_x * *(b + 36 * OS1_S1 + 16) -
                p_over_q * *(b + 57 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 16);
            *(b + 36 * OS1_S1 + 27) = prefactor_z * *(b + 36 * OS1_S1 + 13) -
                                      p_over_q * *(b + 60 * OS1_S1 + 13);
            *(b + 36 * OS1_S1 + 28) = prefactor_y * *(b + 36 * OS1_S1 + 15) -
                                      p_over_q * *(b + 59 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 15);
            *(b + 36 * OS1_S1 + 29) =
                prefactor_x * *(b + 36 * OS1_S1 + 19) -
                p_over_q * *(b + 57 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 19);
            *(b + 36 * OS1_S1 + 30) =
                prefactor_y * *(b + 36 * OS1_S1 + 16) -
                p_over_q * *(b + 59 * OS1_S1 + 16) +
                one_over_two_q * *(b + 20 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 36 * OS1_S1 + 7);
            *(b + 36 * OS1_S1 + 31) = prefactor_z * *(b + 36 * OS1_S1 + 16) -
                                      p_over_q * *(b + 60 * OS1_S1 + 16);
            *(b + 36 * OS1_S1 + 32) = prefactor_z * *(b + 36 * OS1_S1 + 17) -
                                      p_over_q * *(b + 60 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 7);
            *(b + 36 * OS1_S1 + 33) = prefactor_y * *(b + 36 * OS1_S1 + 19) -
                                      p_over_q * *(b + 59 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 19);
            *(b + 36 * OS1_S1 + 34) =
                prefactor_z * *(b + 36 * OS1_S1 + 19) -
                p_over_q * *(b + 60 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 36 * OS1_S1 + 9);
            *(b + 37 * OS1_S1 + 20) =
                prefactor_x * *(b + 37 * OS1_S1 + 10) -
                p_over_q * *(b + 58 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 37 * OS1_S1 + 4);
            *(b + 37 * OS1_S1 + 21) = prefactor_y * *(b + 37 * OS1_S1 + 10) -
                                      p_over_q * *(b + 60 * OS1_S1 + 10);
            *(b + 37 * OS1_S1 + 22) = prefactor_z * *(b + 37 * OS1_S1 + 10) -
                                      p_over_q * *(b + 61 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 10);
            *(b + 37 * OS1_S1 + 23) = prefactor_y * *(b + 37 * OS1_S1 + 11) -
                                      p_over_q * *(b + 60 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 4);
            *(b + 37 * OS1_S1 + 24) = prefactor_y * *(b + 37 * OS1_S1 + 12) -
                                      p_over_q * *(b + 60 * OS1_S1 + 12);
            *(b + 37 * OS1_S1 + 25) = prefactor_z * *(b + 37 * OS1_S1 + 12) -
                                      p_over_q * *(b + 61 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 4);
            *(b + 37 * OS1_S1 + 26) =
                prefactor_x * *(b + 37 * OS1_S1 + 16) -
                p_over_q * *(b + 58 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 16);
            *(b + 37 * OS1_S1 + 27) = prefactor_z * *(b + 37 * OS1_S1 + 13) -
                                      p_over_q * *(b + 61 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 13);
            *(b + 37 * OS1_S1 + 28) = prefactor_y * *(b + 37 * OS1_S1 + 15) -
                                      p_over_q * *(b + 60 * OS1_S1 + 15);
            *(b + 37 * OS1_S1 + 29) =
                prefactor_x * *(b + 37 * OS1_S1 + 19) -
                p_over_q * *(b + 58 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 19);
            *(b + 37 * OS1_S1 + 30) =
                prefactor_y * *(b + 37 * OS1_S1 + 16) -
                p_over_q * *(b + 60 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 37 * OS1_S1 + 7);
            *(b + 37 * OS1_S1 + 31) = prefactor_z * *(b + 37 * OS1_S1 + 16) -
                                      p_over_q * *(b + 61 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 16);
            *(b + 37 * OS1_S1 + 32) = prefactor_y * *(b + 37 * OS1_S1 + 18) -
                                      p_over_q * *(b + 60 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 9);
            *(b + 37 * OS1_S1 + 33) = prefactor_y * *(b + 37 * OS1_S1 + 19) -
                                      p_over_q * *(b + 60 * OS1_S1 + 19);
            *(b + 37 * OS1_S1 + 34) =
                prefactor_z * *(b + 37 * OS1_S1 + 19) -
                p_over_q * *(b + 61 * OS1_S1 + 19) +
                one_over_two_q * *(b + 20 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 37 * OS1_S1 + 9);
            *(b + 38 * OS1_S1 + 20) =
                prefactor_x * *(b + 38 * OS1_S1 + 10) -
                p_over_q * *(b + 59 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 4);
            *(b + 38 * OS1_S1 + 21) =
                prefactor_y * *(b + 38 * OS1_S1 + 10) -
                p_over_q * *(b + 62 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 10);
            *(b + 38 * OS1_S1 + 22) = prefactor_z * *(b + 38 * OS1_S1 + 10) -
                                      p_over_q * *(b + 63 * OS1_S1 + 10);
            *(b + 38 * OS1_S1 + 23) =
                prefactor_y * *(b + 38 * OS1_S1 + 11) -
                p_over_q * *(b + 62 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 11) +
                one_over_two_q * *(b + 38 * OS1_S1 + 4);
            *(b + 38 * OS1_S1 + 24) = prefactor_z * *(b + 38 * OS1_S1 + 11) -
                                      p_over_q * *(b + 63 * OS1_S1 + 11);
            *(b + 38 * OS1_S1 + 25) = prefactor_z * *(b + 38 * OS1_S1 + 12) -
                                      p_over_q * *(b + 63 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 4);
            *(b + 38 * OS1_S1 + 26) =
                prefactor_x * *(b + 38 * OS1_S1 + 16) -
                p_over_q * *(b + 59 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 16);
            *(b + 38 * OS1_S1 + 27) = prefactor_z * *(b + 38 * OS1_S1 + 13) -
                                      p_over_q * *(b + 63 * OS1_S1 + 13);
            *(b + 38 * OS1_S1 + 28) =
                prefactor_y * *(b + 38 * OS1_S1 + 15) -
                p_over_q * *(b + 62 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 15);
            *(b + 38 * OS1_S1 + 29) =
                prefactor_x * *(b + 38 * OS1_S1 + 19) -
                p_over_q * *(b + 59 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 19);
            *(b + 38 * OS1_S1 + 30) =
                prefactor_y * *(b + 38 * OS1_S1 + 16) -
                p_over_q * *(b + 62 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 7);
            *(b + 38 * OS1_S1 + 31) = prefactor_z * *(b + 38 * OS1_S1 + 16) -
                                      p_over_q * *(b + 63 * OS1_S1 + 16);
            *(b + 38 * OS1_S1 + 32) = prefactor_z * *(b + 38 * OS1_S1 + 17) -
                                      p_over_q * *(b + 63 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 7);
            *(b + 38 * OS1_S1 + 33) =
                prefactor_y * *(b + 38 * OS1_S1 + 19) -
                p_over_q * *(b + 62 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 19);
            *(b + 38 * OS1_S1 + 34) =
                prefactor_z * *(b + 38 * OS1_S1 + 19) -
                p_over_q * *(b + 63 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 9);
            *(b + 39 * OS1_S1 + 20) =
                prefactor_x * *(b + 39 * OS1_S1 + 10) -
                p_over_q * *(b + 60 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 39 * OS1_S1 + 4);
            *(b + 39 * OS1_S1 + 21) = prefactor_y * *(b + 39 * OS1_S1 + 10) -
                                      p_over_q * *(b + 63 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 10);
            *(b + 39 * OS1_S1 + 22) = prefactor_z * *(b + 39 * OS1_S1 + 10) -
                                      p_over_q * *(b + 64 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 10);
            *(b + 39 * OS1_S1 + 23) = prefactor_y * *(b + 39 * OS1_S1 + 11) -
                                      p_over_q * *(b + 63 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 4);
            *(b + 39 * OS1_S1 + 24) = prefactor_z * *(b + 39 * OS1_S1 + 11) -
                                      p_over_q * *(b + 64 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 11);
            *(b + 39 * OS1_S1 + 25) = prefactor_z * *(b + 39 * OS1_S1 + 12) -
                                      p_over_q * *(b + 64 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 4);
            *(b + 39 * OS1_S1 + 26) =
                prefactor_x * *(b + 39 * OS1_S1 + 16) -
                p_over_q * *(b + 60 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 16);
            *(b + 39 * OS1_S1 + 27) = prefactor_z * *(b + 39 * OS1_S1 + 13) -
                                      p_over_q * *(b + 64 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 13);
            *(b + 39 * OS1_S1 + 28) = prefactor_y * *(b + 39 * OS1_S1 + 15) -
                                      p_over_q * *(b + 63 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 15);
            *(b + 39 * OS1_S1 + 29) =
                prefactor_x * *(b + 39 * OS1_S1 + 19) -
                p_over_q * *(b + 60 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 19);
            *(b + 39 * OS1_S1 + 30) =
                prefactor_y * *(b + 39 * OS1_S1 + 16) -
                p_over_q * *(b + 63 * OS1_S1 + 16) +
                one_over_two_q * *(b + 22 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 39 * OS1_S1 + 7);
            *(b + 39 * OS1_S1 + 31) = prefactor_z * *(b + 39 * OS1_S1 + 16) -
                                      p_over_q * *(b + 64 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 16);
            *(b + 39 * OS1_S1 + 32) = prefactor_z * *(b + 39 * OS1_S1 + 17) -
                                      p_over_q * *(b + 64 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 7);
            *(b + 39 * OS1_S1 + 33) = prefactor_y * *(b + 39 * OS1_S1 + 19) -
                                      p_over_q * *(b + 63 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 19);
            *(b + 39 * OS1_S1 + 34) =
                prefactor_z * *(b + 39 * OS1_S1 + 19) -
                p_over_q * *(b + 64 * OS1_S1 + 19) +
                one_over_two_q * *(b + 21 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 39 * OS1_S1 + 9);
            *(b + 40 * OS1_S1 + 20) =
                prefactor_x * *(b + 40 * OS1_S1 + 10) -
                p_over_q * *(b + 61 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 4);
            *(b + 40 * OS1_S1 + 21) = prefactor_y * *(b + 40 * OS1_S1 + 10) -
                                      p_over_q * *(b + 64 * OS1_S1 + 10);
            *(b + 40 * OS1_S1 + 22) =
                prefactor_z * *(b + 40 * OS1_S1 + 10) -
                p_over_q * *(b + 65 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 10);
            *(b + 40 * OS1_S1 + 23) = prefactor_y * *(b + 40 * OS1_S1 + 11) -
                                      p_over_q * *(b + 64 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 4);
            *(b + 40 * OS1_S1 + 24) = prefactor_y * *(b + 40 * OS1_S1 + 12) -
                                      p_over_q * *(b + 64 * OS1_S1 + 12);
            *(b + 40 * OS1_S1 + 25) =
                prefactor_z * *(b + 40 * OS1_S1 + 12) -
                p_over_q * *(b + 65 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 12) +
                one_over_two_q * *(b + 40 * OS1_S1 + 4);
            *(b + 40 * OS1_S1 + 26) =
                prefactor_x * *(b + 40 * OS1_S1 + 16) -
                p_over_q * *(b + 61 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 16);
            *(b + 40 * OS1_S1 + 27) =
                prefactor_z * *(b + 40 * OS1_S1 + 13) -
                p_over_q * *(b + 65 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 13);
            *(b + 40 * OS1_S1 + 28) = prefactor_y * *(b + 40 * OS1_S1 + 15) -
                                      p_over_q * *(b + 64 * OS1_S1 + 15);
            *(b + 40 * OS1_S1 + 29) =
                prefactor_x * *(b + 40 * OS1_S1 + 19) -
                p_over_q * *(b + 61 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 19);
            *(b + 40 * OS1_S1 + 30) =
                prefactor_y * *(b + 40 * OS1_S1 + 16) -
                p_over_q * *(b + 64 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 7);
            *(b + 40 * OS1_S1 + 31) =
                prefactor_z * *(b + 40 * OS1_S1 + 16) -
                p_over_q * *(b + 65 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 16);
            *(b + 40 * OS1_S1 + 32) = prefactor_y * *(b + 40 * OS1_S1 + 18) -
                                      p_over_q * *(b + 64 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 9);
            *(b + 40 * OS1_S1 + 33) = prefactor_y * *(b + 40 * OS1_S1 + 19) -
                                      p_over_q * *(b + 64 * OS1_S1 + 19);
            *(b + 40 * OS1_S1 + 34) =
                prefactor_z * *(b + 40 * OS1_S1 + 19) -
                p_over_q * *(b + 65 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 9);
            *(b + 41 * OS1_S1 + 20) =
                prefactor_x * *(b + 41 * OS1_S1 + 10) -
                p_over_q * *(b + 62 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 4);
            *(b + 41 * OS1_S1 + 21) =
                prefactor_y * *(b + 41 * OS1_S1 + 10) -
                p_over_q * *(b + 66 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 10);
            *(b + 41 * OS1_S1 + 22) = prefactor_z * *(b + 41 * OS1_S1 + 10) -
                                      p_over_q * *(b + 67 * OS1_S1 + 10);
            *(b + 41 * OS1_S1 + 23) =
                prefactor_x * *(b + 41 * OS1_S1 + 13) -
                p_over_q * *(b + 62 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 13) +
                one_over_two_q * *(b + 41 * OS1_S1 + 7);
            *(b + 41 * OS1_S1 + 24) = prefactor_z * *(b + 41 * OS1_S1 + 11) -
                                      p_over_q * *(b + 67 * OS1_S1 + 11);
            *(b + 41 * OS1_S1 + 25) = prefactor_z * *(b + 41 * OS1_S1 + 12) -
                                      p_over_q * *(b + 67 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 4);
            *(b + 41 * OS1_S1 + 26) =
                prefactor_x * *(b + 41 * OS1_S1 + 16) -
                p_over_q * *(b + 62 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 16);
            *(b + 41 * OS1_S1 + 27) = prefactor_z * *(b + 41 * OS1_S1 + 13) -
                                      p_over_q * *(b + 67 * OS1_S1 + 13);
            *(b + 41 * OS1_S1 + 28) =
                prefactor_x * *(b + 41 * OS1_S1 + 18) -
                p_over_q * *(b + 62 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 18);
            *(b + 41 * OS1_S1 + 29) =
                prefactor_x * *(b + 41 * OS1_S1 + 19) -
                p_over_q * *(b + 62 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 19);
            *(b + 41 * OS1_S1 + 30) =
                prefactor_y * *(b + 41 * OS1_S1 + 16) -
                p_over_q * *(b + 66 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 7);
            *(b + 41 * OS1_S1 + 31) = prefactor_z * *(b + 41 * OS1_S1 + 16) -
                                      p_over_q * *(b + 67 * OS1_S1 + 16);
            *(b + 41 * OS1_S1 + 32) = prefactor_z * *(b + 41 * OS1_S1 + 17) -
                                      p_over_q * *(b + 67 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 7);
            *(b + 41 * OS1_S1 + 33) =
                prefactor_y * *(b + 41 * OS1_S1 + 19) -
                p_over_q * *(b + 66 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 19);
            *(b + 41 * OS1_S1 + 34) =
                prefactor_z * *(b + 41 * OS1_S1 + 19) -
                p_over_q * *(b + 67 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 9);
            *(b + 42 * OS1_S1 + 20) =
                prefactor_x * *(b + 42 * OS1_S1 + 10) -
                p_over_q * *(b + 63 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 4);
            *(b + 42 * OS1_S1 + 21) =
                prefactor_y * *(b + 42 * OS1_S1 + 10) -
                p_over_q * *(b + 67 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 10);
            *(b + 42 * OS1_S1 + 22) = prefactor_z * *(b + 42 * OS1_S1 + 10) -
                                      p_over_q * *(b + 68 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 10);
            *(b + 42 * OS1_S1 + 23) =
                prefactor_y * *(b + 42 * OS1_S1 + 11) -
                p_over_q * *(b + 67 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 11) +
                one_over_two_q * *(b + 42 * OS1_S1 + 4);
            *(b + 42 * OS1_S1 + 24) = prefactor_z * *(b + 42 * OS1_S1 + 11) -
                                      p_over_q * *(b + 68 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 11);
            *(b + 42 * OS1_S1 + 25) = prefactor_z * *(b + 42 * OS1_S1 + 12) -
                                      p_over_q * *(b + 68 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 42 * OS1_S1 + 4);
            *(b + 42 * OS1_S1 + 26) =
                prefactor_x * *(b + 42 * OS1_S1 + 16) -
                p_over_q * *(b + 63 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 16);
            *(b + 42 * OS1_S1 + 27) = prefactor_z * *(b + 42 * OS1_S1 + 13) -
                                      p_over_q * *(b + 68 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 13);
            *(b + 42 * OS1_S1 + 28) =
                prefactor_y * *(b + 42 * OS1_S1 + 15) -
                p_over_q * *(b + 67 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 15);
            *(b + 42 * OS1_S1 + 29) =
                prefactor_x * *(b + 42 * OS1_S1 + 19) -
                p_over_q * *(b + 63 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 19);
            *(b + 42 * OS1_S1 + 30) =
                prefactor_y * *(b + 42 * OS1_S1 + 16) -
                p_over_q * *(b + 67 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 7);
            *(b + 42 * OS1_S1 + 31) = prefactor_z * *(b + 42 * OS1_S1 + 16) -
                                      p_over_q * *(b + 68 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 16);
            *(b + 42 * OS1_S1 + 32) = prefactor_z * *(b + 42 * OS1_S1 + 17) -
                                      p_over_q * *(b + 68 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 42 * OS1_S1 + 7);
            *(b + 42 * OS1_S1 + 33) =
                prefactor_y * *(b + 42 * OS1_S1 + 19) -
                p_over_q * *(b + 67 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 19);
            *(b + 42 * OS1_S1 + 34) =
                prefactor_z * *(b + 42 * OS1_S1 + 19) -
                p_over_q * *(b + 68 * OS1_S1 + 19) +
                one_over_two_q * *(b + 23 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 9);
            *(b + 43 * OS1_S1 + 20) =
                prefactor_x * *(b + 43 * OS1_S1 + 10) -
                p_over_q * *(b + 64 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 4);
            *(b + 43 * OS1_S1 + 21) = prefactor_y * *(b + 43 * OS1_S1 + 10) -
                                      p_over_q * *(b + 68 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 10);
            *(b + 43 * OS1_S1 + 22) =
                prefactor_z * *(b + 43 * OS1_S1 + 10) -
                p_over_q * *(b + 69 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 10);
            *(b + 43 * OS1_S1 + 23) = prefactor_y * *(b + 43 * OS1_S1 + 11) -
                                      p_over_q * *(b + 68 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 43 * OS1_S1 + 4);
            *(b + 43 * OS1_S1 + 24) = prefactor_y * *(b + 43 * OS1_S1 + 12) -
                                      p_over_q * *(b + 68 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 12);
            *(b + 43 * OS1_S1 + 25) =
                prefactor_z * *(b + 43 * OS1_S1 + 12) -
                p_over_q * *(b + 69 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 12) +
                one_over_two_q * *(b + 43 * OS1_S1 + 4);
            *(b + 43 * OS1_S1 + 26) =
                prefactor_x * *(b + 43 * OS1_S1 + 16) -
                p_over_q * *(b + 64 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 16);
            *(b + 43 * OS1_S1 + 27) =
                prefactor_z * *(b + 43 * OS1_S1 + 13) -
                p_over_q * *(b + 69 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 13);
            *(b + 43 * OS1_S1 + 28) = prefactor_y * *(b + 43 * OS1_S1 + 15) -
                                      p_over_q * *(b + 68 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 15);
            *(b + 43 * OS1_S1 + 29) =
                prefactor_x * *(b + 43 * OS1_S1 + 19) -
                p_over_q * *(b + 64 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 19);
            *(b + 43 * OS1_S1 + 30) =
                prefactor_y * *(b + 43 * OS1_S1 + 16) -
                p_over_q * *(b + 68 * OS1_S1 + 16) +
                one_over_two_q * *(b + 25 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 7);
            *(b + 43 * OS1_S1 + 31) =
                prefactor_z * *(b + 43 * OS1_S1 + 16) -
                p_over_q * *(b + 69 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 16);
            *(b + 43 * OS1_S1 + 32) = prefactor_y * *(b + 43 * OS1_S1 + 18) -
                                      p_over_q * *(b + 68 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 43 * OS1_S1 + 9);
            *(b + 43 * OS1_S1 + 33) = prefactor_y * *(b + 43 * OS1_S1 + 19) -
                                      p_over_q * *(b + 68 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 19);
            *(b + 43 * OS1_S1 + 34) =
                prefactor_z * *(b + 43 * OS1_S1 + 19) -
                p_over_q * *(b + 69 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 9);
            *(b + 44 * OS1_S1 + 20) =
                prefactor_x * *(b + 44 * OS1_S1 + 10) -
                p_over_q * *(b + 65 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 4);
            *(b + 44 * OS1_S1 + 21) = prefactor_y * *(b + 44 * OS1_S1 + 10) -
                                      p_over_q * *(b + 69 * OS1_S1 + 10);
            *(b + 44 * OS1_S1 + 22) =
                prefactor_z * *(b + 44 * OS1_S1 + 10) -
                p_over_q * *(b + 70 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 10);
            *(b + 44 * OS1_S1 + 23) = prefactor_y * *(b + 44 * OS1_S1 + 11) -
                                      p_over_q * *(b + 69 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 4);
            *(b + 44 * OS1_S1 + 24) = prefactor_y * *(b + 44 * OS1_S1 + 12) -
                                      p_over_q * *(b + 69 * OS1_S1 + 12);
            *(b + 44 * OS1_S1 + 25) =
                prefactor_x * *(b + 44 * OS1_S1 + 15) -
                p_over_q * *(b + 65 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 15) +
                one_over_two_q * *(b + 44 * OS1_S1 + 9);
            *(b + 44 * OS1_S1 + 26) =
                prefactor_x * *(b + 44 * OS1_S1 + 16) -
                p_over_q * *(b + 65 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 16);
            *(b + 44 * OS1_S1 + 27) =
                prefactor_x * *(b + 44 * OS1_S1 + 17) -
                p_over_q * *(b + 65 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 17);
            *(b + 44 * OS1_S1 + 28) = prefactor_y * *(b + 44 * OS1_S1 + 15) -
                                      p_over_q * *(b + 69 * OS1_S1 + 15);
            *(b + 44 * OS1_S1 + 29) =
                prefactor_x * *(b + 44 * OS1_S1 + 19) -
                p_over_q * *(b + 65 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 19);
            *(b + 44 * OS1_S1 + 30) =
                prefactor_y * *(b + 44 * OS1_S1 + 16) -
                p_over_q * *(b + 69 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 7);
            *(b + 44 * OS1_S1 + 31) =
                prefactor_z * *(b + 44 * OS1_S1 + 16) -
                p_over_q * *(b + 70 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 16);
            *(b + 44 * OS1_S1 + 32) = prefactor_y * *(b + 44 * OS1_S1 + 18) -
                                      p_over_q * *(b + 69 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 9);
            *(b + 44 * OS1_S1 + 33) = prefactor_y * *(b + 44 * OS1_S1 + 19) -
                                      p_over_q * *(b + 69 * OS1_S1 + 19);
            *(b + 44 * OS1_S1 + 34) =
                prefactor_z * *(b + 44 * OS1_S1 + 19) -
                p_over_q * *(b + 70 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 9);
            *(b + 45 * OS1_S1 + 20) =
                prefactor_x * *(b + 45 * OS1_S1 + 10) -
                p_over_q * *(b + 66 * OS1_S1 + 10) +
                one_over_two_q * *(b + 30 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 45 * OS1_S1 + 4);
            *(b + 45 * OS1_S1 + 21) =
                prefactor_y * *(b + 45 * OS1_S1 + 10) -
                p_over_q * *(b + 71 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 10);
            *(b + 45 * OS1_S1 + 22) = prefactor_z * *(b + 45 * OS1_S1 + 10) -
                                      p_over_q * *(b + 72 * OS1_S1 + 10);
            *(b + 45 * OS1_S1 + 23) = prefactor_x * *(b + 45 * OS1_S1 + 13) -
                                      p_over_q * *(b + 66 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 7);
            *(b + 45 * OS1_S1 + 24) = prefactor_z * *(b + 45 * OS1_S1 + 11) -
                                      p_over_q * *(b + 72 * OS1_S1 + 11);
            *(b + 45 * OS1_S1 + 25) = prefactor_z * *(b + 45 * OS1_S1 + 12) -
                                      p_over_q * *(b + 72 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 4);
            *(b + 45 * OS1_S1 + 26) = prefactor_x * *(b + 45 * OS1_S1 + 16) -
                                      p_over_q * *(b + 66 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 16);
            *(b + 45 * OS1_S1 + 27) = prefactor_z * *(b + 45 * OS1_S1 + 13) -
                                      p_over_q * *(b + 72 * OS1_S1 + 13);
            *(b + 45 * OS1_S1 + 28) = prefactor_x * *(b + 45 * OS1_S1 + 18) -
                                      p_over_q * *(b + 66 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 18);
            *(b + 45 * OS1_S1 + 29) = prefactor_x * *(b + 45 * OS1_S1 + 19) -
                                      p_over_q * *(b + 66 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 19);
            *(b + 45 * OS1_S1 + 30) =
                prefactor_y * *(b + 45 * OS1_S1 + 16) -
                p_over_q * *(b + 71 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 45 * OS1_S1 + 7);
            *(b + 45 * OS1_S1 + 31) = prefactor_z * *(b + 45 * OS1_S1 + 16) -
                                      p_over_q * *(b + 72 * OS1_S1 + 16);
            *(b + 45 * OS1_S1 + 32) = prefactor_z * *(b + 45 * OS1_S1 + 17) -
                                      p_over_q * *(b + 72 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 7);
            *(b + 45 * OS1_S1 + 33) =
                prefactor_y * *(b + 45 * OS1_S1 + 19) -
                p_over_q * *(b + 71 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 19);
            *(b + 45 * OS1_S1 + 34) =
                prefactor_z * *(b + 45 * OS1_S1 + 19) -
                p_over_q * *(b + 72 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 45 * OS1_S1 + 9);
            *(b + 46 * OS1_S1 + 20) =
                prefactor_x * *(b + 46 * OS1_S1 + 10) -
                p_over_q * *(b + 67 * OS1_S1 + 10) +
                one_over_two_q * *(b + 31 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 46 * OS1_S1 + 4);
            *(b + 46 * OS1_S1 + 21) =
                prefactor_y * *(b + 46 * OS1_S1 + 10) -
                p_over_q * *(b + 72 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 10);
            *(b + 46 * OS1_S1 + 22) = prefactor_z * *(b + 46 * OS1_S1 + 10) -
                                      p_over_q * *(b + 73 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 10);
            *(b + 46 * OS1_S1 + 23) = prefactor_x * *(b + 46 * OS1_S1 + 13) -
                                      p_over_q * *(b + 67 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 7);
            *(b + 46 * OS1_S1 + 24) = prefactor_z * *(b + 46 * OS1_S1 + 11) -
                                      p_over_q * *(b + 73 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 11);
            *(b + 46 * OS1_S1 + 25) = prefactor_z * *(b + 46 * OS1_S1 + 12) -
                                      p_over_q * *(b + 73 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 4);
            *(b + 46 * OS1_S1 + 26) = prefactor_x * *(b + 46 * OS1_S1 + 16) -
                                      p_over_q * *(b + 67 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 16);
            *(b + 46 * OS1_S1 + 27) = prefactor_z * *(b + 46 * OS1_S1 + 13) -
                                      p_over_q * *(b + 73 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 13);
            *(b + 46 * OS1_S1 + 28) = prefactor_x * *(b + 46 * OS1_S1 + 18) -
                                      p_over_q * *(b + 67 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 18);
            *(b + 46 * OS1_S1 + 29) = prefactor_x * *(b + 46 * OS1_S1 + 19) -
                                      p_over_q * *(b + 67 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 19);
            *(b + 46 * OS1_S1 + 30) =
                prefactor_y * *(b + 46 * OS1_S1 + 16) -
                p_over_q * *(b + 72 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 46 * OS1_S1 + 7);
            *(b + 46 * OS1_S1 + 31) = prefactor_z * *(b + 46 * OS1_S1 + 16) -
                                      p_over_q * *(b + 73 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 16);
            *(b + 46 * OS1_S1 + 32) = prefactor_z * *(b + 46 * OS1_S1 + 17) -
                                      p_over_q * *(b + 73 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 7);
            *(b + 46 * OS1_S1 + 33) =
                prefactor_y * *(b + 46 * OS1_S1 + 19) -
                p_over_q * *(b + 72 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 19);
            *(b + 46 * OS1_S1 + 34) =
                prefactor_z * *(b + 46 * OS1_S1 + 19) -
                p_over_q * *(b + 73 * OS1_S1 + 19) +
                one_over_two_q * *(b + 26 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 46 * OS1_S1 + 9);
            *(b + 47 * OS1_S1 + 20) =
                prefactor_x * *(b + 47 * OS1_S1 + 10) -
                p_over_q * *(b + 68 * OS1_S1 + 10) +
                one_over_two_q * *(b + 32 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 4);
            *(b + 47 * OS1_S1 + 21) =
                prefactor_y * *(b + 47 * OS1_S1 + 10) -
                p_over_q * *(b + 73 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 10);
            *(b + 47 * OS1_S1 + 22) =
                prefactor_z * *(b + 47 * OS1_S1 + 10) -
                p_over_q * *(b + 74 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 10);
            *(b + 47 * OS1_S1 + 23) = prefactor_x * *(b + 47 * OS1_S1 + 13) -
                                      p_over_q * *(b + 68 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 47 * OS1_S1 + 7);
            *(b + 47 * OS1_S1 + 24) =
                prefactor_z * *(b + 47 * OS1_S1 + 11) -
                p_over_q * *(b + 74 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 11);
            *(b + 47 * OS1_S1 + 25) = prefactor_x * *(b + 47 * OS1_S1 + 15) -
                                      p_over_q * *(b + 68 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 47 * OS1_S1 + 9);
            *(b + 47 * OS1_S1 + 26) = prefactor_x * *(b + 47 * OS1_S1 + 16) -
                                      p_over_q * *(b + 68 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 16);
            *(b + 47 * OS1_S1 + 27) = prefactor_x * *(b + 47 * OS1_S1 + 17) -
                                      p_over_q * *(b + 68 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 17);
            *(b + 47 * OS1_S1 + 28) = prefactor_x * *(b + 47 * OS1_S1 + 18) -
                                      p_over_q * *(b + 68 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 18);
            *(b + 47 * OS1_S1 + 29) = prefactor_x * *(b + 47 * OS1_S1 + 19) -
                                      p_over_q * *(b + 68 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 19);
            *(b + 47 * OS1_S1 + 30) =
                prefactor_y * *(b + 47 * OS1_S1 + 16) -
                p_over_q * *(b + 73 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 7);
            *(b + 47 * OS1_S1 + 31) =
                prefactor_z * *(b + 47 * OS1_S1 + 16) -
                p_over_q * *(b + 74 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 16);
            *(b + 47 * OS1_S1 + 32) =
                prefactor_z * *(b + 47 * OS1_S1 + 17) -
                p_over_q * *(b + 74 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 17) +
                one_over_two_q * *(b + 47 * OS1_S1 + 7);
            *(b + 47 * OS1_S1 + 33) =
                prefactor_y * *(b + 47 * OS1_S1 + 19) -
                p_over_q * *(b + 73 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 19);
            *(b + 47 * OS1_S1 + 34) =
                prefactor_z * *(b + 47 * OS1_S1 + 19) -
                p_over_q * *(b + 74 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 9);
            *(b + 48 * OS1_S1 + 20) =
                prefactor_x * *(b + 48 * OS1_S1 + 10) -
                p_over_q * *(b + 69 * OS1_S1 + 10) +
                one_over_two_q * *(b + 33 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 48 * OS1_S1 + 4);
            *(b + 48 * OS1_S1 + 21) = prefactor_y * *(b + 48 * OS1_S1 + 10) -
                                      p_over_q * *(b + 74 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 10);
            *(b + 48 * OS1_S1 + 22) =
                prefactor_z * *(b + 48 * OS1_S1 + 10) -
                p_over_q * *(b + 75 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 10);
            *(b + 48 * OS1_S1 + 23) = prefactor_y * *(b + 48 * OS1_S1 + 11) -
                                      p_over_q * *(b + 74 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 4);
            *(b + 48 * OS1_S1 + 24) = prefactor_y * *(b + 48 * OS1_S1 + 12) -
                                      p_over_q * *(b + 74 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 12);
            *(b + 48 * OS1_S1 + 25) = prefactor_x * *(b + 48 * OS1_S1 + 15) -
                                      p_over_q * *(b + 69 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 9);
            *(b + 48 * OS1_S1 + 26) = prefactor_x * *(b + 48 * OS1_S1 + 16) -
                                      p_over_q * *(b + 69 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 16);
            *(b + 48 * OS1_S1 + 27) = prefactor_x * *(b + 48 * OS1_S1 + 17) -
                                      p_over_q * *(b + 69 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 17);
            *(b + 48 * OS1_S1 + 28) = prefactor_y * *(b + 48 * OS1_S1 + 15) -
                                      p_over_q * *(b + 74 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 15);
            *(b + 48 * OS1_S1 + 29) = prefactor_x * *(b + 48 * OS1_S1 + 19) -
                                      p_over_q * *(b + 69 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 19);
            *(b + 48 * OS1_S1 + 30) =
                prefactor_y * *(b + 48 * OS1_S1 + 16) -
                p_over_q * *(b + 74 * OS1_S1 + 16) +
                one_over_two_q * *(b + 29 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 48 * OS1_S1 + 7);
            *(b + 48 * OS1_S1 + 31) =
                prefactor_z * *(b + 48 * OS1_S1 + 16) -
                p_over_q * *(b + 75 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 16);
            *(b + 48 * OS1_S1 + 32) = prefactor_y * *(b + 48 * OS1_S1 + 18) -
                                      p_over_q * *(b + 74 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 9);
            *(b + 48 * OS1_S1 + 33) = prefactor_y * *(b + 48 * OS1_S1 + 19) -
                                      p_over_q * *(b + 74 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 19);
            *(b + 48 * OS1_S1 + 34) =
                prefactor_z * *(b + 48 * OS1_S1 + 19) -
                p_over_q * *(b + 75 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 48 * OS1_S1 + 9);
            *(b + 49 * OS1_S1 + 20) =
                prefactor_x * *(b + 49 * OS1_S1 + 10) -
                p_over_q * *(b + 70 * OS1_S1 + 10) +
                one_over_two_q * *(b + 34 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 49 * OS1_S1 + 4);
            *(b + 49 * OS1_S1 + 21) = prefactor_y * *(b + 49 * OS1_S1 + 10) -
                                      p_over_q * *(b + 75 * OS1_S1 + 10);
            *(b + 49 * OS1_S1 + 22) =
                prefactor_z * *(b + 49 * OS1_S1 + 10) -
                p_over_q * *(b + 76 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 10);
            *(b + 49 * OS1_S1 + 23) = prefactor_y * *(b + 49 * OS1_S1 + 11) -
                                      p_over_q * *(b + 75 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 4);
            *(b + 49 * OS1_S1 + 24) = prefactor_y * *(b + 49 * OS1_S1 + 12) -
                                      p_over_q * *(b + 75 * OS1_S1 + 12);
            *(b + 49 * OS1_S1 + 25) = prefactor_x * *(b + 49 * OS1_S1 + 15) -
                                      p_over_q * *(b + 70 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 9);
            *(b + 49 * OS1_S1 + 26) = prefactor_x * *(b + 49 * OS1_S1 + 16) -
                                      p_over_q * *(b + 70 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 16);
            *(b + 49 * OS1_S1 + 27) = prefactor_x * *(b + 49 * OS1_S1 + 17) -
                                      p_over_q * *(b + 70 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 17);
            *(b + 49 * OS1_S1 + 28) = prefactor_y * *(b + 49 * OS1_S1 + 15) -
                                      p_over_q * *(b + 75 * OS1_S1 + 15);
            *(b + 49 * OS1_S1 + 29) = prefactor_x * *(b + 49 * OS1_S1 + 19) -
                                      p_over_q * *(b + 70 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 19);
            *(b + 49 * OS1_S1 + 30) =
                prefactor_y * *(b + 49 * OS1_S1 + 16) -
                p_over_q * *(b + 75 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 49 * OS1_S1 + 7);
            *(b + 49 * OS1_S1 + 31) =
                prefactor_z * *(b + 49 * OS1_S1 + 16) -
                p_over_q * *(b + 76 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 16);
            *(b + 49 * OS1_S1 + 32) = prefactor_y * *(b + 49 * OS1_S1 + 18) -
                                      p_over_q * *(b + 75 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 9);
            *(b + 49 * OS1_S1 + 33) = prefactor_y * *(b + 49 * OS1_S1 + 19) -
                                      p_over_q * *(b + 75 * OS1_S1 + 19);
            *(b + 49 * OS1_S1 + 34) =
                prefactor_z * *(b + 49 * OS1_S1 + 19) -
                p_over_q * *(b + 76 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 49 * OS1_S1 + 9);
            *(b + 50 * OS1_S1 + 20) =
                prefactor_x * *(b + 50 * OS1_S1 + 10) -
                p_over_q * *(b + 71 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 50 * OS1_S1 + 4);
            *(b + 50 * OS1_S1 + 21) =
                prefactor_y * *(b + 50 * OS1_S1 + 10) -
                p_over_q * *(b + 77 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 10);
            *(b + 50 * OS1_S1 + 22) = prefactor_z * *(b + 50 * OS1_S1 + 10) -
                                      p_over_q * *(b + 78 * OS1_S1 + 10);
            *(b + 50 * OS1_S1 + 23) = prefactor_x * *(b + 50 * OS1_S1 + 13) -
                                      p_over_q * *(b + 71 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 7);
            *(b + 50 * OS1_S1 + 24) = prefactor_z * *(b + 50 * OS1_S1 + 11) -
                                      p_over_q * *(b + 78 * OS1_S1 + 11);
            *(b + 50 * OS1_S1 + 25) = prefactor_z * *(b + 50 * OS1_S1 + 12) -
                                      p_over_q * *(b + 78 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 4);
            *(b + 50 * OS1_S1 + 26) = prefactor_x * *(b + 50 * OS1_S1 + 16) -
                                      p_over_q * *(b + 71 * OS1_S1 + 16);
            *(b + 50 * OS1_S1 + 27) = prefactor_z * *(b + 50 * OS1_S1 + 13) -
                                      p_over_q * *(b + 78 * OS1_S1 + 13);
            *(b + 50 * OS1_S1 + 28) = prefactor_x * *(b + 50 * OS1_S1 + 18) -
                                      p_over_q * *(b + 71 * OS1_S1 + 18);
            *(b + 50 * OS1_S1 + 29) = prefactor_x * *(b + 50 * OS1_S1 + 19) -
                                      p_over_q * *(b + 71 * OS1_S1 + 19);
            *(b + 50 * OS1_S1 + 30) =
                prefactor_y * *(b + 50 * OS1_S1 + 16) -
                p_over_q * *(b + 77 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 50 * OS1_S1 + 7);
            *(b + 50 * OS1_S1 + 31) = prefactor_z * *(b + 50 * OS1_S1 + 16) -
                                      p_over_q * *(b + 78 * OS1_S1 + 16);
            *(b + 50 * OS1_S1 + 32) = prefactor_z * *(b + 50 * OS1_S1 + 17) -
                                      p_over_q * *(b + 78 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 7);
            *(b + 50 * OS1_S1 + 33) =
                prefactor_y * *(b + 50 * OS1_S1 + 19) -
                p_over_q * *(b + 77 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 19);
            *(b + 50 * OS1_S1 + 34) =
                prefactor_z * *(b + 50 * OS1_S1 + 19) -
                p_over_q * *(b + 78 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 50 * OS1_S1 + 9);
            *(b + 51 * OS1_S1 + 20) =
                prefactor_x * *(b + 51 * OS1_S1 + 10) -
                p_over_q * *(b + 72 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 51 * OS1_S1 + 4);
            *(b + 51 * OS1_S1 + 21) =
                prefactor_y * *(b + 51 * OS1_S1 + 10) -
                p_over_q * *(b + 78 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 10);
            *(b + 51 * OS1_S1 + 22) = prefactor_z * *(b + 51 * OS1_S1 + 10) -
                                      p_over_q * *(b + 79 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 10);
            *(b + 51 * OS1_S1 + 23) = prefactor_x * *(b + 51 * OS1_S1 + 13) -
                                      p_over_q * *(b + 72 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 7);
            *(b + 51 * OS1_S1 + 24) = prefactor_z * *(b + 51 * OS1_S1 + 11) -
                                      p_over_q * *(b + 79 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 11);
            *(b + 51 * OS1_S1 + 25) = prefactor_x * *(b + 51 * OS1_S1 + 15) -
                                      p_over_q * *(b + 72 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 9);
            *(b + 51 * OS1_S1 + 26) = prefactor_x * *(b + 51 * OS1_S1 + 16) -
                                      p_over_q * *(b + 72 * OS1_S1 + 16);
            *(b + 51 * OS1_S1 + 27) = prefactor_x * *(b + 51 * OS1_S1 + 17) -
                                      p_over_q * *(b + 72 * OS1_S1 + 17);
            *(b + 51 * OS1_S1 + 28) = prefactor_x * *(b + 51 * OS1_S1 + 18) -
                                      p_over_q * *(b + 72 * OS1_S1 + 18);
            *(b + 51 * OS1_S1 + 29) = prefactor_x * *(b + 51 * OS1_S1 + 19) -
                                      p_over_q * *(b + 72 * OS1_S1 + 19);
            *(b + 51 * OS1_S1 + 30) =
                prefactor_y * *(b + 51 * OS1_S1 + 16) -
                p_over_q * *(b + 78 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 51 * OS1_S1 + 7);
            *(b + 51 * OS1_S1 + 31) = prefactor_z * *(b + 51 * OS1_S1 + 16) -
                                      p_over_q * *(b + 79 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 16);
            *(b + 51 * OS1_S1 + 32) = prefactor_z * *(b + 51 * OS1_S1 + 17) -
                                      p_over_q * *(b + 79 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 7);
            *(b + 51 * OS1_S1 + 33) =
                prefactor_y * *(b + 51 * OS1_S1 + 19) -
                p_over_q * *(b + 78 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 19);
            *(b + 51 * OS1_S1 + 34) =
                prefactor_z * *(b + 51 * OS1_S1 + 19) -
                p_over_q * *(b + 79 * OS1_S1 + 19) +
                one_over_two_q * *(b + 30 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 51 * OS1_S1 + 9);
            *(b + 52 * OS1_S1 + 20) =
                prefactor_x * *(b + 52 * OS1_S1 + 10) -
                p_over_q * *(b + 73 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 4);
            *(b + 52 * OS1_S1 + 21) =
                prefactor_y * *(b + 52 * OS1_S1 + 10) -
                p_over_q * *(b + 79 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 10);
            *(b + 52 * OS1_S1 + 22) =
                prefactor_z * *(b + 52 * OS1_S1 + 10) -
                p_over_q * *(b + 80 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 10);
            *(b + 52 * OS1_S1 + 23) = prefactor_x * *(b + 52 * OS1_S1 + 13) -
                                      p_over_q * *(b + 73 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 7);
            *(b + 52 * OS1_S1 + 24) =
                prefactor_z * *(b + 52 * OS1_S1 + 11) -
                p_over_q * *(b + 80 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 11);
            *(b + 52 * OS1_S1 + 25) = prefactor_x * *(b + 52 * OS1_S1 + 15) -
                                      p_over_q * *(b + 73 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 9);
            *(b + 52 * OS1_S1 + 26) = prefactor_x * *(b + 52 * OS1_S1 + 16) -
                                      p_over_q * *(b + 73 * OS1_S1 + 16);
            *(b + 52 * OS1_S1 + 27) = prefactor_x * *(b + 52 * OS1_S1 + 17) -
                                      p_over_q * *(b + 73 * OS1_S1 + 17);
            *(b + 52 * OS1_S1 + 28) = prefactor_x * *(b + 52 * OS1_S1 + 18) -
                                      p_over_q * *(b + 73 * OS1_S1 + 18);
            *(b + 52 * OS1_S1 + 29) = prefactor_x * *(b + 52 * OS1_S1 + 19) -
                                      p_over_q * *(b + 73 * OS1_S1 + 19);
            *(b + 52 * OS1_S1 + 30) =
                prefactor_y * *(b + 52 * OS1_S1 + 16) -
                p_over_q * *(b + 79 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 7);
            *(b + 52 * OS1_S1 + 31) =
                prefactor_z * *(b + 52 * OS1_S1 + 16) -
                p_over_q * *(b + 80 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 16);
            *(b + 52 * OS1_S1 + 32) =
                prefactor_z * *(b + 52 * OS1_S1 + 17) -
                p_over_q * *(b + 80 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 17) +
                one_over_two_q * *(b + 52 * OS1_S1 + 7);
            *(b + 52 * OS1_S1 + 33) =
                prefactor_y * *(b + 52 * OS1_S1 + 19) -
                p_over_q * *(b + 79 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 19);
            *(b + 52 * OS1_S1 + 34) =
                prefactor_z * *(b + 52 * OS1_S1 + 19) -
                p_over_q * *(b + 80 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 9);
            *(b + 53 * OS1_S1 + 20) =
                prefactor_x * *(b + 53 * OS1_S1 + 10) -
                p_over_q * *(b + 74 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 4);
            *(b + 53 * OS1_S1 + 21) =
                prefactor_y * *(b + 53 * OS1_S1 + 10) -
                p_over_q * *(b + 80 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 10);
            *(b + 53 * OS1_S1 + 22) =
                prefactor_z * *(b + 53 * OS1_S1 + 10) -
                p_over_q * *(b + 81 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 10);
            *(b + 53 * OS1_S1 + 23) = prefactor_x * *(b + 53 * OS1_S1 + 13) -
                                      p_over_q * *(b + 74 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 7);
            *(b + 53 * OS1_S1 + 24) =
                prefactor_y * *(b + 53 * OS1_S1 + 12) -
                p_over_q * *(b + 80 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 12);
            *(b + 53 * OS1_S1 + 25) = prefactor_x * *(b + 53 * OS1_S1 + 15) -
                                      p_over_q * *(b + 74 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 9);
            *(b + 53 * OS1_S1 + 26) = prefactor_x * *(b + 53 * OS1_S1 + 16) -
                                      p_over_q * *(b + 74 * OS1_S1 + 16);
            *(b + 53 * OS1_S1 + 27) = prefactor_x * *(b + 53 * OS1_S1 + 17) -
                                      p_over_q * *(b + 74 * OS1_S1 + 17);
            *(b + 53 * OS1_S1 + 28) = prefactor_x * *(b + 53 * OS1_S1 + 18) -
                                      p_over_q * *(b + 74 * OS1_S1 + 18);
            *(b + 53 * OS1_S1 + 29) = prefactor_x * *(b + 53 * OS1_S1 + 19) -
                                      p_over_q * *(b + 74 * OS1_S1 + 19);
            *(b + 53 * OS1_S1 + 30) =
                prefactor_y * *(b + 53 * OS1_S1 + 16) -
                p_over_q * *(b + 80 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 7);
            *(b + 53 * OS1_S1 + 31) =
                prefactor_z * *(b + 53 * OS1_S1 + 16) -
                p_over_q * *(b + 81 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 16);
            *(b + 53 * OS1_S1 + 32) =
                prefactor_y * *(b + 53 * OS1_S1 + 18) -
                p_over_q * *(b + 80 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 18) +
                one_over_two_q * *(b + 53 * OS1_S1 + 9);
            *(b + 53 * OS1_S1 + 33) =
                prefactor_y * *(b + 53 * OS1_S1 + 19) -
                p_over_q * *(b + 80 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 19);
            *(b + 53 * OS1_S1 + 34) =
                prefactor_z * *(b + 53 * OS1_S1 + 19) -
                p_over_q * *(b + 81 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 9);
            *(b + 54 * OS1_S1 + 20) =
                prefactor_x * *(b + 54 * OS1_S1 + 10) -
                p_over_q * *(b + 75 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 54 * OS1_S1 + 4);
            *(b + 54 * OS1_S1 + 21) = prefactor_y * *(b + 54 * OS1_S1 + 10) -
                                      p_over_q * *(b + 81 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 10);
            *(b + 54 * OS1_S1 + 22) =
                prefactor_z * *(b + 54 * OS1_S1 + 10) -
                p_over_q * *(b + 82 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 10);
            *(b + 54 * OS1_S1 + 23) = prefactor_x * *(b + 54 * OS1_S1 + 13) -
                                      p_over_q * *(b + 75 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 7);
            *(b + 54 * OS1_S1 + 24) = prefactor_y * *(b + 54 * OS1_S1 + 12) -
                                      p_over_q * *(b + 81 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 12);
            *(b + 54 * OS1_S1 + 25) = prefactor_x * *(b + 54 * OS1_S1 + 15) -
                                      p_over_q * *(b + 75 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 9);
            *(b + 54 * OS1_S1 + 26) = prefactor_x * *(b + 54 * OS1_S1 + 16) -
                                      p_over_q * *(b + 75 * OS1_S1 + 16);
            *(b + 54 * OS1_S1 + 27) = prefactor_x * *(b + 54 * OS1_S1 + 17) -
                                      p_over_q * *(b + 75 * OS1_S1 + 17);
            *(b + 54 * OS1_S1 + 28) = prefactor_x * *(b + 54 * OS1_S1 + 18) -
                                      p_over_q * *(b + 75 * OS1_S1 + 18);
            *(b + 54 * OS1_S1 + 29) = prefactor_x * *(b + 54 * OS1_S1 + 19) -
                                      p_over_q * *(b + 75 * OS1_S1 + 19);
            *(b + 54 * OS1_S1 + 30) =
                prefactor_y * *(b + 54 * OS1_S1 + 16) -
                p_over_q * *(b + 81 * OS1_S1 + 16) +
                one_over_two_q * *(b + 34 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 54 * OS1_S1 + 7);
            *(b + 54 * OS1_S1 + 31) =
                prefactor_z * *(b + 54 * OS1_S1 + 16) -
                p_over_q * *(b + 82 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 16);
            *(b + 54 * OS1_S1 + 32) = prefactor_y * *(b + 54 * OS1_S1 + 18) -
                                      p_over_q * *(b + 81 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 9);
            *(b + 54 * OS1_S1 + 33) = prefactor_y * *(b + 54 * OS1_S1 + 19) -
                                      p_over_q * *(b + 81 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 19);
            *(b + 54 * OS1_S1 + 34) =
                prefactor_z * *(b + 54 * OS1_S1 + 19) -
                p_over_q * *(b + 82 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 54 * OS1_S1 + 9);
            *(b + 55 * OS1_S1 + 20) =
                prefactor_x * *(b + 55 * OS1_S1 + 10) -
                p_over_q * *(b + 76 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 55 * OS1_S1 + 4);
            *(b + 55 * OS1_S1 + 21) = prefactor_y * *(b + 55 * OS1_S1 + 10) -
                                      p_over_q * *(b + 82 * OS1_S1 + 10);
            *(b + 55 * OS1_S1 + 22) =
                prefactor_z * *(b + 55 * OS1_S1 + 10) -
                p_over_q * *(b + 83 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 10);
            *(b + 55 * OS1_S1 + 23) = prefactor_y * *(b + 55 * OS1_S1 + 11) -
                                      p_over_q * *(b + 82 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 4);
            *(b + 55 * OS1_S1 + 24) = prefactor_y * *(b + 55 * OS1_S1 + 12) -
                                      p_over_q * *(b + 82 * OS1_S1 + 12);
            *(b + 55 * OS1_S1 + 25) = prefactor_x * *(b + 55 * OS1_S1 + 15) -
                                      p_over_q * *(b + 76 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 9);
            *(b + 55 * OS1_S1 + 26) = prefactor_x * *(b + 55 * OS1_S1 + 16) -
                                      p_over_q * *(b + 76 * OS1_S1 + 16);
            *(b + 55 * OS1_S1 + 27) = prefactor_x * *(b + 55 * OS1_S1 + 17) -
                                      p_over_q * *(b + 76 * OS1_S1 + 17);
            *(b + 55 * OS1_S1 + 28) = prefactor_y * *(b + 55 * OS1_S1 + 15) -
                                      p_over_q * *(b + 82 * OS1_S1 + 15);
            *(b + 55 * OS1_S1 + 29) = prefactor_x * *(b + 55 * OS1_S1 + 19) -
                                      p_over_q * *(b + 76 * OS1_S1 + 19);
            *(b + 55 * OS1_S1 + 30) =
                prefactor_y * *(b + 55 * OS1_S1 + 16) -
                p_over_q * *(b + 82 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 55 * OS1_S1 + 7);
            *(b + 55 * OS1_S1 + 31) =
                prefactor_z * *(b + 55 * OS1_S1 + 16) -
                p_over_q * *(b + 83 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 16);
            *(b + 55 * OS1_S1 + 32) = prefactor_y * *(b + 55 * OS1_S1 + 18) -
                                      p_over_q * *(b + 82 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 9);
            *(b + 55 * OS1_S1 + 33) = prefactor_y * *(b + 55 * OS1_S1 + 19) -
                                      p_over_q * *(b + 82 * OS1_S1 + 19);
            *(b + 55 * OS1_S1 + 34) =
                prefactor_z * *(b + 55 * OS1_S1 + 19) -
                p_over_q * *(b + 83 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 55 * OS1_S1 + 9);
            return;
        }
        void transfer_6_4(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 56 * OS1_S1 + 20) =
                prefactor_x * *(b + 56 * OS1_S1 + 10) -
                p_over_q * *(b + 84 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 56 * OS1_S1 + 4);
            *(b + 56 * OS1_S1 + 21) = prefactor_y * *(b + 56 * OS1_S1 + 10) -
                                      p_over_q * *(b + 85 * OS1_S1 + 10);
            *(b + 56 * OS1_S1 + 22) = prefactor_z * *(b + 56 * OS1_S1 + 10) -
                                      p_over_q * *(b + 86 * OS1_S1 + 10);
            *(b + 56 * OS1_S1 + 23) = prefactor_y * *(b + 56 * OS1_S1 + 11) -
                                      p_over_q * *(b + 85 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 4);
            *(b + 56 * OS1_S1 + 24) = prefactor_z * *(b + 56 * OS1_S1 + 11) -
                                      p_over_q * *(b + 86 * OS1_S1 + 11);
            *(b + 56 * OS1_S1 + 25) = prefactor_z * *(b + 56 * OS1_S1 + 12) -
                                      p_over_q * *(b + 86 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 4);
            *(b + 56 * OS1_S1 + 26) =
                prefactor_x * *(b + 56 * OS1_S1 + 16) -
                p_over_q * *(b + 84 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 16);
            *(b + 56 * OS1_S1 + 27) = prefactor_z * *(b + 56 * OS1_S1 + 13) -
                                      p_over_q * *(b + 86 * OS1_S1 + 13);
            *(b + 56 * OS1_S1 + 28) = prefactor_y * *(b + 56 * OS1_S1 + 15) -
                                      p_over_q * *(b + 85 * OS1_S1 + 15);
            *(b + 56 * OS1_S1 + 29) =
                prefactor_x * *(b + 56 * OS1_S1 + 19) -
                p_over_q * *(b + 84 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 19);
            *(b + 56 * OS1_S1 + 30) =
                prefactor_y * *(b + 56 * OS1_S1 + 16) -
                p_over_q * *(b + 85 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 56 * OS1_S1 + 7);
            *(b + 56 * OS1_S1 + 31) = prefactor_z * *(b + 56 * OS1_S1 + 16) -
                                      p_over_q * *(b + 86 * OS1_S1 + 16);
            *(b + 56 * OS1_S1 + 32) = prefactor_z * *(b + 56 * OS1_S1 + 17) -
                                      p_over_q * *(b + 86 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 7);
            *(b + 56 * OS1_S1 + 33) = prefactor_y * *(b + 56 * OS1_S1 + 19) -
                                      p_over_q * *(b + 85 * OS1_S1 + 19);
            *(b + 56 * OS1_S1 + 34) =
                prefactor_z * *(b + 56 * OS1_S1 + 19) -
                p_over_q * *(b + 86 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 56 * OS1_S1 + 9);
            *(b + 57 * OS1_S1 + 20) =
                prefactor_x * *(b + 57 * OS1_S1 + 10) -
                p_over_q * *(b + 85 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 57 * OS1_S1 + 4);
            *(b + 57 * OS1_S1 + 21) = prefactor_y * *(b + 57 * OS1_S1 + 10) -
                                      p_over_q * *(b + 87 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 10);
            *(b + 57 * OS1_S1 + 22) = prefactor_z * *(b + 57 * OS1_S1 + 10) -
                                      p_over_q * *(b + 88 * OS1_S1 + 10);
            *(b + 57 * OS1_S1 + 23) = prefactor_y * *(b + 57 * OS1_S1 + 11) -
                                      p_over_q * *(b + 87 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 4);
            *(b + 57 * OS1_S1 + 24) = prefactor_z * *(b + 57 * OS1_S1 + 11) -
                                      p_over_q * *(b + 88 * OS1_S1 + 11);
            *(b + 57 * OS1_S1 + 25) = prefactor_z * *(b + 57 * OS1_S1 + 12) -
                                      p_over_q * *(b + 88 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 4);
            *(b + 57 * OS1_S1 + 26) =
                prefactor_x * *(b + 57 * OS1_S1 + 16) -
                p_over_q * *(b + 85 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 16);
            *(b + 57 * OS1_S1 + 27) = prefactor_z * *(b + 57 * OS1_S1 + 13) -
                                      p_over_q * *(b + 88 * OS1_S1 + 13);
            *(b + 57 * OS1_S1 + 28) = prefactor_y * *(b + 57 * OS1_S1 + 15) -
                                      p_over_q * *(b + 87 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 15);
            *(b + 57 * OS1_S1 + 29) =
                prefactor_x * *(b + 57 * OS1_S1 + 19) -
                p_over_q * *(b + 85 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 19);
            *(b + 57 * OS1_S1 + 30) =
                prefactor_y * *(b + 57 * OS1_S1 + 16) -
                p_over_q * *(b + 87 * OS1_S1 + 16) +
                one_over_two_q * *(b + 35 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 57 * OS1_S1 + 7);
            *(b + 57 * OS1_S1 + 31) = prefactor_z * *(b + 57 * OS1_S1 + 16) -
                                      p_over_q * *(b + 88 * OS1_S1 + 16);
            *(b + 57 * OS1_S1 + 32) = prefactor_z * *(b + 57 * OS1_S1 + 17) -
                                      p_over_q * *(b + 88 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 7);
            *(b + 57 * OS1_S1 + 33) = prefactor_y * *(b + 57 * OS1_S1 + 19) -
                                      p_over_q * *(b + 87 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 19);
            *(b + 57 * OS1_S1 + 34) =
                prefactor_z * *(b + 57 * OS1_S1 + 19) -
                p_over_q * *(b + 88 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 57 * OS1_S1 + 9);
            *(b + 58 * OS1_S1 + 20) =
                prefactor_x * *(b + 58 * OS1_S1 + 10) -
                p_over_q * *(b + 86 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 58 * OS1_S1 + 4);
            *(b + 58 * OS1_S1 + 21) = prefactor_y * *(b + 58 * OS1_S1 + 10) -
                                      p_over_q * *(b + 88 * OS1_S1 + 10);
            *(b + 58 * OS1_S1 + 22) = prefactor_z * *(b + 58 * OS1_S1 + 10) -
                                      p_over_q * *(b + 89 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 10);
            *(b + 58 * OS1_S1 + 23) = prefactor_y * *(b + 58 * OS1_S1 + 11) -
                                      p_over_q * *(b + 88 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 4);
            *(b + 58 * OS1_S1 + 24) = prefactor_y * *(b + 58 * OS1_S1 + 12) -
                                      p_over_q * *(b + 88 * OS1_S1 + 12);
            *(b + 58 * OS1_S1 + 25) = prefactor_z * *(b + 58 * OS1_S1 + 12) -
                                      p_over_q * *(b + 89 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 4);
            *(b + 58 * OS1_S1 + 26) =
                prefactor_x * *(b + 58 * OS1_S1 + 16) -
                p_over_q * *(b + 86 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 16);
            *(b + 58 * OS1_S1 + 27) = prefactor_z * *(b + 58 * OS1_S1 + 13) -
                                      p_over_q * *(b + 89 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 13);
            *(b + 58 * OS1_S1 + 28) = prefactor_y * *(b + 58 * OS1_S1 + 15) -
                                      p_over_q * *(b + 88 * OS1_S1 + 15);
            *(b + 58 * OS1_S1 + 29) =
                prefactor_x * *(b + 58 * OS1_S1 + 19) -
                p_over_q * *(b + 86 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 19);
            *(b + 58 * OS1_S1 + 30) =
                prefactor_y * *(b + 58 * OS1_S1 + 16) -
                p_over_q * *(b + 88 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 58 * OS1_S1 + 7);
            *(b + 58 * OS1_S1 + 31) = prefactor_z * *(b + 58 * OS1_S1 + 16) -
                                      p_over_q * *(b + 89 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 16);
            *(b + 58 * OS1_S1 + 32) = prefactor_y * *(b + 58 * OS1_S1 + 18) -
                                      p_over_q * *(b + 88 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 9);
            *(b + 58 * OS1_S1 + 33) = prefactor_y * *(b + 58 * OS1_S1 + 19) -
                                      p_over_q * *(b + 88 * OS1_S1 + 19);
            *(b + 58 * OS1_S1 + 34) =
                prefactor_z * *(b + 58 * OS1_S1 + 19) -
                p_over_q * *(b + 89 * OS1_S1 + 19) +
                one_over_two_q * *(b + 35 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 58 * OS1_S1 + 9);
            *(b + 59 * OS1_S1 + 20) =
                prefactor_x * *(b + 59 * OS1_S1 + 10) -
                p_over_q * *(b + 87 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 4);
            *(b + 59 * OS1_S1 + 21) =
                prefactor_y * *(b + 59 * OS1_S1 + 10) -
                p_over_q * *(b + 90 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 10);
            *(b + 59 * OS1_S1 + 22) = prefactor_z * *(b + 59 * OS1_S1 + 10) -
                                      p_over_q * *(b + 91 * OS1_S1 + 10);
            *(b + 59 * OS1_S1 + 23) =
                prefactor_y * *(b + 59 * OS1_S1 + 11) -
                p_over_q * *(b + 90 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 11) +
                one_over_two_q * *(b + 59 * OS1_S1 + 4);
            *(b + 59 * OS1_S1 + 24) = prefactor_z * *(b + 59 * OS1_S1 + 11) -
                                      p_over_q * *(b + 91 * OS1_S1 + 11);
            *(b + 59 * OS1_S1 + 25) = prefactor_z * *(b + 59 * OS1_S1 + 12) -
                                      p_over_q * *(b + 91 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 4);
            *(b + 59 * OS1_S1 + 26) =
                prefactor_x * *(b + 59 * OS1_S1 + 16) -
                p_over_q * *(b + 87 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 16);
            *(b + 59 * OS1_S1 + 27) = prefactor_z * *(b + 59 * OS1_S1 + 13) -
                                      p_over_q * *(b + 91 * OS1_S1 + 13);
            *(b + 59 * OS1_S1 + 28) =
                prefactor_y * *(b + 59 * OS1_S1 + 15) -
                p_over_q * *(b + 90 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 15);
            *(b + 59 * OS1_S1 + 29) =
                prefactor_x * *(b + 59 * OS1_S1 + 19) -
                p_over_q * *(b + 87 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 19);
            *(b + 59 * OS1_S1 + 30) =
                prefactor_y * *(b + 59 * OS1_S1 + 16) -
                p_over_q * *(b + 90 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 7);
            *(b + 59 * OS1_S1 + 31) = prefactor_z * *(b + 59 * OS1_S1 + 16) -
                                      p_over_q * *(b + 91 * OS1_S1 + 16);
            *(b + 59 * OS1_S1 + 32) = prefactor_z * *(b + 59 * OS1_S1 + 17) -
                                      p_over_q * *(b + 91 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 7);
            *(b + 59 * OS1_S1 + 33) =
                prefactor_y * *(b + 59 * OS1_S1 + 19) -
                p_over_q * *(b + 90 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 19);
            *(b + 59 * OS1_S1 + 34) =
                prefactor_z * *(b + 59 * OS1_S1 + 19) -
                p_over_q * *(b + 91 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 9);
            *(b + 60 * OS1_S1 + 20) =
                prefactor_x * *(b + 60 * OS1_S1 + 10) -
                p_over_q * *(b + 88 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 60 * OS1_S1 + 4);
            *(b + 60 * OS1_S1 + 21) = prefactor_y * *(b + 60 * OS1_S1 + 10) -
                                      p_over_q * *(b + 91 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 10);
            *(b + 60 * OS1_S1 + 22) = prefactor_z * *(b + 60 * OS1_S1 + 10) -
                                      p_over_q * *(b + 92 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 10);
            *(b + 60 * OS1_S1 + 23) = prefactor_y * *(b + 60 * OS1_S1 + 11) -
                                      p_over_q * *(b + 91 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 4);
            *(b + 60 * OS1_S1 + 24) = prefactor_z * *(b + 60 * OS1_S1 + 11) -
                                      p_over_q * *(b + 92 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 11);
            *(b + 60 * OS1_S1 + 25) = prefactor_z * *(b + 60 * OS1_S1 + 12) -
                                      p_over_q * *(b + 92 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 4);
            *(b + 60 * OS1_S1 + 26) =
                prefactor_x * *(b + 60 * OS1_S1 + 16) -
                p_over_q * *(b + 88 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 16);
            *(b + 60 * OS1_S1 + 27) = prefactor_z * *(b + 60 * OS1_S1 + 13) -
                                      p_over_q * *(b + 92 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 13);
            *(b + 60 * OS1_S1 + 28) = prefactor_y * *(b + 60 * OS1_S1 + 15) -
                                      p_over_q * *(b + 91 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 15);
            *(b + 60 * OS1_S1 + 29) =
                prefactor_x * *(b + 60 * OS1_S1 + 19) -
                p_over_q * *(b + 88 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 19);
            *(b + 60 * OS1_S1 + 30) =
                prefactor_y * *(b + 60 * OS1_S1 + 16) -
                p_over_q * *(b + 91 * OS1_S1 + 16) +
                one_over_two_q * *(b + 37 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 60 * OS1_S1 + 7);
            *(b + 60 * OS1_S1 + 31) = prefactor_z * *(b + 60 * OS1_S1 + 16) -
                                      p_over_q * *(b + 92 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 16);
            *(b + 60 * OS1_S1 + 32) = prefactor_z * *(b + 60 * OS1_S1 + 17) -
                                      p_over_q * *(b + 92 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 7);
            *(b + 60 * OS1_S1 + 33) = prefactor_y * *(b + 60 * OS1_S1 + 19) -
                                      p_over_q * *(b + 91 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 19);
            *(b + 60 * OS1_S1 + 34) =
                prefactor_z * *(b + 60 * OS1_S1 + 19) -
                p_over_q * *(b + 92 * OS1_S1 + 19) +
                one_over_two_q * *(b + 36 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 60 * OS1_S1 + 9);
            *(b + 61 * OS1_S1 + 20) =
                prefactor_x * *(b + 61 * OS1_S1 + 10) -
                p_over_q * *(b + 89 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 4);
            *(b + 61 * OS1_S1 + 21) = prefactor_y * *(b + 61 * OS1_S1 + 10) -
                                      p_over_q * *(b + 92 * OS1_S1 + 10);
            *(b + 61 * OS1_S1 + 22) =
                prefactor_z * *(b + 61 * OS1_S1 + 10) -
                p_over_q * *(b + 93 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 10);
            *(b + 61 * OS1_S1 + 23) = prefactor_y * *(b + 61 * OS1_S1 + 11) -
                                      p_over_q * *(b + 92 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 4);
            *(b + 61 * OS1_S1 + 24) = prefactor_y * *(b + 61 * OS1_S1 + 12) -
                                      p_over_q * *(b + 92 * OS1_S1 + 12);
            *(b + 61 * OS1_S1 + 25) =
                prefactor_z * *(b + 61 * OS1_S1 + 12) -
                p_over_q * *(b + 93 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 12) +
                one_over_two_q * *(b + 61 * OS1_S1 + 4);
            *(b + 61 * OS1_S1 + 26) =
                prefactor_x * *(b + 61 * OS1_S1 + 16) -
                p_over_q * *(b + 89 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 16);
            *(b + 61 * OS1_S1 + 27) =
                prefactor_z * *(b + 61 * OS1_S1 + 13) -
                p_over_q * *(b + 93 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 13);
            *(b + 61 * OS1_S1 + 28) = prefactor_y * *(b + 61 * OS1_S1 + 15) -
                                      p_over_q * *(b + 92 * OS1_S1 + 15);
            *(b + 61 * OS1_S1 + 29) =
                prefactor_x * *(b + 61 * OS1_S1 + 19) -
                p_over_q * *(b + 89 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 19);
            *(b + 61 * OS1_S1 + 30) =
                prefactor_y * *(b + 61 * OS1_S1 + 16) -
                p_over_q * *(b + 92 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 7);
            *(b + 61 * OS1_S1 + 31) =
                prefactor_z * *(b + 61 * OS1_S1 + 16) -
                p_over_q * *(b + 93 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 16);
            *(b + 61 * OS1_S1 + 32) = prefactor_y * *(b + 61 * OS1_S1 + 18) -
                                      p_over_q * *(b + 92 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 9);
            *(b + 61 * OS1_S1 + 33) = prefactor_y * *(b + 61 * OS1_S1 + 19) -
                                      p_over_q * *(b + 92 * OS1_S1 + 19);
            *(b + 61 * OS1_S1 + 34) =
                prefactor_z * *(b + 61 * OS1_S1 + 19) -
                p_over_q * *(b + 93 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 9);
            *(b + 62 * OS1_S1 + 20) =
                prefactor_x * *(b + 62 * OS1_S1 + 10) -
                p_over_q * *(b + 90 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 62 * OS1_S1 + 4);
            *(b + 62 * OS1_S1 + 21) =
                prefactor_y * *(b + 62 * OS1_S1 + 10) -
                p_over_q * *(b + 94 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 10);
            *(b + 62 * OS1_S1 + 22) = prefactor_z * *(b + 62 * OS1_S1 + 10) -
                                      p_over_q * *(b + 95 * OS1_S1 + 10);
            *(b + 62 * OS1_S1 + 23) =
                prefactor_y * *(b + 62 * OS1_S1 + 11) -
                p_over_q * *(b + 94 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 11) +
                one_over_two_q * *(b + 62 * OS1_S1 + 4);
            *(b + 62 * OS1_S1 + 24) = prefactor_z * *(b + 62 * OS1_S1 + 11) -
                                      p_over_q * *(b + 95 * OS1_S1 + 11);
            *(b + 62 * OS1_S1 + 25) = prefactor_z * *(b + 62 * OS1_S1 + 12) -
                                      p_over_q * *(b + 95 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 4);
            *(b + 62 * OS1_S1 + 26) =
                prefactor_x * *(b + 62 * OS1_S1 + 16) -
                p_over_q * *(b + 90 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 16);
            *(b + 62 * OS1_S1 + 27) = prefactor_z * *(b + 62 * OS1_S1 + 13) -
                                      p_over_q * *(b + 95 * OS1_S1 + 13);
            *(b + 62 * OS1_S1 + 28) =
                prefactor_y * *(b + 62 * OS1_S1 + 15) -
                p_over_q * *(b + 94 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 15);
            *(b + 62 * OS1_S1 + 29) =
                prefactor_x * *(b + 62 * OS1_S1 + 19) -
                p_over_q * *(b + 90 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 19);
            *(b + 62 * OS1_S1 + 30) =
                prefactor_y * *(b + 62 * OS1_S1 + 16) -
                p_over_q * *(b + 94 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 62 * OS1_S1 + 7);
            *(b + 62 * OS1_S1 + 31) = prefactor_z * *(b + 62 * OS1_S1 + 16) -
                                      p_over_q * *(b + 95 * OS1_S1 + 16);
            *(b + 62 * OS1_S1 + 32) = prefactor_z * *(b + 62 * OS1_S1 + 17) -
                                      p_over_q * *(b + 95 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 7);
            *(b + 62 * OS1_S1 + 33) =
                prefactor_y * *(b + 62 * OS1_S1 + 19) -
                p_over_q * *(b + 94 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 19);
            *(b + 62 * OS1_S1 + 34) =
                prefactor_z * *(b + 62 * OS1_S1 + 19) -
                p_over_q * *(b + 95 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 62 * OS1_S1 + 9);
            *(b + 63 * OS1_S1 + 20) =
                prefactor_x * *(b + 63 * OS1_S1 + 10) -
                p_over_q * *(b + 91 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 4);
            *(b + 63 * OS1_S1 + 21) =
                prefactor_y * *(b + 63 * OS1_S1 + 10) -
                p_over_q * *(b + 95 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 10);
            *(b + 63 * OS1_S1 + 22) = prefactor_z * *(b + 63 * OS1_S1 + 10) -
                                      p_over_q * *(b + 96 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 10);
            *(b + 63 * OS1_S1 + 23) =
                prefactor_y * *(b + 63 * OS1_S1 + 11) -
                p_over_q * *(b + 95 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 11) +
                one_over_two_q * *(b + 63 * OS1_S1 + 4);
            *(b + 63 * OS1_S1 + 24) = prefactor_z * *(b + 63 * OS1_S1 + 11) -
                                      p_over_q * *(b + 96 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 11);
            *(b + 63 * OS1_S1 + 25) = prefactor_z * *(b + 63 * OS1_S1 + 12) -
                                      p_over_q * *(b + 96 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 63 * OS1_S1 + 4);
            *(b + 63 * OS1_S1 + 26) =
                prefactor_x * *(b + 63 * OS1_S1 + 16) -
                p_over_q * *(b + 91 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 16);
            *(b + 63 * OS1_S1 + 27) = prefactor_z * *(b + 63 * OS1_S1 + 13) -
                                      p_over_q * *(b + 96 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 13);
            *(b + 63 * OS1_S1 + 28) =
                prefactor_y * *(b + 63 * OS1_S1 + 15) -
                p_over_q * *(b + 95 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 15);
            *(b + 63 * OS1_S1 + 29) =
                prefactor_x * *(b + 63 * OS1_S1 + 19) -
                p_over_q * *(b + 91 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 19);
            *(b + 63 * OS1_S1 + 30) =
                prefactor_y * *(b + 63 * OS1_S1 + 16) -
                p_over_q * *(b + 95 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 7);
            *(b + 63 * OS1_S1 + 31) = prefactor_z * *(b + 63 * OS1_S1 + 16) -
                                      p_over_q * *(b + 96 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 16);
            *(b + 63 * OS1_S1 + 32) = prefactor_z * *(b + 63 * OS1_S1 + 17) -
                                      p_over_q * *(b + 96 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 63 * OS1_S1 + 7);
            *(b + 63 * OS1_S1 + 33) =
                prefactor_y * *(b + 63 * OS1_S1 + 19) -
                p_over_q * *(b + 95 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 19);
            *(b + 63 * OS1_S1 + 34) =
                prefactor_z * *(b + 63 * OS1_S1 + 19) -
                p_over_q * *(b + 96 * OS1_S1 + 19) +
                one_over_two_q * *(b + 38 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 9);
            *(b + 64 * OS1_S1 + 20) =
                prefactor_x * *(b + 64 * OS1_S1 + 10) -
                p_over_q * *(b + 92 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 4);
            *(b + 64 * OS1_S1 + 21) = prefactor_y * *(b + 64 * OS1_S1 + 10) -
                                      p_over_q * *(b + 96 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 10);
            *(b + 64 * OS1_S1 + 22) =
                prefactor_z * *(b + 64 * OS1_S1 + 10) -
                p_over_q * *(b + 97 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 10);
            *(b + 64 * OS1_S1 + 23) = prefactor_y * *(b + 64 * OS1_S1 + 11) -
                                      p_over_q * *(b + 96 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 64 * OS1_S1 + 4);
            *(b + 64 * OS1_S1 + 24) = prefactor_y * *(b + 64 * OS1_S1 + 12) -
                                      p_over_q * *(b + 96 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 12);
            *(b + 64 * OS1_S1 + 25) =
                prefactor_z * *(b + 64 * OS1_S1 + 12) -
                p_over_q * *(b + 97 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 12) +
                one_over_two_q * *(b + 64 * OS1_S1 + 4);
            *(b + 64 * OS1_S1 + 26) =
                prefactor_x * *(b + 64 * OS1_S1 + 16) -
                p_over_q * *(b + 92 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 16);
            *(b + 64 * OS1_S1 + 27) =
                prefactor_z * *(b + 64 * OS1_S1 + 13) -
                p_over_q * *(b + 97 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 13);
            *(b + 64 * OS1_S1 + 28) = prefactor_y * *(b + 64 * OS1_S1 + 15) -
                                      p_over_q * *(b + 96 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 15);
            *(b + 64 * OS1_S1 + 29) =
                prefactor_x * *(b + 64 * OS1_S1 + 19) -
                p_over_q * *(b + 92 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 19);
            *(b + 64 * OS1_S1 + 30) =
                prefactor_y * *(b + 64 * OS1_S1 + 16) -
                p_over_q * *(b + 96 * OS1_S1 + 16) +
                one_over_two_q * *(b + 40 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 7);
            *(b + 64 * OS1_S1 + 31) =
                prefactor_z * *(b + 64 * OS1_S1 + 16) -
                p_over_q * *(b + 97 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 16);
            *(b + 64 * OS1_S1 + 32) = prefactor_y * *(b + 64 * OS1_S1 + 18) -
                                      p_over_q * *(b + 96 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 64 * OS1_S1 + 9);
            *(b + 64 * OS1_S1 + 33) = prefactor_y * *(b + 64 * OS1_S1 + 19) -
                                      p_over_q * *(b + 96 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 19);
            *(b + 64 * OS1_S1 + 34) =
                prefactor_z * *(b + 64 * OS1_S1 + 19) -
                p_over_q * *(b + 97 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 9);
            *(b + 65 * OS1_S1 + 20) =
                prefactor_x * *(b + 65 * OS1_S1 + 10) -
                p_over_q * *(b + 93 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 65 * OS1_S1 + 4);
            *(b + 65 * OS1_S1 + 21) = prefactor_y * *(b + 65 * OS1_S1 + 10) -
                                      p_over_q * *(b + 97 * OS1_S1 + 10);
            *(b + 65 * OS1_S1 + 22) =
                prefactor_z * *(b + 65 * OS1_S1 + 10) -
                p_over_q * *(b + 98 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 10);
            *(b + 65 * OS1_S1 + 23) = prefactor_y * *(b + 65 * OS1_S1 + 11) -
                                      p_over_q * *(b + 97 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 4);
            *(b + 65 * OS1_S1 + 24) = prefactor_y * *(b + 65 * OS1_S1 + 12) -
                                      p_over_q * *(b + 97 * OS1_S1 + 12);
            *(b + 65 * OS1_S1 + 25) =
                prefactor_z * *(b + 65 * OS1_S1 + 12) -
                p_over_q * *(b + 98 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 12) +
                one_over_two_q * *(b + 65 * OS1_S1 + 4);
            *(b + 65 * OS1_S1 + 26) =
                prefactor_x * *(b + 65 * OS1_S1 + 16) -
                p_over_q * *(b + 93 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 16);
            *(b + 65 * OS1_S1 + 27) =
                prefactor_z * *(b + 65 * OS1_S1 + 13) -
                p_over_q * *(b + 98 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 13);
            *(b + 65 * OS1_S1 + 28) = prefactor_y * *(b + 65 * OS1_S1 + 15) -
                                      p_over_q * *(b + 97 * OS1_S1 + 15);
            *(b + 65 * OS1_S1 + 29) =
                prefactor_x * *(b + 65 * OS1_S1 + 19) -
                p_over_q * *(b + 93 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 19);
            *(b + 65 * OS1_S1 + 30) =
                prefactor_y * *(b + 65 * OS1_S1 + 16) -
                p_over_q * *(b + 97 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 65 * OS1_S1 + 7);
            *(b + 65 * OS1_S1 + 31) =
                prefactor_z * *(b + 65 * OS1_S1 + 16) -
                p_over_q * *(b + 98 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 16);
            *(b + 65 * OS1_S1 + 32) = prefactor_y * *(b + 65 * OS1_S1 + 18) -
                                      p_over_q * *(b + 97 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 9);
            *(b + 65 * OS1_S1 + 33) = prefactor_y * *(b + 65 * OS1_S1 + 19) -
                                      p_over_q * *(b + 97 * OS1_S1 + 19);
            *(b + 65 * OS1_S1 + 34) =
                prefactor_z * *(b + 65 * OS1_S1 + 19) -
                p_over_q * *(b + 98 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 65 * OS1_S1 + 9);
            *(b + 66 * OS1_S1 + 20) =
                prefactor_x * *(b + 66 * OS1_S1 + 10) -
                p_over_q * *(b + 94 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 4);
            *(b + 66 * OS1_S1 + 21) =
                prefactor_y * *(b + 66 * OS1_S1 + 10) -
                p_over_q * *(b + 99 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 10);
            *(b + 66 * OS1_S1 + 22) = prefactor_z * *(b + 66 * OS1_S1 + 10) -
                                      p_over_q * *(b + 100 * OS1_S1 + 10);
            *(b + 66 * OS1_S1 + 23) =
                prefactor_x * *(b + 66 * OS1_S1 + 13) -
                p_over_q * *(b + 94 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 13) +
                one_over_two_q * *(b + 66 * OS1_S1 + 7);
            *(b + 66 * OS1_S1 + 24) = prefactor_z * *(b + 66 * OS1_S1 + 11) -
                                      p_over_q * *(b + 100 * OS1_S1 + 11);
            *(b + 66 * OS1_S1 + 25) = prefactor_z * *(b + 66 * OS1_S1 + 12) -
                                      p_over_q * *(b + 100 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 66 * OS1_S1 + 4);
            *(b + 66 * OS1_S1 + 26) =
                prefactor_x * *(b + 66 * OS1_S1 + 16) -
                p_over_q * *(b + 94 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 16);
            *(b + 66 * OS1_S1 + 27) = prefactor_z * *(b + 66 * OS1_S1 + 13) -
                                      p_over_q * *(b + 100 * OS1_S1 + 13);
            *(b + 66 * OS1_S1 + 28) =
                prefactor_x * *(b + 66 * OS1_S1 + 18) -
                p_over_q * *(b + 94 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 18);
            *(b + 66 * OS1_S1 + 29) =
                prefactor_x * *(b + 66 * OS1_S1 + 19) -
                p_over_q * *(b + 94 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 19);
            *(b + 66 * OS1_S1 + 30) =
                prefactor_y * *(b + 66 * OS1_S1 + 16) -
                p_over_q * *(b + 99 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 7);
            *(b + 66 * OS1_S1 + 31) = prefactor_z * *(b + 66 * OS1_S1 + 16) -
                                      p_over_q * *(b + 100 * OS1_S1 + 16);
            *(b + 66 * OS1_S1 + 32) = prefactor_z * *(b + 66 * OS1_S1 + 17) -
                                      p_over_q * *(b + 100 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 66 * OS1_S1 + 7);
            *(b + 66 * OS1_S1 + 33) =
                prefactor_y * *(b + 66 * OS1_S1 + 19) -
                p_over_q * *(b + 99 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 19);
            *(b + 66 * OS1_S1 + 34) =
                prefactor_z * *(b + 66 * OS1_S1 + 19) -
                p_over_q * *(b + 100 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 9);
            *(b + 67 * OS1_S1 + 20) =
                prefactor_x * *(b + 67 * OS1_S1 + 10) -
                p_over_q * *(b + 95 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 4);
            *(b + 67 * OS1_S1 + 21) =
                prefactor_y * *(b + 67 * OS1_S1 + 10) -
                p_over_q * *(b + 100 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 10);
            *(b + 67 * OS1_S1 + 22) = prefactor_z * *(b + 67 * OS1_S1 + 10) -
                                      p_over_q * *(b + 101 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 10);
            *(b + 67 * OS1_S1 + 23) =
                prefactor_x * *(b + 67 * OS1_S1 + 13) -
                p_over_q * *(b + 95 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 13) +
                one_over_two_q * *(b + 67 * OS1_S1 + 7);
            *(b + 67 * OS1_S1 + 24) = prefactor_z * *(b + 67 * OS1_S1 + 11) -
                                      p_over_q * *(b + 101 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 11);
            *(b + 67 * OS1_S1 + 25) = prefactor_z * *(b + 67 * OS1_S1 + 12) -
                                      p_over_q * *(b + 101 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 67 * OS1_S1 + 4);
            *(b + 67 * OS1_S1 + 26) =
                prefactor_x * *(b + 67 * OS1_S1 + 16) -
                p_over_q * *(b + 95 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 16);
            *(b + 67 * OS1_S1 + 27) = prefactor_z * *(b + 67 * OS1_S1 + 13) -
                                      p_over_q * *(b + 101 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 13);
            *(b + 67 * OS1_S1 + 28) =
                prefactor_x * *(b + 67 * OS1_S1 + 18) -
                p_over_q * *(b + 95 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 18);
            *(b + 67 * OS1_S1 + 29) =
                prefactor_x * *(b + 67 * OS1_S1 + 19) -
                p_over_q * *(b + 95 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 19);
            *(b + 67 * OS1_S1 + 30) =
                prefactor_y * *(b + 67 * OS1_S1 + 16) -
                p_over_q * *(b + 100 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 7);
            *(b + 67 * OS1_S1 + 31) = prefactor_z * *(b + 67 * OS1_S1 + 16) -
                                      p_over_q * *(b + 101 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 16);
            *(b + 67 * OS1_S1 + 32) = prefactor_z * *(b + 67 * OS1_S1 + 17) -
                                      p_over_q * *(b + 101 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 67 * OS1_S1 + 7);
            *(b + 67 * OS1_S1 + 33) =
                prefactor_y * *(b + 67 * OS1_S1 + 19) -
                p_over_q * *(b + 100 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 19);
            *(b + 67 * OS1_S1 + 34) =
                prefactor_z * *(b + 67 * OS1_S1 + 19) -
                p_over_q * *(b + 101 * OS1_S1 + 19) +
                one_over_two_q * *(b + 41 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 9);
            *(b + 68 * OS1_S1 + 20) =
                prefactor_x * *(b + 68 * OS1_S1 + 10) -
                p_over_q * *(b + 96 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 4);
            *(b + 68 * OS1_S1 + 21) =
                prefactor_y * *(b + 68 * OS1_S1 + 10) -
                p_over_q * *(b + 101 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 10);
            *(b + 68 * OS1_S1 + 22) =
                prefactor_z * *(b + 68 * OS1_S1 + 10) -
                p_over_q * *(b + 102 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 10);
            *(b + 68 * OS1_S1 + 23) =
                prefactor_y * *(b + 68 * OS1_S1 + 11) -
                p_over_q * *(b + 101 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 11) +
                one_over_two_q * *(b + 68 * OS1_S1 + 4);
            *(b + 68 * OS1_S1 + 24) =
                prefactor_z * *(b + 68 * OS1_S1 + 11) -
                p_over_q * *(b + 102 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 11);
            *(b + 68 * OS1_S1 + 25) =
                prefactor_z * *(b + 68 * OS1_S1 + 12) -
                p_over_q * *(b + 102 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 12) +
                one_over_two_q * *(b + 68 * OS1_S1 + 4);
            *(b + 68 * OS1_S1 + 26) =
                prefactor_x * *(b + 68 * OS1_S1 + 16) -
                p_over_q * *(b + 96 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 16);
            *(b + 68 * OS1_S1 + 27) =
                prefactor_z * *(b + 68 * OS1_S1 + 13) -
                p_over_q * *(b + 102 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 13);
            *(b + 68 * OS1_S1 + 28) =
                prefactor_y * *(b + 68 * OS1_S1 + 15) -
                p_over_q * *(b + 101 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 15);
            *(b + 68 * OS1_S1 + 29) =
                prefactor_x * *(b + 68 * OS1_S1 + 19) -
                p_over_q * *(b + 96 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 19);
            *(b + 68 * OS1_S1 + 30) =
                prefactor_y * *(b + 68 * OS1_S1 + 16) -
                p_over_q * *(b + 101 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 7);
            *(b + 68 * OS1_S1 + 31) =
                prefactor_z * *(b + 68 * OS1_S1 + 16) -
                p_over_q * *(b + 102 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 16);
            *(b + 68 * OS1_S1 + 32) =
                prefactor_z * *(b + 68 * OS1_S1 + 17) -
                p_over_q * *(b + 102 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 17) +
                one_over_two_q * *(b + 68 * OS1_S1 + 7);
            *(b + 68 * OS1_S1 + 33) =
                prefactor_y * *(b + 68 * OS1_S1 + 19) -
                p_over_q * *(b + 101 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 19);
            *(b + 68 * OS1_S1 + 34) =
                prefactor_z * *(b + 68 * OS1_S1 + 19) -
                p_over_q * *(b + 102 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 9);
            *(b + 69 * OS1_S1 + 20) =
                prefactor_x * *(b + 69 * OS1_S1 + 10) -
                p_over_q * *(b + 97 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 4);
            *(b + 69 * OS1_S1 + 21) = prefactor_y * *(b + 69 * OS1_S1 + 10) -
                                      p_over_q * *(b + 102 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 10);
            *(b + 69 * OS1_S1 + 22) =
                prefactor_z * *(b + 69 * OS1_S1 + 10) -
                p_over_q * *(b + 103 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 10);
            *(b + 69 * OS1_S1 + 23) = prefactor_y * *(b + 69 * OS1_S1 + 11) -
                                      p_over_q * *(b + 102 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 69 * OS1_S1 + 4);
            *(b + 69 * OS1_S1 + 24) = prefactor_y * *(b + 69 * OS1_S1 + 12) -
                                      p_over_q * *(b + 102 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 12);
            *(b + 69 * OS1_S1 + 25) =
                prefactor_x * *(b + 69 * OS1_S1 + 15) -
                p_over_q * *(b + 97 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 15) +
                one_over_two_q * *(b + 69 * OS1_S1 + 9);
            *(b + 69 * OS1_S1 + 26) =
                prefactor_x * *(b + 69 * OS1_S1 + 16) -
                p_over_q * *(b + 97 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 16);
            *(b + 69 * OS1_S1 + 27) =
                prefactor_x * *(b + 69 * OS1_S1 + 17) -
                p_over_q * *(b + 97 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 17);
            *(b + 69 * OS1_S1 + 28) = prefactor_y * *(b + 69 * OS1_S1 + 15) -
                                      p_over_q * *(b + 102 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 15);
            *(b + 69 * OS1_S1 + 29) =
                prefactor_x * *(b + 69 * OS1_S1 + 19) -
                p_over_q * *(b + 97 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 19);
            *(b + 69 * OS1_S1 + 30) =
                prefactor_y * *(b + 69 * OS1_S1 + 16) -
                p_over_q * *(b + 102 * OS1_S1 + 16) +
                one_over_two_q * *(b + 44 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 7);
            *(b + 69 * OS1_S1 + 31) =
                prefactor_z * *(b + 69 * OS1_S1 + 16) -
                p_over_q * *(b + 103 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 16);
            *(b + 69 * OS1_S1 + 32) = prefactor_y * *(b + 69 * OS1_S1 + 18) -
                                      p_over_q * *(b + 102 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 69 * OS1_S1 + 9);
            *(b + 69 * OS1_S1 + 33) = prefactor_y * *(b + 69 * OS1_S1 + 19) -
                                      p_over_q * *(b + 102 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 19);
            *(b + 69 * OS1_S1 + 34) =
                prefactor_z * *(b + 69 * OS1_S1 + 19) -
                p_over_q * *(b + 103 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 9);
            *(b + 70 * OS1_S1 + 20) =
                prefactor_x * *(b + 70 * OS1_S1 + 10) -
                p_over_q * *(b + 98 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 4);
            *(b + 70 * OS1_S1 + 21) = prefactor_y * *(b + 70 * OS1_S1 + 10) -
                                      p_over_q * *(b + 103 * OS1_S1 + 10);
            *(b + 70 * OS1_S1 + 22) =
                prefactor_z * *(b + 70 * OS1_S1 + 10) -
                p_over_q * *(b + 104 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 10);
            *(b + 70 * OS1_S1 + 23) = prefactor_y * *(b + 70 * OS1_S1 + 11) -
                                      p_over_q * *(b + 103 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 70 * OS1_S1 + 4);
            *(b + 70 * OS1_S1 + 24) = prefactor_y * *(b + 70 * OS1_S1 + 12) -
                                      p_over_q * *(b + 103 * OS1_S1 + 12);
            *(b + 70 * OS1_S1 + 25) =
                prefactor_x * *(b + 70 * OS1_S1 + 15) -
                p_over_q * *(b + 98 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 15) +
                one_over_two_q * *(b + 70 * OS1_S1 + 9);
            *(b + 70 * OS1_S1 + 26) =
                prefactor_x * *(b + 70 * OS1_S1 + 16) -
                p_over_q * *(b + 98 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 16);
            *(b + 70 * OS1_S1 + 27) =
                prefactor_x * *(b + 70 * OS1_S1 + 17) -
                p_over_q * *(b + 98 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 17);
            *(b + 70 * OS1_S1 + 28) = prefactor_y * *(b + 70 * OS1_S1 + 15) -
                                      p_over_q * *(b + 103 * OS1_S1 + 15);
            *(b + 70 * OS1_S1 + 29) =
                prefactor_x * *(b + 70 * OS1_S1 + 19) -
                p_over_q * *(b + 98 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 19);
            *(b + 70 * OS1_S1 + 30) =
                prefactor_y * *(b + 70 * OS1_S1 + 16) -
                p_over_q * *(b + 103 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 7);
            *(b + 70 * OS1_S1 + 31) =
                prefactor_z * *(b + 70 * OS1_S1 + 16) -
                p_over_q * *(b + 104 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 16);
            *(b + 70 * OS1_S1 + 32) = prefactor_y * *(b + 70 * OS1_S1 + 18) -
                                      p_over_q * *(b + 103 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 70 * OS1_S1 + 9);
            *(b + 70 * OS1_S1 + 33) = prefactor_y * *(b + 70 * OS1_S1 + 19) -
                                      p_over_q * *(b + 103 * OS1_S1 + 19);
            *(b + 70 * OS1_S1 + 34) =
                prefactor_z * *(b + 70 * OS1_S1 + 19) -
                p_over_q * *(b + 104 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 9);
            *(b + 71 * OS1_S1 + 20) =
                prefactor_x * *(b + 71 * OS1_S1 + 10) -
                p_over_q * *(b + 99 * OS1_S1 + 10) +
                one_over_two_q * *(b + 50 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 71 * OS1_S1 + 4);
            *(b + 71 * OS1_S1 + 21) =
                prefactor_y * *(b + 71 * OS1_S1 + 10) -
                p_over_q * *(b + 105 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 10);
            *(b + 71 * OS1_S1 + 22) = prefactor_z * *(b + 71 * OS1_S1 + 10) -
                                      p_over_q * *(b + 106 * OS1_S1 + 10);
            *(b + 71 * OS1_S1 + 23) = prefactor_x * *(b + 71 * OS1_S1 + 13) -
                                      p_over_q * *(b + 99 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 7);
            *(b + 71 * OS1_S1 + 24) = prefactor_z * *(b + 71 * OS1_S1 + 11) -
                                      p_over_q * *(b + 106 * OS1_S1 + 11);
            *(b + 71 * OS1_S1 + 25) = prefactor_z * *(b + 71 * OS1_S1 + 12) -
                                      p_over_q * *(b + 106 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 4);
            *(b + 71 * OS1_S1 + 26) = prefactor_x * *(b + 71 * OS1_S1 + 16) -
                                      p_over_q * *(b + 99 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 16);
            *(b + 71 * OS1_S1 + 27) = prefactor_z * *(b + 71 * OS1_S1 + 13) -
                                      p_over_q * *(b + 106 * OS1_S1 + 13);
            *(b + 71 * OS1_S1 + 28) = prefactor_x * *(b + 71 * OS1_S1 + 18) -
                                      p_over_q * *(b + 99 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 18);
            *(b + 71 * OS1_S1 + 29) = prefactor_x * *(b + 71 * OS1_S1 + 19) -
                                      p_over_q * *(b + 99 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 19);
            *(b + 71 * OS1_S1 + 30) =
                prefactor_y * *(b + 71 * OS1_S1 + 16) -
                p_over_q * *(b + 105 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 71 * OS1_S1 + 7);
            *(b + 71 * OS1_S1 + 31) = prefactor_z * *(b + 71 * OS1_S1 + 16) -
                                      p_over_q * *(b + 106 * OS1_S1 + 16);
            *(b + 71 * OS1_S1 + 32) = prefactor_z * *(b + 71 * OS1_S1 + 17) -
                                      p_over_q * *(b + 106 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 7);
            *(b + 71 * OS1_S1 + 33) =
                prefactor_y * *(b + 71 * OS1_S1 + 19) -
                p_over_q * *(b + 105 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 19);
            *(b + 71 * OS1_S1 + 34) =
                prefactor_z * *(b + 71 * OS1_S1 + 19) -
                p_over_q * *(b + 106 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 71 * OS1_S1 + 9);
            *(b + 72 * OS1_S1 + 20) =
                prefactor_x * *(b + 72 * OS1_S1 + 10) -
                p_over_q * *(b + 100 * OS1_S1 + 10) +
                one_over_two_q * *(b + 51 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 72 * OS1_S1 + 4);
            *(b + 72 * OS1_S1 + 21) =
                prefactor_y * *(b + 72 * OS1_S1 + 10) -
                p_over_q * *(b + 106 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 10);
            *(b + 72 * OS1_S1 + 22) = prefactor_z * *(b + 72 * OS1_S1 + 10) -
                                      p_over_q * *(b + 107 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 10);
            *(b + 72 * OS1_S1 + 23) = prefactor_x * *(b + 72 * OS1_S1 + 13) -
                                      p_over_q * *(b + 100 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 7);
            *(b + 72 * OS1_S1 + 24) = prefactor_z * *(b + 72 * OS1_S1 + 11) -
                                      p_over_q * *(b + 107 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 11);
            *(b + 72 * OS1_S1 + 25) = prefactor_z * *(b + 72 * OS1_S1 + 12) -
                                      p_over_q * *(b + 107 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 4);
            *(b + 72 * OS1_S1 + 26) = prefactor_x * *(b + 72 * OS1_S1 + 16) -
                                      p_over_q * *(b + 100 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 16);
            *(b + 72 * OS1_S1 + 27) = prefactor_z * *(b + 72 * OS1_S1 + 13) -
                                      p_over_q * *(b + 107 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 13);
            *(b + 72 * OS1_S1 + 28) = prefactor_x * *(b + 72 * OS1_S1 + 18) -
                                      p_over_q * *(b + 100 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 18);
            *(b + 72 * OS1_S1 + 29) = prefactor_x * *(b + 72 * OS1_S1 + 19) -
                                      p_over_q * *(b + 100 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 19);
            *(b + 72 * OS1_S1 + 30) =
                prefactor_y * *(b + 72 * OS1_S1 + 16) -
                p_over_q * *(b + 106 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 72 * OS1_S1 + 7);
            *(b + 72 * OS1_S1 + 31) = prefactor_z * *(b + 72 * OS1_S1 + 16) -
                                      p_over_q * *(b + 107 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 16);
            *(b + 72 * OS1_S1 + 32) = prefactor_z * *(b + 72 * OS1_S1 + 17) -
                                      p_over_q * *(b + 107 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 7);
            *(b + 72 * OS1_S1 + 33) =
                prefactor_y * *(b + 72 * OS1_S1 + 19) -
                p_over_q * *(b + 106 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 19);
            *(b + 72 * OS1_S1 + 34) =
                prefactor_z * *(b + 72 * OS1_S1 + 19) -
                p_over_q * *(b + 107 * OS1_S1 + 19) +
                one_over_two_q * *(b + 45 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 72 * OS1_S1 + 9);
            *(b + 73 * OS1_S1 + 20) =
                prefactor_x * *(b + 73 * OS1_S1 + 10) -
                p_over_q * *(b + 101 * OS1_S1 + 10) +
                one_over_two_q * *(b + 52 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 4);
            *(b + 73 * OS1_S1 + 21) =
                prefactor_y * *(b + 73 * OS1_S1 + 10) -
                p_over_q * *(b + 107 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 10);
            *(b + 73 * OS1_S1 + 22) =
                prefactor_z * *(b + 73 * OS1_S1 + 10) -
                p_over_q * *(b + 108 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 10);
            *(b + 73 * OS1_S1 + 23) = prefactor_x * *(b + 73 * OS1_S1 + 13) -
                                      p_over_q * *(b + 101 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 73 * OS1_S1 + 7);
            *(b + 73 * OS1_S1 + 24) =
                prefactor_z * *(b + 73 * OS1_S1 + 11) -
                p_over_q * *(b + 108 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 11);
            *(b + 73 * OS1_S1 + 25) = prefactor_x * *(b + 73 * OS1_S1 + 15) -
                                      p_over_q * *(b + 101 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 73 * OS1_S1 + 9);
            *(b + 73 * OS1_S1 + 26) = prefactor_x * *(b + 73 * OS1_S1 + 16) -
                                      p_over_q * *(b + 101 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 16);
            *(b + 73 * OS1_S1 + 27) = prefactor_x * *(b + 73 * OS1_S1 + 17) -
                                      p_over_q * *(b + 101 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 17);
            *(b + 73 * OS1_S1 + 28) = prefactor_x * *(b + 73 * OS1_S1 + 18) -
                                      p_over_q * *(b + 101 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 18);
            *(b + 73 * OS1_S1 + 29) = prefactor_x * *(b + 73 * OS1_S1 + 19) -
                                      p_over_q * *(b + 101 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 19);
            *(b + 73 * OS1_S1 + 30) =
                prefactor_y * *(b + 73 * OS1_S1 + 16) -
                p_over_q * *(b + 107 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 7);
            *(b + 73 * OS1_S1 + 31) =
                prefactor_z * *(b + 73 * OS1_S1 + 16) -
                p_over_q * *(b + 108 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 16);
            *(b + 73 * OS1_S1 + 32) =
                prefactor_z * *(b + 73 * OS1_S1 + 17) -
                p_over_q * *(b + 108 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 17) +
                one_over_two_q * *(b + 73 * OS1_S1 + 7);
            *(b + 73 * OS1_S1 + 33) =
                prefactor_y * *(b + 73 * OS1_S1 + 19) -
                p_over_q * *(b + 107 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 19);
            *(b + 73 * OS1_S1 + 34) =
                prefactor_z * *(b + 73 * OS1_S1 + 19) -
                p_over_q * *(b + 108 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 9);
            *(b + 74 * OS1_S1 + 20) =
                prefactor_x * *(b + 74 * OS1_S1 + 10) -
                p_over_q * *(b + 102 * OS1_S1 + 10) +
                one_over_two_q * *(b + 53 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 4);
            *(b + 74 * OS1_S1 + 21) =
                prefactor_y * *(b + 74 * OS1_S1 + 10) -
                p_over_q * *(b + 108 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 10);
            *(b + 74 * OS1_S1 + 22) =
                prefactor_z * *(b + 74 * OS1_S1 + 10) -
                p_over_q * *(b + 109 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 10);
            *(b + 74 * OS1_S1 + 23) = prefactor_x * *(b + 74 * OS1_S1 + 13) -
                                      p_over_q * *(b + 102 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 74 * OS1_S1 + 7);
            *(b + 74 * OS1_S1 + 24) =
                prefactor_y * *(b + 74 * OS1_S1 + 12) -
                p_over_q * *(b + 108 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 12);
            *(b + 74 * OS1_S1 + 25) = prefactor_x * *(b + 74 * OS1_S1 + 15) -
                                      p_over_q * *(b + 102 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 74 * OS1_S1 + 9);
            *(b + 74 * OS1_S1 + 26) = prefactor_x * *(b + 74 * OS1_S1 + 16) -
                                      p_over_q * *(b + 102 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 16);
            *(b + 74 * OS1_S1 + 27) = prefactor_x * *(b + 74 * OS1_S1 + 17) -
                                      p_over_q * *(b + 102 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 17);
            *(b + 74 * OS1_S1 + 28) = prefactor_x * *(b + 74 * OS1_S1 + 18) -
                                      p_over_q * *(b + 102 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 18);
            *(b + 74 * OS1_S1 + 29) = prefactor_x * *(b + 74 * OS1_S1 + 19) -
                                      p_over_q * *(b + 102 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 19);
            *(b + 74 * OS1_S1 + 30) =
                prefactor_y * *(b + 74 * OS1_S1 + 16) -
                p_over_q * *(b + 108 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 7);
            *(b + 74 * OS1_S1 + 31) =
                prefactor_z * *(b + 74 * OS1_S1 + 16) -
                p_over_q * *(b + 109 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 16);
            *(b + 74 * OS1_S1 + 32) =
                prefactor_y * *(b + 74 * OS1_S1 + 18) -
                p_over_q * *(b + 108 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 18) +
                one_over_two_q * *(b + 74 * OS1_S1 + 9);
            *(b + 74 * OS1_S1 + 33) =
                prefactor_y * *(b + 74 * OS1_S1 + 19) -
                p_over_q * *(b + 108 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 19);
            *(b + 74 * OS1_S1 + 34) =
                prefactor_z * *(b + 74 * OS1_S1 + 19) -
                p_over_q * *(b + 109 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 9);
            *(b + 75 * OS1_S1 + 20) =
                prefactor_x * *(b + 75 * OS1_S1 + 10) -
                p_over_q * *(b + 103 * OS1_S1 + 10) +
                one_over_two_q * *(b + 54 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 75 * OS1_S1 + 4);
            *(b + 75 * OS1_S1 + 21) = prefactor_y * *(b + 75 * OS1_S1 + 10) -
                                      p_over_q * *(b + 109 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 10);
            *(b + 75 * OS1_S1 + 22) =
                prefactor_z * *(b + 75 * OS1_S1 + 10) -
                p_over_q * *(b + 110 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 10);
            *(b + 75 * OS1_S1 + 23) = prefactor_y * *(b + 75 * OS1_S1 + 11) -
                                      p_over_q * *(b + 109 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 4);
            *(b + 75 * OS1_S1 + 24) = prefactor_y * *(b + 75 * OS1_S1 + 12) -
                                      p_over_q * *(b + 109 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 12);
            *(b + 75 * OS1_S1 + 25) = prefactor_x * *(b + 75 * OS1_S1 + 15) -
                                      p_over_q * *(b + 103 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 9);
            *(b + 75 * OS1_S1 + 26) = prefactor_x * *(b + 75 * OS1_S1 + 16) -
                                      p_over_q * *(b + 103 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 16);
            *(b + 75 * OS1_S1 + 27) = prefactor_x * *(b + 75 * OS1_S1 + 17) -
                                      p_over_q * *(b + 103 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 17);
            *(b + 75 * OS1_S1 + 28) = prefactor_y * *(b + 75 * OS1_S1 + 15) -
                                      p_over_q * *(b + 109 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 15);
            *(b + 75 * OS1_S1 + 29) = prefactor_x * *(b + 75 * OS1_S1 + 19) -
                                      p_over_q * *(b + 103 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 19);
            *(b + 75 * OS1_S1 + 30) =
                prefactor_y * *(b + 75 * OS1_S1 + 16) -
                p_over_q * *(b + 109 * OS1_S1 + 16) +
                one_over_two_q * *(b + 49 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 75 * OS1_S1 + 7);
            *(b + 75 * OS1_S1 + 31) =
                prefactor_z * *(b + 75 * OS1_S1 + 16) -
                p_over_q * *(b + 110 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 16);
            *(b + 75 * OS1_S1 + 32) = prefactor_y * *(b + 75 * OS1_S1 + 18) -
                                      p_over_q * *(b + 109 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 9);
            *(b + 75 * OS1_S1 + 33) = prefactor_y * *(b + 75 * OS1_S1 + 19) -
                                      p_over_q * *(b + 109 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 19);
            *(b + 75 * OS1_S1 + 34) =
                prefactor_z * *(b + 75 * OS1_S1 + 19) -
                p_over_q * *(b + 110 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 75 * OS1_S1 + 9);
            *(b + 76 * OS1_S1 + 20) =
                prefactor_x * *(b + 76 * OS1_S1 + 10) -
                p_over_q * *(b + 104 * OS1_S1 + 10) +
                one_over_two_q * *(b + 55 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 76 * OS1_S1 + 4);
            *(b + 76 * OS1_S1 + 21) = prefactor_y * *(b + 76 * OS1_S1 + 10) -
                                      p_over_q * *(b + 110 * OS1_S1 + 10);
            *(b + 76 * OS1_S1 + 22) =
                prefactor_z * *(b + 76 * OS1_S1 + 10) -
                p_over_q * *(b + 111 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 10);
            *(b + 76 * OS1_S1 + 23) = prefactor_y * *(b + 76 * OS1_S1 + 11) -
                                      p_over_q * *(b + 110 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 4);
            *(b + 76 * OS1_S1 + 24) = prefactor_y * *(b + 76 * OS1_S1 + 12) -
                                      p_over_q * *(b + 110 * OS1_S1 + 12);
            *(b + 76 * OS1_S1 + 25) = prefactor_x * *(b + 76 * OS1_S1 + 15) -
                                      p_over_q * *(b + 104 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 9);
            *(b + 76 * OS1_S1 + 26) = prefactor_x * *(b + 76 * OS1_S1 + 16) -
                                      p_over_q * *(b + 104 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 16);
            *(b + 76 * OS1_S1 + 27) = prefactor_x * *(b + 76 * OS1_S1 + 17) -
                                      p_over_q * *(b + 104 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 17);
            *(b + 76 * OS1_S1 + 28) = prefactor_y * *(b + 76 * OS1_S1 + 15) -
                                      p_over_q * *(b + 110 * OS1_S1 + 15);
            *(b + 76 * OS1_S1 + 29) = prefactor_x * *(b + 76 * OS1_S1 + 19) -
                                      p_over_q * *(b + 104 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 19);
            *(b + 76 * OS1_S1 + 30) =
                prefactor_y * *(b + 76 * OS1_S1 + 16) -
                p_over_q * *(b + 110 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 76 * OS1_S1 + 7);
            *(b + 76 * OS1_S1 + 31) =
                prefactor_z * *(b + 76 * OS1_S1 + 16) -
                p_over_q * *(b + 111 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 16);
            *(b + 76 * OS1_S1 + 32) = prefactor_y * *(b + 76 * OS1_S1 + 18) -
                                      p_over_q * *(b + 110 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 9);
            *(b + 76 * OS1_S1 + 33) = prefactor_y * *(b + 76 * OS1_S1 + 19) -
                                      p_over_q * *(b + 110 * OS1_S1 + 19);
            *(b + 76 * OS1_S1 + 34) =
                prefactor_z * *(b + 76 * OS1_S1 + 19) -
                p_over_q * *(b + 111 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 76 * OS1_S1 + 9);
            *(b + 77 * OS1_S1 + 20) =
                prefactor_x * *(b + 77 * OS1_S1 + 10) -
                p_over_q * *(b + 105 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 77 * OS1_S1 + 4);
            *(b + 77 * OS1_S1 + 21) =
                prefactor_y * *(b + 77 * OS1_S1 + 10) -
                p_over_q * *(b + 112 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 10);
            *(b + 77 * OS1_S1 + 22) = prefactor_z * *(b + 77 * OS1_S1 + 10) -
                                      p_over_q * *(b + 113 * OS1_S1 + 10);
            *(b + 77 * OS1_S1 + 23) = prefactor_x * *(b + 77 * OS1_S1 + 13) -
                                      p_over_q * *(b + 105 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 7);
            *(b + 77 * OS1_S1 + 24) = prefactor_z * *(b + 77 * OS1_S1 + 11) -
                                      p_over_q * *(b + 113 * OS1_S1 + 11);
            *(b + 77 * OS1_S1 + 25) = prefactor_z * *(b + 77 * OS1_S1 + 12) -
                                      p_over_q * *(b + 113 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 4);
            *(b + 77 * OS1_S1 + 26) = prefactor_x * *(b + 77 * OS1_S1 + 16) -
                                      p_over_q * *(b + 105 * OS1_S1 + 16);
            *(b + 77 * OS1_S1 + 27) = prefactor_z * *(b + 77 * OS1_S1 + 13) -
                                      p_over_q * *(b + 113 * OS1_S1 + 13);
            *(b + 77 * OS1_S1 + 28) = prefactor_x * *(b + 77 * OS1_S1 + 18) -
                                      p_over_q * *(b + 105 * OS1_S1 + 18);
            *(b + 77 * OS1_S1 + 29) = prefactor_x * *(b + 77 * OS1_S1 + 19) -
                                      p_over_q * *(b + 105 * OS1_S1 + 19);
            *(b + 77 * OS1_S1 + 30) =
                prefactor_y * *(b + 77 * OS1_S1 + 16) -
                p_over_q * *(b + 112 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 77 * OS1_S1 + 7);
            *(b + 77 * OS1_S1 + 31) = prefactor_z * *(b + 77 * OS1_S1 + 16) -
                                      p_over_q * *(b + 113 * OS1_S1 + 16);
            *(b + 77 * OS1_S1 + 32) = prefactor_z * *(b + 77 * OS1_S1 + 17) -
                                      p_over_q * *(b + 113 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 7);
            *(b + 77 * OS1_S1 + 33) =
                prefactor_y * *(b + 77 * OS1_S1 + 19) -
                p_over_q * *(b + 112 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 19);
            *(b + 77 * OS1_S1 + 34) =
                prefactor_z * *(b + 77 * OS1_S1 + 19) -
                p_over_q * *(b + 113 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 77 * OS1_S1 + 9);
            *(b + 78 * OS1_S1 + 20) =
                prefactor_x * *(b + 78 * OS1_S1 + 10) -
                p_over_q * *(b + 106 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 78 * OS1_S1 + 4);
            *(b + 78 * OS1_S1 + 21) =
                prefactor_y * *(b + 78 * OS1_S1 + 10) -
                p_over_q * *(b + 113 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 10);
            *(b + 78 * OS1_S1 + 22) = prefactor_z * *(b + 78 * OS1_S1 + 10) -
                                      p_over_q * *(b + 114 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 10);
            *(b + 78 * OS1_S1 + 23) = prefactor_x * *(b + 78 * OS1_S1 + 13) -
                                      p_over_q * *(b + 106 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 7);
            *(b + 78 * OS1_S1 + 24) = prefactor_z * *(b + 78 * OS1_S1 + 11) -
                                      p_over_q * *(b + 114 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 11);
            *(b + 78 * OS1_S1 + 25) = prefactor_x * *(b + 78 * OS1_S1 + 15) -
                                      p_over_q * *(b + 106 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 9);
            *(b + 78 * OS1_S1 + 26) = prefactor_x * *(b + 78 * OS1_S1 + 16) -
                                      p_over_q * *(b + 106 * OS1_S1 + 16);
            *(b + 78 * OS1_S1 + 27) = prefactor_x * *(b + 78 * OS1_S1 + 17) -
                                      p_over_q * *(b + 106 * OS1_S1 + 17);
            *(b + 78 * OS1_S1 + 28) = prefactor_x * *(b + 78 * OS1_S1 + 18) -
                                      p_over_q * *(b + 106 * OS1_S1 + 18);
            *(b + 78 * OS1_S1 + 29) = prefactor_x * *(b + 78 * OS1_S1 + 19) -
                                      p_over_q * *(b + 106 * OS1_S1 + 19);
            *(b + 78 * OS1_S1 + 30) =
                prefactor_y * *(b + 78 * OS1_S1 + 16) -
                p_over_q * *(b + 113 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 78 * OS1_S1 + 7);
            *(b + 78 * OS1_S1 + 31) = prefactor_z * *(b + 78 * OS1_S1 + 16) -
                                      p_over_q * *(b + 114 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 16);
            *(b + 78 * OS1_S1 + 32) = prefactor_z * *(b + 78 * OS1_S1 + 17) -
                                      p_over_q * *(b + 114 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 7);
            *(b + 78 * OS1_S1 + 33) =
                prefactor_y * *(b + 78 * OS1_S1 + 19) -
                p_over_q * *(b + 113 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 19);
            *(b + 78 * OS1_S1 + 34) =
                prefactor_z * *(b + 78 * OS1_S1 + 19) -
                p_over_q * *(b + 114 * OS1_S1 + 19) +
                one_over_two_q * *(b + 50 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 78 * OS1_S1 + 9);
            *(b + 79 * OS1_S1 + 20) =
                prefactor_x * *(b + 79 * OS1_S1 + 10) -
                p_over_q * *(b + 107 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 4);
            *(b + 79 * OS1_S1 + 21) =
                prefactor_y * *(b + 79 * OS1_S1 + 10) -
                p_over_q * *(b + 114 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 10);
            *(b + 79 * OS1_S1 + 22) =
                prefactor_z * *(b + 79 * OS1_S1 + 10) -
                p_over_q * *(b + 115 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 10);
            *(b + 79 * OS1_S1 + 23) = prefactor_x * *(b + 79 * OS1_S1 + 13) -
                                      p_over_q * *(b + 107 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 79 * OS1_S1 + 7);
            *(b + 79 * OS1_S1 + 24) =
                prefactor_z * *(b + 79 * OS1_S1 + 11) -
                p_over_q * *(b + 115 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 11);
            *(b + 79 * OS1_S1 + 25) = prefactor_x * *(b + 79 * OS1_S1 + 15) -
                                      p_over_q * *(b + 107 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 79 * OS1_S1 + 9);
            *(b + 79 * OS1_S1 + 26) = prefactor_x * *(b + 79 * OS1_S1 + 16) -
                                      p_over_q * *(b + 107 * OS1_S1 + 16);
            *(b + 79 * OS1_S1 + 27) = prefactor_x * *(b + 79 * OS1_S1 + 17) -
                                      p_over_q * *(b + 107 * OS1_S1 + 17);
            *(b + 79 * OS1_S1 + 28) = prefactor_x * *(b + 79 * OS1_S1 + 18) -
                                      p_over_q * *(b + 107 * OS1_S1 + 18);
            *(b + 79 * OS1_S1 + 29) = prefactor_x * *(b + 79 * OS1_S1 + 19) -
                                      p_over_q * *(b + 107 * OS1_S1 + 19);
            *(b + 79 * OS1_S1 + 30) =
                prefactor_y * *(b + 79 * OS1_S1 + 16) -
                p_over_q * *(b + 114 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 7);
            *(b + 79 * OS1_S1 + 31) =
                prefactor_z * *(b + 79 * OS1_S1 + 16) -
                p_over_q * *(b + 115 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 16);
            *(b + 79 * OS1_S1 + 32) =
                prefactor_z * *(b + 79 * OS1_S1 + 17) -
                p_over_q * *(b + 115 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 17) +
                one_over_two_q * *(b + 79 * OS1_S1 + 7);
            *(b + 79 * OS1_S1 + 33) =
                prefactor_y * *(b + 79 * OS1_S1 + 19) -
                p_over_q * *(b + 114 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 19);
            *(b + 79 * OS1_S1 + 34) =
                prefactor_z * *(b + 79 * OS1_S1 + 19) -
                p_over_q * *(b + 115 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 9);
            *(b + 80 * OS1_S1 + 20) =
                prefactor_x * *(b + 80 * OS1_S1 + 10) -
                p_over_q * *(b + 108 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 80 * OS1_S1 + 4);
            *(b + 80 * OS1_S1 + 21) =
                prefactor_y * *(b + 80 * OS1_S1 + 10) -
                p_over_q * *(b + 115 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 10);
            *(b + 80 * OS1_S1 + 22) =
                prefactor_z * *(b + 80 * OS1_S1 + 10) -
                p_over_q * *(b + 116 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 10);
            *(b + 80 * OS1_S1 + 23) = prefactor_x * *(b + 80 * OS1_S1 + 13) -
                                      p_over_q * *(b + 108 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 80 * OS1_S1 + 7);
            *(b + 80 * OS1_S1 + 24) =
                prefactor_z * *(b + 80 * OS1_S1 + 11) -
                p_over_q * *(b + 116 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 11);
            *(b + 80 * OS1_S1 + 25) = prefactor_x * *(b + 80 * OS1_S1 + 15) -
                                      p_over_q * *(b + 108 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 80 * OS1_S1 + 9);
            *(b + 80 * OS1_S1 + 26) = prefactor_x * *(b + 80 * OS1_S1 + 16) -
                                      p_over_q * *(b + 108 * OS1_S1 + 16);
            *(b + 80 * OS1_S1 + 27) = prefactor_x * *(b + 80 * OS1_S1 + 17) -
                                      p_over_q * *(b + 108 * OS1_S1 + 17);
            *(b + 80 * OS1_S1 + 28) = prefactor_x * *(b + 80 * OS1_S1 + 18) -
                                      p_over_q * *(b + 108 * OS1_S1 + 18);
            *(b + 80 * OS1_S1 + 29) = prefactor_x * *(b + 80 * OS1_S1 + 19) -
                                      p_over_q * *(b + 108 * OS1_S1 + 19);
            *(b + 80 * OS1_S1 + 30) =
                prefactor_y * *(b + 80 * OS1_S1 + 16) -
                p_over_q * *(b + 115 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 80 * OS1_S1 + 7);
            *(b + 80 * OS1_S1 + 31) =
                prefactor_z * *(b + 80 * OS1_S1 + 16) -
                p_over_q * *(b + 116 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 16);
            *(b + 80 * OS1_S1 + 32) =
                prefactor_z * *(b + 80 * OS1_S1 + 17) -
                p_over_q * *(b + 116 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 17) +
                one_over_two_q * *(b + 80 * OS1_S1 + 7);
            *(b + 80 * OS1_S1 + 33) =
                prefactor_y * *(b + 80 * OS1_S1 + 19) -
                p_over_q * *(b + 115 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 19);
            *(b + 80 * OS1_S1 + 34) =
                prefactor_z * *(b + 80 * OS1_S1 + 19) -
                p_over_q * *(b + 116 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 80 * OS1_S1 + 9);
            *(b + 81 * OS1_S1 + 20) =
                prefactor_x * *(b + 81 * OS1_S1 + 10) -
                p_over_q * *(b + 109 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 4);
            *(b + 81 * OS1_S1 + 21) =
                prefactor_y * *(b + 81 * OS1_S1 + 10) -
                p_over_q * *(b + 116 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 10);
            *(b + 81 * OS1_S1 + 22) =
                prefactor_z * *(b + 81 * OS1_S1 + 10) -
                p_over_q * *(b + 117 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 10);
            *(b + 81 * OS1_S1 + 23) = prefactor_x * *(b + 81 * OS1_S1 + 13) -
                                      p_over_q * *(b + 109 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 81 * OS1_S1 + 7);
            *(b + 81 * OS1_S1 + 24) =
                prefactor_y * *(b + 81 * OS1_S1 + 12) -
                p_over_q * *(b + 116 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 12);
            *(b + 81 * OS1_S1 + 25) = prefactor_x * *(b + 81 * OS1_S1 + 15) -
                                      p_over_q * *(b + 109 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 81 * OS1_S1 + 9);
            *(b + 81 * OS1_S1 + 26) = prefactor_x * *(b + 81 * OS1_S1 + 16) -
                                      p_over_q * *(b + 109 * OS1_S1 + 16);
            *(b + 81 * OS1_S1 + 27) = prefactor_x * *(b + 81 * OS1_S1 + 17) -
                                      p_over_q * *(b + 109 * OS1_S1 + 17);
            *(b + 81 * OS1_S1 + 28) = prefactor_x * *(b + 81 * OS1_S1 + 18) -
                                      p_over_q * *(b + 109 * OS1_S1 + 18);
            *(b + 81 * OS1_S1 + 29) = prefactor_x * *(b + 81 * OS1_S1 + 19) -
                                      p_over_q * *(b + 109 * OS1_S1 + 19);
            *(b + 81 * OS1_S1 + 30) =
                prefactor_y * *(b + 81 * OS1_S1 + 16) -
                p_over_q * *(b + 116 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 7);
            *(b + 81 * OS1_S1 + 31) =
                prefactor_z * *(b + 81 * OS1_S1 + 16) -
                p_over_q * *(b + 117 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 16);
            *(b + 81 * OS1_S1 + 32) =
                prefactor_y * *(b + 81 * OS1_S1 + 18) -
                p_over_q * *(b + 116 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 18) +
                one_over_two_q * *(b + 81 * OS1_S1 + 9);
            *(b + 81 * OS1_S1 + 33) =
                prefactor_y * *(b + 81 * OS1_S1 + 19) -
                p_over_q * *(b + 116 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 19);
            *(b + 81 * OS1_S1 + 34) =
                prefactor_z * *(b + 81 * OS1_S1 + 19) -
                p_over_q * *(b + 117 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 9);
            *(b + 82 * OS1_S1 + 20) =
                prefactor_x * *(b + 82 * OS1_S1 + 10) -
                p_over_q * *(b + 110 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 82 * OS1_S1 + 4);
            *(b + 82 * OS1_S1 + 21) = prefactor_y * *(b + 82 * OS1_S1 + 10) -
                                      p_over_q * *(b + 117 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 10);
            *(b + 82 * OS1_S1 + 22) =
                prefactor_z * *(b + 82 * OS1_S1 + 10) -
                p_over_q * *(b + 118 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 10);
            *(b + 82 * OS1_S1 + 23) = prefactor_x * *(b + 82 * OS1_S1 + 13) -
                                      p_over_q * *(b + 110 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 7);
            *(b + 82 * OS1_S1 + 24) = prefactor_y * *(b + 82 * OS1_S1 + 12) -
                                      p_over_q * *(b + 117 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 12);
            *(b + 82 * OS1_S1 + 25) = prefactor_x * *(b + 82 * OS1_S1 + 15) -
                                      p_over_q * *(b + 110 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 9);
            *(b + 82 * OS1_S1 + 26) = prefactor_x * *(b + 82 * OS1_S1 + 16) -
                                      p_over_q * *(b + 110 * OS1_S1 + 16);
            *(b + 82 * OS1_S1 + 27) = prefactor_x * *(b + 82 * OS1_S1 + 17) -
                                      p_over_q * *(b + 110 * OS1_S1 + 17);
            *(b + 82 * OS1_S1 + 28) = prefactor_x * *(b + 82 * OS1_S1 + 18) -
                                      p_over_q * *(b + 110 * OS1_S1 + 18);
            *(b + 82 * OS1_S1 + 29) = prefactor_x * *(b + 82 * OS1_S1 + 19) -
                                      p_over_q * *(b + 110 * OS1_S1 + 19);
            *(b + 82 * OS1_S1 + 30) =
                prefactor_y * *(b + 82 * OS1_S1 + 16) -
                p_over_q * *(b + 117 * OS1_S1 + 16) +
                one_over_two_q * *(b + 55 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 82 * OS1_S1 + 7);
            *(b + 82 * OS1_S1 + 31) =
                prefactor_z * *(b + 82 * OS1_S1 + 16) -
                p_over_q * *(b + 118 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 16);
            *(b + 82 * OS1_S1 + 32) = prefactor_y * *(b + 82 * OS1_S1 + 18) -
                                      p_over_q * *(b + 117 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 9);
            *(b + 82 * OS1_S1 + 33) = prefactor_y * *(b + 82 * OS1_S1 + 19) -
                                      p_over_q * *(b + 117 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 19);
            *(b + 82 * OS1_S1 + 34) =
                prefactor_z * *(b + 82 * OS1_S1 + 19) -
                p_over_q * *(b + 118 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 82 * OS1_S1 + 9);
            *(b + 83 * OS1_S1 + 20) =
                prefactor_x * *(b + 83 * OS1_S1 + 10) -
                p_over_q * *(b + 111 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 83 * OS1_S1 + 4);
            *(b + 83 * OS1_S1 + 21) = prefactor_y * *(b + 83 * OS1_S1 + 10) -
                                      p_over_q * *(b + 118 * OS1_S1 + 10);
            *(b + 83 * OS1_S1 + 22) =
                prefactor_z * *(b + 83 * OS1_S1 + 10) -
                p_over_q * *(b + 119 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 10);
            *(b + 83 * OS1_S1 + 23) = prefactor_y * *(b + 83 * OS1_S1 + 11) -
                                      p_over_q * *(b + 118 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 4);
            *(b + 83 * OS1_S1 + 24) = prefactor_y * *(b + 83 * OS1_S1 + 12) -
                                      p_over_q * *(b + 118 * OS1_S1 + 12);
            *(b + 83 * OS1_S1 + 25) = prefactor_x * *(b + 83 * OS1_S1 + 15) -
                                      p_over_q * *(b + 111 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 9);
            *(b + 83 * OS1_S1 + 26) = prefactor_x * *(b + 83 * OS1_S1 + 16) -
                                      p_over_q * *(b + 111 * OS1_S1 + 16);
            *(b + 83 * OS1_S1 + 27) = prefactor_x * *(b + 83 * OS1_S1 + 17) -
                                      p_over_q * *(b + 111 * OS1_S1 + 17);
            *(b + 83 * OS1_S1 + 28) = prefactor_y * *(b + 83 * OS1_S1 + 15) -
                                      p_over_q * *(b + 118 * OS1_S1 + 15);
            *(b + 83 * OS1_S1 + 29) = prefactor_x * *(b + 83 * OS1_S1 + 19) -
                                      p_over_q * *(b + 111 * OS1_S1 + 19);
            *(b + 83 * OS1_S1 + 30) =
                prefactor_y * *(b + 83 * OS1_S1 + 16) -
                p_over_q * *(b + 118 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 83 * OS1_S1 + 7);
            *(b + 83 * OS1_S1 + 31) =
                prefactor_z * *(b + 83 * OS1_S1 + 16) -
                p_over_q * *(b + 119 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 16);
            *(b + 83 * OS1_S1 + 32) = prefactor_y * *(b + 83 * OS1_S1 + 18) -
                                      p_over_q * *(b + 118 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 9);
            *(b + 83 * OS1_S1 + 33) = prefactor_y * *(b + 83 * OS1_S1 + 19) -
                                      p_over_q * *(b + 118 * OS1_S1 + 19);
            *(b + 83 * OS1_S1 + 34) =
                prefactor_z * *(b + 83 * OS1_S1 + 19) -
                p_over_q * *(b + 119 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 83 * OS1_S1 + 9);
            return;
        }

        void transfer_4(const unsigned first_min,
                        const unsigned first_max,
                        const double prefactor_x,
                        const double prefactor_y,
                        const double prefactor_z,
                        const double p_over_q,
                        const double one_over_two_q,
                        double* NIEDOIDA_RESTRICT b)
        {
            switch (first_min) {
            case 0:
                transfer_0_4(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 0)
                    break;
            case 1:
                transfer_1_4(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 1)
                    break;
            case 2:
                transfer_2_4(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 2)
                    break;
            case 3:
                transfer_3_4(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 3)
                    break;
            case 4:
                transfer_4_4(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 4)
                    break;
            case 5:
                transfer_5_4(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 5)
                    break;
            case 6:
                transfer_6_4(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 6)
                    break;
            case 7:
                transfer_7_4(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 7)
                    break;
            case 8:
                transfer_8_4(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 8)
                    break;
            case 9:
                transfer_9_4(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 9)
                    break;
            case 10:
                transfer_10_4(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              b);
                if (first_max == 10)
                    break;
            case 11:
                transfer_11_4(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              b);
                if (first_max == 11)
                    break;
            case 12:
                transfer_12_4(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              b);
                if (first_max == 12)
                    break;
            case 13:
                transfer_13_4(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              b);
                if (first_max == 13)
                    break;
            case 14:
                transfer_14_4(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              b);
                if (first_max == 14)
                    break;
            case 15:
                transfer_15_4(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              b);
                if (first_max == 15)
                    break;
            case 16:
                transfer_16_4(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              b);
            }
            return;
        }
    }
}
