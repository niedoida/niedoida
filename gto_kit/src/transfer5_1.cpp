/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_5_5(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 35 * OS1_S1 + 35) =
                prefactor_x * *(b + 35 * OS1_S1 + 20) -
                p_over_q * *(b + 56 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 35 * OS1_S1 + 10);
            *(b + 35 * OS1_S1 + 36) = prefactor_y * *(b + 35 * OS1_S1 + 20) -
                                      p_over_q * *(b + 57 * OS1_S1 + 20);
            *(b + 35 * OS1_S1 + 37) = prefactor_z * *(b + 35 * OS1_S1 + 20) -
                                      p_over_q * *(b + 58 * OS1_S1 + 20);
            *(b + 35 * OS1_S1 + 38) = prefactor_y * *(b + 35 * OS1_S1 + 21) -
                                      p_over_q * *(b + 57 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 10);
            *(b + 35 * OS1_S1 + 39) = prefactor_z * *(b + 35 * OS1_S1 + 21) -
                                      p_over_q * *(b + 58 * OS1_S1 + 21);
            *(b + 35 * OS1_S1 + 40) = prefactor_z * *(b + 35 * OS1_S1 + 22) -
                                      p_over_q * *(b + 58 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 10);
            *(b + 35 * OS1_S1 + 41) =
                prefactor_x * *(b + 35 * OS1_S1 + 26) -
                p_over_q * *(b + 56 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 26) +
                one_over_two_q * *(b + 35 * OS1_S1 + 16);
            *(b + 35 * OS1_S1 + 42) = prefactor_z * *(b + 35 * OS1_S1 + 23) -
                                      p_over_q * *(b + 58 * OS1_S1 + 23);
            *(b + 35 * OS1_S1 + 43) = prefactor_y * *(b + 35 * OS1_S1 + 25) -
                                      p_over_q * *(b + 57 * OS1_S1 + 25);
            *(b + 35 * OS1_S1 + 44) =
                prefactor_x * *(b + 35 * OS1_S1 + 29) -
                p_over_q * *(b + 56 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 29) +
                one_over_two_q * *(b + 35 * OS1_S1 + 19);
            *(b + 35 * OS1_S1 + 45) =
                prefactor_x * *(b + 35 * OS1_S1 + 30) -
                p_over_q * *(b + 56 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 30);
            *(b + 35 * OS1_S1 + 46) = prefactor_z * *(b + 35 * OS1_S1 + 26) -
                                      p_over_q * *(b + 58 * OS1_S1 + 26);
            *(b + 35 * OS1_S1 + 47) =
                prefactor_x * *(b + 35 * OS1_S1 + 32) -
                p_over_q * *(b + 56 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 32);
            *(b + 35 * OS1_S1 + 48) = prefactor_y * *(b + 35 * OS1_S1 + 29) -
                                      p_over_q * *(b + 57 * OS1_S1 + 29);
            *(b + 35 * OS1_S1 + 49) =
                prefactor_x * *(b + 35 * OS1_S1 + 34) -
                p_over_q * *(b + 56 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 34);
            *(b + 35 * OS1_S1 + 50) =
                prefactor_y * *(b + 35 * OS1_S1 + 30) -
                p_over_q * *(b + 57 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 35 * OS1_S1 + 16);
            *(b + 35 * OS1_S1 + 51) = prefactor_z * *(b + 35 * OS1_S1 + 30) -
                                      p_over_q * *(b + 58 * OS1_S1 + 30);
            *(b + 35 * OS1_S1 + 52) = prefactor_z * *(b + 35 * OS1_S1 + 31) -
                                      p_over_q * *(b + 58 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 16);
            *(b + 35 * OS1_S1 + 53) = prefactor_y * *(b + 35 * OS1_S1 + 33) -
                                      p_over_q * *(b + 57 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 19);
            *(b + 35 * OS1_S1 + 54) = prefactor_y * *(b + 35 * OS1_S1 + 34) -
                                      p_over_q * *(b + 57 * OS1_S1 + 34);
            *(b + 35 * OS1_S1 + 55) =
                prefactor_z * *(b + 35 * OS1_S1 + 34) -
                p_over_q * *(b + 58 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 35 * OS1_S1 + 19);
            *(b + 36 * OS1_S1 + 35) =
                prefactor_x * *(b + 36 * OS1_S1 + 20) -
                p_over_q * *(b + 57 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 36 * OS1_S1 + 10);
            *(b + 36 * OS1_S1 + 36) = prefactor_y * *(b + 36 * OS1_S1 + 20) -
                                      p_over_q * *(b + 59 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 20);
            *(b + 36 * OS1_S1 + 37) = prefactor_z * *(b + 36 * OS1_S1 + 20) -
                                      p_over_q * *(b + 60 * OS1_S1 + 20);
            *(b + 36 * OS1_S1 + 38) = prefactor_y * *(b + 36 * OS1_S1 + 21) -
                                      p_over_q * *(b + 59 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 10);
            *(b + 36 * OS1_S1 + 39) = prefactor_z * *(b + 36 * OS1_S1 + 21) -
                                      p_over_q * *(b + 60 * OS1_S1 + 21);
            *(b + 36 * OS1_S1 + 40) = prefactor_z * *(b + 36 * OS1_S1 + 22) -
                                      p_over_q * *(b + 60 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 10);
            *(b + 36 * OS1_S1 + 41) =
                prefactor_x * *(b + 36 * OS1_S1 + 26) -
                p_over_q * *(b + 57 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 26) +
                one_over_two_q * *(b + 36 * OS1_S1 + 16);
            *(b + 36 * OS1_S1 + 42) = prefactor_z * *(b + 36 * OS1_S1 + 23) -
                                      p_over_q * *(b + 60 * OS1_S1 + 23);
            *(b + 36 * OS1_S1 + 43) = prefactor_y * *(b + 36 * OS1_S1 + 25) -
                                      p_over_q * *(b + 59 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 25);
            *(b + 36 * OS1_S1 + 44) =
                prefactor_x * *(b + 36 * OS1_S1 + 29) -
                p_over_q * *(b + 57 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 29) +
                one_over_two_q * *(b + 36 * OS1_S1 + 19);
            *(b + 36 * OS1_S1 + 45) =
                prefactor_x * *(b + 36 * OS1_S1 + 30) -
                p_over_q * *(b + 57 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 30);
            *(b + 36 * OS1_S1 + 46) = prefactor_z * *(b + 36 * OS1_S1 + 26) -
                                      p_over_q * *(b + 60 * OS1_S1 + 26);
            *(b + 36 * OS1_S1 + 47) =
                prefactor_x * *(b + 36 * OS1_S1 + 32) -
                p_over_q * *(b + 57 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 32);
            *(b + 36 * OS1_S1 + 48) = prefactor_y * *(b + 36 * OS1_S1 + 29) -
                                      p_over_q * *(b + 59 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 29);
            *(b + 36 * OS1_S1 + 49) =
                prefactor_x * *(b + 36 * OS1_S1 + 34) -
                p_over_q * *(b + 57 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 34);
            *(b + 36 * OS1_S1 + 50) =
                prefactor_y * *(b + 36 * OS1_S1 + 30) -
                p_over_q * *(b + 59 * OS1_S1 + 30) +
                one_over_two_q * *(b + 20 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 36 * OS1_S1 + 16);
            *(b + 36 * OS1_S1 + 51) = prefactor_z * *(b + 36 * OS1_S1 + 30) -
                                      p_over_q * *(b + 60 * OS1_S1 + 30);
            *(b + 36 * OS1_S1 + 52) = prefactor_z * *(b + 36 * OS1_S1 + 31) -
                                      p_over_q * *(b + 60 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 16);
            *(b + 36 * OS1_S1 + 53) = prefactor_y * *(b + 36 * OS1_S1 + 33) -
                                      p_over_q * *(b + 59 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 19);
            *(b + 36 * OS1_S1 + 54) = prefactor_y * *(b + 36 * OS1_S1 + 34) -
                                      p_over_q * *(b + 59 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 34);
            *(b + 36 * OS1_S1 + 55) =
                prefactor_z * *(b + 36 * OS1_S1 + 34) -
                p_over_q * *(b + 60 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 36 * OS1_S1 + 19);
            *(b + 37 * OS1_S1 + 35) =
                prefactor_x * *(b + 37 * OS1_S1 + 20) -
                p_over_q * *(b + 58 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 37 * OS1_S1 + 10);
            *(b + 37 * OS1_S1 + 36) = prefactor_y * *(b + 37 * OS1_S1 + 20) -
                                      p_over_q * *(b + 60 * OS1_S1 + 20);
            *(b + 37 * OS1_S1 + 37) = prefactor_z * *(b + 37 * OS1_S1 + 20) -
                                      p_over_q * *(b + 61 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 20);
            *(b + 37 * OS1_S1 + 38) = prefactor_y * *(b + 37 * OS1_S1 + 21) -
                                      p_over_q * *(b + 60 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 10);
            *(b + 37 * OS1_S1 + 39) = prefactor_y * *(b + 37 * OS1_S1 + 22) -
                                      p_over_q * *(b + 60 * OS1_S1 + 22);
            *(b + 37 * OS1_S1 + 40) = prefactor_z * *(b + 37 * OS1_S1 + 22) -
                                      p_over_q * *(b + 61 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 10);
            *(b + 37 * OS1_S1 + 41) =
                prefactor_x * *(b + 37 * OS1_S1 + 26) -
                p_over_q * *(b + 58 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 26) +
                one_over_two_q * *(b + 37 * OS1_S1 + 16);
            *(b + 37 * OS1_S1 + 42) = prefactor_z * *(b + 37 * OS1_S1 + 23) -
                                      p_over_q * *(b + 61 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 23);
            *(b + 37 * OS1_S1 + 43) = prefactor_y * *(b + 37 * OS1_S1 + 25) -
                                      p_over_q * *(b + 60 * OS1_S1 + 25);
            *(b + 37 * OS1_S1 + 44) =
                prefactor_x * *(b + 37 * OS1_S1 + 29) -
                p_over_q * *(b + 58 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 29) +
                one_over_two_q * *(b + 37 * OS1_S1 + 19);
            *(b + 37 * OS1_S1 + 45) =
                prefactor_x * *(b + 37 * OS1_S1 + 30) -
                p_over_q * *(b + 58 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 30);
            *(b + 37 * OS1_S1 + 46) = prefactor_z * *(b + 37 * OS1_S1 + 26) -
                                      p_over_q * *(b + 61 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 26);
            *(b + 37 * OS1_S1 + 47) =
                prefactor_x * *(b + 37 * OS1_S1 + 32) -
                p_over_q * *(b + 58 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 32);
            *(b + 37 * OS1_S1 + 48) = prefactor_y * *(b + 37 * OS1_S1 + 29) -
                                      p_over_q * *(b + 60 * OS1_S1 + 29);
            *(b + 37 * OS1_S1 + 49) =
                prefactor_x * *(b + 37 * OS1_S1 + 34) -
                p_over_q * *(b + 58 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 34);
            *(b + 37 * OS1_S1 + 50) =
                prefactor_y * *(b + 37 * OS1_S1 + 30) -
                p_over_q * *(b + 60 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 37 * OS1_S1 + 16);
            *(b + 37 * OS1_S1 + 51) = prefactor_z * *(b + 37 * OS1_S1 + 30) -
                                      p_over_q * *(b + 61 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 30);
            *(b + 37 * OS1_S1 + 52) = prefactor_z * *(b + 37 * OS1_S1 + 31) -
                                      p_over_q * *(b + 61 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 16);
            *(b + 37 * OS1_S1 + 53) = prefactor_y * *(b + 37 * OS1_S1 + 33) -
                                      p_over_q * *(b + 60 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 19);
            *(b + 37 * OS1_S1 + 54) = prefactor_y * *(b + 37 * OS1_S1 + 34) -
                                      p_over_q * *(b + 60 * OS1_S1 + 34);
            *(b + 37 * OS1_S1 + 55) =
                prefactor_z * *(b + 37 * OS1_S1 + 34) -
                p_over_q * *(b + 61 * OS1_S1 + 34) +
                one_over_two_q * *(b + 20 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 37 * OS1_S1 + 19);
            *(b + 38 * OS1_S1 + 35) =
                prefactor_x * *(b + 38 * OS1_S1 + 20) -
                p_over_q * *(b + 59 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 10);
            *(b + 38 * OS1_S1 + 36) =
                prefactor_y * *(b + 38 * OS1_S1 + 20) -
                p_over_q * *(b + 62 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 20);
            *(b + 38 * OS1_S1 + 37) = prefactor_z * *(b + 38 * OS1_S1 + 20) -
                                      p_over_q * *(b + 63 * OS1_S1 + 20);
            *(b + 38 * OS1_S1 + 38) =
                prefactor_y * *(b + 38 * OS1_S1 + 21) -
                p_over_q * *(b + 62 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 21) +
                one_over_two_q * *(b + 38 * OS1_S1 + 10);
            *(b + 38 * OS1_S1 + 39) = prefactor_z * *(b + 38 * OS1_S1 + 21) -
                                      p_over_q * *(b + 63 * OS1_S1 + 21);
            *(b + 38 * OS1_S1 + 40) = prefactor_z * *(b + 38 * OS1_S1 + 22) -
                                      p_over_q * *(b + 63 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 10);
            *(b + 38 * OS1_S1 + 41) =
                prefactor_x * *(b + 38 * OS1_S1 + 26) -
                p_over_q * *(b + 59 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 26) +
                one_over_two_q * *(b + 38 * OS1_S1 + 16);
            *(b + 38 * OS1_S1 + 42) = prefactor_z * *(b + 38 * OS1_S1 + 23) -
                                      p_over_q * *(b + 63 * OS1_S1 + 23);
            *(b + 38 * OS1_S1 + 43) =
                prefactor_y * *(b + 38 * OS1_S1 + 25) -
                p_over_q * *(b + 62 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 25);
            *(b + 38 * OS1_S1 + 44) =
                prefactor_x * *(b + 38 * OS1_S1 + 29) -
                p_over_q * *(b + 59 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 29) +
                one_over_two_q * *(b + 38 * OS1_S1 + 19);
            *(b + 38 * OS1_S1 + 45) =
                prefactor_x * *(b + 38 * OS1_S1 + 30) -
                p_over_q * *(b + 59 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 30);
            *(b + 38 * OS1_S1 + 46) = prefactor_z * *(b + 38 * OS1_S1 + 26) -
                                      p_over_q * *(b + 63 * OS1_S1 + 26);
            *(b + 38 * OS1_S1 + 47) =
                prefactor_x * *(b + 38 * OS1_S1 + 32) -
                p_over_q * *(b + 59 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 32);
            *(b + 38 * OS1_S1 + 48) =
                prefactor_y * *(b + 38 * OS1_S1 + 29) -
                p_over_q * *(b + 62 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 29);
            *(b + 38 * OS1_S1 + 49) =
                prefactor_x * *(b + 38 * OS1_S1 + 34) -
                p_over_q * *(b + 59 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 34);
            *(b + 38 * OS1_S1 + 50) =
                prefactor_y * *(b + 38 * OS1_S1 + 30) -
                p_over_q * *(b + 62 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 16);
            *(b + 38 * OS1_S1 + 51) = prefactor_z * *(b + 38 * OS1_S1 + 30) -
                                      p_over_q * *(b + 63 * OS1_S1 + 30);
            *(b + 38 * OS1_S1 + 52) = prefactor_z * *(b + 38 * OS1_S1 + 31) -
                                      p_over_q * *(b + 63 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 16);
            *(b + 38 * OS1_S1 + 53) =
                prefactor_y * *(b + 38 * OS1_S1 + 33) -
                p_over_q * *(b + 62 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 33) +
                one_over_two_q * *(b + 38 * OS1_S1 + 19);
            *(b + 38 * OS1_S1 + 54) =
                prefactor_y * *(b + 38 * OS1_S1 + 34) -
                p_over_q * *(b + 62 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 34);
            *(b + 38 * OS1_S1 + 55) =
                prefactor_z * *(b + 38 * OS1_S1 + 34) -
                p_over_q * *(b + 63 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 19);
            *(b + 39 * OS1_S1 + 35) =
                prefactor_x * *(b + 39 * OS1_S1 + 20) -
                p_over_q * *(b + 60 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 10);
            *(b + 39 * OS1_S1 + 36) = prefactor_y * *(b + 39 * OS1_S1 + 20) -
                                      p_over_q * *(b + 63 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 20);
            *(b + 39 * OS1_S1 + 37) = prefactor_z * *(b + 39 * OS1_S1 + 20) -
                                      p_over_q * *(b + 64 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 20);
            *(b + 39 * OS1_S1 + 38) = prefactor_y * *(b + 39 * OS1_S1 + 21) -
                                      p_over_q * *(b + 63 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 10);
            *(b + 39 * OS1_S1 + 39) = prefactor_z * *(b + 39 * OS1_S1 + 21) -
                                      p_over_q * *(b + 64 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 21);
            *(b + 39 * OS1_S1 + 40) = prefactor_z * *(b + 39 * OS1_S1 + 22) -
                                      p_over_q * *(b + 64 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 10);
            *(b + 39 * OS1_S1 + 41) =
                prefactor_x * *(b + 39 * OS1_S1 + 26) -
                p_over_q * *(b + 60 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 26) +
                one_over_two_q * *(b + 39 * OS1_S1 + 16);
            *(b + 39 * OS1_S1 + 42) = prefactor_z * *(b + 39 * OS1_S1 + 23) -
                                      p_over_q * *(b + 64 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 23);
            *(b + 39 * OS1_S1 + 43) = prefactor_y * *(b + 39 * OS1_S1 + 25) -
                                      p_over_q * *(b + 63 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 25);
            *(b + 39 * OS1_S1 + 44) =
                prefactor_x * *(b + 39 * OS1_S1 + 29) -
                p_over_q * *(b + 60 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 29) +
                one_over_two_q * *(b + 39 * OS1_S1 + 19);
            *(b + 39 * OS1_S1 + 45) =
                prefactor_x * *(b + 39 * OS1_S1 + 30) -
                p_over_q * *(b + 60 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 30);
            *(b + 39 * OS1_S1 + 46) = prefactor_z * *(b + 39 * OS1_S1 + 26) -
                                      p_over_q * *(b + 64 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 26);
            *(b + 39 * OS1_S1 + 47) =
                prefactor_x * *(b + 39 * OS1_S1 + 32) -
                p_over_q * *(b + 60 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 32);
            *(b + 39 * OS1_S1 + 48) = prefactor_y * *(b + 39 * OS1_S1 + 29) -
                                      p_over_q * *(b + 63 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 29);
            *(b + 39 * OS1_S1 + 49) =
                prefactor_x * *(b + 39 * OS1_S1 + 34) -
                p_over_q * *(b + 60 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 34);
            *(b + 39 * OS1_S1 + 50) =
                prefactor_y * *(b + 39 * OS1_S1 + 30) -
                p_over_q * *(b + 63 * OS1_S1 + 30) +
                one_over_two_q * *(b + 22 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 16);
            *(b + 39 * OS1_S1 + 51) = prefactor_z * *(b + 39 * OS1_S1 + 30) -
                                      p_over_q * *(b + 64 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 30);
            *(b + 39 * OS1_S1 + 52) = prefactor_z * *(b + 39 * OS1_S1 + 31) -
                                      p_over_q * *(b + 64 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 16);
            *(b + 39 * OS1_S1 + 53) = prefactor_y * *(b + 39 * OS1_S1 + 33) -
                                      p_over_q * *(b + 63 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 19);
            *(b + 39 * OS1_S1 + 54) = prefactor_y * *(b + 39 * OS1_S1 + 34) -
                                      p_over_q * *(b + 63 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 34);
            *(b + 39 * OS1_S1 + 55) =
                prefactor_z * *(b + 39 * OS1_S1 + 34) -
                p_over_q * *(b + 64 * OS1_S1 + 34) +
                one_over_two_q * *(b + 21 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 19);
            *(b + 40 * OS1_S1 + 35) =
                prefactor_x * *(b + 40 * OS1_S1 + 20) -
                p_over_q * *(b + 61 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 10);
            *(b + 40 * OS1_S1 + 36) = prefactor_y * *(b + 40 * OS1_S1 + 20) -
                                      p_over_q * *(b + 64 * OS1_S1 + 20);
            *(b + 40 * OS1_S1 + 37) =
                prefactor_z * *(b + 40 * OS1_S1 + 20) -
                p_over_q * *(b + 65 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 20);
            *(b + 40 * OS1_S1 + 38) = prefactor_y * *(b + 40 * OS1_S1 + 21) -
                                      p_over_q * *(b + 64 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 10);
            *(b + 40 * OS1_S1 + 39) = prefactor_y * *(b + 40 * OS1_S1 + 22) -
                                      p_over_q * *(b + 64 * OS1_S1 + 22);
            *(b + 40 * OS1_S1 + 40) =
                prefactor_z * *(b + 40 * OS1_S1 + 22) -
                p_over_q * *(b + 65 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 22) +
                one_over_two_q * *(b + 40 * OS1_S1 + 10);
            *(b + 40 * OS1_S1 + 41) =
                prefactor_x * *(b + 40 * OS1_S1 + 26) -
                p_over_q * *(b + 61 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 26) +
                one_over_two_q * *(b + 40 * OS1_S1 + 16);
            *(b + 40 * OS1_S1 + 42) =
                prefactor_z * *(b + 40 * OS1_S1 + 23) -
                p_over_q * *(b + 65 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 23);
            *(b + 40 * OS1_S1 + 43) = prefactor_y * *(b + 40 * OS1_S1 + 25) -
                                      p_over_q * *(b + 64 * OS1_S1 + 25);
            *(b + 40 * OS1_S1 + 44) =
                prefactor_x * *(b + 40 * OS1_S1 + 29) -
                p_over_q * *(b + 61 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 29) +
                one_over_two_q * *(b + 40 * OS1_S1 + 19);
            *(b + 40 * OS1_S1 + 45) =
                prefactor_x * *(b + 40 * OS1_S1 + 30) -
                p_over_q * *(b + 61 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 30);
            *(b + 40 * OS1_S1 + 46) =
                prefactor_z * *(b + 40 * OS1_S1 + 26) -
                p_over_q * *(b + 65 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 26);
            *(b + 40 * OS1_S1 + 47) =
                prefactor_x * *(b + 40 * OS1_S1 + 32) -
                p_over_q * *(b + 61 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 32);
            *(b + 40 * OS1_S1 + 48) = prefactor_y * *(b + 40 * OS1_S1 + 29) -
                                      p_over_q * *(b + 64 * OS1_S1 + 29);
            *(b + 40 * OS1_S1 + 49) =
                prefactor_x * *(b + 40 * OS1_S1 + 34) -
                p_over_q * *(b + 61 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 34);
            *(b + 40 * OS1_S1 + 50) =
                prefactor_y * *(b + 40 * OS1_S1 + 30) -
                p_over_q * *(b + 64 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 16);
            *(b + 40 * OS1_S1 + 51) =
                prefactor_z * *(b + 40 * OS1_S1 + 30) -
                p_over_q * *(b + 65 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 30);
            *(b + 40 * OS1_S1 + 52) =
                prefactor_z * *(b + 40 * OS1_S1 + 31) -
                p_over_q * *(b + 65 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 31) +
                one_over_two_q * *(b + 40 * OS1_S1 + 16);
            *(b + 40 * OS1_S1 + 53) = prefactor_y * *(b + 40 * OS1_S1 + 33) -
                                      p_over_q * *(b + 64 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 19);
            *(b + 40 * OS1_S1 + 54) = prefactor_y * *(b + 40 * OS1_S1 + 34) -
                                      p_over_q * *(b + 64 * OS1_S1 + 34);
            *(b + 40 * OS1_S1 + 55) =
                prefactor_z * *(b + 40 * OS1_S1 + 34) -
                p_over_q * *(b + 65 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 19);
            *(b + 41 * OS1_S1 + 35) =
                prefactor_x * *(b + 41 * OS1_S1 + 20) -
                p_over_q * *(b + 62 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 10);
            *(b + 41 * OS1_S1 + 36) =
                prefactor_y * *(b + 41 * OS1_S1 + 20) -
                p_over_q * *(b + 66 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 20);
            *(b + 41 * OS1_S1 + 37) = prefactor_z * *(b + 41 * OS1_S1 + 20) -
                                      p_over_q * *(b + 67 * OS1_S1 + 20);
            *(b + 41 * OS1_S1 + 38) =
                prefactor_y * *(b + 41 * OS1_S1 + 21) -
                p_over_q * *(b + 66 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 21) +
                one_over_two_q * *(b + 41 * OS1_S1 + 10);
            *(b + 41 * OS1_S1 + 39) = prefactor_z * *(b + 41 * OS1_S1 + 21) -
                                      p_over_q * *(b + 67 * OS1_S1 + 21);
            *(b + 41 * OS1_S1 + 40) = prefactor_z * *(b + 41 * OS1_S1 + 22) -
                                      p_over_q * *(b + 67 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 10);
            *(b + 41 * OS1_S1 + 41) =
                prefactor_x * *(b + 41 * OS1_S1 + 26) -
                p_over_q * *(b + 62 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 26) +
                one_over_two_q * *(b + 41 * OS1_S1 + 16);
            *(b + 41 * OS1_S1 + 42) = prefactor_z * *(b + 41 * OS1_S1 + 23) -
                                      p_over_q * *(b + 67 * OS1_S1 + 23);
            *(b + 41 * OS1_S1 + 43) =
                prefactor_y * *(b + 41 * OS1_S1 + 25) -
                p_over_q * *(b + 66 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 25);
            *(b + 41 * OS1_S1 + 44) =
                prefactor_x * *(b + 41 * OS1_S1 + 29) -
                p_over_q * *(b + 62 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 29) +
                one_over_two_q * *(b + 41 * OS1_S1 + 19);
            *(b + 41 * OS1_S1 + 45) =
                prefactor_x * *(b + 41 * OS1_S1 + 30) -
                p_over_q * *(b + 62 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 30);
            *(b + 41 * OS1_S1 + 46) = prefactor_z * *(b + 41 * OS1_S1 + 26) -
                                      p_over_q * *(b + 67 * OS1_S1 + 26);
            *(b + 41 * OS1_S1 + 47) =
                prefactor_x * *(b + 41 * OS1_S1 + 32) -
                p_over_q * *(b + 62 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 32);
            *(b + 41 * OS1_S1 + 48) =
                prefactor_x * *(b + 41 * OS1_S1 + 33) -
                p_over_q * *(b + 62 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 33);
            *(b + 41 * OS1_S1 + 49) =
                prefactor_x * *(b + 41 * OS1_S1 + 34) -
                p_over_q * *(b + 62 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 34);
            *(b + 41 * OS1_S1 + 50) =
                prefactor_y * *(b + 41 * OS1_S1 + 30) -
                p_over_q * *(b + 66 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 16);
            *(b + 41 * OS1_S1 + 51) = prefactor_z * *(b + 41 * OS1_S1 + 30) -
                                      p_over_q * *(b + 67 * OS1_S1 + 30);
            *(b + 41 * OS1_S1 + 52) = prefactor_z * *(b + 41 * OS1_S1 + 31) -
                                      p_over_q * *(b + 67 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 16);
            *(b + 41 * OS1_S1 + 53) =
                prefactor_y * *(b + 41 * OS1_S1 + 33) -
                p_over_q * *(b + 66 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 33) +
                one_over_two_q * *(b + 41 * OS1_S1 + 19);
            *(b + 41 * OS1_S1 + 54) =
                prefactor_y * *(b + 41 * OS1_S1 + 34) -
                p_over_q * *(b + 66 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 34);
            *(b + 41 * OS1_S1 + 55) =
                prefactor_z * *(b + 41 * OS1_S1 + 34) -
                p_over_q * *(b + 67 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 19);
            *(b + 42 * OS1_S1 + 35) =
                prefactor_x * *(b + 42 * OS1_S1 + 20) -
                p_over_q * *(b + 63 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 42 * OS1_S1 + 10);
            *(b + 42 * OS1_S1 + 36) =
                prefactor_y * *(b + 42 * OS1_S1 + 20) -
                p_over_q * *(b + 67 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 20);
            *(b + 42 * OS1_S1 + 37) = prefactor_z * *(b + 42 * OS1_S1 + 20) -
                                      p_over_q * *(b + 68 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 20);
            *(b + 42 * OS1_S1 + 38) =
                prefactor_y * *(b + 42 * OS1_S1 + 21) -
                p_over_q * *(b + 67 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 21) +
                one_over_two_q * *(b + 42 * OS1_S1 + 10);
            *(b + 42 * OS1_S1 + 39) = prefactor_z * *(b + 42 * OS1_S1 + 21) -
                                      p_over_q * *(b + 68 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 21);
            *(b + 42 * OS1_S1 + 40) = prefactor_z * *(b + 42 * OS1_S1 + 22) -
                                      p_over_q * *(b + 68 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 42 * OS1_S1 + 10);
            *(b + 42 * OS1_S1 + 41) =
                prefactor_x * *(b + 42 * OS1_S1 + 26) -
                p_over_q * *(b + 63 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 26) +
                one_over_two_q * *(b + 42 * OS1_S1 + 16);
            *(b + 42 * OS1_S1 + 42) = prefactor_z * *(b + 42 * OS1_S1 + 23) -
                                      p_over_q * *(b + 68 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 23);
            *(b + 42 * OS1_S1 + 43) =
                prefactor_y * *(b + 42 * OS1_S1 + 25) -
                p_over_q * *(b + 67 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 25);
            *(b + 42 * OS1_S1 + 44) =
                prefactor_x * *(b + 42 * OS1_S1 + 29) -
                p_over_q * *(b + 63 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 29) +
                one_over_two_q * *(b + 42 * OS1_S1 + 19);
            *(b + 42 * OS1_S1 + 45) =
                prefactor_x * *(b + 42 * OS1_S1 + 30) -
                p_over_q * *(b + 63 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 30);
            *(b + 42 * OS1_S1 + 46) = prefactor_z * *(b + 42 * OS1_S1 + 26) -
                                      p_over_q * *(b + 68 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 26);
            *(b + 42 * OS1_S1 + 47) =
                prefactor_x * *(b + 42 * OS1_S1 + 32) -
                p_over_q * *(b + 63 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 32);
            *(b + 42 * OS1_S1 + 48) =
                prefactor_y * *(b + 42 * OS1_S1 + 29) -
                p_over_q * *(b + 67 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 29);
            *(b + 42 * OS1_S1 + 49) =
                prefactor_x * *(b + 42 * OS1_S1 + 34) -
                p_over_q * *(b + 63 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 34);
            *(b + 42 * OS1_S1 + 50) =
                prefactor_y * *(b + 42 * OS1_S1 + 30) -
                p_over_q * *(b + 67 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 42 * OS1_S1 + 16);
            *(b + 42 * OS1_S1 + 51) = prefactor_z * *(b + 42 * OS1_S1 + 30) -
                                      p_over_q * *(b + 68 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 30);
            *(b + 42 * OS1_S1 + 52) = prefactor_z * *(b + 42 * OS1_S1 + 31) -
                                      p_over_q * *(b + 68 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 42 * OS1_S1 + 16);
            *(b + 42 * OS1_S1 + 53) =
                prefactor_y * *(b + 42 * OS1_S1 + 33) -
                p_over_q * *(b + 67 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 33) +
                one_over_two_q * *(b + 42 * OS1_S1 + 19);
            *(b + 42 * OS1_S1 + 54) =
                prefactor_y * *(b + 42 * OS1_S1 + 34) -
                p_over_q * *(b + 67 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 34);
            *(b + 42 * OS1_S1 + 55) =
                prefactor_z * *(b + 42 * OS1_S1 + 34) -
                p_over_q * *(b + 68 * OS1_S1 + 34) +
                one_over_two_q * *(b + 23 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 42 * OS1_S1 + 19);
            *(b + 43 * OS1_S1 + 35) =
                prefactor_x * *(b + 43 * OS1_S1 + 20) -
                p_over_q * *(b + 64 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 43 * OS1_S1 + 10);
            *(b + 43 * OS1_S1 + 36) = prefactor_y * *(b + 43 * OS1_S1 + 20) -
                                      p_over_q * *(b + 68 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 20);
            *(b + 43 * OS1_S1 + 37) =
                prefactor_z * *(b + 43 * OS1_S1 + 20) -
                p_over_q * *(b + 69 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 20);
            *(b + 43 * OS1_S1 + 38) = prefactor_y * *(b + 43 * OS1_S1 + 21) -
                                      p_over_q * *(b + 68 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 43 * OS1_S1 + 10);
            *(b + 43 * OS1_S1 + 39) = prefactor_y * *(b + 43 * OS1_S1 + 22) -
                                      p_over_q * *(b + 68 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 22);
            *(b + 43 * OS1_S1 + 40) =
                prefactor_z * *(b + 43 * OS1_S1 + 22) -
                p_over_q * *(b + 69 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 22) +
                one_over_two_q * *(b + 43 * OS1_S1 + 10);
            *(b + 43 * OS1_S1 + 41) =
                prefactor_x * *(b + 43 * OS1_S1 + 26) -
                p_over_q * *(b + 64 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 26) +
                one_over_two_q * *(b + 43 * OS1_S1 + 16);
            *(b + 43 * OS1_S1 + 42) =
                prefactor_z * *(b + 43 * OS1_S1 + 23) -
                p_over_q * *(b + 69 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 23);
            *(b + 43 * OS1_S1 + 43) = prefactor_y * *(b + 43 * OS1_S1 + 25) -
                                      p_over_q * *(b + 68 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 25);
            *(b + 43 * OS1_S1 + 44) =
                prefactor_x * *(b + 43 * OS1_S1 + 29) -
                p_over_q * *(b + 64 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 29) +
                one_over_two_q * *(b + 43 * OS1_S1 + 19);
            *(b + 43 * OS1_S1 + 45) =
                prefactor_x * *(b + 43 * OS1_S1 + 30) -
                p_over_q * *(b + 64 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 30);
            *(b + 43 * OS1_S1 + 46) =
                prefactor_z * *(b + 43 * OS1_S1 + 26) -
                p_over_q * *(b + 69 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 26);
            *(b + 43 * OS1_S1 + 47) =
                prefactor_x * *(b + 43 * OS1_S1 + 32) -
                p_over_q * *(b + 64 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 32);
            *(b + 43 * OS1_S1 + 48) = prefactor_y * *(b + 43 * OS1_S1 + 29) -
                                      p_over_q * *(b + 68 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 29);
            *(b + 43 * OS1_S1 + 49) =
                prefactor_x * *(b + 43 * OS1_S1 + 34) -
                p_over_q * *(b + 64 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 34);
            *(b + 43 * OS1_S1 + 50) =
                prefactor_y * *(b + 43 * OS1_S1 + 30) -
                p_over_q * *(b + 68 * OS1_S1 + 30) +
                one_over_two_q * *(b + 25 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 43 * OS1_S1 + 16);
            *(b + 43 * OS1_S1 + 51) =
                prefactor_z * *(b + 43 * OS1_S1 + 30) -
                p_over_q * *(b + 69 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 30);
            *(b + 43 * OS1_S1 + 52) =
                prefactor_z * *(b + 43 * OS1_S1 + 31) -
                p_over_q * *(b + 69 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 31) +
                one_over_two_q * *(b + 43 * OS1_S1 + 16);
            *(b + 43 * OS1_S1 + 53) = prefactor_y * *(b + 43 * OS1_S1 + 33) -
                                      p_over_q * *(b + 68 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 43 * OS1_S1 + 19);
            *(b + 43 * OS1_S1 + 54) = prefactor_y * *(b + 43 * OS1_S1 + 34) -
                                      p_over_q * *(b + 68 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 34);
            *(b + 43 * OS1_S1 + 55) =
                prefactor_z * *(b + 43 * OS1_S1 + 34) -
                p_over_q * *(b + 69 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 43 * OS1_S1 + 19);
            *(b + 44 * OS1_S1 + 35) =
                prefactor_x * *(b + 44 * OS1_S1 + 20) -
                p_over_q * *(b + 65 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 10);
            *(b + 44 * OS1_S1 + 36) = prefactor_y * *(b + 44 * OS1_S1 + 20) -
                                      p_over_q * *(b + 69 * OS1_S1 + 20);
            *(b + 44 * OS1_S1 + 37) =
                prefactor_z * *(b + 44 * OS1_S1 + 20) -
                p_over_q * *(b + 70 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 20);
            *(b + 44 * OS1_S1 + 38) = prefactor_y * *(b + 44 * OS1_S1 + 21) -
                                      p_over_q * *(b + 69 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 10);
            *(b + 44 * OS1_S1 + 39) = prefactor_y * *(b + 44 * OS1_S1 + 22) -
                                      p_over_q * *(b + 69 * OS1_S1 + 22);
            *(b + 44 * OS1_S1 + 40) =
                prefactor_z * *(b + 44 * OS1_S1 + 22) -
                p_over_q * *(b + 70 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 22) +
                one_over_two_q * *(b + 44 * OS1_S1 + 10);
            *(b + 44 * OS1_S1 + 41) =
                prefactor_x * *(b + 44 * OS1_S1 + 26) -
                p_over_q * *(b + 65 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 26) +
                one_over_two_q * *(b + 44 * OS1_S1 + 16);
            *(b + 44 * OS1_S1 + 42) =
                prefactor_z * *(b + 44 * OS1_S1 + 23) -
                p_over_q * *(b + 70 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 23);
            *(b + 44 * OS1_S1 + 43) = prefactor_y * *(b + 44 * OS1_S1 + 25) -
                                      p_over_q * *(b + 69 * OS1_S1 + 25);
            *(b + 44 * OS1_S1 + 44) =
                prefactor_x * *(b + 44 * OS1_S1 + 29) -
                p_over_q * *(b + 65 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 29) +
                one_over_two_q * *(b + 44 * OS1_S1 + 19);
            *(b + 44 * OS1_S1 + 45) =
                prefactor_x * *(b + 44 * OS1_S1 + 30) -
                p_over_q * *(b + 65 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 30);
            *(b + 44 * OS1_S1 + 46) =
                prefactor_x * *(b + 44 * OS1_S1 + 31) -
                p_over_q * *(b + 65 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 31);
            *(b + 44 * OS1_S1 + 47) =
                prefactor_x * *(b + 44 * OS1_S1 + 32) -
                p_over_q * *(b + 65 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 32);
            *(b + 44 * OS1_S1 + 48) = prefactor_y * *(b + 44 * OS1_S1 + 29) -
                                      p_over_q * *(b + 69 * OS1_S1 + 29);
            *(b + 44 * OS1_S1 + 49) =
                prefactor_x * *(b + 44 * OS1_S1 + 34) -
                p_over_q * *(b + 65 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 34);
            *(b + 44 * OS1_S1 + 50) =
                prefactor_y * *(b + 44 * OS1_S1 + 30) -
                p_over_q * *(b + 69 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 16);
            *(b + 44 * OS1_S1 + 51) =
                prefactor_z * *(b + 44 * OS1_S1 + 30) -
                p_over_q * *(b + 70 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 30);
            *(b + 44 * OS1_S1 + 52) =
                prefactor_z * *(b + 44 * OS1_S1 + 31) -
                p_over_q * *(b + 70 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 31) +
                one_over_two_q * *(b + 44 * OS1_S1 + 16);
            *(b + 44 * OS1_S1 + 53) = prefactor_y * *(b + 44 * OS1_S1 + 33) -
                                      p_over_q * *(b + 69 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 19);
            *(b + 44 * OS1_S1 + 54) = prefactor_y * *(b + 44 * OS1_S1 + 34) -
                                      p_over_q * *(b + 69 * OS1_S1 + 34);
            *(b + 44 * OS1_S1 + 55) =
                prefactor_z * *(b + 44 * OS1_S1 + 34) -
                p_over_q * *(b + 70 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 19);
            *(b + 45 * OS1_S1 + 35) =
                prefactor_x * *(b + 45 * OS1_S1 + 20) -
                p_over_q * *(b + 66 * OS1_S1 + 20) +
                one_over_two_q * *(b + 30 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 45 * OS1_S1 + 10);
            *(b + 45 * OS1_S1 + 36) =
                prefactor_y * *(b + 45 * OS1_S1 + 20) -
                p_over_q * *(b + 71 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 20);
            *(b + 45 * OS1_S1 + 37) = prefactor_z * *(b + 45 * OS1_S1 + 20) -
                                      p_over_q * *(b + 72 * OS1_S1 + 20);
            *(b + 45 * OS1_S1 + 38) =
                prefactor_y * *(b + 45 * OS1_S1 + 21) -
                p_over_q * *(b + 71 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 21) +
                one_over_two_q * *(b + 45 * OS1_S1 + 10);
            *(b + 45 * OS1_S1 + 39) = prefactor_z * *(b + 45 * OS1_S1 + 21) -
                                      p_over_q * *(b + 72 * OS1_S1 + 21);
            *(b + 45 * OS1_S1 + 40) = prefactor_z * *(b + 45 * OS1_S1 + 22) -
                                      p_over_q * *(b + 72 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 10);
            *(b + 45 * OS1_S1 + 41) = prefactor_x * *(b + 45 * OS1_S1 + 26) -
                                      p_over_q * *(b + 66 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 16);
            *(b + 45 * OS1_S1 + 42) = prefactor_z * *(b + 45 * OS1_S1 + 23) -
                                      p_over_q * *(b + 72 * OS1_S1 + 23);
            *(b + 45 * OS1_S1 + 43) =
                prefactor_y * *(b + 45 * OS1_S1 + 25) -
                p_over_q * *(b + 71 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 25);
            *(b + 45 * OS1_S1 + 44) = prefactor_x * *(b + 45 * OS1_S1 + 29) -
                                      p_over_q * *(b + 66 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 19);
            *(b + 45 * OS1_S1 + 45) = prefactor_x * *(b + 45 * OS1_S1 + 30) -
                                      p_over_q * *(b + 66 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 30);
            *(b + 45 * OS1_S1 + 46) = prefactor_z * *(b + 45 * OS1_S1 + 26) -
                                      p_over_q * *(b + 72 * OS1_S1 + 26);
            *(b + 45 * OS1_S1 + 47) = prefactor_x * *(b + 45 * OS1_S1 + 32) -
                                      p_over_q * *(b + 66 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 32);
            *(b + 45 * OS1_S1 + 48) = prefactor_x * *(b + 45 * OS1_S1 + 33) -
                                      p_over_q * *(b + 66 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 33);
            *(b + 45 * OS1_S1 + 49) = prefactor_x * *(b + 45 * OS1_S1 + 34) -
                                      p_over_q * *(b + 66 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 34);
            *(b + 45 * OS1_S1 + 50) =
                prefactor_y * *(b + 45 * OS1_S1 + 30) -
                p_over_q * *(b + 71 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 45 * OS1_S1 + 16);
            *(b + 45 * OS1_S1 + 51) = prefactor_z * *(b + 45 * OS1_S1 + 30) -
                                      p_over_q * *(b + 72 * OS1_S1 + 30);
            *(b + 45 * OS1_S1 + 52) = prefactor_z * *(b + 45 * OS1_S1 + 31) -
                                      p_over_q * *(b + 72 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 16);
            *(b + 45 * OS1_S1 + 53) =
                prefactor_y * *(b + 45 * OS1_S1 + 33) -
                p_over_q * *(b + 71 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 33) +
                one_over_two_q * *(b + 45 * OS1_S1 + 19);
            *(b + 45 * OS1_S1 + 54) =
                prefactor_y * *(b + 45 * OS1_S1 + 34) -
                p_over_q * *(b + 71 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 34);
            *(b + 45 * OS1_S1 + 55) =
                prefactor_z * *(b + 45 * OS1_S1 + 34) -
                p_over_q * *(b + 72 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 45 * OS1_S1 + 19);
            *(b + 46 * OS1_S1 + 35) =
                prefactor_x * *(b + 46 * OS1_S1 + 20) -
                p_over_q * *(b + 67 * OS1_S1 + 20) +
                one_over_two_q * *(b + 31 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 10);
            *(b + 46 * OS1_S1 + 36) =
                prefactor_y * *(b + 46 * OS1_S1 + 20) -
                p_over_q * *(b + 72 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 20);
            *(b + 46 * OS1_S1 + 37) = prefactor_z * *(b + 46 * OS1_S1 + 20) -
                                      p_over_q * *(b + 73 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 20);
            *(b + 46 * OS1_S1 + 38) =
                prefactor_y * *(b + 46 * OS1_S1 + 21) -
                p_over_q * *(b + 72 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 21) +
                one_over_two_q * *(b + 46 * OS1_S1 + 10);
            *(b + 46 * OS1_S1 + 39) = prefactor_z * *(b + 46 * OS1_S1 + 21) -
                                      p_over_q * *(b + 73 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 21);
            *(b + 46 * OS1_S1 + 40) = prefactor_z * *(b + 46 * OS1_S1 + 22) -
                                      p_over_q * *(b + 73 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 10);
            *(b + 46 * OS1_S1 + 41) = prefactor_x * *(b + 46 * OS1_S1 + 26) -
                                      p_over_q * *(b + 67 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 16);
            *(b + 46 * OS1_S1 + 42) = prefactor_z * *(b + 46 * OS1_S1 + 23) -
                                      p_over_q * *(b + 73 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 23);
            *(b + 46 * OS1_S1 + 43) =
                prefactor_y * *(b + 46 * OS1_S1 + 25) -
                p_over_q * *(b + 72 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 25);
            *(b + 46 * OS1_S1 + 44) = prefactor_x * *(b + 46 * OS1_S1 + 29) -
                                      p_over_q * *(b + 67 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 19);
            *(b + 46 * OS1_S1 + 45) = prefactor_x * *(b + 46 * OS1_S1 + 30) -
                                      p_over_q * *(b + 67 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 30);
            *(b + 46 * OS1_S1 + 46) = prefactor_z * *(b + 46 * OS1_S1 + 26) -
                                      p_over_q * *(b + 73 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 26);
            *(b + 46 * OS1_S1 + 47) = prefactor_x * *(b + 46 * OS1_S1 + 32) -
                                      p_over_q * *(b + 67 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 32);
            *(b + 46 * OS1_S1 + 48) = prefactor_x * *(b + 46 * OS1_S1 + 33) -
                                      p_over_q * *(b + 67 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 33);
            *(b + 46 * OS1_S1 + 49) = prefactor_x * *(b + 46 * OS1_S1 + 34) -
                                      p_over_q * *(b + 67 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 34);
            *(b + 46 * OS1_S1 + 50) =
                prefactor_y * *(b + 46 * OS1_S1 + 30) -
                p_over_q * *(b + 72 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 16);
            *(b + 46 * OS1_S1 + 51) = prefactor_z * *(b + 46 * OS1_S1 + 30) -
                                      p_over_q * *(b + 73 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 30);
            *(b + 46 * OS1_S1 + 52) = prefactor_z * *(b + 46 * OS1_S1 + 31) -
                                      p_over_q * *(b + 73 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 16);
            *(b + 46 * OS1_S1 + 53) =
                prefactor_y * *(b + 46 * OS1_S1 + 33) -
                p_over_q * *(b + 72 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 33) +
                one_over_two_q * *(b + 46 * OS1_S1 + 19);
            *(b + 46 * OS1_S1 + 54) =
                prefactor_y * *(b + 46 * OS1_S1 + 34) -
                p_over_q * *(b + 72 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 34);
            *(b + 46 * OS1_S1 + 55) =
                prefactor_z * *(b + 46 * OS1_S1 + 34) -
                p_over_q * *(b + 73 * OS1_S1 + 34) +
                one_over_two_q * *(b + 26 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 19);
            *(b + 47 * OS1_S1 + 35) =
                prefactor_x * *(b + 47 * OS1_S1 + 20) -
                p_over_q * *(b + 68 * OS1_S1 + 20) +
                one_over_two_q * *(b + 32 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 47 * OS1_S1 + 10);
            *(b + 47 * OS1_S1 + 36) =
                prefactor_y * *(b + 47 * OS1_S1 + 20) -
                p_over_q * *(b + 73 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 20);
            *(b + 47 * OS1_S1 + 37) =
                prefactor_z * *(b + 47 * OS1_S1 + 20) -
                p_over_q * *(b + 74 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 20);
            *(b + 47 * OS1_S1 + 38) =
                prefactor_y * *(b + 47 * OS1_S1 + 21) -
                p_over_q * *(b + 73 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 21) +
                one_over_two_q * *(b + 47 * OS1_S1 + 10);
            *(b + 47 * OS1_S1 + 39) =
                prefactor_z * *(b + 47 * OS1_S1 + 21) -
                p_over_q * *(b + 74 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 21);
            *(b + 47 * OS1_S1 + 40) =
                prefactor_z * *(b + 47 * OS1_S1 + 22) -
                p_over_q * *(b + 74 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 22) +
                one_over_two_q * *(b + 47 * OS1_S1 + 10);
            *(b + 47 * OS1_S1 + 41) = prefactor_x * *(b + 47 * OS1_S1 + 26) -
                                      p_over_q * *(b + 68 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 47 * OS1_S1 + 16);
            *(b + 47 * OS1_S1 + 42) =
                prefactor_z * *(b + 47 * OS1_S1 + 23) -
                p_over_q * *(b + 74 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 23);
            *(b + 47 * OS1_S1 + 43) =
                prefactor_y * *(b + 47 * OS1_S1 + 25) -
                p_over_q * *(b + 73 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 25);
            *(b + 47 * OS1_S1 + 44) = prefactor_x * *(b + 47 * OS1_S1 + 29) -
                                      p_over_q * *(b + 68 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 47 * OS1_S1 + 19);
            *(b + 47 * OS1_S1 + 45) = prefactor_x * *(b + 47 * OS1_S1 + 30) -
                                      p_over_q * *(b + 68 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 30);
            *(b + 47 * OS1_S1 + 46) = prefactor_x * *(b + 47 * OS1_S1 + 31) -
                                      p_over_q * *(b + 68 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 31);
            *(b + 47 * OS1_S1 + 47) = prefactor_x * *(b + 47 * OS1_S1 + 32) -
                                      p_over_q * *(b + 68 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 32);
            *(b + 47 * OS1_S1 + 48) = prefactor_x * *(b + 47 * OS1_S1 + 33) -
                                      p_over_q * *(b + 68 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 33);
            *(b + 47 * OS1_S1 + 49) = prefactor_x * *(b + 47 * OS1_S1 + 34) -
                                      p_over_q * *(b + 68 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 34);
            *(b + 47 * OS1_S1 + 50) =
                prefactor_y * *(b + 47 * OS1_S1 + 30) -
                p_over_q * *(b + 73 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 47 * OS1_S1 + 16);
            *(b + 47 * OS1_S1 + 51) =
                prefactor_z * *(b + 47 * OS1_S1 + 30) -
                p_over_q * *(b + 74 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 30);
            *(b + 47 * OS1_S1 + 52) =
                prefactor_z * *(b + 47 * OS1_S1 + 31) -
                p_over_q * *(b + 74 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 31) +
                one_over_two_q * *(b + 47 * OS1_S1 + 16);
            *(b + 47 * OS1_S1 + 53) =
                prefactor_y * *(b + 47 * OS1_S1 + 33) -
                p_over_q * *(b + 73 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 33) +
                one_over_two_q * *(b + 47 * OS1_S1 + 19);
            *(b + 47 * OS1_S1 + 54) =
                prefactor_y * *(b + 47 * OS1_S1 + 34) -
                p_over_q * *(b + 73 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 34);
            *(b + 47 * OS1_S1 + 55) =
                prefactor_z * *(b + 47 * OS1_S1 + 34) -
                p_over_q * *(b + 74 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 47 * OS1_S1 + 19);
            *(b + 48 * OS1_S1 + 35) =
                prefactor_x * *(b + 48 * OS1_S1 + 20) -
                p_over_q * *(b + 69 * OS1_S1 + 20) +
                one_over_two_q * *(b + 33 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 10);
            *(b + 48 * OS1_S1 + 36) = prefactor_y * *(b + 48 * OS1_S1 + 20) -
                                      p_over_q * *(b + 74 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 20);
            *(b + 48 * OS1_S1 + 37) =
                prefactor_z * *(b + 48 * OS1_S1 + 20) -
                p_over_q * *(b + 75 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 20);
            *(b + 48 * OS1_S1 + 38) = prefactor_y * *(b + 48 * OS1_S1 + 21) -
                                      p_over_q * *(b + 74 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 10);
            *(b + 48 * OS1_S1 + 39) = prefactor_y * *(b + 48 * OS1_S1 + 22) -
                                      p_over_q * *(b + 74 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 22);
            *(b + 48 * OS1_S1 + 40) =
                prefactor_z * *(b + 48 * OS1_S1 + 22) -
                p_over_q * *(b + 75 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 22) +
                one_over_two_q * *(b + 48 * OS1_S1 + 10);
            *(b + 48 * OS1_S1 + 41) = prefactor_x * *(b + 48 * OS1_S1 + 26) -
                                      p_over_q * *(b + 69 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 16);
            *(b + 48 * OS1_S1 + 42) =
                prefactor_z * *(b + 48 * OS1_S1 + 23) -
                p_over_q * *(b + 75 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 23);
            *(b + 48 * OS1_S1 + 43) = prefactor_y * *(b + 48 * OS1_S1 + 25) -
                                      p_over_q * *(b + 74 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 25);
            *(b + 48 * OS1_S1 + 44) = prefactor_x * *(b + 48 * OS1_S1 + 29) -
                                      p_over_q * *(b + 69 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 19);
            *(b + 48 * OS1_S1 + 45) = prefactor_x * *(b + 48 * OS1_S1 + 30) -
                                      p_over_q * *(b + 69 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 30);
            *(b + 48 * OS1_S1 + 46) = prefactor_x * *(b + 48 * OS1_S1 + 31) -
                                      p_over_q * *(b + 69 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 31);
            *(b + 48 * OS1_S1 + 47) = prefactor_x * *(b + 48 * OS1_S1 + 32) -
                                      p_over_q * *(b + 69 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 32);
            *(b + 48 * OS1_S1 + 48) = prefactor_y * *(b + 48 * OS1_S1 + 29) -
                                      p_over_q * *(b + 74 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 29);
            *(b + 48 * OS1_S1 + 49) = prefactor_x * *(b + 48 * OS1_S1 + 34) -
                                      p_over_q * *(b + 69 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 34);
            *(b + 48 * OS1_S1 + 50) =
                prefactor_y * *(b + 48 * OS1_S1 + 30) -
                p_over_q * *(b + 74 * OS1_S1 + 30) +
                one_over_two_q * *(b + 29 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 16);
            *(b + 48 * OS1_S1 + 51) =
                prefactor_z * *(b + 48 * OS1_S1 + 30) -
                p_over_q * *(b + 75 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 30);
            *(b + 48 * OS1_S1 + 52) =
                prefactor_z * *(b + 48 * OS1_S1 + 31) -
                p_over_q * *(b + 75 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 31) +
                one_over_two_q * *(b + 48 * OS1_S1 + 16);
            *(b + 48 * OS1_S1 + 53) = prefactor_y * *(b + 48 * OS1_S1 + 33) -
                                      p_over_q * *(b + 74 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 19);
            *(b + 48 * OS1_S1 + 54) = prefactor_y * *(b + 48 * OS1_S1 + 34) -
                                      p_over_q * *(b + 74 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 34);
            *(b + 48 * OS1_S1 + 55) =
                prefactor_z * *(b + 48 * OS1_S1 + 34) -
                p_over_q * *(b + 75 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 19);
            *(b + 49 * OS1_S1 + 35) =
                prefactor_x * *(b + 49 * OS1_S1 + 20) -
                p_over_q * *(b + 70 * OS1_S1 + 20) +
                one_over_two_q * *(b + 34 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 49 * OS1_S1 + 10);
            *(b + 49 * OS1_S1 + 36) = prefactor_y * *(b + 49 * OS1_S1 + 20) -
                                      p_over_q * *(b + 75 * OS1_S1 + 20);
            *(b + 49 * OS1_S1 + 37) =
                prefactor_z * *(b + 49 * OS1_S1 + 20) -
                p_over_q * *(b + 76 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 20);
            *(b + 49 * OS1_S1 + 38) = prefactor_y * *(b + 49 * OS1_S1 + 21) -
                                      p_over_q * *(b + 75 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 10);
            *(b + 49 * OS1_S1 + 39) = prefactor_y * *(b + 49 * OS1_S1 + 22) -
                                      p_over_q * *(b + 75 * OS1_S1 + 22);
            *(b + 49 * OS1_S1 + 40) =
                prefactor_z * *(b + 49 * OS1_S1 + 22) -
                p_over_q * *(b + 76 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 22) +
                one_over_two_q * *(b + 49 * OS1_S1 + 10);
            *(b + 49 * OS1_S1 + 41) = prefactor_x * *(b + 49 * OS1_S1 + 26) -
                                      p_over_q * *(b + 70 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 16);
            *(b + 49 * OS1_S1 + 42) =
                prefactor_z * *(b + 49 * OS1_S1 + 23) -
                p_over_q * *(b + 76 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 23);
            *(b + 49 * OS1_S1 + 43) = prefactor_y * *(b + 49 * OS1_S1 + 25) -
                                      p_over_q * *(b + 75 * OS1_S1 + 25);
            *(b + 49 * OS1_S1 + 44) = prefactor_x * *(b + 49 * OS1_S1 + 29) -
                                      p_over_q * *(b + 70 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 19);
            *(b + 49 * OS1_S1 + 45) = prefactor_x * *(b + 49 * OS1_S1 + 30) -
                                      p_over_q * *(b + 70 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 30);
            *(b + 49 * OS1_S1 + 46) = prefactor_x * *(b + 49 * OS1_S1 + 31) -
                                      p_over_q * *(b + 70 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 31);
            *(b + 49 * OS1_S1 + 47) = prefactor_x * *(b + 49 * OS1_S1 + 32) -
                                      p_over_q * *(b + 70 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 32);
            *(b + 49 * OS1_S1 + 48) = prefactor_y * *(b + 49 * OS1_S1 + 29) -
                                      p_over_q * *(b + 75 * OS1_S1 + 29);
            *(b + 49 * OS1_S1 + 49) = prefactor_x * *(b + 49 * OS1_S1 + 34) -
                                      p_over_q * *(b + 70 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 34);
            *(b + 49 * OS1_S1 + 50) =
                prefactor_y * *(b + 49 * OS1_S1 + 30) -
                p_over_q * *(b + 75 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 49 * OS1_S1 + 16);
            *(b + 49 * OS1_S1 + 51) =
                prefactor_z * *(b + 49 * OS1_S1 + 30) -
                p_over_q * *(b + 76 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 30);
            *(b + 49 * OS1_S1 + 52) =
                prefactor_z * *(b + 49 * OS1_S1 + 31) -
                p_over_q * *(b + 76 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 31) +
                one_over_two_q * *(b + 49 * OS1_S1 + 16);
            *(b + 49 * OS1_S1 + 53) = prefactor_y * *(b + 49 * OS1_S1 + 33) -
                                      p_over_q * *(b + 75 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 19);
            *(b + 49 * OS1_S1 + 54) = prefactor_y * *(b + 49 * OS1_S1 + 34) -
                                      p_over_q * *(b + 75 * OS1_S1 + 34);
            *(b + 49 * OS1_S1 + 55) =
                prefactor_z * *(b + 49 * OS1_S1 + 34) -
                p_over_q * *(b + 76 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 49 * OS1_S1 + 19);
            *(b + 50 * OS1_S1 + 35) =
                prefactor_x * *(b + 50 * OS1_S1 + 20) -
                p_over_q * *(b + 71 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 50 * OS1_S1 + 10);
            *(b + 50 * OS1_S1 + 36) =
                prefactor_y * *(b + 50 * OS1_S1 + 20) -
                p_over_q * *(b + 77 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 20);
            *(b + 50 * OS1_S1 + 37) = prefactor_z * *(b + 50 * OS1_S1 + 20) -
                                      p_over_q * *(b + 78 * OS1_S1 + 20);
            *(b + 50 * OS1_S1 + 38) =
                prefactor_y * *(b + 50 * OS1_S1 + 21) -
                p_over_q * *(b + 77 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 21) +
                one_over_two_q * *(b + 50 * OS1_S1 + 10);
            *(b + 50 * OS1_S1 + 39) = prefactor_z * *(b + 50 * OS1_S1 + 21) -
                                      p_over_q * *(b + 78 * OS1_S1 + 21);
            *(b + 50 * OS1_S1 + 40) = prefactor_z * *(b + 50 * OS1_S1 + 22) -
                                      p_over_q * *(b + 78 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 10);
            *(b + 50 * OS1_S1 + 41) = prefactor_x * *(b + 50 * OS1_S1 + 26) -
                                      p_over_q * *(b + 71 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 16);
            *(b + 50 * OS1_S1 + 42) = prefactor_z * *(b + 50 * OS1_S1 + 23) -
                                      p_over_q * *(b + 78 * OS1_S1 + 23);
            *(b + 50 * OS1_S1 + 43) =
                prefactor_y * *(b + 50 * OS1_S1 + 25) -
                p_over_q * *(b + 77 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 25);
            *(b + 50 * OS1_S1 + 44) = prefactor_x * *(b + 50 * OS1_S1 + 29) -
                                      p_over_q * *(b + 71 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 19);
            *(b + 50 * OS1_S1 + 45) = prefactor_x * *(b + 50 * OS1_S1 + 30) -
                                      p_over_q * *(b + 71 * OS1_S1 + 30);
            *(b + 50 * OS1_S1 + 46) = prefactor_z * *(b + 50 * OS1_S1 + 26) -
                                      p_over_q * *(b + 78 * OS1_S1 + 26);
            *(b + 50 * OS1_S1 + 47) = prefactor_x * *(b + 50 * OS1_S1 + 32) -
                                      p_over_q * *(b + 71 * OS1_S1 + 32);
            *(b + 50 * OS1_S1 + 48) = prefactor_x * *(b + 50 * OS1_S1 + 33) -
                                      p_over_q * *(b + 71 * OS1_S1 + 33);
            *(b + 50 * OS1_S1 + 49) = prefactor_x * *(b + 50 * OS1_S1 + 34) -
                                      p_over_q * *(b + 71 * OS1_S1 + 34);
            *(b + 50 * OS1_S1 + 50) =
                prefactor_y * *(b + 50 * OS1_S1 + 30) -
                p_over_q * *(b + 77 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 50 * OS1_S1 + 16);
            *(b + 50 * OS1_S1 + 51) = prefactor_z * *(b + 50 * OS1_S1 + 30) -
                                      p_over_q * *(b + 78 * OS1_S1 + 30);
            *(b + 50 * OS1_S1 + 52) = prefactor_z * *(b + 50 * OS1_S1 + 31) -
                                      p_over_q * *(b + 78 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 16);
            *(b + 50 * OS1_S1 + 53) =
                prefactor_y * *(b + 50 * OS1_S1 + 33) -
                p_over_q * *(b + 77 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 33) +
                one_over_two_q * *(b + 50 * OS1_S1 + 19);
            *(b + 50 * OS1_S1 + 54) =
                prefactor_y * *(b + 50 * OS1_S1 + 34) -
                p_over_q * *(b + 77 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 34);
            *(b + 50 * OS1_S1 + 55) =
                prefactor_z * *(b + 50 * OS1_S1 + 34) -
                p_over_q * *(b + 78 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 50 * OS1_S1 + 19);
            *(b + 51 * OS1_S1 + 35) =
                prefactor_x * *(b + 51 * OS1_S1 + 20) -
                p_over_q * *(b + 72 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 51 * OS1_S1 + 10);
            *(b + 51 * OS1_S1 + 36) =
                prefactor_y * *(b + 51 * OS1_S1 + 20) -
                p_over_q * *(b + 78 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 20);
            *(b + 51 * OS1_S1 + 37) = prefactor_z * *(b + 51 * OS1_S1 + 20) -
                                      p_over_q * *(b + 79 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 20);
            *(b + 51 * OS1_S1 + 38) =
                prefactor_y * *(b + 51 * OS1_S1 + 21) -
                p_over_q * *(b + 78 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 21) +
                one_over_two_q * *(b + 51 * OS1_S1 + 10);
            *(b + 51 * OS1_S1 + 39) = prefactor_z * *(b + 51 * OS1_S1 + 21) -
                                      p_over_q * *(b + 79 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 21);
            *(b + 51 * OS1_S1 + 40) = prefactor_z * *(b + 51 * OS1_S1 + 22) -
                                      p_over_q * *(b + 79 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 10);
            *(b + 51 * OS1_S1 + 41) = prefactor_x * *(b + 51 * OS1_S1 + 26) -
                                      p_over_q * *(b + 72 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 16);
            *(b + 51 * OS1_S1 + 42) = prefactor_z * *(b + 51 * OS1_S1 + 23) -
                                      p_over_q * *(b + 79 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 23);
            *(b + 51 * OS1_S1 + 43) =
                prefactor_y * *(b + 51 * OS1_S1 + 25) -
                p_over_q * *(b + 78 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 25);
            *(b + 51 * OS1_S1 + 44) = prefactor_x * *(b + 51 * OS1_S1 + 29) -
                                      p_over_q * *(b + 72 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 19);
            *(b + 51 * OS1_S1 + 45) = prefactor_x * *(b + 51 * OS1_S1 + 30) -
                                      p_over_q * *(b + 72 * OS1_S1 + 30);
            *(b + 51 * OS1_S1 + 46) = prefactor_x * *(b + 51 * OS1_S1 + 31) -
                                      p_over_q * *(b + 72 * OS1_S1 + 31);
            *(b + 51 * OS1_S1 + 47) = prefactor_x * *(b + 51 * OS1_S1 + 32) -
                                      p_over_q * *(b + 72 * OS1_S1 + 32);
            *(b + 51 * OS1_S1 + 48) = prefactor_x * *(b + 51 * OS1_S1 + 33) -
                                      p_over_q * *(b + 72 * OS1_S1 + 33);
            *(b + 51 * OS1_S1 + 49) = prefactor_x * *(b + 51 * OS1_S1 + 34) -
                                      p_over_q * *(b + 72 * OS1_S1 + 34);
            *(b + 51 * OS1_S1 + 50) =
                prefactor_y * *(b + 51 * OS1_S1 + 30) -
                p_over_q * *(b + 78 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 51 * OS1_S1 + 16);
            *(b + 51 * OS1_S1 + 51) = prefactor_z * *(b + 51 * OS1_S1 + 30) -
                                      p_over_q * *(b + 79 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 30);
            *(b + 51 * OS1_S1 + 52) = prefactor_z * *(b + 51 * OS1_S1 + 31) -
                                      p_over_q * *(b + 79 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 16);
            *(b + 51 * OS1_S1 + 53) =
                prefactor_y * *(b + 51 * OS1_S1 + 33) -
                p_over_q * *(b + 78 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 33) +
                one_over_two_q * *(b + 51 * OS1_S1 + 19);
            *(b + 51 * OS1_S1 + 54) =
                prefactor_y * *(b + 51 * OS1_S1 + 34) -
                p_over_q * *(b + 78 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 34);
            *(b + 51 * OS1_S1 + 55) =
                prefactor_z * *(b + 51 * OS1_S1 + 34) -
                p_over_q * *(b + 79 * OS1_S1 + 34) +
                one_over_two_q * *(b + 30 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 51 * OS1_S1 + 19);
            *(b + 52 * OS1_S1 + 35) =
                prefactor_x * *(b + 52 * OS1_S1 + 20) -
                p_over_q * *(b + 73 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 10);
            *(b + 52 * OS1_S1 + 36) =
                prefactor_y * *(b + 52 * OS1_S1 + 20) -
                p_over_q * *(b + 79 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 20);
            *(b + 52 * OS1_S1 + 37) =
                prefactor_z * *(b + 52 * OS1_S1 + 20) -
                p_over_q * *(b + 80 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 20);
            *(b + 52 * OS1_S1 + 38) =
                prefactor_y * *(b + 52 * OS1_S1 + 21) -
                p_over_q * *(b + 79 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 21) +
                one_over_two_q * *(b + 52 * OS1_S1 + 10);
            *(b + 52 * OS1_S1 + 39) =
                prefactor_z * *(b + 52 * OS1_S1 + 21) -
                p_over_q * *(b + 80 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 21);
            *(b + 52 * OS1_S1 + 40) =
                prefactor_z * *(b + 52 * OS1_S1 + 22) -
                p_over_q * *(b + 80 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 22) +
                one_over_two_q * *(b + 52 * OS1_S1 + 10);
            *(b + 52 * OS1_S1 + 41) = prefactor_x * *(b + 52 * OS1_S1 + 26) -
                                      p_over_q * *(b + 73 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 16);
            *(b + 52 * OS1_S1 + 42) =
                prefactor_z * *(b + 52 * OS1_S1 + 23) -
                p_over_q * *(b + 80 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 23);
            *(b + 52 * OS1_S1 + 43) =
                prefactor_y * *(b + 52 * OS1_S1 + 25) -
                p_over_q * *(b + 79 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 25);
            *(b + 52 * OS1_S1 + 44) = prefactor_x * *(b + 52 * OS1_S1 + 29) -
                                      p_over_q * *(b + 73 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 19);
            *(b + 52 * OS1_S1 + 45) = prefactor_x * *(b + 52 * OS1_S1 + 30) -
                                      p_over_q * *(b + 73 * OS1_S1 + 30);
            *(b + 52 * OS1_S1 + 46) = prefactor_x * *(b + 52 * OS1_S1 + 31) -
                                      p_over_q * *(b + 73 * OS1_S1 + 31);
            *(b + 52 * OS1_S1 + 47) = prefactor_x * *(b + 52 * OS1_S1 + 32) -
                                      p_over_q * *(b + 73 * OS1_S1 + 32);
            *(b + 52 * OS1_S1 + 48) = prefactor_x * *(b + 52 * OS1_S1 + 33) -
                                      p_over_q * *(b + 73 * OS1_S1 + 33);
            *(b + 52 * OS1_S1 + 49) = prefactor_x * *(b + 52 * OS1_S1 + 34) -
                                      p_over_q * *(b + 73 * OS1_S1 + 34);
            *(b + 52 * OS1_S1 + 50) =
                prefactor_y * *(b + 52 * OS1_S1 + 30) -
                p_over_q * *(b + 79 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 16);
            *(b + 52 * OS1_S1 + 51) =
                prefactor_z * *(b + 52 * OS1_S1 + 30) -
                p_over_q * *(b + 80 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 30);
            *(b + 52 * OS1_S1 + 52) =
                prefactor_z * *(b + 52 * OS1_S1 + 31) -
                p_over_q * *(b + 80 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 31) +
                one_over_two_q * *(b + 52 * OS1_S1 + 16);
            *(b + 52 * OS1_S1 + 53) =
                prefactor_y * *(b + 52 * OS1_S1 + 33) -
                p_over_q * *(b + 79 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 33) +
                one_over_two_q * *(b + 52 * OS1_S1 + 19);
            *(b + 52 * OS1_S1 + 54) =
                prefactor_y * *(b + 52 * OS1_S1 + 34) -
                p_over_q * *(b + 79 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 34);
            *(b + 52 * OS1_S1 + 55) =
                prefactor_z * *(b + 52 * OS1_S1 + 34) -
                p_over_q * *(b + 80 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 19);
            *(b + 53 * OS1_S1 + 35) =
                prefactor_x * *(b + 53 * OS1_S1 + 20) -
                p_over_q * *(b + 74 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 10);
            *(b + 53 * OS1_S1 + 36) =
                prefactor_y * *(b + 53 * OS1_S1 + 20) -
                p_over_q * *(b + 80 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 20);
            *(b + 53 * OS1_S1 + 37) =
                prefactor_z * *(b + 53 * OS1_S1 + 20) -
                p_over_q * *(b + 81 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 20);
            *(b + 53 * OS1_S1 + 38) =
                prefactor_y * *(b + 53 * OS1_S1 + 21) -
                p_over_q * *(b + 80 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 21) +
                one_over_two_q * *(b + 53 * OS1_S1 + 10);
            *(b + 53 * OS1_S1 + 39) =
                prefactor_y * *(b + 53 * OS1_S1 + 22) -
                p_over_q * *(b + 80 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 22);
            *(b + 53 * OS1_S1 + 40) =
                prefactor_z * *(b + 53 * OS1_S1 + 22) -
                p_over_q * *(b + 81 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 22) +
                one_over_two_q * *(b + 53 * OS1_S1 + 10);
            *(b + 53 * OS1_S1 + 41) = prefactor_x * *(b + 53 * OS1_S1 + 26) -
                                      p_over_q * *(b + 74 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 16);
            *(b + 53 * OS1_S1 + 42) =
                prefactor_z * *(b + 53 * OS1_S1 + 23) -
                p_over_q * *(b + 81 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 23);
            *(b + 53 * OS1_S1 + 43) =
                prefactor_y * *(b + 53 * OS1_S1 + 25) -
                p_over_q * *(b + 80 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 25);
            *(b + 53 * OS1_S1 + 44) = prefactor_x * *(b + 53 * OS1_S1 + 29) -
                                      p_over_q * *(b + 74 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 19);
            *(b + 53 * OS1_S1 + 45) = prefactor_x * *(b + 53 * OS1_S1 + 30) -
                                      p_over_q * *(b + 74 * OS1_S1 + 30);
            *(b + 53 * OS1_S1 + 46) = prefactor_x * *(b + 53 * OS1_S1 + 31) -
                                      p_over_q * *(b + 74 * OS1_S1 + 31);
            *(b + 53 * OS1_S1 + 47) = prefactor_x * *(b + 53 * OS1_S1 + 32) -
                                      p_over_q * *(b + 74 * OS1_S1 + 32);
            *(b + 53 * OS1_S1 + 48) = prefactor_x * *(b + 53 * OS1_S1 + 33) -
                                      p_over_q * *(b + 74 * OS1_S1 + 33);
            *(b + 53 * OS1_S1 + 49) = prefactor_x * *(b + 53 * OS1_S1 + 34) -
                                      p_over_q * *(b + 74 * OS1_S1 + 34);
            *(b + 53 * OS1_S1 + 50) =
                prefactor_y * *(b + 53 * OS1_S1 + 30) -
                p_over_q * *(b + 80 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 16);
            *(b + 53 * OS1_S1 + 51) =
                prefactor_z * *(b + 53 * OS1_S1 + 30) -
                p_over_q * *(b + 81 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 30);
            *(b + 53 * OS1_S1 + 52) =
                prefactor_z * *(b + 53 * OS1_S1 + 31) -
                p_over_q * *(b + 81 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 31) +
                one_over_two_q * *(b + 53 * OS1_S1 + 16);
            *(b + 53 * OS1_S1 + 53) =
                prefactor_y * *(b + 53 * OS1_S1 + 33) -
                p_over_q * *(b + 80 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 33) +
                one_over_two_q * *(b + 53 * OS1_S1 + 19);
            *(b + 53 * OS1_S1 + 54) =
                prefactor_y * *(b + 53 * OS1_S1 + 34) -
                p_over_q * *(b + 80 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 34);
            *(b + 53 * OS1_S1 + 55) =
                prefactor_z * *(b + 53 * OS1_S1 + 34) -
                p_over_q * *(b + 81 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 19);
            *(b + 54 * OS1_S1 + 35) =
                prefactor_x * *(b + 54 * OS1_S1 + 20) -
                p_over_q * *(b + 75 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 54 * OS1_S1 + 10);
            *(b + 54 * OS1_S1 + 36) = prefactor_y * *(b + 54 * OS1_S1 + 20) -
                                      p_over_q * *(b + 81 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 20);
            *(b + 54 * OS1_S1 + 37) =
                prefactor_z * *(b + 54 * OS1_S1 + 20) -
                p_over_q * *(b + 82 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 20);
            *(b + 54 * OS1_S1 + 38) = prefactor_y * *(b + 54 * OS1_S1 + 21) -
                                      p_over_q * *(b + 81 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 10);
            *(b + 54 * OS1_S1 + 39) = prefactor_y * *(b + 54 * OS1_S1 + 22) -
                                      p_over_q * *(b + 81 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 22);
            *(b + 54 * OS1_S1 + 40) =
                prefactor_z * *(b + 54 * OS1_S1 + 22) -
                p_over_q * *(b + 82 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 22) +
                one_over_two_q * *(b + 54 * OS1_S1 + 10);
            *(b + 54 * OS1_S1 + 41) = prefactor_x * *(b + 54 * OS1_S1 + 26) -
                                      p_over_q * *(b + 75 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 16);
            *(b + 54 * OS1_S1 + 42) =
                prefactor_z * *(b + 54 * OS1_S1 + 23) -
                p_over_q * *(b + 82 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 23);
            *(b + 54 * OS1_S1 + 43) = prefactor_y * *(b + 54 * OS1_S1 + 25) -
                                      p_over_q * *(b + 81 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 25);
            *(b + 54 * OS1_S1 + 44) = prefactor_x * *(b + 54 * OS1_S1 + 29) -
                                      p_over_q * *(b + 75 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 19);
            *(b + 54 * OS1_S1 + 45) = prefactor_x * *(b + 54 * OS1_S1 + 30) -
                                      p_over_q * *(b + 75 * OS1_S1 + 30);
            *(b + 54 * OS1_S1 + 46) = prefactor_x * *(b + 54 * OS1_S1 + 31) -
                                      p_over_q * *(b + 75 * OS1_S1 + 31);
            *(b + 54 * OS1_S1 + 47) = prefactor_x * *(b + 54 * OS1_S1 + 32) -
                                      p_over_q * *(b + 75 * OS1_S1 + 32);
            *(b + 54 * OS1_S1 + 48) = prefactor_x * *(b + 54 * OS1_S1 + 33) -
                                      p_over_q * *(b + 75 * OS1_S1 + 33);
            *(b + 54 * OS1_S1 + 49) = prefactor_x * *(b + 54 * OS1_S1 + 34) -
                                      p_over_q * *(b + 75 * OS1_S1 + 34);
            *(b + 54 * OS1_S1 + 50) =
                prefactor_y * *(b + 54 * OS1_S1 + 30) -
                p_over_q * *(b + 81 * OS1_S1 + 30) +
                one_over_two_q * *(b + 34 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 54 * OS1_S1 + 16);
            *(b + 54 * OS1_S1 + 51) =
                prefactor_z * *(b + 54 * OS1_S1 + 30) -
                p_over_q * *(b + 82 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 30);
            *(b + 54 * OS1_S1 + 52) =
                prefactor_z * *(b + 54 * OS1_S1 + 31) -
                p_over_q * *(b + 82 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 31) +
                one_over_two_q * *(b + 54 * OS1_S1 + 16);
            *(b + 54 * OS1_S1 + 53) = prefactor_y * *(b + 54 * OS1_S1 + 33) -
                                      p_over_q * *(b + 81 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 19);
            *(b + 54 * OS1_S1 + 54) = prefactor_y * *(b + 54 * OS1_S1 + 34) -
                                      p_over_q * *(b + 81 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 34);
            *(b + 54 * OS1_S1 + 55) =
                prefactor_z * *(b + 54 * OS1_S1 + 34) -
                p_over_q * *(b + 82 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 54 * OS1_S1 + 19);
            *(b + 55 * OS1_S1 + 35) =
                prefactor_x * *(b + 55 * OS1_S1 + 20) -
                p_over_q * *(b + 76 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 55 * OS1_S1 + 10);
            *(b + 55 * OS1_S1 + 36) = prefactor_y * *(b + 55 * OS1_S1 + 20) -
                                      p_over_q * *(b + 82 * OS1_S1 + 20);
            *(b + 55 * OS1_S1 + 37) =
                prefactor_z * *(b + 55 * OS1_S1 + 20) -
                p_over_q * *(b + 83 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 20);
            *(b + 55 * OS1_S1 + 38) = prefactor_y * *(b + 55 * OS1_S1 + 21) -
                                      p_over_q * *(b + 82 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 10);
            *(b + 55 * OS1_S1 + 39) = prefactor_y * *(b + 55 * OS1_S1 + 22) -
                                      p_over_q * *(b + 82 * OS1_S1 + 22);
            *(b + 55 * OS1_S1 + 40) =
                prefactor_z * *(b + 55 * OS1_S1 + 22) -
                p_over_q * *(b + 83 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 22) +
                one_over_two_q * *(b + 55 * OS1_S1 + 10);
            *(b + 55 * OS1_S1 + 41) = prefactor_x * *(b + 55 * OS1_S1 + 26) -
                                      p_over_q * *(b + 76 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 16);
            *(b + 55 * OS1_S1 + 42) =
                prefactor_z * *(b + 55 * OS1_S1 + 23) -
                p_over_q * *(b + 83 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 23);
            *(b + 55 * OS1_S1 + 43) = prefactor_y * *(b + 55 * OS1_S1 + 25) -
                                      p_over_q * *(b + 82 * OS1_S1 + 25);
            *(b + 55 * OS1_S1 + 44) = prefactor_x * *(b + 55 * OS1_S1 + 29) -
                                      p_over_q * *(b + 76 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 19);
            *(b + 55 * OS1_S1 + 45) = prefactor_x * *(b + 55 * OS1_S1 + 30) -
                                      p_over_q * *(b + 76 * OS1_S1 + 30);
            *(b + 55 * OS1_S1 + 46) = prefactor_x * *(b + 55 * OS1_S1 + 31) -
                                      p_over_q * *(b + 76 * OS1_S1 + 31);
            *(b + 55 * OS1_S1 + 47) = prefactor_x * *(b + 55 * OS1_S1 + 32) -
                                      p_over_q * *(b + 76 * OS1_S1 + 32);
            *(b + 55 * OS1_S1 + 48) = prefactor_y * *(b + 55 * OS1_S1 + 29) -
                                      p_over_q * *(b + 82 * OS1_S1 + 29);
            *(b + 55 * OS1_S1 + 49) = prefactor_x * *(b + 55 * OS1_S1 + 34) -
                                      p_over_q * *(b + 76 * OS1_S1 + 34);
            *(b + 55 * OS1_S1 + 50) =
                prefactor_y * *(b + 55 * OS1_S1 + 30) -
                p_over_q * *(b + 82 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 55 * OS1_S1 + 16);
            *(b + 55 * OS1_S1 + 51) =
                prefactor_z * *(b + 55 * OS1_S1 + 30) -
                p_over_q * *(b + 83 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 30);
            *(b + 55 * OS1_S1 + 52) =
                prefactor_z * *(b + 55 * OS1_S1 + 31) -
                p_over_q * *(b + 83 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 31) +
                one_over_two_q * *(b + 55 * OS1_S1 + 16);
            *(b + 55 * OS1_S1 + 53) = prefactor_y * *(b + 55 * OS1_S1 + 33) -
                                      p_over_q * *(b + 82 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 19);
            *(b + 55 * OS1_S1 + 54) = prefactor_y * *(b + 55 * OS1_S1 + 34) -
                                      p_over_q * *(b + 82 * OS1_S1 + 34);
            *(b + 55 * OS1_S1 + 55) =
                prefactor_z * *(b + 55 * OS1_S1 + 34) -
                p_over_q * *(b + 83 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 55 * OS1_S1 + 19);
            return;
        }

        void transfer_6_5(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 56 * OS1_S1 + 35) =
                prefactor_x * *(b + 56 * OS1_S1 + 20) -
                p_over_q * *(b + 84 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 56 * OS1_S1 + 10);
            *(b + 56 * OS1_S1 + 36) = prefactor_y * *(b + 56 * OS1_S1 + 20) -
                                      p_over_q * *(b + 85 * OS1_S1 + 20);
            *(b + 56 * OS1_S1 + 37) = prefactor_z * *(b + 56 * OS1_S1 + 20) -
                                      p_over_q * *(b + 86 * OS1_S1 + 20);
            *(b + 56 * OS1_S1 + 38) = prefactor_y * *(b + 56 * OS1_S1 + 21) -
                                      p_over_q * *(b + 85 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 10);
            *(b + 56 * OS1_S1 + 39) = prefactor_z * *(b + 56 * OS1_S1 + 21) -
                                      p_over_q * *(b + 86 * OS1_S1 + 21);
            *(b + 56 * OS1_S1 + 40) = prefactor_z * *(b + 56 * OS1_S1 + 22) -
                                      p_over_q * *(b + 86 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 10);
            *(b + 56 * OS1_S1 + 41) =
                prefactor_x * *(b + 56 * OS1_S1 + 26) -
                p_over_q * *(b + 84 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 26) +
                one_over_two_q * *(b + 56 * OS1_S1 + 16);
            *(b + 56 * OS1_S1 + 42) = prefactor_z * *(b + 56 * OS1_S1 + 23) -
                                      p_over_q * *(b + 86 * OS1_S1 + 23);
            *(b + 56 * OS1_S1 + 43) = prefactor_y * *(b + 56 * OS1_S1 + 25) -
                                      p_over_q * *(b + 85 * OS1_S1 + 25);
            *(b + 56 * OS1_S1 + 44) =
                prefactor_x * *(b + 56 * OS1_S1 + 29) -
                p_over_q * *(b + 84 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 29) +
                one_over_two_q * *(b + 56 * OS1_S1 + 19);
            *(b + 56 * OS1_S1 + 45) =
                prefactor_x * *(b + 56 * OS1_S1 + 30) -
                p_over_q * *(b + 84 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 30);
            *(b + 56 * OS1_S1 + 46) = prefactor_z * *(b + 56 * OS1_S1 + 26) -
                                      p_over_q * *(b + 86 * OS1_S1 + 26);
            *(b + 56 * OS1_S1 + 47) =
                prefactor_x * *(b + 56 * OS1_S1 + 32) -
                p_over_q * *(b + 84 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 32);
            *(b + 56 * OS1_S1 + 48) = prefactor_y * *(b + 56 * OS1_S1 + 29) -
                                      p_over_q * *(b + 85 * OS1_S1 + 29);
            *(b + 56 * OS1_S1 + 49) =
                prefactor_x * *(b + 56 * OS1_S1 + 34) -
                p_over_q * *(b + 84 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 34);
            *(b + 56 * OS1_S1 + 50) =
                prefactor_y * *(b + 56 * OS1_S1 + 30) -
                p_over_q * *(b + 85 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 56 * OS1_S1 + 16);
            *(b + 56 * OS1_S1 + 51) = prefactor_z * *(b + 56 * OS1_S1 + 30) -
                                      p_over_q * *(b + 86 * OS1_S1 + 30);
            *(b + 56 * OS1_S1 + 52) = prefactor_z * *(b + 56 * OS1_S1 + 31) -
                                      p_over_q * *(b + 86 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 16);
            *(b + 56 * OS1_S1 + 53) = prefactor_y * *(b + 56 * OS1_S1 + 33) -
                                      p_over_q * *(b + 85 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 19);
            *(b + 56 * OS1_S1 + 54) = prefactor_y * *(b + 56 * OS1_S1 + 34) -
                                      p_over_q * *(b + 85 * OS1_S1 + 34);
            *(b + 56 * OS1_S1 + 55) =
                prefactor_z * *(b + 56 * OS1_S1 + 34) -
                p_over_q * *(b + 86 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 56 * OS1_S1 + 19);
            *(b + 57 * OS1_S1 + 35) =
                prefactor_x * *(b + 57 * OS1_S1 + 20) -
                p_over_q * *(b + 85 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 57 * OS1_S1 + 10);
            *(b + 57 * OS1_S1 + 36) = prefactor_y * *(b + 57 * OS1_S1 + 20) -
                                      p_over_q * *(b + 87 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 20);
            *(b + 57 * OS1_S1 + 37) = prefactor_z * *(b + 57 * OS1_S1 + 20) -
                                      p_over_q * *(b + 88 * OS1_S1 + 20);
            *(b + 57 * OS1_S1 + 38) = prefactor_y * *(b + 57 * OS1_S1 + 21) -
                                      p_over_q * *(b + 87 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 10);
            *(b + 57 * OS1_S1 + 39) = prefactor_z * *(b + 57 * OS1_S1 + 21) -
                                      p_over_q * *(b + 88 * OS1_S1 + 21);
            *(b + 57 * OS1_S1 + 40) = prefactor_z * *(b + 57 * OS1_S1 + 22) -
                                      p_over_q * *(b + 88 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 10);
            *(b + 57 * OS1_S1 + 41) =
                prefactor_x * *(b + 57 * OS1_S1 + 26) -
                p_over_q * *(b + 85 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 26) +
                one_over_two_q * *(b + 57 * OS1_S1 + 16);
            *(b + 57 * OS1_S1 + 42) = prefactor_z * *(b + 57 * OS1_S1 + 23) -
                                      p_over_q * *(b + 88 * OS1_S1 + 23);
            *(b + 57 * OS1_S1 + 43) = prefactor_y * *(b + 57 * OS1_S1 + 25) -
                                      p_over_q * *(b + 87 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 25);
            *(b + 57 * OS1_S1 + 44) =
                prefactor_x * *(b + 57 * OS1_S1 + 29) -
                p_over_q * *(b + 85 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 29) +
                one_over_two_q * *(b + 57 * OS1_S1 + 19);
            *(b + 57 * OS1_S1 + 45) =
                prefactor_x * *(b + 57 * OS1_S1 + 30) -
                p_over_q * *(b + 85 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 30);
            *(b + 57 * OS1_S1 + 46) = prefactor_z * *(b + 57 * OS1_S1 + 26) -
                                      p_over_q * *(b + 88 * OS1_S1 + 26);
            *(b + 57 * OS1_S1 + 47) =
                prefactor_x * *(b + 57 * OS1_S1 + 32) -
                p_over_q * *(b + 85 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 32);
            *(b + 57 * OS1_S1 + 48) = prefactor_y * *(b + 57 * OS1_S1 + 29) -
                                      p_over_q * *(b + 87 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 29);
            *(b + 57 * OS1_S1 + 49) =
                prefactor_x * *(b + 57 * OS1_S1 + 34) -
                p_over_q * *(b + 85 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 34);
            *(b + 57 * OS1_S1 + 50) =
                prefactor_y * *(b + 57 * OS1_S1 + 30) -
                p_over_q * *(b + 87 * OS1_S1 + 30) +
                one_over_two_q * *(b + 35 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 57 * OS1_S1 + 16);
            *(b + 57 * OS1_S1 + 51) = prefactor_z * *(b + 57 * OS1_S1 + 30) -
                                      p_over_q * *(b + 88 * OS1_S1 + 30);
            *(b + 57 * OS1_S1 + 52) = prefactor_z * *(b + 57 * OS1_S1 + 31) -
                                      p_over_q * *(b + 88 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 16);
            *(b + 57 * OS1_S1 + 53) = prefactor_y * *(b + 57 * OS1_S1 + 33) -
                                      p_over_q * *(b + 87 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 19);
            *(b + 57 * OS1_S1 + 54) = prefactor_y * *(b + 57 * OS1_S1 + 34) -
                                      p_over_q * *(b + 87 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 34);
            *(b + 57 * OS1_S1 + 55) =
                prefactor_z * *(b + 57 * OS1_S1 + 34) -
                p_over_q * *(b + 88 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 57 * OS1_S1 + 19);
            *(b + 58 * OS1_S1 + 35) =
                prefactor_x * *(b + 58 * OS1_S1 + 20) -
                p_over_q * *(b + 86 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 58 * OS1_S1 + 10);
            *(b + 58 * OS1_S1 + 36) = prefactor_y * *(b + 58 * OS1_S1 + 20) -
                                      p_over_q * *(b + 88 * OS1_S1 + 20);
            *(b + 58 * OS1_S1 + 37) = prefactor_z * *(b + 58 * OS1_S1 + 20) -
                                      p_over_q * *(b + 89 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 20);
            *(b + 58 * OS1_S1 + 38) = prefactor_y * *(b + 58 * OS1_S1 + 21) -
                                      p_over_q * *(b + 88 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 10);
            *(b + 58 * OS1_S1 + 39) = prefactor_y * *(b + 58 * OS1_S1 + 22) -
                                      p_over_q * *(b + 88 * OS1_S1 + 22);
            *(b + 58 * OS1_S1 + 40) = prefactor_z * *(b + 58 * OS1_S1 + 22) -
                                      p_over_q * *(b + 89 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 10);
            *(b + 58 * OS1_S1 + 41) =
                prefactor_x * *(b + 58 * OS1_S1 + 26) -
                p_over_q * *(b + 86 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 26) +
                one_over_two_q * *(b + 58 * OS1_S1 + 16);
            *(b + 58 * OS1_S1 + 42) = prefactor_z * *(b + 58 * OS1_S1 + 23) -
                                      p_over_q * *(b + 89 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 23);
            *(b + 58 * OS1_S1 + 43) = prefactor_y * *(b + 58 * OS1_S1 + 25) -
                                      p_over_q * *(b + 88 * OS1_S1 + 25);
            *(b + 58 * OS1_S1 + 44) =
                prefactor_x * *(b + 58 * OS1_S1 + 29) -
                p_over_q * *(b + 86 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 29) +
                one_over_two_q * *(b + 58 * OS1_S1 + 19);
            *(b + 58 * OS1_S1 + 45) =
                prefactor_x * *(b + 58 * OS1_S1 + 30) -
                p_over_q * *(b + 86 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 30);
            *(b + 58 * OS1_S1 + 46) = prefactor_z * *(b + 58 * OS1_S1 + 26) -
                                      p_over_q * *(b + 89 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 26);
            *(b + 58 * OS1_S1 + 47) =
                prefactor_x * *(b + 58 * OS1_S1 + 32) -
                p_over_q * *(b + 86 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 32);
            *(b + 58 * OS1_S1 + 48) = prefactor_y * *(b + 58 * OS1_S1 + 29) -
                                      p_over_q * *(b + 88 * OS1_S1 + 29);
            *(b + 58 * OS1_S1 + 49) =
                prefactor_x * *(b + 58 * OS1_S1 + 34) -
                p_over_q * *(b + 86 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 34);
            *(b + 58 * OS1_S1 + 50) =
                prefactor_y * *(b + 58 * OS1_S1 + 30) -
                p_over_q * *(b + 88 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 58 * OS1_S1 + 16);
            *(b + 58 * OS1_S1 + 51) = prefactor_z * *(b + 58 * OS1_S1 + 30) -
                                      p_over_q * *(b + 89 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 30);
            *(b + 58 * OS1_S1 + 52) = prefactor_z * *(b + 58 * OS1_S1 + 31) -
                                      p_over_q * *(b + 89 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 16);
            *(b + 58 * OS1_S1 + 53) = prefactor_y * *(b + 58 * OS1_S1 + 33) -
                                      p_over_q * *(b + 88 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 19);
            *(b + 58 * OS1_S1 + 54) = prefactor_y * *(b + 58 * OS1_S1 + 34) -
                                      p_over_q * *(b + 88 * OS1_S1 + 34);
            *(b + 58 * OS1_S1 + 55) =
                prefactor_z * *(b + 58 * OS1_S1 + 34) -
                p_over_q * *(b + 89 * OS1_S1 + 34) +
                one_over_two_q * *(b + 35 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 58 * OS1_S1 + 19);
            *(b + 59 * OS1_S1 + 35) =
                prefactor_x * *(b + 59 * OS1_S1 + 20) -
                p_over_q * *(b + 87 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 59 * OS1_S1 + 10);
            *(b + 59 * OS1_S1 + 36) =
                prefactor_y * *(b + 59 * OS1_S1 + 20) -
                p_over_q * *(b + 90 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 20);
            *(b + 59 * OS1_S1 + 37) = prefactor_z * *(b + 59 * OS1_S1 + 20) -
                                      p_over_q * *(b + 91 * OS1_S1 + 20);
            *(b + 59 * OS1_S1 + 38) =
                prefactor_y * *(b + 59 * OS1_S1 + 21) -
                p_over_q * *(b + 90 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 21) +
                one_over_two_q * *(b + 59 * OS1_S1 + 10);
            *(b + 59 * OS1_S1 + 39) = prefactor_z * *(b + 59 * OS1_S1 + 21) -
                                      p_over_q * *(b + 91 * OS1_S1 + 21);
            *(b + 59 * OS1_S1 + 40) = prefactor_z * *(b + 59 * OS1_S1 + 22) -
                                      p_over_q * *(b + 91 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 10);
            *(b + 59 * OS1_S1 + 41) =
                prefactor_x * *(b + 59 * OS1_S1 + 26) -
                p_over_q * *(b + 87 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 26) +
                one_over_two_q * *(b + 59 * OS1_S1 + 16);
            *(b + 59 * OS1_S1 + 42) = prefactor_z * *(b + 59 * OS1_S1 + 23) -
                                      p_over_q * *(b + 91 * OS1_S1 + 23);
            *(b + 59 * OS1_S1 + 43) =
                prefactor_y * *(b + 59 * OS1_S1 + 25) -
                p_over_q * *(b + 90 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 25);
            *(b + 59 * OS1_S1 + 44) =
                prefactor_x * *(b + 59 * OS1_S1 + 29) -
                p_over_q * *(b + 87 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 29) +
                one_over_two_q * *(b + 59 * OS1_S1 + 19);
            *(b + 59 * OS1_S1 + 45) =
                prefactor_x * *(b + 59 * OS1_S1 + 30) -
                p_over_q * *(b + 87 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 30);
            *(b + 59 * OS1_S1 + 46) = prefactor_z * *(b + 59 * OS1_S1 + 26) -
                                      p_over_q * *(b + 91 * OS1_S1 + 26);
            *(b + 59 * OS1_S1 + 47) =
                prefactor_x * *(b + 59 * OS1_S1 + 32) -
                p_over_q * *(b + 87 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 32);
            *(b + 59 * OS1_S1 + 48) =
                prefactor_y * *(b + 59 * OS1_S1 + 29) -
                p_over_q * *(b + 90 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 29);
            *(b + 59 * OS1_S1 + 49) =
                prefactor_x * *(b + 59 * OS1_S1 + 34) -
                p_over_q * *(b + 87 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 34);
            *(b + 59 * OS1_S1 + 50) =
                prefactor_y * *(b + 59 * OS1_S1 + 30) -
                p_over_q * *(b + 90 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 59 * OS1_S1 + 16);
            *(b + 59 * OS1_S1 + 51) = prefactor_z * *(b + 59 * OS1_S1 + 30) -
                                      p_over_q * *(b + 91 * OS1_S1 + 30);
            *(b + 59 * OS1_S1 + 52) = prefactor_z * *(b + 59 * OS1_S1 + 31) -
                                      p_over_q * *(b + 91 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 16);
            *(b + 59 * OS1_S1 + 53) =
                prefactor_y * *(b + 59 * OS1_S1 + 33) -
                p_over_q * *(b + 90 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 33) +
                one_over_two_q * *(b + 59 * OS1_S1 + 19);
            *(b + 59 * OS1_S1 + 54) =
                prefactor_y * *(b + 59 * OS1_S1 + 34) -
                p_over_q * *(b + 90 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 34);
            *(b + 59 * OS1_S1 + 55) =
                prefactor_z * *(b + 59 * OS1_S1 + 34) -
                p_over_q * *(b + 91 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 59 * OS1_S1 + 19);
            *(b + 60 * OS1_S1 + 35) =
                prefactor_x * *(b + 60 * OS1_S1 + 20) -
                p_over_q * *(b + 88 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 60 * OS1_S1 + 10);
            *(b + 60 * OS1_S1 + 36) = prefactor_y * *(b + 60 * OS1_S1 + 20) -
                                      p_over_q * *(b + 91 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 20);
            *(b + 60 * OS1_S1 + 37) = prefactor_z * *(b + 60 * OS1_S1 + 20) -
                                      p_over_q * *(b + 92 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 20);
            *(b + 60 * OS1_S1 + 38) = prefactor_y * *(b + 60 * OS1_S1 + 21) -
                                      p_over_q * *(b + 91 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 10);
            *(b + 60 * OS1_S1 + 39) = prefactor_z * *(b + 60 * OS1_S1 + 21) -
                                      p_over_q * *(b + 92 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 21);
            *(b + 60 * OS1_S1 + 40) = prefactor_z * *(b + 60 * OS1_S1 + 22) -
                                      p_over_q * *(b + 92 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 10);
            *(b + 60 * OS1_S1 + 41) =
                prefactor_x * *(b + 60 * OS1_S1 + 26) -
                p_over_q * *(b + 88 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 26) +
                one_over_two_q * *(b + 60 * OS1_S1 + 16);
            *(b + 60 * OS1_S1 + 42) = prefactor_z * *(b + 60 * OS1_S1 + 23) -
                                      p_over_q * *(b + 92 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 23);
            *(b + 60 * OS1_S1 + 43) = prefactor_y * *(b + 60 * OS1_S1 + 25) -
                                      p_over_q * *(b + 91 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 25);
            *(b + 60 * OS1_S1 + 44) =
                prefactor_x * *(b + 60 * OS1_S1 + 29) -
                p_over_q * *(b + 88 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 29) +
                one_over_two_q * *(b + 60 * OS1_S1 + 19);
            *(b + 60 * OS1_S1 + 45) =
                prefactor_x * *(b + 60 * OS1_S1 + 30) -
                p_over_q * *(b + 88 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 30);
            *(b + 60 * OS1_S1 + 46) = prefactor_z * *(b + 60 * OS1_S1 + 26) -
                                      p_over_q * *(b + 92 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 26);
            *(b + 60 * OS1_S1 + 47) =
                prefactor_x * *(b + 60 * OS1_S1 + 32) -
                p_over_q * *(b + 88 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 32);
            *(b + 60 * OS1_S1 + 48) = prefactor_y * *(b + 60 * OS1_S1 + 29) -
                                      p_over_q * *(b + 91 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 29);
            *(b + 60 * OS1_S1 + 49) =
                prefactor_x * *(b + 60 * OS1_S1 + 34) -
                p_over_q * *(b + 88 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 34);
            *(b + 60 * OS1_S1 + 50) =
                prefactor_y * *(b + 60 * OS1_S1 + 30) -
                p_over_q * *(b + 91 * OS1_S1 + 30) +
                one_over_two_q * *(b + 37 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 60 * OS1_S1 + 16);
            *(b + 60 * OS1_S1 + 51) = prefactor_z * *(b + 60 * OS1_S1 + 30) -
                                      p_over_q * *(b + 92 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 30);
            *(b + 60 * OS1_S1 + 52) = prefactor_z * *(b + 60 * OS1_S1 + 31) -
                                      p_over_q * *(b + 92 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 16);
            *(b + 60 * OS1_S1 + 53) = prefactor_y * *(b + 60 * OS1_S1 + 33) -
                                      p_over_q * *(b + 91 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 19);
            *(b + 60 * OS1_S1 + 54) = prefactor_y * *(b + 60 * OS1_S1 + 34) -
                                      p_over_q * *(b + 91 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 34);
            *(b + 60 * OS1_S1 + 55) =
                prefactor_z * *(b + 60 * OS1_S1 + 34) -
                p_over_q * *(b + 92 * OS1_S1 + 34) +
                one_over_two_q * *(b + 36 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 60 * OS1_S1 + 19);
            *(b + 61 * OS1_S1 + 35) =
                prefactor_x * *(b + 61 * OS1_S1 + 20) -
                p_over_q * *(b + 89 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 61 * OS1_S1 + 10);
            *(b + 61 * OS1_S1 + 36) = prefactor_y * *(b + 61 * OS1_S1 + 20) -
                                      p_over_q * *(b + 92 * OS1_S1 + 20);
            *(b + 61 * OS1_S1 + 37) =
                prefactor_z * *(b + 61 * OS1_S1 + 20) -
                p_over_q * *(b + 93 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 20);
            *(b + 61 * OS1_S1 + 38) = prefactor_y * *(b + 61 * OS1_S1 + 21) -
                                      p_over_q * *(b + 92 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 10);
            *(b + 61 * OS1_S1 + 39) = prefactor_y * *(b + 61 * OS1_S1 + 22) -
                                      p_over_q * *(b + 92 * OS1_S1 + 22);
            *(b + 61 * OS1_S1 + 40) =
                prefactor_z * *(b + 61 * OS1_S1 + 22) -
                p_over_q * *(b + 93 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 22) +
                one_over_two_q * *(b + 61 * OS1_S1 + 10);
            *(b + 61 * OS1_S1 + 41) =
                prefactor_x * *(b + 61 * OS1_S1 + 26) -
                p_over_q * *(b + 89 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 26) +
                one_over_two_q * *(b + 61 * OS1_S1 + 16);
            *(b + 61 * OS1_S1 + 42) =
                prefactor_z * *(b + 61 * OS1_S1 + 23) -
                p_over_q * *(b + 93 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 23);
            *(b + 61 * OS1_S1 + 43) = prefactor_y * *(b + 61 * OS1_S1 + 25) -
                                      p_over_q * *(b + 92 * OS1_S1 + 25);
            *(b + 61 * OS1_S1 + 44) =
                prefactor_x * *(b + 61 * OS1_S1 + 29) -
                p_over_q * *(b + 89 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 29) +
                one_over_two_q * *(b + 61 * OS1_S1 + 19);
            *(b + 61 * OS1_S1 + 45) =
                prefactor_x * *(b + 61 * OS1_S1 + 30) -
                p_over_q * *(b + 89 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 30);
            *(b + 61 * OS1_S1 + 46) =
                prefactor_z * *(b + 61 * OS1_S1 + 26) -
                p_over_q * *(b + 93 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 26);
            *(b + 61 * OS1_S1 + 47) =
                prefactor_x * *(b + 61 * OS1_S1 + 32) -
                p_over_q * *(b + 89 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 32);
            *(b + 61 * OS1_S1 + 48) = prefactor_y * *(b + 61 * OS1_S1 + 29) -
                                      p_over_q * *(b + 92 * OS1_S1 + 29);
            *(b + 61 * OS1_S1 + 49) =
                prefactor_x * *(b + 61 * OS1_S1 + 34) -
                p_over_q * *(b + 89 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 34);
            *(b + 61 * OS1_S1 + 50) =
                prefactor_y * *(b + 61 * OS1_S1 + 30) -
                p_over_q * *(b + 92 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 61 * OS1_S1 + 16);
            *(b + 61 * OS1_S1 + 51) =
                prefactor_z * *(b + 61 * OS1_S1 + 30) -
                p_over_q * *(b + 93 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 30);
            *(b + 61 * OS1_S1 + 52) =
                prefactor_z * *(b + 61 * OS1_S1 + 31) -
                p_over_q * *(b + 93 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 31) +
                one_over_two_q * *(b + 61 * OS1_S1 + 16);
            *(b + 61 * OS1_S1 + 53) = prefactor_y * *(b + 61 * OS1_S1 + 33) -
                                      p_over_q * *(b + 92 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 19);
            *(b + 61 * OS1_S1 + 54) = prefactor_y * *(b + 61 * OS1_S1 + 34) -
                                      p_over_q * *(b + 92 * OS1_S1 + 34);
            *(b + 61 * OS1_S1 + 55) =
                prefactor_z * *(b + 61 * OS1_S1 + 34) -
                p_over_q * *(b + 93 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 61 * OS1_S1 + 19);
            *(b + 62 * OS1_S1 + 35) =
                prefactor_x * *(b + 62 * OS1_S1 + 20) -
                p_over_q * *(b + 90 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 10);
            *(b + 62 * OS1_S1 + 36) =
                prefactor_y * *(b + 62 * OS1_S1 + 20) -
                p_over_q * *(b + 94 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 20);
            *(b + 62 * OS1_S1 + 37) = prefactor_z * *(b + 62 * OS1_S1 + 20) -
                                      p_over_q * *(b + 95 * OS1_S1 + 20);
            *(b + 62 * OS1_S1 + 38) =
                prefactor_y * *(b + 62 * OS1_S1 + 21) -
                p_over_q * *(b + 94 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 21) +
                one_over_two_q * *(b + 62 * OS1_S1 + 10);
            *(b + 62 * OS1_S1 + 39) = prefactor_z * *(b + 62 * OS1_S1 + 21) -
                                      p_over_q * *(b + 95 * OS1_S1 + 21);
            *(b + 62 * OS1_S1 + 40) = prefactor_z * *(b + 62 * OS1_S1 + 22) -
                                      p_over_q * *(b + 95 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 10);
            *(b + 62 * OS1_S1 + 41) =
                prefactor_x * *(b + 62 * OS1_S1 + 26) -
                p_over_q * *(b + 90 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 26) +
                one_over_two_q * *(b + 62 * OS1_S1 + 16);
            *(b + 62 * OS1_S1 + 42) = prefactor_z * *(b + 62 * OS1_S1 + 23) -
                                      p_over_q * *(b + 95 * OS1_S1 + 23);
            *(b + 62 * OS1_S1 + 43) =
                prefactor_y * *(b + 62 * OS1_S1 + 25) -
                p_over_q * *(b + 94 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 25);
            *(b + 62 * OS1_S1 + 44) =
                prefactor_x * *(b + 62 * OS1_S1 + 29) -
                p_over_q * *(b + 90 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 29) +
                one_over_two_q * *(b + 62 * OS1_S1 + 19);
            *(b + 62 * OS1_S1 + 45) =
                prefactor_x * *(b + 62 * OS1_S1 + 30) -
                p_over_q * *(b + 90 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 30);
            *(b + 62 * OS1_S1 + 46) = prefactor_z * *(b + 62 * OS1_S1 + 26) -
                                      p_over_q * *(b + 95 * OS1_S1 + 26);
            *(b + 62 * OS1_S1 + 47) =
                prefactor_x * *(b + 62 * OS1_S1 + 32) -
                p_over_q * *(b + 90 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 32);
            *(b + 62 * OS1_S1 + 48) =
                prefactor_y * *(b + 62 * OS1_S1 + 29) -
                p_over_q * *(b + 94 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 29);
            *(b + 62 * OS1_S1 + 49) =
                prefactor_x * *(b + 62 * OS1_S1 + 34) -
                p_over_q * *(b + 90 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 34);
            *(b + 62 * OS1_S1 + 50) =
                prefactor_y * *(b + 62 * OS1_S1 + 30) -
                p_over_q * *(b + 94 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 16);
            *(b + 62 * OS1_S1 + 51) = prefactor_z * *(b + 62 * OS1_S1 + 30) -
                                      p_over_q * *(b + 95 * OS1_S1 + 30);
            *(b + 62 * OS1_S1 + 52) = prefactor_z * *(b + 62 * OS1_S1 + 31) -
                                      p_over_q * *(b + 95 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 16);
            *(b + 62 * OS1_S1 + 53) =
                prefactor_y * *(b + 62 * OS1_S1 + 33) -
                p_over_q * *(b + 94 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 33) +
                one_over_two_q * *(b + 62 * OS1_S1 + 19);
            *(b + 62 * OS1_S1 + 54) =
                prefactor_y * *(b + 62 * OS1_S1 + 34) -
                p_over_q * *(b + 94 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 34);
            *(b + 62 * OS1_S1 + 55) =
                prefactor_z * *(b + 62 * OS1_S1 + 34) -
                p_over_q * *(b + 95 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 19);
            *(b + 63 * OS1_S1 + 35) =
                prefactor_x * *(b + 63 * OS1_S1 + 20) -
                p_over_q * *(b + 91 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 10);
            *(b + 63 * OS1_S1 + 36) =
                prefactor_y * *(b + 63 * OS1_S1 + 20) -
                p_over_q * *(b + 95 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 20);
            *(b + 63 * OS1_S1 + 37) = prefactor_z * *(b + 63 * OS1_S1 + 20) -
                                      p_over_q * *(b + 96 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 20);
            *(b + 63 * OS1_S1 + 38) =
                prefactor_y * *(b + 63 * OS1_S1 + 21) -
                p_over_q * *(b + 95 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 21) +
                one_over_two_q * *(b + 63 * OS1_S1 + 10);
            *(b + 63 * OS1_S1 + 39) = prefactor_z * *(b + 63 * OS1_S1 + 21) -
                                      p_over_q * *(b + 96 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 21);
            *(b + 63 * OS1_S1 + 40) = prefactor_z * *(b + 63 * OS1_S1 + 22) -
                                      p_over_q * *(b + 96 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 63 * OS1_S1 + 10);
            *(b + 63 * OS1_S1 + 41) =
                prefactor_x * *(b + 63 * OS1_S1 + 26) -
                p_over_q * *(b + 91 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 26) +
                one_over_two_q * *(b + 63 * OS1_S1 + 16);
            *(b + 63 * OS1_S1 + 42) = prefactor_z * *(b + 63 * OS1_S1 + 23) -
                                      p_over_q * *(b + 96 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 23);
            *(b + 63 * OS1_S1 + 43) =
                prefactor_y * *(b + 63 * OS1_S1 + 25) -
                p_over_q * *(b + 95 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 25);
            *(b + 63 * OS1_S1 + 44) =
                prefactor_x * *(b + 63 * OS1_S1 + 29) -
                p_over_q * *(b + 91 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 29) +
                one_over_two_q * *(b + 63 * OS1_S1 + 19);
            *(b + 63 * OS1_S1 + 45) =
                prefactor_x * *(b + 63 * OS1_S1 + 30) -
                p_over_q * *(b + 91 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 30);
            *(b + 63 * OS1_S1 + 46) = prefactor_z * *(b + 63 * OS1_S1 + 26) -
                                      p_over_q * *(b + 96 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 26);
            *(b + 63 * OS1_S1 + 47) =
                prefactor_x * *(b + 63 * OS1_S1 + 32) -
                p_over_q * *(b + 91 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 32);
            *(b + 63 * OS1_S1 + 48) =
                prefactor_y * *(b + 63 * OS1_S1 + 29) -
                p_over_q * *(b + 95 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 29);
            *(b + 63 * OS1_S1 + 49) =
                prefactor_x * *(b + 63 * OS1_S1 + 34) -
                p_over_q * *(b + 91 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 34);
            *(b + 63 * OS1_S1 + 50) =
                prefactor_y * *(b + 63 * OS1_S1 + 30) -
                p_over_q * *(b + 95 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 16);
            *(b + 63 * OS1_S1 + 51) = prefactor_z * *(b + 63 * OS1_S1 + 30) -
                                      p_over_q * *(b + 96 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 30);
            *(b + 63 * OS1_S1 + 52) = prefactor_z * *(b + 63 * OS1_S1 + 31) -
                                      p_over_q * *(b + 96 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 63 * OS1_S1 + 16);
            *(b + 63 * OS1_S1 + 53) =
                prefactor_y * *(b + 63 * OS1_S1 + 33) -
                p_over_q * *(b + 95 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 33) +
                one_over_two_q * *(b + 63 * OS1_S1 + 19);
            *(b + 63 * OS1_S1 + 54) =
                prefactor_y * *(b + 63 * OS1_S1 + 34) -
                p_over_q * *(b + 95 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 34);
            *(b + 63 * OS1_S1 + 55) =
                prefactor_z * *(b + 63 * OS1_S1 + 34) -
                p_over_q * *(b + 96 * OS1_S1 + 34) +
                one_over_two_q * *(b + 38 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 19);
            *(b + 64 * OS1_S1 + 35) =
                prefactor_x * *(b + 64 * OS1_S1 + 20) -
                p_over_q * *(b + 92 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 10);
            *(b + 64 * OS1_S1 + 36) = prefactor_y * *(b + 64 * OS1_S1 + 20) -
                                      p_over_q * *(b + 96 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 20);
            *(b + 64 * OS1_S1 + 37) =
                prefactor_z * *(b + 64 * OS1_S1 + 20) -
                p_over_q * *(b + 97 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 20);
            *(b + 64 * OS1_S1 + 38) = prefactor_y * *(b + 64 * OS1_S1 + 21) -
                                      p_over_q * *(b + 96 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 64 * OS1_S1 + 10);
            *(b + 64 * OS1_S1 + 39) = prefactor_y * *(b + 64 * OS1_S1 + 22) -
                                      p_over_q * *(b + 96 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 22);
            *(b + 64 * OS1_S1 + 40) =
                prefactor_z * *(b + 64 * OS1_S1 + 22) -
                p_over_q * *(b + 97 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 22) +
                one_over_two_q * *(b + 64 * OS1_S1 + 10);
            *(b + 64 * OS1_S1 + 41) =
                prefactor_x * *(b + 64 * OS1_S1 + 26) -
                p_over_q * *(b + 92 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 26) +
                one_over_two_q * *(b + 64 * OS1_S1 + 16);
            *(b + 64 * OS1_S1 + 42) =
                prefactor_z * *(b + 64 * OS1_S1 + 23) -
                p_over_q * *(b + 97 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 23);
            *(b + 64 * OS1_S1 + 43) = prefactor_y * *(b + 64 * OS1_S1 + 25) -
                                      p_over_q * *(b + 96 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 25);
            *(b + 64 * OS1_S1 + 44) =
                prefactor_x * *(b + 64 * OS1_S1 + 29) -
                p_over_q * *(b + 92 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 29) +
                one_over_two_q * *(b + 64 * OS1_S1 + 19);
            *(b + 64 * OS1_S1 + 45) =
                prefactor_x * *(b + 64 * OS1_S1 + 30) -
                p_over_q * *(b + 92 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 30);
            *(b + 64 * OS1_S1 + 46) =
                prefactor_z * *(b + 64 * OS1_S1 + 26) -
                p_over_q * *(b + 97 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 26);
            *(b + 64 * OS1_S1 + 47) =
                prefactor_x * *(b + 64 * OS1_S1 + 32) -
                p_over_q * *(b + 92 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 32);
            *(b + 64 * OS1_S1 + 48) = prefactor_y * *(b + 64 * OS1_S1 + 29) -
                                      p_over_q * *(b + 96 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 29);
            *(b + 64 * OS1_S1 + 49) =
                prefactor_x * *(b + 64 * OS1_S1 + 34) -
                p_over_q * *(b + 92 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 34);
            *(b + 64 * OS1_S1 + 50) =
                prefactor_y * *(b + 64 * OS1_S1 + 30) -
                p_over_q * *(b + 96 * OS1_S1 + 30) +
                one_over_two_q * *(b + 40 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 16);
            *(b + 64 * OS1_S1 + 51) =
                prefactor_z * *(b + 64 * OS1_S1 + 30) -
                p_over_q * *(b + 97 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 30);
            *(b + 64 * OS1_S1 + 52) =
                prefactor_z * *(b + 64 * OS1_S1 + 31) -
                p_over_q * *(b + 97 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 31) +
                one_over_two_q * *(b + 64 * OS1_S1 + 16);
            *(b + 64 * OS1_S1 + 53) = prefactor_y * *(b + 64 * OS1_S1 + 33) -
                                      p_over_q * *(b + 96 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 64 * OS1_S1 + 19);
            *(b + 64 * OS1_S1 + 54) = prefactor_y * *(b + 64 * OS1_S1 + 34) -
                                      p_over_q * *(b + 96 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 34);
            *(b + 64 * OS1_S1 + 55) =
                prefactor_z * *(b + 64 * OS1_S1 + 34) -
                p_over_q * *(b + 97 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 19);
            *(b + 65 * OS1_S1 + 35) =
                prefactor_x * *(b + 65 * OS1_S1 + 20) -
                p_over_q * *(b + 93 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 10);
            *(b + 65 * OS1_S1 + 36) = prefactor_y * *(b + 65 * OS1_S1 + 20) -
                                      p_over_q * *(b + 97 * OS1_S1 + 20);
            *(b + 65 * OS1_S1 + 37) =
                prefactor_z * *(b + 65 * OS1_S1 + 20) -
                p_over_q * *(b + 98 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 20);
            *(b + 65 * OS1_S1 + 38) = prefactor_y * *(b + 65 * OS1_S1 + 21) -
                                      p_over_q * *(b + 97 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 10);
            *(b + 65 * OS1_S1 + 39) = prefactor_y * *(b + 65 * OS1_S1 + 22) -
                                      p_over_q * *(b + 97 * OS1_S1 + 22);
            *(b + 65 * OS1_S1 + 40) =
                prefactor_z * *(b + 65 * OS1_S1 + 22) -
                p_over_q * *(b + 98 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 22) +
                one_over_two_q * *(b + 65 * OS1_S1 + 10);
            *(b + 65 * OS1_S1 + 41) =
                prefactor_x * *(b + 65 * OS1_S1 + 26) -
                p_over_q * *(b + 93 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 26) +
                one_over_two_q * *(b + 65 * OS1_S1 + 16);
            *(b + 65 * OS1_S1 + 42) =
                prefactor_z * *(b + 65 * OS1_S1 + 23) -
                p_over_q * *(b + 98 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 23);
            *(b + 65 * OS1_S1 + 43) = prefactor_y * *(b + 65 * OS1_S1 + 25) -
                                      p_over_q * *(b + 97 * OS1_S1 + 25);
            *(b + 65 * OS1_S1 + 44) =
                prefactor_x * *(b + 65 * OS1_S1 + 29) -
                p_over_q * *(b + 93 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 29) +
                one_over_two_q * *(b + 65 * OS1_S1 + 19);
            *(b + 65 * OS1_S1 + 45) =
                prefactor_x * *(b + 65 * OS1_S1 + 30) -
                p_over_q * *(b + 93 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 30);
            *(b + 65 * OS1_S1 + 46) =
                prefactor_z * *(b + 65 * OS1_S1 + 26) -
                p_over_q * *(b + 98 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 26);
            *(b + 65 * OS1_S1 + 47) =
                prefactor_x * *(b + 65 * OS1_S1 + 32) -
                p_over_q * *(b + 93 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 32);
            *(b + 65 * OS1_S1 + 48) = prefactor_y * *(b + 65 * OS1_S1 + 29) -
                                      p_over_q * *(b + 97 * OS1_S1 + 29);
            *(b + 65 * OS1_S1 + 49) =
                prefactor_x * *(b + 65 * OS1_S1 + 34) -
                p_over_q * *(b + 93 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 34);
            *(b + 65 * OS1_S1 + 50) =
                prefactor_y * *(b + 65 * OS1_S1 + 30) -
                p_over_q * *(b + 97 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 16);
            *(b + 65 * OS1_S1 + 51) =
                prefactor_z * *(b + 65 * OS1_S1 + 30) -
                p_over_q * *(b + 98 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 30);
            *(b + 65 * OS1_S1 + 52) =
                prefactor_z * *(b + 65 * OS1_S1 + 31) -
                p_over_q * *(b + 98 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 31) +
                one_over_two_q * *(b + 65 * OS1_S1 + 16);
            *(b + 65 * OS1_S1 + 53) = prefactor_y * *(b + 65 * OS1_S1 + 33) -
                                      p_over_q * *(b + 97 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 19);
            *(b + 65 * OS1_S1 + 54) = prefactor_y * *(b + 65 * OS1_S1 + 34) -
                                      p_over_q * *(b + 97 * OS1_S1 + 34);
            *(b + 65 * OS1_S1 + 55) =
                prefactor_z * *(b + 65 * OS1_S1 + 34) -
                p_over_q * *(b + 98 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 19);
            *(b + 66 * OS1_S1 + 35) =
                prefactor_x * *(b + 66 * OS1_S1 + 20) -
                p_over_q * *(b + 94 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 66 * OS1_S1 + 10);
            *(b + 66 * OS1_S1 + 36) =
                prefactor_y * *(b + 66 * OS1_S1 + 20) -
                p_over_q * *(b + 99 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 20);
            *(b + 66 * OS1_S1 + 37) = prefactor_z * *(b + 66 * OS1_S1 + 20) -
                                      p_over_q * *(b + 100 * OS1_S1 + 20);
            *(b + 66 * OS1_S1 + 38) =
                prefactor_y * *(b + 66 * OS1_S1 + 21) -
                p_over_q * *(b + 99 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 21) +
                one_over_two_q * *(b + 66 * OS1_S1 + 10);
            *(b + 66 * OS1_S1 + 39) = prefactor_z * *(b + 66 * OS1_S1 + 21) -
                                      p_over_q * *(b + 100 * OS1_S1 + 21);
            *(b + 66 * OS1_S1 + 40) = prefactor_z * *(b + 66 * OS1_S1 + 22) -
                                      p_over_q * *(b + 100 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 66 * OS1_S1 + 10);
            *(b + 66 * OS1_S1 + 41) =
                prefactor_x * *(b + 66 * OS1_S1 + 26) -
                p_over_q * *(b + 94 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 26) +
                one_over_two_q * *(b + 66 * OS1_S1 + 16);
            *(b + 66 * OS1_S1 + 42) = prefactor_z * *(b + 66 * OS1_S1 + 23) -
                                      p_over_q * *(b + 100 * OS1_S1 + 23);
            *(b + 66 * OS1_S1 + 43) =
                prefactor_y * *(b + 66 * OS1_S1 + 25) -
                p_over_q * *(b + 99 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 25);
            *(b + 66 * OS1_S1 + 44) =
                prefactor_x * *(b + 66 * OS1_S1 + 29) -
                p_over_q * *(b + 94 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 29) +
                one_over_two_q * *(b + 66 * OS1_S1 + 19);
            *(b + 66 * OS1_S1 + 45) =
                prefactor_x * *(b + 66 * OS1_S1 + 30) -
                p_over_q * *(b + 94 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 30);
            *(b + 66 * OS1_S1 + 46) = prefactor_z * *(b + 66 * OS1_S1 + 26) -
                                      p_over_q * *(b + 100 * OS1_S1 + 26);
            *(b + 66 * OS1_S1 + 47) =
                prefactor_x * *(b + 66 * OS1_S1 + 32) -
                p_over_q * *(b + 94 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 32);
            *(b + 66 * OS1_S1 + 48) =
                prefactor_x * *(b + 66 * OS1_S1 + 33) -
                p_over_q * *(b + 94 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 33);
            *(b + 66 * OS1_S1 + 49) =
                prefactor_x * *(b + 66 * OS1_S1 + 34) -
                p_over_q * *(b + 94 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 34);
            *(b + 66 * OS1_S1 + 50) =
                prefactor_y * *(b + 66 * OS1_S1 + 30) -
                p_over_q * *(b + 99 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 66 * OS1_S1 + 16);
            *(b + 66 * OS1_S1 + 51) = prefactor_z * *(b + 66 * OS1_S1 + 30) -
                                      p_over_q * *(b + 100 * OS1_S1 + 30);
            *(b + 66 * OS1_S1 + 52) = prefactor_z * *(b + 66 * OS1_S1 + 31) -
                                      p_over_q * *(b + 100 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 66 * OS1_S1 + 16);
            *(b + 66 * OS1_S1 + 53) =
                prefactor_y * *(b + 66 * OS1_S1 + 33) -
                p_over_q * *(b + 99 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 33) +
                one_over_two_q * *(b + 66 * OS1_S1 + 19);
            *(b + 66 * OS1_S1 + 54) =
                prefactor_y * *(b + 66 * OS1_S1 + 34) -
                p_over_q * *(b + 99 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 34);
            *(b + 66 * OS1_S1 + 55) =
                prefactor_z * *(b + 66 * OS1_S1 + 34) -
                p_over_q * *(b + 100 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 66 * OS1_S1 + 19);
            *(b + 67 * OS1_S1 + 35) =
                prefactor_x * *(b + 67 * OS1_S1 + 20) -
                p_over_q * *(b + 95 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 10);
            *(b + 67 * OS1_S1 + 36) =
                prefactor_y * *(b + 67 * OS1_S1 + 20) -
                p_over_q * *(b + 100 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 20);
            *(b + 67 * OS1_S1 + 37) = prefactor_z * *(b + 67 * OS1_S1 + 20) -
                                      p_over_q * *(b + 101 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 20);
            *(b + 67 * OS1_S1 + 38) =
                prefactor_y * *(b + 67 * OS1_S1 + 21) -
                p_over_q * *(b + 100 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 21) +
                one_over_two_q * *(b + 67 * OS1_S1 + 10);
            *(b + 67 * OS1_S1 + 39) = prefactor_z * *(b + 67 * OS1_S1 + 21) -
                                      p_over_q * *(b + 101 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 21);
            *(b + 67 * OS1_S1 + 40) = prefactor_z * *(b + 67 * OS1_S1 + 22) -
                                      p_over_q * *(b + 101 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 67 * OS1_S1 + 10);
            *(b + 67 * OS1_S1 + 41) =
                prefactor_x * *(b + 67 * OS1_S1 + 26) -
                p_over_q * *(b + 95 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 26) +
                one_over_two_q * *(b + 67 * OS1_S1 + 16);
            *(b + 67 * OS1_S1 + 42) = prefactor_z * *(b + 67 * OS1_S1 + 23) -
                                      p_over_q * *(b + 101 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 23);
            *(b + 67 * OS1_S1 + 43) =
                prefactor_y * *(b + 67 * OS1_S1 + 25) -
                p_over_q * *(b + 100 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 25);
            *(b + 67 * OS1_S1 + 44) =
                prefactor_x * *(b + 67 * OS1_S1 + 29) -
                p_over_q * *(b + 95 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 29) +
                one_over_two_q * *(b + 67 * OS1_S1 + 19);
            *(b + 67 * OS1_S1 + 45) =
                prefactor_x * *(b + 67 * OS1_S1 + 30) -
                p_over_q * *(b + 95 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 30);
            *(b + 67 * OS1_S1 + 46) = prefactor_z * *(b + 67 * OS1_S1 + 26) -
                                      p_over_q * *(b + 101 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 26);
            *(b + 67 * OS1_S1 + 47) =
                prefactor_x * *(b + 67 * OS1_S1 + 32) -
                p_over_q * *(b + 95 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 32);
            *(b + 67 * OS1_S1 + 48) =
                prefactor_x * *(b + 67 * OS1_S1 + 33) -
                p_over_q * *(b + 95 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 33);
            *(b + 67 * OS1_S1 + 49) =
                prefactor_x * *(b + 67 * OS1_S1 + 34) -
                p_over_q * *(b + 95 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 34);
            *(b + 67 * OS1_S1 + 50) =
                prefactor_y * *(b + 67 * OS1_S1 + 30) -
                p_over_q * *(b + 100 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 16);
            *(b + 67 * OS1_S1 + 51) = prefactor_z * *(b + 67 * OS1_S1 + 30) -
                                      p_over_q * *(b + 101 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 30);
            *(b + 67 * OS1_S1 + 52) = prefactor_z * *(b + 67 * OS1_S1 + 31) -
                                      p_over_q * *(b + 101 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 67 * OS1_S1 + 16);
            *(b + 67 * OS1_S1 + 53) =
                prefactor_y * *(b + 67 * OS1_S1 + 33) -
                p_over_q * *(b + 100 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 33) +
                one_over_two_q * *(b + 67 * OS1_S1 + 19);
            *(b + 67 * OS1_S1 + 54) =
                prefactor_y * *(b + 67 * OS1_S1 + 34) -
                p_over_q * *(b + 100 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 34);
            *(b + 67 * OS1_S1 + 55) =
                prefactor_z * *(b + 67 * OS1_S1 + 34) -
                p_over_q * *(b + 101 * OS1_S1 + 34) +
                one_over_two_q * *(b + 41 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 19);
            *(b + 68 * OS1_S1 + 35) =
                prefactor_x * *(b + 68 * OS1_S1 + 20) -
                p_over_q * *(b + 96 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 68 * OS1_S1 + 10);
            *(b + 68 * OS1_S1 + 36) =
                prefactor_y * *(b + 68 * OS1_S1 + 20) -
                p_over_q * *(b + 101 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 20);
            *(b + 68 * OS1_S1 + 37) =
                prefactor_z * *(b + 68 * OS1_S1 + 20) -
                p_over_q * *(b + 102 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 20);
            *(b + 68 * OS1_S1 + 38) =
                prefactor_y * *(b + 68 * OS1_S1 + 21) -
                p_over_q * *(b + 101 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 21) +
                one_over_two_q * *(b + 68 * OS1_S1 + 10);
            *(b + 68 * OS1_S1 + 39) =
                prefactor_z * *(b + 68 * OS1_S1 + 21) -
                p_over_q * *(b + 102 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 21);
            *(b + 68 * OS1_S1 + 40) =
                prefactor_z * *(b + 68 * OS1_S1 + 22) -
                p_over_q * *(b + 102 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 22) +
                one_over_two_q * *(b + 68 * OS1_S1 + 10);
            *(b + 68 * OS1_S1 + 41) =
                prefactor_x * *(b + 68 * OS1_S1 + 26) -
                p_over_q * *(b + 96 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 26) +
                one_over_two_q * *(b + 68 * OS1_S1 + 16);
            *(b + 68 * OS1_S1 + 42) =
                prefactor_z * *(b + 68 * OS1_S1 + 23) -
                p_over_q * *(b + 102 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 23);
            *(b + 68 * OS1_S1 + 43) =
                prefactor_y * *(b + 68 * OS1_S1 + 25) -
                p_over_q * *(b + 101 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 25);
            *(b + 68 * OS1_S1 + 44) =
                prefactor_x * *(b + 68 * OS1_S1 + 29) -
                p_over_q * *(b + 96 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 29) +
                one_over_two_q * *(b + 68 * OS1_S1 + 19);
            *(b + 68 * OS1_S1 + 45) =
                prefactor_x * *(b + 68 * OS1_S1 + 30) -
                p_over_q * *(b + 96 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 30);
            *(b + 68 * OS1_S1 + 46) =
                prefactor_z * *(b + 68 * OS1_S1 + 26) -
                p_over_q * *(b + 102 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 26);
            *(b + 68 * OS1_S1 + 47) =
                prefactor_x * *(b + 68 * OS1_S1 + 32) -
                p_over_q * *(b + 96 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 32);
            *(b + 68 * OS1_S1 + 48) =
                prefactor_y * *(b + 68 * OS1_S1 + 29) -
                p_over_q * *(b + 101 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 29);
            *(b + 68 * OS1_S1 + 49) =
                prefactor_x * *(b + 68 * OS1_S1 + 34) -
                p_over_q * *(b + 96 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 34);
            *(b + 68 * OS1_S1 + 50) =
                prefactor_y * *(b + 68 * OS1_S1 + 30) -
                p_over_q * *(b + 101 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 68 * OS1_S1 + 16);
            *(b + 68 * OS1_S1 + 51) =
                prefactor_z * *(b + 68 * OS1_S1 + 30) -
                p_over_q * *(b + 102 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 30);
            *(b + 68 * OS1_S1 + 52) =
                prefactor_z * *(b + 68 * OS1_S1 + 31) -
                p_over_q * *(b + 102 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 31) +
                one_over_two_q * *(b + 68 * OS1_S1 + 16);
            *(b + 68 * OS1_S1 + 53) =
                prefactor_y * *(b + 68 * OS1_S1 + 33) -
                p_over_q * *(b + 101 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 33) +
                one_over_two_q * *(b + 68 * OS1_S1 + 19);
            *(b + 68 * OS1_S1 + 54) =
                prefactor_y * *(b + 68 * OS1_S1 + 34) -
                p_over_q * *(b + 101 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 34);
            *(b + 68 * OS1_S1 + 55) =
                prefactor_z * *(b + 68 * OS1_S1 + 34) -
                p_over_q * *(b + 102 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 68 * OS1_S1 + 19);
            *(b + 69 * OS1_S1 + 35) =
                prefactor_x * *(b + 69 * OS1_S1 + 20) -
                p_over_q * *(b + 97 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 10);
            *(b + 69 * OS1_S1 + 36) = prefactor_y * *(b + 69 * OS1_S1 + 20) -
                                      p_over_q * *(b + 102 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 20);
            *(b + 69 * OS1_S1 + 37) =
                prefactor_z * *(b + 69 * OS1_S1 + 20) -
                p_over_q * *(b + 103 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 20);
            *(b + 69 * OS1_S1 + 38) = prefactor_y * *(b + 69 * OS1_S1 + 21) -
                                      p_over_q * *(b + 102 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 69 * OS1_S1 + 10);
            *(b + 69 * OS1_S1 + 39) = prefactor_y * *(b + 69 * OS1_S1 + 22) -
                                      p_over_q * *(b + 102 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 22);
            *(b + 69 * OS1_S1 + 40) =
                prefactor_z * *(b + 69 * OS1_S1 + 22) -
                p_over_q * *(b + 103 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 22) +
                one_over_two_q * *(b + 69 * OS1_S1 + 10);
            *(b + 69 * OS1_S1 + 41) =
                prefactor_x * *(b + 69 * OS1_S1 + 26) -
                p_over_q * *(b + 97 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 26) +
                one_over_two_q * *(b + 69 * OS1_S1 + 16);
            *(b + 69 * OS1_S1 + 42) =
                prefactor_z * *(b + 69 * OS1_S1 + 23) -
                p_over_q * *(b + 103 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 23);
            *(b + 69 * OS1_S1 + 43) = prefactor_y * *(b + 69 * OS1_S1 + 25) -
                                      p_over_q * *(b + 102 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 25);
            *(b + 69 * OS1_S1 + 44) =
                prefactor_x * *(b + 69 * OS1_S1 + 29) -
                p_over_q * *(b + 97 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 29) +
                one_over_two_q * *(b + 69 * OS1_S1 + 19);
            *(b + 69 * OS1_S1 + 45) =
                prefactor_x * *(b + 69 * OS1_S1 + 30) -
                p_over_q * *(b + 97 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 30);
            *(b + 69 * OS1_S1 + 46) =
                prefactor_x * *(b + 69 * OS1_S1 + 31) -
                p_over_q * *(b + 97 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 31);
            *(b + 69 * OS1_S1 + 47) =
                prefactor_x * *(b + 69 * OS1_S1 + 32) -
                p_over_q * *(b + 97 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 32);
            *(b + 69 * OS1_S1 + 48) = prefactor_y * *(b + 69 * OS1_S1 + 29) -
                                      p_over_q * *(b + 102 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 29);
            *(b + 69 * OS1_S1 + 49) =
                prefactor_x * *(b + 69 * OS1_S1 + 34) -
                p_over_q * *(b + 97 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 34);
            *(b + 69 * OS1_S1 + 50) =
                prefactor_y * *(b + 69 * OS1_S1 + 30) -
                p_over_q * *(b + 102 * OS1_S1 + 30) +
                one_over_two_q * *(b + 44 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 16);
            *(b + 69 * OS1_S1 + 51) =
                prefactor_z * *(b + 69 * OS1_S1 + 30) -
                p_over_q * *(b + 103 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 30);
            *(b + 69 * OS1_S1 + 52) =
                prefactor_z * *(b + 69 * OS1_S1 + 31) -
                p_over_q * *(b + 103 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 31) +
                one_over_two_q * *(b + 69 * OS1_S1 + 16);
            *(b + 69 * OS1_S1 + 53) = prefactor_y * *(b + 69 * OS1_S1 + 33) -
                                      p_over_q * *(b + 102 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 69 * OS1_S1 + 19);
            *(b + 69 * OS1_S1 + 54) = prefactor_y * *(b + 69 * OS1_S1 + 34) -
                                      p_over_q * *(b + 102 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 34);
            *(b + 69 * OS1_S1 + 55) =
                prefactor_z * *(b + 69 * OS1_S1 + 34) -
                p_over_q * *(b + 103 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 19);
            *(b + 70 * OS1_S1 + 35) =
                prefactor_x * *(b + 70 * OS1_S1 + 20) -
                p_over_q * *(b + 98 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 70 * OS1_S1 + 10);
            *(b + 70 * OS1_S1 + 36) = prefactor_y * *(b + 70 * OS1_S1 + 20) -
                                      p_over_q * *(b + 103 * OS1_S1 + 20);
            *(b + 70 * OS1_S1 + 37) =
                prefactor_z * *(b + 70 * OS1_S1 + 20) -
                p_over_q * *(b + 104 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 20);
            *(b + 70 * OS1_S1 + 38) = prefactor_y * *(b + 70 * OS1_S1 + 21) -
                                      p_over_q * *(b + 103 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 70 * OS1_S1 + 10);
            *(b + 70 * OS1_S1 + 39) = prefactor_y * *(b + 70 * OS1_S1 + 22) -
                                      p_over_q * *(b + 103 * OS1_S1 + 22);
            *(b + 70 * OS1_S1 + 40) =
                prefactor_z * *(b + 70 * OS1_S1 + 22) -
                p_over_q * *(b + 104 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 22) +
                one_over_two_q * *(b + 70 * OS1_S1 + 10);
            *(b + 70 * OS1_S1 + 41) =
                prefactor_x * *(b + 70 * OS1_S1 + 26) -
                p_over_q * *(b + 98 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 26) +
                one_over_two_q * *(b + 70 * OS1_S1 + 16);
            *(b + 70 * OS1_S1 + 42) =
                prefactor_z * *(b + 70 * OS1_S1 + 23) -
                p_over_q * *(b + 104 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 23);
            *(b + 70 * OS1_S1 + 43) = prefactor_y * *(b + 70 * OS1_S1 + 25) -
                                      p_over_q * *(b + 103 * OS1_S1 + 25);
            *(b + 70 * OS1_S1 + 44) =
                prefactor_x * *(b + 70 * OS1_S1 + 29) -
                p_over_q * *(b + 98 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 29) +
                one_over_two_q * *(b + 70 * OS1_S1 + 19);
            *(b + 70 * OS1_S1 + 45) =
                prefactor_x * *(b + 70 * OS1_S1 + 30) -
                p_over_q * *(b + 98 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 30);
            *(b + 70 * OS1_S1 + 46) =
                prefactor_x * *(b + 70 * OS1_S1 + 31) -
                p_over_q * *(b + 98 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 31);
            *(b + 70 * OS1_S1 + 47) =
                prefactor_x * *(b + 70 * OS1_S1 + 32) -
                p_over_q * *(b + 98 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 32);
            *(b + 70 * OS1_S1 + 48) = prefactor_y * *(b + 70 * OS1_S1 + 29) -
                                      p_over_q * *(b + 103 * OS1_S1 + 29);
            *(b + 70 * OS1_S1 + 49) =
                prefactor_x * *(b + 70 * OS1_S1 + 34) -
                p_over_q * *(b + 98 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 34);
            *(b + 70 * OS1_S1 + 50) =
                prefactor_y * *(b + 70 * OS1_S1 + 30) -
                p_over_q * *(b + 103 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 70 * OS1_S1 + 16);
            *(b + 70 * OS1_S1 + 51) =
                prefactor_z * *(b + 70 * OS1_S1 + 30) -
                p_over_q * *(b + 104 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 30);
            *(b + 70 * OS1_S1 + 52) =
                prefactor_z * *(b + 70 * OS1_S1 + 31) -
                p_over_q * *(b + 104 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 31) +
                one_over_two_q * *(b + 70 * OS1_S1 + 16);
            *(b + 70 * OS1_S1 + 53) = prefactor_y * *(b + 70 * OS1_S1 + 33) -
                                      p_over_q * *(b + 103 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 70 * OS1_S1 + 19);
            *(b + 70 * OS1_S1 + 54) = prefactor_y * *(b + 70 * OS1_S1 + 34) -
                                      p_over_q * *(b + 103 * OS1_S1 + 34);
            *(b + 70 * OS1_S1 + 55) =
                prefactor_z * *(b + 70 * OS1_S1 + 34) -
                p_over_q * *(b + 104 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 70 * OS1_S1 + 19);
            *(b + 71 * OS1_S1 + 35) =
                prefactor_x * *(b + 71 * OS1_S1 + 20) -
                p_over_q * *(b + 99 * OS1_S1 + 20) +
                one_over_two_q * *(b + 50 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 71 * OS1_S1 + 10);
            *(b + 71 * OS1_S1 + 36) =
                prefactor_y * *(b + 71 * OS1_S1 + 20) -
                p_over_q * *(b + 105 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 20);
            *(b + 71 * OS1_S1 + 37) = prefactor_z * *(b + 71 * OS1_S1 + 20) -
                                      p_over_q * *(b + 106 * OS1_S1 + 20);
            *(b + 71 * OS1_S1 + 38) =
                prefactor_y * *(b + 71 * OS1_S1 + 21) -
                p_over_q * *(b + 105 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 21) +
                one_over_two_q * *(b + 71 * OS1_S1 + 10);
            *(b + 71 * OS1_S1 + 39) = prefactor_z * *(b + 71 * OS1_S1 + 21) -
                                      p_over_q * *(b + 106 * OS1_S1 + 21);
            *(b + 71 * OS1_S1 + 40) = prefactor_z * *(b + 71 * OS1_S1 + 22) -
                                      p_over_q * *(b + 106 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 10);
            *(b + 71 * OS1_S1 + 41) = prefactor_x * *(b + 71 * OS1_S1 + 26) -
                                      p_over_q * *(b + 99 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 16);
            *(b + 71 * OS1_S1 + 42) = prefactor_z * *(b + 71 * OS1_S1 + 23) -
                                      p_over_q * *(b + 106 * OS1_S1 + 23);
            *(b + 71 * OS1_S1 + 43) =
                prefactor_y * *(b + 71 * OS1_S1 + 25) -
                p_over_q * *(b + 105 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 25);
            *(b + 71 * OS1_S1 + 44) = prefactor_x * *(b + 71 * OS1_S1 + 29) -
                                      p_over_q * *(b + 99 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 19);
            *(b + 71 * OS1_S1 + 45) = prefactor_x * *(b + 71 * OS1_S1 + 30) -
                                      p_over_q * *(b + 99 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 30);
            *(b + 71 * OS1_S1 + 46) = prefactor_z * *(b + 71 * OS1_S1 + 26) -
                                      p_over_q * *(b + 106 * OS1_S1 + 26);
            *(b + 71 * OS1_S1 + 47) = prefactor_x * *(b + 71 * OS1_S1 + 32) -
                                      p_over_q * *(b + 99 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 32);
            *(b + 71 * OS1_S1 + 48) = prefactor_x * *(b + 71 * OS1_S1 + 33) -
                                      p_over_q * *(b + 99 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 33);
            *(b + 71 * OS1_S1 + 49) = prefactor_x * *(b + 71 * OS1_S1 + 34) -
                                      p_over_q * *(b + 99 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 34);
            *(b + 71 * OS1_S1 + 50) =
                prefactor_y * *(b + 71 * OS1_S1 + 30) -
                p_over_q * *(b + 105 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 71 * OS1_S1 + 16);
            *(b + 71 * OS1_S1 + 51) = prefactor_z * *(b + 71 * OS1_S1 + 30) -
                                      p_over_q * *(b + 106 * OS1_S1 + 30);
            *(b + 71 * OS1_S1 + 52) = prefactor_z * *(b + 71 * OS1_S1 + 31) -
                                      p_over_q * *(b + 106 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 16);
            *(b + 71 * OS1_S1 + 53) =
                prefactor_y * *(b + 71 * OS1_S1 + 33) -
                p_over_q * *(b + 105 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 33) +
                one_over_two_q * *(b + 71 * OS1_S1 + 19);
            *(b + 71 * OS1_S1 + 54) =
                prefactor_y * *(b + 71 * OS1_S1 + 34) -
                p_over_q * *(b + 105 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 34);
            *(b + 71 * OS1_S1 + 55) =
                prefactor_z * *(b + 71 * OS1_S1 + 34) -
                p_over_q * *(b + 106 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 71 * OS1_S1 + 19);
            *(b + 72 * OS1_S1 + 35) =
                prefactor_x * *(b + 72 * OS1_S1 + 20) -
                p_over_q * *(b + 100 * OS1_S1 + 20) +
                one_over_two_q * *(b + 51 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 72 * OS1_S1 + 10);
            *(b + 72 * OS1_S1 + 36) =
                prefactor_y * *(b + 72 * OS1_S1 + 20) -
                p_over_q * *(b + 106 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 20);
            *(b + 72 * OS1_S1 + 37) = prefactor_z * *(b + 72 * OS1_S1 + 20) -
                                      p_over_q * *(b + 107 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 20);
            *(b + 72 * OS1_S1 + 38) =
                prefactor_y * *(b + 72 * OS1_S1 + 21) -
                p_over_q * *(b + 106 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 21) +
                one_over_two_q * *(b + 72 * OS1_S1 + 10);
            *(b + 72 * OS1_S1 + 39) = prefactor_z * *(b + 72 * OS1_S1 + 21) -
                                      p_over_q * *(b + 107 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 21);
            *(b + 72 * OS1_S1 + 40) = prefactor_z * *(b + 72 * OS1_S1 + 22) -
                                      p_over_q * *(b + 107 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 10);
            *(b + 72 * OS1_S1 + 41) = prefactor_x * *(b + 72 * OS1_S1 + 26) -
                                      p_over_q * *(b + 100 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 16);
            *(b + 72 * OS1_S1 + 42) = prefactor_z * *(b + 72 * OS1_S1 + 23) -
                                      p_over_q * *(b + 107 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 23);
            *(b + 72 * OS1_S1 + 43) =
                prefactor_y * *(b + 72 * OS1_S1 + 25) -
                p_over_q * *(b + 106 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 25);
            *(b + 72 * OS1_S1 + 44) = prefactor_x * *(b + 72 * OS1_S1 + 29) -
                                      p_over_q * *(b + 100 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 19);
            *(b + 72 * OS1_S1 + 45) = prefactor_x * *(b + 72 * OS1_S1 + 30) -
                                      p_over_q * *(b + 100 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 30);
            *(b + 72 * OS1_S1 + 46) = prefactor_z * *(b + 72 * OS1_S1 + 26) -
                                      p_over_q * *(b + 107 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 26);
            *(b + 72 * OS1_S1 + 47) = prefactor_x * *(b + 72 * OS1_S1 + 32) -
                                      p_over_q * *(b + 100 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 32);
            *(b + 72 * OS1_S1 + 48) = prefactor_x * *(b + 72 * OS1_S1 + 33) -
                                      p_over_q * *(b + 100 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 33);
            *(b + 72 * OS1_S1 + 49) = prefactor_x * *(b + 72 * OS1_S1 + 34) -
                                      p_over_q * *(b + 100 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 34);
            *(b + 72 * OS1_S1 + 50) =
                prefactor_y * *(b + 72 * OS1_S1 + 30) -
                p_over_q * *(b + 106 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 72 * OS1_S1 + 16);
            *(b + 72 * OS1_S1 + 51) = prefactor_z * *(b + 72 * OS1_S1 + 30) -
                                      p_over_q * *(b + 107 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 30);
            *(b + 72 * OS1_S1 + 52) = prefactor_z * *(b + 72 * OS1_S1 + 31) -
                                      p_over_q * *(b + 107 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 16);
            *(b + 72 * OS1_S1 + 53) =
                prefactor_y * *(b + 72 * OS1_S1 + 33) -
                p_over_q * *(b + 106 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 33) +
                one_over_two_q * *(b + 72 * OS1_S1 + 19);
            *(b + 72 * OS1_S1 + 54) =
                prefactor_y * *(b + 72 * OS1_S1 + 34) -
                p_over_q * *(b + 106 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 34);
            *(b + 72 * OS1_S1 + 55) =
                prefactor_z * *(b + 72 * OS1_S1 + 34) -
                p_over_q * *(b + 107 * OS1_S1 + 34) +
                one_over_two_q * *(b + 45 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 72 * OS1_S1 + 19);
            *(b + 73 * OS1_S1 + 35) =
                prefactor_x * *(b + 73 * OS1_S1 + 20) -
                p_over_q * *(b + 101 * OS1_S1 + 20) +
                one_over_two_q * *(b + 52 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 10);
            *(b + 73 * OS1_S1 + 36) =
                prefactor_y * *(b + 73 * OS1_S1 + 20) -
                p_over_q * *(b + 107 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 20);
            *(b + 73 * OS1_S1 + 37) =
                prefactor_z * *(b + 73 * OS1_S1 + 20) -
                p_over_q * *(b + 108 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 20);
            *(b + 73 * OS1_S1 + 38) =
                prefactor_y * *(b + 73 * OS1_S1 + 21) -
                p_over_q * *(b + 107 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 21) +
                one_over_two_q * *(b + 73 * OS1_S1 + 10);
            *(b + 73 * OS1_S1 + 39) =
                prefactor_z * *(b + 73 * OS1_S1 + 21) -
                p_over_q * *(b + 108 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 21);
            *(b + 73 * OS1_S1 + 40) =
                prefactor_z * *(b + 73 * OS1_S1 + 22) -
                p_over_q * *(b + 108 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 22) +
                one_over_two_q * *(b + 73 * OS1_S1 + 10);
            *(b + 73 * OS1_S1 + 41) = prefactor_x * *(b + 73 * OS1_S1 + 26) -
                                      p_over_q * *(b + 101 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 73 * OS1_S1 + 16);
            *(b + 73 * OS1_S1 + 42) =
                prefactor_z * *(b + 73 * OS1_S1 + 23) -
                p_over_q * *(b + 108 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 23);
            *(b + 73 * OS1_S1 + 43) =
                prefactor_y * *(b + 73 * OS1_S1 + 25) -
                p_over_q * *(b + 107 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 25);
            *(b + 73 * OS1_S1 + 44) = prefactor_x * *(b + 73 * OS1_S1 + 29) -
                                      p_over_q * *(b + 101 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 73 * OS1_S1 + 19);
            *(b + 73 * OS1_S1 + 45) = prefactor_x * *(b + 73 * OS1_S1 + 30) -
                                      p_over_q * *(b + 101 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 30);
            *(b + 73 * OS1_S1 + 46) = prefactor_x * *(b + 73 * OS1_S1 + 31) -
                                      p_over_q * *(b + 101 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 31);
            *(b + 73 * OS1_S1 + 47) = prefactor_x * *(b + 73 * OS1_S1 + 32) -
                                      p_over_q * *(b + 101 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 32);
            *(b + 73 * OS1_S1 + 48) = prefactor_x * *(b + 73 * OS1_S1 + 33) -
                                      p_over_q * *(b + 101 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 33);
            *(b + 73 * OS1_S1 + 49) = prefactor_x * *(b + 73 * OS1_S1 + 34) -
                                      p_over_q * *(b + 101 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 34);
            *(b + 73 * OS1_S1 + 50) =
                prefactor_y * *(b + 73 * OS1_S1 + 30) -
                p_over_q * *(b + 107 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 16);
            *(b + 73 * OS1_S1 + 51) =
                prefactor_z * *(b + 73 * OS1_S1 + 30) -
                p_over_q * *(b + 108 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 30);
            *(b + 73 * OS1_S1 + 52) =
                prefactor_z * *(b + 73 * OS1_S1 + 31) -
                p_over_q * *(b + 108 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 31) +
                one_over_two_q * *(b + 73 * OS1_S1 + 16);
            *(b + 73 * OS1_S1 + 53) =
                prefactor_y * *(b + 73 * OS1_S1 + 33) -
                p_over_q * *(b + 107 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 33) +
                one_over_two_q * *(b + 73 * OS1_S1 + 19);
            *(b + 73 * OS1_S1 + 54) =
                prefactor_y * *(b + 73 * OS1_S1 + 34) -
                p_over_q * *(b + 107 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 34);
            *(b + 73 * OS1_S1 + 55) =
                prefactor_z * *(b + 73 * OS1_S1 + 34) -
                p_over_q * *(b + 108 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 19);
            *(b + 74 * OS1_S1 + 35) =
                prefactor_x * *(b + 74 * OS1_S1 + 20) -
                p_over_q * *(b + 102 * OS1_S1 + 20) +
                one_over_two_q * *(b + 53 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 10);
            *(b + 74 * OS1_S1 + 36) =
                prefactor_y * *(b + 74 * OS1_S1 + 20) -
                p_over_q * *(b + 108 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 20);
            *(b + 74 * OS1_S1 + 37) =
                prefactor_z * *(b + 74 * OS1_S1 + 20) -
                p_over_q * *(b + 109 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 20);
            *(b + 74 * OS1_S1 + 38) =
                prefactor_y * *(b + 74 * OS1_S1 + 21) -
                p_over_q * *(b + 108 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 21) +
                one_over_two_q * *(b + 74 * OS1_S1 + 10);
            *(b + 74 * OS1_S1 + 39) =
                prefactor_y * *(b + 74 * OS1_S1 + 22) -
                p_over_q * *(b + 108 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 22);
            *(b + 74 * OS1_S1 + 40) =
                prefactor_z * *(b + 74 * OS1_S1 + 22) -
                p_over_q * *(b + 109 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 22) +
                one_over_two_q * *(b + 74 * OS1_S1 + 10);
            *(b + 74 * OS1_S1 + 41) = prefactor_x * *(b + 74 * OS1_S1 + 26) -
                                      p_over_q * *(b + 102 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 74 * OS1_S1 + 16);
            *(b + 74 * OS1_S1 + 42) =
                prefactor_z * *(b + 74 * OS1_S1 + 23) -
                p_over_q * *(b + 109 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 23);
            *(b + 74 * OS1_S1 + 43) =
                prefactor_y * *(b + 74 * OS1_S1 + 25) -
                p_over_q * *(b + 108 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 25);
            *(b + 74 * OS1_S1 + 44) = prefactor_x * *(b + 74 * OS1_S1 + 29) -
                                      p_over_q * *(b + 102 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 74 * OS1_S1 + 19);
            *(b + 74 * OS1_S1 + 45) = prefactor_x * *(b + 74 * OS1_S1 + 30) -
                                      p_over_q * *(b + 102 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 30);
            *(b + 74 * OS1_S1 + 46) = prefactor_x * *(b + 74 * OS1_S1 + 31) -
                                      p_over_q * *(b + 102 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 31);
            *(b + 74 * OS1_S1 + 47) = prefactor_x * *(b + 74 * OS1_S1 + 32) -
                                      p_over_q * *(b + 102 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 32);
            *(b + 74 * OS1_S1 + 48) = prefactor_x * *(b + 74 * OS1_S1 + 33) -
                                      p_over_q * *(b + 102 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 33);
            *(b + 74 * OS1_S1 + 49) = prefactor_x * *(b + 74 * OS1_S1 + 34) -
                                      p_over_q * *(b + 102 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 34);
            *(b + 74 * OS1_S1 + 50) =
                prefactor_y * *(b + 74 * OS1_S1 + 30) -
                p_over_q * *(b + 108 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 16);
            *(b + 74 * OS1_S1 + 51) =
                prefactor_z * *(b + 74 * OS1_S1 + 30) -
                p_over_q * *(b + 109 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 30);
            *(b + 74 * OS1_S1 + 52) =
                prefactor_z * *(b + 74 * OS1_S1 + 31) -
                p_over_q * *(b + 109 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 31) +
                one_over_two_q * *(b + 74 * OS1_S1 + 16);
            *(b + 74 * OS1_S1 + 53) =
                prefactor_y * *(b + 74 * OS1_S1 + 33) -
                p_over_q * *(b + 108 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 33) +
                one_over_two_q * *(b + 74 * OS1_S1 + 19);
            *(b + 74 * OS1_S1 + 54) =
                prefactor_y * *(b + 74 * OS1_S1 + 34) -
                p_over_q * *(b + 108 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 34);
            *(b + 74 * OS1_S1 + 55) =
                prefactor_z * *(b + 74 * OS1_S1 + 34) -
                p_over_q * *(b + 109 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 19);
            *(b + 75 * OS1_S1 + 35) =
                prefactor_x * *(b + 75 * OS1_S1 + 20) -
                p_over_q * *(b + 103 * OS1_S1 + 20) +
                one_over_two_q * *(b + 54 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 75 * OS1_S1 + 10);
            *(b + 75 * OS1_S1 + 36) = prefactor_y * *(b + 75 * OS1_S1 + 20) -
                                      p_over_q * *(b + 109 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 20);
            *(b + 75 * OS1_S1 + 37) =
                prefactor_z * *(b + 75 * OS1_S1 + 20) -
                p_over_q * *(b + 110 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 20);
            *(b + 75 * OS1_S1 + 38) = prefactor_y * *(b + 75 * OS1_S1 + 21) -
                                      p_over_q * *(b + 109 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 10);
            *(b + 75 * OS1_S1 + 39) = prefactor_y * *(b + 75 * OS1_S1 + 22) -
                                      p_over_q * *(b + 109 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 22);
            *(b + 75 * OS1_S1 + 40) =
                prefactor_z * *(b + 75 * OS1_S1 + 22) -
                p_over_q * *(b + 110 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 22) +
                one_over_two_q * *(b + 75 * OS1_S1 + 10);
            *(b + 75 * OS1_S1 + 41) = prefactor_x * *(b + 75 * OS1_S1 + 26) -
                                      p_over_q * *(b + 103 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 16);
            *(b + 75 * OS1_S1 + 42) =
                prefactor_z * *(b + 75 * OS1_S1 + 23) -
                p_over_q * *(b + 110 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 23);
            *(b + 75 * OS1_S1 + 43) = prefactor_y * *(b + 75 * OS1_S1 + 25) -
                                      p_over_q * *(b + 109 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 25);
            *(b + 75 * OS1_S1 + 44) = prefactor_x * *(b + 75 * OS1_S1 + 29) -
                                      p_over_q * *(b + 103 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 19);
            *(b + 75 * OS1_S1 + 45) = prefactor_x * *(b + 75 * OS1_S1 + 30) -
                                      p_over_q * *(b + 103 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 30);
            *(b + 75 * OS1_S1 + 46) = prefactor_x * *(b + 75 * OS1_S1 + 31) -
                                      p_over_q * *(b + 103 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 31);
            *(b + 75 * OS1_S1 + 47) = prefactor_x * *(b + 75 * OS1_S1 + 32) -
                                      p_over_q * *(b + 103 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 32);
            *(b + 75 * OS1_S1 + 48) = prefactor_y * *(b + 75 * OS1_S1 + 29) -
                                      p_over_q * *(b + 109 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 29);
            *(b + 75 * OS1_S1 + 49) = prefactor_x * *(b + 75 * OS1_S1 + 34) -
                                      p_over_q * *(b + 103 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 34);
            *(b + 75 * OS1_S1 + 50) =
                prefactor_y * *(b + 75 * OS1_S1 + 30) -
                p_over_q * *(b + 109 * OS1_S1 + 30) +
                one_over_two_q * *(b + 49 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 75 * OS1_S1 + 16);
            *(b + 75 * OS1_S1 + 51) =
                prefactor_z * *(b + 75 * OS1_S1 + 30) -
                p_over_q * *(b + 110 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 30);
            *(b + 75 * OS1_S1 + 52) =
                prefactor_z * *(b + 75 * OS1_S1 + 31) -
                p_over_q * *(b + 110 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 31) +
                one_over_two_q * *(b + 75 * OS1_S1 + 16);
            *(b + 75 * OS1_S1 + 53) = prefactor_y * *(b + 75 * OS1_S1 + 33) -
                                      p_over_q * *(b + 109 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 19);
            *(b + 75 * OS1_S1 + 54) = prefactor_y * *(b + 75 * OS1_S1 + 34) -
                                      p_over_q * *(b + 109 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 34);
            *(b + 75 * OS1_S1 + 55) =
                prefactor_z * *(b + 75 * OS1_S1 + 34) -
                p_over_q * *(b + 110 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 75 * OS1_S1 + 19);
            *(b + 76 * OS1_S1 + 35) =
                prefactor_x * *(b + 76 * OS1_S1 + 20) -
                p_over_q * *(b + 104 * OS1_S1 + 20) +
                one_over_two_q * *(b + 55 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 76 * OS1_S1 + 10);
            *(b + 76 * OS1_S1 + 36) = prefactor_y * *(b + 76 * OS1_S1 + 20) -
                                      p_over_q * *(b + 110 * OS1_S1 + 20);
            *(b + 76 * OS1_S1 + 37) =
                prefactor_z * *(b + 76 * OS1_S1 + 20) -
                p_over_q * *(b + 111 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 20);
            *(b + 76 * OS1_S1 + 38) = prefactor_y * *(b + 76 * OS1_S1 + 21) -
                                      p_over_q * *(b + 110 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 10);
            *(b + 76 * OS1_S1 + 39) = prefactor_y * *(b + 76 * OS1_S1 + 22) -
                                      p_over_q * *(b + 110 * OS1_S1 + 22);
            *(b + 76 * OS1_S1 + 40) =
                prefactor_z * *(b + 76 * OS1_S1 + 22) -
                p_over_q * *(b + 111 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 22) +
                one_over_two_q * *(b + 76 * OS1_S1 + 10);
            *(b + 76 * OS1_S1 + 41) = prefactor_x * *(b + 76 * OS1_S1 + 26) -
                                      p_over_q * *(b + 104 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 16);
            *(b + 76 * OS1_S1 + 42) =
                prefactor_z * *(b + 76 * OS1_S1 + 23) -
                p_over_q * *(b + 111 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 23);
            *(b + 76 * OS1_S1 + 43) = prefactor_y * *(b + 76 * OS1_S1 + 25) -
                                      p_over_q * *(b + 110 * OS1_S1 + 25);
            *(b + 76 * OS1_S1 + 44) = prefactor_x * *(b + 76 * OS1_S1 + 29) -
                                      p_over_q * *(b + 104 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 19);
            *(b + 76 * OS1_S1 + 45) = prefactor_x * *(b + 76 * OS1_S1 + 30) -
                                      p_over_q * *(b + 104 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 30);
            *(b + 76 * OS1_S1 + 46) = prefactor_x * *(b + 76 * OS1_S1 + 31) -
                                      p_over_q * *(b + 104 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 31);
            *(b + 76 * OS1_S1 + 47) = prefactor_x * *(b + 76 * OS1_S1 + 32) -
                                      p_over_q * *(b + 104 * OS1_S1 + 32) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 32);
            *(b + 76 * OS1_S1 + 48) = prefactor_y * *(b + 76 * OS1_S1 + 29) -
                                      p_over_q * *(b + 110 * OS1_S1 + 29);
            *(b + 76 * OS1_S1 + 49) = prefactor_x * *(b + 76 * OS1_S1 + 34) -
                                      p_over_q * *(b + 104 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 34);
            *(b + 76 * OS1_S1 + 50) =
                prefactor_y * *(b + 76 * OS1_S1 + 30) -
                p_over_q * *(b + 110 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 76 * OS1_S1 + 16);
            *(b + 76 * OS1_S1 + 51) =
                prefactor_z * *(b + 76 * OS1_S1 + 30) -
                p_over_q * *(b + 111 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 30);
            *(b + 76 * OS1_S1 + 52) =
                prefactor_z * *(b + 76 * OS1_S1 + 31) -
                p_over_q * *(b + 111 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 31) +
                one_over_two_q * *(b + 76 * OS1_S1 + 16);
            *(b + 76 * OS1_S1 + 53) = prefactor_y * *(b + 76 * OS1_S1 + 33) -
                                      p_over_q * *(b + 110 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 19);
            *(b + 76 * OS1_S1 + 54) = prefactor_y * *(b + 76 * OS1_S1 + 34) -
                                      p_over_q * *(b + 110 * OS1_S1 + 34);
            *(b + 76 * OS1_S1 + 55) =
                prefactor_z * *(b + 76 * OS1_S1 + 34) -
                p_over_q * *(b + 111 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 76 * OS1_S1 + 19);
            *(b + 77 * OS1_S1 + 35) =
                prefactor_x * *(b + 77 * OS1_S1 + 20) -
                p_over_q * *(b + 105 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 77 * OS1_S1 + 10);
            *(b + 77 * OS1_S1 + 36) =
                prefactor_y * *(b + 77 * OS1_S1 + 20) -
                p_over_q * *(b + 112 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 20);
            *(b + 77 * OS1_S1 + 37) = prefactor_z * *(b + 77 * OS1_S1 + 20) -
                                      p_over_q * *(b + 113 * OS1_S1 + 20);
            *(b + 77 * OS1_S1 + 38) =
                prefactor_y * *(b + 77 * OS1_S1 + 21) -
                p_over_q * *(b + 112 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 21) +
                one_over_two_q * *(b + 77 * OS1_S1 + 10);
            *(b + 77 * OS1_S1 + 39) = prefactor_z * *(b + 77 * OS1_S1 + 21) -
                                      p_over_q * *(b + 113 * OS1_S1 + 21);
            *(b + 77 * OS1_S1 + 40) = prefactor_z * *(b + 77 * OS1_S1 + 22) -
                                      p_over_q * *(b + 113 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 10);
            *(b + 77 * OS1_S1 + 41) = prefactor_x * *(b + 77 * OS1_S1 + 26) -
                                      p_over_q * *(b + 105 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 16);
            *(b + 77 * OS1_S1 + 42) = prefactor_z * *(b + 77 * OS1_S1 + 23) -
                                      p_over_q * *(b + 113 * OS1_S1 + 23);
            *(b + 77 * OS1_S1 + 43) =
                prefactor_y * *(b + 77 * OS1_S1 + 25) -
                p_over_q * *(b + 112 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 25);
            *(b + 77 * OS1_S1 + 44) = prefactor_x * *(b + 77 * OS1_S1 + 29) -
                                      p_over_q * *(b + 105 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 19);
            *(b + 77 * OS1_S1 + 45) = prefactor_x * *(b + 77 * OS1_S1 + 30) -
                                      p_over_q * *(b + 105 * OS1_S1 + 30);
            *(b + 77 * OS1_S1 + 46) = prefactor_z * *(b + 77 * OS1_S1 + 26) -
                                      p_over_q * *(b + 113 * OS1_S1 + 26);
            *(b + 77 * OS1_S1 + 47) = prefactor_x * *(b + 77 * OS1_S1 + 32) -
                                      p_over_q * *(b + 105 * OS1_S1 + 32);
            *(b + 77 * OS1_S1 + 48) = prefactor_x * *(b + 77 * OS1_S1 + 33) -
                                      p_over_q * *(b + 105 * OS1_S1 + 33);
            *(b + 77 * OS1_S1 + 49) = prefactor_x * *(b + 77 * OS1_S1 + 34) -
                                      p_over_q * *(b + 105 * OS1_S1 + 34);
            *(b + 77 * OS1_S1 + 50) =
                prefactor_y * *(b + 77 * OS1_S1 + 30) -
                p_over_q * *(b + 112 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 77 * OS1_S1 + 16);
            *(b + 77 * OS1_S1 + 51) = prefactor_z * *(b + 77 * OS1_S1 + 30) -
                                      p_over_q * *(b + 113 * OS1_S1 + 30);
            *(b + 77 * OS1_S1 + 52) = prefactor_z * *(b + 77 * OS1_S1 + 31) -
                                      p_over_q * *(b + 113 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 16);
            *(b + 77 * OS1_S1 + 53) =
                prefactor_y * *(b + 77 * OS1_S1 + 33) -
                p_over_q * *(b + 112 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 33) +
                one_over_two_q * *(b + 77 * OS1_S1 + 19);
            *(b + 77 * OS1_S1 + 54) =
                prefactor_y * *(b + 77 * OS1_S1 + 34) -
                p_over_q * *(b + 112 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 34);
            *(b + 77 * OS1_S1 + 55) =
                prefactor_z * *(b + 77 * OS1_S1 + 34) -
                p_over_q * *(b + 113 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 77 * OS1_S1 + 19);
            *(b + 78 * OS1_S1 + 35) =
                prefactor_x * *(b + 78 * OS1_S1 + 20) -
                p_over_q * *(b + 106 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 78 * OS1_S1 + 10);
            *(b + 78 * OS1_S1 + 36) =
                prefactor_y * *(b + 78 * OS1_S1 + 20) -
                p_over_q * *(b + 113 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 20);
            *(b + 78 * OS1_S1 + 37) = prefactor_z * *(b + 78 * OS1_S1 + 20) -
                                      p_over_q * *(b + 114 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 20);
            *(b + 78 * OS1_S1 + 38) =
                prefactor_y * *(b + 78 * OS1_S1 + 21) -
                p_over_q * *(b + 113 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 21) +
                one_over_two_q * *(b + 78 * OS1_S1 + 10);
            *(b + 78 * OS1_S1 + 39) = prefactor_z * *(b + 78 * OS1_S1 + 21) -
                                      p_over_q * *(b + 114 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 21);
            *(b + 78 * OS1_S1 + 40) = prefactor_z * *(b + 78 * OS1_S1 + 22) -
                                      p_over_q * *(b + 114 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 10);
            *(b + 78 * OS1_S1 + 41) = prefactor_x * *(b + 78 * OS1_S1 + 26) -
                                      p_over_q * *(b + 106 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 16);
            *(b + 78 * OS1_S1 + 42) = prefactor_z * *(b + 78 * OS1_S1 + 23) -
                                      p_over_q * *(b + 114 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 23);
            *(b + 78 * OS1_S1 + 43) =
                prefactor_y * *(b + 78 * OS1_S1 + 25) -
                p_over_q * *(b + 113 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 25);
            *(b + 78 * OS1_S1 + 44) = prefactor_x * *(b + 78 * OS1_S1 + 29) -
                                      p_over_q * *(b + 106 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 19);
            *(b + 78 * OS1_S1 + 45) = prefactor_x * *(b + 78 * OS1_S1 + 30) -
                                      p_over_q * *(b + 106 * OS1_S1 + 30);
            *(b + 78 * OS1_S1 + 46) = prefactor_x * *(b + 78 * OS1_S1 + 31) -
                                      p_over_q * *(b + 106 * OS1_S1 + 31);
            *(b + 78 * OS1_S1 + 47) = prefactor_x * *(b + 78 * OS1_S1 + 32) -
                                      p_over_q * *(b + 106 * OS1_S1 + 32);
            *(b + 78 * OS1_S1 + 48) = prefactor_x * *(b + 78 * OS1_S1 + 33) -
                                      p_over_q * *(b + 106 * OS1_S1 + 33);
            *(b + 78 * OS1_S1 + 49) = prefactor_x * *(b + 78 * OS1_S1 + 34) -
                                      p_over_q * *(b + 106 * OS1_S1 + 34);
            *(b + 78 * OS1_S1 + 50) =
                prefactor_y * *(b + 78 * OS1_S1 + 30) -
                p_over_q * *(b + 113 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 78 * OS1_S1 + 16);
            *(b + 78 * OS1_S1 + 51) = prefactor_z * *(b + 78 * OS1_S1 + 30) -
                                      p_over_q * *(b + 114 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 30);
            *(b + 78 * OS1_S1 + 52) = prefactor_z * *(b + 78 * OS1_S1 + 31) -
                                      p_over_q * *(b + 114 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 16);
            *(b + 78 * OS1_S1 + 53) =
                prefactor_y * *(b + 78 * OS1_S1 + 33) -
                p_over_q * *(b + 113 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 33) +
                one_over_two_q * *(b + 78 * OS1_S1 + 19);
            *(b + 78 * OS1_S1 + 54) =
                prefactor_y * *(b + 78 * OS1_S1 + 34) -
                p_over_q * *(b + 113 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 34);
            *(b + 78 * OS1_S1 + 55) =
                prefactor_z * *(b + 78 * OS1_S1 + 34) -
                p_over_q * *(b + 114 * OS1_S1 + 34) +
                one_over_two_q * *(b + 50 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 78 * OS1_S1 + 19);
            *(b + 79 * OS1_S1 + 35) =
                prefactor_x * *(b + 79 * OS1_S1 + 20) -
                p_over_q * *(b + 107 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 79 * OS1_S1 + 10);
            *(b + 79 * OS1_S1 + 36) =
                prefactor_y * *(b + 79 * OS1_S1 + 20) -
                p_over_q * *(b + 114 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 20);
            *(b + 79 * OS1_S1 + 37) =
                prefactor_z * *(b + 79 * OS1_S1 + 20) -
                p_over_q * *(b + 115 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 20);
            *(b + 79 * OS1_S1 + 38) =
                prefactor_y * *(b + 79 * OS1_S1 + 21) -
                p_over_q * *(b + 114 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 21) +
                one_over_two_q * *(b + 79 * OS1_S1 + 10);
            *(b + 79 * OS1_S1 + 39) =
                prefactor_z * *(b + 79 * OS1_S1 + 21) -
                p_over_q * *(b + 115 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 21);
            *(b + 79 * OS1_S1 + 40) =
                prefactor_z * *(b + 79 * OS1_S1 + 22) -
                p_over_q * *(b + 115 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 22) +
                one_over_two_q * *(b + 79 * OS1_S1 + 10);
            *(b + 79 * OS1_S1 + 41) = prefactor_x * *(b + 79 * OS1_S1 + 26) -
                                      p_over_q * *(b + 107 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 79 * OS1_S1 + 16);
            *(b + 79 * OS1_S1 + 42) =
                prefactor_z * *(b + 79 * OS1_S1 + 23) -
                p_over_q * *(b + 115 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 23);
            *(b + 79 * OS1_S1 + 43) =
                prefactor_y * *(b + 79 * OS1_S1 + 25) -
                p_over_q * *(b + 114 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 25);
            *(b + 79 * OS1_S1 + 44) = prefactor_x * *(b + 79 * OS1_S1 + 29) -
                                      p_over_q * *(b + 107 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 79 * OS1_S1 + 19);
            *(b + 79 * OS1_S1 + 45) = prefactor_x * *(b + 79 * OS1_S1 + 30) -
                                      p_over_q * *(b + 107 * OS1_S1 + 30);
            *(b + 79 * OS1_S1 + 46) = prefactor_x * *(b + 79 * OS1_S1 + 31) -
                                      p_over_q * *(b + 107 * OS1_S1 + 31);
            *(b + 79 * OS1_S1 + 47) = prefactor_x * *(b + 79 * OS1_S1 + 32) -
                                      p_over_q * *(b + 107 * OS1_S1 + 32);
            *(b + 79 * OS1_S1 + 48) = prefactor_x * *(b + 79 * OS1_S1 + 33) -
                                      p_over_q * *(b + 107 * OS1_S1 + 33);
            *(b + 79 * OS1_S1 + 49) = prefactor_x * *(b + 79 * OS1_S1 + 34) -
                                      p_over_q * *(b + 107 * OS1_S1 + 34);
            *(b + 79 * OS1_S1 + 50) =
                prefactor_y * *(b + 79 * OS1_S1 + 30) -
                p_over_q * *(b + 114 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 79 * OS1_S1 + 16);
            *(b + 79 * OS1_S1 + 51) =
                prefactor_z * *(b + 79 * OS1_S1 + 30) -
                p_over_q * *(b + 115 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 30);
            *(b + 79 * OS1_S1 + 52) =
                prefactor_z * *(b + 79 * OS1_S1 + 31) -
                p_over_q * *(b + 115 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 31) +
                one_over_two_q * *(b + 79 * OS1_S1 + 16);
            *(b + 79 * OS1_S1 + 53) =
                prefactor_y * *(b + 79 * OS1_S1 + 33) -
                p_over_q * *(b + 114 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 33) +
                one_over_two_q * *(b + 79 * OS1_S1 + 19);
            *(b + 79 * OS1_S1 + 54) =
                prefactor_y * *(b + 79 * OS1_S1 + 34) -
                p_over_q * *(b + 114 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 34);
            *(b + 79 * OS1_S1 + 55) =
                prefactor_z * *(b + 79 * OS1_S1 + 34) -
                p_over_q * *(b + 115 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 79 * OS1_S1 + 19);
            *(b + 80 * OS1_S1 + 35) =
                prefactor_x * *(b + 80 * OS1_S1 + 20) -
                p_over_q * *(b + 108 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 10);
            *(b + 80 * OS1_S1 + 36) =
                prefactor_y * *(b + 80 * OS1_S1 + 20) -
                p_over_q * *(b + 115 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 20);
            *(b + 80 * OS1_S1 + 37) =
                prefactor_z * *(b + 80 * OS1_S1 + 20) -
                p_over_q * *(b + 116 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 20);
            *(b + 80 * OS1_S1 + 38) =
                prefactor_y * *(b + 80 * OS1_S1 + 21) -
                p_over_q * *(b + 115 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 21) +
                one_over_two_q * *(b + 80 * OS1_S1 + 10);
            *(b + 80 * OS1_S1 + 39) =
                prefactor_z * *(b + 80 * OS1_S1 + 21) -
                p_over_q * *(b + 116 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 21);
            *(b + 80 * OS1_S1 + 40) =
                prefactor_z * *(b + 80 * OS1_S1 + 22) -
                p_over_q * *(b + 116 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 22) +
                one_over_two_q * *(b + 80 * OS1_S1 + 10);
            *(b + 80 * OS1_S1 + 41) = prefactor_x * *(b + 80 * OS1_S1 + 26) -
                                      p_over_q * *(b + 108 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 80 * OS1_S1 + 16);
            *(b + 80 * OS1_S1 + 42) =
                prefactor_z * *(b + 80 * OS1_S1 + 23) -
                p_over_q * *(b + 116 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 23);
            *(b + 80 * OS1_S1 + 43) =
                prefactor_y * *(b + 80 * OS1_S1 + 25) -
                p_over_q * *(b + 115 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 25);
            *(b + 80 * OS1_S1 + 44) = prefactor_x * *(b + 80 * OS1_S1 + 29) -
                                      p_over_q * *(b + 108 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 80 * OS1_S1 + 19);
            *(b + 80 * OS1_S1 + 45) = prefactor_x * *(b + 80 * OS1_S1 + 30) -
                                      p_over_q * *(b + 108 * OS1_S1 + 30);
            *(b + 80 * OS1_S1 + 46) = prefactor_x * *(b + 80 * OS1_S1 + 31) -
                                      p_over_q * *(b + 108 * OS1_S1 + 31);
            *(b + 80 * OS1_S1 + 47) = prefactor_x * *(b + 80 * OS1_S1 + 32) -
                                      p_over_q * *(b + 108 * OS1_S1 + 32);
            *(b + 80 * OS1_S1 + 48) = prefactor_x * *(b + 80 * OS1_S1 + 33) -
                                      p_over_q * *(b + 108 * OS1_S1 + 33);
            *(b + 80 * OS1_S1 + 49) = prefactor_x * *(b + 80 * OS1_S1 + 34) -
                                      p_over_q * *(b + 108 * OS1_S1 + 34);
            *(b + 80 * OS1_S1 + 50) =
                prefactor_y * *(b + 80 * OS1_S1 + 30) -
                p_over_q * *(b + 115 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 16);
            *(b + 80 * OS1_S1 + 51) =
                prefactor_z * *(b + 80 * OS1_S1 + 30) -
                p_over_q * *(b + 116 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 30);
            *(b + 80 * OS1_S1 + 52) =
                prefactor_z * *(b + 80 * OS1_S1 + 31) -
                p_over_q * *(b + 116 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 31) +
                one_over_two_q * *(b + 80 * OS1_S1 + 16);
            *(b + 80 * OS1_S1 + 53) =
                prefactor_y * *(b + 80 * OS1_S1 + 33) -
                p_over_q * *(b + 115 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 33) +
                one_over_two_q * *(b + 80 * OS1_S1 + 19);
            *(b + 80 * OS1_S1 + 54) =
                prefactor_y * *(b + 80 * OS1_S1 + 34) -
                p_over_q * *(b + 115 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 34);
            *(b + 80 * OS1_S1 + 55) =
                prefactor_z * *(b + 80 * OS1_S1 + 34) -
                p_over_q * *(b + 116 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 19);
            *(b + 81 * OS1_S1 + 35) =
                prefactor_x * *(b + 81 * OS1_S1 + 20) -
                p_over_q * *(b + 109 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 81 * OS1_S1 + 10);
            *(b + 81 * OS1_S1 + 36) =
                prefactor_y * *(b + 81 * OS1_S1 + 20) -
                p_over_q * *(b + 116 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 20);
            *(b + 81 * OS1_S1 + 37) =
                prefactor_z * *(b + 81 * OS1_S1 + 20) -
                p_over_q * *(b + 117 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 20);
            *(b + 81 * OS1_S1 + 38) =
                prefactor_y * *(b + 81 * OS1_S1 + 21) -
                p_over_q * *(b + 116 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 21) +
                one_over_two_q * *(b + 81 * OS1_S1 + 10);
            *(b + 81 * OS1_S1 + 39) =
                prefactor_y * *(b + 81 * OS1_S1 + 22) -
                p_over_q * *(b + 116 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 22);
            *(b + 81 * OS1_S1 + 40) =
                prefactor_z * *(b + 81 * OS1_S1 + 22) -
                p_over_q * *(b + 117 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 22) +
                one_over_two_q * *(b + 81 * OS1_S1 + 10);
            *(b + 81 * OS1_S1 + 41) = prefactor_x * *(b + 81 * OS1_S1 + 26) -
                                      p_over_q * *(b + 109 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 81 * OS1_S1 + 16);
            *(b + 81 * OS1_S1 + 42) =
                prefactor_z * *(b + 81 * OS1_S1 + 23) -
                p_over_q * *(b + 117 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 23);
            *(b + 81 * OS1_S1 + 43) =
                prefactor_y * *(b + 81 * OS1_S1 + 25) -
                p_over_q * *(b + 116 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 25);
            *(b + 81 * OS1_S1 + 44) = prefactor_x * *(b + 81 * OS1_S1 + 29) -
                                      p_over_q * *(b + 109 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 81 * OS1_S1 + 19);
            *(b + 81 * OS1_S1 + 45) = prefactor_x * *(b + 81 * OS1_S1 + 30) -
                                      p_over_q * *(b + 109 * OS1_S1 + 30);
            *(b + 81 * OS1_S1 + 46) = prefactor_x * *(b + 81 * OS1_S1 + 31) -
                                      p_over_q * *(b + 109 * OS1_S1 + 31);
            *(b + 81 * OS1_S1 + 47) = prefactor_x * *(b + 81 * OS1_S1 + 32) -
                                      p_over_q * *(b + 109 * OS1_S1 + 32);
            *(b + 81 * OS1_S1 + 48) = prefactor_x * *(b + 81 * OS1_S1 + 33) -
                                      p_over_q * *(b + 109 * OS1_S1 + 33);
            *(b + 81 * OS1_S1 + 49) = prefactor_x * *(b + 81 * OS1_S1 + 34) -
                                      p_over_q * *(b + 109 * OS1_S1 + 34);
            *(b + 81 * OS1_S1 + 50) =
                prefactor_y * *(b + 81 * OS1_S1 + 30) -
                p_over_q * *(b + 116 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 81 * OS1_S1 + 16);
            *(b + 81 * OS1_S1 + 51) =
                prefactor_z * *(b + 81 * OS1_S1 + 30) -
                p_over_q * *(b + 117 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 30);
            *(b + 81 * OS1_S1 + 52) =
                prefactor_z * *(b + 81 * OS1_S1 + 31) -
                p_over_q * *(b + 117 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 31) +
                one_over_two_q * *(b + 81 * OS1_S1 + 16);
            *(b + 81 * OS1_S1 + 53) =
                prefactor_y * *(b + 81 * OS1_S1 + 33) -
                p_over_q * *(b + 116 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 33) +
                one_over_two_q * *(b + 81 * OS1_S1 + 19);
            *(b + 81 * OS1_S1 + 54) =
                prefactor_y * *(b + 81 * OS1_S1 + 34) -
                p_over_q * *(b + 116 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 34);
            *(b + 81 * OS1_S1 + 55) =
                prefactor_z * *(b + 81 * OS1_S1 + 34) -
                p_over_q * *(b + 117 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 81 * OS1_S1 + 19);
            *(b + 82 * OS1_S1 + 35) =
                prefactor_x * *(b + 82 * OS1_S1 + 20) -
                p_over_q * *(b + 110 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 82 * OS1_S1 + 10);
            *(b + 82 * OS1_S1 + 36) = prefactor_y * *(b + 82 * OS1_S1 + 20) -
                                      p_over_q * *(b + 117 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 20);
            *(b + 82 * OS1_S1 + 37) =
                prefactor_z * *(b + 82 * OS1_S1 + 20) -
                p_over_q * *(b + 118 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 20);
            *(b + 82 * OS1_S1 + 38) = prefactor_y * *(b + 82 * OS1_S1 + 21) -
                                      p_over_q * *(b + 117 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 10);
            *(b + 82 * OS1_S1 + 39) = prefactor_y * *(b + 82 * OS1_S1 + 22) -
                                      p_over_q * *(b + 117 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 22);
            *(b + 82 * OS1_S1 + 40) =
                prefactor_z * *(b + 82 * OS1_S1 + 22) -
                p_over_q * *(b + 118 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 22) +
                one_over_two_q * *(b + 82 * OS1_S1 + 10);
            *(b + 82 * OS1_S1 + 41) = prefactor_x * *(b + 82 * OS1_S1 + 26) -
                                      p_over_q * *(b + 110 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 16);
            *(b + 82 * OS1_S1 + 42) =
                prefactor_z * *(b + 82 * OS1_S1 + 23) -
                p_over_q * *(b + 118 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 23);
            *(b + 82 * OS1_S1 + 43) = prefactor_y * *(b + 82 * OS1_S1 + 25) -
                                      p_over_q * *(b + 117 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 25);
            *(b + 82 * OS1_S1 + 44) = prefactor_x * *(b + 82 * OS1_S1 + 29) -
                                      p_over_q * *(b + 110 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 19);
            *(b + 82 * OS1_S1 + 45) = prefactor_x * *(b + 82 * OS1_S1 + 30) -
                                      p_over_q * *(b + 110 * OS1_S1 + 30);
            *(b + 82 * OS1_S1 + 46) = prefactor_x * *(b + 82 * OS1_S1 + 31) -
                                      p_over_q * *(b + 110 * OS1_S1 + 31);
            *(b + 82 * OS1_S1 + 47) = prefactor_x * *(b + 82 * OS1_S1 + 32) -
                                      p_over_q * *(b + 110 * OS1_S1 + 32);
            *(b + 82 * OS1_S1 + 48) = prefactor_x * *(b + 82 * OS1_S1 + 33) -
                                      p_over_q * *(b + 110 * OS1_S1 + 33);
            *(b + 82 * OS1_S1 + 49) = prefactor_x * *(b + 82 * OS1_S1 + 34) -
                                      p_over_q * *(b + 110 * OS1_S1 + 34);
            *(b + 82 * OS1_S1 + 50) =
                prefactor_y * *(b + 82 * OS1_S1 + 30) -
                p_over_q * *(b + 117 * OS1_S1 + 30) +
                one_over_two_q * *(b + 55 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 82 * OS1_S1 + 16);
            *(b + 82 * OS1_S1 + 51) =
                prefactor_z * *(b + 82 * OS1_S1 + 30) -
                p_over_q * *(b + 118 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 30);
            *(b + 82 * OS1_S1 + 52) =
                prefactor_z * *(b + 82 * OS1_S1 + 31) -
                p_over_q * *(b + 118 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 31) +
                one_over_two_q * *(b + 82 * OS1_S1 + 16);
            *(b + 82 * OS1_S1 + 53) = prefactor_y * *(b + 82 * OS1_S1 + 33) -
                                      p_over_q * *(b + 117 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 19);
            *(b + 82 * OS1_S1 + 54) = prefactor_y * *(b + 82 * OS1_S1 + 34) -
                                      p_over_q * *(b + 117 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 34);
            *(b + 82 * OS1_S1 + 55) =
                prefactor_z * *(b + 82 * OS1_S1 + 34) -
                p_over_q * *(b + 118 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 82 * OS1_S1 + 19);
            *(b + 83 * OS1_S1 + 35) =
                prefactor_x * *(b + 83 * OS1_S1 + 20) -
                p_over_q * *(b + 111 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 83 * OS1_S1 + 10);
            *(b + 83 * OS1_S1 + 36) = prefactor_y * *(b + 83 * OS1_S1 + 20) -
                                      p_over_q * *(b + 118 * OS1_S1 + 20);
            *(b + 83 * OS1_S1 + 37) =
                prefactor_z * *(b + 83 * OS1_S1 + 20) -
                p_over_q * *(b + 119 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 20);
            *(b + 83 * OS1_S1 + 38) = prefactor_y * *(b + 83 * OS1_S1 + 21) -
                                      p_over_q * *(b + 118 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 10);
            *(b + 83 * OS1_S1 + 39) = prefactor_y * *(b + 83 * OS1_S1 + 22) -
                                      p_over_q * *(b + 118 * OS1_S1 + 22);
            *(b + 83 * OS1_S1 + 40) =
                prefactor_z * *(b + 83 * OS1_S1 + 22) -
                p_over_q * *(b + 119 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 22) +
                one_over_two_q * *(b + 83 * OS1_S1 + 10);
            *(b + 83 * OS1_S1 + 41) = prefactor_x * *(b + 83 * OS1_S1 + 26) -
                                      p_over_q * *(b + 111 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 16);
            *(b + 83 * OS1_S1 + 42) =
                prefactor_z * *(b + 83 * OS1_S1 + 23) -
                p_over_q * *(b + 119 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 23);
            *(b + 83 * OS1_S1 + 43) = prefactor_y * *(b + 83 * OS1_S1 + 25) -
                                      p_over_q * *(b + 118 * OS1_S1 + 25);
            *(b + 83 * OS1_S1 + 44) = prefactor_x * *(b + 83 * OS1_S1 + 29) -
                                      p_over_q * *(b + 111 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 19);
            *(b + 83 * OS1_S1 + 45) = prefactor_x * *(b + 83 * OS1_S1 + 30) -
                                      p_over_q * *(b + 111 * OS1_S1 + 30);
            *(b + 83 * OS1_S1 + 46) = prefactor_x * *(b + 83 * OS1_S1 + 31) -
                                      p_over_q * *(b + 111 * OS1_S1 + 31);
            *(b + 83 * OS1_S1 + 47) = prefactor_x * *(b + 83 * OS1_S1 + 32) -
                                      p_over_q * *(b + 111 * OS1_S1 + 32);
            *(b + 83 * OS1_S1 + 48) = prefactor_y * *(b + 83 * OS1_S1 + 29) -
                                      p_over_q * *(b + 118 * OS1_S1 + 29);
            *(b + 83 * OS1_S1 + 49) = prefactor_x * *(b + 83 * OS1_S1 + 34) -
                                      p_over_q * *(b + 111 * OS1_S1 + 34);
            *(b + 83 * OS1_S1 + 50) =
                prefactor_y * *(b + 83 * OS1_S1 + 30) -
                p_over_q * *(b + 118 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 83 * OS1_S1 + 16);
            *(b + 83 * OS1_S1 + 51) =
                prefactor_z * *(b + 83 * OS1_S1 + 30) -
                p_over_q * *(b + 119 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 30);
            *(b + 83 * OS1_S1 + 52) =
                prefactor_z * *(b + 83 * OS1_S1 + 31) -
                p_over_q * *(b + 119 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 31) +
                one_over_two_q * *(b + 83 * OS1_S1 + 16);
            *(b + 83 * OS1_S1 + 53) = prefactor_y * *(b + 83 * OS1_S1 + 33) -
                                      p_over_q * *(b + 118 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 19);
            *(b + 83 * OS1_S1 + 54) = prefactor_y * *(b + 83 * OS1_S1 + 34) -
                                      p_over_q * *(b + 118 * OS1_S1 + 34);
            *(b + 83 * OS1_S1 + 55) =
                prefactor_z * *(b + 83 * OS1_S1 + 34) -
                p_over_q * *(b + 119 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 83 * OS1_S1 + 19);
            return;
        }
    }
}
