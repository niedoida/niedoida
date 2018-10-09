/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_5_6(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 35 * OS1_S1 + 56) =
                prefactor_x * *(b + 35 * OS1_S1 + 35) -
                p_over_q * *(b + 56 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 35 * OS1_S1 + 20);
            *(b + 35 * OS1_S1 + 57) = prefactor_y * *(b + 35 * OS1_S1 + 35) -
                                      p_over_q * *(b + 57 * OS1_S1 + 35);
            *(b + 35 * OS1_S1 + 58) = prefactor_z * *(b + 35 * OS1_S1 + 35) -
                                      p_over_q * *(b + 58 * OS1_S1 + 35);
            *(b + 35 * OS1_S1 + 59) = prefactor_y * *(b + 35 * OS1_S1 + 36) -
                                      p_over_q * *(b + 57 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 20);
            *(b + 35 * OS1_S1 + 60) = prefactor_z * *(b + 35 * OS1_S1 + 36) -
                                      p_over_q * *(b + 58 * OS1_S1 + 36);
            *(b + 35 * OS1_S1 + 61) = prefactor_z * *(b + 35 * OS1_S1 + 37) -
                                      p_over_q * *(b + 58 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 20);
            *(b + 35 * OS1_S1 + 62) =
                prefactor_y * *(b + 35 * OS1_S1 + 38) -
                p_over_q * *(b + 57 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 21);
            *(b + 35 * OS1_S1 + 63) = prefactor_z * *(b + 35 * OS1_S1 + 38) -
                                      p_over_q * *(b + 58 * OS1_S1 + 38);
            *(b + 35 * OS1_S1 + 64) = prefactor_y * *(b + 35 * OS1_S1 + 40) -
                                      p_over_q * *(b + 57 * OS1_S1 + 40);
            *(b + 35 * OS1_S1 + 65) =
                prefactor_z * *(b + 35 * OS1_S1 + 40) -
                p_over_q * *(b + 58 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 22);
            *(b + 35 * OS1_S1 + 66) =
                prefactor_x * *(b + 35 * OS1_S1 + 45) -
                p_over_q * *(b + 56 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 45) +
                one_over_two_q * *(b + 35 * OS1_S1 + 30);
            *(b + 35 * OS1_S1 + 67) = prefactor_z * *(b + 35 * OS1_S1 + 41) -
                                      p_over_q * *(b + 58 * OS1_S1 + 41);
            *(b + 35 * OS1_S1 + 68) = prefactor_z * *(b + 35 * OS1_S1 + 42) -
                                      p_over_q * *(b + 58 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 23);
            *(b + 35 * OS1_S1 + 69) = prefactor_y * *(b + 35 * OS1_S1 + 44) -
                                      p_over_q * *(b + 57 * OS1_S1 + 44);
            *(b + 35 * OS1_S1 + 70) =
                prefactor_x * *(b + 35 * OS1_S1 + 49) -
                p_over_q * *(b + 56 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 49) +
                one_over_two_q * *(b + 35 * OS1_S1 + 34);
            *(b + 35 * OS1_S1 + 71) =
                prefactor_x * *(b + 35 * OS1_S1 + 50) -
                p_over_q * *(b + 56 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 50);
            *(b + 35 * OS1_S1 + 72) = prefactor_z * *(b + 35 * OS1_S1 + 45) -
                                      p_over_q * *(b + 58 * OS1_S1 + 45);
            *(b + 35 * OS1_S1 + 73) =
                prefactor_x * *(b + 35 * OS1_S1 + 52) -
                p_over_q * *(b + 56 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 52);
            *(b + 35 * OS1_S1 + 74) =
                prefactor_x * *(b + 35 * OS1_S1 + 53) -
                p_over_q * *(b + 56 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 53);
            *(b + 35 * OS1_S1 + 75) = prefactor_y * *(b + 35 * OS1_S1 + 49) -
                                      p_over_q * *(b + 57 * OS1_S1 + 49);
            *(b + 35 * OS1_S1 + 76) =
                prefactor_x * *(b + 35 * OS1_S1 + 55) -
                p_over_q * *(b + 56 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 55);
            *(b + 35 * OS1_S1 + 77) =
                prefactor_y * *(b + 35 * OS1_S1 + 50) -
                p_over_q * *(b + 57 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 35 * OS1_S1 + 30);
            *(b + 35 * OS1_S1 + 78) = prefactor_z * *(b + 35 * OS1_S1 + 50) -
                                      p_over_q * *(b + 58 * OS1_S1 + 50);
            *(b + 35 * OS1_S1 + 79) = prefactor_z * *(b + 35 * OS1_S1 + 51) -
                                      p_over_q * *(b + 58 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 30);
            *(b + 35 * OS1_S1 + 80) =
                prefactor_z * *(b + 35 * OS1_S1 + 52) -
                p_over_q * *(b + 58 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 31);
            *(b + 35 * OS1_S1 + 81) = prefactor_y * *(b + 35 * OS1_S1 + 54) -
                                      p_over_q * *(b + 57 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 34);
            *(b + 35 * OS1_S1 + 82) = prefactor_y * *(b + 35 * OS1_S1 + 55) -
                                      p_over_q * *(b + 57 * OS1_S1 + 55);
            *(b + 35 * OS1_S1 + 83) =
                prefactor_z * *(b + 35 * OS1_S1 + 55) -
                p_over_q * *(b + 58 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 35 * OS1_S1 + 34);
            *(b + 36 * OS1_S1 + 56) =
                prefactor_x * *(b + 36 * OS1_S1 + 35) -
                p_over_q * *(b + 57 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 20);
            *(b + 36 * OS1_S1 + 57) = prefactor_y * *(b + 36 * OS1_S1 + 35) -
                                      p_over_q * *(b + 59 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 35);
            *(b + 36 * OS1_S1 + 58) = prefactor_z * *(b + 36 * OS1_S1 + 35) -
                                      p_over_q * *(b + 60 * OS1_S1 + 35);
            *(b + 36 * OS1_S1 + 59) = prefactor_y * *(b + 36 * OS1_S1 + 36) -
                                      p_over_q * *(b + 59 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 20);
            *(b + 36 * OS1_S1 + 60) = prefactor_z * *(b + 36 * OS1_S1 + 36) -
                                      p_over_q * *(b + 60 * OS1_S1 + 36);
            *(b + 36 * OS1_S1 + 61) = prefactor_z * *(b + 36 * OS1_S1 + 37) -
                                      p_over_q * *(b + 60 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 20);
            *(b + 36 * OS1_S1 + 62) =
                prefactor_y * *(b + 36 * OS1_S1 + 38) -
                p_over_q * *(b + 59 * OS1_S1 + 38) +
                one_over_two_q * *(b + 20 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 21);
            *(b + 36 * OS1_S1 + 63) = prefactor_z * *(b + 36 * OS1_S1 + 38) -
                                      p_over_q * *(b + 60 * OS1_S1 + 38);
            *(b + 36 * OS1_S1 + 64) = prefactor_y * *(b + 36 * OS1_S1 + 40) -
                                      p_over_q * *(b + 59 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 40);
            *(b + 36 * OS1_S1 + 65) =
                prefactor_z * *(b + 36 * OS1_S1 + 40) -
                p_over_q * *(b + 60 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 22);
            *(b + 36 * OS1_S1 + 66) =
                prefactor_x * *(b + 36 * OS1_S1 + 45) -
                p_over_q * *(b + 57 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 45) +
                one_over_two_q * *(b + 36 * OS1_S1 + 30);
            *(b + 36 * OS1_S1 + 67) = prefactor_z * *(b + 36 * OS1_S1 + 41) -
                                      p_over_q * *(b + 60 * OS1_S1 + 41);
            *(b + 36 * OS1_S1 + 68) = prefactor_z * *(b + 36 * OS1_S1 + 42) -
                                      p_over_q * *(b + 60 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 23);
            *(b + 36 * OS1_S1 + 69) = prefactor_y * *(b + 36 * OS1_S1 + 44) -
                                      p_over_q * *(b + 59 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 44);
            *(b + 36 * OS1_S1 + 70) =
                prefactor_x * *(b + 36 * OS1_S1 + 49) -
                p_over_q * *(b + 57 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 49) +
                one_over_two_q * *(b + 36 * OS1_S1 + 34);
            *(b + 36 * OS1_S1 + 71) =
                prefactor_x * *(b + 36 * OS1_S1 + 50) -
                p_over_q * *(b + 57 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 50);
            *(b + 36 * OS1_S1 + 72) = prefactor_z * *(b + 36 * OS1_S1 + 45) -
                                      p_over_q * *(b + 60 * OS1_S1 + 45);
            *(b + 36 * OS1_S1 + 73) =
                prefactor_x * *(b + 36 * OS1_S1 + 52) -
                p_over_q * *(b + 57 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 52);
            *(b + 36 * OS1_S1 + 74) =
                prefactor_x * *(b + 36 * OS1_S1 + 53) -
                p_over_q * *(b + 57 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 53);
            *(b + 36 * OS1_S1 + 75) = prefactor_y * *(b + 36 * OS1_S1 + 49) -
                                      p_over_q * *(b + 59 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 49);
            *(b + 36 * OS1_S1 + 76) =
                prefactor_x * *(b + 36 * OS1_S1 + 55) -
                p_over_q * *(b + 57 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 55);
            *(b + 36 * OS1_S1 + 77) =
                prefactor_y * *(b + 36 * OS1_S1 + 50) -
                p_over_q * *(b + 59 * OS1_S1 + 50) +
                one_over_two_q * *(b + 20 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 30);
            *(b + 36 * OS1_S1 + 78) = prefactor_z * *(b + 36 * OS1_S1 + 50) -
                                      p_over_q * *(b + 60 * OS1_S1 + 50);
            *(b + 36 * OS1_S1 + 79) = prefactor_z * *(b + 36 * OS1_S1 + 51) -
                                      p_over_q * *(b + 60 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 30);
            *(b + 36 * OS1_S1 + 80) =
                prefactor_z * *(b + 36 * OS1_S1 + 52) -
                p_over_q * *(b + 60 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 31);
            *(b + 36 * OS1_S1 + 81) = prefactor_y * *(b + 36 * OS1_S1 + 54) -
                                      p_over_q * *(b + 59 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 34);
            *(b + 36 * OS1_S1 + 82) = prefactor_y * *(b + 36 * OS1_S1 + 55) -
                                      p_over_q * *(b + 59 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 55);
            *(b + 36 * OS1_S1 + 83) =
                prefactor_z * *(b + 36 * OS1_S1 + 55) -
                p_over_q * *(b + 60 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 34);
            *(b + 37 * OS1_S1 + 56) =
                prefactor_x * *(b + 37 * OS1_S1 + 35) -
                p_over_q * *(b + 58 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 20);
            *(b + 37 * OS1_S1 + 57) = prefactor_y * *(b + 37 * OS1_S1 + 35) -
                                      p_over_q * *(b + 60 * OS1_S1 + 35);
            *(b + 37 * OS1_S1 + 58) = prefactor_z * *(b + 37 * OS1_S1 + 35) -
                                      p_over_q * *(b + 61 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 35);
            *(b + 37 * OS1_S1 + 59) = prefactor_y * *(b + 37 * OS1_S1 + 36) -
                                      p_over_q * *(b + 60 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 20);
            *(b + 37 * OS1_S1 + 60) = prefactor_y * *(b + 37 * OS1_S1 + 37) -
                                      p_over_q * *(b + 60 * OS1_S1 + 37);
            *(b + 37 * OS1_S1 + 61) = prefactor_z * *(b + 37 * OS1_S1 + 37) -
                                      p_over_q * *(b + 61 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 20);
            *(b + 37 * OS1_S1 + 62) =
                prefactor_y * *(b + 37 * OS1_S1 + 38) -
                p_over_q * *(b + 60 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 21);
            *(b + 37 * OS1_S1 + 63) = prefactor_z * *(b + 37 * OS1_S1 + 38) -
                                      p_over_q * *(b + 61 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 38);
            *(b + 37 * OS1_S1 + 64) = prefactor_y * *(b + 37 * OS1_S1 + 40) -
                                      p_over_q * *(b + 60 * OS1_S1 + 40);
            *(b + 37 * OS1_S1 + 65) =
                prefactor_z * *(b + 37 * OS1_S1 + 40) -
                p_over_q * *(b + 61 * OS1_S1 + 40) +
                one_over_two_q * *(b + 20 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 22);
            *(b + 37 * OS1_S1 + 66) =
                prefactor_x * *(b + 37 * OS1_S1 + 45) -
                p_over_q * *(b + 58 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 45) +
                one_over_two_q * *(b + 37 * OS1_S1 + 30);
            *(b + 37 * OS1_S1 + 67) = prefactor_z * *(b + 37 * OS1_S1 + 41) -
                                      p_over_q * *(b + 61 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 41);
            *(b + 37 * OS1_S1 + 68) = prefactor_y * *(b + 37 * OS1_S1 + 43) -
                                      p_over_q * *(b + 60 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 25);
            *(b + 37 * OS1_S1 + 69) = prefactor_y * *(b + 37 * OS1_S1 + 44) -
                                      p_over_q * *(b + 60 * OS1_S1 + 44);
            *(b + 37 * OS1_S1 + 70) =
                prefactor_x * *(b + 37 * OS1_S1 + 49) -
                p_over_q * *(b + 58 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 49) +
                one_over_two_q * *(b + 37 * OS1_S1 + 34);
            *(b + 37 * OS1_S1 + 71) =
                prefactor_x * *(b + 37 * OS1_S1 + 50) -
                p_over_q * *(b + 58 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 50);
            *(b + 37 * OS1_S1 + 72) = prefactor_z * *(b + 37 * OS1_S1 + 45) -
                                      p_over_q * *(b + 61 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 45);
            *(b + 37 * OS1_S1 + 73) =
                prefactor_x * *(b + 37 * OS1_S1 + 52) -
                p_over_q * *(b + 58 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 52);
            *(b + 37 * OS1_S1 + 74) =
                prefactor_x * *(b + 37 * OS1_S1 + 53) -
                p_over_q * *(b + 58 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 53);
            *(b + 37 * OS1_S1 + 75) = prefactor_y * *(b + 37 * OS1_S1 + 49) -
                                      p_over_q * *(b + 60 * OS1_S1 + 49);
            *(b + 37 * OS1_S1 + 76) =
                prefactor_x * *(b + 37 * OS1_S1 + 55) -
                p_over_q * *(b + 58 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 55);
            *(b + 37 * OS1_S1 + 77) =
                prefactor_y * *(b + 37 * OS1_S1 + 50) -
                p_over_q * *(b + 60 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 30);
            *(b + 37 * OS1_S1 + 78) = prefactor_z * *(b + 37 * OS1_S1 + 50) -
                                      p_over_q * *(b + 61 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 50);
            *(b + 37 * OS1_S1 + 79) = prefactor_z * *(b + 37 * OS1_S1 + 51) -
                                      p_over_q * *(b + 61 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 30);
            *(b + 37 * OS1_S1 + 80) =
                prefactor_y * *(b + 37 * OS1_S1 + 53) -
                p_over_q * *(b + 60 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 33);
            *(b + 37 * OS1_S1 + 81) = prefactor_y * *(b + 37 * OS1_S1 + 54) -
                                      p_over_q * *(b + 60 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 34);
            *(b + 37 * OS1_S1 + 82) = prefactor_y * *(b + 37 * OS1_S1 + 55) -
                                      p_over_q * *(b + 60 * OS1_S1 + 55);
            *(b + 37 * OS1_S1 + 83) =
                prefactor_z * *(b + 37 * OS1_S1 + 55) -
                p_over_q * *(b + 61 * OS1_S1 + 55) +
                one_over_two_q * *(b + 20 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 34);
            *(b + 38 * OS1_S1 + 56) =
                prefactor_x * *(b + 38 * OS1_S1 + 35) -
                p_over_q * *(b + 59 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 38 * OS1_S1 + 20);
            *(b + 38 * OS1_S1 + 57) =
                prefactor_y * *(b + 38 * OS1_S1 + 35) -
                p_over_q * *(b + 62 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 35);
            *(b + 38 * OS1_S1 + 58) = prefactor_z * *(b + 38 * OS1_S1 + 35) -
                                      p_over_q * *(b + 63 * OS1_S1 + 35);
            *(b + 38 * OS1_S1 + 59) =
                prefactor_y * *(b + 38 * OS1_S1 + 36) -
                p_over_q * *(b + 62 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 36) +
                one_over_two_q * *(b + 38 * OS1_S1 + 20);
            *(b + 38 * OS1_S1 + 60) = prefactor_z * *(b + 38 * OS1_S1 + 36) -
                                      p_over_q * *(b + 63 * OS1_S1 + 36);
            *(b + 38 * OS1_S1 + 61) = prefactor_z * *(b + 38 * OS1_S1 + 37) -
                                      p_over_q * *(b + 63 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 20);
            *(b + 38 * OS1_S1 + 62) =
                prefactor_y * *(b + 38 * OS1_S1 + 38) -
                p_over_q * *(b + 62 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 21);
            *(b + 38 * OS1_S1 + 63) = prefactor_z * *(b + 38 * OS1_S1 + 38) -
                                      p_over_q * *(b + 63 * OS1_S1 + 38);
            *(b + 38 * OS1_S1 + 64) =
                prefactor_y * *(b + 38 * OS1_S1 + 40) -
                p_over_q * *(b + 62 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 40);
            *(b + 38 * OS1_S1 + 65) =
                prefactor_z * *(b + 38 * OS1_S1 + 40) -
                p_over_q * *(b + 63 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 22);
            *(b + 38 * OS1_S1 + 66) =
                prefactor_x * *(b + 38 * OS1_S1 + 45) -
                p_over_q * *(b + 59 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 45) +
                one_over_two_q * *(b + 38 * OS1_S1 + 30);
            *(b + 38 * OS1_S1 + 67) = prefactor_z * *(b + 38 * OS1_S1 + 41) -
                                      p_over_q * *(b + 63 * OS1_S1 + 41);
            *(b + 38 * OS1_S1 + 68) = prefactor_z * *(b + 38 * OS1_S1 + 42) -
                                      p_over_q * *(b + 63 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 23);
            *(b + 38 * OS1_S1 + 69) =
                prefactor_y * *(b + 38 * OS1_S1 + 44) -
                p_over_q * *(b + 62 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 44);
            *(b + 38 * OS1_S1 + 70) =
                prefactor_x * *(b + 38 * OS1_S1 + 49) -
                p_over_q * *(b + 59 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 49) +
                one_over_two_q * *(b + 38 * OS1_S1 + 34);
            *(b + 38 * OS1_S1 + 71) =
                prefactor_x * *(b + 38 * OS1_S1 + 50) -
                p_over_q * *(b + 59 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 50);
            *(b + 38 * OS1_S1 + 72) = prefactor_z * *(b + 38 * OS1_S1 + 45) -
                                      p_over_q * *(b + 63 * OS1_S1 + 45);
            *(b + 38 * OS1_S1 + 73) =
                prefactor_x * *(b + 38 * OS1_S1 + 52) -
                p_over_q * *(b + 59 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 52);
            *(b + 38 * OS1_S1 + 74) =
                prefactor_x * *(b + 38 * OS1_S1 + 53) -
                p_over_q * *(b + 59 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 53);
            *(b + 38 * OS1_S1 + 75) =
                prefactor_y * *(b + 38 * OS1_S1 + 49) -
                p_over_q * *(b + 62 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 49);
            *(b + 38 * OS1_S1 + 76) =
                prefactor_x * *(b + 38 * OS1_S1 + 55) -
                p_over_q * *(b + 59 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 55);
            *(b + 38 * OS1_S1 + 77) =
                prefactor_y * *(b + 38 * OS1_S1 + 50) -
                p_over_q * *(b + 62 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 38 * OS1_S1 + 30);
            *(b + 38 * OS1_S1 + 78) = prefactor_z * *(b + 38 * OS1_S1 + 50) -
                                      p_over_q * *(b + 63 * OS1_S1 + 50);
            *(b + 38 * OS1_S1 + 79) = prefactor_z * *(b + 38 * OS1_S1 + 51) -
                                      p_over_q * *(b + 63 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 30);
            *(b + 38 * OS1_S1 + 80) =
                prefactor_z * *(b + 38 * OS1_S1 + 52) -
                p_over_q * *(b + 63 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 31);
            *(b + 38 * OS1_S1 + 81) =
                prefactor_y * *(b + 38 * OS1_S1 + 54) -
                p_over_q * *(b + 62 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 54) +
                one_over_two_q * *(b + 38 * OS1_S1 + 34);
            *(b + 38 * OS1_S1 + 82) =
                prefactor_y * *(b + 38 * OS1_S1 + 55) -
                p_over_q * *(b + 62 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 55);
            *(b + 38 * OS1_S1 + 83) =
                prefactor_z * *(b + 38 * OS1_S1 + 55) -
                p_over_q * *(b + 63 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 38 * OS1_S1 + 34);
            *(b + 39 * OS1_S1 + 56) =
                prefactor_x * *(b + 39 * OS1_S1 + 35) -
                p_over_q * *(b + 60 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 39 * OS1_S1 + 20);
            *(b + 39 * OS1_S1 + 57) = prefactor_y * *(b + 39 * OS1_S1 + 35) -
                                      p_over_q * *(b + 63 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 35);
            *(b + 39 * OS1_S1 + 58) = prefactor_z * *(b + 39 * OS1_S1 + 35) -
                                      p_over_q * *(b + 64 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 35);
            *(b + 39 * OS1_S1 + 59) = prefactor_y * *(b + 39 * OS1_S1 + 36) -
                                      p_over_q * *(b + 63 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 20);
            *(b + 39 * OS1_S1 + 60) = prefactor_z * *(b + 39 * OS1_S1 + 36) -
                                      p_over_q * *(b + 64 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 36);
            *(b + 39 * OS1_S1 + 61) = prefactor_z * *(b + 39 * OS1_S1 + 37) -
                                      p_over_q * *(b + 64 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 20);
            *(b + 39 * OS1_S1 + 62) =
                prefactor_y * *(b + 39 * OS1_S1 + 38) -
                p_over_q * *(b + 63 * OS1_S1 + 38) +
                one_over_two_q * *(b + 22 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 21);
            *(b + 39 * OS1_S1 + 63) = prefactor_z * *(b + 39 * OS1_S1 + 38) -
                                      p_over_q * *(b + 64 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 38);
            *(b + 39 * OS1_S1 + 64) = prefactor_y * *(b + 39 * OS1_S1 + 40) -
                                      p_over_q * *(b + 63 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 40);
            *(b + 39 * OS1_S1 + 65) =
                prefactor_z * *(b + 39 * OS1_S1 + 40) -
                p_over_q * *(b + 64 * OS1_S1 + 40) +
                one_over_two_q * *(b + 21 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 22);
            *(b + 39 * OS1_S1 + 66) =
                prefactor_x * *(b + 39 * OS1_S1 + 45) -
                p_over_q * *(b + 60 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 45) +
                one_over_two_q * *(b + 39 * OS1_S1 + 30);
            *(b + 39 * OS1_S1 + 67) = prefactor_z * *(b + 39 * OS1_S1 + 41) -
                                      p_over_q * *(b + 64 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 41);
            *(b + 39 * OS1_S1 + 68) = prefactor_z * *(b + 39 * OS1_S1 + 42) -
                                      p_over_q * *(b + 64 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 23);
            *(b + 39 * OS1_S1 + 69) = prefactor_y * *(b + 39 * OS1_S1 + 44) -
                                      p_over_q * *(b + 63 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 44);
            *(b + 39 * OS1_S1 + 70) =
                prefactor_x * *(b + 39 * OS1_S1 + 49) -
                p_over_q * *(b + 60 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 49) +
                one_over_two_q * *(b + 39 * OS1_S1 + 34);
            *(b + 39 * OS1_S1 + 71) =
                prefactor_x * *(b + 39 * OS1_S1 + 50) -
                p_over_q * *(b + 60 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 50);
            *(b + 39 * OS1_S1 + 72) = prefactor_z * *(b + 39 * OS1_S1 + 45) -
                                      p_over_q * *(b + 64 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 45);
            *(b + 39 * OS1_S1 + 73) =
                prefactor_x * *(b + 39 * OS1_S1 + 52) -
                p_over_q * *(b + 60 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 52);
            *(b + 39 * OS1_S1 + 74) =
                prefactor_x * *(b + 39 * OS1_S1 + 53) -
                p_over_q * *(b + 60 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 53);
            *(b + 39 * OS1_S1 + 75) = prefactor_y * *(b + 39 * OS1_S1 + 49) -
                                      p_over_q * *(b + 63 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 49);
            *(b + 39 * OS1_S1 + 76) =
                prefactor_x * *(b + 39 * OS1_S1 + 55) -
                p_over_q * *(b + 60 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 55);
            *(b + 39 * OS1_S1 + 77) =
                prefactor_y * *(b + 39 * OS1_S1 + 50) -
                p_over_q * *(b + 63 * OS1_S1 + 50) +
                one_over_two_q * *(b + 22 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 39 * OS1_S1 + 30);
            *(b + 39 * OS1_S1 + 78) = prefactor_z * *(b + 39 * OS1_S1 + 50) -
                                      p_over_q * *(b + 64 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 50);
            *(b + 39 * OS1_S1 + 79) = prefactor_z * *(b + 39 * OS1_S1 + 51) -
                                      p_over_q * *(b + 64 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 30);
            *(b + 39 * OS1_S1 + 80) =
                prefactor_z * *(b + 39 * OS1_S1 + 52) -
                p_over_q * *(b + 64 * OS1_S1 + 52) +
                one_over_two_q * *(b + 21 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 31);
            *(b + 39 * OS1_S1 + 81) = prefactor_y * *(b + 39 * OS1_S1 + 54) -
                                      p_over_q * *(b + 63 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 34);
            *(b + 39 * OS1_S1 + 82) = prefactor_y * *(b + 39 * OS1_S1 + 55) -
                                      p_over_q * *(b + 63 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 55);
            *(b + 39 * OS1_S1 + 83) =
                prefactor_z * *(b + 39 * OS1_S1 + 55) -
                p_over_q * *(b + 64 * OS1_S1 + 55) +
                one_over_two_q * *(b + 21 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 39 * OS1_S1 + 34);
            *(b + 40 * OS1_S1 + 56) =
                prefactor_x * *(b + 40 * OS1_S1 + 35) -
                p_over_q * *(b + 61 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 40 * OS1_S1 + 20);
            *(b + 40 * OS1_S1 + 57) = prefactor_y * *(b + 40 * OS1_S1 + 35) -
                                      p_over_q * *(b + 64 * OS1_S1 + 35);
            *(b + 40 * OS1_S1 + 58) =
                prefactor_z * *(b + 40 * OS1_S1 + 35) -
                p_over_q * *(b + 65 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 35);
            *(b + 40 * OS1_S1 + 59) = prefactor_y * *(b + 40 * OS1_S1 + 36) -
                                      p_over_q * *(b + 64 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 20);
            *(b + 40 * OS1_S1 + 60) = prefactor_y * *(b + 40 * OS1_S1 + 37) -
                                      p_over_q * *(b + 64 * OS1_S1 + 37);
            *(b + 40 * OS1_S1 + 61) =
                prefactor_z * *(b + 40 * OS1_S1 + 37) -
                p_over_q * *(b + 65 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 37) +
                one_over_two_q * *(b + 40 * OS1_S1 + 20);
            *(b + 40 * OS1_S1 + 62) =
                prefactor_y * *(b + 40 * OS1_S1 + 38) -
                p_over_q * *(b + 64 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 21);
            *(b + 40 * OS1_S1 + 63) =
                prefactor_z * *(b + 40 * OS1_S1 + 38) -
                p_over_q * *(b + 65 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 38);
            *(b + 40 * OS1_S1 + 64) = prefactor_y * *(b + 40 * OS1_S1 + 40) -
                                      p_over_q * *(b + 64 * OS1_S1 + 40);
            *(b + 40 * OS1_S1 + 65) =
                prefactor_z * *(b + 40 * OS1_S1 + 40) -
                p_over_q * *(b + 65 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 22);
            *(b + 40 * OS1_S1 + 66) =
                prefactor_x * *(b + 40 * OS1_S1 + 45) -
                p_over_q * *(b + 61 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 45) +
                one_over_two_q * *(b + 40 * OS1_S1 + 30);
            *(b + 40 * OS1_S1 + 67) =
                prefactor_z * *(b + 40 * OS1_S1 + 41) -
                p_over_q * *(b + 65 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 41);
            *(b + 40 * OS1_S1 + 68) = prefactor_y * *(b + 40 * OS1_S1 + 43) -
                                      p_over_q * *(b + 64 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 25);
            *(b + 40 * OS1_S1 + 69) = prefactor_y * *(b + 40 * OS1_S1 + 44) -
                                      p_over_q * *(b + 64 * OS1_S1 + 44);
            *(b + 40 * OS1_S1 + 70) =
                prefactor_x * *(b + 40 * OS1_S1 + 49) -
                p_over_q * *(b + 61 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 49) +
                one_over_two_q * *(b + 40 * OS1_S1 + 34);
            *(b + 40 * OS1_S1 + 71) =
                prefactor_x * *(b + 40 * OS1_S1 + 50) -
                p_over_q * *(b + 61 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 50);
            *(b + 40 * OS1_S1 + 72) =
                prefactor_z * *(b + 40 * OS1_S1 + 45) -
                p_over_q * *(b + 65 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 45);
            *(b + 40 * OS1_S1 + 73) =
                prefactor_x * *(b + 40 * OS1_S1 + 52) -
                p_over_q * *(b + 61 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 52);
            *(b + 40 * OS1_S1 + 74) =
                prefactor_x * *(b + 40 * OS1_S1 + 53) -
                p_over_q * *(b + 61 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 53);
            *(b + 40 * OS1_S1 + 75) = prefactor_y * *(b + 40 * OS1_S1 + 49) -
                                      p_over_q * *(b + 64 * OS1_S1 + 49);
            *(b + 40 * OS1_S1 + 76) =
                prefactor_x * *(b + 40 * OS1_S1 + 55) -
                p_over_q * *(b + 61 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 55);
            *(b + 40 * OS1_S1 + 77) =
                prefactor_y * *(b + 40 * OS1_S1 + 50) -
                p_over_q * *(b + 64 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 40 * OS1_S1 + 30);
            *(b + 40 * OS1_S1 + 78) =
                prefactor_z * *(b + 40 * OS1_S1 + 50) -
                p_over_q * *(b + 65 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 50);
            *(b + 40 * OS1_S1 + 79) =
                prefactor_z * *(b + 40 * OS1_S1 + 51) -
                p_over_q * *(b + 65 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 51) +
                one_over_two_q * *(b + 40 * OS1_S1 + 30);
            *(b + 40 * OS1_S1 + 80) =
                prefactor_y * *(b + 40 * OS1_S1 + 53) -
                p_over_q * *(b + 64 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 33);
            *(b + 40 * OS1_S1 + 81) = prefactor_y * *(b + 40 * OS1_S1 + 54) -
                                      p_over_q * *(b + 64 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 34);
            *(b + 40 * OS1_S1 + 82) = prefactor_y * *(b + 40 * OS1_S1 + 55) -
                                      p_over_q * *(b + 64 * OS1_S1 + 55);
            *(b + 40 * OS1_S1 + 83) =
                prefactor_z * *(b + 40 * OS1_S1 + 55) -
                p_over_q * *(b + 65 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 40 * OS1_S1 + 34);
            *(b + 41 * OS1_S1 + 56) =
                prefactor_x * *(b + 41 * OS1_S1 + 35) -
                p_over_q * *(b + 62 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 41 * OS1_S1 + 20);
            *(b + 41 * OS1_S1 + 57) =
                prefactor_y * *(b + 41 * OS1_S1 + 35) -
                p_over_q * *(b + 66 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 35);
            *(b + 41 * OS1_S1 + 58) = prefactor_z * *(b + 41 * OS1_S1 + 35) -
                                      p_over_q * *(b + 67 * OS1_S1 + 35);
            *(b + 41 * OS1_S1 + 59) =
                prefactor_y * *(b + 41 * OS1_S1 + 36) -
                p_over_q * *(b + 66 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 36) +
                one_over_two_q * *(b + 41 * OS1_S1 + 20);
            *(b + 41 * OS1_S1 + 60) = prefactor_z * *(b + 41 * OS1_S1 + 36) -
                                      p_over_q * *(b + 67 * OS1_S1 + 36);
            *(b + 41 * OS1_S1 + 61) = prefactor_z * *(b + 41 * OS1_S1 + 37) -
                                      p_over_q * *(b + 67 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 20);
            *(b + 41 * OS1_S1 + 62) =
                prefactor_x * *(b + 41 * OS1_S1 + 41) -
                p_over_q * *(b + 62 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 26);
            *(b + 41 * OS1_S1 + 63) = prefactor_z * *(b + 41 * OS1_S1 + 38) -
                                      p_over_q * *(b + 67 * OS1_S1 + 38);
            *(b + 41 * OS1_S1 + 64) =
                prefactor_y * *(b + 41 * OS1_S1 + 40) -
                p_over_q * *(b + 66 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 40);
            *(b + 41 * OS1_S1 + 65) =
                prefactor_z * *(b + 41 * OS1_S1 + 40) -
                p_over_q * *(b + 67 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 22);
            *(b + 41 * OS1_S1 + 66) =
                prefactor_x * *(b + 41 * OS1_S1 + 45) -
                p_over_q * *(b + 62 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 45) +
                one_over_two_q * *(b + 41 * OS1_S1 + 30);
            *(b + 41 * OS1_S1 + 67) = prefactor_z * *(b + 41 * OS1_S1 + 41) -
                                      p_over_q * *(b + 67 * OS1_S1 + 41);
            *(b + 41 * OS1_S1 + 68) = prefactor_z * *(b + 41 * OS1_S1 + 42) -
                                      p_over_q * *(b + 67 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 23);
            *(b + 41 * OS1_S1 + 69) =
                prefactor_y * *(b + 41 * OS1_S1 + 44) -
                p_over_q * *(b + 66 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 44);
            *(b + 41 * OS1_S1 + 70) =
                prefactor_x * *(b + 41 * OS1_S1 + 49) -
                p_over_q * *(b + 62 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 49) +
                one_over_two_q * *(b + 41 * OS1_S1 + 34);
            *(b + 41 * OS1_S1 + 71) =
                prefactor_x * *(b + 41 * OS1_S1 + 50) -
                p_over_q * *(b + 62 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 50);
            *(b + 41 * OS1_S1 + 72) = prefactor_z * *(b + 41 * OS1_S1 + 45) -
                                      p_over_q * *(b + 67 * OS1_S1 + 45);
            *(b + 41 * OS1_S1 + 73) =
                prefactor_x * *(b + 41 * OS1_S1 + 52) -
                p_over_q * *(b + 62 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 52);
            *(b + 41 * OS1_S1 + 74) =
                prefactor_x * *(b + 41 * OS1_S1 + 53) -
                p_over_q * *(b + 62 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 53);
            *(b + 41 * OS1_S1 + 75) =
                prefactor_x * *(b + 41 * OS1_S1 + 54) -
                p_over_q * *(b + 62 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 54);
            *(b + 41 * OS1_S1 + 76) =
                prefactor_x * *(b + 41 * OS1_S1 + 55) -
                p_over_q * *(b + 62 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 55);
            *(b + 41 * OS1_S1 + 77) =
                prefactor_y * *(b + 41 * OS1_S1 + 50) -
                p_over_q * *(b + 66 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 41 * OS1_S1 + 30);
            *(b + 41 * OS1_S1 + 78) = prefactor_z * *(b + 41 * OS1_S1 + 50) -
                                      p_over_q * *(b + 67 * OS1_S1 + 50);
            *(b + 41 * OS1_S1 + 79) = prefactor_z * *(b + 41 * OS1_S1 + 51) -
                                      p_over_q * *(b + 67 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 30);
            *(b + 41 * OS1_S1 + 80) =
                prefactor_z * *(b + 41 * OS1_S1 + 52) -
                p_over_q * *(b + 67 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 31);
            *(b + 41 * OS1_S1 + 81) =
                prefactor_y * *(b + 41 * OS1_S1 + 54) -
                p_over_q * *(b + 66 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 54) +
                one_over_two_q * *(b + 41 * OS1_S1 + 34);
            *(b + 41 * OS1_S1 + 82) =
                prefactor_y * *(b + 41 * OS1_S1 + 55) -
                p_over_q * *(b + 66 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 55);
            *(b + 41 * OS1_S1 + 83) =
                prefactor_z * *(b + 41 * OS1_S1 + 55) -
                p_over_q * *(b + 67 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 41 * OS1_S1 + 34);
            *(b + 42 * OS1_S1 + 56) =
                prefactor_x * *(b + 42 * OS1_S1 + 35) -
                p_over_q * *(b + 63 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 42 * OS1_S1 + 20);
            *(b + 42 * OS1_S1 + 57) =
                prefactor_y * *(b + 42 * OS1_S1 + 35) -
                p_over_q * *(b + 67 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 35);
            *(b + 42 * OS1_S1 + 58) = prefactor_z * *(b + 42 * OS1_S1 + 35) -
                                      p_over_q * *(b + 68 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 35);
            *(b + 42 * OS1_S1 + 59) =
                prefactor_y * *(b + 42 * OS1_S1 + 36) -
                p_over_q * *(b + 67 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 36) +
                one_over_two_q * *(b + 42 * OS1_S1 + 20);
            *(b + 42 * OS1_S1 + 60) = prefactor_z * *(b + 42 * OS1_S1 + 36) -
                                      p_over_q * *(b + 68 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 36);
            *(b + 42 * OS1_S1 + 61) = prefactor_z * *(b + 42 * OS1_S1 + 37) -
                                      p_over_q * *(b + 68 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 42 * OS1_S1 + 20);
            *(b + 42 * OS1_S1 + 62) =
                prefactor_y * *(b + 42 * OS1_S1 + 38) -
                p_over_q * *(b + 67 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 21);
            *(b + 42 * OS1_S1 + 63) = prefactor_z * *(b + 42 * OS1_S1 + 38) -
                                      p_over_q * *(b + 68 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 38);
            *(b + 42 * OS1_S1 + 64) =
                prefactor_y * *(b + 42 * OS1_S1 + 40) -
                p_over_q * *(b + 67 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 40);
            *(b + 42 * OS1_S1 + 65) =
                prefactor_z * *(b + 42 * OS1_S1 + 40) -
                p_over_q * *(b + 68 * OS1_S1 + 40) +
                one_over_two_q * *(b + 23 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 22);
            *(b + 42 * OS1_S1 + 66) =
                prefactor_x * *(b + 42 * OS1_S1 + 45) -
                p_over_q * *(b + 63 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 45) +
                one_over_two_q * *(b + 42 * OS1_S1 + 30);
            *(b + 42 * OS1_S1 + 67) = prefactor_z * *(b + 42 * OS1_S1 + 41) -
                                      p_over_q * *(b + 68 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 41);
            *(b + 42 * OS1_S1 + 68) = prefactor_z * *(b + 42 * OS1_S1 + 42) -
                                      p_over_q * *(b + 68 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 42 * OS1_S1 + 23);
            *(b + 42 * OS1_S1 + 69) =
                prefactor_y * *(b + 42 * OS1_S1 + 44) -
                p_over_q * *(b + 67 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 44);
            *(b + 42 * OS1_S1 + 70) =
                prefactor_x * *(b + 42 * OS1_S1 + 49) -
                p_over_q * *(b + 63 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 49) +
                one_over_two_q * *(b + 42 * OS1_S1 + 34);
            *(b + 42 * OS1_S1 + 71) =
                prefactor_x * *(b + 42 * OS1_S1 + 50) -
                p_over_q * *(b + 63 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 50);
            *(b + 42 * OS1_S1 + 72) = prefactor_z * *(b + 42 * OS1_S1 + 45) -
                                      p_over_q * *(b + 68 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 45);
            *(b + 42 * OS1_S1 + 73) =
                prefactor_x * *(b + 42 * OS1_S1 + 52) -
                p_over_q * *(b + 63 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 52);
            *(b + 42 * OS1_S1 + 74) =
                prefactor_x * *(b + 42 * OS1_S1 + 53) -
                p_over_q * *(b + 63 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 53);
            *(b + 42 * OS1_S1 + 75) =
                prefactor_y * *(b + 42 * OS1_S1 + 49) -
                p_over_q * *(b + 67 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 49);
            *(b + 42 * OS1_S1 + 76) =
                prefactor_x * *(b + 42 * OS1_S1 + 55) -
                p_over_q * *(b + 63 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 55);
            *(b + 42 * OS1_S1 + 77) =
                prefactor_y * *(b + 42 * OS1_S1 + 50) -
                p_over_q * *(b + 67 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 42 * OS1_S1 + 30);
            *(b + 42 * OS1_S1 + 78) = prefactor_z * *(b + 42 * OS1_S1 + 50) -
                                      p_over_q * *(b + 68 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 50);
            *(b + 42 * OS1_S1 + 79) = prefactor_z * *(b + 42 * OS1_S1 + 51) -
                                      p_over_q * *(b + 68 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 42 * OS1_S1 + 30);
            *(b + 42 * OS1_S1 + 80) =
                prefactor_z * *(b + 42 * OS1_S1 + 52) -
                p_over_q * *(b + 68 * OS1_S1 + 52) +
                one_over_two_q * *(b + 23 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 31);
            *(b + 42 * OS1_S1 + 81) =
                prefactor_y * *(b + 42 * OS1_S1 + 54) -
                p_over_q * *(b + 67 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 54) +
                one_over_two_q * *(b + 42 * OS1_S1 + 34);
            *(b + 42 * OS1_S1 + 82) =
                prefactor_y * *(b + 42 * OS1_S1 + 55) -
                p_over_q * *(b + 67 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 55);
            *(b + 42 * OS1_S1 + 83) =
                prefactor_z * *(b + 42 * OS1_S1 + 55) -
                p_over_q * *(b + 68 * OS1_S1 + 55) +
                one_over_two_q * *(b + 23 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 42 * OS1_S1 + 34);
            *(b + 43 * OS1_S1 + 56) =
                prefactor_x * *(b + 43 * OS1_S1 + 35) -
                p_over_q * *(b + 64 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 43 * OS1_S1 + 20);
            *(b + 43 * OS1_S1 + 57) = prefactor_y * *(b + 43 * OS1_S1 + 35) -
                                      p_over_q * *(b + 68 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 35);
            *(b + 43 * OS1_S1 + 58) =
                prefactor_z * *(b + 43 * OS1_S1 + 35) -
                p_over_q * *(b + 69 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 35);
            *(b + 43 * OS1_S1 + 59) = prefactor_y * *(b + 43 * OS1_S1 + 36) -
                                      p_over_q * *(b + 68 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 43 * OS1_S1 + 20);
            *(b + 43 * OS1_S1 + 60) = prefactor_y * *(b + 43 * OS1_S1 + 37) -
                                      p_over_q * *(b + 68 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 37);
            *(b + 43 * OS1_S1 + 61) =
                prefactor_z * *(b + 43 * OS1_S1 + 37) -
                p_over_q * *(b + 69 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 37) +
                one_over_two_q * *(b + 43 * OS1_S1 + 20);
            *(b + 43 * OS1_S1 + 62) =
                prefactor_y * *(b + 43 * OS1_S1 + 38) -
                p_over_q * *(b + 68 * OS1_S1 + 38) +
                one_over_two_q * *(b + 25 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 21);
            *(b + 43 * OS1_S1 + 63) =
                prefactor_z * *(b + 43 * OS1_S1 + 38) -
                p_over_q * *(b + 69 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 38);
            *(b + 43 * OS1_S1 + 64) = prefactor_y * *(b + 43 * OS1_S1 + 40) -
                                      p_over_q * *(b + 68 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 40);
            *(b + 43 * OS1_S1 + 65) =
                prefactor_z * *(b + 43 * OS1_S1 + 40) -
                p_over_q * *(b + 69 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 22);
            *(b + 43 * OS1_S1 + 66) =
                prefactor_x * *(b + 43 * OS1_S1 + 45) -
                p_over_q * *(b + 64 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 45) +
                one_over_two_q * *(b + 43 * OS1_S1 + 30);
            *(b + 43 * OS1_S1 + 67) =
                prefactor_z * *(b + 43 * OS1_S1 + 41) -
                p_over_q * *(b + 69 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 41);
            *(b + 43 * OS1_S1 + 68) = prefactor_y * *(b + 43 * OS1_S1 + 43) -
                                      p_over_q * *(b + 68 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 43 * OS1_S1 + 25);
            *(b + 43 * OS1_S1 + 69) = prefactor_y * *(b + 43 * OS1_S1 + 44) -
                                      p_over_q * *(b + 68 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 44);
            *(b + 43 * OS1_S1 + 70) =
                prefactor_x * *(b + 43 * OS1_S1 + 49) -
                p_over_q * *(b + 64 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 49) +
                one_over_two_q * *(b + 43 * OS1_S1 + 34);
            *(b + 43 * OS1_S1 + 71) =
                prefactor_x * *(b + 43 * OS1_S1 + 50) -
                p_over_q * *(b + 64 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 50);
            *(b + 43 * OS1_S1 + 72) =
                prefactor_z * *(b + 43 * OS1_S1 + 45) -
                p_over_q * *(b + 69 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 45);
            *(b + 43 * OS1_S1 + 73) =
                prefactor_x * *(b + 43 * OS1_S1 + 52) -
                p_over_q * *(b + 64 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 52);
            *(b + 43 * OS1_S1 + 74) =
                prefactor_x * *(b + 43 * OS1_S1 + 53) -
                p_over_q * *(b + 64 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 53);
            *(b + 43 * OS1_S1 + 75) = prefactor_y * *(b + 43 * OS1_S1 + 49) -
                                      p_over_q * *(b + 68 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 49);
            *(b + 43 * OS1_S1 + 76) =
                prefactor_x * *(b + 43 * OS1_S1 + 55) -
                p_over_q * *(b + 64 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 55);
            *(b + 43 * OS1_S1 + 77) =
                prefactor_y * *(b + 43 * OS1_S1 + 50) -
                p_over_q * *(b + 68 * OS1_S1 + 50) +
                one_over_two_q * *(b + 25 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 43 * OS1_S1 + 30);
            *(b + 43 * OS1_S1 + 78) =
                prefactor_z * *(b + 43 * OS1_S1 + 50) -
                p_over_q * *(b + 69 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 50);
            *(b + 43 * OS1_S1 + 79) =
                prefactor_z * *(b + 43 * OS1_S1 + 51) -
                p_over_q * *(b + 69 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 51) +
                one_over_two_q * *(b + 43 * OS1_S1 + 30);
            *(b + 43 * OS1_S1 + 80) =
                prefactor_y * *(b + 43 * OS1_S1 + 53) -
                p_over_q * *(b + 68 * OS1_S1 + 53) +
                one_over_two_q * *(b + 25 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 33);
            *(b + 43 * OS1_S1 + 81) = prefactor_y * *(b + 43 * OS1_S1 + 54) -
                                      p_over_q * *(b + 68 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 43 * OS1_S1 + 34);
            *(b + 43 * OS1_S1 + 82) = prefactor_y * *(b + 43 * OS1_S1 + 55) -
                                      p_over_q * *(b + 68 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 55);
            *(b + 43 * OS1_S1 + 83) =
                prefactor_z * *(b + 43 * OS1_S1 + 55) -
                p_over_q * *(b + 69 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 43 * OS1_S1 + 34);
            *(b + 44 * OS1_S1 + 56) =
                prefactor_x * *(b + 44 * OS1_S1 + 35) -
                p_over_q * *(b + 65 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 44 * OS1_S1 + 20);
            *(b + 44 * OS1_S1 + 57) = prefactor_y * *(b + 44 * OS1_S1 + 35) -
                                      p_over_q * *(b + 69 * OS1_S1 + 35);
            *(b + 44 * OS1_S1 + 58) =
                prefactor_z * *(b + 44 * OS1_S1 + 35) -
                p_over_q * *(b + 70 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 35);
            *(b + 44 * OS1_S1 + 59) = prefactor_y * *(b + 44 * OS1_S1 + 36) -
                                      p_over_q * *(b + 69 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 20);
            *(b + 44 * OS1_S1 + 60) = prefactor_y * *(b + 44 * OS1_S1 + 37) -
                                      p_over_q * *(b + 69 * OS1_S1 + 37);
            *(b + 44 * OS1_S1 + 61) =
                prefactor_z * *(b + 44 * OS1_S1 + 37) -
                p_over_q * *(b + 70 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 37) +
                one_over_two_q * *(b + 44 * OS1_S1 + 20);
            *(b + 44 * OS1_S1 + 62) =
                prefactor_y * *(b + 44 * OS1_S1 + 38) -
                p_over_q * *(b + 69 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 21);
            *(b + 44 * OS1_S1 + 63) =
                prefactor_z * *(b + 44 * OS1_S1 + 38) -
                p_over_q * *(b + 70 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 38);
            *(b + 44 * OS1_S1 + 64) = prefactor_y * *(b + 44 * OS1_S1 + 40) -
                                      p_over_q * *(b + 69 * OS1_S1 + 40);
            *(b + 44 * OS1_S1 + 65) =
                prefactor_x * *(b + 44 * OS1_S1 + 44) -
                p_over_q * *(b + 65 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 29);
            *(b + 44 * OS1_S1 + 66) =
                prefactor_x * *(b + 44 * OS1_S1 + 45) -
                p_over_q * *(b + 65 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 45) +
                one_over_two_q * *(b + 44 * OS1_S1 + 30);
            *(b + 44 * OS1_S1 + 67) =
                prefactor_z * *(b + 44 * OS1_S1 + 41) -
                p_over_q * *(b + 70 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 41);
            *(b + 44 * OS1_S1 + 68) = prefactor_y * *(b + 44 * OS1_S1 + 43) -
                                      p_over_q * *(b + 69 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 25);
            *(b + 44 * OS1_S1 + 69) = prefactor_y * *(b + 44 * OS1_S1 + 44) -
                                      p_over_q * *(b + 69 * OS1_S1 + 44);
            *(b + 44 * OS1_S1 + 70) =
                prefactor_x * *(b + 44 * OS1_S1 + 49) -
                p_over_q * *(b + 65 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 49) +
                one_over_two_q * *(b + 44 * OS1_S1 + 34);
            *(b + 44 * OS1_S1 + 71) =
                prefactor_x * *(b + 44 * OS1_S1 + 50) -
                p_over_q * *(b + 65 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 50);
            *(b + 44 * OS1_S1 + 72) =
                prefactor_x * *(b + 44 * OS1_S1 + 51) -
                p_over_q * *(b + 65 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 51);
            *(b + 44 * OS1_S1 + 73) =
                prefactor_x * *(b + 44 * OS1_S1 + 52) -
                p_over_q * *(b + 65 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 52);
            *(b + 44 * OS1_S1 + 74) =
                prefactor_x * *(b + 44 * OS1_S1 + 53) -
                p_over_q * *(b + 65 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 53);
            *(b + 44 * OS1_S1 + 75) = prefactor_y * *(b + 44 * OS1_S1 + 49) -
                                      p_over_q * *(b + 69 * OS1_S1 + 49);
            *(b + 44 * OS1_S1 + 76) =
                prefactor_x * *(b + 44 * OS1_S1 + 55) -
                p_over_q * *(b + 65 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 55);
            *(b + 44 * OS1_S1 + 77) =
                prefactor_y * *(b + 44 * OS1_S1 + 50) -
                p_over_q * *(b + 69 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 44 * OS1_S1 + 30);
            *(b + 44 * OS1_S1 + 78) =
                prefactor_z * *(b + 44 * OS1_S1 + 50) -
                p_over_q * *(b + 70 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 50);
            *(b + 44 * OS1_S1 + 79) =
                prefactor_z * *(b + 44 * OS1_S1 + 51) -
                p_over_q * *(b + 70 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 51) +
                one_over_two_q * *(b + 44 * OS1_S1 + 30);
            *(b + 44 * OS1_S1 + 80) =
                prefactor_y * *(b + 44 * OS1_S1 + 53) -
                p_over_q * *(b + 69 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 33);
            *(b + 44 * OS1_S1 + 81) = prefactor_y * *(b + 44 * OS1_S1 + 54) -
                                      p_over_q * *(b + 69 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 34);
            *(b + 44 * OS1_S1 + 82) = prefactor_y * *(b + 44 * OS1_S1 + 55) -
                                      p_over_q * *(b + 69 * OS1_S1 + 55);
            *(b + 44 * OS1_S1 + 83) =
                prefactor_z * *(b + 44 * OS1_S1 + 55) -
                p_over_q * *(b + 70 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 44 * OS1_S1 + 34);
            *(b + 45 * OS1_S1 + 56) =
                prefactor_x * *(b + 45 * OS1_S1 + 35) -
                p_over_q * *(b + 66 * OS1_S1 + 35) +
                one_over_two_q * *(b + 30 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 20);
            *(b + 45 * OS1_S1 + 57) =
                prefactor_y * *(b + 45 * OS1_S1 + 35) -
                p_over_q * *(b + 71 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 35);
            *(b + 45 * OS1_S1 + 58) = prefactor_z * *(b + 45 * OS1_S1 + 35) -
                                      p_over_q * *(b + 72 * OS1_S1 + 35);
            *(b + 45 * OS1_S1 + 59) =
                prefactor_y * *(b + 45 * OS1_S1 + 36) -
                p_over_q * *(b + 71 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 36) +
                one_over_two_q * *(b + 45 * OS1_S1 + 20);
            *(b + 45 * OS1_S1 + 60) = prefactor_z * *(b + 45 * OS1_S1 + 36) -
                                      p_over_q * *(b + 72 * OS1_S1 + 36);
            *(b + 45 * OS1_S1 + 61) = prefactor_z * *(b + 45 * OS1_S1 + 37) -
                                      p_over_q * *(b + 72 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 20);
            *(b + 45 * OS1_S1 + 62) =
                prefactor_x * *(b + 45 * OS1_S1 + 41) -
                p_over_q * *(b + 66 * OS1_S1 + 41) +
                one_over_two_q * *(b + 30 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 26);
            *(b + 45 * OS1_S1 + 63) = prefactor_z * *(b + 45 * OS1_S1 + 38) -
                                      p_over_q * *(b + 72 * OS1_S1 + 38);
            *(b + 45 * OS1_S1 + 64) =
                prefactor_y * *(b + 45 * OS1_S1 + 40) -
                p_over_q * *(b + 71 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 40);
            *(b + 45 * OS1_S1 + 65) =
                prefactor_z * *(b + 45 * OS1_S1 + 40) -
                p_over_q * *(b + 72 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 22);
            *(b + 45 * OS1_S1 + 66) = prefactor_x * *(b + 45 * OS1_S1 + 45) -
                                      p_over_q * *(b + 66 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 30);
            *(b + 45 * OS1_S1 + 67) = prefactor_z * *(b + 45 * OS1_S1 + 41) -
                                      p_over_q * *(b + 72 * OS1_S1 + 41);
            *(b + 45 * OS1_S1 + 68) = prefactor_z * *(b + 45 * OS1_S1 + 42) -
                                      p_over_q * *(b + 72 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 23);
            *(b + 45 * OS1_S1 + 69) =
                prefactor_y * *(b + 45 * OS1_S1 + 44) -
                p_over_q * *(b + 71 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 44);
            *(b + 45 * OS1_S1 + 70) = prefactor_x * *(b + 45 * OS1_S1 + 49) -
                                      p_over_q * *(b + 66 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 34);
            *(b + 45 * OS1_S1 + 71) = prefactor_x * *(b + 45 * OS1_S1 + 50) -
                                      p_over_q * *(b + 66 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 50);
            *(b + 45 * OS1_S1 + 72) = prefactor_z * *(b + 45 * OS1_S1 + 45) -
                                      p_over_q * *(b + 72 * OS1_S1 + 45);
            *(b + 45 * OS1_S1 + 73) = prefactor_x * *(b + 45 * OS1_S1 + 52) -
                                      p_over_q * *(b + 66 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 52);
            *(b + 45 * OS1_S1 + 74) = prefactor_x * *(b + 45 * OS1_S1 + 53) -
                                      p_over_q * *(b + 66 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 53);
            *(b + 45 * OS1_S1 + 75) = prefactor_x * *(b + 45 * OS1_S1 + 54) -
                                      p_over_q * *(b + 66 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 54);
            *(b + 45 * OS1_S1 + 76) = prefactor_x * *(b + 45 * OS1_S1 + 55) -
                                      p_over_q * *(b + 66 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 55);
            *(b + 45 * OS1_S1 + 77) =
                prefactor_y * *(b + 45 * OS1_S1 + 50) -
                p_over_q * *(b + 71 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 30);
            *(b + 45 * OS1_S1 + 78) = prefactor_z * *(b + 45 * OS1_S1 + 50) -
                                      p_over_q * *(b + 72 * OS1_S1 + 50);
            *(b + 45 * OS1_S1 + 79) = prefactor_z * *(b + 45 * OS1_S1 + 51) -
                                      p_over_q * *(b + 72 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 30);
            *(b + 45 * OS1_S1 + 80) =
                prefactor_z * *(b + 45 * OS1_S1 + 52) -
                p_over_q * *(b + 72 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 31);
            *(b + 45 * OS1_S1 + 81) =
                prefactor_y * *(b + 45 * OS1_S1 + 54) -
                p_over_q * *(b + 71 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 54) +
                one_over_two_q * *(b + 45 * OS1_S1 + 34);
            *(b + 45 * OS1_S1 + 82) =
                prefactor_y * *(b + 45 * OS1_S1 + 55) -
                p_over_q * *(b + 71 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 55);
            *(b + 45 * OS1_S1 + 83) =
                prefactor_z * *(b + 45 * OS1_S1 + 55) -
                p_over_q * *(b + 72 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 34);
            *(b + 46 * OS1_S1 + 56) =
                prefactor_x * *(b + 46 * OS1_S1 + 35) -
                p_over_q * *(b + 67 * OS1_S1 + 35) +
                one_over_two_q * *(b + 31 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 46 * OS1_S1 + 20);
            *(b + 46 * OS1_S1 + 57) =
                prefactor_y * *(b + 46 * OS1_S1 + 35) -
                p_over_q * *(b + 72 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 35);
            *(b + 46 * OS1_S1 + 58) = prefactor_z * *(b + 46 * OS1_S1 + 35) -
                                      p_over_q * *(b + 73 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 35);
            *(b + 46 * OS1_S1 + 59) =
                prefactor_y * *(b + 46 * OS1_S1 + 36) -
                p_over_q * *(b + 72 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 36) +
                one_over_two_q * *(b + 46 * OS1_S1 + 20);
            *(b + 46 * OS1_S1 + 60) = prefactor_z * *(b + 46 * OS1_S1 + 36) -
                                      p_over_q * *(b + 73 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 36);
            *(b + 46 * OS1_S1 + 61) = prefactor_z * *(b + 46 * OS1_S1 + 37) -
                                      p_over_q * *(b + 73 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 20);
            *(b + 46 * OS1_S1 + 62) =
                prefactor_x * *(b + 46 * OS1_S1 + 41) -
                p_over_q * *(b + 67 * OS1_S1 + 41) +
                one_over_two_q * *(b + 31 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 26);
            *(b + 46 * OS1_S1 + 63) = prefactor_z * *(b + 46 * OS1_S1 + 38) -
                                      p_over_q * *(b + 73 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 38);
            *(b + 46 * OS1_S1 + 64) =
                prefactor_y * *(b + 46 * OS1_S1 + 40) -
                p_over_q * *(b + 72 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 40);
            *(b + 46 * OS1_S1 + 65) =
                prefactor_z * *(b + 46 * OS1_S1 + 40) -
                p_over_q * *(b + 73 * OS1_S1 + 40) +
                one_over_two_q * *(b + 26 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 22);
            *(b + 46 * OS1_S1 + 66) = prefactor_x * *(b + 46 * OS1_S1 + 45) -
                                      p_over_q * *(b + 67 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 30);
            *(b + 46 * OS1_S1 + 67) = prefactor_z * *(b + 46 * OS1_S1 + 41) -
                                      p_over_q * *(b + 73 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 41);
            *(b + 46 * OS1_S1 + 68) = prefactor_z * *(b + 46 * OS1_S1 + 42) -
                                      p_over_q * *(b + 73 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 23);
            *(b + 46 * OS1_S1 + 69) =
                prefactor_y * *(b + 46 * OS1_S1 + 44) -
                p_over_q * *(b + 72 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 44);
            *(b + 46 * OS1_S1 + 70) = prefactor_x * *(b + 46 * OS1_S1 + 49) -
                                      p_over_q * *(b + 67 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 34);
            *(b + 46 * OS1_S1 + 71) = prefactor_x * *(b + 46 * OS1_S1 + 50) -
                                      p_over_q * *(b + 67 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 50);
            *(b + 46 * OS1_S1 + 72) = prefactor_z * *(b + 46 * OS1_S1 + 45) -
                                      p_over_q * *(b + 73 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 45);
            *(b + 46 * OS1_S1 + 73) = prefactor_x * *(b + 46 * OS1_S1 + 52) -
                                      p_over_q * *(b + 67 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 52);
            *(b + 46 * OS1_S1 + 74) = prefactor_x * *(b + 46 * OS1_S1 + 53) -
                                      p_over_q * *(b + 67 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 53);
            *(b + 46 * OS1_S1 + 75) = prefactor_x * *(b + 46 * OS1_S1 + 54) -
                                      p_over_q * *(b + 67 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 54);
            *(b + 46 * OS1_S1 + 76) = prefactor_x * *(b + 46 * OS1_S1 + 55) -
                                      p_over_q * *(b + 67 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 55);
            *(b + 46 * OS1_S1 + 77) =
                prefactor_y * *(b + 46 * OS1_S1 + 50) -
                p_over_q * *(b + 72 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 46 * OS1_S1 + 30);
            *(b + 46 * OS1_S1 + 78) = prefactor_z * *(b + 46 * OS1_S1 + 50) -
                                      p_over_q * *(b + 73 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 50);
            *(b + 46 * OS1_S1 + 79) = prefactor_z * *(b + 46 * OS1_S1 + 51) -
                                      p_over_q * *(b + 73 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 30);
            *(b + 46 * OS1_S1 + 80) =
                prefactor_z * *(b + 46 * OS1_S1 + 52) -
                p_over_q * *(b + 73 * OS1_S1 + 52) +
                one_over_two_q * *(b + 26 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 31);
            *(b + 46 * OS1_S1 + 81) =
                prefactor_y * *(b + 46 * OS1_S1 + 54) -
                p_over_q * *(b + 72 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 54) +
                one_over_two_q * *(b + 46 * OS1_S1 + 34);
            *(b + 46 * OS1_S1 + 82) =
                prefactor_y * *(b + 46 * OS1_S1 + 55) -
                p_over_q * *(b + 72 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 55);
            *(b + 46 * OS1_S1 + 83) =
                prefactor_z * *(b + 46 * OS1_S1 + 55) -
                p_over_q * *(b + 73 * OS1_S1 + 55) +
                one_over_two_q * *(b + 26 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 46 * OS1_S1 + 34);
            *(b + 47 * OS1_S1 + 56) =
                prefactor_x * *(b + 47 * OS1_S1 + 35) -
                p_over_q * *(b + 68 * OS1_S1 + 35) +
                one_over_two_q * *(b + 32 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 47 * OS1_S1 + 20);
            *(b + 47 * OS1_S1 + 57) =
                prefactor_y * *(b + 47 * OS1_S1 + 35) -
                p_over_q * *(b + 73 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 35);
            *(b + 47 * OS1_S1 + 58) =
                prefactor_z * *(b + 47 * OS1_S1 + 35) -
                p_over_q * *(b + 74 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 35);
            *(b + 47 * OS1_S1 + 59) =
                prefactor_y * *(b + 47 * OS1_S1 + 36) -
                p_over_q * *(b + 73 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 36) +
                one_over_two_q * *(b + 47 * OS1_S1 + 20);
            *(b + 47 * OS1_S1 + 60) =
                prefactor_z * *(b + 47 * OS1_S1 + 36) -
                p_over_q * *(b + 74 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 36);
            *(b + 47 * OS1_S1 + 61) =
                prefactor_z * *(b + 47 * OS1_S1 + 37) -
                p_over_q * *(b + 74 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 37) +
                one_over_two_q * *(b + 47 * OS1_S1 + 20);
            *(b + 47 * OS1_S1 + 62) =
                prefactor_x * *(b + 47 * OS1_S1 + 41) -
                p_over_q * *(b + 68 * OS1_S1 + 41) +
                one_over_two_q * *(b + 32 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 26);
            *(b + 47 * OS1_S1 + 63) =
                prefactor_z * *(b + 47 * OS1_S1 + 38) -
                p_over_q * *(b + 74 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 38);
            *(b + 47 * OS1_S1 + 64) =
                prefactor_y * *(b + 47 * OS1_S1 + 40) -
                p_over_q * *(b + 73 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 40);
            *(b + 47 * OS1_S1 + 65) =
                prefactor_x * *(b + 47 * OS1_S1 + 44) -
                p_over_q * *(b + 68 * OS1_S1 + 44) +
                one_over_two_q * *(b + 32 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 29);
            *(b + 47 * OS1_S1 + 66) = prefactor_x * *(b + 47 * OS1_S1 + 45) -
                                      p_over_q * *(b + 68 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 47 * OS1_S1 + 30);
            *(b + 47 * OS1_S1 + 67) =
                prefactor_z * *(b + 47 * OS1_S1 + 41) -
                p_over_q * *(b + 74 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 41);
            *(b + 47 * OS1_S1 + 68) = prefactor_x * *(b + 47 * OS1_S1 + 47) -
                                      p_over_q * *(b + 68 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 47 * OS1_S1 + 32);
            *(b + 47 * OS1_S1 + 69) =
                prefactor_y * *(b + 47 * OS1_S1 + 44) -
                p_over_q * *(b + 73 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 44);
            *(b + 47 * OS1_S1 + 70) = prefactor_x * *(b + 47 * OS1_S1 + 49) -
                                      p_over_q * *(b + 68 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 47 * OS1_S1 + 34);
            *(b + 47 * OS1_S1 + 71) = prefactor_x * *(b + 47 * OS1_S1 + 50) -
                                      p_over_q * *(b + 68 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 50);
            *(b + 47 * OS1_S1 + 72) = prefactor_x * *(b + 47 * OS1_S1 + 51) -
                                      p_over_q * *(b + 68 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 51);
            *(b + 47 * OS1_S1 + 73) = prefactor_x * *(b + 47 * OS1_S1 + 52) -
                                      p_over_q * *(b + 68 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 52);
            *(b + 47 * OS1_S1 + 74) = prefactor_x * *(b + 47 * OS1_S1 + 53) -
                                      p_over_q * *(b + 68 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 53);
            *(b + 47 * OS1_S1 + 75) = prefactor_x * *(b + 47 * OS1_S1 + 54) -
                                      p_over_q * *(b + 68 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 54);
            *(b + 47 * OS1_S1 + 76) = prefactor_x * *(b + 47 * OS1_S1 + 55) -
                                      p_over_q * *(b + 68 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 55);
            *(b + 47 * OS1_S1 + 77) =
                prefactor_y * *(b + 47 * OS1_S1 + 50) -
                p_over_q * *(b + 73 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 47 * OS1_S1 + 30);
            *(b + 47 * OS1_S1 + 78) =
                prefactor_z * *(b + 47 * OS1_S1 + 50) -
                p_over_q * *(b + 74 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 50);
            *(b + 47 * OS1_S1 + 79) =
                prefactor_z * *(b + 47 * OS1_S1 + 51) -
                p_over_q * *(b + 74 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 51) +
                one_over_two_q * *(b + 47 * OS1_S1 + 30);
            *(b + 47 * OS1_S1 + 80) =
                prefactor_z * *(b + 47 * OS1_S1 + 52) -
                p_over_q * *(b + 74 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 31);
            *(b + 47 * OS1_S1 + 81) =
                prefactor_y * *(b + 47 * OS1_S1 + 54) -
                p_over_q * *(b + 73 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 54) +
                one_over_two_q * *(b + 47 * OS1_S1 + 34);
            *(b + 47 * OS1_S1 + 82) =
                prefactor_y * *(b + 47 * OS1_S1 + 55) -
                p_over_q * *(b + 73 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 55);
            *(b + 47 * OS1_S1 + 83) =
                prefactor_z * *(b + 47 * OS1_S1 + 55) -
                p_over_q * *(b + 74 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 47 * OS1_S1 + 34);
            *(b + 48 * OS1_S1 + 56) =
                prefactor_x * *(b + 48 * OS1_S1 + 35) -
                p_over_q * *(b + 69 * OS1_S1 + 35) +
                one_over_two_q * *(b + 33 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 48 * OS1_S1 + 20);
            *(b + 48 * OS1_S1 + 57) = prefactor_y * *(b + 48 * OS1_S1 + 35) -
                                      p_over_q * *(b + 74 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 35);
            *(b + 48 * OS1_S1 + 58) =
                prefactor_z * *(b + 48 * OS1_S1 + 35) -
                p_over_q * *(b + 75 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 35);
            *(b + 48 * OS1_S1 + 59) = prefactor_y * *(b + 48 * OS1_S1 + 36) -
                                      p_over_q * *(b + 74 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 20);
            *(b + 48 * OS1_S1 + 60) = prefactor_y * *(b + 48 * OS1_S1 + 37) -
                                      p_over_q * *(b + 74 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 37);
            *(b + 48 * OS1_S1 + 61) =
                prefactor_z * *(b + 48 * OS1_S1 + 37) -
                p_over_q * *(b + 75 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 37) +
                one_over_two_q * *(b + 48 * OS1_S1 + 20);
            *(b + 48 * OS1_S1 + 62) =
                prefactor_y * *(b + 48 * OS1_S1 + 38) -
                p_over_q * *(b + 74 * OS1_S1 + 38) +
                one_over_two_q * *(b + 29 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 21);
            *(b + 48 * OS1_S1 + 63) =
                prefactor_z * *(b + 48 * OS1_S1 + 38) -
                p_over_q * *(b + 75 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 38);
            *(b + 48 * OS1_S1 + 64) = prefactor_y * *(b + 48 * OS1_S1 + 40) -
                                      p_over_q * *(b + 74 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 40);
            *(b + 48 * OS1_S1 + 65) =
                prefactor_x * *(b + 48 * OS1_S1 + 44) -
                p_over_q * *(b + 69 * OS1_S1 + 44) +
                one_over_two_q * *(b + 33 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 29);
            *(b + 48 * OS1_S1 + 66) = prefactor_x * *(b + 48 * OS1_S1 + 45) -
                                      p_over_q * *(b + 69 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 30);
            *(b + 48 * OS1_S1 + 67) =
                prefactor_z * *(b + 48 * OS1_S1 + 41) -
                p_over_q * *(b + 75 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 41);
            *(b + 48 * OS1_S1 + 68) = prefactor_y * *(b + 48 * OS1_S1 + 43) -
                                      p_over_q * *(b + 74 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 25);
            *(b + 48 * OS1_S1 + 69) = prefactor_y * *(b + 48 * OS1_S1 + 44) -
                                      p_over_q * *(b + 74 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 44);
            *(b + 48 * OS1_S1 + 70) = prefactor_x * *(b + 48 * OS1_S1 + 49) -
                                      p_over_q * *(b + 69 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 34);
            *(b + 48 * OS1_S1 + 71) = prefactor_x * *(b + 48 * OS1_S1 + 50) -
                                      p_over_q * *(b + 69 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 50);
            *(b + 48 * OS1_S1 + 72) = prefactor_x * *(b + 48 * OS1_S1 + 51) -
                                      p_over_q * *(b + 69 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 51);
            *(b + 48 * OS1_S1 + 73) = prefactor_x * *(b + 48 * OS1_S1 + 52) -
                                      p_over_q * *(b + 69 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 52);
            *(b + 48 * OS1_S1 + 74) = prefactor_x * *(b + 48 * OS1_S1 + 53) -
                                      p_over_q * *(b + 69 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 53);
            *(b + 48 * OS1_S1 + 75) = prefactor_y * *(b + 48 * OS1_S1 + 49) -
                                      p_over_q * *(b + 74 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 49);
            *(b + 48 * OS1_S1 + 76) = prefactor_x * *(b + 48 * OS1_S1 + 55) -
                                      p_over_q * *(b + 69 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 55);
            *(b + 48 * OS1_S1 + 77) =
                prefactor_y * *(b + 48 * OS1_S1 + 50) -
                p_over_q * *(b + 74 * OS1_S1 + 50) +
                one_over_two_q * *(b + 29 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 48 * OS1_S1 + 30);
            *(b + 48 * OS1_S1 + 78) =
                prefactor_z * *(b + 48 * OS1_S1 + 50) -
                p_over_q * *(b + 75 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 50);
            *(b + 48 * OS1_S1 + 79) =
                prefactor_z * *(b + 48 * OS1_S1 + 51) -
                p_over_q * *(b + 75 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 51) +
                one_over_two_q * *(b + 48 * OS1_S1 + 30);
            *(b + 48 * OS1_S1 + 80) =
                prefactor_y * *(b + 48 * OS1_S1 + 53) -
                p_over_q * *(b + 74 * OS1_S1 + 53) +
                one_over_two_q * *(b + 29 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 33);
            *(b + 48 * OS1_S1 + 81) = prefactor_y * *(b + 48 * OS1_S1 + 54) -
                                      p_over_q * *(b + 74 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 34);
            *(b + 48 * OS1_S1 + 82) = prefactor_y * *(b + 48 * OS1_S1 + 55) -
                                      p_over_q * *(b + 74 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 55);
            *(b + 48 * OS1_S1 + 83) =
                prefactor_z * *(b + 48 * OS1_S1 + 55) -
                p_over_q * *(b + 75 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 48 * OS1_S1 + 34);
            *(b + 49 * OS1_S1 + 56) =
                prefactor_x * *(b + 49 * OS1_S1 + 35) -
                p_over_q * *(b + 70 * OS1_S1 + 35) +
                one_over_two_q * *(b + 34 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 20);
            *(b + 49 * OS1_S1 + 57) = prefactor_y * *(b + 49 * OS1_S1 + 35) -
                                      p_over_q * *(b + 75 * OS1_S1 + 35);
            *(b + 49 * OS1_S1 + 58) =
                prefactor_z * *(b + 49 * OS1_S1 + 35) -
                p_over_q * *(b + 76 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 35);
            *(b + 49 * OS1_S1 + 59) = prefactor_y * *(b + 49 * OS1_S1 + 36) -
                                      p_over_q * *(b + 75 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 20);
            *(b + 49 * OS1_S1 + 60) = prefactor_y * *(b + 49 * OS1_S1 + 37) -
                                      p_over_q * *(b + 75 * OS1_S1 + 37);
            *(b + 49 * OS1_S1 + 61) =
                prefactor_z * *(b + 49 * OS1_S1 + 37) -
                p_over_q * *(b + 76 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 37) +
                one_over_two_q * *(b + 49 * OS1_S1 + 20);
            *(b + 49 * OS1_S1 + 62) =
                prefactor_y * *(b + 49 * OS1_S1 + 38) -
                p_over_q * *(b + 75 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 21);
            *(b + 49 * OS1_S1 + 63) =
                prefactor_z * *(b + 49 * OS1_S1 + 38) -
                p_over_q * *(b + 76 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 38);
            *(b + 49 * OS1_S1 + 64) = prefactor_y * *(b + 49 * OS1_S1 + 40) -
                                      p_over_q * *(b + 75 * OS1_S1 + 40);
            *(b + 49 * OS1_S1 + 65) =
                prefactor_x * *(b + 49 * OS1_S1 + 44) -
                p_over_q * *(b + 70 * OS1_S1 + 44) +
                one_over_two_q * *(b + 34 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 29);
            *(b + 49 * OS1_S1 + 66) = prefactor_x * *(b + 49 * OS1_S1 + 45) -
                                      p_over_q * *(b + 70 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 30);
            *(b + 49 * OS1_S1 + 67) =
                prefactor_z * *(b + 49 * OS1_S1 + 41) -
                p_over_q * *(b + 76 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 41);
            *(b + 49 * OS1_S1 + 68) = prefactor_y * *(b + 49 * OS1_S1 + 43) -
                                      p_over_q * *(b + 75 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 25);
            *(b + 49 * OS1_S1 + 69) = prefactor_y * *(b + 49 * OS1_S1 + 44) -
                                      p_over_q * *(b + 75 * OS1_S1 + 44);
            *(b + 49 * OS1_S1 + 70) = prefactor_x * *(b + 49 * OS1_S1 + 49) -
                                      p_over_q * *(b + 70 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 34);
            *(b + 49 * OS1_S1 + 71) = prefactor_x * *(b + 49 * OS1_S1 + 50) -
                                      p_over_q * *(b + 70 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 50);
            *(b + 49 * OS1_S1 + 72) = prefactor_x * *(b + 49 * OS1_S1 + 51) -
                                      p_over_q * *(b + 70 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 51);
            *(b + 49 * OS1_S1 + 73) = prefactor_x * *(b + 49 * OS1_S1 + 52) -
                                      p_over_q * *(b + 70 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 52);
            *(b + 49 * OS1_S1 + 74) = prefactor_x * *(b + 49 * OS1_S1 + 53) -
                                      p_over_q * *(b + 70 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 53);
            *(b + 49 * OS1_S1 + 75) = prefactor_y * *(b + 49 * OS1_S1 + 49) -
                                      p_over_q * *(b + 75 * OS1_S1 + 49);
            *(b + 49 * OS1_S1 + 76) = prefactor_x * *(b + 49 * OS1_S1 + 55) -
                                      p_over_q * *(b + 70 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 55);
            *(b + 49 * OS1_S1 + 77) =
                prefactor_y * *(b + 49 * OS1_S1 + 50) -
                p_over_q * *(b + 75 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 30);
            *(b + 49 * OS1_S1 + 78) =
                prefactor_z * *(b + 49 * OS1_S1 + 50) -
                p_over_q * *(b + 76 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 50);
            *(b + 49 * OS1_S1 + 79) =
                prefactor_z * *(b + 49 * OS1_S1 + 51) -
                p_over_q * *(b + 76 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 51) +
                one_over_two_q * *(b + 49 * OS1_S1 + 30);
            *(b + 49 * OS1_S1 + 80) =
                prefactor_y * *(b + 49 * OS1_S1 + 53) -
                p_over_q * *(b + 75 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 33);
            *(b + 49 * OS1_S1 + 81) = prefactor_y * *(b + 49 * OS1_S1 + 54) -
                                      p_over_q * *(b + 75 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 34);
            *(b + 49 * OS1_S1 + 82) = prefactor_y * *(b + 49 * OS1_S1 + 55) -
                                      p_over_q * *(b + 75 * OS1_S1 + 55);
            *(b + 49 * OS1_S1 + 83) =
                prefactor_z * *(b + 49 * OS1_S1 + 55) -
                p_over_q * *(b + 76 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 34);
            *(b + 50 * OS1_S1 + 56) =
                prefactor_x * *(b + 50 * OS1_S1 + 35) -
                p_over_q * *(b + 71 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 50 * OS1_S1 + 20);
            *(b + 50 * OS1_S1 + 57) =
                prefactor_y * *(b + 50 * OS1_S1 + 35) -
                p_over_q * *(b + 77 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 35);
            *(b + 50 * OS1_S1 + 58) = prefactor_z * *(b + 50 * OS1_S1 + 35) -
                                      p_over_q * *(b + 78 * OS1_S1 + 35);
            *(b + 50 * OS1_S1 + 59) =
                prefactor_y * *(b + 50 * OS1_S1 + 36) -
                p_over_q * *(b + 77 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 36) +
                one_over_two_q * *(b + 50 * OS1_S1 + 20);
            *(b + 50 * OS1_S1 + 60) = prefactor_z * *(b + 50 * OS1_S1 + 36) -
                                      p_over_q * *(b + 78 * OS1_S1 + 36);
            *(b + 50 * OS1_S1 + 61) = prefactor_z * *(b + 50 * OS1_S1 + 37) -
                                      p_over_q * *(b + 78 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 20);
            *(b + 50 * OS1_S1 + 62) =
                prefactor_x * *(b + 50 * OS1_S1 + 41) -
                p_over_q * *(b + 71 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 26);
            *(b + 50 * OS1_S1 + 63) = prefactor_z * *(b + 50 * OS1_S1 + 38) -
                                      p_over_q * *(b + 78 * OS1_S1 + 38);
            *(b + 50 * OS1_S1 + 64) =
                prefactor_y * *(b + 50 * OS1_S1 + 40) -
                p_over_q * *(b + 77 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 40);
            *(b + 50 * OS1_S1 + 65) =
                prefactor_z * *(b + 50 * OS1_S1 + 40) -
                p_over_q * *(b + 78 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 22);
            *(b + 50 * OS1_S1 + 66) = prefactor_x * *(b + 50 * OS1_S1 + 45) -
                                      p_over_q * *(b + 71 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 30);
            *(b + 50 * OS1_S1 + 67) = prefactor_z * *(b + 50 * OS1_S1 + 41) -
                                      p_over_q * *(b + 78 * OS1_S1 + 41);
            *(b + 50 * OS1_S1 + 68) = prefactor_z * *(b + 50 * OS1_S1 + 42) -
                                      p_over_q * *(b + 78 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 23);
            *(b + 50 * OS1_S1 + 69) =
                prefactor_y * *(b + 50 * OS1_S1 + 44) -
                p_over_q * *(b + 77 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 44);
            *(b + 50 * OS1_S1 + 70) = prefactor_x * *(b + 50 * OS1_S1 + 49) -
                                      p_over_q * *(b + 71 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 34);
            *(b + 50 * OS1_S1 + 71) = prefactor_x * *(b + 50 * OS1_S1 + 50) -
                                      p_over_q * *(b + 71 * OS1_S1 + 50);
            *(b + 50 * OS1_S1 + 72) = prefactor_z * *(b + 50 * OS1_S1 + 45) -
                                      p_over_q * *(b + 78 * OS1_S1 + 45);
            *(b + 50 * OS1_S1 + 73) = prefactor_x * *(b + 50 * OS1_S1 + 52) -
                                      p_over_q * *(b + 71 * OS1_S1 + 52);
            *(b + 50 * OS1_S1 + 74) = prefactor_x * *(b + 50 * OS1_S1 + 53) -
                                      p_over_q * *(b + 71 * OS1_S1 + 53);
            *(b + 50 * OS1_S1 + 75) = prefactor_x * *(b + 50 * OS1_S1 + 54) -
                                      p_over_q * *(b + 71 * OS1_S1 + 54);
            *(b + 50 * OS1_S1 + 76) = prefactor_x * *(b + 50 * OS1_S1 + 55) -
                                      p_over_q * *(b + 71 * OS1_S1 + 55);
            *(b + 50 * OS1_S1 + 77) =
                prefactor_y * *(b + 50 * OS1_S1 + 50) -
                p_over_q * *(b + 77 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 50 * OS1_S1 + 30);
            *(b + 50 * OS1_S1 + 78) = prefactor_z * *(b + 50 * OS1_S1 + 50) -
                                      p_over_q * *(b + 78 * OS1_S1 + 50);
            *(b + 50 * OS1_S1 + 79) = prefactor_z * *(b + 50 * OS1_S1 + 51) -
                                      p_over_q * *(b + 78 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 30);
            *(b + 50 * OS1_S1 + 80) =
                prefactor_z * *(b + 50 * OS1_S1 + 52) -
                p_over_q * *(b + 78 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 31);
            *(b + 50 * OS1_S1 + 81) =
                prefactor_y * *(b + 50 * OS1_S1 + 54) -
                p_over_q * *(b + 77 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 54) +
                one_over_two_q * *(b + 50 * OS1_S1 + 34);
            *(b + 50 * OS1_S1 + 82) =
                prefactor_y * *(b + 50 * OS1_S1 + 55) -
                p_over_q * *(b + 77 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 55);
            *(b + 50 * OS1_S1 + 83) =
                prefactor_z * *(b + 50 * OS1_S1 + 55) -
                p_over_q * *(b + 78 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 50 * OS1_S1 + 34);
            *(b + 51 * OS1_S1 + 56) =
                prefactor_x * *(b + 51 * OS1_S1 + 35) -
                p_over_q * *(b + 72 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 20);
            *(b + 51 * OS1_S1 + 57) =
                prefactor_y * *(b + 51 * OS1_S1 + 35) -
                p_over_q * *(b + 78 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 35);
            *(b + 51 * OS1_S1 + 58) = prefactor_z * *(b + 51 * OS1_S1 + 35) -
                                      p_over_q * *(b + 79 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 35);
            *(b + 51 * OS1_S1 + 59) =
                prefactor_y * *(b + 51 * OS1_S1 + 36) -
                p_over_q * *(b + 78 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 36) +
                one_over_two_q * *(b + 51 * OS1_S1 + 20);
            *(b + 51 * OS1_S1 + 60) = prefactor_z * *(b + 51 * OS1_S1 + 36) -
                                      p_over_q * *(b + 79 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 36);
            *(b + 51 * OS1_S1 + 61) = prefactor_z * *(b + 51 * OS1_S1 + 37) -
                                      p_over_q * *(b + 79 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 20);
            *(b + 51 * OS1_S1 + 62) =
                prefactor_x * *(b + 51 * OS1_S1 + 41) -
                p_over_q * *(b + 72 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 26);
            *(b + 51 * OS1_S1 + 63) = prefactor_z * *(b + 51 * OS1_S1 + 38) -
                                      p_over_q * *(b + 79 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 38);
            *(b + 51 * OS1_S1 + 64) =
                prefactor_y * *(b + 51 * OS1_S1 + 40) -
                p_over_q * *(b + 78 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 40);
            *(b + 51 * OS1_S1 + 65) =
                prefactor_x * *(b + 51 * OS1_S1 + 44) -
                p_over_q * *(b + 72 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 29);
            *(b + 51 * OS1_S1 + 66) = prefactor_x * *(b + 51 * OS1_S1 + 45) -
                                      p_over_q * *(b + 72 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 30);
            *(b + 51 * OS1_S1 + 67) = prefactor_z * *(b + 51 * OS1_S1 + 41) -
                                      p_over_q * *(b + 79 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 41);
            *(b + 51 * OS1_S1 + 68) = prefactor_x * *(b + 51 * OS1_S1 + 47) -
                                      p_over_q * *(b + 72 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 32);
            *(b + 51 * OS1_S1 + 69) =
                prefactor_y * *(b + 51 * OS1_S1 + 44) -
                p_over_q * *(b + 78 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 44);
            *(b + 51 * OS1_S1 + 70) = prefactor_x * *(b + 51 * OS1_S1 + 49) -
                                      p_over_q * *(b + 72 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 34);
            *(b + 51 * OS1_S1 + 71) = prefactor_x * *(b + 51 * OS1_S1 + 50) -
                                      p_over_q * *(b + 72 * OS1_S1 + 50);
            *(b + 51 * OS1_S1 + 72) = prefactor_x * *(b + 51 * OS1_S1 + 51) -
                                      p_over_q * *(b + 72 * OS1_S1 + 51);
            *(b + 51 * OS1_S1 + 73) = prefactor_x * *(b + 51 * OS1_S1 + 52) -
                                      p_over_q * *(b + 72 * OS1_S1 + 52);
            *(b + 51 * OS1_S1 + 74) = prefactor_x * *(b + 51 * OS1_S1 + 53) -
                                      p_over_q * *(b + 72 * OS1_S1 + 53);
            *(b + 51 * OS1_S1 + 75) = prefactor_x * *(b + 51 * OS1_S1 + 54) -
                                      p_over_q * *(b + 72 * OS1_S1 + 54);
            *(b + 51 * OS1_S1 + 76) = prefactor_x * *(b + 51 * OS1_S1 + 55) -
                                      p_over_q * *(b + 72 * OS1_S1 + 55);
            *(b + 51 * OS1_S1 + 77) =
                prefactor_y * *(b + 51 * OS1_S1 + 50) -
                p_over_q * *(b + 78 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 30);
            *(b + 51 * OS1_S1 + 78) = prefactor_z * *(b + 51 * OS1_S1 + 50) -
                                      p_over_q * *(b + 79 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 50);
            *(b + 51 * OS1_S1 + 79) = prefactor_z * *(b + 51 * OS1_S1 + 51) -
                                      p_over_q * *(b + 79 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 30);
            *(b + 51 * OS1_S1 + 80) =
                prefactor_z * *(b + 51 * OS1_S1 + 52) -
                p_over_q * *(b + 79 * OS1_S1 + 52) +
                one_over_two_q * *(b + 30 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 31);
            *(b + 51 * OS1_S1 + 81) =
                prefactor_y * *(b + 51 * OS1_S1 + 54) -
                p_over_q * *(b + 78 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 54) +
                one_over_two_q * *(b + 51 * OS1_S1 + 34);
            *(b + 51 * OS1_S1 + 82) =
                prefactor_y * *(b + 51 * OS1_S1 + 55) -
                p_over_q * *(b + 78 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 55);
            *(b + 51 * OS1_S1 + 83) =
                prefactor_z * *(b + 51 * OS1_S1 + 55) -
                p_over_q * *(b + 79 * OS1_S1 + 55) +
                one_over_two_q * *(b + 30 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 34);
            *(b + 52 * OS1_S1 + 56) =
                prefactor_x * *(b + 52 * OS1_S1 + 35) -
                p_over_q * *(b + 73 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 52 * OS1_S1 + 20);
            *(b + 52 * OS1_S1 + 57) =
                prefactor_y * *(b + 52 * OS1_S1 + 35) -
                p_over_q * *(b + 79 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 35);
            *(b + 52 * OS1_S1 + 58) =
                prefactor_z * *(b + 52 * OS1_S1 + 35) -
                p_over_q * *(b + 80 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 35);
            *(b + 52 * OS1_S1 + 59) =
                prefactor_y * *(b + 52 * OS1_S1 + 36) -
                p_over_q * *(b + 79 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 36) +
                one_over_two_q * *(b + 52 * OS1_S1 + 20);
            *(b + 52 * OS1_S1 + 60) =
                prefactor_z * *(b + 52 * OS1_S1 + 36) -
                p_over_q * *(b + 80 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 36);
            *(b + 52 * OS1_S1 + 61) =
                prefactor_z * *(b + 52 * OS1_S1 + 37) -
                p_over_q * *(b + 80 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 37) +
                one_over_two_q * *(b + 52 * OS1_S1 + 20);
            *(b + 52 * OS1_S1 + 62) =
                prefactor_x * *(b + 52 * OS1_S1 + 41) -
                p_over_q * *(b + 73 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 26);
            *(b + 52 * OS1_S1 + 63) =
                prefactor_z * *(b + 52 * OS1_S1 + 38) -
                p_over_q * *(b + 80 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 38);
            *(b + 52 * OS1_S1 + 64) =
                prefactor_y * *(b + 52 * OS1_S1 + 40) -
                p_over_q * *(b + 79 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 40);
            *(b + 52 * OS1_S1 + 65) =
                prefactor_x * *(b + 52 * OS1_S1 + 44) -
                p_over_q * *(b + 73 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 29);
            *(b + 52 * OS1_S1 + 66) = prefactor_x * *(b + 52 * OS1_S1 + 45) -
                                      p_over_q * *(b + 73 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 30);
            *(b + 52 * OS1_S1 + 67) =
                prefactor_z * *(b + 52 * OS1_S1 + 41) -
                p_over_q * *(b + 80 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 41);
            *(b + 52 * OS1_S1 + 68) = prefactor_x * *(b + 52 * OS1_S1 + 47) -
                                      p_over_q * *(b + 73 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 32);
            *(b + 52 * OS1_S1 + 69) =
                prefactor_y * *(b + 52 * OS1_S1 + 44) -
                p_over_q * *(b + 79 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 44);
            *(b + 52 * OS1_S1 + 70) = prefactor_x * *(b + 52 * OS1_S1 + 49) -
                                      p_over_q * *(b + 73 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 34);
            *(b + 52 * OS1_S1 + 71) = prefactor_x * *(b + 52 * OS1_S1 + 50) -
                                      p_over_q * *(b + 73 * OS1_S1 + 50);
            *(b + 52 * OS1_S1 + 72) = prefactor_x * *(b + 52 * OS1_S1 + 51) -
                                      p_over_q * *(b + 73 * OS1_S1 + 51);
            *(b + 52 * OS1_S1 + 73) = prefactor_x * *(b + 52 * OS1_S1 + 52) -
                                      p_over_q * *(b + 73 * OS1_S1 + 52);
            *(b + 52 * OS1_S1 + 74) = prefactor_x * *(b + 52 * OS1_S1 + 53) -
                                      p_over_q * *(b + 73 * OS1_S1 + 53);
            *(b + 52 * OS1_S1 + 75) = prefactor_x * *(b + 52 * OS1_S1 + 54) -
                                      p_over_q * *(b + 73 * OS1_S1 + 54);
            *(b + 52 * OS1_S1 + 76) = prefactor_x * *(b + 52 * OS1_S1 + 55) -
                                      p_over_q * *(b + 73 * OS1_S1 + 55);
            *(b + 52 * OS1_S1 + 77) =
                prefactor_y * *(b + 52 * OS1_S1 + 50) -
                p_over_q * *(b + 79 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 52 * OS1_S1 + 30);
            *(b + 52 * OS1_S1 + 78) =
                prefactor_z * *(b + 52 * OS1_S1 + 50) -
                p_over_q * *(b + 80 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 50);
            *(b + 52 * OS1_S1 + 79) =
                prefactor_z * *(b + 52 * OS1_S1 + 51) -
                p_over_q * *(b + 80 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 51) +
                one_over_two_q * *(b + 52 * OS1_S1 + 30);
            *(b + 52 * OS1_S1 + 80) =
                prefactor_z * *(b + 52 * OS1_S1 + 52) -
                p_over_q * *(b + 80 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 31);
            *(b + 52 * OS1_S1 + 81) =
                prefactor_y * *(b + 52 * OS1_S1 + 54) -
                p_over_q * *(b + 79 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 54) +
                one_over_two_q * *(b + 52 * OS1_S1 + 34);
            *(b + 52 * OS1_S1 + 82) =
                prefactor_y * *(b + 52 * OS1_S1 + 55) -
                p_over_q * *(b + 79 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 55);
            *(b + 52 * OS1_S1 + 83) =
                prefactor_z * *(b + 52 * OS1_S1 + 55) -
                p_over_q * *(b + 80 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 52 * OS1_S1 + 34);
            *(b + 53 * OS1_S1 + 56) =
                prefactor_x * *(b + 53 * OS1_S1 + 35) -
                p_over_q * *(b + 74 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 53 * OS1_S1 + 20);
            *(b + 53 * OS1_S1 + 57) =
                prefactor_y * *(b + 53 * OS1_S1 + 35) -
                p_over_q * *(b + 80 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 35);
            *(b + 53 * OS1_S1 + 58) =
                prefactor_z * *(b + 53 * OS1_S1 + 35) -
                p_over_q * *(b + 81 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 35);
            *(b + 53 * OS1_S1 + 59) =
                prefactor_y * *(b + 53 * OS1_S1 + 36) -
                p_over_q * *(b + 80 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 36) +
                one_over_two_q * *(b + 53 * OS1_S1 + 20);
            *(b + 53 * OS1_S1 + 60) =
                prefactor_y * *(b + 53 * OS1_S1 + 37) -
                p_over_q * *(b + 80 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 37);
            *(b + 53 * OS1_S1 + 61) =
                prefactor_z * *(b + 53 * OS1_S1 + 37) -
                p_over_q * *(b + 81 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 37) +
                one_over_two_q * *(b + 53 * OS1_S1 + 20);
            *(b + 53 * OS1_S1 + 62) =
                prefactor_x * *(b + 53 * OS1_S1 + 41) -
                p_over_q * *(b + 74 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 26);
            *(b + 53 * OS1_S1 + 63) =
                prefactor_z * *(b + 53 * OS1_S1 + 38) -
                p_over_q * *(b + 81 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 38);
            *(b + 53 * OS1_S1 + 64) =
                prefactor_y * *(b + 53 * OS1_S1 + 40) -
                p_over_q * *(b + 80 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 40);
            *(b + 53 * OS1_S1 + 65) =
                prefactor_x * *(b + 53 * OS1_S1 + 44) -
                p_over_q * *(b + 74 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 29);
            *(b + 53 * OS1_S1 + 66) = prefactor_x * *(b + 53 * OS1_S1 + 45) -
                                      p_over_q * *(b + 74 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 30);
            *(b + 53 * OS1_S1 + 67) =
                prefactor_z * *(b + 53 * OS1_S1 + 41) -
                p_over_q * *(b + 81 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 41);
            *(b + 53 * OS1_S1 + 68) = prefactor_x * *(b + 53 * OS1_S1 + 47) -
                                      p_over_q * *(b + 74 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 32);
            *(b + 53 * OS1_S1 + 69) =
                prefactor_y * *(b + 53 * OS1_S1 + 44) -
                p_over_q * *(b + 80 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 44);
            *(b + 53 * OS1_S1 + 70) = prefactor_x * *(b + 53 * OS1_S1 + 49) -
                                      p_over_q * *(b + 74 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 34);
            *(b + 53 * OS1_S1 + 71) = prefactor_x * *(b + 53 * OS1_S1 + 50) -
                                      p_over_q * *(b + 74 * OS1_S1 + 50);
            *(b + 53 * OS1_S1 + 72) = prefactor_x * *(b + 53 * OS1_S1 + 51) -
                                      p_over_q * *(b + 74 * OS1_S1 + 51);
            *(b + 53 * OS1_S1 + 73) = prefactor_x * *(b + 53 * OS1_S1 + 52) -
                                      p_over_q * *(b + 74 * OS1_S1 + 52);
            *(b + 53 * OS1_S1 + 74) = prefactor_x * *(b + 53 * OS1_S1 + 53) -
                                      p_over_q * *(b + 74 * OS1_S1 + 53);
            *(b + 53 * OS1_S1 + 75) = prefactor_x * *(b + 53 * OS1_S1 + 54) -
                                      p_over_q * *(b + 74 * OS1_S1 + 54);
            *(b + 53 * OS1_S1 + 76) = prefactor_x * *(b + 53 * OS1_S1 + 55) -
                                      p_over_q * *(b + 74 * OS1_S1 + 55);
            *(b + 53 * OS1_S1 + 77) =
                prefactor_y * *(b + 53 * OS1_S1 + 50) -
                p_over_q * *(b + 80 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 53 * OS1_S1 + 30);
            *(b + 53 * OS1_S1 + 78) =
                prefactor_z * *(b + 53 * OS1_S1 + 50) -
                p_over_q * *(b + 81 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 50);
            *(b + 53 * OS1_S1 + 79) =
                prefactor_z * *(b + 53 * OS1_S1 + 51) -
                p_over_q * *(b + 81 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 51) +
                one_over_two_q * *(b + 53 * OS1_S1 + 30);
            *(b + 53 * OS1_S1 + 80) =
                prefactor_y * *(b + 53 * OS1_S1 + 53) -
                p_over_q * *(b + 80 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 33);
            *(b + 53 * OS1_S1 + 81) =
                prefactor_y * *(b + 53 * OS1_S1 + 54) -
                p_over_q * *(b + 80 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 54) +
                one_over_two_q * *(b + 53 * OS1_S1 + 34);
            *(b + 53 * OS1_S1 + 82) =
                prefactor_y * *(b + 53 * OS1_S1 + 55) -
                p_over_q * *(b + 80 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 55);
            *(b + 53 * OS1_S1 + 83) =
                prefactor_z * *(b + 53 * OS1_S1 + 55) -
                p_over_q * *(b + 81 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 53 * OS1_S1 + 34);
            *(b + 54 * OS1_S1 + 56) =
                prefactor_x * *(b + 54 * OS1_S1 + 35) -
                p_over_q * *(b + 75 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 20);
            *(b + 54 * OS1_S1 + 57) = prefactor_y * *(b + 54 * OS1_S1 + 35) -
                                      p_over_q * *(b + 81 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 35);
            *(b + 54 * OS1_S1 + 58) =
                prefactor_z * *(b + 54 * OS1_S1 + 35) -
                p_over_q * *(b + 82 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 35);
            *(b + 54 * OS1_S1 + 59) = prefactor_y * *(b + 54 * OS1_S1 + 36) -
                                      p_over_q * *(b + 81 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 20);
            *(b + 54 * OS1_S1 + 60) = prefactor_y * *(b + 54 * OS1_S1 + 37) -
                                      p_over_q * *(b + 81 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 37);
            *(b + 54 * OS1_S1 + 61) =
                prefactor_z * *(b + 54 * OS1_S1 + 37) -
                p_over_q * *(b + 82 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 37) +
                one_over_two_q * *(b + 54 * OS1_S1 + 20);
            *(b + 54 * OS1_S1 + 62) =
                prefactor_x * *(b + 54 * OS1_S1 + 41) -
                p_over_q * *(b + 75 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 26);
            *(b + 54 * OS1_S1 + 63) =
                prefactor_z * *(b + 54 * OS1_S1 + 38) -
                p_over_q * *(b + 82 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 38);
            *(b + 54 * OS1_S1 + 64) = prefactor_y * *(b + 54 * OS1_S1 + 40) -
                                      p_over_q * *(b + 81 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 40);
            *(b + 54 * OS1_S1 + 65) =
                prefactor_x * *(b + 54 * OS1_S1 + 44) -
                p_over_q * *(b + 75 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 29);
            *(b + 54 * OS1_S1 + 66) = prefactor_x * *(b + 54 * OS1_S1 + 45) -
                                      p_over_q * *(b + 75 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 30);
            *(b + 54 * OS1_S1 + 67) =
                prefactor_z * *(b + 54 * OS1_S1 + 41) -
                p_over_q * *(b + 82 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 41);
            *(b + 54 * OS1_S1 + 68) = prefactor_x * *(b + 54 * OS1_S1 + 47) -
                                      p_over_q * *(b + 75 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 32);
            *(b + 54 * OS1_S1 + 69) = prefactor_y * *(b + 54 * OS1_S1 + 44) -
                                      p_over_q * *(b + 81 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 44);
            *(b + 54 * OS1_S1 + 70) = prefactor_x * *(b + 54 * OS1_S1 + 49) -
                                      p_over_q * *(b + 75 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 34);
            *(b + 54 * OS1_S1 + 71) = prefactor_x * *(b + 54 * OS1_S1 + 50) -
                                      p_over_q * *(b + 75 * OS1_S1 + 50);
            *(b + 54 * OS1_S1 + 72) = prefactor_x * *(b + 54 * OS1_S1 + 51) -
                                      p_over_q * *(b + 75 * OS1_S1 + 51);
            *(b + 54 * OS1_S1 + 73) = prefactor_x * *(b + 54 * OS1_S1 + 52) -
                                      p_over_q * *(b + 75 * OS1_S1 + 52);
            *(b + 54 * OS1_S1 + 74) = prefactor_x * *(b + 54 * OS1_S1 + 53) -
                                      p_over_q * *(b + 75 * OS1_S1 + 53);
            *(b + 54 * OS1_S1 + 75) = prefactor_x * *(b + 54 * OS1_S1 + 54) -
                                      p_over_q * *(b + 75 * OS1_S1 + 54);
            *(b + 54 * OS1_S1 + 76) = prefactor_x * *(b + 54 * OS1_S1 + 55) -
                                      p_over_q * *(b + 75 * OS1_S1 + 55);
            *(b + 54 * OS1_S1 + 77) =
                prefactor_y * *(b + 54 * OS1_S1 + 50) -
                p_over_q * *(b + 81 * OS1_S1 + 50) +
                one_over_two_q * *(b + 34 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 30);
            *(b + 54 * OS1_S1 + 78) =
                prefactor_z * *(b + 54 * OS1_S1 + 50) -
                p_over_q * *(b + 82 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 50);
            *(b + 54 * OS1_S1 + 79) =
                prefactor_z * *(b + 54 * OS1_S1 + 51) -
                p_over_q * *(b + 82 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 51) +
                one_over_two_q * *(b + 54 * OS1_S1 + 30);
            *(b + 54 * OS1_S1 + 80) =
                prefactor_y * *(b + 54 * OS1_S1 + 53) -
                p_over_q * *(b + 81 * OS1_S1 + 53) +
                one_over_two_q * *(b + 34 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 33);
            *(b + 54 * OS1_S1 + 81) = prefactor_y * *(b + 54 * OS1_S1 + 54) -
                                      p_over_q * *(b + 81 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 34);
            *(b + 54 * OS1_S1 + 82) = prefactor_y * *(b + 54 * OS1_S1 + 55) -
                                      p_over_q * *(b + 81 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 55);
            *(b + 54 * OS1_S1 + 83) =
                prefactor_z * *(b + 54 * OS1_S1 + 55) -
                p_over_q * *(b + 82 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 34);
            *(b + 55 * OS1_S1 + 56) =
                prefactor_x * *(b + 55 * OS1_S1 + 35) -
                p_over_q * *(b + 76 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 55 * OS1_S1 + 20);
            *(b + 55 * OS1_S1 + 57) = prefactor_y * *(b + 55 * OS1_S1 + 35) -
                                      p_over_q * *(b + 82 * OS1_S1 + 35);
            *(b + 55 * OS1_S1 + 58) =
                prefactor_z * *(b + 55 * OS1_S1 + 35) -
                p_over_q * *(b + 83 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 35);
            *(b + 55 * OS1_S1 + 59) = prefactor_y * *(b + 55 * OS1_S1 + 36) -
                                      p_over_q * *(b + 82 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 20);
            *(b + 55 * OS1_S1 + 60) = prefactor_y * *(b + 55 * OS1_S1 + 37) -
                                      p_over_q * *(b + 82 * OS1_S1 + 37);
            *(b + 55 * OS1_S1 + 61) =
                prefactor_z * *(b + 55 * OS1_S1 + 37) -
                p_over_q * *(b + 83 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 37) +
                one_over_two_q * *(b + 55 * OS1_S1 + 20);
            *(b + 55 * OS1_S1 + 62) =
                prefactor_y * *(b + 55 * OS1_S1 + 38) -
                p_over_q * *(b + 82 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 21);
            *(b + 55 * OS1_S1 + 63) =
                prefactor_z * *(b + 55 * OS1_S1 + 38) -
                p_over_q * *(b + 83 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 38);
            *(b + 55 * OS1_S1 + 64) = prefactor_y * *(b + 55 * OS1_S1 + 40) -
                                      p_over_q * *(b + 82 * OS1_S1 + 40);
            *(b + 55 * OS1_S1 + 65) =
                prefactor_x * *(b + 55 * OS1_S1 + 44) -
                p_over_q * *(b + 76 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 29);
            *(b + 55 * OS1_S1 + 66) = prefactor_x * *(b + 55 * OS1_S1 + 45) -
                                      p_over_q * *(b + 76 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 30);
            *(b + 55 * OS1_S1 + 67) =
                prefactor_z * *(b + 55 * OS1_S1 + 41) -
                p_over_q * *(b + 83 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 41);
            *(b + 55 * OS1_S1 + 68) = prefactor_y * *(b + 55 * OS1_S1 + 43) -
                                      p_over_q * *(b + 82 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 25);
            *(b + 55 * OS1_S1 + 69) = prefactor_y * *(b + 55 * OS1_S1 + 44) -
                                      p_over_q * *(b + 82 * OS1_S1 + 44);
            *(b + 55 * OS1_S1 + 70) = prefactor_x * *(b + 55 * OS1_S1 + 49) -
                                      p_over_q * *(b + 76 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 34);
            *(b + 55 * OS1_S1 + 71) = prefactor_x * *(b + 55 * OS1_S1 + 50) -
                                      p_over_q * *(b + 76 * OS1_S1 + 50);
            *(b + 55 * OS1_S1 + 72) = prefactor_x * *(b + 55 * OS1_S1 + 51) -
                                      p_over_q * *(b + 76 * OS1_S1 + 51);
            *(b + 55 * OS1_S1 + 73) = prefactor_x * *(b + 55 * OS1_S1 + 52) -
                                      p_over_q * *(b + 76 * OS1_S1 + 52);
            *(b + 55 * OS1_S1 + 74) = prefactor_x * *(b + 55 * OS1_S1 + 53) -
                                      p_over_q * *(b + 76 * OS1_S1 + 53);
            *(b + 55 * OS1_S1 + 75) = prefactor_y * *(b + 55 * OS1_S1 + 49) -
                                      p_over_q * *(b + 82 * OS1_S1 + 49);
            *(b + 55 * OS1_S1 + 76) = prefactor_x * *(b + 55 * OS1_S1 + 55) -
                                      p_over_q * *(b + 76 * OS1_S1 + 55);
            *(b + 55 * OS1_S1 + 77) =
                prefactor_y * *(b + 55 * OS1_S1 + 50) -
                p_over_q * *(b + 82 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 55 * OS1_S1 + 30);
            *(b + 55 * OS1_S1 + 78) =
                prefactor_z * *(b + 55 * OS1_S1 + 50) -
                p_over_q * *(b + 83 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 50);
            *(b + 55 * OS1_S1 + 79) =
                prefactor_z * *(b + 55 * OS1_S1 + 51) -
                p_over_q * *(b + 83 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 51) +
                one_over_two_q * *(b + 55 * OS1_S1 + 30);
            *(b + 55 * OS1_S1 + 80) =
                prefactor_y * *(b + 55 * OS1_S1 + 53) -
                p_over_q * *(b + 82 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 33);
            *(b + 55 * OS1_S1 + 81) = prefactor_y * *(b + 55 * OS1_S1 + 54) -
                                      p_over_q * *(b + 82 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 34);
            *(b + 55 * OS1_S1 + 82) = prefactor_y * *(b + 55 * OS1_S1 + 55) -
                                      p_over_q * *(b + 82 * OS1_S1 + 55);
            *(b + 55 * OS1_S1 + 83) =
                prefactor_z * *(b + 55 * OS1_S1 + 55) -
                p_over_q * *(b + 83 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 55 * OS1_S1 + 34);
            return;
        }

        void transfer_6_6(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 56 * OS1_S1 + 56) =
                prefactor_x * *(b + 56 * OS1_S1 + 35) -
                p_over_q * *(b + 84 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 56 * OS1_S1 + 20);
            *(b + 56 * OS1_S1 + 57) = prefactor_y * *(b + 56 * OS1_S1 + 35) -
                                      p_over_q * *(b + 85 * OS1_S1 + 35);
            *(b + 56 * OS1_S1 + 58) = prefactor_z * *(b + 56 * OS1_S1 + 35) -
                                      p_over_q * *(b + 86 * OS1_S1 + 35);
            *(b + 56 * OS1_S1 + 59) = prefactor_y * *(b + 56 * OS1_S1 + 36) -
                                      p_over_q * *(b + 85 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 20);
            *(b + 56 * OS1_S1 + 60) = prefactor_z * *(b + 56 * OS1_S1 + 36) -
                                      p_over_q * *(b + 86 * OS1_S1 + 36);
            *(b + 56 * OS1_S1 + 61) = prefactor_z * *(b + 56 * OS1_S1 + 37) -
                                      p_over_q * *(b + 86 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 20);
            *(b + 56 * OS1_S1 + 62) =
                prefactor_y * *(b + 56 * OS1_S1 + 38) -
                p_over_q * *(b + 85 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 21);
            *(b + 56 * OS1_S1 + 63) = prefactor_z * *(b + 56 * OS1_S1 + 38) -
                                      p_over_q * *(b + 86 * OS1_S1 + 38);
            *(b + 56 * OS1_S1 + 64) = prefactor_y * *(b + 56 * OS1_S1 + 40) -
                                      p_over_q * *(b + 85 * OS1_S1 + 40);
            *(b + 56 * OS1_S1 + 65) =
                prefactor_z * *(b + 56 * OS1_S1 + 40) -
                p_over_q * *(b + 86 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 22);
            *(b + 56 * OS1_S1 + 66) =
                prefactor_x * *(b + 56 * OS1_S1 + 45) -
                p_over_q * *(b + 84 * OS1_S1 + 45) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 45) +
                one_over_two_q * *(b + 56 * OS1_S1 + 30);
            *(b + 56 * OS1_S1 + 67) = prefactor_z * *(b + 56 * OS1_S1 + 41) -
                                      p_over_q * *(b + 86 * OS1_S1 + 41);
            *(b + 56 * OS1_S1 + 68) = prefactor_z * *(b + 56 * OS1_S1 + 42) -
                                      p_over_q * *(b + 86 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 23);
            *(b + 56 * OS1_S1 + 69) = prefactor_y * *(b + 56 * OS1_S1 + 44) -
                                      p_over_q * *(b + 85 * OS1_S1 + 44);
            *(b + 56 * OS1_S1 + 70) =
                prefactor_x * *(b + 56 * OS1_S1 + 49) -
                p_over_q * *(b + 84 * OS1_S1 + 49) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 49) +
                one_over_two_q * *(b + 56 * OS1_S1 + 34);
            *(b + 56 * OS1_S1 + 71) =
                prefactor_x * *(b + 56 * OS1_S1 + 50) -
                p_over_q * *(b + 84 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 50);
            *(b + 56 * OS1_S1 + 72) = prefactor_z * *(b + 56 * OS1_S1 + 45) -
                                      p_over_q * *(b + 86 * OS1_S1 + 45);
            *(b + 56 * OS1_S1 + 73) =
                prefactor_x * *(b + 56 * OS1_S1 + 52) -
                p_over_q * *(b + 84 * OS1_S1 + 52) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 52);
            *(b + 56 * OS1_S1 + 74) =
                prefactor_x * *(b + 56 * OS1_S1 + 53) -
                p_over_q * *(b + 84 * OS1_S1 + 53) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 53);
            *(b + 56 * OS1_S1 + 75) = prefactor_y * *(b + 56 * OS1_S1 + 49) -
                                      p_over_q * *(b + 85 * OS1_S1 + 49);
            *(b + 56 * OS1_S1 + 76) =
                prefactor_x * *(b + 56 * OS1_S1 + 55) -
                p_over_q * *(b + 84 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 55);
            *(b + 56 * OS1_S1 + 77) =
                prefactor_y * *(b + 56 * OS1_S1 + 50) -
                p_over_q * *(b + 85 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 56 * OS1_S1 + 30);
            *(b + 56 * OS1_S1 + 78) = prefactor_z * *(b + 56 * OS1_S1 + 50) -
                                      p_over_q * *(b + 86 * OS1_S1 + 50);
            *(b + 56 * OS1_S1 + 79) = prefactor_z * *(b + 56 * OS1_S1 + 51) -
                                      p_over_q * *(b + 86 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 30);
            *(b + 56 * OS1_S1 + 80) =
                prefactor_z * *(b + 56 * OS1_S1 + 52) -
                p_over_q * *(b + 86 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 31);
            *(b + 56 * OS1_S1 + 81) = prefactor_y * *(b + 56 * OS1_S1 + 54) -
                                      p_over_q * *(b + 85 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 34);
            *(b + 56 * OS1_S1 + 82) = prefactor_y * *(b + 56 * OS1_S1 + 55) -
                                      p_over_q * *(b + 85 * OS1_S1 + 55);
            *(b + 56 * OS1_S1 + 83) =
                prefactor_z * *(b + 56 * OS1_S1 + 55) -
                p_over_q * *(b + 86 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 56 * OS1_S1 + 34);
            *(b + 57 * OS1_S1 + 56) =
                prefactor_x * *(b + 57 * OS1_S1 + 35) -
                p_over_q * *(b + 85 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 57 * OS1_S1 + 20);
            *(b + 57 * OS1_S1 + 57) = prefactor_y * *(b + 57 * OS1_S1 + 35) -
                                      p_over_q * *(b + 87 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 35);
            *(b + 57 * OS1_S1 + 58) = prefactor_z * *(b + 57 * OS1_S1 + 35) -
                                      p_over_q * *(b + 88 * OS1_S1 + 35);
            *(b + 57 * OS1_S1 + 59) = prefactor_y * *(b + 57 * OS1_S1 + 36) -
                                      p_over_q * *(b + 87 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 20);
            *(b + 57 * OS1_S1 + 60) = prefactor_z * *(b + 57 * OS1_S1 + 36) -
                                      p_over_q * *(b + 88 * OS1_S1 + 36);
            *(b + 57 * OS1_S1 + 61) = prefactor_z * *(b + 57 * OS1_S1 + 37) -
                                      p_over_q * *(b + 88 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 20);
            *(b + 57 * OS1_S1 + 62) =
                prefactor_y * *(b + 57 * OS1_S1 + 38) -
                p_over_q * *(b + 87 * OS1_S1 + 38) +
                one_over_two_q * *(b + 35 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 21);
            *(b + 57 * OS1_S1 + 63) = prefactor_z * *(b + 57 * OS1_S1 + 38) -
                                      p_over_q * *(b + 88 * OS1_S1 + 38);
            *(b + 57 * OS1_S1 + 64) = prefactor_y * *(b + 57 * OS1_S1 + 40) -
                                      p_over_q * *(b + 87 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 40);
            *(b + 57 * OS1_S1 + 65) =
                prefactor_z * *(b + 57 * OS1_S1 + 40) -
                p_over_q * *(b + 88 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 22);
            *(b + 57 * OS1_S1 + 66) =
                prefactor_x * *(b + 57 * OS1_S1 + 45) -
                p_over_q * *(b + 85 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 45) +
                one_over_two_q * *(b + 57 * OS1_S1 + 30);
            *(b + 57 * OS1_S1 + 67) = prefactor_z * *(b + 57 * OS1_S1 + 41) -
                                      p_over_q * *(b + 88 * OS1_S1 + 41);
            *(b + 57 * OS1_S1 + 68) = prefactor_z * *(b + 57 * OS1_S1 + 42) -
                                      p_over_q * *(b + 88 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 23);
            *(b + 57 * OS1_S1 + 69) = prefactor_y * *(b + 57 * OS1_S1 + 44) -
                                      p_over_q * *(b + 87 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 44);
            *(b + 57 * OS1_S1 + 70) =
                prefactor_x * *(b + 57 * OS1_S1 + 49) -
                p_over_q * *(b + 85 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 49) +
                one_over_two_q * *(b + 57 * OS1_S1 + 34);
            *(b + 57 * OS1_S1 + 71) =
                prefactor_x * *(b + 57 * OS1_S1 + 50) -
                p_over_q * *(b + 85 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 50);
            *(b + 57 * OS1_S1 + 72) = prefactor_z * *(b + 57 * OS1_S1 + 45) -
                                      p_over_q * *(b + 88 * OS1_S1 + 45);
            *(b + 57 * OS1_S1 + 73) =
                prefactor_x * *(b + 57 * OS1_S1 + 52) -
                p_over_q * *(b + 85 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 52);
            *(b + 57 * OS1_S1 + 74) =
                prefactor_x * *(b + 57 * OS1_S1 + 53) -
                p_over_q * *(b + 85 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 53);
            *(b + 57 * OS1_S1 + 75) = prefactor_y * *(b + 57 * OS1_S1 + 49) -
                                      p_over_q * *(b + 87 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 49);
            *(b + 57 * OS1_S1 + 76) =
                prefactor_x * *(b + 57 * OS1_S1 + 55) -
                p_over_q * *(b + 85 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 55);
            *(b + 57 * OS1_S1 + 77) =
                prefactor_y * *(b + 57 * OS1_S1 + 50) -
                p_over_q * *(b + 87 * OS1_S1 + 50) +
                one_over_two_q * *(b + 35 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 57 * OS1_S1 + 30);
            *(b + 57 * OS1_S1 + 78) = prefactor_z * *(b + 57 * OS1_S1 + 50) -
                                      p_over_q * *(b + 88 * OS1_S1 + 50);
            *(b + 57 * OS1_S1 + 79) = prefactor_z * *(b + 57 * OS1_S1 + 51) -
                                      p_over_q * *(b + 88 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 30);
            *(b + 57 * OS1_S1 + 80) =
                prefactor_z * *(b + 57 * OS1_S1 + 52) -
                p_over_q * *(b + 88 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 31);
            *(b + 57 * OS1_S1 + 81) = prefactor_y * *(b + 57 * OS1_S1 + 54) -
                                      p_over_q * *(b + 87 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 34);
            *(b + 57 * OS1_S1 + 82) = prefactor_y * *(b + 57 * OS1_S1 + 55) -
                                      p_over_q * *(b + 87 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 55);
            *(b + 57 * OS1_S1 + 83) =
                prefactor_z * *(b + 57 * OS1_S1 + 55) -
                p_over_q * *(b + 88 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 57 * OS1_S1 + 34);
            *(b + 58 * OS1_S1 + 56) =
                prefactor_x * *(b + 58 * OS1_S1 + 35) -
                p_over_q * *(b + 86 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 58 * OS1_S1 + 20);
            *(b + 58 * OS1_S1 + 57) = prefactor_y * *(b + 58 * OS1_S1 + 35) -
                                      p_over_q * *(b + 88 * OS1_S1 + 35);
            *(b + 58 * OS1_S1 + 58) = prefactor_z * *(b + 58 * OS1_S1 + 35) -
                                      p_over_q * *(b + 89 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 35);
            *(b + 58 * OS1_S1 + 59) = prefactor_y * *(b + 58 * OS1_S1 + 36) -
                                      p_over_q * *(b + 88 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 20);
            *(b + 58 * OS1_S1 + 60) = prefactor_y * *(b + 58 * OS1_S1 + 37) -
                                      p_over_q * *(b + 88 * OS1_S1 + 37);
            *(b + 58 * OS1_S1 + 61) = prefactor_z * *(b + 58 * OS1_S1 + 37) -
                                      p_over_q * *(b + 89 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 20);
            *(b + 58 * OS1_S1 + 62) =
                prefactor_y * *(b + 58 * OS1_S1 + 38) -
                p_over_q * *(b + 88 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 21);
            *(b + 58 * OS1_S1 + 63) = prefactor_z * *(b + 58 * OS1_S1 + 38) -
                                      p_over_q * *(b + 89 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 38);
            *(b + 58 * OS1_S1 + 64) = prefactor_y * *(b + 58 * OS1_S1 + 40) -
                                      p_over_q * *(b + 88 * OS1_S1 + 40);
            *(b + 58 * OS1_S1 + 65) =
                prefactor_z * *(b + 58 * OS1_S1 + 40) -
                p_over_q * *(b + 89 * OS1_S1 + 40) +
                one_over_two_q * *(b + 35 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 22);
            *(b + 58 * OS1_S1 + 66) =
                prefactor_x * *(b + 58 * OS1_S1 + 45) -
                p_over_q * *(b + 86 * OS1_S1 + 45) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 45) +
                one_over_two_q * *(b + 58 * OS1_S1 + 30);
            *(b + 58 * OS1_S1 + 67) = prefactor_z * *(b + 58 * OS1_S1 + 41) -
                                      p_over_q * *(b + 89 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 41);
            *(b + 58 * OS1_S1 + 68) = prefactor_y * *(b + 58 * OS1_S1 + 43) -
                                      p_over_q * *(b + 88 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 25);
            *(b + 58 * OS1_S1 + 69) = prefactor_y * *(b + 58 * OS1_S1 + 44) -
                                      p_over_q * *(b + 88 * OS1_S1 + 44);
            *(b + 58 * OS1_S1 + 70) =
                prefactor_x * *(b + 58 * OS1_S1 + 49) -
                p_over_q * *(b + 86 * OS1_S1 + 49) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 49) +
                one_over_two_q * *(b + 58 * OS1_S1 + 34);
            *(b + 58 * OS1_S1 + 71) =
                prefactor_x * *(b + 58 * OS1_S1 + 50) -
                p_over_q * *(b + 86 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 50);
            *(b + 58 * OS1_S1 + 72) = prefactor_z * *(b + 58 * OS1_S1 + 45) -
                                      p_over_q * *(b + 89 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 45);
            *(b + 58 * OS1_S1 + 73) =
                prefactor_x * *(b + 58 * OS1_S1 + 52) -
                p_over_q * *(b + 86 * OS1_S1 + 52) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 52);
            *(b + 58 * OS1_S1 + 74) =
                prefactor_x * *(b + 58 * OS1_S1 + 53) -
                p_over_q * *(b + 86 * OS1_S1 + 53) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 53);
            *(b + 58 * OS1_S1 + 75) = prefactor_y * *(b + 58 * OS1_S1 + 49) -
                                      p_over_q * *(b + 88 * OS1_S1 + 49);
            *(b + 58 * OS1_S1 + 76) =
                prefactor_x * *(b + 58 * OS1_S1 + 55) -
                p_over_q * *(b + 86 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 55);
            *(b + 58 * OS1_S1 + 77) =
                prefactor_y * *(b + 58 * OS1_S1 + 50) -
                p_over_q * *(b + 88 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 58 * OS1_S1 + 30);
            *(b + 58 * OS1_S1 + 78) = prefactor_z * *(b + 58 * OS1_S1 + 50) -
                                      p_over_q * *(b + 89 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 50);
            *(b + 58 * OS1_S1 + 79) = prefactor_z * *(b + 58 * OS1_S1 + 51) -
                                      p_over_q * *(b + 89 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 30);
            *(b + 58 * OS1_S1 + 80) =
                prefactor_y * *(b + 58 * OS1_S1 + 53) -
                p_over_q * *(b + 88 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 33);
            *(b + 58 * OS1_S1 + 81) = prefactor_y * *(b + 58 * OS1_S1 + 54) -
                                      p_over_q * *(b + 88 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 34);
            *(b + 58 * OS1_S1 + 82) = prefactor_y * *(b + 58 * OS1_S1 + 55) -
                                      p_over_q * *(b + 88 * OS1_S1 + 55);
            *(b + 58 * OS1_S1 + 83) =
                prefactor_z * *(b + 58 * OS1_S1 + 55) -
                p_over_q * *(b + 89 * OS1_S1 + 55) +
                one_over_two_q * *(b + 35 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 58 * OS1_S1 + 34);
            *(b + 59 * OS1_S1 + 56) =
                prefactor_x * *(b + 59 * OS1_S1 + 35) -
                p_over_q * *(b + 87 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 20);
            *(b + 59 * OS1_S1 + 57) =
                prefactor_y * *(b + 59 * OS1_S1 + 35) -
                p_over_q * *(b + 90 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 35);
            *(b + 59 * OS1_S1 + 58) = prefactor_z * *(b + 59 * OS1_S1 + 35) -
                                      p_over_q * *(b + 91 * OS1_S1 + 35);
            *(b + 59 * OS1_S1 + 59) =
                prefactor_y * *(b + 59 * OS1_S1 + 36) -
                p_over_q * *(b + 90 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 36) +
                one_over_two_q * *(b + 59 * OS1_S1 + 20);
            *(b + 59 * OS1_S1 + 60) = prefactor_z * *(b + 59 * OS1_S1 + 36) -
                                      p_over_q * *(b + 91 * OS1_S1 + 36);
            *(b + 59 * OS1_S1 + 61) = prefactor_z * *(b + 59 * OS1_S1 + 37) -
                                      p_over_q * *(b + 91 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 20);
            *(b + 59 * OS1_S1 + 62) =
                prefactor_y * *(b + 59 * OS1_S1 + 38) -
                p_over_q * *(b + 90 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 21);
            *(b + 59 * OS1_S1 + 63) = prefactor_z * *(b + 59 * OS1_S1 + 38) -
                                      p_over_q * *(b + 91 * OS1_S1 + 38);
            *(b + 59 * OS1_S1 + 64) =
                prefactor_y * *(b + 59 * OS1_S1 + 40) -
                p_over_q * *(b + 90 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 40);
            *(b + 59 * OS1_S1 + 65) =
                prefactor_z * *(b + 59 * OS1_S1 + 40) -
                p_over_q * *(b + 91 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 22);
            *(b + 59 * OS1_S1 + 66) =
                prefactor_x * *(b + 59 * OS1_S1 + 45) -
                p_over_q * *(b + 87 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 45) +
                one_over_two_q * *(b + 59 * OS1_S1 + 30);
            *(b + 59 * OS1_S1 + 67) = prefactor_z * *(b + 59 * OS1_S1 + 41) -
                                      p_over_q * *(b + 91 * OS1_S1 + 41);
            *(b + 59 * OS1_S1 + 68) = prefactor_z * *(b + 59 * OS1_S1 + 42) -
                                      p_over_q * *(b + 91 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 23);
            *(b + 59 * OS1_S1 + 69) =
                prefactor_y * *(b + 59 * OS1_S1 + 44) -
                p_over_q * *(b + 90 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 44);
            *(b + 59 * OS1_S1 + 70) =
                prefactor_x * *(b + 59 * OS1_S1 + 49) -
                p_over_q * *(b + 87 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 49) +
                one_over_two_q * *(b + 59 * OS1_S1 + 34);
            *(b + 59 * OS1_S1 + 71) =
                prefactor_x * *(b + 59 * OS1_S1 + 50) -
                p_over_q * *(b + 87 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 50);
            *(b + 59 * OS1_S1 + 72) = prefactor_z * *(b + 59 * OS1_S1 + 45) -
                                      p_over_q * *(b + 91 * OS1_S1 + 45);
            *(b + 59 * OS1_S1 + 73) =
                prefactor_x * *(b + 59 * OS1_S1 + 52) -
                p_over_q * *(b + 87 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 52);
            *(b + 59 * OS1_S1 + 74) =
                prefactor_x * *(b + 59 * OS1_S1 + 53) -
                p_over_q * *(b + 87 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 53);
            *(b + 59 * OS1_S1 + 75) =
                prefactor_y * *(b + 59 * OS1_S1 + 49) -
                p_over_q * *(b + 90 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 49);
            *(b + 59 * OS1_S1 + 76) =
                prefactor_x * *(b + 59 * OS1_S1 + 55) -
                p_over_q * *(b + 87 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 55);
            *(b + 59 * OS1_S1 + 77) =
                prefactor_y * *(b + 59 * OS1_S1 + 50) -
                p_over_q * *(b + 90 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 30);
            *(b + 59 * OS1_S1 + 78) = prefactor_z * *(b + 59 * OS1_S1 + 50) -
                                      p_over_q * *(b + 91 * OS1_S1 + 50);
            *(b + 59 * OS1_S1 + 79) = prefactor_z * *(b + 59 * OS1_S1 + 51) -
                                      p_over_q * *(b + 91 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 30);
            *(b + 59 * OS1_S1 + 80) =
                prefactor_z * *(b + 59 * OS1_S1 + 52) -
                p_over_q * *(b + 91 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 31);
            *(b + 59 * OS1_S1 + 81) =
                prefactor_y * *(b + 59 * OS1_S1 + 54) -
                p_over_q * *(b + 90 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 54) +
                one_over_two_q * *(b + 59 * OS1_S1 + 34);
            *(b + 59 * OS1_S1 + 82) =
                prefactor_y * *(b + 59 * OS1_S1 + 55) -
                p_over_q * *(b + 90 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 55);
            *(b + 59 * OS1_S1 + 83) =
                prefactor_z * *(b + 59 * OS1_S1 + 55) -
                p_over_q * *(b + 91 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 34);
            *(b + 60 * OS1_S1 + 56) =
                prefactor_x * *(b + 60 * OS1_S1 + 35) -
                p_over_q * *(b + 88 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 20);
            *(b + 60 * OS1_S1 + 57) = prefactor_y * *(b + 60 * OS1_S1 + 35) -
                                      p_over_q * *(b + 91 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 35);
            *(b + 60 * OS1_S1 + 58) = prefactor_z * *(b + 60 * OS1_S1 + 35) -
                                      p_over_q * *(b + 92 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 35);
            *(b + 60 * OS1_S1 + 59) = prefactor_y * *(b + 60 * OS1_S1 + 36) -
                                      p_over_q * *(b + 91 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 20);
            *(b + 60 * OS1_S1 + 60) = prefactor_z * *(b + 60 * OS1_S1 + 36) -
                                      p_over_q * *(b + 92 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 36);
            *(b + 60 * OS1_S1 + 61) = prefactor_z * *(b + 60 * OS1_S1 + 37) -
                                      p_over_q * *(b + 92 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 20);
            *(b + 60 * OS1_S1 + 62) =
                prefactor_y * *(b + 60 * OS1_S1 + 38) -
                p_over_q * *(b + 91 * OS1_S1 + 38) +
                one_over_two_q * *(b + 37 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 21);
            *(b + 60 * OS1_S1 + 63) = prefactor_z * *(b + 60 * OS1_S1 + 38) -
                                      p_over_q * *(b + 92 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 38);
            *(b + 60 * OS1_S1 + 64) = prefactor_y * *(b + 60 * OS1_S1 + 40) -
                                      p_over_q * *(b + 91 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 40);
            *(b + 60 * OS1_S1 + 65) =
                prefactor_z * *(b + 60 * OS1_S1 + 40) -
                p_over_q * *(b + 92 * OS1_S1 + 40) +
                one_over_two_q * *(b + 36 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 22);
            *(b + 60 * OS1_S1 + 66) =
                prefactor_x * *(b + 60 * OS1_S1 + 45) -
                p_over_q * *(b + 88 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 45) +
                one_over_two_q * *(b + 60 * OS1_S1 + 30);
            *(b + 60 * OS1_S1 + 67) = prefactor_z * *(b + 60 * OS1_S1 + 41) -
                                      p_over_q * *(b + 92 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 41);
            *(b + 60 * OS1_S1 + 68) = prefactor_z * *(b + 60 * OS1_S1 + 42) -
                                      p_over_q * *(b + 92 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 23);
            *(b + 60 * OS1_S1 + 69) = prefactor_y * *(b + 60 * OS1_S1 + 44) -
                                      p_over_q * *(b + 91 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 44);
            *(b + 60 * OS1_S1 + 70) =
                prefactor_x * *(b + 60 * OS1_S1 + 49) -
                p_over_q * *(b + 88 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 49) +
                one_over_two_q * *(b + 60 * OS1_S1 + 34);
            *(b + 60 * OS1_S1 + 71) =
                prefactor_x * *(b + 60 * OS1_S1 + 50) -
                p_over_q * *(b + 88 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 50);
            *(b + 60 * OS1_S1 + 72) = prefactor_z * *(b + 60 * OS1_S1 + 45) -
                                      p_over_q * *(b + 92 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 45);
            *(b + 60 * OS1_S1 + 73) =
                prefactor_x * *(b + 60 * OS1_S1 + 52) -
                p_over_q * *(b + 88 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 52);
            *(b + 60 * OS1_S1 + 74) =
                prefactor_x * *(b + 60 * OS1_S1 + 53) -
                p_over_q * *(b + 88 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 53);
            *(b + 60 * OS1_S1 + 75) = prefactor_y * *(b + 60 * OS1_S1 + 49) -
                                      p_over_q * *(b + 91 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 49);
            *(b + 60 * OS1_S1 + 76) =
                prefactor_x * *(b + 60 * OS1_S1 + 55) -
                p_over_q * *(b + 88 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 55);
            *(b + 60 * OS1_S1 + 77) =
                prefactor_y * *(b + 60 * OS1_S1 + 50) -
                p_over_q * *(b + 91 * OS1_S1 + 50) +
                one_over_two_q * *(b + 37 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 30);
            *(b + 60 * OS1_S1 + 78) = prefactor_z * *(b + 60 * OS1_S1 + 50) -
                                      p_over_q * *(b + 92 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 50);
            *(b + 60 * OS1_S1 + 79) = prefactor_z * *(b + 60 * OS1_S1 + 51) -
                                      p_over_q * *(b + 92 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 30);
            *(b + 60 * OS1_S1 + 80) =
                prefactor_z * *(b + 60 * OS1_S1 + 52) -
                p_over_q * *(b + 92 * OS1_S1 + 52) +
                one_over_two_q * *(b + 36 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 31);
            *(b + 60 * OS1_S1 + 81) = prefactor_y * *(b + 60 * OS1_S1 + 54) -
                                      p_over_q * *(b + 91 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 34);
            *(b + 60 * OS1_S1 + 82) = prefactor_y * *(b + 60 * OS1_S1 + 55) -
                                      p_over_q * *(b + 91 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 55);
            *(b + 60 * OS1_S1 + 83) =
                prefactor_z * *(b + 60 * OS1_S1 + 55) -
                p_over_q * *(b + 92 * OS1_S1 + 55) +
                one_over_two_q * *(b + 36 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 34);
            *(b + 61 * OS1_S1 + 56) =
                prefactor_x * *(b + 61 * OS1_S1 + 35) -
                p_over_q * *(b + 89 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 20);
            *(b + 61 * OS1_S1 + 57) = prefactor_y * *(b + 61 * OS1_S1 + 35) -
                                      p_over_q * *(b + 92 * OS1_S1 + 35);
            *(b + 61 * OS1_S1 + 58) =
                prefactor_z * *(b + 61 * OS1_S1 + 35) -
                p_over_q * *(b + 93 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 35);
            *(b + 61 * OS1_S1 + 59) = prefactor_y * *(b + 61 * OS1_S1 + 36) -
                                      p_over_q * *(b + 92 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 20);
            *(b + 61 * OS1_S1 + 60) = prefactor_y * *(b + 61 * OS1_S1 + 37) -
                                      p_over_q * *(b + 92 * OS1_S1 + 37);
            *(b + 61 * OS1_S1 + 61) =
                prefactor_z * *(b + 61 * OS1_S1 + 37) -
                p_over_q * *(b + 93 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 37) +
                one_over_two_q * *(b + 61 * OS1_S1 + 20);
            *(b + 61 * OS1_S1 + 62) =
                prefactor_y * *(b + 61 * OS1_S1 + 38) -
                p_over_q * *(b + 92 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 21);
            *(b + 61 * OS1_S1 + 63) =
                prefactor_z * *(b + 61 * OS1_S1 + 38) -
                p_over_q * *(b + 93 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 38);
            *(b + 61 * OS1_S1 + 64) = prefactor_y * *(b + 61 * OS1_S1 + 40) -
                                      p_over_q * *(b + 92 * OS1_S1 + 40);
            *(b + 61 * OS1_S1 + 65) =
                prefactor_z * *(b + 61 * OS1_S1 + 40) -
                p_over_q * *(b + 93 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 22);
            *(b + 61 * OS1_S1 + 66) =
                prefactor_x * *(b + 61 * OS1_S1 + 45) -
                p_over_q * *(b + 89 * OS1_S1 + 45) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 45) +
                one_over_two_q * *(b + 61 * OS1_S1 + 30);
            *(b + 61 * OS1_S1 + 67) =
                prefactor_z * *(b + 61 * OS1_S1 + 41) -
                p_over_q * *(b + 93 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 41);
            *(b + 61 * OS1_S1 + 68) = prefactor_y * *(b + 61 * OS1_S1 + 43) -
                                      p_over_q * *(b + 92 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 25);
            *(b + 61 * OS1_S1 + 69) = prefactor_y * *(b + 61 * OS1_S1 + 44) -
                                      p_over_q * *(b + 92 * OS1_S1 + 44);
            *(b + 61 * OS1_S1 + 70) =
                prefactor_x * *(b + 61 * OS1_S1 + 49) -
                p_over_q * *(b + 89 * OS1_S1 + 49) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 49) +
                one_over_two_q * *(b + 61 * OS1_S1 + 34);
            *(b + 61 * OS1_S1 + 71) =
                prefactor_x * *(b + 61 * OS1_S1 + 50) -
                p_over_q * *(b + 89 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 50);
            *(b + 61 * OS1_S1 + 72) =
                prefactor_z * *(b + 61 * OS1_S1 + 45) -
                p_over_q * *(b + 93 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 45);
            *(b + 61 * OS1_S1 + 73) =
                prefactor_x * *(b + 61 * OS1_S1 + 52) -
                p_over_q * *(b + 89 * OS1_S1 + 52) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 52);
            *(b + 61 * OS1_S1 + 74) =
                prefactor_x * *(b + 61 * OS1_S1 + 53) -
                p_over_q * *(b + 89 * OS1_S1 + 53) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 53);
            *(b + 61 * OS1_S1 + 75) = prefactor_y * *(b + 61 * OS1_S1 + 49) -
                                      p_over_q * *(b + 92 * OS1_S1 + 49);
            *(b + 61 * OS1_S1 + 76) =
                prefactor_x * *(b + 61 * OS1_S1 + 55) -
                p_over_q * *(b + 89 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 55);
            *(b + 61 * OS1_S1 + 77) =
                prefactor_y * *(b + 61 * OS1_S1 + 50) -
                p_over_q * *(b + 92 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 30);
            *(b + 61 * OS1_S1 + 78) =
                prefactor_z * *(b + 61 * OS1_S1 + 50) -
                p_over_q * *(b + 93 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 50);
            *(b + 61 * OS1_S1 + 79) =
                prefactor_z * *(b + 61 * OS1_S1 + 51) -
                p_over_q * *(b + 93 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 51) +
                one_over_two_q * *(b + 61 * OS1_S1 + 30);
            *(b + 61 * OS1_S1 + 80) =
                prefactor_y * *(b + 61 * OS1_S1 + 53) -
                p_over_q * *(b + 92 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 33);
            *(b + 61 * OS1_S1 + 81) = prefactor_y * *(b + 61 * OS1_S1 + 54) -
                                      p_over_q * *(b + 92 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 34);
            *(b + 61 * OS1_S1 + 82) = prefactor_y * *(b + 61 * OS1_S1 + 55) -
                                      p_over_q * *(b + 92 * OS1_S1 + 55);
            *(b + 61 * OS1_S1 + 83) =
                prefactor_z * *(b + 61 * OS1_S1 + 55) -
                p_over_q * *(b + 93 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 34);
            *(b + 62 * OS1_S1 + 56) =
                prefactor_x * *(b + 62 * OS1_S1 + 35) -
                p_over_q * *(b + 90 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 62 * OS1_S1 + 20);
            *(b + 62 * OS1_S1 + 57) =
                prefactor_y * *(b + 62 * OS1_S1 + 35) -
                p_over_q * *(b + 94 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 35);
            *(b + 62 * OS1_S1 + 58) = prefactor_z * *(b + 62 * OS1_S1 + 35) -
                                      p_over_q * *(b + 95 * OS1_S1 + 35);
            *(b + 62 * OS1_S1 + 59) =
                prefactor_y * *(b + 62 * OS1_S1 + 36) -
                p_over_q * *(b + 94 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 36) +
                one_over_two_q * *(b + 62 * OS1_S1 + 20);
            *(b + 62 * OS1_S1 + 60) = prefactor_z * *(b + 62 * OS1_S1 + 36) -
                                      p_over_q * *(b + 95 * OS1_S1 + 36);
            *(b + 62 * OS1_S1 + 61) = prefactor_z * *(b + 62 * OS1_S1 + 37) -
                                      p_over_q * *(b + 95 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 20);
            *(b + 62 * OS1_S1 + 62) =
                prefactor_y * *(b + 62 * OS1_S1 + 38) -
                p_over_q * *(b + 94 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 21);
            *(b + 62 * OS1_S1 + 63) = prefactor_z * *(b + 62 * OS1_S1 + 38) -
                                      p_over_q * *(b + 95 * OS1_S1 + 38);
            *(b + 62 * OS1_S1 + 64) =
                prefactor_y * *(b + 62 * OS1_S1 + 40) -
                p_over_q * *(b + 94 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 40);
            *(b + 62 * OS1_S1 + 65) =
                prefactor_z * *(b + 62 * OS1_S1 + 40) -
                p_over_q * *(b + 95 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 22);
            *(b + 62 * OS1_S1 + 66) =
                prefactor_x * *(b + 62 * OS1_S1 + 45) -
                p_over_q * *(b + 90 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 45) +
                one_over_two_q * *(b + 62 * OS1_S1 + 30);
            *(b + 62 * OS1_S1 + 67) = prefactor_z * *(b + 62 * OS1_S1 + 41) -
                                      p_over_q * *(b + 95 * OS1_S1 + 41);
            *(b + 62 * OS1_S1 + 68) = prefactor_z * *(b + 62 * OS1_S1 + 42) -
                                      p_over_q * *(b + 95 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 23);
            *(b + 62 * OS1_S1 + 69) =
                prefactor_y * *(b + 62 * OS1_S1 + 44) -
                p_over_q * *(b + 94 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 44);
            *(b + 62 * OS1_S1 + 70) =
                prefactor_x * *(b + 62 * OS1_S1 + 49) -
                p_over_q * *(b + 90 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 49) +
                one_over_two_q * *(b + 62 * OS1_S1 + 34);
            *(b + 62 * OS1_S1 + 71) =
                prefactor_x * *(b + 62 * OS1_S1 + 50) -
                p_over_q * *(b + 90 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 50);
            *(b + 62 * OS1_S1 + 72) = prefactor_z * *(b + 62 * OS1_S1 + 45) -
                                      p_over_q * *(b + 95 * OS1_S1 + 45);
            *(b + 62 * OS1_S1 + 73) =
                prefactor_x * *(b + 62 * OS1_S1 + 52) -
                p_over_q * *(b + 90 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 52);
            *(b + 62 * OS1_S1 + 74) =
                prefactor_x * *(b + 62 * OS1_S1 + 53) -
                p_over_q * *(b + 90 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 53);
            *(b + 62 * OS1_S1 + 75) =
                prefactor_y * *(b + 62 * OS1_S1 + 49) -
                p_over_q * *(b + 94 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 49);
            *(b + 62 * OS1_S1 + 76) =
                prefactor_x * *(b + 62 * OS1_S1 + 55) -
                p_over_q * *(b + 90 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 55);
            *(b + 62 * OS1_S1 + 77) =
                prefactor_y * *(b + 62 * OS1_S1 + 50) -
                p_over_q * *(b + 94 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 62 * OS1_S1 + 30);
            *(b + 62 * OS1_S1 + 78) = prefactor_z * *(b + 62 * OS1_S1 + 50) -
                                      p_over_q * *(b + 95 * OS1_S1 + 50);
            *(b + 62 * OS1_S1 + 79) = prefactor_z * *(b + 62 * OS1_S1 + 51) -
                                      p_over_q * *(b + 95 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 30);
            *(b + 62 * OS1_S1 + 80) =
                prefactor_z * *(b + 62 * OS1_S1 + 52) -
                p_over_q * *(b + 95 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 31);
            *(b + 62 * OS1_S1 + 81) =
                prefactor_y * *(b + 62 * OS1_S1 + 54) -
                p_over_q * *(b + 94 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 54) +
                one_over_two_q * *(b + 62 * OS1_S1 + 34);
            *(b + 62 * OS1_S1 + 82) =
                prefactor_y * *(b + 62 * OS1_S1 + 55) -
                p_over_q * *(b + 94 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 55);
            *(b + 62 * OS1_S1 + 83) =
                prefactor_z * *(b + 62 * OS1_S1 + 55) -
                p_over_q * *(b + 95 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 62 * OS1_S1 + 34);
            *(b + 63 * OS1_S1 + 56) =
                prefactor_x * *(b + 63 * OS1_S1 + 35) -
                p_over_q * *(b + 91 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 63 * OS1_S1 + 20);
            *(b + 63 * OS1_S1 + 57) =
                prefactor_y * *(b + 63 * OS1_S1 + 35) -
                p_over_q * *(b + 95 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 35);
            *(b + 63 * OS1_S1 + 58) = prefactor_z * *(b + 63 * OS1_S1 + 35) -
                                      p_over_q * *(b + 96 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 35);
            *(b + 63 * OS1_S1 + 59) =
                prefactor_y * *(b + 63 * OS1_S1 + 36) -
                p_over_q * *(b + 95 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 36) +
                one_over_two_q * *(b + 63 * OS1_S1 + 20);
            *(b + 63 * OS1_S1 + 60) = prefactor_z * *(b + 63 * OS1_S1 + 36) -
                                      p_over_q * *(b + 96 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 36);
            *(b + 63 * OS1_S1 + 61) = prefactor_z * *(b + 63 * OS1_S1 + 37) -
                                      p_over_q * *(b + 96 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 63 * OS1_S1 + 20);
            *(b + 63 * OS1_S1 + 62) =
                prefactor_y * *(b + 63 * OS1_S1 + 38) -
                p_over_q * *(b + 95 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 21);
            *(b + 63 * OS1_S1 + 63) = prefactor_z * *(b + 63 * OS1_S1 + 38) -
                                      p_over_q * *(b + 96 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 38);
            *(b + 63 * OS1_S1 + 64) =
                prefactor_y * *(b + 63 * OS1_S1 + 40) -
                p_over_q * *(b + 95 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 40);
            *(b + 63 * OS1_S1 + 65) =
                prefactor_z * *(b + 63 * OS1_S1 + 40) -
                p_over_q * *(b + 96 * OS1_S1 + 40) +
                one_over_two_q * *(b + 38 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 22);
            *(b + 63 * OS1_S1 + 66) =
                prefactor_x * *(b + 63 * OS1_S1 + 45) -
                p_over_q * *(b + 91 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 45) +
                one_over_two_q * *(b + 63 * OS1_S1 + 30);
            *(b + 63 * OS1_S1 + 67) = prefactor_z * *(b + 63 * OS1_S1 + 41) -
                                      p_over_q * *(b + 96 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 41);
            *(b + 63 * OS1_S1 + 68) = prefactor_z * *(b + 63 * OS1_S1 + 42) -
                                      p_over_q * *(b + 96 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 63 * OS1_S1 + 23);
            *(b + 63 * OS1_S1 + 69) =
                prefactor_y * *(b + 63 * OS1_S1 + 44) -
                p_over_q * *(b + 95 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 44);
            *(b + 63 * OS1_S1 + 70) =
                prefactor_x * *(b + 63 * OS1_S1 + 49) -
                p_over_q * *(b + 91 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 49) +
                one_over_two_q * *(b + 63 * OS1_S1 + 34);
            *(b + 63 * OS1_S1 + 71) =
                prefactor_x * *(b + 63 * OS1_S1 + 50) -
                p_over_q * *(b + 91 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 50);
            *(b + 63 * OS1_S1 + 72) = prefactor_z * *(b + 63 * OS1_S1 + 45) -
                                      p_over_q * *(b + 96 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 45);
            *(b + 63 * OS1_S1 + 73) =
                prefactor_x * *(b + 63 * OS1_S1 + 52) -
                p_over_q * *(b + 91 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 52);
            *(b + 63 * OS1_S1 + 74) =
                prefactor_x * *(b + 63 * OS1_S1 + 53) -
                p_over_q * *(b + 91 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 53);
            *(b + 63 * OS1_S1 + 75) =
                prefactor_y * *(b + 63 * OS1_S1 + 49) -
                p_over_q * *(b + 95 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 49);
            *(b + 63 * OS1_S1 + 76) =
                prefactor_x * *(b + 63 * OS1_S1 + 55) -
                p_over_q * *(b + 91 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 55);
            *(b + 63 * OS1_S1 + 77) =
                prefactor_y * *(b + 63 * OS1_S1 + 50) -
                p_over_q * *(b + 95 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 63 * OS1_S1 + 30);
            *(b + 63 * OS1_S1 + 78) = prefactor_z * *(b + 63 * OS1_S1 + 50) -
                                      p_over_q * *(b + 96 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 50);
            *(b + 63 * OS1_S1 + 79) = prefactor_z * *(b + 63 * OS1_S1 + 51) -
                                      p_over_q * *(b + 96 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 63 * OS1_S1 + 30);
            *(b + 63 * OS1_S1 + 80) =
                prefactor_z * *(b + 63 * OS1_S1 + 52) -
                p_over_q * *(b + 96 * OS1_S1 + 52) +
                one_over_two_q * *(b + 38 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 31);
            *(b + 63 * OS1_S1 + 81) =
                prefactor_y * *(b + 63 * OS1_S1 + 54) -
                p_over_q * *(b + 95 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 54) +
                one_over_two_q * *(b + 63 * OS1_S1 + 34);
            *(b + 63 * OS1_S1 + 82) =
                prefactor_y * *(b + 63 * OS1_S1 + 55) -
                p_over_q * *(b + 95 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 55);
            *(b + 63 * OS1_S1 + 83) =
                prefactor_z * *(b + 63 * OS1_S1 + 55) -
                p_over_q * *(b + 96 * OS1_S1 + 55) +
                one_over_two_q * *(b + 38 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 63 * OS1_S1 + 34);
            *(b + 64 * OS1_S1 + 56) =
                prefactor_x * *(b + 64 * OS1_S1 + 35) -
                p_over_q * *(b + 92 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 64 * OS1_S1 + 20);
            *(b + 64 * OS1_S1 + 57) = prefactor_y * *(b + 64 * OS1_S1 + 35) -
                                      p_over_q * *(b + 96 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 35);
            *(b + 64 * OS1_S1 + 58) =
                prefactor_z * *(b + 64 * OS1_S1 + 35) -
                p_over_q * *(b + 97 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 35);
            *(b + 64 * OS1_S1 + 59) = prefactor_y * *(b + 64 * OS1_S1 + 36) -
                                      p_over_q * *(b + 96 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 64 * OS1_S1 + 20);
            *(b + 64 * OS1_S1 + 60) = prefactor_y * *(b + 64 * OS1_S1 + 37) -
                                      p_over_q * *(b + 96 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 37);
            *(b + 64 * OS1_S1 + 61) =
                prefactor_z * *(b + 64 * OS1_S1 + 37) -
                p_over_q * *(b + 97 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 37) +
                one_over_two_q * *(b + 64 * OS1_S1 + 20);
            *(b + 64 * OS1_S1 + 62) =
                prefactor_y * *(b + 64 * OS1_S1 + 38) -
                p_over_q * *(b + 96 * OS1_S1 + 38) +
                one_over_two_q * *(b + 40 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 21);
            *(b + 64 * OS1_S1 + 63) =
                prefactor_z * *(b + 64 * OS1_S1 + 38) -
                p_over_q * *(b + 97 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 38);
            *(b + 64 * OS1_S1 + 64) = prefactor_y * *(b + 64 * OS1_S1 + 40) -
                                      p_over_q * *(b + 96 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 40);
            *(b + 64 * OS1_S1 + 65) =
                prefactor_z * *(b + 64 * OS1_S1 + 40) -
                p_over_q * *(b + 97 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 22);
            *(b + 64 * OS1_S1 + 66) =
                prefactor_x * *(b + 64 * OS1_S1 + 45) -
                p_over_q * *(b + 92 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 45) +
                one_over_two_q * *(b + 64 * OS1_S1 + 30);
            *(b + 64 * OS1_S1 + 67) =
                prefactor_z * *(b + 64 * OS1_S1 + 41) -
                p_over_q * *(b + 97 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 41);
            *(b + 64 * OS1_S1 + 68) = prefactor_y * *(b + 64 * OS1_S1 + 43) -
                                      p_over_q * *(b + 96 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 64 * OS1_S1 + 25);
            *(b + 64 * OS1_S1 + 69) = prefactor_y * *(b + 64 * OS1_S1 + 44) -
                                      p_over_q * *(b + 96 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 44);
            *(b + 64 * OS1_S1 + 70) =
                prefactor_x * *(b + 64 * OS1_S1 + 49) -
                p_over_q * *(b + 92 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 49) +
                one_over_two_q * *(b + 64 * OS1_S1 + 34);
            *(b + 64 * OS1_S1 + 71) =
                prefactor_x * *(b + 64 * OS1_S1 + 50) -
                p_over_q * *(b + 92 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 50);
            *(b + 64 * OS1_S1 + 72) =
                prefactor_z * *(b + 64 * OS1_S1 + 45) -
                p_over_q * *(b + 97 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 45);
            *(b + 64 * OS1_S1 + 73) =
                prefactor_x * *(b + 64 * OS1_S1 + 52) -
                p_over_q * *(b + 92 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 52);
            *(b + 64 * OS1_S1 + 74) =
                prefactor_x * *(b + 64 * OS1_S1 + 53) -
                p_over_q * *(b + 92 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 53);
            *(b + 64 * OS1_S1 + 75) = prefactor_y * *(b + 64 * OS1_S1 + 49) -
                                      p_over_q * *(b + 96 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 49);
            *(b + 64 * OS1_S1 + 76) =
                prefactor_x * *(b + 64 * OS1_S1 + 55) -
                p_over_q * *(b + 92 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 55);
            *(b + 64 * OS1_S1 + 77) =
                prefactor_y * *(b + 64 * OS1_S1 + 50) -
                p_over_q * *(b + 96 * OS1_S1 + 50) +
                one_over_two_q * *(b + 40 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 64 * OS1_S1 + 30);
            *(b + 64 * OS1_S1 + 78) =
                prefactor_z * *(b + 64 * OS1_S1 + 50) -
                p_over_q * *(b + 97 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 50);
            *(b + 64 * OS1_S1 + 79) =
                prefactor_z * *(b + 64 * OS1_S1 + 51) -
                p_over_q * *(b + 97 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 51) +
                one_over_two_q * *(b + 64 * OS1_S1 + 30);
            *(b + 64 * OS1_S1 + 80) =
                prefactor_y * *(b + 64 * OS1_S1 + 53) -
                p_over_q * *(b + 96 * OS1_S1 + 53) +
                one_over_two_q * *(b + 40 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 33);
            *(b + 64 * OS1_S1 + 81) = prefactor_y * *(b + 64 * OS1_S1 + 54) -
                                      p_over_q * *(b + 96 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 64 * OS1_S1 + 34);
            *(b + 64 * OS1_S1 + 82) = prefactor_y * *(b + 64 * OS1_S1 + 55) -
                                      p_over_q * *(b + 96 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 55);
            *(b + 64 * OS1_S1 + 83) =
                prefactor_z * *(b + 64 * OS1_S1 + 55) -
                p_over_q * *(b + 97 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 64 * OS1_S1 + 34);
            *(b + 65 * OS1_S1 + 56) =
                prefactor_x * *(b + 65 * OS1_S1 + 35) -
                p_over_q * *(b + 93 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 65 * OS1_S1 + 20);
            *(b + 65 * OS1_S1 + 57) = prefactor_y * *(b + 65 * OS1_S1 + 35) -
                                      p_over_q * *(b + 97 * OS1_S1 + 35);
            *(b + 65 * OS1_S1 + 58) =
                prefactor_z * *(b + 65 * OS1_S1 + 35) -
                p_over_q * *(b + 98 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 35);
            *(b + 65 * OS1_S1 + 59) = prefactor_y * *(b + 65 * OS1_S1 + 36) -
                                      p_over_q * *(b + 97 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 20);
            *(b + 65 * OS1_S1 + 60) = prefactor_y * *(b + 65 * OS1_S1 + 37) -
                                      p_over_q * *(b + 97 * OS1_S1 + 37);
            *(b + 65 * OS1_S1 + 61) =
                prefactor_z * *(b + 65 * OS1_S1 + 37) -
                p_over_q * *(b + 98 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 37) +
                one_over_two_q * *(b + 65 * OS1_S1 + 20);
            *(b + 65 * OS1_S1 + 62) =
                prefactor_y * *(b + 65 * OS1_S1 + 38) -
                p_over_q * *(b + 97 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 21);
            *(b + 65 * OS1_S1 + 63) =
                prefactor_z * *(b + 65 * OS1_S1 + 38) -
                p_over_q * *(b + 98 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 38);
            *(b + 65 * OS1_S1 + 64) = prefactor_y * *(b + 65 * OS1_S1 + 40) -
                                      p_over_q * *(b + 97 * OS1_S1 + 40);
            *(b + 65 * OS1_S1 + 65) =
                prefactor_z * *(b + 65 * OS1_S1 + 40) -
                p_over_q * *(b + 98 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 22);
            *(b + 65 * OS1_S1 + 66) =
                prefactor_x * *(b + 65 * OS1_S1 + 45) -
                p_over_q * *(b + 93 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 45) +
                one_over_two_q * *(b + 65 * OS1_S1 + 30);
            *(b + 65 * OS1_S1 + 67) =
                prefactor_z * *(b + 65 * OS1_S1 + 41) -
                p_over_q * *(b + 98 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 41);
            *(b + 65 * OS1_S1 + 68) = prefactor_y * *(b + 65 * OS1_S1 + 43) -
                                      p_over_q * *(b + 97 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 25);
            *(b + 65 * OS1_S1 + 69) = prefactor_y * *(b + 65 * OS1_S1 + 44) -
                                      p_over_q * *(b + 97 * OS1_S1 + 44);
            *(b + 65 * OS1_S1 + 70) =
                prefactor_x * *(b + 65 * OS1_S1 + 49) -
                p_over_q * *(b + 93 * OS1_S1 + 49) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 49) +
                one_over_two_q * *(b + 65 * OS1_S1 + 34);
            *(b + 65 * OS1_S1 + 71) =
                prefactor_x * *(b + 65 * OS1_S1 + 50) -
                p_over_q * *(b + 93 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 50);
            *(b + 65 * OS1_S1 + 72) =
                prefactor_z * *(b + 65 * OS1_S1 + 45) -
                p_over_q * *(b + 98 * OS1_S1 + 45) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 45);
            *(b + 65 * OS1_S1 + 73) =
                prefactor_x * *(b + 65 * OS1_S1 + 52) -
                p_over_q * *(b + 93 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 52);
            *(b + 65 * OS1_S1 + 74) =
                prefactor_x * *(b + 65 * OS1_S1 + 53) -
                p_over_q * *(b + 93 * OS1_S1 + 53) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 53);
            *(b + 65 * OS1_S1 + 75) = prefactor_y * *(b + 65 * OS1_S1 + 49) -
                                      p_over_q * *(b + 97 * OS1_S1 + 49);
            *(b + 65 * OS1_S1 + 76) =
                prefactor_x * *(b + 65 * OS1_S1 + 55) -
                p_over_q * *(b + 93 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 55);
            *(b + 65 * OS1_S1 + 77) =
                prefactor_y * *(b + 65 * OS1_S1 + 50) -
                p_over_q * *(b + 97 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 65 * OS1_S1 + 30);
            *(b + 65 * OS1_S1 + 78) =
                prefactor_z * *(b + 65 * OS1_S1 + 50) -
                p_over_q * *(b + 98 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 50);
            *(b + 65 * OS1_S1 + 79) =
                prefactor_z * *(b + 65 * OS1_S1 + 51) -
                p_over_q * *(b + 98 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 51) +
                one_over_two_q * *(b + 65 * OS1_S1 + 30);
            *(b + 65 * OS1_S1 + 80) =
                prefactor_y * *(b + 65 * OS1_S1 + 53) -
                p_over_q * *(b + 97 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 33);
            *(b + 65 * OS1_S1 + 81) = prefactor_y * *(b + 65 * OS1_S1 + 54) -
                                      p_over_q * *(b + 97 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 34);
            *(b + 65 * OS1_S1 + 82) = prefactor_y * *(b + 65 * OS1_S1 + 55) -
                                      p_over_q * *(b + 97 * OS1_S1 + 55);
            *(b + 65 * OS1_S1 + 83) =
                prefactor_z * *(b + 65 * OS1_S1 + 55) -
                p_over_q * *(b + 98 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 65 * OS1_S1 + 34);
            *(b + 66 * OS1_S1 + 56) =
                prefactor_x * *(b + 66 * OS1_S1 + 35) -
                p_over_q * *(b + 94 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 20);
            *(b + 66 * OS1_S1 + 57) =
                prefactor_y * *(b + 66 * OS1_S1 + 35) -
                p_over_q * *(b + 99 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 35);
            *(b + 66 * OS1_S1 + 58) = prefactor_z * *(b + 66 * OS1_S1 + 35) -
                                      p_over_q * *(b + 100 * OS1_S1 + 35);
            *(b + 66 * OS1_S1 + 59) =
                prefactor_y * *(b + 66 * OS1_S1 + 36) -
                p_over_q * *(b + 99 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 36) +
                one_over_two_q * *(b + 66 * OS1_S1 + 20);
            *(b + 66 * OS1_S1 + 60) = prefactor_z * *(b + 66 * OS1_S1 + 36) -
                                      p_over_q * *(b + 100 * OS1_S1 + 36);
            *(b + 66 * OS1_S1 + 61) = prefactor_z * *(b + 66 * OS1_S1 + 37) -
                                      p_over_q * *(b + 100 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 66 * OS1_S1 + 20);
            *(b + 66 * OS1_S1 + 62) =
                prefactor_x * *(b + 66 * OS1_S1 + 41) -
                p_over_q * *(b + 94 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 26);
            *(b + 66 * OS1_S1 + 63) = prefactor_z * *(b + 66 * OS1_S1 + 38) -
                                      p_over_q * *(b + 100 * OS1_S1 + 38);
            *(b + 66 * OS1_S1 + 64) =
                prefactor_y * *(b + 66 * OS1_S1 + 40) -
                p_over_q * *(b + 99 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 40);
            *(b + 66 * OS1_S1 + 65) =
                prefactor_z * *(b + 66 * OS1_S1 + 40) -
                p_over_q * *(b + 100 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 22);
            *(b + 66 * OS1_S1 + 66) =
                prefactor_x * *(b + 66 * OS1_S1 + 45) -
                p_over_q * *(b + 94 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 45) +
                one_over_two_q * *(b + 66 * OS1_S1 + 30);
            *(b + 66 * OS1_S1 + 67) = prefactor_z * *(b + 66 * OS1_S1 + 41) -
                                      p_over_q * *(b + 100 * OS1_S1 + 41);
            *(b + 66 * OS1_S1 + 68) = prefactor_z * *(b + 66 * OS1_S1 + 42) -
                                      p_over_q * *(b + 100 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 66 * OS1_S1 + 23);
            *(b + 66 * OS1_S1 + 69) =
                prefactor_y * *(b + 66 * OS1_S1 + 44) -
                p_over_q * *(b + 99 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 44);
            *(b + 66 * OS1_S1 + 70) =
                prefactor_x * *(b + 66 * OS1_S1 + 49) -
                p_over_q * *(b + 94 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 49) +
                one_over_two_q * *(b + 66 * OS1_S1 + 34);
            *(b + 66 * OS1_S1 + 71) =
                prefactor_x * *(b + 66 * OS1_S1 + 50) -
                p_over_q * *(b + 94 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 50);
            *(b + 66 * OS1_S1 + 72) = prefactor_z * *(b + 66 * OS1_S1 + 45) -
                                      p_over_q * *(b + 100 * OS1_S1 + 45);
            *(b + 66 * OS1_S1 + 73) =
                prefactor_x * *(b + 66 * OS1_S1 + 52) -
                p_over_q * *(b + 94 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 52);
            *(b + 66 * OS1_S1 + 74) =
                prefactor_x * *(b + 66 * OS1_S1 + 53) -
                p_over_q * *(b + 94 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 53);
            *(b + 66 * OS1_S1 + 75) =
                prefactor_x * *(b + 66 * OS1_S1 + 54) -
                p_over_q * *(b + 94 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 54);
            *(b + 66 * OS1_S1 + 76) =
                prefactor_x * *(b + 66 * OS1_S1 + 55) -
                p_over_q * *(b + 94 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 55);
            *(b + 66 * OS1_S1 + 77) =
                prefactor_y * *(b + 66 * OS1_S1 + 50) -
                p_over_q * *(b + 99 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 30);
            *(b + 66 * OS1_S1 + 78) = prefactor_z * *(b + 66 * OS1_S1 + 50) -
                                      p_over_q * *(b + 100 * OS1_S1 + 50);
            *(b + 66 * OS1_S1 + 79) = prefactor_z * *(b + 66 * OS1_S1 + 51) -
                                      p_over_q * *(b + 100 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 66 * OS1_S1 + 30);
            *(b + 66 * OS1_S1 + 80) =
                prefactor_z * *(b + 66 * OS1_S1 + 52) -
                p_over_q * *(b + 100 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 31);
            *(b + 66 * OS1_S1 + 81) =
                prefactor_y * *(b + 66 * OS1_S1 + 54) -
                p_over_q * *(b + 99 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 54) +
                one_over_two_q * *(b + 66 * OS1_S1 + 34);
            *(b + 66 * OS1_S1 + 82) =
                prefactor_y * *(b + 66 * OS1_S1 + 55) -
                p_over_q * *(b + 99 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 55);
            *(b + 66 * OS1_S1 + 83) =
                prefactor_z * *(b + 66 * OS1_S1 + 55) -
                p_over_q * *(b + 100 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 34);
            *(b + 67 * OS1_S1 + 56) =
                prefactor_x * *(b + 67 * OS1_S1 + 35) -
                p_over_q * *(b + 95 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 67 * OS1_S1 + 20);
            *(b + 67 * OS1_S1 + 57) =
                prefactor_y * *(b + 67 * OS1_S1 + 35) -
                p_over_q * *(b + 100 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 35);
            *(b + 67 * OS1_S1 + 58) = prefactor_z * *(b + 67 * OS1_S1 + 35) -
                                      p_over_q * *(b + 101 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 35);
            *(b + 67 * OS1_S1 + 59) =
                prefactor_y * *(b + 67 * OS1_S1 + 36) -
                p_over_q * *(b + 100 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 36) +
                one_over_two_q * *(b + 67 * OS1_S1 + 20);
            *(b + 67 * OS1_S1 + 60) = prefactor_z * *(b + 67 * OS1_S1 + 36) -
                                      p_over_q * *(b + 101 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 36);
            *(b + 67 * OS1_S1 + 61) = prefactor_z * *(b + 67 * OS1_S1 + 37) -
                                      p_over_q * *(b + 101 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 67 * OS1_S1 + 20);
            *(b + 67 * OS1_S1 + 62) =
                prefactor_x * *(b + 67 * OS1_S1 + 41) -
                p_over_q * *(b + 95 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 26);
            *(b + 67 * OS1_S1 + 63) = prefactor_z * *(b + 67 * OS1_S1 + 38) -
                                      p_over_q * *(b + 101 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 38);
            *(b + 67 * OS1_S1 + 64) =
                prefactor_y * *(b + 67 * OS1_S1 + 40) -
                p_over_q * *(b + 100 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 40);
            *(b + 67 * OS1_S1 + 65) =
                prefactor_z * *(b + 67 * OS1_S1 + 40) -
                p_over_q * *(b + 101 * OS1_S1 + 40) +
                one_over_two_q * *(b + 41 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 22);
            *(b + 67 * OS1_S1 + 66) =
                prefactor_x * *(b + 67 * OS1_S1 + 45) -
                p_over_q * *(b + 95 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 45) +
                one_over_two_q * *(b + 67 * OS1_S1 + 30);
            *(b + 67 * OS1_S1 + 67) = prefactor_z * *(b + 67 * OS1_S1 + 41) -
                                      p_over_q * *(b + 101 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 41);
            *(b + 67 * OS1_S1 + 68) = prefactor_z * *(b + 67 * OS1_S1 + 42) -
                                      p_over_q * *(b + 101 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 67 * OS1_S1 + 23);
            *(b + 67 * OS1_S1 + 69) =
                prefactor_y * *(b + 67 * OS1_S1 + 44) -
                p_over_q * *(b + 100 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 44);
            *(b + 67 * OS1_S1 + 70) =
                prefactor_x * *(b + 67 * OS1_S1 + 49) -
                p_over_q * *(b + 95 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 49) +
                one_over_two_q * *(b + 67 * OS1_S1 + 34);
            *(b + 67 * OS1_S1 + 71) =
                prefactor_x * *(b + 67 * OS1_S1 + 50) -
                p_over_q * *(b + 95 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 50);
            *(b + 67 * OS1_S1 + 72) = prefactor_z * *(b + 67 * OS1_S1 + 45) -
                                      p_over_q * *(b + 101 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 45);
            *(b + 67 * OS1_S1 + 73) =
                prefactor_x * *(b + 67 * OS1_S1 + 52) -
                p_over_q * *(b + 95 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 52);
            *(b + 67 * OS1_S1 + 74) =
                prefactor_x * *(b + 67 * OS1_S1 + 53) -
                p_over_q * *(b + 95 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 53);
            *(b + 67 * OS1_S1 + 75) =
                prefactor_x * *(b + 67 * OS1_S1 + 54) -
                p_over_q * *(b + 95 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 54);
            *(b + 67 * OS1_S1 + 76) =
                prefactor_x * *(b + 67 * OS1_S1 + 55) -
                p_over_q * *(b + 95 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 55);
            *(b + 67 * OS1_S1 + 77) =
                prefactor_y * *(b + 67 * OS1_S1 + 50) -
                p_over_q * *(b + 100 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 67 * OS1_S1 + 30);
            *(b + 67 * OS1_S1 + 78) = prefactor_z * *(b + 67 * OS1_S1 + 50) -
                                      p_over_q * *(b + 101 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 50);
            *(b + 67 * OS1_S1 + 79) = prefactor_z * *(b + 67 * OS1_S1 + 51) -
                                      p_over_q * *(b + 101 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 67 * OS1_S1 + 30);
            *(b + 67 * OS1_S1 + 80) =
                prefactor_z * *(b + 67 * OS1_S1 + 52) -
                p_over_q * *(b + 101 * OS1_S1 + 52) +
                one_over_two_q * *(b + 41 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 31);
            *(b + 67 * OS1_S1 + 81) =
                prefactor_y * *(b + 67 * OS1_S1 + 54) -
                p_over_q * *(b + 100 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 54) +
                one_over_two_q * *(b + 67 * OS1_S1 + 34);
            *(b + 67 * OS1_S1 + 82) =
                prefactor_y * *(b + 67 * OS1_S1 + 55) -
                p_over_q * *(b + 100 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 55);
            *(b + 67 * OS1_S1 + 83) =
                prefactor_z * *(b + 67 * OS1_S1 + 55) -
                p_over_q * *(b + 101 * OS1_S1 + 55) +
                one_over_two_q * *(b + 41 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 67 * OS1_S1 + 34);
            *(b + 68 * OS1_S1 + 56) =
                prefactor_x * *(b + 68 * OS1_S1 + 35) -
                p_over_q * *(b + 96 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 68 * OS1_S1 + 20);
            *(b + 68 * OS1_S1 + 57) =
                prefactor_y * *(b + 68 * OS1_S1 + 35) -
                p_over_q * *(b + 101 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 35);
            *(b + 68 * OS1_S1 + 58) =
                prefactor_z * *(b + 68 * OS1_S1 + 35) -
                p_over_q * *(b + 102 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 35);
            *(b + 68 * OS1_S1 + 59) =
                prefactor_y * *(b + 68 * OS1_S1 + 36) -
                p_over_q * *(b + 101 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 36) +
                one_over_two_q * *(b + 68 * OS1_S1 + 20);
            *(b + 68 * OS1_S1 + 60) =
                prefactor_z * *(b + 68 * OS1_S1 + 36) -
                p_over_q * *(b + 102 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 36);
            *(b + 68 * OS1_S1 + 61) =
                prefactor_z * *(b + 68 * OS1_S1 + 37) -
                p_over_q * *(b + 102 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 37) +
                one_over_two_q * *(b + 68 * OS1_S1 + 20);
            *(b + 68 * OS1_S1 + 62) =
                prefactor_y * *(b + 68 * OS1_S1 + 38) -
                p_over_q * *(b + 101 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 21);
            *(b + 68 * OS1_S1 + 63) =
                prefactor_z * *(b + 68 * OS1_S1 + 38) -
                p_over_q * *(b + 102 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 38);
            *(b + 68 * OS1_S1 + 64) =
                prefactor_y * *(b + 68 * OS1_S1 + 40) -
                p_over_q * *(b + 101 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 40);
            *(b + 68 * OS1_S1 + 65) =
                prefactor_z * *(b + 68 * OS1_S1 + 40) -
                p_over_q * *(b + 102 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 22);
            *(b + 68 * OS1_S1 + 66) =
                prefactor_x * *(b + 68 * OS1_S1 + 45) -
                p_over_q * *(b + 96 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 45) +
                one_over_two_q * *(b + 68 * OS1_S1 + 30);
            *(b + 68 * OS1_S1 + 67) =
                prefactor_z * *(b + 68 * OS1_S1 + 41) -
                p_over_q * *(b + 102 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 41);
            *(b + 68 * OS1_S1 + 68) =
                prefactor_z * *(b + 68 * OS1_S1 + 42) -
                p_over_q * *(b + 102 * OS1_S1 + 42) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 42) +
                one_over_two_q * *(b + 68 * OS1_S1 + 23);
            *(b + 68 * OS1_S1 + 69) =
                prefactor_y * *(b + 68 * OS1_S1 + 44) -
                p_over_q * *(b + 101 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 44);
            *(b + 68 * OS1_S1 + 70) =
                prefactor_x * *(b + 68 * OS1_S1 + 49) -
                p_over_q * *(b + 96 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 49) +
                one_over_two_q * *(b + 68 * OS1_S1 + 34);
            *(b + 68 * OS1_S1 + 71) =
                prefactor_x * *(b + 68 * OS1_S1 + 50) -
                p_over_q * *(b + 96 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 50);
            *(b + 68 * OS1_S1 + 72) =
                prefactor_z * *(b + 68 * OS1_S1 + 45) -
                p_over_q * *(b + 102 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 45);
            *(b + 68 * OS1_S1 + 73) =
                prefactor_x * *(b + 68 * OS1_S1 + 52) -
                p_over_q * *(b + 96 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 52);
            *(b + 68 * OS1_S1 + 74) =
                prefactor_x * *(b + 68 * OS1_S1 + 53) -
                p_over_q * *(b + 96 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 53);
            *(b + 68 * OS1_S1 + 75) =
                prefactor_y * *(b + 68 * OS1_S1 + 49) -
                p_over_q * *(b + 101 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 49);
            *(b + 68 * OS1_S1 + 76) =
                prefactor_x * *(b + 68 * OS1_S1 + 55) -
                p_over_q * *(b + 96 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 55);
            *(b + 68 * OS1_S1 + 77) =
                prefactor_y * *(b + 68 * OS1_S1 + 50) -
                p_over_q * *(b + 101 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 68 * OS1_S1 + 30);
            *(b + 68 * OS1_S1 + 78) =
                prefactor_z * *(b + 68 * OS1_S1 + 50) -
                p_over_q * *(b + 102 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 50);
            *(b + 68 * OS1_S1 + 79) =
                prefactor_z * *(b + 68 * OS1_S1 + 51) -
                p_over_q * *(b + 102 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 51) +
                one_over_two_q * *(b + 68 * OS1_S1 + 30);
            *(b + 68 * OS1_S1 + 80) =
                prefactor_z * *(b + 68 * OS1_S1 + 52) -
                p_over_q * *(b + 102 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 31);
            *(b + 68 * OS1_S1 + 81) =
                prefactor_y * *(b + 68 * OS1_S1 + 54) -
                p_over_q * *(b + 101 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 54) +
                one_over_two_q * *(b + 68 * OS1_S1 + 34);
            *(b + 68 * OS1_S1 + 82) =
                prefactor_y * *(b + 68 * OS1_S1 + 55) -
                p_over_q * *(b + 101 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 55);
            *(b + 68 * OS1_S1 + 83) =
                prefactor_z * *(b + 68 * OS1_S1 + 55) -
                p_over_q * *(b + 102 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 68 * OS1_S1 + 34);
            *(b + 69 * OS1_S1 + 56) =
                prefactor_x * *(b + 69 * OS1_S1 + 35) -
                p_over_q * *(b + 97 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 69 * OS1_S1 + 20);
            *(b + 69 * OS1_S1 + 57) = prefactor_y * *(b + 69 * OS1_S1 + 35) -
                                      p_over_q * *(b + 102 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 35);
            *(b + 69 * OS1_S1 + 58) =
                prefactor_z * *(b + 69 * OS1_S1 + 35) -
                p_over_q * *(b + 103 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 35);
            *(b + 69 * OS1_S1 + 59) = prefactor_y * *(b + 69 * OS1_S1 + 36) -
                                      p_over_q * *(b + 102 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 69 * OS1_S1 + 20);
            *(b + 69 * OS1_S1 + 60) = prefactor_y * *(b + 69 * OS1_S1 + 37) -
                                      p_over_q * *(b + 102 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 37);
            *(b + 69 * OS1_S1 + 61) =
                prefactor_z * *(b + 69 * OS1_S1 + 37) -
                p_over_q * *(b + 103 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 37) +
                one_over_two_q * *(b + 69 * OS1_S1 + 20);
            *(b + 69 * OS1_S1 + 62) =
                prefactor_y * *(b + 69 * OS1_S1 + 38) -
                p_over_q * *(b + 102 * OS1_S1 + 38) +
                one_over_two_q * *(b + 44 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 21);
            *(b + 69 * OS1_S1 + 63) =
                prefactor_z * *(b + 69 * OS1_S1 + 38) -
                p_over_q * *(b + 103 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 38);
            *(b + 69 * OS1_S1 + 64) = prefactor_y * *(b + 69 * OS1_S1 + 40) -
                                      p_over_q * *(b + 102 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 40);
            *(b + 69 * OS1_S1 + 65) =
                prefactor_x * *(b + 69 * OS1_S1 + 44) -
                p_over_q * *(b + 97 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 29);
            *(b + 69 * OS1_S1 + 66) =
                prefactor_x * *(b + 69 * OS1_S1 + 45) -
                p_over_q * *(b + 97 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 45) +
                one_over_two_q * *(b + 69 * OS1_S1 + 30);
            *(b + 69 * OS1_S1 + 67) =
                prefactor_z * *(b + 69 * OS1_S1 + 41) -
                p_over_q * *(b + 103 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 41);
            *(b + 69 * OS1_S1 + 68) = prefactor_y * *(b + 69 * OS1_S1 + 43) -
                                      p_over_q * *(b + 102 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 69 * OS1_S1 + 25);
            *(b + 69 * OS1_S1 + 69) = prefactor_y * *(b + 69 * OS1_S1 + 44) -
                                      p_over_q * *(b + 102 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 44);
            *(b + 69 * OS1_S1 + 70) =
                prefactor_x * *(b + 69 * OS1_S1 + 49) -
                p_over_q * *(b + 97 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 49) +
                one_over_two_q * *(b + 69 * OS1_S1 + 34);
            *(b + 69 * OS1_S1 + 71) =
                prefactor_x * *(b + 69 * OS1_S1 + 50) -
                p_over_q * *(b + 97 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 50);
            *(b + 69 * OS1_S1 + 72) =
                prefactor_x * *(b + 69 * OS1_S1 + 51) -
                p_over_q * *(b + 97 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 51);
            *(b + 69 * OS1_S1 + 73) =
                prefactor_x * *(b + 69 * OS1_S1 + 52) -
                p_over_q * *(b + 97 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 52);
            *(b + 69 * OS1_S1 + 74) =
                prefactor_x * *(b + 69 * OS1_S1 + 53) -
                p_over_q * *(b + 97 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 53);
            *(b + 69 * OS1_S1 + 75) = prefactor_y * *(b + 69 * OS1_S1 + 49) -
                                      p_over_q * *(b + 102 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 49);
            *(b + 69 * OS1_S1 + 76) =
                prefactor_x * *(b + 69 * OS1_S1 + 55) -
                p_over_q * *(b + 97 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 55);
            *(b + 69 * OS1_S1 + 77) =
                prefactor_y * *(b + 69 * OS1_S1 + 50) -
                p_over_q * *(b + 102 * OS1_S1 + 50) +
                one_over_two_q * *(b + 44 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 69 * OS1_S1 + 30);
            *(b + 69 * OS1_S1 + 78) =
                prefactor_z * *(b + 69 * OS1_S1 + 50) -
                p_over_q * *(b + 103 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 50);
            *(b + 69 * OS1_S1 + 79) =
                prefactor_z * *(b + 69 * OS1_S1 + 51) -
                p_over_q * *(b + 103 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 51) +
                one_over_two_q * *(b + 69 * OS1_S1 + 30);
            *(b + 69 * OS1_S1 + 80) =
                prefactor_y * *(b + 69 * OS1_S1 + 53) -
                p_over_q * *(b + 102 * OS1_S1 + 53) +
                one_over_two_q * *(b + 44 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 33);
            *(b + 69 * OS1_S1 + 81) = prefactor_y * *(b + 69 * OS1_S1 + 54) -
                                      p_over_q * *(b + 102 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 69 * OS1_S1 + 34);
            *(b + 69 * OS1_S1 + 82) = prefactor_y * *(b + 69 * OS1_S1 + 55) -
                                      p_over_q * *(b + 102 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 55);
            *(b + 69 * OS1_S1 + 83) =
                prefactor_z * *(b + 69 * OS1_S1 + 55) -
                p_over_q * *(b + 103 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 69 * OS1_S1 + 34);
            *(b + 70 * OS1_S1 + 56) =
                prefactor_x * *(b + 70 * OS1_S1 + 35) -
                p_over_q * *(b + 98 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 20);
            *(b + 70 * OS1_S1 + 57) = prefactor_y * *(b + 70 * OS1_S1 + 35) -
                                      p_over_q * *(b + 103 * OS1_S1 + 35);
            *(b + 70 * OS1_S1 + 58) =
                prefactor_z * *(b + 70 * OS1_S1 + 35) -
                p_over_q * *(b + 104 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 35);
            *(b + 70 * OS1_S1 + 59) = prefactor_y * *(b + 70 * OS1_S1 + 36) -
                                      p_over_q * *(b + 103 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 70 * OS1_S1 + 20);
            *(b + 70 * OS1_S1 + 60) = prefactor_y * *(b + 70 * OS1_S1 + 37) -
                                      p_over_q * *(b + 103 * OS1_S1 + 37);
            *(b + 70 * OS1_S1 + 61) =
                prefactor_z * *(b + 70 * OS1_S1 + 37) -
                p_over_q * *(b + 104 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 37) +
                one_over_two_q * *(b + 70 * OS1_S1 + 20);
            *(b + 70 * OS1_S1 + 62) =
                prefactor_y * *(b + 70 * OS1_S1 + 38) -
                p_over_q * *(b + 103 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 21);
            *(b + 70 * OS1_S1 + 63) =
                prefactor_z * *(b + 70 * OS1_S1 + 38) -
                p_over_q * *(b + 104 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 38);
            *(b + 70 * OS1_S1 + 64) = prefactor_y * *(b + 70 * OS1_S1 + 40) -
                                      p_over_q * *(b + 103 * OS1_S1 + 40);
            *(b + 70 * OS1_S1 + 65) =
                prefactor_x * *(b + 70 * OS1_S1 + 44) -
                p_over_q * *(b + 98 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 29);
            *(b + 70 * OS1_S1 + 66) =
                prefactor_x * *(b + 70 * OS1_S1 + 45) -
                p_over_q * *(b + 98 * OS1_S1 + 45) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 45) +
                one_over_two_q * *(b + 70 * OS1_S1 + 30);
            *(b + 70 * OS1_S1 + 67) =
                prefactor_z * *(b + 70 * OS1_S1 + 41) -
                p_over_q * *(b + 104 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 41);
            *(b + 70 * OS1_S1 + 68) = prefactor_y * *(b + 70 * OS1_S1 + 43) -
                                      p_over_q * *(b + 103 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 70 * OS1_S1 + 25);
            *(b + 70 * OS1_S1 + 69) = prefactor_y * *(b + 70 * OS1_S1 + 44) -
                                      p_over_q * *(b + 103 * OS1_S1 + 44);
            *(b + 70 * OS1_S1 + 70) =
                prefactor_x * *(b + 70 * OS1_S1 + 49) -
                p_over_q * *(b + 98 * OS1_S1 + 49) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 49) +
                one_over_two_q * *(b + 70 * OS1_S1 + 34);
            *(b + 70 * OS1_S1 + 71) =
                prefactor_x * *(b + 70 * OS1_S1 + 50) -
                p_over_q * *(b + 98 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 50);
            *(b + 70 * OS1_S1 + 72) =
                prefactor_x * *(b + 70 * OS1_S1 + 51) -
                p_over_q * *(b + 98 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 51);
            *(b + 70 * OS1_S1 + 73) =
                prefactor_x * *(b + 70 * OS1_S1 + 52) -
                p_over_q * *(b + 98 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 52);
            *(b + 70 * OS1_S1 + 74) =
                prefactor_x * *(b + 70 * OS1_S1 + 53) -
                p_over_q * *(b + 98 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 53);
            *(b + 70 * OS1_S1 + 75) = prefactor_y * *(b + 70 * OS1_S1 + 49) -
                                      p_over_q * *(b + 103 * OS1_S1 + 49);
            *(b + 70 * OS1_S1 + 76) =
                prefactor_x * *(b + 70 * OS1_S1 + 55) -
                p_over_q * *(b + 98 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 55);
            *(b + 70 * OS1_S1 + 77) =
                prefactor_y * *(b + 70 * OS1_S1 + 50) -
                p_over_q * *(b + 103 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 30);
            *(b + 70 * OS1_S1 + 78) =
                prefactor_z * *(b + 70 * OS1_S1 + 50) -
                p_over_q * *(b + 104 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 50);
            *(b + 70 * OS1_S1 + 79) =
                prefactor_z * *(b + 70 * OS1_S1 + 51) -
                p_over_q * *(b + 104 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 51) +
                one_over_two_q * *(b + 70 * OS1_S1 + 30);
            *(b + 70 * OS1_S1 + 80) =
                prefactor_y * *(b + 70 * OS1_S1 + 53) -
                p_over_q * *(b + 103 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 33);
            *(b + 70 * OS1_S1 + 81) = prefactor_y * *(b + 70 * OS1_S1 + 54) -
                                      p_over_q * *(b + 103 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 70 * OS1_S1 + 34);
            *(b + 70 * OS1_S1 + 82) = prefactor_y * *(b + 70 * OS1_S1 + 55) -
                                      p_over_q * *(b + 103 * OS1_S1 + 55);
            *(b + 70 * OS1_S1 + 83) =
                prefactor_z * *(b + 70 * OS1_S1 + 55) -
                p_over_q * *(b + 104 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 34);
            *(b + 71 * OS1_S1 + 56) =
                prefactor_x * *(b + 71 * OS1_S1 + 35) -
                p_over_q * *(b + 99 * OS1_S1 + 35) +
                one_over_two_q * *(b + 50 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 71 * OS1_S1 + 20);
            *(b + 71 * OS1_S1 + 57) =
                prefactor_y * *(b + 71 * OS1_S1 + 35) -
                p_over_q * *(b + 105 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 35);
            *(b + 71 * OS1_S1 + 58) = prefactor_z * *(b + 71 * OS1_S1 + 35) -
                                      p_over_q * *(b + 106 * OS1_S1 + 35);
            *(b + 71 * OS1_S1 + 59) =
                prefactor_y * *(b + 71 * OS1_S1 + 36) -
                p_over_q * *(b + 105 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 36) +
                one_over_two_q * *(b + 71 * OS1_S1 + 20);
            *(b + 71 * OS1_S1 + 60) = prefactor_z * *(b + 71 * OS1_S1 + 36) -
                                      p_over_q * *(b + 106 * OS1_S1 + 36);
            *(b + 71 * OS1_S1 + 61) = prefactor_z * *(b + 71 * OS1_S1 + 37) -
                                      p_over_q * *(b + 106 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 20);
            *(b + 71 * OS1_S1 + 62) =
                prefactor_x * *(b + 71 * OS1_S1 + 41) -
                p_over_q * *(b + 99 * OS1_S1 + 41) +
                one_over_two_q * *(b + 50 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 26);
            *(b + 71 * OS1_S1 + 63) = prefactor_z * *(b + 71 * OS1_S1 + 38) -
                                      p_over_q * *(b + 106 * OS1_S1 + 38);
            *(b + 71 * OS1_S1 + 64) =
                prefactor_y * *(b + 71 * OS1_S1 + 40) -
                p_over_q * *(b + 105 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 40);
            *(b + 71 * OS1_S1 + 65) =
                prefactor_z * *(b + 71 * OS1_S1 + 40) -
                p_over_q * *(b + 106 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 22);
            *(b + 71 * OS1_S1 + 66) = prefactor_x * *(b + 71 * OS1_S1 + 45) -
                                      p_over_q * *(b + 99 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 30);
            *(b + 71 * OS1_S1 + 67) = prefactor_z * *(b + 71 * OS1_S1 + 41) -
                                      p_over_q * *(b + 106 * OS1_S1 + 41);
            *(b + 71 * OS1_S1 + 68) = prefactor_z * *(b + 71 * OS1_S1 + 42) -
                                      p_over_q * *(b + 106 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 23);
            *(b + 71 * OS1_S1 + 69) =
                prefactor_y * *(b + 71 * OS1_S1 + 44) -
                p_over_q * *(b + 105 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 44);
            *(b + 71 * OS1_S1 + 70) = prefactor_x * *(b + 71 * OS1_S1 + 49) -
                                      p_over_q * *(b + 99 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 34);
            *(b + 71 * OS1_S1 + 71) = prefactor_x * *(b + 71 * OS1_S1 + 50) -
                                      p_over_q * *(b + 99 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 50);
            *(b + 71 * OS1_S1 + 72) = prefactor_z * *(b + 71 * OS1_S1 + 45) -
                                      p_over_q * *(b + 106 * OS1_S1 + 45);
            *(b + 71 * OS1_S1 + 73) = prefactor_x * *(b + 71 * OS1_S1 + 52) -
                                      p_over_q * *(b + 99 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 52);
            *(b + 71 * OS1_S1 + 74) = prefactor_x * *(b + 71 * OS1_S1 + 53) -
                                      p_over_q * *(b + 99 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 53);
            *(b + 71 * OS1_S1 + 75) = prefactor_x * *(b + 71 * OS1_S1 + 54) -
                                      p_over_q * *(b + 99 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 54);
            *(b + 71 * OS1_S1 + 76) = prefactor_x * *(b + 71 * OS1_S1 + 55) -
                                      p_over_q * *(b + 99 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 55);
            *(b + 71 * OS1_S1 + 77) =
                prefactor_y * *(b + 71 * OS1_S1 + 50) -
                p_over_q * *(b + 105 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 71 * OS1_S1 + 30);
            *(b + 71 * OS1_S1 + 78) = prefactor_z * *(b + 71 * OS1_S1 + 50) -
                                      p_over_q * *(b + 106 * OS1_S1 + 50);
            *(b + 71 * OS1_S1 + 79) = prefactor_z * *(b + 71 * OS1_S1 + 51) -
                                      p_over_q * *(b + 106 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 30);
            *(b + 71 * OS1_S1 + 80) =
                prefactor_z * *(b + 71 * OS1_S1 + 52) -
                p_over_q * *(b + 106 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 31);
            *(b + 71 * OS1_S1 + 81) =
                prefactor_y * *(b + 71 * OS1_S1 + 54) -
                p_over_q * *(b + 105 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 54) +
                one_over_two_q * *(b + 71 * OS1_S1 + 34);
            *(b + 71 * OS1_S1 + 82) =
                prefactor_y * *(b + 71 * OS1_S1 + 55) -
                p_over_q * *(b + 105 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 55);
            *(b + 71 * OS1_S1 + 83) =
                prefactor_z * *(b + 71 * OS1_S1 + 55) -
                p_over_q * *(b + 106 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 71 * OS1_S1 + 34);
            *(b + 72 * OS1_S1 + 56) =
                prefactor_x * *(b + 72 * OS1_S1 + 35) -
                p_over_q * *(b + 100 * OS1_S1 + 35) +
                one_over_two_q * *(b + 51 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 20);
            *(b + 72 * OS1_S1 + 57) =
                prefactor_y * *(b + 72 * OS1_S1 + 35) -
                p_over_q * *(b + 106 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 35);
            *(b + 72 * OS1_S1 + 58) = prefactor_z * *(b + 72 * OS1_S1 + 35) -
                                      p_over_q * *(b + 107 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 35);
            *(b + 72 * OS1_S1 + 59) =
                prefactor_y * *(b + 72 * OS1_S1 + 36) -
                p_over_q * *(b + 106 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 36) +
                one_over_two_q * *(b + 72 * OS1_S1 + 20);
            *(b + 72 * OS1_S1 + 60) = prefactor_z * *(b + 72 * OS1_S1 + 36) -
                                      p_over_q * *(b + 107 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 36);
            *(b + 72 * OS1_S1 + 61) = prefactor_z * *(b + 72 * OS1_S1 + 37) -
                                      p_over_q * *(b + 107 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 20);
            *(b + 72 * OS1_S1 + 62) =
                prefactor_x * *(b + 72 * OS1_S1 + 41) -
                p_over_q * *(b + 100 * OS1_S1 + 41) +
                one_over_two_q * *(b + 51 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 26);
            *(b + 72 * OS1_S1 + 63) = prefactor_z * *(b + 72 * OS1_S1 + 38) -
                                      p_over_q * *(b + 107 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 38);
            *(b + 72 * OS1_S1 + 64) =
                prefactor_y * *(b + 72 * OS1_S1 + 40) -
                p_over_q * *(b + 106 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 40);
            *(b + 72 * OS1_S1 + 65) =
                prefactor_z * *(b + 72 * OS1_S1 + 40) -
                p_over_q * *(b + 107 * OS1_S1 + 40) +
                one_over_two_q * *(b + 45 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 22);
            *(b + 72 * OS1_S1 + 66) = prefactor_x * *(b + 72 * OS1_S1 + 45) -
                                      p_over_q * *(b + 100 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 30);
            *(b + 72 * OS1_S1 + 67) = prefactor_z * *(b + 72 * OS1_S1 + 41) -
                                      p_over_q * *(b + 107 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 41);
            *(b + 72 * OS1_S1 + 68) = prefactor_z * *(b + 72 * OS1_S1 + 42) -
                                      p_over_q * *(b + 107 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 23);
            *(b + 72 * OS1_S1 + 69) =
                prefactor_y * *(b + 72 * OS1_S1 + 44) -
                p_over_q * *(b + 106 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 44);
            *(b + 72 * OS1_S1 + 70) = prefactor_x * *(b + 72 * OS1_S1 + 49) -
                                      p_over_q * *(b + 100 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 34);
            *(b + 72 * OS1_S1 + 71) = prefactor_x * *(b + 72 * OS1_S1 + 50) -
                                      p_over_q * *(b + 100 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 50);
            *(b + 72 * OS1_S1 + 72) = prefactor_z * *(b + 72 * OS1_S1 + 45) -
                                      p_over_q * *(b + 107 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 45);
            *(b + 72 * OS1_S1 + 73) = prefactor_x * *(b + 72 * OS1_S1 + 52) -
                                      p_over_q * *(b + 100 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 52);
            *(b + 72 * OS1_S1 + 74) = prefactor_x * *(b + 72 * OS1_S1 + 53) -
                                      p_over_q * *(b + 100 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 53);
            *(b + 72 * OS1_S1 + 75) = prefactor_x * *(b + 72 * OS1_S1 + 54) -
                                      p_over_q * *(b + 100 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 54);
            *(b + 72 * OS1_S1 + 76) = prefactor_x * *(b + 72 * OS1_S1 + 55) -
                                      p_over_q * *(b + 100 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 55);
            *(b + 72 * OS1_S1 + 77) =
                prefactor_y * *(b + 72 * OS1_S1 + 50) -
                p_over_q * *(b + 106 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 30);
            *(b + 72 * OS1_S1 + 78) = prefactor_z * *(b + 72 * OS1_S1 + 50) -
                                      p_over_q * *(b + 107 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 50);
            *(b + 72 * OS1_S1 + 79) = prefactor_z * *(b + 72 * OS1_S1 + 51) -
                                      p_over_q * *(b + 107 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 30);
            *(b + 72 * OS1_S1 + 80) =
                prefactor_z * *(b + 72 * OS1_S1 + 52) -
                p_over_q * *(b + 107 * OS1_S1 + 52) +
                one_over_two_q * *(b + 45 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 31);
            *(b + 72 * OS1_S1 + 81) =
                prefactor_y * *(b + 72 * OS1_S1 + 54) -
                p_over_q * *(b + 106 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 54) +
                one_over_two_q * *(b + 72 * OS1_S1 + 34);
            *(b + 72 * OS1_S1 + 82) =
                prefactor_y * *(b + 72 * OS1_S1 + 55) -
                p_over_q * *(b + 106 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 55);
            *(b + 72 * OS1_S1 + 83) =
                prefactor_z * *(b + 72 * OS1_S1 + 55) -
                p_over_q * *(b + 107 * OS1_S1 + 55) +
                one_over_two_q * *(b + 45 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 34);
            *(b + 73 * OS1_S1 + 56) =
                prefactor_x * *(b + 73 * OS1_S1 + 35) -
                p_over_q * *(b + 101 * OS1_S1 + 35) +
                one_over_two_q * *(b + 52 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 73 * OS1_S1 + 20);
            *(b + 73 * OS1_S1 + 57) =
                prefactor_y * *(b + 73 * OS1_S1 + 35) -
                p_over_q * *(b + 107 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 35);
            *(b + 73 * OS1_S1 + 58) =
                prefactor_z * *(b + 73 * OS1_S1 + 35) -
                p_over_q * *(b + 108 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 35);
            *(b + 73 * OS1_S1 + 59) =
                prefactor_y * *(b + 73 * OS1_S1 + 36) -
                p_over_q * *(b + 107 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 36) +
                one_over_two_q * *(b + 73 * OS1_S1 + 20);
            *(b + 73 * OS1_S1 + 60) =
                prefactor_z * *(b + 73 * OS1_S1 + 36) -
                p_over_q * *(b + 108 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 36);
            *(b + 73 * OS1_S1 + 61) =
                prefactor_z * *(b + 73 * OS1_S1 + 37) -
                p_over_q * *(b + 108 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 37) +
                one_over_two_q * *(b + 73 * OS1_S1 + 20);
            *(b + 73 * OS1_S1 + 62) =
                prefactor_x * *(b + 73 * OS1_S1 + 41) -
                p_over_q * *(b + 101 * OS1_S1 + 41) +
                one_over_two_q * *(b + 52 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 26);
            *(b + 73 * OS1_S1 + 63) =
                prefactor_z * *(b + 73 * OS1_S1 + 38) -
                p_over_q * *(b + 108 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 38);
            *(b + 73 * OS1_S1 + 64) =
                prefactor_y * *(b + 73 * OS1_S1 + 40) -
                p_over_q * *(b + 107 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 40);
            *(b + 73 * OS1_S1 + 65) =
                prefactor_x * *(b + 73 * OS1_S1 + 44) -
                p_over_q * *(b + 101 * OS1_S1 + 44) +
                one_over_two_q * *(b + 52 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 29);
            *(b + 73 * OS1_S1 + 66) = prefactor_x * *(b + 73 * OS1_S1 + 45) -
                                      p_over_q * *(b + 101 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 73 * OS1_S1 + 30);
            *(b + 73 * OS1_S1 + 67) =
                prefactor_z * *(b + 73 * OS1_S1 + 41) -
                p_over_q * *(b + 108 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 41);
            *(b + 73 * OS1_S1 + 68) = prefactor_x * *(b + 73 * OS1_S1 + 47) -
                                      p_over_q * *(b + 101 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 73 * OS1_S1 + 32);
            *(b + 73 * OS1_S1 + 69) =
                prefactor_y * *(b + 73 * OS1_S1 + 44) -
                p_over_q * *(b + 107 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 44);
            *(b + 73 * OS1_S1 + 70) = prefactor_x * *(b + 73 * OS1_S1 + 49) -
                                      p_over_q * *(b + 101 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 73 * OS1_S1 + 34);
            *(b + 73 * OS1_S1 + 71) = prefactor_x * *(b + 73 * OS1_S1 + 50) -
                                      p_over_q * *(b + 101 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 50);
            *(b + 73 * OS1_S1 + 72) = prefactor_x * *(b + 73 * OS1_S1 + 51) -
                                      p_over_q * *(b + 101 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 51);
            *(b + 73 * OS1_S1 + 73) = prefactor_x * *(b + 73 * OS1_S1 + 52) -
                                      p_over_q * *(b + 101 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 52);
            *(b + 73 * OS1_S1 + 74) = prefactor_x * *(b + 73 * OS1_S1 + 53) -
                                      p_over_q * *(b + 101 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 53);
            *(b + 73 * OS1_S1 + 75) = prefactor_x * *(b + 73 * OS1_S1 + 54) -
                                      p_over_q * *(b + 101 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 54);
            *(b + 73 * OS1_S1 + 76) = prefactor_x * *(b + 73 * OS1_S1 + 55) -
                                      p_over_q * *(b + 101 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 55);
            *(b + 73 * OS1_S1 + 77) =
                prefactor_y * *(b + 73 * OS1_S1 + 50) -
                p_over_q * *(b + 107 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 73 * OS1_S1 + 30);
            *(b + 73 * OS1_S1 + 78) =
                prefactor_z * *(b + 73 * OS1_S1 + 50) -
                p_over_q * *(b + 108 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 50);
            *(b + 73 * OS1_S1 + 79) =
                prefactor_z * *(b + 73 * OS1_S1 + 51) -
                p_over_q * *(b + 108 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 51) +
                one_over_two_q * *(b + 73 * OS1_S1 + 30);
            *(b + 73 * OS1_S1 + 80) =
                prefactor_z * *(b + 73 * OS1_S1 + 52) -
                p_over_q * *(b + 108 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 31);
            *(b + 73 * OS1_S1 + 81) =
                prefactor_y * *(b + 73 * OS1_S1 + 54) -
                p_over_q * *(b + 107 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 54) +
                one_over_two_q * *(b + 73 * OS1_S1 + 34);
            *(b + 73 * OS1_S1 + 82) =
                prefactor_y * *(b + 73 * OS1_S1 + 55) -
                p_over_q * *(b + 107 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 55);
            *(b + 73 * OS1_S1 + 83) =
                prefactor_z * *(b + 73 * OS1_S1 + 55) -
                p_over_q * *(b + 108 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 73 * OS1_S1 + 34);
            *(b + 74 * OS1_S1 + 56) =
                prefactor_x * *(b + 74 * OS1_S1 + 35) -
                p_over_q * *(b + 102 * OS1_S1 + 35) +
                one_over_two_q * *(b + 53 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 74 * OS1_S1 + 20);
            *(b + 74 * OS1_S1 + 57) =
                prefactor_y * *(b + 74 * OS1_S1 + 35) -
                p_over_q * *(b + 108 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 35);
            *(b + 74 * OS1_S1 + 58) =
                prefactor_z * *(b + 74 * OS1_S1 + 35) -
                p_over_q * *(b + 109 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 35);
            *(b + 74 * OS1_S1 + 59) =
                prefactor_y * *(b + 74 * OS1_S1 + 36) -
                p_over_q * *(b + 108 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 36) +
                one_over_two_q * *(b + 74 * OS1_S1 + 20);
            *(b + 74 * OS1_S1 + 60) =
                prefactor_y * *(b + 74 * OS1_S1 + 37) -
                p_over_q * *(b + 108 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 37);
            *(b + 74 * OS1_S1 + 61) =
                prefactor_z * *(b + 74 * OS1_S1 + 37) -
                p_over_q * *(b + 109 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 37) +
                one_over_two_q * *(b + 74 * OS1_S1 + 20);
            *(b + 74 * OS1_S1 + 62) =
                prefactor_x * *(b + 74 * OS1_S1 + 41) -
                p_over_q * *(b + 102 * OS1_S1 + 41) +
                one_over_two_q * *(b + 53 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 26);
            *(b + 74 * OS1_S1 + 63) =
                prefactor_z * *(b + 74 * OS1_S1 + 38) -
                p_over_q * *(b + 109 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 38);
            *(b + 74 * OS1_S1 + 64) =
                prefactor_y * *(b + 74 * OS1_S1 + 40) -
                p_over_q * *(b + 108 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 40);
            *(b + 74 * OS1_S1 + 65) =
                prefactor_x * *(b + 74 * OS1_S1 + 44) -
                p_over_q * *(b + 102 * OS1_S1 + 44) +
                one_over_two_q * *(b + 53 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 29);
            *(b + 74 * OS1_S1 + 66) = prefactor_x * *(b + 74 * OS1_S1 + 45) -
                                      p_over_q * *(b + 102 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 74 * OS1_S1 + 30);
            *(b + 74 * OS1_S1 + 67) =
                prefactor_z * *(b + 74 * OS1_S1 + 41) -
                p_over_q * *(b + 109 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 41);
            *(b + 74 * OS1_S1 + 68) = prefactor_x * *(b + 74 * OS1_S1 + 47) -
                                      p_over_q * *(b + 102 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 74 * OS1_S1 + 32);
            *(b + 74 * OS1_S1 + 69) =
                prefactor_y * *(b + 74 * OS1_S1 + 44) -
                p_over_q * *(b + 108 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 44);
            *(b + 74 * OS1_S1 + 70) = prefactor_x * *(b + 74 * OS1_S1 + 49) -
                                      p_over_q * *(b + 102 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 74 * OS1_S1 + 34);
            *(b + 74 * OS1_S1 + 71) = prefactor_x * *(b + 74 * OS1_S1 + 50) -
                                      p_over_q * *(b + 102 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 50);
            *(b + 74 * OS1_S1 + 72) = prefactor_x * *(b + 74 * OS1_S1 + 51) -
                                      p_over_q * *(b + 102 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 51);
            *(b + 74 * OS1_S1 + 73) = prefactor_x * *(b + 74 * OS1_S1 + 52) -
                                      p_over_q * *(b + 102 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 52);
            *(b + 74 * OS1_S1 + 74) = prefactor_x * *(b + 74 * OS1_S1 + 53) -
                                      p_over_q * *(b + 102 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 53);
            *(b + 74 * OS1_S1 + 75) = prefactor_x * *(b + 74 * OS1_S1 + 54) -
                                      p_over_q * *(b + 102 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 54);
            *(b + 74 * OS1_S1 + 76) = prefactor_x * *(b + 74 * OS1_S1 + 55) -
                                      p_over_q * *(b + 102 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 55);
            *(b + 74 * OS1_S1 + 77) =
                prefactor_y * *(b + 74 * OS1_S1 + 50) -
                p_over_q * *(b + 108 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 74 * OS1_S1 + 30);
            *(b + 74 * OS1_S1 + 78) =
                prefactor_z * *(b + 74 * OS1_S1 + 50) -
                p_over_q * *(b + 109 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 50);
            *(b + 74 * OS1_S1 + 79) =
                prefactor_z * *(b + 74 * OS1_S1 + 51) -
                p_over_q * *(b + 109 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 51) +
                one_over_two_q * *(b + 74 * OS1_S1 + 30);
            *(b + 74 * OS1_S1 + 80) =
                prefactor_y * *(b + 74 * OS1_S1 + 53) -
                p_over_q * *(b + 108 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 33);
            *(b + 74 * OS1_S1 + 81) =
                prefactor_y * *(b + 74 * OS1_S1 + 54) -
                p_over_q * *(b + 108 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 54) +
                one_over_two_q * *(b + 74 * OS1_S1 + 34);
            *(b + 74 * OS1_S1 + 82) =
                prefactor_y * *(b + 74 * OS1_S1 + 55) -
                p_over_q * *(b + 108 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 55);
            *(b + 74 * OS1_S1 + 83) =
                prefactor_z * *(b + 74 * OS1_S1 + 55) -
                p_over_q * *(b + 109 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 74 * OS1_S1 + 34);
            *(b + 75 * OS1_S1 + 56) =
                prefactor_x * *(b + 75 * OS1_S1 + 35) -
                p_over_q * *(b + 103 * OS1_S1 + 35) +
                one_over_two_q * *(b + 54 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 20);
            *(b + 75 * OS1_S1 + 57) = prefactor_y * *(b + 75 * OS1_S1 + 35) -
                                      p_over_q * *(b + 109 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 35);
            *(b + 75 * OS1_S1 + 58) =
                prefactor_z * *(b + 75 * OS1_S1 + 35) -
                p_over_q * *(b + 110 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 35);
            *(b + 75 * OS1_S1 + 59) = prefactor_y * *(b + 75 * OS1_S1 + 36) -
                                      p_over_q * *(b + 109 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 20);
            *(b + 75 * OS1_S1 + 60) = prefactor_y * *(b + 75 * OS1_S1 + 37) -
                                      p_over_q * *(b + 109 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 37);
            *(b + 75 * OS1_S1 + 61) =
                prefactor_z * *(b + 75 * OS1_S1 + 37) -
                p_over_q * *(b + 110 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 37) +
                one_over_two_q * *(b + 75 * OS1_S1 + 20);
            *(b + 75 * OS1_S1 + 62) =
                prefactor_y * *(b + 75 * OS1_S1 + 38) -
                p_over_q * *(b + 109 * OS1_S1 + 38) +
                one_over_two_q * *(b + 49 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 21);
            *(b + 75 * OS1_S1 + 63) =
                prefactor_z * *(b + 75 * OS1_S1 + 38) -
                p_over_q * *(b + 110 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 38);
            *(b + 75 * OS1_S1 + 64) = prefactor_y * *(b + 75 * OS1_S1 + 40) -
                                      p_over_q * *(b + 109 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 40);
            *(b + 75 * OS1_S1 + 65) =
                prefactor_x * *(b + 75 * OS1_S1 + 44) -
                p_over_q * *(b + 103 * OS1_S1 + 44) +
                one_over_two_q * *(b + 54 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 29);
            *(b + 75 * OS1_S1 + 66) = prefactor_x * *(b + 75 * OS1_S1 + 45) -
                                      p_over_q * *(b + 103 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 30);
            *(b + 75 * OS1_S1 + 67) =
                prefactor_z * *(b + 75 * OS1_S1 + 41) -
                p_over_q * *(b + 110 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 41);
            *(b + 75 * OS1_S1 + 68) = prefactor_y * *(b + 75 * OS1_S1 + 43) -
                                      p_over_q * *(b + 109 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 25);
            *(b + 75 * OS1_S1 + 69) = prefactor_y * *(b + 75 * OS1_S1 + 44) -
                                      p_over_q * *(b + 109 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 44);
            *(b + 75 * OS1_S1 + 70) = prefactor_x * *(b + 75 * OS1_S1 + 49) -
                                      p_over_q * *(b + 103 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 34);
            *(b + 75 * OS1_S1 + 71) = prefactor_x * *(b + 75 * OS1_S1 + 50) -
                                      p_over_q * *(b + 103 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 50);
            *(b + 75 * OS1_S1 + 72) = prefactor_x * *(b + 75 * OS1_S1 + 51) -
                                      p_over_q * *(b + 103 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 51);
            *(b + 75 * OS1_S1 + 73) = prefactor_x * *(b + 75 * OS1_S1 + 52) -
                                      p_over_q * *(b + 103 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 52);
            *(b + 75 * OS1_S1 + 74) = prefactor_x * *(b + 75 * OS1_S1 + 53) -
                                      p_over_q * *(b + 103 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 53);
            *(b + 75 * OS1_S1 + 75) = prefactor_y * *(b + 75 * OS1_S1 + 49) -
                                      p_over_q * *(b + 109 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 49);
            *(b + 75 * OS1_S1 + 76) = prefactor_x * *(b + 75 * OS1_S1 + 55) -
                                      p_over_q * *(b + 103 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 55);
            *(b + 75 * OS1_S1 + 77) =
                prefactor_y * *(b + 75 * OS1_S1 + 50) -
                p_over_q * *(b + 109 * OS1_S1 + 50) +
                one_over_two_q * *(b + 49 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 30);
            *(b + 75 * OS1_S1 + 78) =
                prefactor_z * *(b + 75 * OS1_S1 + 50) -
                p_over_q * *(b + 110 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 50);
            *(b + 75 * OS1_S1 + 79) =
                prefactor_z * *(b + 75 * OS1_S1 + 51) -
                p_over_q * *(b + 110 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 51) +
                one_over_two_q * *(b + 75 * OS1_S1 + 30);
            *(b + 75 * OS1_S1 + 80) =
                prefactor_y * *(b + 75 * OS1_S1 + 53) -
                p_over_q * *(b + 109 * OS1_S1 + 53) +
                one_over_two_q * *(b + 49 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 33);
            *(b + 75 * OS1_S1 + 81) = prefactor_y * *(b + 75 * OS1_S1 + 54) -
                                      p_over_q * *(b + 109 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 34);
            *(b + 75 * OS1_S1 + 82) = prefactor_y * *(b + 75 * OS1_S1 + 55) -
                                      p_over_q * *(b + 109 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 55);
            *(b + 75 * OS1_S1 + 83) =
                prefactor_z * *(b + 75 * OS1_S1 + 55) -
                p_over_q * *(b + 110 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 34);
            *(b + 76 * OS1_S1 + 56) =
                prefactor_x * *(b + 76 * OS1_S1 + 35) -
                p_over_q * *(b + 104 * OS1_S1 + 35) +
                one_over_two_q * *(b + 55 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 76 * OS1_S1 + 20);
            *(b + 76 * OS1_S1 + 57) = prefactor_y * *(b + 76 * OS1_S1 + 35) -
                                      p_over_q * *(b + 110 * OS1_S1 + 35);
            *(b + 76 * OS1_S1 + 58) =
                prefactor_z * *(b + 76 * OS1_S1 + 35) -
                p_over_q * *(b + 111 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 35);
            *(b + 76 * OS1_S1 + 59) = prefactor_y * *(b + 76 * OS1_S1 + 36) -
                                      p_over_q * *(b + 110 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 20);
            *(b + 76 * OS1_S1 + 60) = prefactor_y * *(b + 76 * OS1_S1 + 37) -
                                      p_over_q * *(b + 110 * OS1_S1 + 37);
            *(b + 76 * OS1_S1 + 61) =
                prefactor_z * *(b + 76 * OS1_S1 + 37) -
                p_over_q * *(b + 111 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 37) +
                one_over_two_q * *(b + 76 * OS1_S1 + 20);
            *(b + 76 * OS1_S1 + 62) =
                prefactor_y * *(b + 76 * OS1_S1 + 38) -
                p_over_q * *(b + 110 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 21);
            *(b + 76 * OS1_S1 + 63) =
                prefactor_z * *(b + 76 * OS1_S1 + 38) -
                p_over_q * *(b + 111 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 38);
            *(b + 76 * OS1_S1 + 64) = prefactor_y * *(b + 76 * OS1_S1 + 40) -
                                      p_over_q * *(b + 110 * OS1_S1 + 40);
            *(b + 76 * OS1_S1 + 65) =
                prefactor_x * *(b + 76 * OS1_S1 + 44) -
                p_over_q * *(b + 104 * OS1_S1 + 44) +
                one_over_two_q * *(b + 55 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 29);
            *(b + 76 * OS1_S1 + 66) = prefactor_x * *(b + 76 * OS1_S1 + 45) -
                                      p_over_q * *(b + 104 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 30);
            *(b + 76 * OS1_S1 + 67) =
                prefactor_z * *(b + 76 * OS1_S1 + 41) -
                p_over_q * *(b + 111 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 41);
            *(b + 76 * OS1_S1 + 68) = prefactor_y * *(b + 76 * OS1_S1 + 43) -
                                      p_over_q * *(b + 110 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 25);
            *(b + 76 * OS1_S1 + 69) = prefactor_y * *(b + 76 * OS1_S1 + 44) -
                                      p_over_q * *(b + 110 * OS1_S1 + 44);
            *(b + 76 * OS1_S1 + 70) = prefactor_x * *(b + 76 * OS1_S1 + 49) -
                                      p_over_q * *(b + 104 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 34);
            *(b + 76 * OS1_S1 + 71) = prefactor_x * *(b + 76 * OS1_S1 + 50) -
                                      p_over_q * *(b + 104 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 50);
            *(b + 76 * OS1_S1 + 72) = prefactor_x * *(b + 76 * OS1_S1 + 51) -
                                      p_over_q * *(b + 104 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 51);
            *(b + 76 * OS1_S1 + 73) = prefactor_x * *(b + 76 * OS1_S1 + 52) -
                                      p_over_q * *(b + 104 * OS1_S1 + 52) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 52);
            *(b + 76 * OS1_S1 + 74) = prefactor_x * *(b + 76 * OS1_S1 + 53) -
                                      p_over_q * *(b + 104 * OS1_S1 + 53) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 53);
            *(b + 76 * OS1_S1 + 75) = prefactor_y * *(b + 76 * OS1_S1 + 49) -
                                      p_over_q * *(b + 110 * OS1_S1 + 49);
            *(b + 76 * OS1_S1 + 76) = prefactor_x * *(b + 76 * OS1_S1 + 55) -
                                      p_over_q * *(b + 104 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 55);
            *(b + 76 * OS1_S1 + 77) =
                prefactor_y * *(b + 76 * OS1_S1 + 50) -
                p_over_q * *(b + 110 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 76 * OS1_S1 + 30);
            *(b + 76 * OS1_S1 + 78) =
                prefactor_z * *(b + 76 * OS1_S1 + 50) -
                p_over_q * *(b + 111 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 50);
            *(b + 76 * OS1_S1 + 79) =
                prefactor_z * *(b + 76 * OS1_S1 + 51) -
                p_over_q * *(b + 111 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 51) +
                one_over_two_q * *(b + 76 * OS1_S1 + 30);
            *(b + 76 * OS1_S1 + 80) =
                prefactor_y * *(b + 76 * OS1_S1 + 53) -
                p_over_q * *(b + 110 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 33);
            *(b + 76 * OS1_S1 + 81) = prefactor_y * *(b + 76 * OS1_S1 + 54) -
                                      p_over_q * *(b + 110 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 34);
            *(b + 76 * OS1_S1 + 82) = prefactor_y * *(b + 76 * OS1_S1 + 55) -
                                      p_over_q * *(b + 110 * OS1_S1 + 55);
            *(b + 76 * OS1_S1 + 83) =
                prefactor_z * *(b + 76 * OS1_S1 + 55) -
                p_over_q * *(b + 111 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 76 * OS1_S1 + 34);
            *(b + 77 * OS1_S1 + 56) =
                prefactor_x * *(b + 77 * OS1_S1 + 35) -
                p_over_q * *(b + 105 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 77 * OS1_S1 + 20);
            *(b + 77 * OS1_S1 + 57) =
                prefactor_y * *(b + 77 * OS1_S1 + 35) -
                p_over_q * *(b + 112 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 35);
            *(b + 77 * OS1_S1 + 58) = prefactor_z * *(b + 77 * OS1_S1 + 35) -
                                      p_over_q * *(b + 113 * OS1_S1 + 35);
            *(b + 77 * OS1_S1 + 59) =
                prefactor_y * *(b + 77 * OS1_S1 + 36) -
                p_over_q * *(b + 112 * OS1_S1 + 36) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 36) +
                one_over_two_q * *(b + 77 * OS1_S1 + 20);
            *(b + 77 * OS1_S1 + 60) = prefactor_z * *(b + 77 * OS1_S1 + 36) -
                                      p_over_q * *(b + 113 * OS1_S1 + 36);
            *(b + 77 * OS1_S1 + 61) = prefactor_z * *(b + 77 * OS1_S1 + 37) -
                                      p_over_q * *(b + 113 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 20);
            *(b + 77 * OS1_S1 + 62) =
                prefactor_x * *(b + 77 * OS1_S1 + 41) -
                p_over_q * *(b + 105 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 26);
            *(b + 77 * OS1_S1 + 63) = prefactor_z * *(b + 77 * OS1_S1 + 38) -
                                      p_over_q * *(b + 113 * OS1_S1 + 38);
            *(b + 77 * OS1_S1 + 64) =
                prefactor_y * *(b + 77 * OS1_S1 + 40) -
                p_over_q * *(b + 112 * OS1_S1 + 40) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 40);
            *(b + 77 * OS1_S1 + 65) =
                prefactor_z * *(b + 77 * OS1_S1 + 40) -
                p_over_q * *(b + 113 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 22);
            *(b + 77 * OS1_S1 + 66) = prefactor_x * *(b + 77 * OS1_S1 + 45) -
                                      p_over_q * *(b + 105 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 30);
            *(b + 77 * OS1_S1 + 67) = prefactor_z * *(b + 77 * OS1_S1 + 41) -
                                      p_over_q * *(b + 113 * OS1_S1 + 41);
            *(b + 77 * OS1_S1 + 68) = prefactor_z * *(b + 77 * OS1_S1 + 42) -
                                      p_over_q * *(b + 113 * OS1_S1 + 42) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 23);
            *(b + 77 * OS1_S1 + 69) =
                prefactor_y * *(b + 77 * OS1_S1 + 44) -
                p_over_q * *(b + 112 * OS1_S1 + 44) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 44);
            *(b + 77 * OS1_S1 + 70) = prefactor_x * *(b + 77 * OS1_S1 + 49) -
                                      p_over_q * *(b + 105 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 34);
            *(b + 77 * OS1_S1 + 71) = prefactor_x * *(b + 77 * OS1_S1 + 50) -
                                      p_over_q * *(b + 105 * OS1_S1 + 50);
            *(b + 77 * OS1_S1 + 72) = prefactor_z * *(b + 77 * OS1_S1 + 45) -
                                      p_over_q * *(b + 113 * OS1_S1 + 45);
            *(b + 77 * OS1_S1 + 73) = prefactor_x * *(b + 77 * OS1_S1 + 52) -
                                      p_over_q * *(b + 105 * OS1_S1 + 52);
            *(b + 77 * OS1_S1 + 74) = prefactor_x * *(b + 77 * OS1_S1 + 53) -
                                      p_over_q * *(b + 105 * OS1_S1 + 53);
            *(b + 77 * OS1_S1 + 75) = prefactor_x * *(b + 77 * OS1_S1 + 54) -
                                      p_over_q * *(b + 105 * OS1_S1 + 54);
            *(b + 77 * OS1_S1 + 76) = prefactor_x * *(b + 77 * OS1_S1 + 55) -
                                      p_over_q * *(b + 105 * OS1_S1 + 55);
            *(b + 77 * OS1_S1 + 77) =
                prefactor_y * *(b + 77 * OS1_S1 + 50) -
                p_over_q * *(b + 112 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 77 * OS1_S1 + 30);
            *(b + 77 * OS1_S1 + 78) = prefactor_z * *(b + 77 * OS1_S1 + 50) -
                                      p_over_q * *(b + 113 * OS1_S1 + 50);
            *(b + 77 * OS1_S1 + 79) = prefactor_z * *(b + 77 * OS1_S1 + 51) -
                                      p_over_q * *(b + 113 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 30);
            *(b + 77 * OS1_S1 + 80) =
                prefactor_z * *(b + 77 * OS1_S1 + 52) -
                p_over_q * *(b + 113 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 31);
            *(b + 77 * OS1_S1 + 81) =
                prefactor_y * *(b + 77 * OS1_S1 + 54) -
                p_over_q * *(b + 112 * OS1_S1 + 54) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 54) +
                one_over_two_q * *(b + 77 * OS1_S1 + 34);
            *(b + 77 * OS1_S1 + 82) =
                prefactor_y * *(b + 77 * OS1_S1 + 55) -
                p_over_q * *(b + 112 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 55);
            *(b + 77 * OS1_S1 + 83) =
                prefactor_z * *(b + 77 * OS1_S1 + 55) -
                p_over_q * *(b + 113 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 77 * OS1_S1 + 34);
            *(b + 78 * OS1_S1 + 56) =
                prefactor_x * *(b + 78 * OS1_S1 + 35) -
                p_over_q * *(b + 106 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 78 * OS1_S1 + 20);
            *(b + 78 * OS1_S1 + 57) =
                prefactor_y * *(b + 78 * OS1_S1 + 35) -
                p_over_q * *(b + 113 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 35);
            *(b + 78 * OS1_S1 + 58) = prefactor_z * *(b + 78 * OS1_S1 + 35) -
                                      p_over_q * *(b + 114 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 35);
            *(b + 78 * OS1_S1 + 59) =
                prefactor_y * *(b + 78 * OS1_S1 + 36) -
                p_over_q * *(b + 113 * OS1_S1 + 36) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 36) +
                one_over_two_q * *(b + 78 * OS1_S1 + 20);
            *(b + 78 * OS1_S1 + 60) = prefactor_z * *(b + 78 * OS1_S1 + 36) -
                                      p_over_q * *(b + 114 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 36);
            *(b + 78 * OS1_S1 + 61) = prefactor_z * *(b + 78 * OS1_S1 + 37) -
                                      p_over_q * *(b + 114 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 20);
            *(b + 78 * OS1_S1 + 62) =
                prefactor_x * *(b + 78 * OS1_S1 + 41) -
                p_over_q * *(b + 106 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 26);
            *(b + 78 * OS1_S1 + 63) = prefactor_z * *(b + 78 * OS1_S1 + 38) -
                                      p_over_q * *(b + 114 * OS1_S1 + 38) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 38);
            *(b + 78 * OS1_S1 + 64) =
                prefactor_y * *(b + 78 * OS1_S1 + 40) -
                p_over_q * *(b + 113 * OS1_S1 + 40) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 40);
            *(b + 78 * OS1_S1 + 65) =
                prefactor_x * *(b + 78 * OS1_S1 + 44) -
                p_over_q * *(b + 106 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 29);
            *(b + 78 * OS1_S1 + 66) = prefactor_x * *(b + 78 * OS1_S1 + 45) -
                                      p_over_q * *(b + 106 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 30);
            *(b + 78 * OS1_S1 + 67) = prefactor_z * *(b + 78 * OS1_S1 + 41) -
                                      p_over_q * *(b + 114 * OS1_S1 + 41) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 41);
            *(b + 78 * OS1_S1 + 68) = prefactor_x * *(b + 78 * OS1_S1 + 47) -
                                      p_over_q * *(b + 106 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 32);
            *(b + 78 * OS1_S1 + 69) =
                prefactor_y * *(b + 78 * OS1_S1 + 44) -
                p_over_q * *(b + 113 * OS1_S1 + 44) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 44);
            *(b + 78 * OS1_S1 + 70) = prefactor_x * *(b + 78 * OS1_S1 + 49) -
                                      p_over_q * *(b + 106 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 34);
            *(b + 78 * OS1_S1 + 71) = prefactor_x * *(b + 78 * OS1_S1 + 50) -
                                      p_over_q * *(b + 106 * OS1_S1 + 50);
            *(b + 78 * OS1_S1 + 72) = prefactor_x * *(b + 78 * OS1_S1 + 51) -
                                      p_over_q * *(b + 106 * OS1_S1 + 51);
            *(b + 78 * OS1_S1 + 73) = prefactor_x * *(b + 78 * OS1_S1 + 52) -
                                      p_over_q * *(b + 106 * OS1_S1 + 52);
            *(b + 78 * OS1_S1 + 74) = prefactor_x * *(b + 78 * OS1_S1 + 53) -
                                      p_over_q * *(b + 106 * OS1_S1 + 53);
            *(b + 78 * OS1_S1 + 75) = prefactor_x * *(b + 78 * OS1_S1 + 54) -
                                      p_over_q * *(b + 106 * OS1_S1 + 54);
            *(b + 78 * OS1_S1 + 76) = prefactor_x * *(b + 78 * OS1_S1 + 55) -
                                      p_over_q * *(b + 106 * OS1_S1 + 55);
            *(b + 78 * OS1_S1 + 77) =
                prefactor_y * *(b + 78 * OS1_S1 + 50) -
                p_over_q * *(b + 113 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 78 * OS1_S1 + 30);
            *(b + 78 * OS1_S1 + 78) = prefactor_z * *(b + 78 * OS1_S1 + 50) -
                                      p_over_q * *(b + 114 * OS1_S1 + 50) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 50);
            *(b + 78 * OS1_S1 + 79) = prefactor_z * *(b + 78 * OS1_S1 + 51) -
                                      p_over_q * *(b + 114 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 51) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 30);
            *(b + 78 * OS1_S1 + 80) =
                prefactor_z * *(b + 78 * OS1_S1 + 52) -
                p_over_q * *(b + 114 * OS1_S1 + 52) +
                one_over_two_q * *(b + 50 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 31);
            *(b + 78 * OS1_S1 + 81) =
                prefactor_y * *(b + 78 * OS1_S1 + 54) -
                p_over_q * *(b + 113 * OS1_S1 + 54) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 54) +
                one_over_two_q * *(b + 78 * OS1_S1 + 34);
            *(b + 78 * OS1_S1 + 82) =
                prefactor_y * *(b + 78 * OS1_S1 + 55) -
                p_over_q * *(b + 113 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 55);
            *(b + 78 * OS1_S1 + 83) =
                prefactor_z * *(b + 78 * OS1_S1 + 55) -
                p_over_q * *(b + 114 * OS1_S1 + 55) +
                one_over_two_q * *(b + 50 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 78 * OS1_S1 + 34);
            *(b + 79 * OS1_S1 + 56) =
                prefactor_x * *(b + 79 * OS1_S1 + 35) -
                p_over_q * *(b + 107 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 20);
            *(b + 79 * OS1_S1 + 57) =
                prefactor_y * *(b + 79 * OS1_S1 + 35) -
                p_over_q * *(b + 114 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 35);
            *(b + 79 * OS1_S1 + 58) =
                prefactor_z * *(b + 79 * OS1_S1 + 35) -
                p_over_q * *(b + 115 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 35);
            *(b + 79 * OS1_S1 + 59) =
                prefactor_y * *(b + 79 * OS1_S1 + 36) -
                p_over_q * *(b + 114 * OS1_S1 + 36) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 36) +
                one_over_two_q * *(b + 79 * OS1_S1 + 20);
            *(b + 79 * OS1_S1 + 60) =
                prefactor_z * *(b + 79 * OS1_S1 + 36) -
                p_over_q * *(b + 115 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 36);
            *(b + 79 * OS1_S1 + 61) =
                prefactor_z * *(b + 79 * OS1_S1 + 37) -
                p_over_q * *(b + 115 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 37) +
                one_over_two_q * *(b + 79 * OS1_S1 + 20);
            *(b + 79 * OS1_S1 + 62) =
                prefactor_x * *(b + 79 * OS1_S1 + 41) -
                p_over_q * *(b + 107 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 26);
            *(b + 79 * OS1_S1 + 63) =
                prefactor_z * *(b + 79 * OS1_S1 + 38) -
                p_over_q * *(b + 115 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 38);
            *(b + 79 * OS1_S1 + 64) =
                prefactor_y * *(b + 79 * OS1_S1 + 40) -
                p_over_q * *(b + 114 * OS1_S1 + 40) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 40);
            *(b + 79 * OS1_S1 + 65) =
                prefactor_x * *(b + 79 * OS1_S1 + 44) -
                p_over_q * *(b + 107 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 29);
            *(b + 79 * OS1_S1 + 66) = prefactor_x * *(b + 79 * OS1_S1 + 45) -
                                      p_over_q * *(b + 107 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 79 * OS1_S1 + 30);
            *(b + 79 * OS1_S1 + 67) =
                prefactor_z * *(b + 79 * OS1_S1 + 41) -
                p_over_q * *(b + 115 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 41);
            *(b + 79 * OS1_S1 + 68) = prefactor_x * *(b + 79 * OS1_S1 + 47) -
                                      p_over_q * *(b + 107 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 79 * OS1_S1 + 32);
            *(b + 79 * OS1_S1 + 69) =
                prefactor_y * *(b + 79 * OS1_S1 + 44) -
                p_over_q * *(b + 114 * OS1_S1 + 44) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 44);
            *(b + 79 * OS1_S1 + 70) = prefactor_x * *(b + 79 * OS1_S1 + 49) -
                                      p_over_q * *(b + 107 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 79 * OS1_S1 + 34);
            *(b + 79 * OS1_S1 + 71) = prefactor_x * *(b + 79 * OS1_S1 + 50) -
                                      p_over_q * *(b + 107 * OS1_S1 + 50);
            *(b + 79 * OS1_S1 + 72) = prefactor_x * *(b + 79 * OS1_S1 + 51) -
                                      p_over_q * *(b + 107 * OS1_S1 + 51);
            *(b + 79 * OS1_S1 + 73) = prefactor_x * *(b + 79 * OS1_S1 + 52) -
                                      p_over_q * *(b + 107 * OS1_S1 + 52);
            *(b + 79 * OS1_S1 + 74) = prefactor_x * *(b + 79 * OS1_S1 + 53) -
                                      p_over_q * *(b + 107 * OS1_S1 + 53);
            *(b + 79 * OS1_S1 + 75) = prefactor_x * *(b + 79 * OS1_S1 + 54) -
                                      p_over_q * *(b + 107 * OS1_S1 + 54);
            *(b + 79 * OS1_S1 + 76) = prefactor_x * *(b + 79 * OS1_S1 + 55) -
                                      p_over_q * *(b + 107 * OS1_S1 + 55);
            *(b + 79 * OS1_S1 + 77) =
                prefactor_y * *(b + 79 * OS1_S1 + 50) -
                p_over_q * *(b + 114 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 30);
            *(b + 79 * OS1_S1 + 78) =
                prefactor_z * *(b + 79 * OS1_S1 + 50) -
                p_over_q * *(b + 115 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 50);
            *(b + 79 * OS1_S1 + 79) =
                prefactor_z * *(b + 79 * OS1_S1 + 51) -
                p_over_q * *(b + 115 * OS1_S1 + 51) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 51) +
                one_over_two_q * *(b + 79 * OS1_S1 + 30);
            *(b + 79 * OS1_S1 + 80) =
                prefactor_z * *(b + 79 * OS1_S1 + 52) -
                p_over_q * *(b + 115 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 31);
            *(b + 79 * OS1_S1 + 81) =
                prefactor_y * *(b + 79 * OS1_S1 + 54) -
                p_over_q * *(b + 114 * OS1_S1 + 54) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 54) +
                one_over_two_q * *(b + 79 * OS1_S1 + 34);
            *(b + 79 * OS1_S1 + 82) =
                prefactor_y * *(b + 79 * OS1_S1 + 55) -
                p_over_q * *(b + 114 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 55);
            *(b + 79 * OS1_S1 + 83) =
                prefactor_z * *(b + 79 * OS1_S1 + 55) -
                p_over_q * *(b + 115 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 34);
            *(b + 80 * OS1_S1 + 56) =
                prefactor_x * *(b + 80 * OS1_S1 + 35) -
                p_over_q * *(b + 108 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 80 * OS1_S1 + 20);
            *(b + 80 * OS1_S1 + 57) =
                prefactor_y * *(b + 80 * OS1_S1 + 35) -
                p_over_q * *(b + 115 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 35);
            *(b + 80 * OS1_S1 + 58) =
                prefactor_z * *(b + 80 * OS1_S1 + 35) -
                p_over_q * *(b + 116 * OS1_S1 + 35) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 35);
            *(b + 80 * OS1_S1 + 59) =
                prefactor_y * *(b + 80 * OS1_S1 + 36) -
                p_over_q * *(b + 115 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 36) +
                one_over_two_q * *(b + 80 * OS1_S1 + 20);
            *(b + 80 * OS1_S1 + 60) =
                prefactor_z * *(b + 80 * OS1_S1 + 36) -
                p_over_q * *(b + 116 * OS1_S1 + 36) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 36);
            *(b + 80 * OS1_S1 + 61) =
                prefactor_z * *(b + 80 * OS1_S1 + 37) -
                p_over_q * *(b + 116 * OS1_S1 + 37) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 37) +
                one_over_two_q * *(b + 80 * OS1_S1 + 20);
            *(b + 80 * OS1_S1 + 62) =
                prefactor_x * *(b + 80 * OS1_S1 + 41) -
                p_over_q * *(b + 108 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 26);
            *(b + 80 * OS1_S1 + 63) =
                prefactor_z * *(b + 80 * OS1_S1 + 38) -
                p_over_q * *(b + 116 * OS1_S1 + 38) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 38);
            *(b + 80 * OS1_S1 + 64) =
                prefactor_y * *(b + 80 * OS1_S1 + 40) -
                p_over_q * *(b + 115 * OS1_S1 + 40) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 40);
            *(b + 80 * OS1_S1 + 65) =
                prefactor_x * *(b + 80 * OS1_S1 + 44) -
                p_over_q * *(b + 108 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 29);
            *(b + 80 * OS1_S1 + 66) = prefactor_x * *(b + 80 * OS1_S1 + 45) -
                                      p_over_q * *(b + 108 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 80 * OS1_S1 + 30);
            *(b + 80 * OS1_S1 + 67) =
                prefactor_z * *(b + 80 * OS1_S1 + 41) -
                p_over_q * *(b + 116 * OS1_S1 + 41) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 41);
            *(b + 80 * OS1_S1 + 68) = prefactor_x * *(b + 80 * OS1_S1 + 47) -
                                      p_over_q * *(b + 108 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 80 * OS1_S1 + 32);
            *(b + 80 * OS1_S1 + 69) =
                prefactor_y * *(b + 80 * OS1_S1 + 44) -
                p_over_q * *(b + 115 * OS1_S1 + 44) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 44);
            *(b + 80 * OS1_S1 + 70) = prefactor_x * *(b + 80 * OS1_S1 + 49) -
                                      p_over_q * *(b + 108 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 80 * OS1_S1 + 34);
            *(b + 80 * OS1_S1 + 71) = prefactor_x * *(b + 80 * OS1_S1 + 50) -
                                      p_over_q * *(b + 108 * OS1_S1 + 50);
            *(b + 80 * OS1_S1 + 72) = prefactor_x * *(b + 80 * OS1_S1 + 51) -
                                      p_over_q * *(b + 108 * OS1_S1 + 51);
            *(b + 80 * OS1_S1 + 73) = prefactor_x * *(b + 80 * OS1_S1 + 52) -
                                      p_over_q * *(b + 108 * OS1_S1 + 52);
            *(b + 80 * OS1_S1 + 74) = prefactor_x * *(b + 80 * OS1_S1 + 53) -
                                      p_over_q * *(b + 108 * OS1_S1 + 53);
            *(b + 80 * OS1_S1 + 75) = prefactor_x * *(b + 80 * OS1_S1 + 54) -
                                      p_over_q * *(b + 108 * OS1_S1 + 54);
            *(b + 80 * OS1_S1 + 76) = prefactor_x * *(b + 80 * OS1_S1 + 55) -
                                      p_over_q * *(b + 108 * OS1_S1 + 55);
            *(b + 80 * OS1_S1 + 77) =
                prefactor_y * *(b + 80 * OS1_S1 + 50) -
                p_over_q * *(b + 115 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 80 * OS1_S1 + 30);
            *(b + 80 * OS1_S1 + 78) =
                prefactor_z * *(b + 80 * OS1_S1 + 50) -
                p_over_q * *(b + 116 * OS1_S1 + 50) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 50);
            *(b + 80 * OS1_S1 + 79) =
                prefactor_z * *(b + 80 * OS1_S1 + 51) -
                p_over_q * *(b + 116 * OS1_S1 + 51) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 51) +
                one_over_two_q * *(b + 80 * OS1_S1 + 30);
            *(b + 80 * OS1_S1 + 80) =
                prefactor_z * *(b + 80 * OS1_S1 + 52) -
                p_over_q * *(b + 116 * OS1_S1 + 52) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 52) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 31);
            *(b + 80 * OS1_S1 + 81) =
                prefactor_y * *(b + 80 * OS1_S1 + 54) -
                p_over_q * *(b + 115 * OS1_S1 + 54) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 54) +
                one_over_two_q * *(b + 80 * OS1_S1 + 34);
            *(b + 80 * OS1_S1 + 82) =
                prefactor_y * *(b + 80 * OS1_S1 + 55) -
                p_over_q * *(b + 115 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 55);
            *(b + 80 * OS1_S1 + 83) =
                prefactor_z * *(b + 80 * OS1_S1 + 55) -
                p_over_q * *(b + 116 * OS1_S1 + 55) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 80 * OS1_S1 + 34);
            *(b + 81 * OS1_S1 + 56) =
                prefactor_x * *(b + 81 * OS1_S1 + 35) -
                p_over_q * *(b + 109 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 20);
            *(b + 81 * OS1_S1 + 57) =
                prefactor_y * *(b + 81 * OS1_S1 + 35) -
                p_over_q * *(b + 116 * OS1_S1 + 35) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 35);
            *(b + 81 * OS1_S1 + 58) =
                prefactor_z * *(b + 81 * OS1_S1 + 35) -
                p_over_q * *(b + 117 * OS1_S1 + 35) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 35);
            *(b + 81 * OS1_S1 + 59) =
                prefactor_y * *(b + 81 * OS1_S1 + 36) -
                p_over_q * *(b + 116 * OS1_S1 + 36) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 36) +
                one_over_two_q * *(b + 81 * OS1_S1 + 20);
            *(b + 81 * OS1_S1 + 60) =
                prefactor_y * *(b + 81 * OS1_S1 + 37) -
                p_over_q * *(b + 116 * OS1_S1 + 37) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 37);
            *(b + 81 * OS1_S1 + 61) =
                prefactor_z * *(b + 81 * OS1_S1 + 37) -
                p_over_q * *(b + 117 * OS1_S1 + 37) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 37) +
                one_over_two_q * *(b + 81 * OS1_S1 + 20);
            *(b + 81 * OS1_S1 + 62) =
                prefactor_x * *(b + 81 * OS1_S1 + 41) -
                p_over_q * *(b + 109 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 26);
            *(b + 81 * OS1_S1 + 63) =
                prefactor_z * *(b + 81 * OS1_S1 + 38) -
                p_over_q * *(b + 117 * OS1_S1 + 38) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 38);
            *(b + 81 * OS1_S1 + 64) =
                prefactor_y * *(b + 81 * OS1_S1 + 40) -
                p_over_q * *(b + 116 * OS1_S1 + 40) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 40);
            *(b + 81 * OS1_S1 + 65) =
                prefactor_x * *(b + 81 * OS1_S1 + 44) -
                p_over_q * *(b + 109 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 29);
            *(b + 81 * OS1_S1 + 66) = prefactor_x * *(b + 81 * OS1_S1 + 45) -
                                      p_over_q * *(b + 109 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 81 * OS1_S1 + 30);
            *(b + 81 * OS1_S1 + 67) =
                prefactor_z * *(b + 81 * OS1_S1 + 41) -
                p_over_q * *(b + 117 * OS1_S1 + 41) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 41);
            *(b + 81 * OS1_S1 + 68) = prefactor_x * *(b + 81 * OS1_S1 + 47) -
                                      p_over_q * *(b + 109 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 81 * OS1_S1 + 32);
            *(b + 81 * OS1_S1 + 69) =
                prefactor_y * *(b + 81 * OS1_S1 + 44) -
                p_over_q * *(b + 116 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 44);
            *(b + 81 * OS1_S1 + 70) = prefactor_x * *(b + 81 * OS1_S1 + 49) -
                                      p_over_q * *(b + 109 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 81 * OS1_S1 + 34);
            *(b + 81 * OS1_S1 + 71) = prefactor_x * *(b + 81 * OS1_S1 + 50) -
                                      p_over_q * *(b + 109 * OS1_S1 + 50);
            *(b + 81 * OS1_S1 + 72) = prefactor_x * *(b + 81 * OS1_S1 + 51) -
                                      p_over_q * *(b + 109 * OS1_S1 + 51);
            *(b + 81 * OS1_S1 + 73) = prefactor_x * *(b + 81 * OS1_S1 + 52) -
                                      p_over_q * *(b + 109 * OS1_S1 + 52);
            *(b + 81 * OS1_S1 + 74) = prefactor_x * *(b + 81 * OS1_S1 + 53) -
                                      p_over_q * *(b + 109 * OS1_S1 + 53);
            *(b + 81 * OS1_S1 + 75) = prefactor_x * *(b + 81 * OS1_S1 + 54) -
                                      p_over_q * *(b + 109 * OS1_S1 + 54);
            *(b + 81 * OS1_S1 + 76) = prefactor_x * *(b + 81 * OS1_S1 + 55) -
                                      p_over_q * *(b + 109 * OS1_S1 + 55);
            *(b + 81 * OS1_S1 + 77) =
                prefactor_y * *(b + 81 * OS1_S1 + 50) -
                p_over_q * *(b + 116 * OS1_S1 + 50) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 30);
            *(b + 81 * OS1_S1 + 78) =
                prefactor_z * *(b + 81 * OS1_S1 + 50) -
                p_over_q * *(b + 117 * OS1_S1 + 50) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 50);
            *(b + 81 * OS1_S1 + 79) =
                prefactor_z * *(b + 81 * OS1_S1 + 51) -
                p_over_q * *(b + 117 * OS1_S1 + 51) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 51) +
                one_over_two_q * *(b + 81 * OS1_S1 + 30);
            *(b + 81 * OS1_S1 + 80) =
                prefactor_y * *(b + 81 * OS1_S1 + 53) -
                p_over_q * *(b + 116 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 33);
            *(b + 81 * OS1_S1 + 81) =
                prefactor_y * *(b + 81 * OS1_S1 + 54) -
                p_over_q * *(b + 116 * OS1_S1 + 54) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 54) +
                one_over_two_q * *(b + 81 * OS1_S1 + 34);
            *(b + 81 * OS1_S1 + 82) =
                prefactor_y * *(b + 81 * OS1_S1 + 55) -
                p_over_q * *(b + 116 * OS1_S1 + 55) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 55);
            *(b + 81 * OS1_S1 + 83) =
                prefactor_z * *(b + 81 * OS1_S1 + 55) -
                p_over_q * *(b + 117 * OS1_S1 + 55) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 34);
            *(b + 82 * OS1_S1 + 56) =
                prefactor_x * *(b + 82 * OS1_S1 + 35) -
                p_over_q * *(b + 110 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 82 * OS1_S1 + 20);
            *(b + 82 * OS1_S1 + 57) = prefactor_y * *(b + 82 * OS1_S1 + 35) -
                                      p_over_q * *(b + 117 * OS1_S1 + 35) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 35);
            *(b + 82 * OS1_S1 + 58) =
                prefactor_z * *(b + 82 * OS1_S1 + 35) -
                p_over_q * *(b + 118 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 35);
            *(b + 82 * OS1_S1 + 59) = prefactor_y * *(b + 82 * OS1_S1 + 36) -
                                      p_over_q * *(b + 117 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 20);
            *(b + 82 * OS1_S1 + 60) = prefactor_y * *(b + 82 * OS1_S1 + 37) -
                                      p_over_q * *(b + 117 * OS1_S1 + 37) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 37);
            *(b + 82 * OS1_S1 + 61) =
                prefactor_z * *(b + 82 * OS1_S1 + 37) -
                p_over_q * *(b + 118 * OS1_S1 + 37) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 37) +
                one_over_two_q * *(b + 82 * OS1_S1 + 20);
            *(b + 82 * OS1_S1 + 62) =
                prefactor_x * *(b + 82 * OS1_S1 + 41) -
                p_over_q * *(b + 110 * OS1_S1 + 41) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 26);
            *(b + 82 * OS1_S1 + 63) =
                prefactor_z * *(b + 82 * OS1_S1 + 38) -
                p_over_q * *(b + 118 * OS1_S1 + 38) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 38);
            *(b + 82 * OS1_S1 + 64) = prefactor_y * *(b + 82 * OS1_S1 + 40) -
                                      p_over_q * *(b + 117 * OS1_S1 + 40) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 40);
            *(b + 82 * OS1_S1 + 65) =
                prefactor_x * *(b + 82 * OS1_S1 + 44) -
                p_over_q * *(b + 110 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 29);
            *(b + 82 * OS1_S1 + 66) = prefactor_x * *(b + 82 * OS1_S1 + 45) -
                                      p_over_q * *(b + 110 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 30);
            *(b + 82 * OS1_S1 + 67) =
                prefactor_z * *(b + 82 * OS1_S1 + 41) -
                p_over_q * *(b + 118 * OS1_S1 + 41) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 41);
            *(b + 82 * OS1_S1 + 68) = prefactor_x * *(b + 82 * OS1_S1 + 47) -
                                      p_over_q * *(b + 110 * OS1_S1 + 47) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 32);
            *(b + 82 * OS1_S1 + 69) = prefactor_y * *(b + 82 * OS1_S1 + 44) -
                                      p_over_q * *(b + 117 * OS1_S1 + 44) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 44);
            *(b + 82 * OS1_S1 + 70) = prefactor_x * *(b + 82 * OS1_S1 + 49) -
                                      p_over_q * *(b + 110 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 34);
            *(b + 82 * OS1_S1 + 71) = prefactor_x * *(b + 82 * OS1_S1 + 50) -
                                      p_over_q * *(b + 110 * OS1_S1 + 50);
            *(b + 82 * OS1_S1 + 72) = prefactor_x * *(b + 82 * OS1_S1 + 51) -
                                      p_over_q * *(b + 110 * OS1_S1 + 51);
            *(b + 82 * OS1_S1 + 73) = prefactor_x * *(b + 82 * OS1_S1 + 52) -
                                      p_over_q * *(b + 110 * OS1_S1 + 52);
            *(b + 82 * OS1_S1 + 74) = prefactor_x * *(b + 82 * OS1_S1 + 53) -
                                      p_over_q * *(b + 110 * OS1_S1 + 53);
            *(b + 82 * OS1_S1 + 75) = prefactor_x * *(b + 82 * OS1_S1 + 54) -
                                      p_over_q * *(b + 110 * OS1_S1 + 54);
            *(b + 82 * OS1_S1 + 76) = prefactor_x * *(b + 82 * OS1_S1 + 55) -
                                      p_over_q * *(b + 110 * OS1_S1 + 55);
            *(b + 82 * OS1_S1 + 77) =
                prefactor_y * *(b + 82 * OS1_S1 + 50) -
                p_over_q * *(b + 117 * OS1_S1 + 50) +
                one_over_two_q * *(b + 55 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 82 * OS1_S1 + 30);
            *(b + 82 * OS1_S1 + 78) =
                prefactor_z * *(b + 82 * OS1_S1 + 50) -
                p_over_q * *(b + 118 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 50);
            *(b + 82 * OS1_S1 + 79) =
                prefactor_z * *(b + 82 * OS1_S1 + 51) -
                p_over_q * *(b + 118 * OS1_S1 + 51) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 51) +
                one_over_two_q * *(b + 82 * OS1_S1 + 30);
            *(b + 82 * OS1_S1 + 80) =
                prefactor_y * *(b + 82 * OS1_S1 + 53) -
                p_over_q * *(b + 117 * OS1_S1 + 53) +
                one_over_two_q * *(b + 55 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 33);
            *(b + 82 * OS1_S1 + 81) = prefactor_y * *(b + 82 * OS1_S1 + 54) -
                                      p_over_q * *(b + 117 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 34);
            *(b + 82 * OS1_S1 + 82) = prefactor_y * *(b + 82 * OS1_S1 + 55) -
                                      p_over_q * *(b + 117 * OS1_S1 + 55) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 55);
            *(b + 82 * OS1_S1 + 83) =
                prefactor_z * *(b + 82 * OS1_S1 + 55) -
                p_over_q * *(b + 118 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 82 * OS1_S1 + 34);
            *(b + 83 * OS1_S1 + 56) =
                prefactor_x * *(b + 83 * OS1_S1 + 35) -
                p_over_q * *(b + 111 * OS1_S1 + 35) +
                5 * one_over_two_q * *(b + 83 * OS1_S1 + 20);
            *(b + 83 * OS1_S1 + 57) = prefactor_y * *(b + 83 * OS1_S1 + 35) -
                                      p_over_q * *(b + 118 * OS1_S1 + 35);
            *(b + 83 * OS1_S1 + 58) =
                prefactor_z * *(b + 83 * OS1_S1 + 35) -
                p_over_q * *(b + 119 * OS1_S1 + 35) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 35);
            *(b + 83 * OS1_S1 + 59) = prefactor_y * *(b + 83 * OS1_S1 + 36) -
                                      p_over_q * *(b + 118 * OS1_S1 + 36) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 20);
            *(b + 83 * OS1_S1 + 60) = prefactor_y * *(b + 83 * OS1_S1 + 37) -
                                      p_over_q * *(b + 118 * OS1_S1 + 37);
            *(b + 83 * OS1_S1 + 61) =
                prefactor_z * *(b + 83 * OS1_S1 + 37) -
                p_over_q * *(b + 119 * OS1_S1 + 37) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 37) +
                one_over_two_q * *(b + 83 * OS1_S1 + 20);
            *(b + 83 * OS1_S1 + 62) =
                prefactor_y * *(b + 83 * OS1_S1 + 38) -
                p_over_q * *(b + 118 * OS1_S1 + 38) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 21);
            *(b + 83 * OS1_S1 + 63) =
                prefactor_z * *(b + 83 * OS1_S1 + 38) -
                p_over_q * *(b + 119 * OS1_S1 + 38) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 38);
            *(b + 83 * OS1_S1 + 64) = prefactor_y * *(b + 83 * OS1_S1 + 40) -
                                      p_over_q * *(b + 118 * OS1_S1 + 40);
            *(b + 83 * OS1_S1 + 65) =
                prefactor_x * *(b + 83 * OS1_S1 + 44) -
                p_over_q * *(b + 111 * OS1_S1 + 44) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 29);
            *(b + 83 * OS1_S1 + 66) = prefactor_x * *(b + 83 * OS1_S1 + 45) -
                                      p_over_q * *(b + 111 * OS1_S1 + 45) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 30);
            *(b + 83 * OS1_S1 + 67) =
                prefactor_z * *(b + 83 * OS1_S1 + 41) -
                p_over_q * *(b + 119 * OS1_S1 + 41) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 41);
            *(b + 83 * OS1_S1 + 68) = prefactor_y * *(b + 83 * OS1_S1 + 43) -
                                      p_over_q * *(b + 118 * OS1_S1 + 43) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 25);
            *(b + 83 * OS1_S1 + 69) = prefactor_y * *(b + 83 * OS1_S1 + 44) -
                                      p_over_q * *(b + 118 * OS1_S1 + 44);
            *(b + 83 * OS1_S1 + 70) = prefactor_x * *(b + 83 * OS1_S1 + 49) -
                                      p_over_q * *(b + 111 * OS1_S1 + 49) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 34);
            *(b + 83 * OS1_S1 + 71) = prefactor_x * *(b + 83 * OS1_S1 + 50) -
                                      p_over_q * *(b + 111 * OS1_S1 + 50);
            *(b + 83 * OS1_S1 + 72) = prefactor_x * *(b + 83 * OS1_S1 + 51) -
                                      p_over_q * *(b + 111 * OS1_S1 + 51);
            *(b + 83 * OS1_S1 + 73) = prefactor_x * *(b + 83 * OS1_S1 + 52) -
                                      p_over_q * *(b + 111 * OS1_S1 + 52);
            *(b + 83 * OS1_S1 + 74) = prefactor_x * *(b + 83 * OS1_S1 + 53) -
                                      p_over_q * *(b + 111 * OS1_S1 + 53);
            *(b + 83 * OS1_S1 + 75) = prefactor_y * *(b + 83 * OS1_S1 + 49) -
                                      p_over_q * *(b + 118 * OS1_S1 + 49);
            *(b + 83 * OS1_S1 + 76) = prefactor_x * *(b + 83 * OS1_S1 + 55) -
                                      p_over_q * *(b + 111 * OS1_S1 + 55);
            *(b + 83 * OS1_S1 + 77) =
                prefactor_y * *(b + 83 * OS1_S1 + 50) -
                p_over_q * *(b + 118 * OS1_S1 + 50) +
                5 * one_over_two_q * *(b + 83 * OS1_S1 + 30);
            *(b + 83 * OS1_S1 + 78) =
                prefactor_z * *(b + 83 * OS1_S1 + 50) -
                p_over_q * *(b + 119 * OS1_S1 + 50) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 50);
            *(b + 83 * OS1_S1 + 79) =
                prefactor_z * *(b + 83 * OS1_S1 + 51) -
                p_over_q * *(b + 119 * OS1_S1 + 51) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 51) +
                one_over_two_q * *(b + 83 * OS1_S1 + 30);
            *(b + 83 * OS1_S1 + 80) =
                prefactor_y * *(b + 83 * OS1_S1 + 53) -
                p_over_q * *(b + 118 * OS1_S1 + 53) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 33);
            *(b + 83 * OS1_S1 + 81) = prefactor_y * *(b + 83 * OS1_S1 + 54) -
                                      p_over_q * *(b + 118 * OS1_S1 + 54) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 34);
            *(b + 83 * OS1_S1 + 82) = prefactor_y * *(b + 83 * OS1_S1 + 55) -
                                      p_over_q * *(b + 118 * OS1_S1 + 55);
            *(b + 83 * OS1_S1 + 83) =
                prefactor_z * *(b + 83 * OS1_S1 + 55) -
                p_over_q * *(b + 119 * OS1_S1 + 55) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 55) +
                5 * one_over_two_q * *(b + 83 * OS1_S1 + 34);
            return;
        }
    }
}
