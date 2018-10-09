/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_0_7(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 0 * OS1_S1 + 84) =
                prefactor_x * *(b + 0 * OS1_S1 + 56) -
                p_over_q * *(b + 1 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 0 * OS1_S1 + 35);
            *(b + 0 * OS1_S1 + 85) = prefactor_y * *(b + 0 * OS1_S1 + 56) -
                                     p_over_q * *(b + 2 * OS1_S1 + 56);
            *(b + 0 * OS1_S1 + 86) = prefactor_z * *(b + 0 * OS1_S1 + 56) -
                                     p_over_q * *(b + 3 * OS1_S1 + 56);
            *(b + 0 * OS1_S1 + 87) = prefactor_y * *(b + 0 * OS1_S1 + 57) -
                                     p_over_q * *(b + 2 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 35);
            *(b + 0 * OS1_S1 + 88) = prefactor_z * *(b + 0 * OS1_S1 + 57) -
                                     p_over_q * *(b + 3 * OS1_S1 + 57);
            *(b + 0 * OS1_S1 + 89) = prefactor_z * *(b + 0 * OS1_S1 + 58) -
                                     p_over_q * *(b + 3 * OS1_S1 + 58) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 35);
            *(b + 0 * OS1_S1 + 90) =
                prefactor_y * *(b + 0 * OS1_S1 + 59) -
                p_over_q * *(b + 2 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 36);
            *(b + 0 * OS1_S1 + 91) = prefactor_z * *(b + 0 * OS1_S1 + 59) -
                                     p_over_q * *(b + 3 * OS1_S1 + 59);
            *(b + 0 * OS1_S1 + 92) = prefactor_y * *(b + 0 * OS1_S1 + 61) -
                                     p_over_q * *(b + 2 * OS1_S1 + 61);
            *(b + 0 * OS1_S1 + 93) =
                prefactor_z * *(b + 0 * OS1_S1 + 61) -
                p_over_q * *(b + 3 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 37);
            *(b + 0 * OS1_S1 + 94) =
                prefactor_x * *(b + 0 * OS1_S1 + 66) -
                p_over_q * *(b + 1 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 45);
            *(b + 0 * OS1_S1 + 95) = prefactor_z * *(b + 0 * OS1_S1 + 62) -
                                     p_over_q * *(b + 3 * OS1_S1 + 62);
            *(b + 0 * OS1_S1 + 96) = prefactor_z * *(b + 0 * OS1_S1 + 63) -
                                     p_over_q * *(b + 3 * OS1_S1 + 63) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 38);
            *(b + 0 * OS1_S1 + 97) = prefactor_y * *(b + 0 * OS1_S1 + 65) -
                                     p_over_q * *(b + 2 * OS1_S1 + 65);
            *(b + 0 * OS1_S1 + 98) =
                prefactor_x * *(b + 0 * OS1_S1 + 70) -
                p_over_q * *(b + 1 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 49);
            *(b + 0 * OS1_S1 + 99) = prefactor_x * *(b + 0 * OS1_S1 + 71) -
                                     p_over_q * *(b + 1 * OS1_S1 + 71) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 50);
            *(b + 0 * OS1_S1 + 100) = prefactor_z * *(b + 0 * OS1_S1 + 66) -
                                      p_over_q * *(b + 3 * OS1_S1 + 66);
            *(b + 0 * OS1_S1 + 101) = prefactor_z * *(b + 0 * OS1_S1 + 67) -
                                      p_over_q * *(b + 3 * OS1_S1 + 67) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 41);
            *(b + 0 * OS1_S1 + 102) = prefactor_y * *(b + 0 * OS1_S1 + 69) -
                                      p_over_q * *(b + 2 * OS1_S1 + 69) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 44);
            *(b + 0 * OS1_S1 + 103) = prefactor_y * *(b + 0 * OS1_S1 + 70) -
                                      p_over_q * *(b + 2 * OS1_S1 + 70);
            *(b + 0 * OS1_S1 + 104) = prefactor_x * *(b + 0 * OS1_S1 + 76) -
                                      p_over_q * *(b + 1 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 55);
            *(b + 0 * OS1_S1 + 105) = prefactor_x * *(b + 0 * OS1_S1 + 77) -
                                      p_over_q * *(b + 1 * OS1_S1 + 77);
            *(b + 0 * OS1_S1 + 106) = prefactor_z * *(b + 0 * OS1_S1 + 71) -
                                      p_over_q * *(b + 3 * OS1_S1 + 71);
            *(b + 0 * OS1_S1 + 107) = prefactor_x * *(b + 0 * OS1_S1 + 79) -
                                      p_over_q * *(b + 1 * OS1_S1 + 79);
            *(b + 0 * OS1_S1 + 108) = prefactor_x * *(b + 0 * OS1_S1 + 80) -
                                      p_over_q * *(b + 1 * OS1_S1 + 80);
            *(b + 0 * OS1_S1 + 109) = prefactor_x * *(b + 0 * OS1_S1 + 81) -
                                      p_over_q * *(b + 1 * OS1_S1 + 81);
            *(b + 0 * OS1_S1 + 110) = prefactor_y * *(b + 0 * OS1_S1 + 76) -
                                      p_over_q * *(b + 2 * OS1_S1 + 76);
            *(b + 0 * OS1_S1 + 111) = prefactor_x * *(b + 0 * OS1_S1 + 83) -
                                      p_over_q * *(b + 1 * OS1_S1 + 83);
            *(b + 0 * OS1_S1 + 112) =
                prefactor_y * *(b + 0 * OS1_S1 + 77) -
                p_over_q * *(b + 2 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 0 * OS1_S1 + 50);
            *(b + 0 * OS1_S1 + 113) = prefactor_z * *(b + 0 * OS1_S1 + 77) -
                                      p_over_q * *(b + 3 * OS1_S1 + 77);
            *(b + 0 * OS1_S1 + 114) = prefactor_z * *(b + 0 * OS1_S1 + 78) -
                                      p_over_q * *(b + 3 * OS1_S1 + 78) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 50);
            *(b + 0 * OS1_S1 + 115) =
                prefactor_z * *(b + 0 * OS1_S1 + 79) -
                p_over_q * *(b + 3 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 51);
            *(b + 0 * OS1_S1 + 116) =
                prefactor_y * *(b + 0 * OS1_S1 + 81) -
                p_over_q * *(b + 2 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 54);
            *(b + 0 * OS1_S1 + 117) = prefactor_y * *(b + 0 * OS1_S1 + 82) -
                                      p_over_q * *(b + 2 * OS1_S1 + 82) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 55);
            *(b + 0 * OS1_S1 + 118) = prefactor_y * *(b + 0 * OS1_S1 + 83) -
                                      p_over_q * *(b + 2 * OS1_S1 + 83);
            *(b + 0 * OS1_S1 + 119) =
                prefactor_z * *(b + 0 * OS1_S1 + 83) -
                p_over_q * *(b + 3 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 0 * OS1_S1 + 55);
            return;
        }
        void transfer_1_7(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 1 * OS1_S1 + 84) =
                prefactor_x * *(b + 1 * OS1_S1 + 56) -
                p_over_q * *(b + 4 * OS1_S1 + 56) +
                one_over_two_q * *(b + 0 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 1 * OS1_S1 + 35);
            *(b + 1 * OS1_S1 + 85) = prefactor_y * *(b + 1 * OS1_S1 + 56) -
                                     p_over_q * *(b + 5 * OS1_S1 + 56);
            *(b + 1 * OS1_S1 + 86) = prefactor_z * *(b + 1 * OS1_S1 + 56) -
                                     p_over_q * *(b + 6 * OS1_S1 + 56);
            *(b + 1 * OS1_S1 + 87) = prefactor_y * *(b + 1 * OS1_S1 + 57) -
                                     p_over_q * *(b + 5 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 35);
            *(b + 1 * OS1_S1 + 88) = prefactor_z * *(b + 1 * OS1_S1 + 57) -
                                     p_over_q * *(b + 6 * OS1_S1 + 57);
            *(b + 1 * OS1_S1 + 89) = prefactor_z * *(b + 1 * OS1_S1 + 58) -
                                     p_over_q * *(b + 6 * OS1_S1 + 58) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 35);
            *(b + 1 * OS1_S1 + 90) =
                prefactor_y * *(b + 1 * OS1_S1 + 59) -
                p_over_q * *(b + 5 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 36);
            *(b + 1 * OS1_S1 + 91) = prefactor_z * *(b + 1 * OS1_S1 + 59) -
                                     p_over_q * *(b + 6 * OS1_S1 + 59);
            *(b + 1 * OS1_S1 + 92) = prefactor_y * *(b + 1 * OS1_S1 + 61) -
                                     p_over_q * *(b + 5 * OS1_S1 + 61);
            *(b + 1 * OS1_S1 + 93) =
                prefactor_z * *(b + 1 * OS1_S1 + 61) -
                p_over_q * *(b + 6 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 37);
            *(b + 1 * OS1_S1 + 94) =
                prefactor_x * *(b + 1 * OS1_S1 + 66) -
                p_over_q * *(b + 4 * OS1_S1 + 66) +
                one_over_two_q * *(b + 0 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 45);
            *(b + 1 * OS1_S1 + 95) = prefactor_z * *(b + 1 * OS1_S1 + 62) -
                                     p_over_q * *(b + 6 * OS1_S1 + 62);
            *(b + 1 * OS1_S1 + 96) = prefactor_z * *(b + 1 * OS1_S1 + 63) -
                                     p_over_q * *(b + 6 * OS1_S1 + 63) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 38);
            *(b + 1 * OS1_S1 + 97) = prefactor_y * *(b + 1 * OS1_S1 + 65) -
                                     p_over_q * *(b + 5 * OS1_S1 + 65);
            *(b + 1 * OS1_S1 + 98) =
                prefactor_x * *(b + 1 * OS1_S1 + 70) -
                p_over_q * *(b + 4 * OS1_S1 + 70) +
                one_over_two_q * *(b + 0 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 49);
            *(b + 1 * OS1_S1 + 99) = prefactor_x * *(b + 1 * OS1_S1 + 71) -
                                     p_over_q * *(b + 4 * OS1_S1 + 71) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 71) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 50);
            *(b + 1 * OS1_S1 + 100) = prefactor_z * *(b + 1 * OS1_S1 + 66) -
                                      p_over_q * *(b + 6 * OS1_S1 + 66);
            *(b + 1 * OS1_S1 + 101) = prefactor_z * *(b + 1 * OS1_S1 + 67) -
                                      p_over_q * *(b + 6 * OS1_S1 + 67) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 41);
            *(b + 1 * OS1_S1 + 102) = prefactor_y * *(b + 1 * OS1_S1 + 69) -
                                      p_over_q * *(b + 5 * OS1_S1 + 69) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 44);
            *(b + 1 * OS1_S1 + 103) = prefactor_y * *(b + 1 * OS1_S1 + 70) -
                                      p_over_q * *(b + 5 * OS1_S1 + 70);
            *(b + 1 * OS1_S1 + 104) = prefactor_x * *(b + 1 * OS1_S1 + 76) -
                                      p_over_q * *(b + 4 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 55);
            *(b + 1 * OS1_S1 + 105) = prefactor_x * *(b + 1 * OS1_S1 + 77) -
                                      p_over_q * *(b + 4 * OS1_S1 + 77) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 77);
            *(b + 1 * OS1_S1 + 106) = prefactor_z * *(b + 1 * OS1_S1 + 71) -
                                      p_over_q * *(b + 6 * OS1_S1 + 71);
            *(b + 1 * OS1_S1 + 107) = prefactor_x * *(b + 1 * OS1_S1 + 79) -
                                      p_over_q * *(b + 4 * OS1_S1 + 79) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 79);
            *(b + 1 * OS1_S1 + 108) = prefactor_x * *(b + 1 * OS1_S1 + 80) -
                                      p_over_q * *(b + 4 * OS1_S1 + 80) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 80);
            *(b + 1 * OS1_S1 + 109) = prefactor_x * *(b + 1 * OS1_S1 + 81) -
                                      p_over_q * *(b + 4 * OS1_S1 + 81) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 81);
            *(b + 1 * OS1_S1 + 110) = prefactor_y * *(b + 1 * OS1_S1 + 76) -
                                      p_over_q * *(b + 5 * OS1_S1 + 76);
            *(b + 1 * OS1_S1 + 111) = prefactor_x * *(b + 1 * OS1_S1 + 83) -
                                      p_over_q * *(b + 4 * OS1_S1 + 83) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 83);
            *(b + 1 * OS1_S1 + 112) =
                prefactor_y * *(b + 1 * OS1_S1 + 77) -
                p_over_q * *(b + 5 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 1 * OS1_S1 + 50);
            *(b + 1 * OS1_S1 + 113) = prefactor_z * *(b + 1 * OS1_S1 + 77) -
                                      p_over_q * *(b + 6 * OS1_S1 + 77);
            *(b + 1 * OS1_S1 + 114) = prefactor_z * *(b + 1 * OS1_S1 + 78) -
                                      p_over_q * *(b + 6 * OS1_S1 + 78) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 50);
            *(b + 1 * OS1_S1 + 115) =
                prefactor_z * *(b + 1 * OS1_S1 + 79) -
                p_over_q * *(b + 6 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 51);
            *(b + 1 * OS1_S1 + 116) =
                prefactor_y * *(b + 1 * OS1_S1 + 81) -
                p_over_q * *(b + 5 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 54);
            *(b + 1 * OS1_S1 + 117) = prefactor_y * *(b + 1 * OS1_S1 + 82) -
                                      p_over_q * *(b + 5 * OS1_S1 + 82) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 55);
            *(b + 1 * OS1_S1 + 118) = prefactor_y * *(b + 1 * OS1_S1 + 83) -
                                      p_over_q * *(b + 5 * OS1_S1 + 83);
            *(b + 1 * OS1_S1 + 119) =
                prefactor_z * *(b + 1 * OS1_S1 + 83) -
                p_over_q * *(b + 6 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 1 * OS1_S1 + 55);
            *(b + 2 * OS1_S1 + 84) =
                prefactor_x * *(b + 2 * OS1_S1 + 56) -
                p_over_q * *(b + 5 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 2 * OS1_S1 + 35);
            *(b + 2 * OS1_S1 + 85) = prefactor_y * *(b + 2 * OS1_S1 + 56) -
                                     p_over_q * *(b + 7 * OS1_S1 + 56) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 56);
            *(b + 2 * OS1_S1 + 86) = prefactor_z * *(b + 2 * OS1_S1 + 56) -
                                     p_over_q * *(b + 8 * OS1_S1 + 56);
            *(b + 2 * OS1_S1 + 87) = prefactor_y * *(b + 2 * OS1_S1 + 57) -
                                     p_over_q * *(b + 7 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 35);
            *(b + 2 * OS1_S1 + 88) = prefactor_z * *(b + 2 * OS1_S1 + 57) -
                                     p_over_q * *(b + 8 * OS1_S1 + 57);
            *(b + 2 * OS1_S1 + 89) = prefactor_z * *(b + 2 * OS1_S1 + 58) -
                                     p_over_q * *(b + 8 * OS1_S1 + 58) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 35);
            *(b + 2 * OS1_S1 + 90) =
                prefactor_y * *(b + 2 * OS1_S1 + 59) -
                p_over_q * *(b + 7 * OS1_S1 + 59) +
                one_over_two_q * *(b + 0 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 36);
            *(b + 2 * OS1_S1 + 91) = prefactor_z * *(b + 2 * OS1_S1 + 59) -
                                     p_over_q * *(b + 8 * OS1_S1 + 59);
            *(b + 2 * OS1_S1 + 92) = prefactor_y * *(b + 2 * OS1_S1 + 61) -
                                     p_over_q * *(b + 7 * OS1_S1 + 61) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 61);
            *(b + 2 * OS1_S1 + 93) =
                prefactor_z * *(b + 2 * OS1_S1 + 61) -
                p_over_q * *(b + 8 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 37);
            *(b + 2 * OS1_S1 + 94) =
                prefactor_x * *(b + 2 * OS1_S1 + 66) -
                p_over_q * *(b + 5 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 45);
            *(b + 2 * OS1_S1 + 95) = prefactor_z * *(b + 2 * OS1_S1 + 62) -
                                     p_over_q * *(b + 8 * OS1_S1 + 62);
            *(b + 2 * OS1_S1 + 96) = prefactor_z * *(b + 2 * OS1_S1 + 63) -
                                     p_over_q * *(b + 8 * OS1_S1 + 63) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 38);
            *(b + 2 * OS1_S1 + 97) = prefactor_y * *(b + 2 * OS1_S1 + 65) -
                                     p_over_q * *(b + 7 * OS1_S1 + 65) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 65);
            *(b + 2 * OS1_S1 + 98) =
                prefactor_x * *(b + 2 * OS1_S1 + 70) -
                p_over_q * *(b + 5 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 49);
            *(b + 2 * OS1_S1 + 99) = prefactor_x * *(b + 2 * OS1_S1 + 71) -
                                     p_over_q * *(b + 5 * OS1_S1 + 71) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 50);
            *(b + 2 * OS1_S1 + 100) = prefactor_z * *(b + 2 * OS1_S1 + 66) -
                                      p_over_q * *(b + 8 * OS1_S1 + 66);
            *(b + 2 * OS1_S1 + 101) = prefactor_z * *(b + 2 * OS1_S1 + 67) -
                                      p_over_q * *(b + 8 * OS1_S1 + 67) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 41);
            *(b + 2 * OS1_S1 + 102) = prefactor_x * *(b + 2 * OS1_S1 + 74) -
                                      p_over_q * *(b + 5 * OS1_S1 + 74) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 53);
            *(b + 2 * OS1_S1 + 103) = prefactor_y * *(b + 2 * OS1_S1 + 70) -
                                      p_over_q * *(b + 7 * OS1_S1 + 70) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 70);
            *(b + 2 * OS1_S1 + 104) = prefactor_x * *(b + 2 * OS1_S1 + 76) -
                                      p_over_q * *(b + 5 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 55);
            *(b + 2 * OS1_S1 + 105) = prefactor_x * *(b + 2 * OS1_S1 + 77) -
                                      p_over_q * *(b + 5 * OS1_S1 + 77);
            *(b + 2 * OS1_S1 + 106) = prefactor_z * *(b + 2 * OS1_S1 + 71) -
                                      p_over_q * *(b + 8 * OS1_S1 + 71);
            *(b + 2 * OS1_S1 + 107) = prefactor_x * *(b + 2 * OS1_S1 + 79) -
                                      p_over_q * *(b + 5 * OS1_S1 + 79);
            *(b + 2 * OS1_S1 + 108) = prefactor_x * *(b + 2 * OS1_S1 + 80) -
                                      p_over_q * *(b + 5 * OS1_S1 + 80);
            *(b + 2 * OS1_S1 + 109) = prefactor_x * *(b + 2 * OS1_S1 + 81) -
                                      p_over_q * *(b + 5 * OS1_S1 + 81);
            *(b + 2 * OS1_S1 + 110) = prefactor_x * *(b + 2 * OS1_S1 + 82) -
                                      p_over_q * *(b + 5 * OS1_S1 + 82);
            *(b + 2 * OS1_S1 + 111) = prefactor_x * *(b + 2 * OS1_S1 + 83) -
                                      p_over_q * *(b + 5 * OS1_S1 + 83);
            *(b + 2 * OS1_S1 + 112) =
                prefactor_y * *(b + 2 * OS1_S1 + 77) -
                p_over_q * *(b + 7 * OS1_S1 + 77) +
                one_over_two_q * *(b + 0 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 2 * OS1_S1 + 50);
            *(b + 2 * OS1_S1 + 113) = prefactor_z * *(b + 2 * OS1_S1 + 77) -
                                      p_over_q * *(b + 8 * OS1_S1 + 77);
            *(b + 2 * OS1_S1 + 114) = prefactor_z * *(b + 2 * OS1_S1 + 78) -
                                      p_over_q * *(b + 8 * OS1_S1 + 78) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 50);
            *(b + 2 * OS1_S1 + 115) =
                prefactor_z * *(b + 2 * OS1_S1 + 79) -
                p_over_q * *(b + 8 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 51);
            *(b + 2 * OS1_S1 + 116) =
                prefactor_y * *(b + 2 * OS1_S1 + 81) -
                p_over_q * *(b + 7 * OS1_S1 + 81) +
                one_over_two_q * *(b + 0 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 54);
            *(b + 2 * OS1_S1 + 117) = prefactor_y * *(b + 2 * OS1_S1 + 82) -
                                      p_over_q * *(b + 7 * OS1_S1 + 82) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 82) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 55);
            *(b + 2 * OS1_S1 + 118) = prefactor_y * *(b + 2 * OS1_S1 + 83) -
                                      p_over_q * *(b + 7 * OS1_S1 + 83) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 83);
            *(b + 2 * OS1_S1 + 119) =
                prefactor_z * *(b + 2 * OS1_S1 + 83) -
                p_over_q * *(b + 8 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 2 * OS1_S1 + 55);
            *(b + 3 * OS1_S1 + 84) =
                prefactor_x * *(b + 3 * OS1_S1 + 56) -
                p_over_q * *(b + 6 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 3 * OS1_S1 + 35);
            *(b + 3 * OS1_S1 + 85) = prefactor_y * *(b + 3 * OS1_S1 + 56) -
                                     p_over_q * *(b + 8 * OS1_S1 + 56);
            *(b + 3 * OS1_S1 + 86) = prefactor_z * *(b + 3 * OS1_S1 + 56) -
                                     p_over_q * *(b + 9 * OS1_S1 + 56) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 56);
            *(b + 3 * OS1_S1 + 87) = prefactor_y * *(b + 3 * OS1_S1 + 57) -
                                     p_over_q * *(b + 8 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 35);
            *(b + 3 * OS1_S1 + 88) = prefactor_y * *(b + 3 * OS1_S1 + 58) -
                                     p_over_q * *(b + 8 * OS1_S1 + 58);
            *(b + 3 * OS1_S1 + 89) = prefactor_z * *(b + 3 * OS1_S1 + 58) -
                                     p_over_q * *(b + 9 * OS1_S1 + 58) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 58) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 35);
            *(b + 3 * OS1_S1 + 90) =
                prefactor_y * *(b + 3 * OS1_S1 + 59) -
                p_over_q * *(b + 8 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 36);
            *(b + 3 * OS1_S1 + 91) = prefactor_z * *(b + 3 * OS1_S1 + 59) -
                                     p_over_q * *(b + 9 * OS1_S1 + 59) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 59);
            *(b + 3 * OS1_S1 + 92) = prefactor_y * *(b + 3 * OS1_S1 + 61) -
                                     p_over_q * *(b + 8 * OS1_S1 + 61);
            *(b + 3 * OS1_S1 + 93) =
                prefactor_z * *(b + 3 * OS1_S1 + 61) -
                p_over_q * *(b + 9 * OS1_S1 + 61) +
                one_over_two_q * *(b + 0 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 37);
            *(b + 3 * OS1_S1 + 94) =
                prefactor_x * *(b + 3 * OS1_S1 + 66) -
                p_over_q * *(b + 6 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 45);
            *(b + 3 * OS1_S1 + 95) = prefactor_z * *(b + 3 * OS1_S1 + 62) -
                                     p_over_q * *(b + 9 * OS1_S1 + 62) +
                                     one_over_two_q * *(b + 0 * OS1_S1 + 62);
            *(b + 3 * OS1_S1 + 96) = prefactor_y * *(b + 3 * OS1_S1 + 64) -
                                     p_over_q * *(b + 8 * OS1_S1 + 64) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 40);
            *(b + 3 * OS1_S1 + 97) = prefactor_y * *(b + 3 * OS1_S1 + 65) -
                                     p_over_q * *(b + 8 * OS1_S1 + 65);
            *(b + 3 * OS1_S1 + 98) =
                prefactor_x * *(b + 3 * OS1_S1 + 70) -
                p_over_q * *(b + 6 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 49);
            *(b + 3 * OS1_S1 + 99) = prefactor_x * *(b + 3 * OS1_S1 + 71) -
                                     p_over_q * *(b + 6 * OS1_S1 + 71) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 50);
            *(b + 3 * OS1_S1 + 100) = prefactor_z * *(b + 3 * OS1_S1 + 66) -
                                      p_over_q * *(b + 9 * OS1_S1 + 66) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 66);
            *(b + 3 * OS1_S1 + 101) = prefactor_x * *(b + 3 * OS1_S1 + 73) -
                                      p_over_q * *(b + 6 * OS1_S1 + 73) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 52);
            *(b + 3 * OS1_S1 + 102) = prefactor_y * *(b + 3 * OS1_S1 + 69) -
                                      p_over_q * *(b + 8 * OS1_S1 + 69) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 44);
            *(b + 3 * OS1_S1 + 103) = prefactor_y * *(b + 3 * OS1_S1 + 70) -
                                      p_over_q * *(b + 8 * OS1_S1 + 70);
            *(b + 3 * OS1_S1 + 104) = prefactor_x * *(b + 3 * OS1_S1 + 76) -
                                      p_over_q * *(b + 6 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 55);
            *(b + 3 * OS1_S1 + 105) = prefactor_x * *(b + 3 * OS1_S1 + 77) -
                                      p_over_q * *(b + 6 * OS1_S1 + 77);
            *(b + 3 * OS1_S1 + 106) = prefactor_x * *(b + 3 * OS1_S1 + 78) -
                                      p_over_q * *(b + 6 * OS1_S1 + 78);
            *(b + 3 * OS1_S1 + 107) = prefactor_x * *(b + 3 * OS1_S1 + 79) -
                                      p_over_q * *(b + 6 * OS1_S1 + 79);
            *(b + 3 * OS1_S1 + 108) = prefactor_x * *(b + 3 * OS1_S1 + 80) -
                                      p_over_q * *(b + 6 * OS1_S1 + 80);
            *(b + 3 * OS1_S1 + 109) = prefactor_x * *(b + 3 * OS1_S1 + 81) -
                                      p_over_q * *(b + 6 * OS1_S1 + 81);
            *(b + 3 * OS1_S1 + 110) = prefactor_y * *(b + 3 * OS1_S1 + 76) -
                                      p_over_q * *(b + 8 * OS1_S1 + 76);
            *(b + 3 * OS1_S1 + 111) = prefactor_x * *(b + 3 * OS1_S1 + 83) -
                                      p_over_q * *(b + 6 * OS1_S1 + 83);
            *(b + 3 * OS1_S1 + 112) =
                prefactor_y * *(b + 3 * OS1_S1 + 77) -
                p_over_q * *(b + 8 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 3 * OS1_S1 + 50);
            *(b + 3 * OS1_S1 + 113) = prefactor_z * *(b + 3 * OS1_S1 + 77) -
                                      p_over_q * *(b + 9 * OS1_S1 + 77) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 77);
            *(b + 3 * OS1_S1 + 114) = prefactor_z * *(b + 3 * OS1_S1 + 78) -
                                      p_over_q * *(b + 9 * OS1_S1 + 78) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 78) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 50);
            *(b + 3 * OS1_S1 + 115) =
                prefactor_z * *(b + 3 * OS1_S1 + 79) -
                p_over_q * *(b + 9 * OS1_S1 + 79) +
                one_over_two_q * *(b + 0 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 51);
            *(b + 3 * OS1_S1 + 116) =
                prefactor_y * *(b + 3 * OS1_S1 + 81) -
                p_over_q * *(b + 8 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 54);
            *(b + 3 * OS1_S1 + 117) = prefactor_y * *(b + 3 * OS1_S1 + 82) -
                                      p_over_q * *(b + 8 * OS1_S1 + 82) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 55);
            *(b + 3 * OS1_S1 + 118) = prefactor_y * *(b + 3 * OS1_S1 + 83) -
                                      p_over_q * *(b + 8 * OS1_S1 + 83);
            *(b + 3 * OS1_S1 + 119) =
                prefactor_z * *(b + 3 * OS1_S1 + 83) -
                p_over_q * *(b + 9 * OS1_S1 + 83) +
                one_over_two_q * *(b + 0 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 3 * OS1_S1 + 55);
            return;
        }
        void transfer_2_7(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 4 * OS1_S1 + 84) =
                prefactor_x * *(b + 4 * OS1_S1 + 56) -
                p_over_q * *(b + 10 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 4 * OS1_S1 + 35);
            *(b + 4 * OS1_S1 + 85) = prefactor_y * *(b + 4 * OS1_S1 + 56) -
                                     p_over_q * *(b + 11 * OS1_S1 + 56);
            *(b + 4 * OS1_S1 + 86) = prefactor_z * *(b + 4 * OS1_S1 + 56) -
                                     p_over_q * *(b + 12 * OS1_S1 + 56);
            *(b + 4 * OS1_S1 + 87) = prefactor_y * *(b + 4 * OS1_S1 + 57) -
                                     p_over_q * *(b + 11 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 35);
            *(b + 4 * OS1_S1 + 88) = prefactor_z * *(b + 4 * OS1_S1 + 57) -
                                     p_over_q * *(b + 12 * OS1_S1 + 57);
            *(b + 4 * OS1_S1 + 89) = prefactor_z * *(b + 4 * OS1_S1 + 58) -
                                     p_over_q * *(b + 12 * OS1_S1 + 58) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 35);
            *(b + 4 * OS1_S1 + 90) =
                prefactor_y * *(b + 4 * OS1_S1 + 59) -
                p_over_q * *(b + 11 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 36);
            *(b + 4 * OS1_S1 + 91) = prefactor_z * *(b + 4 * OS1_S1 + 59) -
                                     p_over_q * *(b + 12 * OS1_S1 + 59);
            *(b + 4 * OS1_S1 + 92) = prefactor_y * *(b + 4 * OS1_S1 + 61) -
                                     p_over_q * *(b + 11 * OS1_S1 + 61);
            *(b + 4 * OS1_S1 + 93) =
                prefactor_z * *(b + 4 * OS1_S1 + 61) -
                p_over_q * *(b + 12 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 37);
            *(b + 4 * OS1_S1 + 94) =
                prefactor_x * *(b + 4 * OS1_S1 + 66) -
                p_over_q * *(b + 10 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 45);
            *(b + 4 * OS1_S1 + 95) = prefactor_z * *(b + 4 * OS1_S1 + 62) -
                                     p_over_q * *(b + 12 * OS1_S1 + 62);
            *(b + 4 * OS1_S1 + 96) = prefactor_z * *(b + 4 * OS1_S1 + 63) -
                                     p_over_q * *(b + 12 * OS1_S1 + 63) +
                                     one_over_two_q * *(b + 4 * OS1_S1 + 38);
            *(b + 4 * OS1_S1 + 97) = prefactor_y * *(b + 4 * OS1_S1 + 65) -
                                     p_over_q * *(b + 11 * OS1_S1 + 65);
            *(b + 4 * OS1_S1 + 98) =
                prefactor_x * *(b + 4 * OS1_S1 + 70) -
                p_over_q * *(b + 10 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 49);
            *(b + 4 * OS1_S1 + 99) =
                prefactor_x * *(b + 4 * OS1_S1 + 71) -
                p_over_q * *(b + 10 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 71) +
                one_over_two_q * *(b + 4 * OS1_S1 + 50);
            *(b + 4 * OS1_S1 + 100) = prefactor_z * *(b + 4 * OS1_S1 + 66) -
                                      p_over_q * *(b + 12 * OS1_S1 + 66);
            *(b + 4 * OS1_S1 + 101) = prefactor_z * *(b + 4 * OS1_S1 + 67) -
                                      p_over_q * *(b + 12 * OS1_S1 + 67) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 41);
            *(b + 4 * OS1_S1 + 102) = prefactor_y * *(b + 4 * OS1_S1 + 69) -
                                      p_over_q * *(b + 11 * OS1_S1 + 69) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 44);
            *(b + 4 * OS1_S1 + 103) = prefactor_y * *(b + 4 * OS1_S1 + 70) -
                                      p_over_q * *(b + 11 * OS1_S1 + 70);
            *(b + 4 * OS1_S1 + 104) =
                prefactor_x * *(b + 4 * OS1_S1 + 76) -
                p_over_q * *(b + 10 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 76) +
                one_over_two_q * *(b + 4 * OS1_S1 + 55);
            *(b + 4 * OS1_S1 + 105) =
                prefactor_x * *(b + 4 * OS1_S1 + 77) -
                p_over_q * *(b + 10 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 77);
            *(b + 4 * OS1_S1 + 106) = prefactor_z * *(b + 4 * OS1_S1 + 71) -
                                      p_over_q * *(b + 12 * OS1_S1 + 71);
            *(b + 4 * OS1_S1 + 107) =
                prefactor_x * *(b + 4 * OS1_S1 + 79) -
                p_over_q * *(b + 10 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 79);
            *(b + 4 * OS1_S1 + 108) =
                prefactor_x * *(b + 4 * OS1_S1 + 80) -
                p_over_q * *(b + 10 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 80);
            *(b + 4 * OS1_S1 + 109) =
                prefactor_x * *(b + 4 * OS1_S1 + 81) -
                p_over_q * *(b + 10 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 81);
            *(b + 4 * OS1_S1 + 110) = prefactor_y * *(b + 4 * OS1_S1 + 76) -
                                      p_over_q * *(b + 11 * OS1_S1 + 76);
            *(b + 4 * OS1_S1 + 111) =
                prefactor_x * *(b + 4 * OS1_S1 + 83) -
                p_over_q * *(b + 10 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 83);
            *(b + 4 * OS1_S1 + 112) =
                prefactor_y * *(b + 4 * OS1_S1 + 77) -
                p_over_q * *(b + 11 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 4 * OS1_S1 + 50);
            *(b + 4 * OS1_S1 + 113) = prefactor_z * *(b + 4 * OS1_S1 + 77) -
                                      p_over_q * *(b + 12 * OS1_S1 + 77);
            *(b + 4 * OS1_S1 + 114) = prefactor_z * *(b + 4 * OS1_S1 + 78) -
                                      p_over_q * *(b + 12 * OS1_S1 + 78) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 50);
            *(b + 4 * OS1_S1 + 115) =
                prefactor_z * *(b + 4 * OS1_S1 + 79) -
                p_over_q * *(b + 12 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 51);
            *(b + 4 * OS1_S1 + 116) =
                prefactor_y * *(b + 4 * OS1_S1 + 81) -
                p_over_q * *(b + 11 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 54);
            *(b + 4 * OS1_S1 + 117) = prefactor_y * *(b + 4 * OS1_S1 + 82) -
                                      p_over_q * *(b + 11 * OS1_S1 + 82) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 55);
            *(b + 4 * OS1_S1 + 118) = prefactor_y * *(b + 4 * OS1_S1 + 83) -
                                      p_over_q * *(b + 11 * OS1_S1 + 83);
            *(b + 4 * OS1_S1 + 119) =
                prefactor_z * *(b + 4 * OS1_S1 + 83) -
                p_over_q * *(b + 12 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 4 * OS1_S1 + 55);
            *(b + 5 * OS1_S1 + 84) =
                prefactor_x * *(b + 5 * OS1_S1 + 56) -
                p_over_q * *(b + 11 * OS1_S1 + 56) +
                one_over_two_q * *(b + 2 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 5 * OS1_S1 + 35);
            *(b + 5 * OS1_S1 + 85) = prefactor_y * *(b + 5 * OS1_S1 + 56) -
                                     p_over_q * *(b + 13 * OS1_S1 + 56) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 56);
            *(b + 5 * OS1_S1 + 86) = prefactor_z * *(b + 5 * OS1_S1 + 56) -
                                     p_over_q * *(b + 14 * OS1_S1 + 56);
            *(b + 5 * OS1_S1 + 87) = prefactor_y * *(b + 5 * OS1_S1 + 57) -
                                     p_over_q * *(b + 13 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 35);
            *(b + 5 * OS1_S1 + 88) = prefactor_z * *(b + 5 * OS1_S1 + 57) -
                                     p_over_q * *(b + 14 * OS1_S1 + 57);
            *(b + 5 * OS1_S1 + 89) = prefactor_z * *(b + 5 * OS1_S1 + 58) -
                                     p_over_q * *(b + 14 * OS1_S1 + 58) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 35);
            *(b + 5 * OS1_S1 + 90) =
                prefactor_y * *(b + 5 * OS1_S1 + 59) -
                p_over_q * *(b + 13 * OS1_S1 + 59) +
                one_over_two_q * *(b + 1 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 36);
            *(b + 5 * OS1_S1 + 91) = prefactor_z * *(b + 5 * OS1_S1 + 59) -
                                     p_over_q * *(b + 14 * OS1_S1 + 59);
            *(b + 5 * OS1_S1 + 92) = prefactor_y * *(b + 5 * OS1_S1 + 61) -
                                     p_over_q * *(b + 13 * OS1_S1 + 61) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 61);
            *(b + 5 * OS1_S1 + 93) =
                prefactor_z * *(b + 5 * OS1_S1 + 61) -
                p_over_q * *(b + 14 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 37);
            *(b + 5 * OS1_S1 + 94) =
                prefactor_x * *(b + 5 * OS1_S1 + 66) -
                p_over_q * *(b + 11 * OS1_S1 + 66) +
                one_over_two_q * *(b + 2 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 45);
            *(b + 5 * OS1_S1 + 95) = prefactor_z * *(b + 5 * OS1_S1 + 62) -
                                     p_over_q * *(b + 14 * OS1_S1 + 62);
            *(b + 5 * OS1_S1 + 96) = prefactor_z * *(b + 5 * OS1_S1 + 63) -
                                     p_over_q * *(b + 14 * OS1_S1 + 63) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 38);
            *(b + 5 * OS1_S1 + 97) = prefactor_y * *(b + 5 * OS1_S1 + 65) -
                                     p_over_q * *(b + 13 * OS1_S1 + 65) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 65);
            *(b + 5 * OS1_S1 + 98) =
                prefactor_x * *(b + 5 * OS1_S1 + 70) -
                p_over_q * *(b + 11 * OS1_S1 + 70) +
                one_over_two_q * *(b + 2 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 49);
            *(b + 5 * OS1_S1 + 99) = prefactor_x * *(b + 5 * OS1_S1 + 71) -
                                     p_over_q * *(b + 11 * OS1_S1 + 71) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 71) +
                                     one_over_two_q * *(b + 5 * OS1_S1 + 50);
            *(b + 5 * OS1_S1 + 100) = prefactor_z * *(b + 5 * OS1_S1 + 66) -
                                      p_over_q * *(b + 14 * OS1_S1 + 66);
            *(b + 5 * OS1_S1 + 101) = prefactor_z * *(b + 5 * OS1_S1 + 67) -
                                      p_over_q * *(b + 14 * OS1_S1 + 67) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 41);
            *(b + 5 * OS1_S1 + 102) = prefactor_y * *(b + 5 * OS1_S1 + 69) -
                                      p_over_q * *(b + 13 * OS1_S1 + 69) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 69) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 44);
            *(b + 5 * OS1_S1 + 103) = prefactor_y * *(b + 5 * OS1_S1 + 70) -
                                      p_over_q * *(b + 13 * OS1_S1 + 70) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 70);
            *(b + 5 * OS1_S1 + 104) = prefactor_x * *(b + 5 * OS1_S1 + 76) -
                                      p_over_q * *(b + 11 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 55);
            *(b + 5 * OS1_S1 + 105) = prefactor_x * *(b + 5 * OS1_S1 + 77) -
                                      p_over_q * *(b + 11 * OS1_S1 + 77) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 77);
            *(b + 5 * OS1_S1 + 106) = prefactor_z * *(b + 5 * OS1_S1 + 71) -
                                      p_over_q * *(b + 14 * OS1_S1 + 71);
            *(b + 5 * OS1_S1 + 107) = prefactor_x * *(b + 5 * OS1_S1 + 79) -
                                      p_over_q * *(b + 11 * OS1_S1 + 79) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 79);
            *(b + 5 * OS1_S1 + 108) = prefactor_x * *(b + 5 * OS1_S1 + 80) -
                                      p_over_q * *(b + 11 * OS1_S1 + 80) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 80);
            *(b + 5 * OS1_S1 + 109) = prefactor_x * *(b + 5 * OS1_S1 + 81) -
                                      p_over_q * *(b + 11 * OS1_S1 + 81) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 81);
            *(b + 5 * OS1_S1 + 110) = prefactor_y * *(b + 5 * OS1_S1 + 76) -
                                      p_over_q * *(b + 13 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 76);
            *(b + 5 * OS1_S1 + 111) = prefactor_x * *(b + 5 * OS1_S1 + 83) -
                                      p_over_q * *(b + 11 * OS1_S1 + 83) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 83);
            *(b + 5 * OS1_S1 + 112) =
                prefactor_y * *(b + 5 * OS1_S1 + 77) -
                p_over_q * *(b + 13 * OS1_S1 + 77) +
                one_over_two_q * *(b + 1 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 5 * OS1_S1 + 50);
            *(b + 5 * OS1_S1 + 113) = prefactor_z * *(b + 5 * OS1_S1 + 77) -
                                      p_over_q * *(b + 14 * OS1_S1 + 77);
            *(b + 5 * OS1_S1 + 114) = prefactor_z * *(b + 5 * OS1_S1 + 78) -
                                      p_over_q * *(b + 14 * OS1_S1 + 78) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 50);
            *(b + 5 * OS1_S1 + 115) =
                prefactor_z * *(b + 5 * OS1_S1 + 79) -
                p_over_q * *(b + 14 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 51);
            *(b + 5 * OS1_S1 + 116) =
                prefactor_y * *(b + 5 * OS1_S1 + 81) -
                p_over_q * *(b + 13 * OS1_S1 + 81) +
                one_over_two_q * *(b + 1 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 54);
            *(b + 5 * OS1_S1 + 117) = prefactor_y * *(b + 5 * OS1_S1 + 82) -
                                      p_over_q * *(b + 13 * OS1_S1 + 82) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 82) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 55);
            *(b + 5 * OS1_S1 + 118) = prefactor_y * *(b + 5 * OS1_S1 + 83) -
                                      p_over_q * *(b + 13 * OS1_S1 + 83) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 83);
            *(b + 5 * OS1_S1 + 119) =
                prefactor_z * *(b + 5 * OS1_S1 + 83) -
                p_over_q * *(b + 14 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 5 * OS1_S1 + 55);
            *(b + 6 * OS1_S1 + 84) =
                prefactor_x * *(b + 6 * OS1_S1 + 56) -
                p_over_q * *(b + 12 * OS1_S1 + 56) +
                one_over_two_q * *(b + 3 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 6 * OS1_S1 + 35);
            *(b + 6 * OS1_S1 + 85) = prefactor_y * *(b + 6 * OS1_S1 + 56) -
                                     p_over_q * *(b + 14 * OS1_S1 + 56);
            *(b + 6 * OS1_S1 + 86) = prefactor_z * *(b + 6 * OS1_S1 + 56) -
                                     p_over_q * *(b + 15 * OS1_S1 + 56) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 56);
            *(b + 6 * OS1_S1 + 87) = prefactor_y * *(b + 6 * OS1_S1 + 57) -
                                     p_over_q * *(b + 14 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 35);
            *(b + 6 * OS1_S1 + 88) = prefactor_y * *(b + 6 * OS1_S1 + 58) -
                                     p_over_q * *(b + 14 * OS1_S1 + 58);
            *(b + 6 * OS1_S1 + 89) = prefactor_z * *(b + 6 * OS1_S1 + 58) -
                                     p_over_q * *(b + 15 * OS1_S1 + 58) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 58) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 35);
            *(b + 6 * OS1_S1 + 90) =
                prefactor_y * *(b + 6 * OS1_S1 + 59) -
                p_over_q * *(b + 14 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 36);
            *(b + 6 * OS1_S1 + 91) = prefactor_z * *(b + 6 * OS1_S1 + 59) -
                                     p_over_q * *(b + 15 * OS1_S1 + 59) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 59);
            *(b + 6 * OS1_S1 + 92) = prefactor_y * *(b + 6 * OS1_S1 + 61) -
                                     p_over_q * *(b + 14 * OS1_S1 + 61);
            *(b + 6 * OS1_S1 + 93) =
                prefactor_z * *(b + 6 * OS1_S1 + 61) -
                p_over_q * *(b + 15 * OS1_S1 + 61) +
                one_over_two_q * *(b + 1 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 37);
            *(b + 6 * OS1_S1 + 94) =
                prefactor_x * *(b + 6 * OS1_S1 + 66) -
                p_over_q * *(b + 12 * OS1_S1 + 66) +
                one_over_two_q * *(b + 3 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 45);
            *(b + 6 * OS1_S1 + 95) = prefactor_z * *(b + 6 * OS1_S1 + 62) -
                                     p_over_q * *(b + 15 * OS1_S1 + 62) +
                                     one_over_two_q * *(b + 1 * OS1_S1 + 62);
            *(b + 6 * OS1_S1 + 96) = prefactor_y * *(b + 6 * OS1_S1 + 64) -
                                     p_over_q * *(b + 14 * OS1_S1 + 64) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 40);
            *(b + 6 * OS1_S1 + 97) = prefactor_y * *(b + 6 * OS1_S1 + 65) -
                                     p_over_q * *(b + 14 * OS1_S1 + 65);
            *(b + 6 * OS1_S1 + 98) =
                prefactor_x * *(b + 6 * OS1_S1 + 70) -
                p_over_q * *(b + 12 * OS1_S1 + 70) +
                one_over_two_q * *(b + 3 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 49);
            *(b + 6 * OS1_S1 + 99) = prefactor_x * *(b + 6 * OS1_S1 + 71) -
                                     p_over_q * *(b + 12 * OS1_S1 + 71) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 71) +
                                     one_over_two_q * *(b + 6 * OS1_S1 + 50);
            *(b + 6 * OS1_S1 + 100) = prefactor_z * *(b + 6 * OS1_S1 + 66) -
                                      p_over_q * *(b + 15 * OS1_S1 + 66) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 66);
            *(b + 6 * OS1_S1 + 101) = prefactor_z * *(b + 6 * OS1_S1 + 67) -
                                      p_over_q * *(b + 15 * OS1_S1 + 67) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 67) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 41);
            *(b + 6 * OS1_S1 + 102) = prefactor_y * *(b + 6 * OS1_S1 + 69) -
                                      p_over_q * *(b + 14 * OS1_S1 + 69) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 44);
            *(b + 6 * OS1_S1 + 103) = prefactor_y * *(b + 6 * OS1_S1 + 70) -
                                      p_over_q * *(b + 14 * OS1_S1 + 70);
            *(b + 6 * OS1_S1 + 104) = prefactor_x * *(b + 6 * OS1_S1 + 76) -
                                      p_over_q * *(b + 12 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 55);
            *(b + 6 * OS1_S1 + 105) = prefactor_x * *(b + 6 * OS1_S1 + 77) -
                                      p_over_q * *(b + 12 * OS1_S1 + 77) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 77);
            *(b + 6 * OS1_S1 + 106) = prefactor_z * *(b + 6 * OS1_S1 + 71) -
                                      p_over_q * *(b + 15 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 71);
            *(b + 6 * OS1_S1 + 107) = prefactor_x * *(b + 6 * OS1_S1 + 79) -
                                      p_over_q * *(b + 12 * OS1_S1 + 79) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 79);
            *(b + 6 * OS1_S1 + 108) = prefactor_x * *(b + 6 * OS1_S1 + 80) -
                                      p_over_q * *(b + 12 * OS1_S1 + 80) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 80);
            *(b + 6 * OS1_S1 + 109) = prefactor_x * *(b + 6 * OS1_S1 + 81) -
                                      p_over_q * *(b + 12 * OS1_S1 + 81) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 81);
            *(b + 6 * OS1_S1 + 110) = prefactor_y * *(b + 6 * OS1_S1 + 76) -
                                      p_over_q * *(b + 14 * OS1_S1 + 76);
            *(b + 6 * OS1_S1 + 111) = prefactor_x * *(b + 6 * OS1_S1 + 83) -
                                      p_over_q * *(b + 12 * OS1_S1 + 83) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 83);
            *(b + 6 * OS1_S1 + 112) =
                prefactor_y * *(b + 6 * OS1_S1 + 77) -
                p_over_q * *(b + 14 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 6 * OS1_S1 + 50);
            *(b + 6 * OS1_S1 + 113) = prefactor_z * *(b + 6 * OS1_S1 + 77) -
                                      p_over_q * *(b + 15 * OS1_S1 + 77) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 77);
            *(b + 6 * OS1_S1 + 114) = prefactor_z * *(b + 6 * OS1_S1 + 78) -
                                      p_over_q * *(b + 15 * OS1_S1 + 78) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 78) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 50);
            *(b + 6 * OS1_S1 + 115) =
                prefactor_z * *(b + 6 * OS1_S1 + 79) -
                p_over_q * *(b + 15 * OS1_S1 + 79) +
                one_over_two_q * *(b + 1 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 51);
            *(b + 6 * OS1_S1 + 116) =
                prefactor_y * *(b + 6 * OS1_S1 + 81) -
                p_over_q * *(b + 14 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 54);
            *(b + 6 * OS1_S1 + 117) = prefactor_y * *(b + 6 * OS1_S1 + 82) -
                                      p_over_q * *(b + 14 * OS1_S1 + 82) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 55);
            *(b + 6 * OS1_S1 + 118) = prefactor_y * *(b + 6 * OS1_S1 + 83) -
                                      p_over_q * *(b + 14 * OS1_S1 + 83);
            *(b + 6 * OS1_S1 + 119) =
                prefactor_z * *(b + 6 * OS1_S1 + 83) -
                p_over_q * *(b + 15 * OS1_S1 + 83) +
                one_over_two_q * *(b + 1 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 6 * OS1_S1 + 55);
            *(b + 7 * OS1_S1 + 84) =
                prefactor_x * *(b + 7 * OS1_S1 + 56) -
                p_over_q * *(b + 13 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 7 * OS1_S1 + 35);
            *(b + 7 * OS1_S1 + 85) =
                prefactor_y * *(b + 7 * OS1_S1 + 56) -
                p_over_q * *(b + 16 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 56);
            *(b + 7 * OS1_S1 + 86) = prefactor_z * *(b + 7 * OS1_S1 + 56) -
                                     p_over_q * *(b + 17 * OS1_S1 + 56);
            *(b + 7 * OS1_S1 + 87) =
                prefactor_y * *(b + 7 * OS1_S1 + 57) -
                p_over_q * *(b + 16 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 57) +
                one_over_two_q * *(b + 7 * OS1_S1 + 35);
            *(b + 7 * OS1_S1 + 88) = prefactor_z * *(b + 7 * OS1_S1 + 57) -
                                     p_over_q * *(b + 17 * OS1_S1 + 57);
            *(b + 7 * OS1_S1 + 89) = prefactor_z * *(b + 7 * OS1_S1 + 58) -
                                     p_over_q * *(b + 17 * OS1_S1 + 58) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 35);
            *(b + 7 * OS1_S1 + 90) =
                prefactor_y * *(b + 7 * OS1_S1 + 59) -
                p_over_q * *(b + 16 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 36);
            *(b + 7 * OS1_S1 + 91) = prefactor_z * *(b + 7 * OS1_S1 + 59) -
                                     p_over_q * *(b + 17 * OS1_S1 + 59);
            *(b + 7 * OS1_S1 + 92) =
                prefactor_y * *(b + 7 * OS1_S1 + 61) -
                p_over_q * *(b + 16 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 61);
            *(b + 7 * OS1_S1 + 93) =
                prefactor_z * *(b + 7 * OS1_S1 + 61) -
                p_over_q * *(b + 17 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 37);
            *(b + 7 * OS1_S1 + 94) =
                prefactor_x * *(b + 7 * OS1_S1 + 66) -
                p_over_q * *(b + 13 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 45);
            *(b + 7 * OS1_S1 + 95) = prefactor_z * *(b + 7 * OS1_S1 + 62) -
                                     p_over_q * *(b + 17 * OS1_S1 + 62);
            *(b + 7 * OS1_S1 + 96) = prefactor_z * *(b + 7 * OS1_S1 + 63) -
                                     p_over_q * *(b + 17 * OS1_S1 + 63) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 38);
            *(b + 7 * OS1_S1 + 97) =
                prefactor_y * *(b + 7 * OS1_S1 + 65) -
                p_over_q * *(b + 16 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 65);
            *(b + 7 * OS1_S1 + 98) =
                prefactor_x * *(b + 7 * OS1_S1 + 70) -
                p_over_q * *(b + 13 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 49);
            *(b + 7 * OS1_S1 + 99) = prefactor_x * *(b + 7 * OS1_S1 + 71) -
                                     p_over_q * *(b + 13 * OS1_S1 + 71) +
                                     one_over_two_q * *(b + 7 * OS1_S1 + 50);
            *(b + 7 * OS1_S1 + 100) = prefactor_z * *(b + 7 * OS1_S1 + 66) -
                                      p_over_q * *(b + 17 * OS1_S1 + 66);
            *(b + 7 * OS1_S1 + 101) = prefactor_z * *(b + 7 * OS1_S1 + 67) -
                                      p_over_q * *(b + 17 * OS1_S1 + 67) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 41);
            *(b + 7 * OS1_S1 + 102) = prefactor_x * *(b + 7 * OS1_S1 + 74) -
                                      p_over_q * *(b + 13 * OS1_S1 + 74) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 53);
            *(b + 7 * OS1_S1 + 103) =
                prefactor_y * *(b + 7 * OS1_S1 + 70) -
                p_over_q * *(b + 16 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 70);
            *(b + 7 * OS1_S1 + 104) = prefactor_x * *(b + 7 * OS1_S1 + 76) -
                                      p_over_q * *(b + 13 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 55);
            *(b + 7 * OS1_S1 + 105) = prefactor_x * *(b + 7 * OS1_S1 + 77) -
                                      p_over_q * *(b + 13 * OS1_S1 + 77);
            *(b + 7 * OS1_S1 + 106) = prefactor_z * *(b + 7 * OS1_S1 + 71) -
                                      p_over_q * *(b + 17 * OS1_S1 + 71);
            *(b + 7 * OS1_S1 + 107) = prefactor_x * *(b + 7 * OS1_S1 + 79) -
                                      p_over_q * *(b + 13 * OS1_S1 + 79);
            *(b + 7 * OS1_S1 + 108) = prefactor_x * *(b + 7 * OS1_S1 + 80) -
                                      p_over_q * *(b + 13 * OS1_S1 + 80);
            *(b + 7 * OS1_S1 + 109) = prefactor_x * *(b + 7 * OS1_S1 + 81) -
                                      p_over_q * *(b + 13 * OS1_S1 + 81);
            *(b + 7 * OS1_S1 + 110) = prefactor_x * *(b + 7 * OS1_S1 + 82) -
                                      p_over_q * *(b + 13 * OS1_S1 + 82);
            *(b + 7 * OS1_S1 + 111) = prefactor_x * *(b + 7 * OS1_S1 + 83) -
                                      p_over_q * *(b + 13 * OS1_S1 + 83);
            *(b + 7 * OS1_S1 + 112) =
                prefactor_y * *(b + 7 * OS1_S1 + 77) -
                p_over_q * *(b + 16 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 7 * OS1_S1 + 50);
            *(b + 7 * OS1_S1 + 113) = prefactor_z * *(b + 7 * OS1_S1 + 77) -
                                      p_over_q * *(b + 17 * OS1_S1 + 77);
            *(b + 7 * OS1_S1 + 114) = prefactor_z * *(b + 7 * OS1_S1 + 78) -
                                      p_over_q * *(b + 17 * OS1_S1 + 78) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 50);
            *(b + 7 * OS1_S1 + 115) =
                prefactor_z * *(b + 7 * OS1_S1 + 79) -
                p_over_q * *(b + 17 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 51);
            *(b + 7 * OS1_S1 + 116) =
                prefactor_y * *(b + 7 * OS1_S1 + 81) -
                p_over_q * *(b + 16 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 54);
            *(b + 7 * OS1_S1 + 117) =
                prefactor_y * *(b + 7 * OS1_S1 + 82) -
                p_over_q * *(b + 16 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 82) +
                one_over_two_q * *(b + 7 * OS1_S1 + 55);
            *(b + 7 * OS1_S1 + 118) =
                prefactor_y * *(b + 7 * OS1_S1 + 83) -
                p_over_q * *(b + 16 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 83);
            *(b + 7 * OS1_S1 + 119) =
                prefactor_z * *(b + 7 * OS1_S1 + 83) -
                p_over_q * *(b + 17 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 7 * OS1_S1 + 55);
            *(b + 8 * OS1_S1 + 84) =
                prefactor_x * *(b + 8 * OS1_S1 + 56) -
                p_over_q * *(b + 14 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 8 * OS1_S1 + 35);
            *(b + 8 * OS1_S1 + 85) = prefactor_y * *(b + 8 * OS1_S1 + 56) -
                                     p_over_q * *(b + 17 * OS1_S1 + 56) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 56);
            *(b + 8 * OS1_S1 + 86) = prefactor_z * *(b + 8 * OS1_S1 + 56) -
                                     p_over_q * *(b + 18 * OS1_S1 + 56) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 56);
            *(b + 8 * OS1_S1 + 87) = prefactor_y * *(b + 8 * OS1_S1 + 57) -
                                     p_over_q * *(b + 17 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 35);
            *(b + 8 * OS1_S1 + 88) = prefactor_z * *(b + 8 * OS1_S1 + 57) -
                                     p_over_q * *(b + 18 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 57);
            *(b + 8 * OS1_S1 + 89) = prefactor_z * *(b + 8 * OS1_S1 + 58) -
                                     p_over_q * *(b + 18 * OS1_S1 + 58) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 58) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 35);
            *(b + 8 * OS1_S1 + 90) =
                prefactor_y * *(b + 8 * OS1_S1 + 59) -
                p_over_q * *(b + 17 * OS1_S1 + 59) +
                one_over_two_q * *(b + 3 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 36);
            *(b + 8 * OS1_S1 + 91) = prefactor_z * *(b + 8 * OS1_S1 + 59) -
                                     p_over_q * *(b + 18 * OS1_S1 + 59) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 59);
            *(b + 8 * OS1_S1 + 92) = prefactor_y * *(b + 8 * OS1_S1 + 61) -
                                     p_over_q * *(b + 17 * OS1_S1 + 61) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 61);
            *(b + 8 * OS1_S1 + 93) =
                prefactor_z * *(b + 8 * OS1_S1 + 61) -
                p_over_q * *(b + 18 * OS1_S1 + 61) +
                one_over_two_q * *(b + 2 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 37);
            *(b + 8 * OS1_S1 + 94) =
                prefactor_x * *(b + 8 * OS1_S1 + 66) -
                p_over_q * *(b + 14 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 45);
            *(b + 8 * OS1_S1 + 95) = prefactor_z * *(b + 8 * OS1_S1 + 62) -
                                     p_over_q * *(b + 18 * OS1_S1 + 62) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 62);
            *(b + 8 * OS1_S1 + 96) = prefactor_z * *(b + 8 * OS1_S1 + 63) -
                                     p_over_q * *(b + 18 * OS1_S1 + 63) +
                                     one_over_two_q * *(b + 2 * OS1_S1 + 63) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 38);
            *(b + 8 * OS1_S1 + 97) = prefactor_y * *(b + 8 * OS1_S1 + 65) -
                                     p_over_q * *(b + 17 * OS1_S1 + 65) +
                                     one_over_two_q * *(b + 3 * OS1_S1 + 65);
            *(b + 8 * OS1_S1 + 98) =
                prefactor_x * *(b + 8 * OS1_S1 + 70) -
                p_over_q * *(b + 14 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 49);
            *(b + 8 * OS1_S1 + 99) = prefactor_x * *(b + 8 * OS1_S1 + 71) -
                                     p_over_q * *(b + 14 * OS1_S1 + 71) +
                                     one_over_two_q * *(b + 8 * OS1_S1 + 50);
            *(b + 8 * OS1_S1 + 100) = prefactor_z * *(b + 8 * OS1_S1 + 66) -
                                      p_over_q * *(b + 18 * OS1_S1 + 66) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 66);
            *(b + 8 * OS1_S1 + 101) = prefactor_x * *(b + 8 * OS1_S1 + 73) -
                                      p_over_q * *(b + 14 * OS1_S1 + 73) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 52);
            *(b + 8 * OS1_S1 + 102) = prefactor_x * *(b + 8 * OS1_S1 + 74) -
                                      p_over_q * *(b + 14 * OS1_S1 + 74) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 53);
            *(b + 8 * OS1_S1 + 103) = prefactor_y * *(b + 8 * OS1_S1 + 70) -
                                      p_over_q * *(b + 17 * OS1_S1 + 70) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 70);
            *(b + 8 * OS1_S1 + 104) = prefactor_x * *(b + 8 * OS1_S1 + 76) -
                                      p_over_q * *(b + 14 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 55);
            *(b + 8 * OS1_S1 + 105) = prefactor_x * *(b + 8 * OS1_S1 + 77) -
                                      p_over_q * *(b + 14 * OS1_S1 + 77);
            *(b + 8 * OS1_S1 + 106) = prefactor_x * *(b + 8 * OS1_S1 + 78) -
                                      p_over_q * *(b + 14 * OS1_S1 + 78);
            *(b + 8 * OS1_S1 + 107) = prefactor_x * *(b + 8 * OS1_S1 + 79) -
                                      p_over_q * *(b + 14 * OS1_S1 + 79);
            *(b + 8 * OS1_S1 + 108) = prefactor_x * *(b + 8 * OS1_S1 + 80) -
                                      p_over_q * *(b + 14 * OS1_S1 + 80);
            *(b + 8 * OS1_S1 + 109) = prefactor_x * *(b + 8 * OS1_S1 + 81) -
                                      p_over_q * *(b + 14 * OS1_S1 + 81);
            *(b + 8 * OS1_S1 + 110) = prefactor_x * *(b + 8 * OS1_S1 + 82) -
                                      p_over_q * *(b + 14 * OS1_S1 + 82);
            *(b + 8 * OS1_S1 + 111) = prefactor_x * *(b + 8 * OS1_S1 + 83) -
                                      p_over_q * *(b + 14 * OS1_S1 + 83);
            *(b + 8 * OS1_S1 + 112) =
                prefactor_y * *(b + 8 * OS1_S1 + 77) -
                p_over_q * *(b + 17 * OS1_S1 + 77) +
                one_over_two_q * *(b + 3 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 8 * OS1_S1 + 50);
            *(b + 8 * OS1_S1 + 113) = prefactor_z * *(b + 8 * OS1_S1 + 77) -
                                      p_over_q * *(b + 18 * OS1_S1 + 77) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 77);
            *(b + 8 * OS1_S1 + 114) = prefactor_z * *(b + 8 * OS1_S1 + 78) -
                                      p_over_q * *(b + 18 * OS1_S1 + 78) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 78) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 50);
            *(b + 8 * OS1_S1 + 115) =
                prefactor_z * *(b + 8 * OS1_S1 + 79) -
                p_over_q * *(b + 18 * OS1_S1 + 79) +
                one_over_two_q * *(b + 2 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 51);
            *(b + 8 * OS1_S1 + 116) =
                prefactor_y * *(b + 8 * OS1_S1 + 81) -
                p_over_q * *(b + 17 * OS1_S1 + 81) +
                one_over_two_q * *(b + 3 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 54);
            *(b + 8 * OS1_S1 + 117) = prefactor_y * *(b + 8 * OS1_S1 + 82) -
                                      p_over_q * *(b + 17 * OS1_S1 + 82) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 82) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 55);
            *(b + 8 * OS1_S1 + 118) = prefactor_y * *(b + 8 * OS1_S1 + 83) -
                                      p_over_q * *(b + 17 * OS1_S1 + 83) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 83);
            *(b + 8 * OS1_S1 + 119) =
                prefactor_z * *(b + 8 * OS1_S1 + 83) -
                p_over_q * *(b + 18 * OS1_S1 + 83) +
                one_over_two_q * *(b + 2 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 8 * OS1_S1 + 55);
            *(b + 9 * OS1_S1 + 84) =
                prefactor_x * *(b + 9 * OS1_S1 + 56) -
                p_over_q * *(b + 15 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 9 * OS1_S1 + 35);
            *(b + 9 * OS1_S1 + 85) = prefactor_y * *(b + 9 * OS1_S1 + 56) -
                                     p_over_q * *(b + 18 * OS1_S1 + 56);
            *(b + 9 * OS1_S1 + 86) =
                prefactor_z * *(b + 9 * OS1_S1 + 56) -
                p_over_q * *(b + 19 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 56);
            *(b + 9 * OS1_S1 + 87) = prefactor_y * *(b + 9 * OS1_S1 + 57) -
                                     p_over_q * *(b + 18 * OS1_S1 + 57) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 35);
            *(b + 9 * OS1_S1 + 88) = prefactor_y * *(b + 9 * OS1_S1 + 58) -
                                     p_over_q * *(b + 18 * OS1_S1 + 58);
            *(b + 9 * OS1_S1 + 89) =
                prefactor_z * *(b + 9 * OS1_S1 + 58) -
                p_over_q * *(b + 19 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 58) +
                one_over_two_q * *(b + 9 * OS1_S1 + 35);
            *(b + 9 * OS1_S1 + 90) =
                prefactor_y * *(b + 9 * OS1_S1 + 59) -
                p_over_q * *(b + 18 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 36);
            *(b + 9 * OS1_S1 + 91) =
                prefactor_z * *(b + 9 * OS1_S1 + 59) -
                p_over_q * *(b + 19 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 59);
            *(b + 9 * OS1_S1 + 92) = prefactor_y * *(b + 9 * OS1_S1 + 61) -
                                     p_over_q * *(b + 18 * OS1_S1 + 61);
            *(b + 9 * OS1_S1 + 93) =
                prefactor_z * *(b + 9 * OS1_S1 + 61) -
                p_over_q * *(b + 19 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 37);
            *(b + 9 * OS1_S1 + 94) =
                prefactor_x * *(b + 9 * OS1_S1 + 66) -
                p_over_q * *(b + 15 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 45);
            *(b + 9 * OS1_S1 + 95) =
                prefactor_z * *(b + 9 * OS1_S1 + 62) -
                p_over_q * *(b + 19 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 62);
            *(b + 9 * OS1_S1 + 96) = prefactor_y * *(b + 9 * OS1_S1 + 64) -
                                     p_over_q * *(b + 18 * OS1_S1 + 64) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 40);
            *(b + 9 * OS1_S1 + 97) = prefactor_y * *(b + 9 * OS1_S1 + 65) -
                                     p_over_q * *(b + 18 * OS1_S1 + 65);
            *(b + 9 * OS1_S1 + 98) =
                prefactor_x * *(b + 9 * OS1_S1 + 70) -
                p_over_q * *(b + 15 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 49);
            *(b + 9 * OS1_S1 + 99) = prefactor_x * *(b + 9 * OS1_S1 + 71) -
                                     p_over_q * *(b + 15 * OS1_S1 + 71) +
                                     one_over_two_q * *(b + 9 * OS1_S1 + 50);
            *(b + 9 * OS1_S1 + 100) =
                prefactor_z * *(b + 9 * OS1_S1 + 66) -
                p_over_q * *(b + 19 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 66);
            *(b + 9 * OS1_S1 + 101) = prefactor_x * *(b + 9 * OS1_S1 + 73) -
                                      p_over_q * *(b + 15 * OS1_S1 + 73) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 52);
            *(b + 9 * OS1_S1 + 102) = prefactor_y * *(b + 9 * OS1_S1 + 69) -
                                      p_over_q * *(b + 18 * OS1_S1 + 69) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 44);
            *(b + 9 * OS1_S1 + 103) = prefactor_y * *(b + 9 * OS1_S1 + 70) -
                                      p_over_q * *(b + 18 * OS1_S1 + 70);
            *(b + 9 * OS1_S1 + 104) = prefactor_x * *(b + 9 * OS1_S1 + 76) -
                                      p_over_q * *(b + 15 * OS1_S1 + 76) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 55);
            *(b + 9 * OS1_S1 + 105) = prefactor_x * *(b + 9 * OS1_S1 + 77) -
                                      p_over_q * *(b + 15 * OS1_S1 + 77);
            *(b + 9 * OS1_S1 + 106) = prefactor_x * *(b + 9 * OS1_S1 + 78) -
                                      p_over_q * *(b + 15 * OS1_S1 + 78);
            *(b + 9 * OS1_S1 + 107) = prefactor_x * *(b + 9 * OS1_S1 + 79) -
                                      p_over_q * *(b + 15 * OS1_S1 + 79);
            *(b + 9 * OS1_S1 + 108) = prefactor_x * *(b + 9 * OS1_S1 + 80) -
                                      p_over_q * *(b + 15 * OS1_S1 + 80);
            *(b + 9 * OS1_S1 + 109) = prefactor_x * *(b + 9 * OS1_S1 + 81) -
                                      p_over_q * *(b + 15 * OS1_S1 + 81);
            *(b + 9 * OS1_S1 + 110) = prefactor_y * *(b + 9 * OS1_S1 + 76) -
                                      p_over_q * *(b + 18 * OS1_S1 + 76);
            *(b + 9 * OS1_S1 + 111) = prefactor_x * *(b + 9 * OS1_S1 + 83) -
                                      p_over_q * *(b + 15 * OS1_S1 + 83);
            *(b + 9 * OS1_S1 + 112) =
                prefactor_y * *(b + 9 * OS1_S1 + 77) -
                p_over_q * *(b + 18 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 9 * OS1_S1 + 50);
            *(b + 9 * OS1_S1 + 113) =
                prefactor_z * *(b + 9 * OS1_S1 + 77) -
                p_over_q * *(b + 19 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 77);
            *(b + 9 * OS1_S1 + 114) =
                prefactor_z * *(b + 9 * OS1_S1 + 78) -
                p_over_q * *(b + 19 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 78) +
                one_over_two_q * *(b + 9 * OS1_S1 + 50);
            *(b + 9 * OS1_S1 + 115) =
                prefactor_z * *(b + 9 * OS1_S1 + 79) -
                p_over_q * *(b + 19 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 51);
            *(b + 9 * OS1_S1 + 116) =
                prefactor_y * *(b + 9 * OS1_S1 + 81) -
                p_over_q * *(b + 18 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 54);
            *(b + 9 * OS1_S1 + 117) = prefactor_y * *(b + 9 * OS1_S1 + 82) -
                                      p_over_q * *(b + 18 * OS1_S1 + 82) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 55);
            *(b + 9 * OS1_S1 + 118) = prefactor_y * *(b + 9 * OS1_S1 + 83) -
                                      p_over_q * *(b + 18 * OS1_S1 + 83);
            *(b + 9 * OS1_S1 + 119) =
                prefactor_z * *(b + 9 * OS1_S1 + 83) -
                p_over_q * *(b + 19 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 9 * OS1_S1 + 55);
            return;
        }
        void transfer_3_7(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 10 * OS1_S1 + 84) =
                prefactor_x * *(b + 10 * OS1_S1 + 56) -
                p_over_q * *(b + 20 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 10 * OS1_S1 + 35);
            *(b + 10 * OS1_S1 + 85) = prefactor_y * *(b + 10 * OS1_S1 + 56) -
                                      p_over_q * *(b + 21 * OS1_S1 + 56);
            *(b + 10 * OS1_S1 + 86) = prefactor_z * *(b + 10 * OS1_S1 + 56) -
                                      p_over_q * *(b + 22 * OS1_S1 + 56);
            *(b + 10 * OS1_S1 + 87) = prefactor_y * *(b + 10 * OS1_S1 + 57) -
                                      p_over_q * *(b + 21 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 35);
            *(b + 10 * OS1_S1 + 88) = prefactor_z * *(b + 10 * OS1_S1 + 57) -
                                      p_over_q * *(b + 22 * OS1_S1 + 57);
            *(b + 10 * OS1_S1 + 89) = prefactor_z * *(b + 10 * OS1_S1 + 58) -
                                      p_over_q * *(b + 22 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 35);
            *(b + 10 * OS1_S1 + 90) =
                prefactor_y * *(b + 10 * OS1_S1 + 59) -
                p_over_q * *(b + 21 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 36);
            *(b + 10 * OS1_S1 + 91) = prefactor_z * *(b + 10 * OS1_S1 + 59) -
                                      p_over_q * *(b + 22 * OS1_S1 + 59);
            *(b + 10 * OS1_S1 + 92) = prefactor_y * *(b + 10 * OS1_S1 + 61) -
                                      p_over_q * *(b + 21 * OS1_S1 + 61);
            *(b + 10 * OS1_S1 + 93) =
                prefactor_z * *(b + 10 * OS1_S1 + 61) -
                p_over_q * *(b + 22 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 37);
            *(b + 10 * OS1_S1 + 94) =
                prefactor_x * *(b + 10 * OS1_S1 + 66) -
                p_over_q * *(b + 20 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 45);
            *(b + 10 * OS1_S1 + 95) = prefactor_z * *(b + 10 * OS1_S1 + 62) -
                                      p_over_q * *(b + 22 * OS1_S1 + 62);
            *(b + 10 * OS1_S1 + 96) = prefactor_z * *(b + 10 * OS1_S1 + 63) -
                                      p_over_q * *(b + 22 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 38);
            *(b + 10 * OS1_S1 + 97) = prefactor_y * *(b + 10 * OS1_S1 + 65) -
                                      p_over_q * *(b + 21 * OS1_S1 + 65);
            *(b + 10 * OS1_S1 + 98) =
                prefactor_x * *(b + 10 * OS1_S1 + 70) -
                p_over_q * *(b + 20 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 49);
            *(b + 10 * OS1_S1 + 99) =
                prefactor_x * *(b + 10 * OS1_S1 + 71) -
                p_over_q * *(b + 20 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 71) +
                one_over_two_q * *(b + 10 * OS1_S1 + 50);
            *(b + 10 * OS1_S1 + 100) = prefactor_z * *(b + 10 * OS1_S1 + 66) -
                                       p_over_q * *(b + 22 * OS1_S1 + 66);
            *(b + 10 * OS1_S1 + 101) = prefactor_z * *(b + 10 * OS1_S1 + 67) -
                                       p_over_q * *(b + 22 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 41);
            *(b + 10 * OS1_S1 + 102) = prefactor_y * *(b + 10 * OS1_S1 + 69) -
                                       p_over_q * *(b + 21 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 44);
            *(b + 10 * OS1_S1 + 103) = prefactor_y * *(b + 10 * OS1_S1 + 70) -
                                       p_over_q * *(b + 21 * OS1_S1 + 70);
            *(b + 10 * OS1_S1 + 104) =
                prefactor_x * *(b + 10 * OS1_S1 + 76) -
                p_over_q * *(b + 20 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 76) +
                one_over_two_q * *(b + 10 * OS1_S1 + 55);
            *(b + 10 * OS1_S1 + 105) =
                prefactor_x * *(b + 10 * OS1_S1 + 77) -
                p_over_q * *(b + 20 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 77);
            *(b + 10 * OS1_S1 + 106) = prefactor_z * *(b + 10 * OS1_S1 + 71) -
                                       p_over_q * *(b + 22 * OS1_S1 + 71);
            *(b + 10 * OS1_S1 + 107) =
                prefactor_x * *(b + 10 * OS1_S1 + 79) -
                p_over_q * *(b + 20 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 79);
            *(b + 10 * OS1_S1 + 108) =
                prefactor_x * *(b + 10 * OS1_S1 + 80) -
                p_over_q * *(b + 20 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 80);
            *(b + 10 * OS1_S1 + 109) =
                prefactor_x * *(b + 10 * OS1_S1 + 81) -
                p_over_q * *(b + 20 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 81);
            *(b + 10 * OS1_S1 + 110) = prefactor_y * *(b + 10 * OS1_S1 + 76) -
                                       p_over_q * *(b + 21 * OS1_S1 + 76);
            *(b + 10 * OS1_S1 + 111) =
                prefactor_x * *(b + 10 * OS1_S1 + 83) -
                p_over_q * *(b + 20 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 83);
            *(b + 10 * OS1_S1 + 112) =
                prefactor_y * *(b + 10 * OS1_S1 + 77) -
                p_over_q * *(b + 21 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 10 * OS1_S1 + 50);
            *(b + 10 * OS1_S1 + 113) = prefactor_z * *(b + 10 * OS1_S1 + 77) -
                                       p_over_q * *(b + 22 * OS1_S1 + 77);
            *(b + 10 * OS1_S1 + 114) = prefactor_z * *(b + 10 * OS1_S1 + 78) -
                                       p_over_q * *(b + 22 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 50);
            *(b + 10 * OS1_S1 + 115) =
                prefactor_z * *(b + 10 * OS1_S1 + 79) -
                p_over_q * *(b + 22 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 51);
            *(b + 10 * OS1_S1 + 116) =
                prefactor_y * *(b + 10 * OS1_S1 + 81) -
                p_over_q * *(b + 21 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 54);
            *(b + 10 * OS1_S1 + 117) = prefactor_y * *(b + 10 * OS1_S1 + 82) -
                                       p_over_q * *(b + 21 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 55);
            *(b + 10 * OS1_S1 + 118) = prefactor_y * *(b + 10 * OS1_S1 + 83) -
                                       p_over_q * *(b + 21 * OS1_S1 + 83);
            *(b + 10 * OS1_S1 + 119) =
                prefactor_z * *(b + 10 * OS1_S1 + 83) -
                p_over_q * *(b + 22 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 10 * OS1_S1 + 55);
            *(b + 11 * OS1_S1 + 84) =
                prefactor_x * *(b + 11 * OS1_S1 + 56) -
                p_over_q * *(b + 21 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 11 * OS1_S1 + 35);
            *(b + 11 * OS1_S1 + 85) = prefactor_y * *(b + 11 * OS1_S1 + 56) -
                                      p_over_q * *(b + 23 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 56);
            *(b + 11 * OS1_S1 + 86) = prefactor_z * *(b + 11 * OS1_S1 + 56) -
                                      p_over_q * *(b + 24 * OS1_S1 + 56);
            *(b + 11 * OS1_S1 + 87) = prefactor_y * *(b + 11 * OS1_S1 + 57) -
                                      p_over_q * *(b + 23 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 35);
            *(b + 11 * OS1_S1 + 88) = prefactor_z * *(b + 11 * OS1_S1 + 57) -
                                      p_over_q * *(b + 24 * OS1_S1 + 57);
            *(b + 11 * OS1_S1 + 89) = prefactor_z * *(b + 11 * OS1_S1 + 58) -
                                      p_over_q * *(b + 24 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 35);
            *(b + 11 * OS1_S1 + 90) =
                prefactor_y * *(b + 11 * OS1_S1 + 59) -
                p_over_q * *(b + 23 * OS1_S1 + 59) +
                one_over_two_q * *(b + 4 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 36);
            *(b + 11 * OS1_S1 + 91) = prefactor_z * *(b + 11 * OS1_S1 + 59) -
                                      p_over_q * *(b + 24 * OS1_S1 + 59);
            *(b + 11 * OS1_S1 + 92) = prefactor_y * *(b + 11 * OS1_S1 + 61) -
                                      p_over_q * *(b + 23 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 61);
            *(b + 11 * OS1_S1 + 93) =
                prefactor_z * *(b + 11 * OS1_S1 + 61) -
                p_over_q * *(b + 24 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 37);
            *(b + 11 * OS1_S1 + 94) =
                prefactor_x * *(b + 11 * OS1_S1 + 66) -
                p_over_q * *(b + 21 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 45);
            *(b + 11 * OS1_S1 + 95) = prefactor_z * *(b + 11 * OS1_S1 + 62) -
                                      p_over_q * *(b + 24 * OS1_S1 + 62);
            *(b + 11 * OS1_S1 + 96) = prefactor_z * *(b + 11 * OS1_S1 + 63) -
                                      p_over_q * *(b + 24 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 38);
            *(b + 11 * OS1_S1 + 97) = prefactor_y * *(b + 11 * OS1_S1 + 65) -
                                      p_over_q * *(b + 23 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 65);
            *(b + 11 * OS1_S1 + 98) =
                prefactor_x * *(b + 11 * OS1_S1 + 70) -
                p_over_q * *(b + 21 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 49);
            *(b + 11 * OS1_S1 + 99) =
                prefactor_x * *(b + 11 * OS1_S1 + 71) -
                p_over_q * *(b + 21 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 71) +
                one_over_two_q * *(b + 11 * OS1_S1 + 50);
            *(b + 11 * OS1_S1 + 100) = prefactor_z * *(b + 11 * OS1_S1 + 66) -
                                       p_over_q * *(b + 24 * OS1_S1 + 66);
            *(b + 11 * OS1_S1 + 101) = prefactor_z * *(b + 11 * OS1_S1 + 67) -
                                       p_over_q * *(b + 24 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 41);
            *(b + 11 * OS1_S1 + 102) = prefactor_y * *(b + 11 * OS1_S1 + 69) -
                                       p_over_q * *(b + 23 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 44);
            *(b + 11 * OS1_S1 + 103) = prefactor_y * *(b + 11 * OS1_S1 + 70) -
                                       p_over_q * *(b + 23 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 70);
            *(b + 11 * OS1_S1 + 104) =
                prefactor_x * *(b + 11 * OS1_S1 + 76) -
                p_over_q * *(b + 21 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 76) +
                one_over_two_q * *(b + 11 * OS1_S1 + 55);
            *(b + 11 * OS1_S1 + 105) =
                prefactor_x * *(b + 11 * OS1_S1 + 77) -
                p_over_q * *(b + 21 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 77);
            *(b + 11 * OS1_S1 + 106) = prefactor_z * *(b + 11 * OS1_S1 + 71) -
                                       p_over_q * *(b + 24 * OS1_S1 + 71);
            *(b + 11 * OS1_S1 + 107) =
                prefactor_x * *(b + 11 * OS1_S1 + 79) -
                p_over_q * *(b + 21 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 79);
            *(b + 11 * OS1_S1 + 108) =
                prefactor_x * *(b + 11 * OS1_S1 + 80) -
                p_over_q * *(b + 21 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 80);
            *(b + 11 * OS1_S1 + 109) =
                prefactor_x * *(b + 11 * OS1_S1 + 81) -
                p_over_q * *(b + 21 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 81);
            *(b + 11 * OS1_S1 + 110) = prefactor_y * *(b + 11 * OS1_S1 + 76) -
                                       p_over_q * *(b + 23 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 76);
            *(b + 11 * OS1_S1 + 111) =
                prefactor_x * *(b + 11 * OS1_S1 + 83) -
                p_over_q * *(b + 21 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 83);
            *(b + 11 * OS1_S1 + 112) =
                prefactor_y * *(b + 11 * OS1_S1 + 77) -
                p_over_q * *(b + 23 * OS1_S1 + 77) +
                one_over_two_q * *(b + 4 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 11 * OS1_S1 + 50);
            *(b + 11 * OS1_S1 + 113) = prefactor_z * *(b + 11 * OS1_S1 + 77) -
                                       p_over_q * *(b + 24 * OS1_S1 + 77);
            *(b + 11 * OS1_S1 + 114) = prefactor_z * *(b + 11 * OS1_S1 + 78) -
                                       p_over_q * *(b + 24 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 50);
            *(b + 11 * OS1_S1 + 115) =
                prefactor_z * *(b + 11 * OS1_S1 + 79) -
                p_over_q * *(b + 24 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 51);
            *(b + 11 * OS1_S1 + 116) =
                prefactor_y * *(b + 11 * OS1_S1 + 81) -
                p_over_q * *(b + 23 * OS1_S1 + 81) +
                one_over_two_q * *(b + 4 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 54);
            *(b + 11 * OS1_S1 + 117) = prefactor_y * *(b + 11 * OS1_S1 + 82) -
                                       p_over_q * *(b + 23 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 55);
            *(b + 11 * OS1_S1 + 118) = prefactor_y * *(b + 11 * OS1_S1 + 83) -
                                       p_over_q * *(b + 23 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 83);
            *(b + 11 * OS1_S1 + 119) =
                prefactor_z * *(b + 11 * OS1_S1 + 83) -
                p_over_q * *(b + 24 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 11 * OS1_S1 + 55);
            *(b + 12 * OS1_S1 + 84) =
                prefactor_x * *(b + 12 * OS1_S1 + 56) -
                p_over_q * *(b + 22 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 12 * OS1_S1 + 35);
            *(b + 12 * OS1_S1 + 85) = prefactor_y * *(b + 12 * OS1_S1 + 56) -
                                      p_over_q * *(b + 24 * OS1_S1 + 56);
            *(b + 12 * OS1_S1 + 86) = prefactor_z * *(b + 12 * OS1_S1 + 56) -
                                      p_over_q * *(b + 25 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 56);
            *(b + 12 * OS1_S1 + 87) = prefactor_y * *(b + 12 * OS1_S1 + 57) -
                                      p_over_q * *(b + 24 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 35);
            *(b + 12 * OS1_S1 + 88) = prefactor_y * *(b + 12 * OS1_S1 + 58) -
                                      p_over_q * *(b + 24 * OS1_S1 + 58);
            *(b + 12 * OS1_S1 + 89) = prefactor_z * *(b + 12 * OS1_S1 + 58) -
                                      p_over_q * *(b + 25 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 35);
            *(b + 12 * OS1_S1 + 90) =
                prefactor_y * *(b + 12 * OS1_S1 + 59) -
                p_over_q * *(b + 24 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 36);
            *(b + 12 * OS1_S1 + 91) = prefactor_z * *(b + 12 * OS1_S1 + 59) -
                                      p_over_q * *(b + 25 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 59);
            *(b + 12 * OS1_S1 + 92) = prefactor_y * *(b + 12 * OS1_S1 + 61) -
                                      p_over_q * *(b + 24 * OS1_S1 + 61);
            *(b + 12 * OS1_S1 + 93) =
                prefactor_z * *(b + 12 * OS1_S1 + 61) -
                p_over_q * *(b + 25 * OS1_S1 + 61) +
                one_over_two_q * *(b + 4 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 37);
            *(b + 12 * OS1_S1 + 94) =
                prefactor_x * *(b + 12 * OS1_S1 + 66) -
                p_over_q * *(b + 22 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 45);
            *(b + 12 * OS1_S1 + 95) = prefactor_z * *(b + 12 * OS1_S1 + 62) -
                                      p_over_q * *(b + 25 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 62);
            *(b + 12 * OS1_S1 + 96) = prefactor_y * *(b + 12 * OS1_S1 + 64) -
                                      p_over_q * *(b + 24 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 40);
            *(b + 12 * OS1_S1 + 97) = prefactor_y * *(b + 12 * OS1_S1 + 65) -
                                      p_over_q * *(b + 24 * OS1_S1 + 65);
            *(b + 12 * OS1_S1 + 98) =
                prefactor_x * *(b + 12 * OS1_S1 + 70) -
                p_over_q * *(b + 22 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 49);
            *(b + 12 * OS1_S1 + 99) =
                prefactor_x * *(b + 12 * OS1_S1 + 71) -
                p_over_q * *(b + 22 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 71) +
                one_over_two_q * *(b + 12 * OS1_S1 + 50);
            *(b + 12 * OS1_S1 + 100) = prefactor_z * *(b + 12 * OS1_S1 + 66) -
                                       p_over_q * *(b + 25 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 66);
            *(b + 12 * OS1_S1 + 101) = prefactor_z * *(b + 12 * OS1_S1 + 67) -
                                       p_over_q * *(b + 25 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 41);
            *(b + 12 * OS1_S1 + 102) = prefactor_y * *(b + 12 * OS1_S1 + 69) -
                                       p_over_q * *(b + 24 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 44);
            *(b + 12 * OS1_S1 + 103) = prefactor_y * *(b + 12 * OS1_S1 + 70) -
                                       p_over_q * *(b + 24 * OS1_S1 + 70);
            *(b + 12 * OS1_S1 + 104) =
                prefactor_x * *(b + 12 * OS1_S1 + 76) -
                p_over_q * *(b + 22 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 76) +
                one_over_two_q * *(b + 12 * OS1_S1 + 55);
            *(b + 12 * OS1_S1 + 105) =
                prefactor_x * *(b + 12 * OS1_S1 + 77) -
                p_over_q * *(b + 22 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 77);
            *(b + 12 * OS1_S1 + 106) = prefactor_z * *(b + 12 * OS1_S1 + 71) -
                                       p_over_q * *(b + 25 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 71);
            *(b + 12 * OS1_S1 + 107) =
                prefactor_x * *(b + 12 * OS1_S1 + 79) -
                p_over_q * *(b + 22 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 79);
            *(b + 12 * OS1_S1 + 108) =
                prefactor_x * *(b + 12 * OS1_S1 + 80) -
                p_over_q * *(b + 22 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 80);
            *(b + 12 * OS1_S1 + 109) =
                prefactor_x * *(b + 12 * OS1_S1 + 81) -
                p_over_q * *(b + 22 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 81);
            *(b + 12 * OS1_S1 + 110) = prefactor_y * *(b + 12 * OS1_S1 + 76) -
                                       p_over_q * *(b + 24 * OS1_S1 + 76);
            *(b + 12 * OS1_S1 + 111) =
                prefactor_x * *(b + 12 * OS1_S1 + 83) -
                p_over_q * *(b + 22 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 83);
            *(b + 12 * OS1_S1 + 112) =
                prefactor_y * *(b + 12 * OS1_S1 + 77) -
                p_over_q * *(b + 24 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 12 * OS1_S1 + 50);
            *(b + 12 * OS1_S1 + 113) = prefactor_z * *(b + 12 * OS1_S1 + 77) -
                                       p_over_q * *(b + 25 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 77);
            *(b + 12 * OS1_S1 + 114) = prefactor_z * *(b + 12 * OS1_S1 + 78) -
                                       p_over_q * *(b + 25 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 50);
            *(b + 12 * OS1_S1 + 115) =
                prefactor_z * *(b + 12 * OS1_S1 + 79) -
                p_over_q * *(b + 25 * OS1_S1 + 79) +
                one_over_two_q * *(b + 4 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 51);
            *(b + 12 * OS1_S1 + 116) =
                prefactor_y * *(b + 12 * OS1_S1 + 81) -
                p_over_q * *(b + 24 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 54);
            *(b + 12 * OS1_S1 + 117) = prefactor_y * *(b + 12 * OS1_S1 + 82) -
                                       p_over_q * *(b + 24 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 55);
            *(b + 12 * OS1_S1 + 118) = prefactor_y * *(b + 12 * OS1_S1 + 83) -
                                       p_over_q * *(b + 24 * OS1_S1 + 83);
            *(b + 12 * OS1_S1 + 119) =
                prefactor_z * *(b + 12 * OS1_S1 + 83) -
                p_over_q * *(b + 25 * OS1_S1 + 83) +
                one_over_two_q * *(b + 4 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 12 * OS1_S1 + 55);
            *(b + 13 * OS1_S1 + 84) =
                prefactor_x * *(b + 13 * OS1_S1 + 56) -
                p_over_q * *(b + 23 * OS1_S1 + 56) +
                one_over_two_q * *(b + 7 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 13 * OS1_S1 + 35);
            *(b + 13 * OS1_S1 + 85) =
                prefactor_y * *(b + 13 * OS1_S1 + 56) -
                p_over_q * *(b + 26 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 56);
            *(b + 13 * OS1_S1 + 86) = prefactor_z * *(b + 13 * OS1_S1 + 56) -
                                      p_over_q * *(b + 27 * OS1_S1 + 56);
            *(b + 13 * OS1_S1 + 87) =
                prefactor_y * *(b + 13 * OS1_S1 + 57) -
                p_over_q * *(b + 26 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 57) +
                one_over_two_q * *(b + 13 * OS1_S1 + 35);
            *(b + 13 * OS1_S1 + 88) = prefactor_z * *(b + 13 * OS1_S1 + 57) -
                                      p_over_q * *(b + 27 * OS1_S1 + 57);
            *(b + 13 * OS1_S1 + 89) = prefactor_z * *(b + 13 * OS1_S1 + 58) -
                                      p_over_q * *(b + 27 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 35);
            *(b + 13 * OS1_S1 + 90) =
                prefactor_y * *(b + 13 * OS1_S1 + 59) -
                p_over_q * *(b + 26 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 36);
            *(b + 13 * OS1_S1 + 91) = prefactor_z * *(b + 13 * OS1_S1 + 59) -
                                      p_over_q * *(b + 27 * OS1_S1 + 59);
            *(b + 13 * OS1_S1 + 92) =
                prefactor_y * *(b + 13 * OS1_S1 + 61) -
                p_over_q * *(b + 26 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 61);
            *(b + 13 * OS1_S1 + 93) =
                prefactor_z * *(b + 13 * OS1_S1 + 61) -
                p_over_q * *(b + 27 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 37);
            *(b + 13 * OS1_S1 + 94) =
                prefactor_x * *(b + 13 * OS1_S1 + 66) -
                p_over_q * *(b + 23 * OS1_S1 + 66) +
                one_over_two_q * *(b + 7 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 45);
            *(b + 13 * OS1_S1 + 95) = prefactor_z * *(b + 13 * OS1_S1 + 62) -
                                      p_over_q * *(b + 27 * OS1_S1 + 62);
            *(b + 13 * OS1_S1 + 96) = prefactor_z * *(b + 13 * OS1_S1 + 63) -
                                      p_over_q * *(b + 27 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 38);
            *(b + 13 * OS1_S1 + 97) =
                prefactor_y * *(b + 13 * OS1_S1 + 65) -
                p_over_q * *(b + 26 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 65);
            *(b + 13 * OS1_S1 + 98) =
                prefactor_x * *(b + 13 * OS1_S1 + 70) -
                p_over_q * *(b + 23 * OS1_S1 + 70) +
                one_over_two_q * *(b + 7 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 49);
            *(b + 13 * OS1_S1 + 99) = prefactor_x * *(b + 13 * OS1_S1 + 71) -
                                      p_over_q * *(b + 23 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 50);
            *(b + 13 * OS1_S1 + 100) = prefactor_z * *(b + 13 * OS1_S1 + 66) -
                                       p_over_q * *(b + 27 * OS1_S1 + 66);
            *(b + 13 * OS1_S1 + 101) = prefactor_z * *(b + 13 * OS1_S1 + 67) -
                                       p_over_q * *(b + 27 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 41);
            *(b + 13 * OS1_S1 + 102) = prefactor_x * *(b + 13 * OS1_S1 + 74) -
                                       p_over_q * *(b + 23 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 53);
            *(b + 13 * OS1_S1 + 103) =
                prefactor_y * *(b + 13 * OS1_S1 + 70) -
                p_over_q * *(b + 26 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 70);
            *(b + 13 * OS1_S1 + 104) = prefactor_x * *(b + 13 * OS1_S1 + 76) -
                                       p_over_q * *(b + 23 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 55);
            *(b + 13 * OS1_S1 + 105) = prefactor_x * *(b + 13 * OS1_S1 + 77) -
                                       p_over_q * *(b + 23 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 77);
            *(b + 13 * OS1_S1 + 106) = prefactor_z * *(b + 13 * OS1_S1 + 71) -
                                       p_over_q * *(b + 27 * OS1_S1 + 71);
            *(b + 13 * OS1_S1 + 107) = prefactor_x * *(b + 13 * OS1_S1 + 79) -
                                       p_over_q * *(b + 23 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 79);
            *(b + 13 * OS1_S1 + 108) = prefactor_x * *(b + 13 * OS1_S1 + 80) -
                                       p_over_q * *(b + 23 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 80);
            *(b + 13 * OS1_S1 + 109) = prefactor_x * *(b + 13 * OS1_S1 + 81) -
                                       p_over_q * *(b + 23 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 81);
            *(b + 13 * OS1_S1 + 110) = prefactor_x * *(b + 13 * OS1_S1 + 82) -
                                       p_over_q * *(b + 23 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 82);
            *(b + 13 * OS1_S1 + 111) = prefactor_x * *(b + 13 * OS1_S1 + 83) -
                                       p_over_q * *(b + 23 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 83);
            *(b + 13 * OS1_S1 + 112) =
                prefactor_y * *(b + 13 * OS1_S1 + 77) -
                p_over_q * *(b + 26 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 13 * OS1_S1 + 50);
            *(b + 13 * OS1_S1 + 113) = prefactor_z * *(b + 13 * OS1_S1 + 77) -
                                       p_over_q * *(b + 27 * OS1_S1 + 77);
            *(b + 13 * OS1_S1 + 114) = prefactor_z * *(b + 13 * OS1_S1 + 78) -
                                       p_over_q * *(b + 27 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 50);
            *(b + 13 * OS1_S1 + 115) =
                prefactor_z * *(b + 13 * OS1_S1 + 79) -
                p_over_q * *(b + 27 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 51);
            *(b + 13 * OS1_S1 + 116) =
                prefactor_y * *(b + 13 * OS1_S1 + 81) -
                p_over_q * *(b + 26 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 54);
            *(b + 13 * OS1_S1 + 117) =
                prefactor_y * *(b + 13 * OS1_S1 + 82) -
                p_over_q * *(b + 26 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 82) +
                one_over_two_q * *(b + 13 * OS1_S1 + 55);
            *(b + 13 * OS1_S1 + 118) =
                prefactor_y * *(b + 13 * OS1_S1 + 83) -
                p_over_q * *(b + 26 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 83);
            *(b + 13 * OS1_S1 + 119) =
                prefactor_z * *(b + 13 * OS1_S1 + 83) -
                p_over_q * *(b + 27 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 13 * OS1_S1 + 55);
            *(b + 14 * OS1_S1 + 84) =
                prefactor_x * *(b + 14 * OS1_S1 + 56) -
                p_over_q * *(b + 24 * OS1_S1 + 56) +
                one_over_two_q * *(b + 8 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 14 * OS1_S1 + 35);
            *(b + 14 * OS1_S1 + 85) = prefactor_y * *(b + 14 * OS1_S1 + 56) -
                                      p_over_q * *(b + 27 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 56);
            *(b + 14 * OS1_S1 + 86) = prefactor_z * *(b + 14 * OS1_S1 + 56) -
                                      p_over_q * *(b + 28 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 56);
            *(b + 14 * OS1_S1 + 87) = prefactor_y * *(b + 14 * OS1_S1 + 57) -
                                      p_over_q * *(b + 27 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 35);
            *(b + 14 * OS1_S1 + 88) = prefactor_z * *(b + 14 * OS1_S1 + 57) -
                                      p_over_q * *(b + 28 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 57);
            *(b + 14 * OS1_S1 + 89) = prefactor_z * *(b + 14 * OS1_S1 + 58) -
                                      p_over_q * *(b + 28 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 35);
            *(b + 14 * OS1_S1 + 90) =
                prefactor_y * *(b + 14 * OS1_S1 + 59) -
                p_over_q * *(b + 27 * OS1_S1 + 59) +
                one_over_two_q * *(b + 6 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 36);
            *(b + 14 * OS1_S1 + 91) = prefactor_z * *(b + 14 * OS1_S1 + 59) -
                                      p_over_q * *(b + 28 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 59);
            *(b + 14 * OS1_S1 + 92) = prefactor_y * *(b + 14 * OS1_S1 + 61) -
                                      p_over_q * *(b + 27 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 61);
            *(b + 14 * OS1_S1 + 93) =
                prefactor_z * *(b + 14 * OS1_S1 + 61) -
                p_over_q * *(b + 28 * OS1_S1 + 61) +
                one_over_two_q * *(b + 5 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 37);
            *(b + 14 * OS1_S1 + 94) =
                prefactor_x * *(b + 14 * OS1_S1 + 66) -
                p_over_q * *(b + 24 * OS1_S1 + 66) +
                one_over_two_q * *(b + 8 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 45);
            *(b + 14 * OS1_S1 + 95) = prefactor_z * *(b + 14 * OS1_S1 + 62) -
                                      p_over_q * *(b + 28 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 62);
            *(b + 14 * OS1_S1 + 96) = prefactor_z * *(b + 14 * OS1_S1 + 63) -
                                      p_over_q * *(b + 28 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 38);
            *(b + 14 * OS1_S1 + 97) = prefactor_y * *(b + 14 * OS1_S1 + 65) -
                                      p_over_q * *(b + 27 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 65);
            *(b + 14 * OS1_S1 + 98) =
                prefactor_x * *(b + 14 * OS1_S1 + 70) -
                p_over_q * *(b + 24 * OS1_S1 + 70) +
                one_over_two_q * *(b + 8 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 49);
            *(b + 14 * OS1_S1 + 99) = prefactor_x * *(b + 14 * OS1_S1 + 71) -
                                      p_over_q * *(b + 24 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 14 * OS1_S1 + 50);
            *(b + 14 * OS1_S1 + 100) = prefactor_z * *(b + 14 * OS1_S1 + 66) -
                                       p_over_q * *(b + 28 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 66);
            *(b + 14 * OS1_S1 + 101) = prefactor_z * *(b + 14 * OS1_S1 + 67) -
                                       p_over_q * *(b + 28 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 14 * OS1_S1 + 41);
            *(b + 14 * OS1_S1 + 102) = prefactor_y * *(b + 14 * OS1_S1 + 69) -
                                       p_over_q * *(b + 27 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 14 * OS1_S1 + 44);
            *(b + 14 * OS1_S1 + 103) = prefactor_y * *(b + 14 * OS1_S1 + 70) -
                                       p_over_q * *(b + 27 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 70);
            *(b + 14 * OS1_S1 + 104) = prefactor_x * *(b + 14 * OS1_S1 + 76) -
                                       p_over_q * *(b + 24 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 8 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 14 * OS1_S1 + 55);
            *(b + 14 * OS1_S1 + 105) = prefactor_x * *(b + 14 * OS1_S1 + 77) -
                                       p_over_q * *(b + 24 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 8 * OS1_S1 + 77);
            *(b + 14 * OS1_S1 + 106) = prefactor_z * *(b + 14 * OS1_S1 + 71) -
                                       p_over_q * *(b + 28 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 71);
            *(b + 14 * OS1_S1 + 107) = prefactor_x * *(b + 14 * OS1_S1 + 79) -
                                       p_over_q * *(b + 24 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 8 * OS1_S1 + 79);
            *(b + 14 * OS1_S1 + 108) = prefactor_x * *(b + 14 * OS1_S1 + 80) -
                                       p_over_q * *(b + 24 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 8 * OS1_S1 + 80);
            *(b + 14 * OS1_S1 + 109) = prefactor_x * *(b + 14 * OS1_S1 + 81) -
                                       p_over_q * *(b + 24 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 8 * OS1_S1 + 81);
            *(b + 14 * OS1_S1 + 110) = prefactor_y * *(b + 14 * OS1_S1 + 76) -
                                       p_over_q * *(b + 27 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 76);
            *(b + 14 * OS1_S1 + 111) = prefactor_x * *(b + 14 * OS1_S1 + 83) -
                                       p_over_q * *(b + 24 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 8 * OS1_S1 + 83);
            *(b + 14 * OS1_S1 + 112) =
                prefactor_y * *(b + 14 * OS1_S1 + 77) -
                p_over_q * *(b + 27 * OS1_S1 + 77) +
                one_over_two_q * *(b + 6 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 14 * OS1_S1 + 50);
            *(b + 14 * OS1_S1 + 113) = prefactor_z * *(b + 14 * OS1_S1 + 77) -
                                       p_over_q * *(b + 28 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 77);
            *(b + 14 * OS1_S1 + 114) = prefactor_z * *(b + 14 * OS1_S1 + 78) -
                                       p_over_q * *(b + 28 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 14 * OS1_S1 + 50);
            *(b + 14 * OS1_S1 + 115) =
                prefactor_z * *(b + 14 * OS1_S1 + 79) -
                p_over_q * *(b + 28 * OS1_S1 + 79) +
                one_over_two_q * *(b + 5 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 51);
            *(b + 14 * OS1_S1 + 116) =
                prefactor_y * *(b + 14 * OS1_S1 + 81) -
                p_over_q * *(b + 27 * OS1_S1 + 81) +
                one_over_two_q * *(b + 6 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 54);
            *(b + 14 * OS1_S1 + 117) = prefactor_y * *(b + 14 * OS1_S1 + 82) -
                                       p_over_q * *(b + 27 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 14 * OS1_S1 + 55);
            *(b + 14 * OS1_S1 + 118) = prefactor_y * *(b + 14 * OS1_S1 + 83) -
                                       p_over_q * *(b + 27 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 83);
            *(b + 14 * OS1_S1 + 119) =
                prefactor_z * *(b + 14 * OS1_S1 + 83) -
                p_over_q * *(b + 28 * OS1_S1 + 83) +
                one_over_two_q * *(b + 5 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 14 * OS1_S1 + 55);
            *(b + 15 * OS1_S1 + 84) =
                prefactor_x * *(b + 15 * OS1_S1 + 56) -
                p_over_q * *(b + 25 * OS1_S1 + 56) +
                one_over_two_q * *(b + 9 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 15 * OS1_S1 + 35);
            *(b + 15 * OS1_S1 + 85) = prefactor_y * *(b + 15 * OS1_S1 + 56) -
                                      p_over_q * *(b + 28 * OS1_S1 + 56);
            *(b + 15 * OS1_S1 + 86) =
                prefactor_z * *(b + 15 * OS1_S1 + 56) -
                p_over_q * *(b + 29 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 56);
            *(b + 15 * OS1_S1 + 87) = prefactor_y * *(b + 15 * OS1_S1 + 57) -
                                      p_over_q * *(b + 28 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 35);
            *(b + 15 * OS1_S1 + 88) = prefactor_y * *(b + 15 * OS1_S1 + 58) -
                                      p_over_q * *(b + 28 * OS1_S1 + 58);
            *(b + 15 * OS1_S1 + 89) =
                prefactor_z * *(b + 15 * OS1_S1 + 58) -
                p_over_q * *(b + 29 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 58) +
                one_over_two_q * *(b + 15 * OS1_S1 + 35);
            *(b + 15 * OS1_S1 + 90) =
                prefactor_y * *(b + 15 * OS1_S1 + 59) -
                p_over_q * *(b + 28 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 36);
            *(b + 15 * OS1_S1 + 91) =
                prefactor_z * *(b + 15 * OS1_S1 + 59) -
                p_over_q * *(b + 29 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 59);
            *(b + 15 * OS1_S1 + 92) = prefactor_y * *(b + 15 * OS1_S1 + 61) -
                                      p_over_q * *(b + 28 * OS1_S1 + 61);
            *(b + 15 * OS1_S1 + 93) =
                prefactor_z * *(b + 15 * OS1_S1 + 61) -
                p_over_q * *(b + 29 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 37);
            *(b + 15 * OS1_S1 + 94) =
                prefactor_x * *(b + 15 * OS1_S1 + 66) -
                p_over_q * *(b + 25 * OS1_S1 + 66) +
                one_over_two_q * *(b + 9 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 45);
            *(b + 15 * OS1_S1 + 95) =
                prefactor_z * *(b + 15 * OS1_S1 + 62) -
                p_over_q * *(b + 29 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 62);
            *(b + 15 * OS1_S1 + 96) = prefactor_y * *(b + 15 * OS1_S1 + 64) -
                                      p_over_q * *(b + 28 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 40);
            *(b + 15 * OS1_S1 + 97) = prefactor_y * *(b + 15 * OS1_S1 + 65) -
                                      p_over_q * *(b + 28 * OS1_S1 + 65);
            *(b + 15 * OS1_S1 + 98) =
                prefactor_x * *(b + 15 * OS1_S1 + 70) -
                p_over_q * *(b + 25 * OS1_S1 + 70) +
                one_over_two_q * *(b + 9 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 49);
            *(b + 15 * OS1_S1 + 99) = prefactor_x * *(b + 15 * OS1_S1 + 71) -
                                      p_over_q * *(b + 25 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 50);
            *(b + 15 * OS1_S1 + 100) =
                prefactor_z * *(b + 15 * OS1_S1 + 66) -
                p_over_q * *(b + 29 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 66);
            *(b + 15 * OS1_S1 + 101) = prefactor_x * *(b + 15 * OS1_S1 + 73) -
                                       p_over_q * *(b + 25 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 52);
            *(b + 15 * OS1_S1 + 102) = prefactor_y * *(b + 15 * OS1_S1 + 69) -
                                       p_over_q * *(b + 28 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 44);
            *(b + 15 * OS1_S1 + 103) = prefactor_y * *(b + 15 * OS1_S1 + 70) -
                                       p_over_q * *(b + 28 * OS1_S1 + 70);
            *(b + 15 * OS1_S1 + 104) = prefactor_x * *(b + 15 * OS1_S1 + 76) -
                                       p_over_q * *(b + 25 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 55);
            *(b + 15 * OS1_S1 + 105) = prefactor_x * *(b + 15 * OS1_S1 + 77) -
                                       p_over_q * *(b + 25 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 77);
            *(b + 15 * OS1_S1 + 106) = prefactor_x * *(b + 15 * OS1_S1 + 78) -
                                       p_over_q * *(b + 25 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 78);
            *(b + 15 * OS1_S1 + 107) = prefactor_x * *(b + 15 * OS1_S1 + 79) -
                                       p_over_q * *(b + 25 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 79);
            *(b + 15 * OS1_S1 + 108) = prefactor_x * *(b + 15 * OS1_S1 + 80) -
                                       p_over_q * *(b + 25 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 80);
            *(b + 15 * OS1_S1 + 109) = prefactor_x * *(b + 15 * OS1_S1 + 81) -
                                       p_over_q * *(b + 25 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 81);
            *(b + 15 * OS1_S1 + 110) = prefactor_y * *(b + 15 * OS1_S1 + 76) -
                                       p_over_q * *(b + 28 * OS1_S1 + 76);
            *(b + 15 * OS1_S1 + 111) = prefactor_x * *(b + 15 * OS1_S1 + 83) -
                                       p_over_q * *(b + 25 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 83);
            *(b + 15 * OS1_S1 + 112) =
                prefactor_y * *(b + 15 * OS1_S1 + 77) -
                p_over_q * *(b + 28 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 15 * OS1_S1 + 50);
            *(b + 15 * OS1_S1 + 113) =
                prefactor_z * *(b + 15 * OS1_S1 + 77) -
                p_over_q * *(b + 29 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 77);
            *(b + 15 * OS1_S1 + 114) =
                prefactor_z * *(b + 15 * OS1_S1 + 78) -
                p_over_q * *(b + 29 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 78) +
                one_over_two_q * *(b + 15 * OS1_S1 + 50);
            *(b + 15 * OS1_S1 + 115) =
                prefactor_z * *(b + 15 * OS1_S1 + 79) -
                p_over_q * *(b + 29 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 51);
            *(b + 15 * OS1_S1 + 116) =
                prefactor_y * *(b + 15 * OS1_S1 + 81) -
                p_over_q * *(b + 28 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 54);
            *(b + 15 * OS1_S1 + 117) = prefactor_y * *(b + 15 * OS1_S1 + 82) -
                                       p_over_q * *(b + 28 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 55);
            *(b + 15 * OS1_S1 + 118) = prefactor_y * *(b + 15 * OS1_S1 + 83) -
                                       p_over_q * *(b + 28 * OS1_S1 + 83);
            *(b + 15 * OS1_S1 + 119) =
                prefactor_z * *(b + 15 * OS1_S1 + 83) -
                p_over_q * *(b + 29 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 15 * OS1_S1 + 55);
            *(b + 16 * OS1_S1 + 84) =
                prefactor_x * *(b + 16 * OS1_S1 + 56) -
                p_over_q * *(b + 26 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 16 * OS1_S1 + 35);
            *(b + 16 * OS1_S1 + 85) =
                prefactor_y * *(b + 16 * OS1_S1 + 56) -
                p_over_q * *(b + 30 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 56);
            *(b + 16 * OS1_S1 + 86) = prefactor_z * *(b + 16 * OS1_S1 + 56) -
                                      p_over_q * *(b + 31 * OS1_S1 + 56);
            *(b + 16 * OS1_S1 + 87) =
                prefactor_y * *(b + 16 * OS1_S1 + 57) -
                p_over_q * *(b + 30 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 57) +
                one_over_two_q * *(b + 16 * OS1_S1 + 35);
            *(b + 16 * OS1_S1 + 88) = prefactor_z * *(b + 16 * OS1_S1 + 57) -
                                      p_over_q * *(b + 31 * OS1_S1 + 57);
            *(b + 16 * OS1_S1 + 89) = prefactor_z * *(b + 16 * OS1_S1 + 58) -
                                      p_over_q * *(b + 31 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 35);
            *(b + 16 * OS1_S1 + 90) =
                prefactor_y * *(b + 16 * OS1_S1 + 59) -
                p_over_q * *(b + 30 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 36);
            *(b + 16 * OS1_S1 + 91) = prefactor_z * *(b + 16 * OS1_S1 + 59) -
                                      p_over_q * *(b + 31 * OS1_S1 + 59);
            *(b + 16 * OS1_S1 + 92) =
                prefactor_y * *(b + 16 * OS1_S1 + 61) -
                p_over_q * *(b + 30 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 61);
            *(b + 16 * OS1_S1 + 93) =
                prefactor_z * *(b + 16 * OS1_S1 + 61) -
                p_over_q * *(b + 31 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 37);
            *(b + 16 * OS1_S1 + 94) =
                prefactor_x * *(b + 16 * OS1_S1 + 66) -
                p_over_q * *(b + 26 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 45);
            *(b + 16 * OS1_S1 + 95) = prefactor_z * *(b + 16 * OS1_S1 + 62) -
                                      p_over_q * *(b + 31 * OS1_S1 + 62);
            *(b + 16 * OS1_S1 + 96) = prefactor_z * *(b + 16 * OS1_S1 + 63) -
                                      p_over_q * *(b + 31 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 38);
            *(b + 16 * OS1_S1 + 97) =
                prefactor_y * *(b + 16 * OS1_S1 + 65) -
                p_over_q * *(b + 30 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 65);
            *(b + 16 * OS1_S1 + 98) =
                prefactor_x * *(b + 16 * OS1_S1 + 70) -
                p_over_q * *(b + 26 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 49);
            *(b + 16 * OS1_S1 + 99) = prefactor_x * *(b + 16 * OS1_S1 + 71) -
                                      p_over_q * *(b + 26 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 50);
            *(b + 16 * OS1_S1 + 100) = prefactor_z * *(b + 16 * OS1_S1 + 66) -
                                       p_over_q * *(b + 31 * OS1_S1 + 66);
            *(b + 16 * OS1_S1 + 101) = prefactor_z * *(b + 16 * OS1_S1 + 67) -
                                       p_over_q * *(b + 31 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 41);
            *(b + 16 * OS1_S1 + 102) = prefactor_x * *(b + 16 * OS1_S1 + 74) -
                                       p_over_q * *(b + 26 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 53);
            *(b + 16 * OS1_S1 + 103) =
                prefactor_y * *(b + 16 * OS1_S1 + 70) -
                p_over_q * *(b + 30 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 70);
            *(b + 16 * OS1_S1 + 104) = prefactor_x * *(b + 16 * OS1_S1 + 76) -
                                       p_over_q * *(b + 26 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 55);
            *(b + 16 * OS1_S1 + 105) = prefactor_x * *(b + 16 * OS1_S1 + 77) -
                                       p_over_q * *(b + 26 * OS1_S1 + 77);
            *(b + 16 * OS1_S1 + 106) = prefactor_z * *(b + 16 * OS1_S1 + 71) -
                                       p_over_q * *(b + 31 * OS1_S1 + 71);
            *(b + 16 * OS1_S1 + 107) = prefactor_x * *(b + 16 * OS1_S1 + 79) -
                                       p_over_q * *(b + 26 * OS1_S1 + 79);
            *(b + 16 * OS1_S1 + 108) = prefactor_x * *(b + 16 * OS1_S1 + 80) -
                                       p_over_q * *(b + 26 * OS1_S1 + 80);
            *(b + 16 * OS1_S1 + 109) = prefactor_x * *(b + 16 * OS1_S1 + 81) -
                                       p_over_q * *(b + 26 * OS1_S1 + 81);
            *(b + 16 * OS1_S1 + 110) = prefactor_x * *(b + 16 * OS1_S1 + 82) -
                                       p_over_q * *(b + 26 * OS1_S1 + 82);
            *(b + 16 * OS1_S1 + 111) = prefactor_x * *(b + 16 * OS1_S1 + 83) -
                                       p_over_q * *(b + 26 * OS1_S1 + 83);
            *(b + 16 * OS1_S1 + 112) =
                prefactor_y * *(b + 16 * OS1_S1 + 77) -
                p_over_q * *(b + 30 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 16 * OS1_S1 + 50);
            *(b + 16 * OS1_S1 + 113) = prefactor_z * *(b + 16 * OS1_S1 + 77) -
                                       p_over_q * *(b + 31 * OS1_S1 + 77);
            *(b + 16 * OS1_S1 + 114) = prefactor_z * *(b + 16 * OS1_S1 + 78) -
                                       p_over_q * *(b + 31 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 50);
            *(b + 16 * OS1_S1 + 115) =
                prefactor_z * *(b + 16 * OS1_S1 + 79) -
                p_over_q * *(b + 31 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 51);
            *(b + 16 * OS1_S1 + 116) =
                prefactor_y * *(b + 16 * OS1_S1 + 81) -
                p_over_q * *(b + 30 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 54);
            *(b + 16 * OS1_S1 + 117) =
                prefactor_y * *(b + 16 * OS1_S1 + 82) -
                p_over_q * *(b + 30 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 82) +
                one_over_two_q * *(b + 16 * OS1_S1 + 55);
            *(b + 16 * OS1_S1 + 118) =
                prefactor_y * *(b + 16 * OS1_S1 + 83) -
                p_over_q * *(b + 30 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 83);
            *(b + 16 * OS1_S1 + 119) =
                prefactor_z * *(b + 16 * OS1_S1 + 83) -
                p_over_q * *(b + 31 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 16 * OS1_S1 + 55);
            *(b + 17 * OS1_S1 + 84) =
                prefactor_x * *(b + 17 * OS1_S1 + 56) -
                p_over_q * *(b + 27 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 17 * OS1_S1 + 35);
            *(b + 17 * OS1_S1 + 85) =
                prefactor_y * *(b + 17 * OS1_S1 + 56) -
                p_over_q * *(b + 31 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 56);
            *(b + 17 * OS1_S1 + 86) = prefactor_z * *(b + 17 * OS1_S1 + 56) -
                                      p_over_q * *(b + 32 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 56);
            *(b + 17 * OS1_S1 + 87) =
                prefactor_y * *(b + 17 * OS1_S1 + 57) -
                p_over_q * *(b + 31 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 57) +
                one_over_two_q * *(b + 17 * OS1_S1 + 35);
            *(b + 17 * OS1_S1 + 88) = prefactor_z * *(b + 17 * OS1_S1 + 57) -
                                      p_over_q * *(b + 32 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 57);
            *(b + 17 * OS1_S1 + 89) = prefactor_z * *(b + 17 * OS1_S1 + 58) -
                                      p_over_q * *(b + 32 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 35);
            *(b + 17 * OS1_S1 + 90) =
                prefactor_y * *(b + 17 * OS1_S1 + 59) -
                p_over_q * *(b + 31 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 36);
            *(b + 17 * OS1_S1 + 91) = prefactor_z * *(b + 17 * OS1_S1 + 59) -
                                      p_over_q * *(b + 32 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 59);
            *(b + 17 * OS1_S1 + 92) =
                prefactor_y * *(b + 17 * OS1_S1 + 61) -
                p_over_q * *(b + 31 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 61);
            *(b + 17 * OS1_S1 + 93) =
                prefactor_z * *(b + 17 * OS1_S1 + 61) -
                p_over_q * *(b + 32 * OS1_S1 + 61) +
                one_over_two_q * *(b + 7 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 37);
            *(b + 17 * OS1_S1 + 94) =
                prefactor_x * *(b + 17 * OS1_S1 + 66) -
                p_over_q * *(b + 27 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 45);
            *(b + 17 * OS1_S1 + 95) = prefactor_z * *(b + 17 * OS1_S1 + 62) -
                                      p_over_q * *(b + 32 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 62);
            *(b + 17 * OS1_S1 + 96) = prefactor_z * *(b + 17 * OS1_S1 + 63) -
                                      p_over_q * *(b + 32 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 38);
            *(b + 17 * OS1_S1 + 97) =
                prefactor_y * *(b + 17 * OS1_S1 + 65) -
                p_over_q * *(b + 31 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 65);
            *(b + 17 * OS1_S1 + 98) =
                prefactor_x * *(b + 17 * OS1_S1 + 70) -
                p_over_q * *(b + 27 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 49);
            *(b + 17 * OS1_S1 + 99) = prefactor_x * *(b + 17 * OS1_S1 + 71) -
                                      p_over_q * *(b + 27 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 50);
            *(b + 17 * OS1_S1 + 100) = prefactor_z * *(b + 17 * OS1_S1 + 66) -
                                       p_over_q * *(b + 32 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 66);
            *(b + 17 * OS1_S1 + 101) = prefactor_x * *(b + 17 * OS1_S1 + 73) -
                                       p_over_q * *(b + 27 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 52);
            *(b + 17 * OS1_S1 + 102) = prefactor_x * *(b + 17 * OS1_S1 + 74) -
                                       p_over_q * *(b + 27 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 53);
            *(b + 17 * OS1_S1 + 103) =
                prefactor_y * *(b + 17 * OS1_S1 + 70) -
                p_over_q * *(b + 31 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 70);
            *(b + 17 * OS1_S1 + 104) = prefactor_x * *(b + 17 * OS1_S1 + 76) -
                                       p_over_q * *(b + 27 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 55);
            *(b + 17 * OS1_S1 + 105) = prefactor_x * *(b + 17 * OS1_S1 + 77) -
                                       p_over_q * *(b + 27 * OS1_S1 + 77);
            *(b + 17 * OS1_S1 + 106) = prefactor_x * *(b + 17 * OS1_S1 + 78) -
                                       p_over_q * *(b + 27 * OS1_S1 + 78);
            *(b + 17 * OS1_S1 + 107) = prefactor_x * *(b + 17 * OS1_S1 + 79) -
                                       p_over_q * *(b + 27 * OS1_S1 + 79);
            *(b + 17 * OS1_S1 + 108) = prefactor_x * *(b + 17 * OS1_S1 + 80) -
                                       p_over_q * *(b + 27 * OS1_S1 + 80);
            *(b + 17 * OS1_S1 + 109) = prefactor_x * *(b + 17 * OS1_S1 + 81) -
                                       p_over_q * *(b + 27 * OS1_S1 + 81);
            *(b + 17 * OS1_S1 + 110) = prefactor_x * *(b + 17 * OS1_S1 + 82) -
                                       p_over_q * *(b + 27 * OS1_S1 + 82);
            *(b + 17 * OS1_S1 + 111) = prefactor_x * *(b + 17 * OS1_S1 + 83) -
                                       p_over_q * *(b + 27 * OS1_S1 + 83);
            *(b + 17 * OS1_S1 + 112) =
                prefactor_y * *(b + 17 * OS1_S1 + 77) -
                p_over_q * *(b + 31 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 17 * OS1_S1 + 50);
            *(b + 17 * OS1_S1 + 113) = prefactor_z * *(b + 17 * OS1_S1 + 77) -
                                       p_over_q * *(b + 32 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 77);
            *(b + 17 * OS1_S1 + 114) = prefactor_z * *(b + 17 * OS1_S1 + 78) -
                                       p_over_q * *(b + 32 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 50);
            *(b + 17 * OS1_S1 + 115) =
                prefactor_z * *(b + 17 * OS1_S1 + 79) -
                p_over_q * *(b + 32 * OS1_S1 + 79) +
                one_over_two_q * *(b + 7 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 51);
            *(b + 17 * OS1_S1 + 116) =
                prefactor_y * *(b + 17 * OS1_S1 + 81) -
                p_over_q * *(b + 31 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 54);
            *(b + 17 * OS1_S1 + 117) =
                prefactor_y * *(b + 17 * OS1_S1 + 82) -
                p_over_q * *(b + 31 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 82) +
                one_over_two_q * *(b + 17 * OS1_S1 + 55);
            *(b + 17 * OS1_S1 + 118) =
                prefactor_y * *(b + 17 * OS1_S1 + 83) -
                p_over_q * *(b + 31 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 83);
            *(b + 17 * OS1_S1 + 119) =
                prefactor_z * *(b + 17 * OS1_S1 + 83) -
                p_over_q * *(b + 32 * OS1_S1 + 83) +
                one_over_two_q * *(b + 7 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 17 * OS1_S1 + 55);
            *(b + 18 * OS1_S1 + 84) =
                prefactor_x * *(b + 18 * OS1_S1 + 56) -
                p_over_q * *(b + 28 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 18 * OS1_S1 + 35);
            *(b + 18 * OS1_S1 + 85) = prefactor_y * *(b + 18 * OS1_S1 + 56) -
                                      p_over_q * *(b + 32 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 56);
            *(b + 18 * OS1_S1 + 86) =
                prefactor_z * *(b + 18 * OS1_S1 + 56) -
                p_over_q * *(b + 33 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 56);
            *(b + 18 * OS1_S1 + 87) = prefactor_y * *(b + 18 * OS1_S1 + 57) -
                                      p_over_q * *(b + 32 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 35);
            *(b + 18 * OS1_S1 + 88) = prefactor_y * *(b + 18 * OS1_S1 + 58) -
                                      p_over_q * *(b + 32 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 58);
            *(b + 18 * OS1_S1 + 89) =
                prefactor_z * *(b + 18 * OS1_S1 + 58) -
                p_over_q * *(b + 33 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 58) +
                one_over_two_q * *(b + 18 * OS1_S1 + 35);
            *(b + 18 * OS1_S1 + 90) =
                prefactor_y * *(b + 18 * OS1_S1 + 59) -
                p_over_q * *(b + 32 * OS1_S1 + 59) +
                one_over_two_q * *(b + 9 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 36);
            *(b + 18 * OS1_S1 + 91) =
                prefactor_z * *(b + 18 * OS1_S1 + 59) -
                p_over_q * *(b + 33 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 59);
            *(b + 18 * OS1_S1 + 92) = prefactor_y * *(b + 18 * OS1_S1 + 61) -
                                      p_over_q * *(b + 32 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 61);
            *(b + 18 * OS1_S1 + 93) =
                prefactor_z * *(b + 18 * OS1_S1 + 61) -
                p_over_q * *(b + 33 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 37);
            *(b + 18 * OS1_S1 + 94) =
                prefactor_x * *(b + 18 * OS1_S1 + 66) -
                p_over_q * *(b + 28 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 45);
            *(b + 18 * OS1_S1 + 95) =
                prefactor_z * *(b + 18 * OS1_S1 + 62) -
                p_over_q * *(b + 33 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 62);
            *(b + 18 * OS1_S1 + 96) = prefactor_y * *(b + 18 * OS1_S1 + 64) -
                                      p_over_q * *(b + 32 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 40);
            *(b + 18 * OS1_S1 + 97) = prefactor_y * *(b + 18 * OS1_S1 + 65) -
                                      p_over_q * *(b + 32 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 65);
            *(b + 18 * OS1_S1 + 98) =
                prefactor_x * *(b + 18 * OS1_S1 + 70) -
                p_over_q * *(b + 28 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 49);
            *(b + 18 * OS1_S1 + 99) = prefactor_x * *(b + 18 * OS1_S1 + 71) -
                                      p_over_q * *(b + 28 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 50);
            *(b + 18 * OS1_S1 + 100) =
                prefactor_z * *(b + 18 * OS1_S1 + 66) -
                p_over_q * *(b + 33 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 66);
            *(b + 18 * OS1_S1 + 101) = prefactor_x * *(b + 18 * OS1_S1 + 73) -
                                       p_over_q * *(b + 28 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 52);
            *(b + 18 * OS1_S1 + 102) = prefactor_x * *(b + 18 * OS1_S1 + 74) -
                                       p_over_q * *(b + 28 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 53);
            *(b + 18 * OS1_S1 + 103) = prefactor_y * *(b + 18 * OS1_S1 + 70) -
                                       p_over_q * *(b + 32 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 70);
            *(b + 18 * OS1_S1 + 104) = prefactor_x * *(b + 18 * OS1_S1 + 76) -
                                       p_over_q * *(b + 28 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 55);
            *(b + 18 * OS1_S1 + 105) = prefactor_x * *(b + 18 * OS1_S1 + 77) -
                                       p_over_q * *(b + 28 * OS1_S1 + 77);
            *(b + 18 * OS1_S1 + 106) = prefactor_x * *(b + 18 * OS1_S1 + 78) -
                                       p_over_q * *(b + 28 * OS1_S1 + 78);
            *(b + 18 * OS1_S1 + 107) = prefactor_x * *(b + 18 * OS1_S1 + 79) -
                                       p_over_q * *(b + 28 * OS1_S1 + 79);
            *(b + 18 * OS1_S1 + 108) = prefactor_x * *(b + 18 * OS1_S1 + 80) -
                                       p_over_q * *(b + 28 * OS1_S1 + 80);
            *(b + 18 * OS1_S1 + 109) = prefactor_x * *(b + 18 * OS1_S1 + 81) -
                                       p_over_q * *(b + 28 * OS1_S1 + 81);
            *(b + 18 * OS1_S1 + 110) = prefactor_x * *(b + 18 * OS1_S1 + 82) -
                                       p_over_q * *(b + 28 * OS1_S1 + 82);
            *(b + 18 * OS1_S1 + 111) = prefactor_x * *(b + 18 * OS1_S1 + 83) -
                                       p_over_q * *(b + 28 * OS1_S1 + 83);
            *(b + 18 * OS1_S1 + 112) =
                prefactor_y * *(b + 18 * OS1_S1 + 77) -
                p_over_q * *(b + 32 * OS1_S1 + 77) +
                one_over_two_q * *(b + 9 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 18 * OS1_S1 + 50);
            *(b + 18 * OS1_S1 + 113) =
                prefactor_z * *(b + 18 * OS1_S1 + 77) -
                p_over_q * *(b + 33 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 77);
            *(b + 18 * OS1_S1 + 114) =
                prefactor_z * *(b + 18 * OS1_S1 + 78) -
                p_over_q * *(b + 33 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 78) +
                one_over_two_q * *(b + 18 * OS1_S1 + 50);
            *(b + 18 * OS1_S1 + 115) =
                prefactor_z * *(b + 18 * OS1_S1 + 79) -
                p_over_q * *(b + 33 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 51);
            *(b + 18 * OS1_S1 + 116) =
                prefactor_y * *(b + 18 * OS1_S1 + 81) -
                p_over_q * *(b + 32 * OS1_S1 + 81) +
                one_over_two_q * *(b + 9 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 54);
            *(b + 18 * OS1_S1 + 117) = prefactor_y * *(b + 18 * OS1_S1 + 82) -
                                       p_over_q * *(b + 32 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 55);
            *(b + 18 * OS1_S1 + 118) = prefactor_y * *(b + 18 * OS1_S1 + 83) -
                                       p_over_q * *(b + 32 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 83);
            *(b + 18 * OS1_S1 + 119) =
                prefactor_z * *(b + 18 * OS1_S1 + 83) -
                p_over_q * *(b + 33 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 18 * OS1_S1 + 55);
            *(b + 19 * OS1_S1 + 84) =
                prefactor_x * *(b + 19 * OS1_S1 + 56) -
                p_over_q * *(b + 29 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 19 * OS1_S1 + 35);
            *(b + 19 * OS1_S1 + 85) = prefactor_y * *(b + 19 * OS1_S1 + 56) -
                                      p_over_q * *(b + 33 * OS1_S1 + 56);
            *(b + 19 * OS1_S1 + 86) =
                prefactor_z * *(b + 19 * OS1_S1 + 56) -
                p_over_q * *(b + 34 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 56);
            *(b + 19 * OS1_S1 + 87) = prefactor_y * *(b + 19 * OS1_S1 + 57) -
                                      p_over_q * *(b + 33 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 35);
            *(b + 19 * OS1_S1 + 88) = prefactor_y * *(b + 19 * OS1_S1 + 58) -
                                      p_over_q * *(b + 33 * OS1_S1 + 58);
            *(b + 19 * OS1_S1 + 89) =
                prefactor_z * *(b + 19 * OS1_S1 + 58) -
                p_over_q * *(b + 34 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 58) +
                one_over_two_q * *(b + 19 * OS1_S1 + 35);
            *(b + 19 * OS1_S1 + 90) =
                prefactor_y * *(b + 19 * OS1_S1 + 59) -
                p_over_q * *(b + 33 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 36);
            *(b + 19 * OS1_S1 + 91) =
                prefactor_z * *(b + 19 * OS1_S1 + 59) -
                p_over_q * *(b + 34 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 59);
            *(b + 19 * OS1_S1 + 92) = prefactor_y * *(b + 19 * OS1_S1 + 61) -
                                      p_over_q * *(b + 33 * OS1_S1 + 61);
            *(b + 19 * OS1_S1 + 93) =
                prefactor_z * *(b + 19 * OS1_S1 + 61) -
                p_over_q * *(b + 34 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 37);
            *(b + 19 * OS1_S1 + 94) =
                prefactor_x * *(b + 19 * OS1_S1 + 66) -
                p_over_q * *(b + 29 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 45);
            *(b + 19 * OS1_S1 + 95) =
                prefactor_z * *(b + 19 * OS1_S1 + 62) -
                p_over_q * *(b + 34 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 62);
            *(b + 19 * OS1_S1 + 96) = prefactor_y * *(b + 19 * OS1_S1 + 64) -
                                      p_over_q * *(b + 33 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 40);
            *(b + 19 * OS1_S1 + 97) = prefactor_y * *(b + 19 * OS1_S1 + 65) -
                                      p_over_q * *(b + 33 * OS1_S1 + 65);
            *(b + 19 * OS1_S1 + 98) =
                prefactor_x * *(b + 19 * OS1_S1 + 70) -
                p_over_q * *(b + 29 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 49);
            *(b + 19 * OS1_S1 + 99) = prefactor_x * *(b + 19 * OS1_S1 + 71) -
                                      p_over_q * *(b + 29 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 50);
            *(b + 19 * OS1_S1 + 100) =
                prefactor_z * *(b + 19 * OS1_S1 + 66) -
                p_over_q * *(b + 34 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 66);
            *(b + 19 * OS1_S1 + 101) = prefactor_x * *(b + 19 * OS1_S1 + 73) -
                                       p_over_q * *(b + 29 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 52);
            *(b + 19 * OS1_S1 + 102) = prefactor_y * *(b + 19 * OS1_S1 + 69) -
                                       p_over_q * *(b + 33 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 44);
            *(b + 19 * OS1_S1 + 103) = prefactor_y * *(b + 19 * OS1_S1 + 70) -
                                       p_over_q * *(b + 33 * OS1_S1 + 70);
            *(b + 19 * OS1_S1 + 104) = prefactor_x * *(b + 19 * OS1_S1 + 76) -
                                       p_over_q * *(b + 29 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 55);
            *(b + 19 * OS1_S1 + 105) = prefactor_x * *(b + 19 * OS1_S1 + 77) -
                                       p_over_q * *(b + 29 * OS1_S1 + 77);
            *(b + 19 * OS1_S1 + 106) = prefactor_x * *(b + 19 * OS1_S1 + 78) -
                                       p_over_q * *(b + 29 * OS1_S1 + 78);
            *(b + 19 * OS1_S1 + 107) = prefactor_x * *(b + 19 * OS1_S1 + 79) -
                                       p_over_q * *(b + 29 * OS1_S1 + 79);
            *(b + 19 * OS1_S1 + 108) = prefactor_x * *(b + 19 * OS1_S1 + 80) -
                                       p_over_q * *(b + 29 * OS1_S1 + 80);
            *(b + 19 * OS1_S1 + 109) = prefactor_x * *(b + 19 * OS1_S1 + 81) -
                                       p_over_q * *(b + 29 * OS1_S1 + 81);
            *(b + 19 * OS1_S1 + 110) = prefactor_y * *(b + 19 * OS1_S1 + 76) -
                                       p_over_q * *(b + 33 * OS1_S1 + 76);
            *(b + 19 * OS1_S1 + 111) = prefactor_x * *(b + 19 * OS1_S1 + 83) -
                                       p_over_q * *(b + 29 * OS1_S1 + 83);
            *(b + 19 * OS1_S1 + 112) =
                prefactor_y * *(b + 19 * OS1_S1 + 77) -
                p_over_q * *(b + 33 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 19 * OS1_S1 + 50);
            *(b + 19 * OS1_S1 + 113) =
                prefactor_z * *(b + 19 * OS1_S1 + 77) -
                p_over_q * *(b + 34 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 77);
            *(b + 19 * OS1_S1 + 114) =
                prefactor_z * *(b + 19 * OS1_S1 + 78) -
                p_over_q * *(b + 34 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 78) +
                one_over_two_q * *(b + 19 * OS1_S1 + 50);
            *(b + 19 * OS1_S1 + 115) =
                prefactor_z * *(b + 19 * OS1_S1 + 79) -
                p_over_q * *(b + 34 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 51);
            *(b + 19 * OS1_S1 + 116) =
                prefactor_y * *(b + 19 * OS1_S1 + 81) -
                p_over_q * *(b + 33 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 54);
            *(b + 19 * OS1_S1 + 117) = prefactor_y * *(b + 19 * OS1_S1 + 82) -
                                       p_over_q * *(b + 33 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 55);
            *(b + 19 * OS1_S1 + 118) = prefactor_y * *(b + 19 * OS1_S1 + 83) -
                                       p_over_q * *(b + 33 * OS1_S1 + 83);
            *(b + 19 * OS1_S1 + 119) =
                prefactor_z * *(b + 19 * OS1_S1 + 83) -
                p_over_q * *(b + 34 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 19 * OS1_S1 + 55);
            return;
        }

        void transfer_7(const unsigned first_min,
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
                transfer_0_7(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 0)
                    break;
            case 1:
                transfer_1_7(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 1)
                    break;
            case 2:
                transfer_2_7(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 2)
                    break;
            case 3:
                transfer_3_7(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 3)
                    break;
            case 4:
                transfer_4_7(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 4)
                    break;
            case 5:
                transfer_5_7(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 5)
                    break;
            case 6:
                transfer_6_7(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 6)
                    break;
            case 7:
                transfer_7_7(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 7)
                    break;
            case 8:
                transfer_8_7(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 8)
                    break;
            case 9:
                transfer_9_7(prefactor_x,
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
