/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_7_5(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 84 * OS1_S1 + 35) =
                prefactor_x * *(b + 84 * OS1_S1 + 20) -
                p_over_q * *(b + 120 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 84 * OS1_S1 + 10);
            *(b + 84 * OS1_S1 + 36) = prefactor_y * *(b + 84 * OS1_S1 + 20) -
                                      p_over_q * *(b + 121 * OS1_S1 + 20);
            *(b + 84 * OS1_S1 + 37) = prefactor_z * *(b + 84 * OS1_S1 + 20) -
                                      p_over_q * *(b + 122 * OS1_S1 + 20);
            *(b + 84 * OS1_S1 + 38) = prefactor_y * *(b + 84 * OS1_S1 + 21) -
                                      p_over_q * *(b + 121 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 10);
            *(b + 84 * OS1_S1 + 39) = prefactor_z * *(b + 84 * OS1_S1 + 21) -
                                      p_over_q * *(b + 122 * OS1_S1 + 21);
            *(b + 84 * OS1_S1 + 40) = prefactor_z * *(b + 84 * OS1_S1 + 22) -
                                      p_over_q * *(b + 122 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 10);
            *(b + 84 * OS1_S1 + 41) =
                prefactor_x * *(b + 84 * OS1_S1 + 26) -
                p_over_q * *(b + 120 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 26) +
                one_over_two_q * *(b + 84 * OS1_S1 + 16);
            *(b + 84 * OS1_S1 + 42) = prefactor_z * *(b + 84 * OS1_S1 + 23) -
                                      p_over_q * *(b + 122 * OS1_S1 + 23);
            *(b + 84 * OS1_S1 + 43) = prefactor_y * *(b + 84 * OS1_S1 + 25) -
                                      p_over_q * *(b + 121 * OS1_S1 + 25);
            *(b + 84 * OS1_S1 + 44) =
                prefactor_x * *(b + 84 * OS1_S1 + 29) -
                p_over_q * *(b + 120 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 29) +
                one_over_two_q * *(b + 84 * OS1_S1 + 19);
            *(b + 84 * OS1_S1 + 45) =
                prefactor_x * *(b + 84 * OS1_S1 + 30) -
                p_over_q * *(b + 120 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 30);
            *(b + 84 * OS1_S1 + 46) = prefactor_z * *(b + 84 * OS1_S1 + 26) -
                                      p_over_q * *(b + 122 * OS1_S1 + 26);
            *(b + 84 * OS1_S1 + 47) =
                prefactor_x * *(b + 84 * OS1_S1 + 32) -
                p_over_q * *(b + 120 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 32);
            *(b + 84 * OS1_S1 + 48) = prefactor_y * *(b + 84 * OS1_S1 + 29) -
                                      p_over_q * *(b + 121 * OS1_S1 + 29);
            *(b + 84 * OS1_S1 + 49) =
                prefactor_x * *(b + 84 * OS1_S1 + 34) -
                p_over_q * *(b + 120 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 34);
            *(b + 84 * OS1_S1 + 50) =
                prefactor_y * *(b + 84 * OS1_S1 + 30) -
                p_over_q * *(b + 121 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 84 * OS1_S1 + 16);
            *(b + 84 * OS1_S1 + 51) = prefactor_z * *(b + 84 * OS1_S1 + 30) -
                                      p_over_q * *(b + 122 * OS1_S1 + 30);
            *(b + 84 * OS1_S1 + 52) = prefactor_z * *(b + 84 * OS1_S1 + 31) -
                                      p_over_q * *(b + 122 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 16);
            *(b + 84 * OS1_S1 + 53) = prefactor_y * *(b + 84 * OS1_S1 + 33) -
                                      p_over_q * *(b + 121 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 19);
            *(b + 84 * OS1_S1 + 54) = prefactor_y * *(b + 84 * OS1_S1 + 34) -
                                      p_over_q * *(b + 121 * OS1_S1 + 34);
            *(b + 84 * OS1_S1 + 55) =
                prefactor_z * *(b + 84 * OS1_S1 + 34) -
                p_over_q * *(b + 122 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 84 * OS1_S1 + 19);
            *(b + 85 * OS1_S1 + 35) =
                prefactor_x * *(b + 85 * OS1_S1 + 20) -
                p_over_q * *(b + 121 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 85 * OS1_S1 + 10);
            *(b + 85 * OS1_S1 + 36) = prefactor_y * *(b + 85 * OS1_S1 + 20) -
                                      p_over_q * *(b + 123 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 20);
            *(b + 85 * OS1_S1 + 37) = prefactor_z * *(b + 85 * OS1_S1 + 20) -
                                      p_over_q * *(b + 124 * OS1_S1 + 20);
            *(b + 85 * OS1_S1 + 38) = prefactor_y * *(b + 85 * OS1_S1 + 21) -
                                      p_over_q * *(b + 123 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 10);
            *(b + 85 * OS1_S1 + 39) = prefactor_z * *(b + 85 * OS1_S1 + 21) -
                                      p_over_q * *(b + 124 * OS1_S1 + 21);
            *(b + 85 * OS1_S1 + 40) = prefactor_z * *(b + 85 * OS1_S1 + 22) -
                                      p_over_q * *(b + 124 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 10);
            *(b + 85 * OS1_S1 + 41) =
                prefactor_x * *(b + 85 * OS1_S1 + 26) -
                p_over_q * *(b + 121 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 26) +
                one_over_two_q * *(b + 85 * OS1_S1 + 16);
            *(b + 85 * OS1_S1 + 42) = prefactor_z * *(b + 85 * OS1_S1 + 23) -
                                      p_over_q * *(b + 124 * OS1_S1 + 23);
            *(b + 85 * OS1_S1 + 43) = prefactor_y * *(b + 85 * OS1_S1 + 25) -
                                      p_over_q * *(b + 123 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 25);
            *(b + 85 * OS1_S1 + 44) =
                prefactor_x * *(b + 85 * OS1_S1 + 29) -
                p_over_q * *(b + 121 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 29) +
                one_over_two_q * *(b + 85 * OS1_S1 + 19);
            *(b + 85 * OS1_S1 + 45) =
                prefactor_x * *(b + 85 * OS1_S1 + 30) -
                p_over_q * *(b + 121 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 30);
            *(b + 85 * OS1_S1 + 46) = prefactor_z * *(b + 85 * OS1_S1 + 26) -
                                      p_over_q * *(b + 124 * OS1_S1 + 26);
            *(b + 85 * OS1_S1 + 47) =
                prefactor_x * *(b + 85 * OS1_S1 + 32) -
                p_over_q * *(b + 121 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 32);
            *(b + 85 * OS1_S1 + 48) = prefactor_y * *(b + 85 * OS1_S1 + 29) -
                                      p_over_q * *(b + 123 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 29);
            *(b + 85 * OS1_S1 + 49) =
                prefactor_x * *(b + 85 * OS1_S1 + 34) -
                p_over_q * *(b + 121 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 34);
            *(b + 85 * OS1_S1 + 50) =
                prefactor_y * *(b + 85 * OS1_S1 + 30) -
                p_over_q * *(b + 123 * OS1_S1 + 30) +
                one_over_two_q * *(b + 56 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 85 * OS1_S1 + 16);
            *(b + 85 * OS1_S1 + 51) = prefactor_z * *(b + 85 * OS1_S1 + 30) -
                                      p_over_q * *(b + 124 * OS1_S1 + 30);
            *(b + 85 * OS1_S1 + 52) = prefactor_z * *(b + 85 * OS1_S1 + 31) -
                                      p_over_q * *(b + 124 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 16);
            *(b + 85 * OS1_S1 + 53) = prefactor_y * *(b + 85 * OS1_S1 + 33) -
                                      p_over_q * *(b + 123 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 19);
            *(b + 85 * OS1_S1 + 54) = prefactor_y * *(b + 85 * OS1_S1 + 34) -
                                      p_over_q * *(b + 123 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 34);
            *(b + 85 * OS1_S1 + 55) =
                prefactor_z * *(b + 85 * OS1_S1 + 34) -
                p_over_q * *(b + 124 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 85 * OS1_S1 + 19);
            *(b + 86 * OS1_S1 + 35) =
                prefactor_x * *(b + 86 * OS1_S1 + 20) -
                p_over_q * *(b + 122 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 86 * OS1_S1 + 10);
            *(b + 86 * OS1_S1 + 36) = prefactor_y * *(b + 86 * OS1_S1 + 20) -
                                      p_over_q * *(b + 124 * OS1_S1 + 20);
            *(b + 86 * OS1_S1 + 37) = prefactor_z * *(b + 86 * OS1_S1 + 20) -
                                      p_over_q * *(b + 125 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 20);
            *(b + 86 * OS1_S1 + 38) = prefactor_y * *(b + 86 * OS1_S1 + 21) -
                                      p_over_q * *(b + 124 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 10);
            *(b + 86 * OS1_S1 + 39) = prefactor_y * *(b + 86 * OS1_S1 + 22) -
                                      p_over_q * *(b + 124 * OS1_S1 + 22);
            *(b + 86 * OS1_S1 + 40) = prefactor_z * *(b + 86 * OS1_S1 + 22) -
                                      p_over_q * *(b + 125 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 10);
            *(b + 86 * OS1_S1 + 41) =
                prefactor_x * *(b + 86 * OS1_S1 + 26) -
                p_over_q * *(b + 122 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 26) +
                one_over_two_q * *(b + 86 * OS1_S1 + 16);
            *(b + 86 * OS1_S1 + 42) = prefactor_z * *(b + 86 * OS1_S1 + 23) -
                                      p_over_q * *(b + 125 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 23);
            *(b + 86 * OS1_S1 + 43) = prefactor_y * *(b + 86 * OS1_S1 + 25) -
                                      p_over_q * *(b + 124 * OS1_S1 + 25);
            *(b + 86 * OS1_S1 + 44) =
                prefactor_x * *(b + 86 * OS1_S1 + 29) -
                p_over_q * *(b + 122 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 29) +
                one_over_two_q * *(b + 86 * OS1_S1 + 19);
            *(b + 86 * OS1_S1 + 45) =
                prefactor_x * *(b + 86 * OS1_S1 + 30) -
                p_over_q * *(b + 122 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 30);
            *(b + 86 * OS1_S1 + 46) = prefactor_z * *(b + 86 * OS1_S1 + 26) -
                                      p_over_q * *(b + 125 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 26);
            *(b + 86 * OS1_S1 + 47) =
                prefactor_x * *(b + 86 * OS1_S1 + 32) -
                p_over_q * *(b + 122 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 32);
            *(b + 86 * OS1_S1 + 48) = prefactor_y * *(b + 86 * OS1_S1 + 29) -
                                      p_over_q * *(b + 124 * OS1_S1 + 29);
            *(b + 86 * OS1_S1 + 49) =
                prefactor_x * *(b + 86 * OS1_S1 + 34) -
                p_over_q * *(b + 122 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 34);
            *(b + 86 * OS1_S1 + 50) =
                prefactor_y * *(b + 86 * OS1_S1 + 30) -
                p_over_q * *(b + 124 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 86 * OS1_S1 + 16);
            *(b + 86 * OS1_S1 + 51) = prefactor_z * *(b + 86 * OS1_S1 + 30) -
                                      p_over_q * *(b + 125 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 30);
            *(b + 86 * OS1_S1 + 52) = prefactor_z * *(b + 86 * OS1_S1 + 31) -
                                      p_over_q * *(b + 125 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 16);
            *(b + 86 * OS1_S1 + 53) = prefactor_y * *(b + 86 * OS1_S1 + 33) -
                                      p_over_q * *(b + 124 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 19);
            *(b + 86 * OS1_S1 + 54) = prefactor_y * *(b + 86 * OS1_S1 + 34) -
                                      p_over_q * *(b + 124 * OS1_S1 + 34);
            *(b + 86 * OS1_S1 + 55) =
                prefactor_z * *(b + 86 * OS1_S1 + 34) -
                p_over_q * *(b + 125 * OS1_S1 + 34) +
                one_over_two_q * *(b + 56 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 86 * OS1_S1 + 19);
            *(b + 87 * OS1_S1 + 35) =
                prefactor_x * *(b + 87 * OS1_S1 + 20) -
                p_over_q * *(b + 123 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 87 * OS1_S1 + 10);
            *(b + 87 * OS1_S1 + 36) =
                prefactor_y * *(b + 87 * OS1_S1 + 20) -
                p_over_q * *(b + 126 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 20);
            *(b + 87 * OS1_S1 + 37) = prefactor_z * *(b + 87 * OS1_S1 + 20) -
                                      p_over_q * *(b + 127 * OS1_S1 + 20);
            *(b + 87 * OS1_S1 + 38) =
                prefactor_y * *(b + 87 * OS1_S1 + 21) -
                p_over_q * *(b + 126 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 21) +
                one_over_two_q * *(b + 87 * OS1_S1 + 10);
            *(b + 87 * OS1_S1 + 39) = prefactor_z * *(b + 87 * OS1_S1 + 21) -
                                      p_over_q * *(b + 127 * OS1_S1 + 21);
            *(b + 87 * OS1_S1 + 40) = prefactor_z * *(b + 87 * OS1_S1 + 22) -
                                      p_over_q * *(b + 127 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 87 * OS1_S1 + 10);
            *(b + 87 * OS1_S1 + 41) =
                prefactor_x * *(b + 87 * OS1_S1 + 26) -
                p_over_q * *(b + 123 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 26) +
                one_over_two_q * *(b + 87 * OS1_S1 + 16);
            *(b + 87 * OS1_S1 + 42) = prefactor_z * *(b + 87 * OS1_S1 + 23) -
                                      p_over_q * *(b + 127 * OS1_S1 + 23);
            *(b + 87 * OS1_S1 + 43) =
                prefactor_y * *(b + 87 * OS1_S1 + 25) -
                p_over_q * *(b + 126 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 25);
            *(b + 87 * OS1_S1 + 44) =
                prefactor_x * *(b + 87 * OS1_S1 + 29) -
                p_over_q * *(b + 123 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 29) +
                one_over_two_q * *(b + 87 * OS1_S1 + 19);
            *(b + 87 * OS1_S1 + 45) =
                prefactor_x * *(b + 87 * OS1_S1 + 30) -
                p_over_q * *(b + 123 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 30);
            *(b + 87 * OS1_S1 + 46) = prefactor_z * *(b + 87 * OS1_S1 + 26) -
                                      p_over_q * *(b + 127 * OS1_S1 + 26);
            *(b + 87 * OS1_S1 + 47) =
                prefactor_x * *(b + 87 * OS1_S1 + 32) -
                p_over_q * *(b + 123 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 32);
            *(b + 87 * OS1_S1 + 48) =
                prefactor_y * *(b + 87 * OS1_S1 + 29) -
                p_over_q * *(b + 126 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 29);
            *(b + 87 * OS1_S1 + 49) =
                prefactor_x * *(b + 87 * OS1_S1 + 34) -
                p_over_q * *(b + 123 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 34);
            *(b + 87 * OS1_S1 + 50) =
                prefactor_y * *(b + 87 * OS1_S1 + 30) -
                p_over_q * *(b + 126 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 87 * OS1_S1 + 16);
            *(b + 87 * OS1_S1 + 51) = prefactor_z * *(b + 87 * OS1_S1 + 30) -
                                      p_over_q * *(b + 127 * OS1_S1 + 30);
            *(b + 87 * OS1_S1 + 52) = prefactor_z * *(b + 87 * OS1_S1 + 31) -
                                      p_over_q * *(b + 127 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 87 * OS1_S1 + 16);
            *(b + 87 * OS1_S1 + 53) =
                prefactor_y * *(b + 87 * OS1_S1 + 33) -
                p_over_q * *(b + 126 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 33) +
                one_over_two_q * *(b + 87 * OS1_S1 + 19);
            *(b + 87 * OS1_S1 + 54) =
                prefactor_y * *(b + 87 * OS1_S1 + 34) -
                p_over_q * *(b + 126 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 34);
            *(b + 87 * OS1_S1 + 55) =
                prefactor_z * *(b + 87 * OS1_S1 + 34) -
                p_over_q * *(b + 127 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 87 * OS1_S1 + 19);
            *(b + 88 * OS1_S1 + 35) =
                prefactor_x * *(b + 88 * OS1_S1 + 20) -
                p_over_q * *(b + 124 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 88 * OS1_S1 + 10);
            *(b + 88 * OS1_S1 + 36) = prefactor_y * *(b + 88 * OS1_S1 + 20) -
                                      p_over_q * *(b + 127 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 20);
            *(b + 88 * OS1_S1 + 37) = prefactor_z * *(b + 88 * OS1_S1 + 20) -
                                      p_over_q * *(b + 128 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 20);
            *(b + 88 * OS1_S1 + 38) = prefactor_y * *(b + 88 * OS1_S1 + 21) -
                                      p_over_q * *(b + 127 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 10);
            *(b + 88 * OS1_S1 + 39) = prefactor_z * *(b + 88 * OS1_S1 + 21) -
                                      p_over_q * *(b + 128 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 21);
            *(b + 88 * OS1_S1 + 40) = prefactor_z * *(b + 88 * OS1_S1 + 22) -
                                      p_over_q * *(b + 128 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 10);
            *(b + 88 * OS1_S1 + 41) =
                prefactor_x * *(b + 88 * OS1_S1 + 26) -
                p_over_q * *(b + 124 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 26) +
                one_over_two_q * *(b + 88 * OS1_S1 + 16);
            *(b + 88 * OS1_S1 + 42) = prefactor_z * *(b + 88 * OS1_S1 + 23) -
                                      p_over_q * *(b + 128 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 23);
            *(b + 88 * OS1_S1 + 43) = prefactor_y * *(b + 88 * OS1_S1 + 25) -
                                      p_over_q * *(b + 127 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 25);
            *(b + 88 * OS1_S1 + 44) =
                prefactor_x * *(b + 88 * OS1_S1 + 29) -
                p_over_q * *(b + 124 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 29) +
                one_over_two_q * *(b + 88 * OS1_S1 + 19);
            *(b + 88 * OS1_S1 + 45) =
                prefactor_x * *(b + 88 * OS1_S1 + 30) -
                p_over_q * *(b + 124 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 30);
            *(b + 88 * OS1_S1 + 46) = prefactor_z * *(b + 88 * OS1_S1 + 26) -
                                      p_over_q * *(b + 128 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 26);
            *(b + 88 * OS1_S1 + 47) =
                prefactor_x * *(b + 88 * OS1_S1 + 32) -
                p_over_q * *(b + 124 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 32);
            *(b + 88 * OS1_S1 + 48) = prefactor_y * *(b + 88 * OS1_S1 + 29) -
                                      p_over_q * *(b + 127 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 29);
            *(b + 88 * OS1_S1 + 49) =
                prefactor_x * *(b + 88 * OS1_S1 + 34) -
                p_over_q * *(b + 124 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 34);
            *(b + 88 * OS1_S1 + 50) =
                prefactor_y * *(b + 88 * OS1_S1 + 30) -
                p_over_q * *(b + 127 * OS1_S1 + 30) +
                one_over_two_q * *(b + 58 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 88 * OS1_S1 + 16);
            *(b + 88 * OS1_S1 + 51) = prefactor_z * *(b + 88 * OS1_S1 + 30) -
                                      p_over_q * *(b + 128 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 30);
            *(b + 88 * OS1_S1 + 52) = prefactor_z * *(b + 88 * OS1_S1 + 31) -
                                      p_over_q * *(b + 128 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 16);
            *(b + 88 * OS1_S1 + 53) = prefactor_y * *(b + 88 * OS1_S1 + 33) -
                                      p_over_q * *(b + 127 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 19);
            *(b + 88 * OS1_S1 + 54) = prefactor_y * *(b + 88 * OS1_S1 + 34) -
                                      p_over_q * *(b + 127 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 34);
            *(b + 88 * OS1_S1 + 55) =
                prefactor_z * *(b + 88 * OS1_S1 + 34) -
                p_over_q * *(b + 128 * OS1_S1 + 34) +
                one_over_two_q * *(b + 57 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 88 * OS1_S1 + 19);
            *(b + 89 * OS1_S1 + 35) =
                prefactor_x * *(b + 89 * OS1_S1 + 20) -
                p_over_q * *(b + 125 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 89 * OS1_S1 + 10);
            *(b + 89 * OS1_S1 + 36) = prefactor_y * *(b + 89 * OS1_S1 + 20) -
                                      p_over_q * *(b + 128 * OS1_S1 + 20);
            *(b + 89 * OS1_S1 + 37) =
                prefactor_z * *(b + 89 * OS1_S1 + 20) -
                p_over_q * *(b + 129 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 20);
            *(b + 89 * OS1_S1 + 38) = prefactor_y * *(b + 89 * OS1_S1 + 21) -
                                      p_over_q * *(b + 128 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 89 * OS1_S1 + 10);
            *(b + 89 * OS1_S1 + 39) = prefactor_y * *(b + 89 * OS1_S1 + 22) -
                                      p_over_q * *(b + 128 * OS1_S1 + 22);
            *(b + 89 * OS1_S1 + 40) =
                prefactor_z * *(b + 89 * OS1_S1 + 22) -
                p_over_q * *(b + 129 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 22) +
                one_over_two_q * *(b + 89 * OS1_S1 + 10);
            *(b + 89 * OS1_S1 + 41) =
                prefactor_x * *(b + 89 * OS1_S1 + 26) -
                p_over_q * *(b + 125 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 26) +
                one_over_two_q * *(b + 89 * OS1_S1 + 16);
            *(b + 89 * OS1_S1 + 42) =
                prefactor_z * *(b + 89 * OS1_S1 + 23) -
                p_over_q * *(b + 129 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 23);
            *(b + 89 * OS1_S1 + 43) = prefactor_y * *(b + 89 * OS1_S1 + 25) -
                                      p_over_q * *(b + 128 * OS1_S1 + 25);
            *(b + 89 * OS1_S1 + 44) =
                prefactor_x * *(b + 89 * OS1_S1 + 29) -
                p_over_q * *(b + 125 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 29) +
                one_over_two_q * *(b + 89 * OS1_S1 + 19);
            *(b + 89 * OS1_S1 + 45) =
                prefactor_x * *(b + 89 * OS1_S1 + 30) -
                p_over_q * *(b + 125 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 30);
            *(b + 89 * OS1_S1 + 46) =
                prefactor_z * *(b + 89 * OS1_S1 + 26) -
                p_over_q * *(b + 129 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 26);
            *(b + 89 * OS1_S1 + 47) =
                prefactor_x * *(b + 89 * OS1_S1 + 32) -
                p_over_q * *(b + 125 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 32);
            *(b + 89 * OS1_S1 + 48) = prefactor_y * *(b + 89 * OS1_S1 + 29) -
                                      p_over_q * *(b + 128 * OS1_S1 + 29);
            *(b + 89 * OS1_S1 + 49) =
                prefactor_x * *(b + 89 * OS1_S1 + 34) -
                p_over_q * *(b + 125 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 34);
            *(b + 89 * OS1_S1 + 50) =
                prefactor_y * *(b + 89 * OS1_S1 + 30) -
                p_over_q * *(b + 128 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 89 * OS1_S1 + 16);
            *(b + 89 * OS1_S1 + 51) =
                prefactor_z * *(b + 89 * OS1_S1 + 30) -
                p_over_q * *(b + 129 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 30);
            *(b + 89 * OS1_S1 + 52) =
                prefactor_z * *(b + 89 * OS1_S1 + 31) -
                p_over_q * *(b + 129 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 31) +
                one_over_two_q * *(b + 89 * OS1_S1 + 16);
            *(b + 89 * OS1_S1 + 53) = prefactor_y * *(b + 89 * OS1_S1 + 33) -
                                      p_over_q * *(b + 128 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 89 * OS1_S1 + 19);
            *(b + 89 * OS1_S1 + 54) = prefactor_y * *(b + 89 * OS1_S1 + 34) -
                                      p_over_q * *(b + 128 * OS1_S1 + 34);
            *(b + 89 * OS1_S1 + 55) =
                prefactor_z * *(b + 89 * OS1_S1 + 34) -
                p_over_q * *(b + 129 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 89 * OS1_S1 + 19);
            *(b + 90 * OS1_S1 + 35) =
                prefactor_x * *(b + 90 * OS1_S1 + 20) -
                p_over_q * *(b + 126 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 10);
            *(b + 90 * OS1_S1 + 36) =
                prefactor_y * *(b + 90 * OS1_S1 + 20) -
                p_over_q * *(b + 130 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 20);
            *(b + 90 * OS1_S1 + 37) = prefactor_z * *(b + 90 * OS1_S1 + 20) -
                                      p_over_q * *(b + 131 * OS1_S1 + 20);
            *(b + 90 * OS1_S1 + 38) =
                prefactor_y * *(b + 90 * OS1_S1 + 21) -
                p_over_q * *(b + 130 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 21) +
                one_over_two_q * *(b + 90 * OS1_S1 + 10);
            *(b + 90 * OS1_S1 + 39) = prefactor_z * *(b + 90 * OS1_S1 + 21) -
                                      p_over_q * *(b + 131 * OS1_S1 + 21);
            *(b + 90 * OS1_S1 + 40) = prefactor_z * *(b + 90 * OS1_S1 + 22) -
                                      p_over_q * *(b + 131 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 90 * OS1_S1 + 10);
            *(b + 90 * OS1_S1 + 41) =
                prefactor_x * *(b + 90 * OS1_S1 + 26) -
                p_over_q * *(b + 126 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 26) +
                one_over_two_q * *(b + 90 * OS1_S1 + 16);
            *(b + 90 * OS1_S1 + 42) = prefactor_z * *(b + 90 * OS1_S1 + 23) -
                                      p_over_q * *(b + 131 * OS1_S1 + 23);
            *(b + 90 * OS1_S1 + 43) =
                prefactor_y * *(b + 90 * OS1_S1 + 25) -
                p_over_q * *(b + 130 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 25);
            *(b + 90 * OS1_S1 + 44) =
                prefactor_x * *(b + 90 * OS1_S1 + 29) -
                p_over_q * *(b + 126 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 29) +
                one_over_two_q * *(b + 90 * OS1_S1 + 19);
            *(b + 90 * OS1_S1 + 45) =
                prefactor_x * *(b + 90 * OS1_S1 + 30) -
                p_over_q * *(b + 126 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 30);
            *(b + 90 * OS1_S1 + 46) = prefactor_z * *(b + 90 * OS1_S1 + 26) -
                                      p_over_q * *(b + 131 * OS1_S1 + 26);
            *(b + 90 * OS1_S1 + 47) =
                prefactor_x * *(b + 90 * OS1_S1 + 32) -
                p_over_q * *(b + 126 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 32);
            *(b + 90 * OS1_S1 + 48) =
                prefactor_y * *(b + 90 * OS1_S1 + 29) -
                p_over_q * *(b + 130 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 29);
            *(b + 90 * OS1_S1 + 49) =
                prefactor_x * *(b + 90 * OS1_S1 + 34) -
                p_over_q * *(b + 126 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 34);
            *(b + 90 * OS1_S1 + 50) =
                prefactor_y * *(b + 90 * OS1_S1 + 30) -
                p_over_q * *(b + 130 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 16);
            *(b + 90 * OS1_S1 + 51) = prefactor_z * *(b + 90 * OS1_S1 + 30) -
                                      p_over_q * *(b + 131 * OS1_S1 + 30);
            *(b + 90 * OS1_S1 + 52) = prefactor_z * *(b + 90 * OS1_S1 + 31) -
                                      p_over_q * *(b + 131 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 90 * OS1_S1 + 16);
            *(b + 90 * OS1_S1 + 53) =
                prefactor_y * *(b + 90 * OS1_S1 + 33) -
                p_over_q * *(b + 130 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 33) +
                one_over_two_q * *(b + 90 * OS1_S1 + 19);
            *(b + 90 * OS1_S1 + 54) =
                prefactor_y * *(b + 90 * OS1_S1 + 34) -
                p_over_q * *(b + 130 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 34);
            *(b + 90 * OS1_S1 + 55) =
                prefactor_z * *(b + 90 * OS1_S1 + 34) -
                p_over_q * *(b + 131 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 19);
            *(b + 91 * OS1_S1 + 35) =
                prefactor_x * *(b + 91 * OS1_S1 + 20) -
                p_over_q * *(b + 127 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 91 * OS1_S1 + 10);
            *(b + 91 * OS1_S1 + 36) =
                prefactor_y * *(b + 91 * OS1_S1 + 20) -
                p_over_q * *(b + 131 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 20);
            *(b + 91 * OS1_S1 + 37) = prefactor_z * *(b + 91 * OS1_S1 + 20) -
                                      p_over_q * *(b + 132 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 20);
            *(b + 91 * OS1_S1 + 38) =
                prefactor_y * *(b + 91 * OS1_S1 + 21) -
                p_over_q * *(b + 131 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 21) +
                one_over_two_q * *(b + 91 * OS1_S1 + 10);
            *(b + 91 * OS1_S1 + 39) = prefactor_z * *(b + 91 * OS1_S1 + 21) -
                                      p_over_q * *(b + 132 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 21);
            *(b + 91 * OS1_S1 + 40) = prefactor_z * *(b + 91 * OS1_S1 + 22) -
                                      p_over_q * *(b + 132 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 91 * OS1_S1 + 10);
            *(b + 91 * OS1_S1 + 41) =
                prefactor_x * *(b + 91 * OS1_S1 + 26) -
                p_over_q * *(b + 127 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 26) +
                one_over_two_q * *(b + 91 * OS1_S1 + 16);
            *(b + 91 * OS1_S1 + 42) = prefactor_z * *(b + 91 * OS1_S1 + 23) -
                                      p_over_q * *(b + 132 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 23);
            *(b + 91 * OS1_S1 + 43) =
                prefactor_y * *(b + 91 * OS1_S1 + 25) -
                p_over_q * *(b + 131 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 25);
            *(b + 91 * OS1_S1 + 44) =
                prefactor_x * *(b + 91 * OS1_S1 + 29) -
                p_over_q * *(b + 127 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 29) +
                one_over_two_q * *(b + 91 * OS1_S1 + 19);
            *(b + 91 * OS1_S1 + 45) =
                prefactor_x * *(b + 91 * OS1_S1 + 30) -
                p_over_q * *(b + 127 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 30);
            *(b + 91 * OS1_S1 + 46) = prefactor_z * *(b + 91 * OS1_S1 + 26) -
                                      p_over_q * *(b + 132 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 26);
            *(b + 91 * OS1_S1 + 47) =
                prefactor_x * *(b + 91 * OS1_S1 + 32) -
                p_over_q * *(b + 127 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 32);
            *(b + 91 * OS1_S1 + 48) =
                prefactor_y * *(b + 91 * OS1_S1 + 29) -
                p_over_q * *(b + 131 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 29);
            *(b + 91 * OS1_S1 + 49) =
                prefactor_x * *(b + 91 * OS1_S1 + 34) -
                p_over_q * *(b + 127 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 34);
            *(b + 91 * OS1_S1 + 50) =
                prefactor_y * *(b + 91 * OS1_S1 + 30) -
                p_over_q * *(b + 131 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 91 * OS1_S1 + 16);
            *(b + 91 * OS1_S1 + 51) = prefactor_z * *(b + 91 * OS1_S1 + 30) -
                                      p_over_q * *(b + 132 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 30);
            *(b + 91 * OS1_S1 + 52) = prefactor_z * *(b + 91 * OS1_S1 + 31) -
                                      p_over_q * *(b + 132 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 91 * OS1_S1 + 16);
            *(b + 91 * OS1_S1 + 53) =
                prefactor_y * *(b + 91 * OS1_S1 + 33) -
                p_over_q * *(b + 131 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 33) +
                one_over_two_q * *(b + 91 * OS1_S1 + 19);
            *(b + 91 * OS1_S1 + 54) =
                prefactor_y * *(b + 91 * OS1_S1 + 34) -
                p_over_q * *(b + 131 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 34);
            *(b + 91 * OS1_S1 + 55) =
                prefactor_z * *(b + 91 * OS1_S1 + 34) -
                p_over_q * *(b + 132 * OS1_S1 + 34) +
                one_over_two_q * *(b + 59 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 91 * OS1_S1 + 19);
            *(b + 92 * OS1_S1 + 35) =
                prefactor_x * *(b + 92 * OS1_S1 + 20) -
                p_over_q * *(b + 128 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 92 * OS1_S1 + 10);
            *(b + 92 * OS1_S1 + 36) = prefactor_y * *(b + 92 * OS1_S1 + 20) -
                                      p_over_q * *(b + 132 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 20);
            *(b + 92 * OS1_S1 + 37) =
                prefactor_z * *(b + 92 * OS1_S1 + 20) -
                p_over_q * *(b + 133 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 20);
            *(b + 92 * OS1_S1 + 38) = prefactor_y * *(b + 92 * OS1_S1 + 21) -
                                      p_over_q * *(b + 132 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 92 * OS1_S1 + 10);
            *(b + 92 * OS1_S1 + 39) = prefactor_y * *(b + 92 * OS1_S1 + 22) -
                                      p_over_q * *(b + 132 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 22);
            *(b + 92 * OS1_S1 + 40) =
                prefactor_z * *(b + 92 * OS1_S1 + 22) -
                p_over_q * *(b + 133 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 22) +
                one_over_two_q * *(b + 92 * OS1_S1 + 10);
            *(b + 92 * OS1_S1 + 41) =
                prefactor_x * *(b + 92 * OS1_S1 + 26) -
                p_over_q * *(b + 128 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 26) +
                one_over_two_q * *(b + 92 * OS1_S1 + 16);
            *(b + 92 * OS1_S1 + 42) =
                prefactor_z * *(b + 92 * OS1_S1 + 23) -
                p_over_q * *(b + 133 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 23);
            *(b + 92 * OS1_S1 + 43) = prefactor_y * *(b + 92 * OS1_S1 + 25) -
                                      p_over_q * *(b + 132 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 25);
            *(b + 92 * OS1_S1 + 44) =
                prefactor_x * *(b + 92 * OS1_S1 + 29) -
                p_over_q * *(b + 128 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 29) +
                one_over_two_q * *(b + 92 * OS1_S1 + 19);
            *(b + 92 * OS1_S1 + 45) =
                prefactor_x * *(b + 92 * OS1_S1 + 30) -
                p_over_q * *(b + 128 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 30);
            *(b + 92 * OS1_S1 + 46) =
                prefactor_z * *(b + 92 * OS1_S1 + 26) -
                p_over_q * *(b + 133 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 26);
            *(b + 92 * OS1_S1 + 47) =
                prefactor_x * *(b + 92 * OS1_S1 + 32) -
                p_over_q * *(b + 128 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 32);
            *(b + 92 * OS1_S1 + 48) = prefactor_y * *(b + 92 * OS1_S1 + 29) -
                                      p_over_q * *(b + 132 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 29);
            *(b + 92 * OS1_S1 + 49) =
                prefactor_x * *(b + 92 * OS1_S1 + 34) -
                p_over_q * *(b + 128 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 34);
            *(b + 92 * OS1_S1 + 50) =
                prefactor_y * *(b + 92 * OS1_S1 + 30) -
                p_over_q * *(b + 132 * OS1_S1 + 30) +
                one_over_two_q * *(b + 61 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 92 * OS1_S1 + 16);
            *(b + 92 * OS1_S1 + 51) =
                prefactor_z * *(b + 92 * OS1_S1 + 30) -
                p_over_q * *(b + 133 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 30);
            *(b + 92 * OS1_S1 + 52) =
                prefactor_z * *(b + 92 * OS1_S1 + 31) -
                p_over_q * *(b + 133 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 31) +
                one_over_two_q * *(b + 92 * OS1_S1 + 16);
            *(b + 92 * OS1_S1 + 53) = prefactor_y * *(b + 92 * OS1_S1 + 33) -
                                      p_over_q * *(b + 132 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 92 * OS1_S1 + 19);
            *(b + 92 * OS1_S1 + 54) = prefactor_y * *(b + 92 * OS1_S1 + 34) -
                                      p_over_q * *(b + 132 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 34);
            *(b + 92 * OS1_S1 + 55) =
                prefactor_z * *(b + 92 * OS1_S1 + 34) -
                p_over_q * *(b + 133 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 92 * OS1_S1 + 19);
            *(b + 93 * OS1_S1 + 35) =
                prefactor_x * *(b + 93 * OS1_S1 + 20) -
                p_over_q * *(b + 129 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 10);
            *(b + 93 * OS1_S1 + 36) = prefactor_y * *(b + 93 * OS1_S1 + 20) -
                                      p_over_q * *(b + 133 * OS1_S1 + 20);
            *(b + 93 * OS1_S1 + 37) =
                prefactor_z * *(b + 93 * OS1_S1 + 20) -
                p_over_q * *(b + 134 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 20);
            *(b + 93 * OS1_S1 + 38) = prefactor_y * *(b + 93 * OS1_S1 + 21) -
                                      p_over_q * *(b + 133 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 93 * OS1_S1 + 10);
            *(b + 93 * OS1_S1 + 39) = prefactor_y * *(b + 93 * OS1_S1 + 22) -
                                      p_over_q * *(b + 133 * OS1_S1 + 22);
            *(b + 93 * OS1_S1 + 40) =
                prefactor_z * *(b + 93 * OS1_S1 + 22) -
                p_over_q * *(b + 134 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 22) +
                one_over_two_q * *(b + 93 * OS1_S1 + 10);
            *(b + 93 * OS1_S1 + 41) =
                prefactor_x * *(b + 93 * OS1_S1 + 26) -
                p_over_q * *(b + 129 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 26) +
                one_over_two_q * *(b + 93 * OS1_S1 + 16);
            *(b + 93 * OS1_S1 + 42) =
                prefactor_z * *(b + 93 * OS1_S1 + 23) -
                p_over_q * *(b + 134 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 23);
            *(b + 93 * OS1_S1 + 43) = prefactor_y * *(b + 93 * OS1_S1 + 25) -
                                      p_over_q * *(b + 133 * OS1_S1 + 25);
            *(b + 93 * OS1_S1 + 44) =
                prefactor_x * *(b + 93 * OS1_S1 + 29) -
                p_over_q * *(b + 129 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 29) +
                one_over_two_q * *(b + 93 * OS1_S1 + 19);
            *(b + 93 * OS1_S1 + 45) =
                prefactor_x * *(b + 93 * OS1_S1 + 30) -
                p_over_q * *(b + 129 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 30);
            *(b + 93 * OS1_S1 + 46) =
                prefactor_z * *(b + 93 * OS1_S1 + 26) -
                p_over_q * *(b + 134 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 26);
            *(b + 93 * OS1_S1 + 47) =
                prefactor_x * *(b + 93 * OS1_S1 + 32) -
                p_over_q * *(b + 129 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 32);
            *(b + 93 * OS1_S1 + 48) = prefactor_y * *(b + 93 * OS1_S1 + 29) -
                                      p_over_q * *(b + 133 * OS1_S1 + 29);
            *(b + 93 * OS1_S1 + 49) =
                prefactor_x * *(b + 93 * OS1_S1 + 34) -
                p_over_q * *(b + 129 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 34);
            *(b + 93 * OS1_S1 + 50) =
                prefactor_y * *(b + 93 * OS1_S1 + 30) -
                p_over_q * *(b + 133 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 16);
            *(b + 93 * OS1_S1 + 51) =
                prefactor_z * *(b + 93 * OS1_S1 + 30) -
                p_over_q * *(b + 134 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 30);
            *(b + 93 * OS1_S1 + 52) =
                prefactor_z * *(b + 93 * OS1_S1 + 31) -
                p_over_q * *(b + 134 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 31) +
                one_over_two_q * *(b + 93 * OS1_S1 + 16);
            *(b + 93 * OS1_S1 + 53) = prefactor_y * *(b + 93 * OS1_S1 + 33) -
                                      p_over_q * *(b + 133 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 93 * OS1_S1 + 19);
            *(b + 93 * OS1_S1 + 54) = prefactor_y * *(b + 93 * OS1_S1 + 34) -
                                      p_over_q * *(b + 133 * OS1_S1 + 34);
            *(b + 93 * OS1_S1 + 55) =
                prefactor_z * *(b + 93 * OS1_S1 + 34) -
                p_over_q * *(b + 134 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 19);
            *(b + 94 * OS1_S1 + 35) =
                prefactor_x * *(b + 94 * OS1_S1 + 20) -
                p_over_q * *(b + 130 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 10);
            *(b + 94 * OS1_S1 + 36) =
                prefactor_y * *(b + 94 * OS1_S1 + 20) -
                p_over_q * *(b + 135 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 20);
            *(b + 94 * OS1_S1 + 37) = prefactor_z * *(b + 94 * OS1_S1 + 20) -
                                      p_over_q * *(b + 136 * OS1_S1 + 20);
            *(b + 94 * OS1_S1 + 38) =
                prefactor_y * *(b + 94 * OS1_S1 + 21) -
                p_over_q * *(b + 135 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 21) +
                one_over_two_q * *(b + 94 * OS1_S1 + 10);
            *(b + 94 * OS1_S1 + 39) = prefactor_z * *(b + 94 * OS1_S1 + 21) -
                                      p_over_q * *(b + 136 * OS1_S1 + 21);
            *(b + 94 * OS1_S1 + 40) = prefactor_z * *(b + 94 * OS1_S1 + 22) -
                                      p_over_q * *(b + 136 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 94 * OS1_S1 + 10);
            *(b + 94 * OS1_S1 + 41) =
                prefactor_x * *(b + 94 * OS1_S1 + 26) -
                p_over_q * *(b + 130 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 26) +
                one_over_two_q * *(b + 94 * OS1_S1 + 16);
            *(b + 94 * OS1_S1 + 42) = prefactor_z * *(b + 94 * OS1_S1 + 23) -
                                      p_over_q * *(b + 136 * OS1_S1 + 23);
            *(b + 94 * OS1_S1 + 43) =
                prefactor_y * *(b + 94 * OS1_S1 + 25) -
                p_over_q * *(b + 135 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 25);
            *(b + 94 * OS1_S1 + 44) =
                prefactor_x * *(b + 94 * OS1_S1 + 29) -
                p_over_q * *(b + 130 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 29) +
                one_over_two_q * *(b + 94 * OS1_S1 + 19);
            *(b + 94 * OS1_S1 + 45) =
                prefactor_x * *(b + 94 * OS1_S1 + 30) -
                p_over_q * *(b + 130 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 30);
            *(b + 94 * OS1_S1 + 46) = prefactor_z * *(b + 94 * OS1_S1 + 26) -
                                      p_over_q * *(b + 136 * OS1_S1 + 26);
            *(b + 94 * OS1_S1 + 47) =
                prefactor_x * *(b + 94 * OS1_S1 + 32) -
                p_over_q * *(b + 130 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 32);
            *(b + 94 * OS1_S1 + 48) =
                prefactor_x * *(b + 94 * OS1_S1 + 33) -
                p_over_q * *(b + 130 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 33);
            *(b + 94 * OS1_S1 + 49) =
                prefactor_x * *(b + 94 * OS1_S1 + 34) -
                p_over_q * *(b + 130 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 34);
            *(b + 94 * OS1_S1 + 50) =
                prefactor_y * *(b + 94 * OS1_S1 + 30) -
                p_over_q * *(b + 135 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 16);
            *(b + 94 * OS1_S1 + 51) = prefactor_z * *(b + 94 * OS1_S1 + 30) -
                                      p_over_q * *(b + 136 * OS1_S1 + 30);
            *(b + 94 * OS1_S1 + 52) = prefactor_z * *(b + 94 * OS1_S1 + 31) -
                                      p_over_q * *(b + 136 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 94 * OS1_S1 + 16);
            *(b + 94 * OS1_S1 + 53) =
                prefactor_y * *(b + 94 * OS1_S1 + 33) -
                p_over_q * *(b + 135 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 33) +
                one_over_two_q * *(b + 94 * OS1_S1 + 19);
            *(b + 94 * OS1_S1 + 54) =
                prefactor_y * *(b + 94 * OS1_S1 + 34) -
                p_over_q * *(b + 135 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 34);
            *(b + 94 * OS1_S1 + 55) =
                prefactor_z * *(b + 94 * OS1_S1 + 34) -
                p_over_q * *(b + 136 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 19);
            *(b + 95 * OS1_S1 + 35) =
                prefactor_x * *(b + 95 * OS1_S1 + 20) -
                p_over_q * *(b + 131 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 10);
            *(b + 95 * OS1_S1 + 36) =
                prefactor_y * *(b + 95 * OS1_S1 + 20) -
                p_over_q * *(b + 136 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 20);
            *(b + 95 * OS1_S1 + 37) = prefactor_z * *(b + 95 * OS1_S1 + 20) -
                                      p_over_q * *(b + 137 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 20);
            *(b + 95 * OS1_S1 + 38) =
                prefactor_y * *(b + 95 * OS1_S1 + 21) -
                p_over_q * *(b + 136 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 21) +
                one_over_two_q * *(b + 95 * OS1_S1 + 10);
            *(b + 95 * OS1_S1 + 39) = prefactor_z * *(b + 95 * OS1_S1 + 21) -
                                      p_over_q * *(b + 137 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 21);
            *(b + 95 * OS1_S1 + 40) = prefactor_z * *(b + 95 * OS1_S1 + 22) -
                                      p_over_q * *(b + 137 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 95 * OS1_S1 + 10);
            *(b + 95 * OS1_S1 + 41) =
                prefactor_x * *(b + 95 * OS1_S1 + 26) -
                p_over_q * *(b + 131 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 26) +
                one_over_two_q * *(b + 95 * OS1_S1 + 16);
            *(b + 95 * OS1_S1 + 42) = prefactor_z * *(b + 95 * OS1_S1 + 23) -
                                      p_over_q * *(b + 137 * OS1_S1 + 23) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 23);
            *(b + 95 * OS1_S1 + 43) =
                prefactor_y * *(b + 95 * OS1_S1 + 25) -
                p_over_q * *(b + 136 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 25);
            *(b + 95 * OS1_S1 + 44) =
                prefactor_x * *(b + 95 * OS1_S1 + 29) -
                p_over_q * *(b + 131 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 29) +
                one_over_two_q * *(b + 95 * OS1_S1 + 19);
            *(b + 95 * OS1_S1 + 45) =
                prefactor_x * *(b + 95 * OS1_S1 + 30) -
                p_over_q * *(b + 131 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 30);
            *(b + 95 * OS1_S1 + 46) = prefactor_z * *(b + 95 * OS1_S1 + 26) -
                                      p_over_q * *(b + 137 * OS1_S1 + 26) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 26);
            *(b + 95 * OS1_S1 + 47) =
                prefactor_x * *(b + 95 * OS1_S1 + 32) -
                p_over_q * *(b + 131 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 32);
            *(b + 95 * OS1_S1 + 48) =
                prefactor_y * *(b + 95 * OS1_S1 + 29) -
                p_over_q * *(b + 136 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 29);
            *(b + 95 * OS1_S1 + 49) =
                prefactor_x * *(b + 95 * OS1_S1 + 34) -
                p_over_q * *(b + 131 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 34);
            *(b + 95 * OS1_S1 + 50) =
                prefactor_y * *(b + 95 * OS1_S1 + 30) -
                p_over_q * *(b + 136 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 16);
            *(b + 95 * OS1_S1 + 51) = prefactor_z * *(b + 95 * OS1_S1 + 30) -
                                      p_over_q * *(b + 137 * OS1_S1 + 30) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 30);
            *(b + 95 * OS1_S1 + 52) = prefactor_z * *(b + 95 * OS1_S1 + 31) -
                                      p_over_q * *(b + 137 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 95 * OS1_S1 + 16);
            *(b + 95 * OS1_S1 + 53) =
                prefactor_y * *(b + 95 * OS1_S1 + 33) -
                p_over_q * *(b + 136 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 33) +
                one_over_two_q * *(b + 95 * OS1_S1 + 19);
            *(b + 95 * OS1_S1 + 54) =
                prefactor_y * *(b + 95 * OS1_S1 + 34) -
                p_over_q * *(b + 136 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 34);
            *(b + 95 * OS1_S1 + 55) =
                prefactor_z * *(b + 95 * OS1_S1 + 34) -
                p_over_q * *(b + 137 * OS1_S1 + 34) +
                one_over_two_q * *(b + 62 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 19);
            *(b + 96 * OS1_S1 + 35) =
                prefactor_x * *(b + 96 * OS1_S1 + 20) -
                p_over_q * *(b + 132 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 10);
            *(b + 96 * OS1_S1 + 36) =
                prefactor_y * *(b + 96 * OS1_S1 + 20) -
                p_over_q * *(b + 137 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 20);
            *(b + 96 * OS1_S1 + 37) =
                prefactor_z * *(b + 96 * OS1_S1 + 20) -
                p_over_q * *(b + 138 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 20);
            *(b + 96 * OS1_S1 + 38) =
                prefactor_y * *(b + 96 * OS1_S1 + 21) -
                p_over_q * *(b + 137 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 21) +
                one_over_two_q * *(b + 96 * OS1_S1 + 10);
            *(b + 96 * OS1_S1 + 39) =
                prefactor_z * *(b + 96 * OS1_S1 + 21) -
                p_over_q * *(b + 138 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 21);
            *(b + 96 * OS1_S1 + 40) =
                prefactor_z * *(b + 96 * OS1_S1 + 22) -
                p_over_q * *(b + 138 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 22) +
                one_over_two_q * *(b + 96 * OS1_S1 + 10);
            *(b + 96 * OS1_S1 + 41) =
                prefactor_x * *(b + 96 * OS1_S1 + 26) -
                p_over_q * *(b + 132 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 26) +
                one_over_two_q * *(b + 96 * OS1_S1 + 16);
            *(b + 96 * OS1_S1 + 42) =
                prefactor_z * *(b + 96 * OS1_S1 + 23) -
                p_over_q * *(b + 138 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 23);
            *(b + 96 * OS1_S1 + 43) =
                prefactor_y * *(b + 96 * OS1_S1 + 25) -
                p_over_q * *(b + 137 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 25);
            *(b + 96 * OS1_S1 + 44) =
                prefactor_x * *(b + 96 * OS1_S1 + 29) -
                p_over_q * *(b + 132 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 29) +
                one_over_two_q * *(b + 96 * OS1_S1 + 19);
            *(b + 96 * OS1_S1 + 45) =
                prefactor_x * *(b + 96 * OS1_S1 + 30) -
                p_over_q * *(b + 132 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 30);
            *(b + 96 * OS1_S1 + 46) =
                prefactor_z * *(b + 96 * OS1_S1 + 26) -
                p_over_q * *(b + 138 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 26);
            *(b + 96 * OS1_S1 + 47) =
                prefactor_x * *(b + 96 * OS1_S1 + 32) -
                p_over_q * *(b + 132 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 32);
            *(b + 96 * OS1_S1 + 48) =
                prefactor_y * *(b + 96 * OS1_S1 + 29) -
                p_over_q * *(b + 137 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 29);
            *(b + 96 * OS1_S1 + 49) =
                prefactor_x * *(b + 96 * OS1_S1 + 34) -
                p_over_q * *(b + 132 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 34);
            *(b + 96 * OS1_S1 + 50) =
                prefactor_y * *(b + 96 * OS1_S1 + 30) -
                p_over_q * *(b + 137 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 16);
            *(b + 96 * OS1_S1 + 51) =
                prefactor_z * *(b + 96 * OS1_S1 + 30) -
                p_over_q * *(b + 138 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 30);
            *(b + 96 * OS1_S1 + 52) =
                prefactor_z * *(b + 96 * OS1_S1 + 31) -
                p_over_q * *(b + 138 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 31) +
                one_over_two_q * *(b + 96 * OS1_S1 + 16);
            *(b + 96 * OS1_S1 + 53) =
                prefactor_y * *(b + 96 * OS1_S1 + 33) -
                p_over_q * *(b + 137 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 33) +
                one_over_two_q * *(b + 96 * OS1_S1 + 19);
            *(b + 96 * OS1_S1 + 54) =
                prefactor_y * *(b + 96 * OS1_S1 + 34) -
                p_over_q * *(b + 137 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 34);
            *(b + 96 * OS1_S1 + 55) =
                prefactor_z * *(b + 96 * OS1_S1 + 34) -
                p_over_q * *(b + 138 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 19);
            *(b + 97 * OS1_S1 + 35) =
                prefactor_x * *(b + 97 * OS1_S1 + 20) -
                p_over_q * *(b + 133 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 10);
            *(b + 97 * OS1_S1 + 36) = prefactor_y * *(b + 97 * OS1_S1 + 20) -
                                      p_over_q * *(b + 138 * OS1_S1 + 20) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 20);
            *(b + 97 * OS1_S1 + 37) =
                prefactor_z * *(b + 97 * OS1_S1 + 20) -
                p_over_q * *(b + 139 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 20);
            *(b + 97 * OS1_S1 + 38) = prefactor_y * *(b + 97 * OS1_S1 + 21) -
                                      p_over_q * *(b + 138 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 97 * OS1_S1 + 10);
            *(b + 97 * OS1_S1 + 39) = prefactor_y * *(b + 97 * OS1_S1 + 22) -
                                      p_over_q * *(b + 138 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 22);
            *(b + 97 * OS1_S1 + 40) =
                prefactor_z * *(b + 97 * OS1_S1 + 22) -
                p_over_q * *(b + 139 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 22) +
                one_over_two_q * *(b + 97 * OS1_S1 + 10);
            *(b + 97 * OS1_S1 + 41) =
                prefactor_x * *(b + 97 * OS1_S1 + 26) -
                p_over_q * *(b + 133 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 26) +
                one_over_two_q * *(b + 97 * OS1_S1 + 16);
            *(b + 97 * OS1_S1 + 42) =
                prefactor_z * *(b + 97 * OS1_S1 + 23) -
                p_over_q * *(b + 139 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 23);
            *(b + 97 * OS1_S1 + 43) = prefactor_y * *(b + 97 * OS1_S1 + 25) -
                                      p_over_q * *(b + 138 * OS1_S1 + 25) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 25);
            *(b + 97 * OS1_S1 + 44) =
                prefactor_x * *(b + 97 * OS1_S1 + 29) -
                p_over_q * *(b + 133 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 29) +
                one_over_two_q * *(b + 97 * OS1_S1 + 19);
            *(b + 97 * OS1_S1 + 45) =
                prefactor_x * *(b + 97 * OS1_S1 + 30) -
                p_over_q * *(b + 133 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 30);
            *(b + 97 * OS1_S1 + 46) =
                prefactor_z * *(b + 97 * OS1_S1 + 26) -
                p_over_q * *(b + 139 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 26);
            *(b + 97 * OS1_S1 + 47) =
                prefactor_x * *(b + 97 * OS1_S1 + 32) -
                p_over_q * *(b + 133 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 32);
            *(b + 97 * OS1_S1 + 48) = prefactor_y * *(b + 97 * OS1_S1 + 29) -
                                      p_over_q * *(b + 138 * OS1_S1 + 29) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 29);
            *(b + 97 * OS1_S1 + 49) =
                prefactor_x * *(b + 97 * OS1_S1 + 34) -
                p_over_q * *(b + 133 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 34);
            *(b + 97 * OS1_S1 + 50) =
                prefactor_y * *(b + 97 * OS1_S1 + 30) -
                p_over_q * *(b + 138 * OS1_S1 + 30) +
                one_over_two_q * *(b + 65 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 16);
            *(b + 97 * OS1_S1 + 51) =
                prefactor_z * *(b + 97 * OS1_S1 + 30) -
                p_over_q * *(b + 139 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 30);
            *(b + 97 * OS1_S1 + 52) =
                prefactor_z * *(b + 97 * OS1_S1 + 31) -
                p_over_q * *(b + 139 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 31) +
                one_over_two_q * *(b + 97 * OS1_S1 + 16);
            *(b + 97 * OS1_S1 + 53) = prefactor_y * *(b + 97 * OS1_S1 + 33) -
                                      p_over_q * *(b + 138 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 97 * OS1_S1 + 19);
            *(b + 97 * OS1_S1 + 54) = prefactor_y * *(b + 97 * OS1_S1 + 34) -
                                      p_over_q * *(b + 138 * OS1_S1 + 34) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 34);
            *(b + 97 * OS1_S1 + 55) =
                prefactor_z * *(b + 97 * OS1_S1 + 34) -
                p_over_q * *(b + 139 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 19);
            *(b + 98 * OS1_S1 + 35) =
                prefactor_x * *(b + 98 * OS1_S1 + 20) -
                p_over_q * *(b + 134 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 10);
            *(b + 98 * OS1_S1 + 36) = prefactor_y * *(b + 98 * OS1_S1 + 20) -
                                      p_over_q * *(b + 139 * OS1_S1 + 20);
            *(b + 98 * OS1_S1 + 37) =
                prefactor_z * *(b + 98 * OS1_S1 + 20) -
                p_over_q * *(b + 140 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 20);
            *(b + 98 * OS1_S1 + 38) = prefactor_y * *(b + 98 * OS1_S1 + 21) -
                                      p_over_q * *(b + 139 * OS1_S1 + 21) +
                                      one_over_two_q * *(b + 98 * OS1_S1 + 10);
            *(b + 98 * OS1_S1 + 39) = prefactor_y * *(b + 98 * OS1_S1 + 22) -
                                      p_over_q * *(b + 139 * OS1_S1 + 22);
            *(b + 98 * OS1_S1 + 40) =
                prefactor_z * *(b + 98 * OS1_S1 + 22) -
                p_over_q * *(b + 140 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 22) +
                one_over_two_q * *(b + 98 * OS1_S1 + 10);
            *(b + 98 * OS1_S1 + 41) =
                prefactor_x * *(b + 98 * OS1_S1 + 26) -
                p_over_q * *(b + 134 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 26) +
                one_over_two_q * *(b + 98 * OS1_S1 + 16);
            *(b + 98 * OS1_S1 + 42) =
                prefactor_z * *(b + 98 * OS1_S1 + 23) -
                p_over_q * *(b + 140 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 23);
            *(b + 98 * OS1_S1 + 43) = prefactor_y * *(b + 98 * OS1_S1 + 25) -
                                      p_over_q * *(b + 139 * OS1_S1 + 25);
            *(b + 98 * OS1_S1 + 44) =
                prefactor_x * *(b + 98 * OS1_S1 + 29) -
                p_over_q * *(b + 134 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 29) +
                one_over_two_q * *(b + 98 * OS1_S1 + 19);
            *(b + 98 * OS1_S1 + 45) =
                prefactor_x * *(b + 98 * OS1_S1 + 30) -
                p_over_q * *(b + 134 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 30);
            *(b + 98 * OS1_S1 + 46) =
                prefactor_x * *(b + 98 * OS1_S1 + 31) -
                p_over_q * *(b + 134 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 31);
            *(b + 98 * OS1_S1 + 47) =
                prefactor_x * *(b + 98 * OS1_S1 + 32) -
                p_over_q * *(b + 134 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 32);
            *(b + 98 * OS1_S1 + 48) = prefactor_y * *(b + 98 * OS1_S1 + 29) -
                                      p_over_q * *(b + 139 * OS1_S1 + 29);
            *(b + 98 * OS1_S1 + 49) =
                prefactor_x * *(b + 98 * OS1_S1 + 34) -
                p_over_q * *(b + 134 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 34);
            *(b + 98 * OS1_S1 + 50) =
                prefactor_y * *(b + 98 * OS1_S1 + 30) -
                p_over_q * *(b + 139 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 16);
            *(b + 98 * OS1_S1 + 51) =
                prefactor_z * *(b + 98 * OS1_S1 + 30) -
                p_over_q * *(b + 140 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 30);
            *(b + 98 * OS1_S1 + 52) =
                prefactor_z * *(b + 98 * OS1_S1 + 31) -
                p_over_q * *(b + 140 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 31) +
                one_over_two_q * *(b + 98 * OS1_S1 + 16);
            *(b + 98 * OS1_S1 + 53) = prefactor_y * *(b + 98 * OS1_S1 + 33) -
                                      p_over_q * *(b + 139 * OS1_S1 + 33) +
                                      one_over_two_q * *(b + 98 * OS1_S1 + 19);
            *(b + 98 * OS1_S1 + 54) = prefactor_y * *(b + 98 * OS1_S1 + 34) -
                                      p_over_q * *(b + 139 * OS1_S1 + 34);
            *(b + 98 * OS1_S1 + 55) =
                prefactor_z * *(b + 98 * OS1_S1 + 34) -
                p_over_q * *(b + 140 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 19);
            *(b + 99 * OS1_S1 + 35) =
                prefactor_x * *(b + 99 * OS1_S1 + 20) -
                p_over_q * *(b + 135 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 99 * OS1_S1 + 10);
            *(b + 99 * OS1_S1 + 36) =
                prefactor_y * *(b + 99 * OS1_S1 + 20) -
                p_over_q * *(b + 141 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 20);
            *(b + 99 * OS1_S1 + 37) = prefactor_z * *(b + 99 * OS1_S1 + 20) -
                                      p_over_q * *(b + 142 * OS1_S1 + 20);
            *(b + 99 * OS1_S1 + 38) =
                prefactor_y * *(b + 99 * OS1_S1 + 21) -
                p_over_q * *(b + 141 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 21) +
                one_over_two_q * *(b + 99 * OS1_S1 + 10);
            *(b + 99 * OS1_S1 + 39) = prefactor_z * *(b + 99 * OS1_S1 + 21) -
                                      p_over_q * *(b + 142 * OS1_S1 + 21);
            *(b + 99 * OS1_S1 + 40) = prefactor_z * *(b + 99 * OS1_S1 + 22) -
                                      p_over_q * *(b + 142 * OS1_S1 + 22) +
                                      one_over_two_q * *(b + 99 * OS1_S1 + 10);
            *(b + 99 * OS1_S1 + 41) =
                prefactor_x * *(b + 99 * OS1_S1 + 26) -
                p_over_q * *(b + 135 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 26) +
                one_over_two_q * *(b + 99 * OS1_S1 + 16);
            *(b + 99 * OS1_S1 + 42) = prefactor_z * *(b + 99 * OS1_S1 + 23) -
                                      p_over_q * *(b + 142 * OS1_S1 + 23);
            *(b + 99 * OS1_S1 + 43) =
                prefactor_y * *(b + 99 * OS1_S1 + 25) -
                p_over_q * *(b + 141 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 25);
            *(b + 99 * OS1_S1 + 44) =
                prefactor_x * *(b + 99 * OS1_S1 + 29) -
                p_over_q * *(b + 135 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 29) +
                one_over_two_q * *(b + 99 * OS1_S1 + 19);
            *(b + 99 * OS1_S1 + 45) =
                prefactor_x * *(b + 99 * OS1_S1 + 30) -
                p_over_q * *(b + 135 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 30);
            *(b + 99 * OS1_S1 + 46) = prefactor_z * *(b + 99 * OS1_S1 + 26) -
                                      p_over_q * *(b + 142 * OS1_S1 + 26);
            *(b + 99 * OS1_S1 + 47) =
                prefactor_x * *(b + 99 * OS1_S1 + 32) -
                p_over_q * *(b + 135 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 32);
            *(b + 99 * OS1_S1 + 48) =
                prefactor_x * *(b + 99 * OS1_S1 + 33) -
                p_over_q * *(b + 135 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 33);
            *(b + 99 * OS1_S1 + 49) =
                prefactor_x * *(b + 99 * OS1_S1 + 34) -
                p_over_q * *(b + 135 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 34);
            *(b + 99 * OS1_S1 + 50) =
                prefactor_y * *(b + 99 * OS1_S1 + 30) -
                p_over_q * *(b + 141 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 99 * OS1_S1 + 16);
            *(b + 99 * OS1_S1 + 51) = prefactor_z * *(b + 99 * OS1_S1 + 30) -
                                      p_over_q * *(b + 142 * OS1_S1 + 30);
            *(b + 99 * OS1_S1 + 52) = prefactor_z * *(b + 99 * OS1_S1 + 31) -
                                      p_over_q * *(b + 142 * OS1_S1 + 31) +
                                      one_over_two_q * *(b + 99 * OS1_S1 + 16);
            *(b + 99 * OS1_S1 + 53) =
                prefactor_y * *(b + 99 * OS1_S1 + 33) -
                p_over_q * *(b + 141 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 33) +
                one_over_two_q * *(b + 99 * OS1_S1 + 19);
            *(b + 99 * OS1_S1 + 54) =
                prefactor_y * *(b + 99 * OS1_S1 + 34) -
                p_over_q * *(b + 141 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 34);
            *(b + 99 * OS1_S1 + 55) =
                prefactor_z * *(b + 99 * OS1_S1 + 34) -
                p_over_q * *(b + 142 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 99 * OS1_S1 + 19);
            *(b + 100 * OS1_S1 + 35) =
                prefactor_x * *(b + 100 * OS1_S1 + 20) -
                p_over_q * *(b + 136 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 100 * OS1_S1 + 10);
            *(b + 100 * OS1_S1 + 36) =
                prefactor_y * *(b + 100 * OS1_S1 + 20) -
                p_over_q * *(b + 142 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 20);
            *(b + 100 * OS1_S1 + 37) = prefactor_z * *(b + 100 * OS1_S1 + 20) -
                                       p_over_q * *(b + 143 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 20);
            *(b + 100 * OS1_S1 + 38) =
                prefactor_y * *(b + 100 * OS1_S1 + 21) -
                p_over_q * *(b + 142 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 21) +
                one_over_two_q * *(b + 100 * OS1_S1 + 10);
            *(b + 100 * OS1_S1 + 39) = prefactor_z * *(b + 100 * OS1_S1 + 21) -
                                       p_over_q * *(b + 143 * OS1_S1 + 21) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 21);
            *(b + 100 * OS1_S1 + 40) =
                prefactor_z * *(b + 100 * OS1_S1 + 22) -
                p_over_q * *(b + 143 * OS1_S1 + 22) +
                one_over_two_q * *(b + 66 * OS1_S1 + 22) +
                one_over_two_q * *(b + 100 * OS1_S1 + 10);
            *(b + 100 * OS1_S1 + 41) =
                prefactor_x * *(b + 100 * OS1_S1 + 26) -
                p_over_q * *(b + 136 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 26) +
                one_over_two_q * *(b + 100 * OS1_S1 + 16);
            *(b + 100 * OS1_S1 + 42) = prefactor_z * *(b + 100 * OS1_S1 + 23) -
                                       p_over_q * *(b + 143 * OS1_S1 + 23) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 23);
            *(b + 100 * OS1_S1 + 43) =
                prefactor_y * *(b + 100 * OS1_S1 + 25) -
                p_over_q * *(b + 142 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 25);
            *(b + 100 * OS1_S1 + 44) =
                prefactor_x * *(b + 100 * OS1_S1 + 29) -
                p_over_q * *(b + 136 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 29) +
                one_over_two_q * *(b + 100 * OS1_S1 + 19);
            *(b + 100 * OS1_S1 + 45) =
                prefactor_x * *(b + 100 * OS1_S1 + 30) -
                p_over_q * *(b + 136 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 30);
            *(b + 100 * OS1_S1 + 46) = prefactor_z * *(b + 100 * OS1_S1 + 26) -
                                       p_over_q * *(b + 143 * OS1_S1 + 26) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 26);
            *(b + 100 * OS1_S1 + 47) =
                prefactor_x * *(b + 100 * OS1_S1 + 32) -
                p_over_q * *(b + 136 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 32);
            *(b + 100 * OS1_S1 + 48) =
                prefactor_x * *(b + 100 * OS1_S1 + 33) -
                p_over_q * *(b + 136 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 33);
            *(b + 100 * OS1_S1 + 49) =
                prefactor_x * *(b + 100 * OS1_S1 + 34) -
                p_over_q * *(b + 136 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 34);
            *(b + 100 * OS1_S1 + 50) =
                prefactor_y * *(b + 100 * OS1_S1 + 30) -
                p_over_q * *(b + 142 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 100 * OS1_S1 + 16);
            *(b + 100 * OS1_S1 + 51) = prefactor_z * *(b + 100 * OS1_S1 + 30) -
                                       p_over_q * *(b + 143 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 30);
            *(b + 100 * OS1_S1 + 52) =
                prefactor_z * *(b + 100 * OS1_S1 + 31) -
                p_over_q * *(b + 143 * OS1_S1 + 31) +
                one_over_two_q * *(b + 66 * OS1_S1 + 31) +
                one_over_two_q * *(b + 100 * OS1_S1 + 16);
            *(b + 100 * OS1_S1 + 53) =
                prefactor_y * *(b + 100 * OS1_S1 + 33) -
                p_over_q * *(b + 142 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 33) +
                one_over_two_q * *(b + 100 * OS1_S1 + 19);
            *(b + 100 * OS1_S1 + 54) =
                prefactor_y * *(b + 100 * OS1_S1 + 34) -
                p_over_q * *(b + 142 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 34);
            *(b + 100 * OS1_S1 + 55) =
                prefactor_z * *(b + 100 * OS1_S1 + 34) -
                p_over_q * *(b + 143 * OS1_S1 + 34) +
                one_over_two_q * *(b + 66 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 100 * OS1_S1 + 19);
            *(b + 101 * OS1_S1 + 35) =
                prefactor_x * *(b + 101 * OS1_S1 + 20) -
                p_over_q * *(b + 137 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 10);
            *(b + 101 * OS1_S1 + 36) =
                prefactor_y * *(b + 101 * OS1_S1 + 20) -
                p_over_q * *(b + 143 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 20);
            *(b + 101 * OS1_S1 + 37) =
                prefactor_z * *(b + 101 * OS1_S1 + 20) -
                p_over_q * *(b + 144 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 20);
            *(b + 101 * OS1_S1 + 38) =
                prefactor_y * *(b + 101 * OS1_S1 + 21) -
                p_over_q * *(b + 143 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 21) +
                one_over_two_q * *(b + 101 * OS1_S1 + 10);
            *(b + 101 * OS1_S1 + 39) =
                prefactor_z * *(b + 101 * OS1_S1 + 21) -
                p_over_q * *(b + 144 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 21);
            *(b + 101 * OS1_S1 + 40) =
                prefactor_z * *(b + 101 * OS1_S1 + 22) -
                p_over_q * *(b + 144 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 22) +
                one_over_two_q * *(b + 101 * OS1_S1 + 10);
            *(b + 101 * OS1_S1 + 41) =
                prefactor_x * *(b + 101 * OS1_S1 + 26) -
                p_over_q * *(b + 137 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 26) +
                one_over_two_q * *(b + 101 * OS1_S1 + 16);
            *(b + 101 * OS1_S1 + 42) =
                prefactor_z * *(b + 101 * OS1_S1 + 23) -
                p_over_q * *(b + 144 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 23);
            *(b + 101 * OS1_S1 + 43) =
                prefactor_y * *(b + 101 * OS1_S1 + 25) -
                p_over_q * *(b + 143 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 25);
            *(b + 101 * OS1_S1 + 44) =
                prefactor_x * *(b + 101 * OS1_S1 + 29) -
                p_over_q * *(b + 137 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 29) +
                one_over_two_q * *(b + 101 * OS1_S1 + 19);
            *(b + 101 * OS1_S1 + 45) =
                prefactor_x * *(b + 101 * OS1_S1 + 30) -
                p_over_q * *(b + 137 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 30);
            *(b + 101 * OS1_S1 + 46) =
                prefactor_z * *(b + 101 * OS1_S1 + 26) -
                p_over_q * *(b + 144 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 26);
            *(b + 101 * OS1_S1 + 47) =
                prefactor_x * *(b + 101 * OS1_S1 + 32) -
                p_over_q * *(b + 137 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 32);
            *(b + 101 * OS1_S1 + 48) =
                prefactor_x * *(b + 101 * OS1_S1 + 33) -
                p_over_q * *(b + 137 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 33);
            *(b + 101 * OS1_S1 + 49) =
                prefactor_x * *(b + 101 * OS1_S1 + 34) -
                p_over_q * *(b + 137 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 34);
            *(b + 101 * OS1_S1 + 50) =
                prefactor_y * *(b + 101 * OS1_S1 + 30) -
                p_over_q * *(b + 143 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 16);
            *(b + 101 * OS1_S1 + 51) =
                prefactor_z * *(b + 101 * OS1_S1 + 30) -
                p_over_q * *(b + 144 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 30);
            *(b + 101 * OS1_S1 + 52) =
                prefactor_z * *(b + 101 * OS1_S1 + 31) -
                p_over_q * *(b + 144 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 31) +
                one_over_two_q * *(b + 101 * OS1_S1 + 16);
            *(b + 101 * OS1_S1 + 53) =
                prefactor_y * *(b + 101 * OS1_S1 + 33) -
                p_over_q * *(b + 143 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 33) +
                one_over_two_q * *(b + 101 * OS1_S1 + 19);
            *(b + 101 * OS1_S1 + 54) =
                prefactor_y * *(b + 101 * OS1_S1 + 34) -
                p_over_q * *(b + 143 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 34);
            *(b + 101 * OS1_S1 + 55) =
                prefactor_z * *(b + 101 * OS1_S1 + 34) -
                p_over_q * *(b + 144 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 19);
            *(b + 102 * OS1_S1 + 35) =
                prefactor_x * *(b + 102 * OS1_S1 + 20) -
                p_over_q * *(b + 138 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 10);
            *(b + 102 * OS1_S1 + 36) =
                prefactor_y * *(b + 102 * OS1_S1 + 20) -
                p_over_q * *(b + 144 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 20);
            *(b + 102 * OS1_S1 + 37) =
                prefactor_z * *(b + 102 * OS1_S1 + 20) -
                p_over_q * *(b + 145 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 20);
            *(b + 102 * OS1_S1 + 38) =
                prefactor_y * *(b + 102 * OS1_S1 + 21) -
                p_over_q * *(b + 144 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 21) +
                one_over_two_q * *(b + 102 * OS1_S1 + 10);
            *(b + 102 * OS1_S1 + 39) =
                prefactor_y * *(b + 102 * OS1_S1 + 22) -
                p_over_q * *(b + 144 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 22);
            *(b + 102 * OS1_S1 + 40) =
                prefactor_z * *(b + 102 * OS1_S1 + 22) -
                p_over_q * *(b + 145 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 22) +
                one_over_two_q * *(b + 102 * OS1_S1 + 10);
            *(b + 102 * OS1_S1 + 41) =
                prefactor_x * *(b + 102 * OS1_S1 + 26) -
                p_over_q * *(b + 138 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 26) +
                one_over_two_q * *(b + 102 * OS1_S1 + 16);
            *(b + 102 * OS1_S1 + 42) =
                prefactor_z * *(b + 102 * OS1_S1 + 23) -
                p_over_q * *(b + 145 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 23);
            *(b + 102 * OS1_S1 + 43) =
                prefactor_y * *(b + 102 * OS1_S1 + 25) -
                p_over_q * *(b + 144 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 25);
            *(b + 102 * OS1_S1 + 44) =
                prefactor_x * *(b + 102 * OS1_S1 + 29) -
                p_over_q * *(b + 138 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 29) +
                one_over_two_q * *(b + 102 * OS1_S1 + 19);
            *(b + 102 * OS1_S1 + 45) =
                prefactor_x * *(b + 102 * OS1_S1 + 30) -
                p_over_q * *(b + 138 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 30);
            *(b + 102 * OS1_S1 + 46) =
                prefactor_x * *(b + 102 * OS1_S1 + 31) -
                p_over_q * *(b + 138 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 31);
            *(b + 102 * OS1_S1 + 47) =
                prefactor_x * *(b + 102 * OS1_S1 + 32) -
                p_over_q * *(b + 138 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 32);
            *(b + 102 * OS1_S1 + 48) =
                prefactor_y * *(b + 102 * OS1_S1 + 29) -
                p_over_q * *(b + 144 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 29);
            *(b + 102 * OS1_S1 + 49) =
                prefactor_x * *(b + 102 * OS1_S1 + 34) -
                p_over_q * *(b + 138 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 34);
            *(b + 102 * OS1_S1 + 50) =
                prefactor_y * *(b + 102 * OS1_S1 + 30) -
                p_over_q * *(b + 144 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 16);
            *(b + 102 * OS1_S1 + 51) =
                prefactor_z * *(b + 102 * OS1_S1 + 30) -
                p_over_q * *(b + 145 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 30);
            *(b + 102 * OS1_S1 + 52) =
                prefactor_z * *(b + 102 * OS1_S1 + 31) -
                p_over_q * *(b + 145 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 31) +
                one_over_two_q * *(b + 102 * OS1_S1 + 16);
            *(b + 102 * OS1_S1 + 53) =
                prefactor_y * *(b + 102 * OS1_S1 + 33) -
                p_over_q * *(b + 144 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 33) +
                one_over_two_q * *(b + 102 * OS1_S1 + 19);
            *(b + 102 * OS1_S1 + 54) =
                prefactor_y * *(b + 102 * OS1_S1 + 34) -
                p_over_q * *(b + 144 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 34);
            *(b + 102 * OS1_S1 + 55) =
                prefactor_z * *(b + 102 * OS1_S1 + 34) -
                p_over_q * *(b + 145 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 19);
            *(b + 103 * OS1_S1 + 35) =
                prefactor_x * *(b + 103 * OS1_S1 + 20) -
                p_over_q * *(b + 139 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 103 * OS1_S1 + 10);
            *(b + 103 * OS1_S1 + 36) = prefactor_y * *(b + 103 * OS1_S1 + 20) -
                                       p_over_q * *(b + 145 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 20);
            *(b + 103 * OS1_S1 + 37) =
                prefactor_z * *(b + 103 * OS1_S1 + 20) -
                p_over_q * *(b + 146 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 20);
            *(b + 103 * OS1_S1 + 38) =
                prefactor_y * *(b + 103 * OS1_S1 + 21) -
                p_over_q * *(b + 145 * OS1_S1 + 21) +
                one_over_two_q * *(b + 70 * OS1_S1 + 21) +
                one_over_two_q * *(b + 103 * OS1_S1 + 10);
            *(b + 103 * OS1_S1 + 39) = prefactor_y * *(b + 103 * OS1_S1 + 22) -
                                       p_over_q * *(b + 145 * OS1_S1 + 22) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 22);
            *(b + 103 * OS1_S1 + 40) =
                prefactor_z * *(b + 103 * OS1_S1 + 22) -
                p_over_q * *(b + 146 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 22) +
                one_over_two_q * *(b + 103 * OS1_S1 + 10);
            *(b + 103 * OS1_S1 + 41) =
                prefactor_x * *(b + 103 * OS1_S1 + 26) -
                p_over_q * *(b + 139 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 26) +
                one_over_two_q * *(b + 103 * OS1_S1 + 16);
            *(b + 103 * OS1_S1 + 42) =
                prefactor_z * *(b + 103 * OS1_S1 + 23) -
                p_over_q * *(b + 146 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 23);
            *(b + 103 * OS1_S1 + 43) = prefactor_y * *(b + 103 * OS1_S1 + 25) -
                                       p_over_q * *(b + 145 * OS1_S1 + 25) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 25);
            *(b + 103 * OS1_S1 + 44) =
                prefactor_x * *(b + 103 * OS1_S1 + 29) -
                p_over_q * *(b + 139 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 29) +
                one_over_two_q * *(b + 103 * OS1_S1 + 19);
            *(b + 103 * OS1_S1 + 45) =
                prefactor_x * *(b + 103 * OS1_S1 + 30) -
                p_over_q * *(b + 139 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 30);
            *(b + 103 * OS1_S1 + 46) =
                prefactor_x * *(b + 103 * OS1_S1 + 31) -
                p_over_q * *(b + 139 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 31);
            *(b + 103 * OS1_S1 + 47) =
                prefactor_x * *(b + 103 * OS1_S1 + 32) -
                p_over_q * *(b + 139 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 32);
            *(b + 103 * OS1_S1 + 48) = prefactor_y * *(b + 103 * OS1_S1 + 29) -
                                       p_over_q * *(b + 145 * OS1_S1 + 29) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 29);
            *(b + 103 * OS1_S1 + 49) =
                prefactor_x * *(b + 103 * OS1_S1 + 34) -
                p_over_q * *(b + 139 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 34);
            *(b + 103 * OS1_S1 + 50) =
                prefactor_y * *(b + 103 * OS1_S1 + 30) -
                p_over_q * *(b + 145 * OS1_S1 + 30) +
                one_over_two_q * *(b + 70 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 103 * OS1_S1 + 16);
            *(b + 103 * OS1_S1 + 51) =
                prefactor_z * *(b + 103 * OS1_S1 + 30) -
                p_over_q * *(b + 146 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 30);
            *(b + 103 * OS1_S1 + 52) =
                prefactor_z * *(b + 103 * OS1_S1 + 31) -
                p_over_q * *(b + 146 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 31) +
                one_over_two_q * *(b + 103 * OS1_S1 + 16);
            *(b + 103 * OS1_S1 + 53) =
                prefactor_y * *(b + 103 * OS1_S1 + 33) -
                p_over_q * *(b + 145 * OS1_S1 + 33) +
                one_over_two_q * *(b + 70 * OS1_S1 + 33) +
                one_over_two_q * *(b + 103 * OS1_S1 + 19);
            *(b + 103 * OS1_S1 + 54) = prefactor_y * *(b + 103 * OS1_S1 + 34) -
                                       p_over_q * *(b + 145 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 34);
            *(b + 103 * OS1_S1 + 55) =
                prefactor_z * *(b + 103 * OS1_S1 + 34) -
                p_over_q * *(b + 146 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 103 * OS1_S1 + 19);
            *(b + 104 * OS1_S1 + 35) =
                prefactor_x * *(b + 104 * OS1_S1 + 20) -
                p_over_q * *(b + 140 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 104 * OS1_S1 + 10);
            *(b + 104 * OS1_S1 + 36) = prefactor_y * *(b + 104 * OS1_S1 + 20) -
                                       p_over_q * *(b + 146 * OS1_S1 + 20);
            *(b + 104 * OS1_S1 + 37) =
                prefactor_z * *(b + 104 * OS1_S1 + 20) -
                p_over_q * *(b + 147 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 20);
            *(b + 104 * OS1_S1 + 38) =
                prefactor_y * *(b + 104 * OS1_S1 + 21) -
                p_over_q * *(b + 146 * OS1_S1 + 21) +
                one_over_two_q * *(b + 104 * OS1_S1 + 10);
            *(b + 104 * OS1_S1 + 39) = prefactor_y * *(b + 104 * OS1_S1 + 22) -
                                       p_over_q * *(b + 146 * OS1_S1 + 22);
            *(b + 104 * OS1_S1 + 40) =
                prefactor_z * *(b + 104 * OS1_S1 + 22) -
                p_over_q * *(b + 147 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 22) +
                one_over_two_q * *(b + 104 * OS1_S1 + 10);
            *(b + 104 * OS1_S1 + 41) =
                prefactor_x * *(b + 104 * OS1_S1 + 26) -
                p_over_q * *(b + 140 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 26) +
                one_over_two_q * *(b + 104 * OS1_S1 + 16);
            *(b + 104 * OS1_S1 + 42) =
                prefactor_z * *(b + 104 * OS1_S1 + 23) -
                p_over_q * *(b + 147 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 23);
            *(b + 104 * OS1_S1 + 43) = prefactor_y * *(b + 104 * OS1_S1 + 25) -
                                       p_over_q * *(b + 146 * OS1_S1 + 25);
            *(b + 104 * OS1_S1 + 44) =
                prefactor_x * *(b + 104 * OS1_S1 + 29) -
                p_over_q * *(b + 140 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 29) +
                one_over_two_q * *(b + 104 * OS1_S1 + 19);
            *(b + 104 * OS1_S1 + 45) =
                prefactor_x * *(b + 104 * OS1_S1 + 30) -
                p_over_q * *(b + 140 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 30);
            *(b + 104 * OS1_S1 + 46) =
                prefactor_x * *(b + 104 * OS1_S1 + 31) -
                p_over_q * *(b + 140 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 31);
            *(b + 104 * OS1_S1 + 47) =
                prefactor_x * *(b + 104 * OS1_S1 + 32) -
                p_over_q * *(b + 140 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 32);
            *(b + 104 * OS1_S1 + 48) = prefactor_y * *(b + 104 * OS1_S1 + 29) -
                                       p_over_q * *(b + 146 * OS1_S1 + 29);
            *(b + 104 * OS1_S1 + 49) =
                prefactor_x * *(b + 104 * OS1_S1 + 34) -
                p_over_q * *(b + 140 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 34);
            *(b + 104 * OS1_S1 + 50) =
                prefactor_y * *(b + 104 * OS1_S1 + 30) -
                p_over_q * *(b + 146 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 104 * OS1_S1 + 16);
            *(b + 104 * OS1_S1 + 51) =
                prefactor_z * *(b + 104 * OS1_S1 + 30) -
                p_over_q * *(b + 147 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 30);
            *(b + 104 * OS1_S1 + 52) =
                prefactor_z * *(b + 104 * OS1_S1 + 31) -
                p_over_q * *(b + 147 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 31) +
                one_over_two_q * *(b + 104 * OS1_S1 + 16);
            *(b + 104 * OS1_S1 + 53) =
                prefactor_y * *(b + 104 * OS1_S1 + 33) -
                p_over_q * *(b + 146 * OS1_S1 + 33) +
                one_over_two_q * *(b + 104 * OS1_S1 + 19);
            *(b + 104 * OS1_S1 + 54) = prefactor_y * *(b + 104 * OS1_S1 + 34) -
                                       p_over_q * *(b + 146 * OS1_S1 + 34);
            *(b + 104 * OS1_S1 + 55) =
                prefactor_z * *(b + 104 * OS1_S1 + 34) -
                p_over_q * *(b + 147 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 104 * OS1_S1 + 19);
            *(b + 105 * OS1_S1 + 35) =
                prefactor_x * *(b + 105 * OS1_S1 + 20) -
                p_over_q * *(b + 141 * OS1_S1 + 20) +
                one_over_two_q * *(b + 77 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 105 * OS1_S1 + 10);
            *(b + 105 * OS1_S1 + 36) =
                prefactor_y * *(b + 105 * OS1_S1 + 20) -
                p_over_q * *(b + 148 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 20);
            *(b + 105 * OS1_S1 + 37) = prefactor_z * *(b + 105 * OS1_S1 + 20) -
                                       p_over_q * *(b + 149 * OS1_S1 + 20);
            *(b + 105 * OS1_S1 + 38) =
                prefactor_y * *(b + 105 * OS1_S1 + 21) -
                p_over_q * *(b + 148 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 21) +
                one_over_two_q * *(b + 105 * OS1_S1 + 10);
            *(b + 105 * OS1_S1 + 39) = prefactor_z * *(b + 105 * OS1_S1 + 21) -
                                       p_over_q * *(b + 149 * OS1_S1 + 21);
            *(b + 105 * OS1_S1 + 40) =
                prefactor_z * *(b + 105 * OS1_S1 + 22) -
                p_over_q * *(b + 149 * OS1_S1 + 22) +
                one_over_two_q * *(b + 105 * OS1_S1 + 10);
            *(b + 105 * OS1_S1 + 41) =
                prefactor_x * *(b + 105 * OS1_S1 + 26) -
                p_over_q * *(b + 141 * OS1_S1 + 26) +
                one_over_two_q * *(b + 77 * OS1_S1 + 26) +
                one_over_two_q * *(b + 105 * OS1_S1 + 16);
            *(b + 105 * OS1_S1 + 42) = prefactor_z * *(b + 105 * OS1_S1 + 23) -
                                       p_over_q * *(b + 149 * OS1_S1 + 23);
            *(b + 105 * OS1_S1 + 43) =
                prefactor_y * *(b + 105 * OS1_S1 + 25) -
                p_over_q * *(b + 148 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 25);
            *(b + 105 * OS1_S1 + 44) =
                prefactor_x * *(b + 105 * OS1_S1 + 29) -
                p_over_q * *(b + 141 * OS1_S1 + 29) +
                one_over_two_q * *(b + 77 * OS1_S1 + 29) +
                one_over_two_q * *(b + 105 * OS1_S1 + 19);
            *(b + 105 * OS1_S1 + 45) = prefactor_x * *(b + 105 * OS1_S1 + 30) -
                                       p_over_q * *(b + 141 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 30);
            *(b + 105 * OS1_S1 + 46) = prefactor_z * *(b + 105 * OS1_S1 + 26) -
                                       p_over_q * *(b + 149 * OS1_S1 + 26);
            *(b + 105 * OS1_S1 + 47) = prefactor_x * *(b + 105 * OS1_S1 + 32) -
                                       p_over_q * *(b + 141 * OS1_S1 + 32) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 32);
            *(b + 105 * OS1_S1 + 48) = prefactor_x * *(b + 105 * OS1_S1 + 33) -
                                       p_over_q * *(b + 141 * OS1_S1 + 33) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 33);
            *(b + 105 * OS1_S1 + 49) = prefactor_x * *(b + 105 * OS1_S1 + 34) -
                                       p_over_q * *(b + 141 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 34);
            *(b + 105 * OS1_S1 + 50) =
                prefactor_y * *(b + 105 * OS1_S1 + 30) -
                p_over_q * *(b + 148 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 105 * OS1_S1 + 16);
            *(b + 105 * OS1_S1 + 51) = prefactor_z * *(b + 105 * OS1_S1 + 30) -
                                       p_over_q * *(b + 149 * OS1_S1 + 30);
            *(b + 105 * OS1_S1 + 52) =
                prefactor_z * *(b + 105 * OS1_S1 + 31) -
                p_over_q * *(b + 149 * OS1_S1 + 31) +
                one_over_two_q * *(b + 105 * OS1_S1 + 16);
            *(b + 105 * OS1_S1 + 53) =
                prefactor_y * *(b + 105 * OS1_S1 + 33) -
                p_over_q * *(b + 148 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 33) +
                one_over_two_q * *(b + 105 * OS1_S1 + 19);
            *(b + 105 * OS1_S1 + 54) =
                prefactor_y * *(b + 105 * OS1_S1 + 34) -
                p_over_q * *(b + 148 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 34);
            *(b + 105 * OS1_S1 + 55) =
                prefactor_z * *(b + 105 * OS1_S1 + 34) -
                p_over_q * *(b + 149 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 105 * OS1_S1 + 19);
            *(b + 106 * OS1_S1 + 35) =
                prefactor_x * *(b + 106 * OS1_S1 + 20) -
                p_over_q * *(b + 142 * OS1_S1 + 20) +
                one_over_two_q * *(b + 78 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 106 * OS1_S1 + 10);
            *(b + 106 * OS1_S1 + 36) =
                prefactor_y * *(b + 106 * OS1_S1 + 20) -
                p_over_q * *(b + 149 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 20);
            *(b + 106 * OS1_S1 + 37) = prefactor_z * *(b + 106 * OS1_S1 + 20) -
                                       p_over_q * *(b + 150 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 20);
            *(b + 106 * OS1_S1 + 38) =
                prefactor_y * *(b + 106 * OS1_S1 + 21) -
                p_over_q * *(b + 149 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 21) +
                one_over_two_q * *(b + 106 * OS1_S1 + 10);
            *(b + 106 * OS1_S1 + 39) = prefactor_z * *(b + 106 * OS1_S1 + 21) -
                                       p_over_q * *(b + 150 * OS1_S1 + 21) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 21);
            *(b + 106 * OS1_S1 + 40) =
                prefactor_z * *(b + 106 * OS1_S1 + 22) -
                p_over_q * *(b + 150 * OS1_S1 + 22) +
                one_over_two_q * *(b + 71 * OS1_S1 + 22) +
                one_over_two_q * *(b + 106 * OS1_S1 + 10);
            *(b + 106 * OS1_S1 + 41) =
                prefactor_x * *(b + 106 * OS1_S1 + 26) -
                p_over_q * *(b + 142 * OS1_S1 + 26) +
                one_over_two_q * *(b + 78 * OS1_S1 + 26) +
                one_over_two_q * *(b + 106 * OS1_S1 + 16);
            *(b + 106 * OS1_S1 + 42) = prefactor_z * *(b + 106 * OS1_S1 + 23) -
                                       p_over_q * *(b + 150 * OS1_S1 + 23) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 23);
            *(b + 106 * OS1_S1 + 43) =
                prefactor_y * *(b + 106 * OS1_S1 + 25) -
                p_over_q * *(b + 149 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 25);
            *(b + 106 * OS1_S1 + 44) =
                prefactor_x * *(b + 106 * OS1_S1 + 29) -
                p_over_q * *(b + 142 * OS1_S1 + 29) +
                one_over_two_q * *(b + 78 * OS1_S1 + 29) +
                one_over_two_q * *(b + 106 * OS1_S1 + 19);
            *(b + 106 * OS1_S1 + 45) = prefactor_x * *(b + 106 * OS1_S1 + 30) -
                                       p_over_q * *(b + 142 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 30);
            *(b + 106 * OS1_S1 + 46) = prefactor_z * *(b + 106 * OS1_S1 + 26) -
                                       p_over_q * *(b + 150 * OS1_S1 + 26) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 26);
            *(b + 106 * OS1_S1 + 47) = prefactor_x * *(b + 106 * OS1_S1 + 32) -
                                       p_over_q * *(b + 142 * OS1_S1 + 32) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 32);
            *(b + 106 * OS1_S1 + 48) = prefactor_x * *(b + 106 * OS1_S1 + 33) -
                                       p_over_q * *(b + 142 * OS1_S1 + 33) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 33);
            *(b + 106 * OS1_S1 + 49) = prefactor_x * *(b + 106 * OS1_S1 + 34) -
                                       p_over_q * *(b + 142 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 34);
            *(b + 106 * OS1_S1 + 50) =
                prefactor_y * *(b + 106 * OS1_S1 + 30) -
                p_over_q * *(b + 149 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 106 * OS1_S1 + 16);
            *(b + 106 * OS1_S1 + 51) = prefactor_z * *(b + 106 * OS1_S1 + 30) -
                                       p_over_q * *(b + 150 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 30);
            *(b + 106 * OS1_S1 + 52) =
                prefactor_z * *(b + 106 * OS1_S1 + 31) -
                p_over_q * *(b + 150 * OS1_S1 + 31) +
                one_over_two_q * *(b + 71 * OS1_S1 + 31) +
                one_over_two_q * *(b + 106 * OS1_S1 + 16);
            *(b + 106 * OS1_S1 + 53) =
                prefactor_y * *(b + 106 * OS1_S1 + 33) -
                p_over_q * *(b + 149 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 33) +
                one_over_two_q * *(b + 106 * OS1_S1 + 19);
            *(b + 106 * OS1_S1 + 54) =
                prefactor_y * *(b + 106 * OS1_S1 + 34) -
                p_over_q * *(b + 149 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 34);
            *(b + 106 * OS1_S1 + 55) =
                prefactor_z * *(b + 106 * OS1_S1 + 34) -
                p_over_q * *(b + 150 * OS1_S1 + 34) +
                one_over_two_q * *(b + 71 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 106 * OS1_S1 + 19);
            *(b + 107 * OS1_S1 + 35) =
                prefactor_x * *(b + 107 * OS1_S1 + 20) -
                p_over_q * *(b + 143 * OS1_S1 + 20) +
                one_over_two_q * *(b + 79 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 107 * OS1_S1 + 10);
            *(b + 107 * OS1_S1 + 36) =
                prefactor_y * *(b + 107 * OS1_S1 + 20) -
                p_over_q * *(b + 150 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 20);
            *(b + 107 * OS1_S1 + 37) =
                prefactor_z * *(b + 107 * OS1_S1 + 20) -
                p_over_q * *(b + 151 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 20);
            *(b + 107 * OS1_S1 + 38) =
                prefactor_y * *(b + 107 * OS1_S1 + 21) -
                p_over_q * *(b + 150 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 21) +
                one_over_two_q * *(b + 107 * OS1_S1 + 10);
            *(b + 107 * OS1_S1 + 39) =
                prefactor_z * *(b + 107 * OS1_S1 + 21) -
                p_over_q * *(b + 151 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 21);
            *(b + 107 * OS1_S1 + 40) =
                prefactor_z * *(b + 107 * OS1_S1 + 22) -
                p_over_q * *(b + 151 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 22) +
                one_over_two_q * *(b + 107 * OS1_S1 + 10);
            *(b + 107 * OS1_S1 + 41) =
                prefactor_x * *(b + 107 * OS1_S1 + 26) -
                p_over_q * *(b + 143 * OS1_S1 + 26) +
                one_over_two_q * *(b + 79 * OS1_S1 + 26) +
                one_over_two_q * *(b + 107 * OS1_S1 + 16);
            *(b + 107 * OS1_S1 + 42) =
                prefactor_z * *(b + 107 * OS1_S1 + 23) -
                p_over_q * *(b + 151 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 23);
            *(b + 107 * OS1_S1 + 43) =
                prefactor_y * *(b + 107 * OS1_S1 + 25) -
                p_over_q * *(b + 150 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 25);
            *(b + 107 * OS1_S1 + 44) =
                prefactor_x * *(b + 107 * OS1_S1 + 29) -
                p_over_q * *(b + 143 * OS1_S1 + 29) +
                one_over_two_q * *(b + 79 * OS1_S1 + 29) +
                one_over_two_q * *(b + 107 * OS1_S1 + 19);
            *(b + 107 * OS1_S1 + 45) = prefactor_x * *(b + 107 * OS1_S1 + 30) -
                                       p_over_q * *(b + 143 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 30);
            *(b + 107 * OS1_S1 + 46) = prefactor_x * *(b + 107 * OS1_S1 + 31) -
                                       p_over_q * *(b + 143 * OS1_S1 + 31) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 31);
            *(b + 107 * OS1_S1 + 47) = prefactor_x * *(b + 107 * OS1_S1 + 32) -
                                       p_over_q * *(b + 143 * OS1_S1 + 32) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 32);
            *(b + 107 * OS1_S1 + 48) = prefactor_x * *(b + 107 * OS1_S1 + 33) -
                                       p_over_q * *(b + 143 * OS1_S1 + 33) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 33);
            *(b + 107 * OS1_S1 + 49) = prefactor_x * *(b + 107 * OS1_S1 + 34) -
                                       p_over_q * *(b + 143 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 34);
            *(b + 107 * OS1_S1 + 50) =
                prefactor_y * *(b + 107 * OS1_S1 + 30) -
                p_over_q * *(b + 150 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 107 * OS1_S1 + 16);
            *(b + 107 * OS1_S1 + 51) =
                prefactor_z * *(b + 107 * OS1_S1 + 30) -
                p_over_q * *(b + 151 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 30);
            *(b + 107 * OS1_S1 + 52) =
                prefactor_z * *(b + 107 * OS1_S1 + 31) -
                p_over_q * *(b + 151 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 31) +
                one_over_two_q * *(b + 107 * OS1_S1 + 16);
            *(b + 107 * OS1_S1 + 53) =
                prefactor_y * *(b + 107 * OS1_S1 + 33) -
                p_over_q * *(b + 150 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 33) +
                one_over_two_q * *(b + 107 * OS1_S1 + 19);
            *(b + 107 * OS1_S1 + 54) =
                prefactor_y * *(b + 107 * OS1_S1 + 34) -
                p_over_q * *(b + 150 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 34);
            *(b + 107 * OS1_S1 + 55) =
                prefactor_z * *(b + 107 * OS1_S1 + 34) -
                p_over_q * *(b + 151 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 107 * OS1_S1 + 19);
            *(b + 108 * OS1_S1 + 35) =
                prefactor_x * *(b + 108 * OS1_S1 + 20) -
                p_over_q * *(b + 144 * OS1_S1 + 20) +
                one_over_two_q * *(b + 80 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 10);
            *(b + 108 * OS1_S1 + 36) =
                prefactor_y * *(b + 108 * OS1_S1 + 20) -
                p_over_q * *(b + 151 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 20);
            *(b + 108 * OS1_S1 + 37) =
                prefactor_z * *(b + 108 * OS1_S1 + 20) -
                p_over_q * *(b + 152 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 20);
            *(b + 108 * OS1_S1 + 38) =
                prefactor_y * *(b + 108 * OS1_S1 + 21) -
                p_over_q * *(b + 151 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 21) +
                one_over_two_q * *(b + 108 * OS1_S1 + 10);
            *(b + 108 * OS1_S1 + 39) =
                prefactor_z * *(b + 108 * OS1_S1 + 21) -
                p_over_q * *(b + 152 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 21);
            *(b + 108 * OS1_S1 + 40) =
                prefactor_z * *(b + 108 * OS1_S1 + 22) -
                p_over_q * *(b + 152 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 22) +
                one_over_two_q * *(b + 108 * OS1_S1 + 10);
            *(b + 108 * OS1_S1 + 41) =
                prefactor_x * *(b + 108 * OS1_S1 + 26) -
                p_over_q * *(b + 144 * OS1_S1 + 26) +
                one_over_two_q * *(b + 80 * OS1_S1 + 26) +
                one_over_two_q * *(b + 108 * OS1_S1 + 16);
            *(b + 108 * OS1_S1 + 42) =
                prefactor_z * *(b + 108 * OS1_S1 + 23) -
                p_over_q * *(b + 152 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 23);
            *(b + 108 * OS1_S1 + 43) =
                prefactor_y * *(b + 108 * OS1_S1 + 25) -
                p_over_q * *(b + 151 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 25);
            *(b + 108 * OS1_S1 + 44) =
                prefactor_x * *(b + 108 * OS1_S1 + 29) -
                p_over_q * *(b + 144 * OS1_S1 + 29) +
                one_over_two_q * *(b + 80 * OS1_S1 + 29) +
                one_over_two_q * *(b + 108 * OS1_S1 + 19);
            *(b + 108 * OS1_S1 + 45) = prefactor_x * *(b + 108 * OS1_S1 + 30) -
                                       p_over_q * *(b + 144 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 30);
            *(b + 108 * OS1_S1 + 46) = prefactor_x * *(b + 108 * OS1_S1 + 31) -
                                       p_over_q * *(b + 144 * OS1_S1 + 31) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 31);
            *(b + 108 * OS1_S1 + 47) = prefactor_x * *(b + 108 * OS1_S1 + 32) -
                                       p_over_q * *(b + 144 * OS1_S1 + 32) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 32);
            *(b + 108 * OS1_S1 + 48) = prefactor_x * *(b + 108 * OS1_S1 + 33) -
                                       p_over_q * *(b + 144 * OS1_S1 + 33) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 33);
            *(b + 108 * OS1_S1 + 49) = prefactor_x * *(b + 108 * OS1_S1 + 34) -
                                       p_over_q * *(b + 144 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 34);
            *(b + 108 * OS1_S1 + 50) =
                prefactor_y * *(b + 108 * OS1_S1 + 30) -
                p_over_q * *(b + 151 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 16);
            *(b + 108 * OS1_S1 + 51) =
                prefactor_z * *(b + 108 * OS1_S1 + 30) -
                p_over_q * *(b + 152 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 30);
            *(b + 108 * OS1_S1 + 52) =
                prefactor_z * *(b + 108 * OS1_S1 + 31) -
                p_over_q * *(b + 152 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 31) +
                one_over_two_q * *(b + 108 * OS1_S1 + 16);
            *(b + 108 * OS1_S1 + 53) =
                prefactor_y * *(b + 108 * OS1_S1 + 33) -
                p_over_q * *(b + 151 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 33) +
                one_over_two_q * *(b + 108 * OS1_S1 + 19);
            *(b + 108 * OS1_S1 + 54) =
                prefactor_y * *(b + 108 * OS1_S1 + 34) -
                p_over_q * *(b + 151 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 34);
            *(b + 108 * OS1_S1 + 55) =
                prefactor_z * *(b + 108 * OS1_S1 + 34) -
                p_over_q * *(b + 152 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 19);
            *(b + 109 * OS1_S1 + 35) =
                prefactor_x * *(b + 109 * OS1_S1 + 20) -
                p_over_q * *(b + 145 * OS1_S1 + 20) +
                one_over_two_q * *(b + 81 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 109 * OS1_S1 + 10);
            *(b + 109 * OS1_S1 + 36) =
                prefactor_y * *(b + 109 * OS1_S1 + 20) -
                p_over_q * *(b + 152 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 20);
            *(b + 109 * OS1_S1 + 37) =
                prefactor_z * *(b + 109 * OS1_S1 + 20) -
                p_over_q * *(b + 153 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 20);
            *(b + 109 * OS1_S1 + 38) =
                prefactor_y * *(b + 109 * OS1_S1 + 21) -
                p_over_q * *(b + 152 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 21) +
                one_over_two_q * *(b + 109 * OS1_S1 + 10);
            *(b + 109 * OS1_S1 + 39) =
                prefactor_y * *(b + 109 * OS1_S1 + 22) -
                p_over_q * *(b + 152 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 22);
            *(b + 109 * OS1_S1 + 40) =
                prefactor_z * *(b + 109 * OS1_S1 + 22) -
                p_over_q * *(b + 153 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 22) +
                one_over_two_q * *(b + 109 * OS1_S1 + 10);
            *(b + 109 * OS1_S1 + 41) =
                prefactor_x * *(b + 109 * OS1_S1 + 26) -
                p_over_q * *(b + 145 * OS1_S1 + 26) +
                one_over_two_q * *(b + 81 * OS1_S1 + 26) +
                one_over_two_q * *(b + 109 * OS1_S1 + 16);
            *(b + 109 * OS1_S1 + 42) =
                prefactor_z * *(b + 109 * OS1_S1 + 23) -
                p_over_q * *(b + 153 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 23);
            *(b + 109 * OS1_S1 + 43) =
                prefactor_y * *(b + 109 * OS1_S1 + 25) -
                p_over_q * *(b + 152 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 25);
            *(b + 109 * OS1_S1 + 44) =
                prefactor_x * *(b + 109 * OS1_S1 + 29) -
                p_over_q * *(b + 145 * OS1_S1 + 29) +
                one_over_two_q * *(b + 81 * OS1_S1 + 29) +
                one_over_two_q * *(b + 109 * OS1_S1 + 19);
            *(b + 109 * OS1_S1 + 45) = prefactor_x * *(b + 109 * OS1_S1 + 30) -
                                       p_over_q * *(b + 145 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 30);
            *(b + 109 * OS1_S1 + 46) = prefactor_x * *(b + 109 * OS1_S1 + 31) -
                                       p_over_q * *(b + 145 * OS1_S1 + 31) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 31);
            *(b + 109 * OS1_S1 + 47) = prefactor_x * *(b + 109 * OS1_S1 + 32) -
                                       p_over_q * *(b + 145 * OS1_S1 + 32) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 32);
            *(b + 109 * OS1_S1 + 48) = prefactor_x * *(b + 109 * OS1_S1 + 33) -
                                       p_over_q * *(b + 145 * OS1_S1 + 33) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 33);
            *(b + 109 * OS1_S1 + 49) = prefactor_x * *(b + 109 * OS1_S1 + 34) -
                                       p_over_q * *(b + 145 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 34);
            *(b + 109 * OS1_S1 + 50) =
                prefactor_y * *(b + 109 * OS1_S1 + 30) -
                p_over_q * *(b + 152 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 109 * OS1_S1 + 16);
            *(b + 109 * OS1_S1 + 51) =
                prefactor_z * *(b + 109 * OS1_S1 + 30) -
                p_over_q * *(b + 153 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 30);
            *(b + 109 * OS1_S1 + 52) =
                prefactor_z * *(b + 109 * OS1_S1 + 31) -
                p_over_q * *(b + 153 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 31) +
                one_over_two_q * *(b + 109 * OS1_S1 + 16);
            *(b + 109 * OS1_S1 + 53) =
                prefactor_y * *(b + 109 * OS1_S1 + 33) -
                p_over_q * *(b + 152 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 33) +
                one_over_two_q * *(b + 109 * OS1_S1 + 19);
            *(b + 109 * OS1_S1 + 54) =
                prefactor_y * *(b + 109 * OS1_S1 + 34) -
                p_over_q * *(b + 152 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 34);
            *(b + 109 * OS1_S1 + 55) =
                prefactor_z * *(b + 109 * OS1_S1 + 34) -
                p_over_q * *(b + 153 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 109 * OS1_S1 + 19);
            *(b + 110 * OS1_S1 + 35) =
                prefactor_x * *(b + 110 * OS1_S1 + 20) -
                p_over_q * *(b + 146 * OS1_S1 + 20) +
                one_over_two_q * *(b + 82 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 110 * OS1_S1 + 10);
            *(b + 110 * OS1_S1 + 36) = prefactor_y * *(b + 110 * OS1_S1 + 20) -
                                       p_over_q * *(b + 153 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 20);
            *(b + 110 * OS1_S1 + 37) =
                prefactor_z * *(b + 110 * OS1_S1 + 20) -
                p_over_q * *(b + 154 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 20);
            *(b + 110 * OS1_S1 + 38) =
                prefactor_y * *(b + 110 * OS1_S1 + 21) -
                p_over_q * *(b + 153 * OS1_S1 + 21) +
                one_over_two_q * *(b + 76 * OS1_S1 + 21) +
                one_over_two_q * *(b + 110 * OS1_S1 + 10);
            *(b + 110 * OS1_S1 + 39) = prefactor_y * *(b + 110 * OS1_S1 + 22) -
                                       p_over_q * *(b + 153 * OS1_S1 + 22) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 22);
            *(b + 110 * OS1_S1 + 40) =
                prefactor_z * *(b + 110 * OS1_S1 + 22) -
                p_over_q * *(b + 154 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 22) +
                one_over_two_q * *(b + 110 * OS1_S1 + 10);
            *(b + 110 * OS1_S1 + 41) =
                prefactor_x * *(b + 110 * OS1_S1 + 26) -
                p_over_q * *(b + 146 * OS1_S1 + 26) +
                one_over_two_q * *(b + 82 * OS1_S1 + 26) +
                one_over_two_q * *(b + 110 * OS1_S1 + 16);
            *(b + 110 * OS1_S1 + 42) =
                prefactor_z * *(b + 110 * OS1_S1 + 23) -
                p_over_q * *(b + 154 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 23);
            *(b + 110 * OS1_S1 + 43) = prefactor_y * *(b + 110 * OS1_S1 + 25) -
                                       p_over_q * *(b + 153 * OS1_S1 + 25) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 25);
            *(b + 110 * OS1_S1 + 44) =
                prefactor_x * *(b + 110 * OS1_S1 + 29) -
                p_over_q * *(b + 146 * OS1_S1 + 29) +
                one_over_two_q * *(b + 82 * OS1_S1 + 29) +
                one_over_two_q * *(b + 110 * OS1_S1 + 19);
            *(b + 110 * OS1_S1 + 45) = prefactor_x * *(b + 110 * OS1_S1 + 30) -
                                       p_over_q * *(b + 146 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 30);
            *(b + 110 * OS1_S1 + 46) = prefactor_x * *(b + 110 * OS1_S1 + 31) -
                                       p_over_q * *(b + 146 * OS1_S1 + 31) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 31);
            *(b + 110 * OS1_S1 + 47) = prefactor_x * *(b + 110 * OS1_S1 + 32) -
                                       p_over_q * *(b + 146 * OS1_S1 + 32) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 32);
            *(b + 110 * OS1_S1 + 48) = prefactor_y * *(b + 110 * OS1_S1 + 29) -
                                       p_over_q * *(b + 153 * OS1_S1 + 29) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 29);
            *(b + 110 * OS1_S1 + 49) = prefactor_x * *(b + 110 * OS1_S1 + 34) -
                                       p_over_q * *(b + 146 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 34);
            *(b + 110 * OS1_S1 + 50) =
                prefactor_y * *(b + 110 * OS1_S1 + 30) -
                p_over_q * *(b + 153 * OS1_S1 + 30) +
                one_over_two_q * *(b + 76 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 110 * OS1_S1 + 16);
            *(b + 110 * OS1_S1 + 51) =
                prefactor_z * *(b + 110 * OS1_S1 + 30) -
                p_over_q * *(b + 154 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 30);
            *(b + 110 * OS1_S1 + 52) =
                prefactor_z * *(b + 110 * OS1_S1 + 31) -
                p_over_q * *(b + 154 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 31) +
                one_over_two_q * *(b + 110 * OS1_S1 + 16);
            *(b + 110 * OS1_S1 + 53) =
                prefactor_y * *(b + 110 * OS1_S1 + 33) -
                p_over_q * *(b + 153 * OS1_S1 + 33) +
                one_over_two_q * *(b + 76 * OS1_S1 + 33) +
                one_over_two_q * *(b + 110 * OS1_S1 + 19);
            *(b + 110 * OS1_S1 + 54) = prefactor_y * *(b + 110 * OS1_S1 + 34) -
                                       p_over_q * *(b + 153 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 34);
            *(b + 110 * OS1_S1 + 55) =
                prefactor_z * *(b + 110 * OS1_S1 + 34) -
                p_over_q * *(b + 154 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 110 * OS1_S1 + 19);
            *(b + 111 * OS1_S1 + 35) =
                prefactor_x * *(b + 111 * OS1_S1 + 20) -
                p_over_q * *(b + 147 * OS1_S1 + 20) +
                one_over_two_q * *(b + 83 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 111 * OS1_S1 + 10);
            *(b + 111 * OS1_S1 + 36) = prefactor_y * *(b + 111 * OS1_S1 + 20) -
                                       p_over_q * *(b + 154 * OS1_S1 + 20);
            *(b + 111 * OS1_S1 + 37) =
                prefactor_z * *(b + 111 * OS1_S1 + 20) -
                p_over_q * *(b + 155 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 20);
            *(b + 111 * OS1_S1 + 38) =
                prefactor_y * *(b + 111 * OS1_S1 + 21) -
                p_over_q * *(b + 154 * OS1_S1 + 21) +
                one_over_two_q * *(b + 111 * OS1_S1 + 10);
            *(b + 111 * OS1_S1 + 39) = prefactor_y * *(b + 111 * OS1_S1 + 22) -
                                       p_over_q * *(b + 154 * OS1_S1 + 22);
            *(b + 111 * OS1_S1 + 40) =
                prefactor_z * *(b + 111 * OS1_S1 + 22) -
                p_over_q * *(b + 155 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 22) +
                one_over_two_q * *(b + 111 * OS1_S1 + 10);
            *(b + 111 * OS1_S1 + 41) =
                prefactor_x * *(b + 111 * OS1_S1 + 26) -
                p_over_q * *(b + 147 * OS1_S1 + 26) +
                one_over_two_q * *(b + 83 * OS1_S1 + 26) +
                one_over_two_q * *(b + 111 * OS1_S1 + 16);
            *(b + 111 * OS1_S1 + 42) =
                prefactor_z * *(b + 111 * OS1_S1 + 23) -
                p_over_q * *(b + 155 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 23);
            *(b + 111 * OS1_S1 + 43) = prefactor_y * *(b + 111 * OS1_S1 + 25) -
                                       p_over_q * *(b + 154 * OS1_S1 + 25);
            *(b + 111 * OS1_S1 + 44) =
                prefactor_x * *(b + 111 * OS1_S1 + 29) -
                p_over_q * *(b + 147 * OS1_S1 + 29) +
                one_over_two_q * *(b + 83 * OS1_S1 + 29) +
                one_over_two_q * *(b + 111 * OS1_S1 + 19);
            *(b + 111 * OS1_S1 + 45) = prefactor_x * *(b + 111 * OS1_S1 + 30) -
                                       p_over_q * *(b + 147 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 30);
            *(b + 111 * OS1_S1 + 46) = prefactor_x * *(b + 111 * OS1_S1 + 31) -
                                       p_over_q * *(b + 147 * OS1_S1 + 31) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 31);
            *(b + 111 * OS1_S1 + 47) = prefactor_x * *(b + 111 * OS1_S1 + 32) -
                                       p_over_q * *(b + 147 * OS1_S1 + 32) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 32);
            *(b + 111 * OS1_S1 + 48) = prefactor_y * *(b + 111 * OS1_S1 + 29) -
                                       p_over_q * *(b + 154 * OS1_S1 + 29);
            *(b + 111 * OS1_S1 + 49) = prefactor_x * *(b + 111 * OS1_S1 + 34) -
                                       p_over_q * *(b + 147 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 34);
            *(b + 111 * OS1_S1 + 50) =
                prefactor_y * *(b + 111 * OS1_S1 + 30) -
                p_over_q * *(b + 154 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 111 * OS1_S1 + 16);
            *(b + 111 * OS1_S1 + 51) =
                prefactor_z * *(b + 111 * OS1_S1 + 30) -
                p_over_q * *(b + 155 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 30);
            *(b + 111 * OS1_S1 + 52) =
                prefactor_z * *(b + 111 * OS1_S1 + 31) -
                p_over_q * *(b + 155 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 31) +
                one_over_two_q * *(b + 111 * OS1_S1 + 16);
            *(b + 111 * OS1_S1 + 53) =
                prefactor_y * *(b + 111 * OS1_S1 + 33) -
                p_over_q * *(b + 154 * OS1_S1 + 33) +
                one_over_two_q * *(b + 111 * OS1_S1 + 19);
            *(b + 111 * OS1_S1 + 54) = prefactor_y * *(b + 111 * OS1_S1 + 34) -
                                       p_over_q * *(b + 154 * OS1_S1 + 34);
            *(b + 111 * OS1_S1 + 55) =
                prefactor_z * *(b + 111 * OS1_S1 + 34) -
                p_over_q * *(b + 155 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 111 * OS1_S1 + 19);
            *(b + 112 * OS1_S1 + 35) =
                prefactor_x * *(b + 112 * OS1_S1 + 20) -
                p_over_q * *(b + 148 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 112 * OS1_S1 + 10);
            *(b + 112 * OS1_S1 + 36) =
                prefactor_y * *(b + 112 * OS1_S1 + 20) -
                p_over_q * *(b + 156 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 20);
            *(b + 112 * OS1_S1 + 37) = prefactor_z * *(b + 112 * OS1_S1 + 20) -
                                       p_over_q * *(b + 157 * OS1_S1 + 20);
            *(b + 112 * OS1_S1 + 38) =
                prefactor_y * *(b + 112 * OS1_S1 + 21) -
                p_over_q * *(b + 156 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 21) +
                one_over_two_q * *(b + 112 * OS1_S1 + 10);
            *(b + 112 * OS1_S1 + 39) = prefactor_z * *(b + 112 * OS1_S1 + 21) -
                                       p_over_q * *(b + 157 * OS1_S1 + 21);
            *(b + 112 * OS1_S1 + 40) =
                prefactor_z * *(b + 112 * OS1_S1 + 22) -
                p_over_q * *(b + 157 * OS1_S1 + 22) +
                one_over_two_q * *(b + 112 * OS1_S1 + 10);
            *(b + 112 * OS1_S1 + 41) =
                prefactor_x * *(b + 112 * OS1_S1 + 26) -
                p_over_q * *(b + 148 * OS1_S1 + 26) +
                one_over_two_q * *(b + 112 * OS1_S1 + 16);
            *(b + 112 * OS1_S1 + 42) = prefactor_z * *(b + 112 * OS1_S1 + 23) -
                                       p_over_q * *(b + 157 * OS1_S1 + 23);
            *(b + 112 * OS1_S1 + 43) =
                prefactor_y * *(b + 112 * OS1_S1 + 25) -
                p_over_q * *(b + 156 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 25);
            *(b + 112 * OS1_S1 + 44) =
                prefactor_x * *(b + 112 * OS1_S1 + 29) -
                p_over_q * *(b + 148 * OS1_S1 + 29) +
                one_over_two_q * *(b + 112 * OS1_S1 + 19);
            *(b + 112 * OS1_S1 + 45) = prefactor_x * *(b + 112 * OS1_S1 + 30) -
                                       p_over_q * *(b + 148 * OS1_S1 + 30);
            *(b + 112 * OS1_S1 + 46) = prefactor_z * *(b + 112 * OS1_S1 + 26) -
                                       p_over_q * *(b + 157 * OS1_S1 + 26);
            *(b + 112 * OS1_S1 + 47) = prefactor_x * *(b + 112 * OS1_S1 + 32) -
                                       p_over_q * *(b + 148 * OS1_S1 + 32);
            *(b + 112 * OS1_S1 + 48) = prefactor_x * *(b + 112 * OS1_S1 + 33) -
                                       p_over_q * *(b + 148 * OS1_S1 + 33);
            *(b + 112 * OS1_S1 + 49) = prefactor_x * *(b + 112 * OS1_S1 + 34) -
                                       p_over_q * *(b + 148 * OS1_S1 + 34);
            *(b + 112 * OS1_S1 + 50) =
                prefactor_y * *(b + 112 * OS1_S1 + 30) -
                p_over_q * *(b + 156 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 112 * OS1_S1 + 16);
            *(b + 112 * OS1_S1 + 51) = prefactor_z * *(b + 112 * OS1_S1 + 30) -
                                       p_over_q * *(b + 157 * OS1_S1 + 30);
            *(b + 112 * OS1_S1 + 52) =
                prefactor_z * *(b + 112 * OS1_S1 + 31) -
                p_over_q * *(b + 157 * OS1_S1 + 31) +
                one_over_two_q * *(b + 112 * OS1_S1 + 16);
            *(b + 112 * OS1_S1 + 53) =
                prefactor_y * *(b + 112 * OS1_S1 + 33) -
                p_over_q * *(b + 156 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 33) +
                one_over_two_q * *(b + 112 * OS1_S1 + 19);
            *(b + 112 * OS1_S1 + 54) =
                prefactor_y * *(b + 112 * OS1_S1 + 34) -
                p_over_q * *(b + 156 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 34);
            *(b + 112 * OS1_S1 + 55) =
                prefactor_z * *(b + 112 * OS1_S1 + 34) -
                p_over_q * *(b + 157 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 112 * OS1_S1 + 19);
            *(b + 113 * OS1_S1 + 35) =
                prefactor_x * *(b + 113 * OS1_S1 + 20) -
                p_over_q * *(b + 149 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 113 * OS1_S1 + 10);
            *(b + 113 * OS1_S1 + 36) =
                prefactor_y * *(b + 113 * OS1_S1 + 20) -
                p_over_q * *(b + 157 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 20);
            *(b + 113 * OS1_S1 + 37) = prefactor_z * *(b + 113 * OS1_S1 + 20) -
                                       p_over_q * *(b + 158 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 20);
            *(b + 113 * OS1_S1 + 38) =
                prefactor_y * *(b + 113 * OS1_S1 + 21) -
                p_over_q * *(b + 157 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 21) +
                one_over_two_q * *(b + 113 * OS1_S1 + 10);
            *(b + 113 * OS1_S1 + 39) = prefactor_z * *(b + 113 * OS1_S1 + 21) -
                                       p_over_q * *(b + 158 * OS1_S1 + 21) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 21);
            *(b + 113 * OS1_S1 + 40) =
                prefactor_z * *(b + 113 * OS1_S1 + 22) -
                p_over_q * *(b + 158 * OS1_S1 + 22) +
                one_over_two_q * *(b + 77 * OS1_S1 + 22) +
                one_over_two_q * *(b + 113 * OS1_S1 + 10);
            *(b + 113 * OS1_S1 + 41) =
                prefactor_x * *(b + 113 * OS1_S1 + 26) -
                p_over_q * *(b + 149 * OS1_S1 + 26) +
                one_over_two_q * *(b + 113 * OS1_S1 + 16);
            *(b + 113 * OS1_S1 + 42) = prefactor_z * *(b + 113 * OS1_S1 + 23) -
                                       p_over_q * *(b + 158 * OS1_S1 + 23) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 23);
            *(b + 113 * OS1_S1 + 43) =
                prefactor_y * *(b + 113 * OS1_S1 + 25) -
                p_over_q * *(b + 157 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 25);
            *(b + 113 * OS1_S1 + 44) =
                prefactor_x * *(b + 113 * OS1_S1 + 29) -
                p_over_q * *(b + 149 * OS1_S1 + 29) +
                one_over_two_q * *(b + 113 * OS1_S1 + 19);
            *(b + 113 * OS1_S1 + 45) = prefactor_x * *(b + 113 * OS1_S1 + 30) -
                                       p_over_q * *(b + 149 * OS1_S1 + 30);
            *(b + 113 * OS1_S1 + 46) = prefactor_x * *(b + 113 * OS1_S1 + 31) -
                                       p_over_q * *(b + 149 * OS1_S1 + 31);
            *(b + 113 * OS1_S1 + 47) = prefactor_x * *(b + 113 * OS1_S1 + 32) -
                                       p_over_q * *(b + 149 * OS1_S1 + 32);
            *(b + 113 * OS1_S1 + 48) = prefactor_x * *(b + 113 * OS1_S1 + 33) -
                                       p_over_q * *(b + 149 * OS1_S1 + 33);
            *(b + 113 * OS1_S1 + 49) = prefactor_x * *(b + 113 * OS1_S1 + 34) -
                                       p_over_q * *(b + 149 * OS1_S1 + 34);
            *(b + 113 * OS1_S1 + 50) =
                prefactor_y * *(b + 113 * OS1_S1 + 30) -
                p_over_q * *(b + 157 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 113 * OS1_S1 + 16);
            *(b + 113 * OS1_S1 + 51) = prefactor_z * *(b + 113 * OS1_S1 + 30) -
                                       p_over_q * *(b + 158 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 30);
            *(b + 113 * OS1_S1 + 52) =
                prefactor_z * *(b + 113 * OS1_S1 + 31) -
                p_over_q * *(b + 158 * OS1_S1 + 31) +
                one_over_two_q * *(b + 77 * OS1_S1 + 31) +
                one_over_two_q * *(b + 113 * OS1_S1 + 16);
            *(b + 113 * OS1_S1 + 53) =
                prefactor_y * *(b + 113 * OS1_S1 + 33) -
                p_over_q * *(b + 157 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 33) +
                one_over_two_q * *(b + 113 * OS1_S1 + 19);
            *(b + 113 * OS1_S1 + 54) =
                prefactor_y * *(b + 113 * OS1_S1 + 34) -
                p_over_q * *(b + 157 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 34);
            *(b + 113 * OS1_S1 + 55) =
                prefactor_z * *(b + 113 * OS1_S1 + 34) -
                p_over_q * *(b + 158 * OS1_S1 + 34) +
                one_over_two_q * *(b + 77 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 113 * OS1_S1 + 19);
            *(b + 114 * OS1_S1 + 35) =
                prefactor_x * *(b + 114 * OS1_S1 + 20) -
                p_over_q * *(b + 150 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 114 * OS1_S1 + 10);
            *(b + 114 * OS1_S1 + 36) =
                prefactor_y * *(b + 114 * OS1_S1 + 20) -
                p_over_q * *(b + 158 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 20);
            *(b + 114 * OS1_S1 + 37) =
                prefactor_z * *(b + 114 * OS1_S1 + 20) -
                p_over_q * *(b + 159 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 20);
            *(b + 114 * OS1_S1 + 38) =
                prefactor_y * *(b + 114 * OS1_S1 + 21) -
                p_over_q * *(b + 158 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 21) +
                one_over_two_q * *(b + 114 * OS1_S1 + 10);
            *(b + 114 * OS1_S1 + 39) =
                prefactor_z * *(b + 114 * OS1_S1 + 21) -
                p_over_q * *(b + 159 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 21);
            *(b + 114 * OS1_S1 + 40) =
                prefactor_z * *(b + 114 * OS1_S1 + 22) -
                p_over_q * *(b + 159 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 22) +
                one_over_two_q * *(b + 114 * OS1_S1 + 10);
            *(b + 114 * OS1_S1 + 41) =
                prefactor_x * *(b + 114 * OS1_S1 + 26) -
                p_over_q * *(b + 150 * OS1_S1 + 26) +
                one_over_two_q * *(b + 114 * OS1_S1 + 16);
            *(b + 114 * OS1_S1 + 42) =
                prefactor_z * *(b + 114 * OS1_S1 + 23) -
                p_over_q * *(b + 159 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 23);
            *(b + 114 * OS1_S1 + 43) =
                prefactor_y * *(b + 114 * OS1_S1 + 25) -
                p_over_q * *(b + 158 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 25);
            *(b + 114 * OS1_S1 + 44) =
                prefactor_x * *(b + 114 * OS1_S1 + 29) -
                p_over_q * *(b + 150 * OS1_S1 + 29) +
                one_over_two_q * *(b + 114 * OS1_S1 + 19);
            *(b + 114 * OS1_S1 + 45) = prefactor_x * *(b + 114 * OS1_S1 + 30) -
                                       p_over_q * *(b + 150 * OS1_S1 + 30);
            *(b + 114 * OS1_S1 + 46) = prefactor_x * *(b + 114 * OS1_S1 + 31) -
                                       p_over_q * *(b + 150 * OS1_S1 + 31);
            *(b + 114 * OS1_S1 + 47) = prefactor_x * *(b + 114 * OS1_S1 + 32) -
                                       p_over_q * *(b + 150 * OS1_S1 + 32);
            *(b + 114 * OS1_S1 + 48) = prefactor_x * *(b + 114 * OS1_S1 + 33) -
                                       p_over_q * *(b + 150 * OS1_S1 + 33);
            *(b + 114 * OS1_S1 + 49) = prefactor_x * *(b + 114 * OS1_S1 + 34) -
                                       p_over_q * *(b + 150 * OS1_S1 + 34);
            *(b + 114 * OS1_S1 + 50) =
                prefactor_y * *(b + 114 * OS1_S1 + 30) -
                p_over_q * *(b + 158 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 114 * OS1_S1 + 16);
            *(b + 114 * OS1_S1 + 51) =
                prefactor_z * *(b + 114 * OS1_S1 + 30) -
                p_over_q * *(b + 159 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 30);
            *(b + 114 * OS1_S1 + 52) =
                prefactor_z * *(b + 114 * OS1_S1 + 31) -
                p_over_q * *(b + 159 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 31) +
                one_over_two_q * *(b + 114 * OS1_S1 + 16);
            *(b + 114 * OS1_S1 + 53) =
                prefactor_y * *(b + 114 * OS1_S1 + 33) -
                p_over_q * *(b + 158 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 33) +
                one_over_two_q * *(b + 114 * OS1_S1 + 19);
            *(b + 114 * OS1_S1 + 54) =
                prefactor_y * *(b + 114 * OS1_S1 + 34) -
                p_over_q * *(b + 158 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 34);
            *(b + 114 * OS1_S1 + 55) =
                prefactor_z * *(b + 114 * OS1_S1 + 34) -
                p_over_q * *(b + 159 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 114 * OS1_S1 + 19);
            *(b + 115 * OS1_S1 + 35) =
                prefactor_x * *(b + 115 * OS1_S1 + 20) -
                p_over_q * *(b + 151 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 10);
            *(b + 115 * OS1_S1 + 36) =
                prefactor_y * *(b + 115 * OS1_S1 + 20) -
                p_over_q * *(b + 159 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 20);
            *(b + 115 * OS1_S1 + 37) =
                prefactor_z * *(b + 115 * OS1_S1 + 20) -
                p_over_q * *(b + 160 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 20);
            *(b + 115 * OS1_S1 + 38) =
                prefactor_y * *(b + 115 * OS1_S1 + 21) -
                p_over_q * *(b + 159 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 21) +
                one_over_two_q * *(b + 115 * OS1_S1 + 10);
            *(b + 115 * OS1_S1 + 39) =
                prefactor_z * *(b + 115 * OS1_S1 + 21) -
                p_over_q * *(b + 160 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 21);
            *(b + 115 * OS1_S1 + 40) =
                prefactor_z * *(b + 115 * OS1_S1 + 22) -
                p_over_q * *(b + 160 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 22) +
                one_over_two_q * *(b + 115 * OS1_S1 + 10);
            *(b + 115 * OS1_S1 + 41) =
                prefactor_x * *(b + 115 * OS1_S1 + 26) -
                p_over_q * *(b + 151 * OS1_S1 + 26) +
                one_over_two_q * *(b + 115 * OS1_S1 + 16);
            *(b + 115 * OS1_S1 + 42) =
                prefactor_z * *(b + 115 * OS1_S1 + 23) -
                p_over_q * *(b + 160 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 23);
            *(b + 115 * OS1_S1 + 43) =
                prefactor_y * *(b + 115 * OS1_S1 + 25) -
                p_over_q * *(b + 159 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 25);
            *(b + 115 * OS1_S1 + 44) =
                prefactor_x * *(b + 115 * OS1_S1 + 29) -
                p_over_q * *(b + 151 * OS1_S1 + 29) +
                one_over_two_q * *(b + 115 * OS1_S1 + 19);
            *(b + 115 * OS1_S1 + 45) = prefactor_x * *(b + 115 * OS1_S1 + 30) -
                                       p_over_q * *(b + 151 * OS1_S1 + 30);
            *(b + 115 * OS1_S1 + 46) = prefactor_x * *(b + 115 * OS1_S1 + 31) -
                                       p_over_q * *(b + 151 * OS1_S1 + 31);
            *(b + 115 * OS1_S1 + 47) = prefactor_x * *(b + 115 * OS1_S1 + 32) -
                                       p_over_q * *(b + 151 * OS1_S1 + 32);
            *(b + 115 * OS1_S1 + 48) = prefactor_x * *(b + 115 * OS1_S1 + 33) -
                                       p_over_q * *(b + 151 * OS1_S1 + 33);
            *(b + 115 * OS1_S1 + 49) = prefactor_x * *(b + 115 * OS1_S1 + 34) -
                                       p_over_q * *(b + 151 * OS1_S1 + 34);
            *(b + 115 * OS1_S1 + 50) =
                prefactor_y * *(b + 115 * OS1_S1 + 30) -
                p_over_q * *(b + 159 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 16);
            *(b + 115 * OS1_S1 + 51) =
                prefactor_z * *(b + 115 * OS1_S1 + 30) -
                p_over_q * *(b + 160 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 30);
            *(b + 115 * OS1_S1 + 52) =
                prefactor_z * *(b + 115 * OS1_S1 + 31) -
                p_over_q * *(b + 160 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 31) +
                one_over_two_q * *(b + 115 * OS1_S1 + 16);
            *(b + 115 * OS1_S1 + 53) =
                prefactor_y * *(b + 115 * OS1_S1 + 33) -
                p_over_q * *(b + 159 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 33) +
                one_over_two_q * *(b + 115 * OS1_S1 + 19);
            *(b + 115 * OS1_S1 + 54) =
                prefactor_y * *(b + 115 * OS1_S1 + 34) -
                p_over_q * *(b + 159 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 34);
            *(b + 115 * OS1_S1 + 55) =
                prefactor_z * *(b + 115 * OS1_S1 + 34) -
                p_over_q * *(b + 160 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 19);
            *(b + 116 * OS1_S1 + 35) =
                prefactor_x * *(b + 116 * OS1_S1 + 20) -
                p_over_q * *(b + 152 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 10);
            *(b + 116 * OS1_S1 + 36) =
                prefactor_y * *(b + 116 * OS1_S1 + 20) -
                p_over_q * *(b + 160 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 20);
            *(b + 116 * OS1_S1 + 37) =
                prefactor_z * *(b + 116 * OS1_S1 + 20) -
                p_over_q * *(b + 161 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 20);
            *(b + 116 * OS1_S1 + 38) =
                prefactor_y * *(b + 116 * OS1_S1 + 21) -
                p_over_q * *(b + 160 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 21) +
                one_over_two_q * *(b + 116 * OS1_S1 + 10);
            *(b + 116 * OS1_S1 + 39) =
                prefactor_y * *(b + 116 * OS1_S1 + 22) -
                p_over_q * *(b + 160 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 22);
            *(b + 116 * OS1_S1 + 40) =
                prefactor_z * *(b + 116 * OS1_S1 + 22) -
                p_over_q * *(b + 161 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 22) +
                one_over_two_q * *(b + 116 * OS1_S1 + 10);
            *(b + 116 * OS1_S1 + 41) =
                prefactor_x * *(b + 116 * OS1_S1 + 26) -
                p_over_q * *(b + 152 * OS1_S1 + 26) +
                one_over_two_q * *(b + 116 * OS1_S1 + 16);
            *(b + 116 * OS1_S1 + 42) =
                prefactor_z * *(b + 116 * OS1_S1 + 23) -
                p_over_q * *(b + 161 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 23);
            *(b + 116 * OS1_S1 + 43) =
                prefactor_y * *(b + 116 * OS1_S1 + 25) -
                p_over_q * *(b + 160 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 25);
            *(b + 116 * OS1_S1 + 44) =
                prefactor_x * *(b + 116 * OS1_S1 + 29) -
                p_over_q * *(b + 152 * OS1_S1 + 29) +
                one_over_two_q * *(b + 116 * OS1_S1 + 19);
            *(b + 116 * OS1_S1 + 45) = prefactor_x * *(b + 116 * OS1_S1 + 30) -
                                       p_over_q * *(b + 152 * OS1_S1 + 30);
            *(b + 116 * OS1_S1 + 46) = prefactor_x * *(b + 116 * OS1_S1 + 31) -
                                       p_over_q * *(b + 152 * OS1_S1 + 31);
            *(b + 116 * OS1_S1 + 47) = prefactor_x * *(b + 116 * OS1_S1 + 32) -
                                       p_over_q * *(b + 152 * OS1_S1 + 32);
            *(b + 116 * OS1_S1 + 48) = prefactor_x * *(b + 116 * OS1_S1 + 33) -
                                       p_over_q * *(b + 152 * OS1_S1 + 33);
            *(b + 116 * OS1_S1 + 49) = prefactor_x * *(b + 116 * OS1_S1 + 34) -
                                       p_over_q * *(b + 152 * OS1_S1 + 34);
            *(b + 116 * OS1_S1 + 50) =
                prefactor_y * *(b + 116 * OS1_S1 + 30) -
                p_over_q * *(b + 160 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 16);
            *(b + 116 * OS1_S1 + 51) =
                prefactor_z * *(b + 116 * OS1_S1 + 30) -
                p_over_q * *(b + 161 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 30);
            *(b + 116 * OS1_S1 + 52) =
                prefactor_z * *(b + 116 * OS1_S1 + 31) -
                p_over_q * *(b + 161 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 31) +
                one_over_two_q * *(b + 116 * OS1_S1 + 16);
            *(b + 116 * OS1_S1 + 53) =
                prefactor_y * *(b + 116 * OS1_S1 + 33) -
                p_over_q * *(b + 160 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 33) +
                one_over_two_q * *(b + 116 * OS1_S1 + 19);
            *(b + 116 * OS1_S1 + 54) =
                prefactor_y * *(b + 116 * OS1_S1 + 34) -
                p_over_q * *(b + 160 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 34);
            *(b + 116 * OS1_S1 + 55) =
                prefactor_z * *(b + 116 * OS1_S1 + 34) -
                p_over_q * *(b + 161 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 19);
            *(b + 117 * OS1_S1 + 35) =
                prefactor_x * *(b + 117 * OS1_S1 + 20) -
                p_over_q * *(b + 153 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 117 * OS1_S1 + 10);
            *(b + 117 * OS1_S1 + 36) =
                prefactor_y * *(b + 117 * OS1_S1 + 20) -
                p_over_q * *(b + 161 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 20);
            *(b + 117 * OS1_S1 + 37) =
                prefactor_z * *(b + 117 * OS1_S1 + 20) -
                p_over_q * *(b + 162 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 20);
            *(b + 117 * OS1_S1 + 38) =
                prefactor_y * *(b + 117 * OS1_S1 + 21) -
                p_over_q * *(b + 161 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 21) +
                one_over_two_q * *(b + 117 * OS1_S1 + 10);
            *(b + 117 * OS1_S1 + 39) =
                prefactor_y * *(b + 117 * OS1_S1 + 22) -
                p_over_q * *(b + 161 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 22);
            *(b + 117 * OS1_S1 + 40) =
                prefactor_z * *(b + 117 * OS1_S1 + 22) -
                p_over_q * *(b + 162 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 22) +
                one_over_two_q * *(b + 117 * OS1_S1 + 10);
            *(b + 117 * OS1_S1 + 41) =
                prefactor_x * *(b + 117 * OS1_S1 + 26) -
                p_over_q * *(b + 153 * OS1_S1 + 26) +
                one_over_two_q * *(b + 117 * OS1_S1 + 16);
            *(b + 117 * OS1_S1 + 42) =
                prefactor_z * *(b + 117 * OS1_S1 + 23) -
                p_over_q * *(b + 162 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 23);
            *(b + 117 * OS1_S1 + 43) =
                prefactor_y * *(b + 117 * OS1_S1 + 25) -
                p_over_q * *(b + 161 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 25);
            *(b + 117 * OS1_S1 + 44) =
                prefactor_x * *(b + 117 * OS1_S1 + 29) -
                p_over_q * *(b + 153 * OS1_S1 + 29) +
                one_over_two_q * *(b + 117 * OS1_S1 + 19);
            *(b + 117 * OS1_S1 + 45) = prefactor_x * *(b + 117 * OS1_S1 + 30) -
                                       p_over_q * *(b + 153 * OS1_S1 + 30);
            *(b + 117 * OS1_S1 + 46) = prefactor_x * *(b + 117 * OS1_S1 + 31) -
                                       p_over_q * *(b + 153 * OS1_S1 + 31);
            *(b + 117 * OS1_S1 + 47) = prefactor_x * *(b + 117 * OS1_S1 + 32) -
                                       p_over_q * *(b + 153 * OS1_S1 + 32);
            *(b + 117 * OS1_S1 + 48) = prefactor_x * *(b + 117 * OS1_S1 + 33) -
                                       p_over_q * *(b + 153 * OS1_S1 + 33);
            *(b + 117 * OS1_S1 + 49) = prefactor_x * *(b + 117 * OS1_S1 + 34) -
                                       p_over_q * *(b + 153 * OS1_S1 + 34);
            *(b + 117 * OS1_S1 + 50) =
                prefactor_y * *(b + 117 * OS1_S1 + 30) -
                p_over_q * *(b + 161 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 117 * OS1_S1 + 16);
            *(b + 117 * OS1_S1 + 51) =
                prefactor_z * *(b + 117 * OS1_S1 + 30) -
                p_over_q * *(b + 162 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 30);
            *(b + 117 * OS1_S1 + 52) =
                prefactor_z * *(b + 117 * OS1_S1 + 31) -
                p_over_q * *(b + 162 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 31) +
                one_over_two_q * *(b + 117 * OS1_S1 + 16);
            *(b + 117 * OS1_S1 + 53) =
                prefactor_y * *(b + 117 * OS1_S1 + 33) -
                p_over_q * *(b + 161 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 33) +
                one_over_two_q * *(b + 117 * OS1_S1 + 19);
            *(b + 117 * OS1_S1 + 54) =
                prefactor_y * *(b + 117 * OS1_S1 + 34) -
                p_over_q * *(b + 161 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 34);
            *(b + 117 * OS1_S1 + 55) =
                prefactor_z * *(b + 117 * OS1_S1 + 34) -
                p_over_q * *(b + 162 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 117 * OS1_S1 + 19);
            *(b + 118 * OS1_S1 + 35) =
                prefactor_x * *(b + 118 * OS1_S1 + 20) -
                p_over_q * *(b + 154 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 118 * OS1_S1 + 10);
            *(b + 118 * OS1_S1 + 36) = prefactor_y * *(b + 118 * OS1_S1 + 20) -
                                       p_over_q * *(b + 162 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 20);
            *(b + 118 * OS1_S1 + 37) =
                prefactor_z * *(b + 118 * OS1_S1 + 20) -
                p_over_q * *(b + 163 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 20);
            *(b + 118 * OS1_S1 + 38) =
                prefactor_y * *(b + 118 * OS1_S1 + 21) -
                p_over_q * *(b + 162 * OS1_S1 + 21) +
                one_over_two_q * *(b + 83 * OS1_S1 + 21) +
                one_over_two_q * *(b + 118 * OS1_S1 + 10);
            *(b + 118 * OS1_S1 + 39) = prefactor_y * *(b + 118 * OS1_S1 + 22) -
                                       p_over_q * *(b + 162 * OS1_S1 + 22) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 22);
            *(b + 118 * OS1_S1 + 40) =
                prefactor_z * *(b + 118 * OS1_S1 + 22) -
                p_over_q * *(b + 163 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 22) +
                one_over_two_q * *(b + 118 * OS1_S1 + 10);
            *(b + 118 * OS1_S1 + 41) =
                prefactor_x * *(b + 118 * OS1_S1 + 26) -
                p_over_q * *(b + 154 * OS1_S1 + 26) +
                one_over_two_q * *(b + 118 * OS1_S1 + 16);
            *(b + 118 * OS1_S1 + 42) =
                prefactor_z * *(b + 118 * OS1_S1 + 23) -
                p_over_q * *(b + 163 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 23);
            *(b + 118 * OS1_S1 + 43) = prefactor_y * *(b + 118 * OS1_S1 + 25) -
                                       p_over_q * *(b + 162 * OS1_S1 + 25) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 25);
            *(b + 118 * OS1_S1 + 44) =
                prefactor_x * *(b + 118 * OS1_S1 + 29) -
                p_over_q * *(b + 154 * OS1_S1 + 29) +
                one_over_two_q * *(b + 118 * OS1_S1 + 19);
            *(b + 118 * OS1_S1 + 45) = prefactor_x * *(b + 118 * OS1_S1 + 30) -
                                       p_over_q * *(b + 154 * OS1_S1 + 30);
            *(b + 118 * OS1_S1 + 46) = prefactor_x * *(b + 118 * OS1_S1 + 31) -
                                       p_over_q * *(b + 154 * OS1_S1 + 31);
            *(b + 118 * OS1_S1 + 47) = prefactor_x * *(b + 118 * OS1_S1 + 32) -
                                       p_over_q * *(b + 154 * OS1_S1 + 32);
            *(b + 118 * OS1_S1 + 48) = prefactor_x * *(b + 118 * OS1_S1 + 33) -
                                       p_over_q * *(b + 154 * OS1_S1 + 33);
            *(b + 118 * OS1_S1 + 49) = prefactor_x * *(b + 118 * OS1_S1 + 34) -
                                       p_over_q * *(b + 154 * OS1_S1 + 34);
            *(b + 118 * OS1_S1 + 50) =
                prefactor_y * *(b + 118 * OS1_S1 + 30) -
                p_over_q * *(b + 162 * OS1_S1 + 30) +
                one_over_two_q * *(b + 83 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 118 * OS1_S1 + 16);
            *(b + 118 * OS1_S1 + 51) =
                prefactor_z * *(b + 118 * OS1_S1 + 30) -
                p_over_q * *(b + 163 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 30);
            *(b + 118 * OS1_S1 + 52) =
                prefactor_z * *(b + 118 * OS1_S1 + 31) -
                p_over_q * *(b + 163 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 31) +
                one_over_two_q * *(b + 118 * OS1_S1 + 16);
            *(b + 118 * OS1_S1 + 53) =
                prefactor_y * *(b + 118 * OS1_S1 + 33) -
                p_over_q * *(b + 162 * OS1_S1 + 33) +
                one_over_two_q * *(b + 83 * OS1_S1 + 33) +
                one_over_two_q * *(b + 118 * OS1_S1 + 19);
            *(b + 118 * OS1_S1 + 54) = prefactor_y * *(b + 118 * OS1_S1 + 34) -
                                       p_over_q * *(b + 162 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 34);
            *(b + 118 * OS1_S1 + 55) =
                prefactor_z * *(b + 118 * OS1_S1 + 34) -
                p_over_q * *(b + 163 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 118 * OS1_S1 + 19);
            *(b + 119 * OS1_S1 + 35) =
                prefactor_x * *(b + 119 * OS1_S1 + 20) -
                p_over_q * *(b + 155 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 119 * OS1_S1 + 10);
            *(b + 119 * OS1_S1 + 36) = prefactor_y * *(b + 119 * OS1_S1 + 20) -
                                       p_over_q * *(b + 163 * OS1_S1 + 20);
            *(b + 119 * OS1_S1 + 37) =
                prefactor_z * *(b + 119 * OS1_S1 + 20) -
                p_over_q * *(b + 164 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 20);
            *(b + 119 * OS1_S1 + 38) =
                prefactor_y * *(b + 119 * OS1_S1 + 21) -
                p_over_q * *(b + 163 * OS1_S1 + 21) +
                one_over_two_q * *(b + 119 * OS1_S1 + 10);
            *(b + 119 * OS1_S1 + 39) = prefactor_y * *(b + 119 * OS1_S1 + 22) -
                                       p_over_q * *(b + 163 * OS1_S1 + 22);
            *(b + 119 * OS1_S1 + 40) =
                prefactor_z * *(b + 119 * OS1_S1 + 22) -
                p_over_q * *(b + 164 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 22) +
                one_over_two_q * *(b + 119 * OS1_S1 + 10);
            *(b + 119 * OS1_S1 + 41) =
                prefactor_x * *(b + 119 * OS1_S1 + 26) -
                p_over_q * *(b + 155 * OS1_S1 + 26) +
                one_over_two_q * *(b + 119 * OS1_S1 + 16);
            *(b + 119 * OS1_S1 + 42) =
                prefactor_z * *(b + 119 * OS1_S1 + 23) -
                p_over_q * *(b + 164 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 23);
            *(b + 119 * OS1_S1 + 43) = prefactor_y * *(b + 119 * OS1_S1 + 25) -
                                       p_over_q * *(b + 163 * OS1_S1 + 25);
            *(b + 119 * OS1_S1 + 44) =
                prefactor_x * *(b + 119 * OS1_S1 + 29) -
                p_over_q * *(b + 155 * OS1_S1 + 29) +
                one_over_two_q * *(b + 119 * OS1_S1 + 19);
            *(b + 119 * OS1_S1 + 45) = prefactor_x * *(b + 119 * OS1_S1 + 30) -
                                       p_over_q * *(b + 155 * OS1_S1 + 30);
            *(b + 119 * OS1_S1 + 46) = prefactor_x * *(b + 119 * OS1_S1 + 31) -
                                       p_over_q * *(b + 155 * OS1_S1 + 31);
            *(b + 119 * OS1_S1 + 47) = prefactor_x * *(b + 119 * OS1_S1 + 32) -
                                       p_over_q * *(b + 155 * OS1_S1 + 32);
            *(b + 119 * OS1_S1 + 48) = prefactor_y * *(b + 119 * OS1_S1 + 29) -
                                       p_over_q * *(b + 163 * OS1_S1 + 29);
            *(b + 119 * OS1_S1 + 49) = prefactor_x * *(b + 119 * OS1_S1 + 34) -
                                       p_over_q * *(b + 155 * OS1_S1 + 34);
            *(b + 119 * OS1_S1 + 50) =
                prefactor_y * *(b + 119 * OS1_S1 + 30) -
                p_over_q * *(b + 163 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 119 * OS1_S1 + 16);
            *(b + 119 * OS1_S1 + 51) =
                prefactor_z * *(b + 119 * OS1_S1 + 30) -
                p_over_q * *(b + 164 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 30);
            *(b + 119 * OS1_S1 + 52) =
                prefactor_z * *(b + 119 * OS1_S1 + 31) -
                p_over_q * *(b + 164 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 31) +
                one_over_two_q * *(b + 119 * OS1_S1 + 16);
            *(b + 119 * OS1_S1 + 53) =
                prefactor_y * *(b + 119 * OS1_S1 + 33) -
                p_over_q * *(b + 163 * OS1_S1 + 33) +
                one_over_two_q * *(b + 119 * OS1_S1 + 19);
            *(b + 119 * OS1_S1 + 54) = prefactor_y * *(b + 119 * OS1_S1 + 34) -
                                       p_over_q * *(b + 163 * OS1_S1 + 34);
            *(b + 119 * OS1_S1 + 55) =
                prefactor_z * *(b + 119 * OS1_S1 + 34) -
                p_over_q * *(b + 164 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 119 * OS1_S1 + 19);
            return;
        }

        void transfer_8_5(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 120 * OS1_S1 + 35) =
                prefactor_x * *(b + 120 * OS1_S1 + 20) -
                p_over_q * *(b + 165 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 120 * OS1_S1 + 10);
            *(b + 120 * OS1_S1 + 36) = prefactor_y * *(b + 120 * OS1_S1 + 20) -
                                       p_over_q * *(b + 166 * OS1_S1 + 20);
            *(b + 120 * OS1_S1 + 37) = prefactor_z * *(b + 120 * OS1_S1 + 20) -
                                       p_over_q * *(b + 167 * OS1_S1 + 20);
            *(b + 120 * OS1_S1 + 38) =
                prefactor_y * *(b + 120 * OS1_S1 + 21) -
                p_over_q * *(b + 166 * OS1_S1 + 21) +
                one_over_two_q * *(b + 120 * OS1_S1 + 10);
            *(b + 120 * OS1_S1 + 39) = prefactor_z * *(b + 120 * OS1_S1 + 21) -
                                       p_over_q * *(b + 167 * OS1_S1 + 21);
            *(b + 120 * OS1_S1 + 40) =
                prefactor_z * *(b + 120 * OS1_S1 + 22) -
                p_over_q * *(b + 167 * OS1_S1 + 22) +
                one_over_two_q * *(b + 120 * OS1_S1 + 10);
            *(b + 120 * OS1_S1 + 41) =
                prefactor_x * *(b + 120 * OS1_S1 + 26) -
                p_over_q * *(b + 165 * OS1_S1 + 26) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 26) +
                one_over_two_q * *(b + 120 * OS1_S1 + 16);
            *(b + 120 * OS1_S1 + 42) = prefactor_z * *(b + 120 * OS1_S1 + 23) -
                                       p_over_q * *(b + 167 * OS1_S1 + 23);
            *(b + 120 * OS1_S1 + 43) = prefactor_y * *(b + 120 * OS1_S1 + 25) -
                                       p_over_q * *(b + 166 * OS1_S1 + 25);
            *(b + 120 * OS1_S1 + 44) =
                prefactor_x * *(b + 120 * OS1_S1 + 29) -
                p_over_q * *(b + 165 * OS1_S1 + 29) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 29) +
                one_over_two_q * *(b + 120 * OS1_S1 + 19);
            *(b + 120 * OS1_S1 + 45) =
                prefactor_x * *(b + 120 * OS1_S1 + 30) -
                p_over_q * *(b + 165 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 30);
            *(b + 120 * OS1_S1 + 46) = prefactor_z * *(b + 120 * OS1_S1 + 26) -
                                       p_over_q * *(b + 167 * OS1_S1 + 26);
            *(b + 120 * OS1_S1 + 47) =
                prefactor_x * *(b + 120 * OS1_S1 + 32) -
                p_over_q * *(b + 165 * OS1_S1 + 32) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 32);
            *(b + 120 * OS1_S1 + 48) = prefactor_y * *(b + 120 * OS1_S1 + 29) -
                                       p_over_q * *(b + 166 * OS1_S1 + 29);
            *(b + 120 * OS1_S1 + 49) =
                prefactor_x * *(b + 120 * OS1_S1 + 34) -
                p_over_q * *(b + 165 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 34);
            *(b + 120 * OS1_S1 + 50) =
                prefactor_y * *(b + 120 * OS1_S1 + 30) -
                p_over_q * *(b + 166 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 120 * OS1_S1 + 16);
            *(b + 120 * OS1_S1 + 51) = prefactor_z * *(b + 120 * OS1_S1 + 30) -
                                       p_over_q * *(b + 167 * OS1_S1 + 30);
            *(b + 120 * OS1_S1 + 52) =
                prefactor_z * *(b + 120 * OS1_S1 + 31) -
                p_over_q * *(b + 167 * OS1_S1 + 31) +
                one_over_two_q * *(b + 120 * OS1_S1 + 16);
            *(b + 120 * OS1_S1 + 53) =
                prefactor_y * *(b + 120 * OS1_S1 + 33) -
                p_over_q * *(b + 166 * OS1_S1 + 33) +
                one_over_two_q * *(b + 120 * OS1_S1 + 19);
            *(b + 120 * OS1_S1 + 54) = prefactor_y * *(b + 120 * OS1_S1 + 34) -
                                       p_over_q * *(b + 166 * OS1_S1 + 34);
            *(b + 120 * OS1_S1 + 55) =
                prefactor_z * *(b + 120 * OS1_S1 + 34) -
                p_over_q * *(b + 167 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 120 * OS1_S1 + 19);
            *(b + 121 * OS1_S1 + 35) =
                prefactor_x * *(b + 121 * OS1_S1 + 20) -
                p_over_q * *(b + 166 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 121 * OS1_S1 + 10);
            *(b + 121 * OS1_S1 + 36) = prefactor_y * *(b + 121 * OS1_S1 + 20) -
                                       p_over_q * *(b + 168 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 20);
            *(b + 121 * OS1_S1 + 37) = prefactor_z * *(b + 121 * OS1_S1 + 20) -
                                       p_over_q * *(b + 169 * OS1_S1 + 20);
            *(b + 121 * OS1_S1 + 38) =
                prefactor_y * *(b + 121 * OS1_S1 + 21) -
                p_over_q * *(b + 168 * OS1_S1 + 21) +
                one_over_two_q * *(b + 84 * OS1_S1 + 21) +
                one_over_two_q * *(b + 121 * OS1_S1 + 10);
            *(b + 121 * OS1_S1 + 39) = prefactor_z * *(b + 121 * OS1_S1 + 21) -
                                       p_over_q * *(b + 169 * OS1_S1 + 21);
            *(b + 121 * OS1_S1 + 40) =
                prefactor_z * *(b + 121 * OS1_S1 + 22) -
                p_over_q * *(b + 169 * OS1_S1 + 22) +
                one_over_two_q * *(b + 121 * OS1_S1 + 10);
            *(b + 121 * OS1_S1 + 41) =
                prefactor_x * *(b + 121 * OS1_S1 + 26) -
                p_over_q * *(b + 166 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 26) +
                one_over_two_q * *(b + 121 * OS1_S1 + 16);
            *(b + 121 * OS1_S1 + 42) = prefactor_z * *(b + 121 * OS1_S1 + 23) -
                                       p_over_q * *(b + 169 * OS1_S1 + 23);
            *(b + 121 * OS1_S1 + 43) = prefactor_y * *(b + 121 * OS1_S1 + 25) -
                                       p_over_q * *(b + 168 * OS1_S1 + 25) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 25);
            *(b + 121 * OS1_S1 + 44) =
                prefactor_x * *(b + 121 * OS1_S1 + 29) -
                p_over_q * *(b + 166 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 29) +
                one_over_two_q * *(b + 121 * OS1_S1 + 19);
            *(b + 121 * OS1_S1 + 45) =
                prefactor_x * *(b + 121 * OS1_S1 + 30) -
                p_over_q * *(b + 166 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 30);
            *(b + 121 * OS1_S1 + 46) = prefactor_z * *(b + 121 * OS1_S1 + 26) -
                                       p_over_q * *(b + 169 * OS1_S1 + 26);
            *(b + 121 * OS1_S1 + 47) =
                prefactor_x * *(b + 121 * OS1_S1 + 32) -
                p_over_q * *(b + 166 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 32);
            *(b + 121 * OS1_S1 + 48) = prefactor_y * *(b + 121 * OS1_S1 + 29) -
                                       p_over_q * *(b + 168 * OS1_S1 + 29) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 29);
            *(b + 121 * OS1_S1 + 49) =
                prefactor_x * *(b + 121 * OS1_S1 + 34) -
                p_over_q * *(b + 166 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 34);
            *(b + 121 * OS1_S1 + 50) =
                prefactor_y * *(b + 121 * OS1_S1 + 30) -
                p_over_q * *(b + 168 * OS1_S1 + 30) +
                one_over_two_q * *(b + 84 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 121 * OS1_S1 + 16);
            *(b + 121 * OS1_S1 + 51) = prefactor_z * *(b + 121 * OS1_S1 + 30) -
                                       p_over_q * *(b + 169 * OS1_S1 + 30);
            *(b + 121 * OS1_S1 + 52) =
                prefactor_z * *(b + 121 * OS1_S1 + 31) -
                p_over_q * *(b + 169 * OS1_S1 + 31) +
                one_over_two_q * *(b + 121 * OS1_S1 + 16);
            *(b + 121 * OS1_S1 + 53) =
                prefactor_y * *(b + 121 * OS1_S1 + 33) -
                p_over_q * *(b + 168 * OS1_S1 + 33) +
                one_over_two_q * *(b + 84 * OS1_S1 + 33) +
                one_over_two_q * *(b + 121 * OS1_S1 + 19);
            *(b + 121 * OS1_S1 + 54) = prefactor_y * *(b + 121 * OS1_S1 + 34) -
                                       p_over_q * *(b + 168 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 34);
            *(b + 121 * OS1_S1 + 55) =
                prefactor_z * *(b + 121 * OS1_S1 + 34) -
                p_over_q * *(b + 169 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 121 * OS1_S1 + 19);
            *(b + 122 * OS1_S1 + 35) =
                prefactor_x * *(b + 122 * OS1_S1 + 20) -
                p_over_q * *(b + 167 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 122 * OS1_S1 + 10);
            *(b + 122 * OS1_S1 + 36) = prefactor_y * *(b + 122 * OS1_S1 + 20) -
                                       p_over_q * *(b + 169 * OS1_S1 + 20);
            *(b + 122 * OS1_S1 + 37) = prefactor_z * *(b + 122 * OS1_S1 + 20) -
                                       p_over_q * *(b + 170 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 20);
            *(b + 122 * OS1_S1 + 38) =
                prefactor_y * *(b + 122 * OS1_S1 + 21) -
                p_over_q * *(b + 169 * OS1_S1 + 21) +
                one_over_two_q * *(b + 122 * OS1_S1 + 10);
            *(b + 122 * OS1_S1 + 39) = prefactor_y * *(b + 122 * OS1_S1 + 22) -
                                       p_over_q * *(b + 169 * OS1_S1 + 22);
            *(b + 122 * OS1_S1 + 40) =
                prefactor_z * *(b + 122 * OS1_S1 + 22) -
                p_over_q * *(b + 170 * OS1_S1 + 22) +
                one_over_two_q * *(b + 84 * OS1_S1 + 22) +
                one_over_two_q * *(b + 122 * OS1_S1 + 10);
            *(b + 122 * OS1_S1 + 41) =
                prefactor_x * *(b + 122 * OS1_S1 + 26) -
                p_over_q * *(b + 167 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 26) +
                one_over_two_q * *(b + 122 * OS1_S1 + 16);
            *(b + 122 * OS1_S1 + 42) = prefactor_z * *(b + 122 * OS1_S1 + 23) -
                                       p_over_q * *(b + 170 * OS1_S1 + 23) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 23);
            *(b + 122 * OS1_S1 + 43) = prefactor_y * *(b + 122 * OS1_S1 + 25) -
                                       p_over_q * *(b + 169 * OS1_S1 + 25);
            *(b + 122 * OS1_S1 + 44) =
                prefactor_x * *(b + 122 * OS1_S1 + 29) -
                p_over_q * *(b + 167 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 29) +
                one_over_two_q * *(b + 122 * OS1_S1 + 19);
            *(b + 122 * OS1_S1 + 45) =
                prefactor_x * *(b + 122 * OS1_S1 + 30) -
                p_over_q * *(b + 167 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 30);
            *(b + 122 * OS1_S1 + 46) = prefactor_z * *(b + 122 * OS1_S1 + 26) -
                                       p_over_q * *(b + 170 * OS1_S1 + 26) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 26);
            *(b + 122 * OS1_S1 + 47) =
                prefactor_x * *(b + 122 * OS1_S1 + 32) -
                p_over_q * *(b + 167 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 32);
            *(b + 122 * OS1_S1 + 48) = prefactor_y * *(b + 122 * OS1_S1 + 29) -
                                       p_over_q * *(b + 169 * OS1_S1 + 29);
            *(b + 122 * OS1_S1 + 49) =
                prefactor_x * *(b + 122 * OS1_S1 + 34) -
                p_over_q * *(b + 167 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 34);
            *(b + 122 * OS1_S1 + 50) =
                prefactor_y * *(b + 122 * OS1_S1 + 30) -
                p_over_q * *(b + 169 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 122 * OS1_S1 + 16);
            *(b + 122 * OS1_S1 + 51) = prefactor_z * *(b + 122 * OS1_S1 + 30) -
                                       p_over_q * *(b + 170 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 30);
            *(b + 122 * OS1_S1 + 52) =
                prefactor_z * *(b + 122 * OS1_S1 + 31) -
                p_over_q * *(b + 170 * OS1_S1 + 31) +
                one_over_two_q * *(b + 84 * OS1_S1 + 31) +
                one_over_two_q * *(b + 122 * OS1_S1 + 16);
            *(b + 122 * OS1_S1 + 53) =
                prefactor_y * *(b + 122 * OS1_S1 + 33) -
                p_over_q * *(b + 169 * OS1_S1 + 33) +
                one_over_two_q * *(b + 122 * OS1_S1 + 19);
            *(b + 122 * OS1_S1 + 54) = prefactor_y * *(b + 122 * OS1_S1 + 34) -
                                       p_over_q * *(b + 169 * OS1_S1 + 34);
            *(b + 122 * OS1_S1 + 55) =
                prefactor_z * *(b + 122 * OS1_S1 + 34) -
                p_over_q * *(b + 170 * OS1_S1 + 34) +
                one_over_two_q * *(b + 84 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 122 * OS1_S1 + 19);
            *(b + 123 * OS1_S1 + 35) =
                prefactor_x * *(b + 123 * OS1_S1 + 20) -
                p_over_q * *(b + 168 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 123 * OS1_S1 + 10);
            *(b + 123 * OS1_S1 + 36) =
                prefactor_y * *(b + 123 * OS1_S1 + 20) -
                p_over_q * *(b + 171 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 20);
            *(b + 123 * OS1_S1 + 37) = prefactor_z * *(b + 123 * OS1_S1 + 20) -
                                       p_over_q * *(b + 172 * OS1_S1 + 20);
            *(b + 123 * OS1_S1 + 38) =
                prefactor_y * *(b + 123 * OS1_S1 + 21) -
                p_over_q * *(b + 171 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 21) +
                one_over_two_q * *(b + 123 * OS1_S1 + 10);
            *(b + 123 * OS1_S1 + 39) = prefactor_z * *(b + 123 * OS1_S1 + 21) -
                                       p_over_q * *(b + 172 * OS1_S1 + 21);
            *(b + 123 * OS1_S1 + 40) =
                prefactor_z * *(b + 123 * OS1_S1 + 22) -
                p_over_q * *(b + 172 * OS1_S1 + 22) +
                one_over_two_q * *(b + 123 * OS1_S1 + 10);
            *(b + 123 * OS1_S1 + 41) =
                prefactor_x * *(b + 123 * OS1_S1 + 26) -
                p_over_q * *(b + 168 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 26) +
                one_over_two_q * *(b + 123 * OS1_S1 + 16);
            *(b + 123 * OS1_S1 + 42) = prefactor_z * *(b + 123 * OS1_S1 + 23) -
                                       p_over_q * *(b + 172 * OS1_S1 + 23);
            *(b + 123 * OS1_S1 + 43) =
                prefactor_y * *(b + 123 * OS1_S1 + 25) -
                p_over_q * *(b + 171 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 25);
            *(b + 123 * OS1_S1 + 44) =
                prefactor_x * *(b + 123 * OS1_S1 + 29) -
                p_over_q * *(b + 168 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 29) +
                one_over_two_q * *(b + 123 * OS1_S1 + 19);
            *(b + 123 * OS1_S1 + 45) =
                prefactor_x * *(b + 123 * OS1_S1 + 30) -
                p_over_q * *(b + 168 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 30);
            *(b + 123 * OS1_S1 + 46) = prefactor_z * *(b + 123 * OS1_S1 + 26) -
                                       p_over_q * *(b + 172 * OS1_S1 + 26);
            *(b + 123 * OS1_S1 + 47) =
                prefactor_x * *(b + 123 * OS1_S1 + 32) -
                p_over_q * *(b + 168 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 32);
            *(b + 123 * OS1_S1 + 48) =
                prefactor_y * *(b + 123 * OS1_S1 + 29) -
                p_over_q * *(b + 171 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 29);
            *(b + 123 * OS1_S1 + 49) =
                prefactor_x * *(b + 123 * OS1_S1 + 34) -
                p_over_q * *(b + 168 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 34);
            *(b + 123 * OS1_S1 + 50) =
                prefactor_y * *(b + 123 * OS1_S1 + 30) -
                p_over_q * *(b + 171 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 123 * OS1_S1 + 16);
            *(b + 123 * OS1_S1 + 51) = prefactor_z * *(b + 123 * OS1_S1 + 30) -
                                       p_over_q * *(b + 172 * OS1_S1 + 30);
            *(b + 123 * OS1_S1 + 52) =
                prefactor_z * *(b + 123 * OS1_S1 + 31) -
                p_over_q * *(b + 172 * OS1_S1 + 31) +
                one_over_two_q * *(b + 123 * OS1_S1 + 16);
            *(b + 123 * OS1_S1 + 53) =
                prefactor_y * *(b + 123 * OS1_S1 + 33) -
                p_over_q * *(b + 171 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 33) +
                one_over_two_q * *(b + 123 * OS1_S1 + 19);
            *(b + 123 * OS1_S1 + 54) =
                prefactor_y * *(b + 123 * OS1_S1 + 34) -
                p_over_q * *(b + 171 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 34);
            *(b + 123 * OS1_S1 + 55) =
                prefactor_z * *(b + 123 * OS1_S1 + 34) -
                p_over_q * *(b + 172 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 123 * OS1_S1 + 19);
            *(b + 124 * OS1_S1 + 35) =
                prefactor_x * *(b + 124 * OS1_S1 + 20) -
                p_over_q * *(b + 169 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 124 * OS1_S1 + 10);
            *(b + 124 * OS1_S1 + 36) = prefactor_y * *(b + 124 * OS1_S1 + 20) -
                                       p_over_q * *(b + 172 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 20);
            *(b + 124 * OS1_S1 + 37) = prefactor_z * *(b + 124 * OS1_S1 + 20) -
                                       p_over_q * *(b + 173 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 20);
            *(b + 124 * OS1_S1 + 38) =
                prefactor_y * *(b + 124 * OS1_S1 + 21) -
                p_over_q * *(b + 172 * OS1_S1 + 21) +
                one_over_two_q * *(b + 86 * OS1_S1 + 21) +
                one_over_two_q * *(b + 124 * OS1_S1 + 10);
            *(b + 124 * OS1_S1 + 39) = prefactor_z * *(b + 124 * OS1_S1 + 21) -
                                       p_over_q * *(b + 173 * OS1_S1 + 21) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 21);
            *(b + 124 * OS1_S1 + 40) =
                prefactor_z * *(b + 124 * OS1_S1 + 22) -
                p_over_q * *(b + 173 * OS1_S1 + 22) +
                one_over_two_q * *(b + 85 * OS1_S1 + 22) +
                one_over_two_q * *(b + 124 * OS1_S1 + 10);
            *(b + 124 * OS1_S1 + 41) =
                prefactor_x * *(b + 124 * OS1_S1 + 26) -
                p_over_q * *(b + 169 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 26) +
                one_over_two_q * *(b + 124 * OS1_S1 + 16);
            *(b + 124 * OS1_S1 + 42) = prefactor_z * *(b + 124 * OS1_S1 + 23) -
                                       p_over_q * *(b + 173 * OS1_S1 + 23) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 23);
            *(b + 124 * OS1_S1 + 43) = prefactor_y * *(b + 124 * OS1_S1 + 25) -
                                       p_over_q * *(b + 172 * OS1_S1 + 25) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 25);
            *(b + 124 * OS1_S1 + 44) =
                prefactor_x * *(b + 124 * OS1_S1 + 29) -
                p_over_q * *(b + 169 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 29) +
                one_over_two_q * *(b + 124 * OS1_S1 + 19);
            *(b + 124 * OS1_S1 + 45) =
                prefactor_x * *(b + 124 * OS1_S1 + 30) -
                p_over_q * *(b + 169 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 30);
            *(b + 124 * OS1_S1 + 46) = prefactor_z * *(b + 124 * OS1_S1 + 26) -
                                       p_over_q * *(b + 173 * OS1_S1 + 26) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 26);
            *(b + 124 * OS1_S1 + 47) =
                prefactor_x * *(b + 124 * OS1_S1 + 32) -
                p_over_q * *(b + 169 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 32);
            *(b + 124 * OS1_S1 + 48) = prefactor_y * *(b + 124 * OS1_S1 + 29) -
                                       p_over_q * *(b + 172 * OS1_S1 + 29) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 29);
            *(b + 124 * OS1_S1 + 49) =
                prefactor_x * *(b + 124 * OS1_S1 + 34) -
                p_over_q * *(b + 169 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 34);
            *(b + 124 * OS1_S1 + 50) =
                prefactor_y * *(b + 124 * OS1_S1 + 30) -
                p_over_q * *(b + 172 * OS1_S1 + 30) +
                one_over_two_q * *(b + 86 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 124 * OS1_S1 + 16);
            *(b + 124 * OS1_S1 + 51) = prefactor_z * *(b + 124 * OS1_S1 + 30) -
                                       p_over_q * *(b + 173 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 30);
            *(b + 124 * OS1_S1 + 52) =
                prefactor_z * *(b + 124 * OS1_S1 + 31) -
                p_over_q * *(b + 173 * OS1_S1 + 31) +
                one_over_two_q * *(b + 85 * OS1_S1 + 31) +
                one_over_two_q * *(b + 124 * OS1_S1 + 16);
            *(b + 124 * OS1_S1 + 53) =
                prefactor_y * *(b + 124 * OS1_S1 + 33) -
                p_over_q * *(b + 172 * OS1_S1 + 33) +
                one_over_two_q * *(b + 86 * OS1_S1 + 33) +
                one_over_two_q * *(b + 124 * OS1_S1 + 19);
            *(b + 124 * OS1_S1 + 54) = prefactor_y * *(b + 124 * OS1_S1 + 34) -
                                       p_over_q * *(b + 172 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 34);
            *(b + 124 * OS1_S1 + 55) =
                prefactor_z * *(b + 124 * OS1_S1 + 34) -
                p_over_q * *(b + 173 * OS1_S1 + 34) +
                one_over_two_q * *(b + 85 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 124 * OS1_S1 + 19);
            *(b + 125 * OS1_S1 + 35) =
                prefactor_x * *(b + 125 * OS1_S1 + 20) -
                p_over_q * *(b + 170 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 125 * OS1_S1 + 10);
            *(b + 125 * OS1_S1 + 36) = prefactor_y * *(b + 125 * OS1_S1 + 20) -
                                       p_over_q * *(b + 173 * OS1_S1 + 20);
            *(b + 125 * OS1_S1 + 37) =
                prefactor_z * *(b + 125 * OS1_S1 + 20) -
                p_over_q * *(b + 174 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 20);
            *(b + 125 * OS1_S1 + 38) =
                prefactor_y * *(b + 125 * OS1_S1 + 21) -
                p_over_q * *(b + 173 * OS1_S1 + 21) +
                one_over_two_q * *(b + 125 * OS1_S1 + 10);
            *(b + 125 * OS1_S1 + 39) = prefactor_y * *(b + 125 * OS1_S1 + 22) -
                                       p_over_q * *(b + 173 * OS1_S1 + 22);
            *(b + 125 * OS1_S1 + 40) =
                prefactor_z * *(b + 125 * OS1_S1 + 22) -
                p_over_q * *(b + 174 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 22) +
                one_over_two_q * *(b + 125 * OS1_S1 + 10);
            *(b + 125 * OS1_S1 + 41) =
                prefactor_x * *(b + 125 * OS1_S1 + 26) -
                p_over_q * *(b + 170 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 26) +
                one_over_two_q * *(b + 125 * OS1_S1 + 16);
            *(b + 125 * OS1_S1 + 42) =
                prefactor_z * *(b + 125 * OS1_S1 + 23) -
                p_over_q * *(b + 174 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 23);
            *(b + 125 * OS1_S1 + 43) = prefactor_y * *(b + 125 * OS1_S1 + 25) -
                                       p_over_q * *(b + 173 * OS1_S1 + 25);
            *(b + 125 * OS1_S1 + 44) =
                prefactor_x * *(b + 125 * OS1_S1 + 29) -
                p_over_q * *(b + 170 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 29) +
                one_over_two_q * *(b + 125 * OS1_S1 + 19);
            *(b + 125 * OS1_S1 + 45) =
                prefactor_x * *(b + 125 * OS1_S1 + 30) -
                p_over_q * *(b + 170 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 30);
            *(b + 125 * OS1_S1 + 46) =
                prefactor_z * *(b + 125 * OS1_S1 + 26) -
                p_over_q * *(b + 174 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 26);
            *(b + 125 * OS1_S1 + 47) =
                prefactor_x * *(b + 125 * OS1_S1 + 32) -
                p_over_q * *(b + 170 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 32);
            *(b + 125 * OS1_S1 + 48) = prefactor_y * *(b + 125 * OS1_S1 + 29) -
                                       p_over_q * *(b + 173 * OS1_S1 + 29);
            *(b + 125 * OS1_S1 + 49) =
                prefactor_x * *(b + 125 * OS1_S1 + 34) -
                p_over_q * *(b + 170 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 34);
            *(b + 125 * OS1_S1 + 50) =
                prefactor_y * *(b + 125 * OS1_S1 + 30) -
                p_over_q * *(b + 173 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 125 * OS1_S1 + 16);
            *(b + 125 * OS1_S1 + 51) =
                prefactor_z * *(b + 125 * OS1_S1 + 30) -
                p_over_q * *(b + 174 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 30);
            *(b + 125 * OS1_S1 + 52) =
                prefactor_z * *(b + 125 * OS1_S1 + 31) -
                p_over_q * *(b + 174 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 31) +
                one_over_two_q * *(b + 125 * OS1_S1 + 16);
            *(b + 125 * OS1_S1 + 53) =
                prefactor_y * *(b + 125 * OS1_S1 + 33) -
                p_over_q * *(b + 173 * OS1_S1 + 33) +
                one_over_two_q * *(b + 125 * OS1_S1 + 19);
            *(b + 125 * OS1_S1 + 54) = prefactor_y * *(b + 125 * OS1_S1 + 34) -
                                       p_over_q * *(b + 173 * OS1_S1 + 34);
            *(b + 125 * OS1_S1 + 55) =
                prefactor_z * *(b + 125 * OS1_S1 + 34) -
                p_over_q * *(b + 174 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 125 * OS1_S1 + 19);
            *(b + 126 * OS1_S1 + 35) =
                prefactor_x * *(b + 126 * OS1_S1 + 20) -
                p_over_q * *(b + 171 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 10);
            *(b + 126 * OS1_S1 + 36) =
                prefactor_y * *(b + 126 * OS1_S1 + 20) -
                p_over_q * *(b + 175 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 20);
            *(b + 126 * OS1_S1 + 37) = prefactor_z * *(b + 126 * OS1_S1 + 20) -
                                       p_over_q * *(b + 176 * OS1_S1 + 20);
            *(b + 126 * OS1_S1 + 38) =
                prefactor_y * *(b + 126 * OS1_S1 + 21) -
                p_over_q * *(b + 175 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 21) +
                one_over_two_q * *(b + 126 * OS1_S1 + 10);
            *(b + 126 * OS1_S1 + 39) = prefactor_z * *(b + 126 * OS1_S1 + 21) -
                                       p_over_q * *(b + 176 * OS1_S1 + 21);
            *(b + 126 * OS1_S1 + 40) =
                prefactor_z * *(b + 126 * OS1_S1 + 22) -
                p_over_q * *(b + 176 * OS1_S1 + 22) +
                one_over_two_q * *(b + 126 * OS1_S1 + 10);
            *(b + 126 * OS1_S1 + 41) =
                prefactor_x * *(b + 126 * OS1_S1 + 26) -
                p_over_q * *(b + 171 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 26) +
                one_over_two_q * *(b + 126 * OS1_S1 + 16);
            *(b + 126 * OS1_S1 + 42) = prefactor_z * *(b + 126 * OS1_S1 + 23) -
                                       p_over_q * *(b + 176 * OS1_S1 + 23);
            *(b + 126 * OS1_S1 + 43) =
                prefactor_y * *(b + 126 * OS1_S1 + 25) -
                p_over_q * *(b + 175 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 25);
            *(b + 126 * OS1_S1 + 44) =
                prefactor_x * *(b + 126 * OS1_S1 + 29) -
                p_over_q * *(b + 171 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 29) +
                one_over_two_q * *(b + 126 * OS1_S1 + 19);
            *(b + 126 * OS1_S1 + 45) =
                prefactor_x * *(b + 126 * OS1_S1 + 30) -
                p_over_q * *(b + 171 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 30);
            *(b + 126 * OS1_S1 + 46) = prefactor_z * *(b + 126 * OS1_S1 + 26) -
                                       p_over_q * *(b + 176 * OS1_S1 + 26);
            *(b + 126 * OS1_S1 + 47) =
                prefactor_x * *(b + 126 * OS1_S1 + 32) -
                p_over_q * *(b + 171 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 32);
            *(b + 126 * OS1_S1 + 48) =
                prefactor_y * *(b + 126 * OS1_S1 + 29) -
                p_over_q * *(b + 175 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 29);
            *(b + 126 * OS1_S1 + 49) =
                prefactor_x * *(b + 126 * OS1_S1 + 34) -
                p_over_q * *(b + 171 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 34);
            *(b + 126 * OS1_S1 + 50) =
                prefactor_y * *(b + 126 * OS1_S1 + 30) -
                p_over_q * *(b + 175 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 16);
            *(b + 126 * OS1_S1 + 51) = prefactor_z * *(b + 126 * OS1_S1 + 30) -
                                       p_over_q * *(b + 176 * OS1_S1 + 30);
            *(b + 126 * OS1_S1 + 52) =
                prefactor_z * *(b + 126 * OS1_S1 + 31) -
                p_over_q * *(b + 176 * OS1_S1 + 31) +
                one_over_two_q * *(b + 126 * OS1_S1 + 16);
            *(b + 126 * OS1_S1 + 53) =
                prefactor_y * *(b + 126 * OS1_S1 + 33) -
                p_over_q * *(b + 175 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 33) +
                one_over_two_q * *(b + 126 * OS1_S1 + 19);
            *(b + 126 * OS1_S1 + 54) =
                prefactor_y * *(b + 126 * OS1_S1 + 34) -
                p_over_q * *(b + 175 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 34);
            *(b + 126 * OS1_S1 + 55) =
                prefactor_z * *(b + 126 * OS1_S1 + 34) -
                p_over_q * *(b + 176 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 19);
            *(b + 127 * OS1_S1 + 35) =
                prefactor_x * *(b + 127 * OS1_S1 + 20) -
                p_over_q * *(b + 172 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 127 * OS1_S1 + 10);
            *(b + 127 * OS1_S1 + 36) =
                prefactor_y * *(b + 127 * OS1_S1 + 20) -
                p_over_q * *(b + 176 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 20);
            *(b + 127 * OS1_S1 + 37) = prefactor_z * *(b + 127 * OS1_S1 + 20) -
                                       p_over_q * *(b + 177 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 20);
            *(b + 127 * OS1_S1 + 38) =
                prefactor_y * *(b + 127 * OS1_S1 + 21) -
                p_over_q * *(b + 176 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 21) +
                one_over_two_q * *(b + 127 * OS1_S1 + 10);
            *(b + 127 * OS1_S1 + 39) = prefactor_z * *(b + 127 * OS1_S1 + 21) -
                                       p_over_q * *(b + 177 * OS1_S1 + 21) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 21);
            *(b + 127 * OS1_S1 + 40) =
                prefactor_z * *(b + 127 * OS1_S1 + 22) -
                p_over_q * *(b + 177 * OS1_S1 + 22) +
                one_over_two_q * *(b + 87 * OS1_S1 + 22) +
                one_over_two_q * *(b + 127 * OS1_S1 + 10);
            *(b + 127 * OS1_S1 + 41) =
                prefactor_x * *(b + 127 * OS1_S1 + 26) -
                p_over_q * *(b + 172 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 26) +
                one_over_two_q * *(b + 127 * OS1_S1 + 16);
            *(b + 127 * OS1_S1 + 42) = prefactor_z * *(b + 127 * OS1_S1 + 23) -
                                       p_over_q * *(b + 177 * OS1_S1 + 23) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 23);
            *(b + 127 * OS1_S1 + 43) =
                prefactor_y * *(b + 127 * OS1_S1 + 25) -
                p_over_q * *(b + 176 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 25);
            *(b + 127 * OS1_S1 + 44) =
                prefactor_x * *(b + 127 * OS1_S1 + 29) -
                p_over_q * *(b + 172 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 29) +
                one_over_two_q * *(b + 127 * OS1_S1 + 19);
            *(b + 127 * OS1_S1 + 45) =
                prefactor_x * *(b + 127 * OS1_S1 + 30) -
                p_over_q * *(b + 172 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 30);
            *(b + 127 * OS1_S1 + 46) = prefactor_z * *(b + 127 * OS1_S1 + 26) -
                                       p_over_q * *(b + 177 * OS1_S1 + 26) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 26);
            *(b + 127 * OS1_S1 + 47) =
                prefactor_x * *(b + 127 * OS1_S1 + 32) -
                p_over_q * *(b + 172 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 32);
            *(b + 127 * OS1_S1 + 48) =
                prefactor_y * *(b + 127 * OS1_S1 + 29) -
                p_over_q * *(b + 176 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 29);
            *(b + 127 * OS1_S1 + 49) =
                prefactor_x * *(b + 127 * OS1_S1 + 34) -
                p_over_q * *(b + 172 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 34);
            *(b + 127 * OS1_S1 + 50) =
                prefactor_y * *(b + 127 * OS1_S1 + 30) -
                p_over_q * *(b + 176 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 127 * OS1_S1 + 16);
            *(b + 127 * OS1_S1 + 51) = prefactor_z * *(b + 127 * OS1_S1 + 30) -
                                       p_over_q * *(b + 177 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 30);
            *(b + 127 * OS1_S1 + 52) =
                prefactor_z * *(b + 127 * OS1_S1 + 31) -
                p_over_q * *(b + 177 * OS1_S1 + 31) +
                one_over_two_q * *(b + 87 * OS1_S1 + 31) +
                one_over_two_q * *(b + 127 * OS1_S1 + 16);
            *(b + 127 * OS1_S1 + 53) =
                prefactor_y * *(b + 127 * OS1_S1 + 33) -
                p_over_q * *(b + 176 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 33) +
                one_over_two_q * *(b + 127 * OS1_S1 + 19);
            *(b + 127 * OS1_S1 + 54) =
                prefactor_y * *(b + 127 * OS1_S1 + 34) -
                p_over_q * *(b + 176 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 34);
            *(b + 127 * OS1_S1 + 55) =
                prefactor_z * *(b + 127 * OS1_S1 + 34) -
                p_over_q * *(b + 177 * OS1_S1 + 34) +
                one_over_two_q * *(b + 87 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 127 * OS1_S1 + 19);
            *(b + 128 * OS1_S1 + 35) =
                prefactor_x * *(b + 128 * OS1_S1 + 20) -
                p_over_q * *(b + 173 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 128 * OS1_S1 + 10);
            *(b + 128 * OS1_S1 + 36) = prefactor_y * *(b + 128 * OS1_S1 + 20) -
                                       p_over_q * *(b + 177 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 20);
            *(b + 128 * OS1_S1 + 37) =
                prefactor_z * *(b + 128 * OS1_S1 + 20) -
                p_over_q * *(b + 178 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 20);
            *(b + 128 * OS1_S1 + 38) =
                prefactor_y * *(b + 128 * OS1_S1 + 21) -
                p_over_q * *(b + 177 * OS1_S1 + 21) +
                one_over_two_q * *(b + 89 * OS1_S1 + 21) +
                one_over_two_q * *(b + 128 * OS1_S1 + 10);
            *(b + 128 * OS1_S1 + 39) = prefactor_y * *(b + 128 * OS1_S1 + 22) -
                                       p_over_q * *(b + 177 * OS1_S1 + 22) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 22);
            *(b + 128 * OS1_S1 + 40) =
                prefactor_z * *(b + 128 * OS1_S1 + 22) -
                p_over_q * *(b + 178 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 22) +
                one_over_two_q * *(b + 128 * OS1_S1 + 10);
            *(b + 128 * OS1_S1 + 41) =
                prefactor_x * *(b + 128 * OS1_S1 + 26) -
                p_over_q * *(b + 173 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 26) +
                one_over_two_q * *(b + 128 * OS1_S1 + 16);
            *(b + 128 * OS1_S1 + 42) =
                prefactor_z * *(b + 128 * OS1_S1 + 23) -
                p_over_q * *(b + 178 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 23);
            *(b + 128 * OS1_S1 + 43) = prefactor_y * *(b + 128 * OS1_S1 + 25) -
                                       p_over_q * *(b + 177 * OS1_S1 + 25) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 25);
            *(b + 128 * OS1_S1 + 44) =
                prefactor_x * *(b + 128 * OS1_S1 + 29) -
                p_over_q * *(b + 173 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 29) +
                one_over_two_q * *(b + 128 * OS1_S1 + 19);
            *(b + 128 * OS1_S1 + 45) =
                prefactor_x * *(b + 128 * OS1_S1 + 30) -
                p_over_q * *(b + 173 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 30);
            *(b + 128 * OS1_S1 + 46) =
                prefactor_z * *(b + 128 * OS1_S1 + 26) -
                p_over_q * *(b + 178 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 26);
            *(b + 128 * OS1_S1 + 47) =
                prefactor_x * *(b + 128 * OS1_S1 + 32) -
                p_over_q * *(b + 173 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 32);
            *(b + 128 * OS1_S1 + 48) = prefactor_y * *(b + 128 * OS1_S1 + 29) -
                                       p_over_q * *(b + 177 * OS1_S1 + 29) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 29);
            *(b + 128 * OS1_S1 + 49) =
                prefactor_x * *(b + 128 * OS1_S1 + 34) -
                p_over_q * *(b + 173 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 34);
            *(b + 128 * OS1_S1 + 50) =
                prefactor_y * *(b + 128 * OS1_S1 + 30) -
                p_over_q * *(b + 177 * OS1_S1 + 30) +
                one_over_two_q * *(b + 89 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 128 * OS1_S1 + 16);
            *(b + 128 * OS1_S1 + 51) =
                prefactor_z * *(b + 128 * OS1_S1 + 30) -
                p_over_q * *(b + 178 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 30);
            *(b + 128 * OS1_S1 + 52) =
                prefactor_z * *(b + 128 * OS1_S1 + 31) -
                p_over_q * *(b + 178 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 31) +
                one_over_two_q * *(b + 128 * OS1_S1 + 16);
            *(b + 128 * OS1_S1 + 53) =
                prefactor_y * *(b + 128 * OS1_S1 + 33) -
                p_over_q * *(b + 177 * OS1_S1 + 33) +
                one_over_two_q * *(b + 89 * OS1_S1 + 33) +
                one_over_two_q * *(b + 128 * OS1_S1 + 19);
            *(b + 128 * OS1_S1 + 54) = prefactor_y * *(b + 128 * OS1_S1 + 34) -
                                       p_over_q * *(b + 177 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 34);
            *(b + 128 * OS1_S1 + 55) =
                prefactor_z * *(b + 128 * OS1_S1 + 34) -
                p_over_q * *(b + 178 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 128 * OS1_S1 + 19);
            *(b + 129 * OS1_S1 + 35) =
                prefactor_x * *(b + 129 * OS1_S1 + 20) -
                p_over_q * *(b + 174 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 10);
            *(b + 129 * OS1_S1 + 36) = prefactor_y * *(b + 129 * OS1_S1 + 20) -
                                       p_over_q * *(b + 178 * OS1_S1 + 20);
            *(b + 129 * OS1_S1 + 37) =
                prefactor_z * *(b + 129 * OS1_S1 + 20) -
                p_over_q * *(b + 179 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 20);
            *(b + 129 * OS1_S1 + 38) =
                prefactor_y * *(b + 129 * OS1_S1 + 21) -
                p_over_q * *(b + 178 * OS1_S1 + 21) +
                one_over_two_q * *(b + 129 * OS1_S1 + 10);
            *(b + 129 * OS1_S1 + 39) = prefactor_y * *(b + 129 * OS1_S1 + 22) -
                                       p_over_q * *(b + 178 * OS1_S1 + 22);
            *(b + 129 * OS1_S1 + 40) =
                prefactor_z * *(b + 129 * OS1_S1 + 22) -
                p_over_q * *(b + 179 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 22) +
                one_over_two_q * *(b + 129 * OS1_S1 + 10);
            *(b + 129 * OS1_S1 + 41) =
                prefactor_x * *(b + 129 * OS1_S1 + 26) -
                p_over_q * *(b + 174 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 26) +
                one_over_two_q * *(b + 129 * OS1_S1 + 16);
            *(b + 129 * OS1_S1 + 42) =
                prefactor_z * *(b + 129 * OS1_S1 + 23) -
                p_over_q * *(b + 179 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 23);
            *(b + 129 * OS1_S1 + 43) = prefactor_y * *(b + 129 * OS1_S1 + 25) -
                                       p_over_q * *(b + 178 * OS1_S1 + 25);
            *(b + 129 * OS1_S1 + 44) =
                prefactor_x * *(b + 129 * OS1_S1 + 29) -
                p_over_q * *(b + 174 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 29) +
                one_over_two_q * *(b + 129 * OS1_S1 + 19);
            *(b + 129 * OS1_S1 + 45) =
                prefactor_x * *(b + 129 * OS1_S1 + 30) -
                p_over_q * *(b + 174 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 30);
            *(b + 129 * OS1_S1 + 46) =
                prefactor_z * *(b + 129 * OS1_S1 + 26) -
                p_over_q * *(b + 179 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 26);
            *(b + 129 * OS1_S1 + 47) =
                prefactor_x * *(b + 129 * OS1_S1 + 32) -
                p_over_q * *(b + 174 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 32);
            *(b + 129 * OS1_S1 + 48) = prefactor_y * *(b + 129 * OS1_S1 + 29) -
                                       p_over_q * *(b + 178 * OS1_S1 + 29);
            *(b + 129 * OS1_S1 + 49) =
                prefactor_x * *(b + 129 * OS1_S1 + 34) -
                p_over_q * *(b + 174 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 34);
            *(b + 129 * OS1_S1 + 50) =
                prefactor_y * *(b + 129 * OS1_S1 + 30) -
                p_over_q * *(b + 178 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 16);
            *(b + 129 * OS1_S1 + 51) =
                prefactor_z * *(b + 129 * OS1_S1 + 30) -
                p_over_q * *(b + 179 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 30);
            *(b + 129 * OS1_S1 + 52) =
                prefactor_z * *(b + 129 * OS1_S1 + 31) -
                p_over_q * *(b + 179 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 31) +
                one_over_two_q * *(b + 129 * OS1_S1 + 16);
            *(b + 129 * OS1_S1 + 53) =
                prefactor_y * *(b + 129 * OS1_S1 + 33) -
                p_over_q * *(b + 178 * OS1_S1 + 33) +
                one_over_two_q * *(b + 129 * OS1_S1 + 19);
            *(b + 129 * OS1_S1 + 54) = prefactor_y * *(b + 129 * OS1_S1 + 34) -
                                       p_over_q * *(b + 178 * OS1_S1 + 34);
            *(b + 129 * OS1_S1 + 55) =
                prefactor_z * *(b + 129 * OS1_S1 + 34) -
                p_over_q * *(b + 179 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 19);
            *(b + 130 * OS1_S1 + 35) =
                prefactor_x * *(b + 130 * OS1_S1 + 20) -
                p_over_q * *(b + 175 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 130 * OS1_S1 + 10);
            *(b + 130 * OS1_S1 + 36) =
                prefactor_y * *(b + 130 * OS1_S1 + 20) -
                p_over_q * *(b + 180 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 20);
            *(b + 130 * OS1_S1 + 37) = prefactor_z * *(b + 130 * OS1_S1 + 20) -
                                       p_over_q * *(b + 181 * OS1_S1 + 20);
            *(b + 130 * OS1_S1 + 38) =
                prefactor_y * *(b + 130 * OS1_S1 + 21) -
                p_over_q * *(b + 180 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 21) +
                one_over_two_q * *(b + 130 * OS1_S1 + 10);
            *(b + 130 * OS1_S1 + 39) = prefactor_z * *(b + 130 * OS1_S1 + 21) -
                                       p_over_q * *(b + 181 * OS1_S1 + 21);
            *(b + 130 * OS1_S1 + 40) =
                prefactor_z * *(b + 130 * OS1_S1 + 22) -
                p_over_q * *(b + 181 * OS1_S1 + 22) +
                one_over_two_q * *(b + 130 * OS1_S1 + 10);
            *(b + 130 * OS1_S1 + 41) =
                prefactor_x * *(b + 130 * OS1_S1 + 26) -
                p_over_q * *(b + 175 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 26) +
                one_over_two_q * *(b + 130 * OS1_S1 + 16);
            *(b + 130 * OS1_S1 + 42) = prefactor_z * *(b + 130 * OS1_S1 + 23) -
                                       p_over_q * *(b + 181 * OS1_S1 + 23);
            *(b + 130 * OS1_S1 + 43) =
                prefactor_y * *(b + 130 * OS1_S1 + 25) -
                p_over_q * *(b + 180 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 25);
            *(b + 130 * OS1_S1 + 44) =
                prefactor_x * *(b + 130 * OS1_S1 + 29) -
                p_over_q * *(b + 175 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 29) +
                one_over_two_q * *(b + 130 * OS1_S1 + 19);
            *(b + 130 * OS1_S1 + 45) =
                prefactor_x * *(b + 130 * OS1_S1 + 30) -
                p_over_q * *(b + 175 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 30);
            *(b + 130 * OS1_S1 + 46) = prefactor_z * *(b + 130 * OS1_S1 + 26) -
                                       p_over_q * *(b + 181 * OS1_S1 + 26);
            *(b + 130 * OS1_S1 + 47) =
                prefactor_x * *(b + 130 * OS1_S1 + 32) -
                p_over_q * *(b + 175 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 32);
            *(b + 130 * OS1_S1 + 48) =
                prefactor_y * *(b + 130 * OS1_S1 + 29) -
                p_over_q * *(b + 180 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 29);
            *(b + 130 * OS1_S1 + 49) =
                prefactor_x * *(b + 130 * OS1_S1 + 34) -
                p_over_q * *(b + 175 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 34);
            *(b + 130 * OS1_S1 + 50) =
                prefactor_y * *(b + 130 * OS1_S1 + 30) -
                p_over_q * *(b + 180 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 130 * OS1_S1 + 16);
            *(b + 130 * OS1_S1 + 51) = prefactor_z * *(b + 130 * OS1_S1 + 30) -
                                       p_over_q * *(b + 181 * OS1_S1 + 30);
            *(b + 130 * OS1_S1 + 52) =
                prefactor_z * *(b + 130 * OS1_S1 + 31) -
                p_over_q * *(b + 181 * OS1_S1 + 31) +
                one_over_two_q * *(b + 130 * OS1_S1 + 16);
            *(b + 130 * OS1_S1 + 53) =
                prefactor_y * *(b + 130 * OS1_S1 + 33) -
                p_over_q * *(b + 180 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 33) +
                one_over_two_q * *(b + 130 * OS1_S1 + 19);
            *(b + 130 * OS1_S1 + 54) =
                prefactor_y * *(b + 130 * OS1_S1 + 34) -
                p_over_q * *(b + 180 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 34);
            *(b + 130 * OS1_S1 + 55) =
                prefactor_z * *(b + 130 * OS1_S1 + 34) -
                p_over_q * *(b + 181 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 130 * OS1_S1 + 19);
            *(b + 131 * OS1_S1 + 35) =
                prefactor_x * *(b + 131 * OS1_S1 + 20) -
                p_over_q * *(b + 176 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 10);
            *(b + 131 * OS1_S1 + 36) =
                prefactor_y * *(b + 131 * OS1_S1 + 20) -
                p_over_q * *(b + 181 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 20);
            *(b + 131 * OS1_S1 + 37) = prefactor_z * *(b + 131 * OS1_S1 + 20) -
                                       p_over_q * *(b + 182 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 20);
            *(b + 131 * OS1_S1 + 38) =
                prefactor_y * *(b + 131 * OS1_S1 + 21) -
                p_over_q * *(b + 181 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 21) +
                one_over_two_q * *(b + 131 * OS1_S1 + 10);
            *(b + 131 * OS1_S1 + 39) = prefactor_z * *(b + 131 * OS1_S1 + 21) -
                                       p_over_q * *(b + 182 * OS1_S1 + 21) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 21);
            *(b + 131 * OS1_S1 + 40) =
                prefactor_z * *(b + 131 * OS1_S1 + 22) -
                p_over_q * *(b + 182 * OS1_S1 + 22) +
                one_over_two_q * *(b + 90 * OS1_S1 + 22) +
                one_over_two_q * *(b + 131 * OS1_S1 + 10);
            *(b + 131 * OS1_S1 + 41) =
                prefactor_x * *(b + 131 * OS1_S1 + 26) -
                p_over_q * *(b + 176 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 26) +
                one_over_two_q * *(b + 131 * OS1_S1 + 16);
            *(b + 131 * OS1_S1 + 42) = prefactor_z * *(b + 131 * OS1_S1 + 23) -
                                       p_over_q * *(b + 182 * OS1_S1 + 23) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 23);
            *(b + 131 * OS1_S1 + 43) =
                prefactor_y * *(b + 131 * OS1_S1 + 25) -
                p_over_q * *(b + 181 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 25);
            *(b + 131 * OS1_S1 + 44) =
                prefactor_x * *(b + 131 * OS1_S1 + 29) -
                p_over_q * *(b + 176 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 29) +
                one_over_two_q * *(b + 131 * OS1_S1 + 19);
            *(b + 131 * OS1_S1 + 45) =
                prefactor_x * *(b + 131 * OS1_S1 + 30) -
                p_over_q * *(b + 176 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 30);
            *(b + 131 * OS1_S1 + 46) = prefactor_z * *(b + 131 * OS1_S1 + 26) -
                                       p_over_q * *(b + 182 * OS1_S1 + 26) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 26);
            *(b + 131 * OS1_S1 + 47) =
                prefactor_x * *(b + 131 * OS1_S1 + 32) -
                p_over_q * *(b + 176 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 32);
            *(b + 131 * OS1_S1 + 48) =
                prefactor_y * *(b + 131 * OS1_S1 + 29) -
                p_over_q * *(b + 181 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 29);
            *(b + 131 * OS1_S1 + 49) =
                prefactor_x * *(b + 131 * OS1_S1 + 34) -
                p_over_q * *(b + 176 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 34);
            *(b + 131 * OS1_S1 + 50) =
                prefactor_y * *(b + 131 * OS1_S1 + 30) -
                p_over_q * *(b + 181 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 16);
            *(b + 131 * OS1_S1 + 51) = prefactor_z * *(b + 131 * OS1_S1 + 30) -
                                       p_over_q * *(b + 182 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 30);
            *(b + 131 * OS1_S1 + 52) =
                prefactor_z * *(b + 131 * OS1_S1 + 31) -
                p_over_q * *(b + 182 * OS1_S1 + 31) +
                one_over_two_q * *(b + 90 * OS1_S1 + 31) +
                one_over_two_q * *(b + 131 * OS1_S1 + 16);
            *(b + 131 * OS1_S1 + 53) =
                prefactor_y * *(b + 131 * OS1_S1 + 33) -
                p_over_q * *(b + 181 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 33) +
                one_over_two_q * *(b + 131 * OS1_S1 + 19);
            *(b + 131 * OS1_S1 + 54) =
                prefactor_y * *(b + 131 * OS1_S1 + 34) -
                p_over_q * *(b + 181 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 34);
            *(b + 131 * OS1_S1 + 55) =
                prefactor_z * *(b + 131 * OS1_S1 + 34) -
                p_over_q * *(b + 182 * OS1_S1 + 34) +
                one_over_two_q * *(b + 90 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 19);
            *(b + 132 * OS1_S1 + 35) =
                prefactor_x * *(b + 132 * OS1_S1 + 20) -
                p_over_q * *(b + 177 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 132 * OS1_S1 + 10);
            *(b + 132 * OS1_S1 + 36) =
                prefactor_y * *(b + 132 * OS1_S1 + 20) -
                p_over_q * *(b + 182 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 20);
            *(b + 132 * OS1_S1 + 37) =
                prefactor_z * *(b + 132 * OS1_S1 + 20) -
                p_over_q * *(b + 183 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 20);
            *(b + 132 * OS1_S1 + 38) =
                prefactor_y * *(b + 132 * OS1_S1 + 21) -
                p_over_q * *(b + 182 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 21) +
                one_over_two_q * *(b + 132 * OS1_S1 + 10);
            *(b + 132 * OS1_S1 + 39) =
                prefactor_z * *(b + 132 * OS1_S1 + 21) -
                p_over_q * *(b + 183 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 21);
            *(b + 132 * OS1_S1 + 40) =
                prefactor_z * *(b + 132 * OS1_S1 + 22) -
                p_over_q * *(b + 183 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 22) +
                one_over_two_q * *(b + 132 * OS1_S1 + 10);
            *(b + 132 * OS1_S1 + 41) =
                prefactor_x * *(b + 132 * OS1_S1 + 26) -
                p_over_q * *(b + 177 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 26) +
                one_over_two_q * *(b + 132 * OS1_S1 + 16);
            *(b + 132 * OS1_S1 + 42) =
                prefactor_z * *(b + 132 * OS1_S1 + 23) -
                p_over_q * *(b + 183 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 23);
            *(b + 132 * OS1_S1 + 43) =
                prefactor_y * *(b + 132 * OS1_S1 + 25) -
                p_over_q * *(b + 182 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 25);
            *(b + 132 * OS1_S1 + 44) =
                prefactor_x * *(b + 132 * OS1_S1 + 29) -
                p_over_q * *(b + 177 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 29) +
                one_over_two_q * *(b + 132 * OS1_S1 + 19);
            *(b + 132 * OS1_S1 + 45) =
                prefactor_x * *(b + 132 * OS1_S1 + 30) -
                p_over_q * *(b + 177 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 30);
            *(b + 132 * OS1_S1 + 46) =
                prefactor_z * *(b + 132 * OS1_S1 + 26) -
                p_over_q * *(b + 183 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 26);
            *(b + 132 * OS1_S1 + 47) =
                prefactor_x * *(b + 132 * OS1_S1 + 32) -
                p_over_q * *(b + 177 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 32);
            *(b + 132 * OS1_S1 + 48) =
                prefactor_y * *(b + 132 * OS1_S1 + 29) -
                p_over_q * *(b + 182 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 29);
            *(b + 132 * OS1_S1 + 49) =
                prefactor_x * *(b + 132 * OS1_S1 + 34) -
                p_over_q * *(b + 177 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 34);
            *(b + 132 * OS1_S1 + 50) =
                prefactor_y * *(b + 132 * OS1_S1 + 30) -
                p_over_q * *(b + 182 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 132 * OS1_S1 + 16);
            *(b + 132 * OS1_S1 + 51) =
                prefactor_z * *(b + 132 * OS1_S1 + 30) -
                p_over_q * *(b + 183 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 30);
            *(b + 132 * OS1_S1 + 52) =
                prefactor_z * *(b + 132 * OS1_S1 + 31) -
                p_over_q * *(b + 183 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 31) +
                one_over_two_q * *(b + 132 * OS1_S1 + 16);
            *(b + 132 * OS1_S1 + 53) =
                prefactor_y * *(b + 132 * OS1_S1 + 33) -
                p_over_q * *(b + 182 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 33) +
                one_over_two_q * *(b + 132 * OS1_S1 + 19);
            *(b + 132 * OS1_S1 + 54) =
                prefactor_y * *(b + 132 * OS1_S1 + 34) -
                p_over_q * *(b + 182 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 34);
            *(b + 132 * OS1_S1 + 55) =
                prefactor_z * *(b + 132 * OS1_S1 + 34) -
                p_over_q * *(b + 183 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 132 * OS1_S1 + 19);
            *(b + 133 * OS1_S1 + 35) =
                prefactor_x * *(b + 133 * OS1_S1 + 20) -
                p_over_q * *(b + 178 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 10);
            *(b + 133 * OS1_S1 + 36) = prefactor_y * *(b + 133 * OS1_S1 + 20) -
                                       p_over_q * *(b + 183 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 20);
            *(b + 133 * OS1_S1 + 37) =
                prefactor_z * *(b + 133 * OS1_S1 + 20) -
                p_over_q * *(b + 184 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 20);
            *(b + 133 * OS1_S1 + 38) =
                prefactor_y * *(b + 133 * OS1_S1 + 21) -
                p_over_q * *(b + 183 * OS1_S1 + 21) +
                one_over_two_q * *(b + 93 * OS1_S1 + 21) +
                one_over_two_q * *(b + 133 * OS1_S1 + 10);
            *(b + 133 * OS1_S1 + 39) = prefactor_y * *(b + 133 * OS1_S1 + 22) -
                                       p_over_q * *(b + 183 * OS1_S1 + 22) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 22);
            *(b + 133 * OS1_S1 + 40) =
                prefactor_z * *(b + 133 * OS1_S1 + 22) -
                p_over_q * *(b + 184 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 22) +
                one_over_two_q * *(b + 133 * OS1_S1 + 10);
            *(b + 133 * OS1_S1 + 41) =
                prefactor_x * *(b + 133 * OS1_S1 + 26) -
                p_over_q * *(b + 178 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 26) +
                one_over_two_q * *(b + 133 * OS1_S1 + 16);
            *(b + 133 * OS1_S1 + 42) =
                prefactor_z * *(b + 133 * OS1_S1 + 23) -
                p_over_q * *(b + 184 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 23);
            *(b + 133 * OS1_S1 + 43) = prefactor_y * *(b + 133 * OS1_S1 + 25) -
                                       p_over_q * *(b + 183 * OS1_S1 + 25) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 25);
            *(b + 133 * OS1_S1 + 44) =
                prefactor_x * *(b + 133 * OS1_S1 + 29) -
                p_over_q * *(b + 178 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 29) +
                one_over_two_q * *(b + 133 * OS1_S1 + 19);
            *(b + 133 * OS1_S1 + 45) =
                prefactor_x * *(b + 133 * OS1_S1 + 30) -
                p_over_q * *(b + 178 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 30);
            *(b + 133 * OS1_S1 + 46) =
                prefactor_z * *(b + 133 * OS1_S1 + 26) -
                p_over_q * *(b + 184 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 26);
            *(b + 133 * OS1_S1 + 47) =
                prefactor_x * *(b + 133 * OS1_S1 + 32) -
                p_over_q * *(b + 178 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 32);
            *(b + 133 * OS1_S1 + 48) = prefactor_y * *(b + 133 * OS1_S1 + 29) -
                                       p_over_q * *(b + 183 * OS1_S1 + 29) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 29);
            *(b + 133 * OS1_S1 + 49) =
                prefactor_x * *(b + 133 * OS1_S1 + 34) -
                p_over_q * *(b + 178 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 34);
            *(b + 133 * OS1_S1 + 50) =
                prefactor_y * *(b + 133 * OS1_S1 + 30) -
                p_over_q * *(b + 183 * OS1_S1 + 30) +
                one_over_two_q * *(b + 93 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 16);
            *(b + 133 * OS1_S1 + 51) =
                prefactor_z * *(b + 133 * OS1_S1 + 30) -
                p_over_q * *(b + 184 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 30);
            *(b + 133 * OS1_S1 + 52) =
                prefactor_z * *(b + 133 * OS1_S1 + 31) -
                p_over_q * *(b + 184 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 31) +
                one_over_two_q * *(b + 133 * OS1_S1 + 16);
            *(b + 133 * OS1_S1 + 53) =
                prefactor_y * *(b + 133 * OS1_S1 + 33) -
                p_over_q * *(b + 183 * OS1_S1 + 33) +
                one_over_two_q * *(b + 93 * OS1_S1 + 33) +
                one_over_two_q * *(b + 133 * OS1_S1 + 19);
            *(b + 133 * OS1_S1 + 54) = prefactor_y * *(b + 133 * OS1_S1 + 34) -
                                       p_over_q * *(b + 183 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 34);
            *(b + 133 * OS1_S1 + 55) =
                prefactor_z * *(b + 133 * OS1_S1 + 34) -
                p_over_q * *(b + 184 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 19);
            *(b + 134 * OS1_S1 + 35) =
                prefactor_x * *(b + 134 * OS1_S1 + 20) -
                p_over_q * *(b + 179 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 134 * OS1_S1 + 10);
            *(b + 134 * OS1_S1 + 36) = prefactor_y * *(b + 134 * OS1_S1 + 20) -
                                       p_over_q * *(b + 184 * OS1_S1 + 20);
            *(b + 134 * OS1_S1 + 37) =
                prefactor_z * *(b + 134 * OS1_S1 + 20) -
                p_over_q * *(b + 185 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 20);
            *(b + 134 * OS1_S1 + 38) =
                prefactor_y * *(b + 134 * OS1_S1 + 21) -
                p_over_q * *(b + 184 * OS1_S1 + 21) +
                one_over_two_q * *(b + 134 * OS1_S1 + 10);
            *(b + 134 * OS1_S1 + 39) = prefactor_y * *(b + 134 * OS1_S1 + 22) -
                                       p_over_q * *(b + 184 * OS1_S1 + 22);
            *(b + 134 * OS1_S1 + 40) =
                prefactor_z * *(b + 134 * OS1_S1 + 22) -
                p_over_q * *(b + 185 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 22) +
                one_over_two_q * *(b + 134 * OS1_S1 + 10);
            *(b + 134 * OS1_S1 + 41) =
                prefactor_x * *(b + 134 * OS1_S1 + 26) -
                p_over_q * *(b + 179 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 26) +
                one_over_two_q * *(b + 134 * OS1_S1 + 16);
            *(b + 134 * OS1_S1 + 42) =
                prefactor_z * *(b + 134 * OS1_S1 + 23) -
                p_over_q * *(b + 185 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 23);
            *(b + 134 * OS1_S1 + 43) = prefactor_y * *(b + 134 * OS1_S1 + 25) -
                                       p_over_q * *(b + 184 * OS1_S1 + 25);
            *(b + 134 * OS1_S1 + 44) =
                prefactor_x * *(b + 134 * OS1_S1 + 29) -
                p_over_q * *(b + 179 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 29) +
                one_over_two_q * *(b + 134 * OS1_S1 + 19);
            *(b + 134 * OS1_S1 + 45) =
                prefactor_x * *(b + 134 * OS1_S1 + 30) -
                p_over_q * *(b + 179 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 30);
            *(b + 134 * OS1_S1 + 46) =
                prefactor_z * *(b + 134 * OS1_S1 + 26) -
                p_over_q * *(b + 185 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 26);
            *(b + 134 * OS1_S1 + 47) =
                prefactor_x * *(b + 134 * OS1_S1 + 32) -
                p_over_q * *(b + 179 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 32);
            *(b + 134 * OS1_S1 + 48) = prefactor_y * *(b + 134 * OS1_S1 + 29) -
                                       p_over_q * *(b + 184 * OS1_S1 + 29);
            *(b + 134 * OS1_S1 + 49) =
                prefactor_x * *(b + 134 * OS1_S1 + 34) -
                p_over_q * *(b + 179 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 34);
            *(b + 134 * OS1_S1 + 50) =
                prefactor_y * *(b + 134 * OS1_S1 + 30) -
                p_over_q * *(b + 184 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 134 * OS1_S1 + 16);
            *(b + 134 * OS1_S1 + 51) =
                prefactor_z * *(b + 134 * OS1_S1 + 30) -
                p_over_q * *(b + 185 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 30);
            *(b + 134 * OS1_S1 + 52) =
                prefactor_z * *(b + 134 * OS1_S1 + 31) -
                p_over_q * *(b + 185 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 31) +
                one_over_two_q * *(b + 134 * OS1_S1 + 16);
            *(b + 134 * OS1_S1 + 53) =
                prefactor_y * *(b + 134 * OS1_S1 + 33) -
                p_over_q * *(b + 184 * OS1_S1 + 33) +
                one_over_two_q * *(b + 134 * OS1_S1 + 19);
            *(b + 134 * OS1_S1 + 54) = prefactor_y * *(b + 134 * OS1_S1 + 34) -
                                       p_over_q * *(b + 184 * OS1_S1 + 34);
            *(b + 134 * OS1_S1 + 55) =
                prefactor_z * *(b + 134 * OS1_S1 + 34) -
                p_over_q * *(b + 185 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 134 * OS1_S1 + 19);
            *(b + 135 * OS1_S1 + 35) =
                prefactor_x * *(b + 135 * OS1_S1 + 20) -
                p_over_q * *(b + 180 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 10);
            *(b + 135 * OS1_S1 + 36) =
                prefactor_y * *(b + 135 * OS1_S1 + 20) -
                p_over_q * *(b + 186 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 20);
            *(b + 135 * OS1_S1 + 37) = prefactor_z * *(b + 135 * OS1_S1 + 20) -
                                       p_over_q * *(b + 187 * OS1_S1 + 20);
            *(b + 135 * OS1_S1 + 38) =
                prefactor_y * *(b + 135 * OS1_S1 + 21) -
                p_over_q * *(b + 186 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 21) +
                one_over_two_q * *(b + 135 * OS1_S1 + 10);
            *(b + 135 * OS1_S1 + 39) = prefactor_z * *(b + 135 * OS1_S1 + 21) -
                                       p_over_q * *(b + 187 * OS1_S1 + 21);
            *(b + 135 * OS1_S1 + 40) =
                prefactor_z * *(b + 135 * OS1_S1 + 22) -
                p_over_q * *(b + 187 * OS1_S1 + 22) +
                one_over_two_q * *(b + 135 * OS1_S1 + 10);
            *(b + 135 * OS1_S1 + 41) =
                prefactor_x * *(b + 135 * OS1_S1 + 26) -
                p_over_q * *(b + 180 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 26) +
                one_over_two_q * *(b + 135 * OS1_S1 + 16);
            *(b + 135 * OS1_S1 + 42) = prefactor_z * *(b + 135 * OS1_S1 + 23) -
                                       p_over_q * *(b + 187 * OS1_S1 + 23);
            *(b + 135 * OS1_S1 + 43) =
                prefactor_y * *(b + 135 * OS1_S1 + 25) -
                p_over_q * *(b + 186 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 25);
            *(b + 135 * OS1_S1 + 44) =
                prefactor_x * *(b + 135 * OS1_S1 + 29) -
                p_over_q * *(b + 180 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 29) +
                one_over_two_q * *(b + 135 * OS1_S1 + 19);
            *(b + 135 * OS1_S1 + 45) =
                prefactor_x * *(b + 135 * OS1_S1 + 30) -
                p_over_q * *(b + 180 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 30);
            *(b + 135 * OS1_S1 + 46) = prefactor_z * *(b + 135 * OS1_S1 + 26) -
                                       p_over_q * *(b + 187 * OS1_S1 + 26);
            *(b + 135 * OS1_S1 + 47) =
                prefactor_x * *(b + 135 * OS1_S1 + 32) -
                p_over_q * *(b + 180 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 32);
            *(b + 135 * OS1_S1 + 48) =
                prefactor_x * *(b + 135 * OS1_S1 + 33) -
                p_over_q * *(b + 180 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 33);
            *(b + 135 * OS1_S1 + 49) =
                prefactor_x * *(b + 135 * OS1_S1 + 34) -
                p_over_q * *(b + 180 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 34);
            *(b + 135 * OS1_S1 + 50) =
                prefactor_y * *(b + 135 * OS1_S1 + 30) -
                p_over_q * *(b + 186 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 16);
            *(b + 135 * OS1_S1 + 51) = prefactor_z * *(b + 135 * OS1_S1 + 30) -
                                       p_over_q * *(b + 187 * OS1_S1 + 30);
            *(b + 135 * OS1_S1 + 52) =
                prefactor_z * *(b + 135 * OS1_S1 + 31) -
                p_over_q * *(b + 187 * OS1_S1 + 31) +
                one_over_two_q * *(b + 135 * OS1_S1 + 16);
            *(b + 135 * OS1_S1 + 53) =
                prefactor_y * *(b + 135 * OS1_S1 + 33) -
                p_over_q * *(b + 186 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 33) +
                one_over_two_q * *(b + 135 * OS1_S1 + 19);
            *(b + 135 * OS1_S1 + 54) =
                prefactor_y * *(b + 135 * OS1_S1 + 34) -
                p_over_q * *(b + 186 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 34);
            *(b + 135 * OS1_S1 + 55) =
                prefactor_z * *(b + 135 * OS1_S1 + 34) -
                p_over_q * *(b + 187 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 19);
            *(b + 136 * OS1_S1 + 35) =
                prefactor_x * *(b + 136 * OS1_S1 + 20) -
                p_over_q * *(b + 181 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 10);
            *(b + 136 * OS1_S1 + 36) =
                prefactor_y * *(b + 136 * OS1_S1 + 20) -
                p_over_q * *(b + 187 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 20);
            *(b + 136 * OS1_S1 + 37) = prefactor_z * *(b + 136 * OS1_S1 + 20) -
                                       p_over_q * *(b + 188 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 20);
            *(b + 136 * OS1_S1 + 38) =
                prefactor_y * *(b + 136 * OS1_S1 + 21) -
                p_over_q * *(b + 187 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 21) +
                one_over_two_q * *(b + 136 * OS1_S1 + 10);
            *(b + 136 * OS1_S1 + 39) = prefactor_z * *(b + 136 * OS1_S1 + 21) -
                                       p_over_q * *(b + 188 * OS1_S1 + 21) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 21);
            *(b + 136 * OS1_S1 + 40) =
                prefactor_z * *(b + 136 * OS1_S1 + 22) -
                p_over_q * *(b + 188 * OS1_S1 + 22) +
                one_over_two_q * *(b + 94 * OS1_S1 + 22) +
                one_over_two_q * *(b + 136 * OS1_S1 + 10);
            *(b + 136 * OS1_S1 + 41) =
                prefactor_x * *(b + 136 * OS1_S1 + 26) -
                p_over_q * *(b + 181 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 26) +
                one_over_two_q * *(b + 136 * OS1_S1 + 16);
            *(b + 136 * OS1_S1 + 42) = prefactor_z * *(b + 136 * OS1_S1 + 23) -
                                       p_over_q * *(b + 188 * OS1_S1 + 23) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 23);
            *(b + 136 * OS1_S1 + 43) =
                prefactor_y * *(b + 136 * OS1_S1 + 25) -
                p_over_q * *(b + 187 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 25);
            *(b + 136 * OS1_S1 + 44) =
                prefactor_x * *(b + 136 * OS1_S1 + 29) -
                p_over_q * *(b + 181 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 29) +
                one_over_two_q * *(b + 136 * OS1_S1 + 19);
            *(b + 136 * OS1_S1 + 45) =
                prefactor_x * *(b + 136 * OS1_S1 + 30) -
                p_over_q * *(b + 181 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 30);
            *(b + 136 * OS1_S1 + 46) = prefactor_z * *(b + 136 * OS1_S1 + 26) -
                                       p_over_q * *(b + 188 * OS1_S1 + 26) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 26);
            *(b + 136 * OS1_S1 + 47) =
                prefactor_x * *(b + 136 * OS1_S1 + 32) -
                p_over_q * *(b + 181 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 32);
            *(b + 136 * OS1_S1 + 48) =
                prefactor_x * *(b + 136 * OS1_S1 + 33) -
                p_over_q * *(b + 181 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 33);
            *(b + 136 * OS1_S1 + 49) =
                prefactor_x * *(b + 136 * OS1_S1 + 34) -
                p_over_q * *(b + 181 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 34);
            *(b + 136 * OS1_S1 + 50) =
                prefactor_y * *(b + 136 * OS1_S1 + 30) -
                p_over_q * *(b + 187 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 16);
            *(b + 136 * OS1_S1 + 51) = prefactor_z * *(b + 136 * OS1_S1 + 30) -
                                       p_over_q * *(b + 188 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 30);
            *(b + 136 * OS1_S1 + 52) =
                prefactor_z * *(b + 136 * OS1_S1 + 31) -
                p_over_q * *(b + 188 * OS1_S1 + 31) +
                one_over_two_q * *(b + 94 * OS1_S1 + 31) +
                one_over_two_q * *(b + 136 * OS1_S1 + 16);
            *(b + 136 * OS1_S1 + 53) =
                prefactor_y * *(b + 136 * OS1_S1 + 33) -
                p_over_q * *(b + 187 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 33) +
                one_over_two_q * *(b + 136 * OS1_S1 + 19);
            *(b + 136 * OS1_S1 + 54) =
                prefactor_y * *(b + 136 * OS1_S1 + 34) -
                p_over_q * *(b + 187 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 34);
            *(b + 136 * OS1_S1 + 55) =
                prefactor_z * *(b + 136 * OS1_S1 + 34) -
                p_over_q * *(b + 188 * OS1_S1 + 34) +
                one_over_two_q * *(b + 94 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 19);
            *(b + 137 * OS1_S1 + 35) =
                prefactor_x * *(b + 137 * OS1_S1 + 20) -
                p_over_q * *(b + 182 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 10);
            *(b + 137 * OS1_S1 + 36) =
                prefactor_y * *(b + 137 * OS1_S1 + 20) -
                p_over_q * *(b + 188 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 20);
            *(b + 137 * OS1_S1 + 37) =
                prefactor_z * *(b + 137 * OS1_S1 + 20) -
                p_over_q * *(b + 189 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 20);
            *(b + 137 * OS1_S1 + 38) =
                prefactor_y * *(b + 137 * OS1_S1 + 21) -
                p_over_q * *(b + 188 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 21) +
                one_over_two_q * *(b + 137 * OS1_S1 + 10);
            *(b + 137 * OS1_S1 + 39) =
                prefactor_z * *(b + 137 * OS1_S1 + 21) -
                p_over_q * *(b + 189 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 21);
            *(b + 137 * OS1_S1 + 40) =
                prefactor_z * *(b + 137 * OS1_S1 + 22) -
                p_over_q * *(b + 189 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 22) +
                one_over_two_q * *(b + 137 * OS1_S1 + 10);
            *(b + 137 * OS1_S1 + 41) =
                prefactor_x * *(b + 137 * OS1_S1 + 26) -
                p_over_q * *(b + 182 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 26) +
                one_over_two_q * *(b + 137 * OS1_S1 + 16);
            *(b + 137 * OS1_S1 + 42) =
                prefactor_z * *(b + 137 * OS1_S1 + 23) -
                p_over_q * *(b + 189 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 23);
            *(b + 137 * OS1_S1 + 43) =
                prefactor_y * *(b + 137 * OS1_S1 + 25) -
                p_over_q * *(b + 188 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 25);
            *(b + 137 * OS1_S1 + 44) =
                prefactor_x * *(b + 137 * OS1_S1 + 29) -
                p_over_q * *(b + 182 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 29) +
                one_over_two_q * *(b + 137 * OS1_S1 + 19);
            *(b + 137 * OS1_S1 + 45) =
                prefactor_x * *(b + 137 * OS1_S1 + 30) -
                p_over_q * *(b + 182 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 30);
            *(b + 137 * OS1_S1 + 46) =
                prefactor_z * *(b + 137 * OS1_S1 + 26) -
                p_over_q * *(b + 189 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 26);
            *(b + 137 * OS1_S1 + 47) =
                prefactor_x * *(b + 137 * OS1_S1 + 32) -
                p_over_q * *(b + 182 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 32);
            *(b + 137 * OS1_S1 + 48) =
                prefactor_y * *(b + 137 * OS1_S1 + 29) -
                p_over_q * *(b + 188 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 29);
            *(b + 137 * OS1_S1 + 49) =
                prefactor_x * *(b + 137 * OS1_S1 + 34) -
                p_over_q * *(b + 182 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 34);
            *(b + 137 * OS1_S1 + 50) =
                prefactor_y * *(b + 137 * OS1_S1 + 30) -
                p_over_q * *(b + 188 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 16);
            *(b + 137 * OS1_S1 + 51) =
                prefactor_z * *(b + 137 * OS1_S1 + 30) -
                p_over_q * *(b + 189 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 30);
            *(b + 137 * OS1_S1 + 52) =
                prefactor_z * *(b + 137 * OS1_S1 + 31) -
                p_over_q * *(b + 189 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 31) +
                one_over_two_q * *(b + 137 * OS1_S1 + 16);
            *(b + 137 * OS1_S1 + 53) =
                prefactor_y * *(b + 137 * OS1_S1 + 33) -
                p_over_q * *(b + 188 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 33) +
                one_over_two_q * *(b + 137 * OS1_S1 + 19);
            *(b + 137 * OS1_S1 + 54) =
                prefactor_y * *(b + 137 * OS1_S1 + 34) -
                p_over_q * *(b + 188 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 34);
            *(b + 137 * OS1_S1 + 55) =
                prefactor_z * *(b + 137 * OS1_S1 + 34) -
                p_over_q * *(b + 189 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 19);
            *(b + 138 * OS1_S1 + 35) =
                prefactor_x * *(b + 138 * OS1_S1 + 20) -
                p_over_q * *(b + 183 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 10);
            *(b + 138 * OS1_S1 + 36) =
                prefactor_y * *(b + 138 * OS1_S1 + 20) -
                p_over_q * *(b + 189 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 20);
            *(b + 138 * OS1_S1 + 37) =
                prefactor_z * *(b + 138 * OS1_S1 + 20) -
                p_over_q * *(b + 190 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 20);
            *(b + 138 * OS1_S1 + 38) =
                prefactor_y * *(b + 138 * OS1_S1 + 21) -
                p_over_q * *(b + 189 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 21) +
                one_over_two_q * *(b + 138 * OS1_S1 + 10);
            *(b + 138 * OS1_S1 + 39) =
                prefactor_y * *(b + 138 * OS1_S1 + 22) -
                p_over_q * *(b + 189 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 22);
            *(b + 138 * OS1_S1 + 40) =
                prefactor_z * *(b + 138 * OS1_S1 + 22) -
                p_over_q * *(b + 190 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 22) +
                one_over_two_q * *(b + 138 * OS1_S1 + 10);
            *(b + 138 * OS1_S1 + 41) =
                prefactor_x * *(b + 138 * OS1_S1 + 26) -
                p_over_q * *(b + 183 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 26) +
                one_over_two_q * *(b + 138 * OS1_S1 + 16);
            *(b + 138 * OS1_S1 + 42) =
                prefactor_z * *(b + 138 * OS1_S1 + 23) -
                p_over_q * *(b + 190 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 23);
            *(b + 138 * OS1_S1 + 43) =
                prefactor_y * *(b + 138 * OS1_S1 + 25) -
                p_over_q * *(b + 189 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 25);
            *(b + 138 * OS1_S1 + 44) =
                prefactor_x * *(b + 138 * OS1_S1 + 29) -
                p_over_q * *(b + 183 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 29) +
                one_over_two_q * *(b + 138 * OS1_S1 + 19);
            *(b + 138 * OS1_S1 + 45) =
                prefactor_x * *(b + 138 * OS1_S1 + 30) -
                p_over_q * *(b + 183 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 30);
            *(b + 138 * OS1_S1 + 46) =
                prefactor_z * *(b + 138 * OS1_S1 + 26) -
                p_over_q * *(b + 190 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 26);
            *(b + 138 * OS1_S1 + 47) =
                prefactor_x * *(b + 138 * OS1_S1 + 32) -
                p_over_q * *(b + 183 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 32);
            *(b + 138 * OS1_S1 + 48) =
                prefactor_y * *(b + 138 * OS1_S1 + 29) -
                p_over_q * *(b + 189 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 29);
            *(b + 138 * OS1_S1 + 49) =
                prefactor_x * *(b + 138 * OS1_S1 + 34) -
                p_over_q * *(b + 183 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 34);
            *(b + 138 * OS1_S1 + 50) =
                prefactor_y * *(b + 138 * OS1_S1 + 30) -
                p_over_q * *(b + 189 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 16);
            *(b + 138 * OS1_S1 + 51) =
                prefactor_z * *(b + 138 * OS1_S1 + 30) -
                p_over_q * *(b + 190 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 30);
            *(b + 138 * OS1_S1 + 52) =
                prefactor_z * *(b + 138 * OS1_S1 + 31) -
                p_over_q * *(b + 190 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 31) +
                one_over_two_q * *(b + 138 * OS1_S1 + 16);
            *(b + 138 * OS1_S1 + 53) =
                prefactor_y * *(b + 138 * OS1_S1 + 33) -
                p_over_q * *(b + 189 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 33) +
                one_over_two_q * *(b + 138 * OS1_S1 + 19);
            *(b + 138 * OS1_S1 + 54) =
                prefactor_y * *(b + 138 * OS1_S1 + 34) -
                p_over_q * *(b + 189 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 34);
            *(b + 138 * OS1_S1 + 55) =
                prefactor_z * *(b + 138 * OS1_S1 + 34) -
                p_over_q * *(b + 190 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 19);
            *(b + 139 * OS1_S1 + 35) =
                prefactor_x * *(b + 139 * OS1_S1 + 20) -
                p_over_q * *(b + 184 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 10);
            *(b + 139 * OS1_S1 + 36) = prefactor_y * *(b + 139 * OS1_S1 + 20) -
                                       p_over_q * *(b + 190 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 20);
            *(b + 139 * OS1_S1 + 37) =
                prefactor_z * *(b + 139 * OS1_S1 + 20) -
                p_over_q * *(b + 191 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 20);
            *(b + 139 * OS1_S1 + 38) =
                prefactor_y * *(b + 139 * OS1_S1 + 21) -
                p_over_q * *(b + 190 * OS1_S1 + 21) +
                one_over_two_q * *(b + 98 * OS1_S1 + 21) +
                one_over_two_q * *(b + 139 * OS1_S1 + 10);
            *(b + 139 * OS1_S1 + 39) = prefactor_y * *(b + 139 * OS1_S1 + 22) -
                                       p_over_q * *(b + 190 * OS1_S1 + 22) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 22);
            *(b + 139 * OS1_S1 + 40) =
                prefactor_z * *(b + 139 * OS1_S1 + 22) -
                p_over_q * *(b + 191 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 22) +
                one_over_two_q * *(b + 139 * OS1_S1 + 10);
            *(b + 139 * OS1_S1 + 41) =
                prefactor_x * *(b + 139 * OS1_S1 + 26) -
                p_over_q * *(b + 184 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 26) +
                one_over_two_q * *(b + 139 * OS1_S1 + 16);
            *(b + 139 * OS1_S1 + 42) =
                prefactor_z * *(b + 139 * OS1_S1 + 23) -
                p_over_q * *(b + 191 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 23);
            *(b + 139 * OS1_S1 + 43) = prefactor_y * *(b + 139 * OS1_S1 + 25) -
                                       p_over_q * *(b + 190 * OS1_S1 + 25) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 25);
            *(b + 139 * OS1_S1 + 44) =
                prefactor_x * *(b + 139 * OS1_S1 + 29) -
                p_over_q * *(b + 184 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 29) +
                one_over_two_q * *(b + 139 * OS1_S1 + 19);
            *(b + 139 * OS1_S1 + 45) =
                prefactor_x * *(b + 139 * OS1_S1 + 30) -
                p_over_q * *(b + 184 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 30);
            *(b + 139 * OS1_S1 + 46) =
                prefactor_x * *(b + 139 * OS1_S1 + 31) -
                p_over_q * *(b + 184 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 31);
            *(b + 139 * OS1_S1 + 47) =
                prefactor_x * *(b + 139 * OS1_S1 + 32) -
                p_over_q * *(b + 184 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 32);
            *(b + 139 * OS1_S1 + 48) = prefactor_y * *(b + 139 * OS1_S1 + 29) -
                                       p_over_q * *(b + 190 * OS1_S1 + 29) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 29);
            *(b + 139 * OS1_S1 + 49) =
                prefactor_x * *(b + 139 * OS1_S1 + 34) -
                p_over_q * *(b + 184 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 34);
            *(b + 139 * OS1_S1 + 50) =
                prefactor_y * *(b + 139 * OS1_S1 + 30) -
                p_over_q * *(b + 190 * OS1_S1 + 30) +
                one_over_two_q * *(b + 98 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 16);
            *(b + 139 * OS1_S1 + 51) =
                prefactor_z * *(b + 139 * OS1_S1 + 30) -
                p_over_q * *(b + 191 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 30);
            *(b + 139 * OS1_S1 + 52) =
                prefactor_z * *(b + 139 * OS1_S1 + 31) -
                p_over_q * *(b + 191 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 31) +
                one_over_two_q * *(b + 139 * OS1_S1 + 16);
            *(b + 139 * OS1_S1 + 53) =
                prefactor_y * *(b + 139 * OS1_S1 + 33) -
                p_over_q * *(b + 190 * OS1_S1 + 33) +
                one_over_two_q * *(b + 98 * OS1_S1 + 33) +
                one_over_two_q * *(b + 139 * OS1_S1 + 19);
            *(b + 139 * OS1_S1 + 54) = prefactor_y * *(b + 139 * OS1_S1 + 34) -
                                       p_over_q * *(b + 190 * OS1_S1 + 34) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 34);
            *(b + 139 * OS1_S1 + 55) =
                prefactor_z * *(b + 139 * OS1_S1 + 34) -
                p_over_q * *(b + 191 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 19);
            *(b + 140 * OS1_S1 + 35) =
                prefactor_x * *(b + 140 * OS1_S1 + 20) -
                p_over_q * *(b + 185 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 10);
            *(b + 140 * OS1_S1 + 36) = prefactor_y * *(b + 140 * OS1_S1 + 20) -
                                       p_over_q * *(b + 191 * OS1_S1 + 20);
            *(b + 140 * OS1_S1 + 37) =
                prefactor_z * *(b + 140 * OS1_S1 + 20) -
                p_over_q * *(b + 192 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 20);
            *(b + 140 * OS1_S1 + 38) =
                prefactor_y * *(b + 140 * OS1_S1 + 21) -
                p_over_q * *(b + 191 * OS1_S1 + 21) +
                one_over_two_q * *(b + 140 * OS1_S1 + 10);
            *(b + 140 * OS1_S1 + 39) = prefactor_y * *(b + 140 * OS1_S1 + 22) -
                                       p_over_q * *(b + 191 * OS1_S1 + 22);
            *(b + 140 * OS1_S1 + 40) =
                prefactor_z * *(b + 140 * OS1_S1 + 22) -
                p_over_q * *(b + 192 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 22) +
                one_over_two_q * *(b + 140 * OS1_S1 + 10);
            *(b + 140 * OS1_S1 + 41) =
                prefactor_x * *(b + 140 * OS1_S1 + 26) -
                p_over_q * *(b + 185 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 26) +
                one_over_two_q * *(b + 140 * OS1_S1 + 16);
            *(b + 140 * OS1_S1 + 42) =
                prefactor_z * *(b + 140 * OS1_S1 + 23) -
                p_over_q * *(b + 192 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 23);
            *(b + 140 * OS1_S1 + 43) = prefactor_y * *(b + 140 * OS1_S1 + 25) -
                                       p_over_q * *(b + 191 * OS1_S1 + 25);
            *(b + 140 * OS1_S1 + 44) =
                prefactor_x * *(b + 140 * OS1_S1 + 29) -
                p_over_q * *(b + 185 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 29) +
                one_over_two_q * *(b + 140 * OS1_S1 + 19);
            *(b + 140 * OS1_S1 + 45) =
                prefactor_x * *(b + 140 * OS1_S1 + 30) -
                p_over_q * *(b + 185 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 30);
            *(b + 140 * OS1_S1 + 46) =
                prefactor_x * *(b + 140 * OS1_S1 + 31) -
                p_over_q * *(b + 185 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 31);
            *(b + 140 * OS1_S1 + 47) =
                prefactor_x * *(b + 140 * OS1_S1 + 32) -
                p_over_q * *(b + 185 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 32);
            *(b + 140 * OS1_S1 + 48) = prefactor_y * *(b + 140 * OS1_S1 + 29) -
                                       p_over_q * *(b + 191 * OS1_S1 + 29);
            *(b + 140 * OS1_S1 + 49) =
                prefactor_x * *(b + 140 * OS1_S1 + 34) -
                p_over_q * *(b + 185 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 34);
            *(b + 140 * OS1_S1 + 50) =
                prefactor_y * *(b + 140 * OS1_S1 + 30) -
                p_over_q * *(b + 191 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 16);
            *(b + 140 * OS1_S1 + 51) =
                prefactor_z * *(b + 140 * OS1_S1 + 30) -
                p_over_q * *(b + 192 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 30);
            *(b + 140 * OS1_S1 + 52) =
                prefactor_z * *(b + 140 * OS1_S1 + 31) -
                p_over_q * *(b + 192 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 31) +
                one_over_two_q * *(b + 140 * OS1_S1 + 16);
            *(b + 140 * OS1_S1 + 53) =
                prefactor_y * *(b + 140 * OS1_S1 + 33) -
                p_over_q * *(b + 191 * OS1_S1 + 33) +
                one_over_two_q * *(b + 140 * OS1_S1 + 19);
            *(b + 140 * OS1_S1 + 54) = prefactor_y * *(b + 140 * OS1_S1 + 34) -
                                       p_over_q * *(b + 191 * OS1_S1 + 34);
            *(b + 140 * OS1_S1 + 55) =
                prefactor_z * *(b + 140 * OS1_S1 + 34) -
                p_over_q * *(b + 192 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 19);
            *(b + 141 * OS1_S1 + 35) =
                prefactor_x * *(b + 141 * OS1_S1 + 20) -
                p_over_q * *(b + 186 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 141 * OS1_S1 + 10);
            *(b + 141 * OS1_S1 + 36) =
                prefactor_y * *(b + 141 * OS1_S1 + 20) -
                p_over_q * *(b + 193 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 20);
            *(b + 141 * OS1_S1 + 37) = prefactor_z * *(b + 141 * OS1_S1 + 20) -
                                       p_over_q * *(b + 194 * OS1_S1 + 20);
            *(b + 141 * OS1_S1 + 38) =
                prefactor_y * *(b + 141 * OS1_S1 + 21) -
                p_over_q * *(b + 193 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 21) +
                one_over_two_q * *(b + 141 * OS1_S1 + 10);
            *(b + 141 * OS1_S1 + 39) = prefactor_z * *(b + 141 * OS1_S1 + 21) -
                                       p_over_q * *(b + 194 * OS1_S1 + 21);
            *(b + 141 * OS1_S1 + 40) =
                prefactor_z * *(b + 141 * OS1_S1 + 22) -
                p_over_q * *(b + 194 * OS1_S1 + 22) +
                one_over_two_q * *(b + 141 * OS1_S1 + 10);
            *(b + 141 * OS1_S1 + 41) =
                prefactor_x * *(b + 141 * OS1_S1 + 26) -
                p_over_q * *(b + 186 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 26) +
                one_over_two_q * *(b + 141 * OS1_S1 + 16);
            *(b + 141 * OS1_S1 + 42) = prefactor_z * *(b + 141 * OS1_S1 + 23) -
                                       p_over_q * *(b + 194 * OS1_S1 + 23);
            *(b + 141 * OS1_S1 + 43) =
                prefactor_y * *(b + 141 * OS1_S1 + 25) -
                p_over_q * *(b + 193 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 25);
            *(b + 141 * OS1_S1 + 44) =
                prefactor_x * *(b + 141 * OS1_S1 + 29) -
                p_over_q * *(b + 186 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 29) +
                one_over_two_q * *(b + 141 * OS1_S1 + 19);
            *(b + 141 * OS1_S1 + 45) =
                prefactor_x * *(b + 141 * OS1_S1 + 30) -
                p_over_q * *(b + 186 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 30);
            *(b + 141 * OS1_S1 + 46) = prefactor_z * *(b + 141 * OS1_S1 + 26) -
                                       p_over_q * *(b + 194 * OS1_S1 + 26);
            *(b + 141 * OS1_S1 + 47) =
                prefactor_x * *(b + 141 * OS1_S1 + 32) -
                p_over_q * *(b + 186 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 32);
            *(b + 141 * OS1_S1 + 48) =
                prefactor_x * *(b + 141 * OS1_S1 + 33) -
                p_over_q * *(b + 186 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 33);
            *(b + 141 * OS1_S1 + 49) =
                prefactor_x * *(b + 141 * OS1_S1 + 34) -
                p_over_q * *(b + 186 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 34);
            *(b + 141 * OS1_S1 + 50) =
                prefactor_y * *(b + 141 * OS1_S1 + 30) -
                p_over_q * *(b + 193 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 141 * OS1_S1 + 16);
            *(b + 141 * OS1_S1 + 51) = prefactor_z * *(b + 141 * OS1_S1 + 30) -
                                       p_over_q * *(b + 194 * OS1_S1 + 30);
            *(b + 141 * OS1_S1 + 52) =
                prefactor_z * *(b + 141 * OS1_S1 + 31) -
                p_over_q * *(b + 194 * OS1_S1 + 31) +
                one_over_two_q * *(b + 141 * OS1_S1 + 16);
            *(b + 141 * OS1_S1 + 53) =
                prefactor_y * *(b + 141 * OS1_S1 + 33) -
                p_over_q * *(b + 193 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 33) +
                one_over_two_q * *(b + 141 * OS1_S1 + 19);
            *(b + 141 * OS1_S1 + 54) =
                prefactor_y * *(b + 141 * OS1_S1 + 34) -
                p_over_q * *(b + 193 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 34);
            *(b + 141 * OS1_S1 + 55) =
                prefactor_z * *(b + 141 * OS1_S1 + 34) -
                p_over_q * *(b + 194 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 141 * OS1_S1 + 19);
            *(b + 142 * OS1_S1 + 35) =
                prefactor_x * *(b + 142 * OS1_S1 + 20) -
                p_over_q * *(b + 187 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 142 * OS1_S1 + 10);
            *(b + 142 * OS1_S1 + 36) =
                prefactor_y * *(b + 142 * OS1_S1 + 20) -
                p_over_q * *(b + 194 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 20);
            *(b + 142 * OS1_S1 + 37) = prefactor_z * *(b + 142 * OS1_S1 + 20) -
                                       p_over_q * *(b + 195 * OS1_S1 + 20) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 20);
            *(b + 142 * OS1_S1 + 38) =
                prefactor_y * *(b + 142 * OS1_S1 + 21) -
                p_over_q * *(b + 194 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 21) +
                one_over_two_q * *(b + 142 * OS1_S1 + 10);
            *(b + 142 * OS1_S1 + 39) = prefactor_z * *(b + 142 * OS1_S1 + 21) -
                                       p_over_q * *(b + 195 * OS1_S1 + 21) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 21);
            *(b + 142 * OS1_S1 + 40) =
                prefactor_z * *(b + 142 * OS1_S1 + 22) -
                p_over_q * *(b + 195 * OS1_S1 + 22) +
                one_over_two_q * *(b + 99 * OS1_S1 + 22) +
                one_over_two_q * *(b + 142 * OS1_S1 + 10);
            *(b + 142 * OS1_S1 + 41) =
                prefactor_x * *(b + 142 * OS1_S1 + 26) -
                p_over_q * *(b + 187 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 26) +
                one_over_two_q * *(b + 142 * OS1_S1 + 16);
            *(b + 142 * OS1_S1 + 42) = prefactor_z * *(b + 142 * OS1_S1 + 23) -
                                       p_over_q * *(b + 195 * OS1_S1 + 23) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 23);
            *(b + 142 * OS1_S1 + 43) =
                prefactor_y * *(b + 142 * OS1_S1 + 25) -
                p_over_q * *(b + 194 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 25);
            *(b + 142 * OS1_S1 + 44) =
                prefactor_x * *(b + 142 * OS1_S1 + 29) -
                p_over_q * *(b + 187 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 29) +
                one_over_two_q * *(b + 142 * OS1_S1 + 19);
            *(b + 142 * OS1_S1 + 45) =
                prefactor_x * *(b + 142 * OS1_S1 + 30) -
                p_over_q * *(b + 187 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 30);
            *(b + 142 * OS1_S1 + 46) = prefactor_z * *(b + 142 * OS1_S1 + 26) -
                                       p_over_q * *(b + 195 * OS1_S1 + 26) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 26);
            *(b + 142 * OS1_S1 + 47) =
                prefactor_x * *(b + 142 * OS1_S1 + 32) -
                p_over_q * *(b + 187 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 32);
            *(b + 142 * OS1_S1 + 48) =
                prefactor_x * *(b + 142 * OS1_S1 + 33) -
                p_over_q * *(b + 187 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 33);
            *(b + 142 * OS1_S1 + 49) =
                prefactor_x * *(b + 142 * OS1_S1 + 34) -
                p_over_q * *(b + 187 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 34);
            *(b + 142 * OS1_S1 + 50) =
                prefactor_y * *(b + 142 * OS1_S1 + 30) -
                p_over_q * *(b + 194 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 142 * OS1_S1 + 16);
            *(b + 142 * OS1_S1 + 51) = prefactor_z * *(b + 142 * OS1_S1 + 30) -
                                       p_over_q * *(b + 195 * OS1_S1 + 30) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 30);
            *(b + 142 * OS1_S1 + 52) =
                prefactor_z * *(b + 142 * OS1_S1 + 31) -
                p_over_q * *(b + 195 * OS1_S1 + 31) +
                one_over_two_q * *(b + 99 * OS1_S1 + 31) +
                one_over_two_q * *(b + 142 * OS1_S1 + 16);
            *(b + 142 * OS1_S1 + 53) =
                prefactor_y * *(b + 142 * OS1_S1 + 33) -
                p_over_q * *(b + 194 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 33) +
                one_over_two_q * *(b + 142 * OS1_S1 + 19);
            *(b + 142 * OS1_S1 + 54) =
                prefactor_y * *(b + 142 * OS1_S1 + 34) -
                p_over_q * *(b + 194 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 34);
            *(b + 142 * OS1_S1 + 55) =
                prefactor_z * *(b + 142 * OS1_S1 + 34) -
                p_over_q * *(b + 195 * OS1_S1 + 34) +
                one_over_two_q * *(b + 99 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 142 * OS1_S1 + 19);
            *(b + 143 * OS1_S1 + 35) =
                prefactor_x * *(b + 143 * OS1_S1 + 20) -
                p_over_q * *(b + 188 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 143 * OS1_S1 + 10);
            *(b + 143 * OS1_S1 + 36) =
                prefactor_y * *(b + 143 * OS1_S1 + 20) -
                p_over_q * *(b + 195 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 20);
            *(b + 143 * OS1_S1 + 37) =
                prefactor_z * *(b + 143 * OS1_S1 + 20) -
                p_over_q * *(b + 196 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 20);
            *(b + 143 * OS1_S1 + 38) =
                prefactor_y * *(b + 143 * OS1_S1 + 21) -
                p_over_q * *(b + 195 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 21) +
                one_over_two_q * *(b + 143 * OS1_S1 + 10);
            *(b + 143 * OS1_S1 + 39) =
                prefactor_z * *(b + 143 * OS1_S1 + 21) -
                p_over_q * *(b + 196 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 21);
            *(b + 143 * OS1_S1 + 40) =
                prefactor_z * *(b + 143 * OS1_S1 + 22) -
                p_over_q * *(b + 196 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 22) +
                one_over_two_q * *(b + 143 * OS1_S1 + 10);
            *(b + 143 * OS1_S1 + 41) =
                prefactor_x * *(b + 143 * OS1_S1 + 26) -
                p_over_q * *(b + 188 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 26) +
                one_over_two_q * *(b + 143 * OS1_S1 + 16);
            *(b + 143 * OS1_S1 + 42) =
                prefactor_z * *(b + 143 * OS1_S1 + 23) -
                p_over_q * *(b + 196 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 23);
            *(b + 143 * OS1_S1 + 43) =
                prefactor_y * *(b + 143 * OS1_S1 + 25) -
                p_over_q * *(b + 195 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 25);
            *(b + 143 * OS1_S1 + 44) =
                prefactor_x * *(b + 143 * OS1_S1 + 29) -
                p_over_q * *(b + 188 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 29) +
                one_over_two_q * *(b + 143 * OS1_S1 + 19);
            *(b + 143 * OS1_S1 + 45) =
                prefactor_x * *(b + 143 * OS1_S1 + 30) -
                p_over_q * *(b + 188 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 30);
            *(b + 143 * OS1_S1 + 46) =
                prefactor_z * *(b + 143 * OS1_S1 + 26) -
                p_over_q * *(b + 196 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 26);
            *(b + 143 * OS1_S1 + 47) =
                prefactor_x * *(b + 143 * OS1_S1 + 32) -
                p_over_q * *(b + 188 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 32);
            *(b + 143 * OS1_S1 + 48) =
                prefactor_x * *(b + 143 * OS1_S1 + 33) -
                p_over_q * *(b + 188 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 33);
            *(b + 143 * OS1_S1 + 49) =
                prefactor_x * *(b + 143 * OS1_S1 + 34) -
                p_over_q * *(b + 188 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 34);
            *(b + 143 * OS1_S1 + 50) =
                prefactor_y * *(b + 143 * OS1_S1 + 30) -
                p_over_q * *(b + 195 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 143 * OS1_S1 + 16);
            *(b + 143 * OS1_S1 + 51) =
                prefactor_z * *(b + 143 * OS1_S1 + 30) -
                p_over_q * *(b + 196 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 30);
            *(b + 143 * OS1_S1 + 52) =
                prefactor_z * *(b + 143 * OS1_S1 + 31) -
                p_over_q * *(b + 196 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 31) +
                one_over_two_q * *(b + 143 * OS1_S1 + 16);
            *(b + 143 * OS1_S1 + 53) =
                prefactor_y * *(b + 143 * OS1_S1 + 33) -
                p_over_q * *(b + 195 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 33) +
                one_over_two_q * *(b + 143 * OS1_S1 + 19);
            *(b + 143 * OS1_S1 + 54) =
                prefactor_y * *(b + 143 * OS1_S1 + 34) -
                p_over_q * *(b + 195 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 34);
            *(b + 143 * OS1_S1 + 55) =
                prefactor_z * *(b + 143 * OS1_S1 + 34) -
                p_over_q * *(b + 196 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 143 * OS1_S1 + 19);
            *(b + 144 * OS1_S1 + 35) =
                prefactor_x * *(b + 144 * OS1_S1 + 20) -
                p_over_q * *(b + 189 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 10);
            *(b + 144 * OS1_S1 + 36) =
                prefactor_y * *(b + 144 * OS1_S1 + 20) -
                p_over_q * *(b + 196 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 20);
            *(b + 144 * OS1_S1 + 37) =
                prefactor_z * *(b + 144 * OS1_S1 + 20) -
                p_over_q * *(b + 197 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 20);
            *(b + 144 * OS1_S1 + 38) =
                prefactor_y * *(b + 144 * OS1_S1 + 21) -
                p_over_q * *(b + 196 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 21) +
                one_over_two_q * *(b + 144 * OS1_S1 + 10);
            *(b + 144 * OS1_S1 + 39) =
                prefactor_z * *(b + 144 * OS1_S1 + 21) -
                p_over_q * *(b + 197 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 21);
            *(b + 144 * OS1_S1 + 40) =
                prefactor_z * *(b + 144 * OS1_S1 + 22) -
                p_over_q * *(b + 197 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 22) +
                one_over_two_q * *(b + 144 * OS1_S1 + 10);
            *(b + 144 * OS1_S1 + 41) =
                prefactor_x * *(b + 144 * OS1_S1 + 26) -
                p_over_q * *(b + 189 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 26) +
                one_over_two_q * *(b + 144 * OS1_S1 + 16);
            *(b + 144 * OS1_S1 + 42) =
                prefactor_z * *(b + 144 * OS1_S1 + 23) -
                p_over_q * *(b + 197 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 23);
            *(b + 144 * OS1_S1 + 43) =
                prefactor_y * *(b + 144 * OS1_S1 + 25) -
                p_over_q * *(b + 196 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 25);
            *(b + 144 * OS1_S1 + 44) =
                prefactor_x * *(b + 144 * OS1_S1 + 29) -
                p_over_q * *(b + 189 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 29) +
                one_over_two_q * *(b + 144 * OS1_S1 + 19);
            *(b + 144 * OS1_S1 + 45) =
                prefactor_x * *(b + 144 * OS1_S1 + 30) -
                p_over_q * *(b + 189 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 30);
            *(b + 144 * OS1_S1 + 46) =
                prefactor_x * *(b + 144 * OS1_S1 + 31) -
                p_over_q * *(b + 189 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 31);
            *(b + 144 * OS1_S1 + 47) =
                prefactor_x * *(b + 144 * OS1_S1 + 32) -
                p_over_q * *(b + 189 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 32);
            *(b + 144 * OS1_S1 + 48) =
                prefactor_x * *(b + 144 * OS1_S1 + 33) -
                p_over_q * *(b + 189 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 33);
            *(b + 144 * OS1_S1 + 49) =
                prefactor_x * *(b + 144 * OS1_S1 + 34) -
                p_over_q * *(b + 189 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 34);
            *(b + 144 * OS1_S1 + 50) =
                prefactor_y * *(b + 144 * OS1_S1 + 30) -
                p_over_q * *(b + 196 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 16);
            *(b + 144 * OS1_S1 + 51) =
                prefactor_z * *(b + 144 * OS1_S1 + 30) -
                p_over_q * *(b + 197 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 30);
            *(b + 144 * OS1_S1 + 52) =
                prefactor_z * *(b + 144 * OS1_S1 + 31) -
                p_over_q * *(b + 197 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 31) +
                one_over_two_q * *(b + 144 * OS1_S1 + 16);
            *(b + 144 * OS1_S1 + 53) =
                prefactor_y * *(b + 144 * OS1_S1 + 33) -
                p_over_q * *(b + 196 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 33) +
                one_over_two_q * *(b + 144 * OS1_S1 + 19);
            *(b + 144 * OS1_S1 + 54) =
                prefactor_y * *(b + 144 * OS1_S1 + 34) -
                p_over_q * *(b + 196 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 34);
            *(b + 144 * OS1_S1 + 55) =
                prefactor_z * *(b + 144 * OS1_S1 + 34) -
                p_over_q * *(b + 197 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 19);
            *(b + 145 * OS1_S1 + 35) =
                prefactor_x * *(b + 145 * OS1_S1 + 20) -
                p_over_q * *(b + 190 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 145 * OS1_S1 + 10);
            *(b + 145 * OS1_S1 + 36) =
                prefactor_y * *(b + 145 * OS1_S1 + 20) -
                p_over_q * *(b + 197 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 20);
            *(b + 145 * OS1_S1 + 37) =
                prefactor_z * *(b + 145 * OS1_S1 + 20) -
                p_over_q * *(b + 198 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 20);
            *(b + 145 * OS1_S1 + 38) =
                prefactor_y * *(b + 145 * OS1_S1 + 21) -
                p_over_q * *(b + 197 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 21) +
                one_over_two_q * *(b + 145 * OS1_S1 + 10);
            *(b + 145 * OS1_S1 + 39) =
                prefactor_y * *(b + 145 * OS1_S1 + 22) -
                p_over_q * *(b + 197 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 22);
            *(b + 145 * OS1_S1 + 40) =
                prefactor_z * *(b + 145 * OS1_S1 + 22) -
                p_over_q * *(b + 198 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 22) +
                one_over_two_q * *(b + 145 * OS1_S1 + 10);
            *(b + 145 * OS1_S1 + 41) =
                prefactor_x * *(b + 145 * OS1_S1 + 26) -
                p_over_q * *(b + 190 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 26) +
                one_over_two_q * *(b + 145 * OS1_S1 + 16);
            *(b + 145 * OS1_S1 + 42) =
                prefactor_z * *(b + 145 * OS1_S1 + 23) -
                p_over_q * *(b + 198 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 23);
            *(b + 145 * OS1_S1 + 43) =
                prefactor_y * *(b + 145 * OS1_S1 + 25) -
                p_over_q * *(b + 197 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 25);
            *(b + 145 * OS1_S1 + 44) =
                prefactor_x * *(b + 145 * OS1_S1 + 29) -
                p_over_q * *(b + 190 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 29) +
                one_over_two_q * *(b + 145 * OS1_S1 + 19);
            *(b + 145 * OS1_S1 + 45) =
                prefactor_x * *(b + 145 * OS1_S1 + 30) -
                p_over_q * *(b + 190 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 30);
            *(b + 145 * OS1_S1 + 46) =
                prefactor_x * *(b + 145 * OS1_S1 + 31) -
                p_over_q * *(b + 190 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 31);
            *(b + 145 * OS1_S1 + 47) =
                prefactor_x * *(b + 145 * OS1_S1 + 32) -
                p_over_q * *(b + 190 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 32);
            *(b + 145 * OS1_S1 + 48) =
                prefactor_y * *(b + 145 * OS1_S1 + 29) -
                p_over_q * *(b + 197 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 29);
            *(b + 145 * OS1_S1 + 49) =
                prefactor_x * *(b + 145 * OS1_S1 + 34) -
                p_over_q * *(b + 190 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 34);
            *(b + 145 * OS1_S1 + 50) =
                prefactor_y * *(b + 145 * OS1_S1 + 30) -
                p_over_q * *(b + 197 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 145 * OS1_S1 + 16);
            *(b + 145 * OS1_S1 + 51) =
                prefactor_z * *(b + 145 * OS1_S1 + 30) -
                p_over_q * *(b + 198 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 30);
            *(b + 145 * OS1_S1 + 52) =
                prefactor_z * *(b + 145 * OS1_S1 + 31) -
                p_over_q * *(b + 198 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 31) +
                one_over_two_q * *(b + 145 * OS1_S1 + 16);
            *(b + 145 * OS1_S1 + 53) =
                prefactor_y * *(b + 145 * OS1_S1 + 33) -
                p_over_q * *(b + 197 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 33) +
                one_over_two_q * *(b + 145 * OS1_S1 + 19);
            *(b + 145 * OS1_S1 + 54) =
                prefactor_y * *(b + 145 * OS1_S1 + 34) -
                p_over_q * *(b + 197 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 34);
            *(b + 145 * OS1_S1 + 55) =
                prefactor_z * *(b + 145 * OS1_S1 + 34) -
                p_over_q * *(b + 198 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 145 * OS1_S1 + 19);
            *(b + 146 * OS1_S1 + 35) =
                prefactor_x * *(b + 146 * OS1_S1 + 20) -
                p_over_q * *(b + 191 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 146 * OS1_S1 + 10);
            *(b + 146 * OS1_S1 + 36) =
                prefactor_y * *(b + 146 * OS1_S1 + 20) -
                p_over_q * *(b + 198 * OS1_S1 + 20) +
                one_over_two_q * *(b + 104 * OS1_S1 + 20);
            *(b + 146 * OS1_S1 + 37) =
                prefactor_z * *(b + 146 * OS1_S1 + 20) -
                p_over_q * *(b + 199 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 20);
            *(b + 146 * OS1_S1 + 38) =
                prefactor_y * *(b + 146 * OS1_S1 + 21) -
                p_over_q * *(b + 198 * OS1_S1 + 21) +
                one_over_two_q * *(b + 104 * OS1_S1 + 21) +
                one_over_two_q * *(b + 146 * OS1_S1 + 10);
            *(b + 146 * OS1_S1 + 39) =
                prefactor_y * *(b + 146 * OS1_S1 + 22) -
                p_over_q * *(b + 198 * OS1_S1 + 22) +
                one_over_two_q * *(b + 104 * OS1_S1 + 22);
            *(b + 146 * OS1_S1 + 40) =
                prefactor_z * *(b + 146 * OS1_S1 + 22) -
                p_over_q * *(b + 199 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 22) +
                one_over_two_q * *(b + 146 * OS1_S1 + 10);
            *(b + 146 * OS1_S1 + 41) =
                prefactor_x * *(b + 146 * OS1_S1 + 26) -
                p_over_q * *(b + 191 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 26) +
                one_over_two_q * *(b + 146 * OS1_S1 + 16);
            *(b + 146 * OS1_S1 + 42) =
                prefactor_z * *(b + 146 * OS1_S1 + 23) -
                p_over_q * *(b + 199 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 23);
            *(b + 146 * OS1_S1 + 43) =
                prefactor_y * *(b + 146 * OS1_S1 + 25) -
                p_over_q * *(b + 198 * OS1_S1 + 25) +
                one_over_two_q * *(b + 104 * OS1_S1 + 25);
            *(b + 146 * OS1_S1 + 44) =
                prefactor_x * *(b + 146 * OS1_S1 + 29) -
                p_over_q * *(b + 191 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 29) +
                one_over_two_q * *(b + 146 * OS1_S1 + 19);
            *(b + 146 * OS1_S1 + 45) =
                prefactor_x * *(b + 146 * OS1_S1 + 30) -
                p_over_q * *(b + 191 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 30);
            *(b + 146 * OS1_S1 + 46) =
                prefactor_x * *(b + 146 * OS1_S1 + 31) -
                p_over_q * *(b + 191 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 31);
            *(b + 146 * OS1_S1 + 47) =
                prefactor_x * *(b + 146 * OS1_S1 + 32) -
                p_over_q * *(b + 191 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 32);
            *(b + 146 * OS1_S1 + 48) =
                prefactor_y * *(b + 146 * OS1_S1 + 29) -
                p_over_q * *(b + 198 * OS1_S1 + 29) +
                one_over_two_q * *(b + 104 * OS1_S1 + 29);
            *(b + 146 * OS1_S1 + 49) =
                prefactor_x * *(b + 146 * OS1_S1 + 34) -
                p_over_q * *(b + 191 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 34);
            *(b + 146 * OS1_S1 + 50) =
                prefactor_y * *(b + 146 * OS1_S1 + 30) -
                p_over_q * *(b + 198 * OS1_S1 + 30) +
                one_over_two_q * *(b + 104 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 146 * OS1_S1 + 16);
            *(b + 146 * OS1_S1 + 51) =
                prefactor_z * *(b + 146 * OS1_S1 + 30) -
                p_over_q * *(b + 199 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 30);
            *(b + 146 * OS1_S1 + 52) =
                prefactor_z * *(b + 146 * OS1_S1 + 31) -
                p_over_q * *(b + 199 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 31) +
                one_over_two_q * *(b + 146 * OS1_S1 + 16);
            *(b + 146 * OS1_S1 + 53) =
                prefactor_y * *(b + 146 * OS1_S1 + 33) -
                p_over_q * *(b + 198 * OS1_S1 + 33) +
                one_over_two_q * *(b + 104 * OS1_S1 + 33) +
                one_over_two_q * *(b + 146 * OS1_S1 + 19);
            *(b + 146 * OS1_S1 + 54) =
                prefactor_y * *(b + 146 * OS1_S1 + 34) -
                p_over_q * *(b + 198 * OS1_S1 + 34) +
                one_over_two_q * *(b + 104 * OS1_S1 + 34);
            *(b + 146 * OS1_S1 + 55) =
                prefactor_z * *(b + 146 * OS1_S1 + 34) -
                p_over_q * *(b + 199 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 146 * OS1_S1 + 19);
            *(b + 147 * OS1_S1 + 35) =
                prefactor_x * *(b + 147 * OS1_S1 + 20) -
                p_over_q * *(b + 192 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 147 * OS1_S1 + 10);
            *(b + 147 * OS1_S1 + 36) = prefactor_y * *(b + 147 * OS1_S1 + 20) -
                                       p_over_q * *(b + 199 * OS1_S1 + 20);
            *(b + 147 * OS1_S1 + 37) =
                prefactor_z * *(b + 147 * OS1_S1 + 20) -
                p_over_q * *(b + 200 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 20);
            *(b + 147 * OS1_S1 + 38) =
                prefactor_y * *(b + 147 * OS1_S1 + 21) -
                p_over_q * *(b + 199 * OS1_S1 + 21) +
                one_over_two_q * *(b + 147 * OS1_S1 + 10);
            *(b + 147 * OS1_S1 + 39) = prefactor_y * *(b + 147 * OS1_S1 + 22) -
                                       p_over_q * *(b + 199 * OS1_S1 + 22);
            *(b + 147 * OS1_S1 + 40) =
                prefactor_z * *(b + 147 * OS1_S1 + 22) -
                p_over_q * *(b + 200 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 22) +
                one_over_two_q * *(b + 147 * OS1_S1 + 10);
            *(b + 147 * OS1_S1 + 41) =
                prefactor_x * *(b + 147 * OS1_S1 + 26) -
                p_over_q * *(b + 192 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 26) +
                one_over_two_q * *(b + 147 * OS1_S1 + 16);
            *(b + 147 * OS1_S1 + 42) =
                prefactor_z * *(b + 147 * OS1_S1 + 23) -
                p_over_q * *(b + 200 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 23);
            *(b + 147 * OS1_S1 + 43) = prefactor_y * *(b + 147 * OS1_S1 + 25) -
                                       p_over_q * *(b + 199 * OS1_S1 + 25);
            *(b + 147 * OS1_S1 + 44) =
                prefactor_x * *(b + 147 * OS1_S1 + 29) -
                p_over_q * *(b + 192 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 29) +
                one_over_two_q * *(b + 147 * OS1_S1 + 19);
            *(b + 147 * OS1_S1 + 45) =
                prefactor_x * *(b + 147 * OS1_S1 + 30) -
                p_over_q * *(b + 192 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 30);
            *(b + 147 * OS1_S1 + 46) =
                prefactor_x * *(b + 147 * OS1_S1 + 31) -
                p_over_q * *(b + 192 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 31);
            *(b + 147 * OS1_S1 + 47) =
                prefactor_x * *(b + 147 * OS1_S1 + 32) -
                p_over_q * *(b + 192 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 32);
            *(b + 147 * OS1_S1 + 48) = prefactor_y * *(b + 147 * OS1_S1 + 29) -
                                       p_over_q * *(b + 199 * OS1_S1 + 29);
            *(b + 147 * OS1_S1 + 49) =
                prefactor_x * *(b + 147 * OS1_S1 + 34) -
                p_over_q * *(b + 192 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 34);
            *(b + 147 * OS1_S1 + 50) =
                prefactor_y * *(b + 147 * OS1_S1 + 30) -
                p_over_q * *(b + 199 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 147 * OS1_S1 + 16);
            *(b + 147 * OS1_S1 + 51) =
                prefactor_z * *(b + 147 * OS1_S1 + 30) -
                p_over_q * *(b + 200 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 30);
            *(b + 147 * OS1_S1 + 52) =
                prefactor_z * *(b + 147 * OS1_S1 + 31) -
                p_over_q * *(b + 200 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 31) +
                one_over_two_q * *(b + 147 * OS1_S1 + 16);
            *(b + 147 * OS1_S1 + 53) =
                prefactor_y * *(b + 147 * OS1_S1 + 33) -
                p_over_q * *(b + 199 * OS1_S1 + 33) +
                one_over_two_q * *(b + 147 * OS1_S1 + 19);
            *(b + 147 * OS1_S1 + 54) = prefactor_y * *(b + 147 * OS1_S1 + 34) -
                                       p_over_q * *(b + 199 * OS1_S1 + 34);
            *(b + 147 * OS1_S1 + 55) =
                prefactor_z * *(b + 147 * OS1_S1 + 34) -
                p_over_q * *(b + 200 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 147 * OS1_S1 + 19);
            *(b + 148 * OS1_S1 + 35) =
                prefactor_x * *(b + 148 * OS1_S1 + 20) -
                p_over_q * *(b + 193 * OS1_S1 + 20) +
                one_over_two_q * *(b + 112 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 148 * OS1_S1 + 10);
            *(b + 148 * OS1_S1 + 36) =
                prefactor_y * *(b + 148 * OS1_S1 + 20) -
                p_over_q * *(b + 201 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 20);
            *(b + 148 * OS1_S1 + 37) = prefactor_z * *(b + 148 * OS1_S1 + 20) -
                                       p_over_q * *(b + 202 * OS1_S1 + 20);
            *(b + 148 * OS1_S1 + 38) =
                prefactor_y * *(b + 148 * OS1_S1 + 21) -
                p_over_q * *(b + 201 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 21) +
                one_over_two_q * *(b + 148 * OS1_S1 + 10);
            *(b + 148 * OS1_S1 + 39) = prefactor_z * *(b + 148 * OS1_S1 + 21) -
                                       p_over_q * *(b + 202 * OS1_S1 + 21);
            *(b + 148 * OS1_S1 + 40) =
                prefactor_z * *(b + 148 * OS1_S1 + 22) -
                p_over_q * *(b + 202 * OS1_S1 + 22) +
                one_over_two_q * *(b + 148 * OS1_S1 + 10);
            *(b + 148 * OS1_S1 + 41) =
                prefactor_x * *(b + 148 * OS1_S1 + 26) -
                p_over_q * *(b + 193 * OS1_S1 + 26) +
                one_over_two_q * *(b + 112 * OS1_S1 + 26) +
                one_over_two_q * *(b + 148 * OS1_S1 + 16);
            *(b + 148 * OS1_S1 + 42) = prefactor_z * *(b + 148 * OS1_S1 + 23) -
                                       p_over_q * *(b + 202 * OS1_S1 + 23);
            *(b + 148 * OS1_S1 + 43) =
                prefactor_y * *(b + 148 * OS1_S1 + 25) -
                p_over_q * *(b + 201 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 25);
            *(b + 148 * OS1_S1 + 44) =
                prefactor_x * *(b + 148 * OS1_S1 + 29) -
                p_over_q * *(b + 193 * OS1_S1 + 29) +
                one_over_two_q * *(b + 112 * OS1_S1 + 29) +
                one_over_two_q * *(b + 148 * OS1_S1 + 19);
            *(b + 148 * OS1_S1 + 45) =
                prefactor_x * *(b + 148 * OS1_S1 + 30) -
                p_over_q * *(b + 193 * OS1_S1 + 30) +
                one_over_two_q * *(b + 112 * OS1_S1 + 30);
            *(b + 148 * OS1_S1 + 46) = prefactor_z * *(b + 148 * OS1_S1 + 26) -
                                       p_over_q * *(b + 202 * OS1_S1 + 26);
            *(b + 148 * OS1_S1 + 47) =
                prefactor_x * *(b + 148 * OS1_S1 + 32) -
                p_over_q * *(b + 193 * OS1_S1 + 32) +
                one_over_two_q * *(b + 112 * OS1_S1 + 32);
            *(b + 148 * OS1_S1 + 48) =
                prefactor_x * *(b + 148 * OS1_S1 + 33) -
                p_over_q * *(b + 193 * OS1_S1 + 33) +
                one_over_two_q * *(b + 112 * OS1_S1 + 33);
            *(b + 148 * OS1_S1 + 49) =
                prefactor_x * *(b + 148 * OS1_S1 + 34) -
                p_over_q * *(b + 193 * OS1_S1 + 34) +
                one_over_two_q * *(b + 112 * OS1_S1 + 34);
            *(b + 148 * OS1_S1 + 50) =
                prefactor_y * *(b + 148 * OS1_S1 + 30) -
                p_over_q * *(b + 201 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 148 * OS1_S1 + 16);
            *(b + 148 * OS1_S1 + 51) = prefactor_z * *(b + 148 * OS1_S1 + 30) -
                                       p_over_q * *(b + 202 * OS1_S1 + 30);
            *(b + 148 * OS1_S1 + 52) =
                prefactor_z * *(b + 148 * OS1_S1 + 31) -
                p_over_q * *(b + 202 * OS1_S1 + 31) +
                one_over_two_q * *(b + 148 * OS1_S1 + 16);
            *(b + 148 * OS1_S1 + 53) =
                prefactor_y * *(b + 148 * OS1_S1 + 33) -
                p_over_q * *(b + 201 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 33) +
                one_over_two_q * *(b + 148 * OS1_S1 + 19);
            *(b + 148 * OS1_S1 + 54) =
                prefactor_y * *(b + 148 * OS1_S1 + 34) -
                p_over_q * *(b + 201 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 34);
            *(b + 148 * OS1_S1 + 55) =
                prefactor_z * *(b + 148 * OS1_S1 + 34) -
                p_over_q * *(b + 202 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 148 * OS1_S1 + 19);
            *(b + 149 * OS1_S1 + 35) =
                prefactor_x * *(b + 149 * OS1_S1 + 20) -
                p_over_q * *(b + 194 * OS1_S1 + 20) +
                one_over_two_q * *(b + 113 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 149 * OS1_S1 + 10);
            *(b + 149 * OS1_S1 + 36) =
                prefactor_y * *(b + 149 * OS1_S1 + 20) -
                p_over_q * *(b + 202 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 20);
            *(b + 149 * OS1_S1 + 37) =
                prefactor_z * *(b + 149 * OS1_S1 + 20) -
                p_over_q * *(b + 203 * OS1_S1 + 20) +
                one_over_two_q * *(b + 105 * OS1_S1 + 20);
            *(b + 149 * OS1_S1 + 38) =
                prefactor_y * *(b + 149 * OS1_S1 + 21) -
                p_over_q * *(b + 202 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 21) +
                one_over_two_q * *(b + 149 * OS1_S1 + 10);
            *(b + 149 * OS1_S1 + 39) =
                prefactor_z * *(b + 149 * OS1_S1 + 21) -
                p_over_q * *(b + 203 * OS1_S1 + 21) +
                one_over_two_q * *(b + 105 * OS1_S1 + 21);
            *(b + 149 * OS1_S1 + 40) =
                prefactor_z * *(b + 149 * OS1_S1 + 22) -
                p_over_q * *(b + 203 * OS1_S1 + 22) +
                one_over_two_q * *(b + 105 * OS1_S1 + 22) +
                one_over_two_q * *(b + 149 * OS1_S1 + 10);
            *(b + 149 * OS1_S1 + 41) =
                prefactor_x * *(b + 149 * OS1_S1 + 26) -
                p_over_q * *(b + 194 * OS1_S1 + 26) +
                one_over_two_q * *(b + 113 * OS1_S1 + 26) +
                one_over_two_q * *(b + 149 * OS1_S1 + 16);
            *(b + 149 * OS1_S1 + 42) =
                prefactor_z * *(b + 149 * OS1_S1 + 23) -
                p_over_q * *(b + 203 * OS1_S1 + 23) +
                one_over_two_q * *(b + 105 * OS1_S1 + 23);
            *(b + 149 * OS1_S1 + 43) =
                prefactor_y * *(b + 149 * OS1_S1 + 25) -
                p_over_q * *(b + 202 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 25);
            *(b + 149 * OS1_S1 + 44) =
                prefactor_x * *(b + 149 * OS1_S1 + 29) -
                p_over_q * *(b + 194 * OS1_S1 + 29) +
                one_over_two_q * *(b + 113 * OS1_S1 + 29) +
                one_over_two_q * *(b + 149 * OS1_S1 + 19);
            *(b + 149 * OS1_S1 + 45) =
                prefactor_x * *(b + 149 * OS1_S1 + 30) -
                p_over_q * *(b + 194 * OS1_S1 + 30) +
                one_over_two_q * *(b + 113 * OS1_S1 + 30);
            *(b + 149 * OS1_S1 + 46) =
                prefactor_z * *(b + 149 * OS1_S1 + 26) -
                p_over_q * *(b + 203 * OS1_S1 + 26) +
                one_over_two_q * *(b + 105 * OS1_S1 + 26);
            *(b + 149 * OS1_S1 + 47) =
                prefactor_x * *(b + 149 * OS1_S1 + 32) -
                p_over_q * *(b + 194 * OS1_S1 + 32) +
                one_over_two_q * *(b + 113 * OS1_S1 + 32);
            *(b + 149 * OS1_S1 + 48) =
                prefactor_x * *(b + 149 * OS1_S1 + 33) -
                p_over_q * *(b + 194 * OS1_S1 + 33) +
                one_over_two_q * *(b + 113 * OS1_S1 + 33);
            *(b + 149 * OS1_S1 + 49) =
                prefactor_x * *(b + 149 * OS1_S1 + 34) -
                p_over_q * *(b + 194 * OS1_S1 + 34) +
                one_over_two_q * *(b + 113 * OS1_S1 + 34);
            *(b + 149 * OS1_S1 + 50) =
                prefactor_y * *(b + 149 * OS1_S1 + 30) -
                p_over_q * *(b + 202 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 149 * OS1_S1 + 16);
            *(b + 149 * OS1_S1 + 51) =
                prefactor_z * *(b + 149 * OS1_S1 + 30) -
                p_over_q * *(b + 203 * OS1_S1 + 30) +
                one_over_two_q * *(b + 105 * OS1_S1 + 30);
            *(b + 149 * OS1_S1 + 52) =
                prefactor_z * *(b + 149 * OS1_S1 + 31) -
                p_over_q * *(b + 203 * OS1_S1 + 31) +
                one_over_two_q * *(b + 105 * OS1_S1 + 31) +
                one_over_two_q * *(b + 149 * OS1_S1 + 16);
            *(b + 149 * OS1_S1 + 53) =
                prefactor_y * *(b + 149 * OS1_S1 + 33) -
                p_over_q * *(b + 202 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 33) +
                one_over_two_q * *(b + 149 * OS1_S1 + 19);
            *(b + 149 * OS1_S1 + 54) =
                prefactor_y * *(b + 149 * OS1_S1 + 34) -
                p_over_q * *(b + 202 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 34);
            *(b + 149 * OS1_S1 + 55) =
                prefactor_z * *(b + 149 * OS1_S1 + 34) -
                p_over_q * *(b + 203 * OS1_S1 + 34) +
                one_over_two_q * *(b + 105 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 149 * OS1_S1 + 19);
            *(b + 150 * OS1_S1 + 35) =
                prefactor_x * *(b + 150 * OS1_S1 + 20) -
                p_over_q * *(b + 195 * OS1_S1 + 20) +
                one_over_two_q * *(b + 114 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 150 * OS1_S1 + 10);
            *(b + 150 * OS1_S1 + 36) =
                prefactor_y * *(b + 150 * OS1_S1 + 20) -
                p_over_q * *(b + 203 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 20);
            *(b + 150 * OS1_S1 + 37) =
                prefactor_z * *(b + 150 * OS1_S1 + 20) -
                p_over_q * *(b + 204 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 20);
            *(b + 150 * OS1_S1 + 38) =
                prefactor_y * *(b + 150 * OS1_S1 + 21) -
                p_over_q * *(b + 203 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 21) +
                one_over_two_q * *(b + 150 * OS1_S1 + 10);
            *(b + 150 * OS1_S1 + 39) =
                prefactor_z * *(b + 150 * OS1_S1 + 21) -
                p_over_q * *(b + 204 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 21);
            *(b + 150 * OS1_S1 + 40) =
                prefactor_z * *(b + 150 * OS1_S1 + 22) -
                p_over_q * *(b + 204 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 22) +
                one_over_two_q * *(b + 150 * OS1_S1 + 10);
            *(b + 150 * OS1_S1 + 41) =
                prefactor_x * *(b + 150 * OS1_S1 + 26) -
                p_over_q * *(b + 195 * OS1_S1 + 26) +
                one_over_two_q * *(b + 114 * OS1_S1 + 26) +
                one_over_two_q * *(b + 150 * OS1_S1 + 16);
            *(b + 150 * OS1_S1 + 42) =
                prefactor_z * *(b + 150 * OS1_S1 + 23) -
                p_over_q * *(b + 204 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 23);
            *(b + 150 * OS1_S1 + 43) =
                prefactor_y * *(b + 150 * OS1_S1 + 25) -
                p_over_q * *(b + 203 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 25);
            *(b + 150 * OS1_S1 + 44) =
                prefactor_x * *(b + 150 * OS1_S1 + 29) -
                p_over_q * *(b + 195 * OS1_S1 + 29) +
                one_over_two_q * *(b + 114 * OS1_S1 + 29) +
                one_over_two_q * *(b + 150 * OS1_S1 + 19);
            *(b + 150 * OS1_S1 + 45) =
                prefactor_x * *(b + 150 * OS1_S1 + 30) -
                p_over_q * *(b + 195 * OS1_S1 + 30) +
                one_over_two_q * *(b + 114 * OS1_S1 + 30);
            *(b + 150 * OS1_S1 + 46) =
                prefactor_x * *(b + 150 * OS1_S1 + 31) -
                p_over_q * *(b + 195 * OS1_S1 + 31) +
                one_over_two_q * *(b + 114 * OS1_S1 + 31);
            *(b + 150 * OS1_S1 + 47) =
                prefactor_x * *(b + 150 * OS1_S1 + 32) -
                p_over_q * *(b + 195 * OS1_S1 + 32) +
                one_over_two_q * *(b + 114 * OS1_S1 + 32);
            *(b + 150 * OS1_S1 + 48) =
                prefactor_x * *(b + 150 * OS1_S1 + 33) -
                p_over_q * *(b + 195 * OS1_S1 + 33) +
                one_over_two_q * *(b + 114 * OS1_S1 + 33);
            *(b + 150 * OS1_S1 + 49) =
                prefactor_x * *(b + 150 * OS1_S1 + 34) -
                p_over_q * *(b + 195 * OS1_S1 + 34) +
                one_over_two_q * *(b + 114 * OS1_S1 + 34);
            *(b + 150 * OS1_S1 + 50) =
                prefactor_y * *(b + 150 * OS1_S1 + 30) -
                p_over_q * *(b + 203 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 150 * OS1_S1 + 16);
            *(b + 150 * OS1_S1 + 51) =
                prefactor_z * *(b + 150 * OS1_S1 + 30) -
                p_over_q * *(b + 204 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 30);
            *(b + 150 * OS1_S1 + 52) =
                prefactor_z * *(b + 150 * OS1_S1 + 31) -
                p_over_q * *(b + 204 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 31) +
                one_over_two_q * *(b + 150 * OS1_S1 + 16);
            *(b + 150 * OS1_S1 + 53) =
                prefactor_y * *(b + 150 * OS1_S1 + 33) -
                p_over_q * *(b + 203 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 33) +
                one_over_two_q * *(b + 150 * OS1_S1 + 19);
            *(b + 150 * OS1_S1 + 54) =
                prefactor_y * *(b + 150 * OS1_S1 + 34) -
                p_over_q * *(b + 203 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 34);
            *(b + 150 * OS1_S1 + 55) =
                prefactor_z * *(b + 150 * OS1_S1 + 34) -
                p_over_q * *(b + 204 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 150 * OS1_S1 + 19);
            *(b + 151 * OS1_S1 + 35) =
                prefactor_x * *(b + 151 * OS1_S1 + 20) -
                p_over_q * *(b + 196 * OS1_S1 + 20) +
                one_over_two_q * *(b + 115 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 10);
            *(b + 151 * OS1_S1 + 36) =
                prefactor_y * *(b + 151 * OS1_S1 + 20) -
                p_over_q * *(b + 204 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 20);
            *(b + 151 * OS1_S1 + 37) =
                prefactor_z * *(b + 151 * OS1_S1 + 20) -
                p_over_q * *(b + 205 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 20);
            *(b + 151 * OS1_S1 + 38) =
                prefactor_y * *(b + 151 * OS1_S1 + 21) -
                p_over_q * *(b + 204 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 21) +
                one_over_two_q * *(b + 151 * OS1_S1 + 10);
            *(b + 151 * OS1_S1 + 39) =
                prefactor_z * *(b + 151 * OS1_S1 + 21) -
                p_over_q * *(b + 205 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 21);
            *(b + 151 * OS1_S1 + 40) =
                prefactor_z * *(b + 151 * OS1_S1 + 22) -
                p_over_q * *(b + 205 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 22) +
                one_over_two_q * *(b + 151 * OS1_S1 + 10);
            *(b + 151 * OS1_S1 + 41) =
                prefactor_x * *(b + 151 * OS1_S1 + 26) -
                p_over_q * *(b + 196 * OS1_S1 + 26) +
                one_over_two_q * *(b + 115 * OS1_S1 + 26) +
                one_over_two_q * *(b + 151 * OS1_S1 + 16);
            *(b + 151 * OS1_S1 + 42) =
                prefactor_z * *(b + 151 * OS1_S1 + 23) -
                p_over_q * *(b + 205 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 23);
            *(b + 151 * OS1_S1 + 43) =
                prefactor_y * *(b + 151 * OS1_S1 + 25) -
                p_over_q * *(b + 204 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 25);
            *(b + 151 * OS1_S1 + 44) =
                prefactor_x * *(b + 151 * OS1_S1 + 29) -
                p_over_q * *(b + 196 * OS1_S1 + 29) +
                one_over_two_q * *(b + 115 * OS1_S1 + 29) +
                one_over_two_q * *(b + 151 * OS1_S1 + 19);
            *(b + 151 * OS1_S1 + 45) =
                prefactor_x * *(b + 151 * OS1_S1 + 30) -
                p_over_q * *(b + 196 * OS1_S1 + 30) +
                one_over_two_q * *(b + 115 * OS1_S1 + 30);
            *(b + 151 * OS1_S1 + 46) =
                prefactor_x * *(b + 151 * OS1_S1 + 31) -
                p_over_q * *(b + 196 * OS1_S1 + 31) +
                one_over_two_q * *(b + 115 * OS1_S1 + 31);
            *(b + 151 * OS1_S1 + 47) =
                prefactor_x * *(b + 151 * OS1_S1 + 32) -
                p_over_q * *(b + 196 * OS1_S1 + 32) +
                one_over_two_q * *(b + 115 * OS1_S1 + 32);
            *(b + 151 * OS1_S1 + 48) =
                prefactor_x * *(b + 151 * OS1_S1 + 33) -
                p_over_q * *(b + 196 * OS1_S1 + 33) +
                one_over_two_q * *(b + 115 * OS1_S1 + 33);
            *(b + 151 * OS1_S1 + 49) =
                prefactor_x * *(b + 151 * OS1_S1 + 34) -
                p_over_q * *(b + 196 * OS1_S1 + 34) +
                one_over_two_q * *(b + 115 * OS1_S1 + 34);
            *(b + 151 * OS1_S1 + 50) =
                prefactor_y * *(b + 151 * OS1_S1 + 30) -
                p_over_q * *(b + 204 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 16);
            *(b + 151 * OS1_S1 + 51) =
                prefactor_z * *(b + 151 * OS1_S1 + 30) -
                p_over_q * *(b + 205 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 30);
            *(b + 151 * OS1_S1 + 52) =
                prefactor_z * *(b + 151 * OS1_S1 + 31) -
                p_over_q * *(b + 205 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 31) +
                one_over_two_q * *(b + 151 * OS1_S1 + 16);
            *(b + 151 * OS1_S1 + 53) =
                prefactor_y * *(b + 151 * OS1_S1 + 33) -
                p_over_q * *(b + 204 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 33) +
                one_over_two_q * *(b + 151 * OS1_S1 + 19);
            *(b + 151 * OS1_S1 + 54) =
                prefactor_y * *(b + 151 * OS1_S1 + 34) -
                p_over_q * *(b + 204 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 34);
            *(b + 151 * OS1_S1 + 55) =
                prefactor_z * *(b + 151 * OS1_S1 + 34) -
                p_over_q * *(b + 205 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 19);
            *(b + 152 * OS1_S1 + 35) =
                prefactor_x * *(b + 152 * OS1_S1 + 20) -
                p_over_q * *(b + 197 * OS1_S1 + 20) +
                one_over_two_q * *(b + 116 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 10);
            *(b + 152 * OS1_S1 + 36) =
                prefactor_y * *(b + 152 * OS1_S1 + 20) -
                p_over_q * *(b + 205 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 20);
            *(b + 152 * OS1_S1 + 37) =
                prefactor_z * *(b + 152 * OS1_S1 + 20) -
                p_over_q * *(b + 206 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 20);
            *(b + 152 * OS1_S1 + 38) =
                prefactor_y * *(b + 152 * OS1_S1 + 21) -
                p_over_q * *(b + 205 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 21) +
                one_over_two_q * *(b + 152 * OS1_S1 + 10);
            *(b + 152 * OS1_S1 + 39) =
                prefactor_y * *(b + 152 * OS1_S1 + 22) -
                p_over_q * *(b + 205 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 22);
            *(b + 152 * OS1_S1 + 40) =
                prefactor_z * *(b + 152 * OS1_S1 + 22) -
                p_over_q * *(b + 206 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 22) +
                one_over_two_q * *(b + 152 * OS1_S1 + 10);
            *(b + 152 * OS1_S1 + 41) =
                prefactor_x * *(b + 152 * OS1_S1 + 26) -
                p_over_q * *(b + 197 * OS1_S1 + 26) +
                one_over_two_q * *(b + 116 * OS1_S1 + 26) +
                one_over_two_q * *(b + 152 * OS1_S1 + 16);
            *(b + 152 * OS1_S1 + 42) =
                prefactor_z * *(b + 152 * OS1_S1 + 23) -
                p_over_q * *(b + 206 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 23);
            *(b + 152 * OS1_S1 + 43) =
                prefactor_y * *(b + 152 * OS1_S1 + 25) -
                p_over_q * *(b + 205 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 25);
            *(b + 152 * OS1_S1 + 44) =
                prefactor_x * *(b + 152 * OS1_S1 + 29) -
                p_over_q * *(b + 197 * OS1_S1 + 29) +
                one_over_two_q * *(b + 116 * OS1_S1 + 29) +
                one_over_two_q * *(b + 152 * OS1_S1 + 19);
            *(b + 152 * OS1_S1 + 45) =
                prefactor_x * *(b + 152 * OS1_S1 + 30) -
                p_over_q * *(b + 197 * OS1_S1 + 30) +
                one_over_two_q * *(b + 116 * OS1_S1 + 30);
            *(b + 152 * OS1_S1 + 46) =
                prefactor_x * *(b + 152 * OS1_S1 + 31) -
                p_over_q * *(b + 197 * OS1_S1 + 31) +
                one_over_two_q * *(b + 116 * OS1_S1 + 31);
            *(b + 152 * OS1_S1 + 47) =
                prefactor_x * *(b + 152 * OS1_S1 + 32) -
                p_over_q * *(b + 197 * OS1_S1 + 32) +
                one_over_two_q * *(b + 116 * OS1_S1 + 32);
            *(b + 152 * OS1_S1 + 48) =
                prefactor_x * *(b + 152 * OS1_S1 + 33) -
                p_over_q * *(b + 197 * OS1_S1 + 33) +
                one_over_two_q * *(b + 116 * OS1_S1 + 33);
            *(b + 152 * OS1_S1 + 49) =
                prefactor_x * *(b + 152 * OS1_S1 + 34) -
                p_over_q * *(b + 197 * OS1_S1 + 34) +
                one_over_two_q * *(b + 116 * OS1_S1 + 34);
            *(b + 152 * OS1_S1 + 50) =
                prefactor_y * *(b + 152 * OS1_S1 + 30) -
                p_over_q * *(b + 205 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 16);
            *(b + 152 * OS1_S1 + 51) =
                prefactor_z * *(b + 152 * OS1_S1 + 30) -
                p_over_q * *(b + 206 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 30);
            *(b + 152 * OS1_S1 + 52) =
                prefactor_z * *(b + 152 * OS1_S1 + 31) -
                p_over_q * *(b + 206 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 31) +
                one_over_two_q * *(b + 152 * OS1_S1 + 16);
            *(b + 152 * OS1_S1 + 53) =
                prefactor_y * *(b + 152 * OS1_S1 + 33) -
                p_over_q * *(b + 205 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 33) +
                one_over_two_q * *(b + 152 * OS1_S1 + 19);
            *(b + 152 * OS1_S1 + 54) =
                prefactor_y * *(b + 152 * OS1_S1 + 34) -
                p_over_q * *(b + 205 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 34);
            *(b + 152 * OS1_S1 + 55) =
                prefactor_z * *(b + 152 * OS1_S1 + 34) -
                p_over_q * *(b + 206 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 19);
            *(b + 153 * OS1_S1 + 35) =
                prefactor_x * *(b + 153 * OS1_S1 + 20) -
                p_over_q * *(b + 198 * OS1_S1 + 20) +
                one_over_two_q * *(b + 117 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 153 * OS1_S1 + 10);
            *(b + 153 * OS1_S1 + 36) =
                prefactor_y * *(b + 153 * OS1_S1 + 20) -
                p_over_q * *(b + 206 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 20);
            *(b + 153 * OS1_S1 + 37) =
                prefactor_z * *(b + 153 * OS1_S1 + 20) -
                p_over_q * *(b + 207 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 20);
            *(b + 153 * OS1_S1 + 38) =
                prefactor_y * *(b + 153 * OS1_S1 + 21) -
                p_over_q * *(b + 206 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 21) +
                one_over_two_q * *(b + 153 * OS1_S1 + 10);
            *(b + 153 * OS1_S1 + 39) =
                prefactor_y * *(b + 153 * OS1_S1 + 22) -
                p_over_q * *(b + 206 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 22);
            *(b + 153 * OS1_S1 + 40) =
                prefactor_z * *(b + 153 * OS1_S1 + 22) -
                p_over_q * *(b + 207 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 22) +
                one_over_two_q * *(b + 153 * OS1_S1 + 10);
            *(b + 153 * OS1_S1 + 41) =
                prefactor_x * *(b + 153 * OS1_S1 + 26) -
                p_over_q * *(b + 198 * OS1_S1 + 26) +
                one_over_two_q * *(b + 117 * OS1_S1 + 26) +
                one_over_two_q * *(b + 153 * OS1_S1 + 16);
            *(b + 153 * OS1_S1 + 42) =
                prefactor_z * *(b + 153 * OS1_S1 + 23) -
                p_over_q * *(b + 207 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 23);
            *(b + 153 * OS1_S1 + 43) =
                prefactor_y * *(b + 153 * OS1_S1 + 25) -
                p_over_q * *(b + 206 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 25);
            *(b + 153 * OS1_S1 + 44) =
                prefactor_x * *(b + 153 * OS1_S1 + 29) -
                p_over_q * *(b + 198 * OS1_S1 + 29) +
                one_over_two_q * *(b + 117 * OS1_S1 + 29) +
                one_over_two_q * *(b + 153 * OS1_S1 + 19);
            *(b + 153 * OS1_S1 + 45) =
                prefactor_x * *(b + 153 * OS1_S1 + 30) -
                p_over_q * *(b + 198 * OS1_S1 + 30) +
                one_over_two_q * *(b + 117 * OS1_S1 + 30);
            *(b + 153 * OS1_S1 + 46) =
                prefactor_x * *(b + 153 * OS1_S1 + 31) -
                p_over_q * *(b + 198 * OS1_S1 + 31) +
                one_over_two_q * *(b + 117 * OS1_S1 + 31);
            *(b + 153 * OS1_S1 + 47) =
                prefactor_x * *(b + 153 * OS1_S1 + 32) -
                p_over_q * *(b + 198 * OS1_S1 + 32) +
                one_over_two_q * *(b + 117 * OS1_S1 + 32);
            *(b + 153 * OS1_S1 + 48) =
                prefactor_x * *(b + 153 * OS1_S1 + 33) -
                p_over_q * *(b + 198 * OS1_S1 + 33) +
                one_over_two_q * *(b + 117 * OS1_S1 + 33);
            *(b + 153 * OS1_S1 + 49) =
                prefactor_x * *(b + 153 * OS1_S1 + 34) -
                p_over_q * *(b + 198 * OS1_S1 + 34) +
                one_over_two_q * *(b + 117 * OS1_S1 + 34);
            *(b + 153 * OS1_S1 + 50) =
                prefactor_y * *(b + 153 * OS1_S1 + 30) -
                p_over_q * *(b + 206 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 153 * OS1_S1 + 16);
            *(b + 153 * OS1_S1 + 51) =
                prefactor_z * *(b + 153 * OS1_S1 + 30) -
                p_over_q * *(b + 207 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 30);
            *(b + 153 * OS1_S1 + 52) =
                prefactor_z * *(b + 153 * OS1_S1 + 31) -
                p_over_q * *(b + 207 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 31) +
                one_over_two_q * *(b + 153 * OS1_S1 + 16);
            *(b + 153 * OS1_S1 + 53) =
                prefactor_y * *(b + 153 * OS1_S1 + 33) -
                p_over_q * *(b + 206 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 33) +
                one_over_two_q * *(b + 153 * OS1_S1 + 19);
            *(b + 153 * OS1_S1 + 54) =
                prefactor_y * *(b + 153 * OS1_S1 + 34) -
                p_over_q * *(b + 206 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 34);
            *(b + 153 * OS1_S1 + 55) =
                prefactor_z * *(b + 153 * OS1_S1 + 34) -
                p_over_q * *(b + 207 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 153 * OS1_S1 + 19);
            *(b + 154 * OS1_S1 + 35) =
                prefactor_x * *(b + 154 * OS1_S1 + 20) -
                p_over_q * *(b + 199 * OS1_S1 + 20) +
                one_over_two_q * *(b + 118 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 154 * OS1_S1 + 10);
            *(b + 154 * OS1_S1 + 36) =
                prefactor_y * *(b + 154 * OS1_S1 + 20) -
                p_over_q * *(b + 207 * OS1_S1 + 20) +
                one_over_two_q * *(b + 111 * OS1_S1 + 20);
            *(b + 154 * OS1_S1 + 37) =
                prefactor_z * *(b + 154 * OS1_S1 + 20) -
                p_over_q * *(b + 208 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 20);
            *(b + 154 * OS1_S1 + 38) =
                prefactor_y * *(b + 154 * OS1_S1 + 21) -
                p_over_q * *(b + 207 * OS1_S1 + 21) +
                one_over_two_q * *(b + 111 * OS1_S1 + 21) +
                one_over_two_q * *(b + 154 * OS1_S1 + 10);
            *(b + 154 * OS1_S1 + 39) =
                prefactor_y * *(b + 154 * OS1_S1 + 22) -
                p_over_q * *(b + 207 * OS1_S1 + 22) +
                one_over_two_q * *(b + 111 * OS1_S1 + 22);
            *(b + 154 * OS1_S1 + 40) =
                prefactor_z * *(b + 154 * OS1_S1 + 22) -
                p_over_q * *(b + 208 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 22) +
                one_over_two_q * *(b + 154 * OS1_S1 + 10);
            *(b + 154 * OS1_S1 + 41) =
                prefactor_x * *(b + 154 * OS1_S1 + 26) -
                p_over_q * *(b + 199 * OS1_S1 + 26) +
                one_over_two_q * *(b + 118 * OS1_S1 + 26) +
                one_over_two_q * *(b + 154 * OS1_S1 + 16);
            *(b + 154 * OS1_S1 + 42) =
                prefactor_z * *(b + 154 * OS1_S1 + 23) -
                p_over_q * *(b + 208 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 23);
            *(b + 154 * OS1_S1 + 43) =
                prefactor_y * *(b + 154 * OS1_S1 + 25) -
                p_over_q * *(b + 207 * OS1_S1 + 25) +
                one_over_two_q * *(b + 111 * OS1_S1 + 25);
            *(b + 154 * OS1_S1 + 44) =
                prefactor_x * *(b + 154 * OS1_S1 + 29) -
                p_over_q * *(b + 199 * OS1_S1 + 29) +
                one_over_two_q * *(b + 118 * OS1_S1 + 29) +
                one_over_two_q * *(b + 154 * OS1_S1 + 19);
            *(b + 154 * OS1_S1 + 45) =
                prefactor_x * *(b + 154 * OS1_S1 + 30) -
                p_over_q * *(b + 199 * OS1_S1 + 30) +
                one_over_two_q * *(b + 118 * OS1_S1 + 30);
            *(b + 154 * OS1_S1 + 46) =
                prefactor_x * *(b + 154 * OS1_S1 + 31) -
                p_over_q * *(b + 199 * OS1_S1 + 31) +
                one_over_two_q * *(b + 118 * OS1_S1 + 31);
            *(b + 154 * OS1_S1 + 47) =
                prefactor_x * *(b + 154 * OS1_S1 + 32) -
                p_over_q * *(b + 199 * OS1_S1 + 32) +
                one_over_two_q * *(b + 118 * OS1_S1 + 32);
            *(b + 154 * OS1_S1 + 48) =
                prefactor_y * *(b + 154 * OS1_S1 + 29) -
                p_over_q * *(b + 207 * OS1_S1 + 29) +
                one_over_two_q * *(b + 111 * OS1_S1 + 29);
            *(b + 154 * OS1_S1 + 49) =
                prefactor_x * *(b + 154 * OS1_S1 + 34) -
                p_over_q * *(b + 199 * OS1_S1 + 34) +
                one_over_two_q * *(b + 118 * OS1_S1 + 34);
            *(b + 154 * OS1_S1 + 50) =
                prefactor_y * *(b + 154 * OS1_S1 + 30) -
                p_over_q * *(b + 207 * OS1_S1 + 30) +
                one_over_two_q * *(b + 111 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 154 * OS1_S1 + 16);
            *(b + 154 * OS1_S1 + 51) =
                prefactor_z * *(b + 154 * OS1_S1 + 30) -
                p_over_q * *(b + 208 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 30);
            *(b + 154 * OS1_S1 + 52) =
                prefactor_z * *(b + 154 * OS1_S1 + 31) -
                p_over_q * *(b + 208 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 31) +
                one_over_two_q * *(b + 154 * OS1_S1 + 16);
            *(b + 154 * OS1_S1 + 53) =
                prefactor_y * *(b + 154 * OS1_S1 + 33) -
                p_over_q * *(b + 207 * OS1_S1 + 33) +
                one_over_two_q * *(b + 111 * OS1_S1 + 33) +
                one_over_two_q * *(b + 154 * OS1_S1 + 19);
            *(b + 154 * OS1_S1 + 54) =
                prefactor_y * *(b + 154 * OS1_S1 + 34) -
                p_over_q * *(b + 207 * OS1_S1 + 34) +
                one_over_two_q * *(b + 111 * OS1_S1 + 34);
            *(b + 154 * OS1_S1 + 55) =
                prefactor_z * *(b + 154 * OS1_S1 + 34) -
                p_over_q * *(b + 208 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 154 * OS1_S1 + 19);
            *(b + 155 * OS1_S1 + 35) =
                prefactor_x * *(b + 155 * OS1_S1 + 20) -
                p_over_q * *(b + 200 * OS1_S1 + 20) +
                one_over_two_q * *(b + 119 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 155 * OS1_S1 + 10);
            *(b + 155 * OS1_S1 + 36) = prefactor_y * *(b + 155 * OS1_S1 + 20) -
                                       p_over_q * *(b + 208 * OS1_S1 + 20);
            *(b + 155 * OS1_S1 + 37) =
                prefactor_z * *(b + 155 * OS1_S1 + 20) -
                p_over_q * *(b + 209 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 20);
            *(b + 155 * OS1_S1 + 38) =
                prefactor_y * *(b + 155 * OS1_S1 + 21) -
                p_over_q * *(b + 208 * OS1_S1 + 21) +
                one_over_two_q * *(b + 155 * OS1_S1 + 10);
            *(b + 155 * OS1_S1 + 39) = prefactor_y * *(b + 155 * OS1_S1 + 22) -
                                       p_over_q * *(b + 208 * OS1_S1 + 22);
            *(b + 155 * OS1_S1 + 40) =
                prefactor_z * *(b + 155 * OS1_S1 + 22) -
                p_over_q * *(b + 209 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 22) +
                one_over_two_q * *(b + 155 * OS1_S1 + 10);
            *(b + 155 * OS1_S1 + 41) =
                prefactor_x * *(b + 155 * OS1_S1 + 26) -
                p_over_q * *(b + 200 * OS1_S1 + 26) +
                one_over_two_q * *(b + 119 * OS1_S1 + 26) +
                one_over_two_q * *(b + 155 * OS1_S1 + 16);
            *(b + 155 * OS1_S1 + 42) =
                prefactor_z * *(b + 155 * OS1_S1 + 23) -
                p_over_q * *(b + 209 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 23);
            *(b + 155 * OS1_S1 + 43) = prefactor_y * *(b + 155 * OS1_S1 + 25) -
                                       p_over_q * *(b + 208 * OS1_S1 + 25);
            *(b + 155 * OS1_S1 + 44) =
                prefactor_x * *(b + 155 * OS1_S1 + 29) -
                p_over_q * *(b + 200 * OS1_S1 + 29) +
                one_over_two_q * *(b + 119 * OS1_S1 + 29) +
                one_over_two_q * *(b + 155 * OS1_S1 + 19);
            *(b + 155 * OS1_S1 + 45) =
                prefactor_x * *(b + 155 * OS1_S1 + 30) -
                p_over_q * *(b + 200 * OS1_S1 + 30) +
                one_over_two_q * *(b + 119 * OS1_S1 + 30);
            *(b + 155 * OS1_S1 + 46) =
                prefactor_x * *(b + 155 * OS1_S1 + 31) -
                p_over_q * *(b + 200 * OS1_S1 + 31) +
                one_over_two_q * *(b + 119 * OS1_S1 + 31);
            *(b + 155 * OS1_S1 + 47) =
                prefactor_x * *(b + 155 * OS1_S1 + 32) -
                p_over_q * *(b + 200 * OS1_S1 + 32) +
                one_over_two_q * *(b + 119 * OS1_S1 + 32);
            *(b + 155 * OS1_S1 + 48) = prefactor_y * *(b + 155 * OS1_S1 + 29) -
                                       p_over_q * *(b + 208 * OS1_S1 + 29);
            *(b + 155 * OS1_S1 + 49) =
                prefactor_x * *(b + 155 * OS1_S1 + 34) -
                p_over_q * *(b + 200 * OS1_S1 + 34) +
                one_over_two_q * *(b + 119 * OS1_S1 + 34);
            *(b + 155 * OS1_S1 + 50) =
                prefactor_y * *(b + 155 * OS1_S1 + 30) -
                p_over_q * *(b + 208 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 155 * OS1_S1 + 16);
            *(b + 155 * OS1_S1 + 51) =
                prefactor_z * *(b + 155 * OS1_S1 + 30) -
                p_over_q * *(b + 209 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 30);
            *(b + 155 * OS1_S1 + 52) =
                prefactor_z * *(b + 155 * OS1_S1 + 31) -
                p_over_q * *(b + 209 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 31) +
                one_over_two_q * *(b + 155 * OS1_S1 + 16);
            *(b + 155 * OS1_S1 + 53) =
                prefactor_y * *(b + 155 * OS1_S1 + 33) -
                p_over_q * *(b + 208 * OS1_S1 + 33) +
                one_over_two_q * *(b + 155 * OS1_S1 + 19);
            *(b + 155 * OS1_S1 + 54) = prefactor_y * *(b + 155 * OS1_S1 + 34) -
                                       p_over_q * *(b + 208 * OS1_S1 + 34);
            *(b + 155 * OS1_S1 + 55) =
                prefactor_z * *(b + 155 * OS1_S1 + 34) -
                p_over_q * *(b + 209 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 155 * OS1_S1 + 19);
            *(b + 156 * OS1_S1 + 35) =
                prefactor_x * *(b + 156 * OS1_S1 + 20) -
                p_over_q * *(b + 201 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 156 * OS1_S1 + 10);
            *(b + 156 * OS1_S1 + 36) =
                prefactor_y * *(b + 156 * OS1_S1 + 20) -
                p_over_q * *(b + 210 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 20);
            *(b + 156 * OS1_S1 + 37) = prefactor_z * *(b + 156 * OS1_S1 + 20) -
                                       p_over_q * *(b + 211 * OS1_S1 + 20);
            *(b + 156 * OS1_S1 + 38) =
                prefactor_y * *(b + 156 * OS1_S1 + 21) -
                p_over_q * *(b + 210 * OS1_S1 + 21) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 21) +
                one_over_two_q * *(b + 156 * OS1_S1 + 10);
            *(b + 156 * OS1_S1 + 39) = prefactor_z * *(b + 156 * OS1_S1 + 21) -
                                       p_over_q * *(b + 211 * OS1_S1 + 21);
            *(b + 156 * OS1_S1 + 40) =
                prefactor_z * *(b + 156 * OS1_S1 + 22) -
                p_over_q * *(b + 211 * OS1_S1 + 22) +
                one_over_two_q * *(b + 156 * OS1_S1 + 10);
            *(b + 156 * OS1_S1 + 41) =
                prefactor_x * *(b + 156 * OS1_S1 + 26) -
                p_over_q * *(b + 201 * OS1_S1 + 26) +
                one_over_two_q * *(b + 156 * OS1_S1 + 16);
            *(b + 156 * OS1_S1 + 42) = prefactor_z * *(b + 156 * OS1_S1 + 23) -
                                       p_over_q * *(b + 211 * OS1_S1 + 23);
            *(b + 156 * OS1_S1 + 43) =
                prefactor_y * *(b + 156 * OS1_S1 + 25) -
                p_over_q * *(b + 210 * OS1_S1 + 25) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 25);
            *(b + 156 * OS1_S1 + 44) =
                prefactor_x * *(b + 156 * OS1_S1 + 29) -
                p_over_q * *(b + 201 * OS1_S1 + 29) +
                one_over_two_q * *(b + 156 * OS1_S1 + 19);
            *(b + 156 * OS1_S1 + 45) = prefactor_x * *(b + 156 * OS1_S1 + 30) -
                                       p_over_q * *(b + 201 * OS1_S1 + 30);
            *(b + 156 * OS1_S1 + 46) = prefactor_z * *(b + 156 * OS1_S1 + 26) -
                                       p_over_q * *(b + 211 * OS1_S1 + 26);
            *(b + 156 * OS1_S1 + 47) = prefactor_x * *(b + 156 * OS1_S1 + 32) -
                                       p_over_q * *(b + 201 * OS1_S1 + 32);
            *(b + 156 * OS1_S1 + 48) = prefactor_x * *(b + 156 * OS1_S1 + 33) -
                                       p_over_q * *(b + 201 * OS1_S1 + 33);
            *(b + 156 * OS1_S1 + 49) = prefactor_x * *(b + 156 * OS1_S1 + 34) -
                                       p_over_q * *(b + 201 * OS1_S1 + 34);
            *(b + 156 * OS1_S1 + 50) =
                prefactor_y * *(b + 156 * OS1_S1 + 30) -
                p_over_q * *(b + 210 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 156 * OS1_S1 + 16);
            *(b + 156 * OS1_S1 + 51) = prefactor_z * *(b + 156 * OS1_S1 + 30) -
                                       p_over_q * *(b + 211 * OS1_S1 + 30);
            *(b + 156 * OS1_S1 + 52) =
                prefactor_z * *(b + 156 * OS1_S1 + 31) -
                p_over_q * *(b + 211 * OS1_S1 + 31) +
                one_over_two_q * *(b + 156 * OS1_S1 + 16);
            *(b + 156 * OS1_S1 + 53) =
                prefactor_y * *(b + 156 * OS1_S1 + 33) -
                p_over_q * *(b + 210 * OS1_S1 + 33) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 33) +
                one_over_two_q * *(b + 156 * OS1_S1 + 19);
            *(b + 156 * OS1_S1 + 54) =
                prefactor_y * *(b + 156 * OS1_S1 + 34) -
                p_over_q * *(b + 210 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 34);
            *(b + 156 * OS1_S1 + 55) =
                prefactor_z * *(b + 156 * OS1_S1 + 34) -
                p_over_q * *(b + 211 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 156 * OS1_S1 + 19);
            *(b + 157 * OS1_S1 + 35) =
                prefactor_x * *(b + 157 * OS1_S1 + 20) -
                p_over_q * *(b + 202 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 157 * OS1_S1 + 10);
            *(b + 157 * OS1_S1 + 36) =
                prefactor_y * *(b + 157 * OS1_S1 + 20) -
                p_over_q * *(b + 211 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 20);
            *(b + 157 * OS1_S1 + 37) =
                prefactor_z * *(b + 157 * OS1_S1 + 20) -
                p_over_q * *(b + 212 * OS1_S1 + 20) +
                one_over_two_q * *(b + 112 * OS1_S1 + 20);
            *(b + 157 * OS1_S1 + 38) =
                prefactor_y * *(b + 157 * OS1_S1 + 21) -
                p_over_q * *(b + 211 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 21) +
                one_over_two_q * *(b + 157 * OS1_S1 + 10);
            *(b + 157 * OS1_S1 + 39) =
                prefactor_z * *(b + 157 * OS1_S1 + 21) -
                p_over_q * *(b + 212 * OS1_S1 + 21) +
                one_over_two_q * *(b + 112 * OS1_S1 + 21);
            *(b + 157 * OS1_S1 + 40) =
                prefactor_z * *(b + 157 * OS1_S1 + 22) -
                p_over_q * *(b + 212 * OS1_S1 + 22) +
                one_over_two_q * *(b + 112 * OS1_S1 + 22) +
                one_over_two_q * *(b + 157 * OS1_S1 + 10);
            *(b + 157 * OS1_S1 + 41) =
                prefactor_x * *(b + 157 * OS1_S1 + 26) -
                p_over_q * *(b + 202 * OS1_S1 + 26) +
                one_over_two_q * *(b + 157 * OS1_S1 + 16);
            *(b + 157 * OS1_S1 + 42) =
                prefactor_z * *(b + 157 * OS1_S1 + 23) -
                p_over_q * *(b + 212 * OS1_S1 + 23) +
                one_over_two_q * *(b + 112 * OS1_S1 + 23);
            *(b + 157 * OS1_S1 + 43) =
                prefactor_y * *(b + 157 * OS1_S1 + 25) -
                p_over_q * *(b + 211 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 25);
            *(b + 157 * OS1_S1 + 44) =
                prefactor_x * *(b + 157 * OS1_S1 + 29) -
                p_over_q * *(b + 202 * OS1_S1 + 29) +
                one_over_two_q * *(b + 157 * OS1_S1 + 19);
            *(b + 157 * OS1_S1 + 45) = prefactor_x * *(b + 157 * OS1_S1 + 30) -
                                       p_over_q * *(b + 202 * OS1_S1 + 30);
            *(b + 157 * OS1_S1 + 46) = prefactor_x * *(b + 157 * OS1_S1 + 31) -
                                       p_over_q * *(b + 202 * OS1_S1 + 31);
            *(b + 157 * OS1_S1 + 47) = prefactor_x * *(b + 157 * OS1_S1 + 32) -
                                       p_over_q * *(b + 202 * OS1_S1 + 32);
            *(b + 157 * OS1_S1 + 48) = prefactor_x * *(b + 157 * OS1_S1 + 33) -
                                       p_over_q * *(b + 202 * OS1_S1 + 33);
            *(b + 157 * OS1_S1 + 49) = prefactor_x * *(b + 157 * OS1_S1 + 34) -
                                       p_over_q * *(b + 202 * OS1_S1 + 34);
            *(b + 157 * OS1_S1 + 50) =
                prefactor_y * *(b + 157 * OS1_S1 + 30) -
                p_over_q * *(b + 211 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 157 * OS1_S1 + 16);
            *(b + 157 * OS1_S1 + 51) =
                prefactor_z * *(b + 157 * OS1_S1 + 30) -
                p_over_q * *(b + 212 * OS1_S1 + 30) +
                one_over_two_q * *(b + 112 * OS1_S1 + 30);
            *(b + 157 * OS1_S1 + 52) =
                prefactor_z * *(b + 157 * OS1_S1 + 31) -
                p_over_q * *(b + 212 * OS1_S1 + 31) +
                one_over_two_q * *(b + 112 * OS1_S1 + 31) +
                one_over_two_q * *(b + 157 * OS1_S1 + 16);
            *(b + 157 * OS1_S1 + 53) =
                prefactor_y * *(b + 157 * OS1_S1 + 33) -
                p_over_q * *(b + 211 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 33) +
                one_over_two_q * *(b + 157 * OS1_S1 + 19);
            *(b + 157 * OS1_S1 + 54) =
                prefactor_y * *(b + 157 * OS1_S1 + 34) -
                p_over_q * *(b + 211 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 34);
            *(b + 157 * OS1_S1 + 55) =
                prefactor_z * *(b + 157 * OS1_S1 + 34) -
                p_over_q * *(b + 212 * OS1_S1 + 34) +
                one_over_two_q * *(b + 112 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 157 * OS1_S1 + 19);
            *(b + 158 * OS1_S1 + 35) =
                prefactor_x * *(b + 158 * OS1_S1 + 20) -
                p_over_q * *(b + 203 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 158 * OS1_S1 + 10);
            *(b + 158 * OS1_S1 + 36) =
                prefactor_y * *(b + 158 * OS1_S1 + 20) -
                p_over_q * *(b + 212 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 20);
            *(b + 158 * OS1_S1 + 37) =
                prefactor_z * *(b + 158 * OS1_S1 + 20) -
                p_over_q * *(b + 213 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 20);
            *(b + 158 * OS1_S1 + 38) =
                prefactor_y * *(b + 158 * OS1_S1 + 21) -
                p_over_q * *(b + 212 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 21) +
                one_over_two_q * *(b + 158 * OS1_S1 + 10);
            *(b + 158 * OS1_S1 + 39) =
                prefactor_z * *(b + 158 * OS1_S1 + 21) -
                p_over_q * *(b + 213 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 21);
            *(b + 158 * OS1_S1 + 40) =
                prefactor_z * *(b + 158 * OS1_S1 + 22) -
                p_over_q * *(b + 213 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 22) +
                one_over_two_q * *(b + 158 * OS1_S1 + 10);
            *(b + 158 * OS1_S1 + 41) =
                prefactor_x * *(b + 158 * OS1_S1 + 26) -
                p_over_q * *(b + 203 * OS1_S1 + 26) +
                one_over_two_q * *(b + 158 * OS1_S1 + 16);
            *(b + 158 * OS1_S1 + 42) =
                prefactor_z * *(b + 158 * OS1_S1 + 23) -
                p_over_q * *(b + 213 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 23);
            *(b + 158 * OS1_S1 + 43) =
                prefactor_y * *(b + 158 * OS1_S1 + 25) -
                p_over_q * *(b + 212 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 25);
            *(b + 158 * OS1_S1 + 44) =
                prefactor_x * *(b + 158 * OS1_S1 + 29) -
                p_over_q * *(b + 203 * OS1_S1 + 29) +
                one_over_two_q * *(b + 158 * OS1_S1 + 19);
            *(b + 158 * OS1_S1 + 45) = prefactor_x * *(b + 158 * OS1_S1 + 30) -
                                       p_over_q * *(b + 203 * OS1_S1 + 30);
            *(b + 158 * OS1_S1 + 46) = prefactor_x * *(b + 158 * OS1_S1 + 31) -
                                       p_over_q * *(b + 203 * OS1_S1 + 31);
            *(b + 158 * OS1_S1 + 47) = prefactor_x * *(b + 158 * OS1_S1 + 32) -
                                       p_over_q * *(b + 203 * OS1_S1 + 32);
            *(b + 158 * OS1_S1 + 48) = prefactor_x * *(b + 158 * OS1_S1 + 33) -
                                       p_over_q * *(b + 203 * OS1_S1 + 33);
            *(b + 158 * OS1_S1 + 49) = prefactor_x * *(b + 158 * OS1_S1 + 34) -
                                       p_over_q * *(b + 203 * OS1_S1 + 34);
            *(b + 158 * OS1_S1 + 50) =
                prefactor_y * *(b + 158 * OS1_S1 + 30) -
                p_over_q * *(b + 212 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 158 * OS1_S1 + 16);
            *(b + 158 * OS1_S1 + 51) =
                prefactor_z * *(b + 158 * OS1_S1 + 30) -
                p_over_q * *(b + 213 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 30);
            *(b + 158 * OS1_S1 + 52) =
                prefactor_z * *(b + 158 * OS1_S1 + 31) -
                p_over_q * *(b + 213 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 31) +
                one_over_two_q * *(b + 158 * OS1_S1 + 16);
            *(b + 158 * OS1_S1 + 53) =
                prefactor_y * *(b + 158 * OS1_S1 + 33) -
                p_over_q * *(b + 212 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 33) +
                one_over_two_q * *(b + 158 * OS1_S1 + 19);
            *(b + 158 * OS1_S1 + 54) =
                prefactor_y * *(b + 158 * OS1_S1 + 34) -
                p_over_q * *(b + 212 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 34);
            *(b + 158 * OS1_S1 + 55) =
                prefactor_z * *(b + 158 * OS1_S1 + 34) -
                p_over_q * *(b + 213 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 158 * OS1_S1 + 19);
            *(b + 159 * OS1_S1 + 35) =
                prefactor_x * *(b + 159 * OS1_S1 + 20) -
                p_over_q * *(b + 204 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 10);
            *(b + 159 * OS1_S1 + 36) =
                prefactor_y * *(b + 159 * OS1_S1 + 20) -
                p_over_q * *(b + 213 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 20);
            *(b + 159 * OS1_S1 + 37) =
                prefactor_z * *(b + 159 * OS1_S1 + 20) -
                p_over_q * *(b + 214 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 20);
            *(b + 159 * OS1_S1 + 38) =
                prefactor_y * *(b + 159 * OS1_S1 + 21) -
                p_over_q * *(b + 213 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 21) +
                one_over_two_q * *(b + 159 * OS1_S1 + 10);
            *(b + 159 * OS1_S1 + 39) =
                prefactor_z * *(b + 159 * OS1_S1 + 21) -
                p_over_q * *(b + 214 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 21);
            *(b + 159 * OS1_S1 + 40) =
                prefactor_z * *(b + 159 * OS1_S1 + 22) -
                p_over_q * *(b + 214 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 22) +
                one_over_two_q * *(b + 159 * OS1_S1 + 10);
            *(b + 159 * OS1_S1 + 41) =
                prefactor_x * *(b + 159 * OS1_S1 + 26) -
                p_over_q * *(b + 204 * OS1_S1 + 26) +
                one_over_two_q * *(b + 159 * OS1_S1 + 16);
            *(b + 159 * OS1_S1 + 42) =
                prefactor_z * *(b + 159 * OS1_S1 + 23) -
                p_over_q * *(b + 214 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 23);
            *(b + 159 * OS1_S1 + 43) =
                prefactor_y * *(b + 159 * OS1_S1 + 25) -
                p_over_q * *(b + 213 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 25);
            *(b + 159 * OS1_S1 + 44) =
                prefactor_x * *(b + 159 * OS1_S1 + 29) -
                p_over_q * *(b + 204 * OS1_S1 + 29) +
                one_over_two_q * *(b + 159 * OS1_S1 + 19);
            *(b + 159 * OS1_S1 + 45) = prefactor_x * *(b + 159 * OS1_S1 + 30) -
                                       p_over_q * *(b + 204 * OS1_S1 + 30);
            *(b + 159 * OS1_S1 + 46) = prefactor_x * *(b + 159 * OS1_S1 + 31) -
                                       p_over_q * *(b + 204 * OS1_S1 + 31);
            *(b + 159 * OS1_S1 + 47) = prefactor_x * *(b + 159 * OS1_S1 + 32) -
                                       p_over_q * *(b + 204 * OS1_S1 + 32);
            *(b + 159 * OS1_S1 + 48) = prefactor_x * *(b + 159 * OS1_S1 + 33) -
                                       p_over_q * *(b + 204 * OS1_S1 + 33);
            *(b + 159 * OS1_S1 + 49) = prefactor_x * *(b + 159 * OS1_S1 + 34) -
                                       p_over_q * *(b + 204 * OS1_S1 + 34);
            *(b + 159 * OS1_S1 + 50) =
                prefactor_y * *(b + 159 * OS1_S1 + 30) -
                p_over_q * *(b + 213 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 16);
            *(b + 159 * OS1_S1 + 51) =
                prefactor_z * *(b + 159 * OS1_S1 + 30) -
                p_over_q * *(b + 214 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 30);
            *(b + 159 * OS1_S1 + 52) =
                prefactor_z * *(b + 159 * OS1_S1 + 31) -
                p_over_q * *(b + 214 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 31) +
                one_over_two_q * *(b + 159 * OS1_S1 + 16);
            *(b + 159 * OS1_S1 + 53) =
                prefactor_y * *(b + 159 * OS1_S1 + 33) -
                p_over_q * *(b + 213 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 33) +
                one_over_two_q * *(b + 159 * OS1_S1 + 19);
            *(b + 159 * OS1_S1 + 54) =
                prefactor_y * *(b + 159 * OS1_S1 + 34) -
                p_over_q * *(b + 213 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 34);
            *(b + 159 * OS1_S1 + 55) =
                prefactor_z * *(b + 159 * OS1_S1 + 34) -
                p_over_q * *(b + 214 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 19);
            *(b + 160 * OS1_S1 + 35) =
                prefactor_x * *(b + 160 * OS1_S1 + 20) -
                p_over_q * *(b + 205 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 160 * OS1_S1 + 10);
            *(b + 160 * OS1_S1 + 36) =
                prefactor_y * *(b + 160 * OS1_S1 + 20) -
                p_over_q * *(b + 214 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 20);
            *(b + 160 * OS1_S1 + 37) =
                prefactor_z * *(b + 160 * OS1_S1 + 20) -
                p_over_q * *(b + 215 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 20);
            *(b + 160 * OS1_S1 + 38) =
                prefactor_y * *(b + 160 * OS1_S1 + 21) -
                p_over_q * *(b + 214 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 21) +
                one_over_two_q * *(b + 160 * OS1_S1 + 10);
            *(b + 160 * OS1_S1 + 39) =
                prefactor_z * *(b + 160 * OS1_S1 + 21) -
                p_over_q * *(b + 215 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 21);
            *(b + 160 * OS1_S1 + 40) =
                prefactor_z * *(b + 160 * OS1_S1 + 22) -
                p_over_q * *(b + 215 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 22) +
                one_over_two_q * *(b + 160 * OS1_S1 + 10);
            *(b + 160 * OS1_S1 + 41) =
                prefactor_x * *(b + 160 * OS1_S1 + 26) -
                p_over_q * *(b + 205 * OS1_S1 + 26) +
                one_over_two_q * *(b + 160 * OS1_S1 + 16);
            *(b + 160 * OS1_S1 + 42) =
                prefactor_z * *(b + 160 * OS1_S1 + 23) -
                p_over_q * *(b + 215 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 23);
            *(b + 160 * OS1_S1 + 43) =
                prefactor_y * *(b + 160 * OS1_S1 + 25) -
                p_over_q * *(b + 214 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 25);
            *(b + 160 * OS1_S1 + 44) =
                prefactor_x * *(b + 160 * OS1_S1 + 29) -
                p_over_q * *(b + 205 * OS1_S1 + 29) +
                one_over_two_q * *(b + 160 * OS1_S1 + 19);
            *(b + 160 * OS1_S1 + 45) = prefactor_x * *(b + 160 * OS1_S1 + 30) -
                                       p_over_q * *(b + 205 * OS1_S1 + 30);
            *(b + 160 * OS1_S1 + 46) = prefactor_x * *(b + 160 * OS1_S1 + 31) -
                                       p_over_q * *(b + 205 * OS1_S1 + 31);
            *(b + 160 * OS1_S1 + 47) = prefactor_x * *(b + 160 * OS1_S1 + 32) -
                                       p_over_q * *(b + 205 * OS1_S1 + 32);
            *(b + 160 * OS1_S1 + 48) = prefactor_x * *(b + 160 * OS1_S1 + 33) -
                                       p_over_q * *(b + 205 * OS1_S1 + 33);
            *(b + 160 * OS1_S1 + 49) = prefactor_x * *(b + 160 * OS1_S1 + 34) -
                                       p_over_q * *(b + 205 * OS1_S1 + 34);
            *(b + 160 * OS1_S1 + 50) =
                prefactor_y * *(b + 160 * OS1_S1 + 30) -
                p_over_q * *(b + 214 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 160 * OS1_S1 + 16);
            *(b + 160 * OS1_S1 + 51) =
                prefactor_z * *(b + 160 * OS1_S1 + 30) -
                p_over_q * *(b + 215 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 30);
            *(b + 160 * OS1_S1 + 52) =
                prefactor_z * *(b + 160 * OS1_S1 + 31) -
                p_over_q * *(b + 215 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 31) +
                one_over_two_q * *(b + 160 * OS1_S1 + 16);
            *(b + 160 * OS1_S1 + 53) =
                prefactor_y * *(b + 160 * OS1_S1 + 33) -
                p_over_q * *(b + 214 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 33) +
                one_over_two_q * *(b + 160 * OS1_S1 + 19);
            *(b + 160 * OS1_S1 + 54) =
                prefactor_y * *(b + 160 * OS1_S1 + 34) -
                p_over_q * *(b + 214 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 34);
            *(b + 160 * OS1_S1 + 55) =
                prefactor_z * *(b + 160 * OS1_S1 + 34) -
                p_over_q * *(b + 215 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 160 * OS1_S1 + 19);
            *(b + 161 * OS1_S1 + 35) =
                prefactor_x * *(b + 161 * OS1_S1 + 20) -
                p_over_q * *(b + 206 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 10);
            *(b + 161 * OS1_S1 + 36) =
                prefactor_y * *(b + 161 * OS1_S1 + 20) -
                p_over_q * *(b + 215 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 20);
            *(b + 161 * OS1_S1 + 37) =
                prefactor_z * *(b + 161 * OS1_S1 + 20) -
                p_over_q * *(b + 216 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 20);
            *(b + 161 * OS1_S1 + 38) =
                prefactor_y * *(b + 161 * OS1_S1 + 21) -
                p_over_q * *(b + 215 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 21) +
                one_over_two_q * *(b + 161 * OS1_S1 + 10);
            *(b + 161 * OS1_S1 + 39) =
                prefactor_y * *(b + 161 * OS1_S1 + 22) -
                p_over_q * *(b + 215 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 22);
            *(b + 161 * OS1_S1 + 40) =
                prefactor_z * *(b + 161 * OS1_S1 + 22) -
                p_over_q * *(b + 216 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 22) +
                one_over_two_q * *(b + 161 * OS1_S1 + 10);
            *(b + 161 * OS1_S1 + 41) =
                prefactor_x * *(b + 161 * OS1_S1 + 26) -
                p_over_q * *(b + 206 * OS1_S1 + 26) +
                one_over_two_q * *(b + 161 * OS1_S1 + 16);
            *(b + 161 * OS1_S1 + 42) =
                prefactor_z * *(b + 161 * OS1_S1 + 23) -
                p_over_q * *(b + 216 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 23);
            *(b + 161 * OS1_S1 + 43) =
                prefactor_y * *(b + 161 * OS1_S1 + 25) -
                p_over_q * *(b + 215 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 25);
            *(b + 161 * OS1_S1 + 44) =
                prefactor_x * *(b + 161 * OS1_S1 + 29) -
                p_over_q * *(b + 206 * OS1_S1 + 29) +
                one_over_two_q * *(b + 161 * OS1_S1 + 19);
            *(b + 161 * OS1_S1 + 45) = prefactor_x * *(b + 161 * OS1_S1 + 30) -
                                       p_over_q * *(b + 206 * OS1_S1 + 30);
            *(b + 161 * OS1_S1 + 46) = prefactor_x * *(b + 161 * OS1_S1 + 31) -
                                       p_over_q * *(b + 206 * OS1_S1 + 31);
            *(b + 161 * OS1_S1 + 47) = prefactor_x * *(b + 161 * OS1_S1 + 32) -
                                       p_over_q * *(b + 206 * OS1_S1 + 32);
            *(b + 161 * OS1_S1 + 48) = prefactor_x * *(b + 161 * OS1_S1 + 33) -
                                       p_over_q * *(b + 206 * OS1_S1 + 33);
            *(b + 161 * OS1_S1 + 49) = prefactor_x * *(b + 161 * OS1_S1 + 34) -
                                       p_over_q * *(b + 206 * OS1_S1 + 34);
            *(b + 161 * OS1_S1 + 50) =
                prefactor_y * *(b + 161 * OS1_S1 + 30) -
                p_over_q * *(b + 215 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 16);
            *(b + 161 * OS1_S1 + 51) =
                prefactor_z * *(b + 161 * OS1_S1 + 30) -
                p_over_q * *(b + 216 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 30);
            *(b + 161 * OS1_S1 + 52) =
                prefactor_z * *(b + 161 * OS1_S1 + 31) -
                p_over_q * *(b + 216 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 31) +
                one_over_two_q * *(b + 161 * OS1_S1 + 16);
            *(b + 161 * OS1_S1 + 53) =
                prefactor_y * *(b + 161 * OS1_S1 + 33) -
                p_over_q * *(b + 215 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 33) +
                one_over_two_q * *(b + 161 * OS1_S1 + 19);
            *(b + 161 * OS1_S1 + 54) =
                prefactor_y * *(b + 161 * OS1_S1 + 34) -
                p_over_q * *(b + 215 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 34);
            *(b + 161 * OS1_S1 + 55) =
                prefactor_z * *(b + 161 * OS1_S1 + 34) -
                p_over_q * *(b + 216 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 19);
            *(b + 162 * OS1_S1 + 35) =
                prefactor_x * *(b + 162 * OS1_S1 + 20) -
                p_over_q * *(b + 207 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 162 * OS1_S1 + 10);
            *(b + 162 * OS1_S1 + 36) =
                prefactor_y * *(b + 162 * OS1_S1 + 20) -
                p_over_q * *(b + 216 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 20);
            *(b + 162 * OS1_S1 + 37) =
                prefactor_z * *(b + 162 * OS1_S1 + 20) -
                p_over_q * *(b + 217 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 20);
            *(b + 162 * OS1_S1 + 38) =
                prefactor_y * *(b + 162 * OS1_S1 + 21) -
                p_over_q * *(b + 216 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 21) +
                one_over_two_q * *(b + 162 * OS1_S1 + 10);
            *(b + 162 * OS1_S1 + 39) =
                prefactor_y * *(b + 162 * OS1_S1 + 22) -
                p_over_q * *(b + 216 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 22);
            *(b + 162 * OS1_S1 + 40) =
                prefactor_z * *(b + 162 * OS1_S1 + 22) -
                p_over_q * *(b + 217 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 22) +
                one_over_two_q * *(b + 162 * OS1_S1 + 10);
            *(b + 162 * OS1_S1 + 41) =
                prefactor_x * *(b + 162 * OS1_S1 + 26) -
                p_over_q * *(b + 207 * OS1_S1 + 26) +
                one_over_two_q * *(b + 162 * OS1_S1 + 16);
            *(b + 162 * OS1_S1 + 42) =
                prefactor_z * *(b + 162 * OS1_S1 + 23) -
                p_over_q * *(b + 217 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 23);
            *(b + 162 * OS1_S1 + 43) =
                prefactor_y * *(b + 162 * OS1_S1 + 25) -
                p_over_q * *(b + 216 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 25);
            *(b + 162 * OS1_S1 + 44) =
                prefactor_x * *(b + 162 * OS1_S1 + 29) -
                p_over_q * *(b + 207 * OS1_S1 + 29) +
                one_over_two_q * *(b + 162 * OS1_S1 + 19);
            *(b + 162 * OS1_S1 + 45) = prefactor_x * *(b + 162 * OS1_S1 + 30) -
                                       p_over_q * *(b + 207 * OS1_S1 + 30);
            *(b + 162 * OS1_S1 + 46) = prefactor_x * *(b + 162 * OS1_S1 + 31) -
                                       p_over_q * *(b + 207 * OS1_S1 + 31);
            *(b + 162 * OS1_S1 + 47) = prefactor_x * *(b + 162 * OS1_S1 + 32) -
                                       p_over_q * *(b + 207 * OS1_S1 + 32);
            *(b + 162 * OS1_S1 + 48) = prefactor_x * *(b + 162 * OS1_S1 + 33) -
                                       p_over_q * *(b + 207 * OS1_S1 + 33);
            *(b + 162 * OS1_S1 + 49) = prefactor_x * *(b + 162 * OS1_S1 + 34) -
                                       p_over_q * *(b + 207 * OS1_S1 + 34);
            *(b + 162 * OS1_S1 + 50) =
                prefactor_y * *(b + 162 * OS1_S1 + 30) -
                p_over_q * *(b + 216 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 162 * OS1_S1 + 16);
            *(b + 162 * OS1_S1 + 51) =
                prefactor_z * *(b + 162 * OS1_S1 + 30) -
                p_over_q * *(b + 217 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 30);
            *(b + 162 * OS1_S1 + 52) =
                prefactor_z * *(b + 162 * OS1_S1 + 31) -
                p_over_q * *(b + 217 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 31) +
                one_over_two_q * *(b + 162 * OS1_S1 + 16);
            *(b + 162 * OS1_S1 + 53) =
                prefactor_y * *(b + 162 * OS1_S1 + 33) -
                p_over_q * *(b + 216 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 33) +
                one_over_two_q * *(b + 162 * OS1_S1 + 19);
            *(b + 162 * OS1_S1 + 54) =
                prefactor_y * *(b + 162 * OS1_S1 + 34) -
                p_over_q * *(b + 216 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 34);
            *(b + 162 * OS1_S1 + 55) =
                prefactor_z * *(b + 162 * OS1_S1 + 34) -
                p_over_q * *(b + 217 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 162 * OS1_S1 + 19);
            *(b + 163 * OS1_S1 + 35) =
                prefactor_x * *(b + 163 * OS1_S1 + 20) -
                p_over_q * *(b + 208 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 163 * OS1_S1 + 10);
            *(b + 163 * OS1_S1 + 36) =
                prefactor_y * *(b + 163 * OS1_S1 + 20) -
                p_over_q * *(b + 217 * OS1_S1 + 20) +
                one_over_two_q * *(b + 119 * OS1_S1 + 20);
            *(b + 163 * OS1_S1 + 37) =
                prefactor_z * *(b + 163 * OS1_S1 + 20) -
                p_over_q * *(b + 218 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 20);
            *(b + 163 * OS1_S1 + 38) =
                prefactor_y * *(b + 163 * OS1_S1 + 21) -
                p_over_q * *(b + 217 * OS1_S1 + 21) +
                one_over_two_q * *(b + 119 * OS1_S1 + 21) +
                one_over_two_q * *(b + 163 * OS1_S1 + 10);
            *(b + 163 * OS1_S1 + 39) =
                prefactor_y * *(b + 163 * OS1_S1 + 22) -
                p_over_q * *(b + 217 * OS1_S1 + 22) +
                one_over_two_q * *(b + 119 * OS1_S1 + 22);
            *(b + 163 * OS1_S1 + 40) =
                prefactor_z * *(b + 163 * OS1_S1 + 22) -
                p_over_q * *(b + 218 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 22) +
                one_over_two_q * *(b + 163 * OS1_S1 + 10);
            *(b + 163 * OS1_S1 + 41) =
                prefactor_x * *(b + 163 * OS1_S1 + 26) -
                p_over_q * *(b + 208 * OS1_S1 + 26) +
                one_over_two_q * *(b + 163 * OS1_S1 + 16);
            *(b + 163 * OS1_S1 + 42) =
                prefactor_z * *(b + 163 * OS1_S1 + 23) -
                p_over_q * *(b + 218 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 23);
            *(b + 163 * OS1_S1 + 43) =
                prefactor_y * *(b + 163 * OS1_S1 + 25) -
                p_over_q * *(b + 217 * OS1_S1 + 25) +
                one_over_two_q * *(b + 119 * OS1_S1 + 25);
            *(b + 163 * OS1_S1 + 44) =
                prefactor_x * *(b + 163 * OS1_S1 + 29) -
                p_over_q * *(b + 208 * OS1_S1 + 29) +
                one_over_two_q * *(b + 163 * OS1_S1 + 19);
            *(b + 163 * OS1_S1 + 45) = prefactor_x * *(b + 163 * OS1_S1 + 30) -
                                       p_over_q * *(b + 208 * OS1_S1 + 30);
            *(b + 163 * OS1_S1 + 46) = prefactor_x * *(b + 163 * OS1_S1 + 31) -
                                       p_over_q * *(b + 208 * OS1_S1 + 31);
            *(b + 163 * OS1_S1 + 47) = prefactor_x * *(b + 163 * OS1_S1 + 32) -
                                       p_over_q * *(b + 208 * OS1_S1 + 32);
            *(b + 163 * OS1_S1 + 48) = prefactor_x * *(b + 163 * OS1_S1 + 33) -
                                       p_over_q * *(b + 208 * OS1_S1 + 33);
            *(b + 163 * OS1_S1 + 49) = prefactor_x * *(b + 163 * OS1_S1 + 34) -
                                       p_over_q * *(b + 208 * OS1_S1 + 34);
            *(b + 163 * OS1_S1 + 50) =
                prefactor_y * *(b + 163 * OS1_S1 + 30) -
                p_over_q * *(b + 217 * OS1_S1 + 30) +
                one_over_two_q * *(b + 119 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 163 * OS1_S1 + 16);
            *(b + 163 * OS1_S1 + 51) =
                prefactor_z * *(b + 163 * OS1_S1 + 30) -
                p_over_q * *(b + 218 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 30);
            *(b + 163 * OS1_S1 + 52) =
                prefactor_z * *(b + 163 * OS1_S1 + 31) -
                p_over_q * *(b + 218 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 31) +
                one_over_two_q * *(b + 163 * OS1_S1 + 16);
            *(b + 163 * OS1_S1 + 53) =
                prefactor_y * *(b + 163 * OS1_S1 + 33) -
                p_over_q * *(b + 217 * OS1_S1 + 33) +
                one_over_two_q * *(b + 119 * OS1_S1 + 33) +
                one_over_two_q * *(b + 163 * OS1_S1 + 19);
            *(b + 163 * OS1_S1 + 54) =
                prefactor_y * *(b + 163 * OS1_S1 + 34) -
                p_over_q * *(b + 217 * OS1_S1 + 34) +
                one_over_two_q * *(b + 119 * OS1_S1 + 34);
            *(b + 163 * OS1_S1 + 55) =
                prefactor_z * *(b + 163 * OS1_S1 + 34) -
                p_over_q * *(b + 218 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 163 * OS1_S1 + 19);
            *(b + 164 * OS1_S1 + 35) =
                prefactor_x * *(b + 164 * OS1_S1 + 20) -
                p_over_q * *(b + 209 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 164 * OS1_S1 + 10);
            *(b + 164 * OS1_S1 + 36) = prefactor_y * *(b + 164 * OS1_S1 + 20) -
                                       p_over_q * *(b + 218 * OS1_S1 + 20);
            *(b + 164 * OS1_S1 + 37) =
                prefactor_z * *(b + 164 * OS1_S1 + 20) -
                p_over_q * *(b + 219 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 20);
            *(b + 164 * OS1_S1 + 38) =
                prefactor_y * *(b + 164 * OS1_S1 + 21) -
                p_over_q * *(b + 218 * OS1_S1 + 21) +
                one_over_two_q * *(b + 164 * OS1_S1 + 10);
            *(b + 164 * OS1_S1 + 39) = prefactor_y * *(b + 164 * OS1_S1 + 22) -
                                       p_over_q * *(b + 218 * OS1_S1 + 22);
            *(b + 164 * OS1_S1 + 40) =
                prefactor_z * *(b + 164 * OS1_S1 + 22) -
                p_over_q * *(b + 219 * OS1_S1 + 22) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 22) +
                one_over_two_q * *(b + 164 * OS1_S1 + 10);
            *(b + 164 * OS1_S1 + 41) =
                prefactor_x * *(b + 164 * OS1_S1 + 26) -
                p_over_q * *(b + 209 * OS1_S1 + 26) +
                one_over_two_q * *(b + 164 * OS1_S1 + 16);
            *(b + 164 * OS1_S1 + 42) =
                prefactor_z * *(b + 164 * OS1_S1 + 23) -
                p_over_q * *(b + 219 * OS1_S1 + 23) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 23);
            *(b + 164 * OS1_S1 + 43) = prefactor_y * *(b + 164 * OS1_S1 + 25) -
                                       p_over_q * *(b + 218 * OS1_S1 + 25);
            *(b + 164 * OS1_S1 + 44) =
                prefactor_x * *(b + 164 * OS1_S1 + 29) -
                p_over_q * *(b + 209 * OS1_S1 + 29) +
                one_over_two_q * *(b + 164 * OS1_S1 + 19);
            *(b + 164 * OS1_S1 + 45) = prefactor_x * *(b + 164 * OS1_S1 + 30) -
                                       p_over_q * *(b + 209 * OS1_S1 + 30);
            *(b + 164 * OS1_S1 + 46) = prefactor_x * *(b + 164 * OS1_S1 + 31) -
                                       p_over_q * *(b + 209 * OS1_S1 + 31);
            *(b + 164 * OS1_S1 + 47) = prefactor_x * *(b + 164 * OS1_S1 + 32) -
                                       p_over_q * *(b + 209 * OS1_S1 + 32);
            *(b + 164 * OS1_S1 + 48) = prefactor_y * *(b + 164 * OS1_S1 + 29) -
                                       p_over_q * *(b + 218 * OS1_S1 + 29);
            *(b + 164 * OS1_S1 + 49) = prefactor_x * *(b + 164 * OS1_S1 + 34) -
                                       p_over_q * *(b + 209 * OS1_S1 + 34);
            *(b + 164 * OS1_S1 + 50) =
                prefactor_y * *(b + 164 * OS1_S1 + 30) -
                p_over_q * *(b + 218 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 164 * OS1_S1 + 16);
            *(b + 164 * OS1_S1 + 51) =
                prefactor_z * *(b + 164 * OS1_S1 + 30) -
                p_over_q * *(b + 219 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 30);
            *(b + 164 * OS1_S1 + 52) =
                prefactor_z * *(b + 164 * OS1_S1 + 31) -
                p_over_q * *(b + 219 * OS1_S1 + 31) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 31) +
                one_over_two_q * *(b + 164 * OS1_S1 + 16);
            *(b + 164 * OS1_S1 + 53) =
                prefactor_y * *(b + 164 * OS1_S1 + 33) -
                p_over_q * *(b + 218 * OS1_S1 + 33) +
                one_over_two_q * *(b + 164 * OS1_S1 + 19);
            *(b + 164 * OS1_S1 + 54) = prefactor_y * *(b + 164 * OS1_S1 + 34) -
                                       p_over_q * *(b + 218 * OS1_S1 + 34);
            *(b + 164 * OS1_S1 + 55) =
                prefactor_z * *(b + 164 * OS1_S1 + 34) -
                p_over_q * *(b + 219 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 164 * OS1_S1 + 19);
            return;
        }
    }
}
