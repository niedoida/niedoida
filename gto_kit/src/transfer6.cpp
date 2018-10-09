/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_0_6(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 0 * OS1_S1 + 56) =
                prefactor_x * *(b + 0 * OS1_S1 + 35) -
                p_over_q * *(b + 1 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 0 * OS1_S1 + 20);
            *(b + 0 * OS1_S1 + 57) = prefactor_y * *(b + 0 * OS1_S1 + 35) -
                                     p_over_q * *(b + 2 * OS1_S1 + 35);
            *(b + 0 * OS1_S1 + 58) = prefactor_z * *(b + 0 * OS1_S1 + 35) -
                                     p_over_q * *(b + 3 * OS1_S1 + 35);
            *(b + 0 * OS1_S1 + 59) = prefactor_y * *(b + 0 * OS1_S1 + 36) -
                                     p_over_q * *(b + 2 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 20);
            *(b + 0 * OS1_S1 + 60) = prefactor_z * *(b + 0 * OS1_S1 + 36) -
                                     p_over_q * *(b + 3 * OS1_S1 + 36);
            *(b + 0 * OS1_S1 + 61) = prefactor_z * *(b + 0 * OS1_S1 + 37) -
                                     p_over_q * *(b + 3 * OS1_S1 + 37) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 20);
            *(b + 0 * OS1_S1 + 62) =
                prefactor_y * *(b + 0 * OS1_S1 + 38) -
                p_over_q * *(b + 2 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 21);
            *(b + 0 * OS1_S1 + 63) = prefactor_z * *(b + 0 * OS1_S1 + 38) -
                                     p_over_q * *(b + 3 * OS1_S1 + 38);
            *(b + 0 * OS1_S1 + 64) = prefactor_y * *(b + 0 * OS1_S1 + 40) -
                                     p_over_q * *(b + 2 * OS1_S1 + 40);
            *(b + 0 * OS1_S1 + 65) =
                prefactor_z * *(b + 0 * OS1_S1 + 40) -
                p_over_q * *(b + 3 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 22);
            *(b + 0 * OS1_S1 + 66) = prefactor_x * *(b + 0 * OS1_S1 + 45) -
                                     p_over_q * *(b + 1 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 30);
            *(b + 0 * OS1_S1 + 67) = prefactor_z * *(b + 0 * OS1_S1 + 41) -
                                     p_over_q * *(b + 3 * OS1_S1 + 41);
            *(b + 0 * OS1_S1 + 68) = prefactor_z * *(b + 0 * OS1_S1 + 42) -
                                     p_over_q * *(b + 3 * OS1_S1 + 42) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 23);
            *(b + 0 * OS1_S1 + 69) = prefactor_y * *(b + 0 * OS1_S1 + 44) -
                                     p_over_q * *(b + 2 * OS1_S1 + 44);
            *(b + 0 * OS1_S1 + 70) = prefactor_x * *(b + 0 * OS1_S1 + 49) -
                                     p_over_q * *(b + 1 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 34);
            *(b + 0 * OS1_S1 + 71) = prefactor_x * *(b + 0 * OS1_S1 + 50) -
                                     p_over_q * *(b + 1 * OS1_S1 + 50);
            *(b + 0 * OS1_S1 + 72) = prefactor_z * *(b + 0 * OS1_S1 + 45) -
                                     p_over_q * *(b + 3 * OS1_S1 + 45);
            *(b + 0 * OS1_S1 + 73) = prefactor_x * *(b + 0 * OS1_S1 + 52) -
                                     p_over_q * *(b + 1 * OS1_S1 + 52);
            *(b + 0 * OS1_S1 + 74) = prefactor_x * *(b + 0 * OS1_S1 + 53) -
                                     p_over_q * *(b + 1 * OS1_S1 + 53);
            *(b + 0 * OS1_S1 + 75) = prefactor_y * *(b + 0 * OS1_S1 + 49) -
                                     p_over_q * *(b + 2 * OS1_S1 + 49);
            *(b + 0 * OS1_S1 + 76) = prefactor_x * *(b + 0 * OS1_S1 + 55) -
                                     p_over_q * *(b + 1 * OS1_S1 + 55);
            *(b + 0 * OS1_S1 + 77) =
                prefactor_y * *(b + 0 * OS1_S1 + 50) -
                p_over_q * *(b + 2 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 0 * OS1_S1 + 30);
            *(b + 0 * OS1_S1 + 78) = prefactor_z * *(b + 0 * OS1_S1 + 50) -
                                     p_over_q * *(b + 3 * OS1_S1 + 50);
            *(b + 0 * OS1_S1 + 79) = prefactor_z * *(b + 0 * OS1_S1 + 51) -
                                     p_over_q * *(b + 3 * OS1_S1 + 51) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 30);
            *(b + 0 * OS1_S1 + 80) =
                prefactor_z * *(b + 0 * OS1_S1 + 52) -
                p_over_q * *(b + 3 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 31);
            *(b + 0 * OS1_S1 + 81) = prefactor_y * *(b + 0 * OS1_S1 + 54) -
                                     p_over_q * *(b + 2 * OS1_S1 + 54) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 34);
            *(b + 0 * OS1_S1 + 82) = prefactor_y * *(b + 0 * OS1_S1 + 55) -
                                     p_over_q * *(b + 2 * OS1_S1 + 55);
            *(b + 0 * OS1_S1 + 83) =
                prefactor_z * *(b + 0 * OS1_S1 + 55) -
                p_over_q * *(b + 3 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 0 * OS1_S1 + 34);
            return;
        }
        void transfer_1_6(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 1 * OS1_S1 + 56) =
                prefactor_x * *(b + 1 * OS1_S1 + 35) -
                p_over_q * *(b + 4 * OS1_S1 + 35) +
                one_over_two_q * *(b + 0 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 1 * OS1_S1 + 20);
            *(b + 1 * OS1_S1 + 57) = prefactor_y * *(b + 1 * OS1_S1 + 35) -
                                     p_over_q * *(b + 5 * OS1_S1 + 35);
            *(b + 1 * OS1_S1 + 58) = prefactor_z * *(b + 1 * OS1_S1 + 35) -
                                     p_over_q * *(b + 6 * OS1_S1 + 35);
            *(b + 1 * OS1_S1 + 59) = prefactor_y * *(b + 1 * OS1_S1 + 36) -
                                     p_over_q * *(b + 5 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 20);
            *(b + 1 * OS1_S1 + 60) = prefactor_z * *(b + 1 * OS1_S1 + 36) -
                                     p_over_q * *(b + 6 * OS1_S1 + 36);
            *(b + 1 * OS1_S1 + 61) = prefactor_z * *(b + 1 * OS1_S1 + 37) -
                                     p_over_q * *(b + 6 * OS1_S1 + 37) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 20);
            *(b + 1 * OS1_S1 + 62) =
                prefactor_y * *(b + 1 * OS1_S1 + 38) -
                p_over_q * *(b + 5 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 21);
            *(b + 1 * OS1_S1 + 63) = prefactor_z * *(b + 1 * OS1_S1 + 38) -
                                     p_over_q * *(b + 6 * OS1_S1 + 38);
            *(b + 1 * OS1_S1 + 64) = prefactor_y * *(b + 1 * OS1_S1 + 40) -
                                     p_over_q * *(b + 5 * OS1_S1 + 40);
            *(b + 1 * OS1_S1 + 65) =
                prefactor_z * *(b + 1 * OS1_S1 + 40) -
                p_over_q * *(b + 6 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 22);
            *(b + 1 * OS1_S1 + 66) = prefactor_x * *(b + 1 * OS1_S1 + 45) -
                                     p_over_q * *(b + 4 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 30);
            *(b + 1 * OS1_S1 + 67) = prefactor_z * *(b + 1 * OS1_S1 + 41) -
                                     p_over_q * *(b + 6 * OS1_S1 + 41);
            *(b + 1 * OS1_S1 + 68) = prefactor_z * *(b + 1 * OS1_S1 + 42) -
                                     p_over_q * *(b + 6 * OS1_S1 + 42) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 23);
            *(b + 1 * OS1_S1 + 69) = prefactor_y * *(b + 1 * OS1_S1 + 44) -
                                     p_over_q * *(b + 5 * OS1_S1 + 44);
            *(b + 1 * OS1_S1 + 70) = prefactor_x * *(b + 1 * OS1_S1 + 49) -
                                     p_over_q * *(b + 4 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 34);
            *(b + 1 * OS1_S1 + 71) = prefactor_x * *(b + 1 * OS1_S1 + 50) -
                                     p_over_q * *(b + 4 * OS1_S1 + 50) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 50);
            *(b + 1 * OS1_S1 + 72) = prefactor_z * *(b + 1 * OS1_S1 + 45) -
                                     p_over_q * *(b + 6 * OS1_S1 + 45);
            *(b + 1 * OS1_S1 + 73) = prefactor_x * *(b + 1 * OS1_S1 + 52) -
                                     p_over_q * *(b + 4 * OS1_S1 + 52) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 52);
            *(b + 1 * OS1_S1 + 74) = prefactor_x * *(b + 1 * OS1_S1 + 53) -
                                     p_over_q * *(b + 4 * OS1_S1 + 53) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 53);
            *(b + 1 * OS1_S1 + 75) = prefactor_y * *(b + 1 * OS1_S1 + 49) -
                                     p_over_q * *(b + 5 * OS1_S1 + 49);
            *(b + 1 * OS1_S1 + 76) = prefactor_x * *(b + 1 * OS1_S1 + 55) -
                                     p_over_q * *(b + 4 * OS1_S1 + 55) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 55);
            *(b + 1 * OS1_S1 + 77) =
                prefactor_y * *(b + 1 * OS1_S1 + 50) -
                p_over_q * *(b + 5 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 1 * OS1_S1 + 30);
            *(b + 1 * OS1_S1 + 78) = prefactor_z * *(b + 1 * OS1_S1 + 50) -
                                     p_over_q * *(b + 6 * OS1_S1 + 50);
            *(b + 1 * OS1_S1 + 79) = prefactor_z * *(b + 1 * OS1_S1 + 51) -
                                     p_over_q * *(b + 6 * OS1_S1 + 51) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 30);
            *(b + 1 * OS1_S1 + 80) =
                prefactor_z * *(b + 1 * OS1_S1 + 52) -
                p_over_q * *(b + 6 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 31);
            *(b + 1 * OS1_S1 + 81) = prefactor_y * *(b + 1 * OS1_S1 + 54) -
                                     p_over_q * *(b + 5 * OS1_S1 + 54) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 34);
            *(b + 1 * OS1_S1 + 82) = prefactor_y * *(b + 1 * OS1_S1 + 55) -
                                     p_over_q * *(b + 5 * OS1_S1 + 55);
            *(b + 1 * OS1_S1 + 83) =
                prefactor_z * *(b + 1 * OS1_S1 + 55) -
                p_over_q * *(b + 6 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 1 * OS1_S1 + 34);
            *(b + 2 * OS1_S1 + 56) =
                prefactor_x * *(b + 2 * OS1_S1 + 35) -
                p_over_q * *(b + 5 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 2 * OS1_S1 + 20);
            *(b + 2 * OS1_S1 + 57) = prefactor_y * *(b + 2 * OS1_S1 + 35) -
                                     p_over_q * *(b + 7 * OS1_S1 + 35) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 35);
            *(b + 2 * OS1_S1 + 58) = prefactor_z * *(b + 2 * OS1_S1 + 35) -
                                     p_over_q * *(b + 8 * OS1_S1 + 35);
            *(b + 2 * OS1_S1 + 59) = prefactor_y * *(b + 2 * OS1_S1 + 36) -
                                     p_over_q * *(b + 7 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 20);
            *(b + 2 * OS1_S1 + 60) = prefactor_z * *(b + 2 * OS1_S1 + 36) -
                                     p_over_q * *(b + 8 * OS1_S1 + 36);
            *(b + 2 * OS1_S1 + 61) = prefactor_z * *(b + 2 * OS1_S1 + 37) -
                                     p_over_q * *(b + 8 * OS1_S1 + 37) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 20);
            *(b + 2 * OS1_S1 + 62) =
                prefactor_x * *(b + 2 * OS1_S1 + 41) -
                p_over_q * *(b + 5 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 26);
            *(b + 2 * OS1_S1 + 63) = prefactor_z * *(b + 2 * OS1_S1 + 38) -
                                     p_over_q * *(b + 8 * OS1_S1 + 38);
            *(b + 2 * OS1_S1 + 64) = prefactor_y * *(b + 2 * OS1_S1 + 40) -
                                     p_over_q * *(b + 7 * OS1_S1 + 40) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 40);
            *(b + 2 * OS1_S1 + 65) =
                prefactor_z * *(b + 2 * OS1_S1 + 40) -
                p_over_q * *(b + 8 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 22);
            *(b + 2 * OS1_S1 + 66) = prefactor_x * *(b + 2 * OS1_S1 + 45) -
                                     p_over_q * *(b + 5 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 30);
            *(b + 2 * OS1_S1 + 67) = prefactor_z * *(b + 2 * OS1_S1 + 41) -
                                     p_over_q * *(b + 8 * OS1_S1 + 41);
            *(b + 2 * OS1_S1 + 68) = prefactor_z * *(b + 2 * OS1_S1 + 42) -
                                     p_over_q * *(b + 8 * OS1_S1 + 42) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 23);
            *(b + 2 * OS1_S1 + 69) = prefactor_y * *(b + 2 * OS1_S1 + 44) -
                                     p_over_q * *(b + 7 * OS1_S1 + 44) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 44);
            *(b + 2 * OS1_S1 + 70) = prefactor_x * *(b + 2 * OS1_S1 + 49) -
                                     p_over_q * *(b + 5 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 34);
            *(b + 2 * OS1_S1 + 71) = prefactor_x * *(b + 2 * OS1_S1 + 50) -
                                     p_over_q * *(b + 5 * OS1_S1 + 50);
            *(b + 2 * OS1_S1 + 72) = prefactor_z * *(b + 2 * OS1_S1 + 45) -
                                     p_over_q * *(b + 8 * OS1_S1 + 45);
            *(b + 2 * OS1_S1 + 73) = prefactor_x * *(b + 2 * OS1_S1 + 52) -
                                     p_over_q * *(b + 5 * OS1_S1 + 52);
            *(b + 2 * OS1_S1 + 74) = prefactor_x * *(b + 2 * OS1_S1 + 53) -
                                     p_over_q * *(b + 5 * OS1_S1 + 53);
            *(b + 2 * OS1_S1 + 75) = prefactor_x * *(b + 2 * OS1_S1 + 54) -
                                     p_over_q * *(b + 5 * OS1_S1 + 54);
            *(b + 2 * OS1_S1 + 76) = prefactor_x * *(b + 2 * OS1_S1 + 55) -
                                     p_over_q * *(b + 5 * OS1_S1 + 55);
            *(b + 2 * OS1_S1 + 77) =
                prefactor_y * *(b + 2 * OS1_S1 + 50) -
                p_over_q * *(b + 7 * OS1_S1 + 50) +
                one_over_two_q * *(b + 0 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 2 * OS1_S1 + 30);
            *(b + 2 * OS1_S1 + 78) = prefactor_z * *(b + 2 * OS1_S1 + 50) -
                                     p_over_q * *(b + 8 * OS1_S1 + 50);
            *(b + 2 * OS1_S1 + 79) = prefactor_z * *(b + 2 * OS1_S1 + 51) -
                                     p_over_q * *(b + 8 * OS1_S1 + 51) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 30);
            *(b + 2 * OS1_S1 + 80) =
                prefactor_z * *(b + 2 * OS1_S1 + 52) -
                p_over_q * *(b + 8 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 31);
            *(b + 2 * OS1_S1 + 81) = prefactor_y * *(b + 2 * OS1_S1 + 54) -
                                     p_over_q * *(b + 7 * OS1_S1 + 54) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 54) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 34);
            *(b + 2 * OS1_S1 + 82) = prefactor_y * *(b + 2 * OS1_S1 + 55) -
                                     p_over_q * *(b + 7 * OS1_S1 + 55) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 55);
            *(b + 2 * OS1_S1 + 83) =
                prefactor_z * *(b + 2 * OS1_S1 + 55) -
                p_over_q * *(b + 8 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 2 * OS1_S1 + 34);
            *(b + 3 * OS1_S1 + 56) =
                prefactor_x * *(b + 3 * OS1_S1 + 35) -
                p_over_q * *(b + 6 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 3 * OS1_S1 + 20);
            *(b + 3 * OS1_S1 + 57) = prefactor_y * *(b + 3 * OS1_S1 + 35) -
                                     p_over_q * *(b + 8 * OS1_S1 + 35);
            *(b + 3 * OS1_S1 + 58) = prefactor_z * *(b + 3 * OS1_S1 + 35) -
                                     p_over_q * *(b + 9 * OS1_S1 + 35) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 35);
            *(b + 3 * OS1_S1 + 59) = prefactor_y * *(b + 3 * OS1_S1 + 36) -
                                     p_over_q * *(b + 8 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 20);
            *(b + 3 * OS1_S1 + 60) = prefactor_y * *(b + 3 * OS1_S1 + 37) -
                                     p_over_q * *(b + 8 * OS1_S1 + 37);
            *(b + 3 * OS1_S1 + 61) = prefactor_z * *(b + 3 * OS1_S1 + 37) -
                                     p_over_q * *(b + 9 * OS1_S1 + 37) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 37) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 20);
            *(b + 3 * OS1_S1 + 62) =
                prefactor_y * *(b + 3 * OS1_S1 + 38) -
                p_over_q * *(b + 8 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 21);
            *(b + 3 * OS1_S1 + 63) = prefactor_z * *(b + 3 * OS1_S1 + 38) -
                                     p_over_q * *(b + 9 * OS1_S1 + 38) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 38);
            *(b + 3 * OS1_S1 + 64) = prefactor_y * *(b + 3 * OS1_S1 + 40) -
                                     p_over_q * *(b + 8 * OS1_S1 + 40);
            *(b + 3 * OS1_S1 + 65) =
                prefactor_x * *(b + 3 * OS1_S1 + 44) -
                p_over_q * *(b + 6 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 29);
            *(b + 3 * OS1_S1 + 66) = prefactor_x * *(b + 3 * OS1_S1 + 45) -
                                     p_over_q * *(b + 6 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 30);
            *(b + 3 * OS1_S1 + 67) = prefactor_z * *(b + 3 * OS1_S1 + 41) -
                                     p_over_q * *(b + 9 * OS1_S1 + 41) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 41);
            *(b + 3 * OS1_S1 + 68) = prefactor_y * *(b + 3 * OS1_S1 + 43) -
                                     p_over_q * *(b + 8 * OS1_S1 + 43) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 25);
            *(b + 3 * OS1_S1 + 69) = prefactor_y * *(b + 3 * OS1_S1 + 44) -
                                     p_over_q * *(b + 8 * OS1_S1 + 44);
            *(b + 3 * OS1_S1 + 70) = prefactor_x * *(b + 3 * OS1_S1 + 49) -
                                     p_over_q * *(b + 6 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 34);
            *(b + 3 * OS1_S1 + 71) = prefactor_x * *(b + 3 * OS1_S1 + 50) -
                                     p_over_q * *(b + 6 * OS1_S1 + 50);
            *(b + 3 * OS1_S1 + 72) = prefactor_x * *(b + 3 * OS1_S1 + 51) -
                                     p_over_q * *(b + 6 * OS1_S1 + 51);
            *(b + 3 * OS1_S1 + 73) = prefactor_x * *(b + 3 * OS1_S1 + 52) -
                                     p_over_q * *(b + 6 * OS1_S1 + 52);
            *(b + 3 * OS1_S1 + 74) = prefactor_x * *(b + 3 * OS1_S1 + 53) -
                                     p_over_q * *(b + 6 * OS1_S1 + 53);
            *(b + 3 * OS1_S1 + 75) = prefactor_y * *(b + 3 * OS1_S1 + 49) -
                                     p_over_q * *(b + 8 * OS1_S1 + 49);
            *(b + 3 * OS1_S1 + 76) = prefactor_x * *(b + 3 * OS1_S1 + 55) -
                                     p_over_q * *(b + 6 * OS1_S1 + 55);
            *(b + 3 * OS1_S1 + 77) =
                prefactor_y * *(b + 3 * OS1_S1 + 50) -
                p_over_q * *(b + 8 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 3 * OS1_S1 + 30);
            *(b + 3 * OS1_S1 + 78) = prefactor_z * *(b + 3 * OS1_S1 + 50) -
                                     p_over_q * *(b + 9 * OS1_S1 + 50) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 50);
            *(b + 3 * OS1_S1 + 79) = prefactor_z * *(b + 3 * OS1_S1 + 51) -
                                     p_over_q * *(b + 9 * OS1_S1 + 51) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 51) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 30);
            *(b + 3 * OS1_S1 + 80) =
                prefactor_y * *(b + 3 * OS1_S1 + 53) -
                p_over_q * *(b + 8 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 33);
            *(b + 3 * OS1_S1 + 81) = prefactor_y * *(b + 3 * OS1_S1 + 54) -
                                     p_over_q * *(b + 8 * OS1_S1 + 54) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 34);
            *(b + 3 * OS1_S1 + 82) = prefactor_y * *(b + 3 * OS1_S1 + 55) -
                                     p_over_q * *(b + 8 * OS1_S1 + 55);
            *(b + 3 * OS1_S1 + 83) =
                prefactor_z * *(b + 3 * OS1_S1 + 55) -
                p_over_q * *(b + 9 * OS1_S1 + 55) +
                one_over_two_q * *(b + 0 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 3 * OS1_S1 + 34);
            return;
        }
        void transfer_2_6(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 4 * OS1_S1 + 56) =
                prefactor_x * *(b + 4 * OS1_S1 + 35) -
                p_over_q * *(b + 10 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 4 * OS1_S1 + 20);
            *(b + 4 * OS1_S1 + 57) = prefactor_y * *(b + 4 * OS1_S1 + 35) -
                                     p_over_q * *(b + 11 * OS1_S1 + 35);
            *(b + 4 * OS1_S1 + 58) = prefactor_z * *(b + 4 * OS1_S1 + 35) -
                                     p_over_q * *(b + 12 * OS1_S1 + 35);
            *(b + 4 * OS1_S1 + 59) = prefactor_y * *(b + 4 * OS1_S1 + 36) -
                                     p_over_q * *(b + 11 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 20);
            *(b + 4 * OS1_S1 + 60) = prefactor_z * *(b + 4 * OS1_S1 + 36) -
                                     p_over_q * *(b + 12 * OS1_S1 + 36);
            *(b + 4 * OS1_S1 + 61) = prefactor_z * *(b + 4 * OS1_S1 + 37) -
                                     p_over_q * *(b + 12 * OS1_S1 + 37) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 20);
            *(b + 4 * OS1_S1 + 62) =
                prefactor_y * *(b + 4 * OS1_S1 + 38) -
                p_over_q * *(b + 11 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 21);
            *(b + 4 * OS1_S1 + 63) = prefactor_z * *(b + 4 * OS1_S1 + 38) -
                                     p_over_q * *(b + 12 * OS1_S1 + 38);
            *(b + 4 * OS1_S1 + 64) = prefactor_y * *(b + 4 * OS1_S1 + 40) -
                                     p_over_q * *(b + 11 * OS1_S1 + 40);
            *(b + 4 * OS1_S1 + 65) =
                prefactor_z * *(b + 4 * OS1_S1 + 40) -
                p_over_q * *(b + 12 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 22);
            *(b + 4 * OS1_S1 + 66) =
                prefactor_x * *(b + 4 * OS1_S1 + 45) -
                p_over_q * *(b + 10 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 45) +
                one_over_two_q * *(b + 4 * OS1_S1 + 30);
            *(b + 4 * OS1_S1 + 67) = prefactor_z * *(b + 4 * OS1_S1 + 41) -
                                     p_over_q * *(b + 12 * OS1_S1 + 41);
            *(b + 4 * OS1_S1 + 68) = prefactor_z * *(b + 4 * OS1_S1 + 42) -
                                     p_over_q * *(b + 12 * OS1_S1 + 42) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 23);
            *(b + 4 * OS1_S1 + 69) = prefactor_y * *(b + 4 * OS1_S1 + 44) -
                                     p_over_q * *(b + 11 * OS1_S1 + 44);
            *(b + 4 * OS1_S1 + 70) =
                prefactor_x * *(b + 4 * OS1_S1 + 49) -
                p_over_q * *(b + 10 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 49) +
                one_over_two_q * *(b + 4 * OS1_S1 + 34);
            *(b + 4 * OS1_S1 + 71) =
                prefactor_x * *(b + 4 * OS1_S1 + 50) -
                p_over_q * *(b + 10 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 50);
            *(b + 4 * OS1_S1 + 72) = prefactor_z * *(b + 4 * OS1_S1 + 45) -
                                     p_over_q * *(b + 12 * OS1_S1 + 45);
            *(b + 4 * OS1_S1 + 73) =
                prefactor_x * *(b + 4 * OS1_S1 + 52) -
                p_over_q * *(b + 10 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 52);
            *(b + 4 * OS1_S1 + 74) =
                prefactor_x * *(b + 4 * OS1_S1 + 53) -
                p_over_q * *(b + 10 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 53);
            *(b + 4 * OS1_S1 + 75) = prefactor_y * *(b + 4 * OS1_S1 + 49) -
                                     p_over_q * *(b + 11 * OS1_S1 + 49);
            *(b + 4 * OS1_S1 + 76) =
                prefactor_x * *(b + 4 * OS1_S1 + 55) -
                p_over_q * *(b + 10 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 55);
            *(b + 4 * OS1_S1 + 77) =
                prefactor_y * *(b + 4 * OS1_S1 + 50) -
                p_over_q * *(b + 11 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 4 * OS1_S1 + 30);
            *(b + 4 * OS1_S1 + 78) = prefactor_z * *(b + 4 * OS1_S1 + 50) -
                                     p_over_q * *(b + 12 * OS1_S1 + 50);
            *(b + 4 * OS1_S1 + 79) = prefactor_z * *(b + 4 * OS1_S1 + 51) -
                                     p_over_q * *(b + 12 * OS1_S1 + 51) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 30);
            *(b + 4 * OS1_S1 + 80) =
                prefactor_z * *(b + 4 * OS1_S1 + 52) -
                p_over_q * *(b + 12 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 31);
            *(b + 4 * OS1_S1 + 81) = prefactor_y * *(b + 4 * OS1_S1 + 54) -
                                     p_over_q * *(b + 11 * OS1_S1 + 54) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 34);
            *(b + 4 * OS1_S1 + 82) = prefactor_y * *(b + 4 * OS1_S1 + 55) -
                                     p_over_q * *(b + 11 * OS1_S1 + 55);
            *(b + 4 * OS1_S1 + 83) =
                prefactor_z * *(b + 4 * OS1_S1 + 55) -
                p_over_q * *(b + 12 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 4 * OS1_S1 + 34);
            *(b + 5 * OS1_S1 + 56) =
                prefactor_x * *(b + 5 * OS1_S1 + 35) -
                p_over_q * *(b + 11 * OS1_S1 + 35) +
                one_over_two_q * *(b + 2 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 5 * OS1_S1 + 20);
            *(b + 5 * OS1_S1 + 57) = prefactor_y * *(b + 5 * OS1_S1 + 35) -
                                     p_over_q * *(b + 13 * OS1_S1 + 35) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 35);
            *(b + 5 * OS1_S1 + 58) = prefactor_z * *(b + 5 * OS1_S1 + 35) -
                                     p_over_q * *(b + 14 * OS1_S1 + 35);
            *(b + 5 * OS1_S1 + 59) = prefactor_y * *(b + 5 * OS1_S1 + 36) -
                                     p_over_q * *(b + 13 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 20);
            *(b + 5 * OS1_S1 + 60) = prefactor_z * *(b + 5 * OS1_S1 + 36) -
                                     p_over_q * *(b + 14 * OS1_S1 + 36);
            *(b + 5 * OS1_S1 + 61) = prefactor_z * *(b + 5 * OS1_S1 + 37) -
                                     p_over_q * *(b + 14 * OS1_S1 + 37) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 20);
            *(b + 5 * OS1_S1 + 62) =
                prefactor_y * *(b + 5 * OS1_S1 + 38) -
                p_over_q * *(b + 13 * OS1_S1 + 38) +
                one_over_two_q * *(b + 1 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 21);
            *(b + 5 * OS1_S1 + 63) = prefactor_z * *(b + 5 * OS1_S1 + 38) -
                                     p_over_q * *(b + 14 * OS1_S1 + 38);
            *(b + 5 * OS1_S1 + 64) = prefactor_y * *(b + 5 * OS1_S1 + 40) -
                                     p_over_q * *(b + 13 * OS1_S1 + 40) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 40);
            *(b + 5 * OS1_S1 + 65) =
                prefactor_z * *(b + 5 * OS1_S1 + 40) -
                p_over_q * *(b + 14 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 22);
            *(b + 5 * OS1_S1 + 66) = prefactor_x * *(b + 5 * OS1_S1 + 45) -
                                     p_over_q * *(b + 11 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 30);
            *(b + 5 * OS1_S1 + 67) = prefactor_z * *(b + 5 * OS1_S1 + 41) -
                                     p_over_q * *(b + 14 * OS1_S1 + 41);
            *(b + 5 * OS1_S1 + 68) = prefactor_z * *(b + 5 * OS1_S1 + 42) -
                                     p_over_q * *(b + 14 * OS1_S1 + 42) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 23);
            *(b + 5 * OS1_S1 + 69) = prefactor_y * *(b + 5 * OS1_S1 + 44) -
                                     p_over_q * *(b + 13 * OS1_S1 + 44) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 44);
            *(b + 5 * OS1_S1 + 70) = prefactor_x * *(b + 5 * OS1_S1 + 49) -
                                     p_over_q * *(b + 11 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 34);
            *(b + 5 * OS1_S1 + 71) = prefactor_x * *(b + 5 * OS1_S1 + 50) -
                                     p_over_q * *(b + 11 * OS1_S1 + 50) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 50);
            *(b + 5 * OS1_S1 + 72) = prefactor_z * *(b + 5 * OS1_S1 + 45) -
                                     p_over_q * *(b + 14 * OS1_S1 + 45);
            *(b + 5 * OS1_S1 + 73) = prefactor_x * *(b + 5 * OS1_S1 + 52) -
                                     p_over_q * *(b + 11 * OS1_S1 + 52) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 52);
            *(b + 5 * OS1_S1 + 74) = prefactor_x * *(b + 5 * OS1_S1 + 53) -
                                     p_over_q * *(b + 11 * OS1_S1 + 53) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 53);
            *(b + 5 * OS1_S1 + 75) = prefactor_y * *(b + 5 * OS1_S1 + 49) -
                                     p_over_q * *(b + 13 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 49);
            *(b + 5 * OS1_S1 + 76) = prefactor_x * *(b + 5 * OS1_S1 + 55) -
                                     p_over_q * *(b + 11 * OS1_S1 + 55) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 55);
            *(b + 5 * OS1_S1 + 77) =
                prefactor_y * *(b + 5 * OS1_S1 + 50) -
                p_over_q * *(b + 13 * OS1_S1 + 50) +
                one_over_two_q * *(b + 1 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 5 * OS1_S1 + 30);
            *(b + 5 * OS1_S1 + 78) = prefactor_z * *(b + 5 * OS1_S1 + 50) -
                                     p_over_q * *(b + 14 * OS1_S1 + 50);
            *(b + 5 * OS1_S1 + 79) = prefactor_z * *(b + 5 * OS1_S1 + 51) -
                                     p_over_q * *(b + 14 * OS1_S1 + 51) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 30);
            *(b + 5 * OS1_S1 + 80) =
                prefactor_z * *(b + 5 * OS1_S1 + 52) -
                p_over_q * *(b + 14 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 31);
            *(b + 5 * OS1_S1 + 81) = prefactor_y * *(b + 5 * OS1_S1 + 54) -
                                     p_over_q * *(b + 13 * OS1_S1 + 54) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 54) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 34);
            *(b + 5 * OS1_S1 + 82) = prefactor_y * *(b + 5 * OS1_S1 + 55) -
                                     p_over_q * *(b + 13 * OS1_S1 + 55) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 55);
            *(b + 5 * OS1_S1 + 83) =
                prefactor_z * *(b + 5 * OS1_S1 + 55) -
                p_over_q * *(b + 14 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 5 * OS1_S1 + 34);
            *(b + 6 * OS1_S1 + 56) =
                prefactor_x * *(b + 6 * OS1_S1 + 35) -
                p_over_q * *(b + 12 * OS1_S1 + 35) +
                one_over_two_q * *(b + 3 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 6 * OS1_S1 + 20);
            *(b + 6 * OS1_S1 + 57) = prefactor_y * *(b + 6 * OS1_S1 + 35) -
                                     p_over_q * *(b + 14 * OS1_S1 + 35);
            *(b + 6 * OS1_S1 + 58) = prefactor_z * *(b + 6 * OS1_S1 + 35) -
                                     p_over_q * *(b + 15 * OS1_S1 + 35) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 35);
            *(b + 6 * OS1_S1 + 59) = prefactor_y * *(b + 6 * OS1_S1 + 36) -
                                     p_over_q * *(b + 14 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 20);
            *(b + 6 * OS1_S1 + 60) = prefactor_y * *(b + 6 * OS1_S1 + 37) -
                                     p_over_q * *(b + 14 * OS1_S1 + 37);
            *(b + 6 * OS1_S1 + 61) = prefactor_z * *(b + 6 * OS1_S1 + 37) -
                                     p_over_q * *(b + 15 * OS1_S1 + 37) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 37) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 20);
            *(b + 6 * OS1_S1 + 62) =
                prefactor_y * *(b + 6 * OS1_S1 + 38) -
                p_over_q * *(b + 14 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 21);
            *(b + 6 * OS1_S1 + 63) = prefactor_z * *(b + 6 * OS1_S1 + 38) -
                                     p_over_q * *(b + 15 * OS1_S1 + 38) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 38);
            *(b + 6 * OS1_S1 + 64) = prefactor_y * *(b + 6 * OS1_S1 + 40) -
                                     p_over_q * *(b + 14 * OS1_S1 + 40);
            *(b + 6 * OS1_S1 + 65) =
                prefactor_z * *(b + 6 * OS1_S1 + 40) -
                p_over_q * *(b + 15 * OS1_S1 + 40) +
                one_over_two_q * *(b + 1 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 22);
            *(b + 6 * OS1_S1 + 66) = prefactor_x * *(b + 6 * OS1_S1 + 45) -
                                     p_over_q * *(b + 12 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 30);
            *(b + 6 * OS1_S1 + 67) = prefactor_z * *(b + 6 * OS1_S1 + 41) -
                                     p_over_q * *(b + 15 * OS1_S1 + 41) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 41);
            *(b + 6 * OS1_S1 + 68) = prefactor_y * *(b + 6 * OS1_S1 + 43) -
                                     p_over_q * *(b + 14 * OS1_S1 + 43) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 25);
            *(b + 6 * OS1_S1 + 69) = prefactor_y * *(b + 6 * OS1_S1 + 44) -
                                     p_over_q * *(b + 14 * OS1_S1 + 44);
            *(b + 6 * OS1_S1 + 70) = prefactor_x * *(b + 6 * OS1_S1 + 49) -
                                     p_over_q * *(b + 12 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 34);
            *(b + 6 * OS1_S1 + 71) = prefactor_x * *(b + 6 * OS1_S1 + 50) -
                                     p_over_q * *(b + 12 * OS1_S1 + 50) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 50);
            *(b + 6 * OS1_S1 + 72) = prefactor_z * *(b + 6 * OS1_S1 + 45) -
                                     p_over_q * *(b + 15 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 45);
            *(b + 6 * OS1_S1 + 73) = prefactor_x * *(b + 6 * OS1_S1 + 52) -
                                     p_over_q * *(b + 12 * OS1_S1 + 52) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 52);
            *(b + 6 * OS1_S1 + 74) = prefactor_x * *(b + 6 * OS1_S1 + 53) -
                                     p_over_q * *(b + 12 * OS1_S1 + 53) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 53);
            *(b + 6 * OS1_S1 + 75) = prefactor_y * *(b + 6 * OS1_S1 + 49) -
                                     p_over_q * *(b + 14 * OS1_S1 + 49);
            *(b + 6 * OS1_S1 + 76) = prefactor_x * *(b + 6 * OS1_S1 + 55) -
                                     p_over_q * *(b + 12 * OS1_S1 + 55) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 55);
            *(b + 6 * OS1_S1 + 77) =
                prefactor_y * *(b + 6 * OS1_S1 + 50) -
                p_over_q * *(b + 14 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 6 * OS1_S1 + 30);
            *(b + 6 * OS1_S1 + 78) = prefactor_z * *(b + 6 * OS1_S1 + 50) -
                                     p_over_q * *(b + 15 * OS1_S1 + 50) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 50);
            *(b + 6 * OS1_S1 + 79) = prefactor_z * *(b + 6 * OS1_S1 + 51) -
                                     p_over_q * *(b + 15 * OS1_S1 + 51) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 51) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 30);
            *(b + 6 * OS1_S1 + 80) =
                prefactor_y * *(b + 6 * OS1_S1 + 53) -
                p_over_q * *(b + 14 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 33);
            *(b + 6 * OS1_S1 + 81) = prefactor_y * *(b + 6 * OS1_S1 + 54) -
                                     p_over_q * *(b + 14 * OS1_S1 + 54) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 34);
            *(b + 6 * OS1_S1 + 82) = prefactor_y * *(b + 6 * OS1_S1 + 55) -
                                     p_over_q * *(b + 14 * OS1_S1 + 55);
            *(b + 6 * OS1_S1 + 83) =
                prefactor_z * *(b + 6 * OS1_S1 + 55) -
                p_over_q * *(b + 15 * OS1_S1 + 55) +
                one_over_two_q * *(b + 1 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 6 * OS1_S1 + 34);
            *(b + 7 * OS1_S1 + 56) =
                prefactor_x * *(b + 7 * OS1_S1 + 35) -
                p_over_q * *(b + 13 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 7 * OS1_S1 + 20);
            *(b + 7 * OS1_S1 + 57) =
                prefactor_y * *(b + 7 * OS1_S1 + 35) -
                p_over_q * *(b + 16 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 35);
            *(b + 7 * OS1_S1 + 58) = prefactor_z * *(b + 7 * OS1_S1 + 35) -
                                     p_over_q * *(b + 17 * OS1_S1 + 35);
            *(b + 7 * OS1_S1 + 59) =
                prefactor_y * *(b + 7 * OS1_S1 + 36) -
                p_over_q * *(b + 16 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 36) +
                one_over_two_q * *(b + 7 * OS1_S1 + 20);
            *(b + 7 * OS1_S1 + 60) = prefactor_z * *(b + 7 * OS1_S1 + 36) -
                                     p_over_q * *(b + 17 * OS1_S1 + 36);
            *(b + 7 * OS1_S1 + 61) = prefactor_z * *(b + 7 * OS1_S1 + 37) -
                                     p_over_q * *(b + 17 * OS1_S1 + 37) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 20);
            *(b + 7 * OS1_S1 + 62) =
                prefactor_x * *(b + 7 * OS1_S1 + 41) -
                p_over_q * *(b + 13 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 26);
            *(b + 7 * OS1_S1 + 63) = prefactor_z * *(b + 7 * OS1_S1 + 38) -
                                     p_over_q * *(b + 17 * OS1_S1 + 38);
            *(b + 7 * OS1_S1 + 64) =
                prefactor_y * *(b + 7 * OS1_S1 + 40) -
                p_over_q * *(b + 16 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 40);
            *(b + 7 * OS1_S1 + 65) =
                prefactor_z * *(b + 7 * OS1_S1 + 40) -
                p_over_q * *(b + 17 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 22);
            *(b + 7 * OS1_S1 + 66) = prefactor_x * *(b + 7 * OS1_S1 + 45) -
                                     p_over_q * *(b + 13 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 30);
            *(b + 7 * OS1_S1 + 67) = prefactor_z * *(b + 7 * OS1_S1 + 41) -
                                     p_over_q * *(b + 17 * OS1_S1 + 41);
            *(b + 7 * OS1_S1 + 68) = prefactor_z * *(b + 7 * OS1_S1 + 42) -
                                     p_over_q * *(b + 17 * OS1_S1 + 42) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 23);
            *(b + 7 * OS1_S1 + 69) =
                prefactor_y * *(b + 7 * OS1_S1 + 44) -
                p_over_q * *(b + 16 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 44);
            *(b + 7 * OS1_S1 + 70) = prefactor_x * *(b + 7 * OS1_S1 + 49) -
                                     p_over_q * *(b + 13 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 34);
            *(b + 7 * OS1_S1 + 71) = prefactor_x * *(b + 7 * OS1_S1 + 50) -
                                     p_over_q * *(b + 13 * OS1_S1 + 50);
            *(b + 7 * OS1_S1 + 72) = prefactor_z * *(b + 7 * OS1_S1 + 45) -
                                     p_over_q * *(b + 17 * OS1_S1 + 45);
            *(b + 7 * OS1_S1 + 73) = prefactor_x * *(b + 7 * OS1_S1 + 52) -
                                     p_over_q * *(b + 13 * OS1_S1 + 52);
            *(b + 7 * OS1_S1 + 74) = prefactor_x * *(b + 7 * OS1_S1 + 53) -
                                     p_over_q * *(b + 13 * OS1_S1 + 53);
            *(b + 7 * OS1_S1 + 75) = prefactor_x * *(b + 7 * OS1_S1 + 54) -
                                     p_over_q * *(b + 13 * OS1_S1 + 54);
            *(b + 7 * OS1_S1 + 76) = prefactor_x * *(b + 7 * OS1_S1 + 55) -
                                     p_over_q * *(b + 13 * OS1_S1 + 55);
            *(b + 7 * OS1_S1 + 77) =
                prefactor_y * *(b + 7 * OS1_S1 + 50) -
                p_over_q * *(b + 16 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 7 * OS1_S1 + 30);
            *(b + 7 * OS1_S1 + 78) = prefactor_z * *(b + 7 * OS1_S1 + 50) -
                                     p_over_q * *(b + 17 * OS1_S1 + 50);
            *(b + 7 * OS1_S1 + 79) = prefactor_z * *(b + 7 * OS1_S1 + 51) -
                                     p_over_q * *(b + 17 * OS1_S1 + 51) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 30);
            *(b + 7 * OS1_S1 + 80) =
                prefactor_z * *(b + 7 * OS1_S1 + 52) -
                p_over_q * *(b + 17 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 31);
            *(b + 7 * OS1_S1 + 81) =
                prefactor_y * *(b + 7 * OS1_S1 + 54) -
                p_over_q * *(b + 16 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 54) +
                one_over_two_q * *(b + 7 * OS1_S1 + 34);
            *(b + 7 * OS1_S1 + 82) =
                prefactor_y * *(b + 7 * OS1_S1 + 55) -
                p_over_q * *(b + 16 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 55);
            *(b + 7 * OS1_S1 + 83) =
                prefactor_z * *(b + 7 * OS1_S1 + 55) -
                p_over_q * *(b + 17 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 7 * OS1_S1 + 34);
            *(b + 8 * OS1_S1 + 56) =
                prefactor_x * *(b + 8 * OS1_S1 + 35) -
                p_over_q * *(b + 14 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 8 * OS1_S1 + 20);
            *(b + 8 * OS1_S1 + 57) = prefactor_y * *(b + 8 * OS1_S1 + 35) -
                                     p_over_q * *(b + 17 * OS1_S1 + 35) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 35);
            *(b + 8 * OS1_S1 + 58) = prefactor_z * *(b + 8 * OS1_S1 + 35) -
                                     p_over_q * *(b + 18 * OS1_S1 + 35) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 35);
            *(b + 8 * OS1_S1 + 59) = prefactor_y * *(b + 8 * OS1_S1 + 36) -
                                     p_over_q * *(b + 17 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 20);
            *(b + 8 * OS1_S1 + 60) = prefactor_z * *(b + 8 * OS1_S1 + 36) -
                                     p_over_q * *(b + 18 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 36);
            *(b + 8 * OS1_S1 + 61) = prefactor_z * *(b + 8 * OS1_S1 + 37) -
                                     p_over_q * *(b + 18 * OS1_S1 + 37) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 37) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 20);
            *(b + 8 * OS1_S1 + 62) =
                prefactor_x * *(b + 8 * OS1_S1 + 41) -
                p_over_q * *(b + 14 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 26);
            *(b + 8 * OS1_S1 + 63) = prefactor_z * *(b + 8 * OS1_S1 + 38) -
                                     p_over_q * *(b + 18 * OS1_S1 + 38) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 38);
            *(b + 8 * OS1_S1 + 64) = prefactor_y * *(b + 8 * OS1_S1 + 40) -
                                     p_over_q * *(b + 17 * OS1_S1 + 40) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 40);
            *(b + 8 * OS1_S1 + 65) =
                prefactor_x * *(b + 8 * OS1_S1 + 44) -
                p_over_q * *(b + 14 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 29);
            *(b + 8 * OS1_S1 + 66) = prefactor_x * *(b + 8 * OS1_S1 + 45) -
                                     p_over_q * *(b + 14 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 30);
            *(b + 8 * OS1_S1 + 67) = prefactor_z * *(b + 8 * OS1_S1 + 41) -
                                     p_over_q * *(b + 18 * OS1_S1 + 41) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 41);
            *(b + 8 * OS1_S1 + 68) = prefactor_x * *(b + 8 * OS1_S1 + 47) -
                                     p_over_q * *(b + 14 * OS1_S1 + 47) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 32);
            *(b + 8 * OS1_S1 + 69) = prefactor_y * *(b + 8 * OS1_S1 + 44) -
                                     p_over_q * *(b + 17 * OS1_S1 + 44) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 44);
            *(b + 8 * OS1_S1 + 70) = prefactor_x * *(b + 8 * OS1_S1 + 49) -
                                     p_over_q * *(b + 14 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 34);
            *(b + 8 * OS1_S1 + 71) = prefactor_x * *(b + 8 * OS1_S1 + 50) -
                                     p_over_q * *(b + 14 * OS1_S1 + 50);
            *(b + 8 * OS1_S1 + 72) = prefactor_x * *(b + 8 * OS1_S1 + 51) -
                                     p_over_q * *(b + 14 * OS1_S1 + 51);
            *(b + 8 * OS1_S1 + 73) = prefactor_x * *(b + 8 * OS1_S1 + 52) -
                                     p_over_q * *(b + 14 * OS1_S1 + 52);
            *(b + 8 * OS1_S1 + 74) = prefactor_x * *(b + 8 * OS1_S1 + 53) -
                                     p_over_q * *(b + 14 * OS1_S1 + 53);
            *(b + 8 * OS1_S1 + 75) = prefactor_x * *(b + 8 * OS1_S1 + 54) -
                                     p_over_q * *(b + 14 * OS1_S1 + 54);
            *(b + 8 * OS1_S1 + 76) = prefactor_x * *(b + 8 * OS1_S1 + 55) -
                                     p_over_q * *(b + 14 * OS1_S1 + 55);
            *(b + 8 * OS1_S1 + 77) =
                prefactor_y * *(b + 8 * OS1_S1 + 50) -
                p_over_q * *(b + 17 * OS1_S1 + 50) +
                one_over_two_q * *(b + 3 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 8 * OS1_S1 + 30);
            *(b + 8 * OS1_S1 + 78) = prefactor_z * *(b + 8 * OS1_S1 + 50) -
                                     p_over_q * *(b + 18 * OS1_S1 + 50) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 50);
            *(b + 8 * OS1_S1 + 79) = prefactor_z * *(b + 8 * OS1_S1 + 51) -
                                     p_over_q * *(b + 18 * OS1_S1 + 51) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 51) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 30);
            *(b + 8 * OS1_S1 + 80) =
                prefactor_z * *(b + 8 * OS1_S1 + 52) -
                p_over_q * *(b + 18 * OS1_S1 + 52) +
                one_over_two_q * *(b + 2 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 31);
            *(b + 8 * OS1_S1 + 81) = prefactor_y * *(b + 8 * OS1_S1 + 54) -
                                     p_over_q * *(b + 17 * OS1_S1 + 54) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 54) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 34);
            *(b + 8 * OS1_S1 + 82) = prefactor_y * *(b + 8 * OS1_S1 + 55) -
                                     p_over_q * *(b + 17 * OS1_S1 + 55) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 55);
            *(b + 8 * OS1_S1 + 83) =
                prefactor_z * *(b + 8 * OS1_S1 + 55) -
                p_over_q * *(b + 18 * OS1_S1 + 55) +
                one_over_two_q * *(b + 2 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 8 * OS1_S1 + 34);
            *(b + 9 * OS1_S1 + 56) =
                prefactor_x * *(b + 9 * OS1_S1 + 35) -
                p_over_q * *(b + 15 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 9 * OS1_S1 + 20);
            *(b + 9 * OS1_S1 + 57) = prefactor_y * *(b + 9 * OS1_S1 + 35) -
                                     p_over_q * *(b + 18 * OS1_S1 + 35);
            *(b + 9 * OS1_S1 + 58) =
                prefactor_z * *(b + 9 * OS1_S1 + 35) -
                p_over_q * *(b + 19 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 35);
            *(b + 9 * OS1_S1 + 59) = prefactor_y * *(b + 9 * OS1_S1 + 36) -
                                     p_over_q * *(b + 18 * OS1_S1 + 36) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 20);
            *(b + 9 * OS1_S1 + 60) = prefactor_y * *(b + 9 * OS1_S1 + 37) -
                                     p_over_q * *(b + 18 * OS1_S1 + 37);
            *(b + 9 * OS1_S1 + 61) =
                prefactor_z * *(b + 9 * OS1_S1 + 37) -
                p_over_q * *(b + 19 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 37) +
                one_over_two_q * *(b + 9 * OS1_S1 + 20);
            *(b + 9 * OS1_S1 + 62) =
                prefactor_y * *(b + 9 * OS1_S1 + 38) -
                p_over_q * *(b + 18 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 21);
            *(b + 9 * OS1_S1 + 63) =
                prefactor_z * *(b + 9 * OS1_S1 + 38) -
                p_over_q * *(b + 19 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 38);
            *(b + 9 * OS1_S1 + 64) = prefactor_y * *(b + 9 * OS1_S1 + 40) -
                                     p_over_q * *(b + 18 * OS1_S1 + 40);
            *(b + 9 * OS1_S1 + 65) =
                prefactor_x * *(b + 9 * OS1_S1 + 44) -
                p_over_q * *(b + 15 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 29);
            *(b + 9 * OS1_S1 + 66) = prefactor_x * *(b + 9 * OS1_S1 + 45) -
                                     p_over_q * *(b + 15 * OS1_S1 + 45) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 30);
            *(b + 9 * OS1_S1 + 67) =
                prefactor_z * *(b + 9 * OS1_S1 + 41) -
                p_over_q * *(b + 19 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 41);
            *(b + 9 * OS1_S1 + 68) = prefactor_y * *(b + 9 * OS1_S1 + 43) -
                                     p_over_q * *(b + 18 * OS1_S1 + 43) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 25);
            *(b + 9 * OS1_S1 + 69) = prefactor_y * *(b + 9 * OS1_S1 + 44) -
                                     p_over_q * *(b + 18 * OS1_S1 + 44);
            *(b + 9 * OS1_S1 + 70) = prefactor_x * *(b + 9 * OS1_S1 + 49) -
                                     p_over_q * *(b + 15 * OS1_S1 + 49) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 34);
            *(b + 9 * OS1_S1 + 71) = prefactor_x * *(b + 9 * OS1_S1 + 50) -
                                     p_over_q * *(b + 15 * OS1_S1 + 50);
            *(b + 9 * OS1_S1 + 72) = prefactor_x * *(b + 9 * OS1_S1 + 51) -
                                     p_over_q * *(b + 15 * OS1_S1 + 51);
            *(b + 9 * OS1_S1 + 73) = prefactor_x * *(b + 9 * OS1_S1 + 52) -
                                     p_over_q * *(b + 15 * OS1_S1 + 52);
            *(b + 9 * OS1_S1 + 74) = prefactor_x * *(b + 9 * OS1_S1 + 53) -
                                     p_over_q * *(b + 15 * OS1_S1 + 53);
            *(b + 9 * OS1_S1 + 75) = prefactor_y * *(b + 9 * OS1_S1 + 49) -
                                     p_over_q * *(b + 18 * OS1_S1 + 49);
            *(b + 9 * OS1_S1 + 76) = prefactor_x * *(b + 9 * OS1_S1 + 55) -
                                     p_over_q * *(b + 15 * OS1_S1 + 55);
            *(b + 9 * OS1_S1 + 77) =
                prefactor_y * *(b + 9 * OS1_S1 + 50) -
                p_over_q * *(b + 18 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 9 * OS1_S1 + 30);
            *(b + 9 * OS1_S1 + 78) =
                prefactor_z * *(b + 9 * OS1_S1 + 50) -
                p_over_q * *(b + 19 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 50);
            *(b + 9 * OS1_S1 + 79) =
                prefactor_z * *(b + 9 * OS1_S1 + 51) -
                p_over_q * *(b + 19 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 51) +
                one_over_two_q * *(b + 9 * OS1_S1 + 30);
            *(b + 9 * OS1_S1 + 80) =
                prefactor_y * *(b + 9 * OS1_S1 + 53) -
                p_over_q * *(b + 18 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 33);
            *(b + 9 * OS1_S1 + 81) = prefactor_y * *(b + 9 * OS1_S1 + 54) -
                                     p_over_q * *(b + 18 * OS1_S1 + 54) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 34);
            *(b + 9 * OS1_S1 + 82) = prefactor_y * *(b + 9 * OS1_S1 + 55) -
                                     p_over_q * *(b + 18 * OS1_S1 + 55);
            *(b + 9 * OS1_S1 + 83) =
                prefactor_z * *(b + 9 * OS1_S1 + 55) -
                p_over_q * *(b + 19 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 9 * OS1_S1 + 34);
            return;
        }
        void transfer_3_6(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 10 * OS1_S1 + 56) =
                prefactor_x * *(b + 10 * OS1_S1 + 35) -
                p_over_q * *(b + 20 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 10 * OS1_S1 + 20);
            *(b + 10 * OS1_S1 + 57) = prefactor_y * *(b + 10 * OS1_S1 + 35) -
                                      p_over_q * *(b + 21 * OS1_S1 + 35);
            *(b + 10 * OS1_S1 + 58) = prefactor_z * *(b + 10 * OS1_S1 + 35) -
                                      p_over_q * *(b + 22 * OS1_S1 + 35);
            *(b + 10 * OS1_S1 + 59) = prefactor_y * *(b + 10 * OS1_S1 + 36) -
                                      p_over_q * *(b + 21 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 20);
            *(b + 10 * OS1_S1 + 60) = prefactor_z * *(b + 10 * OS1_S1 + 36) -
                                      p_over_q * *(b + 22 * OS1_S1 + 36);
            *(b + 10 * OS1_S1 + 61) = prefactor_z * *(b + 10 * OS1_S1 + 37) -
                                      p_over_q * *(b + 22 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 20);
            *(b + 10 * OS1_S1 + 62) =
                prefactor_y * *(b + 10 * OS1_S1 + 38) -
                p_over_q * *(b + 21 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 21);
            *(b + 10 * OS1_S1 + 63) = prefactor_z * *(b + 10 * OS1_S1 + 38) -
                                      p_over_q * *(b + 22 * OS1_S1 + 38);
            *(b + 10 * OS1_S1 + 64) = prefactor_y * *(b + 10 * OS1_S1 + 40) -
                                      p_over_q * *(b + 21 * OS1_S1 + 40);
            *(b + 10 * OS1_S1 + 65) =
                prefactor_z * *(b + 10 * OS1_S1 + 40) -
                p_over_q * *(b + 22 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 22);
            *(b + 10 * OS1_S1 + 66) =
                prefactor_x * *(b + 10 * OS1_S1 + 45) -
                p_over_q * *(b + 20 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 45) +
                one_over_two_q * *(b + 10 * OS1_S1 + 30);
            *(b + 10 * OS1_S1 + 67) = prefactor_z * *(b + 10 * OS1_S1 + 41) -
                                      p_over_q * *(b + 22 * OS1_S1 + 41);
            *(b + 10 * OS1_S1 + 68) = prefactor_z * *(b + 10 * OS1_S1 + 42) -
                                      p_over_q * *(b + 22 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 23);
            *(b + 10 * OS1_S1 + 69) = prefactor_y * *(b + 10 * OS1_S1 + 44) -
                                      p_over_q * *(b + 21 * OS1_S1 + 44);
            *(b + 10 * OS1_S1 + 70) =
                prefactor_x * *(b + 10 * OS1_S1 + 49) -
                p_over_q * *(b + 20 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 49) +
                one_over_two_q * *(b + 10 * OS1_S1 + 34);
            *(b + 10 * OS1_S1 + 71) =
                prefactor_x * *(b + 10 * OS1_S1 + 50) -
                p_over_q * *(b + 20 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 50);
            *(b + 10 * OS1_S1 + 72) = prefactor_z * *(b + 10 * OS1_S1 + 45) -
                                      p_over_q * *(b + 22 * OS1_S1 + 45);
            *(b + 10 * OS1_S1 + 73) =
                prefactor_x * *(b + 10 * OS1_S1 + 52) -
                p_over_q * *(b + 20 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 52);
            *(b + 10 * OS1_S1 + 74) =
                prefactor_x * *(b + 10 * OS1_S1 + 53) -
                p_over_q * *(b + 20 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 53);
            *(b + 10 * OS1_S1 + 75) = prefactor_y * *(b + 10 * OS1_S1 + 49) -
                                      p_over_q * *(b + 21 * OS1_S1 + 49);
            *(b + 10 * OS1_S1 + 76) =
                prefactor_x * *(b + 10 * OS1_S1 + 55) -
                p_over_q * *(b + 20 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 55);
            *(b + 10 * OS1_S1 + 77) =
                prefactor_y * *(b + 10 * OS1_S1 + 50) -
                p_over_q * *(b + 21 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 10 * OS1_S1 + 30);
            *(b + 10 * OS1_S1 + 78) = prefactor_z * *(b + 10 * OS1_S1 + 50) -
                                      p_over_q * *(b + 22 * OS1_S1 + 50);
            *(b + 10 * OS1_S1 + 79) = prefactor_z * *(b + 10 * OS1_S1 + 51) -
                                      p_over_q * *(b + 22 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 30);
            *(b + 10 * OS1_S1 + 80) =
                prefactor_z * *(b + 10 * OS1_S1 + 52) -
                p_over_q * *(b + 22 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 31);
            *(b + 10 * OS1_S1 + 81) = prefactor_y * *(b + 10 * OS1_S1 + 54) -
                                      p_over_q * *(b + 21 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 34);
            *(b + 10 * OS1_S1 + 82) = prefactor_y * *(b + 10 * OS1_S1 + 55) -
                                      p_over_q * *(b + 21 * OS1_S1 + 55);
            *(b + 10 * OS1_S1 + 83) =
                prefactor_z * *(b + 10 * OS1_S1 + 55) -
                p_over_q * *(b + 22 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 10 * OS1_S1 + 34);
            *(b + 11 * OS1_S1 + 56) =
                prefactor_x * *(b + 11 * OS1_S1 + 35) -
                p_over_q * *(b + 21 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 11 * OS1_S1 + 20);
            *(b + 11 * OS1_S1 + 57) = prefactor_y * *(b + 11 * OS1_S1 + 35) -
                                      p_over_q * *(b + 23 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 35);
            *(b + 11 * OS1_S1 + 58) = prefactor_z * *(b + 11 * OS1_S1 + 35) -
                                      p_over_q * *(b + 24 * OS1_S1 + 35);
            *(b + 11 * OS1_S1 + 59) = prefactor_y * *(b + 11 * OS1_S1 + 36) -
                                      p_over_q * *(b + 23 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 20);
            *(b + 11 * OS1_S1 + 60) = prefactor_z * *(b + 11 * OS1_S1 + 36) -
                                      p_over_q * *(b + 24 * OS1_S1 + 36);
            *(b + 11 * OS1_S1 + 61) = prefactor_z * *(b + 11 * OS1_S1 + 37) -
                                      p_over_q * *(b + 24 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 20);
            *(b + 11 * OS1_S1 + 62) =
                prefactor_y * *(b + 11 * OS1_S1 + 38) -
                p_over_q * *(b + 23 * OS1_S1 + 38) +
                one_over_two_q * *(b + 4 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 21);
            *(b + 11 * OS1_S1 + 63) = prefactor_z * *(b + 11 * OS1_S1 + 38) -
                                      p_over_q * *(b + 24 * OS1_S1 + 38);
            *(b + 11 * OS1_S1 + 64) = prefactor_y * *(b + 11 * OS1_S1 + 40) -
                                      p_over_q * *(b + 23 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 40);
            *(b + 11 * OS1_S1 + 65) =
                prefactor_z * *(b + 11 * OS1_S1 + 40) -
                p_over_q * *(b + 24 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 22);
            *(b + 11 * OS1_S1 + 66) =
                prefactor_x * *(b + 11 * OS1_S1 + 45) -
                p_over_q * *(b + 21 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 45) +
                one_over_two_q * *(b + 11 * OS1_S1 + 30);
            *(b + 11 * OS1_S1 + 67) = prefactor_z * *(b + 11 * OS1_S1 + 41) -
                                      p_over_q * *(b + 24 * OS1_S1 + 41);
            *(b + 11 * OS1_S1 + 68) = prefactor_z * *(b + 11 * OS1_S1 + 42) -
                                      p_over_q * *(b + 24 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 23);
            *(b + 11 * OS1_S1 + 69) = prefactor_y * *(b + 11 * OS1_S1 + 44) -
                                      p_over_q * *(b + 23 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 44);
            *(b + 11 * OS1_S1 + 70) =
                prefactor_x * *(b + 11 * OS1_S1 + 49) -
                p_over_q * *(b + 21 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 49) +
                one_over_two_q * *(b + 11 * OS1_S1 + 34);
            *(b + 11 * OS1_S1 + 71) =
                prefactor_x * *(b + 11 * OS1_S1 + 50) -
                p_over_q * *(b + 21 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 50);
            *(b + 11 * OS1_S1 + 72) = prefactor_z * *(b + 11 * OS1_S1 + 45) -
                                      p_over_q * *(b + 24 * OS1_S1 + 45);
            *(b + 11 * OS1_S1 + 73) =
                prefactor_x * *(b + 11 * OS1_S1 + 52) -
                p_over_q * *(b + 21 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 52);
            *(b + 11 * OS1_S1 + 74) =
                prefactor_x * *(b + 11 * OS1_S1 + 53) -
                p_over_q * *(b + 21 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 53);
            *(b + 11 * OS1_S1 + 75) = prefactor_y * *(b + 11 * OS1_S1 + 49) -
                                      p_over_q * *(b + 23 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 49);
            *(b + 11 * OS1_S1 + 76) =
                prefactor_x * *(b + 11 * OS1_S1 + 55) -
                p_over_q * *(b + 21 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 55);
            *(b + 11 * OS1_S1 + 77) =
                prefactor_y * *(b + 11 * OS1_S1 + 50) -
                p_over_q * *(b + 23 * OS1_S1 + 50) +
                one_over_two_q * *(b + 4 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 11 * OS1_S1 + 30);
            *(b + 11 * OS1_S1 + 78) = prefactor_z * *(b + 11 * OS1_S1 + 50) -
                                      p_over_q * *(b + 24 * OS1_S1 + 50);
            *(b + 11 * OS1_S1 + 79) = prefactor_z * *(b + 11 * OS1_S1 + 51) -
                                      p_over_q * *(b + 24 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 30);
            *(b + 11 * OS1_S1 + 80) =
                prefactor_z * *(b + 11 * OS1_S1 + 52) -
                p_over_q * *(b + 24 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 31);
            *(b + 11 * OS1_S1 + 81) = prefactor_y * *(b + 11 * OS1_S1 + 54) -
                                      p_over_q * *(b + 23 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 34);
            *(b + 11 * OS1_S1 + 82) = prefactor_y * *(b + 11 * OS1_S1 + 55) -
                                      p_over_q * *(b + 23 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 55);
            *(b + 11 * OS1_S1 + 83) =
                prefactor_z * *(b + 11 * OS1_S1 + 55) -
                p_over_q * *(b + 24 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 11 * OS1_S1 + 34);
            *(b + 12 * OS1_S1 + 56) =
                prefactor_x * *(b + 12 * OS1_S1 + 35) -
                p_over_q * *(b + 22 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 12 * OS1_S1 + 20);
            *(b + 12 * OS1_S1 + 57) = prefactor_y * *(b + 12 * OS1_S1 + 35) -
                                      p_over_q * *(b + 24 * OS1_S1 + 35);
            *(b + 12 * OS1_S1 + 58) = prefactor_z * *(b + 12 * OS1_S1 + 35) -
                                      p_over_q * *(b + 25 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 35);
            *(b + 12 * OS1_S1 + 59) = prefactor_y * *(b + 12 * OS1_S1 + 36) -
                                      p_over_q * *(b + 24 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 20);
            *(b + 12 * OS1_S1 + 60) = prefactor_y * *(b + 12 * OS1_S1 + 37) -
                                      p_over_q * *(b + 24 * OS1_S1 + 37);
            *(b + 12 * OS1_S1 + 61) = prefactor_z * *(b + 12 * OS1_S1 + 37) -
                                      p_over_q * *(b + 25 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 20);
            *(b + 12 * OS1_S1 + 62) =
                prefactor_y * *(b + 12 * OS1_S1 + 38) -
                p_over_q * *(b + 24 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 21);
            *(b + 12 * OS1_S1 + 63) = prefactor_z * *(b + 12 * OS1_S1 + 38) -
                                      p_over_q * *(b + 25 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 38);
            *(b + 12 * OS1_S1 + 64) = prefactor_y * *(b + 12 * OS1_S1 + 40) -
                                      p_over_q * *(b + 24 * OS1_S1 + 40);
            *(b + 12 * OS1_S1 + 65) =
                prefactor_z * *(b + 12 * OS1_S1 + 40) -
                p_over_q * *(b + 25 * OS1_S1 + 40) +
                one_over_two_q * *(b + 4 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 22);
            *(b + 12 * OS1_S1 + 66) =
                prefactor_x * *(b + 12 * OS1_S1 + 45) -
                p_over_q * *(b + 22 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 45) +
                one_over_two_q * *(b + 12 * OS1_S1 + 30);
            *(b + 12 * OS1_S1 + 67) = prefactor_z * *(b + 12 * OS1_S1 + 41) -
                                      p_over_q * *(b + 25 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 41);
            *(b + 12 * OS1_S1 + 68) = prefactor_y * *(b + 12 * OS1_S1 + 43) -
                                      p_over_q * *(b + 24 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 25);
            *(b + 12 * OS1_S1 + 69) = prefactor_y * *(b + 12 * OS1_S1 + 44) -
                                      p_over_q * *(b + 24 * OS1_S1 + 44);
            *(b + 12 * OS1_S1 + 70) =
                prefactor_x * *(b + 12 * OS1_S1 + 49) -
                p_over_q * *(b + 22 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 49) +
                one_over_two_q * *(b + 12 * OS1_S1 + 34);
            *(b + 12 * OS1_S1 + 71) =
                prefactor_x * *(b + 12 * OS1_S1 + 50) -
                p_over_q * *(b + 22 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 50);
            *(b + 12 * OS1_S1 + 72) = prefactor_z * *(b + 12 * OS1_S1 + 45) -
                                      p_over_q * *(b + 25 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 45);
            *(b + 12 * OS1_S1 + 73) =
                prefactor_x * *(b + 12 * OS1_S1 + 52) -
                p_over_q * *(b + 22 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 52);
            *(b + 12 * OS1_S1 + 74) =
                prefactor_x * *(b + 12 * OS1_S1 + 53) -
                p_over_q * *(b + 22 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 53);
            *(b + 12 * OS1_S1 + 75) = prefactor_y * *(b + 12 * OS1_S1 + 49) -
                                      p_over_q * *(b + 24 * OS1_S1 + 49);
            *(b + 12 * OS1_S1 + 76) =
                prefactor_x * *(b + 12 * OS1_S1 + 55) -
                p_over_q * *(b + 22 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 55);
            *(b + 12 * OS1_S1 + 77) =
                prefactor_y * *(b + 12 * OS1_S1 + 50) -
                p_over_q * *(b + 24 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 12 * OS1_S1 + 30);
            *(b + 12 * OS1_S1 + 78) = prefactor_z * *(b + 12 * OS1_S1 + 50) -
                                      p_over_q * *(b + 25 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 50);
            *(b + 12 * OS1_S1 + 79) = prefactor_z * *(b + 12 * OS1_S1 + 51) -
                                      p_over_q * *(b + 25 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 30);
            *(b + 12 * OS1_S1 + 80) =
                prefactor_y * *(b + 12 * OS1_S1 + 53) -
                p_over_q * *(b + 24 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 33);
            *(b + 12 * OS1_S1 + 81) = prefactor_y * *(b + 12 * OS1_S1 + 54) -
                                      p_over_q * *(b + 24 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 34);
            *(b + 12 * OS1_S1 + 82) = prefactor_y * *(b + 12 * OS1_S1 + 55) -
                                      p_over_q * *(b + 24 * OS1_S1 + 55);
            *(b + 12 * OS1_S1 + 83) =
                prefactor_z * *(b + 12 * OS1_S1 + 55) -
                p_over_q * *(b + 25 * OS1_S1 + 55) +
                one_over_two_q * *(b + 4 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 12 * OS1_S1 + 34);
            *(b + 13 * OS1_S1 + 56) =
                prefactor_x * *(b + 13 * OS1_S1 + 35) -
                p_over_q * *(b + 23 * OS1_S1 + 35) +
                one_over_two_q * *(b + 7 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 13 * OS1_S1 + 20);
            *(b + 13 * OS1_S1 + 57) =
                prefactor_y * *(b + 13 * OS1_S1 + 35) -
                p_over_q * *(b + 26 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 35);
            *(b + 13 * OS1_S1 + 58) = prefactor_z * *(b + 13 * OS1_S1 + 35) -
                                      p_over_q * *(b + 27 * OS1_S1 + 35);
            *(b + 13 * OS1_S1 + 59) =
                prefactor_y * *(b + 13 * OS1_S1 + 36) -
                p_over_q * *(b + 26 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 36) +
                one_over_two_q * *(b + 13 * OS1_S1 + 20);
            *(b + 13 * OS1_S1 + 60) = prefactor_z * *(b + 13 * OS1_S1 + 36) -
                                      p_over_q * *(b + 27 * OS1_S1 + 36);
            *(b + 13 * OS1_S1 + 61) = prefactor_z * *(b + 13 * OS1_S1 + 37) -
                                      p_over_q * *(b + 27 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 20);
            *(b + 13 * OS1_S1 + 62) =
                prefactor_x * *(b + 13 * OS1_S1 + 41) -
                p_over_q * *(b + 23 * OS1_S1 + 41) +
                one_over_two_q * *(b + 7 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 26);
            *(b + 13 * OS1_S1 + 63) = prefactor_z * *(b + 13 * OS1_S1 + 38) -
                                      p_over_q * *(b + 27 * OS1_S1 + 38);
            *(b + 13 * OS1_S1 + 64) =
                prefactor_y * *(b + 13 * OS1_S1 + 40) -
                p_over_q * *(b + 26 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 40);
            *(b + 13 * OS1_S1 + 65) =
                prefactor_z * *(b + 13 * OS1_S1 + 40) -
                p_over_q * *(b + 27 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 22);
            *(b + 13 * OS1_S1 + 66) = prefactor_x * *(b + 13 * OS1_S1 + 45) -
                                      p_over_q * *(b + 23 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 30);
            *(b + 13 * OS1_S1 + 67) = prefactor_z * *(b + 13 * OS1_S1 + 41) -
                                      p_over_q * *(b + 27 * OS1_S1 + 41);
            *(b + 13 * OS1_S1 + 68) = prefactor_z * *(b + 13 * OS1_S1 + 42) -
                                      p_over_q * *(b + 27 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 23);
            *(b + 13 * OS1_S1 + 69) =
                prefactor_y * *(b + 13 * OS1_S1 + 44) -
                p_over_q * *(b + 26 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 44);
            *(b + 13 * OS1_S1 + 70) = prefactor_x * *(b + 13 * OS1_S1 + 49) -
                                      p_over_q * *(b + 23 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 34);
            *(b + 13 * OS1_S1 + 71) = prefactor_x * *(b + 13 * OS1_S1 + 50) -
                                      p_over_q * *(b + 23 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 50);
            *(b + 13 * OS1_S1 + 72) = prefactor_z * *(b + 13 * OS1_S1 + 45) -
                                      p_over_q * *(b + 27 * OS1_S1 + 45);
            *(b + 13 * OS1_S1 + 73) = prefactor_x * *(b + 13 * OS1_S1 + 52) -
                                      p_over_q * *(b + 23 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 52);
            *(b + 13 * OS1_S1 + 74) = prefactor_x * *(b + 13 * OS1_S1 + 53) -
                                      p_over_q * *(b + 23 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 53);
            *(b + 13 * OS1_S1 + 75) = prefactor_x * *(b + 13 * OS1_S1 + 54) -
                                      p_over_q * *(b + 23 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 54);
            *(b + 13 * OS1_S1 + 76) = prefactor_x * *(b + 13 * OS1_S1 + 55) -
                                      p_over_q * *(b + 23 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 55);
            *(b + 13 * OS1_S1 + 77) =
                prefactor_y * *(b + 13 * OS1_S1 + 50) -
                p_over_q * *(b + 26 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 13 * OS1_S1 + 30);
            *(b + 13 * OS1_S1 + 78) = prefactor_z * *(b + 13 * OS1_S1 + 50) -
                                      p_over_q * *(b + 27 * OS1_S1 + 50);
            *(b + 13 * OS1_S1 + 79) = prefactor_z * *(b + 13 * OS1_S1 + 51) -
                                      p_over_q * *(b + 27 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 30);
            *(b + 13 * OS1_S1 + 80) =
                prefactor_z * *(b + 13 * OS1_S1 + 52) -
                p_over_q * *(b + 27 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 31);
            *(b + 13 * OS1_S1 + 81) =
                prefactor_y * *(b + 13 * OS1_S1 + 54) -
                p_over_q * *(b + 26 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 54) +
                one_over_two_q * *(b + 13 * OS1_S1 + 34);
            *(b + 13 * OS1_S1 + 82) =
                prefactor_y * *(b + 13 * OS1_S1 + 55) -
                p_over_q * *(b + 26 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 55);
            *(b + 13 * OS1_S1 + 83) =
                prefactor_z * *(b + 13 * OS1_S1 + 55) -
                p_over_q * *(b + 27 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 13 * OS1_S1 + 34);
            *(b + 14 * OS1_S1 + 56) =
                prefactor_x * *(b + 14 * OS1_S1 + 35) -
                p_over_q * *(b + 24 * OS1_S1 + 35) +
                one_over_two_q * *(b + 8 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 14 * OS1_S1 + 20);
            *(b + 14 * OS1_S1 + 57) = prefactor_y * *(b + 14 * OS1_S1 + 35) -
                                      p_over_q * *(b + 27 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 35);
            *(b + 14 * OS1_S1 + 58) = prefactor_z * *(b + 14 * OS1_S1 + 35) -
                                      p_over_q * *(b + 28 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 35);
            *(b + 14 * OS1_S1 + 59) = prefactor_y * *(b + 14 * OS1_S1 + 36) -
                                      p_over_q * *(b + 27 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 20);
            *(b + 14 * OS1_S1 + 60) = prefactor_z * *(b + 14 * OS1_S1 + 36) -
                                      p_over_q * *(b + 28 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 36);
            *(b + 14 * OS1_S1 + 61) = prefactor_z * *(b + 14 * OS1_S1 + 37) -
                                      p_over_q * *(b + 28 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 20);
            *(b + 14 * OS1_S1 + 62) =
                prefactor_y * *(b + 14 * OS1_S1 + 38) -
                p_over_q * *(b + 27 * OS1_S1 + 38) +
                one_over_two_q * *(b + 6 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 21);
            *(b + 14 * OS1_S1 + 63) = prefactor_z * *(b + 14 * OS1_S1 + 38) -
                                      p_over_q * *(b + 28 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 38);
            *(b + 14 * OS1_S1 + 64) = prefactor_y * *(b + 14 * OS1_S1 + 40) -
                                      p_over_q * *(b + 27 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 40);
            *(b + 14 * OS1_S1 + 65) =
                prefactor_z * *(b + 14 * OS1_S1 + 40) -
                p_over_q * *(b + 28 * OS1_S1 + 40) +
                one_over_two_q * *(b + 5 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 22);
            *(b + 14 * OS1_S1 + 66) = prefactor_x * *(b + 14 * OS1_S1 + 45) -
                                      p_over_q * *(b + 24 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 30);
            *(b + 14 * OS1_S1 + 67) = prefactor_z * *(b + 14 * OS1_S1 + 41) -
                                      p_over_q * *(b + 28 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 41);
            *(b + 14 * OS1_S1 + 68) = prefactor_z * *(b + 14 * OS1_S1 + 42) -
                                      p_over_q * *(b + 28 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 23);
            *(b + 14 * OS1_S1 + 69) = prefactor_y * *(b + 14 * OS1_S1 + 44) -
                                      p_over_q * *(b + 27 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 44);
            *(b + 14 * OS1_S1 + 70) = prefactor_x * *(b + 14 * OS1_S1 + 49) -
                                      p_over_q * *(b + 24 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 34);
            *(b + 14 * OS1_S1 + 71) = prefactor_x * *(b + 14 * OS1_S1 + 50) -
                                      p_over_q * *(b + 24 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 50);
            *(b + 14 * OS1_S1 + 72) = prefactor_z * *(b + 14 * OS1_S1 + 45) -
                                      p_over_q * *(b + 28 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 45);
            *(b + 14 * OS1_S1 + 73) = prefactor_x * *(b + 14 * OS1_S1 + 52) -
                                      p_over_q * *(b + 24 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 52);
            *(b + 14 * OS1_S1 + 74) = prefactor_x * *(b + 14 * OS1_S1 + 53) -
                                      p_over_q * *(b + 24 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 53);
            *(b + 14 * OS1_S1 + 75) = prefactor_y * *(b + 14 * OS1_S1 + 49) -
                                      p_over_q * *(b + 27 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 49);
            *(b + 14 * OS1_S1 + 76) = prefactor_x * *(b + 14 * OS1_S1 + 55) -
                                      p_over_q * *(b + 24 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 55);
            *(b + 14 * OS1_S1 + 77) =
                prefactor_y * *(b + 14 * OS1_S1 + 50) -
                p_over_q * *(b + 27 * OS1_S1 + 50) +
                one_over_two_q * *(b + 6 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 14 * OS1_S1 + 30);
            *(b + 14 * OS1_S1 + 78) = prefactor_z * *(b + 14 * OS1_S1 + 50) -
                                      p_over_q * *(b + 28 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 50);
            *(b + 14 * OS1_S1 + 79) = prefactor_z * *(b + 14 * OS1_S1 + 51) -
                                      p_over_q * *(b + 28 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 30);
            *(b + 14 * OS1_S1 + 80) =
                prefactor_z * *(b + 14 * OS1_S1 + 52) -
                p_over_q * *(b + 28 * OS1_S1 + 52) +
                one_over_two_q * *(b + 5 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 31);
            *(b + 14 * OS1_S1 + 81) = prefactor_y * *(b + 14 * OS1_S1 + 54) -
                                      p_over_q * *(b + 27 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 34);
            *(b + 14 * OS1_S1 + 82) = prefactor_y * *(b + 14 * OS1_S1 + 55) -
                                      p_over_q * *(b + 27 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 55);
            *(b + 14 * OS1_S1 + 83) =
                prefactor_z * *(b + 14 * OS1_S1 + 55) -
                p_over_q * *(b + 28 * OS1_S1 + 55) +
                one_over_two_q * *(b + 5 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 14 * OS1_S1 + 34);
            *(b + 15 * OS1_S1 + 56) =
                prefactor_x * *(b + 15 * OS1_S1 + 35) -
                p_over_q * *(b + 25 * OS1_S1 + 35) +
                one_over_two_q * *(b + 9 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 15 * OS1_S1 + 20);
            *(b + 15 * OS1_S1 + 57) = prefactor_y * *(b + 15 * OS1_S1 + 35) -
                                      p_over_q * *(b + 28 * OS1_S1 + 35);
            *(b + 15 * OS1_S1 + 58) =
                prefactor_z * *(b + 15 * OS1_S1 + 35) -
                p_over_q * *(b + 29 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 35);
            *(b + 15 * OS1_S1 + 59) = prefactor_y * *(b + 15 * OS1_S1 + 36) -
                                      p_over_q * *(b + 28 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 20);
            *(b + 15 * OS1_S1 + 60) = prefactor_y * *(b + 15 * OS1_S1 + 37) -
                                      p_over_q * *(b + 28 * OS1_S1 + 37);
            *(b + 15 * OS1_S1 + 61) =
                prefactor_z * *(b + 15 * OS1_S1 + 37) -
                p_over_q * *(b + 29 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 37) +
                one_over_two_q * *(b + 15 * OS1_S1 + 20);
            *(b + 15 * OS1_S1 + 62) =
                prefactor_y * *(b + 15 * OS1_S1 + 38) -
                p_over_q * *(b + 28 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 21);
            *(b + 15 * OS1_S1 + 63) =
                prefactor_z * *(b + 15 * OS1_S1 + 38) -
                p_over_q * *(b + 29 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 38);
            *(b + 15 * OS1_S1 + 64) = prefactor_y * *(b + 15 * OS1_S1 + 40) -
                                      p_over_q * *(b + 28 * OS1_S1 + 40);
            *(b + 15 * OS1_S1 + 65) =
                prefactor_x * *(b + 15 * OS1_S1 + 44) -
                p_over_q * *(b + 25 * OS1_S1 + 44) +
                one_over_two_q * *(b + 9 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 29);
            *(b + 15 * OS1_S1 + 66) = prefactor_x * *(b + 15 * OS1_S1 + 45) -
                                      p_over_q * *(b + 25 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 30);
            *(b + 15 * OS1_S1 + 67) =
                prefactor_z * *(b + 15 * OS1_S1 + 41) -
                p_over_q * *(b + 29 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 41);
            *(b + 15 * OS1_S1 + 68) = prefactor_y * *(b + 15 * OS1_S1 + 43) -
                                      p_over_q * *(b + 28 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 25);
            *(b + 15 * OS1_S1 + 69) = prefactor_y * *(b + 15 * OS1_S1 + 44) -
                                      p_over_q * *(b + 28 * OS1_S1 + 44);
            *(b + 15 * OS1_S1 + 70) = prefactor_x * *(b + 15 * OS1_S1 + 49) -
                                      p_over_q * *(b + 25 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 34);
            *(b + 15 * OS1_S1 + 71) = prefactor_x * *(b + 15 * OS1_S1 + 50) -
                                      p_over_q * *(b + 25 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 50);
            *(b + 15 * OS1_S1 + 72) = prefactor_x * *(b + 15 * OS1_S1 + 51) -
                                      p_over_q * *(b + 25 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 51);
            *(b + 15 * OS1_S1 + 73) = prefactor_x * *(b + 15 * OS1_S1 + 52) -
                                      p_over_q * *(b + 25 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 52);
            *(b + 15 * OS1_S1 + 74) = prefactor_x * *(b + 15 * OS1_S1 + 53) -
                                      p_over_q * *(b + 25 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 53);
            *(b + 15 * OS1_S1 + 75) = prefactor_y * *(b + 15 * OS1_S1 + 49) -
                                      p_over_q * *(b + 28 * OS1_S1 + 49);
            *(b + 15 * OS1_S1 + 76) = prefactor_x * *(b + 15 * OS1_S1 + 55) -
                                      p_over_q * *(b + 25 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 55);
            *(b + 15 * OS1_S1 + 77) =
                prefactor_y * *(b + 15 * OS1_S1 + 50) -
                p_over_q * *(b + 28 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 15 * OS1_S1 + 30);
            *(b + 15 * OS1_S1 + 78) =
                prefactor_z * *(b + 15 * OS1_S1 + 50) -
                p_over_q * *(b + 29 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 50);
            *(b + 15 * OS1_S1 + 79) =
                prefactor_z * *(b + 15 * OS1_S1 + 51) -
                p_over_q * *(b + 29 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 51) +
                one_over_two_q * *(b + 15 * OS1_S1 + 30);
            *(b + 15 * OS1_S1 + 80) =
                prefactor_y * *(b + 15 * OS1_S1 + 53) -
                p_over_q * *(b + 28 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 33);
            *(b + 15 * OS1_S1 + 81) = prefactor_y * *(b + 15 * OS1_S1 + 54) -
                                      p_over_q * *(b + 28 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 34);
            *(b + 15 * OS1_S1 + 82) = prefactor_y * *(b + 15 * OS1_S1 + 55) -
                                      p_over_q * *(b + 28 * OS1_S1 + 55);
            *(b + 15 * OS1_S1 + 83) =
                prefactor_z * *(b + 15 * OS1_S1 + 55) -
                p_over_q * *(b + 29 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 15 * OS1_S1 + 34);
            *(b + 16 * OS1_S1 + 56) =
                prefactor_x * *(b + 16 * OS1_S1 + 35) -
                p_over_q * *(b + 26 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 16 * OS1_S1 + 20);
            *(b + 16 * OS1_S1 + 57) =
                prefactor_y * *(b + 16 * OS1_S1 + 35) -
                p_over_q * *(b + 30 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 35);
            *(b + 16 * OS1_S1 + 58) = prefactor_z * *(b + 16 * OS1_S1 + 35) -
                                      p_over_q * *(b + 31 * OS1_S1 + 35);
            *(b + 16 * OS1_S1 + 59) =
                prefactor_y * *(b + 16 * OS1_S1 + 36) -
                p_over_q * *(b + 30 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 36) +
                one_over_two_q * *(b + 16 * OS1_S1 + 20);
            *(b + 16 * OS1_S1 + 60) = prefactor_z * *(b + 16 * OS1_S1 + 36) -
                                      p_over_q * *(b + 31 * OS1_S1 + 36);
            *(b + 16 * OS1_S1 + 61) = prefactor_z * *(b + 16 * OS1_S1 + 37) -
                                      p_over_q * *(b + 31 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 20);
            *(b + 16 * OS1_S1 + 62) =
                prefactor_x * *(b + 16 * OS1_S1 + 41) -
                p_over_q * *(b + 26 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 26);
            *(b + 16 * OS1_S1 + 63) = prefactor_z * *(b + 16 * OS1_S1 + 38) -
                                      p_over_q * *(b + 31 * OS1_S1 + 38);
            *(b + 16 * OS1_S1 + 64) =
                prefactor_y * *(b + 16 * OS1_S1 + 40) -
                p_over_q * *(b + 30 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 40);
            *(b + 16 * OS1_S1 + 65) =
                prefactor_z * *(b + 16 * OS1_S1 + 40) -
                p_over_q * *(b + 31 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 22);
            *(b + 16 * OS1_S1 + 66) = prefactor_x * *(b + 16 * OS1_S1 + 45) -
                                      p_over_q * *(b + 26 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 30);
            *(b + 16 * OS1_S1 + 67) = prefactor_z * *(b + 16 * OS1_S1 + 41) -
                                      p_over_q * *(b + 31 * OS1_S1 + 41);
            *(b + 16 * OS1_S1 + 68) = prefactor_z * *(b + 16 * OS1_S1 + 42) -
                                      p_over_q * *(b + 31 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 23);
            *(b + 16 * OS1_S1 + 69) =
                prefactor_y * *(b + 16 * OS1_S1 + 44) -
                p_over_q * *(b + 30 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 44);
            *(b + 16 * OS1_S1 + 70) = prefactor_x * *(b + 16 * OS1_S1 + 49) -
                                      p_over_q * *(b + 26 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 34);
            *(b + 16 * OS1_S1 + 71) = prefactor_x * *(b + 16 * OS1_S1 + 50) -
                                      p_over_q * *(b + 26 * OS1_S1 + 50);
            *(b + 16 * OS1_S1 + 72) = prefactor_z * *(b + 16 * OS1_S1 + 45) -
                                      p_over_q * *(b + 31 * OS1_S1 + 45);
            *(b + 16 * OS1_S1 + 73) = prefactor_x * *(b + 16 * OS1_S1 + 52) -
                                      p_over_q * *(b + 26 * OS1_S1 + 52);
            *(b + 16 * OS1_S1 + 74) = prefactor_x * *(b + 16 * OS1_S1 + 53) -
                                      p_over_q * *(b + 26 * OS1_S1 + 53);
            *(b + 16 * OS1_S1 + 75) = prefactor_x * *(b + 16 * OS1_S1 + 54) -
                                      p_over_q * *(b + 26 * OS1_S1 + 54);
            *(b + 16 * OS1_S1 + 76) = prefactor_x * *(b + 16 * OS1_S1 + 55) -
                                      p_over_q * *(b + 26 * OS1_S1 + 55);
            *(b + 16 * OS1_S1 + 77) =
                prefactor_y * *(b + 16 * OS1_S1 + 50) -
                p_over_q * *(b + 30 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 16 * OS1_S1 + 30);
            *(b + 16 * OS1_S1 + 78) = prefactor_z * *(b + 16 * OS1_S1 + 50) -
                                      p_over_q * *(b + 31 * OS1_S1 + 50);
            *(b + 16 * OS1_S1 + 79) = prefactor_z * *(b + 16 * OS1_S1 + 51) -
                                      p_over_q * *(b + 31 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 30);
            *(b + 16 * OS1_S1 + 80) =
                prefactor_z * *(b + 16 * OS1_S1 + 52) -
                p_over_q * *(b + 31 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 31);
            *(b + 16 * OS1_S1 + 81) =
                prefactor_y * *(b + 16 * OS1_S1 + 54) -
                p_over_q * *(b + 30 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 54) +
                one_over_two_q * *(b + 16 * OS1_S1 + 34);
            *(b + 16 * OS1_S1 + 82) =
                prefactor_y * *(b + 16 * OS1_S1 + 55) -
                p_over_q * *(b + 30 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 55);
            *(b + 16 * OS1_S1 + 83) =
                prefactor_z * *(b + 16 * OS1_S1 + 55) -
                p_over_q * *(b + 31 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 16 * OS1_S1 + 34);
            *(b + 17 * OS1_S1 + 56) =
                prefactor_x * *(b + 17 * OS1_S1 + 35) -
                p_over_q * *(b + 27 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 17 * OS1_S1 + 20);
            *(b + 17 * OS1_S1 + 57) =
                prefactor_y * *(b + 17 * OS1_S1 + 35) -
                p_over_q * *(b + 31 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 35);
            *(b + 17 * OS1_S1 + 58) = prefactor_z * *(b + 17 * OS1_S1 + 35) -
                                      p_over_q * *(b + 32 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 35);
            *(b + 17 * OS1_S1 + 59) =
                prefactor_y * *(b + 17 * OS1_S1 + 36) -
                p_over_q * *(b + 31 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 36) +
                one_over_two_q * *(b + 17 * OS1_S1 + 20);
            *(b + 17 * OS1_S1 + 60) = prefactor_z * *(b + 17 * OS1_S1 + 36) -
                                      p_over_q * *(b + 32 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 36);
            *(b + 17 * OS1_S1 + 61) = prefactor_z * *(b + 17 * OS1_S1 + 37) -
                                      p_over_q * *(b + 32 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 20);
            *(b + 17 * OS1_S1 + 62) =
                prefactor_x * *(b + 17 * OS1_S1 + 41) -
                p_over_q * *(b + 27 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 26);
            *(b + 17 * OS1_S1 + 63) = prefactor_z * *(b + 17 * OS1_S1 + 38) -
                                      p_over_q * *(b + 32 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 38);
            *(b + 17 * OS1_S1 + 64) =
                prefactor_y * *(b + 17 * OS1_S1 + 40) -
                p_over_q * *(b + 31 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 40);
            *(b + 17 * OS1_S1 + 65) =
                prefactor_x * *(b + 17 * OS1_S1 + 44) -
                p_over_q * *(b + 27 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 29);
            *(b + 17 * OS1_S1 + 66) = prefactor_x * *(b + 17 * OS1_S1 + 45) -
                                      p_over_q * *(b + 27 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 30);
            *(b + 17 * OS1_S1 + 67) = prefactor_z * *(b + 17 * OS1_S1 + 41) -
                                      p_over_q * *(b + 32 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 41);
            *(b + 17 * OS1_S1 + 68) = prefactor_x * *(b + 17 * OS1_S1 + 47) -
                                      p_over_q * *(b + 27 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 32);
            *(b + 17 * OS1_S1 + 69) =
                prefactor_y * *(b + 17 * OS1_S1 + 44) -
                p_over_q * *(b + 31 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 44);
            *(b + 17 * OS1_S1 + 70) = prefactor_x * *(b + 17 * OS1_S1 + 49) -
                                      p_over_q * *(b + 27 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 34);
            *(b + 17 * OS1_S1 + 71) = prefactor_x * *(b + 17 * OS1_S1 + 50) -
                                      p_over_q * *(b + 27 * OS1_S1 + 50);
            *(b + 17 * OS1_S1 + 72) = prefactor_x * *(b + 17 * OS1_S1 + 51) -
                                      p_over_q * *(b + 27 * OS1_S1 + 51);
            *(b + 17 * OS1_S1 + 73) = prefactor_x * *(b + 17 * OS1_S1 + 52) -
                                      p_over_q * *(b + 27 * OS1_S1 + 52);
            *(b + 17 * OS1_S1 + 74) = prefactor_x * *(b + 17 * OS1_S1 + 53) -
                                      p_over_q * *(b + 27 * OS1_S1 + 53);
            *(b + 17 * OS1_S1 + 75) = prefactor_x * *(b + 17 * OS1_S1 + 54) -
                                      p_over_q * *(b + 27 * OS1_S1 + 54);
            *(b + 17 * OS1_S1 + 76) = prefactor_x * *(b + 17 * OS1_S1 + 55) -
                                      p_over_q * *(b + 27 * OS1_S1 + 55);
            *(b + 17 * OS1_S1 + 77) =
                prefactor_y * *(b + 17 * OS1_S1 + 50) -
                p_over_q * *(b + 31 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 17 * OS1_S1 + 30);
            *(b + 17 * OS1_S1 + 78) = prefactor_z * *(b + 17 * OS1_S1 + 50) -
                                      p_over_q * *(b + 32 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 50);
            *(b + 17 * OS1_S1 + 79) = prefactor_z * *(b + 17 * OS1_S1 + 51) -
                                      p_over_q * *(b + 32 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 30);
            *(b + 17 * OS1_S1 + 80) =
                prefactor_z * *(b + 17 * OS1_S1 + 52) -
                p_over_q * *(b + 32 * OS1_S1 + 52) +
                one_over_two_q * *(b + 7 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 31);
            *(b + 17 * OS1_S1 + 81) =
                prefactor_y * *(b + 17 * OS1_S1 + 54) -
                p_over_q * *(b + 31 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 54) +
                one_over_two_q * *(b + 17 * OS1_S1 + 34);
            *(b + 17 * OS1_S1 + 82) =
                prefactor_y * *(b + 17 * OS1_S1 + 55) -
                p_over_q * *(b + 31 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 55);
            *(b + 17 * OS1_S1 + 83) =
                prefactor_z * *(b + 17 * OS1_S1 + 55) -
                p_over_q * *(b + 32 * OS1_S1 + 55) +
                one_over_two_q * *(b + 7 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 17 * OS1_S1 + 34);
            *(b + 18 * OS1_S1 + 56) =
                prefactor_x * *(b + 18 * OS1_S1 + 35) -
                p_over_q * *(b + 28 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 18 * OS1_S1 + 20);
            *(b + 18 * OS1_S1 + 57) = prefactor_y * *(b + 18 * OS1_S1 + 35) -
                                      p_over_q * *(b + 32 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 35);
            *(b + 18 * OS1_S1 + 58) =
                prefactor_z * *(b + 18 * OS1_S1 + 35) -
                p_over_q * *(b + 33 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 35);
            *(b + 18 * OS1_S1 + 59) = prefactor_y * *(b + 18 * OS1_S1 + 36) -
                                      p_over_q * *(b + 32 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 20);
            *(b + 18 * OS1_S1 + 60) = prefactor_y * *(b + 18 * OS1_S1 + 37) -
                                      p_over_q * *(b + 32 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 37);
            *(b + 18 * OS1_S1 + 61) =
                prefactor_z * *(b + 18 * OS1_S1 + 37) -
                p_over_q * *(b + 33 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 37) +
                one_over_two_q * *(b + 18 * OS1_S1 + 20);
            *(b + 18 * OS1_S1 + 62) =
                prefactor_x * *(b + 18 * OS1_S1 + 41) -
                p_over_q * *(b + 28 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 26);
            *(b + 18 * OS1_S1 + 63) =
                prefactor_z * *(b + 18 * OS1_S1 + 38) -
                p_over_q * *(b + 33 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 38);
            *(b + 18 * OS1_S1 + 64) = prefactor_y * *(b + 18 * OS1_S1 + 40) -
                                      p_over_q * *(b + 32 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 40);
            *(b + 18 * OS1_S1 + 65) =
                prefactor_x * *(b + 18 * OS1_S1 + 44) -
                p_over_q * *(b + 28 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 29);
            *(b + 18 * OS1_S1 + 66) = prefactor_x * *(b + 18 * OS1_S1 + 45) -
                                      p_over_q * *(b + 28 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 30);
            *(b + 18 * OS1_S1 + 67) =
                prefactor_z * *(b + 18 * OS1_S1 + 41) -
                p_over_q * *(b + 33 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 41);
            *(b + 18 * OS1_S1 + 68) = prefactor_x * *(b + 18 * OS1_S1 + 47) -
                                      p_over_q * *(b + 28 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 32);
            *(b + 18 * OS1_S1 + 69) = prefactor_y * *(b + 18 * OS1_S1 + 44) -
                                      p_over_q * *(b + 32 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 44);
            *(b + 18 * OS1_S1 + 70) = prefactor_x * *(b + 18 * OS1_S1 + 49) -
                                      p_over_q * *(b + 28 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 34);
            *(b + 18 * OS1_S1 + 71) = prefactor_x * *(b + 18 * OS1_S1 + 50) -
                                      p_over_q * *(b + 28 * OS1_S1 + 50);
            *(b + 18 * OS1_S1 + 72) = prefactor_x * *(b + 18 * OS1_S1 + 51) -
                                      p_over_q * *(b + 28 * OS1_S1 + 51);
            *(b + 18 * OS1_S1 + 73) = prefactor_x * *(b + 18 * OS1_S1 + 52) -
                                      p_over_q * *(b + 28 * OS1_S1 + 52);
            *(b + 18 * OS1_S1 + 74) = prefactor_x * *(b + 18 * OS1_S1 + 53) -
                                      p_over_q * *(b + 28 * OS1_S1 + 53);
            *(b + 18 * OS1_S1 + 75) = prefactor_x * *(b + 18 * OS1_S1 + 54) -
                                      p_over_q * *(b + 28 * OS1_S1 + 54);
            *(b + 18 * OS1_S1 + 76) = prefactor_x * *(b + 18 * OS1_S1 + 55) -
                                      p_over_q * *(b + 28 * OS1_S1 + 55);
            *(b + 18 * OS1_S1 + 77) =
                prefactor_y * *(b + 18 * OS1_S1 + 50) -
                p_over_q * *(b + 32 * OS1_S1 + 50) +
                one_over_two_q * *(b + 9 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 18 * OS1_S1 + 30);
            *(b + 18 * OS1_S1 + 78) =
                prefactor_z * *(b + 18 * OS1_S1 + 50) -
                p_over_q * *(b + 33 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 50);
            *(b + 18 * OS1_S1 + 79) =
                prefactor_z * *(b + 18 * OS1_S1 + 51) -
                p_over_q * *(b + 33 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 51) +
                one_over_two_q * *(b + 18 * OS1_S1 + 30);
            *(b + 18 * OS1_S1 + 80) =
                prefactor_y * *(b + 18 * OS1_S1 + 53) -
                p_over_q * *(b + 32 * OS1_S1 + 53) +
                one_over_two_q * *(b + 9 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 33);
            *(b + 18 * OS1_S1 + 81) = prefactor_y * *(b + 18 * OS1_S1 + 54) -
                                      p_over_q * *(b + 32 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 34);
            *(b + 18 * OS1_S1 + 82) = prefactor_y * *(b + 18 * OS1_S1 + 55) -
                                      p_over_q * *(b + 32 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 55);
            *(b + 18 * OS1_S1 + 83) =
                prefactor_z * *(b + 18 * OS1_S1 + 55) -
                p_over_q * *(b + 33 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 18 * OS1_S1 + 34);
            *(b + 19 * OS1_S1 + 56) =
                prefactor_x * *(b + 19 * OS1_S1 + 35) -
                p_over_q * *(b + 29 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 19 * OS1_S1 + 20);
            *(b + 19 * OS1_S1 + 57) = prefactor_y * *(b + 19 * OS1_S1 + 35) -
                                      p_over_q * *(b + 33 * OS1_S1 + 35);
            *(b + 19 * OS1_S1 + 58) =
                prefactor_z * *(b + 19 * OS1_S1 + 35) -
                p_over_q * *(b + 34 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 35);
            *(b + 19 * OS1_S1 + 59) = prefactor_y * *(b + 19 * OS1_S1 + 36) -
                                      p_over_q * *(b + 33 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 20);
            *(b + 19 * OS1_S1 + 60) = prefactor_y * *(b + 19 * OS1_S1 + 37) -
                                      p_over_q * *(b + 33 * OS1_S1 + 37);
            *(b + 19 * OS1_S1 + 61) =
                prefactor_z * *(b + 19 * OS1_S1 + 37) -
                p_over_q * *(b + 34 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 37) +
                one_over_two_q * *(b + 19 * OS1_S1 + 20);
            *(b + 19 * OS1_S1 + 62) =
                prefactor_y * *(b + 19 * OS1_S1 + 38) -
                p_over_q * *(b + 33 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 21);
            *(b + 19 * OS1_S1 + 63) =
                prefactor_z * *(b + 19 * OS1_S1 + 38) -
                p_over_q * *(b + 34 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 38);
            *(b + 19 * OS1_S1 + 64) = prefactor_y * *(b + 19 * OS1_S1 + 40) -
                                      p_over_q * *(b + 33 * OS1_S1 + 40);
            *(b + 19 * OS1_S1 + 65) =
                prefactor_x * *(b + 19 * OS1_S1 + 44) -
                p_over_q * *(b + 29 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 29);
            *(b + 19 * OS1_S1 + 66) = prefactor_x * *(b + 19 * OS1_S1 + 45) -
                                      p_over_q * *(b + 29 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 30);
            *(b + 19 * OS1_S1 + 67) =
                prefactor_z * *(b + 19 * OS1_S1 + 41) -
                p_over_q * *(b + 34 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 41);
            *(b + 19 * OS1_S1 + 68) = prefactor_y * *(b + 19 * OS1_S1 + 43) -
                                      p_over_q * *(b + 33 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 25);
            *(b + 19 * OS1_S1 + 69) = prefactor_y * *(b + 19 * OS1_S1 + 44) -
                                      p_over_q * *(b + 33 * OS1_S1 + 44);
            *(b + 19 * OS1_S1 + 70) = prefactor_x * *(b + 19 * OS1_S1 + 49) -
                                      p_over_q * *(b + 29 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 34);
            *(b + 19 * OS1_S1 + 71) = prefactor_x * *(b + 19 * OS1_S1 + 50) -
                                      p_over_q * *(b + 29 * OS1_S1 + 50);
            *(b + 19 * OS1_S1 + 72) = prefactor_x * *(b + 19 * OS1_S1 + 51) -
                                      p_over_q * *(b + 29 * OS1_S1 + 51);
            *(b + 19 * OS1_S1 + 73) = prefactor_x * *(b + 19 * OS1_S1 + 52) -
                                      p_over_q * *(b + 29 * OS1_S1 + 52);
            *(b + 19 * OS1_S1 + 74) = prefactor_x * *(b + 19 * OS1_S1 + 53) -
                                      p_over_q * *(b + 29 * OS1_S1 + 53);
            *(b + 19 * OS1_S1 + 75) = prefactor_y * *(b + 19 * OS1_S1 + 49) -
                                      p_over_q * *(b + 33 * OS1_S1 + 49);
            *(b + 19 * OS1_S1 + 76) = prefactor_x * *(b + 19 * OS1_S1 + 55) -
                                      p_over_q * *(b + 29 * OS1_S1 + 55);
            *(b + 19 * OS1_S1 + 77) =
                prefactor_y * *(b + 19 * OS1_S1 + 50) -
                p_over_q * *(b + 33 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 19 * OS1_S1 + 30);
            *(b + 19 * OS1_S1 + 78) =
                prefactor_z * *(b + 19 * OS1_S1 + 50) -
                p_over_q * *(b + 34 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 50);
            *(b + 19 * OS1_S1 + 79) =
                prefactor_z * *(b + 19 * OS1_S1 + 51) -
                p_over_q * *(b + 34 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 51) +
                one_over_two_q * *(b + 19 * OS1_S1 + 30);
            *(b + 19 * OS1_S1 + 80) =
                prefactor_y * *(b + 19 * OS1_S1 + 53) -
                p_over_q * *(b + 33 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 33);
            *(b + 19 * OS1_S1 + 81) = prefactor_y * *(b + 19 * OS1_S1 + 54) -
                                      p_over_q * *(b + 33 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 34);
            *(b + 19 * OS1_S1 + 82) = prefactor_y * *(b + 19 * OS1_S1 + 55) -
                                      p_over_q * *(b + 33 * OS1_S1 + 55);
            *(b + 19 * OS1_S1 + 83) =
                prefactor_z * *(b + 19 * OS1_S1 + 55) -
                p_over_q * *(b + 34 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 19 * OS1_S1 + 34);
            return;
        }

        void transfer_4_6(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 20 * OS1_S1 + 56) =
                prefactor_x * *(b + 20 * OS1_S1 + 35) -
                p_over_q * *(b + 35 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 20);
            *(b + 20 * OS1_S1 + 57) = prefactor_y * *(b + 20 * OS1_S1 + 35) -
                                      p_over_q * *(b + 36 * OS1_S1 + 35);
            *(b + 20 * OS1_S1 + 58) = prefactor_z * *(b + 20 * OS1_S1 + 35) -
                                      p_over_q * *(b + 37 * OS1_S1 + 35);
            *(b + 20 * OS1_S1 + 59) = prefactor_y * *(b + 20 * OS1_S1 + 36) -
                                      p_over_q * *(b + 36 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 20);
            *(b + 20 * OS1_S1 + 60) = prefactor_z * *(b + 20 * OS1_S1 + 36) -
                                      p_over_q * *(b + 37 * OS1_S1 + 36);
            *(b + 20 * OS1_S1 + 61) = prefactor_z * *(b + 20 * OS1_S1 + 37) -
                                      p_over_q * *(b + 37 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 20);
            *(b + 20 * OS1_S1 + 62) =
                prefactor_y * *(b + 20 * OS1_S1 + 38) -
                p_over_q * *(b + 36 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 21);
            *(b + 20 * OS1_S1 + 63) = prefactor_z * *(b + 20 * OS1_S1 + 38) -
                                      p_over_q * *(b + 37 * OS1_S1 + 38);
            *(b + 20 * OS1_S1 + 64) = prefactor_y * *(b + 20 * OS1_S1 + 40) -
                                      p_over_q * *(b + 36 * OS1_S1 + 40);
            *(b + 20 * OS1_S1 + 65) =
                prefactor_z * *(b + 20 * OS1_S1 + 40) -
                p_over_q * *(b + 37 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 22);
            *(b + 20 * OS1_S1 + 66) =
                prefactor_x * *(b + 20 * OS1_S1 + 45) -
                p_over_q * *(b + 35 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 45) +
                one_over_two_q * *(b + 20 * OS1_S1 + 30);
            *(b + 20 * OS1_S1 + 67) = prefactor_z * *(b + 20 * OS1_S1 + 41) -
                                      p_over_q * *(b + 37 * OS1_S1 + 41);
            *(b + 20 * OS1_S1 + 68) = prefactor_z * *(b + 20 * OS1_S1 + 42) -
                                      p_over_q * *(b + 37 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 23);
            *(b + 20 * OS1_S1 + 69) = prefactor_y * *(b + 20 * OS1_S1 + 44) -
                                      p_over_q * *(b + 36 * OS1_S1 + 44);
            *(b + 20 * OS1_S1 + 70) =
                prefactor_x * *(b + 20 * OS1_S1 + 49) -
                p_over_q * *(b + 35 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 49) +
                one_over_two_q * *(b + 20 * OS1_S1 + 34);
            *(b + 20 * OS1_S1 + 71) =
                prefactor_x * *(b + 20 * OS1_S1 + 50) -
                p_over_q * *(b + 35 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 50);
            *(b + 20 * OS1_S1 + 72) = prefactor_z * *(b + 20 * OS1_S1 + 45) -
                                      p_over_q * *(b + 37 * OS1_S1 + 45);
            *(b + 20 * OS1_S1 + 73) =
                prefactor_x * *(b + 20 * OS1_S1 + 52) -
                p_over_q * *(b + 35 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 52);
            *(b + 20 * OS1_S1 + 74) =
                prefactor_x * *(b + 20 * OS1_S1 + 53) -
                p_over_q * *(b + 35 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 53);
            *(b + 20 * OS1_S1 + 75) = prefactor_y * *(b + 20 * OS1_S1 + 49) -
                                      p_over_q * *(b + 36 * OS1_S1 + 49);
            *(b + 20 * OS1_S1 + 76) =
                prefactor_x * *(b + 20 * OS1_S1 + 55) -
                p_over_q * *(b + 35 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 55);
            *(b + 20 * OS1_S1 + 77) =
                prefactor_y * *(b + 20 * OS1_S1 + 50) -
                p_over_q * *(b + 36 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 30);
            *(b + 20 * OS1_S1 + 78) = prefactor_z * *(b + 20 * OS1_S1 + 50) -
                                      p_over_q * *(b + 37 * OS1_S1 + 50);
            *(b + 20 * OS1_S1 + 79) = prefactor_z * *(b + 20 * OS1_S1 + 51) -
                                      p_over_q * *(b + 37 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 30);
            *(b + 20 * OS1_S1 + 80) =
                prefactor_z * *(b + 20 * OS1_S1 + 52) -
                p_over_q * *(b + 37 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 31);
            *(b + 20 * OS1_S1 + 81) = prefactor_y * *(b + 20 * OS1_S1 + 54) -
                                      p_over_q * *(b + 36 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 34);
            *(b + 20 * OS1_S1 + 82) = prefactor_y * *(b + 20 * OS1_S1 + 55) -
                                      p_over_q * *(b + 36 * OS1_S1 + 55);
            *(b + 20 * OS1_S1 + 83) =
                prefactor_z * *(b + 20 * OS1_S1 + 55) -
                p_over_q * *(b + 37 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 34);
            *(b + 21 * OS1_S1 + 56) =
                prefactor_x * *(b + 21 * OS1_S1 + 35) -
                p_over_q * *(b + 36 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 21 * OS1_S1 + 20);
            *(b + 21 * OS1_S1 + 57) = prefactor_y * *(b + 21 * OS1_S1 + 35) -
                                      p_over_q * *(b + 38 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 35);
            *(b + 21 * OS1_S1 + 58) = prefactor_z * *(b + 21 * OS1_S1 + 35) -
                                      p_over_q * *(b + 39 * OS1_S1 + 35);
            *(b + 21 * OS1_S1 + 59) = prefactor_y * *(b + 21 * OS1_S1 + 36) -
                                      p_over_q * *(b + 38 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 20);
            *(b + 21 * OS1_S1 + 60) = prefactor_z * *(b + 21 * OS1_S1 + 36) -
                                      p_over_q * *(b + 39 * OS1_S1 + 36);
            *(b + 21 * OS1_S1 + 61) = prefactor_z * *(b + 21 * OS1_S1 + 37) -
                                      p_over_q * *(b + 39 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 20);
            *(b + 21 * OS1_S1 + 62) =
                prefactor_y * *(b + 21 * OS1_S1 + 38) -
                p_over_q * *(b + 38 * OS1_S1 + 38) +
                one_over_two_q * *(b + 10 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 21);
            *(b + 21 * OS1_S1 + 63) = prefactor_z * *(b + 21 * OS1_S1 + 38) -
                                      p_over_q * *(b + 39 * OS1_S1 + 38);
            *(b + 21 * OS1_S1 + 64) = prefactor_y * *(b + 21 * OS1_S1 + 40) -
                                      p_over_q * *(b + 38 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 40);
            *(b + 21 * OS1_S1 + 65) =
                prefactor_z * *(b + 21 * OS1_S1 + 40) -
                p_over_q * *(b + 39 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 22);
            *(b + 21 * OS1_S1 + 66) =
                prefactor_x * *(b + 21 * OS1_S1 + 45) -
                p_over_q * *(b + 36 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 45) +
                one_over_two_q * *(b + 21 * OS1_S1 + 30);
            *(b + 21 * OS1_S1 + 67) = prefactor_z * *(b + 21 * OS1_S1 + 41) -
                                      p_over_q * *(b + 39 * OS1_S1 + 41);
            *(b + 21 * OS1_S1 + 68) = prefactor_z * *(b + 21 * OS1_S1 + 42) -
                                      p_over_q * *(b + 39 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 23);
            *(b + 21 * OS1_S1 + 69) = prefactor_y * *(b + 21 * OS1_S1 + 44) -
                                      p_over_q * *(b + 38 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 44);
            *(b + 21 * OS1_S1 + 70) =
                prefactor_x * *(b + 21 * OS1_S1 + 49) -
                p_over_q * *(b + 36 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 49) +
                one_over_two_q * *(b + 21 * OS1_S1 + 34);
            *(b + 21 * OS1_S1 + 71) =
                prefactor_x * *(b + 21 * OS1_S1 + 50) -
                p_over_q * *(b + 36 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 50);
            *(b + 21 * OS1_S1 + 72) = prefactor_z * *(b + 21 * OS1_S1 + 45) -
                                      p_over_q * *(b + 39 * OS1_S1 + 45);
            *(b + 21 * OS1_S1 + 73) =
                prefactor_x * *(b + 21 * OS1_S1 + 52) -
                p_over_q * *(b + 36 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 52);
            *(b + 21 * OS1_S1 + 74) =
                prefactor_x * *(b + 21 * OS1_S1 + 53) -
                p_over_q * *(b + 36 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 53);
            *(b + 21 * OS1_S1 + 75) = prefactor_y * *(b + 21 * OS1_S1 + 49) -
                                      p_over_q * *(b + 38 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 49);
            *(b + 21 * OS1_S1 + 76) =
                prefactor_x * *(b + 21 * OS1_S1 + 55) -
                p_over_q * *(b + 36 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 55);
            *(b + 21 * OS1_S1 + 77) =
                prefactor_y * *(b + 21 * OS1_S1 + 50) -
                p_over_q * *(b + 38 * OS1_S1 + 50) +
                one_over_two_q * *(b + 10 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 21 * OS1_S1 + 30);
            *(b + 21 * OS1_S1 + 78) = prefactor_z * *(b + 21 * OS1_S1 + 50) -
                                      p_over_q * *(b + 39 * OS1_S1 + 50);
            *(b + 21 * OS1_S1 + 79) = prefactor_z * *(b + 21 * OS1_S1 + 51) -
                                      p_over_q * *(b + 39 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 30);
            *(b + 21 * OS1_S1 + 80) =
                prefactor_z * *(b + 21 * OS1_S1 + 52) -
                p_over_q * *(b + 39 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 31);
            *(b + 21 * OS1_S1 + 81) = prefactor_y * *(b + 21 * OS1_S1 + 54) -
                                      p_over_q * *(b + 38 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 34);
            *(b + 21 * OS1_S1 + 82) = prefactor_y * *(b + 21 * OS1_S1 + 55) -
                                      p_over_q * *(b + 38 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 55);
            *(b + 21 * OS1_S1 + 83) =
                prefactor_z * *(b + 21 * OS1_S1 + 55) -
                p_over_q * *(b + 39 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 21 * OS1_S1 + 34);
            *(b + 22 * OS1_S1 + 56) =
                prefactor_x * *(b + 22 * OS1_S1 + 35) -
                p_over_q * *(b + 37 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 22 * OS1_S1 + 20);
            *(b + 22 * OS1_S1 + 57) = prefactor_y * *(b + 22 * OS1_S1 + 35) -
                                      p_over_q * *(b + 39 * OS1_S1 + 35);
            *(b + 22 * OS1_S1 + 58) = prefactor_z * *(b + 22 * OS1_S1 + 35) -
                                      p_over_q * *(b + 40 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 35);
            *(b + 22 * OS1_S1 + 59) = prefactor_y * *(b + 22 * OS1_S1 + 36) -
                                      p_over_q * *(b + 39 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 20);
            *(b + 22 * OS1_S1 + 60) = prefactor_y * *(b + 22 * OS1_S1 + 37) -
                                      p_over_q * *(b + 39 * OS1_S1 + 37);
            *(b + 22 * OS1_S1 + 61) = prefactor_z * *(b + 22 * OS1_S1 + 37) -
                                      p_over_q * *(b + 40 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 20);
            *(b + 22 * OS1_S1 + 62) =
                prefactor_y * *(b + 22 * OS1_S1 + 38) -
                p_over_q * *(b + 39 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 21);
            *(b + 22 * OS1_S1 + 63) = prefactor_z * *(b + 22 * OS1_S1 + 38) -
                                      p_over_q * *(b + 40 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 38);
            *(b + 22 * OS1_S1 + 64) = prefactor_y * *(b + 22 * OS1_S1 + 40) -
                                      p_over_q * *(b + 39 * OS1_S1 + 40);
            *(b + 22 * OS1_S1 + 65) =
                prefactor_z * *(b + 22 * OS1_S1 + 40) -
                p_over_q * *(b + 40 * OS1_S1 + 40) +
                one_over_two_q * *(b + 10 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 22);
            *(b + 22 * OS1_S1 + 66) =
                prefactor_x * *(b + 22 * OS1_S1 + 45) -
                p_over_q * *(b + 37 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 45) +
                one_over_two_q * *(b + 22 * OS1_S1 + 30);
            *(b + 22 * OS1_S1 + 67) = prefactor_z * *(b + 22 * OS1_S1 + 41) -
                                      p_over_q * *(b + 40 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 41);
            *(b + 22 * OS1_S1 + 68) = prefactor_y * *(b + 22 * OS1_S1 + 43) -
                                      p_over_q * *(b + 39 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 25);
            *(b + 22 * OS1_S1 + 69) = prefactor_y * *(b + 22 * OS1_S1 + 44) -
                                      p_over_q * *(b + 39 * OS1_S1 + 44);
            *(b + 22 * OS1_S1 + 70) =
                prefactor_x * *(b + 22 * OS1_S1 + 49) -
                p_over_q * *(b + 37 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 49) +
                one_over_two_q * *(b + 22 * OS1_S1 + 34);
            *(b + 22 * OS1_S1 + 71) =
                prefactor_x * *(b + 22 * OS1_S1 + 50) -
                p_over_q * *(b + 37 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 50);
            *(b + 22 * OS1_S1 + 72) = prefactor_z * *(b + 22 * OS1_S1 + 45) -
                                      p_over_q * *(b + 40 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 45);
            *(b + 22 * OS1_S1 + 73) =
                prefactor_x * *(b + 22 * OS1_S1 + 52) -
                p_over_q * *(b + 37 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 52);
            *(b + 22 * OS1_S1 + 74) =
                prefactor_x * *(b + 22 * OS1_S1 + 53) -
                p_over_q * *(b + 37 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 53);
            *(b + 22 * OS1_S1 + 75) = prefactor_y * *(b + 22 * OS1_S1 + 49) -
                                      p_over_q * *(b + 39 * OS1_S1 + 49);
            *(b + 22 * OS1_S1 + 76) =
                prefactor_x * *(b + 22 * OS1_S1 + 55) -
                p_over_q * *(b + 37 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 55);
            *(b + 22 * OS1_S1 + 77) =
                prefactor_y * *(b + 22 * OS1_S1 + 50) -
                p_over_q * *(b + 39 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 22 * OS1_S1 + 30);
            *(b + 22 * OS1_S1 + 78) = prefactor_z * *(b + 22 * OS1_S1 + 50) -
                                      p_over_q * *(b + 40 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 50);
            *(b + 22 * OS1_S1 + 79) = prefactor_z * *(b + 22 * OS1_S1 + 51) -
                                      p_over_q * *(b + 40 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 30);
            *(b + 22 * OS1_S1 + 80) =
                prefactor_y * *(b + 22 * OS1_S1 + 53) -
                p_over_q * *(b + 39 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 33);
            *(b + 22 * OS1_S1 + 81) = prefactor_y * *(b + 22 * OS1_S1 + 54) -
                                      p_over_q * *(b + 39 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 34);
            *(b + 22 * OS1_S1 + 82) = prefactor_y * *(b + 22 * OS1_S1 + 55) -
                                      p_over_q * *(b + 39 * OS1_S1 + 55);
            *(b + 22 * OS1_S1 + 83) =
                prefactor_z * *(b + 22 * OS1_S1 + 55) -
                p_over_q * *(b + 40 * OS1_S1 + 55) +
                one_over_two_q * *(b + 10 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 22 * OS1_S1 + 34);
            *(b + 23 * OS1_S1 + 56) =
                prefactor_x * *(b + 23 * OS1_S1 + 35) -
                p_over_q * *(b + 38 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 23 * OS1_S1 + 20);
            *(b + 23 * OS1_S1 + 57) =
                prefactor_y * *(b + 23 * OS1_S1 + 35) -
                p_over_q * *(b + 41 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 35);
            *(b + 23 * OS1_S1 + 58) = prefactor_z * *(b + 23 * OS1_S1 + 35) -
                                      p_over_q * *(b + 42 * OS1_S1 + 35);
            *(b + 23 * OS1_S1 + 59) =
                prefactor_y * *(b + 23 * OS1_S1 + 36) -
                p_over_q * *(b + 41 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 36) +
                one_over_two_q * *(b + 23 * OS1_S1 + 20);
            *(b + 23 * OS1_S1 + 60) = prefactor_z * *(b + 23 * OS1_S1 + 36) -
                                      p_over_q * *(b + 42 * OS1_S1 + 36);
            *(b + 23 * OS1_S1 + 61) = prefactor_z * *(b + 23 * OS1_S1 + 37) -
                                      p_over_q * *(b + 42 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 20);
            *(b + 23 * OS1_S1 + 62) =
                prefactor_y * *(b + 23 * OS1_S1 + 38) -
                p_over_q * *(b + 41 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 21);
            *(b + 23 * OS1_S1 + 63) = prefactor_z * *(b + 23 * OS1_S1 + 38) -
                                      p_over_q * *(b + 42 * OS1_S1 + 38);
            *(b + 23 * OS1_S1 + 64) =
                prefactor_y * *(b + 23 * OS1_S1 + 40) -
                p_over_q * *(b + 41 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 40);
            *(b + 23 * OS1_S1 + 65) =
                prefactor_z * *(b + 23 * OS1_S1 + 40) -
                p_over_q * *(b + 42 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 22);
            *(b + 23 * OS1_S1 + 66) =
                prefactor_x * *(b + 23 * OS1_S1 + 45) -
                p_over_q * *(b + 38 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 45) +
                one_over_two_q * *(b + 23 * OS1_S1 + 30);
            *(b + 23 * OS1_S1 + 67) = prefactor_z * *(b + 23 * OS1_S1 + 41) -
                                      p_over_q * *(b + 42 * OS1_S1 + 41);
            *(b + 23 * OS1_S1 + 68) = prefactor_z * *(b + 23 * OS1_S1 + 42) -
                                      p_over_q * *(b + 42 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 23);
            *(b + 23 * OS1_S1 + 69) =
                prefactor_y * *(b + 23 * OS1_S1 + 44) -
                p_over_q * *(b + 41 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 44);
            *(b + 23 * OS1_S1 + 70) =
                prefactor_x * *(b + 23 * OS1_S1 + 49) -
                p_over_q * *(b + 38 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 49) +
                one_over_two_q * *(b + 23 * OS1_S1 + 34);
            *(b + 23 * OS1_S1 + 71) =
                prefactor_x * *(b + 23 * OS1_S1 + 50) -
                p_over_q * *(b + 38 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 50);
            *(b + 23 * OS1_S1 + 72) = prefactor_z * *(b + 23 * OS1_S1 + 45) -
                                      p_over_q * *(b + 42 * OS1_S1 + 45);
            *(b + 23 * OS1_S1 + 73) =
                prefactor_x * *(b + 23 * OS1_S1 + 52) -
                p_over_q * *(b + 38 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 52);
            *(b + 23 * OS1_S1 + 74) =
                prefactor_x * *(b + 23 * OS1_S1 + 53) -
                p_over_q * *(b + 38 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 53);
            *(b + 23 * OS1_S1 + 75) =
                prefactor_y * *(b + 23 * OS1_S1 + 49) -
                p_over_q * *(b + 41 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 49);
            *(b + 23 * OS1_S1 + 76) =
                prefactor_x * *(b + 23 * OS1_S1 + 55) -
                p_over_q * *(b + 38 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 55);
            *(b + 23 * OS1_S1 + 77) =
                prefactor_y * *(b + 23 * OS1_S1 + 50) -
                p_over_q * *(b + 41 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 23 * OS1_S1 + 30);
            *(b + 23 * OS1_S1 + 78) = prefactor_z * *(b + 23 * OS1_S1 + 50) -
                                      p_over_q * *(b + 42 * OS1_S1 + 50);
            *(b + 23 * OS1_S1 + 79) = prefactor_z * *(b + 23 * OS1_S1 + 51) -
                                      p_over_q * *(b + 42 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 30);
            *(b + 23 * OS1_S1 + 80) =
                prefactor_z * *(b + 23 * OS1_S1 + 52) -
                p_over_q * *(b + 42 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 31);
            *(b + 23 * OS1_S1 + 81) =
                prefactor_y * *(b + 23 * OS1_S1 + 54) -
                p_over_q * *(b + 41 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 54) +
                one_over_two_q * *(b + 23 * OS1_S1 + 34);
            *(b + 23 * OS1_S1 + 82) =
                prefactor_y * *(b + 23 * OS1_S1 + 55) -
                p_over_q * *(b + 41 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 55);
            *(b + 23 * OS1_S1 + 83) =
                prefactor_z * *(b + 23 * OS1_S1 + 55) -
                p_over_q * *(b + 42 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 23 * OS1_S1 + 34);
            *(b + 24 * OS1_S1 + 56) =
                prefactor_x * *(b + 24 * OS1_S1 + 35) -
                p_over_q * *(b + 39 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 24 * OS1_S1 + 20);
            *(b + 24 * OS1_S1 + 57) = prefactor_y * *(b + 24 * OS1_S1 + 35) -
                                      p_over_q * *(b + 42 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 35);
            *(b + 24 * OS1_S1 + 58) = prefactor_z * *(b + 24 * OS1_S1 + 35) -
                                      p_over_q * *(b + 43 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 35);
            *(b + 24 * OS1_S1 + 59) = prefactor_y * *(b + 24 * OS1_S1 + 36) -
                                      p_over_q * *(b + 42 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 20);
            *(b + 24 * OS1_S1 + 60) = prefactor_z * *(b + 24 * OS1_S1 + 36) -
                                      p_over_q * *(b + 43 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 36);
            *(b + 24 * OS1_S1 + 61) = prefactor_z * *(b + 24 * OS1_S1 + 37) -
                                      p_over_q * *(b + 43 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 20);
            *(b + 24 * OS1_S1 + 62) =
                prefactor_y * *(b + 24 * OS1_S1 + 38) -
                p_over_q * *(b + 42 * OS1_S1 + 38) +
                one_over_two_q * *(b + 12 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 21);
            *(b + 24 * OS1_S1 + 63) = prefactor_z * *(b + 24 * OS1_S1 + 38) -
                                      p_over_q * *(b + 43 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 38);
            *(b + 24 * OS1_S1 + 64) = prefactor_y * *(b + 24 * OS1_S1 + 40) -
                                      p_over_q * *(b + 42 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 40);
            *(b + 24 * OS1_S1 + 65) =
                prefactor_z * *(b + 24 * OS1_S1 + 40) -
                p_over_q * *(b + 43 * OS1_S1 + 40) +
                one_over_two_q * *(b + 11 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 22);
            *(b + 24 * OS1_S1 + 66) =
                prefactor_x * *(b + 24 * OS1_S1 + 45) -
                p_over_q * *(b + 39 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 45) +
                one_over_two_q * *(b + 24 * OS1_S1 + 30);
            *(b + 24 * OS1_S1 + 67) = prefactor_z * *(b + 24 * OS1_S1 + 41) -
                                      p_over_q * *(b + 43 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 41);
            *(b + 24 * OS1_S1 + 68) = prefactor_z * *(b + 24 * OS1_S1 + 42) -
                                      p_over_q * *(b + 43 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 23);
            *(b + 24 * OS1_S1 + 69) = prefactor_y * *(b + 24 * OS1_S1 + 44) -
                                      p_over_q * *(b + 42 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 44);
            *(b + 24 * OS1_S1 + 70) =
                prefactor_x * *(b + 24 * OS1_S1 + 49) -
                p_over_q * *(b + 39 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 49) +
                one_over_two_q * *(b + 24 * OS1_S1 + 34);
            *(b + 24 * OS1_S1 + 71) =
                prefactor_x * *(b + 24 * OS1_S1 + 50) -
                p_over_q * *(b + 39 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 50);
            *(b + 24 * OS1_S1 + 72) = prefactor_z * *(b + 24 * OS1_S1 + 45) -
                                      p_over_q * *(b + 43 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 45);
            *(b + 24 * OS1_S1 + 73) =
                prefactor_x * *(b + 24 * OS1_S1 + 52) -
                p_over_q * *(b + 39 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 52);
            *(b + 24 * OS1_S1 + 74) =
                prefactor_x * *(b + 24 * OS1_S1 + 53) -
                p_over_q * *(b + 39 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 53);
            *(b + 24 * OS1_S1 + 75) = prefactor_y * *(b + 24 * OS1_S1 + 49) -
                                      p_over_q * *(b + 42 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 49);
            *(b + 24 * OS1_S1 + 76) =
                prefactor_x * *(b + 24 * OS1_S1 + 55) -
                p_over_q * *(b + 39 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 55);
            *(b + 24 * OS1_S1 + 77) =
                prefactor_y * *(b + 24 * OS1_S1 + 50) -
                p_over_q * *(b + 42 * OS1_S1 + 50) +
                one_over_two_q * *(b + 12 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 24 * OS1_S1 + 30);
            *(b + 24 * OS1_S1 + 78) = prefactor_z * *(b + 24 * OS1_S1 + 50) -
                                      p_over_q * *(b + 43 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 50);
            *(b + 24 * OS1_S1 + 79) = prefactor_z * *(b + 24 * OS1_S1 + 51) -
                                      p_over_q * *(b + 43 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 30);
            *(b + 24 * OS1_S1 + 80) =
                prefactor_z * *(b + 24 * OS1_S1 + 52) -
                p_over_q * *(b + 43 * OS1_S1 + 52) +
                one_over_two_q * *(b + 11 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 31);
            *(b + 24 * OS1_S1 + 81) = prefactor_y * *(b + 24 * OS1_S1 + 54) -
                                      p_over_q * *(b + 42 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 34);
            *(b + 24 * OS1_S1 + 82) = prefactor_y * *(b + 24 * OS1_S1 + 55) -
                                      p_over_q * *(b + 42 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 55);
            *(b + 24 * OS1_S1 + 83) =
                prefactor_z * *(b + 24 * OS1_S1 + 55) -
                p_over_q * *(b + 43 * OS1_S1 + 55) +
                one_over_two_q * *(b + 11 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 24 * OS1_S1 + 34);
            *(b + 25 * OS1_S1 + 56) =
                prefactor_x * *(b + 25 * OS1_S1 + 35) -
                p_over_q * *(b + 40 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 25 * OS1_S1 + 20);
            *(b + 25 * OS1_S1 + 57) = prefactor_y * *(b + 25 * OS1_S1 + 35) -
                                      p_over_q * *(b + 43 * OS1_S1 + 35);
            *(b + 25 * OS1_S1 + 58) =
                prefactor_z * *(b + 25 * OS1_S1 + 35) -
                p_over_q * *(b + 44 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 35);
            *(b + 25 * OS1_S1 + 59) = prefactor_y * *(b + 25 * OS1_S1 + 36) -
                                      p_over_q * *(b + 43 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 20);
            *(b + 25 * OS1_S1 + 60) = prefactor_y * *(b + 25 * OS1_S1 + 37) -
                                      p_over_q * *(b + 43 * OS1_S1 + 37);
            *(b + 25 * OS1_S1 + 61) =
                prefactor_z * *(b + 25 * OS1_S1 + 37) -
                p_over_q * *(b + 44 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 37) +
                one_over_two_q * *(b + 25 * OS1_S1 + 20);
            *(b + 25 * OS1_S1 + 62) =
                prefactor_y * *(b + 25 * OS1_S1 + 38) -
                p_over_q * *(b + 43 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 21);
            *(b + 25 * OS1_S1 + 63) =
                prefactor_z * *(b + 25 * OS1_S1 + 38) -
                p_over_q * *(b + 44 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 38);
            *(b + 25 * OS1_S1 + 64) = prefactor_y * *(b + 25 * OS1_S1 + 40) -
                                      p_over_q * *(b + 43 * OS1_S1 + 40);
            *(b + 25 * OS1_S1 + 65) =
                prefactor_z * *(b + 25 * OS1_S1 + 40) -
                p_over_q * *(b + 44 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 22);
            *(b + 25 * OS1_S1 + 66) =
                prefactor_x * *(b + 25 * OS1_S1 + 45) -
                p_over_q * *(b + 40 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 45) +
                one_over_two_q * *(b + 25 * OS1_S1 + 30);
            *(b + 25 * OS1_S1 + 67) =
                prefactor_z * *(b + 25 * OS1_S1 + 41) -
                p_over_q * *(b + 44 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 41);
            *(b + 25 * OS1_S1 + 68) = prefactor_y * *(b + 25 * OS1_S1 + 43) -
                                      p_over_q * *(b + 43 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 25);
            *(b + 25 * OS1_S1 + 69) = prefactor_y * *(b + 25 * OS1_S1 + 44) -
                                      p_over_q * *(b + 43 * OS1_S1 + 44);
            *(b + 25 * OS1_S1 + 70) =
                prefactor_x * *(b + 25 * OS1_S1 + 49) -
                p_over_q * *(b + 40 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 49) +
                one_over_two_q * *(b + 25 * OS1_S1 + 34);
            *(b + 25 * OS1_S1 + 71) =
                prefactor_x * *(b + 25 * OS1_S1 + 50) -
                p_over_q * *(b + 40 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 50);
            *(b + 25 * OS1_S1 + 72) =
                prefactor_z * *(b + 25 * OS1_S1 + 45) -
                p_over_q * *(b + 44 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 45);
            *(b + 25 * OS1_S1 + 73) =
                prefactor_x * *(b + 25 * OS1_S1 + 52) -
                p_over_q * *(b + 40 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 52);
            *(b + 25 * OS1_S1 + 74) =
                prefactor_x * *(b + 25 * OS1_S1 + 53) -
                p_over_q * *(b + 40 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 53);
            *(b + 25 * OS1_S1 + 75) = prefactor_y * *(b + 25 * OS1_S1 + 49) -
                                      p_over_q * *(b + 43 * OS1_S1 + 49);
            *(b + 25 * OS1_S1 + 76) =
                prefactor_x * *(b + 25 * OS1_S1 + 55) -
                p_over_q * *(b + 40 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 55);
            *(b + 25 * OS1_S1 + 77) =
                prefactor_y * *(b + 25 * OS1_S1 + 50) -
                p_over_q * *(b + 43 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 25 * OS1_S1 + 30);
            *(b + 25 * OS1_S1 + 78) =
                prefactor_z * *(b + 25 * OS1_S1 + 50) -
                p_over_q * *(b + 44 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 50);
            *(b + 25 * OS1_S1 + 79) =
                prefactor_z * *(b + 25 * OS1_S1 + 51) -
                p_over_q * *(b + 44 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 51) +
                one_over_two_q * *(b + 25 * OS1_S1 + 30);
            *(b + 25 * OS1_S1 + 80) =
                prefactor_y * *(b + 25 * OS1_S1 + 53) -
                p_over_q * *(b + 43 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 33);
            *(b + 25 * OS1_S1 + 81) = prefactor_y * *(b + 25 * OS1_S1 + 54) -
                                      p_over_q * *(b + 43 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 34);
            *(b + 25 * OS1_S1 + 82) = prefactor_y * *(b + 25 * OS1_S1 + 55) -
                                      p_over_q * *(b + 43 * OS1_S1 + 55);
            *(b + 25 * OS1_S1 + 83) =
                prefactor_z * *(b + 25 * OS1_S1 + 55) -
                p_over_q * *(b + 44 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 25 * OS1_S1 + 34);
            *(b + 26 * OS1_S1 + 56) =
                prefactor_x * *(b + 26 * OS1_S1 + 35) -
                p_over_q * *(b + 41 * OS1_S1 + 35) +
                one_over_two_q * *(b + 16 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 26 * OS1_S1 + 20);
            *(b + 26 * OS1_S1 + 57) =
                prefactor_y * *(b + 26 * OS1_S1 + 35) -
                p_over_q * *(b + 45 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 35);
            *(b + 26 * OS1_S1 + 58) = prefactor_z * *(b + 26 * OS1_S1 + 35) -
                                      p_over_q * *(b + 46 * OS1_S1 + 35);
            *(b + 26 * OS1_S1 + 59) =
                prefactor_y * *(b + 26 * OS1_S1 + 36) -
                p_over_q * *(b + 45 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 36) +
                one_over_two_q * *(b + 26 * OS1_S1 + 20);
            *(b + 26 * OS1_S1 + 60) = prefactor_z * *(b + 26 * OS1_S1 + 36) -
                                      p_over_q * *(b + 46 * OS1_S1 + 36);
            *(b + 26 * OS1_S1 + 61) = prefactor_z * *(b + 26 * OS1_S1 + 37) -
                                      p_over_q * *(b + 46 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 20);
            *(b + 26 * OS1_S1 + 62) =
                prefactor_x * *(b + 26 * OS1_S1 + 41) -
                p_over_q * *(b + 41 * OS1_S1 + 41) +
                one_over_two_q * *(b + 16 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 26);
            *(b + 26 * OS1_S1 + 63) = prefactor_z * *(b + 26 * OS1_S1 + 38) -
                                      p_over_q * *(b + 46 * OS1_S1 + 38);
            *(b + 26 * OS1_S1 + 64) =
                prefactor_y * *(b + 26 * OS1_S1 + 40) -
                p_over_q * *(b + 45 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 40);
            *(b + 26 * OS1_S1 + 65) =
                prefactor_z * *(b + 26 * OS1_S1 + 40) -
                p_over_q * *(b + 46 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 22);
            *(b + 26 * OS1_S1 + 66) = prefactor_x * *(b + 26 * OS1_S1 + 45) -
                                      p_over_q * *(b + 41 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 30);
            *(b + 26 * OS1_S1 + 67) = prefactor_z * *(b + 26 * OS1_S1 + 41) -
                                      p_over_q * *(b + 46 * OS1_S1 + 41);
            *(b + 26 * OS1_S1 + 68) = prefactor_z * *(b + 26 * OS1_S1 + 42) -
                                      p_over_q * *(b + 46 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 23);
            *(b + 26 * OS1_S1 + 69) =
                prefactor_y * *(b + 26 * OS1_S1 + 44) -
                p_over_q * *(b + 45 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 44);
            *(b + 26 * OS1_S1 + 70) = prefactor_x * *(b + 26 * OS1_S1 + 49) -
                                      p_over_q * *(b + 41 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 34);
            *(b + 26 * OS1_S1 + 71) = prefactor_x * *(b + 26 * OS1_S1 + 50) -
                                      p_over_q * *(b + 41 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 50);
            *(b + 26 * OS1_S1 + 72) = prefactor_z * *(b + 26 * OS1_S1 + 45) -
                                      p_over_q * *(b + 46 * OS1_S1 + 45);
            *(b + 26 * OS1_S1 + 73) = prefactor_x * *(b + 26 * OS1_S1 + 52) -
                                      p_over_q * *(b + 41 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 52);
            *(b + 26 * OS1_S1 + 74) = prefactor_x * *(b + 26 * OS1_S1 + 53) -
                                      p_over_q * *(b + 41 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 53);
            *(b + 26 * OS1_S1 + 75) = prefactor_x * *(b + 26 * OS1_S1 + 54) -
                                      p_over_q * *(b + 41 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 54);
            *(b + 26 * OS1_S1 + 76) = prefactor_x * *(b + 26 * OS1_S1 + 55) -
                                      p_over_q * *(b + 41 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 55);
            *(b + 26 * OS1_S1 + 77) =
                prefactor_y * *(b + 26 * OS1_S1 + 50) -
                p_over_q * *(b + 45 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 26 * OS1_S1 + 30);
            *(b + 26 * OS1_S1 + 78) = prefactor_z * *(b + 26 * OS1_S1 + 50) -
                                      p_over_q * *(b + 46 * OS1_S1 + 50);
            *(b + 26 * OS1_S1 + 79) = prefactor_z * *(b + 26 * OS1_S1 + 51) -
                                      p_over_q * *(b + 46 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 30);
            *(b + 26 * OS1_S1 + 80) =
                prefactor_z * *(b + 26 * OS1_S1 + 52) -
                p_over_q * *(b + 46 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 31);
            *(b + 26 * OS1_S1 + 81) =
                prefactor_y * *(b + 26 * OS1_S1 + 54) -
                p_over_q * *(b + 45 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 54) +
                one_over_two_q * *(b + 26 * OS1_S1 + 34);
            *(b + 26 * OS1_S1 + 82) =
                prefactor_y * *(b + 26 * OS1_S1 + 55) -
                p_over_q * *(b + 45 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 55);
            *(b + 26 * OS1_S1 + 83) =
                prefactor_z * *(b + 26 * OS1_S1 + 55) -
                p_over_q * *(b + 46 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 26 * OS1_S1 + 34);
            *(b + 27 * OS1_S1 + 56) =
                prefactor_x * *(b + 27 * OS1_S1 + 35) -
                p_over_q * *(b + 42 * OS1_S1 + 35) +
                one_over_two_q * *(b + 17 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 27 * OS1_S1 + 20);
            *(b + 27 * OS1_S1 + 57) =
                prefactor_y * *(b + 27 * OS1_S1 + 35) -
                p_over_q * *(b + 46 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 35);
            *(b + 27 * OS1_S1 + 58) = prefactor_z * *(b + 27 * OS1_S1 + 35) -
                                      p_over_q * *(b + 47 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 35);
            *(b + 27 * OS1_S1 + 59) =
                prefactor_y * *(b + 27 * OS1_S1 + 36) -
                p_over_q * *(b + 46 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 36) +
                one_over_two_q * *(b + 27 * OS1_S1 + 20);
            *(b + 27 * OS1_S1 + 60) = prefactor_z * *(b + 27 * OS1_S1 + 36) -
                                      p_over_q * *(b + 47 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 36);
            *(b + 27 * OS1_S1 + 61) = prefactor_z * *(b + 27 * OS1_S1 + 37) -
                                      p_over_q * *(b + 47 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 20);
            *(b + 27 * OS1_S1 + 62) =
                prefactor_x * *(b + 27 * OS1_S1 + 41) -
                p_over_q * *(b + 42 * OS1_S1 + 41) +
                one_over_two_q * *(b + 17 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 26);
            *(b + 27 * OS1_S1 + 63) = prefactor_z * *(b + 27 * OS1_S1 + 38) -
                                      p_over_q * *(b + 47 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 38);
            *(b + 27 * OS1_S1 + 64) =
                prefactor_y * *(b + 27 * OS1_S1 + 40) -
                p_over_q * *(b + 46 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 40);
            *(b + 27 * OS1_S1 + 65) =
                prefactor_z * *(b + 27 * OS1_S1 + 40) -
                p_over_q * *(b + 47 * OS1_S1 + 40) +
                one_over_two_q * *(b + 13 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 22);
            *(b + 27 * OS1_S1 + 66) = prefactor_x * *(b + 27 * OS1_S1 + 45) -
                                      p_over_q * *(b + 42 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 30);
            *(b + 27 * OS1_S1 + 67) = prefactor_z * *(b + 27 * OS1_S1 + 41) -
                                      p_over_q * *(b + 47 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 41);
            *(b + 27 * OS1_S1 + 68) = prefactor_z * *(b + 27 * OS1_S1 + 42) -
                                      p_over_q * *(b + 47 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 23);
            *(b + 27 * OS1_S1 + 69) =
                prefactor_y * *(b + 27 * OS1_S1 + 44) -
                p_over_q * *(b + 46 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 44);
            *(b + 27 * OS1_S1 + 70) = prefactor_x * *(b + 27 * OS1_S1 + 49) -
                                      p_over_q * *(b + 42 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 34);
            *(b + 27 * OS1_S1 + 71) = prefactor_x * *(b + 27 * OS1_S1 + 50) -
                                      p_over_q * *(b + 42 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 50);
            *(b + 27 * OS1_S1 + 72) = prefactor_z * *(b + 27 * OS1_S1 + 45) -
                                      p_over_q * *(b + 47 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 45);
            *(b + 27 * OS1_S1 + 73) = prefactor_x * *(b + 27 * OS1_S1 + 52) -
                                      p_over_q * *(b + 42 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 52);
            *(b + 27 * OS1_S1 + 74) = prefactor_x * *(b + 27 * OS1_S1 + 53) -
                                      p_over_q * *(b + 42 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 53);
            *(b + 27 * OS1_S1 + 75) = prefactor_x * *(b + 27 * OS1_S1 + 54) -
                                      p_over_q * *(b + 42 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 54);
            *(b + 27 * OS1_S1 + 76) = prefactor_x * *(b + 27 * OS1_S1 + 55) -
                                      p_over_q * *(b + 42 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 55);
            *(b + 27 * OS1_S1 + 77) =
                prefactor_y * *(b + 27 * OS1_S1 + 50) -
                p_over_q * *(b + 46 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 27 * OS1_S1 + 30);
            *(b + 27 * OS1_S1 + 78) = prefactor_z * *(b + 27 * OS1_S1 + 50) -
                                      p_over_q * *(b + 47 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 50);
            *(b + 27 * OS1_S1 + 79) = prefactor_z * *(b + 27 * OS1_S1 + 51) -
                                      p_over_q * *(b + 47 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 30);
            *(b + 27 * OS1_S1 + 80) =
                prefactor_z * *(b + 27 * OS1_S1 + 52) -
                p_over_q * *(b + 47 * OS1_S1 + 52) +
                one_over_two_q * *(b + 13 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 31);
            *(b + 27 * OS1_S1 + 81) =
                prefactor_y * *(b + 27 * OS1_S1 + 54) -
                p_over_q * *(b + 46 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 54) +
                one_over_two_q * *(b + 27 * OS1_S1 + 34);
            *(b + 27 * OS1_S1 + 82) =
                prefactor_y * *(b + 27 * OS1_S1 + 55) -
                p_over_q * *(b + 46 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 55);
            *(b + 27 * OS1_S1 + 83) =
                prefactor_z * *(b + 27 * OS1_S1 + 55) -
                p_over_q * *(b + 47 * OS1_S1 + 55) +
                one_over_two_q * *(b + 13 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 27 * OS1_S1 + 34);
            *(b + 28 * OS1_S1 + 56) =
                prefactor_x * *(b + 28 * OS1_S1 + 35) -
                p_over_q * *(b + 43 * OS1_S1 + 35) +
                one_over_two_q * *(b + 18 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 28 * OS1_S1 + 20);
            *(b + 28 * OS1_S1 + 57) = prefactor_y * *(b + 28 * OS1_S1 + 35) -
                                      p_over_q * *(b + 47 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 35);
            *(b + 28 * OS1_S1 + 58) =
                prefactor_z * *(b + 28 * OS1_S1 + 35) -
                p_over_q * *(b + 48 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 35);
            *(b + 28 * OS1_S1 + 59) = prefactor_y * *(b + 28 * OS1_S1 + 36) -
                                      p_over_q * *(b + 47 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 20);
            *(b + 28 * OS1_S1 + 60) = prefactor_y * *(b + 28 * OS1_S1 + 37) -
                                      p_over_q * *(b + 47 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 37);
            *(b + 28 * OS1_S1 + 61) =
                prefactor_z * *(b + 28 * OS1_S1 + 37) -
                p_over_q * *(b + 48 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 37) +
                one_over_two_q * *(b + 28 * OS1_S1 + 20);
            *(b + 28 * OS1_S1 + 62) =
                prefactor_y * *(b + 28 * OS1_S1 + 38) -
                p_over_q * *(b + 47 * OS1_S1 + 38) +
                one_over_two_q * *(b + 15 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 21);
            *(b + 28 * OS1_S1 + 63) =
                prefactor_z * *(b + 28 * OS1_S1 + 38) -
                p_over_q * *(b + 48 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 38);
            *(b + 28 * OS1_S1 + 64) = prefactor_y * *(b + 28 * OS1_S1 + 40) -
                                      p_over_q * *(b + 47 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 40);
            *(b + 28 * OS1_S1 + 65) =
                prefactor_x * *(b + 28 * OS1_S1 + 44) -
                p_over_q * *(b + 43 * OS1_S1 + 44) +
                one_over_two_q * *(b + 18 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 29);
            *(b + 28 * OS1_S1 + 66) = prefactor_x * *(b + 28 * OS1_S1 + 45) -
                                      p_over_q * *(b + 43 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 30);
            *(b + 28 * OS1_S1 + 67) =
                prefactor_z * *(b + 28 * OS1_S1 + 41) -
                p_over_q * *(b + 48 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 41);
            *(b + 28 * OS1_S1 + 68) = prefactor_y * *(b + 28 * OS1_S1 + 43) -
                                      p_over_q * *(b + 47 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 25);
            *(b + 28 * OS1_S1 + 69) = prefactor_y * *(b + 28 * OS1_S1 + 44) -
                                      p_over_q * *(b + 47 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 44);
            *(b + 28 * OS1_S1 + 70) = prefactor_x * *(b + 28 * OS1_S1 + 49) -
                                      p_over_q * *(b + 43 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 34);
            *(b + 28 * OS1_S1 + 71) = prefactor_x * *(b + 28 * OS1_S1 + 50) -
                                      p_over_q * *(b + 43 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 50);
            *(b + 28 * OS1_S1 + 72) = prefactor_x * *(b + 28 * OS1_S1 + 51) -
                                      p_over_q * *(b + 43 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 51);
            *(b + 28 * OS1_S1 + 73) = prefactor_x * *(b + 28 * OS1_S1 + 52) -
                                      p_over_q * *(b + 43 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 52);
            *(b + 28 * OS1_S1 + 74) = prefactor_x * *(b + 28 * OS1_S1 + 53) -
                                      p_over_q * *(b + 43 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 53);
            *(b + 28 * OS1_S1 + 75) = prefactor_y * *(b + 28 * OS1_S1 + 49) -
                                      p_over_q * *(b + 47 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 49);
            *(b + 28 * OS1_S1 + 76) = prefactor_x * *(b + 28 * OS1_S1 + 55) -
                                      p_over_q * *(b + 43 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 55);
            *(b + 28 * OS1_S1 + 77) =
                prefactor_y * *(b + 28 * OS1_S1 + 50) -
                p_over_q * *(b + 47 * OS1_S1 + 50) +
                one_over_two_q * *(b + 15 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 28 * OS1_S1 + 30);
            *(b + 28 * OS1_S1 + 78) =
                prefactor_z * *(b + 28 * OS1_S1 + 50) -
                p_over_q * *(b + 48 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 50);
            *(b + 28 * OS1_S1 + 79) =
                prefactor_z * *(b + 28 * OS1_S1 + 51) -
                p_over_q * *(b + 48 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 51) +
                one_over_two_q * *(b + 28 * OS1_S1 + 30);
            *(b + 28 * OS1_S1 + 80) =
                prefactor_y * *(b + 28 * OS1_S1 + 53) -
                p_over_q * *(b + 47 * OS1_S1 + 53) +
                one_over_two_q * *(b + 15 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 33);
            *(b + 28 * OS1_S1 + 81) = prefactor_y * *(b + 28 * OS1_S1 + 54) -
                                      p_over_q * *(b + 47 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 34);
            *(b + 28 * OS1_S1 + 82) = prefactor_y * *(b + 28 * OS1_S1 + 55) -
                                      p_over_q * *(b + 47 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 55);
            *(b + 28 * OS1_S1 + 83) =
                prefactor_z * *(b + 28 * OS1_S1 + 55) -
                p_over_q * *(b + 48 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 28 * OS1_S1 + 34);
            *(b + 29 * OS1_S1 + 56) =
                prefactor_x * *(b + 29 * OS1_S1 + 35) -
                p_over_q * *(b + 44 * OS1_S1 + 35) +
                one_over_two_q * *(b + 19 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 29 * OS1_S1 + 20);
            *(b + 29 * OS1_S1 + 57) = prefactor_y * *(b + 29 * OS1_S1 + 35) -
                                      p_over_q * *(b + 48 * OS1_S1 + 35);
            *(b + 29 * OS1_S1 + 58) =
                prefactor_z * *(b + 29 * OS1_S1 + 35) -
                p_over_q * *(b + 49 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 35);
            *(b + 29 * OS1_S1 + 59) = prefactor_y * *(b + 29 * OS1_S1 + 36) -
                                      p_over_q * *(b + 48 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 20);
            *(b + 29 * OS1_S1 + 60) = prefactor_y * *(b + 29 * OS1_S1 + 37) -
                                      p_over_q * *(b + 48 * OS1_S1 + 37);
            *(b + 29 * OS1_S1 + 61) =
                prefactor_z * *(b + 29 * OS1_S1 + 37) -
                p_over_q * *(b + 49 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 37) +
                one_over_two_q * *(b + 29 * OS1_S1 + 20);
            *(b + 29 * OS1_S1 + 62) =
                prefactor_y * *(b + 29 * OS1_S1 + 38) -
                p_over_q * *(b + 48 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 21);
            *(b + 29 * OS1_S1 + 63) =
                prefactor_z * *(b + 29 * OS1_S1 + 38) -
                p_over_q * *(b + 49 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 38);
            *(b + 29 * OS1_S1 + 64) = prefactor_y * *(b + 29 * OS1_S1 + 40) -
                                      p_over_q * *(b + 48 * OS1_S1 + 40);
            *(b + 29 * OS1_S1 + 65) =
                prefactor_x * *(b + 29 * OS1_S1 + 44) -
                p_over_q * *(b + 44 * OS1_S1 + 44) +
                one_over_two_q * *(b + 19 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 29);
            *(b + 29 * OS1_S1 + 66) = prefactor_x * *(b + 29 * OS1_S1 + 45) -
                                      p_over_q * *(b + 44 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 30);
            *(b + 29 * OS1_S1 + 67) =
                prefactor_z * *(b + 29 * OS1_S1 + 41) -
                p_over_q * *(b + 49 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 41);
            *(b + 29 * OS1_S1 + 68) = prefactor_y * *(b + 29 * OS1_S1 + 43) -
                                      p_over_q * *(b + 48 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 25);
            *(b + 29 * OS1_S1 + 69) = prefactor_y * *(b + 29 * OS1_S1 + 44) -
                                      p_over_q * *(b + 48 * OS1_S1 + 44);
            *(b + 29 * OS1_S1 + 70) = prefactor_x * *(b + 29 * OS1_S1 + 49) -
                                      p_over_q * *(b + 44 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 34);
            *(b + 29 * OS1_S1 + 71) = prefactor_x * *(b + 29 * OS1_S1 + 50) -
                                      p_over_q * *(b + 44 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 50);
            *(b + 29 * OS1_S1 + 72) = prefactor_x * *(b + 29 * OS1_S1 + 51) -
                                      p_over_q * *(b + 44 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 51);
            *(b + 29 * OS1_S1 + 73) = prefactor_x * *(b + 29 * OS1_S1 + 52) -
                                      p_over_q * *(b + 44 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 52);
            *(b + 29 * OS1_S1 + 74) = prefactor_x * *(b + 29 * OS1_S1 + 53) -
                                      p_over_q * *(b + 44 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 53);
            *(b + 29 * OS1_S1 + 75) = prefactor_y * *(b + 29 * OS1_S1 + 49) -
                                      p_over_q * *(b + 48 * OS1_S1 + 49);
            *(b + 29 * OS1_S1 + 76) = prefactor_x * *(b + 29 * OS1_S1 + 55) -
                                      p_over_q * *(b + 44 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 55);
            *(b + 29 * OS1_S1 + 77) =
                prefactor_y * *(b + 29 * OS1_S1 + 50) -
                p_over_q * *(b + 48 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 29 * OS1_S1 + 30);
            *(b + 29 * OS1_S1 + 78) =
                prefactor_z * *(b + 29 * OS1_S1 + 50) -
                p_over_q * *(b + 49 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 50);
            *(b + 29 * OS1_S1 + 79) =
                prefactor_z * *(b + 29 * OS1_S1 + 51) -
                p_over_q * *(b + 49 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 51) +
                one_over_two_q * *(b + 29 * OS1_S1 + 30);
            *(b + 29 * OS1_S1 + 80) =
                prefactor_y * *(b + 29 * OS1_S1 + 53) -
                p_over_q * *(b + 48 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 33);
            *(b + 29 * OS1_S1 + 81) = prefactor_y * *(b + 29 * OS1_S1 + 54) -
                                      p_over_q * *(b + 48 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 34);
            *(b + 29 * OS1_S1 + 82) = prefactor_y * *(b + 29 * OS1_S1 + 55) -
                                      p_over_q * *(b + 48 * OS1_S1 + 55);
            *(b + 29 * OS1_S1 + 83) =
                prefactor_z * *(b + 29 * OS1_S1 + 55) -
                p_over_q * *(b + 49 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 29 * OS1_S1 + 34);
            *(b + 30 * OS1_S1 + 56) =
                prefactor_x * *(b + 30 * OS1_S1 + 35) -
                p_over_q * *(b + 45 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 20);
            *(b + 30 * OS1_S1 + 57) =
                prefactor_y * *(b + 30 * OS1_S1 + 35) -
                p_over_q * *(b + 50 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 35);
            *(b + 30 * OS1_S1 + 58) = prefactor_z * *(b + 30 * OS1_S1 + 35) -
                                      p_over_q * *(b + 51 * OS1_S1 + 35);
            *(b + 30 * OS1_S1 + 59) =
                prefactor_y * *(b + 30 * OS1_S1 + 36) -
                p_over_q * *(b + 50 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 36) +
                one_over_two_q * *(b + 30 * OS1_S1 + 20);
            *(b + 30 * OS1_S1 + 60) = prefactor_z * *(b + 30 * OS1_S1 + 36) -
                                      p_over_q * *(b + 51 * OS1_S1 + 36);
            *(b + 30 * OS1_S1 + 61) = prefactor_z * *(b + 30 * OS1_S1 + 37) -
                                      p_over_q * *(b + 51 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 20);
            *(b + 30 * OS1_S1 + 62) =
                prefactor_x * *(b + 30 * OS1_S1 + 41) -
                p_over_q * *(b + 45 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 26);
            *(b + 30 * OS1_S1 + 63) = prefactor_z * *(b + 30 * OS1_S1 + 38) -
                                      p_over_q * *(b + 51 * OS1_S1 + 38);
            *(b + 30 * OS1_S1 + 64) =
                prefactor_y * *(b + 30 * OS1_S1 + 40) -
                p_over_q * *(b + 50 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 40);
            *(b + 30 * OS1_S1 + 65) =
                prefactor_z * *(b + 30 * OS1_S1 + 40) -
                p_over_q * *(b + 51 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 22);
            *(b + 30 * OS1_S1 + 66) = prefactor_x * *(b + 30 * OS1_S1 + 45) -
                                      p_over_q * *(b + 45 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 30);
            *(b + 30 * OS1_S1 + 67) = prefactor_z * *(b + 30 * OS1_S1 + 41) -
                                      p_over_q * *(b + 51 * OS1_S1 + 41);
            *(b + 30 * OS1_S1 + 68) = prefactor_z * *(b + 30 * OS1_S1 + 42) -
                                      p_over_q * *(b + 51 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 23);
            *(b + 30 * OS1_S1 + 69) =
                prefactor_y * *(b + 30 * OS1_S1 + 44) -
                p_over_q * *(b + 50 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 44);
            *(b + 30 * OS1_S1 + 70) = prefactor_x * *(b + 30 * OS1_S1 + 49) -
                                      p_over_q * *(b + 45 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 34);
            *(b + 30 * OS1_S1 + 71) = prefactor_x * *(b + 30 * OS1_S1 + 50) -
                                      p_over_q * *(b + 45 * OS1_S1 + 50);
            *(b + 30 * OS1_S1 + 72) = prefactor_z * *(b + 30 * OS1_S1 + 45) -
                                      p_over_q * *(b + 51 * OS1_S1 + 45);
            *(b + 30 * OS1_S1 + 73) = prefactor_x * *(b + 30 * OS1_S1 + 52) -
                                      p_over_q * *(b + 45 * OS1_S1 + 52);
            *(b + 30 * OS1_S1 + 74) = prefactor_x * *(b + 30 * OS1_S1 + 53) -
                                      p_over_q * *(b + 45 * OS1_S1 + 53);
            *(b + 30 * OS1_S1 + 75) = prefactor_x * *(b + 30 * OS1_S1 + 54) -
                                      p_over_q * *(b + 45 * OS1_S1 + 54);
            *(b + 30 * OS1_S1 + 76) = prefactor_x * *(b + 30 * OS1_S1 + 55) -
                                      p_over_q * *(b + 45 * OS1_S1 + 55);
            *(b + 30 * OS1_S1 + 77) =
                prefactor_y * *(b + 30 * OS1_S1 + 50) -
                p_over_q * *(b + 50 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 30);
            *(b + 30 * OS1_S1 + 78) = prefactor_z * *(b + 30 * OS1_S1 + 50) -
                                      p_over_q * *(b + 51 * OS1_S1 + 50);
            *(b + 30 * OS1_S1 + 79) = prefactor_z * *(b + 30 * OS1_S1 + 51) -
                                      p_over_q * *(b + 51 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 30);
            *(b + 30 * OS1_S1 + 80) =
                prefactor_z * *(b + 30 * OS1_S1 + 52) -
                p_over_q * *(b + 51 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 31);
            *(b + 30 * OS1_S1 + 81) =
                prefactor_y * *(b + 30 * OS1_S1 + 54) -
                p_over_q * *(b + 50 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 54) +
                one_over_two_q * *(b + 30 * OS1_S1 + 34);
            *(b + 30 * OS1_S1 + 82) =
                prefactor_y * *(b + 30 * OS1_S1 + 55) -
                p_over_q * *(b + 50 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 55);
            *(b + 30 * OS1_S1 + 83) =
                prefactor_z * *(b + 30 * OS1_S1 + 55) -
                p_over_q * *(b + 51 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 34);
            *(b + 31 * OS1_S1 + 56) =
                prefactor_x * *(b + 31 * OS1_S1 + 35) -
                p_over_q * *(b + 46 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 31 * OS1_S1 + 20);
            *(b + 31 * OS1_S1 + 57) =
                prefactor_y * *(b + 31 * OS1_S1 + 35) -
                p_over_q * *(b + 51 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 35);
            *(b + 31 * OS1_S1 + 58) = prefactor_z * *(b + 31 * OS1_S1 + 35) -
                                      p_over_q * *(b + 52 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 35);
            *(b + 31 * OS1_S1 + 59) =
                prefactor_y * *(b + 31 * OS1_S1 + 36) -
                p_over_q * *(b + 51 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 36) +
                one_over_two_q * *(b + 31 * OS1_S1 + 20);
            *(b + 31 * OS1_S1 + 60) = prefactor_z * *(b + 31 * OS1_S1 + 36) -
                                      p_over_q * *(b + 52 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 36);
            *(b + 31 * OS1_S1 + 61) = prefactor_z * *(b + 31 * OS1_S1 + 37) -
                                      p_over_q * *(b + 52 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 20);
            *(b + 31 * OS1_S1 + 62) =
                prefactor_x * *(b + 31 * OS1_S1 + 41) -
                p_over_q * *(b + 46 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 26);
            *(b + 31 * OS1_S1 + 63) = prefactor_z * *(b + 31 * OS1_S1 + 38) -
                                      p_over_q * *(b + 52 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 38);
            *(b + 31 * OS1_S1 + 64) =
                prefactor_y * *(b + 31 * OS1_S1 + 40) -
                p_over_q * *(b + 51 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 40);
            *(b + 31 * OS1_S1 + 65) =
                prefactor_x * *(b + 31 * OS1_S1 + 44) -
                p_over_q * *(b + 46 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 29);
            *(b + 31 * OS1_S1 + 66) = prefactor_x * *(b + 31 * OS1_S1 + 45) -
                                      p_over_q * *(b + 46 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 30);
            *(b + 31 * OS1_S1 + 67) = prefactor_z * *(b + 31 * OS1_S1 + 41) -
                                      p_over_q * *(b + 52 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 41);
            *(b + 31 * OS1_S1 + 68) = prefactor_x * *(b + 31 * OS1_S1 + 47) -
                                      p_over_q * *(b + 46 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 32);
            *(b + 31 * OS1_S1 + 69) =
                prefactor_y * *(b + 31 * OS1_S1 + 44) -
                p_over_q * *(b + 51 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 44);
            *(b + 31 * OS1_S1 + 70) = prefactor_x * *(b + 31 * OS1_S1 + 49) -
                                      p_over_q * *(b + 46 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 34);
            *(b + 31 * OS1_S1 + 71) = prefactor_x * *(b + 31 * OS1_S1 + 50) -
                                      p_over_q * *(b + 46 * OS1_S1 + 50);
            *(b + 31 * OS1_S1 + 72) = prefactor_x * *(b + 31 * OS1_S1 + 51) -
                                      p_over_q * *(b + 46 * OS1_S1 + 51);
            *(b + 31 * OS1_S1 + 73) = prefactor_x * *(b + 31 * OS1_S1 + 52) -
                                      p_over_q * *(b + 46 * OS1_S1 + 52);
            *(b + 31 * OS1_S1 + 74) = prefactor_x * *(b + 31 * OS1_S1 + 53) -
                                      p_over_q * *(b + 46 * OS1_S1 + 53);
            *(b + 31 * OS1_S1 + 75) = prefactor_x * *(b + 31 * OS1_S1 + 54) -
                                      p_over_q * *(b + 46 * OS1_S1 + 54);
            *(b + 31 * OS1_S1 + 76) = prefactor_x * *(b + 31 * OS1_S1 + 55) -
                                      p_over_q * *(b + 46 * OS1_S1 + 55);
            *(b + 31 * OS1_S1 + 77) =
                prefactor_y * *(b + 31 * OS1_S1 + 50) -
                p_over_q * *(b + 51 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 31 * OS1_S1 + 30);
            *(b + 31 * OS1_S1 + 78) = prefactor_z * *(b + 31 * OS1_S1 + 50) -
                                      p_over_q * *(b + 52 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 50);
            *(b + 31 * OS1_S1 + 79) = prefactor_z * *(b + 31 * OS1_S1 + 51) -
                                      p_over_q * *(b + 52 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 30);
            *(b + 31 * OS1_S1 + 80) =
                prefactor_z * *(b + 31 * OS1_S1 + 52) -
                p_over_q * *(b + 52 * OS1_S1 + 52) +
                one_over_two_q * *(b + 16 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 31);
            *(b + 31 * OS1_S1 + 81) =
                prefactor_y * *(b + 31 * OS1_S1 + 54) -
                p_over_q * *(b + 51 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 54) +
                one_over_two_q * *(b + 31 * OS1_S1 + 34);
            *(b + 31 * OS1_S1 + 82) =
                prefactor_y * *(b + 31 * OS1_S1 + 55) -
                p_over_q * *(b + 51 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 55);
            *(b + 31 * OS1_S1 + 83) =
                prefactor_z * *(b + 31 * OS1_S1 + 55) -
                p_over_q * *(b + 52 * OS1_S1 + 55) +
                one_over_two_q * *(b + 16 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 31 * OS1_S1 + 34);
            *(b + 32 * OS1_S1 + 56) =
                prefactor_x * *(b + 32 * OS1_S1 + 35) -
                p_over_q * *(b + 47 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 32 * OS1_S1 + 20);
            *(b + 32 * OS1_S1 + 57) =
                prefactor_y * *(b + 32 * OS1_S1 + 35) -
                p_over_q * *(b + 52 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 35);
            *(b + 32 * OS1_S1 + 58) =
                prefactor_z * *(b + 32 * OS1_S1 + 35) -
                p_over_q * *(b + 53 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 35);
            *(b + 32 * OS1_S1 + 59) =
                prefactor_y * *(b + 32 * OS1_S1 + 36) -
                p_over_q * *(b + 52 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 36) +
                one_over_two_q * *(b + 32 * OS1_S1 + 20);
            *(b + 32 * OS1_S1 + 60) =
                prefactor_z * *(b + 32 * OS1_S1 + 36) -
                p_over_q * *(b + 53 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 36);
            *(b + 32 * OS1_S1 + 61) =
                prefactor_z * *(b + 32 * OS1_S1 + 37) -
                p_over_q * *(b + 53 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 37) +
                one_over_two_q * *(b + 32 * OS1_S1 + 20);
            *(b + 32 * OS1_S1 + 62) =
                prefactor_x * *(b + 32 * OS1_S1 + 41) -
                p_over_q * *(b + 47 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 26);
            *(b + 32 * OS1_S1 + 63) =
                prefactor_z * *(b + 32 * OS1_S1 + 38) -
                p_over_q * *(b + 53 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 38);
            *(b + 32 * OS1_S1 + 64) =
                prefactor_y * *(b + 32 * OS1_S1 + 40) -
                p_over_q * *(b + 52 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 40);
            *(b + 32 * OS1_S1 + 65) =
                prefactor_x * *(b + 32 * OS1_S1 + 44) -
                p_over_q * *(b + 47 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 29);
            *(b + 32 * OS1_S1 + 66) = prefactor_x * *(b + 32 * OS1_S1 + 45) -
                                      p_over_q * *(b + 47 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 30);
            *(b + 32 * OS1_S1 + 67) =
                prefactor_z * *(b + 32 * OS1_S1 + 41) -
                p_over_q * *(b + 53 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 41);
            *(b + 32 * OS1_S1 + 68) = prefactor_x * *(b + 32 * OS1_S1 + 47) -
                                      p_over_q * *(b + 47 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 32);
            *(b + 32 * OS1_S1 + 69) =
                prefactor_y * *(b + 32 * OS1_S1 + 44) -
                p_over_q * *(b + 52 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 44);
            *(b + 32 * OS1_S1 + 70) = prefactor_x * *(b + 32 * OS1_S1 + 49) -
                                      p_over_q * *(b + 47 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 34);
            *(b + 32 * OS1_S1 + 71) = prefactor_x * *(b + 32 * OS1_S1 + 50) -
                                      p_over_q * *(b + 47 * OS1_S1 + 50);
            *(b + 32 * OS1_S1 + 72) = prefactor_x * *(b + 32 * OS1_S1 + 51) -
                                      p_over_q * *(b + 47 * OS1_S1 + 51);
            *(b + 32 * OS1_S1 + 73) = prefactor_x * *(b + 32 * OS1_S1 + 52) -
                                      p_over_q * *(b + 47 * OS1_S1 + 52);
            *(b + 32 * OS1_S1 + 74) = prefactor_x * *(b + 32 * OS1_S1 + 53) -
                                      p_over_q * *(b + 47 * OS1_S1 + 53);
            *(b + 32 * OS1_S1 + 75) = prefactor_x * *(b + 32 * OS1_S1 + 54) -
                                      p_over_q * *(b + 47 * OS1_S1 + 54);
            *(b + 32 * OS1_S1 + 76) = prefactor_x * *(b + 32 * OS1_S1 + 55) -
                                      p_over_q * *(b + 47 * OS1_S1 + 55);
            *(b + 32 * OS1_S1 + 77) =
                prefactor_y * *(b + 32 * OS1_S1 + 50) -
                p_over_q * *(b + 52 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 32 * OS1_S1 + 30);
            *(b + 32 * OS1_S1 + 78) =
                prefactor_z * *(b + 32 * OS1_S1 + 50) -
                p_over_q * *(b + 53 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 50);
            *(b + 32 * OS1_S1 + 79) =
                prefactor_z * *(b + 32 * OS1_S1 + 51) -
                p_over_q * *(b + 53 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 51) +
                one_over_two_q * *(b + 32 * OS1_S1 + 30);
            *(b + 32 * OS1_S1 + 80) =
                prefactor_z * *(b + 32 * OS1_S1 + 52) -
                p_over_q * *(b + 53 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 31);
            *(b + 32 * OS1_S1 + 81) =
                prefactor_y * *(b + 32 * OS1_S1 + 54) -
                p_over_q * *(b + 52 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 54) +
                one_over_two_q * *(b + 32 * OS1_S1 + 34);
            *(b + 32 * OS1_S1 + 82) =
                prefactor_y * *(b + 32 * OS1_S1 + 55) -
                p_over_q * *(b + 52 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 55);
            *(b + 32 * OS1_S1 + 83) =
                prefactor_z * *(b + 32 * OS1_S1 + 55) -
                p_over_q * *(b + 53 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 32 * OS1_S1 + 34);
            *(b + 33 * OS1_S1 + 56) =
                prefactor_x * *(b + 33 * OS1_S1 + 35) -
                p_over_q * *(b + 48 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 33 * OS1_S1 + 20);
            *(b + 33 * OS1_S1 + 57) = prefactor_y * *(b + 33 * OS1_S1 + 35) -
                                      p_over_q * *(b + 53 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 35);
            *(b + 33 * OS1_S1 + 58) =
                prefactor_z * *(b + 33 * OS1_S1 + 35) -
                p_over_q * *(b + 54 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 35);
            *(b + 33 * OS1_S1 + 59) = prefactor_y * *(b + 33 * OS1_S1 + 36) -
                                      p_over_q * *(b + 53 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 20);
            *(b + 33 * OS1_S1 + 60) = prefactor_y * *(b + 33 * OS1_S1 + 37) -
                                      p_over_q * *(b + 53 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 37);
            *(b + 33 * OS1_S1 + 61) =
                prefactor_z * *(b + 33 * OS1_S1 + 37) -
                p_over_q * *(b + 54 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 37) +
                one_over_two_q * *(b + 33 * OS1_S1 + 20);
            *(b + 33 * OS1_S1 + 62) =
                prefactor_x * *(b + 33 * OS1_S1 + 41) -
                p_over_q * *(b + 48 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 26);
            *(b + 33 * OS1_S1 + 63) =
                prefactor_z * *(b + 33 * OS1_S1 + 38) -
                p_over_q * *(b + 54 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 38);
            *(b + 33 * OS1_S1 + 64) = prefactor_y * *(b + 33 * OS1_S1 + 40) -
                                      p_over_q * *(b + 53 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 40);
            *(b + 33 * OS1_S1 + 65) =
                prefactor_x * *(b + 33 * OS1_S1 + 44) -
                p_over_q * *(b + 48 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 29);
            *(b + 33 * OS1_S1 + 66) = prefactor_x * *(b + 33 * OS1_S1 + 45) -
                                      p_over_q * *(b + 48 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 30);
            *(b + 33 * OS1_S1 + 67) =
                prefactor_z * *(b + 33 * OS1_S1 + 41) -
                p_over_q * *(b + 54 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 41);
            *(b + 33 * OS1_S1 + 68) = prefactor_x * *(b + 33 * OS1_S1 + 47) -
                                      p_over_q * *(b + 48 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 32);
            *(b + 33 * OS1_S1 + 69) = prefactor_y * *(b + 33 * OS1_S1 + 44) -
                                      p_over_q * *(b + 53 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 44);
            *(b + 33 * OS1_S1 + 70) = prefactor_x * *(b + 33 * OS1_S1 + 49) -
                                      p_over_q * *(b + 48 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 34);
            *(b + 33 * OS1_S1 + 71) = prefactor_x * *(b + 33 * OS1_S1 + 50) -
                                      p_over_q * *(b + 48 * OS1_S1 + 50);
            *(b + 33 * OS1_S1 + 72) = prefactor_x * *(b + 33 * OS1_S1 + 51) -
                                      p_over_q * *(b + 48 * OS1_S1 + 51);
            *(b + 33 * OS1_S1 + 73) = prefactor_x * *(b + 33 * OS1_S1 + 52) -
                                      p_over_q * *(b + 48 * OS1_S1 + 52);
            *(b + 33 * OS1_S1 + 74) = prefactor_x * *(b + 33 * OS1_S1 + 53) -
                                      p_over_q * *(b + 48 * OS1_S1 + 53);
            *(b + 33 * OS1_S1 + 75) = prefactor_x * *(b + 33 * OS1_S1 + 54) -
                                      p_over_q * *(b + 48 * OS1_S1 + 54);
            *(b + 33 * OS1_S1 + 76) = prefactor_x * *(b + 33 * OS1_S1 + 55) -
                                      p_over_q * *(b + 48 * OS1_S1 + 55);
            *(b + 33 * OS1_S1 + 77) =
                prefactor_y * *(b + 33 * OS1_S1 + 50) -
                p_over_q * *(b + 53 * OS1_S1 + 50) +
                one_over_two_q * *(b + 19 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 33 * OS1_S1 + 30);
            *(b + 33 * OS1_S1 + 78) =
                prefactor_z * *(b + 33 * OS1_S1 + 50) -
                p_over_q * *(b + 54 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 50);
            *(b + 33 * OS1_S1 + 79) =
                prefactor_z * *(b + 33 * OS1_S1 + 51) -
                p_over_q * *(b + 54 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 51) +
                one_over_two_q * *(b + 33 * OS1_S1 + 30);
            *(b + 33 * OS1_S1 + 80) =
                prefactor_y * *(b + 33 * OS1_S1 + 53) -
                p_over_q * *(b + 53 * OS1_S1 + 53) +
                one_over_two_q * *(b + 19 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 33);
            *(b + 33 * OS1_S1 + 81) = prefactor_y * *(b + 33 * OS1_S1 + 54) -
                                      p_over_q * *(b + 53 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 34);
            *(b + 33 * OS1_S1 + 82) = prefactor_y * *(b + 33 * OS1_S1 + 55) -
                                      p_over_q * *(b + 53 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 55);
            *(b + 33 * OS1_S1 + 83) =
                prefactor_z * *(b + 33 * OS1_S1 + 55) -
                p_over_q * *(b + 54 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 33 * OS1_S1 + 34);
            *(b + 34 * OS1_S1 + 56) =
                prefactor_x * *(b + 34 * OS1_S1 + 35) -
                p_over_q * *(b + 49 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 20);
            *(b + 34 * OS1_S1 + 57) = prefactor_y * *(b + 34 * OS1_S1 + 35) -
                                      p_over_q * *(b + 54 * OS1_S1 + 35);
            *(b + 34 * OS1_S1 + 58) =
                prefactor_z * *(b + 34 * OS1_S1 + 35) -
                p_over_q * *(b + 55 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 35);
            *(b + 34 * OS1_S1 + 59) = prefactor_y * *(b + 34 * OS1_S1 + 36) -
                                      p_over_q * *(b + 54 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 20);
            *(b + 34 * OS1_S1 + 60) = prefactor_y * *(b + 34 * OS1_S1 + 37) -
                                      p_over_q * *(b + 54 * OS1_S1 + 37);
            *(b + 34 * OS1_S1 + 61) =
                prefactor_z * *(b + 34 * OS1_S1 + 37) -
                p_over_q * *(b + 55 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 37) +
                one_over_two_q * *(b + 34 * OS1_S1 + 20);
            *(b + 34 * OS1_S1 + 62) =
                prefactor_y * *(b + 34 * OS1_S1 + 38) -
                p_over_q * *(b + 54 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 21);
            *(b + 34 * OS1_S1 + 63) =
                prefactor_z * *(b + 34 * OS1_S1 + 38) -
                p_over_q * *(b + 55 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 38);
            *(b + 34 * OS1_S1 + 64) = prefactor_y * *(b + 34 * OS1_S1 + 40) -
                                      p_over_q * *(b + 54 * OS1_S1 + 40);
            *(b + 34 * OS1_S1 + 65) =
                prefactor_x * *(b + 34 * OS1_S1 + 44) -
                p_over_q * *(b + 49 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 29);
            *(b + 34 * OS1_S1 + 66) = prefactor_x * *(b + 34 * OS1_S1 + 45) -
                                      p_over_q * *(b + 49 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 30);
            *(b + 34 * OS1_S1 + 67) =
                prefactor_z * *(b + 34 * OS1_S1 + 41) -
                p_over_q * *(b + 55 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 41);
            *(b + 34 * OS1_S1 + 68) = prefactor_y * *(b + 34 * OS1_S1 + 43) -
                                      p_over_q * *(b + 54 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 25);
            *(b + 34 * OS1_S1 + 69) = prefactor_y * *(b + 34 * OS1_S1 + 44) -
                                      p_over_q * *(b + 54 * OS1_S1 + 44);
            *(b + 34 * OS1_S1 + 70) = prefactor_x * *(b + 34 * OS1_S1 + 49) -
                                      p_over_q * *(b + 49 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 34);
            *(b + 34 * OS1_S1 + 71) = prefactor_x * *(b + 34 * OS1_S1 + 50) -
                                      p_over_q * *(b + 49 * OS1_S1 + 50);
            *(b + 34 * OS1_S1 + 72) = prefactor_x * *(b + 34 * OS1_S1 + 51) -
                                      p_over_q * *(b + 49 * OS1_S1 + 51);
            *(b + 34 * OS1_S1 + 73) = prefactor_x * *(b + 34 * OS1_S1 + 52) -
                                      p_over_q * *(b + 49 * OS1_S1 + 52);
            *(b + 34 * OS1_S1 + 74) = prefactor_x * *(b + 34 * OS1_S1 + 53) -
                                      p_over_q * *(b + 49 * OS1_S1 + 53);
            *(b + 34 * OS1_S1 + 75) = prefactor_y * *(b + 34 * OS1_S1 + 49) -
                                      p_over_q * *(b + 54 * OS1_S1 + 49);
            *(b + 34 * OS1_S1 + 76) = prefactor_x * *(b + 34 * OS1_S1 + 55) -
                                      p_over_q * *(b + 49 * OS1_S1 + 55);
            *(b + 34 * OS1_S1 + 77) =
                prefactor_y * *(b + 34 * OS1_S1 + 50) -
                p_over_q * *(b + 54 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 30);
            *(b + 34 * OS1_S1 + 78) =
                prefactor_z * *(b + 34 * OS1_S1 + 50) -
                p_over_q * *(b + 55 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 50);
            *(b + 34 * OS1_S1 + 79) =
                prefactor_z * *(b + 34 * OS1_S1 + 51) -
                p_over_q * *(b + 55 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 51) +
                one_over_two_q * *(b + 34 * OS1_S1 + 30);
            *(b + 34 * OS1_S1 + 80) =
                prefactor_y * *(b + 34 * OS1_S1 + 53) -
                p_over_q * *(b + 54 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 33);
            *(b + 34 * OS1_S1 + 81) = prefactor_y * *(b + 34 * OS1_S1 + 54) -
                                      p_over_q * *(b + 54 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 34);
            *(b + 34 * OS1_S1 + 82) = prefactor_y * *(b + 34 * OS1_S1 + 55) -
                                      p_over_q * *(b + 54 * OS1_S1 + 55);
            *(b + 34 * OS1_S1 + 83) =
                prefactor_z * *(b + 34 * OS1_S1 + 55) -
                p_over_q * *(b + 55 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 34);
            return;
        }

        void transfer_6(const unsigned first_min,
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
                transfer_0_6(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 0)
                    break;
            case 1:
                transfer_1_6(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 1)
                    break;
            case 2:
                transfer_2_6(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 2)
                    break;
            case 3:
                transfer_3_6(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 3)
                    break;
            case 4:
                transfer_4_6(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 4)
                    break;
            case 5:
                transfer_5_6(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 5)
                    break;
            case 6:
                transfer_6_6(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 6)
                    break;
            case 7:
                transfer_7_6(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 7)
                    break;
            case 8:
                transfer_8_6(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 8)
                    break;
            case 9:
                transfer_9_6(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 9)
                    break;
            case 10:
                transfer_10_6(prefactor_x,
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
