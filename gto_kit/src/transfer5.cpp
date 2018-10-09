/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_0_5(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 0 * OS1_S1 + 35) =
                prefactor_x * *(b + 0 * OS1_S1 + 20) -
                p_over_q * *(b + 1 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 0 * OS1_S1 + 10);
            *(b + 0 * OS1_S1 + 36) = prefactor_y * *(b + 0 * OS1_S1 + 20) -
                                     p_over_q * *(b + 2 * OS1_S1 + 20);
            *(b + 0 * OS1_S1 + 37) = prefactor_z * *(b + 0 * OS1_S1 + 20) -
                                     p_over_q * *(b + 3 * OS1_S1 + 20);
            *(b + 0 * OS1_S1 + 38) = prefactor_y * *(b + 0 * OS1_S1 + 21) -
                                     p_over_q * *(b + 2 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 10);
            *(b + 0 * OS1_S1 + 39) = prefactor_z * *(b + 0 * OS1_S1 + 21) -
                                     p_over_q * *(b + 3 * OS1_S1 + 21);
            *(b + 0 * OS1_S1 + 40) = prefactor_z * *(b + 0 * OS1_S1 + 22) -
                                     p_over_q * *(b + 3 * OS1_S1 + 22) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 10);
            *(b + 0 * OS1_S1 + 41) = prefactor_x * *(b + 0 * OS1_S1 + 26) -
                                     p_over_q * *(b + 1 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 16);
            *(b + 0 * OS1_S1 + 42) = prefactor_z * *(b + 0 * OS1_S1 + 23) -
                                     p_over_q * *(b + 3 * OS1_S1 + 23);
            *(b + 0 * OS1_S1 + 43) = prefactor_y * *(b + 0 * OS1_S1 + 25) -
                                     p_over_q * *(b + 2 * OS1_S1 + 25);
            *(b + 0 * OS1_S1 + 44) = prefactor_x * *(b + 0 * OS1_S1 + 29) -
                                     p_over_q * *(b + 1 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 19);
            *(b + 0 * OS1_S1 + 45) = prefactor_x * *(b + 0 * OS1_S1 + 30) -
                                     p_over_q * *(b + 1 * OS1_S1 + 30);
            *(b + 0 * OS1_S1 + 46) = prefactor_z * *(b + 0 * OS1_S1 + 26) -
                                     p_over_q * *(b + 3 * OS1_S1 + 26);
            *(b + 0 * OS1_S1 + 47) = prefactor_x * *(b + 0 * OS1_S1 + 32) -
                                     p_over_q * *(b + 1 * OS1_S1 + 32);
            *(b + 0 * OS1_S1 + 48) = prefactor_y * *(b + 0 * OS1_S1 + 29) -
                                     p_over_q * *(b + 2 * OS1_S1 + 29);
            *(b + 0 * OS1_S1 + 49) = prefactor_x * *(b + 0 * OS1_S1 + 34) -
                                     p_over_q * *(b + 1 * OS1_S1 + 34);
            *(b + 0 * OS1_S1 + 50) =
                prefactor_y * *(b + 0 * OS1_S1 + 30) -
                p_over_q * *(b + 2 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 0 * OS1_S1 + 16);
            *(b + 0 * OS1_S1 + 51) = prefactor_z * *(b + 0 * OS1_S1 + 30) -
                                     p_over_q * *(b + 3 * OS1_S1 + 30);
            *(b + 0 * OS1_S1 + 52) = prefactor_z * *(b + 0 * OS1_S1 + 31) -
                                     p_over_q * *(b + 3 * OS1_S1 + 31) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 16);
            *(b + 0 * OS1_S1 + 53) = prefactor_y * *(b + 0 * OS1_S1 + 33) -
                                     p_over_q * *(b + 2 * OS1_S1 + 33) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 19);
            *(b + 0 * OS1_S1 + 54) = prefactor_y * *(b + 0 * OS1_S1 + 34) -
                                     p_over_q * *(b + 2 * OS1_S1 + 34);
            *(b + 0 * OS1_S1 + 55) =
                prefactor_z * *(b + 0 * OS1_S1 + 34) -
                p_over_q * *(b + 3 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 0 * OS1_S1 + 19);
            return;
        }
        void transfer_1_5(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 1 * OS1_S1 + 35) =
                prefactor_x * *(b + 1 * OS1_S1 + 20) -
                p_over_q * *(b + 4 * OS1_S1 + 20) +
                one_over_two_q * *(b + 0 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 1 * OS1_S1 + 10);
            *(b + 1 * OS1_S1 + 36) = prefactor_y * *(b + 1 * OS1_S1 + 20) -
                                     p_over_q * *(b + 5 * OS1_S1 + 20);
            *(b + 1 * OS1_S1 + 37) = prefactor_z * *(b + 1 * OS1_S1 + 20) -
                                     p_over_q * *(b + 6 * OS1_S1 + 20);
            *(b + 1 * OS1_S1 + 38) = prefactor_y * *(b + 1 * OS1_S1 + 21) -
                                     p_over_q * *(b + 5 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 10);
            *(b + 1 * OS1_S1 + 39) = prefactor_z * *(b + 1 * OS1_S1 + 21) -
                                     p_over_q * *(b + 6 * OS1_S1 + 21);
            *(b + 1 * OS1_S1 + 40) = prefactor_z * *(b + 1 * OS1_S1 + 22) -
                                     p_over_q * *(b + 6 * OS1_S1 + 22) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 10);
            *(b + 1 * OS1_S1 + 41) = prefactor_x * *(b + 1 * OS1_S1 + 26) -
                                     p_over_q * *(b + 4 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 16);
            *(b + 1 * OS1_S1 + 42) = prefactor_z * *(b + 1 * OS1_S1 + 23) -
                                     p_over_q * *(b + 6 * OS1_S1 + 23);
            *(b + 1 * OS1_S1 + 43) = prefactor_y * *(b + 1 * OS1_S1 + 25) -
                                     p_over_q * *(b + 5 * OS1_S1 + 25);
            *(b + 1 * OS1_S1 + 44) = prefactor_x * *(b + 1 * OS1_S1 + 29) -
                                     p_over_q * *(b + 4 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 19);
            *(b + 1 * OS1_S1 + 45) = prefactor_x * *(b + 1 * OS1_S1 + 30) -
                                     p_over_q * *(b + 4 * OS1_S1 + 30) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 30);
            *(b + 1 * OS1_S1 + 46) = prefactor_z * *(b + 1 * OS1_S1 + 26) -
                                     p_over_q * *(b + 6 * OS1_S1 + 26);
            *(b + 1 * OS1_S1 + 47) = prefactor_x * *(b + 1 * OS1_S1 + 32) -
                                     p_over_q * *(b + 4 * OS1_S1 + 32) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 32);
            *(b + 1 * OS1_S1 + 48) = prefactor_y * *(b + 1 * OS1_S1 + 29) -
                                     p_over_q * *(b + 5 * OS1_S1 + 29);
            *(b + 1 * OS1_S1 + 49) = prefactor_x * *(b + 1 * OS1_S1 + 34) -
                                     p_over_q * *(b + 4 * OS1_S1 + 34) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 34);
            *(b + 1 * OS1_S1 + 50) =
                prefactor_y * *(b + 1 * OS1_S1 + 30) -
                p_over_q * *(b + 5 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 1 * OS1_S1 + 16);
            *(b + 1 * OS1_S1 + 51) = prefactor_z * *(b + 1 * OS1_S1 + 30) -
                                     p_over_q * *(b + 6 * OS1_S1 + 30);
            *(b + 1 * OS1_S1 + 52) = prefactor_z * *(b + 1 * OS1_S1 + 31) -
                                     p_over_q * *(b + 6 * OS1_S1 + 31) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 16);
            *(b + 1 * OS1_S1 + 53) = prefactor_y * *(b + 1 * OS1_S1 + 33) -
                                     p_over_q * *(b + 5 * OS1_S1 + 33) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 19);
            *(b + 1 * OS1_S1 + 54) = prefactor_y * *(b + 1 * OS1_S1 + 34) -
                                     p_over_q * *(b + 5 * OS1_S1 + 34);
            *(b + 1 * OS1_S1 + 55) =
                prefactor_z * *(b + 1 * OS1_S1 + 34) -
                p_over_q * *(b + 6 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 1 * OS1_S1 + 19);
            *(b + 2 * OS1_S1 + 35) =
                prefactor_x * *(b + 2 * OS1_S1 + 20) -
                p_over_q * *(b + 5 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 2 * OS1_S1 + 10);
            *(b + 2 * OS1_S1 + 36) = prefactor_y * *(b + 2 * OS1_S1 + 20) -
                                     p_over_q * *(b + 7 * OS1_S1 + 20) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 20);
            *(b + 2 * OS1_S1 + 37) = prefactor_z * *(b + 2 * OS1_S1 + 20) -
                                     p_over_q * *(b + 8 * OS1_S1 + 20);
            *(b + 2 * OS1_S1 + 38) = prefactor_y * *(b + 2 * OS1_S1 + 21) -
                                     p_over_q * *(b + 7 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 10);
            *(b + 2 * OS1_S1 + 39) = prefactor_z * *(b + 2 * OS1_S1 + 21) -
                                     p_over_q * *(b + 8 * OS1_S1 + 21);
            *(b + 2 * OS1_S1 + 40) = prefactor_z * *(b + 2 * OS1_S1 + 22) -
                                     p_over_q * *(b + 8 * OS1_S1 + 22) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 10);
            *(b + 2 * OS1_S1 + 41) = prefactor_x * *(b + 2 * OS1_S1 + 26) -
                                     p_over_q * *(b + 5 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 16);
            *(b + 2 * OS1_S1 + 42) = prefactor_z * *(b + 2 * OS1_S1 + 23) -
                                     p_over_q * *(b + 8 * OS1_S1 + 23);
            *(b + 2 * OS1_S1 + 43) = prefactor_y * *(b + 2 * OS1_S1 + 25) -
                                     p_over_q * *(b + 7 * OS1_S1 + 25) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 25);
            *(b + 2 * OS1_S1 + 44) = prefactor_x * *(b + 2 * OS1_S1 + 29) -
                                     p_over_q * *(b + 5 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 19);
            *(b + 2 * OS1_S1 + 45) = prefactor_x * *(b + 2 * OS1_S1 + 30) -
                                     p_over_q * *(b + 5 * OS1_S1 + 30);
            *(b + 2 * OS1_S1 + 46) = prefactor_z * *(b + 2 * OS1_S1 + 26) -
                                     p_over_q * *(b + 8 * OS1_S1 + 26);
            *(b + 2 * OS1_S1 + 47) = prefactor_x * *(b + 2 * OS1_S1 + 32) -
                                     p_over_q * *(b + 5 * OS1_S1 + 32);
            *(b + 2 * OS1_S1 + 48) = prefactor_x * *(b + 2 * OS1_S1 + 33) -
                                     p_over_q * *(b + 5 * OS1_S1 + 33);
            *(b + 2 * OS1_S1 + 49) = prefactor_x * *(b + 2 * OS1_S1 + 34) -
                                     p_over_q * *(b + 5 * OS1_S1 + 34);
            *(b + 2 * OS1_S1 + 50) =
                prefactor_y * *(b + 2 * OS1_S1 + 30) -
                p_over_q * *(b + 7 * OS1_S1 + 30) +
                one_over_two_q * *(b + 0 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 2 * OS1_S1 + 16);
            *(b + 2 * OS1_S1 + 51) = prefactor_z * *(b + 2 * OS1_S1 + 30) -
                                     p_over_q * *(b + 8 * OS1_S1 + 30);
            *(b + 2 * OS1_S1 + 52) = prefactor_z * *(b + 2 * OS1_S1 + 31) -
                                     p_over_q * *(b + 8 * OS1_S1 + 31) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 16);
            *(b + 2 * OS1_S1 + 53) = prefactor_y * *(b + 2 * OS1_S1 + 33) -
                                     p_over_q * *(b + 7 * OS1_S1 + 33) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 33) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 19);
            *(b + 2 * OS1_S1 + 54) = prefactor_y * *(b + 2 * OS1_S1 + 34) -
                                     p_over_q * *(b + 7 * OS1_S1 + 34) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 34);
            *(b + 2 * OS1_S1 + 55) =
                prefactor_z * *(b + 2 * OS1_S1 + 34) -
                p_over_q * *(b + 8 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 2 * OS1_S1 + 19);
            *(b + 3 * OS1_S1 + 35) =
                prefactor_x * *(b + 3 * OS1_S1 + 20) -
                p_over_q * *(b + 6 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 3 * OS1_S1 + 10);
            *(b + 3 * OS1_S1 + 36) = prefactor_y * *(b + 3 * OS1_S1 + 20) -
                                     p_over_q * *(b + 8 * OS1_S1 + 20);
            *(b + 3 * OS1_S1 + 37) = prefactor_z * *(b + 3 * OS1_S1 + 20) -
                                     p_over_q * *(b + 9 * OS1_S1 + 20) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 20);
            *(b + 3 * OS1_S1 + 38) = prefactor_y * *(b + 3 * OS1_S1 + 21) -
                                     p_over_q * *(b + 8 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 10);
            *(b + 3 * OS1_S1 + 39) = prefactor_y * *(b + 3 * OS1_S1 + 22) -
                                     p_over_q * *(b + 8 * OS1_S1 + 22);
            *(b + 3 * OS1_S1 + 40) = prefactor_z * *(b + 3 * OS1_S1 + 22) -
                                     p_over_q * *(b + 9 * OS1_S1 + 22) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 22) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 10);
            *(b + 3 * OS1_S1 + 41) = prefactor_x * *(b + 3 * OS1_S1 + 26) -
                                     p_over_q * *(b + 6 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 16);
            *(b + 3 * OS1_S1 + 42) = prefactor_z * *(b + 3 * OS1_S1 + 23) -
                                     p_over_q * *(b + 9 * OS1_S1 + 23) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 23);
            *(b + 3 * OS1_S1 + 43) = prefactor_y * *(b + 3 * OS1_S1 + 25) -
                                     p_over_q * *(b + 8 * OS1_S1 + 25);
            *(b + 3 * OS1_S1 + 44) = prefactor_x * *(b + 3 * OS1_S1 + 29) -
                                     p_over_q * *(b + 6 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 19);
            *(b + 3 * OS1_S1 + 45) = prefactor_x * *(b + 3 * OS1_S1 + 30) -
                                     p_over_q * *(b + 6 * OS1_S1 + 30);
            *(b + 3 * OS1_S1 + 46) = prefactor_x * *(b + 3 * OS1_S1 + 31) -
                                     p_over_q * *(b + 6 * OS1_S1 + 31);
            *(b + 3 * OS1_S1 + 47) = prefactor_x * *(b + 3 * OS1_S1 + 32) -
                                     p_over_q * *(b + 6 * OS1_S1 + 32);
            *(b + 3 * OS1_S1 + 48) = prefactor_y * *(b + 3 * OS1_S1 + 29) -
                                     p_over_q * *(b + 8 * OS1_S1 + 29);
            *(b + 3 * OS1_S1 + 49) = prefactor_x * *(b + 3 * OS1_S1 + 34) -
                                     p_over_q * *(b + 6 * OS1_S1 + 34);
            *(b + 3 * OS1_S1 + 50) =
                prefactor_y * *(b + 3 * OS1_S1 + 30) -
                p_over_q * *(b + 8 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 3 * OS1_S1 + 16);
            *(b + 3 * OS1_S1 + 51) = prefactor_z * *(b + 3 * OS1_S1 + 30) -
                                     p_over_q * *(b + 9 * OS1_S1 + 30) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 30);
            *(b + 3 * OS1_S1 + 52) = prefactor_z * *(b + 3 * OS1_S1 + 31) -
                                     p_over_q * *(b + 9 * OS1_S1 + 31) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 31) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 16);
            *(b + 3 * OS1_S1 + 53) = prefactor_y * *(b + 3 * OS1_S1 + 33) -
                                     p_over_q * *(b + 8 * OS1_S1 + 33) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 19);
            *(b + 3 * OS1_S1 + 54) = prefactor_y * *(b + 3 * OS1_S1 + 34) -
                                     p_over_q * *(b + 8 * OS1_S1 + 34);
            *(b + 3 * OS1_S1 + 55) =
                prefactor_z * *(b + 3 * OS1_S1 + 34) -
                p_over_q * *(b + 9 * OS1_S1 + 34) +
                one_over_two_q * *(b + 0 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 3 * OS1_S1 + 19);
            return;
        }
        void transfer_2_5(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 4 * OS1_S1 + 35) =
                prefactor_x * *(b + 4 * OS1_S1 + 20) -
                p_over_q * *(b + 10 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 4 * OS1_S1 + 10);
            *(b + 4 * OS1_S1 + 36) = prefactor_y * *(b + 4 * OS1_S1 + 20) -
                                     p_over_q * *(b + 11 * OS1_S1 + 20);
            *(b + 4 * OS1_S1 + 37) = prefactor_z * *(b + 4 * OS1_S1 + 20) -
                                     p_over_q * *(b + 12 * OS1_S1 + 20);
            *(b + 4 * OS1_S1 + 38) = prefactor_y * *(b + 4 * OS1_S1 + 21) -
                                     p_over_q * *(b + 11 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 10);
            *(b + 4 * OS1_S1 + 39) = prefactor_z * *(b + 4 * OS1_S1 + 21) -
                                     p_over_q * *(b + 12 * OS1_S1 + 21);
            *(b + 4 * OS1_S1 + 40) = prefactor_z * *(b + 4 * OS1_S1 + 22) -
                                     p_over_q * *(b + 12 * OS1_S1 + 22) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 10);
            *(b + 4 * OS1_S1 + 41) =
                prefactor_x * *(b + 4 * OS1_S1 + 26) -
                p_over_q * *(b + 10 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 26) +
                one_over_two_q * *(b + 4 * OS1_S1 + 16);
            *(b + 4 * OS1_S1 + 42) = prefactor_z * *(b + 4 * OS1_S1 + 23) -
                                     p_over_q * *(b + 12 * OS1_S1 + 23);
            *(b + 4 * OS1_S1 + 43) = prefactor_y * *(b + 4 * OS1_S1 + 25) -
                                     p_over_q * *(b + 11 * OS1_S1 + 25);
            *(b + 4 * OS1_S1 + 44) =
                prefactor_x * *(b + 4 * OS1_S1 + 29) -
                p_over_q * *(b + 10 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 29) +
                one_over_two_q * *(b + 4 * OS1_S1 + 19);
            *(b + 4 * OS1_S1 + 45) =
                prefactor_x * *(b + 4 * OS1_S1 + 30) -
                p_over_q * *(b + 10 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 30);
            *(b + 4 * OS1_S1 + 46) = prefactor_z * *(b + 4 * OS1_S1 + 26) -
                                     p_over_q * *(b + 12 * OS1_S1 + 26);
            *(b + 4 * OS1_S1 + 47) =
                prefactor_x * *(b + 4 * OS1_S1 + 32) -
                p_over_q * *(b + 10 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 32);
            *(b + 4 * OS1_S1 + 48) = prefactor_y * *(b + 4 * OS1_S1 + 29) -
                                     p_over_q * *(b + 11 * OS1_S1 + 29);
            *(b + 4 * OS1_S1 + 49) =
                prefactor_x * *(b + 4 * OS1_S1 + 34) -
                p_over_q * *(b + 10 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 34);
            *(b + 4 * OS1_S1 + 50) =
                prefactor_y * *(b + 4 * OS1_S1 + 30) -
                p_over_q * *(b + 11 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 4 * OS1_S1 + 16);
            *(b + 4 * OS1_S1 + 51) = prefactor_z * *(b + 4 * OS1_S1 + 30) -
                                     p_over_q * *(b + 12 * OS1_S1 + 30);
            *(b + 4 * OS1_S1 + 52) = prefactor_z * *(b + 4 * OS1_S1 + 31) -
                                     p_over_q * *(b + 12 * OS1_S1 + 31) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 16);
            *(b + 4 * OS1_S1 + 53) = prefactor_y * *(b + 4 * OS1_S1 + 33) -
                                     p_over_q * *(b + 11 * OS1_S1 + 33) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 19);
            *(b + 4 * OS1_S1 + 54) = prefactor_y * *(b + 4 * OS1_S1 + 34) -
                                     p_over_q * *(b + 11 * OS1_S1 + 34);
            *(b + 4 * OS1_S1 + 55) =
                prefactor_z * *(b + 4 * OS1_S1 + 34) -
                p_over_q * *(b + 12 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 4 * OS1_S1 + 19);
            *(b + 5 * OS1_S1 + 35) =
                prefactor_x * *(b + 5 * OS1_S1 + 20) -
                p_over_q * *(b + 11 * OS1_S1 + 20) +
                one_over_two_q * *(b + 2 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 5 * OS1_S1 + 10);
            *(b + 5 * OS1_S1 + 36) = prefactor_y * *(b + 5 * OS1_S1 + 20) -
                                     p_over_q * *(b + 13 * OS1_S1 + 20) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 20);
            *(b + 5 * OS1_S1 + 37) = prefactor_z * *(b + 5 * OS1_S1 + 20) -
                                     p_over_q * *(b + 14 * OS1_S1 + 20);
            *(b + 5 * OS1_S1 + 38) = prefactor_y * *(b + 5 * OS1_S1 + 21) -
                                     p_over_q * *(b + 13 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 10);
            *(b + 5 * OS1_S1 + 39) = prefactor_z * *(b + 5 * OS1_S1 + 21) -
                                     p_over_q * *(b + 14 * OS1_S1 + 21);
            *(b + 5 * OS1_S1 + 40) = prefactor_z * *(b + 5 * OS1_S1 + 22) -
                                     p_over_q * *(b + 14 * OS1_S1 + 22) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 10);
            *(b + 5 * OS1_S1 + 41) = prefactor_x * *(b + 5 * OS1_S1 + 26) -
                                     p_over_q * *(b + 11 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 16);
            *(b + 5 * OS1_S1 + 42) = prefactor_z * *(b + 5 * OS1_S1 + 23) -
                                     p_over_q * *(b + 14 * OS1_S1 + 23);
            *(b + 5 * OS1_S1 + 43) = prefactor_y * *(b + 5 * OS1_S1 + 25) -
                                     p_over_q * *(b + 13 * OS1_S1 + 25) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 25);
            *(b + 5 * OS1_S1 + 44) = prefactor_x * *(b + 5 * OS1_S1 + 29) -
                                     p_over_q * *(b + 11 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 19);
            *(b + 5 * OS1_S1 + 45) = prefactor_x * *(b + 5 * OS1_S1 + 30) -
                                     p_over_q * *(b + 11 * OS1_S1 + 30) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 30);
            *(b + 5 * OS1_S1 + 46) = prefactor_z * *(b + 5 * OS1_S1 + 26) -
                                     p_over_q * *(b + 14 * OS1_S1 + 26);
            *(b + 5 * OS1_S1 + 47) = prefactor_x * *(b + 5 * OS1_S1 + 32) -
                                     p_over_q * *(b + 11 * OS1_S1 + 32) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 32);
            *(b + 5 * OS1_S1 + 48) = prefactor_y * *(b + 5 * OS1_S1 + 29) -
                                     p_over_q * *(b + 13 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 29);
            *(b + 5 * OS1_S1 + 49) = prefactor_x * *(b + 5 * OS1_S1 + 34) -
                                     p_over_q * *(b + 11 * OS1_S1 + 34) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 34);
            *(b + 5 * OS1_S1 + 50) =
                prefactor_y * *(b + 5 * OS1_S1 + 30) -
                p_over_q * *(b + 13 * OS1_S1 + 30) +
                one_over_two_q * *(b + 1 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 5 * OS1_S1 + 16);
            *(b + 5 * OS1_S1 + 51) = prefactor_z * *(b + 5 * OS1_S1 + 30) -
                                     p_over_q * *(b + 14 * OS1_S1 + 30);
            *(b + 5 * OS1_S1 + 52) = prefactor_z * *(b + 5 * OS1_S1 + 31) -
                                     p_over_q * *(b + 14 * OS1_S1 + 31) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 16);
            *(b + 5 * OS1_S1 + 53) = prefactor_y * *(b + 5 * OS1_S1 + 33) -
                                     p_over_q * *(b + 13 * OS1_S1 + 33) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 33) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 19);
            *(b + 5 * OS1_S1 + 54) = prefactor_y * *(b + 5 * OS1_S1 + 34) -
                                     p_over_q * *(b + 13 * OS1_S1 + 34) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 34);
            *(b + 5 * OS1_S1 + 55) =
                prefactor_z * *(b + 5 * OS1_S1 + 34) -
                p_over_q * *(b + 14 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 5 * OS1_S1 + 19);
            *(b + 6 * OS1_S1 + 35) =
                prefactor_x * *(b + 6 * OS1_S1 + 20) -
                p_over_q * *(b + 12 * OS1_S1 + 20) +
                one_over_two_q * *(b + 3 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 6 * OS1_S1 + 10);
            *(b + 6 * OS1_S1 + 36) = prefactor_y * *(b + 6 * OS1_S1 + 20) -
                                     p_over_q * *(b + 14 * OS1_S1 + 20);
            *(b + 6 * OS1_S1 + 37) = prefactor_z * *(b + 6 * OS1_S1 + 20) -
                                     p_over_q * *(b + 15 * OS1_S1 + 20) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 20);
            *(b + 6 * OS1_S1 + 38) = prefactor_y * *(b + 6 * OS1_S1 + 21) -
                                     p_over_q * *(b + 14 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 10);
            *(b + 6 * OS1_S1 + 39) = prefactor_y * *(b + 6 * OS1_S1 + 22) -
                                     p_over_q * *(b + 14 * OS1_S1 + 22);
            *(b + 6 * OS1_S1 + 40) = prefactor_z * *(b + 6 * OS1_S1 + 22) -
                                     p_over_q * *(b + 15 * OS1_S1 + 22) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 22) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 10);
            *(b + 6 * OS1_S1 + 41) = prefactor_x * *(b + 6 * OS1_S1 + 26) -
                                     p_over_q * *(b + 12 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 16);
            *(b + 6 * OS1_S1 + 42) = prefactor_z * *(b + 6 * OS1_S1 + 23) -
                                     p_over_q * *(b + 15 * OS1_S1 + 23) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 23);
            *(b + 6 * OS1_S1 + 43) = prefactor_y * *(b + 6 * OS1_S1 + 25) -
                                     p_over_q * *(b + 14 * OS1_S1 + 25);
            *(b + 6 * OS1_S1 + 44) = prefactor_x * *(b + 6 * OS1_S1 + 29) -
                                     p_over_q * *(b + 12 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 19);
            *(b + 6 * OS1_S1 + 45) = prefactor_x * *(b + 6 * OS1_S1 + 30) -
                                     p_over_q * *(b + 12 * OS1_S1 + 30) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 30);
            *(b + 6 * OS1_S1 + 46) = prefactor_z * *(b + 6 * OS1_S1 + 26) -
                                     p_over_q * *(b + 15 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 26);
            *(b + 6 * OS1_S1 + 47) = prefactor_x * *(b + 6 * OS1_S1 + 32) -
                                     p_over_q * *(b + 12 * OS1_S1 + 32) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 32);
            *(b + 6 * OS1_S1 + 48) = prefactor_y * *(b + 6 * OS1_S1 + 29) -
                                     p_over_q * *(b + 14 * OS1_S1 + 29);
            *(b + 6 * OS1_S1 + 49) = prefactor_x * *(b + 6 * OS1_S1 + 34) -
                                     p_over_q * *(b + 12 * OS1_S1 + 34) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 34);
            *(b + 6 * OS1_S1 + 50) =
                prefactor_y * *(b + 6 * OS1_S1 + 30) -
                p_over_q * *(b + 14 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 6 * OS1_S1 + 16);
            *(b + 6 * OS1_S1 + 51) = prefactor_z * *(b + 6 * OS1_S1 + 30) -
                                     p_over_q * *(b + 15 * OS1_S1 + 30) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 30);
            *(b + 6 * OS1_S1 + 52) = prefactor_z * *(b + 6 * OS1_S1 + 31) -
                                     p_over_q * *(b + 15 * OS1_S1 + 31) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 31) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 16);
            *(b + 6 * OS1_S1 + 53) = prefactor_y * *(b + 6 * OS1_S1 + 33) -
                                     p_over_q * *(b + 14 * OS1_S1 + 33) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 19);
            *(b + 6 * OS1_S1 + 54) = prefactor_y * *(b + 6 * OS1_S1 + 34) -
                                     p_over_q * *(b + 14 * OS1_S1 + 34);
            *(b + 6 * OS1_S1 + 55) =
                prefactor_z * *(b + 6 * OS1_S1 + 34) -
                p_over_q * *(b + 15 * OS1_S1 + 34) +
                one_over_two_q * *(b + 1 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 6 * OS1_S1 + 19);
            *(b + 7 * OS1_S1 + 35) =
                prefactor_x * *(b + 7 * OS1_S1 + 20) -
                p_over_q * *(b + 13 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 7 * OS1_S1 + 10);
            *(b + 7 * OS1_S1 + 36) =
                prefactor_y * *(b + 7 * OS1_S1 + 20) -
                p_over_q * *(b + 16 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 20);
            *(b + 7 * OS1_S1 + 37) = prefactor_z * *(b + 7 * OS1_S1 + 20) -
                                     p_over_q * *(b + 17 * OS1_S1 + 20);
            *(b + 7 * OS1_S1 + 38) =
                prefactor_y * *(b + 7 * OS1_S1 + 21) -
                p_over_q * *(b + 16 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 21) +
                one_over_two_q * *(b + 7 * OS1_S1 + 10);
            *(b + 7 * OS1_S1 + 39) = prefactor_z * *(b + 7 * OS1_S1 + 21) -
                                     p_over_q * *(b + 17 * OS1_S1 + 21);
            *(b + 7 * OS1_S1 + 40) = prefactor_z * *(b + 7 * OS1_S1 + 22) -
                                     p_over_q * *(b + 17 * OS1_S1 + 22) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 10);
            *(b + 7 * OS1_S1 + 41) = prefactor_x * *(b + 7 * OS1_S1 + 26) -
                                     p_over_q * *(b + 13 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 16);
            *(b + 7 * OS1_S1 + 42) = prefactor_z * *(b + 7 * OS1_S1 + 23) -
                                     p_over_q * *(b + 17 * OS1_S1 + 23);
            *(b + 7 * OS1_S1 + 43) =
                prefactor_y * *(b + 7 * OS1_S1 + 25) -
                p_over_q * *(b + 16 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 25);
            *(b + 7 * OS1_S1 + 44) = prefactor_x * *(b + 7 * OS1_S1 + 29) -
                                     p_over_q * *(b + 13 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 19);
            *(b + 7 * OS1_S1 + 45) = prefactor_x * *(b + 7 * OS1_S1 + 30) -
                                     p_over_q * *(b + 13 * OS1_S1 + 30);
            *(b + 7 * OS1_S1 + 46) = prefactor_z * *(b + 7 * OS1_S1 + 26) -
                                     p_over_q * *(b + 17 * OS1_S1 + 26);
            *(b + 7 * OS1_S1 + 47) = prefactor_x * *(b + 7 * OS1_S1 + 32) -
                                     p_over_q * *(b + 13 * OS1_S1 + 32);
            *(b + 7 * OS1_S1 + 48) = prefactor_x * *(b + 7 * OS1_S1 + 33) -
                                     p_over_q * *(b + 13 * OS1_S1 + 33);
            *(b + 7 * OS1_S1 + 49) = prefactor_x * *(b + 7 * OS1_S1 + 34) -
                                     p_over_q * *(b + 13 * OS1_S1 + 34);
            *(b + 7 * OS1_S1 + 50) =
                prefactor_y * *(b + 7 * OS1_S1 + 30) -
                p_over_q * *(b + 16 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 7 * OS1_S1 + 16);
            *(b + 7 * OS1_S1 + 51) = prefactor_z * *(b + 7 * OS1_S1 + 30) -
                                     p_over_q * *(b + 17 * OS1_S1 + 30);
            *(b + 7 * OS1_S1 + 52) = prefactor_z * *(b + 7 * OS1_S1 + 31) -
                                     p_over_q * *(b + 17 * OS1_S1 + 31) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 16);
            *(b + 7 * OS1_S1 + 53) =
                prefactor_y * *(b + 7 * OS1_S1 + 33) -
                p_over_q * *(b + 16 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 33) +
                one_over_two_q * *(b + 7 * OS1_S1 + 19);
            *(b + 7 * OS1_S1 + 54) =
                prefactor_y * *(b + 7 * OS1_S1 + 34) -
                p_over_q * *(b + 16 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 34);
            *(b + 7 * OS1_S1 + 55) =
                prefactor_z * *(b + 7 * OS1_S1 + 34) -
                p_over_q * *(b + 17 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 7 * OS1_S1 + 19);
            *(b + 8 * OS1_S1 + 35) =
                prefactor_x * *(b + 8 * OS1_S1 + 20) -
                p_over_q * *(b + 14 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 8 * OS1_S1 + 10);
            *(b + 8 * OS1_S1 + 36) = prefactor_y * *(b + 8 * OS1_S1 + 20) -
                                     p_over_q * *(b + 17 * OS1_S1 + 20) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 20);
            *(b + 8 * OS1_S1 + 37) = prefactor_z * *(b + 8 * OS1_S1 + 20) -
                                     p_over_q * *(b + 18 * OS1_S1 + 20) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 20);
            *(b + 8 * OS1_S1 + 38) = prefactor_y * *(b + 8 * OS1_S1 + 21) -
                                     p_over_q * *(b + 17 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 10);
            *(b + 8 * OS1_S1 + 39) = prefactor_z * *(b + 8 * OS1_S1 + 21) -
                                     p_over_q * *(b + 18 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 21);
            *(b + 8 * OS1_S1 + 40) = prefactor_z * *(b + 8 * OS1_S1 + 22) -
                                     p_over_q * *(b + 18 * OS1_S1 + 22) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 22) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 10);
            *(b + 8 * OS1_S1 + 41) = prefactor_x * *(b + 8 * OS1_S1 + 26) -
                                     p_over_q * *(b + 14 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 16);
            *(b + 8 * OS1_S1 + 42) = prefactor_z * *(b + 8 * OS1_S1 + 23) -
                                     p_over_q * *(b + 18 * OS1_S1 + 23) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 23);
            *(b + 8 * OS1_S1 + 43) = prefactor_y * *(b + 8 * OS1_S1 + 25) -
                                     p_over_q * *(b + 17 * OS1_S1 + 25) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 25);
            *(b + 8 * OS1_S1 + 44) = prefactor_x * *(b + 8 * OS1_S1 + 29) -
                                     p_over_q * *(b + 14 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 19);
            *(b + 8 * OS1_S1 + 45) = prefactor_x * *(b + 8 * OS1_S1 + 30) -
                                     p_over_q * *(b + 14 * OS1_S1 + 30);
            *(b + 8 * OS1_S1 + 46) = prefactor_x * *(b + 8 * OS1_S1 + 31) -
                                     p_over_q * *(b + 14 * OS1_S1 + 31);
            *(b + 8 * OS1_S1 + 47) = prefactor_x * *(b + 8 * OS1_S1 + 32) -
                                     p_over_q * *(b + 14 * OS1_S1 + 32);
            *(b + 8 * OS1_S1 + 48) = prefactor_x * *(b + 8 * OS1_S1 + 33) -
                                     p_over_q * *(b + 14 * OS1_S1 + 33);
            *(b + 8 * OS1_S1 + 49) = prefactor_x * *(b + 8 * OS1_S1 + 34) -
                                     p_over_q * *(b + 14 * OS1_S1 + 34);
            *(b + 8 * OS1_S1 + 50) =
                prefactor_y * *(b + 8 * OS1_S1 + 30) -
                p_over_q * *(b + 17 * OS1_S1 + 30) +
                one_over_two_q * *(b + 3 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 8 * OS1_S1 + 16);
            *(b + 8 * OS1_S1 + 51) = prefactor_z * *(b + 8 * OS1_S1 + 30) -
                                     p_over_q * *(b + 18 * OS1_S1 + 30) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 30);
            *(b + 8 * OS1_S1 + 52) = prefactor_z * *(b + 8 * OS1_S1 + 31) -
                                     p_over_q * *(b + 18 * OS1_S1 + 31) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 31) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 16);
            *(b + 8 * OS1_S1 + 53) = prefactor_y * *(b + 8 * OS1_S1 + 33) -
                                     p_over_q * *(b + 17 * OS1_S1 + 33) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 33) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 19);
            *(b + 8 * OS1_S1 + 54) = prefactor_y * *(b + 8 * OS1_S1 + 34) -
                                     p_over_q * *(b + 17 * OS1_S1 + 34) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 34);
            *(b + 8 * OS1_S1 + 55) =
                prefactor_z * *(b + 8 * OS1_S1 + 34) -
                p_over_q * *(b + 18 * OS1_S1 + 34) +
                one_over_two_q * *(b + 2 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 8 * OS1_S1 + 19);
            *(b + 9 * OS1_S1 + 35) =
                prefactor_x * *(b + 9 * OS1_S1 + 20) -
                p_over_q * *(b + 15 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 9 * OS1_S1 + 10);
            *(b + 9 * OS1_S1 + 36) = prefactor_y * *(b + 9 * OS1_S1 + 20) -
                                     p_over_q * *(b + 18 * OS1_S1 + 20);
            *(b + 9 * OS1_S1 + 37) =
                prefactor_z * *(b + 9 * OS1_S1 + 20) -
                p_over_q * *(b + 19 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 20);
            *(b + 9 * OS1_S1 + 38) = prefactor_y * *(b + 9 * OS1_S1 + 21) -
                                     p_over_q * *(b + 18 * OS1_S1 + 21) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 10);
            *(b + 9 * OS1_S1 + 39) = prefactor_y * *(b + 9 * OS1_S1 + 22) -
                                     p_over_q * *(b + 18 * OS1_S1 + 22);
            *(b + 9 * OS1_S1 + 40) =
                prefactor_z * *(b + 9 * OS1_S1 + 22) -
                p_over_q * *(b + 19 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 22) +
                one_over_two_q * *(b + 9 * OS1_S1 + 10);
            *(b + 9 * OS1_S1 + 41) = prefactor_x * *(b + 9 * OS1_S1 + 26) -
                                     p_over_q * *(b + 15 * OS1_S1 + 26) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 16);
            *(b + 9 * OS1_S1 + 42) =
                prefactor_z * *(b + 9 * OS1_S1 + 23) -
                p_over_q * *(b + 19 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 23);
            *(b + 9 * OS1_S1 + 43) = prefactor_y * *(b + 9 * OS1_S1 + 25) -
                                     p_over_q * *(b + 18 * OS1_S1 + 25);
            *(b + 9 * OS1_S1 + 44) = prefactor_x * *(b + 9 * OS1_S1 + 29) -
                                     p_over_q * *(b + 15 * OS1_S1 + 29) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 19);
            *(b + 9 * OS1_S1 + 45) = prefactor_x * *(b + 9 * OS1_S1 + 30) -
                                     p_over_q * *(b + 15 * OS1_S1 + 30);
            *(b + 9 * OS1_S1 + 46) = prefactor_x * *(b + 9 * OS1_S1 + 31) -
                                     p_over_q * *(b + 15 * OS1_S1 + 31);
            *(b + 9 * OS1_S1 + 47) = prefactor_x * *(b + 9 * OS1_S1 + 32) -
                                     p_over_q * *(b + 15 * OS1_S1 + 32);
            *(b + 9 * OS1_S1 + 48) = prefactor_y * *(b + 9 * OS1_S1 + 29) -
                                     p_over_q * *(b + 18 * OS1_S1 + 29);
            *(b + 9 * OS1_S1 + 49) = prefactor_x * *(b + 9 * OS1_S1 + 34) -
                                     p_over_q * *(b + 15 * OS1_S1 + 34);
            *(b + 9 * OS1_S1 + 50) =
                prefactor_y * *(b + 9 * OS1_S1 + 30) -
                p_over_q * *(b + 18 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 9 * OS1_S1 + 16);
            *(b + 9 * OS1_S1 + 51) =
                prefactor_z * *(b + 9 * OS1_S1 + 30) -
                p_over_q * *(b + 19 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 30);
            *(b + 9 * OS1_S1 + 52) =
                prefactor_z * *(b + 9 * OS1_S1 + 31) -
                p_over_q * *(b + 19 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 31) +
                one_over_two_q * *(b + 9 * OS1_S1 + 16);
            *(b + 9 * OS1_S1 + 53) = prefactor_y * *(b + 9 * OS1_S1 + 33) -
                                     p_over_q * *(b + 18 * OS1_S1 + 33) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 19);
            *(b + 9 * OS1_S1 + 54) = prefactor_y * *(b + 9 * OS1_S1 + 34) -
                                     p_over_q * *(b + 18 * OS1_S1 + 34);
            *(b + 9 * OS1_S1 + 55) =
                prefactor_z * *(b + 9 * OS1_S1 + 34) -
                p_over_q * *(b + 19 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 9 * OS1_S1 + 19);
            return;
        }
        void transfer_3_5(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 10 * OS1_S1 + 35) =
                prefactor_x * *(b + 10 * OS1_S1 + 20) -
                p_over_q * *(b + 20 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 10);
            *(b + 10 * OS1_S1 + 36) = prefactor_y * *(b + 10 * OS1_S1 + 20) -
                                      p_over_q * *(b + 21 * OS1_S1 + 20);
            *(b + 10 * OS1_S1 + 37) = prefactor_z * *(b + 10 * OS1_S1 + 20) -
                                      p_over_q * *(b + 22 * OS1_S1 + 20);
            *(b + 10 * OS1_S1 + 38) = prefactor_y * *(b + 10 * OS1_S1 + 21) -
                                      p_over_q * *(b + 21 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 10);
            *(b + 10 * OS1_S1 + 39) = prefactor_z * *(b + 10 * OS1_S1 + 21) -
                                      p_over_q * *(b + 22 * OS1_S1 + 21);
            *(b + 10 * OS1_S1 + 40) = prefactor_z * *(b + 10 * OS1_S1 + 22) -
                                      p_over_q * *(b + 22 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 10);
            *(b + 10 * OS1_S1 + 41) =
                prefactor_x * *(b + 10 * OS1_S1 + 26) -
                p_over_q * *(b + 20 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 26) +
                one_over_two_q * *(b + 10 * OS1_S1 + 16);
            *(b + 10 * OS1_S1 + 42) = prefactor_z * *(b + 10 * OS1_S1 + 23) -
                                      p_over_q * *(b + 22 * OS1_S1 + 23);
            *(b + 10 * OS1_S1 + 43) = prefactor_y * *(b + 10 * OS1_S1 + 25) -
                                      p_over_q * *(b + 21 * OS1_S1 + 25);
            *(b + 10 * OS1_S1 + 44) =
                prefactor_x * *(b + 10 * OS1_S1 + 29) -
                p_over_q * *(b + 20 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 29) +
                one_over_two_q * *(b + 10 * OS1_S1 + 19);
            *(b + 10 * OS1_S1 + 45) =
                prefactor_x * *(b + 10 * OS1_S1 + 30) -
                p_over_q * *(b + 20 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 30);
            *(b + 10 * OS1_S1 + 46) = prefactor_z * *(b + 10 * OS1_S1 + 26) -
                                      p_over_q * *(b + 22 * OS1_S1 + 26);
            *(b + 10 * OS1_S1 + 47) =
                prefactor_x * *(b + 10 * OS1_S1 + 32) -
                p_over_q * *(b + 20 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 32);
            *(b + 10 * OS1_S1 + 48) = prefactor_y * *(b + 10 * OS1_S1 + 29) -
                                      p_over_q * *(b + 21 * OS1_S1 + 29);
            *(b + 10 * OS1_S1 + 49) =
                prefactor_x * *(b + 10 * OS1_S1 + 34) -
                p_over_q * *(b + 20 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 34);
            *(b + 10 * OS1_S1 + 50) =
                prefactor_y * *(b + 10 * OS1_S1 + 30) -
                p_over_q * *(b + 21 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 16);
            *(b + 10 * OS1_S1 + 51) = prefactor_z * *(b + 10 * OS1_S1 + 30) -
                                      p_over_q * *(b + 22 * OS1_S1 + 30);
            *(b + 10 * OS1_S1 + 52) = prefactor_z * *(b + 10 * OS1_S1 + 31) -
                                      p_over_q * *(b + 22 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 16);
            *(b + 10 * OS1_S1 + 53) = prefactor_y * *(b + 10 * OS1_S1 + 33) -
                                      p_over_q * *(b + 21 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 19);
            *(b + 10 * OS1_S1 + 54) = prefactor_y * *(b + 10 * OS1_S1 + 34) -
                                      p_over_q * *(b + 21 * OS1_S1 + 34);
            *(b + 10 * OS1_S1 + 55) =
                prefactor_z * *(b + 10 * OS1_S1 + 34) -
                p_over_q * *(b + 22 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 19);
            *(b + 11 * OS1_S1 + 35) =
                prefactor_x * *(b + 11 * OS1_S1 + 20) -
                p_over_q * *(b + 21 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 11 * OS1_S1 + 10);
            *(b + 11 * OS1_S1 + 36) = prefactor_y * *(b + 11 * OS1_S1 + 20) -
                                      p_over_q * *(b + 23 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 20);
            *(b + 11 * OS1_S1 + 37) = prefactor_z * *(b + 11 * OS1_S1 + 20) -
                                      p_over_q * *(b + 24 * OS1_S1 + 20);
            *(b + 11 * OS1_S1 + 38) = prefactor_y * *(b + 11 * OS1_S1 + 21) -
                                      p_over_q * *(b + 23 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 10);
            *(b + 11 * OS1_S1 + 39) = prefactor_z * *(b + 11 * OS1_S1 + 21) -
                                      p_over_q * *(b + 24 * OS1_S1 + 21);
            *(b + 11 * OS1_S1 + 40) = prefactor_z * *(b + 11 * OS1_S1 + 22) -
                                      p_over_q * *(b + 24 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 10);
            *(b + 11 * OS1_S1 + 41) =
                prefactor_x * *(b + 11 * OS1_S1 + 26) -
                p_over_q * *(b + 21 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 26) +
                one_over_two_q * *(b + 11 * OS1_S1 + 16);
            *(b + 11 * OS1_S1 + 42) = prefactor_z * *(b + 11 * OS1_S1 + 23) -
                                      p_over_q * *(b + 24 * OS1_S1 + 23);
            *(b + 11 * OS1_S1 + 43) = prefactor_y * *(b + 11 * OS1_S1 + 25) -
                                      p_over_q * *(b + 23 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 25);
            *(b + 11 * OS1_S1 + 44) =
                prefactor_x * *(b + 11 * OS1_S1 + 29) -
                p_over_q * *(b + 21 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 29) +
                one_over_two_q * *(b + 11 * OS1_S1 + 19);
            *(b + 11 * OS1_S1 + 45) =
                prefactor_x * *(b + 11 * OS1_S1 + 30) -
                p_over_q * *(b + 21 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 30);
            *(b + 11 * OS1_S1 + 46) = prefactor_z * *(b + 11 * OS1_S1 + 26) -
                                      p_over_q * *(b + 24 * OS1_S1 + 26);
            *(b + 11 * OS1_S1 + 47) =
                prefactor_x * *(b + 11 * OS1_S1 + 32) -
                p_over_q * *(b + 21 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 32);
            *(b + 11 * OS1_S1 + 48) = prefactor_y * *(b + 11 * OS1_S1 + 29) -
                                      p_over_q * *(b + 23 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 29);
            *(b + 11 * OS1_S1 + 49) =
                prefactor_x * *(b + 11 * OS1_S1 + 34) -
                p_over_q * *(b + 21 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 34);
            *(b + 11 * OS1_S1 + 50) =
                prefactor_y * *(b + 11 * OS1_S1 + 30) -
                p_over_q * *(b + 23 * OS1_S1 + 30) +
                one_over_two_q * *(b + 4 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 11 * OS1_S1 + 16);
            *(b + 11 * OS1_S1 + 51) = prefactor_z * *(b + 11 * OS1_S1 + 30) -
                                      p_over_q * *(b + 24 * OS1_S1 + 30);
            *(b + 11 * OS1_S1 + 52) = prefactor_z * *(b + 11 * OS1_S1 + 31) -
                                      p_over_q * *(b + 24 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 16);
            *(b + 11 * OS1_S1 + 53) = prefactor_y * *(b + 11 * OS1_S1 + 33) -
                                      p_over_q * *(b + 23 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 19);
            *(b + 11 * OS1_S1 + 54) = prefactor_y * *(b + 11 * OS1_S1 + 34) -
                                      p_over_q * *(b + 23 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 34);
            *(b + 11 * OS1_S1 + 55) =
                prefactor_z * *(b + 11 * OS1_S1 + 34) -
                p_over_q * *(b + 24 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 11 * OS1_S1 + 19);
            *(b + 12 * OS1_S1 + 35) =
                prefactor_x * *(b + 12 * OS1_S1 + 20) -
                p_over_q * *(b + 22 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 12 * OS1_S1 + 10);
            *(b + 12 * OS1_S1 + 36) = prefactor_y * *(b + 12 * OS1_S1 + 20) -
                                      p_over_q * *(b + 24 * OS1_S1 + 20);
            *(b + 12 * OS1_S1 + 37) = prefactor_z * *(b + 12 * OS1_S1 + 20) -
                                      p_over_q * *(b + 25 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 20);
            *(b + 12 * OS1_S1 + 38) = prefactor_y * *(b + 12 * OS1_S1 + 21) -
                                      p_over_q * *(b + 24 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 10);
            *(b + 12 * OS1_S1 + 39) = prefactor_y * *(b + 12 * OS1_S1 + 22) -
                                      p_over_q * *(b + 24 * OS1_S1 + 22);
            *(b + 12 * OS1_S1 + 40) = prefactor_z * *(b + 12 * OS1_S1 + 22) -
                                      p_over_q * *(b + 25 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 10);
            *(b + 12 * OS1_S1 + 41) =
                prefactor_x * *(b + 12 * OS1_S1 + 26) -
                p_over_q * *(b + 22 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 26) +
                one_over_two_q * *(b + 12 * OS1_S1 + 16);
            *(b + 12 * OS1_S1 + 42) = prefactor_z * *(b + 12 * OS1_S1 + 23) -
                                      p_over_q * *(b + 25 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 23);
            *(b + 12 * OS1_S1 + 43) = prefactor_y * *(b + 12 * OS1_S1 + 25) -
                                      p_over_q * *(b + 24 * OS1_S1 + 25);
            *(b + 12 * OS1_S1 + 44) =
                prefactor_x * *(b + 12 * OS1_S1 + 29) -
                p_over_q * *(b + 22 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 29) +
                one_over_two_q * *(b + 12 * OS1_S1 + 19);
            *(b + 12 * OS1_S1 + 45) =
                prefactor_x * *(b + 12 * OS1_S1 + 30) -
                p_over_q * *(b + 22 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 30);
            *(b + 12 * OS1_S1 + 46) = prefactor_z * *(b + 12 * OS1_S1 + 26) -
                                      p_over_q * *(b + 25 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 26);
            *(b + 12 * OS1_S1 + 47) =
                prefactor_x * *(b + 12 * OS1_S1 + 32) -
                p_over_q * *(b + 22 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 32);
            *(b + 12 * OS1_S1 + 48) = prefactor_y * *(b + 12 * OS1_S1 + 29) -
                                      p_over_q * *(b + 24 * OS1_S1 + 29);
            *(b + 12 * OS1_S1 + 49) =
                prefactor_x * *(b + 12 * OS1_S1 + 34) -
                p_over_q * *(b + 22 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 34);
            *(b + 12 * OS1_S1 + 50) =
                prefactor_y * *(b + 12 * OS1_S1 + 30) -
                p_over_q * *(b + 24 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 12 * OS1_S1 + 16);
            *(b + 12 * OS1_S1 + 51) = prefactor_z * *(b + 12 * OS1_S1 + 30) -
                                      p_over_q * *(b + 25 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 30);
            *(b + 12 * OS1_S1 + 52) = prefactor_z * *(b + 12 * OS1_S1 + 31) -
                                      p_over_q * *(b + 25 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 16);
            *(b + 12 * OS1_S1 + 53) = prefactor_y * *(b + 12 * OS1_S1 + 33) -
                                      p_over_q * *(b + 24 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 19);
            *(b + 12 * OS1_S1 + 54) = prefactor_y * *(b + 12 * OS1_S1 + 34) -
                                      p_over_q * *(b + 24 * OS1_S1 + 34);
            *(b + 12 * OS1_S1 + 55) =
                prefactor_z * *(b + 12 * OS1_S1 + 34) -
                p_over_q * *(b + 25 * OS1_S1 + 34) +
                one_over_two_q * *(b + 4 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 12 * OS1_S1 + 19);
            *(b + 13 * OS1_S1 + 35) =
                prefactor_x * *(b + 13 * OS1_S1 + 20) -
                p_over_q * *(b + 23 * OS1_S1 + 20) +
                one_over_two_q * *(b + 7 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 13 * OS1_S1 + 10);
            *(b + 13 * OS1_S1 + 36) =
                prefactor_y * *(b + 13 * OS1_S1 + 20) -
                p_over_q * *(b + 26 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 20);
            *(b + 13 * OS1_S1 + 37) = prefactor_z * *(b + 13 * OS1_S1 + 20) -
                                      p_over_q * *(b + 27 * OS1_S1 + 20);
            *(b + 13 * OS1_S1 + 38) =
                prefactor_y * *(b + 13 * OS1_S1 + 21) -
                p_over_q * *(b + 26 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 21) +
                one_over_two_q * *(b + 13 * OS1_S1 + 10);
            *(b + 13 * OS1_S1 + 39) = prefactor_z * *(b + 13 * OS1_S1 + 21) -
                                      p_over_q * *(b + 27 * OS1_S1 + 21);
            *(b + 13 * OS1_S1 + 40) = prefactor_z * *(b + 13 * OS1_S1 + 22) -
                                      p_over_q * *(b + 27 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 10);
            *(b + 13 * OS1_S1 + 41) = prefactor_x * *(b + 13 * OS1_S1 + 26) -
                                      p_over_q * *(b + 23 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 16);
            *(b + 13 * OS1_S1 + 42) = prefactor_z * *(b + 13 * OS1_S1 + 23) -
                                      p_over_q * *(b + 27 * OS1_S1 + 23);
            *(b + 13 * OS1_S1 + 43) =
                prefactor_y * *(b + 13 * OS1_S1 + 25) -
                p_over_q * *(b + 26 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 25);
            *(b + 13 * OS1_S1 + 44) = prefactor_x * *(b + 13 * OS1_S1 + 29) -
                                      p_over_q * *(b + 23 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 19);
            *(b + 13 * OS1_S1 + 45) = prefactor_x * *(b + 13 * OS1_S1 + 30) -
                                      p_over_q * *(b + 23 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 30);
            *(b + 13 * OS1_S1 + 46) = prefactor_z * *(b + 13 * OS1_S1 + 26) -
                                      p_over_q * *(b + 27 * OS1_S1 + 26);
            *(b + 13 * OS1_S1 + 47) = prefactor_x * *(b + 13 * OS1_S1 + 32) -
                                      p_over_q * *(b + 23 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 32);
            *(b + 13 * OS1_S1 + 48) = prefactor_x * *(b + 13 * OS1_S1 + 33) -
                                      p_over_q * *(b + 23 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 33);
            *(b + 13 * OS1_S1 + 49) = prefactor_x * *(b + 13 * OS1_S1 + 34) -
                                      p_over_q * *(b + 23 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 34);
            *(b + 13 * OS1_S1 + 50) =
                prefactor_y * *(b + 13 * OS1_S1 + 30) -
                p_over_q * *(b + 26 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 13 * OS1_S1 + 16);
            *(b + 13 * OS1_S1 + 51) = prefactor_z * *(b + 13 * OS1_S1 + 30) -
                                      p_over_q * *(b + 27 * OS1_S1 + 30);
            *(b + 13 * OS1_S1 + 52) = prefactor_z * *(b + 13 * OS1_S1 + 31) -
                                      p_over_q * *(b + 27 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 16);
            *(b + 13 * OS1_S1 + 53) =
                prefactor_y * *(b + 13 * OS1_S1 + 33) -
                p_over_q * *(b + 26 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 33) +
                one_over_two_q * *(b + 13 * OS1_S1 + 19);
            *(b + 13 * OS1_S1 + 54) =
                prefactor_y * *(b + 13 * OS1_S1 + 34) -
                p_over_q * *(b + 26 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 34);
            *(b + 13 * OS1_S1 + 55) =
                prefactor_z * *(b + 13 * OS1_S1 + 34) -
                p_over_q * *(b + 27 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 13 * OS1_S1 + 19);
            *(b + 14 * OS1_S1 + 35) =
                prefactor_x * *(b + 14 * OS1_S1 + 20) -
                p_over_q * *(b + 24 * OS1_S1 + 20) +
                one_over_two_q * *(b + 8 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 14 * OS1_S1 + 10);
            *(b + 14 * OS1_S1 + 36) = prefactor_y * *(b + 14 * OS1_S1 + 20) -
                                      p_over_q * *(b + 27 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 20);
            *(b + 14 * OS1_S1 + 37) = prefactor_z * *(b + 14 * OS1_S1 + 20) -
                                      p_over_q * *(b + 28 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 20);
            *(b + 14 * OS1_S1 + 38) = prefactor_y * *(b + 14 * OS1_S1 + 21) -
                                      p_over_q * *(b + 27 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 10);
            *(b + 14 * OS1_S1 + 39) = prefactor_z * *(b + 14 * OS1_S1 + 21) -
                                      p_over_q * *(b + 28 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 21);
            *(b + 14 * OS1_S1 + 40) = prefactor_z * *(b + 14 * OS1_S1 + 22) -
                                      p_over_q * *(b + 28 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 10);
            *(b + 14 * OS1_S1 + 41) = prefactor_x * *(b + 14 * OS1_S1 + 26) -
                                      p_over_q * *(b + 24 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 16);
            *(b + 14 * OS1_S1 + 42) = prefactor_z * *(b + 14 * OS1_S1 + 23) -
                                      p_over_q * *(b + 28 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 23);
            *(b + 14 * OS1_S1 + 43) = prefactor_y * *(b + 14 * OS1_S1 + 25) -
                                      p_over_q * *(b + 27 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 25);
            *(b + 14 * OS1_S1 + 44) = prefactor_x * *(b + 14 * OS1_S1 + 29) -
                                      p_over_q * *(b + 24 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 19);
            *(b + 14 * OS1_S1 + 45) = prefactor_x * *(b + 14 * OS1_S1 + 30) -
                                      p_over_q * *(b + 24 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 30);
            *(b + 14 * OS1_S1 + 46) = prefactor_z * *(b + 14 * OS1_S1 + 26) -
                                      p_over_q * *(b + 28 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 26);
            *(b + 14 * OS1_S1 + 47) = prefactor_x * *(b + 14 * OS1_S1 + 32) -
                                      p_over_q * *(b + 24 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 32);
            *(b + 14 * OS1_S1 + 48) = prefactor_y * *(b + 14 * OS1_S1 + 29) -
                                      p_over_q * *(b + 27 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 29);
            *(b + 14 * OS1_S1 + 49) = prefactor_x * *(b + 14 * OS1_S1 + 34) -
                                      p_over_q * *(b + 24 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 34);
            *(b + 14 * OS1_S1 + 50) =
                prefactor_y * *(b + 14 * OS1_S1 + 30) -
                p_over_q * *(b + 27 * OS1_S1 + 30) +
                one_over_two_q * *(b + 6 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 14 * OS1_S1 + 16);
            *(b + 14 * OS1_S1 + 51) = prefactor_z * *(b + 14 * OS1_S1 + 30) -
                                      p_over_q * *(b + 28 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 30);
            *(b + 14 * OS1_S1 + 52) = prefactor_z * *(b + 14 * OS1_S1 + 31) -
                                      p_over_q * *(b + 28 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 16);
            *(b + 14 * OS1_S1 + 53) = prefactor_y * *(b + 14 * OS1_S1 + 33) -
                                      p_over_q * *(b + 27 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 19);
            *(b + 14 * OS1_S1 + 54) = prefactor_y * *(b + 14 * OS1_S1 + 34) -
                                      p_over_q * *(b + 27 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 34);
            *(b + 14 * OS1_S1 + 55) =
                prefactor_z * *(b + 14 * OS1_S1 + 34) -
                p_over_q * *(b + 28 * OS1_S1 + 34) +
                one_over_two_q * *(b + 5 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 14 * OS1_S1 + 19);
            *(b + 15 * OS1_S1 + 35) =
                prefactor_x * *(b + 15 * OS1_S1 + 20) -
                p_over_q * *(b + 25 * OS1_S1 + 20) +
                one_over_two_q * *(b + 9 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 15 * OS1_S1 + 10);
            *(b + 15 * OS1_S1 + 36) = prefactor_y * *(b + 15 * OS1_S1 + 20) -
                                      p_over_q * *(b + 28 * OS1_S1 + 20);
            *(b + 15 * OS1_S1 + 37) =
                prefactor_z * *(b + 15 * OS1_S1 + 20) -
                p_over_q * *(b + 29 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 20);
            *(b + 15 * OS1_S1 + 38) = prefactor_y * *(b + 15 * OS1_S1 + 21) -
                                      p_over_q * *(b + 28 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 10);
            *(b + 15 * OS1_S1 + 39) = prefactor_y * *(b + 15 * OS1_S1 + 22) -
                                      p_over_q * *(b + 28 * OS1_S1 + 22);
            *(b + 15 * OS1_S1 + 40) =
                prefactor_z * *(b + 15 * OS1_S1 + 22) -
                p_over_q * *(b + 29 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 22) +
                one_over_two_q * *(b + 15 * OS1_S1 + 10);
            *(b + 15 * OS1_S1 + 41) = prefactor_x * *(b + 15 * OS1_S1 + 26) -
                                      p_over_q * *(b + 25 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 16);
            *(b + 15 * OS1_S1 + 42) =
                prefactor_z * *(b + 15 * OS1_S1 + 23) -
                p_over_q * *(b + 29 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 23);
            *(b + 15 * OS1_S1 + 43) = prefactor_y * *(b + 15 * OS1_S1 + 25) -
                                      p_over_q * *(b + 28 * OS1_S1 + 25);
            *(b + 15 * OS1_S1 + 44) = prefactor_x * *(b + 15 * OS1_S1 + 29) -
                                      p_over_q * *(b + 25 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 19);
            *(b + 15 * OS1_S1 + 45) = prefactor_x * *(b + 15 * OS1_S1 + 30) -
                                      p_over_q * *(b + 25 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 30);
            *(b + 15 * OS1_S1 + 46) = prefactor_x * *(b + 15 * OS1_S1 + 31) -
                                      p_over_q * *(b + 25 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 31);
            *(b + 15 * OS1_S1 + 47) = prefactor_x * *(b + 15 * OS1_S1 + 32) -
                                      p_over_q * *(b + 25 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 32);
            *(b + 15 * OS1_S1 + 48) = prefactor_y * *(b + 15 * OS1_S1 + 29) -
                                      p_over_q * *(b + 28 * OS1_S1 + 29);
            *(b + 15 * OS1_S1 + 49) = prefactor_x * *(b + 15 * OS1_S1 + 34) -
                                      p_over_q * *(b + 25 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 34);
            *(b + 15 * OS1_S1 + 50) =
                prefactor_y * *(b + 15 * OS1_S1 + 30) -
                p_over_q * *(b + 28 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 15 * OS1_S1 + 16);
            *(b + 15 * OS1_S1 + 51) =
                prefactor_z * *(b + 15 * OS1_S1 + 30) -
                p_over_q * *(b + 29 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 30);
            *(b + 15 * OS1_S1 + 52) =
                prefactor_z * *(b + 15 * OS1_S1 + 31) -
                p_over_q * *(b + 29 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 31) +
                one_over_two_q * *(b + 15 * OS1_S1 + 16);
            *(b + 15 * OS1_S1 + 53) = prefactor_y * *(b + 15 * OS1_S1 + 33) -
                                      p_over_q * *(b + 28 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 19);
            *(b + 15 * OS1_S1 + 54) = prefactor_y * *(b + 15 * OS1_S1 + 34) -
                                      p_over_q * *(b + 28 * OS1_S1 + 34);
            *(b + 15 * OS1_S1 + 55) =
                prefactor_z * *(b + 15 * OS1_S1 + 34) -
                p_over_q * *(b + 29 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 15 * OS1_S1 + 19);
            *(b + 16 * OS1_S1 + 35) =
                prefactor_x * *(b + 16 * OS1_S1 + 20) -
                p_over_q * *(b + 26 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 10);
            *(b + 16 * OS1_S1 + 36) =
                prefactor_y * *(b + 16 * OS1_S1 + 20) -
                p_over_q * *(b + 30 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 20);
            *(b + 16 * OS1_S1 + 37) = prefactor_z * *(b + 16 * OS1_S1 + 20) -
                                      p_over_q * *(b + 31 * OS1_S1 + 20);
            *(b + 16 * OS1_S1 + 38) =
                prefactor_y * *(b + 16 * OS1_S1 + 21) -
                p_over_q * *(b + 30 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 21) +
                one_over_two_q * *(b + 16 * OS1_S1 + 10);
            *(b + 16 * OS1_S1 + 39) = prefactor_z * *(b + 16 * OS1_S1 + 21) -
                                      p_over_q * *(b + 31 * OS1_S1 + 21);
            *(b + 16 * OS1_S1 + 40) = prefactor_z * *(b + 16 * OS1_S1 + 22) -
                                      p_over_q * *(b + 31 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 10);
            *(b + 16 * OS1_S1 + 41) = prefactor_x * *(b + 16 * OS1_S1 + 26) -
                                      p_over_q * *(b + 26 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 16);
            *(b + 16 * OS1_S1 + 42) = prefactor_z * *(b + 16 * OS1_S1 + 23) -
                                      p_over_q * *(b + 31 * OS1_S1 + 23);
            *(b + 16 * OS1_S1 + 43) =
                prefactor_y * *(b + 16 * OS1_S1 + 25) -
                p_over_q * *(b + 30 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 25);
            *(b + 16 * OS1_S1 + 44) = prefactor_x * *(b + 16 * OS1_S1 + 29) -
                                      p_over_q * *(b + 26 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 19);
            *(b + 16 * OS1_S1 + 45) = prefactor_x * *(b + 16 * OS1_S1 + 30) -
                                      p_over_q * *(b + 26 * OS1_S1 + 30);
            *(b + 16 * OS1_S1 + 46) = prefactor_z * *(b + 16 * OS1_S1 + 26) -
                                      p_over_q * *(b + 31 * OS1_S1 + 26);
            *(b + 16 * OS1_S1 + 47) = prefactor_x * *(b + 16 * OS1_S1 + 32) -
                                      p_over_q * *(b + 26 * OS1_S1 + 32);
            *(b + 16 * OS1_S1 + 48) = prefactor_x * *(b + 16 * OS1_S1 + 33) -
                                      p_over_q * *(b + 26 * OS1_S1 + 33);
            *(b + 16 * OS1_S1 + 49) = prefactor_x * *(b + 16 * OS1_S1 + 34) -
                                      p_over_q * *(b + 26 * OS1_S1 + 34);
            *(b + 16 * OS1_S1 + 50) =
                prefactor_y * *(b + 16 * OS1_S1 + 30) -
                p_over_q * *(b + 30 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 16);
            *(b + 16 * OS1_S1 + 51) = prefactor_z * *(b + 16 * OS1_S1 + 30) -
                                      p_over_q * *(b + 31 * OS1_S1 + 30);
            *(b + 16 * OS1_S1 + 52) = prefactor_z * *(b + 16 * OS1_S1 + 31) -
                                      p_over_q * *(b + 31 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 16);
            *(b + 16 * OS1_S1 + 53) =
                prefactor_y * *(b + 16 * OS1_S1 + 33) -
                p_over_q * *(b + 30 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 33) +
                one_over_two_q * *(b + 16 * OS1_S1 + 19);
            *(b + 16 * OS1_S1 + 54) =
                prefactor_y * *(b + 16 * OS1_S1 + 34) -
                p_over_q * *(b + 30 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 34);
            *(b + 16 * OS1_S1 + 55) =
                prefactor_z * *(b + 16 * OS1_S1 + 34) -
                p_over_q * *(b + 31 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 19);
            *(b + 17 * OS1_S1 + 35) =
                prefactor_x * *(b + 17 * OS1_S1 + 20) -
                p_over_q * *(b + 27 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 17 * OS1_S1 + 10);
            *(b + 17 * OS1_S1 + 36) =
                prefactor_y * *(b + 17 * OS1_S1 + 20) -
                p_over_q * *(b + 31 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 20);
            *(b + 17 * OS1_S1 + 37) = prefactor_z * *(b + 17 * OS1_S1 + 20) -
                                      p_over_q * *(b + 32 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 20);
            *(b + 17 * OS1_S1 + 38) =
                prefactor_y * *(b + 17 * OS1_S1 + 21) -
                p_over_q * *(b + 31 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 21) +
                one_over_two_q * *(b + 17 * OS1_S1 + 10);
            *(b + 17 * OS1_S1 + 39) = prefactor_z * *(b + 17 * OS1_S1 + 21) -
                                      p_over_q * *(b + 32 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 21);
            *(b + 17 * OS1_S1 + 40) = prefactor_z * *(b + 17 * OS1_S1 + 22) -
                                      p_over_q * *(b + 32 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 10);
            *(b + 17 * OS1_S1 + 41) = prefactor_x * *(b + 17 * OS1_S1 + 26) -
                                      p_over_q * *(b + 27 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 16);
            *(b + 17 * OS1_S1 + 42) = prefactor_z * *(b + 17 * OS1_S1 + 23) -
                                      p_over_q * *(b + 32 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 23);
            *(b + 17 * OS1_S1 + 43) =
                prefactor_y * *(b + 17 * OS1_S1 + 25) -
                p_over_q * *(b + 31 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 25);
            *(b + 17 * OS1_S1 + 44) = prefactor_x * *(b + 17 * OS1_S1 + 29) -
                                      p_over_q * *(b + 27 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 19);
            *(b + 17 * OS1_S1 + 45) = prefactor_x * *(b + 17 * OS1_S1 + 30) -
                                      p_over_q * *(b + 27 * OS1_S1 + 30);
            *(b + 17 * OS1_S1 + 46) = prefactor_x * *(b + 17 * OS1_S1 + 31) -
                                      p_over_q * *(b + 27 * OS1_S1 + 31);
            *(b + 17 * OS1_S1 + 47) = prefactor_x * *(b + 17 * OS1_S1 + 32) -
                                      p_over_q * *(b + 27 * OS1_S1 + 32);
            *(b + 17 * OS1_S1 + 48) = prefactor_x * *(b + 17 * OS1_S1 + 33) -
                                      p_over_q * *(b + 27 * OS1_S1 + 33);
            *(b + 17 * OS1_S1 + 49) = prefactor_x * *(b + 17 * OS1_S1 + 34) -
                                      p_over_q * *(b + 27 * OS1_S1 + 34);
            *(b + 17 * OS1_S1 + 50) =
                prefactor_y * *(b + 17 * OS1_S1 + 30) -
                p_over_q * *(b + 31 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 17 * OS1_S1 + 16);
            *(b + 17 * OS1_S1 + 51) = prefactor_z * *(b + 17 * OS1_S1 + 30) -
                                      p_over_q * *(b + 32 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 30);
            *(b + 17 * OS1_S1 + 52) = prefactor_z * *(b + 17 * OS1_S1 + 31) -
                                      p_over_q * *(b + 32 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 16);
            *(b + 17 * OS1_S1 + 53) =
                prefactor_y * *(b + 17 * OS1_S1 + 33) -
                p_over_q * *(b + 31 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 33) +
                one_over_two_q * *(b + 17 * OS1_S1 + 19);
            *(b + 17 * OS1_S1 + 54) =
                prefactor_y * *(b + 17 * OS1_S1 + 34) -
                p_over_q * *(b + 31 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 34);
            *(b + 17 * OS1_S1 + 55) =
                prefactor_z * *(b + 17 * OS1_S1 + 34) -
                p_over_q * *(b + 32 * OS1_S1 + 34) +
                one_over_two_q * *(b + 7 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 17 * OS1_S1 + 19);
            *(b + 18 * OS1_S1 + 35) =
                prefactor_x * *(b + 18 * OS1_S1 + 20) -
                p_over_q * *(b + 28 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 18 * OS1_S1 + 10);
            *(b + 18 * OS1_S1 + 36) = prefactor_y * *(b + 18 * OS1_S1 + 20) -
                                      p_over_q * *(b + 32 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 20);
            *(b + 18 * OS1_S1 + 37) =
                prefactor_z * *(b + 18 * OS1_S1 + 20) -
                p_over_q * *(b + 33 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 20);
            *(b + 18 * OS1_S1 + 38) = prefactor_y * *(b + 18 * OS1_S1 + 21) -
                                      p_over_q * *(b + 32 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 10);
            *(b + 18 * OS1_S1 + 39) = prefactor_y * *(b + 18 * OS1_S1 + 22) -
                                      p_over_q * *(b + 32 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 22);
            *(b + 18 * OS1_S1 + 40) =
                prefactor_z * *(b + 18 * OS1_S1 + 22) -
                p_over_q * *(b + 33 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 22) +
                one_over_two_q * *(b + 18 * OS1_S1 + 10);
            *(b + 18 * OS1_S1 + 41) = prefactor_x * *(b + 18 * OS1_S1 + 26) -
                                      p_over_q * *(b + 28 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 16);
            *(b + 18 * OS1_S1 + 42) =
                prefactor_z * *(b + 18 * OS1_S1 + 23) -
                p_over_q * *(b + 33 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 23);
            *(b + 18 * OS1_S1 + 43) = prefactor_y * *(b + 18 * OS1_S1 + 25) -
                                      p_over_q * *(b + 32 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 25);
            *(b + 18 * OS1_S1 + 44) = prefactor_x * *(b + 18 * OS1_S1 + 29) -
                                      p_over_q * *(b + 28 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 19);
            *(b + 18 * OS1_S1 + 45) = prefactor_x * *(b + 18 * OS1_S1 + 30) -
                                      p_over_q * *(b + 28 * OS1_S1 + 30);
            *(b + 18 * OS1_S1 + 46) = prefactor_x * *(b + 18 * OS1_S1 + 31) -
                                      p_over_q * *(b + 28 * OS1_S1 + 31);
            *(b + 18 * OS1_S1 + 47) = prefactor_x * *(b + 18 * OS1_S1 + 32) -
                                      p_over_q * *(b + 28 * OS1_S1 + 32);
            *(b + 18 * OS1_S1 + 48) = prefactor_x * *(b + 18 * OS1_S1 + 33) -
                                      p_over_q * *(b + 28 * OS1_S1 + 33);
            *(b + 18 * OS1_S1 + 49) = prefactor_x * *(b + 18 * OS1_S1 + 34) -
                                      p_over_q * *(b + 28 * OS1_S1 + 34);
            *(b + 18 * OS1_S1 + 50) =
                prefactor_y * *(b + 18 * OS1_S1 + 30) -
                p_over_q * *(b + 32 * OS1_S1 + 30) +
                one_over_two_q * *(b + 9 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 18 * OS1_S1 + 16);
            *(b + 18 * OS1_S1 + 51) =
                prefactor_z * *(b + 18 * OS1_S1 + 30) -
                p_over_q * *(b + 33 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 30);
            *(b + 18 * OS1_S1 + 52) =
                prefactor_z * *(b + 18 * OS1_S1 + 31) -
                p_over_q * *(b + 33 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 31) +
                one_over_two_q * *(b + 18 * OS1_S1 + 16);
            *(b + 18 * OS1_S1 + 53) = prefactor_y * *(b + 18 * OS1_S1 + 33) -
                                      p_over_q * *(b + 32 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 19);
            *(b + 18 * OS1_S1 + 54) = prefactor_y * *(b + 18 * OS1_S1 + 34) -
                                      p_over_q * *(b + 32 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 34);
            *(b + 18 * OS1_S1 + 55) =
                prefactor_z * *(b + 18 * OS1_S1 + 34) -
                p_over_q * *(b + 33 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 18 * OS1_S1 + 19);
            *(b + 19 * OS1_S1 + 35) =
                prefactor_x * *(b + 19 * OS1_S1 + 20) -
                p_over_q * *(b + 29 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 10);
            *(b + 19 * OS1_S1 + 36) = prefactor_y * *(b + 19 * OS1_S1 + 20) -
                                      p_over_q * *(b + 33 * OS1_S1 + 20);
            *(b + 19 * OS1_S1 + 37) =
                prefactor_z * *(b + 19 * OS1_S1 + 20) -
                p_over_q * *(b + 34 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 20);
            *(b + 19 * OS1_S1 + 38) = prefactor_y * *(b + 19 * OS1_S1 + 21) -
                                      p_over_q * *(b + 33 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 10);
            *(b + 19 * OS1_S1 + 39) = prefactor_y * *(b + 19 * OS1_S1 + 22) -
                                      p_over_q * *(b + 33 * OS1_S1 + 22);
            *(b + 19 * OS1_S1 + 40) =
                prefactor_z * *(b + 19 * OS1_S1 + 22) -
                p_over_q * *(b + 34 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 22) +
                one_over_two_q * *(b + 19 * OS1_S1 + 10);
            *(b + 19 * OS1_S1 + 41) = prefactor_x * *(b + 19 * OS1_S1 + 26) -
                                      p_over_q * *(b + 29 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 16);
            *(b + 19 * OS1_S1 + 42) =
                prefactor_z * *(b + 19 * OS1_S1 + 23) -
                p_over_q * *(b + 34 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 23);
            *(b + 19 * OS1_S1 + 43) = prefactor_y * *(b + 19 * OS1_S1 + 25) -
                                      p_over_q * *(b + 33 * OS1_S1 + 25);
            *(b + 19 * OS1_S1 + 44) = prefactor_x * *(b + 19 * OS1_S1 + 29) -
                                      p_over_q * *(b + 29 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 19);
            *(b + 19 * OS1_S1 + 45) = prefactor_x * *(b + 19 * OS1_S1 + 30) -
                                      p_over_q * *(b + 29 * OS1_S1 + 30);
            *(b + 19 * OS1_S1 + 46) = prefactor_x * *(b + 19 * OS1_S1 + 31) -
                                      p_over_q * *(b + 29 * OS1_S1 + 31);
            *(b + 19 * OS1_S1 + 47) = prefactor_x * *(b + 19 * OS1_S1 + 32) -
                                      p_over_q * *(b + 29 * OS1_S1 + 32);
            *(b + 19 * OS1_S1 + 48) = prefactor_y * *(b + 19 * OS1_S1 + 29) -
                                      p_over_q * *(b + 33 * OS1_S1 + 29);
            *(b + 19 * OS1_S1 + 49) = prefactor_x * *(b + 19 * OS1_S1 + 34) -
                                      p_over_q * *(b + 29 * OS1_S1 + 34);
            *(b + 19 * OS1_S1 + 50) =
                prefactor_y * *(b + 19 * OS1_S1 + 30) -
                p_over_q * *(b + 33 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 16);
            *(b + 19 * OS1_S1 + 51) =
                prefactor_z * *(b + 19 * OS1_S1 + 30) -
                p_over_q * *(b + 34 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 30);
            *(b + 19 * OS1_S1 + 52) =
                prefactor_z * *(b + 19 * OS1_S1 + 31) -
                p_over_q * *(b + 34 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 31) +
                one_over_two_q * *(b + 19 * OS1_S1 + 16);
            *(b + 19 * OS1_S1 + 53) = prefactor_y * *(b + 19 * OS1_S1 + 33) -
                                      p_over_q * *(b + 33 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 19);
            *(b + 19 * OS1_S1 + 54) = prefactor_y * *(b + 19 * OS1_S1 + 34) -
                                      p_over_q * *(b + 33 * OS1_S1 + 34);
            *(b + 19 * OS1_S1 + 55) =
                prefactor_z * *(b + 19 * OS1_S1 + 34) -
                p_over_q * *(b + 34 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 19);
            return;
        }

        void transfer_4_5(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 20 * OS1_S1 + 35) =
                prefactor_x * *(b + 20 * OS1_S1 + 20) -
                p_over_q * *(b + 35 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 20 * OS1_S1 + 10);
            *(b + 20 * OS1_S1 + 36) = prefactor_y * *(b + 20 * OS1_S1 + 20) -
                                      p_over_q * *(b + 36 * OS1_S1 + 20);
            *(b + 20 * OS1_S1 + 37) = prefactor_z * *(b + 20 * OS1_S1 + 20) -
                                      p_over_q * *(b + 37 * OS1_S1 + 20);
            *(b + 20 * OS1_S1 + 38) = prefactor_y * *(b + 20 * OS1_S1 + 21) -
                                      p_over_q * *(b + 36 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 10);
            *(b + 20 * OS1_S1 + 39) = prefactor_z * *(b + 20 * OS1_S1 + 21) -
                                      p_over_q * *(b + 37 * OS1_S1 + 21);
            *(b + 20 * OS1_S1 + 40) = prefactor_z * *(b + 20 * OS1_S1 + 22) -
                                      p_over_q * *(b + 37 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 10);
            *(b + 20 * OS1_S1 + 41) =
                prefactor_x * *(b + 20 * OS1_S1 + 26) -
                p_over_q * *(b + 35 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 26) +
                one_over_two_q * *(b + 20 * OS1_S1 + 16);
            *(b + 20 * OS1_S1 + 42) = prefactor_z * *(b + 20 * OS1_S1 + 23) -
                                      p_over_q * *(b + 37 * OS1_S1 + 23);
            *(b + 20 * OS1_S1 + 43) = prefactor_y * *(b + 20 * OS1_S1 + 25) -
                                      p_over_q * *(b + 36 * OS1_S1 + 25);
            *(b + 20 * OS1_S1 + 44) =
                prefactor_x * *(b + 20 * OS1_S1 + 29) -
                p_over_q * *(b + 35 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 29) +
                one_over_two_q * *(b + 20 * OS1_S1 + 19);
            *(b + 20 * OS1_S1 + 45) =
                prefactor_x * *(b + 20 * OS1_S1 + 30) -
                p_over_q * *(b + 35 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 30);
            *(b + 20 * OS1_S1 + 46) = prefactor_z * *(b + 20 * OS1_S1 + 26) -
                                      p_over_q * *(b + 37 * OS1_S1 + 26);
            *(b + 20 * OS1_S1 + 47) =
                prefactor_x * *(b + 20 * OS1_S1 + 32) -
                p_over_q * *(b + 35 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 32);
            *(b + 20 * OS1_S1 + 48) = prefactor_y * *(b + 20 * OS1_S1 + 29) -
                                      p_over_q * *(b + 36 * OS1_S1 + 29);
            *(b + 20 * OS1_S1 + 49) =
                prefactor_x * *(b + 20 * OS1_S1 + 34) -
                p_over_q * *(b + 35 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 34);
            *(b + 20 * OS1_S1 + 50) =
                prefactor_y * *(b + 20 * OS1_S1 + 30) -
                p_over_q * *(b + 36 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 20 * OS1_S1 + 16);
            *(b + 20 * OS1_S1 + 51) = prefactor_z * *(b + 20 * OS1_S1 + 30) -
                                      p_over_q * *(b + 37 * OS1_S1 + 30);
            *(b + 20 * OS1_S1 + 52) = prefactor_z * *(b + 20 * OS1_S1 + 31) -
                                      p_over_q * *(b + 37 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 16);
            *(b + 20 * OS1_S1 + 53) = prefactor_y * *(b + 20 * OS1_S1 + 33) -
                                      p_over_q * *(b + 36 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 19);
            *(b + 20 * OS1_S1 + 54) = prefactor_y * *(b + 20 * OS1_S1 + 34) -
                                      p_over_q * *(b + 36 * OS1_S1 + 34);
            *(b + 20 * OS1_S1 + 55) =
                prefactor_z * *(b + 20 * OS1_S1 + 34) -
                p_over_q * *(b + 37 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 20 * OS1_S1 + 19);
            *(b + 21 * OS1_S1 + 35) =
                prefactor_x * *(b + 21 * OS1_S1 + 20) -
                p_over_q * *(b + 36 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 10);
            *(b + 21 * OS1_S1 + 36) = prefactor_y * *(b + 21 * OS1_S1 + 20) -
                                      p_over_q * *(b + 38 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 20);
            *(b + 21 * OS1_S1 + 37) = prefactor_z * *(b + 21 * OS1_S1 + 20) -
                                      p_over_q * *(b + 39 * OS1_S1 + 20);
            *(b + 21 * OS1_S1 + 38) = prefactor_y * *(b + 21 * OS1_S1 + 21) -
                                      p_over_q * *(b + 38 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 10);
            *(b + 21 * OS1_S1 + 39) = prefactor_z * *(b + 21 * OS1_S1 + 21) -
                                      p_over_q * *(b + 39 * OS1_S1 + 21);
            *(b + 21 * OS1_S1 + 40) = prefactor_z * *(b + 21 * OS1_S1 + 22) -
                                      p_over_q * *(b + 39 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 10);
            *(b + 21 * OS1_S1 + 41) =
                prefactor_x * *(b + 21 * OS1_S1 + 26) -
                p_over_q * *(b + 36 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 26) +
                one_over_two_q * *(b + 21 * OS1_S1 + 16);
            *(b + 21 * OS1_S1 + 42) = prefactor_z * *(b + 21 * OS1_S1 + 23) -
                                      p_over_q * *(b + 39 * OS1_S1 + 23);
            *(b + 21 * OS1_S1 + 43) = prefactor_y * *(b + 21 * OS1_S1 + 25) -
                                      p_over_q * *(b + 38 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 25);
            *(b + 21 * OS1_S1 + 44) =
                prefactor_x * *(b + 21 * OS1_S1 + 29) -
                p_over_q * *(b + 36 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 29) +
                one_over_two_q * *(b + 21 * OS1_S1 + 19);
            *(b + 21 * OS1_S1 + 45) =
                prefactor_x * *(b + 21 * OS1_S1 + 30) -
                p_over_q * *(b + 36 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 30);
            *(b + 21 * OS1_S1 + 46) = prefactor_z * *(b + 21 * OS1_S1 + 26) -
                                      p_over_q * *(b + 39 * OS1_S1 + 26);
            *(b + 21 * OS1_S1 + 47) =
                prefactor_x * *(b + 21 * OS1_S1 + 32) -
                p_over_q * *(b + 36 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 32);
            *(b + 21 * OS1_S1 + 48) = prefactor_y * *(b + 21 * OS1_S1 + 29) -
                                      p_over_q * *(b + 38 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 29);
            *(b + 21 * OS1_S1 + 49) =
                prefactor_x * *(b + 21 * OS1_S1 + 34) -
                p_over_q * *(b + 36 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 34);
            *(b + 21 * OS1_S1 + 50) =
                prefactor_y * *(b + 21 * OS1_S1 + 30) -
                p_over_q * *(b + 38 * OS1_S1 + 30) +
                one_over_two_q * *(b + 10 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 16);
            *(b + 21 * OS1_S1 + 51) = prefactor_z * *(b + 21 * OS1_S1 + 30) -
                                      p_over_q * *(b + 39 * OS1_S1 + 30);
            *(b + 21 * OS1_S1 + 52) = prefactor_z * *(b + 21 * OS1_S1 + 31) -
                                      p_over_q * *(b + 39 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 16);
            *(b + 21 * OS1_S1 + 53) = prefactor_y * *(b + 21 * OS1_S1 + 33) -
                                      p_over_q * *(b + 38 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 19);
            *(b + 21 * OS1_S1 + 54) = prefactor_y * *(b + 21 * OS1_S1 + 34) -
                                      p_over_q * *(b + 38 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 34);
            *(b + 21 * OS1_S1 + 55) =
                prefactor_z * *(b + 21 * OS1_S1 + 34) -
                p_over_q * *(b + 39 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 19);
            *(b + 22 * OS1_S1 + 35) =
                prefactor_x * *(b + 22 * OS1_S1 + 20) -
                p_over_q * *(b + 37 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 10);
            *(b + 22 * OS1_S1 + 36) = prefactor_y * *(b + 22 * OS1_S1 + 20) -
                                      p_over_q * *(b + 39 * OS1_S1 + 20);
            *(b + 22 * OS1_S1 + 37) = prefactor_z * *(b + 22 * OS1_S1 + 20) -
                                      p_over_q * *(b + 40 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 20);
            *(b + 22 * OS1_S1 + 38) = prefactor_y * *(b + 22 * OS1_S1 + 21) -
                                      p_over_q * *(b + 39 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 10);
            *(b + 22 * OS1_S1 + 39) = prefactor_y * *(b + 22 * OS1_S1 + 22) -
                                      p_over_q * *(b + 39 * OS1_S1 + 22);
            *(b + 22 * OS1_S1 + 40) = prefactor_z * *(b + 22 * OS1_S1 + 22) -
                                      p_over_q * *(b + 40 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 10);
            *(b + 22 * OS1_S1 + 41) =
                prefactor_x * *(b + 22 * OS1_S1 + 26) -
                p_over_q * *(b + 37 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 26) +
                one_over_two_q * *(b + 22 * OS1_S1 + 16);
            *(b + 22 * OS1_S1 + 42) = prefactor_z * *(b + 22 * OS1_S1 + 23) -
                                      p_over_q * *(b + 40 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 23);
            *(b + 22 * OS1_S1 + 43) = prefactor_y * *(b + 22 * OS1_S1 + 25) -
                                      p_over_q * *(b + 39 * OS1_S1 + 25);
            *(b + 22 * OS1_S1 + 44) =
                prefactor_x * *(b + 22 * OS1_S1 + 29) -
                p_over_q * *(b + 37 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 29) +
                one_over_two_q * *(b + 22 * OS1_S1 + 19);
            *(b + 22 * OS1_S1 + 45) =
                prefactor_x * *(b + 22 * OS1_S1 + 30) -
                p_over_q * *(b + 37 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 30);
            *(b + 22 * OS1_S1 + 46) = prefactor_z * *(b + 22 * OS1_S1 + 26) -
                                      p_over_q * *(b + 40 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 26);
            *(b + 22 * OS1_S1 + 47) =
                prefactor_x * *(b + 22 * OS1_S1 + 32) -
                p_over_q * *(b + 37 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 32);
            *(b + 22 * OS1_S1 + 48) = prefactor_y * *(b + 22 * OS1_S1 + 29) -
                                      p_over_q * *(b + 39 * OS1_S1 + 29);
            *(b + 22 * OS1_S1 + 49) =
                prefactor_x * *(b + 22 * OS1_S1 + 34) -
                p_over_q * *(b + 37 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 34);
            *(b + 22 * OS1_S1 + 50) =
                prefactor_y * *(b + 22 * OS1_S1 + 30) -
                p_over_q * *(b + 39 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 16);
            *(b + 22 * OS1_S1 + 51) = prefactor_z * *(b + 22 * OS1_S1 + 30) -
                                      p_over_q * *(b + 40 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 30);
            *(b + 22 * OS1_S1 + 52) = prefactor_z * *(b + 22 * OS1_S1 + 31) -
                                      p_over_q * *(b + 40 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 16);
            *(b + 22 * OS1_S1 + 53) = prefactor_y * *(b + 22 * OS1_S1 + 33) -
                                      p_over_q * *(b + 39 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 19);
            *(b + 22 * OS1_S1 + 54) = prefactor_y * *(b + 22 * OS1_S1 + 34) -
                                      p_over_q * *(b + 39 * OS1_S1 + 34);
            *(b + 22 * OS1_S1 + 55) =
                prefactor_z * *(b + 22 * OS1_S1 + 34) -
                p_over_q * *(b + 40 * OS1_S1 + 34) +
                one_over_two_q * *(b + 10 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 19);
            *(b + 23 * OS1_S1 + 35) =
                prefactor_x * *(b + 23 * OS1_S1 + 20) -
                p_over_q * *(b + 38 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 23 * OS1_S1 + 10);
            *(b + 23 * OS1_S1 + 36) =
                prefactor_y * *(b + 23 * OS1_S1 + 20) -
                p_over_q * *(b + 41 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 20);
            *(b + 23 * OS1_S1 + 37) = prefactor_z * *(b + 23 * OS1_S1 + 20) -
                                      p_over_q * *(b + 42 * OS1_S1 + 20);
            *(b + 23 * OS1_S1 + 38) =
                prefactor_y * *(b + 23 * OS1_S1 + 21) -
                p_over_q * *(b + 41 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 21) +
                one_over_two_q * *(b + 23 * OS1_S1 + 10);
            *(b + 23 * OS1_S1 + 39) = prefactor_z * *(b + 23 * OS1_S1 + 21) -
                                      p_over_q * *(b + 42 * OS1_S1 + 21);
            *(b + 23 * OS1_S1 + 40) = prefactor_z * *(b + 23 * OS1_S1 + 22) -
                                      p_over_q * *(b + 42 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 10);
            *(b + 23 * OS1_S1 + 41) =
                prefactor_x * *(b + 23 * OS1_S1 + 26) -
                p_over_q * *(b + 38 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 26) +
                one_over_two_q * *(b + 23 * OS1_S1 + 16);
            *(b + 23 * OS1_S1 + 42) = prefactor_z * *(b + 23 * OS1_S1 + 23) -
                                      p_over_q * *(b + 42 * OS1_S1 + 23);
            *(b + 23 * OS1_S1 + 43) =
                prefactor_y * *(b + 23 * OS1_S1 + 25) -
                p_over_q * *(b + 41 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 25);
            *(b + 23 * OS1_S1 + 44) =
                prefactor_x * *(b + 23 * OS1_S1 + 29) -
                p_over_q * *(b + 38 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 29) +
                one_over_two_q * *(b + 23 * OS1_S1 + 19);
            *(b + 23 * OS1_S1 + 45) =
                prefactor_x * *(b + 23 * OS1_S1 + 30) -
                p_over_q * *(b + 38 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 30);
            *(b + 23 * OS1_S1 + 46) = prefactor_z * *(b + 23 * OS1_S1 + 26) -
                                      p_over_q * *(b + 42 * OS1_S1 + 26);
            *(b + 23 * OS1_S1 + 47) =
                prefactor_x * *(b + 23 * OS1_S1 + 32) -
                p_over_q * *(b + 38 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 32);
            *(b + 23 * OS1_S1 + 48) =
                prefactor_y * *(b + 23 * OS1_S1 + 29) -
                p_over_q * *(b + 41 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 29);
            *(b + 23 * OS1_S1 + 49) =
                prefactor_x * *(b + 23 * OS1_S1 + 34) -
                p_over_q * *(b + 38 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 34);
            *(b + 23 * OS1_S1 + 50) =
                prefactor_y * *(b + 23 * OS1_S1 + 30) -
                p_over_q * *(b + 41 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 23 * OS1_S1 + 16);
            *(b + 23 * OS1_S1 + 51) = prefactor_z * *(b + 23 * OS1_S1 + 30) -
                                      p_over_q * *(b + 42 * OS1_S1 + 30);
            *(b + 23 * OS1_S1 + 52) = prefactor_z * *(b + 23 * OS1_S1 + 31) -
                                      p_over_q * *(b + 42 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 16);
            *(b + 23 * OS1_S1 + 53) =
                prefactor_y * *(b + 23 * OS1_S1 + 33) -
                p_over_q * *(b + 41 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 33) +
                one_over_two_q * *(b + 23 * OS1_S1 + 19);
            *(b + 23 * OS1_S1 + 54) =
                prefactor_y * *(b + 23 * OS1_S1 + 34) -
                p_over_q * *(b + 41 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 34);
            *(b + 23 * OS1_S1 + 55) =
                prefactor_z * *(b + 23 * OS1_S1 + 34) -
                p_over_q * *(b + 42 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 23 * OS1_S1 + 19);
            *(b + 24 * OS1_S1 + 35) =
                prefactor_x * *(b + 24 * OS1_S1 + 20) -
                p_over_q * *(b + 39 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 24 * OS1_S1 + 10);
            *(b + 24 * OS1_S1 + 36) = prefactor_y * *(b + 24 * OS1_S1 + 20) -
                                      p_over_q * *(b + 42 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 20);
            *(b + 24 * OS1_S1 + 37) = prefactor_z * *(b + 24 * OS1_S1 + 20) -
                                      p_over_q * *(b + 43 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 20);
            *(b + 24 * OS1_S1 + 38) = prefactor_y * *(b + 24 * OS1_S1 + 21) -
                                      p_over_q * *(b + 42 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 10);
            *(b + 24 * OS1_S1 + 39) = prefactor_z * *(b + 24 * OS1_S1 + 21) -
                                      p_over_q * *(b + 43 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 21);
            *(b + 24 * OS1_S1 + 40) = prefactor_z * *(b + 24 * OS1_S1 + 22) -
                                      p_over_q * *(b + 43 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 10);
            *(b + 24 * OS1_S1 + 41) =
                prefactor_x * *(b + 24 * OS1_S1 + 26) -
                p_over_q * *(b + 39 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 26) +
                one_over_two_q * *(b + 24 * OS1_S1 + 16);
            *(b + 24 * OS1_S1 + 42) = prefactor_z * *(b + 24 * OS1_S1 + 23) -
                                      p_over_q * *(b + 43 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 23);
            *(b + 24 * OS1_S1 + 43) = prefactor_y * *(b + 24 * OS1_S1 + 25) -
                                      p_over_q * *(b + 42 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 25);
            *(b + 24 * OS1_S1 + 44) =
                prefactor_x * *(b + 24 * OS1_S1 + 29) -
                p_over_q * *(b + 39 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 29) +
                one_over_two_q * *(b + 24 * OS1_S1 + 19);
            *(b + 24 * OS1_S1 + 45) =
                prefactor_x * *(b + 24 * OS1_S1 + 30) -
                p_over_q * *(b + 39 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 30);
            *(b + 24 * OS1_S1 + 46) = prefactor_z * *(b + 24 * OS1_S1 + 26) -
                                      p_over_q * *(b + 43 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 26);
            *(b + 24 * OS1_S1 + 47) =
                prefactor_x * *(b + 24 * OS1_S1 + 32) -
                p_over_q * *(b + 39 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 32);
            *(b + 24 * OS1_S1 + 48) = prefactor_y * *(b + 24 * OS1_S1 + 29) -
                                      p_over_q * *(b + 42 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 29);
            *(b + 24 * OS1_S1 + 49) =
                prefactor_x * *(b + 24 * OS1_S1 + 34) -
                p_over_q * *(b + 39 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 34);
            *(b + 24 * OS1_S1 + 50) =
                prefactor_y * *(b + 24 * OS1_S1 + 30) -
                p_over_q * *(b + 42 * OS1_S1 + 30) +
                one_over_two_q * *(b + 12 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 24 * OS1_S1 + 16);
            *(b + 24 * OS1_S1 + 51) = prefactor_z * *(b + 24 * OS1_S1 + 30) -
                                      p_over_q * *(b + 43 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 30);
            *(b + 24 * OS1_S1 + 52) = prefactor_z * *(b + 24 * OS1_S1 + 31) -
                                      p_over_q * *(b + 43 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 16);
            *(b + 24 * OS1_S1 + 53) = prefactor_y * *(b + 24 * OS1_S1 + 33) -
                                      p_over_q * *(b + 42 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 19);
            *(b + 24 * OS1_S1 + 54) = prefactor_y * *(b + 24 * OS1_S1 + 34) -
                                      p_over_q * *(b + 42 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 34);
            *(b + 24 * OS1_S1 + 55) =
                prefactor_z * *(b + 24 * OS1_S1 + 34) -
                p_over_q * *(b + 43 * OS1_S1 + 34) +
                one_over_two_q * *(b + 11 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 24 * OS1_S1 + 19);
            *(b + 25 * OS1_S1 + 35) =
                prefactor_x * *(b + 25 * OS1_S1 + 20) -
                p_over_q * *(b + 40 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 25 * OS1_S1 + 10);
            *(b + 25 * OS1_S1 + 36) = prefactor_y * *(b + 25 * OS1_S1 + 20) -
                                      p_over_q * *(b + 43 * OS1_S1 + 20);
            *(b + 25 * OS1_S1 + 37) =
                prefactor_z * *(b + 25 * OS1_S1 + 20) -
                p_over_q * *(b + 44 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 20);
            *(b + 25 * OS1_S1 + 38) = prefactor_y * *(b + 25 * OS1_S1 + 21) -
                                      p_over_q * *(b + 43 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 10);
            *(b + 25 * OS1_S1 + 39) = prefactor_y * *(b + 25 * OS1_S1 + 22) -
                                      p_over_q * *(b + 43 * OS1_S1 + 22);
            *(b + 25 * OS1_S1 + 40) =
                prefactor_z * *(b + 25 * OS1_S1 + 22) -
                p_over_q * *(b + 44 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 22) +
                one_over_two_q * *(b + 25 * OS1_S1 + 10);
            *(b + 25 * OS1_S1 + 41) =
                prefactor_x * *(b + 25 * OS1_S1 + 26) -
                p_over_q * *(b + 40 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 26) +
                one_over_two_q * *(b + 25 * OS1_S1 + 16);
            *(b + 25 * OS1_S1 + 42) =
                prefactor_z * *(b + 25 * OS1_S1 + 23) -
                p_over_q * *(b + 44 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 23);
            *(b + 25 * OS1_S1 + 43) = prefactor_y * *(b + 25 * OS1_S1 + 25) -
                                      p_over_q * *(b + 43 * OS1_S1 + 25);
            *(b + 25 * OS1_S1 + 44) =
                prefactor_x * *(b + 25 * OS1_S1 + 29) -
                p_over_q * *(b + 40 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 29) +
                one_over_two_q * *(b + 25 * OS1_S1 + 19);
            *(b + 25 * OS1_S1 + 45) =
                prefactor_x * *(b + 25 * OS1_S1 + 30) -
                p_over_q * *(b + 40 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 30);
            *(b + 25 * OS1_S1 + 46) =
                prefactor_z * *(b + 25 * OS1_S1 + 26) -
                p_over_q * *(b + 44 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 26);
            *(b + 25 * OS1_S1 + 47) =
                prefactor_x * *(b + 25 * OS1_S1 + 32) -
                p_over_q * *(b + 40 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 32);
            *(b + 25 * OS1_S1 + 48) = prefactor_y * *(b + 25 * OS1_S1 + 29) -
                                      p_over_q * *(b + 43 * OS1_S1 + 29);
            *(b + 25 * OS1_S1 + 49) =
                prefactor_x * *(b + 25 * OS1_S1 + 34) -
                p_over_q * *(b + 40 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 34);
            *(b + 25 * OS1_S1 + 50) =
                prefactor_y * *(b + 25 * OS1_S1 + 30) -
                p_over_q * *(b + 43 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 25 * OS1_S1 + 16);
            *(b + 25 * OS1_S1 + 51) =
                prefactor_z * *(b + 25 * OS1_S1 + 30) -
                p_over_q * *(b + 44 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 30);
            *(b + 25 * OS1_S1 + 52) =
                prefactor_z * *(b + 25 * OS1_S1 + 31) -
                p_over_q * *(b + 44 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 31) +
                one_over_two_q * *(b + 25 * OS1_S1 + 16);
            *(b + 25 * OS1_S1 + 53) = prefactor_y * *(b + 25 * OS1_S1 + 33) -
                                      p_over_q * *(b + 43 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 19);
            *(b + 25 * OS1_S1 + 54) = prefactor_y * *(b + 25 * OS1_S1 + 34) -
                                      p_over_q * *(b + 43 * OS1_S1 + 34);
            *(b + 25 * OS1_S1 + 55) =
                prefactor_z * *(b + 25 * OS1_S1 + 34) -
                p_over_q * *(b + 44 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 25 * OS1_S1 + 19);
            *(b + 26 * OS1_S1 + 35) =
                prefactor_x * *(b + 26 * OS1_S1 + 20) -
                p_over_q * *(b + 41 * OS1_S1 + 20) +
                one_over_two_q * *(b + 16 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 10);
            *(b + 26 * OS1_S1 + 36) =
                prefactor_y * *(b + 26 * OS1_S1 + 20) -
                p_over_q * *(b + 45 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 20);
            *(b + 26 * OS1_S1 + 37) = prefactor_z * *(b + 26 * OS1_S1 + 20) -
                                      p_over_q * *(b + 46 * OS1_S1 + 20);
            *(b + 26 * OS1_S1 + 38) =
                prefactor_y * *(b + 26 * OS1_S1 + 21) -
                p_over_q * *(b + 45 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 21) +
                one_over_two_q * *(b + 26 * OS1_S1 + 10);
            *(b + 26 * OS1_S1 + 39) = prefactor_z * *(b + 26 * OS1_S1 + 21) -
                                      p_over_q * *(b + 46 * OS1_S1 + 21);
            *(b + 26 * OS1_S1 + 40) = prefactor_z * *(b + 26 * OS1_S1 + 22) -
                                      p_over_q * *(b + 46 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 10);
            *(b + 26 * OS1_S1 + 41) = prefactor_x * *(b + 26 * OS1_S1 + 26) -
                                      p_over_q * *(b + 41 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 16);
            *(b + 26 * OS1_S1 + 42) = prefactor_z * *(b + 26 * OS1_S1 + 23) -
                                      p_over_q * *(b + 46 * OS1_S1 + 23);
            *(b + 26 * OS1_S1 + 43) =
                prefactor_y * *(b + 26 * OS1_S1 + 25) -
                p_over_q * *(b + 45 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 25);
            *(b + 26 * OS1_S1 + 44) = prefactor_x * *(b + 26 * OS1_S1 + 29) -
                                      p_over_q * *(b + 41 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 19);
            *(b + 26 * OS1_S1 + 45) = prefactor_x * *(b + 26 * OS1_S1 + 30) -
                                      p_over_q * *(b + 41 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 30);
            *(b + 26 * OS1_S1 + 46) = prefactor_z * *(b + 26 * OS1_S1 + 26) -
                                      p_over_q * *(b + 46 * OS1_S1 + 26);
            *(b + 26 * OS1_S1 + 47) = prefactor_x * *(b + 26 * OS1_S1 + 32) -
                                      p_over_q * *(b + 41 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 32);
            *(b + 26 * OS1_S1 + 48) = prefactor_x * *(b + 26 * OS1_S1 + 33) -
                                      p_over_q * *(b + 41 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 33);
            *(b + 26 * OS1_S1 + 49) = prefactor_x * *(b + 26 * OS1_S1 + 34) -
                                      p_over_q * *(b + 41 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 34);
            *(b + 26 * OS1_S1 + 50) =
                prefactor_y * *(b + 26 * OS1_S1 + 30) -
                p_over_q * *(b + 45 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 16);
            *(b + 26 * OS1_S1 + 51) = prefactor_z * *(b + 26 * OS1_S1 + 30) -
                                      p_over_q * *(b + 46 * OS1_S1 + 30);
            *(b + 26 * OS1_S1 + 52) = prefactor_z * *(b + 26 * OS1_S1 + 31) -
                                      p_over_q * *(b + 46 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 16);
            *(b + 26 * OS1_S1 + 53) =
                prefactor_y * *(b + 26 * OS1_S1 + 33) -
                p_over_q * *(b + 45 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 33) +
                one_over_two_q * *(b + 26 * OS1_S1 + 19);
            *(b + 26 * OS1_S1 + 54) =
                prefactor_y * *(b + 26 * OS1_S1 + 34) -
                p_over_q * *(b + 45 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 34);
            *(b + 26 * OS1_S1 + 55) =
                prefactor_z * *(b + 26 * OS1_S1 + 34) -
                p_over_q * *(b + 46 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 19);
            *(b + 27 * OS1_S1 + 35) =
                prefactor_x * *(b + 27 * OS1_S1 + 20) -
                p_over_q * *(b + 42 * OS1_S1 + 20) +
                one_over_two_q * *(b + 17 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 27 * OS1_S1 + 10);
            *(b + 27 * OS1_S1 + 36) =
                prefactor_y * *(b + 27 * OS1_S1 + 20) -
                p_over_q * *(b + 46 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 20);
            *(b + 27 * OS1_S1 + 37) = prefactor_z * *(b + 27 * OS1_S1 + 20) -
                                      p_over_q * *(b + 47 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 20);
            *(b + 27 * OS1_S1 + 38) =
                prefactor_y * *(b + 27 * OS1_S1 + 21) -
                p_over_q * *(b + 46 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 21) +
                one_over_two_q * *(b + 27 * OS1_S1 + 10);
            *(b + 27 * OS1_S1 + 39) = prefactor_z * *(b + 27 * OS1_S1 + 21) -
                                      p_over_q * *(b + 47 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 21);
            *(b + 27 * OS1_S1 + 40) = prefactor_z * *(b + 27 * OS1_S1 + 22) -
                                      p_over_q * *(b + 47 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 10);
            *(b + 27 * OS1_S1 + 41) = prefactor_x * *(b + 27 * OS1_S1 + 26) -
                                      p_over_q * *(b + 42 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 16);
            *(b + 27 * OS1_S1 + 42) = prefactor_z * *(b + 27 * OS1_S1 + 23) -
                                      p_over_q * *(b + 47 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 23);
            *(b + 27 * OS1_S1 + 43) =
                prefactor_y * *(b + 27 * OS1_S1 + 25) -
                p_over_q * *(b + 46 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 25);
            *(b + 27 * OS1_S1 + 44) = prefactor_x * *(b + 27 * OS1_S1 + 29) -
                                      p_over_q * *(b + 42 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 19);
            *(b + 27 * OS1_S1 + 45) = prefactor_x * *(b + 27 * OS1_S1 + 30) -
                                      p_over_q * *(b + 42 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 30);
            *(b + 27 * OS1_S1 + 46) = prefactor_z * *(b + 27 * OS1_S1 + 26) -
                                      p_over_q * *(b + 47 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 26);
            *(b + 27 * OS1_S1 + 47) = prefactor_x * *(b + 27 * OS1_S1 + 32) -
                                      p_over_q * *(b + 42 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 32);
            *(b + 27 * OS1_S1 + 48) = prefactor_x * *(b + 27 * OS1_S1 + 33) -
                                      p_over_q * *(b + 42 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 33);
            *(b + 27 * OS1_S1 + 49) = prefactor_x * *(b + 27 * OS1_S1 + 34) -
                                      p_over_q * *(b + 42 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 34);
            *(b + 27 * OS1_S1 + 50) =
                prefactor_y * *(b + 27 * OS1_S1 + 30) -
                p_over_q * *(b + 46 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 27 * OS1_S1 + 16);
            *(b + 27 * OS1_S1 + 51) = prefactor_z * *(b + 27 * OS1_S1 + 30) -
                                      p_over_q * *(b + 47 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 30);
            *(b + 27 * OS1_S1 + 52) = prefactor_z * *(b + 27 * OS1_S1 + 31) -
                                      p_over_q * *(b + 47 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 16);
            *(b + 27 * OS1_S1 + 53) =
                prefactor_y * *(b + 27 * OS1_S1 + 33) -
                p_over_q * *(b + 46 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 33) +
                one_over_two_q * *(b + 27 * OS1_S1 + 19);
            *(b + 27 * OS1_S1 + 54) =
                prefactor_y * *(b + 27 * OS1_S1 + 34) -
                p_over_q * *(b + 46 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 34);
            *(b + 27 * OS1_S1 + 55) =
                prefactor_z * *(b + 27 * OS1_S1 + 34) -
                p_over_q * *(b + 47 * OS1_S1 + 34) +
                one_over_two_q * *(b + 13 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 27 * OS1_S1 + 19);
            *(b + 28 * OS1_S1 + 35) =
                prefactor_x * *(b + 28 * OS1_S1 + 20) -
                p_over_q * *(b + 43 * OS1_S1 + 20) +
                one_over_two_q * *(b + 18 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 28 * OS1_S1 + 10);
            *(b + 28 * OS1_S1 + 36) = prefactor_y * *(b + 28 * OS1_S1 + 20) -
                                      p_over_q * *(b + 47 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 20);
            *(b + 28 * OS1_S1 + 37) =
                prefactor_z * *(b + 28 * OS1_S1 + 20) -
                p_over_q * *(b + 48 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 20);
            *(b + 28 * OS1_S1 + 38) = prefactor_y * *(b + 28 * OS1_S1 + 21) -
                                      p_over_q * *(b + 47 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 10);
            *(b + 28 * OS1_S1 + 39) = prefactor_y * *(b + 28 * OS1_S1 + 22) -
                                      p_over_q * *(b + 47 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 22);
            *(b + 28 * OS1_S1 + 40) =
                prefactor_z * *(b + 28 * OS1_S1 + 22) -
                p_over_q * *(b + 48 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 22) +
                one_over_two_q * *(b + 28 * OS1_S1 + 10);
            *(b + 28 * OS1_S1 + 41) = prefactor_x * *(b + 28 * OS1_S1 + 26) -
                                      p_over_q * *(b + 43 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 16);
            *(b + 28 * OS1_S1 + 42) =
                prefactor_z * *(b + 28 * OS1_S1 + 23) -
                p_over_q * *(b + 48 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 23);
            *(b + 28 * OS1_S1 + 43) = prefactor_y * *(b + 28 * OS1_S1 + 25) -
                                      p_over_q * *(b + 47 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 25);
            *(b + 28 * OS1_S1 + 44) = prefactor_x * *(b + 28 * OS1_S1 + 29) -
                                      p_over_q * *(b + 43 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 19);
            *(b + 28 * OS1_S1 + 45) = prefactor_x * *(b + 28 * OS1_S1 + 30) -
                                      p_over_q * *(b + 43 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 30);
            *(b + 28 * OS1_S1 + 46) = prefactor_x * *(b + 28 * OS1_S1 + 31) -
                                      p_over_q * *(b + 43 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 31);
            *(b + 28 * OS1_S1 + 47) = prefactor_x * *(b + 28 * OS1_S1 + 32) -
                                      p_over_q * *(b + 43 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 32);
            *(b + 28 * OS1_S1 + 48) = prefactor_y * *(b + 28 * OS1_S1 + 29) -
                                      p_over_q * *(b + 47 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 29);
            *(b + 28 * OS1_S1 + 49) = prefactor_x * *(b + 28 * OS1_S1 + 34) -
                                      p_over_q * *(b + 43 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 34);
            *(b + 28 * OS1_S1 + 50) =
                prefactor_y * *(b + 28 * OS1_S1 + 30) -
                p_over_q * *(b + 47 * OS1_S1 + 30) +
                one_over_two_q * *(b + 15 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 28 * OS1_S1 + 16);
            *(b + 28 * OS1_S1 + 51) =
                prefactor_z * *(b + 28 * OS1_S1 + 30) -
                p_over_q * *(b + 48 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 30);
            *(b + 28 * OS1_S1 + 52) =
                prefactor_z * *(b + 28 * OS1_S1 + 31) -
                p_over_q * *(b + 48 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 31) +
                one_over_two_q * *(b + 28 * OS1_S1 + 16);
            *(b + 28 * OS1_S1 + 53) = prefactor_y * *(b + 28 * OS1_S1 + 33) -
                                      p_over_q * *(b + 47 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 19);
            *(b + 28 * OS1_S1 + 54) = prefactor_y * *(b + 28 * OS1_S1 + 34) -
                                      p_over_q * *(b + 47 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 34);
            *(b + 28 * OS1_S1 + 55) =
                prefactor_z * *(b + 28 * OS1_S1 + 34) -
                p_over_q * *(b + 48 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 28 * OS1_S1 + 19);
            *(b + 29 * OS1_S1 + 35) =
                prefactor_x * *(b + 29 * OS1_S1 + 20) -
                p_over_q * *(b + 44 * OS1_S1 + 20) +
                one_over_two_q * *(b + 19 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 10);
            *(b + 29 * OS1_S1 + 36) = prefactor_y * *(b + 29 * OS1_S1 + 20) -
                                      p_over_q * *(b + 48 * OS1_S1 + 20);
            *(b + 29 * OS1_S1 + 37) =
                prefactor_z * *(b + 29 * OS1_S1 + 20) -
                p_over_q * *(b + 49 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 20);
            *(b + 29 * OS1_S1 + 38) = prefactor_y * *(b + 29 * OS1_S1 + 21) -
                                      p_over_q * *(b + 48 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 10);
            *(b + 29 * OS1_S1 + 39) = prefactor_y * *(b + 29 * OS1_S1 + 22) -
                                      p_over_q * *(b + 48 * OS1_S1 + 22);
            *(b + 29 * OS1_S1 + 40) =
                prefactor_z * *(b + 29 * OS1_S1 + 22) -
                p_over_q * *(b + 49 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 22) +
                one_over_two_q * *(b + 29 * OS1_S1 + 10);
            *(b + 29 * OS1_S1 + 41) = prefactor_x * *(b + 29 * OS1_S1 + 26) -
                                      p_over_q * *(b + 44 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 16);
            *(b + 29 * OS1_S1 + 42) =
                prefactor_z * *(b + 29 * OS1_S1 + 23) -
                p_over_q * *(b + 49 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 23);
            *(b + 29 * OS1_S1 + 43) = prefactor_y * *(b + 29 * OS1_S1 + 25) -
                                      p_over_q * *(b + 48 * OS1_S1 + 25);
            *(b + 29 * OS1_S1 + 44) = prefactor_x * *(b + 29 * OS1_S1 + 29) -
                                      p_over_q * *(b + 44 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 19);
            *(b + 29 * OS1_S1 + 45) = prefactor_x * *(b + 29 * OS1_S1 + 30) -
                                      p_over_q * *(b + 44 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 30);
            *(b + 29 * OS1_S1 + 46) = prefactor_x * *(b + 29 * OS1_S1 + 31) -
                                      p_over_q * *(b + 44 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 31);
            *(b + 29 * OS1_S1 + 47) = prefactor_x * *(b + 29 * OS1_S1 + 32) -
                                      p_over_q * *(b + 44 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 32);
            *(b + 29 * OS1_S1 + 48) = prefactor_y * *(b + 29 * OS1_S1 + 29) -
                                      p_over_q * *(b + 48 * OS1_S1 + 29);
            *(b + 29 * OS1_S1 + 49) = prefactor_x * *(b + 29 * OS1_S1 + 34) -
                                      p_over_q * *(b + 44 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 34);
            *(b + 29 * OS1_S1 + 50) =
                prefactor_y * *(b + 29 * OS1_S1 + 30) -
                p_over_q * *(b + 48 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 16);
            *(b + 29 * OS1_S1 + 51) =
                prefactor_z * *(b + 29 * OS1_S1 + 30) -
                p_over_q * *(b + 49 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 30);
            *(b + 29 * OS1_S1 + 52) =
                prefactor_z * *(b + 29 * OS1_S1 + 31) -
                p_over_q * *(b + 49 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 31) +
                one_over_two_q * *(b + 29 * OS1_S1 + 16);
            *(b + 29 * OS1_S1 + 53) = prefactor_y * *(b + 29 * OS1_S1 + 33) -
                                      p_over_q * *(b + 48 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 19);
            *(b + 29 * OS1_S1 + 54) = prefactor_y * *(b + 29 * OS1_S1 + 34) -
                                      p_over_q * *(b + 48 * OS1_S1 + 34);
            *(b + 29 * OS1_S1 + 55) =
                prefactor_z * *(b + 29 * OS1_S1 + 34) -
                p_over_q * *(b + 49 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 19);
            *(b + 30 * OS1_S1 + 35) =
                prefactor_x * *(b + 30 * OS1_S1 + 20) -
                p_over_q * *(b + 45 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 30 * OS1_S1 + 10);
            *(b + 30 * OS1_S1 + 36) =
                prefactor_y * *(b + 30 * OS1_S1 + 20) -
                p_over_q * *(b + 50 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 20);
            *(b + 30 * OS1_S1 + 37) = prefactor_z * *(b + 30 * OS1_S1 + 20) -
                                      p_over_q * *(b + 51 * OS1_S1 + 20);
            *(b + 30 * OS1_S1 + 38) =
                prefactor_y * *(b + 30 * OS1_S1 + 21) -
                p_over_q * *(b + 50 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 21) +
                one_over_two_q * *(b + 30 * OS1_S1 + 10);
            *(b + 30 * OS1_S1 + 39) = prefactor_z * *(b + 30 * OS1_S1 + 21) -
                                      p_over_q * *(b + 51 * OS1_S1 + 21);
            *(b + 30 * OS1_S1 + 40) = prefactor_z * *(b + 30 * OS1_S1 + 22) -
                                      p_over_q * *(b + 51 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 10);
            *(b + 30 * OS1_S1 + 41) = prefactor_x * *(b + 30 * OS1_S1 + 26) -
                                      p_over_q * *(b + 45 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 16);
            *(b + 30 * OS1_S1 + 42) = prefactor_z * *(b + 30 * OS1_S1 + 23) -
                                      p_over_q * *(b + 51 * OS1_S1 + 23);
            *(b + 30 * OS1_S1 + 43) =
                prefactor_y * *(b + 30 * OS1_S1 + 25) -
                p_over_q * *(b + 50 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 25);
            *(b + 30 * OS1_S1 + 44) = prefactor_x * *(b + 30 * OS1_S1 + 29) -
                                      p_over_q * *(b + 45 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 19);
            *(b + 30 * OS1_S1 + 45) = prefactor_x * *(b + 30 * OS1_S1 + 30) -
                                      p_over_q * *(b + 45 * OS1_S1 + 30);
            *(b + 30 * OS1_S1 + 46) = prefactor_z * *(b + 30 * OS1_S1 + 26) -
                                      p_over_q * *(b + 51 * OS1_S1 + 26);
            *(b + 30 * OS1_S1 + 47) = prefactor_x * *(b + 30 * OS1_S1 + 32) -
                                      p_over_q * *(b + 45 * OS1_S1 + 32);
            *(b + 30 * OS1_S1 + 48) = prefactor_x * *(b + 30 * OS1_S1 + 33) -
                                      p_over_q * *(b + 45 * OS1_S1 + 33);
            *(b + 30 * OS1_S1 + 49) = prefactor_x * *(b + 30 * OS1_S1 + 34) -
                                      p_over_q * *(b + 45 * OS1_S1 + 34);
            *(b + 30 * OS1_S1 + 50) =
                prefactor_y * *(b + 30 * OS1_S1 + 30) -
                p_over_q * *(b + 50 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 30 * OS1_S1 + 16);
            *(b + 30 * OS1_S1 + 51) = prefactor_z * *(b + 30 * OS1_S1 + 30) -
                                      p_over_q * *(b + 51 * OS1_S1 + 30);
            *(b + 30 * OS1_S1 + 52) = prefactor_z * *(b + 30 * OS1_S1 + 31) -
                                      p_over_q * *(b + 51 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 16);
            *(b + 30 * OS1_S1 + 53) =
                prefactor_y * *(b + 30 * OS1_S1 + 33) -
                p_over_q * *(b + 50 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 33) +
                one_over_two_q * *(b + 30 * OS1_S1 + 19);
            *(b + 30 * OS1_S1 + 54) =
                prefactor_y * *(b + 30 * OS1_S1 + 34) -
                p_over_q * *(b + 50 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 34);
            *(b + 30 * OS1_S1 + 55) =
                prefactor_z * *(b + 30 * OS1_S1 + 34) -
                p_over_q * *(b + 51 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 30 * OS1_S1 + 19);
            *(b + 31 * OS1_S1 + 35) =
                prefactor_x * *(b + 31 * OS1_S1 + 20) -
                p_over_q * *(b + 46 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 10);
            *(b + 31 * OS1_S1 + 36) =
                prefactor_y * *(b + 31 * OS1_S1 + 20) -
                p_over_q * *(b + 51 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 20);
            *(b + 31 * OS1_S1 + 37) = prefactor_z * *(b + 31 * OS1_S1 + 20) -
                                      p_over_q * *(b + 52 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 20);
            *(b + 31 * OS1_S1 + 38) =
                prefactor_y * *(b + 31 * OS1_S1 + 21) -
                p_over_q * *(b + 51 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 21) +
                one_over_two_q * *(b + 31 * OS1_S1 + 10);
            *(b + 31 * OS1_S1 + 39) = prefactor_z * *(b + 31 * OS1_S1 + 21) -
                                      p_over_q * *(b + 52 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 21);
            *(b + 31 * OS1_S1 + 40) = prefactor_z * *(b + 31 * OS1_S1 + 22) -
                                      p_over_q * *(b + 52 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 10);
            *(b + 31 * OS1_S1 + 41) = prefactor_x * *(b + 31 * OS1_S1 + 26) -
                                      p_over_q * *(b + 46 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 16);
            *(b + 31 * OS1_S1 + 42) = prefactor_z * *(b + 31 * OS1_S1 + 23) -
                                      p_over_q * *(b + 52 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 23);
            *(b + 31 * OS1_S1 + 43) =
                prefactor_y * *(b + 31 * OS1_S1 + 25) -
                p_over_q * *(b + 51 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 25);
            *(b + 31 * OS1_S1 + 44) = prefactor_x * *(b + 31 * OS1_S1 + 29) -
                                      p_over_q * *(b + 46 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 19);
            *(b + 31 * OS1_S1 + 45) = prefactor_x * *(b + 31 * OS1_S1 + 30) -
                                      p_over_q * *(b + 46 * OS1_S1 + 30);
            *(b + 31 * OS1_S1 + 46) = prefactor_x * *(b + 31 * OS1_S1 + 31) -
                                      p_over_q * *(b + 46 * OS1_S1 + 31);
            *(b + 31 * OS1_S1 + 47) = prefactor_x * *(b + 31 * OS1_S1 + 32) -
                                      p_over_q * *(b + 46 * OS1_S1 + 32);
            *(b + 31 * OS1_S1 + 48) = prefactor_x * *(b + 31 * OS1_S1 + 33) -
                                      p_over_q * *(b + 46 * OS1_S1 + 33);
            *(b + 31 * OS1_S1 + 49) = prefactor_x * *(b + 31 * OS1_S1 + 34) -
                                      p_over_q * *(b + 46 * OS1_S1 + 34);
            *(b + 31 * OS1_S1 + 50) =
                prefactor_y * *(b + 31 * OS1_S1 + 30) -
                p_over_q * *(b + 51 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 16);
            *(b + 31 * OS1_S1 + 51) = prefactor_z * *(b + 31 * OS1_S1 + 30) -
                                      p_over_q * *(b + 52 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 30);
            *(b + 31 * OS1_S1 + 52) = prefactor_z * *(b + 31 * OS1_S1 + 31) -
                                      p_over_q * *(b + 52 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 16);
            *(b + 31 * OS1_S1 + 53) =
                prefactor_y * *(b + 31 * OS1_S1 + 33) -
                p_over_q * *(b + 51 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 33) +
                one_over_two_q * *(b + 31 * OS1_S1 + 19);
            *(b + 31 * OS1_S1 + 54) =
                prefactor_y * *(b + 31 * OS1_S1 + 34) -
                p_over_q * *(b + 51 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 34);
            *(b + 31 * OS1_S1 + 55) =
                prefactor_z * *(b + 31 * OS1_S1 + 34) -
                p_over_q * *(b + 52 * OS1_S1 + 34) +
                one_over_two_q * *(b + 16 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 19);
            *(b + 32 * OS1_S1 + 35) =
                prefactor_x * *(b + 32 * OS1_S1 + 20) -
                p_over_q * *(b + 47 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 32 * OS1_S1 + 10);
            *(b + 32 * OS1_S1 + 36) =
                prefactor_y * *(b + 32 * OS1_S1 + 20) -
                p_over_q * *(b + 52 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 20);
            *(b + 32 * OS1_S1 + 37) =
                prefactor_z * *(b + 32 * OS1_S1 + 20) -
                p_over_q * *(b + 53 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 20);
            *(b + 32 * OS1_S1 + 38) =
                prefactor_y * *(b + 32 * OS1_S1 + 21) -
                p_over_q * *(b + 52 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 21) +
                one_over_two_q * *(b + 32 * OS1_S1 + 10);
            *(b + 32 * OS1_S1 + 39) =
                prefactor_z * *(b + 32 * OS1_S1 + 21) -
                p_over_q * *(b + 53 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 21);
            *(b + 32 * OS1_S1 + 40) =
                prefactor_z * *(b + 32 * OS1_S1 + 22) -
                p_over_q * *(b + 53 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 22) +
                one_over_two_q * *(b + 32 * OS1_S1 + 10);
            *(b + 32 * OS1_S1 + 41) = prefactor_x * *(b + 32 * OS1_S1 + 26) -
                                      p_over_q * *(b + 47 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 16);
            *(b + 32 * OS1_S1 + 42) =
                prefactor_z * *(b + 32 * OS1_S1 + 23) -
                p_over_q * *(b + 53 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 23);
            *(b + 32 * OS1_S1 + 43) =
                prefactor_y * *(b + 32 * OS1_S1 + 25) -
                p_over_q * *(b + 52 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 25);
            *(b + 32 * OS1_S1 + 44) = prefactor_x * *(b + 32 * OS1_S1 + 29) -
                                      p_over_q * *(b + 47 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 19);
            *(b + 32 * OS1_S1 + 45) = prefactor_x * *(b + 32 * OS1_S1 + 30) -
                                      p_over_q * *(b + 47 * OS1_S1 + 30);
            *(b + 32 * OS1_S1 + 46) = prefactor_x * *(b + 32 * OS1_S1 + 31) -
                                      p_over_q * *(b + 47 * OS1_S1 + 31);
            *(b + 32 * OS1_S1 + 47) = prefactor_x * *(b + 32 * OS1_S1 + 32) -
                                      p_over_q * *(b + 47 * OS1_S1 + 32);
            *(b + 32 * OS1_S1 + 48) = prefactor_x * *(b + 32 * OS1_S1 + 33) -
                                      p_over_q * *(b + 47 * OS1_S1 + 33);
            *(b + 32 * OS1_S1 + 49) = prefactor_x * *(b + 32 * OS1_S1 + 34) -
                                      p_over_q * *(b + 47 * OS1_S1 + 34);
            *(b + 32 * OS1_S1 + 50) =
                prefactor_y * *(b + 32 * OS1_S1 + 30) -
                p_over_q * *(b + 52 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 32 * OS1_S1 + 16);
            *(b + 32 * OS1_S1 + 51) =
                prefactor_z * *(b + 32 * OS1_S1 + 30) -
                p_over_q * *(b + 53 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 30);
            *(b + 32 * OS1_S1 + 52) =
                prefactor_z * *(b + 32 * OS1_S1 + 31) -
                p_over_q * *(b + 53 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 31) +
                one_over_two_q * *(b + 32 * OS1_S1 + 16);
            *(b + 32 * OS1_S1 + 53) =
                prefactor_y * *(b + 32 * OS1_S1 + 33) -
                p_over_q * *(b + 52 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 33) +
                one_over_two_q * *(b + 32 * OS1_S1 + 19);
            *(b + 32 * OS1_S1 + 54) =
                prefactor_y * *(b + 32 * OS1_S1 + 34) -
                p_over_q * *(b + 52 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 34);
            *(b + 32 * OS1_S1 + 55) =
                prefactor_z * *(b + 32 * OS1_S1 + 34) -
                p_over_q * *(b + 53 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 32 * OS1_S1 + 19);
            *(b + 33 * OS1_S1 + 35) =
                prefactor_x * *(b + 33 * OS1_S1 + 20) -
                p_over_q * *(b + 48 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 10);
            *(b + 33 * OS1_S1 + 36) = prefactor_y * *(b + 33 * OS1_S1 + 20) -
                                      p_over_q * *(b + 53 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 20);
            *(b + 33 * OS1_S1 + 37) =
                prefactor_z * *(b + 33 * OS1_S1 + 20) -
                p_over_q * *(b + 54 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 20);
            *(b + 33 * OS1_S1 + 38) = prefactor_y * *(b + 33 * OS1_S1 + 21) -
                                      p_over_q * *(b + 53 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 10);
            *(b + 33 * OS1_S1 + 39) = prefactor_y * *(b + 33 * OS1_S1 + 22) -
                                      p_over_q * *(b + 53 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 22);
            *(b + 33 * OS1_S1 + 40) =
                prefactor_z * *(b + 33 * OS1_S1 + 22) -
                p_over_q * *(b + 54 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 22) +
                one_over_two_q * *(b + 33 * OS1_S1 + 10);
            *(b + 33 * OS1_S1 + 41) = prefactor_x * *(b + 33 * OS1_S1 + 26) -
                                      p_over_q * *(b + 48 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 16);
            *(b + 33 * OS1_S1 + 42) =
                prefactor_z * *(b + 33 * OS1_S1 + 23) -
                p_over_q * *(b + 54 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 23);
            *(b + 33 * OS1_S1 + 43) = prefactor_y * *(b + 33 * OS1_S1 + 25) -
                                      p_over_q * *(b + 53 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 25);
            *(b + 33 * OS1_S1 + 44) = prefactor_x * *(b + 33 * OS1_S1 + 29) -
                                      p_over_q * *(b + 48 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 19);
            *(b + 33 * OS1_S1 + 45) = prefactor_x * *(b + 33 * OS1_S1 + 30) -
                                      p_over_q * *(b + 48 * OS1_S1 + 30);
            *(b + 33 * OS1_S1 + 46) = prefactor_x * *(b + 33 * OS1_S1 + 31) -
                                      p_over_q * *(b + 48 * OS1_S1 + 31);
            *(b + 33 * OS1_S1 + 47) = prefactor_x * *(b + 33 * OS1_S1 + 32) -
                                      p_over_q * *(b + 48 * OS1_S1 + 32);
            *(b + 33 * OS1_S1 + 48) = prefactor_x * *(b + 33 * OS1_S1 + 33) -
                                      p_over_q * *(b + 48 * OS1_S1 + 33);
            *(b + 33 * OS1_S1 + 49) = prefactor_x * *(b + 33 * OS1_S1 + 34) -
                                      p_over_q * *(b + 48 * OS1_S1 + 34);
            *(b + 33 * OS1_S1 + 50) =
                prefactor_y * *(b + 33 * OS1_S1 + 30) -
                p_over_q * *(b + 53 * OS1_S1 + 30) +
                one_over_two_q * *(b + 19 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 16);
            *(b + 33 * OS1_S1 + 51) =
                prefactor_z * *(b + 33 * OS1_S1 + 30) -
                p_over_q * *(b + 54 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 30);
            *(b + 33 * OS1_S1 + 52) =
                prefactor_z * *(b + 33 * OS1_S1 + 31) -
                p_over_q * *(b + 54 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 31) +
                one_over_two_q * *(b + 33 * OS1_S1 + 16);
            *(b + 33 * OS1_S1 + 53) = prefactor_y * *(b + 33 * OS1_S1 + 33) -
                                      p_over_q * *(b + 53 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 19);
            *(b + 33 * OS1_S1 + 54) = prefactor_y * *(b + 33 * OS1_S1 + 34) -
                                      p_over_q * *(b + 53 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 34);
            *(b + 33 * OS1_S1 + 55) =
                prefactor_z * *(b + 33 * OS1_S1 + 34) -
                p_over_q * *(b + 54 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 19);
            *(b + 34 * OS1_S1 + 35) =
                prefactor_x * *(b + 34 * OS1_S1 + 20) -
                p_over_q * *(b + 49 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 34 * OS1_S1 + 10);
            *(b + 34 * OS1_S1 + 36) = prefactor_y * *(b + 34 * OS1_S1 + 20) -
                                      p_over_q * *(b + 54 * OS1_S1 + 20);
            *(b + 34 * OS1_S1 + 37) =
                prefactor_z * *(b + 34 * OS1_S1 + 20) -
                p_over_q * *(b + 55 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 20);
            *(b + 34 * OS1_S1 + 38) = prefactor_y * *(b + 34 * OS1_S1 + 21) -
                                      p_over_q * *(b + 54 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 10);
            *(b + 34 * OS1_S1 + 39) = prefactor_y * *(b + 34 * OS1_S1 + 22) -
                                      p_over_q * *(b + 54 * OS1_S1 + 22);
            *(b + 34 * OS1_S1 + 40) =
                prefactor_z * *(b + 34 * OS1_S1 + 22) -
                p_over_q * *(b + 55 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 22) +
                one_over_two_q * *(b + 34 * OS1_S1 + 10);
            *(b + 34 * OS1_S1 + 41) = prefactor_x * *(b + 34 * OS1_S1 + 26) -
                                      p_over_q * *(b + 49 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 16);
            *(b + 34 * OS1_S1 + 42) =
                prefactor_z * *(b + 34 * OS1_S1 + 23) -
                p_over_q * *(b + 55 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 23);
            *(b + 34 * OS1_S1 + 43) = prefactor_y * *(b + 34 * OS1_S1 + 25) -
                                      p_over_q * *(b + 54 * OS1_S1 + 25);
            *(b + 34 * OS1_S1 + 44) = prefactor_x * *(b + 34 * OS1_S1 + 29) -
                                      p_over_q * *(b + 49 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 19);
            *(b + 34 * OS1_S1 + 45) = prefactor_x * *(b + 34 * OS1_S1 + 30) -
                                      p_over_q * *(b + 49 * OS1_S1 + 30);
            *(b + 34 * OS1_S1 + 46) = prefactor_x * *(b + 34 * OS1_S1 + 31) -
                                      p_over_q * *(b + 49 * OS1_S1 + 31);
            *(b + 34 * OS1_S1 + 47) = prefactor_x * *(b + 34 * OS1_S1 + 32) -
                                      p_over_q * *(b + 49 * OS1_S1 + 32);
            *(b + 34 * OS1_S1 + 48) = prefactor_y * *(b + 34 * OS1_S1 + 29) -
                                      p_over_q * *(b + 54 * OS1_S1 + 29);
            *(b + 34 * OS1_S1 + 49) = prefactor_x * *(b + 34 * OS1_S1 + 34) -
                                      p_over_q * *(b + 49 * OS1_S1 + 34);
            *(b + 34 * OS1_S1 + 50) =
                prefactor_y * *(b + 34 * OS1_S1 + 30) -
                p_over_q * *(b + 54 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 34 * OS1_S1 + 16);
            *(b + 34 * OS1_S1 + 51) =
                prefactor_z * *(b + 34 * OS1_S1 + 30) -
                p_over_q * *(b + 55 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 30);
            *(b + 34 * OS1_S1 + 52) =
                prefactor_z * *(b + 34 * OS1_S1 + 31) -
                p_over_q * *(b + 55 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 31) +
                one_over_two_q * *(b + 34 * OS1_S1 + 16);
            *(b + 34 * OS1_S1 + 53) = prefactor_y * *(b + 34 * OS1_S1 + 33) -
                                      p_over_q * *(b + 54 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 19);
            *(b + 34 * OS1_S1 + 54) = prefactor_y * *(b + 34 * OS1_S1 + 34) -
                                      p_over_q * *(b + 54 * OS1_S1 + 34);
            *(b + 34 * OS1_S1 + 55) =
                prefactor_z * *(b + 34 * OS1_S1 + 34) -
                p_over_q * *(b + 55 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 34 * OS1_S1 + 19);
            return;
        }

        void transfer_5(const unsigned first_min,
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
                transfer_0_5(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 0)
                    break;
            case 1:
                transfer_1_5(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 1)
                    break;
            case 2:
                transfer_2_5(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 2)
                    break;
            case 3:
                transfer_3_5(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 3)
                    break;
            case 4:
                transfer_4_5(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 4)
                    break;
            case 5:
                transfer_5_5(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 5)
                    break;
            case 6:
                transfer_6_5(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 6)
                    break;
            case 7:
                transfer_7_5(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 7)
                    break;
            case 8:
                transfer_8_5(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 8)
                    break;
            case 9:
                transfer_9_5(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 9)
                    break;
            case 10:
                transfer_10_5(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              b);
                if (first_max == 10)
                    break;
            case 11:
                transfer_11_5(prefactor_x,
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
