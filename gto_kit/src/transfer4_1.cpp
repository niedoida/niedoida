/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_7_4(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 84 * OS1_S1 + 20) =
                prefactor_x * *(b + 84 * OS1_S1 + 10) -
                p_over_q * *(b + 120 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 84 * OS1_S1 + 4);
            *(b + 84 * OS1_S1 + 21) = prefactor_y * *(b + 84 * OS1_S1 + 10) -
                                      p_over_q * *(b + 121 * OS1_S1 + 10);
            *(b + 84 * OS1_S1 + 22) = prefactor_z * *(b + 84 * OS1_S1 + 10) -
                                      p_over_q * *(b + 122 * OS1_S1 + 10);
            *(b + 84 * OS1_S1 + 23) = prefactor_y * *(b + 84 * OS1_S1 + 11) -
                                      p_over_q * *(b + 121 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 4);
            *(b + 84 * OS1_S1 + 24) = prefactor_z * *(b + 84 * OS1_S1 + 11) -
                                      p_over_q * *(b + 122 * OS1_S1 + 11);
            *(b + 84 * OS1_S1 + 25) = prefactor_z * *(b + 84 * OS1_S1 + 12) -
                                      p_over_q * *(b + 122 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 4);
            *(b + 84 * OS1_S1 + 26) =
                prefactor_x * *(b + 84 * OS1_S1 + 16) -
                p_over_q * *(b + 120 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 16);
            *(b + 84 * OS1_S1 + 27) = prefactor_z * *(b + 84 * OS1_S1 + 13) -
                                      p_over_q * *(b + 122 * OS1_S1 + 13);
            *(b + 84 * OS1_S1 + 28) = prefactor_y * *(b + 84 * OS1_S1 + 15) -
                                      p_over_q * *(b + 121 * OS1_S1 + 15);
            *(b + 84 * OS1_S1 + 29) =
                prefactor_x * *(b + 84 * OS1_S1 + 19) -
                p_over_q * *(b + 120 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 19);
            *(b + 84 * OS1_S1 + 30) =
                prefactor_y * *(b + 84 * OS1_S1 + 16) -
                p_over_q * *(b + 121 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 84 * OS1_S1 + 7);
            *(b + 84 * OS1_S1 + 31) = prefactor_z * *(b + 84 * OS1_S1 + 16) -
                                      p_over_q * *(b + 122 * OS1_S1 + 16);
            *(b + 84 * OS1_S1 + 32) = prefactor_z * *(b + 84 * OS1_S1 + 17) -
                                      p_over_q * *(b + 122 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 7);
            *(b + 84 * OS1_S1 + 33) = prefactor_y * *(b + 84 * OS1_S1 + 19) -
                                      p_over_q * *(b + 121 * OS1_S1 + 19);
            *(b + 84 * OS1_S1 + 34) =
                prefactor_z * *(b + 84 * OS1_S1 + 19) -
                p_over_q * *(b + 122 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 84 * OS1_S1 + 9);
            *(b + 85 * OS1_S1 + 20) =
                prefactor_x * *(b + 85 * OS1_S1 + 10) -
                p_over_q * *(b + 121 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 85 * OS1_S1 + 4);
            *(b + 85 * OS1_S1 + 21) = prefactor_y * *(b + 85 * OS1_S1 + 10) -
                                      p_over_q * *(b + 123 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 10);
            *(b + 85 * OS1_S1 + 22) = prefactor_z * *(b + 85 * OS1_S1 + 10) -
                                      p_over_q * *(b + 124 * OS1_S1 + 10);
            *(b + 85 * OS1_S1 + 23) = prefactor_y * *(b + 85 * OS1_S1 + 11) -
                                      p_over_q * *(b + 123 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 4);
            *(b + 85 * OS1_S1 + 24) = prefactor_z * *(b + 85 * OS1_S1 + 11) -
                                      p_over_q * *(b + 124 * OS1_S1 + 11);
            *(b + 85 * OS1_S1 + 25) = prefactor_z * *(b + 85 * OS1_S1 + 12) -
                                      p_over_q * *(b + 124 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 4);
            *(b + 85 * OS1_S1 + 26) =
                prefactor_x * *(b + 85 * OS1_S1 + 16) -
                p_over_q * *(b + 121 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 16);
            *(b + 85 * OS1_S1 + 27) = prefactor_z * *(b + 85 * OS1_S1 + 13) -
                                      p_over_q * *(b + 124 * OS1_S1 + 13);
            *(b + 85 * OS1_S1 + 28) = prefactor_y * *(b + 85 * OS1_S1 + 15) -
                                      p_over_q * *(b + 123 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 15);
            *(b + 85 * OS1_S1 + 29) =
                prefactor_x * *(b + 85 * OS1_S1 + 19) -
                p_over_q * *(b + 121 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 19);
            *(b + 85 * OS1_S1 + 30) =
                prefactor_y * *(b + 85 * OS1_S1 + 16) -
                p_over_q * *(b + 123 * OS1_S1 + 16) +
                one_over_two_q * *(b + 56 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 85 * OS1_S1 + 7);
            *(b + 85 * OS1_S1 + 31) = prefactor_z * *(b + 85 * OS1_S1 + 16) -
                                      p_over_q * *(b + 124 * OS1_S1 + 16);
            *(b + 85 * OS1_S1 + 32) = prefactor_z * *(b + 85 * OS1_S1 + 17) -
                                      p_over_q * *(b + 124 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 7);
            *(b + 85 * OS1_S1 + 33) = prefactor_y * *(b + 85 * OS1_S1 + 19) -
                                      p_over_q * *(b + 123 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 19);
            *(b + 85 * OS1_S1 + 34) =
                prefactor_z * *(b + 85 * OS1_S1 + 19) -
                p_over_q * *(b + 124 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 85 * OS1_S1 + 9);
            *(b + 86 * OS1_S1 + 20) =
                prefactor_x * *(b + 86 * OS1_S1 + 10) -
                p_over_q * *(b + 122 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 86 * OS1_S1 + 4);
            *(b + 86 * OS1_S1 + 21) = prefactor_y * *(b + 86 * OS1_S1 + 10) -
                                      p_over_q * *(b + 124 * OS1_S1 + 10);
            *(b + 86 * OS1_S1 + 22) = prefactor_z * *(b + 86 * OS1_S1 + 10) -
                                      p_over_q * *(b + 125 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 10);
            *(b + 86 * OS1_S1 + 23) = prefactor_y * *(b + 86 * OS1_S1 + 11) -
                                      p_over_q * *(b + 124 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 4);
            *(b + 86 * OS1_S1 + 24) = prefactor_y * *(b + 86 * OS1_S1 + 12) -
                                      p_over_q * *(b + 124 * OS1_S1 + 12);
            *(b + 86 * OS1_S1 + 25) = prefactor_z * *(b + 86 * OS1_S1 + 12) -
                                      p_over_q * *(b + 125 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 4);
            *(b + 86 * OS1_S1 + 26) =
                prefactor_x * *(b + 86 * OS1_S1 + 16) -
                p_over_q * *(b + 122 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 16);
            *(b + 86 * OS1_S1 + 27) = prefactor_z * *(b + 86 * OS1_S1 + 13) -
                                      p_over_q * *(b + 125 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 13);
            *(b + 86 * OS1_S1 + 28) = prefactor_y * *(b + 86 * OS1_S1 + 15) -
                                      p_over_q * *(b + 124 * OS1_S1 + 15);
            *(b + 86 * OS1_S1 + 29) =
                prefactor_x * *(b + 86 * OS1_S1 + 19) -
                p_over_q * *(b + 122 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 19);
            *(b + 86 * OS1_S1 + 30) =
                prefactor_y * *(b + 86 * OS1_S1 + 16) -
                p_over_q * *(b + 124 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 86 * OS1_S1 + 7);
            *(b + 86 * OS1_S1 + 31) = prefactor_z * *(b + 86 * OS1_S1 + 16) -
                                      p_over_q * *(b + 125 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 16);
            *(b + 86 * OS1_S1 + 32) = prefactor_y * *(b + 86 * OS1_S1 + 18) -
                                      p_over_q * *(b + 124 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 9);
            *(b + 86 * OS1_S1 + 33) = prefactor_y * *(b + 86 * OS1_S1 + 19) -
                                      p_over_q * *(b + 124 * OS1_S1 + 19);
            *(b + 86 * OS1_S1 + 34) =
                prefactor_z * *(b + 86 * OS1_S1 + 19) -
                p_over_q * *(b + 125 * OS1_S1 + 19) +
                one_over_two_q * *(b + 56 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 86 * OS1_S1 + 9);
            *(b + 87 * OS1_S1 + 20) =
                prefactor_x * *(b + 87 * OS1_S1 + 10) -
                p_over_q * *(b + 123 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 4);
            *(b + 87 * OS1_S1 + 21) =
                prefactor_y * *(b + 87 * OS1_S1 + 10) -
                p_over_q * *(b + 126 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 10);
            *(b + 87 * OS1_S1 + 22) = prefactor_z * *(b + 87 * OS1_S1 + 10) -
                                      p_over_q * *(b + 127 * OS1_S1 + 10);
            *(b + 87 * OS1_S1 + 23) =
                prefactor_y * *(b + 87 * OS1_S1 + 11) -
                p_over_q * *(b + 126 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 11) +
                one_over_two_q * *(b + 87 * OS1_S1 + 4);
            *(b + 87 * OS1_S1 + 24) = prefactor_z * *(b + 87 * OS1_S1 + 11) -
                                      p_over_q * *(b + 127 * OS1_S1 + 11);
            *(b + 87 * OS1_S1 + 25) = prefactor_z * *(b + 87 * OS1_S1 + 12) -
                                      p_over_q * *(b + 127 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 87 * OS1_S1 + 4);
            *(b + 87 * OS1_S1 + 26) =
                prefactor_x * *(b + 87 * OS1_S1 + 16) -
                p_over_q * *(b + 123 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 16);
            *(b + 87 * OS1_S1 + 27) = prefactor_z * *(b + 87 * OS1_S1 + 13) -
                                      p_over_q * *(b + 127 * OS1_S1 + 13);
            *(b + 87 * OS1_S1 + 28) =
                prefactor_y * *(b + 87 * OS1_S1 + 15) -
                p_over_q * *(b + 126 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 15);
            *(b + 87 * OS1_S1 + 29) =
                prefactor_x * *(b + 87 * OS1_S1 + 19) -
                p_over_q * *(b + 123 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 19);
            *(b + 87 * OS1_S1 + 30) =
                prefactor_y * *(b + 87 * OS1_S1 + 16) -
                p_over_q * *(b + 126 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 7);
            *(b + 87 * OS1_S1 + 31) = prefactor_z * *(b + 87 * OS1_S1 + 16) -
                                      p_over_q * *(b + 127 * OS1_S1 + 16);
            *(b + 87 * OS1_S1 + 32) = prefactor_z * *(b + 87 * OS1_S1 + 17) -
                                      p_over_q * *(b + 127 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 87 * OS1_S1 + 7);
            *(b + 87 * OS1_S1 + 33) =
                prefactor_y * *(b + 87 * OS1_S1 + 19) -
                p_over_q * *(b + 126 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 19);
            *(b + 87 * OS1_S1 + 34) =
                prefactor_z * *(b + 87 * OS1_S1 + 19) -
                p_over_q * *(b + 127 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 9);
            *(b + 88 * OS1_S1 + 20) =
                prefactor_x * *(b + 88 * OS1_S1 + 10) -
                p_over_q * *(b + 124 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 88 * OS1_S1 + 4);
            *(b + 88 * OS1_S1 + 21) = prefactor_y * *(b + 88 * OS1_S1 + 10) -
                                      p_over_q * *(b + 127 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 10);
            *(b + 88 * OS1_S1 + 22) = prefactor_z * *(b + 88 * OS1_S1 + 10) -
                                      p_over_q * *(b + 128 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 10);
            *(b + 88 * OS1_S1 + 23) = prefactor_y * *(b + 88 * OS1_S1 + 11) -
                                      p_over_q * *(b + 127 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 4);
            *(b + 88 * OS1_S1 + 24) = prefactor_z * *(b + 88 * OS1_S1 + 11) -
                                      p_over_q * *(b + 128 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 11);
            *(b + 88 * OS1_S1 + 25) = prefactor_z * *(b + 88 * OS1_S1 + 12) -
                                      p_over_q * *(b + 128 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 4);
            *(b + 88 * OS1_S1 + 26) =
                prefactor_x * *(b + 88 * OS1_S1 + 16) -
                p_over_q * *(b + 124 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 16);
            *(b + 88 * OS1_S1 + 27) = prefactor_z * *(b + 88 * OS1_S1 + 13) -
                                      p_over_q * *(b + 128 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 13);
            *(b + 88 * OS1_S1 + 28) = prefactor_y * *(b + 88 * OS1_S1 + 15) -
                                      p_over_q * *(b + 127 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 15);
            *(b + 88 * OS1_S1 + 29) =
                prefactor_x * *(b + 88 * OS1_S1 + 19) -
                p_over_q * *(b + 124 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 19);
            *(b + 88 * OS1_S1 + 30) =
                prefactor_y * *(b + 88 * OS1_S1 + 16) -
                p_over_q * *(b + 127 * OS1_S1 + 16) +
                one_over_two_q * *(b + 58 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 88 * OS1_S1 + 7);
            *(b + 88 * OS1_S1 + 31) = prefactor_z * *(b + 88 * OS1_S1 + 16) -
                                      p_over_q * *(b + 128 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 16);
            *(b + 88 * OS1_S1 + 32) = prefactor_z * *(b + 88 * OS1_S1 + 17) -
                                      p_over_q * *(b + 128 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 7);
            *(b + 88 * OS1_S1 + 33) = prefactor_y * *(b + 88 * OS1_S1 + 19) -
                                      p_over_q * *(b + 127 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 19);
            *(b + 88 * OS1_S1 + 34) =
                prefactor_z * *(b + 88 * OS1_S1 + 19) -
                p_over_q * *(b + 128 * OS1_S1 + 19) +
                one_over_two_q * *(b + 57 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 88 * OS1_S1 + 9);
            *(b + 89 * OS1_S1 + 20) =
                prefactor_x * *(b + 89 * OS1_S1 + 10) -
                p_over_q * *(b + 125 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 4);
            *(b + 89 * OS1_S1 + 21) = prefactor_y * *(b + 89 * OS1_S1 + 10) -
                                      p_over_q * *(b + 128 * OS1_S1 + 10);
            *(b + 89 * OS1_S1 + 22) =
                prefactor_z * *(b + 89 * OS1_S1 + 10) -
                p_over_q * *(b + 129 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 10);
            *(b + 89 * OS1_S1 + 23) = prefactor_y * *(b + 89 * OS1_S1 + 11) -
                                      p_over_q * *(b + 128 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 89 * OS1_S1 + 4);
            *(b + 89 * OS1_S1 + 24) = prefactor_y * *(b + 89 * OS1_S1 + 12) -
                                      p_over_q * *(b + 128 * OS1_S1 + 12);
            *(b + 89 * OS1_S1 + 25) =
                prefactor_z * *(b + 89 * OS1_S1 + 12) -
                p_over_q * *(b + 129 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 12) +
                one_over_two_q * *(b + 89 * OS1_S1 + 4);
            *(b + 89 * OS1_S1 + 26) =
                prefactor_x * *(b + 89 * OS1_S1 + 16) -
                p_over_q * *(b + 125 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 16);
            *(b + 89 * OS1_S1 + 27) =
                prefactor_z * *(b + 89 * OS1_S1 + 13) -
                p_over_q * *(b + 129 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 13);
            *(b + 89 * OS1_S1 + 28) = prefactor_y * *(b + 89 * OS1_S1 + 15) -
                                      p_over_q * *(b + 128 * OS1_S1 + 15);
            *(b + 89 * OS1_S1 + 29) =
                prefactor_x * *(b + 89 * OS1_S1 + 19) -
                p_over_q * *(b + 125 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 19);
            *(b + 89 * OS1_S1 + 30) =
                prefactor_y * *(b + 89 * OS1_S1 + 16) -
                p_over_q * *(b + 128 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 7);
            *(b + 89 * OS1_S1 + 31) =
                prefactor_z * *(b + 89 * OS1_S1 + 16) -
                p_over_q * *(b + 129 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 16);
            *(b + 89 * OS1_S1 + 32) = prefactor_y * *(b + 89 * OS1_S1 + 18) -
                                      p_over_q * *(b + 128 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 89 * OS1_S1 + 9);
            *(b + 89 * OS1_S1 + 33) = prefactor_y * *(b + 89 * OS1_S1 + 19) -
                                      p_over_q * *(b + 128 * OS1_S1 + 19);
            *(b + 89 * OS1_S1 + 34) =
                prefactor_z * *(b + 89 * OS1_S1 + 19) -
                p_over_q * *(b + 129 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 9);
            *(b + 90 * OS1_S1 + 20) =
                prefactor_x * *(b + 90 * OS1_S1 + 10) -
                p_over_q * *(b + 126 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 90 * OS1_S1 + 4);
            *(b + 90 * OS1_S1 + 21) =
                prefactor_y * *(b + 90 * OS1_S1 + 10) -
                p_over_q * *(b + 130 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 10);
            *(b + 90 * OS1_S1 + 22) = prefactor_z * *(b + 90 * OS1_S1 + 10) -
                                      p_over_q * *(b + 131 * OS1_S1 + 10);
            *(b + 90 * OS1_S1 + 23) =
                prefactor_y * *(b + 90 * OS1_S1 + 11) -
                p_over_q * *(b + 130 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 11) +
                one_over_two_q * *(b + 90 * OS1_S1 + 4);
            *(b + 90 * OS1_S1 + 24) = prefactor_z * *(b + 90 * OS1_S1 + 11) -
                                      p_over_q * *(b + 131 * OS1_S1 + 11);
            *(b + 90 * OS1_S1 + 25) = prefactor_z * *(b + 90 * OS1_S1 + 12) -
                                      p_over_q * *(b + 131 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 90 * OS1_S1 + 4);
            *(b + 90 * OS1_S1 + 26) =
                prefactor_x * *(b + 90 * OS1_S1 + 16) -
                p_over_q * *(b + 126 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 16);
            *(b + 90 * OS1_S1 + 27) = prefactor_z * *(b + 90 * OS1_S1 + 13) -
                                      p_over_q * *(b + 131 * OS1_S1 + 13);
            *(b + 90 * OS1_S1 + 28) =
                prefactor_y * *(b + 90 * OS1_S1 + 15) -
                p_over_q * *(b + 130 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 15);
            *(b + 90 * OS1_S1 + 29) =
                prefactor_x * *(b + 90 * OS1_S1 + 19) -
                p_over_q * *(b + 126 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 19);
            *(b + 90 * OS1_S1 + 30) =
                prefactor_y * *(b + 90 * OS1_S1 + 16) -
                p_over_q * *(b + 130 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 90 * OS1_S1 + 7);
            *(b + 90 * OS1_S1 + 31) = prefactor_z * *(b + 90 * OS1_S1 + 16) -
                                      p_over_q * *(b + 131 * OS1_S1 + 16);
            *(b + 90 * OS1_S1 + 32) = prefactor_z * *(b + 90 * OS1_S1 + 17) -
                                      p_over_q * *(b + 131 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 90 * OS1_S1 + 7);
            *(b + 90 * OS1_S1 + 33) =
                prefactor_y * *(b + 90 * OS1_S1 + 19) -
                p_over_q * *(b + 130 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 19);
            *(b + 90 * OS1_S1 + 34) =
                prefactor_z * *(b + 90 * OS1_S1 + 19) -
                p_over_q * *(b + 131 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 90 * OS1_S1 + 9);
            *(b + 91 * OS1_S1 + 20) =
                prefactor_x * *(b + 91 * OS1_S1 + 10) -
                p_over_q * *(b + 127 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 4);
            *(b + 91 * OS1_S1 + 21) =
                prefactor_y * *(b + 91 * OS1_S1 + 10) -
                p_over_q * *(b + 131 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 10);
            *(b + 91 * OS1_S1 + 22) = prefactor_z * *(b + 91 * OS1_S1 + 10) -
                                      p_over_q * *(b + 132 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 10);
            *(b + 91 * OS1_S1 + 23) =
                prefactor_y * *(b + 91 * OS1_S1 + 11) -
                p_over_q * *(b + 131 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 11) +
                one_over_two_q * *(b + 91 * OS1_S1 + 4);
            *(b + 91 * OS1_S1 + 24) = prefactor_z * *(b + 91 * OS1_S1 + 11) -
                                      p_over_q * *(b + 132 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 11);
            *(b + 91 * OS1_S1 + 25) = prefactor_z * *(b + 91 * OS1_S1 + 12) -
                                      p_over_q * *(b + 132 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 91 * OS1_S1 + 4);
            *(b + 91 * OS1_S1 + 26) =
                prefactor_x * *(b + 91 * OS1_S1 + 16) -
                p_over_q * *(b + 127 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 16);
            *(b + 91 * OS1_S1 + 27) = prefactor_z * *(b + 91 * OS1_S1 + 13) -
                                      p_over_q * *(b + 132 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 13);
            *(b + 91 * OS1_S1 + 28) =
                prefactor_y * *(b + 91 * OS1_S1 + 15) -
                p_over_q * *(b + 131 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 15);
            *(b + 91 * OS1_S1 + 29) =
                prefactor_x * *(b + 91 * OS1_S1 + 19) -
                p_over_q * *(b + 127 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 19);
            *(b + 91 * OS1_S1 + 30) =
                prefactor_y * *(b + 91 * OS1_S1 + 16) -
                p_over_q * *(b + 131 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 7);
            *(b + 91 * OS1_S1 + 31) = prefactor_z * *(b + 91 * OS1_S1 + 16) -
                                      p_over_q * *(b + 132 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 16);
            *(b + 91 * OS1_S1 + 32) = prefactor_z * *(b + 91 * OS1_S1 + 17) -
                                      p_over_q * *(b + 132 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 91 * OS1_S1 + 7);
            *(b + 91 * OS1_S1 + 33) =
                prefactor_y * *(b + 91 * OS1_S1 + 19) -
                p_over_q * *(b + 131 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 19);
            *(b + 91 * OS1_S1 + 34) =
                prefactor_z * *(b + 91 * OS1_S1 + 19) -
                p_over_q * *(b + 132 * OS1_S1 + 19) +
                one_over_two_q * *(b + 59 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 9);
            *(b + 92 * OS1_S1 + 20) =
                prefactor_x * *(b + 92 * OS1_S1 + 10) -
                p_over_q * *(b + 128 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 4);
            *(b + 92 * OS1_S1 + 21) = prefactor_y * *(b + 92 * OS1_S1 + 10) -
                                      p_over_q * *(b + 132 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 10);
            *(b + 92 * OS1_S1 + 22) =
                prefactor_z * *(b + 92 * OS1_S1 + 10) -
                p_over_q * *(b + 133 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 10);
            *(b + 92 * OS1_S1 + 23) = prefactor_y * *(b + 92 * OS1_S1 + 11) -
                                      p_over_q * *(b + 132 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 92 * OS1_S1 + 4);
            *(b + 92 * OS1_S1 + 24) = prefactor_y * *(b + 92 * OS1_S1 + 12) -
                                      p_over_q * *(b + 132 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 12);
            *(b + 92 * OS1_S1 + 25) =
                prefactor_z * *(b + 92 * OS1_S1 + 12) -
                p_over_q * *(b + 133 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 12) +
                one_over_two_q * *(b + 92 * OS1_S1 + 4);
            *(b + 92 * OS1_S1 + 26) =
                prefactor_x * *(b + 92 * OS1_S1 + 16) -
                p_over_q * *(b + 128 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 16);
            *(b + 92 * OS1_S1 + 27) =
                prefactor_z * *(b + 92 * OS1_S1 + 13) -
                p_over_q * *(b + 133 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 13);
            *(b + 92 * OS1_S1 + 28) = prefactor_y * *(b + 92 * OS1_S1 + 15) -
                                      p_over_q * *(b + 132 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 15);
            *(b + 92 * OS1_S1 + 29) =
                prefactor_x * *(b + 92 * OS1_S1 + 19) -
                p_over_q * *(b + 128 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 19);
            *(b + 92 * OS1_S1 + 30) =
                prefactor_y * *(b + 92 * OS1_S1 + 16) -
                p_over_q * *(b + 132 * OS1_S1 + 16) +
                one_over_two_q * *(b + 61 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 7);
            *(b + 92 * OS1_S1 + 31) =
                prefactor_z * *(b + 92 * OS1_S1 + 16) -
                p_over_q * *(b + 133 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 16);
            *(b + 92 * OS1_S1 + 32) = prefactor_y * *(b + 92 * OS1_S1 + 18) -
                                      p_over_q * *(b + 132 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 92 * OS1_S1 + 9);
            *(b + 92 * OS1_S1 + 33) = prefactor_y * *(b + 92 * OS1_S1 + 19) -
                                      p_over_q * *(b + 132 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 19);
            *(b + 92 * OS1_S1 + 34) =
                prefactor_z * *(b + 92 * OS1_S1 + 19) -
                p_over_q * *(b + 133 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 9);
            *(b + 93 * OS1_S1 + 20) =
                prefactor_x * *(b + 93 * OS1_S1 + 10) -
                p_over_q * *(b + 129 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 93 * OS1_S1 + 4);
            *(b + 93 * OS1_S1 + 21) = prefactor_y * *(b + 93 * OS1_S1 + 10) -
                                      p_over_q * *(b + 133 * OS1_S1 + 10);
            *(b + 93 * OS1_S1 + 22) =
                prefactor_z * *(b + 93 * OS1_S1 + 10) -
                p_over_q * *(b + 134 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 10);
            *(b + 93 * OS1_S1 + 23) = prefactor_y * *(b + 93 * OS1_S1 + 11) -
                                      p_over_q * *(b + 133 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 93 * OS1_S1 + 4);
            *(b + 93 * OS1_S1 + 24) = prefactor_y * *(b + 93 * OS1_S1 + 12) -
                                      p_over_q * *(b + 133 * OS1_S1 + 12);
            *(b + 93 * OS1_S1 + 25) =
                prefactor_z * *(b + 93 * OS1_S1 + 12) -
                p_over_q * *(b + 134 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 12) +
                one_over_two_q * *(b + 93 * OS1_S1 + 4);
            *(b + 93 * OS1_S1 + 26) =
                prefactor_x * *(b + 93 * OS1_S1 + 16) -
                p_over_q * *(b + 129 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 16);
            *(b + 93 * OS1_S1 + 27) =
                prefactor_z * *(b + 93 * OS1_S1 + 13) -
                p_over_q * *(b + 134 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 13);
            *(b + 93 * OS1_S1 + 28) = prefactor_y * *(b + 93 * OS1_S1 + 15) -
                                      p_over_q * *(b + 133 * OS1_S1 + 15);
            *(b + 93 * OS1_S1 + 29) =
                prefactor_x * *(b + 93 * OS1_S1 + 19) -
                p_over_q * *(b + 129 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 19);
            *(b + 93 * OS1_S1 + 30) =
                prefactor_y * *(b + 93 * OS1_S1 + 16) -
                p_over_q * *(b + 133 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 93 * OS1_S1 + 7);
            *(b + 93 * OS1_S1 + 31) =
                prefactor_z * *(b + 93 * OS1_S1 + 16) -
                p_over_q * *(b + 134 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 16);
            *(b + 93 * OS1_S1 + 32) = prefactor_y * *(b + 93 * OS1_S1 + 18) -
                                      p_over_q * *(b + 133 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 93 * OS1_S1 + 9);
            *(b + 93 * OS1_S1 + 33) = prefactor_y * *(b + 93 * OS1_S1 + 19) -
                                      p_over_q * *(b + 133 * OS1_S1 + 19);
            *(b + 93 * OS1_S1 + 34) =
                prefactor_z * *(b + 93 * OS1_S1 + 19) -
                p_over_q * *(b + 134 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 93 * OS1_S1 + 9);
            *(b + 94 * OS1_S1 + 20) =
                prefactor_x * *(b + 94 * OS1_S1 + 10) -
                p_over_q * *(b + 130 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 94 * OS1_S1 + 4);
            *(b + 94 * OS1_S1 + 21) =
                prefactor_y * *(b + 94 * OS1_S1 + 10) -
                p_over_q * *(b + 135 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 10);
            *(b + 94 * OS1_S1 + 22) = prefactor_z * *(b + 94 * OS1_S1 + 10) -
                                      p_over_q * *(b + 136 * OS1_S1 + 10);
            *(b + 94 * OS1_S1 + 23) =
                prefactor_x * *(b + 94 * OS1_S1 + 13) -
                p_over_q * *(b + 130 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 13) +
                one_over_two_q * *(b + 94 * OS1_S1 + 7);
            *(b + 94 * OS1_S1 + 24) = prefactor_z * *(b + 94 * OS1_S1 + 11) -
                                      p_over_q * *(b + 136 * OS1_S1 + 11);
            *(b + 94 * OS1_S1 + 25) = prefactor_z * *(b + 94 * OS1_S1 + 12) -
                                      p_over_q * *(b + 136 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 94 * OS1_S1 + 4);
            *(b + 94 * OS1_S1 + 26) =
                prefactor_x * *(b + 94 * OS1_S1 + 16) -
                p_over_q * *(b + 130 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 16);
            *(b + 94 * OS1_S1 + 27) = prefactor_z * *(b + 94 * OS1_S1 + 13) -
                                      p_over_q * *(b + 136 * OS1_S1 + 13);
            *(b + 94 * OS1_S1 + 28) =
                prefactor_x * *(b + 94 * OS1_S1 + 18) -
                p_over_q * *(b + 130 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 18);
            *(b + 94 * OS1_S1 + 29) =
                prefactor_x * *(b + 94 * OS1_S1 + 19) -
                p_over_q * *(b + 130 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 19);
            *(b + 94 * OS1_S1 + 30) =
                prefactor_y * *(b + 94 * OS1_S1 + 16) -
                p_over_q * *(b + 135 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 94 * OS1_S1 + 7);
            *(b + 94 * OS1_S1 + 31) = prefactor_z * *(b + 94 * OS1_S1 + 16) -
                                      p_over_q * *(b + 136 * OS1_S1 + 16);
            *(b + 94 * OS1_S1 + 32) = prefactor_z * *(b + 94 * OS1_S1 + 17) -
                                      p_over_q * *(b + 136 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 94 * OS1_S1 + 7);
            *(b + 94 * OS1_S1 + 33) =
                prefactor_y * *(b + 94 * OS1_S1 + 19) -
                p_over_q * *(b + 135 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 19);
            *(b + 94 * OS1_S1 + 34) =
                prefactor_z * *(b + 94 * OS1_S1 + 19) -
                p_over_q * *(b + 136 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 94 * OS1_S1 + 9);
            *(b + 95 * OS1_S1 + 20) =
                prefactor_x * *(b + 95 * OS1_S1 + 10) -
                p_over_q * *(b + 131 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 95 * OS1_S1 + 4);
            *(b + 95 * OS1_S1 + 21) =
                prefactor_y * *(b + 95 * OS1_S1 + 10) -
                p_over_q * *(b + 136 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 10);
            *(b + 95 * OS1_S1 + 22) = prefactor_z * *(b + 95 * OS1_S1 + 10) -
                                      p_over_q * *(b + 137 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 10);
            *(b + 95 * OS1_S1 + 23) =
                prefactor_y * *(b + 95 * OS1_S1 + 11) -
                p_over_q * *(b + 136 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 11) +
                one_over_two_q * *(b + 95 * OS1_S1 + 4);
            *(b + 95 * OS1_S1 + 24) = prefactor_z * *(b + 95 * OS1_S1 + 11) -
                                      p_over_q * *(b + 137 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 11);
            *(b + 95 * OS1_S1 + 25) = prefactor_z * *(b + 95 * OS1_S1 + 12) -
                                      p_over_q * *(b + 137 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 95 * OS1_S1 + 4);
            *(b + 95 * OS1_S1 + 26) =
                prefactor_x * *(b + 95 * OS1_S1 + 16) -
                p_over_q * *(b + 131 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 16);
            *(b + 95 * OS1_S1 + 27) = prefactor_z * *(b + 95 * OS1_S1 + 13) -
                                      p_over_q * *(b + 137 * OS1_S1 + 13) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 13);
            *(b + 95 * OS1_S1 + 28) =
                prefactor_y * *(b + 95 * OS1_S1 + 15) -
                p_over_q * *(b + 136 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 15);
            *(b + 95 * OS1_S1 + 29) =
                prefactor_x * *(b + 95 * OS1_S1 + 19) -
                p_over_q * *(b + 131 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 19);
            *(b + 95 * OS1_S1 + 30) =
                prefactor_y * *(b + 95 * OS1_S1 + 16) -
                p_over_q * *(b + 136 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 95 * OS1_S1 + 7);
            *(b + 95 * OS1_S1 + 31) = prefactor_z * *(b + 95 * OS1_S1 + 16) -
                                      p_over_q * *(b + 137 * OS1_S1 + 16) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 16);
            *(b + 95 * OS1_S1 + 32) = prefactor_z * *(b + 95 * OS1_S1 + 17) -
                                      p_over_q * *(b + 137 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 95 * OS1_S1 + 7);
            *(b + 95 * OS1_S1 + 33) =
                prefactor_y * *(b + 95 * OS1_S1 + 19) -
                p_over_q * *(b + 136 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 19);
            *(b + 95 * OS1_S1 + 34) =
                prefactor_z * *(b + 95 * OS1_S1 + 19) -
                p_over_q * *(b + 137 * OS1_S1 + 19) +
                one_over_two_q * *(b + 62 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 95 * OS1_S1 + 9);
            *(b + 96 * OS1_S1 + 20) =
                prefactor_x * *(b + 96 * OS1_S1 + 10) -
                p_over_q * *(b + 132 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 4);
            *(b + 96 * OS1_S1 + 21) =
                prefactor_y * *(b + 96 * OS1_S1 + 10) -
                p_over_q * *(b + 137 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 10);
            *(b + 96 * OS1_S1 + 22) =
                prefactor_z * *(b + 96 * OS1_S1 + 10) -
                p_over_q * *(b + 138 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 10);
            *(b + 96 * OS1_S1 + 23) =
                prefactor_y * *(b + 96 * OS1_S1 + 11) -
                p_over_q * *(b + 137 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 11) +
                one_over_two_q * *(b + 96 * OS1_S1 + 4);
            *(b + 96 * OS1_S1 + 24) =
                prefactor_z * *(b + 96 * OS1_S1 + 11) -
                p_over_q * *(b + 138 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 11);
            *(b + 96 * OS1_S1 + 25) =
                prefactor_z * *(b + 96 * OS1_S1 + 12) -
                p_over_q * *(b + 138 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 12) +
                one_over_two_q * *(b + 96 * OS1_S1 + 4);
            *(b + 96 * OS1_S1 + 26) =
                prefactor_x * *(b + 96 * OS1_S1 + 16) -
                p_over_q * *(b + 132 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 16);
            *(b + 96 * OS1_S1 + 27) =
                prefactor_z * *(b + 96 * OS1_S1 + 13) -
                p_over_q * *(b + 138 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 13);
            *(b + 96 * OS1_S1 + 28) =
                prefactor_y * *(b + 96 * OS1_S1 + 15) -
                p_over_q * *(b + 137 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 15);
            *(b + 96 * OS1_S1 + 29) =
                prefactor_x * *(b + 96 * OS1_S1 + 19) -
                p_over_q * *(b + 132 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 19);
            *(b + 96 * OS1_S1 + 30) =
                prefactor_y * *(b + 96 * OS1_S1 + 16) -
                p_over_q * *(b + 137 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 7);
            *(b + 96 * OS1_S1 + 31) =
                prefactor_z * *(b + 96 * OS1_S1 + 16) -
                p_over_q * *(b + 138 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 16);
            *(b + 96 * OS1_S1 + 32) =
                prefactor_z * *(b + 96 * OS1_S1 + 17) -
                p_over_q * *(b + 138 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 17) +
                one_over_two_q * *(b + 96 * OS1_S1 + 7);
            *(b + 96 * OS1_S1 + 33) =
                prefactor_y * *(b + 96 * OS1_S1 + 19) -
                p_over_q * *(b + 137 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 19);
            *(b + 96 * OS1_S1 + 34) =
                prefactor_z * *(b + 96 * OS1_S1 + 19) -
                p_over_q * *(b + 138 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 9);
            *(b + 97 * OS1_S1 + 20) =
                prefactor_x * *(b + 97 * OS1_S1 + 10) -
                p_over_q * *(b + 133 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 97 * OS1_S1 + 4);
            *(b + 97 * OS1_S1 + 21) = prefactor_y * *(b + 97 * OS1_S1 + 10) -
                                      p_over_q * *(b + 138 * OS1_S1 + 10) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 10);
            *(b + 97 * OS1_S1 + 22) =
                prefactor_z * *(b + 97 * OS1_S1 + 10) -
                p_over_q * *(b + 139 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 10);
            *(b + 97 * OS1_S1 + 23) = prefactor_y * *(b + 97 * OS1_S1 + 11) -
                                      p_over_q * *(b + 138 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 97 * OS1_S1 + 4);
            *(b + 97 * OS1_S1 + 24) = prefactor_y * *(b + 97 * OS1_S1 + 12) -
                                      p_over_q * *(b + 138 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 12);
            *(b + 97 * OS1_S1 + 25) =
                prefactor_z * *(b + 97 * OS1_S1 + 12) -
                p_over_q * *(b + 139 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 12) +
                one_over_two_q * *(b + 97 * OS1_S1 + 4);
            *(b + 97 * OS1_S1 + 26) =
                prefactor_x * *(b + 97 * OS1_S1 + 16) -
                p_over_q * *(b + 133 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 16);
            *(b + 97 * OS1_S1 + 27) =
                prefactor_z * *(b + 97 * OS1_S1 + 13) -
                p_over_q * *(b + 139 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 13);
            *(b + 97 * OS1_S1 + 28) = prefactor_y * *(b + 97 * OS1_S1 + 15) -
                                      p_over_q * *(b + 138 * OS1_S1 + 15) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 15);
            *(b + 97 * OS1_S1 + 29) =
                prefactor_x * *(b + 97 * OS1_S1 + 19) -
                p_over_q * *(b + 133 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 19);
            *(b + 97 * OS1_S1 + 30) =
                prefactor_y * *(b + 97 * OS1_S1 + 16) -
                p_over_q * *(b + 138 * OS1_S1 + 16) +
                one_over_two_q * *(b + 65 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 97 * OS1_S1 + 7);
            *(b + 97 * OS1_S1 + 31) =
                prefactor_z * *(b + 97 * OS1_S1 + 16) -
                p_over_q * *(b + 139 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 16);
            *(b + 97 * OS1_S1 + 32) = prefactor_y * *(b + 97 * OS1_S1 + 18) -
                                      p_over_q * *(b + 138 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 97 * OS1_S1 + 9);
            *(b + 97 * OS1_S1 + 33) = prefactor_y * *(b + 97 * OS1_S1 + 19) -
                                      p_over_q * *(b + 138 * OS1_S1 + 19) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 19);
            *(b + 97 * OS1_S1 + 34) =
                prefactor_z * *(b + 97 * OS1_S1 + 19) -
                p_over_q * *(b + 139 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 97 * OS1_S1 + 9);
            *(b + 98 * OS1_S1 + 20) =
                prefactor_x * *(b + 98 * OS1_S1 + 10) -
                p_over_q * *(b + 134 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 98 * OS1_S1 + 4);
            *(b + 98 * OS1_S1 + 21) = prefactor_y * *(b + 98 * OS1_S1 + 10) -
                                      p_over_q * *(b + 139 * OS1_S1 + 10);
            *(b + 98 * OS1_S1 + 22) =
                prefactor_z * *(b + 98 * OS1_S1 + 10) -
                p_over_q * *(b + 140 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 10);
            *(b + 98 * OS1_S1 + 23) = prefactor_y * *(b + 98 * OS1_S1 + 11) -
                                      p_over_q * *(b + 139 * OS1_S1 + 11) +
                                      one_over_two_q * *(b + 98 * OS1_S1 + 4);
            *(b + 98 * OS1_S1 + 24) = prefactor_y * *(b + 98 * OS1_S1 + 12) -
                                      p_over_q * *(b + 139 * OS1_S1 + 12);
            *(b + 98 * OS1_S1 + 25) =
                prefactor_x * *(b + 98 * OS1_S1 + 15) -
                p_over_q * *(b + 134 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 15) +
                one_over_two_q * *(b + 98 * OS1_S1 + 9);
            *(b + 98 * OS1_S1 + 26) =
                prefactor_x * *(b + 98 * OS1_S1 + 16) -
                p_over_q * *(b + 134 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 16);
            *(b + 98 * OS1_S1 + 27) =
                prefactor_x * *(b + 98 * OS1_S1 + 17) -
                p_over_q * *(b + 134 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 17);
            *(b + 98 * OS1_S1 + 28) = prefactor_y * *(b + 98 * OS1_S1 + 15) -
                                      p_over_q * *(b + 139 * OS1_S1 + 15);
            *(b + 98 * OS1_S1 + 29) =
                prefactor_x * *(b + 98 * OS1_S1 + 19) -
                p_over_q * *(b + 134 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 19);
            *(b + 98 * OS1_S1 + 30) =
                prefactor_y * *(b + 98 * OS1_S1 + 16) -
                p_over_q * *(b + 139 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 98 * OS1_S1 + 7);
            *(b + 98 * OS1_S1 + 31) =
                prefactor_z * *(b + 98 * OS1_S1 + 16) -
                p_over_q * *(b + 140 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 16);
            *(b + 98 * OS1_S1 + 32) = prefactor_y * *(b + 98 * OS1_S1 + 18) -
                                      p_over_q * *(b + 139 * OS1_S1 + 18) +
                                      one_over_two_q * *(b + 98 * OS1_S1 + 9);
            *(b + 98 * OS1_S1 + 33) = prefactor_y * *(b + 98 * OS1_S1 + 19) -
                                      p_over_q * *(b + 139 * OS1_S1 + 19);
            *(b + 98 * OS1_S1 + 34) =
                prefactor_z * *(b + 98 * OS1_S1 + 19) -
                p_over_q * *(b + 140 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 98 * OS1_S1 + 9);
            *(b + 99 * OS1_S1 + 20) =
                prefactor_x * *(b + 99 * OS1_S1 + 10) -
                p_over_q * *(b + 135 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 4);
            *(b + 99 * OS1_S1 + 21) =
                prefactor_y * *(b + 99 * OS1_S1 + 10) -
                p_over_q * *(b + 141 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 10);
            *(b + 99 * OS1_S1 + 22) = prefactor_z * *(b + 99 * OS1_S1 + 10) -
                                      p_over_q * *(b + 142 * OS1_S1 + 10);
            *(b + 99 * OS1_S1 + 23) =
                prefactor_x * *(b + 99 * OS1_S1 + 13) -
                p_over_q * *(b + 135 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 13) +
                one_over_two_q * *(b + 99 * OS1_S1 + 7);
            *(b + 99 * OS1_S1 + 24) = prefactor_z * *(b + 99 * OS1_S1 + 11) -
                                      p_over_q * *(b + 142 * OS1_S1 + 11);
            *(b + 99 * OS1_S1 + 25) = prefactor_z * *(b + 99 * OS1_S1 + 12) -
                                      p_over_q * *(b + 142 * OS1_S1 + 12) +
                                      one_over_two_q * *(b + 99 * OS1_S1 + 4);
            *(b + 99 * OS1_S1 + 26) =
                prefactor_x * *(b + 99 * OS1_S1 + 16) -
                p_over_q * *(b + 135 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 16);
            *(b + 99 * OS1_S1 + 27) = prefactor_z * *(b + 99 * OS1_S1 + 13) -
                                      p_over_q * *(b + 142 * OS1_S1 + 13);
            *(b + 99 * OS1_S1 + 28) =
                prefactor_x * *(b + 99 * OS1_S1 + 18) -
                p_over_q * *(b + 135 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 18);
            *(b + 99 * OS1_S1 + 29) =
                prefactor_x * *(b + 99 * OS1_S1 + 19) -
                p_over_q * *(b + 135 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 19);
            *(b + 99 * OS1_S1 + 30) =
                prefactor_y * *(b + 99 * OS1_S1 + 16) -
                p_over_q * *(b + 141 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 7);
            *(b + 99 * OS1_S1 + 31) = prefactor_z * *(b + 99 * OS1_S1 + 16) -
                                      p_over_q * *(b + 142 * OS1_S1 + 16);
            *(b + 99 * OS1_S1 + 32) = prefactor_z * *(b + 99 * OS1_S1 + 17) -
                                      p_over_q * *(b + 142 * OS1_S1 + 17) +
                                      one_over_two_q * *(b + 99 * OS1_S1 + 7);
            *(b + 99 * OS1_S1 + 33) =
                prefactor_y * *(b + 99 * OS1_S1 + 19) -
                p_over_q * *(b + 141 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 19);
            *(b + 99 * OS1_S1 + 34) =
                prefactor_z * *(b + 99 * OS1_S1 + 19) -
                p_over_q * *(b + 142 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 9);
            *(b + 100 * OS1_S1 + 20) =
                prefactor_x * *(b + 100 * OS1_S1 + 10) -
                p_over_q * *(b + 136 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 4);
            *(b + 100 * OS1_S1 + 21) =
                prefactor_y * *(b + 100 * OS1_S1 + 10) -
                p_over_q * *(b + 142 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 10);
            *(b + 100 * OS1_S1 + 22) = prefactor_z * *(b + 100 * OS1_S1 + 10) -
                                       p_over_q * *(b + 143 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 10);
            *(b + 100 * OS1_S1 + 23) =
                prefactor_x * *(b + 100 * OS1_S1 + 13) -
                p_over_q * *(b + 136 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 13) +
                one_over_two_q * *(b + 100 * OS1_S1 + 7);
            *(b + 100 * OS1_S1 + 24) = prefactor_z * *(b + 100 * OS1_S1 + 11) -
                                       p_over_q * *(b + 143 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 11);
            *(b + 100 * OS1_S1 + 25) =
                prefactor_z * *(b + 100 * OS1_S1 + 12) -
                p_over_q * *(b + 143 * OS1_S1 + 12) +
                one_over_two_q * *(b + 66 * OS1_S1 + 12) +
                one_over_two_q * *(b + 100 * OS1_S1 + 4);
            *(b + 100 * OS1_S1 + 26) =
                prefactor_x * *(b + 100 * OS1_S1 + 16) -
                p_over_q * *(b + 136 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 16);
            *(b + 100 * OS1_S1 + 27) = prefactor_z * *(b + 100 * OS1_S1 + 13) -
                                       p_over_q * *(b + 143 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 13);
            *(b + 100 * OS1_S1 + 28) =
                prefactor_x * *(b + 100 * OS1_S1 + 18) -
                p_over_q * *(b + 136 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 18);
            *(b + 100 * OS1_S1 + 29) =
                prefactor_x * *(b + 100 * OS1_S1 + 19) -
                p_over_q * *(b + 136 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 19);
            *(b + 100 * OS1_S1 + 30) =
                prefactor_y * *(b + 100 * OS1_S1 + 16) -
                p_over_q * *(b + 142 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 7);
            *(b + 100 * OS1_S1 + 31) = prefactor_z * *(b + 100 * OS1_S1 + 16) -
                                       p_over_q * *(b + 143 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 16);
            *(b + 100 * OS1_S1 + 32) =
                prefactor_z * *(b + 100 * OS1_S1 + 17) -
                p_over_q * *(b + 143 * OS1_S1 + 17) +
                one_over_two_q * *(b + 66 * OS1_S1 + 17) +
                one_over_two_q * *(b + 100 * OS1_S1 + 7);
            *(b + 100 * OS1_S1 + 33) =
                prefactor_y * *(b + 100 * OS1_S1 + 19) -
                p_over_q * *(b + 142 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 19);
            *(b + 100 * OS1_S1 + 34) =
                prefactor_z * *(b + 100 * OS1_S1 + 19) -
                p_over_q * *(b + 143 * OS1_S1 + 19) +
                one_over_two_q * *(b + 66 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 9);
            *(b + 101 * OS1_S1 + 20) =
                prefactor_x * *(b + 101 * OS1_S1 + 10) -
                p_over_q * *(b + 137 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 4);
            *(b + 101 * OS1_S1 + 21) =
                prefactor_y * *(b + 101 * OS1_S1 + 10) -
                p_over_q * *(b + 143 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 10);
            *(b + 101 * OS1_S1 + 22) =
                prefactor_z * *(b + 101 * OS1_S1 + 10) -
                p_over_q * *(b + 144 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 10);
            *(b + 101 * OS1_S1 + 23) =
                prefactor_x * *(b + 101 * OS1_S1 + 13) -
                p_over_q * *(b + 137 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 13) +
                one_over_two_q * *(b + 101 * OS1_S1 + 7);
            *(b + 101 * OS1_S1 + 24) =
                prefactor_z * *(b + 101 * OS1_S1 + 11) -
                p_over_q * *(b + 144 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 11);
            *(b + 101 * OS1_S1 + 25) =
                prefactor_z * *(b + 101 * OS1_S1 + 12) -
                p_over_q * *(b + 144 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 12) +
                one_over_two_q * *(b + 101 * OS1_S1 + 4);
            *(b + 101 * OS1_S1 + 26) =
                prefactor_x * *(b + 101 * OS1_S1 + 16) -
                p_over_q * *(b + 137 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 16);
            *(b + 101 * OS1_S1 + 27) =
                prefactor_z * *(b + 101 * OS1_S1 + 13) -
                p_over_q * *(b + 144 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 13);
            *(b + 101 * OS1_S1 + 28) =
                prefactor_x * *(b + 101 * OS1_S1 + 18) -
                p_over_q * *(b + 137 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 18);
            *(b + 101 * OS1_S1 + 29) =
                prefactor_x * *(b + 101 * OS1_S1 + 19) -
                p_over_q * *(b + 137 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 19);
            *(b + 101 * OS1_S1 + 30) =
                prefactor_y * *(b + 101 * OS1_S1 + 16) -
                p_over_q * *(b + 143 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 7);
            *(b + 101 * OS1_S1 + 31) =
                prefactor_z * *(b + 101 * OS1_S1 + 16) -
                p_over_q * *(b + 144 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 16);
            *(b + 101 * OS1_S1 + 32) =
                prefactor_z * *(b + 101 * OS1_S1 + 17) -
                p_over_q * *(b + 144 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 17) +
                one_over_two_q * *(b + 101 * OS1_S1 + 7);
            *(b + 101 * OS1_S1 + 33) =
                prefactor_y * *(b + 101 * OS1_S1 + 19) -
                p_over_q * *(b + 143 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 19);
            *(b + 101 * OS1_S1 + 34) =
                prefactor_z * *(b + 101 * OS1_S1 + 19) -
                p_over_q * *(b + 144 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 9);
            *(b + 102 * OS1_S1 + 20) =
                prefactor_x * *(b + 102 * OS1_S1 + 10) -
                p_over_q * *(b + 138 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 4);
            *(b + 102 * OS1_S1 + 21) =
                prefactor_y * *(b + 102 * OS1_S1 + 10) -
                p_over_q * *(b + 144 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 10);
            *(b + 102 * OS1_S1 + 22) =
                prefactor_z * *(b + 102 * OS1_S1 + 10) -
                p_over_q * *(b + 145 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 10);
            *(b + 102 * OS1_S1 + 23) =
                prefactor_y * *(b + 102 * OS1_S1 + 11) -
                p_over_q * *(b + 144 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 11) +
                one_over_two_q * *(b + 102 * OS1_S1 + 4);
            *(b + 102 * OS1_S1 + 24) =
                prefactor_y * *(b + 102 * OS1_S1 + 12) -
                p_over_q * *(b + 144 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 12);
            *(b + 102 * OS1_S1 + 25) =
                prefactor_x * *(b + 102 * OS1_S1 + 15) -
                p_over_q * *(b + 138 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 15) +
                one_over_two_q * *(b + 102 * OS1_S1 + 9);
            *(b + 102 * OS1_S1 + 26) =
                prefactor_x * *(b + 102 * OS1_S1 + 16) -
                p_over_q * *(b + 138 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 16);
            *(b + 102 * OS1_S1 + 27) =
                prefactor_x * *(b + 102 * OS1_S1 + 17) -
                p_over_q * *(b + 138 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 17);
            *(b + 102 * OS1_S1 + 28) =
                prefactor_y * *(b + 102 * OS1_S1 + 15) -
                p_over_q * *(b + 144 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 15);
            *(b + 102 * OS1_S1 + 29) =
                prefactor_x * *(b + 102 * OS1_S1 + 19) -
                p_over_q * *(b + 138 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 19);
            *(b + 102 * OS1_S1 + 30) =
                prefactor_y * *(b + 102 * OS1_S1 + 16) -
                p_over_q * *(b + 144 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 7);
            *(b + 102 * OS1_S1 + 31) =
                prefactor_z * *(b + 102 * OS1_S1 + 16) -
                p_over_q * *(b + 145 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 16);
            *(b + 102 * OS1_S1 + 32) =
                prefactor_y * *(b + 102 * OS1_S1 + 18) -
                p_over_q * *(b + 144 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 18) +
                one_over_two_q * *(b + 102 * OS1_S1 + 9);
            *(b + 102 * OS1_S1 + 33) =
                prefactor_y * *(b + 102 * OS1_S1 + 19) -
                p_over_q * *(b + 144 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 19);
            *(b + 102 * OS1_S1 + 34) =
                prefactor_z * *(b + 102 * OS1_S1 + 19) -
                p_over_q * *(b + 145 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 9);
            *(b + 103 * OS1_S1 + 20) =
                prefactor_x * *(b + 103 * OS1_S1 + 10) -
                p_over_q * *(b + 139 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 4);
            *(b + 103 * OS1_S1 + 21) = prefactor_y * *(b + 103 * OS1_S1 + 10) -
                                       p_over_q * *(b + 145 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 10);
            *(b + 103 * OS1_S1 + 22) =
                prefactor_z * *(b + 103 * OS1_S1 + 10) -
                p_over_q * *(b + 146 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 10);
            *(b + 103 * OS1_S1 + 23) =
                prefactor_y * *(b + 103 * OS1_S1 + 11) -
                p_over_q * *(b + 145 * OS1_S1 + 11) +
                one_over_two_q * *(b + 70 * OS1_S1 + 11) +
                one_over_two_q * *(b + 103 * OS1_S1 + 4);
            *(b + 103 * OS1_S1 + 24) = prefactor_y * *(b + 103 * OS1_S1 + 12) -
                                       p_over_q * *(b + 145 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 12);
            *(b + 103 * OS1_S1 + 25) =
                prefactor_x * *(b + 103 * OS1_S1 + 15) -
                p_over_q * *(b + 139 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 15) +
                one_over_two_q * *(b + 103 * OS1_S1 + 9);
            *(b + 103 * OS1_S1 + 26) =
                prefactor_x * *(b + 103 * OS1_S1 + 16) -
                p_over_q * *(b + 139 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 16);
            *(b + 103 * OS1_S1 + 27) =
                prefactor_x * *(b + 103 * OS1_S1 + 17) -
                p_over_q * *(b + 139 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 17);
            *(b + 103 * OS1_S1 + 28) = prefactor_y * *(b + 103 * OS1_S1 + 15) -
                                       p_over_q * *(b + 145 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 15);
            *(b + 103 * OS1_S1 + 29) =
                prefactor_x * *(b + 103 * OS1_S1 + 19) -
                p_over_q * *(b + 139 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 19);
            *(b + 103 * OS1_S1 + 30) =
                prefactor_y * *(b + 103 * OS1_S1 + 16) -
                p_over_q * *(b + 145 * OS1_S1 + 16) +
                one_over_two_q * *(b + 70 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 7);
            *(b + 103 * OS1_S1 + 31) =
                prefactor_z * *(b + 103 * OS1_S1 + 16) -
                p_over_q * *(b + 146 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 16);
            *(b + 103 * OS1_S1 + 32) =
                prefactor_y * *(b + 103 * OS1_S1 + 18) -
                p_over_q * *(b + 145 * OS1_S1 + 18) +
                one_over_two_q * *(b + 70 * OS1_S1 + 18) +
                one_over_two_q * *(b + 103 * OS1_S1 + 9);
            *(b + 103 * OS1_S1 + 33) = prefactor_y * *(b + 103 * OS1_S1 + 19) -
                                       p_over_q * *(b + 145 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 19);
            *(b + 103 * OS1_S1 + 34) =
                prefactor_z * *(b + 103 * OS1_S1 + 19) -
                p_over_q * *(b + 146 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 9);
            *(b + 104 * OS1_S1 + 20) =
                prefactor_x * *(b + 104 * OS1_S1 + 10) -
                p_over_q * *(b + 140 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 4);
            *(b + 104 * OS1_S1 + 21) = prefactor_y * *(b + 104 * OS1_S1 + 10) -
                                       p_over_q * *(b + 146 * OS1_S1 + 10);
            *(b + 104 * OS1_S1 + 22) =
                prefactor_z * *(b + 104 * OS1_S1 + 10) -
                p_over_q * *(b + 147 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 10);
            *(b + 104 * OS1_S1 + 23) = prefactor_y * *(b + 104 * OS1_S1 + 11) -
                                       p_over_q * *(b + 146 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 104 * OS1_S1 + 4);
            *(b + 104 * OS1_S1 + 24) = prefactor_y * *(b + 104 * OS1_S1 + 12) -
                                       p_over_q * *(b + 146 * OS1_S1 + 12);
            *(b + 104 * OS1_S1 + 25) =
                prefactor_x * *(b + 104 * OS1_S1 + 15) -
                p_over_q * *(b + 140 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 15) +
                one_over_two_q * *(b + 104 * OS1_S1 + 9);
            *(b + 104 * OS1_S1 + 26) =
                prefactor_x * *(b + 104 * OS1_S1 + 16) -
                p_over_q * *(b + 140 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 16);
            *(b + 104 * OS1_S1 + 27) =
                prefactor_x * *(b + 104 * OS1_S1 + 17) -
                p_over_q * *(b + 140 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 17);
            *(b + 104 * OS1_S1 + 28) = prefactor_y * *(b + 104 * OS1_S1 + 15) -
                                       p_over_q * *(b + 146 * OS1_S1 + 15);
            *(b + 104 * OS1_S1 + 29) =
                prefactor_x * *(b + 104 * OS1_S1 + 19) -
                p_over_q * *(b + 140 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 19);
            *(b + 104 * OS1_S1 + 30) =
                prefactor_y * *(b + 104 * OS1_S1 + 16) -
                p_over_q * *(b + 146 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 7);
            *(b + 104 * OS1_S1 + 31) =
                prefactor_z * *(b + 104 * OS1_S1 + 16) -
                p_over_q * *(b + 147 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 16);
            *(b + 104 * OS1_S1 + 32) = prefactor_y * *(b + 104 * OS1_S1 + 18) -
                                       p_over_q * *(b + 146 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 104 * OS1_S1 + 9);
            *(b + 104 * OS1_S1 + 33) = prefactor_y * *(b + 104 * OS1_S1 + 19) -
                                       p_over_q * *(b + 146 * OS1_S1 + 19);
            *(b + 104 * OS1_S1 + 34) =
                prefactor_z * *(b + 104 * OS1_S1 + 19) -
                p_over_q * *(b + 147 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 9);
            *(b + 105 * OS1_S1 + 20) =
                prefactor_x * *(b + 105 * OS1_S1 + 10) -
                p_over_q * *(b + 141 * OS1_S1 + 10) +
                one_over_two_q * *(b + 77 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 105 * OS1_S1 + 4);
            *(b + 105 * OS1_S1 + 21) =
                prefactor_y * *(b + 105 * OS1_S1 + 10) -
                p_over_q * *(b + 148 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 10);
            *(b + 105 * OS1_S1 + 22) = prefactor_z * *(b + 105 * OS1_S1 + 10) -
                                       p_over_q * *(b + 149 * OS1_S1 + 10);
            *(b + 105 * OS1_S1 + 23) =
                prefactor_x * *(b + 105 * OS1_S1 + 13) -
                p_over_q * *(b + 141 * OS1_S1 + 13) +
                one_over_two_q * *(b + 77 * OS1_S1 + 13) +
                one_over_two_q * *(b + 105 * OS1_S1 + 7);
            *(b + 105 * OS1_S1 + 24) = prefactor_z * *(b + 105 * OS1_S1 + 11) -
                                       p_over_q * *(b + 149 * OS1_S1 + 11);
            *(b + 105 * OS1_S1 + 25) = prefactor_z * *(b + 105 * OS1_S1 + 12) -
                                       p_over_q * *(b + 149 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 105 * OS1_S1 + 4);
            *(b + 105 * OS1_S1 + 26) = prefactor_x * *(b + 105 * OS1_S1 + 16) -
                                       p_over_q * *(b + 141 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 16);
            *(b + 105 * OS1_S1 + 27) = prefactor_z * *(b + 105 * OS1_S1 + 13) -
                                       p_over_q * *(b + 149 * OS1_S1 + 13);
            *(b + 105 * OS1_S1 + 28) = prefactor_x * *(b + 105 * OS1_S1 + 18) -
                                       p_over_q * *(b + 141 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 18);
            *(b + 105 * OS1_S1 + 29) = prefactor_x * *(b + 105 * OS1_S1 + 19) -
                                       p_over_q * *(b + 141 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 19);
            *(b + 105 * OS1_S1 + 30) =
                prefactor_y * *(b + 105 * OS1_S1 + 16) -
                p_over_q * *(b + 148 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 105 * OS1_S1 + 7);
            *(b + 105 * OS1_S1 + 31) = prefactor_z * *(b + 105 * OS1_S1 + 16) -
                                       p_over_q * *(b + 149 * OS1_S1 + 16);
            *(b + 105 * OS1_S1 + 32) = prefactor_z * *(b + 105 * OS1_S1 + 17) -
                                       p_over_q * *(b + 149 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 105 * OS1_S1 + 7);
            *(b + 105 * OS1_S1 + 33) =
                prefactor_y * *(b + 105 * OS1_S1 + 19) -
                p_over_q * *(b + 148 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 19);
            *(b + 105 * OS1_S1 + 34) =
                prefactor_z * *(b + 105 * OS1_S1 + 19) -
                p_over_q * *(b + 149 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 105 * OS1_S1 + 9);
            *(b + 106 * OS1_S1 + 20) =
                prefactor_x * *(b + 106 * OS1_S1 + 10) -
                p_over_q * *(b + 142 * OS1_S1 + 10) +
                one_over_two_q * *(b + 78 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 106 * OS1_S1 + 4);
            *(b + 106 * OS1_S1 + 21) =
                prefactor_y * *(b + 106 * OS1_S1 + 10) -
                p_over_q * *(b + 149 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 10);
            *(b + 106 * OS1_S1 + 22) = prefactor_z * *(b + 106 * OS1_S1 + 10) -
                                       p_over_q * *(b + 150 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 10);
            *(b + 106 * OS1_S1 + 23) =
                prefactor_x * *(b + 106 * OS1_S1 + 13) -
                p_over_q * *(b + 142 * OS1_S1 + 13) +
                one_over_two_q * *(b + 78 * OS1_S1 + 13) +
                one_over_two_q * *(b + 106 * OS1_S1 + 7);
            *(b + 106 * OS1_S1 + 24) = prefactor_z * *(b + 106 * OS1_S1 + 11) -
                                       p_over_q * *(b + 150 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 11);
            *(b + 106 * OS1_S1 + 25) =
                prefactor_z * *(b + 106 * OS1_S1 + 12) -
                p_over_q * *(b + 150 * OS1_S1 + 12) +
                one_over_two_q * *(b + 71 * OS1_S1 + 12) +
                one_over_two_q * *(b + 106 * OS1_S1 + 4);
            *(b + 106 * OS1_S1 + 26) = prefactor_x * *(b + 106 * OS1_S1 + 16) -
                                       p_over_q * *(b + 142 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 16);
            *(b + 106 * OS1_S1 + 27) = prefactor_z * *(b + 106 * OS1_S1 + 13) -
                                       p_over_q * *(b + 150 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 13);
            *(b + 106 * OS1_S1 + 28) = prefactor_x * *(b + 106 * OS1_S1 + 18) -
                                       p_over_q * *(b + 142 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 18);
            *(b + 106 * OS1_S1 + 29) = prefactor_x * *(b + 106 * OS1_S1 + 19) -
                                       p_over_q * *(b + 142 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 19);
            *(b + 106 * OS1_S1 + 30) =
                prefactor_y * *(b + 106 * OS1_S1 + 16) -
                p_over_q * *(b + 149 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 106 * OS1_S1 + 7);
            *(b + 106 * OS1_S1 + 31) = prefactor_z * *(b + 106 * OS1_S1 + 16) -
                                       p_over_q * *(b + 150 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 16);
            *(b + 106 * OS1_S1 + 32) =
                prefactor_z * *(b + 106 * OS1_S1 + 17) -
                p_over_q * *(b + 150 * OS1_S1 + 17) +
                one_over_two_q * *(b + 71 * OS1_S1 + 17) +
                one_over_two_q * *(b + 106 * OS1_S1 + 7);
            *(b + 106 * OS1_S1 + 33) =
                prefactor_y * *(b + 106 * OS1_S1 + 19) -
                p_over_q * *(b + 149 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 19);
            *(b + 106 * OS1_S1 + 34) =
                prefactor_z * *(b + 106 * OS1_S1 + 19) -
                p_over_q * *(b + 150 * OS1_S1 + 19) +
                one_over_two_q * *(b + 71 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 106 * OS1_S1 + 9);
            *(b + 107 * OS1_S1 + 20) =
                prefactor_x * *(b + 107 * OS1_S1 + 10) -
                p_over_q * *(b + 143 * OS1_S1 + 10) +
                one_over_two_q * *(b + 79 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 4);
            *(b + 107 * OS1_S1 + 21) =
                prefactor_y * *(b + 107 * OS1_S1 + 10) -
                p_over_q * *(b + 150 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 10);
            *(b + 107 * OS1_S1 + 22) =
                prefactor_z * *(b + 107 * OS1_S1 + 10) -
                p_over_q * *(b + 151 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 10);
            *(b + 107 * OS1_S1 + 23) =
                prefactor_x * *(b + 107 * OS1_S1 + 13) -
                p_over_q * *(b + 143 * OS1_S1 + 13) +
                one_over_two_q * *(b + 79 * OS1_S1 + 13) +
                one_over_two_q * *(b + 107 * OS1_S1 + 7);
            *(b + 107 * OS1_S1 + 24) =
                prefactor_z * *(b + 107 * OS1_S1 + 11) -
                p_over_q * *(b + 151 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 11);
            *(b + 107 * OS1_S1 + 25) =
                prefactor_x * *(b + 107 * OS1_S1 + 15) -
                p_over_q * *(b + 143 * OS1_S1 + 15) +
                one_over_two_q * *(b + 79 * OS1_S1 + 15) +
                one_over_two_q * *(b + 107 * OS1_S1 + 9);
            *(b + 107 * OS1_S1 + 26) = prefactor_x * *(b + 107 * OS1_S1 + 16) -
                                       p_over_q * *(b + 143 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 16);
            *(b + 107 * OS1_S1 + 27) = prefactor_x * *(b + 107 * OS1_S1 + 17) -
                                       p_over_q * *(b + 143 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 17);
            *(b + 107 * OS1_S1 + 28) = prefactor_x * *(b + 107 * OS1_S1 + 18) -
                                       p_over_q * *(b + 143 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 18);
            *(b + 107 * OS1_S1 + 29) = prefactor_x * *(b + 107 * OS1_S1 + 19) -
                                       p_over_q * *(b + 143 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 19);
            *(b + 107 * OS1_S1 + 30) =
                prefactor_y * *(b + 107 * OS1_S1 + 16) -
                p_over_q * *(b + 150 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 7);
            *(b + 107 * OS1_S1 + 31) =
                prefactor_z * *(b + 107 * OS1_S1 + 16) -
                p_over_q * *(b + 151 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 16);
            *(b + 107 * OS1_S1 + 32) =
                prefactor_z * *(b + 107 * OS1_S1 + 17) -
                p_over_q * *(b + 151 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 17) +
                one_over_two_q * *(b + 107 * OS1_S1 + 7);
            *(b + 107 * OS1_S1 + 33) =
                prefactor_y * *(b + 107 * OS1_S1 + 19) -
                p_over_q * *(b + 150 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 19);
            *(b + 107 * OS1_S1 + 34) =
                prefactor_z * *(b + 107 * OS1_S1 + 19) -
                p_over_q * *(b + 151 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 9);
            *(b + 108 * OS1_S1 + 20) =
                prefactor_x * *(b + 108 * OS1_S1 + 10) -
                p_over_q * *(b + 144 * OS1_S1 + 10) +
                one_over_two_q * *(b + 80 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 108 * OS1_S1 + 4);
            *(b + 108 * OS1_S1 + 21) =
                prefactor_y * *(b + 108 * OS1_S1 + 10) -
                p_over_q * *(b + 151 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 10);
            *(b + 108 * OS1_S1 + 22) =
                prefactor_z * *(b + 108 * OS1_S1 + 10) -
                p_over_q * *(b + 152 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 10);
            *(b + 108 * OS1_S1 + 23) =
                prefactor_x * *(b + 108 * OS1_S1 + 13) -
                p_over_q * *(b + 144 * OS1_S1 + 13) +
                one_over_two_q * *(b + 80 * OS1_S1 + 13) +
                one_over_two_q * *(b + 108 * OS1_S1 + 7);
            *(b + 108 * OS1_S1 + 24) =
                prefactor_z * *(b + 108 * OS1_S1 + 11) -
                p_over_q * *(b + 152 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 11);
            *(b + 108 * OS1_S1 + 25) =
                prefactor_x * *(b + 108 * OS1_S1 + 15) -
                p_over_q * *(b + 144 * OS1_S1 + 15) +
                one_over_two_q * *(b + 80 * OS1_S1 + 15) +
                one_over_two_q * *(b + 108 * OS1_S1 + 9);
            *(b + 108 * OS1_S1 + 26) = prefactor_x * *(b + 108 * OS1_S1 + 16) -
                                       p_over_q * *(b + 144 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 16);
            *(b + 108 * OS1_S1 + 27) = prefactor_x * *(b + 108 * OS1_S1 + 17) -
                                       p_over_q * *(b + 144 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 17);
            *(b + 108 * OS1_S1 + 28) = prefactor_x * *(b + 108 * OS1_S1 + 18) -
                                       p_over_q * *(b + 144 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 18);
            *(b + 108 * OS1_S1 + 29) = prefactor_x * *(b + 108 * OS1_S1 + 19) -
                                       p_over_q * *(b + 144 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 19);
            *(b + 108 * OS1_S1 + 30) =
                prefactor_y * *(b + 108 * OS1_S1 + 16) -
                p_over_q * *(b + 151 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 108 * OS1_S1 + 7);
            *(b + 108 * OS1_S1 + 31) =
                prefactor_z * *(b + 108 * OS1_S1 + 16) -
                p_over_q * *(b + 152 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 16);
            *(b + 108 * OS1_S1 + 32) =
                prefactor_z * *(b + 108 * OS1_S1 + 17) -
                p_over_q * *(b + 152 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 17) +
                one_over_two_q * *(b + 108 * OS1_S1 + 7);
            *(b + 108 * OS1_S1 + 33) =
                prefactor_y * *(b + 108 * OS1_S1 + 19) -
                p_over_q * *(b + 151 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 19);
            *(b + 108 * OS1_S1 + 34) =
                prefactor_z * *(b + 108 * OS1_S1 + 19) -
                p_over_q * *(b + 152 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 108 * OS1_S1 + 9);
            *(b + 109 * OS1_S1 + 20) =
                prefactor_x * *(b + 109 * OS1_S1 + 10) -
                p_over_q * *(b + 145 * OS1_S1 + 10) +
                one_over_two_q * *(b + 81 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 4);
            *(b + 109 * OS1_S1 + 21) =
                prefactor_y * *(b + 109 * OS1_S1 + 10) -
                p_over_q * *(b + 152 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 10);
            *(b + 109 * OS1_S1 + 22) =
                prefactor_z * *(b + 109 * OS1_S1 + 10) -
                p_over_q * *(b + 153 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 10);
            *(b + 109 * OS1_S1 + 23) =
                prefactor_x * *(b + 109 * OS1_S1 + 13) -
                p_over_q * *(b + 145 * OS1_S1 + 13) +
                one_over_two_q * *(b + 81 * OS1_S1 + 13) +
                one_over_two_q * *(b + 109 * OS1_S1 + 7);
            *(b + 109 * OS1_S1 + 24) =
                prefactor_y * *(b + 109 * OS1_S1 + 12) -
                p_over_q * *(b + 152 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 12);
            *(b + 109 * OS1_S1 + 25) =
                prefactor_x * *(b + 109 * OS1_S1 + 15) -
                p_over_q * *(b + 145 * OS1_S1 + 15) +
                one_over_two_q * *(b + 81 * OS1_S1 + 15) +
                one_over_two_q * *(b + 109 * OS1_S1 + 9);
            *(b + 109 * OS1_S1 + 26) = prefactor_x * *(b + 109 * OS1_S1 + 16) -
                                       p_over_q * *(b + 145 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 16);
            *(b + 109 * OS1_S1 + 27) = prefactor_x * *(b + 109 * OS1_S1 + 17) -
                                       p_over_q * *(b + 145 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 17);
            *(b + 109 * OS1_S1 + 28) = prefactor_x * *(b + 109 * OS1_S1 + 18) -
                                       p_over_q * *(b + 145 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 18);
            *(b + 109 * OS1_S1 + 29) = prefactor_x * *(b + 109 * OS1_S1 + 19) -
                                       p_over_q * *(b + 145 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 19);
            *(b + 109 * OS1_S1 + 30) =
                prefactor_y * *(b + 109 * OS1_S1 + 16) -
                p_over_q * *(b + 152 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 7);
            *(b + 109 * OS1_S1 + 31) =
                prefactor_z * *(b + 109 * OS1_S1 + 16) -
                p_over_q * *(b + 153 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 16);
            *(b + 109 * OS1_S1 + 32) =
                prefactor_y * *(b + 109 * OS1_S1 + 18) -
                p_over_q * *(b + 152 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 18) +
                one_over_two_q * *(b + 109 * OS1_S1 + 9);
            *(b + 109 * OS1_S1 + 33) =
                prefactor_y * *(b + 109 * OS1_S1 + 19) -
                p_over_q * *(b + 152 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 19);
            *(b + 109 * OS1_S1 + 34) =
                prefactor_z * *(b + 109 * OS1_S1 + 19) -
                p_over_q * *(b + 153 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 9);
            *(b + 110 * OS1_S1 + 20) =
                prefactor_x * *(b + 110 * OS1_S1 + 10) -
                p_over_q * *(b + 146 * OS1_S1 + 10) +
                one_over_two_q * *(b + 82 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 110 * OS1_S1 + 4);
            *(b + 110 * OS1_S1 + 21) = prefactor_y * *(b + 110 * OS1_S1 + 10) -
                                       p_over_q * *(b + 153 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 10);
            *(b + 110 * OS1_S1 + 22) =
                prefactor_z * *(b + 110 * OS1_S1 + 10) -
                p_over_q * *(b + 154 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 10);
            *(b + 110 * OS1_S1 + 23) =
                prefactor_y * *(b + 110 * OS1_S1 + 11) -
                p_over_q * *(b + 153 * OS1_S1 + 11) +
                one_over_two_q * *(b + 76 * OS1_S1 + 11) +
                one_over_two_q * *(b + 110 * OS1_S1 + 4);
            *(b + 110 * OS1_S1 + 24) = prefactor_y * *(b + 110 * OS1_S1 + 12) -
                                       p_over_q * *(b + 153 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 12);
            *(b + 110 * OS1_S1 + 25) =
                prefactor_x * *(b + 110 * OS1_S1 + 15) -
                p_over_q * *(b + 146 * OS1_S1 + 15) +
                one_over_two_q * *(b + 82 * OS1_S1 + 15) +
                one_over_two_q * *(b + 110 * OS1_S1 + 9);
            *(b + 110 * OS1_S1 + 26) = prefactor_x * *(b + 110 * OS1_S1 + 16) -
                                       p_over_q * *(b + 146 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 16);
            *(b + 110 * OS1_S1 + 27) = prefactor_x * *(b + 110 * OS1_S1 + 17) -
                                       p_over_q * *(b + 146 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 17);
            *(b + 110 * OS1_S1 + 28) = prefactor_y * *(b + 110 * OS1_S1 + 15) -
                                       p_over_q * *(b + 153 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 15);
            *(b + 110 * OS1_S1 + 29) = prefactor_x * *(b + 110 * OS1_S1 + 19) -
                                       p_over_q * *(b + 146 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 19);
            *(b + 110 * OS1_S1 + 30) =
                prefactor_y * *(b + 110 * OS1_S1 + 16) -
                p_over_q * *(b + 153 * OS1_S1 + 16) +
                one_over_two_q * *(b + 76 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 110 * OS1_S1 + 7);
            *(b + 110 * OS1_S1 + 31) =
                prefactor_z * *(b + 110 * OS1_S1 + 16) -
                p_over_q * *(b + 154 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 16);
            *(b + 110 * OS1_S1 + 32) =
                prefactor_y * *(b + 110 * OS1_S1 + 18) -
                p_over_q * *(b + 153 * OS1_S1 + 18) +
                one_over_two_q * *(b + 76 * OS1_S1 + 18) +
                one_over_two_q * *(b + 110 * OS1_S1 + 9);
            *(b + 110 * OS1_S1 + 33) = prefactor_y * *(b + 110 * OS1_S1 + 19) -
                                       p_over_q * *(b + 153 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 19);
            *(b + 110 * OS1_S1 + 34) =
                prefactor_z * *(b + 110 * OS1_S1 + 19) -
                p_over_q * *(b + 154 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 110 * OS1_S1 + 9);
            *(b + 111 * OS1_S1 + 20) =
                prefactor_x * *(b + 111 * OS1_S1 + 10) -
                p_over_q * *(b + 147 * OS1_S1 + 10) +
                one_over_two_q * *(b + 83 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 111 * OS1_S1 + 4);
            *(b + 111 * OS1_S1 + 21) = prefactor_y * *(b + 111 * OS1_S1 + 10) -
                                       p_over_q * *(b + 154 * OS1_S1 + 10);
            *(b + 111 * OS1_S1 + 22) =
                prefactor_z * *(b + 111 * OS1_S1 + 10) -
                p_over_q * *(b + 155 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 10);
            *(b + 111 * OS1_S1 + 23) = prefactor_y * *(b + 111 * OS1_S1 + 11) -
                                       p_over_q * *(b + 154 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 111 * OS1_S1 + 4);
            *(b + 111 * OS1_S1 + 24) = prefactor_y * *(b + 111 * OS1_S1 + 12) -
                                       p_over_q * *(b + 154 * OS1_S1 + 12);
            *(b + 111 * OS1_S1 + 25) =
                prefactor_x * *(b + 111 * OS1_S1 + 15) -
                p_over_q * *(b + 147 * OS1_S1 + 15) +
                one_over_two_q * *(b + 83 * OS1_S1 + 15) +
                one_over_two_q * *(b + 111 * OS1_S1 + 9);
            *(b + 111 * OS1_S1 + 26) = prefactor_x * *(b + 111 * OS1_S1 + 16) -
                                       p_over_q * *(b + 147 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 16);
            *(b + 111 * OS1_S1 + 27) = prefactor_x * *(b + 111 * OS1_S1 + 17) -
                                       p_over_q * *(b + 147 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 17);
            *(b + 111 * OS1_S1 + 28) = prefactor_y * *(b + 111 * OS1_S1 + 15) -
                                       p_over_q * *(b + 154 * OS1_S1 + 15);
            *(b + 111 * OS1_S1 + 29) = prefactor_x * *(b + 111 * OS1_S1 + 19) -
                                       p_over_q * *(b + 147 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 19);
            *(b + 111 * OS1_S1 + 30) =
                prefactor_y * *(b + 111 * OS1_S1 + 16) -
                p_over_q * *(b + 154 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 111 * OS1_S1 + 7);
            *(b + 111 * OS1_S1 + 31) =
                prefactor_z * *(b + 111 * OS1_S1 + 16) -
                p_over_q * *(b + 155 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 16);
            *(b + 111 * OS1_S1 + 32) = prefactor_y * *(b + 111 * OS1_S1 + 18) -
                                       p_over_q * *(b + 154 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 111 * OS1_S1 + 9);
            *(b + 111 * OS1_S1 + 33) = prefactor_y * *(b + 111 * OS1_S1 + 19) -
                                       p_over_q * *(b + 154 * OS1_S1 + 19);
            *(b + 111 * OS1_S1 + 34) =
                prefactor_z * *(b + 111 * OS1_S1 + 19) -
                p_over_q * *(b + 155 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 111 * OS1_S1 + 9);
            *(b + 112 * OS1_S1 + 20) =
                prefactor_x * *(b + 112 * OS1_S1 + 10) -
                p_over_q * *(b + 148 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 112 * OS1_S1 + 4);
            *(b + 112 * OS1_S1 + 21) =
                prefactor_y * *(b + 112 * OS1_S1 + 10) -
                p_over_q * *(b + 156 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 10);
            *(b + 112 * OS1_S1 + 22) = prefactor_z * *(b + 112 * OS1_S1 + 10) -
                                       p_over_q * *(b + 157 * OS1_S1 + 10);
            *(b + 112 * OS1_S1 + 23) = prefactor_x * *(b + 112 * OS1_S1 + 13) -
                                       p_over_q * *(b + 148 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 112 * OS1_S1 + 7);
            *(b + 112 * OS1_S1 + 24) = prefactor_z * *(b + 112 * OS1_S1 + 11) -
                                       p_over_q * *(b + 157 * OS1_S1 + 11);
            *(b + 112 * OS1_S1 + 25) = prefactor_z * *(b + 112 * OS1_S1 + 12) -
                                       p_over_q * *(b + 157 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 112 * OS1_S1 + 4);
            *(b + 112 * OS1_S1 + 26) = prefactor_x * *(b + 112 * OS1_S1 + 16) -
                                       p_over_q * *(b + 148 * OS1_S1 + 16);
            *(b + 112 * OS1_S1 + 27) = prefactor_z * *(b + 112 * OS1_S1 + 13) -
                                       p_over_q * *(b + 157 * OS1_S1 + 13);
            *(b + 112 * OS1_S1 + 28) = prefactor_x * *(b + 112 * OS1_S1 + 18) -
                                       p_over_q * *(b + 148 * OS1_S1 + 18);
            *(b + 112 * OS1_S1 + 29) = prefactor_x * *(b + 112 * OS1_S1 + 19) -
                                       p_over_q * *(b + 148 * OS1_S1 + 19);
            *(b + 112 * OS1_S1 + 30) =
                prefactor_y * *(b + 112 * OS1_S1 + 16) -
                p_over_q * *(b + 156 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 112 * OS1_S1 + 7);
            *(b + 112 * OS1_S1 + 31) = prefactor_z * *(b + 112 * OS1_S1 + 16) -
                                       p_over_q * *(b + 157 * OS1_S1 + 16);
            *(b + 112 * OS1_S1 + 32) = prefactor_z * *(b + 112 * OS1_S1 + 17) -
                                       p_over_q * *(b + 157 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 112 * OS1_S1 + 7);
            *(b + 112 * OS1_S1 + 33) =
                prefactor_y * *(b + 112 * OS1_S1 + 19) -
                p_over_q * *(b + 156 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 19);
            *(b + 112 * OS1_S1 + 34) =
                prefactor_z * *(b + 112 * OS1_S1 + 19) -
                p_over_q * *(b + 157 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 112 * OS1_S1 + 9);
            *(b + 113 * OS1_S1 + 20) =
                prefactor_x * *(b + 113 * OS1_S1 + 10) -
                p_over_q * *(b + 149 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 113 * OS1_S1 + 4);
            *(b + 113 * OS1_S1 + 21) =
                prefactor_y * *(b + 113 * OS1_S1 + 10) -
                p_over_q * *(b + 157 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 10);
            *(b + 113 * OS1_S1 + 22) = prefactor_z * *(b + 113 * OS1_S1 + 10) -
                                       p_over_q * *(b + 158 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 10);
            *(b + 113 * OS1_S1 + 23) = prefactor_x * *(b + 113 * OS1_S1 + 13) -
                                       p_over_q * *(b + 149 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 113 * OS1_S1 + 7);
            *(b + 113 * OS1_S1 + 24) = prefactor_z * *(b + 113 * OS1_S1 + 11) -
                                       p_over_q * *(b + 158 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 11);
            *(b + 113 * OS1_S1 + 25) = prefactor_x * *(b + 113 * OS1_S1 + 15) -
                                       p_over_q * *(b + 149 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 113 * OS1_S1 + 9);
            *(b + 113 * OS1_S1 + 26) = prefactor_x * *(b + 113 * OS1_S1 + 16) -
                                       p_over_q * *(b + 149 * OS1_S1 + 16);
            *(b + 113 * OS1_S1 + 27) = prefactor_x * *(b + 113 * OS1_S1 + 17) -
                                       p_over_q * *(b + 149 * OS1_S1 + 17);
            *(b + 113 * OS1_S1 + 28) = prefactor_x * *(b + 113 * OS1_S1 + 18) -
                                       p_over_q * *(b + 149 * OS1_S1 + 18);
            *(b + 113 * OS1_S1 + 29) = prefactor_x * *(b + 113 * OS1_S1 + 19) -
                                       p_over_q * *(b + 149 * OS1_S1 + 19);
            *(b + 113 * OS1_S1 + 30) =
                prefactor_y * *(b + 113 * OS1_S1 + 16) -
                p_over_q * *(b + 157 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 113 * OS1_S1 + 7);
            *(b + 113 * OS1_S1 + 31) = prefactor_z * *(b + 113 * OS1_S1 + 16) -
                                       p_over_q * *(b + 158 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 16);
            *(b + 113 * OS1_S1 + 32) =
                prefactor_z * *(b + 113 * OS1_S1 + 17) -
                p_over_q * *(b + 158 * OS1_S1 + 17) +
                one_over_two_q * *(b + 77 * OS1_S1 + 17) +
                one_over_two_q * *(b + 113 * OS1_S1 + 7);
            *(b + 113 * OS1_S1 + 33) =
                prefactor_y * *(b + 113 * OS1_S1 + 19) -
                p_over_q * *(b + 157 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 19);
            *(b + 113 * OS1_S1 + 34) =
                prefactor_z * *(b + 113 * OS1_S1 + 19) -
                p_over_q * *(b + 158 * OS1_S1 + 19) +
                one_over_two_q * *(b + 77 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 113 * OS1_S1 + 9);
            *(b + 114 * OS1_S1 + 20) =
                prefactor_x * *(b + 114 * OS1_S1 + 10) -
                p_over_q * *(b + 150 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 4);
            *(b + 114 * OS1_S1 + 21) =
                prefactor_y * *(b + 114 * OS1_S1 + 10) -
                p_over_q * *(b + 158 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 10);
            *(b + 114 * OS1_S1 + 22) =
                prefactor_z * *(b + 114 * OS1_S1 + 10) -
                p_over_q * *(b + 159 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 10);
            *(b + 114 * OS1_S1 + 23) = prefactor_x * *(b + 114 * OS1_S1 + 13) -
                                       p_over_q * *(b + 150 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 114 * OS1_S1 + 7);
            *(b + 114 * OS1_S1 + 24) =
                prefactor_z * *(b + 114 * OS1_S1 + 11) -
                p_over_q * *(b + 159 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 11);
            *(b + 114 * OS1_S1 + 25) = prefactor_x * *(b + 114 * OS1_S1 + 15) -
                                       p_over_q * *(b + 150 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 114 * OS1_S1 + 9);
            *(b + 114 * OS1_S1 + 26) = prefactor_x * *(b + 114 * OS1_S1 + 16) -
                                       p_over_q * *(b + 150 * OS1_S1 + 16);
            *(b + 114 * OS1_S1 + 27) = prefactor_x * *(b + 114 * OS1_S1 + 17) -
                                       p_over_q * *(b + 150 * OS1_S1 + 17);
            *(b + 114 * OS1_S1 + 28) = prefactor_x * *(b + 114 * OS1_S1 + 18) -
                                       p_over_q * *(b + 150 * OS1_S1 + 18);
            *(b + 114 * OS1_S1 + 29) = prefactor_x * *(b + 114 * OS1_S1 + 19) -
                                       p_over_q * *(b + 150 * OS1_S1 + 19);
            *(b + 114 * OS1_S1 + 30) =
                prefactor_y * *(b + 114 * OS1_S1 + 16) -
                p_over_q * *(b + 158 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 7);
            *(b + 114 * OS1_S1 + 31) =
                prefactor_z * *(b + 114 * OS1_S1 + 16) -
                p_over_q * *(b + 159 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 16);
            *(b + 114 * OS1_S1 + 32) =
                prefactor_z * *(b + 114 * OS1_S1 + 17) -
                p_over_q * *(b + 159 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 17) +
                one_over_two_q * *(b + 114 * OS1_S1 + 7);
            *(b + 114 * OS1_S1 + 33) =
                prefactor_y * *(b + 114 * OS1_S1 + 19) -
                p_over_q * *(b + 158 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 19);
            *(b + 114 * OS1_S1 + 34) =
                prefactor_z * *(b + 114 * OS1_S1 + 19) -
                p_over_q * *(b + 159 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 9);
            *(b + 115 * OS1_S1 + 20) =
                prefactor_x * *(b + 115 * OS1_S1 + 10) -
                p_over_q * *(b + 151 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 115 * OS1_S1 + 4);
            *(b + 115 * OS1_S1 + 21) =
                prefactor_y * *(b + 115 * OS1_S1 + 10) -
                p_over_q * *(b + 159 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 10);
            *(b + 115 * OS1_S1 + 22) =
                prefactor_z * *(b + 115 * OS1_S1 + 10) -
                p_over_q * *(b + 160 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 10);
            *(b + 115 * OS1_S1 + 23) = prefactor_x * *(b + 115 * OS1_S1 + 13) -
                                       p_over_q * *(b + 151 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 115 * OS1_S1 + 7);
            *(b + 115 * OS1_S1 + 24) =
                prefactor_z * *(b + 115 * OS1_S1 + 11) -
                p_over_q * *(b + 160 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 11);
            *(b + 115 * OS1_S1 + 25) = prefactor_x * *(b + 115 * OS1_S1 + 15) -
                                       p_over_q * *(b + 151 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 115 * OS1_S1 + 9);
            *(b + 115 * OS1_S1 + 26) = prefactor_x * *(b + 115 * OS1_S1 + 16) -
                                       p_over_q * *(b + 151 * OS1_S1 + 16);
            *(b + 115 * OS1_S1 + 27) = prefactor_x * *(b + 115 * OS1_S1 + 17) -
                                       p_over_q * *(b + 151 * OS1_S1 + 17);
            *(b + 115 * OS1_S1 + 28) = prefactor_x * *(b + 115 * OS1_S1 + 18) -
                                       p_over_q * *(b + 151 * OS1_S1 + 18);
            *(b + 115 * OS1_S1 + 29) = prefactor_x * *(b + 115 * OS1_S1 + 19) -
                                       p_over_q * *(b + 151 * OS1_S1 + 19);
            *(b + 115 * OS1_S1 + 30) =
                prefactor_y * *(b + 115 * OS1_S1 + 16) -
                p_over_q * *(b + 159 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 115 * OS1_S1 + 7);
            *(b + 115 * OS1_S1 + 31) =
                prefactor_z * *(b + 115 * OS1_S1 + 16) -
                p_over_q * *(b + 160 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 16);
            *(b + 115 * OS1_S1 + 32) =
                prefactor_z * *(b + 115 * OS1_S1 + 17) -
                p_over_q * *(b + 160 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 17) +
                one_over_two_q * *(b + 115 * OS1_S1 + 7);
            *(b + 115 * OS1_S1 + 33) =
                prefactor_y * *(b + 115 * OS1_S1 + 19) -
                p_over_q * *(b + 159 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 19);
            *(b + 115 * OS1_S1 + 34) =
                prefactor_z * *(b + 115 * OS1_S1 + 19) -
                p_over_q * *(b + 160 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 115 * OS1_S1 + 9);
            *(b + 116 * OS1_S1 + 20) =
                prefactor_x * *(b + 116 * OS1_S1 + 10) -
                p_over_q * *(b + 152 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 116 * OS1_S1 + 4);
            *(b + 116 * OS1_S1 + 21) =
                prefactor_y * *(b + 116 * OS1_S1 + 10) -
                p_over_q * *(b + 160 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 10);
            *(b + 116 * OS1_S1 + 22) =
                prefactor_z * *(b + 116 * OS1_S1 + 10) -
                p_over_q * *(b + 161 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 10);
            *(b + 116 * OS1_S1 + 23) = prefactor_x * *(b + 116 * OS1_S1 + 13) -
                                       p_over_q * *(b + 152 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 116 * OS1_S1 + 7);
            *(b + 116 * OS1_S1 + 24) =
                prefactor_y * *(b + 116 * OS1_S1 + 12) -
                p_over_q * *(b + 160 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 12);
            *(b + 116 * OS1_S1 + 25) = prefactor_x * *(b + 116 * OS1_S1 + 15) -
                                       p_over_q * *(b + 152 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 116 * OS1_S1 + 9);
            *(b + 116 * OS1_S1 + 26) = prefactor_x * *(b + 116 * OS1_S1 + 16) -
                                       p_over_q * *(b + 152 * OS1_S1 + 16);
            *(b + 116 * OS1_S1 + 27) = prefactor_x * *(b + 116 * OS1_S1 + 17) -
                                       p_over_q * *(b + 152 * OS1_S1 + 17);
            *(b + 116 * OS1_S1 + 28) = prefactor_x * *(b + 116 * OS1_S1 + 18) -
                                       p_over_q * *(b + 152 * OS1_S1 + 18);
            *(b + 116 * OS1_S1 + 29) = prefactor_x * *(b + 116 * OS1_S1 + 19) -
                                       p_over_q * *(b + 152 * OS1_S1 + 19);
            *(b + 116 * OS1_S1 + 30) =
                prefactor_y * *(b + 116 * OS1_S1 + 16) -
                p_over_q * *(b + 160 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 116 * OS1_S1 + 7);
            *(b + 116 * OS1_S1 + 31) =
                prefactor_z * *(b + 116 * OS1_S1 + 16) -
                p_over_q * *(b + 161 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 16);
            *(b + 116 * OS1_S1 + 32) =
                prefactor_y * *(b + 116 * OS1_S1 + 18) -
                p_over_q * *(b + 160 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 18) +
                one_over_two_q * *(b + 116 * OS1_S1 + 9);
            *(b + 116 * OS1_S1 + 33) =
                prefactor_y * *(b + 116 * OS1_S1 + 19) -
                p_over_q * *(b + 160 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 19);
            *(b + 116 * OS1_S1 + 34) =
                prefactor_z * *(b + 116 * OS1_S1 + 19) -
                p_over_q * *(b + 161 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 116 * OS1_S1 + 9);
            *(b + 117 * OS1_S1 + 20) =
                prefactor_x * *(b + 117 * OS1_S1 + 10) -
                p_over_q * *(b + 153 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 4);
            *(b + 117 * OS1_S1 + 21) =
                prefactor_y * *(b + 117 * OS1_S1 + 10) -
                p_over_q * *(b + 161 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 10);
            *(b + 117 * OS1_S1 + 22) =
                prefactor_z * *(b + 117 * OS1_S1 + 10) -
                p_over_q * *(b + 162 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 10);
            *(b + 117 * OS1_S1 + 23) = prefactor_x * *(b + 117 * OS1_S1 + 13) -
                                       p_over_q * *(b + 153 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 117 * OS1_S1 + 7);
            *(b + 117 * OS1_S1 + 24) =
                prefactor_y * *(b + 117 * OS1_S1 + 12) -
                p_over_q * *(b + 161 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 12);
            *(b + 117 * OS1_S1 + 25) = prefactor_x * *(b + 117 * OS1_S1 + 15) -
                                       p_over_q * *(b + 153 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 117 * OS1_S1 + 9);
            *(b + 117 * OS1_S1 + 26) = prefactor_x * *(b + 117 * OS1_S1 + 16) -
                                       p_over_q * *(b + 153 * OS1_S1 + 16);
            *(b + 117 * OS1_S1 + 27) = prefactor_x * *(b + 117 * OS1_S1 + 17) -
                                       p_over_q * *(b + 153 * OS1_S1 + 17);
            *(b + 117 * OS1_S1 + 28) = prefactor_x * *(b + 117 * OS1_S1 + 18) -
                                       p_over_q * *(b + 153 * OS1_S1 + 18);
            *(b + 117 * OS1_S1 + 29) = prefactor_x * *(b + 117 * OS1_S1 + 19) -
                                       p_over_q * *(b + 153 * OS1_S1 + 19);
            *(b + 117 * OS1_S1 + 30) =
                prefactor_y * *(b + 117 * OS1_S1 + 16) -
                p_over_q * *(b + 161 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 7);
            *(b + 117 * OS1_S1 + 31) =
                prefactor_z * *(b + 117 * OS1_S1 + 16) -
                p_over_q * *(b + 162 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 16);
            *(b + 117 * OS1_S1 + 32) =
                prefactor_y * *(b + 117 * OS1_S1 + 18) -
                p_over_q * *(b + 161 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 18) +
                one_over_two_q * *(b + 117 * OS1_S1 + 9);
            *(b + 117 * OS1_S1 + 33) =
                prefactor_y * *(b + 117 * OS1_S1 + 19) -
                p_over_q * *(b + 161 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 19);
            *(b + 117 * OS1_S1 + 34) =
                prefactor_z * *(b + 117 * OS1_S1 + 19) -
                p_over_q * *(b + 162 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 9);
            *(b + 118 * OS1_S1 + 20) =
                prefactor_x * *(b + 118 * OS1_S1 + 10) -
                p_over_q * *(b + 154 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 118 * OS1_S1 + 4);
            *(b + 118 * OS1_S1 + 21) = prefactor_y * *(b + 118 * OS1_S1 + 10) -
                                       p_over_q * *(b + 162 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 10);
            *(b + 118 * OS1_S1 + 22) =
                prefactor_z * *(b + 118 * OS1_S1 + 10) -
                p_over_q * *(b + 163 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 10);
            *(b + 118 * OS1_S1 + 23) = prefactor_x * *(b + 118 * OS1_S1 + 13) -
                                       p_over_q * *(b + 154 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 118 * OS1_S1 + 7);
            *(b + 118 * OS1_S1 + 24) = prefactor_y * *(b + 118 * OS1_S1 + 12) -
                                       p_over_q * *(b + 162 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 12);
            *(b + 118 * OS1_S1 + 25) = prefactor_x * *(b + 118 * OS1_S1 + 15) -
                                       p_over_q * *(b + 154 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 118 * OS1_S1 + 9);
            *(b + 118 * OS1_S1 + 26) = prefactor_x * *(b + 118 * OS1_S1 + 16) -
                                       p_over_q * *(b + 154 * OS1_S1 + 16);
            *(b + 118 * OS1_S1 + 27) = prefactor_x * *(b + 118 * OS1_S1 + 17) -
                                       p_over_q * *(b + 154 * OS1_S1 + 17);
            *(b + 118 * OS1_S1 + 28) = prefactor_x * *(b + 118 * OS1_S1 + 18) -
                                       p_over_q * *(b + 154 * OS1_S1 + 18);
            *(b + 118 * OS1_S1 + 29) = prefactor_x * *(b + 118 * OS1_S1 + 19) -
                                       p_over_q * *(b + 154 * OS1_S1 + 19);
            *(b + 118 * OS1_S1 + 30) =
                prefactor_y * *(b + 118 * OS1_S1 + 16) -
                p_over_q * *(b + 162 * OS1_S1 + 16) +
                one_over_two_q * *(b + 83 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 118 * OS1_S1 + 7);
            *(b + 118 * OS1_S1 + 31) =
                prefactor_z * *(b + 118 * OS1_S1 + 16) -
                p_over_q * *(b + 163 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 16);
            *(b + 118 * OS1_S1 + 32) =
                prefactor_y * *(b + 118 * OS1_S1 + 18) -
                p_over_q * *(b + 162 * OS1_S1 + 18) +
                one_over_two_q * *(b + 83 * OS1_S1 + 18) +
                one_over_two_q * *(b + 118 * OS1_S1 + 9);
            *(b + 118 * OS1_S1 + 33) = prefactor_y * *(b + 118 * OS1_S1 + 19) -
                                       p_over_q * *(b + 162 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 19);
            *(b + 118 * OS1_S1 + 34) =
                prefactor_z * *(b + 118 * OS1_S1 + 19) -
                p_over_q * *(b + 163 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 118 * OS1_S1 + 9);
            *(b + 119 * OS1_S1 + 20) =
                prefactor_x * *(b + 119 * OS1_S1 + 10) -
                p_over_q * *(b + 155 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 119 * OS1_S1 + 4);
            *(b + 119 * OS1_S1 + 21) = prefactor_y * *(b + 119 * OS1_S1 + 10) -
                                       p_over_q * *(b + 163 * OS1_S1 + 10);
            *(b + 119 * OS1_S1 + 22) =
                prefactor_z * *(b + 119 * OS1_S1 + 10) -
                p_over_q * *(b + 164 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 10);
            *(b + 119 * OS1_S1 + 23) = prefactor_y * *(b + 119 * OS1_S1 + 11) -
                                       p_over_q * *(b + 163 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 119 * OS1_S1 + 4);
            *(b + 119 * OS1_S1 + 24) = prefactor_y * *(b + 119 * OS1_S1 + 12) -
                                       p_over_q * *(b + 163 * OS1_S1 + 12);
            *(b + 119 * OS1_S1 + 25) = prefactor_x * *(b + 119 * OS1_S1 + 15) -
                                       p_over_q * *(b + 155 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 119 * OS1_S1 + 9);
            *(b + 119 * OS1_S1 + 26) = prefactor_x * *(b + 119 * OS1_S1 + 16) -
                                       p_over_q * *(b + 155 * OS1_S1 + 16);
            *(b + 119 * OS1_S1 + 27) = prefactor_x * *(b + 119 * OS1_S1 + 17) -
                                       p_over_q * *(b + 155 * OS1_S1 + 17);
            *(b + 119 * OS1_S1 + 28) = prefactor_y * *(b + 119 * OS1_S1 + 15) -
                                       p_over_q * *(b + 163 * OS1_S1 + 15);
            *(b + 119 * OS1_S1 + 29) = prefactor_x * *(b + 119 * OS1_S1 + 19) -
                                       p_over_q * *(b + 155 * OS1_S1 + 19);
            *(b + 119 * OS1_S1 + 30) =
                prefactor_y * *(b + 119 * OS1_S1 + 16) -
                p_over_q * *(b + 163 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 119 * OS1_S1 + 7);
            *(b + 119 * OS1_S1 + 31) =
                prefactor_z * *(b + 119 * OS1_S1 + 16) -
                p_over_q * *(b + 164 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 16);
            *(b + 119 * OS1_S1 + 32) = prefactor_y * *(b + 119 * OS1_S1 + 18) -
                                       p_over_q * *(b + 163 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 119 * OS1_S1 + 9);
            *(b + 119 * OS1_S1 + 33) = prefactor_y * *(b + 119 * OS1_S1 + 19) -
                                       p_over_q * *(b + 163 * OS1_S1 + 19);
            *(b + 119 * OS1_S1 + 34) =
                prefactor_z * *(b + 119 * OS1_S1 + 19) -
                p_over_q * *(b + 164 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 119 * OS1_S1 + 9);
            return;
        }

        void transfer_8_4(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 120 * OS1_S1 + 20) =
                prefactor_x * *(b + 120 * OS1_S1 + 10) -
                p_over_q * *(b + 165 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 120 * OS1_S1 + 4);
            *(b + 120 * OS1_S1 + 21) = prefactor_y * *(b + 120 * OS1_S1 + 10) -
                                       p_over_q * *(b + 166 * OS1_S1 + 10);
            *(b + 120 * OS1_S1 + 22) = prefactor_z * *(b + 120 * OS1_S1 + 10) -
                                       p_over_q * *(b + 167 * OS1_S1 + 10);
            *(b + 120 * OS1_S1 + 23) = prefactor_y * *(b + 120 * OS1_S1 + 11) -
                                       p_over_q * *(b + 166 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 120 * OS1_S1 + 4);
            *(b + 120 * OS1_S1 + 24) = prefactor_z * *(b + 120 * OS1_S1 + 11) -
                                       p_over_q * *(b + 167 * OS1_S1 + 11);
            *(b + 120 * OS1_S1 + 25) = prefactor_z * *(b + 120 * OS1_S1 + 12) -
                                       p_over_q * *(b + 167 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 120 * OS1_S1 + 4);
            *(b + 120 * OS1_S1 + 26) =
                prefactor_x * *(b + 120 * OS1_S1 + 16) -
                p_over_q * *(b + 165 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 16);
            *(b + 120 * OS1_S1 + 27) = prefactor_z * *(b + 120 * OS1_S1 + 13) -
                                       p_over_q * *(b + 167 * OS1_S1 + 13);
            *(b + 120 * OS1_S1 + 28) = prefactor_y * *(b + 120 * OS1_S1 + 15) -
                                       p_over_q * *(b + 166 * OS1_S1 + 15);
            *(b + 120 * OS1_S1 + 29) =
                prefactor_x * *(b + 120 * OS1_S1 + 19) -
                p_over_q * *(b + 165 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 19);
            *(b + 120 * OS1_S1 + 30) =
                prefactor_y * *(b + 120 * OS1_S1 + 16) -
                p_over_q * *(b + 166 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 120 * OS1_S1 + 7);
            *(b + 120 * OS1_S1 + 31) = prefactor_z * *(b + 120 * OS1_S1 + 16) -
                                       p_over_q * *(b + 167 * OS1_S1 + 16);
            *(b + 120 * OS1_S1 + 32) = prefactor_z * *(b + 120 * OS1_S1 + 17) -
                                       p_over_q * *(b + 167 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 120 * OS1_S1 + 7);
            *(b + 120 * OS1_S1 + 33) = prefactor_y * *(b + 120 * OS1_S1 + 19) -
                                       p_over_q * *(b + 166 * OS1_S1 + 19);
            *(b + 120 * OS1_S1 + 34) =
                prefactor_z * *(b + 120 * OS1_S1 + 19) -
                p_over_q * *(b + 167 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 120 * OS1_S1 + 9);
            *(b + 121 * OS1_S1 + 20) =
                prefactor_x * *(b + 121 * OS1_S1 + 10) -
                p_over_q * *(b + 166 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 121 * OS1_S1 + 4);
            *(b + 121 * OS1_S1 + 21) = prefactor_y * *(b + 121 * OS1_S1 + 10) -
                                       p_over_q * *(b + 168 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 10);
            *(b + 121 * OS1_S1 + 22) = prefactor_z * *(b + 121 * OS1_S1 + 10) -
                                       p_over_q * *(b + 169 * OS1_S1 + 10);
            *(b + 121 * OS1_S1 + 23) =
                prefactor_y * *(b + 121 * OS1_S1 + 11) -
                p_over_q * *(b + 168 * OS1_S1 + 11) +
                one_over_two_q * *(b + 84 * OS1_S1 + 11) +
                one_over_two_q * *(b + 121 * OS1_S1 + 4);
            *(b + 121 * OS1_S1 + 24) = prefactor_z * *(b + 121 * OS1_S1 + 11) -
                                       p_over_q * *(b + 169 * OS1_S1 + 11);
            *(b + 121 * OS1_S1 + 25) = prefactor_z * *(b + 121 * OS1_S1 + 12) -
                                       p_over_q * *(b + 169 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 121 * OS1_S1 + 4);
            *(b + 121 * OS1_S1 + 26) =
                prefactor_x * *(b + 121 * OS1_S1 + 16) -
                p_over_q * *(b + 166 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 16);
            *(b + 121 * OS1_S1 + 27) = prefactor_z * *(b + 121 * OS1_S1 + 13) -
                                       p_over_q * *(b + 169 * OS1_S1 + 13);
            *(b + 121 * OS1_S1 + 28) = prefactor_y * *(b + 121 * OS1_S1 + 15) -
                                       p_over_q * *(b + 168 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 15);
            *(b + 121 * OS1_S1 + 29) =
                prefactor_x * *(b + 121 * OS1_S1 + 19) -
                p_over_q * *(b + 166 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 19);
            *(b + 121 * OS1_S1 + 30) =
                prefactor_y * *(b + 121 * OS1_S1 + 16) -
                p_over_q * *(b + 168 * OS1_S1 + 16) +
                one_over_two_q * *(b + 84 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 121 * OS1_S1 + 7);
            *(b + 121 * OS1_S1 + 31) = prefactor_z * *(b + 121 * OS1_S1 + 16) -
                                       p_over_q * *(b + 169 * OS1_S1 + 16);
            *(b + 121 * OS1_S1 + 32) = prefactor_z * *(b + 121 * OS1_S1 + 17) -
                                       p_over_q * *(b + 169 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 121 * OS1_S1 + 7);
            *(b + 121 * OS1_S1 + 33) = prefactor_y * *(b + 121 * OS1_S1 + 19) -
                                       p_over_q * *(b + 168 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 19);
            *(b + 121 * OS1_S1 + 34) =
                prefactor_z * *(b + 121 * OS1_S1 + 19) -
                p_over_q * *(b + 169 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 121 * OS1_S1 + 9);
            *(b + 122 * OS1_S1 + 20) =
                prefactor_x * *(b + 122 * OS1_S1 + 10) -
                p_over_q * *(b + 167 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 122 * OS1_S1 + 4);
            *(b + 122 * OS1_S1 + 21) = prefactor_y * *(b + 122 * OS1_S1 + 10) -
                                       p_over_q * *(b + 169 * OS1_S1 + 10);
            *(b + 122 * OS1_S1 + 22) = prefactor_z * *(b + 122 * OS1_S1 + 10) -
                                       p_over_q * *(b + 170 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 10);
            *(b + 122 * OS1_S1 + 23) = prefactor_y * *(b + 122 * OS1_S1 + 11) -
                                       p_over_q * *(b + 169 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 122 * OS1_S1 + 4);
            *(b + 122 * OS1_S1 + 24) = prefactor_y * *(b + 122 * OS1_S1 + 12) -
                                       p_over_q * *(b + 169 * OS1_S1 + 12);
            *(b + 122 * OS1_S1 + 25) =
                prefactor_z * *(b + 122 * OS1_S1 + 12) -
                p_over_q * *(b + 170 * OS1_S1 + 12) +
                one_over_two_q * *(b + 84 * OS1_S1 + 12) +
                one_over_two_q * *(b + 122 * OS1_S1 + 4);
            *(b + 122 * OS1_S1 + 26) =
                prefactor_x * *(b + 122 * OS1_S1 + 16) -
                p_over_q * *(b + 167 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 16);
            *(b + 122 * OS1_S1 + 27) = prefactor_z * *(b + 122 * OS1_S1 + 13) -
                                       p_over_q * *(b + 170 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 13);
            *(b + 122 * OS1_S1 + 28) = prefactor_y * *(b + 122 * OS1_S1 + 15) -
                                       p_over_q * *(b + 169 * OS1_S1 + 15);
            *(b + 122 * OS1_S1 + 29) =
                prefactor_x * *(b + 122 * OS1_S1 + 19) -
                p_over_q * *(b + 167 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 19);
            *(b + 122 * OS1_S1 + 30) =
                prefactor_y * *(b + 122 * OS1_S1 + 16) -
                p_over_q * *(b + 169 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 122 * OS1_S1 + 7);
            *(b + 122 * OS1_S1 + 31) = prefactor_z * *(b + 122 * OS1_S1 + 16) -
                                       p_over_q * *(b + 170 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 16);
            *(b + 122 * OS1_S1 + 32) = prefactor_y * *(b + 122 * OS1_S1 + 18) -
                                       p_over_q * *(b + 169 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 122 * OS1_S1 + 9);
            *(b + 122 * OS1_S1 + 33) = prefactor_y * *(b + 122 * OS1_S1 + 19) -
                                       p_over_q * *(b + 169 * OS1_S1 + 19);
            *(b + 122 * OS1_S1 + 34) =
                prefactor_z * *(b + 122 * OS1_S1 + 19) -
                p_over_q * *(b + 170 * OS1_S1 + 19) +
                one_over_two_q * *(b + 84 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 122 * OS1_S1 + 9);
            *(b + 123 * OS1_S1 + 20) =
                prefactor_x * *(b + 123 * OS1_S1 + 10) -
                p_over_q * *(b + 168 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 4);
            *(b + 123 * OS1_S1 + 21) =
                prefactor_y * *(b + 123 * OS1_S1 + 10) -
                p_over_q * *(b + 171 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 10);
            *(b + 123 * OS1_S1 + 22) = prefactor_z * *(b + 123 * OS1_S1 + 10) -
                                       p_over_q * *(b + 172 * OS1_S1 + 10);
            *(b + 123 * OS1_S1 + 23) =
                prefactor_y * *(b + 123 * OS1_S1 + 11) -
                p_over_q * *(b + 171 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 11) +
                one_over_two_q * *(b + 123 * OS1_S1 + 4);
            *(b + 123 * OS1_S1 + 24) = prefactor_z * *(b + 123 * OS1_S1 + 11) -
                                       p_over_q * *(b + 172 * OS1_S1 + 11);
            *(b + 123 * OS1_S1 + 25) = prefactor_z * *(b + 123 * OS1_S1 + 12) -
                                       p_over_q * *(b + 172 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 123 * OS1_S1 + 4);
            *(b + 123 * OS1_S1 + 26) =
                prefactor_x * *(b + 123 * OS1_S1 + 16) -
                p_over_q * *(b + 168 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 16);
            *(b + 123 * OS1_S1 + 27) = prefactor_z * *(b + 123 * OS1_S1 + 13) -
                                       p_over_q * *(b + 172 * OS1_S1 + 13);
            *(b + 123 * OS1_S1 + 28) =
                prefactor_y * *(b + 123 * OS1_S1 + 15) -
                p_over_q * *(b + 171 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 15);
            *(b + 123 * OS1_S1 + 29) =
                prefactor_x * *(b + 123 * OS1_S1 + 19) -
                p_over_q * *(b + 168 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 19);
            *(b + 123 * OS1_S1 + 30) =
                prefactor_y * *(b + 123 * OS1_S1 + 16) -
                p_over_q * *(b + 171 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 7);
            *(b + 123 * OS1_S1 + 31) = prefactor_z * *(b + 123 * OS1_S1 + 16) -
                                       p_over_q * *(b + 172 * OS1_S1 + 16);
            *(b + 123 * OS1_S1 + 32) = prefactor_z * *(b + 123 * OS1_S1 + 17) -
                                       p_over_q * *(b + 172 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 123 * OS1_S1 + 7);
            *(b + 123 * OS1_S1 + 33) =
                prefactor_y * *(b + 123 * OS1_S1 + 19) -
                p_over_q * *(b + 171 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 19);
            *(b + 123 * OS1_S1 + 34) =
                prefactor_z * *(b + 123 * OS1_S1 + 19) -
                p_over_q * *(b + 172 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 9);
            *(b + 124 * OS1_S1 + 20) =
                prefactor_x * *(b + 124 * OS1_S1 + 10) -
                p_over_q * *(b + 169 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 124 * OS1_S1 + 4);
            *(b + 124 * OS1_S1 + 21) = prefactor_y * *(b + 124 * OS1_S1 + 10) -
                                       p_over_q * *(b + 172 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 10);
            *(b + 124 * OS1_S1 + 22) = prefactor_z * *(b + 124 * OS1_S1 + 10) -
                                       p_over_q * *(b + 173 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 10);
            *(b + 124 * OS1_S1 + 23) =
                prefactor_y * *(b + 124 * OS1_S1 + 11) -
                p_over_q * *(b + 172 * OS1_S1 + 11) +
                one_over_two_q * *(b + 86 * OS1_S1 + 11) +
                one_over_two_q * *(b + 124 * OS1_S1 + 4);
            *(b + 124 * OS1_S1 + 24) = prefactor_z * *(b + 124 * OS1_S1 + 11) -
                                       p_over_q * *(b + 173 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 11);
            *(b + 124 * OS1_S1 + 25) =
                prefactor_z * *(b + 124 * OS1_S1 + 12) -
                p_over_q * *(b + 173 * OS1_S1 + 12) +
                one_over_two_q * *(b + 85 * OS1_S1 + 12) +
                one_over_two_q * *(b + 124 * OS1_S1 + 4);
            *(b + 124 * OS1_S1 + 26) =
                prefactor_x * *(b + 124 * OS1_S1 + 16) -
                p_over_q * *(b + 169 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 16);
            *(b + 124 * OS1_S1 + 27) = prefactor_z * *(b + 124 * OS1_S1 + 13) -
                                       p_over_q * *(b + 173 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 13);
            *(b + 124 * OS1_S1 + 28) = prefactor_y * *(b + 124 * OS1_S1 + 15) -
                                       p_over_q * *(b + 172 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 15);
            *(b + 124 * OS1_S1 + 29) =
                prefactor_x * *(b + 124 * OS1_S1 + 19) -
                p_over_q * *(b + 169 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 19);
            *(b + 124 * OS1_S1 + 30) =
                prefactor_y * *(b + 124 * OS1_S1 + 16) -
                p_over_q * *(b + 172 * OS1_S1 + 16) +
                one_over_two_q * *(b + 86 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 124 * OS1_S1 + 7);
            *(b + 124 * OS1_S1 + 31) = prefactor_z * *(b + 124 * OS1_S1 + 16) -
                                       p_over_q * *(b + 173 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 16);
            *(b + 124 * OS1_S1 + 32) =
                prefactor_z * *(b + 124 * OS1_S1 + 17) -
                p_over_q * *(b + 173 * OS1_S1 + 17) +
                one_over_two_q * *(b + 85 * OS1_S1 + 17) +
                one_over_two_q * *(b + 124 * OS1_S1 + 7);
            *(b + 124 * OS1_S1 + 33) = prefactor_y * *(b + 124 * OS1_S1 + 19) -
                                       p_over_q * *(b + 172 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 19);
            *(b + 124 * OS1_S1 + 34) =
                prefactor_z * *(b + 124 * OS1_S1 + 19) -
                p_over_q * *(b + 173 * OS1_S1 + 19) +
                one_over_two_q * *(b + 85 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 124 * OS1_S1 + 9);
            *(b + 125 * OS1_S1 + 20) =
                prefactor_x * *(b + 125 * OS1_S1 + 10) -
                p_over_q * *(b + 170 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 4);
            *(b + 125 * OS1_S1 + 21) = prefactor_y * *(b + 125 * OS1_S1 + 10) -
                                       p_over_q * *(b + 173 * OS1_S1 + 10);
            *(b + 125 * OS1_S1 + 22) =
                prefactor_z * *(b + 125 * OS1_S1 + 10) -
                p_over_q * *(b + 174 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 10);
            *(b + 125 * OS1_S1 + 23) = prefactor_y * *(b + 125 * OS1_S1 + 11) -
                                       p_over_q * *(b + 173 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 125 * OS1_S1 + 4);
            *(b + 125 * OS1_S1 + 24) = prefactor_y * *(b + 125 * OS1_S1 + 12) -
                                       p_over_q * *(b + 173 * OS1_S1 + 12);
            *(b + 125 * OS1_S1 + 25) =
                prefactor_z * *(b + 125 * OS1_S1 + 12) -
                p_over_q * *(b + 174 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 12) +
                one_over_two_q * *(b + 125 * OS1_S1 + 4);
            *(b + 125 * OS1_S1 + 26) =
                prefactor_x * *(b + 125 * OS1_S1 + 16) -
                p_over_q * *(b + 170 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 16);
            *(b + 125 * OS1_S1 + 27) =
                prefactor_z * *(b + 125 * OS1_S1 + 13) -
                p_over_q * *(b + 174 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 13);
            *(b + 125 * OS1_S1 + 28) = prefactor_y * *(b + 125 * OS1_S1 + 15) -
                                       p_over_q * *(b + 173 * OS1_S1 + 15);
            *(b + 125 * OS1_S1 + 29) =
                prefactor_x * *(b + 125 * OS1_S1 + 19) -
                p_over_q * *(b + 170 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 19);
            *(b + 125 * OS1_S1 + 30) =
                prefactor_y * *(b + 125 * OS1_S1 + 16) -
                p_over_q * *(b + 173 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 7);
            *(b + 125 * OS1_S1 + 31) =
                prefactor_z * *(b + 125 * OS1_S1 + 16) -
                p_over_q * *(b + 174 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 16);
            *(b + 125 * OS1_S1 + 32) = prefactor_y * *(b + 125 * OS1_S1 + 18) -
                                       p_over_q * *(b + 173 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 125 * OS1_S1 + 9);
            *(b + 125 * OS1_S1 + 33) = prefactor_y * *(b + 125 * OS1_S1 + 19) -
                                       p_over_q * *(b + 173 * OS1_S1 + 19);
            *(b + 125 * OS1_S1 + 34) =
                prefactor_z * *(b + 125 * OS1_S1 + 19) -
                p_over_q * *(b + 174 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 9);
            *(b + 126 * OS1_S1 + 20) =
                prefactor_x * *(b + 126 * OS1_S1 + 10) -
                p_over_q * *(b + 171 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 126 * OS1_S1 + 4);
            *(b + 126 * OS1_S1 + 21) =
                prefactor_y * *(b + 126 * OS1_S1 + 10) -
                p_over_q * *(b + 175 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 10);
            *(b + 126 * OS1_S1 + 22) = prefactor_z * *(b + 126 * OS1_S1 + 10) -
                                       p_over_q * *(b + 176 * OS1_S1 + 10);
            *(b + 126 * OS1_S1 + 23) =
                prefactor_y * *(b + 126 * OS1_S1 + 11) -
                p_over_q * *(b + 175 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 11) +
                one_over_two_q * *(b + 126 * OS1_S1 + 4);
            *(b + 126 * OS1_S1 + 24) = prefactor_z * *(b + 126 * OS1_S1 + 11) -
                                       p_over_q * *(b + 176 * OS1_S1 + 11);
            *(b + 126 * OS1_S1 + 25) = prefactor_z * *(b + 126 * OS1_S1 + 12) -
                                       p_over_q * *(b + 176 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 126 * OS1_S1 + 4);
            *(b + 126 * OS1_S1 + 26) =
                prefactor_x * *(b + 126 * OS1_S1 + 16) -
                p_over_q * *(b + 171 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 16);
            *(b + 126 * OS1_S1 + 27) = prefactor_z * *(b + 126 * OS1_S1 + 13) -
                                       p_over_q * *(b + 176 * OS1_S1 + 13);
            *(b + 126 * OS1_S1 + 28) =
                prefactor_y * *(b + 126 * OS1_S1 + 15) -
                p_over_q * *(b + 175 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 15);
            *(b + 126 * OS1_S1 + 29) =
                prefactor_x * *(b + 126 * OS1_S1 + 19) -
                p_over_q * *(b + 171 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 19);
            *(b + 126 * OS1_S1 + 30) =
                prefactor_y * *(b + 126 * OS1_S1 + 16) -
                p_over_q * *(b + 175 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 126 * OS1_S1 + 7);
            *(b + 126 * OS1_S1 + 31) = prefactor_z * *(b + 126 * OS1_S1 + 16) -
                                       p_over_q * *(b + 176 * OS1_S1 + 16);
            *(b + 126 * OS1_S1 + 32) = prefactor_z * *(b + 126 * OS1_S1 + 17) -
                                       p_over_q * *(b + 176 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 126 * OS1_S1 + 7);
            *(b + 126 * OS1_S1 + 33) =
                prefactor_y * *(b + 126 * OS1_S1 + 19) -
                p_over_q * *(b + 175 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 19);
            *(b + 126 * OS1_S1 + 34) =
                prefactor_z * *(b + 126 * OS1_S1 + 19) -
                p_over_q * *(b + 176 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 126 * OS1_S1 + 9);
            *(b + 127 * OS1_S1 + 20) =
                prefactor_x * *(b + 127 * OS1_S1 + 10) -
                p_over_q * *(b + 172 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 4);
            *(b + 127 * OS1_S1 + 21) =
                prefactor_y * *(b + 127 * OS1_S1 + 10) -
                p_over_q * *(b + 176 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 10);
            *(b + 127 * OS1_S1 + 22) = prefactor_z * *(b + 127 * OS1_S1 + 10) -
                                       p_over_q * *(b + 177 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 10);
            *(b + 127 * OS1_S1 + 23) =
                prefactor_y * *(b + 127 * OS1_S1 + 11) -
                p_over_q * *(b + 176 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 11) +
                one_over_two_q * *(b + 127 * OS1_S1 + 4);
            *(b + 127 * OS1_S1 + 24) = prefactor_z * *(b + 127 * OS1_S1 + 11) -
                                       p_over_q * *(b + 177 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 11);
            *(b + 127 * OS1_S1 + 25) =
                prefactor_z * *(b + 127 * OS1_S1 + 12) -
                p_over_q * *(b + 177 * OS1_S1 + 12) +
                one_over_two_q * *(b + 87 * OS1_S1 + 12) +
                one_over_two_q * *(b + 127 * OS1_S1 + 4);
            *(b + 127 * OS1_S1 + 26) =
                prefactor_x * *(b + 127 * OS1_S1 + 16) -
                p_over_q * *(b + 172 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 16);
            *(b + 127 * OS1_S1 + 27) = prefactor_z * *(b + 127 * OS1_S1 + 13) -
                                       p_over_q * *(b + 177 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 13);
            *(b + 127 * OS1_S1 + 28) =
                prefactor_y * *(b + 127 * OS1_S1 + 15) -
                p_over_q * *(b + 176 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 15);
            *(b + 127 * OS1_S1 + 29) =
                prefactor_x * *(b + 127 * OS1_S1 + 19) -
                p_over_q * *(b + 172 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 19);
            *(b + 127 * OS1_S1 + 30) =
                prefactor_y * *(b + 127 * OS1_S1 + 16) -
                p_over_q * *(b + 176 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 7);
            *(b + 127 * OS1_S1 + 31) = prefactor_z * *(b + 127 * OS1_S1 + 16) -
                                       p_over_q * *(b + 177 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 16);
            *(b + 127 * OS1_S1 + 32) =
                prefactor_z * *(b + 127 * OS1_S1 + 17) -
                p_over_q * *(b + 177 * OS1_S1 + 17) +
                one_over_two_q * *(b + 87 * OS1_S1 + 17) +
                one_over_two_q * *(b + 127 * OS1_S1 + 7);
            *(b + 127 * OS1_S1 + 33) =
                prefactor_y * *(b + 127 * OS1_S1 + 19) -
                p_over_q * *(b + 176 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 19);
            *(b + 127 * OS1_S1 + 34) =
                prefactor_z * *(b + 127 * OS1_S1 + 19) -
                p_over_q * *(b + 177 * OS1_S1 + 19) +
                one_over_two_q * *(b + 87 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 9);
            *(b + 128 * OS1_S1 + 20) =
                prefactor_x * *(b + 128 * OS1_S1 + 10) -
                p_over_q * *(b + 173 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 4);
            *(b + 128 * OS1_S1 + 21) = prefactor_y * *(b + 128 * OS1_S1 + 10) -
                                       p_over_q * *(b + 177 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 10);
            *(b + 128 * OS1_S1 + 22) =
                prefactor_z * *(b + 128 * OS1_S1 + 10) -
                p_over_q * *(b + 178 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 10);
            *(b + 128 * OS1_S1 + 23) =
                prefactor_y * *(b + 128 * OS1_S1 + 11) -
                p_over_q * *(b + 177 * OS1_S1 + 11) +
                one_over_two_q * *(b + 89 * OS1_S1 + 11) +
                one_over_two_q * *(b + 128 * OS1_S1 + 4);
            *(b + 128 * OS1_S1 + 24) = prefactor_y * *(b + 128 * OS1_S1 + 12) -
                                       p_over_q * *(b + 177 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 12);
            *(b + 128 * OS1_S1 + 25) =
                prefactor_z * *(b + 128 * OS1_S1 + 12) -
                p_over_q * *(b + 178 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 12) +
                one_over_two_q * *(b + 128 * OS1_S1 + 4);
            *(b + 128 * OS1_S1 + 26) =
                prefactor_x * *(b + 128 * OS1_S1 + 16) -
                p_over_q * *(b + 173 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 16);
            *(b + 128 * OS1_S1 + 27) =
                prefactor_z * *(b + 128 * OS1_S1 + 13) -
                p_over_q * *(b + 178 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 13);
            *(b + 128 * OS1_S1 + 28) = prefactor_y * *(b + 128 * OS1_S1 + 15) -
                                       p_over_q * *(b + 177 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 15);
            *(b + 128 * OS1_S1 + 29) =
                prefactor_x * *(b + 128 * OS1_S1 + 19) -
                p_over_q * *(b + 173 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 19);
            *(b + 128 * OS1_S1 + 30) =
                prefactor_y * *(b + 128 * OS1_S1 + 16) -
                p_over_q * *(b + 177 * OS1_S1 + 16) +
                one_over_two_q * *(b + 89 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 7);
            *(b + 128 * OS1_S1 + 31) =
                prefactor_z * *(b + 128 * OS1_S1 + 16) -
                p_over_q * *(b + 178 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 16);
            *(b + 128 * OS1_S1 + 32) =
                prefactor_y * *(b + 128 * OS1_S1 + 18) -
                p_over_q * *(b + 177 * OS1_S1 + 18) +
                one_over_two_q * *(b + 89 * OS1_S1 + 18) +
                one_over_two_q * *(b + 128 * OS1_S1 + 9);
            *(b + 128 * OS1_S1 + 33) = prefactor_y * *(b + 128 * OS1_S1 + 19) -
                                       p_over_q * *(b + 177 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 19);
            *(b + 128 * OS1_S1 + 34) =
                prefactor_z * *(b + 128 * OS1_S1 + 19) -
                p_over_q * *(b + 178 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 9);
            *(b + 129 * OS1_S1 + 20) =
                prefactor_x * *(b + 129 * OS1_S1 + 10) -
                p_over_q * *(b + 174 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 129 * OS1_S1 + 4);
            *(b + 129 * OS1_S1 + 21) = prefactor_y * *(b + 129 * OS1_S1 + 10) -
                                       p_over_q * *(b + 178 * OS1_S1 + 10);
            *(b + 129 * OS1_S1 + 22) =
                prefactor_z * *(b + 129 * OS1_S1 + 10) -
                p_over_q * *(b + 179 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 10);
            *(b + 129 * OS1_S1 + 23) = prefactor_y * *(b + 129 * OS1_S1 + 11) -
                                       p_over_q * *(b + 178 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 129 * OS1_S1 + 4);
            *(b + 129 * OS1_S1 + 24) = prefactor_y * *(b + 129 * OS1_S1 + 12) -
                                       p_over_q * *(b + 178 * OS1_S1 + 12);
            *(b + 129 * OS1_S1 + 25) =
                prefactor_z * *(b + 129 * OS1_S1 + 12) -
                p_over_q * *(b + 179 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 12) +
                one_over_two_q * *(b + 129 * OS1_S1 + 4);
            *(b + 129 * OS1_S1 + 26) =
                prefactor_x * *(b + 129 * OS1_S1 + 16) -
                p_over_q * *(b + 174 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 16);
            *(b + 129 * OS1_S1 + 27) =
                prefactor_z * *(b + 129 * OS1_S1 + 13) -
                p_over_q * *(b + 179 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 13);
            *(b + 129 * OS1_S1 + 28) = prefactor_y * *(b + 129 * OS1_S1 + 15) -
                                       p_over_q * *(b + 178 * OS1_S1 + 15);
            *(b + 129 * OS1_S1 + 29) =
                prefactor_x * *(b + 129 * OS1_S1 + 19) -
                p_over_q * *(b + 174 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 19);
            *(b + 129 * OS1_S1 + 30) =
                prefactor_y * *(b + 129 * OS1_S1 + 16) -
                p_over_q * *(b + 178 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 129 * OS1_S1 + 7);
            *(b + 129 * OS1_S1 + 31) =
                prefactor_z * *(b + 129 * OS1_S1 + 16) -
                p_over_q * *(b + 179 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 16);
            *(b + 129 * OS1_S1 + 32) = prefactor_y * *(b + 129 * OS1_S1 + 18) -
                                       p_over_q * *(b + 178 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 129 * OS1_S1 + 9);
            *(b + 129 * OS1_S1 + 33) = prefactor_y * *(b + 129 * OS1_S1 + 19) -
                                       p_over_q * *(b + 178 * OS1_S1 + 19);
            *(b + 129 * OS1_S1 + 34) =
                prefactor_z * *(b + 129 * OS1_S1 + 19) -
                p_over_q * *(b + 179 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 129 * OS1_S1 + 9);
            *(b + 130 * OS1_S1 + 20) =
                prefactor_x * *(b + 130 * OS1_S1 + 10) -
                p_over_q * *(b + 175 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 130 * OS1_S1 + 4);
            *(b + 130 * OS1_S1 + 21) =
                prefactor_y * *(b + 130 * OS1_S1 + 10) -
                p_over_q * *(b + 180 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 10);
            *(b + 130 * OS1_S1 + 22) = prefactor_z * *(b + 130 * OS1_S1 + 10) -
                                       p_over_q * *(b + 181 * OS1_S1 + 10);
            *(b + 130 * OS1_S1 + 23) =
                prefactor_y * *(b + 130 * OS1_S1 + 11) -
                p_over_q * *(b + 180 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 11) +
                one_over_two_q * *(b + 130 * OS1_S1 + 4);
            *(b + 130 * OS1_S1 + 24) = prefactor_z * *(b + 130 * OS1_S1 + 11) -
                                       p_over_q * *(b + 181 * OS1_S1 + 11);
            *(b + 130 * OS1_S1 + 25) = prefactor_z * *(b + 130 * OS1_S1 + 12) -
                                       p_over_q * *(b + 181 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 130 * OS1_S1 + 4);
            *(b + 130 * OS1_S1 + 26) =
                prefactor_x * *(b + 130 * OS1_S1 + 16) -
                p_over_q * *(b + 175 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 16);
            *(b + 130 * OS1_S1 + 27) = prefactor_z * *(b + 130 * OS1_S1 + 13) -
                                       p_over_q * *(b + 181 * OS1_S1 + 13);
            *(b + 130 * OS1_S1 + 28) =
                prefactor_y * *(b + 130 * OS1_S1 + 15) -
                p_over_q * *(b + 180 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 15);
            *(b + 130 * OS1_S1 + 29) =
                prefactor_x * *(b + 130 * OS1_S1 + 19) -
                p_over_q * *(b + 175 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 19);
            *(b + 130 * OS1_S1 + 30) =
                prefactor_y * *(b + 130 * OS1_S1 + 16) -
                p_over_q * *(b + 180 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 130 * OS1_S1 + 7);
            *(b + 130 * OS1_S1 + 31) = prefactor_z * *(b + 130 * OS1_S1 + 16) -
                                       p_over_q * *(b + 181 * OS1_S1 + 16);
            *(b + 130 * OS1_S1 + 32) = prefactor_z * *(b + 130 * OS1_S1 + 17) -
                                       p_over_q * *(b + 181 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 130 * OS1_S1 + 7);
            *(b + 130 * OS1_S1 + 33) =
                prefactor_y * *(b + 130 * OS1_S1 + 19) -
                p_over_q * *(b + 180 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 19);
            *(b + 130 * OS1_S1 + 34) =
                prefactor_z * *(b + 130 * OS1_S1 + 19) -
                p_over_q * *(b + 181 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 130 * OS1_S1 + 9);
            *(b + 131 * OS1_S1 + 20) =
                prefactor_x * *(b + 131 * OS1_S1 + 10) -
                p_over_q * *(b + 176 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 131 * OS1_S1 + 4);
            *(b + 131 * OS1_S1 + 21) =
                prefactor_y * *(b + 131 * OS1_S1 + 10) -
                p_over_q * *(b + 181 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 10);
            *(b + 131 * OS1_S1 + 22) = prefactor_z * *(b + 131 * OS1_S1 + 10) -
                                       p_over_q * *(b + 182 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 10);
            *(b + 131 * OS1_S1 + 23) =
                prefactor_y * *(b + 131 * OS1_S1 + 11) -
                p_over_q * *(b + 181 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 11) +
                one_over_two_q * *(b + 131 * OS1_S1 + 4);
            *(b + 131 * OS1_S1 + 24) = prefactor_z * *(b + 131 * OS1_S1 + 11) -
                                       p_over_q * *(b + 182 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 11);
            *(b + 131 * OS1_S1 + 25) =
                prefactor_z * *(b + 131 * OS1_S1 + 12) -
                p_over_q * *(b + 182 * OS1_S1 + 12) +
                one_over_two_q * *(b + 90 * OS1_S1 + 12) +
                one_over_two_q * *(b + 131 * OS1_S1 + 4);
            *(b + 131 * OS1_S1 + 26) =
                prefactor_x * *(b + 131 * OS1_S1 + 16) -
                p_over_q * *(b + 176 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 16);
            *(b + 131 * OS1_S1 + 27) = prefactor_z * *(b + 131 * OS1_S1 + 13) -
                                       p_over_q * *(b + 182 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 13);
            *(b + 131 * OS1_S1 + 28) =
                prefactor_y * *(b + 131 * OS1_S1 + 15) -
                p_over_q * *(b + 181 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 15);
            *(b + 131 * OS1_S1 + 29) =
                prefactor_x * *(b + 131 * OS1_S1 + 19) -
                p_over_q * *(b + 176 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 19);
            *(b + 131 * OS1_S1 + 30) =
                prefactor_y * *(b + 131 * OS1_S1 + 16) -
                p_over_q * *(b + 181 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 131 * OS1_S1 + 7);
            *(b + 131 * OS1_S1 + 31) = prefactor_z * *(b + 131 * OS1_S1 + 16) -
                                       p_over_q * *(b + 182 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 16);
            *(b + 131 * OS1_S1 + 32) =
                prefactor_z * *(b + 131 * OS1_S1 + 17) -
                p_over_q * *(b + 182 * OS1_S1 + 17) +
                one_over_two_q * *(b + 90 * OS1_S1 + 17) +
                one_over_two_q * *(b + 131 * OS1_S1 + 7);
            *(b + 131 * OS1_S1 + 33) =
                prefactor_y * *(b + 131 * OS1_S1 + 19) -
                p_over_q * *(b + 181 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 19);
            *(b + 131 * OS1_S1 + 34) =
                prefactor_z * *(b + 131 * OS1_S1 + 19) -
                p_over_q * *(b + 182 * OS1_S1 + 19) +
                one_over_two_q * *(b + 90 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 131 * OS1_S1 + 9);
            *(b + 132 * OS1_S1 + 20) =
                prefactor_x * *(b + 132 * OS1_S1 + 10) -
                p_over_q * *(b + 177 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 4);
            *(b + 132 * OS1_S1 + 21) =
                prefactor_y * *(b + 132 * OS1_S1 + 10) -
                p_over_q * *(b + 182 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 10);
            *(b + 132 * OS1_S1 + 22) =
                prefactor_z * *(b + 132 * OS1_S1 + 10) -
                p_over_q * *(b + 183 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 10);
            *(b + 132 * OS1_S1 + 23) =
                prefactor_y * *(b + 132 * OS1_S1 + 11) -
                p_over_q * *(b + 182 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 11) +
                one_over_two_q * *(b + 132 * OS1_S1 + 4);
            *(b + 132 * OS1_S1 + 24) =
                prefactor_z * *(b + 132 * OS1_S1 + 11) -
                p_over_q * *(b + 183 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 11);
            *(b + 132 * OS1_S1 + 25) =
                prefactor_z * *(b + 132 * OS1_S1 + 12) -
                p_over_q * *(b + 183 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 12) +
                one_over_two_q * *(b + 132 * OS1_S1 + 4);
            *(b + 132 * OS1_S1 + 26) =
                prefactor_x * *(b + 132 * OS1_S1 + 16) -
                p_over_q * *(b + 177 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 16);
            *(b + 132 * OS1_S1 + 27) =
                prefactor_z * *(b + 132 * OS1_S1 + 13) -
                p_over_q * *(b + 183 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 13);
            *(b + 132 * OS1_S1 + 28) =
                prefactor_y * *(b + 132 * OS1_S1 + 15) -
                p_over_q * *(b + 182 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 15);
            *(b + 132 * OS1_S1 + 29) =
                prefactor_x * *(b + 132 * OS1_S1 + 19) -
                p_over_q * *(b + 177 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 19);
            *(b + 132 * OS1_S1 + 30) =
                prefactor_y * *(b + 132 * OS1_S1 + 16) -
                p_over_q * *(b + 182 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 7);
            *(b + 132 * OS1_S1 + 31) =
                prefactor_z * *(b + 132 * OS1_S1 + 16) -
                p_over_q * *(b + 183 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 16);
            *(b + 132 * OS1_S1 + 32) =
                prefactor_z * *(b + 132 * OS1_S1 + 17) -
                p_over_q * *(b + 183 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 17) +
                one_over_two_q * *(b + 132 * OS1_S1 + 7);
            *(b + 132 * OS1_S1 + 33) =
                prefactor_y * *(b + 132 * OS1_S1 + 19) -
                p_over_q * *(b + 182 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 19);
            *(b + 132 * OS1_S1 + 34) =
                prefactor_z * *(b + 132 * OS1_S1 + 19) -
                p_over_q * *(b + 183 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 9);
            *(b + 133 * OS1_S1 + 20) =
                prefactor_x * *(b + 133 * OS1_S1 + 10) -
                p_over_q * *(b + 178 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 133 * OS1_S1 + 4);
            *(b + 133 * OS1_S1 + 21) = prefactor_y * *(b + 133 * OS1_S1 + 10) -
                                       p_over_q * *(b + 183 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 10);
            *(b + 133 * OS1_S1 + 22) =
                prefactor_z * *(b + 133 * OS1_S1 + 10) -
                p_over_q * *(b + 184 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 10);
            *(b + 133 * OS1_S1 + 23) =
                prefactor_y * *(b + 133 * OS1_S1 + 11) -
                p_over_q * *(b + 183 * OS1_S1 + 11) +
                one_over_two_q * *(b + 93 * OS1_S1 + 11) +
                one_over_two_q * *(b + 133 * OS1_S1 + 4);
            *(b + 133 * OS1_S1 + 24) = prefactor_y * *(b + 133 * OS1_S1 + 12) -
                                       p_over_q * *(b + 183 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 12);
            *(b + 133 * OS1_S1 + 25) =
                prefactor_z * *(b + 133 * OS1_S1 + 12) -
                p_over_q * *(b + 184 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 12) +
                one_over_two_q * *(b + 133 * OS1_S1 + 4);
            *(b + 133 * OS1_S1 + 26) =
                prefactor_x * *(b + 133 * OS1_S1 + 16) -
                p_over_q * *(b + 178 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 16);
            *(b + 133 * OS1_S1 + 27) =
                prefactor_z * *(b + 133 * OS1_S1 + 13) -
                p_over_q * *(b + 184 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 13);
            *(b + 133 * OS1_S1 + 28) = prefactor_y * *(b + 133 * OS1_S1 + 15) -
                                       p_over_q * *(b + 183 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 15);
            *(b + 133 * OS1_S1 + 29) =
                prefactor_x * *(b + 133 * OS1_S1 + 19) -
                p_over_q * *(b + 178 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 19);
            *(b + 133 * OS1_S1 + 30) =
                prefactor_y * *(b + 133 * OS1_S1 + 16) -
                p_over_q * *(b + 183 * OS1_S1 + 16) +
                one_over_two_q * *(b + 93 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 133 * OS1_S1 + 7);
            *(b + 133 * OS1_S1 + 31) =
                prefactor_z * *(b + 133 * OS1_S1 + 16) -
                p_over_q * *(b + 184 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 16);
            *(b + 133 * OS1_S1 + 32) =
                prefactor_y * *(b + 133 * OS1_S1 + 18) -
                p_over_q * *(b + 183 * OS1_S1 + 18) +
                one_over_two_q * *(b + 93 * OS1_S1 + 18) +
                one_over_two_q * *(b + 133 * OS1_S1 + 9);
            *(b + 133 * OS1_S1 + 33) = prefactor_y * *(b + 133 * OS1_S1 + 19) -
                                       p_over_q * *(b + 183 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 19);
            *(b + 133 * OS1_S1 + 34) =
                prefactor_z * *(b + 133 * OS1_S1 + 19) -
                p_over_q * *(b + 184 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 133 * OS1_S1 + 9);
            *(b + 134 * OS1_S1 + 20) =
                prefactor_x * *(b + 134 * OS1_S1 + 10) -
                p_over_q * *(b + 179 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 134 * OS1_S1 + 4);
            *(b + 134 * OS1_S1 + 21) = prefactor_y * *(b + 134 * OS1_S1 + 10) -
                                       p_over_q * *(b + 184 * OS1_S1 + 10);
            *(b + 134 * OS1_S1 + 22) =
                prefactor_z * *(b + 134 * OS1_S1 + 10) -
                p_over_q * *(b + 185 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 10);
            *(b + 134 * OS1_S1 + 23) = prefactor_y * *(b + 134 * OS1_S1 + 11) -
                                       p_over_q * *(b + 184 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 134 * OS1_S1 + 4);
            *(b + 134 * OS1_S1 + 24) = prefactor_y * *(b + 134 * OS1_S1 + 12) -
                                       p_over_q * *(b + 184 * OS1_S1 + 12);
            *(b + 134 * OS1_S1 + 25) =
                prefactor_z * *(b + 134 * OS1_S1 + 12) -
                p_over_q * *(b + 185 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 12) +
                one_over_two_q * *(b + 134 * OS1_S1 + 4);
            *(b + 134 * OS1_S1 + 26) =
                prefactor_x * *(b + 134 * OS1_S1 + 16) -
                p_over_q * *(b + 179 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 16);
            *(b + 134 * OS1_S1 + 27) =
                prefactor_z * *(b + 134 * OS1_S1 + 13) -
                p_over_q * *(b + 185 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 13);
            *(b + 134 * OS1_S1 + 28) = prefactor_y * *(b + 134 * OS1_S1 + 15) -
                                       p_over_q * *(b + 184 * OS1_S1 + 15);
            *(b + 134 * OS1_S1 + 29) =
                prefactor_x * *(b + 134 * OS1_S1 + 19) -
                p_over_q * *(b + 179 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 19);
            *(b + 134 * OS1_S1 + 30) =
                prefactor_y * *(b + 134 * OS1_S1 + 16) -
                p_over_q * *(b + 184 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 134 * OS1_S1 + 7);
            *(b + 134 * OS1_S1 + 31) =
                prefactor_z * *(b + 134 * OS1_S1 + 16) -
                p_over_q * *(b + 185 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 16);
            *(b + 134 * OS1_S1 + 32) = prefactor_y * *(b + 134 * OS1_S1 + 18) -
                                       p_over_q * *(b + 184 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 134 * OS1_S1 + 9);
            *(b + 134 * OS1_S1 + 33) = prefactor_y * *(b + 134 * OS1_S1 + 19) -
                                       p_over_q * *(b + 184 * OS1_S1 + 19);
            *(b + 134 * OS1_S1 + 34) =
                prefactor_z * *(b + 134 * OS1_S1 + 19) -
                p_over_q * *(b + 185 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 134 * OS1_S1 + 9);
            *(b + 135 * OS1_S1 + 20) =
                prefactor_x * *(b + 135 * OS1_S1 + 10) -
                p_over_q * *(b + 180 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 135 * OS1_S1 + 4);
            *(b + 135 * OS1_S1 + 21) =
                prefactor_y * *(b + 135 * OS1_S1 + 10) -
                p_over_q * *(b + 186 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 10);
            *(b + 135 * OS1_S1 + 22) = prefactor_z * *(b + 135 * OS1_S1 + 10) -
                                       p_over_q * *(b + 187 * OS1_S1 + 10);
            *(b + 135 * OS1_S1 + 23) =
                prefactor_x * *(b + 135 * OS1_S1 + 13) -
                p_over_q * *(b + 180 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 13) +
                one_over_two_q * *(b + 135 * OS1_S1 + 7);
            *(b + 135 * OS1_S1 + 24) = prefactor_z * *(b + 135 * OS1_S1 + 11) -
                                       p_over_q * *(b + 187 * OS1_S1 + 11);
            *(b + 135 * OS1_S1 + 25) = prefactor_z * *(b + 135 * OS1_S1 + 12) -
                                       p_over_q * *(b + 187 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 135 * OS1_S1 + 4);
            *(b + 135 * OS1_S1 + 26) =
                prefactor_x * *(b + 135 * OS1_S1 + 16) -
                p_over_q * *(b + 180 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 16);
            *(b + 135 * OS1_S1 + 27) = prefactor_z * *(b + 135 * OS1_S1 + 13) -
                                       p_over_q * *(b + 187 * OS1_S1 + 13);
            *(b + 135 * OS1_S1 + 28) =
                prefactor_x * *(b + 135 * OS1_S1 + 18) -
                p_over_q * *(b + 180 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 18);
            *(b + 135 * OS1_S1 + 29) =
                prefactor_x * *(b + 135 * OS1_S1 + 19) -
                p_over_q * *(b + 180 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 19);
            *(b + 135 * OS1_S1 + 30) =
                prefactor_y * *(b + 135 * OS1_S1 + 16) -
                p_over_q * *(b + 186 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 135 * OS1_S1 + 7);
            *(b + 135 * OS1_S1 + 31) = prefactor_z * *(b + 135 * OS1_S1 + 16) -
                                       p_over_q * *(b + 187 * OS1_S1 + 16);
            *(b + 135 * OS1_S1 + 32) = prefactor_z * *(b + 135 * OS1_S1 + 17) -
                                       p_over_q * *(b + 187 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 135 * OS1_S1 + 7);
            *(b + 135 * OS1_S1 + 33) =
                prefactor_y * *(b + 135 * OS1_S1 + 19) -
                p_over_q * *(b + 186 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 19);
            *(b + 135 * OS1_S1 + 34) =
                prefactor_z * *(b + 135 * OS1_S1 + 19) -
                p_over_q * *(b + 187 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 135 * OS1_S1 + 9);
            *(b + 136 * OS1_S1 + 20) =
                prefactor_x * *(b + 136 * OS1_S1 + 10) -
                p_over_q * *(b + 181 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 136 * OS1_S1 + 4);
            *(b + 136 * OS1_S1 + 21) =
                prefactor_y * *(b + 136 * OS1_S1 + 10) -
                p_over_q * *(b + 187 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 10);
            *(b + 136 * OS1_S1 + 22) = prefactor_z * *(b + 136 * OS1_S1 + 10) -
                                       p_over_q * *(b + 188 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 10);
            *(b + 136 * OS1_S1 + 23) =
                prefactor_x * *(b + 136 * OS1_S1 + 13) -
                p_over_q * *(b + 181 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 13) +
                one_over_two_q * *(b + 136 * OS1_S1 + 7);
            *(b + 136 * OS1_S1 + 24) = prefactor_z * *(b + 136 * OS1_S1 + 11) -
                                       p_over_q * *(b + 188 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 11);
            *(b + 136 * OS1_S1 + 25) =
                prefactor_z * *(b + 136 * OS1_S1 + 12) -
                p_over_q * *(b + 188 * OS1_S1 + 12) +
                one_over_two_q * *(b + 94 * OS1_S1 + 12) +
                one_over_two_q * *(b + 136 * OS1_S1 + 4);
            *(b + 136 * OS1_S1 + 26) =
                prefactor_x * *(b + 136 * OS1_S1 + 16) -
                p_over_q * *(b + 181 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 16);
            *(b + 136 * OS1_S1 + 27) = prefactor_z * *(b + 136 * OS1_S1 + 13) -
                                       p_over_q * *(b + 188 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 13);
            *(b + 136 * OS1_S1 + 28) =
                prefactor_x * *(b + 136 * OS1_S1 + 18) -
                p_over_q * *(b + 181 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 18);
            *(b + 136 * OS1_S1 + 29) =
                prefactor_x * *(b + 136 * OS1_S1 + 19) -
                p_over_q * *(b + 181 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 19);
            *(b + 136 * OS1_S1 + 30) =
                prefactor_y * *(b + 136 * OS1_S1 + 16) -
                p_over_q * *(b + 187 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 136 * OS1_S1 + 7);
            *(b + 136 * OS1_S1 + 31) = prefactor_z * *(b + 136 * OS1_S1 + 16) -
                                       p_over_q * *(b + 188 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 16);
            *(b + 136 * OS1_S1 + 32) =
                prefactor_z * *(b + 136 * OS1_S1 + 17) -
                p_over_q * *(b + 188 * OS1_S1 + 17) +
                one_over_two_q * *(b + 94 * OS1_S1 + 17) +
                one_over_two_q * *(b + 136 * OS1_S1 + 7);
            *(b + 136 * OS1_S1 + 33) =
                prefactor_y * *(b + 136 * OS1_S1 + 19) -
                p_over_q * *(b + 187 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 19);
            *(b + 136 * OS1_S1 + 34) =
                prefactor_z * *(b + 136 * OS1_S1 + 19) -
                p_over_q * *(b + 188 * OS1_S1 + 19) +
                one_over_two_q * *(b + 94 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 136 * OS1_S1 + 9);
            *(b + 137 * OS1_S1 + 20) =
                prefactor_x * *(b + 137 * OS1_S1 + 10) -
                p_over_q * *(b + 182 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 4);
            *(b + 137 * OS1_S1 + 21) =
                prefactor_y * *(b + 137 * OS1_S1 + 10) -
                p_over_q * *(b + 188 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 10);
            *(b + 137 * OS1_S1 + 22) =
                prefactor_z * *(b + 137 * OS1_S1 + 10) -
                p_over_q * *(b + 189 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 10);
            *(b + 137 * OS1_S1 + 23) =
                prefactor_y * *(b + 137 * OS1_S1 + 11) -
                p_over_q * *(b + 188 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 11) +
                one_over_two_q * *(b + 137 * OS1_S1 + 4);
            *(b + 137 * OS1_S1 + 24) =
                prefactor_z * *(b + 137 * OS1_S1 + 11) -
                p_over_q * *(b + 189 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 11);
            *(b + 137 * OS1_S1 + 25) =
                prefactor_z * *(b + 137 * OS1_S1 + 12) -
                p_over_q * *(b + 189 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 12) +
                one_over_two_q * *(b + 137 * OS1_S1 + 4);
            *(b + 137 * OS1_S1 + 26) =
                prefactor_x * *(b + 137 * OS1_S1 + 16) -
                p_over_q * *(b + 182 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 16);
            *(b + 137 * OS1_S1 + 27) =
                prefactor_z * *(b + 137 * OS1_S1 + 13) -
                p_over_q * *(b + 189 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 13);
            *(b + 137 * OS1_S1 + 28) =
                prefactor_y * *(b + 137 * OS1_S1 + 15) -
                p_over_q * *(b + 188 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 15);
            *(b + 137 * OS1_S1 + 29) =
                prefactor_x * *(b + 137 * OS1_S1 + 19) -
                p_over_q * *(b + 182 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 19);
            *(b + 137 * OS1_S1 + 30) =
                prefactor_y * *(b + 137 * OS1_S1 + 16) -
                p_over_q * *(b + 188 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 7);
            *(b + 137 * OS1_S1 + 31) =
                prefactor_z * *(b + 137 * OS1_S1 + 16) -
                p_over_q * *(b + 189 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 16);
            *(b + 137 * OS1_S1 + 32) =
                prefactor_z * *(b + 137 * OS1_S1 + 17) -
                p_over_q * *(b + 189 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 17) +
                one_over_two_q * *(b + 137 * OS1_S1 + 7);
            *(b + 137 * OS1_S1 + 33) =
                prefactor_y * *(b + 137 * OS1_S1 + 19) -
                p_over_q * *(b + 188 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 19);
            *(b + 137 * OS1_S1 + 34) =
                prefactor_z * *(b + 137 * OS1_S1 + 19) -
                p_over_q * *(b + 189 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 9);
            *(b + 138 * OS1_S1 + 20) =
                prefactor_x * *(b + 138 * OS1_S1 + 10) -
                p_over_q * *(b + 183 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 4);
            *(b + 138 * OS1_S1 + 21) =
                prefactor_y * *(b + 138 * OS1_S1 + 10) -
                p_over_q * *(b + 189 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 10);
            *(b + 138 * OS1_S1 + 22) =
                prefactor_z * *(b + 138 * OS1_S1 + 10) -
                p_over_q * *(b + 190 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 10);
            *(b + 138 * OS1_S1 + 23) =
                prefactor_y * *(b + 138 * OS1_S1 + 11) -
                p_over_q * *(b + 189 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 11) +
                one_over_two_q * *(b + 138 * OS1_S1 + 4);
            *(b + 138 * OS1_S1 + 24) =
                prefactor_y * *(b + 138 * OS1_S1 + 12) -
                p_over_q * *(b + 189 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 12);
            *(b + 138 * OS1_S1 + 25) =
                prefactor_z * *(b + 138 * OS1_S1 + 12) -
                p_over_q * *(b + 190 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 12) +
                one_over_two_q * *(b + 138 * OS1_S1 + 4);
            *(b + 138 * OS1_S1 + 26) =
                prefactor_x * *(b + 138 * OS1_S1 + 16) -
                p_over_q * *(b + 183 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 16);
            *(b + 138 * OS1_S1 + 27) =
                prefactor_z * *(b + 138 * OS1_S1 + 13) -
                p_over_q * *(b + 190 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 13);
            *(b + 138 * OS1_S1 + 28) =
                prefactor_y * *(b + 138 * OS1_S1 + 15) -
                p_over_q * *(b + 189 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 15);
            *(b + 138 * OS1_S1 + 29) =
                prefactor_x * *(b + 138 * OS1_S1 + 19) -
                p_over_q * *(b + 183 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 19);
            *(b + 138 * OS1_S1 + 30) =
                prefactor_y * *(b + 138 * OS1_S1 + 16) -
                p_over_q * *(b + 189 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 7);
            *(b + 138 * OS1_S1 + 31) =
                prefactor_z * *(b + 138 * OS1_S1 + 16) -
                p_over_q * *(b + 190 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 16);
            *(b + 138 * OS1_S1 + 32) =
                prefactor_y * *(b + 138 * OS1_S1 + 18) -
                p_over_q * *(b + 189 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 18) +
                one_over_two_q * *(b + 138 * OS1_S1 + 9);
            *(b + 138 * OS1_S1 + 33) =
                prefactor_y * *(b + 138 * OS1_S1 + 19) -
                p_over_q * *(b + 189 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 19);
            *(b + 138 * OS1_S1 + 34) =
                prefactor_z * *(b + 138 * OS1_S1 + 19) -
                p_over_q * *(b + 190 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 9);
            *(b + 139 * OS1_S1 + 20) =
                prefactor_x * *(b + 139 * OS1_S1 + 10) -
                p_over_q * *(b + 184 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 139 * OS1_S1 + 4);
            *(b + 139 * OS1_S1 + 21) = prefactor_y * *(b + 139 * OS1_S1 + 10) -
                                       p_over_q * *(b + 190 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 10);
            *(b + 139 * OS1_S1 + 22) =
                prefactor_z * *(b + 139 * OS1_S1 + 10) -
                p_over_q * *(b + 191 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 10);
            *(b + 139 * OS1_S1 + 23) =
                prefactor_y * *(b + 139 * OS1_S1 + 11) -
                p_over_q * *(b + 190 * OS1_S1 + 11) +
                one_over_two_q * *(b + 98 * OS1_S1 + 11) +
                one_over_two_q * *(b + 139 * OS1_S1 + 4);
            *(b + 139 * OS1_S1 + 24) = prefactor_y * *(b + 139 * OS1_S1 + 12) -
                                       p_over_q * *(b + 190 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 12);
            *(b + 139 * OS1_S1 + 25) =
                prefactor_x * *(b + 139 * OS1_S1 + 15) -
                p_over_q * *(b + 184 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 15) +
                one_over_two_q * *(b + 139 * OS1_S1 + 9);
            *(b + 139 * OS1_S1 + 26) =
                prefactor_x * *(b + 139 * OS1_S1 + 16) -
                p_over_q * *(b + 184 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 16);
            *(b + 139 * OS1_S1 + 27) =
                prefactor_x * *(b + 139 * OS1_S1 + 17) -
                p_over_q * *(b + 184 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 17);
            *(b + 139 * OS1_S1 + 28) = prefactor_y * *(b + 139 * OS1_S1 + 15) -
                                       p_over_q * *(b + 190 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 15);
            *(b + 139 * OS1_S1 + 29) =
                prefactor_x * *(b + 139 * OS1_S1 + 19) -
                p_over_q * *(b + 184 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 19);
            *(b + 139 * OS1_S1 + 30) =
                prefactor_y * *(b + 139 * OS1_S1 + 16) -
                p_over_q * *(b + 190 * OS1_S1 + 16) +
                one_over_two_q * *(b + 98 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 139 * OS1_S1 + 7);
            *(b + 139 * OS1_S1 + 31) =
                prefactor_z * *(b + 139 * OS1_S1 + 16) -
                p_over_q * *(b + 191 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 16);
            *(b + 139 * OS1_S1 + 32) =
                prefactor_y * *(b + 139 * OS1_S1 + 18) -
                p_over_q * *(b + 190 * OS1_S1 + 18) +
                one_over_two_q * *(b + 98 * OS1_S1 + 18) +
                one_over_two_q * *(b + 139 * OS1_S1 + 9);
            *(b + 139 * OS1_S1 + 33) = prefactor_y * *(b + 139 * OS1_S1 + 19) -
                                       p_over_q * *(b + 190 * OS1_S1 + 19) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 19);
            *(b + 139 * OS1_S1 + 34) =
                prefactor_z * *(b + 139 * OS1_S1 + 19) -
                p_over_q * *(b + 191 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 139 * OS1_S1 + 9);
            *(b + 140 * OS1_S1 + 20) =
                prefactor_x * *(b + 140 * OS1_S1 + 10) -
                p_over_q * *(b + 185 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 140 * OS1_S1 + 4);
            *(b + 140 * OS1_S1 + 21) = prefactor_y * *(b + 140 * OS1_S1 + 10) -
                                       p_over_q * *(b + 191 * OS1_S1 + 10);
            *(b + 140 * OS1_S1 + 22) =
                prefactor_z * *(b + 140 * OS1_S1 + 10) -
                p_over_q * *(b + 192 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 10);
            *(b + 140 * OS1_S1 + 23) = prefactor_y * *(b + 140 * OS1_S1 + 11) -
                                       p_over_q * *(b + 191 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 140 * OS1_S1 + 4);
            *(b + 140 * OS1_S1 + 24) = prefactor_y * *(b + 140 * OS1_S1 + 12) -
                                       p_over_q * *(b + 191 * OS1_S1 + 12);
            *(b + 140 * OS1_S1 + 25) =
                prefactor_x * *(b + 140 * OS1_S1 + 15) -
                p_over_q * *(b + 185 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 15) +
                one_over_two_q * *(b + 140 * OS1_S1 + 9);
            *(b + 140 * OS1_S1 + 26) =
                prefactor_x * *(b + 140 * OS1_S1 + 16) -
                p_over_q * *(b + 185 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 16);
            *(b + 140 * OS1_S1 + 27) =
                prefactor_x * *(b + 140 * OS1_S1 + 17) -
                p_over_q * *(b + 185 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 17);
            *(b + 140 * OS1_S1 + 28) = prefactor_y * *(b + 140 * OS1_S1 + 15) -
                                       p_over_q * *(b + 191 * OS1_S1 + 15);
            *(b + 140 * OS1_S1 + 29) =
                prefactor_x * *(b + 140 * OS1_S1 + 19) -
                p_over_q * *(b + 185 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 19);
            *(b + 140 * OS1_S1 + 30) =
                prefactor_y * *(b + 140 * OS1_S1 + 16) -
                p_over_q * *(b + 191 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 140 * OS1_S1 + 7);
            *(b + 140 * OS1_S1 + 31) =
                prefactor_z * *(b + 140 * OS1_S1 + 16) -
                p_over_q * *(b + 192 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 16);
            *(b + 140 * OS1_S1 + 32) = prefactor_y * *(b + 140 * OS1_S1 + 18) -
                                       p_over_q * *(b + 191 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 140 * OS1_S1 + 9);
            *(b + 140 * OS1_S1 + 33) = prefactor_y * *(b + 140 * OS1_S1 + 19) -
                                       p_over_q * *(b + 191 * OS1_S1 + 19);
            *(b + 140 * OS1_S1 + 34) =
                prefactor_z * *(b + 140 * OS1_S1 + 19) -
                p_over_q * *(b + 192 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 140 * OS1_S1 + 9);
            *(b + 141 * OS1_S1 + 20) =
                prefactor_x * *(b + 141 * OS1_S1 + 10) -
                p_over_q * *(b + 186 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 4);
            *(b + 141 * OS1_S1 + 21) =
                prefactor_y * *(b + 141 * OS1_S1 + 10) -
                p_over_q * *(b + 193 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 10);
            *(b + 141 * OS1_S1 + 22) = prefactor_z * *(b + 141 * OS1_S1 + 10) -
                                       p_over_q * *(b + 194 * OS1_S1 + 10);
            *(b + 141 * OS1_S1 + 23) =
                prefactor_x * *(b + 141 * OS1_S1 + 13) -
                p_over_q * *(b + 186 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 13) +
                one_over_two_q * *(b + 141 * OS1_S1 + 7);
            *(b + 141 * OS1_S1 + 24) = prefactor_z * *(b + 141 * OS1_S1 + 11) -
                                       p_over_q * *(b + 194 * OS1_S1 + 11);
            *(b + 141 * OS1_S1 + 25) = prefactor_z * *(b + 141 * OS1_S1 + 12) -
                                       p_over_q * *(b + 194 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 141 * OS1_S1 + 4);
            *(b + 141 * OS1_S1 + 26) =
                prefactor_x * *(b + 141 * OS1_S1 + 16) -
                p_over_q * *(b + 186 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 16);
            *(b + 141 * OS1_S1 + 27) = prefactor_z * *(b + 141 * OS1_S1 + 13) -
                                       p_over_q * *(b + 194 * OS1_S1 + 13);
            *(b + 141 * OS1_S1 + 28) =
                prefactor_x * *(b + 141 * OS1_S1 + 18) -
                p_over_q * *(b + 186 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 18);
            *(b + 141 * OS1_S1 + 29) =
                prefactor_x * *(b + 141 * OS1_S1 + 19) -
                p_over_q * *(b + 186 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 19);
            *(b + 141 * OS1_S1 + 30) =
                prefactor_y * *(b + 141 * OS1_S1 + 16) -
                p_over_q * *(b + 193 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 7);
            *(b + 141 * OS1_S1 + 31) = prefactor_z * *(b + 141 * OS1_S1 + 16) -
                                       p_over_q * *(b + 194 * OS1_S1 + 16);
            *(b + 141 * OS1_S1 + 32) = prefactor_z * *(b + 141 * OS1_S1 + 17) -
                                       p_over_q * *(b + 194 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 141 * OS1_S1 + 7);
            *(b + 141 * OS1_S1 + 33) =
                prefactor_y * *(b + 141 * OS1_S1 + 19) -
                p_over_q * *(b + 193 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 19);
            *(b + 141 * OS1_S1 + 34) =
                prefactor_z * *(b + 141 * OS1_S1 + 19) -
                p_over_q * *(b + 194 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 9);
            *(b + 142 * OS1_S1 + 20) =
                prefactor_x * *(b + 142 * OS1_S1 + 10) -
                p_over_q * *(b + 187 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 4);
            *(b + 142 * OS1_S1 + 21) =
                prefactor_y * *(b + 142 * OS1_S1 + 10) -
                p_over_q * *(b + 194 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 10);
            *(b + 142 * OS1_S1 + 22) = prefactor_z * *(b + 142 * OS1_S1 + 10) -
                                       p_over_q * *(b + 195 * OS1_S1 + 10) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 10);
            *(b + 142 * OS1_S1 + 23) =
                prefactor_x * *(b + 142 * OS1_S1 + 13) -
                p_over_q * *(b + 187 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 13) +
                one_over_two_q * *(b + 142 * OS1_S1 + 7);
            *(b + 142 * OS1_S1 + 24) = prefactor_z * *(b + 142 * OS1_S1 + 11) -
                                       p_over_q * *(b + 195 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 11);
            *(b + 142 * OS1_S1 + 25) =
                prefactor_z * *(b + 142 * OS1_S1 + 12) -
                p_over_q * *(b + 195 * OS1_S1 + 12) +
                one_over_two_q * *(b + 99 * OS1_S1 + 12) +
                one_over_two_q * *(b + 142 * OS1_S1 + 4);
            *(b + 142 * OS1_S1 + 26) =
                prefactor_x * *(b + 142 * OS1_S1 + 16) -
                p_over_q * *(b + 187 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 16);
            *(b + 142 * OS1_S1 + 27) = prefactor_z * *(b + 142 * OS1_S1 + 13) -
                                       p_over_q * *(b + 195 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 13);
            *(b + 142 * OS1_S1 + 28) =
                prefactor_x * *(b + 142 * OS1_S1 + 18) -
                p_over_q * *(b + 187 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 18);
            *(b + 142 * OS1_S1 + 29) =
                prefactor_x * *(b + 142 * OS1_S1 + 19) -
                p_over_q * *(b + 187 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 19);
            *(b + 142 * OS1_S1 + 30) =
                prefactor_y * *(b + 142 * OS1_S1 + 16) -
                p_over_q * *(b + 194 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 7);
            *(b + 142 * OS1_S1 + 31) = prefactor_z * *(b + 142 * OS1_S1 + 16) -
                                       p_over_q * *(b + 195 * OS1_S1 + 16) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 16);
            *(b + 142 * OS1_S1 + 32) =
                prefactor_z * *(b + 142 * OS1_S1 + 17) -
                p_over_q * *(b + 195 * OS1_S1 + 17) +
                one_over_two_q * *(b + 99 * OS1_S1 + 17) +
                one_over_two_q * *(b + 142 * OS1_S1 + 7);
            *(b + 142 * OS1_S1 + 33) =
                prefactor_y * *(b + 142 * OS1_S1 + 19) -
                p_over_q * *(b + 194 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 19);
            *(b + 142 * OS1_S1 + 34) =
                prefactor_z * *(b + 142 * OS1_S1 + 19) -
                p_over_q * *(b + 195 * OS1_S1 + 19) +
                one_over_two_q * *(b + 99 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 9);
            *(b + 143 * OS1_S1 + 20) =
                prefactor_x * *(b + 143 * OS1_S1 + 10) -
                p_over_q * *(b + 188 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 4);
            *(b + 143 * OS1_S1 + 21) =
                prefactor_y * *(b + 143 * OS1_S1 + 10) -
                p_over_q * *(b + 195 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 10);
            *(b + 143 * OS1_S1 + 22) =
                prefactor_z * *(b + 143 * OS1_S1 + 10) -
                p_over_q * *(b + 196 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 10);
            *(b + 143 * OS1_S1 + 23) =
                prefactor_x * *(b + 143 * OS1_S1 + 13) -
                p_over_q * *(b + 188 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 13) +
                one_over_two_q * *(b + 143 * OS1_S1 + 7);
            *(b + 143 * OS1_S1 + 24) =
                prefactor_z * *(b + 143 * OS1_S1 + 11) -
                p_over_q * *(b + 196 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 11);
            *(b + 143 * OS1_S1 + 25) =
                prefactor_z * *(b + 143 * OS1_S1 + 12) -
                p_over_q * *(b + 196 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 12) +
                one_over_two_q * *(b + 143 * OS1_S1 + 4);
            *(b + 143 * OS1_S1 + 26) =
                prefactor_x * *(b + 143 * OS1_S1 + 16) -
                p_over_q * *(b + 188 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 16);
            *(b + 143 * OS1_S1 + 27) =
                prefactor_z * *(b + 143 * OS1_S1 + 13) -
                p_over_q * *(b + 196 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 13);
            *(b + 143 * OS1_S1 + 28) =
                prefactor_x * *(b + 143 * OS1_S1 + 18) -
                p_over_q * *(b + 188 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 18);
            *(b + 143 * OS1_S1 + 29) =
                prefactor_x * *(b + 143 * OS1_S1 + 19) -
                p_over_q * *(b + 188 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 19);
            *(b + 143 * OS1_S1 + 30) =
                prefactor_y * *(b + 143 * OS1_S1 + 16) -
                p_over_q * *(b + 195 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 7);
            *(b + 143 * OS1_S1 + 31) =
                prefactor_z * *(b + 143 * OS1_S1 + 16) -
                p_over_q * *(b + 196 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 16);
            *(b + 143 * OS1_S1 + 32) =
                prefactor_z * *(b + 143 * OS1_S1 + 17) -
                p_over_q * *(b + 196 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 17) +
                one_over_two_q * *(b + 143 * OS1_S1 + 7);
            *(b + 143 * OS1_S1 + 33) =
                prefactor_y * *(b + 143 * OS1_S1 + 19) -
                p_over_q * *(b + 195 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 19);
            *(b + 143 * OS1_S1 + 34) =
                prefactor_z * *(b + 143 * OS1_S1 + 19) -
                p_over_q * *(b + 196 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 9);
            *(b + 144 * OS1_S1 + 20) =
                prefactor_x * *(b + 144 * OS1_S1 + 10) -
                p_over_q * *(b + 189 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 4);
            *(b + 144 * OS1_S1 + 21) =
                prefactor_y * *(b + 144 * OS1_S1 + 10) -
                p_over_q * *(b + 196 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 10);
            *(b + 144 * OS1_S1 + 22) =
                prefactor_z * *(b + 144 * OS1_S1 + 10) -
                p_over_q * *(b + 197 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 10);
            *(b + 144 * OS1_S1 + 23) =
                prefactor_x * *(b + 144 * OS1_S1 + 13) -
                p_over_q * *(b + 189 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 13) +
                one_over_two_q * *(b + 144 * OS1_S1 + 7);
            *(b + 144 * OS1_S1 + 24) =
                prefactor_z * *(b + 144 * OS1_S1 + 11) -
                p_over_q * *(b + 197 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 11);
            *(b + 144 * OS1_S1 + 25) =
                prefactor_x * *(b + 144 * OS1_S1 + 15) -
                p_over_q * *(b + 189 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 15) +
                one_over_two_q * *(b + 144 * OS1_S1 + 9);
            *(b + 144 * OS1_S1 + 26) =
                prefactor_x * *(b + 144 * OS1_S1 + 16) -
                p_over_q * *(b + 189 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 16);
            *(b + 144 * OS1_S1 + 27) =
                prefactor_x * *(b + 144 * OS1_S1 + 17) -
                p_over_q * *(b + 189 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 17);
            *(b + 144 * OS1_S1 + 28) =
                prefactor_x * *(b + 144 * OS1_S1 + 18) -
                p_over_q * *(b + 189 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 18);
            *(b + 144 * OS1_S1 + 29) =
                prefactor_x * *(b + 144 * OS1_S1 + 19) -
                p_over_q * *(b + 189 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 19);
            *(b + 144 * OS1_S1 + 30) =
                prefactor_y * *(b + 144 * OS1_S1 + 16) -
                p_over_q * *(b + 196 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 7);
            *(b + 144 * OS1_S1 + 31) =
                prefactor_z * *(b + 144 * OS1_S1 + 16) -
                p_over_q * *(b + 197 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 16);
            *(b + 144 * OS1_S1 + 32) =
                prefactor_z * *(b + 144 * OS1_S1 + 17) -
                p_over_q * *(b + 197 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 17) +
                one_over_two_q * *(b + 144 * OS1_S1 + 7);
            *(b + 144 * OS1_S1 + 33) =
                prefactor_y * *(b + 144 * OS1_S1 + 19) -
                p_over_q * *(b + 196 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 19);
            *(b + 144 * OS1_S1 + 34) =
                prefactor_z * *(b + 144 * OS1_S1 + 19) -
                p_over_q * *(b + 197 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 9);
            *(b + 145 * OS1_S1 + 20) =
                prefactor_x * *(b + 145 * OS1_S1 + 10) -
                p_over_q * *(b + 190 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 4);
            *(b + 145 * OS1_S1 + 21) =
                prefactor_y * *(b + 145 * OS1_S1 + 10) -
                p_over_q * *(b + 197 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 10);
            *(b + 145 * OS1_S1 + 22) =
                prefactor_z * *(b + 145 * OS1_S1 + 10) -
                p_over_q * *(b + 198 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 10);
            *(b + 145 * OS1_S1 + 23) =
                prefactor_y * *(b + 145 * OS1_S1 + 11) -
                p_over_q * *(b + 197 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 11) +
                one_over_two_q * *(b + 145 * OS1_S1 + 4);
            *(b + 145 * OS1_S1 + 24) =
                prefactor_y * *(b + 145 * OS1_S1 + 12) -
                p_over_q * *(b + 197 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 12);
            *(b + 145 * OS1_S1 + 25) =
                prefactor_x * *(b + 145 * OS1_S1 + 15) -
                p_over_q * *(b + 190 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 15) +
                one_over_two_q * *(b + 145 * OS1_S1 + 9);
            *(b + 145 * OS1_S1 + 26) =
                prefactor_x * *(b + 145 * OS1_S1 + 16) -
                p_over_q * *(b + 190 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 16);
            *(b + 145 * OS1_S1 + 27) =
                prefactor_x * *(b + 145 * OS1_S1 + 17) -
                p_over_q * *(b + 190 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 17);
            *(b + 145 * OS1_S1 + 28) =
                prefactor_y * *(b + 145 * OS1_S1 + 15) -
                p_over_q * *(b + 197 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 15);
            *(b + 145 * OS1_S1 + 29) =
                prefactor_x * *(b + 145 * OS1_S1 + 19) -
                p_over_q * *(b + 190 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 19);
            *(b + 145 * OS1_S1 + 30) =
                prefactor_y * *(b + 145 * OS1_S1 + 16) -
                p_over_q * *(b + 197 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 7);
            *(b + 145 * OS1_S1 + 31) =
                prefactor_z * *(b + 145 * OS1_S1 + 16) -
                p_over_q * *(b + 198 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 16);
            *(b + 145 * OS1_S1 + 32) =
                prefactor_y * *(b + 145 * OS1_S1 + 18) -
                p_over_q * *(b + 197 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 18) +
                one_over_two_q * *(b + 145 * OS1_S1 + 9);
            *(b + 145 * OS1_S1 + 33) =
                prefactor_y * *(b + 145 * OS1_S1 + 19) -
                p_over_q * *(b + 197 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 19);
            *(b + 145 * OS1_S1 + 34) =
                prefactor_z * *(b + 145 * OS1_S1 + 19) -
                p_over_q * *(b + 198 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 9);
            *(b + 146 * OS1_S1 + 20) =
                prefactor_x * *(b + 146 * OS1_S1 + 10) -
                p_over_q * *(b + 191 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 4);
            *(b + 146 * OS1_S1 + 21) =
                prefactor_y * *(b + 146 * OS1_S1 + 10) -
                p_over_q * *(b + 198 * OS1_S1 + 10) +
                one_over_two_q * *(b + 104 * OS1_S1 + 10);
            *(b + 146 * OS1_S1 + 22) =
                prefactor_z * *(b + 146 * OS1_S1 + 10) -
                p_over_q * *(b + 199 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 10);
            *(b + 146 * OS1_S1 + 23) =
                prefactor_y * *(b + 146 * OS1_S1 + 11) -
                p_over_q * *(b + 198 * OS1_S1 + 11) +
                one_over_two_q * *(b + 104 * OS1_S1 + 11) +
                one_over_two_q * *(b + 146 * OS1_S1 + 4);
            *(b + 146 * OS1_S1 + 24) =
                prefactor_y * *(b + 146 * OS1_S1 + 12) -
                p_over_q * *(b + 198 * OS1_S1 + 12) +
                one_over_two_q * *(b + 104 * OS1_S1 + 12);
            *(b + 146 * OS1_S1 + 25) =
                prefactor_x * *(b + 146 * OS1_S1 + 15) -
                p_over_q * *(b + 191 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 15) +
                one_over_two_q * *(b + 146 * OS1_S1 + 9);
            *(b + 146 * OS1_S1 + 26) =
                prefactor_x * *(b + 146 * OS1_S1 + 16) -
                p_over_q * *(b + 191 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 16);
            *(b + 146 * OS1_S1 + 27) =
                prefactor_x * *(b + 146 * OS1_S1 + 17) -
                p_over_q * *(b + 191 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 17);
            *(b + 146 * OS1_S1 + 28) =
                prefactor_y * *(b + 146 * OS1_S1 + 15) -
                p_over_q * *(b + 198 * OS1_S1 + 15) +
                one_over_two_q * *(b + 104 * OS1_S1 + 15);
            *(b + 146 * OS1_S1 + 29) =
                prefactor_x * *(b + 146 * OS1_S1 + 19) -
                p_over_q * *(b + 191 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 19);
            *(b + 146 * OS1_S1 + 30) =
                prefactor_y * *(b + 146 * OS1_S1 + 16) -
                p_over_q * *(b + 198 * OS1_S1 + 16) +
                one_over_two_q * *(b + 104 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 7);
            *(b + 146 * OS1_S1 + 31) =
                prefactor_z * *(b + 146 * OS1_S1 + 16) -
                p_over_q * *(b + 199 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 16);
            *(b + 146 * OS1_S1 + 32) =
                prefactor_y * *(b + 146 * OS1_S1 + 18) -
                p_over_q * *(b + 198 * OS1_S1 + 18) +
                one_over_two_q * *(b + 104 * OS1_S1 + 18) +
                one_over_two_q * *(b + 146 * OS1_S1 + 9);
            *(b + 146 * OS1_S1 + 33) =
                prefactor_y * *(b + 146 * OS1_S1 + 19) -
                p_over_q * *(b + 198 * OS1_S1 + 19) +
                one_over_two_q * *(b + 104 * OS1_S1 + 19);
            *(b + 146 * OS1_S1 + 34) =
                prefactor_z * *(b + 146 * OS1_S1 + 19) -
                p_over_q * *(b + 199 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 9);
            *(b + 147 * OS1_S1 + 20) =
                prefactor_x * *(b + 147 * OS1_S1 + 10) -
                p_over_q * *(b + 192 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 4);
            *(b + 147 * OS1_S1 + 21) = prefactor_y * *(b + 147 * OS1_S1 + 10) -
                                       p_over_q * *(b + 199 * OS1_S1 + 10);
            *(b + 147 * OS1_S1 + 22) =
                prefactor_z * *(b + 147 * OS1_S1 + 10) -
                p_over_q * *(b + 200 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 10);
            *(b + 147 * OS1_S1 + 23) = prefactor_y * *(b + 147 * OS1_S1 + 11) -
                                       p_over_q * *(b + 199 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 147 * OS1_S1 + 4);
            *(b + 147 * OS1_S1 + 24) = prefactor_y * *(b + 147 * OS1_S1 + 12) -
                                       p_over_q * *(b + 199 * OS1_S1 + 12);
            *(b + 147 * OS1_S1 + 25) =
                prefactor_x * *(b + 147 * OS1_S1 + 15) -
                p_over_q * *(b + 192 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 15) +
                one_over_two_q * *(b + 147 * OS1_S1 + 9);
            *(b + 147 * OS1_S1 + 26) =
                prefactor_x * *(b + 147 * OS1_S1 + 16) -
                p_over_q * *(b + 192 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 16);
            *(b + 147 * OS1_S1 + 27) =
                prefactor_x * *(b + 147 * OS1_S1 + 17) -
                p_over_q * *(b + 192 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 17);
            *(b + 147 * OS1_S1 + 28) = prefactor_y * *(b + 147 * OS1_S1 + 15) -
                                       p_over_q * *(b + 199 * OS1_S1 + 15);
            *(b + 147 * OS1_S1 + 29) =
                prefactor_x * *(b + 147 * OS1_S1 + 19) -
                p_over_q * *(b + 192 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 19);
            *(b + 147 * OS1_S1 + 30) =
                prefactor_y * *(b + 147 * OS1_S1 + 16) -
                p_over_q * *(b + 199 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 7);
            *(b + 147 * OS1_S1 + 31) =
                prefactor_z * *(b + 147 * OS1_S1 + 16) -
                p_over_q * *(b + 200 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 16);
            *(b + 147 * OS1_S1 + 32) = prefactor_y * *(b + 147 * OS1_S1 + 18) -
                                       p_over_q * *(b + 199 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 147 * OS1_S1 + 9);
            *(b + 147 * OS1_S1 + 33) = prefactor_y * *(b + 147 * OS1_S1 + 19) -
                                       p_over_q * *(b + 199 * OS1_S1 + 19);
            *(b + 147 * OS1_S1 + 34) =
                prefactor_z * *(b + 147 * OS1_S1 + 19) -
                p_over_q * *(b + 200 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 9);
            *(b + 148 * OS1_S1 + 20) =
                prefactor_x * *(b + 148 * OS1_S1 + 10) -
                p_over_q * *(b + 193 * OS1_S1 + 10) +
                one_over_two_q * *(b + 112 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 148 * OS1_S1 + 4);
            *(b + 148 * OS1_S1 + 21) =
                prefactor_y * *(b + 148 * OS1_S1 + 10) -
                p_over_q * *(b + 201 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 10);
            *(b + 148 * OS1_S1 + 22) = prefactor_z * *(b + 148 * OS1_S1 + 10) -
                                       p_over_q * *(b + 202 * OS1_S1 + 10);
            *(b + 148 * OS1_S1 + 23) =
                prefactor_x * *(b + 148 * OS1_S1 + 13) -
                p_over_q * *(b + 193 * OS1_S1 + 13) +
                one_over_two_q * *(b + 112 * OS1_S1 + 13) +
                one_over_two_q * *(b + 148 * OS1_S1 + 7);
            *(b + 148 * OS1_S1 + 24) = prefactor_z * *(b + 148 * OS1_S1 + 11) -
                                       p_over_q * *(b + 202 * OS1_S1 + 11);
            *(b + 148 * OS1_S1 + 25) = prefactor_z * *(b + 148 * OS1_S1 + 12) -
                                       p_over_q * *(b + 202 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 148 * OS1_S1 + 4);
            *(b + 148 * OS1_S1 + 26) =
                prefactor_x * *(b + 148 * OS1_S1 + 16) -
                p_over_q * *(b + 193 * OS1_S1 + 16) +
                one_over_two_q * *(b + 112 * OS1_S1 + 16);
            *(b + 148 * OS1_S1 + 27) = prefactor_z * *(b + 148 * OS1_S1 + 13) -
                                       p_over_q * *(b + 202 * OS1_S1 + 13);
            *(b + 148 * OS1_S1 + 28) =
                prefactor_x * *(b + 148 * OS1_S1 + 18) -
                p_over_q * *(b + 193 * OS1_S1 + 18) +
                one_over_two_q * *(b + 112 * OS1_S1 + 18);
            *(b + 148 * OS1_S1 + 29) =
                prefactor_x * *(b + 148 * OS1_S1 + 19) -
                p_over_q * *(b + 193 * OS1_S1 + 19) +
                one_over_two_q * *(b + 112 * OS1_S1 + 19);
            *(b + 148 * OS1_S1 + 30) =
                prefactor_y * *(b + 148 * OS1_S1 + 16) -
                p_over_q * *(b + 201 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 148 * OS1_S1 + 7);
            *(b + 148 * OS1_S1 + 31) = prefactor_z * *(b + 148 * OS1_S1 + 16) -
                                       p_over_q * *(b + 202 * OS1_S1 + 16);
            *(b + 148 * OS1_S1 + 32) = prefactor_z * *(b + 148 * OS1_S1 + 17) -
                                       p_over_q * *(b + 202 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 148 * OS1_S1 + 7);
            *(b + 148 * OS1_S1 + 33) =
                prefactor_y * *(b + 148 * OS1_S1 + 19) -
                p_over_q * *(b + 201 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 19);
            *(b + 148 * OS1_S1 + 34) =
                prefactor_z * *(b + 148 * OS1_S1 + 19) -
                p_over_q * *(b + 202 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 148 * OS1_S1 + 9);
            *(b + 149 * OS1_S1 + 20) =
                prefactor_x * *(b + 149 * OS1_S1 + 10) -
                p_over_q * *(b + 194 * OS1_S1 + 10) +
                one_over_two_q * *(b + 113 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 149 * OS1_S1 + 4);
            *(b + 149 * OS1_S1 + 21) =
                prefactor_y * *(b + 149 * OS1_S1 + 10) -
                p_over_q * *(b + 202 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 10);
            *(b + 149 * OS1_S1 + 22) =
                prefactor_z * *(b + 149 * OS1_S1 + 10) -
                p_over_q * *(b + 203 * OS1_S1 + 10) +
                one_over_two_q * *(b + 105 * OS1_S1 + 10);
            *(b + 149 * OS1_S1 + 23) =
                prefactor_x * *(b + 149 * OS1_S1 + 13) -
                p_over_q * *(b + 194 * OS1_S1 + 13) +
                one_over_two_q * *(b + 113 * OS1_S1 + 13) +
                one_over_two_q * *(b + 149 * OS1_S1 + 7);
            *(b + 149 * OS1_S1 + 24) =
                prefactor_z * *(b + 149 * OS1_S1 + 11) -
                p_over_q * *(b + 203 * OS1_S1 + 11) +
                one_over_two_q * *(b + 105 * OS1_S1 + 11);
            *(b + 149 * OS1_S1 + 25) =
                prefactor_z * *(b + 149 * OS1_S1 + 12) -
                p_over_q * *(b + 203 * OS1_S1 + 12) +
                one_over_two_q * *(b + 105 * OS1_S1 + 12) +
                one_over_two_q * *(b + 149 * OS1_S1 + 4);
            *(b + 149 * OS1_S1 + 26) =
                prefactor_x * *(b + 149 * OS1_S1 + 16) -
                p_over_q * *(b + 194 * OS1_S1 + 16) +
                one_over_two_q * *(b + 113 * OS1_S1 + 16);
            *(b + 149 * OS1_S1 + 27) =
                prefactor_z * *(b + 149 * OS1_S1 + 13) -
                p_over_q * *(b + 203 * OS1_S1 + 13) +
                one_over_two_q * *(b + 105 * OS1_S1 + 13);
            *(b + 149 * OS1_S1 + 28) =
                prefactor_x * *(b + 149 * OS1_S1 + 18) -
                p_over_q * *(b + 194 * OS1_S1 + 18) +
                one_over_two_q * *(b + 113 * OS1_S1 + 18);
            *(b + 149 * OS1_S1 + 29) =
                prefactor_x * *(b + 149 * OS1_S1 + 19) -
                p_over_q * *(b + 194 * OS1_S1 + 19) +
                one_over_two_q * *(b + 113 * OS1_S1 + 19);
            *(b + 149 * OS1_S1 + 30) =
                prefactor_y * *(b + 149 * OS1_S1 + 16) -
                p_over_q * *(b + 202 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 149 * OS1_S1 + 7);
            *(b + 149 * OS1_S1 + 31) =
                prefactor_z * *(b + 149 * OS1_S1 + 16) -
                p_over_q * *(b + 203 * OS1_S1 + 16) +
                one_over_two_q * *(b + 105 * OS1_S1 + 16);
            *(b + 149 * OS1_S1 + 32) =
                prefactor_z * *(b + 149 * OS1_S1 + 17) -
                p_over_q * *(b + 203 * OS1_S1 + 17) +
                one_over_two_q * *(b + 105 * OS1_S1 + 17) +
                one_over_two_q * *(b + 149 * OS1_S1 + 7);
            *(b + 149 * OS1_S1 + 33) =
                prefactor_y * *(b + 149 * OS1_S1 + 19) -
                p_over_q * *(b + 202 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 19);
            *(b + 149 * OS1_S1 + 34) =
                prefactor_z * *(b + 149 * OS1_S1 + 19) -
                p_over_q * *(b + 203 * OS1_S1 + 19) +
                one_over_two_q * *(b + 105 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 149 * OS1_S1 + 9);
            *(b + 150 * OS1_S1 + 20) =
                prefactor_x * *(b + 150 * OS1_S1 + 10) -
                p_over_q * *(b + 195 * OS1_S1 + 10) +
                one_over_two_q * *(b + 114 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 4);
            *(b + 150 * OS1_S1 + 21) =
                prefactor_y * *(b + 150 * OS1_S1 + 10) -
                p_over_q * *(b + 203 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 10);
            *(b + 150 * OS1_S1 + 22) =
                prefactor_z * *(b + 150 * OS1_S1 + 10) -
                p_over_q * *(b + 204 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 10);
            *(b + 150 * OS1_S1 + 23) =
                prefactor_x * *(b + 150 * OS1_S1 + 13) -
                p_over_q * *(b + 195 * OS1_S1 + 13) +
                one_over_two_q * *(b + 114 * OS1_S1 + 13) +
                one_over_two_q * *(b + 150 * OS1_S1 + 7);
            *(b + 150 * OS1_S1 + 24) =
                prefactor_z * *(b + 150 * OS1_S1 + 11) -
                p_over_q * *(b + 204 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 11);
            *(b + 150 * OS1_S1 + 25) =
                prefactor_x * *(b + 150 * OS1_S1 + 15) -
                p_over_q * *(b + 195 * OS1_S1 + 15) +
                one_over_two_q * *(b + 114 * OS1_S1 + 15) +
                one_over_two_q * *(b + 150 * OS1_S1 + 9);
            *(b + 150 * OS1_S1 + 26) =
                prefactor_x * *(b + 150 * OS1_S1 + 16) -
                p_over_q * *(b + 195 * OS1_S1 + 16) +
                one_over_two_q * *(b + 114 * OS1_S1 + 16);
            *(b + 150 * OS1_S1 + 27) =
                prefactor_x * *(b + 150 * OS1_S1 + 17) -
                p_over_q * *(b + 195 * OS1_S1 + 17) +
                one_over_two_q * *(b + 114 * OS1_S1 + 17);
            *(b + 150 * OS1_S1 + 28) =
                prefactor_x * *(b + 150 * OS1_S1 + 18) -
                p_over_q * *(b + 195 * OS1_S1 + 18) +
                one_over_two_q * *(b + 114 * OS1_S1 + 18);
            *(b + 150 * OS1_S1 + 29) =
                prefactor_x * *(b + 150 * OS1_S1 + 19) -
                p_over_q * *(b + 195 * OS1_S1 + 19) +
                one_over_two_q * *(b + 114 * OS1_S1 + 19);
            *(b + 150 * OS1_S1 + 30) =
                prefactor_y * *(b + 150 * OS1_S1 + 16) -
                p_over_q * *(b + 203 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 7);
            *(b + 150 * OS1_S1 + 31) =
                prefactor_z * *(b + 150 * OS1_S1 + 16) -
                p_over_q * *(b + 204 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 16);
            *(b + 150 * OS1_S1 + 32) =
                prefactor_z * *(b + 150 * OS1_S1 + 17) -
                p_over_q * *(b + 204 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 17) +
                one_over_two_q * *(b + 150 * OS1_S1 + 7);
            *(b + 150 * OS1_S1 + 33) =
                prefactor_y * *(b + 150 * OS1_S1 + 19) -
                p_over_q * *(b + 203 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 19);
            *(b + 150 * OS1_S1 + 34) =
                prefactor_z * *(b + 150 * OS1_S1 + 19) -
                p_over_q * *(b + 204 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 9);
            *(b + 151 * OS1_S1 + 20) =
                prefactor_x * *(b + 151 * OS1_S1 + 10) -
                p_over_q * *(b + 196 * OS1_S1 + 10) +
                one_over_two_q * *(b + 115 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 151 * OS1_S1 + 4);
            *(b + 151 * OS1_S1 + 21) =
                prefactor_y * *(b + 151 * OS1_S1 + 10) -
                p_over_q * *(b + 204 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 10);
            *(b + 151 * OS1_S1 + 22) =
                prefactor_z * *(b + 151 * OS1_S1 + 10) -
                p_over_q * *(b + 205 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 10);
            *(b + 151 * OS1_S1 + 23) =
                prefactor_x * *(b + 151 * OS1_S1 + 13) -
                p_over_q * *(b + 196 * OS1_S1 + 13) +
                one_over_two_q * *(b + 115 * OS1_S1 + 13) +
                one_over_two_q * *(b + 151 * OS1_S1 + 7);
            *(b + 151 * OS1_S1 + 24) =
                prefactor_z * *(b + 151 * OS1_S1 + 11) -
                p_over_q * *(b + 205 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 11);
            *(b + 151 * OS1_S1 + 25) =
                prefactor_x * *(b + 151 * OS1_S1 + 15) -
                p_over_q * *(b + 196 * OS1_S1 + 15) +
                one_over_two_q * *(b + 115 * OS1_S1 + 15) +
                one_over_two_q * *(b + 151 * OS1_S1 + 9);
            *(b + 151 * OS1_S1 + 26) =
                prefactor_x * *(b + 151 * OS1_S1 + 16) -
                p_over_q * *(b + 196 * OS1_S1 + 16) +
                one_over_two_q * *(b + 115 * OS1_S1 + 16);
            *(b + 151 * OS1_S1 + 27) =
                prefactor_x * *(b + 151 * OS1_S1 + 17) -
                p_over_q * *(b + 196 * OS1_S1 + 17) +
                one_over_two_q * *(b + 115 * OS1_S1 + 17);
            *(b + 151 * OS1_S1 + 28) =
                prefactor_x * *(b + 151 * OS1_S1 + 18) -
                p_over_q * *(b + 196 * OS1_S1 + 18) +
                one_over_two_q * *(b + 115 * OS1_S1 + 18);
            *(b + 151 * OS1_S1 + 29) =
                prefactor_x * *(b + 151 * OS1_S1 + 19) -
                p_over_q * *(b + 196 * OS1_S1 + 19) +
                one_over_two_q * *(b + 115 * OS1_S1 + 19);
            *(b + 151 * OS1_S1 + 30) =
                prefactor_y * *(b + 151 * OS1_S1 + 16) -
                p_over_q * *(b + 204 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 151 * OS1_S1 + 7);
            *(b + 151 * OS1_S1 + 31) =
                prefactor_z * *(b + 151 * OS1_S1 + 16) -
                p_over_q * *(b + 205 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 16);
            *(b + 151 * OS1_S1 + 32) =
                prefactor_z * *(b + 151 * OS1_S1 + 17) -
                p_over_q * *(b + 205 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 17) +
                one_over_two_q * *(b + 151 * OS1_S1 + 7);
            *(b + 151 * OS1_S1 + 33) =
                prefactor_y * *(b + 151 * OS1_S1 + 19) -
                p_over_q * *(b + 204 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 19);
            *(b + 151 * OS1_S1 + 34) =
                prefactor_z * *(b + 151 * OS1_S1 + 19) -
                p_over_q * *(b + 205 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 151 * OS1_S1 + 9);
            *(b + 152 * OS1_S1 + 20) =
                prefactor_x * *(b + 152 * OS1_S1 + 10) -
                p_over_q * *(b + 197 * OS1_S1 + 10) +
                one_over_two_q * *(b + 116 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 152 * OS1_S1 + 4);
            *(b + 152 * OS1_S1 + 21) =
                prefactor_y * *(b + 152 * OS1_S1 + 10) -
                p_over_q * *(b + 205 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 10);
            *(b + 152 * OS1_S1 + 22) =
                prefactor_z * *(b + 152 * OS1_S1 + 10) -
                p_over_q * *(b + 206 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 10);
            *(b + 152 * OS1_S1 + 23) =
                prefactor_x * *(b + 152 * OS1_S1 + 13) -
                p_over_q * *(b + 197 * OS1_S1 + 13) +
                one_over_two_q * *(b + 116 * OS1_S1 + 13) +
                one_over_two_q * *(b + 152 * OS1_S1 + 7);
            *(b + 152 * OS1_S1 + 24) =
                prefactor_y * *(b + 152 * OS1_S1 + 12) -
                p_over_q * *(b + 205 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 12);
            *(b + 152 * OS1_S1 + 25) =
                prefactor_x * *(b + 152 * OS1_S1 + 15) -
                p_over_q * *(b + 197 * OS1_S1 + 15) +
                one_over_two_q * *(b + 116 * OS1_S1 + 15) +
                one_over_two_q * *(b + 152 * OS1_S1 + 9);
            *(b + 152 * OS1_S1 + 26) =
                prefactor_x * *(b + 152 * OS1_S1 + 16) -
                p_over_q * *(b + 197 * OS1_S1 + 16) +
                one_over_two_q * *(b + 116 * OS1_S1 + 16);
            *(b + 152 * OS1_S1 + 27) =
                prefactor_x * *(b + 152 * OS1_S1 + 17) -
                p_over_q * *(b + 197 * OS1_S1 + 17) +
                one_over_two_q * *(b + 116 * OS1_S1 + 17);
            *(b + 152 * OS1_S1 + 28) =
                prefactor_x * *(b + 152 * OS1_S1 + 18) -
                p_over_q * *(b + 197 * OS1_S1 + 18) +
                one_over_two_q * *(b + 116 * OS1_S1 + 18);
            *(b + 152 * OS1_S1 + 29) =
                prefactor_x * *(b + 152 * OS1_S1 + 19) -
                p_over_q * *(b + 197 * OS1_S1 + 19) +
                one_over_two_q * *(b + 116 * OS1_S1 + 19);
            *(b + 152 * OS1_S1 + 30) =
                prefactor_y * *(b + 152 * OS1_S1 + 16) -
                p_over_q * *(b + 205 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 152 * OS1_S1 + 7);
            *(b + 152 * OS1_S1 + 31) =
                prefactor_z * *(b + 152 * OS1_S1 + 16) -
                p_over_q * *(b + 206 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 16);
            *(b + 152 * OS1_S1 + 32) =
                prefactor_y * *(b + 152 * OS1_S1 + 18) -
                p_over_q * *(b + 205 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 18) +
                one_over_two_q * *(b + 152 * OS1_S1 + 9);
            *(b + 152 * OS1_S1 + 33) =
                prefactor_y * *(b + 152 * OS1_S1 + 19) -
                p_over_q * *(b + 205 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 19);
            *(b + 152 * OS1_S1 + 34) =
                prefactor_z * *(b + 152 * OS1_S1 + 19) -
                p_over_q * *(b + 206 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 152 * OS1_S1 + 9);
            *(b + 153 * OS1_S1 + 20) =
                prefactor_x * *(b + 153 * OS1_S1 + 10) -
                p_over_q * *(b + 198 * OS1_S1 + 10) +
                one_over_two_q * *(b + 117 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 4);
            *(b + 153 * OS1_S1 + 21) =
                prefactor_y * *(b + 153 * OS1_S1 + 10) -
                p_over_q * *(b + 206 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 10);
            *(b + 153 * OS1_S1 + 22) =
                prefactor_z * *(b + 153 * OS1_S1 + 10) -
                p_over_q * *(b + 207 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 10);
            *(b + 153 * OS1_S1 + 23) =
                prefactor_x * *(b + 153 * OS1_S1 + 13) -
                p_over_q * *(b + 198 * OS1_S1 + 13) +
                one_over_two_q * *(b + 117 * OS1_S1 + 13) +
                one_over_two_q * *(b + 153 * OS1_S1 + 7);
            *(b + 153 * OS1_S1 + 24) =
                prefactor_y * *(b + 153 * OS1_S1 + 12) -
                p_over_q * *(b + 206 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 12);
            *(b + 153 * OS1_S1 + 25) =
                prefactor_x * *(b + 153 * OS1_S1 + 15) -
                p_over_q * *(b + 198 * OS1_S1 + 15) +
                one_over_two_q * *(b + 117 * OS1_S1 + 15) +
                one_over_two_q * *(b + 153 * OS1_S1 + 9);
            *(b + 153 * OS1_S1 + 26) =
                prefactor_x * *(b + 153 * OS1_S1 + 16) -
                p_over_q * *(b + 198 * OS1_S1 + 16) +
                one_over_two_q * *(b + 117 * OS1_S1 + 16);
            *(b + 153 * OS1_S1 + 27) =
                prefactor_x * *(b + 153 * OS1_S1 + 17) -
                p_over_q * *(b + 198 * OS1_S1 + 17) +
                one_over_two_q * *(b + 117 * OS1_S1 + 17);
            *(b + 153 * OS1_S1 + 28) =
                prefactor_x * *(b + 153 * OS1_S1 + 18) -
                p_over_q * *(b + 198 * OS1_S1 + 18) +
                one_over_two_q * *(b + 117 * OS1_S1 + 18);
            *(b + 153 * OS1_S1 + 29) =
                prefactor_x * *(b + 153 * OS1_S1 + 19) -
                p_over_q * *(b + 198 * OS1_S1 + 19) +
                one_over_two_q * *(b + 117 * OS1_S1 + 19);
            *(b + 153 * OS1_S1 + 30) =
                prefactor_y * *(b + 153 * OS1_S1 + 16) -
                p_over_q * *(b + 206 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 7);
            *(b + 153 * OS1_S1 + 31) =
                prefactor_z * *(b + 153 * OS1_S1 + 16) -
                p_over_q * *(b + 207 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 16);
            *(b + 153 * OS1_S1 + 32) =
                prefactor_y * *(b + 153 * OS1_S1 + 18) -
                p_over_q * *(b + 206 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 18) +
                one_over_two_q * *(b + 153 * OS1_S1 + 9);
            *(b + 153 * OS1_S1 + 33) =
                prefactor_y * *(b + 153 * OS1_S1 + 19) -
                p_over_q * *(b + 206 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 19);
            *(b + 153 * OS1_S1 + 34) =
                prefactor_z * *(b + 153 * OS1_S1 + 19) -
                p_over_q * *(b + 207 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 9);
            *(b + 154 * OS1_S1 + 20) =
                prefactor_x * *(b + 154 * OS1_S1 + 10) -
                p_over_q * *(b + 199 * OS1_S1 + 10) +
                one_over_two_q * *(b + 118 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 154 * OS1_S1 + 4);
            *(b + 154 * OS1_S1 + 21) =
                prefactor_y * *(b + 154 * OS1_S1 + 10) -
                p_over_q * *(b + 207 * OS1_S1 + 10) +
                one_over_two_q * *(b + 111 * OS1_S1 + 10);
            *(b + 154 * OS1_S1 + 22) =
                prefactor_z * *(b + 154 * OS1_S1 + 10) -
                p_over_q * *(b + 208 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 10);
            *(b + 154 * OS1_S1 + 23) =
                prefactor_y * *(b + 154 * OS1_S1 + 11) -
                p_over_q * *(b + 207 * OS1_S1 + 11) +
                one_over_two_q * *(b + 111 * OS1_S1 + 11) +
                one_over_two_q * *(b + 154 * OS1_S1 + 4);
            *(b + 154 * OS1_S1 + 24) =
                prefactor_y * *(b + 154 * OS1_S1 + 12) -
                p_over_q * *(b + 207 * OS1_S1 + 12) +
                one_over_two_q * *(b + 111 * OS1_S1 + 12);
            *(b + 154 * OS1_S1 + 25) =
                prefactor_x * *(b + 154 * OS1_S1 + 15) -
                p_over_q * *(b + 199 * OS1_S1 + 15) +
                one_over_two_q * *(b + 118 * OS1_S1 + 15) +
                one_over_two_q * *(b + 154 * OS1_S1 + 9);
            *(b + 154 * OS1_S1 + 26) =
                prefactor_x * *(b + 154 * OS1_S1 + 16) -
                p_over_q * *(b + 199 * OS1_S1 + 16) +
                one_over_two_q * *(b + 118 * OS1_S1 + 16);
            *(b + 154 * OS1_S1 + 27) =
                prefactor_x * *(b + 154 * OS1_S1 + 17) -
                p_over_q * *(b + 199 * OS1_S1 + 17) +
                one_over_two_q * *(b + 118 * OS1_S1 + 17);
            *(b + 154 * OS1_S1 + 28) =
                prefactor_y * *(b + 154 * OS1_S1 + 15) -
                p_over_q * *(b + 207 * OS1_S1 + 15) +
                one_over_two_q * *(b + 111 * OS1_S1 + 15);
            *(b + 154 * OS1_S1 + 29) =
                prefactor_x * *(b + 154 * OS1_S1 + 19) -
                p_over_q * *(b + 199 * OS1_S1 + 19) +
                one_over_two_q * *(b + 118 * OS1_S1 + 19);
            *(b + 154 * OS1_S1 + 30) =
                prefactor_y * *(b + 154 * OS1_S1 + 16) -
                p_over_q * *(b + 207 * OS1_S1 + 16) +
                one_over_two_q * *(b + 111 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 154 * OS1_S1 + 7);
            *(b + 154 * OS1_S1 + 31) =
                prefactor_z * *(b + 154 * OS1_S1 + 16) -
                p_over_q * *(b + 208 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 16);
            *(b + 154 * OS1_S1 + 32) =
                prefactor_y * *(b + 154 * OS1_S1 + 18) -
                p_over_q * *(b + 207 * OS1_S1 + 18) +
                one_over_two_q * *(b + 111 * OS1_S1 + 18) +
                one_over_two_q * *(b + 154 * OS1_S1 + 9);
            *(b + 154 * OS1_S1 + 33) =
                prefactor_y * *(b + 154 * OS1_S1 + 19) -
                p_over_q * *(b + 207 * OS1_S1 + 19) +
                one_over_two_q * *(b + 111 * OS1_S1 + 19);
            *(b + 154 * OS1_S1 + 34) =
                prefactor_z * *(b + 154 * OS1_S1 + 19) -
                p_over_q * *(b + 208 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 154 * OS1_S1 + 9);
            *(b + 155 * OS1_S1 + 20) =
                prefactor_x * *(b + 155 * OS1_S1 + 10) -
                p_over_q * *(b + 200 * OS1_S1 + 10) +
                one_over_two_q * *(b + 119 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 155 * OS1_S1 + 4);
            *(b + 155 * OS1_S1 + 21) = prefactor_y * *(b + 155 * OS1_S1 + 10) -
                                       p_over_q * *(b + 208 * OS1_S1 + 10);
            *(b + 155 * OS1_S1 + 22) =
                prefactor_z * *(b + 155 * OS1_S1 + 10) -
                p_over_q * *(b + 209 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 10);
            *(b + 155 * OS1_S1 + 23) = prefactor_y * *(b + 155 * OS1_S1 + 11) -
                                       p_over_q * *(b + 208 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 155 * OS1_S1 + 4);
            *(b + 155 * OS1_S1 + 24) = prefactor_y * *(b + 155 * OS1_S1 + 12) -
                                       p_over_q * *(b + 208 * OS1_S1 + 12);
            *(b + 155 * OS1_S1 + 25) =
                prefactor_x * *(b + 155 * OS1_S1 + 15) -
                p_over_q * *(b + 200 * OS1_S1 + 15) +
                one_over_two_q * *(b + 119 * OS1_S1 + 15) +
                one_over_two_q * *(b + 155 * OS1_S1 + 9);
            *(b + 155 * OS1_S1 + 26) =
                prefactor_x * *(b + 155 * OS1_S1 + 16) -
                p_over_q * *(b + 200 * OS1_S1 + 16) +
                one_over_two_q * *(b + 119 * OS1_S1 + 16);
            *(b + 155 * OS1_S1 + 27) =
                prefactor_x * *(b + 155 * OS1_S1 + 17) -
                p_over_q * *(b + 200 * OS1_S1 + 17) +
                one_over_two_q * *(b + 119 * OS1_S1 + 17);
            *(b + 155 * OS1_S1 + 28) = prefactor_y * *(b + 155 * OS1_S1 + 15) -
                                       p_over_q * *(b + 208 * OS1_S1 + 15);
            *(b + 155 * OS1_S1 + 29) =
                prefactor_x * *(b + 155 * OS1_S1 + 19) -
                p_over_q * *(b + 200 * OS1_S1 + 19) +
                one_over_two_q * *(b + 119 * OS1_S1 + 19);
            *(b + 155 * OS1_S1 + 30) =
                prefactor_y * *(b + 155 * OS1_S1 + 16) -
                p_over_q * *(b + 208 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 155 * OS1_S1 + 7);
            *(b + 155 * OS1_S1 + 31) =
                prefactor_z * *(b + 155 * OS1_S1 + 16) -
                p_over_q * *(b + 209 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 16);
            *(b + 155 * OS1_S1 + 32) = prefactor_y * *(b + 155 * OS1_S1 + 18) -
                                       p_over_q * *(b + 208 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 155 * OS1_S1 + 9);
            *(b + 155 * OS1_S1 + 33) = prefactor_y * *(b + 155 * OS1_S1 + 19) -
                                       p_over_q * *(b + 208 * OS1_S1 + 19);
            *(b + 155 * OS1_S1 + 34) =
                prefactor_z * *(b + 155 * OS1_S1 + 19) -
                p_over_q * *(b + 209 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 155 * OS1_S1 + 9);
            *(b + 156 * OS1_S1 + 20) =
                prefactor_x * *(b + 156 * OS1_S1 + 10) -
                p_over_q * *(b + 201 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 156 * OS1_S1 + 4);
            *(b + 156 * OS1_S1 + 21) =
                prefactor_y * *(b + 156 * OS1_S1 + 10) -
                p_over_q * *(b + 210 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 10);
            *(b + 156 * OS1_S1 + 22) = prefactor_z * *(b + 156 * OS1_S1 + 10) -
                                       p_over_q * *(b + 211 * OS1_S1 + 10);
            *(b + 156 * OS1_S1 + 23) = prefactor_x * *(b + 156 * OS1_S1 + 13) -
                                       p_over_q * *(b + 201 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 156 * OS1_S1 + 7);
            *(b + 156 * OS1_S1 + 24) = prefactor_z * *(b + 156 * OS1_S1 + 11) -
                                       p_over_q * *(b + 211 * OS1_S1 + 11);
            *(b + 156 * OS1_S1 + 25) = prefactor_z * *(b + 156 * OS1_S1 + 12) -
                                       p_over_q * *(b + 211 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 156 * OS1_S1 + 4);
            *(b + 156 * OS1_S1 + 26) = prefactor_x * *(b + 156 * OS1_S1 + 16) -
                                       p_over_q * *(b + 201 * OS1_S1 + 16);
            *(b + 156 * OS1_S1 + 27) = prefactor_z * *(b + 156 * OS1_S1 + 13) -
                                       p_over_q * *(b + 211 * OS1_S1 + 13);
            *(b + 156 * OS1_S1 + 28) = prefactor_x * *(b + 156 * OS1_S1 + 18) -
                                       p_over_q * *(b + 201 * OS1_S1 + 18);
            *(b + 156 * OS1_S1 + 29) = prefactor_x * *(b + 156 * OS1_S1 + 19) -
                                       p_over_q * *(b + 201 * OS1_S1 + 19);
            *(b + 156 * OS1_S1 + 30) =
                prefactor_y * *(b + 156 * OS1_S1 + 16) -
                p_over_q * *(b + 210 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 156 * OS1_S1 + 7);
            *(b + 156 * OS1_S1 + 31) = prefactor_z * *(b + 156 * OS1_S1 + 16) -
                                       p_over_q * *(b + 211 * OS1_S1 + 16);
            *(b + 156 * OS1_S1 + 32) = prefactor_z * *(b + 156 * OS1_S1 + 17) -
                                       p_over_q * *(b + 211 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 156 * OS1_S1 + 7);
            *(b + 156 * OS1_S1 + 33) =
                prefactor_y * *(b + 156 * OS1_S1 + 19) -
                p_over_q * *(b + 210 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 19);
            *(b + 156 * OS1_S1 + 34) =
                prefactor_z * *(b + 156 * OS1_S1 + 19) -
                p_over_q * *(b + 211 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 156 * OS1_S1 + 9);
            *(b + 157 * OS1_S1 + 20) =
                prefactor_x * *(b + 157 * OS1_S1 + 10) -
                p_over_q * *(b + 202 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 157 * OS1_S1 + 4);
            *(b + 157 * OS1_S1 + 21) =
                prefactor_y * *(b + 157 * OS1_S1 + 10) -
                p_over_q * *(b + 211 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 10);
            *(b + 157 * OS1_S1 + 22) =
                prefactor_z * *(b + 157 * OS1_S1 + 10) -
                p_over_q * *(b + 212 * OS1_S1 + 10) +
                one_over_two_q * *(b + 112 * OS1_S1 + 10);
            *(b + 157 * OS1_S1 + 23) = prefactor_x * *(b + 157 * OS1_S1 + 13) -
                                       p_over_q * *(b + 202 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 157 * OS1_S1 + 7);
            *(b + 157 * OS1_S1 + 24) =
                prefactor_z * *(b + 157 * OS1_S1 + 11) -
                p_over_q * *(b + 212 * OS1_S1 + 11) +
                one_over_two_q * *(b + 112 * OS1_S1 + 11);
            *(b + 157 * OS1_S1 + 25) = prefactor_x * *(b + 157 * OS1_S1 + 15) -
                                       p_over_q * *(b + 202 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 157 * OS1_S1 + 9);
            *(b + 157 * OS1_S1 + 26) = prefactor_x * *(b + 157 * OS1_S1 + 16) -
                                       p_over_q * *(b + 202 * OS1_S1 + 16);
            *(b + 157 * OS1_S1 + 27) = prefactor_x * *(b + 157 * OS1_S1 + 17) -
                                       p_over_q * *(b + 202 * OS1_S1 + 17);
            *(b + 157 * OS1_S1 + 28) = prefactor_x * *(b + 157 * OS1_S1 + 18) -
                                       p_over_q * *(b + 202 * OS1_S1 + 18);
            *(b + 157 * OS1_S1 + 29) = prefactor_x * *(b + 157 * OS1_S1 + 19) -
                                       p_over_q * *(b + 202 * OS1_S1 + 19);
            *(b + 157 * OS1_S1 + 30) =
                prefactor_y * *(b + 157 * OS1_S1 + 16) -
                p_over_q * *(b + 211 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 157 * OS1_S1 + 7);
            *(b + 157 * OS1_S1 + 31) =
                prefactor_z * *(b + 157 * OS1_S1 + 16) -
                p_over_q * *(b + 212 * OS1_S1 + 16) +
                one_over_two_q * *(b + 112 * OS1_S1 + 16);
            *(b + 157 * OS1_S1 + 32) =
                prefactor_z * *(b + 157 * OS1_S1 + 17) -
                p_over_q * *(b + 212 * OS1_S1 + 17) +
                one_over_two_q * *(b + 112 * OS1_S1 + 17) +
                one_over_two_q * *(b + 157 * OS1_S1 + 7);
            *(b + 157 * OS1_S1 + 33) =
                prefactor_y * *(b + 157 * OS1_S1 + 19) -
                p_over_q * *(b + 211 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 19);
            *(b + 157 * OS1_S1 + 34) =
                prefactor_z * *(b + 157 * OS1_S1 + 19) -
                p_over_q * *(b + 212 * OS1_S1 + 19) +
                one_over_two_q * *(b + 112 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 157 * OS1_S1 + 9);
            *(b + 158 * OS1_S1 + 20) =
                prefactor_x * *(b + 158 * OS1_S1 + 10) -
                p_over_q * *(b + 203 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 4);
            *(b + 158 * OS1_S1 + 21) =
                prefactor_y * *(b + 158 * OS1_S1 + 10) -
                p_over_q * *(b + 212 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 10);
            *(b + 158 * OS1_S1 + 22) =
                prefactor_z * *(b + 158 * OS1_S1 + 10) -
                p_over_q * *(b + 213 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 10);
            *(b + 158 * OS1_S1 + 23) = prefactor_x * *(b + 158 * OS1_S1 + 13) -
                                       p_over_q * *(b + 203 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 158 * OS1_S1 + 7);
            *(b + 158 * OS1_S1 + 24) =
                prefactor_z * *(b + 158 * OS1_S1 + 11) -
                p_over_q * *(b + 213 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 11);
            *(b + 158 * OS1_S1 + 25) = prefactor_x * *(b + 158 * OS1_S1 + 15) -
                                       p_over_q * *(b + 203 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 158 * OS1_S1 + 9);
            *(b + 158 * OS1_S1 + 26) = prefactor_x * *(b + 158 * OS1_S1 + 16) -
                                       p_over_q * *(b + 203 * OS1_S1 + 16);
            *(b + 158 * OS1_S1 + 27) = prefactor_x * *(b + 158 * OS1_S1 + 17) -
                                       p_over_q * *(b + 203 * OS1_S1 + 17);
            *(b + 158 * OS1_S1 + 28) = prefactor_x * *(b + 158 * OS1_S1 + 18) -
                                       p_over_q * *(b + 203 * OS1_S1 + 18);
            *(b + 158 * OS1_S1 + 29) = prefactor_x * *(b + 158 * OS1_S1 + 19) -
                                       p_over_q * *(b + 203 * OS1_S1 + 19);
            *(b + 158 * OS1_S1 + 30) =
                prefactor_y * *(b + 158 * OS1_S1 + 16) -
                p_over_q * *(b + 212 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 7);
            *(b + 158 * OS1_S1 + 31) =
                prefactor_z * *(b + 158 * OS1_S1 + 16) -
                p_over_q * *(b + 213 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 16);
            *(b + 158 * OS1_S1 + 32) =
                prefactor_z * *(b + 158 * OS1_S1 + 17) -
                p_over_q * *(b + 213 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 17) +
                one_over_two_q * *(b + 158 * OS1_S1 + 7);
            *(b + 158 * OS1_S1 + 33) =
                prefactor_y * *(b + 158 * OS1_S1 + 19) -
                p_over_q * *(b + 212 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 19);
            *(b + 158 * OS1_S1 + 34) =
                prefactor_z * *(b + 158 * OS1_S1 + 19) -
                p_over_q * *(b + 213 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 9);
            *(b + 159 * OS1_S1 + 20) =
                prefactor_x * *(b + 159 * OS1_S1 + 10) -
                p_over_q * *(b + 204 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 159 * OS1_S1 + 4);
            *(b + 159 * OS1_S1 + 21) =
                prefactor_y * *(b + 159 * OS1_S1 + 10) -
                p_over_q * *(b + 213 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 10);
            *(b + 159 * OS1_S1 + 22) =
                prefactor_z * *(b + 159 * OS1_S1 + 10) -
                p_over_q * *(b + 214 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 10);
            *(b + 159 * OS1_S1 + 23) = prefactor_x * *(b + 159 * OS1_S1 + 13) -
                                       p_over_q * *(b + 204 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 159 * OS1_S1 + 7);
            *(b + 159 * OS1_S1 + 24) =
                prefactor_z * *(b + 159 * OS1_S1 + 11) -
                p_over_q * *(b + 214 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 11);
            *(b + 159 * OS1_S1 + 25) = prefactor_x * *(b + 159 * OS1_S1 + 15) -
                                       p_over_q * *(b + 204 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 159 * OS1_S1 + 9);
            *(b + 159 * OS1_S1 + 26) = prefactor_x * *(b + 159 * OS1_S1 + 16) -
                                       p_over_q * *(b + 204 * OS1_S1 + 16);
            *(b + 159 * OS1_S1 + 27) = prefactor_x * *(b + 159 * OS1_S1 + 17) -
                                       p_over_q * *(b + 204 * OS1_S1 + 17);
            *(b + 159 * OS1_S1 + 28) = prefactor_x * *(b + 159 * OS1_S1 + 18) -
                                       p_over_q * *(b + 204 * OS1_S1 + 18);
            *(b + 159 * OS1_S1 + 29) = prefactor_x * *(b + 159 * OS1_S1 + 19) -
                                       p_over_q * *(b + 204 * OS1_S1 + 19);
            *(b + 159 * OS1_S1 + 30) =
                prefactor_y * *(b + 159 * OS1_S1 + 16) -
                p_over_q * *(b + 213 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 159 * OS1_S1 + 7);
            *(b + 159 * OS1_S1 + 31) =
                prefactor_z * *(b + 159 * OS1_S1 + 16) -
                p_over_q * *(b + 214 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 16);
            *(b + 159 * OS1_S1 + 32) =
                prefactor_z * *(b + 159 * OS1_S1 + 17) -
                p_over_q * *(b + 214 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 17) +
                one_over_two_q * *(b + 159 * OS1_S1 + 7);
            *(b + 159 * OS1_S1 + 33) =
                prefactor_y * *(b + 159 * OS1_S1 + 19) -
                p_over_q * *(b + 213 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 19);
            *(b + 159 * OS1_S1 + 34) =
                prefactor_z * *(b + 159 * OS1_S1 + 19) -
                p_over_q * *(b + 214 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 159 * OS1_S1 + 9);
            *(b + 160 * OS1_S1 + 20) =
                prefactor_x * *(b + 160 * OS1_S1 + 10) -
                p_over_q * *(b + 205 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 160 * OS1_S1 + 4);
            *(b + 160 * OS1_S1 + 21) =
                prefactor_y * *(b + 160 * OS1_S1 + 10) -
                p_over_q * *(b + 214 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 10);
            *(b + 160 * OS1_S1 + 22) =
                prefactor_z * *(b + 160 * OS1_S1 + 10) -
                p_over_q * *(b + 215 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 10);
            *(b + 160 * OS1_S1 + 23) = prefactor_x * *(b + 160 * OS1_S1 + 13) -
                                       p_over_q * *(b + 205 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 160 * OS1_S1 + 7);
            *(b + 160 * OS1_S1 + 24) =
                prefactor_z * *(b + 160 * OS1_S1 + 11) -
                p_over_q * *(b + 215 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 11);
            *(b + 160 * OS1_S1 + 25) = prefactor_x * *(b + 160 * OS1_S1 + 15) -
                                       p_over_q * *(b + 205 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 160 * OS1_S1 + 9);
            *(b + 160 * OS1_S1 + 26) = prefactor_x * *(b + 160 * OS1_S1 + 16) -
                                       p_over_q * *(b + 205 * OS1_S1 + 16);
            *(b + 160 * OS1_S1 + 27) = prefactor_x * *(b + 160 * OS1_S1 + 17) -
                                       p_over_q * *(b + 205 * OS1_S1 + 17);
            *(b + 160 * OS1_S1 + 28) = prefactor_x * *(b + 160 * OS1_S1 + 18) -
                                       p_over_q * *(b + 205 * OS1_S1 + 18);
            *(b + 160 * OS1_S1 + 29) = prefactor_x * *(b + 160 * OS1_S1 + 19) -
                                       p_over_q * *(b + 205 * OS1_S1 + 19);
            *(b + 160 * OS1_S1 + 30) =
                prefactor_y * *(b + 160 * OS1_S1 + 16) -
                p_over_q * *(b + 214 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 160 * OS1_S1 + 7);
            *(b + 160 * OS1_S1 + 31) =
                prefactor_z * *(b + 160 * OS1_S1 + 16) -
                p_over_q * *(b + 215 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 16);
            *(b + 160 * OS1_S1 + 32) =
                prefactor_z * *(b + 160 * OS1_S1 + 17) -
                p_over_q * *(b + 215 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 17) +
                one_over_two_q * *(b + 160 * OS1_S1 + 7);
            *(b + 160 * OS1_S1 + 33) =
                prefactor_y * *(b + 160 * OS1_S1 + 19) -
                p_over_q * *(b + 214 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 19);
            *(b + 160 * OS1_S1 + 34) =
                prefactor_z * *(b + 160 * OS1_S1 + 19) -
                p_over_q * *(b + 215 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 160 * OS1_S1 + 9);
            *(b + 161 * OS1_S1 + 20) =
                prefactor_x * *(b + 161 * OS1_S1 + 10) -
                p_over_q * *(b + 206 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 161 * OS1_S1 + 4);
            *(b + 161 * OS1_S1 + 21) =
                prefactor_y * *(b + 161 * OS1_S1 + 10) -
                p_over_q * *(b + 215 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 10);
            *(b + 161 * OS1_S1 + 22) =
                prefactor_z * *(b + 161 * OS1_S1 + 10) -
                p_over_q * *(b + 216 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 10);
            *(b + 161 * OS1_S1 + 23) = prefactor_x * *(b + 161 * OS1_S1 + 13) -
                                       p_over_q * *(b + 206 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 161 * OS1_S1 + 7);
            *(b + 161 * OS1_S1 + 24) =
                prefactor_y * *(b + 161 * OS1_S1 + 12) -
                p_over_q * *(b + 215 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 12);
            *(b + 161 * OS1_S1 + 25) = prefactor_x * *(b + 161 * OS1_S1 + 15) -
                                       p_over_q * *(b + 206 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 161 * OS1_S1 + 9);
            *(b + 161 * OS1_S1 + 26) = prefactor_x * *(b + 161 * OS1_S1 + 16) -
                                       p_over_q * *(b + 206 * OS1_S1 + 16);
            *(b + 161 * OS1_S1 + 27) = prefactor_x * *(b + 161 * OS1_S1 + 17) -
                                       p_over_q * *(b + 206 * OS1_S1 + 17);
            *(b + 161 * OS1_S1 + 28) = prefactor_x * *(b + 161 * OS1_S1 + 18) -
                                       p_over_q * *(b + 206 * OS1_S1 + 18);
            *(b + 161 * OS1_S1 + 29) = prefactor_x * *(b + 161 * OS1_S1 + 19) -
                                       p_over_q * *(b + 206 * OS1_S1 + 19);
            *(b + 161 * OS1_S1 + 30) =
                prefactor_y * *(b + 161 * OS1_S1 + 16) -
                p_over_q * *(b + 215 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 161 * OS1_S1 + 7);
            *(b + 161 * OS1_S1 + 31) =
                prefactor_z * *(b + 161 * OS1_S1 + 16) -
                p_over_q * *(b + 216 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 16);
            *(b + 161 * OS1_S1 + 32) =
                prefactor_y * *(b + 161 * OS1_S1 + 18) -
                p_over_q * *(b + 215 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 18) +
                one_over_two_q * *(b + 161 * OS1_S1 + 9);
            *(b + 161 * OS1_S1 + 33) =
                prefactor_y * *(b + 161 * OS1_S1 + 19) -
                p_over_q * *(b + 215 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 19);
            *(b + 161 * OS1_S1 + 34) =
                prefactor_z * *(b + 161 * OS1_S1 + 19) -
                p_over_q * *(b + 216 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 161 * OS1_S1 + 9);
            *(b + 162 * OS1_S1 + 20) =
                prefactor_x * *(b + 162 * OS1_S1 + 10) -
                p_over_q * *(b + 207 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 4);
            *(b + 162 * OS1_S1 + 21) =
                prefactor_y * *(b + 162 * OS1_S1 + 10) -
                p_over_q * *(b + 216 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 10);
            *(b + 162 * OS1_S1 + 22) =
                prefactor_z * *(b + 162 * OS1_S1 + 10) -
                p_over_q * *(b + 217 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 10);
            *(b + 162 * OS1_S1 + 23) = prefactor_x * *(b + 162 * OS1_S1 + 13) -
                                       p_over_q * *(b + 207 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 162 * OS1_S1 + 7);
            *(b + 162 * OS1_S1 + 24) =
                prefactor_y * *(b + 162 * OS1_S1 + 12) -
                p_over_q * *(b + 216 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 12);
            *(b + 162 * OS1_S1 + 25) = prefactor_x * *(b + 162 * OS1_S1 + 15) -
                                       p_over_q * *(b + 207 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 162 * OS1_S1 + 9);
            *(b + 162 * OS1_S1 + 26) = prefactor_x * *(b + 162 * OS1_S1 + 16) -
                                       p_over_q * *(b + 207 * OS1_S1 + 16);
            *(b + 162 * OS1_S1 + 27) = prefactor_x * *(b + 162 * OS1_S1 + 17) -
                                       p_over_q * *(b + 207 * OS1_S1 + 17);
            *(b + 162 * OS1_S1 + 28) = prefactor_x * *(b + 162 * OS1_S1 + 18) -
                                       p_over_q * *(b + 207 * OS1_S1 + 18);
            *(b + 162 * OS1_S1 + 29) = prefactor_x * *(b + 162 * OS1_S1 + 19) -
                                       p_over_q * *(b + 207 * OS1_S1 + 19);
            *(b + 162 * OS1_S1 + 30) =
                prefactor_y * *(b + 162 * OS1_S1 + 16) -
                p_over_q * *(b + 216 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 7);
            *(b + 162 * OS1_S1 + 31) =
                prefactor_z * *(b + 162 * OS1_S1 + 16) -
                p_over_q * *(b + 217 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 16);
            *(b + 162 * OS1_S1 + 32) =
                prefactor_y * *(b + 162 * OS1_S1 + 18) -
                p_over_q * *(b + 216 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 18) +
                one_over_two_q * *(b + 162 * OS1_S1 + 9);
            *(b + 162 * OS1_S1 + 33) =
                prefactor_y * *(b + 162 * OS1_S1 + 19) -
                p_over_q * *(b + 216 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 19);
            *(b + 162 * OS1_S1 + 34) =
                prefactor_z * *(b + 162 * OS1_S1 + 19) -
                p_over_q * *(b + 217 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 9);
            *(b + 163 * OS1_S1 + 20) =
                prefactor_x * *(b + 163 * OS1_S1 + 10) -
                p_over_q * *(b + 208 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 163 * OS1_S1 + 4);
            *(b + 163 * OS1_S1 + 21) =
                prefactor_y * *(b + 163 * OS1_S1 + 10) -
                p_over_q * *(b + 217 * OS1_S1 + 10) +
                one_over_two_q * *(b + 119 * OS1_S1 + 10);
            *(b + 163 * OS1_S1 + 22) =
                prefactor_z * *(b + 163 * OS1_S1 + 10) -
                p_over_q * *(b + 218 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 10);
            *(b + 163 * OS1_S1 + 23) = prefactor_x * *(b + 163 * OS1_S1 + 13) -
                                       p_over_q * *(b + 208 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 163 * OS1_S1 + 7);
            *(b + 163 * OS1_S1 + 24) =
                prefactor_y * *(b + 163 * OS1_S1 + 12) -
                p_over_q * *(b + 217 * OS1_S1 + 12) +
                one_over_two_q * *(b + 119 * OS1_S1 + 12);
            *(b + 163 * OS1_S1 + 25) = prefactor_x * *(b + 163 * OS1_S1 + 15) -
                                       p_over_q * *(b + 208 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 163 * OS1_S1 + 9);
            *(b + 163 * OS1_S1 + 26) = prefactor_x * *(b + 163 * OS1_S1 + 16) -
                                       p_over_q * *(b + 208 * OS1_S1 + 16);
            *(b + 163 * OS1_S1 + 27) = prefactor_x * *(b + 163 * OS1_S1 + 17) -
                                       p_over_q * *(b + 208 * OS1_S1 + 17);
            *(b + 163 * OS1_S1 + 28) = prefactor_x * *(b + 163 * OS1_S1 + 18) -
                                       p_over_q * *(b + 208 * OS1_S1 + 18);
            *(b + 163 * OS1_S1 + 29) = prefactor_x * *(b + 163 * OS1_S1 + 19) -
                                       p_over_q * *(b + 208 * OS1_S1 + 19);
            *(b + 163 * OS1_S1 + 30) =
                prefactor_y * *(b + 163 * OS1_S1 + 16) -
                p_over_q * *(b + 217 * OS1_S1 + 16) +
                one_over_two_q * *(b + 119 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 163 * OS1_S1 + 7);
            *(b + 163 * OS1_S1 + 31) =
                prefactor_z * *(b + 163 * OS1_S1 + 16) -
                p_over_q * *(b + 218 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 16);
            *(b + 163 * OS1_S1 + 32) =
                prefactor_y * *(b + 163 * OS1_S1 + 18) -
                p_over_q * *(b + 217 * OS1_S1 + 18) +
                one_over_two_q * *(b + 119 * OS1_S1 + 18) +
                one_over_two_q * *(b + 163 * OS1_S1 + 9);
            *(b + 163 * OS1_S1 + 33) =
                prefactor_y * *(b + 163 * OS1_S1 + 19) -
                p_over_q * *(b + 217 * OS1_S1 + 19) +
                one_over_two_q * *(b + 119 * OS1_S1 + 19);
            *(b + 163 * OS1_S1 + 34) =
                prefactor_z * *(b + 163 * OS1_S1 + 19) -
                p_over_q * *(b + 218 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 163 * OS1_S1 + 9);
            *(b + 164 * OS1_S1 + 20) =
                prefactor_x * *(b + 164 * OS1_S1 + 10) -
                p_over_q * *(b + 209 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 164 * OS1_S1 + 4);
            *(b + 164 * OS1_S1 + 21) = prefactor_y * *(b + 164 * OS1_S1 + 10) -
                                       p_over_q * *(b + 218 * OS1_S1 + 10);
            *(b + 164 * OS1_S1 + 22) =
                prefactor_z * *(b + 164 * OS1_S1 + 10) -
                p_over_q * *(b + 219 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 10);
            *(b + 164 * OS1_S1 + 23) = prefactor_y * *(b + 164 * OS1_S1 + 11) -
                                       p_over_q * *(b + 218 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 164 * OS1_S1 + 4);
            *(b + 164 * OS1_S1 + 24) = prefactor_y * *(b + 164 * OS1_S1 + 12) -
                                       p_over_q * *(b + 218 * OS1_S1 + 12);
            *(b + 164 * OS1_S1 + 25) = prefactor_x * *(b + 164 * OS1_S1 + 15) -
                                       p_over_q * *(b + 209 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 164 * OS1_S1 + 9);
            *(b + 164 * OS1_S1 + 26) = prefactor_x * *(b + 164 * OS1_S1 + 16) -
                                       p_over_q * *(b + 209 * OS1_S1 + 16);
            *(b + 164 * OS1_S1 + 27) = prefactor_x * *(b + 164 * OS1_S1 + 17) -
                                       p_over_q * *(b + 209 * OS1_S1 + 17);
            *(b + 164 * OS1_S1 + 28) = prefactor_y * *(b + 164 * OS1_S1 + 15) -
                                       p_over_q * *(b + 218 * OS1_S1 + 15);
            *(b + 164 * OS1_S1 + 29) = prefactor_x * *(b + 164 * OS1_S1 + 19) -
                                       p_over_q * *(b + 209 * OS1_S1 + 19);
            *(b + 164 * OS1_S1 + 30) =
                prefactor_y * *(b + 164 * OS1_S1 + 16) -
                p_over_q * *(b + 218 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 164 * OS1_S1 + 7);
            *(b + 164 * OS1_S1 + 31) =
                prefactor_z * *(b + 164 * OS1_S1 + 16) -
                p_over_q * *(b + 219 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 16);
            *(b + 164 * OS1_S1 + 32) = prefactor_y * *(b + 164 * OS1_S1 + 18) -
                                       p_over_q * *(b + 218 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 164 * OS1_S1 + 9);
            *(b + 164 * OS1_S1 + 33) = prefactor_y * *(b + 164 * OS1_S1 + 19) -
                                       p_over_q * *(b + 218 * OS1_S1 + 19);
            *(b + 164 * OS1_S1 + 34) =
                prefactor_z * *(b + 164 * OS1_S1 + 19) -
                p_over_q * *(b + 219 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 164 * OS1_S1 + 9);
            return;
        }
    }
}
