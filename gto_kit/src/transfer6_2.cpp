/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_7_6(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 84 * OS1_S1 + 56) =
                prefactor_x * *(b + 84 * OS1_S1 + 35) -
                p_over_q * *(b + 120 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 84 * OS1_S1 + 20);
            *(b + 84 * OS1_S1 + 57) = prefactor_y * *(b + 84 * OS1_S1 + 35) -
                                      p_over_q * *(b + 121 * OS1_S1 + 35);
            *(b + 84 * OS1_S1 + 58) = prefactor_z * *(b + 84 * OS1_S1 + 35) -
                                      p_over_q * *(b + 122 * OS1_S1 + 35);
            *(b + 84 * OS1_S1 + 59) = prefactor_y * *(b + 84 * OS1_S1 + 36) -
                                      p_over_q * *(b + 121 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 20);
            *(b + 84 * OS1_S1 + 60) = prefactor_z * *(b + 84 * OS1_S1 + 36) -
                                      p_over_q * *(b + 122 * OS1_S1 + 36);
            *(b + 84 * OS1_S1 + 61) = prefactor_z * *(b + 84 * OS1_S1 + 37) -
                                      p_over_q * *(b + 122 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 20);
            *(b + 84 * OS1_S1 + 62) =
                prefactor_y * *(b + 84 * OS1_S1 + 38) -
                p_over_q * *(b + 121 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 21);
            *(b + 84 * OS1_S1 + 63) = prefactor_z * *(b + 84 * OS1_S1 + 38) -
                                      p_over_q * *(b + 122 * OS1_S1 + 38);
            *(b + 84 * OS1_S1 + 64) = prefactor_y * *(b + 84 * OS1_S1 + 40) -
                                      p_over_q * *(b + 121 * OS1_S1 + 40);
            *(b + 84 * OS1_S1 + 65) =
                prefactor_z * *(b + 84 * OS1_S1 + 40) -
                p_over_q * *(b + 122 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 22);
            *(b + 84 * OS1_S1 + 66) =
                prefactor_x * *(b + 84 * OS1_S1 + 45) -
                p_over_q * *(b + 120 * OS1_S1 + 45) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 45) +
                one_over_two_q * *(b + 84 * OS1_S1 + 30);
            *(b + 84 * OS1_S1 + 67) = prefactor_z * *(b + 84 * OS1_S1 + 41) -
                                      p_over_q * *(b + 122 * OS1_S1 + 41);
            *(b + 84 * OS1_S1 + 68) = prefactor_z * *(b + 84 * OS1_S1 + 42) -
                                      p_over_q * *(b + 122 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 23);
            *(b + 84 * OS1_S1 + 69) = prefactor_y * *(b + 84 * OS1_S1 + 44) -
                                      p_over_q * *(b + 121 * OS1_S1 + 44);
            *(b + 84 * OS1_S1 + 70) =
                prefactor_x * *(b + 84 * OS1_S1 + 49) -
                p_over_q * *(b + 120 * OS1_S1 + 49) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 49) +
                one_over_two_q * *(b + 84 * OS1_S1 + 34);
            *(b + 84 * OS1_S1 + 71) =
                prefactor_x * *(b + 84 * OS1_S1 + 50) -
                p_over_q * *(b + 120 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 50);
            *(b + 84 * OS1_S1 + 72) = prefactor_z * *(b + 84 * OS1_S1 + 45) -
                                      p_over_q * *(b + 122 * OS1_S1 + 45);
            *(b + 84 * OS1_S1 + 73) =
                prefactor_x * *(b + 84 * OS1_S1 + 52) -
                p_over_q * *(b + 120 * OS1_S1 + 52) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 52);
            *(b + 84 * OS1_S1 + 74) =
                prefactor_x * *(b + 84 * OS1_S1 + 53) -
                p_over_q * *(b + 120 * OS1_S1 + 53) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 53);
            *(b + 84 * OS1_S1 + 75) = prefactor_y * *(b + 84 * OS1_S1 + 49) -
                                      p_over_q * *(b + 121 * OS1_S1 + 49);
            *(b + 84 * OS1_S1 + 76) =
                prefactor_x * *(b + 84 * OS1_S1 + 55) -
                p_over_q * *(b + 120 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 55);
            *(b + 84 * OS1_S1 + 77) =
                prefactor_y * *(b + 84 * OS1_S1 + 50) -
                p_over_q * *(b + 121 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 84 * OS1_S1 + 30);
            *(b + 84 * OS1_S1 + 78) = prefactor_z * *(b + 84 * OS1_S1 + 50) -
                                      p_over_q * *(b + 122 * OS1_S1 + 50);
            *(b + 84 * OS1_S1 + 79) = prefactor_z * *(b + 84 * OS1_S1 + 51) -
                                      p_over_q * *(b + 122 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 30);
            *(b + 84 * OS1_S1 + 80) =
                prefactor_z * *(b + 84 * OS1_S1 + 52) -
                p_over_q * *(b + 122 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 31);
            *(b + 84 * OS1_S1 + 81) = prefactor_y * *(b + 84 * OS1_S1 + 54) -
                                      p_over_q * *(b + 121 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 34);
            *(b + 84 * OS1_S1 + 82) = prefactor_y * *(b + 84 * OS1_S1 + 55) -
                                      p_over_q * *(b + 121 * OS1_S1 + 55);
            *(b + 84 * OS1_S1 + 83) =
                prefactor_z * *(b + 84 * OS1_S1 + 55) -
                p_over_q * *(b + 122 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 84 * OS1_S1 + 34);
            *(b + 85 * OS1_S1 + 56) =
                prefactor_x * *(b + 85 * OS1_S1 + 35) -
                p_over_q * *(b + 121 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 85 * OS1_S1 + 20);
            *(b + 85 * OS1_S1 + 57) = prefactor_y * *(b + 85 * OS1_S1 + 35) -
                                      p_over_q * *(b + 123 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 35);
            *(b + 85 * OS1_S1 + 58) = prefactor_z * *(b + 85 * OS1_S1 + 35) -
                                      p_over_q * *(b + 124 * OS1_S1 + 35);
            *(b + 85 * OS1_S1 + 59) = prefactor_y * *(b + 85 * OS1_S1 + 36) -
                                      p_over_q * *(b + 123 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 20);
            *(b + 85 * OS1_S1 + 60) = prefactor_z * *(b + 85 * OS1_S1 + 36) -
                                      p_over_q * *(b + 124 * OS1_S1 + 36);
            *(b + 85 * OS1_S1 + 61) = prefactor_z * *(b + 85 * OS1_S1 + 37) -
                                      p_over_q * *(b + 124 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 20);
            *(b + 85 * OS1_S1 + 62) =
                prefactor_y * *(b + 85 * OS1_S1 + 38) -
                p_over_q * *(b + 123 * OS1_S1 + 38) +
                one_over_two_q * *(b + 56 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 21);
            *(b + 85 * OS1_S1 + 63) = prefactor_z * *(b + 85 * OS1_S1 + 38) -
                                      p_over_q * *(b + 124 * OS1_S1 + 38);
            *(b + 85 * OS1_S1 + 64) = prefactor_y * *(b + 85 * OS1_S1 + 40) -
                                      p_over_q * *(b + 123 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 40);
            *(b + 85 * OS1_S1 + 65) =
                prefactor_z * *(b + 85 * OS1_S1 + 40) -
                p_over_q * *(b + 124 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 22);
            *(b + 85 * OS1_S1 + 66) =
                prefactor_x * *(b + 85 * OS1_S1 + 45) -
                p_over_q * *(b + 121 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 45) +
                one_over_two_q * *(b + 85 * OS1_S1 + 30);
            *(b + 85 * OS1_S1 + 67) = prefactor_z * *(b + 85 * OS1_S1 + 41) -
                                      p_over_q * *(b + 124 * OS1_S1 + 41);
            *(b + 85 * OS1_S1 + 68) = prefactor_z * *(b + 85 * OS1_S1 + 42) -
                                      p_over_q * *(b + 124 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 23);
            *(b + 85 * OS1_S1 + 69) = prefactor_y * *(b + 85 * OS1_S1 + 44) -
                                      p_over_q * *(b + 123 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 44);
            *(b + 85 * OS1_S1 + 70) =
                prefactor_x * *(b + 85 * OS1_S1 + 49) -
                p_over_q * *(b + 121 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 49) +
                one_over_two_q * *(b + 85 * OS1_S1 + 34);
            *(b + 85 * OS1_S1 + 71) =
                prefactor_x * *(b + 85 * OS1_S1 + 50) -
                p_over_q * *(b + 121 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 50);
            *(b + 85 * OS1_S1 + 72) = prefactor_z * *(b + 85 * OS1_S1 + 45) -
                                      p_over_q * *(b + 124 * OS1_S1 + 45);
            *(b + 85 * OS1_S1 + 73) =
                prefactor_x * *(b + 85 * OS1_S1 + 52) -
                p_over_q * *(b + 121 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 52);
            *(b + 85 * OS1_S1 + 74) =
                prefactor_x * *(b + 85 * OS1_S1 + 53) -
                p_over_q * *(b + 121 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 53);
            *(b + 85 * OS1_S1 + 75) = prefactor_y * *(b + 85 * OS1_S1 + 49) -
                                      p_over_q * *(b + 123 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 49);
            *(b + 85 * OS1_S1 + 76) =
                prefactor_x * *(b + 85 * OS1_S1 + 55) -
                p_over_q * *(b + 121 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 55);
            *(b + 85 * OS1_S1 + 77) =
                prefactor_y * *(b + 85 * OS1_S1 + 50) -
                p_over_q * *(b + 123 * OS1_S1 + 50) +
                one_over_two_q * *(b + 56 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 85 * OS1_S1 + 30);
            *(b + 85 * OS1_S1 + 78) = prefactor_z * *(b + 85 * OS1_S1 + 50) -
                                      p_over_q * *(b + 124 * OS1_S1 + 50);
            *(b + 85 * OS1_S1 + 79) = prefactor_z * *(b + 85 * OS1_S1 + 51) -
                                      p_over_q * *(b + 124 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 30);
            *(b + 85 * OS1_S1 + 80) =
                prefactor_z * *(b + 85 * OS1_S1 + 52) -
                p_over_q * *(b + 124 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 31);
            *(b + 85 * OS1_S1 + 81) = prefactor_y * *(b + 85 * OS1_S1 + 54) -
                                      p_over_q * *(b + 123 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 34);
            *(b + 85 * OS1_S1 + 82) = prefactor_y * *(b + 85 * OS1_S1 + 55) -
                                      p_over_q * *(b + 123 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 55);
            *(b + 85 * OS1_S1 + 83) =
                prefactor_z * *(b + 85 * OS1_S1 + 55) -
                p_over_q * *(b + 124 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 85 * OS1_S1 + 34);
            *(b + 86 * OS1_S1 + 56) =
                prefactor_x * *(b + 86 * OS1_S1 + 35) -
                p_over_q * *(b + 122 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 86 * OS1_S1 + 20);
            *(b + 86 * OS1_S1 + 57) = prefactor_y * *(b + 86 * OS1_S1 + 35) -
                                      p_over_q * *(b + 124 * OS1_S1 + 35);
            *(b + 86 * OS1_S1 + 58) = prefactor_z * *(b + 86 * OS1_S1 + 35) -
                                      p_over_q * *(b + 125 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 35);
            *(b + 86 * OS1_S1 + 59) = prefactor_y * *(b + 86 * OS1_S1 + 36) -
                                      p_over_q * *(b + 124 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 20);
            *(b + 86 * OS1_S1 + 60) = prefactor_y * *(b + 86 * OS1_S1 + 37) -
                                      p_over_q * *(b + 124 * OS1_S1 + 37);
            *(b + 86 * OS1_S1 + 61) = prefactor_z * *(b + 86 * OS1_S1 + 37) -
                                      p_over_q * *(b + 125 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 20);
            *(b + 86 * OS1_S1 + 62) =
                prefactor_y * *(b + 86 * OS1_S1 + 38) -
                p_over_q * *(b + 124 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 21);
            *(b + 86 * OS1_S1 + 63) = prefactor_z * *(b + 86 * OS1_S1 + 38) -
                                      p_over_q * *(b + 125 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 38);
            *(b + 86 * OS1_S1 + 64) = prefactor_y * *(b + 86 * OS1_S1 + 40) -
                                      p_over_q * *(b + 124 * OS1_S1 + 40);
            *(b + 86 * OS1_S1 + 65) =
                prefactor_z * *(b + 86 * OS1_S1 + 40) -
                p_over_q * *(b + 125 * OS1_S1 + 40) +
                one_over_two_q * *(b + 56 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 22);
            *(b + 86 * OS1_S1 + 66) =
                prefactor_x * *(b + 86 * OS1_S1 + 45) -
                p_over_q * *(b + 122 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 45) +
                one_over_two_q * *(b + 86 * OS1_S1 + 30);
            *(b + 86 * OS1_S1 + 67) = prefactor_z * *(b + 86 * OS1_S1 + 41) -
                                      p_over_q * *(b + 125 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 41);
            *(b + 86 * OS1_S1 + 68) = prefactor_y * *(b + 86 * OS1_S1 + 43) -
                                      p_over_q * *(b + 124 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 25);
            *(b + 86 * OS1_S1 + 69) = prefactor_y * *(b + 86 * OS1_S1 + 44) -
                                      p_over_q * *(b + 124 * OS1_S1 + 44);
            *(b + 86 * OS1_S1 + 70) =
                prefactor_x * *(b + 86 * OS1_S1 + 49) -
                p_over_q * *(b + 122 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 49) +
                one_over_two_q * *(b + 86 * OS1_S1 + 34);
            *(b + 86 * OS1_S1 + 71) =
                prefactor_x * *(b + 86 * OS1_S1 + 50) -
                p_over_q * *(b + 122 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 50);
            *(b + 86 * OS1_S1 + 72) = prefactor_z * *(b + 86 * OS1_S1 + 45) -
                                      p_over_q * *(b + 125 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 45);
            *(b + 86 * OS1_S1 + 73) =
                prefactor_x * *(b + 86 * OS1_S1 + 52) -
                p_over_q * *(b + 122 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 52);
            *(b + 86 * OS1_S1 + 74) =
                prefactor_x * *(b + 86 * OS1_S1 + 53) -
                p_over_q * *(b + 122 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 53);
            *(b + 86 * OS1_S1 + 75) = prefactor_y * *(b + 86 * OS1_S1 + 49) -
                                      p_over_q * *(b + 124 * OS1_S1 + 49);
            *(b + 86 * OS1_S1 + 76) =
                prefactor_x * *(b + 86 * OS1_S1 + 55) -
                p_over_q * *(b + 122 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 55);
            *(b + 86 * OS1_S1 + 77) =
                prefactor_y * *(b + 86 * OS1_S1 + 50) -
                p_over_q * *(b + 124 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 86 * OS1_S1 + 30);
            *(b + 86 * OS1_S1 + 78) = prefactor_z * *(b + 86 * OS1_S1 + 50) -
                                      p_over_q * *(b + 125 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 50);
            *(b + 86 * OS1_S1 + 79) = prefactor_z * *(b + 86 * OS1_S1 + 51) -
                                      p_over_q * *(b + 125 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 30);
            *(b + 86 * OS1_S1 + 80) =
                prefactor_y * *(b + 86 * OS1_S1 + 53) -
                p_over_q * *(b + 124 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 33);
            *(b + 86 * OS1_S1 + 81) = prefactor_y * *(b + 86 * OS1_S1 + 54) -
                                      p_over_q * *(b + 124 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 34);
            *(b + 86 * OS1_S1 + 82) = prefactor_y * *(b + 86 * OS1_S1 + 55) -
                                      p_over_q * *(b + 124 * OS1_S1 + 55);
            *(b + 86 * OS1_S1 + 83) =
                prefactor_z * *(b + 86 * OS1_S1 + 55) -
                p_over_q * *(b + 125 * OS1_S1 + 55) +
                one_over_two_q * *(b + 56 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 86 * OS1_S1 + 34);
            *(b + 87 * OS1_S1 + 56) =
                prefactor_x * *(b + 87 * OS1_S1 + 35) -
                p_over_q * *(b + 123 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 87 * OS1_S1 + 20);
            *(b + 87 * OS1_S1 + 57) =
                prefactor_y * *(b + 87 * OS1_S1 + 35) -
                p_over_q * *(b + 126 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 35);
            *(b + 87 * OS1_S1 + 58) = prefactor_z * *(b + 87 * OS1_S1 + 35) -
                                      p_over_q * *(b + 127 * OS1_S1 + 35);
            *(b + 87 * OS1_S1 + 59) =
                prefactor_y * *(b + 87 * OS1_S1 + 36) -
                p_over_q * *(b + 126 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 36) +
                one_over_two_q * *(b + 87 * OS1_S1 + 20);
            *(b + 87 * OS1_S1 + 60) = prefactor_z * *(b + 87 * OS1_S1 + 36) -
                                      p_over_q * *(b + 127 * OS1_S1 + 36);
            *(b + 87 * OS1_S1 + 61) = prefactor_z * *(b + 87 * OS1_S1 + 37) -
                                      p_over_q * *(b + 127 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 87 * OS1_S1 + 20);
            *(b + 87 * OS1_S1 + 62) =
                prefactor_y * *(b + 87 * OS1_S1 + 38) -
                p_over_q * *(b + 126 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 21);
            *(b + 87 * OS1_S1 + 63) = prefactor_z * *(b + 87 * OS1_S1 + 38) -
                                      p_over_q * *(b + 127 * OS1_S1 + 38);
            *(b + 87 * OS1_S1 + 64) =
                prefactor_y * *(b + 87 * OS1_S1 + 40) -
                p_over_q * *(b + 126 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 40);
            *(b + 87 * OS1_S1 + 65) =
                prefactor_z * *(b + 87 * OS1_S1 + 40) -
                p_over_q * *(b + 127 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 22);
            *(b + 87 * OS1_S1 + 66) =
                prefactor_x * *(b + 87 * OS1_S1 + 45) -
                p_over_q * *(b + 123 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 45) +
                one_over_two_q * *(b + 87 * OS1_S1 + 30);
            *(b + 87 * OS1_S1 + 67) = prefactor_z * *(b + 87 * OS1_S1 + 41) -
                                      p_over_q * *(b + 127 * OS1_S1 + 41);
            *(b + 87 * OS1_S1 + 68) = prefactor_z * *(b + 87 * OS1_S1 + 42) -
                                      p_over_q * *(b + 127 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 87 * OS1_S1 + 23);
            *(b + 87 * OS1_S1 + 69) =
                prefactor_y * *(b + 87 * OS1_S1 + 44) -
                p_over_q * *(b + 126 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 44);
            *(b + 87 * OS1_S1 + 70) =
                prefactor_x * *(b + 87 * OS1_S1 + 49) -
                p_over_q * *(b + 123 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 49) +
                one_over_two_q * *(b + 87 * OS1_S1 + 34);
            *(b + 87 * OS1_S1 + 71) =
                prefactor_x * *(b + 87 * OS1_S1 + 50) -
                p_over_q * *(b + 123 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 50);
            *(b + 87 * OS1_S1 + 72) = prefactor_z * *(b + 87 * OS1_S1 + 45) -
                                      p_over_q * *(b + 127 * OS1_S1 + 45);
            *(b + 87 * OS1_S1 + 73) =
                prefactor_x * *(b + 87 * OS1_S1 + 52) -
                p_over_q * *(b + 123 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 52);
            *(b + 87 * OS1_S1 + 74) =
                prefactor_x * *(b + 87 * OS1_S1 + 53) -
                p_over_q * *(b + 123 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 53);
            *(b + 87 * OS1_S1 + 75) =
                prefactor_y * *(b + 87 * OS1_S1 + 49) -
                p_over_q * *(b + 126 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 49);
            *(b + 87 * OS1_S1 + 76) =
                prefactor_x * *(b + 87 * OS1_S1 + 55) -
                p_over_q * *(b + 123 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 55);
            *(b + 87 * OS1_S1 + 77) =
                prefactor_y * *(b + 87 * OS1_S1 + 50) -
                p_over_q * *(b + 126 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 87 * OS1_S1 + 30);
            *(b + 87 * OS1_S1 + 78) = prefactor_z * *(b + 87 * OS1_S1 + 50) -
                                      p_over_q * *(b + 127 * OS1_S1 + 50);
            *(b + 87 * OS1_S1 + 79) = prefactor_z * *(b + 87 * OS1_S1 + 51) -
                                      p_over_q * *(b + 127 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 87 * OS1_S1 + 30);
            *(b + 87 * OS1_S1 + 80) =
                prefactor_z * *(b + 87 * OS1_S1 + 52) -
                p_over_q * *(b + 127 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 31);
            *(b + 87 * OS1_S1 + 81) =
                prefactor_y * *(b + 87 * OS1_S1 + 54) -
                p_over_q * *(b + 126 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 54) +
                one_over_two_q * *(b + 87 * OS1_S1 + 34);
            *(b + 87 * OS1_S1 + 82) =
                prefactor_y * *(b + 87 * OS1_S1 + 55) -
                p_over_q * *(b + 126 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 55);
            *(b + 87 * OS1_S1 + 83) =
                prefactor_z * *(b + 87 * OS1_S1 + 55) -
                p_over_q * *(b + 127 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 87 * OS1_S1 + 34);
            *(b + 88 * OS1_S1 + 56) =
                prefactor_x * *(b + 88 * OS1_S1 + 35) -
                p_over_q * *(b + 124 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 88 * OS1_S1 + 20);
            *(b + 88 * OS1_S1 + 57) = prefactor_y * *(b + 88 * OS1_S1 + 35) -
                                      p_over_q * *(b + 127 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 35);
            *(b + 88 * OS1_S1 + 58) = prefactor_z * *(b + 88 * OS1_S1 + 35) -
                                      p_over_q * *(b + 128 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 35);
            *(b + 88 * OS1_S1 + 59) = prefactor_y * *(b + 88 * OS1_S1 + 36) -
                                      p_over_q * *(b + 127 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 20);
            *(b + 88 * OS1_S1 + 60) = prefactor_z * *(b + 88 * OS1_S1 + 36) -
                                      p_over_q * *(b + 128 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 36);
            *(b + 88 * OS1_S1 + 61) = prefactor_z * *(b + 88 * OS1_S1 + 37) -
                                      p_over_q * *(b + 128 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 20);
            *(b + 88 * OS1_S1 + 62) =
                prefactor_y * *(b + 88 * OS1_S1 + 38) -
                p_over_q * *(b + 127 * OS1_S1 + 38) +
                one_over_two_q * *(b + 58 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 21);
            *(b + 88 * OS1_S1 + 63) = prefactor_z * *(b + 88 * OS1_S1 + 38) -
                                      p_over_q * *(b + 128 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 38);
            *(b + 88 * OS1_S1 + 64) = prefactor_y * *(b + 88 * OS1_S1 + 40) -
                                      p_over_q * *(b + 127 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 40);
            *(b + 88 * OS1_S1 + 65) =
                prefactor_z * *(b + 88 * OS1_S1 + 40) -
                p_over_q * *(b + 128 * OS1_S1 + 40) +
                one_over_two_q * *(b + 57 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 22);
            *(b + 88 * OS1_S1 + 66) =
                prefactor_x * *(b + 88 * OS1_S1 + 45) -
                p_over_q * *(b + 124 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 45) +
                one_over_two_q * *(b + 88 * OS1_S1 + 30);
            *(b + 88 * OS1_S1 + 67) = prefactor_z * *(b + 88 * OS1_S1 + 41) -
                                      p_over_q * *(b + 128 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 41);
            *(b + 88 * OS1_S1 + 68) = prefactor_z * *(b + 88 * OS1_S1 + 42) -
                                      p_over_q * *(b + 128 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 23);
            *(b + 88 * OS1_S1 + 69) = prefactor_y * *(b + 88 * OS1_S1 + 44) -
                                      p_over_q * *(b + 127 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 44);
            *(b + 88 * OS1_S1 + 70) =
                prefactor_x * *(b + 88 * OS1_S1 + 49) -
                p_over_q * *(b + 124 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 49) +
                one_over_two_q * *(b + 88 * OS1_S1 + 34);
            *(b + 88 * OS1_S1 + 71) =
                prefactor_x * *(b + 88 * OS1_S1 + 50) -
                p_over_q * *(b + 124 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 50);
            *(b + 88 * OS1_S1 + 72) = prefactor_z * *(b + 88 * OS1_S1 + 45) -
                                      p_over_q * *(b + 128 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 45);
            *(b + 88 * OS1_S1 + 73) =
                prefactor_x * *(b + 88 * OS1_S1 + 52) -
                p_over_q * *(b + 124 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 52);
            *(b + 88 * OS1_S1 + 74) =
                prefactor_x * *(b + 88 * OS1_S1 + 53) -
                p_over_q * *(b + 124 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 53);
            *(b + 88 * OS1_S1 + 75) = prefactor_y * *(b + 88 * OS1_S1 + 49) -
                                      p_over_q * *(b + 127 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 49);
            *(b + 88 * OS1_S1 + 76) =
                prefactor_x * *(b + 88 * OS1_S1 + 55) -
                p_over_q * *(b + 124 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 55);
            *(b + 88 * OS1_S1 + 77) =
                prefactor_y * *(b + 88 * OS1_S1 + 50) -
                p_over_q * *(b + 127 * OS1_S1 + 50) +
                one_over_two_q * *(b + 58 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 88 * OS1_S1 + 30);
            *(b + 88 * OS1_S1 + 78) = prefactor_z * *(b + 88 * OS1_S1 + 50) -
                                      p_over_q * *(b + 128 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 50);
            *(b + 88 * OS1_S1 + 79) = prefactor_z * *(b + 88 * OS1_S1 + 51) -
                                      p_over_q * *(b + 128 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 30);
            *(b + 88 * OS1_S1 + 80) =
                prefactor_z * *(b + 88 * OS1_S1 + 52) -
                p_over_q * *(b + 128 * OS1_S1 + 52) +
                one_over_two_q * *(b + 57 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 31);
            *(b + 88 * OS1_S1 + 81) = prefactor_y * *(b + 88 * OS1_S1 + 54) -
                                      p_over_q * *(b + 127 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 34);
            *(b + 88 * OS1_S1 + 82) = prefactor_y * *(b + 88 * OS1_S1 + 55) -
                                      p_over_q * *(b + 127 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 55);
            *(b + 88 * OS1_S1 + 83) =
                prefactor_z * *(b + 88 * OS1_S1 + 55) -
                p_over_q * *(b + 128 * OS1_S1 + 55) +
                one_over_two_q * *(b + 57 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 88 * OS1_S1 + 34);
            *(b + 89 * OS1_S1 + 56) =
                prefactor_x * *(b + 89 * OS1_S1 + 35) -
                p_over_q * *(b + 125 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 89 * OS1_S1 + 20);
            *(b + 89 * OS1_S1 + 57) = prefactor_y * *(b + 89 * OS1_S1 + 35) -
                                      p_over_q * *(b + 128 * OS1_S1 + 35);
            *(b + 89 * OS1_S1 + 58) =
                prefactor_z * *(b + 89 * OS1_S1 + 35) -
                p_over_q * *(b + 129 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 35);
            *(b + 89 * OS1_S1 + 59) = prefactor_y * *(b + 89 * OS1_S1 + 36) -
                                      p_over_q * *(b + 128 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 89 * OS1_S1 + 20);
            *(b + 89 * OS1_S1 + 60) = prefactor_y * *(b + 89 * OS1_S1 + 37) -
                                      p_over_q * *(b + 128 * OS1_S1 + 37);
            *(b + 89 * OS1_S1 + 61) =
                prefactor_z * *(b + 89 * OS1_S1 + 37) -
                p_over_q * *(b + 129 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 37) +
                one_over_two_q * *(b + 89 * OS1_S1 + 20);
            *(b + 89 * OS1_S1 + 62) =
                prefactor_y * *(b + 89 * OS1_S1 + 38) -
                p_over_q * *(b + 128 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 21);
            *(b + 89 * OS1_S1 + 63) =
                prefactor_z * *(b + 89 * OS1_S1 + 38) -
                p_over_q * *(b + 129 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 38);
            *(b + 89 * OS1_S1 + 64) = prefactor_y * *(b + 89 * OS1_S1 + 40) -
                                      p_over_q * *(b + 128 * OS1_S1 + 40);
            *(b + 89 * OS1_S1 + 65) =
                prefactor_z * *(b + 89 * OS1_S1 + 40) -
                p_over_q * *(b + 129 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 22);
            *(b + 89 * OS1_S1 + 66) =
                prefactor_x * *(b + 89 * OS1_S1 + 45) -
                p_over_q * *(b + 125 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 45) +
                one_over_two_q * *(b + 89 * OS1_S1 + 30);
            *(b + 89 * OS1_S1 + 67) =
                prefactor_z * *(b + 89 * OS1_S1 + 41) -
                p_over_q * *(b + 129 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 41);
            *(b + 89 * OS1_S1 + 68) = prefactor_y * *(b + 89 * OS1_S1 + 43) -
                                      p_over_q * *(b + 128 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 89 * OS1_S1 + 25);
            *(b + 89 * OS1_S1 + 69) = prefactor_y * *(b + 89 * OS1_S1 + 44) -
                                      p_over_q * *(b + 128 * OS1_S1 + 44);
            *(b + 89 * OS1_S1 + 70) =
                prefactor_x * *(b + 89 * OS1_S1 + 49) -
                p_over_q * *(b + 125 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 49) +
                one_over_two_q * *(b + 89 * OS1_S1 + 34);
            *(b + 89 * OS1_S1 + 71) =
                prefactor_x * *(b + 89 * OS1_S1 + 50) -
                p_over_q * *(b + 125 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 50);
            *(b + 89 * OS1_S1 + 72) =
                prefactor_z * *(b + 89 * OS1_S1 + 45) -
                p_over_q * *(b + 129 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 45);
            *(b + 89 * OS1_S1 + 73) =
                prefactor_x * *(b + 89 * OS1_S1 + 52) -
                p_over_q * *(b + 125 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 52);
            *(b + 89 * OS1_S1 + 74) =
                prefactor_x * *(b + 89 * OS1_S1 + 53) -
                p_over_q * *(b + 125 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 53);
            *(b + 89 * OS1_S1 + 75) = prefactor_y * *(b + 89 * OS1_S1 + 49) -
                                      p_over_q * *(b + 128 * OS1_S1 + 49);
            *(b + 89 * OS1_S1 + 76) =
                prefactor_x * *(b + 89 * OS1_S1 + 55) -
                p_over_q * *(b + 125 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 55);
            *(b + 89 * OS1_S1 + 77) =
                prefactor_y * *(b + 89 * OS1_S1 + 50) -
                p_over_q * *(b + 128 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 89 * OS1_S1 + 30);
            *(b + 89 * OS1_S1 + 78) =
                prefactor_z * *(b + 89 * OS1_S1 + 50) -
                p_over_q * *(b + 129 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 50);
            *(b + 89 * OS1_S1 + 79) =
                prefactor_z * *(b + 89 * OS1_S1 + 51) -
                p_over_q * *(b + 129 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 51) +
                one_over_two_q * *(b + 89 * OS1_S1 + 30);
            *(b + 89 * OS1_S1 + 80) =
                prefactor_y * *(b + 89 * OS1_S1 + 53) -
                p_over_q * *(b + 128 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 33);
            *(b + 89 * OS1_S1 + 81) = prefactor_y * *(b + 89 * OS1_S1 + 54) -
                                      p_over_q * *(b + 128 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 89 * OS1_S1 + 34);
            *(b + 89 * OS1_S1 + 82) = prefactor_y * *(b + 89 * OS1_S1 + 55) -
                                      p_over_q * *(b + 128 * OS1_S1 + 55);
            *(b + 89 * OS1_S1 + 83) =
                prefactor_z * *(b + 89 * OS1_S1 + 55) -
                p_over_q * *(b + 129 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 89 * OS1_S1 + 34);
            *(b + 90 * OS1_S1 + 56) =
                prefactor_x * *(b + 90 * OS1_S1 + 35) -
                p_over_q * *(b + 126 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 20);
            *(b + 90 * OS1_S1 + 57) =
                prefactor_y * *(b + 90 * OS1_S1 + 35) -
                p_over_q * *(b + 130 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 35);
            *(b + 90 * OS1_S1 + 58) = prefactor_z * *(b + 90 * OS1_S1 + 35) -
                                      p_over_q * *(b + 131 * OS1_S1 + 35);
            *(b + 90 * OS1_S1 + 59) =
                prefactor_y * *(b + 90 * OS1_S1 + 36) -
                p_over_q * *(b + 130 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 36) +
                one_over_two_q * *(b + 90 * OS1_S1 + 20);
            *(b + 90 * OS1_S1 + 60) = prefactor_z * *(b + 90 * OS1_S1 + 36) -
                                      p_over_q * *(b + 131 * OS1_S1 + 36);
            *(b + 90 * OS1_S1 + 61) = prefactor_z * *(b + 90 * OS1_S1 + 37) -
                                      p_over_q * *(b + 131 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 90 * OS1_S1 + 20);
            *(b + 90 * OS1_S1 + 62) =
                prefactor_y * *(b + 90 * OS1_S1 + 38) -
                p_over_q * *(b + 130 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 21);
            *(b + 90 * OS1_S1 + 63) = prefactor_z * *(b + 90 * OS1_S1 + 38) -
                                      p_over_q * *(b + 131 * OS1_S1 + 38);
            *(b + 90 * OS1_S1 + 64) =
                prefactor_y * *(b + 90 * OS1_S1 + 40) -
                p_over_q * *(b + 130 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 40);
            *(b + 90 * OS1_S1 + 65) =
                prefactor_z * *(b + 90 * OS1_S1 + 40) -
                p_over_q * *(b + 131 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 22);
            *(b + 90 * OS1_S1 + 66) =
                prefactor_x * *(b + 90 * OS1_S1 + 45) -
                p_over_q * *(b + 126 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 45) +
                one_over_two_q * *(b + 90 * OS1_S1 + 30);
            *(b + 90 * OS1_S1 + 67) = prefactor_z * *(b + 90 * OS1_S1 + 41) -
                                      p_over_q * *(b + 131 * OS1_S1 + 41);
            *(b + 90 * OS1_S1 + 68) = prefactor_z * *(b + 90 * OS1_S1 + 42) -
                                      p_over_q * *(b + 131 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 90 * OS1_S1 + 23);
            *(b + 90 * OS1_S1 + 69) =
                prefactor_y * *(b + 90 * OS1_S1 + 44) -
                p_over_q * *(b + 130 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 44);
            *(b + 90 * OS1_S1 + 70) =
                prefactor_x * *(b + 90 * OS1_S1 + 49) -
                p_over_q * *(b + 126 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 49) +
                one_over_two_q * *(b + 90 * OS1_S1 + 34);
            *(b + 90 * OS1_S1 + 71) =
                prefactor_x * *(b + 90 * OS1_S1 + 50) -
                p_over_q * *(b + 126 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 50);
            *(b + 90 * OS1_S1 + 72) = prefactor_z * *(b + 90 * OS1_S1 + 45) -
                                      p_over_q * *(b + 131 * OS1_S1 + 45);
            *(b + 90 * OS1_S1 + 73) =
                prefactor_x * *(b + 90 * OS1_S1 + 52) -
                p_over_q * *(b + 126 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 52);
            *(b + 90 * OS1_S1 + 74) =
                prefactor_x * *(b + 90 * OS1_S1 + 53) -
                p_over_q * *(b + 126 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 53);
            *(b + 90 * OS1_S1 + 75) =
                prefactor_y * *(b + 90 * OS1_S1 + 49) -
                p_over_q * *(b + 130 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 49);
            *(b + 90 * OS1_S1 + 76) =
                prefactor_x * *(b + 90 * OS1_S1 + 55) -
                p_over_q * *(b + 126 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 55);
            *(b + 90 * OS1_S1 + 77) =
                prefactor_y * *(b + 90 * OS1_S1 + 50) -
                p_over_q * *(b + 130 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 30);
            *(b + 90 * OS1_S1 + 78) = prefactor_z * *(b + 90 * OS1_S1 + 50) -
                                      p_over_q * *(b + 131 * OS1_S1 + 50);
            *(b + 90 * OS1_S1 + 79) = prefactor_z * *(b + 90 * OS1_S1 + 51) -
                                      p_over_q * *(b + 131 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 90 * OS1_S1 + 30);
            *(b + 90 * OS1_S1 + 80) =
                prefactor_z * *(b + 90 * OS1_S1 + 52) -
                p_over_q * *(b + 131 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 31);
            *(b + 90 * OS1_S1 + 81) =
                prefactor_y * *(b + 90 * OS1_S1 + 54) -
                p_over_q * *(b + 130 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 54) +
                one_over_two_q * *(b + 90 * OS1_S1 + 34);
            *(b + 90 * OS1_S1 + 82) =
                prefactor_y * *(b + 90 * OS1_S1 + 55) -
                p_over_q * *(b + 130 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 55);
            *(b + 90 * OS1_S1 + 83) =
                prefactor_z * *(b + 90 * OS1_S1 + 55) -
                p_over_q * *(b + 131 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 34);
            *(b + 91 * OS1_S1 + 56) =
                prefactor_x * *(b + 91 * OS1_S1 + 35) -
                p_over_q * *(b + 127 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 20);
            *(b + 91 * OS1_S1 + 57) =
                prefactor_y * *(b + 91 * OS1_S1 + 35) -
                p_over_q * *(b + 131 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 35);
            *(b + 91 * OS1_S1 + 58) = prefactor_z * *(b + 91 * OS1_S1 + 35) -
                                      p_over_q * *(b + 132 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 35);
            *(b + 91 * OS1_S1 + 59) =
                prefactor_y * *(b + 91 * OS1_S1 + 36) -
                p_over_q * *(b + 131 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 36) +
                one_over_two_q * *(b + 91 * OS1_S1 + 20);
            *(b + 91 * OS1_S1 + 60) = prefactor_z * *(b + 91 * OS1_S1 + 36) -
                                      p_over_q * *(b + 132 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 36);
            *(b + 91 * OS1_S1 + 61) = prefactor_z * *(b + 91 * OS1_S1 + 37) -
                                      p_over_q * *(b + 132 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 91 * OS1_S1 + 20);
            *(b + 91 * OS1_S1 + 62) =
                prefactor_y * *(b + 91 * OS1_S1 + 38) -
                p_over_q * *(b + 131 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 21);
            *(b + 91 * OS1_S1 + 63) = prefactor_z * *(b + 91 * OS1_S1 + 38) -
                                      p_over_q * *(b + 132 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 38);
            *(b + 91 * OS1_S1 + 64) =
                prefactor_y * *(b + 91 * OS1_S1 + 40) -
                p_over_q * *(b + 131 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 40);
            *(b + 91 * OS1_S1 + 65) =
                prefactor_z * *(b + 91 * OS1_S1 + 40) -
                p_over_q * *(b + 132 * OS1_S1 + 40) +
                one_over_two_q * *(b + 59 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 22);
            *(b + 91 * OS1_S1 + 66) =
                prefactor_x * *(b + 91 * OS1_S1 + 45) -
                p_over_q * *(b + 127 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 45) +
                one_over_two_q * *(b + 91 * OS1_S1 + 30);
            *(b + 91 * OS1_S1 + 67) = prefactor_z * *(b + 91 * OS1_S1 + 41) -
                                      p_over_q * *(b + 132 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 41);
            *(b + 91 * OS1_S1 + 68) = prefactor_z * *(b + 91 * OS1_S1 + 42) -
                                      p_over_q * *(b + 132 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 91 * OS1_S1 + 23);
            *(b + 91 * OS1_S1 + 69) =
                prefactor_y * *(b + 91 * OS1_S1 + 44) -
                p_over_q * *(b + 131 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 44);
            *(b + 91 * OS1_S1 + 70) =
                prefactor_x * *(b + 91 * OS1_S1 + 49) -
                p_over_q * *(b + 127 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 49) +
                one_over_two_q * *(b + 91 * OS1_S1 + 34);
            *(b + 91 * OS1_S1 + 71) =
                prefactor_x * *(b + 91 * OS1_S1 + 50) -
                p_over_q * *(b + 127 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 50);
            *(b + 91 * OS1_S1 + 72) = prefactor_z * *(b + 91 * OS1_S1 + 45) -
                                      p_over_q * *(b + 132 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 45);
            *(b + 91 * OS1_S1 + 73) =
                prefactor_x * *(b + 91 * OS1_S1 + 52) -
                p_over_q * *(b + 127 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 52);
            *(b + 91 * OS1_S1 + 74) =
                prefactor_x * *(b + 91 * OS1_S1 + 53) -
                p_over_q * *(b + 127 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 53);
            *(b + 91 * OS1_S1 + 75) =
                prefactor_y * *(b + 91 * OS1_S1 + 49) -
                p_over_q * *(b + 131 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 49);
            *(b + 91 * OS1_S1 + 76) =
                prefactor_x * *(b + 91 * OS1_S1 + 55) -
                p_over_q * *(b + 127 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 55);
            *(b + 91 * OS1_S1 + 77) =
                prefactor_y * *(b + 91 * OS1_S1 + 50) -
                p_over_q * *(b + 131 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 30);
            *(b + 91 * OS1_S1 + 78) = prefactor_z * *(b + 91 * OS1_S1 + 50) -
                                      p_over_q * *(b + 132 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 50);
            *(b + 91 * OS1_S1 + 79) = prefactor_z * *(b + 91 * OS1_S1 + 51) -
                                      p_over_q * *(b + 132 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 91 * OS1_S1 + 30);
            *(b + 91 * OS1_S1 + 80) =
                prefactor_z * *(b + 91 * OS1_S1 + 52) -
                p_over_q * *(b + 132 * OS1_S1 + 52) +
                one_over_two_q * *(b + 59 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 31);
            *(b + 91 * OS1_S1 + 81) =
                prefactor_y * *(b + 91 * OS1_S1 + 54) -
                p_over_q * *(b + 131 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 54) +
                one_over_two_q * *(b + 91 * OS1_S1 + 34);
            *(b + 91 * OS1_S1 + 82) =
                prefactor_y * *(b + 91 * OS1_S1 + 55) -
                p_over_q * *(b + 131 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 55);
            *(b + 91 * OS1_S1 + 83) =
                prefactor_z * *(b + 91 * OS1_S1 + 55) -
                p_over_q * *(b + 132 * OS1_S1 + 55) +
                one_over_two_q * *(b + 59 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 34);
            *(b + 92 * OS1_S1 + 56) =
                prefactor_x * *(b + 92 * OS1_S1 + 35) -
                p_over_q * *(b + 128 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 20);
            *(b + 92 * OS1_S1 + 57) = prefactor_y * *(b + 92 * OS1_S1 + 35) -
                                      p_over_q * *(b + 132 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 35);
            *(b + 92 * OS1_S1 + 58) =
                prefactor_z * *(b + 92 * OS1_S1 + 35) -
                p_over_q * *(b + 133 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 35);
            *(b + 92 * OS1_S1 + 59) = prefactor_y * *(b + 92 * OS1_S1 + 36) -
                                      p_over_q * *(b + 132 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 92 * OS1_S1 + 20);
            *(b + 92 * OS1_S1 + 60) = prefactor_y * *(b + 92 * OS1_S1 + 37) -
                                      p_over_q * *(b + 132 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 37);
            *(b + 92 * OS1_S1 + 61) =
                prefactor_z * *(b + 92 * OS1_S1 + 37) -
                p_over_q * *(b + 133 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 37) +
                one_over_two_q * *(b + 92 * OS1_S1 + 20);
            *(b + 92 * OS1_S1 + 62) =
                prefactor_y * *(b + 92 * OS1_S1 + 38) -
                p_over_q * *(b + 132 * OS1_S1 + 38) +
                one_over_two_q * *(b + 61 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 21);
            *(b + 92 * OS1_S1 + 63) =
                prefactor_z * *(b + 92 * OS1_S1 + 38) -
                p_over_q * *(b + 133 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 38);
            *(b + 92 * OS1_S1 + 64) = prefactor_y * *(b + 92 * OS1_S1 + 40) -
                                      p_over_q * *(b + 132 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 40);
            *(b + 92 * OS1_S1 + 65) =
                prefactor_z * *(b + 92 * OS1_S1 + 40) -
                p_over_q * *(b + 133 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 22);
            *(b + 92 * OS1_S1 + 66) =
                prefactor_x * *(b + 92 * OS1_S1 + 45) -
                p_over_q * *(b + 128 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 45) +
                one_over_two_q * *(b + 92 * OS1_S1 + 30);
            *(b + 92 * OS1_S1 + 67) =
                prefactor_z * *(b + 92 * OS1_S1 + 41) -
                p_over_q * *(b + 133 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 41);
            *(b + 92 * OS1_S1 + 68) = prefactor_y * *(b + 92 * OS1_S1 + 43) -
                                      p_over_q * *(b + 132 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 92 * OS1_S1 + 25);
            *(b + 92 * OS1_S1 + 69) = prefactor_y * *(b + 92 * OS1_S1 + 44) -
                                      p_over_q * *(b + 132 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 44);
            *(b + 92 * OS1_S1 + 70) =
                prefactor_x * *(b + 92 * OS1_S1 + 49) -
                p_over_q * *(b + 128 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 49) +
                one_over_two_q * *(b + 92 * OS1_S1 + 34);
            *(b + 92 * OS1_S1 + 71) =
                prefactor_x * *(b + 92 * OS1_S1 + 50) -
                p_over_q * *(b + 128 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 50);
            *(b + 92 * OS1_S1 + 72) =
                prefactor_z * *(b + 92 * OS1_S1 + 45) -
                p_over_q * *(b + 133 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 45);
            *(b + 92 * OS1_S1 + 73) =
                prefactor_x * *(b + 92 * OS1_S1 + 52) -
                p_over_q * *(b + 128 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 52);
            *(b + 92 * OS1_S1 + 74) =
                prefactor_x * *(b + 92 * OS1_S1 + 53) -
                p_over_q * *(b + 128 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 53);
            *(b + 92 * OS1_S1 + 75) = prefactor_y * *(b + 92 * OS1_S1 + 49) -
                                      p_over_q * *(b + 132 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 49);
            *(b + 92 * OS1_S1 + 76) =
                prefactor_x * *(b + 92 * OS1_S1 + 55) -
                p_over_q * *(b + 128 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 55);
            *(b + 92 * OS1_S1 + 77) =
                prefactor_y * *(b + 92 * OS1_S1 + 50) -
                p_over_q * *(b + 132 * OS1_S1 + 50) +
                one_over_two_q * *(b + 61 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 30);
            *(b + 92 * OS1_S1 + 78) =
                prefactor_z * *(b + 92 * OS1_S1 + 50) -
                p_over_q * *(b + 133 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 50);
            *(b + 92 * OS1_S1 + 79) =
                prefactor_z * *(b + 92 * OS1_S1 + 51) -
                p_over_q * *(b + 133 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 51) +
                one_over_two_q * *(b + 92 * OS1_S1 + 30);
            *(b + 92 * OS1_S1 + 80) =
                prefactor_y * *(b + 92 * OS1_S1 + 53) -
                p_over_q * *(b + 132 * OS1_S1 + 53) +
                one_over_two_q * *(b + 61 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 33);
            *(b + 92 * OS1_S1 + 81) = prefactor_y * *(b + 92 * OS1_S1 + 54) -
                                      p_over_q * *(b + 132 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 92 * OS1_S1 + 34);
            *(b + 92 * OS1_S1 + 82) = prefactor_y * *(b + 92 * OS1_S1 + 55) -
                                      p_over_q * *(b + 132 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 55);
            *(b + 92 * OS1_S1 + 83) =
                prefactor_z * *(b + 92 * OS1_S1 + 55) -
                p_over_q * *(b + 133 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 34);
            *(b + 93 * OS1_S1 + 56) =
                prefactor_x * *(b + 93 * OS1_S1 + 35) -
                p_over_q * *(b + 129 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 20);
            *(b + 93 * OS1_S1 + 57) = prefactor_y * *(b + 93 * OS1_S1 + 35) -
                                      p_over_q * *(b + 133 * OS1_S1 + 35);
            *(b + 93 * OS1_S1 + 58) =
                prefactor_z * *(b + 93 * OS1_S1 + 35) -
                p_over_q * *(b + 134 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 35);
            *(b + 93 * OS1_S1 + 59) = prefactor_y * *(b + 93 * OS1_S1 + 36) -
                                      p_over_q * *(b + 133 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 93 * OS1_S1 + 20);
            *(b + 93 * OS1_S1 + 60) = prefactor_y * *(b + 93 * OS1_S1 + 37) -
                                      p_over_q * *(b + 133 * OS1_S1 + 37);
            *(b + 93 * OS1_S1 + 61) =
                prefactor_z * *(b + 93 * OS1_S1 + 37) -
                p_over_q * *(b + 134 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 37) +
                one_over_two_q * *(b + 93 * OS1_S1 + 20);
            *(b + 93 * OS1_S1 + 62) =
                prefactor_y * *(b + 93 * OS1_S1 + 38) -
                p_over_q * *(b + 133 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 21);
            *(b + 93 * OS1_S1 + 63) =
                prefactor_z * *(b + 93 * OS1_S1 + 38) -
                p_over_q * *(b + 134 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 38);
            *(b + 93 * OS1_S1 + 64) = prefactor_y * *(b + 93 * OS1_S1 + 40) -
                                      p_over_q * *(b + 133 * OS1_S1 + 40);
            *(b + 93 * OS1_S1 + 65) =
                prefactor_z * *(b + 93 * OS1_S1 + 40) -
                p_over_q * *(b + 134 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 22);
            *(b + 93 * OS1_S1 + 66) =
                prefactor_x * *(b + 93 * OS1_S1 + 45) -
                p_over_q * *(b + 129 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 45) +
                one_over_two_q * *(b + 93 * OS1_S1 + 30);
            *(b + 93 * OS1_S1 + 67) =
                prefactor_z * *(b + 93 * OS1_S1 + 41) -
                p_over_q * *(b + 134 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 41);
            *(b + 93 * OS1_S1 + 68) = prefactor_y * *(b + 93 * OS1_S1 + 43) -
                                      p_over_q * *(b + 133 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 93 * OS1_S1 + 25);
            *(b + 93 * OS1_S1 + 69) = prefactor_y * *(b + 93 * OS1_S1 + 44) -
                                      p_over_q * *(b + 133 * OS1_S1 + 44);
            *(b + 93 * OS1_S1 + 70) =
                prefactor_x * *(b + 93 * OS1_S1 + 49) -
                p_over_q * *(b + 129 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 49) +
                one_over_two_q * *(b + 93 * OS1_S1 + 34);
            *(b + 93 * OS1_S1 + 71) =
                prefactor_x * *(b + 93 * OS1_S1 + 50) -
                p_over_q * *(b + 129 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 50);
            *(b + 93 * OS1_S1 + 72) =
                prefactor_z * *(b + 93 * OS1_S1 + 45) -
                p_over_q * *(b + 134 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 45);
            *(b + 93 * OS1_S1 + 73) =
                prefactor_x * *(b + 93 * OS1_S1 + 52) -
                p_over_q * *(b + 129 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 52);
            *(b + 93 * OS1_S1 + 74) =
                prefactor_x * *(b + 93 * OS1_S1 + 53) -
                p_over_q * *(b + 129 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 53);
            *(b + 93 * OS1_S1 + 75) = prefactor_y * *(b + 93 * OS1_S1 + 49) -
                                      p_over_q * *(b + 133 * OS1_S1 + 49);
            *(b + 93 * OS1_S1 + 76) =
                prefactor_x * *(b + 93 * OS1_S1 + 55) -
                p_over_q * *(b + 129 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 55);
            *(b + 93 * OS1_S1 + 77) =
                prefactor_y * *(b + 93 * OS1_S1 + 50) -
                p_over_q * *(b + 133 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 30);
            *(b + 93 * OS1_S1 + 78) =
                prefactor_z * *(b + 93 * OS1_S1 + 50) -
                p_over_q * *(b + 134 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 50);
            *(b + 93 * OS1_S1 + 79) =
                prefactor_z * *(b + 93 * OS1_S1 + 51) -
                p_over_q * *(b + 134 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 51) +
                one_over_two_q * *(b + 93 * OS1_S1 + 30);
            *(b + 93 * OS1_S1 + 80) =
                prefactor_y * *(b + 93 * OS1_S1 + 53) -
                p_over_q * *(b + 133 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 33);
            *(b + 93 * OS1_S1 + 81) = prefactor_y * *(b + 93 * OS1_S1 + 54) -
                                      p_over_q * *(b + 133 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 93 * OS1_S1 + 34);
            *(b + 93 * OS1_S1 + 82) = prefactor_y * *(b + 93 * OS1_S1 + 55) -
                                      p_over_q * *(b + 133 * OS1_S1 + 55);
            *(b + 93 * OS1_S1 + 83) =
                prefactor_z * *(b + 93 * OS1_S1 + 55) -
                p_over_q * *(b + 134 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 34);
            *(b + 94 * OS1_S1 + 56) =
                prefactor_x * *(b + 94 * OS1_S1 + 35) -
                p_over_q * *(b + 130 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 20);
            *(b + 94 * OS1_S1 + 57) =
                prefactor_y * *(b + 94 * OS1_S1 + 35) -
                p_over_q * *(b + 135 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 35);
            *(b + 94 * OS1_S1 + 58) = prefactor_z * *(b + 94 * OS1_S1 + 35) -
                                      p_over_q * *(b + 136 * OS1_S1 + 35);
            *(b + 94 * OS1_S1 + 59) =
                prefactor_y * *(b + 94 * OS1_S1 + 36) -
                p_over_q * *(b + 135 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 36) +
                one_over_two_q * *(b + 94 * OS1_S1 + 20);
            *(b + 94 * OS1_S1 + 60) = prefactor_z * *(b + 94 * OS1_S1 + 36) -
                                      p_over_q * *(b + 136 * OS1_S1 + 36);
            *(b + 94 * OS1_S1 + 61) = prefactor_z * *(b + 94 * OS1_S1 + 37) -
                                      p_over_q * *(b + 136 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 94 * OS1_S1 + 20);
            *(b + 94 * OS1_S1 + 62) =
                prefactor_x * *(b + 94 * OS1_S1 + 41) -
                p_over_q * *(b + 130 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 26);
            *(b + 94 * OS1_S1 + 63) = prefactor_z * *(b + 94 * OS1_S1 + 38) -
                                      p_over_q * *(b + 136 * OS1_S1 + 38);
            *(b + 94 * OS1_S1 + 64) =
                prefactor_y * *(b + 94 * OS1_S1 + 40) -
                p_over_q * *(b + 135 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 40);
            *(b + 94 * OS1_S1 + 65) =
                prefactor_z * *(b + 94 * OS1_S1 + 40) -
                p_over_q * *(b + 136 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 22);
            *(b + 94 * OS1_S1 + 66) =
                prefactor_x * *(b + 94 * OS1_S1 + 45) -
                p_over_q * *(b + 130 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 45) +
                one_over_two_q * *(b + 94 * OS1_S1 + 30);
            *(b + 94 * OS1_S1 + 67) = prefactor_z * *(b + 94 * OS1_S1 + 41) -
                                      p_over_q * *(b + 136 * OS1_S1 + 41);
            *(b + 94 * OS1_S1 + 68) = prefactor_z * *(b + 94 * OS1_S1 + 42) -
                                      p_over_q * *(b + 136 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 94 * OS1_S1 + 23);
            *(b + 94 * OS1_S1 + 69) =
                prefactor_y * *(b + 94 * OS1_S1 + 44) -
                p_over_q * *(b + 135 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 44);
            *(b + 94 * OS1_S1 + 70) =
                prefactor_x * *(b + 94 * OS1_S1 + 49) -
                p_over_q * *(b + 130 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 49) +
                one_over_two_q * *(b + 94 * OS1_S1 + 34);
            *(b + 94 * OS1_S1 + 71) =
                prefactor_x * *(b + 94 * OS1_S1 + 50) -
                p_over_q * *(b + 130 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 50);
            *(b + 94 * OS1_S1 + 72) = prefactor_z * *(b + 94 * OS1_S1 + 45) -
                                      p_over_q * *(b + 136 * OS1_S1 + 45);
            *(b + 94 * OS1_S1 + 73) =
                prefactor_x * *(b + 94 * OS1_S1 + 52) -
                p_over_q * *(b + 130 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 52);
            *(b + 94 * OS1_S1 + 74) =
                prefactor_x * *(b + 94 * OS1_S1 + 53) -
                p_over_q * *(b + 130 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 53);
            *(b + 94 * OS1_S1 + 75) =
                prefactor_x * *(b + 94 * OS1_S1 + 54) -
                p_over_q * *(b + 130 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 54);
            *(b + 94 * OS1_S1 + 76) =
                prefactor_x * *(b + 94 * OS1_S1 + 55) -
                p_over_q * *(b + 130 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 55);
            *(b + 94 * OS1_S1 + 77) =
                prefactor_y * *(b + 94 * OS1_S1 + 50) -
                p_over_q * *(b + 135 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 30);
            *(b + 94 * OS1_S1 + 78) = prefactor_z * *(b + 94 * OS1_S1 + 50) -
                                      p_over_q * *(b + 136 * OS1_S1 + 50);
            *(b + 94 * OS1_S1 + 79) = prefactor_z * *(b + 94 * OS1_S1 + 51) -
                                      p_over_q * *(b + 136 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 94 * OS1_S1 + 30);
            *(b + 94 * OS1_S1 + 80) =
                prefactor_z * *(b + 94 * OS1_S1 + 52) -
                p_over_q * *(b + 136 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 31);
            *(b + 94 * OS1_S1 + 81) =
                prefactor_y * *(b + 94 * OS1_S1 + 54) -
                p_over_q * *(b + 135 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 54) +
                one_over_two_q * *(b + 94 * OS1_S1 + 34);
            *(b + 94 * OS1_S1 + 82) =
                prefactor_y * *(b + 94 * OS1_S1 + 55) -
                p_over_q * *(b + 135 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 55);
            *(b + 94 * OS1_S1 + 83) =
                prefactor_z * *(b + 94 * OS1_S1 + 55) -
                p_over_q * *(b + 136 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 34);
            *(b + 95 * OS1_S1 + 56) =
                prefactor_x * *(b + 95 * OS1_S1 + 35) -
                p_over_q * *(b + 131 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 95 * OS1_S1 + 20);
            *(b + 95 * OS1_S1 + 57) =
                prefactor_y * *(b + 95 * OS1_S1 + 35) -
                p_over_q * *(b + 136 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 35);
            *(b + 95 * OS1_S1 + 58) = prefactor_z * *(b + 95 * OS1_S1 + 35) -
                                      p_over_q * *(b + 137 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 35);
            *(b + 95 * OS1_S1 + 59) =
                prefactor_y * *(b + 95 * OS1_S1 + 36) -
                p_over_q * *(b + 136 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 36) +
                one_over_two_q * *(b + 95 * OS1_S1 + 20);
            *(b + 95 * OS1_S1 + 60) = prefactor_z * *(b + 95 * OS1_S1 + 36) -
                                      p_over_q * *(b + 137 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 36);
            *(b + 95 * OS1_S1 + 61) = prefactor_z * *(b + 95 * OS1_S1 + 37) -
                                      p_over_q * *(b + 137 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 95 * OS1_S1 + 20);
            *(b + 95 * OS1_S1 + 62) =
                prefactor_y * *(b + 95 * OS1_S1 + 38) -
                p_over_q * *(b + 136 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 21);
            *(b + 95 * OS1_S1 + 63) = prefactor_z * *(b + 95 * OS1_S1 + 38) -
                                      p_over_q * *(b + 137 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 38);
            *(b + 95 * OS1_S1 + 64) =
                prefactor_y * *(b + 95 * OS1_S1 + 40) -
                p_over_q * *(b + 136 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 40);
            *(b + 95 * OS1_S1 + 65) =
                prefactor_z * *(b + 95 * OS1_S1 + 40) -
                p_over_q * *(b + 137 * OS1_S1 + 40) +
                one_over_two_q * *(b + 62 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 22);
            *(b + 95 * OS1_S1 + 66) =
                prefactor_x * *(b + 95 * OS1_S1 + 45) -
                p_over_q * *(b + 131 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 45) +
                one_over_two_q * *(b + 95 * OS1_S1 + 30);
            *(b + 95 * OS1_S1 + 67) = prefactor_z * *(b + 95 * OS1_S1 + 41) -
                                      p_over_q * *(b + 137 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 41);
            *(b + 95 * OS1_S1 + 68) = prefactor_z * *(b + 95 * OS1_S1 + 42) -
                                      p_over_q * *(b + 137 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 95 * OS1_S1 + 23);
            *(b + 95 * OS1_S1 + 69) =
                prefactor_y * *(b + 95 * OS1_S1 + 44) -
                p_over_q * *(b + 136 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 44);
            *(b + 95 * OS1_S1 + 70) =
                prefactor_x * *(b + 95 * OS1_S1 + 49) -
                p_over_q * *(b + 131 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 49) +
                one_over_two_q * *(b + 95 * OS1_S1 + 34);
            *(b + 95 * OS1_S1 + 71) =
                prefactor_x * *(b + 95 * OS1_S1 + 50) -
                p_over_q * *(b + 131 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 50);
            *(b + 95 * OS1_S1 + 72) = prefactor_z * *(b + 95 * OS1_S1 + 45) -
                                      p_over_q * *(b + 137 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 45);
            *(b + 95 * OS1_S1 + 73) =
                prefactor_x * *(b + 95 * OS1_S1 + 52) -
                p_over_q * *(b + 131 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 52);
            *(b + 95 * OS1_S1 + 74) =
                prefactor_x * *(b + 95 * OS1_S1 + 53) -
                p_over_q * *(b + 131 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 53);
            *(b + 95 * OS1_S1 + 75) =
                prefactor_y * *(b + 95 * OS1_S1 + 49) -
                p_over_q * *(b + 136 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 49);
            *(b + 95 * OS1_S1 + 76) =
                prefactor_x * *(b + 95 * OS1_S1 + 55) -
                p_over_q * *(b + 131 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 55);
            *(b + 95 * OS1_S1 + 77) =
                prefactor_y * *(b + 95 * OS1_S1 + 50) -
                p_over_q * *(b + 136 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 95 * OS1_S1 + 30);
            *(b + 95 * OS1_S1 + 78) = prefactor_z * *(b + 95 * OS1_S1 + 50) -
                                      p_over_q * *(b + 137 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 50);
            *(b + 95 * OS1_S1 + 79) = prefactor_z * *(b + 95 * OS1_S1 + 51) -
                                      p_over_q * *(b + 137 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 95 * OS1_S1 + 30);
            *(b + 95 * OS1_S1 + 80) =
                prefactor_z * *(b + 95 * OS1_S1 + 52) -
                p_over_q * *(b + 137 * OS1_S1 + 52) +
                one_over_two_q * *(b + 62 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 31);
            *(b + 95 * OS1_S1 + 81) =
                prefactor_y * *(b + 95 * OS1_S1 + 54) -
                p_over_q * *(b + 136 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 54) +
                one_over_two_q * *(b + 95 * OS1_S1 + 34);
            *(b + 95 * OS1_S1 + 82) =
                prefactor_y * *(b + 95 * OS1_S1 + 55) -
                p_over_q * *(b + 136 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 55);
            *(b + 95 * OS1_S1 + 83) =
                prefactor_z * *(b + 95 * OS1_S1 + 55) -
                p_over_q * *(b + 137 * OS1_S1 + 55) +
                one_over_two_q * *(b + 62 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 95 * OS1_S1 + 34);
            *(b + 96 * OS1_S1 + 56) =
                prefactor_x * *(b + 96 * OS1_S1 + 35) -
                p_over_q * *(b + 132 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 96 * OS1_S1 + 20);
            *(b + 96 * OS1_S1 + 57) =
                prefactor_y * *(b + 96 * OS1_S1 + 35) -
                p_over_q * *(b + 137 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 35);
            *(b + 96 * OS1_S1 + 58) =
                prefactor_z * *(b + 96 * OS1_S1 + 35) -
                p_over_q * *(b + 138 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 35);
            *(b + 96 * OS1_S1 + 59) =
                prefactor_y * *(b + 96 * OS1_S1 + 36) -
                p_over_q * *(b + 137 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 36) +
                one_over_two_q * *(b + 96 * OS1_S1 + 20);
            *(b + 96 * OS1_S1 + 60) =
                prefactor_z * *(b + 96 * OS1_S1 + 36) -
                p_over_q * *(b + 138 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 36);
            *(b + 96 * OS1_S1 + 61) =
                prefactor_z * *(b + 96 * OS1_S1 + 37) -
                p_over_q * *(b + 138 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 37) +
                one_over_two_q * *(b + 96 * OS1_S1 + 20);
            *(b + 96 * OS1_S1 + 62) =
                prefactor_y * *(b + 96 * OS1_S1 + 38) -
                p_over_q * *(b + 137 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 21);
            *(b + 96 * OS1_S1 + 63) =
                prefactor_z * *(b + 96 * OS1_S1 + 38) -
                p_over_q * *(b + 138 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 38);
            *(b + 96 * OS1_S1 + 64) =
                prefactor_y * *(b + 96 * OS1_S1 + 40) -
                p_over_q * *(b + 137 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 40);
            *(b + 96 * OS1_S1 + 65) =
                prefactor_z * *(b + 96 * OS1_S1 + 40) -
                p_over_q * *(b + 138 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 22);
            *(b + 96 * OS1_S1 + 66) =
                prefactor_x * *(b + 96 * OS1_S1 + 45) -
                p_over_q * *(b + 132 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 45) +
                one_over_two_q * *(b + 96 * OS1_S1 + 30);
            *(b + 96 * OS1_S1 + 67) =
                prefactor_z * *(b + 96 * OS1_S1 + 41) -
                p_over_q * *(b + 138 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 41);
            *(b + 96 * OS1_S1 + 68) =
                prefactor_z * *(b + 96 * OS1_S1 + 42) -
                p_over_q * *(b + 138 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 42) +
                one_over_two_q * *(b + 96 * OS1_S1 + 23);
            *(b + 96 * OS1_S1 + 69) =
                prefactor_y * *(b + 96 * OS1_S1 + 44) -
                p_over_q * *(b + 137 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 44);
            *(b + 96 * OS1_S1 + 70) =
                prefactor_x * *(b + 96 * OS1_S1 + 49) -
                p_over_q * *(b + 132 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 49) +
                one_over_two_q * *(b + 96 * OS1_S1 + 34);
            *(b + 96 * OS1_S1 + 71) =
                prefactor_x * *(b + 96 * OS1_S1 + 50) -
                p_over_q * *(b + 132 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 50);
            *(b + 96 * OS1_S1 + 72) =
                prefactor_z * *(b + 96 * OS1_S1 + 45) -
                p_over_q * *(b + 138 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 45);
            *(b + 96 * OS1_S1 + 73) =
                prefactor_x * *(b + 96 * OS1_S1 + 52) -
                p_over_q * *(b + 132 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 52);
            *(b + 96 * OS1_S1 + 74) =
                prefactor_x * *(b + 96 * OS1_S1 + 53) -
                p_over_q * *(b + 132 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 53);
            *(b + 96 * OS1_S1 + 75) =
                prefactor_y * *(b + 96 * OS1_S1 + 49) -
                p_over_q * *(b + 137 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 49);
            *(b + 96 * OS1_S1 + 76) =
                prefactor_x * *(b + 96 * OS1_S1 + 55) -
                p_over_q * *(b + 132 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 55);
            *(b + 96 * OS1_S1 + 77) =
                prefactor_y * *(b + 96 * OS1_S1 + 50) -
                p_over_q * *(b + 137 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 96 * OS1_S1 + 30);
            *(b + 96 * OS1_S1 + 78) =
                prefactor_z * *(b + 96 * OS1_S1 + 50) -
                p_over_q * *(b + 138 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 50);
            *(b + 96 * OS1_S1 + 79) =
                prefactor_z * *(b + 96 * OS1_S1 + 51) -
                p_over_q * *(b + 138 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 51) +
                one_over_two_q * *(b + 96 * OS1_S1 + 30);
            *(b + 96 * OS1_S1 + 80) =
                prefactor_z * *(b + 96 * OS1_S1 + 52) -
                p_over_q * *(b + 138 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 31);
            *(b + 96 * OS1_S1 + 81) =
                prefactor_y * *(b + 96 * OS1_S1 + 54) -
                p_over_q * *(b + 137 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 54) +
                one_over_two_q * *(b + 96 * OS1_S1 + 34);
            *(b + 96 * OS1_S1 + 82) =
                prefactor_y * *(b + 96 * OS1_S1 + 55) -
                p_over_q * *(b + 137 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 55);
            *(b + 96 * OS1_S1 + 83) =
                prefactor_z * *(b + 96 * OS1_S1 + 55) -
                p_over_q * *(b + 138 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 96 * OS1_S1 + 34);
            *(b + 97 * OS1_S1 + 56) =
                prefactor_x * *(b + 97 * OS1_S1 + 35) -
                p_over_q * *(b + 133 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 97 * OS1_S1 + 20);
            *(b + 97 * OS1_S1 + 57) = prefactor_y * *(b + 97 * OS1_S1 + 35) -
                                      p_over_q * *(b + 138 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 35);
            *(b + 97 * OS1_S1 + 58) =
                prefactor_z * *(b + 97 * OS1_S1 + 35) -
                p_over_q * *(b + 139 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 35);
            *(b + 97 * OS1_S1 + 59) = prefactor_y * *(b + 97 * OS1_S1 + 36) -
                                      p_over_q * *(b + 138 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 97 * OS1_S1 + 20);
            *(b + 97 * OS1_S1 + 60) = prefactor_y * *(b + 97 * OS1_S1 + 37) -
                                      p_over_q * *(b + 138 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 37);
            *(b + 97 * OS1_S1 + 61) =
                prefactor_z * *(b + 97 * OS1_S1 + 37) -
                p_over_q * *(b + 139 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 37) +
                one_over_two_q * *(b + 97 * OS1_S1 + 20);
            *(b + 97 * OS1_S1 + 62) =
                prefactor_y * *(b + 97 * OS1_S1 + 38) -
                p_over_q * *(b + 138 * OS1_S1 + 38) +
                one_over_two_q * *(b + 65 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 21);
            *(b + 97 * OS1_S1 + 63) =
                prefactor_z * *(b + 97 * OS1_S1 + 38) -
                p_over_q * *(b + 139 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 38);
            *(b + 97 * OS1_S1 + 64) = prefactor_y * *(b + 97 * OS1_S1 + 40) -
                                      p_over_q * *(b + 138 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 40);
            *(b + 97 * OS1_S1 + 65) =
                prefactor_z * *(b + 97 * OS1_S1 + 40) -
                p_over_q * *(b + 139 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 22);
            *(b + 97 * OS1_S1 + 66) =
                prefactor_x * *(b + 97 * OS1_S1 + 45) -
                p_over_q * *(b + 133 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 45) +
                one_over_two_q * *(b + 97 * OS1_S1 + 30);
            *(b + 97 * OS1_S1 + 67) =
                prefactor_z * *(b + 97 * OS1_S1 + 41) -
                p_over_q * *(b + 139 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 41);
            *(b + 97 * OS1_S1 + 68) = prefactor_y * *(b + 97 * OS1_S1 + 43) -
                                      p_over_q * *(b + 138 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 97 * OS1_S1 + 25);
            *(b + 97 * OS1_S1 + 69) = prefactor_y * *(b + 97 * OS1_S1 + 44) -
                                      p_over_q * *(b + 138 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 44);
            *(b + 97 * OS1_S1 + 70) =
                prefactor_x * *(b + 97 * OS1_S1 + 49) -
                p_over_q * *(b + 133 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 49) +
                one_over_two_q * *(b + 97 * OS1_S1 + 34);
            *(b + 97 * OS1_S1 + 71) =
                prefactor_x * *(b + 97 * OS1_S1 + 50) -
                p_over_q * *(b + 133 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 50);
            *(b + 97 * OS1_S1 + 72) =
                prefactor_z * *(b + 97 * OS1_S1 + 45) -
                p_over_q * *(b + 139 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 45);
            *(b + 97 * OS1_S1 + 73) =
                prefactor_x * *(b + 97 * OS1_S1 + 52) -
                p_over_q * *(b + 133 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 52);
            *(b + 97 * OS1_S1 + 74) =
                prefactor_x * *(b + 97 * OS1_S1 + 53) -
                p_over_q * *(b + 133 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 53);
            *(b + 97 * OS1_S1 + 75) = prefactor_y * *(b + 97 * OS1_S1 + 49) -
                                      p_over_q * *(b + 138 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 49);
            *(b + 97 * OS1_S1 + 76) =
                prefactor_x * *(b + 97 * OS1_S1 + 55) -
                p_over_q * *(b + 133 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 55);
            *(b + 97 * OS1_S1 + 77) =
                prefactor_y * *(b + 97 * OS1_S1 + 50) -
                p_over_q * *(b + 138 * OS1_S1 + 50) +
                one_over_two_q * *(b + 65 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 97 * OS1_S1 + 30);
            *(b + 97 * OS1_S1 + 78) =
                prefactor_z * *(b + 97 * OS1_S1 + 50) -
                p_over_q * *(b + 139 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 50);
            *(b + 97 * OS1_S1 + 79) =
                prefactor_z * *(b + 97 * OS1_S1 + 51) -
                p_over_q * *(b + 139 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 51) +
                one_over_two_q * *(b + 97 * OS1_S1 + 30);
            *(b + 97 * OS1_S1 + 80) =
                prefactor_y * *(b + 97 * OS1_S1 + 53) -
                p_over_q * *(b + 138 * OS1_S1 + 53) +
                one_over_two_q * *(b + 65 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 33);
            *(b + 97 * OS1_S1 + 81) = prefactor_y * *(b + 97 * OS1_S1 + 54) -
                                      p_over_q * *(b + 138 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 97 * OS1_S1 + 34);
            *(b + 97 * OS1_S1 + 82) = prefactor_y * *(b + 97 * OS1_S1 + 55) -
                                      p_over_q * *(b + 138 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 55);
            *(b + 97 * OS1_S1 + 83) =
                prefactor_z * *(b + 97 * OS1_S1 + 55) -
                p_over_q * *(b + 139 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 97 * OS1_S1 + 34);
            *(b + 98 * OS1_S1 + 56) =
                prefactor_x * *(b + 98 * OS1_S1 + 35) -
                p_over_q * *(b + 134 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 20);
            *(b + 98 * OS1_S1 + 57) = prefactor_y * *(b + 98 * OS1_S1 + 35) -
                                      p_over_q * *(b + 139 * OS1_S1 + 35);
            *(b + 98 * OS1_S1 + 58) =
                prefactor_z * *(b + 98 * OS1_S1 + 35) -
                p_over_q * *(b + 140 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 35);
            *(b + 98 * OS1_S1 + 59) = prefactor_y * *(b + 98 * OS1_S1 + 36) -
                                      p_over_q * *(b + 139 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 98 * OS1_S1 + 20);
            *(b + 98 * OS1_S1 + 60) = prefactor_y * *(b + 98 * OS1_S1 + 37) -
                                      p_over_q * *(b + 139 * OS1_S1 + 37);
            *(b + 98 * OS1_S1 + 61) =
                prefactor_z * *(b + 98 * OS1_S1 + 37) -
                p_over_q * *(b + 140 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 37) +
                one_over_two_q * *(b + 98 * OS1_S1 + 20);
            *(b + 98 * OS1_S1 + 62) =
                prefactor_y * *(b + 98 * OS1_S1 + 38) -
                p_over_q * *(b + 139 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 21);
            *(b + 98 * OS1_S1 + 63) =
                prefactor_z * *(b + 98 * OS1_S1 + 38) -
                p_over_q * *(b + 140 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 38);
            *(b + 98 * OS1_S1 + 64) = prefactor_y * *(b + 98 * OS1_S1 + 40) -
                                      p_over_q * *(b + 139 * OS1_S1 + 40);
            *(b + 98 * OS1_S1 + 65) =
                prefactor_x * *(b + 98 * OS1_S1 + 44) -
                p_over_q * *(b + 134 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 29);
            *(b + 98 * OS1_S1 + 66) =
                prefactor_x * *(b + 98 * OS1_S1 + 45) -
                p_over_q * *(b + 134 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 45) +
                one_over_two_q * *(b + 98 * OS1_S1 + 30);
            *(b + 98 * OS1_S1 + 67) =
                prefactor_z * *(b + 98 * OS1_S1 + 41) -
                p_over_q * *(b + 140 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 41);
            *(b + 98 * OS1_S1 + 68) = prefactor_y * *(b + 98 * OS1_S1 + 43) -
                                      p_over_q * *(b + 139 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 98 * OS1_S1 + 25);
            *(b + 98 * OS1_S1 + 69) = prefactor_y * *(b + 98 * OS1_S1 + 44) -
                                      p_over_q * *(b + 139 * OS1_S1 + 44);
            *(b + 98 * OS1_S1 + 70) =
                prefactor_x * *(b + 98 * OS1_S1 + 49) -
                p_over_q * *(b + 134 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 49) +
                one_over_two_q * *(b + 98 * OS1_S1 + 34);
            *(b + 98 * OS1_S1 + 71) =
                prefactor_x * *(b + 98 * OS1_S1 + 50) -
                p_over_q * *(b + 134 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 50);
            *(b + 98 * OS1_S1 + 72) =
                prefactor_x * *(b + 98 * OS1_S1 + 51) -
                p_over_q * *(b + 134 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 51);
            *(b + 98 * OS1_S1 + 73) =
                prefactor_x * *(b + 98 * OS1_S1 + 52) -
                p_over_q * *(b + 134 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 52);
            *(b + 98 * OS1_S1 + 74) =
                prefactor_x * *(b + 98 * OS1_S1 + 53) -
                p_over_q * *(b + 134 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 53);
            *(b + 98 * OS1_S1 + 75) = prefactor_y * *(b + 98 * OS1_S1 + 49) -
                                      p_over_q * *(b + 139 * OS1_S1 + 49);
            *(b + 98 * OS1_S1 + 76) =
                prefactor_x * *(b + 98 * OS1_S1 + 55) -
                p_over_q * *(b + 134 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 55);
            *(b + 98 * OS1_S1 + 77) =
                prefactor_y * *(b + 98 * OS1_S1 + 50) -
                p_over_q * *(b + 139 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 30);
            *(b + 98 * OS1_S1 + 78) =
                prefactor_z * *(b + 98 * OS1_S1 + 50) -
                p_over_q * *(b + 140 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 50);
            *(b + 98 * OS1_S1 + 79) =
                prefactor_z * *(b + 98 * OS1_S1 + 51) -
                p_over_q * *(b + 140 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 51) +
                one_over_two_q * *(b + 98 * OS1_S1 + 30);
            *(b + 98 * OS1_S1 + 80) =
                prefactor_y * *(b + 98 * OS1_S1 + 53) -
                p_over_q * *(b + 139 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 33);
            *(b + 98 * OS1_S1 + 81) = prefactor_y * *(b + 98 * OS1_S1 + 54) -
                                      p_over_q * *(b + 139 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 98 * OS1_S1 + 34);
            *(b + 98 * OS1_S1 + 82) = prefactor_y * *(b + 98 * OS1_S1 + 55) -
                                      p_over_q * *(b + 139 * OS1_S1 + 55);
            *(b + 98 * OS1_S1 + 83) =
                prefactor_z * *(b + 98 * OS1_S1 + 55) -
                p_over_q * *(b + 140 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 34);
            *(b + 99 * OS1_S1 + 56) =
                prefactor_x * *(b + 99 * OS1_S1 + 35) -
                p_over_q * *(b + 135 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 99 * OS1_S1 + 20);
            *(b + 99 * OS1_S1 + 57) =
                prefactor_y * *(b + 99 * OS1_S1 + 35) -
                p_over_q * *(b + 141 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 35);
            *(b + 99 * OS1_S1 + 58) = prefactor_z * *(b + 99 * OS1_S1 + 35) -
                                      p_over_q * *(b + 142 * OS1_S1 + 35);
            *(b + 99 * OS1_S1 + 59) =
                prefactor_y * *(b + 99 * OS1_S1 + 36) -
                p_over_q * *(b + 141 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 36) +
                one_over_two_q * *(b + 99 * OS1_S1 + 20);
            *(b + 99 * OS1_S1 + 60) = prefactor_z * *(b + 99 * OS1_S1 + 36) -
                                      p_over_q * *(b + 142 * OS1_S1 + 36);
            *(b + 99 * OS1_S1 + 61) = prefactor_z * *(b + 99 * OS1_S1 + 37) -
                                      p_over_q * *(b + 142 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 99 * OS1_S1 + 20);
            *(b + 99 * OS1_S1 + 62) =
                prefactor_x * *(b + 99 * OS1_S1 + 41) -
                p_over_q * *(b + 135 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 26);
            *(b + 99 * OS1_S1 + 63) = prefactor_z * *(b + 99 * OS1_S1 + 38) -
                                      p_over_q * *(b + 142 * OS1_S1 + 38);
            *(b + 99 * OS1_S1 + 64) =
                prefactor_y * *(b + 99 * OS1_S1 + 40) -
                p_over_q * *(b + 141 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 40);
            *(b + 99 * OS1_S1 + 65) =
                prefactor_z * *(b + 99 * OS1_S1 + 40) -
                p_over_q * *(b + 142 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 22);
            *(b + 99 * OS1_S1 + 66) =
                prefactor_x * *(b + 99 * OS1_S1 + 45) -
                p_over_q * *(b + 135 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 45) +
                one_over_two_q * *(b + 99 * OS1_S1 + 30);
            *(b + 99 * OS1_S1 + 67) = prefactor_z * *(b + 99 * OS1_S1 + 41) -
                                      p_over_q * *(b + 142 * OS1_S1 + 41);
            *(b + 99 * OS1_S1 + 68) = prefactor_z * *(b + 99 * OS1_S1 + 42) -
                                      p_over_q * *(b + 142 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 99 * OS1_S1 + 23);
            *(b + 99 * OS1_S1 + 69) =
                prefactor_y * *(b + 99 * OS1_S1 + 44) -
                p_over_q * *(b + 141 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 44);
            *(b + 99 * OS1_S1 + 70) =
                prefactor_x * *(b + 99 * OS1_S1 + 49) -
                p_over_q * *(b + 135 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 49) +
                one_over_two_q * *(b + 99 * OS1_S1 + 34);
            *(b + 99 * OS1_S1 + 71) =
                prefactor_x * *(b + 99 * OS1_S1 + 50) -
                p_over_q * *(b + 135 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 50);
            *(b + 99 * OS1_S1 + 72) = prefactor_z * *(b + 99 * OS1_S1 + 45) -
                                      p_over_q * *(b + 142 * OS1_S1 + 45);
            *(b + 99 * OS1_S1 + 73) =
                prefactor_x * *(b + 99 * OS1_S1 + 52) -
                p_over_q * *(b + 135 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 52);
            *(b + 99 * OS1_S1 + 74) =
                prefactor_x * *(b + 99 * OS1_S1 + 53) -
                p_over_q * *(b + 135 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 53);
            *(b + 99 * OS1_S1 + 75) =
                prefactor_x * *(b + 99 * OS1_S1 + 54) -
                p_over_q * *(b + 135 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 54);
            *(b + 99 * OS1_S1 + 76) =
                prefactor_x * *(b + 99 * OS1_S1 + 55) -
                p_over_q * *(b + 135 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 55);
            *(b + 99 * OS1_S1 + 77) =
                prefactor_y * *(b + 99 * OS1_S1 + 50) -
                p_over_q * *(b + 141 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 99 * OS1_S1 + 30);
            *(b + 99 * OS1_S1 + 78) = prefactor_z * *(b + 99 * OS1_S1 + 50) -
                                      p_over_q * *(b + 142 * OS1_S1 + 50);
            *(b + 99 * OS1_S1 + 79) = prefactor_z * *(b + 99 * OS1_S1 + 51) -
                                      p_over_q * *(b + 142 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 99 * OS1_S1 + 30);
            *(b + 99 * OS1_S1 + 80) =
                prefactor_z * *(b + 99 * OS1_S1 + 52) -
                p_over_q * *(b + 142 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 31);
            *(b + 99 * OS1_S1 + 81) =
                prefactor_y * *(b + 99 * OS1_S1 + 54) -
                p_over_q * *(b + 141 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 54) +
                one_over_two_q * *(b + 99 * OS1_S1 + 34);
            *(b + 99 * OS1_S1 + 82) =
                prefactor_y * *(b + 99 * OS1_S1 + 55) -
                p_over_q * *(b + 141 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 55);
            *(b + 99 * OS1_S1 + 83) =
                prefactor_z * *(b + 99 * OS1_S1 + 55) -
                p_over_q * *(b + 142 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 99 * OS1_S1 + 34);
            *(b + 100 * OS1_S1 + 56) =
                prefactor_x * *(b + 100 * OS1_S1 + 35) -
                p_over_q * *(b + 136 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 20);
            *(b + 100 * OS1_S1 + 57) =
                prefactor_y * *(b + 100 * OS1_S1 + 35) -
                p_over_q * *(b + 142 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 35);
            *(b + 100 * OS1_S1 + 58) = prefactor_z * *(b + 100 * OS1_S1 + 35) -
                                       p_over_q * *(b + 143 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 35);
            *(b + 100 * OS1_S1 + 59) =
                prefactor_y * *(b + 100 * OS1_S1 + 36) -
                p_over_q * *(b + 142 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 36) +
                one_over_two_q * *(b + 100 * OS1_S1 + 20);
            *(b + 100 * OS1_S1 + 60) = prefactor_z * *(b + 100 * OS1_S1 + 36) -
                                       p_over_q * *(b + 143 * OS1_S1 + 36) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 36);
            *(b + 100 * OS1_S1 + 61) =
                prefactor_z * *(b + 100 * OS1_S1 + 37) -
                p_over_q * *(b + 143 * OS1_S1 + 37) +
                one_over_two_q * *(b + 66 * OS1_S1 + 37) +
                one_over_two_q * *(b + 100 * OS1_S1 + 20);
            *(b + 100 * OS1_S1 + 62) =
                prefactor_x * *(b + 100 * OS1_S1 + 41) -
                p_over_q * *(b + 136 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 26);
            *(b + 100 * OS1_S1 + 63) = prefactor_z * *(b + 100 * OS1_S1 + 38) -
                                       p_over_q * *(b + 143 * OS1_S1 + 38) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 38);
            *(b + 100 * OS1_S1 + 64) =
                prefactor_y * *(b + 100 * OS1_S1 + 40) -
                p_over_q * *(b + 142 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 40);
            *(b + 100 * OS1_S1 + 65) =
                prefactor_z * *(b + 100 * OS1_S1 + 40) -
                p_over_q * *(b + 143 * OS1_S1 + 40) +
                one_over_two_q * *(b + 66 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 22);
            *(b + 100 * OS1_S1 + 66) =
                prefactor_x * *(b + 100 * OS1_S1 + 45) -
                p_over_q * *(b + 136 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 45) +
                one_over_two_q * *(b + 100 * OS1_S1 + 30);
            *(b + 100 * OS1_S1 + 67) = prefactor_z * *(b + 100 * OS1_S1 + 41) -
                                       p_over_q * *(b + 143 * OS1_S1 + 41) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 41);
            *(b + 100 * OS1_S1 + 68) =
                prefactor_z * *(b + 100 * OS1_S1 + 42) -
                p_over_q * *(b + 143 * OS1_S1 + 42) +
                one_over_two_q * *(b + 66 * OS1_S1 + 42) +
                one_over_two_q * *(b + 100 * OS1_S1 + 23);
            *(b + 100 * OS1_S1 + 69) =
                prefactor_y * *(b + 100 * OS1_S1 + 44) -
                p_over_q * *(b + 142 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 44);
            *(b + 100 * OS1_S1 + 70) =
                prefactor_x * *(b + 100 * OS1_S1 + 49) -
                p_over_q * *(b + 136 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 49) +
                one_over_two_q * *(b + 100 * OS1_S1 + 34);
            *(b + 100 * OS1_S1 + 71) =
                prefactor_x * *(b + 100 * OS1_S1 + 50) -
                p_over_q * *(b + 136 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 50);
            *(b + 100 * OS1_S1 + 72) = prefactor_z * *(b + 100 * OS1_S1 + 45) -
                                       p_over_q * *(b + 143 * OS1_S1 + 45) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 45);
            *(b + 100 * OS1_S1 + 73) =
                prefactor_x * *(b + 100 * OS1_S1 + 52) -
                p_over_q * *(b + 136 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 52);
            *(b + 100 * OS1_S1 + 74) =
                prefactor_x * *(b + 100 * OS1_S1 + 53) -
                p_over_q * *(b + 136 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 53);
            *(b + 100 * OS1_S1 + 75) =
                prefactor_x * *(b + 100 * OS1_S1 + 54) -
                p_over_q * *(b + 136 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 54);
            *(b + 100 * OS1_S1 + 76) =
                prefactor_x * *(b + 100 * OS1_S1 + 55) -
                p_over_q * *(b + 136 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 55);
            *(b + 100 * OS1_S1 + 77) =
                prefactor_y * *(b + 100 * OS1_S1 + 50) -
                p_over_q * *(b + 142 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 30);
            *(b + 100 * OS1_S1 + 78) = prefactor_z * *(b + 100 * OS1_S1 + 50) -
                                       p_over_q * *(b + 143 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 50);
            *(b + 100 * OS1_S1 + 79) =
                prefactor_z * *(b + 100 * OS1_S1 + 51) -
                p_over_q * *(b + 143 * OS1_S1 + 51) +
                one_over_two_q * *(b + 66 * OS1_S1 + 51) +
                one_over_two_q * *(b + 100 * OS1_S1 + 30);
            *(b + 100 * OS1_S1 + 80) =
                prefactor_z * *(b + 100 * OS1_S1 + 52) -
                p_over_q * *(b + 143 * OS1_S1 + 52) +
                one_over_two_q * *(b + 66 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 31);
            *(b + 100 * OS1_S1 + 81) =
                prefactor_y * *(b + 100 * OS1_S1 + 54) -
                p_over_q * *(b + 142 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 54) +
                one_over_two_q * *(b + 100 * OS1_S1 + 34);
            *(b + 100 * OS1_S1 + 82) =
                prefactor_y * *(b + 100 * OS1_S1 + 55) -
                p_over_q * *(b + 142 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 55);
            *(b + 100 * OS1_S1 + 83) =
                prefactor_z * *(b + 100 * OS1_S1 + 55) -
                p_over_q * *(b + 143 * OS1_S1 + 55) +
                one_over_two_q * *(b + 66 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 34);
            *(b + 101 * OS1_S1 + 56) =
                prefactor_x * *(b + 101 * OS1_S1 + 35) -
                p_over_q * *(b + 137 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 101 * OS1_S1 + 20);
            *(b + 101 * OS1_S1 + 57) =
                prefactor_y * *(b + 101 * OS1_S1 + 35) -
                p_over_q * *(b + 143 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 35);
            *(b + 101 * OS1_S1 + 58) =
                prefactor_z * *(b + 101 * OS1_S1 + 35) -
                p_over_q * *(b + 144 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 35);
            *(b + 101 * OS1_S1 + 59) =
                prefactor_y * *(b + 101 * OS1_S1 + 36) -
                p_over_q * *(b + 143 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 36) +
                one_over_two_q * *(b + 101 * OS1_S1 + 20);
            *(b + 101 * OS1_S1 + 60) =
                prefactor_z * *(b + 101 * OS1_S1 + 36) -
                p_over_q * *(b + 144 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 36);
            *(b + 101 * OS1_S1 + 61) =
                prefactor_z * *(b + 101 * OS1_S1 + 37) -
                p_over_q * *(b + 144 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 37) +
                one_over_two_q * *(b + 101 * OS1_S1 + 20);
            *(b + 101 * OS1_S1 + 62) =
                prefactor_x * *(b + 101 * OS1_S1 + 41) -
                p_over_q * *(b + 137 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 26);
            *(b + 101 * OS1_S1 + 63) =
                prefactor_z * *(b + 101 * OS1_S1 + 38) -
                p_over_q * *(b + 144 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 38);
            *(b + 101 * OS1_S1 + 64) =
                prefactor_y * *(b + 101 * OS1_S1 + 40) -
                p_over_q * *(b + 143 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 40);
            *(b + 101 * OS1_S1 + 65) =
                prefactor_z * *(b + 101 * OS1_S1 + 40) -
                p_over_q * *(b + 144 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 22);
            *(b + 101 * OS1_S1 + 66) =
                prefactor_x * *(b + 101 * OS1_S1 + 45) -
                p_over_q * *(b + 137 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 45) +
                one_over_two_q * *(b + 101 * OS1_S1 + 30);
            *(b + 101 * OS1_S1 + 67) =
                prefactor_z * *(b + 101 * OS1_S1 + 41) -
                p_over_q * *(b + 144 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 41);
            *(b + 101 * OS1_S1 + 68) =
                prefactor_z * *(b + 101 * OS1_S1 + 42) -
                p_over_q * *(b + 144 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 42) +
                one_over_two_q * *(b + 101 * OS1_S1 + 23);
            *(b + 101 * OS1_S1 + 69) =
                prefactor_y * *(b + 101 * OS1_S1 + 44) -
                p_over_q * *(b + 143 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 44);
            *(b + 101 * OS1_S1 + 70) =
                prefactor_x * *(b + 101 * OS1_S1 + 49) -
                p_over_q * *(b + 137 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 49) +
                one_over_two_q * *(b + 101 * OS1_S1 + 34);
            *(b + 101 * OS1_S1 + 71) =
                prefactor_x * *(b + 101 * OS1_S1 + 50) -
                p_over_q * *(b + 137 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 50);
            *(b + 101 * OS1_S1 + 72) =
                prefactor_z * *(b + 101 * OS1_S1 + 45) -
                p_over_q * *(b + 144 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 45);
            *(b + 101 * OS1_S1 + 73) =
                prefactor_x * *(b + 101 * OS1_S1 + 52) -
                p_over_q * *(b + 137 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 52);
            *(b + 101 * OS1_S1 + 74) =
                prefactor_x * *(b + 101 * OS1_S1 + 53) -
                p_over_q * *(b + 137 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 53);
            *(b + 101 * OS1_S1 + 75) =
                prefactor_x * *(b + 101 * OS1_S1 + 54) -
                p_over_q * *(b + 137 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 54);
            *(b + 101 * OS1_S1 + 76) =
                prefactor_x * *(b + 101 * OS1_S1 + 55) -
                p_over_q * *(b + 137 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 55);
            *(b + 101 * OS1_S1 + 77) =
                prefactor_y * *(b + 101 * OS1_S1 + 50) -
                p_over_q * *(b + 143 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 101 * OS1_S1 + 30);
            *(b + 101 * OS1_S1 + 78) =
                prefactor_z * *(b + 101 * OS1_S1 + 50) -
                p_over_q * *(b + 144 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 50);
            *(b + 101 * OS1_S1 + 79) =
                prefactor_z * *(b + 101 * OS1_S1 + 51) -
                p_over_q * *(b + 144 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 51) +
                one_over_two_q * *(b + 101 * OS1_S1 + 30);
            *(b + 101 * OS1_S1 + 80) =
                prefactor_z * *(b + 101 * OS1_S1 + 52) -
                p_over_q * *(b + 144 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 31);
            *(b + 101 * OS1_S1 + 81) =
                prefactor_y * *(b + 101 * OS1_S1 + 54) -
                p_over_q * *(b + 143 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 54) +
                one_over_two_q * *(b + 101 * OS1_S1 + 34);
            *(b + 101 * OS1_S1 + 82) =
                prefactor_y * *(b + 101 * OS1_S1 + 55) -
                p_over_q * *(b + 143 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 55);
            *(b + 101 * OS1_S1 + 83) =
                prefactor_z * *(b + 101 * OS1_S1 + 55) -
                p_over_q * *(b + 144 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 101 * OS1_S1 + 34);
            *(b + 102 * OS1_S1 + 56) =
                prefactor_x * *(b + 102 * OS1_S1 + 35) -
                p_over_q * *(b + 138 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 102 * OS1_S1 + 20);
            *(b + 102 * OS1_S1 + 57) =
                prefactor_y * *(b + 102 * OS1_S1 + 35) -
                p_over_q * *(b + 144 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 35);
            *(b + 102 * OS1_S1 + 58) =
                prefactor_z * *(b + 102 * OS1_S1 + 35) -
                p_over_q * *(b + 145 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 35);
            *(b + 102 * OS1_S1 + 59) =
                prefactor_y * *(b + 102 * OS1_S1 + 36) -
                p_over_q * *(b + 144 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 36) +
                one_over_two_q * *(b + 102 * OS1_S1 + 20);
            *(b + 102 * OS1_S1 + 60) =
                prefactor_y * *(b + 102 * OS1_S1 + 37) -
                p_over_q * *(b + 144 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 37);
            *(b + 102 * OS1_S1 + 61) =
                prefactor_z * *(b + 102 * OS1_S1 + 37) -
                p_over_q * *(b + 145 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 37) +
                one_over_two_q * *(b + 102 * OS1_S1 + 20);
            *(b + 102 * OS1_S1 + 62) =
                prefactor_y * *(b + 102 * OS1_S1 + 38) -
                p_over_q * *(b + 144 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 21);
            *(b + 102 * OS1_S1 + 63) =
                prefactor_z * *(b + 102 * OS1_S1 + 38) -
                p_over_q * *(b + 145 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 38);
            *(b + 102 * OS1_S1 + 64) =
                prefactor_y * *(b + 102 * OS1_S1 + 40) -
                p_over_q * *(b + 144 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 40);
            *(b + 102 * OS1_S1 + 65) =
                prefactor_x * *(b + 102 * OS1_S1 + 44) -
                p_over_q * *(b + 138 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 29);
            *(b + 102 * OS1_S1 + 66) =
                prefactor_x * *(b + 102 * OS1_S1 + 45) -
                p_over_q * *(b + 138 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 45) +
                one_over_two_q * *(b + 102 * OS1_S1 + 30);
            *(b + 102 * OS1_S1 + 67) =
                prefactor_z * *(b + 102 * OS1_S1 + 41) -
                p_over_q * *(b + 145 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 41);
            *(b + 102 * OS1_S1 + 68) =
                prefactor_y * *(b + 102 * OS1_S1 + 43) -
                p_over_q * *(b + 144 * OS1_S1 + 43) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 43) +
                one_over_two_q * *(b + 102 * OS1_S1 + 25);
            *(b + 102 * OS1_S1 + 69) =
                prefactor_y * *(b + 102 * OS1_S1 + 44) -
                p_over_q * *(b + 144 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 44);
            *(b + 102 * OS1_S1 + 70) =
                prefactor_x * *(b + 102 * OS1_S1 + 49) -
                p_over_q * *(b + 138 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 49) +
                one_over_two_q * *(b + 102 * OS1_S1 + 34);
            *(b + 102 * OS1_S1 + 71) =
                prefactor_x * *(b + 102 * OS1_S1 + 50) -
                p_over_q * *(b + 138 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 50);
            *(b + 102 * OS1_S1 + 72) =
                prefactor_x * *(b + 102 * OS1_S1 + 51) -
                p_over_q * *(b + 138 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 51);
            *(b + 102 * OS1_S1 + 73) =
                prefactor_x * *(b + 102 * OS1_S1 + 52) -
                p_over_q * *(b + 138 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 52);
            *(b + 102 * OS1_S1 + 74) =
                prefactor_x * *(b + 102 * OS1_S1 + 53) -
                p_over_q * *(b + 138 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 53);
            *(b + 102 * OS1_S1 + 75) =
                prefactor_y * *(b + 102 * OS1_S1 + 49) -
                p_over_q * *(b + 144 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 49);
            *(b + 102 * OS1_S1 + 76) =
                prefactor_x * *(b + 102 * OS1_S1 + 55) -
                p_over_q * *(b + 138 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 55);
            *(b + 102 * OS1_S1 + 77) =
                prefactor_y * *(b + 102 * OS1_S1 + 50) -
                p_over_q * *(b + 144 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 102 * OS1_S1 + 30);
            *(b + 102 * OS1_S1 + 78) =
                prefactor_z * *(b + 102 * OS1_S1 + 50) -
                p_over_q * *(b + 145 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 50);
            *(b + 102 * OS1_S1 + 79) =
                prefactor_z * *(b + 102 * OS1_S1 + 51) -
                p_over_q * *(b + 145 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 51) +
                one_over_two_q * *(b + 102 * OS1_S1 + 30);
            *(b + 102 * OS1_S1 + 80) =
                prefactor_y * *(b + 102 * OS1_S1 + 53) -
                p_over_q * *(b + 144 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 33);
            *(b + 102 * OS1_S1 + 81) =
                prefactor_y * *(b + 102 * OS1_S1 + 54) -
                p_over_q * *(b + 144 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 54) +
                one_over_two_q * *(b + 102 * OS1_S1 + 34);
            *(b + 102 * OS1_S1 + 82) =
                prefactor_y * *(b + 102 * OS1_S1 + 55) -
                p_over_q * *(b + 144 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 55);
            *(b + 102 * OS1_S1 + 83) =
                prefactor_z * *(b + 102 * OS1_S1 + 55) -
                p_over_q * *(b + 145 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 102 * OS1_S1 + 34);
            *(b + 103 * OS1_S1 + 56) =
                prefactor_x * *(b + 103 * OS1_S1 + 35) -
                p_over_q * *(b + 139 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 20);
            *(b + 103 * OS1_S1 + 57) = prefactor_y * *(b + 103 * OS1_S1 + 35) -
                                       p_over_q * *(b + 145 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 35);
            *(b + 103 * OS1_S1 + 58) =
                prefactor_z * *(b + 103 * OS1_S1 + 35) -
                p_over_q * *(b + 146 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 35);
            *(b + 103 * OS1_S1 + 59) =
                prefactor_y * *(b + 103 * OS1_S1 + 36) -
                p_over_q * *(b + 145 * OS1_S1 + 36) +
                one_over_two_q * *(b + 70 * OS1_S1 + 36) +
                one_over_two_q * *(b + 103 * OS1_S1 + 20);
            *(b + 103 * OS1_S1 + 60) = prefactor_y * *(b + 103 * OS1_S1 + 37) -
                                       p_over_q * *(b + 145 * OS1_S1 + 37) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 37);
            *(b + 103 * OS1_S1 + 61) =
                prefactor_z * *(b + 103 * OS1_S1 + 37) -
                p_over_q * *(b + 146 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 37) +
                one_over_two_q * *(b + 103 * OS1_S1 + 20);
            *(b + 103 * OS1_S1 + 62) =
                prefactor_y * *(b + 103 * OS1_S1 + 38) -
                p_over_q * *(b + 145 * OS1_S1 + 38) +
                one_over_two_q * *(b + 70 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 21);
            *(b + 103 * OS1_S1 + 63) =
                prefactor_z * *(b + 103 * OS1_S1 + 38) -
                p_over_q * *(b + 146 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 38);
            *(b + 103 * OS1_S1 + 64) = prefactor_y * *(b + 103 * OS1_S1 + 40) -
                                       p_over_q * *(b + 145 * OS1_S1 + 40) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 40);
            *(b + 103 * OS1_S1 + 65) =
                prefactor_x * *(b + 103 * OS1_S1 + 44) -
                p_over_q * *(b + 139 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 29);
            *(b + 103 * OS1_S1 + 66) =
                prefactor_x * *(b + 103 * OS1_S1 + 45) -
                p_over_q * *(b + 139 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 45) +
                one_over_two_q * *(b + 103 * OS1_S1 + 30);
            *(b + 103 * OS1_S1 + 67) =
                prefactor_z * *(b + 103 * OS1_S1 + 41) -
                p_over_q * *(b + 146 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 41);
            *(b + 103 * OS1_S1 + 68) =
                prefactor_y * *(b + 103 * OS1_S1 + 43) -
                p_over_q * *(b + 145 * OS1_S1 + 43) +
                one_over_two_q * *(b + 70 * OS1_S1 + 43) +
                one_over_two_q * *(b + 103 * OS1_S1 + 25);
            *(b + 103 * OS1_S1 + 69) = prefactor_y * *(b + 103 * OS1_S1 + 44) -
                                       p_over_q * *(b + 145 * OS1_S1 + 44) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 44);
            *(b + 103 * OS1_S1 + 70) =
                prefactor_x * *(b + 103 * OS1_S1 + 49) -
                p_over_q * *(b + 139 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 49) +
                one_over_two_q * *(b + 103 * OS1_S1 + 34);
            *(b + 103 * OS1_S1 + 71) =
                prefactor_x * *(b + 103 * OS1_S1 + 50) -
                p_over_q * *(b + 139 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 50);
            *(b + 103 * OS1_S1 + 72) =
                prefactor_x * *(b + 103 * OS1_S1 + 51) -
                p_over_q * *(b + 139 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 51);
            *(b + 103 * OS1_S1 + 73) =
                prefactor_x * *(b + 103 * OS1_S1 + 52) -
                p_over_q * *(b + 139 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 52);
            *(b + 103 * OS1_S1 + 74) =
                prefactor_x * *(b + 103 * OS1_S1 + 53) -
                p_over_q * *(b + 139 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 53);
            *(b + 103 * OS1_S1 + 75) = prefactor_y * *(b + 103 * OS1_S1 + 49) -
                                       p_over_q * *(b + 145 * OS1_S1 + 49) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 49);
            *(b + 103 * OS1_S1 + 76) =
                prefactor_x * *(b + 103 * OS1_S1 + 55) -
                p_over_q * *(b + 139 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 55);
            *(b + 103 * OS1_S1 + 77) =
                prefactor_y * *(b + 103 * OS1_S1 + 50) -
                p_over_q * *(b + 145 * OS1_S1 + 50) +
                one_over_two_q * *(b + 70 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 30);
            *(b + 103 * OS1_S1 + 78) =
                prefactor_z * *(b + 103 * OS1_S1 + 50) -
                p_over_q * *(b + 146 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 50);
            *(b + 103 * OS1_S1 + 79) =
                prefactor_z * *(b + 103 * OS1_S1 + 51) -
                p_over_q * *(b + 146 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 51) +
                one_over_two_q * *(b + 103 * OS1_S1 + 30);
            *(b + 103 * OS1_S1 + 80) =
                prefactor_y * *(b + 103 * OS1_S1 + 53) -
                p_over_q * *(b + 145 * OS1_S1 + 53) +
                one_over_two_q * *(b + 70 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 33);
            *(b + 103 * OS1_S1 + 81) =
                prefactor_y * *(b + 103 * OS1_S1 + 54) -
                p_over_q * *(b + 145 * OS1_S1 + 54) +
                one_over_two_q * *(b + 70 * OS1_S1 + 54) +
                one_over_two_q * *(b + 103 * OS1_S1 + 34);
            *(b + 103 * OS1_S1 + 82) = prefactor_y * *(b + 103 * OS1_S1 + 55) -
                                       p_over_q * *(b + 145 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 55);
            *(b + 103 * OS1_S1 + 83) =
                prefactor_z * *(b + 103 * OS1_S1 + 55) -
                p_over_q * *(b + 146 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 34);
            *(b + 104 * OS1_S1 + 56) =
                prefactor_x * *(b + 104 * OS1_S1 + 35) -
                p_over_q * *(b + 140 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 104 * OS1_S1 + 20);
            *(b + 104 * OS1_S1 + 57) = prefactor_y * *(b + 104 * OS1_S1 + 35) -
                                       p_over_q * *(b + 146 * OS1_S1 + 35);
            *(b + 104 * OS1_S1 + 58) =
                prefactor_z * *(b + 104 * OS1_S1 + 35) -
                p_over_q * *(b + 147 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 35);
            *(b + 104 * OS1_S1 + 59) =
                prefactor_y * *(b + 104 * OS1_S1 + 36) -
                p_over_q * *(b + 146 * OS1_S1 + 36) +
                one_over_two_q * *(b + 104 * OS1_S1 + 20);
            *(b + 104 * OS1_S1 + 60) = prefactor_y * *(b + 104 * OS1_S1 + 37) -
                                       p_over_q * *(b + 146 * OS1_S1 + 37);
            *(b + 104 * OS1_S1 + 61) =
                prefactor_z * *(b + 104 * OS1_S1 + 37) -
                p_over_q * *(b + 147 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 37) +
                one_over_two_q * *(b + 104 * OS1_S1 + 20);
            *(b + 104 * OS1_S1 + 62) =
                prefactor_y * *(b + 104 * OS1_S1 + 38) -
                p_over_q * *(b + 146 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 21);
            *(b + 104 * OS1_S1 + 63) =
                prefactor_z * *(b + 104 * OS1_S1 + 38) -
                p_over_q * *(b + 147 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 38);
            *(b + 104 * OS1_S1 + 64) = prefactor_y * *(b + 104 * OS1_S1 + 40) -
                                       p_over_q * *(b + 146 * OS1_S1 + 40);
            *(b + 104 * OS1_S1 + 65) =
                prefactor_x * *(b + 104 * OS1_S1 + 44) -
                p_over_q * *(b + 140 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 29);
            *(b + 104 * OS1_S1 + 66) =
                prefactor_x * *(b + 104 * OS1_S1 + 45) -
                p_over_q * *(b + 140 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 45) +
                one_over_two_q * *(b + 104 * OS1_S1 + 30);
            *(b + 104 * OS1_S1 + 67) =
                prefactor_z * *(b + 104 * OS1_S1 + 41) -
                p_over_q * *(b + 147 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 41);
            *(b + 104 * OS1_S1 + 68) =
                prefactor_y * *(b + 104 * OS1_S1 + 43) -
                p_over_q * *(b + 146 * OS1_S1 + 43) +
                one_over_two_q * *(b + 104 * OS1_S1 + 25);
            *(b + 104 * OS1_S1 + 69) = prefactor_y * *(b + 104 * OS1_S1 + 44) -
                                       p_over_q * *(b + 146 * OS1_S1 + 44);
            *(b + 104 * OS1_S1 + 70) =
                prefactor_x * *(b + 104 * OS1_S1 + 49) -
                p_over_q * *(b + 140 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 49) +
                one_over_two_q * *(b + 104 * OS1_S1 + 34);
            *(b + 104 * OS1_S1 + 71) =
                prefactor_x * *(b + 104 * OS1_S1 + 50) -
                p_over_q * *(b + 140 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 50);
            *(b + 104 * OS1_S1 + 72) =
                prefactor_x * *(b + 104 * OS1_S1 + 51) -
                p_over_q * *(b + 140 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 51);
            *(b + 104 * OS1_S1 + 73) =
                prefactor_x * *(b + 104 * OS1_S1 + 52) -
                p_over_q * *(b + 140 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 52);
            *(b + 104 * OS1_S1 + 74) =
                prefactor_x * *(b + 104 * OS1_S1 + 53) -
                p_over_q * *(b + 140 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 53);
            *(b + 104 * OS1_S1 + 75) = prefactor_y * *(b + 104 * OS1_S1 + 49) -
                                       p_over_q * *(b + 146 * OS1_S1 + 49);
            *(b + 104 * OS1_S1 + 76) =
                prefactor_x * *(b + 104 * OS1_S1 + 55) -
                p_over_q * *(b + 140 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 55);
            *(b + 104 * OS1_S1 + 77) =
                prefactor_y * *(b + 104 * OS1_S1 + 50) -
                p_over_q * *(b + 146 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 104 * OS1_S1 + 30);
            *(b + 104 * OS1_S1 + 78) =
                prefactor_z * *(b + 104 * OS1_S1 + 50) -
                p_over_q * *(b + 147 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 50);
            *(b + 104 * OS1_S1 + 79) =
                prefactor_z * *(b + 104 * OS1_S1 + 51) -
                p_over_q * *(b + 147 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 51) +
                one_over_two_q * *(b + 104 * OS1_S1 + 30);
            *(b + 104 * OS1_S1 + 80) =
                prefactor_y * *(b + 104 * OS1_S1 + 53) -
                p_over_q * *(b + 146 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 33);
            *(b + 104 * OS1_S1 + 81) =
                prefactor_y * *(b + 104 * OS1_S1 + 54) -
                p_over_q * *(b + 146 * OS1_S1 + 54) +
                one_over_two_q * *(b + 104 * OS1_S1 + 34);
            *(b + 104 * OS1_S1 + 82) = prefactor_y * *(b + 104 * OS1_S1 + 55) -
                                       p_over_q * *(b + 146 * OS1_S1 + 55);
            *(b + 104 * OS1_S1 + 83) =
                prefactor_z * *(b + 104 * OS1_S1 + 55) -
                p_over_q * *(b + 147 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 104 * OS1_S1 + 34);
            *(b + 105 * OS1_S1 + 56) =
                prefactor_x * *(b + 105 * OS1_S1 + 35) -
                p_over_q * *(b + 141 * OS1_S1 + 35) +
                one_over_two_q * *(b + 77 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 105 * OS1_S1 + 20);
            *(b + 105 * OS1_S1 + 57) =
                prefactor_y * *(b + 105 * OS1_S1 + 35) -
                p_over_q * *(b + 148 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 35);
            *(b + 105 * OS1_S1 + 58) = prefactor_z * *(b + 105 * OS1_S1 + 35) -
                                       p_over_q * *(b + 149 * OS1_S1 + 35);
            *(b + 105 * OS1_S1 + 59) =
                prefactor_y * *(b + 105 * OS1_S1 + 36) -
                p_over_q * *(b + 148 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 36) +
                one_over_two_q * *(b + 105 * OS1_S1 + 20);
            *(b + 105 * OS1_S1 + 60) = prefactor_z * *(b + 105 * OS1_S1 + 36) -
                                       p_over_q * *(b + 149 * OS1_S1 + 36);
            *(b + 105 * OS1_S1 + 61) =
                prefactor_z * *(b + 105 * OS1_S1 + 37) -
                p_over_q * *(b + 149 * OS1_S1 + 37) +
                one_over_two_q * *(b + 105 * OS1_S1 + 20);
            *(b + 105 * OS1_S1 + 62) =
                prefactor_x * *(b + 105 * OS1_S1 + 41) -
                p_over_q * *(b + 141 * OS1_S1 + 41) +
                one_over_two_q * *(b + 77 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 26);
            *(b + 105 * OS1_S1 + 63) = prefactor_z * *(b + 105 * OS1_S1 + 38) -
                                       p_over_q * *(b + 149 * OS1_S1 + 38);
            *(b + 105 * OS1_S1 + 64) =
                prefactor_y * *(b + 105 * OS1_S1 + 40) -
                p_over_q * *(b + 148 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 40);
            *(b + 105 * OS1_S1 + 65) =
                prefactor_z * *(b + 105 * OS1_S1 + 40) -
                p_over_q * *(b + 149 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 22);
            *(b + 105 * OS1_S1 + 66) =
                prefactor_x * *(b + 105 * OS1_S1 + 45) -
                p_over_q * *(b + 141 * OS1_S1 + 45) +
                one_over_two_q * *(b + 77 * OS1_S1 + 45) +
                one_over_two_q * *(b + 105 * OS1_S1 + 30);
            *(b + 105 * OS1_S1 + 67) = prefactor_z * *(b + 105 * OS1_S1 + 41) -
                                       p_over_q * *(b + 149 * OS1_S1 + 41);
            *(b + 105 * OS1_S1 + 68) =
                prefactor_z * *(b + 105 * OS1_S1 + 42) -
                p_over_q * *(b + 149 * OS1_S1 + 42) +
                one_over_two_q * *(b + 105 * OS1_S1 + 23);
            *(b + 105 * OS1_S1 + 69) =
                prefactor_y * *(b + 105 * OS1_S1 + 44) -
                p_over_q * *(b + 148 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 44);
            *(b + 105 * OS1_S1 + 70) =
                prefactor_x * *(b + 105 * OS1_S1 + 49) -
                p_over_q * *(b + 141 * OS1_S1 + 49) +
                one_over_two_q * *(b + 77 * OS1_S1 + 49) +
                one_over_two_q * *(b + 105 * OS1_S1 + 34);
            *(b + 105 * OS1_S1 + 71) = prefactor_x * *(b + 105 * OS1_S1 + 50) -
                                       p_over_q * *(b + 141 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 50);
            *(b + 105 * OS1_S1 + 72) = prefactor_z * *(b + 105 * OS1_S1 + 45) -
                                       p_over_q * *(b + 149 * OS1_S1 + 45);
            *(b + 105 * OS1_S1 + 73) = prefactor_x * *(b + 105 * OS1_S1 + 52) -
                                       p_over_q * *(b + 141 * OS1_S1 + 52) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 52);
            *(b + 105 * OS1_S1 + 74) = prefactor_x * *(b + 105 * OS1_S1 + 53) -
                                       p_over_q * *(b + 141 * OS1_S1 + 53) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 53);
            *(b + 105 * OS1_S1 + 75) = prefactor_x * *(b + 105 * OS1_S1 + 54) -
                                       p_over_q * *(b + 141 * OS1_S1 + 54) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 54);
            *(b + 105 * OS1_S1 + 76) = prefactor_x * *(b + 105 * OS1_S1 + 55) -
                                       p_over_q * *(b + 141 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 55);
            *(b + 105 * OS1_S1 + 77) =
                prefactor_y * *(b + 105 * OS1_S1 + 50) -
                p_over_q * *(b + 148 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 105 * OS1_S1 + 30);
            *(b + 105 * OS1_S1 + 78) = prefactor_z * *(b + 105 * OS1_S1 + 50) -
                                       p_over_q * *(b + 149 * OS1_S1 + 50);
            *(b + 105 * OS1_S1 + 79) =
                prefactor_z * *(b + 105 * OS1_S1 + 51) -
                p_over_q * *(b + 149 * OS1_S1 + 51) +
                one_over_two_q * *(b + 105 * OS1_S1 + 30);
            *(b + 105 * OS1_S1 + 80) =
                prefactor_z * *(b + 105 * OS1_S1 + 52) -
                p_over_q * *(b + 149 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 31);
            *(b + 105 * OS1_S1 + 81) =
                prefactor_y * *(b + 105 * OS1_S1 + 54) -
                p_over_q * *(b + 148 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 54) +
                one_over_two_q * *(b + 105 * OS1_S1 + 34);
            *(b + 105 * OS1_S1 + 82) =
                prefactor_y * *(b + 105 * OS1_S1 + 55) -
                p_over_q * *(b + 148 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 55);
            *(b + 105 * OS1_S1 + 83) =
                prefactor_z * *(b + 105 * OS1_S1 + 55) -
                p_over_q * *(b + 149 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 105 * OS1_S1 + 34);
            *(b + 106 * OS1_S1 + 56) =
                prefactor_x * *(b + 106 * OS1_S1 + 35) -
                p_over_q * *(b + 142 * OS1_S1 + 35) +
                one_over_two_q * *(b + 78 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 106 * OS1_S1 + 20);
            *(b + 106 * OS1_S1 + 57) =
                prefactor_y * *(b + 106 * OS1_S1 + 35) -
                p_over_q * *(b + 149 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 35);
            *(b + 106 * OS1_S1 + 58) = prefactor_z * *(b + 106 * OS1_S1 + 35) -
                                       p_over_q * *(b + 150 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 35);
            *(b + 106 * OS1_S1 + 59) =
                prefactor_y * *(b + 106 * OS1_S1 + 36) -
                p_over_q * *(b + 149 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 36) +
                one_over_two_q * *(b + 106 * OS1_S1 + 20);
            *(b + 106 * OS1_S1 + 60) = prefactor_z * *(b + 106 * OS1_S1 + 36) -
                                       p_over_q * *(b + 150 * OS1_S1 + 36) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 36);
            *(b + 106 * OS1_S1 + 61) =
                prefactor_z * *(b + 106 * OS1_S1 + 37) -
                p_over_q * *(b + 150 * OS1_S1 + 37) +
                one_over_two_q * *(b + 71 * OS1_S1 + 37) +
                one_over_two_q * *(b + 106 * OS1_S1 + 20);
            *(b + 106 * OS1_S1 + 62) =
                prefactor_x * *(b + 106 * OS1_S1 + 41) -
                p_over_q * *(b + 142 * OS1_S1 + 41) +
                one_over_two_q * *(b + 78 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 26);
            *(b + 106 * OS1_S1 + 63) = prefactor_z * *(b + 106 * OS1_S1 + 38) -
                                       p_over_q * *(b + 150 * OS1_S1 + 38) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 38);
            *(b + 106 * OS1_S1 + 64) =
                prefactor_y * *(b + 106 * OS1_S1 + 40) -
                p_over_q * *(b + 149 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 40);
            *(b + 106 * OS1_S1 + 65) =
                prefactor_z * *(b + 106 * OS1_S1 + 40) -
                p_over_q * *(b + 150 * OS1_S1 + 40) +
                one_over_two_q * *(b + 71 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 22);
            *(b + 106 * OS1_S1 + 66) =
                prefactor_x * *(b + 106 * OS1_S1 + 45) -
                p_over_q * *(b + 142 * OS1_S1 + 45) +
                one_over_two_q * *(b + 78 * OS1_S1 + 45) +
                one_over_two_q * *(b + 106 * OS1_S1 + 30);
            *(b + 106 * OS1_S1 + 67) = prefactor_z * *(b + 106 * OS1_S1 + 41) -
                                       p_over_q * *(b + 150 * OS1_S1 + 41) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 41);
            *(b + 106 * OS1_S1 + 68) =
                prefactor_z * *(b + 106 * OS1_S1 + 42) -
                p_over_q * *(b + 150 * OS1_S1 + 42) +
                one_over_two_q * *(b + 71 * OS1_S1 + 42) +
                one_over_two_q * *(b + 106 * OS1_S1 + 23);
            *(b + 106 * OS1_S1 + 69) =
                prefactor_y * *(b + 106 * OS1_S1 + 44) -
                p_over_q * *(b + 149 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 44);
            *(b + 106 * OS1_S1 + 70) =
                prefactor_x * *(b + 106 * OS1_S1 + 49) -
                p_over_q * *(b + 142 * OS1_S1 + 49) +
                one_over_two_q * *(b + 78 * OS1_S1 + 49) +
                one_over_two_q * *(b + 106 * OS1_S1 + 34);
            *(b + 106 * OS1_S1 + 71) = prefactor_x * *(b + 106 * OS1_S1 + 50) -
                                       p_over_q * *(b + 142 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 50);
            *(b + 106 * OS1_S1 + 72) = prefactor_z * *(b + 106 * OS1_S1 + 45) -
                                       p_over_q * *(b + 150 * OS1_S1 + 45) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 45);
            *(b + 106 * OS1_S1 + 73) = prefactor_x * *(b + 106 * OS1_S1 + 52) -
                                       p_over_q * *(b + 142 * OS1_S1 + 52) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 52);
            *(b + 106 * OS1_S1 + 74) = prefactor_x * *(b + 106 * OS1_S1 + 53) -
                                       p_over_q * *(b + 142 * OS1_S1 + 53) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 53);
            *(b + 106 * OS1_S1 + 75) = prefactor_x * *(b + 106 * OS1_S1 + 54) -
                                       p_over_q * *(b + 142 * OS1_S1 + 54) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 54);
            *(b + 106 * OS1_S1 + 76) = prefactor_x * *(b + 106 * OS1_S1 + 55) -
                                       p_over_q * *(b + 142 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 55);
            *(b + 106 * OS1_S1 + 77) =
                prefactor_y * *(b + 106 * OS1_S1 + 50) -
                p_over_q * *(b + 149 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 106 * OS1_S1 + 30);
            *(b + 106 * OS1_S1 + 78) = prefactor_z * *(b + 106 * OS1_S1 + 50) -
                                       p_over_q * *(b + 150 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 50);
            *(b + 106 * OS1_S1 + 79) =
                prefactor_z * *(b + 106 * OS1_S1 + 51) -
                p_over_q * *(b + 150 * OS1_S1 + 51) +
                one_over_two_q * *(b + 71 * OS1_S1 + 51) +
                one_over_two_q * *(b + 106 * OS1_S1 + 30);
            *(b + 106 * OS1_S1 + 80) =
                prefactor_z * *(b + 106 * OS1_S1 + 52) -
                p_over_q * *(b + 150 * OS1_S1 + 52) +
                one_over_two_q * *(b + 71 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 31);
            *(b + 106 * OS1_S1 + 81) =
                prefactor_y * *(b + 106 * OS1_S1 + 54) -
                p_over_q * *(b + 149 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 54) +
                one_over_two_q * *(b + 106 * OS1_S1 + 34);
            *(b + 106 * OS1_S1 + 82) =
                prefactor_y * *(b + 106 * OS1_S1 + 55) -
                p_over_q * *(b + 149 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 55);
            *(b + 106 * OS1_S1 + 83) =
                prefactor_z * *(b + 106 * OS1_S1 + 55) -
                p_over_q * *(b + 150 * OS1_S1 + 55) +
                one_over_two_q * *(b + 71 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 106 * OS1_S1 + 34);
            *(b + 107 * OS1_S1 + 56) =
                prefactor_x * *(b + 107 * OS1_S1 + 35) -
                p_over_q * *(b + 143 * OS1_S1 + 35) +
                one_over_two_q * *(b + 79 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 20);
            *(b + 107 * OS1_S1 + 57) =
                prefactor_y * *(b + 107 * OS1_S1 + 35) -
                p_over_q * *(b + 150 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 35);
            *(b + 107 * OS1_S1 + 58) =
                prefactor_z * *(b + 107 * OS1_S1 + 35) -
                p_over_q * *(b + 151 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 35);
            *(b + 107 * OS1_S1 + 59) =
                prefactor_y * *(b + 107 * OS1_S1 + 36) -
                p_over_q * *(b + 150 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 36) +
                one_over_two_q * *(b + 107 * OS1_S1 + 20);
            *(b + 107 * OS1_S1 + 60) =
                prefactor_z * *(b + 107 * OS1_S1 + 36) -
                p_over_q * *(b + 151 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 36);
            *(b + 107 * OS1_S1 + 61) =
                prefactor_z * *(b + 107 * OS1_S1 + 37) -
                p_over_q * *(b + 151 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 37) +
                one_over_two_q * *(b + 107 * OS1_S1 + 20);
            *(b + 107 * OS1_S1 + 62) =
                prefactor_x * *(b + 107 * OS1_S1 + 41) -
                p_over_q * *(b + 143 * OS1_S1 + 41) +
                one_over_two_q * *(b + 79 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 26);
            *(b + 107 * OS1_S1 + 63) =
                prefactor_z * *(b + 107 * OS1_S1 + 38) -
                p_over_q * *(b + 151 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 38);
            *(b + 107 * OS1_S1 + 64) =
                prefactor_y * *(b + 107 * OS1_S1 + 40) -
                p_over_q * *(b + 150 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 40);
            *(b + 107 * OS1_S1 + 65) =
                prefactor_x * *(b + 107 * OS1_S1 + 44) -
                p_over_q * *(b + 143 * OS1_S1 + 44) +
                one_over_two_q * *(b + 79 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 29);
            *(b + 107 * OS1_S1 + 66) =
                prefactor_x * *(b + 107 * OS1_S1 + 45) -
                p_over_q * *(b + 143 * OS1_S1 + 45) +
                one_over_two_q * *(b + 79 * OS1_S1 + 45) +
                one_over_two_q * *(b + 107 * OS1_S1 + 30);
            *(b + 107 * OS1_S1 + 67) =
                prefactor_z * *(b + 107 * OS1_S1 + 41) -
                p_over_q * *(b + 151 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 41);
            *(b + 107 * OS1_S1 + 68) =
                prefactor_x * *(b + 107 * OS1_S1 + 47) -
                p_over_q * *(b + 143 * OS1_S1 + 47) +
                one_over_two_q * *(b + 79 * OS1_S1 + 47) +
                one_over_two_q * *(b + 107 * OS1_S1 + 32);
            *(b + 107 * OS1_S1 + 69) =
                prefactor_y * *(b + 107 * OS1_S1 + 44) -
                p_over_q * *(b + 150 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 44);
            *(b + 107 * OS1_S1 + 70) =
                prefactor_x * *(b + 107 * OS1_S1 + 49) -
                p_over_q * *(b + 143 * OS1_S1 + 49) +
                one_over_two_q * *(b + 79 * OS1_S1 + 49) +
                one_over_two_q * *(b + 107 * OS1_S1 + 34);
            *(b + 107 * OS1_S1 + 71) = prefactor_x * *(b + 107 * OS1_S1 + 50) -
                                       p_over_q * *(b + 143 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 50);
            *(b + 107 * OS1_S1 + 72) = prefactor_x * *(b + 107 * OS1_S1 + 51) -
                                       p_over_q * *(b + 143 * OS1_S1 + 51) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 51);
            *(b + 107 * OS1_S1 + 73) = prefactor_x * *(b + 107 * OS1_S1 + 52) -
                                       p_over_q * *(b + 143 * OS1_S1 + 52) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 52);
            *(b + 107 * OS1_S1 + 74) = prefactor_x * *(b + 107 * OS1_S1 + 53) -
                                       p_over_q * *(b + 143 * OS1_S1 + 53) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 53);
            *(b + 107 * OS1_S1 + 75) = prefactor_x * *(b + 107 * OS1_S1 + 54) -
                                       p_over_q * *(b + 143 * OS1_S1 + 54) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 54);
            *(b + 107 * OS1_S1 + 76) = prefactor_x * *(b + 107 * OS1_S1 + 55) -
                                       p_over_q * *(b + 143 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 55);
            *(b + 107 * OS1_S1 + 77) =
                prefactor_y * *(b + 107 * OS1_S1 + 50) -
                p_over_q * *(b + 150 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 30);
            *(b + 107 * OS1_S1 + 78) =
                prefactor_z * *(b + 107 * OS1_S1 + 50) -
                p_over_q * *(b + 151 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 50);
            *(b + 107 * OS1_S1 + 79) =
                prefactor_z * *(b + 107 * OS1_S1 + 51) -
                p_over_q * *(b + 151 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 51) +
                one_over_two_q * *(b + 107 * OS1_S1 + 30);
            *(b + 107 * OS1_S1 + 80) =
                prefactor_z * *(b + 107 * OS1_S1 + 52) -
                p_over_q * *(b + 151 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 31);
            *(b + 107 * OS1_S1 + 81) =
                prefactor_y * *(b + 107 * OS1_S1 + 54) -
                p_over_q * *(b + 150 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 54) +
                one_over_two_q * *(b + 107 * OS1_S1 + 34);
            *(b + 107 * OS1_S1 + 82) =
                prefactor_y * *(b + 107 * OS1_S1 + 55) -
                p_over_q * *(b + 150 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 55);
            *(b + 107 * OS1_S1 + 83) =
                prefactor_z * *(b + 107 * OS1_S1 + 55) -
                p_over_q * *(b + 151 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 34);
            *(b + 108 * OS1_S1 + 56) =
                prefactor_x * *(b + 108 * OS1_S1 + 35) -
                p_over_q * *(b + 144 * OS1_S1 + 35) +
                one_over_two_q * *(b + 80 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 108 * OS1_S1 + 20);
            *(b + 108 * OS1_S1 + 57) =
                prefactor_y * *(b + 108 * OS1_S1 + 35) -
                p_over_q * *(b + 151 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 35);
            *(b + 108 * OS1_S1 + 58) =
                prefactor_z * *(b + 108 * OS1_S1 + 35) -
                p_over_q * *(b + 152 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 35);
            *(b + 108 * OS1_S1 + 59) =
                prefactor_y * *(b + 108 * OS1_S1 + 36) -
                p_over_q * *(b + 151 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 36) +
                one_over_two_q * *(b + 108 * OS1_S1 + 20);
            *(b + 108 * OS1_S1 + 60) =
                prefactor_z * *(b + 108 * OS1_S1 + 36) -
                p_over_q * *(b + 152 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 36);
            *(b + 108 * OS1_S1 + 61) =
                prefactor_z * *(b + 108 * OS1_S1 + 37) -
                p_over_q * *(b + 152 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 37) +
                one_over_two_q * *(b + 108 * OS1_S1 + 20);
            *(b + 108 * OS1_S1 + 62) =
                prefactor_x * *(b + 108 * OS1_S1 + 41) -
                p_over_q * *(b + 144 * OS1_S1 + 41) +
                one_over_two_q * *(b + 80 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 26);
            *(b + 108 * OS1_S1 + 63) =
                prefactor_z * *(b + 108 * OS1_S1 + 38) -
                p_over_q * *(b + 152 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 38);
            *(b + 108 * OS1_S1 + 64) =
                prefactor_y * *(b + 108 * OS1_S1 + 40) -
                p_over_q * *(b + 151 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 40);
            *(b + 108 * OS1_S1 + 65) =
                prefactor_x * *(b + 108 * OS1_S1 + 44) -
                p_over_q * *(b + 144 * OS1_S1 + 44) +
                one_over_two_q * *(b + 80 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 29);
            *(b + 108 * OS1_S1 + 66) =
                prefactor_x * *(b + 108 * OS1_S1 + 45) -
                p_over_q * *(b + 144 * OS1_S1 + 45) +
                one_over_two_q * *(b + 80 * OS1_S1 + 45) +
                one_over_two_q * *(b + 108 * OS1_S1 + 30);
            *(b + 108 * OS1_S1 + 67) =
                prefactor_z * *(b + 108 * OS1_S1 + 41) -
                p_over_q * *(b + 152 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 41);
            *(b + 108 * OS1_S1 + 68) =
                prefactor_x * *(b + 108 * OS1_S1 + 47) -
                p_over_q * *(b + 144 * OS1_S1 + 47) +
                one_over_two_q * *(b + 80 * OS1_S1 + 47) +
                one_over_two_q * *(b + 108 * OS1_S1 + 32);
            *(b + 108 * OS1_S1 + 69) =
                prefactor_y * *(b + 108 * OS1_S1 + 44) -
                p_over_q * *(b + 151 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 44);
            *(b + 108 * OS1_S1 + 70) =
                prefactor_x * *(b + 108 * OS1_S1 + 49) -
                p_over_q * *(b + 144 * OS1_S1 + 49) +
                one_over_two_q * *(b + 80 * OS1_S1 + 49) +
                one_over_two_q * *(b + 108 * OS1_S1 + 34);
            *(b + 108 * OS1_S1 + 71) = prefactor_x * *(b + 108 * OS1_S1 + 50) -
                                       p_over_q * *(b + 144 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 50);
            *(b + 108 * OS1_S1 + 72) = prefactor_x * *(b + 108 * OS1_S1 + 51) -
                                       p_over_q * *(b + 144 * OS1_S1 + 51) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 51);
            *(b + 108 * OS1_S1 + 73) = prefactor_x * *(b + 108 * OS1_S1 + 52) -
                                       p_over_q * *(b + 144 * OS1_S1 + 52) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 52);
            *(b + 108 * OS1_S1 + 74) = prefactor_x * *(b + 108 * OS1_S1 + 53) -
                                       p_over_q * *(b + 144 * OS1_S1 + 53) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 53);
            *(b + 108 * OS1_S1 + 75) = prefactor_x * *(b + 108 * OS1_S1 + 54) -
                                       p_over_q * *(b + 144 * OS1_S1 + 54) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 54);
            *(b + 108 * OS1_S1 + 76) = prefactor_x * *(b + 108 * OS1_S1 + 55) -
                                       p_over_q * *(b + 144 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 55);
            *(b + 108 * OS1_S1 + 77) =
                prefactor_y * *(b + 108 * OS1_S1 + 50) -
                p_over_q * *(b + 151 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 108 * OS1_S1 + 30);
            *(b + 108 * OS1_S1 + 78) =
                prefactor_z * *(b + 108 * OS1_S1 + 50) -
                p_over_q * *(b + 152 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 50);
            *(b + 108 * OS1_S1 + 79) =
                prefactor_z * *(b + 108 * OS1_S1 + 51) -
                p_over_q * *(b + 152 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 51) +
                one_over_two_q * *(b + 108 * OS1_S1 + 30);
            *(b + 108 * OS1_S1 + 80) =
                prefactor_z * *(b + 108 * OS1_S1 + 52) -
                p_over_q * *(b + 152 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 31);
            *(b + 108 * OS1_S1 + 81) =
                prefactor_y * *(b + 108 * OS1_S1 + 54) -
                p_over_q * *(b + 151 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 54) +
                one_over_two_q * *(b + 108 * OS1_S1 + 34);
            *(b + 108 * OS1_S1 + 82) =
                prefactor_y * *(b + 108 * OS1_S1 + 55) -
                p_over_q * *(b + 151 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 55);
            *(b + 108 * OS1_S1 + 83) =
                prefactor_z * *(b + 108 * OS1_S1 + 55) -
                p_over_q * *(b + 152 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 108 * OS1_S1 + 34);
            *(b + 109 * OS1_S1 + 56) =
                prefactor_x * *(b + 109 * OS1_S1 + 35) -
                p_over_q * *(b + 145 * OS1_S1 + 35) +
                one_over_two_q * *(b + 81 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 20);
            *(b + 109 * OS1_S1 + 57) =
                prefactor_y * *(b + 109 * OS1_S1 + 35) -
                p_over_q * *(b + 152 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 35);
            *(b + 109 * OS1_S1 + 58) =
                prefactor_z * *(b + 109 * OS1_S1 + 35) -
                p_over_q * *(b + 153 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 35);
            *(b + 109 * OS1_S1 + 59) =
                prefactor_y * *(b + 109 * OS1_S1 + 36) -
                p_over_q * *(b + 152 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 36) +
                one_over_two_q * *(b + 109 * OS1_S1 + 20);
            *(b + 109 * OS1_S1 + 60) =
                prefactor_y * *(b + 109 * OS1_S1 + 37) -
                p_over_q * *(b + 152 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 37);
            *(b + 109 * OS1_S1 + 61) =
                prefactor_z * *(b + 109 * OS1_S1 + 37) -
                p_over_q * *(b + 153 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 37) +
                one_over_two_q * *(b + 109 * OS1_S1 + 20);
            *(b + 109 * OS1_S1 + 62) =
                prefactor_x * *(b + 109 * OS1_S1 + 41) -
                p_over_q * *(b + 145 * OS1_S1 + 41) +
                one_over_two_q * *(b + 81 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 26);
            *(b + 109 * OS1_S1 + 63) =
                prefactor_z * *(b + 109 * OS1_S1 + 38) -
                p_over_q * *(b + 153 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 38);
            *(b + 109 * OS1_S1 + 64) =
                prefactor_y * *(b + 109 * OS1_S1 + 40) -
                p_over_q * *(b + 152 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 40);
            *(b + 109 * OS1_S1 + 65) =
                prefactor_x * *(b + 109 * OS1_S1 + 44) -
                p_over_q * *(b + 145 * OS1_S1 + 44) +
                one_over_two_q * *(b + 81 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 29);
            *(b + 109 * OS1_S1 + 66) =
                prefactor_x * *(b + 109 * OS1_S1 + 45) -
                p_over_q * *(b + 145 * OS1_S1 + 45) +
                one_over_two_q * *(b + 81 * OS1_S1 + 45) +
                one_over_two_q * *(b + 109 * OS1_S1 + 30);
            *(b + 109 * OS1_S1 + 67) =
                prefactor_z * *(b + 109 * OS1_S1 + 41) -
                p_over_q * *(b + 153 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 41);
            *(b + 109 * OS1_S1 + 68) =
                prefactor_x * *(b + 109 * OS1_S1 + 47) -
                p_over_q * *(b + 145 * OS1_S1 + 47) +
                one_over_two_q * *(b + 81 * OS1_S1 + 47) +
                one_over_two_q * *(b + 109 * OS1_S1 + 32);
            *(b + 109 * OS1_S1 + 69) =
                prefactor_y * *(b + 109 * OS1_S1 + 44) -
                p_over_q * *(b + 152 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 44);
            *(b + 109 * OS1_S1 + 70) =
                prefactor_x * *(b + 109 * OS1_S1 + 49) -
                p_over_q * *(b + 145 * OS1_S1 + 49) +
                one_over_two_q * *(b + 81 * OS1_S1 + 49) +
                one_over_two_q * *(b + 109 * OS1_S1 + 34);
            *(b + 109 * OS1_S1 + 71) = prefactor_x * *(b + 109 * OS1_S1 + 50) -
                                       p_over_q * *(b + 145 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 50);
            *(b + 109 * OS1_S1 + 72) = prefactor_x * *(b + 109 * OS1_S1 + 51) -
                                       p_over_q * *(b + 145 * OS1_S1 + 51) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 51);
            *(b + 109 * OS1_S1 + 73) = prefactor_x * *(b + 109 * OS1_S1 + 52) -
                                       p_over_q * *(b + 145 * OS1_S1 + 52) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 52);
            *(b + 109 * OS1_S1 + 74) = prefactor_x * *(b + 109 * OS1_S1 + 53) -
                                       p_over_q * *(b + 145 * OS1_S1 + 53) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 53);
            *(b + 109 * OS1_S1 + 75) = prefactor_x * *(b + 109 * OS1_S1 + 54) -
                                       p_over_q * *(b + 145 * OS1_S1 + 54) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 54);
            *(b + 109 * OS1_S1 + 76) = prefactor_x * *(b + 109 * OS1_S1 + 55) -
                                       p_over_q * *(b + 145 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 55);
            *(b + 109 * OS1_S1 + 77) =
                prefactor_y * *(b + 109 * OS1_S1 + 50) -
                p_over_q * *(b + 152 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 30);
            *(b + 109 * OS1_S1 + 78) =
                prefactor_z * *(b + 109 * OS1_S1 + 50) -
                p_over_q * *(b + 153 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 50);
            *(b + 109 * OS1_S1 + 79) =
                prefactor_z * *(b + 109 * OS1_S1 + 51) -
                p_over_q * *(b + 153 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 51) +
                one_over_two_q * *(b + 109 * OS1_S1 + 30);
            *(b + 109 * OS1_S1 + 80) =
                prefactor_y * *(b + 109 * OS1_S1 + 53) -
                p_over_q * *(b + 152 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 33);
            *(b + 109 * OS1_S1 + 81) =
                prefactor_y * *(b + 109 * OS1_S1 + 54) -
                p_over_q * *(b + 152 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 54) +
                one_over_two_q * *(b + 109 * OS1_S1 + 34);
            *(b + 109 * OS1_S1 + 82) =
                prefactor_y * *(b + 109 * OS1_S1 + 55) -
                p_over_q * *(b + 152 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 55);
            *(b + 109 * OS1_S1 + 83) =
                prefactor_z * *(b + 109 * OS1_S1 + 55) -
                p_over_q * *(b + 153 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 34);
            *(b + 110 * OS1_S1 + 56) =
                prefactor_x * *(b + 110 * OS1_S1 + 35) -
                p_over_q * *(b + 146 * OS1_S1 + 35) +
                one_over_two_q * *(b + 82 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 110 * OS1_S1 + 20);
            *(b + 110 * OS1_S1 + 57) = prefactor_y * *(b + 110 * OS1_S1 + 35) -
                                       p_over_q * *(b + 153 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 35);
            *(b + 110 * OS1_S1 + 58) =
                prefactor_z * *(b + 110 * OS1_S1 + 35) -
                p_over_q * *(b + 154 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 35);
            *(b + 110 * OS1_S1 + 59) =
                prefactor_y * *(b + 110 * OS1_S1 + 36) -
                p_over_q * *(b + 153 * OS1_S1 + 36) +
                one_over_two_q * *(b + 76 * OS1_S1 + 36) +
                one_over_two_q * *(b + 110 * OS1_S1 + 20);
            *(b + 110 * OS1_S1 + 60) = prefactor_y * *(b + 110 * OS1_S1 + 37) -
                                       p_over_q * *(b + 153 * OS1_S1 + 37) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 37);
            *(b + 110 * OS1_S1 + 61) =
                prefactor_z * *(b + 110 * OS1_S1 + 37) -
                p_over_q * *(b + 154 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 37) +
                one_over_two_q * *(b + 110 * OS1_S1 + 20);
            *(b + 110 * OS1_S1 + 62) =
                prefactor_y * *(b + 110 * OS1_S1 + 38) -
                p_over_q * *(b + 153 * OS1_S1 + 38) +
                one_over_two_q * *(b + 76 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 21);
            *(b + 110 * OS1_S1 + 63) =
                prefactor_z * *(b + 110 * OS1_S1 + 38) -
                p_over_q * *(b + 154 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 38);
            *(b + 110 * OS1_S1 + 64) = prefactor_y * *(b + 110 * OS1_S1 + 40) -
                                       p_over_q * *(b + 153 * OS1_S1 + 40) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 40);
            *(b + 110 * OS1_S1 + 65) =
                prefactor_x * *(b + 110 * OS1_S1 + 44) -
                p_over_q * *(b + 146 * OS1_S1 + 44) +
                one_over_two_q * *(b + 82 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 29);
            *(b + 110 * OS1_S1 + 66) =
                prefactor_x * *(b + 110 * OS1_S1 + 45) -
                p_over_q * *(b + 146 * OS1_S1 + 45) +
                one_over_two_q * *(b + 82 * OS1_S1 + 45) +
                one_over_two_q * *(b + 110 * OS1_S1 + 30);
            *(b + 110 * OS1_S1 + 67) =
                prefactor_z * *(b + 110 * OS1_S1 + 41) -
                p_over_q * *(b + 154 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 41);
            *(b + 110 * OS1_S1 + 68) =
                prefactor_y * *(b + 110 * OS1_S1 + 43) -
                p_over_q * *(b + 153 * OS1_S1 + 43) +
                one_over_two_q * *(b + 76 * OS1_S1 + 43) +
                one_over_two_q * *(b + 110 * OS1_S1 + 25);
            *(b + 110 * OS1_S1 + 69) = prefactor_y * *(b + 110 * OS1_S1 + 44) -
                                       p_over_q * *(b + 153 * OS1_S1 + 44) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 44);
            *(b + 110 * OS1_S1 + 70) =
                prefactor_x * *(b + 110 * OS1_S1 + 49) -
                p_over_q * *(b + 146 * OS1_S1 + 49) +
                one_over_two_q * *(b + 82 * OS1_S1 + 49) +
                one_over_two_q * *(b + 110 * OS1_S1 + 34);
            *(b + 110 * OS1_S1 + 71) = prefactor_x * *(b + 110 * OS1_S1 + 50) -
                                       p_over_q * *(b + 146 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 50);
            *(b + 110 * OS1_S1 + 72) = prefactor_x * *(b + 110 * OS1_S1 + 51) -
                                       p_over_q * *(b + 146 * OS1_S1 + 51) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 51);
            *(b + 110 * OS1_S1 + 73) = prefactor_x * *(b + 110 * OS1_S1 + 52) -
                                       p_over_q * *(b + 146 * OS1_S1 + 52) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 52);
            *(b + 110 * OS1_S1 + 74) = prefactor_x * *(b + 110 * OS1_S1 + 53) -
                                       p_over_q * *(b + 146 * OS1_S1 + 53) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 53);
            *(b + 110 * OS1_S1 + 75) = prefactor_y * *(b + 110 * OS1_S1 + 49) -
                                       p_over_q * *(b + 153 * OS1_S1 + 49) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 49);
            *(b + 110 * OS1_S1 + 76) = prefactor_x * *(b + 110 * OS1_S1 + 55) -
                                       p_over_q * *(b + 146 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 55);
            *(b + 110 * OS1_S1 + 77) =
                prefactor_y * *(b + 110 * OS1_S1 + 50) -
                p_over_q * *(b + 153 * OS1_S1 + 50) +
                one_over_two_q * *(b + 76 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 110 * OS1_S1 + 30);
            *(b + 110 * OS1_S1 + 78) =
                prefactor_z * *(b + 110 * OS1_S1 + 50) -
                p_over_q * *(b + 154 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 50);
            *(b + 110 * OS1_S1 + 79) =
                prefactor_z * *(b + 110 * OS1_S1 + 51) -
                p_over_q * *(b + 154 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 51) +
                one_over_two_q * *(b + 110 * OS1_S1 + 30);
            *(b + 110 * OS1_S1 + 80) =
                prefactor_y * *(b + 110 * OS1_S1 + 53) -
                p_over_q * *(b + 153 * OS1_S1 + 53) +
                one_over_two_q * *(b + 76 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 33);
            *(b + 110 * OS1_S1 + 81) =
                prefactor_y * *(b + 110 * OS1_S1 + 54) -
                p_over_q * *(b + 153 * OS1_S1 + 54) +
                one_over_two_q * *(b + 76 * OS1_S1 + 54) +
                one_over_two_q * *(b + 110 * OS1_S1 + 34);
            *(b + 110 * OS1_S1 + 82) = prefactor_y * *(b + 110 * OS1_S1 + 55) -
                                       p_over_q * *(b + 153 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 55);
            *(b + 110 * OS1_S1 + 83) =
                prefactor_z * *(b + 110 * OS1_S1 + 55) -
                p_over_q * *(b + 154 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 110 * OS1_S1 + 34);
            *(b + 111 * OS1_S1 + 56) =
                prefactor_x * *(b + 111 * OS1_S1 + 35) -
                p_over_q * *(b + 147 * OS1_S1 + 35) +
                one_over_two_q * *(b + 83 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 111 * OS1_S1 + 20);
            *(b + 111 * OS1_S1 + 57) = prefactor_y * *(b + 111 * OS1_S1 + 35) -
                                       p_over_q * *(b + 154 * OS1_S1 + 35);
            *(b + 111 * OS1_S1 + 58) =
                prefactor_z * *(b + 111 * OS1_S1 + 35) -
                p_over_q * *(b + 155 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 35);
            *(b + 111 * OS1_S1 + 59) =
                prefactor_y * *(b + 111 * OS1_S1 + 36) -
                p_over_q * *(b + 154 * OS1_S1 + 36) +
                one_over_two_q * *(b + 111 * OS1_S1 + 20);
            *(b + 111 * OS1_S1 + 60) = prefactor_y * *(b + 111 * OS1_S1 + 37) -
                                       p_over_q * *(b + 154 * OS1_S1 + 37);
            *(b + 111 * OS1_S1 + 61) =
                prefactor_z * *(b + 111 * OS1_S1 + 37) -
                p_over_q * *(b + 155 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 37) +
                one_over_two_q * *(b + 111 * OS1_S1 + 20);
            *(b + 111 * OS1_S1 + 62) =
                prefactor_y * *(b + 111 * OS1_S1 + 38) -
                p_over_q * *(b + 154 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 21);
            *(b + 111 * OS1_S1 + 63) =
                prefactor_z * *(b + 111 * OS1_S1 + 38) -
                p_over_q * *(b + 155 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 38);
            *(b + 111 * OS1_S1 + 64) = prefactor_y * *(b + 111 * OS1_S1 + 40) -
                                       p_over_q * *(b + 154 * OS1_S1 + 40);
            *(b + 111 * OS1_S1 + 65) =
                prefactor_x * *(b + 111 * OS1_S1 + 44) -
                p_over_q * *(b + 147 * OS1_S1 + 44) +
                one_over_two_q * *(b + 83 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 29);
            *(b + 111 * OS1_S1 + 66) =
                prefactor_x * *(b + 111 * OS1_S1 + 45) -
                p_over_q * *(b + 147 * OS1_S1 + 45) +
                one_over_two_q * *(b + 83 * OS1_S1 + 45) +
                one_over_two_q * *(b + 111 * OS1_S1 + 30);
            *(b + 111 * OS1_S1 + 67) =
                prefactor_z * *(b + 111 * OS1_S1 + 41) -
                p_over_q * *(b + 155 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 41);
            *(b + 111 * OS1_S1 + 68) =
                prefactor_y * *(b + 111 * OS1_S1 + 43) -
                p_over_q * *(b + 154 * OS1_S1 + 43) +
                one_over_two_q * *(b + 111 * OS1_S1 + 25);
            *(b + 111 * OS1_S1 + 69) = prefactor_y * *(b + 111 * OS1_S1 + 44) -
                                       p_over_q * *(b + 154 * OS1_S1 + 44);
            *(b + 111 * OS1_S1 + 70) =
                prefactor_x * *(b + 111 * OS1_S1 + 49) -
                p_over_q * *(b + 147 * OS1_S1 + 49) +
                one_over_two_q * *(b + 83 * OS1_S1 + 49) +
                one_over_two_q * *(b + 111 * OS1_S1 + 34);
            *(b + 111 * OS1_S1 + 71) = prefactor_x * *(b + 111 * OS1_S1 + 50) -
                                       p_over_q * *(b + 147 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 50);
            *(b + 111 * OS1_S1 + 72) = prefactor_x * *(b + 111 * OS1_S1 + 51) -
                                       p_over_q * *(b + 147 * OS1_S1 + 51) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 51);
            *(b + 111 * OS1_S1 + 73) = prefactor_x * *(b + 111 * OS1_S1 + 52) -
                                       p_over_q * *(b + 147 * OS1_S1 + 52) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 52);
            *(b + 111 * OS1_S1 + 74) = prefactor_x * *(b + 111 * OS1_S1 + 53) -
                                       p_over_q * *(b + 147 * OS1_S1 + 53) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 53);
            *(b + 111 * OS1_S1 + 75) = prefactor_y * *(b + 111 * OS1_S1 + 49) -
                                       p_over_q * *(b + 154 * OS1_S1 + 49);
            *(b + 111 * OS1_S1 + 76) = prefactor_x * *(b + 111 * OS1_S1 + 55) -
                                       p_over_q * *(b + 147 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 55);
            *(b + 111 * OS1_S1 + 77) =
                prefactor_y * *(b + 111 * OS1_S1 + 50) -
                p_over_q * *(b + 154 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 111 * OS1_S1 + 30);
            *(b + 111 * OS1_S1 + 78) =
                prefactor_z * *(b + 111 * OS1_S1 + 50) -
                p_over_q * *(b + 155 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 50);
            *(b + 111 * OS1_S1 + 79) =
                prefactor_z * *(b + 111 * OS1_S1 + 51) -
                p_over_q * *(b + 155 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 51) +
                one_over_two_q * *(b + 111 * OS1_S1 + 30);
            *(b + 111 * OS1_S1 + 80) =
                prefactor_y * *(b + 111 * OS1_S1 + 53) -
                p_over_q * *(b + 154 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 33);
            *(b + 111 * OS1_S1 + 81) =
                prefactor_y * *(b + 111 * OS1_S1 + 54) -
                p_over_q * *(b + 154 * OS1_S1 + 54) +
                one_over_two_q * *(b + 111 * OS1_S1 + 34);
            *(b + 111 * OS1_S1 + 82) = prefactor_y * *(b + 111 * OS1_S1 + 55) -
                                       p_over_q * *(b + 154 * OS1_S1 + 55);
            *(b + 111 * OS1_S1 + 83) =
                prefactor_z * *(b + 111 * OS1_S1 + 55) -
                p_over_q * *(b + 155 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 111 * OS1_S1 + 34);
            *(b + 112 * OS1_S1 + 56) =
                prefactor_x * *(b + 112 * OS1_S1 + 35) -
                p_over_q * *(b + 148 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 112 * OS1_S1 + 20);
            *(b + 112 * OS1_S1 + 57) =
                prefactor_y * *(b + 112 * OS1_S1 + 35) -
                p_over_q * *(b + 156 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 35);
            *(b + 112 * OS1_S1 + 58) = prefactor_z * *(b + 112 * OS1_S1 + 35) -
                                       p_over_q * *(b + 157 * OS1_S1 + 35);
            *(b + 112 * OS1_S1 + 59) =
                prefactor_y * *(b + 112 * OS1_S1 + 36) -
                p_over_q * *(b + 156 * OS1_S1 + 36) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 36) +
                one_over_two_q * *(b + 112 * OS1_S1 + 20);
            *(b + 112 * OS1_S1 + 60) = prefactor_z * *(b + 112 * OS1_S1 + 36) -
                                       p_over_q * *(b + 157 * OS1_S1 + 36);
            *(b + 112 * OS1_S1 + 61) =
                prefactor_z * *(b + 112 * OS1_S1 + 37) -
                p_over_q * *(b + 157 * OS1_S1 + 37) +
                one_over_two_q * *(b + 112 * OS1_S1 + 20);
            *(b + 112 * OS1_S1 + 62) =
                prefactor_x * *(b + 112 * OS1_S1 + 41) -
                p_over_q * *(b + 148 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 26);
            *(b + 112 * OS1_S1 + 63) = prefactor_z * *(b + 112 * OS1_S1 + 38) -
                                       p_over_q * *(b + 157 * OS1_S1 + 38);
            *(b + 112 * OS1_S1 + 64) =
                prefactor_y * *(b + 112 * OS1_S1 + 40) -
                p_over_q * *(b + 156 * OS1_S1 + 40) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 40);
            *(b + 112 * OS1_S1 + 65) =
                prefactor_z * *(b + 112 * OS1_S1 + 40) -
                p_over_q * *(b + 157 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 22);
            *(b + 112 * OS1_S1 + 66) =
                prefactor_x * *(b + 112 * OS1_S1 + 45) -
                p_over_q * *(b + 148 * OS1_S1 + 45) +
                one_over_two_q * *(b + 112 * OS1_S1 + 30);
            *(b + 112 * OS1_S1 + 67) = prefactor_z * *(b + 112 * OS1_S1 + 41) -
                                       p_over_q * *(b + 157 * OS1_S1 + 41);
            *(b + 112 * OS1_S1 + 68) =
                prefactor_z * *(b + 112 * OS1_S1 + 42) -
                p_over_q * *(b + 157 * OS1_S1 + 42) +
                one_over_two_q * *(b + 112 * OS1_S1 + 23);
            *(b + 112 * OS1_S1 + 69) =
                prefactor_y * *(b + 112 * OS1_S1 + 44) -
                p_over_q * *(b + 156 * OS1_S1 + 44) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 44);
            *(b + 112 * OS1_S1 + 70) =
                prefactor_x * *(b + 112 * OS1_S1 + 49) -
                p_over_q * *(b + 148 * OS1_S1 + 49) +
                one_over_two_q * *(b + 112 * OS1_S1 + 34);
            *(b + 112 * OS1_S1 + 71) = prefactor_x * *(b + 112 * OS1_S1 + 50) -
                                       p_over_q * *(b + 148 * OS1_S1 + 50);
            *(b + 112 * OS1_S1 + 72) = prefactor_z * *(b + 112 * OS1_S1 + 45) -
                                       p_over_q * *(b + 157 * OS1_S1 + 45);
            *(b + 112 * OS1_S1 + 73) = prefactor_x * *(b + 112 * OS1_S1 + 52) -
                                       p_over_q * *(b + 148 * OS1_S1 + 52);
            *(b + 112 * OS1_S1 + 74) = prefactor_x * *(b + 112 * OS1_S1 + 53) -
                                       p_over_q * *(b + 148 * OS1_S1 + 53);
            *(b + 112 * OS1_S1 + 75) = prefactor_x * *(b + 112 * OS1_S1 + 54) -
                                       p_over_q * *(b + 148 * OS1_S1 + 54);
            *(b + 112 * OS1_S1 + 76) = prefactor_x * *(b + 112 * OS1_S1 + 55) -
                                       p_over_q * *(b + 148 * OS1_S1 + 55);
            *(b + 112 * OS1_S1 + 77) =
                prefactor_y * *(b + 112 * OS1_S1 + 50) -
                p_over_q * *(b + 156 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 112 * OS1_S1 + 30);
            *(b + 112 * OS1_S1 + 78) = prefactor_z * *(b + 112 * OS1_S1 + 50) -
                                       p_over_q * *(b + 157 * OS1_S1 + 50);
            *(b + 112 * OS1_S1 + 79) =
                prefactor_z * *(b + 112 * OS1_S1 + 51) -
                p_over_q * *(b + 157 * OS1_S1 + 51) +
                one_over_two_q * *(b + 112 * OS1_S1 + 30);
            *(b + 112 * OS1_S1 + 80) =
                prefactor_z * *(b + 112 * OS1_S1 + 52) -
                p_over_q * *(b + 157 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 31);
            *(b + 112 * OS1_S1 + 81) =
                prefactor_y * *(b + 112 * OS1_S1 + 54) -
                p_over_q * *(b + 156 * OS1_S1 + 54) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 54) +
                one_over_two_q * *(b + 112 * OS1_S1 + 34);
            *(b + 112 * OS1_S1 + 82) =
                prefactor_y * *(b + 112 * OS1_S1 + 55) -
                p_over_q * *(b + 156 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 55);
            *(b + 112 * OS1_S1 + 83) =
                prefactor_z * *(b + 112 * OS1_S1 + 55) -
                p_over_q * *(b + 157 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 112 * OS1_S1 + 34);
            *(b + 113 * OS1_S1 + 56) =
                prefactor_x * *(b + 113 * OS1_S1 + 35) -
                p_over_q * *(b + 149 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 113 * OS1_S1 + 20);
            *(b + 113 * OS1_S1 + 57) =
                prefactor_y * *(b + 113 * OS1_S1 + 35) -
                p_over_q * *(b + 157 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 35);
            *(b + 113 * OS1_S1 + 58) = prefactor_z * *(b + 113 * OS1_S1 + 35) -
                                       p_over_q * *(b + 158 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 35);
            *(b + 113 * OS1_S1 + 59) =
                prefactor_y * *(b + 113 * OS1_S1 + 36) -
                p_over_q * *(b + 157 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 36) +
                one_over_two_q * *(b + 113 * OS1_S1 + 20);
            *(b + 113 * OS1_S1 + 60) = prefactor_z * *(b + 113 * OS1_S1 + 36) -
                                       p_over_q * *(b + 158 * OS1_S1 + 36) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 36);
            *(b + 113 * OS1_S1 + 61) =
                prefactor_z * *(b + 113 * OS1_S1 + 37) -
                p_over_q * *(b + 158 * OS1_S1 + 37) +
                one_over_two_q * *(b + 77 * OS1_S1 + 37) +
                one_over_two_q * *(b + 113 * OS1_S1 + 20);
            *(b + 113 * OS1_S1 + 62) =
                prefactor_x * *(b + 113 * OS1_S1 + 41) -
                p_over_q * *(b + 149 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 26);
            *(b + 113 * OS1_S1 + 63) = prefactor_z * *(b + 113 * OS1_S1 + 38) -
                                       p_over_q * *(b + 158 * OS1_S1 + 38) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 38);
            *(b + 113 * OS1_S1 + 64) =
                prefactor_y * *(b + 113 * OS1_S1 + 40) -
                p_over_q * *(b + 157 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 40);
            *(b + 113 * OS1_S1 + 65) =
                prefactor_x * *(b + 113 * OS1_S1 + 44) -
                p_over_q * *(b + 149 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 29);
            *(b + 113 * OS1_S1 + 66) =
                prefactor_x * *(b + 113 * OS1_S1 + 45) -
                p_over_q * *(b + 149 * OS1_S1 + 45) +
                one_over_two_q * *(b + 113 * OS1_S1 + 30);
            *(b + 113 * OS1_S1 + 67) = prefactor_z * *(b + 113 * OS1_S1 + 41) -
                                       p_over_q * *(b + 158 * OS1_S1 + 41) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 41);
            *(b + 113 * OS1_S1 + 68) =
                prefactor_x * *(b + 113 * OS1_S1 + 47) -
                p_over_q * *(b + 149 * OS1_S1 + 47) +
                one_over_two_q * *(b + 113 * OS1_S1 + 32);
            *(b + 113 * OS1_S1 + 69) =
                prefactor_y * *(b + 113 * OS1_S1 + 44) -
                p_over_q * *(b + 157 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 44);
            *(b + 113 * OS1_S1 + 70) =
                prefactor_x * *(b + 113 * OS1_S1 + 49) -
                p_over_q * *(b + 149 * OS1_S1 + 49) +
                one_over_two_q * *(b + 113 * OS1_S1 + 34);
            *(b + 113 * OS1_S1 + 71) = prefactor_x * *(b + 113 * OS1_S1 + 50) -
                                       p_over_q * *(b + 149 * OS1_S1 + 50);
            *(b + 113 * OS1_S1 + 72) = prefactor_x * *(b + 113 * OS1_S1 + 51) -
                                       p_over_q * *(b + 149 * OS1_S1 + 51);
            *(b + 113 * OS1_S1 + 73) = prefactor_x * *(b + 113 * OS1_S1 + 52) -
                                       p_over_q * *(b + 149 * OS1_S1 + 52);
            *(b + 113 * OS1_S1 + 74) = prefactor_x * *(b + 113 * OS1_S1 + 53) -
                                       p_over_q * *(b + 149 * OS1_S1 + 53);
            *(b + 113 * OS1_S1 + 75) = prefactor_x * *(b + 113 * OS1_S1 + 54) -
                                       p_over_q * *(b + 149 * OS1_S1 + 54);
            *(b + 113 * OS1_S1 + 76) = prefactor_x * *(b + 113 * OS1_S1 + 55) -
                                       p_over_q * *(b + 149 * OS1_S1 + 55);
            *(b + 113 * OS1_S1 + 77) =
                prefactor_y * *(b + 113 * OS1_S1 + 50) -
                p_over_q * *(b + 157 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 113 * OS1_S1 + 30);
            *(b + 113 * OS1_S1 + 78) = prefactor_z * *(b + 113 * OS1_S1 + 50) -
                                       p_over_q * *(b + 158 * OS1_S1 + 50) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 50);
            *(b + 113 * OS1_S1 + 79) =
                prefactor_z * *(b + 113 * OS1_S1 + 51) -
                p_over_q * *(b + 158 * OS1_S1 + 51) +
                one_over_two_q * *(b + 77 * OS1_S1 + 51) +
                one_over_two_q * *(b + 113 * OS1_S1 + 30);
            *(b + 113 * OS1_S1 + 80) =
                prefactor_z * *(b + 113 * OS1_S1 + 52) -
                p_over_q * *(b + 158 * OS1_S1 + 52) +
                one_over_two_q * *(b + 77 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 31);
            *(b + 113 * OS1_S1 + 81) =
                prefactor_y * *(b + 113 * OS1_S1 + 54) -
                p_over_q * *(b + 157 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 54) +
                one_over_two_q * *(b + 113 * OS1_S1 + 34);
            *(b + 113 * OS1_S1 + 82) =
                prefactor_y * *(b + 113 * OS1_S1 + 55) -
                p_over_q * *(b + 157 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 55);
            *(b + 113 * OS1_S1 + 83) =
                prefactor_z * *(b + 113 * OS1_S1 + 55) -
                p_over_q * *(b + 158 * OS1_S1 + 55) +
                one_over_two_q * *(b + 77 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 113 * OS1_S1 + 34);
            *(b + 114 * OS1_S1 + 56) =
                prefactor_x * *(b + 114 * OS1_S1 + 35) -
                p_over_q * *(b + 150 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 114 * OS1_S1 + 20);
            *(b + 114 * OS1_S1 + 57) =
                prefactor_y * *(b + 114 * OS1_S1 + 35) -
                p_over_q * *(b + 158 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 35);
            *(b + 114 * OS1_S1 + 58) =
                prefactor_z * *(b + 114 * OS1_S1 + 35) -
                p_over_q * *(b + 159 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 35);
            *(b + 114 * OS1_S1 + 59) =
                prefactor_y * *(b + 114 * OS1_S1 + 36) -
                p_over_q * *(b + 158 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 36) +
                one_over_two_q * *(b + 114 * OS1_S1 + 20);
            *(b + 114 * OS1_S1 + 60) =
                prefactor_z * *(b + 114 * OS1_S1 + 36) -
                p_over_q * *(b + 159 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 36);
            *(b + 114 * OS1_S1 + 61) =
                prefactor_z * *(b + 114 * OS1_S1 + 37) -
                p_over_q * *(b + 159 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 37) +
                one_over_two_q * *(b + 114 * OS1_S1 + 20);
            *(b + 114 * OS1_S1 + 62) =
                prefactor_x * *(b + 114 * OS1_S1 + 41) -
                p_over_q * *(b + 150 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 26);
            *(b + 114 * OS1_S1 + 63) =
                prefactor_z * *(b + 114 * OS1_S1 + 38) -
                p_over_q * *(b + 159 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 38);
            *(b + 114 * OS1_S1 + 64) =
                prefactor_y * *(b + 114 * OS1_S1 + 40) -
                p_over_q * *(b + 158 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 40);
            *(b + 114 * OS1_S1 + 65) =
                prefactor_x * *(b + 114 * OS1_S1 + 44) -
                p_over_q * *(b + 150 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 29);
            *(b + 114 * OS1_S1 + 66) =
                prefactor_x * *(b + 114 * OS1_S1 + 45) -
                p_over_q * *(b + 150 * OS1_S1 + 45) +
                one_over_two_q * *(b + 114 * OS1_S1 + 30);
            *(b + 114 * OS1_S1 + 67) =
                prefactor_z * *(b + 114 * OS1_S1 + 41) -
                p_over_q * *(b + 159 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 41);
            *(b + 114 * OS1_S1 + 68) =
                prefactor_x * *(b + 114 * OS1_S1 + 47) -
                p_over_q * *(b + 150 * OS1_S1 + 47) +
                one_over_two_q * *(b + 114 * OS1_S1 + 32);
            *(b + 114 * OS1_S1 + 69) =
                prefactor_y * *(b + 114 * OS1_S1 + 44) -
                p_over_q * *(b + 158 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 44);
            *(b + 114 * OS1_S1 + 70) =
                prefactor_x * *(b + 114 * OS1_S1 + 49) -
                p_over_q * *(b + 150 * OS1_S1 + 49) +
                one_over_two_q * *(b + 114 * OS1_S1 + 34);
            *(b + 114 * OS1_S1 + 71) = prefactor_x * *(b + 114 * OS1_S1 + 50) -
                                       p_over_q * *(b + 150 * OS1_S1 + 50);
            *(b + 114 * OS1_S1 + 72) = prefactor_x * *(b + 114 * OS1_S1 + 51) -
                                       p_over_q * *(b + 150 * OS1_S1 + 51);
            *(b + 114 * OS1_S1 + 73) = prefactor_x * *(b + 114 * OS1_S1 + 52) -
                                       p_over_q * *(b + 150 * OS1_S1 + 52);
            *(b + 114 * OS1_S1 + 74) = prefactor_x * *(b + 114 * OS1_S1 + 53) -
                                       p_over_q * *(b + 150 * OS1_S1 + 53);
            *(b + 114 * OS1_S1 + 75) = prefactor_x * *(b + 114 * OS1_S1 + 54) -
                                       p_over_q * *(b + 150 * OS1_S1 + 54);
            *(b + 114 * OS1_S1 + 76) = prefactor_x * *(b + 114 * OS1_S1 + 55) -
                                       p_over_q * *(b + 150 * OS1_S1 + 55);
            *(b + 114 * OS1_S1 + 77) =
                prefactor_y * *(b + 114 * OS1_S1 + 50) -
                p_over_q * *(b + 158 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 114 * OS1_S1 + 30);
            *(b + 114 * OS1_S1 + 78) =
                prefactor_z * *(b + 114 * OS1_S1 + 50) -
                p_over_q * *(b + 159 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 50);
            *(b + 114 * OS1_S1 + 79) =
                prefactor_z * *(b + 114 * OS1_S1 + 51) -
                p_over_q * *(b + 159 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 51) +
                one_over_two_q * *(b + 114 * OS1_S1 + 30);
            *(b + 114 * OS1_S1 + 80) =
                prefactor_z * *(b + 114 * OS1_S1 + 52) -
                p_over_q * *(b + 159 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 31);
            *(b + 114 * OS1_S1 + 81) =
                prefactor_y * *(b + 114 * OS1_S1 + 54) -
                p_over_q * *(b + 158 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 54) +
                one_over_two_q * *(b + 114 * OS1_S1 + 34);
            *(b + 114 * OS1_S1 + 82) =
                prefactor_y * *(b + 114 * OS1_S1 + 55) -
                p_over_q * *(b + 158 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 55);
            *(b + 114 * OS1_S1 + 83) =
                prefactor_z * *(b + 114 * OS1_S1 + 55) -
                p_over_q * *(b + 159 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 114 * OS1_S1 + 34);
            *(b + 115 * OS1_S1 + 56) =
                prefactor_x * *(b + 115 * OS1_S1 + 35) -
                p_over_q * *(b + 151 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 20);
            *(b + 115 * OS1_S1 + 57) =
                prefactor_y * *(b + 115 * OS1_S1 + 35) -
                p_over_q * *(b + 159 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 35);
            *(b + 115 * OS1_S1 + 58) =
                prefactor_z * *(b + 115 * OS1_S1 + 35) -
                p_over_q * *(b + 160 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 35);
            *(b + 115 * OS1_S1 + 59) =
                prefactor_y * *(b + 115 * OS1_S1 + 36) -
                p_over_q * *(b + 159 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 36) +
                one_over_two_q * *(b + 115 * OS1_S1 + 20);
            *(b + 115 * OS1_S1 + 60) =
                prefactor_z * *(b + 115 * OS1_S1 + 36) -
                p_over_q * *(b + 160 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 36);
            *(b + 115 * OS1_S1 + 61) =
                prefactor_z * *(b + 115 * OS1_S1 + 37) -
                p_over_q * *(b + 160 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 37) +
                one_over_two_q * *(b + 115 * OS1_S1 + 20);
            *(b + 115 * OS1_S1 + 62) =
                prefactor_x * *(b + 115 * OS1_S1 + 41) -
                p_over_q * *(b + 151 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 26);
            *(b + 115 * OS1_S1 + 63) =
                prefactor_z * *(b + 115 * OS1_S1 + 38) -
                p_over_q * *(b + 160 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 38);
            *(b + 115 * OS1_S1 + 64) =
                prefactor_y * *(b + 115 * OS1_S1 + 40) -
                p_over_q * *(b + 159 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 40);
            *(b + 115 * OS1_S1 + 65) =
                prefactor_x * *(b + 115 * OS1_S1 + 44) -
                p_over_q * *(b + 151 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 29);
            *(b + 115 * OS1_S1 + 66) =
                prefactor_x * *(b + 115 * OS1_S1 + 45) -
                p_over_q * *(b + 151 * OS1_S1 + 45) +
                one_over_two_q * *(b + 115 * OS1_S1 + 30);
            *(b + 115 * OS1_S1 + 67) =
                prefactor_z * *(b + 115 * OS1_S1 + 41) -
                p_over_q * *(b + 160 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 41);
            *(b + 115 * OS1_S1 + 68) =
                prefactor_x * *(b + 115 * OS1_S1 + 47) -
                p_over_q * *(b + 151 * OS1_S1 + 47) +
                one_over_two_q * *(b + 115 * OS1_S1 + 32);
            *(b + 115 * OS1_S1 + 69) =
                prefactor_y * *(b + 115 * OS1_S1 + 44) -
                p_over_q * *(b + 159 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 44);
            *(b + 115 * OS1_S1 + 70) =
                prefactor_x * *(b + 115 * OS1_S1 + 49) -
                p_over_q * *(b + 151 * OS1_S1 + 49) +
                one_over_two_q * *(b + 115 * OS1_S1 + 34);
            *(b + 115 * OS1_S1 + 71) = prefactor_x * *(b + 115 * OS1_S1 + 50) -
                                       p_over_q * *(b + 151 * OS1_S1 + 50);
            *(b + 115 * OS1_S1 + 72) = prefactor_x * *(b + 115 * OS1_S1 + 51) -
                                       p_over_q * *(b + 151 * OS1_S1 + 51);
            *(b + 115 * OS1_S1 + 73) = prefactor_x * *(b + 115 * OS1_S1 + 52) -
                                       p_over_q * *(b + 151 * OS1_S1 + 52);
            *(b + 115 * OS1_S1 + 74) = prefactor_x * *(b + 115 * OS1_S1 + 53) -
                                       p_over_q * *(b + 151 * OS1_S1 + 53);
            *(b + 115 * OS1_S1 + 75) = prefactor_x * *(b + 115 * OS1_S1 + 54) -
                                       p_over_q * *(b + 151 * OS1_S1 + 54);
            *(b + 115 * OS1_S1 + 76) = prefactor_x * *(b + 115 * OS1_S1 + 55) -
                                       p_over_q * *(b + 151 * OS1_S1 + 55);
            *(b + 115 * OS1_S1 + 77) =
                prefactor_y * *(b + 115 * OS1_S1 + 50) -
                p_over_q * *(b + 159 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 30);
            *(b + 115 * OS1_S1 + 78) =
                prefactor_z * *(b + 115 * OS1_S1 + 50) -
                p_over_q * *(b + 160 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 50);
            *(b + 115 * OS1_S1 + 79) =
                prefactor_z * *(b + 115 * OS1_S1 + 51) -
                p_over_q * *(b + 160 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 51) +
                one_over_two_q * *(b + 115 * OS1_S1 + 30);
            *(b + 115 * OS1_S1 + 80) =
                prefactor_z * *(b + 115 * OS1_S1 + 52) -
                p_over_q * *(b + 160 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 31);
            *(b + 115 * OS1_S1 + 81) =
                prefactor_y * *(b + 115 * OS1_S1 + 54) -
                p_over_q * *(b + 159 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 54) +
                one_over_two_q * *(b + 115 * OS1_S1 + 34);
            *(b + 115 * OS1_S1 + 82) =
                prefactor_y * *(b + 115 * OS1_S1 + 55) -
                p_over_q * *(b + 159 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 55);
            *(b + 115 * OS1_S1 + 83) =
                prefactor_z * *(b + 115 * OS1_S1 + 55) -
                p_over_q * *(b + 160 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 34);
            *(b + 116 * OS1_S1 + 56) =
                prefactor_x * *(b + 116 * OS1_S1 + 35) -
                p_over_q * *(b + 152 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 20);
            *(b + 116 * OS1_S1 + 57) =
                prefactor_y * *(b + 116 * OS1_S1 + 35) -
                p_over_q * *(b + 160 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 35);
            *(b + 116 * OS1_S1 + 58) =
                prefactor_z * *(b + 116 * OS1_S1 + 35) -
                p_over_q * *(b + 161 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 35);
            *(b + 116 * OS1_S1 + 59) =
                prefactor_y * *(b + 116 * OS1_S1 + 36) -
                p_over_q * *(b + 160 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 36) +
                one_over_two_q * *(b + 116 * OS1_S1 + 20);
            *(b + 116 * OS1_S1 + 60) =
                prefactor_y * *(b + 116 * OS1_S1 + 37) -
                p_over_q * *(b + 160 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 37);
            *(b + 116 * OS1_S1 + 61) =
                prefactor_z * *(b + 116 * OS1_S1 + 37) -
                p_over_q * *(b + 161 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 37) +
                one_over_two_q * *(b + 116 * OS1_S1 + 20);
            *(b + 116 * OS1_S1 + 62) =
                prefactor_x * *(b + 116 * OS1_S1 + 41) -
                p_over_q * *(b + 152 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 26);
            *(b + 116 * OS1_S1 + 63) =
                prefactor_z * *(b + 116 * OS1_S1 + 38) -
                p_over_q * *(b + 161 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 38);
            *(b + 116 * OS1_S1 + 64) =
                prefactor_y * *(b + 116 * OS1_S1 + 40) -
                p_over_q * *(b + 160 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 40);
            *(b + 116 * OS1_S1 + 65) =
                prefactor_x * *(b + 116 * OS1_S1 + 44) -
                p_over_q * *(b + 152 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 29);
            *(b + 116 * OS1_S1 + 66) =
                prefactor_x * *(b + 116 * OS1_S1 + 45) -
                p_over_q * *(b + 152 * OS1_S1 + 45) +
                one_over_two_q * *(b + 116 * OS1_S1 + 30);
            *(b + 116 * OS1_S1 + 67) =
                prefactor_z * *(b + 116 * OS1_S1 + 41) -
                p_over_q * *(b + 161 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 41);
            *(b + 116 * OS1_S1 + 68) =
                prefactor_x * *(b + 116 * OS1_S1 + 47) -
                p_over_q * *(b + 152 * OS1_S1 + 47) +
                one_over_two_q * *(b + 116 * OS1_S1 + 32);
            *(b + 116 * OS1_S1 + 69) =
                prefactor_y * *(b + 116 * OS1_S1 + 44) -
                p_over_q * *(b + 160 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 44);
            *(b + 116 * OS1_S1 + 70) =
                prefactor_x * *(b + 116 * OS1_S1 + 49) -
                p_over_q * *(b + 152 * OS1_S1 + 49) +
                one_over_two_q * *(b + 116 * OS1_S1 + 34);
            *(b + 116 * OS1_S1 + 71) = prefactor_x * *(b + 116 * OS1_S1 + 50) -
                                       p_over_q * *(b + 152 * OS1_S1 + 50);
            *(b + 116 * OS1_S1 + 72) = prefactor_x * *(b + 116 * OS1_S1 + 51) -
                                       p_over_q * *(b + 152 * OS1_S1 + 51);
            *(b + 116 * OS1_S1 + 73) = prefactor_x * *(b + 116 * OS1_S1 + 52) -
                                       p_over_q * *(b + 152 * OS1_S1 + 52);
            *(b + 116 * OS1_S1 + 74) = prefactor_x * *(b + 116 * OS1_S1 + 53) -
                                       p_over_q * *(b + 152 * OS1_S1 + 53);
            *(b + 116 * OS1_S1 + 75) = prefactor_x * *(b + 116 * OS1_S1 + 54) -
                                       p_over_q * *(b + 152 * OS1_S1 + 54);
            *(b + 116 * OS1_S1 + 76) = prefactor_x * *(b + 116 * OS1_S1 + 55) -
                                       p_over_q * *(b + 152 * OS1_S1 + 55);
            *(b + 116 * OS1_S1 + 77) =
                prefactor_y * *(b + 116 * OS1_S1 + 50) -
                p_over_q * *(b + 160 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 30);
            *(b + 116 * OS1_S1 + 78) =
                prefactor_z * *(b + 116 * OS1_S1 + 50) -
                p_over_q * *(b + 161 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 50);
            *(b + 116 * OS1_S1 + 79) =
                prefactor_z * *(b + 116 * OS1_S1 + 51) -
                p_over_q * *(b + 161 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 51) +
                one_over_two_q * *(b + 116 * OS1_S1 + 30);
            *(b + 116 * OS1_S1 + 80) =
                prefactor_y * *(b + 116 * OS1_S1 + 53) -
                p_over_q * *(b + 160 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 33);
            *(b + 116 * OS1_S1 + 81) =
                prefactor_y * *(b + 116 * OS1_S1 + 54) -
                p_over_q * *(b + 160 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 54) +
                one_over_two_q * *(b + 116 * OS1_S1 + 34);
            *(b + 116 * OS1_S1 + 82) =
                prefactor_y * *(b + 116 * OS1_S1 + 55) -
                p_over_q * *(b + 160 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 55);
            *(b + 116 * OS1_S1 + 83) =
                prefactor_z * *(b + 116 * OS1_S1 + 55) -
                p_over_q * *(b + 161 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 34);
            *(b + 117 * OS1_S1 + 56) =
                prefactor_x * *(b + 117 * OS1_S1 + 35) -
                p_over_q * *(b + 153 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 117 * OS1_S1 + 20);
            *(b + 117 * OS1_S1 + 57) =
                prefactor_y * *(b + 117 * OS1_S1 + 35) -
                p_over_q * *(b + 161 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 35);
            *(b + 117 * OS1_S1 + 58) =
                prefactor_z * *(b + 117 * OS1_S1 + 35) -
                p_over_q * *(b + 162 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 35);
            *(b + 117 * OS1_S1 + 59) =
                prefactor_y * *(b + 117 * OS1_S1 + 36) -
                p_over_q * *(b + 161 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 36) +
                one_over_two_q * *(b + 117 * OS1_S1 + 20);
            *(b + 117 * OS1_S1 + 60) =
                prefactor_y * *(b + 117 * OS1_S1 + 37) -
                p_over_q * *(b + 161 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 37);
            *(b + 117 * OS1_S1 + 61) =
                prefactor_z * *(b + 117 * OS1_S1 + 37) -
                p_over_q * *(b + 162 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 37) +
                one_over_two_q * *(b + 117 * OS1_S1 + 20);
            *(b + 117 * OS1_S1 + 62) =
                prefactor_x * *(b + 117 * OS1_S1 + 41) -
                p_over_q * *(b + 153 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 26);
            *(b + 117 * OS1_S1 + 63) =
                prefactor_z * *(b + 117 * OS1_S1 + 38) -
                p_over_q * *(b + 162 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 38);
            *(b + 117 * OS1_S1 + 64) =
                prefactor_y * *(b + 117 * OS1_S1 + 40) -
                p_over_q * *(b + 161 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 40);
            *(b + 117 * OS1_S1 + 65) =
                prefactor_x * *(b + 117 * OS1_S1 + 44) -
                p_over_q * *(b + 153 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 29);
            *(b + 117 * OS1_S1 + 66) =
                prefactor_x * *(b + 117 * OS1_S1 + 45) -
                p_over_q * *(b + 153 * OS1_S1 + 45) +
                one_over_two_q * *(b + 117 * OS1_S1 + 30);
            *(b + 117 * OS1_S1 + 67) =
                prefactor_z * *(b + 117 * OS1_S1 + 41) -
                p_over_q * *(b + 162 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 41);
            *(b + 117 * OS1_S1 + 68) =
                prefactor_x * *(b + 117 * OS1_S1 + 47) -
                p_over_q * *(b + 153 * OS1_S1 + 47) +
                one_over_two_q * *(b + 117 * OS1_S1 + 32);
            *(b + 117 * OS1_S1 + 69) =
                prefactor_y * *(b + 117 * OS1_S1 + 44) -
                p_over_q * *(b + 161 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 44);
            *(b + 117 * OS1_S1 + 70) =
                prefactor_x * *(b + 117 * OS1_S1 + 49) -
                p_over_q * *(b + 153 * OS1_S1 + 49) +
                one_over_two_q * *(b + 117 * OS1_S1 + 34);
            *(b + 117 * OS1_S1 + 71) = prefactor_x * *(b + 117 * OS1_S1 + 50) -
                                       p_over_q * *(b + 153 * OS1_S1 + 50);
            *(b + 117 * OS1_S1 + 72) = prefactor_x * *(b + 117 * OS1_S1 + 51) -
                                       p_over_q * *(b + 153 * OS1_S1 + 51);
            *(b + 117 * OS1_S1 + 73) = prefactor_x * *(b + 117 * OS1_S1 + 52) -
                                       p_over_q * *(b + 153 * OS1_S1 + 52);
            *(b + 117 * OS1_S1 + 74) = prefactor_x * *(b + 117 * OS1_S1 + 53) -
                                       p_over_q * *(b + 153 * OS1_S1 + 53);
            *(b + 117 * OS1_S1 + 75) = prefactor_x * *(b + 117 * OS1_S1 + 54) -
                                       p_over_q * *(b + 153 * OS1_S1 + 54);
            *(b + 117 * OS1_S1 + 76) = prefactor_x * *(b + 117 * OS1_S1 + 55) -
                                       p_over_q * *(b + 153 * OS1_S1 + 55);
            *(b + 117 * OS1_S1 + 77) =
                prefactor_y * *(b + 117 * OS1_S1 + 50) -
                p_over_q * *(b + 161 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 117 * OS1_S1 + 30);
            *(b + 117 * OS1_S1 + 78) =
                prefactor_z * *(b + 117 * OS1_S1 + 50) -
                p_over_q * *(b + 162 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 50);
            *(b + 117 * OS1_S1 + 79) =
                prefactor_z * *(b + 117 * OS1_S1 + 51) -
                p_over_q * *(b + 162 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 51) +
                one_over_two_q * *(b + 117 * OS1_S1 + 30);
            *(b + 117 * OS1_S1 + 80) =
                prefactor_y * *(b + 117 * OS1_S1 + 53) -
                p_over_q * *(b + 161 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 33);
            *(b + 117 * OS1_S1 + 81) =
                prefactor_y * *(b + 117 * OS1_S1 + 54) -
                p_over_q * *(b + 161 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 54) +
                one_over_two_q * *(b + 117 * OS1_S1 + 34);
            *(b + 117 * OS1_S1 + 82) =
                prefactor_y * *(b + 117 * OS1_S1 + 55) -
                p_over_q * *(b + 161 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 55);
            *(b + 117 * OS1_S1 + 83) =
                prefactor_z * *(b + 117 * OS1_S1 + 55) -
                p_over_q * *(b + 162 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 117 * OS1_S1 + 34);
            *(b + 118 * OS1_S1 + 56) =
                prefactor_x * *(b + 118 * OS1_S1 + 35) -
                p_over_q * *(b + 154 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 118 * OS1_S1 + 20);
            *(b + 118 * OS1_S1 + 57) = prefactor_y * *(b + 118 * OS1_S1 + 35) -
                                       p_over_q * *(b + 162 * OS1_S1 + 35) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 35);
            *(b + 118 * OS1_S1 + 58) =
                prefactor_z * *(b + 118 * OS1_S1 + 35) -
                p_over_q * *(b + 163 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 35);
            *(b + 118 * OS1_S1 + 59) =
                prefactor_y * *(b + 118 * OS1_S1 + 36) -
                p_over_q * *(b + 162 * OS1_S1 + 36) +
                one_over_two_q * *(b + 83 * OS1_S1 + 36) +
                one_over_two_q * *(b + 118 * OS1_S1 + 20);
            *(b + 118 * OS1_S1 + 60) = prefactor_y * *(b + 118 * OS1_S1 + 37) -
                                       p_over_q * *(b + 162 * OS1_S1 + 37) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 37);
            *(b + 118 * OS1_S1 + 61) =
                prefactor_z * *(b + 118 * OS1_S1 + 37) -
                p_over_q * *(b + 163 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 37) +
                one_over_two_q * *(b + 118 * OS1_S1 + 20);
            *(b + 118 * OS1_S1 + 62) =
                prefactor_x * *(b + 118 * OS1_S1 + 41) -
                p_over_q * *(b + 154 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 26);
            *(b + 118 * OS1_S1 + 63) =
                prefactor_z * *(b + 118 * OS1_S1 + 38) -
                p_over_q * *(b + 163 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 38);
            *(b + 118 * OS1_S1 + 64) = prefactor_y * *(b + 118 * OS1_S1 + 40) -
                                       p_over_q * *(b + 162 * OS1_S1 + 40) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 40);
            *(b + 118 * OS1_S1 + 65) =
                prefactor_x * *(b + 118 * OS1_S1 + 44) -
                p_over_q * *(b + 154 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 29);
            *(b + 118 * OS1_S1 + 66) =
                prefactor_x * *(b + 118 * OS1_S1 + 45) -
                p_over_q * *(b + 154 * OS1_S1 + 45) +
                one_over_two_q * *(b + 118 * OS1_S1 + 30);
            *(b + 118 * OS1_S1 + 67) =
                prefactor_z * *(b + 118 * OS1_S1 + 41) -
                p_over_q * *(b + 163 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 41);
            *(b + 118 * OS1_S1 + 68) =
                prefactor_x * *(b + 118 * OS1_S1 + 47) -
                p_over_q * *(b + 154 * OS1_S1 + 47) +
                one_over_two_q * *(b + 118 * OS1_S1 + 32);
            *(b + 118 * OS1_S1 + 69) = prefactor_y * *(b + 118 * OS1_S1 + 44) -
                                       p_over_q * *(b + 162 * OS1_S1 + 44) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 44);
            *(b + 118 * OS1_S1 + 70) =
                prefactor_x * *(b + 118 * OS1_S1 + 49) -
                p_over_q * *(b + 154 * OS1_S1 + 49) +
                one_over_two_q * *(b + 118 * OS1_S1 + 34);
            *(b + 118 * OS1_S1 + 71) = prefactor_x * *(b + 118 * OS1_S1 + 50) -
                                       p_over_q * *(b + 154 * OS1_S1 + 50);
            *(b + 118 * OS1_S1 + 72) = prefactor_x * *(b + 118 * OS1_S1 + 51) -
                                       p_over_q * *(b + 154 * OS1_S1 + 51);
            *(b + 118 * OS1_S1 + 73) = prefactor_x * *(b + 118 * OS1_S1 + 52) -
                                       p_over_q * *(b + 154 * OS1_S1 + 52);
            *(b + 118 * OS1_S1 + 74) = prefactor_x * *(b + 118 * OS1_S1 + 53) -
                                       p_over_q * *(b + 154 * OS1_S1 + 53);
            *(b + 118 * OS1_S1 + 75) = prefactor_x * *(b + 118 * OS1_S1 + 54) -
                                       p_over_q * *(b + 154 * OS1_S1 + 54);
            *(b + 118 * OS1_S1 + 76) = prefactor_x * *(b + 118 * OS1_S1 + 55) -
                                       p_over_q * *(b + 154 * OS1_S1 + 55);
            *(b + 118 * OS1_S1 + 77) =
                prefactor_y * *(b + 118 * OS1_S1 + 50) -
                p_over_q * *(b + 162 * OS1_S1 + 50) +
                one_over_two_q * *(b + 83 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 118 * OS1_S1 + 30);
            *(b + 118 * OS1_S1 + 78) =
                prefactor_z * *(b + 118 * OS1_S1 + 50) -
                p_over_q * *(b + 163 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 50);
            *(b + 118 * OS1_S1 + 79) =
                prefactor_z * *(b + 118 * OS1_S1 + 51) -
                p_over_q * *(b + 163 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 51) +
                one_over_two_q * *(b + 118 * OS1_S1 + 30);
            *(b + 118 * OS1_S1 + 80) =
                prefactor_y * *(b + 118 * OS1_S1 + 53) -
                p_over_q * *(b + 162 * OS1_S1 + 53) +
                one_over_two_q * *(b + 83 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 33);
            *(b + 118 * OS1_S1 + 81) =
                prefactor_y * *(b + 118 * OS1_S1 + 54) -
                p_over_q * *(b + 162 * OS1_S1 + 54) +
                one_over_two_q * *(b + 83 * OS1_S1 + 54) +
                one_over_two_q * *(b + 118 * OS1_S1 + 34);
            *(b + 118 * OS1_S1 + 82) = prefactor_y * *(b + 118 * OS1_S1 + 55) -
                                       p_over_q * *(b + 162 * OS1_S1 + 55) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 55);
            *(b + 118 * OS1_S1 + 83) =
                prefactor_z * *(b + 118 * OS1_S1 + 55) -
                p_over_q * *(b + 163 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 118 * OS1_S1 + 34);
            *(b + 119 * OS1_S1 + 56) =
                prefactor_x * *(b + 119 * OS1_S1 + 35) -
                p_over_q * *(b + 155 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 119 * OS1_S1 + 20);
            *(b + 119 * OS1_S1 + 57) = prefactor_y * *(b + 119 * OS1_S1 + 35) -
                                       p_over_q * *(b + 163 * OS1_S1 + 35);
            *(b + 119 * OS1_S1 + 58) =
                prefactor_z * *(b + 119 * OS1_S1 + 35) -
                p_over_q * *(b + 164 * OS1_S1 + 35) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 35);
            *(b + 119 * OS1_S1 + 59) =
                prefactor_y * *(b + 119 * OS1_S1 + 36) -
                p_over_q * *(b + 163 * OS1_S1 + 36) +
                one_over_two_q * *(b + 119 * OS1_S1 + 20);
            *(b + 119 * OS1_S1 + 60) = prefactor_y * *(b + 119 * OS1_S1 + 37) -
                                       p_over_q * *(b + 163 * OS1_S1 + 37);
            *(b + 119 * OS1_S1 + 61) =
                prefactor_z * *(b + 119 * OS1_S1 + 37) -
                p_over_q * *(b + 164 * OS1_S1 + 37) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 37) +
                one_over_two_q * *(b + 119 * OS1_S1 + 20);
            *(b + 119 * OS1_S1 + 62) =
                prefactor_y * *(b + 119 * OS1_S1 + 38) -
                p_over_q * *(b + 163 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 21);
            *(b + 119 * OS1_S1 + 63) =
                prefactor_z * *(b + 119 * OS1_S1 + 38) -
                p_over_q * *(b + 164 * OS1_S1 + 38) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 38);
            *(b + 119 * OS1_S1 + 64) = prefactor_y * *(b + 119 * OS1_S1 + 40) -
                                       p_over_q * *(b + 163 * OS1_S1 + 40);
            *(b + 119 * OS1_S1 + 65) =
                prefactor_x * *(b + 119 * OS1_S1 + 44) -
                p_over_q * *(b + 155 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 29);
            *(b + 119 * OS1_S1 + 66) =
                prefactor_x * *(b + 119 * OS1_S1 + 45) -
                p_over_q * *(b + 155 * OS1_S1 + 45) +
                one_over_two_q * *(b + 119 * OS1_S1 + 30);
            *(b + 119 * OS1_S1 + 67) =
                prefactor_z * *(b + 119 * OS1_S1 + 41) -
                p_over_q * *(b + 164 * OS1_S1 + 41) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 41);
            *(b + 119 * OS1_S1 + 68) =
                prefactor_y * *(b + 119 * OS1_S1 + 43) -
                p_over_q * *(b + 163 * OS1_S1 + 43) +
                one_over_two_q * *(b + 119 * OS1_S1 + 25);
            *(b + 119 * OS1_S1 + 69) = prefactor_y * *(b + 119 * OS1_S1 + 44) -
                                       p_over_q * *(b + 163 * OS1_S1 + 44);
            *(b + 119 * OS1_S1 + 70) =
                prefactor_x * *(b + 119 * OS1_S1 + 49) -
                p_over_q * *(b + 155 * OS1_S1 + 49) +
                one_over_two_q * *(b + 119 * OS1_S1 + 34);
            *(b + 119 * OS1_S1 + 71) = prefactor_x * *(b + 119 * OS1_S1 + 50) -
                                       p_over_q * *(b + 155 * OS1_S1 + 50);
            *(b + 119 * OS1_S1 + 72) = prefactor_x * *(b + 119 * OS1_S1 + 51) -
                                       p_over_q * *(b + 155 * OS1_S1 + 51);
            *(b + 119 * OS1_S1 + 73) = prefactor_x * *(b + 119 * OS1_S1 + 52) -
                                       p_over_q * *(b + 155 * OS1_S1 + 52);
            *(b + 119 * OS1_S1 + 74) = prefactor_x * *(b + 119 * OS1_S1 + 53) -
                                       p_over_q * *(b + 155 * OS1_S1 + 53);
            *(b + 119 * OS1_S1 + 75) = prefactor_y * *(b + 119 * OS1_S1 + 49) -
                                       p_over_q * *(b + 163 * OS1_S1 + 49);
            *(b + 119 * OS1_S1 + 76) = prefactor_x * *(b + 119 * OS1_S1 + 55) -
                                       p_over_q * *(b + 155 * OS1_S1 + 55);
            *(b + 119 * OS1_S1 + 77) =
                prefactor_y * *(b + 119 * OS1_S1 + 50) -
                p_over_q * *(b + 163 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 119 * OS1_S1 + 30);
            *(b + 119 * OS1_S1 + 78) =
                prefactor_z * *(b + 119 * OS1_S1 + 50) -
                p_over_q * *(b + 164 * OS1_S1 + 50) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 50);
            *(b + 119 * OS1_S1 + 79) =
                prefactor_z * *(b + 119 * OS1_S1 + 51) -
                p_over_q * *(b + 164 * OS1_S1 + 51) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 51) +
                one_over_two_q * *(b + 119 * OS1_S1 + 30);
            *(b + 119 * OS1_S1 + 80) =
                prefactor_y * *(b + 119 * OS1_S1 + 53) -
                p_over_q * *(b + 163 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 33);
            *(b + 119 * OS1_S1 + 81) =
                prefactor_y * *(b + 119 * OS1_S1 + 54) -
                p_over_q * *(b + 163 * OS1_S1 + 54) +
                one_over_two_q * *(b + 119 * OS1_S1 + 34);
            *(b + 119 * OS1_S1 + 82) = prefactor_y * *(b + 119 * OS1_S1 + 55) -
                                       p_over_q * *(b + 163 * OS1_S1 + 55);
            *(b + 119 * OS1_S1 + 83) =
                prefactor_z * *(b + 119 * OS1_S1 + 55) -
                p_over_q * *(b + 164 * OS1_S1 + 55) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 119 * OS1_S1 + 34);
            return;
        }
    }
}
