/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_9_6(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 165 * OS1_S1 + 56) =
                prefactor_x * *(b + 165 * OS1_S1 + 35) -
                p_over_q * *(b + 220 * OS1_S1 + 35) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 165 * OS1_S1 + 20);
            *(b + 165 * OS1_S1 + 57) = prefactor_y * *(b + 165 * OS1_S1 + 35) -
                                       p_over_q * *(b + 221 * OS1_S1 + 35);
            *(b + 165 * OS1_S1 + 58) = prefactor_z * *(b + 165 * OS1_S1 + 35) -
                                       p_over_q * *(b + 222 * OS1_S1 + 35);
            *(b + 165 * OS1_S1 + 59) =
                prefactor_y * *(b + 165 * OS1_S1 + 36) -
                p_over_q * *(b + 221 * OS1_S1 + 36) +
                one_over_two_q * *(b + 165 * OS1_S1 + 20);
            *(b + 165 * OS1_S1 + 60) = prefactor_z * *(b + 165 * OS1_S1 + 36) -
                                       p_over_q * *(b + 222 * OS1_S1 + 36);
            *(b + 165 * OS1_S1 + 61) =
                prefactor_z * *(b + 165 * OS1_S1 + 37) -
                p_over_q * *(b + 222 * OS1_S1 + 37) +
                one_over_two_q * *(b + 165 * OS1_S1 + 20);
            *(b + 165 * OS1_S1 + 62) =
                prefactor_y * *(b + 165 * OS1_S1 + 38) -
                p_over_q * *(b + 221 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 165 * OS1_S1 + 21);
            *(b + 165 * OS1_S1 + 63) = prefactor_z * *(b + 165 * OS1_S1 + 38) -
                                       p_over_q * *(b + 222 * OS1_S1 + 38);
            *(b + 165 * OS1_S1 + 64) = prefactor_y * *(b + 165 * OS1_S1 + 40) -
                                       p_over_q * *(b + 221 * OS1_S1 + 40);
            *(b + 165 * OS1_S1 + 65) =
                prefactor_z * *(b + 165 * OS1_S1 + 40) -
                p_over_q * *(b + 222 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 165 * OS1_S1 + 22);
            *(b + 165 * OS1_S1 + 66) =
                prefactor_x * *(b + 165 * OS1_S1 + 45) -
                p_over_q * *(b + 220 * OS1_S1 + 45) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 45) +
                one_over_two_q * *(b + 165 * OS1_S1 + 30);
            *(b + 165 * OS1_S1 + 67) = prefactor_z * *(b + 165 * OS1_S1 + 41) -
                                       p_over_q * *(b + 222 * OS1_S1 + 41);
            *(b + 165 * OS1_S1 + 68) =
                prefactor_z * *(b + 165 * OS1_S1 + 42) -
                p_over_q * *(b + 222 * OS1_S1 + 42) +
                one_over_two_q * *(b + 165 * OS1_S1 + 23);
            *(b + 165 * OS1_S1 + 69) = prefactor_y * *(b + 165 * OS1_S1 + 44) -
                                       p_over_q * *(b + 221 * OS1_S1 + 44);
            *(b + 165 * OS1_S1 + 70) =
                prefactor_x * *(b + 165 * OS1_S1 + 49) -
                p_over_q * *(b + 220 * OS1_S1 + 49) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 49) +
                one_over_two_q * *(b + 165 * OS1_S1 + 34);
            *(b + 165 * OS1_S1 + 71) =
                prefactor_x * *(b + 165 * OS1_S1 + 50) -
                p_over_q * *(b + 220 * OS1_S1 + 50) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 50);
            *(b + 165 * OS1_S1 + 72) = prefactor_z * *(b + 165 * OS1_S1 + 45) -
                                       p_over_q * *(b + 222 * OS1_S1 + 45);
            *(b + 165 * OS1_S1 + 73) =
                prefactor_x * *(b + 165 * OS1_S1 + 52) -
                p_over_q * *(b + 220 * OS1_S1 + 52) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 52);
            *(b + 165 * OS1_S1 + 74) =
                prefactor_x * *(b + 165 * OS1_S1 + 53) -
                p_over_q * *(b + 220 * OS1_S1 + 53) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 53);
            *(b + 165 * OS1_S1 + 75) = prefactor_y * *(b + 165 * OS1_S1 + 49) -
                                       p_over_q * *(b + 221 * OS1_S1 + 49);
            *(b + 165 * OS1_S1 + 76) =
                prefactor_x * *(b + 165 * OS1_S1 + 55) -
                p_over_q * *(b + 220 * OS1_S1 + 55) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 55);
            *(b + 165 * OS1_S1 + 77) =
                prefactor_y * *(b + 165 * OS1_S1 + 50) -
                p_over_q * *(b + 221 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 165 * OS1_S1 + 30);
            *(b + 165 * OS1_S1 + 78) = prefactor_z * *(b + 165 * OS1_S1 + 50) -
                                       p_over_q * *(b + 222 * OS1_S1 + 50);
            *(b + 165 * OS1_S1 + 79) =
                prefactor_z * *(b + 165 * OS1_S1 + 51) -
                p_over_q * *(b + 222 * OS1_S1 + 51) +
                one_over_two_q * *(b + 165 * OS1_S1 + 30);
            *(b + 165 * OS1_S1 + 80) =
                prefactor_z * *(b + 165 * OS1_S1 + 52) -
                p_over_q * *(b + 222 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 165 * OS1_S1 + 31);
            *(b + 165 * OS1_S1 + 81) =
                prefactor_y * *(b + 165 * OS1_S1 + 54) -
                p_over_q * *(b + 221 * OS1_S1 + 54) +
                one_over_two_q * *(b + 165 * OS1_S1 + 34);
            *(b + 165 * OS1_S1 + 82) = prefactor_y * *(b + 165 * OS1_S1 + 55) -
                                       p_over_q * *(b + 221 * OS1_S1 + 55);
            *(b + 165 * OS1_S1 + 83) =
                prefactor_z * *(b + 165 * OS1_S1 + 55) -
                p_over_q * *(b + 222 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 165 * OS1_S1 + 34);
            *(b + 166 * OS1_S1 + 56) =
                prefactor_x * *(b + 166 * OS1_S1 + 35) -
                p_over_q * *(b + 221 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 166 * OS1_S1 + 20);
            *(b + 166 * OS1_S1 + 57) =
                prefactor_y * *(b + 166 * OS1_S1 + 35) -
                p_over_q * *(b + 223 * OS1_S1 + 35) +
                one_over_two_q * *(b + 120 * OS1_S1 + 35);
            *(b + 166 * OS1_S1 + 58) = prefactor_z * *(b + 166 * OS1_S1 + 35) -
                                       p_over_q * *(b + 224 * OS1_S1 + 35);
            *(b + 166 * OS1_S1 + 59) =
                prefactor_y * *(b + 166 * OS1_S1 + 36) -
                p_over_q * *(b + 223 * OS1_S1 + 36) +
                one_over_two_q * *(b + 120 * OS1_S1 + 36) +
                one_over_two_q * *(b + 166 * OS1_S1 + 20);
            *(b + 166 * OS1_S1 + 60) = prefactor_z * *(b + 166 * OS1_S1 + 36) -
                                       p_over_q * *(b + 224 * OS1_S1 + 36);
            *(b + 166 * OS1_S1 + 61) =
                prefactor_z * *(b + 166 * OS1_S1 + 37) -
                p_over_q * *(b + 224 * OS1_S1 + 37) +
                one_over_two_q * *(b + 166 * OS1_S1 + 20);
            *(b + 166 * OS1_S1 + 62) =
                prefactor_y * *(b + 166 * OS1_S1 + 38) -
                p_over_q * *(b + 223 * OS1_S1 + 38) +
                one_over_two_q * *(b + 120 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 21);
            *(b + 166 * OS1_S1 + 63) = prefactor_z * *(b + 166 * OS1_S1 + 38) -
                                       p_over_q * *(b + 224 * OS1_S1 + 38);
            *(b + 166 * OS1_S1 + 64) =
                prefactor_y * *(b + 166 * OS1_S1 + 40) -
                p_over_q * *(b + 223 * OS1_S1 + 40) +
                one_over_two_q * *(b + 120 * OS1_S1 + 40);
            *(b + 166 * OS1_S1 + 65) =
                prefactor_z * *(b + 166 * OS1_S1 + 40) -
                p_over_q * *(b + 224 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 22);
            *(b + 166 * OS1_S1 + 66) =
                prefactor_x * *(b + 166 * OS1_S1 + 45) -
                p_over_q * *(b + 221 * OS1_S1 + 45) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 45) +
                one_over_two_q * *(b + 166 * OS1_S1 + 30);
            *(b + 166 * OS1_S1 + 67) = prefactor_z * *(b + 166 * OS1_S1 + 41) -
                                       p_over_q * *(b + 224 * OS1_S1 + 41);
            *(b + 166 * OS1_S1 + 68) =
                prefactor_z * *(b + 166 * OS1_S1 + 42) -
                p_over_q * *(b + 224 * OS1_S1 + 42) +
                one_over_two_q * *(b + 166 * OS1_S1 + 23);
            *(b + 166 * OS1_S1 + 69) =
                prefactor_y * *(b + 166 * OS1_S1 + 44) -
                p_over_q * *(b + 223 * OS1_S1 + 44) +
                one_over_two_q * *(b + 120 * OS1_S1 + 44);
            *(b + 166 * OS1_S1 + 70) =
                prefactor_x * *(b + 166 * OS1_S1 + 49) -
                p_over_q * *(b + 221 * OS1_S1 + 49) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 49) +
                one_over_two_q * *(b + 166 * OS1_S1 + 34);
            *(b + 166 * OS1_S1 + 71) =
                prefactor_x * *(b + 166 * OS1_S1 + 50) -
                p_over_q * *(b + 221 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 50);
            *(b + 166 * OS1_S1 + 72) = prefactor_z * *(b + 166 * OS1_S1 + 45) -
                                       p_over_q * *(b + 224 * OS1_S1 + 45);
            *(b + 166 * OS1_S1 + 73) =
                prefactor_x * *(b + 166 * OS1_S1 + 52) -
                p_over_q * *(b + 221 * OS1_S1 + 52) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 52);
            *(b + 166 * OS1_S1 + 74) =
                prefactor_x * *(b + 166 * OS1_S1 + 53) -
                p_over_q * *(b + 221 * OS1_S1 + 53) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 53);
            *(b + 166 * OS1_S1 + 75) =
                prefactor_y * *(b + 166 * OS1_S1 + 49) -
                p_over_q * *(b + 223 * OS1_S1 + 49) +
                one_over_two_q * *(b + 120 * OS1_S1 + 49);
            *(b + 166 * OS1_S1 + 76) =
                prefactor_x * *(b + 166 * OS1_S1 + 55) -
                p_over_q * *(b + 221 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 55);
            *(b + 166 * OS1_S1 + 77) =
                prefactor_y * *(b + 166 * OS1_S1 + 50) -
                p_over_q * *(b + 223 * OS1_S1 + 50) +
                one_over_two_q * *(b + 120 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 166 * OS1_S1 + 30);
            *(b + 166 * OS1_S1 + 78) = prefactor_z * *(b + 166 * OS1_S1 + 50) -
                                       p_over_q * *(b + 224 * OS1_S1 + 50);
            *(b + 166 * OS1_S1 + 79) =
                prefactor_z * *(b + 166 * OS1_S1 + 51) -
                p_over_q * *(b + 224 * OS1_S1 + 51) +
                one_over_two_q * *(b + 166 * OS1_S1 + 30);
            *(b + 166 * OS1_S1 + 80) =
                prefactor_z * *(b + 166 * OS1_S1 + 52) -
                p_over_q * *(b + 224 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 31);
            *(b + 166 * OS1_S1 + 81) =
                prefactor_y * *(b + 166 * OS1_S1 + 54) -
                p_over_q * *(b + 223 * OS1_S1 + 54) +
                one_over_two_q * *(b + 120 * OS1_S1 + 54) +
                one_over_two_q * *(b + 166 * OS1_S1 + 34);
            *(b + 166 * OS1_S1 + 82) =
                prefactor_y * *(b + 166 * OS1_S1 + 55) -
                p_over_q * *(b + 223 * OS1_S1 + 55) +
                one_over_two_q * *(b + 120 * OS1_S1 + 55);
            *(b + 166 * OS1_S1 + 83) =
                prefactor_z * *(b + 166 * OS1_S1 + 55) -
                p_over_q * *(b + 224 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 166 * OS1_S1 + 34);
            *(b + 167 * OS1_S1 + 56) =
                prefactor_x * *(b + 167 * OS1_S1 + 35) -
                p_over_q * *(b + 222 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 167 * OS1_S1 + 20);
            *(b + 167 * OS1_S1 + 57) = prefactor_y * *(b + 167 * OS1_S1 + 35) -
                                       p_over_q * *(b + 224 * OS1_S1 + 35);
            *(b + 167 * OS1_S1 + 58) =
                prefactor_z * *(b + 167 * OS1_S1 + 35) -
                p_over_q * *(b + 225 * OS1_S1 + 35) +
                one_over_two_q * *(b + 120 * OS1_S1 + 35);
            *(b + 167 * OS1_S1 + 59) =
                prefactor_y * *(b + 167 * OS1_S1 + 36) -
                p_over_q * *(b + 224 * OS1_S1 + 36) +
                one_over_two_q * *(b + 167 * OS1_S1 + 20);
            *(b + 167 * OS1_S1 + 60) = prefactor_y * *(b + 167 * OS1_S1 + 37) -
                                       p_over_q * *(b + 224 * OS1_S1 + 37);
            *(b + 167 * OS1_S1 + 61) =
                prefactor_z * *(b + 167 * OS1_S1 + 37) -
                p_over_q * *(b + 225 * OS1_S1 + 37) +
                one_over_two_q * *(b + 120 * OS1_S1 + 37) +
                one_over_two_q * *(b + 167 * OS1_S1 + 20);
            *(b + 167 * OS1_S1 + 62) =
                prefactor_y * *(b + 167 * OS1_S1 + 38) -
                p_over_q * *(b + 224 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 21);
            *(b + 167 * OS1_S1 + 63) =
                prefactor_z * *(b + 167 * OS1_S1 + 38) -
                p_over_q * *(b + 225 * OS1_S1 + 38) +
                one_over_two_q * *(b + 120 * OS1_S1 + 38);
            *(b + 167 * OS1_S1 + 64) = prefactor_y * *(b + 167 * OS1_S1 + 40) -
                                       p_over_q * *(b + 224 * OS1_S1 + 40);
            *(b + 167 * OS1_S1 + 65) =
                prefactor_z * *(b + 167 * OS1_S1 + 40) -
                p_over_q * *(b + 225 * OS1_S1 + 40) +
                one_over_two_q * *(b + 120 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 22);
            *(b + 167 * OS1_S1 + 66) =
                prefactor_x * *(b + 167 * OS1_S1 + 45) -
                p_over_q * *(b + 222 * OS1_S1 + 45) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 45) +
                one_over_two_q * *(b + 167 * OS1_S1 + 30);
            *(b + 167 * OS1_S1 + 67) =
                prefactor_z * *(b + 167 * OS1_S1 + 41) -
                p_over_q * *(b + 225 * OS1_S1 + 41) +
                one_over_two_q * *(b + 120 * OS1_S1 + 41);
            *(b + 167 * OS1_S1 + 68) =
                prefactor_y * *(b + 167 * OS1_S1 + 43) -
                p_over_q * *(b + 224 * OS1_S1 + 43) +
                one_over_two_q * *(b + 167 * OS1_S1 + 25);
            *(b + 167 * OS1_S1 + 69) = prefactor_y * *(b + 167 * OS1_S1 + 44) -
                                       p_over_q * *(b + 224 * OS1_S1 + 44);
            *(b + 167 * OS1_S1 + 70) =
                prefactor_x * *(b + 167 * OS1_S1 + 49) -
                p_over_q * *(b + 222 * OS1_S1 + 49) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 49) +
                one_over_two_q * *(b + 167 * OS1_S1 + 34);
            *(b + 167 * OS1_S1 + 71) =
                prefactor_x * *(b + 167 * OS1_S1 + 50) -
                p_over_q * *(b + 222 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 50);
            *(b + 167 * OS1_S1 + 72) =
                prefactor_z * *(b + 167 * OS1_S1 + 45) -
                p_over_q * *(b + 225 * OS1_S1 + 45) +
                one_over_two_q * *(b + 120 * OS1_S1 + 45);
            *(b + 167 * OS1_S1 + 73) =
                prefactor_x * *(b + 167 * OS1_S1 + 52) -
                p_over_q * *(b + 222 * OS1_S1 + 52) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 52);
            *(b + 167 * OS1_S1 + 74) =
                prefactor_x * *(b + 167 * OS1_S1 + 53) -
                p_over_q * *(b + 222 * OS1_S1 + 53) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 53);
            *(b + 167 * OS1_S1 + 75) = prefactor_y * *(b + 167 * OS1_S1 + 49) -
                                       p_over_q * *(b + 224 * OS1_S1 + 49);
            *(b + 167 * OS1_S1 + 76) =
                prefactor_x * *(b + 167 * OS1_S1 + 55) -
                p_over_q * *(b + 222 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 55);
            *(b + 167 * OS1_S1 + 77) =
                prefactor_y * *(b + 167 * OS1_S1 + 50) -
                p_over_q * *(b + 224 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 167 * OS1_S1 + 30);
            *(b + 167 * OS1_S1 + 78) =
                prefactor_z * *(b + 167 * OS1_S1 + 50) -
                p_over_q * *(b + 225 * OS1_S1 + 50) +
                one_over_two_q * *(b + 120 * OS1_S1 + 50);
            *(b + 167 * OS1_S1 + 79) =
                prefactor_z * *(b + 167 * OS1_S1 + 51) -
                p_over_q * *(b + 225 * OS1_S1 + 51) +
                one_over_two_q * *(b + 120 * OS1_S1 + 51) +
                one_over_two_q * *(b + 167 * OS1_S1 + 30);
            *(b + 167 * OS1_S1 + 80) =
                prefactor_y * *(b + 167 * OS1_S1 + 53) -
                p_over_q * *(b + 224 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 33);
            *(b + 167 * OS1_S1 + 81) =
                prefactor_y * *(b + 167 * OS1_S1 + 54) -
                p_over_q * *(b + 224 * OS1_S1 + 54) +
                one_over_two_q * *(b + 167 * OS1_S1 + 34);
            *(b + 167 * OS1_S1 + 82) = prefactor_y * *(b + 167 * OS1_S1 + 55) -
                                       p_over_q * *(b + 224 * OS1_S1 + 55);
            *(b + 167 * OS1_S1 + 83) =
                prefactor_z * *(b + 167 * OS1_S1 + 55) -
                p_over_q * *(b + 225 * OS1_S1 + 55) +
                one_over_two_q * *(b + 120 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 167 * OS1_S1 + 34);
            *(b + 168 * OS1_S1 + 56) =
                prefactor_x * *(b + 168 * OS1_S1 + 35) -
                p_over_q * *(b + 223 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 168 * OS1_S1 + 20);
            *(b + 168 * OS1_S1 + 57) =
                prefactor_y * *(b + 168 * OS1_S1 + 35) -
                p_over_q * *(b + 226 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 35);
            *(b + 168 * OS1_S1 + 58) = prefactor_z * *(b + 168 * OS1_S1 + 35) -
                                       p_over_q * *(b + 227 * OS1_S1 + 35);
            *(b + 168 * OS1_S1 + 59) =
                prefactor_y * *(b + 168 * OS1_S1 + 36) -
                p_over_q * *(b + 226 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 36) +
                one_over_two_q * *(b + 168 * OS1_S1 + 20);
            *(b + 168 * OS1_S1 + 60) = prefactor_z * *(b + 168 * OS1_S1 + 36) -
                                       p_over_q * *(b + 227 * OS1_S1 + 36);
            *(b + 168 * OS1_S1 + 61) =
                prefactor_z * *(b + 168 * OS1_S1 + 37) -
                p_over_q * *(b + 227 * OS1_S1 + 37) +
                one_over_two_q * *(b + 168 * OS1_S1 + 20);
            *(b + 168 * OS1_S1 + 62) =
                prefactor_y * *(b + 168 * OS1_S1 + 38) -
                p_over_q * *(b + 226 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 168 * OS1_S1 + 21);
            *(b + 168 * OS1_S1 + 63) = prefactor_z * *(b + 168 * OS1_S1 + 38) -
                                       p_over_q * *(b + 227 * OS1_S1 + 38);
            *(b + 168 * OS1_S1 + 64) =
                prefactor_y * *(b + 168 * OS1_S1 + 40) -
                p_over_q * *(b + 226 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 40);
            *(b + 168 * OS1_S1 + 65) =
                prefactor_z * *(b + 168 * OS1_S1 + 40) -
                p_over_q * *(b + 227 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 168 * OS1_S1 + 22);
            *(b + 168 * OS1_S1 + 66) =
                prefactor_x * *(b + 168 * OS1_S1 + 45) -
                p_over_q * *(b + 223 * OS1_S1 + 45) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 45) +
                one_over_two_q * *(b + 168 * OS1_S1 + 30);
            *(b + 168 * OS1_S1 + 67) = prefactor_z * *(b + 168 * OS1_S1 + 41) -
                                       p_over_q * *(b + 227 * OS1_S1 + 41);
            *(b + 168 * OS1_S1 + 68) =
                prefactor_z * *(b + 168 * OS1_S1 + 42) -
                p_over_q * *(b + 227 * OS1_S1 + 42) +
                one_over_two_q * *(b + 168 * OS1_S1 + 23);
            *(b + 168 * OS1_S1 + 69) =
                prefactor_y * *(b + 168 * OS1_S1 + 44) -
                p_over_q * *(b + 226 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 44);
            *(b + 168 * OS1_S1 + 70) =
                prefactor_x * *(b + 168 * OS1_S1 + 49) -
                p_over_q * *(b + 223 * OS1_S1 + 49) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 49) +
                one_over_two_q * *(b + 168 * OS1_S1 + 34);
            *(b + 168 * OS1_S1 + 71) =
                prefactor_x * *(b + 168 * OS1_S1 + 50) -
                p_over_q * *(b + 223 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 50);
            *(b + 168 * OS1_S1 + 72) = prefactor_z * *(b + 168 * OS1_S1 + 45) -
                                       p_over_q * *(b + 227 * OS1_S1 + 45);
            *(b + 168 * OS1_S1 + 73) =
                prefactor_x * *(b + 168 * OS1_S1 + 52) -
                p_over_q * *(b + 223 * OS1_S1 + 52) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 52);
            *(b + 168 * OS1_S1 + 74) =
                prefactor_x * *(b + 168 * OS1_S1 + 53) -
                p_over_q * *(b + 223 * OS1_S1 + 53) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 53);
            *(b + 168 * OS1_S1 + 75) =
                prefactor_y * *(b + 168 * OS1_S1 + 49) -
                p_over_q * *(b + 226 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 49);
            *(b + 168 * OS1_S1 + 76) =
                prefactor_x * *(b + 168 * OS1_S1 + 55) -
                p_over_q * *(b + 223 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 55);
            *(b + 168 * OS1_S1 + 77) =
                prefactor_y * *(b + 168 * OS1_S1 + 50) -
                p_over_q * *(b + 226 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 168 * OS1_S1 + 30);
            *(b + 168 * OS1_S1 + 78) = prefactor_z * *(b + 168 * OS1_S1 + 50) -
                                       p_over_q * *(b + 227 * OS1_S1 + 50);
            *(b + 168 * OS1_S1 + 79) =
                prefactor_z * *(b + 168 * OS1_S1 + 51) -
                p_over_q * *(b + 227 * OS1_S1 + 51) +
                one_over_two_q * *(b + 168 * OS1_S1 + 30);
            *(b + 168 * OS1_S1 + 80) =
                prefactor_z * *(b + 168 * OS1_S1 + 52) -
                p_over_q * *(b + 227 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 168 * OS1_S1 + 31);
            *(b + 168 * OS1_S1 + 81) =
                prefactor_y * *(b + 168 * OS1_S1 + 54) -
                p_over_q * *(b + 226 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 54) +
                one_over_two_q * *(b + 168 * OS1_S1 + 34);
            *(b + 168 * OS1_S1 + 82) =
                prefactor_y * *(b + 168 * OS1_S1 + 55) -
                p_over_q * *(b + 226 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 55);
            *(b + 168 * OS1_S1 + 83) =
                prefactor_z * *(b + 168 * OS1_S1 + 55) -
                p_over_q * *(b + 227 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 168 * OS1_S1 + 34);
            *(b + 169 * OS1_S1 + 56) =
                prefactor_x * *(b + 169 * OS1_S1 + 35) -
                p_over_q * *(b + 224 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 169 * OS1_S1 + 20);
            *(b + 169 * OS1_S1 + 57) =
                prefactor_y * *(b + 169 * OS1_S1 + 35) -
                p_over_q * *(b + 227 * OS1_S1 + 35) +
                one_over_two_q * *(b + 122 * OS1_S1 + 35);
            *(b + 169 * OS1_S1 + 58) =
                prefactor_z * *(b + 169 * OS1_S1 + 35) -
                p_over_q * *(b + 228 * OS1_S1 + 35) +
                one_over_two_q * *(b + 121 * OS1_S1 + 35);
            *(b + 169 * OS1_S1 + 59) =
                prefactor_y * *(b + 169 * OS1_S1 + 36) -
                p_over_q * *(b + 227 * OS1_S1 + 36) +
                one_over_two_q * *(b + 122 * OS1_S1 + 36) +
                one_over_two_q * *(b + 169 * OS1_S1 + 20);
            *(b + 169 * OS1_S1 + 60) =
                prefactor_z * *(b + 169 * OS1_S1 + 36) -
                p_over_q * *(b + 228 * OS1_S1 + 36) +
                one_over_two_q * *(b + 121 * OS1_S1 + 36);
            *(b + 169 * OS1_S1 + 61) =
                prefactor_z * *(b + 169 * OS1_S1 + 37) -
                p_over_q * *(b + 228 * OS1_S1 + 37) +
                one_over_two_q * *(b + 121 * OS1_S1 + 37) +
                one_over_two_q * *(b + 169 * OS1_S1 + 20);
            *(b + 169 * OS1_S1 + 62) =
                prefactor_y * *(b + 169 * OS1_S1 + 38) -
                p_over_q * *(b + 227 * OS1_S1 + 38) +
                one_over_two_q * *(b + 122 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 21);
            *(b + 169 * OS1_S1 + 63) =
                prefactor_z * *(b + 169 * OS1_S1 + 38) -
                p_over_q * *(b + 228 * OS1_S1 + 38) +
                one_over_two_q * *(b + 121 * OS1_S1 + 38);
            *(b + 169 * OS1_S1 + 64) =
                prefactor_y * *(b + 169 * OS1_S1 + 40) -
                p_over_q * *(b + 227 * OS1_S1 + 40) +
                one_over_two_q * *(b + 122 * OS1_S1 + 40);
            *(b + 169 * OS1_S1 + 65) =
                prefactor_z * *(b + 169 * OS1_S1 + 40) -
                p_over_q * *(b + 228 * OS1_S1 + 40) +
                one_over_two_q * *(b + 121 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 22);
            *(b + 169 * OS1_S1 + 66) =
                prefactor_x * *(b + 169 * OS1_S1 + 45) -
                p_over_q * *(b + 224 * OS1_S1 + 45) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 45) +
                one_over_two_q * *(b + 169 * OS1_S1 + 30);
            *(b + 169 * OS1_S1 + 67) =
                prefactor_z * *(b + 169 * OS1_S1 + 41) -
                p_over_q * *(b + 228 * OS1_S1 + 41) +
                one_over_two_q * *(b + 121 * OS1_S1 + 41);
            *(b + 169 * OS1_S1 + 68) =
                prefactor_z * *(b + 169 * OS1_S1 + 42) -
                p_over_q * *(b + 228 * OS1_S1 + 42) +
                one_over_two_q * *(b + 121 * OS1_S1 + 42) +
                one_over_two_q * *(b + 169 * OS1_S1 + 23);
            *(b + 169 * OS1_S1 + 69) =
                prefactor_y * *(b + 169 * OS1_S1 + 44) -
                p_over_q * *(b + 227 * OS1_S1 + 44) +
                one_over_two_q * *(b + 122 * OS1_S1 + 44);
            *(b + 169 * OS1_S1 + 70) =
                prefactor_x * *(b + 169 * OS1_S1 + 49) -
                p_over_q * *(b + 224 * OS1_S1 + 49) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 49) +
                one_over_two_q * *(b + 169 * OS1_S1 + 34);
            *(b + 169 * OS1_S1 + 71) =
                prefactor_x * *(b + 169 * OS1_S1 + 50) -
                p_over_q * *(b + 224 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 50);
            *(b + 169 * OS1_S1 + 72) =
                prefactor_z * *(b + 169 * OS1_S1 + 45) -
                p_over_q * *(b + 228 * OS1_S1 + 45) +
                one_over_two_q * *(b + 121 * OS1_S1 + 45);
            *(b + 169 * OS1_S1 + 73) =
                prefactor_x * *(b + 169 * OS1_S1 + 52) -
                p_over_q * *(b + 224 * OS1_S1 + 52) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 52);
            *(b + 169 * OS1_S1 + 74) =
                prefactor_x * *(b + 169 * OS1_S1 + 53) -
                p_over_q * *(b + 224 * OS1_S1 + 53) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 53);
            *(b + 169 * OS1_S1 + 75) =
                prefactor_y * *(b + 169 * OS1_S1 + 49) -
                p_over_q * *(b + 227 * OS1_S1 + 49) +
                one_over_two_q * *(b + 122 * OS1_S1 + 49);
            *(b + 169 * OS1_S1 + 76) =
                prefactor_x * *(b + 169 * OS1_S1 + 55) -
                p_over_q * *(b + 224 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 55);
            *(b + 169 * OS1_S1 + 77) =
                prefactor_y * *(b + 169 * OS1_S1 + 50) -
                p_over_q * *(b + 227 * OS1_S1 + 50) +
                one_over_two_q * *(b + 122 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 169 * OS1_S1 + 30);
            *(b + 169 * OS1_S1 + 78) =
                prefactor_z * *(b + 169 * OS1_S1 + 50) -
                p_over_q * *(b + 228 * OS1_S1 + 50) +
                one_over_two_q * *(b + 121 * OS1_S1 + 50);
            *(b + 169 * OS1_S1 + 79) =
                prefactor_z * *(b + 169 * OS1_S1 + 51) -
                p_over_q * *(b + 228 * OS1_S1 + 51) +
                one_over_two_q * *(b + 121 * OS1_S1 + 51) +
                one_over_two_q * *(b + 169 * OS1_S1 + 30);
            *(b + 169 * OS1_S1 + 80) =
                prefactor_z * *(b + 169 * OS1_S1 + 52) -
                p_over_q * *(b + 228 * OS1_S1 + 52) +
                one_over_two_q * *(b + 121 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 31);
            *(b + 169 * OS1_S1 + 81) =
                prefactor_y * *(b + 169 * OS1_S1 + 54) -
                p_over_q * *(b + 227 * OS1_S1 + 54) +
                one_over_two_q * *(b + 122 * OS1_S1 + 54) +
                one_over_two_q * *(b + 169 * OS1_S1 + 34);
            *(b + 169 * OS1_S1 + 82) =
                prefactor_y * *(b + 169 * OS1_S1 + 55) -
                p_over_q * *(b + 227 * OS1_S1 + 55) +
                one_over_two_q * *(b + 122 * OS1_S1 + 55);
            *(b + 169 * OS1_S1 + 83) =
                prefactor_z * *(b + 169 * OS1_S1 + 55) -
                p_over_q * *(b + 228 * OS1_S1 + 55) +
                one_over_two_q * *(b + 121 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 169 * OS1_S1 + 34);
            *(b + 170 * OS1_S1 + 56) =
                prefactor_x * *(b + 170 * OS1_S1 + 35) -
                p_over_q * *(b + 225 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 170 * OS1_S1 + 20);
            *(b + 170 * OS1_S1 + 57) = prefactor_y * *(b + 170 * OS1_S1 + 35) -
                                       p_over_q * *(b + 228 * OS1_S1 + 35);
            *(b + 170 * OS1_S1 + 58) =
                prefactor_z * *(b + 170 * OS1_S1 + 35) -
                p_over_q * *(b + 229 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 35);
            *(b + 170 * OS1_S1 + 59) =
                prefactor_y * *(b + 170 * OS1_S1 + 36) -
                p_over_q * *(b + 228 * OS1_S1 + 36) +
                one_over_two_q * *(b + 170 * OS1_S1 + 20);
            *(b + 170 * OS1_S1 + 60) = prefactor_y * *(b + 170 * OS1_S1 + 37) -
                                       p_over_q * *(b + 228 * OS1_S1 + 37);
            *(b + 170 * OS1_S1 + 61) =
                prefactor_z * *(b + 170 * OS1_S1 + 37) -
                p_over_q * *(b + 229 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 37) +
                one_over_two_q * *(b + 170 * OS1_S1 + 20);
            *(b + 170 * OS1_S1 + 62) =
                prefactor_y * *(b + 170 * OS1_S1 + 38) -
                p_over_q * *(b + 228 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 170 * OS1_S1 + 21);
            *(b + 170 * OS1_S1 + 63) =
                prefactor_z * *(b + 170 * OS1_S1 + 38) -
                p_over_q * *(b + 229 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 38);
            *(b + 170 * OS1_S1 + 64) = prefactor_y * *(b + 170 * OS1_S1 + 40) -
                                       p_over_q * *(b + 228 * OS1_S1 + 40);
            *(b + 170 * OS1_S1 + 65) =
                prefactor_z * *(b + 170 * OS1_S1 + 40) -
                p_over_q * *(b + 229 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 170 * OS1_S1 + 22);
            *(b + 170 * OS1_S1 + 66) =
                prefactor_x * *(b + 170 * OS1_S1 + 45) -
                p_over_q * *(b + 225 * OS1_S1 + 45) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 45) +
                one_over_two_q * *(b + 170 * OS1_S1 + 30);
            *(b + 170 * OS1_S1 + 67) =
                prefactor_z * *(b + 170 * OS1_S1 + 41) -
                p_over_q * *(b + 229 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 41);
            *(b + 170 * OS1_S1 + 68) =
                prefactor_y * *(b + 170 * OS1_S1 + 43) -
                p_over_q * *(b + 228 * OS1_S1 + 43) +
                one_over_two_q * *(b + 170 * OS1_S1 + 25);
            *(b + 170 * OS1_S1 + 69) = prefactor_y * *(b + 170 * OS1_S1 + 44) -
                                       p_over_q * *(b + 228 * OS1_S1 + 44);
            *(b + 170 * OS1_S1 + 70) =
                prefactor_x * *(b + 170 * OS1_S1 + 49) -
                p_over_q * *(b + 225 * OS1_S1 + 49) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 49) +
                one_over_two_q * *(b + 170 * OS1_S1 + 34);
            *(b + 170 * OS1_S1 + 71) =
                prefactor_x * *(b + 170 * OS1_S1 + 50) -
                p_over_q * *(b + 225 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 50);
            *(b + 170 * OS1_S1 + 72) =
                prefactor_z * *(b + 170 * OS1_S1 + 45) -
                p_over_q * *(b + 229 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 45);
            *(b + 170 * OS1_S1 + 73) =
                prefactor_x * *(b + 170 * OS1_S1 + 52) -
                p_over_q * *(b + 225 * OS1_S1 + 52) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 52);
            *(b + 170 * OS1_S1 + 74) =
                prefactor_x * *(b + 170 * OS1_S1 + 53) -
                p_over_q * *(b + 225 * OS1_S1 + 53) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 53);
            *(b + 170 * OS1_S1 + 75) = prefactor_y * *(b + 170 * OS1_S1 + 49) -
                                       p_over_q * *(b + 228 * OS1_S1 + 49);
            *(b + 170 * OS1_S1 + 76) =
                prefactor_x * *(b + 170 * OS1_S1 + 55) -
                p_over_q * *(b + 225 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 55);
            *(b + 170 * OS1_S1 + 77) =
                prefactor_y * *(b + 170 * OS1_S1 + 50) -
                p_over_q * *(b + 228 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 170 * OS1_S1 + 30);
            *(b + 170 * OS1_S1 + 78) =
                prefactor_z * *(b + 170 * OS1_S1 + 50) -
                p_over_q * *(b + 229 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 50);
            *(b + 170 * OS1_S1 + 79) =
                prefactor_z * *(b + 170 * OS1_S1 + 51) -
                p_over_q * *(b + 229 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 51) +
                one_over_two_q * *(b + 170 * OS1_S1 + 30);
            *(b + 170 * OS1_S1 + 80) =
                prefactor_y * *(b + 170 * OS1_S1 + 53) -
                p_over_q * *(b + 228 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 170 * OS1_S1 + 33);
            *(b + 170 * OS1_S1 + 81) =
                prefactor_y * *(b + 170 * OS1_S1 + 54) -
                p_over_q * *(b + 228 * OS1_S1 + 54) +
                one_over_two_q * *(b + 170 * OS1_S1 + 34);
            *(b + 170 * OS1_S1 + 82) = prefactor_y * *(b + 170 * OS1_S1 + 55) -
                                       p_over_q * *(b + 228 * OS1_S1 + 55);
            *(b + 170 * OS1_S1 + 83) =
                prefactor_z * *(b + 170 * OS1_S1 + 55) -
                p_over_q * *(b + 229 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 170 * OS1_S1 + 34);
            *(b + 171 * OS1_S1 + 56) =
                prefactor_x * *(b + 171 * OS1_S1 + 35) -
                p_over_q * *(b + 226 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 171 * OS1_S1 + 20);
            *(b + 171 * OS1_S1 + 57) =
                prefactor_y * *(b + 171 * OS1_S1 + 35) -
                p_over_q * *(b + 230 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 35);
            *(b + 171 * OS1_S1 + 58) = prefactor_z * *(b + 171 * OS1_S1 + 35) -
                                       p_over_q * *(b + 231 * OS1_S1 + 35);
            *(b + 171 * OS1_S1 + 59) =
                prefactor_y * *(b + 171 * OS1_S1 + 36) -
                p_over_q * *(b + 230 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 36) +
                one_over_two_q * *(b + 171 * OS1_S1 + 20);
            *(b + 171 * OS1_S1 + 60) = prefactor_z * *(b + 171 * OS1_S1 + 36) -
                                       p_over_q * *(b + 231 * OS1_S1 + 36);
            *(b + 171 * OS1_S1 + 61) =
                prefactor_z * *(b + 171 * OS1_S1 + 37) -
                p_over_q * *(b + 231 * OS1_S1 + 37) +
                one_over_two_q * *(b + 171 * OS1_S1 + 20);
            *(b + 171 * OS1_S1 + 62) =
                prefactor_y * *(b + 171 * OS1_S1 + 38) -
                p_over_q * *(b + 230 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 171 * OS1_S1 + 21);
            *(b + 171 * OS1_S1 + 63) = prefactor_z * *(b + 171 * OS1_S1 + 38) -
                                       p_over_q * *(b + 231 * OS1_S1 + 38);
            *(b + 171 * OS1_S1 + 64) =
                prefactor_y * *(b + 171 * OS1_S1 + 40) -
                p_over_q * *(b + 230 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 40);
            *(b + 171 * OS1_S1 + 65) =
                prefactor_z * *(b + 171 * OS1_S1 + 40) -
                p_over_q * *(b + 231 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 171 * OS1_S1 + 22);
            *(b + 171 * OS1_S1 + 66) =
                prefactor_x * *(b + 171 * OS1_S1 + 45) -
                p_over_q * *(b + 226 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 45) +
                one_over_two_q * *(b + 171 * OS1_S1 + 30);
            *(b + 171 * OS1_S1 + 67) = prefactor_z * *(b + 171 * OS1_S1 + 41) -
                                       p_over_q * *(b + 231 * OS1_S1 + 41);
            *(b + 171 * OS1_S1 + 68) =
                prefactor_z * *(b + 171 * OS1_S1 + 42) -
                p_over_q * *(b + 231 * OS1_S1 + 42) +
                one_over_two_q * *(b + 171 * OS1_S1 + 23);
            *(b + 171 * OS1_S1 + 69) =
                prefactor_y * *(b + 171 * OS1_S1 + 44) -
                p_over_q * *(b + 230 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 44);
            *(b + 171 * OS1_S1 + 70) =
                prefactor_x * *(b + 171 * OS1_S1 + 49) -
                p_over_q * *(b + 226 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 49) +
                one_over_two_q * *(b + 171 * OS1_S1 + 34);
            *(b + 171 * OS1_S1 + 71) =
                prefactor_x * *(b + 171 * OS1_S1 + 50) -
                p_over_q * *(b + 226 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 50);
            *(b + 171 * OS1_S1 + 72) = prefactor_z * *(b + 171 * OS1_S1 + 45) -
                                       p_over_q * *(b + 231 * OS1_S1 + 45);
            *(b + 171 * OS1_S1 + 73) =
                prefactor_x * *(b + 171 * OS1_S1 + 52) -
                p_over_q * *(b + 226 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 52);
            *(b + 171 * OS1_S1 + 74) =
                prefactor_x * *(b + 171 * OS1_S1 + 53) -
                p_over_q * *(b + 226 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 53);
            *(b + 171 * OS1_S1 + 75) =
                prefactor_y * *(b + 171 * OS1_S1 + 49) -
                p_over_q * *(b + 230 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 49);
            *(b + 171 * OS1_S1 + 76) =
                prefactor_x * *(b + 171 * OS1_S1 + 55) -
                p_over_q * *(b + 226 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 55);
            *(b + 171 * OS1_S1 + 77) =
                prefactor_y * *(b + 171 * OS1_S1 + 50) -
                p_over_q * *(b + 230 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 171 * OS1_S1 + 30);
            *(b + 171 * OS1_S1 + 78) = prefactor_z * *(b + 171 * OS1_S1 + 50) -
                                       p_over_q * *(b + 231 * OS1_S1 + 50);
            *(b + 171 * OS1_S1 + 79) =
                prefactor_z * *(b + 171 * OS1_S1 + 51) -
                p_over_q * *(b + 231 * OS1_S1 + 51) +
                one_over_two_q * *(b + 171 * OS1_S1 + 30);
            *(b + 171 * OS1_S1 + 80) =
                prefactor_z * *(b + 171 * OS1_S1 + 52) -
                p_over_q * *(b + 231 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 171 * OS1_S1 + 31);
            *(b + 171 * OS1_S1 + 81) =
                prefactor_y * *(b + 171 * OS1_S1 + 54) -
                p_over_q * *(b + 230 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 54) +
                one_over_two_q * *(b + 171 * OS1_S1 + 34);
            *(b + 171 * OS1_S1 + 82) =
                prefactor_y * *(b + 171 * OS1_S1 + 55) -
                p_over_q * *(b + 230 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 55);
            *(b + 171 * OS1_S1 + 83) =
                prefactor_z * *(b + 171 * OS1_S1 + 55) -
                p_over_q * *(b + 231 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 171 * OS1_S1 + 34);
            *(b + 172 * OS1_S1 + 56) =
                prefactor_x * *(b + 172 * OS1_S1 + 35) -
                p_over_q * *(b + 227 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 172 * OS1_S1 + 20);
            *(b + 172 * OS1_S1 + 57) =
                prefactor_y * *(b + 172 * OS1_S1 + 35) -
                p_over_q * *(b + 231 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 35);
            *(b + 172 * OS1_S1 + 58) =
                prefactor_z * *(b + 172 * OS1_S1 + 35) -
                p_over_q * *(b + 232 * OS1_S1 + 35) +
                one_over_two_q * *(b + 123 * OS1_S1 + 35);
            *(b + 172 * OS1_S1 + 59) =
                prefactor_y * *(b + 172 * OS1_S1 + 36) -
                p_over_q * *(b + 231 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 36) +
                one_over_two_q * *(b + 172 * OS1_S1 + 20);
            *(b + 172 * OS1_S1 + 60) =
                prefactor_z * *(b + 172 * OS1_S1 + 36) -
                p_over_q * *(b + 232 * OS1_S1 + 36) +
                one_over_two_q * *(b + 123 * OS1_S1 + 36);
            *(b + 172 * OS1_S1 + 61) =
                prefactor_z * *(b + 172 * OS1_S1 + 37) -
                p_over_q * *(b + 232 * OS1_S1 + 37) +
                one_over_two_q * *(b + 123 * OS1_S1 + 37) +
                one_over_two_q * *(b + 172 * OS1_S1 + 20);
            *(b + 172 * OS1_S1 + 62) =
                prefactor_y * *(b + 172 * OS1_S1 + 38) -
                p_over_q * *(b + 231 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 21);
            *(b + 172 * OS1_S1 + 63) =
                prefactor_z * *(b + 172 * OS1_S1 + 38) -
                p_over_q * *(b + 232 * OS1_S1 + 38) +
                one_over_two_q * *(b + 123 * OS1_S1 + 38);
            *(b + 172 * OS1_S1 + 64) =
                prefactor_y * *(b + 172 * OS1_S1 + 40) -
                p_over_q * *(b + 231 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 40);
            *(b + 172 * OS1_S1 + 65) =
                prefactor_z * *(b + 172 * OS1_S1 + 40) -
                p_over_q * *(b + 232 * OS1_S1 + 40) +
                one_over_two_q * *(b + 123 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 22);
            *(b + 172 * OS1_S1 + 66) =
                prefactor_x * *(b + 172 * OS1_S1 + 45) -
                p_over_q * *(b + 227 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 45) +
                one_over_two_q * *(b + 172 * OS1_S1 + 30);
            *(b + 172 * OS1_S1 + 67) =
                prefactor_z * *(b + 172 * OS1_S1 + 41) -
                p_over_q * *(b + 232 * OS1_S1 + 41) +
                one_over_two_q * *(b + 123 * OS1_S1 + 41);
            *(b + 172 * OS1_S1 + 68) =
                prefactor_z * *(b + 172 * OS1_S1 + 42) -
                p_over_q * *(b + 232 * OS1_S1 + 42) +
                one_over_two_q * *(b + 123 * OS1_S1 + 42) +
                one_over_two_q * *(b + 172 * OS1_S1 + 23);
            *(b + 172 * OS1_S1 + 69) =
                prefactor_y * *(b + 172 * OS1_S1 + 44) -
                p_over_q * *(b + 231 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 44);
            *(b + 172 * OS1_S1 + 70) =
                prefactor_x * *(b + 172 * OS1_S1 + 49) -
                p_over_q * *(b + 227 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 49) +
                one_over_two_q * *(b + 172 * OS1_S1 + 34);
            *(b + 172 * OS1_S1 + 71) =
                prefactor_x * *(b + 172 * OS1_S1 + 50) -
                p_over_q * *(b + 227 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 50);
            *(b + 172 * OS1_S1 + 72) =
                prefactor_z * *(b + 172 * OS1_S1 + 45) -
                p_over_q * *(b + 232 * OS1_S1 + 45) +
                one_over_two_q * *(b + 123 * OS1_S1 + 45);
            *(b + 172 * OS1_S1 + 73) =
                prefactor_x * *(b + 172 * OS1_S1 + 52) -
                p_over_q * *(b + 227 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 52);
            *(b + 172 * OS1_S1 + 74) =
                prefactor_x * *(b + 172 * OS1_S1 + 53) -
                p_over_q * *(b + 227 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 53);
            *(b + 172 * OS1_S1 + 75) =
                prefactor_y * *(b + 172 * OS1_S1 + 49) -
                p_over_q * *(b + 231 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 49);
            *(b + 172 * OS1_S1 + 76) =
                prefactor_x * *(b + 172 * OS1_S1 + 55) -
                p_over_q * *(b + 227 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 55);
            *(b + 172 * OS1_S1 + 77) =
                prefactor_y * *(b + 172 * OS1_S1 + 50) -
                p_over_q * *(b + 231 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 172 * OS1_S1 + 30);
            *(b + 172 * OS1_S1 + 78) =
                prefactor_z * *(b + 172 * OS1_S1 + 50) -
                p_over_q * *(b + 232 * OS1_S1 + 50) +
                one_over_two_q * *(b + 123 * OS1_S1 + 50);
            *(b + 172 * OS1_S1 + 79) =
                prefactor_z * *(b + 172 * OS1_S1 + 51) -
                p_over_q * *(b + 232 * OS1_S1 + 51) +
                one_over_two_q * *(b + 123 * OS1_S1 + 51) +
                one_over_two_q * *(b + 172 * OS1_S1 + 30);
            *(b + 172 * OS1_S1 + 80) =
                prefactor_z * *(b + 172 * OS1_S1 + 52) -
                p_over_q * *(b + 232 * OS1_S1 + 52) +
                one_over_two_q * *(b + 123 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 31);
            *(b + 172 * OS1_S1 + 81) =
                prefactor_y * *(b + 172 * OS1_S1 + 54) -
                p_over_q * *(b + 231 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 54) +
                one_over_two_q * *(b + 172 * OS1_S1 + 34);
            *(b + 172 * OS1_S1 + 82) =
                prefactor_y * *(b + 172 * OS1_S1 + 55) -
                p_over_q * *(b + 231 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 55);
            *(b + 172 * OS1_S1 + 83) =
                prefactor_z * *(b + 172 * OS1_S1 + 55) -
                p_over_q * *(b + 232 * OS1_S1 + 55) +
                one_over_two_q * *(b + 123 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 172 * OS1_S1 + 34);
            *(b + 173 * OS1_S1 + 56) =
                prefactor_x * *(b + 173 * OS1_S1 + 35) -
                p_over_q * *(b + 228 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 173 * OS1_S1 + 20);
            *(b + 173 * OS1_S1 + 57) =
                prefactor_y * *(b + 173 * OS1_S1 + 35) -
                p_over_q * *(b + 232 * OS1_S1 + 35) +
                one_over_two_q * *(b + 125 * OS1_S1 + 35);
            *(b + 173 * OS1_S1 + 58) =
                prefactor_z * *(b + 173 * OS1_S1 + 35) -
                p_over_q * *(b + 233 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 35);
            *(b + 173 * OS1_S1 + 59) =
                prefactor_y * *(b + 173 * OS1_S1 + 36) -
                p_over_q * *(b + 232 * OS1_S1 + 36) +
                one_over_two_q * *(b + 125 * OS1_S1 + 36) +
                one_over_two_q * *(b + 173 * OS1_S1 + 20);
            *(b + 173 * OS1_S1 + 60) =
                prefactor_y * *(b + 173 * OS1_S1 + 37) -
                p_over_q * *(b + 232 * OS1_S1 + 37) +
                one_over_two_q * *(b + 125 * OS1_S1 + 37);
            *(b + 173 * OS1_S1 + 61) =
                prefactor_z * *(b + 173 * OS1_S1 + 37) -
                p_over_q * *(b + 233 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 37) +
                one_over_two_q * *(b + 173 * OS1_S1 + 20);
            *(b + 173 * OS1_S1 + 62) =
                prefactor_y * *(b + 173 * OS1_S1 + 38) -
                p_over_q * *(b + 232 * OS1_S1 + 38) +
                one_over_two_q * *(b + 125 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 21);
            *(b + 173 * OS1_S1 + 63) =
                prefactor_z * *(b + 173 * OS1_S1 + 38) -
                p_over_q * *(b + 233 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 38);
            *(b + 173 * OS1_S1 + 64) =
                prefactor_y * *(b + 173 * OS1_S1 + 40) -
                p_over_q * *(b + 232 * OS1_S1 + 40) +
                one_over_two_q * *(b + 125 * OS1_S1 + 40);
            *(b + 173 * OS1_S1 + 65) =
                prefactor_z * *(b + 173 * OS1_S1 + 40) -
                p_over_q * *(b + 233 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 22);
            *(b + 173 * OS1_S1 + 66) =
                prefactor_x * *(b + 173 * OS1_S1 + 45) -
                p_over_q * *(b + 228 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 45) +
                one_over_two_q * *(b + 173 * OS1_S1 + 30);
            *(b + 173 * OS1_S1 + 67) =
                prefactor_z * *(b + 173 * OS1_S1 + 41) -
                p_over_q * *(b + 233 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 41);
            *(b + 173 * OS1_S1 + 68) =
                prefactor_y * *(b + 173 * OS1_S1 + 43) -
                p_over_q * *(b + 232 * OS1_S1 + 43) +
                one_over_two_q * *(b + 125 * OS1_S1 + 43) +
                one_over_two_q * *(b + 173 * OS1_S1 + 25);
            *(b + 173 * OS1_S1 + 69) =
                prefactor_y * *(b + 173 * OS1_S1 + 44) -
                p_over_q * *(b + 232 * OS1_S1 + 44) +
                one_over_two_q * *(b + 125 * OS1_S1 + 44);
            *(b + 173 * OS1_S1 + 70) =
                prefactor_x * *(b + 173 * OS1_S1 + 49) -
                p_over_q * *(b + 228 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 49) +
                one_over_two_q * *(b + 173 * OS1_S1 + 34);
            *(b + 173 * OS1_S1 + 71) =
                prefactor_x * *(b + 173 * OS1_S1 + 50) -
                p_over_q * *(b + 228 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 50);
            *(b + 173 * OS1_S1 + 72) =
                prefactor_z * *(b + 173 * OS1_S1 + 45) -
                p_over_q * *(b + 233 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 45);
            *(b + 173 * OS1_S1 + 73) =
                prefactor_x * *(b + 173 * OS1_S1 + 52) -
                p_over_q * *(b + 228 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 52);
            *(b + 173 * OS1_S1 + 74) =
                prefactor_x * *(b + 173 * OS1_S1 + 53) -
                p_over_q * *(b + 228 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 53);
            *(b + 173 * OS1_S1 + 75) =
                prefactor_y * *(b + 173 * OS1_S1 + 49) -
                p_over_q * *(b + 232 * OS1_S1 + 49) +
                one_over_two_q * *(b + 125 * OS1_S1 + 49);
            *(b + 173 * OS1_S1 + 76) =
                prefactor_x * *(b + 173 * OS1_S1 + 55) -
                p_over_q * *(b + 228 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 55);
            *(b + 173 * OS1_S1 + 77) =
                prefactor_y * *(b + 173 * OS1_S1 + 50) -
                p_over_q * *(b + 232 * OS1_S1 + 50) +
                one_over_two_q * *(b + 125 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 173 * OS1_S1 + 30);
            *(b + 173 * OS1_S1 + 78) =
                prefactor_z * *(b + 173 * OS1_S1 + 50) -
                p_over_q * *(b + 233 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 50);
            *(b + 173 * OS1_S1 + 79) =
                prefactor_z * *(b + 173 * OS1_S1 + 51) -
                p_over_q * *(b + 233 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 51) +
                one_over_two_q * *(b + 173 * OS1_S1 + 30);
            *(b + 173 * OS1_S1 + 80) =
                prefactor_y * *(b + 173 * OS1_S1 + 53) -
                p_over_q * *(b + 232 * OS1_S1 + 53) +
                one_over_two_q * *(b + 125 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 33);
            *(b + 173 * OS1_S1 + 81) =
                prefactor_y * *(b + 173 * OS1_S1 + 54) -
                p_over_q * *(b + 232 * OS1_S1 + 54) +
                one_over_two_q * *(b + 125 * OS1_S1 + 54) +
                one_over_two_q * *(b + 173 * OS1_S1 + 34);
            *(b + 173 * OS1_S1 + 82) =
                prefactor_y * *(b + 173 * OS1_S1 + 55) -
                p_over_q * *(b + 232 * OS1_S1 + 55) +
                one_over_two_q * *(b + 125 * OS1_S1 + 55);
            *(b + 173 * OS1_S1 + 83) =
                prefactor_z * *(b + 173 * OS1_S1 + 55) -
                p_over_q * *(b + 233 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 173 * OS1_S1 + 34);
            *(b + 174 * OS1_S1 + 56) =
                prefactor_x * *(b + 174 * OS1_S1 + 35) -
                p_over_q * *(b + 229 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 174 * OS1_S1 + 20);
            *(b + 174 * OS1_S1 + 57) = prefactor_y * *(b + 174 * OS1_S1 + 35) -
                                       p_over_q * *(b + 233 * OS1_S1 + 35);
            *(b + 174 * OS1_S1 + 58) =
                prefactor_z * *(b + 174 * OS1_S1 + 35) -
                p_over_q * *(b + 234 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 35);
            *(b + 174 * OS1_S1 + 59) =
                prefactor_y * *(b + 174 * OS1_S1 + 36) -
                p_over_q * *(b + 233 * OS1_S1 + 36) +
                one_over_two_q * *(b + 174 * OS1_S1 + 20);
            *(b + 174 * OS1_S1 + 60) = prefactor_y * *(b + 174 * OS1_S1 + 37) -
                                       p_over_q * *(b + 233 * OS1_S1 + 37);
            *(b + 174 * OS1_S1 + 61) =
                prefactor_z * *(b + 174 * OS1_S1 + 37) -
                p_over_q * *(b + 234 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 37) +
                one_over_two_q * *(b + 174 * OS1_S1 + 20);
            *(b + 174 * OS1_S1 + 62) =
                prefactor_y * *(b + 174 * OS1_S1 + 38) -
                p_over_q * *(b + 233 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 174 * OS1_S1 + 21);
            *(b + 174 * OS1_S1 + 63) =
                prefactor_z * *(b + 174 * OS1_S1 + 38) -
                p_over_q * *(b + 234 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 38);
            *(b + 174 * OS1_S1 + 64) = prefactor_y * *(b + 174 * OS1_S1 + 40) -
                                       p_over_q * *(b + 233 * OS1_S1 + 40);
            *(b + 174 * OS1_S1 + 65) =
                prefactor_z * *(b + 174 * OS1_S1 + 40) -
                p_over_q * *(b + 234 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 174 * OS1_S1 + 22);
            *(b + 174 * OS1_S1 + 66) =
                prefactor_x * *(b + 174 * OS1_S1 + 45) -
                p_over_q * *(b + 229 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 45) +
                one_over_two_q * *(b + 174 * OS1_S1 + 30);
            *(b + 174 * OS1_S1 + 67) =
                prefactor_z * *(b + 174 * OS1_S1 + 41) -
                p_over_q * *(b + 234 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 41);
            *(b + 174 * OS1_S1 + 68) =
                prefactor_y * *(b + 174 * OS1_S1 + 43) -
                p_over_q * *(b + 233 * OS1_S1 + 43) +
                one_over_two_q * *(b + 174 * OS1_S1 + 25);
            *(b + 174 * OS1_S1 + 69) = prefactor_y * *(b + 174 * OS1_S1 + 44) -
                                       p_over_q * *(b + 233 * OS1_S1 + 44);
            *(b + 174 * OS1_S1 + 70) =
                prefactor_x * *(b + 174 * OS1_S1 + 49) -
                p_over_q * *(b + 229 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 49) +
                one_over_two_q * *(b + 174 * OS1_S1 + 34);
            *(b + 174 * OS1_S1 + 71) =
                prefactor_x * *(b + 174 * OS1_S1 + 50) -
                p_over_q * *(b + 229 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 50);
            *(b + 174 * OS1_S1 + 72) =
                prefactor_z * *(b + 174 * OS1_S1 + 45) -
                p_over_q * *(b + 234 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 45);
            *(b + 174 * OS1_S1 + 73) =
                prefactor_x * *(b + 174 * OS1_S1 + 52) -
                p_over_q * *(b + 229 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 52);
            *(b + 174 * OS1_S1 + 74) =
                prefactor_x * *(b + 174 * OS1_S1 + 53) -
                p_over_q * *(b + 229 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 53);
            *(b + 174 * OS1_S1 + 75) = prefactor_y * *(b + 174 * OS1_S1 + 49) -
                                       p_over_q * *(b + 233 * OS1_S1 + 49);
            *(b + 174 * OS1_S1 + 76) =
                prefactor_x * *(b + 174 * OS1_S1 + 55) -
                p_over_q * *(b + 229 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 55);
            *(b + 174 * OS1_S1 + 77) =
                prefactor_y * *(b + 174 * OS1_S1 + 50) -
                p_over_q * *(b + 233 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 174 * OS1_S1 + 30);
            *(b + 174 * OS1_S1 + 78) =
                prefactor_z * *(b + 174 * OS1_S1 + 50) -
                p_over_q * *(b + 234 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 50);
            *(b + 174 * OS1_S1 + 79) =
                prefactor_z * *(b + 174 * OS1_S1 + 51) -
                p_over_q * *(b + 234 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 51) +
                one_over_two_q * *(b + 174 * OS1_S1 + 30);
            *(b + 174 * OS1_S1 + 80) =
                prefactor_y * *(b + 174 * OS1_S1 + 53) -
                p_over_q * *(b + 233 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 174 * OS1_S1 + 33);
            *(b + 174 * OS1_S1 + 81) =
                prefactor_y * *(b + 174 * OS1_S1 + 54) -
                p_over_q * *(b + 233 * OS1_S1 + 54) +
                one_over_two_q * *(b + 174 * OS1_S1 + 34);
            *(b + 174 * OS1_S1 + 82) = prefactor_y * *(b + 174 * OS1_S1 + 55) -
                                       p_over_q * *(b + 233 * OS1_S1 + 55);
            *(b + 174 * OS1_S1 + 83) =
                prefactor_z * *(b + 174 * OS1_S1 + 55) -
                p_over_q * *(b + 234 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 174 * OS1_S1 + 34);
            *(b + 175 * OS1_S1 + 56) =
                prefactor_x * *(b + 175 * OS1_S1 + 35) -
                p_over_q * *(b + 230 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 20);
            *(b + 175 * OS1_S1 + 57) =
                prefactor_y * *(b + 175 * OS1_S1 + 35) -
                p_over_q * *(b + 235 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 35);
            *(b + 175 * OS1_S1 + 58) = prefactor_z * *(b + 175 * OS1_S1 + 35) -
                                       p_over_q * *(b + 236 * OS1_S1 + 35);
            *(b + 175 * OS1_S1 + 59) =
                prefactor_y * *(b + 175 * OS1_S1 + 36) -
                p_over_q * *(b + 235 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 36) +
                one_over_two_q * *(b + 175 * OS1_S1 + 20);
            *(b + 175 * OS1_S1 + 60) = prefactor_z * *(b + 175 * OS1_S1 + 36) -
                                       p_over_q * *(b + 236 * OS1_S1 + 36);
            *(b + 175 * OS1_S1 + 61) =
                prefactor_z * *(b + 175 * OS1_S1 + 37) -
                p_over_q * *(b + 236 * OS1_S1 + 37) +
                one_over_two_q * *(b + 175 * OS1_S1 + 20);
            *(b + 175 * OS1_S1 + 62) =
                prefactor_y * *(b + 175 * OS1_S1 + 38) -
                p_over_q * *(b + 235 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 175 * OS1_S1 + 21);
            *(b + 175 * OS1_S1 + 63) = prefactor_z * *(b + 175 * OS1_S1 + 38) -
                                       p_over_q * *(b + 236 * OS1_S1 + 38);
            *(b + 175 * OS1_S1 + 64) =
                prefactor_y * *(b + 175 * OS1_S1 + 40) -
                p_over_q * *(b + 235 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 40);
            *(b + 175 * OS1_S1 + 65) =
                prefactor_z * *(b + 175 * OS1_S1 + 40) -
                p_over_q * *(b + 236 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 175 * OS1_S1 + 22);
            *(b + 175 * OS1_S1 + 66) =
                prefactor_x * *(b + 175 * OS1_S1 + 45) -
                p_over_q * *(b + 230 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 45) +
                one_over_two_q * *(b + 175 * OS1_S1 + 30);
            *(b + 175 * OS1_S1 + 67) = prefactor_z * *(b + 175 * OS1_S1 + 41) -
                                       p_over_q * *(b + 236 * OS1_S1 + 41);
            *(b + 175 * OS1_S1 + 68) =
                prefactor_z * *(b + 175 * OS1_S1 + 42) -
                p_over_q * *(b + 236 * OS1_S1 + 42) +
                one_over_two_q * *(b + 175 * OS1_S1 + 23);
            *(b + 175 * OS1_S1 + 69) =
                prefactor_y * *(b + 175 * OS1_S1 + 44) -
                p_over_q * *(b + 235 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 44);
            *(b + 175 * OS1_S1 + 70) =
                prefactor_x * *(b + 175 * OS1_S1 + 49) -
                p_over_q * *(b + 230 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 49) +
                one_over_two_q * *(b + 175 * OS1_S1 + 34);
            *(b + 175 * OS1_S1 + 71) =
                prefactor_x * *(b + 175 * OS1_S1 + 50) -
                p_over_q * *(b + 230 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 50);
            *(b + 175 * OS1_S1 + 72) = prefactor_z * *(b + 175 * OS1_S1 + 45) -
                                       p_over_q * *(b + 236 * OS1_S1 + 45);
            *(b + 175 * OS1_S1 + 73) =
                prefactor_x * *(b + 175 * OS1_S1 + 52) -
                p_over_q * *(b + 230 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 52);
            *(b + 175 * OS1_S1 + 74) =
                prefactor_x * *(b + 175 * OS1_S1 + 53) -
                p_over_q * *(b + 230 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 53);
            *(b + 175 * OS1_S1 + 75) =
                prefactor_y * *(b + 175 * OS1_S1 + 49) -
                p_over_q * *(b + 235 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 49);
            *(b + 175 * OS1_S1 + 76) =
                prefactor_x * *(b + 175 * OS1_S1 + 55) -
                p_over_q * *(b + 230 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 55);
            *(b + 175 * OS1_S1 + 77) =
                prefactor_y * *(b + 175 * OS1_S1 + 50) -
                p_over_q * *(b + 235 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 30);
            *(b + 175 * OS1_S1 + 78) = prefactor_z * *(b + 175 * OS1_S1 + 50) -
                                       p_over_q * *(b + 236 * OS1_S1 + 50);
            *(b + 175 * OS1_S1 + 79) =
                prefactor_z * *(b + 175 * OS1_S1 + 51) -
                p_over_q * *(b + 236 * OS1_S1 + 51) +
                one_over_two_q * *(b + 175 * OS1_S1 + 30);
            *(b + 175 * OS1_S1 + 80) =
                prefactor_z * *(b + 175 * OS1_S1 + 52) -
                p_over_q * *(b + 236 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 175 * OS1_S1 + 31);
            *(b + 175 * OS1_S1 + 81) =
                prefactor_y * *(b + 175 * OS1_S1 + 54) -
                p_over_q * *(b + 235 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 54) +
                one_over_two_q * *(b + 175 * OS1_S1 + 34);
            *(b + 175 * OS1_S1 + 82) =
                prefactor_y * *(b + 175 * OS1_S1 + 55) -
                p_over_q * *(b + 235 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 55);
            *(b + 175 * OS1_S1 + 83) =
                prefactor_z * *(b + 175 * OS1_S1 + 55) -
                p_over_q * *(b + 236 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 34);
            *(b + 176 * OS1_S1 + 56) =
                prefactor_x * *(b + 176 * OS1_S1 + 35) -
                p_over_q * *(b + 231 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 176 * OS1_S1 + 20);
            *(b + 176 * OS1_S1 + 57) =
                prefactor_y * *(b + 176 * OS1_S1 + 35) -
                p_over_q * *(b + 236 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 35);
            *(b + 176 * OS1_S1 + 58) =
                prefactor_z * *(b + 176 * OS1_S1 + 35) -
                p_over_q * *(b + 237 * OS1_S1 + 35) +
                one_over_two_q * *(b + 126 * OS1_S1 + 35);
            *(b + 176 * OS1_S1 + 59) =
                prefactor_y * *(b + 176 * OS1_S1 + 36) -
                p_over_q * *(b + 236 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 36) +
                one_over_two_q * *(b + 176 * OS1_S1 + 20);
            *(b + 176 * OS1_S1 + 60) =
                prefactor_z * *(b + 176 * OS1_S1 + 36) -
                p_over_q * *(b + 237 * OS1_S1 + 36) +
                one_over_two_q * *(b + 126 * OS1_S1 + 36);
            *(b + 176 * OS1_S1 + 61) =
                prefactor_z * *(b + 176 * OS1_S1 + 37) -
                p_over_q * *(b + 237 * OS1_S1 + 37) +
                one_over_two_q * *(b + 126 * OS1_S1 + 37) +
                one_over_two_q * *(b + 176 * OS1_S1 + 20);
            *(b + 176 * OS1_S1 + 62) =
                prefactor_y * *(b + 176 * OS1_S1 + 38) -
                p_over_q * *(b + 236 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 21);
            *(b + 176 * OS1_S1 + 63) =
                prefactor_z * *(b + 176 * OS1_S1 + 38) -
                p_over_q * *(b + 237 * OS1_S1 + 38) +
                one_over_two_q * *(b + 126 * OS1_S1 + 38);
            *(b + 176 * OS1_S1 + 64) =
                prefactor_y * *(b + 176 * OS1_S1 + 40) -
                p_over_q * *(b + 236 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 40);
            *(b + 176 * OS1_S1 + 65) =
                prefactor_z * *(b + 176 * OS1_S1 + 40) -
                p_over_q * *(b + 237 * OS1_S1 + 40) +
                one_over_two_q * *(b + 126 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 22);
            *(b + 176 * OS1_S1 + 66) =
                prefactor_x * *(b + 176 * OS1_S1 + 45) -
                p_over_q * *(b + 231 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 45) +
                one_over_two_q * *(b + 176 * OS1_S1 + 30);
            *(b + 176 * OS1_S1 + 67) =
                prefactor_z * *(b + 176 * OS1_S1 + 41) -
                p_over_q * *(b + 237 * OS1_S1 + 41) +
                one_over_two_q * *(b + 126 * OS1_S1 + 41);
            *(b + 176 * OS1_S1 + 68) =
                prefactor_z * *(b + 176 * OS1_S1 + 42) -
                p_over_q * *(b + 237 * OS1_S1 + 42) +
                one_over_two_q * *(b + 126 * OS1_S1 + 42) +
                one_over_two_q * *(b + 176 * OS1_S1 + 23);
            *(b + 176 * OS1_S1 + 69) =
                prefactor_y * *(b + 176 * OS1_S1 + 44) -
                p_over_q * *(b + 236 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 44);
            *(b + 176 * OS1_S1 + 70) =
                prefactor_x * *(b + 176 * OS1_S1 + 49) -
                p_over_q * *(b + 231 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 49) +
                one_over_two_q * *(b + 176 * OS1_S1 + 34);
            *(b + 176 * OS1_S1 + 71) =
                prefactor_x * *(b + 176 * OS1_S1 + 50) -
                p_over_q * *(b + 231 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 50);
            *(b + 176 * OS1_S1 + 72) =
                prefactor_z * *(b + 176 * OS1_S1 + 45) -
                p_over_q * *(b + 237 * OS1_S1 + 45) +
                one_over_two_q * *(b + 126 * OS1_S1 + 45);
            *(b + 176 * OS1_S1 + 73) =
                prefactor_x * *(b + 176 * OS1_S1 + 52) -
                p_over_q * *(b + 231 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 52);
            *(b + 176 * OS1_S1 + 74) =
                prefactor_x * *(b + 176 * OS1_S1 + 53) -
                p_over_q * *(b + 231 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 53);
            *(b + 176 * OS1_S1 + 75) =
                prefactor_y * *(b + 176 * OS1_S1 + 49) -
                p_over_q * *(b + 236 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 49);
            *(b + 176 * OS1_S1 + 76) =
                prefactor_x * *(b + 176 * OS1_S1 + 55) -
                p_over_q * *(b + 231 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 55);
            *(b + 176 * OS1_S1 + 77) =
                prefactor_y * *(b + 176 * OS1_S1 + 50) -
                p_over_q * *(b + 236 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 176 * OS1_S1 + 30);
            *(b + 176 * OS1_S1 + 78) =
                prefactor_z * *(b + 176 * OS1_S1 + 50) -
                p_over_q * *(b + 237 * OS1_S1 + 50) +
                one_over_two_q * *(b + 126 * OS1_S1 + 50);
            *(b + 176 * OS1_S1 + 79) =
                prefactor_z * *(b + 176 * OS1_S1 + 51) -
                p_over_q * *(b + 237 * OS1_S1 + 51) +
                one_over_two_q * *(b + 126 * OS1_S1 + 51) +
                one_over_two_q * *(b + 176 * OS1_S1 + 30);
            *(b + 176 * OS1_S1 + 80) =
                prefactor_z * *(b + 176 * OS1_S1 + 52) -
                p_over_q * *(b + 237 * OS1_S1 + 52) +
                one_over_two_q * *(b + 126 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 31);
            *(b + 176 * OS1_S1 + 81) =
                prefactor_y * *(b + 176 * OS1_S1 + 54) -
                p_over_q * *(b + 236 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 54) +
                one_over_two_q * *(b + 176 * OS1_S1 + 34);
            *(b + 176 * OS1_S1 + 82) =
                prefactor_y * *(b + 176 * OS1_S1 + 55) -
                p_over_q * *(b + 236 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 55);
            *(b + 176 * OS1_S1 + 83) =
                prefactor_z * *(b + 176 * OS1_S1 + 55) -
                p_over_q * *(b + 237 * OS1_S1 + 55) +
                one_over_two_q * *(b + 126 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 176 * OS1_S1 + 34);
            *(b + 177 * OS1_S1 + 56) =
                prefactor_x * *(b + 177 * OS1_S1 + 35) -
                p_over_q * *(b + 232 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 177 * OS1_S1 + 20);
            *(b + 177 * OS1_S1 + 57) =
                prefactor_y * *(b + 177 * OS1_S1 + 35) -
                p_over_q * *(b + 237 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 35);
            *(b + 177 * OS1_S1 + 58) =
                prefactor_z * *(b + 177 * OS1_S1 + 35) -
                p_over_q * *(b + 238 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 35);
            *(b + 177 * OS1_S1 + 59) =
                prefactor_y * *(b + 177 * OS1_S1 + 36) -
                p_over_q * *(b + 237 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 36) +
                one_over_two_q * *(b + 177 * OS1_S1 + 20);
            *(b + 177 * OS1_S1 + 60) =
                prefactor_z * *(b + 177 * OS1_S1 + 36) -
                p_over_q * *(b + 238 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 36);
            *(b + 177 * OS1_S1 + 61) =
                prefactor_z * *(b + 177 * OS1_S1 + 37) -
                p_over_q * *(b + 238 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 37) +
                one_over_two_q * *(b + 177 * OS1_S1 + 20);
            *(b + 177 * OS1_S1 + 62) =
                prefactor_y * *(b + 177 * OS1_S1 + 38) -
                p_over_q * *(b + 237 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 177 * OS1_S1 + 21);
            *(b + 177 * OS1_S1 + 63) =
                prefactor_z * *(b + 177 * OS1_S1 + 38) -
                p_over_q * *(b + 238 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 38);
            *(b + 177 * OS1_S1 + 64) =
                prefactor_y * *(b + 177 * OS1_S1 + 40) -
                p_over_q * *(b + 237 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 40);
            *(b + 177 * OS1_S1 + 65) =
                prefactor_z * *(b + 177 * OS1_S1 + 40) -
                p_over_q * *(b + 238 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 177 * OS1_S1 + 22);
            *(b + 177 * OS1_S1 + 66) =
                prefactor_x * *(b + 177 * OS1_S1 + 45) -
                p_over_q * *(b + 232 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 45) +
                one_over_two_q * *(b + 177 * OS1_S1 + 30);
            *(b + 177 * OS1_S1 + 67) =
                prefactor_z * *(b + 177 * OS1_S1 + 41) -
                p_over_q * *(b + 238 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 41);
            *(b + 177 * OS1_S1 + 68) =
                prefactor_z * *(b + 177 * OS1_S1 + 42) -
                p_over_q * *(b + 238 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 42) +
                one_over_two_q * *(b + 177 * OS1_S1 + 23);
            *(b + 177 * OS1_S1 + 69) =
                prefactor_y * *(b + 177 * OS1_S1 + 44) -
                p_over_q * *(b + 237 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 44);
            *(b + 177 * OS1_S1 + 70) =
                prefactor_x * *(b + 177 * OS1_S1 + 49) -
                p_over_q * *(b + 232 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 49) +
                one_over_two_q * *(b + 177 * OS1_S1 + 34);
            *(b + 177 * OS1_S1 + 71) =
                prefactor_x * *(b + 177 * OS1_S1 + 50) -
                p_over_q * *(b + 232 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 50);
            *(b + 177 * OS1_S1 + 72) =
                prefactor_z * *(b + 177 * OS1_S1 + 45) -
                p_over_q * *(b + 238 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 45);
            *(b + 177 * OS1_S1 + 73) =
                prefactor_x * *(b + 177 * OS1_S1 + 52) -
                p_over_q * *(b + 232 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 52);
            *(b + 177 * OS1_S1 + 74) =
                prefactor_x * *(b + 177 * OS1_S1 + 53) -
                p_over_q * *(b + 232 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 53);
            *(b + 177 * OS1_S1 + 75) =
                prefactor_y * *(b + 177 * OS1_S1 + 49) -
                p_over_q * *(b + 237 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 49);
            *(b + 177 * OS1_S1 + 76) =
                prefactor_x * *(b + 177 * OS1_S1 + 55) -
                p_over_q * *(b + 232 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 55);
            *(b + 177 * OS1_S1 + 77) =
                prefactor_y * *(b + 177 * OS1_S1 + 50) -
                p_over_q * *(b + 237 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 177 * OS1_S1 + 30);
            *(b + 177 * OS1_S1 + 78) =
                prefactor_z * *(b + 177 * OS1_S1 + 50) -
                p_over_q * *(b + 238 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 50);
            *(b + 177 * OS1_S1 + 79) =
                prefactor_z * *(b + 177 * OS1_S1 + 51) -
                p_over_q * *(b + 238 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 51) +
                one_over_two_q * *(b + 177 * OS1_S1 + 30);
            *(b + 177 * OS1_S1 + 80) =
                prefactor_z * *(b + 177 * OS1_S1 + 52) -
                p_over_q * *(b + 238 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 177 * OS1_S1 + 31);
            *(b + 177 * OS1_S1 + 81) =
                prefactor_y * *(b + 177 * OS1_S1 + 54) -
                p_over_q * *(b + 237 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 54) +
                one_over_two_q * *(b + 177 * OS1_S1 + 34);
            *(b + 177 * OS1_S1 + 82) =
                prefactor_y * *(b + 177 * OS1_S1 + 55) -
                p_over_q * *(b + 237 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 55);
            *(b + 177 * OS1_S1 + 83) =
                prefactor_z * *(b + 177 * OS1_S1 + 55) -
                p_over_q * *(b + 238 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 177 * OS1_S1 + 34);
            *(b + 178 * OS1_S1 + 56) =
                prefactor_x * *(b + 178 * OS1_S1 + 35) -
                p_over_q * *(b + 233 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 178 * OS1_S1 + 20);
            *(b + 178 * OS1_S1 + 57) =
                prefactor_y * *(b + 178 * OS1_S1 + 35) -
                p_over_q * *(b + 238 * OS1_S1 + 35) +
                one_over_two_q * *(b + 129 * OS1_S1 + 35);
            *(b + 178 * OS1_S1 + 58) =
                prefactor_z * *(b + 178 * OS1_S1 + 35) -
                p_over_q * *(b + 239 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 35);
            *(b + 178 * OS1_S1 + 59) =
                prefactor_y * *(b + 178 * OS1_S1 + 36) -
                p_over_q * *(b + 238 * OS1_S1 + 36) +
                one_over_two_q * *(b + 129 * OS1_S1 + 36) +
                one_over_two_q * *(b + 178 * OS1_S1 + 20);
            *(b + 178 * OS1_S1 + 60) =
                prefactor_y * *(b + 178 * OS1_S1 + 37) -
                p_over_q * *(b + 238 * OS1_S1 + 37) +
                one_over_two_q * *(b + 129 * OS1_S1 + 37);
            *(b + 178 * OS1_S1 + 61) =
                prefactor_z * *(b + 178 * OS1_S1 + 37) -
                p_over_q * *(b + 239 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 37) +
                one_over_two_q * *(b + 178 * OS1_S1 + 20);
            *(b + 178 * OS1_S1 + 62) =
                prefactor_y * *(b + 178 * OS1_S1 + 38) -
                p_over_q * *(b + 238 * OS1_S1 + 38) +
                one_over_two_q * *(b + 129 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 21);
            *(b + 178 * OS1_S1 + 63) =
                prefactor_z * *(b + 178 * OS1_S1 + 38) -
                p_over_q * *(b + 239 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 38);
            *(b + 178 * OS1_S1 + 64) =
                prefactor_y * *(b + 178 * OS1_S1 + 40) -
                p_over_q * *(b + 238 * OS1_S1 + 40) +
                one_over_two_q * *(b + 129 * OS1_S1 + 40);
            *(b + 178 * OS1_S1 + 65) =
                prefactor_z * *(b + 178 * OS1_S1 + 40) -
                p_over_q * *(b + 239 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 22);
            *(b + 178 * OS1_S1 + 66) =
                prefactor_x * *(b + 178 * OS1_S1 + 45) -
                p_over_q * *(b + 233 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 45) +
                one_over_two_q * *(b + 178 * OS1_S1 + 30);
            *(b + 178 * OS1_S1 + 67) =
                prefactor_z * *(b + 178 * OS1_S1 + 41) -
                p_over_q * *(b + 239 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 41);
            *(b + 178 * OS1_S1 + 68) =
                prefactor_y * *(b + 178 * OS1_S1 + 43) -
                p_over_q * *(b + 238 * OS1_S1 + 43) +
                one_over_two_q * *(b + 129 * OS1_S1 + 43) +
                one_over_two_q * *(b + 178 * OS1_S1 + 25);
            *(b + 178 * OS1_S1 + 69) =
                prefactor_y * *(b + 178 * OS1_S1 + 44) -
                p_over_q * *(b + 238 * OS1_S1 + 44) +
                one_over_two_q * *(b + 129 * OS1_S1 + 44);
            *(b + 178 * OS1_S1 + 70) =
                prefactor_x * *(b + 178 * OS1_S1 + 49) -
                p_over_q * *(b + 233 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 49) +
                one_over_two_q * *(b + 178 * OS1_S1 + 34);
            *(b + 178 * OS1_S1 + 71) =
                prefactor_x * *(b + 178 * OS1_S1 + 50) -
                p_over_q * *(b + 233 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 50);
            *(b + 178 * OS1_S1 + 72) =
                prefactor_z * *(b + 178 * OS1_S1 + 45) -
                p_over_q * *(b + 239 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 45);
            *(b + 178 * OS1_S1 + 73) =
                prefactor_x * *(b + 178 * OS1_S1 + 52) -
                p_over_q * *(b + 233 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 52);
            *(b + 178 * OS1_S1 + 74) =
                prefactor_x * *(b + 178 * OS1_S1 + 53) -
                p_over_q * *(b + 233 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 53);
            *(b + 178 * OS1_S1 + 75) =
                prefactor_y * *(b + 178 * OS1_S1 + 49) -
                p_over_q * *(b + 238 * OS1_S1 + 49) +
                one_over_two_q * *(b + 129 * OS1_S1 + 49);
            *(b + 178 * OS1_S1 + 76) =
                prefactor_x * *(b + 178 * OS1_S1 + 55) -
                p_over_q * *(b + 233 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 55);
            *(b + 178 * OS1_S1 + 77) =
                prefactor_y * *(b + 178 * OS1_S1 + 50) -
                p_over_q * *(b + 238 * OS1_S1 + 50) +
                one_over_two_q * *(b + 129 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 178 * OS1_S1 + 30);
            *(b + 178 * OS1_S1 + 78) =
                prefactor_z * *(b + 178 * OS1_S1 + 50) -
                p_over_q * *(b + 239 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 50);
            *(b + 178 * OS1_S1 + 79) =
                prefactor_z * *(b + 178 * OS1_S1 + 51) -
                p_over_q * *(b + 239 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 51) +
                one_over_two_q * *(b + 178 * OS1_S1 + 30);
            *(b + 178 * OS1_S1 + 80) =
                prefactor_y * *(b + 178 * OS1_S1 + 53) -
                p_over_q * *(b + 238 * OS1_S1 + 53) +
                one_over_two_q * *(b + 129 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 33);
            *(b + 178 * OS1_S1 + 81) =
                prefactor_y * *(b + 178 * OS1_S1 + 54) -
                p_over_q * *(b + 238 * OS1_S1 + 54) +
                one_over_two_q * *(b + 129 * OS1_S1 + 54) +
                one_over_two_q * *(b + 178 * OS1_S1 + 34);
            *(b + 178 * OS1_S1 + 82) =
                prefactor_y * *(b + 178 * OS1_S1 + 55) -
                p_over_q * *(b + 238 * OS1_S1 + 55) +
                one_over_two_q * *(b + 129 * OS1_S1 + 55);
            *(b + 178 * OS1_S1 + 83) =
                prefactor_z * *(b + 178 * OS1_S1 + 55) -
                p_over_q * *(b + 239 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 178 * OS1_S1 + 34);
            *(b + 179 * OS1_S1 + 56) =
                prefactor_x * *(b + 179 * OS1_S1 + 35) -
                p_over_q * *(b + 234 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 20);
            *(b + 179 * OS1_S1 + 57) = prefactor_y * *(b + 179 * OS1_S1 + 35) -
                                       p_over_q * *(b + 239 * OS1_S1 + 35);
            *(b + 179 * OS1_S1 + 58) =
                prefactor_z * *(b + 179 * OS1_S1 + 35) -
                p_over_q * *(b + 240 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 35);
            *(b + 179 * OS1_S1 + 59) =
                prefactor_y * *(b + 179 * OS1_S1 + 36) -
                p_over_q * *(b + 239 * OS1_S1 + 36) +
                one_over_two_q * *(b + 179 * OS1_S1 + 20);
            *(b + 179 * OS1_S1 + 60) = prefactor_y * *(b + 179 * OS1_S1 + 37) -
                                       p_over_q * *(b + 239 * OS1_S1 + 37);
            *(b + 179 * OS1_S1 + 61) =
                prefactor_z * *(b + 179 * OS1_S1 + 37) -
                p_over_q * *(b + 240 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 37) +
                one_over_two_q * *(b + 179 * OS1_S1 + 20);
            *(b + 179 * OS1_S1 + 62) =
                prefactor_y * *(b + 179 * OS1_S1 + 38) -
                p_over_q * *(b + 239 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 179 * OS1_S1 + 21);
            *(b + 179 * OS1_S1 + 63) =
                prefactor_z * *(b + 179 * OS1_S1 + 38) -
                p_over_q * *(b + 240 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 38);
            *(b + 179 * OS1_S1 + 64) = prefactor_y * *(b + 179 * OS1_S1 + 40) -
                                       p_over_q * *(b + 239 * OS1_S1 + 40);
            *(b + 179 * OS1_S1 + 65) =
                prefactor_z * *(b + 179 * OS1_S1 + 40) -
                p_over_q * *(b + 240 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 179 * OS1_S1 + 22);
            *(b + 179 * OS1_S1 + 66) =
                prefactor_x * *(b + 179 * OS1_S1 + 45) -
                p_over_q * *(b + 234 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 45) +
                one_over_two_q * *(b + 179 * OS1_S1 + 30);
            *(b + 179 * OS1_S1 + 67) =
                prefactor_z * *(b + 179 * OS1_S1 + 41) -
                p_over_q * *(b + 240 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 41);
            *(b + 179 * OS1_S1 + 68) =
                prefactor_y * *(b + 179 * OS1_S1 + 43) -
                p_over_q * *(b + 239 * OS1_S1 + 43) +
                one_over_two_q * *(b + 179 * OS1_S1 + 25);
            *(b + 179 * OS1_S1 + 69) = prefactor_y * *(b + 179 * OS1_S1 + 44) -
                                       p_over_q * *(b + 239 * OS1_S1 + 44);
            *(b + 179 * OS1_S1 + 70) =
                prefactor_x * *(b + 179 * OS1_S1 + 49) -
                p_over_q * *(b + 234 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 49) +
                one_over_two_q * *(b + 179 * OS1_S1 + 34);
            *(b + 179 * OS1_S1 + 71) =
                prefactor_x * *(b + 179 * OS1_S1 + 50) -
                p_over_q * *(b + 234 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 50);
            *(b + 179 * OS1_S1 + 72) =
                prefactor_z * *(b + 179 * OS1_S1 + 45) -
                p_over_q * *(b + 240 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 45);
            *(b + 179 * OS1_S1 + 73) =
                prefactor_x * *(b + 179 * OS1_S1 + 52) -
                p_over_q * *(b + 234 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 52);
            *(b + 179 * OS1_S1 + 74) =
                prefactor_x * *(b + 179 * OS1_S1 + 53) -
                p_over_q * *(b + 234 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 53);
            *(b + 179 * OS1_S1 + 75) = prefactor_y * *(b + 179 * OS1_S1 + 49) -
                                       p_over_q * *(b + 239 * OS1_S1 + 49);
            *(b + 179 * OS1_S1 + 76) =
                prefactor_x * *(b + 179 * OS1_S1 + 55) -
                p_over_q * *(b + 234 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 55);
            *(b + 179 * OS1_S1 + 77) =
                prefactor_y * *(b + 179 * OS1_S1 + 50) -
                p_over_q * *(b + 239 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 30);
            *(b + 179 * OS1_S1 + 78) =
                prefactor_z * *(b + 179 * OS1_S1 + 50) -
                p_over_q * *(b + 240 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 50);
            *(b + 179 * OS1_S1 + 79) =
                prefactor_z * *(b + 179 * OS1_S1 + 51) -
                p_over_q * *(b + 240 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 51) +
                one_over_two_q * *(b + 179 * OS1_S1 + 30);
            *(b + 179 * OS1_S1 + 80) =
                prefactor_y * *(b + 179 * OS1_S1 + 53) -
                p_over_q * *(b + 239 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 179 * OS1_S1 + 33);
            *(b + 179 * OS1_S1 + 81) =
                prefactor_y * *(b + 179 * OS1_S1 + 54) -
                p_over_q * *(b + 239 * OS1_S1 + 54) +
                one_over_two_q * *(b + 179 * OS1_S1 + 34);
            *(b + 179 * OS1_S1 + 82) = prefactor_y * *(b + 179 * OS1_S1 + 55) -
                                       p_over_q * *(b + 239 * OS1_S1 + 55);
            *(b + 179 * OS1_S1 + 83) =
                prefactor_z * *(b + 179 * OS1_S1 + 55) -
                p_over_q * *(b + 240 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 34);
            *(b + 180 * OS1_S1 + 56) =
                prefactor_x * *(b + 180 * OS1_S1 + 35) -
                p_over_q * *(b + 235 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 20);
            *(b + 180 * OS1_S1 + 57) =
                prefactor_y * *(b + 180 * OS1_S1 + 35) -
                p_over_q * *(b + 241 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 35);
            *(b + 180 * OS1_S1 + 58) = prefactor_z * *(b + 180 * OS1_S1 + 35) -
                                       p_over_q * *(b + 242 * OS1_S1 + 35);
            *(b + 180 * OS1_S1 + 59) =
                prefactor_y * *(b + 180 * OS1_S1 + 36) -
                p_over_q * *(b + 241 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 36) +
                one_over_two_q * *(b + 180 * OS1_S1 + 20);
            *(b + 180 * OS1_S1 + 60) = prefactor_z * *(b + 180 * OS1_S1 + 36) -
                                       p_over_q * *(b + 242 * OS1_S1 + 36);
            *(b + 180 * OS1_S1 + 61) =
                prefactor_z * *(b + 180 * OS1_S1 + 37) -
                p_over_q * *(b + 242 * OS1_S1 + 37) +
                one_over_two_q * *(b + 180 * OS1_S1 + 20);
            *(b + 180 * OS1_S1 + 62) =
                prefactor_x * *(b + 180 * OS1_S1 + 41) -
                p_over_q * *(b + 235 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 180 * OS1_S1 + 26);
            *(b + 180 * OS1_S1 + 63) = prefactor_z * *(b + 180 * OS1_S1 + 38) -
                                       p_over_q * *(b + 242 * OS1_S1 + 38);
            *(b + 180 * OS1_S1 + 64) =
                prefactor_y * *(b + 180 * OS1_S1 + 40) -
                p_over_q * *(b + 241 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 40);
            *(b + 180 * OS1_S1 + 65) =
                prefactor_z * *(b + 180 * OS1_S1 + 40) -
                p_over_q * *(b + 242 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 180 * OS1_S1 + 22);
            *(b + 180 * OS1_S1 + 66) =
                prefactor_x * *(b + 180 * OS1_S1 + 45) -
                p_over_q * *(b + 235 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 45) +
                one_over_two_q * *(b + 180 * OS1_S1 + 30);
            *(b + 180 * OS1_S1 + 67) = prefactor_z * *(b + 180 * OS1_S1 + 41) -
                                       p_over_q * *(b + 242 * OS1_S1 + 41);
            *(b + 180 * OS1_S1 + 68) =
                prefactor_z * *(b + 180 * OS1_S1 + 42) -
                p_over_q * *(b + 242 * OS1_S1 + 42) +
                one_over_two_q * *(b + 180 * OS1_S1 + 23);
            *(b + 180 * OS1_S1 + 69) =
                prefactor_y * *(b + 180 * OS1_S1 + 44) -
                p_over_q * *(b + 241 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 44);
            *(b + 180 * OS1_S1 + 70) =
                prefactor_x * *(b + 180 * OS1_S1 + 49) -
                p_over_q * *(b + 235 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 49) +
                one_over_two_q * *(b + 180 * OS1_S1 + 34);
            *(b + 180 * OS1_S1 + 71) =
                prefactor_x * *(b + 180 * OS1_S1 + 50) -
                p_over_q * *(b + 235 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 50);
            *(b + 180 * OS1_S1 + 72) = prefactor_z * *(b + 180 * OS1_S1 + 45) -
                                       p_over_q * *(b + 242 * OS1_S1 + 45);
            *(b + 180 * OS1_S1 + 73) =
                prefactor_x * *(b + 180 * OS1_S1 + 52) -
                p_over_q * *(b + 235 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 52);
            *(b + 180 * OS1_S1 + 74) =
                prefactor_x * *(b + 180 * OS1_S1 + 53) -
                p_over_q * *(b + 235 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 53);
            *(b + 180 * OS1_S1 + 75) =
                prefactor_x * *(b + 180 * OS1_S1 + 54) -
                p_over_q * *(b + 235 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 54);
            *(b + 180 * OS1_S1 + 76) =
                prefactor_x * *(b + 180 * OS1_S1 + 55) -
                p_over_q * *(b + 235 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 55);
            *(b + 180 * OS1_S1 + 77) =
                prefactor_y * *(b + 180 * OS1_S1 + 50) -
                p_over_q * *(b + 241 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 30);
            *(b + 180 * OS1_S1 + 78) = prefactor_z * *(b + 180 * OS1_S1 + 50) -
                                       p_over_q * *(b + 242 * OS1_S1 + 50);
            *(b + 180 * OS1_S1 + 79) =
                prefactor_z * *(b + 180 * OS1_S1 + 51) -
                p_over_q * *(b + 242 * OS1_S1 + 51) +
                one_over_two_q * *(b + 180 * OS1_S1 + 30);
            *(b + 180 * OS1_S1 + 80) =
                prefactor_z * *(b + 180 * OS1_S1 + 52) -
                p_over_q * *(b + 242 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 180 * OS1_S1 + 31);
            *(b + 180 * OS1_S1 + 81) =
                prefactor_y * *(b + 180 * OS1_S1 + 54) -
                p_over_q * *(b + 241 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 54) +
                one_over_two_q * *(b + 180 * OS1_S1 + 34);
            *(b + 180 * OS1_S1 + 82) =
                prefactor_y * *(b + 180 * OS1_S1 + 55) -
                p_over_q * *(b + 241 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 55);
            *(b + 180 * OS1_S1 + 83) =
                prefactor_z * *(b + 180 * OS1_S1 + 55) -
                p_over_q * *(b + 242 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 34);
            *(b + 181 * OS1_S1 + 56) =
                prefactor_x * *(b + 181 * OS1_S1 + 35) -
                p_over_q * *(b + 236 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 20);
            *(b + 181 * OS1_S1 + 57) =
                prefactor_y * *(b + 181 * OS1_S1 + 35) -
                p_over_q * *(b + 242 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 35);
            *(b + 181 * OS1_S1 + 58) =
                prefactor_z * *(b + 181 * OS1_S1 + 35) -
                p_over_q * *(b + 243 * OS1_S1 + 35) +
                one_over_two_q * *(b + 130 * OS1_S1 + 35);
            *(b + 181 * OS1_S1 + 59) =
                prefactor_y * *(b + 181 * OS1_S1 + 36) -
                p_over_q * *(b + 242 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 36) +
                one_over_two_q * *(b + 181 * OS1_S1 + 20);
            *(b + 181 * OS1_S1 + 60) =
                prefactor_z * *(b + 181 * OS1_S1 + 36) -
                p_over_q * *(b + 243 * OS1_S1 + 36) +
                one_over_two_q * *(b + 130 * OS1_S1 + 36);
            *(b + 181 * OS1_S1 + 61) =
                prefactor_z * *(b + 181 * OS1_S1 + 37) -
                p_over_q * *(b + 243 * OS1_S1 + 37) +
                one_over_two_q * *(b + 130 * OS1_S1 + 37) +
                one_over_two_q * *(b + 181 * OS1_S1 + 20);
            *(b + 181 * OS1_S1 + 62) =
                prefactor_y * *(b + 181 * OS1_S1 + 38) -
                p_over_q * *(b + 242 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 21);
            *(b + 181 * OS1_S1 + 63) =
                prefactor_z * *(b + 181 * OS1_S1 + 38) -
                p_over_q * *(b + 243 * OS1_S1 + 38) +
                one_over_two_q * *(b + 130 * OS1_S1 + 38);
            *(b + 181 * OS1_S1 + 64) =
                prefactor_y * *(b + 181 * OS1_S1 + 40) -
                p_over_q * *(b + 242 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 40);
            *(b + 181 * OS1_S1 + 65) =
                prefactor_z * *(b + 181 * OS1_S1 + 40) -
                p_over_q * *(b + 243 * OS1_S1 + 40) +
                one_over_two_q * *(b + 130 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 22);
            *(b + 181 * OS1_S1 + 66) =
                prefactor_x * *(b + 181 * OS1_S1 + 45) -
                p_over_q * *(b + 236 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 45) +
                one_over_two_q * *(b + 181 * OS1_S1 + 30);
            *(b + 181 * OS1_S1 + 67) =
                prefactor_z * *(b + 181 * OS1_S1 + 41) -
                p_over_q * *(b + 243 * OS1_S1 + 41) +
                one_over_two_q * *(b + 130 * OS1_S1 + 41);
            *(b + 181 * OS1_S1 + 68) =
                prefactor_z * *(b + 181 * OS1_S1 + 42) -
                p_over_q * *(b + 243 * OS1_S1 + 42) +
                one_over_two_q * *(b + 130 * OS1_S1 + 42) +
                one_over_two_q * *(b + 181 * OS1_S1 + 23);
            *(b + 181 * OS1_S1 + 69) =
                prefactor_y * *(b + 181 * OS1_S1 + 44) -
                p_over_q * *(b + 242 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 44);
            *(b + 181 * OS1_S1 + 70) =
                prefactor_x * *(b + 181 * OS1_S1 + 49) -
                p_over_q * *(b + 236 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 49) +
                one_over_two_q * *(b + 181 * OS1_S1 + 34);
            *(b + 181 * OS1_S1 + 71) =
                prefactor_x * *(b + 181 * OS1_S1 + 50) -
                p_over_q * *(b + 236 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 50);
            *(b + 181 * OS1_S1 + 72) =
                prefactor_z * *(b + 181 * OS1_S1 + 45) -
                p_over_q * *(b + 243 * OS1_S1 + 45) +
                one_over_two_q * *(b + 130 * OS1_S1 + 45);
            *(b + 181 * OS1_S1 + 73) =
                prefactor_x * *(b + 181 * OS1_S1 + 52) -
                p_over_q * *(b + 236 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 52);
            *(b + 181 * OS1_S1 + 74) =
                prefactor_x * *(b + 181 * OS1_S1 + 53) -
                p_over_q * *(b + 236 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 53);
            *(b + 181 * OS1_S1 + 75) =
                prefactor_y * *(b + 181 * OS1_S1 + 49) -
                p_over_q * *(b + 242 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 49);
            *(b + 181 * OS1_S1 + 76) =
                prefactor_x * *(b + 181 * OS1_S1 + 55) -
                p_over_q * *(b + 236 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 55);
            *(b + 181 * OS1_S1 + 77) =
                prefactor_y * *(b + 181 * OS1_S1 + 50) -
                p_over_q * *(b + 242 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 30);
            *(b + 181 * OS1_S1 + 78) =
                prefactor_z * *(b + 181 * OS1_S1 + 50) -
                p_over_q * *(b + 243 * OS1_S1 + 50) +
                one_over_two_q * *(b + 130 * OS1_S1 + 50);
            *(b + 181 * OS1_S1 + 79) =
                prefactor_z * *(b + 181 * OS1_S1 + 51) -
                p_over_q * *(b + 243 * OS1_S1 + 51) +
                one_over_two_q * *(b + 130 * OS1_S1 + 51) +
                one_over_two_q * *(b + 181 * OS1_S1 + 30);
            *(b + 181 * OS1_S1 + 80) =
                prefactor_z * *(b + 181 * OS1_S1 + 52) -
                p_over_q * *(b + 243 * OS1_S1 + 52) +
                one_over_two_q * *(b + 130 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 31);
            *(b + 181 * OS1_S1 + 81) =
                prefactor_y * *(b + 181 * OS1_S1 + 54) -
                p_over_q * *(b + 242 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 54) +
                one_over_two_q * *(b + 181 * OS1_S1 + 34);
            *(b + 181 * OS1_S1 + 82) =
                prefactor_y * *(b + 181 * OS1_S1 + 55) -
                p_over_q * *(b + 242 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 55);
            *(b + 181 * OS1_S1 + 83) =
                prefactor_z * *(b + 181 * OS1_S1 + 55) -
                p_over_q * *(b + 243 * OS1_S1 + 55) +
                one_over_two_q * *(b + 130 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 34);
            *(b + 182 * OS1_S1 + 56) =
                prefactor_x * *(b + 182 * OS1_S1 + 35) -
                p_over_q * *(b + 237 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 20);
            *(b + 182 * OS1_S1 + 57) =
                prefactor_y * *(b + 182 * OS1_S1 + 35) -
                p_over_q * *(b + 243 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 35);
            *(b + 182 * OS1_S1 + 58) =
                prefactor_z * *(b + 182 * OS1_S1 + 35) -
                p_over_q * *(b + 244 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 35);
            *(b + 182 * OS1_S1 + 59) =
                prefactor_y * *(b + 182 * OS1_S1 + 36) -
                p_over_q * *(b + 243 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 36) +
                one_over_two_q * *(b + 182 * OS1_S1 + 20);
            *(b + 182 * OS1_S1 + 60) =
                prefactor_z * *(b + 182 * OS1_S1 + 36) -
                p_over_q * *(b + 244 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 36);
            *(b + 182 * OS1_S1 + 61) =
                prefactor_z * *(b + 182 * OS1_S1 + 37) -
                p_over_q * *(b + 244 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 37) +
                one_over_two_q * *(b + 182 * OS1_S1 + 20);
            *(b + 182 * OS1_S1 + 62) =
                prefactor_y * *(b + 182 * OS1_S1 + 38) -
                p_over_q * *(b + 243 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 182 * OS1_S1 + 21);
            *(b + 182 * OS1_S1 + 63) =
                prefactor_z * *(b + 182 * OS1_S1 + 38) -
                p_over_q * *(b + 244 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 38);
            *(b + 182 * OS1_S1 + 64) =
                prefactor_y * *(b + 182 * OS1_S1 + 40) -
                p_over_q * *(b + 243 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 40);
            *(b + 182 * OS1_S1 + 65) =
                prefactor_z * *(b + 182 * OS1_S1 + 40) -
                p_over_q * *(b + 244 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 182 * OS1_S1 + 22);
            *(b + 182 * OS1_S1 + 66) =
                prefactor_x * *(b + 182 * OS1_S1 + 45) -
                p_over_q * *(b + 237 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 45) +
                one_over_two_q * *(b + 182 * OS1_S1 + 30);
            *(b + 182 * OS1_S1 + 67) =
                prefactor_z * *(b + 182 * OS1_S1 + 41) -
                p_over_q * *(b + 244 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 41);
            *(b + 182 * OS1_S1 + 68) =
                prefactor_z * *(b + 182 * OS1_S1 + 42) -
                p_over_q * *(b + 244 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 42) +
                one_over_two_q * *(b + 182 * OS1_S1 + 23);
            *(b + 182 * OS1_S1 + 69) =
                prefactor_y * *(b + 182 * OS1_S1 + 44) -
                p_over_q * *(b + 243 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 44);
            *(b + 182 * OS1_S1 + 70) =
                prefactor_x * *(b + 182 * OS1_S1 + 49) -
                p_over_q * *(b + 237 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 49) +
                one_over_two_q * *(b + 182 * OS1_S1 + 34);
            *(b + 182 * OS1_S1 + 71) =
                prefactor_x * *(b + 182 * OS1_S1 + 50) -
                p_over_q * *(b + 237 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 50);
            *(b + 182 * OS1_S1 + 72) =
                prefactor_z * *(b + 182 * OS1_S1 + 45) -
                p_over_q * *(b + 244 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 45);
            *(b + 182 * OS1_S1 + 73) =
                prefactor_x * *(b + 182 * OS1_S1 + 52) -
                p_over_q * *(b + 237 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 52);
            *(b + 182 * OS1_S1 + 74) =
                prefactor_x * *(b + 182 * OS1_S1 + 53) -
                p_over_q * *(b + 237 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 53);
            *(b + 182 * OS1_S1 + 75) =
                prefactor_y * *(b + 182 * OS1_S1 + 49) -
                p_over_q * *(b + 243 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 49);
            *(b + 182 * OS1_S1 + 76) =
                prefactor_x * *(b + 182 * OS1_S1 + 55) -
                p_over_q * *(b + 237 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 55);
            *(b + 182 * OS1_S1 + 77) =
                prefactor_y * *(b + 182 * OS1_S1 + 50) -
                p_over_q * *(b + 243 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 30);
            *(b + 182 * OS1_S1 + 78) =
                prefactor_z * *(b + 182 * OS1_S1 + 50) -
                p_over_q * *(b + 244 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 50);
            *(b + 182 * OS1_S1 + 79) =
                prefactor_z * *(b + 182 * OS1_S1 + 51) -
                p_over_q * *(b + 244 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 51) +
                one_over_two_q * *(b + 182 * OS1_S1 + 30);
            *(b + 182 * OS1_S1 + 80) =
                prefactor_z * *(b + 182 * OS1_S1 + 52) -
                p_over_q * *(b + 244 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 182 * OS1_S1 + 31);
            *(b + 182 * OS1_S1 + 81) =
                prefactor_y * *(b + 182 * OS1_S1 + 54) -
                p_over_q * *(b + 243 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 54) +
                one_over_two_q * *(b + 182 * OS1_S1 + 34);
            *(b + 182 * OS1_S1 + 82) =
                prefactor_y * *(b + 182 * OS1_S1 + 55) -
                p_over_q * *(b + 243 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 55);
            *(b + 182 * OS1_S1 + 83) =
                prefactor_z * *(b + 182 * OS1_S1 + 55) -
                p_over_q * *(b + 244 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 34);
            *(b + 183 * OS1_S1 + 56) =
                prefactor_x * *(b + 183 * OS1_S1 + 35) -
                p_over_q * *(b + 238 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 20);
            *(b + 183 * OS1_S1 + 57) =
                prefactor_y * *(b + 183 * OS1_S1 + 35) -
                p_over_q * *(b + 244 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 35);
            *(b + 183 * OS1_S1 + 58) =
                prefactor_z * *(b + 183 * OS1_S1 + 35) -
                p_over_q * *(b + 245 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 35);
            *(b + 183 * OS1_S1 + 59) =
                prefactor_y * *(b + 183 * OS1_S1 + 36) -
                p_over_q * *(b + 244 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 36) +
                one_over_two_q * *(b + 183 * OS1_S1 + 20);
            *(b + 183 * OS1_S1 + 60) =
                prefactor_y * *(b + 183 * OS1_S1 + 37) -
                p_over_q * *(b + 244 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 37);
            *(b + 183 * OS1_S1 + 61) =
                prefactor_z * *(b + 183 * OS1_S1 + 37) -
                p_over_q * *(b + 245 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 37) +
                one_over_two_q * *(b + 183 * OS1_S1 + 20);
            *(b + 183 * OS1_S1 + 62) =
                prefactor_y * *(b + 183 * OS1_S1 + 38) -
                p_over_q * *(b + 244 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 183 * OS1_S1 + 21);
            *(b + 183 * OS1_S1 + 63) =
                prefactor_z * *(b + 183 * OS1_S1 + 38) -
                p_over_q * *(b + 245 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 38);
            *(b + 183 * OS1_S1 + 64) =
                prefactor_y * *(b + 183 * OS1_S1 + 40) -
                p_over_q * *(b + 244 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 40);
            *(b + 183 * OS1_S1 + 65) =
                prefactor_z * *(b + 183 * OS1_S1 + 40) -
                p_over_q * *(b + 245 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 183 * OS1_S1 + 22);
            *(b + 183 * OS1_S1 + 66) =
                prefactor_x * *(b + 183 * OS1_S1 + 45) -
                p_over_q * *(b + 238 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 45) +
                one_over_two_q * *(b + 183 * OS1_S1 + 30);
            *(b + 183 * OS1_S1 + 67) =
                prefactor_z * *(b + 183 * OS1_S1 + 41) -
                p_over_q * *(b + 245 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 41);
            *(b + 183 * OS1_S1 + 68) =
                prefactor_y * *(b + 183 * OS1_S1 + 43) -
                p_over_q * *(b + 244 * OS1_S1 + 43) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 43) +
                one_over_two_q * *(b + 183 * OS1_S1 + 25);
            *(b + 183 * OS1_S1 + 69) =
                prefactor_y * *(b + 183 * OS1_S1 + 44) -
                p_over_q * *(b + 244 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 44);
            *(b + 183 * OS1_S1 + 70) =
                prefactor_x * *(b + 183 * OS1_S1 + 49) -
                p_over_q * *(b + 238 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 49) +
                one_over_two_q * *(b + 183 * OS1_S1 + 34);
            *(b + 183 * OS1_S1 + 71) =
                prefactor_x * *(b + 183 * OS1_S1 + 50) -
                p_over_q * *(b + 238 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 50);
            *(b + 183 * OS1_S1 + 72) =
                prefactor_z * *(b + 183 * OS1_S1 + 45) -
                p_over_q * *(b + 245 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 45);
            *(b + 183 * OS1_S1 + 73) =
                prefactor_x * *(b + 183 * OS1_S1 + 52) -
                p_over_q * *(b + 238 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 52);
            *(b + 183 * OS1_S1 + 74) =
                prefactor_x * *(b + 183 * OS1_S1 + 53) -
                p_over_q * *(b + 238 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 53);
            *(b + 183 * OS1_S1 + 75) =
                prefactor_y * *(b + 183 * OS1_S1 + 49) -
                p_over_q * *(b + 244 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 49);
            *(b + 183 * OS1_S1 + 76) =
                prefactor_x * *(b + 183 * OS1_S1 + 55) -
                p_over_q * *(b + 238 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 55);
            *(b + 183 * OS1_S1 + 77) =
                prefactor_y * *(b + 183 * OS1_S1 + 50) -
                p_over_q * *(b + 244 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 30);
            *(b + 183 * OS1_S1 + 78) =
                prefactor_z * *(b + 183 * OS1_S1 + 50) -
                p_over_q * *(b + 245 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 50);
            *(b + 183 * OS1_S1 + 79) =
                prefactor_z * *(b + 183 * OS1_S1 + 51) -
                p_over_q * *(b + 245 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 51) +
                one_over_two_q * *(b + 183 * OS1_S1 + 30);
            *(b + 183 * OS1_S1 + 80) =
                prefactor_y * *(b + 183 * OS1_S1 + 53) -
                p_over_q * *(b + 244 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 183 * OS1_S1 + 33);
            *(b + 183 * OS1_S1 + 81) =
                prefactor_y * *(b + 183 * OS1_S1 + 54) -
                p_over_q * *(b + 244 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 54) +
                one_over_two_q * *(b + 183 * OS1_S1 + 34);
            *(b + 183 * OS1_S1 + 82) =
                prefactor_y * *(b + 183 * OS1_S1 + 55) -
                p_over_q * *(b + 244 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 55);
            *(b + 183 * OS1_S1 + 83) =
                prefactor_z * *(b + 183 * OS1_S1 + 55) -
                p_over_q * *(b + 245 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 34);
            *(b + 184 * OS1_S1 + 56) =
                prefactor_x * *(b + 184 * OS1_S1 + 35) -
                p_over_q * *(b + 239 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 20);
            *(b + 184 * OS1_S1 + 57) =
                prefactor_y * *(b + 184 * OS1_S1 + 35) -
                p_over_q * *(b + 245 * OS1_S1 + 35) +
                one_over_two_q * *(b + 134 * OS1_S1 + 35);
            *(b + 184 * OS1_S1 + 58) =
                prefactor_z * *(b + 184 * OS1_S1 + 35) -
                p_over_q * *(b + 246 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 35);
            *(b + 184 * OS1_S1 + 59) =
                prefactor_y * *(b + 184 * OS1_S1 + 36) -
                p_over_q * *(b + 245 * OS1_S1 + 36) +
                one_over_two_q * *(b + 134 * OS1_S1 + 36) +
                one_over_two_q * *(b + 184 * OS1_S1 + 20);
            *(b + 184 * OS1_S1 + 60) =
                prefactor_y * *(b + 184 * OS1_S1 + 37) -
                p_over_q * *(b + 245 * OS1_S1 + 37) +
                one_over_two_q * *(b + 134 * OS1_S1 + 37);
            *(b + 184 * OS1_S1 + 61) =
                prefactor_z * *(b + 184 * OS1_S1 + 37) -
                p_over_q * *(b + 246 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 37) +
                one_over_two_q * *(b + 184 * OS1_S1 + 20);
            *(b + 184 * OS1_S1 + 62) =
                prefactor_y * *(b + 184 * OS1_S1 + 38) -
                p_over_q * *(b + 245 * OS1_S1 + 38) +
                one_over_two_q * *(b + 134 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 21);
            *(b + 184 * OS1_S1 + 63) =
                prefactor_z * *(b + 184 * OS1_S1 + 38) -
                p_over_q * *(b + 246 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 38);
            *(b + 184 * OS1_S1 + 64) =
                prefactor_y * *(b + 184 * OS1_S1 + 40) -
                p_over_q * *(b + 245 * OS1_S1 + 40) +
                one_over_two_q * *(b + 134 * OS1_S1 + 40);
            *(b + 184 * OS1_S1 + 65) =
                prefactor_z * *(b + 184 * OS1_S1 + 40) -
                p_over_q * *(b + 246 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 22);
            *(b + 184 * OS1_S1 + 66) =
                prefactor_x * *(b + 184 * OS1_S1 + 45) -
                p_over_q * *(b + 239 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 45) +
                one_over_two_q * *(b + 184 * OS1_S1 + 30);
            *(b + 184 * OS1_S1 + 67) =
                prefactor_z * *(b + 184 * OS1_S1 + 41) -
                p_over_q * *(b + 246 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 41);
            *(b + 184 * OS1_S1 + 68) =
                prefactor_y * *(b + 184 * OS1_S1 + 43) -
                p_over_q * *(b + 245 * OS1_S1 + 43) +
                one_over_two_q * *(b + 134 * OS1_S1 + 43) +
                one_over_two_q * *(b + 184 * OS1_S1 + 25);
            *(b + 184 * OS1_S1 + 69) =
                prefactor_y * *(b + 184 * OS1_S1 + 44) -
                p_over_q * *(b + 245 * OS1_S1 + 44) +
                one_over_two_q * *(b + 134 * OS1_S1 + 44);
            *(b + 184 * OS1_S1 + 70) =
                prefactor_x * *(b + 184 * OS1_S1 + 49) -
                p_over_q * *(b + 239 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 49) +
                one_over_two_q * *(b + 184 * OS1_S1 + 34);
            *(b + 184 * OS1_S1 + 71) =
                prefactor_x * *(b + 184 * OS1_S1 + 50) -
                p_over_q * *(b + 239 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 50);
            *(b + 184 * OS1_S1 + 72) =
                prefactor_z * *(b + 184 * OS1_S1 + 45) -
                p_over_q * *(b + 246 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 45);
            *(b + 184 * OS1_S1 + 73) =
                prefactor_x * *(b + 184 * OS1_S1 + 52) -
                p_over_q * *(b + 239 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 52);
            *(b + 184 * OS1_S1 + 74) =
                prefactor_x * *(b + 184 * OS1_S1 + 53) -
                p_over_q * *(b + 239 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 53);
            *(b + 184 * OS1_S1 + 75) =
                prefactor_y * *(b + 184 * OS1_S1 + 49) -
                p_over_q * *(b + 245 * OS1_S1 + 49) +
                one_over_two_q * *(b + 134 * OS1_S1 + 49);
            *(b + 184 * OS1_S1 + 76) =
                prefactor_x * *(b + 184 * OS1_S1 + 55) -
                p_over_q * *(b + 239 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 55);
            *(b + 184 * OS1_S1 + 77) =
                prefactor_y * *(b + 184 * OS1_S1 + 50) -
                p_over_q * *(b + 245 * OS1_S1 + 50) +
                one_over_two_q * *(b + 134 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 30);
            *(b + 184 * OS1_S1 + 78) =
                prefactor_z * *(b + 184 * OS1_S1 + 50) -
                p_over_q * *(b + 246 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 50);
            *(b + 184 * OS1_S1 + 79) =
                prefactor_z * *(b + 184 * OS1_S1 + 51) -
                p_over_q * *(b + 246 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 51) +
                one_over_two_q * *(b + 184 * OS1_S1 + 30);
            *(b + 184 * OS1_S1 + 80) =
                prefactor_y * *(b + 184 * OS1_S1 + 53) -
                p_over_q * *(b + 245 * OS1_S1 + 53) +
                one_over_two_q * *(b + 134 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 33);
            *(b + 184 * OS1_S1 + 81) =
                prefactor_y * *(b + 184 * OS1_S1 + 54) -
                p_over_q * *(b + 245 * OS1_S1 + 54) +
                one_over_two_q * *(b + 134 * OS1_S1 + 54) +
                one_over_two_q * *(b + 184 * OS1_S1 + 34);
            *(b + 184 * OS1_S1 + 82) =
                prefactor_y * *(b + 184 * OS1_S1 + 55) -
                p_over_q * *(b + 245 * OS1_S1 + 55) +
                one_over_two_q * *(b + 134 * OS1_S1 + 55);
            *(b + 184 * OS1_S1 + 83) =
                prefactor_z * *(b + 184 * OS1_S1 + 55) -
                p_over_q * *(b + 246 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 34);
            *(b + 185 * OS1_S1 + 56) =
                prefactor_x * *(b + 185 * OS1_S1 + 35) -
                p_over_q * *(b + 240 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 20);
            *(b + 185 * OS1_S1 + 57) = prefactor_y * *(b + 185 * OS1_S1 + 35) -
                                       p_over_q * *(b + 246 * OS1_S1 + 35);
            *(b + 185 * OS1_S1 + 58) =
                prefactor_z * *(b + 185 * OS1_S1 + 35) -
                p_over_q * *(b + 247 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 35);
            *(b + 185 * OS1_S1 + 59) =
                prefactor_y * *(b + 185 * OS1_S1 + 36) -
                p_over_q * *(b + 246 * OS1_S1 + 36) +
                one_over_two_q * *(b + 185 * OS1_S1 + 20);
            *(b + 185 * OS1_S1 + 60) = prefactor_y * *(b + 185 * OS1_S1 + 37) -
                                       p_over_q * *(b + 246 * OS1_S1 + 37);
            *(b + 185 * OS1_S1 + 61) =
                prefactor_z * *(b + 185 * OS1_S1 + 37) -
                p_over_q * *(b + 247 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 37) +
                one_over_two_q * *(b + 185 * OS1_S1 + 20);
            *(b + 185 * OS1_S1 + 62) =
                prefactor_y * *(b + 185 * OS1_S1 + 38) -
                p_over_q * *(b + 246 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 185 * OS1_S1 + 21);
            *(b + 185 * OS1_S1 + 63) =
                prefactor_z * *(b + 185 * OS1_S1 + 38) -
                p_over_q * *(b + 247 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 38);
            *(b + 185 * OS1_S1 + 64) = prefactor_y * *(b + 185 * OS1_S1 + 40) -
                                       p_over_q * *(b + 246 * OS1_S1 + 40);
            *(b + 185 * OS1_S1 + 65) =
                prefactor_x * *(b + 185 * OS1_S1 + 44) -
                p_over_q * *(b + 240 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 185 * OS1_S1 + 29);
            *(b + 185 * OS1_S1 + 66) =
                prefactor_x * *(b + 185 * OS1_S1 + 45) -
                p_over_q * *(b + 240 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 45) +
                one_over_two_q * *(b + 185 * OS1_S1 + 30);
            *(b + 185 * OS1_S1 + 67) =
                prefactor_z * *(b + 185 * OS1_S1 + 41) -
                p_over_q * *(b + 247 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 41);
            *(b + 185 * OS1_S1 + 68) =
                prefactor_y * *(b + 185 * OS1_S1 + 43) -
                p_over_q * *(b + 246 * OS1_S1 + 43) +
                one_over_two_q * *(b + 185 * OS1_S1 + 25);
            *(b + 185 * OS1_S1 + 69) = prefactor_y * *(b + 185 * OS1_S1 + 44) -
                                       p_over_q * *(b + 246 * OS1_S1 + 44);
            *(b + 185 * OS1_S1 + 70) =
                prefactor_x * *(b + 185 * OS1_S1 + 49) -
                p_over_q * *(b + 240 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 49) +
                one_over_two_q * *(b + 185 * OS1_S1 + 34);
            *(b + 185 * OS1_S1 + 71) =
                prefactor_x * *(b + 185 * OS1_S1 + 50) -
                p_over_q * *(b + 240 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 50);
            *(b + 185 * OS1_S1 + 72) =
                prefactor_x * *(b + 185 * OS1_S1 + 51) -
                p_over_q * *(b + 240 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 51);
            *(b + 185 * OS1_S1 + 73) =
                prefactor_x * *(b + 185 * OS1_S1 + 52) -
                p_over_q * *(b + 240 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 52);
            *(b + 185 * OS1_S1 + 74) =
                prefactor_x * *(b + 185 * OS1_S1 + 53) -
                p_over_q * *(b + 240 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 53);
            *(b + 185 * OS1_S1 + 75) = prefactor_y * *(b + 185 * OS1_S1 + 49) -
                                       p_over_q * *(b + 246 * OS1_S1 + 49);
            *(b + 185 * OS1_S1 + 76) =
                prefactor_x * *(b + 185 * OS1_S1 + 55) -
                p_over_q * *(b + 240 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 55);
            *(b + 185 * OS1_S1 + 77) =
                prefactor_y * *(b + 185 * OS1_S1 + 50) -
                p_over_q * *(b + 246 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 30);
            *(b + 185 * OS1_S1 + 78) =
                prefactor_z * *(b + 185 * OS1_S1 + 50) -
                p_over_q * *(b + 247 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 50);
            *(b + 185 * OS1_S1 + 79) =
                prefactor_z * *(b + 185 * OS1_S1 + 51) -
                p_over_q * *(b + 247 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 51) +
                one_over_two_q * *(b + 185 * OS1_S1 + 30);
            *(b + 185 * OS1_S1 + 80) =
                prefactor_y * *(b + 185 * OS1_S1 + 53) -
                p_over_q * *(b + 246 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 185 * OS1_S1 + 33);
            *(b + 185 * OS1_S1 + 81) =
                prefactor_y * *(b + 185 * OS1_S1 + 54) -
                p_over_q * *(b + 246 * OS1_S1 + 54) +
                one_over_two_q * *(b + 185 * OS1_S1 + 34);
            *(b + 185 * OS1_S1 + 82) = prefactor_y * *(b + 185 * OS1_S1 + 55) -
                                       p_over_q * *(b + 246 * OS1_S1 + 55);
            *(b + 185 * OS1_S1 + 83) =
                prefactor_z * *(b + 185 * OS1_S1 + 55) -
                p_over_q * *(b + 247 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 34);
            *(b + 186 * OS1_S1 + 56) =
                prefactor_x * *(b + 186 * OS1_S1 + 35) -
                p_over_q * *(b + 241 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 186 * OS1_S1 + 20);
            *(b + 186 * OS1_S1 + 57) =
                prefactor_y * *(b + 186 * OS1_S1 + 35) -
                p_over_q * *(b + 248 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 35);
            *(b + 186 * OS1_S1 + 58) = prefactor_z * *(b + 186 * OS1_S1 + 35) -
                                       p_over_q * *(b + 249 * OS1_S1 + 35);
            *(b + 186 * OS1_S1 + 59) =
                prefactor_y * *(b + 186 * OS1_S1 + 36) -
                p_over_q * *(b + 248 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 36) +
                one_over_two_q * *(b + 186 * OS1_S1 + 20);
            *(b + 186 * OS1_S1 + 60) = prefactor_z * *(b + 186 * OS1_S1 + 36) -
                                       p_over_q * *(b + 249 * OS1_S1 + 36);
            *(b + 186 * OS1_S1 + 61) =
                prefactor_z * *(b + 186 * OS1_S1 + 37) -
                p_over_q * *(b + 249 * OS1_S1 + 37) +
                one_over_two_q * *(b + 186 * OS1_S1 + 20);
            *(b + 186 * OS1_S1 + 62) =
                prefactor_x * *(b + 186 * OS1_S1 + 41) -
                p_over_q * *(b + 241 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 186 * OS1_S1 + 26);
            *(b + 186 * OS1_S1 + 63) = prefactor_z * *(b + 186 * OS1_S1 + 38) -
                                       p_over_q * *(b + 249 * OS1_S1 + 38);
            *(b + 186 * OS1_S1 + 64) =
                prefactor_y * *(b + 186 * OS1_S1 + 40) -
                p_over_q * *(b + 248 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 40);
            *(b + 186 * OS1_S1 + 65) =
                prefactor_z * *(b + 186 * OS1_S1 + 40) -
                p_over_q * *(b + 249 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 186 * OS1_S1 + 22);
            *(b + 186 * OS1_S1 + 66) =
                prefactor_x * *(b + 186 * OS1_S1 + 45) -
                p_over_q * *(b + 241 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 45) +
                one_over_two_q * *(b + 186 * OS1_S1 + 30);
            *(b + 186 * OS1_S1 + 67) = prefactor_z * *(b + 186 * OS1_S1 + 41) -
                                       p_over_q * *(b + 249 * OS1_S1 + 41);
            *(b + 186 * OS1_S1 + 68) =
                prefactor_z * *(b + 186 * OS1_S1 + 42) -
                p_over_q * *(b + 249 * OS1_S1 + 42) +
                one_over_two_q * *(b + 186 * OS1_S1 + 23);
            *(b + 186 * OS1_S1 + 69) =
                prefactor_y * *(b + 186 * OS1_S1 + 44) -
                p_over_q * *(b + 248 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 44);
            *(b + 186 * OS1_S1 + 70) =
                prefactor_x * *(b + 186 * OS1_S1 + 49) -
                p_over_q * *(b + 241 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 49) +
                one_over_two_q * *(b + 186 * OS1_S1 + 34);
            *(b + 186 * OS1_S1 + 71) =
                prefactor_x * *(b + 186 * OS1_S1 + 50) -
                p_over_q * *(b + 241 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 50);
            *(b + 186 * OS1_S1 + 72) = prefactor_z * *(b + 186 * OS1_S1 + 45) -
                                       p_over_q * *(b + 249 * OS1_S1 + 45);
            *(b + 186 * OS1_S1 + 73) =
                prefactor_x * *(b + 186 * OS1_S1 + 52) -
                p_over_q * *(b + 241 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 52);
            *(b + 186 * OS1_S1 + 74) =
                prefactor_x * *(b + 186 * OS1_S1 + 53) -
                p_over_q * *(b + 241 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 53);
            *(b + 186 * OS1_S1 + 75) =
                prefactor_x * *(b + 186 * OS1_S1 + 54) -
                p_over_q * *(b + 241 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 54);
            *(b + 186 * OS1_S1 + 76) =
                prefactor_x * *(b + 186 * OS1_S1 + 55) -
                p_over_q * *(b + 241 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 55);
            *(b + 186 * OS1_S1 + 77) =
                prefactor_y * *(b + 186 * OS1_S1 + 50) -
                p_over_q * *(b + 248 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 186 * OS1_S1 + 30);
            *(b + 186 * OS1_S1 + 78) = prefactor_z * *(b + 186 * OS1_S1 + 50) -
                                       p_over_q * *(b + 249 * OS1_S1 + 50);
            *(b + 186 * OS1_S1 + 79) =
                prefactor_z * *(b + 186 * OS1_S1 + 51) -
                p_over_q * *(b + 249 * OS1_S1 + 51) +
                one_over_two_q * *(b + 186 * OS1_S1 + 30);
            *(b + 186 * OS1_S1 + 80) =
                prefactor_z * *(b + 186 * OS1_S1 + 52) -
                p_over_q * *(b + 249 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 186 * OS1_S1 + 31);
            *(b + 186 * OS1_S1 + 81) =
                prefactor_y * *(b + 186 * OS1_S1 + 54) -
                p_over_q * *(b + 248 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 54) +
                one_over_two_q * *(b + 186 * OS1_S1 + 34);
            *(b + 186 * OS1_S1 + 82) =
                prefactor_y * *(b + 186 * OS1_S1 + 55) -
                p_over_q * *(b + 248 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 55);
            *(b + 186 * OS1_S1 + 83) =
                prefactor_z * *(b + 186 * OS1_S1 + 55) -
                p_over_q * *(b + 249 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 186 * OS1_S1 + 34);
            *(b + 187 * OS1_S1 + 56) =
                prefactor_x * *(b + 187 * OS1_S1 + 35) -
                p_over_q * *(b + 242 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 187 * OS1_S1 + 20);
            *(b + 187 * OS1_S1 + 57) =
                prefactor_y * *(b + 187 * OS1_S1 + 35) -
                p_over_q * *(b + 249 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 35);
            *(b + 187 * OS1_S1 + 58) =
                prefactor_z * *(b + 187 * OS1_S1 + 35) -
                p_over_q * *(b + 250 * OS1_S1 + 35) +
                one_over_two_q * *(b + 135 * OS1_S1 + 35);
            *(b + 187 * OS1_S1 + 59) =
                prefactor_y * *(b + 187 * OS1_S1 + 36) -
                p_over_q * *(b + 249 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 36) +
                one_over_two_q * *(b + 187 * OS1_S1 + 20);
            *(b + 187 * OS1_S1 + 60) =
                prefactor_z * *(b + 187 * OS1_S1 + 36) -
                p_over_q * *(b + 250 * OS1_S1 + 36) +
                one_over_two_q * *(b + 135 * OS1_S1 + 36);
            *(b + 187 * OS1_S1 + 61) =
                prefactor_z * *(b + 187 * OS1_S1 + 37) -
                p_over_q * *(b + 250 * OS1_S1 + 37) +
                one_over_two_q * *(b + 135 * OS1_S1 + 37) +
                one_over_two_q * *(b + 187 * OS1_S1 + 20);
            *(b + 187 * OS1_S1 + 62) =
                prefactor_x * *(b + 187 * OS1_S1 + 41) -
                p_over_q * *(b + 242 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 26);
            *(b + 187 * OS1_S1 + 63) =
                prefactor_z * *(b + 187 * OS1_S1 + 38) -
                p_over_q * *(b + 250 * OS1_S1 + 38) +
                one_over_two_q * *(b + 135 * OS1_S1 + 38);
            *(b + 187 * OS1_S1 + 64) =
                prefactor_y * *(b + 187 * OS1_S1 + 40) -
                p_over_q * *(b + 249 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 40);
            *(b + 187 * OS1_S1 + 65) =
                prefactor_z * *(b + 187 * OS1_S1 + 40) -
                p_over_q * *(b + 250 * OS1_S1 + 40) +
                one_over_two_q * *(b + 135 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 22);
            *(b + 187 * OS1_S1 + 66) =
                prefactor_x * *(b + 187 * OS1_S1 + 45) -
                p_over_q * *(b + 242 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 45) +
                one_over_two_q * *(b + 187 * OS1_S1 + 30);
            *(b + 187 * OS1_S1 + 67) =
                prefactor_z * *(b + 187 * OS1_S1 + 41) -
                p_over_q * *(b + 250 * OS1_S1 + 41) +
                one_over_two_q * *(b + 135 * OS1_S1 + 41);
            *(b + 187 * OS1_S1 + 68) =
                prefactor_z * *(b + 187 * OS1_S1 + 42) -
                p_over_q * *(b + 250 * OS1_S1 + 42) +
                one_over_two_q * *(b + 135 * OS1_S1 + 42) +
                one_over_two_q * *(b + 187 * OS1_S1 + 23);
            *(b + 187 * OS1_S1 + 69) =
                prefactor_y * *(b + 187 * OS1_S1 + 44) -
                p_over_q * *(b + 249 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 44);
            *(b + 187 * OS1_S1 + 70) =
                prefactor_x * *(b + 187 * OS1_S1 + 49) -
                p_over_q * *(b + 242 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 49) +
                one_over_two_q * *(b + 187 * OS1_S1 + 34);
            *(b + 187 * OS1_S1 + 71) =
                prefactor_x * *(b + 187 * OS1_S1 + 50) -
                p_over_q * *(b + 242 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 50);
            *(b + 187 * OS1_S1 + 72) =
                prefactor_z * *(b + 187 * OS1_S1 + 45) -
                p_over_q * *(b + 250 * OS1_S1 + 45) +
                one_over_two_q * *(b + 135 * OS1_S1 + 45);
            *(b + 187 * OS1_S1 + 73) =
                prefactor_x * *(b + 187 * OS1_S1 + 52) -
                p_over_q * *(b + 242 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 52);
            *(b + 187 * OS1_S1 + 74) =
                prefactor_x * *(b + 187 * OS1_S1 + 53) -
                p_over_q * *(b + 242 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 53);
            *(b + 187 * OS1_S1 + 75) =
                prefactor_x * *(b + 187 * OS1_S1 + 54) -
                p_over_q * *(b + 242 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 54);
            *(b + 187 * OS1_S1 + 76) =
                prefactor_x * *(b + 187 * OS1_S1 + 55) -
                p_over_q * *(b + 242 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 55);
            *(b + 187 * OS1_S1 + 77) =
                prefactor_y * *(b + 187 * OS1_S1 + 50) -
                p_over_q * *(b + 249 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 187 * OS1_S1 + 30);
            *(b + 187 * OS1_S1 + 78) =
                prefactor_z * *(b + 187 * OS1_S1 + 50) -
                p_over_q * *(b + 250 * OS1_S1 + 50) +
                one_over_two_q * *(b + 135 * OS1_S1 + 50);
            *(b + 187 * OS1_S1 + 79) =
                prefactor_z * *(b + 187 * OS1_S1 + 51) -
                p_over_q * *(b + 250 * OS1_S1 + 51) +
                one_over_two_q * *(b + 135 * OS1_S1 + 51) +
                one_over_two_q * *(b + 187 * OS1_S1 + 30);
            *(b + 187 * OS1_S1 + 80) =
                prefactor_z * *(b + 187 * OS1_S1 + 52) -
                p_over_q * *(b + 250 * OS1_S1 + 52) +
                one_over_two_q * *(b + 135 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 31);
            *(b + 187 * OS1_S1 + 81) =
                prefactor_y * *(b + 187 * OS1_S1 + 54) -
                p_over_q * *(b + 249 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 54) +
                one_over_two_q * *(b + 187 * OS1_S1 + 34);
            *(b + 187 * OS1_S1 + 82) =
                prefactor_y * *(b + 187 * OS1_S1 + 55) -
                p_over_q * *(b + 249 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 55);
            *(b + 187 * OS1_S1 + 83) =
                prefactor_z * *(b + 187 * OS1_S1 + 55) -
                p_over_q * *(b + 250 * OS1_S1 + 55) +
                one_over_two_q * *(b + 135 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 187 * OS1_S1 + 34);
            *(b + 188 * OS1_S1 + 56) =
                prefactor_x * *(b + 188 * OS1_S1 + 35) -
                p_over_q * *(b + 243 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 20);
            *(b + 188 * OS1_S1 + 57) =
                prefactor_y * *(b + 188 * OS1_S1 + 35) -
                p_over_q * *(b + 250 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 35);
            *(b + 188 * OS1_S1 + 58) =
                prefactor_z * *(b + 188 * OS1_S1 + 35) -
                p_over_q * *(b + 251 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 35);
            *(b + 188 * OS1_S1 + 59) =
                prefactor_y * *(b + 188 * OS1_S1 + 36) -
                p_over_q * *(b + 250 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 36) +
                one_over_two_q * *(b + 188 * OS1_S1 + 20);
            *(b + 188 * OS1_S1 + 60) =
                prefactor_z * *(b + 188 * OS1_S1 + 36) -
                p_over_q * *(b + 251 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 36);
            *(b + 188 * OS1_S1 + 61) =
                prefactor_z * *(b + 188 * OS1_S1 + 37) -
                p_over_q * *(b + 251 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 37) +
                one_over_two_q * *(b + 188 * OS1_S1 + 20);
            *(b + 188 * OS1_S1 + 62) =
                prefactor_x * *(b + 188 * OS1_S1 + 41) -
                p_over_q * *(b + 243 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 188 * OS1_S1 + 26);
            *(b + 188 * OS1_S1 + 63) =
                prefactor_z * *(b + 188 * OS1_S1 + 38) -
                p_over_q * *(b + 251 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 38);
            *(b + 188 * OS1_S1 + 64) =
                prefactor_y * *(b + 188 * OS1_S1 + 40) -
                p_over_q * *(b + 250 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 40);
            *(b + 188 * OS1_S1 + 65) =
                prefactor_z * *(b + 188 * OS1_S1 + 40) -
                p_over_q * *(b + 251 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 188 * OS1_S1 + 22);
            *(b + 188 * OS1_S1 + 66) =
                prefactor_x * *(b + 188 * OS1_S1 + 45) -
                p_over_q * *(b + 243 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 45) +
                one_over_two_q * *(b + 188 * OS1_S1 + 30);
            *(b + 188 * OS1_S1 + 67) =
                prefactor_z * *(b + 188 * OS1_S1 + 41) -
                p_over_q * *(b + 251 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 41);
            *(b + 188 * OS1_S1 + 68) =
                prefactor_z * *(b + 188 * OS1_S1 + 42) -
                p_over_q * *(b + 251 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 42) +
                one_over_two_q * *(b + 188 * OS1_S1 + 23);
            *(b + 188 * OS1_S1 + 69) =
                prefactor_y * *(b + 188 * OS1_S1 + 44) -
                p_over_q * *(b + 250 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 44);
            *(b + 188 * OS1_S1 + 70) =
                prefactor_x * *(b + 188 * OS1_S1 + 49) -
                p_over_q * *(b + 243 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 49) +
                one_over_two_q * *(b + 188 * OS1_S1 + 34);
            *(b + 188 * OS1_S1 + 71) =
                prefactor_x * *(b + 188 * OS1_S1 + 50) -
                p_over_q * *(b + 243 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 50);
            *(b + 188 * OS1_S1 + 72) =
                prefactor_z * *(b + 188 * OS1_S1 + 45) -
                p_over_q * *(b + 251 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 45);
            *(b + 188 * OS1_S1 + 73) =
                prefactor_x * *(b + 188 * OS1_S1 + 52) -
                p_over_q * *(b + 243 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 52);
            *(b + 188 * OS1_S1 + 74) =
                prefactor_x * *(b + 188 * OS1_S1 + 53) -
                p_over_q * *(b + 243 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 53);
            *(b + 188 * OS1_S1 + 75) =
                prefactor_x * *(b + 188 * OS1_S1 + 54) -
                p_over_q * *(b + 243 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 54);
            *(b + 188 * OS1_S1 + 76) =
                prefactor_x * *(b + 188 * OS1_S1 + 55) -
                p_over_q * *(b + 243 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 55);
            *(b + 188 * OS1_S1 + 77) =
                prefactor_y * *(b + 188 * OS1_S1 + 50) -
                p_over_q * *(b + 250 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 30);
            *(b + 188 * OS1_S1 + 78) =
                prefactor_z * *(b + 188 * OS1_S1 + 50) -
                p_over_q * *(b + 251 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 50);
            *(b + 188 * OS1_S1 + 79) =
                prefactor_z * *(b + 188 * OS1_S1 + 51) -
                p_over_q * *(b + 251 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 51) +
                one_over_two_q * *(b + 188 * OS1_S1 + 30);
            *(b + 188 * OS1_S1 + 80) =
                prefactor_z * *(b + 188 * OS1_S1 + 52) -
                p_over_q * *(b + 251 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 188 * OS1_S1 + 31);
            *(b + 188 * OS1_S1 + 81) =
                prefactor_y * *(b + 188 * OS1_S1 + 54) -
                p_over_q * *(b + 250 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 54) +
                one_over_two_q * *(b + 188 * OS1_S1 + 34);
            *(b + 188 * OS1_S1 + 82) =
                prefactor_y * *(b + 188 * OS1_S1 + 55) -
                p_over_q * *(b + 250 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 55);
            *(b + 188 * OS1_S1 + 83) =
                prefactor_z * *(b + 188 * OS1_S1 + 55) -
                p_over_q * *(b + 251 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 34);
            *(b + 189 * OS1_S1 + 56) =
                prefactor_x * *(b + 189 * OS1_S1 + 35) -
                p_over_q * *(b + 244 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 189 * OS1_S1 + 20);
            *(b + 189 * OS1_S1 + 57) =
                prefactor_y * *(b + 189 * OS1_S1 + 35) -
                p_over_q * *(b + 251 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 35);
            *(b + 189 * OS1_S1 + 58) =
                prefactor_z * *(b + 189 * OS1_S1 + 35) -
                p_over_q * *(b + 252 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 35);
            *(b + 189 * OS1_S1 + 59) =
                prefactor_y * *(b + 189 * OS1_S1 + 36) -
                p_over_q * *(b + 251 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 36) +
                one_over_two_q * *(b + 189 * OS1_S1 + 20);
            *(b + 189 * OS1_S1 + 60) =
                prefactor_z * *(b + 189 * OS1_S1 + 36) -
                p_over_q * *(b + 252 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 36);
            *(b + 189 * OS1_S1 + 61) =
                prefactor_z * *(b + 189 * OS1_S1 + 37) -
                p_over_q * *(b + 252 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 37) +
                one_over_two_q * *(b + 189 * OS1_S1 + 20);
            *(b + 189 * OS1_S1 + 62) =
                prefactor_y * *(b + 189 * OS1_S1 + 38) -
                p_over_q * *(b + 251 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 189 * OS1_S1 + 21);
            *(b + 189 * OS1_S1 + 63) =
                prefactor_z * *(b + 189 * OS1_S1 + 38) -
                p_over_q * *(b + 252 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 38);
            *(b + 189 * OS1_S1 + 64) =
                prefactor_y * *(b + 189 * OS1_S1 + 40) -
                p_over_q * *(b + 251 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 40);
            *(b + 189 * OS1_S1 + 65) =
                prefactor_z * *(b + 189 * OS1_S1 + 40) -
                p_over_q * *(b + 252 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 189 * OS1_S1 + 22);
            *(b + 189 * OS1_S1 + 66) =
                prefactor_x * *(b + 189 * OS1_S1 + 45) -
                p_over_q * *(b + 244 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 45) +
                one_over_two_q * *(b + 189 * OS1_S1 + 30);
            *(b + 189 * OS1_S1 + 67) =
                prefactor_z * *(b + 189 * OS1_S1 + 41) -
                p_over_q * *(b + 252 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 41);
            *(b + 189 * OS1_S1 + 68) =
                prefactor_z * *(b + 189 * OS1_S1 + 42) -
                p_over_q * *(b + 252 * OS1_S1 + 42) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 42) +
                one_over_two_q * *(b + 189 * OS1_S1 + 23);
            *(b + 189 * OS1_S1 + 69) =
                prefactor_y * *(b + 189 * OS1_S1 + 44) -
                p_over_q * *(b + 251 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 44);
            *(b + 189 * OS1_S1 + 70) =
                prefactor_x * *(b + 189 * OS1_S1 + 49) -
                p_over_q * *(b + 244 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 49) +
                one_over_two_q * *(b + 189 * OS1_S1 + 34);
            *(b + 189 * OS1_S1 + 71) =
                prefactor_x * *(b + 189 * OS1_S1 + 50) -
                p_over_q * *(b + 244 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 50);
            *(b + 189 * OS1_S1 + 72) =
                prefactor_z * *(b + 189 * OS1_S1 + 45) -
                p_over_q * *(b + 252 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 45);
            *(b + 189 * OS1_S1 + 73) =
                prefactor_x * *(b + 189 * OS1_S1 + 52) -
                p_over_q * *(b + 244 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 52);
            *(b + 189 * OS1_S1 + 74) =
                prefactor_x * *(b + 189 * OS1_S1 + 53) -
                p_over_q * *(b + 244 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 53);
            *(b + 189 * OS1_S1 + 75) =
                prefactor_y * *(b + 189 * OS1_S1 + 49) -
                p_over_q * *(b + 251 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 49);
            *(b + 189 * OS1_S1 + 76) =
                prefactor_x * *(b + 189 * OS1_S1 + 55) -
                p_over_q * *(b + 244 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 55);
            *(b + 189 * OS1_S1 + 77) =
                prefactor_y * *(b + 189 * OS1_S1 + 50) -
                p_over_q * *(b + 251 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 189 * OS1_S1 + 30);
            *(b + 189 * OS1_S1 + 78) =
                prefactor_z * *(b + 189 * OS1_S1 + 50) -
                p_over_q * *(b + 252 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 50);
            *(b + 189 * OS1_S1 + 79) =
                prefactor_z * *(b + 189 * OS1_S1 + 51) -
                p_over_q * *(b + 252 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 51) +
                one_over_two_q * *(b + 189 * OS1_S1 + 30);
            *(b + 189 * OS1_S1 + 80) =
                prefactor_z * *(b + 189 * OS1_S1 + 52) -
                p_over_q * *(b + 252 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 189 * OS1_S1 + 31);
            *(b + 189 * OS1_S1 + 81) =
                prefactor_y * *(b + 189 * OS1_S1 + 54) -
                p_over_q * *(b + 251 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 54) +
                one_over_two_q * *(b + 189 * OS1_S1 + 34);
            *(b + 189 * OS1_S1 + 82) =
                prefactor_y * *(b + 189 * OS1_S1 + 55) -
                p_over_q * *(b + 251 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 55);
            *(b + 189 * OS1_S1 + 83) =
                prefactor_z * *(b + 189 * OS1_S1 + 55) -
                p_over_q * *(b + 252 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 189 * OS1_S1 + 34);
            *(b + 190 * OS1_S1 + 56) =
                prefactor_x * *(b + 190 * OS1_S1 + 35) -
                p_over_q * *(b + 245 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 20);
            *(b + 190 * OS1_S1 + 57) =
                prefactor_y * *(b + 190 * OS1_S1 + 35) -
                p_over_q * *(b + 252 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 35);
            *(b + 190 * OS1_S1 + 58) =
                prefactor_z * *(b + 190 * OS1_S1 + 35) -
                p_over_q * *(b + 253 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 35);
            *(b + 190 * OS1_S1 + 59) =
                prefactor_y * *(b + 190 * OS1_S1 + 36) -
                p_over_q * *(b + 252 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 36) +
                one_over_two_q * *(b + 190 * OS1_S1 + 20);
            *(b + 190 * OS1_S1 + 60) =
                prefactor_y * *(b + 190 * OS1_S1 + 37) -
                p_over_q * *(b + 252 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 37);
            *(b + 190 * OS1_S1 + 61) =
                prefactor_z * *(b + 190 * OS1_S1 + 37) -
                p_over_q * *(b + 253 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 37) +
                one_over_two_q * *(b + 190 * OS1_S1 + 20);
            *(b + 190 * OS1_S1 + 62) =
                prefactor_y * *(b + 190 * OS1_S1 + 38) -
                p_over_q * *(b + 252 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 190 * OS1_S1 + 21);
            *(b + 190 * OS1_S1 + 63) =
                prefactor_z * *(b + 190 * OS1_S1 + 38) -
                p_over_q * *(b + 253 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 38);
            *(b + 190 * OS1_S1 + 64) =
                prefactor_y * *(b + 190 * OS1_S1 + 40) -
                p_over_q * *(b + 252 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 40);
            *(b + 190 * OS1_S1 + 65) =
                prefactor_x * *(b + 190 * OS1_S1 + 44) -
                p_over_q * *(b + 245 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 190 * OS1_S1 + 29);
            *(b + 190 * OS1_S1 + 66) =
                prefactor_x * *(b + 190 * OS1_S1 + 45) -
                p_over_q * *(b + 245 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 45) +
                one_over_two_q * *(b + 190 * OS1_S1 + 30);
            *(b + 190 * OS1_S1 + 67) =
                prefactor_z * *(b + 190 * OS1_S1 + 41) -
                p_over_q * *(b + 253 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 41);
            *(b + 190 * OS1_S1 + 68) =
                prefactor_y * *(b + 190 * OS1_S1 + 43) -
                p_over_q * *(b + 252 * OS1_S1 + 43) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 43) +
                one_over_two_q * *(b + 190 * OS1_S1 + 25);
            *(b + 190 * OS1_S1 + 69) =
                prefactor_y * *(b + 190 * OS1_S1 + 44) -
                p_over_q * *(b + 252 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 44);
            *(b + 190 * OS1_S1 + 70) =
                prefactor_x * *(b + 190 * OS1_S1 + 49) -
                p_over_q * *(b + 245 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 49) +
                one_over_two_q * *(b + 190 * OS1_S1 + 34);
            *(b + 190 * OS1_S1 + 71) =
                prefactor_x * *(b + 190 * OS1_S1 + 50) -
                p_over_q * *(b + 245 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 50);
            *(b + 190 * OS1_S1 + 72) =
                prefactor_x * *(b + 190 * OS1_S1 + 51) -
                p_over_q * *(b + 245 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 51);
            *(b + 190 * OS1_S1 + 73) =
                prefactor_x * *(b + 190 * OS1_S1 + 52) -
                p_over_q * *(b + 245 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 52);
            *(b + 190 * OS1_S1 + 74) =
                prefactor_x * *(b + 190 * OS1_S1 + 53) -
                p_over_q * *(b + 245 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 53);
            *(b + 190 * OS1_S1 + 75) =
                prefactor_y * *(b + 190 * OS1_S1 + 49) -
                p_over_q * *(b + 252 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 49);
            *(b + 190 * OS1_S1 + 76) =
                prefactor_x * *(b + 190 * OS1_S1 + 55) -
                p_over_q * *(b + 245 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 55);
            *(b + 190 * OS1_S1 + 77) =
                prefactor_y * *(b + 190 * OS1_S1 + 50) -
                p_over_q * *(b + 252 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 30);
            *(b + 190 * OS1_S1 + 78) =
                prefactor_z * *(b + 190 * OS1_S1 + 50) -
                p_over_q * *(b + 253 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 50);
            *(b + 190 * OS1_S1 + 79) =
                prefactor_z * *(b + 190 * OS1_S1 + 51) -
                p_over_q * *(b + 253 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 51) +
                one_over_two_q * *(b + 190 * OS1_S1 + 30);
            *(b + 190 * OS1_S1 + 80) =
                prefactor_y * *(b + 190 * OS1_S1 + 53) -
                p_over_q * *(b + 252 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 190 * OS1_S1 + 33);
            *(b + 190 * OS1_S1 + 81) =
                prefactor_y * *(b + 190 * OS1_S1 + 54) -
                p_over_q * *(b + 252 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 54) +
                one_over_two_q * *(b + 190 * OS1_S1 + 34);
            *(b + 190 * OS1_S1 + 82) =
                prefactor_y * *(b + 190 * OS1_S1 + 55) -
                p_over_q * *(b + 252 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 55);
            *(b + 190 * OS1_S1 + 83) =
                prefactor_z * *(b + 190 * OS1_S1 + 55) -
                p_over_q * *(b + 253 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 34);
            *(b + 191 * OS1_S1 + 56) =
                prefactor_x * *(b + 191 * OS1_S1 + 35) -
                p_over_q * *(b + 246 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 191 * OS1_S1 + 20);
            *(b + 191 * OS1_S1 + 57) =
                prefactor_y * *(b + 191 * OS1_S1 + 35) -
                p_over_q * *(b + 253 * OS1_S1 + 35) +
                one_over_two_q * *(b + 140 * OS1_S1 + 35);
            *(b + 191 * OS1_S1 + 58) =
                prefactor_z * *(b + 191 * OS1_S1 + 35) -
                p_over_q * *(b + 254 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 35);
            *(b + 191 * OS1_S1 + 59) =
                prefactor_y * *(b + 191 * OS1_S1 + 36) -
                p_over_q * *(b + 253 * OS1_S1 + 36) +
                one_over_two_q * *(b + 140 * OS1_S1 + 36) +
                one_over_two_q * *(b + 191 * OS1_S1 + 20);
            *(b + 191 * OS1_S1 + 60) =
                prefactor_y * *(b + 191 * OS1_S1 + 37) -
                p_over_q * *(b + 253 * OS1_S1 + 37) +
                one_over_two_q * *(b + 140 * OS1_S1 + 37);
            *(b + 191 * OS1_S1 + 61) =
                prefactor_z * *(b + 191 * OS1_S1 + 37) -
                p_over_q * *(b + 254 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 37) +
                one_over_two_q * *(b + 191 * OS1_S1 + 20);
            *(b + 191 * OS1_S1 + 62) =
                prefactor_y * *(b + 191 * OS1_S1 + 38) -
                p_over_q * *(b + 253 * OS1_S1 + 38) +
                one_over_two_q * *(b + 140 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 21);
            *(b + 191 * OS1_S1 + 63) =
                prefactor_z * *(b + 191 * OS1_S1 + 38) -
                p_over_q * *(b + 254 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 38);
            *(b + 191 * OS1_S1 + 64) =
                prefactor_y * *(b + 191 * OS1_S1 + 40) -
                p_over_q * *(b + 253 * OS1_S1 + 40) +
                one_over_two_q * *(b + 140 * OS1_S1 + 40);
            *(b + 191 * OS1_S1 + 65) =
                prefactor_x * *(b + 191 * OS1_S1 + 44) -
                p_over_q * *(b + 246 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 29);
            *(b + 191 * OS1_S1 + 66) =
                prefactor_x * *(b + 191 * OS1_S1 + 45) -
                p_over_q * *(b + 246 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 45) +
                one_over_two_q * *(b + 191 * OS1_S1 + 30);
            *(b + 191 * OS1_S1 + 67) =
                prefactor_z * *(b + 191 * OS1_S1 + 41) -
                p_over_q * *(b + 254 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 41);
            *(b + 191 * OS1_S1 + 68) =
                prefactor_y * *(b + 191 * OS1_S1 + 43) -
                p_over_q * *(b + 253 * OS1_S1 + 43) +
                one_over_two_q * *(b + 140 * OS1_S1 + 43) +
                one_over_two_q * *(b + 191 * OS1_S1 + 25);
            *(b + 191 * OS1_S1 + 69) =
                prefactor_y * *(b + 191 * OS1_S1 + 44) -
                p_over_q * *(b + 253 * OS1_S1 + 44) +
                one_over_two_q * *(b + 140 * OS1_S1 + 44);
            *(b + 191 * OS1_S1 + 70) =
                prefactor_x * *(b + 191 * OS1_S1 + 49) -
                p_over_q * *(b + 246 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 49) +
                one_over_two_q * *(b + 191 * OS1_S1 + 34);
            *(b + 191 * OS1_S1 + 71) =
                prefactor_x * *(b + 191 * OS1_S1 + 50) -
                p_over_q * *(b + 246 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 50);
            *(b + 191 * OS1_S1 + 72) =
                prefactor_x * *(b + 191 * OS1_S1 + 51) -
                p_over_q * *(b + 246 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 51);
            *(b + 191 * OS1_S1 + 73) =
                prefactor_x * *(b + 191 * OS1_S1 + 52) -
                p_over_q * *(b + 246 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 52);
            *(b + 191 * OS1_S1 + 74) =
                prefactor_x * *(b + 191 * OS1_S1 + 53) -
                p_over_q * *(b + 246 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 53);
            *(b + 191 * OS1_S1 + 75) =
                prefactor_y * *(b + 191 * OS1_S1 + 49) -
                p_over_q * *(b + 253 * OS1_S1 + 49) +
                one_over_two_q * *(b + 140 * OS1_S1 + 49);
            *(b + 191 * OS1_S1 + 76) =
                prefactor_x * *(b + 191 * OS1_S1 + 55) -
                p_over_q * *(b + 246 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 55);
            *(b + 191 * OS1_S1 + 77) =
                prefactor_y * *(b + 191 * OS1_S1 + 50) -
                p_over_q * *(b + 253 * OS1_S1 + 50) +
                one_over_two_q * *(b + 140 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 191 * OS1_S1 + 30);
            *(b + 191 * OS1_S1 + 78) =
                prefactor_z * *(b + 191 * OS1_S1 + 50) -
                p_over_q * *(b + 254 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 50);
            *(b + 191 * OS1_S1 + 79) =
                prefactor_z * *(b + 191 * OS1_S1 + 51) -
                p_over_q * *(b + 254 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 51) +
                one_over_two_q * *(b + 191 * OS1_S1 + 30);
            *(b + 191 * OS1_S1 + 80) =
                prefactor_y * *(b + 191 * OS1_S1 + 53) -
                p_over_q * *(b + 253 * OS1_S1 + 53) +
                one_over_two_q * *(b + 140 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 33);
            *(b + 191 * OS1_S1 + 81) =
                prefactor_y * *(b + 191 * OS1_S1 + 54) -
                p_over_q * *(b + 253 * OS1_S1 + 54) +
                one_over_two_q * *(b + 140 * OS1_S1 + 54) +
                one_over_two_q * *(b + 191 * OS1_S1 + 34);
            *(b + 191 * OS1_S1 + 82) =
                prefactor_y * *(b + 191 * OS1_S1 + 55) -
                p_over_q * *(b + 253 * OS1_S1 + 55) +
                one_over_two_q * *(b + 140 * OS1_S1 + 55);
            *(b + 191 * OS1_S1 + 83) =
                prefactor_z * *(b + 191 * OS1_S1 + 55) -
                p_over_q * *(b + 254 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 191 * OS1_S1 + 34);
            *(b + 192 * OS1_S1 + 56) =
                prefactor_x * *(b + 192 * OS1_S1 + 35) -
                p_over_q * *(b + 247 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 192 * OS1_S1 + 20);
            *(b + 192 * OS1_S1 + 57) = prefactor_y * *(b + 192 * OS1_S1 + 35) -
                                       p_over_q * *(b + 254 * OS1_S1 + 35);
            *(b + 192 * OS1_S1 + 58) =
                prefactor_z * *(b + 192 * OS1_S1 + 35) -
                p_over_q * *(b + 255 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 35);
            *(b + 192 * OS1_S1 + 59) =
                prefactor_y * *(b + 192 * OS1_S1 + 36) -
                p_over_q * *(b + 254 * OS1_S1 + 36) +
                one_over_two_q * *(b + 192 * OS1_S1 + 20);
            *(b + 192 * OS1_S1 + 60) = prefactor_y * *(b + 192 * OS1_S1 + 37) -
                                       p_over_q * *(b + 254 * OS1_S1 + 37);
            *(b + 192 * OS1_S1 + 61) =
                prefactor_z * *(b + 192 * OS1_S1 + 37) -
                p_over_q * *(b + 255 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 37) +
                one_over_two_q * *(b + 192 * OS1_S1 + 20);
            *(b + 192 * OS1_S1 + 62) =
                prefactor_y * *(b + 192 * OS1_S1 + 38) -
                p_over_q * *(b + 254 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 192 * OS1_S1 + 21);
            *(b + 192 * OS1_S1 + 63) =
                prefactor_z * *(b + 192 * OS1_S1 + 38) -
                p_over_q * *(b + 255 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 38);
            *(b + 192 * OS1_S1 + 64) = prefactor_y * *(b + 192 * OS1_S1 + 40) -
                                       p_over_q * *(b + 254 * OS1_S1 + 40);
            *(b + 192 * OS1_S1 + 65) =
                prefactor_x * *(b + 192 * OS1_S1 + 44) -
                p_over_q * *(b + 247 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 192 * OS1_S1 + 29);
            *(b + 192 * OS1_S1 + 66) =
                prefactor_x * *(b + 192 * OS1_S1 + 45) -
                p_over_q * *(b + 247 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 45) +
                one_over_two_q * *(b + 192 * OS1_S1 + 30);
            *(b + 192 * OS1_S1 + 67) =
                prefactor_z * *(b + 192 * OS1_S1 + 41) -
                p_over_q * *(b + 255 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 41);
            *(b + 192 * OS1_S1 + 68) =
                prefactor_y * *(b + 192 * OS1_S1 + 43) -
                p_over_q * *(b + 254 * OS1_S1 + 43) +
                one_over_two_q * *(b + 192 * OS1_S1 + 25);
            *(b + 192 * OS1_S1 + 69) = prefactor_y * *(b + 192 * OS1_S1 + 44) -
                                       p_over_q * *(b + 254 * OS1_S1 + 44);
            *(b + 192 * OS1_S1 + 70) =
                prefactor_x * *(b + 192 * OS1_S1 + 49) -
                p_over_q * *(b + 247 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 49) +
                one_over_two_q * *(b + 192 * OS1_S1 + 34);
            *(b + 192 * OS1_S1 + 71) =
                prefactor_x * *(b + 192 * OS1_S1 + 50) -
                p_over_q * *(b + 247 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 50);
            *(b + 192 * OS1_S1 + 72) =
                prefactor_x * *(b + 192 * OS1_S1 + 51) -
                p_over_q * *(b + 247 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 51);
            *(b + 192 * OS1_S1 + 73) =
                prefactor_x * *(b + 192 * OS1_S1 + 52) -
                p_over_q * *(b + 247 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 52);
            *(b + 192 * OS1_S1 + 74) =
                prefactor_x * *(b + 192 * OS1_S1 + 53) -
                p_over_q * *(b + 247 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 53);
            *(b + 192 * OS1_S1 + 75) = prefactor_y * *(b + 192 * OS1_S1 + 49) -
                                       p_over_q * *(b + 254 * OS1_S1 + 49);
            *(b + 192 * OS1_S1 + 76) =
                prefactor_x * *(b + 192 * OS1_S1 + 55) -
                p_over_q * *(b + 247 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 55);
            *(b + 192 * OS1_S1 + 77) =
                prefactor_y * *(b + 192 * OS1_S1 + 50) -
                p_over_q * *(b + 254 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 192 * OS1_S1 + 30);
            *(b + 192 * OS1_S1 + 78) =
                prefactor_z * *(b + 192 * OS1_S1 + 50) -
                p_over_q * *(b + 255 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 50);
            *(b + 192 * OS1_S1 + 79) =
                prefactor_z * *(b + 192 * OS1_S1 + 51) -
                p_over_q * *(b + 255 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 51) +
                one_over_two_q * *(b + 192 * OS1_S1 + 30);
            *(b + 192 * OS1_S1 + 80) =
                prefactor_y * *(b + 192 * OS1_S1 + 53) -
                p_over_q * *(b + 254 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 192 * OS1_S1 + 33);
            *(b + 192 * OS1_S1 + 81) =
                prefactor_y * *(b + 192 * OS1_S1 + 54) -
                p_over_q * *(b + 254 * OS1_S1 + 54) +
                one_over_two_q * *(b + 192 * OS1_S1 + 34);
            *(b + 192 * OS1_S1 + 82) = prefactor_y * *(b + 192 * OS1_S1 + 55) -
                                       p_over_q * *(b + 254 * OS1_S1 + 55);
            *(b + 192 * OS1_S1 + 83) =
                prefactor_z * *(b + 192 * OS1_S1 + 55) -
                p_over_q * *(b + 255 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 192 * OS1_S1 + 34);
            *(b + 193 * OS1_S1 + 56) =
                prefactor_x * *(b + 193 * OS1_S1 + 35) -
                p_over_q * *(b + 248 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 193 * OS1_S1 + 20);
            *(b + 193 * OS1_S1 + 57) =
                prefactor_y * *(b + 193 * OS1_S1 + 35) -
                p_over_q * *(b + 256 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 35);
            *(b + 193 * OS1_S1 + 58) = prefactor_z * *(b + 193 * OS1_S1 + 35) -
                                       p_over_q * *(b + 257 * OS1_S1 + 35);
            *(b + 193 * OS1_S1 + 59) =
                prefactor_y * *(b + 193 * OS1_S1 + 36) -
                p_over_q * *(b + 256 * OS1_S1 + 36) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 36) +
                one_over_two_q * *(b + 193 * OS1_S1 + 20);
            *(b + 193 * OS1_S1 + 60) = prefactor_z * *(b + 193 * OS1_S1 + 36) -
                                       p_over_q * *(b + 257 * OS1_S1 + 36);
            *(b + 193 * OS1_S1 + 61) =
                prefactor_z * *(b + 193 * OS1_S1 + 37) -
                p_over_q * *(b + 257 * OS1_S1 + 37) +
                one_over_two_q * *(b + 193 * OS1_S1 + 20);
            *(b + 193 * OS1_S1 + 62) =
                prefactor_x * *(b + 193 * OS1_S1 + 41) -
                p_over_q * *(b + 248 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 193 * OS1_S1 + 26);
            *(b + 193 * OS1_S1 + 63) = prefactor_z * *(b + 193 * OS1_S1 + 38) -
                                       p_over_q * *(b + 257 * OS1_S1 + 38);
            *(b + 193 * OS1_S1 + 64) =
                prefactor_y * *(b + 193 * OS1_S1 + 40) -
                p_over_q * *(b + 256 * OS1_S1 + 40) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 40);
            *(b + 193 * OS1_S1 + 65) =
                prefactor_z * *(b + 193 * OS1_S1 + 40) -
                p_over_q * *(b + 257 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 193 * OS1_S1 + 22);
            *(b + 193 * OS1_S1 + 66) =
                prefactor_x * *(b + 193 * OS1_S1 + 45) -
                p_over_q * *(b + 248 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 45) +
                one_over_two_q * *(b + 193 * OS1_S1 + 30);
            *(b + 193 * OS1_S1 + 67) = prefactor_z * *(b + 193 * OS1_S1 + 41) -
                                       p_over_q * *(b + 257 * OS1_S1 + 41);
            *(b + 193 * OS1_S1 + 68) =
                prefactor_z * *(b + 193 * OS1_S1 + 42) -
                p_over_q * *(b + 257 * OS1_S1 + 42) +
                one_over_two_q * *(b + 193 * OS1_S1 + 23);
            *(b + 193 * OS1_S1 + 69) =
                prefactor_y * *(b + 193 * OS1_S1 + 44) -
                p_over_q * *(b + 256 * OS1_S1 + 44) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 44);
            *(b + 193 * OS1_S1 + 70) =
                prefactor_x * *(b + 193 * OS1_S1 + 49) -
                p_over_q * *(b + 248 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 49) +
                one_over_two_q * *(b + 193 * OS1_S1 + 34);
            *(b + 193 * OS1_S1 + 71) =
                prefactor_x * *(b + 193 * OS1_S1 + 50) -
                p_over_q * *(b + 248 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 50);
            *(b + 193 * OS1_S1 + 72) = prefactor_z * *(b + 193 * OS1_S1 + 45) -
                                       p_over_q * *(b + 257 * OS1_S1 + 45);
            *(b + 193 * OS1_S1 + 73) =
                prefactor_x * *(b + 193 * OS1_S1 + 52) -
                p_over_q * *(b + 248 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 52);
            *(b + 193 * OS1_S1 + 74) =
                prefactor_x * *(b + 193 * OS1_S1 + 53) -
                p_over_q * *(b + 248 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 53);
            *(b + 193 * OS1_S1 + 75) =
                prefactor_x * *(b + 193 * OS1_S1 + 54) -
                p_over_q * *(b + 248 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 54);
            *(b + 193 * OS1_S1 + 76) =
                prefactor_x * *(b + 193 * OS1_S1 + 55) -
                p_over_q * *(b + 248 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 55);
            *(b + 193 * OS1_S1 + 77) =
                prefactor_y * *(b + 193 * OS1_S1 + 50) -
                p_over_q * *(b + 256 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 193 * OS1_S1 + 30);
            *(b + 193 * OS1_S1 + 78) = prefactor_z * *(b + 193 * OS1_S1 + 50) -
                                       p_over_q * *(b + 257 * OS1_S1 + 50);
            *(b + 193 * OS1_S1 + 79) =
                prefactor_z * *(b + 193 * OS1_S1 + 51) -
                p_over_q * *(b + 257 * OS1_S1 + 51) +
                one_over_two_q * *(b + 193 * OS1_S1 + 30);
            *(b + 193 * OS1_S1 + 80) =
                prefactor_z * *(b + 193 * OS1_S1 + 52) -
                p_over_q * *(b + 257 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 193 * OS1_S1 + 31);
            *(b + 193 * OS1_S1 + 81) =
                prefactor_y * *(b + 193 * OS1_S1 + 54) -
                p_over_q * *(b + 256 * OS1_S1 + 54) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 54) +
                one_over_two_q * *(b + 193 * OS1_S1 + 34);
            *(b + 193 * OS1_S1 + 82) =
                prefactor_y * *(b + 193 * OS1_S1 + 55) -
                p_over_q * *(b + 256 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 55);
            *(b + 193 * OS1_S1 + 83) =
                prefactor_z * *(b + 193 * OS1_S1 + 55) -
                p_over_q * *(b + 257 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 193 * OS1_S1 + 34);
            *(b + 194 * OS1_S1 + 56) =
                prefactor_x * *(b + 194 * OS1_S1 + 35) -
                p_over_q * *(b + 249 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 194 * OS1_S1 + 20);
            *(b + 194 * OS1_S1 + 57) =
                prefactor_y * *(b + 194 * OS1_S1 + 35) -
                p_over_q * *(b + 257 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 35);
            *(b + 194 * OS1_S1 + 58) =
                prefactor_z * *(b + 194 * OS1_S1 + 35) -
                p_over_q * *(b + 258 * OS1_S1 + 35) +
                one_over_two_q * *(b + 141 * OS1_S1 + 35);
            *(b + 194 * OS1_S1 + 59) =
                prefactor_y * *(b + 194 * OS1_S1 + 36) -
                p_over_q * *(b + 257 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 36) +
                one_over_two_q * *(b + 194 * OS1_S1 + 20);
            *(b + 194 * OS1_S1 + 60) =
                prefactor_z * *(b + 194 * OS1_S1 + 36) -
                p_over_q * *(b + 258 * OS1_S1 + 36) +
                one_over_two_q * *(b + 141 * OS1_S1 + 36);
            *(b + 194 * OS1_S1 + 61) =
                prefactor_z * *(b + 194 * OS1_S1 + 37) -
                p_over_q * *(b + 258 * OS1_S1 + 37) +
                one_over_two_q * *(b + 141 * OS1_S1 + 37) +
                one_over_two_q * *(b + 194 * OS1_S1 + 20);
            *(b + 194 * OS1_S1 + 62) =
                prefactor_x * *(b + 194 * OS1_S1 + 41) -
                p_over_q * *(b + 249 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 26);
            *(b + 194 * OS1_S1 + 63) =
                prefactor_z * *(b + 194 * OS1_S1 + 38) -
                p_over_q * *(b + 258 * OS1_S1 + 38) +
                one_over_two_q * *(b + 141 * OS1_S1 + 38);
            *(b + 194 * OS1_S1 + 64) =
                prefactor_y * *(b + 194 * OS1_S1 + 40) -
                p_over_q * *(b + 257 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 40);
            *(b + 194 * OS1_S1 + 65) =
                prefactor_z * *(b + 194 * OS1_S1 + 40) -
                p_over_q * *(b + 258 * OS1_S1 + 40) +
                one_over_two_q * *(b + 141 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 22);
            *(b + 194 * OS1_S1 + 66) =
                prefactor_x * *(b + 194 * OS1_S1 + 45) -
                p_over_q * *(b + 249 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 45) +
                one_over_two_q * *(b + 194 * OS1_S1 + 30);
            *(b + 194 * OS1_S1 + 67) =
                prefactor_z * *(b + 194 * OS1_S1 + 41) -
                p_over_q * *(b + 258 * OS1_S1 + 41) +
                one_over_two_q * *(b + 141 * OS1_S1 + 41);
            *(b + 194 * OS1_S1 + 68) =
                prefactor_z * *(b + 194 * OS1_S1 + 42) -
                p_over_q * *(b + 258 * OS1_S1 + 42) +
                one_over_two_q * *(b + 141 * OS1_S1 + 42) +
                one_over_two_q * *(b + 194 * OS1_S1 + 23);
            *(b + 194 * OS1_S1 + 69) =
                prefactor_y * *(b + 194 * OS1_S1 + 44) -
                p_over_q * *(b + 257 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 44);
            *(b + 194 * OS1_S1 + 70) =
                prefactor_x * *(b + 194 * OS1_S1 + 49) -
                p_over_q * *(b + 249 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 49) +
                one_over_two_q * *(b + 194 * OS1_S1 + 34);
            *(b + 194 * OS1_S1 + 71) =
                prefactor_x * *(b + 194 * OS1_S1 + 50) -
                p_over_q * *(b + 249 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 50);
            *(b + 194 * OS1_S1 + 72) =
                prefactor_z * *(b + 194 * OS1_S1 + 45) -
                p_over_q * *(b + 258 * OS1_S1 + 45) +
                one_over_two_q * *(b + 141 * OS1_S1 + 45);
            *(b + 194 * OS1_S1 + 73) =
                prefactor_x * *(b + 194 * OS1_S1 + 52) -
                p_over_q * *(b + 249 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 52);
            *(b + 194 * OS1_S1 + 74) =
                prefactor_x * *(b + 194 * OS1_S1 + 53) -
                p_over_q * *(b + 249 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 53);
            *(b + 194 * OS1_S1 + 75) =
                prefactor_x * *(b + 194 * OS1_S1 + 54) -
                p_over_q * *(b + 249 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 54);
            *(b + 194 * OS1_S1 + 76) =
                prefactor_x * *(b + 194 * OS1_S1 + 55) -
                p_over_q * *(b + 249 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 55);
            *(b + 194 * OS1_S1 + 77) =
                prefactor_y * *(b + 194 * OS1_S1 + 50) -
                p_over_q * *(b + 257 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 194 * OS1_S1 + 30);
            *(b + 194 * OS1_S1 + 78) =
                prefactor_z * *(b + 194 * OS1_S1 + 50) -
                p_over_q * *(b + 258 * OS1_S1 + 50) +
                one_over_two_q * *(b + 141 * OS1_S1 + 50);
            *(b + 194 * OS1_S1 + 79) =
                prefactor_z * *(b + 194 * OS1_S1 + 51) -
                p_over_q * *(b + 258 * OS1_S1 + 51) +
                one_over_two_q * *(b + 141 * OS1_S1 + 51) +
                one_over_two_q * *(b + 194 * OS1_S1 + 30);
            *(b + 194 * OS1_S1 + 80) =
                prefactor_z * *(b + 194 * OS1_S1 + 52) -
                p_over_q * *(b + 258 * OS1_S1 + 52) +
                one_over_two_q * *(b + 141 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 31);
            *(b + 194 * OS1_S1 + 81) =
                prefactor_y * *(b + 194 * OS1_S1 + 54) -
                p_over_q * *(b + 257 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 54) +
                one_over_two_q * *(b + 194 * OS1_S1 + 34);
            *(b + 194 * OS1_S1 + 82) =
                prefactor_y * *(b + 194 * OS1_S1 + 55) -
                p_over_q * *(b + 257 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 55);
            *(b + 194 * OS1_S1 + 83) =
                prefactor_z * *(b + 194 * OS1_S1 + 55) -
                p_over_q * *(b + 258 * OS1_S1 + 55) +
                one_over_two_q * *(b + 141 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 194 * OS1_S1 + 34);
            *(b + 195 * OS1_S1 + 56) =
                prefactor_x * *(b + 195 * OS1_S1 + 35) -
                p_over_q * *(b + 250 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 195 * OS1_S1 + 20);
            *(b + 195 * OS1_S1 + 57) =
                prefactor_y * *(b + 195 * OS1_S1 + 35) -
                p_over_q * *(b + 258 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 35);
            *(b + 195 * OS1_S1 + 58) =
                prefactor_z * *(b + 195 * OS1_S1 + 35) -
                p_over_q * *(b + 259 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 35);
            *(b + 195 * OS1_S1 + 59) =
                prefactor_y * *(b + 195 * OS1_S1 + 36) -
                p_over_q * *(b + 258 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 36) +
                one_over_two_q * *(b + 195 * OS1_S1 + 20);
            *(b + 195 * OS1_S1 + 60) =
                prefactor_z * *(b + 195 * OS1_S1 + 36) -
                p_over_q * *(b + 259 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 36);
            *(b + 195 * OS1_S1 + 61) =
                prefactor_z * *(b + 195 * OS1_S1 + 37) -
                p_over_q * *(b + 259 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 37) +
                one_over_two_q * *(b + 195 * OS1_S1 + 20);
            *(b + 195 * OS1_S1 + 62) =
                prefactor_x * *(b + 195 * OS1_S1 + 41) -
                p_over_q * *(b + 250 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 195 * OS1_S1 + 26);
            *(b + 195 * OS1_S1 + 63) =
                prefactor_z * *(b + 195 * OS1_S1 + 38) -
                p_over_q * *(b + 259 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 38);
            *(b + 195 * OS1_S1 + 64) =
                prefactor_y * *(b + 195 * OS1_S1 + 40) -
                p_over_q * *(b + 258 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 40);
            *(b + 195 * OS1_S1 + 65) =
                prefactor_z * *(b + 195 * OS1_S1 + 40) -
                p_over_q * *(b + 259 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 195 * OS1_S1 + 22);
            *(b + 195 * OS1_S1 + 66) =
                prefactor_x * *(b + 195 * OS1_S1 + 45) -
                p_over_q * *(b + 250 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 45) +
                one_over_two_q * *(b + 195 * OS1_S1 + 30);
            *(b + 195 * OS1_S1 + 67) =
                prefactor_z * *(b + 195 * OS1_S1 + 41) -
                p_over_q * *(b + 259 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 41);
            *(b + 195 * OS1_S1 + 68) =
                prefactor_z * *(b + 195 * OS1_S1 + 42) -
                p_over_q * *(b + 259 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 42) +
                one_over_two_q * *(b + 195 * OS1_S1 + 23);
            *(b + 195 * OS1_S1 + 69) =
                prefactor_y * *(b + 195 * OS1_S1 + 44) -
                p_over_q * *(b + 258 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 44);
            *(b + 195 * OS1_S1 + 70) =
                prefactor_x * *(b + 195 * OS1_S1 + 49) -
                p_over_q * *(b + 250 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 49) +
                one_over_two_q * *(b + 195 * OS1_S1 + 34);
            *(b + 195 * OS1_S1 + 71) =
                prefactor_x * *(b + 195 * OS1_S1 + 50) -
                p_over_q * *(b + 250 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 50);
            *(b + 195 * OS1_S1 + 72) =
                prefactor_z * *(b + 195 * OS1_S1 + 45) -
                p_over_q * *(b + 259 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 45);
            *(b + 195 * OS1_S1 + 73) =
                prefactor_x * *(b + 195 * OS1_S1 + 52) -
                p_over_q * *(b + 250 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 52);
            *(b + 195 * OS1_S1 + 74) =
                prefactor_x * *(b + 195 * OS1_S1 + 53) -
                p_over_q * *(b + 250 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 53);
            *(b + 195 * OS1_S1 + 75) =
                prefactor_x * *(b + 195 * OS1_S1 + 54) -
                p_over_q * *(b + 250 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 54);
            *(b + 195 * OS1_S1 + 76) =
                prefactor_x * *(b + 195 * OS1_S1 + 55) -
                p_over_q * *(b + 250 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 55);
            *(b + 195 * OS1_S1 + 77) =
                prefactor_y * *(b + 195 * OS1_S1 + 50) -
                p_over_q * *(b + 258 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 195 * OS1_S1 + 30);
            *(b + 195 * OS1_S1 + 78) =
                prefactor_z * *(b + 195 * OS1_S1 + 50) -
                p_over_q * *(b + 259 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 50);
            *(b + 195 * OS1_S1 + 79) =
                prefactor_z * *(b + 195 * OS1_S1 + 51) -
                p_over_q * *(b + 259 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 51) +
                one_over_two_q * *(b + 195 * OS1_S1 + 30);
            *(b + 195 * OS1_S1 + 80) =
                prefactor_z * *(b + 195 * OS1_S1 + 52) -
                p_over_q * *(b + 259 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 195 * OS1_S1 + 31);
            *(b + 195 * OS1_S1 + 81) =
                prefactor_y * *(b + 195 * OS1_S1 + 54) -
                p_over_q * *(b + 258 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 54) +
                one_over_two_q * *(b + 195 * OS1_S1 + 34);
            *(b + 195 * OS1_S1 + 82) =
                prefactor_y * *(b + 195 * OS1_S1 + 55) -
                p_over_q * *(b + 258 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 55);
            *(b + 195 * OS1_S1 + 83) =
                prefactor_z * *(b + 195 * OS1_S1 + 55) -
                p_over_q * *(b + 259 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 195 * OS1_S1 + 34);
            *(b + 196 * OS1_S1 + 56) =
                prefactor_x * *(b + 196 * OS1_S1 + 35) -
                p_over_q * *(b + 251 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 20);
            *(b + 196 * OS1_S1 + 57) =
                prefactor_y * *(b + 196 * OS1_S1 + 35) -
                p_over_q * *(b + 259 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 35);
            *(b + 196 * OS1_S1 + 58) =
                prefactor_z * *(b + 196 * OS1_S1 + 35) -
                p_over_q * *(b + 260 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 35);
            *(b + 196 * OS1_S1 + 59) =
                prefactor_y * *(b + 196 * OS1_S1 + 36) -
                p_over_q * *(b + 259 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 36) +
                one_over_two_q * *(b + 196 * OS1_S1 + 20);
            *(b + 196 * OS1_S1 + 60) =
                prefactor_z * *(b + 196 * OS1_S1 + 36) -
                p_over_q * *(b + 260 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 36);
            *(b + 196 * OS1_S1 + 61) =
                prefactor_z * *(b + 196 * OS1_S1 + 37) -
                p_over_q * *(b + 260 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 37) +
                one_over_two_q * *(b + 196 * OS1_S1 + 20);
            *(b + 196 * OS1_S1 + 62) =
                prefactor_x * *(b + 196 * OS1_S1 + 41) -
                p_over_q * *(b + 251 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 196 * OS1_S1 + 26);
            *(b + 196 * OS1_S1 + 63) =
                prefactor_z * *(b + 196 * OS1_S1 + 38) -
                p_over_q * *(b + 260 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 38);
            *(b + 196 * OS1_S1 + 64) =
                prefactor_y * *(b + 196 * OS1_S1 + 40) -
                p_over_q * *(b + 259 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 40);
            *(b + 196 * OS1_S1 + 65) =
                prefactor_x * *(b + 196 * OS1_S1 + 44) -
                p_over_q * *(b + 251 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 196 * OS1_S1 + 29);
            *(b + 196 * OS1_S1 + 66) =
                prefactor_x * *(b + 196 * OS1_S1 + 45) -
                p_over_q * *(b + 251 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 45) +
                one_over_two_q * *(b + 196 * OS1_S1 + 30);
            *(b + 196 * OS1_S1 + 67) =
                prefactor_z * *(b + 196 * OS1_S1 + 41) -
                p_over_q * *(b + 260 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 41);
            *(b + 196 * OS1_S1 + 68) =
                prefactor_x * *(b + 196 * OS1_S1 + 47) -
                p_over_q * *(b + 251 * OS1_S1 + 47) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 47) +
                one_over_two_q * *(b + 196 * OS1_S1 + 32);
            *(b + 196 * OS1_S1 + 69) =
                prefactor_y * *(b + 196 * OS1_S1 + 44) -
                p_over_q * *(b + 259 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 44);
            *(b + 196 * OS1_S1 + 70) =
                prefactor_x * *(b + 196 * OS1_S1 + 49) -
                p_over_q * *(b + 251 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 49) +
                one_over_two_q * *(b + 196 * OS1_S1 + 34);
            *(b + 196 * OS1_S1 + 71) =
                prefactor_x * *(b + 196 * OS1_S1 + 50) -
                p_over_q * *(b + 251 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 50);
            *(b + 196 * OS1_S1 + 72) =
                prefactor_x * *(b + 196 * OS1_S1 + 51) -
                p_over_q * *(b + 251 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 51);
            *(b + 196 * OS1_S1 + 73) =
                prefactor_x * *(b + 196 * OS1_S1 + 52) -
                p_over_q * *(b + 251 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 52);
            *(b + 196 * OS1_S1 + 74) =
                prefactor_x * *(b + 196 * OS1_S1 + 53) -
                p_over_q * *(b + 251 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 53);
            *(b + 196 * OS1_S1 + 75) =
                prefactor_x * *(b + 196 * OS1_S1 + 54) -
                p_over_q * *(b + 251 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 54);
            *(b + 196 * OS1_S1 + 76) =
                prefactor_x * *(b + 196 * OS1_S1 + 55) -
                p_over_q * *(b + 251 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 55);
            *(b + 196 * OS1_S1 + 77) =
                prefactor_y * *(b + 196 * OS1_S1 + 50) -
                p_over_q * *(b + 259 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 30);
            *(b + 196 * OS1_S1 + 78) =
                prefactor_z * *(b + 196 * OS1_S1 + 50) -
                p_over_q * *(b + 260 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 50);
            *(b + 196 * OS1_S1 + 79) =
                prefactor_z * *(b + 196 * OS1_S1 + 51) -
                p_over_q * *(b + 260 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 51) +
                one_over_two_q * *(b + 196 * OS1_S1 + 30);
            *(b + 196 * OS1_S1 + 80) =
                prefactor_z * *(b + 196 * OS1_S1 + 52) -
                p_over_q * *(b + 260 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 196 * OS1_S1 + 31);
            *(b + 196 * OS1_S1 + 81) =
                prefactor_y * *(b + 196 * OS1_S1 + 54) -
                p_over_q * *(b + 259 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 54) +
                one_over_two_q * *(b + 196 * OS1_S1 + 34);
            *(b + 196 * OS1_S1 + 82) =
                prefactor_y * *(b + 196 * OS1_S1 + 55) -
                p_over_q * *(b + 259 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 55);
            *(b + 196 * OS1_S1 + 83) =
                prefactor_z * *(b + 196 * OS1_S1 + 55) -
                p_over_q * *(b + 260 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 34);
            *(b + 197 * OS1_S1 + 56) =
                prefactor_x * *(b + 197 * OS1_S1 + 35) -
                p_over_q * *(b + 252 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 20);
            *(b + 197 * OS1_S1 + 57) =
                prefactor_y * *(b + 197 * OS1_S1 + 35) -
                p_over_q * *(b + 260 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 35);
            *(b + 197 * OS1_S1 + 58) =
                prefactor_z * *(b + 197 * OS1_S1 + 35) -
                p_over_q * *(b + 261 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 35);
            *(b + 197 * OS1_S1 + 59) =
                prefactor_y * *(b + 197 * OS1_S1 + 36) -
                p_over_q * *(b + 260 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 36) +
                one_over_two_q * *(b + 197 * OS1_S1 + 20);
            *(b + 197 * OS1_S1 + 60) =
                prefactor_y * *(b + 197 * OS1_S1 + 37) -
                p_over_q * *(b + 260 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 37);
            *(b + 197 * OS1_S1 + 61) =
                prefactor_z * *(b + 197 * OS1_S1 + 37) -
                p_over_q * *(b + 261 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 37) +
                one_over_two_q * *(b + 197 * OS1_S1 + 20);
            *(b + 197 * OS1_S1 + 62) =
                prefactor_x * *(b + 197 * OS1_S1 + 41) -
                p_over_q * *(b + 252 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 197 * OS1_S1 + 26);
            *(b + 197 * OS1_S1 + 63) =
                prefactor_z * *(b + 197 * OS1_S1 + 38) -
                p_over_q * *(b + 261 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 38);
            *(b + 197 * OS1_S1 + 64) =
                prefactor_y * *(b + 197 * OS1_S1 + 40) -
                p_over_q * *(b + 260 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 40);
            *(b + 197 * OS1_S1 + 65) =
                prefactor_x * *(b + 197 * OS1_S1 + 44) -
                p_over_q * *(b + 252 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 197 * OS1_S1 + 29);
            *(b + 197 * OS1_S1 + 66) =
                prefactor_x * *(b + 197 * OS1_S1 + 45) -
                p_over_q * *(b + 252 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 45) +
                one_over_two_q * *(b + 197 * OS1_S1 + 30);
            *(b + 197 * OS1_S1 + 67) =
                prefactor_z * *(b + 197 * OS1_S1 + 41) -
                p_over_q * *(b + 261 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 41);
            *(b + 197 * OS1_S1 + 68) =
                prefactor_x * *(b + 197 * OS1_S1 + 47) -
                p_over_q * *(b + 252 * OS1_S1 + 47) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 47) +
                one_over_two_q * *(b + 197 * OS1_S1 + 32);
            *(b + 197 * OS1_S1 + 69) =
                prefactor_y * *(b + 197 * OS1_S1 + 44) -
                p_over_q * *(b + 260 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 44);
            *(b + 197 * OS1_S1 + 70) =
                prefactor_x * *(b + 197 * OS1_S1 + 49) -
                p_over_q * *(b + 252 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 49) +
                one_over_two_q * *(b + 197 * OS1_S1 + 34);
            *(b + 197 * OS1_S1 + 71) =
                prefactor_x * *(b + 197 * OS1_S1 + 50) -
                p_over_q * *(b + 252 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 50);
            *(b + 197 * OS1_S1 + 72) =
                prefactor_x * *(b + 197 * OS1_S1 + 51) -
                p_over_q * *(b + 252 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 51);
            *(b + 197 * OS1_S1 + 73) =
                prefactor_x * *(b + 197 * OS1_S1 + 52) -
                p_over_q * *(b + 252 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 52);
            *(b + 197 * OS1_S1 + 74) =
                prefactor_x * *(b + 197 * OS1_S1 + 53) -
                p_over_q * *(b + 252 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 53);
            *(b + 197 * OS1_S1 + 75) =
                prefactor_x * *(b + 197 * OS1_S1 + 54) -
                p_over_q * *(b + 252 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 54);
            *(b + 197 * OS1_S1 + 76) =
                prefactor_x * *(b + 197 * OS1_S1 + 55) -
                p_over_q * *(b + 252 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 55);
            *(b + 197 * OS1_S1 + 77) =
                prefactor_y * *(b + 197 * OS1_S1 + 50) -
                p_over_q * *(b + 260 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 30);
            *(b + 197 * OS1_S1 + 78) =
                prefactor_z * *(b + 197 * OS1_S1 + 50) -
                p_over_q * *(b + 261 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 50);
            *(b + 197 * OS1_S1 + 79) =
                prefactor_z * *(b + 197 * OS1_S1 + 51) -
                p_over_q * *(b + 261 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 51) +
                one_over_two_q * *(b + 197 * OS1_S1 + 30);
            *(b + 197 * OS1_S1 + 80) =
                prefactor_y * *(b + 197 * OS1_S1 + 53) -
                p_over_q * *(b + 260 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 197 * OS1_S1 + 33);
            *(b + 197 * OS1_S1 + 81) =
                prefactor_y * *(b + 197 * OS1_S1 + 54) -
                p_over_q * *(b + 260 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 54) +
                one_over_two_q * *(b + 197 * OS1_S1 + 34);
            *(b + 197 * OS1_S1 + 82) =
                prefactor_y * *(b + 197 * OS1_S1 + 55) -
                p_over_q * *(b + 260 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 55);
            *(b + 197 * OS1_S1 + 83) =
                prefactor_z * *(b + 197 * OS1_S1 + 55) -
                p_over_q * *(b + 261 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 34);
            *(b + 198 * OS1_S1 + 56) =
                prefactor_x * *(b + 198 * OS1_S1 + 35) -
                p_over_q * *(b + 253 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 198 * OS1_S1 + 20);
            *(b + 198 * OS1_S1 + 57) =
                prefactor_y * *(b + 198 * OS1_S1 + 35) -
                p_over_q * *(b + 261 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 35);
            *(b + 198 * OS1_S1 + 58) =
                prefactor_z * *(b + 198 * OS1_S1 + 35) -
                p_over_q * *(b + 262 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 35);
            *(b + 198 * OS1_S1 + 59) =
                prefactor_y * *(b + 198 * OS1_S1 + 36) -
                p_over_q * *(b + 261 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 36) +
                one_over_two_q * *(b + 198 * OS1_S1 + 20);
            *(b + 198 * OS1_S1 + 60) =
                prefactor_y * *(b + 198 * OS1_S1 + 37) -
                p_over_q * *(b + 261 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 37);
            *(b + 198 * OS1_S1 + 61) =
                prefactor_z * *(b + 198 * OS1_S1 + 37) -
                p_over_q * *(b + 262 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 37) +
                one_over_two_q * *(b + 198 * OS1_S1 + 20);
            *(b + 198 * OS1_S1 + 62) =
                prefactor_y * *(b + 198 * OS1_S1 + 38) -
                p_over_q * *(b + 261 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 198 * OS1_S1 + 21);
            *(b + 198 * OS1_S1 + 63) =
                prefactor_z * *(b + 198 * OS1_S1 + 38) -
                p_over_q * *(b + 262 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 38);
            *(b + 198 * OS1_S1 + 64) =
                prefactor_y * *(b + 198 * OS1_S1 + 40) -
                p_over_q * *(b + 261 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 40);
            *(b + 198 * OS1_S1 + 65) =
                prefactor_x * *(b + 198 * OS1_S1 + 44) -
                p_over_q * *(b + 253 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 198 * OS1_S1 + 29);
            *(b + 198 * OS1_S1 + 66) =
                prefactor_x * *(b + 198 * OS1_S1 + 45) -
                p_over_q * *(b + 253 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 45) +
                one_over_two_q * *(b + 198 * OS1_S1 + 30);
            *(b + 198 * OS1_S1 + 67) =
                prefactor_z * *(b + 198 * OS1_S1 + 41) -
                p_over_q * *(b + 262 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 41);
            *(b + 198 * OS1_S1 + 68) =
                prefactor_y * *(b + 198 * OS1_S1 + 43) -
                p_over_q * *(b + 261 * OS1_S1 + 43) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 43) +
                one_over_two_q * *(b + 198 * OS1_S1 + 25);
            *(b + 198 * OS1_S1 + 69) =
                prefactor_y * *(b + 198 * OS1_S1 + 44) -
                p_over_q * *(b + 261 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 44);
            *(b + 198 * OS1_S1 + 70) =
                prefactor_x * *(b + 198 * OS1_S1 + 49) -
                p_over_q * *(b + 253 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 49) +
                one_over_two_q * *(b + 198 * OS1_S1 + 34);
            *(b + 198 * OS1_S1 + 71) =
                prefactor_x * *(b + 198 * OS1_S1 + 50) -
                p_over_q * *(b + 253 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 50);
            *(b + 198 * OS1_S1 + 72) =
                prefactor_x * *(b + 198 * OS1_S1 + 51) -
                p_over_q * *(b + 253 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 51);
            *(b + 198 * OS1_S1 + 73) =
                prefactor_x * *(b + 198 * OS1_S1 + 52) -
                p_over_q * *(b + 253 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 52);
            *(b + 198 * OS1_S1 + 74) =
                prefactor_x * *(b + 198 * OS1_S1 + 53) -
                p_over_q * *(b + 253 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 53);
            *(b + 198 * OS1_S1 + 75) =
                prefactor_y * *(b + 198 * OS1_S1 + 49) -
                p_over_q * *(b + 261 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 49);
            *(b + 198 * OS1_S1 + 76) =
                prefactor_x * *(b + 198 * OS1_S1 + 55) -
                p_over_q * *(b + 253 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 55);
            *(b + 198 * OS1_S1 + 77) =
                prefactor_y * *(b + 198 * OS1_S1 + 50) -
                p_over_q * *(b + 261 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 198 * OS1_S1 + 30);
            *(b + 198 * OS1_S1 + 78) =
                prefactor_z * *(b + 198 * OS1_S1 + 50) -
                p_over_q * *(b + 262 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 50);
            *(b + 198 * OS1_S1 + 79) =
                prefactor_z * *(b + 198 * OS1_S1 + 51) -
                p_over_q * *(b + 262 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 51) +
                one_over_two_q * *(b + 198 * OS1_S1 + 30);
            *(b + 198 * OS1_S1 + 80) =
                prefactor_y * *(b + 198 * OS1_S1 + 53) -
                p_over_q * *(b + 261 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 198 * OS1_S1 + 33);
            *(b + 198 * OS1_S1 + 81) =
                prefactor_y * *(b + 198 * OS1_S1 + 54) -
                p_over_q * *(b + 261 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 54) +
                one_over_two_q * *(b + 198 * OS1_S1 + 34);
            *(b + 198 * OS1_S1 + 82) =
                prefactor_y * *(b + 198 * OS1_S1 + 55) -
                p_over_q * *(b + 261 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 55);
            *(b + 198 * OS1_S1 + 83) =
                prefactor_z * *(b + 198 * OS1_S1 + 55) -
                p_over_q * *(b + 262 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 198 * OS1_S1 + 34);
            *(b + 199 * OS1_S1 + 56) =
                prefactor_x * *(b + 199 * OS1_S1 + 35) -
                p_over_q * *(b + 254 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 199 * OS1_S1 + 20);
            *(b + 199 * OS1_S1 + 57) =
                prefactor_y * *(b + 199 * OS1_S1 + 35) -
                p_over_q * *(b + 262 * OS1_S1 + 35) +
                one_over_two_q * *(b + 147 * OS1_S1 + 35);
            *(b + 199 * OS1_S1 + 58) =
                prefactor_z * *(b + 199 * OS1_S1 + 35) -
                p_over_q * *(b + 263 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 35);
            *(b + 199 * OS1_S1 + 59) =
                prefactor_y * *(b + 199 * OS1_S1 + 36) -
                p_over_q * *(b + 262 * OS1_S1 + 36) +
                one_over_two_q * *(b + 147 * OS1_S1 + 36) +
                one_over_two_q * *(b + 199 * OS1_S1 + 20);
            *(b + 199 * OS1_S1 + 60) =
                prefactor_y * *(b + 199 * OS1_S1 + 37) -
                p_over_q * *(b + 262 * OS1_S1 + 37) +
                one_over_two_q * *(b + 147 * OS1_S1 + 37);
            *(b + 199 * OS1_S1 + 61) =
                prefactor_z * *(b + 199 * OS1_S1 + 37) -
                p_over_q * *(b + 263 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 37) +
                one_over_two_q * *(b + 199 * OS1_S1 + 20);
            *(b + 199 * OS1_S1 + 62) =
                prefactor_y * *(b + 199 * OS1_S1 + 38) -
                p_over_q * *(b + 262 * OS1_S1 + 38) +
                one_over_two_q * *(b + 147 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 21);
            *(b + 199 * OS1_S1 + 63) =
                prefactor_z * *(b + 199 * OS1_S1 + 38) -
                p_over_q * *(b + 263 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 38);
            *(b + 199 * OS1_S1 + 64) =
                prefactor_y * *(b + 199 * OS1_S1 + 40) -
                p_over_q * *(b + 262 * OS1_S1 + 40) +
                one_over_two_q * *(b + 147 * OS1_S1 + 40);
            *(b + 199 * OS1_S1 + 65) =
                prefactor_x * *(b + 199 * OS1_S1 + 44) -
                p_over_q * *(b + 254 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 29);
            *(b + 199 * OS1_S1 + 66) =
                prefactor_x * *(b + 199 * OS1_S1 + 45) -
                p_over_q * *(b + 254 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 45) +
                one_over_two_q * *(b + 199 * OS1_S1 + 30);
            *(b + 199 * OS1_S1 + 67) =
                prefactor_z * *(b + 199 * OS1_S1 + 41) -
                p_over_q * *(b + 263 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 41);
            *(b + 199 * OS1_S1 + 68) =
                prefactor_y * *(b + 199 * OS1_S1 + 43) -
                p_over_q * *(b + 262 * OS1_S1 + 43) +
                one_over_two_q * *(b + 147 * OS1_S1 + 43) +
                one_over_two_q * *(b + 199 * OS1_S1 + 25);
            *(b + 199 * OS1_S1 + 69) =
                prefactor_y * *(b + 199 * OS1_S1 + 44) -
                p_over_q * *(b + 262 * OS1_S1 + 44) +
                one_over_two_q * *(b + 147 * OS1_S1 + 44);
            *(b + 199 * OS1_S1 + 70) =
                prefactor_x * *(b + 199 * OS1_S1 + 49) -
                p_over_q * *(b + 254 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 49) +
                one_over_two_q * *(b + 199 * OS1_S1 + 34);
            *(b + 199 * OS1_S1 + 71) =
                prefactor_x * *(b + 199 * OS1_S1 + 50) -
                p_over_q * *(b + 254 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 50);
            *(b + 199 * OS1_S1 + 72) =
                prefactor_x * *(b + 199 * OS1_S1 + 51) -
                p_over_q * *(b + 254 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 51);
            *(b + 199 * OS1_S1 + 73) =
                prefactor_x * *(b + 199 * OS1_S1 + 52) -
                p_over_q * *(b + 254 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 52);
            *(b + 199 * OS1_S1 + 74) =
                prefactor_x * *(b + 199 * OS1_S1 + 53) -
                p_over_q * *(b + 254 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 53);
            *(b + 199 * OS1_S1 + 75) =
                prefactor_y * *(b + 199 * OS1_S1 + 49) -
                p_over_q * *(b + 262 * OS1_S1 + 49) +
                one_over_two_q * *(b + 147 * OS1_S1 + 49);
            *(b + 199 * OS1_S1 + 76) =
                prefactor_x * *(b + 199 * OS1_S1 + 55) -
                p_over_q * *(b + 254 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 55);
            *(b + 199 * OS1_S1 + 77) =
                prefactor_y * *(b + 199 * OS1_S1 + 50) -
                p_over_q * *(b + 262 * OS1_S1 + 50) +
                one_over_two_q * *(b + 147 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 199 * OS1_S1 + 30);
            *(b + 199 * OS1_S1 + 78) =
                prefactor_z * *(b + 199 * OS1_S1 + 50) -
                p_over_q * *(b + 263 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 50);
            *(b + 199 * OS1_S1 + 79) =
                prefactor_z * *(b + 199 * OS1_S1 + 51) -
                p_over_q * *(b + 263 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 51) +
                one_over_two_q * *(b + 199 * OS1_S1 + 30);
            *(b + 199 * OS1_S1 + 80) =
                prefactor_y * *(b + 199 * OS1_S1 + 53) -
                p_over_q * *(b + 262 * OS1_S1 + 53) +
                one_over_two_q * *(b + 147 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 33);
            *(b + 199 * OS1_S1 + 81) =
                prefactor_y * *(b + 199 * OS1_S1 + 54) -
                p_over_q * *(b + 262 * OS1_S1 + 54) +
                one_over_two_q * *(b + 147 * OS1_S1 + 54) +
                one_over_two_q * *(b + 199 * OS1_S1 + 34);
            *(b + 199 * OS1_S1 + 82) =
                prefactor_y * *(b + 199 * OS1_S1 + 55) -
                p_over_q * *(b + 262 * OS1_S1 + 55) +
                one_over_two_q * *(b + 147 * OS1_S1 + 55);
            *(b + 199 * OS1_S1 + 83) =
                prefactor_z * *(b + 199 * OS1_S1 + 55) -
                p_over_q * *(b + 263 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 199 * OS1_S1 + 34);
            *(b + 200 * OS1_S1 + 56) =
                prefactor_x * *(b + 200 * OS1_S1 + 35) -
                p_over_q * *(b + 255 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 200 * OS1_S1 + 20);
            *(b + 200 * OS1_S1 + 57) = prefactor_y * *(b + 200 * OS1_S1 + 35) -
                                       p_over_q * *(b + 263 * OS1_S1 + 35);
            *(b + 200 * OS1_S1 + 58) =
                prefactor_z * *(b + 200 * OS1_S1 + 35) -
                p_over_q * *(b + 264 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 35);
            *(b + 200 * OS1_S1 + 59) =
                prefactor_y * *(b + 200 * OS1_S1 + 36) -
                p_over_q * *(b + 263 * OS1_S1 + 36) +
                one_over_two_q * *(b + 200 * OS1_S1 + 20);
            *(b + 200 * OS1_S1 + 60) = prefactor_y * *(b + 200 * OS1_S1 + 37) -
                                       p_over_q * *(b + 263 * OS1_S1 + 37);
            *(b + 200 * OS1_S1 + 61) =
                prefactor_z * *(b + 200 * OS1_S1 + 37) -
                p_over_q * *(b + 264 * OS1_S1 + 37) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 37) +
                one_over_two_q * *(b + 200 * OS1_S1 + 20);
            *(b + 200 * OS1_S1 + 62) =
                prefactor_y * *(b + 200 * OS1_S1 + 38) -
                p_over_q * *(b + 263 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 200 * OS1_S1 + 21);
            *(b + 200 * OS1_S1 + 63) =
                prefactor_z * *(b + 200 * OS1_S1 + 38) -
                p_over_q * *(b + 264 * OS1_S1 + 38) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 38);
            *(b + 200 * OS1_S1 + 64) = prefactor_y * *(b + 200 * OS1_S1 + 40) -
                                       p_over_q * *(b + 263 * OS1_S1 + 40);
            *(b + 200 * OS1_S1 + 65) =
                prefactor_x * *(b + 200 * OS1_S1 + 44) -
                p_over_q * *(b + 255 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 200 * OS1_S1 + 29);
            *(b + 200 * OS1_S1 + 66) =
                prefactor_x * *(b + 200 * OS1_S1 + 45) -
                p_over_q * *(b + 255 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 45) +
                one_over_two_q * *(b + 200 * OS1_S1 + 30);
            *(b + 200 * OS1_S1 + 67) =
                prefactor_z * *(b + 200 * OS1_S1 + 41) -
                p_over_q * *(b + 264 * OS1_S1 + 41) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 41);
            *(b + 200 * OS1_S1 + 68) =
                prefactor_y * *(b + 200 * OS1_S1 + 43) -
                p_over_q * *(b + 263 * OS1_S1 + 43) +
                one_over_two_q * *(b + 200 * OS1_S1 + 25);
            *(b + 200 * OS1_S1 + 69) = prefactor_y * *(b + 200 * OS1_S1 + 44) -
                                       p_over_q * *(b + 263 * OS1_S1 + 44);
            *(b + 200 * OS1_S1 + 70) =
                prefactor_x * *(b + 200 * OS1_S1 + 49) -
                p_over_q * *(b + 255 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 49) +
                one_over_two_q * *(b + 200 * OS1_S1 + 34);
            *(b + 200 * OS1_S1 + 71) =
                prefactor_x * *(b + 200 * OS1_S1 + 50) -
                p_over_q * *(b + 255 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 50);
            *(b + 200 * OS1_S1 + 72) =
                prefactor_x * *(b + 200 * OS1_S1 + 51) -
                p_over_q * *(b + 255 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 51);
            *(b + 200 * OS1_S1 + 73) =
                prefactor_x * *(b + 200 * OS1_S1 + 52) -
                p_over_q * *(b + 255 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 52);
            *(b + 200 * OS1_S1 + 74) =
                prefactor_x * *(b + 200 * OS1_S1 + 53) -
                p_over_q * *(b + 255 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 53);
            *(b + 200 * OS1_S1 + 75) = prefactor_y * *(b + 200 * OS1_S1 + 49) -
                                       p_over_q * *(b + 263 * OS1_S1 + 49);
            *(b + 200 * OS1_S1 + 76) =
                prefactor_x * *(b + 200 * OS1_S1 + 55) -
                p_over_q * *(b + 255 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 55);
            *(b + 200 * OS1_S1 + 77) =
                prefactor_y * *(b + 200 * OS1_S1 + 50) -
                p_over_q * *(b + 263 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 200 * OS1_S1 + 30);
            *(b + 200 * OS1_S1 + 78) =
                prefactor_z * *(b + 200 * OS1_S1 + 50) -
                p_over_q * *(b + 264 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 50);
            *(b + 200 * OS1_S1 + 79) =
                prefactor_z * *(b + 200 * OS1_S1 + 51) -
                p_over_q * *(b + 264 * OS1_S1 + 51) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 51) +
                one_over_two_q * *(b + 200 * OS1_S1 + 30);
            *(b + 200 * OS1_S1 + 80) =
                prefactor_y * *(b + 200 * OS1_S1 + 53) -
                p_over_q * *(b + 263 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 200 * OS1_S1 + 33);
            *(b + 200 * OS1_S1 + 81) =
                prefactor_y * *(b + 200 * OS1_S1 + 54) -
                p_over_q * *(b + 263 * OS1_S1 + 54) +
                one_over_two_q * *(b + 200 * OS1_S1 + 34);
            *(b + 200 * OS1_S1 + 82) = prefactor_y * *(b + 200 * OS1_S1 + 55) -
                                       p_over_q * *(b + 263 * OS1_S1 + 55);
            *(b + 200 * OS1_S1 + 83) =
                prefactor_z * *(b + 200 * OS1_S1 + 55) -
                p_over_q * *(b + 264 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 200 * OS1_S1 + 34);
            *(b + 201 * OS1_S1 + 56) =
                prefactor_x * *(b + 201 * OS1_S1 + 35) -
                p_over_q * *(b + 256 * OS1_S1 + 35) +
                one_over_two_q * *(b + 156 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 201 * OS1_S1 + 20);
            *(b + 201 * OS1_S1 + 57) =
                prefactor_y * *(b + 201 * OS1_S1 + 35) -
                p_over_q * *(b + 265 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 35);
            *(b + 201 * OS1_S1 + 58) = prefactor_z * *(b + 201 * OS1_S1 + 35) -
                                       p_over_q * *(b + 266 * OS1_S1 + 35);
            *(b + 201 * OS1_S1 + 59) =
                prefactor_y * *(b + 201 * OS1_S1 + 36) -
                p_over_q * *(b + 265 * OS1_S1 + 36) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 36) +
                one_over_two_q * *(b + 201 * OS1_S1 + 20);
            *(b + 201 * OS1_S1 + 60) = prefactor_z * *(b + 201 * OS1_S1 + 36) -
                                       p_over_q * *(b + 266 * OS1_S1 + 36);
            *(b + 201 * OS1_S1 + 61) =
                prefactor_z * *(b + 201 * OS1_S1 + 37) -
                p_over_q * *(b + 266 * OS1_S1 + 37) +
                one_over_two_q * *(b + 201 * OS1_S1 + 20);
            *(b + 201 * OS1_S1 + 62) =
                prefactor_x * *(b + 201 * OS1_S1 + 41) -
                p_over_q * *(b + 256 * OS1_S1 + 41) +
                one_over_two_q * *(b + 156 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 26);
            *(b + 201 * OS1_S1 + 63) = prefactor_z * *(b + 201 * OS1_S1 + 38) -
                                       p_over_q * *(b + 266 * OS1_S1 + 38);
            *(b + 201 * OS1_S1 + 64) =
                prefactor_y * *(b + 201 * OS1_S1 + 40) -
                p_over_q * *(b + 265 * OS1_S1 + 40) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 40);
            *(b + 201 * OS1_S1 + 65) =
                prefactor_z * *(b + 201 * OS1_S1 + 40) -
                p_over_q * *(b + 266 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 22);
            *(b + 201 * OS1_S1 + 66) =
                prefactor_x * *(b + 201 * OS1_S1 + 45) -
                p_over_q * *(b + 256 * OS1_S1 + 45) +
                one_over_two_q * *(b + 156 * OS1_S1 + 45) +
                one_over_two_q * *(b + 201 * OS1_S1 + 30);
            *(b + 201 * OS1_S1 + 67) = prefactor_z * *(b + 201 * OS1_S1 + 41) -
                                       p_over_q * *(b + 266 * OS1_S1 + 41);
            *(b + 201 * OS1_S1 + 68) =
                prefactor_z * *(b + 201 * OS1_S1 + 42) -
                p_over_q * *(b + 266 * OS1_S1 + 42) +
                one_over_two_q * *(b + 201 * OS1_S1 + 23);
            *(b + 201 * OS1_S1 + 69) =
                prefactor_y * *(b + 201 * OS1_S1 + 44) -
                p_over_q * *(b + 265 * OS1_S1 + 44) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 44);
            *(b + 201 * OS1_S1 + 70) =
                prefactor_x * *(b + 201 * OS1_S1 + 49) -
                p_over_q * *(b + 256 * OS1_S1 + 49) +
                one_over_two_q * *(b + 156 * OS1_S1 + 49) +
                one_over_two_q * *(b + 201 * OS1_S1 + 34);
            *(b + 201 * OS1_S1 + 71) =
                prefactor_x * *(b + 201 * OS1_S1 + 50) -
                p_over_q * *(b + 256 * OS1_S1 + 50) +
                one_over_two_q * *(b + 156 * OS1_S1 + 50);
            *(b + 201 * OS1_S1 + 72) = prefactor_z * *(b + 201 * OS1_S1 + 45) -
                                       p_over_q * *(b + 266 * OS1_S1 + 45);
            *(b + 201 * OS1_S1 + 73) =
                prefactor_x * *(b + 201 * OS1_S1 + 52) -
                p_over_q * *(b + 256 * OS1_S1 + 52) +
                one_over_two_q * *(b + 156 * OS1_S1 + 52);
            *(b + 201 * OS1_S1 + 74) =
                prefactor_x * *(b + 201 * OS1_S1 + 53) -
                p_over_q * *(b + 256 * OS1_S1 + 53) +
                one_over_two_q * *(b + 156 * OS1_S1 + 53);
            *(b + 201 * OS1_S1 + 75) =
                prefactor_x * *(b + 201 * OS1_S1 + 54) -
                p_over_q * *(b + 256 * OS1_S1 + 54) +
                one_over_two_q * *(b + 156 * OS1_S1 + 54);
            *(b + 201 * OS1_S1 + 76) =
                prefactor_x * *(b + 201 * OS1_S1 + 55) -
                p_over_q * *(b + 256 * OS1_S1 + 55) +
                one_over_two_q * *(b + 156 * OS1_S1 + 55);
            *(b + 201 * OS1_S1 + 77) =
                prefactor_y * *(b + 201 * OS1_S1 + 50) -
                p_over_q * *(b + 265 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 201 * OS1_S1 + 30);
            *(b + 201 * OS1_S1 + 78) = prefactor_z * *(b + 201 * OS1_S1 + 50) -
                                       p_over_q * *(b + 266 * OS1_S1 + 50);
            *(b + 201 * OS1_S1 + 79) =
                prefactor_z * *(b + 201 * OS1_S1 + 51) -
                p_over_q * *(b + 266 * OS1_S1 + 51) +
                one_over_two_q * *(b + 201 * OS1_S1 + 30);
            *(b + 201 * OS1_S1 + 80) =
                prefactor_z * *(b + 201 * OS1_S1 + 52) -
                p_over_q * *(b + 266 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 31);
            *(b + 201 * OS1_S1 + 81) =
                prefactor_y * *(b + 201 * OS1_S1 + 54) -
                p_over_q * *(b + 265 * OS1_S1 + 54) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 54) +
                one_over_two_q * *(b + 201 * OS1_S1 + 34);
            *(b + 201 * OS1_S1 + 82) =
                prefactor_y * *(b + 201 * OS1_S1 + 55) -
                p_over_q * *(b + 265 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 55);
            *(b + 201 * OS1_S1 + 83) =
                prefactor_z * *(b + 201 * OS1_S1 + 55) -
                p_over_q * *(b + 266 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 201 * OS1_S1 + 34);
            *(b + 202 * OS1_S1 + 56) =
                prefactor_x * *(b + 202 * OS1_S1 + 35) -
                p_over_q * *(b + 257 * OS1_S1 + 35) +
                one_over_two_q * *(b + 157 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 202 * OS1_S1 + 20);
            *(b + 202 * OS1_S1 + 57) =
                prefactor_y * *(b + 202 * OS1_S1 + 35) -
                p_over_q * *(b + 266 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 35);
            *(b + 202 * OS1_S1 + 58) =
                prefactor_z * *(b + 202 * OS1_S1 + 35) -
                p_over_q * *(b + 267 * OS1_S1 + 35) +
                one_over_two_q * *(b + 148 * OS1_S1 + 35);
            *(b + 202 * OS1_S1 + 59) =
                prefactor_y * *(b + 202 * OS1_S1 + 36) -
                p_over_q * *(b + 266 * OS1_S1 + 36) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 36) +
                one_over_two_q * *(b + 202 * OS1_S1 + 20);
            *(b + 202 * OS1_S1 + 60) =
                prefactor_z * *(b + 202 * OS1_S1 + 36) -
                p_over_q * *(b + 267 * OS1_S1 + 36) +
                one_over_two_q * *(b + 148 * OS1_S1 + 36);
            *(b + 202 * OS1_S1 + 61) =
                prefactor_z * *(b + 202 * OS1_S1 + 37) -
                p_over_q * *(b + 267 * OS1_S1 + 37) +
                one_over_two_q * *(b + 148 * OS1_S1 + 37) +
                one_over_two_q * *(b + 202 * OS1_S1 + 20);
            *(b + 202 * OS1_S1 + 62) =
                prefactor_x * *(b + 202 * OS1_S1 + 41) -
                p_over_q * *(b + 257 * OS1_S1 + 41) +
                one_over_two_q * *(b + 157 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 26);
            *(b + 202 * OS1_S1 + 63) =
                prefactor_z * *(b + 202 * OS1_S1 + 38) -
                p_over_q * *(b + 267 * OS1_S1 + 38) +
                one_over_two_q * *(b + 148 * OS1_S1 + 38);
            *(b + 202 * OS1_S1 + 64) =
                prefactor_y * *(b + 202 * OS1_S1 + 40) -
                p_over_q * *(b + 266 * OS1_S1 + 40) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 40);
            *(b + 202 * OS1_S1 + 65) =
                prefactor_z * *(b + 202 * OS1_S1 + 40) -
                p_over_q * *(b + 267 * OS1_S1 + 40) +
                one_over_two_q * *(b + 148 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 22);
            *(b + 202 * OS1_S1 + 66) =
                prefactor_x * *(b + 202 * OS1_S1 + 45) -
                p_over_q * *(b + 257 * OS1_S1 + 45) +
                one_over_two_q * *(b + 157 * OS1_S1 + 45) +
                one_over_two_q * *(b + 202 * OS1_S1 + 30);
            *(b + 202 * OS1_S1 + 67) =
                prefactor_z * *(b + 202 * OS1_S1 + 41) -
                p_over_q * *(b + 267 * OS1_S1 + 41) +
                one_over_two_q * *(b + 148 * OS1_S1 + 41);
            *(b + 202 * OS1_S1 + 68) =
                prefactor_z * *(b + 202 * OS1_S1 + 42) -
                p_over_q * *(b + 267 * OS1_S1 + 42) +
                one_over_two_q * *(b + 148 * OS1_S1 + 42) +
                one_over_two_q * *(b + 202 * OS1_S1 + 23);
            *(b + 202 * OS1_S1 + 69) =
                prefactor_y * *(b + 202 * OS1_S1 + 44) -
                p_over_q * *(b + 266 * OS1_S1 + 44) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 44);
            *(b + 202 * OS1_S1 + 70) =
                prefactor_x * *(b + 202 * OS1_S1 + 49) -
                p_over_q * *(b + 257 * OS1_S1 + 49) +
                one_over_two_q * *(b + 157 * OS1_S1 + 49) +
                one_over_two_q * *(b + 202 * OS1_S1 + 34);
            *(b + 202 * OS1_S1 + 71) =
                prefactor_x * *(b + 202 * OS1_S1 + 50) -
                p_over_q * *(b + 257 * OS1_S1 + 50) +
                one_over_two_q * *(b + 157 * OS1_S1 + 50);
            *(b + 202 * OS1_S1 + 72) =
                prefactor_z * *(b + 202 * OS1_S1 + 45) -
                p_over_q * *(b + 267 * OS1_S1 + 45) +
                one_over_two_q * *(b + 148 * OS1_S1 + 45);
            *(b + 202 * OS1_S1 + 73) =
                prefactor_x * *(b + 202 * OS1_S1 + 52) -
                p_over_q * *(b + 257 * OS1_S1 + 52) +
                one_over_two_q * *(b + 157 * OS1_S1 + 52);
            *(b + 202 * OS1_S1 + 74) =
                prefactor_x * *(b + 202 * OS1_S1 + 53) -
                p_over_q * *(b + 257 * OS1_S1 + 53) +
                one_over_two_q * *(b + 157 * OS1_S1 + 53);
            *(b + 202 * OS1_S1 + 75) =
                prefactor_x * *(b + 202 * OS1_S1 + 54) -
                p_over_q * *(b + 257 * OS1_S1 + 54) +
                one_over_two_q * *(b + 157 * OS1_S1 + 54);
            *(b + 202 * OS1_S1 + 76) =
                prefactor_x * *(b + 202 * OS1_S1 + 55) -
                p_over_q * *(b + 257 * OS1_S1 + 55) +
                one_over_two_q * *(b + 157 * OS1_S1 + 55);
            *(b + 202 * OS1_S1 + 77) =
                prefactor_y * *(b + 202 * OS1_S1 + 50) -
                p_over_q * *(b + 266 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 202 * OS1_S1 + 30);
            *(b + 202 * OS1_S1 + 78) =
                prefactor_z * *(b + 202 * OS1_S1 + 50) -
                p_over_q * *(b + 267 * OS1_S1 + 50) +
                one_over_two_q * *(b + 148 * OS1_S1 + 50);
            *(b + 202 * OS1_S1 + 79) =
                prefactor_z * *(b + 202 * OS1_S1 + 51) -
                p_over_q * *(b + 267 * OS1_S1 + 51) +
                one_over_two_q * *(b + 148 * OS1_S1 + 51) +
                one_over_two_q * *(b + 202 * OS1_S1 + 30);
            *(b + 202 * OS1_S1 + 80) =
                prefactor_z * *(b + 202 * OS1_S1 + 52) -
                p_over_q * *(b + 267 * OS1_S1 + 52) +
                one_over_two_q * *(b + 148 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 31);
            *(b + 202 * OS1_S1 + 81) =
                prefactor_y * *(b + 202 * OS1_S1 + 54) -
                p_over_q * *(b + 266 * OS1_S1 + 54) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 54) +
                one_over_two_q * *(b + 202 * OS1_S1 + 34);
            *(b + 202 * OS1_S1 + 82) =
                prefactor_y * *(b + 202 * OS1_S1 + 55) -
                p_over_q * *(b + 266 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 55);
            *(b + 202 * OS1_S1 + 83) =
                prefactor_z * *(b + 202 * OS1_S1 + 55) -
                p_over_q * *(b + 267 * OS1_S1 + 55) +
                one_over_two_q * *(b + 148 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 202 * OS1_S1 + 34);
            *(b + 203 * OS1_S1 + 56) =
                prefactor_x * *(b + 203 * OS1_S1 + 35) -
                p_over_q * *(b + 258 * OS1_S1 + 35) +
                one_over_two_q * *(b + 158 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 203 * OS1_S1 + 20);
            *(b + 203 * OS1_S1 + 57) =
                prefactor_y * *(b + 203 * OS1_S1 + 35) -
                p_over_q * *(b + 267 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 35);
            *(b + 203 * OS1_S1 + 58) =
                prefactor_z * *(b + 203 * OS1_S1 + 35) -
                p_over_q * *(b + 268 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 35);
            *(b + 203 * OS1_S1 + 59) =
                prefactor_y * *(b + 203 * OS1_S1 + 36) -
                p_over_q * *(b + 267 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 36) +
                one_over_two_q * *(b + 203 * OS1_S1 + 20);
            *(b + 203 * OS1_S1 + 60) =
                prefactor_z * *(b + 203 * OS1_S1 + 36) -
                p_over_q * *(b + 268 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 36);
            *(b + 203 * OS1_S1 + 61) =
                prefactor_z * *(b + 203 * OS1_S1 + 37) -
                p_over_q * *(b + 268 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 37) +
                one_over_two_q * *(b + 203 * OS1_S1 + 20);
            *(b + 203 * OS1_S1 + 62) =
                prefactor_x * *(b + 203 * OS1_S1 + 41) -
                p_over_q * *(b + 258 * OS1_S1 + 41) +
                one_over_two_q * *(b + 158 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 26);
            *(b + 203 * OS1_S1 + 63) =
                prefactor_z * *(b + 203 * OS1_S1 + 38) -
                p_over_q * *(b + 268 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 38);
            *(b + 203 * OS1_S1 + 64) =
                prefactor_y * *(b + 203 * OS1_S1 + 40) -
                p_over_q * *(b + 267 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 40);
            *(b + 203 * OS1_S1 + 65) =
                prefactor_x * *(b + 203 * OS1_S1 + 44) -
                p_over_q * *(b + 258 * OS1_S1 + 44) +
                one_over_two_q * *(b + 158 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 29);
            *(b + 203 * OS1_S1 + 66) =
                prefactor_x * *(b + 203 * OS1_S1 + 45) -
                p_over_q * *(b + 258 * OS1_S1 + 45) +
                one_over_two_q * *(b + 158 * OS1_S1 + 45) +
                one_over_two_q * *(b + 203 * OS1_S1 + 30);
            *(b + 203 * OS1_S1 + 67) =
                prefactor_z * *(b + 203 * OS1_S1 + 41) -
                p_over_q * *(b + 268 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 41);
            *(b + 203 * OS1_S1 + 68) =
                prefactor_x * *(b + 203 * OS1_S1 + 47) -
                p_over_q * *(b + 258 * OS1_S1 + 47) +
                one_over_two_q * *(b + 158 * OS1_S1 + 47) +
                one_over_two_q * *(b + 203 * OS1_S1 + 32);
            *(b + 203 * OS1_S1 + 69) =
                prefactor_y * *(b + 203 * OS1_S1 + 44) -
                p_over_q * *(b + 267 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 44);
            *(b + 203 * OS1_S1 + 70) =
                prefactor_x * *(b + 203 * OS1_S1 + 49) -
                p_over_q * *(b + 258 * OS1_S1 + 49) +
                one_over_two_q * *(b + 158 * OS1_S1 + 49) +
                one_over_two_q * *(b + 203 * OS1_S1 + 34);
            *(b + 203 * OS1_S1 + 71) =
                prefactor_x * *(b + 203 * OS1_S1 + 50) -
                p_over_q * *(b + 258 * OS1_S1 + 50) +
                one_over_two_q * *(b + 158 * OS1_S1 + 50);
            *(b + 203 * OS1_S1 + 72) =
                prefactor_x * *(b + 203 * OS1_S1 + 51) -
                p_over_q * *(b + 258 * OS1_S1 + 51) +
                one_over_two_q * *(b + 158 * OS1_S1 + 51);
            *(b + 203 * OS1_S1 + 73) =
                prefactor_x * *(b + 203 * OS1_S1 + 52) -
                p_over_q * *(b + 258 * OS1_S1 + 52) +
                one_over_two_q * *(b + 158 * OS1_S1 + 52);
            *(b + 203 * OS1_S1 + 74) =
                prefactor_x * *(b + 203 * OS1_S1 + 53) -
                p_over_q * *(b + 258 * OS1_S1 + 53) +
                one_over_two_q * *(b + 158 * OS1_S1 + 53);
            *(b + 203 * OS1_S1 + 75) =
                prefactor_x * *(b + 203 * OS1_S1 + 54) -
                p_over_q * *(b + 258 * OS1_S1 + 54) +
                one_over_two_q * *(b + 158 * OS1_S1 + 54);
            *(b + 203 * OS1_S1 + 76) =
                prefactor_x * *(b + 203 * OS1_S1 + 55) -
                p_over_q * *(b + 258 * OS1_S1 + 55) +
                one_over_two_q * *(b + 158 * OS1_S1 + 55);
            *(b + 203 * OS1_S1 + 77) =
                prefactor_y * *(b + 203 * OS1_S1 + 50) -
                p_over_q * *(b + 267 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 203 * OS1_S1 + 30);
            *(b + 203 * OS1_S1 + 78) =
                prefactor_z * *(b + 203 * OS1_S1 + 50) -
                p_over_q * *(b + 268 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 50);
            *(b + 203 * OS1_S1 + 79) =
                prefactor_z * *(b + 203 * OS1_S1 + 51) -
                p_over_q * *(b + 268 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 51) +
                one_over_two_q * *(b + 203 * OS1_S1 + 30);
            *(b + 203 * OS1_S1 + 80) =
                prefactor_z * *(b + 203 * OS1_S1 + 52) -
                p_over_q * *(b + 268 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 31);
            *(b + 203 * OS1_S1 + 81) =
                prefactor_y * *(b + 203 * OS1_S1 + 54) -
                p_over_q * *(b + 267 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 54) +
                one_over_two_q * *(b + 203 * OS1_S1 + 34);
            *(b + 203 * OS1_S1 + 82) =
                prefactor_y * *(b + 203 * OS1_S1 + 55) -
                p_over_q * *(b + 267 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 55);
            *(b + 203 * OS1_S1 + 83) =
                prefactor_z * *(b + 203 * OS1_S1 + 55) -
                p_over_q * *(b + 268 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 203 * OS1_S1 + 34);
            *(b + 204 * OS1_S1 + 56) =
                prefactor_x * *(b + 204 * OS1_S1 + 35) -
                p_over_q * *(b + 259 * OS1_S1 + 35) +
                one_over_two_q * *(b + 159 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 204 * OS1_S1 + 20);
            *(b + 204 * OS1_S1 + 57) =
                prefactor_y * *(b + 204 * OS1_S1 + 35) -
                p_over_q * *(b + 268 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 35);
            *(b + 204 * OS1_S1 + 58) =
                prefactor_z * *(b + 204 * OS1_S1 + 35) -
                p_over_q * *(b + 269 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 35);
            *(b + 204 * OS1_S1 + 59) =
                prefactor_y * *(b + 204 * OS1_S1 + 36) -
                p_over_q * *(b + 268 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 36) +
                one_over_two_q * *(b + 204 * OS1_S1 + 20);
            *(b + 204 * OS1_S1 + 60) =
                prefactor_z * *(b + 204 * OS1_S1 + 36) -
                p_over_q * *(b + 269 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 36);
            *(b + 204 * OS1_S1 + 61) =
                prefactor_z * *(b + 204 * OS1_S1 + 37) -
                p_over_q * *(b + 269 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 37) +
                one_over_two_q * *(b + 204 * OS1_S1 + 20);
            *(b + 204 * OS1_S1 + 62) =
                prefactor_x * *(b + 204 * OS1_S1 + 41) -
                p_over_q * *(b + 259 * OS1_S1 + 41) +
                one_over_two_q * *(b + 159 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 26);
            *(b + 204 * OS1_S1 + 63) =
                prefactor_z * *(b + 204 * OS1_S1 + 38) -
                p_over_q * *(b + 269 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 38);
            *(b + 204 * OS1_S1 + 64) =
                prefactor_y * *(b + 204 * OS1_S1 + 40) -
                p_over_q * *(b + 268 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 40);
            *(b + 204 * OS1_S1 + 65) =
                prefactor_x * *(b + 204 * OS1_S1 + 44) -
                p_over_q * *(b + 259 * OS1_S1 + 44) +
                one_over_two_q * *(b + 159 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 29);
            *(b + 204 * OS1_S1 + 66) =
                prefactor_x * *(b + 204 * OS1_S1 + 45) -
                p_over_q * *(b + 259 * OS1_S1 + 45) +
                one_over_two_q * *(b + 159 * OS1_S1 + 45) +
                one_over_two_q * *(b + 204 * OS1_S1 + 30);
            *(b + 204 * OS1_S1 + 67) =
                prefactor_z * *(b + 204 * OS1_S1 + 41) -
                p_over_q * *(b + 269 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 41);
            *(b + 204 * OS1_S1 + 68) =
                prefactor_x * *(b + 204 * OS1_S1 + 47) -
                p_over_q * *(b + 259 * OS1_S1 + 47) +
                one_over_two_q * *(b + 159 * OS1_S1 + 47) +
                one_over_two_q * *(b + 204 * OS1_S1 + 32);
            *(b + 204 * OS1_S1 + 69) =
                prefactor_y * *(b + 204 * OS1_S1 + 44) -
                p_over_q * *(b + 268 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 44);
            *(b + 204 * OS1_S1 + 70) =
                prefactor_x * *(b + 204 * OS1_S1 + 49) -
                p_over_q * *(b + 259 * OS1_S1 + 49) +
                one_over_two_q * *(b + 159 * OS1_S1 + 49) +
                one_over_two_q * *(b + 204 * OS1_S1 + 34);
            *(b + 204 * OS1_S1 + 71) =
                prefactor_x * *(b + 204 * OS1_S1 + 50) -
                p_over_q * *(b + 259 * OS1_S1 + 50) +
                one_over_two_q * *(b + 159 * OS1_S1 + 50);
            *(b + 204 * OS1_S1 + 72) =
                prefactor_x * *(b + 204 * OS1_S1 + 51) -
                p_over_q * *(b + 259 * OS1_S1 + 51) +
                one_over_two_q * *(b + 159 * OS1_S1 + 51);
            *(b + 204 * OS1_S1 + 73) =
                prefactor_x * *(b + 204 * OS1_S1 + 52) -
                p_over_q * *(b + 259 * OS1_S1 + 52) +
                one_over_two_q * *(b + 159 * OS1_S1 + 52);
            *(b + 204 * OS1_S1 + 74) =
                prefactor_x * *(b + 204 * OS1_S1 + 53) -
                p_over_q * *(b + 259 * OS1_S1 + 53) +
                one_over_two_q * *(b + 159 * OS1_S1 + 53);
            *(b + 204 * OS1_S1 + 75) =
                prefactor_x * *(b + 204 * OS1_S1 + 54) -
                p_over_q * *(b + 259 * OS1_S1 + 54) +
                one_over_two_q * *(b + 159 * OS1_S1 + 54);
            *(b + 204 * OS1_S1 + 76) =
                prefactor_x * *(b + 204 * OS1_S1 + 55) -
                p_over_q * *(b + 259 * OS1_S1 + 55) +
                one_over_two_q * *(b + 159 * OS1_S1 + 55);
            *(b + 204 * OS1_S1 + 77) =
                prefactor_y * *(b + 204 * OS1_S1 + 50) -
                p_over_q * *(b + 268 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 204 * OS1_S1 + 30);
            *(b + 204 * OS1_S1 + 78) =
                prefactor_z * *(b + 204 * OS1_S1 + 50) -
                p_over_q * *(b + 269 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 50);
            *(b + 204 * OS1_S1 + 79) =
                prefactor_z * *(b + 204 * OS1_S1 + 51) -
                p_over_q * *(b + 269 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 51) +
                one_over_two_q * *(b + 204 * OS1_S1 + 30);
            *(b + 204 * OS1_S1 + 80) =
                prefactor_z * *(b + 204 * OS1_S1 + 52) -
                p_over_q * *(b + 269 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 31);
            *(b + 204 * OS1_S1 + 81) =
                prefactor_y * *(b + 204 * OS1_S1 + 54) -
                p_over_q * *(b + 268 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 54) +
                one_over_two_q * *(b + 204 * OS1_S1 + 34);
            *(b + 204 * OS1_S1 + 82) =
                prefactor_y * *(b + 204 * OS1_S1 + 55) -
                p_over_q * *(b + 268 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 55);
            *(b + 204 * OS1_S1 + 83) =
                prefactor_z * *(b + 204 * OS1_S1 + 55) -
                p_over_q * *(b + 269 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 204 * OS1_S1 + 34);
            *(b + 205 * OS1_S1 + 56) =
                prefactor_x * *(b + 205 * OS1_S1 + 35) -
                p_over_q * *(b + 260 * OS1_S1 + 35) +
                one_over_two_q * *(b + 160 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 20);
            *(b + 205 * OS1_S1 + 57) =
                prefactor_y * *(b + 205 * OS1_S1 + 35) -
                p_over_q * *(b + 269 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 35);
            *(b + 205 * OS1_S1 + 58) =
                prefactor_z * *(b + 205 * OS1_S1 + 35) -
                p_over_q * *(b + 270 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 35);
            *(b + 205 * OS1_S1 + 59) =
                prefactor_y * *(b + 205 * OS1_S1 + 36) -
                p_over_q * *(b + 269 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 36) +
                one_over_two_q * *(b + 205 * OS1_S1 + 20);
            *(b + 205 * OS1_S1 + 60) =
                prefactor_z * *(b + 205 * OS1_S1 + 36) -
                p_over_q * *(b + 270 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 36);
            *(b + 205 * OS1_S1 + 61) =
                prefactor_z * *(b + 205 * OS1_S1 + 37) -
                p_over_q * *(b + 270 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 37) +
                one_over_two_q * *(b + 205 * OS1_S1 + 20);
            *(b + 205 * OS1_S1 + 62) =
                prefactor_x * *(b + 205 * OS1_S1 + 41) -
                p_over_q * *(b + 260 * OS1_S1 + 41) +
                one_over_two_q * *(b + 160 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 26);
            *(b + 205 * OS1_S1 + 63) =
                prefactor_z * *(b + 205 * OS1_S1 + 38) -
                p_over_q * *(b + 270 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 38);
            *(b + 205 * OS1_S1 + 64) =
                prefactor_y * *(b + 205 * OS1_S1 + 40) -
                p_over_q * *(b + 269 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 40);
            *(b + 205 * OS1_S1 + 65) =
                prefactor_x * *(b + 205 * OS1_S1 + 44) -
                p_over_q * *(b + 260 * OS1_S1 + 44) +
                one_over_two_q * *(b + 160 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 29);
            *(b + 205 * OS1_S1 + 66) =
                prefactor_x * *(b + 205 * OS1_S1 + 45) -
                p_over_q * *(b + 260 * OS1_S1 + 45) +
                one_over_two_q * *(b + 160 * OS1_S1 + 45) +
                one_over_two_q * *(b + 205 * OS1_S1 + 30);
            *(b + 205 * OS1_S1 + 67) =
                prefactor_z * *(b + 205 * OS1_S1 + 41) -
                p_over_q * *(b + 270 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 41);
            *(b + 205 * OS1_S1 + 68) =
                prefactor_x * *(b + 205 * OS1_S1 + 47) -
                p_over_q * *(b + 260 * OS1_S1 + 47) +
                one_over_two_q * *(b + 160 * OS1_S1 + 47) +
                one_over_two_q * *(b + 205 * OS1_S1 + 32);
            *(b + 205 * OS1_S1 + 69) =
                prefactor_y * *(b + 205 * OS1_S1 + 44) -
                p_over_q * *(b + 269 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 44);
            *(b + 205 * OS1_S1 + 70) =
                prefactor_x * *(b + 205 * OS1_S1 + 49) -
                p_over_q * *(b + 260 * OS1_S1 + 49) +
                one_over_two_q * *(b + 160 * OS1_S1 + 49) +
                one_over_two_q * *(b + 205 * OS1_S1 + 34);
            *(b + 205 * OS1_S1 + 71) =
                prefactor_x * *(b + 205 * OS1_S1 + 50) -
                p_over_q * *(b + 260 * OS1_S1 + 50) +
                one_over_two_q * *(b + 160 * OS1_S1 + 50);
            *(b + 205 * OS1_S1 + 72) =
                prefactor_x * *(b + 205 * OS1_S1 + 51) -
                p_over_q * *(b + 260 * OS1_S1 + 51) +
                one_over_two_q * *(b + 160 * OS1_S1 + 51);
            *(b + 205 * OS1_S1 + 73) =
                prefactor_x * *(b + 205 * OS1_S1 + 52) -
                p_over_q * *(b + 260 * OS1_S1 + 52) +
                one_over_two_q * *(b + 160 * OS1_S1 + 52);
            *(b + 205 * OS1_S1 + 74) =
                prefactor_x * *(b + 205 * OS1_S1 + 53) -
                p_over_q * *(b + 260 * OS1_S1 + 53) +
                one_over_two_q * *(b + 160 * OS1_S1 + 53);
            *(b + 205 * OS1_S1 + 75) =
                prefactor_x * *(b + 205 * OS1_S1 + 54) -
                p_over_q * *(b + 260 * OS1_S1 + 54) +
                one_over_two_q * *(b + 160 * OS1_S1 + 54);
            *(b + 205 * OS1_S1 + 76) =
                prefactor_x * *(b + 205 * OS1_S1 + 55) -
                p_over_q * *(b + 260 * OS1_S1 + 55) +
                one_over_two_q * *(b + 160 * OS1_S1 + 55);
            *(b + 205 * OS1_S1 + 77) =
                prefactor_y * *(b + 205 * OS1_S1 + 50) -
                p_over_q * *(b + 269 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 30);
            *(b + 205 * OS1_S1 + 78) =
                prefactor_z * *(b + 205 * OS1_S1 + 50) -
                p_over_q * *(b + 270 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 50);
            *(b + 205 * OS1_S1 + 79) =
                prefactor_z * *(b + 205 * OS1_S1 + 51) -
                p_over_q * *(b + 270 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 51) +
                one_over_two_q * *(b + 205 * OS1_S1 + 30);
            *(b + 205 * OS1_S1 + 80) =
                prefactor_z * *(b + 205 * OS1_S1 + 52) -
                p_over_q * *(b + 270 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 31);
            *(b + 205 * OS1_S1 + 81) =
                prefactor_y * *(b + 205 * OS1_S1 + 54) -
                p_over_q * *(b + 269 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 54) +
                one_over_two_q * *(b + 205 * OS1_S1 + 34);
            *(b + 205 * OS1_S1 + 82) =
                prefactor_y * *(b + 205 * OS1_S1 + 55) -
                p_over_q * *(b + 269 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 55);
            *(b + 205 * OS1_S1 + 83) =
                prefactor_z * *(b + 205 * OS1_S1 + 55) -
                p_over_q * *(b + 270 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 34);
            *(b + 206 * OS1_S1 + 56) =
                prefactor_x * *(b + 206 * OS1_S1 + 35) -
                p_over_q * *(b + 261 * OS1_S1 + 35) +
                one_over_two_q * *(b + 161 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 206 * OS1_S1 + 20);
            *(b + 206 * OS1_S1 + 57) =
                prefactor_y * *(b + 206 * OS1_S1 + 35) -
                p_over_q * *(b + 270 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 35);
            *(b + 206 * OS1_S1 + 58) =
                prefactor_z * *(b + 206 * OS1_S1 + 35) -
                p_over_q * *(b + 271 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 35);
            *(b + 206 * OS1_S1 + 59) =
                prefactor_y * *(b + 206 * OS1_S1 + 36) -
                p_over_q * *(b + 270 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 36) +
                one_over_two_q * *(b + 206 * OS1_S1 + 20);
            *(b + 206 * OS1_S1 + 60) =
                prefactor_y * *(b + 206 * OS1_S1 + 37) -
                p_over_q * *(b + 270 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 37);
            *(b + 206 * OS1_S1 + 61) =
                prefactor_z * *(b + 206 * OS1_S1 + 37) -
                p_over_q * *(b + 271 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 37) +
                one_over_two_q * *(b + 206 * OS1_S1 + 20);
            *(b + 206 * OS1_S1 + 62) =
                prefactor_x * *(b + 206 * OS1_S1 + 41) -
                p_over_q * *(b + 261 * OS1_S1 + 41) +
                one_over_two_q * *(b + 161 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 26);
            *(b + 206 * OS1_S1 + 63) =
                prefactor_z * *(b + 206 * OS1_S1 + 38) -
                p_over_q * *(b + 271 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 38);
            *(b + 206 * OS1_S1 + 64) =
                prefactor_y * *(b + 206 * OS1_S1 + 40) -
                p_over_q * *(b + 270 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 40);
            *(b + 206 * OS1_S1 + 65) =
                prefactor_x * *(b + 206 * OS1_S1 + 44) -
                p_over_q * *(b + 261 * OS1_S1 + 44) +
                one_over_two_q * *(b + 161 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 29);
            *(b + 206 * OS1_S1 + 66) =
                prefactor_x * *(b + 206 * OS1_S1 + 45) -
                p_over_q * *(b + 261 * OS1_S1 + 45) +
                one_over_two_q * *(b + 161 * OS1_S1 + 45) +
                one_over_two_q * *(b + 206 * OS1_S1 + 30);
            *(b + 206 * OS1_S1 + 67) =
                prefactor_z * *(b + 206 * OS1_S1 + 41) -
                p_over_q * *(b + 271 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 41);
            *(b + 206 * OS1_S1 + 68) =
                prefactor_x * *(b + 206 * OS1_S1 + 47) -
                p_over_q * *(b + 261 * OS1_S1 + 47) +
                one_over_two_q * *(b + 161 * OS1_S1 + 47) +
                one_over_two_q * *(b + 206 * OS1_S1 + 32);
            *(b + 206 * OS1_S1 + 69) =
                prefactor_y * *(b + 206 * OS1_S1 + 44) -
                p_over_q * *(b + 270 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 44);
            *(b + 206 * OS1_S1 + 70) =
                prefactor_x * *(b + 206 * OS1_S1 + 49) -
                p_over_q * *(b + 261 * OS1_S1 + 49) +
                one_over_two_q * *(b + 161 * OS1_S1 + 49) +
                one_over_two_q * *(b + 206 * OS1_S1 + 34);
            *(b + 206 * OS1_S1 + 71) =
                prefactor_x * *(b + 206 * OS1_S1 + 50) -
                p_over_q * *(b + 261 * OS1_S1 + 50) +
                one_over_two_q * *(b + 161 * OS1_S1 + 50);
            *(b + 206 * OS1_S1 + 72) =
                prefactor_x * *(b + 206 * OS1_S1 + 51) -
                p_over_q * *(b + 261 * OS1_S1 + 51) +
                one_over_two_q * *(b + 161 * OS1_S1 + 51);
            *(b + 206 * OS1_S1 + 73) =
                prefactor_x * *(b + 206 * OS1_S1 + 52) -
                p_over_q * *(b + 261 * OS1_S1 + 52) +
                one_over_two_q * *(b + 161 * OS1_S1 + 52);
            *(b + 206 * OS1_S1 + 74) =
                prefactor_x * *(b + 206 * OS1_S1 + 53) -
                p_over_q * *(b + 261 * OS1_S1 + 53) +
                one_over_two_q * *(b + 161 * OS1_S1 + 53);
            *(b + 206 * OS1_S1 + 75) =
                prefactor_x * *(b + 206 * OS1_S1 + 54) -
                p_over_q * *(b + 261 * OS1_S1 + 54) +
                one_over_two_q * *(b + 161 * OS1_S1 + 54);
            *(b + 206 * OS1_S1 + 76) =
                prefactor_x * *(b + 206 * OS1_S1 + 55) -
                p_over_q * *(b + 261 * OS1_S1 + 55) +
                one_over_two_q * *(b + 161 * OS1_S1 + 55);
            *(b + 206 * OS1_S1 + 77) =
                prefactor_y * *(b + 206 * OS1_S1 + 50) -
                p_over_q * *(b + 270 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 206 * OS1_S1 + 30);
            *(b + 206 * OS1_S1 + 78) =
                prefactor_z * *(b + 206 * OS1_S1 + 50) -
                p_over_q * *(b + 271 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 50);
            *(b + 206 * OS1_S1 + 79) =
                prefactor_z * *(b + 206 * OS1_S1 + 51) -
                p_over_q * *(b + 271 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 51) +
                one_over_two_q * *(b + 206 * OS1_S1 + 30);
            *(b + 206 * OS1_S1 + 80) =
                prefactor_y * *(b + 206 * OS1_S1 + 53) -
                p_over_q * *(b + 270 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 33);
            *(b + 206 * OS1_S1 + 81) =
                prefactor_y * *(b + 206 * OS1_S1 + 54) -
                p_over_q * *(b + 270 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 54) +
                one_over_two_q * *(b + 206 * OS1_S1 + 34);
            *(b + 206 * OS1_S1 + 82) =
                prefactor_y * *(b + 206 * OS1_S1 + 55) -
                p_over_q * *(b + 270 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 55);
            *(b + 206 * OS1_S1 + 83) =
                prefactor_z * *(b + 206 * OS1_S1 + 55) -
                p_over_q * *(b + 271 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 206 * OS1_S1 + 34);
            *(b + 207 * OS1_S1 + 56) =
                prefactor_x * *(b + 207 * OS1_S1 + 35) -
                p_over_q * *(b + 262 * OS1_S1 + 35) +
                one_over_two_q * *(b + 162 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 207 * OS1_S1 + 20);
            *(b + 207 * OS1_S1 + 57) =
                prefactor_y * *(b + 207 * OS1_S1 + 35) -
                p_over_q * *(b + 271 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 35);
            *(b + 207 * OS1_S1 + 58) =
                prefactor_z * *(b + 207 * OS1_S1 + 35) -
                p_over_q * *(b + 272 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 35);
            *(b + 207 * OS1_S1 + 59) =
                prefactor_y * *(b + 207 * OS1_S1 + 36) -
                p_over_q * *(b + 271 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 36) +
                one_over_two_q * *(b + 207 * OS1_S1 + 20);
            *(b + 207 * OS1_S1 + 60) =
                prefactor_y * *(b + 207 * OS1_S1 + 37) -
                p_over_q * *(b + 271 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 37);
            *(b + 207 * OS1_S1 + 61) =
                prefactor_z * *(b + 207 * OS1_S1 + 37) -
                p_over_q * *(b + 272 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 37) +
                one_over_two_q * *(b + 207 * OS1_S1 + 20);
            *(b + 207 * OS1_S1 + 62) =
                prefactor_x * *(b + 207 * OS1_S1 + 41) -
                p_over_q * *(b + 262 * OS1_S1 + 41) +
                one_over_two_q * *(b + 162 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 26);
            *(b + 207 * OS1_S1 + 63) =
                prefactor_z * *(b + 207 * OS1_S1 + 38) -
                p_over_q * *(b + 272 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 38);
            *(b + 207 * OS1_S1 + 64) =
                prefactor_y * *(b + 207 * OS1_S1 + 40) -
                p_over_q * *(b + 271 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 40);
            *(b + 207 * OS1_S1 + 65) =
                prefactor_x * *(b + 207 * OS1_S1 + 44) -
                p_over_q * *(b + 262 * OS1_S1 + 44) +
                one_over_two_q * *(b + 162 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 29);
            *(b + 207 * OS1_S1 + 66) =
                prefactor_x * *(b + 207 * OS1_S1 + 45) -
                p_over_q * *(b + 262 * OS1_S1 + 45) +
                one_over_two_q * *(b + 162 * OS1_S1 + 45) +
                one_over_two_q * *(b + 207 * OS1_S1 + 30);
            *(b + 207 * OS1_S1 + 67) =
                prefactor_z * *(b + 207 * OS1_S1 + 41) -
                p_over_q * *(b + 272 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 41);
            *(b + 207 * OS1_S1 + 68) =
                prefactor_x * *(b + 207 * OS1_S1 + 47) -
                p_over_q * *(b + 262 * OS1_S1 + 47) +
                one_over_two_q * *(b + 162 * OS1_S1 + 47) +
                one_over_two_q * *(b + 207 * OS1_S1 + 32);
            *(b + 207 * OS1_S1 + 69) =
                prefactor_y * *(b + 207 * OS1_S1 + 44) -
                p_over_q * *(b + 271 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 44);
            *(b + 207 * OS1_S1 + 70) =
                prefactor_x * *(b + 207 * OS1_S1 + 49) -
                p_over_q * *(b + 262 * OS1_S1 + 49) +
                one_over_two_q * *(b + 162 * OS1_S1 + 49) +
                one_over_two_q * *(b + 207 * OS1_S1 + 34);
            *(b + 207 * OS1_S1 + 71) =
                prefactor_x * *(b + 207 * OS1_S1 + 50) -
                p_over_q * *(b + 262 * OS1_S1 + 50) +
                one_over_two_q * *(b + 162 * OS1_S1 + 50);
            *(b + 207 * OS1_S1 + 72) =
                prefactor_x * *(b + 207 * OS1_S1 + 51) -
                p_over_q * *(b + 262 * OS1_S1 + 51) +
                one_over_two_q * *(b + 162 * OS1_S1 + 51);
            *(b + 207 * OS1_S1 + 73) =
                prefactor_x * *(b + 207 * OS1_S1 + 52) -
                p_over_q * *(b + 262 * OS1_S1 + 52) +
                one_over_two_q * *(b + 162 * OS1_S1 + 52);
            *(b + 207 * OS1_S1 + 74) =
                prefactor_x * *(b + 207 * OS1_S1 + 53) -
                p_over_q * *(b + 262 * OS1_S1 + 53) +
                one_over_two_q * *(b + 162 * OS1_S1 + 53);
            *(b + 207 * OS1_S1 + 75) =
                prefactor_x * *(b + 207 * OS1_S1 + 54) -
                p_over_q * *(b + 262 * OS1_S1 + 54) +
                one_over_two_q * *(b + 162 * OS1_S1 + 54);
            *(b + 207 * OS1_S1 + 76) =
                prefactor_x * *(b + 207 * OS1_S1 + 55) -
                p_over_q * *(b + 262 * OS1_S1 + 55) +
                one_over_two_q * *(b + 162 * OS1_S1 + 55);
            *(b + 207 * OS1_S1 + 77) =
                prefactor_y * *(b + 207 * OS1_S1 + 50) -
                p_over_q * *(b + 271 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 207 * OS1_S1 + 30);
            *(b + 207 * OS1_S1 + 78) =
                prefactor_z * *(b + 207 * OS1_S1 + 50) -
                p_over_q * *(b + 272 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 50);
            *(b + 207 * OS1_S1 + 79) =
                prefactor_z * *(b + 207 * OS1_S1 + 51) -
                p_over_q * *(b + 272 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 51) +
                one_over_two_q * *(b + 207 * OS1_S1 + 30);
            *(b + 207 * OS1_S1 + 80) =
                prefactor_y * *(b + 207 * OS1_S1 + 53) -
                p_over_q * *(b + 271 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 33);
            *(b + 207 * OS1_S1 + 81) =
                prefactor_y * *(b + 207 * OS1_S1 + 54) -
                p_over_q * *(b + 271 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 54) +
                one_over_two_q * *(b + 207 * OS1_S1 + 34);
            *(b + 207 * OS1_S1 + 82) =
                prefactor_y * *(b + 207 * OS1_S1 + 55) -
                p_over_q * *(b + 271 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 55);
            *(b + 207 * OS1_S1 + 83) =
                prefactor_z * *(b + 207 * OS1_S1 + 55) -
                p_over_q * *(b + 272 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 207 * OS1_S1 + 34);
            *(b + 208 * OS1_S1 + 56) =
                prefactor_x * *(b + 208 * OS1_S1 + 35) -
                p_over_q * *(b + 263 * OS1_S1 + 35) +
                one_over_two_q * *(b + 163 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 208 * OS1_S1 + 20);
            *(b + 208 * OS1_S1 + 57) =
                prefactor_y * *(b + 208 * OS1_S1 + 35) -
                p_over_q * *(b + 272 * OS1_S1 + 35) +
                one_over_two_q * *(b + 155 * OS1_S1 + 35);
            *(b + 208 * OS1_S1 + 58) =
                prefactor_z * *(b + 208 * OS1_S1 + 35) -
                p_over_q * *(b + 273 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 35);
            *(b + 208 * OS1_S1 + 59) =
                prefactor_y * *(b + 208 * OS1_S1 + 36) -
                p_over_q * *(b + 272 * OS1_S1 + 36) +
                one_over_two_q * *(b + 155 * OS1_S1 + 36) +
                one_over_two_q * *(b + 208 * OS1_S1 + 20);
            *(b + 208 * OS1_S1 + 60) =
                prefactor_y * *(b + 208 * OS1_S1 + 37) -
                p_over_q * *(b + 272 * OS1_S1 + 37) +
                one_over_two_q * *(b + 155 * OS1_S1 + 37);
            *(b + 208 * OS1_S1 + 61) =
                prefactor_z * *(b + 208 * OS1_S1 + 37) -
                p_over_q * *(b + 273 * OS1_S1 + 37) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 37) +
                one_over_two_q * *(b + 208 * OS1_S1 + 20);
            *(b + 208 * OS1_S1 + 62) =
                prefactor_y * *(b + 208 * OS1_S1 + 38) -
                p_over_q * *(b + 272 * OS1_S1 + 38) +
                one_over_two_q * *(b + 155 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 21);
            *(b + 208 * OS1_S1 + 63) =
                prefactor_z * *(b + 208 * OS1_S1 + 38) -
                p_over_q * *(b + 273 * OS1_S1 + 38) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 38);
            *(b + 208 * OS1_S1 + 64) =
                prefactor_y * *(b + 208 * OS1_S1 + 40) -
                p_over_q * *(b + 272 * OS1_S1 + 40) +
                one_over_two_q * *(b + 155 * OS1_S1 + 40);
            *(b + 208 * OS1_S1 + 65) =
                prefactor_x * *(b + 208 * OS1_S1 + 44) -
                p_over_q * *(b + 263 * OS1_S1 + 44) +
                one_over_two_q * *(b + 163 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 29);
            *(b + 208 * OS1_S1 + 66) =
                prefactor_x * *(b + 208 * OS1_S1 + 45) -
                p_over_q * *(b + 263 * OS1_S1 + 45) +
                one_over_two_q * *(b + 163 * OS1_S1 + 45) +
                one_over_two_q * *(b + 208 * OS1_S1 + 30);
            *(b + 208 * OS1_S1 + 67) =
                prefactor_z * *(b + 208 * OS1_S1 + 41) -
                p_over_q * *(b + 273 * OS1_S1 + 41) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 41);
            *(b + 208 * OS1_S1 + 68) =
                prefactor_y * *(b + 208 * OS1_S1 + 43) -
                p_over_q * *(b + 272 * OS1_S1 + 43) +
                one_over_two_q * *(b + 155 * OS1_S1 + 43) +
                one_over_two_q * *(b + 208 * OS1_S1 + 25);
            *(b + 208 * OS1_S1 + 69) =
                prefactor_y * *(b + 208 * OS1_S1 + 44) -
                p_over_q * *(b + 272 * OS1_S1 + 44) +
                one_over_two_q * *(b + 155 * OS1_S1 + 44);
            *(b + 208 * OS1_S1 + 70) =
                prefactor_x * *(b + 208 * OS1_S1 + 49) -
                p_over_q * *(b + 263 * OS1_S1 + 49) +
                one_over_two_q * *(b + 163 * OS1_S1 + 49) +
                one_over_two_q * *(b + 208 * OS1_S1 + 34);
            *(b + 208 * OS1_S1 + 71) =
                prefactor_x * *(b + 208 * OS1_S1 + 50) -
                p_over_q * *(b + 263 * OS1_S1 + 50) +
                one_over_two_q * *(b + 163 * OS1_S1 + 50);
            *(b + 208 * OS1_S1 + 72) =
                prefactor_x * *(b + 208 * OS1_S1 + 51) -
                p_over_q * *(b + 263 * OS1_S1 + 51) +
                one_over_two_q * *(b + 163 * OS1_S1 + 51);
            *(b + 208 * OS1_S1 + 73) =
                prefactor_x * *(b + 208 * OS1_S1 + 52) -
                p_over_q * *(b + 263 * OS1_S1 + 52) +
                one_over_two_q * *(b + 163 * OS1_S1 + 52);
            *(b + 208 * OS1_S1 + 74) =
                prefactor_x * *(b + 208 * OS1_S1 + 53) -
                p_over_q * *(b + 263 * OS1_S1 + 53) +
                one_over_two_q * *(b + 163 * OS1_S1 + 53);
            *(b + 208 * OS1_S1 + 75) =
                prefactor_y * *(b + 208 * OS1_S1 + 49) -
                p_over_q * *(b + 272 * OS1_S1 + 49) +
                one_over_two_q * *(b + 155 * OS1_S1 + 49);
            *(b + 208 * OS1_S1 + 76) =
                prefactor_x * *(b + 208 * OS1_S1 + 55) -
                p_over_q * *(b + 263 * OS1_S1 + 55) +
                one_over_two_q * *(b + 163 * OS1_S1 + 55);
            *(b + 208 * OS1_S1 + 77) =
                prefactor_y * *(b + 208 * OS1_S1 + 50) -
                p_over_q * *(b + 272 * OS1_S1 + 50) +
                one_over_two_q * *(b + 155 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 208 * OS1_S1 + 30);
            *(b + 208 * OS1_S1 + 78) =
                prefactor_z * *(b + 208 * OS1_S1 + 50) -
                p_over_q * *(b + 273 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 50);
            *(b + 208 * OS1_S1 + 79) =
                prefactor_z * *(b + 208 * OS1_S1 + 51) -
                p_over_q * *(b + 273 * OS1_S1 + 51) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 51) +
                one_over_two_q * *(b + 208 * OS1_S1 + 30);
            *(b + 208 * OS1_S1 + 80) =
                prefactor_y * *(b + 208 * OS1_S1 + 53) -
                p_over_q * *(b + 272 * OS1_S1 + 53) +
                one_over_two_q * *(b + 155 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 33);
            *(b + 208 * OS1_S1 + 81) =
                prefactor_y * *(b + 208 * OS1_S1 + 54) -
                p_over_q * *(b + 272 * OS1_S1 + 54) +
                one_over_two_q * *(b + 155 * OS1_S1 + 54) +
                one_over_two_q * *(b + 208 * OS1_S1 + 34);
            *(b + 208 * OS1_S1 + 82) =
                prefactor_y * *(b + 208 * OS1_S1 + 55) -
                p_over_q * *(b + 272 * OS1_S1 + 55) +
                one_over_two_q * *(b + 155 * OS1_S1 + 55);
            *(b + 208 * OS1_S1 + 83) =
                prefactor_z * *(b + 208 * OS1_S1 + 55) -
                p_over_q * *(b + 273 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 208 * OS1_S1 + 34);
            *(b + 209 * OS1_S1 + 56) =
                prefactor_x * *(b + 209 * OS1_S1 + 35) -
                p_over_q * *(b + 264 * OS1_S1 + 35) +
                one_over_two_q * *(b + 164 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 209 * OS1_S1 + 20);
            *(b + 209 * OS1_S1 + 57) = prefactor_y * *(b + 209 * OS1_S1 + 35) -
                                       p_over_q * *(b + 273 * OS1_S1 + 35);
            *(b + 209 * OS1_S1 + 58) =
                prefactor_z * *(b + 209 * OS1_S1 + 35) -
                p_over_q * *(b + 274 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 35);
            *(b + 209 * OS1_S1 + 59) =
                prefactor_y * *(b + 209 * OS1_S1 + 36) -
                p_over_q * *(b + 273 * OS1_S1 + 36) +
                one_over_two_q * *(b + 209 * OS1_S1 + 20);
            *(b + 209 * OS1_S1 + 60) = prefactor_y * *(b + 209 * OS1_S1 + 37) -
                                       p_over_q * *(b + 273 * OS1_S1 + 37);
            *(b + 209 * OS1_S1 + 61) =
                prefactor_z * *(b + 209 * OS1_S1 + 37) -
                p_over_q * *(b + 274 * OS1_S1 + 37) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 37) +
                one_over_two_q * *(b + 209 * OS1_S1 + 20);
            *(b + 209 * OS1_S1 + 62) =
                prefactor_y * *(b + 209 * OS1_S1 + 38) -
                p_over_q * *(b + 273 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 21);
            *(b + 209 * OS1_S1 + 63) =
                prefactor_z * *(b + 209 * OS1_S1 + 38) -
                p_over_q * *(b + 274 * OS1_S1 + 38) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 38);
            *(b + 209 * OS1_S1 + 64) = prefactor_y * *(b + 209 * OS1_S1 + 40) -
                                       p_over_q * *(b + 273 * OS1_S1 + 40);
            *(b + 209 * OS1_S1 + 65) =
                prefactor_x * *(b + 209 * OS1_S1 + 44) -
                p_over_q * *(b + 264 * OS1_S1 + 44) +
                one_over_two_q * *(b + 164 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 29);
            *(b + 209 * OS1_S1 + 66) =
                prefactor_x * *(b + 209 * OS1_S1 + 45) -
                p_over_q * *(b + 264 * OS1_S1 + 45) +
                one_over_two_q * *(b + 164 * OS1_S1 + 45) +
                one_over_two_q * *(b + 209 * OS1_S1 + 30);
            *(b + 209 * OS1_S1 + 67) =
                prefactor_z * *(b + 209 * OS1_S1 + 41) -
                p_over_q * *(b + 274 * OS1_S1 + 41) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 41);
            *(b + 209 * OS1_S1 + 68) =
                prefactor_y * *(b + 209 * OS1_S1 + 43) -
                p_over_q * *(b + 273 * OS1_S1 + 43) +
                one_over_two_q * *(b + 209 * OS1_S1 + 25);
            *(b + 209 * OS1_S1 + 69) = prefactor_y * *(b + 209 * OS1_S1 + 44) -
                                       p_over_q * *(b + 273 * OS1_S1 + 44);
            *(b + 209 * OS1_S1 + 70) =
                prefactor_x * *(b + 209 * OS1_S1 + 49) -
                p_over_q * *(b + 264 * OS1_S1 + 49) +
                one_over_two_q * *(b + 164 * OS1_S1 + 49) +
                one_over_two_q * *(b + 209 * OS1_S1 + 34);
            *(b + 209 * OS1_S1 + 71) =
                prefactor_x * *(b + 209 * OS1_S1 + 50) -
                p_over_q * *(b + 264 * OS1_S1 + 50) +
                one_over_two_q * *(b + 164 * OS1_S1 + 50);
            *(b + 209 * OS1_S1 + 72) =
                prefactor_x * *(b + 209 * OS1_S1 + 51) -
                p_over_q * *(b + 264 * OS1_S1 + 51) +
                one_over_two_q * *(b + 164 * OS1_S1 + 51);
            *(b + 209 * OS1_S1 + 73) =
                prefactor_x * *(b + 209 * OS1_S1 + 52) -
                p_over_q * *(b + 264 * OS1_S1 + 52) +
                one_over_two_q * *(b + 164 * OS1_S1 + 52);
            *(b + 209 * OS1_S1 + 74) =
                prefactor_x * *(b + 209 * OS1_S1 + 53) -
                p_over_q * *(b + 264 * OS1_S1 + 53) +
                one_over_two_q * *(b + 164 * OS1_S1 + 53);
            *(b + 209 * OS1_S1 + 75) = prefactor_y * *(b + 209 * OS1_S1 + 49) -
                                       p_over_q * *(b + 273 * OS1_S1 + 49);
            *(b + 209 * OS1_S1 + 76) =
                prefactor_x * *(b + 209 * OS1_S1 + 55) -
                p_over_q * *(b + 264 * OS1_S1 + 55) +
                one_over_two_q * *(b + 164 * OS1_S1 + 55);
            *(b + 209 * OS1_S1 + 77) =
                prefactor_y * *(b + 209 * OS1_S1 + 50) -
                p_over_q * *(b + 273 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 209 * OS1_S1 + 30);
            *(b + 209 * OS1_S1 + 78) =
                prefactor_z * *(b + 209 * OS1_S1 + 50) -
                p_over_q * *(b + 274 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 50);
            *(b + 209 * OS1_S1 + 79) =
                prefactor_z * *(b + 209 * OS1_S1 + 51) -
                p_over_q * *(b + 274 * OS1_S1 + 51) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 51) +
                one_over_two_q * *(b + 209 * OS1_S1 + 30);
            *(b + 209 * OS1_S1 + 80) =
                prefactor_y * *(b + 209 * OS1_S1 + 53) -
                p_over_q * *(b + 273 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 33);
            *(b + 209 * OS1_S1 + 81) =
                prefactor_y * *(b + 209 * OS1_S1 + 54) -
                p_over_q * *(b + 273 * OS1_S1 + 54) +
                one_over_two_q * *(b + 209 * OS1_S1 + 34);
            *(b + 209 * OS1_S1 + 82) = prefactor_y * *(b + 209 * OS1_S1 + 55) -
                                       p_over_q * *(b + 273 * OS1_S1 + 55);
            *(b + 209 * OS1_S1 + 83) =
                prefactor_z * *(b + 209 * OS1_S1 + 55) -
                p_over_q * *(b + 274 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 209 * OS1_S1 + 34);
            *(b + 210 * OS1_S1 + 56) =
                prefactor_x * *(b + 210 * OS1_S1 + 35) -
                p_over_q * *(b + 265 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 210 * OS1_S1 + 20);
            *(b + 210 * OS1_S1 + 57) =
                prefactor_y * *(b + 210 * OS1_S1 + 35) -
                p_over_q * *(b + 275 * OS1_S1 + 35) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 35);
            *(b + 210 * OS1_S1 + 58) = prefactor_z * *(b + 210 * OS1_S1 + 35) -
                                       p_over_q * *(b + 276 * OS1_S1 + 35);
            *(b + 210 * OS1_S1 + 59) =
                prefactor_y * *(b + 210 * OS1_S1 + 36) -
                p_over_q * *(b + 275 * OS1_S1 + 36) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 36) +
                one_over_two_q * *(b + 210 * OS1_S1 + 20);
            *(b + 210 * OS1_S1 + 60) = prefactor_z * *(b + 210 * OS1_S1 + 36) -
                                       p_over_q * *(b + 276 * OS1_S1 + 36);
            *(b + 210 * OS1_S1 + 61) =
                prefactor_z * *(b + 210 * OS1_S1 + 37) -
                p_over_q * *(b + 276 * OS1_S1 + 37) +
                one_over_two_q * *(b + 210 * OS1_S1 + 20);
            *(b + 210 * OS1_S1 + 62) =
                prefactor_x * *(b + 210 * OS1_S1 + 41) -
                p_over_q * *(b + 265 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 210 * OS1_S1 + 26);
            *(b + 210 * OS1_S1 + 63) = prefactor_z * *(b + 210 * OS1_S1 + 38) -
                                       p_over_q * *(b + 276 * OS1_S1 + 38);
            *(b + 210 * OS1_S1 + 64) =
                prefactor_y * *(b + 210 * OS1_S1 + 40) -
                p_over_q * *(b + 275 * OS1_S1 + 40) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 40);
            *(b + 210 * OS1_S1 + 65) =
                prefactor_z * *(b + 210 * OS1_S1 + 40) -
                p_over_q * *(b + 276 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 210 * OS1_S1 + 22);
            *(b + 210 * OS1_S1 + 66) =
                prefactor_x * *(b + 210 * OS1_S1 + 45) -
                p_over_q * *(b + 265 * OS1_S1 + 45) +
                one_over_two_q * *(b + 210 * OS1_S1 + 30);
            *(b + 210 * OS1_S1 + 67) = prefactor_z * *(b + 210 * OS1_S1 + 41) -
                                       p_over_q * *(b + 276 * OS1_S1 + 41);
            *(b + 210 * OS1_S1 + 68) =
                prefactor_z * *(b + 210 * OS1_S1 + 42) -
                p_over_q * *(b + 276 * OS1_S1 + 42) +
                one_over_two_q * *(b + 210 * OS1_S1 + 23);
            *(b + 210 * OS1_S1 + 69) =
                prefactor_y * *(b + 210 * OS1_S1 + 44) -
                p_over_q * *(b + 275 * OS1_S1 + 44) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 44);
            *(b + 210 * OS1_S1 + 70) =
                prefactor_x * *(b + 210 * OS1_S1 + 49) -
                p_over_q * *(b + 265 * OS1_S1 + 49) +
                one_over_two_q * *(b + 210 * OS1_S1 + 34);
            *(b + 210 * OS1_S1 + 71) = prefactor_x * *(b + 210 * OS1_S1 + 50) -
                                       p_over_q * *(b + 265 * OS1_S1 + 50);
            *(b + 210 * OS1_S1 + 72) = prefactor_z * *(b + 210 * OS1_S1 + 45) -
                                       p_over_q * *(b + 276 * OS1_S1 + 45);
            *(b + 210 * OS1_S1 + 73) = prefactor_x * *(b + 210 * OS1_S1 + 52) -
                                       p_over_q * *(b + 265 * OS1_S1 + 52);
            *(b + 210 * OS1_S1 + 74) = prefactor_x * *(b + 210 * OS1_S1 + 53) -
                                       p_over_q * *(b + 265 * OS1_S1 + 53);
            *(b + 210 * OS1_S1 + 75) = prefactor_x * *(b + 210 * OS1_S1 + 54) -
                                       p_over_q * *(b + 265 * OS1_S1 + 54);
            *(b + 210 * OS1_S1 + 76) = prefactor_x * *(b + 210 * OS1_S1 + 55) -
                                       p_over_q * *(b + 265 * OS1_S1 + 55);
            *(b + 210 * OS1_S1 + 77) =
                prefactor_y * *(b + 210 * OS1_S1 + 50) -
                p_over_q * *(b + 275 * OS1_S1 + 50) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 210 * OS1_S1 + 30);
            *(b + 210 * OS1_S1 + 78) = prefactor_z * *(b + 210 * OS1_S1 + 50) -
                                       p_over_q * *(b + 276 * OS1_S1 + 50);
            *(b + 210 * OS1_S1 + 79) =
                prefactor_z * *(b + 210 * OS1_S1 + 51) -
                p_over_q * *(b + 276 * OS1_S1 + 51) +
                one_over_two_q * *(b + 210 * OS1_S1 + 30);
            *(b + 210 * OS1_S1 + 80) =
                prefactor_z * *(b + 210 * OS1_S1 + 52) -
                p_over_q * *(b + 276 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 210 * OS1_S1 + 31);
            *(b + 210 * OS1_S1 + 81) =
                prefactor_y * *(b + 210 * OS1_S1 + 54) -
                p_over_q * *(b + 275 * OS1_S1 + 54) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 54) +
                one_over_two_q * *(b + 210 * OS1_S1 + 34);
            *(b + 210 * OS1_S1 + 82) =
                prefactor_y * *(b + 210 * OS1_S1 + 55) -
                p_over_q * *(b + 275 * OS1_S1 + 55) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 55);
            *(b + 210 * OS1_S1 + 83) =
                prefactor_z * *(b + 210 * OS1_S1 + 55) -
                p_over_q * *(b + 276 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 210 * OS1_S1 + 34);
            *(b + 211 * OS1_S1 + 56) =
                prefactor_x * *(b + 211 * OS1_S1 + 35) -
                p_over_q * *(b + 266 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 211 * OS1_S1 + 20);
            *(b + 211 * OS1_S1 + 57) =
                prefactor_y * *(b + 211 * OS1_S1 + 35) -
                p_over_q * *(b + 276 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 35);
            *(b + 211 * OS1_S1 + 58) =
                prefactor_z * *(b + 211 * OS1_S1 + 35) -
                p_over_q * *(b + 277 * OS1_S1 + 35) +
                one_over_two_q * *(b + 156 * OS1_S1 + 35);
            *(b + 211 * OS1_S1 + 59) =
                prefactor_y * *(b + 211 * OS1_S1 + 36) -
                p_over_q * *(b + 276 * OS1_S1 + 36) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 36) +
                one_over_two_q * *(b + 211 * OS1_S1 + 20);
            *(b + 211 * OS1_S1 + 60) =
                prefactor_z * *(b + 211 * OS1_S1 + 36) -
                p_over_q * *(b + 277 * OS1_S1 + 36) +
                one_over_two_q * *(b + 156 * OS1_S1 + 36);
            *(b + 211 * OS1_S1 + 61) =
                prefactor_z * *(b + 211 * OS1_S1 + 37) -
                p_over_q * *(b + 277 * OS1_S1 + 37) +
                one_over_two_q * *(b + 156 * OS1_S1 + 37) +
                one_over_two_q * *(b + 211 * OS1_S1 + 20);
            *(b + 211 * OS1_S1 + 62) =
                prefactor_x * *(b + 211 * OS1_S1 + 41) -
                p_over_q * *(b + 266 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 26);
            *(b + 211 * OS1_S1 + 63) =
                prefactor_z * *(b + 211 * OS1_S1 + 38) -
                p_over_q * *(b + 277 * OS1_S1 + 38) +
                one_over_two_q * *(b + 156 * OS1_S1 + 38);
            *(b + 211 * OS1_S1 + 64) =
                prefactor_y * *(b + 211 * OS1_S1 + 40) -
                p_over_q * *(b + 276 * OS1_S1 + 40) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 40);
            *(b + 211 * OS1_S1 + 65) =
                prefactor_x * *(b + 211 * OS1_S1 + 44) -
                p_over_q * *(b + 266 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 29);
            *(b + 211 * OS1_S1 + 66) =
                prefactor_x * *(b + 211 * OS1_S1 + 45) -
                p_over_q * *(b + 266 * OS1_S1 + 45) +
                one_over_two_q * *(b + 211 * OS1_S1 + 30);
            *(b + 211 * OS1_S1 + 67) =
                prefactor_z * *(b + 211 * OS1_S1 + 41) -
                p_over_q * *(b + 277 * OS1_S1 + 41) +
                one_over_two_q * *(b + 156 * OS1_S1 + 41);
            *(b + 211 * OS1_S1 + 68) =
                prefactor_x * *(b + 211 * OS1_S1 + 47) -
                p_over_q * *(b + 266 * OS1_S1 + 47) +
                one_over_two_q * *(b + 211 * OS1_S1 + 32);
            *(b + 211 * OS1_S1 + 69) =
                prefactor_y * *(b + 211 * OS1_S1 + 44) -
                p_over_q * *(b + 276 * OS1_S1 + 44) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 44);
            *(b + 211 * OS1_S1 + 70) =
                prefactor_x * *(b + 211 * OS1_S1 + 49) -
                p_over_q * *(b + 266 * OS1_S1 + 49) +
                one_over_two_q * *(b + 211 * OS1_S1 + 34);
            *(b + 211 * OS1_S1 + 71) = prefactor_x * *(b + 211 * OS1_S1 + 50) -
                                       p_over_q * *(b + 266 * OS1_S1 + 50);
            *(b + 211 * OS1_S1 + 72) = prefactor_x * *(b + 211 * OS1_S1 + 51) -
                                       p_over_q * *(b + 266 * OS1_S1 + 51);
            *(b + 211 * OS1_S1 + 73) = prefactor_x * *(b + 211 * OS1_S1 + 52) -
                                       p_over_q * *(b + 266 * OS1_S1 + 52);
            *(b + 211 * OS1_S1 + 74) = prefactor_x * *(b + 211 * OS1_S1 + 53) -
                                       p_over_q * *(b + 266 * OS1_S1 + 53);
            *(b + 211 * OS1_S1 + 75) = prefactor_x * *(b + 211 * OS1_S1 + 54) -
                                       p_over_q * *(b + 266 * OS1_S1 + 54);
            *(b + 211 * OS1_S1 + 76) = prefactor_x * *(b + 211 * OS1_S1 + 55) -
                                       p_over_q * *(b + 266 * OS1_S1 + 55);
            *(b + 211 * OS1_S1 + 77) =
                prefactor_y * *(b + 211 * OS1_S1 + 50) -
                p_over_q * *(b + 276 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 211 * OS1_S1 + 30);
            *(b + 211 * OS1_S1 + 78) =
                prefactor_z * *(b + 211 * OS1_S1 + 50) -
                p_over_q * *(b + 277 * OS1_S1 + 50) +
                one_over_two_q * *(b + 156 * OS1_S1 + 50);
            *(b + 211 * OS1_S1 + 79) =
                prefactor_z * *(b + 211 * OS1_S1 + 51) -
                p_over_q * *(b + 277 * OS1_S1 + 51) +
                one_over_two_q * *(b + 156 * OS1_S1 + 51) +
                one_over_two_q * *(b + 211 * OS1_S1 + 30);
            *(b + 211 * OS1_S1 + 80) =
                prefactor_z * *(b + 211 * OS1_S1 + 52) -
                p_over_q * *(b + 277 * OS1_S1 + 52) +
                one_over_two_q * *(b + 156 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 31);
            *(b + 211 * OS1_S1 + 81) =
                prefactor_y * *(b + 211 * OS1_S1 + 54) -
                p_over_q * *(b + 276 * OS1_S1 + 54) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 54) +
                one_over_two_q * *(b + 211 * OS1_S1 + 34);
            *(b + 211 * OS1_S1 + 82) =
                prefactor_y * *(b + 211 * OS1_S1 + 55) -
                p_over_q * *(b + 276 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 55);
            *(b + 211 * OS1_S1 + 83) =
                prefactor_z * *(b + 211 * OS1_S1 + 55) -
                p_over_q * *(b + 277 * OS1_S1 + 55) +
                one_over_two_q * *(b + 156 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 211 * OS1_S1 + 34);
            *(b + 212 * OS1_S1 + 56) =
                prefactor_x * *(b + 212 * OS1_S1 + 35) -
                p_over_q * *(b + 267 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 212 * OS1_S1 + 20);
            *(b + 212 * OS1_S1 + 57) =
                prefactor_y * *(b + 212 * OS1_S1 + 35) -
                p_over_q * *(b + 277 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 35);
            *(b + 212 * OS1_S1 + 58) =
                prefactor_z * *(b + 212 * OS1_S1 + 35) -
                p_over_q * *(b + 278 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 35);
            *(b + 212 * OS1_S1 + 59) =
                prefactor_y * *(b + 212 * OS1_S1 + 36) -
                p_over_q * *(b + 277 * OS1_S1 + 36) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 36) +
                one_over_two_q * *(b + 212 * OS1_S1 + 20);
            *(b + 212 * OS1_S1 + 60) =
                prefactor_z * *(b + 212 * OS1_S1 + 36) -
                p_over_q * *(b + 278 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 36);
            *(b + 212 * OS1_S1 + 61) =
                prefactor_z * *(b + 212 * OS1_S1 + 37) -
                p_over_q * *(b + 278 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 37) +
                one_over_two_q * *(b + 212 * OS1_S1 + 20);
            *(b + 212 * OS1_S1 + 62) =
                prefactor_x * *(b + 212 * OS1_S1 + 41) -
                p_over_q * *(b + 267 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 212 * OS1_S1 + 26);
            *(b + 212 * OS1_S1 + 63) =
                prefactor_z * *(b + 212 * OS1_S1 + 38) -
                p_over_q * *(b + 278 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 38);
            *(b + 212 * OS1_S1 + 64) =
                prefactor_y * *(b + 212 * OS1_S1 + 40) -
                p_over_q * *(b + 277 * OS1_S1 + 40) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 40);
            *(b + 212 * OS1_S1 + 65) =
                prefactor_x * *(b + 212 * OS1_S1 + 44) -
                p_over_q * *(b + 267 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 212 * OS1_S1 + 29);
            *(b + 212 * OS1_S1 + 66) =
                prefactor_x * *(b + 212 * OS1_S1 + 45) -
                p_over_q * *(b + 267 * OS1_S1 + 45) +
                one_over_two_q * *(b + 212 * OS1_S1 + 30);
            *(b + 212 * OS1_S1 + 67) =
                prefactor_z * *(b + 212 * OS1_S1 + 41) -
                p_over_q * *(b + 278 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 41);
            *(b + 212 * OS1_S1 + 68) =
                prefactor_x * *(b + 212 * OS1_S1 + 47) -
                p_over_q * *(b + 267 * OS1_S1 + 47) +
                one_over_two_q * *(b + 212 * OS1_S1 + 32);
            *(b + 212 * OS1_S1 + 69) =
                prefactor_y * *(b + 212 * OS1_S1 + 44) -
                p_over_q * *(b + 277 * OS1_S1 + 44) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 44);
            *(b + 212 * OS1_S1 + 70) =
                prefactor_x * *(b + 212 * OS1_S1 + 49) -
                p_over_q * *(b + 267 * OS1_S1 + 49) +
                one_over_two_q * *(b + 212 * OS1_S1 + 34);
            *(b + 212 * OS1_S1 + 71) = prefactor_x * *(b + 212 * OS1_S1 + 50) -
                                       p_over_q * *(b + 267 * OS1_S1 + 50);
            *(b + 212 * OS1_S1 + 72) = prefactor_x * *(b + 212 * OS1_S1 + 51) -
                                       p_over_q * *(b + 267 * OS1_S1 + 51);
            *(b + 212 * OS1_S1 + 73) = prefactor_x * *(b + 212 * OS1_S1 + 52) -
                                       p_over_q * *(b + 267 * OS1_S1 + 52);
            *(b + 212 * OS1_S1 + 74) = prefactor_x * *(b + 212 * OS1_S1 + 53) -
                                       p_over_q * *(b + 267 * OS1_S1 + 53);
            *(b + 212 * OS1_S1 + 75) = prefactor_x * *(b + 212 * OS1_S1 + 54) -
                                       p_over_q * *(b + 267 * OS1_S1 + 54);
            *(b + 212 * OS1_S1 + 76) = prefactor_x * *(b + 212 * OS1_S1 + 55) -
                                       p_over_q * *(b + 267 * OS1_S1 + 55);
            *(b + 212 * OS1_S1 + 77) =
                prefactor_y * *(b + 212 * OS1_S1 + 50) -
                p_over_q * *(b + 277 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 212 * OS1_S1 + 30);
            *(b + 212 * OS1_S1 + 78) =
                prefactor_z * *(b + 212 * OS1_S1 + 50) -
                p_over_q * *(b + 278 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 50);
            *(b + 212 * OS1_S1 + 79) =
                prefactor_z * *(b + 212 * OS1_S1 + 51) -
                p_over_q * *(b + 278 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 51) +
                one_over_two_q * *(b + 212 * OS1_S1 + 30);
            *(b + 212 * OS1_S1 + 80) =
                prefactor_z * *(b + 212 * OS1_S1 + 52) -
                p_over_q * *(b + 278 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 212 * OS1_S1 + 31);
            *(b + 212 * OS1_S1 + 81) =
                prefactor_y * *(b + 212 * OS1_S1 + 54) -
                p_over_q * *(b + 277 * OS1_S1 + 54) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 54) +
                one_over_two_q * *(b + 212 * OS1_S1 + 34);
            *(b + 212 * OS1_S1 + 82) =
                prefactor_y * *(b + 212 * OS1_S1 + 55) -
                p_over_q * *(b + 277 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 55);
            *(b + 212 * OS1_S1 + 83) =
                prefactor_z * *(b + 212 * OS1_S1 + 55) -
                p_over_q * *(b + 278 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 212 * OS1_S1 + 34);
            *(b + 213 * OS1_S1 + 56) =
                prefactor_x * *(b + 213 * OS1_S1 + 35) -
                p_over_q * *(b + 268 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 213 * OS1_S1 + 20);
            *(b + 213 * OS1_S1 + 57) =
                prefactor_y * *(b + 213 * OS1_S1 + 35) -
                p_over_q * *(b + 278 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 35);
            *(b + 213 * OS1_S1 + 58) =
                prefactor_z * *(b + 213 * OS1_S1 + 35) -
                p_over_q * *(b + 279 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 35);
            *(b + 213 * OS1_S1 + 59) =
                prefactor_y * *(b + 213 * OS1_S1 + 36) -
                p_over_q * *(b + 278 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 36) +
                one_over_two_q * *(b + 213 * OS1_S1 + 20);
            *(b + 213 * OS1_S1 + 60) =
                prefactor_z * *(b + 213 * OS1_S1 + 36) -
                p_over_q * *(b + 279 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 36);
            *(b + 213 * OS1_S1 + 61) =
                prefactor_z * *(b + 213 * OS1_S1 + 37) -
                p_over_q * *(b + 279 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 37) +
                one_over_two_q * *(b + 213 * OS1_S1 + 20);
            *(b + 213 * OS1_S1 + 62) =
                prefactor_x * *(b + 213 * OS1_S1 + 41) -
                p_over_q * *(b + 268 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 213 * OS1_S1 + 26);
            *(b + 213 * OS1_S1 + 63) =
                prefactor_z * *(b + 213 * OS1_S1 + 38) -
                p_over_q * *(b + 279 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 38);
            *(b + 213 * OS1_S1 + 64) =
                prefactor_y * *(b + 213 * OS1_S1 + 40) -
                p_over_q * *(b + 278 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 40);
            *(b + 213 * OS1_S1 + 65) =
                prefactor_x * *(b + 213 * OS1_S1 + 44) -
                p_over_q * *(b + 268 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 213 * OS1_S1 + 29);
            *(b + 213 * OS1_S1 + 66) =
                prefactor_x * *(b + 213 * OS1_S1 + 45) -
                p_over_q * *(b + 268 * OS1_S1 + 45) +
                one_over_two_q * *(b + 213 * OS1_S1 + 30);
            *(b + 213 * OS1_S1 + 67) =
                prefactor_z * *(b + 213 * OS1_S1 + 41) -
                p_over_q * *(b + 279 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 41);
            *(b + 213 * OS1_S1 + 68) =
                prefactor_x * *(b + 213 * OS1_S1 + 47) -
                p_over_q * *(b + 268 * OS1_S1 + 47) +
                one_over_two_q * *(b + 213 * OS1_S1 + 32);
            *(b + 213 * OS1_S1 + 69) =
                prefactor_y * *(b + 213 * OS1_S1 + 44) -
                p_over_q * *(b + 278 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 44);
            *(b + 213 * OS1_S1 + 70) =
                prefactor_x * *(b + 213 * OS1_S1 + 49) -
                p_over_q * *(b + 268 * OS1_S1 + 49) +
                one_over_two_q * *(b + 213 * OS1_S1 + 34);
            *(b + 213 * OS1_S1 + 71) = prefactor_x * *(b + 213 * OS1_S1 + 50) -
                                       p_over_q * *(b + 268 * OS1_S1 + 50);
            *(b + 213 * OS1_S1 + 72) = prefactor_x * *(b + 213 * OS1_S1 + 51) -
                                       p_over_q * *(b + 268 * OS1_S1 + 51);
            *(b + 213 * OS1_S1 + 73) = prefactor_x * *(b + 213 * OS1_S1 + 52) -
                                       p_over_q * *(b + 268 * OS1_S1 + 52);
            *(b + 213 * OS1_S1 + 74) = prefactor_x * *(b + 213 * OS1_S1 + 53) -
                                       p_over_q * *(b + 268 * OS1_S1 + 53);
            *(b + 213 * OS1_S1 + 75) = prefactor_x * *(b + 213 * OS1_S1 + 54) -
                                       p_over_q * *(b + 268 * OS1_S1 + 54);
            *(b + 213 * OS1_S1 + 76) = prefactor_x * *(b + 213 * OS1_S1 + 55) -
                                       p_over_q * *(b + 268 * OS1_S1 + 55);
            *(b + 213 * OS1_S1 + 77) =
                prefactor_y * *(b + 213 * OS1_S1 + 50) -
                p_over_q * *(b + 278 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 213 * OS1_S1 + 30);
            *(b + 213 * OS1_S1 + 78) =
                prefactor_z * *(b + 213 * OS1_S1 + 50) -
                p_over_q * *(b + 279 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 50);
            *(b + 213 * OS1_S1 + 79) =
                prefactor_z * *(b + 213 * OS1_S1 + 51) -
                p_over_q * *(b + 279 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 51) +
                one_over_two_q * *(b + 213 * OS1_S1 + 30);
            *(b + 213 * OS1_S1 + 80) =
                prefactor_z * *(b + 213 * OS1_S1 + 52) -
                p_over_q * *(b + 279 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 213 * OS1_S1 + 31);
            *(b + 213 * OS1_S1 + 81) =
                prefactor_y * *(b + 213 * OS1_S1 + 54) -
                p_over_q * *(b + 278 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 54) +
                one_over_two_q * *(b + 213 * OS1_S1 + 34);
            *(b + 213 * OS1_S1 + 82) =
                prefactor_y * *(b + 213 * OS1_S1 + 55) -
                p_over_q * *(b + 278 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 55);
            *(b + 213 * OS1_S1 + 83) =
                prefactor_z * *(b + 213 * OS1_S1 + 55) -
                p_over_q * *(b + 279 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 213 * OS1_S1 + 34);
            *(b + 214 * OS1_S1 + 56) =
                prefactor_x * *(b + 214 * OS1_S1 + 35) -
                p_over_q * *(b + 269 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 20);
            *(b + 214 * OS1_S1 + 57) =
                prefactor_y * *(b + 214 * OS1_S1 + 35) -
                p_over_q * *(b + 279 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 35);
            *(b + 214 * OS1_S1 + 58) =
                prefactor_z * *(b + 214 * OS1_S1 + 35) -
                p_over_q * *(b + 280 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 35);
            *(b + 214 * OS1_S1 + 59) =
                prefactor_y * *(b + 214 * OS1_S1 + 36) -
                p_over_q * *(b + 279 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 36) +
                one_over_two_q * *(b + 214 * OS1_S1 + 20);
            *(b + 214 * OS1_S1 + 60) =
                prefactor_z * *(b + 214 * OS1_S1 + 36) -
                p_over_q * *(b + 280 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 36);
            *(b + 214 * OS1_S1 + 61) =
                prefactor_z * *(b + 214 * OS1_S1 + 37) -
                p_over_q * *(b + 280 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 37) +
                one_over_two_q * *(b + 214 * OS1_S1 + 20);
            *(b + 214 * OS1_S1 + 62) =
                prefactor_x * *(b + 214 * OS1_S1 + 41) -
                p_over_q * *(b + 269 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 214 * OS1_S1 + 26);
            *(b + 214 * OS1_S1 + 63) =
                prefactor_z * *(b + 214 * OS1_S1 + 38) -
                p_over_q * *(b + 280 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 38);
            *(b + 214 * OS1_S1 + 64) =
                prefactor_y * *(b + 214 * OS1_S1 + 40) -
                p_over_q * *(b + 279 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 40);
            *(b + 214 * OS1_S1 + 65) =
                prefactor_x * *(b + 214 * OS1_S1 + 44) -
                p_over_q * *(b + 269 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 214 * OS1_S1 + 29);
            *(b + 214 * OS1_S1 + 66) =
                prefactor_x * *(b + 214 * OS1_S1 + 45) -
                p_over_q * *(b + 269 * OS1_S1 + 45) +
                one_over_two_q * *(b + 214 * OS1_S1 + 30);
            *(b + 214 * OS1_S1 + 67) =
                prefactor_z * *(b + 214 * OS1_S1 + 41) -
                p_over_q * *(b + 280 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 41);
            *(b + 214 * OS1_S1 + 68) =
                prefactor_x * *(b + 214 * OS1_S1 + 47) -
                p_over_q * *(b + 269 * OS1_S1 + 47) +
                one_over_two_q * *(b + 214 * OS1_S1 + 32);
            *(b + 214 * OS1_S1 + 69) =
                prefactor_y * *(b + 214 * OS1_S1 + 44) -
                p_over_q * *(b + 279 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 44);
            *(b + 214 * OS1_S1 + 70) =
                prefactor_x * *(b + 214 * OS1_S1 + 49) -
                p_over_q * *(b + 269 * OS1_S1 + 49) +
                one_over_two_q * *(b + 214 * OS1_S1 + 34);
            *(b + 214 * OS1_S1 + 71) = prefactor_x * *(b + 214 * OS1_S1 + 50) -
                                       p_over_q * *(b + 269 * OS1_S1 + 50);
            *(b + 214 * OS1_S1 + 72) = prefactor_x * *(b + 214 * OS1_S1 + 51) -
                                       p_over_q * *(b + 269 * OS1_S1 + 51);
            *(b + 214 * OS1_S1 + 73) = prefactor_x * *(b + 214 * OS1_S1 + 52) -
                                       p_over_q * *(b + 269 * OS1_S1 + 52);
            *(b + 214 * OS1_S1 + 74) = prefactor_x * *(b + 214 * OS1_S1 + 53) -
                                       p_over_q * *(b + 269 * OS1_S1 + 53);
            *(b + 214 * OS1_S1 + 75) = prefactor_x * *(b + 214 * OS1_S1 + 54) -
                                       p_over_q * *(b + 269 * OS1_S1 + 54);
            *(b + 214 * OS1_S1 + 76) = prefactor_x * *(b + 214 * OS1_S1 + 55) -
                                       p_over_q * *(b + 269 * OS1_S1 + 55);
            *(b + 214 * OS1_S1 + 77) =
                prefactor_y * *(b + 214 * OS1_S1 + 50) -
                p_over_q * *(b + 279 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 30);
            *(b + 214 * OS1_S1 + 78) =
                prefactor_z * *(b + 214 * OS1_S1 + 50) -
                p_over_q * *(b + 280 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 50);
            *(b + 214 * OS1_S1 + 79) =
                prefactor_z * *(b + 214 * OS1_S1 + 51) -
                p_over_q * *(b + 280 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 51) +
                one_over_two_q * *(b + 214 * OS1_S1 + 30);
            *(b + 214 * OS1_S1 + 80) =
                prefactor_z * *(b + 214 * OS1_S1 + 52) -
                p_over_q * *(b + 280 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 214 * OS1_S1 + 31);
            *(b + 214 * OS1_S1 + 81) =
                prefactor_y * *(b + 214 * OS1_S1 + 54) -
                p_over_q * *(b + 279 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 54) +
                one_over_two_q * *(b + 214 * OS1_S1 + 34);
            *(b + 214 * OS1_S1 + 82) =
                prefactor_y * *(b + 214 * OS1_S1 + 55) -
                p_over_q * *(b + 279 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 55);
            *(b + 214 * OS1_S1 + 83) =
                prefactor_z * *(b + 214 * OS1_S1 + 55) -
                p_over_q * *(b + 280 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 34);
            *(b + 215 * OS1_S1 + 56) =
                prefactor_x * *(b + 215 * OS1_S1 + 35) -
                p_over_q * *(b + 270 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 20);
            *(b + 215 * OS1_S1 + 57) =
                prefactor_y * *(b + 215 * OS1_S1 + 35) -
                p_over_q * *(b + 280 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 35);
            *(b + 215 * OS1_S1 + 58) =
                prefactor_z * *(b + 215 * OS1_S1 + 35) -
                p_over_q * *(b + 281 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 35);
            *(b + 215 * OS1_S1 + 59) =
                prefactor_y * *(b + 215 * OS1_S1 + 36) -
                p_over_q * *(b + 280 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 36) +
                one_over_two_q * *(b + 215 * OS1_S1 + 20);
            *(b + 215 * OS1_S1 + 60) =
                prefactor_y * *(b + 215 * OS1_S1 + 37) -
                p_over_q * *(b + 280 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 37);
            *(b + 215 * OS1_S1 + 61) =
                prefactor_z * *(b + 215 * OS1_S1 + 37) -
                p_over_q * *(b + 281 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 37) +
                one_over_two_q * *(b + 215 * OS1_S1 + 20);
            *(b + 215 * OS1_S1 + 62) =
                prefactor_x * *(b + 215 * OS1_S1 + 41) -
                p_over_q * *(b + 270 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 215 * OS1_S1 + 26);
            *(b + 215 * OS1_S1 + 63) =
                prefactor_z * *(b + 215 * OS1_S1 + 38) -
                p_over_q * *(b + 281 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 38);
            *(b + 215 * OS1_S1 + 64) =
                prefactor_y * *(b + 215 * OS1_S1 + 40) -
                p_over_q * *(b + 280 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 40);
            *(b + 215 * OS1_S1 + 65) =
                prefactor_x * *(b + 215 * OS1_S1 + 44) -
                p_over_q * *(b + 270 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 215 * OS1_S1 + 29);
            *(b + 215 * OS1_S1 + 66) =
                prefactor_x * *(b + 215 * OS1_S1 + 45) -
                p_over_q * *(b + 270 * OS1_S1 + 45) +
                one_over_two_q * *(b + 215 * OS1_S1 + 30);
            *(b + 215 * OS1_S1 + 67) =
                prefactor_z * *(b + 215 * OS1_S1 + 41) -
                p_over_q * *(b + 281 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 41);
            *(b + 215 * OS1_S1 + 68) =
                prefactor_x * *(b + 215 * OS1_S1 + 47) -
                p_over_q * *(b + 270 * OS1_S1 + 47) +
                one_over_two_q * *(b + 215 * OS1_S1 + 32);
            *(b + 215 * OS1_S1 + 69) =
                prefactor_y * *(b + 215 * OS1_S1 + 44) -
                p_over_q * *(b + 280 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 44);
            *(b + 215 * OS1_S1 + 70) =
                prefactor_x * *(b + 215 * OS1_S1 + 49) -
                p_over_q * *(b + 270 * OS1_S1 + 49) +
                one_over_two_q * *(b + 215 * OS1_S1 + 34);
            *(b + 215 * OS1_S1 + 71) = prefactor_x * *(b + 215 * OS1_S1 + 50) -
                                       p_over_q * *(b + 270 * OS1_S1 + 50);
            *(b + 215 * OS1_S1 + 72) = prefactor_x * *(b + 215 * OS1_S1 + 51) -
                                       p_over_q * *(b + 270 * OS1_S1 + 51);
            *(b + 215 * OS1_S1 + 73) = prefactor_x * *(b + 215 * OS1_S1 + 52) -
                                       p_over_q * *(b + 270 * OS1_S1 + 52);
            *(b + 215 * OS1_S1 + 74) = prefactor_x * *(b + 215 * OS1_S1 + 53) -
                                       p_over_q * *(b + 270 * OS1_S1 + 53);
            *(b + 215 * OS1_S1 + 75) = prefactor_x * *(b + 215 * OS1_S1 + 54) -
                                       p_over_q * *(b + 270 * OS1_S1 + 54);
            *(b + 215 * OS1_S1 + 76) = prefactor_x * *(b + 215 * OS1_S1 + 55) -
                                       p_over_q * *(b + 270 * OS1_S1 + 55);
            *(b + 215 * OS1_S1 + 77) =
                prefactor_y * *(b + 215 * OS1_S1 + 50) -
                p_over_q * *(b + 280 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 30);
            *(b + 215 * OS1_S1 + 78) =
                prefactor_z * *(b + 215 * OS1_S1 + 50) -
                p_over_q * *(b + 281 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 50);
            *(b + 215 * OS1_S1 + 79) =
                prefactor_z * *(b + 215 * OS1_S1 + 51) -
                p_over_q * *(b + 281 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 51) +
                one_over_two_q * *(b + 215 * OS1_S1 + 30);
            *(b + 215 * OS1_S1 + 80) =
                prefactor_y * *(b + 215 * OS1_S1 + 53) -
                p_over_q * *(b + 280 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 215 * OS1_S1 + 33);
            *(b + 215 * OS1_S1 + 81) =
                prefactor_y * *(b + 215 * OS1_S1 + 54) -
                p_over_q * *(b + 280 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 54) +
                one_over_two_q * *(b + 215 * OS1_S1 + 34);
            *(b + 215 * OS1_S1 + 82) =
                prefactor_y * *(b + 215 * OS1_S1 + 55) -
                p_over_q * *(b + 280 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 55);
            *(b + 215 * OS1_S1 + 83) =
                prefactor_z * *(b + 215 * OS1_S1 + 55) -
                p_over_q * *(b + 281 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 34);
            *(b + 216 * OS1_S1 + 56) =
                prefactor_x * *(b + 216 * OS1_S1 + 35) -
                p_over_q * *(b + 271 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 216 * OS1_S1 + 20);
            *(b + 216 * OS1_S1 + 57) =
                prefactor_y * *(b + 216 * OS1_S1 + 35) -
                p_over_q * *(b + 281 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 35);
            *(b + 216 * OS1_S1 + 58) =
                prefactor_z * *(b + 216 * OS1_S1 + 35) -
                p_over_q * *(b + 282 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 35);
            *(b + 216 * OS1_S1 + 59) =
                prefactor_y * *(b + 216 * OS1_S1 + 36) -
                p_over_q * *(b + 281 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 36) +
                one_over_two_q * *(b + 216 * OS1_S1 + 20);
            *(b + 216 * OS1_S1 + 60) =
                prefactor_y * *(b + 216 * OS1_S1 + 37) -
                p_over_q * *(b + 281 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 37);
            *(b + 216 * OS1_S1 + 61) =
                prefactor_z * *(b + 216 * OS1_S1 + 37) -
                p_over_q * *(b + 282 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 37) +
                one_over_two_q * *(b + 216 * OS1_S1 + 20);
            *(b + 216 * OS1_S1 + 62) =
                prefactor_x * *(b + 216 * OS1_S1 + 41) -
                p_over_q * *(b + 271 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 216 * OS1_S1 + 26);
            *(b + 216 * OS1_S1 + 63) =
                prefactor_z * *(b + 216 * OS1_S1 + 38) -
                p_over_q * *(b + 282 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 38);
            *(b + 216 * OS1_S1 + 64) =
                prefactor_y * *(b + 216 * OS1_S1 + 40) -
                p_over_q * *(b + 281 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 40);
            *(b + 216 * OS1_S1 + 65) =
                prefactor_x * *(b + 216 * OS1_S1 + 44) -
                p_over_q * *(b + 271 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 216 * OS1_S1 + 29);
            *(b + 216 * OS1_S1 + 66) =
                prefactor_x * *(b + 216 * OS1_S1 + 45) -
                p_over_q * *(b + 271 * OS1_S1 + 45) +
                one_over_two_q * *(b + 216 * OS1_S1 + 30);
            *(b + 216 * OS1_S1 + 67) =
                prefactor_z * *(b + 216 * OS1_S1 + 41) -
                p_over_q * *(b + 282 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 41);
            *(b + 216 * OS1_S1 + 68) =
                prefactor_x * *(b + 216 * OS1_S1 + 47) -
                p_over_q * *(b + 271 * OS1_S1 + 47) +
                one_over_two_q * *(b + 216 * OS1_S1 + 32);
            *(b + 216 * OS1_S1 + 69) =
                prefactor_y * *(b + 216 * OS1_S1 + 44) -
                p_over_q * *(b + 281 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 44);
            *(b + 216 * OS1_S1 + 70) =
                prefactor_x * *(b + 216 * OS1_S1 + 49) -
                p_over_q * *(b + 271 * OS1_S1 + 49) +
                one_over_two_q * *(b + 216 * OS1_S1 + 34);
            *(b + 216 * OS1_S1 + 71) = prefactor_x * *(b + 216 * OS1_S1 + 50) -
                                       p_over_q * *(b + 271 * OS1_S1 + 50);
            *(b + 216 * OS1_S1 + 72) = prefactor_x * *(b + 216 * OS1_S1 + 51) -
                                       p_over_q * *(b + 271 * OS1_S1 + 51);
            *(b + 216 * OS1_S1 + 73) = prefactor_x * *(b + 216 * OS1_S1 + 52) -
                                       p_over_q * *(b + 271 * OS1_S1 + 52);
            *(b + 216 * OS1_S1 + 74) = prefactor_x * *(b + 216 * OS1_S1 + 53) -
                                       p_over_q * *(b + 271 * OS1_S1 + 53);
            *(b + 216 * OS1_S1 + 75) = prefactor_x * *(b + 216 * OS1_S1 + 54) -
                                       p_over_q * *(b + 271 * OS1_S1 + 54);
            *(b + 216 * OS1_S1 + 76) = prefactor_x * *(b + 216 * OS1_S1 + 55) -
                                       p_over_q * *(b + 271 * OS1_S1 + 55);
            *(b + 216 * OS1_S1 + 77) =
                prefactor_y * *(b + 216 * OS1_S1 + 50) -
                p_over_q * *(b + 281 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 216 * OS1_S1 + 30);
            *(b + 216 * OS1_S1 + 78) =
                prefactor_z * *(b + 216 * OS1_S1 + 50) -
                p_over_q * *(b + 282 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 50);
            *(b + 216 * OS1_S1 + 79) =
                prefactor_z * *(b + 216 * OS1_S1 + 51) -
                p_over_q * *(b + 282 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 51) +
                one_over_two_q * *(b + 216 * OS1_S1 + 30);
            *(b + 216 * OS1_S1 + 80) =
                prefactor_y * *(b + 216 * OS1_S1 + 53) -
                p_over_q * *(b + 281 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 216 * OS1_S1 + 33);
            *(b + 216 * OS1_S1 + 81) =
                prefactor_y * *(b + 216 * OS1_S1 + 54) -
                p_over_q * *(b + 281 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 54) +
                one_over_two_q * *(b + 216 * OS1_S1 + 34);
            *(b + 216 * OS1_S1 + 82) =
                prefactor_y * *(b + 216 * OS1_S1 + 55) -
                p_over_q * *(b + 281 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 55);
            *(b + 216 * OS1_S1 + 83) =
                prefactor_z * *(b + 216 * OS1_S1 + 55) -
                p_over_q * *(b + 282 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 216 * OS1_S1 + 34);
            *(b + 217 * OS1_S1 + 56) =
                prefactor_x * *(b + 217 * OS1_S1 + 35) -
                p_over_q * *(b + 272 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 217 * OS1_S1 + 20);
            *(b + 217 * OS1_S1 + 57) =
                prefactor_y * *(b + 217 * OS1_S1 + 35) -
                p_over_q * *(b + 282 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 35);
            *(b + 217 * OS1_S1 + 58) =
                prefactor_z * *(b + 217 * OS1_S1 + 35) -
                p_over_q * *(b + 283 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 35);
            *(b + 217 * OS1_S1 + 59) =
                prefactor_y * *(b + 217 * OS1_S1 + 36) -
                p_over_q * *(b + 282 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 36) +
                one_over_two_q * *(b + 217 * OS1_S1 + 20);
            *(b + 217 * OS1_S1 + 60) =
                prefactor_y * *(b + 217 * OS1_S1 + 37) -
                p_over_q * *(b + 282 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 37);
            *(b + 217 * OS1_S1 + 61) =
                prefactor_z * *(b + 217 * OS1_S1 + 37) -
                p_over_q * *(b + 283 * OS1_S1 + 37) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 37) +
                one_over_two_q * *(b + 217 * OS1_S1 + 20);
            *(b + 217 * OS1_S1 + 62) =
                prefactor_x * *(b + 217 * OS1_S1 + 41) -
                p_over_q * *(b + 272 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 217 * OS1_S1 + 26);
            *(b + 217 * OS1_S1 + 63) =
                prefactor_z * *(b + 217 * OS1_S1 + 38) -
                p_over_q * *(b + 283 * OS1_S1 + 38) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 38);
            *(b + 217 * OS1_S1 + 64) =
                prefactor_y * *(b + 217 * OS1_S1 + 40) -
                p_over_q * *(b + 282 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 40);
            *(b + 217 * OS1_S1 + 65) =
                prefactor_x * *(b + 217 * OS1_S1 + 44) -
                p_over_q * *(b + 272 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 217 * OS1_S1 + 29);
            *(b + 217 * OS1_S1 + 66) =
                prefactor_x * *(b + 217 * OS1_S1 + 45) -
                p_over_q * *(b + 272 * OS1_S1 + 45) +
                one_over_two_q * *(b + 217 * OS1_S1 + 30);
            *(b + 217 * OS1_S1 + 67) =
                prefactor_z * *(b + 217 * OS1_S1 + 41) -
                p_over_q * *(b + 283 * OS1_S1 + 41) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 41);
            *(b + 217 * OS1_S1 + 68) =
                prefactor_x * *(b + 217 * OS1_S1 + 47) -
                p_over_q * *(b + 272 * OS1_S1 + 47) +
                one_over_two_q * *(b + 217 * OS1_S1 + 32);
            *(b + 217 * OS1_S1 + 69) =
                prefactor_y * *(b + 217 * OS1_S1 + 44) -
                p_over_q * *(b + 282 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 44);
            *(b + 217 * OS1_S1 + 70) =
                prefactor_x * *(b + 217 * OS1_S1 + 49) -
                p_over_q * *(b + 272 * OS1_S1 + 49) +
                one_over_two_q * *(b + 217 * OS1_S1 + 34);
            *(b + 217 * OS1_S1 + 71) = prefactor_x * *(b + 217 * OS1_S1 + 50) -
                                       p_over_q * *(b + 272 * OS1_S1 + 50);
            *(b + 217 * OS1_S1 + 72) = prefactor_x * *(b + 217 * OS1_S1 + 51) -
                                       p_over_q * *(b + 272 * OS1_S1 + 51);
            *(b + 217 * OS1_S1 + 73) = prefactor_x * *(b + 217 * OS1_S1 + 52) -
                                       p_over_q * *(b + 272 * OS1_S1 + 52);
            *(b + 217 * OS1_S1 + 74) = prefactor_x * *(b + 217 * OS1_S1 + 53) -
                                       p_over_q * *(b + 272 * OS1_S1 + 53);
            *(b + 217 * OS1_S1 + 75) = prefactor_x * *(b + 217 * OS1_S1 + 54) -
                                       p_over_q * *(b + 272 * OS1_S1 + 54);
            *(b + 217 * OS1_S1 + 76) = prefactor_x * *(b + 217 * OS1_S1 + 55) -
                                       p_over_q * *(b + 272 * OS1_S1 + 55);
            *(b + 217 * OS1_S1 + 77) =
                prefactor_y * *(b + 217 * OS1_S1 + 50) -
                p_over_q * *(b + 282 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 217 * OS1_S1 + 30);
            *(b + 217 * OS1_S1 + 78) =
                prefactor_z * *(b + 217 * OS1_S1 + 50) -
                p_over_q * *(b + 283 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 50);
            *(b + 217 * OS1_S1 + 79) =
                prefactor_z * *(b + 217 * OS1_S1 + 51) -
                p_over_q * *(b + 283 * OS1_S1 + 51) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 51) +
                one_over_two_q * *(b + 217 * OS1_S1 + 30);
            *(b + 217 * OS1_S1 + 80) =
                prefactor_y * *(b + 217 * OS1_S1 + 53) -
                p_over_q * *(b + 282 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 217 * OS1_S1 + 33);
            *(b + 217 * OS1_S1 + 81) =
                prefactor_y * *(b + 217 * OS1_S1 + 54) -
                p_over_q * *(b + 282 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 54) +
                one_over_two_q * *(b + 217 * OS1_S1 + 34);
            *(b + 217 * OS1_S1 + 82) =
                prefactor_y * *(b + 217 * OS1_S1 + 55) -
                p_over_q * *(b + 282 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 55);
            *(b + 217 * OS1_S1 + 83) =
                prefactor_z * *(b + 217 * OS1_S1 + 55) -
                p_over_q * *(b + 283 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 217 * OS1_S1 + 34);
            *(b + 218 * OS1_S1 + 56) =
                prefactor_x * *(b + 218 * OS1_S1 + 35) -
                p_over_q * *(b + 273 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 218 * OS1_S1 + 20);
            *(b + 218 * OS1_S1 + 57) =
                prefactor_y * *(b + 218 * OS1_S1 + 35) -
                p_over_q * *(b + 283 * OS1_S1 + 35) +
                one_over_two_q * *(b + 164 * OS1_S1 + 35);
            *(b + 218 * OS1_S1 + 58) =
                prefactor_z * *(b + 218 * OS1_S1 + 35) -
                p_over_q * *(b + 284 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 35);
            *(b + 218 * OS1_S1 + 59) =
                prefactor_y * *(b + 218 * OS1_S1 + 36) -
                p_over_q * *(b + 283 * OS1_S1 + 36) +
                one_over_two_q * *(b + 164 * OS1_S1 + 36) +
                one_over_two_q * *(b + 218 * OS1_S1 + 20);
            *(b + 218 * OS1_S1 + 60) =
                prefactor_y * *(b + 218 * OS1_S1 + 37) -
                p_over_q * *(b + 283 * OS1_S1 + 37) +
                one_over_two_q * *(b + 164 * OS1_S1 + 37);
            *(b + 218 * OS1_S1 + 61) =
                prefactor_z * *(b + 218 * OS1_S1 + 37) -
                p_over_q * *(b + 284 * OS1_S1 + 37) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 37) +
                one_over_two_q * *(b + 218 * OS1_S1 + 20);
            *(b + 218 * OS1_S1 + 62) =
                prefactor_x * *(b + 218 * OS1_S1 + 41) -
                p_over_q * *(b + 273 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 26);
            *(b + 218 * OS1_S1 + 63) =
                prefactor_z * *(b + 218 * OS1_S1 + 38) -
                p_over_q * *(b + 284 * OS1_S1 + 38) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 38);
            *(b + 218 * OS1_S1 + 64) =
                prefactor_y * *(b + 218 * OS1_S1 + 40) -
                p_over_q * *(b + 283 * OS1_S1 + 40) +
                one_over_two_q * *(b + 164 * OS1_S1 + 40);
            *(b + 218 * OS1_S1 + 65) =
                prefactor_x * *(b + 218 * OS1_S1 + 44) -
                p_over_q * *(b + 273 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 29);
            *(b + 218 * OS1_S1 + 66) =
                prefactor_x * *(b + 218 * OS1_S1 + 45) -
                p_over_q * *(b + 273 * OS1_S1 + 45) +
                one_over_two_q * *(b + 218 * OS1_S1 + 30);
            *(b + 218 * OS1_S1 + 67) =
                prefactor_z * *(b + 218 * OS1_S1 + 41) -
                p_over_q * *(b + 284 * OS1_S1 + 41) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 41);
            *(b + 218 * OS1_S1 + 68) =
                prefactor_x * *(b + 218 * OS1_S1 + 47) -
                p_over_q * *(b + 273 * OS1_S1 + 47) +
                one_over_two_q * *(b + 218 * OS1_S1 + 32);
            *(b + 218 * OS1_S1 + 69) =
                prefactor_y * *(b + 218 * OS1_S1 + 44) -
                p_over_q * *(b + 283 * OS1_S1 + 44) +
                one_over_two_q * *(b + 164 * OS1_S1 + 44);
            *(b + 218 * OS1_S1 + 70) =
                prefactor_x * *(b + 218 * OS1_S1 + 49) -
                p_over_q * *(b + 273 * OS1_S1 + 49) +
                one_over_two_q * *(b + 218 * OS1_S1 + 34);
            *(b + 218 * OS1_S1 + 71) = prefactor_x * *(b + 218 * OS1_S1 + 50) -
                                       p_over_q * *(b + 273 * OS1_S1 + 50);
            *(b + 218 * OS1_S1 + 72) = prefactor_x * *(b + 218 * OS1_S1 + 51) -
                                       p_over_q * *(b + 273 * OS1_S1 + 51);
            *(b + 218 * OS1_S1 + 73) = prefactor_x * *(b + 218 * OS1_S1 + 52) -
                                       p_over_q * *(b + 273 * OS1_S1 + 52);
            *(b + 218 * OS1_S1 + 74) = prefactor_x * *(b + 218 * OS1_S1 + 53) -
                                       p_over_q * *(b + 273 * OS1_S1 + 53);
            *(b + 218 * OS1_S1 + 75) = prefactor_x * *(b + 218 * OS1_S1 + 54) -
                                       p_over_q * *(b + 273 * OS1_S1 + 54);
            *(b + 218 * OS1_S1 + 76) = prefactor_x * *(b + 218 * OS1_S1 + 55) -
                                       p_over_q * *(b + 273 * OS1_S1 + 55);
            *(b + 218 * OS1_S1 + 77) =
                prefactor_y * *(b + 218 * OS1_S1 + 50) -
                p_over_q * *(b + 283 * OS1_S1 + 50) +
                one_over_two_q * *(b + 164 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 218 * OS1_S1 + 30);
            *(b + 218 * OS1_S1 + 78) =
                prefactor_z * *(b + 218 * OS1_S1 + 50) -
                p_over_q * *(b + 284 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 50);
            *(b + 218 * OS1_S1 + 79) =
                prefactor_z * *(b + 218 * OS1_S1 + 51) -
                p_over_q * *(b + 284 * OS1_S1 + 51) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 51) +
                one_over_two_q * *(b + 218 * OS1_S1 + 30);
            *(b + 218 * OS1_S1 + 80) =
                prefactor_y * *(b + 218 * OS1_S1 + 53) -
                p_over_q * *(b + 283 * OS1_S1 + 53) +
                one_over_two_q * *(b + 164 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 33);
            *(b + 218 * OS1_S1 + 81) =
                prefactor_y * *(b + 218 * OS1_S1 + 54) -
                p_over_q * *(b + 283 * OS1_S1 + 54) +
                one_over_two_q * *(b + 164 * OS1_S1 + 54) +
                one_over_two_q * *(b + 218 * OS1_S1 + 34);
            *(b + 218 * OS1_S1 + 82) =
                prefactor_y * *(b + 218 * OS1_S1 + 55) -
                p_over_q * *(b + 283 * OS1_S1 + 55) +
                one_over_two_q * *(b + 164 * OS1_S1 + 55);
            *(b + 218 * OS1_S1 + 83) =
                prefactor_z * *(b + 218 * OS1_S1 + 55) -
                p_over_q * *(b + 284 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 218 * OS1_S1 + 34);
            *(b + 219 * OS1_S1 + 56) =
                prefactor_x * *(b + 219 * OS1_S1 + 35) -
                p_over_q * *(b + 274 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 219 * OS1_S1 + 20);
            *(b + 219 * OS1_S1 + 57) = prefactor_y * *(b + 219 * OS1_S1 + 35) -
                                       p_over_q * *(b + 284 * OS1_S1 + 35);
            *(b + 219 * OS1_S1 + 58) =
                prefactor_z * *(b + 219 * OS1_S1 + 35) -
                p_over_q * *(b + 285 * OS1_S1 + 35) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 35);
            *(b + 219 * OS1_S1 + 59) =
                prefactor_y * *(b + 219 * OS1_S1 + 36) -
                p_over_q * *(b + 284 * OS1_S1 + 36) +
                one_over_two_q * *(b + 219 * OS1_S1 + 20);
            *(b + 219 * OS1_S1 + 60) = prefactor_y * *(b + 219 * OS1_S1 + 37) -
                                       p_over_q * *(b + 284 * OS1_S1 + 37);
            *(b + 219 * OS1_S1 + 61) =
                prefactor_z * *(b + 219 * OS1_S1 + 37) -
                p_over_q * *(b + 285 * OS1_S1 + 37) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 37) +
                one_over_two_q * *(b + 219 * OS1_S1 + 20);
            *(b + 219 * OS1_S1 + 62) =
                prefactor_y * *(b + 219 * OS1_S1 + 38) -
                p_over_q * *(b + 284 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 219 * OS1_S1 + 21);
            *(b + 219 * OS1_S1 + 63) =
                prefactor_z * *(b + 219 * OS1_S1 + 38) -
                p_over_q * *(b + 285 * OS1_S1 + 38) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 38);
            *(b + 219 * OS1_S1 + 64) = prefactor_y * *(b + 219 * OS1_S1 + 40) -
                                       p_over_q * *(b + 284 * OS1_S1 + 40);
            *(b + 219 * OS1_S1 + 65) =
                prefactor_x * *(b + 219 * OS1_S1 + 44) -
                p_over_q * *(b + 274 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 219 * OS1_S1 + 29);
            *(b + 219 * OS1_S1 + 66) =
                prefactor_x * *(b + 219 * OS1_S1 + 45) -
                p_over_q * *(b + 274 * OS1_S1 + 45) +
                one_over_two_q * *(b + 219 * OS1_S1 + 30);
            *(b + 219 * OS1_S1 + 67) =
                prefactor_z * *(b + 219 * OS1_S1 + 41) -
                p_over_q * *(b + 285 * OS1_S1 + 41) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 41);
            *(b + 219 * OS1_S1 + 68) =
                prefactor_y * *(b + 219 * OS1_S1 + 43) -
                p_over_q * *(b + 284 * OS1_S1 + 43) +
                one_over_two_q * *(b + 219 * OS1_S1 + 25);
            *(b + 219 * OS1_S1 + 69) = prefactor_y * *(b + 219 * OS1_S1 + 44) -
                                       p_over_q * *(b + 284 * OS1_S1 + 44);
            *(b + 219 * OS1_S1 + 70) =
                prefactor_x * *(b + 219 * OS1_S1 + 49) -
                p_over_q * *(b + 274 * OS1_S1 + 49) +
                one_over_two_q * *(b + 219 * OS1_S1 + 34);
            *(b + 219 * OS1_S1 + 71) = prefactor_x * *(b + 219 * OS1_S1 + 50) -
                                       p_over_q * *(b + 274 * OS1_S1 + 50);
            *(b + 219 * OS1_S1 + 72) = prefactor_x * *(b + 219 * OS1_S1 + 51) -
                                       p_over_q * *(b + 274 * OS1_S1 + 51);
            *(b + 219 * OS1_S1 + 73) = prefactor_x * *(b + 219 * OS1_S1 + 52) -
                                       p_over_q * *(b + 274 * OS1_S1 + 52);
            *(b + 219 * OS1_S1 + 74) = prefactor_x * *(b + 219 * OS1_S1 + 53) -
                                       p_over_q * *(b + 274 * OS1_S1 + 53);
            *(b + 219 * OS1_S1 + 75) = prefactor_y * *(b + 219 * OS1_S1 + 49) -
                                       p_over_q * *(b + 284 * OS1_S1 + 49);
            *(b + 219 * OS1_S1 + 76) = prefactor_x * *(b + 219 * OS1_S1 + 55) -
                                       p_over_q * *(b + 274 * OS1_S1 + 55);
            *(b + 219 * OS1_S1 + 77) =
                prefactor_y * *(b + 219 * OS1_S1 + 50) -
                p_over_q * *(b + 284 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 219 * OS1_S1 + 30);
            *(b + 219 * OS1_S1 + 78) =
                prefactor_z * *(b + 219 * OS1_S1 + 50) -
                p_over_q * *(b + 285 * OS1_S1 + 50) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 50);
            *(b + 219 * OS1_S1 + 79) =
                prefactor_z * *(b + 219 * OS1_S1 + 51) -
                p_over_q * *(b + 285 * OS1_S1 + 51) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 51) +
                one_over_two_q * *(b + 219 * OS1_S1 + 30);
            *(b + 219 * OS1_S1 + 80) =
                prefactor_y * *(b + 219 * OS1_S1 + 53) -
                p_over_q * *(b + 284 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 219 * OS1_S1 + 33);
            *(b + 219 * OS1_S1 + 81) =
                prefactor_y * *(b + 219 * OS1_S1 + 54) -
                p_over_q * *(b + 284 * OS1_S1 + 54) +
                one_over_two_q * *(b + 219 * OS1_S1 + 34);
            *(b + 219 * OS1_S1 + 82) = prefactor_y * *(b + 219 * OS1_S1 + 55) -
                                       p_over_q * *(b + 284 * OS1_S1 + 55);
            *(b + 219 * OS1_S1 + 83) =
                prefactor_z * *(b + 219 * OS1_S1 + 55) -
                p_over_q * *(b + 285 * OS1_S1 + 55) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 219 * OS1_S1 + 34);
            return;
        }

        void transfer_10_6(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 220 * OS1_S1 + 56) =
                prefactor_x * *(b + 220 * OS1_S1 + 35) -
                p_over_q * *(b + 286 * OS1_S1 + 35) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 220 * OS1_S1 + 20);
            *(b + 220 * OS1_S1 + 57) = prefactor_y * *(b + 220 * OS1_S1 + 35) -
                                       p_over_q * *(b + 287 * OS1_S1 + 35);
            *(b + 220 * OS1_S1 + 58) = prefactor_z * *(b + 220 * OS1_S1 + 35) -
                                       p_over_q * *(b + 288 * OS1_S1 + 35);
            *(b + 220 * OS1_S1 + 59) =
                prefactor_y * *(b + 220 * OS1_S1 + 36) -
                p_over_q * *(b + 287 * OS1_S1 + 36) +
                one_over_two_q * *(b + 220 * OS1_S1 + 20);
            *(b + 220 * OS1_S1 + 60) = prefactor_z * *(b + 220 * OS1_S1 + 36) -
                                       p_over_q * *(b + 288 * OS1_S1 + 36);
            *(b + 220 * OS1_S1 + 61) =
                prefactor_z * *(b + 220 * OS1_S1 + 37) -
                p_over_q * *(b + 288 * OS1_S1 + 37) +
                one_over_two_q * *(b + 220 * OS1_S1 + 20);
            *(b + 220 * OS1_S1 + 62) =
                prefactor_y * *(b + 220 * OS1_S1 + 38) -
                p_over_q * *(b + 287 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 220 * OS1_S1 + 21);
            *(b + 220 * OS1_S1 + 63) = prefactor_z * *(b + 220 * OS1_S1 + 38) -
                                       p_over_q * *(b + 288 * OS1_S1 + 38);
            *(b + 220 * OS1_S1 + 64) = prefactor_y * *(b + 220 * OS1_S1 + 40) -
                                       p_over_q * *(b + 287 * OS1_S1 + 40);
            *(b + 220 * OS1_S1 + 65) =
                prefactor_z * *(b + 220 * OS1_S1 + 40) -
                p_over_q * *(b + 288 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 220 * OS1_S1 + 22);
            *(b + 220 * OS1_S1 + 66) =
                prefactor_x * *(b + 220 * OS1_S1 + 45) -
                p_over_q * *(b + 286 * OS1_S1 + 45) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 45) +
                one_over_two_q * *(b + 220 * OS1_S1 + 30);
            *(b + 220 * OS1_S1 + 67) = prefactor_z * *(b + 220 * OS1_S1 + 41) -
                                       p_over_q * *(b + 288 * OS1_S1 + 41);
            *(b + 220 * OS1_S1 + 68) =
                prefactor_z * *(b + 220 * OS1_S1 + 42) -
                p_over_q * *(b + 288 * OS1_S1 + 42) +
                one_over_two_q * *(b + 220 * OS1_S1 + 23);
            *(b + 220 * OS1_S1 + 69) = prefactor_y * *(b + 220 * OS1_S1 + 44) -
                                       p_over_q * *(b + 287 * OS1_S1 + 44);
            *(b + 220 * OS1_S1 + 70) =
                prefactor_x * *(b + 220 * OS1_S1 + 49) -
                p_over_q * *(b + 286 * OS1_S1 + 49) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 49) +
                one_over_two_q * *(b + 220 * OS1_S1 + 34);
            *(b + 220 * OS1_S1 + 71) =
                prefactor_x * *(b + 220 * OS1_S1 + 50) -
                p_over_q * *(b + 286 * OS1_S1 + 50) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 50);
            *(b + 220 * OS1_S1 + 72) = prefactor_z * *(b + 220 * OS1_S1 + 45) -
                                       p_over_q * *(b + 288 * OS1_S1 + 45);
            *(b + 220 * OS1_S1 + 73) =
                prefactor_x * *(b + 220 * OS1_S1 + 52) -
                p_over_q * *(b + 286 * OS1_S1 + 52) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 52);
            *(b + 220 * OS1_S1 + 74) =
                prefactor_x * *(b + 220 * OS1_S1 + 53) -
                p_over_q * *(b + 286 * OS1_S1 + 53) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 53);
            *(b + 220 * OS1_S1 + 75) = prefactor_y * *(b + 220 * OS1_S1 + 49) -
                                       p_over_q * *(b + 287 * OS1_S1 + 49);
            *(b + 220 * OS1_S1 + 76) =
                prefactor_x * *(b + 220 * OS1_S1 + 55) -
                p_over_q * *(b + 286 * OS1_S1 + 55) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 55);
            *(b + 220 * OS1_S1 + 77) =
                prefactor_y * *(b + 220 * OS1_S1 + 50) -
                p_over_q * *(b + 287 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 220 * OS1_S1 + 30);
            *(b + 220 * OS1_S1 + 78) = prefactor_z * *(b + 220 * OS1_S1 + 50) -
                                       p_over_q * *(b + 288 * OS1_S1 + 50);
            *(b + 220 * OS1_S1 + 79) =
                prefactor_z * *(b + 220 * OS1_S1 + 51) -
                p_over_q * *(b + 288 * OS1_S1 + 51) +
                one_over_two_q * *(b + 220 * OS1_S1 + 30);
            *(b + 220 * OS1_S1 + 80) =
                prefactor_z * *(b + 220 * OS1_S1 + 52) -
                p_over_q * *(b + 288 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 220 * OS1_S1 + 31);
            *(b + 220 * OS1_S1 + 81) =
                prefactor_y * *(b + 220 * OS1_S1 + 54) -
                p_over_q * *(b + 287 * OS1_S1 + 54) +
                one_over_two_q * *(b + 220 * OS1_S1 + 34);
            *(b + 220 * OS1_S1 + 82) = prefactor_y * *(b + 220 * OS1_S1 + 55) -
                                       p_over_q * *(b + 287 * OS1_S1 + 55);
            *(b + 220 * OS1_S1 + 83) =
                prefactor_z * *(b + 220 * OS1_S1 + 55) -
                p_over_q * *(b + 288 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 220 * OS1_S1 + 34);
            *(b + 221 * OS1_S1 + 56) =
                prefactor_x * *(b + 221 * OS1_S1 + 35) -
                p_over_q * *(b + 287 * OS1_S1 + 35) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 221 * OS1_S1 + 20);
            *(b + 221 * OS1_S1 + 57) =
                prefactor_y * *(b + 221 * OS1_S1 + 35) -
                p_over_q * *(b + 289 * OS1_S1 + 35) +
                one_over_two_q * *(b + 165 * OS1_S1 + 35);
            *(b + 221 * OS1_S1 + 58) = prefactor_z * *(b + 221 * OS1_S1 + 35) -
                                       p_over_q * *(b + 290 * OS1_S1 + 35);
            *(b + 221 * OS1_S1 + 59) =
                prefactor_y * *(b + 221 * OS1_S1 + 36) -
                p_over_q * *(b + 289 * OS1_S1 + 36) +
                one_over_two_q * *(b + 165 * OS1_S1 + 36) +
                one_over_two_q * *(b + 221 * OS1_S1 + 20);
            *(b + 221 * OS1_S1 + 60) = prefactor_z * *(b + 221 * OS1_S1 + 36) -
                                       p_over_q * *(b + 290 * OS1_S1 + 36);
            *(b + 221 * OS1_S1 + 61) =
                prefactor_z * *(b + 221 * OS1_S1 + 37) -
                p_over_q * *(b + 290 * OS1_S1 + 37) +
                one_over_two_q * *(b + 221 * OS1_S1 + 20);
            *(b + 221 * OS1_S1 + 62) =
                prefactor_y * *(b + 221 * OS1_S1 + 38) -
                p_over_q * *(b + 289 * OS1_S1 + 38) +
                one_over_two_q * *(b + 165 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 21);
            *(b + 221 * OS1_S1 + 63) = prefactor_z * *(b + 221 * OS1_S1 + 38) -
                                       p_over_q * *(b + 290 * OS1_S1 + 38);
            *(b + 221 * OS1_S1 + 64) =
                prefactor_y * *(b + 221 * OS1_S1 + 40) -
                p_over_q * *(b + 289 * OS1_S1 + 40) +
                one_over_two_q * *(b + 165 * OS1_S1 + 40);
            *(b + 221 * OS1_S1 + 65) =
                prefactor_z * *(b + 221 * OS1_S1 + 40) -
                p_over_q * *(b + 290 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 22);
            *(b + 221 * OS1_S1 + 66) =
                prefactor_x * *(b + 221 * OS1_S1 + 45) -
                p_over_q * *(b + 287 * OS1_S1 + 45) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 45) +
                one_over_two_q * *(b + 221 * OS1_S1 + 30);
            *(b + 221 * OS1_S1 + 67) = prefactor_z * *(b + 221 * OS1_S1 + 41) -
                                       p_over_q * *(b + 290 * OS1_S1 + 41);
            *(b + 221 * OS1_S1 + 68) =
                prefactor_z * *(b + 221 * OS1_S1 + 42) -
                p_over_q * *(b + 290 * OS1_S1 + 42) +
                one_over_two_q * *(b + 221 * OS1_S1 + 23);
            *(b + 221 * OS1_S1 + 69) =
                prefactor_y * *(b + 221 * OS1_S1 + 44) -
                p_over_q * *(b + 289 * OS1_S1 + 44) +
                one_over_two_q * *(b + 165 * OS1_S1 + 44);
            *(b + 221 * OS1_S1 + 70) =
                prefactor_x * *(b + 221 * OS1_S1 + 49) -
                p_over_q * *(b + 287 * OS1_S1 + 49) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 49) +
                one_over_two_q * *(b + 221 * OS1_S1 + 34);
            *(b + 221 * OS1_S1 + 71) =
                prefactor_x * *(b + 221 * OS1_S1 + 50) -
                p_over_q * *(b + 287 * OS1_S1 + 50) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 50);
            *(b + 221 * OS1_S1 + 72) = prefactor_z * *(b + 221 * OS1_S1 + 45) -
                                       p_over_q * *(b + 290 * OS1_S1 + 45);
            *(b + 221 * OS1_S1 + 73) =
                prefactor_x * *(b + 221 * OS1_S1 + 52) -
                p_over_q * *(b + 287 * OS1_S1 + 52) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 52);
            *(b + 221 * OS1_S1 + 74) =
                prefactor_x * *(b + 221 * OS1_S1 + 53) -
                p_over_q * *(b + 287 * OS1_S1 + 53) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 53);
            *(b + 221 * OS1_S1 + 75) =
                prefactor_y * *(b + 221 * OS1_S1 + 49) -
                p_over_q * *(b + 289 * OS1_S1 + 49) +
                one_over_two_q * *(b + 165 * OS1_S1 + 49);
            *(b + 221 * OS1_S1 + 76) =
                prefactor_x * *(b + 221 * OS1_S1 + 55) -
                p_over_q * *(b + 287 * OS1_S1 + 55) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 55);
            *(b + 221 * OS1_S1 + 77) =
                prefactor_y * *(b + 221 * OS1_S1 + 50) -
                p_over_q * *(b + 289 * OS1_S1 + 50) +
                one_over_two_q * *(b + 165 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 221 * OS1_S1 + 30);
            *(b + 221 * OS1_S1 + 78) = prefactor_z * *(b + 221 * OS1_S1 + 50) -
                                       p_over_q * *(b + 290 * OS1_S1 + 50);
            *(b + 221 * OS1_S1 + 79) =
                prefactor_z * *(b + 221 * OS1_S1 + 51) -
                p_over_q * *(b + 290 * OS1_S1 + 51) +
                one_over_two_q * *(b + 221 * OS1_S1 + 30);
            *(b + 221 * OS1_S1 + 80) =
                prefactor_z * *(b + 221 * OS1_S1 + 52) -
                p_over_q * *(b + 290 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 31);
            *(b + 221 * OS1_S1 + 81) =
                prefactor_y * *(b + 221 * OS1_S1 + 54) -
                p_over_q * *(b + 289 * OS1_S1 + 54) +
                one_over_two_q * *(b + 165 * OS1_S1 + 54) +
                one_over_two_q * *(b + 221 * OS1_S1 + 34);
            *(b + 221 * OS1_S1 + 82) =
                prefactor_y * *(b + 221 * OS1_S1 + 55) -
                p_over_q * *(b + 289 * OS1_S1 + 55) +
                one_over_two_q * *(b + 165 * OS1_S1 + 55);
            *(b + 221 * OS1_S1 + 83) =
                prefactor_z * *(b + 221 * OS1_S1 + 55) -
                p_over_q * *(b + 290 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 221 * OS1_S1 + 34);
            *(b + 222 * OS1_S1 + 56) =
                prefactor_x * *(b + 222 * OS1_S1 + 35) -
                p_over_q * *(b + 288 * OS1_S1 + 35) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 222 * OS1_S1 + 20);
            *(b + 222 * OS1_S1 + 57) = prefactor_y * *(b + 222 * OS1_S1 + 35) -
                                       p_over_q * *(b + 290 * OS1_S1 + 35);
            *(b + 222 * OS1_S1 + 58) =
                prefactor_z * *(b + 222 * OS1_S1 + 35) -
                p_over_q * *(b + 291 * OS1_S1 + 35) +
                one_over_two_q * *(b + 165 * OS1_S1 + 35);
            *(b + 222 * OS1_S1 + 59) =
                prefactor_y * *(b + 222 * OS1_S1 + 36) -
                p_over_q * *(b + 290 * OS1_S1 + 36) +
                one_over_two_q * *(b + 222 * OS1_S1 + 20);
            *(b + 222 * OS1_S1 + 60) = prefactor_y * *(b + 222 * OS1_S1 + 37) -
                                       p_over_q * *(b + 290 * OS1_S1 + 37);
            *(b + 222 * OS1_S1 + 61) =
                prefactor_z * *(b + 222 * OS1_S1 + 37) -
                p_over_q * *(b + 291 * OS1_S1 + 37) +
                one_over_two_q * *(b + 165 * OS1_S1 + 37) +
                one_over_two_q * *(b + 222 * OS1_S1 + 20);
            *(b + 222 * OS1_S1 + 62) =
                prefactor_y * *(b + 222 * OS1_S1 + 38) -
                p_over_q * *(b + 290 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 21);
            *(b + 222 * OS1_S1 + 63) =
                prefactor_z * *(b + 222 * OS1_S1 + 38) -
                p_over_q * *(b + 291 * OS1_S1 + 38) +
                one_over_two_q * *(b + 165 * OS1_S1 + 38);
            *(b + 222 * OS1_S1 + 64) = prefactor_y * *(b + 222 * OS1_S1 + 40) -
                                       p_over_q * *(b + 290 * OS1_S1 + 40);
            *(b + 222 * OS1_S1 + 65) =
                prefactor_z * *(b + 222 * OS1_S1 + 40) -
                p_over_q * *(b + 291 * OS1_S1 + 40) +
                one_over_two_q * *(b + 165 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 22);
            *(b + 222 * OS1_S1 + 66) =
                prefactor_x * *(b + 222 * OS1_S1 + 45) -
                p_over_q * *(b + 288 * OS1_S1 + 45) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 45) +
                one_over_two_q * *(b + 222 * OS1_S1 + 30);
            *(b + 222 * OS1_S1 + 67) =
                prefactor_z * *(b + 222 * OS1_S1 + 41) -
                p_over_q * *(b + 291 * OS1_S1 + 41) +
                one_over_two_q * *(b + 165 * OS1_S1 + 41);
            *(b + 222 * OS1_S1 + 68) =
                prefactor_y * *(b + 222 * OS1_S1 + 43) -
                p_over_q * *(b + 290 * OS1_S1 + 43) +
                one_over_two_q * *(b + 222 * OS1_S1 + 25);
            *(b + 222 * OS1_S1 + 69) = prefactor_y * *(b + 222 * OS1_S1 + 44) -
                                       p_over_q * *(b + 290 * OS1_S1 + 44);
            *(b + 222 * OS1_S1 + 70) =
                prefactor_x * *(b + 222 * OS1_S1 + 49) -
                p_over_q * *(b + 288 * OS1_S1 + 49) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 49) +
                one_over_two_q * *(b + 222 * OS1_S1 + 34);
            *(b + 222 * OS1_S1 + 71) =
                prefactor_x * *(b + 222 * OS1_S1 + 50) -
                p_over_q * *(b + 288 * OS1_S1 + 50) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 50);
            *(b + 222 * OS1_S1 + 72) =
                prefactor_z * *(b + 222 * OS1_S1 + 45) -
                p_over_q * *(b + 291 * OS1_S1 + 45) +
                one_over_two_q * *(b + 165 * OS1_S1 + 45);
            *(b + 222 * OS1_S1 + 73) =
                prefactor_x * *(b + 222 * OS1_S1 + 52) -
                p_over_q * *(b + 288 * OS1_S1 + 52) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 52);
            *(b + 222 * OS1_S1 + 74) =
                prefactor_x * *(b + 222 * OS1_S1 + 53) -
                p_over_q * *(b + 288 * OS1_S1 + 53) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 53);
            *(b + 222 * OS1_S1 + 75) = prefactor_y * *(b + 222 * OS1_S1 + 49) -
                                       p_over_q * *(b + 290 * OS1_S1 + 49);
            *(b + 222 * OS1_S1 + 76) =
                prefactor_x * *(b + 222 * OS1_S1 + 55) -
                p_over_q * *(b + 288 * OS1_S1 + 55) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 55);
            *(b + 222 * OS1_S1 + 77) =
                prefactor_y * *(b + 222 * OS1_S1 + 50) -
                p_over_q * *(b + 290 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 222 * OS1_S1 + 30);
            *(b + 222 * OS1_S1 + 78) =
                prefactor_z * *(b + 222 * OS1_S1 + 50) -
                p_over_q * *(b + 291 * OS1_S1 + 50) +
                one_over_two_q * *(b + 165 * OS1_S1 + 50);
            *(b + 222 * OS1_S1 + 79) =
                prefactor_z * *(b + 222 * OS1_S1 + 51) -
                p_over_q * *(b + 291 * OS1_S1 + 51) +
                one_over_two_q * *(b + 165 * OS1_S1 + 51) +
                one_over_two_q * *(b + 222 * OS1_S1 + 30);
            *(b + 222 * OS1_S1 + 80) =
                prefactor_y * *(b + 222 * OS1_S1 + 53) -
                p_over_q * *(b + 290 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 33);
            *(b + 222 * OS1_S1 + 81) =
                prefactor_y * *(b + 222 * OS1_S1 + 54) -
                p_over_q * *(b + 290 * OS1_S1 + 54) +
                one_over_two_q * *(b + 222 * OS1_S1 + 34);
            *(b + 222 * OS1_S1 + 82) = prefactor_y * *(b + 222 * OS1_S1 + 55) -
                                       p_over_q * *(b + 290 * OS1_S1 + 55);
            *(b + 222 * OS1_S1 + 83) =
                prefactor_z * *(b + 222 * OS1_S1 + 55) -
                p_over_q * *(b + 291 * OS1_S1 + 55) +
                one_over_two_q * *(b + 165 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 222 * OS1_S1 + 34);
            *(b + 223 * OS1_S1 + 56) =
                prefactor_x * *(b + 223 * OS1_S1 + 35) -
                p_over_q * *(b + 289 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 223 * OS1_S1 + 20);
            *(b + 223 * OS1_S1 + 57) =
                prefactor_y * *(b + 223 * OS1_S1 + 35) -
                p_over_q * *(b + 292 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 35);
            *(b + 223 * OS1_S1 + 58) = prefactor_z * *(b + 223 * OS1_S1 + 35) -
                                       p_over_q * *(b + 293 * OS1_S1 + 35);
            *(b + 223 * OS1_S1 + 59) =
                prefactor_y * *(b + 223 * OS1_S1 + 36) -
                p_over_q * *(b + 292 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 36) +
                one_over_two_q * *(b + 223 * OS1_S1 + 20);
            *(b + 223 * OS1_S1 + 60) = prefactor_z * *(b + 223 * OS1_S1 + 36) -
                                       p_over_q * *(b + 293 * OS1_S1 + 36);
            *(b + 223 * OS1_S1 + 61) =
                prefactor_z * *(b + 223 * OS1_S1 + 37) -
                p_over_q * *(b + 293 * OS1_S1 + 37) +
                one_over_two_q * *(b + 223 * OS1_S1 + 20);
            *(b + 223 * OS1_S1 + 62) =
                prefactor_y * *(b + 223 * OS1_S1 + 38) -
                p_over_q * *(b + 292 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 223 * OS1_S1 + 21);
            *(b + 223 * OS1_S1 + 63) = prefactor_z * *(b + 223 * OS1_S1 + 38) -
                                       p_over_q * *(b + 293 * OS1_S1 + 38);
            *(b + 223 * OS1_S1 + 64) =
                prefactor_y * *(b + 223 * OS1_S1 + 40) -
                p_over_q * *(b + 292 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 40);
            *(b + 223 * OS1_S1 + 65) =
                prefactor_z * *(b + 223 * OS1_S1 + 40) -
                p_over_q * *(b + 293 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 223 * OS1_S1 + 22);
            *(b + 223 * OS1_S1 + 66) =
                prefactor_x * *(b + 223 * OS1_S1 + 45) -
                p_over_q * *(b + 289 * OS1_S1 + 45) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 45) +
                one_over_two_q * *(b + 223 * OS1_S1 + 30);
            *(b + 223 * OS1_S1 + 67) = prefactor_z * *(b + 223 * OS1_S1 + 41) -
                                       p_over_q * *(b + 293 * OS1_S1 + 41);
            *(b + 223 * OS1_S1 + 68) =
                prefactor_z * *(b + 223 * OS1_S1 + 42) -
                p_over_q * *(b + 293 * OS1_S1 + 42) +
                one_over_two_q * *(b + 223 * OS1_S1 + 23);
            *(b + 223 * OS1_S1 + 69) =
                prefactor_y * *(b + 223 * OS1_S1 + 44) -
                p_over_q * *(b + 292 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 44);
            *(b + 223 * OS1_S1 + 70) =
                prefactor_x * *(b + 223 * OS1_S1 + 49) -
                p_over_q * *(b + 289 * OS1_S1 + 49) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 49) +
                one_over_two_q * *(b + 223 * OS1_S1 + 34);
            *(b + 223 * OS1_S1 + 71) =
                prefactor_x * *(b + 223 * OS1_S1 + 50) -
                p_over_q * *(b + 289 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 50);
            *(b + 223 * OS1_S1 + 72) = prefactor_z * *(b + 223 * OS1_S1 + 45) -
                                       p_over_q * *(b + 293 * OS1_S1 + 45);
            *(b + 223 * OS1_S1 + 73) =
                prefactor_x * *(b + 223 * OS1_S1 + 52) -
                p_over_q * *(b + 289 * OS1_S1 + 52) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 52);
            *(b + 223 * OS1_S1 + 74) =
                prefactor_x * *(b + 223 * OS1_S1 + 53) -
                p_over_q * *(b + 289 * OS1_S1 + 53) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 53);
            *(b + 223 * OS1_S1 + 75) =
                prefactor_y * *(b + 223 * OS1_S1 + 49) -
                p_over_q * *(b + 292 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 49);
            *(b + 223 * OS1_S1 + 76) =
                prefactor_x * *(b + 223 * OS1_S1 + 55) -
                p_over_q * *(b + 289 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 55);
            *(b + 223 * OS1_S1 + 77) =
                prefactor_y * *(b + 223 * OS1_S1 + 50) -
                p_over_q * *(b + 292 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 223 * OS1_S1 + 30);
            *(b + 223 * OS1_S1 + 78) = prefactor_z * *(b + 223 * OS1_S1 + 50) -
                                       p_over_q * *(b + 293 * OS1_S1 + 50);
            *(b + 223 * OS1_S1 + 79) =
                prefactor_z * *(b + 223 * OS1_S1 + 51) -
                p_over_q * *(b + 293 * OS1_S1 + 51) +
                one_over_two_q * *(b + 223 * OS1_S1 + 30);
            *(b + 223 * OS1_S1 + 80) =
                prefactor_z * *(b + 223 * OS1_S1 + 52) -
                p_over_q * *(b + 293 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 223 * OS1_S1 + 31);
            *(b + 223 * OS1_S1 + 81) =
                prefactor_y * *(b + 223 * OS1_S1 + 54) -
                p_over_q * *(b + 292 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 54) +
                one_over_two_q * *(b + 223 * OS1_S1 + 34);
            *(b + 223 * OS1_S1 + 82) =
                prefactor_y * *(b + 223 * OS1_S1 + 55) -
                p_over_q * *(b + 292 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 55);
            *(b + 223 * OS1_S1 + 83) =
                prefactor_z * *(b + 223 * OS1_S1 + 55) -
                p_over_q * *(b + 293 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 223 * OS1_S1 + 34);
            *(b + 224 * OS1_S1 + 56) =
                prefactor_x * *(b + 224 * OS1_S1 + 35) -
                p_over_q * *(b + 290 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 224 * OS1_S1 + 20);
            *(b + 224 * OS1_S1 + 57) =
                prefactor_y * *(b + 224 * OS1_S1 + 35) -
                p_over_q * *(b + 293 * OS1_S1 + 35) +
                one_over_two_q * *(b + 167 * OS1_S1 + 35);
            *(b + 224 * OS1_S1 + 58) =
                prefactor_z * *(b + 224 * OS1_S1 + 35) -
                p_over_q * *(b + 294 * OS1_S1 + 35) +
                one_over_two_q * *(b + 166 * OS1_S1 + 35);
            *(b + 224 * OS1_S1 + 59) =
                prefactor_y * *(b + 224 * OS1_S1 + 36) -
                p_over_q * *(b + 293 * OS1_S1 + 36) +
                one_over_two_q * *(b + 167 * OS1_S1 + 36) +
                one_over_two_q * *(b + 224 * OS1_S1 + 20);
            *(b + 224 * OS1_S1 + 60) =
                prefactor_z * *(b + 224 * OS1_S1 + 36) -
                p_over_q * *(b + 294 * OS1_S1 + 36) +
                one_over_two_q * *(b + 166 * OS1_S1 + 36);
            *(b + 224 * OS1_S1 + 61) =
                prefactor_z * *(b + 224 * OS1_S1 + 37) -
                p_over_q * *(b + 294 * OS1_S1 + 37) +
                one_over_two_q * *(b + 166 * OS1_S1 + 37) +
                one_over_two_q * *(b + 224 * OS1_S1 + 20);
            *(b + 224 * OS1_S1 + 62) =
                prefactor_y * *(b + 224 * OS1_S1 + 38) -
                p_over_q * *(b + 293 * OS1_S1 + 38) +
                one_over_two_q * *(b + 167 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 21);
            *(b + 224 * OS1_S1 + 63) =
                prefactor_z * *(b + 224 * OS1_S1 + 38) -
                p_over_q * *(b + 294 * OS1_S1 + 38) +
                one_over_two_q * *(b + 166 * OS1_S1 + 38);
            *(b + 224 * OS1_S1 + 64) =
                prefactor_y * *(b + 224 * OS1_S1 + 40) -
                p_over_q * *(b + 293 * OS1_S1 + 40) +
                one_over_two_q * *(b + 167 * OS1_S1 + 40);
            *(b + 224 * OS1_S1 + 65) =
                prefactor_z * *(b + 224 * OS1_S1 + 40) -
                p_over_q * *(b + 294 * OS1_S1 + 40) +
                one_over_two_q * *(b + 166 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 22);
            *(b + 224 * OS1_S1 + 66) =
                prefactor_x * *(b + 224 * OS1_S1 + 45) -
                p_over_q * *(b + 290 * OS1_S1 + 45) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 45) +
                one_over_two_q * *(b + 224 * OS1_S1 + 30);
            *(b + 224 * OS1_S1 + 67) =
                prefactor_z * *(b + 224 * OS1_S1 + 41) -
                p_over_q * *(b + 294 * OS1_S1 + 41) +
                one_over_two_q * *(b + 166 * OS1_S1 + 41);
            *(b + 224 * OS1_S1 + 68) =
                prefactor_z * *(b + 224 * OS1_S1 + 42) -
                p_over_q * *(b + 294 * OS1_S1 + 42) +
                one_over_two_q * *(b + 166 * OS1_S1 + 42) +
                one_over_two_q * *(b + 224 * OS1_S1 + 23);
            *(b + 224 * OS1_S1 + 69) =
                prefactor_y * *(b + 224 * OS1_S1 + 44) -
                p_over_q * *(b + 293 * OS1_S1 + 44) +
                one_over_two_q * *(b + 167 * OS1_S1 + 44);
            *(b + 224 * OS1_S1 + 70) =
                prefactor_x * *(b + 224 * OS1_S1 + 49) -
                p_over_q * *(b + 290 * OS1_S1 + 49) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 49) +
                one_over_two_q * *(b + 224 * OS1_S1 + 34);
            *(b + 224 * OS1_S1 + 71) =
                prefactor_x * *(b + 224 * OS1_S1 + 50) -
                p_over_q * *(b + 290 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 50);
            *(b + 224 * OS1_S1 + 72) =
                prefactor_z * *(b + 224 * OS1_S1 + 45) -
                p_over_q * *(b + 294 * OS1_S1 + 45) +
                one_over_two_q * *(b + 166 * OS1_S1 + 45);
            *(b + 224 * OS1_S1 + 73) =
                prefactor_x * *(b + 224 * OS1_S1 + 52) -
                p_over_q * *(b + 290 * OS1_S1 + 52) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 52);
            *(b + 224 * OS1_S1 + 74) =
                prefactor_x * *(b + 224 * OS1_S1 + 53) -
                p_over_q * *(b + 290 * OS1_S1 + 53) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 53);
            *(b + 224 * OS1_S1 + 75) =
                prefactor_y * *(b + 224 * OS1_S1 + 49) -
                p_over_q * *(b + 293 * OS1_S1 + 49) +
                one_over_two_q * *(b + 167 * OS1_S1 + 49);
            *(b + 224 * OS1_S1 + 76) =
                prefactor_x * *(b + 224 * OS1_S1 + 55) -
                p_over_q * *(b + 290 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 55);
            *(b + 224 * OS1_S1 + 77) =
                prefactor_y * *(b + 224 * OS1_S1 + 50) -
                p_over_q * *(b + 293 * OS1_S1 + 50) +
                one_over_two_q * *(b + 167 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 224 * OS1_S1 + 30);
            *(b + 224 * OS1_S1 + 78) =
                prefactor_z * *(b + 224 * OS1_S1 + 50) -
                p_over_q * *(b + 294 * OS1_S1 + 50) +
                one_over_two_q * *(b + 166 * OS1_S1 + 50);
            *(b + 224 * OS1_S1 + 79) =
                prefactor_z * *(b + 224 * OS1_S1 + 51) -
                p_over_q * *(b + 294 * OS1_S1 + 51) +
                one_over_two_q * *(b + 166 * OS1_S1 + 51) +
                one_over_two_q * *(b + 224 * OS1_S1 + 30);
            *(b + 224 * OS1_S1 + 80) =
                prefactor_z * *(b + 224 * OS1_S1 + 52) -
                p_over_q * *(b + 294 * OS1_S1 + 52) +
                one_over_two_q * *(b + 166 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 31);
            *(b + 224 * OS1_S1 + 81) =
                prefactor_y * *(b + 224 * OS1_S1 + 54) -
                p_over_q * *(b + 293 * OS1_S1 + 54) +
                one_over_two_q * *(b + 167 * OS1_S1 + 54) +
                one_over_two_q * *(b + 224 * OS1_S1 + 34);
            *(b + 224 * OS1_S1 + 82) =
                prefactor_y * *(b + 224 * OS1_S1 + 55) -
                p_over_q * *(b + 293 * OS1_S1 + 55) +
                one_over_two_q * *(b + 167 * OS1_S1 + 55);
            *(b + 224 * OS1_S1 + 83) =
                prefactor_z * *(b + 224 * OS1_S1 + 55) -
                p_over_q * *(b + 294 * OS1_S1 + 55) +
                one_over_two_q * *(b + 166 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 224 * OS1_S1 + 34);
            *(b + 225 * OS1_S1 + 56) =
                prefactor_x * *(b + 225 * OS1_S1 + 35) -
                p_over_q * *(b + 291 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 225 * OS1_S1 + 20);
            *(b + 225 * OS1_S1 + 57) = prefactor_y * *(b + 225 * OS1_S1 + 35) -
                                       p_over_q * *(b + 294 * OS1_S1 + 35);
            *(b + 225 * OS1_S1 + 58) =
                prefactor_z * *(b + 225 * OS1_S1 + 35) -
                p_over_q * *(b + 295 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 35);
            *(b + 225 * OS1_S1 + 59) =
                prefactor_y * *(b + 225 * OS1_S1 + 36) -
                p_over_q * *(b + 294 * OS1_S1 + 36) +
                one_over_two_q * *(b + 225 * OS1_S1 + 20);
            *(b + 225 * OS1_S1 + 60) = prefactor_y * *(b + 225 * OS1_S1 + 37) -
                                       p_over_q * *(b + 294 * OS1_S1 + 37);
            *(b + 225 * OS1_S1 + 61) =
                prefactor_z * *(b + 225 * OS1_S1 + 37) -
                p_over_q * *(b + 295 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 37) +
                one_over_two_q * *(b + 225 * OS1_S1 + 20);
            *(b + 225 * OS1_S1 + 62) =
                prefactor_y * *(b + 225 * OS1_S1 + 38) -
                p_over_q * *(b + 294 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 225 * OS1_S1 + 21);
            *(b + 225 * OS1_S1 + 63) =
                prefactor_z * *(b + 225 * OS1_S1 + 38) -
                p_over_q * *(b + 295 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 38);
            *(b + 225 * OS1_S1 + 64) = prefactor_y * *(b + 225 * OS1_S1 + 40) -
                                       p_over_q * *(b + 294 * OS1_S1 + 40);
            *(b + 225 * OS1_S1 + 65) =
                prefactor_z * *(b + 225 * OS1_S1 + 40) -
                p_over_q * *(b + 295 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 225 * OS1_S1 + 22);
            *(b + 225 * OS1_S1 + 66) =
                prefactor_x * *(b + 225 * OS1_S1 + 45) -
                p_over_q * *(b + 291 * OS1_S1 + 45) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 45) +
                one_over_two_q * *(b + 225 * OS1_S1 + 30);
            *(b + 225 * OS1_S1 + 67) =
                prefactor_z * *(b + 225 * OS1_S1 + 41) -
                p_over_q * *(b + 295 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 41);
            *(b + 225 * OS1_S1 + 68) =
                prefactor_y * *(b + 225 * OS1_S1 + 43) -
                p_over_q * *(b + 294 * OS1_S1 + 43) +
                one_over_two_q * *(b + 225 * OS1_S1 + 25);
            *(b + 225 * OS1_S1 + 69) = prefactor_y * *(b + 225 * OS1_S1 + 44) -
                                       p_over_q * *(b + 294 * OS1_S1 + 44);
            *(b + 225 * OS1_S1 + 70) =
                prefactor_x * *(b + 225 * OS1_S1 + 49) -
                p_over_q * *(b + 291 * OS1_S1 + 49) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 49) +
                one_over_two_q * *(b + 225 * OS1_S1 + 34);
            *(b + 225 * OS1_S1 + 71) =
                prefactor_x * *(b + 225 * OS1_S1 + 50) -
                p_over_q * *(b + 291 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 50);
            *(b + 225 * OS1_S1 + 72) =
                prefactor_z * *(b + 225 * OS1_S1 + 45) -
                p_over_q * *(b + 295 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 45);
            *(b + 225 * OS1_S1 + 73) =
                prefactor_x * *(b + 225 * OS1_S1 + 52) -
                p_over_q * *(b + 291 * OS1_S1 + 52) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 52);
            *(b + 225 * OS1_S1 + 74) =
                prefactor_x * *(b + 225 * OS1_S1 + 53) -
                p_over_q * *(b + 291 * OS1_S1 + 53) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 53);
            *(b + 225 * OS1_S1 + 75) = prefactor_y * *(b + 225 * OS1_S1 + 49) -
                                       p_over_q * *(b + 294 * OS1_S1 + 49);
            *(b + 225 * OS1_S1 + 76) =
                prefactor_x * *(b + 225 * OS1_S1 + 55) -
                p_over_q * *(b + 291 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 55);
            *(b + 225 * OS1_S1 + 77) =
                prefactor_y * *(b + 225 * OS1_S1 + 50) -
                p_over_q * *(b + 294 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 225 * OS1_S1 + 30);
            *(b + 225 * OS1_S1 + 78) =
                prefactor_z * *(b + 225 * OS1_S1 + 50) -
                p_over_q * *(b + 295 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 50);
            *(b + 225 * OS1_S1 + 79) =
                prefactor_z * *(b + 225 * OS1_S1 + 51) -
                p_over_q * *(b + 295 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 51) +
                one_over_two_q * *(b + 225 * OS1_S1 + 30);
            *(b + 225 * OS1_S1 + 80) =
                prefactor_y * *(b + 225 * OS1_S1 + 53) -
                p_over_q * *(b + 294 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 225 * OS1_S1 + 33);
            *(b + 225 * OS1_S1 + 81) =
                prefactor_y * *(b + 225 * OS1_S1 + 54) -
                p_over_q * *(b + 294 * OS1_S1 + 54) +
                one_over_two_q * *(b + 225 * OS1_S1 + 34);
            *(b + 225 * OS1_S1 + 82) = prefactor_y * *(b + 225 * OS1_S1 + 55) -
                                       p_over_q * *(b + 294 * OS1_S1 + 55);
            *(b + 225 * OS1_S1 + 83) =
                prefactor_z * *(b + 225 * OS1_S1 + 55) -
                p_over_q * *(b + 295 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 225 * OS1_S1 + 34);
            *(b + 226 * OS1_S1 + 56) =
                prefactor_x * *(b + 226 * OS1_S1 + 35) -
                p_over_q * *(b + 292 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 226 * OS1_S1 + 20);
            *(b + 226 * OS1_S1 + 57) =
                prefactor_y * *(b + 226 * OS1_S1 + 35) -
                p_over_q * *(b + 296 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 35);
            *(b + 226 * OS1_S1 + 58) = prefactor_z * *(b + 226 * OS1_S1 + 35) -
                                       p_over_q * *(b + 297 * OS1_S1 + 35);
            *(b + 226 * OS1_S1 + 59) =
                prefactor_y * *(b + 226 * OS1_S1 + 36) -
                p_over_q * *(b + 296 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 36) +
                one_over_two_q * *(b + 226 * OS1_S1 + 20);
            *(b + 226 * OS1_S1 + 60) = prefactor_z * *(b + 226 * OS1_S1 + 36) -
                                       p_over_q * *(b + 297 * OS1_S1 + 36);
            *(b + 226 * OS1_S1 + 61) =
                prefactor_z * *(b + 226 * OS1_S1 + 37) -
                p_over_q * *(b + 297 * OS1_S1 + 37) +
                one_over_two_q * *(b + 226 * OS1_S1 + 20);
            *(b + 226 * OS1_S1 + 62) =
                prefactor_y * *(b + 226 * OS1_S1 + 38) -
                p_over_q * *(b + 296 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 226 * OS1_S1 + 21);
            *(b + 226 * OS1_S1 + 63) = prefactor_z * *(b + 226 * OS1_S1 + 38) -
                                       p_over_q * *(b + 297 * OS1_S1 + 38);
            *(b + 226 * OS1_S1 + 64) =
                prefactor_y * *(b + 226 * OS1_S1 + 40) -
                p_over_q * *(b + 296 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 40);
            *(b + 226 * OS1_S1 + 65) =
                prefactor_z * *(b + 226 * OS1_S1 + 40) -
                p_over_q * *(b + 297 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 226 * OS1_S1 + 22);
            *(b + 226 * OS1_S1 + 66) =
                prefactor_x * *(b + 226 * OS1_S1 + 45) -
                p_over_q * *(b + 292 * OS1_S1 + 45) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 45) +
                one_over_two_q * *(b + 226 * OS1_S1 + 30);
            *(b + 226 * OS1_S1 + 67) = prefactor_z * *(b + 226 * OS1_S1 + 41) -
                                       p_over_q * *(b + 297 * OS1_S1 + 41);
            *(b + 226 * OS1_S1 + 68) =
                prefactor_z * *(b + 226 * OS1_S1 + 42) -
                p_over_q * *(b + 297 * OS1_S1 + 42) +
                one_over_two_q * *(b + 226 * OS1_S1 + 23);
            *(b + 226 * OS1_S1 + 69) =
                prefactor_y * *(b + 226 * OS1_S1 + 44) -
                p_over_q * *(b + 296 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 44);
            *(b + 226 * OS1_S1 + 70) =
                prefactor_x * *(b + 226 * OS1_S1 + 49) -
                p_over_q * *(b + 292 * OS1_S1 + 49) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 49) +
                one_over_two_q * *(b + 226 * OS1_S1 + 34);
            *(b + 226 * OS1_S1 + 71) =
                prefactor_x * *(b + 226 * OS1_S1 + 50) -
                p_over_q * *(b + 292 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 50);
            *(b + 226 * OS1_S1 + 72) = prefactor_z * *(b + 226 * OS1_S1 + 45) -
                                       p_over_q * *(b + 297 * OS1_S1 + 45);
            *(b + 226 * OS1_S1 + 73) =
                prefactor_x * *(b + 226 * OS1_S1 + 52) -
                p_over_q * *(b + 292 * OS1_S1 + 52) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 52);
            *(b + 226 * OS1_S1 + 74) =
                prefactor_x * *(b + 226 * OS1_S1 + 53) -
                p_over_q * *(b + 292 * OS1_S1 + 53) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 53);
            *(b + 226 * OS1_S1 + 75) =
                prefactor_y * *(b + 226 * OS1_S1 + 49) -
                p_over_q * *(b + 296 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 49);
            *(b + 226 * OS1_S1 + 76) =
                prefactor_x * *(b + 226 * OS1_S1 + 55) -
                p_over_q * *(b + 292 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 55);
            *(b + 226 * OS1_S1 + 77) =
                prefactor_y * *(b + 226 * OS1_S1 + 50) -
                p_over_q * *(b + 296 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 226 * OS1_S1 + 30);
            *(b + 226 * OS1_S1 + 78) = prefactor_z * *(b + 226 * OS1_S1 + 50) -
                                       p_over_q * *(b + 297 * OS1_S1 + 50);
            *(b + 226 * OS1_S1 + 79) =
                prefactor_z * *(b + 226 * OS1_S1 + 51) -
                p_over_q * *(b + 297 * OS1_S1 + 51) +
                one_over_two_q * *(b + 226 * OS1_S1 + 30);
            *(b + 226 * OS1_S1 + 80) =
                prefactor_z * *(b + 226 * OS1_S1 + 52) -
                p_over_q * *(b + 297 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 226 * OS1_S1 + 31);
            *(b + 226 * OS1_S1 + 81) =
                prefactor_y * *(b + 226 * OS1_S1 + 54) -
                p_over_q * *(b + 296 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 54) +
                one_over_two_q * *(b + 226 * OS1_S1 + 34);
            *(b + 226 * OS1_S1 + 82) =
                prefactor_y * *(b + 226 * OS1_S1 + 55) -
                p_over_q * *(b + 296 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 55);
            *(b + 226 * OS1_S1 + 83) =
                prefactor_z * *(b + 226 * OS1_S1 + 55) -
                p_over_q * *(b + 297 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 226 * OS1_S1 + 34);
            *(b + 227 * OS1_S1 + 56) =
                prefactor_x * *(b + 227 * OS1_S1 + 35) -
                p_over_q * *(b + 293 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 227 * OS1_S1 + 20);
            *(b + 227 * OS1_S1 + 57) =
                prefactor_y * *(b + 227 * OS1_S1 + 35) -
                p_over_q * *(b + 297 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 35);
            *(b + 227 * OS1_S1 + 58) =
                prefactor_z * *(b + 227 * OS1_S1 + 35) -
                p_over_q * *(b + 298 * OS1_S1 + 35) +
                one_over_two_q * *(b + 168 * OS1_S1 + 35);
            *(b + 227 * OS1_S1 + 59) =
                prefactor_y * *(b + 227 * OS1_S1 + 36) -
                p_over_q * *(b + 297 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 36) +
                one_over_two_q * *(b + 227 * OS1_S1 + 20);
            *(b + 227 * OS1_S1 + 60) =
                prefactor_z * *(b + 227 * OS1_S1 + 36) -
                p_over_q * *(b + 298 * OS1_S1 + 36) +
                one_over_two_q * *(b + 168 * OS1_S1 + 36);
            *(b + 227 * OS1_S1 + 61) =
                prefactor_z * *(b + 227 * OS1_S1 + 37) -
                p_over_q * *(b + 298 * OS1_S1 + 37) +
                one_over_two_q * *(b + 168 * OS1_S1 + 37) +
                one_over_two_q * *(b + 227 * OS1_S1 + 20);
            *(b + 227 * OS1_S1 + 62) =
                prefactor_y * *(b + 227 * OS1_S1 + 38) -
                p_over_q * *(b + 297 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 21);
            *(b + 227 * OS1_S1 + 63) =
                prefactor_z * *(b + 227 * OS1_S1 + 38) -
                p_over_q * *(b + 298 * OS1_S1 + 38) +
                one_over_two_q * *(b + 168 * OS1_S1 + 38);
            *(b + 227 * OS1_S1 + 64) =
                prefactor_y * *(b + 227 * OS1_S1 + 40) -
                p_over_q * *(b + 297 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 40);
            *(b + 227 * OS1_S1 + 65) =
                prefactor_z * *(b + 227 * OS1_S1 + 40) -
                p_over_q * *(b + 298 * OS1_S1 + 40) +
                one_over_two_q * *(b + 168 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 22);
            *(b + 227 * OS1_S1 + 66) =
                prefactor_x * *(b + 227 * OS1_S1 + 45) -
                p_over_q * *(b + 293 * OS1_S1 + 45) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 45) +
                one_over_two_q * *(b + 227 * OS1_S1 + 30);
            *(b + 227 * OS1_S1 + 67) =
                prefactor_z * *(b + 227 * OS1_S1 + 41) -
                p_over_q * *(b + 298 * OS1_S1 + 41) +
                one_over_two_q * *(b + 168 * OS1_S1 + 41);
            *(b + 227 * OS1_S1 + 68) =
                prefactor_z * *(b + 227 * OS1_S1 + 42) -
                p_over_q * *(b + 298 * OS1_S1 + 42) +
                one_over_two_q * *(b + 168 * OS1_S1 + 42) +
                one_over_two_q * *(b + 227 * OS1_S1 + 23);
            *(b + 227 * OS1_S1 + 69) =
                prefactor_y * *(b + 227 * OS1_S1 + 44) -
                p_over_q * *(b + 297 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 44);
            *(b + 227 * OS1_S1 + 70) =
                prefactor_x * *(b + 227 * OS1_S1 + 49) -
                p_over_q * *(b + 293 * OS1_S1 + 49) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 49) +
                one_over_two_q * *(b + 227 * OS1_S1 + 34);
            *(b + 227 * OS1_S1 + 71) =
                prefactor_x * *(b + 227 * OS1_S1 + 50) -
                p_over_q * *(b + 293 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 50);
            *(b + 227 * OS1_S1 + 72) =
                prefactor_z * *(b + 227 * OS1_S1 + 45) -
                p_over_q * *(b + 298 * OS1_S1 + 45) +
                one_over_two_q * *(b + 168 * OS1_S1 + 45);
            *(b + 227 * OS1_S1 + 73) =
                prefactor_x * *(b + 227 * OS1_S1 + 52) -
                p_over_q * *(b + 293 * OS1_S1 + 52) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 52);
            *(b + 227 * OS1_S1 + 74) =
                prefactor_x * *(b + 227 * OS1_S1 + 53) -
                p_over_q * *(b + 293 * OS1_S1 + 53) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 53);
            *(b + 227 * OS1_S1 + 75) =
                prefactor_y * *(b + 227 * OS1_S1 + 49) -
                p_over_q * *(b + 297 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 49);
            *(b + 227 * OS1_S1 + 76) =
                prefactor_x * *(b + 227 * OS1_S1 + 55) -
                p_over_q * *(b + 293 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 55);
            *(b + 227 * OS1_S1 + 77) =
                prefactor_y * *(b + 227 * OS1_S1 + 50) -
                p_over_q * *(b + 297 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 227 * OS1_S1 + 30);
            *(b + 227 * OS1_S1 + 78) =
                prefactor_z * *(b + 227 * OS1_S1 + 50) -
                p_over_q * *(b + 298 * OS1_S1 + 50) +
                one_over_two_q * *(b + 168 * OS1_S1 + 50);
            *(b + 227 * OS1_S1 + 79) =
                prefactor_z * *(b + 227 * OS1_S1 + 51) -
                p_over_q * *(b + 298 * OS1_S1 + 51) +
                one_over_two_q * *(b + 168 * OS1_S1 + 51) +
                one_over_two_q * *(b + 227 * OS1_S1 + 30);
            *(b + 227 * OS1_S1 + 80) =
                prefactor_z * *(b + 227 * OS1_S1 + 52) -
                p_over_q * *(b + 298 * OS1_S1 + 52) +
                one_over_two_q * *(b + 168 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 31);
            *(b + 227 * OS1_S1 + 81) =
                prefactor_y * *(b + 227 * OS1_S1 + 54) -
                p_over_q * *(b + 297 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 54) +
                one_over_two_q * *(b + 227 * OS1_S1 + 34);
            *(b + 227 * OS1_S1 + 82) =
                prefactor_y * *(b + 227 * OS1_S1 + 55) -
                p_over_q * *(b + 297 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 55);
            *(b + 227 * OS1_S1 + 83) =
                prefactor_z * *(b + 227 * OS1_S1 + 55) -
                p_over_q * *(b + 298 * OS1_S1 + 55) +
                one_over_two_q * *(b + 168 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 227 * OS1_S1 + 34);
            *(b + 228 * OS1_S1 + 56) =
                prefactor_x * *(b + 228 * OS1_S1 + 35) -
                p_over_q * *(b + 294 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 228 * OS1_S1 + 20);
            *(b + 228 * OS1_S1 + 57) =
                prefactor_y * *(b + 228 * OS1_S1 + 35) -
                p_over_q * *(b + 298 * OS1_S1 + 35) +
                one_over_two_q * *(b + 170 * OS1_S1 + 35);
            *(b + 228 * OS1_S1 + 58) =
                prefactor_z * *(b + 228 * OS1_S1 + 35) -
                p_over_q * *(b + 299 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 35);
            *(b + 228 * OS1_S1 + 59) =
                prefactor_y * *(b + 228 * OS1_S1 + 36) -
                p_over_q * *(b + 298 * OS1_S1 + 36) +
                one_over_two_q * *(b + 170 * OS1_S1 + 36) +
                one_over_two_q * *(b + 228 * OS1_S1 + 20);
            *(b + 228 * OS1_S1 + 60) =
                prefactor_y * *(b + 228 * OS1_S1 + 37) -
                p_over_q * *(b + 298 * OS1_S1 + 37) +
                one_over_two_q * *(b + 170 * OS1_S1 + 37);
            *(b + 228 * OS1_S1 + 61) =
                prefactor_z * *(b + 228 * OS1_S1 + 37) -
                p_over_q * *(b + 299 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 37) +
                one_over_two_q * *(b + 228 * OS1_S1 + 20);
            *(b + 228 * OS1_S1 + 62) =
                prefactor_y * *(b + 228 * OS1_S1 + 38) -
                p_over_q * *(b + 298 * OS1_S1 + 38) +
                one_over_two_q * *(b + 170 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 21);
            *(b + 228 * OS1_S1 + 63) =
                prefactor_z * *(b + 228 * OS1_S1 + 38) -
                p_over_q * *(b + 299 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 38);
            *(b + 228 * OS1_S1 + 64) =
                prefactor_y * *(b + 228 * OS1_S1 + 40) -
                p_over_q * *(b + 298 * OS1_S1 + 40) +
                one_over_two_q * *(b + 170 * OS1_S1 + 40);
            *(b + 228 * OS1_S1 + 65) =
                prefactor_z * *(b + 228 * OS1_S1 + 40) -
                p_over_q * *(b + 299 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 22);
            *(b + 228 * OS1_S1 + 66) =
                prefactor_x * *(b + 228 * OS1_S1 + 45) -
                p_over_q * *(b + 294 * OS1_S1 + 45) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 45) +
                one_over_two_q * *(b + 228 * OS1_S1 + 30);
            *(b + 228 * OS1_S1 + 67) =
                prefactor_z * *(b + 228 * OS1_S1 + 41) -
                p_over_q * *(b + 299 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 41);
            *(b + 228 * OS1_S1 + 68) =
                prefactor_y * *(b + 228 * OS1_S1 + 43) -
                p_over_q * *(b + 298 * OS1_S1 + 43) +
                one_over_two_q * *(b + 170 * OS1_S1 + 43) +
                one_over_two_q * *(b + 228 * OS1_S1 + 25);
            *(b + 228 * OS1_S1 + 69) =
                prefactor_y * *(b + 228 * OS1_S1 + 44) -
                p_over_q * *(b + 298 * OS1_S1 + 44) +
                one_over_two_q * *(b + 170 * OS1_S1 + 44);
            *(b + 228 * OS1_S1 + 70) =
                prefactor_x * *(b + 228 * OS1_S1 + 49) -
                p_over_q * *(b + 294 * OS1_S1 + 49) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 49) +
                one_over_two_q * *(b + 228 * OS1_S1 + 34);
            *(b + 228 * OS1_S1 + 71) =
                prefactor_x * *(b + 228 * OS1_S1 + 50) -
                p_over_q * *(b + 294 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 50);
            *(b + 228 * OS1_S1 + 72) =
                prefactor_z * *(b + 228 * OS1_S1 + 45) -
                p_over_q * *(b + 299 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 45);
            *(b + 228 * OS1_S1 + 73) =
                prefactor_x * *(b + 228 * OS1_S1 + 52) -
                p_over_q * *(b + 294 * OS1_S1 + 52) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 52);
            *(b + 228 * OS1_S1 + 74) =
                prefactor_x * *(b + 228 * OS1_S1 + 53) -
                p_over_q * *(b + 294 * OS1_S1 + 53) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 53);
            *(b + 228 * OS1_S1 + 75) =
                prefactor_y * *(b + 228 * OS1_S1 + 49) -
                p_over_q * *(b + 298 * OS1_S1 + 49) +
                one_over_two_q * *(b + 170 * OS1_S1 + 49);
            *(b + 228 * OS1_S1 + 76) =
                prefactor_x * *(b + 228 * OS1_S1 + 55) -
                p_over_q * *(b + 294 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 55);
            *(b + 228 * OS1_S1 + 77) =
                prefactor_y * *(b + 228 * OS1_S1 + 50) -
                p_over_q * *(b + 298 * OS1_S1 + 50) +
                one_over_two_q * *(b + 170 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 228 * OS1_S1 + 30);
            *(b + 228 * OS1_S1 + 78) =
                prefactor_z * *(b + 228 * OS1_S1 + 50) -
                p_over_q * *(b + 299 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 50);
            *(b + 228 * OS1_S1 + 79) =
                prefactor_z * *(b + 228 * OS1_S1 + 51) -
                p_over_q * *(b + 299 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 51) +
                one_over_two_q * *(b + 228 * OS1_S1 + 30);
            *(b + 228 * OS1_S1 + 80) =
                prefactor_y * *(b + 228 * OS1_S1 + 53) -
                p_over_q * *(b + 298 * OS1_S1 + 53) +
                one_over_two_q * *(b + 170 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 33);
            *(b + 228 * OS1_S1 + 81) =
                prefactor_y * *(b + 228 * OS1_S1 + 54) -
                p_over_q * *(b + 298 * OS1_S1 + 54) +
                one_over_two_q * *(b + 170 * OS1_S1 + 54) +
                one_over_two_q * *(b + 228 * OS1_S1 + 34);
            *(b + 228 * OS1_S1 + 82) =
                prefactor_y * *(b + 228 * OS1_S1 + 55) -
                p_over_q * *(b + 298 * OS1_S1 + 55) +
                one_over_two_q * *(b + 170 * OS1_S1 + 55);
            *(b + 228 * OS1_S1 + 83) =
                prefactor_z * *(b + 228 * OS1_S1 + 55) -
                p_over_q * *(b + 299 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 228 * OS1_S1 + 34);
            *(b + 229 * OS1_S1 + 56) =
                prefactor_x * *(b + 229 * OS1_S1 + 35) -
                p_over_q * *(b + 295 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 229 * OS1_S1 + 20);
            *(b + 229 * OS1_S1 + 57) = prefactor_y * *(b + 229 * OS1_S1 + 35) -
                                       p_over_q * *(b + 299 * OS1_S1 + 35);
            *(b + 229 * OS1_S1 + 58) =
                prefactor_z * *(b + 229 * OS1_S1 + 35) -
                p_over_q * *(b + 300 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 35);
            *(b + 229 * OS1_S1 + 59) =
                prefactor_y * *(b + 229 * OS1_S1 + 36) -
                p_over_q * *(b + 299 * OS1_S1 + 36) +
                one_over_two_q * *(b + 229 * OS1_S1 + 20);
            *(b + 229 * OS1_S1 + 60) = prefactor_y * *(b + 229 * OS1_S1 + 37) -
                                       p_over_q * *(b + 299 * OS1_S1 + 37);
            *(b + 229 * OS1_S1 + 61) =
                prefactor_z * *(b + 229 * OS1_S1 + 37) -
                p_over_q * *(b + 300 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 37) +
                one_over_two_q * *(b + 229 * OS1_S1 + 20);
            *(b + 229 * OS1_S1 + 62) =
                prefactor_y * *(b + 229 * OS1_S1 + 38) -
                p_over_q * *(b + 299 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 229 * OS1_S1 + 21);
            *(b + 229 * OS1_S1 + 63) =
                prefactor_z * *(b + 229 * OS1_S1 + 38) -
                p_over_q * *(b + 300 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 38);
            *(b + 229 * OS1_S1 + 64) = prefactor_y * *(b + 229 * OS1_S1 + 40) -
                                       p_over_q * *(b + 299 * OS1_S1 + 40);
            *(b + 229 * OS1_S1 + 65) =
                prefactor_z * *(b + 229 * OS1_S1 + 40) -
                p_over_q * *(b + 300 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 229 * OS1_S1 + 22);
            *(b + 229 * OS1_S1 + 66) =
                prefactor_x * *(b + 229 * OS1_S1 + 45) -
                p_over_q * *(b + 295 * OS1_S1 + 45) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 45) +
                one_over_two_q * *(b + 229 * OS1_S1 + 30);
            *(b + 229 * OS1_S1 + 67) =
                prefactor_z * *(b + 229 * OS1_S1 + 41) -
                p_over_q * *(b + 300 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 41);
            *(b + 229 * OS1_S1 + 68) =
                prefactor_y * *(b + 229 * OS1_S1 + 43) -
                p_over_q * *(b + 299 * OS1_S1 + 43) +
                one_over_two_q * *(b + 229 * OS1_S1 + 25);
            *(b + 229 * OS1_S1 + 69) = prefactor_y * *(b + 229 * OS1_S1 + 44) -
                                       p_over_q * *(b + 299 * OS1_S1 + 44);
            *(b + 229 * OS1_S1 + 70) =
                prefactor_x * *(b + 229 * OS1_S1 + 49) -
                p_over_q * *(b + 295 * OS1_S1 + 49) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 49) +
                one_over_two_q * *(b + 229 * OS1_S1 + 34);
            *(b + 229 * OS1_S1 + 71) =
                prefactor_x * *(b + 229 * OS1_S1 + 50) -
                p_over_q * *(b + 295 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 50);
            *(b + 229 * OS1_S1 + 72) =
                prefactor_z * *(b + 229 * OS1_S1 + 45) -
                p_over_q * *(b + 300 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 45);
            *(b + 229 * OS1_S1 + 73) =
                prefactor_x * *(b + 229 * OS1_S1 + 52) -
                p_over_q * *(b + 295 * OS1_S1 + 52) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 52);
            *(b + 229 * OS1_S1 + 74) =
                prefactor_x * *(b + 229 * OS1_S1 + 53) -
                p_over_q * *(b + 295 * OS1_S1 + 53) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 53);
            *(b + 229 * OS1_S1 + 75) = prefactor_y * *(b + 229 * OS1_S1 + 49) -
                                       p_over_q * *(b + 299 * OS1_S1 + 49);
            *(b + 229 * OS1_S1 + 76) =
                prefactor_x * *(b + 229 * OS1_S1 + 55) -
                p_over_q * *(b + 295 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 55);
            *(b + 229 * OS1_S1 + 77) =
                prefactor_y * *(b + 229 * OS1_S1 + 50) -
                p_over_q * *(b + 299 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 229 * OS1_S1 + 30);
            *(b + 229 * OS1_S1 + 78) =
                prefactor_z * *(b + 229 * OS1_S1 + 50) -
                p_over_q * *(b + 300 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 50);
            *(b + 229 * OS1_S1 + 79) =
                prefactor_z * *(b + 229 * OS1_S1 + 51) -
                p_over_q * *(b + 300 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 51) +
                one_over_two_q * *(b + 229 * OS1_S1 + 30);
            *(b + 229 * OS1_S1 + 80) =
                prefactor_y * *(b + 229 * OS1_S1 + 53) -
                p_over_q * *(b + 299 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 229 * OS1_S1 + 33);
            *(b + 229 * OS1_S1 + 81) =
                prefactor_y * *(b + 229 * OS1_S1 + 54) -
                p_over_q * *(b + 299 * OS1_S1 + 54) +
                one_over_two_q * *(b + 229 * OS1_S1 + 34);
            *(b + 229 * OS1_S1 + 82) = prefactor_y * *(b + 229 * OS1_S1 + 55) -
                                       p_over_q * *(b + 299 * OS1_S1 + 55);
            *(b + 229 * OS1_S1 + 83) =
                prefactor_z * *(b + 229 * OS1_S1 + 55) -
                p_over_q * *(b + 300 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 229 * OS1_S1 + 34);
            *(b + 230 * OS1_S1 + 56) =
                prefactor_x * *(b + 230 * OS1_S1 + 35) -
                p_over_q * *(b + 296 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 20);
            *(b + 230 * OS1_S1 + 57) =
                prefactor_y * *(b + 230 * OS1_S1 + 35) -
                p_over_q * *(b + 301 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 35);
            *(b + 230 * OS1_S1 + 58) = prefactor_z * *(b + 230 * OS1_S1 + 35) -
                                       p_over_q * *(b + 302 * OS1_S1 + 35);
            *(b + 230 * OS1_S1 + 59) =
                prefactor_y * *(b + 230 * OS1_S1 + 36) -
                p_over_q * *(b + 301 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 36) +
                one_over_two_q * *(b + 230 * OS1_S1 + 20);
            *(b + 230 * OS1_S1 + 60) = prefactor_z * *(b + 230 * OS1_S1 + 36) -
                                       p_over_q * *(b + 302 * OS1_S1 + 36);
            *(b + 230 * OS1_S1 + 61) =
                prefactor_z * *(b + 230 * OS1_S1 + 37) -
                p_over_q * *(b + 302 * OS1_S1 + 37) +
                one_over_two_q * *(b + 230 * OS1_S1 + 20);
            *(b + 230 * OS1_S1 + 62) =
                prefactor_y * *(b + 230 * OS1_S1 + 38) -
                p_over_q * *(b + 301 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 230 * OS1_S1 + 21);
            *(b + 230 * OS1_S1 + 63) = prefactor_z * *(b + 230 * OS1_S1 + 38) -
                                       p_over_q * *(b + 302 * OS1_S1 + 38);
            *(b + 230 * OS1_S1 + 64) =
                prefactor_y * *(b + 230 * OS1_S1 + 40) -
                p_over_q * *(b + 301 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 40);
            *(b + 230 * OS1_S1 + 65) =
                prefactor_z * *(b + 230 * OS1_S1 + 40) -
                p_over_q * *(b + 302 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 230 * OS1_S1 + 22);
            *(b + 230 * OS1_S1 + 66) =
                prefactor_x * *(b + 230 * OS1_S1 + 45) -
                p_over_q * *(b + 296 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 45) +
                one_over_two_q * *(b + 230 * OS1_S1 + 30);
            *(b + 230 * OS1_S1 + 67) = prefactor_z * *(b + 230 * OS1_S1 + 41) -
                                       p_over_q * *(b + 302 * OS1_S1 + 41);
            *(b + 230 * OS1_S1 + 68) =
                prefactor_z * *(b + 230 * OS1_S1 + 42) -
                p_over_q * *(b + 302 * OS1_S1 + 42) +
                one_over_two_q * *(b + 230 * OS1_S1 + 23);
            *(b + 230 * OS1_S1 + 69) =
                prefactor_y * *(b + 230 * OS1_S1 + 44) -
                p_over_q * *(b + 301 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 44);
            *(b + 230 * OS1_S1 + 70) =
                prefactor_x * *(b + 230 * OS1_S1 + 49) -
                p_over_q * *(b + 296 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 49) +
                one_over_two_q * *(b + 230 * OS1_S1 + 34);
            *(b + 230 * OS1_S1 + 71) =
                prefactor_x * *(b + 230 * OS1_S1 + 50) -
                p_over_q * *(b + 296 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 50);
            *(b + 230 * OS1_S1 + 72) = prefactor_z * *(b + 230 * OS1_S1 + 45) -
                                       p_over_q * *(b + 302 * OS1_S1 + 45);
            *(b + 230 * OS1_S1 + 73) =
                prefactor_x * *(b + 230 * OS1_S1 + 52) -
                p_over_q * *(b + 296 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 52);
            *(b + 230 * OS1_S1 + 74) =
                prefactor_x * *(b + 230 * OS1_S1 + 53) -
                p_over_q * *(b + 296 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 53);
            *(b + 230 * OS1_S1 + 75) =
                prefactor_y * *(b + 230 * OS1_S1 + 49) -
                p_over_q * *(b + 301 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 49);
            *(b + 230 * OS1_S1 + 76) =
                prefactor_x * *(b + 230 * OS1_S1 + 55) -
                p_over_q * *(b + 296 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 55);
            *(b + 230 * OS1_S1 + 77) =
                prefactor_y * *(b + 230 * OS1_S1 + 50) -
                p_over_q * *(b + 301 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 30);
            *(b + 230 * OS1_S1 + 78) = prefactor_z * *(b + 230 * OS1_S1 + 50) -
                                       p_over_q * *(b + 302 * OS1_S1 + 50);
            *(b + 230 * OS1_S1 + 79) =
                prefactor_z * *(b + 230 * OS1_S1 + 51) -
                p_over_q * *(b + 302 * OS1_S1 + 51) +
                one_over_two_q * *(b + 230 * OS1_S1 + 30);
            *(b + 230 * OS1_S1 + 80) =
                prefactor_z * *(b + 230 * OS1_S1 + 52) -
                p_over_q * *(b + 302 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 230 * OS1_S1 + 31);
            *(b + 230 * OS1_S1 + 81) =
                prefactor_y * *(b + 230 * OS1_S1 + 54) -
                p_over_q * *(b + 301 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 54) +
                one_over_two_q * *(b + 230 * OS1_S1 + 34);
            *(b + 230 * OS1_S1 + 82) =
                prefactor_y * *(b + 230 * OS1_S1 + 55) -
                p_over_q * *(b + 301 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 55);
            *(b + 230 * OS1_S1 + 83) =
                prefactor_z * *(b + 230 * OS1_S1 + 55) -
                p_over_q * *(b + 302 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 34);
            *(b + 231 * OS1_S1 + 56) =
                prefactor_x * *(b + 231 * OS1_S1 + 35) -
                p_over_q * *(b + 297 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 231 * OS1_S1 + 20);
            *(b + 231 * OS1_S1 + 57) =
                prefactor_y * *(b + 231 * OS1_S1 + 35) -
                p_over_q * *(b + 302 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 35);
            *(b + 231 * OS1_S1 + 58) =
                prefactor_z * *(b + 231 * OS1_S1 + 35) -
                p_over_q * *(b + 303 * OS1_S1 + 35) +
                one_over_two_q * *(b + 171 * OS1_S1 + 35);
            *(b + 231 * OS1_S1 + 59) =
                prefactor_y * *(b + 231 * OS1_S1 + 36) -
                p_over_q * *(b + 302 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 36) +
                one_over_two_q * *(b + 231 * OS1_S1 + 20);
            *(b + 231 * OS1_S1 + 60) =
                prefactor_z * *(b + 231 * OS1_S1 + 36) -
                p_over_q * *(b + 303 * OS1_S1 + 36) +
                one_over_two_q * *(b + 171 * OS1_S1 + 36);
            *(b + 231 * OS1_S1 + 61) =
                prefactor_z * *(b + 231 * OS1_S1 + 37) -
                p_over_q * *(b + 303 * OS1_S1 + 37) +
                one_over_two_q * *(b + 171 * OS1_S1 + 37) +
                one_over_two_q * *(b + 231 * OS1_S1 + 20);
            *(b + 231 * OS1_S1 + 62) =
                prefactor_y * *(b + 231 * OS1_S1 + 38) -
                p_over_q * *(b + 302 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 21);
            *(b + 231 * OS1_S1 + 63) =
                prefactor_z * *(b + 231 * OS1_S1 + 38) -
                p_over_q * *(b + 303 * OS1_S1 + 38) +
                one_over_two_q * *(b + 171 * OS1_S1 + 38);
            *(b + 231 * OS1_S1 + 64) =
                prefactor_y * *(b + 231 * OS1_S1 + 40) -
                p_over_q * *(b + 302 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 40);
            *(b + 231 * OS1_S1 + 65) =
                prefactor_z * *(b + 231 * OS1_S1 + 40) -
                p_over_q * *(b + 303 * OS1_S1 + 40) +
                one_over_two_q * *(b + 171 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 22);
            *(b + 231 * OS1_S1 + 66) =
                prefactor_x * *(b + 231 * OS1_S1 + 45) -
                p_over_q * *(b + 297 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 45) +
                one_over_two_q * *(b + 231 * OS1_S1 + 30);
            *(b + 231 * OS1_S1 + 67) =
                prefactor_z * *(b + 231 * OS1_S1 + 41) -
                p_over_q * *(b + 303 * OS1_S1 + 41) +
                one_over_two_q * *(b + 171 * OS1_S1 + 41);
            *(b + 231 * OS1_S1 + 68) =
                prefactor_z * *(b + 231 * OS1_S1 + 42) -
                p_over_q * *(b + 303 * OS1_S1 + 42) +
                one_over_two_q * *(b + 171 * OS1_S1 + 42) +
                one_over_two_q * *(b + 231 * OS1_S1 + 23);
            *(b + 231 * OS1_S1 + 69) =
                prefactor_y * *(b + 231 * OS1_S1 + 44) -
                p_over_q * *(b + 302 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 44);
            *(b + 231 * OS1_S1 + 70) =
                prefactor_x * *(b + 231 * OS1_S1 + 49) -
                p_over_q * *(b + 297 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 49) +
                one_over_two_q * *(b + 231 * OS1_S1 + 34);
            *(b + 231 * OS1_S1 + 71) =
                prefactor_x * *(b + 231 * OS1_S1 + 50) -
                p_over_q * *(b + 297 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 50);
            *(b + 231 * OS1_S1 + 72) =
                prefactor_z * *(b + 231 * OS1_S1 + 45) -
                p_over_q * *(b + 303 * OS1_S1 + 45) +
                one_over_two_q * *(b + 171 * OS1_S1 + 45);
            *(b + 231 * OS1_S1 + 73) =
                prefactor_x * *(b + 231 * OS1_S1 + 52) -
                p_over_q * *(b + 297 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 52);
            *(b + 231 * OS1_S1 + 74) =
                prefactor_x * *(b + 231 * OS1_S1 + 53) -
                p_over_q * *(b + 297 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 53);
            *(b + 231 * OS1_S1 + 75) =
                prefactor_y * *(b + 231 * OS1_S1 + 49) -
                p_over_q * *(b + 302 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 49);
            *(b + 231 * OS1_S1 + 76) =
                prefactor_x * *(b + 231 * OS1_S1 + 55) -
                p_over_q * *(b + 297 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 55);
            *(b + 231 * OS1_S1 + 77) =
                prefactor_y * *(b + 231 * OS1_S1 + 50) -
                p_over_q * *(b + 302 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 231 * OS1_S1 + 30);
            *(b + 231 * OS1_S1 + 78) =
                prefactor_z * *(b + 231 * OS1_S1 + 50) -
                p_over_q * *(b + 303 * OS1_S1 + 50) +
                one_over_two_q * *(b + 171 * OS1_S1 + 50);
            *(b + 231 * OS1_S1 + 79) =
                prefactor_z * *(b + 231 * OS1_S1 + 51) -
                p_over_q * *(b + 303 * OS1_S1 + 51) +
                one_over_two_q * *(b + 171 * OS1_S1 + 51) +
                one_over_two_q * *(b + 231 * OS1_S1 + 30);
            *(b + 231 * OS1_S1 + 80) =
                prefactor_z * *(b + 231 * OS1_S1 + 52) -
                p_over_q * *(b + 303 * OS1_S1 + 52) +
                one_over_two_q * *(b + 171 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 31);
            *(b + 231 * OS1_S1 + 81) =
                prefactor_y * *(b + 231 * OS1_S1 + 54) -
                p_over_q * *(b + 302 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 54) +
                one_over_two_q * *(b + 231 * OS1_S1 + 34);
            *(b + 231 * OS1_S1 + 82) =
                prefactor_y * *(b + 231 * OS1_S1 + 55) -
                p_over_q * *(b + 302 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 55);
            *(b + 231 * OS1_S1 + 83) =
                prefactor_z * *(b + 231 * OS1_S1 + 55) -
                p_over_q * *(b + 303 * OS1_S1 + 55) +
                one_over_two_q * *(b + 171 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 231 * OS1_S1 + 34);
            *(b + 232 * OS1_S1 + 56) =
                prefactor_x * *(b + 232 * OS1_S1 + 35) -
                p_over_q * *(b + 298 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 232 * OS1_S1 + 20);
            *(b + 232 * OS1_S1 + 57) =
                prefactor_y * *(b + 232 * OS1_S1 + 35) -
                p_over_q * *(b + 303 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 35);
            *(b + 232 * OS1_S1 + 58) =
                prefactor_z * *(b + 232 * OS1_S1 + 35) -
                p_over_q * *(b + 304 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 35);
            *(b + 232 * OS1_S1 + 59) =
                prefactor_y * *(b + 232 * OS1_S1 + 36) -
                p_over_q * *(b + 303 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 36) +
                one_over_two_q * *(b + 232 * OS1_S1 + 20);
            *(b + 232 * OS1_S1 + 60) =
                prefactor_z * *(b + 232 * OS1_S1 + 36) -
                p_over_q * *(b + 304 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 36);
            *(b + 232 * OS1_S1 + 61) =
                prefactor_z * *(b + 232 * OS1_S1 + 37) -
                p_over_q * *(b + 304 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 37) +
                one_over_two_q * *(b + 232 * OS1_S1 + 20);
            *(b + 232 * OS1_S1 + 62) =
                prefactor_y * *(b + 232 * OS1_S1 + 38) -
                p_over_q * *(b + 303 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 232 * OS1_S1 + 21);
            *(b + 232 * OS1_S1 + 63) =
                prefactor_z * *(b + 232 * OS1_S1 + 38) -
                p_over_q * *(b + 304 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 38);
            *(b + 232 * OS1_S1 + 64) =
                prefactor_y * *(b + 232 * OS1_S1 + 40) -
                p_over_q * *(b + 303 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 40);
            *(b + 232 * OS1_S1 + 65) =
                prefactor_z * *(b + 232 * OS1_S1 + 40) -
                p_over_q * *(b + 304 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 232 * OS1_S1 + 22);
            *(b + 232 * OS1_S1 + 66) =
                prefactor_x * *(b + 232 * OS1_S1 + 45) -
                p_over_q * *(b + 298 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 45) +
                one_over_two_q * *(b + 232 * OS1_S1 + 30);
            *(b + 232 * OS1_S1 + 67) =
                prefactor_z * *(b + 232 * OS1_S1 + 41) -
                p_over_q * *(b + 304 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 41);
            *(b + 232 * OS1_S1 + 68) =
                prefactor_z * *(b + 232 * OS1_S1 + 42) -
                p_over_q * *(b + 304 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 42) +
                one_over_two_q * *(b + 232 * OS1_S1 + 23);
            *(b + 232 * OS1_S1 + 69) =
                prefactor_y * *(b + 232 * OS1_S1 + 44) -
                p_over_q * *(b + 303 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 44);
            *(b + 232 * OS1_S1 + 70) =
                prefactor_x * *(b + 232 * OS1_S1 + 49) -
                p_over_q * *(b + 298 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 49) +
                one_over_two_q * *(b + 232 * OS1_S1 + 34);
            *(b + 232 * OS1_S1 + 71) =
                prefactor_x * *(b + 232 * OS1_S1 + 50) -
                p_over_q * *(b + 298 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 50);
            *(b + 232 * OS1_S1 + 72) =
                prefactor_z * *(b + 232 * OS1_S1 + 45) -
                p_over_q * *(b + 304 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 45);
            *(b + 232 * OS1_S1 + 73) =
                prefactor_x * *(b + 232 * OS1_S1 + 52) -
                p_over_q * *(b + 298 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 52);
            *(b + 232 * OS1_S1 + 74) =
                prefactor_x * *(b + 232 * OS1_S1 + 53) -
                p_over_q * *(b + 298 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 53);
            *(b + 232 * OS1_S1 + 75) =
                prefactor_y * *(b + 232 * OS1_S1 + 49) -
                p_over_q * *(b + 303 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 49);
            *(b + 232 * OS1_S1 + 76) =
                prefactor_x * *(b + 232 * OS1_S1 + 55) -
                p_over_q * *(b + 298 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 55);
            *(b + 232 * OS1_S1 + 77) =
                prefactor_y * *(b + 232 * OS1_S1 + 50) -
                p_over_q * *(b + 303 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 232 * OS1_S1 + 30);
            *(b + 232 * OS1_S1 + 78) =
                prefactor_z * *(b + 232 * OS1_S1 + 50) -
                p_over_q * *(b + 304 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 50);
            *(b + 232 * OS1_S1 + 79) =
                prefactor_z * *(b + 232 * OS1_S1 + 51) -
                p_over_q * *(b + 304 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 51) +
                one_over_two_q * *(b + 232 * OS1_S1 + 30);
            *(b + 232 * OS1_S1 + 80) =
                prefactor_z * *(b + 232 * OS1_S1 + 52) -
                p_over_q * *(b + 304 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 232 * OS1_S1 + 31);
            *(b + 232 * OS1_S1 + 81) =
                prefactor_y * *(b + 232 * OS1_S1 + 54) -
                p_over_q * *(b + 303 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 54) +
                one_over_two_q * *(b + 232 * OS1_S1 + 34);
            *(b + 232 * OS1_S1 + 82) =
                prefactor_y * *(b + 232 * OS1_S1 + 55) -
                p_over_q * *(b + 303 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 55);
            *(b + 232 * OS1_S1 + 83) =
                prefactor_z * *(b + 232 * OS1_S1 + 55) -
                p_over_q * *(b + 304 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 232 * OS1_S1 + 34);
            *(b + 233 * OS1_S1 + 56) =
                prefactor_x * *(b + 233 * OS1_S1 + 35) -
                p_over_q * *(b + 299 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 233 * OS1_S1 + 20);
            *(b + 233 * OS1_S1 + 57) =
                prefactor_y * *(b + 233 * OS1_S1 + 35) -
                p_over_q * *(b + 304 * OS1_S1 + 35) +
                one_over_two_q * *(b + 174 * OS1_S1 + 35);
            *(b + 233 * OS1_S1 + 58) =
                prefactor_z * *(b + 233 * OS1_S1 + 35) -
                p_over_q * *(b + 305 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 35);
            *(b + 233 * OS1_S1 + 59) =
                prefactor_y * *(b + 233 * OS1_S1 + 36) -
                p_over_q * *(b + 304 * OS1_S1 + 36) +
                one_over_two_q * *(b + 174 * OS1_S1 + 36) +
                one_over_two_q * *(b + 233 * OS1_S1 + 20);
            *(b + 233 * OS1_S1 + 60) =
                prefactor_y * *(b + 233 * OS1_S1 + 37) -
                p_over_q * *(b + 304 * OS1_S1 + 37) +
                one_over_two_q * *(b + 174 * OS1_S1 + 37);
            *(b + 233 * OS1_S1 + 61) =
                prefactor_z * *(b + 233 * OS1_S1 + 37) -
                p_over_q * *(b + 305 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 37) +
                one_over_two_q * *(b + 233 * OS1_S1 + 20);
            *(b + 233 * OS1_S1 + 62) =
                prefactor_y * *(b + 233 * OS1_S1 + 38) -
                p_over_q * *(b + 304 * OS1_S1 + 38) +
                one_over_two_q * *(b + 174 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 21);
            *(b + 233 * OS1_S1 + 63) =
                prefactor_z * *(b + 233 * OS1_S1 + 38) -
                p_over_q * *(b + 305 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 38);
            *(b + 233 * OS1_S1 + 64) =
                prefactor_y * *(b + 233 * OS1_S1 + 40) -
                p_over_q * *(b + 304 * OS1_S1 + 40) +
                one_over_two_q * *(b + 174 * OS1_S1 + 40);
            *(b + 233 * OS1_S1 + 65) =
                prefactor_z * *(b + 233 * OS1_S1 + 40) -
                p_over_q * *(b + 305 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 22);
            *(b + 233 * OS1_S1 + 66) =
                prefactor_x * *(b + 233 * OS1_S1 + 45) -
                p_over_q * *(b + 299 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 45) +
                one_over_two_q * *(b + 233 * OS1_S1 + 30);
            *(b + 233 * OS1_S1 + 67) =
                prefactor_z * *(b + 233 * OS1_S1 + 41) -
                p_over_q * *(b + 305 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 41);
            *(b + 233 * OS1_S1 + 68) =
                prefactor_y * *(b + 233 * OS1_S1 + 43) -
                p_over_q * *(b + 304 * OS1_S1 + 43) +
                one_over_two_q * *(b + 174 * OS1_S1 + 43) +
                one_over_two_q * *(b + 233 * OS1_S1 + 25);
            *(b + 233 * OS1_S1 + 69) =
                prefactor_y * *(b + 233 * OS1_S1 + 44) -
                p_over_q * *(b + 304 * OS1_S1 + 44) +
                one_over_two_q * *(b + 174 * OS1_S1 + 44);
            *(b + 233 * OS1_S1 + 70) =
                prefactor_x * *(b + 233 * OS1_S1 + 49) -
                p_over_q * *(b + 299 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 49) +
                one_over_two_q * *(b + 233 * OS1_S1 + 34);
            *(b + 233 * OS1_S1 + 71) =
                prefactor_x * *(b + 233 * OS1_S1 + 50) -
                p_over_q * *(b + 299 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 50);
            *(b + 233 * OS1_S1 + 72) =
                prefactor_z * *(b + 233 * OS1_S1 + 45) -
                p_over_q * *(b + 305 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 45);
            *(b + 233 * OS1_S1 + 73) =
                prefactor_x * *(b + 233 * OS1_S1 + 52) -
                p_over_q * *(b + 299 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 52);
            *(b + 233 * OS1_S1 + 74) =
                prefactor_x * *(b + 233 * OS1_S1 + 53) -
                p_over_q * *(b + 299 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 53);
            *(b + 233 * OS1_S1 + 75) =
                prefactor_y * *(b + 233 * OS1_S1 + 49) -
                p_over_q * *(b + 304 * OS1_S1 + 49) +
                one_over_two_q * *(b + 174 * OS1_S1 + 49);
            *(b + 233 * OS1_S1 + 76) =
                prefactor_x * *(b + 233 * OS1_S1 + 55) -
                p_over_q * *(b + 299 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 55);
            *(b + 233 * OS1_S1 + 77) =
                prefactor_y * *(b + 233 * OS1_S1 + 50) -
                p_over_q * *(b + 304 * OS1_S1 + 50) +
                one_over_two_q * *(b + 174 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 233 * OS1_S1 + 30);
            *(b + 233 * OS1_S1 + 78) =
                prefactor_z * *(b + 233 * OS1_S1 + 50) -
                p_over_q * *(b + 305 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 50);
            *(b + 233 * OS1_S1 + 79) =
                prefactor_z * *(b + 233 * OS1_S1 + 51) -
                p_over_q * *(b + 305 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 51) +
                one_over_two_q * *(b + 233 * OS1_S1 + 30);
            *(b + 233 * OS1_S1 + 80) =
                prefactor_y * *(b + 233 * OS1_S1 + 53) -
                p_over_q * *(b + 304 * OS1_S1 + 53) +
                one_over_two_q * *(b + 174 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 33);
            *(b + 233 * OS1_S1 + 81) =
                prefactor_y * *(b + 233 * OS1_S1 + 54) -
                p_over_q * *(b + 304 * OS1_S1 + 54) +
                one_over_two_q * *(b + 174 * OS1_S1 + 54) +
                one_over_two_q * *(b + 233 * OS1_S1 + 34);
            *(b + 233 * OS1_S1 + 82) =
                prefactor_y * *(b + 233 * OS1_S1 + 55) -
                p_over_q * *(b + 304 * OS1_S1 + 55) +
                one_over_two_q * *(b + 174 * OS1_S1 + 55);
            *(b + 233 * OS1_S1 + 83) =
                prefactor_z * *(b + 233 * OS1_S1 + 55) -
                p_over_q * *(b + 305 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 233 * OS1_S1 + 34);
            *(b + 234 * OS1_S1 + 56) =
                prefactor_x * *(b + 234 * OS1_S1 + 35) -
                p_over_q * *(b + 300 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 20);
            *(b + 234 * OS1_S1 + 57) = prefactor_y * *(b + 234 * OS1_S1 + 35) -
                                       p_over_q * *(b + 305 * OS1_S1 + 35);
            *(b + 234 * OS1_S1 + 58) =
                prefactor_z * *(b + 234 * OS1_S1 + 35) -
                p_over_q * *(b + 306 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 35);
            *(b + 234 * OS1_S1 + 59) =
                prefactor_y * *(b + 234 * OS1_S1 + 36) -
                p_over_q * *(b + 305 * OS1_S1 + 36) +
                one_over_two_q * *(b + 234 * OS1_S1 + 20);
            *(b + 234 * OS1_S1 + 60) = prefactor_y * *(b + 234 * OS1_S1 + 37) -
                                       p_over_q * *(b + 305 * OS1_S1 + 37);
            *(b + 234 * OS1_S1 + 61) =
                prefactor_z * *(b + 234 * OS1_S1 + 37) -
                p_over_q * *(b + 306 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 37) +
                one_over_two_q * *(b + 234 * OS1_S1 + 20);
            *(b + 234 * OS1_S1 + 62) =
                prefactor_y * *(b + 234 * OS1_S1 + 38) -
                p_over_q * *(b + 305 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 234 * OS1_S1 + 21);
            *(b + 234 * OS1_S1 + 63) =
                prefactor_z * *(b + 234 * OS1_S1 + 38) -
                p_over_q * *(b + 306 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 38);
            *(b + 234 * OS1_S1 + 64) = prefactor_y * *(b + 234 * OS1_S1 + 40) -
                                       p_over_q * *(b + 305 * OS1_S1 + 40);
            *(b + 234 * OS1_S1 + 65) =
                prefactor_z * *(b + 234 * OS1_S1 + 40) -
                p_over_q * *(b + 306 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 234 * OS1_S1 + 22);
            *(b + 234 * OS1_S1 + 66) =
                prefactor_x * *(b + 234 * OS1_S1 + 45) -
                p_over_q * *(b + 300 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 45) +
                one_over_two_q * *(b + 234 * OS1_S1 + 30);
            *(b + 234 * OS1_S1 + 67) =
                prefactor_z * *(b + 234 * OS1_S1 + 41) -
                p_over_q * *(b + 306 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 41);
            *(b + 234 * OS1_S1 + 68) =
                prefactor_y * *(b + 234 * OS1_S1 + 43) -
                p_over_q * *(b + 305 * OS1_S1 + 43) +
                one_over_two_q * *(b + 234 * OS1_S1 + 25);
            *(b + 234 * OS1_S1 + 69) = prefactor_y * *(b + 234 * OS1_S1 + 44) -
                                       p_over_q * *(b + 305 * OS1_S1 + 44);
            *(b + 234 * OS1_S1 + 70) =
                prefactor_x * *(b + 234 * OS1_S1 + 49) -
                p_over_q * *(b + 300 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 49) +
                one_over_two_q * *(b + 234 * OS1_S1 + 34);
            *(b + 234 * OS1_S1 + 71) =
                prefactor_x * *(b + 234 * OS1_S1 + 50) -
                p_over_q * *(b + 300 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 50);
            *(b + 234 * OS1_S1 + 72) =
                prefactor_z * *(b + 234 * OS1_S1 + 45) -
                p_over_q * *(b + 306 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 45);
            *(b + 234 * OS1_S1 + 73) =
                prefactor_x * *(b + 234 * OS1_S1 + 52) -
                p_over_q * *(b + 300 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 52);
            *(b + 234 * OS1_S1 + 74) =
                prefactor_x * *(b + 234 * OS1_S1 + 53) -
                p_over_q * *(b + 300 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 53);
            *(b + 234 * OS1_S1 + 75) = prefactor_y * *(b + 234 * OS1_S1 + 49) -
                                       p_over_q * *(b + 305 * OS1_S1 + 49);
            *(b + 234 * OS1_S1 + 76) =
                prefactor_x * *(b + 234 * OS1_S1 + 55) -
                p_over_q * *(b + 300 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 55);
            *(b + 234 * OS1_S1 + 77) =
                prefactor_y * *(b + 234 * OS1_S1 + 50) -
                p_over_q * *(b + 305 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 30);
            *(b + 234 * OS1_S1 + 78) =
                prefactor_z * *(b + 234 * OS1_S1 + 50) -
                p_over_q * *(b + 306 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 50);
            *(b + 234 * OS1_S1 + 79) =
                prefactor_z * *(b + 234 * OS1_S1 + 51) -
                p_over_q * *(b + 306 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 51) +
                one_over_two_q * *(b + 234 * OS1_S1 + 30);
            *(b + 234 * OS1_S1 + 80) =
                prefactor_y * *(b + 234 * OS1_S1 + 53) -
                p_over_q * *(b + 305 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 234 * OS1_S1 + 33);
            *(b + 234 * OS1_S1 + 81) =
                prefactor_y * *(b + 234 * OS1_S1 + 54) -
                p_over_q * *(b + 305 * OS1_S1 + 54) +
                one_over_two_q * *(b + 234 * OS1_S1 + 34);
            *(b + 234 * OS1_S1 + 82) = prefactor_y * *(b + 234 * OS1_S1 + 55) -
                                       p_over_q * *(b + 305 * OS1_S1 + 55);
            *(b + 234 * OS1_S1 + 83) =
                prefactor_z * *(b + 234 * OS1_S1 + 55) -
                p_over_q * *(b + 306 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 34);
            *(b + 235 * OS1_S1 + 56) =
                prefactor_x * *(b + 235 * OS1_S1 + 35) -
                p_over_q * *(b + 301 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 235 * OS1_S1 + 20);
            *(b + 235 * OS1_S1 + 57) =
                prefactor_y * *(b + 235 * OS1_S1 + 35) -
                p_over_q * *(b + 307 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 35);
            *(b + 235 * OS1_S1 + 58) = prefactor_z * *(b + 235 * OS1_S1 + 35) -
                                       p_over_q * *(b + 308 * OS1_S1 + 35);
            *(b + 235 * OS1_S1 + 59) =
                prefactor_y * *(b + 235 * OS1_S1 + 36) -
                p_over_q * *(b + 307 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 36) +
                one_over_two_q * *(b + 235 * OS1_S1 + 20);
            *(b + 235 * OS1_S1 + 60) = prefactor_z * *(b + 235 * OS1_S1 + 36) -
                                       p_over_q * *(b + 308 * OS1_S1 + 36);
            *(b + 235 * OS1_S1 + 61) =
                prefactor_z * *(b + 235 * OS1_S1 + 37) -
                p_over_q * *(b + 308 * OS1_S1 + 37) +
                one_over_two_q * *(b + 235 * OS1_S1 + 20);
            *(b + 235 * OS1_S1 + 62) =
                prefactor_y * *(b + 235 * OS1_S1 + 38) -
                p_over_q * *(b + 307 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 235 * OS1_S1 + 21);
            *(b + 235 * OS1_S1 + 63) = prefactor_z * *(b + 235 * OS1_S1 + 38) -
                                       p_over_q * *(b + 308 * OS1_S1 + 38);
            *(b + 235 * OS1_S1 + 64) =
                prefactor_y * *(b + 235 * OS1_S1 + 40) -
                p_over_q * *(b + 307 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 40);
            *(b + 235 * OS1_S1 + 65) =
                prefactor_z * *(b + 235 * OS1_S1 + 40) -
                p_over_q * *(b + 308 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 235 * OS1_S1 + 22);
            *(b + 235 * OS1_S1 + 66) =
                prefactor_x * *(b + 235 * OS1_S1 + 45) -
                p_over_q * *(b + 301 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 45) +
                one_over_two_q * *(b + 235 * OS1_S1 + 30);
            *(b + 235 * OS1_S1 + 67) = prefactor_z * *(b + 235 * OS1_S1 + 41) -
                                       p_over_q * *(b + 308 * OS1_S1 + 41);
            *(b + 235 * OS1_S1 + 68) =
                prefactor_z * *(b + 235 * OS1_S1 + 42) -
                p_over_q * *(b + 308 * OS1_S1 + 42) +
                one_over_two_q * *(b + 235 * OS1_S1 + 23);
            *(b + 235 * OS1_S1 + 69) =
                prefactor_y * *(b + 235 * OS1_S1 + 44) -
                p_over_q * *(b + 307 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 44);
            *(b + 235 * OS1_S1 + 70) =
                prefactor_x * *(b + 235 * OS1_S1 + 49) -
                p_over_q * *(b + 301 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 49) +
                one_over_two_q * *(b + 235 * OS1_S1 + 34);
            *(b + 235 * OS1_S1 + 71) =
                prefactor_x * *(b + 235 * OS1_S1 + 50) -
                p_over_q * *(b + 301 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 50);
            *(b + 235 * OS1_S1 + 72) = prefactor_z * *(b + 235 * OS1_S1 + 45) -
                                       p_over_q * *(b + 308 * OS1_S1 + 45);
            *(b + 235 * OS1_S1 + 73) =
                prefactor_x * *(b + 235 * OS1_S1 + 52) -
                p_over_q * *(b + 301 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 52);
            *(b + 235 * OS1_S1 + 74) =
                prefactor_x * *(b + 235 * OS1_S1 + 53) -
                p_over_q * *(b + 301 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 53);
            *(b + 235 * OS1_S1 + 75) =
                prefactor_y * *(b + 235 * OS1_S1 + 49) -
                p_over_q * *(b + 307 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 49);
            *(b + 235 * OS1_S1 + 76) =
                prefactor_x * *(b + 235 * OS1_S1 + 55) -
                p_over_q * *(b + 301 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 55);
            *(b + 235 * OS1_S1 + 77) =
                prefactor_y * *(b + 235 * OS1_S1 + 50) -
                p_over_q * *(b + 307 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 235 * OS1_S1 + 30);
            *(b + 235 * OS1_S1 + 78) = prefactor_z * *(b + 235 * OS1_S1 + 50) -
                                       p_over_q * *(b + 308 * OS1_S1 + 50);
            *(b + 235 * OS1_S1 + 79) =
                prefactor_z * *(b + 235 * OS1_S1 + 51) -
                p_over_q * *(b + 308 * OS1_S1 + 51) +
                one_over_two_q * *(b + 235 * OS1_S1 + 30);
            *(b + 235 * OS1_S1 + 80) =
                prefactor_z * *(b + 235 * OS1_S1 + 52) -
                p_over_q * *(b + 308 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 235 * OS1_S1 + 31);
            *(b + 235 * OS1_S1 + 81) =
                prefactor_y * *(b + 235 * OS1_S1 + 54) -
                p_over_q * *(b + 307 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 54) +
                one_over_two_q * *(b + 235 * OS1_S1 + 34);
            *(b + 235 * OS1_S1 + 82) =
                prefactor_y * *(b + 235 * OS1_S1 + 55) -
                p_over_q * *(b + 307 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 55);
            *(b + 235 * OS1_S1 + 83) =
                prefactor_z * *(b + 235 * OS1_S1 + 55) -
                p_over_q * *(b + 308 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 235 * OS1_S1 + 34);
            *(b + 236 * OS1_S1 + 56) =
                prefactor_x * *(b + 236 * OS1_S1 + 35) -
                p_over_q * *(b + 302 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 20);
            *(b + 236 * OS1_S1 + 57) =
                prefactor_y * *(b + 236 * OS1_S1 + 35) -
                p_over_q * *(b + 308 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 35);
            *(b + 236 * OS1_S1 + 58) =
                prefactor_z * *(b + 236 * OS1_S1 + 35) -
                p_over_q * *(b + 309 * OS1_S1 + 35) +
                one_over_two_q * *(b + 175 * OS1_S1 + 35);
            *(b + 236 * OS1_S1 + 59) =
                prefactor_y * *(b + 236 * OS1_S1 + 36) -
                p_over_q * *(b + 308 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 36) +
                one_over_two_q * *(b + 236 * OS1_S1 + 20);
            *(b + 236 * OS1_S1 + 60) =
                prefactor_z * *(b + 236 * OS1_S1 + 36) -
                p_over_q * *(b + 309 * OS1_S1 + 36) +
                one_over_two_q * *(b + 175 * OS1_S1 + 36);
            *(b + 236 * OS1_S1 + 61) =
                prefactor_z * *(b + 236 * OS1_S1 + 37) -
                p_over_q * *(b + 309 * OS1_S1 + 37) +
                one_over_two_q * *(b + 175 * OS1_S1 + 37) +
                one_over_two_q * *(b + 236 * OS1_S1 + 20);
            *(b + 236 * OS1_S1 + 62) =
                prefactor_y * *(b + 236 * OS1_S1 + 38) -
                p_over_q * *(b + 308 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 21);
            *(b + 236 * OS1_S1 + 63) =
                prefactor_z * *(b + 236 * OS1_S1 + 38) -
                p_over_q * *(b + 309 * OS1_S1 + 38) +
                one_over_two_q * *(b + 175 * OS1_S1 + 38);
            *(b + 236 * OS1_S1 + 64) =
                prefactor_y * *(b + 236 * OS1_S1 + 40) -
                p_over_q * *(b + 308 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 40);
            *(b + 236 * OS1_S1 + 65) =
                prefactor_z * *(b + 236 * OS1_S1 + 40) -
                p_over_q * *(b + 309 * OS1_S1 + 40) +
                one_over_two_q * *(b + 175 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 22);
            *(b + 236 * OS1_S1 + 66) =
                prefactor_x * *(b + 236 * OS1_S1 + 45) -
                p_over_q * *(b + 302 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 45) +
                one_over_two_q * *(b + 236 * OS1_S1 + 30);
            *(b + 236 * OS1_S1 + 67) =
                prefactor_z * *(b + 236 * OS1_S1 + 41) -
                p_over_q * *(b + 309 * OS1_S1 + 41) +
                one_over_two_q * *(b + 175 * OS1_S1 + 41);
            *(b + 236 * OS1_S1 + 68) =
                prefactor_z * *(b + 236 * OS1_S1 + 42) -
                p_over_q * *(b + 309 * OS1_S1 + 42) +
                one_over_two_q * *(b + 175 * OS1_S1 + 42) +
                one_over_two_q * *(b + 236 * OS1_S1 + 23);
            *(b + 236 * OS1_S1 + 69) =
                prefactor_y * *(b + 236 * OS1_S1 + 44) -
                p_over_q * *(b + 308 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 44);
            *(b + 236 * OS1_S1 + 70) =
                prefactor_x * *(b + 236 * OS1_S1 + 49) -
                p_over_q * *(b + 302 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 49) +
                one_over_two_q * *(b + 236 * OS1_S1 + 34);
            *(b + 236 * OS1_S1 + 71) =
                prefactor_x * *(b + 236 * OS1_S1 + 50) -
                p_over_q * *(b + 302 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 50);
            *(b + 236 * OS1_S1 + 72) =
                prefactor_z * *(b + 236 * OS1_S1 + 45) -
                p_over_q * *(b + 309 * OS1_S1 + 45) +
                one_over_two_q * *(b + 175 * OS1_S1 + 45);
            *(b + 236 * OS1_S1 + 73) =
                prefactor_x * *(b + 236 * OS1_S1 + 52) -
                p_over_q * *(b + 302 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 52);
            *(b + 236 * OS1_S1 + 74) =
                prefactor_x * *(b + 236 * OS1_S1 + 53) -
                p_over_q * *(b + 302 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 53);
            *(b + 236 * OS1_S1 + 75) =
                prefactor_y * *(b + 236 * OS1_S1 + 49) -
                p_over_q * *(b + 308 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 49);
            *(b + 236 * OS1_S1 + 76) =
                prefactor_x * *(b + 236 * OS1_S1 + 55) -
                p_over_q * *(b + 302 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 55);
            *(b + 236 * OS1_S1 + 77) =
                prefactor_y * *(b + 236 * OS1_S1 + 50) -
                p_over_q * *(b + 308 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 30);
            *(b + 236 * OS1_S1 + 78) =
                prefactor_z * *(b + 236 * OS1_S1 + 50) -
                p_over_q * *(b + 309 * OS1_S1 + 50) +
                one_over_two_q * *(b + 175 * OS1_S1 + 50);
            *(b + 236 * OS1_S1 + 79) =
                prefactor_z * *(b + 236 * OS1_S1 + 51) -
                p_over_q * *(b + 309 * OS1_S1 + 51) +
                one_over_two_q * *(b + 175 * OS1_S1 + 51) +
                one_over_two_q * *(b + 236 * OS1_S1 + 30);
            *(b + 236 * OS1_S1 + 80) =
                prefactor_z * *(b + 236 * OS1_S1 + 52) -
                p_over_q * *(b + 309 * OS1_S1 + 52) +
                one_over_two_q * *(b + 175 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 31);
            *(b + 236 * OS1_S1 + 81) =
                prefactor_y * *(b + 236 * OS1_S1 + 54) -
                p_over_q * *(b + 308 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 54) +
                one_over_two_q * *(b + 236 * OS1_S1 + 34);
            *(b + 236 * OS1_S1 + 82) =
                prefactor_y * *(b + 236 * OS1_S1 + 55) -
                p_over_q * *(b + 308 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 55);
            *(b + 236 * OS1_S1 + 83) =
                prefactor_z * *(b + 236 * OS1_S1 + 55) -
                p_over_q * *(b + 309 * OS1_S1 + 55) +
                one_over_two_q * *(b + 175 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 34);
            *(b + 237 * OS1_S1 + 56) =
                prefactor_x * *(b + 237 * OS1_S1 + 35) -
                p_over_q * *(b + 303 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 237 * OS1_S1 + 20);
            *(b + 237 * OS1_S1 + 57) =
                prefactor_y * *(b + 237 * OS1_S1 + 35) -
                p_over_q * *(b + 309 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 35);
            *(b + 237 * OS1_S1 + 58) =
                prefactor_z * *(b + 237 * OS1_S1 + 35) -
                p_over_q * *(b + 310 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 35);
            *(b + 237 * OS1_S1 + 59) =
                prefactor_y * *(b + 237 * OS1_S1 + 36) -
                p_over_q * *(b + 309 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 36) +
                one_over_two_q * *(b + 237 * OS1_S1 + 20);
            *(b + 237 * OS1_S1 + 60) =
                prefactor_z * *(b + 237 * OS1_S1 + 36) -
                p_over_q * *(b + 310 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 36);
            *(b + 237 * OS1_S1 + 61) =
                prefactor_z * *(b + 237 * OS1_S1 + 37) -
                p_over_q * *(b + 310 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 37) +
                one_over_two_q * *(b + 237 * OS1_S1 + 20);
            *(b + 237 * OS1_S1 + 62) =
                prefactor_y * *(b + 237 * OS1_S1 + 38) -
                p_over_q * *(b + 309 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 237 * OS1_S1 + 21);
            *(b + 237 * OS1_S1 + 63) =
                prefactor_z * *(b + 237 * OS1_S1 + 38) -
                p_over_q * *(b + 310 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 38);
            *(b + 237 * OS1_S1 + 64) =
                prefactor_y * *(b + 237 * OS1_S1 + 40) -
                p_over_q * *(b + 309 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 40);
            *(b + 237 * OS1_S1 + 65) =
                prefactor_z * *(b + 237 * OS1_S1 + 40) -
                p_over_q * *(b + 310 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 237 * OS1_S1 + 22);
            *(b + 237 * OS1_S1 + 66) =
                prefactor_x * *(b + 237 * OS1_S1 + 45) -
                p_over_q * *(b + 303 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 45) +
                one_over_two_q * *(b + 237 * OS1_S1 + 30);
            *(b + 237 * OS1_S1 + 67) =
                prefactor_z * *(b + 237 * OS1_S1 + 41) -
                p_over_q * *(b + 310 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 41);
            *(b + 237 * OS1_S1 + 68) =
                prefactor_z * *(b + 237 * OS1_S1 + 42) -
                p_over_q * *(b + 310 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 42) +
                one_over_two_q * *(b + 237 * OS1_S1 + 23);
            *(b + 237 * OS1_S1 + 69) =
                prefactor_y * *(b + 237 * OS1_S1 + 44) -
                p_over_q * *(b + 309 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 44);
            *(b + 237 * OS1_S1 + 70) =
                prefactor_x * *(b + 237 * OS1_S1 + 49) -
                p_over_q * *(b + 303 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 49) +
                one_over_two_q * *(b + 237 * OS1_S1 + 34);
            *(b + 237 * OS1_S1 + 71) =
                prefactor_x * *(b + 237 * OS1_S1 + 50) -
                p_over_q * *(b + 303 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 50);
            *(b + 237 * OS1_S1 + 72) =
                prefactor_z * *(b + 237 * OS1_S1 + 45) -
                p_over_q * *(b + 310 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 45);
            *(b + 237 * OS1_S1 + 73) =
                prefactor_x * *(b + 237 * OS1_S1 + 52) -
                p_over_q * *(b + 303 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 52);
            *(b + 237 * OS1_S1 + 74) =
                prefactor_x * *(b + 237 * OS1_S1 + 53) -
                p_over_q * *(b + 303 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 53);
            *(b + 237 * OS1_S1 + 75) =
                prefactor_y * *(b + 237 * OS1_S1 + 49) -
                p_over_q * *(b + 309 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 49);
            *(b + 237 * OS1_S1 + 76) =
                prefactor_x * *(b + 237 * OS1_S1 + 55) -
                p_over_q * *(b + 303 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 55);
            *(b + 237 * OS1_S1 + 77) =
                prefactor_y * *(b + 237 * OS1_S1 + 50) -
                p_over_q * *(b + 309 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 237 * OS1_S1 + 30);
            *(b + 237 * OS1_S1 + 78) =
                prefactor_z * *(b + 237 * OS1_S1 + 50) -
                p_over_q * *(b + 310 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 50);
            *(b + 237 * OS1_S1 + 79) =
                prefactor_z * *(b + 237 * OS1_S1 + 51) -
                p_over_q * *(b + 310 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 51) +
                one_over_two_q * *(b + 237 * OS1_S1 + 30);
            *(b + 237 * OS1_S1 + 80) =
                prefactor_z * *(b + 237 * OS1_S1 + 52) -
                p_over_q * *(b + 310 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 237 * OS1_S1 + 31);
            *(b + 237 * OS1_S1 + 81) =
                prefactor_y * *(b + 237 * OS1_S1 + 54) -
                p_over_q * *(b + 309 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 54) +
                one_over_two_q * *(b + 237 * OS1_S1 + 34);
            *(b + 237 * OS1_S1 + 82) =
                prefactor_y * *(b + 237 * OS1_S1 + 55) -
                p_over_q * *(b + 309 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 55);
            *(b + 237 * OS1_S1 + 83) =
                prefactor_z * *(b + 237 * OS1_S1 + 55) -
                p_over_q * *(b + 310 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 237 * OS1_S1 + 34);
            *(b + 238 * OS1_S1 + 56) =
                prefactor_x * *(b + 238 * OS1_S1 + 35) -
                p_over_q * *(b + 304 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 238 * OS1_S1 + 20);
            *(b + 238 * OS1_S1 + 57) =
                prefactor_y * *(b + 238 * OS1_S1 + 35) -
                p_over_q * *(b + 310 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 35);
            *(b + 238 * OS1_S1 + 58) =
                prefactor_z * *(b + 238 * OS1_S1 + 35) -
                p_over_q * *(b + 311 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 35);
            *(b + 238 * OS1_S1 + 59) =
                prefactor_y * *(b + 238 * OS1_S1 + 36) -
                p_over_q * *(b + 310 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 36) +
                one_over_two_q * *(b + 238 * OS1_S1 + 20);
            *(b + 238 * OS1_S1 + 60) =
                prefactor_y * *(b + 238 * OS1_S1 + 37) -
                p_over_q * *(b + 310 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 37);
            *(b + 238 * OS1_S1 + 61) =
                prefactor_z * *(b + 238 * OS1_S1 + 37) -
                p_over_q * *(b + 311 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 37) +
                one_over_two_q * *(b + 238 * OS1_S1 + 20);
            *(b + 238 * OS1_S1 + 62) =
                prefactor_y * *(b + 238 * OS1_S1 + 38) -
                p_over_q * *(b + 310 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 238 * OS1_S1 + 21);
            *(b + 238 * OS1_S1 + 63) =
                prefactor_z * *(b + 238 * OS1_S1 + 38) -
                p_over_q * *(b + 311 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 38);
            *(b + 238 * OS1_S1 + 64) =
                prefactor_y * *(b + 238 * OS1_S1 + 40) -
                p_over_q * *(b + 310 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 40);
            *(b + 238 * OS1_S1 + 65) =
                prefactor_z * *(b + 238 * OS1_S1 + 40) -
                p_over_q * *(b + 311 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 238 * OS1_S1 + 22);
            *(b + 238 * OS1_S1 + 66) =
                prefactor_x * *(b + 238 * OS1_S1 + 45) -
                p_over_q * *(b + 304 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 45) +
                one_over_two_q * *(b + 238 * OS1_S1 + 30);
            *(b + 238 * OS1_S1 + 67) =
                prefactor_z * *(b + 238 * OS1_S1 + 41) -
                p_over_q * *(b + 311 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 41);
            *(b + 238 * OS1_S1 + 68) =
                prefactor_y * *(b + 238 * OS1_S1 + 43) -
                p_over_q * *(b + 310 * OS1_S1 + 43) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 43) +
                one_over_two_q * *(b + 238 * OS1_S1 + 25);
            *(b + 238 * OS1_S1 + 69) =
                prefactor_y * *(b + 238 * OS1_S1 + 44) -
                p_over_q * *(b + 310 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 44);
            *(b + 238 * OS1_S1 + 70) =
                prefactor_x * *(b + 238 * OS1_S1 + 49) -
                p_over_q * *(b + 304 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 49) +
                one_over_two_q * *(b + 238 * OS1_S1 + 34);
            *(b + 238 * OS1_S1 + 71) =
                prefactor_x * *(b + 238 * OS1_S1 + 50) -
                p_over_q * *(b + 304 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 50);
            *(b + 238 * OS1_S1 + 72) =
                prefactor_z * *(b + 238 * OS1_S1 + 45) -
                p_over_q * *(b + 311 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 45);
            *(b + 238 * OS1_S1 + 73) =
                prefactor_x * *(b + 238 * OS1_S1 + 52) -
                p_over_q * *(b + 304 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 52);
            *(b + 238 * OS1_S1 + 74) =
                prefactor_x * *(b + 238 * OS1_S1 + 53) -
                p_over_q * *(b + 304 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 53);
            *(b + 238 * OS1_S1 + 75) =
                prefactor_y * *(b + 238 * OS1_S1 + 49) -
                p_over_q * *(b + 310 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 49);
            *(b + 238 * OS1_S1 + 76) =
                prefactor_x * *(b + 238 * OS1_S1 + 55) -
                p_over_q * *(b + 304 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 55);
            *(b + 238 * OS1_S1 + 77) =
                prefactor_y * *(b + 238 * OS1_S1 + 50) -
                p_over_q * *(b + 310 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 238 * OS1_S1 + 30);
            *(b + 238 * OS1_S1 + 78) =
                prefactor_z * *(b + 238 * OS1_S1 + 50) -
                p_over_q * *(b + 311 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 50);
            *(b + 238 * OS1_S1 + 79) =
                prefactor_z * *(b + 238 * OS1_S1 + 51) -
                p_over_q * *(b + 311 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 51) +
                one_over_two_q * *(b + 238 * OS1_S1 + 30);
            *(b + 238 * OS1_S1 + 80) =
                prefactor_y * *(b + 238 * OS1_S1 + 53) -
                p_over_q * *(b + 310 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 238 * OS1_S1 + 33);
            *(b + 238 * OS1_S1 + 81) =
                prefactor_y * *(b + 238 * OS1_S1 + 54) -
                p_over_q * *(b + 310 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 54) +
                one_over_two_q * *(b + 238 * OS1_S1 + 34);
            *(b + 238 * OS1_S1 + 82) =
                prefactor_y * *(b + 238 * OS1_S1 + 55) -
                p_over_q * *(b + 310 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 55);
            *(b + 238 * OS1_S1 + 83) =
                prefactor_z * *(b + 238 * OS1_S1 + 55) -
                p_over_q * *(b + 311 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 238 * OS1_S1 + 34);
            *(b + 239 * OS1_S1 + 56) =
                prefactor_x * *(b + 239 * OS1_S1 + 35) -
                p_over_q * *(b + 305 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 20);
            *(b + 239 * OS1_S1 + 57) =
                prefactor_y * *(b + 239 * OS1_S1 + 35) -
                p_over_q * *(b + 311 * OS1_S1 + 35) +
                one_over_two_q * *(b + 179 * OS1_S1 + 35);
            *(b + 239 * OS1_S1 + 58) =
                prefactor_z * *(b + 239 * OS1_S1 + 35) -
                p_over_q * *(b + 312 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 35);
            *(b + 239 * OS1_S1 + 59) =
                prefactor_y * *(b + 239 * OS1_S1 + 36) -
                p_over_q * *(b + 311 * OS1_S1 + 36) +
                one_over_two_q * *(b + 179 * OS1_S1 + 36) +
                one_over_two_q * *(b + 239 * OS1_S1 + 20);
            *(b + 239 * OS1_S1 + 60) =
                prefactor_y * *(b + 239 * OS1_S1 + 37) -
                p_over_q * *(b + 311 * OS1_S1 + 37) +
                one_over_two_q * *(b + 179 * OS1_S1 + 37);
            *(b + 239 * OS1_S1 + 61) =
                prefactor_z * *(b + 239 * OS1_S1 + 37) -
                p_over_q * *(b + 312 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 37) +
                one_over_two_q * *(b + 239 * OS1_S1 + 20);
            *(b + 239 * OS1_S1 + 62) =
                prefactor_y * *(b + 239 * OS1_S1 + 38) -
                p_over_q * *(b + 311 * OS1_S1 + 38) +
                one_over_two_q * *(b + 179 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 21);
            *(b + 239 * OS1_S1 + 63) =
                prefactor_z * *(b + 239 * OS1_S1 + 38) -
                p_over_q * *(b + 312 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 38);
            *(b + 239 * OS1_S1 + 64) =
                prefactor_y * *(b + 239 * OS1_S1 + 40) -
                p_over_q * *(b + 311 * OS1_S1 + 40) +
                one_over_two_q * *(b + 179 * OS1_S1 + 40);
            *(b + 239 * OS1_S1 + 65) =
                prefactor_z * *(b + 239 * OS1_S1 + 40) -
                p_over_q * *(b + 312 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 22);
            *(b + 239 * OS1_S1 + 66) =
                prefactor_x * *(b + 239 * OS1_S1 + 45) -
                p_over_q * *(b + 305 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 45) +
                one_over_two_q * *(b + 239 * OS1_S1 + 30);
            *(b + 239 * OS1_S1 + 67) =
                prefactor_z * *(b + 239 * OS1_S1 + 41) -
                p_over_q * *(b + 312 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 41);
            *(b + 239 * OS1_S1 + 68) =
                prefactor_y * *(b + 239 * OS1_S1 + 43) -
                p_over_q * *(b + 311 * OS1_S1 + 43) +
                one_over_two_q * *(b + 179 * OS1_S1 + 43) +
                one_over_two_q * *(b + 239 * OS1_S1 + 25);
            *(b + 239 * OS1_S1 + 69) =
                prefactor_y * *(b + 239 * OS1_S1 + 44) -
                p_over_q * *(b + 311 * OS1_S1 + 44) +
                one_over_two_q * *(b + 179 * OS1_S1 + 44);
            *(b + 239 * OS1_S1 + 70) =
                prefactor_x * *(b + 239 * OS1_S1 + 49) -
                p_over_q * *(b + 305 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 49) +
                one_over_two_q * *(b + 239 * OS1_S1 + 34);
            *(b + 239 * OS1_S1 + 71) =
                prefactor_x * *(b + 239 * OS1_S1 + 50) -
                p_over_q * *(b + 305 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 50);
            *(b + 239 * OS1_S1 + 72) =
                prefactor_z * *(b + 239 * OS1_S1 + 45) -
                p_over_q * *(b + 312 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 45);
            *(b + 239 * OS1_S1 + 73) =
                prefactor_x * *(b + 239 * OS1_S1 + 52) -
                p_over_q * *(b + 305 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 52);
            *(b + 239 * OS1_S1 + 74) =
                prefactor_x * *(b + 239 * OS1_S1 + 53) -
                p_over_q * *(b + 305 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 53);
            *(b + 239 * OS1_S1 + 75) =
                prefactor_y * *(b + 239 * OS1_S1 + 49) -
                p_over_q * *(b + 311 * OS1_S1 + 49) +
                one_over_two_q * *(b + 179 * OS1_S1 + 49);
            *(b + 239 * OS1_S1 + 76) =
                prefactor_x * *(b + 239 * OS1_S1 + 55) -
                p_over_q * *(b + 305 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 55);
            *(b + 239 * OS1_S1 + 77) =
                prefactor_y * *(b + 239 * OS1_S1 + 50) -
                p_over_q * *(b + 311 * OS1_S1 + 50) +
                one_over_two_q * *(b + 179 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 30);
            *(b + 239 * OS1_S1 + 78) =
                prefactor_z * *(b + 239 * OS1_S1 + 50) -
                p_over_q * *(b + 312 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 50);
            *(b + 239 * OS1_S1 + 79) =
                prefactor_z * *(b + 239 * OS1_S1 + 51) -
                p_over_q * *(b + 312 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 51) +
                one_over_two_q * *(b + 239 * OS1_S1 + 30);
            *(b + 239 * OS1_S1 + 80) =
                prefactor_y * *(b + 239 * OS1_S1 + 53) -
                p_over_q * *(b + 311 * OS1_S1 + 53) +
                one_over_two_q * *(b + 179 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 33);
            *(b + 239 * OS1_S1 + 81) =
                prefactor_y * *(b + 239 * OS1_S1 + 54) -
                p_over_q * *(b + 311 * OS1_S1 + 54) +
                one_over_two_q * *(b + 179 * OS1_S1 + 54) +
                one_over_two_q * *(b + 239 * OS1_S1 + 34);
            *(b + 239 * OS1_S1 + 82) =
                prefactor_y * *(b + 239 * OS1_S1 + 55) -
                p_over_q * *(b + 311 * OS1_S1 + 55) +
                one_over_two_q * *(b + 179 * OS1_S1 + 55);
            *(b + 239 * OS1_S1 + 83) =
                prefactor_z * *(b + 239 * OS1_S1 + 55) -
                p_over_q * *(b + 312 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 34);
            *(b + 240 * OS1_S1 + 56) =
                prefactor_x * *(b + 240 * OS1_S1 + 35) -
                p_over_q * *(b + 306 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 240 * OS1_S1 + 20);
            *(b + 240 * OS1_S1 + 57) = prefactor_y * *(b + 240 * OS1_S1 + 35) -
                                       p_over_q * *(b + 312 * OS1_S1 + 35);
            *(b + 240 * OS1_S1 + 58) =
                prefactor_z * *(b + 240 * OS1_S1 + 35) -
                p_over_q * *(b + 313 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 35);
            *(b + 240 * OS1_S1 + 59) =
                prefactor_y * *(b + 240 * OS1_S1 + 36) -
                p_over_q * *(b + 312 * OS1_S1 + 36) +
                one_over_two_q * *(b + 240 * OS1_S1 + 20);
            *(b + 240 * OS1_S1 + 60) = prefactor_y * *(b + 240 * OS1_S1 + 37) -
                                       p_over_q * *(b + 312 * OS1_S1 + 37);
            *(b + 240 * OS1_S1 + 61) =
                prefactor_z * *(b + 240 * OS1_S1 + 37) -
                p_over_q * *(b + 313 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 37) +
                one_over_two_q * *(b + 240 * OS1_S1 + 20);
            *(b + 240 * OS1_S1 + 62) =
                prefactor_y * *(b + 240 * OS1_S1 + 38) -
                p_over_q * *(b + 312 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 240 * OS1_S1 + 21);
            *(b + 240 * OS1_S1 + 63) =
                prefactor_z * *(b + 240 * OS1_S1 + 38) -
                p_over_q * *(b + 313 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 38);
            *(b + 240 * OS1_S1 + 64) = prefactor_y * *(b + 240 * OS1_S1 + 40) -
                                       p_over_q * *(b + 312 * OS1_S1 + 40);
            *(b + 240 * OS1_S1 + 65) =
                prefactor_z * *(b + 240 * OS1_S1 + 40) -
                p_over_q * *(b + 313 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 240 * OS1_S1 + 22);
            *(b + 240 * OS1_S1 + 66) =
                prefactor_x * *(b + 240 * OS1_S1 + 45) -
                p_over_q * *(b + 306 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 45) +
                one_over_two_q * *(b + 240 * OS1_S1 + 30);
            *(b + 240 * OS1_S1 + 67) =
                prefactor_z * *(b + 240 * OS1_S1 + 41) -
                p_over_q * *(b + 313 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 41);
            *(b + 240 * OS1_S1 + 68) =
                prefactor_y * *(b + 240 * OS1_S1 + 43) -
                p_over_q * *(b + 312 * OS1_S1 + 43) +
                one_over_two_q * *(b + 240 * OS1_S1 + 25);
            *(b + 240 * OS1_S1 + 69) = prefactor_y * *(b + 240 * OS1_S1 + 44) -
                                       p_over_q * *(b + 312 * OS1_S1 + 44);
            *(b + 240 * OS1_S1 + 70) =
                prefactor_x * *(b + 240 * OS1_S1 + 49) -
                p_over_q * *(b + 306 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 49) +
                one_over_two_q * *(b + 240 * OS1_S1 + 34);
            *(b + 240 * OS1_S1 + 71) =
                prefactor_x * *(b + 240 * OS1_S1 + 50) -
                p_over_q * *(b + 306 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 50);
            *(b + 240 * OS1_S1 + 72) =
                prefactor_z * *(b + 240 * OS1_S1 + 45) -
                p_over_q * *(b + 313 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 45);
            *(b + 240 * OS1_S1 + 73) =
                prefactor_x * *(b + 240 * OS1_S1 + 52) -
                p_over_q * *(b + 306 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 52);
            *(b + 240 * OS1_S1 + 74) =
                prefactor_x * *(b + 240 * OS1_S1 + 53) -
                p_over_q * *(b + 306 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 53);
            *(b + 240 * OS1_S1 + 75) = prefactor_y * *(b + 240 * OS1_S1 + 49) -
                                       p_over_q * *(b + 312 * OS1_S1 + 49);
            *(b + 240 * OS1_S1 + 76) =
                prefactor_x * *(b + 240 * OS1_S1 + 55) -
                p_over_q * *(b + 306 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 55);
            *(b + 240 * OS1_S1 + 77) =
                prefactor_y * *(b + 240 * OS1_S1 + 50) -
                p_over_q * *(b + 312 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 240 * OS1_S1 + 30);
            *(b + 240 * OS1_S1 + 78) =
                prefactor_z * *(b + 240 * OS1_S1 + 50) -
                p_over_q * *(b + 313 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 50);
            *(b + 240 * OS1_S1 + 79) =
                prefactor_z * *(b + 240 * OS1_S1 + 51) -
                p_over_q * *(b + 313 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 51) +
                one_over_two_q * *(b + 240 * OS1_S1 + 30);
            *(b + 240 * OS1_S1 + 80) =
                prefactor_y * *(b + 240 * OS1_S1 + 53) -
                p_over_q * *(b + 312 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 240 * OS1_S1 + 33);
            *(b + 240 * OS1_S1 + 81) =
                prefactor_y * *(b + 240 * OS1_S1 + 54) -
                p_over_q * *(b + 312 * OS1_S1 + 54) +
                one_over_two_q * *(b + 240 * OS1_S1 + 34);
            *(b + 240 * OS1_S1 + 82) = prefactor_y * *(b + 240 * OS1_S1 + 55) -
                                       p_over_q * *(b + 312 * OS1_S1 + 55);
            *(b + 240 * OS1_S1 + 83) =
                prefactor_z * *(b + 240 * OS1_S1 + 55) -
                p_over_q * *(b + 313 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 240 * OS1_S1 + 34);
            *(b + 241 * OS1_S1 + 56) =
                prefactor_x * *(b + 241 * OS1_S1 + 35) -
                p_over_q * *(b + 307 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 20);
            *(b + 241 * OS1_S1 + 57) =
                prefactor_y * *(b + 241 * OS1_S1 + 35) -
                p_over_q * *(b + 314 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 35);
            *(b + 241 * OS1_S1 + 58) = prefactor_z * *(b + 241 * OS1_S1 + 35) -
                                       p_over_q * *(b + 315 * OS1_S1 + 35);
            *(b + 241 * OS1_S1 + 59) =
                prefactor_y * *(b + 241 * OS1_S1 + 36) -
                p_over_q * *(b + 314 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 36) +
                one_over_two_q * *(b + 241 * OS1_S1 + 20);
            *(b + 241 * OS1_S1 + 60) = prefactor_z * *(b + 241 * OS1_S1 + 36) -
                                       p_over_q * *(b + 315 * OS1_S1 + 36);
            *(b + 241 * OS1_S1 + 61) =
                prefactor_z * *(b + 241 * OS1_S1 + 37) -
                p_over_q * *(b + 315 * OS1_S1 + 37) +
                one_over_two_q * *(b + 241 * OS1_S1 + 20);
            *(b + 241 * OS1_S1 + 62) =
                prefactor_x * *(b + 241 * OS1_S1 + 41) -
                p_over_q * *(b + 307 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 241 * OS1_S1 + 26);
            *(b + 241 * OS1_S1 + 63) = prefactor_z * *(b + 241 * OS1_S1 + 38) -
                                       p_over_q * *(b + 315 * OS1_S1 + 38);
            *(b + 241 * OS1_S1 + 64) =
                prefactor_y * *(b + 241 * OS1_S1 + 40) -
                p_over_q * *(b + 314 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 40);
            *(b + 241 * OS1_S1 + 65) =
                prefactor_z * *(b + 241 * OS1_S1 + 40) -
                p_over_q * *(b + 315 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 241 * OS1_S1 + 22);
            *(b + 241 * OS1_S1 + 66) =
                prefactor_x * *(b + 241 * OS1_S1 + 45) -
                p_over_q * *(b + 307 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 45) +
                one_over_two_q * *(b + 241 * OS1_S1 + 30);
            *(b + 241 * OS1_S1 + 67) = prefactor_z * *(b + 241 * OS1_S1 + 41) -
                                       p_over_q * *(b + 315 * OS1_S1 + 41);
            *(b + 241 * OS1_S1 + 68) =
                prefactor_z * *(b + 241 * OS1_S1 + 42) -
                p_over_q * *(b + 315 * OS1_S1 + 42) +
                one_over_two_q * *(b + 241 * OS1_S1 + 23);
            *(b + 241 * OS1_S1 + 69) =
                prefactor_y * *(b + 241 * OS1_S1 + 44) -
                p_over_q * *(b + 314 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 44);
            *(b + 241 * OS1_S1 + 70) =
                prefactor_x * *(b + 241 * OS1_S1 + 49) -
                p_over_q * *(b + 307 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 49) +
                one_over_two_q * *(b + 241 * OS1_S1 + 34);
            *(b + 241 * OS1_S1 + 71) =
                prefactor_x * *(b + 241 * OS1_S1 + 50) -
                p_over_q * *(b + 307 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 50);
            *(b + 241 * OS1_S1 + 72) = prefactor_z * *(b + 241 * OS1_S1 + 45) -
                                       p_over_q * *(b + 315 * OS1_S1 + 45);
            *(b + 241 * OS1_S1 + 73) =
                prefactor_x * *(b + 241 * OS1_S1 + 52) -
                p_over_q * *(b + 307 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 52);
            *(b + 241 * OS1_S1 + 74) =
                prefactor_x * *(b + 241 * OS1_S1 + 53) -
                p_over_q * *(b + 307 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 53);
            *(b + 241 * OS1_S1 + 75) =
                prefactor_x * *(b + 241 * OS1_S1 + 54) -
                p_over_q * *(b + 307 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 54);
            *(b + 241 * OS1_S1 + 76) =
                prefactor_x * *(b + 241 * OS1_S1 + 55) -
                p_over_q * *(b + 307 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 55);
            *(b + 241 * OS1_S1 + 77) =
                prefactor_y * *(b + 241 * OS1_S1 + 50) -
                p_over_q * *(b + 314 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 30);
            *(b + 241 * OS1_S1 + 78) = prefactor_z * *(b + 241 * OS1_S1 + 50) -
                                       p_over_q * *(b + 315 * OS1_S1 + 50);
            *(b + 241 * OS1_S1 + 79) =
                prefactor_z * *(b + 241 * OS1_S1 + 51) -
                p_over_q * *(b + 315 * OS1_S1 + 51) +
                one_over_two_q * *(b + 241 * OS1_S1 + 30);
            *(b + 241 * OS1_S1 + 80) =
                prefactor_z * *(b + 241 * OS1_S1 + 52) -
                p_over_q * *(b + 315 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 241 * OS1_S1 + 31);
            *(b + 241 * OS1_S1 + 81) =
                prefactor_y * *(b + 241 * OS1_S1 + 54) -
                p_over_q * *(b + 314 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 54) +
                one_over_two_q * *(b + 241 * OS1_S1 + 34);
            *(b + 241 * OS1_S1 + 82) =
                prefactor_y * *(b + 241 * OS1_S1 + 55) -
                p_over_q * *(b + 314 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 55);
            *(b + 241 * OS1_S1 + 83) =
                prefactor_z * *(b + 241 * OS1_S1 + 55) -
                p_over_q * *(b + 315 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 34);
            *(b + 242 * OS1_S1 + 56) =
                prefactor_x * *(b + 242 * OS1_S1 + 35) -
                p_over_q * *(b + 308 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 20);
            *(b + 242 * OS1_S1 + 57) =
                prefactor_y * *(b + 242 * OS1_S1 + 35) -
                p_over_q * *(b + 315 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 35);
            *(b + 242 * OS1_S1 + 58) =
                prefactor_z * *(b + 242 * OS1_S1 + 35) -
                p_over_q * *(b + 316 * OS1_S1 + 35) +
                one_over_two_q * *(b + 180 * OS1_S1 + 35);
            *(b + 242 * OS1_S1 + 59) =
                prefactor_y * *(b + 242 * OS1_S1 + 36) -
                p_over_q * *(b + 315 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 36) +
                one_over_two_q * *(b + 242 * OS1_S1 + 20);
            *(b + 242 * OS1_S1 + 60) =
                prefactor_z * *(b + 242 * OS1_S1 + 36) -
                p_over_q * *(b + 316 * OS1_S1 + 36) +
                one_over_two_q * *(b + 180 * OS1_S1 + 36);
            *(b + 242 * OS1_S1 + 61) =
                prefactor_z * *(b + 242 * OS1_S1 + 37) -
                p_over_q * *(b + 316 * OS1_S1 + 37) +
                one_over_two_q * *(b + 180 * OS1_S1 + 37) +
                one_over_two_q * *(b + 242 * OS1_S1 + 20);
            *(b + 242 * OS1_S1 + 62) =
                prefactor_x * *(b + 242 * OS1_S1 + 41) -
                p_over_q * *(b + 308 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 26);
            *(b + 242 * OS1_S1 + 63) =
                prefactor_z * *(b + 242 * OS1_S1 + 38) -
                p_over_q * *(b + 316 * OS1_S1 + 38) +
                one_over_two_q * *(b + 180 * OS1_S1 + 38);
            *(b + 242 * OS1_S1 + 64) =
                prefactor_y * *(b + 242 * OS1_S1 + 40) -
                p_over_q * *(b + 315 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 40);
            *(b + 242 * OS1_S1 + 65) =
                prefactor_z * *(b + 242 * OS1_S1 + 40) -
                p_over_q * *(b + 316 * OS1_S1 + 40) +
                one_over_two_q * *(b + 180 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 22);
            *(b + 242 * OS1_S1 + 66) =
                prefactor_x * *(b + 242 * OS1_S1 + 45) -
                p_over_q * *(b + 308 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 45) +
                one_over_two_q * *(b + 242 * OS1_S1 + 30);
            *(b + 242 * OS1_S1 + 67) =
                prefactor_z * *(b + 242 * OS1_S1 + 41) -
                p_over_q * *(b + 316 * OS1_S1 + 41) +
                one_over_two_q * *(b + 180 * OS1_S1 + 41);
            *(b + 242 * OS1_S1 + 68) =
                prefactor_z * *(b + 242 * OS1_S1 + 42) -
                p_over_q * *(b + 316 * OS1_S1 + 42) +
                one_over_two_q * *(b + 180 * OS1_S1 + 42) +
                one_over_two_q * *(b + 242 * OS1_S1 + 23);
            *(b + 242 * OS1_S1 + 69) =
                prefactor_y * *(b + 242 * OS1_S1 + 44) -
                p_over_q * *(b + 315 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 44);
            *(b + 242 * OS1_S1 + 70) =
                prefactor_x * *(b + 242 * OS1_S1 + 49) -
                p_over_q * *(b + 308 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 49) +
                one_over_two_q * *(b + 242 * OS1_S1 + 34);
            *(b + 242 * OS1_S1 + 71) =
                prefactor_x * *(b + 242 * OS1_S1 + 50) -
                p_over_q * *(b + 308 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 50);
            *(b + 242 * OS1_S1 + 72) =
                prefactor_z * *(b + 242 * OS1_S1 + 45) -
                p_over_q * *(b + 316 * OS1_S1 + 45) +
                one_over_two_q * *(b + 180 * OS1_S1 + 45);
            *(b + 242 * OS1_S1 + 73) =
                prefactor_x * *(b + 242 * OS1_S1 + 52) -
                p_over_q * *(b + 308 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 52);
            *(b + 242 * OS1_S1 + 74) =
                prefactor_x * *(b + 242 * OS1_S1 + 53) -
                p_over_q * *(b + 308 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 53);
            *(b + 242 * OS1_S1 + 75) =
                prefactor_x * *(b + 242 * OS1_S1 + 54) -
                p_over_q * *(b + 308 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 54);
            *(b + 242 * OS1_S1 + 76) =
                prefactor_x * *(b + 242 * OS1_S1 + 55) -
                p_over_q * *(b + 308 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 55);
            *(b + 242 * OS1_S1 + 77) =
                prefactor_y * *(b + 242 * OS1_S1 + 50) -
                p_over_q * *(b + 315 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 30);
            *(b + 242 * OS1_S1 + 78) =
                prefactor_z * *(b + 242 * OS1_S1 + 50) -
                p_over_q * *(b + 316 * OS1_S1 + 50) +
                one_over_two_q * *(b + 180 * OS1_S1 + 50);
            *(b + 242 * OS1_S1 + 79) =
                prefactor_z * *(b + 242 * OS1_S1 + 51) -
                p_over_q * *(b + 316 * OS1_S1 + 51) +
                one_over_two_q * *(b + 180 * OS1_S1 + 51) +
                one_over_two_q * *(b + 242 * OS1_S1 + 30);
            *(b + 242 * OS1_S1 + 80) =
                prefactor_z * *(b + 242 * OS1_S1 + 52) -
                p_over_q * *(b + 316 * OS1_S1 + 52) +
                one_over_two_q * *(b + 180 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 31);
            *(b + 242 * OS1_S1 + 81) =
                prefactor_y * *(b + 242 * OS1_S1 + 54) -
                p_over_q * *(b + 315 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 54) +
                one_over_two_q * *(b + 242 * OS1_S1 + 34);
            *(b + 242 * OS1_S1 + 82) =
                prefactor_y * *(b + 242 * OS1_S1 + 55) -
                p_over_q * *(b + 315 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 55);
            *(b + 242 * OS1_S1 + 83) =
                prefactor_z * *(b + 242 * OS1_S1 + 55) -
                p_over_q * *(b + 316 * OS1_S1 + 55) +
                one_over_two_q * *(b + 180 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 34);
            *(b + 243 * OS1_S1 + 56) =
                prefactor_x * *(b + 243 * OS1_S1 + 35) -
                p_over_q * *(b + 309 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 20);
            *(b + 243 * OS1_S1 + 57) =
                prefactor_y * *(b + 243 * OS1_S1 + 35) -
                p_over_q * *(b + 316 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 35);
            *(b + 243 * OS1_S1 + 58) =
                prefactor_z * *(b + 243 * OS1_S1 + 35) -
                p_over_q * *(b + 317 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 35);
            *(b + 243 * OS1_S1 + 59) =
                prefactor_y * *(b + 243 * OS1_S1 + 36) -
                p_over_q * *(b + 316 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 36) +
                one_over_two_q * *(b + 243 * OS1_S1 + 20);
            *(b + 243 * OS1_S1 + 60) =
                prefactor_z * *(b + 243 * OS1_S1 + 36) -
                p_over_q * *(b + 317 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 36);
            *(b + 243 * OS1_S1 + 61) =
                prefactor_z * *(b + 243 * OS1_S1 + 37) -
                p_over_q * *(b + 317 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 37) +
                one_over_two_q * *(b + 243 * OS1_S1 + 20);
            *(b + 243 * OS1_S1 + 62) =
                prefactor_y * *(b + 243 * OS1_S1 + 38) -
                p_over_q * *(b + 316 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 243 * OS1_S1 + 21);
            *(b + 243 * OS1_S1 + 63) =
                prefactor_z * *(b + 243 * OS1_S1 + 38) -
                p_over_q * *(b + 317 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 38);
            *(b + 243 * OS1_S1 + 64) =
                prefactor_y * *(b + 243 * OS1_S1 + 40) -
                p_over_q * *(b + 316 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 40);
            *(b + 243 * OS1_S1 + 65) =
                prefactor_z * *(b + 243 * OS1_S1 + 40) -
                p_over_q * *(b + 317 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 243 * OS1_S1 + 22);
            *(b + 243 * OS1_S1 + 66) =
                prefactor_x * *(b + 243 * OS1_S1 + 45) -
                p_over_q * *(b + 309 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 45) +
                one_over_two_q * *(b + 243 * OS1_S1 + 30);
            *(b + 243 * OS1_S1 + 67) =
                prefactor_z * *(b + 243 * OS1_S1 + 41) -
                p_over_q * *(b + 317 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 41);
            *(b + 243 * OS1_S1 + 68) =
                prefactor_z * *(b + 243 * OS1_S1 + 42) -
                p_over_q * *(b + 317 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 42) +
                one_over_two_q * *(b + 243 * OS1_S1 + 23);
            *(b + 243 * OS1_S1 + 69) =
                prefactor_y * *(b + 243 * OS1_S1 + 44) -
                p_over_q * *(b + 316 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 44);
            *(b + 243 * OS1_S1 + 70) =
                prefactor_x * *(b + 243 * OS1_S1 + 49) -
                p_over_q * *(b + 309 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 49) +
                one_over_two_q * *(b + 243 * OS1_S1 + 34);
            *(b + 243 * OS1_S1 + 71) =
                prefactor_x * *(b + 243 * OS1_S1 + 50) -
                p_over_q * *(b + 309 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 50);
            *(b + 243 * OS1_S1 + 72) =
                prefactor_z * *(b + 243 * OS1_S1 + 45) -
                p_over_q * *(b + 317 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 45);
            *(b + 243 * OS1_S1 + 73) =
                prefactor_x * *(b + 243 * OS1_S1 + 52) -
                p_over_q * *(b + 309 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 52);
            *(b + 243 * OS1_S1 + 74) =
                prefactor_x * *(b + 243 * OS1_S1 + 53) -
                p_over_q * *(b + 309 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 53);
            *(b + 243 * OS1_S1 + 75) =
                prefactor_y * *(b + 243 * OS1_S1 + 49) -
                p_over_q * *(b + 316 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 49);
            *(b + 243 * OS1_S1 + 76) =
                prefactor_x * *(b + 243 * OS1_S1 + 55) -
                p_over_q * *(b + 309 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 55);
            *(b + 243 * OS1_S1 + 77) =
                prefactor_y * *(b + 243 * OS1_S1 + 50) -
                p_over_q * *(b + 316 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 30);
            *(b + 243 * OS1_S1 + 78) =
                prefactor_z * *(b + 243 * OS1_S1 + 50) -
                p_over_q * *(b + 317 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 50);
            *(b + 243 * OS1_S1 + 79) =
                prefactor_z * *(b + 243 * OS1_S1 + 51) -
                p_over_q * *(b + 317 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 51) +
                one_over_two_q * *(b + 243 * OS1_S1 + 30);
            *(b + 243 * OS1_S1 + 80) =
                prefactor_z * *(b + 243 * OS1_S1 + 52) -
                p_over_q * *(b + 317 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 243 * OS1_S1 + 31);
            *(b + 243 * OS1_S1 + 81) =
                prefactor_y * *(b + 243 * OS1_S1 + 54) -
                p_over_q * *(b + 316 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 54) +
                one_over_two_q * *(b + 243 * OS1_S1 + 34);
            *(b + 243 * OS1_S1 + 82) =
                prefactor_y * *(b + 243 * OS1_S1 + 55) -
                p_over_q * *(b + 316 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 55);
            *(b + 243 * OS1_S1 + 83) =
                prefactor_z * *(b + 243 * OS1_S1 + 55) -
                p_over_q * *(b + 317 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 34);
            *(b + 244 * OS1_S1 + 56) =
                prefactor_x * *(b + 244 * OS1_S1 + 35) -
                p_over_q * *(b + 310 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 20);
            *(b + 244 * OS1_S1 + 57) =
                prefactor_y * *(b + 244 * OS1_S1 + 35) -
                p_over_q * *(b + 317 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 35);
            *(b + 244 * OS1_S1 + 58) =
                prefactor_z * *(b + 244 * OS1_S1 + 35) -
                p_over_q * *(b + 318 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 35);
            *(b + 244 * OS1_S1 + 59) =
                prefactor_y * *(b + 244 * OS1_S1 + 36) -
                p_over_q * *(b + 317 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 36) +
                one_over_two_q * *(b + 244 * OS1_S1 + 20);
            *(b + 244 * OS1_S1 + 60) =
                prefactor_z * *(b + 244 * OS1_S1 + 36) -
                p_over_q * *(b + 318 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 36);
            *(b + 244 * OS1_S1 + 61) =
                prefactor_z * *(b + 244 * OS1_S1 + 37) -
                p_over_q * *(b + 318 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 37) +
                one_over_two_q * *(b + 244 * OS1_S1 + 20);
            *(b + 244 * OS1_S1 + 62) =
                prefactor_y * *(b + 244 * OS1_S1 + 38) -
                p_over_q * *(b + 317 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 244 * OS1_S1 + 21);
            *(b + 244 * OS1_S1 + 63) =
                prefactor_z * *(b + 244 * OS1_S1 + 38) -
                p_over_q * *(b + 318 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 38);
            *(b + 244 * OS1_S1 + 64) =
                prefactor_y * *(b + 244 * OS1_S1 + 40) -
                p_over_q * *(b + 317 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 40);
            *(b + 244 * OS1_S1 + 65) =
                prefactor_z * *(b + 244 * OS1_S1 + 40) -
                p_over_q * *(b + 318 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 244 * OS1_S1 + 22);
            *(b + 244 * OS1_S1 + 66) =
                prefactor_x * *(b + 244 * OS1_S1 + 45) -
                p_over_q * *(b + 310 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 45) +
                one_over_two_q * *(b + 244 * OS1_S1 + 30);
            *(b + 244 * OS1_S1 + 67) =
                prefactor_z * *(b + 244 * OS1_S1 + 41) -
                p_over_q * *(b + 318 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 41);
            *(b + 244 * OS1_S1 + 68) =
                prefactor_z * *(b + 244 * OS1_S1 + 42) -
                p_over_q * *(b + 318 * OS1_S1 + 42) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 42) +
                one_over_two_q * *(b + 244 * OS1_S1 + 23);
            *(b + 244 * OS1_S1 + 69) =
                prefactor_y * *(b + 244 * OS1_S1 + 44) -
                p_over_q * *(b + 317 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 44);
            *(b + 244 * OS1_S1 + 70) =
                prefactor_x * *(b + 244 * OS1_S1 + 49) -
                p_over_q * *(b + 310 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 49) +
                one_over_two_q * *(b + 244 * OS1_S1 + 34);
            *(b + 244 * OS1_S1 + 71) =
                prefactor_x * *(b + 244 * OS1_S1 + 50) -
                p_over_q * *(b + 310 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 50);
            *(b + 244 * OS1_S1 + 72) =
                prefactor_z * *(b + 244 * OS1_S1 + 45) -
                p_over_q * *(b + 318 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 45);
            *(b + 244 * OS1_S1 + 73) =
                prefactor_x * *(b + 244 * OS1_S1 + 52) -
                p_over_q * *(b + 310 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 52);
            *(b + 244 * OS1_S1 + 74) =
                prefactor_x * *(b + 244 * OS1_S1 + 53) -
                p_over_q * *(b + 310 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 53);
            *(b + 244 * OS1_S1 + 75) =
                prefactor_y * *(b + 244 * OS1_S1 + 49) -
                p_over_q * *(b + 317 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 49);
            *(b + 244 * OS1_S1 + 76) =
                prefactor_x * *(b + 244 * OS1_S1 + 55) -
                p_over_q * *(b + 310 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 55);
            *(b + 244 * OS1_S1 + 77) =
                prefactor_y * *(b + 244 * OS1_S1 + 50) -
                p_over_q * *(b + 317 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 30);
            *(b + 244 * OS1_S1 + 78) =
                prefactor_z * *(b + 244 * OS1_S1 + 50) -
                p_over_q * *(b + 318 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 50);
            *(b + 244 * OS1_S1 + 79) =
                prefactor_z * *(b + 244 * OS1_S1 + 51) -
                p_over_q * *(b + 318 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 51) +
                one_over_two_q * *(b + 244 * OS1_S1 + 30);
            *(b + 244 * OS1_S1 + 80) =
                prefactor_z * *(b + 244 * OS1_S1 + 52) -
                p_over_q * *(b + 318 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 244 * OS1_S1 + 31);
            *(b + 244 * OS1_S1 + 81) =
                prefactor_y * *(b + 244 * OS1_S1 + 54) -
                p_over_q * *(b + 317 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 54) +
                one_over_two_q * *(b + 244 * OS1_S1 + 34);
            *(b + 244 * OS1_S1 + 82) =
                prefactor_y * *(b + 244 * OS1_S1 + 55) -
                p_over_q * *(b + 317 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 55);
            *(b + 244 * OS1_S1 + 83) =
                prefactor_z * *(b + 244 * OS1_S1 + 55) -
                p_over_q * *(b + 318 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 34);
            *(b + 245 * OS1_S1 + 56) =
                prefactor_x * *(b + 245 * OS1_S1 + 35) -
                p_over_q * *(b + 311 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 20);
            *(b + 245 * OS1_S1 + 57) =
                prefactor_y * *(b + 245 * OS1_S1 + 35) -
                p_over_q * *(b + 318 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 35);
            *(b + 245 * OS1_S1 + 58) =
                prefactor_z * *(b + 245 * OS1_S1 + 35) -
                p_over_q * *(b + 319 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 35);
            *(b + 245 * OS1_S1 + 59) =
                prefactor_y * *(b + 245 * OS1_S1 + 36) -
                p_over_q * *(b + 318 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 36) +
                one_over_two_q * *(b + 245 * OS1_S1 + 20);
            *(b + 245 * OS1_S1 + 60) =
                prefactor_y * *(b + 245 * OS1_S1 + 37) -
                p_over_q * *(b + 318 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 37);
            *(b + 245 * OS1_S1 + 61) =
                prefactor_z * *(b + 245 * OS1_S1 + 37) -
                p_over_q * *(b + 319 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 37) +
                one_over_two_q * *(b + 245 * OS1_S1 + 20);
            *(b + 245 * OS1_S1 + 62) =
                prefactor_y * *(b + 245 * OS1_S1 + 38) -
                p_over_q * *(b + 318 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 245 * OS1_S1 + 21);
            *(b + 245 * OS1_S1 + 63) =
                prefactor_z * *(b + 245 * OS1_S1 + 38) -
                p_over_q * *(b + 319 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 38);
            *(b + 245 * OS1_S1 + 64) =
                prefactor_y * *(b + 245 * OS1_S1 + 40) -
                p_over_q * *(b + 318 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 40);
            *(b + 245 * OS1_S1 + 65) =
                prefactor_z * *(b + 245 * OS1_S1 + 40) -
                p_over_q * *(b + 319 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 245 * OS1_S1 + 22);
            *(b + 245 * OS1_S1 + 66) =
                prefactor_x * *(b + 245 * OS1_S1 + 45) -
                p_over_q * *(b + 311 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 45) +
                one_over_two_q * *(b + 245 * OS1_S1 + 30);
            *(b + 245 * OS1_S1 + 67) =
                prefactor_z * *(b + 245 * OS1_S1 + 41) -
                p_over_q * *(b + 319 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 41);
            *(b + 245 * OS1_S1 + 68) =
                prefactor_y * *(b + 245 * OS1_S1 + 43) -
                p_over_q * *(b + 318 * OS1_S1 + 43) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 43) +
                one_over_two_q * *(b + 245 * OS1_S1 + 25);
            *(b + 245 * OS1_S1 + 69) =
                prefactor_y * *(b + 245 * OS1_S1 + 44) -
                p_over_q * *(b + 318 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 44);
            *(b + 245 * OS1_S1 + 70) =
                prefactor_x * *(b + 245 * OS1_S1 + 49) -
                p_over_q * *(b + 311 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 49) +
                one_over_two_q * *(b + 245 * OS1_S1 + 34);
            *(b + 245 * OS1_S1 + 71) =
                prefactor_x * *(b + 245 * OS1_S1 + 50) -
                p_over_q * *(b + 311 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 50);
            *(b + 245 * OS1_S1 + 72) =
                prefactor_z * *(b + 245 * OS1_S1 + 45) -
                p_over_q * *(b + 319 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 45);
            *(b + 245 * OS1_S1 + 73) =
                prefactor_x * *(b + 245 * OS1_S1 + 52) -
                p_over_q * *(b + 311 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 52);
            *(b + 245 * OS1_S1 + 74) =
                prefactor_x * *(b + 245 * OS1_S1 + 53) -
                p_over_q * *(b + 311 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 53);
            *(b + 245 * OS1_S1 + 75) =
                prefactor_y * *(b + 245 * OS1_S1 + 49) -
                p_over_q * *(b + 318 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 49);
            *(b + 245 * OS1_S1 + 76) =
                prefactor_x * *(b + 245 * OS1_S1 + 55) -
                p_over_q * *(b + 311 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 55);
            *(b + 245 * OS1_S1 + 77) =
                prefactor_y * *(b + 245 * OS1_S1 + 50) -
                p_over_q * *(b + 318 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 30);
            *(b + 245 * OS1_S1 + 78) =
                prefactor_z * *(b + 245 * OS1_S1 + 50) -
                p_over_q * *(b + 319 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 50);
            *(b + 245 * OS1_S1 + 79) =
                prefactor_z * *(b + 245 * OS1_S1 + 51) -
                p_over_q * *(b + 319 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 51) +
                one_over_two_q * *(b + 245 * OS1_S1 + 30);
            *(b + 245 * OS1_S1 + 80) =
                prefactor_y * *(b + 245 * OS1_S1 + 53) -
                p_over_q * *(b + 318 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 245 * OS1_S1 + 33);
            *(b + 245 * OS1_S1 + 81) =
                prefactor_y * *(b + 245 * OS1_S1 + 54) -
                p_over_q * *(b + 318 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 54) +
                one_over_two_q * *(b + 245 * OS1_S1 + 34);
            *(b + 245 * OS1_S1 + 82) =
                prefactor_y * *(b + 245 * OS1_S1 + 55) -
                p_over_q * *(b + 318 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 55);
            *(b + 245 * OS1_S1 + 83) =
                prefactor_z * *(b + 245 * OS1_S1 + 55) -
                p_over_q * *(b + 319 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 34);
            *(b + 246 * OS1_S1 + 56) =
                prefactor_x * *(b + 246 * OS1_S1 + 35) -
                p_over_q * *(b + 312 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 20);
            *(b + 246 * OS1_S1 + 57) =
                prefactor_y * *(b + 246 * OS1_S1 + 35) -
                p_over_q * *(b + 319 * OS1_S1 + 35) +
                one_over_two_q * *(b + 185 * OS1_S1 + 35);
            *(b + 246 * OS1_S1 + 58) =
                prefactor_z * *(b + 246 * OS1_S1 + 35) -
                p_over_q * *(b + 320 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 35);
            *(b + 246 * OS1_S1 + 59) =
                prefactor_y * *(b + 246 * OS1_S1 + 36) -
                p_over_q * *(b + 319 * OS1_S1 + 36) +
                one_over_two_q * *(b + 185 * OS1_S1 + 36) +
                one_over_two_q * *(b + 246 * OS1_S1 + 20);
            *(b + 246 * OS1_S1 + 60) =
                prefactor_y * *(b + 246 * OS1_S1 + 37) -
                p_over_q * *(b + 319 * OS1_S1 + 37) +
                one_over_two_q * *(b + 185 * OS1_S1 + 37);
            *(b + 246 * OS1_S1 + 61) =
                prefactor_z * *(b + 246 * OS1_S1 + 37) -
                p_over_q * *(b + 320 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 37) +
                one_over_two_q * *(b + 246 * OS1_S1 + 20);
            *(b + 246 * OS1_S1 + 62) =
                prefactor_y * *(b + 246 * OS1_S1 + 38) -
                p_over_q * *(b + 319 * OS1_S1 + 38) +
                one_over_two_q * *(b + 185 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 21);
            *(b + 246 * OS1_S1 + 63) =
                prefactor_z * *(b + 246 * OS1_S1 + 38) -
                p_over_q * *(b + 320 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 38);
            *(b + 246 * OS1_S1 + 64) =
                prefactor_y * *(b + 246 * OS1_S1 + 40) -
                p_over_q * *(b + 319 * OS1_S1 + 40) +
                one_over_two_q * *(b + 185 * OS1_S1 + 40);
            *(b + 246 * OS1_S1 + 65) =
                prefactor_x * *(b + 246 * OS1_S1 + 44) -
                p_over_q * *(b + 312 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 29);
            *(b + 246 * OS1_S1 + 66) =
                prefactor_x * *(b + 246 * OS1_S1 + 45) -
                p_over_q * *(b + 312 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 45) +
                one_over_two_q * *(b + 246 * OS1_S1 + 30);
            *(b + 246 * OS1_S1 + 67) =
                prefactor_z * *(b + 246 * OS1_S1 + 41) -
                p_over_q * *(b + 320 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 41);
            *(b + 246 * OS1_S1 + 68) =
                prefactor_y * *(b + 246 * OS1_S1 + 43) -
                p_over_q * *(b + 319 * OS1_S1 + 43) +
                one_over_two_q * *(b + 185 * OS1_S1 + 43) +
                one_over_two_q * *(b + 246 * OS1_S1 + 25);
            *(b + 246 * OS1_S1 + 69) =
                prefactor_y * *(b + 246 * OS1_S1 + 44) -
                p_over_q * *(b + 319 * OS1_S1 + 44) +
                one_over_two_q * *(b + 185 * OS1_S1 + 44);
            *(b + 246 * OS1_S1 + 70) =
                prefactor_x * *(b + 246 * OS1_S1 + 49) -
                p_over_q * *(b + 312 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 49) +
                one_over_two_q * *(b + 246 * OS1_S1 + 34);
            *(b + 246 * OS1_S1 + 71) =
                prefactor_x * *(b + 246 * OS1_S1 + 50) -
                p_over_q * *(b + 312 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 50);
            *(b + 246 * OS1_S1 + 72) =
                prefactor_x * *(b + 246 * OS1_S1 + 51) -
                p_over_q * *(b + 312 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 51);
            *(b + 246 * OS1_S1 + 73) =
                prefactor_x * *(b + 246 * OS1_S1 + 52) -
                p_over_q * *(b + 312 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 52);
            *(b + 246 * OS1_S1 + 74) =
                prefactor_x * *(b + 246 * OS1_S1 + 53) -
                p_over_q * *(b + 312 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 53);
            *(b + 246 * OS1_S1 + 75) =
                prefactor_y * *(b + 246 * OS1_S1 + 49) -
                p_over_q * *(b + 319 * OS1_S1 + 49) +
                one_over_two_q * *(b + 185 * OS1_S1 + 49);
            *(b + 246 * OS1_S1 + 76) =
                prefactor_x * *(b + 246 * OS1_S1 + 55) -
                p_over_q * *(b + 312 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 55);
            *(b + 246 * OS1_S1 + 77) =
                prefactor_y * *(b + 246 * OS1_S1 + 50) -
                p_over_q * *(b + 319 * OS1_S1 + 50) +
                one_over_two_q * *(b + 185 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 30);
            *(b + 246 * OS1_S1 + 78) =
                prefactor_z * *(b + 246 * OS1_S1 + 50) -
                p_over_q * *(b + 320 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 50);
            *(b + 246 * OS1_S1 + 79) =
                prefactor_z * *(b + 246 * OS1_S1 + 51) -
                p_over_q * *(b + 320 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 51) +
                one_over_two_q * *(b + 246 * OS1_S1 + 30);
            *(b + 246 * OS1_S1 + 80) =
                prefactor_y * *(b + 246 * OS1_S1 + 53) -
                p_over_q * *(b + 319 * OS1_S1 + 53) +
                one_over_two_q * *(b + 185 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 33);
            *(b + 246 * OS1_S1 + 81) =
                prefactor_y * *(b + 246 * OS1_S1 + 54) -
                p_over_q * *(b + 319 * OS1_S1 + 54) +
                one_over_two_q * *(b + 185 * OS1_S1 + 54) +
                one_over_two_q * *(b + 246 * OS1_S1 + 34);
            *(b + 246 * OS1_S1 + 82) =
                prefactor_y * *(b + 246 * OS1_S1 + 55) -
                p_over_q * *(b + 319 * OS1_S1 + 55) +
                one_over_two_q * *(b + 185 * OS1_S1 + 55);
            *(b + 246 * OS1_S1 + 83) =
                prefactor_z * *(b + 246 * OS1_S1 + 55) -
                p_over_q * *(b + 320 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 34);
            *(b + 247 * OS1_S1 + 56) =
                prefactor_x * *(b + 247 * OS1_S1 + 35) -
                p_over_q * *(b + 313 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 20);
            *(b + 247 * OS1_S1 + 57) = prefactor_y * *(b + 247 * OS1_S1 + 35) -
                                       p_over_q * *(b + 320 * OS1_S1 + 35);
            *(b + 247 * OS1_S1 + 58) =
                prefactor_z * *(b + 247 * OS1_S1 + 35) -
                p_over_q * *(b + 321 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 35);
            *(b + 247 * OS1_S1 + 59) =
                prefactor_y * *(b + 247 * OS1_S1 + 36) -
                p_over_q * *(b + 320 * OS1_S1 + 36) +
                one_over_two_q * *(b + 247 * OS1_S1 + 20);
            *(b + 247 * OS1_S1 + 60) = prefactor_y * *(b + 247 * OS1_S1 + 37) -
                                       p_over_q * *(b + 320 * OS1_S1 + 37);
            *(b + 247 * OS1_S1 + 61) =
                prefactor_z * *(b + 247 * OS1_S1 + 37) -
                p_over_q * *(b + 321 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 37) +
                one_over_two_q * *(b + 247 * OS1_S1 + 20);
            *(b + 247 * OS1_S1 + 62) =
                prefactor_y * *(b + 247 * OS1_S1 + 38) -
                p_over_q * *(b + 320 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 247 * OS1_S1 + 21);
            *(b + 247 * OS1_S1 + 63) =
                prefactor_z * *(b + 247 * OS1_S1 + 38) -
                p_over_q * *(b + 321 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 38);
            *(b + 247 * OS1_S1 + 64) = prefactor_y * *(b + 247 * OS1_S1 + 40) -
                                       p_over_q * *(b + 320 * OS1_S1 + 40);
            *(b + 247 * OS1_S1 + 65) =
                prefactor_x * *(b + 247 * OS1_S1 + 44) -
                p_over_q * *(b + 313 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 247 * OS1_S1 + 29);
            *(b + 247 * OS1_S1 + 66) =
                prefactor_x * *(b + 247 * OS1_S1 + 45) -
                p_over_q * *(b + 313 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 45) +
                one_over_two_q * *(b + 247 * OS1_S1 + 30);
            *(b + 247 * OS1_S1 + 67) =
                prefactor_z * *(b + 247 * OS1_S1 + 41) -
                p_over_q * *(b + 321 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 41);
            *(b + 247 * OS1_S1 + 68) =
                prefactor_y * *(b + 247 * OS1_S1 + 43) -
                p_over_q * *(b + 320 * OS1_S1 + 43) +
                one_over_two_q * *(b + 247 * OS1_S1 + 25);
            *(b + 247 * OS1_S1 + 69) = prefactor_y * *(b + 247 * OS1_S1 + 44) -
                                       p_over_q * *(b + 320 * OS1_S1 + 44);
            *(b + 247 * OS1_S1 + 70) =
                prefactor_x * *(b + 247 * OS1_S1 + 49) -
                p_over_q * *(b + 313 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 49) +
                one_over_two_q * *(b + 247 * OS1_S1 + 34);
            *(b + 247 * OS1_S1 + 71) =
                prefactor_x * *(b + 247 * OS1_S1 + 50) -
                p_over_q * *(b + 313 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 50);
            *(b + 247 * OS1_S1 + 72) =
                prefactor_x * *(b + 247 * OS1_S1 + 51) -
                p_over_q * *(b + 313 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 51);
            *(b + 247 * OS1_S1 + 73) =
                prefactor_x * *(b + 247 * OS1_S1 + 52) -
                p_over_q * *(b + 313 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 52);
            *(b + 247 * OS1_S1 + 74) =
                prefactor_x * *(b + 247 * OS1_S1 + 53) -
                p_over_q * *(b + 313 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 53);
            *(b + 247 * OS1_S1 + 75) = prefactor_y * *(b + 247 * OS1_S1 + 49) -
                                       p_over_q * *(b + 320 * OS1_S1 + 49);
            *(b + 247 * OS1_S1 + 76) =
                prefactor_x * *(b + 247 * OS1_S1 + 55) -
                p_over_q * *(b + 313 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 55);
            *(b + 247 * OS1_S1 + 77) =
                prefactor_y * *(b + 247 * OS1_S1 + 50) -
                p_over_q * *(b + 320 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 30);
            *(b + 247 * OS1_S1 + 78) =
                prefactor_z * *(b + 247 * OS1_S1 + 50) -
                p_over_q * *(b + 321 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 50);
            *(b + 247 * OS1_S1 + 79) =
                prefactor_z * *(b + 247 * OS1_S1 + 51) -
                p_over_q * *(b + 321 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 51) +
                one_over_two_q * *(b + 247 * OS1_S1 + 30);
            *(b + 247 * OS1_S1 + 80) =
                prefactor_y * *(b + 247 * OS1_S1 + 53) -
                p_over_q * *(b + 320 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 247 * OS1_S1 + 33);
            *(b + 247 * OS1_S1 + 81) =
                prefactor_y * *(b + 247 * OS1_S1 + 54) -
                p_over_q * *(b + 320 * OS1_S1 + 54) +
                one_over_two_q * *(b + 247 * OS1_S1 + 34);
            *(b + 247 * OS1_S1 + 82) = prefactor_y * *(b + 247 * OS1_S1 + 55) -
                                       p_over_q * *(b + 320 * OS1_S1 + 55);
            *(b + 247 * OS1_S1 + 83) =
                prefactor_z * *(b + 247 * OS1_S1 + 55) -
                p_over_q * *(b + 321 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 34);
            *(b + 248 * OS1_S1 + 56) =
                prefactor_x * *(b + 248 * OS1_S1 + 35) -
                p_over_q * *(b + 314 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 248 * OS1_S1 + 20);
            *(b + 248 * OS1_S1 + 57) =
                prefactor_y * *(b + 248 * OS1_S1 + 35) -
                p_over_q * *(b + 322 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 35);
            *(b + 248 * OS1_S1 + 58) = prefactor_z * *(b + 248 * OS1_S1 + 35) -
                                       p_over_q * *(b + 323 * OS1_S1 + 35);
            *(b + 248 * OS1_S1 + 59) =
                prefactor_y * *(b + 248 * OS1_S1 + 36) -
                p_over_q * *(b + 322 * OS1_S1 + 36) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 36) +
                one_over_two_q * *(b + 248 * OS1_S1 + 20);
            *(b + 248 * OS1_S1 + 60) = prefactor_z * *(b + 248 * OS1_S1 + 36) -
                                       p_over_q * *(b + 323 * OS1_S1 + 36);
            *(b + 248 * OS1_S1 + 61) =
                prefactor_z * *(b + 248 * OS1_S1 + 37) -
                p_over_q * *(b + 323 * OS1_S1 + 37) +
                one_over_two_q * *(b + 248 * OS1_S1 + 20);
            *(b + 248 * OS1_S1 + 62) =
                prefactor_x * *(b + 248 * OS1_S1 + 41) -
                p_over_q * *(b + 314 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 248 * OS1_S1 + 26);
            *(b + 248 * OS1_S1 + 63) = prefactor_z * *(b + 248 * OS1_S1 + 38) -
                                       p_over_q * *(b + 323 * OS1_S1 + 38);
            *(b + 248 * OS1_S1 + 64) =
                prefactor_y * *(b + 248 * OS1_S1 + 40) -
                p_over_q * *(b + 322 * OS1_S1 + 40) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 40);
            *(b + 248 * OS1_S1 + 65) =
                prefactor_z * *(b + 248 * OS1_S1 + 40) -
                p_over_q * *(b + 323 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 248 * OS1_S1 + 22);
            *(b + 248 * OS1_S1 + 66) =
                prefactor_x * *(b + 248 * OS1_S1 + 45) -
                p_over_q * *(b + 314 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 45) +
                one_over_two_q * *(b + 248 * OS1_S1 + 30);
            *(b + 248 * OS1_S1 + 67) = prefactor_z * *(b + 248 * OS1_S1 + 41) -
                                       p_over_q * *(b + 323 * OS1_S1 + 41);
            *(b + 248 * OS1_S1 + 68) =
                prefactor_z * *(b + 248 * OS1_S1 + 42) -
                p_over_q * *(b + 323 * OS1_S1 + 42) +
                one_over_two_q * *(b + 248 * OS1_S1 + 23);
            *(b + 248 * OS1_S1 + 69) =
                prefactor_y * *(b + 248 * OS1_S1 + 44) -
                p_over_q * *(b + 322 * OS1_S1 + 44) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 44);
            *(b + 248 * OS1_S1 + 70) =
                prefactor_x * *(b + 248 * OS1_S1 + 49) -
                p_over_q * *(b + 314 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 49) +
                one_over_two_q * *(b + 248 * OS1_S1 + 34);
            *(b + 248 * OS1_S1 + 71) =
                prefactor_x * *(b + 248 * OS1_S1 + 50) -
                p_over_q * *(b + 314 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 50);
            *(b + 248 * OS1_S1 + 72) = prefactor_z * *(b + 248 * OS1_S1 + 45) -
                                       p_over_q * *(b + 323 * OS1_S1 + 45);
            *(b + 248 * OS1_S1 + 73) =
                prefactor_x * *(b + 248 * OS1_S1 + 52) -
                p_over_q * *(b + 314 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 52);
            *(b + 248 * OS1_S1 + 74) =
                prefactor_x * *(b + 248 * OS1_S1 + 53) -
                p_over_q * *(b + 314 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 53);
            *(b + 248 * OS1_S1 + 75) =
                prefactor_x * *(b + 248 * OS1_S1 + 54) -
                p_over_q * *(b + 314 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 54);
            *(b + 248 * OS1_S1 + 76) =
                prefactor_x * *(b + 248 * OS1_S1 + 55) -
                p_over_q * *(b + 314 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 55);
            *(b + 248 * OS1_S1 + 77) =
                prefactor_y * *(b + 248 * OS1_S1 + 50) -
                p_over_q * *(b + 322 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 248 * OS1_S1 + 30);
            *(b + 248 * OS1_S1 + 78) = prefactor_z * *(b + 248 * OS1_S1 + 50) -
                                       p_over_q * *(b + 323 * OS1_S1 + 50);
            *(b + 248 * OS1_S1 + 79) =
                prefactor_z * *(b + 248 * OS1_S1 + 51) -
                p_over_q * *(b + 323 * OS1_S1 + 51) +
                one_over_two_q * *(b + 248 * OS1_S1 + 30);
            *(b + 248 * OS1_S1 + 80) =
                prefactor_z * *(b + 248 * OS1_S1 + 52) -
                p_over_q * *(b + 323 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 248 * OS1_S1 + 31);
            *(b + 248 * OS1_S1 + 81) =
                prefactor_y * *(b + 248 * OS1_S1 + 54) -
                p_over_q * *(b + 322 * OS1_S1 + 54) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 54) +
                one_over_two_q * *(b + 248 * OS1_S1 + 34);
            *(b + 248 * OS1_S1 + 82) =
                prefactor_y * *(b + 248 * OS1_S1 + 55) -
                p_over_q * *(b + 322 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 55);
            *(b + 248 * OS1_S1 + 83) =
                prefactor_z * *(b + 248 * OS1_S1 + 55) -
                p_over_q * *(b + 323 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 248 * OS1_S1 + 34);
            *(b + 249 * OS1_S1 + 56) =
                prefactor_x * *(b + 249 * OS1_S1 + 35) -
                p_over_q * *(b + 315 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 249 * OS1_S1 + 20);
            *(b + 249 * OS1_S1 + 57) =
                prefactor_y * *(b + 249 * OS1_S1 + 35) -
                p_over_q * *(b + 323 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 35);
            *(b + 249 * OS1_S1 + 58) =
                prefactor_z * *(b + 249 * OS1_S1 + 35) -
                p_over_q * *(b + 324 * OS1_S1 + 35) +
                one_over_two_q * *(b + 186 * OS1_S1 + 35);
            *(b + 249 * OS1_S1 + 59) =
                prefactor_y * *(b + 249 * OS1_S1 + 36) -
                p_over_q * *(b + 323 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 36) +
                one_over_two_q * *(b + 249 * OS1_S1 + 20);
            *(b + 249 * OS1_S1 + 60) =
                prefactor_z * *(b + 249 * OS1_S1 + 36) -
                p_over_q * *(b + 324 * OS1_S1 + 36) +
                one_over_two_q * *(b + 186 * OS1_S1 + 36);
            *(b + 249 * OS1_S1 + 61) =
                prefactor_z * *(b + 249 * OS1_S1 + 37) -
                p_over_q * *(b + 324 * OS1_S1 + 37) +
                one_over_two_q * *(b + 186 * OS1_S1 + 37) +
                one_over_two_q * *(b + 249 * OS1_S1 + 20);
            *(b + 249 * OS1_S1 + 62) =
                prefactor_x * *(b + 249 * OS1_S1 + 41) -
                p_over_q * *(b + 315 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 26);
            *(b + 249 * OS1_S1 + 63) =
                prefactor_z * *(b + 249 * OS1_S1 + 38) -
                p_over_q * *(b + 324 * OS1_S1 + 38) +
                one_over_two_q * *(b + 186 * OS1_S1 + 38);
            *(b + 249 * OS1_S1 + 64) =
                prefactor_y * *(b + 249 * OS1_S1 + 40) -
                p_over_q * *(b + 323 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 40);
            *(b + 249 * OS1_S1 + 65) =
                prefactor_z * *(b + 249 * OS1_S1 + 40) -
                p_over_q * *(b + 324 * OS1_S1 + 40) +
                one_over_two_q * *(b + 186 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 22);
            *(b + 249 * OS1_S1 + 66) =
                prefactor_x * *(b + 249 * OS1_S1 + 45) -
                p_over_q * *(b + 315 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 45) +
                one_over_two_q * *(b + 249 * OS1_S1 + 30);
            *(b + 249 * OS1_S1 + 67) =
                prefactor_z * *(b + 249 * OS1_S1 + 41) -
                p_over_q * *(b + 324 * OS1_S1 + 41) +
                one_over_two_q * *(b + 186 * OS1_S1 + 41);
            *(b + 249 * OS1_S1 + 68) =
                prefactor_z * *(b + 249 * OS1_S1 + 42) -
                p_over_q * *(b + 324 * OS1_S1 + 42) +
                one_over_two_q * *(b + 186 * OS1_S1 + 42) +
                one_over_two_q * *(b + 249 * OS1_S1 + 23);
            *(b + 249 * OS1_S1 + 69) =
                prefactor_y * *(b + 249 * OS1_S1 + 44) -
                p_over_q * *(b + 323 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 44);
            *(b + 249 * OS1_S1 + 70) =
                prefactor_x * *(b + 249 * OS1_S1 + 49) -
                p_over_q * *(b + 315 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 49) +
                one_over_two_q * *(b + 249 * OS1_S1 + 34);
            *(b + 249 * OS1_S1 + 71) =
                prefactor_x * *(b + 249 * OS1_S1 + 50) -
                p_over_q * *(b + 315 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 50);
            *(b + 249 * OS1_S1 + 72) =
                prefactor_z * *(b + 249 * OS1_S1 + 45) -
                p_over_q * *(b + 324 * OS1_S1 + 45) +
                one_over_two_q * *(b + 186 * OS1_S1 + 45);
            *(b + 249 * OS1_S1 + 73) =
                prefactor_x * *(b + 249 * OS1_S1 + 52) -
                p_over_q * *(b + 315 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 52);
            *(b + 249 * OS1_S1 + 74) =
                prefactor_x * *(b + 249 * OS1_S1 + 53) -
                p_over_q * *(b + 315 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 53);
            *(b + 249 * OS1_S1 + 75) =
                prefactor_x * *(b + 249 * OS1_S1 + 54) -
                p_over_q * *(b + 315 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 54);
            *(b + 249 * OS1_S1 + 76) =
                prefactor_x * *(b + 249 * OS1_S1 + 55) -
                p_over_q * *(b + 315 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 55);
            *(b + 249 * OS1_S1 + 77) =
                prefactor_y * *(b + 249 * OS1_S1 + 50) -
                p_over_q * *(b + 323 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 249 * OS1_S1 + 30);
            *(b + 249 * OS1_S1 + 78) =
                prefactor_z * *(b + 249 * OS1_S1 + 50) -
                p_over_q * *(b + 324 * OS1_S1 + 50) +
                one_over_two_q * *(b + 186 * OS1_S1 + 50);
            *(b + 249 * OS1_S1 + 79) =
                prefactor_z * *(b + 249 * OS1_S1 + 51) -
                p_over_q * *(b + 324 * OS1_S1 + 51) +
                one_over_two_q * *(b + 186 * OS1_S1 + 51) +
                one_over_two_q * *(b + 249 * OS1_S1 + 30);
            *(b + 249 * OS1_S1 + 80) =
                prefactor_z * *(b + 249 * OS1_S1 + 52) -
                p_over_q * *(b + 324 * OS1_S1 + 52) +
                one_over_two_q * *(b + 186 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 31);
            *(b + 249 * OS1_S1 + 81) =
                prefactor_y * *(b + 249 * OS1_S1 + 54) -
                p_over_q * *(b + 323 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 54) +
                one_over_two_q * *(b + 249 * OS1_S1 + 34);
            *(b + 249 * OS1_S1 + 82) =
                prefactor_y * *(b + 249 * OS1_S1 + 55) -
                p_over_q * *(b + 323 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 55);
            *(b + 249 * OS1_S1 + 83) =
                prefactor_z * *(b + 249 * OS1_S1 + 55) -
                p_over_q * *(b + 324 * OS1_S1 + 55) +
                one_over_two_q * *(b + 186 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 249 * OS1_S1 + 34);
            *(b + 250 * OS1_S1 + 56) =
                prefactor_x * *(b + 250 * OS1_S1 + 35) -
                p_over_q * *(b + 316 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 250 * OS1_S1 + 20);
            *(b + 250 * OS1_S1 + 57) =
                prefactor_y * *(b + 250 * OS1_S1 + 35) -
                p_over_q * *(b + 324 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 35);
            *(b + 250 * OS1_S1 + 58) =
                prefactor_z * *(b + 250 * OS1_S1 + 35) -
                p_over_q * *(b + 325 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 35);
            *(b + 250 * OS1_S1 + 59) =
                prefactor_y * *(b + 250 * OS1_S1 + 36) -
                p_over_q * *(b + 324 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 36) +
                one_over_two_q * *(b + 250 * OS1_S1 + 20);
            *(b + 250 * OS1_S1 + 60) =
                prefactor_z * *(b + 250 * OS1_S1 + 36) -
                p_over_q * *(b + 325 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 36);
            *(b + 250 * OS1_S1 + 61) =
                prefactor_z * *(b + 250 * OS1_S1 + 37) -
                p_over_q * *(b + 325 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 37) +
                one_over_two_q * *(b + 250 * OS1_S1 + 20);
            *(b + 250 * OS1_S1 + 62) =
                prefactor_x * *(b + 250 * OS1_S1 + 41) -
                p_over_q * *(b + 316 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 250 * OS1_S1 + 26);
            *(b + 250 * OS1_S1 + 63) =
                prefactor_z * *(b + 250 * OS1_S1 + 38) -
                p_over_q * *(b + 325 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 38);
            *(b + 250 * OS1_S1 + 64) =
                prefactor_y * *(b + 250 * OS1_S1 + 40) -
                p_over_q * *(b + 324 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 40);
            *(b + 250 * OS1_S1 + 65) =
                prefactor_z * *(b + 250 * OS1_S1 + 40) -
                p_over_q * *(b + 325 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 250 * OS1_S1 + 22);
            *(b + 250 * OS1_S1 + 66) =
                prefactor_x * *(b + 250 * OS1_S1 + 45) -
                p_over_q * *(b + 316 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 45) +
                one_over_two_q * *(b + 250 * OS1_S1 + 30);
            *(b + 250 * OS1_S1 + 67) =
                prefactor_z * *(b + 250 * OS1_S1 + 41) -
                p_over_q * *(b + 325 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 41);
            *(b + 250 * OS1_S1 + 68) =
                prefactor_z * *(b + 250 * OS1_S1 + 42) -
                p_over_q * *(b + 325 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 42) +
                one_over_two_q * *(b + 250 * OS1_S1 + 23);
            *(b + 250 * OS1_S1 + 69) =
                prefactor_y * *(b + 250 * OS1_S1 + 44) -
                p_over_q * *(b + 324 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 44);
            *(b + 250 * OS1_S1 + 70) =
                prefactor_x * *(b + 250 * OS1_S1 + 49) -
                p_over_q * *(b + 316 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 49) +
                one_over_two_q * *(b + 250 * OS1_S1 + 34);
            *(b + 250 * OS1_S1 + 71) =
                prefactor_x * *(b + 250 * OS1_S1 + 50) -
                p_over_q * *(b + 316 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 50);
            *(b + 250 * OS1_S1 + 72) =
                prefactor_z * *(b + 250 * OS1_S1 + 45) -
                p_over_q * *(b + 325 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 45);
            *(b + 250 * OS1_S1 + 73) =
                prefactor_x * *(b + 250 * OS1_S1 + 52) -
                p_over_q * *(b + 316 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 52);
            *(b + 250 * OS1_S1 + 74) =
                prefactor_x * *(b + 250 * OS1_S1 + 53) -
                p_over_q * *(b + 316 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 53);
            *(b + 250 * OS1_S1 + 75) =
                prefactor_x * *(b + 250 * OS1_S1 + 54) -
                p_over_q * *(b + 316 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 54);
            *(b + 250 * OS1_S1 + 76) =
                prefactor_x * *(b + 250 * OS1_S1 + 55) -
                p_over_q * *(b + 316 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 55);
            *(b + 250 * OS1_S1 + 77) =
                prefactor_y * *(b + 250 * OS1_S1 + 50) -
                p_over_q * *(b + 324 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 250 * OS1_S1 + 30);
            *(b + 250 * OS1_S1 + 78) =
                prefactor_z * *(b + 250 * OS1_S1 + 50) -
                p_over_q * *(b + 325 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 50);
            *(b + 250 * OS1_S1 + 79) =
                prefactor_z * *(b + 250 * OS1_S1 + 51) -
                p_over_q * *(b + 325 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 51) +
                one_over_two_q * *(b + 250 * OS1_S1 + 30);
            *(b + 250 * OS1_S1 + 80) =
                prefactor_z * *(b + 250 * OS1_S1 + 52) -
                p_over_q * *(b + 325 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 250 * OS1_S1 + 31);
            *(b + 250 * OS1_S1 + 81) =
                prefactor_y * *(b + 250 * OS1_S1 + 54) -
                p_over_q * *(b + 324 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 54) +
                one_over_two_q * *(b + 250 * OS1_S1 + 34);
            *(b + 250 * OS1_S1 + 82) =
                prefactor_y * *(b + 250 * OS1_S1 + 55) -
                p_over_q * *(b + 324 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 55);
            *(b + 250 * OS1_S1 + 83) =
                prefactor_z * *(b + 250 * OS1_S1 + 55) -
                p_over_q * *(b + 325 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 250 * OS1_S1 + 34);
            *(b + 251 * OS1_S1 + 56) =
                prefactor_x * *(b + 251 * OS1_S1 + 35) -
                p_over_q * *(b + 317 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 20);
            *(b + 251 * OS1_S1 + 57) =
                prefactor_y * *(b + 251 * OS1_S1 + 35) -
                p_over_q * *(b + 325 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 35);
            *(b + 251 * OS1_S1 + 58) =
                prefactor_z * *(b + 251 * OS1_S1 + 35) -
                p_over_q * *(b + 326 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 35);
            *(b + 251 * OS1_S1 + 59) =
                prefactor_y * *(b + 251 * OS1_S1 + 36) -
                p_over_q * *(b + 325 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 36) +
                one_over_two_q * *(b + 251 * OS1_S1 + 20);
            *(b + 251 * OS1_S1 + 60) =
                prefactor_z * *(b + 251 * OS1_S1 + 36) -
                p_over_q * *(b + 326 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 36);
            *(b + 251 * OS1_S1 + 61) =
                prefactor_z * *(b + 251 * OS1_S1 + 37) -
                p_over_q * *(b + 326 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 37) +
                one_over_two_q * *(b + 251 * OS1_S1 + 20);
            *(b + 251 * OS1_S1 + 62) =
                prefactor_x * *(b + 251 * OS1_S1 + 41) -
                p_over_q * *(b + 317 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 251 * OS1_S1 + 26);
            *(b + 251 * OS1_S1 + 63) =
                prefactor_z * *(b + 251 * OS1_S1 + 38) -
                p_over_q * *(b + 326 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 38);
            *(b + 251 * OS1_S1 + 64) =
                prefactor_y * *(b + 251 * OS1_S1 + 40) -
                p_over_q * *(b + 325 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 40);
            *(b + 251 * OS1_S1 + 65) =
                prefactor_z * *(b + 251 * OS1_S1 + 40) -
                p_over_q * *(b + 326 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 251 * OS1_S1 + 22);
            *(b + 251 * OS1_S1 + 66) =
                prefactor_x * *(b + 251 * OS1_S1 + 45) -
                p_over_q * *(b + 317 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 45) +
                one_over_two_q * *(b + 251 * OS1_S1 + 30);
            *(b + 251 * OS1_S1 + 67) =
                prefactor_z * *(b + 251 * OS1_S1 + 41) -
                p_over_q * *(b + 326 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 41);
            *(b + 251 * OS1_S1 + 68) =
                prefactor_z * *(b + 251 * OS1_S1 + 42) -
                p_over_q * *(b + 326 * OS1_S1 + 42) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 42) +
                one_over_two_q * *(b + 251 * OS1_S1 + 23);
            *(b + 251 * OS1_S1 + 69) =
                prefactor_y * *(b + 251 * OS1_S1 + 44) -
                p_over_q * *(b + 325 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 44);
            *(b + 251 * OS1_S1 + 70) =
                prefactor_x * *(b + 251 * OS1_S1 + 49) -
                p_over_q * *(b + 317 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 49) +
                one_over_two_q * *(b + 251 * OS1_S1 + 34);
            *(b + 251 * OS1_S1 + 71) =
                prefactor_x * *(b + 251 * OS1_S1 + 50) -
                p_over_q * *(b + 317 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 50);
            *(b + 251 * OS1_S1 + 72) =
                prefactor_z * *(b + 251 * OS1_S1 + 45) -
                p_over_q * *(b + 326 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 45);
            *(b + 251 * OS1_S1 + 73) =
                prefactor_x * *(b + 251 * OS1_S1 + 52) -
                p_over_q * *(b + 317 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 52);
            *(b + 251 * OS1_S1 + 74) =
                prefactor_x * *(b + 251 * OS1_S1 + 53) -
                p_over_q * *(b + 317 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 53);
            *(b + 251 * OS1_S1 + 75) =
                prefactor_x * *(b + 251 * OS1_S1 + 54) -
                p_over_q * *(b + 317 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 54);
            *(b + 251 * OS1_S1 + 76) =
                prefactor_x * *(b + 251 * OS1_S1 + 55) -
                p_over_q * *(b + 317 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 55);
            *(b + 251 * OS1_S1 + 77) =
                prefactor_y * *(b + 251 * OS1_S1 + 50) -
                p_over_q * *(b + 325 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 30);
            *(b + 251 * OS1_S1 + 78) =
                prefactor_z * *(b + 251 * OS1_S1 + 50) -
                p_over_q * *(b + 326 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 50);
            *(b + 251 * OS1_S1 + 79) =
                prefactor_z * *(b + 251 * OS1_S1 + 51) -
                p_over_q * *(b + 326 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 51) +
                one_over_two_q * *(b + 251 * OS1_S1 + 30);
            *(b + 251 * OS1_S1 + 80) =
                prefactor_z * *(b + 251 * OS1_S1 + 52) -
                p_over_q * *(b + 326 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 251 * OS1_S1 + 31);
            *(b + 251 * OS1_S1 + 81) =
                prefactor_y * *(b + 251 * OS1_S1 + 54) -
                p_over_q * *(b + 325 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 54) +
                one_over_two_q * *(b + 251 * OS1_S1 + 34);
            *(b + 251 * OS1_S1 + 82) =
                prefactor_y * *(b + 251 * OS1_S1 + 55) -
                p_over_q * *(b + 325 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 55);
            *(b + 251 * OS1_S1 + 83) =
                prefactor_z * *(b + 251 * OS1_S1 + 55) -
                p_over_q * *(b + 326 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 34);
            *(b + 252 * OS1_S1 + 56) =
                prefactor_x * *(b + 252 * OS1_S1 + 35) -
                p_over_q * *(b + 318 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 20);
            *(b + 252 * OS1_S1 + 57) =
                prefactor_y * *(b + 252 * OS1_S1 + 35) -
                p_over_q * *(b + 326 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 35);
            *(b + 252 * OS1_S1 + 58) =
                prefactor_z * *(b + 252 * OS1_S1 + 35) -
                p_over_q * *(b + 327 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 35);
            *(b + 252 * OS1_S1 + 59) =
                prefactor_y * *(b + 252 * OS1_S1 + 36) -
                p_over_q * *(b + 326 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 36) +
                one_over_two_q * *(b + 252 * OS1_S1 + 20);
            *(b + 252 * OS1_S1 + 60) =
                prefactor_y * *(b + 252 * OS1_S1 + 37) -
                p_over_q * *(b + 326 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 37);
            *(b + 252 * OS1_S1 + 61) =
                prefactor_z * *(b + 252 * OS1_S1 + 37) -
                p_over_q * *(b + 327 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 37) +
                one_over_two_q * *(b + 252 * OS1_S1 + 20);
            *(b + 252 * OS1_S1 + 62) =
                prefactor_y * *(b + 252 * OS1_S1 + 38) -
                p_over_q * *(b + 326 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 252 * OS1_S1 + 21);
            *(b + 252 * OS1_S1 + 63) =
                prefactor_z * *(b + 252 * OS1_S1 + 38) -
                p_over_q * *(b + 327 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 38);
            *(b + 252 * OS1_S1 + 64) =
                prefactor_y * *(b + 252 * OS1_S1 + 40) -
                p_over_q * *(b + 326 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 40);
            *(b + 252 * OS1_S1 + 65) =
                prefactor_x * *(b + 252 * OS1_S1 + 44) -
                p_over_q * *(b + 318 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 252 * OS1_S1 + 29);
            *(b + 252 * OS1_S1 + 66) =
                prefactor_x * *(b + 252 * OS1_S1 + 45) -
                p_over_q * *(b + 318 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 45) +
                one_over_two_q * *(b + 252 * OS1_S1 + 30);
            *(b + 252 * OS1_S1 + 67) =
                prefactor_z * *(b + 252 * OS1_S1 + 41) -
                p_over_q * *(b + 327 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 41);
            *(b + 252 * OS1_S1 + 68) =
                prefactor_y * *(b + 252 * OS1_S1 + 43) -
                p_over_q * *(b + 326 * OS1_S1 + 43) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 43) +
                one_over_two_q * *(b + 252 * OS1_S1 + 25);
            *(b + 252 * OS1_S1 + 69) =
                prefactor_y * *(b + 252 * OS1_S1 + 44) -
                p_over_q * *(b + 326 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 44);
            *(b + 252 * OS1_S1 + 70) =
                prefactor_x * *(b + 252 * OS1_S1 + 49) -
                p_over_q * *(b + 318 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 49) +
                one_over_two_q * *(b + 252 * OS1_S1 + 34);
            *(b + 252 * OS1_S1 + 71) =
                prefactor_x * *(b + 252 * OS1_S1 + 50) -
                p_over_q * *(b + 318 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 50);
            *(b + 252 * OS1_S1 + 72) =
                prefactor_x * *(b + 252 * OS1_S1 + 51) -
                p_over_q * *(b + 318 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 51);
            *(b + 252 * OS1_S1 + 73) =
                prefactor_x * *(b + 252 * OS1_S1 + 52) -
                p_over_q * *(b + 318 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 52);
            *(b + 252 * OS1_S1 + 74) =
                prefactor_x * *(b + 252 * OS1_S1 + 53) -
                p_over_q * *(b + 318 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 53);
            *(b + 252 * OS1_S1 + 75) =
                prefactor_y * *(b + 252 * OS1_S1 + 49) -
                p_over_q * *(b + 326 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 49);
            *(b + 252 * OS1_S1 + 76) =
                prefactor_x * *(b + 252 * OS1_S1 + 55) -
                p_over_q * *(b + 318 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 55);
            *(b + 252 * OS1_S1 + 77) =
                prefactor_y * *(b + 252 * OS1_S1 + 50) -
                p_over_q * *(b + 326 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 30);
            *(b + 252 * OS1_S1 + 78) =
                prefactor_z * *(b + 252 * OS1_S1 + 50) -
                p_over_q * *(b + 327 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 50);
            *(b + 252 * OS1_S1 + 79) =
                prefactor_z * *(b + 252 * OS1_S1 + 51) -
                p_over_q * *(b + 327 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 51) +
                one_over_two_q * *(b + 252 * OS1_S1 + 30);
            *(b + 252 * OS1_S1 + 80) =
                prefactor_y * *(b + 252 * OS1_S1 + 53) -
                p_over_q * *(b + 326 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 252 * OS1_S1 + 33);
            *(b + 252 * OS1_S1 + 81) =
                prefactor_y * *(b + 252 * OS1_S1 + 54) -
                p_over_q * *(b + 326 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 54) +
                one_over_two_q * *(b + 252 * OS1_S1 + 34);
            *(b + 252 * OS1_S1 + 82) =
                prefactor_y * *(b + 252 * OS1_S1 + 55) -
                p_over_q * *(b + 326 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 55);
            *(b + 252 * OS1_S1 + 83) =
                prefactor_z * *(b + 252 * OS1_S1 + 55) -
                p_over_q * *(b + 327 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 34);
            *(b + 253 * OS1_S1 + 56) =
                prefactor_x * *(b + 253 * OS1_S1 + 35) -
                p_over_q * *(b + 319 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 253 * OS1_S1 + 20);
            *(b + 253 * OS1_S1 + 57) =
                prefactor_y * *(b + 253 * OS1_S1 + 35) -
                p_over_q * *(b + 327 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 35);
            *(b + 253 * OS1_S1 + 58) =
                prefactor_z * *(b + 253 * OS1_S1 + 35) -
                p_over_q * *(b + 328 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 35);
            *(b + 253 * OS1_S1 + 59) =
                prefactor_y * *(b + 253 * OS1_S1 + 36) -
                p_over_q * *(b + 327 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 36) +
                one_over_two_q * *(b + 253 * OS1_S1 + 20);
            *(b + 253 * OS1_S1 + 60) =
                prefactor_y * *(b + 253 * OS1_S1 + 37) -
                p_over_q * *(b + 327 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 37);
            *(b + 253 * OS1_S1 + 61) =
                prefactor_z * *(b + 253 * OS1_S1 + 37) -
                p_over_q * *(b + 328 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 37) +
                one_over_two_q * *(b + 253 * OS1_S1 + 20);
            *(b + 253 * OS1_S1 + 62) =
                prefactor_y * *(b + 253 * OS1_S1 + 38) -
                p_over_q * *(b + 327 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 253 * OS1_S1 + 21);
            *(b + 253 * OS1_S1 + 63) =
                prefactor_z * *(b + 253 * OS1_S1 + 38) -
                p_over_q * *(b + 328 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 38);
            *(b + 253 * OS1_S1 + 64) =
                prefactor_y * *(b + 253 * OS1_S1 + 40) -
                p_over_q * *(b + 327 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 40);
            *(b + 253 * OS1_S1 + 65) =
                prefactor_x * *(b + 253 * OS1_S1 + 44) -
                p_over_q * *(b + 319 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 253 * OS1_S1 + 29);
            *(b + 253 * OS1_S1 + 66) =
                prefactor_x * *(b + 253 * OS1_S1 + 45) -
                p_over_q * *(b + 319 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 45) +
                one_over_two_q * *(b + 253 * OS1_S1 + 30);
            *(b + 253 * OS1_S1 + 67) =
                prefactor_z * *(b + 253 * OS1_S1 + 41) -
                p_over_q * *(b + 328 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 41);
            *(b + 253 * OS1_S1 + 68) =
                prefactor_y * *(b + 253 * OS1_S1 + 43) -
                p_over_q * *(b + 327 * OS1_S1 + 43) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 43) +
                one_over_two_q * *(b + 253 * OS1_S1 + 25);
            *(b + 253 * OS1_S1 + 69) =
                prefactor_y * *(b + 253 * OS1_S1 + 44) -
                p_over_q * *(b + 327 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 44);
            *(b + 253 * OS1_S1 + 70) =
                prefactor_x * *(b + 253 * OS1_S1 + 49) -
                p_over_q * *(b + 319 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 49) +
                one_over_two_q * *(b + 253 * OS1_S1 + 34);
            *(b + 253 * OS1_S1 + 71) =
                prefactor_x * *(b + 253 * OS1_S1 + 50) -
                p_over_q * *(b + 319 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 50);
            *(b + 253 * OS1_S1 + 72) =
                prefactor_x * *(b + 253 * OS1_S1 + 51) -
                p_over_q * *(b + 319 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 51);
            *(b + 253 * OS1_S1 + 73) =
                prefactor_x * *(b + 253 * OS1_S1 + 52) -
                p_over_q * *(b + 319 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 52);
            *(b + 253 * OS1_S1 + 74) =
                prefactor_x * *(b + 253 * OS1_S1 + 53) -
                p_over_q * *(b + 319 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 53);
            *(b + 253 * OS1_S1 + 75) =
                prefactor_y * *(b + 253 * OS1_S1 + 49) -
                p_over_q * *(b + 327 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 49);
            *(b + 253 * OS1_S1 + 76) =
                prefactor_x * *(b + 253 * OS1_S1 + 55) -
                p_over_q * *(b + 319 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 55);
            *(b + 253 * OS1_S1 + 77) =
                prefactor_y * *(b + 253 * OS1_S1 + 50) -
                p_over_q * *(b + 327 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 253 * OS1_S1 + 30);
            *(b + 253 * OS1_S1 + 78) =
                prefactor_z * *(b + 253 * OS1_S1 + 50) -
                p_over_q * *(b + 328 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 50);
            *(b + 253 * OS1_S1 + 79) =
                prefactor_z * *(b + 253 * OS1_S1 + 51) -
                p_over_q * *(b + 328 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 51) +
                one_over_two_q * *(b + 253 * OS1_S1 + 30);
            *(b + 253 * OS1_S1 + 80) =
                prefactor_y * *(b + 253 * OS1_S1 + 53) -
                p_over_q * *(b + 327 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 253 * OS1_S1 + 33);
            *(b + 253 * OS1_S1 + 81) =
                prefactor_y * *(b + 253 * OS1_S1 + 54) -
                p_over_q * *(b + 327 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 54) +
                one_over_two_q * *(b + 253 * OS1_S1 + 34);
            *(b + 253 * OS1_S1 + 82) =
                prefactor_y * *(b + 253 * OS1_S1 + 55) -
                p_over_q * *(b + 327 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 55);
            *(b + 253 * OS1_S1 + 83) =
                prefactor_z * *(b + 253 * OS1_S1 + 55) -
                p_over_q * *(b + 328 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 253 * OS1_S1 + 34);
            *(b + 254 * OS1_S1 + 56) =
                prefactor_x * *(b + 254 * OS1_S1 + 35) -
                p_over_q * *(b + 320 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 254 * OS1_S1 + 20);
            *(b + 254 * OS1_S1 + 57) =
                prefactor_y * *(b + 254 * OS1_S1 + 35) -
                p_over_q * *(b + 328 * OS1_S1 + 35) +
                one_over_two_q * *(b + 192 * OS1_S1 + 35);
            *(b + 254 * OS1_S1 + 58) =
                prefactor_z * *(b + 254 * OS1_S1 + 35) -
                p_over_q * *(b + 329 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 35);
            *(b + 254 * OS1_S1 + 59) =
                prefactor_y * *(b + 254 * OS1_S1 + 36) -
                p_over_q * *(b + 328 * OS1_S1 + 36) +
                one_over_two_q * *(b + 192 * OS1_S1 + 36) +
                one_over_two_q * *(b + 254 * OS1_S1 + 20);
            *(b + 254 * OS1_S1 + 60) =
                prefactor_y * *(b + 254 * OS1_S1 + 37) -
                p_over_q * *(b + 328 * OS1_S1 + 37) +
                one_over_two_q * *(b + 192 * OS1_S1 + 37);
            *(b + 254 * OS1_S1 + 61) =
                prefactor_z * *(b + 254 * OS1_S1 + 37) -
                p_over_q * *(b + 329 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 37) +
                one_over_two_q * *(b + 254 * OS1_S1 + 20);
            *(b + 254 * OS1_S1 + 62) =
                prefactor_y * *(b + 254 * OS1_S1 + 38) -
                p_over_q * *(b + 328 * OS1_S1 + 38) +
                one_over_two_q * *(b + 192 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 21);
            *(b + 254 * OS1_S1 + 63) =
                prefactor_z * *(b + 254 * OS1_S1 + 38) -
                p_over_q * *(b + 329 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 38);
            *(b + 254 * OS1_S1 + 64) =
                prefactor_y * *(b + 254 * OS1_S1 + 40) -
                p_over_q * *(b + 328 * OS1_S1 + 40) +
                one_over_two_q * *(b + 192 * OS1_S1 + 40);
            *(b + 254 * OS1_S1 + 65) =
                prefactor_x * *(b + 254 * OS1_S1 + 44) -
                p_over_q * *(b + 320 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 29);
            *(b + 254 * OS1_S1 + 66) =
                prefactor_x * *(b + 254 * OS1_S1 + 45) -
                p_over_q * *(b + 320 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 45) +
                one_over_two_q * *(b + 254 * OS1_S1 + 30);
            *(b + 254 * OS1_S1 + 67) =
                prefactor_z * *(b + 254 * OS1_S1 + 41) -
                p_over_q * *(b + 329 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 41);
            *(b + 254 * OS1_S1 + 68) =
                prefactor_y * *(b + 254 * OS1_S1 + 43) -
                p_over_q * *(b + 328 * OS1_S1 + 43) +
                one_over_two_q * *(b + 192 * OS1_S1 + 43) +
                one_over_two_q * *(b + 254 * OS1_S1 + 25);
            *(b + 254 * OS1_S1 + 69) =
                prefactor_y * *(b + 254 * OS1_S1 + 44) -
                p_over_q * *(b + 328 * OS1_S1 + 44) +
                one_over_two_q * *(b + 192 * OS1_S1 + 44);
            *(b + 254 * OS1_S1 + 70) =
                prefactor_x * *(b + 254 * OS1_S1 + 49) -
                p_over_q * *(b + 320 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 49) +
                one_over_two_q * *(b + 254 * OS1_S1 + 34);
            *(b + 254 * OS1_S1 + 71) =
                prefactor_x * *(b + 254 * OS1_S1 + 50) -
                p_over_q * *(b + 320 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 50);
            *(b + 254 * OS1_S1 + 72) =
                prefactor_x * *(b + 254 * OS1_S1 + 51) -
                p_over_q * *(b + 320 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 51);
            *(b + 254 * OS1_S1 + 73) =
                prefactor_x * *(b + 254 * OS1_S1 + 52) -
                p_over_q * *(b + 320 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 52);
            *(b + 254 * OS1_S1 + 74) =
                prefactor_x * *(b + 254 * OS1_S1 + 53) -
                p_over_q * *(b + 320 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 53);
            *(b + 254 * OS1_S1 + 75) =
                prefactor_y * *(b + 254 * OS1_S1 + 49) -
                p_over_q * *(b + 328 * OS1_S1 + 49) +
                one_over_two_q * *(b + 192 * OS1_S1 + 49);
            *(b + 254 * OS1_S1 + 76) =
                prefactor_x * *(b + 254 * OS1_S1 + 55) -
                p_over_q * *(b + 320 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 55);
            *(b + 254 * OS1_S1 + 77) =
                prefactor_y * *(b + 254 * OS1_S1 + 50) -
                p_over_q * *(b + 328 * OS1_S1 + 50) +
                one_over_two_q * *(b + 192 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 254 * OS1_S1 + 30);
            *(b + 254 * OS1_S1 + 78) =
                prefactor_z * *(b + 254 * OS1_S1 + 50) -
                p_over_q * *(b + 329 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 50);
            *(b + 254 * OS1_S1 + 79) =
                prefactor_z * *(b + 254 * OS1_S1 + 51) -
                p_over_q * *(b + 329 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 51) +
                one_over_two_q * *(b + 254 * OS1_S1 + 30);
            *(b + 254 * OS1_S1 + 80) =
                prefactor_y * *(b + 254 * OS1_S1 + 53) -
                p_over_q * *(b + 328 * OS1_S1 + 53) +
                one_over_two_q * *(b + 192 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 33);
            *(b + 254 * OS1_S1 + 81) =
                prefactor_y * *(b + 254 * OS1_S1 + 54) -
                p_over_q * *(b + 328 * OS1_S1 + 54) +
                one_over_two_q * *(b + 192 * OS1_S1 + 54) +
                one_over_two_q * *(b + 254 * OS1_S1 + 34);
            *(b + 254 * OS1_S1 + 82) =
                prefactor_y * *(b + 254 * OS1_S1 + 55) -
                p_over_q * *(b + 328 * OS1_S1 + 55) +
                one_over_two_q * *(b + 192 * OS1_S1 + 55);
            *(b + 254 * OS1_S1 + 83) =
                prefactor_z * *(b + 254 * OS1_S1 + 55) -
                p_over_q * *(b + 329 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 254 * OS1_S1 + 34);
            *(b + 255 * OS1_S1 + 56) =
                prefactor_x * *(b + 255 * OS1_S1 + 35) -
                p_over_q * *(b + 321 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 255 * OS1_S1 + 20);
            *(b + 255 * OS1_S1 + 57) = prefactor_y * *(b + 255 * OS1_S1 + 35) -
                                       p_over_q * *(b + 329 * OS1_S1 + 35);
            *(b + 255 * OS1_S1 + 58) =
                prefactor_z * *(b + 255 * OS1_S1 + 35) -
                p_over_q * *(b + 330 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 35);
            *(b + 255 * OS1_S1 + 59) =
                prefactor_y * *(b + 255 * OS1_S1 + 36) -
                p_over_q * *(b + 329 * OS1_S1 + 36) +
                one_over_two_q * *(b + 255 * OS1_S1 + 20);
            *(b + 255 * OS1_S1 + 60) = prefactor_y * *(b + 255 * OS1_S1 + 37) -
                                       p_over_q * *(b + 329 * OS1_S1 + 37);
            *(b + 255 * OS1_S1 + 61) =
                prefactor_z * *(b + 255 * OS1_S1 + 37) -
                p_over_q * *(b + 330 * OS1_S1 + 37) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 37) +
                one_over_two_q * *(b + 255 * OS1_S1 + 20);
            *(b + 255 * OS1_S1 + 62) =
                prefactor_y * *(b + 255 * OS1_S1 + 38) -
                p_over_q * *(b + 329 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 255 * OS1_S1 + 21);
            *(b + 255 * OS1_S1 + 63) =
                prefactor_z * *(b + 255 * OS1_S1 + 38) -
                p_over_q * *(b + 330 * OS1_S1 + 38) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 38);
            *(b + 255 * OS1_S1 + 64) = prefactor_y * *(b + 255 * OS1_S1 + 40) -
                                       p_over_q * *(b + 329 * OS1_S1 + 40);
            *(b + 255 * OS1_S1 + 65) =
                prefactor_x * *(b + 255 * OS1_S1 + 44) -
                p_over_q * *(b + 321 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 255 * OS1_S1 + 29);
            *(b + 255 * OS1_S1 + 66) =
                prefactor_x * *(b + 255 * OS1_S1 + 45) -
                p_over_q * *(b + 321 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 45) +
                one_over_two_q * *(b + 255 * OS1_S1 + 30);
            *(b + 255 * OS1_S1 + 67) =
                prefactor_z * *(b + 255 * OS1_S1 + 41) -
                p_over_q * *(b + 330 * OS1_S1 + 41) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 41);
            *(b + 255 * OS1_S1 + 68) =
                prefactor_y * *(b + 255 * OS1_S1 + 43) -
                p_over_q * *(b + 329 * OS1_S1 + 43) +
                one_over_two_q * *(b + 255 * OS1_S1 + 25);
            *(b + 255 * OS1_S1 + 69) = prefactor_y * *(b + 255 * OS1_S1 + 44) -
                                       p_over_q * *(b + 329 * OS1_S1 + 44);
            *(b + 255 * OS1_S1 + 70) =
                prefactor_x * *(b + 255 * OS1_S1 + 49) -
                p_over_q * *(b + 321 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 49) +
                one_over_two_q * *(b + 255 * OS1_S1 + 34);
            *(b + 255 * OS1_S1 + 71) =
                prefactor_x * *(b + 255 * OS1_S1 + 50) -
                p_over_q * *(b + 321 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 50);
            *(b + 255 * OS1_S1 + 72) =
                prefactor_x * *(b + 255 * OS1_S1 + 51) -
                p_over_q * *(b + 321 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 51);
            *(b + 255 * OS1_S1 + 73) =
                prefactor_x * *(b + 255 * OS1_S1 + 52) -
                p_over_q * *(b + 321 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 52);
            *(b + 255 * OS1_S1 + 74) =
                prefactor_x * *(b + 255 * OS1_S1 + 53) -
                p_over_q * *(b + 321 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 53);
            *(b + 255 * OS1_S1 + 75) = prefactor_y * *(b + 255 * OS1_S1 + 49) -
                                       p_over_q * *(b + 329 * OS1_S1 + 49);
            *(b + 255 * OS1_S1 + 76) =
                prefactor_x * *(b + 255 * OS1_S1 + 55) -
                p_over_q * *(b + 321 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 55);
            *(b + 255 * OS1_S1 + 77) =
                prefactor_y * *(b + 255 * OS1_S1 + 50) -
                p_over_q * *(b + 329 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 255 * OS1_S1 + 30);
            *(b + 255 * OS1_S1 + 78) =
                prefactor_z * *(b + 255 * OS1_S1 + 50) -
                p_over_q * *(b + 330 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 50);
            *(b + 255 * OS1_S1 + 79) =
                prefactor_z * *(b + 255 * OS1_S1 + 51) -
                p_over_q * *(b + 330 * OS1_S1 + 51) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 51) +
                one_over_two_q * *(b + 255 * OS1_S1 + 30);
            *(b + 255 * OS1_S1 + 80) =
                prefactor_y * *(b + 255 * OS1_S1 + 53) -
                p_over_q * *(b + 329 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 255 * OS1_S1 + 33);
            *(b + 255 * OS1_S1 + 81) =
                prefactor_y * *(b + 255 * OS1_S1 + 54) -
                p_over_q * *(b + 329 * OS1_S1 + 54) +
                one_over_two_q * *(b + 255 * OS1_S1 + 34);
            *(b + 255 * OS1_S1 + 82) = prefactor_y * *(b + 255 * OS1_S1 + 55) -
                                       p_over_q * *(b + 329 * OS1_S1 + 55);
            *(b + 255 * OS1_S1 + 83) =
                prefactor_z * *(b + 255 * OS1_S1 + 55) -
                p_over_q * *(b + 330 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 255 * OS1_S1 + 34);
            *(b + 256 * OS1_S1 + 56) =
                prefactor_x * *(b + 256 * OS1_S1 + 35) -
                p_over_q * *(b + 322 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 256 * OS1_S1 + 20);
            *(b + 256 * OS1_S1 + 57) =
                prefactor_y * *(b + 256 * OS1_S1 + 35) -
                p_over_q * *(b + 331 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 35);
            *(b + 256 * OS1_S1 + 58) = prefactor_z * *(b + 256 * OS1_S1 + 35) -
                                       p_over_q * *(b + 332 * OS1_S1 + 35);
            *(b + 256 * OS1_S1 + 59) =
                prefactor_y * *(b + 256 * OS1_S1 + 36) -
                p_over_q * *(b + 331 * OS1_S1 + 36) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 36) +
                one_over_two_q * *(b + 256 * OS1_S1 + 20);
            *(b + 256 * OS1_S1 + 60) = prefactor_z * *(b + 256 * OS1_S1 + 36) -
                                       p_over_q * *(b + 332 * OS1_S1 + 36);
            *(b + 256 * OS1_S1 + 61) =
                prefactor_z * *(b + 256 * OS1_S1 + 37) -
                p_over_q * *(b + 332 * OS1_S1 + 37) +
                one_over_two_q * *(b + 256 * OS1_S1 + 20);
            *(b + 256 * OS1_S1 + 62) =
                prefactor_x * *(b + 256 * OS1_S1 + 41) -
                p_over_q * *(b + 322 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 256 * OS1_S1 + 26);
            *(b + 256 * OS1_S1 + 63) = prefactor_z * *(b + 256 * OS1_S1 + 38) -
                                       p_over_q * *(b + 332 * OS1_S1 + 38);
            *(b + 256 * OS1_S1 + 64) =
                prefactor_y * *(b + 256 * OS1_S1 + 40) -
                p_over_q * *(b + 331 * OS1_S1 + 40) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 40);
            *(b + 256 * OS1_S1 + 65) =
                prefactor_z * *(b + 256 * OS1_S1 + 40) -
                p_over_q * *(b + 332 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 256 * OS1_S1 + 22);
            *(b + 256 * OS1_S1 + 66) =
                prefactor_x * *(b + 256 * OS1_S1 + 45) -
                p_over_q * *(b + 322 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 45) +
                one_over_two_q * *(b + 256 * OS1_S1 + 30);
            *(b + 256 * OS1_S1 + 67) = prefactor_z * *(b + 256 * OS1_S1 + 41) -
                                       p_over_q * *(b + 332 * OS1_S1 + 41);
            *(b + 256 * OS1_S1 + 68) =
                prefactor_z * *(b + 256 * OS1_S1 + 42) -
                p_over_q * *(b + 332 * OS1_S1 + 42) +
                one_over_two_q * *(b + 256 * OS1_S1 + 23);
            *(b + 256 * OS1_S1 + 69) =
                prefactor_y * *(b + 256 * OS1_S1 + 44) -
                p_over_q * *(b + 331 * OS1_S1 + 44) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 44);
            *(b + 256 * OS1_S1 + 70) =
                prefactor_x * *(b + 256 * OS1_S1 + 49) -
                p_over_q * *(b + 322 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 49) +
                one_over_two_q * *(b + 256 * OS1_S1 + 34);
            *(b + 256 * OS1_S1 + 71) =
                prefactor_x * *(b + 256 * OS1_S1 + 50) -
                p_over_q * *(b + 322 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 50);
            *(b + 256 * OS1_S1 + 72) = prefactor_z * *(b + 256 * OS1_S1 + 45) -
                                       p_over_q * *(b + 332 * OS1_S1 + 45);
            *(b + 256 * OS1_S1 + 73) =
                prefactor_x * *(b + 256 * OS1_S1 + 52) -
                p_over_q * *(b + 322 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 52);
            *(b + 256 * OS1_S1 + 74) =
                prefactor_x * *(b + 256 * OS1_S1 + 53) -
                p_over_q * *(b + 322 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 53);
            *(b + 256 * OS1_S1 + 75) =
                prefactor_x * *(b + 256 * OS1_S1 + 54) -
                p_over_q * *(b + 322 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 54);
            *(b + 256 * OS1_S1 + 76) =
                prefactor_x * *(b + 256 * OS1_S1 + 55) -
                p_over_q * *(b + 322 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 55);
            *(b + 256 * OS1_S1 + 77) =
                prefactor_y * *(b + 256 * OS1_S1 + 50) -
                p_over_q * *(b + 331 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 256 * OS1_S1 + 30);
            *(b + 256 * OS1_S1 + 78) = prefactor_z * *(b + 256 * OS1_S1 + 50) -
                                       p_over_q * *(b + 332 * OS1_S1 + 50);
            *(b + 256 * OS1_S1 + 79) =
                prefactor_z * *(b + 256 * OS1_S1 + 51) -
                p_over_q * *(b + 332 * OS1_S1 + 51) +
                one_over_two_q * *(b + 256 * OS1_S1 + 30);
            *(b + 256 * OS1_S1 + 80) =
                prefactor_z * *(b + 256 * OS1_S1 + 52) -
                p_over_q * *(b + 332 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 256 * OS1_S1 + 31);
            *(b + 256 * OS1_S1 + 81) =
                prefactor_y * *(b + 256 * OS1_S1 + 54) -
                p_over_q * *(b + 331 * OS1_S1 + 54) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 54) +
                one_over_two_q * *(b + 256 * OS1_S1 + 34);
            *(b + 256 * OS1_S1 + 82) =
                prefactor_y * *(b + 256 * OS1_S1 + 55) -
                p_over_q * *(b + 331 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 55);
            *(b + 256 * OS1_S1 + 83) =
                prefactor_z * *(b + 256 * OS1_S1 + 55) -
                p_over_q * *(b + 332 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 256 * OS1_S1 + 34);
            *(b + 257 * OS1_S1 + 56) =
                prefactor_x * *(b + 257 * OS1_S1 + 35) -
                p_over_q * *(b + 323 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 257 * OS1_S1 + 20);
            *(b + 257 * OS1_S1 + 57) =
                prefactor_y * *(b + 257 * OS1_S1 + 35) -
                p_over_q * *(b + 332 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 35);
            *(b + 257 * OS1_S1 + 58) =
                prefactor_z * *(b + 257 * OS1_S1 + 35) -
                p_over_q * *(b + 333 * OS1_S1 + 35) +
                one_over_two_q * *(b + 193 * OS1_S1 + 35);
            *(b + 257 * OS1_S1 + 59) =
                prefactor_y * *(b + 257 * OS1_S1 + 36) -
                p_over_q * *(b + 332 * OS1_S1 + 36) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 36) +
                one_over_two_q * *(b + 257 * OS1_S1 + 20);
            *(b + 257 * OS1_S1 + 60) =
                prefactor_z * *(b + 257 * OS1_S1 + 36) -
                p_over_q * *(b + 333 * OS1_S1 + 36) +
                one_over_two_q * *(b + 193 * OS1_S1 + 36);
            *(b + 257 * OS1_S1 + 61) =
                prefactor_z * *(b + 257 * OS1_S1 + 37) -
                p_over_q * *(b + 333 * OS1_S1 + 37) +
                one_over_two_q * *(b + 193 * OS1_S1 + 37) +
                one_over_two_q * *(b + 257 * OS1_S1 + 20);
            *(b + 257 * OS1_S1 + 62) =
                prefactor_x * *(b + 257 * OS1_S1 + 41) -
                p_over_q * *(b + 323 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 26);
            *(b + 257 * OS1_S1 + 63) =
                prefactor_z * *(b + 257 * OS1_S1 + 38) -
                p_over_q * *(b + 333 * OS1_S1 + 38) +
                one_over_two_q * *(b + 193 * OS1_S1 + 38);
            *(b + 257 * OS1_S1 + 64) =
                prefactor_y * *(b + 257 * OS1_S1 + 40) -
                p_over_q * *(b + 332 * OS1_S1 + 40) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 40);
            *(b + 257 * OS1_S1 + 65) =
                prefactor_z * *(b + 257 * OS1_S1 + 40) -
                p_over_q * *(b + 333 * OS1_S1 + 40) +
                one_over_two_q * *(b + 193 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 22);
            *(b + 257 * OS1_S1 + 66) =
                prefactor_x * *(b + 257 * OS1_S1 + 45) -
                p_over_q * *(b + 323 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 45) +
                one_over_two_q * *(b + 257 * OS1_S1 + 30);
            *(b + 257 * OS1_S1 + 67) =
                prefactor_z * *(b + 257 * OS1_S1 + 41) -
                p_over_q * *(b + 333 * OS1_S1 + 41) +
                one_over_two_q * *(b + 193 * OS1_S1 + 41);
            *(b + 257 * OS1_S1 + 68) =
                prefactor_z * *(b + 257 * OS1_S1 + 42) -
                p_over_q * *(b + 333 * OS1_S1 + 42) +
                one_over_two_q * *(b + 193 * OS1_S1 + 42) +
                one_over_two_q * *(b + 257 * OS1_S1 + 23);
            *(b + 257 * OS1_S1 + 69) =
                prefactor_y * *(b + 257 * OS1_S1 + 44) -
                p_over_q * *(b + 332 * OS1_S1 + 44) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 44);
            *(b + 257 * OS1_S1 + 70) =
                prefactor_x * *(b + 257 * OS1_S1 + 49) -
                p_over_q * *(b + 323 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 49) +
                one_over_two_q * *(b + 257 * OS1_S1 + 34);
            *(b + 257 * OS1_S1 + 71) =
                prefactor_x * *(b + 257 * OS1_S1 + 50) -
                p_over_q * *(b + 323 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 50);
            *(b + 257 * OS1_S1 + 72) =
                prefactor_z * *(b + 257 * OS1_S1 + 45) -
                p_over_q * *(b + 333 * OS1_S1 + 45) +
                one_over_two_q * *(b + 193 * OS1_S1 + 45);
            *(b + 257 * OS1_S1 + 73) =
                prefactor_x * *(b + 257 * OS1_S1 + 52) -
                p_over_q * *(b + 323 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 52);
            *(b + 257 * OS1_S1 + 74) =
                prefactor_x * *(b + 257 * OS1_S1 + 53) -
                p_over_q * *(b + 323 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 53);
            *(b + 257 * OS1_S1 + 75) =
                prefactor_x * *(b + 257 * OS1_S1 + 54) -
                p_over_q * *(b + 323 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 54);
            *(b + 257 * OS1_S1 + 76) =
                prefactor_x * *(b + 257 * OS1_S1 + 55) -
                p_over_q * *(b + 323 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 55);
            *(b + 257 * OS1_S1 + 77) =
                prefactor_y * *(b + 257 * OS1_S1 + 50) -
                p_over_q * *(b + 332 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 257 * OS1_S1 + 30);
            *(b + 257 * OS1_S1 + 78) =
                prefactor_z * *(b + 257 * OS1_S1 + 50) -
                p_over_q * *(b + 333 * OS1_S1 + 50) +
                one_over_two_q * *(b + 193 * OS1_S1 + 50);
            *(b + 257 * OS1_S1 + 79) =
                prefactor_z * *(b + 257 * OS1_S1 + 51) -
                p_over_q * *(b + 333 * OS1_S1 + 51) +
                one_over_two_q * *(b + 193 * OS1_S1 + 51) +
                one_over_two_q * *(b + 257 * OS1_S1 + 30);
            *(b + 257 * OS1_S1 + 80) =
                prefactor_z * *(b + 257 * OS1_S1 + 52) -
                p_over_q * *(b + 333 * OS1_S1 + 52) +
                one_over_two_q * *(b + 193 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 31);
            *(b + 257 * OS1_S1 + 81) =
                prefactor_y * *(b + 257 * OS1_S1 + 54) -
                p_over_q * *(b + 332 * OS1_S1 + 54) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 54) +
                one_over_two_q * *(b + 257 * OS1_S1 + 34);
            *(b + 257 * OS1_S1 + 82) =
                prefactor_y * *(b + 257 * OS1_S1 + 55) -
                p_over_q * *(b + 332 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 55);
            *(b + 257 * OS1_S1 + 83) =
                prefactor_z * *(b + 257 * OS1_S1 + 55) -
                p_over_q * *(b + 333 * OS1_S1 + 55) +
                one_over_two_q * *(b + 193 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 257 * OS1_S1 + 34);
            *(b + 258 * OS1_S1 + 56) =
                prefactor_x * *(b + 258 * OS1_S1 + 35) -
                p_over_q * *(b + 324 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 258 * OS1_S1 + 20);
            *(b + 258 * OS1_S1 + 57) =
                prefactor_y * *(b + 258 * OS1_S1 + 35) -
                p_over_q * *(b + 333 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 35);
            *(b + 258 * OS1_S1 + 58) =
                prefactor_z * *(b + 258 * OS1_S1 + 35) -
                p_over_q * *(b + 334 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 35);
            *(b + 258 * OS1_S1 + 59) =
                prefactor_y * *(b + 258 * OS1_S1 + 36) -
                p_over_q * *(b + 333 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 36) +
                one_over_two_q * *(b + 258 * OS1_S1 + 20);
            *(b + 258 * OS1_S1 + 60) =
                prefactor_z * *(b + 258 * OS1_S1 + 36) -
                p_over_q * *(b + 334 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 36);
            *(b + 258 * OS1_S1 + 61) =
                prefactor_z * *(b + 258 * OS1_S1 + 37) -
                p_over_q * *(b + 334 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 37) +
                one_over_two_q * *(b + 258 * OS1_S1 + 20);
            *(b + 258 * OS1_S1 + 62) =
                prefactor_x * *(b + 258 * OS1_S1 + 41) -
                p_over_q * *(b + 324 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 258 * OS1_S1 + 26);
            *(b + 258 * OS1_S1 + 63) =
                prefactor_z * *(b + 258 * OS1_S1 + 38) -
                p_over_q * *(b + 334 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 38);
            *(b + 258 * OS1_S1 + 64) =
                prefactor_y * *(b + 258 * OS1_S1 + 40) -
                p_over_q * *(b + 333 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 40);
            *(b + 258 * OS1_S1 + 65) =
                prefactor_z * *(b + 258 * OS1_S1 + 40) -
                p_over_q * *(b + 334 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 258 * OS1_S1 + 22);
            *(b + 258 * OS1_S1 + 66) =
                prefactor_x * *(b + 258 * OS1_S1 + 45) -
                p_over_q * *(b + 324 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 45) +
                one_over_two_q * *(b + 258 * OS1_S1 + 30);
            *(b + 258 * OS1_S1 + 67) =
                prefactor_z * *(b + 258 * OS1_S1 + 41) -
                p_over_q * *(b + 334 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 41);
            *(b + 258 * OS1_S1 + 68) =
                prefactor_z * *(b + 258 * OS1_S1 + 42) -
                p_over_q * *(b + 334 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 42) +
                one_over_two_q * *(b + 258 * OS1_S1 + 23);
            *(b + 258 * OS1_S1 + 69) =
                prefactor_y * *(b + 258 * OS1_S1 + 44) -
                p_over_q * *(b + 333 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 44);
            *(b + 258 * OS1_S1 + 70) =
                prefactor_x * *(b + 258 * OS1_S1 + 49) -
                p_over_q * *(b + 324 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 49) +
                one_over_two_q * *(b + 258 * OS1_S1 + 34);
            *(b + 258 * OS1_S1 + 71) =
                prefactor_x * *(b + 258 * OS1_S1 + 50) -
                p_over_q * *(b + 324 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 50);
            *(b + 258 * OS1_S1 + 72) =
                prefactor_z * *(b + 258 * OS1_S1 + 45) -
                p_over_q * *(b + 334 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 45);
            *(b + 258 * OS1_S1 + 73) =
                prefactor_x * *(b + 258 * OS1_S1 + 52) -
                p_over_q * *(b + 324 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 52);
            *(b + 258 * OS1_S1 + 74) =
                prefactor_x * *(b + 258 * OS1_S1 + 53) -
                p_over_q * *(b + 324 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 53);
            *(b + 258 * OS1_S1 + 75) =
                prefactor_x * *(b + 258 * OS1_S1 + 54) -
                p_over_q * *(b + 324 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 54);
            *(b + 258 * OS1_S1 + 76) =
                prefactor_x * *(b + 258 * OS1_S1 + 55) -
                p_over_q * *(b + 324 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 55);
            *(b + 258 * OS1_S1 + 77) =
                prefactor_y * *(b + 258 * OS1_S1 + 50) -
                p_over_q * *(b + 333 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 258 * OS1_S1 + 30);
            *(b + 258 * OS1_S1 + 78) =
                prefactor_z * *(b + 258 * OS1_S1 + 50) -
                p_over_q * *(b + 334 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 50);
            *(b + 258 * OS1_S1 + 79) =
                prefactor_z * *(b + 258 * OS1_S1 + 51) -
                p_over_q * *(b + 334 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 51) +
                one_over_two_q * *(b + 258 * OS1_S1 + 30);
            *(b + 258 * OS1_S1 + 80) =
                prefactor_z * *(b + 258 * OS1_S1 + 52) -
                p_over_q * *(b + 334 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 258 * OS1_S1 + 31);
            *(b + 258 * OS1_S1 + 81) =
                prefactor_y * *(b + 258 * OS1_S1 + 54) -
                p_over_q * *(b + 333 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 54) +
                one_over_two_q * *(b + 258 * OS1_S1 + 34);
            *(b + 258 * OS1_S1 + 82) =
                prefactor_y * *(b + 258 * OS1_S1 + 55) -
                p_over_q * *(b + 333 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 55);
            *(b + 258 * OS1_S1 + 83) =
                prefactor_z * *(b + 258 * OS1_S1 + 55) -
                p_over_q * *(b + 334 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 258 * OS1_S1 + 34);
            *(b + 259 * OS1_S1 + 56) =
                prefactor_x * *(b + 259 * OS1_S1 + 35) -
                p_over_q * *(b + 325 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 259 * OS1_S1 + 20);
            *(b + 259 * OS1_S1 + 57) =
                prefactor_y * *(b + 259 * OS1_S1 + 35) -
                p_over_q * *(b + 334 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 35);
            *(b + 259 * OS1_S1 + 58) =
                prefactor_z * *(b + 259 * OS1_S1 + 35) -
                p_over_q * *(b + 335 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 35);
            *(b + 259 * OS1_S1 + 59) =
                prefactor_y * *(b + 259 * OS1_S1 + 36) -
                p_over_q * *(b + 334 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 36) +
                one_over_two_q * *(b + 259 * OS1_S1 + 20);
            *(b + 259 * OS1_S1 + 60) =
                prefactor_z * *(b + 259 * OS1_S1 + 36) -
                p_over_q * *(b + 335 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 36);
            *(b + 259 * OS1_S1 + 61) =
                prefactor_z * *(b + 259 * OS1_S1 + 37) -
                p_over_q * *(b + 335 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 37) +
                one_over_two_q * *(b + 259 * OS1_S1 + 20);
            *(b + 259 * OS1_S1 + 62) =
                prefactor_x * *(b + 259 * OS1_S1 + 41) -
                p_over_q * *(b + 325 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 259 * OS1_S1 + 26);
            *(b + 259 * OS1_S1 + 63) =
                prefactor_z * *(b + 259 * OS1_S1 + 38) -
                p_over_q * *(b + 335 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 38);
            *(b + 259 * OS1_S1 + 64) =
                prefactor_y * *(b + 259 * OS1_S1 + 40) -
                p_over_q * *(b + 334 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 40);
            *(b + 259 * OS1_S1 + 65) =
                prefactor_x * *(b + 259 * OS1_S1 + 44) -
                p_over_q * *(b + 325 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 259 * OS1_S1 + 29);
            *(b + 259 * OS1_S1 + 66) =
                prefactor_x * *(b + 259 * OS1_S1 + 45) -
                p_over_q * *(b + 325 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 45) +
                one_over_two_q * *(b + 259 * OS1_S1 + 30);
            *(b + 259 * OS1_S1 + 67) =
                prefactor_z * *(b + 259 * OS1_S1 + 41) -
                p_over_q * *(b + 335 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 41);
            *(b + 259 * OS1_S1 + 68) =
                prefactor_x * *(b + 259 * OS1_S1 + 47) -
                p_over_q * *(b + 325 * OS1_S1 + 47) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 47) +
                one_over_two_q * *(b + 259 * OS1_S1 + 32);
            *(b + 259 * OS1_S1 + 69) =
                prefactor_y * *(b + 259 * OS1_S1 + 44) -
                p_over_q * *(b + 334 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 44);
            *(b + 259 * OS1_S1 + 70) =
                prefactor_x * *(b + 259 * OS1_S1 + 49) -
                p_over_q * *(b + 325 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 49) +
                one_over_two_q * *(b + 259 * OS1_S1 + 34);
            *(b + 259 * OS1_S1 + 71) =
                prefactor_x * *(b + 259 * OS1_S1 + 50) -
                p_over_q * *(b + 325 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 50);
            *(b + 259 * OS1_S1 + 72) =
                prefactor_x * *(b + 259 * OS1_S1 + 51) -
                p_over_q * *(b + 325 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 51);
            *(b + 259 * OS1_S1 + 73) =
                prefactor_x * *(b + 259 * OS1_S1 + 52) -
                p_over_q * *(b + 325 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 52);
            *(b + 259 * OS1_S1 + 74) =
                prefactor_x * *(b + 259 * OS1_S1 + 53) -
                p_over_q * *(b + 325 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 53);
            *(b + 259 * OS1_S1 + 75) =
                prefactor_x * *(b + 259 * OS1_S1 + 54) -
                p_over_q * *(b + 325 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 54);
            *(b + 259 * OS1_S1 + 76) =
                prefactor_x * *(b + 259 * OS1_S1 + 55) -
                p_over_q * *(b + 325 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 55);
            *(b + 259 * OS1_S1 + 77) =
                prefactor_y * *(b + 259 * OS1_S1 + 50) -
                p_over_q * *(b + 334 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 259 * OS1_S1 + 30);
            *(b + 259 * OS1_S1 + 78) =
                prefactor_z * *(b + 259 * OS1_S1 + 50) -
                p_over_q * *(b + 335 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 50);
            *(b + 259 * OS1_S1 + 79) =
                prefactor_z * *(b + 259 * OS1_S1 + 51) -
                p_over_q * *(b + 335 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 51) +
                one_over_two_q * *(b + 259 * OS1_S1 + 30);
            *(b + 259 * OS1_S1 + 80) =
                prefactor_z * *(b + 259 * OS1_S1 + 52) -
                p_over_q * *(b + 335 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 259 * OS1_S1 + 31);
            *(b + 259 * OS1_S1 + 81) =
                prefactor_y * *(b + 259 * OS1_S1 + 54) -
                p_over_q * *(b + 334 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 54) +
                one_over_two_q * *(b + 259 * OS1_S1 + 34);
            *(b + 259 * OS1_S1 + 82) =
                prefactor_y * *(b + 259 * OS1_S1 + 55) -
                p_over_q * *(b + 334 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 55);
            *(b + 259 * OS1_S1 + 83) =
                prefactor_z * *(b + 259 * OS1_S1 + 55) -
                p_over_q * *(b + 335 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 259 * OS1_S1 + 34);
            *(b + 260 * OS1_S1 + 56) =
                prefactor_x * *(b + 260 * OS1_S1 + 35) -
                p_over_q * *(b + 326 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 20);
            *(b + 260 * OS1_S1 + 57) =
                prefactor_y * *(b + 260 * OS1_S1 + 35) -
                p_over_q * *(b + 335 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 35);
            *(b + 260 * OS1_S1 + 58) =
                prefactor_z * *(b + 260 * OS1_S1 + 35) -
                p_over_q * *(b + 336 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 35);
            *(b + 260 * OS1_S1 + 59) =
                prefactor_y * *(b + 260 * OS1_S1 + 36) -
                p_over_q * *(b + 335 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 36) +
                one_over_two_q * *(b + 260 * OS1_S1 + 20);
            *(b + 260 * OS1_S1 + 60) =
                prefactor_z * *(b + 260 * OS1_S1 + 36) -
                p_over_q * *(b + 336 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 36);
            *(b + 260 * OS1_S1 + 61) =
                prefactor_z * *(b + 260 * OS1_S1 + 37) -
                p_over_q * *(b + 336 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 37) +
                one_over_two_q * *(b + 260 * OS1_S1 + 20);
            *(b + 260 * OS1_S1 + 62) =
                prefactor_x * *(b + 260 * OS1_S1 + 41) -
                p_over_q * *(b + 326 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 260 * OS1_S1 + 26);
            *(b + 260 * OS1_S1 + 63) =
                prefactor_z * *(b + 260 * OS1_S1 + 38) -
                p_over_q * *(b + 336 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 38);
            *(b + 260 * OS1_S1 + 64) =
                prefactor_y * *(b + 260 * OS1_S1 + 40) -
                p_over_q * *(b + 335 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 40);
            *(b + 260 * OS1_S1 + 65) =
                prefactor_x * *(b + 260 * OS1_S1 + 44) -
                p_over_q * *(b + 326 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 260 * OS1_S1 + 29);
            *(b + 260 * OS1_S1 + 66) =
                prefactor_x * *(b + 260 * OS1_S1 + 45) -
                p_over_q * *(b + 326 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 45) +
                one_over_two_q * *(b + 260 * OS1_S1 + 30);
            *(b + 260 * OS1_S1 + 67) =
                prefactor_z * *(b + 260 * OS1_S1 + 41) -
                p_over_q * *(b + 336 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 41);
            *(b + 260 * OS1_S1 + 68) =
                prefactor_x * *(b + 260 * OS1_S1 + 47) -
                p_over_q * *(b + 326 * OS1_S1 + 47) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 47) +
                one_over_two_q * *(b + 260 * OS1_S1 + 32);
            *(b + 260 * OS1_S1 + 69) =
                prefactor_y * *(b + 260 * OS1_S1 + 44) -
                p_over_q * *(b + 335 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 44);
            *(b + 260 * OS1_S1 + 70) =
                prefactor_x * *(b + 260 * OS1_S1 + 49) -
                p_over_q * *(b + 326 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 49) +
                one_over_two_q * *(b + 260 * OS1_S1 + 34);
            *(b + 260 * OS1_S1 + 71) =
                prefactor_x * *(b + 260 * OS1_S1 + 50) -
                p_over_q * *(b + 326 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 50);
            *(b + 260 * OS1_S1 + 72) =
                prefactor_x * *(b + 260 * OS1_S1 + 51) -
                p_over_q * *(b + 326 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 51);
            *(b + 260 * OS1_S1 + 73) =
                prefactor_x * *(b + 260 * OS1_S1 + 52) -
                p_over_q * *(b + 326 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 52);
            *(b + 260 * OS1_S1 + 74) =
                prefactor_x * *(b + 260 * OS1_S1 + 53) -
                p_over_q * *(b + 326 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 53);
            *(b + 260 * OS1_S1 + 75) =
                prefactor_x * *(b + 260 * OS1_S1 + 54) -
                p_over_q * *(b + 326 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 54);
            *(b + 260 * OS1_S1 + 76) =
                prefactor_x * *(b + 260 * OS1_S1 + 55) -
                p_over_q * *(b + 326 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 55);
            *(b + 260 * OS1_S1 + 77) =
                prefactor_y * *(b + 260 * OS1_S1 + 50) -
                p_over_q * *(b + 335 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 30);
            *(b + 260 * OS1_S1 + 78) =
                prefactor_z * *(b + 260 * OS1_S1 + 50) -
                p_over_q * *(b + 336 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 50);
            *(b + 260 * OS1_S1 + 79) =
                prefactor_z * *(b + 260 * OS1_S1 + 51) -
                p_over_q * *(b + 336 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 51) +
                one_over_two_q * *(b + 260 * OS1_S1 + 30);
            *(b + 260 * OS1_S1 + 80) =
                prefactor_z * *(b + 260 * OS1_S1 + 52) -
                p_over_q * *(b + 336 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 260 * OS1_S1 + 31);
            *(b + 260 * OS1_S1 + 81) =
                prefactor_y * *(b + 260 * OS1_S1 + 54) -
                p_over_q * *(b + 335 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 54) +
                one_over_two_q * *(b + 260 * OS1_S1 + 34);
            *(b + 260 * OS1_S1 + 82) =
                prefactor_y * *(b + 260 * OS1_S1 + 55) -
                p_over_q * *(b + 335 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 55);
            *(b + 260 * OS1_S1 + 83) =
                prefactor_z * *(b + 260 * OS1_S1 + 55) -
                p_over_q * *(b + 336 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 34);
            *(b + 261 * OS1_S1 + 56) =
                prefactor_x * *(b + 261 * OS1_S1 + 35) -
                p_over_q * *(b + 327 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 261 * OS1_S1 + 20);
            *(b + 261 * OS1_S1 + 57) =
                prefactor_y * *(b + 261 * OS1_S1 + 35) -
                p_over_q * *(b + 336 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 35);
            *(b + 261 * OS1_S1 + 58) =
                prefactor_z * *(b + 261 * OS1_S1 + 35) -
                p_over_q * *(b + 337 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 35);
            *(b + 261 * OS1_S1 + 59) =
                prefactor_y * *(b + 261 * OS1_S1 + 36) -
                p_over_q * *(b + 336 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 36) +
                one_over_two_q * *(b + 261 * OS1_S1 + 20);
            *(b + 261 * OS1_S1 + 60) =
                prefactor_y * *(b + 261 * OS1_S1 + 37) -
                p_over_q * *(b + 336 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 37);
            *(b + 261 * OS1_S1 + 61) =
                prefactor_z * *(b + 261 * OS1_S1 + 37) -
                p_over_q * *(b + 337 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 37) +
                one_over_two_q * *(b + 261 * OS1_S1 + 20);
            *(b + 261 * OS1_S1 + 62) =
                prefactor_x * *(b + 261 * OS1_S1 + 41) -
                p_over_q * *(b + 327 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 261 * OS1_S1 + 26);
            *(b + 261 * OS1_S1 + 63) =
                prefactor_z * *(b + 261 * OS1_S1 + 38) -
                p_over_q * *(b + 337 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 38);
            *(b + 261 * OS1_S1 + 64) =
                prefactor_y * *(b + 261 * OS1_S1 + 40) -
                p_over_q * *(b + 336 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 40);
            *(b + 261 * OS1_S1 + 65) =
                prefactor_x * *(b + 261 * OS1_S1 + 44) -
                p_over_q * *(b + 327 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 261 * OS1_S1 + 29);
            *(b + 261 * OS1_S1 + 66) =
                prefactor_x * *(b + 261 * OS1_S1 + 45) -
                p_over_q * *(b + 327 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 45) +
                one_over_two_q * *(b + 261 * OS1_S1 + 30);
            *(b + 261 * OS1_S1 + 67) =
                prefactor_z * *(b + 261 * OS1_S1 + 41) -
                p_over_q * *(b + 337 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 41);
            *(b + 261 * OS1_S1 + 68) =
                prefactor_x * *(b + 261 * OS1_S1 + 47) -
                p_over_q * *(b + 327 * OS1_S1 + 47) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 47) +
                one_over_two_q * *(b + 261 * OS1_S1 + 32);
            *(b + 261 * OS1_S1 + 69) =
                prefactor_y * *(b + 261 * OS1_S1 + 44) -
                p_over_q * *(b + 336 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 44);
            *(b + 261 * OS1_S1 + 70) =
                prefactor_x * *(b + 261 * OS1_S1 + 49) -
                p_over_q * *(b + 327 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 49) +
                one_over_two_q * *(b + 261 * OS1_S1 + 34);
            *(b + 261 * OS1_S1 + 71) =
                prefactor_x * *(b + 261 * OS1_S1 + 50) -
                p_over_q * *(b + 327 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 50);
            *(b + 261 * OS1_S1 + 72) =
                prefactor_x * *(b + 261 * OS1_S1 + 51) -
                p_over_q * *(b + 327 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 51);
            *(b + 261 * OS1_S1 + 73) =
                prefactor_x * *(b + 261 * OS1_S1 + 52) -
                p_over_q * *(b + 327 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 52);
            *(b + 261 * OS1_S1 + 74) =
                prefactor_x * *(b + 261 * OS1_S1 + 53) -
                p_over_q * *(b + 327 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 53);
            *(b + 261 * OS1_S1 + 75) =
                prefactor_x * *(b + 261 * OS1_S1 + 54) -
                p_over_q * *(b + 327 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 54);
            *(b + 261 * OS1_S1 + 76) =
                prefactor_x * *(b + 261 * OS1_S1 + 55) -
                p_over_q * *(b + 327 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 55);
            *(b + 261 * OS1_S1 + 77) =
                prefactor_y * *(b + 261 * OS1_S1 + 50) -
                p_over_q * *(b + 336 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 261 * OS1_S1 + 30);
            *(b + 261 * OS1_S1 + 78) =
                prefactor_z * *(b + 261 * OS1_S1 + 50) -
                p_over_q * *(b + 337 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 50);
            *(b + 261 * OS1_S1 + 79) =
                prefactor_z * *(b + 261 * OS1_S1 + 51) -
                p_over_q * *(b + 337 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 51) +
                one_over_two_q * *(b + 261 * OS1_S1 + 30);
            *(b + 261 * OS1_S1 + 80) =
                prefactor_y * *(b + 261 * OS1_S1 + 53) -
                p_over_q * *(b + 336 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 261 * OS1_S1 + 33);
            *(b + 261 * OS1_S1 + 81) =
                prefactor_y * *(b + 261 * OS1_S1 + 54) -
                p_over_q * *(b + 336 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 54) +
                one_over_two_q * *(b + 261 * OS1_S1 + 34);
            *(b + 261 * OS1_S1 + 82) =
                prefactor_y * *(b + 261 * OS1_S1 + 55) -
                p_over_q * *(b + 336 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 55);
            *(b + 261 * OS1_S1 + 83) =
                prefactor_z * *(b + 261 * OS1_S1 + 55) -
                p_over_q * *(b + 337 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 261 * OS1_S1 + 34);
            *(b + 262 * OS1_S1 + 56) =
                prefactor_x * *(b + 262 * OS1_S1 + 35) -
                p_over_q * *(b + 328 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 262 * OS1_S1 + 20);
            *(b + 262 * OS1_S1 + 57) =
                prefactor_y * *(b + 262 * OS1_S1 + 35) -
                p_over_q * *(b + 337 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 35);
            *(b + 262 * OS1_S1 + 58) =
                prefactor_z * *(b + 262 * OS1_S1 + 35) -
                p_over_q * *(b + 338 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 35);
            *(b + 262 * OS1_S1 + 59) =
                prefactor_y * *(b + 262 * OS1_S1 + 36) -
                p_over_q * *(b + 337 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 36) +
                one_over_two_q * *(b + 262 * OS1_S1 + 20);
            *(b + 262 * OS1_S1 + 60) =
                prefactor_y * *(b + 262 * OS1_S1 + 37) -
                p_over_q * *(b + 337 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 37);
            *(b + 262 * OS1_S1 + 61) =
                prefactor_z * *(b + 262 * OS1_S1 + 37) -
                p_over_q * *(b + 338 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 37) +
                one_over_two_q * *(b + 262 * OS1_S1 + 20);
            *(b + 262 * OS1_S1 + 62) =
                prefactor_y * *(b + 262 * OS1_S1 + 38) -
                p_over_q * *(b + 337 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 262 * OS1_S1 + 21);
            *(b + 262 * OS1_S1 + 63) =
                prefactor_z * *(b + 262 * OS1_S1 + 38) -
                p_over_q * *(b + 338 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 38);
            *(b + 262 * OS1_S1 + 64) =
                prefactor_y * *(b + 262 * OS1_S1 + 40) -
                p_over_q * *(b + 337 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 40);
            *(b + 262 * OS1_S1 + 65) =
                prefactor_x * *(b + 262 * OS1_S1 + 44) -
                p_over_q * *(b + 328 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 262 * OS1_S1 + 29);
            *(b + 262 * OS1_S1 + 66) =
                prefactor_x * *(b + 262 * OS1_S1 + 45) -
                p_over_q * *(b + 328 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 45) +
                one_over_two_q * *(b + 262 * OS1_S1 + 30);
            *(b + 262 * OS1_S1 + 67) =
                prefactor_z * *(b + 262 * OS1_S1 + 41) -
                p_over_q * *(b + 338 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 41);
            *(b + 262 * OS1_S1 + 68) =
                prefactor_y * *(b + 262 * OS1_S1 + 43) -
                p_over_q * *(b + 337 * OS1_S1 + 43) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 43) +
                one_over_two_q * *(b + 262 * OS1_S1 + 25);
            *(b + 262 * OS1_S1 + 69) =
                prefactor_y * *(b + 262 * OS1_S1 + 44) -
                p_over_q * *(b + 337 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 44);
            *(b + 262 * OS1_S1 + 70) =
                prefactor_x * *(b + 262 * OS1_S1 + 49) -
                p_over_q * *(b + 328 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 49) +
                one_over_two_q * *(b + 262 * OS1_S1 + 34);
            *(b + 262 * OS1_S1 + 71) =
                prefactor_x * *(b + 262 * OS1_S1 + 50) -
                p_over_q * *(b + 328 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 50);
            *(b + 262 * OS1_S1 + 72) =
                prefactor_x * *(b + 262 * OS1_S1 + 51) -
                p_over_q * *(b + 328 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 51);
            *(b + 262 * OS1_S1 + 73) =
                prefactor_x * *(b + 262 * OS1_S1 + 52) -
                p_over_q * *(b + 328 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 52);
            *(b + 262 * OS1_S1 + 74) =
                prefactor_x * *(b + 262 * OS1_S1 + 53) -
                p_over_q * *(b + 328 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 53);
            *(b + 262 * OS1_S1 + 75) =
                prefactor_y * *(b + 262 * OS1_S1 + 49) -
                p_over_q * *(b + 337 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 49);
            *(b + 262 * OS1_S1 + 76) =
                prefactor_x * *(b + 262 * OS1_S1 + 55) -
                p_over_q * *(b + 328 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 55);
            *(b + 262 * OS1_S1 + 77) =
                prefactor_y * *(b + 262 * OS1_S1 + 50) -
                p_over_q * *(b + 337 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 262 * OS1_S1 + 30);
            *(b + 262 * OS1_S1 + 78) =
                prefactor_z * *(b + 262 * OS1_S1 + 50) -
                p_over_q * *(b + 338 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 50);
            *(b + 262 * OS1_S1 + 79) =
                prefactor_z * *(b + 262 * OS1_S1 + 51) -
                p_over_q * *(b + 338 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 51) +
                one_over_two_q * *(b + 262 * OS1_S1 + 30);
            *(b + 262 * OS1_S1 + 80) =
                prefactor_y * *(b + 262 * OS1_S1 + 53) -
                p_over_q * *(b + 337 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 262 * OS1_S1 + 33);
            *(b + 262 * OS1_S1 + 81) =
                prefactor_y * *(b + 262 * OS1_S1 + 54) -
                p_over_q * *(b + 337 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 54) +
                one_over_two_q * *(b + 262 * OS1_S1 + 34);
            *(b + 262 * OS1_S1 + 82) =
                prefactor_y * *(b + 262 * OS1_S1 + 55) -
                p_over_q * *(b + 337 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 55);
            *(b + 262 * OS1_S1 + 83) =
                prefactor_z * *(b + 262 * OS1_S1 + 55) -
                p_over_q * *(b + 338 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 262 * OS1_S1 + 34);
            *(b + 263 * OS1_S1 + 56) =
                prefactor_x * *(b + 263 * OS1_S1 + 35) -
                p_over_q * *(b + 329 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 263 * OS1_S1 + 20);
            *(b + 263 * OS1_S1 + 57) =
                prefactor_y * *(b + 263 * OS1_S1 + 35) -
                p_over_q * *(b + 338 * OS1_S1 + 35) +
                one_over_two_q * *(b + 200 * OS1_S1 + 35);
            *(b + 263 * OS1_S1 + 58) =
                prefactor_z * *(b + 263 * OS1_S1 + 35) -
                p_over_q * *(b + 339 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 35);
            *(b + 263 * OS1_S1 + 59) =
                prefactor_y * *(b + 263 * OS1_S1 + 36) -
                p_over_q * *(b + 338 * OS1_S1 + 36) +
                one_over_two_q * *(b + 200 * OS1_S1 + 36) +
                one_over_two_q * *(b + 263 * OS1_S1 + 20);
            *(b + 263 * OS1_S1 + 60) =
                prefactor_y * *(b + 263 * OS1_S1 + 37) -
                p_over_q * *(b + 338 * OS1_S1 + 37) +
                one_over_two_q * *(b + 200 * OS1_S1 + 37);
            *(b + 263 * OS1_S1 + 61) =
                prefactor_z * *(b + 263 * OS1_S1 + 37) -
                p_over_q * *(b + 339 * OS1_S1 + 37) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 37) +
                one_over_two_q * *(b + 263 * OS1_S1 + 20);
            *(b + 263 * OS1_S1 + 62) =
                prefactor_y * *(b + 263 * OS1_S1 + 38) -
                p_over_q * *(b + 338 * OS1_S1 + 38) +
                one_over_two_q * *(b + 200 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 21);
            *(b + 263 * OS1_S1 + 63) =
                prefactor_z * *(b + 263 * OS1_S1 + 38) -
                p_over_q * *(b + 339 * OS1_S1 + 38) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 38);
            *(b + 263 * OS1_S1 + 64) =
                prefactor_y * *(b + 263 * OS1_S1 + 40) -
                p_over_q * *(b + 338 * OS1_S1 + 40) +
                one_over_two_q * *(b + 200 * OS1_S1 + 40);
            *(b + 263 * OS1_S1 + 65) =
                prefactor_x * *(b + 263 * OS1_S1 + 44) -
                p_over_q * *(b + 329 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 29);
            *(b + 263 * OS1_S1 + 66) =
                prefactor_x * *(b + 263 * OS1_S1 + 45) -
                p_over_q * *(b + 329 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 45) +
                one_over_two_q * *(b + 263 * OS1_S1 + 30);
            *(b + 263 * OS1_S1 + 67) =
                prefactor_z * *(b + 263 * OS1_S1 + 41) -
                p_over_q * *(b + 339 * OS1_S1 + 41) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 41);
            *(b + 263 * OS1_S1 + 68) =
                prefactor_y * *(b + 263 * OS1_S1 + 43) -
                p_over_q * *(b + 338 * OS1_S1 + 43) +
                one_over_two_q * *(b + 200 * OS1_S1 + 43) +
                one_over_two_q * *(b + 263 * OS1_S1 + 25);
            *(b + 263 * OS1_S1 + 69) =
                prefactor_y * *(b + 263 * OS1_S1 + 44) -
                p_over_q * *(b + 338 * OS1_S1 + 44) +
                one_over_two_q * *(b + 200 * OS1_S1 + 44);
            *(b + 263 * OS1_S1 + 70) =
                prefactor_x * *(b + 263 * OS1_S1 + 49) -
                p_over_q * *(b + 329 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 49) +
                one_over_two_q * *(b + 263 * OS1_S1 + 34);
            *(b + 263 * OS1_S1 + 71) =
                prefactor_x * *(b + 263 * OS1_S1 + 50) -
                p_over_q * *(b + 329 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 50);
            *(b + 263 * OS1_S1 + 72) =
                prefactor_x * *(b + 263 * OS1_S1 + 51) -
                p_over_q * *(b + 329 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 51);
            *(b + 263 * OS1_S1 + 73) =
                prefactor_x * *(b + 263 * OS1_S1 + 52) -
                p_over_q * *(b + 329 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 52);
            *(b + 263 * OS1_S1 + 74) =
                prefactor_x * *(b + 263 * OS1_S1 + 53) -
                p_over_q * *(b + 329 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 53);
            *(b + 263 * OS1_S1 + 75) =
                prefactor_y * *(b + 263 * OS1_S1 + 49) -
                p_over_q * *(b + 338 * OS1_S1 + 49) +
                one_over_two_q * *(b + 200 * OS1_S1 + 49);
            *(b + 263 * OS1_S1 + 76) =
                prefactor_x * *(b + 263 * OS1_S1 + 55) -
                p_over_q * *(b + 329 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 55);
            *(b + 263 * OS1_S1 + 77) =
                prefactor_y * *(b + 263 * OS1_S1 + 50) -
                p_over_q * *(b + 338 * OS1_S1 + 50) +
                one_over_two_q * *(b + 200 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 263 * OS1_S1 + 30);
            *(b + 263 * OS1_S1 + 78) =
                prefactor_z * *(b + 263 * OS1_S1 + 50) -
                p_over_q * *(b + 339 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 50);
            *(b + 263 * OS1_S1 + 79) =
                prefactor_z * *(b + 263 * OS1_S1 + 51) -
                p_over_q * *(b + 339 * OS1_S1 + 51) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 51) +
                one_over_two_q * *(b + 263 * OS1_S1 + 30);
            *(b + 263 * OS1_S1 + 80) =
                prefactor_y * *(b + 263 * OS1_S1 + 53) -
                p_over_q * *(b + 338 * OS1_S1 + 53) +
                one_over_two_q * *(b + 200 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 33);
            *(b + 263 * OS1_S1 + 81) =
                prefactor_y * *(b + 263 * OS1_S1 + 54) -
                p_over_q * *(b + 338 * OS1_S1 + 54) +
                one_over_two_q * *(b + 200 * OS1_S1 + 54) +
                one_over_two_q * *(b + 263 * OS1_S1 + 34);
            *(b + 263 * OS1_S1 + 82) =
                prefactor_y * *(b + 263 * OS1_S1 + 55) -
                p_over_q * *(b + 338 * OS1_S1 + 55) +
                one_over_two_q * *(b + 200 * OS1_S1 + 55);
            *(b + 263 * OS1_S1 + 83) =
                prefactor_z * *(b + 263 * OS1_S1 + 55) -
                p_over_q * *(b + 339 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 263 * OS1_S1 + 34);
            *(b + 264 * OS1_S1 + 56) =
                prefactor_x * *(b + 264 * OS1_S1 + 35) -
                p_over_q * *(b + 330 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 264 * OS1_S1 + 20);
            *(b + 264 * OS1_S1 + 57) = prefactor_y * *(b + 264 * OS1_S1 + 35) -
                                       p_over_q * *(b + 339 * OS1_S1 + 35);
            *(b + 264 * OS1_S1 + 58) =
                prefactor_z * *(b + 264 * OS1_S1 + 35) -
                p_over_q * *(b + 340 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 35);
            *(b + 264 * OS1_S1 + 59) =
                prefactor_y * *(b + 264 * OS1_S1 + 36) -
                p_over_q * *(b + 339 * OS1_S1 + 36) +
                one_over_two_q * *(b + 264 * OS1_S1 + 20);
            *(b + 264 * OS1_S1 + 60) = prefactor_y * *(b + 264 * OS1_S1 + 37) -
                                       p_over_q * *(b + 339 * OS1_S1 + 37);
            *(b + 264 * OS1_S1 + 61) =
                prefactor_z * *(b + 264 * OS1_S1 + 37) -
                p_over_q * *(b + 340 * OS1_S1 + 37) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 37) +
                one_over_two_q * *(b + 264 * OS1_S1 + 20);
            *(b + 264 * OS1_S1 + 62) =
                prefactor_y * *(b + 264 * OS1_S1 + 38) -
                p_over_q * *(b + 339 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 264 * OS1_S1 + 21);
            *(b + 264 * OS1_S1 + 63) =
                prefactor_z * *(b + 264 * OS1_S1 + 38) -
                p_over_q * *(b + 340 * OS1_S1 + 38) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 38);
            *(b + 264 * OS1_S1 + 64) = prefactor_y * *(b + 264 * OS1_S1 + 40) -
                                       p_over_q * *(b + 339 * OS1_S1 + 40);
            *(b + 264 * OS1_S1 + 65) =
                prefactor_x * *(b + 264 * OS1_S1 + 44) -
                p_over_q * *(b + 330 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 264 * OS1_S1 + 29);
            *(b + 264 * OS1_S1 + 66) =
                prefactor_x * *(b + 264 * OS1_S1 + 45) -
                p_over_q * *(b + 330 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 45) +
                one_over_two_q * *(b + 264 * OS1_S1 + 30);
            *(b + 264 * OS1_S1 + 67) =
                prefactor_z * *(b + 264 * OS1_S1 + 41) -
                p_over_q * *(b + 340 * OS1_S1 + 41) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 41);
            *(b + 264 * OS1_S1 + 68) =
                prefactor_y * *(b + 264 * OS1_S1 + 43) -
                p_over_q * *(b + 339 * OS1_S1 + 43) +
                one_over_two_q * *(b + 264 * OS1_S1 + 25);
            *(b + 264 * OS1_S1 + 69) = prefactor_y * *(b + 264 * OS1_S1 + 44) -
                                       p_over_q * *(b + 339 * OS1_S1 + 44);
            *(b + 264 * OS1_S1 + 70) =
                prefactor_x * *(b + 264 * OS1_S1 + 49) -
                p_over_q * *(b + 330 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 49) +
                one_over_two_q * *(b + 264 * OS1_S1 + 34);
            *(b + 264 * OS1_S1 + 71) =
                prefactor_x * *(b + 264 * OS1_S1 + 50) -
                p_over_q * *(b + 330 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 50);
            *(b + 264 * OS1_S1 + 72) =
                prefactor_x * *(b + 264 * OS1_S1 + 51) -
                p_over_q * *(b + 330 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 51);
            *(b + 264 * OS1_S1 + 73) =
                prefactor_x * *(b + 264 * OS1_S1 + 52) -
                p_over_q * *(b + 330 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 52);
            *(b + 264 * OS1_S1 + 74) =
                prefactor_x * *(b + 264 * OS1_S1 + 53) -
                p_over_q * *(b + 330 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 53);
            *(b + 264 * OS1_S1 + 75) = prefactor_y * *(b + 264 * OS1_S1 + 49) -
                                       p_over_q * *(b + 339 * OS1_S1 + 49);
            *(b + 264 * OS1_S1 + 76) =
                prefactor_x * *(b + 264 * OS1_S1 + 55) -
                p_over_q * *(b + 330 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 55);
            *(b + 264 * OS1_S1 + 77) =
                prefactor_y * *(b + 264 * OS1_S1 + 50) -
                p_over_q * *(b + 339 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 264 * OS1_S1 + 30);
            *(b + 264 * OS1_S1 + 78) =
                prefactor_z * *(b + 264 * OS1_S1 + 50) -
                p_over_q * *(b + 340 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 50);
            *(b + 264 * OS1_S1 + 79) =
                prefactor_z * *(b + 264 * OS1_S1 + 51) -
                p_over_q * *(b + 340 * OS1_S1 + 51) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 51) +
                one_over_two_q * *(b + 264 * OS1_S1 + 30);
            *(b + 264 * OS1_S1 + 80) =
                prefactor_y * *(b + 264 * OS1_S1 + 53) -
                p_over_q * *(b + 339 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 264 * OS1_S1 + 33);
            *(b + 264 * OS1_S1 + 81) =
                prefactor_y * *(b + 264 * OS1_S1 + 54) -
                p_over_q * *(b + 339 * OS1_S1 + 54) +
                one_over_two_q * *(b + 264 * OS1_S1 + 34);
            *(b + 264 * OS1_S1 + 82) = prefactor_y * *(b + 264 * OS1_S1 + 55) -
                                       p_over_q * *(b + 339 * OS1_S1 + 55);
            *(b + 264 * OS1_S1 + 83) =
                prefactor_z * *(b + 264 * OS1_S1 + 55) -
                p_over_q * *(b + 340 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 264 * OS1_S1 + 34);
            *(b + 265 * OS1_S1 + 56) =
                prefactor_x * *(b + 265 * OS1_S1 + 35) -
                p_over_q * *(b + 331 * OS1_S1 + 35) +
                one_over_two_q * *(b + 210 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 265 * OS1_S1 + 20);
            *(b + 265 * OS1_S1 + 57) =
                prefactor_y * *(b + 265 * OS1_S1 + 35) -
                p_over_q * *(b + 341 * OS1_S1 + 35) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 35);
            *(b + 265 * OS1_S1 + 58) = prefactor_z * *(b + 265 * OS1_S1 + 35) -
                                       p_over_q * *(b + 342 * OS1_S1 + 35);
            *(b + 265 * OS1_S1 + 59) =
                prefactor_y * *(b + 265 * OS1_S1 + 36) -
                p_over_q * *(b + 341 * OS1_S1 + 36) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 36) +
                one_over_two_q * *(b + 265 * OS1_S1 + 20);
            *(b + 265 * OS1_S1 + 60) = prefactor_z * *(b + 265 * OS1_S1 + 36) -
                                       p_over_q * *(b + 342 * OS1_S1 + 36);
            *(b + 265 * OS1_S1 + 61) =
                prefactor_z * *(b + 265 * OS1_S1 + 37) -
                p_over_q * *(b + 342 * OS1_S1 + 37) +
                one_over_two_q * *(b + 265 * OS1_S1 + 20);
            *(b + 265 * OS1_S1 + 62) =
                prefactor_x * *(b + 265 * OS1_S1 + 41) -
                p_over_q * *(b + 331 * OS1_S1 + 41) +
                one_over_two_q * *(b + 210 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 26);
            *(b + 265 * OS1_S1 + 63) = prefactor_z * *(b + 265 * OS1_S1 + 38) -
                                       p_over_q * *(b + 342 * OS1_S1 + 38);
            *(b + 265 * OS1_S1 + 64) =
                prefactor_y * *(b + 265 * OS1_S1 + 40) -
                p_over_q * *(b + 341 * OS1_S1 + 40) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 40);
            *(b + 265 * OS1_S1 + 65) =
                prefactor_z * *(b + 265 * OS1_S1 + 40) -
                p_over_q * *(b + 342 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 22);
            *(b + 265 * OS1_S1 + 66) =
                prefactor_x * *(b + 265 * OS1_S1 + 45) -
                p_over_q * *(b + 331 * OS1_S1 + 45) +
                one_over_two_q * *(b + 210 * OS1_S1 + 45) +
                one_over_two_q * *(b + 265 * OS1_S1 + 30);
            *(b + 265 * OS1_S1 + 67) = prefactor_z * *(b + 265 * OS1_S1 + 41) -
                                       p_over_q * *(b + 342 * OS1_S1 + 41);
            *(b + 265 * OS1_S1 + 68) =
                prefactor_z * *(b + 265 * OS1_S1 + 42) -
                p_over_q * *(b + 342 * OS1_S1 + 42) +
                one_over_two_q * *(b + 265 * OS1_S1 + 23);
            *(b + 265 * OS1_S1 + 69) =
                prefactor_y * *(b + 265 * OS1_S1 + 44) -
                p_over_q * *(b + 341 * OS1_S1 + 44) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 44);
            *(b + 265 * OS1_S1 + 70) =
                prefactor_x * *(b + 265 * OS1_S1 + 49) -
                p_over_q * *(b + 331 * OS1_S1 + 49) +
                one_over_two_q * *(b + 210 * OS1_S1 + 49) +
                one_over_two_q * *(b + 265 * OS1_S1 + 34);
            *(b + 265 * OS1_S1 + 71) =
                prefactor_x * *(b + 265 * OS1_S1 + 50) -
                p_over_q * *(b + 331 * OS1_S1 + 50) +
                one_over_two_q * *(b + 210 * OS1_S1 + 50);
            *(b + 265 * OS1_S1 + 72) = prefactor_z * *(b + 265 * OS1_S1 + 45) -
                                       p_over_q * *(b + 342 * OS1_S1 + 45);
            *(b + 265 * OS1_S1 + 73) =
                prefactor_x * *(b + 265 * OS1_S1 + 52) -
                p_over_q * *(b + 331 * OS1_S1 + 52) +
                one_over_two_q * *(b + 210 * OS1_S1 + 52);
            *(b + 265 * OS1_S1 + 74) =
                prefactor_x * *(b + 265 * OS1_S1 + 53) -
                p_over_q * *(b + 331 * OS1_S1 + 53) +
                one_over_two_q * *(b + 210 * OS1_S1 + 53);
            *(b + 265 * OS1_S1 + 75) =
                prefactor_x * *(b + 265 * OS1_S1 + 54) -
                p_over_q * *(b + 331 * OS1_S1 + 54) +
                one_over_two_q * *(b + 210 * OS1_S1 + 54);
            *(b + 265 * OS1_S1 + 76) =
                prefactor_x * *(b + 265 * OS1_S1 + 55) -
                p_over_q * *(b + 331 * OS1_S1 + 55) +
                one_over_two_q * *(b + 210 * OS1_S1 + 55);
            *(b + 265 * OS1_S1 + 77) =
                prefactor_y * *(b + 265 * OS1_S1 + 50) -
                p_over_q * *(b + 341 * OS1_S1 + 50) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 265 * OS1_S1 + 30);
            *(b + 265 * OS1_S1 + 78) = prefactor_z * *(b + 265 * OS1_S1 + 50) -
                                       p_over_q * *(b + 342 * OS1_S1 + 50);
            *(b + 265 * OS1_S1 + 79) =
                prefactor_z * *(b + 265 * OS1_S1 + 51) -
                p_over_q * *(b + 342 * OS1_S1 + 51) +
                one_over_two_q * *(b + 265 * OS1_S1 + 30);
            *(b + 265 * OS1_S1 + 80) =
                prefactor_z * *(b + 265 * OS1_S1 + 52) -
                p_over_q * *(b + 342 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 31);
            *(b + 265 * OS1_S1 + 81) =
                prefactor_y * *(b + 265 * OS1_S1 + 54) -
                p_over_q * *(b + 341 * OS1_S1 + 54) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 54) +
                one_over_two_q * *(b + 265 * OS1_S1 + 34);
            *(b + 265 * OS1_S1 + 82) =
                prefactor_y * *(b + 265 * OS1_S1 + 55) -
                p_over_q * *(b + 341 * OS1_S1 + 55) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 55);
            *(b + 265 * OS1_S1 + 83) =
                prefactor_z * *(b + 265 * OS1_S1 + 55) -
                p_over_q * *(b + 342 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 265 * OS1_S1 + 34);
            *(b + 266 * OS1_S1 + 56) =
                prefactor_x * *(b + 266 * OS1_S1 + 35) -
                p_over_q * *(b + 332 * OS1_S1 + 35) +
                one_over_two_q * *(b + 211 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 266 * OS1_S1 + 20);
            *(b + 266 * OS1_S1 + 57) =
                prefactor_y * *(b + 266 * OS1_S1 + 35) -
                p_over_q * *(b + 342 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 35);
            *(b + 266 * OS1_S1 + 58) =
                prefactor_z * *(b + 266 * OS1_S1 + 35) -
                p_over_q * *(b + 343 * OS1_S1 + 35) +
                one_over_two_q * *(b + 201 * OS1_S1 + 35);
            *(b + 266 * OS1_S1 + 59) =
                prefactor_y * *(b + 266 * OS1_S1 + 36) -
                p_over_q * *(b + 342 * OS1_S1 + 36) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 36) +
                one_over_two_q * *(b + 266 * OS1_S1 + 20);
            *(b + 266 * OS1_S1 + 60) =
                prefactor_z * *(b + 266 * OS1_S1 + 36) -
                p_over_q * *(b + 343 * OS1_S1 + 36) +
                one_over_two_q * *(b + 201 * OS1_S1 + 36);
            *(b + 266 * OS1_S1 + 61) =
                prefactor_z * *(b + 266 * OS1_S1 + 37) -
                p_over_q * *(b + 343 * OS1_S1 + 37) +
                one_over_two_q * *(b + 201 * OS1_S1 + 37) +
                one_over_two_q * *(b + 266 * OS1_S1 + 20);
            *(b + 266 * OS1_S1 + 62) =
                prefactor_x * *(b + 266 * OS1_S1 + 41) -
                p_over_q * *(b + 332 * OS1_S1 + 41) +
                one_over_two_q * *(b + 211 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 26);
            *(b + 266 * OS1_S1 + 63) =
                prefactor_z * *(b + 266 * OS1_S1 + 38) -
                p_over_q * *(b + 343 * OS1_S1 + 38) +
                one_over_two_q * *(b + 201 * OS1_S1 + 38);
            *(b + 266 * OS1_S1 + 64) =
                prefactor_y * *(b + 266 * OS1_S1 + 40) -
                p_over_q * *(b + 342 * OS1_S1 + 40) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 40);
            *(b + 266 * OS1_S1 + 65) =
                prefactor_z * *(b + 266 * OS1_S1 + 40) -
                p_over_q * *(b + 343 * OS1_S1 + 40) +
                one_over_two_q * *(b + 201 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 22);
            *(b + 266 * OS1_S1 + 66) =
                prefactor_x * *(b + 266 * OS1_S1 + 45) -
                p_over_q * *(b + 332 * OS1_S1 + 45) +
                one_over_two_q * *(b + 211 * OS1_S1 + 45) +
                one_over_two_q * *(b + 266 * OS1_S1 + 30);
            *(b + 266 * OS1_S1 + 67) =
                prefactor_z * *(b + 266 * OS1_S1 + 41) -
                p_over_q * *(b + 343 * OS1_S1 + 41) +
                one_over_two_q * *(b + 201 * OS1_S1 + 41);
            *(b + 266 * OS1_S1 + 68) =
                prefactor_z * *(b + 266 * OS1_S1 + 42) -
                p_over_q * *(b + 343 * OS1_S1 + 42) +
                one_over_two_q * *(b + 201 * OS1_S1 + 42) +
                one_over_two_q * *(b + 266 * OS1_S1 + 23);
            *(b + 266 * OS1_S1 + 69) =
                prefactor_y * *(b + 266 * OS1_S1 + 44) -
                p_over_q * *(b + 342 * OS1_S1 + 44) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 44);
            *(b + 266 * OS1_S1 + 70) =
                prefactor_x * *(b + 266 * OS1_S1 + 49) -
                p_over_q * *(b + 332 * OS1_S1 + 49) +
                one_over_two_q * *(b + 211 * OS1_S1 + 49) +
                one_over_two_q * *(b + 266 * OS1_S1 + 34);
            *(b + 266 * OS1_S1 + 71) =
                prefactor_x * *(b + 266 * OS1_S1 + 50) -
                p_over_q * *(b + 332 * OS1_S1 + 50) +
                one_over_two_q * *(b + 211 * OS1_S1 + 50);
            *(b + 266 * OS1_S1 + 72) =
                prefactor_z * *(b + 266 * OS1_S1 + 45) -
                p_over_q * *(b + 343 * OS1_S1 + 45) +
                one_over_two_q * *(b + 201 * OS1_S1 + 45);
            *(b + 266 * OS1_S1 + 73) =
                prefactor_x * *(b + 266 * OS1_S1 + 52) -
                p_over_q * *(b + 332 * OS1_S1 + 52) +
                one_over_two_q * *(b + 211 * OS1_S1 + 52);
            *(b + 266 * OS1_S1 + 74) =
                prefactor_x * *(b + 266 * OS1_S1 + 53) -
                p_over_q * *(b + 332 * OS1_S1 + 53) +
                one_over_two_q * *(b + 211 * OS1_S1 + 53);
            *(b + 266 * OS1_S1 + 75) =
                prefactor_x * *(b + 266 * OS1_S1 + 54) -
                p_over_q * *(b + 332 * OS1_S1 + 54) +
                one_over_two_q * *(b + 211 * OS1_S1 + 54);
            *(b + 266 * OS1_S1 + 76) =
                prefactor_x * *(b + 266 * OS1_S1 + 55) -
                p_over_q * *(b + 332 * OS1_S1 + 55) +
                one_over_two_q * *(b + 211 * OS1_S1 + 55);
            *(b + 266 * OS1_S1 + 77) =
                prefactor_y * *(b + 266 * OS1_S1 + 50) -
                p_over_q * *(b + 342 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 266 * OS1_S1 + 30);
            *(b + 266 * OS1_S1 + 78) =
                prefactor_z * *(b + 266 * OS1_S1 + 50) -
                p_over_q * *(b + 343 * OS1_S1 + 50) +
                one_over_two_q * *(b + 201 * OS1_S1 + 50);
            *(b + 266 * OS1_S1 + 79) =
                prefactor_z * *(b + 266 * OS1_S1 + 51) -
                p_over_q * *(b + 343 * OS1_S1 + 51) +
                one_over_two_q * *(b + 201 * OS1_S1 + 51) +
                one_over_two_q * *(b + 266 * OS1_S1 + 30);
            *(b + 266 * OS1_S1 + 80) =
                prefactor_z * *(b + 266 * OS1_S1 + 52) -
                p_over_q * *(b + 343 * OS1_S1 + 52) +
                one_over_two_q * *(b + 201 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 31);
            *(b + 266 * OS1_S1 + 81) =
                prefactor_y * *(b + 266 * OS1_S1 + 54) -
                p_over_q * *(b + 342 * OS1_S1 + 54) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 54) +
                one_over_two_q * *(b + 266 * OS1_S1 + 34);
            *(b + 266 * OS1_S1 + 82) =
                prefactor_y * *(b + 266 * OS1_S1 + 55) -
                p_over_q * *(b + 342 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 55);
            *(b + 266 * OS1_S1 + 83) =
                prefactor_z * *(b + 266 * OS1_S1 + 55) -
                p_over_q * *(b + 343 * OS1_S1 + 55) +
                one_over_two_q * *(b + 201 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 266 * OS1_S1 + 34);
            *(b + 267 * OS1_S1 + 56) =
                prefactor_x * *(b + 267 * OS1_S1 + 35) -
                p_over_q * *(b + 333 * OS1_S1 + 35) +
                one_over_two_q * *(b + 212 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 267 * OS1_S1 + 20);
            *(b + 267 * OS1_S1 + 57) =
                prefactor_y * *(b + 267 * OS1_S1 + 35) -
                p_over_q * *(b + 343 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 35);
            *(b + 267 * OS1_S1 + 58) =
                prefactor_z * *(b + 267 * OS1_S1 + 35) -
                p_over_q * *(b + 344 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 35);
            *(b + 267 * OS1_S1 + 59) =
                prefactor_y * *(b + 267 * OS1_S1 + 36) -
                p_over_q * *(b + 343 * OS1_S1 + 36) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 36) +
                one_over_two_q * *(b + 267 * OS1_S1 + 20);
            *(b + 267 * OS1_S1 + 60) =
                prefactor_z * *(b + 267 * OS1_S1 + 36) -
                p_over_q * *(b + 344 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 36);
            *(b + 267 * OS1_S1 + 61) =
                prefactor_z * *(b + 267 * OS1_S1 + 37) -
                p_over_q * *(b + 344 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 37) +
                one_over_two_q * *(b + 267 * OS1_S1 + 20);
            *(b + 267 * OS1_S1 + 62) =
                prefactor_x * *(b + 267 * OS1_S1 + 41) -
                p_over_q * *(b + 333 * OS1_S1 + 41) +
                one_over_two_q * *(b + 212 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 26);
            *(b + 267 * OS1_S1 + 63) =
                prefactor_z * *(b + 267 * OS1_S1 + 38) -
                p_over_q * *(b + 344 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 38);
            *(b + 267 * OS1_S1 + 64) =
                prefactor_y * *(b + 267 * OS1_S1 + 40) -
                p_over_q * *(b + 343 * OS1_S1 + 40) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 40);
            *(b + 267 * OS1_S1 + 65) =
                prefactor_x * *(b + 267 * OS1_S1 + 44) -
                p_over_q * *(b + 333 * OS1_S1 + 44) +
                one_over_two_q * *(b + 212 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 29);
            *(b + 267 * OS1_S1 + 66) =
                prefactor_x * *(b + 267 * OS1_S1 + 45) -
                p_over_q * *(b + 333 * OS1_S1 + 45) +
                one_over_two_q * *(b + 212 * OS1_S1 + 45) +
                one_over_two_q * *(b + 267 * OS1_S1 + 30);
            *(b + 267 * OS1_S1 + 67) =
                prefactor_z * *(b + 267 * OS1_S1 + 41) -
                p_over_q * *(b + 344 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 41);
            *(b + 267 * OS1_S1 + 68) =
                prefactor_x * *(b + 267 * OS1_S1 + 47) -
                p_over_q * *(b + 333 * OS1_S1 + 47) +
                one_over_two_q * *(b + 212 * OS1_S1 + 47) +
                one_over_two_q * *(b + 267 * OS1_S1 + 32);
            *(b + 267 * OS1_S1 + 69) =
                prefactor_y * *(b + 267 * OS1_S1 + 44) -
                p_over_q * *(b + 343 * OS1_S1 + 44) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 44);
            *(b + 267 * OS1_S1 + 70) =
                prefactor_x * *(b + 267 * OS1_S1 + 49) -
                p_over_q * *(b + 333 * OS1_S1 + 49) +
                one_over_two_q * *(b + 212 * OS1_S1 + 49) +
                one_over_two_q * *(b + 267 * OS1_S1 + 34);
            *(b + 267 * OS1_S1 + 71) =
                prefactor_x * *(b + 267 * OS1_S1 + 50) -
                p_over_q * *(b + 333 * OS1_S1 + 50) +
                one_over_two_q * *(b + 212 * OS1_S1 + 50);
            *(b + 267 * OS1_S1 + 72) =
                prefactor_x * *(b + 267 * OS1_S1 + 51) -
                p_over_q * *(b + 333 * OS1_S1 + 51) +
                one_over_two_q * *(b + 212 * OS1_S1 + 51);
            *(b + 267 * OS1_S1 + 73) =
                prefactor_x * *(b + 267 * OS1_S1 + 52) -
                p_over_q * *(b + 333 * OS1_S1 + 52) +
                one_over_two_q * *(b + 212 * OS1_S1 + 52);
            *(b + 267 * OS1_S1 + 74) =
                prefactor_x * *(b + 267 * OS1_S1 + 53) -
                p_over_q * *(b + 333 * OS1_S1 + 53) +
                one_over_two_q * *(b + 212 * OS1_S1 + 53);
            *(b + 267 * OS1_S1 + 75) =
                prefactor_x * *(b + 267 * OS1_S1 + 54) -
                p_over_q * *(b + 333 * OS1_S1 + 54) +
                one_over_two_q * *(b + 212 * OS1_S1 + 54);
            *(b + 267 * OS1_S1 + 76) =
                prefactor_x * *(b + 267 * OS1_S1 + 55) -
                p_over_q * *(b + 333 * OS1_S1 + 55) +
                one_over_two_q * *(b + 212 * OS1_S1 + 55);
            *(b + 267 * OS1_S1 + 77) =
                prefactor_y * *(b + 267 * OS1_S1 + 50) -
                p_over_q * *(b + 343 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 267 * OS1_S1 + 30);
            *(b + 267 * OS1_S1 + 78) =
                prefactor_z * *(b + 267 * OS1_S1 + 50) -
                p_over_q * *(b + 344 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 50);
            *(b + 267 * OS1_S1 + 79) =
                prefactor_z * *(b + 267 * OS1_S1 + 51) -
                p_over_q * *(b + 344 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 51) +
                one_over_two_q * *(b + 267 * OS1_S1 + 30);
            *(b + 267 * OS1_S1 + 80) =
                prefactor_z * *(b + 267 * OS1_S1 + 52) -
                p_over_q * *(b + 344 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 31);
            *(b + 267 * OS1_S1 + 81) =
                prefactor_y * *(b + 267 * OS1_S1 + 54) -
                p_over_q * *(b + 343 * OS1_S1 + 54) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 54) +
                one_over_two_q * *(b + 267 * OS1_S1 + 34);
            *(b + 267 * OS1_S1 + 82) =
                prefactor_y * *(b + 267 * OS1_S1 + 55) -
                p_over_q * *(b + 343 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 55);
            *(b + 267 * OS1_S1 + 83) =
                prefactor_z * *(b + 267 * OS1_S1 + 55) -
                p_over_q * *(b + 344 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 267 * OS1_S1 + 34);
            *(b + 268 * OS1_S1 + 56) =
                prefactor_x * *(b + 268 * OS1_S1 + 35) -
                p_over_q * *(b + 334 * OS1_S1 + 35) +
                one_over_two_q * *(b + 213 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 268 * OS1_S1 + 20);
            *(b + 268 * OS1_S1 + 57) =
                prefactor_y * *(b + 268 * OS1_S1 + 35) -
                p_over_q * *(b + 344 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 35);
            *(b + 268 * OS1_S1 + 58) =
                prefactor_z * *(b + 268 * OS1_S1 + 35) -
                p_over_q * *(b + 345 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 35);
            *(b + 268 * OS1_S1 + 59) =
                prefactor_y * *(b + 268 * OS1_S1 + 36) -
                p_over_q * *(b + 344 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 36) +
                one_over_two_q * *(b + 268 * OS1_S1 + 20);
            *(b + 268 * OS1_S1 + 60) =
                prefactor_z * *(b + 268 * OS1_S1 + 36) -
                p_over_q * *(b + 345 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 36);
            *(b + 268 * OS1_S1 + 61) =
                prefactor_z * *(b + 268 * OS1_S1 + 37) -
                p_over_q * *(b + 345 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 37) +
                one_over_two_q * *(b + 268 * OS1_S1 + 20);
            *(b + 268 * OS1_S1 + 62) =
                prefactor_x * *(b + 268 * OS1_S1 + 41) -
                p_over_q * *(b + 334 * OS1_S1 + 41) +
                one_over_two_q * *(b + 213 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 26);
            *(b + 268 * OS1_S1 + 63) =
                prefactor_z * *(b + 268 * OS1_S1 + 38) -
                p_over_q * *(b + 345 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 38);
            *(b + 268 * OS1_S1 + 64) =
                prefactor_y * *(b + 268 * OS1_S1 + 40) -
                p_over_q * *(b + 344 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 40);
            *(b + 268 * OS1_S1 + 65) =
                prefactor_x * *(b + 268 * OS1_S1 + 44) -
                p_over_q * *(b + 334 * OS1_S1 + 44) +
                one_over_two_q * *(b + 213 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 29);
            *(b + 268 * OS1_S1 + 66) =
                prefactor_x * *(b + 268 * OS1_S1 + 45) -
                p_over_q * *(b + 334 * OS1_S1 + 45) +
                one_over_two_q * *(b + 213 * OS1_S1 + 45) +
                one_over_two_q * *(b + 268 * OS1_S1 + 30);
            *(b + 268 * OS1_S1 + 67) =
                prefactor_z * *(b + 268 * OS1_S1 + 41) -
                p_over_q * *(b + 345 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 41);
            *(b + 268 * OS1_S1 + 68) =
                prefactor_x * *(b + 268 * OS1_S1 + 47) -
                p_over_q * *(b + 334 * OS1_S1 + 47) +
                one_over_two_q * *(b + 213 * OS1_S1 + 47) +
                one_over_two_q * *(b + 268 * OS1_S1 + 32);
            *(b + 268 * OS1_S1 + 69) =
                prefactor_y * *(b + 268 * OS1_S1 + 44) -
                p_over_q * *(b + 344 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 44);
            *(b + 268 * OS1_S1 + 70) =
                prefactor_x * *(b + 268 * OS1_S1 + 49) -
                p_over_q * *(b + 334 * OS1_S1 + 49) +
                one_over_two_q * *(b + 213 * OS1_S1 + 49) +
                one_over_two_q * *(b + 268 * OS1_S1 + 34);
            *(b + 268 * OS1_S1 + 71) =
                prefactor_x * *(b + 268 * OS1_S1 + 50) -
                p_over_q * *(b + 334 * OS1_S1 + 50) +
                one_over_two_q * *(b + 213 * OS1_S1 + 50);
            *(b + 268 * OS1_S1 + 72) =
                prefactor_x * *(b + 268 * OS1_S1 + 51) -
                p_over_q * *(b + 334 * OS1_S1 + 51) +
                one_over_two_q * *(b + 213 * OS1_S1 + 51);
            *(b + 268 * OS1_S1 + 73) =
                prefactor_x * *(b + 268 * OS1_S1 + 52) -
                p_over_q * *(b + 334 * OS1_S1 + 52) +
                one_over_two_q * *(b + 213 * OS1_S1 + 52);
            *(b + 268 * OS1_S1 + 74) =
                prefactor_x * *(b + 268 * OS1_S1 + 53) -
                p_over_q * *(b + 334 * OS1_S1 + 53) +
                one_over_two_q * *(b + 213 * OS1_S1 + 53);
            *(b + 268 * OS1_S1 + 75) =
                prefactor_x * *(b + 268 * OS1_S1 + 54) -
                p_over_q * *(b + 334 * OS1_S1 + 54) +
                one_over_two_q * *(b + 213 * OS1_S1 + 54);
            *(b + 268 * OS1_S1 + 76) =
                prefactor_x * *(b + 268 * OS1_S1 + 55) -
                p_over_q * *(b + 334 * OS1_S1 + 55) +
                one_over_two_q * *(b + 213 * OS1_S1 + 55);
            *(b + 268 * OS1_S1 + 77) =
                prefactor_y * *(b + 268 * OS1_S1 + 50) -
                p_over_q * *(b + 344 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 268 * OS1_S1 + 30);
            *(b + 268 * OS1_S1 + 78) =
                prefactor_z * *(b + 268 * OS1_S1 + 50) -
                p_over_q * *(b + 345 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 50);
            *(b + 268 * OS1_S1 + 79) =
                prefactor_z * *(b + 268 * OS1_S1 + 51) -
                p_over_q * *(b + 345 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 51) +
                one_over_two_q * *(b + 268 * OS1_S1 + 30);
            *(b + 268 * OS1_S1 + 80) =
                prefactor_z * *(b + 268 * OS1_S1 + 52) -
                p_over_q * *(b + 345 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 31);
            *(b + 268 * OS1_S1 + 81) =
                prefactor_y * *(b + 268 * OS1_S1 + 54) -
                p_over_q * *(b + 344 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 54) +
                one_over_two_q * *(b + 268 * OS1_S1 + 34);
            *(b + 268 * OS1_S1 + 82) =
                prefactor_y * *(b + 268 * OS1_S1 + 55) -
                p_over_q * *(b + 344 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 55);
            *(b + 268 * OS1_S1 + 83) =
                prefactor_z * *(b + 268 * OS1_S1 + 55) -
                p_over_q * *(b + 345 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 268 * OS1_S1 + 34);
            *(b + 269 * OS1_S1 + 56) =
                prefactor_x * *(b + 269 * OS1_S1 + 35) -
                p_over_q * *(b + 335 * OS1_S1 + 35) +
                one_over_two_q * *(b + 214 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 20);
            *(b + 269 * OS1_S1 + 57) =
                prefactor_y * *(b + 269 * OS1_S1 + 35) -
                p_over_q * *(b + 345 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 35);
            *(b + 269 * OS1_S1 + 58) =
                prefactor_z * *(b + 269 * OS1_S1 + 35) -
                p_over_q * *(b + 346 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 35);
            *(b + 269 * OS1_S1 + 59) =
                prefactor_y * *(b + 269 * OS1_S1 + 36) -
                p_over_q * *(b + 345 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 36) +
                one_over_two_q * *(b + 269 * OS1_S1 + 20);
            *(b + 269 * OS1_S1 + 60) =
                prefactor_z * *(b + 269 * OS1_S1 + 36) -
                p_over_q * *(b + 346 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 36);
            *(b + 269 * OS1_S1 + 61) =
                prefactor_z * *(b + 269 * OS1_S1 + 37) -
                p_over_q * *(b + 346 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 37) +
                one_over_two_q * *(b + 269 * OS1_S1 + 20);
            *(b + 269 * OS1_S1 + 62) =
                prefactor_x * *(b + 269 * OS1_S1 + 41) -
                p_over_q * *(b + 335 * OS1_S1 + 41) +
                one_over_two_q * *(b + 214 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 26);
            *(b + 269 * OS1_S1 + 63) =
                prefactor_z * *(b + 269 * OS1_S1 + 38) -
                p_over_q * *(b + 346 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 38);
            *(b + 269 * OS1_S1 + 64) =
                prefactor_y * *(b + 269 * OS1_S1 + 40) -
                p_over_q * *(b + 345 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 40);
            *(b + 269 * OS1_S1 + 65) =
                prefactor_x * *(b + 269 * OS1_S1 + 44) -
                p_over_q * *(b + 335 * OS1_S1 + 44) +
                one_over_two_q * *(b + 214 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 29);
            *(b + 269 * OS1_S1 + 66) =
                prefactor_x * *(b + 269 * OS1_S1 + 45) -
                p_over_q * *(b + 335 * OS1_S1 + 45) +
                one_over_two_q * *(b + 214 * OS1_S1 + 45) +
                one_over_two_q * *(b + 269 * OS1_S1 + 30);
            *(b + 269 * OS1_S1 + 67) =
                prefactor_z * *(b + 269 * OS1_S1 + 41) -
                p_over_q * *(b + 346 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 41);
            *(b + 269 * OS1_S1 + 68) =
                prefactor_x * *(b + 269 * OS1_S1 + 47) -
                p_over_q * *(b + 335 * OS1_S1 + 47) +
                one_over_two_q * *(b + 214 * OS1_S1 + 47) +
                one_over_two_q * *(b + 269 * OS1_S1 + 32);
            *(b + 269 * OS1_S1 + 69) =
                prefactor_y * *(b + 269 * OS1_S1 + 44) -
                p_over_q * *(b + 345 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 44);
            *(b + 269 * OS1_S1 + 70) =
                prefactor_x * *(b + 269 * OS1_S1 + 49) -
                p_over_q * *(b + 335 * OS1_S1 + 49) +
                one_over_two_q * *(b + 214 * OS1_S1 + 49) +
                one_over_two_q * *(b + 269 * OS1_S1 + 34);
            *(b + 269 * OS1_S1 + 71) =
                prefactor_x * *(b + 269 * OS1_S1 + 50) -
                p_over_q * *(b + 335 * OS1_S1 + 50) +
                one_over_two_q * *(b + 214 * OS1_S1 + 50);
            *(b + 269 * OS1_S1 + 72) =
                prefactor_x * *(b + 269 * OS1_S1 + 51) -
                p_over_q * *(b + 335 * OS1_S1 + 51) +
                one_over_two_q * *(b + 214 * OS1_S1 + 51);
            *(b + 269 * OS1_S1 + 73) =
                prefactor_x * *(b + 269 * OS1_S1 + 52) -
                p_over_q * *(b + 335 * OS1_S1 + 52) +
                one_over_two_q * *(b + 214 * OS1_S1 + 52);
            *(b + 269 * OS1_S1 + 74) =
                prefactor_x * *(b + 269 * OS1_S1 + 53) -
                p_over_q * *(b + 335 * OS1_S1 + 53) +
                one_over_two_q * *(b + 214 * OS1_S1 + 53);
            *(b + 269 * OS1_S1 + 75) =
                prefactor_x * *(b + 269 * OS1_S1 + 54) -
                p_over_q * *(b + 335 * OS1_S1 + 54) +
                one_over_two_q * *(b + 214 * OS1_S1 + 54);
            *(b + 269 * OS1_S1 + 76) =
                prefactor_x * *(b + 269 * OS1_S1 + 55) -
                p_over_q * *(b + 335 * OS1_S1 + 55) +
                one_over_two_q * *(b + 214 * OS1_S1 + 55);
            *(b + 269 * OS1_S1 + 77) =
                prefactor_y * *(b + 269 * OS1_S1 + 50) -
                p_over_q * *(b + 345 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 30);
            *(b + 269 * OS1_S1 + 78) =
                prefactor_z * *(b + 269 * OS1_S1 + 50) -
                p_over_q * *(b + 346 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 50);
            *(b + 269 * OS1_S1 + 79) =
                prefactor_z * *(b + 269 * OS1_S1 + 51) -
                p_over_q * *(b + 346 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 51) +
                one_over_two_q * *(b + 269 * OS1_S1 + 30);
            *(b + 269 * OS1_S1 + 80) =
                prefactor_z * *(b + 269 * OS1_S1 + 52) -
                p_over_q * *(b + 346 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 31);
            *(b + 269 * OS1_S1 + 81) =
                prefactor_y * *(b + 269 * OS1_S1 + 54) -
                p_over_q * *(b + 345 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 54) +
                one_over_two_q * *(b + 269 * OS1_S1 + 34);
            *(b + 269 * OS1_S1 + 82) =
                prefactor_y * *(b + 269 * OS1_S1 + 55) -
                p_over_q * *(b + 345 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 55);
            *(b + 269 * OS1_S1 + 83) =
                prefactor_z * *(b + 269 * OS1_S1 + 55) -
                p_over_q * *(b + 346 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 34);
            *(b + 270 * OS1_S1 + 56) =
                prefactor_x * *(b + 270 * OS1_S1 + 35) -
                p_over_q * *(b + 336 * OS1_S1 + 35) +
                one_over_two_q * *(b + 215 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 20);
            *(b + 270 * OS1_S1 + 57) =
                prefactor_y * *(b + 270 * OS1_S1 + 35) -
                p_over_q * *(b + 346 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 35);
            *(b + 270 * OS1_S1 + 58) =
                prefactor_z * *(b + 270 * OS1_S1 + 35) -
                p_over_q * *(b + 347 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 35);
            *(b + 270 * OS1_S1 + 59) =
                prefactor_y * *(b + 270 * OS1_S1 + 36) -
                p_over_q * *(b + 346 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 36) +
                one_over_two_q * *(b + 270 * OS1_S1 + 20);
            *(b + 270 * OS1_S1 + 60) =
                prefactor_y * *(b + 270 * OS1_S1 + 37) -
                p_over_q * *(b + 346 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 37);
            *(b + 270 * OS1_S1 + 61) =
                prefactor_z * *(b + 270 * OS1_S1 + 37) -
                p_over_q * *(b + 347 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 37) +
                one_over_two_q * *(b + 270 * OS1_S1 + 20);
            *(b + 270 * OS1_S1 + 62) =
                prefactor_x * *(b + 270 * OS1_S1 + 41) -
                p_over_q * *(b + 336 * OS1_S1 + 41) +
                one_over_two_q * *(b + 215 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 26);
            *(b + 270 * OS1_S1 + 63) =
                prefactor_z * *(b + 270 * OS1_S1 + 38) -
                p_over_q * *(b + 347 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 38);
            *(b + 270 * OS1_S1 + 64) =
                prefactor_y * *(b + 270 * OS1_S1 + 40) -
                p_over_q * *(b + 346 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 40);
            *(b + 270 * OS1_S1 + 65) =
                prefactor_x * *(b + 270 * OS1_S1 + 44) -
                p_over_q * *(b + 336 * OS1_S1 + 44) +
                one_over_two_q * *(b + 215 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 29);
            *(b + 270 * OS1_S1 + 66) =
                prefactor_x * *(b + 270 * OS1_S1 + 45) -
                p_over_q * *(b + 336 * OS1_S1 + 45) +
                one_over_two_q * *(b + 215 * OS1_S1 + 45) +
                one_over_two_q * *(b + 270 * OS1_S1 + 30);
            *(b + 270 * OS1_S1 + 67) =
                prefactor_z * *(b + 270 * OS1_S1 + 41) -
                p_over_q * *(b + 347 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 41);
            *(b + 270 * OS1_S1 + 68) =
                prefactor_x * *(b + 270 * OS1_S1 + 47) -
                p_over_q * *(b + 336 * OS1_S1 + 47) +
                one_over_two_q * *(b + 215 * OS1_S1 + 47) +
                one_over_two_q * *(b + 270 * OS1_S1 + 32);
            *(b + 270 * OS1_S1 + 69) =
                prefactor_y * *(b + 270 * OS1_S1 + 44) -
                p_over_q * *(b + 346 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 44);
            *(b + 270 * OS1_S1 + 70) =
                prefactor_x * *(b + 270 * OS1_S1 + 49) -
                p_over_q * *(b + 336 * OS1_S1 + 49) +
                one_over_two_q * *(b + 215 * OS1_S1 + 49) +
                one_over_two_q * *(b + 270 * OS1_S1 + 34);
            *(b + 270 * OS1_S1 + 71) =
                prefactor_x * *(b + 270 * OS1_S1 + 50) -
                p_over_q * *(b + 336 * OS1_S1 + 50) +
                one_over_two_q * *(b + 215 * OS1_S1 + 50);
            *(b + 270 * OS1_S1 + 72) =
                prefactor_x * *(b + 270 * OS1_S1 + 51) -
                p_over_q * *(b + 336 * OS1_S1 + 51) +
                one_over_two_q * *(b + 215 * OS1_S1 + 51);
            *(b + 270 * OS1_S1 + 73) =
                prefactor_x * *(b + 270 * OS1_S1 + 52) -
                p_over_q * *(b + 336 * OS1_S1 + 52) +
                one_over_two_q * *(b + 215 * OS1_S1 + 52);
            *(b + 270 * OS1_S1 + 74) =
                prefactor_x * *(b + 270 * OS1_S1 + 53) -
                p_over_q * *(b + 336 * OS1_S1 + 53) +
                one_over_two_q * *(b + 215 * OS1_S1 + 53);
            *(b + 270 * OS1_S1 + 75) =
                prefactor_x * *(b + 270 * OS1_S1 + 54) -
                p_over_q * *(b + 336 * OS1_S1 + 54) +
                one_over_two_q * *(b + 215 * OS1_S1 + 54);
            *(b + 270 * OS1_S1 + 76) =
                prefactor_x * *(b + 270 * OS1_S1 + 55) -
                p_over_q * *(b + 336 * OS1_S1 + 55) +
                one_over_two_q * *(b + 215 * OS1_S1 + 55);
            *(b + 270 * OS1_S1 + 77) =
                prefactor_y * *(b + 270 * OS1_S1 + 50) -
                p_over_q * *(b + 346 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 30);
            *(b + 270 * OS1_S1 + 78) =
                prefactor_z * *(b + 270 * OS1_S1 + 50) -
                p_over_q * *(b + 347 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 50);
            *(b + 270 * OS1_S1 + 79) =
                prefactor_z * *(b + 270 * OS1_S1 + 51) -
                p_over_q * *(b + 347 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 51) +
                one_over_two_q * *(b + 270 * OS1_S1 + 30);
            *(b + 270 * OS1_S1 + 80) =
                prefactor_y * *(b + 270 * OS1_S1 + 53) -
                p_over_q * *(b + 346 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 33);
            *(b + 270 * OS1_S1 + 81) =
                prefactor_y * *(b + 270 * OS1_S1 + 54) -
                p_over_q * *(b + 346 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 54) +
                one_over_two_q * *(b + 270 * OS1_S1 + 34);
            *(b + 270 * OS1_S1 + 82) =
                prefactor_y * *(b + 270 * OS1_S1 + 55) -
                p_over_q * *(b + 346 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 55);
            *(b + 270 * OS1_S1 + 83) =
                prefactor_z * *(b + 270 * OS1_S1 + 55) -
                p_over_q * *(b + 347 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 34);
            *(b + 271 * OS1_S1 + 56) =
                prefactor_x * *(b + 271 * OS1_S1 + 35) -
                p_over_q * *(b + 337 * OS1_S1 + 35) +
                one_over_two_q * *(b + 216 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 271 * OS1_S1 + 20);
            *(b + 271 * OS1_S1 + 57) =
                prefactor_y * *(b + 271 * OS1_S1 + 35) -
                p_over_q * *(b + 347 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 35);
            *(b + 271 * OS1_S1 + 58) =
                prefactor_z * *(b + 271 * OS1_S1 + 35) -
                p_over_q * *(b + 348 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 35);
            *(b + 271 * OS1_S1 + 59) =
                prefactor_y * *(b + 271 * OS1_S1 + 36) -
                p_over_q * *(b + 347 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 36) +
                one_over_two_q * *(b + 271 * OS1_S1 + 20);
            *(b + 271 * OS1_S1 + 60) =
                prefactor_y * *(b + 271 * OS1_S1 + 37) -
                p_over_q * *(b + 347 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 37);
            *(b + 271 * OS1_S1 + 61) =
                prefactor_z * *(b + 271 * OS1_S1 + 37) -
                p_over_q * *(b + 348 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 37) +
                one_over_two_q * *(b + 271 * OS1_S1 + 20);
            *(b + 271 * OS1_S1 + 62) =
                prefactor_x * *(b + 271 * OS1_S1 + 41) -
                p_over_q * *(b + 337 * OS1_S1 + 41) +
                one_over_two_q * *(b + 216 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 26);
            *(b + 271 * OS1_S1 + 63) =
                prefactor_z * *(b + 271 * OS1_S1 + 38) -
                p_over_q * *(b + 348 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 38);
            *(b + 271 * OS1_S1 + 64) =
                prefactor_y * *(b + 271 * OS1_S1 + 40) -
                p_over_q * *(b + 347 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 40);
            *(b + 271 * OS1_S1 + 65) =
                prefactor_x * *(b + 271 * OS1_S1 + 44) -
                p_over_q * *(b + 337 * OS1_S1 + 44) +
                one_over_two_q * *(b + 216 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 29);
            *(b + 271 * OS1_S1 + 66) =
                prefactor_x * *(b + 271 * OS1_S1 + 45) -
                p_over_q * *(b + 337 * OS1_S1 + 45) +
                one_over_two_q * *(b + 216 * OS1_S1 + 45) +
                one_over_two_q * *(b + 271 * OS1_S1 + 30);
            *(b + 271 * OS1_S1 + 67) =
                prefactor_z * *(b + 271 * OS1_S1 + 41) -
                p_over_q * *(b + 348 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 41);
            *(b + 271 * OS1_S1 + 68) =
                prefactor_x * *(b + 271 * OS1_S1 + 47) -
                p_over_q * *(b + 337 * OS1_S1 + 47) +
                one_over_two_q * *(b + 216 * OS1_S1 + 47) +
                one_over_two_q * *(b + 271 * OS1_S1 + 32);
            *(b + 271 * OS1_S1 + 69) =
                prefactor_y * *(b + 271 * OS1_S1 + 44) -
                p_over_q * *(b + 347 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 44);
            *(b + 271 * OS1_S1 + 70) =
                prefactor_x * *(b + 271 * OS1_S1 + 49) -
                p_over_q * *(b + 337 * OS1_S1 + 49) +
                one_over_two_q * *(b + 216 * OS1_S1 + 49) +
                one_over_two_q * *(b + 271 * OS1_S1 + 34);
            *(b + 271 * OS1_S1 + 71) =
                prefactor_x * *(b + 271 * OS1_S1 + 50) -
                p_over_q * *(b + 337 * OS1_S1 + 50) +
                one_over_two_q * *(b + 216 * OS1_S1 + 50);
            *(b + 271 * OS1_S1 + 72) =
                prefactor_x * *(b + 271 * OS1_S1 + 51) -
                p_over_q * *(b + 337 * OS1_S1 + 51) +
                one_over_two_q * *(b + 216 * OS1_S1 + 51);
            *(b + 271 * OS1_S1 + 73) =
                prefactor_x * *(b + 271 * OS1_S1 + 52) -
                p_over_q * *(b + 337 * OS1_S1 + 52) +
                one_over_two_q * *(b + 216 * OS1_S1 + 52);
            *(b + 271 * OS1_S1 + 74) =
                prefactor_x * *(b + 271 * OS1_S1 + 53) -
                p_over_q * *(b + 337 * OS1_S1 + 53) +
                one_over_two_q * *(b + 216 * OS1_S1 + 53);
            *(b + 271 * OS1_S1 + 75) =
                prefactor_x * *(b + 271 * OS1_S1 + 54) -
                p_over_q * *(b + 337 * OS1_S1 + 54) +
                one_over_two_q * *(b + 216 * OS1_S1 + 54);
            *(b + 271 * OS1_S1 + 76) =
                prefactor_x * *(b + 271 * OS1_S1 + 55) -
                p_over_q * *(b + 337 * OS1_S1 + 55) +
                one_over_two_q * *(b + 216 * OS1_S1 + 55);
            *(b + 271 * OS1_S1 + 77) =
                prefactor_y * *(b + 271 * OS1_S1 + 50) -
                p_over_q * *(b + 347 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 271 * OS1_S1 + 30);
            *(b + 271 * OS1_S1 + 78) =
                prefactor_z * *(b + 271 * OS1_S1 + 50) -
                p_over_q * *(b + 348 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 50);
            *(b + 271 * OS1_S1 + 79) =
                prefactor_z * *(b + 271 * OS1_S1 + 51) -
                p_over_q * *(b + 348 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 51) +
                one_over_two_q * *(b + 271 * OS1_S1 + 30);
            *(b + 271 * OS1_S1 + 80) =
                prefactor_y * *(b + 271 * OS1_S1 + 53) -
                p_over_q * *(b + 347 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 33);
            *(b + 271 * OS1_S1 + 81) =
                prefactor_y * *(b + 271 * OS1_S1 + 54) -
                p_over_q * *(b + 347 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 54) +
                one_over_two_q * *(b + 271 * OS1_S1 + 34);
            *(b + 271 * OS1_S1 + 82) =
                prefactor_y * *(b + 271 * OS1_S1 + 55) -
                p_over_q * *(b + 347 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 55);
            *(b + 271 * OS1_S1 + 83) =
                prefactor_z * *(b + 271 * OS1_S1 + 55) -
                p_over_q * *(b + 348 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 271 * OS1_S1 + 34);
            *(b + 272 * OS1_S1 + 56) =
                prefactor_x * *(b + 272 * OS1_S1 + 35) -
                p_over_q * *(b + 338 * OS1_S1 + 35) +
                one_over_two_q * *(b + 217 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 272 * OS1_S1 + 20);
            *(b + 272 * OS1_S1 + 57) =
                prefactor_y * *(b + 272 * OS1_S1 + 35) -
                p_over_q * *(b + 348 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 35);
            *(b + 272 * OS1_S1 + 58) =
                prefactor_z * *(b + 272 * OS1_S1 + 35) -
                p_over_q * *(b + 349 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 35);
            *(b + 272 * OS1_S1 + 59) =
                prefactor_y * *(b + 272 * OS1_S1 + 36) -
                p_over_q * *(b + 348 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 36) +
                one_over_two_q * *(b + 272 * OS1_S1 + 20);
            *(b + 272 * OS1_S1 + 60) =
                prefactor_y * *(b + 272 * OS1_S1 + 37) -
                p_over_q * *(b + 348 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 37);
            *(b + 272 * OS1_S1 + 61) =
                prefactor_z * *(b + 272 * OS1_S1 + 37) -
                p_over_q * *(b + 349 * OS1_S1 + 37) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 37) +
                one_over_two_q * *(b + 272 * OS1_S1 + 20);
            *(b + 272 * OS1_S1 + 62) =
                prefactor_x * *(b + 272 * OS1_S1 + 41) -
                p_over_q * *(b + 338 * OS1_S1 + 41) +
                one_over_two_q * *(b + 217 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 26);
            *(b + 272 * OS1_S1 + 63) =
                prefactor_z * *(b + 272 * OS1_S1 + 38) -
                p_over_q * *(b + 349 * OS1_S1 + 38) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 38);
            *(b + 272 * OS1_S1 + 64) =
                prefactor_y * *(b + 272 * OS1_S1 + 40) -
                p_over_q * *(b + 348 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 40);
            *(b + 272 * OS1_S1 + 65) =
                prefactor_x * *(b + 272 * OS1_S1 + 44) -
                p_over_q * *(b + 338 * OS1_S1 + 44) +
                one_over_two_q * *(b + 217 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 29);
            *(b + 272 * OS1_S1 + 66) =
                prefactor_x * *(b + 272 * OS1_S1 + 45) -
                p_over_q * *(b + 338 * OS1_S1 + 45) +
                one_over_two_q * *(b + 217 * OS1_S1 + 45) +
                one_over_two_q * *(b + 272 * OS1_S1 + 30);
            *(b + 272 * OS1_S1 + 67) =
                prefactor_z * *(b + 272 * OS1_S1 + 41) -
                p_over_q * *(b + 349 * OS1_S1 + 41) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 41);
            *(b + 272 * OS1_S1 + 68) =
                prefactor_x * *(b + 272 * OS1_S1 + 47) -
                p_over_q * *(b + 338 * OS1_S1 + 47) +
                one_over_two_q * *(b + 217 * OS1_S1 + 47) +
                one_over_two_q * *(b + 272 * OS1_S1 + 32);
            *(b + 272 * OS1_S1 + 69) =
                prefactor_y * *(b + 272 * OS1_S1 + 44) -
                p_over_q * *(b + 348 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 44);
            *(b + 272 * OS1_S1 + 70) =
                prefactor_x * *(b + 272 * OS1_S1 + 49) -
                p_over_q * *(b + 338 * OS1_S1 + 49) +
                one_over_two_q * *(b + 217 * OS1_S1 + 49) +
                one_over_two_q * *(b + 272 * OS1_S1 + 34);
            *(b + 272 * OS1_S1 + 71) =
                prefactor_x * *(b + 272 * OS1_S1 + 50) -
                p_over_q * *(b + 338 * OS1_S1 + 50) +
                one_over_two_q * *(b + 217 * OS1_S1 + 50);
            *(b + 272 * OS1_S1 + 72) =
                prefactor_x * *(b + 272 * OS1_S1 + 51) -
                p_over_q * *(b + 338 * OS1_S1 + 51) +
                one_over_two_q * *(b + 217 * OS1_S1 + 51);
            *(b + 272 * OS1_S1 + 73) =
                prefactor_x * *(b + 272 * OS1_S1 + 52) -
                p_over_q * *(b + 338 * OS1_S1 + 52) +
                one_over_two_q * *(b + 217 * OS1_S1 + 52);
            *(b + 272 * OS1_S1 + 74) =
                prefactor_x * *(b + 272 * OS1_S1 + 53) -
                p_over_q * *(b + 338 * OS1_S1 + 53) +
                one_over_two_q * *(b + 217 * OS1_S1 + 53);
            *(b + 272 * OS1_S1 + 75) =
                prefactor_x * *(b + 272 * OS1_S1 + 54) -
                p_over_q * *(b + 338 * OS1_S1 + 54) +
                one_over_two_q * *(b + 217 * OS1_S1 + 54);
            *(b + 272 * OS1_S1 + 76) =
                prefactor_x * *(b + 272 * OS1_S1 + 55) -
                p_over_q * *(b + 338 * OS1_S1 + 55) +
                one_over_two_q * *(b + 217 * OS1_S1 + 55);
            *(b + 272 * OS1_S1 + 77) =
                prefactor_y * *(b + 272 * OS1_S1 + 50) -
                p_over_q * *(b + 348 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 272 * OS1_S1 + 30);
            *(b + 272 * OS1_S1 + 78) =
                prefactor_z * *(b + 272 * OS1_S1 + 50) -
                p_over_q * *(b + 349 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 50);
            *(b + 272 * OS1_S1 + 79) =
                prefactor_z * *(b + 272 * OS1_S1 + 51) -
                p_over_q * *(b + 349 * OS1_S1 + 51) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 51) +
                one_over_two_q * *(b + 272 * OS1_S1 + 30);
            *(b + 272 * OS1_S1 + 80) =
                prefactor_y * *(b + 272 * OS1_S1 + 53) -
                p_over_q * *(b + 348 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 33);
            *(b + 272 * OS1_S1 + 81) =
                prefactor_y * *(b + 272 * OS1_S1 + 54) -
                p_over_q * *(b + 348 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 54) +
                one_over_two_q * *(b + 272 * OS1_S1 + 34);
            *(b + 272 * OS1_S1 + 82) =
                prefactor_y * *(b + 272 * OS1_S1 + 55) -
                p_over_q * *(b + 348 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 55);
            *(b + 272 * OS1_S1 + 83) =
                prefactor_z * *(b + 272 * OS1_S1 + 55) -
                p_over_q * *(b + 349 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 272 * OS1_S1 + 34);
            *(b + 273 * OS1_S1 + 56) =
                prefactor_x * *(b + 273 * OS1_S1 + 35) -
                p_over_q * *(b + 339 * OS1_S1 + 35) +
                one_over_two_q * *(b + 218 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 273 * OS1_S1 + 20);
            *(b + 273 * OS1_S1 + 57) =
                prefactor_y * *(b + 273 * OS1_S1 + 35) -
                p_over_q * *(b + 349 * OS1_S1 + 35) +
                one_over_two_q * *(b + 209 * OS1_S1 + 35);
            *(b + 273 * OS1_S1 + 58) =
                prefactor_z * *(b + 273 * OS1_S1 + 35) -
                p_over_q * *(b + 350 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 35);
            *(b + 273 * OS1_S1 + 59) =
                prefactor_y * *(b + 273 * OS1_S1 + 36) -
                p_over_q * *(b + 349 * OS1_S1 + 36) +
                one_over_two_q * *(b + 209 * OS1_S1 + 36) +
                one_over_two_q * *(b + 273 * OS1_S1 + 20);
            *(b + 273 * OS1_S1 + 60) =
                prefactor_y * *(b + 273 * OS1_S1 + 37) -
                p_over_q * *(b + 349 * OS1_S1 + 37) +
                one_over_two_q * *(b + 209 * OS1_S1 + 37);
            *(b + 273 * OS1_S1 + 61) =
                prefactor_z * *(b + 273 * OS1_S1 + 37) -
                p_over_q * *(b + 350 * OS1_S1 + 37) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 37) +
                one_over_two_q * *(b + 273 * OS1_S1 + 20);
            *(b + 273 * OS1_S1 + 62) =
                prefactor_y * *(b + 273 * OS1_S1 + 38) -
                p_over_q * *(b + 349 * OS1_S1 + 38) +
                one_over_two_q * *(b + 209 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 21);
            *(b + 273 * OS1_S1 + 63) =
                prefactor_z * *(b + 273 * OS1_S1 + 38) -
                p_over_q * *(b + 350 * OS1_S1 + 38) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 38);
            *(b + 273 * OS1_S1 + 64) =
                prefactor_y * *(b + 273 * OS1_S1 + 40) -
                p_over_q * *(b + 349 * OS1_S1 + 40) +
                one_over_two_q * *(b + 209 * OS1_S1 + 40);
            *(b + 273 * OS1_S1 + 65) =
                prefactor_x * *(b + 273 * OS1_S1 + 44) -
                p_over_q * *(b + 339 * OS1_S1 + 44) +
                one_over_two_q * *(b + 218 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 29);
            *(b + 273 * OS1_S1 + 66) =
                prefactor_x * *(b + 273 * OS1_S1 + 45) -
                p_over_q * *(b + 339 * OS1_S1 + 45) +
                one_over_two_q * *(b + 218 * OS1_S1 + 45) +
                one_over_two_q * *(b + 273 * OS1_S1 + 30);
            *(b + 273 * OS1_S1 + 67) =
                prefactor_z * *(b + 273 * OS1_S1 + 41) -
                p_over_q * *(b + 350 * OS1_S1 + 41) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 41);
            *(b + 273 * OS1_S1 + 68) =
                prefactor_y * *(b + 273 * OS1_S1 + 43) -
                p_over_q * *(b + 349 * OS1_S1 + 43) +
                one_over_two_q * *(b + 209 * OS1_S1 + 43) +
                one_over_two_q * *(b + 273 * OS1_S1 + 25);
            *(b + 273 * OS1_S1 + 69) =
                prefactor_y * *(b + 273 * OS1_S1 + 44) -
                p_over_q * *(b + 349 * OS1_S1 + 44) +
                one_over_two_q * *(b + 209 * OS1_S1 + 44);
            *(b + 273 * OS1_S1 + 70) =
                prefactor_x * *(b + 273 * OS1_S1 + 49) -
                p_over_q * *(b + 339 * OS1_S1 + 49) +
                one_over_two_q * *(b + 218 * OS1_S1 + 49) +
                one_over_two_q * *(b + 273 * OS1_S1 + 34);
            *(b + 273 * OS1_S1 + 71) =
                prefactor_x * *(b + 273 * OS1_S1 + 50) -
                p_over_q * *(b + 339 * OS1_S1 + 50) +
                one_over_two_q * *(b + 218 * OS1_S1 + 50);
            *(b + 273 * OS1_S1 + 72) =
                prefactor_x * *(b + 273 * OS1_S1 + 51) -
                p_over_q * *(b + 339 * OS1_S1 + 51) +
                one_over_two_q * *(b + 218 * OS1_S1 + 51);
            *(b + 273 * OS1_S1 + 73) =
                prefactor_x * *(b + 273 * OS1_S1 + 52) -
                p_over_q * *(b + 339 * OS1_S1 + 52) +
                one_over_two_q * *(b + 218 * OS1_S1 + 52);
            *(b + 273 * OS1_S1 + 74) =
                prefactor_x * *(b + 273 * OS1_S1 + 53) -
                p_over_q * *(b + 339 * OS1_S1 + 53) +
                one_over_two_q * *(b + 218 * OS1_S1 + 53);
            *(b + 273 * OS1_S1 + 75) =
                prefactor_y * *(b + 273 * OS1_S1 + 49) -
                p_over_q * *(b + 349 * OS1_S1 + 49) +
                one_over_two_q * *(b + 209 * OS1_S1 + 49);
            *(b + 273 * OS1_S1 + 76) =
                prefactor_x * *(b + 273 * OS1_S1 + 55) -
                p_over_q * *(b + 339 * OS1_S1 + 55) +
                one_over_two_q * *(b + 218 * OS1_S1 + 55);
            *(b + 273 * OS1_S1 + 77) =
                prefactor_y * *(b + 273 * OS1_S1 + 50) -
                p_over_q * *(b + 349 * OS1_S1 + 50) +
                one_over_two_q * *(b + 209 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 273 * OS1_S1 + 30);
            *(b + 273 * OS1_S1 + 78) =
                prefactor_z * *(b + 273 * OS1_S1 + 50) -
                p_over_q * *(b + 350 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 50);
            *(b + 273 * OS1_S1 + 79) =
                prefactor_z * *(b + 273 * OS1_S1 + 51) -
                p_over_q * *(b + 350 * OS1_S1 + 51) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 51) +
                one_over_two_q * *(b + 273 * OS1_S1 + 30);
            *(b + 273 * OS1_S1 + 80) =
                prefactor_y * *(b + 273 * OS1_S1 + 53) -
                p_over_q * *(b + 349 * OS1_S1 + 53) +
                one_over_two_q * *(b + 209 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 33);
            *(b + 273 * OS1_S1 + 81) =
                prefactor_y * *(b + 273 * OS1_S1 + 54) -
                p_over_q * *(b + 349 * OS1_S1 + 54) +
                one_over_two_q * *(b + 209 * OS1_S1 + 54) +
                one_over_two_q * *(b + 273 * OS1_S1 + 34);
            *(b + 273 * OS1_S1 + 82) =
                prefactor_y * *(b + 273 * OS1_S1 + 55) -
                p_over_q * *(b + 349 * OS1_S1 + 55) +
                one_over_two_q * *(b + 209 * OS1_S1 + 55);
            *(b + 273 * OS1_S1 + 83) =
                prefactor_z * *(b + 273 * OS1_S1 + 55) -
                p_over_q * *(b + 350 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 273 * OS1_S1 + 34);
            *(b + 274 * OS1_S1 + 56) =
                prefactor_x * *(b + 274 * OS1_S1 + 35) -
                p_over_q * *(b + 340 * OS1_S1 + 35) +
                one_over_two_q * *(b + 219 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 274 * OS1_S1 + 20);
            *(b + 274 * OS1_S1 + 57) = prefactor_y * *(b + 274 * OS1_S1 + 35) -
                                       p_over_q * *(b + 350 * OS1_S1 + 35);
            *(b + 274 * OS1_S1 + 58) =
                prefactor_z * *(b + 274 * OS1_S1 + 35) -
                p_over_q * *(b + 351 * OS1_S1 + 35) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 35);
            *(b + 274 * OS1_S1 + 59) =
                prefactor_y * *(b + 274 * OS1_S1 + 36) -
                p_over_q * *(b + 350 * OS1_S1 + 36) +
                one_over_two_q * *(b + 274 * OS1_S1 + 20);
            *(b + 274 * OS1_S1 + 60) = prefactor_y * *(b + 274 * OS1_S1 + 37) -
                                       p_over_q * *(b + 350 * OS1_S1 + 37);
            *(b + 274 * OS1_S1 + 61) =
                prefactor_z * *(b + 274 * OS1_S1 + 37) -
                p_over_q * *(b + 351 * OS1_S1 + 37) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 37) +
                one_over_two_q * *(b + 274 * OS1_S1 + 20);
            *(b + 274 * OS1_S1 + 62) =
                prefactor_y * *(b + 274 * OS1_S1 + 38) -
                p_over_q * *(b + 350 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 21);
            *(b + 274 * OS1_S1 + 63) =
                prefactor_z * *(b + 274 * OS1_S1 + 38) -
                p_over_q * *(b + 351 * OS1_S1 + 38) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 38);
            *(b + 274 * OS1_S1 + 64) = prefactor_y * *(b + 274 * OS1_S1 + 40) -
                                       p_over_q * *(b + 350 * OS1_S1 + 40);
            *(b + 274 * OS1_S1 + 65) =
                prefactor_x * *(b + 274 * OS1_S1 + 44) -
                p_over_q * *(b + 340 * OS1_S1 + 44) +
                one_over_two_q * *(b + 219 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 29);
            *(b + 274 * OS1_S1 + 66) =
                prefactor_x * *(b + 274 * OS1_S1 + 45) -
                p_over_q * *(b + 340 * OS1_S1 + 45) +
                one_over_two_q * *(b + 219 * OS1_S1 + 45) +
                one_over_two_q * *(b + 274 * OS1_S1 + 30);
            *(b + 274 * OS1_S1 + 67) =
                prefactor_z * *(b + 274 * OS1_S1 + 41) -
                p_over_q * *(b + 351 * OS1_S1 + 41) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 41);
            *(b + 274 * OS1_S1 + 68) =
                prefactor_y * *(b + 274 * OS1_S1 + 43) -
                p_over_q * *(b + 350 * OS1_S1 + 43) +
                one_over_two_q * *(b + 274 * OS1_S1 + 25);
            *(b + 274 * OS1_S1 + 69) = prefactor_y * *(b + 274 * OS1_S1 + 44) -
                                       p_over_q * *(b + 350 * OS1_S1 + 44);
            *(b + 274 * OS1_S1 + 70) =
                prefactor_x * *(b + 274 * OS1_S1 + 49) -
                p_over_q * *(b + 340 * OS1_S1 + 49) +
                one_over_two_q * *(b + 219 * OS1_S1 + 49) +
                one_over_two_q * *(b + 274 * OS1_S1 + 34);
            *(b + 274 * OS1_S1 + 71) =
                prefactor_x * *(b + 274 * OS1_S1 + 50) -
                p_over_q * *(b + 340 * OS1_S1 + 50) +
                one_over_two_q * *(b + 219 * OS1_S1 + 50);
            *(b + 274 * OS1_S1 + 72) =
                prefactor_x * *(b + 274 * OS1_S1 + 51) -
                p_over_q * *(b + 340 * OS1_S1 + 51) +
                one_over_two_q * *(b + 219 * OS1_S1 + 51);
            *(b + 274 * OS1_S1 + 73) =
                prefactor_x * *(b + 274 * OS1_S1 + 52) -
                p_over_q * *(b + 340 * OS1_S1 + 52) +
                one_over_two_q * *(b + 219 * OS1_S1 + 52);
            *(b + 274 * OS1_S1 + 74) =
                prefactor_x * *(b + 274 * OS1_S1 + 53) -
                p_over_q * *(b + 340 * OS1_S1 + 53) +
                one_over_two_q * *(b + 219 * OS1_S1 + 53);
            *(b + 274 * OS1_S1 + 75) = prefactor_y * *(b + 274 * OS1_S1 + 49) -
                                       p_over_q * *(b + 350 * OS1_S1 + 49);
            *(b + 274 * OS1_S1 + 76) =
                prefactor_x * *(b + 274 * OS1_S1 + 55) -
                p_over_q * *(b + 340 * OS1_S1 + 55) +
                one_over_two_q * *(b + 219 * OS1_S1 + 55);
            *(b + 274 * OS1_S1 + 77) =
                prefactor_y * *(b + 274 * OS1_S1 + 50) -
                p_over_q * *(b + 350 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 274 * OS1_S1 + 30);
            *(b + 274 * OS1_S1 + 78) =
                prefactor_z * *(b + 274 * OS1_S1 + 50) -
                p_over_q * *(b + 351 * OS1_S1 + 50) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 50);
            *(b + 274 * OS1_S1 + 79) =
                prefactor_z * *(b + 274 * OS1_S1 + 51) -
                p_over_q * *(b + 351 * OS1_S1 + 51) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 51) +
                one_over_two_q * *(b + 274 * OS1_S1 + 30);
            *(b + 274 * OS1_S1 + 80) =
                prefactor_y * *(b + 274 * OS1_S1 + 53) -
                p_over_q * *(b + 350 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 33);
            *(b + 274 * OS1_S1 + 81) =
                prefactor_y * *(b + 274 * OS1_S1 + 54) -
                p_over_q * *(b + 350 * OS1_S1 + 54) +
                one_over_two_q * *(b + 274 * OS1_S1 + 34);
            *(b + 274 * OS1_S1 + 82) = prefactor_y * *(b + 274 * OS1_S1 + 55) -
                                       p_over_q * *(b + 350 * OS1_S1 + 55);
            *(b + 274 * OS1_S1 + 83) =
                prefactor_z * *(b + 274 * OS1_S1 + 55) -
                p_over_q * *(b + 351 * OS1_S1 + 55) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 274 * OS1_S1 + 34);
            *(b + 275 * OS1_S1 + 56) =
                prefactor_x * *(b + 275 * OS1_S1 + 35) -
                p_over_q * *(b + 341 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 275 * OS1_S1 + 20);
            *(b + 275 * OS1_S1 + 57) =
                prefactor_y * *(b + 275 * OS1_S1 + 35) -
                p_over_q * *(b + 352 * OS1_S1 + 35) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 35);
            *(b + 275 * OS1_S1 + 58) = prefactor_z * *(b + 275 * OS1_S1 + 35) -
                                       p_over_q * *(b + 353 * OS1_S1 + 35);
            *(b + 275 * OS1_S1 + 59) =
                prefactor_y * *(b + 275 * OS1_S1 + 36) -
                p_over_q * *(b + 352 * OS1_S1 + 36) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 36) +
                one_over_two_q * *(b + 275 * OS1_S1 + 20);
            *(b + 275 * OS1_S1 + 60) = prefactor_z * *(b + 275 * OS1_S1 + 36) -
                                       p_over_q * *(b + 353 * OS1_S1 + 36);
            *(b + 275 * OS1_S1 + 61) =
                prefactor_z * *(b + 275 * OS1_S1 + 37) -
                p_over_q * *(b + 353 * OS1_S1 + 37) +
                one_over_two_q * *(b + 275 * OS1_S1 + 20);
            *(b + 275 * OS1_S1 + 62) =
                prefactor_x * *(b + 275 * OS1_S1 + 41) -
                p_over_q * *(b + 341 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 275 * OS1_S1 + 26);
            *(b + 275 * OS1_S1 + 63) = prefactor_z * *(b + 275 * OS1_S1 + 38) -
                                       p_over_q * *(b + 353 * OS1_S1 + 38);
            *(b + 275 * OS1_S1 + 64) =
                prefactor_y * *(b + 275 * OS1_S1 + 40) -
                p_over_q * *(b + 352 * OS1_S1 + 40) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 40);
            *(b + 275 * OS1_S1 + 65) =
                prefactor_z * *(b + 275 * OS1_S1 + 40) -
                p_over_q * *(b + 353 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 275 * OS1_S1 + 22);
            *(b + 275 * OS1_S1 + 66) =
                prefactor_x * *(b + 275 * OS1_S1 + 45) -
                p_over_q * *(b + 341 * OS1_S1 + 45) +
                one_over_two_q * *(b + 275 * OS1_S1 + 30);
            *(b + 275 * OS1_S1 + 67) = prefactor_z * *(b + 275 * OS1_S1 + 41) -
                                       p_over_q * *(b + 353 * OS1_S1 + 41);
            *(b + 275 * OS1_S1 + 68) =
                prefactor_z * *(b + 275 * OS1_S1 + 42) -
                p_over_q * *(b + 353 * OS1_S1 + 42) +
                one_over_two_q * *(b + 275 * OS1_S1 + 23);
            *(b + 275 * OS1_S1 + 69) =
                prefactor_y * *(b + 275 * OS1_S1 + 44) -
                p_over_q * *(b + 352 * OS1_S1 + 44) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 44);
            *(b + 275 * OS1_S1 + 70) =
                prefactor_x * *(b + 275 * OS1_S1 + 49) -
                p_over_q * *(b + 341 * OS1_S1 + 49) +
                one_over_two_q * *(b + 275 * OS1_S1 + 34);
            *(b + 275 * OS1_S1 + 71) = prefactor_x * *(b + 275 * OS1_S1 + 50) -
                                       p_over_q * *(b + 341 * OS1_S1 + 50);
            *(b + 275 * OS1_S1 + 72) = prefactor_z * *(b + 275 * OS1_S1 + 45) -
                                       p_over_q * *(b + 353 * OS1_S1 + 45);
            *(b + 275 * OS1_S1 + 73) = prefactor_x * *(b + 275 * OS1_S1 + 52) -
                                       p_over_q * *(b + 341 * OS1_S1 + 52);
            *(b + 275 * OS1_S1 + 74) = prefactor_x * *(b + 275 * OS1_S1 + 53) -
                                       p_over_q * *(b + 341 * OS1_S1 + 53);
            *(b + 275 * OS1_S1 + 75) = prefactor_x * *(b + 275 * OS1_S1 + 54) -
                                       p_over_q * *(b + 341 * OS1_S1 + 54);
            *(b + 275 * OS1_S1 + 76) = prefactor_x * *(b + 275 * OS1_S1 + 55) -
                                       p_over_q * *(b + 341 * OS1_S1 + 55);
            *(b + 275 * OS1_S1 + 77) =
                prefactor_y * *(b + 275 * OS1_S1 + 50) -
                p_over_q * *(b + 352 * OS1_S1 + 50) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 275 * OS1_S1 + 30);
            *(b + 275 * OS1_S1 + 78) = prefactor_z * *(b + 275 * OS1_S1 + 50) -
                                       p_over_q * *(b + 353 * OS1_S1 + 50);
            *(b + 275 * OS1_S1 + 79) =
                prefactor_z * *(b + 275 * OS1_S1 + 51) -
                p_over_q * *(b + 353 * OS1_S1 + 51) +
                one_over_two_q * *(b + 275 * OS1_S1 + 30);
            *(b + 275 * OS1_S1 + 80) =
                prefactor_z * *(b + 275 * OS1_S1 + 52) -
                p_over_q * *(b + 353 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 275 * OS1_S1 + 31);
            *(b + 275 * OS1_S1 + 81) =
                prefactor_y * *(b + 275 * OS1_S1 + 54) -
                p_over_q * *(b + 352 * OS1_S1 + 54) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 54) +
                one_over_two_q * *(b + 275 * OS1_S1 + 34);
            *(b + 275 * OS1_S1 + 82) =
                prefactor_y * *(b + 275 * OS1_S1 + 55) -
                p_over_q * *(b + 352 * OS1_S1 + 55) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 55);
            *(b + 275 * OS1_S1 + 83) =
                prefactor_z * *(b + 275 * OS1_S1 + 55) -
                p_over_q * *(b + 353 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 275 * OS1_S1 + 34);
            *(b + 276 * OS1_S1 + 56) =
                prefactor_x * *(b + 276 * OS1_S1 + 35) -
                p_over_q * *(b + 342 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 276 * OS1_S1 + 20);
            *(b + 276 * OS1_S1 + 57) =
                prefactor_y * *(b + 276 * OS1_S1 + 35) -
                p_over_q * *(b + 353 * OS1_S1 + 35) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 35);
            *(b + 276 * OS1_S1 + 58) =
                prefactor_z * *(b + 276 * OS1_S1 + 35) -
                p_over_q * *(b + 354 * OS1_S1 + 35) +
                one_over_two_q * *(b + 210 * OS1_S1 + 35);
            *(b + 276 * OS1_S1 + 59) =
                prefactor_y * *(b + 276 * OS1_S1 + 36) -
                p_over_q * *(b + 353 * OS1_S1 + 36) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 36) +
                one_over_two_q * *(b + 276 * OS1_S1 + 20);
            *(b + 276 * OS1_S1 + 60) =
                prefactor_z * *(b + 276 * OS1_S1 + 36) -
                p_over_q * *(b + 354 * OS1_S1 + 36) +
                one_over_two_q * *(b + 210 * OS1_S1 + 36);
            *(b + 276 * OS1_S1 + 61) =
                prefactor_z * *(b + 276 * OS1_S1 + 37) -
                p_over_q * *(b + 354 * OS1_S1 + 37) +
                one_over_two_q * *(b + 210 * OS1_S1 + 37) +
                one_over_two_q * *(b + 276 * OS1_S1 + 20);
            *(b + 276 * OS1_S1 + 62) =
                prefactor_x * *(b + 276 * OS1_S1 + 41) -
                p_over_q * *(b + 342 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 26);
            *(b + 276 * OS1_S1 + 63) =
                prefactor_z * *(b + 276 * OS1_S1 + 38) -
                p_over_q * *(b + 354 * OS1_S1 + 38) +
                one_over_two_q * *(b + 210 * OS1_S1 + 38);
            *(b + 276 * OS1_S1 + 64) =
                prefactor_y * *(b + 276 * OS1_S1 + 40) -
                p_over_q * *(b + 353 * OS1_S1 + 40) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 40);
            *(b + 276 * OS1_S1 + 65) =
                prefactor_x * *(b + 276 * OS1_S1 + 44) -
                p_over_q * *(b + 342 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 29);
            *(b + 276 * OS1_S1 + 66) =
                prefactor_x * *(b + 276 * OS1_S1 + 45) -
                p_over_q * *(b + 342 * OS1_S1 + 45) +
                one_over_two_q * *(b + 276 * OS1_S1 + 30);
            *(b + 276 * OS1_S1 + 67) =
                prefactor_z * *(b + 276 * OS1_S1 + 41) -
                p_over_q * *(b + 354 * OS1_S1 + 41) +
                one_over_two_q * *(b + 210 * OS1_S1 + 41);
            *(b + 276 * OS1_S1 + 68) =
                prefactor_x * *(b + 276 * OS1_S1 + 47) -
                p_over_q * *(b + 342 * OS1_S1 + 47) +
                one_over_two_q * *(b + 276 * OS1_S1 + 32);
            *(b + 276 * OS1_S1 + 69) =
                prefactor_y * *(b + 276 * OS1_S1 + 44) -
                p_over_q * *(b + 353 * OS1_S1 + 44) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 44);
            *(b + 276 * OS1_S1 + 70) =
                prefactor_x * *(b + 276 * OS1_S1 + 49) -
                p_over_q * *(b + 342 * OS1_S1 + 49) +
                one_over_two_q * *(b + 276 * OS1_S1 + 34);
            *(b + 276 * OS1_S1 + 71) = prefactor_x * *(b + 276 * OS1_S1 + 50) -
                                       p_over_q * *(b + 342 * OS1_S1 + 50);
            *(b + 276 * OS1_S1 + 72) = prefactor_x * *(b + 276 * OS1_S1 + 51) -
                                       p_over_q * *(b + 342 * OS1_S1 + 51);
            *(b + 276 * OS1_S1 + 73) = prefactor_x * *(b + 276 * OS1_S1 + 52) -
                                       p_over_q * *(b + 342 * OS1_S1 + 52);
            *(b + 276 * OS1_S1 + 74) = prefactor_x * *(b + 276 * OS1_S1 + 53) -
                                       p_over_q * *(b + 342 * OS1_S1 + 53);
            *(b + 276 * OS1_S1 + 75) = prefactor_x * *(b + 276 * OS1_S1 + 54) -
                                       p_over_q * *(b + 342 * OS1_S1 + 54);
            *(b + 276 * OS1_S1 + 76) = prefactor_x * *(b + 276 * OS1_S1 + 55) -
                                       p_over_q * *(b + 342 * OS1_S1 + 55);
            *(b + 276 * OS1_S1 + 77) =
                prefactor_y * *(b + 276 * OS1_S1 + 50) -
                p_over_q * *(b + 353 * OS1_S1 + 50) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 276 * OS1_S1 + 30);
            *(b + 276 * OS1_S1 + 78) =
                prefactor_z * *(b + 276 * OS1_S1 + 50) -
                p_over_q * *(b + 354 * OS1_S1 + 50) +
                one_over_two_q * *(b + 210 * OS1_S1 + 50);
            *(b + 276 * OS1_S1 + 79) =
                prefactor_z * *(b + 276 * OS1_S1 + 51) -
                p_over_q * *(b + 354 * OS1_S1 + 51) +
                one_over_two_q * *(b + 210 * OS1_S1 + 51) +
                one_over_two_q * *(b + 276 * OS1_S1 + 30);
            *(b + 276 * OS1_S1 + 80) =
                prefactor_z * *(b + 276 * OS1_S1 + 52) -
                p_over_q * *(b + 354 * OS1_S1 + 52) +
                one_over_two_q * *(b + 210 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 31);
            *(b + 276 * OS1_S1 + 81) =
                prefactor_y * *(b + 276 * OS1_S1 + 54) -
                p_over_q * *(b + 353 * OS1_S1 + 54) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 54) +
                one_over_two_q * *(b + 276 * OS1_S1 + 34);
            *(b + 276 * OS1_S1 + 82) =
                prefactor_y * *(b + 276 * OS1_S1 + 55) -
                p_over_q * *(b + 353 * OS1_S1 + 55) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 55);
            *(b + 276 * OS1_S1 + 83) =
                prefactor_z * *(b + 276 * OS1_S1 + 55) -
                p_over_q * *(b + 354 * OS1_S1 + 55) +
                one_over_two_q * *(b + 210 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 276 * OS1_S1 + 34);
            *(b + 277 * OS1_S1 + 56) =
                prefactor_x * *(b + 277 * OS1_S1 + 35) -
                p_over_q * *(b + 343 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 277 * OS1_S1 + 20);
            *(b + 277 * OS1_S1 + 57) =
                prefactor_y * *(b + 277 * OS1_S1 + 35) -
                p_over_q * *(b + 354 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 35);
            *(b + 277 * OS1_S1 + 58) =
                prefactor_z * *(b + 277 * OS1_S1 + 35) -
                p_over_q * *(b + 355 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 35);
            *(b + 277 * OS1_S1 + 59) =
                prefactor_y * *(b + 277 * OS1_S1 + 36) -
                p_over_q * *(b + 354 * OS1_S1 + 36) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 36) +
                one_over_two_q * *(b + 277 * OS1_S1 + 20);
            *(b + 277 * OS1_S1 + 60) =
                prefactor_z * *(b + 277 * OS1_S1 + 36) -
                p_over_q * *(b + 355 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 36);
            *(b + 277 * OS1_S1 + 61) =
                prefactor_z * *(b + 277 * OS1_S1 + 37) -
                p_over_q * *(b + 355 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 37) +
                one_over_two_q * *(b + 277 * OS1_S1 + 20);
            *(b + 277 * OS1_S1 + 62) =
                prefactor_x * *(b + 277 * OS1_S1 + 41) -
                p_over_q * *(b + 343 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 277 * OS1_S1 + 26);
            *(b + 277 * OS1_S1 + 63) =
                prefactor_z * *(b + 277 * OS1_S1 + 38) -
                p_over_q * *(b + 355 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 38);
            *(b + 277 * OS1_S1 + 64) =
                prefactor_y * *(b + 277 * OS1_S1 + 40) -
                p_over_q * *(b + 354 * OS1_S1 + 40) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 40);
            *(b + 277 * OS1_S1 + 65) =
                prefactor_x * *(b + 277 * OS1_S1 + 44) -
                p_over_q * *(b + 343 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 277 * OS1_S1 + 29);
            *(b + 277 * OS1_S1 + 66) =
                prefactor_x * *(b + 277 * OS1_S1 + 45) -
                p_over_q * *(b + 343 * OS1_S1 + 45) +
                one_over_two_q * *(b + 277 * OS1_S1 + 30);
            *(b + 277 * OS1_S1 + 67) =
                prefactor_z * *(b + 277 * OS1_S1 + 41) -
                p_over_q * *(b + 355 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 41);
            *(b + 277 * OS1_S1 + 68) =
                prefactor_x * *(b + 277 * OS1_S1 + 47) -
                p_over_q * *(b + 343 * OS1_S1 + 47) +
                one_over_two_q * *(b + 277 * OS1_S1 + 32);
            *(b + 277 * OS1_S1 + 69) =
                prefactor_y * *(b + 277 * OS1_S1 + 44) -
                p_over_q * *(b + 354 * OS1_S1 + 44) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 44);
            *(b + 277 * OS1_S1 + 70) =
                prefactor_x * *(b + 277 * OS1_S1 + 49) -
                p_over_q * *(b + 343 * OS1_S1 + 49) +
                one_over_two_q * *(b + 277 * OS1_S1 + 34);
            *(b + 277 * OS1_S1 + 71) = prefactor_x * *(b + 277 * OS1_S1 + 50) -
                                       p_over_q * *(b + 343 * OS1_S1 + 50);
            *(b + 277 * OS1_S1 + 72) = prefactor_x * *(b + 277 * OS1_S1 + 51) -
                                       p_over_q * *(b + 343 * OS1_S1 + 51);
            *(b + 277 * OS1_S1 + 73) = prefactor_x * *(b + 277 * OS1_S1 + 52) -
                                       p_over_q * *(b + 343 * OS1_S1 + 52);
            *(b + 277 * OS1_S1 + 74) = prefactor_x * *(b + 277 * OS1_S1 + 53) -
                                       p_over_q * *(b + 343 * OS1_S1 + 53);
            *(b + 277 * OS1_S1 + 75) = prefactor_x * *(b + 277 * OS1_S1 + 54) -
                                       p_over_q * *(b + 343 * OS1_S1 + 54);
            *(b + 277 * OS1_S1 + 76) = prefactor_x * *(b + 277 * OS1_S1 + 55) -
                                       p_over_q * *(b + 343 * OS1_S1 + 55);
            *(b + 277 * OS1_S1 + 77) =
                prefactor_y * *(b + 277 * OS1_S1 + 50) -
                p_over_q * *(b + 354 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 277 * OS1_S1 + 30);
            *(b + 277 * OS1_S1 + 78) =
                prefactor_z * *(b + 277 * OS1_S1 + 50) -
                p_over_q * *(b + 355 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 50);
            *(b + 277 * OS1_S1 + 79) =
                prefactor_z * *(b + 277 * OS1_S1 + 51) -
                p_over_q * *(b + 355 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 51) +
                one_over_two_q * *(b + 277 * OS1_S1 + 30);
            *(b + 277 * OS1_S1 + 80) =
                prefactor_z * *(b + 277 * OS1_S1 + 52) -
                p_over_q * *(b + 355 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 277 * OS1_S1 + 31);
            *(b + 277 * OS1_S1 + 81) =
                prefactor_y * *(b + 277 * OS1_S1 + 54) -
                p_over_q * *(b + 354 * OS1_S1 + 54) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 54) +
                one_over_two_q * *(b + 277 * OS1_S1 + 34);
            *(b + 277 * OS1_S1 + 82) =
                prefactor_y * *(b + 277 * OS1_S1 + 55) -
                p_over_q * *(b + 354 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 55);
            *(b + 277 * OS1_S1 + 83) =
                prefactor_z * *(b + 277 * OS1_S1 + 55) -
                p_over_q * *(b + 355 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 277 * OS1_S1 + 34);
            *(b + 278 * OS1_S1 + 56) =
                prefactor_x * *(b + 278 * OS1_S1 + 35) -
                p_over_q * *(b + 344 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 278 * OS1_S1 + 20);
            *(b + 278 * OS1_S1 + 57) =
                prefactor_y * *(b + 278 * OS1_S1 + 35) -
                p_over_q * *(b + 355 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 35);
            *(b + 278 * OS1_S1 + 58) =
                prefactor_z * *(b + 278 * OS1_S1 + 35) -
                p_over_q * *(b + 356 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 35);
            *(b + 278 * OS1_S1 + 59) =
                prefactor_y * *(b + 278 * OS1_S1 + 36) -
                p_over_q * *(b + 355 * OS1_S1 + 36) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 36) +
                one_over_two_q * *(b + 278 * OS1_S1 + 20);
            *(b + 278 * OS1_S1 + 60) =
                prefactor_z * *(b + 278 * OS1_S1 + 36) -
                p_over_q * *(b + 356 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 36);
            *(b + 278 * OS1_S1 + 61) =
                prefactor_z * *(b + 278 * OS1_S1 + 37) -
                p_over_q * *(b + 356 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 37) +
                one_over_two_q * *(b + 278 * OS1_S1 + 20);
            *(b + 278 * OS1_S1 + 62) =
                prefactor_x * *(b + 278 * OS1_S1 + 41) -
                p_over_q * *(b + 344 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 278 * OS1_S1 + 26);
            *(b + 278 * OS1_S1 + 63) =
                prefactor_z * *(b + 278 * OS1_S1 + 38) -
                p_over_q * *(b + 356 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 38);
            *(b + 278 * OS1_S1 + 64) =
                prefactor_y * *(b + 278 * OS1_S1 + 40) -
                p_over_q * *(b + 355 * OS1_S1 + 40) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 40);
            *(b + 278 * OS1_S1 + 65) =
                prefactor_x * *(b + 278 * OS1_S1 + 44) -
                p_over_q * *(b + 344 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 278 * OS1_S1 + 29);
            *(b + 278 * OS1_S1 + 66) =
                prefactor_x * *(b + 278 * OS1_S1 + 45) -
                p_over_q * *(b + 344 * OS1_S1 + 45) +
                one_over_two_q * *(b + 278 * OS1_S1 + 30);
            *(b + 278 * OS1_S1 + 67) =
                prefactor_z * *(b + 278 * OS1_S1 + 41) -
                p_over_q * *(b + 356 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 41);
            *(b + 278 * OS1_S1 + 68) =
                prefactor_x * *(b + 278 * OS1_S1 + 47) -
                p_over_q * *(b + 344 * OS1_S1 + 47) +
                one_over_two_q * *(b + 278 * OS1_S1 + 32);
            *(b + 278 * OS1_S1 + 69) =
                prefactor_y * *(b + 278 * OS1_S1 + 44) -
                p_over_q * *(b + 355 * OS1_S1 + 44) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 44);
            *(b + 278 * OS1_S1 + 70) =
                prefactor_x * *(b + 278 * OS1_S1 + 49) -
                p_over_q * *(b + 344 * OS1_S1 + 49) +
                one_over_two_q * *(b + 278 * OS1_S1 + 34);
            *(b + 278 * OS1_S1 + 71) = prefactor_x * *(b + 278 * OS1_S1 + 50) -
                                       p_over_q * *(b + 344 * OS1_S1 + 50);
            *(b + 278 * OS1_S1 + 72) = prefactor_x * *(b + 278 * OS1_S1 + 51) -
                                       p_over_q * *(b + 344 * OS1_S1 + 51);
            *(b + 278 * OS1_S1 + 73) = prefactor_x * *(b + 278 * OS1_S1 + 52) -
                                       p_over_q * *(b + 344 * OS1_S1 + 52);
            *(b + 278 * OS1_S1 + 74) = prefactor_x * *(b + 278 * OS1_S1 + 53) -
                                       p_over_q * *(b + 344 * OS1_S1 + 53);
            *(b + 278 * OS1_S1 + 75) = prefactor_x * *(b + 278 * OS1_S1 + 54) -
                                       p_over_q * *(b + 344 * OS1_S1 + 54);
            *(b + 278 * OS1_S1 + 76) = prefactor_x * *(b + 278 * OS1_S1 + 55) -
                                       p_over_q * *(b + 344 * OS1_S1 + 55);
            *(b + 278 * OS1_S1 + 77) =
                prefactor_y * *(b + 278 * OS1_S1 + 50) -
                p_over_q * *(b + 355 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 278 * OS1_S1 + 30);
            *(b + 278 * OS1_S1 + 78) =
                prefactor_z * *(b + 278 * OS1_S1 + 50) -
                p_over_q * *(b + 356 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 50);
            *(b + 278 * OS1_S1 + 79) =
                prefactor_z * *(b + 278 * OS1_S1 + 51) -
                p_over_q * *(b + 356 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 51) +
                one_over_two_q * *(b + 278 * OS1_S1 + 30);
            *(b + 278 * OS1_S1 + 80) =
                prefactor_z * *(b + 278 * OS1_S1 + 52) -
                p_over_q * *(b + 356 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 278 * OS1_S1 + 31);
            *(b + 278 * OS1_S1 + 81) =
                prefactor_y * *(b + 278 * OS1_S1 + 54) -
                p_over_q * *(b + 355 * OS1_S1 + 54) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 54) +
                one_over_two_q * *(b + 278 * OS1_S1 + 34);
            *(b + 278 * OS1_S1 + 82) =
                prefactor_y * *(b + 278 * OS1_S1 + 55) -
                p_over_q * *(b + 355 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 55);
            *(b + 278 * OS1_S1 + 83) =
                prefactor_z * *(b + 278 * OS1_S1 + 55) -
                p_over_q * *(b + 356 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 278 * OS1_S1 + 34);
            *(b + 279 * OS1_S1 + 56) =
                prefactor_x * *(b + 279 * OS1_S1 + 35) -
                p_over_q * *(b + 345 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 20);
            *(b + 279 * OS1_S1 + 57) =
                prefactor_y * *(b + 279 * OS1_S1 + 35) -
                p_over_q * *(b + 356 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 35);
            *(b + 279 * OS1_S1 + 58) =
                prefactor_z * *(b + 279 * OS1_S1 + 35) -
                p_over_q * *(b + 357 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 35);
            *(b + 279 * OS1_S1 + 59) =
                prefactor_y * *(b + 279 * OS1_S1 + 36) -
                p_over_q * *(b + 356 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 36) +
                one_over_two_q * *(b + 279 * OS1_S1 + 20);
            *(b + 279 * OS1_S1 + 60) =
                prefactor_z * *(b + 279 * OS1_S1 + 36) -
                p_over_q * *(b + 357 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 36);
            *(b + 279 * OS1_S1 + 61) =
                prefactor_z * *(b + 279 * OS1_S1 + 37) -
                p_over_q * *(b + 357 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 37) +
                one_over_two_q * *(b + 279 * OS1_S1 + 20);
            *(b + 279 * OS1_S1 + 62) =
                prefactor_x * *(b + 279 * OS1_S1 + 41) -
                p_over_q * *(b + 345 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 279 * OS1_S1 + 26);
            *(b + 279 * OS1_S1 + 63) =
                prefactor_z * *(b + 279 * OS1_S1 + 38) -
                p_over_q * *(b + 357 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 38);
            *(b + 279 * OS1_S1 + 64) =
                prefactor_y * *(b + 279 * OS1_S1 + 40) -
                p_over_q * *(b + 356 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 40);
            *(b + 279 * OS1_S1 + 65) =
                prefactor_x * *(b + 279 * OS1_S1 + 44) -
                p_over_q * *(b + 345 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 279 * OS1_S1 + 29);
            *(b + 279 * OS1_S1 + 66) =
                prefactor_x * *(b + 279 * OS1_S1 + 45) -
                p_over_q * *(b + 345 * OS1_S1 + 45) +
                one_over_two_q * *(b + 279 * OS1_S1 + 30);
            *(b + 279 * OS1_S1 + 67) =
                prefactor_z * *(b + 279 * OS1_S1 + 41) -
                p_over_q * *(b + 357 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 41);
            *(b + 279 * OS1_S1 + 68) =
                prefactor_x * *(b + 279 * OS1_S1 + 47) -
                p_over_q * *(b + 345 * OS1_S1 + 47) +
                one_over_two_q * *(b + 279 * OS1_S1 + 32);
            *(b + 279 * OS1_S1 + 69) =
                prefactor_y * *(b + 279 * OS1_S1 + 44) -
                p_over_q * *(b + 356 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 44);
            *(b + 279 * OS1_S1 + 70) =
                prefactor_x * *(b + 279 * OS1_S1 + 49) -
                p_over_q * *(b + 345 * OS1_S1 + 49) +
                one_over_two_q * *(b + 279 * OS1_S1 + 34);
            *(b + 279 * OS1_S1 + 71) = prefactor_x * *(b + 279 * OS1_S1 + 50) -
                                       p_over_q * *(b + 345 * OS1_S1 + 50);
            *(b + 279 * OS1_S1 + 72) = prefactor_x * *(b + 279 * OS1_S1 + 51) -
                                       p_over_q * *(b + 345 * OS1_S1 + 51);
            *(b + 279 * OS1_S1 + 73) = prefactor_x * *(b + 279 * OS1_S1 + 52) -
                                       p_over_q * *(b + 345 * OS1_S1 + 52);
            *(b + 279 * OS1_S1 + 74) = prefactor_x * *(b + 279 * OS1_S1 + 53) -
                                       p_over_q * *(b + 345 * OS1_S1 + 53);
            *(b + 279 * OS1_S1 + 75) = prefactor_x * *(b + 279 * OS1_S1 + 54) -
                                       p_over_q * *(b + 345 * OS1_S1 + 54);
            *(b + 279 * OS1_S1 + 76) = prefactor_x * *(b + 279 * OS1_S1 + 55) -
                                       p_over_q * *(b + 345 * OS1_S1 + 55);
            *(b + 279 * OS1_S1 + 77) =
                prefactor_y * *(b + 279 * OS1_S1 + 50) -
                p_over_q * *(b + 356 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 30);
            *(b + 279 * OS1_S1 + 78) =
                prefactor_z * *(b + 279 * OS1_S1 + 50) -
                p_over_q * *(b + 357 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 50);
            *(b + 279 * OS1_S1 + 79) =
                prefactor_z * *(b + 279 * OS1_S1 + 51) -
                p_over_q * *(b + 357 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 51) +
                one_over_two_q * *(b + 279 * OS1_S1 + 30);
            *(b + 279 * OS1_S1 + 80) =
                prefactor_z * *(b + 279 * OS1_S1 + 52) -
                p_over_q * *(b + 357 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 279 * OS1_S1 + 31);
            *(b + 279 * OS1_S1 + 81) =
                prefactor_y * *(b + 279 * OS1_S1 + 54) -
                p_over_q * *(b + 356 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 54) +
                one_over_two_q * *(b + 279 * OS1_S1 + 34);
            *(b + 279 * OS1_S1 + 82) =
                prefactor_y * *(b + 279 * OS1_S1 + 55) -
                p_over_q * *(b + 356 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 55);
            *(b + 279 * OS1_S1 + 83) =
                prefactor_z * *(b + 279 * OS1_S1 + 55) -
                p_over_q * *(b + 357 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 34);
            *(b + 280 * OS1_S1 + 56) =
                prefactor_x * *(b + 280 * OS1_S1 + 35) -
                p_over_q * *(b + 346 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 280 * OS1_S1 + 20);
            *(b + 280 * OS1_S1 + 57) =
                prefactor_y * *(b + 280 * OS1_S1 + 35) -
                p_over_q * *(b + 357 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 35);
            *(b + 280 * OS1_S1 + 58) =
                prefactor_z * *(b + 280 * OS1_S1 + 35) -
                p_over_q * *(b + 358 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 35);
            *(b + 280 * OS1_S1 + 59) =
                prefactor_y * *(b + 280 * OS1_S1 + 36) -
                p_over_q * *(b + 357 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 36) +
                one_over_two_q * *(b + 280 * OS1_S1 + 20);
            *(b + 280 * OS1_S1 + 60) =
                prefactor_z * *(b + 280 * OS1_S1 + 36) -
                p_over_q * *(b + 358 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 36);
            *(b + 280 * OS1_S1 + 61) =
                prefactor_z * *(b + 280 * OS1_S1 + 37) -
                p_over_q * *(b + 358 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 37) +
                one_over_two_q * *(b + 280 * OS1_S1 + 20);
            *(b + 280 * OS1_S1 + 62) =
                prefactor_x * *(b + 280 * OS1_S1 + 41) -
                p_over_q * *(b + 346 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 280 * OS1_S1 + 26);
            *(b + 280 * OS1_S1 + 63) =
                prefactor_z * *(b + 280 * OS1_S1 + 38) -
                p_over_q * *(b + 358 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 38);
            *(b + 280 * OS1_S1 + 64) =
                prefactor_y * *(b + 280 * OS1_S1 + 40) -
                p_over_q * *(b + 357 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 40);
            *(b + 280 * OS1_S1 + 65) =
                prefactor_x * *(b + 280 * OS1_S1 + 44) -
                p_over_q * *(b + 346 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 280 * OS1_S1 + 29);
            *(b + 280 * OS1_S1 + 66) =
                prefactor_x * *(b + 280 * OS1_S1 + 45) -
                p_over_q * *(b + 346 * OS1_S1 + 45) +
                one_over_two_q * *(b + 280 * OS1_S1 + 30);
            *(b + 280 * OS1_S1 + 67) =
                prefactor_z * *(b + 280 * OS1_S1 + 41) -
                p_over_q * *(b + 358 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 41);
            *(b + 280 * OS1_S1 + 68) =
                prefactor_x * *(b + 280 * OS1_S1 + 47) -
                p_over_q * *(b + 346 * OS1_S1 + 47) +
                one_over_two_q * *(b + 280 * OS1_S1 + 32);
            *(b + 280 * OS1_S1 + 69) =
                prefactor_y * *(b + 280 * OS1_S1 + 44) -
                p_over_q * *(b + 357 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 44);
            *(b + 280 * OS1_S1 + 70) =
                prefactor_x * *(b + 280 * OS1_S1 + 49) -
                p_over_q * *(b + 346 * OS1_S1 + 49) +
                one_over_two_q * *(b + 280 * OS1_S1 + 34);
            *(b + 280 * OS1_S1 + 71) = prefactor_x * *(b + 280 * OS1_S1 + 50) -
                                       p_over_q * *(b + 346 * OS1_S1 + 50);
            *(b + 280 * OS1_S1 + 72) = prefactor_x * *(b + 280 * OS1_S1 + 51) -
                                       p_over_q * *(b + 346 * OS1_S1 + 51);
            *(b + 280 * OS1_S1 + 73) = prefactor_x * *(b + 280 * OS1_S1 + 52) -
                                       p_over_q * *(b + 346 * OS1_S1 + 52);
            *(b + 280 * OS1_S1 + 74) = prefactor_x * *(b + 280 * OS1_S1 + 53) -
                                       p_over_q * *(b + 346 * OS1_S1 + 53);
            *(b + 280 * OS1_S1 + 75) = prefactor_x * *(b + 280 * OS1_S1 + 54) -
                                       p_over_q * *(b + 346 * OS1_S1 + 54);
            *(b + 280 * OS1_S1 + 76) = prefactor_x * *(b + 280 * OS1_S1 + 55) -
                                       p_over_q * *(b + 346 * OS1_S1 + 55);
            *(b + 280 * OS1_S1 + 77) =
                prefactor_y * *(b + 280 * OS1_S1 + 50) -
                p_over_q * *(b + 357 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 280 * OS1_S1 + 30);
            *(b + 280 * OS1_S1 + 78) =
                prefactor_z * *(b + 280 * OS1_S1 + 50) -
                p_over_q * *(b + 358 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 50);
            *(b + 280 * OS1_S1 + 79) =
                prefactor_z * *(b + 280 * OS1_S1 + 51) -
                p_over_q * *(b + 358 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 51) +
                one_over_two_q * *(b + 280 * OS1_S1 + 30);
            *(b + 280 * OS1_S1 + 80) =
                prefactor_z * *(b + 280 * OS1_S1 + 52) -
                p_over_q * *(b + 358 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 280 * OS1_S1 + 31);
            *(b + 280 * OS1_S1 + 81) =
                prefactor_y * *(b + 280 * OS1_S1 + 54) -
                p_over_q * *(b + 357 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 54) +
                one_over_two_q * *(b + 280 * OS1_S1 + 34);
            *(b + 280 * OS1_S1 + 82) =
                prefactor_y * *(b + 280 * OS1_S1 + 55) -
                p_over_q * *(b + 357 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 55);
            *(b + 280 * OS1_S1 + 83) =
                prefactor_z * *(b + 280 * OS1_S1 + 55) -
                p_over_q * *(b + 358 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 280 * OS1_S1 + 34);
            *(b + 281 * OS1_S1 + 56) =
                prefactor_x * *(b + 281 * OS1_S1 + 35) -
                p_over_q * *(b + 347 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 20);
            *(b + 281 * OS1_S1 + 57) =
                prefactor_y * *(b + 281 * OS1_S1 + 35) -
                p_over_q * *(b + 358 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 35);
            *(b + 281 * OS1_S1 + 58) =
                prefactor_z * *(b + 281 * OS1_S1 + 35) -
                p_over_q * *(b + 359 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 35);
            *(b + 281 * OS1_S1 + 59) =
                prefactor_y * *(b + 281 * OS1_S1 + 36) -
                p_over_q * *(b + 358 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 36) +
                one_over_two_q * *(b + 281 * OS1_S1 + 20);
            *(b + 281 * OS1_S1 + 60) =
                prefactor_y * *(b + 281 * OS1_S1 + 37) -
                p_over_q * *(b + 358 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 37);
            *(b + 281 * OS1_S1 + 61) =
                prefactor_z * *(b + 281 * OS1_S1 + 37) -
                p_over_q * *(b + 359 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 37) +
                one_over_two_q * *(b + 281 * OS1_S1 + 20);
            *(b + 281 * OS1_S1 + 62) =
                prefactor_x * *(b + 281 * OS1_S1 + 41) -
                p_over_q * *(b + 347 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 281 * OS1_S1 + 26);
            *(b + 281 * OS1_S1 + 63) =
                prefactor_z * *(b + 281 * OS1_S1 + 38) -
                p_over_q * *(b + 359 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 38);
            *(b + 281 * OS1_S1 + 64) =
                prefactor_y * *(b + 281 * OS1_S1 + 40) -
                p_over_q * *(b + 358 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 40);
            *(b + 281 * OS1_S1 + 65) =
                prefactor_x * *(b + 281 * OS1_S1 + 44) -
                p_over_q * *(b + 347 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 281 * OS1_S1 + 29);
            *(b + 281 * OS1_S1 + 66) =
                prefactor_x * *(b + 281 * OS1_S1 + 45) -
                p_over_q * *(b + 347 * OS1_S1 + 45) +
                one_over_two_q * *(b + 281 * OS1_S1 + 30);
            *(b + 281 * OS1_S1 + 67) =
                prefactor_z * *(b + 281 * OS1_S1 + 41) -
                p_over_q * *(b + 359 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 41);
            *(b + 281 * OS1_S1 + 68) =
                prefactor_x * *(b + 281 * OS1_S1 + 47) -
                p_over_q * *(b + 347 * OS1_S1 + 47) +
                one_over_two_q * *(b + 281 * OS1_S1 + 32);
            *(b + 281 * OS1_S1 + 69) =
                prefactor_y * *(b + 281 * OS1_S1 + 44) -
                p_over_q * *(b + 358 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 44);
            *(b + 281 * OS1_S1 + 70) =
                prefactor_x * *(b + 281 * OS1_S1 + 49) -
                p_over_q * *(b + 347 * OS1_S1 + 49) +
                one_over_two_q * *(b + 281 * OS1_S1 + 34);
            *(b + 281 * OS1_S1 + 71) = prefactor_x * *(b + 281 * OS1_S1 + 50) -
                                       p_over_q * *(b + 347 * OS1_S1 + 50);
            *(b + 281 * OS1_S1 + 72) = prefactor_x * *(b + 281 * OS1_S1 + 51) -
                                       p_over_q * *(b + 347 * OS1_S1 + 51);
            *(b + 281 * OS1_S1 + 73) = prefactor_x * *(b + 281 * OS1_S1 + 52) -
                                       p_over_q * *(b + 347 * OS1_S1 + 52);
            *(b + 281 * OS1_S1 + 74) = prefactor_x * *(b + 281 * OS1_S1 + 53) -
                                       p_over_q * *(b + 347 * OS1_S1 + 53);
            *(b + 281 * OS1_S1 + 75) = prefactor_x * *(b + 281 * OS1_S1 + 54) -
                                       p_over_q * *(b + 347 * OS1_S1 + 54);
            *(b + 281 * OS1_S1 + 76) = prefactor_x * *(b + 281 * OS1_S1 + 55) -
                                       p_over_q * *(b + 347 * OS1_S1 + 55);
            *(b + 281 * OS1_S1 + 77) =
                prefactor_y * *(b + 281 * OS1_S1 + 50) -
                p_over_q * *(b + 358 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 30);
            *(b + 281 * OS1_S1 + 78) =
                prefactor_z * *(b + 281 * OS1_S1 + 50) -
                p_over_q * *(b + 359 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 50);
            *(b + 281 * OS1_S1 + 79) =
                prefactor_z * *(b + 281 * OS1_S1 + 51) -
                p_over_q * *(b + 359 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 51) +
                one_over_two_q * *(b + 281 * OS1_S1 + 30);
            *(b + 281 * OS1_S1 + 80) =
                prefactor_y * *(b + 281 * OS1_S1 + 53) -
                p_over_q * *(b + 358 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 281 * OS1_S1 + 33);
            *(b + 281 * OS1_S1 + 81) =
                prefactor_y * *(b + 281 * OS1_S1 + 54) -
                p_over_q * *(b + 358 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 54) +
                one_over_two_q * *(b + 281 * OS1_S1 + 34);
            *(b + 281 * OS1_S1 + 82) =
                prefactor_y * *(b + 281 * OS1_S1 + 55) -
                p_over_q * *(b + 358 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 55);
            *(b + 281 * OS1_S1 + 83) =
                prefactor_z * *(b + 281 * OS1_S1 + 55) -
                p_over_q * *(b + 359 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 34);
            *(b + 282 * OS1_S1 + 56) =
                prefactor_x * *(b + 282 * OS1_S1 + 35) -
                p_over_q * *(b + 348 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 282 * OS1_S1 + 20);
            *(b + 282 * OS1_S1 + 57) =
                prefactor_y * *(b + 282 * OS1_S1 + 35) -
                p_over_q * *(b + 359 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 35);
            *(b + 282 * OS1_S1 + 58) =
                prefactor_z * *(b + 282 * OS1_S1 + 35) -
                p_over_q * *(b + 360 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 35);
            *(b + 282 * OS1_S1 + 59) =
                prefactor_y * *(b + 282 * OS1_S1 + 36) -
                p_over_q * *(b + 359 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 36) +
                one_over_two_q * *(b + 282 * OS1_S1 + 20);
            *(b + 282 * OS1_S1 + 60) =
                prefactor_y * *(b + 282 * OS1_S1 + 37) -
                p_over_q * *(b + 359 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 37);
            *(b + 282 * OS1_S1 + 61) =
                prefactor_z * *(b + 282 * OS1_S1 + 37) -
                p_over_q * *(b + 360 * OS1_S1 + 37) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 37) +
                one_over_two_q * *(b + 282 * OS1_S1 + 20);
            *(b + 282 * OS1_S1 + 62) =
                prefactor_x * *(b + 282 * OS1_S1 + 41) -
                p_over_q * *(b + 348 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 282 * OS1_S1 + 26);
            *(b + 282 * OS1_S1 + 63) =
                prefactor_z * *(b + 282 * OS1_S1 + 38) -
                p_over_q * *(b + 360 * OS1_S1 + 38) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 38);
            *(b + 282 * OS1_S1 + 64) =
                prefactor_y * *(b + 282 * OS1_S1 + 40) -
                p_over_q * *(b + 359 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 40);
            *(b + 282 * OS1_S1 + 65) =
                prefactor_x * *(b + 282 * OS1_S1 + 44) -
                p_over_q * *(b + 348 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 282 * OS1_S1 + 29);
            *(b + 282 * OS1_S1 + 66) =
                prefactor_x * *(b + 282 * OS1_S1 + 45) -
                p_over_q * *(b + 348 * OS1_S1 + 45) +
                one_over_two_q * *(b + 282 * OS1_S1 + 30);
            *(b + 282 * OS1_S1 + 67) =
                prefactor_z * *(b + 282 * OS1_S1 + 41) -
                p_over_q * *(b + 360 * OS1_S1 + 41) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 41);
            *(b + 282 * OS1_S1 + 68) =
                prefactor_x * *(b + 282 * OS1_S1 + 47) -
                p_over_q * *(b + 348 * OS1_S1 + 47) +
                one_over_two_q * *(b + 282 * OS1_S1 + 32);
            *(b + 282 * OS1_S1 + 69) =
                prefactor_y * *(b + 282 * OS1_S1 + 44) -
                p_over_q * *(b + 359 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 44);
            *(b + 282 * OS1_S1 + 70) =
                prefactor_x * *(b + 282 * OS1_S1 + 49) -
                p_over_q * *(b + 348 * OS1_S1 + 49) +
                one_over_two_q * *(b + 282 * OS1_S1 + 34);
            *(b + 282 * OS1_S1 + 71) = prefactor_x * *(b + 282 * OS1_S1 + 50) -
                                       p_over_q * *(b + 348 * OS1_S1 + 50);
            *(b + 282 * OS1_S1 + 72) = prefactor_x * *(b + 282 * OS1_S1 + 51) -
                                       p_over_q * *(b + 348 * OS1_S1 + 51);
            *(b + 282 * OS1_S1 + 73) = prefactor_x * *(b + 282 * OS1_S1 + 52) -
                                       p_over_q * *(b + 348 * OS1_S1 + 52);
            *(b + 282 * OS1_S1 + 74) = prefactor_x * *(b + 282 * OS1_S1 + 53) -
                                       p_over_q * *(b + 348 * OS1_S1 + 53);
            *(b + 282 * OS1_S1 + 75) = prefactor_x * *(b + 282 * OS1_S1 + 54) -
                                       p_over_q * *(b + 348 * OS1_S1 + 54);
            *(b + 282 * OS1_S1 + 76) = prefactor_x * *(b + 282 * OS1_S1 + 55) -
                                       p_over_q * *(b + 348 * OS1_S1 + 55);
            *(b + 282 * OS1_S1 + 77) =
                prefactor_y * *(b + 282 * OS1_S1 + 50) -
                p_over_q * *(b + 359 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 282 * OS1_S1 + 30);
            *(b + 282 * OS1_S1 + 78) =
                prefactor_z * *(b + 282 * OS1_S1 + 50) -
                p_over_q * *(b + 360 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 50);
            *(b + 282 * OS1_S1 + 79) =
                prefactor_z * *(b + 282 * OS1_S1 + 51) -
                p_over_q * *(b + 360 * OS1_S1 + 51) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 51) +
                one_over_two_q * *(b + 282 * OS1_S1 + 30);
            *(b + 282 * OS1_S1 + 80) =
                prefactor_y * *(b + 282 * OS1_S1 + 53) -
                p_over_q * *(b + 359 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 282 * OS1_S1 + 33);
            *(b + 282 * OS1_S1 + 81) =
                prefactor_y * *(b + 282 * OS1_S1 + 54) -
                p_over_q * *(b + 359 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 54) +
                one_over_two_q * *(b + 282 * OS1_S1 + 34);
            *(b + 282 * OS1_S1 + 82) =
                prefactor_y * *(b + 282 * OS1_S1 + 55) -
                p_over_q * *(b + 359 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 55);
            *(b + 282 * OS1_S1 + 83) =
                prefactor_z * *(b + 282 * OS1_S1 + 55) -
                p_over_q * *(b + 360 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 282 * OS1_S1 + 34);
            *(b + 283 * OS1_S1 + 56) =
                prefactor_x * *(b + 283 * OS1_S1 + 35) -
                p_over_q * *(b + 349 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 283 * OS1_S1 + 20);
            *(b + 283 * OS1_S1 + 57) =
                prefactor_y * *(b + 283 * OS1_S1 + 35) -
                p_over_q * *(b + 360 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 35);
            *(b + 283 * OS1_S1 + 58) =
                prefactor_z * *(b + 283 * OS1_S1 + 35) -
                p_over_q * *(b + 361 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 35);
            *(b + 283 * OS1_S1 + 59) =
                prefactor_y * *(b + 283 * OS1_S1 + 36) -
                p_over_q * *(b + 360 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 36) +
                one_over_two_q * *(b + 283 * OS1_S1 + 20);
            *(b + 283 * OS1_S1 + 60) =
                prefactor_y * *(b + 283 * OS1_S1 + 37) -
                p_over_q * *(b + 360 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 37);
            *(b + 283 * OS1_S1 + 61) =
                prefactor_z * *(b + 283 * OS1_S1 + 37) -
                p_over_q * *(b + 361 * OS1_S1 + 37) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 37) +
                one_over_two_q * *(b + 283 * OS1_S1 + 20);
            *(b + 283 * OS1_S1 + 62) =
                prefactor_x * *(b + 283 * OS1_S1 + 41) -
                p_over_q * *(b + 349 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 283 * OS1_S1 + 26);
            *(b + 283 * OS1_S1 + 63) =
                prefactor_z * *(b + 283 * OS1_S1 + 38) -
                p_over_q * *(b + 361 * OS1_S1 + 38) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 38);
            *(b + 283 * OS1_S1 + 64) =
                prefactor_y * *(b + 283 * OS1_S1 + 40) -
                p_over_q * *(b + 360 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 40);
            *(b + 283 * OS1_S1 + 65) =
                prefactor_x * *(b + 283 * OS1_S1 + 44) -
                p_over_q * *(b + 349 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 283 * OS1_S1 + 29);
            *(b + 283 * OS1_S1 + 66) =
                prefactor_x * *(b + 283 * OS1_S1 + 45) -
                p_over_q * *(b + 349 * OS1_S1 + 45) +
                one_over_two_q * *(b + 283 * OS1_S1 + 30);
            *(b + 283 * OS1_S1 + 67) =
                prefactor_z * *(b + 283 * OS1_S1 + 41) -
                p_over_q * *(b + 361 * OS1_S1 + 41) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 41);
            *(b + 283 * OS1_S1 + 68) =
                prefactor_x * *(b + 283 * OS1_S1 + 47) -
                p_over_q * *(b + 349 * OS1_S1 + 47) +
                one_over_two_q * *(b + 283 * OS1_S1 + 32);
            *(b + 283 * OS1_S1 + 69) =
                prefactor_y * *(b + 283 * OS1_S1 + 44) -
                p_over_q * *(b + 360 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 44);
            *(b + 283 * OS1_S1 + 70) =
                prefactor_x * *(b + 283 * OS1_S1 + 49) -
                p_over_q * *(b + 349 * OS1_S1 + 49) +
                one_over_two_q * *(b + 283 * OS1_S1 + 34);
            *(b + 283 * OS1_S1 + 71) = prefactor_x * *(b + 283 * OS1_S1 + 50) -
                                       p_over_q * *(b + 349 * OS1_S1 + 50);
            *(b + 283 * OS1_S1 + 72) = prefactor_x * *(b + 283 * OS1_S1 + 51) -
                                       p_over_q * *(b + 349 * OS1_S1 + 51);
            *(b + 283 * OS1_S1 + 73) = prefactor_x * *(b + 283 * OS1_S1 + 52) -
                                       p_over_q * *(b + 349 * OS1_S1 + 52);
            *(b + 283 * OS1_S1 + 74) = prefactor_x * *(b + 283 * OS1_S1 + 53) -
                                       p_over_q * *(b + 349 * OS1_S1 + 53);
            *(b + 283 * OS1_S1 + 75) = prefactor_x * *(b + 283 * OS1_S1 + 54) -
                                       p_over_q * *(b + 349 * OS1_S1 + 54);
            *(b + 283 * OS1_S1 + 76) = prefactor_x * *(b + 283 * OS1_S1 + 55) -
                                       p_over_q * *(b + 349 * OS1_S1 + 55);
            *(b + 283 * OS1_S1 + 77) =
                prefactor_y * *(b + 283 * OS1_S1 + 50) -
                p_over_q * *(b + 360 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 283 * OS1_S1 + 30);
            *(b + 283 * OS1_S1 + 78) =
                prefactor_z * *(b + 283 * OS1_S1 + 50) -
                p_over_q * *(b + 361 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 50);
            *(b + 283 * OS1_S1 + 79) =
                prefactor_z * *(b + 283 * OS1_S1 + 51) -
                p_over_q * *(b + 361 * OS1_S1 + 51) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 51) +
                one_over_two_q * *(b + 283 * OS1_S1 + 30);
            *(b + 283 * OS1_S1 + 80) =
                prefactor_y * *(b + 283 * OS1_S1 + 53) -
                p_over_q * *(b + 360 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 283 * OS1_S1 + 33);
            *(b + 283 * OS1_S1 + 81) =
                prefactor_y * *(b + 283 * OS1_S1 + 54) -
                p_over_q * *(b + 360 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 54) +
                one_over_two_q * *(b + 283 * OS1_S1 + 34);
            *(b + 283 * OS1_S1 + 82) =
                prefactor_y * *(b + 283 * OS1_S1 + 55) -
                p_over_q * *(b + 360 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 55);
            *(b + 283 * OS1_S1 + 83) =
                prefactor_z * *(b + 283 * OS1_S1 + 55) -
                p_over_q * *(b + 361 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 283 * OS1_S1 + 34);
            *(b + 284 * OS1_S1 + 56) =
                prefactor_x * *(b + 284 * OS1_S1 + 35) -
                p_over_q * *(b + 350 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 284 * OS1_S1 + 20);
            *(b + 284 * OS1_S1 + 57) =
                prefactor_y * *(b + 284 * OS1_S1 + 35) -
                p_over_q * *(b + 361 * OS1_S1 + 35) +
                one_over_two_q * *(b + 219 * OS1_S1 + 35);
            *(b + 284 * OS1_S1 + 58) =
                prefactor_z * *(b + 284 * OS1_S1 + 35) -
                p_over_q * *(b + 362 * OS1_S1 + 35) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 35);
            *(b + 284 * OS1_S1 + 59) =
                prefactor_y * *(b + 284 * OS1_S1 + 36) -
                p_over_q * *(b + 361 * OS1_S1 + 36) +
                one_over_two_q * *(b + 219 * OS1_S1 + 36) +
                one_over_two_q * *(b + 284 * OS1_S1 + 20);
            *(b + 284 * OS1_S1 + 60) =
                prefactor_y * *(b + 284 * OS1_S1 + 37) -
                p_over_q * *(b + 361 * OS1_S1 + 37) +
                one_over_two_q * *(b + 219 * OS1_S1 + 37);
            *(b + 284 * OS1_S1 + 61) =
                prefactor_z * *(b + 284 * OS1_S1 + 37) -
                p_over_q * *(b + 362 * OS1_S1 + 37) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 37) +
                one_over_two_q * *(b + 284 * OS1_S1 + 20);
            *(b + 284 * OS1_S1 + 62) =
                prefactor_x * *(b + 284 * OS1_S1 + 41) -
                p_over_q * *(b + 350 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 26);
            *(b + 284 * OS1_S1 + 63) =
                prefactor_z * *(b + 284 * OS1_S1 + 38) -
                p_over_q * *(b + 362 * OS1_S1 + 38) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 38);
            *(b + 284 * OS1_S1 + 64) =
                prefactor_y * *(b + 284 * OS1_S1 + 40) -
                p_over_q * *(b + 361 * OS1_S1 + 40) +
                one_over_two_q * *(b + 219 * OS1_S1 + 40);
            *(b + 284 * OS1_S1 + 65) =
                prefactor_x * *(b + 284 * OS1_S1 + 44) -
                p_over_q * *(b + 350 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 29);
            *(b + 284 * OS1_S1 + 66) =
                prefactor_x * *(b + 284 * OS1_S1 + 45) -
                p_over_q * *(b + 350 * OS1_S1 + 45) +
                one_over_two_q * *(b + 284 * OS1_S1 + 30);
            *(b + 284 * OS1_S1 + 67) =
                prefactor_z * *(b + 284 * OS1_S1 + 41) -
                p_over_q * *(b + 362 * OS1_S1 + 41) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 41);
            *(b + 284 * OS1_S1 + 68) =
                prefactor_x * *(b + 284 * OS1_S1 + 47) -
                p_over_q * *(b + 350 * OS1_S1 + 47) +
                one_over_two_q * *(b + 284 * OS1_S1 + 32);
            *(b + 284 * OS1_S1 + 69) =
                prefactor_y * *(b + 284 * OS1_S1 + 44) -
                p_over_q * *(b + 361 * OS1_S1 + 44) +
                one_over_two_q * *(b + 219 * OS1_S1 + 44);
            *(b + 284 * OS1_S1 + 70) =
                prefactor_x * *(b + 284 * OS1_S1 + 49) -
                p_over_q * *(b + 350 * OS1_S1 + 49) +
                one_over_two_q * *(b + 284 * OS1_S1 + 34);
            *(b + 284 * OS1_S1 + 71) = prefactor_x * *(b + 284 * OS1_S1 + 50) -
                                       p_over_q * *(b + 350 * OS1_S1 + 50);
            *(b + 284 * OS1_S1 + 72) = prefactor_x * *(b + 284 * OS1_S1 + 51) -
                                       p_over_q * *(b + 350 * OS1_S1 + 51);
            *(b + 284 * OS1_S1 + 73) = prefactor_x * *(b + 284 * OS1_S1 + 52) -
                                       p_over_q * *(b + 350 * OS1_S1 + 52);
            *(b + 284 * OS1_S1 + 74) = prefactor_x * *(b + 284 * OS1_S1 + 53) -
                                       p_over_q * *(b + 350 * OS1_S1 + 53);
            *(b + 284 * OS1_S1 + 75) = prefactor_x * *(b + 284 * OS1_S1 + 54) -
                                       p_over_q * *(b + 350 * OS1_S1 + 54);
            *(b + 284 * OS1_S1 + 76) = prefactor_x * *(b + 284 * OS1_S1 + 55) -
                                       p_over_q * *(b + 350 * OS1_S1 + 55);
            *(b + 284 * OS1_S1 + 77) =
                prefactor_y * *(b + 284 * OS1_S1 + 50) -
                p_over_q * *(b + 361 * OS1_S1 + 50) +
                one_over_two_q * *(b + 219 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 284 * OS1_S1 + 30);
            *(b + 284 * OS1_S1 + 78) =
                prefactor_z * *(b + 284 * OS1_S1 + 50) -
                p_over_q * *(b + 362 * OS1_S1 + 50) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 50);
            *(b + 284 * OS1_S1 + 79) =
                prefactor_z * *(b + 284 * OS1_S1 + 51) -
                p_over_q * *(b + 362 * OS1_S1 + 51) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 51) +
                one_over_two_q * *(b + 284 * OS1_S1 + 30);
            *(b + 284 * OS1_S1 + 80) =
                prefactor_y * *(b + 284 * OS1_S1 + 53) -
                p_over_q * *(b + 361 * OS1_S1 + 53) +
                one_over_two_q * *(b + 219 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 33);
            *(b + 284 * OS1_S1 + 81) =
                prefactor_y * *(b + 284 * OS1_S1 + 54) -
                p_over_q * *(b + 361 * OS1_S1 + 54) +
                one_over_two_q * *(b + 219 * OS1_S1 + 54) +
                one_over_two_q * *(b + 284 * OS1_S1 + 34);
            *(b + 284 * OS1_S1 + 82) =
                prefactor_y * *(b + 284 * OS1_S1 + 55) -
                p_over_q * *(b + 361 * OS1_S1 + 55) +
                one_over_two_q * *(b + 219 * OS1_S1 + 55);
            *(b + 284 * OS1_S1 + 83) =
                prefactor_z * *(b + 284 * OS1_S1 + 55) -
                p_over_q * *(b + 362 * OS1_S1 + 55) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 284 * OS1_S1 + 34);
            *(b + 285 * OS1_S1 + 56) =
                prefactor_x * *(b + 285 * OS1_S1 + 35) -
                p_over_q * *(b + 351 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 285 * OS1_S1 + 20);
            *(b + 285 * OS1_S1 + 57) = prefactor_y * *(b + 285 * OS1_S1 + 35) -
                                       p_over_q * *(b + 362 * OS1_S1 + 35);
            *(b + 285 * OS1_S1 + 58) =
                prefactor_z * *(b + 285 * OS1_S1 + 35) -
                p_over_q * *(b + 363 * OS1_S1 + 35) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 35);
            *(b + 285 * OS1_S1 + 59) =
                prefactor_y * *(b + 285 * OS1_S1 + 36) -
                p_over_q * *(b + 362 * OS1_S1 + 36) +
                one_over_two_q * *(b + 285 * OS1_S1 + 20);
            *(b + 285 * OS1_S1 + 60) = prefactor_y * *(b + 285 * OS1_S1 + 37) -
                                       p_over_q * *(b + 362 * OS1_S1 + 37);
            *(b + 285 * OS1_S1 + 61) =
                prefactor_z * *(b + 285 * OS1_S1 + 37) -
                p_over_q * *(b + 363 * OS1_S1 + 37) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 37) +
                one_over_two_q * *(b + 285 * OS1_S1 + 20);
            *(b + 285 * OS1_S1 + 62) =
                prefactor_y * *(b + 285 * OS1_S1 + 38) -
                p_over_q * *(b + 362 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 285 * OS1_S1 + 21);
            *(b + 285 * OS1_S1 + 63) =
                prefactor_z * *(b + 285 * OS1_S1 + 38) -
                p_over_q * *(b + 363 * OS1_S1 + 38) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 38);
            *(b + 285 * OS1_S1 + 64) = prefactor_y * *(b + 285 * OS1_S1 + 40) -
                                       p_over_q * *(b + 362 * OS1_S1 + 40);
            *(b + 285 * OS1_S1 + 65) =
                prefactor_x * *(b + 285 * OS1_S1 + 44) -
                p_over_q * *(b + 351 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 285 * OS1_S1 + 29);
            *(b + 285 * OS1_S1 + 66) =
                prefactor_x * *(b + 285 * OS1_S1 + 45) -
                p_over_q * *(b + 351 * OS1_S1 + 45) +
                one_over_two_q * *(b + 285 * OS1_S1 + 30);
            *(b + 285 * OS1_S1 + 67) =
                prefactor_z * *(b + 285 * OS1_S1 + 41) -
                p_over_q * *(b + 363 * OS1_S1 + 41) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 41);
            *(b + 285 * OS1_S1 + 68) =
                prefactor_y * *(b + 285 * OS1_S1 + 43) -
                p_over_q * *(b + 362 * OS1_S1 + 43) +
                one_over_two_q * *(b + 285 * OS1_S1 + 25);
            *(b + 285 * OS1_S1 + 69) = prefactor_y * *(b + 285 * OS1_S1 + 44) -
                                       p_over_q * *(b + 362 * OS1_S1 + 44);
            *(b + 285 * OS1_S1 + 70) =
                prefactor_x * *(b + 285 * OS1_S1 + 49) -
                p_over_q * *(b + 351 * OS1_S1 + 49) +
                one_over_two_q * *(b + 285 * OS1_S1 + 34);
            *(b + 285 * OS1_S1 + 71) = prefactor_x * *(b + 285 * OS1_S1 + 50) -
                                       p_over_q * *(b + 351 * OS1_S1 + 50);
            *(b + 285 * OS1_S1 + 72) = prefactor_x * *(b + 285 * OS1_S1 + 51) -
                                       p_over_q * *(b + 351 * OS1_S1 + 51);
            *(b + 285 * OS1_S1 + 73) = prefactor_x * *(b + 285 * OS1_S1 + 52) -
                                       p_over_q * *(b + 351 * OS1_S1 + 52);
            *(b + 285 * OS1_S1 + 74) = prefactor_x * *(b + 285 * OS1_S1 + 53) -
                                       p_over_q * *(b + 351 * OS1_S1 + 53);
            *(b + 285 * OS1_S1 + 75) = prefactor_y * *(b + 285 * OS1_S1 + 49) -
                                       p_over_q * *(b + 362 * OS1_S1 + 49);
            *(b + 285 * OS1_S1 + 76) = prefactor_x * *(b + 285 * OS1_S1 + 55) -
                                       p_over_q * *(b + 351 * OS1_S1 + 55);
            *(b + 285 * OS1_S1 + 77) =
                prefactor_y * *(b + 285 * OS1_S1 + 50) -
                p_over_q * *(b + 362 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 285 * OS1_S1 + 30);
            *(b + 285 * OS1_S1 + 78) =
                prefactor_z * *(b + 285 * OS1_S1 + 50) -
                p_over_q * *(b + 363 * OS1_S1 + 50) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 50);
            *(b + 285 * OS1_S1 + 79) =
                prefactor_z * *(b + 285 * OS1_S1 + 51) -
                p_over_q * *(b + 363 * OS1_S1 + 51) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 51) +
                one_over_two_q * *(b + 285 * OS1_S1 + 30);
            *(b + 285 * OS1_S1 + 80) =
                prefactor_y * *(b + 285 * OS1_S1 + 53) -
                p_over_q * *(b + 362 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 285 * OS1_S1 + 33);
            *(b + 285 * OS1_S1 + 81) =
                prefactor_y * *(b + 285 * OS1_S1 + 54) -
                p_over_q * *(b + 362 * OS1_S1 + 54) +
                one_over_two_q * *(b + 285 * OS1_S1 + 34);
            *(b + 285 * OS1_S1 + 82) = prefactor_y * *(b + 285 * OS1_S1 + 55) -
                                       p_over_q * *(b + 362 * OS1_S1 + 55);
            *(b + 285 * OS1_S1 + 83) =
                prefactor_z * *(b + 285 * OS1_S1 + 55) -
                p_over_q * *(b + 363 * OS1_S1 + 55) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 285 * OS1_S1 + 34);
            return;
        }
    }
}
