/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_8_6(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 120 * OS1_S1 + 56) =
                prefactor_x * *(b + 120 * OS1_S1 + 35) -
                p_over_q * *(b + 165 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 120 * OS1_S1 + 20);
            *(b + 120 * OS1_S1 + 57) = prefactor_y * *(b + 120 * OS1_S1 + 35) -
                                       p_over_q * *(b + 166 * OS1_S1 + 35);
            *(b + 120 * OS1_S1 + 58) = prefactor_z * *(b + 120 * OS1_S1 + 35) -
                                       p_over_q * *(b + 167 * OS1_S1 + 35);
            *(b + 120 * OS1_S1 + 59) =
                prefactor_y * *(b + 120 * OS1_S1 + 36) -
                p_over_q * *(b + 166 * OS1_S1 + 36) +
                one_over_two_q * *(b + 120 * OS1_S1 + 20);
            *(b + 120 * OS1_S1 + 60) = prefactor_z * *(b + 120 * OS1_S1 + 36) -
                                       p_over_q * *(b + 167 * OS1_S1 + 36);
            *(b + 120 * OS1_S1 + 61) =
                prefactor_z * *(b + 120 * OS1_S1 + 37) -
                p_over_q * *(b + 167 * OS1_S1 + 37) +
                one_over_two_q * *(b + 120 * OS1_S1 + 20);
            *(b + 120 * OS1_S1 + 62) =
                prefactor_y * *(b + 120 * OS1_S1 + 38) -
                p_over_q * *(b + 166 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 21);
            *(b + 120 * OS1_S1 + 63) = prefactor_z * *(b + 120 * OS1_S1 + 38) -
                                       p_over_q * *(b + 167 * OS1_S1 + 38);
            *(b + 120 * OS1_S1 + 64) = prefactor_y * *(b + 120 * OS1_S1 + 40) -
                                       p_over_q * *(b + 166 * OS1_S1 + 40);
            *(b + 120 * OS1_S1 + 65) =
                prefactor_z * *(b + 120 * OS1_S1 + 40) -
                p_over_q * *(b + 167 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 22);
            *(b + 120 * OS1_S1 + 66) =
                prefactor_x * *(b + 120 * OS1_S1 + 45) -
                p_over_q * *(b + 165 * OS1_S1 + 45) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 45) +
                one_over_two_q * *(b + 120 * OS1_S1 + 30);
            *(b + 120 * OS1_S1 + 67) = prefactor_z * *(b + 120 * OS1_S1 + 41) -
                                       p_over_q * *(b + 167 * OS1_S1 + 41);
            *(b + 120 * OS1_S1 + 68) =
                prefactor_z * *(b + 120 * OS1_S1 + 42) -
                p_over_q * *(b + 167 * OS1_S1 + 42) +
                one_over_two_q * *(b + 120 * OS1_S1 + 23);
            *(b + 120 * OS1_S1 + 69) = prefactor_y * *(b + 120 * OS1_S1 + 44) -
                                       p_over_q * *(b + 166 * OS1_S1 + 44);
            *(b + 120 * OS1_S1 + 70) =
                prefactor_x * *(b + 120 * OS1_S1 + 49) -
                p_over_q * *(b + 165 * OS1_S1 + 49) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 49) +
                one_over_two_q * *(b + 120 * OS1_S1 + 34);
            *(b + 120 * OS1_S1 + 71) =
                prefactor_x * *(b + 120 * OS1_S1 + 50) -
                p_over_q * *(b + 165 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 50);
            *(b + 120 * OS1_S1 + 72) = prefactor_z * *(b + 120 * OS1_S1 + 45) -
                                       p_over_q * *(b + 167 * OS1_S1 + 45);
            *(b + 120 * OS1_S1 + 73) =
                prefactor_x * *(b + 120 * OS1_S1 + 52) -
                p_over_q * *(b + 165 * OS1_S1 + 52) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 52);
            *(b + 120 * OS1_S1 + 74) =
                prefactor_x * *(b + 120 * OS1_S1 + 53) -
                p_over_q * *(b + 165 * OS1_S1 + 53) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 53);
            *(b + 120 * OS1_S1 + 75) = prefactor_y * *(b + 120 * OS1_S1 + 49) -
                                       p_over_q * *(b + 166 * OS1_S1 + 49);
            *(b + 120 * OS1_S1 + 76) =
                prefactor_x * *(b + 120 * OS1_S1 + 55) -
                p_over_q * *(b + 165 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 55);
            *(b + 120 * OS1_S1 + 77) =
                prefactor_y * *(b + 120 * OS1_S1 + 50) -
                p_over_q * *(b + 166 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 120 * OS1_S1 + 30);
            *(b + 120 * OS1_S1 + 78) = prefactor_z * *(b + 120 * OS1_S1 + 50) -
                                       p_over_q * *(b + 167 * OS1_S1 + 50);
            *(b + 120 * OS1_S1 + 79) =
                prefactor_z * *(b + 120 * OS1_S1 + 51) -
                p_over_q * *(b + 167 * OS1_S1 + 51) +
                one_over_two_q * *(b + 120 * OS1_S1 + 30);
            *(b + 120 * OS1_S1 + 80) =
                prefactor_z * *(b + 120 * OS1_S1 + 52) -
                p_over_q * *(b + 167 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 31);
            *(b + 120 * OS1_S1 + 81) =
                prefactor_y * *(b + 120 * OS1_S1 + 54) -
                p_over_q * *(b + 166 * OS1_S1 + 54) +
                one_over_two_q * *(b + 120 * OS1_S1 + 34);
            *(b + 120 * OS1_S1 + 82) = prefactor_y * *(b + 120 * OS1_S1 + 55) -
                                       p_over_q * *(b + 166 * OS1_S1 + 55);
            *(b + 120 * OS1_S1 + 83) =
                prefactor_z * *(b + 120 * OS1_S1 + 55) -
                p_over_q * *(b + 167 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 120 * OS1_S1 + 34);
            *(b + 121 * OS1_S1 + 56) =
                prefactor_x * *(b + 121 * OS1_S1 + 35) -
                p_over_q * *(b + 166 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 121 * OS1_S1 + 20);
            *(b + 121 * OS1_S1 + 57) = prefactor_y * *(b + 121 * OS1_S1 + 35) -
                                       p_over_q * *(b + 168 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 35);
            *(b + 121 * OS1_S1 + 58) = prefactor_z * *(b + 121 * OS1_S1 + 35) -
                                       p_over_q * *(b + 169 * OS1_S1 + 35);
            *(b + 121 * OS1_S1 + 59) =
                prefactor_y * *(b + 121 * OS1_S1 + 36) -
                p_over_q * *(b + 168 * OS1_S1 + 36) +
                one_over_two_q * *(b + 84 * OS1_S1 + 36) +
                one_over_two_q * *(b + 121 * OS1_S1 + 20);
            *(b + 121 * OS1_S1 + 60) = prefactor_z * *(b + 121 * OS1_S1 + 36) -
                                       p_over_q * *(b + 169 * OS1_S1 + 36);
            *(b + 121 * OS1_S1 + 61) =
                prefactor_z * *(b + 121 * OS1_S1 + 37) -
                p_over_q * *(b + 169 * OS1_S1 + 37) +
                one_over_two_q * *(b + 121 * OS1_S1 + 20);
            *(b + 121 * OS1_S1 + 62) =
                prefactor_y * *(b + 121 * OS1_S1 + 38) -
                p_over_q * *(b + 168 * OS1_S1 + 38) +
                one_over_two_q * *(b + 84 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 21);
            *(b + 121 * OS1_S1 + 63) = prefactor_z * *(b + 121 * OS1_S1 + 38) -
                                       p_over_q * *(b + 169 * OS1_S1 + 38);
            *(b + 121 * OS1_S1 + 64) = prefactor_y * *(b + 121 * OS1_S1 + 40) -
                                       p_over_q * *(b + 168 * OS1_S1 + 40) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 40);
            *(b + 121 * OS1_S1 + 65) =
                prefactor_z * *(b + 121 * OS1_S1 + 40) -
                p_over_q * *(b + 169 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 22);
            *(b + 121 * OS1_S1 + 66) =
                prefactor_x * *(b + 121 * OS1_S1 + 45) -
                p_over_q * *(b + 166 * OS1_S1 + 45) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 45) +
                one_over_two_q * *(b + 121 * OS1_S1 + 30);
            *(b + 121 * OS1_S1 + 67) = prefactor_z * *(b + 121 * OS1_S1 + 41) -
                                       p_over_q * *(b + 169 * OS1_S1 + 41);
            *(b + 121 * OS1_S1 + 68) =
                prefactor_z * *(b + 121 * OS1_S1 + 42) -
                p_over_q * *(b + 169 * OS1_S1 + 42) +
                one_over_two_q * *(b + 121 * OS1_S1 + 23);
            *(b + 121 * OS1_S1 + 69) = prefactor_y * *(b + 121 * OS1_S1 + 44) -
                                       p_over_q * *(b + 168 * OS1_S1 + 44) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 44);
            *(b + 121 * OS1_S1 + 70) =
                prefactor_x * *(b + 121 * OS1_S1 + 49) -
                p_over_q * *(b + 166 * OS1_S1 + 49) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 49) +
                one_over_two_q * *(b + 121 * OS1_S1 + 34);
            *(b + 121 * OS1_S1 + 71) =
                prefactor_x * *(b + 121 * OS1_S1 + 50) -
                p_over_q * *(b + 166 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 50);
            *(b + 121 * OS1_S1 + 72) = prefactor_z * *(b + 121 * OS1_S1 + 45) -
                                       p_over_q * *(b + 169 * OS1_S1 + 45);
            *(b + 121 * OS1_S1 + 73) =
                prefactor_x * *(b + 121 * OS1_S1 + 52) -
                p_over_q * *(b + 166 * OS1_S1 + 52) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 52);
            *(b + 121 * OS1_S1 + 74) =
                prefactor_x * *(b + 121 * OS1_S1 + 53) -
                p_over_q * *(b + 166 * OS1_S1 + 53) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 53);
            *(b + 121 * OS1_S1 + 75) = prefactor_y * *(b + 121 * OS1_S1 + 49) -
                                       p_over_q * *(b + 168 * OS1_S1 + 49) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 49);
            *(b + 121 * OS1_S1 + 76) =
                prefactor_x * *(b + 121 * OS1_S1 + 55) -
                p_over_q * *(b + 166 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 55);
            *(b + 121 * OS1_S1 + 77) =
                prefactor_y * *(b + 121 * OS1_S1 + 50) -
                p_over_q * *(b + 168 * OS1_S1 + 50) +
                one_over_two_q * *(b + 84 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 121 * OS1_S1 + 30);
            *(b + 121 * OS1_S1 + 78) = prefactor_z * *(b + 121 * OS1_S1 + 50) -
                                       p_over_q * *(b + 169 * OS1_S1 + 50);
            *(b + 121 * OS1_S1 + 79) =
                prefactor_z * *(b + 121 * OS1_S1 + 51) -
                p_over_q * *(b + 169 * OS1_S1 + 51) +
                one_over_two_q * *(b + 121 * OS1_S1 + 30);
            *(b + 121 * OS1_S1 + 80) =
                prefactor_z * *(b + 121 * OS1_S1 + 52) -
                p_over_q * *(b + 169 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 31);
            *(b + 121 * OS1_S1 + 81) =
                prefactor_y * *(b + 121 * OS1_S1 + 54) -
                p_over_q * *(b + 168 * OS1_S1 + 54) +
                one_over_two_q * *(b + 84 * OS1_S1 + 54) +
                one_over_two_q * *(b + 121 * OS1_S1 + 34);
            *(b + 121 * OS1_S1 + 82) = prefactor_y * *(b + 121 * OS1_S1 + 55) -
                                       p_over_q * *(b + 168 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 55);
            *(b + 121 * OS1_S1 + 83) =
                prefactor_z * *(b + 121 * OS1_S1 + 55) -
                p_over_q * *(b + 169 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 121 * OS1_S1 + 34);
            *(b + 122 * OS1_S1 + 56) =
                prefactor_x * *(b + 122 * OS1_S1 + 35) -
                p_over_q * *(b + 167 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 122 * OS1_S1 + 20);
            *(b + 122 * OS1_S1 + 57) = prefactor_y * *(b + 122 * OS1_S1 + 35) -
                                       p_over_q * *(b + 169 * OS1_S1 + 35);
            *(b + 122 * OS1_S1 + 58) = prefactor_z * *(b + 122 * OS1_S1 + 35) -
                                       p_over_q * *(b + 170 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 35);
            *(b + 122 * OS1_S1 + 59) =
                prefactor_y * *(b + 122 * OS1_S1 + 36) -
                p_over_q * *(b + 169 * OS1_S1 + 36) +
                one_over_two_q * *(b + 122 * OS1_S1 + 20);
            *(b + 122 * OS1_S1 + 60) = prefactor_y * *(b + 122 * OS1_S1 + 37) -
                                       p_over_q * *(b + 169 * OS1_S1 + 37);
            *(b + 122 * OS1_S1 + 61) =
                prefactor_z * *(b + 122 * OS1_S1 + 37) -
                p_over_q * *(b + 170 * OS1_S1 + 37) +
                one_over_two_q * *(b + 84 * OS1_S1 + 37) +
                one_over_two_q * *(b + 122 * OS1_S1 + 20);
            *(b + 122 * OS1_S1 + 62) =
                prefactor_y * *(b + 122 * OS1_S1 + 38) -
                p_over_q * *(b + 169 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 21);
            *(b + 122 * OS1_S1 + 63) = prefactor_z * *(b + 122 * OS1_S1 + 38) -
                                       p_over_q * *(b + 170 * OS1_S1 + 38) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 38);
            *(b + 122 * OS1_S1 + 64) = prefactor_y * *(b + 122 * OS1_S1 + 40) -
                                       p_over_q * *(b + 169 * OS1_S1 + 40);
            *(b + 122 * OS1_S1 + 65) =
                prefactor_z * *(b + 122 * OS1_S1 + 40) -
                p_over_q * *(b + 170 * OS1_S1 + 40) +
                one_over_two_q * *(b + 84 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 22);
            *(b + 122 * OS1_S1 + 66) =
                prefactor_x * *(b + 122 * OS1_S1 + 45) -
                p_over_q * *(b + 167 * OS1_S1 + 45) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 45) +
                one_over_two_q * *(b + 122 * OS1_S1 + 30);
            *(b + 122 * OS1_S1 + 67) = prefactor_z * *(b + 122 * OS1_S1 + 41) -
                                       p_over_q * *(b + 170 * OS1_S1 + 41) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 41);
            *(b + 122 * OS1_S1 + 68) =
                prefactor_y * *(b + 122 * OS1_S1 + 43) -
                p_over_q * *(b + 169 * OS1_S1 + 43) +
                one_over_two_q * *(b + 122 * OS1_S1 + 25);
            *(b + 122 * OS1_S1 + 69) = prefactor_y * *(b + 122 * OS1_S1 + 44) -
                                       p_over_q * *(b + 169 * OS1_S1 + 44);
            *(b + 122 * OS1_S1 + 70) =
                prefactor_x * *(b + 122 * OS1_S1 + 49) -
                p_over_q * *(b + 167 * OS1_S1 + 49) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 49) +
                one_over_two_q * *(b + 122 * OS1_S1 + 34);
            *(b + 122 * OS1_S1 + 71) =
                prefactor_x * *(b + 122 * OS1_S1 + 50) -
                p_over_q * *(b + 167 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 50);
            *(b + 122 * OS1_S1 + 72) = prefactor_z * *(b + 122 * OS1_S1 + 45) -
                                       p_over_q * *(b + 170 * OS1_S1 + 45) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 45);
            *(b + 122 * OS1_S1 + 73) =
                prefactor_x * *(b + 122 * OS1_S1 + 52) -
                p_over_q * *(b + 167 * OS1_S1 + 52) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 52);
            *(b + 122 * OS1_S1 + 74) =
                prefactor_x * *(b + 122 * OS1_S1 + 53) -
                p_over_q * *(b + 167 * OS1_S1 + 53) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 53);
            *(b + 122 * OS1_S1 + 75) = prefactor_y * *(b + 122 * OS1_S1 + 49) -
                                       p_over_q * *(b + 169 * OS1_S1 + 49);
            *(b + 122 * OS1_S1 + 76) =
                prefactor_x * *(b + 122 * OS1_S1 + 55) -
                p_over_q * *(b + 167 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 55);
            *(b + 122 * OS1_S1 + 77) =
                prefactor_y * *(b + 122 * OS1_S1 + 50) -
                p_over_q * *(b + 169 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 122 * OS1_S1 + 30);
            *(b + 122 * OS1_S1 + 78) = prefactor_z * *(b + 122 * OS1_S1 + 50) -
                                       p_over_q * *(b + 170 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 50);
            *(b + 122 * OS1_S1 + 79) =
                prefactor_z * *(b + 122 * OS1_S1 + 51) -
                p_over_q * *(b + 170 * OS1_S1 + 51) +
                one_over_two_q * *(b + 84 * OS1_S1 + 51) +
                one_over_two_q * *(b + 122 * OS1_S1 + 30);
            *(b + 122 * OS1_S1 + 80) =
                prefactor_y * *(b + 122 * OS1_S1 + 53) -
                p_over_q * *(b + 169 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 33);
            *(b + 122 * OS1_S1 + 81) =
                prefactor_y * *(b + 122 * OS1_S1 + 54) -
                p_over_q * *(b + 169 * OS1_S1 + 54) +
                one_over_two_q * *(b + 122 * OS1_S1 + 34);
            *(b + 122 * OS1_S1 + 82) = prefactor_y * *(b + 122 * OS1_S1 + 55) -
                                       p_over_q * *(b + 169 * OS1_S1 + 55);
            *(b + 122 * OS1_S1 + 83) =
                prefactor_z * *(b + 122 * OS1_S1 + 55) -
                p_over_q * *(b + 170 * OS1_S1 + 55) +
                one_over_two_q * *(b + 84 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 122 * OS1_S1 + 34);
            *(b + 123 * OS1_S1 + 56) =
                prefactor_x * *(b + 123 * OS1_S1 + 35) -
                p_over_q * *(b + 168 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 123 * OS1_S1 + 20);
            *(b + 123 * OS1_S1 + 57) =
                prefactor_y * *(b + 123 * OS1_S1 + 35) -
                p_over_q * *(b + 171 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 35);
            *(b + 123 * OS1_S1 + 58) = prefactor_z * *(b + 123 * OS1_S1 + 35) -
                                       p_over_q * *(b + 172 * OS1_S1 + 35);
            *(b + 123 * OS1_S1 + 59) =
                prefactor_y * *(b + 123 * OS1_S1 + 36) -
                p_over_q * *(b + 171 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 36) +
                one_over_two_q * *(b + 123 * OS1_S1 + 20);
            *(b + 123 * OS1_S1 + 60) = prefactor_z * *(b + 123 * OS1_S1 + 36) -
                                       p_over_q * *(b + 172 * OS1_S1 + 36);
            *(b + 123 * OS1_S1 + 61) =
                prefactor_z * *(b + 123 * OS1_S1 + 37) -
                p_over_q * *(b + 172 * OS1_S1 + 37) +
                one_over_two_q * *(b + 123 * OS1_S1 + 20);
            *(b + 123 * OS1_S1 + 62) =
                prefactor_y * *(b + 123 * OS1_S1 + 38) -
                p_over_q * *(b + 171 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 21);
            *(b + 123 * OS1_S1 + 63) = prefactor_z * *(b + 123 * OS1_S1 + 38) -
                                       p_over_q * *(b + 172 * OS1_S1 + 38);
            *(b + 123 * OS1_S1 + 64) =
                prefactor_y * *(b + 123 * OS1_S1 + 40) -
                p_over_q * *(b + 171 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 40);
            *(b + 123 * OS1_S1 + 65) =
                prefactor_z * *(b + 123 * OS1_S1 + 40) -
                p_over_q * *(b + 172 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 22);
            *(b + 123 * OS1_S1 + 66) =
                prefactor_x * *(b + 123 * OS1_S1 + 45) -
                p_over_q * *(b + 168 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 45) +
                one_over_two_q * *(b + 123 * OS1_S1 + 30);
            *(b + 123 * OS1_S1 + 67) = prefactor_z * *(b + 123 * OS1_S1 + 41) -
                                       p_over_q * *(b + 172 * OS1_S1 + 41);
            *(b + 123 * OS1_S1 + 68) =
                prefactor_z * *(b + 123 * OS1_S1 + 42) -
                p_over_q * *(b + 172 * OS1_S1 + 42) +
                one_over_two_q * *(b + 123 * OS1_S1 + 23);
            *(b + 123 * OS1_S1 + 69) =
                prefactor_y * *(b + 123 * OS1_S1 + 44) -
                p_over_q * *(b + 171 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 44);
            *(b + 123 * OS1_S1 + 70) =
                prefactor_x * *(b + 123 * OS1_S1 + 49) -
                p_over_q * *(b + 168 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 49) +
                one_over_two_q * *(b + 123 * OS1_S1 + 34);
            *(b + 123 * OS1_S1 + 71) =
                prefactor_x * *(b + 123 * OS1_S1 + 50) -
                p_over_q * *(b + 168 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 50);
            *(b + 123 * OS1_S1 + 72) = prefactor_z * *(b + 123 * OS1_S1 + 45) -
                                       p_over_q * *(b + 172 * OS1_S1 + 45);
            *(b + 123 * OS1_S1 + 73) =
                prefactor_x * *(b + 123 * OS1_S1 + 52) -
                p_over_q * *(b + 168 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 52);
            *(b + 123 * OS1_S1 + 74) =
                prefactor_x * *(b + 123 * OS1_S1 + 53) -
                p_over_q * *(b + 168 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 53);
            *(b + 123 * OS1_S1 + 75) =
                prefactor_y * *(b + 123 * OS1_S1 + 49) -
                p_over_q * *(b + 171 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 49);
            *(b + 123 * OS1_S1 + 76) =
                prefactor_x * *(b + 123 * OS1_S1 + 55) -
                p_over_q * *(b + 168 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 55);
            *(b + 123 * OS1_S1 + 77) =
                prefactor_y * *(b + 123 * OS1_S1 + 50) -
                p_over_q * *(b + 171 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 123 * OS1_S1 + 30);
            *(b + 123 * OS1_S1 + 78) = prefactor_z * *(b + 123 * OS1_S1 + 50) -
                                       p_over_q * *(b + 172 * OS1_S1 + 50);
            *(b + 123 * OS1_S1 + 79) =
                prefactor_z * *(b + 123 * OS1_S1 + 51) -
                p_over_q * *(b + 172 * OS1_S1 + 51) +
                one_over_two_q * *(b + 123 * OS1_S1 + 30);
            *(b + 123 * OS1_S1 + 80) =
                prefactor_z * *(b + 123 * OS1_S1 + 52) -
                p_over_q * *(b + 172 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 31);
            *(b + 123 * OS1_S1 + 81) =
                prefactor_y * *(b + 123 * OS1_S1 + 54) -
                p_over_q * *(b + 171 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 54) +
                one_over_two_q * *(b + 123 * OS1_S1 + 34);
            *(b + 123 * OS1_S1 + 82) =
                prefactor_y * *(b + 123 * OS1_S1 + 55) -
                p_over_q * *(b + 171 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 55);
            *(b + 123 * OS1_S1 + 83) =
                prefactor_z * *(b + 123 * OS1_S1 + 55) -
                p_over_q * *(b + 172 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 123 * OS1_S1 + 34);
            *(b + 124 * OS1_S1 + 56) =
                prefactor_x * *(b + 124 * OS1_S1 + 35) -
                p_over_q * *(b + 169 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 124 * OS1_S1 + 20);
            *(b + 124 * OS1_S1 + 57) = prefactor_y * *(b + 124 * OS1_S1 + 35) -
                                       p_over_q * *(b + 172 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 35);
            *(b + 124 * OS1_S1 + 58) = prefactor_z * *(b + 124 * OS1_S1 + 35) -
                                       p_over_q * *(b + 173 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 35);
            *(b + 124 * OS1_S1 + 59) =
                prefactor_y * *(b + 124 * OS1_S1 + 36) -
                p_over_q * *(b + 172 * OS1_S1 + 36) +
                one_over_two_q * *(b + 86 * OS1_S1 + 36) +
                one_over_two_q * *(b + 124 * OS1_S1 + 20);
            *(b + 124 * OS1_S1 + 60) = prefactor_z * *(b + 124 * OS1_S1 + 36) -
                                       p_over_q * *(b + 173 * OS1_S1 + 36) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 36);
            *(b + 124 * OS1_S1 + 61) =
                prefactor_z * *(b + 124 * OS1_S1 + 37) -
                p_over_q * *(b + 173 * OS1_S1 + 37) +
                one_over_two_q * *(b + 85 * OS1_S1 + 37) +
                one_over_two_q * *(b + 124 * OS1_S1 + 20);
            *(b + 124 * OS1_S1 + 62) =
                prefactor_y * *(b + 124 * OS1_S1 + 38) -
                p_over_q * *(b + 172 * OS1_S1 + 38) +
                one_over_two_q * *(b + 86 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 21);
            *(b + 124 * OS1_S1 + 63) = prefactor_z * *(b + 124 * OS1_S1 + 38) -
                                       p_over_q * *(b + 173 * OS1_S1 + 38) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 38);
            *(b + 124 * OS1_S1 + 64) = prefactor_y * *(b + 124 * OS1_S1 + 40) -
                                       p_over_q * *(b + 172 * OS1_S1 + 40) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 40);
            *(b + 124 * OS1_S1 + 65) =
                prefactor_z * *(b + 124 * OS1_S1 + 40) -
                p_over_q * *(b + 173 * OS1_S1 + 40) +
                one_over_two_q * *(b + 85 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 22);
            *(b + 124 * OS1_S1 + 66) =
                prefactor_x * *(b + 124 * OS1_S1 + 45) -
                p_over_q * *(b + 169 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 45) +
                one_over_two_q * *(b + 124 * OS1_S1 + 30);
            *(b + 124 * OS1_S1 + 67) = prefactor_z * *(b + 124 * OS1_S1 + 41) -
                                       p_over_q * *(b + 173 * OS1_S1 + 41) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 41);
            *(b + 124 * OS1_S1 + 68) =
                prefactor_z * *(b + 124 * OS1_S1 + 42) -
                p_over_q * *(b + 173 * OS1_S1 + 42) +
                one_over_two_q * *(b + 85 * OS1_S1 + 42) +
                one_over_two_q * *(b + 124 * OS1_S1 + 23);
            *(b + 124 * OS1_S1 + 69) = prefactor_y * *(b + 124 * OS1_S1 + 44) -
                                       p_over_q * *(b + 172 * OS1_S1 + 44) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 44);
            *(b + 124 * OS1_S1 + 70) =
                prefactor_x * *(b + 124 * OS1_S1 + 49) -
                p_over_q * *(b + 169 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 49) +
                one_over_two_q * *(b + 124 * OS1_S1 + 34);
            *(b + 124 * OS1_S1 + 71) =
                prefactor_x * *(b + 124 * OS1_S1 + 50) -
                p_over_q * *(b + 169 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 50);
            *(b + 124 * OS1_S1 + 72) = prefactor_z * *(b + 124 * OS1_S1 + 45) -
                                       p_over_q * *(b + 173 * OS1_S1 + 45) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 45);
            *(b + 124 * OS1_S1 + 73) =
                prefactor_x * *(b + 124 * OS1_S1 + 52) -
                p_over_q * *(b + 169 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 52);
            *(b + 124 * OS1_S1 + 74) =
                prefactor_x * *(b + 124 * OS1_S1 + 53) -
                p_over_q * *(b + 169 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 53);
            *(b + 124 * OS1_S1 + 75) = prefactor_y * *(b + 124 * OS1_S1 + 49) -
                                       p_over_q * *(b + 172 * OS1_S1 + 49) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 49);
            *(b + 124 * OS1_S1 + 76) =
                prefactor_x * *(b + 124 * OS1_S1 + 55) -
                p_over_q * *(b + 169 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 55);
            *(b + 124 * OS1_S1 + 77) =
                prefactor_y * *(b + 124 * OS1_S1 + 50) -
                p_over_q * *(b + 172 * OS1_S1 + 50) +
                one_over_two_q * *(b + 86 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 124 * OS1_S1 + 30);
            *(b + 124 * OS1_S1 + 78) = prefactor_z * *(b + 124 * OS1_S1 + 50) -
                                       p_over_q * *(b + 173 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 50);
            *(b + 124 * OS1_S1 + 79) =
                prefactor_z * *(b + 124 * OS1_S1 + 51) -
                p_over_q * *(b + 173 * OS1_S1 + 51) +
                one_over_two_q * *(b + 85 * OS1_S1 + 51) +
                one_over_two_q * *(b + 124 * OS1_S1 + 30);
            *(b + 124 * OS1_S1 + 80) =
                prefactor_z * *(b + 124 * OS1_S1 + 52) -
                p_over_q * *(b + 173 * OS1_S1 + 52) +
                one_over_two_q * *(b + 85 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 31);
            *(b + 124 * OS1_S1 + 81) =
                prefactor_y * *(b + 124 * OS1_S1 + 54) -
                p_over_q * *(b + 172 * OS1_S1 + 54) +
                one_over_two_q * *(b + 86 * OS1_S1 + 54) +
                one_over_two_q * *(b + 124 * OS1_S1 + 34);
            *(b + 124 * OS1_S1 + 82) = prefactor_y * *(b + 124 * OS1_S1 + 55) -
                                       p_over_q * *(b + 172 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 55);
            *(b + 124 * OS1_S1 + 83) =
                prefactor_z * *(b + 124 * OS1_S1 + 55) -
                p_over_q * *(b + 173 * OS1_S1 + 55) +
                one_over_two_q * *(b + 85 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 124 * OS1_S1 + 34);
            *(b + 125 * OS1_S1 + 56) =
                prefactor_x * *(b + 125 * OS1_S1 + 35) -
                p_over_q * *(b + 170 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 125 * OS1_S1 + 20);
            *(b + 125 * OS1_S1 + 57) = prefactor_y * *(b + 125 * OS1_S1 + 35) -
                                       p_over_q * *(b + 173 * OS1_S1 + 35);
            *(b + 125 * OS1_S1 + 58) =
                prefactor_z * *(b + 125 * OS1_S1 + 35) -
                p_over_q * *(b + 174 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 35);
            *(b + 125 * OS1_S1 + 59) =
                prefactor_y * *(b + 125 * OS1_S1 + 36) -
                p_over_q * *(b + 173 * OS1_S1 + 36) +
                one_over_two_q * *(b + 125 * OS1_S1 + 20);
            *(b + 125 * OS1_S1 + 60) = prefactor_y * *(b + 125 * OS1_S1 + 37) -
                                       p_over_q * *(b + 173 * OS1_S1 + 37);
            *(b + 125 * OS1_S1 + 61) =
                prefactor_z * *(b + 125 * OS1_S1 + 37) -
                p_over_q * *(b + 174 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 37) +
                one_over_two_q * *(b + 125 * OS1_S1 + 20);
            *(b + 125 * OS1_S1 + 62) =
                prefactor_y * *(b + 125 * OS1_S1 + 38) -
                p_over_q * *(b + 173 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 21);
            *(b + 125 * OS1_S1 + 63) =
                prefactor_z * *(b + 125 * OS1_S1 + 38) -
                p_over_q * *(b + 174 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 38);
            *(b + 125 * OS1_S1 + 64) = prefactor_y * *(b + 125 * OS1_S1 + 40) -
                                       p_over_q * *(b + 173 * OS1_S1 + 40);
            *(b + 125 * OS1_S1 + 65) =
                prefactor_z * *(b + 125 * OS1_S1 + 40) -
                p_over_q * *(b + 174 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 22);
            *(b + 125 * OS1_S1 + 66) =
                prefactor_x * *(b + 125 * OS1_S1 + 45) -
                p_over_q * *(b + 170 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 45) +
                one_over_two_q * *(b + 125 * OS1_S1 + 30);
            *(b + 125 * OS1_S1 + 67) =
                prefactor_z * *(b + 125 * OS1_S1 + 41) -
                p_over_q * *(b + 174 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 41);
            *(b + 125 * OS1_S1 + 68) =
                prefactor_y * *(b + 125 * OS1_S1 + 43) -
                p_over_q * *(b + 173 * OS1_S1 + 43) +
                one_over_two_q * *(b + 125 * OS1_S1 + 25);
            *(b + 125 * OS1_S1 + 69) = prefactor_y * *(b + 125 * OS1_S1 + 44) -
                                       p_over_q * *(b + 173 * OS1_S1 + 44);
            *(b + 125 * OS1_S1 + 70) =
                prefactor_x * *(b + 125 * OS1_S1 + 49) -
                p_over_q * *(b + 170 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 49) +
                one_over_two_q * *(b + 125 * OS1_S1 + 34);
            *(b + 125 * OS1_S1 + 71) =
                prefactor_x * *(b + 125 * OS1_S1 + 50) -
                p_over_q * *(b + 170 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 50);
            *(b + 125 * OS1_S1 + 72) =
                prefactor_z * *(b + 125 * OS1_S1 + 45) -
                p_over_q * *(b + 174 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 45);
            *(b + 125 * OS1_S1 + 73) =
                prefactor_x * *(b + 125 * OS1_S1 + 52) -
                p_over_q * *(b + 170 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 52);
            *(b + 125 * OS1_S1 + 74) =
                prefactor_x * *(b + 125 * OS1_S1 + 53) -
                p_over_q * *(b + 170 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 53);
            *(b + 125 * OS1_S1 + 75) = prefactor_y * *(b + 125 * OS1_S1 + 49) -
                                       p_over_q * *(b + 173 * OS1_S1 + 49);
            *(b + 125 * OS1_S1 + 76) =
                prefactor_x * *(b + 125 * OS1_S1 + 55) -
                p_over_q * *(b + 170 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 55);
            *(b + 125 * OS1_S1 + 77) =
                prefactor_y * *(b + 125 * OS1_S1 + 50) -
                p_over_q * *(b + 173 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 125 * OS1_S1 + 30);
            *(b + 125 * OS1_S1 + 78) =
                prefactor_z * *(b + 125 * OS1_S1 + 50) -
                p_over_q * *(b + 174 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 50);
            *(b + 125 * OS1_S1 + 79) =
                prefactor_z * *(b + 125 * OS1_S1 + 51) -
                p_over_q * *(b + 174 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 51) +
                one_over_two_q * *(b + 125 * OS1_S1 + 30);
            *(b + 125 * OS1_S1 + 80) =
                prefactor_y * *(b + 125 * OS1_S1 + 53) -
                p_over_q * *(b + 173 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 33);
            *(b + 125 * OS1_S1 + 81) =
                prefactor_y * *(b + 125 * OS1_S1 + 54) -
                p_over_q * *(b + 173 * OS1_S1 + 54) +
                one_over_two_q * *(b + 125 * OS1_S1 + 34);
            *(b + 125 * OS1_S1 + 82) = prefactor_y * *(b + 125 * OS1_S1 + 55) -
                                       p_over_q * *(b + 173 * OS1_S1 + 55);
            *(b + 125 * OS1_S1 + 83) =
                prefactor_z * *(b + 125 * OS1_S1 + 55) -
                p_over_q * *(b + 174 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 125 * OS1_S1 + 34);
            *(b + 126 * OS1_S1 + 56) =
                prefactor_x * *(b + 126 * OS1_S1 + 35) -
                p_over_q * *(b + 171 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 126 * OS1_S1 + 20);
            *(b + 126 * OS1_S1 + 57) =
                prefactor_y * *(b + 126 * OS1_S1 + 35) -
                p_over_q * *(b + 175 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 35);
            *(b + 126 * OS1_S1 + 58) = prefactor_z * *(b + 126 * OS1_S1 + 35) -
                                       p_over_q * *(b + 176 * OS1_S1 + 35);
            *(b + 126 * OS1_S1 + 59) =
                prefactor_y * *(b + 126 * OS1_S1 + 36) -
                p_over_q * *(b + 175 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 36) +
                one_over_two_q * *(b + 126 * OS1_S1 + 20);
            *(b + 126 * OS1_S1 + 60) = prefactor_z * *(b + 126 * OS1_S1 + 36) -
                                       p_over_q * *(b + 176 * OS1_S1 + 36);
            *(b + 126 * OS1_S1 + 61) =
                prefactor_z * *(b + 126 * OS1_S1 + 37) -
                p_over_q * *(b + 176 * OS1_S1 + 37) +
                one_over_two_q * *(b + 126 * OS1_S1 + 20);
            *(b + 126 * OS1_S1 + 62) =
                prefactor_y * *(b + 126 * OS1_S1 + 38) -
                p_over_q * *(b + 175 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 21);
            *(b + 126 * OS1_S1 + 63) = prefactor_z * *(b + 126 * OS1_S1 + 38) -
                                       p_over_q * *(b + 176 * OS1_S1 + 38);
            *(b + 126 * OS1_S1 + 64) =
                prefactor_y * *(b + 126 * OS1_S1 + 40) -
                p_over_q * *(b + 175 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 40);
            *(b + 126 * OS1_S1 + 65) =
                prefactor_z * *(b + 126 * OS1_S1 + 40) -
                p_over_q * *(b + 176 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 22);
            *(b + 126 * OS1_S1 + 66) =
                prefactor_x * *(b + 126 * OS1_S1 + 45) -
                p_over_q * *(b + 171 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 45) +
                one_over_two_q * *(b + 126 * OS1_S1 + 30);
            *(b + 126 * OS1_S1 + 67) = prefactor_z * *(b + 126 * OS1_S1 + 41) -
                                       p_over_q * *(b + 176 * OS1_S1 + 41);
            *(b + 126 * OS1_S1 + 68) =
                prefactor_z * *(b + 126 * OS1_S1 + 42) -
                p_over_q * *(b + 176 * OS1_S1 + 42) +
                one_over_two_q * *(b + 126 * OS1_S1 + 23);
            *(b + 126 * OS1_S1 + 69) =
                prefactor_y * *(b + 126 * OS1_S1 + 44) -
                p_over_q * *(b + 175 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 44);
            *(b + 126 * OS1_S1 + 70) =
                prefactor_x * *(b + 126 * OS1_S1 + 49) -
                p_over_q * *(b + 171 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 49) +
                one_over_two_q * *(b + 126 * OS1_S1 + 34);
            *(b + 126 * OS1_S1 + 71) =
                prefactor_x * *(b + 126 * OS1_S1 + 50) -
                p_over_q * *(b + 171 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 50);
            *(b + 126 * OS1_S1 + 72) = prefactor_z * *(b + 126 * OS1_S1 + 45) -
                                       p_over_q * *(b + 176 * OS1_S1 + 45);
            *(b + 126 * OS1_S1 + 73) =
                prefactor_x * *(b + 126 * OS1_S1 + 52) -
                p_over_q * *(b + 171 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 52);
            *(b + 126 * OS1_S1 + 74) =
                prefactor_x * *(b + 126 * OS1_S1 + 53) -
                p_over_q * *(b + 171 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 53);
            *(b + 126 * OS1_S1 + 75) =
                prefactor_y * *(b + 126 * OS1_S1 + 49) -
                p_over_q * *(b + 175 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 49);
            *(b + 126 * OS1_S1 + 76) =
                prefactor_x * *(b + 126 * OS1_S1 + 55) -
                p_over_q * *(b + 171 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 55);
            *(b + 126 * OS1_S1 + 77) =
                prefactor_y * *(b + 126 * OS1_S1 + 50) -
                p_over_q * *(b + 175 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 126 * OS1_S1 + 30);
            *(b + 126 * OS1_S1 + 78) = prefactor_z * *(b + 126 * OS1_S1 + 50) -
                                       p_over_q * *(b + 176 * OS1_S1 + 50);
            *(b + 126 * OS1_S1 + 79) =
                prefactor_z * *(b + 126 * OS1_S1 + 51) -
                p_over_q * *(b + 176 * OS1_S1 + 51) +
                one_over_two_q * *(b + 126 * OS1_S1 + 30);
            *(b + 126 * OS1_S1 + 80) =
                prefactor_z * *(b + 126 * OS1_S1 + 52) -
                p_over_q * *(b + 176 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 31);
            *(b + 126 * OS1_S1 + 81) =
                prefactor_y * *(b + 126 * OS1_S1 + 54) -
                p_over_q * *(b + 175 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 54) +
                one_over_two_q * *(b + 126 * OS1_S1 + 34);
            *(b + 126 * OS1_S1 + 82) =
                prefactor_y * *(b + 126 * OS1_S1 + 55) -
                p_over_q * *(b + 175 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 55);
            *(b + 126 * OS1_S1 + 83) =
                prefactor_z * *(b + 126 * OS1_S1 + 55) -
                p_over_q * *(b + 176 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 126 * OS1_S1 + 34);
            *(b + 127 * OS1_S1 + 56) =
                prefactor_x * *(b + 127 * OS1_S1 + 35) -
                p_over_q * *(b + 172 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 127 * OS1_S1 + 20);
            *(b + 127 * OS1_S1 + 57) =
                prefactor_y * *(b + 127 * OS1_S1 + 35) -
                p_over_q * *(b + 176 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 35);
            *(b + 127 * OS1_S1 + 58) = prefactor_z * *(b + 127 * OS1_S1 + 35) -
                                       p_over_q * *(b + 177 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 35);
            *(b + 127 * OS1_S1 + 59) =
                prefactor_y * *(b + 127 * OS1_S1 + 36) -
                p_over_q * *(b + 176 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 36) +
                one_over_two_q * *(b + 127 * OS1_S1 + 20);
            *(b + 127 * OS1_S1 + 60) = prefactor_z * *(b + 127 * OS1_S1 + 36) -
                                       p_over_q * *(b + 177 * OS1_S1 + 36) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 36);
            *(b + 127 * OS1_S1 + 61) =
                prefactor_z * *(b + 127 * OS1_S1 + 37) -
                p_over_q * *(b + 177 * OS1_S1 + 37) +
                one_over_two_q * *(b + 87 * OS1_S1 + 37) +
                one_over_two_q * *(b + 127 * OS1_S1 + 20);
            *(b + 127 * OS1_S1 + 62) =
                prefactor_y * *(b + 127 * OS1_S1 + 38) -
                p_over_q * *(b + 176 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 21);
            *(b + 127 * OS1_S1 + 63) = prefactor_z * *(b + 127 * OS1_S1 + 38) -
                                       p_over_q * *(b + 177 * OS1_S1 + 38) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 38);
            *(b + 127 * OS1_S1 + 64) =
                prefactor_y * *(b + 127 * OS1_S1 + 40) -
                p_over_q * *(b + 176 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 40);
            *(b + 127 * OS1_S1 + 65) =
                prefactor_z * *(b + 127 * OS1_S1 + 40) -
                p_over_q * *(b + 177 * OS1_S1 + 40) +
                one_over_two_q * *(b + 87 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 22);
            *(b + 127 * OS1_S1 + 66) =
                prefactor_x * *(b + 127 * OS1_S1 + 45) -
                p_over_q * *(b + 172 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 45) +
                one_over_two_q * *(b + 127 * OS1_S1 + 30);
            *(b + 127 * OS1_S1 + 67) = prefactor_z * *(b + 127 * OS1_S1 + 41) -
                                       p_over_q * *(b + 177 * OS1_S1 + 41) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 41);
            *(b + 127 * OS1_S1 + 68) =
                prefactor_z * *(b + 127 * OS1_S1 + 42) -
                p_over_q * *(b + 177 * OS1_S1 + 42) +
                one_over_two_q * *(b + 87 * OS1_S1 + 42) +
                one_over_two_q * *(b + 127 * OS1_S1 + 23);
            *(b + 127 * OS1_S1 + 69) =
                prefactor_y * *(b + 127 * OS1_S1 + 44) -
                p_over_q * *(b + 176 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 44);
            *(b + 127 * OS1_S1 + 70) =
                prefactor_x * *(b + 127 * OS1_S1 + 49) -
                p_over_q * *(b + 172 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 49) +
                one_over_two_q * *(b + 127 * OS1_S1 + 34);
            *(b + 127 * OS1_S1 + 71) =
                prefactor_x * *(b + 127 * OS1_S1 + 50) -
                p_over_q * *(b + 172 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 50);
            *(b + 127 * OS1_S1 + 72) = prefactor_z * *(b + 127 * OS1_S1 + 45) -
                                       p_over_q * *(b + 177 * OS1_S1 + 45) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 45);
            *(b + 127 * OS1_S1 + 73) =
                prefactor_x * *(b + 127 * OS1_S1 + 52) -
                p_over_q * *(b + 172 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 52);
            *(b + 127 * OS1_S1 + 74) =
                prefactor_x * *(b + 127 * OS1_S1 + 53) -
                p_over_q * *(b + 172 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 53);
            *(b + 127 * OS1_S1 + 75) =
                prefactor_y * *(b + 127 * OS1_S1 + 49) -
                p_over_q * *(b + 176 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 49);
            *(b + 127 * OS1_S1 + 76) =
                prefactor_x * *(b + 127 * OS1_S1 + 55) -
                p_over_q * *(b + 172 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 55);
            *(b + 127 * OS1_S1 + 77) =
                prefactor_y * *(b + 127 * OS1_S1 + 50) -
                p_over_q * *(b + 176 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 127 * OS1_S1 + 30);
            *(b + 127 * OS1_S1 + 78) = prefactor_z * *(b + 127 * OS1_S1 + 50) -
                                       p_over_q * *(b + 177 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 50);
            *(b + 127 * OS1_S1 + 79) =
                prefactor_z * *(b + 127 * OS1_S1 + 51) -
                p_over_q * *(b + 177 * OS1_S1 + 51) +
                one_over_two_q * *(b + 87 * OS1_S1 + 51) +
                one_over_two_q * *(b + 127 * OS1_S1 + 30);
            *(b + 127 * OS1_S1 + 80) =
                prefactor_z * *(b + 127 * OS1_S1 + 52) -
                p_over_q * *(b + 177 * OS1_S1 + 52) +
                one_over_two_q * *(b + 87 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 31);
            *(b + 127 * OS1_S1 + 81) =
                prefactor_y * *(b + 127 * OS1_S1 + 54) -
                p_over_q * *(b + 176 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 54) +
                one_over_two_q * *(b + 127 * OS1_S1 + 34);
            *(b + 127 * OS1_S1 + 82) =
                prefactor_y * *(b + 127 * OS1_S1 + 55) -
                p_over_q * *(b + 176 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 55);
            *(b + 127 * OS1_S1 + 83) =
                prefactor_z * *(b + 127 * OS1_S1 + 55) -
                p_over_q * *(b + 177 * OS1_S1 + 55) +
                one_over_two_q * *(b + 87 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 127 * OS1_S1 + 34);
            *(b + 128 * OS1_S1 + 56) =
                prefactor_x * *(b + 128 * OS1_S1 + 35) -
                p_over_q * *(b + 173 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 128 * OS1_S1 + 20);
            *(b + 128 * OS1_S1 + 57) = prefactor_y * *(b + 128 * OS1_S1 + 35) -
                                       p_over_q * *(b + 177 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 35);
            *(b + 128 * OS1_S1 + 58) =
                prefactor_z * *(b + 128 * OS1_S1 + 35) -
                p_over_q * *(b + 178 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 35);
            *(b + 128 * OS1_S1 + 59) =
                prefactor_y * *(b + 128 * OS1_S1 + 36) -
                p_over_q * *(b + 177 * OS1_S1 + 36) +
                one_over_two_q * *(b + 89 * OS1_S1 + 36) +
                one_over_two_q * *(b + 128 * OS1_S1 + 20);
            *(b + 128 * OS1_S1 + 60) = prefactor_y * *(b + 128 * OS1_S1 + 37) -
                                       p_over_q * *(b + 177 * OS1_S1 + 37) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 37);
            *(b + 128 * OS1_S1 + 61) =
                prefactor_z * *(b + 128 * OS1_S1 + 37) -
                p_over_q * *(b + 178 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 37) +
                one_over_two_q * *(b + 128 * OS1_S1 + 20);
            *(b + 128 * OS1_S1 + 62) =
                prefactor_y * *(b + 128 * OS1_S1 + 38) -
                p_over_q * *(b + 177 * OS1_S1 + 38) +
                one_over_two_q * *(b + 89 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 21);
            *(b + 128 * OS1_S1 + 63) =
                prefactor_z * *(b + 128 * OS1_S1 + 38) -
                p_over_q * *(b + 178 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 38);
            *(b + 128 * OS1_S1 + 64) = prefactor_y * *(b + 128 * OS1_S1 + 40) -
                                       p_over_q * *(b + 177 * OS1_S1 + 40) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 40);
            *(b + 128 * OS1_S1 + 65) =
                prefactor_z * *(b + 128 * OS1_S1 + 40) -
                p_over_q * *(b + 178 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 22);
            *(b + 128 * OS1_S1 + 66) =
                prefactor_x * *(b + 128 * OS1_S1 + 45) -
                p_over_q * *(b + 173 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 45) +
                one_over_two_q * *(b + 128 * OS1_S1 + 30);
            *(b + 128 * OS1_S1 + 67) =
                prefactor_z * *(b + 128 * OS1_S1 + 41) -
                p_over_q * *(b + 178 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 41);
            *(b + 128 * OS1_S1 + 68) =
                prefactor_y * *(b + 128 * OS1_S1 + 43) -
                p_over_q * *(b + 177 * OS1_S1 + 43) +
                one_over_two_q * *(b + 89 * OS1_S1 + 43) +
                one_over_two_q * *(b + 128 * OS1_S1 + 25);
            *(b + 128 * OS1_S1 + 69) = prefactor_y * *(b + 128 * OS1_S1 + 44) -
                                       p_over_q * *(b + 177 * OS1_S1 + 44) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 44);
            *(b + 128 * OS1_S1 + 70) =
                prefactor_x * *(b + 128 * OS1_S1 + 49) -
                p_over_q * *(b + 173 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 49) +
                one_over_two_q * *(b + 128 * OS1_S1 + 34);
            *(b + 128 * OS1_S1 + 71) =
                prefactor_x * *(b + 128 * OS1_S1 + 50) -
                p_over_q * *(b + 173 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 50);
            *(b + 128 * OS1_S1 + 72) =
                prefactor_z * *(b + 128 * OS1_S1 + 45) -
                p_over_q * *(b + 178 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 45);
            *(b + 128 * OS1_S1 + 73) =
                prefactor_x * *(b + 128 * OS1_S1 + 52) -
                p_over_q * *(b + 173 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 52);
            *(b + 128 * OS1_S1 + 74) =
                prefactor_x * *(b + 128 * OS1_S1 + 53) -
                p_over_q * *(b + 173 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 53);
            *(b + 128 * OS1_S1 + 75) = prefactor_y * *(b + 128 * OS1_S1 + 49) -
                                       p_over_q * *(b + 177 * OS1_S1 + 49) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 49);
            *(b + 128 * OS1_S1 + 76) =
                prefactor_x * *(b + 128 * OS1_S1 + 55) -
                p_over_q * *(b + 173 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 55);
            *(b + 128 * OS1_S1 + 77) =
                prefactor_y * *(b + 128 * OS1_S1 + 50) -
                p_over_q * *(b + 177 * OS1_S1 + 50) +
                one_over_two_q * *(b + 89 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 128 * OS1_S1 + 30);
            *(b + 128 * OS1_S1 + 78) =
                prefactor_z * *(b + 128 * OS1_S1 + 50) -
                p_over_q * *(b + 178 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 50);
            *(b + 128 * OS1_S1 + 79) =
                prefactor_z * *(b + 128 * OS1_S1 + 51) -
                p_over_q * *(b + 178 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 51) +
                one_over_two_q * *(b + 128 * OS1_S1 + 30);
            *(b + 128 * OS1_S1 + 80) =
                prefactor_y * *(b + 128 * OS1_S1 + 53) -
                p_over_q * *(b + 177 * OS1_S1 + 53) +
                one_over_two_q * *(b + 89 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 33);
            *(b + 128 * OS1_S1 + 81) =
                prefactor_y * *(b + 128 * OS1_S1 + 54) -
                p_over_q * *(b + 177 * OS1_S1 + 54) +
                one_over_two_q * *(b + 89 * OS1_S1 + 54) +
                one_over_two_q * *(b + 128 * OS1_S1 + 34);
            *(b + 128 * OS1_S1 + 82) = prefactor_y * *(b + 128 * OS1_S1 + 55) -
                                       p_over_q * *(b + 177 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 55);
            *(b + 128 * OS1_S1 + 83) =
                prefactor_z * *(b + 128 * OS1_S1 + 55) -
                p_over_q * *(b + 178 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 128 * OS1_S1 + 34);
            *(b + 129 * OS1_S1 + 56) =
                prefactor_x * *(b + 129 * OS1_S1 + 35) -
                p_over_q * *(b + 174 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 129 * OS1_S1 + 20);
            *(b + 129 * OS1_S1 + 57) = prefactor_y * *(b + 129 * OS1_S1 + 35) -
                                       p_over_q * *(b + 178 * OS1_S1 + 35);
            *(b + 129 * OS1_S1 + 58) =
                prefactor_z * *(b + 129 * OS1_S1 + 35) -
                p_over_q * *(b + 179 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 35);
            *(b + 129 * OS1_S1 + 59) =
                prefactor_y * *(b + 129 * OS1_S1 + 36) -
                p_over_q * *(b + 178 * OS1_S1 + 36) +
                one_over_two_q * *(b + 129 * OS1_S1 + 20);
            *(b + 129 * OS1_S1 + 60) = prefactor_y * *(b + 129 * OS1_S1 + 37) -
                                       p_over_q * *(b + 178 * OS1_S1 + 37);
            *(b + 129 * OS1_S1 + 61) =
                prefactor_z * *(b + 129 * OS1_S1 + 37) -
                p_over_q * *(b + 179 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 37) +
                one_over_two_q * *(b + 129 * OS1_S1 + 20);
            *(b + 129 * OS1_S1 + 62) =
                prefactor_y * *(b + 129 * OS1_S1 + 38) -
                p_over_q * *(b + 178 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 21);
            *(b + 129 * OS1_S1 + 63) =
                prefactor_z * *(b + 129 * OS1_S1 + 38) -
                p_over_q * *(b + 179 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 38);
            *(b + 129 * OS1_S1 + 64) = prefactor_y * *(b + 129 * OS1_S1 + 40) -
                                       p_over_q * *(b + 178 * OS1_S1 + 40);
            *(b + 129 * OS1_S1 + 65) =
                prefactor_z * *(b + 129 * OS1_S1 + 40) -
                p_over_q * *(b + 179 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 22);
            *(b + 129 * OS1_S1 + 66) =
                prefactor_x * *(b + 129 * OS1_S1 + 45) -
                p_over_q * *(b + 174 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 45) +
                one_over_two_q * *(b + 129 * OS1_S1 + 30);
            *(b + 129 * OS1_S1 + 67) =
                prefactor_z * *(b + 129 * OS1_S1 + 41) -
                p_over_q * *(b + 179 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 41);
            *(b + 129 * OS1_S1 + 68) =
                prefactor_y * *(b + 129 * OS1_S1 + 43) -
                p_over_q * *(b + 178 * OS1_S1 + 43) +
                one_over_two_q * *(b + 129 * OS1_S1 + 25);
            *(b + 129 * OS1_S1 + 69) = prefactor_y * *(b + 129 * OS1_S1 + 44) -
                                       p_over_q * *(b + 178 * OS1_S1 + 44);
            *(b + 129 * OS1_S1 + 70) =
                prefactor_x * *(b + 129 * OS1_S1 + 49) -
                p_over_q * *(b + 174 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 49) +
                one_over_two_q * *(b + 129 * OS1_S1 + 34);
            *(b + 129 * OS1_S1 + 71) =
                prefactor_x * *(b + 129 * OS1_S1 + 50) -
                p_over_q * *(b + 174 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 50);
            *(b + 129 * OS1_S1 + 72) =
                prefactor_z * *(b + 129 * OS1_S1 + 45) -
                p_over_q * *(b + 179 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 45);
            *(b + 129 * OS1_S1 + 73) =
                prefactor_x * *(b + 129 * OS1_S1 + 52) -
                p_over_q * *(b + 174 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 52);
            *(b + 129 * OS1_S1 + 74) =
                prefactor_x * *(b + 129 * OS1_S1 + 53) -
                p_over_q * *(b + 174 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 53);
            *(b + 129 * OS1_S1 + 75) = prefactor_y * *(b + 129 * OS1_S1 + 49) -
                                       p_over_q * *(b + 178 * OS1_S1 + 49);
            *(b + 129 * OS1_S1 + 76) =
                prefactor_x * *(b + 129 * OS1_S1 + 55) -
                p_over_q * *(b + 174 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 55);
            *(b + 129 * OS1_S1 + 77) =
                prefactor_y * *(b + 129 * OS1_S1 + 50) -
                p_over_q * *(b + 178 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 129 * OS1_S1 + 30);
            *(b + 129 * OS1_S1 + 78) =
                prefactor_z * *(b + 129 * OS1_S1 + 50) -
                p_over_q * *(b + 179 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 50);
            *(b + 129 * OS1_S1 + 79) =
                prefactor_z * *(b + 129 * OS1_S1 + 51) -
                p_over_q * *(b + 179 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 51) +
                one_over_two_q * *(b + 129 * OS1_S1 + 30);
            *(b + 129 * OS1_S1 + 80) =
                prefactor_y * *(b + 129 * OS1_S1 + 53) -
                p_over_q * *(b + 178 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 33);
            *(b + 129 * OS1_S1 + 81) =
                prefactor_y * *(b + 129 * OS1_S1 + 54) -
                p_over_q * *(b + 178 * OS1_S1 + 54) +
                one_over_two_q * *(b + 129 * OS1_S1 + 34);
            *(b + 129 * OS1_S1 + 82) = prefactor_y * *(b + 129 * OS1_S1 + 55) -
                                       p_over_q * *(b + 178 * OS1_S1 + 55);
            *(b + 129 * OS1_S1 + 83) =
                prefactor_z * *(b + 129 * OS1_S1 + 55) -
                p_over_q * *(b + 179 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 129 * OS1_S1 + 34);
            *(b + 130 * OS1_S1 + 56) =
                prefactor_x * *(b + 130 * OS1_S1 + 35) -
                p_over_q * *(b + 175 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 20);
            *(b + 130 * OS1_S1 + 57) =
                prefactor_y * *(b + 130 * OS1_S1 + 35) -
                p_over_q * *(b + 180 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 35);
            *(b + 130 * OS1_S1 + 58) = prefactor_z * *(b + 130 * OS1_S1 + 35) -
                                       p_over_q * *(b + 181 * OS1_S1 + 35);
            *(b + 130 * OS1_S1 + 59) =
                prefactor_y * *(b + 130 * OS1_S1 + 36) -
                p_over_q * *(b + 180 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 36) +
                one_over_two_q * *(b + 130 * OS1_S1 + 20);
            *(b + 130 * OS1_S1 + 60) = prefactor_z * *(b + 130 * OS1_S1 + 36) -
                                       p_over_q * *(b + 181 * OS1_S1 + 36);
            *(b + 130 * OS1_S1 + 61) =
                prefactor_z * *(b + 130 * OS1_S1 + 37) -
                p_over_q * *(b + 181 * OS1_S1 + 37) +
                one_over_two_q * *(b + 130 * OS1_S1 + 20);
            *(b + 130 * OS1_S1 + 62) =
                prefactor_y * *(b + 130 * OS1_S1 + 38) -
                p_over_q * *(b + 180 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 21);
            *(b + 130 * OS1_S1 + 63) = prefactor_z * *(b + 130 * OS1_S1 + 38) -
                                       p_over_q * *(b + 181 * OS1_S1 + 38);
            *(b + 130 * OS1_S1 + 64) =
                prefactor_y * *(b + 130 * OS1_S1 + 40) -
                p_over_q * *(b + 180 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 40);
            *(b + 130 * OS1_S1 + 65) =
                prefactor_z * *(b + 130 * OS1_S1 + 40) -
                p_over_q * *(b + 181 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 22);
            *(b + 130 * OS1_S1 + 66) =
                prefactor_x * *(b + 130 * OS1_S1 + 45) -
                p_over_q * *(b + 175 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 45) +
                one_over_two_q * *(b + 130 * OS1_S1 + 30);
            *(b + 130 * OS1_S1 + 67) = prefactor_z * *(b + 130 * OS1_S1 + 41) -
                                       p_over_q * *(b + 181 * OS1_S1 + 41);
            *(b + 130 * OS1_S1 + 68) =
                prefactor_z * *(b + 130 * OS1_S1 + 42) -
                p_over_q * *(b + 181 * OS1_S1 + 42) +
                one_over_two_q * *(b + 130 * OS1_S1 + 23);
            *(b + 130 * OS1_S1 + 69) =
                prefactor_y * *(b + 130 * OS1_S1 + 44) -
                p_over_q * *(b + 180 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 44);
            *(b + 130 * OS1_S1 + 70) =
                prefactor_x * *(b + 130 * OS1_S1 + 49) -
                p_over_q * *(b + 175 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 49) +
                one_over_two_q * *(b + 130 * OS1_S1 + 34);
            *(b + 130 * OS1_S1 + 71) =
                prefactor_x * *(b + 130 * OS1_S1 + 50) -
                p_over_q * *(b + 175 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 50);
            *(b + 130 * OS1_S1 + 72) = prefactor_z * *(b + 130 * OS1_S1 + 45) -
                                       p_over_q * *(b + 181 * OS1_S1 + 45);
            *(b + 130 * OS1_S1 + 73) =
                prefactor_x * *(b + 130 * OS1_S1 + 52) -
                p_over_q * *(b + 175 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 52);
            *(b + 130 * OS1_S1 + 74) =
                prefactor_x * *(b + 130 * OS1_S1 + 53) -
                p_over_q * *(b + 175 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 53);
            *(b + 130 * OS1_S1 + 75) =
                prefactor_y * *(b + 130 * OS1_S1 + 49) -
                p_over_q * *(b + 180 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 49);
            *(b + 130 * OS1_S1 + 76) =
                prefactor_x * *(b + 130 * OS1_S1 + 55) -
                p_over_q * *(b + 175 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 55);
            *(b + 130 * OS1_S1 + 77) =
                prefactor_y * *(b + 130 * OS1_S1 + 50) -
                p_over_q * *(b + 180 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 30);
            *(b + 130 * OS1_S1 + 78) = prefactor_z * *(b + 130 * OS1_S1 + 50) -
                                       p_over_q * *(b + 181 * OS1_S1 + 50);
            *(b + 130 * OS1_S1 + 79) =
                prefactor_z * *(b + 130 * OS1_S1 + 51) -
                p_over_q * *(b + 181 * OS1_S1 + 51) +
                one_over_two_q * *(b + 130 * OS1_S1 + 30);
            *(b + 130 * OS1_S1 + 80) =
                prefactor_z * *(b + 130 * OS1_S1 + 52) -
                p_over_q * *(b + 181 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 31);
            *(b + 130 * OS1_S1 + 81) =
                prefactor_y * *(b + 130 * OS1_S1 + 54) -
                p_over_q * *(b + 180 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 54) +
                one_over_two_q * *(b + 130 * OS1_S1 + 34);
            *(b + 130 * OS1_S1 + 82) =
                prefactor_y * *(b + 130 * OS1_S1 + 55) -
                p_over_q * *(b + 180 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 55);
            *(b + 130 * OS1_S1 + 83) =
                prefactor_z * *(b + 130 * OS1_S1 + 55) -
                p_over_q * *(b + 181 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 34);
            *(b + 131 * OS1_S1 + 56) =
                prefactor_x * *(b + 131 * OS1_S1 + 35) -
                p_over_q * *(b + 176 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 20);
            *(b + 131 * OS1_S1 + 57) =
                prefactor_y * *(b + 131 * OS1_S1 + 35) -
                p_over_q * *(b + 181 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 35);
            *(b + 131 * OS1_S1 + 58) = prefactor_z * *(b + 131 * OS1_S1 + 35) -
                                       p_over_q * *(b + 182 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 35);
            *(b + 131 * OS1_S1 + 59) =
                prefactor_y * *(b + 131 * OS1_S1 + 36) -
                p_over_q * *(b + 181 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 36) +
                one_over_two_q * *(b + 131 * OS1_S1 + 20);
            *(b + 131 * OS1_S1 + 60) = prefactor_z * *(b + 131 * OS1_S1 + 36) -
                                       p_over_q * *(b + 182 * OS1_S1 + 36) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 36);
            *(b + 131 * OS1_S1 + 61) =
                prefactor_z * *(b + 131 * OS1_S1 + 37) -
                p_over_q * *(b + 182 * OS1_S1 + 37) +
                one_over_two_q * *(b + 90 * OS1_S1 + 37) +
                one_over_two_q * *(b + 131 * OS1_S1 + 20);
            *(b + 131 * OS1_S1 + 62) =
                prefactor_y * *(b + 131 * OS1_S1 + 38) -
                p_over_q * *(b + 181 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 21);
            *(b + 131 * OS1_S1 + 63) = prefactor_z * *(b + 131 * OS1_S1 + 38) -
                                       p_over_q * *(b + 182 * OS1_S1 + 38) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 38);
            *(b + 131 * OS1_S1 + 64) =
                prefactor_y * *(b + 131 * OS1_S1 + 40) -
                p_over_q * *(b + 181 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 40);
            *(b + 131 * OS1_S1 + 65) =
                prefactor_z * *(b + 131 * OS1_S1 + 40) -
                p_over_q * *(b + 182 * OS1_S1 + 40) +
                one_over_two_q * *(b + 90 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 22);
            *(b + 131 * OS1_S1 + 66) =
                prefactor_x * *(b + 131 * OS1_S1 + 45) -
                p_over_q * *(b + 176 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 45) +
                one_over_two_q * *(b + 131 * OS1_S1 + 30);
            *(b + 131 * OS1_S1 + 67) = prefactor_z * *(b + 131 * OS1_S1 + 41) -
                                       p_over_q * *(b + 182 * OS1_S1 + 41) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 41);
            *(b + 131 * OS1_S1 + 68) =
                prefactor_z * *(b + 131 * OS1_S1 + 42) -
                p_over_q * *(b + 182 * OS1_S1 + 42) +
                one_over_two_q * *(b + 90 * OS1_S1 + 42) +
                one_over_two_q * *(b + 131 * OS1_S1 + 23);
            *(b + 131 * OS1_S1 + 69) =
                prefactor_y * *(b + 131 * OS1_S1 + 44) -
                p_over_q * *(b + 181 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 44);
            *(b + 131 * OS1_S1 + 70) =
                prefactor_x * *(b + 131 * OS1_S1 + 49) -
                p_over_q * *(b + 176 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 49) +
                one_over_two_q * *(b + 131 * OS1_S1 + 34);
            *(b + 131 * OS1_S1 + 71) =
                prefactor_x * *(b + 131 * OS1_S1 + 50) -
                p_over_q * *(b + 176 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 50);
            *(b + 131 * OS1_S1 + 72) = prefactor_z * *(b + 131 * OS1_S1 + 45) -
                                       p_over_q * *(b + 182 * OS1_S1 + 45) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 45);
            *(b + 131 * OS1_S1 + 73) =
                prefactor_x * *(b + 131 * OS1_S1 + 52) -
                p_over_q * *(b + 176 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 52);
            *(b + 131 * OS1_S1 + 74) =
                prefactor_x * *(b + 131 * OS1_S1 + 53) -
                p_over_q * *(b + 176 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 53);
            *(b + 131 * OS1_S1 + 75) =
                prefactor_y * *(b + 131 * OS1_S1 + 49) -
                p_over_q * *(b + 181 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 49);
            *(b + 131 * OS1_S1 + 76) =
                prefactor_x * *(b + 131 * OS1_S1 + 55) -
                p_over_q * *(b + 176 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 55);
            *(b + 131 * OS1_S1 + 77) =
                prefactor_y * *(b + 131 * OS1_S1 + 50) -
                p_over_q * *(b + 181 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 30);
            *(b + 131 * OS1_S1 + 78) = prefactor_z * *(b + 131 * OS1_S1 + 50) -
                                       p_over_q * *(b + 182 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 50);
            *(b + 131 * OS1_S1 + 79) =
                prefactor_z * *(b + 131 * OS1_S1 + 51) -
                p_over_q * *(b + 182 * OS1_S1 + 51) +
                one_over_two_q * *(b + 90 * OS1_S1 + 51) +
                one_over_two_q * *(b + 131 * OS1_S1 + 30);
            *(b + 131 * OS1_S1 + 80) =
                prefactor_z * *(b + 131 * OS1_S1 + 52) -
                p_over_q * *(b + 182 * OS1_S1 + 52) +
                one_over_two_q * *(b + 90 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 31);
            *(b + 131 * OS1_S1 + 81) =
                prefactor_y * *(b + 131 * OS1_S1 + 54) -
                p_over_q * *(b + 181 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 54) +
                one_over_two_q * *(b + 131 * OS1_S1 + 34);
            *(b + 131 * OS1_S1 + 82) =
                prefactor_y * *(b + 131 * OS1_S1 + 55) -
                p_over_q * *(b + 181 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 55);
            *(b + 131 * OS1_S1 + 83) =
                prefactor_z * *(b + 131 * OS1_S1 + 55) -
                p_over_q * *(b + 182 * OS1_S1 + 55) +
                one_over_two_q * *(b + 90 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 34);
            *(b + 132 * OS1_S1 + 56) =
                prefactor_x * *(b + 132 * OS1_S1 + 35) -
                p_over_q * *(b + 177 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 20);
            *(b + 132 * OS1_S1 + 57) =
                prefactor_y * *(b + 132 * OS1_S1 + 35) -
                p_over_q * *(b + 182 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 35);
            *(b + 132 * OS1_S1 + 58) =
                prefactor_z * *(b + 132 * OS1_S1 + 35) -
                p_over_q * *(b + 183 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 35);
            *(b + 132 * OS1_S1 + 59) =
                prefactor_y * *(b + 132 * OS1_S1 + 36) -
                p_over_q * *(b + 182 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 36) +
                one_over_two_q * *(b + 132 * OS1_S1 + 20);
            *(b + 132 * OS1_S1 + 60) =
                prefactor_z * *(b + 132 * OS1_S1 + 36) -
                p_over_q * *(b + 183 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 36);
            *(b + 132 * OS1_S1 + 61) =
                prefactor_z * *(b + 132 * OS1_S1 + 37) -
                p_over_q * *(b + 183 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 37) +
                one_over_two_q * *(b + 132 * OS1_S1 + 20);
            *(b + 132 * OS1_S1 + 62) =
                prefactor_y * *(b + 132 * OS1_S1 + 38) -
                p_over_q * *(b + 182 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 21);
            *(b + 132 * OS1_S1 + 63) =
                prefactor_z * *(b + 132 * OS1_S1 + 38) -
                p_over_q * *(b + 183 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 38);
            *(b + 132 * OS1_S1 + 64) =
                prefactor_y * *(b + 132 * OS1_S1 + 40) -
                p_over_q * *(b + 182 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 40);
            *(b + 132 * OS1_S1 + 65) =
                prefactor_z * *(b + 132 * OS1_S1 + 40) -
                p_over_q * *(b + 183 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 22);
            *(b + 132 * OS1_S1 + 66) =
                prefactor_x * *(b + 132 * OS1_S1 + 45) -
                p_over_q * *(b + 177 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 45) +
                one_over_two_q * *(b + 132 * OS1_S1 + 30);
            *(b + 132 * OS1_S1 + 67) =
                prefactor_z * *(b + 132 * OS1_S1 + 41) -
                p_over_q * *(b + 183 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 41);
            *(b + 132 * OS1_S1 + 68) =
                prefactor_z * *(b + 132 * OS1_S1 + 42) -
                p_over_q * *(b + 183 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 42) +
                one_over_two_q * *(b + 132 * OS1_S1 + 23);
            *(b + 132 * OS1_S1 + 69) =
                prefactor_y * *(b + 132 * OS1_S1 + 44) -
                p_over_q * *(b + 182 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 44);
            *(b + 132 * OS1_S1 + 70) =
                prefactor_x * *(b + 132 * OS1_S1 + 49) -
                p_over_q * *(b + 177 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 49) +
                one_over_two_q * *(b + 132 * OS1_S1 + 34);
            *(b + 132 * OS1_S1 + 71) =
                prefactor_x * *(b + 132 * OS1_S1 + 50) -
                p_over_q * *(b + 177 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 50);
            *(b + 132 * OS1_S1 + 72) =
                prefactor_z * *(b + 132 * OS1_S1 + 45) -
                p_over_q * *(b + 183 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 45);
            *(b + 132 * OS1_S1 + 73) =
                prefactor_x * *(b + 132 * OS1_S1 + 52) -
                p_over_q * *(b + 177 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 52);
            *(b + 132 * OS1_S1 + 74) =
                prefactor_x * *(b + 132 * OS1_S1 + 53) -
                p_over_q * *(b + 177 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 53);
            *(b + 132 * OS1_S1 + 75) =
                prefactor_y * *(b + 132 * OS1_S1 + 49) -
                p_over_q * *(b + 182 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 49);
            *(b + 132 * OS1_S1 + 76) =
                prefactor_x * *(b + 132 * OS1_S1 + 55) -
                p_over_q * *(b + 177 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 55);
            *(b + 132 * OS1_S1 + 77) =
                prefactor_y * *(b + 132 * OS1_S1 + 50) -
                p_over_q * *(b + 182 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 30);
            *(b + 132 * OS1_S1 + 78) =
                prefactor_z * *(b + 132 * OS1_S1 + 50) -
                p_over_q * *(b + 183 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 50);
            *(b + 132 * OS1_S1 + 79) =
                prefactor_z * *(b + 132 * OS1_S1 + 51) -
                p_over_q * *(b + 183 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 51) +
                one_over_two_q * *(b + 132 * OS1_S1 + 30);
            *(b + 132 * OS1_S1 + 80) =
                prefactor_z * *(b + 132 * OS1_S1 + 52) -
                p_over_q * *(b + 183 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 31);
            *(b + 132 * OS1_S1 + 81) =
                prefactor_y * *(b + 132 * OS1_S1 + 54) -
                p_over_q * *(b + 182 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 54) +
                one_over_two_q * *(b + 132 * OS1_S1 + 34);
            *(b + 132 * OS1_S1 + 82) =
                prefactor_y * *(b + 132 * OS1_S1 + 55) -
                p_over_q * *(b + 182 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 55);
            *(b + 132 * OS1_S1 + 83) =
                prefactor_z * *(b + 132 * OS1_S1 + 55) -
                p_over_q * *(b + 183 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 34);
            *(b + 133 * OS1_S1 + 56) =
                prefactor_x * *(b + 133 * OS1_S1 + 35) -
                p_over_q * *(b + 178 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 20);
            *(b + 133 * OS1_S1 + 57) = prefactor_y * *(b + 133 * OS1_S1 + 35) -
                                       p_over_q * *(b + 183 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 35);
            *(b + 133 * OS1_S1 + 58) =
                prefactor_z * *(b + 133 * OS1_S1 + 35) -
                p_over_q * *(b + 184 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 35);
            *(b + 133 * OS1_S1 + 59) =
                prefactor_y * *(b + 133 * OS1_S1 + 36) -
                p_over_q * *(b + 183 * OS1_S1 + 36) +
                one_over_two_q * *(b + 93 * OS1_S1 + 36) +
                one_over_two_q * *(b + 133 * OS1_S1 + 20);
            *(b + 133 * OS1_S1 + 60) = prefactor_y * *(b + 133 * OS1_S1 + 37) -
                                       p_over_q * *(b + 183 * OS1_S1 + 37) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 37);
            *(b + 133 * OS1_S1 + 61) =
                prefactor_z * *(b + 133 * OS1_S1 + 37) -
                p_over_q * *(b + 184 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 37) +
                one_over_two_q * *(b + 133 * OS1_S1 + 20);
            *(b + 133 * OS1_S1 + 62) =
                prefactor_y * *(b + 133 * OS1_S1 + 38) -
                p_over_q * *(b + 183 * OS1_S1 + 38) +
                one_over_two_q * *(b + 93 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 21);
            *(b + 133 * OS1_S1 + 63) =
                prefactor_z * *(b + 133 * OS1_S1 + 38) -
                p_over_q * *(b + 184 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 38);
            *(b + 133 * OS1_S1 + 64) = prefactor_y * *(b + 133 * OS1_S1 + 40) -
                                       p_over_q * *(b + 183 * OS1_S1 + 40) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 40);
            *(b + 133 * OS1_S1 + 65) =
                prefactor_z * *(b + 133 * OS1_S1 + 40) -
                p_over_q * *(b + 184 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 22);
            *(b + 133 * OS1_S1 + 66) =
                prefactor_x * *(b + 133 * OS1_S1 + 45) -
                p_over_q * *(b + 178 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 45) +
                one_over_two_q * *(b + 133 * OS1_S1 + 30);
            *(b + 133 * OS1_S1 + 67) =
                prefactor_z * *(b + 133 * OS1_S1 + 41) -
                p_over_q * *(b + 184 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 41);
            *(b + 133 * OS1_S1 + 68) =
                prefactor_y * *(b + 133 * OS1_S1 + 43) -
                p_over_q * *(b + 183 * OS1_S1 + 43) +
                one_over_two_q * *(b + 93 * OS1_S1 + 43) +
                one_over_two_q * *(b + 133 * OS1_S1 + 25);
            *(b + 133 * OS1_S1 + 69) = prefactor_y * *(b + 133 * OS1_S1 + 44) -
                                       p_over_q * *(b + 183 * OS1_S1 + 44) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 44);
            *(b + 133 * OS1_S1 + 70) =
                prefactor_x * *(b + 133 * OS1_S1 + 49) -
                p_over_q * *(b + 178 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 49) +
                one_over_two_q * *(b + 133 * OS1_S1 + 34);
            *(b + 133 * OS1_S1 + 71) =
                prefactor_x * *(b + 133 * OS1_S1 + 50) -
                p_over_q * *(b + 178 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 50);
            *(b + 133 * OS1_S1 + 72) =
                prefactor_z * *(b + 133 * OS1_S1 + 45) -
                p_over_q * *(b + 184 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 45);
            *(b + 133 * OS1_S1 + 73) =
                prefactor_x * *(b + 133 * OS1_S1 + 52) -
                p_over_q * *(b + 178 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 52);
            *(b + 133 * OS1_S1 + 74) =
                prefactor_x * *(b + 133 * OS1_S1 + 53) -
                p_over_q * *(b + 178 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 53);
            *(b + 133 * OS1_S1 + 75) = prefactor_y * *(b + 133 * OS1_S1 + 49) -
                                       p_over_q * *(b + 183 * OS1_S1 + 49) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 49);
            *(b + 133 * OS1_S1 + 76) =
                prefactor_x * *(b + 133 * OS1_S1 + 55) -
                p_over_q * *(b + 178 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 55);
            *(b + 133 * OS1_S1 + 77) =
                prefactor_y * *(b + 133 * OS1_S1 + 50) -
                p_over_q * *(b + 183 * OS1_S1 + 50) +
                one_over_two_q * *(b + 93 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 30);
            *(b + 133 * OS1_S1 + 78) =
                prefactor_z * *(b + 133 * OS1_S1 + 50) -
                p_over_q * *(b + 184 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 50);
            *(b + 133 * OS1_S1 + 79) =
                prefactor_z * *(b + 133 * OS1_S1 + 51) -
                p_over_q * *(b + 184 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 51) +
                one_over_two_q * *(b + 133 * OS1_S1 + 30);
            *(b + 133 * OS1_S1 + 80) =
                prefactor_y * *(b + 133 * OS1_S1 + 53) -
                p_over_q * *(b + 183 * OS1_S1 + 53) +
                one_over_two_q * *(b + 93 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 33);
            *(b + 133 * OS1_S1 + 81) =
                prefactor_y * *(b + 133 * OS1_S1 + 54) -
                p_over_q * *(b + 183 * OS1_S1 + 54) +
                one_over_two_q * *(b + 93 * OS1_S1 + 54) +
                one_over_two_q * *(b + 133 * OS1_S1 + 34);
            *(b + 133 * OS1_S1 + 82) = prefactor_y * *(b + 133 * OS1_S1 + 55) -
                                       p_over_q * *(b + 183 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 55);
            *(b + 133 * OS1_S1 + 83) =
                prefactor_z * *(b + 133 * OS1_S1 + 55) -
                p_over_q * *(b + 184 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 34);
            *(b + 134 * OS1_S1 + 56) =
                prefactor_x * *(b + 134 * OS1_S1 + 35) -
                p_over_q * *(b + 179 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 20);
            *(b + 134 * OS1_S1 + 57) = prefactor_y * *(b + 134 * OS1_S1 + 35) -
                                       p_over_q * *(b + 184 * OS1_S1 + 35);
            *(b + 134 * OS1_S1 + 58) =
                prefactor_z * *(b + 134 * OS1_S1 + 35) -
                p_over_q * *(b + 185 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 35);
            *(b + 134 * OS1_S1 + 59) =
                prefactor_y * *(b + 134 * OS1_S1 + 36) -
                p_over_q * *(b + 184 * OS1_S1 + 36) +
                one_over_two_q * *(b + 134 * OS1_S1 + 20);
            *(b + 134 * OS1_S1 + 60) = prefactor_y * *(b + 134 * OS1_S1 + 37) -
                                       p_over_q * *(b + 184 * OS1_S1 + 37);
            *(b + 134 * OS1_S1 + 61) =
                prefactor_z * *(b + 134 * OS1_S1 + 37) -
                p_over_q * *(b + 185 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 37) +
                one_over_two_q * *(b + 134 * OS1_S1 + 20);
            *(b + 134 * OS1_S1 + 62) =
                prefactor_y * *(b + 134 * OS1_S1 + 38) -
                p_over_q * *(b + 184 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 21);
            *(b + 134 * OS1_S1 + 63) =
                prefactor_z * *(b + 134 * OS1_S1 + 38) -
                p_over_q * *(b + 185 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 38);
            *(b + 134 * OS1_S1 + 64) = prefactor_y * *(b + 134 * OS1_S1 + 40) -
                                       p_over_q * *(b + 184 * OS1_S1 + 40);
            *(b + 134 * OS1_S1 + 65) =
                prefactor_z * *(b + 134 * OS1_S1 + 40) -
                p_over_q * *(b + 185 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 22);
            *(b + 134 * OS1_S1 + 66) =
                prefactor_x * *(b + 134 * OS1_S1 + 45) -
                p_over_q * *(b + 179 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 45) +
                one_over_two_q * *(b + 134 * OS1_S1 + 30);
            *(b + 134 * OS1_S1 + 67) =
                prefactor_z * *(b + 134 * OS1_S1 + 41) -
                p_over_q * *(b + 185 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 41);
            *(b + 134 * OS1_S1 + 68) =
                prefactor_y * *(b + 134 * OS1_S1 + 43) -
                p_over_q * *(b + 184 * OS1_S1 + 43) +
                one_over_two_q * *(b + 134 * OS1_S1 + 25);
            *(b + 134 * OS1_S1 + 69) = prefactor_y * *(b + 134 * OS1_S1 + 44) -
                                       p_over_q * *(b + 184 * OS1_S1 + 44);
            *(b + 134 * OS1_S1 + 70) =
                prefactor_x * *(b + 134 * OS1_S1 + 49) -
                p_over_q * *(b + 179 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 49) +
                one_over_two_q * *(b + 134 * OS1_S1 + 34);
            *(b + 134 * OS1_S1 + 71) =
                prefactor_x * *(b + 134 * OS1_S1 + 50) -
                p_over_q * *(b + 179 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 50);
            *(b + 134 * OS1_S1 + 72) =
                prefactor_z * *(b + 134 * OS1_S1 + 45) -
                p_over_q * *(b + 185 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 45);
            *(b + 134 * OS1_S1 + 73) =
                prefactor_x * *(b + 134 * OS1_S1 + 52) -
                p_over_q * *(b + 179 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 52);
            *(b + 134 * OS1_S1 + 74) =
                prefactor_x * *(b + 134 * OS1_S1 + 53) -
                p_over_q * *(b + 179 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 53);
            *(b + 134 * OS1_S1 + 75) = prefactor_y * *(b + 134 * OS1_S1 + 49) -
                                       p_over_q * *(b + 184 * OS1_S1 + 49);
            *(b + 134 * OS1_S1 + 76) =
                prefactor_x * *(b + 134 * OS1_S1 + 55) -
                p_over_q * *(b + 179 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 55);
            *(b + 134 * OS1_S1 + 77) =
                prefactor_y * *(b + 134 * OS1_S1 + 50) -
                p_over_q * *(b + 184 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 30);
            *(b + 134 * OS1_S1 + 78) =
                prefactor_z * *(b + 134 * OS1_S1 + 50) -
                p_over_q * *(b + 185 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 50);
            *(b + 134 * OS1_S1 + 79) =
                prefactor_z * *(b + 134 * OS1_S1 + 51) -
                p_over_q * *(b + 185 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 51) +
                one_over_two_q * *(b + 134 * OS1_S1 + 30);
            *(b + 134 * OS1_S1 + 80) =
                prefactor_y * *(b + 134 * OS1_S1 + 53) -
                p_over_q * *(b + 184 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 33);
            *(b + 134 * OS1_S1 + 81) =
                prefactor_y * *(b + 134 * OS1_S1 + 54) -
                p_over_q * *(b + 184 * OS1_S1 + 54) +
                one_over_two_q * *(b + 134 * OS1_S1 + 34);
            *(b + 134 * OS1_S1 + 82) = prefactor_y * *(b + 134 * OS1_S1 + 55) -
                                       p_over_q * *(b + 184 * OS1_S1 + 55);
            *(b + 134 * OS1_S1 + 83) =
                prefactor_z * *(b + 134 * OS1_S1 + 55) -
                p_over_q * *(b + 185 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 34);
            *(b + 135 * OS1_S1 + 56) =
                prefactor_x * *(b + 135 * OS1_S1 + 35) -
                p_over_q * *(b + 180 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 135 * OS1_S1 + 20);
            *(b + 135 * OS1_S1 + 57) =
                prefactor_y * *(b + 135 * OS1_S1 + 35) -
                p_over_q * *(b + 186 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 35);
            *(b + 135 * OS1_S1 + 58) = prefactor_z * *(b + 135 * OS1_S1 + 35) -
                                       p_over_q * *(b + 187 * OS1_S1 + 35);
            *(b + 135 * OS1_S1 + 59) =
                prefactor_y * *(b + 135 * OS1_S1 + 36) -
                p_over_q * *(b + 186 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 36) +
                one_over_two_q * *(b + 135 * OS1_S1 + 20);
            *(b + 135 * OS1_S1 + 60) = prefactor_z * *(b + 135 * OS1_S1 + 36) -
                                       p_over_q * *(b + 187 * OS1_S1 + 36);
            *(b + 135 * OS1_S1 + 61) =
                prefactor_z * *(b + 135 * OS1_S1 + 37) -
                p_over_q * *(b + 187 * OS1_S1 + 37) +
                one_over_two_q * *(b + 135 * OS1_S1 + 20);
            *(b + 135 * OS1_S1 + 62) =
                prefactor_x * *(b + 135 * OS1_S1 + 41) -
                p_over_q * *(b + 180 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 26);
            *(b + 135 * OS1_S1 + 63) = prefactor_z * *(b + 135 * OS1_S1 + 38) -
                                       p_over_q * *(b + 187 * OS1_S1 + 38);
            *(b + 135 * OS1_S1 + 64) =
                prefactor_y * *(b + 135 * OS1_S1 + 40) -
                p_over_q * *(b + 186 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 40);
            *(b + 135 * OS1_S1 + 65) =
                prefactor_z * *(b + 135 * OS1_S1 + 40) -
                p_over_q * *(b + 187 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 22);
            *(b + 135 * OS1_S1 + 66) =
                prefactor_x * *(b + 135 * OS1_S1 + 45) -
                p_over_q * *(b + 180 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 45) +
                one_over_two_q * *(b + 135 * OS1_S1 + 30);
            *(b + 135 * OS1_S1 + 67) = prefactor_z * *(b + 135 * OS1_S1 + 41) -
                                       p_over_q * *(b + 187 * OS1_S1 + 41);
            *(b + 135 * OS1_S1 + 68) =
                prefactor_z * *(b + 135 * OS1_S1 + 42) -
                p_over_q * *(b + 187 * OS1_S1 + 42) +
                one_over_two_q * *(b + 135 * OS1_S1 + 23);
            *(b + 135 * OS1_S1 + 69) =
                prefactor_y * *(b + 135 * OS1_S1 + 44) -
                p_over_q * *(b + 186 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 44);
            *(b + 135 * OS1_S1 + 70) =
                prefactor_x * *(b + 135 * OS1_S1 + 49) -
                p_over_q * *(b + 180 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 49) +
                one_over_two_q * *(b + 135 * OS1_S1 + 34);
            *(b + 135 * OS1_S1 + 71) =
                prefactor_x * *(b + 135 * OS1_S1 + 50) -
                p_over_q * *(b + 180 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 50);
            *(b + 135 * OS1_S1 + 72) = prefactor_z * *(b + 135 * OS1_S1 + 45) -
                                       p_over_q * *(b + 187 * OS1_S1 + 45);
            *(b + 135 * OS1_S1 + 73) =
                prefactor_x * *(b + 135 * OS1_S1 + 52) -
                p_over_q * *(b + 180 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 52);
            *(b + 135 * OS1_S1 + 74) =
                prefactor_x * *(b + 135 * OS1_S1 + 53) -
                p_over_q * *(b + 180 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 53);
            *(b + 135 * OS1_S1 + 75) =
                prefactor_x * *(b + 135 * OS1_S1 + 54) -
                p_over_q * *(b + 180 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 54);
            *(b + 135 * OS1_S1 + 76) =
                prefactor_x * *(b + 135 * OS1_S1 + 55) -
                p_over_q * *(b + 180 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 55);
            *(b + 135 * OS1_S1 + 77) =
                prefactor_y * *(b + 135 * OS1_S1 + 50) -
                p_over_q * *(b + 186 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 135 * OS1_S1 + 30);
            *(b + 135 * OS1_S1 + 78) = prefactor_z * *(b + 135 * OS1_S1 + 50) -
                                       p_over_q * *(b + 187 * OS1_S1 + 50);
            *(b + 135 * OS1_S1 + 79) =
                prefactor_z * *(b + 135 * OS1_S1 + 51) -
                p_over_q * *(b + 187 * OS1_S1 + 51) +
                one_over_two_q * *(b + 135 * OS1_S1 + 30);
            *(b + 135 * OS1_S1 + 80) =
                prefactor_z * *(b + 135 * OS1_S1 + 52) -
                p_over_q * *(b + 187 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 31);
            *(b + 135 * OS1_S1 + 81) =
                prefactor_y * *(b + 135 * OS1_S1 + 54) -
                p_over_q * *(b + 186 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 54) +
                one_over_two_q * *(b + 135 * OS1_S1 + 34);
            *(b + 135 * OS1_S1 + 82) =
                prefactor_y * *(b + 135 * OS1_S1 + 55) -
                p_over_q * *(b + 186 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 55);
            *(b + 135 * OS1_S1 + 83) =
                prefactor_z * *(b + 135 * OS1_S1 + 55) -
                p_over_q * *(b + 187 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 135 * OS1_S1 + 34);
            *(b + 136 * OS1_S1 + 56) =
                prefactor_x * *(b + 136 * OS1_S1 + 35) -
                p_over_q * *(b + 181 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 20);
            *(b + 136 * OS1_S1 + 57) =
                prefactor_y * *(b + 136 * OS1_S1 + 35) -
                p_over_q * *(b + 187 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 35);
            *(b + 136 * OS1_S1 + 58) = prefactor_z * *(b + 136 * OS1_S1 + 35) -
                                       p_over_q * *(b + 188 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 35);
            *(b + 136 * OS1_S1 + 59) =
                prefactor_y * *(b + 136 * OS1_S1 + 36) -
                p_over_q * *(b + 187 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 36) +
                one_over_two_q * *(b + 136 * OS1_S1 + 20);
            *(b + 136 * OS1_S1 + 60) = prefactor_z * *(b + 136 * OS1_S1 + 36) -
                                       p_over_q * *(b + 188 * OS1_S1 + 36) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 36);
            *(b + 136 * OS1_S1 + 61) =
                prefactor_z * *(b + 136 * OS1_S1 + 37) -
                p_over_q * *(b + 188 * OS1_S1 + 37) +
                one_over_two_q * *(b + 94 * OS1_S1 + 37) +
                one_over_two_q * *(b + 136 * OS1_S1 + 20);
            *(b + 136 * OS1_S1 + 62) =
                prefactor_x * *(b + 136 * OS1_S1 + 41) -
                p_over_q * *(b + 181 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 26);
            *(b + 136 * OS1_S1 + 63) = prefactor_z * *(b + 136 * OS1_S1 + 38) -
                                       p_over_q * *(b + 188 * OS1_S1 + 38) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 38);
            *(b + 136 * OS1_S1 + 64) =
                prefactor_y * *(b + 136 * OS1_S1 + 40) -
                p_over_q * *(b + 187 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 40);
            *(b + 136 * OS1_S1 + 65) =
                prefactor_z * *(b + 136 * OS1_S1 + 40) -
                p_over_q * *(b + 188 * OS1_S1 + 40) +
                one_over_two_q * *(b + 94 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 22);
            *(b + 136 * OS1_S1 + 66) =
                prefactor_x * *(b + 136 * OS1_S1 + 45) -
                p_over_q * *(b + 181 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 45) +
                one_over_two_q * *(b + 136 * OS1_S1 + 30);
            *(b + 136 * OS1_S1 + 67) = prefactor_z * *(b + 136 * OS1_S1 + 41) -
                                       p_over_q * *(b + 188 * OS1_S1 + 41) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 41);
            *(b + 136 * OS1_S1 + 68) =
                prefactor_z * *(b + 136 * OS1_S1 + 42) -
                p_over_q * *(b + 188 * OS1_S1 + 42) +
                one_over_two_q * *(b + 94 * OS1_S1 + 42) +
                one_over_two_q * *(b + 136 * OS1_S1 + 23);
            *(b + 136 * OS1_S1 + 69) =
                prefactor_y * *(b + 136 * OS1_S1 + 44) -
                p_over_q * *(b + 187 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 44);
            *(b + 136 * OS1_S1 + 70) =
                prefactor_x * *(b + 136 * OS1_S1 + 49) -
                p_over_q * *(b + 181 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 49) +
                one_over_two_q * *(b + 136 * OS1_S1 + 34);
            *(b + 136 * OS1_S1 + 71) =
                prefactor_x * *(b + 136 * OS1_S1 + 50) -
                p_over_q * *(b + 181 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 50);
            *(b + 136 * OS1_S1 + 72) = prefactor_z * *(b + 136 * OS1_S1 + 45) -
                                       p_over_q * *(b + 188 * OS1_S1 + 45) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 45);
            *(b + 136 * OS1_S1 + 73) =
                prefactor_x * *(b + 136 * OS1_S1 + 52) -
                p_over_q * *(b + 181 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 52);
            *(b + 136 * OS1_S1 + 74) =
                prefactor_x * *(b + 136 * OS1_S1 + 53) -
                p_over_q * *(b + 181 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 53);
            *(b + 136 * OS1_S1 + 75) =
                prefactor_x * *(b + 136 * OS1_S1 + 54) -
                p_over_q * *(b + 181 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 54);
            *(b + 136 * OS1_S1 + 76) =
                prefactor_x * *(b + 136 * OS1_S1 + 55) -
                p_over_q * *(b + 181 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 55);
            *(b + 136 * OS1_S1 + 77) =
                prefactor_y * *(b + 136 * OS1_S1 + 50) -
                p_over_q * *(b + 187 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 30);
            *(b + 136 * OS1_S1 + 78) = prefactor_z * *(b + 136 * OS1_S1 + 50) -
                                       p_over_q * *(b + 188 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 50);
            *(b + 136 * OS1_S1 + 79) =
                prefactor_z * *(b + 136 * OS1_S1 + 51) -
                p_over_q * *(b + 188 * OS1_S1 + 51) +
                one_over_two_q * *(b + 94 * OS1_S1 + 51) +
                one_over_two_q * *(b + 136 * OS1_S1 + 30);
            *(b + 136 * OS1_S1 + 80) =
                prefactor_z * *(b + 136 * OS1_S1 + 52) -
                p_over_q * *(b + 188 * OS1_S1 + 52) +
                one_over_two_q * *(b + 94 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 31);
            *(b + 136 * OS1_S1 + 81) =
                prefactor_y * *(b + 136 * OS1_S1 + 54) -
                p_over_q * *(b + 187 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 54) +
                one_over_two_q * *(b + 136 * OS1_S1 + 34);
            *(b + 136 * OS1_S1 + 82) =
                prefactor_y * *(b + 136 * OS1_S1 + 55) -
                p_over_q * *(b + 187 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 55);
            *(b + 136 * OS1_S1 + 83) =
                prefactor_z * *(b + 136 * OS1_S1 + 55) -
                p_over_q * *(b + 188 * OS1_S1 + 55) +
                one_over_two_q * *(b + 94 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 34);
            *(b + 137 * OS1_S1 + 56) =
                prefactor_x * *(b + 137 * OS1_S1 + 35) -
                p_over_q * *(b + 182 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 137 * OS1_S1 + 20);
            *(b + 137 * OS1_S1 + 57) =
                prefactor_y * *(b + 137 * OS1_S1 + 35) -
                p_over_q * *(b + 188 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 35);
            *(b + 137 * OS1_S1 + 58) =
                prefactor_z * *(b + 137 * OS1_S1 + 35) -
                p_over_q * *(b + 189 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 35);
            *(b + 137 * OS1_S1 + 59) =
                prefactor_y * *(b + 137 * OS1_S1 + 36) -
                p_over_q * *(b + 188 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 36) +
                one_over_two_q * *(b + 137 * OS1_S1 + 20);
            *(b + 137 * OS1_S1 + 60) =
                prefactor_z * *(b + 137 * OS1_S1 + 36) -
                p_over_q * *(b + 189 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 36);
            *(b + 137 * OS1_S1 + 61) =
                prefactor_z * *(b + 137 * OS1_S1 + 37) -
                p_over_q * *(b + 189 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 37) +
                one_over_two_q * *(b + 137 * OS1_S1 + 20);
            *(b + 137 * OS1_S1 + 62) =
                prefactor_y * *(b + 137 * OS1_S1 + 38) -
                p_over_q * *(b + 188 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 21);
            *(b + 137 * OS1_S1 + 63) =
                prefactor_z * *(b + 137 * OS1_S1 + 38) -
                p_over_q * *(b + 189 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 38);
            *(b + 137 * OS1_S1 + 64) =
                prefactor_y * *(b + 137 * OS1_S1 + 40) -
                p_over_q * *(b + 188 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 40);
            *(b + 137 * OS1_S1 + 65) =
                prefactor_z * *(b + 137 * OS1_S1 + 40) -
                p_over_q * *(b + 189 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 22);
            *(b + 137 * OS1_S1 + 66) =
                prefactor_x * *(b + 137 * OS1_S1 + 45) -
                p_over_q * *(b + 182 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 45) +
                one_over_two_q * *(b + 137 * OS1_S1 + 30);
            *(b + 137 * OS1_S1 + 67) =
                prefactor_z * *(b + 137 * OS1_S1 + 41) -
                p_over_q * *(b + 189 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 41);
            *(b + 137 * OS1_S1 + 68) =
                prefactor_z * *(b + 137 * OS1_S1 + 42) -
                p_over_q * *(b + 189 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 42) +
                one_over_two_q * *(b + 137 * OS1_S1 + 23);
            *(b + 137 * OS1_S1 + 69) =
                prefactor_y * *(b + 137 * OS1_S1 + 44) -
                p_over_q * *(b + 188 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 44);
            *(b + 137 * OS1_S1 + 70) =
                prefactor_x * *(b + 137 * OS1_S1 + 49) -
                p_over_q * *(b + 182 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 49) +
                one_over_two_q * *(b + 137 * OS1_S1 + 34);
            *(b + 137 * OS1_S1 + 71) =
                prefactor_x * *(b + 137 * OS1_S1 + 50) -
                p_over_q * *(b + 182 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 50);
            *(b + 137 * OS1_S1 + 72) =
                prefactor_z * *(b + 137 * OS1_S1 + 45) -
                p_over_q * *(b + 189 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 45);
            *(b + 137 * OS1_S1 + 73) =
                prefactor_x * *(b + 137 * OS1_S1 + 52) -
                p_over_q * *(b + 182 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 52);
            *(b + 137 * OS1_S1 + 74) =
                prefactor_x * *(b + 137 * OS1_S1 + 53) -
                p_over_q * *(b + 182 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 53);
            *(b + 137 * OS1_S1 + 75) =
                prefactor_y * *(b + 137 * OS1_S1 + 49) -
                p_over_q * *(b + 188 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 49);
            *(b + 137 * OS1_S1 + 76) =
                prefactor_x * *(b + 137 * OS1_S1 + 55) -
                p_over_q * *(b + 182 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 55);
            *(b + 137 * OS1_S1 + 77) =
                prefactor_y * *(b + 137 * OS1_S1 + 50) -
                p_over_q * *(b + 188 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 137 * OS1_S1 + 30);
            *(b + 137 * OS1_S1 + 78) =
                prefactor_z * *(b + 137 * OS1_S1 + 50) -
                p_over_q * *(b + 189 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 50);
            *(b + 137 * OS1_S1 + 79) =
                prefactor_z * *(b + 137 * OS1_S1 + 51) -
                p_over_q * *(b + 189 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 51) +
                one_over_two_q * *(b + 137 * OS1_S1 + 30);
            *(b + 137 * OS1_S1 + 80) =
                prefactor_z * *(b + 137 * OS1_S1 + 52) -
                p_over_q * *(b + 189 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 31);
            *(b + 137 * OS1_S1 + 81) =
                prefactor_y * *(b + 137 * OS1_S1 + 54) -
                p_over_q * *(b + 188 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 54) +
                one_over_two_q * *(b + 137 * OS1_S1 + 34);
            *(b + 137 * OS1_S1 + 82) =
                prefactor_y * *(b + 137 * OS1_S1 + 55) -
                p_over_q * *(b + 188 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 55);
            *(b + 137 * OS1_S1 + 83) =
                prefactor_z * *(b + 137 * OS1_S1 + 55) -
                p_over_q * *(b + 189 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 137 * OS1_S1 + 34);
            *(b + 138 * OS1_S1 + 56) =
                prefactor_x * *(b + 138 * OS1_S1 + 35) -
                p_over_q * *(b + 183 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 138 * OS1_S1 + 20);
            *(b + 138 * OS1_S1 + 57) =
                prefactor_y * *(b + 138 * OS1_S1 + 35) -
                p_over_q * *(b + 189 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 35);
            *(b + 138 * OS1_S1 + 58) =
                prefactor_z * *(b + 138 * OS1_S1 + 35) -
                p_over_q * *(b + 190 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 35);
            *(b + 138 * OS1_S1 + 59) =
                prefactor_y * *(b + 138 * OS1_S1 + 36) -
                p_over_q * *(b + 189 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 36) +
                one_over_two_q * *(b + 138 * OS1_S1 + 20);
            *(b + 138 * OS1_S1 + 60) =
                prefactor_y * *(b + 138 * OS1_S1 + 37) -
                p_over_q * *(b + 189 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 37);
            *(b + 138 * OS1_S1 + 61) =
                prefactor_z * *(b + 138 * OS1_S1 + 37) -
                p_over_q * *(b + 190 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 37) +
                one_over_two_q * *(b + 138 * OS1_S1 + 20);
            *(b + 138 * OS1_S1 + 62) =
                prefactor_y * *(b + 138 * OS1_S1 + 38) -
                p_over_q * *(b + 189 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 21);
            *(b + 138 * OS1_S1 + 63) =
                prefactor_z * *(b + 138 * OS1_S1 + 38) -
                p_over_q * *(b + 190 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 38);
            *(b + 138 * OS1_S1 + 64) =
                prefactor_y * *(b + 138 * OS1_S1 + 40) -
                p_over_q * *(b + 189 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 40);
            *(b + 138 * OS1_S1 + 65) =
                prefactor_z * *(b + 138 * OS1_S1 + 40) -
                p_over_q * *(b + 190 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 22);
            *(b + 138 * OS1_S1 + 66) =
                prefactor_x * *(b + 138 * OS1_S1 + 45) -
                p_over_q * *(b + 183 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 45) +
                one_over_two_q * *(b + 138 * OS1_S1 + 30);
            *(b + 138 * OS1_S1 + 67) =
                prefactor_z * *(b + 138 * OS1_S1 + 41) -
                p_over_q * *(b + 190 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 41);
            *(b + 138 * OS1_S1 + 68) =
                prefactor_y * *(b + 138 * OS1_S1 + 43) -
                p_over_q * *(b + 189 * OS1_S1 + 43) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 43) +
                one_over_two_q * *(b + 138 * OS1_S1 + 25);
            *(b + 138 * OS1_S1 + 69) =
                prefactor_y * *(b + 138 * OS1_S1 + 44) -
                p_over_q * *(b + 189 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 44);
            *(b + 138 * OS1_S1 + 70) =
                prefactor_x * *(b + 138 * OS1_S1 + 49) -
                p_over_q * *(b + 183 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 49) +
                one_over_two_q * *(b + 138 * OS1_S1 + 34);
            *(b + 138 * OS1_S1 + 71) =
                prefactor_x * *(b + 138 * OS1_S1 + 50) -
                p_over_q * *(b + 183 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 50);
            *(b + 138 * OS1_S1 + 72) =
                prefactor_z * *(b + 138 * OS1_S1 + 45) -
                p_over_q * *(b + 190 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 45);
            *(b + 138 * OS1_S1 + 73) =
                prefactor_x * *(b + 138 * OS1_S1 + 52) -
                p_over_q * *(b + 183 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 52);
            *(b + 138 * OS1_S1 + 74) =
                prefactor_x * *(b + 138 * OS1_S1 + 53) -
                p_over_q * *(b + 183 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 53);
            *(b + 138 * OS1_S1 + 75) =
                prefactor_y * *(b + 138 * OS1_S1 + 49) -
                p_over_q * *(b + 189 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 49);
            *(b + 138 * OS1_S1 + 76) =
                prefactor_x * *(b + 138 * OS1_S1 + 55) -
                p_over_q * *(b + 183 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 55);
            *(b + 138 * OS1_S1 + 77) =
                prefactor_y * *(b + 138 * OS1_S1 + 50) -
                p_over_q * *(b + 189 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 138 * OS1_S1 + 30);
            *(b + 138 * OS1_S1 + 78) =
                prefactor_z * *(b + 138 * OS1_S1 + 50) -
                p_over_q * *(b + 190 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 50);
            *(b + 138 * OS1_S1 + 79) =
                prefactor_z * *(b + 138 * OS1_S1 + 51) -
                p_over_q * *(b + 190 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 51) +
                one_over_two_q * *(b + 138 * OS1_S1 + 30);
            *(b + 138 * OS1_S1 + 80) =
                prefactor_y * *(b + 138 * OS1_S1 + 53) -
                p_over_q * *(b + 189 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 33);
            *(b + 138 * OS1_S1 + 81) =
                prefactor_y * *(b + 138 * OS1_S1 + 54) -
                p_over_q * *(b + 189 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 54) +
                one_over_two_q * *(b + 138 * OS1_S1 + 34);
            *(b + 138 * OS1_S1 + 82) =
                prefactor_y * *(b + 138 * OS1_S1 + 55) -
                p_over_q * *(b + 189 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 55);
            *(b + 138 * OS1_S1 + 83) =
                prefactor_z * *(b + 138 * OS1_S1 + 55) -
                p_over_q * *(b + 190 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 138 * OS1_S1 + 34);
            *(b + 139 * OS1_S1 + 56) =
                prefactor_x * *(b + 139 * OS1_S1 + 35) -
                p_over_q * *(b + 184 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 20);
            *(b + 139 * OS1_S1 + 57) = prefactor_y * *(b + 139 * OS1_S1 + 35) -
                                       p_over_q * *(b + 190 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 35);
            *(b + 139 * OS1_S1 + 58) =
                prefactor_z * *(b + 139 * OS1_S1 + 35) -
                p_over_q * *(b + 191 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 35);
            *(b + 139 * OS1_S1 + 59) =
                prefactor_y * *(b + 139 * OS1_S1 + 36) -
                p_over_q * *(b + 190 * OS1_S1 + 36) +
                one_over_two_q * *(b + 98 * OS1_S1 + 36) +
                one_over_two_q * *(b + 139 * OS1_S1 + 20);
            *(b + 139 * OS1_S1 + 60) = prefactor_y * *(b + 139 * OS1_S1 + 37) -
                                       p_over_q * *(b + 190 * OS1_S1 + 37) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 37);
            *(b + 139 * OS1_S1 + 61) =
                prefactor_z * *(b + 139 * OS1_S1 + 37) -
                p_over_q * *(b + 191 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 37) +
                one_over_two_q * *(b + 139 * OS1_S1 + 20);
            *(b + 139 * OS1_S1 + 62) =
                prefactor_y * *(b + 139 * OS1_S1 + 38) -
                p_over_q * *(b + 190 * OS1_S1 + 38) +
                one_over_two_q * *(b + 98 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 21);
            *(b + 139 * OS1_S1 + 63) =
                prefactor_z * *(b + 139 * OS1_S1 + 38) -
                p_over_q * *(b + 191 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 38);
            *(b + 139 * OS1_S1 + 64) = prefactor_y * *(b + 139 * OS1_S1 + 40) -
                                       p_over_q * *(b + 190 * OS1_S1 + 40) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 40);
            *(b + 139 * OS1_S1 + 65) =
                prefactor_x * *(b + 139 * OS1_S1 + 44) -
                p_over_q * *(b + 184 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 29);
            *(b + 139 * OS1_S1 + 66) =
                prefactor_x * *(b + 139 * OS1_S1 + 45) -
                p_over_q * *(b + 184 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 45) +
                one_over_two_q * *(b + 139 * OS1_S1 + 30);
            *(b + 139 * OS1_S1 + 67) =
                prefactor_z * *(b + 139 * OS1_S1 + 41) -
                p_over_q * *(b + 191 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 41);
            *(b + 139 * OS1_S1 + 68) =
                prefactor_y * *(b + 139 * OS1_S1 + 43) -
                p_over_q * *(b + 190 * OS1_S1 + 43) +
                one_over_two_q * *(b + 98 * OS1_S1 + 43) +
                one_over_two_q * *(b + 139 * OS1_S1 + 25);
            *(b + 139 * OS1_S1 + 69) = prefactor_y * *(b + 139 * OS1_S1 + 44) -
                                       p_over_q * *(b + 190 * OS1_S1 + 44) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 44);
            *(b + 139 * OS1_S1 + 70) =
                prefactor_x * *(b + 139 * OS1_S1 + 49) -
                p_over_q * *(b + 184 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 49) +
                one_over_two_q * *(b + 139 * OS1_S1 + 34);
            *(b + 139 * OS1_S1 + 71) =
                prefactor_x * *(b + 139 * OS1_S1 + 50) -
                p_over_q * *(b + 184 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 50);
            *(b + 139 * OS1_S1 + 72) =
                prefactor_x * *(b + 139 * OS1_S1 + 51) -
                p_over_q * *(b + 184 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 51);
            *(b + 139 * OS1_S1 + 73) =
                prefactor_x * *(b + 139 * OS1_S1 + 52) -
                p_over_q * *(b + 184 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 52);
            *(b + 139 * OS1_S1 + 74) =
                prefactor_x * *(b + 139 * OS1_S1 + 53) -
                p_over_q * *(b + 184 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 53);
            *(b + 139 * OS1_S1 + 75) = prefactor_y * *(b + 139 * OS1_S1 + 49) -
                                       p_over_q * *(b + 190 * OS1_S1 + 49) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 49);
            *(b + 139 * OS1_S1 + 76) =
                prefactor_x * *(b + 139 * OS1_S1 + 55) -
                p_over_q * *(b + 184 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 55);
            *(b + 139 * OS1_S1 + 77) =
                prefactor_y * *(b + 139 * OS1_S1 + 50) -
                p_over_q * *(b + 190 * OS1_S1 + 50) +
                one_over_two_q * *(b + 98 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 30);
            *(b + 139 * OS1_S1 + 78) =
                prefactor_z * *(b + 139 * OS1_S1 + 50) -
                p_over_q * *(b + 191 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 50);
            *(b + 139 * OS1_S1 + 79) =
                prefactor_z * *(b + 139 * OS1_S1 + 51) -
                p_over_q * *(b + 191 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 51) +
                one_over_two_q * *(b + 139 * OS1_S1 + 30);
            *(b + 139 * OS1_S1 + 80) =
                prefactor_y * *(b + 139 * OS1_S1 + 53) -
                p_over_q * *(b + 190 * OS1_S1 + 53) +
                one_over_two_q * *(b + 98 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 33);
            *(b + 139 * OS1_S1 + 81) =
                prefactor_y * *(b + 139 * OS1_S1 + 54) -
                p_over_q * *(b + 190 * OS1_S1 + 54) +
                one_over_two_q * *(b + 98 * OS1_S1 + 54) +
                one_over_two_q * *(b + 139 * OS1_S1 + 34);
            *(b + 139 * OS1_S1 + 82) = prefactor_y * *(b + 139 * OS1_S1 + 55) -
                                       p_over_q * *(b + 190 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 55);
            *(b + 139 * OS1_S1 + 83) =
                prefactor_z * *(b + 139 * OS1_S1 + 55) -
                p_over_q * *(b + 191 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 34);
            *(b + 140 * OS1_S1 + 56) =
                prefactor_x * *(b + 140 * OS1_S1 + 35) -
                p_over_q * *(b + 185 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 140 * OS1_S1 + 20);
            *(b + 140 * OS1_S1 + 57) = prefactor_y * *(b + 140 * OS1_S1 + 35) -
                                       p_over_q * *(b + 191 * OS1_S1 + 35);
            *(b + 140 * OS1_S1 + 58) =
                prefactor_z * *(b + 140 * OS1_S1 + 35) -
                p_over_q * *(b + 192 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 35);
            *(b + 140 * OS1_S1 + 59) =
                prefactor_y * *(b + 140 * OS1_S1 + 36) -
                p_over_q * *(b + 191 * OS1_S1 + 36) +
                one_over_two_q * *(b + 140 * OS1_S1 + 20);
            *(b + 140 * OS1_S1 + 60) = prefactor_y * *(b + 140 * OS1_S1 + 37) -
                                       p_over_q * *(b + 191 * OS1_S1 + 37);
            *(b + 140 * OS1_S1 + 61) =
                prefactor_z * *(b + 140 * OS1_S1 + 37) -
                p_over_q * *(b + 192 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 37) +
                one_over_two_q * *(b + 140 * OS1_S1 + 20);
            *(b + 140 * OS1_S1 + 62) =
                prefactor_y * *(b + 140 * OS1_S1 + 38) -
                p_over_q * *(b + 191 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 21);
            *(b + 140 * OS1_S1 + 63) =
                prefactor_z * *(b + 140 * OS1_S1 + 38) -
                p_over_q * *(b + 192 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 38);
            *(b + 140 * OS1_S1 + 64) = prefactor_y * *(b + 140 * OS1_S1 + 40) -
                                       p_over_q * *(b + 191 * OS1_S1 + 40);
            *(b + 140 * OS1_S1 + 65) =
                prefactor_x * *(b + 140 * OS1_S1 + 44) -
                p_over_q * *(b + 185 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 29);
            *(b + 140 * OS1_S1 + 66) =
                prefactor_x * *(b + 140 * OS1_S1 + 45) -
                p_over_q * *(b + 185 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 45) +
                one_over_two_q * *(b + 140 * OS1_S1 + 30);
            *(b + 140 * OS1_S1 + 67) =
                prefactor_z * *(b + 140 * OS1_S1 + 41) -
                p_over_q * *(b + 192 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 41);
            *(b + 140 * OS1_S1 + 68) =
                prefactor_y * *(b + 140 * OS1_S1 + 43) -
                p_over_q * *(b + 191 * OS1_S1 + 43) +
                one_over_two_q * *(b + 140 * OS1_S1 + 25);
            *(b + 140 * OS1_S1 + 69) = prefactor_y * *(b + 140 * OS1_S1 + 44) -
                                       p_over_q * *(b + 191 * OS1_S1 + 44);
            *(b + 140 * OS1_S1 + 70) =
                prefactor_x * *(b + 140 * OS1_S1 + 49) -
                p_over_q * *(b + 185 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 49) +
                one_over_two_q * *(b + 140 * OS1_S1 + 34);
            *(b + 140 * OS1_S1 + 71) =
                prefactor_x * *(b + 140 * OS1_S1 + 50) -
                p_over_q * *(b + 185 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 50);
            *(b + 140 * OS1_S1 + 72) =
                prefactor_x * *(b + 140 * OS1_S1 + 51) -
                p_over_q * *(b + 185 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 51);
            *(b + 140 * OS1_S1 + 73) =
                prefactor_x * *(b + 140 * OS1_S1 + 52) -
                p_over_q * *(b + 185 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 52);
            *(b + 140 * OS1_S1 + 74) =
                prefactor_x * *(b + 140 * OS1_S1 + 53) -
                p_over_q * *(b + 185 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 53);
            *(b + 140 * OS1_S1 + 75) = prefactor_y * *(b + 140 * OS1_S1 + 49) -
                                       p_over_q * *(b + 191 * OS1_S1 + 49);
            *(b + 140 * OS1_S1 + 76) =
                prefactor_x * *(b + 140 * OS1_S1 + 55) -
                p_over_q * *(b + 185 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 55);
            *(b + 140 * OS1_S1 + 77) =
                prefactor_y * *(b + 140 * OS1_S1 + 50) -
                p_over_q * *(b + 191 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 140 * OS1_S1 + 30);
            *(b + 140 * OS1_S1 + 78) =
                prefactor_z * *(b + 140 * OS1_S1 + 50) -
                p_over_q * *(b + 192 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 50);
            *(b + 140 * OS1_S1 + 79) =
                prefactor_z * *(b + 140 * OS1_S1 + 51) -
                p_over_q * *(b + 192 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 51) +
                one_over_two_q * *(b + 140 * OS1_S1 + 30);
            *(b + 140 * OS1_S1 + 80) =
                prefactor_y * *(b + 140 * OS1_S1 + 53) -
                p_over_q * *(b + 191 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 33);
            *(b + 140 * OS1_S1 + 81) =
                prefactor_y * *(b + 140 * OS1_S1 + 54) -
                p_over_q * *(b + 191 * OS1_S1 + 54) +
                one_over_two_q * *(b + 140 * OS1_S1 + 34);
            *(b + 140 * OS1_S1 + 82) = prefactor_y * *(b + 140 * OS1_S1 + 55) -
                                       p_over_q * *(b + 191 * OS1_S1 + 55);
            *(b + 140 * OS1_S1 + 83) =
                prefactor_z * *(b + 140 * OS1_S1 + 55) -
                p_over_q * *(b + 192 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 140 * OS1_S1 + 34);
            *(b + 141 * OS1_S1 + 56) =
                prefactor_x * *(b + 141 * OS1_S1 + 35) -
                p_over_q * *(b + 186 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 141 * OS1_S1 + 20);
            *(b + 141 * OS1_S1 + 57) =
                prefactor_y * *(b + 141 * OS1_S1 + 35) -
                p_over_q * *(b + 193 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 35);
            *(b + 141 * OS1_S1 + 58) = prefactor_z * *(b + 141 * OS1_S1 + 35) -
                                       p_over_q * *(b + 194 * OS1_S1 + 35);
            *(b + 141 * OS1_S1 + 59) =
                prefactor_y * *(b + 141 * OS1_S1 + 36) -
                p_over_q * *(b + 193 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 36) +
                one_over_two_q * *(b + 141 * OS1_S1 + 20);
            *(b + 141 * OS1_S1 + 60) = prefactor_z * *(b + 141 * OS1_S1 + 36) -
                                       p_over_q * *(b + 194 * OS1_S1 + 36);
            *(b + 141 * OS1_S1 + 61) =
                prefactor_z * *(b + 141 * OS1_S1 + 37) -
                p_over_q * *(b + 194 * OS1_S1 + 37) +
                one_over_two_q * *(b + 141 * OS1_S1 + 20);
            *(b + 141 * OS1_S1 + 62) =
                prefactor_x * *(b + 141 * OS1_S1 + 41) -
                p_over_q * *(b + 186 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 26);
            *(b + 141 * OS1_S1 + 63) = prefactor_z * *(b + 141 * OS1_S1 + 38) -
                                       p_over_q * *(b + 194 * OS1_S1 + 38);
            *(b + 141 * OS1_S1 + 64) =
                prefactor_y * *(b + 141 * OS1_S1 + 40) -
                p_over_q * *(b + 193 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 40);
            *(b + 141 * OS1_S1 + 65) =
                prefactor_z * *(b + 141 * OS1_S1 + 40) -
                p_over_q * *(b + 194 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 22);
            *(b + 141 * OS1_S1 + 66) =
                prefactor_x * *(b + 141 * OS1_S1 + 45) -
                p_over_q * *(b + 186 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 45) +
                one_over_two_q * *(b + 141 * OS1_S1 + 30);
            *(b + 141 * OS1_S1 + 67) = prefactor_z * *(b + 141 * OS1_S1 + 41) -
                                       p_over_q * *(b + 194 * OS1_S1 + 41);
            *(b + 141 * OS1_S1 + 68) =
                prefactor_z * *(b + 141 * OS1_S1 + 42) -
                p_over_q * *(b + 194 * OS1_S1 + 42) +
                one_over_two_q * *(b + 141 * OS1_S1 + 23);
            *(b + 141 * OS1_S1 + 69) =
                prefactor_y * *(b + 141 * OS1_S1 + 44) -
                p_over_q * *(b + 193 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 44);
            *(b + 141 * OS1_S1 + 70) =
                prefactor_x * *(b + 141 * OS1_S1 + 49) -
                p_over_q * *(b + 186 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 49) +
                one_over_two_q * *(b + 141 * OS1_S1 + 34);
            *(b + 141 * OS1_S1 + 71) =
                prefactor_x * *(b + 141 * OS1_S1 + 50) -
                p_over_q * *(b + 186 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 50);
            *(b + 141 * OS1_S1 + 72) = prefactor_z * *(b + 141 * OS1_S1 + 45) -
                                       p_over_q * *(b + 194 * OS1_S1 + 45);
            *(b + 141 * OS1_S1 + 73) =
                prefactor_x * *(b + 141 * OS1_S1 + 52) -
                p_over_q * *(b + 186 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 52);
            *(b + 141 * OS1_S1 + 74) =
                prefactor_x * *(b + 141 * OS1_S1 + 53) -
                p_over_q * *(b + 186 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 53);
            *(b + 141 * OS1_S1 + 75) =
                prefactor_x * *(b + 141 * OS1_S1 + 54) -
                p_over_q * *(b + 186 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 54);
            *(b + 141 * OS1_S1 + 76) =
                prefactor_x * *(b + 141 * OS1_S1 + 55) -
                p_over_q * *(b + 186 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 55);
            *(b + 141 * OS1_S1 + 77) =
                prefactor_y * *(b + 141 * OS1_S1 + 50) -
                p_over_q * *(b + 193 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 141 * OS1_S1 + 30);
            *(b + 141 * OS1_S1 + 78) = prefactor_z * *(b + 141 * OS1_S1 + 50) -
                                       p_over_q * *(b + 194 * OS1_S1 + 50);
            *(b + 141 * OS1_S1 + 79) =
                prefactor_z * *(b + 141 * OS1_S1 + 51) -
                p_over_q * *(b + 194 * OS1_S1 + 51) +
                one_over_two_q * *(b + 141 * OS1_S1 + 30);
            *(b + 141 * OS1_S1 + 80) =
                prefactor_z * *(b + 141 * OS1_S1 + 52) -
                p_over_q * *(b + 194 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 31);
            *(b + 141 * OS1_S1 + 81) =
                prefactor_y * *(b + 141 * OS1_S1 + 54) -
                p_over_q * *(b + 193 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 54) +
                one_over_two_q * *(b + 141 * OS1_S1 + 34);
            *(b + 141 * OS1_S1 + 82) =
                prefactor_y * *(b + 141 * OS1_S1 + 55) -
                p_over_q * *(b + 193 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 55);
            *(b + 141 * OS1_S1 + 83) =
                prefactor_z * *(b + 141 * OS1_S1 + 55) -
                p_over_q * *(b + 194 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 141 * OS1_S1 + 34);
            *(b + 142 * OS1_S1 + 56) =
                prefactor_x * *(b + 142 * OS1_S1 + 35) -
                p_over_q * *(b + 187 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 142 * OS1_S1 + 20);
            *(b + 142 * OS1_S1 + 57) =
                prefactor_y * *(b + 142 * OS1_S1 + 35) -
                p_over_q * *(b + 194 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 35);
            *(b + 142 * OS1_S1 + 58) = prefactor_z * *(b + 142 * OS1_S1 + 35) -
                                       p_over_q * *(b + 195 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 35);
            *(b + 142 * OS1_S1 + 59) =
                prefactor_y * *(b + 142 * OS1_S1 + 36) -
                p_over_q * *(b + 194 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 36) +
                one_over_two_q * *(b + 142 * OS1_S1 + 20);
            *(b + 142 * OS1_S1 + 60) = prefactor_z * *(b + 142 * OS1_S1 + 36) -
                                       p_over_q * *(b + 195 * OS1_S1 + 36) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 36);
            *(b + 142 * OS1_S1 + 61) =
                prefactor_z * *(b + 142 * OS1_S1 + 37) -
                p_over_q * *(b + 195 * OS1_S1 + 37) +
                one_over_two_q * *(b + 99 * OS1_S1 + 37) +
                one_over_two_q * *(b + 142 * OS1_S1 + 20);
            *(b + 142 * OS1_S1 + 62) =
                prefactor_x * *(b + 142 * OS1_S1 + 41) -
                p_over_q * *(b + 187 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 26);
            *(b + 142 * OS1_S1 + 63) = prefactor_z * *(b + 142 * OS1_S1 + 38) -
                                       p_over_q * *(b + 195 * OS1_S1 + 38) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 38);
            *(b + 142 * OS1_S1 + 64) =
                prefactor_y * *(b + 142 * OS1_S1 + 40) -
                p_over_q * *(b + 194 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 40);
            *(b + 142 * OS1_S1 + 65) =
                prefactor_z * *(b + 142 * OS1_S1 + 40) -
                p_over_q * *(b + 195 * OS1_S1 + 40) +
                one_over_two_q * *(b + 99 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 22);
            *(b + 142 * OS1_S1 + 66) =
                prefactor_x * *(b + 142 * OS1_S1 + 45) -
                p_over_q * *(b + 187 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 45) +
                one_over_two_q * *(b + 142 * OS1_S1 + 30);
            *(b + 142 * OS1_S1 + 67) = prefactor_z * *(b + 142 * OS1_S1 + 41) -
                                       p_over_q * *(b + 195 * OS1_S1 + 41) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 41);
            *(b + 142 * OS1_S1 + 68) =
                prefactor_z * *(b + 142 * OS1_S1 + 42) -
                p_over_q * *(b + 195 * OS1_S1 + 42) +
                one_over_two_q * *(b + 99 * OS1_S1 + 42) +
                one_over_two_q * *(b + 142 * OS1_S1 + 23);
            *(b + 142 * OS1_S1 + 69) =
                prefactor_y * *(b + 142 * OS1_S1 + 44) -
                p_over_q * *(b + 194 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 44);
            *(b + 142 * OS1_S1 + 70) =
                prefactor_x * *(b + 142 * OS1_S1 + 49) -
                p_over_q * *(b + 187 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 49) +
                one_over_two_q * *(b + 142 * OS1_S1 + 34);
            *(b + 142 * OS1_S1 + 71) =
                prefactor_x * *(b + 142 * OS1_S1 + 50) -
                p_over_q * *(b + 187 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 50);
            *(b + 142 * OS1_S1 + 72) = prefactor_z * *(b + 142 * OS1_S1 + 45) -
                                       p_over_q * *(b + 195 * OS1_S1 + 45) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 45);
            *(b + 142 * OS1_S1 + 73) =
                prefactor_x * *(b + 142 * OS1_S1 + 52) -
                p_over_q * *(b + 187 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 52);
            *(b + 142 * OS1_S1 + 74) =
                prefactor_x * *(b + 142 * OS1_S1 + 53) -
                p_over_q * *(b + 187 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 53);
            *(b + 142 * OS1_S1 + 75) =
                prefactor_x * *(b + 142 * OS1_S1 + 54) -
                p_over_q * *(b + 187 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 54);
            *(b + 142 * OS1_S1 + 76) =
                prefactor_x * *(b + 142 * OS1_S1 + 55) -
                p_over_q * *(b + 187 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 55);
            *(b + 142 * OS1_S1 + 77) =
                prefactor_y * *(b + 142 * OS1_S1 + 50) -
                p_over_q * *(b + 194 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 142 * OS1_S1 + 30);
            *(b + 142 * OS1_S1 + 78) = prefactor_z * *(b + 142 * OS1_S1 + 50) -
                                       p_over_q * *(b + 195 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 50);
            *(b + 142 * OS1_S1 + 79) =
                prefactor_z * *(b + 142 * OS1_S1 + 51) -
                p_over_q * *(b + 195 * OS1_S1 + 51) +
                one_over_two_q * *(b + 99 * OS1_S1 + 51) +
                one_over_two_q * *(b + 142 * OS1_S1 + 30);
            *(b + 142 * OS1_S1 + 80) =
                prefactor_z * *(b + 142 * OS1_S1 + 52) -
                p_over_q * *(b + 195 * OS1_S1 + 52) +
                one_over_two_q * *(b + 99 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 31);
            *(b + 142 * OS1_S1 + 81) =
                prefactor_y * *(b + 142 * OS1_S1 + 54) -
                p_over_q * *(b + 194 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 54) +
                one_over_two_q * *(b + 142 * OS1_S1 + 34);
            *(b + 142 * OS1_S1 + 82) =
                prefactor_y * *(b + 142 * OS1_S1 + 55) -
                p_over_q * *(b + 194 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 55);
            *(b + 142 * OS1_S1 + 83) =
                prefactor_z * *(b + 142 * OS1_S1 + 55) -
                p_over_q * *(b + 195 * OS1_S1 + 55) +
                one_over_two_q * *(b + 99 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 142 * OS1_S1 + 34);
            *(b + 143 * OS1_S1 + 56) =
                prefactor_x * *(b + 143 * OS1_S1 + 35) -
                p_over_q * *(b + 188 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 20);
            *(b + 143 * OS1_S1 + 57) =
                prefactor_y * *(b + 143 * OS1_S1 + 35) -
                p_over_q * *(b + 195 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 35);
            *(b + 143 * OS1_S1 + 58) =
                prefactor_z * *(b + 143 * OS1_S1 + 35) -
                p_over_q * *(b + 196 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 35);
            *(b + 143 * OS1_S1 + 59) =
                prefactor_y * *(b + 143 * OS1_S1 + 36) -
                p_over_q * *(b + 195 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 36) +
                one_over_two_q * *(b + 143 * OS1_S1 + 20);
            *(b + 143 * OS1_S1 + 60) =
                prefactor_z * *(b + 143 * OS1_S1 + 36) -
                p_over_q * *(b + 196 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 36);
            *(b + 143 * OS1_S1 + 61) =
                prefactor_z * *(b + 143 * OS1_S1 + 37) -
                p_over_q * *(b + 196 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 37) +
                one_over_two_q * *(b + 143 * OS1_S1 + 20);
            *(b + 143 * OS1_S1 + 62) =
                prefactor_x * *(b + 143 * OS1_S1 + 41) -
                p_over_q * *(b + 188 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 26);
            *(b + 143 * OS1_S1 + 63) =
                prefactor_z * *(b + 143 * OS1_S1 + 38) -
                p_over_q * *(b + 196 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 38);
            *(b + 143 * OS1_S1 + 64) =
                prefactor_y * *(b + 143 * OS1_S1 + 40) -
                p_over_q * *(b + 195 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 40);
            *(b + 143 * OS1_S1 + 65) =
                prefactor_z * *(b + 143 * OS1_S1 + 40) -
                p_over_q * *(b + 196 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 22);
            *(b + 143 * OS1_S1 + 66) =
                prefactor_x * *(b + 143 * OS1_S1 + 45) -
                p_over_q * *(b + 188 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 45) +
                one_over_two_q * *(b + 143 * OS1_S1 + 30);
            *(b + 143 * OS1_S1 + 67) =
                prefactor_z * *(b + 143 * OS1_S1 + 41) -
                p_over_q * *(b + 196 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 41);
            *(b + 143 * OS1_S1 + 68) =
                prefactor_z * *(b + 143 * OS1_S1 + 42) -
                p_over_q * *(b + 196 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 42) +
                one_over_two_q * *(b + 143 * OS1_S1 + 23);
            *(b + 143 * OS1_S1 + 69) =
                prefactor_y * *(b + 143 * OS1_S1 + 44) -
                p_over_q * *(b + 195 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 44);
            *(b + 143 * OS1_S1 + 70) =
                prefactor_x * *(b + 143 * OS1_S1 + 49) -
                p_over_q * *(b + 188 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 49) +
                one_over_two_q * *(b + 143 * OS1_S1 + 34);
            *(b + 143 * OS1_S1 + 71) =
                prefactor_x * *(b + 143 * OS1_S1 + 50) -
                p_over_q * *(b + 188 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 50);
            *(b + 143 * OS1_S1 + 72) =
                prefactor_z * *(b + 143 * OS1_S1 + 45) -
                p_over_q * *(b + 196 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 45);
            *(b + 143 * OS1_S1 + 73) =
                prefactor_x * *(b + 143 * OS1_S1 + 52) -
                p_over_q * *(b + 188 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 52);
            *(b + 143 * OS1_S1 + 74) =
                prefactor_x * *(b + 143 * OS1_S1 + 53) -
                p_over_q * *(b + 188 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 53);
            *(b + 143 * OS1_S1 + 75) =
                prefactor_x * *(b + 143 * OS1_S1 + 54) -
                p_over_q * *(b + 188 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 54);
            *(b + 143 * OS1_S1 + 76) =
                prefactor_x * *(b + 143 * OS1_S1 + 55) -
                p_over_q * *(b + 188 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 55);
            *(b + 143 * OS1_S1 + 77) =
                prefactor_y * *(b + 143 * OS1_S1 + 50) -
                p_over_q * *(b + 195 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 30);
            *(b + 143 * OS1_S1 + 78) =
                prefactor_z * *(b + 143 * OS1_S1 + 50) -
                p_over_q * *(b + 196 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 50);
            *(b + 143 * OS1_S1 + 79) =
                prefactor_z * *(b + 143 * OS1_S1 + 51) -
                p_over_q * *(b + 196 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 51) +
                one_over_two_q * *(b + 143 * OS1_S1 + 30);
            *(b + 143 * OS1_S1 + 80) =
                prefactor_z * *(b + 143 * OS1_S1 + 52) -
                p_over_q * *(b + 196 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 31);
            *(b + 143 * OS1_S1 + 81) =
                prefactor_y * *(b + 143 * OS1_S1 + 54) -
                p_over_q * *(b + 195 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 54) +
                one_over_two_q * *(b + 143 * OS1_S1 + 34);
            *(b + 143 * OS1_S1 + 82) =
                prefactor_y * *(b + 143 * OS1_S1 + 55) -
                p_over_q * *(b + 195 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 55);
            *(b + 143 * OS1_S1 + 83) =
                prefactor_z * *(b + 143 * OS1_S1 + 55) -
                p_over_q * *(b + 196 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 34);
            *(b + 144 * OS1_S1 + 56) =
                prefactor_x * *(b + 144 * OS1_S1 + 35) -
                p_over_q * *(b + 189 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 144 * OS1_S1 + 20);
            *(b + 144 * OS1_S1 + 57) =
                prefactor_y * *(b + 144 * OS1_S1 + 35) -
                p_over_q * *(b + 196 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 35);
            *(b + 144 * OS1_S1 + 58) =
                prefactor_z * *(b + 144 * OS1_S1 + 35) -
                p_over_q * *(b + 197 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 35);
            *(b + 144 * OS1_S1 + 59) =
                prefactor_y * *(b + 144 * OS1_S1 + 36) -
                p_over_q * *(b + 196 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 36) +
                one_over_two_q * *(b + 144 * OS1_S1 + 20);
            *(b + 144 * OS1_S1 + 60) =
                prefactor_z * *(b + 144 * OS1_S1 + 36) -
                p_over_q * *(b + 197 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 36);
            *(b + 144 * OS1_S1 + 61) =
                prefactor_z * *(b + 144 * OS1_S1 + 37) -
                p_over_q * *(b + 197 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 37) +
                one_over_two_q * *(b + 144 * OS1_S1 + 20);
            *(b + 144 * OS1_S1 + 62) =
                prefactor_x * *(b + 144 * OS1_S1 + 41) -
                p_over_q * *(b + 189 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 26);
            *(b + 144 * OS1_S1 + 63) =
                prefactor_z * *(b + 144 * OS1_S1 + 38) -
                p_over_q * *(b + 197 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 38);
            *(b + 144 * OS1_S1 + 64) =
                prefactor_y * *(b + 144 * OS1_S1 + 40) -
                p_over_q * *(b + 196 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 40);
            *(b + 144 * OS1_S1 + 65) =
                prefactor_x * *(b + 144 * OS1_S1 + 44) -
                p_over_q * *(b + 189 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 29);
            *(b + 144 * OS1_S1 + 66) =
                prefactor_x * *(b + 144 * OS1_S1 + 45) -
                p_over_q * *(b + 189 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 45) +
                one_over_two_q * *(b + 144 * OS1_S1 + 30);
            *(b + 144 * OS1_S1 + 67) =
                prefactor_z * *(b + 144 * OS1_S1 + 41) -
                p_over_q * *(b + 197 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 41);
            *(b + 144 * OS1_S1 + 68) =
                prefactor_x * *(b + 144 * OS1_S1 + 47) -
                p_over_q * *(b + 189 * OS1_S1 + 47) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 47) +
                one_over_two_q * *(b + 144 * OS1_S1 + 32);
            *(b + 144 * OS1_S1 + 69) =
                prefactor_y * *(b + 144 * OS1_S1 + 44) -
                p_over_q * *(b + 196 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 44);
            *(b + 144 * OS1_S1 + 70) =
                prefactor_x * *(b + 144 * OS1_S1 + 49) -
                p_over_q * *(b + 189 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 49) +
                one_over_two_q * *(b + 144 * OS1_S1 + 34);
            *(b + 144 * OS1_S1 + 71) =
                prefactor_x * *(b + 144 * OS1_S1 + 50) -
                p_over_q * *(b + 189 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 50);
            *(b + 144 * OS1_S1 + 72) =
                prefactor_x * *(b + 144 * OS1_S1 + 51) -
                p_over_q * *(b + 189 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 51);
            *(b + 144 * OS1_S1 + 73) =
                prefactor_x * *(b + 144 * OS1_S1 + 52) -
                p_over_q * *(b + 189 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 52);
            *(b + 144 * OS1_S1 + 74) =
                prefactor_x * *(b + 144 * OS1_S1 + 53) -
                p_over_q * *(b + 189 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 53);
            *(b + 144 * OS1_S1 + 75) =
                prefactor_x * *(b + 144 * OS1_S1 + 54) -
                p_over_q * *(b + 189 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 54);
            *(b + 144 * OS1_S1 + 76) =
                prefactor_x * *(b + 144 * OS1_S1 + 55) -
                p_over_q * *(b + 189 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 55);
            *(b + 144 * OS1_S1 + 77) =
                prefactor_y * *(b + 144 * OS1_S1 + 50) -
                p_over_q * *(b + 196 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 144 * OS1_S1 + 30);
            *(b + 144 * OS1_S1 + 78) =
                prefactor_z * *(b + 144 * OS1_S1 + 50) -
                p_over_q * *(b + 197 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 50);
            *(b + 144 * OS1_S1 + 79) =
                prefactor_z * *(b + 144 * OS1_S1 + 51) -
                p_over_q * *(b + 197 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 51) +
                one_over_two_q * *(b + 144 * OS1_S1 + 30);
            *(b + 144 * OS1_S1 + 80) =
                prefactor_z * *(b + 144 * OS1_S1 + 52) -
                p_over_q * *(b + 197 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 31);
            *(b + 144 * OS1_S1 + 81) =
                prefactor_y * *(b + 144 * OS1_S1 + 54) -
                p_over_q * *(b + 196 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 54) +
                one_over_two_q * *(b + 144 * OS1_S1 + 34);
            *(b + 144 * OS1_S1 + 82) =
                prefactor_y * *(b + 144 * OS1_S1 + 55) -
                p_over_q * *(b + 196 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 55);
            *(b + 144 * OS1_S1 + 83) =
                prefactor_z * *(b + 144 * OS1_S1 + 55) -
                p_over_q * *(b + 197 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 144 * OS1_S1 + 34);
            *(b + 145 * OS1_S1 + 56) =
                prefactor_x * *(b + 145 * OS1_S1 + 35) -
                p_over_q * *(b + 190 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 20);
            *(b + 145 * OS1_S1 + 57) =
                prefactor_y * *(b + 145 * OS1_S1 + 35) -
                p_over_q * *(b + 197 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 35);
            *(b + 145 * OS1_S1 + 58) =
                prefactor_z * *(b + 145 * OS1_S1 + 35) -
                p_over_q * *(b + 198 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 35);
            *(b + 145 * OS1_S1 + 59) =
                prefactor_y * *(b + 145 * OS1_S1 + 36) -
                p_over_q * *(b + 197 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 36) +
                one_over_two_q * *(b + 145 * OS1_S1 + 20);
            *(b + 145 * OS1_S1 + 60) =
                prefactor_y * *(b + 145 * OS1_S1 + 37) -
                p_over_q * *(b + 197 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 37);
            *(b + 145 * OS1_S1 + 61) =
                prefactor_z * *(b + 145 * OS1_S1 + 37) -
                p_over_q * *(b + 198 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 37) +
                one_over_two_q * *(b + 145 * OS1_S1 + 20);
            *(b + 145 * OS1_S1 + 62) =
                prefactor_y * *(b + 145 * OS1_S1 + 38) -
                p_over_q * *(b + 197 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 21);
            *(b + 145 * OS1_S1 + 63) =
                prefactor_z * *(b + 145 * OS1_S1 + 38) -
                p_over_q * *(b + 198 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 38);
            *(b + 145 * OS1_S1 + 64) =
                prefactor_y * *(b + 145 * OS1_S1 + 40) -
                p_over_q * *(b + 197 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 40);
            *(b + 145 * OS1_S1 + 65) =
                prefactor_x * *(b + 145 * OS1_S1 + 44) -
                p_over_q * *(b + 190 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 29);
            *(b + 145 * OS1_S1 + 66) =
                prefactor_x * *(b + 145 * OS1_S1 + 45) -
                p_over_q * *(b + 190 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 45) +
                one_over_two_q * *(b + 145 * OS1_S1 + 30);
            *(b + 145 * OS1_S1 + 67) =
                prefactor_z * *(b + 145 * OS1_S1 + 41) -
                p_over_q * *(b + 198 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 41);
            *(b + 145 * OS1_S1 + 68) =
                prefactor_y * *(b + 145 * OS1_S1 + 43) -
                p_over_q * *(b + 197 * OS1_S1 + 43) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 43) +
                one_over_two_q * *(b + 145 * OS1_S1 + 25);
            *(b + 145 * OS1_S1 + 69) =
                prefactor_y * *(b + 145 * OS1_S1 + 44) -
                p_over_q * *(b + 197 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 44);
            *(b + 145 * OS1_S1 + 70) =
                prefactor_x * *(b + 145 * OS1_S1 + 49) -
                p_over_q * *(b + 190 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 49) +
                one_over_two_q * *(b + 145 * OS1_S1 + 34);
            *(b + 145 * OS1_S1 + 71) =
                prefactor_x * *(b + 145 * OS1_S1 + 50) -
                p_over_q * *(b + 190 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 50);
            *(b + 145 * OS1_S1 + 72) =
                prefactor_x * *(b + 145 * OS1_S1 + 51) -
                p_over_q * *(b + 190 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 51);
            *(b + 145 * OS1_S1 + 73) =
                prefactor_x * *(b + 145 * OS1_S1 + 52) -
                p_over_q * *(b + 190 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 52);
            *(b + 145 * OS1_S1 + 74) =
                prefactor_x * *(b + 145 * OS1_S1 + 53) -
                p_over_q * *(b + 190 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 53);
            *(b + 145 * OS1_S1 + 75) =
                prefactor_y * *(b + 145 * OS1_S1 + 49) -
                p_over_q * *(b + 197 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 49);
            *(b + 145 * OS1_S1 + 76) =
                prefactor_x * *(b + 145 * OS1_S1 + 55) -
                p_over_q * *(b + 190 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 55);
            *(b + 145 * OS1_S1 + 77) =
                prefactor_y * *(b + 145 * OS1_S1 + 50) -
                p_over_q * *(b + 197 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 30);
            *(b + 145 * OS1_S1 + 78) =
                prefactor_z * *(b + 145 * OS1_S1 + 50) -
                p_over_q * *(b + 198 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 50);
            *(b + 145 * OS1_S1 + 79) =
                prefactor_z * *(b + 145 * OS1_S1 + 51) -
                p_over_q * *(b + 198 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 51) +
                one_over_two_q * *(b + 145 * OS1_S1 + 30);
            *(b + 145 * OS1_S1 + 80) =
                prefactor_y * *(b + 145 * OS1_S1 + 53) -
                p_over_q * *(b + 197 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 33);
            *(b + 145 * OS1_S1 + 81) =
                prefactor_y * *(b + 145 * OS1_S1 + 54) -
                p_over_q * *(b + 197 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 54) +
                one_over_two_q * *(b + 145 * OS1_S1 + 34);
            *(b + 145 * OS1_S1 + 82) =
                prefactor_y * *(b + 145 * OS1_S1 + 55) -
                p_over_q * *(b + 197 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 55);
            *(b + 145 * OS1_S1 + 83) =
                prefactor_z * *(b + 145 * OS1_S1 + 55) -
                p_over_q * *(b + 198 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 34);
            *(b + 146 * OS1_S1 + 56) =
                prefactor_x * *(b + 146 * OS1_S1 + 35) -
                p_over_q * *(b + 191 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 146 * OS1_S1 + 20);
            *(b + 146 * OS1_S1 + 57) =
                prefactor_y * *(b + 146 * OS1_S1 + 35) -
                p_over_q * *(b + 198 * OS1_S1 + 35) +
                one_over_two_q * *(b + 104 * OS1_S1 + 35);
            *(b + 146 * OS1_S1 + 58) =
                prefactor_z * *(b + 146 * OS1_S1 + 35) -
                p_over_q * *(b + 199 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 35);
            *(b + 146 * OS1_S1 + 59) =
                prefactor_y * *(b + 146 * OS1_S1 + 36) -
                p_over_q * *(b + 198 * OS1_S1 + 36) +
                one_over_two_q * *(b + 104 * OS1_S1 + 36) +
                one_over_two_q * *(b + 146 * OS1_S1 + 20);
            *(b + 146 * OS1_S1 + 60) =
                prefactor_y * *(b + 146 * OS1_S1 + 37) -
                p_over_q * *(b + 198 * OS1_S1 + 37) +
                one_over_two_q * *(b + 104 * OS1_S1 + 37);
            *(b + 146 * OS1_S1 + 61) =
                prefactor_z * *(b + 146 * OS1_S1 + 37) -
                p_over_q * *(b + 199 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 37) +
                one_over_two_q * *(b + 146 * OS1_S1 + 20);
            *(b + 146 * OS1_S1 + 62) =
                prefactor_y * *(b + 146 * OS1_S1 + 38) -
                p_over_q * *(b + 198 * OS1_S1 + 38) +
                one_over_two_q * *(b + 104 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 21);
            *(b + 146 * OS1_S1 + 63) =
                prefactor_z * *(b + 146 * OS1_S1 + 38) -
                p_over_q * *(b + 199 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 38);
            *(b + 146 * OS1_S1 + 64) =
                prefactor_y * *(b + 146 * OS1_S1 + 40) -
                p_over_q * *(b + 198 * OS1_S1 + 40) +
                one_over_two_q * *(b + 104 * OS1_S1 + 40);
            *(b + 146 * OS1_S1 + 65) =
                prefactor_x * *(b + 146 * OS1_S1 + 44) -
                p_over_q * *(b + 191 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 29);
            *(b + 146 * OS1_S1 + 66) =
                prefactor_x * *(b + 146 * OS1_S1 + 45) -
                p_over_q * *(b + 191 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 45) +
                one_over_two_q * *(b + 146 * OS1_S1 + 30);
            *(b + 146 * OS1_S1 + 67) =
                prefactor_z * *(b + 146 * OS1_S1 + 41) -
                p_over_q * *(b + 199 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 41);
            *(b + 146 * OS1_S1 + 68) =
                prefactor_y * *(b + 146 * OS1_S1 + 43) -
                p_over_q * *(b + 198 * OS1_S1 + 43) +
                one_over_two_q * *(b + 104 * OS1_S1 + 43) +
                one_over_two_q * *(b + 146 * OS1_S1 + 25);
            *(b + 146 * OS1_S1 + 69) =
                prefactor_y * *(b + 146 * OS1_S1 + 44) -
                p_over_q * *(b + 198 * OS1_S1 + 44) +
                one_over_two_q * *(b + 104 * OS1_S1 + 44);
            *(b + 146 * OS1_S1 + 70) =
                prefactor_x * *(b + 146 * OS1_S1 + 49) -
                p_over_q * *(b + 191 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 49) +
                one_over_two_q * *(b + 146 * OS1_S1 + 34);
            *(b + 146 * OS1_S1 + 71) =
                prefactor_x * *(b + 146 * OS1_S1 + 50) -
                p_over_q * *(b + 191 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 50);
            *(b + 146 * OS1_S1 + 72) =
                prefactor_x * *(b + 146 * OS1_S1 + 51) -
                p_over_q * *(b + 191 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 51);
            *(b + 146 * OS1_S1 + 73) =
                prefactor_x * *(b + 146 * OS1_S1 + 52) -
                p_over_q * *(b + 191 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 52);
            *(b + 146 * OS1_S1 + 74) =
                prefactor_x * *(b + 146 * OS1_S1 + 53) -
                p_over_q * *(b + 191 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 53);
            *(b + 146 * OS1_S1 + 75) =
                prefactor_y * *(b + 146 * OS1_S1 + 49) -
                p_over_q * *(b + 198 * OS1_S1 + 49) +
                one_over_two_q * *(b + 104 * OS1_S1 + 49);
            *(b + 146 * OS1_S1 + 76) =
                prefactor_x * *(b + 146 * OS1_S1 + 55) -
                p_over_q * *(b + 191 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 55);
            *(b + 146 * OS1_S1 + 77) =
                prefactor_y * *(b + 146 * OS1_S1 + 50) -
                p_over_q * *(b + 198 * OS1_S1 + 50) +
                one_over_two_q * *(b + 104 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 146 * OS1_S1 + 30);
            *(b + 146 * OS1_S1 + 78) =
                prefactor_z * *(b + 146 * OS1_S1 + 50) -
                p_over_q * *(b + 199 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 50);
            *(b + 146 * OS1_S1 + 79) =
                prefactor_z * *(b + 146 * OS1_S1 + 51) -
                p_over_q * *(b + 199 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 51) +
                one_over_two_q * *(b + 146 * OS1_S1 + 30);
            *(b + 146 * OS1_S1 + 80) =
                prefactor_y * *(b + 146 * OS1_S1 + 53) -
                p_over_q * *(b + 198 * OS1_S1 + 53) +
                one_over_two_q * *(b + 104 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 33);
            *(b + 146 * OS1_S1 + 81) =
                prefactor_y * *(b + 146 * OS1_S1 + 54) -
                p_over_q * *(b + 198 * OS1_S1 + 54) +
                one_over_two_q * *(b + 104 * OS1_S1 + 54) +
                one_over_two_q * *(b + 146 * OS1_S1 + 34);
            *(b + 146 * OS1_S1 + 82) =
                prefactor_y * *(b + 146 * OS1_S1 + 55) -
                p_over_q * *(b + 198 * OS1_S1 + 55) +
                one_over_two_q * *(b + 104 * OS1_S1 + 55);
            *(b + 146 * OS1_S1 + 83) =
                prefactor_z * *(b + 146 * OS1_S1 + 55) -
                p_over_q * *(b + 199 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 146 * OS1_S1 + 34);
            *(b + 147 * OS1_S1 + 56) =
                prefactor_x * *(b + 147 * OS1_S1 + 35) -
                p_over_q * *(b + 192 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 147 * OS1_S1 + 20);
            *(b + 147 * OS1_S1 + 57) = prefactor_y * *(b + 147 * OS1_S1 + 35) -
                                       p_over_q * *(b + 199 * OS1_S1 + 35);
            *(b + 147 * OS1_S1 + 58) =
                prefactor_z * *(b + 147 * OS1_S1 + 35) -
                p_over_q * *(b + 200 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 35);
            *(b + 147 * OS1_S1 + 59) =
                prefactor_y * *(b + 147 * OS1_S1 + 36) -
                p_over_q * *(b + 199 * OS1_S1 + 36) +
                one_over_two_q * *(b + 147 * OS1_S1 + 20);
            *(b + 147 * OS1_S1 + 60) = prefactor_y * *(b + 147 * OS1_S1 + 37) -
                                       p_over_q * *(b + 199 * OS1_S1 + 37);
            *(b + 147 * OS1_S1 + 61) =
                prefactor_z * *(b + 147 * OS1_S1 + 37) -
                p_over_q * *(b + 200 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 37) +
                one_over_two_q * *(b + 147 * OS1_S1 + 20);
            *(b + 147 * OS1_S1 + 62) =
                prefactor_y * *(b + 147 * OS1_S1 + 38) -
                p_over_q * *(b + 199 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 21);
            *(b + 147 * OS1_S1 + 63) =
                prefactor_z * *(b + 147 * OS1_S1 + 38) -
                p_over_q * *(b + 200 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 38);
            *(b + 147 * OS1_S1 + 64) = prefactor_y * *(b + 147 * OS1_S1 + 40) -
                                       p_over_q * *(b + 199 * OS1_S1 + 40);
            *(b + 147 * OS1_S1 + 65) =
                prefactor_x * *(b + 147 * OS1_S1 + 44) -
                p_over_q * *(b + 192 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 29);
            *(b + 147 * OS1_S1 + 66) =
                prefactor_x * *(b + 147 * OS1_S1 + 45) -
                p_over_q * *(b + 192 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 45) +
                one_over_two_q * *(b + 147 * OS1_S1 + 30);
            *(b + 147 * OS1_S1 + 67) =
                prefactor_z * *(b + 147 * OS1_S1 + 41) -
                p_over_q * *(b + 200 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 41);
            *(b + 147 * OS1_S1 + 68) =
                prefactor_y * *(b + 147 * OS1_S1 + 43) -
                p_over_q * *(b + 199 * OS1_S1 + 43) +
                one_over_two_q * *(b + 147 * OS1_S1 + 25);
            *(b + 147 * OS1_S1 + 69) = prefactor_y * *(b + 147 * OS1_S1 + 44) -
                                       p_over_q * *(b + 199 * OS1_S1 + 44);
            *(b + 147 * OS1_S1 + 70) =
                prefactor_x * *(b + 147 * OS1_S1 + 49) -
                p_over_q * *(b + 192 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 49) +
                one_over_two_q * *(b + 147 * OS1_S1 + 34);
            *(b + 147 * OS1_S1 + 71) =
                prefactor_x * *(b + 147 * OS1_S1 + 50) -
                p_over_q * *(b + 192 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 50);
            *(b + 147 * OS1_S1 + 72) =
                prefactor_x * *(b + 147 * OS1_S1 + 51) -
                p_over_q * *(b + 192 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 51);
            *(b + 147 * OS1_S1 + 73) =
                prefactor_x * *(b + 147 * OS1_S1 + 52) -
                p_over_q * *(b + 192 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 52);
            *(b + 147 * OS1_S1 + 74) =
                prefactor_x * *(b + 147 * OS1_S1 + 53) -
                p_over_q * *(b + 192 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 53);
            *(b + 147 * OS1_S1 + 75) = prefactor_y * *(b + 147 * OS1_S1 + 49) -
                                       p_over_q * *(b + 199 * OS1_S1 + 49);
            *(b + 147 * OS1_S1 + 76) =
                prefactor_x * *(b + 147 * OS1_S1 + 55) -
                p_over_q * *(b + 192 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 55);
            *(b + 147 * OS1_S1 + 77) =
                prefactor_y * *(b + 147 * OS1_S1 + 50) -
                p_over_q * *(b + 199 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 147 * OS1_S1 + 30);
            *(b + 147 * OS1_S1 + 78) =
                prefactor_z * *(b + 147 * OS1_S1 + 50) -
                p_over_q * *(b + 200 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 50);
            *(b + 147 * OS1_S1 + 79) =
                prefactor_z * *(b + 147 * OS1_S1 + 51) -
                p_over_q * *(b + 200 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 51) +
                one_over_two_q * *(b + 147 * OS1_S1 + 30);
            *(b + 147 * OS1_S1 + 80) =
                prefactor_y * *(b + 147 * OS1_S1 + 53) -
                p_over_q * *(b + 199 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 33);
            *(b + 147 * OS1_S1 + 81) =
                prefactor_y * *(b + 147 * OS1_S1 + 54) -
                p_over_q * *(b + 199 * OS1_S1 + 54) +
                one_over_two_q * *(b + 147 * OS1_S1 + 34);
            *(b + 147 * OS1_S1 + 82) = prefactor_y * *(b + 147 * OS1_S1 + 55) -
                                       p_over_q * *(b + 199 * OS1_S1 + 55);
            *(b + 147 * OS1_S1 + 83) =
                prefactor_z * *(b + 147 * OS1_S1 + 55) -
                p_over_q * *(b + 200 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 147 * OS1_S1 + 34);
            *(b + 148 * OS1_S1 + 56) =
                prefactor_x * *(b + 148 * OS1_S1 + 35) -
                p_over_q * *(b + 193 * OS1_S1 + 35) +
                one_over_two_q * *(b + 112 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 148 * OS1_S1 + 20);
            *(b + 148 * OS1_S1 + 57) =
                prefactor_y * *(b + 148 * OS1_S1 + 35) -
                p_over_q * *(b + 201 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 35);
            *(b + 148 * OS1_S1 + 58) = prefactor_z * *(b + 148 * OS1_S1 + 35) -
                                       p_over_q * *(b + 202 * OS1_S1 + 35);
            *(b + 148 * OS1_S1 + 59) =
                prefactor_y * *(b + 148 * OS1_S1 + 36) -
                p_over_q * *(b + 201 * OS1_S1 + 36) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 36) +
                one_over_two_q * *(b + 148 * OS1_S1 + 20);
            *(b + 148 * OS1_S1 + 60) = prefactor_z * *(b + 148 * OS1_S1 + 36) -
                                       p_over_q * *(b + 202 * OS1_S1 + 36);
            *(b + 148 * OS1_S1 + 61) =
                prefactor_z * *(b + 148 * OS1_S1 + 37) -
                p_over_q * *(b + 202 * OS1_S1 + 37) +
                one_over_two_q * *(b + 148 * OS1_S1 + 20);
            *(b + 148 * OS1_S1 + 62) =
                prefactor_x * *(b + 148 * OS1_S1 + 41) -
                p_over_q * *(b + 193 * OS1_S1 + 41) +
                one_over_two_q * *(b + 112 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 26);
            *(b + 148 * OS1_S1 + 63) = prefactor_z * *(b + 148 * OS1_S1 + 38) -
                                       p_over_q * *(b + 202 * OS1_S1 + 38);
            *(b + 148 * OS1_S1 + 64) =
                prefactor_y * *(b + 148 * OS1_S1 + 40) -
                p_over_q * *(b + 201 * OS1_S1 + 40) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 40);
            *(b + 148 * OS1_S1 + 65) =
                prefactor_z * *(b + 148 * OS1_S1 + 40) -
                p_over_q * *(b + 202 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 22);
            *(b + 148 * OS1_S1 + 66) =
                prefactor_x * *(b + 148 * OS1_S1 + 45) -
                p_over_q * *(b + 193 * OS1_S1 + 45) +
                one_over_two_q * *(b + 112 * OS1_S1 + 45) +
                one_over_two_q * *(b + 148 * OS1_S1 + 30);
            *(b + 148 * OS1_S1 + 67) = prefactor_z * *(b + 148 * OS1_S1 + 41) -
                                       p_over_q * *(b + 202 * OS1_S1 + 41);
            *(b + 148 * OS1_S1 + 68) =
                prefactor_z * *(b + 148 * OS1_S1 + 42) -
                p_over_q * *(b + 202 * OS1_S1 + 42) +
                one_over_two_q * *(b + 148 * OS1_S1 + 23);
            *(b + 148 * OS1_S1 + 69) =
                prefactor_y * *(b + 148 * OS1_S1 + 44) -
                p_over_q * *(b + 201 * OS1_S1 + 44) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 44);
            *(b + 148 * OS1_S1 + 70) =
                prefactor_x * *(b + 148 * OS1_S1 + 49) -
                p_over_q * *(b + 193 * OS1_S1 + 49) +
                one_over_two_q * *(b + 112 * OS1_S1 + 49) +
                one_over_two_q * *(b + 148 * OS1_S1 + 34);
            *(b + 148 * OS1_S1 + 71) =
                prefactor_x * *(b + 148 * OS1_S1 + 50) -
                p_over_q * *(b + 193 * OS1_S1 + 50) +
                one_over_two_q * *(b + 112 * OS1_S1 + 50);
            *(b + 148 * OS1_S1 + 72) = prefactor_z * *(b + 148 * OS1_S1 + 45) -
                                       p_over_q * *(b + 202 * OS1_S1 + 45);
            *(b + 148 * OS1_S1 + 73) =
                prefactor_x * *(b + 148 * OS1_S1 + 52) -
                p_over_q * *(b + 193 * OS1_S1 + 52) +
                one_over_two_q * *(b + 112 * OS1_S1 + 52);
            *(b + 148 * OS1_S1 + 74) =
                prefactor_x * *(b + 148 * OS1_S1 + 53) -
                p_over_q * *(b + 193 * OS1_S1 + 53) +
                one_over_two_q * *(b + 112 * OS1_S1 + 53);
            *(b + 148 * OS1_S1 + 75) =
                prefactor_x * *(b + 148 * OS1_S1 + 54) -
                p_over_q * *(b + 193 * OS1_S1 + 54) +
                one_over_two_q * *(b + 112 * OS1_S1 + 54);
            *(b + 148 * OS1_S1 + 76) =
                prefactor_x * *(b + 148 * OS1_S1 + 55) -
                p_over_q * *(b + 193 * OS1_S1 + 55) +
                one_over_two_q * *(b + 112 * OS1_S1 + 55);
            *(b + 148 * OS1_S1 + 77) =
                prefactor_y * *(b + 148 * OS1_S1 + 50) -
                p_over_q * *(b + 201 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 148 * OS1_S1 + 30);
            *(b + 148 * OS1_S1 + 78) = prefactor_z * *(b + 148 * OS1_S1 + 50) -
                                       p_over_q * *(b + 202 * OS1_S1 + 50);
            *(b + 148 * OS1_S1 + 79) =
                prefactor_z * *(b + 148 * OS1_S1 + 51) -
                p_over_q * *(b + 202 * OS1_S1 + 51) +
                one_over_two_q * *(b + 148 * OS1_S1 + 30);
            *(b + 148 * OS1_S1 + 80) =
                prefactor_z * *(b + 148 * OS1_S1 + 52) -
                p_over_q * *(b + 202 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 31);
            *(b + 148 * OS1_S1 + 81) =
                prefactor_y * *(b + 148 * OS1_S1 + 54) -
                p_over_q * *(b + 201 * OS1_S1 + 54) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 54) +
                one_over_two_q * *(b + 148 * OS1_S1 + 34);
            *(b + 148 * OS1_S1 + 82) =
                prefactor_y * *(b + 148 * OS1_S1 + 55) -
                p_over_q * *(b + 201 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 55);
            *(b + 148 * OS1_S1 + 83) =
                prefactor_z * *(b + 148 * OS1_S1 + 55) -
                p_over_q * *(b + 202 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 148 * OS1_S1 + 34);
            *(b + 149 * OS1_S1 + 56) =
                prefactor_x * *(b + 149 * OS1_S1 + 35) -
                p_over_q * *(b + 194 * OS1_S1 + 35) +
                one_over_two_q * *(b + 113 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 149 * OS1_S1 + 20);
            *(b + 149 * OS1_S1 + 57) =
                prefactor_y * *(b + 149 * OS1_S1 + 35) -
                p_over_q * *(b + 202 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 35);
            *(b + 149 * OS1_S1 + 58) =
                prefactor_z * *(b + 149 * OS1_S1 + 35) -
                p_over_q * *(b + 203 * OS1_S1 + 35) +
                one_over_two_q * *(b + 105 * OS1_S1 + 35);
            *(b + 149 * OS1_S1 + 59) =
                prefactor_y * *(b + 149 * OS1_S1 + 36) -
                p_over_q * *(b + 202 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 36) +
                one_over_two_q * *(b + 149 * OS1_S1 + 20);
            *(b + 149 * OS1_S1 + 60) =
                prefactor_z * *(b + 149 * OS1_S1 + 36) -
                p_over_q * *(b + 203 * OS1_S1 + 36) +
                one_over_two_q * *(b + 105 * OS1_S1 + 36);
            *(b + 149 * OS1_S1 + 61) =
                prefactor_z * *(b + 149 * OS1_S1 + 37) -
                p_over_q * *(b + 203 * OS1_S1 + 37) +
                one_over_two_q * *(b + 105 * OS1_S1 + 37) +
                one_over_two_q * *(b + 149 * OS1_S1 + 20);
            *(b + 149 * OS1_S1 + 62) =
                prefactor_x * *(b + 149 * OS1_S1 + 41) -
                p_over_q * *(b + 194 * OS1_S1 + 41) +
                one_over_two_q * *(b + 113 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 26);
            *(b + 149 * OS1_S1 + 63) =
                prefactor_z * *(b + 149 * OS1_S1 + 38) -
                p_over_q * *(b + 203 * OS1_S1 + 38) +
                one_over_two_q * *(b + 105 * OS1_S1 + 38);
            *(b + 149 * OS1_S1 + 64) =
                prefactor_y * *(b + 149 * OS1_S1 + 40) -
                p_over_q * *(b + 202 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 40);
            *(b + 149 * OS1_S1 + 65) =
                prefactor_z * *(b + 149 * OS1_S1 + 40) -
                p_over_q * *(b + 203 * OS1_S1 + 40) +
                one_over_two_q * *(b + 105 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 22);
            *(b + 149 * OS1_S1 + 66) =
                prefactor_x * *(b + 149 * OS1_S1 + 45) -
                p_over_q * *(b + 194 * OS1_S1 + 45) +
                one_over_two_q * *(b + 113 * OS1_S1 + 45) +
                one_over_two_q * *(b + 149 * OS1_S1 + 30);
            *(b + 149 * OS1_S1 + 67) =
                prefactor_z * *(b + 149 * OS1_S1 + 41) -
                p_over_q * *(b + 203 * OS1_S1 + 41) +
                one_over_two_q * *(b + 105 * OS1_S1 + 41);
            *(b + 149 * OS1_S1 + 68) =
                prefactor_z * *(b + 149 * OS1_S1 + 42) -
                p_over_q * *(b + 203 * OS1_S1 + 42) +
                one_over_two_q * *(b + 105 * OS1_S1 + 42) +
                one_over_two_q * *(b + 149 * OS1_S1 + 23);
            *(b + 149 * OS1_S1 + 69) =
                prefactor_y * *(b + 149 * OS1_S1 + 44) -
                p_over_q * *(b + 202 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 44);
            *(b + 149 * OS1_S1 + 70) =
                prefactor_x * *(b + 149 * OS1_S1 + 49) -
                p_over_q * *(b + 194 * OS1_S1 + 49) +
                one_over_two_q * *(b + 113 * OS1_S1 + 49) +
                one_over_two_q * *(b + 149 * OS1_S1 + 34);
            *(b + 149 * OS1_S1 + 71) =
                prefactor_x * *(b + 149 * OS1_S1 + 50) -
                p_over_q * *(b + 194 * OS1_S1 + 50) +
                one_over_two_q * *(b + 113 * OS1_S1 + 50);
            *(b + 149 * OS1_S1 + 72) =
                prefactor_z * *(b + 149 * OS1_S1 + 45) -
                p_over_q * *(b + 203 * OS1_S1 + 45) +
                one_over_two_q * *(b + 105 * OS1_S1 + 45);
            *(b + 149 * OS1_S1 + 73) =
                prefactor_x * *(b + 149 * OS1_S1 + 52) -
                p_over_q * *(b + 194 * OS1_S1 + 52) +
                one_over_two_q * *(b + 113 * OS1_S1 + 52);
            *(b + 149 * OS1_S1 + 74) =
                prefactor_x * *(b + 149 * OS1_S1 + 53) -
                p_over_q * *(b + 194 * OS1_S1 + 53) +
                one_over_two_q * *(b + 113 * OS1_S1 + 53);
            *(b + 149 * OS1_S1 + 75) =
                prefactor_x * *(b + 149 * OS1_S1 + 54) -
                p_over_q * *(b + 194 * OS1_S1 + 54) +
                one_over_two_q * *(b + 113 * OS1_S1 + 54);
            *(b + 149 * OS1_S1 + 76) =
                prefactor_x * *(b + 149 * OS1_S1 + 55) -
                p_over_q * *(b + 194 * OS1_S1 + 55) +
                one_over_two_q * *(b + 113 * OS1_S1 + 55);
            *(b + 149 * OS1_S1 + 77) =
                prefactor_y * *(b + 149 * OS1_S1 + 50) -
                p_over_q * *(b + 202 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 149 * OS1_S1 + 30);
            *(b + 149 * OS1_S1 + 78) =
                prefactor_z * *(b + 149 * OS1_S1 + 50) -
                p_over_q * *(b + 203 * OS1_S1 + 50) +
                one_over_two_q * *(b + 105 * OS1_S1 + 50);
            *(b + 149 * OS1_S1 + 79) =
                prefactor_z * *(b + 149 * OS1_S1 + 51) -
                p_over_q * *(b + 203 * OS1_S1 + 51) +
                one_over_two_q * *(b + 105 * OS1_S1 + 51) +
                one_over_two_q * *(b + 149 * OS1_S1 + 30);
            *(b + 149 * OS1_S1 + 80) =
                prefactor_z * *(b + 149 * OS1_S1 + 52) -
                p_over_q * *(b + 203 * OS1_S1 + 52) +
                one_over_two_q * *(b + 105 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 31);
            *(b + 149 * OS1_S1 + 81) =
                prefactor_y * *(b + 149 * OS1_S1 + 54) -
                p_over_q * *(b + 202 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 54) +
                one_over_two_q * *(b + 149 * OS1_S1 + 34);
            *(b + 149 * OS1_S1 + 82) =
                prefactor_y * *(b + 149 * OS1_S1 + 55) -
                p_over_q * *(b + 202 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 55);
            *(b + 149 * OS1_S1 + 83) =
                prefactor_z * *(b + 149 * OS1_S1 + 55) -
                p_over_q * *(b + 203 * OS1_S1 + 55) +
                one_over_two_q * *(b + 105 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 149 * OS1_S1 + 34);
            *(b + 150 * OS1_S1 + 56) =
                prefactor_x * *(b + 150 * OS1_S1 + 35) -
                p_over_q * *(b + 195 * OS1_S1 + 35) +
                one_over_two_q * *(b + 114 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 150 * OS1_S1 + 20);
            *(b + 150 * OS1_S1 + 57) =
                prefactor_y * *(b + 150 * OS1_S1 + 35) -
                p_over_q * *(b + 203 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 35);
            *(b + 150 * OS1_S1 + 58) =
                prefactor_z * *(b + 150 * OS1_S1 + 35) -
                p_over_q * *(b + 204 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 35);
            *(b + 150 * OS1_S1 + 59) =
                prefactor_y * *(b + 150 * OS1_S1 + 36) -
                p_over_q * *(b + 203 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 36) +
                one_over_two_q * *(b + 150 * OS1_S1 + 20);
            *(b + 150 * OS1_S1 + 60) =
                prefactor_z * *(b + 150 * OS1_S1 + 36) -
                p_over_q * *(b + 204 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 36);
            *(b + 150 * OS1_S1 + 61) =
                prefactor_z * *(b + 150 * OS1_S1 + 37) -
                p_over_q * *(b + 204 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 37) +
                one_over_two_q * *(b + 150 * OS1_S1 + 20);
            *(b + 150 * OS1_S1 + 62) =
                prefactor_x * *(b + 150 * OS1_S1 + 41) -
                p_over_q * *(b + 195 * OS1_S1 + 41) +
                one_over_two_q * *(b + 114 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 26);
            *(b + 150 * OS1_S1 + 63) =
                prefactor_z * *(b + 150 * OS1_S1 + 38) -
                p_over_q * *(b + 204 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 38);
            *(b + 150 * OS1_S1 + 64) =
                prefactor_y * *(b + 150 * OS1_S1 + 40) -
                p_over_q * *(b + 203 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 40);
            *(b + 150 * OS1_S1 + 65) =
                prefactor_x * *(b + 150 * OS1_S1 + 44) -
                p_over_q * *(b + 195 * OS1_S1 + 44) +
                one_over_two_q * *(b + 114 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 29);
            *(b + 150 * OS1_S1 + 66) =
                prefactor_x * *(b + 150 * OS1_S1 + 45) -
                p_over_q * *(b + 195 * OS1_S1 + 45) +
                one_over_two_q * *(b + 114 * OS1_S1 + 45) +
                one_over_two_q * *(b + 150 * OS1_S1 + 30);
            *(b + 150 * OS1_S1 + 67) =
                prefactor_z * *(b + 150 * OS1_S1 + 41) -
                p_over_q * *(b + 204 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 41);
            *(b + 150 * OS1_S1 + 68) =
                prefactor_x * *(b + 150 * OS1_S1 + 47) -
                p_over_q * *(b + 195 * OS1_S1 + 47) +
                one_over_two_q * *(b + 114 * OS1_S1 + 47) +
                one_over_two_q * *(b + 150 * OS1_S1 + 32);
            *(b + 150 * OS1_S1 + 69) =
                prefactor_y * *(b + 150 * OS1_S1 + 44) -
                p_over_q * *(b + 203 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 44);
            *(b + 150 * OS1_S1 + 70) =
                prefactor_x * *(b + 150 * OS1_S1 + 49) -
                p_over_q * *(b + 195 * OS1_S1 + 49) +
                one_over_two_q * *(b + 114 * OS1_S1 + 49) +
                one_over_two_q * *(b + 150 * OS1_S1 + 34);
            *(b + 150 * OS1_S1 + 71) =
                prefactor_x * *(b + 150 * OS1_S1 + 50) -
                p_over_q * *(b + 195 * OS1_S1 + 50) +
                one_over_two_q * *(b + 114 * OS1_S1 + 50);
            *(b + 150 * OS1_S1 + 72) =
                prefactor_x * *(b + 150 * OS1_S1 + 51) -
                p_over_q * *(b + 195 * OS1_S1 + 51) +
                one_over_two_q * *(b + 114 * OS1_S1 + 51);
            *(b + 150 * OS1_S1 + 73) =
                prefactor_x * *(b + 150 * OS1_S1 + 52) -
                p_over_q * *(b + 195 * OS1_S1 + 52) +
                one_over_two_q * *(b + 114 * OS1_S1 + 52);
            *(b + 150 * OS1_S1 + 74) =
                prefactor_x * *(b + 150 * OS1_S1 + 53) -
                p_over_q * *(b + 195 * OS1_S1 + 53) +
                one_over_two_q * *(b + 114 * OS1_S1 + 53);
            *(b + 150 * OS1_S1 + 75) =
                prefactor_x * *(b + 150 * OS1_S1 + 54) -
                p_over_q * *(b + 195 * OS1_S1 + 54) +
                one_over_two_q * *(b + 114 * OS1_S1 + 54);
            *(b + 150 * OS1_S1 + 76) =
                prefactor_x * *(b + 150 * OS1_S1 + 55) -
                p_over_q * *(b + 195 * OS1_S1 + 55) +
                one_over_two_q * *(b + 114 * OS1_S1 + 55);
            *(b + 150 * OS1_S1 + 77) =
                prefactor_y * *(b + 150 * OS1_S1 + 50) -
                p_over_q * *(b + 203 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 150 * OS1_S1 + 30);
            *(b + 150 * OS1_S1 + 78) =
                prefactor_z * *(b + 150 * OS1_S1 + 50) -
                p_over_q * *(b + 204 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 50);
            *(b + 150 * OS1_S1 + 79) =
                prefactor_z * *(b + 150 * OS1_S1 + 51) -
                p_over_q * *(b + 204 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 51) +
                one_over_two_q * *(b + 150 * OS1_S1 + 30);
            *(b + 150 * OS1_S1 + 80) =
                prefactor_z * *(b + 150 * OS1_S1 + 52) -
                p_over_q * *(b + 204 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 31);
            *(b + 150 * OS1_S1 + 81) =
                prefactor_y * *(b + 150 * OS1_S1 + 54) -
                p_over_q * *(b + 203 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 54) +
                one_over_two_q * *(b + 150 * OS1_S1 + 34);
            *(b + 150 * OS1_S1 + 82) =
                prefactor_y * *(b + 150 * OS1_S1 + 55) -
                p_over_q * *(b + 203 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 55);
            *(b + 150 * OS1_S1 + 83) =
                prefactor_z * *(b + 150 * OS1_S1 + 55) -
                p_over_q * *(b + 204 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 150 * OS1_S1 + 34);
            *(b + 151 * OS1_S1 + 56) =
                prefactor_x * *(b + 151 * OS1_S1 + 35) -
                p_over_q * *(b + 196 * OS1_S1 + 35) +
                one_over_two_q * *(b + 115 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 20);
            *(b + 151 * OS1_S1 + 57) =
                prefactor_y * *(b + 151 * OS1_S1 + 35) -
                p_over_q * *(b + 204 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 35);
            *(b + 151 * OS1_S1 + 58) =
                prefactor_z * *(b + 151 * OS1_S1 + 35) -
                p_over_q * *(b + 205 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 35);
            *(b + 151 * OS1_S1 + 59) =
                prefactor_y * *(b + 151 * OS1_S1 + 36) -
                p_over_q * *(b + 204 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 36) +
                one_over_two_q * *(b + 151 * OS1_S1 + 20);
            *(b + 151 * OS1_S1 + 60) =
                prefactor_z * *(b + 151 * OS1_S1 + 36) -
                p_over_q * *(b + 205 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 36);
            *(b + 151 * OS1_S1 + 61) =
                prefactor_z * *(b + 151 * OS1_S1 + 37) -
                p_over_q * *(b + 205 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 37) +
                one_over_two_q * *(b + 151 * OS1_S1 + 20);
            *(b + 151 * OS1_S1 + 62) =
                prefactor_x * *(b + 151 * OS1_S1 + 41) -
                p_over_q * *(b + 196 * OS1_S1 + 41) +
                one_over_two_q * *(b + 115 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 26);
            *(b + 151 * OS1_S1 + 63) =
                prefactor_z * *(b + 151 * OS1_S1 + 38) -
                p_over_q * *(b + 205 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 38);
            *(b + 151 * OS1_S1 + 64) =
                prefactor_y * *(b + 151 * OS1_S1 + 40) -
                p_over_q * *(b + 204 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 40);
            *(b + 151 * OS1_S1 + 65) =
                prefactor_x * *(b + 151 * OS1_S1 + 44) -
                p_over_q * *(b + 196 * OS1_S1 + 44) +
                one_over_two_q * *(b + 115 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 29);
            *(b + 151 * OS1_S1 + 66) =
                prefactor_x * *(b + 151 * OS1_S1 + 45) -
                p_over_q * *(b + 196 * OS1_S1 + 45) +
                one_over_two_q * *(b + 115 * OS1_S1 + 45) +
                one_over_two_q * *(b + 151 * OS1_S1 + 30);
            *(b + 151 * OS1_S1 + 67) =
                prefactor_z * *(b + 151 * OS1_S1 + 41) -
                p_over_q * *(b + 205 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 41);
            *(b + 151 * OS1_S1 + 68) =
                prefactor_x * *(b + 151 * OS1_S1 + 47) -
                p_over_q * *(b + 196 * OS1_S1 + 47) +
                one_over_two_q * *(b + 115 * OS1_S1 + 47) +
                one_over_two_q * *(b + 151 * OS1_S1 + 32);
            *(b + 151 * OS1_S1 + 69) =
                prefactor_y * *(b + 151 * OS1_S1 + 44) -
                p_over_q * *(b + 204 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 44);
            *(b + 151 * OS1_S1 + 70) =
                prefactor_x * *(b + 151 * OS1_S1 + 49) -
                p_over_q * *(b + 196 * OS1_S1 + 49) +
                one_over_two_q * *(b + 115 * OS1_S1 + 49) +
                one_over_two_q * *(b + 151 * OS1_S1 + 34);
            *(b + 151 * OS1_S1 + 71) =
                prefactor_x * *(b + 151 * OS1_S1 + 50) -
                p_over_q * *(b + 196 * OS1_S1 + 50) +
                one_over_two_q * *(b + 115 * OS1_S1 + 50);
            *(b + 151 * OS1_S1 + 72) =
                prefactor_x * *(b + 151 * OS1_S1 + 51) -
                p_over_q * *(b + 196 * OS1_S1 + 51) +
                one_over_two_q * *(b + 115 * OS1_S1 + 51);
            *(b + 151 * OS1_S1 + 73) =
                prefactor_x * *(b + 151 * OS1_S1 + 52) -
                p_over_q * *(b + 196 * OS1_S1 + 52) +
                one_over_two_q * *(b + 115 * OS1_S1 + 52);
            *(b + 151 * OS1_S1 + 74) =
                prefactor_x * *(b + 151 * OS1_S1 + 53) -
                p_over_q * *(b + 196 * OS1_S1 + 53) +
                one_over_two_q * *(b + 115 * OS1_S1 + 53);
            *(b + 151 * OS1_S1 + 75) =
                prefactor_x * *(b + 151 * OS1_S1 + 54) -
                p_over_q * *(b + 196 * OS1_S1 + 54) +
                one_over_two_q * *(b + 115 * OS1_S1 + 54);
            *(b + 151 * OS1_S1 + 76) =
                prefactor_x * *(b + 151 * OS1_S1 + 55) -
                p_over_q * *(b + 196 * OS1_S1 + 55) +
                one_over_two_q * *(b + 115 * OS1_S1 + 55);
            *(b + 151 * OS1_S1 + 77) =
                prefactor_y * *(b + 151 * OS1_S1 + 50) -
                p_over_q * *(b + 204 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 30);
            *(b + 151 * OS1_S1 + 78) =
                prefactor_z * *(b + 151 * OS1_S1 + 50) -
                p_over_q * *(b + 205 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 50);
            *(b + 151 * OS1_S1 + 79) =
                prefactor_z * *(b + 151 * OS1_S1 + 51) -
                p_over_q * *(b + 205 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 51) +
                one_over_two_q * *(b + 151 * OS1_S1 + 30);
            *(b + 151 * OS1_S1 + 80) =
                prefactor_z * *(b + 151 * OS1_S1 + 52) -
                p_over_q * *(b + 205 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 31);
            *(b + 151 * OS1_S1 + 81) =
                prefactor_y * *(b + 151 * OS1_S1 + 54) -
                p_over_q * *(b + 204 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 54) +
                one_over_two_q * *(b + 151 * OS1_S1 + 34);
            *(b + 151 * OS1_S1 + 82) =
                prefactor_y * *(b + 151 * OS1_S1 + 55) -
                p_over_q * *(b + 204 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 55);
            *(b + 151 * OS1_S1 + 83) =
                prefactor_z * *(b + 151 * OS1_S1 + 55) -
                p_over_q * *(b + 205 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 34);
            *(b + 152 * OS1_S1 + 56) =
                prefactor_x * *(b + 152 * OS1_S1 + 35) -
                p_over_q * *(b + 197 * OS1_S1 + 35) +
                one_over_two_q * *(b + 116 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 20);
            *(b + 152 * OS1_S1 + 57) =
                prefactor_y * *(b + 152 * OS1_S1 + 35) -
                p_over_q * *(b + 205 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 35);
            *(b + 152 * OS1_S1 + 58) =
                prefactor_z * *(b + 152 * OS1_S1 + 35) -
                p_over_q * *(b + 206 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 35);
            *(b + 152 * OS1_S1 + 59) =
                prefactor_y * *(b + 152 * OS1_S1 + 36) -
                p_over_q * *(b + 205 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 36) +
                one_over_two_q * *(b + 152 * OS1_S1 + 20);
            *(b + 152 * OS1_S1 + 60) =
                prefactor_y * *(b + 152 * OS1_S1 + 37) -
                p_over_q * *(b + 205 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 37);
            *(b + 152 * OS1_S1 + 61) =
                prefactor_z * *(b + 152 * OS1_S1 + 37) -
                p_over_q * *(b + 206 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 37) +
                one_over_two_q * *(b + 152 * OS1_S1 + 20);
            *(b + 152 * OS1_S1 + 62) =
                prefactor_x * *(b + 152 * OS1_S1 + 41) -
                p_over_q * *(b + 197 * OS1_S1 + 41) +
                one_over_two_q * *(b + 116 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 26);
            *(b + 152 * OS1_S1 + 63) =
                prefactor_z * *(b + 152 * OS1_S1 + 38) -
                p_over_q * *(b + 206 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 38);
            *(b + 152 * OS1_S1 + 64) =
                prefactor_y * *(b + 152 * OS1_S1 + 40) -
                p_over_q * *(b + 205 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 40);
            *(b + 152 * OS1_S1 + 65) =
                prefactor_x * *(b + 152 * OS1_S1 + 44) -
                p_over_q * *(b + 197 * OS1_S1 + 44) +
                one_over_two_q * *(b + 116 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 29);
            *(b + 152 * OS1_S1 + 66) =
                prefactor_x * *(b + 152 * OS1_S1 + 45) -
                p_over_q * *(b + 197 * OS1_S1 + 45) +
                one_over_two_q * *(b + 116 * OS1_S1 + 45) +
                one_over_two_q * *(b + 152 * OS1_S1 + 30);
            *(b + 152 * OS1_S1 + 67) =
                prefactor_z * *(b + 152 * OS1_S1 + 41) -
                p_over_q * *(b + 206 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 41);
            *(b + 152 * OS1_S1 + 68) =
                prefactor_x * *(b + 152 * OS1_S1 + 47) -
                p_over_q * *(b + 197 * OS1_S1 + 47) +
                one_over_two_q * *(b + 116 * OS1_S1 + 47) +
                one_over_two_q * *(b + 152 * OS1_S1 + 32);
            *(b + 152 * OS1_S1 + 69) =
                prefactor_y * *(b + 152 * OS1_S1 + 44) -
                p_over_q * *(b + 205 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 44);
            *(b + 152 * OS1_S1 + 70) =
                prefactor_x * *(b + 152 * OS1_S1 + 49) -
                p_over_q * *(b + 197 * OS1_S1 + 49) +
                one_over_two_q * *(b + 116 * OS1_S1 + 49) +
                one_over_two_q * *(b + 152 * OS1_S1 + 34);
            *(b + 152 * OS1_S1 + 71) =
                prefactor_x * *(b + 152 * OS1_S1 + 50) -
                p_over_q * *(b + 197 * OS1_S1 + 50) +
                one_over_two_q * *(b + 116 * OS1_S1 + 50);
            *(b + 152 * OS1_S1 + 72) =
                prefactor_x * *(b + 152 * OS1_S1 + 51) -
                p_over_q * *(b + 197 * OS1_S1 + 51) +
                one_over_two_q * *(b + 116 * OS1_S1 + 51);
            *(b + 152 * OS1_S1 + 73) =
                prefactor_x * *(b + 152 * OS1_S1 + 52) -
                p_over_q * *(b + 197 * OS1_S1 + 52) +
                one_over_two_q * *(b + 116 * OS1_S1 + 52);
            *(b + 152 * OS1_S1 + 74) =
                prefactor_x * *(b + 152 * OS1_S1 + 53) -
                p_over_q * *(b + 197 * OS1_S1 + 53) +
                one_over_two_q * *(b + 116 * OS1_S1 + 53);
            *(b + 152 * OS1_S1 + 75) =
                prefactor_x * *(b + 152 * OS1_S1 + 54) -
                p_over_q * *(b + 197 * OS1_S1 + 54) +
                one_over_two_q * *(b + 116 * OS1_S1 + 54);
            *(b + 152 * OS1_S1 + 76) =
                prefactor_x * *(b + 152 * OS1_S1 + 55) -
                p_over_q * *(b + 197 * OS1_S1 + 55) +
                one_over_two_q * *(b + 116 * OS1_S1 + 55);
            *(b + 152 * OS1_S1 + 77) =
                prefactor_y * *(b + 152 * OS1_S1 + 50) -
                p_over_q * *(b + 205 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 30);
            *(b + 152 * OS1_S1 + 78) =
                prefactor_z * *(b + 152 * OS1_S1 + 50) -
                p_over_q * *(b + 206 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 50);
            *(b + 152 * OS1_S1 + 79) =
                prefactor_z * *(b + 152 * OS1_S1 + 51) -
                p_over_q * *(b + 206 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 51) +
                one_over_two_q * *(b + 152 * OS1_S1 + 30);
            *(b + 152 * OS1_S1 + 80) =
                prefactor_y * *(b + 152 * OS1_S1 + 53) -
                p_over_q * *(b + 205 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 33);
            *(b + 152 * OS1_S1 + 81) =
                prefactor_y * *(b + 152 * OS1_S1 + 54) -
                p_over_q * *(b + 205 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 54) +
                one_over_two_q * *(b + 152 * OS1_S1 + 34);
            *(b + 152 * OS1_S1 + 82) =
                prefactor_y * *(b + 152 * OS1_S1 + 55) -
                p_over_q * *(b + 205 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 55);
            *(b + 152 * OS1_S1 + 83) =
                prefactor_z * *(b + 152 * OS1_S1 + 55) -
                p_over_q * *(b + 206 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 34);
            *(b + 153 * OS1_S1 + 56) =
                prefactor_x * *(b + 153 * OS1_S1 + 35) -
                p_over_q * *(b + 198 * OS1_S1 + 35) +
                one_over_two_q * *(b + 117 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 153 * OS1_S1 + 20);
            *(b + 153 * OS1_S1 + 57) =
                prefactor_y * *(b + 153 * OS1_S1 + 35) -
                p_over_q * *(b + 206 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 35);
            *(b + 153 * OS1_S1 + 58) =
                prefactor_z * *(b + 153 * OS1_S1 + 35) -
                p_over_q * *(b + 207 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 35);
            *(b + 153 * OS1_S1 + 59) =
                prefactor_y * *(b + 153 * OS1_S1 + 36) -
                p_over_q * *(b + 206 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 36) +
                one_over_two_q * *(b + 153 * OS1_S1 + 20);
            *(b + 153 * OS1_S1 + 60) =
                prefactor_y * *(b + 153 * OS1_S1 + 37) -
                p_over_q * *(b + 206 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 37);
            *(b + 153 * OS1_S1 + 61) =
                prefactor_z * *(b + 153 * OS1_S1 + 37) -
                p_over_q * *(b + 207 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 37) +
                one_over_two_q * *(b + 153 * OS1_S1 + 20);
            *(b + 153 * OS1_S1 + 62) =
                prefactor_x * *(b + 153 * OS1_S1 + 41) -
                p_over_q * *(b + 198 * OS1_S1 + 41) +
                one_over_two_q * *(b + 117 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 26);
            *(b + 153 * OS1_S1 + 63) =
                prefactor_z * *(b + 153 * OS1_S1 + 38) -
                p_over_q * *(b + 207 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 38);
            *(b + 153 * OS1_S1 + 64) =
                prefactor_y * *(b + 153 * OS1_S1 + 40) -
                p_over_q * *(b + 206 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 40);
            *(b + 153 * OS1_S1 + 65) =
                prefactor_x * *(b + 153 * OS1_S1 + 44) -
                p_over_q * *(b + 198 * OS1_S1 + 44) +
                one_over_two_q * *(b + 117 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 29);
            *(b + 153 * OS1_S1 + 66) =
                prefactor_x * *(b + 153 * OS1_S1 + 45) -
                p_over_q * *(b + 198 * OS1_S1 + 45) +
                one_over_two_q * *(b + 117 * OS1_S1 + 45) +
                one_over_two_q * *(b + 153 * OS1_S1 + 30);
            *(b + 153 * OS1_S1 + 67) =
                prefactor_z * *(b + 153 * OS1_S1 + 41) -
                p_over_q * *(b + 207 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 41);
            *(b + 153 * OS1_S1 + 68) =
                prefactor_x * *(b + 153 * OS1_S1 + 47) -
                p_over_q * *(b + 198 * OS1_S1 + 47) +
                one_over_two_q * *(b + 117 * OS1_S1 + 47) +
                one_over_two_q * *(b + 153 * OS1_S1 + 32);
            *(b + 153 * OS1_S1 + 69) =
                prefactor_y * *(b + 153 * OS1_S1 + 44) -
                p_over_q * *(b + 206 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 44);
            *(b + 153 * OS1_S1 + 70) =
                prefactor_x * *(b + 153 * OS1_S1 + 49) -
                p_over_q * *(b + 198 * OS1_S1 + 49) +
                one_over_two_q * *(b + 117 * OS1_S1 + 49) +
                one_over_two_q * *(b + 153 * OS1_S1 + 34);
            *(b + 153 * OS1_S1 + 71) =
                prefactor_x * *(b + 153 * OS1_S1 + 50) -
                p_over_q * *(b + 198 * OS1_S1 + 50) +
                one_over_two_q * *(b + 117 * OS1_S1 + 50);
            *(b + 153 * OS1_S1 + 72) =
                prefactor_x * *(b + 153 * OS1_S1 + 51) -
                p_over_q * *(b + 198 * OS1_S1 + 51) +
                one_over_two_q * *(b + 117 * OS1_S1 + 51);
            *(b + 153 * OS1_S1 + 73) =
                prefactor_x * *(b + 153 * OS1_S1 + 52) -
                p_over_q * *(b + 198 * OS1_S1 + 52) +
                one_over_two_q * *(b + 117 * OS1_S1 + 52);
            *(b + 153 * OS1_S1 + 74) =
                prefactor_x * *(b + 153 * OS1_S1 + 53) -
                p_over_q * *(b + 198 * OS1_S1 + 53) +
                one_over_two_q * *(b + 117 * OS1_S1 + 53);
            *(b + 153 * OS1_S1 + 75) =
                prefactor_x * *(b + 153 * OS1_S1 + 54) -
                p_over_q * *(b + 198 * OS1_S1 + 54) +
                one_over_two_q * *(b + 117 * OS1_S1 + 54);
            *(b + 153 * OS1_S1 + 76) =
                prefactor_x * *(b + 153 * OS1_S1 + 55) -
                p_over_q * *(b + 198 * OS1_S1 + 55) +
                one_over_two_q * *(b + 117 * OS1_S1 + 55);
            *(b + 153 * OS1_S1 + 77) =
                prefactor_y * *(b + 153 * OS1_S1 + 50) -
                p_over_q * *(b + 206 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 153 * OS1_S1 + 30);
            *(b + 153 * OS1_S1 + 78) =
                prefactor_z * *(b + 153 * OS1_S1 + 50) -
                p_over_q * *(b + 207 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 50);
            *(b + 153 * OS1_S1 + 79) =
                prefactor_z * *(b + 153 * OS1_S1 + 51) -
                p_over_q * *(b + 207 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 51) +
                one_over_two_q * *(b + 153 * OS1_S1 + 30);
            *(b + 153 * OS1_S1 + 80) =
                prefactor_y * *(b + 153 * OS1_S1 + 53) -
                p_over_q * *(b + 206 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 33);
            *(b + 153 * OS1_S1 + 81) =
                prefactor_y * *(b + 153 * OS1_S1 + 54) -
                p_over_q * *(b + 206 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 54) +
                one_over_two_q * *(b + 153 * OS1_S1 + 34);
            *(b + 153 * OS1_S1 + 82) =
                prefactor_y * *(b + 153 * OS1_S1 + 55) -
                p_over_q * *(b + 206 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 55);
            *(b + 153 * OS1_S1 + 83) =
                prefactor_z * *(b + 153 * OS1_S1 + 55) -
                p_over_q * *(b + 207 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 153 * OS1_S1 + 34);
            *(b + 154 * OS1_S1 + 56) =
                prefactor_x * *(b + 154 * OS1_S1 + 35) -
                p_over_q * *(b + 199 * OS1_S1 + 35) +
                one_over_two_q * *(b + 118 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 154 * OS1_S1 + 20);
            *(b + 154 * OS1_S1 + 57) =
                prefactor_y * *(b + 154 * OS1_S1 + 35) -
                p_over_q * *(b + 207 * OS1_S1 + 35) +
                one_over_two_q * *(b + 111 * OS1_S1 + 35);
            *(b + 154 * OS1_S1 + 58) =
                prefactor_z * *(b + 154 * OS1_S1 + 35) -
                p_over_q * *(b + 208 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 35);
            *(b + 154 * OS1_S1 + 59) =
                prefactor_y * *(b + 154 * OS1_S1 + 36) -
                p_over_q * *(b + 207 * OS1_S1 + 36) +
                one_over_two_q * *(b + 111 * OS1_S1 + 36) +
                one_over_two_q * *(b + 154 * OS1_S1 + 20);
            *(b + 154 * OS1_S1 + 60) =
                prefactor_y * *(b + 154 * OS1_S1 + 37) -
                p_over_q * *(b + 207 * OS1_S1 + 37) +
                one_over_two_q * *(b + 111 * OS1_S1 + 37);
            *(b + 154 * OS1_S1 + 61) =
                prefactor_z * *(b + 154 * OS1_S1 + 37) -
                p_over_q * *(b + 208 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 37) +
                one_over_two_q * *(b + 154 * OS1_S1 + 20);
            *(b + 154 * OS1_S1 + 62) =
                prefactor_y * *(b + 154 * OS1_S1 + 38) -
                p_over_q * *(b + 207 * OS1_S1 + 38) +
                one_over_two_q * *(b + 111 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 21);
            *(b + 154 * OS1_S1 + 63) =
                prefactor_z * *(b + 154 * OS1_S1 + 38) -
                p_over_q * *(b + 208 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 38);
            *(b + 154 * OS1_S1 + 64) =
                prefactor_y * *(b + 154 * OS1_S1 + 40) -
                p_over_q * *(b + 207 * OS1_S1 + 40) +
                one_over_two_q * *(b + 111 * OS1_S1 + 40);
            *(b + 154 * OS1_S1 + 65) =
                prefactor_x * *(b + 154 * OS1_S1 + 44) -
                p_over_q * *(b + 199 * OS1_S1 + 44) +
                one_over_two_q * *(b + 118 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 29);
            *(b + 154 * OS1_S1 + 66) =
                prefactor_x * *(b + 154 * OS1_S1 + 45) -
                p_over_q * *(b + 199 * OS1_S1 + 45) +
                one_over_two_q * *(b + 118 * OS1_S1 + 45) +
                one_over_two_q * *(b + 154 * OS1_S1 + 30);
            *(b + 154 * OS1_S1 + 67) =
                prefactor_z * *(b + 154 * OS1_S1 + 41) -
                p_over_q * *(b + 208 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 41);
            *(b + 154 * OS1_S1 + 68) =
                prefactor_y * *(b + 154 * OS1_S1 + 43) -
                p_over_q * *(b + 207 * OS1_S1 + 43) +
                one_over_two_q * *(b + 111 * OS1_S1 + 43) +
                one_over_two_q * *(b + 154 * OS1_S1 + 25);
            *(b + 154 * OS1_S1 + 69) =
                prefactor_y * *(b + 154 * OS1_S1 + 44) -
                p_over_q * *(b + 207 * OS1_S1 + 44) +
                one_over_two_q * *(b + 111 * OS1_S1 + 44);
            *(b + 154 * OS1_S1 + 70) =
                prefactor_x * *(b + 154 * OS1_S1 + 49) -
                p_over_q * *(b + 199 * OS1_S1 + 49) +
                one_over_two_q * *(b + 118 * OS1_S1 + 49) +
                one_over_two_q * *(b + 154 * OS1_S1 + 34);
            *(b + 154 * OS1_S1 + 71) =
                prefactor_x * *(b + 154 * OS1_S1 + 50) -
                p_over_q * *(b + 199 * OS1_S1 + 50) +
                one_over_two_q * *(b + 118 * OS1_S1 + 50);
            *(b + 154 * OS1_S1 + 72) =
                prefactor_x * *(b + 154 * OS1_S1 + 51) -
                p_over_q * *(b + 199 * OS1_S1 + 51) +
                one_over_two_q * *(b + 118 * OS1_S1 + 51);
            *(b + 154 * OS1_S1 + 73) =
                prefactor_x * *(b + 154 * OS1_S1 + 52) -
                p_over_q * *(b + 199 * OS1_S1 + 52) +
                one_over_two_q * *(b + 118 * OS1_S1 + 52);
            *(b + 154 * OS1_S1 + 74) =
                prefactor_x * *(b + 154 * OS1_S1 + 53) -
                p_over_q * *(b + 199 * OS1_S1 + 53) +
                one_over_two_q * *(b + 118 * OS1_S1 + 53);
            *(b + 154 * OS1_S1 + 75) =
                prefactor_y * *(b + 154 * OS1_S1 + 49) -
                p_over_q * *(b + 207 * OS1_S1 + 49) +
                one_over_two_q * *(b + 111 * OS1_S1 + 49);
            *(b + 154 * OS1_S1 + 76) =
                prefactor_x * *(b + 154 * OS1_S1 + 55) -
                p_over_q * *(b + 199 * OS1_S1 + 55) +
                one_over_two_q * *(b + 118 * OS1_S1 + 55);
            *(b + 154 * OS1_S1 + 77) =
                prefactor_y * *(b + 154 * OS1_S1 + 50) -
                p_over_q * *(b + 207 * OS1_S1 + 50) +
                one_over_two_q * *(b + 111 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 154 * OS1_S1 + 30);
            *(b + 154 * OS1_S1 + 78) =
                prefactor_z * *(b + 154 * OS1_S1 + 50) -
                p_over_q * *(b + 208 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 50);
            *(b + 154 * OS1_S1 + 79) =
                prefactor_z * *(b + 154 * OS1_S1 + 51) -
                p_over_q * *(b + 208 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 51) +
                one_over_two_q * *(b + 154 * OS1_S1 + 30);
            *(b + 154 * OS1_S1 + 80) =
                prefactor_y * *(b + 154 * OS1_S1 + 53) -
                p_over_q * *(b + 207 * OS1_S1 + 53) +
                one_over_two_q * *(b + 111 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 33);
            *(b + 154 * OS1_S1 + 81) =
                prefactor_y * *(b + 154 * OS1_S1 + 54) -
                p_over_q * *(b + 207 * OS1_S1 + 54) +
                one_over_two_q * *(b + 111 * OS1_S1 + 54) +
                one_over_two_q * *(b + 154 * OS1_S1 + 34);
            *(b + 154 * OS1_S1 + 82) =
                prefactor_y * *(b + 154 * OS1_S1 + 55) -
                p_over_q * *(b + 207 * OS1_S1 + 55) +
                one_over_two_q * *(b + 111 * OS1_S1 + 55);
            *(b + 154 * OS1_S1 + 83) =
                prefactor_z * *(b + 154 * OS1_S1 + 55) -
                p_over_q * *(b + 208 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 154 * OS1_S1 + 34);
            *(b + 155 * OS1_S1 + 56) =
                prefactor_x * *(b + 155 * OS1_S1 + 35) -
                p_over_q * *(b + 200 * OS1_S1 + 35) +
                one_over_two_q * *(b + 119 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 155 * OS1_S1 + 20);
            *(b + 155 * OS1_S1 + 57) = prefactor_y * *(b + 155 * OS1_S1 + 35) -
                                       p_over_q * *(b + 208 * OS1_S1 + 35);
            *(b + 155 * OS1_S1 + 58) =
                prefactor_z * *(b + 155 * OS1_S1 + 35) -
                p_over_q * *(b + 209 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 35);
            *(b + 155 * OS1_S1 + 59) =
                prefactor_y * *(b + 155 * OS1_S1 + 36) -
                p_over_q * *(b + 208 * OS1_S1 + 36) +
                one_over_two_q * *(b + 155 * OS1_S1 + 20);
            *(b + 155 * OS1_S1 + 60) = prefactor_y * *(b + 155 * OS1_S1 + 37) -
                                       p_over_q * *(b + 208 * OS1_S1 + 37);
            *(b + 155 * OS1_S1 + 61) =
                prefactor_z * *(b + 155 * OS1_S1 + 37) -
                p_over_q * *(b + 209 * OS1_S1 + 37) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 37) +
                one_over_two_q * *(b + 155 * OS1_S1 + 20);
            *(b + 155 * OS1_S1 + 62) =
                prefactor_y * *(b + 155 * OS1_S1 + 38) -
                p_over_q * *(b + 208 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 21);
            *(b + 155 * OS1_S1 + 63) =
                prefactor_z * *(b + 155 * OS1_S1 + 38) -
                p_over_q * *(b + 209 * OS1_S1 + 38) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 38);
            *(b + 155 * OS1_S1 + 64) = prefactor_y * *(b + 155 * OS1_S1 + 40) -
                                       p_over_q * *(b + 208 * OS1_S1 + 40);
            *(b + 155 * OS1_S1 + 65) =
                prefactor_x * *(b + 155 * OS1_S1 + 44) -
                p_over_q * *(b + 200 * OS1_S1 + 44) +
                one_over_two_q * *(b + 119 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 29);
            *(b + 155 * OS1_S1 + 66) =
                prefactor_x * *(b + 155 * OS1_S1 + 45) -
                p_over_q * *(b + 200 * OS1_S1 + 45) +
                one_over_two_q * *(b + 119 * OS1_S1 + 45) +
                one_over_two_q * *(b + 155 * OS1_S1 + 30);
            *(b + 155 * OS1_S1 + 67) =
                prefactor_z * *(b + 155 * OS1_S1 + 41) -
                p_over_q * *(b + 209 * OS1_S1 + 41) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 41);
            *(b + 155 * OS1_S1 + 68) =
                prefactor_y * *(b + 155 * OS1_S1 + 43) -
                p_over_q * *(b + 208 * OS1_S1 + 43) +
                one_over_two_q * *(b + 155 * OS1_S1 + 25);
            *(b + 155 * OS1_S1 + 69) = prefactor_y * *(b + 155 * OS1_S1 + 44) -
                                       p_over_q * *(b + 208 * OS1_S1 + 44);
            *(b + 155 * OS1_S1 + 70) =
                prefactor_x * *(b + 155 * OS1_S1 + 49) -
                p_over_q * *(b + 200 * OS1_S1 + 49) +
                one_over_two_q * *(b + 119 * OS1_S1 + 49) +
                one_over_two_q * *(b + 155 * OS1_S1 + 34);
            *(b + 155 * OS1_S1 + 71) =
                prefactor_x * *(b + 155 * OS1_S1 + 50) -
                p_over_q * *(b + 200 * OS1_S1 + 50) +
                one_over_two_q * *(b + 119 * OS1_S1 + 50);
            *(b + 155 * OS1_S1 + 72) =
                prefactor_x * *(b + 155 * OS1_S1 + 51) -
                p_over_q * *(b + 200 * OS1_S1 + 51) +
                one_over_two_q * *(b + 119 * OS1_S1 + 51);
            *(b + 155 * OS1_S1 + 73) =
                prefactor_x * *(b + 155 * OS1_S1 + 52) -
                p_over_q * *(b + 200 * OS1_S1 + 52) +
                one_over_two_q * *(b + 119 * OS1_S1 + 52);
            *(b + 155 * OS1_S1 + 74) =
                prefactor_x * *(b + 155 * OS1_S1 + 53) -
                p_over_q * *(b + 200 * OS1_S1 + 53) +
                one_over_two_q * *(b + 119 * OS1_S1 + 53);
            *(b + 155 * OS1_S1 + 75) = prefactor_y * *(b + 155 * OS1_S1 + 49) -
                                       p_over_q * *(b + 208 * OS1_S1 + 49);
            *(b + 155 * OS1_S1 + 76) =
                prefactor_x * *(b + 155 * OS1_S1 + 55) -
                p_over_q * *(b + 200 * OS1_S1 + 55) +
                one_over_two_q * *(b + 119 * OS1_S1 + 55);
            *(b + 155 * OS1_S1 + 77) =
                prefactor_y * *(b + 155 * OS1_S1 + 50) -
                p_over_q * *(b + 208 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 155 * OS1_S1 + 30);
            *(b + 155 * OS1_S1 + 78) =
                prefactor_z * *(b + 155 * OS1_S1 + 50) -
                p_over_q * *(b + 209 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 50);
            *(b + 155 * OS1_S1 + 79) =
                prefactor_z * *(b + 155 * OS1_S1 + 51) -
                p_over_q * *(b + 209 * OS1_S1 + 51) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 51) +
                one_over_two_q * *(b + 155 * OS1_S1 + 30);
            *(b + 155 * OS1_S1 + 80) =
                prefactor_y * *(b + 155 * OS1_S1 + 53) -
                p_over_q * *(b + 208 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 33);
            *(b + 155 * OS1_S1 + 81) =
                prefactor_y * *(b + 155 * OS1_S1 + 54) -
                p_over_q * *(b + 208 * OS1_S1 + 54) +
                one_over_two_q * *(b + 155 * OS1_S1 + 34);
            *(b + 155 * OS1_S1 + 82) = prefactor_y * *(b + 155 * OS1_S1 + 55) -
                                       p_over_q * *(b + 208 * OS1_S1 + 55);
            *(b + 155 * OS1_S1 + 83) =
                prefactor_z * *(b + 155 * OS1_S1 + 55) -
                p_over_q * *(b + 209 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 155 * OS1_S1 + 34);
            *(b + 156 * OS1_S1 + 56) =
                prefactor_x * *(b + 156 * OS1_S1 + 35) -
                p_over_q * *(b + 201 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 156 * OS1_S1 + 20);
            *(b + 156 * OS1_S1 + 57) =
                prefactor_y * *(b + 156 * OS1_S1 + 35) -
                p_over_q * *(b + 210 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 35);
            *(b + 156 * OS1_S1 + 58) = prefactor_z * *(b + 156 * OS1_S1 + 35) -
                                       p_over_q * *(b + 211 * OS1_S1 + 35);
            *(b + 156 * OS1_S1 + 59) =
                prefactor_y * *(b + 156 * OS1_S1 + 36) -
                p_over_q * *(b + 210 * OS1_S1 + 36) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 36) +
                one_over_two_q * *(b + 156 * OS1_S1 + 20);
            *(b + 156 * OS1_S1 + 60) = prefactor_z * *(b + 156 * OS1_S1 + 36) -
                                       p_over_q * *(b + 211 * OS1_S1 + 36);
            *(b + 156 * OS1_S1 + 61) =
                prefactor_z * *(b + 156 * OS1_S1 + 37) -
                p_over_q * *(b + 211 * OS1_S1 + 37) +
                one_over_two_q * *(b + 156 * OS1_S1 + 20);
            *(b + 156 * OS1_S1 + 62) =
                prefactor_x * *(b + 156 * OS1_S1 + 41) -
                p_over_q * *(b + 201 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 26);
            *(b + 156 * OS1_S1 + 63) = prefactor_z * *(b + 156 * OS1_S1 + 38) -
                                       p_over_q * *(b + 211 * OS1_S1 + 38);
            *(b + 156 * OS1_S1 + 64) =
                prefactor_y * *(b + 156 * OS1_S1 + 40) -
                p_over_q * *(b + 210 * OS1_S1 + 40) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 40);
            *(b + 156 * OS1_S1 + 65) =
                prefactor_z * *(b + 156 * OS1_S1 + 40) -
                p_over_q * *(b + 211 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 22);
            *(b + 156 * OS1_S1 + 66) =
                prefactor_x * *(b + 156 * OS1_S1 + 45) -
                p_over_q * *(b + 201 * OS1_S1 + 45) +
                one_over_two_q * *(b + 156 * OS1_S1 + 30);
            *(b + 156 * OS1_S1 + 67) = prefactor_z * *(b + 156 * OS1_S1 + 41) -
                                       p_over_q * *(b + 211 * OS1_S1 + 41);
            *(b + 156 * OS1_S1 + 68) =
                prefactor_z * *(b + 156 * OS1_S1 + 42) -
                p_over_q * *(b + 211 * OS1_S1 + 42) +
                one_over_two_q * *(b + 156 * OS1_S1 + 23);
            *(b + 156 * OS1_S1 + 69) =
                prefactor_y * *(b + 156 * OS1_S1 + 44) -
                p_over_q * *(b + 210 * OS1_S1 + 44) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 44);
            *(b + 156 * OS1_S1 + 70) =
                prefactor_x * *(b + 156 * OS1_S1 + 49) -
                p_over_q * *(b + 201 * OS1_S1 + 49) +
                one_over_two_q * *(b + 156 * OS1_S1 + 34);
            *(b + 156 * OS1_S1 + 71) = prefactor_x * *(b + 156 * OS1_S1 + 50) -
                                       p_over_q * *(b + 201 * OS1_S1 + 50);
            *(b + 156 * OS1_S1 + 72) = prefactor_z * *(b + 156 * OS1_S1 + 45) -
                                       p_over_q * *(b + 211 * OS1_S1 + 45);
            *(b + 156 * OS1_S1 + 73) = prefactor_x * *(b + 156 * OS1_S1 + 52) -
                                       p_over_q * *(b + 201 * OS1_S1 + 52);
            *(b + 156 * OS1_S1 + 74) = prefactor_x * *(b + 156 * OS1_S1 + 53) -
                                       p_over_q * *(b + 201 * OS1_S1 + 53);
            *(b + 156 * OS1_S1 + 75) = prefactor_x * *(b + 156 * OS1_S1 + 54) -
                                       p_over_q * *(b + 201 * OS1_S1 + 54);
            *(b + 156 * OS1_S1 + 76) = prefactor_x * *(b + 156 * OS1_S1 + 55) -
                                       p_over_q * *(b + 201 * OS1_S1 + 55);
            *(b + 156 * OS1_S1 + 77) =
                prefactor_y * *(b + 156 * OS1_S1 + 50) -
                p_over_q * *(b + 210 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 156 * OS1_S1 + 30);
            *(b + 156 * OS1_S1 + 78) = prefactor_z * *(b + 156 * OS1_S1 + 50) -
                                       p_over_q * *(b + 211 * OS1_S1 + 50);
            *(b + 156 * OS1_S1 + 79) =
                prefactor_z * *(b + 156 * OS1_S1 + 51) -
                p_over_q * *(b + 211 * OS1_S1 + 51) +
                one_over_two_q * *(b + 156 * OS1_S1 + 30);
            *(b + 156 * OS1_S1 + 80) =
                prefactor_z * *(b + 156 * OS1_S1 + 52) -
                p_over_q * *(b + 211 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 31);
            *(b + 156 * OS1_S1 + 81) =
                prefactor_y * *(b + 156 * OS1_S1 + 54) -
                p_over_q * *(b + 210 * OS1_S1 + 54) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 54) +
                one_over_two_q * *(b + 156 * OS1_S1 + 34);
            *(b + 156 * OS1_S1 + 82) =
                prefactor_y * *(b + 156 * OS1_S1 + 55) -
                p_over_q * *(b + 210 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 55);
            *(b + 156 * OS1_S1 + 83) =
                prefactor_z * *(b + 156 * OS1_S1 + 55) -
                p_over_q * *(b + 211 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 156 * OS1_S1 + 34);
            *(b + 157 * OS1_S1 + 56) =
                prefactor_x * *(b + 157 * OS1_S1 + 35) -
                p_over_q * *(b + 202 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 157 * OS1_S1 + 20);
            *(b + 157 * OS1_S1 + 57) =
                prefactor_y * *(b + 157 * OS1_S1 + 35) -
                p_over_q * *(b + 211 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 35);
            *(b + 157 * OS1_S1 + 58) =
                prefactor_z * *(b + 157 * OS1_S1 + 35) -
                p_over_q * *(b + 212 * OS1_S1 + 35) +
                one_over_two_q * *(b + 112 * OS1_S1 + 35);
            *(b + 157 * OS1_S1 + 59) =
                prefactor_y * *(b + 157 * OS1_S1 + 36) -
                p_over_q * *(b + 211 * OS1_S1 + 36) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 36) +
                one_over_two_q * *(b + 157 * OS1_S1 + 20);
            *(b + 157 * OS1_S1 + 60) =
                prefactor_z * *(b + 157 * OS1_S1 + 36) -
                p_over_q * *(b + 212 * OS1_S1 + 36) +
                one_over_two_q * *(b + 112 * OS1_S1 + 36);
            *(b + 157 * OS1_S1 + 61) =
                prefactor_z * *(b + 157 * OS1_S1 + 37) -
                p_over_q * *(b + 212 * OS1_S1 + 37) +
                one_over_two_q * *(b + 112 * OS1_S1 + 37) +
                one_over_two_q * *(b + 157 * OS1_S1 + 20);
            *(b + 157 * OS1_S1 + 62) =
                prefactor_x * *(b + 157 * OS1_S1 + 41) -
                p_over_q * *(b + 202 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 26);
            *(b + 157 * OS1_S1 + 63) =
                prefactor_z * *(b + 157 * OS1_S1 + 38) -
                p_over_q * *(b + 212 * OS1_S1 + 38) +
                one_over_two_q * *(b + 112 * OS1_S1 + 38);
            *(b + 157 * OS1_S1 + 64) =
                prefactor_y * *(b + 157 * OS1_S1 + 40) -
                p_over_q * *(b + 211 * OS1_S1 + 40) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 40);
            *(b + 157 * OS1_S1 + 65) =
                prefactor_x * *(b + 157 * OS1_S1 + 44) -
                p_over_q * *(b + 202 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 29);
            *(b + 157 * OS1_S1 + 66) =
                prefactor_x * *(b + 157 * OS1_S1 + 45) -
                p_over_q * *(b + 202 * OS1_S1 + 45) +
                one_over_two_q * *(b + 157 * OS1_S1 + 30);
            *(b + 157 * OS1_S1 + 67) =
                prefactor_z * *(b + 157 * OS1_S1 + 41) -
                p_over_q * *(b + 212 * OS1_S1 + 41) +
                one_over_two_q * *(b + 112 * OS1_S1 + 41);
            *(b + 157 * OS1_S1 + 68) =
                prefactor_x * *(b + 157 * OS1_S1 + 47) -
                p_over_q * *(b + 202 * OS1_S1 + 47) +
                one_over_two_q * *(b + 157 * OS1_S1 + 32);
            *(b + 157 * OS1_S1 + 69) =
                prefactor_y * *(b + 157 * OS1_S1 + 44) -
                p_over_q * *(b + 211 * OS1_S1 + 44) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 44);
            *(b + 157 * OS1_S1 + 70) =
                prefactor_x * *(b + 157 * OS1_S1 + 49) -
                p_over_q * *(b + 202 * OS1_S1 + 49) +
                one_over_two_q * *(b + 157 * OS1_S1 + 34);
            *(b + 157 * OS1_S1 + 71) = prefactor_x * *(b + 157 * OS1_S1 + 50) -
                                       p_over_q * *(b + 202 * OS1_S1 + 50);
            *(b + 157 * OS1_S1 + 72) = prefactor_x * *(b + 157 * OS1_S1 + 51) -
                                       p_over_q * *(b + 202 * OS1_S1 + 51);
            *(b + 157 * OS1_S1 + 73) = prefactor_x * *(b + 157 * OS1_S1 + 52) -
                                       p_over_q * *(b + 202 * OS1_S1 + 52);
            *(b + 157 * OS1_S1 + 74) = prefactor_x * *(b + 157 * OS1_S1 + 53) -
                                       p_over_q * *(b + 202 * OS1_S1 + 53);
            *(b + 157 * OS1_S1 + 75) = prefactor_x * *(b + 157 * OS1_S1 + 54) -
                                       p_over_q * *(b + 202 * OS1_S1 + 54);
            *(b + 157 * OS1_S1 + 76) = prefactor_x * *(b + 157 * OS1_S1 + 55) -
                                       p_over_q * *(b + 202 * OS1_S1 + 55);
            *(b + 157 * OS1_S1 + 77) =
                prefactor_y * *(b + 157 * OS1_S1 + 50) -
                p_over_q * *(b + 211 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 157 * OS1_S1 + 30);
            *(b + 157 * OS1_S1 + 78) =
                prefactor_z * *(b + 157 * OS1_S1 + 50) -
                p_over_q * *(b + 212 * OS1_S1 + 50) +
                one_over_two_q * *(b + 112 * OS1_S1 + 50);
            *(b + 157 * OS1_S1 + 79) =
                prefactor_z * *(b + 157 * OS1_S1 + 51) -
                p_over_q * *(b + 212 * OS1_S1 + 51) +
                one_over_two_q * *(b + 112 * OS1_S1 + 51) +
                one_over_two_q * *(b + 157 * OS1_S1 + 30);
            *(b + 157 * OS1_S1 + 80) =
                prefactor_z * *(b + 157 * OS1_S1 + 52) -
                p_over_q * *(b + 212 * OS1_S1 + 52) +
                one_over_two_q * *(b + 112 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 31);
            *(b + 157 * OS1_S1 + 81) =
                prefactor_y * *(b + 157 * OS1_S1 + 54) -
                p_over_q * *(b + 211 * OS1_S1 + 54) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 54) +
                one_over_two_q * *(b + 157 * OS1_S1 + 34);
            *(b + 157 * OS1_S1 + 82) =
                prefactor_y * *(b + 157 * OS1_S1 + 55) -
                p_over_q * *(b + 211 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 55);
            *(b + 157 * OS1_S1 + 83) =
                prefactor_z * *(b + 157 * OS1_S1 + 55) -
                p_over_q * *(b + 212 * OS1_S1 + 55) +
                one_over_two_q * *(b + 112 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 157 * OS1_S1 + 34);
            *(b + 158 * OS1_S1 + 56) =
                prefactor_x * *(b + 158 * OS1_S1 + 35) -
                p_over_q * *(b + 203 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 158 * OS1_S1 + 20);
            *(b + 158 * OS1_S1 + 57) =
                prefactor_y * *(b + 158 * OS1_S1 + 35) -
                p_over_q * *(b + 212 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 35);
            *(b + 158 * OS1_S1 + 58) =
                prefactor_z * *(b + 158 * OS1_S1 + 35) -
                p_over_q * *(b + 213 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 35);
            *(b + 158 * OS1_S1 + 59) =
                prefactor_y * *(b + 158 * OS1_S1 + 36) -
                p_over_q * *(b + 212 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 36) +
                one_over_two_q * *(b + 158 * OS1_S1 + 20);
            *(b + 158 * OS1_S1 + 60) =
                prefactor_z * *(b + 158 * OS1_S1 + 36) -
                p_over_q * *(b + 213 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 36);
            *(b + 158 * OS1_S1 + 61) =
                prefactor_z * *(b + 158 * OS1_S1 + 37) -
                p_over_q * *(b + 213 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 37) +
                one_over_two_q * *(b + 158 * OS1_S1 + 20);
            *(b + 158 * OS1_S1 + 62) =
                prefactor_x * *(b + 158 * OS1_S1 + 41) -
                p_over_q * *(b + 203 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 26);
            *(b + 158 * OS1_S1 + 63) =
                prefactor_z * *(b + 158 * OS1_S1 + 38) -
                p_over_q * *(b + 213 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 38);
            *(b + 158 * OS1_S1 + 64) =
                prefactor_y * *(b + 158 * OS1_S1 + 40) -
                p_over_q * *(b + 212 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 40);
            *(b + 158 * OS1_S1 + 65) =
                prefactor_x * *(b + 158 * OS1_S1 + 44) -
                p_over_q * *(b + 203 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 29);
            *(b + 158 * OS1_S1 + 66) =
                prefactor_x * *(b + 158 * OS1_S1 + 45) -
                p_over_q * *(b + 203 * OS1_S1 + 45) +
                one_over_two_q * *(b + 158 * OS1_S1 + 30);
            *(b + 158 * OS1_S1 + 67) =
                prefactor_z * *(b + 158 * OS1_S1 + 41) -
                p_over_q * *(b + 213 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 41);
            *(b + 158 * OS1_S1 + 68) =
                prefactor_x * *(b + 158 * OS1_S1 + 47) -
                p_over_q * *(b + 203 * OS1_S1 + 47) +
                one_over_two_q * *(b + 158 * OS1_S1 + 32);
            *(b + 158 * OS1_S1 + 69) =
                prefactor_y * *(b + 158 * OS1_S1 + 44) -
                p_over_q * *(b + 212 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 44);
            *(b + 158 * OS1_S1 + 70) =
                prefactor_x * *(b + 158 * OS1_S1 + 49) -
                p_over_q * *(b + 203 * OS1_S1 + 49) +
                one_over_two_q * *(b + 158 * OS1_S1 + 34);
            *(b + 158 * OS1_S1 + 71) = prefactor_x * *(b + 158 * OS1_S1 + 50) -
                                       p_over_q * *(b + 203 * OS1_S1 + 50);
            *(b + 158 * OS1_S1 + 72) = prefactor_x * *(b + 158 * OS1_S1 + 51) -
                                       p_over_q * *(b + 203 * OS1_S1 + 51);
            *(b + 158 * OS1_S1 + 73) = prefactor_x * *(b + 158 * OS1_S1 + 52) -
                                       p_over_q * *(b + 203 * OS1_S1 + 52);
            *(b + 158 * OS1_S1 + 74) = prefactor_x * *(b + 158 * OS1_S1 + 53) -
                                       p_over_q * *(b + 203 * OS1_S1 + 53);
            *(b + 158 * OS1_S1 + 75) = prefactor_x * *(b + 158 * OS1_S1 + 54) -
                                       p_over_q * *(b + 203 * OS1_S1 + 54);
            *(b + 158 * OS1_S1 + 76) = prefactor_x * *(b + 158 * OS1_S1 + 55) -
                                       p_over_q * *(b + 203 * OS1_S1 + 55);
            *(b + 158 * OS1_S1 + 77) =
                prefactor_y * *(b + 158 * OS1_S1 + 50) -
                p_over_q * *(b + 212 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 158 * OS1_S1 + 30);
            *(b + 158 * OS1_S1 + 78) =
                prefactor_z * *(b + 158 * OS1_S1 + 50) -
                p_over_q * *(b + 213 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 50);
            *(b + 158 * OS1_S1 + 79) =
                prefactor_z * *(b + 158 * OS1_S1 + 51) -
                p_over_q * *(b + 213 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 51) +
                one_over_two_q * *(b + 158 * OS1_S1 + 30);
            *(b + 158 * OS1_S1 + 80) =
                prefactor_z * *(b + 158 * OS1_S1 + 52) -
                p_over_q * *(b + 213 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 31);
            *(b + 158 * OS1_S1 + 81) =
                prefactor_y * *(b + 158 * OS1_S1 + 54) -
                p_over_q * *(b + 212 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 54) +
                one_over_two_q * *(b + 158 * OS1_S1 + 34);
            *(b + 158 * OS1_S1 + 82) =
                prefactor_y * *(b + 158 * OS1_S1 + 55) -
                p_over_q * *(b + 212 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 55);
            *(b + 158 * OS1_S1 + 83) =
                prefactor_z * *(b + 158 * OS1_S1 + 55) -
                p_over_q * *(b + 213 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 158 * OS1_S1 + 34);
            *(b + 159 * OS1_S1 + 56) =
                prefactor_x * *(b + 159 * OS1_S1 + 35) -
                p_over_q * *(b + 204 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 159 * OS1_S1 + 20);
            *(b + 159 * OS1_S1 + 57) =
                prefactor_y * *(b + 159 * OS1_S1 + 35) -
                p_over_q * *(b + 213 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 35);
            *(b + 159 * OS1_S1 + 58) =
                prefactor_z * *(b + 159 * OS1_S1 + 35) -
                p_over_q * *(b + 214 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 35);
            *(b + 159 * OS1_S1 + 59) =
                prefactor_y * *(b + 159 * OS1_S1 + 36) -
                p_over_q * *(b + 213 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 36) +
                one_over_two_q * *(b + 159 * OS1_S1 + 20);
            *(b + 159 * OS1_S1 + 60) =
                prefactor_z * *(b + 159 * OS1_S1 + 36) -
                p_over_q * *(b + 214 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 36);
            *(b + 159 * OS1_S1 + 61) =
                prefactor_z * *(b + 159 * OS1_S1 + 37) -
                p_over_q * *(b + 214 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 37) +
                one_over_two_q * *(b + 159 * OS1_S1 + 20);
            *(b + 159 * OS1_S1 + 62) =
                prefactor_x * *(b + 159 * OS1_S1 + 41) -
                p_over_q * *(b + 204 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 26);
            *(b + 159 * OS1_S1 + 63) =
                prefactor_z * *(b + 159 * OS1_S1 + 38) -
                p_over_q * *(b + 214 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 38);
            *(b + 159 * OS1_S1 + 64) =
                prefactor_y * *(b + 159 * OS1_S1 + 40) -
                p_over_q * *(b + 213 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 40);
            *(b + 159 * OS1_S1 + 65) =
                prefactor_x * *(b + 159 * OS1_S1 + 44) -
                p_over_q * *(b + 204 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 29);
            *(b + 159 * OS1_S1 + 66) =
                prefactor_x * *(b + 159 * OS1_S1 + 45) -
                p_over_q * *(b + 204 * OS1_S1 + 45) +
                one_over_two_q * *(b + 159 * OS1_S1 + 30);
            *(b + 159 * OS1_S1 + 67) =
                prefactor_z * *(b + 159 * OS1_S1 + 41) -
                p_over_q * *(b + 214 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 41);
            *(b + 159 * OS1_S1 + 68) =
                prefactor_x * *(b + 159 * OS1_S1 + 47) -
                p_over_q * *(b + 204 * OS1_S1 + 47) +
                one_over_two_q * *(b + 159 * OS1_S1 + 32);
            *(b + 159 * OS1_S1 + 69) =
                prefactor_y * *(b + 159 * OS1_S1 + 44) -
                p_over_q * *(b + 213 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 44);
            *(b + 159 * OS1_S1 + 70) =
                prefactor_x * *(b + 159 * OS1_S1 + 49) -
                p_over_q * *(b + 204 * OS1_S1 + 49) +
                one_over_two_q * *(b + 159 * OS1_S1 + 34);
            *(b + 159 * OS1_S1 + 71) = prefactor_x * *(b + 159 * OS1_S1 + 50) -
                                       p_over_q * *(b + 204 * OS1_S1 + 50);
            *(b + 159 * OS1_S1 + 72) = prefactor_x * *(b + 159 * OS1_S1 + 51) -
                                       p_over_q * *(b + 204 * OS1_S1 + 51);
            *(b + 159 * OS1_S1 + 73) = prefactor_x * *(b + 159 * OS1_S1 + 52) -
                                       p_over_q * *(b + 204 * OS1_S1 + 52);
            *(b + 159 * OS1_S1 + 74) = prefactor_x * *(b + 159 * OS1_S1 + 53) -
                                       p_over_q * *(b + 204 * OS1_S1 + 53);
            *(b + 159 * OS1_S1 + 75) = prefactor_x * *(b + 159 * OS1_S1 + 54) -
                                       p_over_q * *(b + 204 * OS1_S1 + 54);
            *(b + 159 * OS1_S1 + 76) = prefactor_x * *(b + 159 * OS1_S1 + 55) -
                                       p_over_q * *(b + 204 * OS1_S1 + 55);
            *(b + 159 * OS1_S1 + 77) =
                prefactor_y * *(b + 159 * OS1_S1 + 50) -
                p_over_q * *(b + 213 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 159 * OS1_S1 + 30);
            *(b + 159 * OS1_S1 + 78) =
                prefactor_z * *(b + 159 * OS1_S1 + 50) -
                p_over_q * *(b + 214 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 50);
            *(b + 159 * OS1_S1 + 79) =
                prefactor_z * *(b + 159 * OS1_S1 + 51) -
                p_over_q * *(b + 214 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 51) +
                one_over_two_q * *(b + 159 * OS1_S1 + 30);
            *(b + 159 * OS1_S1 + 80) =
                prefactor_z * *(b + 159 * OS1_S1 + 52) -
                p_over_q * *(b + 214 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 31);
            *(b + 159 * OS1_S1 + 81) =
                prefactor_y * *(b + 159 * OS1_S1 + 54) -
                p_over_q * *(b + 213 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 54) +
                one_over_two_q * *(b + 159 * OS1_S1 + 34);
            *(b + 159 * OS1_S1 + 82) =
                prefactor_y * *(b + 159 * OS1_S1 + 55) -
                p_over_q * *(b + 213 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 55);
            *(b + 159 * OS1_S1 + 83) =
                prefactor_z * *(b + 159 * OS1_S1 + 55) -
                p_over_q * *(b + 214 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 159 * OS1_S1 + 34);
            *(b + 160 * OS1_S1 + 56) =
                prefactor_x * *(b + 160 * OS1_S1 + 35) -
                p_over_q * *(b + 205 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 20);
            *(b + 160 * OS1_S1 + 57) =
                prefactor_y * *(b + 160 * OS1_S1 + 35) -
                p_over_q * *(b + 214 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 35);
            *(b + 160 * OS1_S1 + 58) =
                prefactor_z * *(b + 160 * OS1_S1 + 35) -
                p_over_q * *(b + 215 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 35);
            *(b + 160 * OS1_S1 + 59) =
                prefactor_y * *(b + 160 * OS1_S1 + 36) -
                p_over_q * *(b + 214 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 36) +
                one_over_two_q * *(b + 160 * OS1_S1 + 20);
            *(b + 160 * OS1_S1 + 60) =
                prefactor_z * *(b + 160 * OS1_S1 + 36) -
                p_over_q * *(b + 215 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 36);
            *(b + 160 * OS1_S1 + 61) =
                prefactor_z * *(b + 160 * OS1_S1 + 37) -
                p_over_q * *(b + 215 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 37) +
                one_over_two_q * *(b + 160 * OS1_S1 + 20);
            *(b + 160 * OS1_S1 + 62) =
                prefactor_x * *(b + 160 * OS1_S1 + 41) -
                p_over_q * *(b + 205 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 26);
            *(b + 160 * OS1_S1 + 63) =
                prefactor_z * *(b + 160 * OS1_S1 + 38) -
                p_over_q * *(b + 215 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 38);
            *(b + 160 * OS1_S1 + 64) =
                prefactor_y * *(b + 160 * OS1_S1 + 40) -
                p_over_q * *(b + 214 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 40);
            *(b + 160 * OS1_S1 + 65) =
                prefactor_x * *(b + 160 * OS1_S1 + 44) -
                p_over_q * *(b + 205 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 29);
            *(b + 160 * OS1_S1 + 66) =
                prefactor_x * *(b + 160 * OS1_S1 + 45) -
                p_over_q * *(b + 205 * OS1_S1 + 45) +
                one_over_two_q * *(b + 160 * OS1_S1 + 30);
            *(b + 160 * OS1_S1 + 67) =
                prefactor_z * *(b + 160 * OS1_S1 + 41) -
                p_over_q * *(b + 215 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 41);
            *(b + 160 * OS1_S1 + 68) =
                prefactor_x * *(b + 160 * OS1_S1 + 47) -
                p_over_q * *(b + 205 * OS1_S1 + 47) +
                one_over_two_q * *(b + 160 * OS1_S1 + 32);
            *(b + 160 * OS1_S1 + 69) =
                prefactor_y * *(b + 160 * OS1_S1 + 44) -
                p_over_q * *(b + 214 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 44);
            *(b + 160 * OS1_S1 + 70) =
                prefactor_x * *(b + 160 * OS1_S1 + 49) -
                p_over_q * *(b + 205 * OS1_S1 + 49) +
                one_over_two_q * *(b + 160 * OS1_S1 + 34);
            *(b + 160 * OS1_S1 + 71) = prefactor_x * *(b + 160 * OS1_S1 + 50) -
                                       p_over_q * *(b + 205 * OS1_S1 + 50);
            *(b + 160 * OS1_S1 + 72) = prefactor_x * *(b + 160 * OS1_S1 + 51) -
                                       p_over_q * *(b + 205 * OS1_S1 + 51);
            *(b + 160 * OS1_S1 + 73) = prefactor_x * *(b + 160 * OS1_S1 + 52) -
                                       p_over_q * *(b + 205 * OS1_S1 + 52);
            *(b + 160 * OS1_S1 + 74) = prefactor_x * *(b + 160 * OS1_S1 + 53) -
                                       p_over_q * *(b + 205 * OS1_S1 + 53);
            *(b + 160 * OS1_S1 + 75) = prefactor_x * *(b + 160 * OS1_S1 + 54) -
                                       p_over_q * *(b + 205 * OS1_S1 + 54);
            *(b + 160 * OS1_S1 + 76) = prefactor_x * *(b + 160 * OS1_S1 + 55) -
                                       p_over_q * *(b + 205 * OS1_S1 + 55);
            *(b + 160 * OS1_S1 + 77) =
                prefactor_y * *(b + 160 * OS1_S1 + 50) -
                p_over_q * *(b + 214 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 30);
            *(b + 160 * OS1_S1 + 78) =
                prefactor_z * *(b + 160 * OS1_S1 + 50) -
                p_over_q * *(b + 215 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 50);
            *(b + 160 * OS1_S1 + 79) =
                prefactor_z * *(b + 160 * OS1_S1 + 51) -
                p_over_q * *(b + 215 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 51) +
                one_over_two_q * *(b + 160 * OS1_S1 + 30);
            *(b + 160 * OS1_S1 + 80) =
                prefactor_z * *(b + 160 * OS1_S1 + 52) -
                p_over_q * *(b + 215 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 31);
            *(b + 160 * OS1_S1 + 81) =
                prefactor_y * *(b + 160 * OS1_S1 + 54) -
                p_over_q * *(b + 214 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 54) +
                one_over_two_q * *(b + 160 * OS1_S1 + 34);
            *(b + 160 * OS1_S1 + 82) =
                prefactor_y * *(b + 160 * OS1_S1 + 55) -
                p_over_q * *(b + 214 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 55);
            *(b + 160 * OS1_S1 + 83) =
                prefactor_z * *(b + 160 * OS1_S1 + 55) -
                p_over_q * *(b + 215 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 34);
            *(b + 161 * OS1_S1 + 56) =
                prefactor_x * *(b + 161 * OS1_S1 + 35) -
                p_over_q * *(b + 206 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 161 * OS1_S1 + 20);
            *(b + 161 * OS1_S1 + 57) =
                prefactor_y * *(b + 161 * OS1_S1 + 35) -
                p_over_q * *(b + 215 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 35);
            *(b + 161 * OS1_S1 + 58) =
                prefactor_z * *(b + 161 * OS1_S1 + 35) -
                p_over_q * *(b + 216 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 35);
            *(b + 161 * OS1_S1 + 59) =
                prefactor_y * *(b + 161 * OS1_S1 + 36) -
                p_over_q * *(b + 215 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 36) +
                one_over_two_q * *(b + 161 * OS1_S1 + 20);
            *(b + 161 * OS1_S1 + 60) =
                prefactor_y * *(b + 161 * OS1_S1 + 37) -
                p_over_q * *(b + 215 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 37);
            *(b + 161 * OS1_S1 + 61) =
                prefactor_z * *(b + 161 * OS1_S1 + 37) -
                p_over_q * *(b + 216 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 37) +
                one_over_two_q * *(b + 161 * OS1_S1 + 20);
            *(b + 161 * OS1_S1 + 62) =
                prefactor_x * *(b + 161 * OS1_S1 + 41) -
                p_over_q * *(b + 206 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 26);
            *(b + 161 * OS1_S1 + 63) =
                prefactor_z * *(b + 161 * OS1_S1 + 38) -
                p_over_q * *(b + 216 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 38);
            *(b + 161 * OS1_S1 + 64) =
                prefactor_y * *(b + 161 * OS1_S1 + 40) -
                p_over_q * *(b + 215 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 40);
            *(b + 161 * OS1_S1 + 65) =
                prefactor_x * *(b + 161 * OS1_S1 + 44) -
                p_over_q * *(b + 206 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 29);
            *(b + 161 * OS1_S1 + 66) =
                prefactor_x * *(b + 161 * OS1_S1 + 45) -
                p_over_q * *(b + 206 * OS1_S1 + 45) +
                one_over_two_q * *(b + 161 * OS1_S1 + 30);
            *(b + 161 * OS1_S1 + 67) =
                prefactor_z * *(b + 161 * OS1_S1 + 41) -
                p_over_q * *(b + 216 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 41);
            *(b + 161 * OS1_S1 + 68) =
                prefactor_x * *(b + 161 * OS1_S1 + 47) -
                p_over_q * *(b + 206 * OS1_S1 + 47) +
                one_over_two_q * *(b + 161 * OS1_S1 + 32);
            *(b + 161 * OS1_S1 + 69) =
                prefactor_y * *(b + 161 * OS1_S1 + 44) -
                p_over_q * *(b + 215 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 44);
            *(b + 161 * OS1_S1 + 70) =
                prefactor_x * *(b + 161 * OS1_S1 + 49) -
                p_over_q * *(b + 206 * OS1_S1 + 49) +
                one_over_two_q * *(b + 161 * OS1_S1 + 34);
            *(b + 161 * OS1_S1 + 71) = prefactor_x * *(b + 161 * OS1_S1 + 50) -
                                       p_over_q * *(b + 206 * OS1_S1 + 50);
            *(b + 161 * OS1_S1 + 72) = prefactor_x * *(b + 161 * OS1_S1 + 51) -
                                       p_over_q * *(b + 206 * OS1_S1 + 51);
            *(b + 161 * OS1_S1 + 73) = prefactor_x * *(b + 161 * OS1_S1 + 52) -
                                       p_over_q * *(b + 206 * OS1_S1 + 52);
            *(b + 161 * OS1_S1 + 74) = prefactor_x * *(b + 161 * OS1_S1 + 53) -
                                       p_over_q * *(b + 206 * OS1_S1 + 53);
            *(b + 161 * OS1_S1 + 75) = prefactor_x * *(b + 161 * OS1_S1 + 54) -
                                       p_over_q * *(b + 206 * OS1_S1 + 54);
            *(b + 161 * OS1_S1 + 76) = prefactor_x * *(b + 161 * OS1_S1 + 55) -
                                       p_over_q * *(b + 206 * OS1_S1 + 55);
            *(b + 161 * OS1_S1 + 77) =
                prefactor_y * *(b + 161 * OS1_S1 + 50) -
                p_over_q * *(b + 215 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 161 * OS1_S1 + 30);
            *(b + 161 * OS1_S1 + 78) =
                prefactor_z * *(b + 161 * OS1_S1 + 50) -
                p_over_q * *(b + 216 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 50);
            *(b + 161 * OS1_S1 + 79) =
                prefactor_z * *(b + 161 * OS1_S1 + 51) -
                p_over_q * *(b + 216 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 51) +
                one_over_two_q * *(b + 161 * OS1_S1 + 30);
            *(b + 161 * OS1_S1 + 80) =
                prefactor_y * *(b + 161 * OS1_S1 + 53) -
                p_over_q * *(b + 215 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 33);
            *(b + 161 * OS1_S1 + 81) =
                prefactor_y * *(b + 161 * OS1_S1 + 54) -
                p_over_q * *(b + 215 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 54) +
                one_over_two_q * *(b + 161 * OS1_S1 + 34);
            *(b + 161 * OS1_S1 + 82) =
                prefactor_y * *(b + 161 * OS1_S1 + 55) -
                p_over_q * *(b + 215 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 55);
            *(b + 161 * OS1_S1 + 83) =
                prefactor_z * *(b + 161 * OS1_S1 + 55) -
                p_over_q * *(b + 216 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 161 * OS1_S1 + 34);
            *(b + 162 * OS1_S1 + 56) =
                prefactor_x * *(b + 162 * OS1_S1 + 35) -
                p_over_q * *(b + 207 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 162 * OS1_S1 + 20);
            *(b + 162 * OS1_S1 + 57) =
                prefactor_y * *(b + 162 * OS1_S1 + 35) -
                p_over_q * *(b + 216 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 35);
            *(b + 162 * OS1_S1 + 58) =
                prefactor_z * *(b + 162 * OS1_S1 + 35) -
                p_over_q * *(b + 217 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 35);
            *(b + 162 * OS1_S1 + 59) =
                prefactor_y * *(b + 162 * OS1_S1 + 36) -
                p_over_q * *(b + 216 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 36) +
                one_over_two_q * *(b + 162 * OS1_S1 + 20);
            *(b + 162 * OS1_S1 + 60) =
                prefactor_y * *(b + 162 * OS1_S1 + 37) -
                p_over_q * *(b + 216 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 37);
            *(b + 162 * OS1_S1 + 61) =
                prefactor_z * *(b + 162 * OS1_S1 + 37) -
                p_over_q * *(b + 217 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 37) +
                one_over_two_q * *(b + 162 * OS1_S1 + 20);
            *(b + 162 * OS1_S1 + 62) =
                prefactor_x * *(b + 162 * OS1_S1 + 41) -
                p_over_q * *(b + 207 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 26);
            *(b + 162 * OS1_S1 + 63) =
                prefactor_z * *(b + 162 * OS1_S1 + 38) -
                p_over_q * *(b + 217 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 38);
            *(b + 162 * OS1_S1 + 64) =
                prefactor_y * *(b + 162 * OS1_S1 + 40) -
                p_over_q * *(b + 216 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 40);
            *(b + 162 * OS1_S1 + 65) =
                prefactor_x * *(b + 162 * OS1_S1 + 44) -
                p_over_q * *(b + 207 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 29);
            *(b + 162 * OS1_S1 + 66) =
                prefactor_x * *(b + 162 * OS1_S1 + 45) -
                p_over_q * *(b + 207 * OS1_S1 + 45) +
                one_over_two_q * *(b + 162 * OS1_S1 + 30);
            *(b + 162 * OS1_S1 + 67) =
                prefactor_z * *(b + 162 * OS1_S1 + 41) -
                p_over_q * *(b + 217 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 41);
            *(b + 162 * OS1_S1 + 68) =
                prefactor_x * *(b + 162 * OS1_S1 + 47) -
                p_over_q * *(b + 207 * OS1_S1 + 47) +
                one_over_two_q * *(b + 162 * OS1_S1 + 32);
            *(b + 162 * OS1_S1 + 69) =
                prefactor_y * *(b + 162 * OS1_S1 + 44) -
                p_over_q * *(b + 216 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 44);
            *(b + 162 * OS1_S1 + 70) =
                prefactor_x * *(b + 162 * OS1_S1 + 49) -
                p_over_q * *(b + 207 * OS1_S1 + 49) +
                one_over_two_q * *(b + 162 * OS1_S1 + 34);
            *(b + 162 * OS1_S1 + 71) = prefactor_x * *(b + 162 * OS1_S1 + 50) -
                                       p_over_q * *(b + 207 * OS1_S1 + 50);
            *(b + 162 * OS1_S1 + 72) = prefactor_x * *(b + 162 * OS1_S1 + 51) -
                                       p_over_q * *(b + 207 * OS1_S1 + 51);
            *(b + 162 * OS1_S1 + 73) = prefactor_x * *(b + 162 * OS1_S1 + 52) -
                                       p_over_q * *(b + 207 * OS1_S1 + 52);
            *(b + 162 * OS1_S1 + 74) = prefactor_x * *(b + 162 * OS1_S1 + 53) -
                                       p_over_q * *(b + 207 * OS1_S1 + 53);
            *(b + 162 * OS1_S1 + 75) = prefactor_x * *(b + 162 * OS1_S1 + 54) -
                                       p_over_q * *(b + 207 * OS1_S1 + 54);
            *(b + 162 * OS1_S1 + 76) = prefactor_x * *(b + 162 * OS1_S1 + 55) -
                                       p_over_q * *(b + 207 * OS1_S1 + 55);
            *(b + 162 * OS1_S1 + 77) =
                prefactor_y * *(b + 162 * OS1_S1 + 50) -
                p_over_q * *(b + 216 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 162 * OS1_S1 + 30);
            *(b + 162 * OS1_S1 + 78) =
                prefactor_z * *(b + 162 * OS1_S1 + 50) -
                p_over_q * *(b + 217 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 50);
            *(b + 162 * OS1_S1 + 79) =
                prefactor_z * *(b + 162 * OS1_S1 + 51) -
                p_over_q * *(b + 217 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 51) +
                one_over_two_q * *(b + 162 * OS1_S1 + 30);
            *(b + 162 * OS1_S1 + 80) =
                prefactor_y * *(b + 162 * OS1_S1 + 53) -
                p_over_q * *(b + 216 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 33);
            *(b + 162 * OS1_S1 + 81) =
                prefactor_y * *(b + 162 * OS1_S1 + 54) -
                p_over_q * *(b + 216 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 54) +
                one_over_two_q * *(b + 162 * OS1_S1 + 34);
            *(b + 162 * OS1_S1 + 82) =
                prefactor_y * *(b + 162 * OS1_S1 + 55) -
                p_over_q * *(b + 216 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 55);
            *(b + 162 * OS1_S1 + 83) =
                prefactor_z * *(b + 162 * OS1_S1 + 55) -
                p_over_q * *(b + 217 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 162 * OS1_S1 + 34);
            *(b + 163 * OS1_S1 + 56) =
                prefactor_x * *(b + 163 * OS1_S1 + 35) -
                p_over_q * *(b + 208 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 163 * OS1_S1 + 20);
            *(b + 163 * OS1_S1 + 57) =
                prefactor_y * *(b + 163 * OS1_S1 + 35) -
                p_over_q * *(b + 217 * OS1_S1 + 35) +
                one_over_two_q * *(b + 119 * OS1_S1 + 35);
            *(b + 163 * OS1_S1 + 58) =
                prefactor_z * *(b + 163 * OS1_S1 + 35) -
                p_over_q * *(b + 218 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 35);
            *(b + 163 * OS1_S1 + 59) =
                prefactor_y * *(b + 163 * OS1_S1 + 36) -
                p_over_q * *(b + 217 * OS1_S1 + 36) +
                one_over_two_q * *(b + 119 * OS1_S1 + 36) +
                one_over_two_q * *(b + 163 * OS1_S1 + 20);
            *(b + 163 * OS1_S1 + 60) =
                prefactor_y * *(b + 163 * OS1_S1 + 37) -
                p_over_q * *(b + 217 * OS1_S1 + 37) +
                one_over_two_q * *(b + 119 * OS1_S1 + 37);
            *(b + 163 * OS1_S1 + 61) =
                prefactor_z * *(b + 163 * OS1_S1 + 37) -
                p_over_q * *(b + 218 * OS1_S1 + 37) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 37) +
                one_over_two_q * *(b + 163 * OS1_S1 + 20);
            *(b + 163 * OS1_S1 + 62) =
                prefactor_x * *(b + 163 * OS1_S1 + 41) -
                p_over_q * *(b + 208 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 26);
            *(b + 163 * OS1_S1 + 63) =
                prefactor_z * *(b + 163 * OS1_S1 + 38) -
                p_over_q * *(b + 218 * OS1_S1 + 38) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 38);
            *(b + 163 * OS1_S1 + 64) =
                prefactor_y * *(b + 163 * OS1_S1 + 40) -
                p_over_q * *(b + 217 * OS1_S1 + 40) +
                one_over_two_q * *(b + 119 * OS1_S1 + 40);
            *(b + 163 * OS1_S1 + 65) =
                prefactor_x * *(b + 163 * OS1_S1 + 44) -
                p_over_q * *(b + 208 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 29);
            *(b + 163 * OS1_S1 + 66) =
                prefactor_x * *(b + 163 * OS1_S1 + 45) -
                p_over_q * *(b + 208 * OS1_S1 + 45) +
                one_over_two_q * *(b + 163 * OS1_S1 + 30);
            *(b + 163 * OS1_S1 + 67) =
                prefactor_z * *(b + 163 * OS1_S1 + 41) -
                p_over_q * *(b + 218 * OS1_S1 + 41) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 41);
            *(b + 163 * OS1_S1 + 68) =
                prefactor_x * *(b + 163 * OS1_S1 + 47) -
                p_over_q * *(b + 208 * OS1_S1 + 47) +
                one_over_two_q * *(b + 163 * OS1_S1 + 32);
            *(b + 163 * OS1_S1 + 69) =
                prefactor_y * *(b + 163 * OS1_S1 + 44) -
                p_over_q * *(b + 217 * OS1_S1 + 44) +
                one_over_two_q * *(b + 119 * OS1_S1 + 44);
            *(b + 163 * OS1_S1 + 70) =
                prefactor_x * *(b + 163 * OS1_S1 + 49) -
                p_over_q * *(b + 208 * OS1_S1 + 49) +
                one_over_two_q * *(b + 163 * OS1_S1 + 34);
            *(b + 163 * OS1_S1 + 71) = prefactor_x * *(b + 163 * OS1_S1 + 50) -
                                       p_over_q * *(b + 208 * OS1_S1 + 50);
            *(b + 163 * OS1_S1 + 72) = prefactor_x * *(b + 163 * OS1_S1 + 51) -
                                       p_over_q * *(b + 208 * OS1_S1 + 51);
            *(b + 163 * OS1_S1 + 73) = prefactor_x * *(b + 163 * OS1_S1 + 52) -
                                       p_over_q * *(b + 208 * OS1_S1 + 52);
            *(b + 163 * OS1_S1 + 74) = prefactor_x * *(b + 163 * OS1_S1 + 53) -
                                       p_over_q * *(b + 208 * OS1_S1 + 53);
            *(b + 163 * OS1_S1 + 75) = prefactor_x * *(b + 163 * OS1_S1 + 54) -
                                       p_over_q * *(b + 208 * OS1_S1 + 54);
            *(b + 163 * OS1_S1 + 76) = prefactor_x * *(b + 163 * OS1_S1 + 55) -
                                       p_over_q * *(b + 208 * OS1_S1 + 55);
            *(b + 163 * OS1_S1 + 77) =
                prefactor_y * *(b + 163 * OS1_S1 + 50) -
                p_over_q * *(b + 217 * OS1_S1 + 50) +
                one_over_two_q * *(b + 119 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 163 * OS1_S1 + 30);
            *(b + 163 * OS1_S1 + 78) =
                prefactor_z * *(b + 163 * OS1_S1 + 50) -
                p_over_q * *(b + 218 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 50);
            *(b + 163 * OS1_S1 + 79) =
                prefactor_z * *(b + 163 * OS1_S1 + 51) -
                p_over_q * *(b + 218 * OS1_S1 + 51) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 51) +
                one_over_two_q * *(b + 163 * OS1_S1 + 30);
            *(b + 163 * OS1_S1 + 80) =
                prefactor_y * *(b + 163 * OS1_S1 + 53) -
                p_over_q * *(b + 217 * OS1_S1 + 53) +
                one_over_two_q * *(b + 119 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 33);
            *(b + 163 * OS1_S1 + 81) =
                prefactor_y * *(b + 163 * OS1_S1 + 54) -
                p_over_q * *(b + 217 * OS1_S1 + 54) +
                one_over_two_q * *(b + 119 * OS1_S1 + 54) +
                one_over_two_q * *(b + 163 * OS1_S1 + 34);
            *(b + 163 * OS1_S1 + 82) =
                prefactor_y * *(b + 163 * OS1_S1 + 55) -
                p_over_q * *(b + 217 * OS1_S1 + 55) +
                one_over_two_q * *(b + 119 * OS1_S1 + 55);
            *(b + 163 * OS1_S1 + 83) =
                prefactor_z * *(b + 163 * OS1_S1 + 55) -
                p_over_q * *(b + 218 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 163 * OS1_S1 + 34);
            *(b + 164 * OS1_S1 + 56) =
                prefactor_x * *(b + 164 * OS1_S1 + 35) -
                p_over_q * *(b + 209 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 164 * OS1_S1 + 20);
            *(b + 164 * OS1_S1 + 57) = prefactor_y * *(b + 164 * OS1_S1 + 35) -
                                       p_over_q * *(b + 218 * OS1_S1 + 35);
            *(b + 164 * OS1_S1 + 58) =
                prefactor_z * *(b + 164 * OS1_S1 + 35) -
                p_over_q * *(b + 219 * OS1_S1 + 35) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 35);
            *(b + 164 * OS1_S1 + 59) =
                prefactor_y * *(b + 164 * OS1_S1 + 36) -
                p_over_q * *(b + 218 * OS1_S1 + 36) +
                one_over_two_q * *(b + 164 * OS1_S1 + 20);
            *(b + 164 * OS1_S1 + 60) = prefactor_y * *(b + 164 * OS1_S1 + 37) -
                                       p_over_q * *(b + 218 * OS1_S1 + 37);
            *(b + 164 * OS1_S1 + 61) =
                prefactor_z * *(b + 164 * OS1_S1 + 37) -
                p_over_q * *(b + 219 * OS1_S1 + 37) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 37) +
                one_over_two_q * *(b + 164 * OS1_S1 + 20);
            *(b + 164 * OS1_S1 + 62) =
                prefactor_y * *(b + 164 * OS1_S1 + 38) -
                p_over_q * *(b + 218 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 21);
            *(b + 164 * OS1_S1 + 63) =
                prefactor_z * *(b + 164 * OS1_S1 + 38) -
                p_over_q * *(b + 219 * OS1_S1 + 38) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 38);
            *(b + 164 * OS1_S1 + 64) = prefactor_y * *(b + 164 * OS1_S1 + 40) -
                                       p_over_q * *(b + 218 * OS1_S1 + 40);
            *(b + 164 * OS1_S1 + 65) =
                prefactor_x * *(b + 164 * OS1_S1 + 44) -
                p_over_q * *(b + 209 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 29);
            *(b + 164 * OS1_S1 + 66) =
                prefactor_x * *(b + 164 * OS1_S1 + 45) -
                p_over_q * *(b + 209 * OS1_S1 + 45) +
                one_over_two_q * *(b + 164 * OS1_S1 + 30);
            *(b + 164 * OS1_S1 + 67) =
                prefactor_z * *(b + 164 * OS1_S1 + 41) -
                p_over_q * *(b + 219 * OS1_S1 + 41) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 41);
            *(b + 164 * OS1_S1 + 68) =
                prefactor_y * *(b + 164 * OS1_S1 + 43) -
                p_over_q * *(b + 218 * OS1_S1 + 43) +
                one_over_two_q * *(b + 164 * OS1_S1 + 25);
            *(b + 164 * OS1_S1 + 69) = prefactor_y * *(b + 164 * OS1_S1 + 44) -
                                       p_over_q * *(b + 218 * OS1_S1 + 44);
            *(b + 164 * OS1_S1 + 70) =
                prefactor_x * *(b + 164 * OS1_S1 + 49) -
                p_over_q * *(b + 209 * OS1_S1 + 49) +
                one_over_two_q * *(b + 164 * OS1_S1 + 34);
            *(b + 164 * OS1_S1 + 71) = prefactor_x * *(b + 164 * OS1_S1 + 50) -
                                       p_over_q * *(b + 209 * OS1_S1 + 50);
            *(b + 164 * OS1_S1 + 72) = prefactor_x * *(b + 164 * OS1_S1 + 51) -
                                       p_over_q * *(b + 209 * OS1_S1 + 51);
            *(b + 164 * OS1_S1 + 73) = prefactor_x * *(b + 164 * OS1_S1 + 52) -
                                       p_over_q * *(b + 209 * OS1_S1 + 52);
            *(b + 164 * OS1_S1 + 74) = prefactor_x * *(b + 164 * OS1_S1 + 53) -
                                       p_over_q * *(b + 209 * OS1_S1 + 53);
            *(b + 164 * OS1_S1 + 75) = prefactor_y * *(b + 164 * OS1_S1 + 49) -
                                       p_over_q * *(b + 218 * OS1_S1 + 49);
            *(b + 164 * OS1_S1 + 76) = prefactor_x * *(b + 164 * OS1_S1 + 55) -
                                       p_over_q * *(b + 209 * OS1_S1 + 55);
            *(b + 164 * OS1_S1 + 77) =
                prefactor_y * *(b + 164 * OS1_S1 + 50) -
                p_over_q * *(b + 218 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 164 * OS1_S1 + 30);
            *(b + 164 * OS1_S1 + 78) =
                prefactor_z * *(b + 164 * OS1_S1 + 50) -
                p_over_q * *(b + 219 * OS1_S1 + 50) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 50);
            *(b + 164 * OS1_S1 + 79) =
                prefactor_z * *(b + 164 * OS1_S1 + 51) -
                p_over_q * *(b + 219 * OS1_S1 + 51) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 51) +
                one_over_two_q * *(b + 164 * OS1_S1 + 30);
            *(b + 164 * OS1_S1 + 80) =
                prefactor_y * *(b + 164 * OS1_S1 + 53) -
                p_over_q * *(b + 218 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 33);
            *(b + 164 * OS1_S1 + 81) =
                prefactor_y * *(b + 164 * OS1_S1 + 54) -
                p_over_q * *(b + 218 * OS1_S1 + 54) +
                one_over_two_q * *(b + 164 * OS1_S1 + 34);
            *(b + 164 * OS1_S1 + 82) = prefactor_y * *(b + 164 * OS1_S1 + 55) -
                                       p_over_q * *(b + 218 * OS1_S1 + 55);
            *(b + 164 * OS1_S1 + 83) =
                prefactor_z * *(b + 164 * OS1_S1 + 55) -
                p_over_q * *(b + 219 * OS1_S1 + 55) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 164 * OS1_S1 + 34);
            return;
        }
    }
}
