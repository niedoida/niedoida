/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        inline void transfer_0_3(const double prefactor_x,
                                 const double prefactor_y,
                                 const double prefactor_z,
                                 const double p_over_q,
                                 const double one_over_two_q,
                                 double* NIEDOIDA_RESTRICT b)
        {
            *(b + 0 * OS1_S1 + 10) = prefactor_x * *(b + 0 * OS1_S1 + 4) -
                                     p_over_q * *(b + 1 * OS1_S1 + 4) +
                                     2 * one_over_two_q * *(b + 0 * OS1_S1 + 1);
            *(b + 0 * OS1_S1 + 11) = prefactor_y * *(b + 0 * OS1_S1 + 4) -
                                     p_over_q * *(b + 2 * OS1_S1 + 4);
            *(b + 0 * OS1_S1 + 12) = prefactor_z * *(b + 0 * OS1_S1 + 4) -
                                     p_over_q * *(b + 3 * OS1_S1 + 4);
            *(b + 0 * OS1_S1 + 13) = prefactor_x * *(b + 0 * OS1_S1 + 7) -
                                     p_over_q * *(b + 1 * OS1_S1 + 7);
            *(b + 0 * OS1_S1 + 14) = prefactor_z * *(b + 0 * OS1_S1 + 5) -
                                     p_over_q * *(b + 3 * OS1_S1 + 5);
            *(b + 0 * OS1_S1 + 15) = prefactor_x * *(b + 0 * OS1_S1 + 9) -
                                     p_over_q * *(b + 1 * OS1_S1 + 9);
            *(b + 0 * OS1_S1 + 16) = prefactor_y * *(b + 0 * OS1_S1 + 7) -
                                     p_over_q * *(b + 2 * OS1_S1 + 7) +
                                     2 * one_over_two_q * *(b + 0 * OS1_S1 + 2);
            *(b + 0 * OS1_S1 + 17) = prefactor_z * *(b + 0 * OS1_S1 + 7) -
                                     p_over_q * *(b + 3 * OS1_S1 + 7);
            *(b + 0 * OS1_S1 + 18) = prefactor_y * *(b + 0 * OS1_S1 + 9) -
                                     p_over_q * *(b + 2 * OS1_S1 + 9);
            *(b + 0 * OS1_S1 + 19) = prefactor_z * *(b + 0 * OS1_S1 + 9) -
                                     p_over_q * *(b + 3 * OS1_S1 + 9) +
                                     2 * one_over_two_q * *(b + 0 * OS1_S1 + 3);
            return;
        }
        void transfer_1_3(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 1 * OS1_S1 + 10) = prefactor_x * *(b + 1 * OS1_S1 + 4) -
                                     p_over_q * *(b + 4 * OS1_S1 + 4) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 4) +
                                     2 * one_over_two_q * *(b + 1 * OS1_S1 + 1);
            *(b + 1 * OS1_S1 + 11) = prefactor_y * *(b + 1 * OS1_S1 + 4) -
                                     p_over_q * *(b + 5 * OS1_S1 + 4);
            *(b + 1 * OS1_S1 + 12) = prefactor_z * *(b + 1 * OS1_S1 + 4) -
                                     p_over_q * *(b + 6 * OS1_S1 + 4);
            *(b + 1 * OS1_S1 + 13) = prefactor_x * *(b + 1 * OS1_S1 + 7) -
                                     p_over_q * *(b + 4 * OS1_S1 + 7) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 7);
            *(b + 1 * OS1_S1 + 14) = prefactor_z * *(b + 1 * OS1_S1 + 5) -
                                     p_over_q * *(b + 6 * OS1_S1 + 5);
            *(b + 1 * OS1_S1 + 15) = prefactor_x * *(b + 1 * OS1_S1 + 9) -
                                     p_over_q * *(b + 4 * OS1_S1 + 9) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 9);
            *(b + 1 * OS1_S1 + 16) = prefactor_y * *(b + 1 * OS1_S1 + 7) -
                                     p_over_q * *(b + 5 * OS1_S1 + 7) +
                                     2 * one_over_two_q * *(b + 1 * OS1_S1 + 2);
            *(b + 1 * OS1_S1 + 17) = prefactor_z * *(b + 1 * OS1_S1 + 7) -
                                     p_over_q * *(b + 6 * OS1_S1 + 7);
            *(b + 1 * OS1_S1 + 18) = prefactor_y * *(b + 1 * OS1_S1 + 9) -
                                     p_over_q * *(b + 5 * OS1_S1 + 9);
            *(b + 1 * OS1_S1 + 19) = prefactor_z * *(b + 1 * OS1_S1 + 9) -
                                     p_over_q * *(b + 6 * OS1_S1 + 9) +
                                     2 * one_over_two_q * *(b + 1 * OS1_S1 + 3);
            *(b + 2 * OS1_S1 + 10) = prefactor_x * *(b + 2 * OS1_S1 + 4) -
                                     p_over_q * *(b + 5 * OS1_S1 + 4) +
                                     2 * one_over_two_q * *(b + 2 * OS1_S1 + 1);
            *(b + 2 * OS1_S1 + 11) = prefactor_y * *(b + 2 * OS1_S1 + 4) -
                                     p_over_q * *(b + 7 * OS1_S1 + 4) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 4);
            *(b + 2 * OS1_S1 + 12) = prefactor_z * *(b + 2 * OS1_S1 + 4) -
                                     p_over_q * *(b + 8 * OS1_S1 + 4);
            *(b + 2 * OS1_S1 + 13) = prefactor_x * *(b + 2 * OS1_S1 + 7) -
                                     p_over_q * *(b + 5 * OS1_S1 + 7);
            *(b + 2 * OS1_S1 + 14) = prefactor_z * *(b + 2 * OS1_S1 + 5) -
                                     p_over_q * *(b + 8 * OS1_S1 + 5);
            *(b + 2 * OS1_S1 + 15) = prefactor_x * *(b + 2 * OS1_S1 + 9) -
                                     p_over_q * *(b + 5 * OS1_S1 + 9);
            *(b + 2 * OS1_S1 + 16) = prefactor_y * *(b + 2 * OS1_S1 + 7) -
                                     p_over_q * *(b + 7 * OS1_S1 + 7) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 7) +
                                     2 * one_over_two_q * *(b + 2 * OS1_S1 + 2);
            *(b + 2 * OS1_S1 + 17) = prefactor_z * *(b + 2 * OS1_S1 + 7) -
                                     p_over_q * *(b + 8 * OS1_S1 + 7);
            *(b + 2 * OS1_S1 + 18) = prefactor_y * *(b + 2 * OS1_S1 + 9) -
                                     p_over_q * *(b + 7 * OS1_S1 + 9) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 9);
            *(b + 2 * OS1_S1 + 19) = prefactor_z * *(b + 2 * OS1_S1 + 9) -
                                     p_over_q * *(b + 8 * OS1_S1 + 9) +
                                     2 * one_over_two_q * *(b + 2 * OS1_S1 + 3);
            *(b + 3 * OS1_S1 + 10) = prefactor_x * *(b + 3 * OS1_S1 + 4) -
                                     p_over_q * *(b + 6 * OS1_S1 + 4) +
                                     2 * one_over_two_q * *(b + 3 * OS1_S1 + 1);
            *(b + 3 * OS1_S1 + 11) = prefactor_y * *(b + 3 * OS1_S1 + 4) -
                                     p_over_q * *(b + 8 * OS1_S1 + 4);
            *(b + 3 * OS1_S1 + 12) = prefactor_z * *(b + 3 * OS1_S1 + 4) -
                                     p_over_q * *(b + 9 * OS1_S1 + 4) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 4);
            *(b + 3 * OS1_S1 + 13) = prefactor_x * *(b + 3 * OS1_S1 + 7) -
                                     p_over_q * *(b + 6 * OS1_S1 + 7);
            *(b + 3 * OS1_S1 + 14) = prefactor_y * *(b + 3 * OS1_S1 + 6) -
                                     p_over_q * *(b + 8 * OS1_S1 + 6);
            *(b + 3 * OS1_S1 + 15) = prefactor_x * *(b + 3 * OS1_S1 + 9) -
                                     p_over_q * *(b + 6 * OS1_S1 + 9);
            *(b + 3 * OS1_S1 + 16) = prefactor_y * *(b + 3 * OS1_S1 + 7) -
                                     p_over_q * *(b + 8 * OS1_S1 + 7) +
                                     2 * one_over_two_q * *(b + 3 * OS1_S1 + 2);
            *(b + 3 * OS1_S1 + 17) = prefactor_z * *(b + 3 * OS1_S1 + 7) -
                                     p_over_q * *(b + 9 * OS1_S1 + 7) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 7);
            *(b + 3 * OS1_S1 + 18) = prefactor_y * *(b + 3 * OS1_S1 + 9) -
                                     p_over_q * *(b + 8 * OS1_S1 + 9);
            *(b + 3 * OS1_S1 + 19) = prefactor_z * *(b + 3 * OS1_S1 + 9) -
                                     p_over_q * *(b + 9 * OS1_S1 + 9) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 9) +
                                     2 * one_over_two_q * *(b + 3 * OS1_S1 + 3);
            return;
        }
        void transfer_2_3(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 4 * OS1_S1 + 10) =
                prefactor_x * *(b + 4 * OS1_S1 + 4) -
                p_over_q * *(b + 10 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 1);
            *(b + 4 * OS1_S1 + 11) = prefactor_y * *(b + 4 * OS1_S1 + 4) -
                                     p_over_q * *(b + 11 * OS1_S1 + 4);
            *(b + 4 * OS1_S1 + 12) = prefactor_z * *(b + 4 * OS1_S1 + 4) -
                                     p_over_q * *(b + 12 * OS1_S1 + 4);
            *(b + 4 * OS1_S1 + 13) = prefactor_x * *(b + 4 * OS1_S1 + 7) -
                                     p_over_q * *(b + 10 * OS1_S1 + 7) +
                                     2 * one_over_two_q * *(b + 1 * OS1_S1 + 7);
            *(b + 4 * OS1_S1 + 14) = prefactor_z * *(b + 4 * OS1_S1 + 5) -
                                     p_over_q * *(b + 12 * OS1_S1 + 5);
            *(b + 4 * OS1_S1 + 15) = prefactor_x * *(b + 4 * OS1_S1 + 9) -
                                     p_over_q * *(b + 10 * OS1_S1 + 9) +
                                     2 * one_over_two_q * *(b + 1 * OS1_S1 + 9);
            *(b + 4 * OS1_S1 + 16) = prefactor_y * *(b + 4 * OS1_S1 + 7) -
                                     p_over_q * *(b + 11 * OS1_S1 + 7) +
                                     2 * one_over_two_q * *(b + 4 * OS1_S1 + 2);
            *(b + 4 * OS1_S1 + 17) = prefactor_z * *(b + 4 * OS1_S1 + 7) -
                                     p_over_q * *(b + 12 * OS1_S1 + 7);
            *(b + 4 * OS1_S1 + 18) = prefactor_y * *(b + 4 * OS1_S1 + 9) -
                                     p_over_q * *(b + 11 * OS1_S1 + 9);
            *(b + 4 * OS1_S1 + 19) = prefactor_z * *(b + 4 * OS1_S1 + 9) -
                                     p_over_q * *(b + 12 * OS1_S1 + 9) +
                                     2 * one_over_two_q * *(b + 4 * OS1_S1 + 3);
            *(b + 5 * OS1_S1 + 10) = prefactor_x * *(b + 5 * OS1_S1 + 4) -
                                     p_over_q * *(b + 11 * OS1_S1 + 4) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 4) +
                                     2 * one_over_two_q * *(b + 5 * OS1_S1 + 1);
            *(b + 5 * OS1_S1 + 11) = prefactor_y * *(b + 5 * OS1_S1 + 4) -
                                     p_over_q * *(b + 13 * OS1_S1 + 4) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 4);
            *(b + 5 * OS1_S1 + 12) = prefactor_z * *(b + 5 * OS1_S1 + 4) -
                                     p_over_q * *(b + 14 * OS1_S1 + 4);
            *(b + 5 * OS1_S1 + 13) = prefactor_x * *(b + 5 * OS1_S1 + 7) -
                                     p_over_q * *(b + 11 * OS1_S1 + 7) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 7);
            *(b + 5 * OS1_S1 + 14) = prefactor_z * *(b + 5 * OS1_S1 + 5) -
                                     p_over_q * *(b + 14 * OS1_S1 + 5);
            *(b + 5 * OS1_S1 + 15) = prefactor_x * *(b + 5 * OS1_S1 + 9) -
                                     p_over_q * *(b + 11 * OS1_S1 + 9) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 9);
            *(b + 5 * OS1_S1 + 16) = prefactor_y * *(b + 5 * OS1_S1 + 7) -
                                     p_over_q * *(b + 13 * OS1_S1 + 7) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 7) +
                                     2 * one_over_two_q * *(b + 5 * OS1_S1 + 2);
            *(b + 5 * OS1_S1 + 17) = prefactor_z * *(b + 5 * OS1_S1 + 7) -
                                     p_over_q * *(b + 14 * OS1_S1 + 7);
            *(b + 5 * OS1_S1 + 18) = prefactor_y * *(b + 5 * OS1_S1 + 9) -
                                     p_over_q * *(b + 13 * OS1_S1 + 9) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 9);
            *(b + 5 * OS1_S1 + 19) = prefactor_z * *(b + 5 * OS1_S1 + 9) -
                                     p_over_q * *(b + 14 * OS1_S1 + 9) +
                                     2 * one_over_two_q * *(b + 5 * OS1_S1 + 3);
            *(b + 6 * OS1_S1 + 10) = prefactor_x * *(b + 6 * OS1_S1 + 4) -
                                     p_over_q * *(b + 12 * OS1_S1 + 4) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 4) +
                                     2 * one_over_two_q * *(b + 6 * OS1_S1 + 1);
            *(b + 6 * OS1_S1 + 11) = prefactor_y * *(b + 6 * OS1_S1 + 4) -
                                     p_over_q * *(b + 14 * OS1_S1 + 4);
            *(b + 6 * OS1_S1 + 12) = prefactor_z * *(b + 6 * OS1_S1 + 4) -
                                     p_over_q * *(b + 15 * OS1_S1 + 4) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 4);
            *(b + 6 * OS1_S1 + 13) = prefactor_x * *(b + 6 * OS1_S1 + 7) -
                                     p_over_q * *(b + 12 * OS1_S1 + 7) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 7);
            *(b + 6 * OS1_S1 + 14) = prefactor_y * *(b + 6 * OS1_S1 + 6) -
                                     p_over_q * *(b + 14 * OS1_S1 + 6);
            *(b + 6 * OS1_S1 + 15) = prefactor_x * *(b + 6 * OS1_S1 + 9) -
                                     p_over_q * *(b + 12 * OS1_S1 + 9) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 9);
            *(b + 6 * OS1_S1 + 16) = prefactor_y * *(b + 6 * OS1_S1 + 7) -
                                     p_over_q * *(b + 14 * OS1_S1 + 7) +
                                     2 * one_over_two_q * *(b + 6 * OS1_S1 + 2);
            *(b + 6 * OS1_S1 + 17) = prefactor_z * *(b + 6 * OS1_S1 + 7) -
                                     p_over_q * *(b + 15 * OS1_S1 + 7) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 7);
            *(b + 6 * OS1_S1 + 18) = prefactor_y * *(b + 6 * OS1_S1 + 9) -
                                     p_over_q * *(b + 14 * OS1_S1 + 9);
            *(b + 6 * OS1_S1 + 19) = prefactor_z * *(b + 6 * OS1_S1 + 9) -
                                     p_over_q * *(b + 15 * OS1_S1 + 9) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 9) +
                                     2 * one_over_two_q * *(b + 6 * OS1_S1 + 3);
            *(b + 7 * OS1_S1 + 10) = prefactor_x * *(b + 7 * OS1_S1 + 4) -
                                     p_over_q * *(b + 13 * OS1_S1 + 4) +
                                     2 * one_over_two_q * *(b + 7 * OS1_S1 + 1);
            *(b + 7 * OS1_S1 + 11) = prefactor_y * *(b + 7 * OS1_S1 + 4) -
                                     p_over_q * *(b + 16 * OS1_S1 + 4) +
                                     2 * one_over_two_q * *(b + 2 * OS1_S1 + 4);
            *(b + 7 * OS1_S1 + 12) = prefactor_z * *(b + 7 * OS1_S1 + 4) -
                                     p_over_q * *(b + 17 * OS1_S1 + 4);
            *(b + 7 * OS1_S1 + 13) = prefactor_x * *(b + 7 * OS1_S1 + 7) -
                                     p_over_q * *(b + 13 * OS1_S1 + 7);
            *(b + 7 * OS1_S1 + 14) = prefactor_z * *(b + 7 * OS1_S1 + 5) -
                                     p_over_q * *(b + 17 * OS1_S1 + 5);
            *(b + 7 * OS1_S1 + 15) = prefactor_x * *(b + 7 * OS1_S1 + 9) -
                                     p_over_q * *(b + 13 * OS1_S1 + 9);
            *(b + 7 * OS1_S1 + 16) =
                prefactor_y * *(b + 7 * OS1_S1 + 7) -
                p_over_q * *(b + 16 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 2);
            *(b + 7 * OS1_S1 + 17) = prefactor_z * *(b + 7 * OS1_S1 + 7) -
                                     p_over_q * *(b + 17 * OS1_S1 + 7);
            *(b + 7 * OS1_S1 + 18) = prefactor_y * *(b + 7 * OS1_S1 + 9) -
                                     p_over_q * *(b + 16 * OS1_S1 + 9) +
                                     2 * one_over_two_q * *(b + 2 * OS1_S1 + 9);
            *(b + 7 * OS1_S1 + 19) = prefactor_z * *(b + 7 * OS1_S1 + 9) -
                                     p_over_q * *(b + 17 * OS1_S1 + 9) +
                                     2 * one_over_two_q * *(b + 7 * OS1_S1 + 3);
            *(b + 8 * OS1_S1 + 10) = prefactor_x * *(b + 8 * OS1_S1 + 4) -
                                     p_over_q * *(b + 14 * OS1_S1 + 4) +
                                     2 * one_over_two_q * *(b + 8 * OS1_S1 + 1);
            *(b + 8 * OS1_S1 + 11) = prefactor_y * *(b + 8 * OS1_S1 + 4) -
                                     p_over_q * *(b + 17 * OS1_S1 + 4) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 4);
            *(b + 8 * OS1_S1 + 12) = prefactor_z * *(b + 8 * OS1_S1 + 4) -
                                     p_over_q * *(b + 18 * OS1_S1 + 4) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 4);
            *(b + 8 * OS1_S1 + 13) = prefactor_x * *(b + 8 * OS1_S1 + 7) -
                                     p_over_q * *(b + 14 * OS1_S1 + 7);
            *(b + 8 * OS1_S1 + 14) = prefactor_x * *(b + 8 * OS1_S1 + 8) -
                                     p_over_q * *(b + 14 * OS1_S1 + 8);
            *(b + 8 * OS1_S1 + 15) = prefactor_x * *(b + 8 * OS1_S1 + 9) -
                                     p_over_q * *(b + 14 * OS1_S1 + 9);
            *(b + 8 * OS1_S1 + 16) = prefactor_y * *(b + 8 * OS1_S1 + 7) -
                                     p_over_q * *(b + 17 * OS1_S1 + 7) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 7) +
                                     2 * one_over_two_q * *(b + 8 * OS1_S1 + 2);
            *(b + 8 * OS1_S1 + 17) = prefactor_z * *(b + 8 * OS1_S1 + 7) -
                                     p_over_q * *(b + 18 * OS1_S1 + 7) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 7);
            *(b + 8 * OS1_S1 + 18) = prefactor_y * *(b + 8 * OS1_S1 + 9) -
                                     p_over_q * *(b + 17 * OS1_S1 + 9) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 9);
            *(b + 8 * OS1_S1 + 19) = prefactor_z * *(b + 8 * OS1_S1 + 9) -
                                     p_over_q * *(b + 18 * OS1_S1 + 9) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 9) +
                                     2 * one_over_two_q * *(b + 8 * OS1_S1 + 3);
            *(b + 9 * OS1_S1 + 10) = prefactor_x * *(b + 9 * OS1_S1 + 4) -
                                     p_over_q * *(b + 15 * OS1_S1 + 4) +
                                     2 * one_over_two_q * *(b + 9 * OS1_S1 + 1);
            *(b + 9 * OS1_S1 + 11) = prefactor_y * *(b + 9 * OS1_S1 + 4) -
                                     p_over_q * *(b + 18 * OS1_S1 + 4);
            *(b + 9 * OS1_S1 + 12) = prefactor_z * *(b + 9 * OS1_S1 + 4) -
                                     p_over_q * *(b + 19 * OS1_S1 + 4) +
                                     2 * one_over_two_q * *(b + 3 * OS1_S1 + 4);
            *(b + 9 * OS1_S1 + 13) = prefactor_x * *(b + 9 * OS1_S1 + 7) -
                                     p_over_q * *(b + 15 * OS1_S1 + 7);
            *(b + 9 * OS1_S1 + 14) = prefactor_y * *(b + 9 * OS1_S1 + 6) -
                                     p_over_q * *(b + 18 * OS1_S1 + 6);
            *(b + 9 * OS1_S1 + 15) = prefactor_x * *(b + 9 * OS1_S1 + 9) -
                                     p_over_q * *(b + 15 * OS1_S1 + 9);
            *(b + 9 * OS1_S1 + 16) = prefactor_y * *(b + 9 * OS1_S1 + 7) -
                                     p_over_q * *(b + 18 * OS1_S1 + 7) +
                                     2 * one_over_two_q * *(b + 9 * OS1_S1 + 2);
            *(b + 9 * OS1_S1 + 17) = prefactor_z * *(b + 9 * OS1_S1 + 7) -
                                     p_over_q * *(b + 19 * OS1_S1 + 7) +
                                     2 * one_over_two_q * *(b + 3 * OS1_S1 + 7);
            *(b + 9 * OS1_S1 + 18) = prefactor_y * *(b + 9 * OS1_S1 + 9) -
                                     p_over_q * *(b + 18 * OS1_S1 + 9);
            *(b + 9 * OS1_S1 + 19) =
                prefactor_z * *(b + 9 * OS1_S1 + 9) -
                p_over_q * *(b + 19 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 3);
            return;
        }
        void transfer_3_3(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 10 * OS1_S1 + 10) =
                prefactor_x * *(b + 10 * OS1_S1 + 4) -
                p_over_q * *(b + 20 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 1);
            *(b + 10 * OS1_S1 + 11) = prefactor_y * *(b + 10 * OS1_S1 + 4) -
                                      p_over_q * *(b + 21 * OS1_S1 + 4);
            *(b + 10 * OS1_S1 + 12) = prefactor_z * *(b + 10 * OS1_S1 + 4) -
                                      p_over_q * *(b + 22 * OS1_S1 + 4);
            *(b + 10 * OS1_S1 + 13) =
                prefactor_x * *(b + 10 * OS1_S1 + 7) -
                p_over_q * *(b + 20 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 7);
            *(b + 10 * OS1_S1 + 14) = prefactor_z * *(b + 10 * OS1_S1 + 5) -
                                      p_over_q * *(b + 22 * OS1_S1 + 5);
            *(b + 10 * OS1_S1 + 15) =
                prefactor_x * *(b + 10 * OS1_S1 + 9) -
                p_over_q * *(b + 20 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 9);
            *(b + 10 * OS1_S1 + 16) =
                prefactor_y * *(b + 10 * OS1_S1 + 7) -
                p_over_q * *(b + 21 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 2);
            *(b + 10 * OS1_S1 + 17) = prefactor_z * *(b + 10 * OS1_S1 + 7) -
                                      p_over_q * *(b + 22 * OS1_S1 + 7);
            *(b + 10 * OS1_S1 + 18) = prefactor_y * *(b + 10 * OS1_S1 + 9) -
                                      p_over_q * *(b + 21 * OS1_S1 + 9);
            *(b + 10 * OS1_S1 + 19) =
                prefactor_z * *(b + 10 * OS1_S1 + 9) -
                p_over_q * *(b + 22 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 3);
            *(b + 11 * OS1_S1 + 10) =
                prefactor_x * *(b + 11 * OS1_S1 + 4) -
                p_over_q * *(b + 21 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 1);
            *(b + 11 * OS1_S1 + 11) = prefactor_y * *(b + 11 * OS1_S1 + 4) -
                                      p_over_q * *(b + 23 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 4);
            *(b + 11 * OS1_S1 + 12) = prefactor_z * *(b + 11 * OS1_S1 + 4) -
                                      p_over_q * *(b + 24 * OS1_S1 + 4);
            *(b + 11 * OS1_S1 + 13) =
                prefactor_x * *(b + 11 * OS1_S1 + 7) -
                p_over_q * *(b + 21 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 7);
            *(b + 11 * OS1_S1 + 14) = prefactor_z * *(b + 11 * OS1_S1 + 5) -
                                      p_over_q * *(b + 24 * OS1_S1 + 5);
            *(b + 11 * OS1_S1 + 15) =
                prefactor_x * *(b + 11 * OS1_S1 + 9) -
                p_over_q * *(b + 21 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 9);
            *(b + 11 * OS1_S1 + 16) =
                prefactor_y * *(b + 11 * OS1_S1 + 7) -
                p_over_q * *(b + 23 * OS1_S1 + 7) +
                one_over_two_q * *(b + 4 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 2);
            *(b + 11 * OS1_S1 + 17) = prefactor_z * *(b + 11 * OS1_S1 + 7) -
                                      p_over_q * *(b + 24 * OS1_S1 + 7);
            *(b + 11 * OS1_S1 + 18) = prefactor_y * *(b + 11 * OS1_S1 + 9) -
                                      p_over_q * *(b + 23 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 9);
            *(b + 11 * OS1_S1 + 19) =
                prefactor_z * *(b + 11 * OS1_S1 + 9) -
                p_over_q * *(b + 24 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 3);
            *(b + 12 * OS1_S1 + 10) =
                prefactor_x * *(b + 12 * OS1_S1 + 4) -
                p_over_q * *(b + 22 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 1);
            *(b + 12 * OS1_S1 + 11) = prefactor_y * *(b + 12 * OS1_S1 + 4) -
                                      p_over_q * *(b + 24 * OS1_S1 + 4);
            *(b + 12 * OS1_S1 + 12) = prefactor_z * *(b + 12 * OS1_S1 + 4) -
                                      p_over_q * *(b + 25 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 4);
            *(b + 12 * OS1_S1 + 13) =
                prefactor_x * *(b + 12 * OS1_S1 + 7) -
                p_over_q * *(b + 22 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 7);
            *(b + 12 * OS1_S1 + 14) = prefactor_y * *(b + 12 * OS1_S1 + 6) -
                                      p_over_q * *(b + 24 * OS1_S1 + 6);
            *(b + 12 * OS1_S1 + 15) =
                prefactor_x * *(b + 12 * OS1_S1 + 9) -
                p_over_q * *(b + 22 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 9);
            *(b + 12 * OS1_S1 + 16) =
                prefactor_y * *(b + 12 * OS1_S1 + 7) -
                p_over_q * *(b + 24 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 2);
            *(b + 12 * OS1_S1 + 17) = prefactor_z * *(b + 12 * OS1_S1 + 7) -
                                      p_over_q * *(b + 25 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 7);
            *(b + 12 * OS1_S1 + 18) = prefactor_y * *(b + 12 * OS1_S1 + 9) -
                                      p_over_q * *(b + 24 * OS1_S1 + 9);
            *(b + 12 * OS1_S1 + 19) =
                prefactor_z * *(b + 12 * OS1_S1 + 9) -
                p_over_q * *(b + 25 * OS1_S1 + 9) +
                one_over_two_q * *(b + 4 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 3);
            *(b + 13 * OS1_S1 + 10) =
                prefactor_x * *(b + 13 * OS1_S1 + 4) -
                p_over_q * *(b + 23 * OS1_S1 + 4) +
                one_over_two_q * *(b + 7 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 1);
            *(b + 13 * OS1_S1 + 11) =
                prefactor_y * *(b + 13 * OS1_S1 + 4) -
                p_over_q * *(b + 26 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 4);
            *(b + 13 * OS1_S1 + 12) = prefactor_z * *(b + 13 * OS1_S1 + 4) -
                                      p_over_q * *(b + 27 * OS1_S1 + 4);
            *(b + 13 * OS1_S1 + 13) = prefactor_x * *(b + 13 * OS1_S1 + 7) -
                                      p_over_q * *(b + 23 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 7);
            *(b + 13 * OS1_S1 + 14) = prefactor_z * *(b + 13 * OS1_S1 + 5) -
                                      p_over_q * *(b + 27 * OS1_S1 + 5);
            *(b + 13 * OS1_S1 + 15) = prefactor_x * *(b + 13 * OS1_S1 + 9) -
                                      p_over_q * *(b + 23 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 9);
            *(b + 13 * OS1_S1 + 16) =
                prefactor_y * *(b + 13 * OS1_S1 + 7) -
                p_over_q * *(b + 26 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 2);
            *(b + 13 * OS1_S1 + 17) = prefactor_z * *(b + 13 * OS1_S1 + 7) -
                                      p_over_q * *(b + 27 * OS1_S1 + 7);
            *(b + 13 * OS1_S1 + 18) =
                prefactor_y * *(b + 13 * OS1_S1 + 9) -
                p_over_q * *(b + 26 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 9);
            *(b + 13 * OS1_S1 + 19) =
                prefactor_z * *(b + 13 * OS1_S1 + 9) -
                p_over_q * *(b + 27 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 3);
            *(b + 14 * OS1_S1 + 10) =
                prefactor_x * *(b + 14 * OS1_S1 + 4) -
                p_over_q * *(b + 24 * OS1_S1 + 4) +
                one_over_two_q * *(b + 8 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 1);
            *(b + 14 * OS1_S1 + 11) = prefactor_y * *(b + 14 * OS1_S1 + 4) -
                                      p_over_q * *(b + 27 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 4);
            *(b + 14 * OS1_S1 + 12) = prefactor_z * *(b + 14 * OS1_S1 + 4) -
                                      p_over_q * *(b + 28 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 4);
            *(b + 14 * OS1_S1 + 13) = prefactor_x * *(b + 14 * OS1_S1 + 7) -
                                      p_over_q * *(b + 24 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 7);
            *(b + 14 * OS1_S1 + 14) = prefactor_z * *(b + 14 * OS1_S1 + 5) -
                                      p_over_q * *(b + 28 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 5);
            *(b + 14 * OS1_S1 + 15) = prefactor_x * *(b + 14 * OS1_S1 + 9) -
                                      p_over_q * *(b + 24 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 9);
            *(b + 14 * OS1_S1 + 16) =
                prefactor_y * *(b + 14 * OS1_S1 + 7) -
                p_over_q * *(b + 27 * OS1_S1 + 7) +
                one_over_two_q * *(b + 6 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 2);
            *(b + 14 * OS1_S1 + 17) = prefactor_z * *(b + 14 * OS1_S1 + 7) -
                                      p_over_q * *(b + 28 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 7);
            *(b + 14 * OS1_S1 + 18) = prefactor_y * *(b + 14 * OS1_S1 + 9) -
                                      p_over_q * *(b + 27 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 9);
            *(b + 14 * OS1_S1 + 19) =
                prefactor_z * *(b + 14 * OS1_S1 + 9) -
                p_over_q * *(b + 28 * OS1_S1 + 9) +
                one_over_two_q * *(b + 5 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 3);
            *(b + 15 * OS1_S1 + 10) =
                prefactor_x * *(b + 15 * OS1_S1 + 4) -
                p_over_q * *(b + 25 * OS1_S1 + 4) +
                one_over_two_q * *(b + 9 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 1);
            *(b + 15 * OS1_S1 + 11) = prefactor_y * *(b + 15 * OS1_S1 + 4) -
                                      p_over_q * *(b + 28 * OS1_S1 + 4);
            *(b + 15 * OS1_S1 + 12) =
                prefactor_z * *(b + 15 * OS1_S1 + 4) -
                p_over_q * *(b + 29 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 4);
            *(b + 15 * OS1_S1 + 13) = prefactor_x * *(b + 15 * OS1_S1 + 7) -
                                      p_over_q * *(b + 25 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 7);
            *(b + 15 * OS1_S1 + 14) = prefactor_y * *(b + 15 * OS1_S1 + 6) -
                                      p_over_q * *(b + 28 * OS1_S1 + 6);
            *(b + 15 * OS1_S1 + 15) = prefactor_x * *(b + 15 * OS1_S1 + 9) -
                                      p_over_q * *(b + 25 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 9);
            *(b + 15 * OS1_S1 + 16) =
                prefactor_y * *(b + 15 * OS1_S1 + 7) -
                p_over_q * *(b + 28 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 2);
            *(b + 15 * OS1_S1 + 17) =
                prefactor_z * *(b + 15 * OS1_S1 + 7) -
                p_over_q * *(b + 29 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 7);
            *(b + 15 * OS1_S1 + 18) = prefactor_y * *(b + 15 * OS1_S1 + 9) -
                                      p_over_q * *(b + 28 * OS1_S1 + 9);
            *(b + 15 * OS1_S1 + 19) =
                prefactor_z * *(b + 15 * OS1_S1 + 9) -
                p_over_q * *(b + 29 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 3);
            *(b + 16 * OS1_S1 + 10) =
                prefactor_x * *(b + 16 * OS1_S1 + 4) -
                p_over_q * *(b + 26 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 1);
            *(b + 16 * OS1_S1 + 11) =
                prefactor_y * *(b + 16 * OS1_S1 + 4) -
                p_over_q * *(b + 30 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 4);
            *(b + 16 * OS1_S1 + 12) = prefactor_z * *(b + 16 * OS1_S1 + 4) -
                                      p_over_q * *(b + 31 * OS1_S1 + 4);
            *(b + 16 * OS1_S1 + 13) = prefactor_x * *(b + 16 * OS1_S1 + 7) -
                                      p_over_q * *(b + 26 * OS1_S1 + 7);
            *(b + 16 * OS1_S1 + 14) = prefactor_z * *(b + 16 * OS1_S1 + 5) -
                                      p_over_q * *(b + 31 * OS1_S1 + 5);
            *(b + 16 * OS1_S1 + 15) = prefactor_x * *(b + 16 * OS1_S1 + 9) -
                                      p_over_q * *(b + 26 * OS1_S1 + 9);
            *(b + 16 * OS1_S1 + 16) =
                prefactor_y * *(b + 16 * OS1_S1 + 7) -
                p_over_q * *(b + 30 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 2);
            *(b + 16 * OS1_S1 + 17) = prefactor_z * *(b + 16 * OS1_S1 + 7) -
                                      p_over_q * *(b + 31 * OS1_S1 + 7);
            *(b + 16 * OS1_S1 + 18) =
                prefactor_y * *(b + 16 * OS1_S1 + 9) -
                p_over_q * *(b + 30 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 9);
            *(b + 16 * OS1_S1 + 19) =
                prefactor_z * *(b + 16 * OS1_S1 + 9) -
                p_over_q * *(b + 31 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 3);
            *(b + 17 * OS1_S1 + 10) =
                prefactor_x * *(b + 17 * OS1_S1 + 4) -
                p_over_q * *(b + 27 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 1);
            *(b + 17 * OS1_S1 + 11) =
                prefactor_y * *(b + 17 * OS1_S1 + 4) -
                p_over_q * *(b + 31 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 4);
            *(b + 17 * OS1_S1 + 12) = prefactor_z * *(b + 17 * OS1_S1 + 4) -
                                      p_over_q * *(b + 32 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 4);
            *(b + 17 * OS1_S1 + 13) = prefactor_x * *(b + 17 * OS1_S1 + 7) -
                                      p_over_q * *(b + 27 * OS1_S1 + 7);
            *(b + 17 * OS1_S1 + 14) = prefactor_x * *(b + 17 * OS1_S1 + 8) -
                                      p_over_q * *(b + 27 * OS1_S1 + 8);
            *(b + 17 * OS1_S1 + 15) = prefactor_x * *(b + 17 * OS1_S1 + 9) -
                                      p_over_q * *(b + 27 * OS1_S1 + 9);
            *(b + 17 * OS1_S1 + 16) =
                prefactor_y * *(b + 17 * OS1_S1 + 7) -
                p_over_q * *(b + 31 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 2);
            *(b + 17 * OS1_S1 + 17) = prefactor_z * *(b + 17 * OS1_S1 + 7) -
                                      p_over_q * *(b + 32 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 7);
            *(b + 17 * OS1_S1 + 18) =
                prefactor_y * *(b + 17 * OS1_S1 + 9) -
                p_over_q * *(b + 31 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 9);
            *(b + 17 * OS1_S1 + 19) =
                prefactor_z * *(b + 17 * OS1_S1 + 9) -
                p_over_q * *(b + 32 * OS1_S1 + 9) +
                one_over_two_q * *(b + 7 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 3);
            *(b + 18 * OS1_S1 + 10) =
                prefactor_x * *(b + 18 * OS1_S1 + 4) -
                p_over_q * *(b + 28 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 1);
            *(b + 18 * OS1_S1 + 11) = prefactor_y * *(b + 18 * OS1_S1 + 4) -
                                      p_over_q * *(b + 32 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 4);
            *(b + 18 * OS1_S1 + 12) =
                prefactor_z * *(b + 18 * OS1_S1 + 4) -
                p_over_q * *(b + 33 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 4);
            *(b + 18 * OS1_S1 + 13) = prefactor_x * *(b + 18 * OS1_S1 + 7) -
                                      p_over_q * *(b + 28 * OS1_S1 + 7);
            *(b + 18 * OS1_S1 + 14) = prefactor_x * *(b + 18 * OS1_S1 + 8) -
                                      p_over_q * *(b + 28 * OS1_S1 + 8);
            *(b + 18 * OS1_S1 + 15) = prefactor_x * *(b + 18 * OS1_S1 + 9) -
                                      p_over_q * *(b + 28 * OS1_S1 + 9);
            *(b + 18 * OS1_S1 + 16) =
                prefactor_y * *(b + 18 * OS1_S1 + 7) -
                p_over_q * *(b + 32 * OS1_S1 + 7) +
                one_over_two_q * *(b + 9 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 2);
            *(b + 18 * OS1_S1 + 17) =
                prefactor_z * *(b + 18 * OS1_S1 + 7) -
                p_over_q * *(b + 33 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 7);
            *(b + 18 * OS1_S1 + 18) = prefactor_y * *(b + 18 * OS1_S1 + 9) -
                                      p_over_q * *(b + 32 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 9);
            *(b + 18 * OS1_S1 + 19) =
                prefactor_z * *(b + 18 * OS1_S1 + 9) -
                p_over_q * *(b + 33 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 3);
            *(b + 19 * OS1_S1 + 10) =
                prefactor_x * *(b + 19 * OS1_S1 + 4) -
                p_over_q * *(b + 29 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 1);
            *(b + 19 * OS1_S1 + 11) = prefactor_y * *(b + 19 * OS1_S1 + 4) -
                                      p_over_q * *(b + 33 * OS1_S1 + 4);
            *(b + 19 * OS1_S1 + 12) =
                prefactor_z * *(b + 19 * OS1_S1 + 4) -
                p_over_q * *(b + 34 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 4);
            *(b + 19 * OS1_S1 + 13) = prefactor_x * *(b + 19 * OS1_S1 + 7) -
                                      p_over_q * *(b + 29 * OS1_S1 + 7);
            *(b + 19 * OS1_S1 + 14) = prefactor_y * *(b + 19 * OS1_S1 + 6) -
                                      p_over_q * *(b + 33 * OS1_S1 + 6);
            *(b + 19 * OS1_S1 + 15) = prefactor_x * *(b + 19 * OS1_S1 + 9) -
                                      p_over_q * *(b + 29 * OS1_S1 + 9);
            *(b + 19 * OS1_S1 + 16) =
                prefactor_y * *(b + 19 * OS1_S1 + 7) -
                p_over_q * *(b + 33 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 2);
            *(b + 19 * OS1_S1 + 17) =
                prefactor_z * *(b + 19 * OS1_S1 + 7) -
                p_over_q * *(b + 34 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 7);
            *(b + 19 * OS1_S1 + 18) = prefactor_y * *(b + 19 * OS1_S1 + 9) -
                                      p_over_q * *(b + 33 * OS1_S1 + 9);
            *(b + 19 * OS1_S1 + 19) =
                prefactor_z * *(b + 19 * OS1_S1 + 9) -
                p_over_q * *(b + 34 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 3);
            return;
        }
        void transfer_4_3(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 20 * OS1_S1 + 10) =
                prefactor_x * *(b + 20 * OS1_S1 + 4) -
                p_over_q * *(b + 35 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 1);
            *(b + 20 * OS1_S1 + 11) = prefactor_y * *(b + 20 * OS1_S1 + 4) -
                                      p_over_q * *(b + 36 * OS1_S1 + 4);
            *(b + 20 * OS1_S1 + 12) = prefactor_z * *(b + 20 * OS1_S1 + 4) -
                                      p_over_q * *(b + 37 * OS1_S1 + 4);
            *(b + 20 * OS1_S1 + 13) =
                prefactor_x * *(b + 20 * OS1_S1 + 7) -
                p_over_q * *(b + 35 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 7);
            *(b + 20 * OS1_S1 + 14) = prefactor_z * *(b + 20 * OS1_S1 + 5) -
                                      p_over_q * *(b + 37 * OS1_S1 + 5);
            *(b + 20 * OS1_S1 + 15) =
                prefactor_x * *(b + 20 * OS1_S1 + 9) -
                p_over_q * *(b + 35 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 9);
            *(b + 20 * OS1_S1 + 16) =
                prefactor_y * *(b + 20 * OS1_S1 + 7) -
                p_over_q * *(b + 36 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 2);
            *(b + 20 * OS1_S1 + 17) = prefactor_z * *(b + 20 * OS1_S1 + 7) -
                                      p_over_q * *(b + 37 * OS1_S1 + 7);
            *(b + 20 * OS1_S1 + 18) = prefactor_y * *(b + 20 * OS1_S1 + 9) -
                                      p_over_q * *(b + 36 * OS1_S1 + 9);
            *(b + 20 * OS1_S1 + 19) =
                prefactor_z * *(b + 20 * OS1_S1 + 9) -
                p_over_q * *(b + 37 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 3);
            *(b + 21 * OS1_S1 + 10) =
                prefactor_x * *(b + 21 * OS1_S1 + 4) -
                p_over_q * *(b + 36 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 1);
            *(b + 21 * OS1_S1 + 11) = prefactor_y * *(b + 21 * OS1_S1 + 4) -
                                      p_over_q * *(b + 38 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 4);
            *(b + 21 * OS1_S1 + 12) = prefactor_z * *(b + 21 * OS1_S1 + 4) -
                                      p_over_q * *(b + 39 * OS1_S1 + 4);
            *(b + 21 * OS1_S1 + 13) =
                prefactor_x * *(b + 21 * OS1_S1 + 7) -
                p_over_q * *(b + 36 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 7);
            *(b + 21 * OS1_S1 + 14) = prefactor_z * *(b + 21 * OS1_S1 + 5) -
                                      p_over_q * *(b + 39 * OS1_S1 + 5);
            *(b + 21 * OS1_S1 + 15) =
                prefactor_x * *(b + 21 * OS1_S1 + 9) -
                p_over_q * *(b + 36 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 9);
            *(b + 21 * OS1_S1 + 16) =
                prefactor_y * *(b + 21 * OS1_S1 + 7) -
                p_over_q * *(b + 38 * OS1_S1 + 7) +
                one_over_two_q * *(b + 10 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 2);
            *(b + 21 * OS1_S1 + 17) = prefactor_z * *(b + 21 * OS1_S1 + 7) -
                                      p_over_q * *(b + 39 * OS1_S1 + 7);
            *(b + 21 * OS1_S1 + 18) = prefactor_y * *(b + 21 * OS1_S1 + 9) -
                                      p_over_q * *(b + 38 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 9);
            *(b + 21 * OS1_S1 + 19) =
                prefactor_z * *(b + 21 * OS1_S1 + 9) -
                p_over_q * *(b + 39 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 3);
            *(b + 22 * OS1_S1 + 10) =
                prefactor_x * *(b + 22 * OS1_S1 + 4) -
                p_over_q * *(b + 37 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 1);
            *(b + 22 * OS1_S1 + 11) = prefactor_y * *(b + 22 * OS1_S1 + 4) -
                                      p_over_q * *(b + 39 * OS1_S1 + 4);
            *(b + 22 * OS1_S1 + 12) = prefactor_z * *(b + 22 * OS1_S1 + 4) -
                                      p_over_q * *(b + 40 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 4);
            *(b + 22 * OS1_S1 + 13) =
                prefactor_x * *(b + 22 * OS1_S1 + 7) -
                p_over_q * *(b + 37 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 7);
            *(b + 22 * OS1_S1 + 14) = prefactor_y * *(b + 22 * OS1_S1 + 6) -
                                      p_over_q * *(b + 39 * OS1_S1 + 6);
            *(b + 22 * OS1_S1 + 15) =
                prefactor_x * *(b + 22 * OS1_S1 + 9) -
                p_over_q * *(b + 37 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 9);
            *(b + 22 * OS1_S1 + 16) =
                prefactor_y * *(b + 22 * OS1_S1 + 7) -
                p_over_q * *(b + 39 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 2);
            *(b + 22 * OS1_S1 + 17) = prefactor_z * *(b + 22 * OS1_S1 + 7) -
                                      p_over_q * *(b + 40 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 7);
            *(b + 22 * OS1_S1 + 18) = prefactor_y * *(b + 22 * OS1_S1 + 9) -
                                      p_over_q * *(b + 39 * OS1_S1 + 9);
            *(b + 22 * OS1_S1 + 19) =
                prefactor_z * *(b + 22 * OS1_S1 + 9) -
                p_over_q * *(b + 40 * OS1_S1 + 9) +
                one_over_two_q * *(b + 10 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 3);
            *(b + 23 * OS1_S1 + 10) =
                prefactor_x * *(b + 23 * OS1_S1 + 4) -
                p_over_q * *(b + 38 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 1);
            *(b + 23 * OS1_S1 + 11) =
                prefactor_y * *(b + 23 * OS1_S1 + 4) -
                p_over_q * *(b + 41 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 4);
            *(b + 23 * OS1_S1 + 12) = prefactor_z * *(b + 23 * OS1_S1 + 4) -
                                      p_over_q * *(b + 42 * OS1_S1 + 4);
            *(b + 23 * OS1_S1 + 13) =
                prefactor_x * *(b + 23 * OS1_S1 + 7) -
                p_over_q * *(b + 38 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 7);
            *(b + 23 * OS1_S1 + 14) = prefactor_z * *(b + 23 * OS1_S1 + 5) -
                                      p_over_q * *(b + 42 * OS1_S1 + 5);
            *(b + 23 * OS1_S1 + 15) =
                prefactor_x * *(b + 23 * OS1_S1 + 9) -
                p_over_q * *(b + 38 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 9);
            *(b + 23 * OS1_S1 + 16) =
                prefactor_y * *(b + 23 * OS1_S1 + 7) -
                p_over_q * *(b + 41 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 2);
            *(b + 23 * OS1_S1 + 17) = prefactor_z * *(b + 23 * OS1_S1 + 7) -
                                      p_over_q * *(b + 42 * OS1_S1 + 7);
            *(b + 23 * OS1_S1 + 18) =
                prefactor_y * *(b + 23 * OS1_S1 + 9) -
                p_over_q * *(b + 41 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 9);
            *(b + 23 * OS1_S1 + 19) =
                prefactor_z * *(b + 23 * OS1_S1 + 9) -
                p_over_q * *(b + 42 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 3);
            *(b + 24 * OS1_S1 + 10) =
                prefactor_x * *(b + 24 * OS1_S1 + 4) -
                p_over_q * *(b + 39 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 1);
            *(b + 24 * OS1_S1 + 11) = prefactor_y * *(b + 24 * OS1_S1 + 4) -
                                      p_over_q * *(b + 42 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 4);
            *(b + 24 * OS1_S1 + 12) = prefactor_z * *(b + 24 * OS1_S1 + 4) -
                                      p_over_q * *(b + 43 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 4);
            *(b + 24 * OS1_S1 + 13) =
                prefactor_x * *(b + 24 * OS1_S1 + 7) -
                p_over_q * *(b + 39 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 7);
            *(b + 24 * OS1_S1 + 14) = prefactor_z * *(b + 24 * OS1_S1 + 5) -
                                      p_over_q * *(b + 43 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 5);
            *(b + 24 * OS1_S1 + 15) =
                prefactor_x * *(b + 24 * OS1_S1 + 9) -
                p_over_q * *(b + 39 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 9);
            *(b + 24 * OS1_S1 + 16) =
                prefactor_y * *(b + 24 * OS1_S1 + 7) -
                p_over_q * *(b + 42 * OS1_S1 + 7) +
                one_over_two_q * *(b + 12 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 2);
            *(b + 24 * OS1_S1 + 17) = prefactor_z * *(b + 24 * OS1_S1 + 7) -
                                      p_over_q * *(b + 43 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 7);
            *(b + 24 * OS1_S1 + 18) = prefactor_y * *(b + 24 * OS1_S1 + 9) -
                                      p_over_q * *(b + 42 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 9);
            *(b + 24 * OS1_S1 + 19) =
                prefactor_z * *(b + 24 * OS1_S1 + 9) -
                p_over_q * *(b + 43 * OS1_S1 + 9) +
                one_over_two_q * *(b + 11 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 3);
            *(b + 25 * OS1_S1 + 10) =
                prefactor_x * *(b + 25 * OS1_S1 + 4) -
                p_over_q * *(b + 40 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 1);
            *(b + 25 * OS1_S1 + 11) = prefactor_y * *(b + 25 * OS1_S1 + 4) -
                                      p_over_q * *(b + 43 * OS1_S1 + 4);
            *(b + 25 * OS1_S1 + 12) =
                prefactor_z * *(b + 25 * OS1_S1 + 4) -
                p_over_q * *(b + 44 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 4);
            *(b + 25 * OS1_S1 + 13) =
                prefactor_x * *(b + 25 * OS1_S1 + 7) -
                p_over_q * *(b + 40 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 7);
            *(b + 25 * OS1_S1 + 14) = prefactor_y * *(b + 25 * OS1_S1 + 6) -
                                      p_over_q * *(b + 43 * OS1_S1 + 6);
            *(b + 25 * OS1_S1 + 15) =
                prefactor_x * *(b + 25 * OS1_S1 + 9) -
                p_over_q * *(b + 40 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 9);
            *(b + 25 * OS1_S1 + 16) =
                prefactor_y * *(b + 25 * OS1_S1 + 7) -
                p_over_q * *(b + 43 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 2);
            *(b + 25 * OS1_S1 + 17) =
                prefactor_z * *(b + 25 * OS1_S1 + 7) -
                p_over_q * *(b + 44 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 7);
            *(b + 25 * OS1_S1 + 18) = prefactor_y * *(b + 25 * OS1_S1 + 9) -
                                      p_over_q * *(b + 43 * OS1_S1 + 9);
            *(b + 25 * OS1_S1 + 19) =
                prefactor_z * *(b + 25 * OS1_S1 + 9) -
                p_over_q * *(b + 44 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 3);
            *(b + 26 * OS1_S1 + 10) =
                prefactor_x * *(b + 26 * OS1_S1 + 4) -
                p_over_q * *(b + 41 * OS1_S1 + 4) +
                one_over_two_q * *(b + 16 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 1);
            *(b + 26 * OS1_S1 + 11) =
                prefactor_y * *(b + 26 * OS1_S1 + 4) -
                p_over_q * *(b + 45 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 4);
            *(b + 26 * OS1_S1 + 12) = prefactor_z * *(b + 26 * OS1_S1 + 4) -
                                      p_over_q * *(b + 46 * OS1_S1 + 4);
            *(b + 26 * OS1_S1 + 13) = prefactor_x * *(b + 26 * OS1_S1 + 7) -
                                      p_over_q * *(b + 41 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 7);
            *(b + 26 * OS1_S1 + 14) = prefactor_z * *(b + 26 * OS1_S1 + 5) -
                                      p_over_q * *(b + 46 * OS1_S1 + 5);
            *(b + 26 * OS1_S1 + 15) = prefactor_x * *(b + 26 * OS1_S1 + 9) -
                                      p_over_q * *(b + 41 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 9);
            *(b + 26 * OS1_S1 + 16) =
                prefactor_y * *(b + 26 * OS1_S1 + 7) -
                p_over_q * *(b + 45 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 2);
            *(b + 26 * OS1_S1 + 17) = prefactor_z * *(b + 26 * OS1_S1 + 7) -
                                      p_over_q * *(b + 46 * OS1_S1 + 7);
            *(b + 26 * OS1_S1 + 18) =
                prefactor_y * *(b + 26 * OS1_S1 + 9) -
                p_over_q * *(b + 45 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 9);
            *(b + 26 * OS1_S1 + 19) =
                prefactor_z * *(b + 26 * OS1_S1 + 9) -
                p_over_q * *(b + 46 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 3);
            *(b + 27 * OS1_S1 + 10) =
                prefactor_x * *(b + 27 * OS1_S1 + 4) -
                p_over_q * *(b + 42 * OS1_S1 + 4) +
                one_over_two_q * *(b + 17 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 1);
            *(b + 27 * OS1_S1 + 11) =
                prefactor_y * *(b + 27 * OS1_S1 + 4) -
                p_over_q * *(b + 46 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 4);
            *(b + 27 * OS1_S1 + 12) = prefactor_z * *(b + 27 * OS1_S1 + 4) -
                                      p_over_q * *(b + 47 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 4);
            *(b + 27 * OS1_S1 + 13) = prefactor_x * *(b + 27 * OS1_S1 + 7) -
                                      p_over_q * *(b + 42 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 7);
            *(b + 27 * OS1_S1 + 14) = prefactor_z * *(b + 27 * OS1_S1 + 5) -
                                      p_over_q * *(b + 47 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 5);
            *(b + 27 * OS1_S1 + 15) = prefactor_x * *(b + 27 * OS1_S1 + 9) -
                                      p_over_q * *(b + 42 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 9);
            *(b + 27 * OS1_S1 + 16) =
                prefactor_y * *(b + 27 * OS1_S1 + 7) -
                p_over_q * *(b + 46 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 2);
            *(b + 27 * OS1_S1 + 17) = prefactor_z * *(b + 27 * OS1_S1 + 7) -
                                      p_over_q * *(b + 47 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 7);
            *(b + 27 * OS1_S1 + 18) =
                prefactor_y * *(b + 27 * OS1_S1 + 9) -
                p_over_q * *(b + 46 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 9);
            *(b + 27 * OS1_S1 + 19) =
                prefactor_z * *(b + 27 * OS1_S1 + 9) -
                p_over_q * *(b + 47 * OS1_S1 + 9) +
                one_over_two_q * *(b + 13 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 3);
            *(b + 28 * OS1_S1 + 10) =
                prefactor_x * *(b + 28 * OS1_S1 + 4) -
                p_over_q * *(b + 43 * OS1_S1 + 4) +
                one_over_two_q * *(b + 18 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 1);
            *(b + 28 * OS1_S1 + 11) = prefactor_y * *(b + 28 * OS1_S1 + 4) -
                                      p_over_q * *(b + 47 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 4);
            *(b + 28 * OS1_S1 + 12) =
                prefactor_z * *(b + 28 * OS1_S1 + 4) -
                p_over_q * *(b + 48 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 4);
            *(b + 28 * OS1_S1 + 13) = prefactor_x * *(b + 28 * OS1_S1 + 7) -
                                      p_over_q * *(b + 43 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 7);
            *(b + 28 * OS1_S1 + 14) = prefactor_y * *(b + 28 * OS1_S1 + 6) -
                                      p_over_q * *(b + 47 * OS1_S1 + 6) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 6);
            *(b + 28 * OS1_S1 + 15) = prefactor_x * *(b + 28 * OS1_S1 + 9) -
                                      p_over_q * *(b + 43 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 9);
            *(b + 28 * OS1_S1 + 16) =
                prefactor_y * *(b + 28 * OS1_S1 + 7) -
                p_over_q * *(b + 47 * OS1_S1 + 7) +
                one_over_two_q * *(b + 15 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 2);
            *(b + 28 * OS1_S1 + 17) =
                prefactor_z * *(b + 28 * OS1_S1 + 7) -
                p_over_q * *(b + 48 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 7);
            *(b + 28 * OS1_S1 + 18) = prefactor_y * *(b + 28 * OS1_S1 + 9) -
                                      p_over_q * *(b + 47 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 9);
            *(b + 28 * OS1_S1 + 19) =
                prefactor_z * *(b + 28 * OS1_S1 + 9) -
                p_over_q * *(b + 48 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 3);
            *(b + 29 * OS1_S1 + 10) =
                prefactor_x * *(b + 29 * OS1_S1 + 4) -
                p_over_q * *(b + 44 * OS1_S1 + 4) +
                one_over_two_q * *(b + 19 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 1);
            *(b + 29 * OS1_S1 + 11) = prefactor_y * *(b + 29 * OS1_S1 + 4) -
                                      p_over_q * *(b + 48 * OS1_S1 + 4);
            *(b + 29 * OS1_S1 + 12) =
                prefactor_z * *(b + 29 * OS1_S1 + 4) -
                p_over_q * *(b + 49 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 4);
            *(b + 29 * OS1_S1 + 13) = prefactor_x * *(b + 29 * OS1_S1 + 7) -
                                      p_over_q * *(b + 44 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 7);
            *(b + 29 * OS1_S1 + 14) = prefactor_y * *(b + 29 * OS1_S1 + 6) -
                                      p_over_q * *(b + 48 * OS1_S1 + 6);
            *(b + 29 * OS1_S1 + 15) = prefactor_x * *(b + 29 * OS1_S1 + 9) -
                                      p_over_q * *(b + 44 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 9);
            *(b + 29 * OS1_S1 + 16) =
                prefactor_y * *(b + 29 * OS1_S1 + 7) -
                p_over_q * *(b + 48 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 2);
            *(b + 29 * OS1_S1 + 17) =
                prefactor_z * *(b + 29 * OS1_S1 + 7) -
                p_over_q * *(b + 49 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 7);
            *(b + 29 * OS1_S1 + 18) = prefactor_y * *(b + 29 * OS1_S1 + 9) -
                                      p_over_q * *(b + 48 * OS1_S1 + 9);
            *(b + 29 * OS1_S1 + 19) =
                prefactor_z * *(b + 29 * OS1_S1 + 9) -
                p_over_q * *(b + 49 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 3);
            *(b + 30 * OS1_S1 + 10) =
                prefactor_x * *(b + 30 * OS1_S1 + 4) -
                p_over_q * *(b + 45 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 1);
            *(b + 30 * OS1_S1 + 11) =
                prefactor_y * *(b + 30 * OS1_S1 + 4) -
                p_over_q * *(b + 50 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 4);
            *(b + 30 * OS1_S1 + 12) = prefactor_z * *(b + 30 * OS1_S1 + 4) -
                                      p_over_q * *(b + 51 * OS1_S1 + 4);
            *(b + 30 * OS1_S1 + 13) = prefactor_x * *(b + 30 * OS1_S1 + 7) -
                                      p_over_q * *(b + 45 * OS1_S1 + 7);
            *(b + 30 * OS1_S1 + 14) = prefactor_z * *(b + 30 * OS1_S1 + 5) -
                                      p_over_q * *(b + 51 * OS1_S1 + 5);
            *(b + 30 * OS1_S1 + 15) = prefactor_x * *(b + 30 * OS1_S1 + 9) -
                                      p_over_q * *(b + 45 * OS1_S1 + 9);
            *(b + 30 * OS1_S1 + 16) =
                prefactor_y * *(b + 30 * OS1_S1 + 7) -
                p_over_q * *(b + 50 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 2);
            *(b + 30 * OS1_S1 + 17) = prefactor_z * *(b + 30 * OS1_S1 + 7) -
                                      p_over_q * *(b + 51 * OS1_S1 + 7);
            *(b + 30 * OS1_S1 + 18) =
                prefactor_y * *(b + 30 * OS1_S1 + 9) -
                p_over_q * *(b + 50 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 9);
            *(b + 30 * OS1_S1 + 19) =
                prefactor_z * *(b + 30 * OS1_S1 + 9) -
                p_over_q * *(b + 51 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 3);
            *(b + 31 * OS1_S1 + 10) =
                prefactor_x * *(b + 31 * OS1_S1 + 4) -
                p_over_q * *(b + 46 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 1);
            *(b + 31 * OS1_S1 + 11) =
                prefactor_y * *(b + 31 * OS1_S1 + 4) -
                p_over_q * *(b + 51 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 4);
            *(b + 31 * OS1_S1 + 12) = prefactor_z * *(b + 31 * OS1_S1 + 4) -
                                      p_over_q * *(b + 52 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 4);
            *(b + 31 * OS1_S1 + 13) = prefactor_x * *(b + 31 * OS1_S1 + 7) -
                                      p_over_q * *(b + 46 * OS1_S1 + 7);
            *(b + 31 * OS1_S1 + 14) = prefactor_x * *(b + 31 * OS1_S1 + 8) -
                                      p_over_q * *(b + 46 * OS1_S1 + 8);
            *(b + 31 * OS1_S1 + 15) = prefactor_x * *(b + 31 * OS1_S1 + 9) -
                                      p_over_q * *(b + 46 * OS1_S1 + 9);
            *(b + 31 * OS1_S1 + 16) =
                prefactor_y * *(b + 31 * OS1_S1 + 7) -
                p_over_q * *(b + 51 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 2);
            *(b + 31 * OS1_S1 + 17) = prefactor_z * *(b + 31 * OS1_S1 + 7) -
                                      p_over_q * *(b + 52 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 7);
            *(b + 31 * OS1_S1 + 18) =
                prefactor_y * *(b + 31 * OS1_S1 + 9) -
                p_over_q * *(b + 51 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 9);
            *(b + 31 * OS1_S1 + 19) =
                prefactor_z * *(b + 31 * OS1_S1 + 9) -
                p_over_q * *(b + 52 * OS1_S1 + 9) +
                one_over_two_q * *(b + 16 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 3);
            *(b + 32 * OS1_S1 + 10) =
                prefactor_x * *(b + 32 * OS1_S1 + 4) -
                p_over_q * *(b + 47 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 1);
            *(b + 32 * OS1_S1 + 11) =
                prefactor_y * *(b + 32 * OS1_S1 + 4) -
                p_over_q * *(b + 52 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 4);
            *(b + 32 * OS1_S1 + 12) =
                prefactor_z * *(b + 32 * OS1_S1 + 4) -
                p_over_q * *(b + 53 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 4);
            *(b + 32 * OS1_S1 + 13) = prefactor_x * *(b + 32 * OS1_S1 + 7) -
                                      p_over_q * *(b + 47 * OS1_S1 + 7);
            *(b + 32 * OS1_S1 + 14) = prefactor_x * *(b + 32 * OS1_S1 + 8) -
                                      p_over_q * *(b + 47 * OS1_S1 + 8);
            *(b + 32 * OS1_S1 + 15) = prefactor_x * *(b + 32 * OS1_S1 + 9) -
                                      p_over_q * *(b + 47 * OS1_S1 + 9);
            *(b + 32 * OS1_S1 + 16) =
                prefactor_y * *(b + 32 * OS1_S1 + 7) -
                p_over_q * *(b + 52 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 2);
            *(b + 32 * OS1_S1 + 17) =
                prefactor_z * *(b + 32 * OS1_S1 + 7) -
                p_over_q * *(b + 53 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 7);
            *(b + 32 * OS1_S1 + 18) =
                prefactor_y * *(b + 32 * OS1_S1 + 9) -
                p_over_q * *(b + 52 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 9);
            *(b + 32 * OS1_S1 + 19) =
                prefactor_z * *(b + 32 * OS1_S1 + 9) -
                p_over_q * *(b + 53 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 3);
            *(b + 33 * OS1_S1 + 10) =
                prefactor_x * *(b + 33 * OS1_S1 + 4) -
                p_over_q * *(b + 48 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 1);
            *(b + 33 * OS1_S1 + 11) = prefactor_y * *(b + 33 * OS1_S1 + 4) -
                                      p_over_q * *(b + 53 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 4);
            *(b + 33 * OS1_S1 + 12) =
                prefactor_z * *(b + 33 * OS1_S1 + 4) -
                p_over_q * *(b + 54 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 4);
            *(b + 33 * OS1_S1 + 13) = prefactor_x * *(b + 33 * OS1_S1 + 7) -
                                      p_over_q * *(b + 48 * OS1_S1 + 7);
            *(b + 33 * OS1_S1 + 14) = prefactor_x * *(b + 33 * OS1_S1 + 8) -
                                      p_over_q * *(b + 48 * OS1_S1 + 8);
            *(b + 33 * OS1_S1 + 15) = prefactor_x * *(b + 33 * OS1_S1 + 9) -
                                      p_over_q * *(b + 48 * OS1_S1 + 9);
            *(b + 33 * OS1_S1 + 16) =
                prefactor_y * *(b + 33 * OS1_S1 + 7) -
                p_over_q * *(b + 53 * OS1_S1 + 7) +
                one_over_two_q * *(b + 19 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 2);
            *(b + 33 * OS1_S1 + 17) =
                prefactor_z * *(b + 33 * OS1_S1 + 7) -
                p_over_q * *(b + 54 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 7);
            *(b + 33 * OS1_S1 + 18) = prefactor_y * *(b + 33 * OS1_S1 + 9) -
                                      p_over_q * *(b + 53 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 9);
            *(b + 33 * OS1_S1 + 19) =
                prefactor_z * *(b + 33 * OS1_S1 + 9) -
                p_over_q * *(b + 54 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 3);
            *(b + 34 * OS1_S1 + 10) =
                prefactor_x * *(b + 34 * OS1_S1 + 4) -
                p_over_q * *(b + 49 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 1);
            *(b + 34 * OS1_S1 + 11) = prefactor_y * *(b + 34 * OS1_S1 + 4) -
                                      p_over_q * *(b + 54 * OS1_S1 + 4);
            *(b + 34 * OS1_S1 + 12) =
                prefactor_z * *(b + 34 * OS1_S1 + 4) -
                p_over_q * *(b + 55 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 4);
            *(b + 34 * OS1_S1 + 13) = prefactor_x * *(b + 34 * OS1_S1 + 7) -
                                      p_over_q * *(b + 49 * OS1_S1 + 7);
            *(b + 34 * OS1_S1 + 14) = prefactor_y * *(b + 34 * OS1_S1 + 6) -
                                      p_over_q * *(b + 54 * OS1_S1 + 6);
            *(b + 34 * OS1_S1 + 15) = prefactor_x * *(b + 34 * OS1_S1 + 9) -
                                      p_over_q * *(b + 49 * OS1_S1 + 9);
            *(b + 34 * OS1_S1 + 16) =
                prefactor_y * *(b + 34 * OS1_S1 + 7) -
                p_over_q * *(b + 54 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 2);
            *(b + 34 * OS1_S1 + 17) =
                prefactor_z * *(b + 34 * OS1_S1 + 7) -
                p_over_q * *(b + 55 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 7);
            *(b + 34 * OS1_S1 + 18) = prefactor_y * *(b + 34 * OS1_S1 + 9) -
                                      p_over_q * *(b + 54 * OS1_S1 + 9);
            *(b + 34 * OS1_S1 + 19) =
                prefactor_z * *(b + 34 * OS1_S1 + 9) -
                p_over_q * *(b + 55 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 3);
            return;
        }
        void transfer_5_3(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 35 * OS1_S1 + 10) =
                prefactor_x * *(b + 35 * OS1_S1 + 4) -
                p_over_q * *(b + 56 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 1);
            *(b + 35 * OS1_S1 + 11) = prefactor_y * *(b + 35 * OS1_S1 + 4) -
                                      p_over_q * *(b + 57 * OS1_S1 + 4);
            *(b + 35 * OS1_S1 + 12) = prefactor_z * *(b + 35 * OS1_S1 + 4) -
                                      p_over_q * *(b + 58 * OS1_S1 + 4);
            *(b + 35 * OS1_S1 + 13) =
                prefactor_x * *(b + 35 * OS1_S1 + 7) -
                p_over_q * *(b + 56 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 7);
            *(b + 35 * OS1_S1 + 14) = prefactor_z * *(b + 35 * OS1_S1 + 5) -
                                      p_over_q * *(b + 58 * OS1_S1 + 5);
            *(b + 35 * OS1_S1 + 15) =
                prefactor_x * *(b + 35 * OS1_S1 + 9) -
                p_over_q * *(b + 56 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 9);
            *(b + 35 * OS1_S1 + 16) =
                prefactor_y * *(b + 35 * OS1_S1 + 7) -
                p_over_q * *(b + 57 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 2);
            *(b + 35 * OS1_S1 + 17) = prefactor_z * *(b + 35 * OS1_S1 + 7) -
                                      p_over_q * *(b + 58 * OS1_S1 + 7);
            *(b + 35 * OS1_S1 + 18) = prefactor_y * *(b + 35 * OS1_S1 + 9) -
                                      p_over_q * *(b + 57 * OS1_S1 + 9);
            *(b + 35 * OS1_S1 + 19) =
                prefactor_z * *(b + 35 * OS1_S1 + 9) -
                p_over_q * *(b + 58 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 3);
            *(b + 36 * OS1_S1 + 10) =
                prefactor_x * *(b + 36 * OS1_S1 + 4) -
                p_over_q * *(b + 57 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 1);
            *(b + 36 * OS1_S1 + 11) = prefactor_y * *(b + 36 * OS1_S1 + 4) -
                                      p_over_q * *(b + 59 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 4);
            *(b + 36 * OS1_S1 + 12) = prefactor_z * *(b + 36 * OS1_S1 + 4) -
                                      p_over_q * *(b + 60 * OS1_S1 + 4);
            *(b + 36 * OS1_S1 + 13) =
                prefactor_x * *(b + 36 * OS1_S1 + 7) -
                p_over_q * *(b + 57 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 7);
            *(b + 36 * OS1_S1 + 14) = prefactor_z * *(b + 36 * OS1_S1 + 5) -
                                      p_over_q * *(b + 60 * OS1_S1 + 5);
            *(b + 36 * OS1_S1 + 15) =
                prefactor_x * *(b + 36 * OS1_S1 + 9) -
                p_over_q * *(b + 57 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 9);
            *(b + 36 * OS1_S1 + 16) =
                prefactor_y * *(b + 36 * OS1_S1 + 7) -
                p_over_q * *(b + 59 * OS1_S1 + 7) +
                one_over_two_q * *(b + 20 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 2);
            *(b + 36 * OS1_S1 + 17) = prefactor_z * *(b + 36 * OS1_S1 + 7) -
                                      p_over_q * *(b + 60 * OS1_S1 + 7);
            *(b + 36 * OS1_S1 + 18) = prefactor_y * *(b + 36 * OS1_S1 + 9) -
                                      p_over_q * *(b + 59 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 9);
            *(b + 36 * OS1_S1 + 19) =
                prefactor_z * *(b + 36 * OS1_S1 + 9) -
                p_over_q * *(b + 60 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 3);
            *(b + 37 * OS1_S1 + 10) =
                prefactor_x * *(b + 37 * OS1_S1 + 4) -
                p_over_q * *(b + 58 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 1);
            *(b + 37 * OS1_S1 + 11) = prefactor_y * *(b + 37 * OS1_S1 + 4) -
                                      p_over_q * *(b + 60 * OS1_S1 + 4);
            *(b + 37 * OS1_S1 + 12) = prefactor_z * *(b + 37 * OS1_S1 + 4) -
                                      p_over_q * *(b + 61 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 4);
            *(b + 37 * OS1_S1 + 13) =
                prefactor_x * *(b + 37 * OS1_S1 + 7) -
                p_over_q * *(b + 58 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 7);
            *(b + 37 * OS1_S1 + 14) = prefactor_y * *(b + 37 * OS1_S1 + 6) -
                                      p_over_q * *(b + 60 * OS1_S1 + 6);
            *(b + 37 * OS1_S1 + 15) =
                prefactor_x * *(b + 37 * OS1_S1 + 9) -
                p_over_q * *(b + 58 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 9);
            *(b + 37 * OS1_S1 + 16) =
                prefactor_y * *(b + 37 * OS1_S1 + 7) -
                p_over_q * *(b + 60 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 2);
            *(b + 37 * OS1_S1 + 17) = prefactor_z * *(b + 37 * OS1_S1 + 7) -
                                      p_over_q * *(b + 61 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 7);
            *(b + 37 * OS1_S1 + 18) = prefactor_y * *(b + 37 * OS1_S1 + 9) -
                                      p_over_q * *(b + 60 * OS1_S1 + 9);
            *(b + 37 * OS1_S1 + 19) =
                prefactor_z * *(b + 37 * OS1_S1 + 9) -
                p_over_q * *(b + 61 * OS1_S1 + 9) +
                one_over_two_q * *(b + 20 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 3);
            *(b + 38 * OS1_S1 + 10) =
                prefactor_x * *(b + 38 * OS1_S1 + 4) -
                p_over_q * *(b + 59 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 1);
            *(b + 38 * OS1_S1 + 11) =
                prefactor_y * *(b + 38 * OS1_S1 + 4) -
                p_over_q * *(b + 62 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 4);
            *(b + 38 * OS1_S1 + 12) = prefactor_z * *(b + 38 * OS1_S1 + 4) -
                                      p_over_q * *(b + 63 * OS1_S1 + 4);
            *(b + 38 * OS1_S1 + 13) =
                prefactor_x * *(b + 38 * OS1_S1 + 7) -
                p_over_q * *(b + 59 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 7);
            *(b + 38 * OS1_S1 + 14) = prefactor_z * *(b + 38 * OS1_S1 + 5) -
                                      p_over_q * *(b + 63 * OS1_S1 + 5);
            *(b + 38 * OS1_S1 + 15) =
                prefactor_x * *(b + 38 * OS1_S1 + 9) -
                p_over_q * *(b + 59 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 9);
            *(b + 38 * OS1_S1 + 16) =
                prefactor_y * *(b + 38 * OS1_S1 + 7) -
                p_over_q * *(b + 62 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 2);
            *(b + 38 * OS1_S1 + 17) = prefactor_z * *(b + 38 * OS1_S1 + 7) -
                                      p_over_q * *(b + 63 * OS1_S1 + 7);
            *(b + 38 * OS1_S1 + 18) =
                prefactor_y * *(b + 38 * OS1_S1 + 9) -
                p_over_q * *(b + 62 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 9);
            *(b + 38 * OS1_S1 + 19) =
                prefactor_z * *(b + 38 * OS1_S1 + 9) -
                p_over_q * *(b + 63 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 3);
            *(b + 39 * OS1_S1 + 10) =
                prefactor_x * *(b + 39 * OS1_S1 + 4) -
                p_over_q * *(b + 60 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 1);
            *(b + 39 * OS1_S1 + 11) = prefactor_y * *(b + 39 * OS1_S1 + 4) -
                                      p_over_q * *(b + 63 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 4);
            *(b + 39 * OS1_S1 + 12) = prefactor_z * *(b + 39 * OS1_S1 + 4) -
                                      p_over_q * *(b + 64 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 4);
            *(b + 39 * OS1_S1 + 13) =
                prefactor_x * *(b + 39 * OS1_S1 + 7) -
                p_over_q * *(b + 60 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 7);
            *(b + 39 * OS1_S1 + 14) = prefactor_z * *(b + 39 * OS1_S1 + 5) -
                                      p_over_q * *(b + 64 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 5);
            *(b + 39 * OS1_S1 + 15) =
                prefactor_x * *(b + 39 * OS1_S1 + 9) -
                p_over_q * *(b + 60 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 9);
            *(b + 39 * OS1_S1 + 16) =
                prefactor_y * *(b + 39 * OS1_S1 + 7) -
                p_over_q * *(b + 63 * OS1_S1 + 7) +
                one_over_two_q * *(b + 22 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 2);
            *(b + 39 * OS1_S1 + 17) = prefactor_z * *(b + 39 * OS1_S1 + 7) -
                                      p_over_q * *(b + 64 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 7);
            *(b + 39 * OS1_S1 + 18) = prefactor_y * *(b + 39 * OS1_S1 + 9) -
                                      p_over_q * *(b + 63 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 9);
            *(b + 39 * OS1_S1 + 19) =
                prefactor_z * *(b + 39 * OS1_S1 + 9) -
                p_over_q * *(b + 64 * OS1_S1 + 9) +
                one_over_two_q * *(b + 21 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 3);
            *(b + 40 * OS1_S1 + 10) =
                prefactor_x * *(b + 40 * OS1_S1 + 4) -
                p_over_q * *(b + 61 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 1);
            *(b + 40 * OS1_S1 + 11) = prefactor_y * *(b + 40 * OS1_S1 + 4) -
                                      p_over_q * *(b + 64 * OS1_S1 + 4);
            *(b + 40 * OS1_S1 + 12) =
                prefactor_z * *(b + 40 * OS1_S1 + 4) -
                p_over_q * *(b + 65 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 4);
            *(b + 40 * OS1_S1 + 13) =
                prefactor_x * *(b + 40 * OS1_S1 + 7) -
                p_over_q * *(b + 61 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 7);
            *(b + 40 * OS1_S1 + 14) = prefactor_y * *(b + 40 * OS1_S1 + 6) -
                                      p_over_q * *(b + 64 * OS1_S1 + 6);
            *(b + 40 * OS1_S1 + 15) =
                prefactor_x * *(b + 40 * OS1_S1 + 9) -
                p_over_q * *(b + 61 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 9);
            *(b + 40 * OS1_S1 + 16) =
                prefactor_y * *(b + 40 * OS1_S1 + 7) -
                p_over_q * *(b + 64 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 2);
            *(b + 40 * OS1_S1 + 17) =
                prefactor_z * *(b + 40 * OS1_S1 + 7) -
                p_over_q * *(b + 65 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 7);
            *(b + 40 * OS1_S1 + 18) = prefactor_y * *(b + 40 * OS1_S1 + 9) -
                                      p_over_q * *(b + 64 * OS1_S1 + 9);
            *(b + 40 * OS1_S1 + 19) =
                prefactor_z * *(b + 40 * OS1_S1 + 9) -
                p_over_q * *(b + 65 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 3);
            *(b + 41 * OS1_S1 + 10) =
                prefactor_x * *(b + 41 * OS1_S1 + 4) -
                p_over_q * *(b + 62 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 1);
            *(b + 41 * OS1_S1 + 11) =
                prefactor_y * *(b + 41 * OS1_S1 + 4) -
                p_over_q * *(b + 66 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 4);
            *(b + 41 * OS1_S1 + 12) = prefactor_z * *(b + 41 * OS1_S1 + 4) -
                                      p_over_q * *(b + 67 * OS1_S1 + 4);
            *(b + 41 * OS1_S1 + 13) =
                prefactor_x * *(b + 41 * OS1_S1 + 7) -
                p_over_q * *(b + 62 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 7);
            *(b + 41 * OS1_S1 + 14) = prefactor_z * *(b + 41 * OS1_S1 + 5) -
                                      p_over_q * *(b + 67 * OS1_S1 + 5);
            *(b + 41 * OS1_S1 + 15) =
                prefactor_x * *(b + 41 * OS1_S1 + 9) -
                p_over_q * *(b + 62 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 9);
            *(b + 41 * OS1_S1 + 16) =
                prefactor_y * *(b + 41 * OS1_S1 + 7) -
                p_over_q * *(b + 66 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 2);
            *(b + 41 * OS1_S1 + 17) = prefactor_z * *(b + 41 * OS1_S1 + 7) -
                                      p_over_q * *(b + 67 * OS1_S1 + 7);
            *(b + 41 * OS1_S1 + 18) =
                prefactor_y * *(b + 41 * OS1_S1 + 9) -
                p_over_q * *(b + 66 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 9);
            *(b + 41 * OS1_S1 + 19) =
                prefactor_z * *(b + 41 * OS1_S1 + 9) -
                p_over_q * *(b + 67 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 3);
            *(b + 42 * OS1_S1 + 10) =
                prefactor_x * *(b + 42 * OS1_S1 + 4) -
                p_over_q * *(b + 63 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 1);
            *(b + 42 * OS1_S1 + 11) =
                prefactor_y * *(b + 42 * OS1_S1 + 4) -
                p_over_q * *(b + 67 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 4);
            *(b + 42 * OS1_S1 + 12) = prefactor_z * *(b + 42 * OS1_S1 + 4) -
                                      p_over_q * *(b + 68 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 4);
            *(b + 42 * OS1_S1 + 13) =
                prefactor_x * *(b + 42 * OS1_S1 + 7) -
                p_over_q * *(b + 63 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 7);
            *(b + 42 * OS1_S1 + 14) = prefactor_z * *(b + 42 * OS1_S1 + 5) -
                                      p_over_q * *(b + 68 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 5);
            *(b + 42 * OS1_S1 + 15) =
                prefactor_x * *(b + 42 * OS1_S1 + 9) -
                p_over_q * *(b + 63 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 9);
            *(b + 42 * OS1_S1 + 16) =
                prefactor_y * *(b + 42 * OS1_S1 + 7) -
                p_over_q * *(b + 67 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 2);
            *(b + 42 * OS1_S1 + 17) = prefactor_z * *(b + 42 * OS1_S1 + 7) -
                                      p_over_q * *(b + 68 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 7);
            *(b + 42 * OS1_S1 + 18) =
                prefactor_y * *(b + 42 * OS1_S1 + 9) -
                p_over_q * *(b + 67 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 9);
            *(b + 42 * OS1_S1 + 19) =
                prefactor_z * *(b + 42 * OS1_S1 + 9) -
                p_over_q * *(b + 68 * OS1_S1 + 9) +
                one_over_two_q * *(b + 23 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 3);
            *(b + 43 * OS1_S1 + 10) =
                prefactor_x * *(b + 43 * OS1_S1 + 4) -
                p_over_q * *(b + 64 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 1);
            *(b + 43 * OS1_S1 + 11) = prefactor_y * *(b + 43 * OS1_S1 + 4) -
                                      p_over_q * *(b + 68 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 4);
            *(b + 43 * OS1_S1 + 12) =
                prefactor_z * *(b + 43 * OS1_S1 + 4) -
                p_over_q * *(b + 69 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 4);
            *(b + 43 * OS1_S1 + 13) =
                prefactor_x * *(b + 43 * OS1_S1 + 7) -
                p_over_q * *(b + 64 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 7);
            *(b + 43 * OS1_S1 + 14) = prefactor_y * *(b + 43 * OS1_S1 + 6) -
                                      p_over_q * *(b + 68 * OS1_S1 + 6) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 6);
            *(b + 43 * OS1_S1 + 15) =
                prefactor_x * *(b + 43 * OS1_S1 + 9) -
                p_over_q * *(b + 64 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 9);
            *(b + 43 * OS1_S1 + 16) =
                prefactor_y * *(b + 43 * OS1_S1 + 7) -
                p_over_q * *(b + 68 * OS1_S1 + 7) +
                one_over_two_q * *(b + 25 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 2);
            *(b + 43 * OS1_S1 + 17) =
                prefactor_z * *(b + 43 * OS1_S1 + 7) -
                p_over_q * *(b + 69 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 7);
            *(b + 43 * OS1_S1 + 18) = prefactor_y * *(b + 43 * OS1_S1 + 9) -
                                      p_over_q * *(b + 68 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 9);
            *(b + 43 * OS1_S1 + 19) =
                prefactor_z * *(b + 43 * OS1_S1 + 9) -
                p_over_q * *(b + 69 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 3);
            *(b + 44 * OS1_S1 + 10) =
                prefactor_x * *(b + 44 * OS1_S1 + 4) -
                p_over_q * *(b + 65 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 1);
            *(b + 44 * OS1_S1 + 11) = prefactor_y * *(b + 44 * OS1_S1 + 4) -
                                      p_over_q * *(b + 69 * OS1_S1 + 4);
            *(b + 44 * OS1_S1 + 12) =
                prefactor_z * *(b + 44 * OS1_S1 + 4) -
                p_over_q * *(b + 70 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 4);
            *(b + 44 * OS1_S1 + 13) =
                prefactor_x * *(b + 44 * OS1_S1 + 7) -
                p_over_q * *(b + 65 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 7);
            *(b + 44 * OS1_S1 + 14) = prefactor_y * *(b + 44 * OS1_S1 + 6) -
                                      p_over_q * *(b + 69 * OS1_S1 + 6);
            *(b + 44 * OS1_S1 + 15) =
                prefactor_x * *(b + 44 * OS1_S1 + 9) -
                p_over_q * *(b + 65 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 9);
            *(b + 44 * OS1_S1 + 16) =
                prefactor_y * *(b + 44 * OS1_S1 + 7) -
                p_over_q * *(b + 69 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 2);
            *(b + 44 * OS1_S1 + 17) =
                prefactor_z * *(b + 44 * OS1_S1 + 7) -
                p_over_q * *(b + 70 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 7);
            *(b + 44 * OS1_S1 + 18) = prefactor_y * *(b + 44 * OS1_S1 + 9) -
                                      p_over_q * *(b + 69 * OS1_S1 + 9);
            *(b + 44 * OS1_S1 + 19) =
                prefactor_z * *(b + 44 * OS1_S1 + 9) -
                p_over_q * *(b + 70 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 3);
            *(b + 45 * OS1_S1 + 10) =
                prefactor_x * *(b + 45 * OS1_S1 + 4) -
                p_over_q * *(b + 66 * OS1_S1 + 4) +
                one_over_two_q * *(b + 30 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 1);
            *(b + 45 * OS1_S1 + 11) =
                prefactor_y * *(b + 45 * OS1_S1 + 4) -
                p_over_q * *(b + 71 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 4);
            *(b + 45 * OS1_S1 + 12) = prefactor_z * *(b + 45 * OS1_S1 + 4) -
                                      p_over_q * *(b + 72 * OS1_S1 + 4);
            *(b + 45 * OS1_S1 + 13) = prefactor_x * *(b + 45 * OS1_S1 + 7) -
                                      p_over_q * *(b + 66 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 7);
            *(b + 45 * OS1_S1 + 14) = prefactor_z * *(b + 45 * OS1_S1 + 5) -
                                      p_over_q * *(b + 72 * OS1_S1 + 5);
            *(b + 45 * OS1_S1 + 15) = prefactor_x * *(b + 45 * OS1_S1 + 9) -
                                      p_over_q * *(b + 66 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 9);
            *(b + 45 * OS1_S1 + 16) =
                prefactor_y * *(b + 45 * OS1_S1 + 7) -
                p_over_q * *(b + 71 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 2);
            *(b + 45 * OS1_S1 + 17) = prefactor_z * *(b + 45 * OS1_S1 + 7) -
                                      p_over_q * *(b + 72 * OS1_S1 + 7);
            *(b + 45 * OS1_S1 + 18) =
                prefactor_y * *(b + 45 * OS1_S1 + 9) -
                p_over_q * *(b + 71 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 9);
            *(b + 45 * OS1_S1 + 19) =
                prefactor_z * *(b + 45 * OS1_S1 + 9) -
                p_over_q * *(b + 72 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 3);
            *(b + 46 * OS1_S1 + 10) =
                prefactor_x * *(b + 46 * OS1_S1 + 4) -
                p_over_q * *(b + 67 * OS1_S1 + 4) +
                one_over_two_q * *(b + 31 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 1);
            *(b + 46 * OS1_S1 + 11) =
                prefactor_y * *(b + 46 * OS1_S1 + 4) -
                p_over_q * *(b + 72 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 4);
            *(b + 46 * OS1_S1 + 12) = prefactor_z * *(b + 46 * OS1_S1 + 4) -
                                      p_over_q * *(b + 73 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 4);
            *(b + 46 * OS1_S1 + 13) = prefactor_x * *(b + 46 * OS1_S1 + 7) -
                                      p_over_q * *(b + 67 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 7);
            *(b + 46 * OS1_S1 + 14) = prefactor_z * *(b + 46 * OS1_S1 + 5) -
                                      p_over_q * *(b + 73 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 5);
            *(b + 46 * OS1_S1 + 15) = prefactor_x * *(b + 46 * OS1_S1 + 9) -
                                      p_over_q * *(b + 67 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 9);
            *(b + 46 * OS1_S1 + 16) =
                prefactor_y * *(b + 46 * OS1_S1 + 7) -
                p_over_q * *(b + 72 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 2);
            *(b + 46 * OS1_S1 + 17) = prefactor_z * *(b + 46 * OS1_S1 + 7) -
                                      p_over_q * *(b + 73 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 7);
            *(b + 46 * OS1_S1 + 18) =
                prefactor_y * *(b + 46 * OS1_S1 + 9) -
                p_over_q * *(b + 72 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 9);
            *(b + 46 * OS1_S1 + 19) =
                prefactor_z * *(b + 46 * OS1_S1 + 9) -
                p_over_q * *(b + 73 * OS1_S1 + 9) +
                one_over_two_q * *(b + 26 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 3);
            *(b + 47 * OS1_S1 + 10) =
                prefactor_x * *(b + 47 * OS1_S1 + 4) -
                p_over_q * *(b + 68 * OS1_S1 + 4) +
                one_over_two_q * *(b + 32 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 1);
            *(b + 47 * OS1_S1 + 11) =
                prefactor_y * *(b + 47 * OS1_S1 + 4) -
                p_over_q * *(b + 73 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 4);
            *(b + 47 * OS1_S1 + 12) =
                prefactor_z * *(b + 47 * OS1_S1 + 4) -
                p_over_q * *(b + 74 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 4);
            *(b + 47 * OS1_S1 + 13) = prefactor_x * *(b + 47 * OS1_S1 + 7) -
                                      p_over_q * *(b + 68 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 7);
            *(b + 47 * OS1_S1 + 14) = prefactor_x * *(b + 47 * OS1_S1 + 8) -
                                      p_over_q * *(b + 68 * OS1_S1 + 8) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 8);
            *(b + 47 * OS1_S1 + 15) = prefactor_x * *(b + 47 * OS1_S1 + 9) -
                                      p_over_q * *(b + 68 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 9);
            *(b + 47 * OS1_S1 + 16) =
                prefactor_y * *(b + 47 * OS1_S1 + 7) -
                p_over_q * *(b + 73 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 2);
            *(b + 47 * OS1_S1 + 17) =
                prefactor_z * *(b + 47 * OS1_S1 + 7) -
                p_over_q * *(b + 74 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 7);
            *(b + 47 * OS1_S1 + 18) =
                prefactor_y * *(b + 47 * OS1_S1 + 9) -
                p_over_q * *(b + 73 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 9);
            *(b + 47 * OS1_S1 + 19) =
                prefactor_z * *(b + 47 * OS1_S1 + 9) -
                p_over_q * *(b + 74 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 3);
            *(b + 48 * OS1_S1 + 10) =
                prefactor_x * *(b + 48 * OS1_S1 + 4) -
                p_over_q * *(b + 69 * OS1_S1 + 4) +
                one_over_two_q * *(b + 33 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 1);
            *(b + 48 * OS1_S1 + 11) = prefactor_y * *(b + 48 * OS1_S1 + 4) -
                                      p_over_q * *(b + 74 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 4);
            *(b + 48 * OS1_S1 + 12) =
                prefactor_z * *(b + 48 * OS1_S1 + 4) -
                p_over_q * *(b + 75 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 4);
            *(b + 48 * OS1_S1 + 13) = prefactor_x * *(b + 48 * OS1_S1 + 7) -
                                      p_over_q * *(b + 69 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 7);
            *(b + 48 * OS1_S1 + 14) = prefactor_y * *(b + 48 * OS1_S1 + 6) -
                                      p_over_q * *(b + 74 * OS1_S1 + 6) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 6);
            *(b + 48 * OS1_S1 + 15) = prefactor_x * *(b + 48 * OS1_S1 + 9) -
                                      p_over_q * *(b + 69 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 9);
            *(b + 48 * OS1_S1 + 16) =
                prefactor_y * *(b + 48 * OS1_S1 + 7) -
                p_over_q * *(b + 74 * OS1_S1 + 7) +
                one_over_two_q * *(b + 29 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 2);
            *(b + 48 * OS1_S1 + 17) =
                prefactor_z * *(b + 48 * OS1_S1 + 7) -
                p_over_q * *(b + 75 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 7);
            *(b + 48 * OS1_S1 + 18) = prefactor_y * *(b + 48 * OS1_S1 + 9) -
                                      p_over_q * *(b + 74 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 9);
            *(b + 48 * OS1_S1 + 19) =
                prefactor_z * *(b + 48 * OS1_S1 + 9) -
                p_over_q * *(b + 75 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 3);
            *(b + 49 * OS1_S1 + 10) =
                prefactor_x * *(b + 49 * OS1_S1 + 4) -
                p_over_q * *(b + 70 * OS1_S1 + 4) +
                one_over_two_q * *(b + 34 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 1);
            *(b + 49 * OS1_S1 + 11) = prefactor_y * *(b + 49 * OS1_S1 + 4) -
                                      p_over_q * *(b + 75 * OS1_S1 + 4);
            *(b + 49 * OS1_S1 + 12) =
                prefactor_z * *(b + 49 * OS1_S1 + 4) -
                p_over_q * *(b + 76 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 4);
            *(b + 49 * OS1_S1 + 13) = prefactor_x * *(b + 49 * OS1_S1 + 7) -
                                      p_over_q * *(b + 70 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 7);
            *(b + 49 * OS1_S1 + 14) = prefactor_y * *(b + 49 * OS1_S1 + 6) -
                                      p_over_q * *(b + 75 * OS1_S1 + 6);
            *(b + 49 * OS1_S1 + 15) = prefactor_x * *(b + 49 * OS1_S1 + 9) -
                                      p_over_q * *(b + 70 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 9);
            *(b + 49 * OS1_S1 + 16) =
                prefactor_y * *(b + 49 * OS1_S1 + 7) -
                p_over_q * *(b + 75 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 2);
            *(b + 49 * OS1_S1 + 17) =
                prefactor_z * *(b + 49 * OS1_S1 + 7) -
                p_over_q * *(b + 76 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 7);
            *(b + 49 * OS1_S1 + 18) = prefactor_y * *(b + 49 * OS1_S1 + 9) -
                                      p_over_q * *(b + 75 * OS1_S1 + 9);
            *(b + 49 * OS1_S1 + 19) =
                prefactor_z * *(b + 49 * OS1_S1 + 9) -
                p_over_q * *(b + 76 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 3);
            *(b + 50 * OS1_S1 + 10) =
                prefactor_x * *(b + 50 * OS1_S1 + 4) -
                p_over_q * *(b + 71 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 1);
            *(b + 50 * OS1_S1 + 11) =
                prefactor_y * *(b + 50 * OS1_S1 + 4) -
                p_over_q * *(b + 77 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 4);
            *(b + 50 * OS1_S1 + 12) = prefactor_z * *(b + 50 * OS1_S1 + 4) -
                                      p_over_q * *(b + 78 * OS1_S1 + 4);
            *(b + 50 * OS1_S1 + 13) = prefactor_x * *(b + 50 * OS1_S1 + 7) -
                                      p_over_q * *(b + 71 * OS1_S1 + 7);
            *(b + 50 * OS1_S1 + 14) = prefactor_z * *(b + 50 * OS1_S1 + 5) -
                                      p_over_q * *(b + 78 * OS1_S1 + 5);
            *(b + 50 * OS1_S1 + 15) = prefactor_x * *(b + 50 * OS1_S1 + 9) -
                                      p_over_q * *(b + 71 * OS1_S1 + 9);
            *(b + 50 * OS1_S1 + 16) =
                prefactor_y * *(b + 50 * OS1_S1 + 7) -
                p_over_q * *(b + 77 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 2);
            *(b + 50 * OS1_S1 + 17) = prefactor_z * *(b + 50 * OS1_S1 + 7) -
                                      p_over_q * *(b + 78 * OS1_S1 + 7);
            *(b + 50 * OS1_S1 + 18) =
                prefactor_y * *(b + 50 * OS1_S1 + 9) -
                p_over_q * *(b + 77 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 9);
            *(b + 50 * OS1_S1 + 19) =
                prefactor_z * *(b + 50 * OS1_S1 + 9) -
                p_over_q * *(b + 78 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 3);
            *(b + 51 * OS1_S1 + 10) =
                prefactor_x * *(b + 51 * OS1_S1 + 4) -
                p_over_q * *(b + 72 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 1);
            *(b + 51 * OS1_S1 + 11) =
                prefactor_y * *(b + 51 * OS1_S1 + 4) -
                p_over_q * *(b + 78 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 4);
            *(b + 51 * OS1_S1 + 12) = prefactor_z * *(b + 51 * OS1_S1 + 4) -
                                      p_over_q * *(b + 79 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 4);
            *(b + 51 * OS1_S1 + 13) = prefactor_x * *(b + 51 * OS1_S1 + 7) -
                                      p_over_q * *(b + 72 * OS1_S1 + 7);
            *(b + 51 * OS1_S1 + 14) = prefactor_x * *(b + 51 * OS1_S1 + 8) -
                                      p_over_q * *(b + 72 * OS1_S1 + 8);
            *(b + 51 * OS1_S1 + 15) = prefactor_x * *(b + 51 * OS1_S1 + 9) -
                                      p_over_q * *(b + 72 * OS1_S1 + 9);
            *(b + 51 * OS1_S1 + 16) =
                prefactor_y * *(b + 51 * OS1_S1 + 7) -
                p_over_q * *(b + 78 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 2);
            *(b + 51 * OS1_S1 + 17) = prefactor_z * *(b + 51 * OS1_S1 + 7) -
                                      p_over_q * *(b + 79 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 7);
            *(b + 51 * OS1_S1 + 18) =
                prefactor_y * *(b + 51 * OS1_S1 + 9) -
                p_over_q * *(b + 78 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 9);
            *(b + 51 * OS1_S1 + 19) =
                prefactor_z * *(b + 51 * OS1_S1 + 9) -
                p_over_q * *(b + 79 * OS1_S1 + 9) +
                one_over_two_q * *(b + 30 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 3);
            *(b + 52 * OS1_S1 + 10) =
                prefactor_x * *(b + 52 * OS1_S1 + 4) -
                p_over_q * *(b + 73 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 1);
            *(b + 52 * OS1_S1 + 11) =
                prefactor_y * *(b + 52 * OS1_S1 + 4) -
                p_over_q * *(b + 79 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 4);
            *(b + 52 * OS1_S1 + 12) =
                prefactor_z * *(b + 52 * OS1_S1 + 4) -
                p_over_q * *(b + 80 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 4);
            *(b + 52 * OS1_S1 + 13) = prefactor_x * *(b + 52 * OS1_S1 + 7) -
                                      p_over_q * *(b + 73 * OS1_S1 + 7);
            *(b + 52 * OS1_S1 + 14) = prefactor_x * *(b + 52 * OS1_S1 + 8) -
                                      p_over_q * *(b + 73 * OS1_S1 + 8);
            *(b + 52 * OS1_S1 + 15) = prefactor_x * *(b + 52 * OS1_S1 + 9) -
                                      p_over_q * *(b + 73 * OS1_S1 + 9);
            *(b + 52 * OS1_S1 + 16) =
                prefactor_y * *(b + 52 * OS1_S1 + 7) -
                p_over_q * *(b + 79 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 2);
            *(b + 52 * OS1_S1 + 17) =
                prefactor_z * *(b + 52 * OS1_S1 + 7) -
                p_over_q * *(b + 80 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 7);
            *(b + 52 * OS1_S1 + 18) =
                prefactor_y * *(b + 52 * OS1_S1 + 9) -
                p_over_q * *(b + 79 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 9);
            *(b + 52 * OS1_S1 + 19) =
                prefactor_z * *(b + 52 * OS1_S1 + 9) -
                p_over_q * *(b + 80 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 3);
            *(b + 53 * OS1_S1 + 10) =
                prefactor_x * *(b + 53 * OS1_S1 + 4) -
                p_over_q * *(b + 74 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 1);
            *(b + 53 * OS1_S1 + 11) =
                prefactor_y * *(b + 53 * OS1_S1 + 4) -
                p_over_q * *(b + 80 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 4);
            *(b + 53 * OS1_S1 + 12) =
                prefactor_z * *(b + 53 * OS1_S1 + 4) -
                p_over_q * *(b + 81 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 4);
            *(b + 53 * OS1_S1 + 13) = prefactor_x * *(b + 53 * OS1_S1 + 7) -
                                      p_over_q * *(b + 74 * OS1_S1 + 7);
            *(b + 53 * OS1_S1 + 14) = prefactor_x * *(b + 53 * OS1_S1 + 8) -
                                      p_over_q * *(b + 74 * OS1_S1 + 8);
            *(b + 53 * OS1_S1 + 15) = prefactor_x * *(b + 53 * OS1_S1 + 9) -
                                      p_over_q * *(b + 74 * OS1_S1 + 9);
            *(b + 53 * OS1_S1 + 16) =
                prefactor_y * *(b + 53 * OS1_S1 + 7) -
                p_over_q * *(b + 80 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 2);
            *(b + 53 * OS1_S1 + 17) =
                prefactor_z * *(b + 53 * OS1_S1 + 7) -
                p_over_q * *(b + 81 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 7);
            *(b + 53 * OS1_S1 + 18) =
                prefactor_y * *(b + 53 * OS1_S1 + 9) -
                p_over_q * *(b + 80 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 9);
            *(b + 53 * OS1_S1 + 19) =
                prefactor_z * *(b + 53 * OS1_S1 + 9) -
                p_over_q * *(b + 81 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 3);
            *(b + 54 * OS1_S1 + 10) =
                prefactor_x * *(b + 54 * OS1_S1 + 4) -
                p_over_q * *(b + 75 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 1);
            *(b + 54 * OS1_S1 + 11) = prefactor_y * *(b + 54 * OS1_S1 + 4) -
                                      p_over_q * *(b + 81 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 4);
            *(b + 54 * OS1_S1 + 12) =
                prefactor_z * *(b + 54 * OS1_S1 + 4) -
                p_over_q * *(b + 82 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 4);
            *(b + 54 * OS1_S1 + 13) = prefactor_x * *(b + 54 * OS1_S1 + 7) -
                                      p_over_q * *(b + 75 * OS1_S1 + 7);
            *(b + 54 * OS1_S1 + 14) = prefactor_x * *(b + 54 * OS1_S1 + 8) -
                                      p_over_q * *(b + 75 * OS1_S1 + 8);
            *(b + 54 * OS1_S1 + 15) = prefactor_x * *(b + 54 * OS1_S1 + 9) -
                                      p_over_q * *(b + 75 * OS1_S1 + 9);
            *(b + 54 * OS1_S1 + 16) =
                prefactor_y * *(b + 54 * OS1_S1 + 7) -
                p_over_q * *(b + 81 * OS1_S1 + 7) +
                one_over_two_q * *(b + 34 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 2);
            *(b + 54 * OS1_S1 + 17) =
                prefactor_z * *(b + 54 * OS1_S1 + 7) -
                p_over_q * *(b + 82 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 7);
            *(b + 54 * OS1_S1 + 18) = prefactor_y * *(b + 54 * OS1_S1 + 9) -
                                      p_over_q * *(b + 81 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 9);
            *(b + 54 * OS1_S1 + 19) =
                prefactor_z * *(b + 54 * OS1_S1 + 9) -
                p_over_q * *(b + 82 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 3);
            *(b + 55 * OS1_S1 + 10) =
                prefactor_x * *(b + 55 * OS1_S1 + 4) -
                p_over_q * *(b + 76 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 1);
            *(b + 55 * OS1_S1 + 11) = prefactor_y * *(b + 55 * OS1_S1 + 4) -
                                      p_over_q * *(b + 82 * OS1_S1 + 4);
            *(b + 55 * OS1_S1 + 12) =
                prefactor_z * *(b + 55 * OS1_S1 + 4) -
                p_over_q * *(b + 83 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 4);
            *(b + 55 * OS1_S1 + 13) = prefactor_x * *(b + 55 * OS1_S1 + 7) -
                                      p_over_q * *(b + 76 * OS1_S1 + 7);
            *(b + 55 * OS1_S1 + 14) = prefactor_y * *(b + 55 * OS1_S1 + 6) -
                                      p_over_q * *(b + 82 * OS1_S1 + 6);
            *(b + 55 * OS1_S1 + 15) = prefactor_x * *(b + 55 * OS1_S1 + 9) -
                                      p_over_q * *(b + 76 * OS1_S1 + 9);
            *(b + 55 * OS1_S1 + 16) =
                prefactor_y * *(b + 55 * OS1_S1 + 7) -
                p_over_q * *(b + 82 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 2);
            *(b + 55 * OS1_S1 + 17) =
                prefactor_z * *(b + 55 * OS1_S1 + 7) -
                p_over_q * *(b + 83 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 7);
            *(b + 55 * OS1_S1 + 18) = prefactor_y * *(b + 55 * OS1_S1 + 9) -
                                      p_over_q * *(b + 82 * OS1_S1 + 9);
            *(b + 55 * OS1_S1 + 19) =
                prefactor_z * *(b + 55 * OS1_S1 + 9) -
                p_over_q * *(b + 83 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 3);
            return;
        }

        void transfer_6_3(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 56 * OS1_S1 + 10) =
                prefactor_x * *(b + 56 * OS1_S1 + 4) -
                p_over_q * *(b + 84 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 1);
            *(b + 56 * OS1_S1 + 11) = prefactor_y * *(b + 56 * OS1_S1 + 4) -
                                      p_over_q * *(b + 85 * OS1_S1 + 4);
            *(b + 56 * OS1_S1 + 12) = prefactor_z * *(b + 56 * OS1_S1 + 4) -
                                      p_over_q * *(b + 86 * OS1_S1 + 4);
            *(b + 56 * OS1_S1 + 13) =
                prefactor_x * *(b + 56 * OS1_S1 + 7) -
                p_over_q * *(b + 84 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 7);
            *(b + 56 * OS1_S1 + 14) = prefactor_z * *(b + 56 * OS1_S1 + 5) -
                                      p_over_q * *(b + 86 * OS1_S1 + 5);
            *(b + 56 * OS1_S1 + 15) =
                prefactor_x * *(b + 56 * OS1_S1 + 9) -
                p_over_q * *(b + 84 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 9);
            *(b + 56 * OS1_S1 + 16) =
                prefactor_y * *(b + 56 * OS1_S1 + 7) -
                p_over_q * *(b + 85 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 2);
            *(b + 56 * OS1_S1 + 17) = prefactor_z * *(b + 56 * OS1_S1 + 7) -
                                      p_over_q * *(b + 86 * OS1_S1 + 7);
            *(b + 56 * OS1_S1 + 18) = prefactor_y * *(b + 56 * OS1_S1 + 9) -
                                      p_over_q * *(b + 85 * OS1_S1 + 9);
            *(b + 56 * OS1_S1 + 19) =
                prefactor_z * *(b + 56 * OS1_S1 + 9) -
                p_over_q * *(b + 86 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 3);
            *(b + 57 * OS1_S1 + 10) =
                prefactor_x * *(b + 57 * OS1_S1 + 4) -
                p_over_q * *(b + 85 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 1);
            *(b + 57 * OS1_S1 + 11) = prefactor_y * *(b + 57 * OS1_S1 + 4) -
                                      p_over_q * *(b + 87 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 4);
            *(b + 57 * OS1_S1 + 12) = prefactor_z * *(b + 57 * OS1_S1 + 4) -
                                      p_over_q * *(b + 88 * OS1_S1 + 4);
            *(b + 57 * OS1_S1 + 13) =
                prefactor_x * *(b + 57 * OS1_S1 + 7) -
                p_over_q * *(b + 85 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 7);
            *(b + 57 * OS1_S1 + 14) = prefactor_z * *(b + 57 * OS1_S1 + 5) -
                                      p_over_q * *(b + 88 * OS1_S1 + 5);
            *(b + 57 * OS1_S1 + 15) =
                prefactor_x * *(b + 57 * OS1_S1 + 9) -
                p_over_q * *(b + 85 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 9);
            *(b + 57 * OS1_S1 + 16) =
                prefactor_y * *(b + 57 * OS1_S1 + 7) -
                p_over_q * *(b + 87 * OS1_S1 + 7) +
                one_over_two_q * *(b + 35 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 2);
            *(b + 57 * OS1_S1 + 17) = prefactor_z * *(b + 57 * OS1_S1 + 7) -
                                      p_over_q * *(b + 88 * OS1_S1 + 7);
            *(b + 57 * OS1_S1 + 18) = prefactor_y * *(b + 57 * OS1_S1 + 9) -
                                      p_over_q * *(b + 87 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 9);
            *(b + 57 * OS1_S1 + 19) =
                prefactor_z * *(b + 57 * OS1_S1 + 9) -
                p_over_q * *(b + 88 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 3);
            *(b + 58 * OS1_S1 + 10) =
                prefactor_x * *(b + 58 * OS1_S1 + 4) -
                p_over_q * *(b + 86 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 1);
            *(b + 58 * OS1_S1 + 11) = prefactor_y * *(b + 58 * OS1_S1 + 4) -
                                      p_over_q * *(b + 88 * OS1_S1 + 4);
            *(b + 58 * OS1_S1 + 12) = prefactor_z * *(b + 58 * OS1_S1 + 4) -
                                      p_over_q * *(b + 89 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 4);
            *(b + 58 * OS1_S1 + 13) =
                prefactor_x * *(b + 58 * OS1_S1 + 7) -
                p_over_q * *(b + 86 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 7);
            *(b + 58 * OS1_S1 + 14) = prefactor_y * *(b + 58 * OS1_S1 + 6) -
                                      p_over_q * *(b + 88 * OS1_S1 + 6);
            *(b + 58 * OS1_S1 + 15) =
                prefactor_x * *(b + 58 * OS1_S1 + 9) -
                p_over_q * *(b + 86 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 9);
            *(b + 58 * OS1_S1 + 16) =
                prefactor_y * *(b + 58 * OS1_S1 + 7) -
                p_over_q * *(b + 88 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 2);
            *(b + 58 * OS1_S1 + 17) = prefactor_z * *(b + 58 * OS1_S1 + 7) -
                                      p_over_q * *(b + 89 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 7);
            *(b + 58 * OS1_S1 + 18) = prefactor_y * *(b + 58 * OS1_S1 + 9) -
                                      p_over_q * *(b + 88 * OS1_S1 + 9);
            *(b + 58 * OS1_S1 + 19) =
                prefactor_z * *(b + 58 * OS1_S1 + 9) -
                p_over_q * *(b + 89 * OS1_S1 + 9) +
                one_over_two_q * *(b + 35 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 3);
            *(b + 59 * OS1_S1 + 10) =
                prefactor_x * *(b + 59 * OS1_S1 + 4) -
                p_over_q * *(b + 87 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 1);
            *(b + 59 * OS1_S1 + 11) =
                prefactor_y * *(b + 59 * OS1_S1 + 4) -
                p_over_q * *(b + 90 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 4);
            *(b + 59 * OS1_S1 + 12) = prefactor_z * *(b + 59 * OS1_S1 + 4) -
                                      p_over_q * *(b + 91 * OS1_S1 + 4);
            *(b + 59 * OS1_S1 + 13) =
                prefactor_x * *(b + 59 * OS1_S1 + 7) -
                p_over_q * *(b + 87 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 7);
            *(b + 59 * OS1_S1 + 14) = prefactor_z * *(b + 59 * OS1_S1 + 5) -
                                      p_over_q * *(b + 91 * OS1_S1 + 5);
            *(b + 59 * OS1_S1 + 15) =
                prefactor_x * *(b + 59 * OS1_S1 + 9) -
                p_over_q * *(b + 87 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 9);
            *(b + 59 * OS1_S1 + 16) =
                prefactor_y * *(b + 59 * OS1_S1 + 7) -
                p_over_q * *(b + 90 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 2);
            *(b + 59 * OS1_S1 + 17) = prefactor_z * *(b + 59 * OS1_S1 + 7) -
                                      p_over_q * *(b + 91 * OS1_S1 + 7);
            *(b + 59 * OS1_S1 + 18) =
                prefactor_y * *(b + 59 * OS1_S1 + 9) -
                p_over_q * *(b + 90 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 9);
            *(b + 59 * OS1_S1 + 19) =
                prefactor_z * *(b + 59 * OS1_S1 + 9) -
                p_over_q * *(b + 91 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 3);
            *(b + 60 * OS1_S1 + 10) =
                prefactor_x * *(b + 60 * OS1_S1 + 4) -
                p_over_q * *(b + 88 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 1);
            *(b + 60 * OS1_S1 + 11) = prefactor_y * *(b + 60 * OS1_S1 + 4) -
                                      p_over_q * *(b + 91 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 4);
            *(b + 60 * OS1_S1 + 12) = prefactor_z * *(b + 60 * OS1_S1 + 4) -
                                      p_over_q * *(b + 92 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 4);
            *(b + 60 * OS1_S1 + 13) =
                prefactor_x * *(b + 60 * OS1_S1 + 7) -
                p_over_q * *(b + 88 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 7);
            *(b + 60 * OS1_S1 + 14) = prefactor_z * *(b + 60 * OS1_S1 + 5) -
                                      p_over_q * *(b + 92 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 5);
            *(b + 60 * OS1_S1 + 15) =
                prefactor_x * *(b + 60 * OS1_S1 + 9) -
                p_over_q * *(b + 88 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 9);
            *(b + 60 * OS1_S1 + 16) =
                prefactor_y * *(b + 60 * OS1_S1 + 7) -
                p_over_q * *(b + 91 * OS1_S1 + 7) +
                one_over_two_q * *(b + 37 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 2);
            *(b + 60 * OS1_S1 + 17) = prefactor_z * *(b + 60 * OS1_S1 + 7) -
                                      p_over_q * *(b + 92 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 7);
            *(b + 60 * OS1_S1 + 18) = prefactor_y * *(b + 60 * OS1_S1 + 9) -
                                      p_over_q * *(b + 91 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 9);
            *(b + 60 * OS1_S1 + 19) =
                prefactor_z * *(b + 60 * OS1_S1 + 9) -
                p_over_q * *(b + 92 * OS1_S1 + 9) +
                one_over_two_q * *(b + 36 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 3);
            *(b + 61 * OS1_S1 + 10) =
                prefactor_x * *(b + 61 * OS1_S1 + 4) -
                p_over_q * *(b + 89 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 1);
            *(b + 61 * OS1_S1 + 11) = prefactor_y * *(b + 61 * OS1_S1 + 4) -
                                      p_over_q * *(b + 92 * OS1_S1 + 4);
            *(b + 61 * OS1_S1 + 12) =
                prefactor_z * *(b + 61 * OS1_S1 + 4) -
                p_over_q * *(b + 93 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 4);
            *(b + 61 * OS1_S1 + 13) =
                prefactor_x * *(b + 61 * OS1_S1 + 7) -
                p_over_q * *(b + 89 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 7);
            *(b + 61 * OS1_S1 + 14) = prefactor_y * *(b + 61 * OS1_S1 + 6) -
                                      p_over_q * *(b + 92 * OS1_S1 + 6);
            *(b + 61 * OS1_S1 + 15) =
                prefactor_x * *(b + 61 * OS1_S1 + 9) -
                p_over_q * *(b + 89 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 9);
            *(b + 61 * OS1_S1 + 16) =
                prefactor_y * *(b + 61 * OS1_S1 + 7) -
                p_over_q * *(b + 92 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 2);
            *(b + 61 * OS1_S1 + 17) =
                prefactor_z * *(b + 61 * OS1_S1 + 7) -
                p_over_q * *(b + 93 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 7);
            *(b + 61 * OS1_S1 + 18) = prefactor_y * *(b + 61 * OS1_S1 + 9) -
                                      p_over_q * *(b + 92 * OS1_S1 + 9);
            *(b + 61 * OS1_S1 + 19) =
                prefactor_z * *(b + 61 * OS1_S1 + 9) -
                p_over_q * *(b + 93 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 3);
            *(b + 62 * OS1_S1 + 10) =
                prefactor_x * *(b + 62 * OS1_S1 + 4) -
                p_over_q * *(b + 90 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 1);
            *(b + 62 * OS1_S1 + 11) =
                prefactor_y * *(b + 62 * OS1_S1 + 4) -
                p_over_q * *(b + 94 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 4);
            *(b + 62 * OS1_S1 + 12) = prefactor_z * *(b + 62 * OS1_S1 + 4) -
                                      p_over_q * *(b + 95 * OS1_S1 + 4);
            *(b + 62 * OS1_S1 + 13) =
                prefactor_x * *(b + 62 * OS1_S1 + 7) -
                p_over_q * *(b + 90 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 7);
            *(b + 62 * OS1_S1 + 14) = prefactor_z * *(b + 62 * OS1_S1 + 5) -
                                      p_over_q * *(b + 95 * OS1_S1 + 5);
            *(b + 62 * OS1_S1 + 15) =
                prefactor_x * *(b + 62 * OS1_S1 + 9) -
                p_over_q * *(b + 90 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 9);
            *(b + 62 * OS1_S1 + 16) =
                prefactor_y * *(b + 62 * OS1_S1 + 7) -
                p_over_q * *(b + 94 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 2);
            *(b + 62 * OS1_S1 + 17) = prefactor_z * *(b + 62 * OS1_S1 + 7) -
                                      p_over_q * *(b + 95 * OS1_S1 + 7);
            *(b + 62 * OS1_S1 + 18) =
                prefactor_y * *(b + 62 * OS1_S1 + 9) -
                p_over_q * *(b + 94 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 9);
            *(b + 62 * OS1_S1 + 19) =
                prefactor_z * *(b + 62 * OS1_S1 + 9) -
                p_over_q * *(b + 95 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 3);
            *(b + 63 * OS1_S1 + 10) =
                prefactor_x * *(b + 63 * OS1_S1 + 4) -
                p_over_q * *(b + 91 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 1);
            *(b + 63 * OS1_S1 + 11) =
                prefactor_y * *(b + 63 * OS1_S1 + 4) -
                p_over_q * *(b + 95 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 4);
            *(b + 63 * OS1_S1 + 12) = prefactor_z * *(b + 63 * OS1_S1 + 4) -
                                      p_over_q * *(b + 96 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 4);
            *(b + 63 * OS1_S1 + 13) =
                prefactor_x * *(b + 63 * OS1_S1 + 7) -
                p_over_q * *(b + 91 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 7);
            *(b + 63 * OS1_S1 + 14) = prefactor_z * *(b + 63 * OS1_S1 + 5) -
                                      p_over_q * *(b + 96 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 5);
            *(b + 63 * OS1_S1 + 15) =
                prefactor_x * *(b + 63 * OS1_S1 + 9) -
                p_over_q * *(b + 91 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 9);
            *(b + 63 * OS1_S1 + 16) =
                prefactor_y * *(b + 63 * OS1_S1 + 7) -
                p_over_q * *(b + 95 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 2);
            *(b + 63 * OS1_S1 + 17) = prefactor_z * *(b + 63 * OS1_S1 + 7) -
                                      p_over_q * *(b + 96 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 7);
            *(b + 63 * OS1_S1 + 18) =
                prefactor_y * *(b + 63 * OS1_S1 + 9) -
                p_over_q * *(b + 95 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 9);
            *(b + 63 * OS1_S1 + 19) =
                prefactor_z * *(b + 63 * OS1_S1 + 9) -
                p_over_q * *(b + 96 * OS1_S1 + 9) +
                one_over_two_q * *(b + 38 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 3);
            *(b + 64 * OS1_S1 + 10) =
                prefactor_x * *(b + 64 * OS1_S1 + 4) -
                p_over_q * *(b + 92 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 1);
            *(b + 64 * OS1_S1 + 11) = prefactor_y * *(b + 64 * OS1_S1 + 4) -
                                      p_over_q * *(b + 96 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 4);
            *(b + 64 * OS1_S1 + 12) =
                prefactor_z * *(b + 64 * OS1_S1 + 4) -
                p_over_q * *(b + 97 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 4);
            *(b + 64 * OS1_S1 + 13) =
                prefactor_x * *(b + 64 * OS1_S1 + 7) -
                p_over_q * *(b + 92 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 7);
            *(b + 64 * OS1_S1 + 14) = prefactor_y * *(b + 64 * OS1_S1 + 6) -
                                      p_over_q * *(b + 96 * OS1_S1 + 6) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 6);
            *(b + 64 * OS1_S1 + 15) =
                prefactor_x * *(b + 64 * OS1_S1 + 9) -
                p_over_q * *(b + 92 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 9);
            *(b + 64 * OS1_S1 + 16) =
                prefactor_y * *(b + 64 * OS1_S1 + 7) -
                p_over_q * *(b + 96 * OS1_S1 + 7) +
                one_over_two_q * *(b + 40 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 2);
            *(b + 64 * OS1_S1 + 17) =
                prefactor_z * *(b + 64 * OS1_S1 + 7) -
                p_over_q * *(b + 97 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 7);
            *(b + 64 * OS1_S1 + 18) = prefactor_y * *(b + 64 * OS1_S1 + 9) -
                                      p_over_q * *(b + 96 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 9);
            *(b + 64 * OS1_S1 + 19) =
                prefactor_z * *(b + 64 * OS1_S1 + 9) -
                p_over_q * *(b + 97 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 3);
            *(b + 65 * OS1_S1 + 10) =
                prefactor_x * *(b + 65 * OS1_S1 + 4) -
                p_over_q * *(b + 93 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 1);
            *(b + 65 * OS1_S1 + 11) = prefactor_y * *(b + 65 * OS1_S1 + 4) -
                                      p_over_q * *(b + 97 * OS1_S1 + 4);
            *(b + 65 * OS1_S1 + 12) =
                prefactor_z * *(b + 65 * OS1_S1 + 4) -
                p_over_q * *(b + 98 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 4);
            *(b + 65 * OS1_S1 + 13) =
                prefactor_x * *(b + 65 * OS1_S1 + 7) -
                p_over_q * *(b + 93 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 7);
            *(b + 65 * OS1_S1 + 14) = prefactor_y * *(b + 65 * OS1_S1 + 6) -
                                      p_over_q * *(b + 97 * OS1_S1 + 6);
            *(b + 65 * OS1_S1 + 15) =
                prefactor_x * *(b + 65 * OS1_S1 + 9) -
                p_over_q * *(b + 93 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 9);
            *(b + 65 * OS1_S1 + 16) =
                prefactor_y * *(b + 65 * OS1_S1 + 7) -
                p_over_q * *(b + 97 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 2);
            *(b + 65 * OS1_S1 + 17) =
                prefactor_z * *(b + 65 * OS1_S1 + 7) -
                p_over_q * *(b + 98 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 7);
            *(b + 65 * OS1_S1 + 18) = prefactor_y * *(b + 65 * OS1_S1 + 9) -
                                      p_over_q * *(b + 97 * OS1_S1 + 9);
            *(b + 65 * OS1_S1 + 19) =
                prefactor_z * *(b + 65 * OS1_S1 + 9) -
                p_over_q * *(b + 98 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 3);
            *(b + 66 * OS1_S1 + 10) =
                prefactor_x * *(b + 66 * OS1_S1 + 4) -
                p_over_q * *(b + 94 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 1);
            *(b + 66 * OS1_S1 + 11) =
                prefactor_y * *(b + 66 * OS1_S1 + 4) -
                p_over_q * *(b + 99 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 4);
            *(b + 66 * OS1_S1 + 12) = prefactor_z * *(b + 66 * OS1_S1 + 4) -
                                      p_over_q * *(b + 100 * OS1_S1 + 4);
            *(b + 66 * OS1_S1 + 13) =
                prefactor_x * *(b + 66 * OS1_S1 + 7) -
                p_over_q * *(b + 94 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 7);
            *(b + 66 * OS1_S1 + 14) = prefactor_z * *(b + 66 * OS1_S1 + 5) -
                                      p_over_q * *(b + 100 * OS1_S1 + 5);
            *(b + 66 * OS1_S1 + 15) =
                prefactor_x * *(b + 66 * OS1_S1 + 9) -
                p_over_q * *(b + 94 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 9);
            *(b + 66 * OS1_S1 + 16) =
                prefactor_y * *(b + 66 * OS1_S1 + 7) -
                p_over_q * *(b + 99 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 2);
            *(b + 66 * OS1_S1 + 17) = prefactor_z * *(b + 66 * OS1_S1 + 7) -
                                      p_over_q * *(b + 100 * OS1_S1 + 7);
            *(b + 66 * OS1_S1 + 18) =
                prefactor_y * *(b + 66 * OS1_S1 + 9) -
                p_over_q * *(b + 99 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 9);
            *(b + 66 * OS1_S1 + 19) =
                prefactor_z * *(b + 66 * OS1_S1 + 9) -
                p_over_q * *(b + 100 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 3);
            *(b + 67 * OS1_S1 + 10) =
                prefactor_x * *(b + 67 * OS1_S1 + 4) -
                p_over_q * *(b + 95 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 1);
            *(b + 67 * OS1_S1 + 11) =
                prefactor_y * *(b + 67 * OS1_S1 + 4) -
                p_over_q * *(b + 100 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 4);
            *(b + 67 * OS1_S1 + 12) = prefactor_z * *(b + 67 * OS1_S1 + 4) -
                                      p_over_q * *(b + 101 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 4);
            *(b + 67 * OS1_S1 + 13) =
                prefactor_x * *(b + 67 * OS1_S1 + 7) -
                p_over_q * *(b + 95 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 7);
            *(b + 67 * OS1_S1 + 14) = prefactor_z * *(b + 67 * OS1_S1 + 5) -
                                      p_over_q * *(b + 101 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 5);
            *(b + 67 * OS1_S1 + 15) =
                prefactor_x * *(b + 67 * OS1_S1 + 9) -
                p_over_q * *(b + 95 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 9);
            *(b + 67 * OS1_S1 + 16) =
                prefactor_y * *(b + 67 * OS1_S1 + 7) -
                p_over_q * *(b + 100 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 2);
            *(b + 67 * OS1_S1 + 17) = prefactor_z * *(b + 67 * OS1_S1 + 7) -
                                      p_over_q * *(b + 101 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 7);
            *(b + 67 * OS1_S1 + 18) =
                prefactor_y * *(b + 67 * OS1_S1 + 9) -
                p_over_q * *(b + 100 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 9);
            *(b + 67 * OS1_S1 + 19) =
                prefactor_z * *(b + 67 * OS1_S1 + 9) -
                p_over_q * *(b + 101 * OS1_S1 + 9) +
                one_over_two_q * *(b + 41 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 3);
            *(b + 68 * OS1_S1 + 10) =
                prefactor_x * *(b + 68 * OS1_S1 + 4) -
                p_over_q * *(b + 96 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 1);
            *(b + 68 * OS1_S1 + 11) =
                prefactor_y * *(b + 68 * OS1_S1 + 4) -
                p_over_q * *(b + 101 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 4);
            *(b + 68 * OS1_S1 + 12) =
                prefactor_z * *(b + 68 * OS1_S1 + 4) -
                p_over_q * *(b + 102 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 4);
            *(b + 68 * OS1_S1 + 13) =
                prefactor_x * *(b + 68 * OS1_S1 + 7) -
                p_over_q * *(b + 96 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 7);
            *(b + 68 * OS1_S1 + 14) =
                prefactor_z * *(b + 68 * OS1_S1 + 5) -
                p_over_q * *(b + 102 * OS1_S1 + 5) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 5);
            *(b + 68 * OS1_S1 + 15) =
                prefactor_x * *(b + 68 * OS1_S1 + 9) -
                p_over_q * *(b + 96 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 9);
            *(b + 68 * OS1_S1 + 16) =
                prefactor_y * *(b + 68 * OS1_S1 + 7) -
                p_over_q * *(b + 101 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 2);
            *(b + 68 * OS1_S1 + 17) =
                prefactor_z * *(b + 68 * OS1_S1 + 7) -
                p_over_q * *(b + 102 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 7);
            *(b + 68 * OS1_S1 + 18) =
                prefactor_y * *(b + 68 * OS1_S1 + 9) -
                p_over_q * *(b + 101 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 9);
            *(b + 68 * OS1_S1 + 19) =
                prefactor_z * *(b + 68 * OS1_S1 + 9) -
                p_over_q * *(b + 102 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 3);
            *(b + 69 * OS1_S1 + 10) =
                prefactor_x * *(b + 69 * OS1_S1 + 4) -
                p_over_q * *(b + 97 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 1);
            *(b + 69 * OS1_S1 + 11) = prefactor_y * *(b + 69 * OS1_S1 + 4) -
                                      p_over_q * *(b + 102 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 4);
            *(b + 69 * OS1_S1 + 12) =
                prefactor_z * *(b + 69 * OS1_S1 + 4) -
                p_over_q * *(b + 103 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 4);
            *(b + 69 * OS1_S1 + 13) =
                prefactor_x * *(b + 69 * OS1_S1 + 7) -
                p_over_q * *(b + 97 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 7);
            *(b + 69 * OS1_S1 + 14) = prefactor_y * *(b + 69 * OS1_S1 + 6) -
                                      p_over_q * *(b + 102 * OS1_S1 + 6) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 6);
            *(b + 69 * OS1_S1 + 15) =
                prefactor_x * *(b + 69 * OS1_S1 + 9) -
                p_over_q * *(b + 97 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 9);
            *(b + 69 * OS1_S1 + 16) =
                prefactor_y * *(b + 69 * OS1_S1 + 7) -
                p_over_q * *(b + 102 * OS1_S1 + 7) +
                one_over_two_q * *(b + 44 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 2);
            *(b + 69 * OS1_S1 + 17) =
                prefactor_z * *(b + 69 * OS1_S1 + 7) -
                p_over_q * *(b + 103 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 7);
            *(b + 69 * OS1_S1 + 18) = prefactor_y * *(b + 69 * OS1_S1 + 9) -
                                      p_over_q * *(b + 102 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 9);
            *(b + 69 * OS1_S1 + 19) =
                prefactor_z * *(b + 69 * OS1_S1 + 9) -
                p_over_q * *(b + 103 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 3);
            *(b + 70 * OS1_S1 + 10) =
                prefactor_x * *(b + 70 * OS1_S1 + 4) -
                p_over_q * *(b + 98 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 1);
            *(b + 70 * OS1_S1 + 11) = prefactor_y * *(b + 70 * OS1_S1 + 4) -
                                      p_over_q * *(b + 103 * OS1_S1 + 4);
            *(b + 70 * OS1_S1 + 12) =
                prefactor_z * *(b + 70 * OS1_S1 + 4) -
                p_over_q * *(b + 104 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 4);
            *(b + 70 * OS1_S1 + 13) =
                prefactor_x * *(b + 70 * OS1_S1 + 7) -
                p_over_q * *(b + 98 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 7);
            *(b + 70 * OS1_S1 + 14) = prefactor_y * *(b + 70 * OS1_S1 + 6) -
                                      p_over_q * *(b + 103 * OS1_S1 + 6);
            *(b + 70 * OS1_S1 + 15) =
                prefactor_x * *(b + 70 * OS1_S1 + 9) -
                p_over_q * *(b + 98 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 9);
            *(b + 70 * OS1_S1 + 16) =
                prefactor_y * *(b + 70 * OS1_S1 + 7) -
                p_over_q * *(b + 103 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 2);
            *(b + 70 * OS1_S1 + 17) =
                prefactor_z * *(b + 70 * OS1_S1 + 7) -
                p_over_q * *(b + 104 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 7);
            *(b + 70 * OS1_S1 + 18) = prefactor_y * *(b + 70 * OS1_S1 + 9) -
                                      p_over_q * *(b + 103 * OS1_S1 + 9);
            *(b + 70 * OS1_S1 + 19) =
                prefactor_z * *(b + 70 * OS1_S1 + 9) -
                p_over_q * *(b + 104 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 3);
            *(b + 71 * OS1_S1 + 10) =
                prefactor_x * *(b + 71 * OS1_S1 + 4) -
                p_over_q * *(b + 99 * OS1_S1 + 4) +
                one_over_two_q * *(b + 50 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 1);
            *(b + 71 * OS1_S1 + 11) =
                prefactor_y * *(b + 71 * OS1_S1 + 4) -
                p_over_q * *(b + 105 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 4);
            *(b + 71 * OS1_S1 + 12) = prefactor_z * *(b + 71 * OS1_S1 + 4) -
                                      p_over_q * *(b + 106 * OS1_S1 + 4);
            *(b + 71 * OS1_S1 + 13) = prefactor_x * *(b + 71 * OS1_S1 + 7) -
                                      p_over_q * *(b + 99 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 7);
            *(b + 71 * OS1_S1 + 14) = prefactor_z * *(b + 71 * OS1_S1 + 5) -
                                      p_over_q * *(b + 106 * OS1_S1 + 5);
            *(b + 71 * OS1_S1 + 15) = prefactor_x * *(b + 71 * OS1_S1 + 9) -
                                      p_over_q * *(b + 99 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 9);
            *(b + 71 * OS1_S1 + 16) =
                prefactor_y * *(b + 71 * OS1_S1 + 7) -
                p_over_q * *(b + 105 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 2);
            *(b + 71 * OS1_S1 + 17) = prefactor_z * *(b + 71 * OS1_S1 + 7) -
                                      p_over_q * *(b + 106 * OS1_S1 + 7);
            *(b + 71 * OS1_S1 + 18) =
                prefactor_y * *(b + 71 * OS1_S1 + 9) -
                p_over_q * *(b + 105 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 9);
            *(b + 71 * OS1_S1 + 19) =
                prefactor_z * *(b + 71 * OS1_S1 + 9) -
                p_over_q * *(b + 106 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 3);
            *(b + 72 * OS1_S1 + 10) =
                prefactor_x * *(b + 72 * OS1_S1 + 4) -
                p_over_q * *(b + 100 * OS1_S1 + 4) +
                one_over_two_q * *(b + 51 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 1);
            *(b + 72 * OS1_S1 + 11) =
                prefactor_y * *(b + 72 * OS1_S1 + 4) -
                p_over_q * *(b + 106 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 4);
            *(b + 72 * OS1_S1 + 12) = prefactor_z * *(b + 72 * OS1_S1 + 4) -
                                      p_over_q * *(b + 107 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 4);
            *(b + 72 * OS1_S1 + 13) = prefactor_x * *(b + 72 * OS1_S1 + 7) -
                                      p_over_q * *(b + 100 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 7);
            *(b + 72 * OS1_S1 + 14) = prefactor_z * *(b + 72 * OS1_S1 + 5) -
                                      p_over_q * *(b + 107 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 5);
            *(b + 72 * OS1_S1 + 15) = prefactor_x * *(b + 72 * OS1_S1 + 9) -
                                      p_over_q * *(b + 100 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 9);
            *(b + 72 * OS1_S1 + 16) =
                prefactor_y * *(b + 72 * OS1_S1 + 7) -
                p_over_q * *(b + 106 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 2);
            *(b + 72 * OS1_S1 + 17) = prefactor_z * *(b + 72 * OS1_S1 + 7) -
                                      p_over_q * *(b + 107 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 7);
            *(b + 72 * OS1_S1 + 18) =
                prefactor_y * *(b + 72 * OS1_S1 + 9) -
                p_over_q * *(b + 106 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 9);
            *(b + 72 * OS1_S1 + 19) =
                prefactor_z * *(b + 72 * OS1_S1 + 9) -
                p_over_q * *(b + 107 * OS1_S1 + 9) +
                one_over_two_q * *(b + 45 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 3);
            *(b + 73 * OS1_S1 + 10) =
                prefactor_x * *(b + 73 * OS1_S1 + 4) -
                p_over_q * *(b + 101 * OS1_S1 + 4) +
                one_over_two_q * *(b + 52 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 1);
            *(b + 73 * OS1_S1 + 11) =
                prefactor_y * *(b + 73 * OS1_S1 + 4) -
                p_over_q * *(b + 107 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 4);
            *(b + 73 * OS1_S1 + 12) =
                prefactor_z * *(b + 73 * OS1_S1 + 4) -
                p_over_q * *(b + 108 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 4);
            *(b + 73 * OS1_S1 + 13) = prefactor_x * *(b + 73 * OS1_S1 + 7) -
                                      p_over_q * *(b + 101 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 7);
            *(b + 73 * OS1_S1 + 14) = prefactor_x * *(b + 73 * OS1_S1 + 8) -
                                      p_over_q * *(b + 101 * OS1_S1 + 8) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 8);
            *(b + 73 * OS1_S1 + 15) = prefactor_x * *(b + 73 * OS1_S1 + 9) -
                                      p_over_q * *(b + 101 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 9);
            *(b + 73 * OS1_S1 + 16) =
                prefactor_y * *(b + 73 * OS1_S1 + 7) -
                p_over_q * *(b + 107 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 2);
            *(b + 73 * OS1_S1 + 17) =
                prefactor_z * *(b + 73 * OS1_S1 + 7) -
                p_over_q * *(b + 108 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 7);
            *(b + 73 * OS1_S1 + 18) =
                prefactor_y * *(b + 73 * OS1_S1 + 9) -
                p_over_q * *(b + 107 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 9);
            *(b + 73 * OS1_S1 + 19) =
                prefactor_z * *(b + 73 * OS1_S1 + 9) -
                p_over_q * *(b + 108 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 3);
            *(b + 74 * OS1_S1 + 10) =
                prefactor_x * *(b + 74 * OS1_S1 + 4) -
                p_over_q * *(b + 102 * OS1_S1 + 4) +
                one_over_two_q * *(b + 53 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 1);
            *(b + 74 * OS1_S1 + 11) =
                prefactor_y * *(b + 74 * OS1_S1 + 4) -
                p_over_q * *(b + 108 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 4);
            *(b + 74 * OS1_S1 + 12) =
                prefactor_z * *(b + 74 * OS1_S1 + 4) -
                p_over_q * *(b + 109 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 4);
            *(b + 74 * OS1_S1 + 13) = prefactor_x * *(b + 74 * OS1_S1 + 7) -
                                      p_over_q * *(b + 102 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 7);
            *(b + 74 * OS1_S1 + 14) = prefactor_x * *(b + 74 * OS1_S1 + 8) -
                                      p_over_q * *(b + 102 * OS1_S1 + 8) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 8);
            *(b + 74 * OS1_S1 + 15) = prefactor_x * *(b + 74 * OS1_S1 + 9) -
                                      p_over_q * *(b + 102 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 9);
            *(b + 74 * OS1_S1 + 16) =
                prefactor_y * *(b + 74 * OS1_S1 + 7) -
                p_over_q * *(b + 108 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 2);
            *(b + 74 * OS1_S1 + 17) =
                prefactor_z * *(b + 74 * OS1_S1 + 7) -
                p_over_q * *(b + 109 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 7);
            *(b + 74 * OS1_S1 + 18) =
                prefactor_y * *(b + 74 * OS1_S1 + 9) -
                p_over_q * *(b + 108 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 9);
            *(b + 74 * OS1_S1 + 19) =
                prefactor_z * *(b + 74 * OS1_S1 + 9) -
                p_over_q * *(b + 109 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 3);
            *(b + 75 * OS1_S1 + 10) =
                prefactor_x * *(b + 75 * OS1_S1 + 4) -
                p_over_q * *(b + 103 * OS1_S1 + 4) +
                one_over_two_q * *(b + 54 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 1);
            *(b + 75 * OS1_S1 + 11) = prefactor_y * *(b + 75 * OS1_S1 + 4) -
                                      p_over_q * *(b + 109 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 4);
            *(b + 75 * OS1_S1 + 12) =
                prefactor_z * *(b + 75 * OS1_S1 + 4) -
                p_over_q * *(b + 110 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 4);
            *(b + 75 * OS1_S1 + 13) = prefactor_x * *(b + 75 * OS1_S1 + 7) -
                                      p_over_q * *(b + 103 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 7);
            *(b + 75 * OS1_S1 + 14) = prefactor_y * *(b + 75 * OS1_S1 + 6) -
                                      p_over_q * *(b + 109 * OS1_S1 + 6) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 6);
            *(b + 75 * OS1_S1 + 15) = prefactor_x * *(b + 75 * OS1_S1 + 9) -
                                      p_over_q * *(b + 103 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 9);
            *(b + 75 * OS1_S1 + 16) =
                prefactor_y * *(b + 75 * OS1_S1 + 7) -
                p_over_q * *(b + 109 * OS1_S1 + 7) +
                one_over_two_q * *(b + 49 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 2);
            *(b + 75 * OS1_S1 + 17) =
                prefactor_z * *(b + 75 * OS1_S1 + 7) -
                p_over_q * *(b + 110 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 7);
            *(b + 75 * OS1_S1 + 18) = prefactor_y * *(b + 75 * OS1_S1 + 9) -
                                      p_over_q * *(b + 109 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 9);
            *(b + 75 * OS1_S1 + 19) =
                prefactor_z * *(b + 75 * OS1_S1 + 9) -
                p_over_q * *(b + 110 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 3);
            *(b + 76 * OS1_S1 + 10) =
                prefactor_x * *(b + 76 * OS1_S1 + 4) -
                p_over_q * *(b + 104 * OS1_S1 + 4) +
                one_over_two_q * *(b + 55 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 1);
            *(b + 76 * OS1_S1 + 11) = prefactor_y * *(b + 76 * OS1_S1 + 4) -
                                      p_over_q * *(b + 110 * OS1_S1 + 4);
            *(b + 76 * OS1_S1 + 12) =
                prefactor_z * *(b + 76 * OS1_S1 + 4) -
                p_over_q * *(b + 111 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 4);
            *(b + 76 * OS1_S1 + 13) = prefactor_x * *(b + 76 * OS1_S1 + 7) -
                                      p_over_q * *(b + 104 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 7);
            *(b + 76 * OS1_S1 + 14) = prefactor_y * *(b + 76 * OS1_S1 + 6) -
                                      p_over_q * *(b + 110 * OS1_S1 + 6);
            *(b + 76 * OS1_S1 + 15) = prefactor_x * *(b + 76 * OS1_S1 + 9) -
                                      p_over_q * *(b + 104 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 9);
            *(b + 76 * OS1_S1 + 16) =
                prefactor_y * *(b + 76 * OS1_S1 + 7) -
                p_over_q * *(b + 110 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 2);
            *(b + 76 * OS1_S1 + 17) =
                prefactor_z * *(b + 76 * OS1_S1 + 7) -
                p_over_q * *(b + 111 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 7);
            *(b + 76 * OS1_S1 + 18) = prefactor_y * *(b + 76 * OS1_S1 + 9) -
                                      p_over_q * *(b + 110 * OS1_S1 + 9);
            *(b + 76 * OS1_S1 + 19) =
                prefactor_z * *(b + 76 * OS1_S1 + 9) -
                p_over_q * *(b + 111 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 3);
            *(b + 77 * OS1_S1 + 10) =
                prefactor_x * *(b + 77 * OS1_S1 + 4) -
                p_over_q * *(b + 105 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 1);
            *(b + 77 * OS1_S1 + 11) =
                prefactor_y * *(b + 77 * OS1_S1 + 4) -
                p_over_q * *(b + 112 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 4);
            *(b + 77 * OS1_S1 + 12) = prefactor_z * *(b + 77 * OS1_S1 + 4) -
                                      p_over_q * *(b + 113 * OS1_S1 + 4);
            *(b + 77 * OS1_S1 + 13) = prefactor_x * *(b + 77 * OS1_S1 + 7) -
                                      p_over_q * *(b + 105 * OS1_S1 + 7);
            *(b + 77 * OS1_S1 + 14) = prefactor_z * *(b + 77 * OS1_S1 + 5) -
                                      p_over_q * *(b + 113 * OS1_S1 + 5);
            *(b + 77 * OS1_S1 + 15) = prefactor_x * *(b + 77 * OS1_S1 + 9) -
                                      p_over_q * *(b + 105 * OS1_S1 + 9);
            *(b + 77 * OS1_S1 + 16) =
                prefactor_y * *(b + 77 * OS1_S1 + 7) -
                p_over_q * *(b + 112 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 2);
            *(b + 77 * OS1_S1 + 17) = prefactor_z * *(b + 77 * OS1_S1 + 7) -
                                      p_over_q * *(b + 113 * OS1_S1 + 7);
            *(b + 77 * OS1_S1 + 18) =
                prefactor_y * *(b + 77 * OS1_S1 + 9) -
                p_over_q * *(b + 112 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 9);
            *(b + 77 * OS1_S1 + 19) =
                prefactor_z * *(b + 77 * OS1_S1 + 9) -
                p_over_q * *(b + 113 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 3);
            *(b + 78 * OS1_S1 + 10) =
                prefactor_x * *(b + 78 * OS1_S1 + 4) -
                p_over_q * *(b + 106 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 1);
            *(b + 78 * OS1_S1 + 11) =
                prefactor_y * *(b + 78 * OS1_S1 + 4) -
                p_over_q * *(b + 113 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 4);
            *(b + 78 * OS1_S1 + 12) = prefactor_z * *(b + 78 * OS1_S1 + 4) -
                                      p_over_q * *(b + 114 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 4);
            *(b + 78 * OS1_S1 + 13) = prefactor_x * *(b + 78 * OS1_S1 + 7) -
                                      p_over_q * *(b + 106 * OS1_S1 + 7);
            *(b + 78 * OS1_S1 + 14) = prefactor_x * *(b + 78 * OS1_S1 + 8) -
                                      p_over_q * *(b + 106 * OS1_S1 + 8);
            *(b + 78 * OS1_S1 + 15) = prefactor_x * *(b + 78 * OS1_S1 + 9) -
                                      p_over_q * *(b + 106 * OS1_S1 + 9);
            *(b + 78 * OS1_S1 + 16) =
                prefactor_y * *(b + 78 * OS1_S1 + 7) -
                p_over_q * *(b + 113 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 2);
            *(b + 78 * OS1_S1 + 17) = prefactor_z * *(b + 78 * OS1_S1 + 7) -
                                      p_over_q * *(b + 114 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 7);
            *(b + 78 * OS1_S1 + 18) =
                prefactor_y * *(b + 78 * OS1_S1 + 9) -
                p_over_q * *(b + 113 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 9);
            *(b + 78 * OS1_S1 + 19) =
                prefactor_z * *(b + 78 * OS1_S1 + 9) -
                p_over_q * *(b + 114 * OS1_S1 + 9) +
                one_over_two_q * *(b + 50 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 3);
            *(b + 79 * OS1_S1 + 10) =
                prefactor_x * *(b + 79 * OS1_S1 + 4) -
                p_over_q * *(b + 107 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 1);
            *(b + 79 * OS1_S1 + 11) =
                prefactor_y * *(b + 79 * OS1_S1 + 4) -
                p_over_q * *(b + 114 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 4);
            *(b + 79 * OS1_S1 + 12) =
                prefactor_z * *(b + 79 * OS1_S1 + 4) -
                p_over_q * *(b + 115 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 4);
            *(b + 79 * OS1_S1 + 13) = prefactor_x * *(b + 79 * OS1_S1 + 7) -
                                      p_over_q * *(b + 107 * OS1_S1 + 7);
            *(b + 79 * OS1_S1 + 14) = prefactor_x * *(b + 79 * OS1_S1 + 8) -
                                      p_over_q * *(b + 107 * OS1_S1 + 8);
            *(b + 79 * OS1_S1 + 15) = prefactor_x * *(b + 79 * OS1_S1 + 9) -
                                      p_over_q * *(b + 107 * OS1_S1 + 9);
            *(b + 79 * OS1_S1 + 16) =
                prefactor_y * *(b + 79 * OS1_S1 + 7) -
                p_over_q * *(b + 114 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 2);
            *(b + 79 * OS1_S1 + 17) =
                prefactor_z * *(b + 79 * OS1_S1 + 7) -
                p_over_q * *(b + 115 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 7);
            *(b + 79 * OS1_S1 + 18) =
                prefactor_y * *(b + 79 * OS1_S1 + 9) -
                p_over_q * *(b + 114 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 9);
            *(b + 79 * OS1_S1 + 19) =
                prefactor_z * *(b + 79 * OS1_S1 + 9) -
                p_over_q * *(b + 115 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 3);
            *(b + 80 * OS1_S1 + 10) =
                prefactor_x * *(b + 80 * OS1_S1 + 4) -
                p_over_q * *(b + 108 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 1);
            *(b + 80 * OS1_S1 + 11) =
                prefactor_y * *(b + 80 * OS1_S1 + 4) -
                p_over_q * *(b + 115 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 4);
            *(b + 80 * OS1_S1 + 12) =
                prefactor_z * *(b + 80 * OS1_S1 + 4) -
                p_over_q * *(b + 116 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 4);
            *(b + 80 * OS1_S1 + 13) = prefactor_x * *(b + 80 * OS1_S1 + 7) -
                                      p_over_q * *(b + 108 * OS1_S1 + 7);
            *(b + 80 * OS1_S1 + 14) = prefactor_x * *(b + 80 * OS1_S1 + 8) -
                                      p_over_q * *(b + 108 * OS1_S1 + 8);
            *(b + 80 * OS1_S1 + 15) = prefactor_x * *(b + 80 * OS1_S1 + 9) -
                                      p_over_q * *(b + 108 * OS1_S1 + 9);
            *(b + 80 * OS1_S1 + 16) =
                prefactor_y * *(b + 80 * OS1_S1 + 7) -
                p_over_q * *(b + 115 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 2);
            *(b + 80 * OS1_S1 + 17) =
                prefactor_z * *(b + 80 * OS1_S1 + 7) -
                p_over_q * *(b + 116 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 7);
            *(b + 80 * OS1_S1 + 18) =
                prefactor_y * *(b + 80 * OS1_S1 + 9) -
                p_over_q * *(b + 115 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 9);
            *(b + 80 * OS1_S1 + 19) =
                prefactor_z * *(b + 80 * OS1_S1 + 9) -
                p_over_q * *(b + 116 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 3);
            *(b + 81 * OS1_S1 + 10) =
                prefactor_x * *(b + 81 * OS1_S1 + 4) -
                p_over_q * *(b + 109 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 1);
            *(b + 81 * OS1_S1 + 11) =
                prefactor_y * *(b + 81 * OS1_S1 + 4) -
                p_over_q * *(b + 116 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 4);
            *(b + 81 * OS1_S1 + 12) =
                prefactor_z * *(b + 81 * OS1_S1 + 4) -
                p_over_q * *(b + 117 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 4);
            *(b + 81 * OS1_S1 + 13) = prefactor_x * *(b + 81 * OS1_S1 + 7) -
                                      p_over_q * *(b + 109 * OS1_S1 + 7);
            *(b + 81 * OS1_S1 + 14) = prefactor_x * *(b + 81 * OS1_S1 + 8) -
                                      p_over_q * *(b + 109 * OS1_S1 + 8);
            *(b + 81 * OS1_S1 + 15) = prefactor_x * *(b + 81 * OS1_S1 + 9) -
                                      p_over_q * *(b + 109 * OS1_S1 + 9);
            *(b + 81 * OS1_S1 + 16) =
                prefactor_y * *(b + 81 * OS1_S1 + 7) -
                p_over_q * *(b + 116 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 2);
            *(b + 81 * OS1_S1 + 17) =
                prefactor_z * *(b + 81 * OS1_S1 + 7) -
                p_over_q * *(b + 117 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 7);
            *(b + 81 * OS1_S1 + 18) =
                prefactor_y * *(b + 81 * OS1_S1 + 9) -
                p_over_q * *(b + 116 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 9);
            *(b + 81 * OS1_S1 + 19) =
                prefactor_z * *(b + 81 * OS1_S1 + 9) -
                p_over_q * *(b + 117 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 3);
            *(b + 82 * OS1_S1 + 10) =
                prefactor_x * *(b + 82 * OS1_S1 + 4) -
                p_over_q * *(b + 110 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 1);
            *(b + 82 * OS1_S1 + 11) = prefactor_y * *(b + 82 * OS1_S1 + 4) -
                                      p_over_q * *(b + 117 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 4);
            *(b + 82 * OS1_S1 + 12) =
                prefactor_z * *(b + 82 * OS1_S1 + 4) -
                p_over_q * *(b + 118 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 4);
            *(b + 82 * OS1_S1 + 13) = prefactor_x * *(b + 82 * OS1_S1 + 7) -
                                      p_over_q * *(b + 110 * OS1_S1 + 7);
            *(b + 82 * OS1_S1 + 14) = prefactor_x * *(b + 82 * OS1_S1 + 8) -
                                      p_over_q * *(b + 110 * OS1_S1 + 8);
            *(b + 82 * OS1_S1 + 15) = prefactor_x * *(b + 82 * OS1_S1 + 9) -
                                      p_over_q * *(b + 110 * OS1_S1 + 9);
            *(b + 82 * OS1_S1 + 16) =
                prefactor_y * *(b + 82 * OS1_S1 + 7) -
                p_over_q * *(b + 117 * OS1_S1 + 7) +
                one_over_two_q * *(b + 55 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 2);
            *(b + 82 * OS1_S1 + 17) =
                prefactor_z * *(b + 82 * OS1_S1 + 7) -
                p_over_q * *(b + 118 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 7);
            *(b + 82 * OS1_S1 + 18) = prefactor_y * *(b + 82 * OS1_S1 + 9) -
                                      p_over_q * *(b + 117 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 9);
            *(b + 82 * OS1_S1 + 19) =
                prefactor_z * *(b + 82 * OS1_S1 + 9) -
                p_over_q * *(b + 118 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 3);
            *(b + 83 * OS1_S1 + 10) =
                prefactor_x * *(b + 83 * OS1_S1 + 4) -
                p_over_q * *(b + 111 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 1);
            *(b + 83 * OS1_S1 + 11) = prefactor_y * *(b + 83 * OS1_S1 + 4) -
                                      p_over_q * *(b + 118 * OS1_S1 + 4);
            *(b + 83 * OS1_S1 + 12) =
                prefactor_z * *(b + 83 * OS1_S1 + 4) -
                p_over_q * *(b + 119 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 4);
            *(b + 83 * OS1_S1 + 13) = prefactor_x * *(b + 83 * OS1_S1 + 7) -
                                      p_over_q * *(b + 111 * OS1_S1 + 7);
            *(b + 83 * OS1_S1 + 14) = prefactor_y * *(b + 83 * OS1_S1 + 6) -
                                      p_over_q * *(b + 118 * OS1_S1 + 6);
            *(b + 83 * OS1_S1 + 15) = prefactor_x * *(b + 83 * OS1_S1 + 9) -
                                      p_over_q * *(b + 111 * OS1_S1 + 9);
            *(b + 83 * OS1_S1 + 16) =
                prefactor_y * *(b + 83 * OS1_S1 + 7) -
                p_over_q * *(b + 118 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 2);
            *(b + 83 * OS1_S1 + 17) =
                prefactor_z * *(b + 83 * OS1_S1 + 7) -
                p_over_q * *(b + 119 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 7);
            *(b + 83 * OS1_S1 + 18) = prefactor_y * *(b + 83 * OS1_S1 + 9) -
                                      p_over_q * *(b + 118 * OS1_S1 + 9);
            *(b + 83 * OS1_S1 + 19) =
                prefactor_z * *(b + 83 * OS1_S1 + 9) -
                p_over_q * *(b + 119 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 3);
            return;
        }
        void transfer_7_3(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 84 * OS1_S1 + 10) =
                prefactor_x * *(b + 84 * OS1_S1 + 4) -
                p_over_q * *(b + 120 * OS1_S1 + 4) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 1);
            *(b + 84 * OS1_S1 + 11) = prefactor_y * *(b + 84 * OS1_S1 + 4) -
                                      p_over_q * *(b + 121 * OS1_S1 + 4);
            *(b + 84 * OS1_S1 + 12) = prefactor_z * *(b + 84 * OS1_S1 + 4) -
                                      p_over_q * *(b + 122 * OS1_S1 + 4);
            *(b + 84 * OS1_S1 + 13) =
                prefactor_x * *(b + 84 * OS1_S1 + 7) -
                p_over_q * *(b + 120 * OS1_S1 + 7) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 7);
            *(b + 84 * OS1_S1 + 14) = prefactor_z * *(b + 84 * OS1_S1 + 5) -
                                      p_over_q * *(b + 122 * OS1_S1 + 5);
            *(b + 84 * OS1_S1 + 15) =
                prefactor_x * *(b + 84 * OS1_S1 + 9) -
                p_over_q * *(b + 120 * OS1_S1 + 9) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 9);
            *(b + 84 * OS1_S1 + 16) =
                prefactor_y * *(b + 84 * OS1_S1 + 7) -
                p_over_q * *(b + 121 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 2);
            *(b + 84 * OS1_S1 + 17) = prefactor_z * *(b + 84 * OS1_S1 + 7) -
                                      p_over_q * *(b + 122 * OS1_S1 + 7);
            *(b + 84 * OS1_S1 + 18) = prefactor_y * *(b + 84 * OS1_S1 + 9) -
                                      p_over_q * *(b + 121 * OS1_S1 + 9);
            *(b + 84 * OS1_S1 + 19) =
                prefactor_z * *(b + 84 * OS1_S1 + 9) -
                p_over_q * *(b + 122 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 3);
            *(b + 85 * OS1_S1 + 10) =
                prefactor_x * *(b + 85 * OS1_S1 + 4) -
                p_over_q * *(b + 121 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 1);
            *(b + 85 * OS1_S1 + 11) = prefactor_y * *(b + 85 * OS1_S1 + 4) -
                                      p_over_q * *(b + 123 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 4);
            *(b + 85 * OS1_S1 + 12) = prefactor_z * *(b + 85 * OS1_S1 + 4) -
                                      p_over_q * *(b + 124 * OS1_S1 + 4);
            *(b + 85 * OS1_S1 + 13) =
                prefactor_x * *(b + 85 * OS1_S1 + 7) -
                p_over_q * *(b + 121 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 7);
            *(b + 85 * OS1_S1 + 14) = prefactor_z * *(b + 85 * OS1_S1 + 5) -
                                      p_over_q * *(b + 124 * OS1_S1 + 5);
            *(b + 85 * OS1_S1 + 15) =
                prefactor_x * *(b + 85 * OS1_S1 + 9) -
                p_over_q * *(b + 121 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 9);
            *(b + 85 * OS1_S1 + 16) =
                prefactor_y * *(b + 85 * OS1_S1 + 7) -
                p_over_q * *(b + 123 * OS1_S1 + 7) +
                one_over_two_q * *(b + 56 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 2);
            *(b + 85 * OS1_S1 + 17) = prefactor_z * *(b + 85 * OS1_S1 + 7) -
                                      p_over_q * *(b + 124 * OS1_S1 + 7);
            *(b + 85 * OS1_S1 + 18) = prefactor_y * *(b + 85 * OS1_S1 + 9) -
                                      p_over_q * *(b + 123 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 9);
            *(b + 85 * OS1_S1 + 19) =
                prefactor_z * *(b + 85 * OS1_S1 + 9) -
                p_over_q * *(b + 124 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 3);
            *(b + 86 * OS1_S1 + 10) =
                prefactor_x * *(b + 86 * OS1_S1 + 4) -
                p_over_q * *(b + 122 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 1);
            *(b + 86 * OS1_S1 + 11) = prefactor_y * *(b + 86 * OS1_S1 + 4) -
                                      p_over_q * *(b + 124 * OS1_S1 + 4);
            *(b + 86 * OS1_S1 + 12) = prefactor_z * *(b + 86 * OS1_S1 + 4) -
                                      p_over_q * *(b + 125 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 4);
            *(b + 86 * OS1_S1 + 13) =
                prefactor_x * *(b + 86 * OS1_S1 + 7) -
                p_over_q * *(b + 122 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 7);
            *(b + 86 * OS1_S1 + 14) = prefactor_y * *(b + 86 * OS1_S1 + 6) -
                                      p_over_q * *(b + 124 * OS1_S1 + 6);
            *(b + 86 * OS1_S1 + 15) =
                prefactor_x * *(b + 86 * OS1_S1 + 9) -
                p_over_q * *(b + 122 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 9);
            *(b + 86 * OS1_S1 + 16) =
                prefactor_y * *(b + 86 * OS1_S1 + 7) -
                p_over_q * *(b + 124 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 2);
            *(b + 86 * OS1_S1 + 17) = prefactor_z * *(b + 86 * OS1_S1 + 7) -
                                      p_over_q * *(b + 125 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 7);
            *(b + 86 * OS1_S1 + 18) = prefactor_y * *(b + 86 * OS1_S1 + 9) -
                                      p_over_q * *(b + 124 * OS1_S1 + 9);
            *(b + 86 * OS1_S1 + 19) =
                prefactor_z * *(b + 86 * OS1_S1 + 9) -
                p_over_q * *(b + 125 * OS1_S1 + 9) +
                one_over_two_q * *(b + 56 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 3);
            *(b + 87 * OS1_S1 + 10) =
                prefactor_x * *(b + 87 * OS1_S1 + 4) -
                p_over_q * *(b + 123 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 1);
            *(b + 87 * OS1_S1 + 11) =
                prefactor_y * *(b + 87 * OS1_S1 + 4) -
                p_over_q * *(b + 126 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 4);
            *(b + 87 * OS1_S1 + 12) = prefactor_z * *(b + 87 * OS1_S1 + 4) -
                                      p_over_q * *(b + 127 * OS1_S1 + 4);
            *(b + 87 * OS1_S1 + 13) =
                prefactor_x * *(b + 87 * OS1_S1 + 7) -
                p_over_q * *(b + 123 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 7);
            *(b + 87 * OS1_S1 + 14) = prefactor_z * *(b + 87 * OS1_S1 + 5) -
                                      p_over_q * *(b + 127 * OS1_S1 + 5);
            *(b + 87 * OS1_S1 + 15) =
                prefactor_x * *(b + 87 * OS1_S1 + 9) -
                p_over_q * *(b + 123 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 9);
            *(b + 87 * OS1_S1 + 16) =
                prefactor_y * *(b + 87 * OS1_S1 + 7) -
                p_over_q * *(b + 126 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 2);
            *(b + 87 * OS1_S1 + 17) = prefactor_z * *(b + 87 * OS1_S1 + 7) -
                                      p_over_q * *(b + 127 * OS1_S1 + 7);
            *(b + 87 * OS1_S1 + 18) =
                prefactor_y * *(b + 87 * OS1_S1 + 9) -
                p_over_q * *(b + 126 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 9);
            *(b + 87 * OS1_S1 + 19) =
                prefactor_z * *(b + 87 * OS1_S1 + 9) -
                p_over_q * *(b + 127 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 3);
            *(b + 88 * OS1_S1 + 10) =
                prefactor_x * *(b + 88 * OS1_S1 + 4) -
                p_over_q * *(b + 124 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 1);
            *(b + 88 * OS1_S1 + 11) = prefactor_y * *(b + 88 * OS1_S1 + 4) -
                                      p_over_q * *(b + 127 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 4);
            *(b + 88 * OS1_S1 + 12) = prefactor_z * *(b + 88 * OS1_S1 + 4) -
                                      p_over_q * *(b + 128 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 4);
            *(b + 88 * OS1_S1 + 13) =
                prefactor_x * *(b + 88 * OS1_S1 + 7) -
                p_over_q * *(b + 124 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 7);
            *(b + 88 * OS1_S1 + 14) = prefactor_z * *(b + 88 * OS1_S1 + 5) -
                                      p_over_q * *(b + 128 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 5);
            *(b + 88 * OS1_S1 + 15) =
                prefactor_x * *(b + 88 * OS1_S1 + 9) -
                p_over_q * *(b + 124 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 9);
            *(b + 88 * OS1_S1 + 16) =
                prefactor_y * *(b + 88 * OS1_S1 + 7) -
                p_over_q * *(b + 127 * OS1_S1 + 7) +
                one_over_two_q * *(b + 58 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 2);
            *(b + 88 * OS1_S1 + 17) = prefactor_z * *(b + 88 * OS1_S1 + 7) -
                                      p_over_q * *(b + 128 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 7);
            *(b + 88 * OS1_S1 + 18) = prefactor_y * *(b + 88 * OS1_S1 + 9) -
                                      p_over_q * *(b + 127 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 9);
            *(b + 88 * OS1_S1 + 19) =
                prefactor_z * *(b + 88 * OS1_S1 + 9) -
                p_over_q * *(b + 128 * OS1_S1 + 9) +
                one_over_two_q * *(b + 57 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 3);
            *(b + 89 * OS1_S1 + 10) =
                prefactor_x * *(b + 89 * OS1_S1 + 4) -
                p_over_q * *(b + 125 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 1);
            *(b + 89 * OS1_S1 + 11) = prefactor_y * *(b + 89 * OS1_S1 + 4) -
                                      p_over_q * *(b + 128 * OS1_S1 + 4);
            *(b + 89 * OS1_S1 + 12) =
                prefactor_z * *(b + 89 * OS1_S1 + 4) -
                p_over_q * *(b + 129 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 4);
            *(b + 89 * OS1_S1 + 13) =
                prefactor_x * *(b + 89 * OS1_S1 + 7) -
                p_over_q * *(b + 125 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 7);
            *(b + 89 * OS1_S1 + 14) = prefactor_y * *(b + 89 * OS1_S1 + 6) -
                                      p_over_q * *(b + 128 * OS1_S1 + 6);
            *(b + 89 * OS1_S1 + 15) =
                prefactor_x * *(b + 89 * OS1_S1 + 9) -
                p_over_q * *(b + 125 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 9);
            *(b + 89 * OS1_S1 + 16) =
                prefactor_y * *(b + 89 * OS1_S1 + 7) -
                p_over_q * *(b + 128 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 2);
            *(b + 89 * OS1_S1 + 17) =
                prefactor_z * *(b + 89 * OS1_S1 + 7) -
                p_over_q * *(b + 129 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 7);
            *(b + 89 * OS1_S1 + 18) = prefactor_y * *(b + 89 * OS1_S1 + 9) -
                                      p_over_q * *(b + 128 * OS1_S1 + 9);
            *(b + 89 * OS1_S1 + 19) =
                prefactor_z * *(b + 89 * OS1_S1 + 9) -
                p_over_q * *(b + 129 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 3);
            *(b + 90 * OS1_S1 + 10) =
                prefactor_x * *(b + 90 * OS1_S1 + 4) -
                p_over_q * *(b + 126 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 1);
            *(b + 90 * OS1_S1 + 11) =
                prefactor_y * *(b + 90 * OS1_S1 + 4) -
                p_over_q * *(b + 130 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 4);
            *(b + 90 * OS1_S1 + 12) = prefactor_z * *(b + 90 * OS1_S1 + 4) -
                                      p_over_q * *(b + 131 * OS1_S1 + 4);
            *(b + 90 * OS1_S1 + 13) =
                prefactor_x * *(b + 90 * OS1_S1 + 7) -
                p_over_q * *(b + 126 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 7);
            *(b + 90 * OS1_S1 + 14) = prefactor_z * *(b + 90 * OS1_S1 + 5) -
                                      p_over_q * *(b + 131 * OS1_S1 + 5);
            *(b + 90 * OS1_S1 + 15) =
                prefactor_x * *(b + 90 * OS1_S1 + 9) -
                p_over_q * *(b + 126 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 9);
            *(b + 90 * OS1_S1 + 16) =
                prefactor_y * *(b + 90 * OS1_S1 + 7) -
                p_over_q * *(b + 130 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 2);
            *(b + 90 * OS1_S1 + 17) = prefactor_z * *(b + 90 * OS1_S1 + 7) -
                                      p_over_q * *(b + 131 * OS1_S1 + 7);
            *(b + 90 * OS1_S1 + 18) =
                prefactor_y * *(b + 90 * OS1_S1 + 9) -
                p_over_q * *(b + 130 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 9);
            *(b + 90 * OS1_S1 + 19) =
                prefactor_z * *(b + 90 * OS1_S1 + 9) -
                p_over_q * *(b + 131 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 3);
            *(b + 91 * OS1_S1 + 10) =
                prefactor_x * *(b + 91 * OS1_S1 + 4) -
                p_over_q * *(b + 127 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 1);
            *(b + 91 * OS1_S1 + 11) =
                prefactor_y * *(b + 91 * OS1_S1 + 4) -
                p_over_q * *(b + 131 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 4);
            *(b + 91 * OS1_S1 + 12) = prefactor_z * *(b + 91 * OS1_S1 + 4) -
                                      p_over_q * *(b + 132 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 4);
            *(b + 91 * OS1_S1 + 13) =
                prefactor_x * *(b + 91 * OS1_S1 + 7) -
                p_over_q * *(b + 127 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 7);
            *(b + 91 * OS1_S1 + 14) = prefactor_z * *(b + 91 * OS1_S1 + 5) -
                                      p_over_q * *(b + 132 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 5);
            *(b + 91 * OS1_S1 + 15) =
                prefactor_x * *(b + 91 * OS1_S1 + 9) -
                p_over_q * *(b + 127 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 9);
            *(b + 91 * OS1_S1 + 16) =
                prefactor_y * *(b + 91 * OS1_S1 + 7) -
                p_over_q * *(b + 131 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 2);
            *(b + 91 * OS1_S1 + 17) = prefactor_z * *(b + 91 * OS1_S1 + 7) -
                                      p_over_q * *(b + 132 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 7);
            *(b + 91 * OS1_S1 + 18) =
                prefactor_y * *(b + 91 * OS1_S1 + 9) -
                p_over_q * *(b + 131 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 9);
            *(b + 91 * OS1_S1 + 19) =
                prefactor_z * *(b + 91 * OS1_S1 + 9) -
                p_over_q * *(b + 132 * OS1_S1 + 9) +
                one_over_two_q * *(b + 59 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 3);
            *(b + 92 * OS1_S1 + 10) =
                prefactor_x * *(b + 92 * OS1_S1 + 4) -
                p_over_q * *(b + 128 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 1);
            *(b + 92 * OS1_S1 + 11) = prefactor_y * *(b + 92 * OS1_S1 + 4) -
                                      p_over_q * *(b + 132 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 4);
            *(b + 92 * OS1_S1 + 12) =
                prefactor_z * *(b + 92 * OS1_S1 + 4) -
                p_over_q * *(b + 133 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 4);
            *(b + 92 * OS1_S1 + 13) =
                prefactor_x * *(b + 92 * OS1_S1 + 7) -
                p_over_q * *(b + 128 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 7);
            *(b + 92 * OS1_S1 + 14) = prefactor_y * *(b + 92 * OS1_S1 + 6) -
                                      p_over_q * *(b + 132 * OS1_S1 + 6) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 6);
            *(b + 92 * OS1_S1 + 15) =
                prefactor_x * *(b + 92 * OS1_S1 + 9) -
                p_over_q * *(b + 128 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 9);
            *(b + 92 * OS1_S1 + 16) =
                prefactor_y * *(b + 92 * OS1_S1 + 7) -
                p_over_q * *(b + 132 * OS1_S1 + 7) +
                one_over_two_q * *(b + 61 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 2);
            *(b + 92 * OS1_S1 + 17) =
                prefactor_z * *(b + 92 * OS1_S1 + 7) -
                p_over_q * *(b + 133 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 7);
            *(b + 92 * OS1_S1 + 18) = prefactor_y * *(b + 92 * OS1_S1 + 9) -
                                      p_over_q * *(b + 132 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 9);
            *(b + 92 * OS1_S1 + 19) =
                prefactor_z * *(b + 92 * OS1_S1 + 9) -
                p_over_q * *(b + 133 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 3);
            *(b + 93 * OS1_S1 + 10) =
                prefactor_x * *(b + 93 * OS1_S1 + 4) -
                p_over_q * *(b + 129 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 1);
            *(b + 93 * OS1_S1 + 11) = prefactor_y * *(b + 93 * OS1_S1 + 4) -
                                      p_over_q * *(b + 133 * OS1_S1 + 4);
            *(b + 93 * OS1_S1 + 12) =
                prefactor_z * *(b + 93 * OS1_S1 + 4) -
                p_over_q * *(b + 134 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 4);
            *(b + 93 * OS1_S1 + 13) =
                prefactor_x * *(b + 93 * OS1_S1 + 7) -
                p_over_q * *(b + 129 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 7);
            *(b + 93 * OS1_S1 + 14) = prefactor_y * *(b + 93 * OS1_S1 + 6) -
                                      p_over_q * *(b + 133 * OS1_S1 + 6);
            *(b + 93 * OS1_S1 + 15) =
                prefactor_x * *(b + 93 * OS1_S1 + 9) -
                p_over_q * *(b + 129 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 9);
            *(b + 93 * OS1_S1 + 16) =
                prefactor_y * *(b + 93 * OS1_S1 + 7) -
                p_over_q * *(b + 133 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 2);
            *(b + 93 * OS1_S1 + 17) =
                prefactor_z * *(b + 93 * OS1_S1 + 7) -
                p_over_q * *(b + 134 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 7);
            *(b + 93 * OS1_S1 + 18) = prefactor_y * *(b + 93 * OS1_S1 + 9) -
                                      p_over_q * *(b + 133 * OS1_S1 + 9);
            *(b + 93 * OS1_S1 + 19) =
                prefactor_z * *(b + 93 * OS1_S1 + 9) -
                p_over_q * *(b + 134 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 3);
            *(b + 94 * OS1_S1 + 10) =
                prefactor_x * *(b + 94 * OS1_S1 + 4) -
                p_over_q * *(b + 130 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 1);
            *(b + 94 * OS1_S1 + 11) =
                prefactor_y * *(b + 94 * OS1_S1 + 4) -
                p_over_q * *(b + 135 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 4);
            *(b + 94 * OS1_S1 + 12) = prefactor_z * *(b + 94 * OS1_S1 + 4) -
                                      p_over_q * *(b + 136 * OS1_S1 + 4);
            *(b + 94 * OS1_S1 + 13) =
                prefactor_x * *(b + 94 * OS1_S1 + 7) -
                p_over_q * *(b + 130 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 7);
            *(b + 94 * OS1_S1 + 14) = prefactor_z * *(b + 94 * OS1_S1 + 5) -
                                      p_over_q * *(b + 136 * OS1_S1 + 5);
            *(b + 94 * OS1_S1 + 15) =
                prefactor_x * *(b + 94 * OS1_S1 + 9) -
                p_over_q * *(b + 130 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 9);
            *(b + 94 * OS1_S1 + 16) =
                prefactor_y * *(b + 94 * OS1_S1 + 7) -
                p_over_q * *(b + 135 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 2);
            *(b + 94 * OS1_S1 + 17) = prefactor_z * *(b + 94 * OS1_S1 + 7) -
                                      p_over_q * *(b + 136 * OS1_S1 + 7);
            *(b + 94 * OS1_S1 + 18) =
                prefactor_y * *(b + 94 * OS1_S1 + 9) -
                p_over_q * *(b + 135 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 9);
            *(b + 94 * OS1_S1 + 19) =
                prefactor_z * *(b + 94 * OS1_S1 + 9) -
                p_over_q * *(b + 136 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 3);
            *(b + 95 * OS1_S1 + 10) =
                prefactor_x * *(b + 95 * OS1_S1 + 4) -
                p_over_q * *(b + 131 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 1);
            *(b + 95 * OS1_S1 + 11) =
                prefactor_y * *(b + 95 * OS1_S1 + 4) -
                p_over_q * *(b + 136 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 4);
            *(b + 95 * OS1_S1 + 12) = prefactor_z * *(b + 95 * OS1_S1 + 4) -
                                      p_over_q * *(b + 137 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 4);
            *(b + 95 * OS1_S1 + 13) =
                prefactor_x * *(b + 95 * OS1_S1 + 7) -
                p_over_q * *(b + 131 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 7);
            *(b + 95 * OS1_S1 + 14) = prefactor_z * *(b + 95 * OS1_S1 + 5) -
                                      p_over_q * *(b + 137 * OS1_S1 + 5) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 5);
            *(b + 95 * OS1_S1 + 15) =
                prefactor_x * *(b + 95 * OS1_S1 + 9) -
                p_over_q * *(b + 131 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 9);
            *(b + 95 * OS1_S1 + 16) =
                prefactor_y * *(b + 95 * OS1_S1 + 7) -
                p_over_q * *(b + 136 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 2);
            *(b + 95 * OS1_S1 + 17) = prefactor_z * *(b + 95 * OS1_S1 + 7) -
                                      p_over_q * *(b + 137 * OS1_S1 + 7) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 7);
            *(b + 95 * OS1_S1 + 18) =
                prefactor_y * *(b + 95 * OS1_S1 + 9) -
                p_over_q * *(b + 136 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 9);
            *(b + 95 * OS1_S1 + 19) =
                prefactor_z * *(b + 95 * OS1_S1 + 9) -
                p_over_q * *(b + 137 * OS1_S1 + 9) +
                one_over_two_q * *(b + 62 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 3);
            *(b + 96 * OS1_S1 + 10) =
                prefactor_x * *(b + 96 * OS1_S1 + 4) -
                p_over_q * *(b + 132 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 1);
            *(b + 96 * OS1_S1 + 11) =
                prefactor_y * *(b + 96 * OS1_S1 + 4) -
                p_over_q * *(b + 137 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 4);
            *(b + 96 * OS1_S1 + 12) =
                prefactor_z * *(b + 96 * OS1_S1 + 4) -
                p_over_q * *(b + 138 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 4);
            *(b + 96 * OS1_S1 + 13) =
                prefactor_x * *(b + 96 * OS1_S1 + 7) -
                p_over_q * *(b + 132 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 7);
            *(b + 96 * OS1_S1 + 14) =
                prefactor_z * *(b + 96 * OS1_S1 + 5) -
                p_over_q * *(b + 138 * OS1_S1 + 5) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 5);
            *(b + 96 * OS1_S1 + 15) =
                prefactor_x * *(b + 96 * OS1_S1 + 9) -
                p_over_q * *(b + 132 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 9);
            *(b + 96 * OS1_S1 + 16) =
                prefactor_y * *(b + 96 * OS1_S1 + 7) -
                p_over_q * *(b + 137 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 2);
            *(b + 96 * OS1_S1 + 17) =
                prefactor_z * *(b + 96 * OS1_S1 + 7) -
                p_over_q * *(b + 138 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 7);
            *(b + 96 * OS1_S1 + 18) =
                prefactor_y * *(b + 96 * OS1_S1 + 9) -
                p_over_q * *(b + 137 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 9);
            *(b + 96 * OS1_S1 + 19) =
                prefactor_z * *(b + 96 * OS1_S1 + 9) -
                p_over_q * *(b + 138 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 3);
            *(b + 97 * OS1_S1 + 10) =
                prefactor_x * *(b + 97 * OS1_S1 + 4) -
                p_over_q * *(b + 133 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 1);
            *(b + 97 * OS1_S1 + 11) = prefactor_y * *(b + 97 * OS1_S1 + 4) -
                                      p_over_q * *(b + 138 * OS1_S1 + 4) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 4);
            *(b + 97 * OS1_S1 + 12) =
                prefactor_z * *(b + 97 * OS1_S1 + 4) -
                p_over_q * *(b + 139 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 4);
            *(b + 97 * OS1_S1 + 13) =
                prefactor_x * *(b + 97 * OS1_S1 + 7) -
                p_over_q * *(b + 133 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 7);
            *(b + 97 * OS1_S1 + 14) = prefactor_y * *(b + 97 * OS1_S1 + 6) -
                                      p_over_q * *(b + 138 * OS1_S1 + 6) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 6);
            *(b + 97 * OS1_S1 + 15) =
                prefactor_x * *(b + 97 * OS1_S1 + 9) -
                p_over_q * *(b + 133 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 9);
            *(b + 97 * OS1_S1 + 16) =
                prefactor_y * *(b + 97 * OS1_S1 + 7) -
                p_over_q * *(b + 138 * OS1_S1 + 7) +
                one_over_two_q * *(b + 65 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 2);
            *(b + 97 * OS1_S1 + 17) =
                prefactor_z * *(b + 97 * OS1_S1 + 7) -
                p_over_q * *(b + 139 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 7);
            *(b + 97 * OS1_S1 + 18) = prefactor_y * *(b + 97 * OS1_S1 + 9) -
                                      p_over_q * *(b + 138 * OS1_S1 + 9) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 9);
            *(b + 97 * OS1_S1 + 19) =
                prefactor_z * *(b + 97 * OS1_S1 + 9) -
                p_over_q * *(b + 139 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 3);
            *(b + 98 * OS1_S1 + 10) =
                prefactor_x * *(b + 98 * OS1_S1 + 4) -
                p_over_q * *(b + 134 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 1);
            *(b + 98 * OS1_S1 + 11) = prefactor_y * *(b + 98 * OS1_S1 + 4) -
                                      p_over_q * *(b + 139 * OS1_S1 + 4);
            *(b + 98 * OS1_S1 + 12) =
                prefactor_z * *(b + 98 * OS1_S1 + 4) -
                p_over_q * *(b + 140 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 4);
            *(b + 98 * OS1_S1 + 13) =
                prefactor_x * *(b + 98 * OS1_S1 + 7) -
                p_over_q * *(b + 134 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 7);
            *(b + 98 * OS1_S1 + 14) = prefactor_y * *(b + 98 * OS1_S1 + 6) -
                                      p_over_q * *(b + 139 * OS1_S1 + 6);
            *(b + 98 * OS1_S1 + 15) =
                prefactor_x * *(b + 98 * OS1_S1 + 9) -
                p_over_q * *(b + 134 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 9);
            *(b + 98 * OS1_S1 + 16) =
                prefactor_y * *(b + 98 * OS1_S1 + 7) -
                p_over_q * *(b + 139 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 2);
            *(b + 98 * OS1_S1 + 17) =
                prefactor_z * *(b + 98 * OS1_S1 + 7) -
                p_over_q * *(b + 140 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 7);
            *(b + 98 * OS1_S1 + 18) = prefactor_y * *(b + 98 * OS1_S1 + 9) -
                                      p_over_q * *(b + 139 * OS1_S1 + 9);
            *(b + 98 * OS1_S1 + 19) =
                prefactor_z * *(b + 98 * OS1_S1 + 9) -
                p_over_q * *(b + 140 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 3);
            *(b + 99 * OS1_S1 + 10) =
                prefactor_x * *(b + 99 * OS1_S1 + 4) -
                p_over_q * *(b + 135 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 1);
            *(b + 99 * OS1_S1 + 11) =
                prefactor_y * *(b + 99 * OS1_S1 + 4) -
                p_over_q * *(b + 141 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 4);
            *(b + 99 * OS1_S1 + 12) = prefactor_z * *(b + 99 * OS1_S1 + 4) -
                                      p_over_q * *(b + 142 * OS1_S1 + 4);
            *(b + 99 * OS1_S1 + 13) =
                prefactor_x * *(b + 99 * OS1_S1 + 7) -
                p_over_q * *(b + 135 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 7);
            *(b + 99 * OS1_S1 + 14) = prefactor_z * *(b + 99 * OS1_S1 + 5) -
                                      p_over_q * *(b + 142 * OS1_S1 + 5);
            *(b + 99 * OS1_S1 + 15) =
                prefactor_x * *(b + 99 * OS1_S1 + 9) -
                p_over_q * *(b + 135 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 9);
            *(b + 99 * OS1_S1 + 16) =
                prefactor_y * *(b + 99 * OS1_S1 + 7) -
                p_over_q * *(b + 141 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 2);
            *(b + 99 * OS1_S1 + 17) = prefactor_z * *(b + 99 * OS1_S1 + 7) -
                                      p_over_q * *(b + 142 * OS1_S1 + 7);
            *(b + 99 * OS1_S1 + 18) =
                prefactor_y * *(b + 99 * OS1_S1 + 9) -
                p_over_q * *(b + 141 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 9);
            *(b + 99 * OS1_S1 + 19) =
                prefactor_z * *(b + 99 * OS1_S1 + 9) -
                p_over_q * *(b + 142 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 3);
            *(b + 100 * OS1_S1 + 10) =
                prefactor_x * *(b + 100 * OS1_S1 + 4) -
                p_over_q * *(b + 136 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 1);
            *(b + 100 * OS1_S1 + 11) =
                prefactor_y * *(b + 100 * OS1_S1 + 4) -
                p_over_q * *(b + 142 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 4);
            *(b + 100 * OS1_S1 + 12) = prefactor_z * *(b + 100 * OS1_S1 + 4) -
                                       p_over_q * *(b + 143 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 4);
            *(b + 100 * OS1_S1 + 13) =
                prefactor_x * *(b + 100 * OS1_S1 + 7) -
                p_over_q * *(b + 136 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 7);
            *(b + 100 * OS1_S1 + 14) = prefactor_z * *(b + 100 * OS1_S1 + 5) -
                                       p_over_q * *(b + 143 * OS1_S1 + 5) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 5);
            *(b + 100 * OS1_S1 + 15) =
                prefactor_x * *(b + 100 * OS1_S1 + 9) -
                p_over_q * *(b + 136 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 9);
            *(b + 100 * OS1_S1 + 16) =
                prefactor_y * *(b + 100 * OS1_S1 + 7) -
                p_over_q * *(b + 142 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 2);
            *(b + 100 * OS1_S1 + 17) = prefactor_z * *(b + 100 * OS1_S1 + 7) -
                                       p_over_q * *(b + 143 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 7);
            *(b + 100 * OS1_S1 + 18) =
                prefactor_y * *(b + 100 * OS1_S1 + 9) -
                p_over_q * *(b + 142 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 9);
            *(b + 100 * OS1_S1 + 19) =
                prefactor_z * *(b + 100 * OS1_S1 + 9) -
                p_over_q * *(b + 143 * OS1_S1 + 9) +
                one_over_two_q * *(b + 66 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 3);
            *(b + 101 * OS1_S1 + 10) =
                prefactor_x * *(b + 101 * OS1_S1 + 4) -
                p_over_q * *(b + 137 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 1);
            *(b + 101 * OS1_S1 + 11) =
                prefactor_y * *(b + 101 * OS1_S1 + 4) -
                p_over_q * *(b + 143 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 4);
            *(b + 101 * OS1_S1 + 12) =
                prefactor_z * *(b + 101 * OS1_S1 + 4) -
                p_over_q * *(b + 144 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 4);
            *(b + 101 * OS1_S1 + 13) =
                prefactor_x * *(b + 101 * OS1_S1 + 7) -
                p_over_q * *(b + 137 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 7);
            *(b + 101 * OS1_S1 + 14) =
                prefactor_z * *(b + 101 * OS1_S1 + 5) -
                p_over_q * *(b + 144 * OS1_S1 + 5) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 5);
            *(b + 101 * OS1_S1 + 15) =
                prefactor_x * *(b + 101 * OS1_S1 + 9) -
                p_over_q * *(b + 137 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 9);
            *(b + 101 * OS1_S1 + 16) =
                prefactor_y * *(b + 101 * OS1_S1 + 7) -
                p_over_q * *(b + 143 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 2);
            *(b + 101 * OS1_S1 + 17) =
                prefactor_z * *(b + 101 * OS1_S1 + 7) -
                p_over_q * *(b + 144 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 7);
            *(b + 101 * OS1_S1 + 18) =
                prefactor_y * *(b + 101 * OS1_S1 + 9) -
                p_over_q * *(b + 143 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 9);
            *(b + 101 * OS1_S1 + 19) =
                prefactor_z * *(b + 101 * OS1_S1 + 9) -
                p_over_q * *(b + 144 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 3);
            *(b + 102 * OS1_S1 + 10) =
                prefactor_x * *(b + 102 * OS1_S1 + 4) -
                p_over_q * *(b + 138 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 1);
            *(b + 102 * OS1_S1 + 11) =
                prefactor_y * *(b + 102 * OS1_S1 + 4) -
                p_over_q * *(b + 144 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 4);
            *(b + 102 * OS1_S1 + 12) =
                prefactor_z * *(b + 102 * OS1_S1 + 4) -
                p_over_q * *(b + 145 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 4);
            *(b + 102 * OS1_S1 + 13) =
                prefactor_x * *(b + 102 * OS1_S1 + 7) -
                p_over_q * *(b + 138 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 7);
            *(b + 102 * OS1_S1 + 14) =
                prefactor_y * *(b + 102 * OS1_S1 + 6) -
                p_over_q * *(b + 144 * OS1_S1 + 6) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 6);
            *(b + 102 * OS1_S1 + 15) =
                prefactor_x * *(b + 102 * OS1_S1 + 9) -
                p_over_q * *(b + 138 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 9);
            *(b + 102 * OS1_S1 + 16) =
                prefactor_y * *(b + 102 * OS1_S1 + 7) -
                p_over_q * *(b + 144 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 2);
            *(b + 102 * OS1_S1 + 17) =
                prefactor_z * *(b + 102 * OS1_S1 + 7) -
                p_over_q * *(b + 145 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 7);
            *(b + 102 * OS1_S1 + 18) =
                prefactor_y * *(b + 102 * OS1_S1 + 9) -
                p_over_q * *(b + 144 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 9);
            *(b + 102 * OS1_S1 + 19) =
                prefactor_z * *(b + 102 * OS1_S1 + 9) -
                p_over_q * *(b + 145 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 3);
            *(b + 103 * OS1_S1 + 10) =
                prefactor_x * *(b + 103 * OS1_S1 + 4) -
                p_over_q * *(b + 139 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 1);
            *(b + 103 * OS1_S1 + 11) = prefactor_y * *(b + 103 * OS1_S1 + 4) -
                                       p_over_q * *(b + 145 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 4);
            *(b + 103 * OS1_S1 + 12) =
                prefactor_z * *(b + 103 * OS1_S1 + 4) -
                p_over_q * *(b + 146 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 4);
            *(b + 103 * OS1_S1 + 13) =
                prefactor_x * *(b + 103 * OS1_S1 + 7) -
                p_over_q * *(b + 139 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 7);
            *(b + 103 * OS1_S1 + 14) = prefactor_y * *(b + 103 * OS1_S1 + 6) -
                                       p_over_q * *(b + 145 * OS1_S1 + 6) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 6);
            *(b + 103 * OS1_S1 + 15) =
                prefactor_x * *(b + 103 * OS1_S1 + 9) -
                p_over_q * *(b + 139 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 9);
            *(b + 103 * OS1_S1 + 16) =
                prefactor_y * *(b + 103 * OS1_S1 + 7) -
                p_over_q * *(b + 145 * OS1_S1 + 7) +
                one_over_two_q * *(b + 70 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 2);
            *(b + 103 * OS1_S1 + 17) =
                prefactor_z * *(b + 103 * OS1_S1 + 7) -
                p_over_q * *(b + 146 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 7);
            *(b + 103 * OS1_S1 + 18) = prefactor_y * *(b + 103 * OS1_S1 + 9) -
                                       p_over_q * *(b + 145 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 9);
            *(b + 103 * OS1_S1 + 19) =
                prefactor_z * *(b + 103 * OS1_S1 + 9) -
                p_over_q * *(b + 146 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 3);
            *(b + 104 * OS1_S1 + 10) =
                prefactor_x * *(b + 104 * OS1_S1 + 4) -
                p_over_q * *(b + 140 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 1);
            *(b + 104 * OS1_S1 + 11) = prefactor_y * *(b + 104 * OS1_S1 + 4) -
                                       p_over_q * *(b + 146 * OS1_S1 + 4);
            *(b + 104 * OS1_S1 + 12) =
                prefactor_z * *(b + 104 * OS1_S1 + 4) -
                p_over_q * *(b + 147 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 4);
            *(b + 104 * OS1_S1 + 13) =
                prefactor_x * *(b + 104 * OS1_S1 + 7) -
                p_over_q * *(b + 140 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 7);
            *(b + 104 * OS1_S1 + 14) = prefactor_y * *(b + 104 * OS1_S1 + 6) -
                                       p_over_q * *(b + 146 * OS1_S1 + 6);
            *(b + 104 * OS1_S1 + 15) =
                prefactor_x * *(b + 104 * OS1_S1 + 9) -
                p_over_q * *(b + 140 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 9);
            *(b + 104 * OS1_S1 + 16) =
                prefactor_y * *(b + 104 * OS1_S1 + 7) -
                p_over_q * *(b + 146 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 2);
            *(b + 104 * OS1_S1 + 17) =
                prefactor_z * *(b + 104 * OS1_S1 + 7) -
                p_over_q * *(b + 147 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 7);
            *(b + 104 * OS1_S1 + 18) = prefactor_y * *(b + 104 * OS1_S1 + 9) -
                                       p_over_q * *(b + 146 * OS1_S1 + 9);
            *(b + 104 * OS1_S1 + 19) =
                prefactor_z * *(b + 104 * OS1_S1 + 9) -
                p_over_q * *(b + 147 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 3);
            *(b + 105 * OS1_S1 + 10) =
                prefactor_x * *(b + 105 * OS1_S1 + 4) -
                p_over_q * *(b + 141 * OS1_S1 + 4) +
                one_over_two_q * *(b + 77 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 1);
            *(b + 105 * OS1_S1 + 11) =
                prefactor_y * *(b + 105 * OS1_S1 + 4) -
                p_over_q * *(b + 148 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 4);
            *(b + 105 * OS1_S1 + 12) = prefactor_z * *(b + 105 * OS1_S1 + 4) -
                                       p_over_q * *(b + 149 * OS1_S1 + 4);
            *(b + 105 * OS1_S1 + 13) = prefactor_x * *(b + 105 * OS1_S1 + 7) -
                                       p_over_q * *(b + 141 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 7);
            *(b + 105 * OS1_S1 + 14) = prefactor_z * *(b + 105 * OS1_S1 + 5) -
                                       p_over_q * *(b + 149 * OS1_S1 + 5);
            *(b + 105 * OS1_S1 + 15) = prefactor_x * *(b + 105 * OS1_S1 + 9) -
                                       p_over_q * *(b + 141 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 9);
            *(b + 105 * OS1_S1 + 16) =
                prefactor_y * *(b + 105 * OS1_S1 + 7) -
                p_over_q * *(b + 148 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 2);
            *(b + 105 * OS1_S1 + 17) = prefactor_z * *(b + 105 * OS1_S1 + 7) -
                                       p_over_q * *(b + 149 * OS1_S1 + 7);
            *(b + 105 * OS1_S1 + 18) =
                prefactor_y * *(b + 105 * OS1_S1 + 9) -
                p_over_q * *(b + 148 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 9);
            *(b + 105 * OS1_S1 + 19) =
                prefactor_z * *(b + 105 * OS1_S1 + 9) -
                p_over_q * *(b + 149 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 3);
            *(b + 106 * OS1_S1 + 10) =
                prefactor_x * *(b + 106 * OS1_S1 + 4) -
                p_over_q * *(b + 142 * OS1_S1 + 4) +
                one_over_two_q * *(b + 78 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 1);
            *(b + 106 * OS1_S1 + 11) =
                prefactor_y * *(b + 106 * OS1_S1 + 4) -
                p_over_q * *(b + 149 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 4);
            *(b + 106 * OS1_S1 + 12) = prefactor_z * *(b + 106 * OS1_S1 + 4) -
                                       p_over_q * *(b + 150 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 4);
            *(b + 106 * OS1_S1 + 13) = prefactor_x * *(b + 106 * OS1_S1 + 7) -
                                       p_over_q * *(b + 142 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 7);
            *(b + 106 * OS1_S1 + 14) = prefactor_z * *(b + 106 * OS1_S1 + 5) -
                                       p_over_q * *(b + 150 * OS1_S1 + 5) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 5);
            *(b + 106 * OS1_S1 + 15) = prefactor_x * *(b + 106 * OS1_S1 + 9) -
                                       p_over_q * *(b + 142 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 9);
            *(b + 106 * OS1_S1 + 16) =
                prefactor_y * *(b + 106 * OS1_S1 + 7) -
                p_over_q * *(b + 149 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 2);
            *(b + 106 * OS1_S1 + 17) = prefactor_z * *(b + 106 * OS1_S1 + 7) -
                                       p_over_q * *(b + 150 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 7);
            *(b + 106 * OS1_S1 + 18) =
                prefactor_y * *(b + 106 * OS1_S1 + 9) -
                p_over_q * *(b + 149 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 9);
            *(b + 106 * OS1_S1 + 19) =
                prefactor_z * *(b + 106 * OS1_S1 + 9) -
                p_over_q * *(b + 150 * OS1_S1 + 9) +
                one_over_two_q * *(b + 71 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 3);
            *(b + 107 * OS1_S1 + 10) =
                prefactor_x * *(b + 107 * OS1_S1 + 4) -
                p_over_q * *(b + 143 * OS1_S1 + 4) +
                one_over_two_q * *(b + 79 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 1);
            *(b + 107 * OS1_S1 + 11) =
                prefactor_y * *(b + 107 * OS1_S1 + 4) -
                p_over_q * *(b + 150 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 4);
            *(b + 107 * OS1_S1 + 12) =
                prefactor_z * *(b + 107 * OS1_S1 + 4) -
                p_over_q * *(b + 151 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 4);
            *(b + 107 * OS1_S1 + 13) = prefactor_x * *(b + 107 * OS1_S1 + 7) -
                                       p_over_q * *(b + 143 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 7);
            *(b + 107 * OS1_S1 + 14) = prefactor_x * *(b + 107 * OS1_S1 + 8) -
                                       p_over_q * *(b + 143 * OS1_S1 + 8) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 8);
            *(b + 107 * OS1_S1 + 15) = prefactor_x * *(b + 107 * OS1_S1 + 9) -
                                       p_over_q * *(b + 143 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 9);
            *(b + 107 * OS1_S1 + 16) =
                prefactor_y * *(b + 107 * OS1_S1 + 7) -
                p_over_q * *(b + 150 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 2);
            *(b + 107 * OS1_S1 + 17) =
                prefactor_z * *(b + 107 * OS1_S1 + 7) -
                p_over_q * *(b + 151 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 7);
            *(b + 107 * OS1_S1 + 18) =
                prefactor_y * *(b + 107 * OS1_S1 + 9) -
                p_over_q * *(b + 150 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 9);
            *(b + 107 * OS1_S1 + 19) =
                prefactor_z * *(b + 107 * OS1_S1 + 9) -
                p_over_q * *(b + 151 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 3);
            *(b + 108 * OS1_S1 + 10) =
                prefactor_x * *(b + 108 * OS1_S1 + 4) -
                p_over_q * *(b + 144 * OS1_S1 + 4) +
                one_over_two_q * *(b + 80 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 1);
            *(b + 108 * OS1_S1 + 11) =
                prefactor_y * *(b + 108 * OS1_S1 + 4) -
                p_over_q * *(b + 151 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 4);
            *(b + 108 * OS1_S1 + 12) =
                prefactor_z * *(b + 108 * OS1_S1 + 4) -
                p_over_q * *(b + 152 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 4);
            *(b + 108 * OS1_S1 + 13) = prefactor_x * *(b + 108 * OS1_S1 + 7) -
                                       p_over_q * *(b + 144 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 7);
            *(b + 108 * OS1_S1 + 14) = prefactor_x * *(b + 108 * OS1_S1 + 8) -
                                       p_over_q * *(b + 144 * OS1_S1 + 8) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 8);
            *(b + 108 * OS1_S1 + 15) = prefactor_x * *(b + 108 * OS1_S1 + 9) -
                                       p_over_q * *(b + 144 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 9);
            *(b + 108 * OS1_S1 + 16) =
                prefactor_y * *(b + 108 * OS1_S1 + 7) -
                p_over_q * *(b + 151 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 2);
            *(b + 108 * OS1_S1 + 17) =
                prefactor_z * *(b + 108 * OS1_S1 + 7) -
                p_over_q * *(b + 152 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 7);
            *(b + 108 * OS1_S1 + 18) =
                prefactor_y * *(b + 108 * OS1_S1 + 9) -
                p_over_q * *(b + 151 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 9);
            *(b + 108 * OS1_S1 + 19) =
                prefactor_z * *(b + 108 * OS1_S1 + 9) -
                p_over_q * *(b + 152 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 3);
            *(b + 109 * OS1_S1 + 10) =
                prefactor_x * *(b + 109 * OS1_S1 + 4) -
                p_over_q * *(b + 145 * OS1_S1 + 4) +
                one_over_two_q * *(b + 81 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 1);
            *(b + 109 * OS1_S1 + 11) =
                prefactor_y * *(b + 109 * OS1_S1 + 4) -
                p_over_q * *(b + 152 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 4);
            *(b + 109 * OS1_S1 + 12) =
                prefactor_z * *(b + 109 * OS1_S1 + 4) -
                p_over_q * *(b + 153 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 4);
            *(b + 109 * OS1_S1 + 13) = prefactor_x * *(b + 109 * OS1_S1 + 7) -
                                       p_over_q * *(b + 145 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 7);
            *(b + 109 * OS1_S1 + 14) = prefactor_x * *(b + 109 * OS1_S1 + 8) -
                                       p_over_q * *(b + 145 * OS1_S1 + 8) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 8);
            *(b + 109 * OS1_S1 + 15) = prefactor_x * *(b + 109 * OS1_S1 + 9) -
                                       p_over_q * *(b + 145 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 9);
            *(b + 109 * OS1_S1 + 16) =
                prefactor_y * *(b + 109 * OS1_S1 + 7) -
                p_over_q * *(b + 152 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 2);
            *(b + 109 * OS1_S1 + 17) =
                prefactor_z * *(b + 109 * OS1_S1 + 7) -
                p_over_q * *(b + 153 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 7);
            *(b + 109 * OS1_S1 + 18) =
                prefactor_y * *(b + 109 * OS1_S1 + 9) -
                p_over_q * *(b + 152 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 9);
            *(b + 109 * OS1_S1 + 19) =
                prefactor_z * *(b + 109 * OS1_S1 + 9) -
                p_over_q * *(b + 153 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 3);
            *(b + 110 * OS1_S1 + 10) =
                prefactor_x * *(b + 110 * OS1_S1 + 4) -
                p_over_q * *(b + 146 * OS1_S1 + 4) +
                one_over_two_q * *(b + 82 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 1);
            *(b + 110 * OS1_S1 + 11) = prefactor_y * *(b + 110 * OS1_S1 + 4) -
                                       p_over_q * *(b + 153 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 4);
            *(b + 110 * OS1_S1 + 12) =
                prefactor_z * *(b + 110 * OS1_S1 + 4) -
                p_over_q * *(b + 154 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 4);
            *(b + 110 * OS1_S1 + 13) = prefactor_x * *(b + 110 * OS1_S1 + 7) -
                                       p_over_q * *(b + 146 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 7);
            *(b + 110 * OS1_S1 + 14) = prefactor_y * *(b + 110 * OS1_S1 + 6) -
                                       p_over_q * *(b + 153 * OS1_S1 + 6) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 6);
            *(b + 110 * OS1_S1 + 15) = prefactor_x * *(b + 110 * OS1_S1 + 9) -
                                       p_over_q * *(b + 146 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 9);
            *(b + 110 * OS1_S1 + 16) =
                prefactor_y * *(b + 110 * OS1_S1 + 7) -
                p_over_q * *(b + 153 * OS1_S1 + 7) +
                one_over_two_q * *(b + 76 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 2);
            *(b + 110 * OS1_S1 + 17) =
                prefactor_z * *(b + 110 * OS1_S1 + 7) -
                p_over_q * *(b + 154 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 7);
            *(b + 110 * OS1_S1 + 18) = prefactor_y * *(b + 110 * OS1_S1 + 9) -
                                       p_over_q * *(b + 153 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 9);
            *(b + 110 * OS1_S1 + 19) =
                prefactor_z * *(b + 110 * OS1_S1 + 9) -
                p_over_q * *(b + 154 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 3);
            *(b + 111 * OS1_S1 + 10) =
                prefactor_x * *(b + 111 * OS1_S1 + 4) -
                p_over_q * *(b + 147 * OS1_S1 + 4) +
                one_over_two_q * *(b + 83 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 1);
            *(b + 111 * OS1_S1 + 11) = prefactor_y * *(b + 111 * OS1_S1 + 4) -
                                       p_over_q * *(b + 154 * OS1_S1 + 4);
            *(b + 111 * OS1_S1 + 12) =
                prefactor_z * *(b + 111 * OS1_S1 + 4) -
                p_over_q * *(b + 155 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 4);
            *(b + 111 * OS1_S1 + 13) = prefactor_x * *(b + 111 * OS1_S1 + 7) -
                                       p_over_q * *(b + 147 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 7);
            *(b + 111 * OS1_S1 + 14) = prefactor_y * *(b + 111 * OS1_S1 + 6) -
                                       p_over_q * *(b + 154 * OS1_S1 + 6);
            *(b + 111 * OS1_S1 + 15) = prefactor_x * *(b + 111 * OS1_S1 + 9) -
                                       p_over_q * *(b + 147 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 9);
            *(b + 111 * OS1_S1 + 16) =
                prefactor_y * *(b + 111 * OS1_S1 + 7) -
                p_over_q * *(b + 154 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 2);
            *(b + 111 * OS1_S1 + 17) =
                prefactor_z * *(b + 111 * OS1_S1 + 7) -
                p_over_q * *(b + 155 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 7);
            *(b + 111 * OS1_S1 + 18) = prefactor_y * *(b + 111 * OS1_S1 + 9) -
                                       p_over_q * *(b + 154 * OS1_S1 + 9);
            *(b + 111 * OS1_S1 + 19) =
                prefactor_z * *(b + 111 * OS1_S1 + 9) -
                p_over_q * *(b + 155 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 3);
            *(b + 112 * OS1_S1 + 10) =
                prefactor_x * *(b + 112 * OS1_S1 + 4) -
                p_over_q * *(b + 148 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 1);
            *(b + 112 * OS1_S1 + 11) =
                prefactor_y * *(b + 112 * OS1_S1 + 4) -
                p_over_q * *(b + 156 * OS1_S1 + 4) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 4);
            *(b + 112 * OS1_S1 + 12) = prefactor_z * *(b + 112 * OS1_S1 + 4) -
                                       p_over_q * *(b + 157 * OS1_S1 + 4);
            *(b + 112 * OS1_S1 + 13) = prefactor_x * *(b + 112 * OS1_S1 + 7) -
                                       p_over_q * *(b + 148 * OS1_S1 + 7);
            *(b + 112 * OS1_S1 + 14) = prefactor_z * *(b + 112 * OS1_S1 + 5) -
                                       p_over_q * *(b + 157 * OS1_S1 + 5);
            *(b + 112 * OS1_S1 + 15) = prefactor_x * *(b + 112 * OS1_S1 + 9) -
                                       p_over_q * *(b + 148 * OS1_S1 + 9);
            *(b + 112 * OS1_S1 + 16) =
                prefactor_y * *(b + 112 * OS1_S1 + 7) -
                p_over_q * *(b + 156 * OS1_S1 + 7) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 2);
            *(b + 112 * OS1_S1 + 17) = prefactor_z * *(b + 112 * OS1_S1 + 7) -
                                       p_over_q * *(b + 157 * OS1_S1 + 7);
            *(b + 112 * OS1_S1 + 18) =
                prefactor_y * *(b + 112 * OS1_S1 + 9) -
                p_over_q * *(b + 156 * OS1_S1 + 9) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 9);
            *(b + 112 * OS1_S1 + 19) =
                prefactor_z * *(b + 112 * OS1_S1 + 9) -
                p_over_q * *(b + 157 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 3);
            *(b + 113 * OS1_S1 + 10) =
                prefactor_x * *(b + 113 * OS1_S1 + 4) -
                p_over_q * *(b + 149 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 1);
            *(b + 113 * OS1_S1 + 11) =
                prefactor_y * *(b + 113 * OS1_S1 + 4) -
                p_over_q * *(b + 157 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 4);
            *(b + 113 * OS1_S1 + 12) = prefactor_z * *(b + 113 * OS1_S1 + 4) -
                                       p_over_q * *(b + 158 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 4);
            *(b + 113 * OS1_S1 + 13) = prefactor_x * *(b + 113 * OS1_S1 + 7) -
                                       p_over_q * *(b + 149 * OS1_S1 + 7);
            *(b + 113 * OS1_S1 + 14) = prefactor_x * *(b + 113 * OS1_S1 + 8) -
                                       p_over_q * *(b + 149 * OS1_S1 + 8);
            *(b + 113 * OS1_S1 + 15) = prefactor_x * *(b + 113 * OS1_S1 + 9) -
                                       p_over_q * *(b + 149 * OS1_S1 + 9);
            *(b + 113 * OS1_S1 + 16) =
                prefactor_y * *(b + 113 * OS1_S1 + 7) -
                p_over_q * *(b + 157 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 2);
            *(b + 113 * OS1_S1 + 17) = prefactor_z * *(b + 113 * OS1_S1 + 7) -
                                       p_over_q * *(b + 158 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 7);
            *(b + 113 * OS1_S1 + 18) =
                prefactor_y * *(b + 113 * OS1_S1 + 9) -
                p_over_q * *(b + 157 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 9);
            *(b + 113 * OS1_S1 + 19) =
                prefactor_z * *(b + 113 * OS1_S1 + 9) -
                p_over_q * *(b + 158 * OS1_S1 + 9) +
                one_over_two_q * *(b + 77 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 3);
            *(b + 114 * OS1_S1 + 10) =
                prefactor_x * *(b + 114 * OS1_S1 + 4) -
                p_over_q * *(b + 150 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 1);
            *(b + 114 * OS1_S1 + 11) =
                prefactor_y * *(b + 114 * OS1_S1 + 4) -
                p_over_q * *(b + 158 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 4);
            *(b + 114 * OS1_S1 + 12) =
                prefactor_z * *(b + 114 * OS1_S1 + 4) -
                p_over_q * *(b + 159 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 4);
            *(b + 114 * OS1_S1 + 13) = prefactor_x * *(b + 114 * OS1_S1 + 7) -
                                       p_over_q * *(b + 150 * OS1_S1 + 7);
            *(b + 114 * OS1_S1 + 14) = prefactor_x * *(b + 114 * OS1_S1 + 8) -
                                       p_over_q * *(b + 150 * OS1_S1 + 8);
            *(b + 114 * OS1_S1 + 15) = prefactor_x * *(b + 114 * OS1_S1 + 9) -
                                       p_over_q * *(b + 150 * OS1_S1 + 9);
            *(b + 114 * OS1_S1 + 16) =
                prefactor_y * *(b + 114 * OS1_S1 + 7) -
                p_over_q * *(b + 158 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 2);
            *(b + 114 * OS1_S1 + 17) =
                prefactor_z * *(b + 114 * OS1_S1 + 7) -
                p_over_q * *(b + 159 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 7);
            *(b + 114 * OS1_S1 + 18) =
                prefactor_y * *(b + 114 * OS1_S1 + 9) -
                p_over_q * *(b + 158 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 9);
            *(b + 114 * OS1_S1 + 19) =
                prefactor_z * *(b + 114 * OS1_S1 + 9) -
                p_over_q * *(b + 159 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 3);
            *(b + 115 * OS1_S1 + 10) =
                prefactor_x * *(b + 115 * OS1_S1 + 4) -
                p_over_q * *(b + 151 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 1);
            *(b + 115 * OS1_S1 + 11) =
                prefactor_y * *(b + 115 * OS1_S1 + 4) -
                p_over_q * *(b + 159 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 4);
            *(b + 115 * OS1_S1 + 12) =
                prefactor_z * *(b + 115 * OS1_S1 + 4) -
                p_over_q * *(b + 160 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 4);
            *(b + 115 * OS1_S1 + 13) = prefactor_x * *(b + 115 * OS1_S1 + 7) -
                                       p_over_q * *(b + 151 * OS1_S1 + 7);
            *(b + 115 * OS1_S1 + 14) = prefactor_x * *(b + 115 * OS1_S1 + 8) -
                                       p_over_q * *(b + 151 * OS1_S1 + 8);
            *(b + 115 * OS1_S1 + 15) = prefactor_x * *(b + 115 * OS1_S1 + 9) -
                                       p_over_q * *(b + 151 * OS1_S1 + 9);
            *(b + 115 * OS1_S1 + 16) =
                prefactor_y * *(b + 115 * OS1_S1 + 7) -
                p_over_q * *(b + 159 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 2);
            *(b + 115 * OS1_S1 + 17) =
                prefactor_z * *(b + 115 * OS1_S1 + 7) -
                p_over_q * *(b + 160 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 7);
            *(b + 115 * OS1_S1 + 18) =
                prefactor_y * *(b + 115 * OS1_S1 + 9) -
                p_over_q * *(b + 159 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 9);
            *(b + 115 * OS1_S1 + 19) =
                prefactor_z * *(b + 115 * OS1_S1 + 9) -
                p_over_q * *(b + 160 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 3);
            *(b + 116 * OS1_S1 + 10) =
                prefactor_x * *(b + 116 * OS1_S1 + 4) -
                p_over_q * *(b + 152 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 1);
            *(b + 116 * OS1_S1 + 11) =
                prefactor_y * *(b + 116 * OS1_S1 + 4) -
                p_over_q * *(b + 160 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 4);
            *(b + 116 * OS1_S1 + 12) =
                prefactor_z * *(b + 116 * OS1_S1 + 4) -
                p_over_q * *(b + 161 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 4);
            *(b + 116 * OS1_S1 + 13) = prefactor_x * *(b + 116 * OS1_S1 + 7) -
                                       p_over_q * *(b + 152 * OS1_S1 + 7);
            *(b + 116 * OS1_S1 + 14) = prefactor_x * *(b + 116 * OS1_S1 + 8) -
                                       p_over_q * *(b + 152 * OS1_S1 + 8);
            *(b + 116 * OS1_S1 + 15) = prefactor_x * *(b + 116 * OS1_S1 + 9) -
                                       p_over_q * *(b + 152 * OS1_S1 + 9);
            *(b + 116 * OS1_S1 + 16) =
                prefactor_y * *(b + 116 * OS1_S1 + 7) -
                p_over_q * *(b + 160 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 2);
            *(b + 116 * OS1_S1 + 17) =
                prefactor_z * *(b + 116 * OS1_S1 + 7) -
                p_over_q * *(b + 161 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 7);
            *(b + 116 * OS1_S1 + 18) =
                prefactor_y * *(b + 116 * OS1_S1 + 9) -
                p_over_q * *(b + 160 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 9);
            *(b + 116 * OS1_S1 + 19) =
                prefactor_z * *(b + 116 * OS1_S1 + 9) -
                p_over_q * *(b + 161 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 3);
            *(b + 117 * OS1_S1 + 10) =
                prefactor_x * *(b + 117 * OS1_S1 + 4) -
                p_over_q * *(b + 153 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 1);
            *(b + 117 * OS1_S1 + 11) =
                prefactor_y * *(b + 117 * OS1_S1 + 4) -
                p_over_q * *(b + 161 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 4);
            *(b + 117 * OS1_S1 + 12) =
                prefactor_z * *(b + 117 * OS1_S1 + 4) -
                p_over_q * *(b + 162 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 4);
            *(b + 117 * OS1_S1 + 13) = prefactor_x * *(b + 117 * OS1_S1 + 7) -
                                       p_over_q * *(b + 153 * OS1_S1 + 7);
            *(b + 117 * OS1_S1 + 14) = prefactor_x * *(b + 117 * OS1_S1 + 8) -
                                       p_over_q * *(b + 153 * OS1_S1 + 8);
            *(b + 117 * OS1_S1 + 15) = prefactor_x * *(b + 117 * OS1_S1 + 9) -
                                       p_over_q * *(b + 153 * OS1_S1 + 9);
            *(b + 117 * OS1_S1 + 16) =
                prefactor_y * *(b + 117 * OS1_S1 + 7) -
                p_over_q * *(b + 161 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 2);
            *(b + 117 * OS1_S1 + 17) =
                prefactor_z * *(b + 117 * OS1_S1 + 7) -
                p_over_q * *(b + 162 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 7);
            *(b + 117 * OS1_S1 + 18) =
                prefactor_y * *(b + 117 * OS1_S1 + 9) -
                p_over_q * *(b + 161 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 9);
            *(b + 117 * OS1_S1 + 19) =
                prefactor_z * *(b + 117 * OS1_S1 + 9) -
                p_over_q * *(b + 162 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 3);
            *(b + 118 * OS1_S1 + 10) =
                prefactor_x * *(b + 118 * OS1_S1 + 4) -
                p_over_q * *(b + 154 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 1);
            *(b + 118 * OS1_S1 + 11) = prefactor_y * *(b + 118 * OS1_S1 + 4) -
                                       p_over_q * *(b + 162 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 4);
            *(b + 118 * OS1_S1 + 12) =
                prefactor_z * *(b + 118 * OS1_S1 + 4) -
                p_over_q * *(b + 163 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 4);
            *(b + 118 * OS1_S1 + 13) = prefactor_x * *(b + 118 * OS1_S1 + 7) -
                                       p_over_q * *(b + 154 * OS1_S1 + 7);
            *(b + 118 * OS1_S1 + 14) = prefactor_x * *(b + 118 * OS1_S1 + 8) -
                                       p_over_q * *(b + 154 * OS1_S1 + 8);
            *(b + 118 * OS1_S1 + 15) = prefactor_x * *(b + 118 * OS1_S1 + 9) -
                                       p_over_q * *(b + 154 * OS1_S1 + 9);
            *(b + 118 * OS1_S1 + 16) =
                prefactor_y * *(b + 118 * OS1_S1 + 7) -
                p_over_q * *(b + 162 * OS1_S1 + 7) +
                one_over_two_q * *(b + 83 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 2);
            *(b + 118 * OS1_S1 + 17) =
                prefactor_z * *(b + 118 * OS1_S1 + 7) -
                p_over_q * *(b + 163 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 7);
            *(b + 118 * OS1_S1 + 18) = prefactor_y * *(b + 118 * OS1_S1 + 9) -
                                       p_over_q * *(b + 162 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 9);
            *(b + 118 * OS1_S1 + 19) =
                prefactor_z * *(b + 118 * OS1_S1 + 9) -
                p_over_q * *(b + 163 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 3);
            *(b + 119 * OS1_S1 + 10) =
                prefactor_x * *(b + 119 * OS1_S1 + 4) -
                p_over_q * *(b + 155 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 1);
            *(b + 119 * OS1_S1 + 11) = prefactor_y * *(b + 119 * OS1_S1 + 4) -
                                       p_over_q * *(b + 163 * OS1_S1 + 4);
            *(b + 119 * OS1_S1 + 12) =
                prefactor_z * *(b + 119 * OS1_S1 + 4) -
                p_over_q * *(b + 164 * OS1_S1 + 4) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 4);
            *(b + 119 * OS1_S1 + 13) = prefactor_x * *(b + 119 * OS1_S1 + 7) -
                                       p_over_q * *(b + 155 * OS1_S1 + 7);
            *(b + 119 * OS1_S1 + 14) = prefactor_y * *(b + 119 * OS1_S1 + 6) -
                                       p_over_q * *(b + 163 * OS1_S1 + 6);
            *(b + 119 * OS1_S1 + 15) = prefactor_x * *(b + 119 * OS1_S1 + 9) -
                                       p_over_q * *(b + 155 * OS1_S1 + 9);
            *(b + 119 * OS1_S1 + 16) =
                prefactor_y * *(b + 119 * OS1_S1 + 7) -
                p_over_q * *(b + 163 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 2);
            *(b + 119 * OS1_S1 + 17) =
                prefactor_z * *(b + 119 * OS1_S1 + 7) -
                p_over_q * *(b + 164 * OS1_S1 + 7) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 7);
            *(b + 119 * OS1_S1 + 18) = prefactor_y * *(b + 119 * OS1_S1 + 9) -
                                       p_over_q * *(b + 163 * OS1_S1 + 9);
            *(b + 119 * OS1_S1 + 19) =
                prefactor_z * *(b + 119 * OS1_S1 + 9) -
                p_over_q * *(b + 164 * OS1_S1 + 9) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 3);
            return;
        }

        void transfer_8_3(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 120 * OS1_S1 + 10) =
                prefactor_x * *(b + 120 * OS1_S1 + 4) -
                p_over_q * *(b + 165 * OS1_S1 + 4) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 1);
            *(b + 120 * OS1_S1 + 11) = prefactor_y * *(b + 120 * OS1_S1 + 4) -
                                       p_over_q * *(b + 166 * OS1_S1 + 4);
            *(b + 120 * OS1_S1 + 12) = prefactor_z * *(b + 120 * OS1_S1 + 4) -
                                       p_over_q * *(b + 167 * OS1_S1 + 4);
            *(b + 120 * OS1_S1 + 13) =
                prefactor_x * *(b + 120 * OS1_S1 + 7) -
                p_over_q * *(b + 165 * OS1_S1 + 7) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 7);
            *(b + 120 * OS1_S1 + 14) = prefactor_z * *(b + 120 * OS1_S1 + 5) -
                                       p_over_q * *(b + 167 * OS1_S1 + 5);
            *(b + 120 * OS1_S1 + 15) =
                prefactor_x * *(b + 120 * OS1_S1 + 9) -
                p_over_q * *(b + 165 * OS1_S1 + 9) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 9);
            *(b + 120 * OS1_S1 + 16) =
                prefactor_y * *(b + 120 * OS1_S1 + 7) -
                p_over_q * *(b + 166 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 2);
            *(b + 120 * OS1_S1 + 17) = prefactor_z * *(b + 120 * OS1_S1 + 7) -
                                       p_over_q * *(b + 167 * OS1_S1 + 7);
            *(b + 120 * OS1_S1 + 18) = prefactor_y * *(b + 120 * OS1_S1 + 9) -
                                       p_over_q * *(b + 166 * OS1_S1 + 9);
            *(b + 120 * OS1_S1 + 19) =
                prefactor_z * *(b + 120 * OS1_S1 + 9) -
                p_over_q * *(b + 167 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 3);
            *(b + 121 * OS1_S1 + 10) =
                prefactor_x * *(b + 121 * OS1_S1 + 4) -
                p_over_q * *(b + 166 * OS1_S1 + 4) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 1);
            *(b + 121 * OS1_S1 + 11) = prefactor_y * *(b + 121 * OS1_S1 + 4) -
                                       p_over_q * *(b + 168 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 4);
            *(b + 121 * OS1_S1 + 12) = prefactor_z * *(b + 121 * OS1_S1 + 4) -
                                       p_over_q * *(b + 169 * OS1_S1 + 4);
            *(b + 121 * OS1_S1 + 13) =
                prefactor_x * *(b + 121 * OS1_S1 + 7) -
                p_over_q * *(b + 166 * OS1_S1 + 7) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 7);
            *(b + 121 * OS1_S1 + 14) = prefactor_z * *(b + 121 * OS1_S1 + 5) -
                                       p_over_q * *(b + 169 * OS1_S1 + 5);
            *(b + 121 * OS1_S1 + 15) =
                prefactor_x * *(b + 121 * OS1_S1 + 9) -
                p_over_q * *(b + 166 * OS1_S1 + 9) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 9);
            *(b + 121 * OS1_S1 + 16) =
                prefactor_y * *(b + 121 * OS1_S1 + 7) -
                p_over_q * *(b + 168 * OS1_S1 + 7) +
                one_over_two_q * *(b + 84 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 2);
            *(b + 121 * OS1_S1 + 17) = prefactor_z * *(b + 121 * OS1_S1 + 7) -
                                       p_over_q * *(b + 169 * OS1_S1 + 7);
            *(b + 121 * OS1_S1 + 18) = prefactor_y * *(b + 121 * OS1_S1 + 9) -
                                       p_over_q * *(b + 168 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 9);
            *(b + 121 * OS1_S1 + 19) =
                prefactor_z * *(b + 121 * OS1_S1 + 9) -
                p_over_q * *(b + 169 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 3);
            *(b + 122 * OS1_S1 + 10) =
                prefactor_x * *(b + 122 * OS1_S1 + 4) -
                p_over_q * *(b + 167 * OS1_S1 + 4) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 1);
            *(b + 122 * OS1_S1 + 11) = prefactor_y * *(b + 122 * OS1_S1 + 4) -
                                       p_over_q * *(b + 169 * OS1_S1 + 4);
            *(b + 122 * OS1_S1 + 12) = prefactor_z * *(b + 122 * OS1_S1 + 4) -
                                       p_over_q * *(b + 170 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 4);
            *(b + 122 * OS1_S1 + 13) =
                prefactor_x * *(b + 122 * OS1_S1 + 7) -
                p_over_q * *(b + 167 * OS1_S1 + 7) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 7);
            *(b + 122 * OS1_S1 + 14) = prefactor_y * *(b + 122 * OS1_S1 + 6) -
                                       p_over_q * *(b + 169 * OS1_S1 + 6);
            *(b + 122 * OS1_S1 + 15) =
                prefactor_x * *(b + 122 * OS1_S1 + 9) -
                p_over_q * *(b + 167 * OS1_S1 + 9) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 9);
            *(b + 122 * OS1_S1 + 16) =
                prefactor_y * *(b + 122 * OS1_S1 + 7) -
                p_over_q * *(b + 169 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 2);
            *(b + 122 * OS1_S1 + 17) = prefactor_z * *(b + 122 * OS1_S1 + 7) -
                                       p_over_q * *(b + 170 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 7);
            *(b + 122 * OS1_S1 + 18) = prefactor_y * *(b + 122 * OS1_S1 + 9) -
                                       p_over_q * *(b + 169 * OS1_S1 + 9);
            *(b + 122 * OS1_S1 + 19) =
                prefactor_z * *(b + 122 * OS1_S1 + 9) -
                p_over_q * *(b + 170 * OS1_S1 + 9) +
                one_over_two_q * *(b + 84 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 3);
            *(b + 123 * OS1_S1 + 10) =
                prefactor_x * *(b + 123 * OS1_S1 + 4) -
                p_over_q * *(b + 168 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 1);
            *(b + 123 * OS1_S1 + 11) =
                prefactor_y * *(b + 123 * OS1_S1 + 4) -
                p_over_q * *(b + 171 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 4);
            *(b + 123 * OS1_S1 + 12) = prefactor_z * *(b + 123 * OS1_S1 + 4) -
                                       p_over_q * *(b + 172 * OS1_S1 + 4);
            *(b + 123 * OS1_S1 + 13) =
                prefactor_x * *(b + 123 * OS1_S1 + 7) -
                p_over_q * *(b + 168 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 7);
            *(b + 123 * OS1_S1 + 14) = prefactor_z * *(b + 123 * OS1_S1 + 5) -
                                       p_over_q * *(b + 172 * OS1_S1 + 5);
            *(b + 123 * OS1_S1 + 15) =
                prefactor_x * *(b + 123 * OS1_S1 + 9) -
                p_over_q * *(b + 168 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 9);
            *(b + 123 * OS1_S1 + 16) =
                prefactor_y * *(b + 123 * OS1_S1 + 7) -
                p_over_q * *(b + 171 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 2);
            *(b + 123 * OS1_S1 + 17) = prefactor_z * *(b + 123 * OS1_S1 + 7) -
                                       p_over_q * *(b + 172 * OS1_S1 + 7);
            *(b + 123 * OS1_S1 + 18) =
                prefactor_y * *(b + 123 * OS1_S1 + 9) -
                p_over_q * *(b + 171 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 9);
            *(b + 123 * OS1_S1 + 19) =
                prefactor_z * *(b + 123 * OS1_S1 + 9) -
                p_over_q * *(b + 172 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 3);
            *(b + 124 * OS1_S1 + 10) =
                prefactor_x * *(b + 124 * OS1_S1 + 4) -
                p_over_q * *(b + 169 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 1);
            *(b + 124 * OS1_S1 + 11) = prefactor_y * *(b + 124 * OS1_S1 + 4) -
                                       p_over_q * *(b + 172 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 4);
            *(b + 124 * OS1_S1 + 12) = prefactor_z * *(b + 124 * OS1_S1 + 4) -
                                       p_over_q * *(b + 173 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 4);
            *(b + 124 * OS1_S1 + 13) =
                prefactor_x * *(b + 124 * OS1_S1 + 7) -
                p_over_q * *(b + 169 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 7);
            *(b + 124 * OS1_S1 + 14) = prefactor_z * *(b + 124 * OS1_S1 + 5) -
                                       p_over_q * *(b + 173 * OS1_S1 + 5) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 5);
            *(b + 124 * OS1_S1 + 15) =
                prefactor_x * *(b + 124 * OS1_S1 + 9) -
                p_over_q * *(b + 169 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 9);
            *(b + 124 * OS1_S1 + 16) =
                prefactor_y * *(b + 124 * OS1_S1 + 7) -
                p_over_q * *(b + 172 * OS1_S1 + 7) +
                one_over_two_q * *(b + 86 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 2);
            *(b + 124 * OS1_S1 + 17) = prefactor_z * *(b + 124 * OS1_S1 + 7) -
                                       p_over_q * *(b + 173 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 7);
            *(b + 124 * OS1_S1 + 18) = prefactor_y * *(b + 124 * OS1_S1 + 9) -
                                       p_over_q * *(b + 172 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 9);
            *(b + 124 * OS1_S1 + 19) =
                prefactor_z * *(b + 124 * OS1_S1 + 9) -
                p_over_q * *(b + 173 * OS1_S1 + 9) +
                one_over_two_q * *(b + 85 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 3);
            *(b + 125 * OS1_S1 + 10) =
                prefactor_x * *(b + 125 * OS1_S1 + 4) -
                p_over_q * *(b + 170 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 1);
            *(b + 125 * OS1_S1 + 11) = prefactor_y * *(b + 125 * OS1_S1 + 4) -
                                       p_over_q * *(b + 173 * OS1_S1 + 4);
            *(b + 125 * OS1_S1 + 12) =
                prefactor_z * *(b + 125 * OS1_S1 + 4) -
                p_over_q * *(b + 174 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 4);
            *(b + 125 * OS1_S1 + 13) =
                prefactor_x * *(b + 125 * OS1_S1 + 7) -
                p_over_q * *(b + 170 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 7);
            *(b + 125 * OS1_S1 + 14) = prefactor_y * *(b + 125 * OS1_S1 + 6) -
                                       p_over_q * *(b + 173 * OS1_S1 + 6);
            *(b + 125 * OS1_S1 + 15) =
                prefactor_x * *(b + 125 * OS1_S1 + 9) -
                p_over_q * *(b + 170 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 9);
            *(b + 125 * OS1_S1 + 16) =
                prefactor_y * *(b + 125 * OS1_S1 + 7) -
                p_over_q * *(b + 173 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 2);
            *(b + 125 * OS1_S1 + 17) =
                prefactor_z * *(b + 125 * OS1_S1 + 7) -
                p_over_q * *(b + 174 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 7);
            *(b + 125 * OS1_S1 + 18) = prefactor_y * *(b + 125 * OS1_S1 + 9) -
                                       p_over_q * *(b + 173 * OS1_S1 + 9);
            *(b + 125 * OS1_S1 + 19) =
                prefactor_z * *(b + 125 * OS1_S1 + 9) -
                p_over_q * *(b + 174 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 3);
            *(b + 126 * OS1_S1 + 10) =
                prefactor_x * *(b + 126 * OS1_S1 + 4) -
                p_over_q * *(b + 171 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 1);
            *(b + 126 * OS1_S1 + 11) =
                prefactor_y * *(b + 126 * OS1_S1 + 4) -
                p_over_q * *(b + 175 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 4);
            *(b + 126 * OS1_S1 + 12) = prefactor_z * *(b + 126 * OS1_S1 + 4) -
                                       p_over_q * *(b + 176 * OS1_S1 + 4);
            *(b + 126 * OS1_S1 + 13) =
                prefactor_x * *(b + 126 * OS1_S1 + 7) -
                p_over_q * *(b + 171 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 7);
            *(b + 126 * OS1_S1 + 14) = prefactor_z * *(b + 126 * OS1_S1 + 5) -
                                       p_over_q * *(b + 176 * OS1_S1 + 5);
            *(b + 126 * OS1_S1 + 15) =
                prefactor_x * *(b + 126 * OS1_S1 + 9) -
                p_over_q * *(b + 171 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 9);
            *(b + 126 * OS1_S1 + 16) =
                prefactor_y * *(b + 126 * OS1_S1 + 7) -
                p_over_q * *(b + 175 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 2);
            *(b + 126 * OS1_S1 + 17) = prefactor_z * *(b + 126 * OS1_S1 + 7) -
                                       p_over_q * *(b + 176 * OS1_S1 + 7);
            *(b + 126 * OS1_S1 + 18) =
                prefactor_y * *(b + 126 * OS1_S1 + 9) -
                p_over_q * *(b + 175 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 9);
            *(b + 126 * OS1_S1 + 19) =
                prefactor_z * *(b + 126 * OS1_S1 + 9) -
                p_over_q * *(b + 176 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 3);
            *(b + 127 * OS1_S1 + 10) =
                prefactor_x * *(b + 127 * OS1_S1 + 4) -
                p_over_q * *(b + 172 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 1);
            *(b + 127 * OS1_S1 + 11) =
                prefactor_y * *(b + 127 * OS1_S1 + 4) -
                p_over_q * *(b + 176 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 4);
            *(b + 127 * OS1_S1 + 12) = prefactor_z * *(b + 127 * OS1_S1 + 4) -
                                       p_over_q * *(b + 177 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 4);
            *(b + 127 * OS1_S1 + 13) =
                prefactor_x * *(b + 127 * OS1_S1 + 7) -
                p_over_q * *(b + 172 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 7);
            *(b + 127 * OS1_S1 + 14) = prefactor_z * *(b + 127 * OS1_S1 + 5) -
                                       p_over_q * *(b + 177 * OS1_S1 + 5) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 5);
            *(b + 127 * OS1_S1 + 15) =
                prefactor_x * *(b + 127 * OS1_S1 + 9) -
                p_over_q * *(b + 172 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 9);
            *(b + 127 * OS1_S1 + 16) =
                prefactor_y * *(b + 127 * OS1_S1 + 7) -
                p_over_q * *(b + 176 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 2);
            *(b + 127 * OS1_S1 + 17) = prefactor_z * *(b + 127 * OS1_S1 + 7) -
                                       p_over_q * *(b + 177 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 7);
            *(b + 127 * OS1_S1 + 18) =
                prefactor_y * *(b + 127 * OS1_S1 + 9) -
                p_over_q * *(b + 176 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 9);
            *(b + 127 * OS1_S1 + 19) =
                prefactor_z * *(b + 127 * OS1_S1 + 9) -
                p_over_q * *(b + 177 * OS1_S1 + 9) +
                one_over_two_q * *(b + 87 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 3);
            *(b + 128 * OS1_S1 + 10) =
                prefactor_x * *(b + 128 * OS1_S1 + 4) -
                p_over_q * *(b + 173 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 1);
            *(b + 128 * OS1_S1 + 11) = prefactor_y * *(b + 128 * OS1_S1 + 4) -
                                       p_over_q * *(b + 177 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 4);
            *(b + 128 * OS1_S1 + 12) =
                prefactor_z * *(b + 128 * OS1_S1 + 4) -
                p_over_q * *(b + 178 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 4);
            *(b + 128 * OS1_S1 + 13) =
                prefactor_x * *(b + 128 * OS1_S1 + 7) -
                p_over_q * *(b + 173 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 7);
            *(b + 128 * OS1_S1 + 14) = prefactor_y * *(b + 128 * OS1_S1 + 6) -
                                       p_over_q * *(b + 177 * OS1_S1 + 6) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 6);
            *(b + 128 * OS1_S1 + 15) =
                prefactor_x * *(b + 128 * OS1_S1 + 9) -
                p_over_q * *(b + 173 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 9);
            *(b + 128 * OS1_S1 + 16) =
                prefactor_y * *(b + 128 * OS1_S1 + 7) -
                p_over_q * *(b + 177 * OS1_S1 + 7) +
                one_over_two_q * *(b + 89 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 2);
            *(b + 128 * OS1_S1 + 17) =
                prefactor_z * *(b + 128 * OS1_S1 + 7) -
                p_over_q * *(b + 178 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 7);
            *(b + 128 * OS1_S1 + 18) = prefactor_y * *(b + 128 * OS1_S1 + 9) -
                                       p_over_q * *(b + 177 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 9);
            *(b + 128 * OS1_S1 + 19) =
                prefactor_z * *(b + 128 * OS1_S1 + 9) -
                p_over_q * *(b + 178 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 3);
            *(b + 129 * OS1_S1 + 10) =
                prefactor_x * *(b + 129 * OS1_S1 + 4) -
                p_over_q * *(b + 174 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 1);
            *(b + 129 * OS1_S1 + 11) = prefactor_y * *(b + 129 * OS1_S1 + 4) -
                                       p_over_q * *(b + 178 * OS1_S1 + 4);
            *(b + 129 * OS1_S1 + 12) =
                prefactor_z * *(b + 129 * OS1_S1 + 4) -
                p_over_q * *(b + 179 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 4);
            *(b + 129 * OS1_S1 + 13) =
                prefactor_x * *(b + 129 * OS1_S1 + 7) -
                p_over_q * *(b + 174 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 7);
            *(b + 129 * OS1_S1 + 14) = prefactor_y * *(b + 129 * OS1_S1 + 6) -
                                       p_over_q * *(b + 178 * OS1_S1 + 6);
            *(b + 129 * OS1_S1 + 15) =
                prefactor_x * *(b + 129 * OS1_S1 + 9) -
                p_over_q * *(b + 174 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 9);
            *(b + 129 * OS1_S1 + 16) =
                prefactor_y * *(b + 129 * OS1_S1 + 7) -
                p_over_q * *(b + 178 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 2);
            *(b + 129 * OS1_S1 + 17) =
                prefactor_z * *(b + 129 * OS1_S1 + 7) -
                p_over_q * *(b + 179 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 7);
            *(b + 129 * OS1_S1 + 18) = prefactor_y * *(b + 129 * OS1_S1 + 9) -
                                       p_over_q * *(b + 178 * OS1_S1 + 9);
            *(b + 129 * OS1_S1 + 19) =
                prefactor_z * *(b + 129 * OS1_S1 + 9) -
                p_over_q * *(b + 179 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 3);
            *(b + 130 * OS1_S1 + 10) =
                prefactor_x * *(b + 130 * OS1_S1 + 4) -
                p_over_q * *(b + 175 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 1);
            *(b + 130 * OS1_S1 + 11) =
                prefactor_y * *(b + 130 * OS1_S1 + 4) -
                p_over_q * *(b + 180 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 4);
            *(b + 130 * OS1_S1 + 12) = prefactor_z * *(b + 130 * OS1_S1 + 4) -
                                       p_over_q * *(b + 181 * OS1_S1 + 4);
            *(b + 130 * OS1_S1 + 13) =
                prefactor_x * *(b + 130 * OS1_S1 + 7) -
                p_over_q * *(b + 175 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 7);
            *(b + 130 * OS1_S1 + 14) = prefactor_z * *(b + 130 * OS1_S1 + 5) -
                                       p_over_q * *(b + 181 * OS1_S1 + 5);
            *(b + 130 * OS1_S1 + 15) =
                prefactor_x * *(b + 130 * OS1_S1 + 9) -
                p_over_q * *(b + 175 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 9);
            *(b + 130 * OS1_S1 + 16) =
                prefactor_y * *(b + 130 * OS1_S1 + 7) -
                p_over_q * *(b + 180 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 2);
            *(b + 130 * OS1_S1 + 17) = prefactor_z * *(b + 130 * OS1_S1 + 7) -
                                       p_over_q * *(b + 181 * OS1_S1 + 7);
            *(b + 130 * OS1_S1 + 18) =
                prefactor_y * *(b + 130 * OS1_S1 + 9) -
                p_over_q * *(b + 180 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 9);
            *(b + 130 * OS1_S1 + 19) =
                prefactor_z * *(b + 130 * OS1_S1 + 9) -
                p_over_q * *(b + 181 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 3);
            *(b + 131 * OS1_S1 + 10) =
                prefactor_x * *(b + 131 * OS1_S1 + 4) -
                p_over_q * *(b + 176 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 1);
            *(b + 131 * OS1_S1 + 11) =
                prefactor_y * *(b + 131 * OS1_S1 + 4) -
                p_over_q * *(b + 181 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 4);
            *(b + 131 * OS1_S1 + 12) = prefactor_z * *(b + 131 * OS1_S1 + 4) -
                                       p_over_q * *(b + 182 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 4);
            *(b + 131 * OS1_S1 + 13) =
                prefactor_x * *(b + 131 * OS1_S1 + 7) -
                p_over_q * *(b + 176 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 7);
            *(b + 131 * OS1_S1 + 14) = prefactor_z * *(b + 131 * OS1_S1 + 5) -
                                       p_over_q * *(b + 182 * OS1_S1 + 5) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 5);
            *(b + 131 * OS1_S1 + 15) =
                prefactor_x * *(b + 131 * OS1_S1 + 9) -
                p_over_q * *(b + 176 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 9);
            *(b + 131 * OS1_S1 + 16) =
                prefactor_y * *(b + 131 * OS1_S1 + 7) -
                p_over_q * *(b + 181 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 2);
            *(b + 131 * OS1_S1 + 17) = prefactor_z * *(b + 131 * OS1_S1 + 7) -
                                       p_over_q * *(b + 182 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 7);
            *(b + 131 * OS1_S1 + 18) =
                prefactor_y * *(b + 131 * OS1_S1 + 9) -
                p_over_q * *(b + 181 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 9);
            *(b + 131 * OS1_S1 + 19) =
                prefactor_z * *(b + 131 * OS1_S1 + 9) -
                p_over_q * *(b + 182 * OS1_S1 + 9) +
                one_over_two_q * *(b + 90 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 3);
            *(b + 132 * OS1_S1 + 10) =
                prefactor_x * *(b + 132 * OS1_S1 + 4) -
                p_over_q * *(b + 177 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 1);
            *(b + 132 * OS1_S1 + 11) =
                prefactor_y * *(b + 132 * OS1_S1 + 4) -
                p_over_q * *(b + 182 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 4);
            *(b + 132 * OS1_S1 + 12) =
                prefactor_z * *(b + 132 * OS1_S1 + 4) -
                p_over_q * *(b + 183 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 4);
            *(b + 132 * OS1_S1 + 13) =
                prefactor_x * *(b + 132 * OS1_S1 + 7) -
                p_over_q * *(b + 177 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 7);
            *(b + 132 * OS1_S1 + 14) =
                prefactor_z * *(b + 132 * OS1_S1 + 5) -
                p_over_q * *(b + 183 * OS1_S1 + 5) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 5);
            *(b + 132 * OS1_S1 + 15) =
                prefactor_x * *(b + 132 * OS1_S1 + 9) -
                p_over_q * *(b + 177 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 9);
            *(b + 132 * OS1_S1 + 16) =
                prefactor_y * *(b + 132 * OS1_S1 + 7) -
                p_over_q * *(b + 182 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 2);
            *(b + 132 * OS1_S1 + 17) =
                prefactor_z * *(b + 132 * OS1_S1 + 7) -
                p_over_q * *(b + 183 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 7);
            *(b + 132 * OS1_S1 + 18) =
                prefactor_y * *(b + 132 * OS1_S1 + 9) -
                p_over_q * *(b + 182 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 9);
            *(b + 132 * OS1_S1 + 19) =
                prefactor_z * *(b + 132 * OS1_S1 + 9) -
                p_over_q * *(b + 183 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 3);
            *(b + 133 * OS1_S1 + 10) =
                prefactor_x * *(b + 133 * OS1_S1 + 4) -
                p_over_q * *(b + 178 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 1);
            *(b + 133 * OS1_S1 + 11) = prefactor_y * *(b + 133 * OS1_S1 + 4) -
                                       p_over_q * *(b + 183 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 4);
            *(b + 133 * OS1_S1 + 12) =
                prefactor_z * *(b + 133 * OS1_S1 + 4) -
                p_over_q * *(b + 184 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 4);
            *(b + 133 * OS1_S1 + 13) =
                prefactor_x * *(b + 133 * OS1_S1 + 7) -
                p_over_q * *(b + 178 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 7);
            *(b + 133 * OS1_S1 + 14) = prefactor_y * *(b + 133 * OS1_S1 + 6) -
                                       p_over_q * *(b + 183 * OS1_S1 + 6) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 6);
            *(b + 133 * OS1_S1 + 15) =
                prefactor_x * *(b + 133 * OS1_S1 + 9) -
                p_over_q * *(b + 178 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 9);
            *(b + 133 * OS1_S1 + 16) =
                prefactor_y * *(b + 133 * OS1_S1 + 7) -
                p_over_q * *(b + 183 * OS1_S1 + 7) +
                one_over_two_q * *(b + 93 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 2);
            *(b + 133 * OS1_S1 + 17) =
                prefactor_z * *(b + 133 * OS1_S1 + 7) -
                p_over_q * *(b + 184 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 7);
            *(b + 133 * OS1_S1 + 18) = prefactor_y * *(b + 133 * OS1_S1 + 9) -
                                       p_over_q * *(b + 183 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 9);
            *(b + 133 * OS1_S1 + 19) =
                prefactor_z * *(b + 133 * OS1_S1 + 9) -
                p_over_q * *(b + 184 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 3);
            *(b + 134 * OS1_S1 + 10) =
                prefactor_x * *(b + 134 * OS1_S1 + 4) -
                p_over_q * *(b + 179 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 1);
            *(b + 134 * OS1_S1 + 11) = prefactor_y * *(b + 134 * OS1_S1 + 4) -
                                       p_over_q * *(b + 184 * OS1_S1 + 4);
            *(b + 134 * OS1_S1 + 12) =
                prefactor_z * *(b + 134 * OS1_S1 + 4) -
                p_over_q * *(b + 185 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 4);
            *(b + 134 * OS1_S1 + 13) =
                prefactor_x * *(b + 134 * OS1_S1 + 7) -
                p_over_q * *(b + 179 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 7);
            *(b + 134 * OS1_S1 + 14) = prefactor_y * *(b + 134 * OS1_S1 + 6) -
                                       p_over_q * *(b + 184 * OS1_S1 + 6);
            *(b + 134 * OS1_S1 + 15) =
                prefactor_x * *(b + 134 * OS1_S1 + 9) -
                p_over_q * *(b + 179 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 9);
            *(b + 134 * OS1_S1 + 16) =
                prefactor_y * *(b + 134 * OS1_S1 + 7) -
                p_over_q * *(b + 184 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 2);
            *(b + 134 * OS1_S1 + 17) =
                prefactor_z * *(b + 134 * OS1_S1 + 7) -
                p_over_q * *(b + 185 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 7);
            *(b + 134 * OS1_S1 + 18) = prefactor_y * *(b + 134 * OS1_S1 + 9) -
                                       p_over_q * *(b + 184 * OS1_S1 + 9);
            *(b + 134 * OS1_S1 + 19) =
                prefactor_z * *(b + 134 * OS1_S1 + 9) -
                p_over_q * *(b + 185 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 3);
            *(b + 135 * OS1_S1 + 10) =
                prefactor_x * *(b + 135 * OS1_S1 + 4) -
                p_over_q * *(b + 180 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 1);
            *(b + 135 * OS1_S1 + 11) =
                prefactor_y * *(b + 135 * OS1_S1 + 4) -
                p_over_q * *(b + 186 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 4);
            *(b + 135 * OS1_S1 + 12) = prefactor_z * *(b + 135 * OS1_S1 + 4) -
                                       p_over_q * *(b + 187 * OS1_S1 + 4);
            *(b + 135 * OS1_S1 + 13) =
                prefactor_x * *(b + 135 * OS1_S1 + 7) -
                p_over_q * *(b + 180 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 7);
            *(b + 135 * OS1_S1 + 14) = prefactor_z * *(b + 135 * OS1_S1 + 5) -
                                       p_over_q * *(b + 187 * OS1_S1 + 5);
            *(b + 135 * OS1_S1 + 15) =
                prefactor_x * *(b + 135 * OS1_S1 + 9) -
                p_over_q * *(b + 180 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 9);
            *(b + 135 * OS1_S1 + 16) =
                prefactor_y * *(b + 135 * OS1_S1 + 7) -
                p_over_q * *(b + 186 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 2);
            *(b + 135 * OS1_S1 + 17) = prefactor_z * *(b + 135 * OS1_S1 + 7) -
                                       p_over_q * *(b + 187 * OS1_S1 + 7);
            *(b + 135 * OS1_S1 + 18) =
                prefactor_y * *(b + 135 * OS1_S1 + 9) -
                p_over_q * *(b + 186 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 9);
            *(b + 135 * OS1_S1 + 19) =
                prefactor_z * *(b + 135 * OS1_S1 + 9) -
                p_over_q * *(b + 187 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 3);
            *(b + 136 * OS1_S1 + 10) =
                prefactor_x * *(b + 136 * OS1_S1 + 4) -
                p_over_q * *(b + 181 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 1);
            *(b + 136 * OS1_S1 + 11) =
                prefactor_y * *(b + 136 * OS1_S1 + 4) -
                p_over_q * *(b + 187 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 4);
            *(b + 136 * OS1_S1 + 12) = prefactor_z * *(b + 136 * OS1_S1 + 4) -
                                       p_over_q * *(b + 188 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 4);
            *(b + 136 * OS1_S1 + 13) =
                prefactor_x * *(b + 136 * OS1_S1 + 7) -
                p_over_q * *(b + 181 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 7);
            *(b + 136 * OS1_S1 + 14) = prefactor_z * *(b + 136 * OS1_S1 + 5) -
                                       p_over_q * *(b + 188 * OS1_S1 + 5) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 5);
            *(b + 136 * OS1_S1 + 15) =
                prefactor_x * *(b + 136 * OS1_S1 + 9) -
                p_over_q * *(b + 181 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 9);
            *(b + 136 * OS1_S1 + 16) =
                prefactor_y * *(b + 136 * OS1_S1 + 7) -
                p_over_q * *(b + 187 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 2);
            *(b + 136 * OS1_S1 + 17) = prefactor_z * *(b + 136 * OS1_S1 + 7) -
                                       p_over_q * *(b + 188 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 7);
            *(b + 136 * OS1_S1 + 18) =
                prefactor_y * *(b + 136 * OS1_S1 + 9) -
                p_over_q * *(b + 187 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 9);
            *(b + 136 * OS1_S1 + 19) =
                prefactor_z * *(b + 136 * OS1_S1 + 9) -
                p_over_q * *(b + 188 * OS1_S1 + 9) +
                one_over_two_q * *(b + 94 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 3);
            *(b + 137 * OS1_S1 + 10) =
                prefactor_x * *(b + 137 * OS1_S1 + 4) -
                p_over_q * *(b + 182 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 1);
            *(b + 137 * OS1_S1 + 11) =
                prefactor_y * *(b + 137 * OS1_S1 + 4) -
                p_over_q * *(b + 188 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 4);
            *(b + 137 * OS1_S1 + 12) =
                prefactor_z * *(b + 137 * OS1_S1 + 4) -
                p_over_q * *(b + 189 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 4);
            *(b + 137 * OS1_S1 + 13) =
                prefactor_x * *(b + 137 * OS1_S1 + 7) -
                p_over_q * *(b + 182 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 7);
            *(b + 137 * OS1_S1 + 14) =
                prefactor_z * *(b + 137 * OS1_S1 + 5) -
                p_over_q * *(b + 189 * OS1_S1 + 5) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 5);
            *(b + 137 * OS1_S1 + 15) =
                prefactor_x * *(b + 137 * OS1_S1 + 9) -
                p_over_q * *(b + 182 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 9);
            *(b + 137 * OS1_S1 + 16) =
                prefactor_y * *(b + 137 * OS1_S1 + 7) -
                p_over_q * *(b + 188 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 2);
            *(b + 137 * OS1_S1 + 17) =
                prefactor_z * *(b + 137 * OS1_S1 + 7) -
                p_over_q * *(b + 189 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 7);
            *(b + 137 * OS1_S1 + 18) =
                prefactor_y * *(b + 137 * OS1_S1 + 9) -
                p_over_q * *(b + 188 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 9);
            *(b + 137 * OS1_S1 + 19) =
                prefactor_z * *(b + 137 * OS1_S1 + 9) -
                p_over_q * *(b + 189 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 3);
            *(b + 138 * OS1_S1 + 10) =
                prefactor_x * *(b + 138 * OS1_S1 + 4) -
                p_over_q * *(b + 183 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 1);
            *(b + 138 * OS1_S1 + 11) =
                prefactor_y * *(b + 138 * OS1_S1 + 4) -
                p_over_q * *(b + 189 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 4);
            *(b + 138 * OS1_S1 + 12) =
                prefactor_z * *(b + 138 * OS1_S1 + 4) -
                p_over_q * *(b + 190 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 4);
            *(b + 138 * OS1_S1 + 13) =
                prefactor_x * *(b + 138 * OS1_S1 + 7) -
                p_over_q * *(b + 183 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 7);
            *(b + 138 * OS1_S1 + 14) =
                prefactor_y * *(b + 138 * OS1_S1 + 6) -
                p_over_q * *(b + 189 * OS1_S1 + 6) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 6);
            *(b + 138 * OS1_S1 + 15) =
                prefactor_x * *(b + 138 * OS1_S1 + 9) -
                p_over_q * *(b + 183 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 9);
            *(b + 138 * OS1_S1 + 16) =
                prefactor_y * *(b + 138 * OS1_S1 + 7) -
                p_over_q * *(b + 189 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 2);
            *(b + 138 * OS1_S1 + 17) =
                prefactor_z * *(b + 138 * OS1_S1 + 7) -
                p_over_q * *(b + 190 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 7);
            *(b + 138 * OS1_S1 + 18) =
                prefactor_y * *(b + 138 * OS1_S1 + 9) -
                p_over_q * *(b + 189 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 9);
            *(b + 138 * OS1_S1 + 19) =
                prefactor_z * *(b + 138 * OS1_S1 + 9) -
                p_over_q * *(b + 190 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 3);
            *(b + 139 * OS1_S1 + 10) =
                prefactor_x * *(b + 139 * OS1_S1 + 4) -
                p_over_q * *(b + 184 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 1);
            *(b + 139 * OS1_S1 + 11) = prefactor_y * *(b + 139 * OS1_S1 + 4) -
                                       p_over_q * *(b + 190 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 4);
            *(b + 139 * OS1_S1 + 12) =
                prefactor_z * *(b + 139 * OS1_S1 + 4) -
                p_over_q * *(b + 191 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 4);
            *(b + 139 * OS1_S1 + 13) =
                prefactor_x * *(b + 139 * OS1_S1 + 7) -
                p_over_q * *(b + 184 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 7);
            *(b + 139 * OS1_S1 + 14) = prefactor_y * *(b + 139 * OS1_S1 + 6) -
                                       p_over_q * *(b + 190 * OS1_S1 + 6) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 6);
            *(b + 139 * OS1_S1 + 15) =
                prefactor_x * *(b + 139 * OS1_S1 + 9) -
                p_over_q * *(b + 184 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 9);
            *(b + 139 * OS1_S1 + 16) =
                prefactor_y * *(b + 139 * OS1_S1 + 7) -
                p_over_q * *(b + 190 * OS1_S1 + 7) +
                one_over_two_q * *(b + 98 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 2);
            *(b + 139 * OS1_S1 + 17) =
                prefactor_z * *(b + 139 * OS1_S1 + 7) -
                p_over_q * *(b + 191 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 7);
            *(b + 139 * OS1_S1 + 18) = prefactor_y * *(b + 139 * OS1_S1 + 9) -
                                       p_over_q * *(b + 190 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 9);
            *(b + 139 * OS1_S1 + 19) =
                prefactor_z * *(b + 139 * OS1_S1 + 9) -
                p_over_q * *(b + 191 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 3);
            *(b + 140 * OS1_S1 + 10) =
                prefactor_x * *(b + 140 * OS1_S1 + 4) -
                p_over_q * *(b + 185 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 1);
            *(b + 140 * OS1_S1 + 11) = prefactor_y * *(b + 140 * OS1_S1 + 4) -
                                       p_over_q * *(b + 191 * OS1_S1 + 4);
            *(b + 140 * OS1_S1 + 12) =
                prefactor_z * *(b + 140 * OS1_S1 + 4) -
                p_over_q * *(b + 192 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 4);
            *(b + 140 * OS1_S1 + 13) =
                prefactor_x * *(b + 140 * OS1_S1 + 7) -
                p_over_q * *(b + 185 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 7);
            *(b + 140 * OS1_S1 + 14) = prefactor_y * *(b + 140 * OS1_S1 + 6) -
                                       p_over_q * *(b + 191 * OS1_S1 + 6);
            *(b + 140 * OS1_S1 + 15) =
                prefactor_x * *(b + 140 * OS1_S1 + 9) -
                p_over_q * *(b + 185 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 9);
            *(b + 140 * OS1_S1 + 16) =
                prefactor_y * *(b + 140 * OS1_S1 + 7) -
                p_over_q * *(b + 191 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 2);
            *(b + 140 * OS1_S1 + 17) =
                prefactor_z * *(b + 140 * OS1_S1 + 7) -
                p_over_q * *(b + 192 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 7);
            *(b + 140 * OS1_S1 + 18) = prefactor_y * *(b + 140 * OS1_S1 + 9) -
                                       p_over_q * *(b + 191 * OS1_S1 + 9);
            *(b + 140 * OS1_S1 + 19) =
                prefactor_z * *(b + 140 * OS1_S1 + 9) -
                p_over_q * *(b + 192 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 3);
            *(b + 141 * OS1_S1 + 10) =
                prefactor_x * *(b + 141 * OS1_S1 + 4) -
                p_over_q * *(b + 186 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 1);
            *(b + 141 * OS1_S1 + 11) =
                prefactor_y * *(b + 141 * OS1_S1 + 4) -
                p_over_q * *(b + 193 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 4);
            *(b + 141 * OS1_S1 + 12) = prefactor_z * *(b + 141 * OS1_S1 + 4) -
                                       p_over_q * *(b + 194 * OS1_S1 + 4);
            *(b + 141 * OS1_S1 + 13) =
                prefactor_x * *(b + 141 * OS1_S1 + 7) -
                p_over_q * *(b + 186 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 7);
            *(b + 141 * OS1_S1 + 14) = prefactor_z * *(b + 141 * OS1_S1 + 5) -
                                       p_over_q * *(b + 194 * OS1_S1 + 5);
            *(b + 141 * OS1_S1 + 15) =
                prefactor_x * *(b + 141 * OS1_S1 + 9) -
                p_over_q * *(b + 186 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 9);
            *(b + 141 * OS1_S1 + 16) =
                prefactor_y * *(b + 141 * OS1_S1 + 7) -
                p_over_q * *(b + 193 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 2);
            *(b + 141 * OS1_S1 + 17) = prefactor_z * *(b + 141 * OS1_S1 + 7) -
                                       p_over_q * *(b + 194 * OS1_S1 + 7);
            *(b + 141 * OS1_S1 + 18) =
                prefactor_y * *(b + 141 * OS1_S1 + 9) -
                p_over_q * *(b + 193 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 9);
            *(b + 141 * OS1_S1 + 19) =
                prefactor_z * *(b + 141 * OS1_S1 + 9) -
                p_over_q * *(b + 194 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 3);
            *(b + 142 * OS1_S1 + 10) =
                prefactor_x * *(b + 142 * OS1_S1 + 4) -
                p_over_q * *(b + 187 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 1);
            *(b + 142 * OS1_S1 + 11) =
                prefactor_y * *(b + 142 * OS1_S1 + 4) -
                p_over_q * *(b + 194 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 4);
            *(b + 142 * OS1_S1 + 12) = prefactor_z * *(b + 142 * OS1_S1 + 4) -
                                       p_over_q * *(b + 195 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 4);
            *(b + 142 * OS1_S1 + 13) =
                prefactor_x * *(b + 142 * OS1_S1 + 7) -
                p_over_q * *(b + 187 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 7);
            *(b + 142 * OS1_S1 + 14) = prefactor_z * *(b + 142 * OS1_S1 + 5) -
                                       p_over_q * *(b + 195 * OS1_S1 + 5) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 5);
            *(b + 142 * OS1_S1 + 15) =
                prefactor_x * *(b + 142 * OS1_S1 + 9) -
                p_over_q * *(b + 187 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 9);
            *(b + 142 * OS1_S1 + 16) =
                prefactor_y * *(b + 142 * OS1_S1 + 7) -
                p_over_q * *(b + 194 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 2);
            *(b + 142 * OS1_S1 + 17) = prefactor_z * *(b + 142 * OS1_S1 + 7) -
                                       p_over_q * *(b + 195 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 7);
            *(b + 142 * OS1_S1 + 18) =
                prefactor_y * *(b + 142 * OS1_S1 + 9) -
                p_over_q * *(b + 194 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 9);
            *(b + 142 * OS1_S1 + 19) =
                prefactor_z * *(b + 142 * OS1_S1 + 9) -
                p_over_q * *(b + 195 * OS1_S1 + 9) +
                one_over_two_q * *(b + 99 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 3);
            *(b + 143 * OS1_S1 + 10) =
                prefactor_x * *(b + 143 * OS1_S1 + 4) -
                p_over_q * *(b + 188 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 1);
            *(b + 143 * OS1_S1 + 11) =
                prefactor_y * *(b + 143 * OS1_S1 + 4) -
                p_over_q * *(b + 195 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 4);
            *(b + 143 * OS1_S1 + 12) =
                prefactor_z * *(b + 143 * OS1_S1 + 4) -
                p_over_q * *(b + 196 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 4);
            *(b + 143 * OS1_S1 + 13) =
                prefactor_x * *(b + 143 * OS1_S1 + 7) -
                p_over_q * *(b + 188 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 7);
            *(b + 143 * OS1_S1 + 14) =
                prefactor_z * *(b + 143 * OS1_S1 + 5) -
                p_over_q * *(b + 196 * OS1_S1 + 5) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 5);
            *(b + 143 * OS1_S1 + 15) =
                prefactor_x * *(b + 143 * OS1_S1 + 9) -
                p_over_q * *(b + 188 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 9);
            *(b + 143 * OS1_S1 + 16) =
                prefactor_y * *(b + 143 * OS1_S1 + 7) -
                p_over_q * *(b + 195 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 2);
            *(b + 143 * OS1_S1 + 17) =
                prefactor_z * *(b + 143 * OS1_S1 + 7) -
                p_over_q * *(b + 196 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 7);
            *(b + 143 * OS1_S1 + 18) =
                prefactor_y * *(b + 143 * OS1_S1 + 9) -
                p_over_q * *(b + 195 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 9);
            *(b + 143 * OS1_S1 + 19) =
                prefactor_z * *(b + 143 * OS1_S1 + 9) -
                p_over_q * *(b + 196 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 3);
            *(b + 144 * OS1_S1 + 10) =
                prefactor_x * *(b + 144 * OS1_S1 + 4) -
                p_over_q * *(b + 189 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 1);
            *(b + 144 * OS1_S1 + 11) =
                prefactor_y * *(b + 144 * OS1_S1 + 4) -
                p_over_q * *(b + 196 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 4);
            *(b + 144 * OS1_S1 + 12) =
                prefactor_z * *(b + 144 * OS1_S1 + 4) -
                p_over_q * *(b + 197 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 4);
            *(b + 144 * OS1_S1 + 13) =
                prefactor_x * *(b + 144 * OS1_S1 + 7) -
                p_over_q * *(b + 189 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 7);
            *(b + 144 * OS1_S1 + 14) =
                prefactor_x * *(b + 144 * OS1_S1 + 8) -
                p_over_q * *(b + 189 * OS1_S1 + 8) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 8);
            *(b + 144 * OS1_S1 + 15) =
                prefactor_x * *(b + 144 * OS1_S1 + 9) -
                p_over_q * *(b + 189 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 9);
            *(b + 144 * OS1_S1 + 16) =
                prefactor_y * *(b + 144 * OS1_S1 + 7) -
                p_over_q * *(b + 196 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 2);
            *(b + 144 * OS1_S1 + 17) =
                prefactor_z * *(b + 144 * OS1_S1 + 7) -
                p_over_q * *(b + 197 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 7);
            *(b + 144 * OS1_S1 + 18) =
                prefactor_y * *(b + 144 * OS1_S1 + 9) -
                p_over_q * *(b + 196 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 9);
            *(b + 144 * OS1_S1 + 19) =
                prefactor_z * *(b + 144 * OS1_S1 + 9) -
                p_over_q * *(b + 197 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 3);
            *(b + 145 * OS1_S1 + 10) =
                prefactor_x * *(b + 145 * OS1_S1 + 4) -
                p_over_q * *(b + 190 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 1);
            *(b + 145 * OS1_S1 + 11) =
                prefactor_y * *(b + 145 * OS1_S1 + 4) -
                p_over_q * *(b + 197 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 4);
            *(b + 145 * OS1_S1 + 12) =
                prefactor_z * *(b + 145 * OS1_S1 + 4) -
                p_over_q * *(b + 198 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 4);
            *(b + 145 * OS1_S1 + 13) =
                prefactor_x * *(b + 145 * OS1_S1 + 7) -
                p_over_q * *(b + 190 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 7);
            *(b + 145 * OS1_S1 + 14) =
                prefactor_y * *(b + 145 * OS1_S1 + 6) -
                p_over_q * *(b + 197 * OS1_S1 + 6) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 6);
            *(b + 145 * OS1_S1 + 15) =
                prefactor_x * *(b + 145 * OS1_S1 + 9) -
                p_over_q * *(b + 190 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 9);
            *(b + 145 * OS1_S1 + 16) =
                prefactor_y * *(b + 145 * OS1_S1 + 7) -
                p_over_q * *(b + 197 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 2);
            *(b + 145 * OS1_S1 + 17) =
                prefactor_z * *(b + 145 * OS1_S1 + 7) -
                p_over_q * *(b + 198 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 7);
            *(b + 145 * OS1_S1 + 18) =
                prefactor_y * *(b + 145 * OS1_S1 + 9) -
                p_over_q * *(b + 197 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 9);
            *(b + 145 * OS1_S1 + 19) =
                prefactor_z * *(b + 145 * OS1_S1 + 9) -
                p_over_q * *(b + 198 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 3);
            *(b + 146 * OS1_S1 + 10) =
                prefactor_x * *(b + 146 * OS1_S1 + 4) -
                p_over_q * *(b + 191 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 1);
            *(b + 146 * OS1_S1 + 11) = prefactor_y * *(b + 146 * OS1_S1 + 4) -
                                       p_over_q * *(b + 198 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 104 * OS1_S1 + 4);
            *(b + 146 * OS1_S1 + 12) =
                prefactor_z * *(b + 146 * OS1_S1 + 4) -
                p_over_q * *(b + 199 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 4);
            *(b + 146 * OS1_S1 + 13) =
                prefactor_x * *(b + 146 * OS1_S1 + 7) -
                p_over_q * *(b + 191 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 7);
            *(b + 146 * OS1_S1 + 14) = prefactor_y * *(b + 146 * OS1_S1 + 6) -
                                       p_over_q * *(b + 198 * OS1_S1 + 6) +
                                       one_over_two_q * *(b + 104 * OS1_S1 + 6);
            *(b + 146 * OS1_S1 + 15) =
                prefactor_x * *(b + 146 * OS1_S1 + 9) -
                p_over_q * *(b + 191 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 9);
            *(b + 146 * OS1_S1 + 16) =
                prefactor_y * *(b + 146 * OS1_S1 + 7) -
                p_over_q * *(b + 198 * OS1_S1 + 7) +
                one_over_two_q * *(b + 104 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 2);
            *(b + 146 * OS1_S1 + 17) =
                prefactor_z * *(b + 146 * OS1_S1 + 7) -
                p_over_q * *(b + 199 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 7);
            *(b + 146 * OS1_S1 + 18) = prefactor_y * *(b + 146 * OS1_S1 + 9) -
                                       p_over_q * *(b + 198 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 104 * OS1_S1 + 9);
            *(b + 146 * OS1_S1 + 19) =
                prefactor_z * *(b + 146 * OS1_S1 + 9) -
                p_over_q * *(b + 199 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 3);
            *(b + 147 * OS1_S1 + 10) =
                prefactor_x * *(b + 147 * OS1_S1 + 4) -
                p_over_q * *(b + 192 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 1);
            *(b + 147 * OS1_S1 + 11) = prefactor_y * *(b + 147 * OS1_S1 + 4) -
                                       p_over_q * *(b + 199 * OS1_S1 + 4);
            *(b + 147 * OS1_S1 + 12) =
                prefactor_z * *(b + 147 * OS1_S1 + 4) -
                p_over_q * *(b + 200 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 4);
            *(b + 147 * OS1_S1 + 13) =
                prefactor_x * *(b + 147 * OS1_S1 + 7) -
                p_over_q * *(b + 192 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 7);
            *(b + 147 * OS1_S1 + 14) = prefactor_y * *(b + 147 * OS1_S1 + 6) -
                                       p_over_q * *(b + 199 * OS1_S1 + 6);
            *(b + 147 * OS1_S1 + 15) =
                prefactor_x * *(b + 147 * OS1_S1 + 9) -
                p_over_q * *(b + 192 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 9);
            *(b + 147 * OS1_S1 + 16) =
                prefactor_y * *(b + 147 * OS1_S1 + 7) -
                p_over_q * *(b + 199 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 2);
            *(b + 147 * OS1_S1 + 17) =
                prefactor_z * *(b + 147 * OS1_S1 + 7) -
                p_over_q * *(b + 200 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 7);
            *(b + 147 * OS1_S1 + 18) = prefactor_y * *(b + 147 * OS1_S1 + 9) -
                                       p_over_q * *(b + 199 * OS1_S1 + 9);
            *(b + 147 * OS1_S1 + 19) =
                prefactor_z * *(b + 147 * OS1_S1 + 9) -
                p_over_q * *(b + 200 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 3);
            *(b + 148 * OS1_S1 + 10) =
                prefactor_x * *(b + 148 * OS1_S1 + 4) -
                p_over_q * *(b + 193 * OS1_S1 + 4) +
                one_over_two_q * *(b + 112 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 1);
            *(b + 148 * OS1_S1 + 11) =
                prefactor_y * *(b + 148 * OS1_S1 + 4) -
                p_over_q * *(b + 201 * OS1_S1 + 4) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 4);
            *(b + 148 * OS1_S1 + 12) = prefactor_z * *(b + 148 * OS1_S1 + 4) -
                                       p_over_q * *(b + 202 * OS1_S1 + 4);
            *(b + 148 * OS1_S1 + 13) = prefactor_x * *(b + 148 * OS1_S1 + 7) -
                                       p_over_q * *(b + 193 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 112 * OS1_S1 + 7);
            *(b + 148 * OS1_S1 + 14) = prefactor_z * *(b + 148 * OS1_S1 + 5) -
                                       p_over_q * *(b + 202 * OS1_S1 + 5);
            *(b + 148 * OS1_S1 + 15) = prefactor_x * *(b + 148 * OS1_S1 + 9) -
                                       p_over_q * *(b + 193 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 112 * OS1_S1 + 9);
            *(b + 148 * OS1_S1 + 16) =
                prefactor_y * *(b + 148 * OS1_S1 + 7) -
                p_over_q * *(b + 201 * OS1_S1 + 7) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 2);
            *(b + 148 * OS1_S1 + 17) = prefactor_z * *(b + 148 * OS1_S1 + 7) -
                                       p_over_q * *(b + 202 * OS1_S1 + 7);
            *(b + 148 * OS1_S1 + 18) =
                prefactor_y * *(b + 148 * OS1_S1 + 9) -
                p_over_q * *(b + 201 * OS1_S1 + 9) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 9);
            *(b + 148 * OS1_S1 + 19) =
                prefactor_z * *(b + 148 * OS1_S1 + 9) -
                p_over_q * *(b + 202 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 3);
            *(b + 149 * OS1_S1 + 10) =
                prefactor_x * *(b + 149 * OS1_S1 + 4) -
                p_over_q * *(b + 194 * OS1_S1 + 4) +
                one_over_two_q * *(b + 113 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 1);
            *(b + 149 * OS1_S1 + 11) =
                prefactor_y * *(b + 149 * OS1_S1 + 4) -
                p_over_q * *(b + 202 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 4);
            *(b + 149 * OS1_S1 + 12) = prefactor_z * *(b + 149 * OS1_S1 + 4) -
                                       p_over_q * *(b + 203 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 105 * OS1_S1 + 4);
            *(b + 149 * OS1_S1 + 13) = prefactor_x * *(b + 149 * OS1_S1 + 7) -
                                       p_over_q * *(b + 194 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 113 * OS1_S1 + 7);
            *(b + 149 * OS1_S1 + 14) = prefactor_z * *(b + 149 * OS1_S1 + 5) -
                                       p_over_q * *(b + 203 * OS1_S1 + 5) +
                                       one_over_two_q * *(b + 105 * OS1_S1 + 5);
            *(b + 149 * OS1_S1 + 15) = prefactor_x * *(b + 149 * OS1_S1 + 9) -
                                       p_over_q * *(b + 194 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 113 * OS1_S1 + 9);
            *(b + 149 * OS1_S1 + 16) =
                prefactor_y * *(b + 149 * OS1_S1 + 7) -
                p_over_q * *(b + 202 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 2);
            *(b + 149 * OS1_S1 + 17) = prefactor_z * *(b + 149 * OS1_S1 + 7) -
                                       p_over_q * *(b + 203 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 105 * OS1_S1 + 7);
            *(b + 149 * OS1_S1 + 18) =
                prefactor_y * *(b + 149 * OS1_S1 + 9) -
                p_over_q * *(b + 202 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 9);
            *(b + 149 * OS1_S1 + 19) =
                prefactor_z * *(b + 149 * OS1_S1 + 9) -
                p_over_q * *(b + 203 * OS1_S1 + 9) +
                one_over_two_q * *(b + 105 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 3);
            *(b + 150 * OS1_S1 + 10) =
                prefactor_x * *(b + 150 * OS1_S1 + 4) -
                p_over_q * *(b + 195 * OS1_S1 + 4) +
                one_over_two_q * *(b + 114 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 1);
            *(b + 150 * OS1_S1 + 11) =
                prefactor_y * *(b + 150 * OS1_S1 + 4) -
                p_over_q * *(b + 203 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 4);
            *(b + 150 * OS1_S1 + 12) =
                prefactor_z * *(b + 150 * OS1_S1 + 4) -
                p_over_q * *(b + 204 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 4);
            *(b + 150 * OS1_S1 + 13) = prefactor_x * *(b + 150 * OS1_S1 + 7) -
                                       p_over_q * *(b + 195 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 114 * OS1_S1 + 7);
            *(b + 150 * OS1_S1 + 14) = prefactor_x * *(b + 150 * OS1_S1 + 8) -
                                       p_over_q * *(b + 195 * OS1_S1 + 8) +
                                       one_over_two_q * *(b + 114 * OS1_S1 + 8);
            *(b + 150 * OS1_S1 + 15) = prefactor_x * *(b + 150 * OS1_S1 + 9) -
                                       p_over_q * *(b + 195 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 114 * OS1_S1 + 9);
            *(b + 150 * OS1_S1 + 16) =
                prefactor_y * *(b + 150 * OS1_S1 + 7) -
                p_over_q * *(b + 203 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 2);
            *(b + 150 * OS1_S1 + 17) =
                prefactor_z * *(b + 150 * OS1_S1 + 7) -
                p_over_q * *(b + 204 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 7);
            *(b + 150 * OS1_S1 + 18) =
                prefactor_y * *(b + 150 * OS1_S1 + 9) -
                p_over_q * *(b + 203 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 9);
            *(b + 150 * OS1_S1 + 19) =
                prefactor_z * *(b + 150 * OS1_S1 + 9) -
                p_over_q * *(b + 204 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 3);
            *(b + 151 * OS1_S1 + 10) =
                prefactor_x * *(b + 151 * OS1_S1 + 4) -
                p_over_q * *(b + 196 * OS1_S1 + 4) +
                one_over_two_q * *(b + 115 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 1);
            *(b + 151 * OS1_S1 + 11) =
                prefactor_y * *(b + 151 * OS1_S1 + 4) -
                p_over_q * *(b + 204 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 4);
            *(b + 151 * OS1_S1 + 12) =
                prefactor_z * *(b + 151 * OS1_S1 + 4) -
                p_over_q * *(b + 205 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 4);
            *(b + 151 * OS1_S1 + 13) = prefactor_x * *(b + 151 * OS1_S1 + 7) -
                                       p_over_q * *(b + 196 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 115 * OS1_S1 + 7);
            *(b + 151 * OS1_S1 + 14) = prefactor_x * *(b + 151 * OS1_S1 + 8) -
                                       p_over_q * *(b + 196 * OS1_S1 + 8) +
                                       one_over_two_q * *(b + 115 * OS1_S1 + 8);
            *(b + 151 * OS1_S1 + 15) = prefactor_x * *(b + 151 * OS1_S1 + 9) -
                                       p_over_q * *(b + 196 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 115 * OS1_S1 + 9);
            *(b + 151 * OS1_S1 + 16) =
                prefactor_y * *(b + 151 * OS1_S1 + 7) -
                p_over_q * *(b + 204 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 2);
            *(b + 151 * OS1_S1 + 17) =
                prefactor_z * *(b + 151 * OS1_S1 + 7) -
                p_over_q * *(b + 205 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 7);
            *(b + 151 * OS1_S1 + 18) =
                prefactor_y * *(b + 151 * OS1_S1 + 9) -
                p_over_q * *(b + 204 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 9);
            *(b + 151 * OS1_S1 + 19) =
                prefactor_z * *(b + 151 * OS1_S1 + 9) -
                p_over_q * *(b + 205 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 3);
            *(b + 152 * OS1_S1 + 10) =
                prefactor_x * *(b + 152 * OS1_S1 + 4) -
                p_over_q * *(b + 197 * OS1_S1 + 4) +
                one_over_two_q * *(b + 116 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 1);
            *(b + 152 * OS1_S1 + 11) =
                prefactor_y * *(b + 152 * OS1_S1 + 4) -
                p_over_q * *(b + 205 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 4);
            *(b + 152 * OS1_S1 + 12) =
                prefactor_z * *(b + 152 * OS1_S1 + 4) -
                p_over_q * *(b + 206 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 4);
            *(b + 152 * OS1_S1 + 13) = prefactor_x * *(b + 152 * OS1_S1 + 7) -
                                       p_over_q * *(b + 197 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 116 * OS1_S1 + 7);
            *(b + 152 * OS1_S1 + 14) = prefactor_x * *(b + 152 * OS1_S1 + 8) -
                                       p_over_q * *(b + 197 * OS1_S1 + 8) +
                                       one_over_two_q * *(b + 116 * OS1_S1 + 8);
            *(b + 152 * OS1_S1 + 15) = prefactor_x * *(b + 152 * OS1_S1 + 9) -
                                       p_over_q * *(b + 197 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 116 * OS1_S1 + 9);
            *(b + 152 * OS1_S1 + 16) =
                prefactor_y * *(b + 152 * OS1_S1 + 7) -
                p_over_q * *(b + 205 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 2);
            *(b + 152 * OS1_S1 + 17) =
                prefactor_z * *(b + 152 * OS1_S1 + 7) -
                p_over_q * *(b + 206 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 7);
            *(b + 152 * OS1_S1 + 18) =
                prefactor_y * *(b + 152 * OS1_S1 + 9) -
                p_over_q * *(b + 205 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 9);
            *(b + 152 * OS1_S1 + 19) =
                prefactor_z * *(b + 152 * OS1_S1 + 9) -
                p_over_q * *(b + 206 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 3);
            *(b + 153 * OS1_S1 + 10) =
                prefactor_x * *(b + 153 * OS1_S1 + 4) -
                p_over_q * *(b + 198 * OS1_S1 + 4) +
                one_over_two_q * *(b + 117 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 1);
            *(b + 153 * OS1_S1 + 11) =
                prefactor_y * *(b + 153 * OS1_S1 + 4) -
                p_over_q * *(b + 206 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 4);
            *(b + 153 * OS1_S1 + 12) =
                prefactor_z * *(b + 153 * OS1_S1 + 4) -
                p_over_q * *(b + 207 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 4);
            *(b + 153 * OS1_S1 + 13) = prefactor_x * *(b + 153 * OS1_S1 + 7) -
                                       p_over_q * *(b + 198 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 117 * OS1_S1 + 7);
            *(b + 153 * OS1_S1 + 14) = prefactor_x * *(b + 153 * OS1_S1 + 8) -
                                       p_over_q * *(b + 198 * OS1_S1 + 8) +
                                       one_over_two_q * *(b + 117 * OS1_S1 + 8);
            *(b + 153 * OS1_S1 + 15) = prefactor_x * *(b + 153 * OS1_S1 + 9) -
                                       p_over_q * *(b + 198 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 117 * OS1_S1 + 9);
            *(b + 153 * OS1_S1 + 16) =
                prefactor_y * *(b + 153 * OS1_S1 + 7) -
                p_over_q * *(b + 206 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 2);
            *(b + 153 * OS1_S1 + 17) =
                prefactor_z * *(b + 153 * OS1_S1 + 7) -
                p_over_q * *(b + 207 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 7);
            *(b + 153 * OS1_S1 + 18) =
                prefactor_y * *(b + 153 * OS1_S1 + 9) -
                p_over_q * *(b + 206 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 9);
            *(b + 153 * OS1_S1 + 19) =
                prefactor_z * *(b + 153 * OS1_S1 + 9) -
                p_over_q * *(b + 207 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 3);
            *(b + 154 * OS1_S1 + 10) =
                prefactor_x * *(b + 154 * OS1_S1 + 4) -
                p_over_q * *(b + 199 * OS1_S1 + 4) +
                one_over_two_q * *(b + 118 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 1);
            *(b + 154 * OS1_S1 + 11) = prefactor_y * *(b + 154 * OS1_S1 + 4) -
                                       p_over_q * *(b + 207 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 111 * OS1_S1 + 4);
            *(b + 154 * OS1_S1 + 12) =
                prefactor_z * *(b + 154 * OS1_S1 + 4) -
                p_over_q * *(b + 208 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 4);
            *(b + 154 * OS1_S1 + 13) = prefactor_x * *(b + 154 * OS1_S1 + 7) -
                                       p_over_q * *(b + 199 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 118 * OS1_S1 + 7);
            *(b + 154 * OS1_S1 + 14) = prefactor_y * *(b + 154 * OS1_S1 + 6) -
                                       p_over_q * *(b + 207 * OS1_S1 + 6) +
                                       one_over_two_q * *(b + 111 * OS1_S1 + 6);
            *(b + 154 * OS1_S1 + 15) = prefactor_x * *(b + 154 * OS1_S1 + 9) -
                                       p_over_q * *(b + 199 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 118 * OS1_S1 + 9);
            *(b + 154 * OS1_S1 + 16) =
                prefactor_y * *(b + 154 * OS1_S1 + 7) -
                p_over_q * *(b + 207 * OS1_S1 + 7) +
                one_over_two_q * *(b + 111 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 2);
            *(b + 154 * OS1_S1 + 17) =
                prefactor_z * *(b + 154 * OS1_S1 + 7) -
                p_over_q * *(b + 208 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 7);
            *(b + 154 * OS1_S1 + 18) = prefactor_y * *(b + 154 * OS1_S1 + 9) -
                                       p_over_q * *(b + 207 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 111 * OS1_S1 + 9);
            *(b + 154 * OS1_S1 + 19) =
                prefactor_z * *(b + 154 * OS1_S1 + 9) -
                p_over_q * *(b + 208 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 3);
            *(b + 155 * OS1_S1 + 10) =
                prefactor_x * *(b + 155 * OS1_S1 + 4) -
                p_over_q * *(b + 200 * OS1_S1 + 4) +
                one_over_two_q * *(b + 119 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 1);
            *(b + 155 * OS1_S1 + 11) = prefactor_y * *(b + 155 * OS1_S1 + 4) -
                                       p_over_q * *(b + 208 * OS1_S1 + 4);
            *(b + 155 * OS1_S1 + 12) =
                prefactor_z * *(b + 155 * OS1_S1 + 4) -
                p_over_q * *(b + 209 * OS1_S1 + 4) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 4);
            *(b + 155 * OS1_S1 + 13) = prefactor_x * *(b + 155 * OS1_S1 + 7) -
                                       p_over_q * *(b + 200 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 119 * OS1_S1 + 7);
            *(b + 155 * OS1_S1 + 14) = prefactor_y * *(b + 155 * OS1_S1 + 6) -
                                       p_over_q * *(b + 208 * OS1_S1 + 6);
            *(b + 155 * OS1_S1 + 15) = prefactor_x * *(b + 155 * OS1_S1 + 9) -
                                       p_over_q * *(b + 200 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 119 * OS1_S1 + 9);
            *(b + 155 * OS1_S1 + 16) =
                prefactor_y * *(b + 155 * OS1_S1 + 7) -
                p_over_q * *(b + 208 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 2);
            *(b + 155 * OS1_S1 + 17) =
                prefactor_z * *(b + 155 * OS1_S1 + 7) -
                p_over_q * *(b + 209 * OS1_S1 + 7) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 7);
            *(b + 155 * OS1_S1 + 18) = prefactor_y * *(b + 155 * OS1_S1 + 9) -
                                       p_over_q * *(b + 208 * OS1_S1 + 9);
            *(b + 155 * OS1_S1 + 19) =
                prefactor_z * *(b + 155 * OS1_S1 + 9) -
                p_over_q * *(b + 209 * OS1_S1 + 9) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 3);
            *(b + 156 * OS1_S1 + 10) =
                prefactor_x * *(b + 156 * OS1_S1 + 4) -
                p_over_q * *(b + 201 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 1);
            *(b + 156 * OS1_S1 + 11) =
                prefactor_y * *(b + 156 * OS1_S1 + 4) -
                p_over_q * *(b + 210 * OS1_S1 + 4) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 4);
            *(b + 156 * OS1_S1 + 12) = prefactor_z * *(b + 156 * OS1_S1 + 4) -
                                       p_over_q * *(b + 211 * OS1_S1 + 4);
            *(b + 156 * OS1_S1 + 13) = prefactor_x * *(b + 156 * OS1_S1 + 7) -
                                       p_over_q * *(b + 201 * OS1_S1 + 7);
            *(b + 156 * OS1_S1 + 14) = prefactor_z * *(b + 156 * OS1_S1 + 5) -
                                       p_over_q * *(b + 211 * OS1_S1 + 5);
            *(b + 156 * OS1_S1 + 15) = prefactor_x * *(b + 156 * OS1_S1 + 9) -
                                       p_over_q * *(b + 201 * OS1_S1 + 9);
            *(b + 156 * OS1_S1 + 16) =
                prefactor_y * *(b + 156 * OS1_S1 + 7) -
                p_over_q * *(b + 210 * OS1_S1 + 7) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 2);
            *(b + 156 * OS1_S1 + 17) = prefactor_z * *(b + 156 * OS1_S1 + 7) -
                                       p_over_q * *(b + 211 * OS1_S1 + 7);
            *(b + 156 * OS1_S1 + 18) =
                prefactor_y * *(b + 156 * OS1_S1 + 9) -
                p_over_q * *(b + 210 * OS1_S1 + 9) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 9);
            *(b + 156 * OS1_S1 + 19) =
                prefactor_z * *(b + 156 * OS1_S1 + 9) -
                p_over_q * *(b + 211 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 3);
            *(b + 157 * OS1_S1 + 10) =
                prefactor_x * *(b + 157 * OS1_S1 + 4) -
                p_over_q * *(b + 202 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 1);
            *(b + 157 * OS1_S1 + 11) =
                prefactor_y * *(b + 157 * OS1_S1 + 4) -
                p_over_q * *(b + 211 * OS1_S1 + 4) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 4);
            *(b + 157 * OS1_S1 + 12) = prefactor_z * *(b + 157 * OS1_S1 + 4) -
                                       p_over_q * *(b + 212 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 112 * OS1_S1 + 4);
            *(b + 157 * OS1_S1 + 13) = prefactor_x * *(b + 157 * OS1_S1 + 7) -
                                       p_over_q * *(b + 202 * OS1_S1 + 7);
            *(b + 157 * OS1_S1 + 14) = prefactor_x * *(b + 157 * OS1_S1 + 8) -
                                       p_over_q * *(b + 202 * OS1_S1 + 8);
            *(b + 157 * OS1_S1 + 15) = prefactor_x * *(b + 157 * OS1_S1 + 9) -
                                       p_over_q * *(b + 202 * OS1_S1 + 9);
            *(b + 157 * OS1_S1 + 16) =
                prefactor_y * *(b + 157 * OS1_S1 + 7) -
                p_over_q * *(b + 211 * OS1_S1 + 7) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 2);
            *(b + 157 * OS1_S1 + 17) = prefactor_z * *(b + 157 * OS1_S1 + 7) -
                                       p_over_q * *(b + 212 * OS1_S1 + 7) +
                                       one_over_two_q * *(b + 112 * OS1_S1 + 7);
            *(b + 157 * OS1_S1 + 18) =
                prefactor_y * *(b + 157 * OS1_S1 + 9) -
                p_over_q * *(b + 211 * OS1_S1 + 9) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 9);
            *(b + 157 * OS1_S1 + 19) =
                prefactor_z * *(b + 157 * OS1_S1 + 9) -
                p_over_q * *(b + 212 * OS1_S1 + 9) +
                one_over_two_q * *(b + 112 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 3);
            *(b + 158 * OS1_S1 + 10) =
                prefactor_x * *(b + 158 * OS1_S1 + 4) -
                p_over_q * *(b + 203 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 1);
            *(b + 158 * OS1_S1 + 11) =
                prefactor_y * *(b + 158 * OS1_S1 + 4) -
                p_over_q * *(b + 212 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 4);
            *(b + 158 * OS1_S1 + 12) =
                prefactor_z * *(b + 158 * OS1_S1 + 4) -
                p_over_q * *(b + 213 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 4);
            *(b + 158 * OS1_S1 + 13) = prefactor_x * *(b + 158 * OS1_S1 + 7) -
                                       p_over_q * *(b + 203 * OS1_S1 + 7);
            *(b + 158 * OS1_S1 + 14) = prefactor_x * *(b + 158 * OS1_S1 + 8) -
                                       p_over_q * *(b + 203 * OS1_S1 + 8);
            *(b + 158 * OS1_S1 + 15) = prefactor_x * *(b + 158 * OS1_S1 + 9) -
                                       p_over_q * *(b + 203 * OS1_S1 + 9);
            *(b + 158 * OS1_S1 + 16) =
                prefactor_y * *(b + 158 * OS1_S1 + 7) -
                p_over_q * *(b + 212 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 2);
            *(b + 158 * OS1_S1 + 17) =
                prefactor_z * *(b + 158 * OS1_S1 + 7) -
                p_over_q * *(b + 213 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 7);
            *(b + 158 * OS1_S1 + 18) =
                prefactor_y * *(b + 158 * OS1_S1 + 9) -
                p_over_q * *(b + 212 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 9);
            *(b + 158 * OS1_S1 + 19) =
                prefactor_z * *(b + 158 * OS1_S1 + 9) -
                p_over_q * *(b + 213 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 3);
            *(b + 159 * OS1_S1 + 10) =
                prefactor_x * *(b + 159 * OS1_S1 + 4) -
                p_over_q * *(b + 204 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 1);
            *(b + 159 * OS1_S1 + 11) =
                prefactor_y * *(b + 159 * OS1_S1 + 4) -
                p_over_q * *(b + 213 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 4);
            *(b + 159 * OS1_S1 + 12) =
                prefactor_z * *(b + 159 * OS1_S1 + 4) -
                p_over_q * *(b + 214 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 4);
            *(b + 159 * OS1_S1 + 13) = prefactor_x * *(b + 159 * OS1_S1 + 7) -
                                       p_over_q * *(b + 204 * OS1_S1 + 7);
            *(b + 159 * OS1_S1 + 14) = prefactor_x * *(b + 159 * OS1_S1 + 8) -
                                       p_over_q * *(b + 204 * OS1_S1 + 8);
            *(b + 159 * OS1_S1 + 15) = prefactor_x * *(b + 159 * OS1_S1 + 9) -
                                       p_over_q * *(b + 204 * OS1_S1 + 9);
            *(b + 159 * OS1_S1 + 16) =
                prefactor_y * *(b + 159 * OS1_S1 + 7) -
                p_over_q * *(b + 213 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 2);
            *(b + 159 * OS1_S1 + 17) =
                prefactor_z * *(b + 159 * OS1_S1 + 7) -
                p_over_q * *(b + 214 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 7);
            *(b + 159 * OS1_S1 + 18) =
                prefactor_y * *(b + 159 * OS1_S1 + 9) -
                p_over_q * *(b + 213 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 9);
            *(b + 159 * OS1_S1 + 19) =
                prefactor_z * *(b + 159 * OS1_S1 + 9) -
                p_over_q * *(b + 214 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 3);
            *(b + 160 * OS1_S1 + 10) =
                prefactor_x * *(b + 160 * OS1_S1 + 4) -
                p_over_q * *(b + 205 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 1);
            *(b + 160 * OS1_S1 + 11) =
                prefactor_y * *(b + 160 * OS1_S1 + 4) -
                p_over_q * *(b + 214 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 4);
            *(b + 160 * OS1_S1 + 12) =
                prefactor_z * *(b + 160 * OS1_S1 + 4) -
                p_over_q * *(b + 215 * OS1_S1 + 4) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 4);
            *(b + 160 * OS1_S1 + 13) = prefactor_x * *(b + 160 * OS1_S1 + 7) -
                                       p_over_q * *(b + 205 * OS1_S1 + 7);
            *(b + 160 * OS1_S1 + 14) = prefactor_x * *(b + 160 * OS1_S1 + 8) -
                                       p_over_q * *(b + 205 * OS1_S1 + 8);
            *(b + 160 * OS1_S1 + 15) = prefactor_x * *(b + 160 * OS1_S1 + 9) -
                                       p_over_q * *(b + 205 * OS1_S1 + 9);
            *(b + 160 * OS1_S1 + 16) =
                prefactor_y * *(b + 160 * OS1_S1 + 7) -
                p_over_q * *(b + 214 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 2);
            *(b + 160 * OS1_S1 + 17) =
                prefactor_z * *(b + 160 * OS1_S1 + 7) -
                p_over_q * *(b + 215 * OS1_S1 + 7) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 7);
            *(b + 160 * OS1_S1 + 18) =
                prefactor_y * *(b + 160 * OS1_S1 + 9) -
                p_over_q * *(b + 214 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 9);
            *(b + 160 * OS1_S1 + 19) =
                prefactor_z * *(b + 160 * OS1_S1 + 9) -
                p_over_q * *(b + 215 * OS1_S1 + 9) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 3);
            *(b + 161 * OS1_S1 + 10) =
                prefactor_x * *(b + 161 * OS1_S1 + 4) -
                p_over_q * *(b + 206 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 1);
            *(b + 161 * OS1_S1 + 11) =
                prefactor_y * *(b + 161 * OS1_S1 + 4) -
                p_over_q * *(b + 215 * OS1_S1 + 4) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 4);
            *(b + 161 * OS1_S1 + 12) =
                prefactor_z * *(b + 161 * OS1_S1 + 4) -
                p_over_q * *(b + 216 * OS1_S1 + 4) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 4);
            *(b + 161 * OS1_S1 + 13) = prefactor_x * *(b + 161 * OS1_S1 + 7) -
                                       p_over_q * *(b + 206 * OS1_S1 + 7);
            *(b + 161 * OS1_S1 + 14) = prefactor_x * *(b + 161 * OS1_S1 + 8) -
                                       p_over_q * *(b + 206 * OS1_S1 + 8);
            *(b + 161 * OS1_S1 + 15) = prefactor_x * *(b + 161 * OS1_S1 + 9) -
                                       p_over_q * *(b + 206 * OS1_S1 + 9);
            *(b + 161 * OS1_S1 + 16) =
                prefactor_y * *(b + 161 * OS1_S1 + 7) -
                p_over_q * *(b + 215 * OS1_S1 + 7) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 2);
            *(b + 161 * OS1_S1 + 17) =
                prefactor_z * *(b + 161 * OS1_S1 + 7) -
                p_over_q * *(b + 216 * OS1_S1 + 7) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 7);
            *(b + 161 * OS1_S1 + 18) =
                prefactor_y * *(b + 161 * OS1_S1 + 9) -
                p_over_q * *(b + 215 * OS1_S1 + 9) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 9);
            *(b + 161 * OS1_S1 + 19) =
                prefactor_z * *(b + 161 * OS1_S1 + 9) -
                p_over_q * *(b + 216 * OS1_S1 + 9) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 3);
            *(b + 162 * OS1_S1 + 10) =
                prefactor_x * *(b + 162 * OS1_S1 + 4) -
                p_over_q * *(b + 207 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 1);
            *(b + 162 * OS1_S1 + 11) =
                prefactor_y * *(b + 162 * OS1_S1 + 4) -
                p_over_q * *(b + 216 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 4);
            *(b + 162 * OS1_S1 + 12) =
                prefactor_z * *(b + 162 * OS1_S1 + 4) -
                p_over_q * *(b + 217 * OS1_S1 + 4) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 4);
            *(b + 162 * OS1_S1 + 13) = prefactor_x * *(b + 162 * OS1_S1 + 7) -
                                       p_over_q * *(b + 207 * OS1_S1 + 7);
            *(b + 162 * OS1_S1 + 14) = prefactor_x * *(b + 162 * OS1_S1 + 8) -
                                       p_over_q * *(b + 207 * OS1_S1 + 8);
            *(b + 162 * OS1_S1 + 15) = prefactor_x * *(b + 162 * OS1_S1 + 9) -
                                       p_over_q * *(b + 207 * OS1_S1 + 9);
            *(b + 162 * OS1_S1 + 16) =
                prefactor_y * *(b + 162 * OS1_S1 + 7) -
                p_over_q * *(b + 216 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 2);
            *(b + 162 * OS1_S1 + 17) =
                prefactor_z * *(b + 162 * OS1_S1 + 7) -
                p_over_q * *(b + 217 * OS1_S1 + 7) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 7);
            *(b + 162 * OS1_S1 + 18) =
                prefactor_y * *(b + 162 * OS1_S1 + 9) -
                p_over_q * *(b + 216 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 9);
            *(b + 162 * OS1_S1 + 19) =
                prefactor_z * *(b + 162 * OS1_S1 + 9) -
                p_over_q * *(b + 217 * OS1_S1 + 9) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 3);
            *(b + 163 * OS1_S1 + 10) =
                prefactor_x * *(b + 163 * OS1_S1 + 4) -
                p_over_q * *(b + 208 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 1);
            *(b + 163 * OS1_S1 + 11) = prefactor_y * *(b + 163 * OS1_S1 + 4) -
                                       p_over_q * *(b + 217 * OS1_S1 + 4) +
                                       one_over_two_q * *(b + 119 * OS1_S1 + 4);
            *(b + 163 * OS1_S1 + 12) =
                prefactor_z * *(b + 163 * OS1_S1 + 4) -
                p_over_q * *(b + 218 * OS1_S1 + 4) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 4);
            *(b + 163 * OS1_S1 + 13) = prefactor_x * *(b + 163 * OS1_S1 + 7) -
                                       p_over_q * *(b + 208 * OS1_S1 + 7);
            *(b + 163 * OS1_S1 + 14) = prefactor_x * *(b + 163 * OS1_S1 + 8) -
                                       p_over_q * *(b + 208 * OS1_S1 + 8);
            *(b + 163 * OS1_S1 + 15) = prefactor_x * *(b + 163 * OS1_S1 + 9) -
                                       p_over_q * *(b + 208 * OS1_S1 + 9);
            *(b + 163 * OS1_S1 + 16) =
                prefactor_y * *(b + 163 * OS1_S1 + 7) -
                p_over_q * *(b + 217 * OS1_S1 + 7) +
                one_over_two_q * *(b + 119 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 2);
            *(b + 163 * OS1_S1 + 17) =
                prefactor_z * *(b + 163 * OS1_S1 + 7) -
                p_over_q * *(b + 218 * OS1_S1 + 7) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 7);
            *(b + 163 * OS1_S1 + 18) = prefactor_y * *(b + 163 * OS1_S1 + 9) -
                                       p_over_q * *(b + 217 * OS1_S1 + 9) +
                                       one_over_two_q * *(b + 119 * OS1_S1 + 9);
            *(b + 163 * OS1_S1 + 19) =
                prefactor_z * *(b + 163 * OS1_S1 + 9) -
                p_over_q * *(b + 218 * OS1_S1 + 9) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 3);
            *(b + 164 * OS1_S1 + 10) =
                prefactor_x * *(b + 164 * OS1_S1 + 4) -
                p_over_q * *(b + 209 * OS1_S1 + 4) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 1);
            *(b + 164 * OS1_S1 + 11) = prefactor_y * *(b + 164 * OS1_S1 + 4) -
                                       p_over_q * *(b + 218 * OS1_S1 + 4);
            *(b + 164 * OS1_S1 + 12) =
                prefactor_z * *(b + 164 * OS1_S1 + 4) -
                p_over_q * *(b + 219 * OS1_S1 + 4) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 4);
            *(b + 164 * OS1_S1 + 13) = prefactor_x * *(b + 164 * OS1_S1 + 7) -
                                       p_over_q * *(b + 209 * OS1_S1 + 7);
            *(b + 164 * OS1_S1 + 14) = prefactor_y * *(b + 164 * OS1_S1 + 6) -
                                       p_over_q * *(b + 218 * OS1_S1 + 6);
            *(b + 164 * OS1_S1 + 15) = prefactor_x * *(b + 164 * OS1_S1 + 9) -
                                       p_over_q * *(b + 209 * OS1_S1 + 9);
            *(b + 164 * OS1_S1 + 16) =
                prefactor_y * *(b + 164 * OS1_S1 + 7) -
                p_over_q * *(b + 218 * OS1_S1 + 7) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 2);
            *(b + 164 * OS1_S1 + 17) =
                prefactor_z * *(b + 164 * OS1_S1 + 7) -
                p_over_q * *(b + 219 * OS1_S1 + 7) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 7);
            *(b + 164 * OS1_S1 + 18) = prefactor_y * *(b + 164 * OS1_S1 + 9) -
                                       p_over_q * *(b + 218 * OS1_S1 + 9);
            *(b + 164 * OS1_S1 + 19) =
                prefactor_z * *(b + 164 * OS1_S1 + 9) -
                p_over_q * *(b + 219 * OS1_S1 + 9) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 9) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 3);
            return;
        }

        void transfer_3(const unsigned first_min,
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
                transfer_0_3(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 0)
                    break;
            case 1:
                transfer_1_3(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 1)
                    break;
            case 2:
                transfer_2_3(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 2)
                    break;
            case 3:
                transfer_3_3(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 3)
                    break;
            case 4:
                transfer_4_3(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 4)
                    break;
            case 5:
                transfer_5_3(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 5)
                    break;
            case 6:
                transfer_6_3(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 6)
                    break;
            case 7:
                transfer_7_3(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 7)
                    break;
            case 8:
                transfer_8_3(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 8)
                    break;
            case 9:
                transfer_9_3(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 9)
                    break;
            case 10:
                transfer_10_3(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              b);
                if (first_max == 10)
                    break;
            case 11:
                transfer_11_3(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              b);
                if (first_max == 11)
                    break;
            case 12:
                transfer_12_3(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              b);
                if (first_max == 12)
                    break;
            case 13:
                transfer_13_3(prefactor_x,
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
