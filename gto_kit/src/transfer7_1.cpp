/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_4_7(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 20 * OS1_S1 + 84) =
                prefactor_x * *(b + 20 * OS1_S1 + 56) -
                p_over_q * *(b + 35 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 20 * OS1_S1 + 35);
            *(b + 20 * OS1_S1 + 85) = prefactor_y * *(b + 20 * OS1_S1 + 56) -
                                      p_over_q * *(b + 36 * OS1_S1 + 56);
            *(b + 20 * OS1_S1 + 86) = prefactor_z * *(b + 20 * OS1_S1 + 56) -
                                      p_over_q * *(b + 37 * OS1_S1 + 56);
            *(b + 20 * OS1_S1 + 87) = prefactor_y * *(b + 20 * OS1_S1 + 57) -
                                      p_over_q * *(b + 36 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 35);
            *(b + 20 * OS1_S1 + 88) = prefactor_z * *(b + 20 * OS1_S1 + 57) -
                                      p_over_q * *(b + 37 * OS1_S1 + 57);
            *(b + 20 * OS1_S1 + 89) = prefactor_z * *(b + 20 * OS1_S1 + 58) -
                                      p_over_q * *(b + 37 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 35);
            *(b + 20 * OS1_S1 + 90) =
                prefactor_y * *(b + 20 * OS1_S1 + 59) -
                p_over_q * *(b + 36 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 36);
            *(b + 20 * OS1_S1 + 91) = prefactor_z * *(b + 20 * OS1_S1 + 59) -
                                      p_over_q * *(b + 37 * OS1_S1 + 59);
            *(b + 20 * OS1_S1 + 92) = prefactor_y * *(b + 20 * OS1_S1 + 61) -
                                      p_over_q * *(b + 36 * OS1_S1 + 61);
            *(b + 20 * OS1_S1 + 93) =
                prefactor_z * *(b + 20 * OS1_S1 + 61) -
                p_over_q * *(b + 37 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 37);
            *(b + 20 * OS1_S1 + 94) =
                prefactor_x * *(b + 20 * OS1_S1 + 66) -
                p_over_q * *(b + 35 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 45);
            *(b + 20 * OS1_S1 + 95) = prefactor_z * *(b + 20 * OS1_S1 + 62) -
                                      p_over_q * *(b + 37 * OS1_S1 + 62);
            *(b + 20 * OS1_S1 + 96) = prefactor_z * *(b + 20 * OS1_S1 + 63) -
                                      p_over_q * *(b + 37 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 38);
            *(b + 20 * OS1_S1 + 97) = prefactor_y * *(b + 20 * OS1_S1 + 65) -
                                      p_over_q * *(b + 36 * OS1_S1 + 65);
            *(b + 20 * OS1_S1 + 98) =
                prefactor_x * *(b + 20 * OS1_S1 + 70) -
                p_over_q * *(b + 35 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 49);
            *(b + 20 * OS1_S1 + 99) =
                prefactor_x * *(b + 20 * OS1_S1 + 71) -
                p_over_q * *(b + 35 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 71) +
                one_over_two_q * *(b + 20 * OS1_S1 + 50);
            *(b + 20 * OS1_S1 + 100) = prefactor_z * *(b + 20 * OS1_S1 + 66) -
                                       p_over_q * *(b + 37 * OS1_S1 + 66);
            *(b + 20 * OS1_S1 + 101) = prefactor_z * *(b + 20 * OS1_S1 + 67) -
                                       p_over_q * *(b + 37 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 41);
            *(b + 20 * OS1_S1 + 102) = prefactor_y * *(b + 20 * OS1_S1 + 69) -
                                       p_over_q * *(b + 36 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 44);
            *(b + 20 * OS1_S1 + 103) = prefactor_y * *(b + 20 * OS1_S1 + 70) -
                                       p_over_q * *(b + 36 * OS1_S1 + 70);
            *(b + 20 * OS1_S1 + 104) =
                prefactor_x * *(b + 20 * OS1_S1 + 76) -
                p_over_q * *(b + 35 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 76) +
                one_over_two_q * *(b + 20 * OS1_S1 + 55);
            *(b + 20 * OS1_S1 + 105) =
                prefactor_x * *(b + 20 * OS1_S1 + 77) -
                p_over_q * *(b + 35 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 77);
            *(b + 20 * OS1_S1 + 106) = prefactor_z * *(b + 20 * OS1_S1 + 71) -
                                       p_over_q * *(b + 37 * OS1_S1 + 71);
            *(b + 20 * OS1_S1 + 107) =
                prefactor_x * *(b + 20 * OS1_S1 + 79) -
                p_over_q * *(b + 35 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 79);
            *(b + 20 * OS1_S1 + 108) =
                prefactor_x * *(b + 20 * OS1_S1 + 80) -
                p_over_q * *(b + 35 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 80);
            *(b + 20 * OS1_S1 + 109) =
                prefactor_x * *(b + 20 * OS1_S1 + 81) -
                p_over_q * *(b + 35 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 81);
            *(b + 20 * OS1_S1 + 110) = prefactor_y * *(b + 20 * OS1_S1 + 76) -
                                       p_over_q * *(b + 36 * OS1_S1 + 76);
            *(b + 20 * OS1_S1 + 111) =
                prefactor_x * *(b + 20 * OS1_S1 + 83) -
                p_over_q * *(b + 35 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 83);
            *(b + 20 * OS1_S1 + 112) =
                prefactor_y * *(b + 20 * OS1_S1 + 77) -
                p_over_q * *(b + 36 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 20 * OS1_S1 + 50);
            *(b + 20 * OS1_S1 + 113) = prefactor_z * *(b + 20 * OS1_S1 + 77) -
                                       p_over_q * *(b + 37 * OS1_S1 + 77);
            *(b + 20 * OS1_S1 + 114) = prefactor_z * *(b + 20 * OS1_S1 + 78) -
                                       p_over_q * *(b + 37 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 50);
            *(b + 20 * OS1_S1 + 115) =
                prefactor_z * *(b + 20 * OS1_S1 + 79) -
                p_over_q * *(b + 37 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 51);
            *(b + 20 * OS1_S1 + 116) =
                prefactor_y * *(b + 20 * OS1_S1 + 81) -
                p_over_q * *(b + 36 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 54);
            *(b + 20 * OS1_S1 + 117) = prefactor_y * *(b + 20 * OS1_S1 + 82) -
                                       p_over_q * *(b + 36 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 55);
            *(b + 20 * OS1_S1 + 118) = prefactor_y * *(b + 20 * OS1_S1 + 83) -
                                       p_over_q * *(b + 36 * OS1_S1 + 83);
            *(b + 20 * OS1_S1 + 119) =
                prefactor_z * *(b + 20 * OS1_S1 + 83) -
                p_over_q * *(b + 37 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 20 * OS1_S1 + 55);
            *(b + 21 * OS1_S1 + 84) =
                prefactor_x * *(b + 21 * OS1_S1 + 56) -
                p_over_q * *(b + 36 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 21 * OS1_S1 + 35);
            *(b + 21 * OS1_S1 + 85) = prefactor_y * *(b + 21 * OS1_S1 + 56) -
                                      p_over_q * *(b + 38 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 56);
            *(b + 21 * OS1_S1 + 86) = prefactor_z * *(b + 21 * OS1_S1 + 56) -
                                      p_over_q * *(b + 39 * OS1_S1 + 56);
            *(b + 21 * OS1_S1 + 87) = prefactor_y * *(b + 21 * OS1_S1 + 57) -
                                      p_over_q * *(b + 38 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 35);
            *(b + 21 * OS1_S1 + 88) = prefactor_z * *(b + 21 * OS1_S1 + 57) -
                                      p_over_q * *(b + 39 * OS1_S1 + 57);
            *(b + 21 * OS1_S1 + 89) = prefactor_z * *(b + 21 * OS1_S1 + 58) -
                                      p_over_q * *(b + 39 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 35);
            *(b + 21 * OS1_S1 + 90) =
                prefactor_y * *(b + 21 * OS1_S1 + 59) -
                p_over_q * *(b + 38 * OS1_S1 + 59) +
                one_over_two_q * *(b + 10 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 36);
            *(b + 21 * OS1_S1 + 91) = prefactor_z * *(b + 21 * OS1_S1 + 59) -
                                      p_over_q * *(b + 39 * OS1_S1 + 59);
            *(b + 21 * OS1_S1 + 92) = prefactor_y * *(b + 21 * OS1_S1 + 61) -
                                      p_over_q * *(b + 38 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 61);
            *(b + 21 * OS1_S1 + 93) =
                prefactor_z * *(b + 21 * OS1_S1 + 61) -
                p_over_q * *(b + 39 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 37);
            *(b + 21 * OS1_S1 + 94) =
                prefactor_x * *(b + 21 * OS1_S1 + 66) -
                p_over_q * *(b + 36 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 45);
            *(b + 21 * OS1_S1 + 95) = prefactor_z * *(b + 21 * OS1_S1 + 62) -
                                      p_over_q * *(b + 39 * OS1_S1 + 62);
            *(b + 21 * OS1_S1 + 96) = prefactor_z * *(b + 21 * OS1_S1 + 63) -
                                      p_over_q * *(b + 39 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 38);
            *(b + 21 * OS1_S1 + 97) = prefactor_y * *(b + 21 * OS1_S1 + 65) -
                                      p_over_q * *(b + 38 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 65);
            *(b + 21 * OS1_S1 + 98) =
                prefactor_x * *(b + 21 * OS1_S1 + 70) -
                p_over_q * *(b + 36 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 49);
            *(b + 21 * OS1_S1 + 99) =
                prefactor_x * *(b + 21 * OS1_S1 + 71) -
                p_over_q * *(b + 36 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 71) +
                one_over_two_q * *(b + 21 * OS1_S1 + 50);
            *(b + 21 * OS1_S1 + 100) = prefactor_z * *(b + 21 * OS1_S1 + 66) -
                                       p_over_q * *(b + 39 * OS1_S1 + 66);
            *(b + 21 * OS1_S1 + 101) = prefactor_z * *(b + 21 * OS1_S1 + 67) -
                                       p_over_q * *(b + 39 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 41);
            *(b + 21 * OS1_S1 + 102) =
                prefactor_y * *(b + 21 * OS1_S1 + 69) -
                p_over_q * *(b + 38 * OS1_S1 + 69) +
                one_over_two_q * *(b + 10 * OS1_S1 + 69) +
                one_over_two_q * *(b + 21 * OS1_S1 + 44);
            *(b + 21 * OS1_S1 + 103) = prefactor_y * *(b + 21 * OS1_S1 + 70) -
                                       p_over_q * *(b + 38 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 70);
            *(b + 21 * OS1_S1 + 104) =
                prefactor_x * *(b + 21 * OS1_S1 + 76) -
                p_over_q * *(b + 36 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 76) +
                one_over_two_q * *(b + 21 * OS1_S1 + 55);
            *(b + 21 * OS1_S1 + 105) =
                prefactor_x * *(b + 21 * OS1_S1 + 77) -
                p_over_q * *(b + 36 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 77);
            *(b + 21 * OS1_S1 + 106) = prefactor_z * *(b + 21 * OS1_S1 + 71) -
                                       p_over_q * *(b + 39 * OS1_S1 + 71);
            *(b + 21 * OS1_S1 + 107) =
                prefactor_x * *(b + 21 * OS1_S1 + 79) -
                p_over_q * *(b + 36 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 79);
            *(b + 21 * OS1_S1 + 108) =
                prefactor_x * *(b + 21 * OS1_S1 + 80) -
                p_over_q * *(b + 36 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 80);
            *(b + 21 * OS1_S1 + 109) =
                prefactor_x * *(b + 21 * OS1_S1 + 81) -
                p_over_q * *(b + 36 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 81);
            *(b + 21 * OS1_S1 + 110) = prefactor_y * *(b + 21 * OS1_S1 + 76) -
                                       p_over_q * *(b + 38 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 76);
            *(b + 21 * OS1_S1 + 111) =
                prefactor_x * *(b + 21 * OS1_S1 + 83) -
                p_over_q * *(b + 36 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 83);
            *(b + 21 * OS1_S1 + 112) =
                prefactor_y * *(b + 21 * OS1_S1 + 77) -
                p_over_q * *(b + 38 * OS1_S1 + 77) +
                one_over_two_q * *(b + 10 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 21 * OS1_S1 + 50);
            *(b + 21 * OS1_S1 + 113) = prefactor_z * *(b + 21 * OS1_S1 + 77) -
                                       p_over_q * *(b + 39 * OS1_S1 + 77);
            *(b + 21 * OS1_S1 + 114) = prefactor_z * *(b + 21 * OS1_S1 + 78) -
                                       p_over_q * *(b + 39 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 50);
            *(b + 21 * OS1_S1 + 115) =
                prefactor_z * *(b + 21 * OS1_S1 + 79) -
                p_over_q * *(b + 39 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 51);
            *(b + 21 * OS1_S1 + 116) =
                prefactor_y * *(b + 21 * OS1_S1 + 81) -
                p_over_q * *(b + 38 * OS1_S1 + 81) +
                one_over_two_q * *(b + 10 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 54);
            *(b + 21 * OS1_S1 + 117) =
                prefactor_y * *(b + 21 * OS1_S1 + 82) -
                p_over_q * *(b + 38 * OS1_S1 + 82) +
                one_over_two_q * *(b + 10 * OS1_S1 + 82) +
                one_over_two_q * *(b + 21 * OS1_S1 + 55);
            *(b + 21 * OS1_S1 + 118) = prefactor_y * *(b + 21 * OS1_S1 + 83) -
                                       p_over_q * *(b + 38 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 83);
            *(b + 21 * OS1_S1 + 119) =
                prefactor_z * *(b + 21 * OS1_S1 + 83) -
                p_over_q * *(b + 39 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 21 * OS1_S1 + 55);
            *(b + 22 * OS1_S1 + 84) =
                prefactor_x * *(b + 22 * OS1_S1 + 56) -
                p_over_q * *(b + 37 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 22 * OS1_S1 + 35);
            *(b + 22 * OS1_S1 + 85) = prefactor_y * *(b + 22 * OS1_S1 + 56) -
                                      p_over_q * *(b + 39 * OS1_S1 + 56);
            *(b + 22 * OS1_S1 + 86) = prefactor_z * *(b + 22 * OS1_S1 + 56) -
                                      p_over_q * *(b + 40 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 56);
            *(b + 22 * OS1_S1 + 87) = prefactor_y * *(b + 22 * OS1_S1 + 57) -
                                      p_over_q * *(b + 39 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 35);
            *(b + 22 * OS1_S1 + 88) = prefactor_y * *(b + 22 * OS1_S1 + 58) -
                                      p_over_q * *(b + 39 * OS1_S1 + 58);
            *(b + 22 * OS1_S1 + 89) = prefactor_z * *(b + 22 * OS1_S1 + 58) -
                                      p_over_q * *(b + 40 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 35);
            *(b + 22 * OS1_S1 + 90) =
                prefactor_y * *(b + 22 * OS1_S1 + 59) -
                p_over_q * *(b + 39 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 36);
            *(b + 22 * OS1_S1 + 91) = prefactor_z * *(b + 22 * OS1_S1 + 59) -
                                      p_over_q * *(b + 40 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 59);
            *(b + 22 * OS1_S1 + 92) = prefactor_y * *(b + 22 * OS1_S1 + 61) -
                                      p_over_q * *(b + 39 * OS1_S1 + 61);
            *(b + 22 * OS1_S1 + 93) =
                prefactor_z * *(b + 22 * OS1_S1 + 61) -
                p_over_q * *(b + 40 * OS1_S1 + 61) +
                one_over_two_q * *(b + 10 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 37);
            *(b + 22 * OS1_S1 + 94) =
                prefactor_x * *(b + 22 * OS1_S1 + 66) -
                p_over_q * *(b + 37 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 45);
            *(b + 22 * OS1_S1 + 95) = prefactor_z * *(b + 22 * OS1_S1 + 62) -
                                      p_over_q * *(b + 40 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 10 * OS1_S1 + 62);
            *(b + 22 * OS1_S1 + 96) = prefactor_y * *(b + 22 * OS1_S1 + 64) -
                                      p_over_q * *(b + 39 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 40);
            *(b + 22 * OS1_S1 + 97) = prefactor_y * *(b + 22 * OS1_S1 + 65) -
                                      p_over_q * *(b + 39 * OS1_S1 + 65);
            *(b + 22 * OS1_S1 + 98) =
                prefactor_x * *(b + 22 * OS1_S1 + 70) -
                p_over_q * *(b + 37 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 49);
            *(b + 22 * OS1_S1 + 99) =
                prefactor_x * *(b + 22 * OS1_S1 + 71) -
                p_over_q * *(b + 37 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 71) +
                one_over_two_q * *(b + 22 * OS1_S1 + 50);
            *(b + 22 * OS1_S1 + 100) = prefactor_z * *(b + 22 * OS1_S1 + 66) -
                                       p_over_q * *(b + 40 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 66);
            *(b + 22 * OS1_S1 + 101) =
                prefactor_z * *(b + 22 * OS1_S1 + 67) -
                p_over_q * *(b + 40 * OS1_S1 + 67) +
                one_over_two_q * *(b + 10 * OS1_S1 + 67) +
                one_over_two_q * *(b + 22 * OS1_S1 + 41);
            *(b + 22 * OS1_S1 + 102) = prefactor_y * *(b + 22 * OS1_S1 + 69) -
                                       p_over_q * *(b + 39 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 44);
            *(b + 22 * OS1_S1 + 103) = prefactor_y * *(b + 22 * OS1_S1 + 70) -
                                       p_over_q * *(b + 39 * OS1_S1 + 70);
            *(b + 22 * OS1_S1 + 104) =
                prefactor_x * *(b + 22 * OS1_S1 + 76) -
                p_over_q * *(b + 37 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 76) +
                one_over_two_q * *(b + 22 * OS1_S1 + 55);
            *(b + 22 * OS1_S1 + 105) =
                prefactor_x * *(b + 22 * OS1_S1 + 77) -
                p_over_q * *(b + 37 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 77);
            *(b + 22 * OS1_S1 + 106) = prefactor_z * *(b + 22 * OS1_S1 + 71) -
                                       p_over_q * *(b + 40 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 71);
            *(b + 22 * OS1_S1 + 107) =
                prefactor_x * *(b + 22 * OS1_S1 + 79) -
                p_over_q * *(b + 37 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 79);
            *(b + 22 * OS1_S1 + 108) =
                prefactor_x * *(b + 22 * OS1_S1 + 80) -
                p_over_q * *(b + 37 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 80);
            *(b + 22 * OS1_S1 + 109) =
                prefactor_x * *(b + 22 * OS1_S1 + 81) -
                p_over_q * *(b + 37 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 81);
            *(b + 22 * OS1_S1 + 110) = prefactor_y * *(b + 22 * OS1_S1 + 76) -
                                       p_over_q * *(b + 39 * OS1_S1 + 76);
            *(b + 22 * OS1_S1 + 111) =
                prefactor_x * *(b + 22 * OS1_S1 + 83) -
                p_over_q * *(b + 37 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 83);
            *(b + 22 * OS1_S1 + 112) =
                prefactor_y * *(b + 22 * OS1_S1 + 77) -
                p_over_q * *(b + 39 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 22 * OS1_S1 + 50);
            *(b + 22 * OS1_S1 + 113) = prefactor_z * *(b + 22 * OS1_S1 + 77) -
                                       p_over_q * *(b + 40 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 77);
            *(b + 22 * OS1_S1 + 114) =
                prefactor_z * *(b + 22 * OS1_S1 + 78) -
                p_over_q * *(b + 40 * OS1_S1 + 78) +
                one_over_two_q * *(b + 10 * OS1_S1 + 78) +
                one_over_two_q * *(b + 22 * OS1_S1 + 50);
            *(b + 22 * OS1_S1 + 115) =
                prefactor_z * *(b + 22 * OS1_S1 + 79) -
                p_over_q * *(b + 40 * OS1_S1 + 79) +
                one_over_two_q * *(b + 10 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 51);
            *(b + 22 * OS1_S1 + 116) =
                prefactor_y * *(b + 22 * OS1_S1 + 81) -
                p_over_q * *(b + 39 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 54);
            *(b + 22 * OS1_S1 + 117) = prefactor_y * *(b + 22 * OS1_S1 + 82) -
                                       p_over_q * *(b + 39 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 55);
            *(b + 22 * OS1_S1 + 118) = prefactor_y * *(b + 22 * OS1_S1 + 83) -
                                       p_over_q * *(b + 39 * OS1_S1 + 83);
            *(b + 22 * OS1_S1 + 119) =
                prefactor_z * *(b + 22 * OS1_S1 + 83) -
                p_over_q * *(b + 40 * OS1_S1 + 83) +
                one_over_two_q * *(b + 10 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 22 * OS1_S1 + 55);
            *(b + 23 * OS1_S1 + 84) =
                prefactor_x * *(b + 23 * OS1_S1 + 56) -
                p_over_q * *(b + 38 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 23 * OS1_S1 + 35);
            *(b + 23 * OS1_S1 + 85) =
                prefactor_y * *(b + 23 * OS1_S1 + 56) -
                p_over_q * *(b + 41 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 56);
            *(b + 23 * OS1_S1 + 86) = prefactor_z * *(b + 23 * OS1_S1 + 56) -
                                      p_over_q * *(b + 42 * OS1_S1 + 56);
            *(b + 23 * OS1_S1 + 87) =
                prefactor_y * *(b + 23 * OS1_S1 + 57) -
                p_over_q * *(b + 41 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 57) +
                one_over_two_q * *(b + 23 * OS1_S1 + 35);
            *(b + 23 * OS1_S1 + 88) = prefactor_z * *(b + 23 * OS1_S1 + 57) -
                                      p_over_q * *(b + 42 * OS1_S1 + 57);
            *(b + 23 * OS1_S1 + 89) = prefactor_z * *(b + 23 * OS1_S1 + 58) -
                                      p_over_q * *(b + 42 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 35);
            *(b + 23 * OS1_S1 + 90) =
                prefactor_y * *(b + 23 * OS1_S1 + 59) -
                p_over_q * *(b + 41 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 36);
            *(b + 23 * OS1_S1 + 91) = prefactor_z * *(b + 23 * OS1_S1 + 59) -
                                      p_over_q * *(b + 42 * OS1_S1 + 59);
            *(b + 23 * OS1_S1 + 92) =
                prefactor_y * *(b + 23 * OS1_S1 + 61) -
                p_over_q * *(b + 41 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 61);
            *(b + 23 * OS1_S1 + 93) =
                prefactor_z * *(b + 23 * OS1_S1 + 61) -
                p_over_q * *(b + 42 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 37);
            *(b + 23 * OS1_S1 + 94) =
                prefactor_x * *(b + 23 * OS1_S1 + 66) -
                p_over_q * *(b + 38 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 45);
            *(b + 23 * OS1_S1 + 95) = prefactor_z * *(b + 23 * OS1_S1 + 62) -
                                      p_over_q * *(b + 42 * OS1_S1 + 62);
            *(b + 23 * OS1_S1 + 96) = prefactor_z * *(b + 23 * OS1_S1 + 63) -
                                      p_over_q * *(b + 42 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 38);
            *(b + 23 * OS1_S1 + 97) =
                prefactor_y * *(b + 23 * OS1_S1 + 65) -
                p_over_q * *(b + 41 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 65);
            *(b + 23 * OS1_S1 + 98) =
                prefactor_x * *(b + 23 * OS1_S1 + 70) -
                p_over_q * *(b + 38 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 49);
            *(b + 23 * OS1_S1 + 99) =
                prefactor_x * *(b + 23 * OS1_S1 + 71) -
                p_over_q * *(b + 38 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 71) +
                one_over_two_q * *(b + 23 * OS1_S1 + 50);
            *(b + 23 * OS1_S1 + 100) = prefactor_z * *(b + 23 * OS1_S1 + 66) -
                                       p_over_q * *(b + 42 * OS1_S1 + 66);
            *(b + 23 * OS1_S1 + 101) = prefactor_z * *(b + 23 * OS1_S1 + 67) -
                                       p_over_q * *(b + 42 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 41);
            *(b + 23 * OS1_S1 + 102) =
                prefactor_y * *(b + 23 * OS1_S1 + 69) -
                p_over_q * *(b + 41 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 69) +
                one_over_two_q * *(b + 23 * OS1_S1 + 44);
            *(b + 23 * OS1_S1 + 103) =
                prefactor_y * *(b + 23 * OS1_S1 + 70) -
                p_over_q * *(b + 41 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 70);
            *(b + 23 * OS1_S1 + 104) =
                prefactor_x * *(b + 23 * OS1_S1 + 76) -
                p_over_q * *(b + 38 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 76) +
                one_over_two_q * *(b + 23 * OS1_S1 + 55);
            *(b + 23 * OS1_S1 + 105) =
                prefactor_x * *(b + 23 * OS1_S1 + 77) -
                p_over_q * *(b + 38 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 77);
            *(b + 23 * OS1_S1 + 106) = prefactor_z * *(b + 23 * OS1_S1 + 71) -
                                       p_over_q * *(b + 42 * OS1_S1 + 71);
            *(b + 23 * OS1_S1 + 107) =
                prefactor_x * *(b + 23 * OS1_S1 + 79) -
                p_over_q * *(b + 38 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 79);
            *(b + 23 * OS1_S1 + 108) =
                prefactor_x * *(b + 23 * OS1_S1 + 80) -
                p_over_q * *(b + 38 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 80);
            *(b + 23 * OS1_S1 + 109) =
                prefactor_x * *(b + 23 * OS1_S1 + 81) -
                p_over_q * *(b + 38 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 81);
            *(b + 23 * OS1_S1 + 110) =
                prefactor_y * *(b + 23 * OS1_S1 + 76) -
                p_over_q * *(b + 41 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 76);
            *(b + 23 * OS1_S1 + 111) =
                prefactor_x * *(b + 23 * OS1_S1 + 83) -
                p_over_q * *(b + 38 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 83);
            *(b + 23 * OS1_S1 + 112) =
                prefactor_y * *(b + 23 * OS1_S1 + 77) -
                p_over_q * *(b + 41 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 23 * OS1_S1 + 50);
            *(b + 23 * OS1_S1 + 113) = prefactor_z * *(b + 23 * OS1_S1 + 77) -
                                       p_over_q * *(b + 42 * OS1_S1 + 77);
            *(b + 23 * OS1_S1 + 114) = prefactor_z * *(b + 23 * OS1_S1 + 78) -
                                       p_over_q * *(b + 42 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 50);
            *(b + 23 * OS1_S1 + 115) =
                prefactor_z * *(b + 23 * OS1_S1 + 79) -
                p_over_q * *(b + 42 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 51);
            *(b + 23 * OS1_S1 + 116) =
                prefactor_y * *(b + 23 * OS1_S1 + 81) -
                p_over_q * *(b + 41 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 54);
            *(b + 23 * OS1_S1 + 117) =
                prefactor_y * *(b + 23 * OS1_S1 + 82) -
                p_over_q * *(b + 41 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 82) +
                one_over_two_q * *(b + 23 * OS1_S1 + 55);
            *(b + 23 * OS1_S1 + 118) =
                prefactor_y * *(b + 23 * OS1_S1 + 83) -
                p_over_q * *(b + 41 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 83);
            *(b + 23 * OS1_S1 + 119) =
                prefactor_z * *(b + 23 * OS1_S1 + 83) -
                p_over_q * *(b + 42 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 23 * OS1_S1 + 55);
            *(b + 24 * OS1_S1 + 84) =
                prefactor_x * *(b + 24 * OS1_S1 + 56) -
                p_over_q * *(b + 39 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 24 * OS1_S1 + 35);
            *(b + 24 * OS1_S1 + 85) = prefactor_y * *(b + 24 * OS1_S1 + 56) -
                                      p_over_q * *(b + 42 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 56);
            *(b + 24 * OS1_S1 + 86) = prefactor_z * *(b + 24 * OS1_S1 + 56) -
                                      p_over_q * *(b + 43 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 56);
            *(b + 24 * OS1_S1 + 87) = prefactor_y * *(b + 24 * OS1_S1 + 57) -
                                      p_over_q * *(b + 42 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 35);
            *(b + 24 * OS1_S1 + 88) = prefactor_z * *(b + 24 * OS1_S1 + 57) -
                                      p_over_q * *(b + 43 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 57);
            *(b + 24 * OS1_S1 + 89) = prefactor_z * *(b + 24 * OS1_S1 + 58) -
                                      p_over_q * *(b + 43 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 35);
            *(b + 24 * OS1_S1 + 90) =
                prefactor_y * *(b + 24 * OS1_S1 + 59) -
                p_over_q * *(b + 42 * OS1_S1 + 59) +
                one_over_two_q * *(b + 12 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 36);
            *(b + 24 * OS1_S1 + 91) = prefactor_z * *(b + 24 * OS1_S1 + 59) -
                                      p_over_q * *(b + 43 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 59);
            *(b + 24 * OS1_S1 + 92) = prefactor_y * *(b + 24 * OS1_S1 + 61) -
                                      p_over_q * *(b + 42 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 61);
            *(b + 24 * OS1_S1 + 93) =
                prefactor_z * *(b + 24 * OS1_S1 + 61) -
                p_over_q * *(b + 43 * OS1_S1 + 61) +
                one_over_two_q * *(b + 11 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 37);
            *(b + 24 * OS1_S1 + 94) =
                prefactor_x * *(b + 24 * OS1_S1 + 66) -
                p_over_q * *(b + 39 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 45);
            *(b + 24 * OS1_S1 + 95) = prefactor_z * *(b + 24 * OS1_S1 + 62) -
                                      p_over_q * *(b + 43 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 62);
            *(b + 24 * OS1_S1 + 96) = prefactor_z * *(b + 24 * OS1_S1 + 63) -
                                      p_over_q * *(b + 43 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 11 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 24 * OS1_S1 + 38);
            *(b + 24 * OS1_S1 + 97) = prefactor_y * *(b + 24 * OS1_S1 + 65) -
                                      p_over_q * *(b + 42 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 12 * OS1_S1 + 65);
            *(b + 24 * OS1_S1 + 98) =
                prefactor_x * *(b + 24 * OS1_S1 + 70) -
                p_over_q * *(b + 39 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 49);
            *(b + 24 * OS1_S1 + 99) =
                prefactor_x * *(b + 24 * OS1_S1 + 71) -
                p_over_q * *(b + 39 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 71) +
                one_over_two_q * *(b + 24 * OS1_S1 + 50);
            *(b + 24 * OS1_S1 + 100) = prefactor_z * *(b + 24 * OS1_S1 + 66) -
                                       p_over_q * *(b + 43 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 66);
            *(b + 24 * OS1_S1 + 101) =
                prefactor_z * *(b + 24 * OS1_S1 + 67) -
                p_over_q * *(b + 43 * OS1_S1 + 67) +
                one_over_two_q * *(b + 11 * OS1_S1 + 67) +
                one_over_two_q * *(b + 24 * OS1_S1 + 41);
            *(b + 24 * OS1_S1 + 102) =
                prefactor_y * *(b + 24 * OS1_S1 + 69) -
                p_over_q * *(b + 42 * OS1_S1 + 69) +
                one_over_two_q * *(b + 12 * OS1_S1 + 69) +
                one_over_two_q * *(b + 24 * OS1_S1 + 44);
            *(b + 24 * OS1_S1 + 103) = prefactor_y * *(b + 24 * OS1_S1 + 70) -
                                       p_over_q * *(b + 42 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 70);
            *(b + 24 * OS1_S1 + 104) =
                prefactor_x * *(b + 24 * OS1_S1 + 76) -
                p_over_q * *(b + 39 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 76) +
                one_over_two_q * *(b + 24 * OS1_S1 + 55);
            *(b + 24 * OS1_S1 + 105) =
                prefactor_x * *(b + 24 * OS1_S1 + 77) -
                p_over_q * *(b + 39 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 77);
            *(b + 24 * OS1_S1 + 106) = prefactor_z * *(b + 24 * OS1_S1 + 71) -
                                       p_over_q * *(b + 43 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 71);
            *(b + 24 * OS1_S1 + 107) =
                prefactor_x * *(b + 24 * OS1_S1 + 79) -
                p_over_q * *(b + 39 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 79);
            *(b + 24 * OS1_S1 + 108) =
                prefactor_x * *(b + 24 * OS1_S1 + 80) -
                p_over_q * *(b + 39 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 80);
            *(b + 24 * OS1_S1 + 109) =
                prefactor_x * *(b + 24 * OS1_S1 + 81) -
                p_over_q * *(b + 39 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 81);
            *(b + 24 * OS1_S1 + 110) = prefactor_y * *(b + 24 * OS1_S1 + 76) -
                                       p_over_q * *(b + 42 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 76);
            *(b + 24 * OS1_S1 + 111) =
                prefactor_x * *(b + 24 * OS1_S1 + 83) -
                p_over_q * *(b + 39 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 83);
            *(b + 24 * OS1_S1 + 112) =
                prefactor_y * *(b + 24 * OS1_S1 + 77) -
                p_over_q * *(b + 42 * OS1_S1 + 77) +
                one_over_two_q * *(b + 12 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 24 * OS1_S1 + 50);
            *(b + 24 * OS1_S1 + 113) = prefactor_z * *(b + 24 * OS1_S1 + 77) -
                                       p_over_q * *(b + 43 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 77);
            *(b + 24 * OS1_S1 + 114) =
                prefactor_z * *(b + 24 * OS1_S1 + 78) -
                p_over_q * *(b + 43 * OS1_S1 + 78) +
                one_over_two_q * *(b + 11 * OS1_S1 + 78) +
                one_over_two_q * *(b + 24 * OS1_S1 + 50);
            *(b + 24 * OS1_S1 + 115) =
                prefactor_z * *(b + 24 * OS1_S1 + 79) -
                p_over_q * *(b + 43 * OS1_S1 + 79) +
                one_over_two_q * *(b + 11 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 51);
            *(b + 24 * OS1_S1 + 116) =
                prefactor_y * *(b + 24 * OS1_S1 + 81) -
                p_over_q * *(b + 42 * OS1_S1 + 81) +
                one_over_two_q * *(b + 12 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 54);
            *(b + 24 * OS1_S1 + 117) =
                prefactor_y * *(b + 24 * OS1_S1 + 82) -
                p_over_q * *(b + 42 * OS1_S1 + 82) +
                one_over_two_q * *(b + 12 * OS1_S1 + 82) +
                one_over_two_q * *(b + 24 * OS1_S1 + 55);
            *(b + 24 * OS1_S1 + 118) = prefactor_y * *(b + 24 * OS1_S1 + 83) -
                                       p_over_q * *(b + 42 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 83);
            *(b + 24 * OS1_S1 + 119) =
                prefactor_z * *(b + 24 * OS1_S1 + 83) -
                p_over_q * *(b + 43 * OS1_S1 + 83) +
                one_over_two_q * *(b + 11 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 24 * OS1_S1 + 55);
            *(b + 25 * OS1_S1 + 84) =
                prefactor_x * *(b + 25 * OS1_S1 + 56) -
                p_over_q * *(b + 40 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 25 * OS1_S1 + 35);
            *(b + 25 * OS1_S1 + 85) = prefactor_y * *(b + 25 * OS1_S1 + 56) -
                                      p_over_q * *(b + 43 * OS1_S1 + 56);
            *(b + 25 * OS1_S1 + 86) =
                prefactor_z * *(b + 25 * OS1_S1 + 56) -
                p_over_q * *(b + 44 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 56);
            *(b + 25 * OS1_S1 + 87) = prefactor_y * *(b + 25 * OS1_S1 + 57) -
                                      p_over_q * *(b + 43 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 35);
            *(b + 25 * OS1_S1 + 88) = prefactor_y * *(b + 25 * OS1_S1 + 58) -
                                      p_over_q * *(b + 43 * OS1_S1 + 58);
            *(b + 25 * OS1_S1 + 89) =
                prefactor_z * *(b + 25 * OS1_S1 + 58) -
                p_over_q * *(b + 44 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 58) +
                one_over_two_q * *(b + 25 * OS1_S1 + 35);
            *(b + 25 * OS1_S1 + 90) =
                prefactor_y * *(b + 25 * OS1_S1 + 59) -
                p_over_q * *(b + 43 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 36);
            *(b + 25 * OS1_S1 + 91) =
                prefactor_z * *(b + 25 * OS1_S1 + 59) -
                p_over_q * *(b + 44 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 59);
            *(b + 25 * OS1_S1 + 92) = prefactor_y * *(b + 25 * OS1_S1 + 61) -
                                      p_over_q * *(b + 43 * OS1_S1 + 61);
            *(b + 25 * OS1_S1 + 93) =
                prefactor_z * *(b + 25 * OS1_S1 + 61) -
                p_over_q * *(b + 44 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 37);
            *(b + 25 * OS1_S1 + 94) =
                prefactor_x * *(b + 25 * OS1_S1 + 66) -
                p_over_q * *(b + 40 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 45);
            *(b + 25 * OS1_S1 + 95) =
                prefactor_z * *(b + 25 * OS1_S1 + 62) -
                p_over_q * *(b + 44 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 62);
            *(b + 25 * OS1_S1 + 96) = prefactor_y * *(b + 25 * OS1_S1 + 64) -
                                      p_over_q * *(b + 43 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 40);
            *(b + 25 * OS1_S1 + 97) = prefactor_y * *(b + 25 * OS1_S1 + 65) -
                                      p_over_q * *(b + 43 * OS1_S1 + 65);
            *(b + 25 * OS1_S1 + 98) =
                prefactor_x * *(b + 25 * OS1_S1 + 70) -
                p_over_q * *(b + 40 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 49);
            *(b + 25 * OS1_S1 + 99) =
                prefactor_x * *(b + 25 * OS1_S1 + 71) -
                p_over_q * *(b + 40 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 71) +
                one_over_two_q * *(b + 25 * OS1_S1 + 50);
            *(b + 25 * OS1_S1 + 100) =
                prefactor_z * *(b + 25 * OS1_S1 + 66) -
                p_over_q * *(b + 44 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 66);
            *(b + 25 * OS1_S1 + 101) =
                prefactor_z * *(b + 25 * OS1_S1 + 67) -
                p_over_q * *(b + 44 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 67) +
                one_over_two_q * *(b + 25 * OS1_S1 + 41);
            *(b + 25 * OS1_S1 + 102) = prefactor_y * *(b + 25 * OS1_S1 + 69) -
                                       p_over_q * *(b + 43 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 44);
            *(b + 25 * OS1_S1 + 103) = prefactor_y * *(b + 25 * OS1_S1 + 70) -
                                       p_over_q * *(b + 43 * OS1_S1 + 70);
            *(b + 25 * OS1_S1 + 104) =
                prefactor_x * *(b + 25 * OS1_S1 + 76) -
                p_over_q * *(b + 40 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 76) +
                one_over_two_q * *(b + 25 * OS1_S1 + 55);
            *(b + 25 * OS1_S1 + 105) =
                prefactor_x * *(b + 25 * OS1_S1 + 77) -
                p_over_q * *(b + 40 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 77);
            *(b + 25 * OS1_S1 + 106) =
                prefactor_z * *(b + 25 * OS1_S1 + 71) -
                p_over_q * *(b + 44 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 71);
            *(b + 25 * OS1_S1 + 107) =
                prefactor_x * *(b + 25 * OS1_S1 + 79) -
                p_over_q * *(b + 40 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 79);
            *(b + 25 * OS1_S1 + 108) =
                prefactor_x * *(b + 25 * OS1_S1 + 80) -
                p_over_q * *(b + 40 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 80);
            *(b + 25 * OS1_S1 + 109) =
                prefactor_x * *(b + 25 * OS1_S1 + 81) -
                p_over_q * *(b + 40 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 81);
            *(b + 25 * OS1_S1 + 110) = prefactor_y * *(b + 25 * OS1_S1 + 76) -
                                       p_over_q * *(b + 43 * OS1_S1 + 76);
            *(b + 25 * OS1_S1 + 111) =
                prefactor_x * *(b + 25 * OS1_S1 + 83) -
                p_over_q * *(b + 40 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 83);
            *(b + 25 * OS1_S1 + 112) =
                prefactor_y * *(b + 25 * OS1_S1 + 77) -
                p_over_q * *(b + 43 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 25 * OS1_S1 + 50);
            *(b + 25 * OS1_S1 + 113) =
                prefactor_z * *(b + 25 * OS1_S1 + 77) -
                p_over_q * *(b + 44 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 77);
            *(b + 25 * OS1_S1 + 114) =
                prefactor_z * *(b + 25 * OS1_S1 + 78) -
                p_over_q * *(b + 44 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 78) +
                one_over_two_q * *(b + 25 * OS1_S1 + 50);
            *(b + 25 * OS1_S1 + 115) =
                prefactor_z * *(b + 25 * OS1_S1 + 79) -
                p_over_q * *(b + 44 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 51);
            *(b + 25 * OS1_S1 + 116) =
                prefactor_y * *(b + 25 * OS1_S1 + 81) -
                p_over_q * *(b + 43 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 54);
            *(b + 25 * OS1_S1 + 117) = prefactor_y * *(b + 25 * OS1_S1 + 82) -
                                       p_over_q * *(b + 43 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 55);
            *(b + 25 * OS1_S1 + 118) = prefactor_y * *(b + 25 * OS1_S1 + 83) -
                                       p_over_q * *(b + 43 * OS1_S1 + 83);
            *(b + 25 * OS1_S1 + 119) =
                prefactor_z * *(b + 25 * OS1_S1 + 83) -
                p_over_q * *(b + 44 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 25 * OS1_S1 + 55);
            *(b + 26 * OS1_S1 + 84) =
                prefactor_x * *(b + 26 * OS1_S1 + 56) -
                p_over_q * *(b + 41 * OS1_S1 + 56) +
                one_over_two_q * *(b + 16 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 26 * OS1_S1 + 35);
            *(b + 26 * OS1_S1 + 85) =
                prefactor_y * *(b + 26 * OS1_S1 + 56) -
                p_over_q * *(b + 45 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 56);
            *(b + 26 * OS1_S1 + 86) = prefactor_z * *(b + 26 * OS1_S1 + 56) -
                                      p_over_q * *(b + 46 * OS1_S1 + 56);
            *(b + 26 * OS1_S1 + 87) =
                prefactor_y * *(b + 26 * OS1_S1 + 57) -
                p_over_q * *(b + 45 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 57) +
                one_over_two_q * *(b + 26 * OS1_S1 + 35);
            *(b + 26 * OS1_S1 + 88) = prefactor_z * *(b + 26 * OS1_S1 + 57) -
                                      p_over_q * *(b + 46 * OS1_S1 + 57);
            *(b + 26 * OS1_S1 + 89) = prefactor_z * *(b + 26 * OS1_S1 + 58) -
                                      p_over_q * *(b + 46 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 35);
            *(b + 26 * OS1_S1 + 90) =
                prefactor_y * *(b + 26 * OS1_S1 + 59) -
                p_over_q * *(b + 45 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 36);
            *(b + 26 * OS1_S1 + 91) = prefactor_z * *(b + 26 * OS1_S1 + 59) -
                                      p_over_q * *(b + 46 * OS1_S1 + 59);
            *(b + 26 * OS1_S1 + 92) =
                prefactor_y * *(b + 26 * OS1_S1 + 61) -
                p_over_q * *(b + 45 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 61);
            *(b + 26 * OS1_S1 + 93) =
                prefactor_z * *(b + 26 * OS1_S1 + 61) -
                p_over_q * *(b + 46 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 37);
            *(b + 26 * OS1_S1 + 94) =
                prefactor_x * *(b + 26 * OS1_S1 + 66) -
                p_over_q * *(b + 41 * OS1_S1 + 66) +
                one_over_two_q * *(b + 16 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 45);
            *(b + 26 * OS1_S1 + 95) = prefactor_z * *(b + 26 * OS1_S1 + 62) -
                                      p_over_q * *(b + 46 * OS1_S1 + 62);
            *(b + 26 * OS1_S1 + 96) = prefactor_z * *(b + 26 * OS1_S1 + 63) -
                                      p_over_q * *(b + 46 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 38);
            *(b + 26 * OS1_S1 + 97) =
                prefactor_y * *(b + 26 * OS1_S1 + 65) -
                p_over_q * *(b + 45 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 65);
            *(b + 26 * OS1_S1 + 98) =
                prefactor_x * *(b + 26 * OS1_S1 + 70) -
                p_over_q * *(b + 41 * OS1_S1 + 70) +
                one_over_two_q * *(b + 16 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 49);
            *(b + 26 * OS1_S1 + 99) = prefactor_x * *(b + 26 * OS1_S1 + 71) -
                                      p_over_q * *(b + 41 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 50);
            *(b + 26 * OS1_S1 + 100) = prefactor_z * *(b + 26 * OS1_S1 + 66) -
                                       p_over_q * *(b + 46 * OS1_S1 + 66);
            *(b + 26 * OS1_S1 + 101) = prefactor_z * *(b + 26 * OS1_S1 + 67) -
                                       p_over_q * *(b + 46 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 41);
            *(b + 26 * OS1_S1 + 102) =
                prefactor_x * *(b + 26 * OS1_S1 + 74) -
                p_over_q * *(b + 41 * OS1_S1 + 74) +
                one_over_two_q * *(b + 16 * OS1_S1 + 74) +
                one_over_two_q * *(b + 26 * OS1_S1 + 53);
            *(b + 26 * OS1_S1 + 103) =
                prefactor_y * *(b + 26 * OS1_S1 + 70) -
                p_over_q * *(b + 45 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 70);
            *(b + 26 * OS1_S1 + 104) =
                prefactor_x * *(b + 26 * OS1_S1 + 76) -
                p_over_q * *(b + 41 * OS1_S1 + 76) +
                one_over_two_q * *(b + 16 * OS1_S1 + 76) +
                one_over_two_q * *(b + 26 * OS1_S1 + 55);
            *(b + 26 * OS1_S1 + 105) = prefactor_x * *(b + 26 * OS1_S1 + 77) -
                                       p_over_q * *(b + 41 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 77);
            *(b + 26 * OS1_S1 + 106) = prefactor_z * *(b + 26 * OS1_S1 + 71) -
                                       p_over_q * *(b + 46 * OS1_S1 + 71);
            *(b + 26 * OS1_S1 + 107) = prefactor_x * *(b + 26 * OS1_S1 + 79) -
                                       p_over_q * *(b + 41 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 79);
            *(b + 26 * OS1_S1 + 108) = prefactor_x * *(b + 26 * OS1_S1 + 80) -
                                       p_over_q * *(b + 41 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 80);
            *(b + 26 * OS1_S1 + 109) = prefactor_x * *(b + 26 * OS1_S1 + 81) -
                                       p_over_q * *(b + 41 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 81);
            *(b + 26 * OS1_S1 + 110) = prefactor_x * *(b + 26 * OS1_S1 + 82) -
                                       p_over_q * *(b + 41 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 82);
            *(b + 26 * OS1_S1 + 111) = prefactor_x * *(b + 26 * OS1_S1 + 83) -
                                       p_over_q * *(b + 41 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 83);
            *(b + 26 * OS1_S1 + 112) =
                prefactor_y * *(b + 26 * OS1_S1 + 77) -
                p_over_q * *(b + 45 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 26 * OS1_S1 + 50);
            *(b + 26 * OS1_S1 + 113) = prefactor_z * *(b + 26 * OS1_S1 + 77) -
                                       p_over_q * *(b + 46 * OS1_S1 + 77);
            *(b + 26 * OS1_S1 + 114) = prefactor_z * *(b + 26 * OS1_S1 + 78) -
                                       p_over_q * *(b + 46 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 50);
            *(b + 26 * OS1_S1 + 115) =
                prefactor_z * *(b + 26 * OS1_S1 + 79) -
                p_over_q * *(b + 46 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 51);
            *(b + 26 * OS1_S1 + 116) =
                prefactor_y * *(b + 26 * OS1_S1 + 81) -
                p_over_q * *(b + 45 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 54);
            *(b + 26 * OS1_S1 + 117) =
                prefactor_y * *(b + 26 * OS1_S1 + 82) -
                p_over_q * *(b + 45 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 82) +
                one_over_two_q * *(b + 26 * OS1_S1 + 55);
            *(b + 26 * OS1_S1 + 118) =
                prefactor_y * *(b + 26 * OS1_S1 + 83) -
                p_over_q * *(b + 45 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 83);
            *(b + 26 * OS1_S1 + 119) =
                prefactor_z * *(b + 26 * OS1_S1 + 83) -
                p_over_q * *(b + 46 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 26 * OS1_S1 + 55);
            *(b + 27 * OS1_S1 + 84) =
                prefactor_x * *(b + 27 * OS1_S1 + 56) -
                p_over_q * *(b + 42 * OS1_S1 + 56) +
                one_over_two_q * *(b + 17 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 27 * OS1_S1 + 35);
            *(b + 27 * OS1_S1 + 85) =
                prefactor_y * *(b + 27 * OS1_S1 + 56) -
                p_over_q * *(b + 46 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 56);
            *(b + 27 * OS1_S1 + 86) = prefactor_z * *(b + 27 * OS1_S1 + 56) -
                                      p_over_q * *(b + 47 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 56);
            *(b + 27 * OS1_S1 + 87) =
                prefactor_y * *(b + 27 * OS1_S1 + 57) -
                p_over_q * *(b + 46 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 57) +
                one_over_two_q * *(b + 27 * OS1_S1 + 35);
            *(b + 27 * OS1_S1 + 88) = prefactor_z * *(b + 27 * OS1_S1 + 57) -
                                      p_over_q * *(b + 47 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 57);
            *(b + 27 * OS1_S1 + 89) = prefactor_z * *(b + 27 * OS1_S1 + 58) -
                                      p_over_q * *(b + 47 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 35);
            *(b + 27 * OS1_S1 + 90) =
                prefactor_y * *(b + 27 * OS1_S1 + 59) -
                p_over_q * *(b + 46 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 36);
            *(b + 27 * OS1_S1 + 91) = prefactor_z * *(b + 27 * OS1_S1 + 59) -
                                      p_over_q * *(b + 47 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 59);
            *(b + 27 * OS1_S1 + 92) =
                prefactor_y * *(b + 27 * OS1_S1 + 61) -
                p_over_q * *(b + 46 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 61);
            *(b + 27 * OS1_S1 + 93) =
                prefactor_z * *(b + 27 * OS1_S1 + 61) -
                p_over_q * *(b + 47 * OS1_S1 + 61) +
                one_over_two_q * *(b + 13 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 37);
            *(b + 27 * OS1_S1 + 94) =
                prefactor_x * *(b + 27 * OS1_S1 + 66) -
                p_over_q * *(b + 42 * OS1_S1 + 66) +
                one_over_two_q * *(b + 17 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 45);
            *(b + 27 * OS1_S1 + 95) = prefactor_z * *(b + 27 * OS1_S1 + 62) -
                                      p_over_q * *(b + 47 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 62);
            *(b + 27 * OS1_S1 + 96) = prefactor_z * *(b + 27 * OS1_S1 + 63) -
                                      p_over_q * *(b + 47 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 13 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 38);
            *(b + 27 * OS1_S1 + 97) =
                prefactor_y * *(b + 27 * OS1_S1 + 65) -
                p_over_q * *(b + 46 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 65);
            *(b + 27 * OS1_S1 + 98) =
                prefactor_x * *(b + 27 * OS1_S1 + 70) -
                p_over_q * *(b + 42 * OS1_S1 + 70) +
                one_over_two_q * *(b + 17 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 49);
            *(b + 27 * OS1_S1 + 99) = prefactor_x * *(b + 27 * OS1_S1 + 71) -
                                      p_over_q * *(b + 42 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 17 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 27 * OS1_S1 + 50);
            *(b + 27 * OS1_S1 + 100) = prefactor_z * *(b + 27 * OS1_S1 + 66) -
                                       p_over_q * *(b + 47 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 66);
            *(b + 27 * OS1_S1 + 101) =
                prefactor_z * *(b + 27 * OS1_S1 + 67) -
                p_over_q * *(b + 47 * OS1_S1 + 67) +
                one_over_two_q * *(b + 13 * OS1_S1 + 67) +
                one_over_two_q * *(b + 27 * OS1_S1 + 41);
            *(b + 27 * OS1_S1 + 102) =
                prefactor_x * *(b + 27 * OS1_S1 + 74) -
                p_over_q * *(b + 42 * OS1_S1 + 74) +
                one_over_two_q * *(b + 17 * OS1_S1 + 74) +
                one_over_two_q * *(b + 27 * OS1_S1 + 53);
            *(b + 27 * OS1_S1 + 103) =
                prefactor_y * *(b + 27 * OS1_S1 + 70) -
                p_over_q * *(b + 46 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 70);
            *(b + 27 * OS1_S1 + 104) =
                prefactor_x * *(b + 27 * OS1_S1 + 76) -
                p_over_q * *(b + 42 * OS1_S1 + 76) +
                one_over_two_q * *(b + 17 * OS1_S1 + 76) +
                one_over_two_q * *(b + 27 * OS1_S1 + 55);
            *(b + 27 * OS1_S1 + 105) = prefactor_x * *(b + 27 * OS1_S1 + 77) -
                                       p_over_q * *(b + 42 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 77);
            *(b + 27 * OS1_S1 + 106) = prefactor_z * *(b + 27 * OS1_S1 + 71) -
                                       p_over_q * *(b + 47 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 71);
            *(b + 27 * OS1_S1 + 107) = prefactor_x * *(b + 27 * OS1_S1 + 79) -
                                       p_over_q * *(b + 42 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 79);
            *(b + 27 * OS1_S1 + 108) = prefactor_x * *(b + 27 * OS1_S1 + 80) -
                                       p_over_q * *(b + 42 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 80);
            *(b + 27 * OS1_S1 + 109) = prefactor_x * *(b + 27 * OS1_S1 + 81) -
                                       p_over_q * *(b + 42 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 81);
            *(b + 27 * OS1_S1 + 110) = prefactor_x * *(b + 27 * OS1_S1 + 82) -
                                       p_over_q * *(b + 42 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 82);
            *(b + 27 * OS1_S1 + 111) = prefactor_x * *(b + 27 * OS1_S1 + 83) -
                                       p_over_q * *(b + 42 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 83);
            *(b + 27 * OS1_S1 + 112) =
                prefactor_y * *(b + 27 * OS1_S1 + 77) -
                p_over_q * *(b + 46 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 27 * OS1_S1 + 50);
            *(b + 27 * OS1_S1 + 113) = prefactor_z * *(b + 27 * OS1_S1 + 77) -
                                       p_over_q * *(b + 47 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 77);
            *(b + 27 * OS1_S1 + 114) =
                prefactor_z * *(b + 27 * OS1_S1 + 78) -
                p_over_q * *(b + 47 * OS1_S1 + 78) +
                one_over_two_q * *(b + 13 * OS1_S1 + 78) +
                one_over_two_q * *(b + 27 * OS1_S1 + 50);
            *(b + 27 * OS1_S1 + 115) =
                prefactor_z * *(b + 27 * OS1_S1 + 79) -
                p_over_q * *(b + 47 * OS1_S1 + 79) +
                one_over_two_q * *(b + 13 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 51);
            *(b + 27 * OS1_S1 + 116) =
                prefactor_y * *(b + 27 * OS1_S1 + 81) -
                p_over_q * *(b + 46 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 54);
            *(b + 27 * OS1_S1 + 117) =
                prefactor_y * *(b + 27 * OS1_S1 + 82) -
                p_over_q * *(b + 46 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 82) +
                one_over_two_q * *(b + 27 * OS1_S1 + 55);
            *(b + 27 * OS1_S1 + 118) =
                prefactor_y * *(b + 27 * OS1_S1 + 83) -
                p_over_q * *(b + 46 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 83);
            *(b + 27 * OS1_S1 + 119) =
                prefactor_z * *(b + 27 * OS1_S1 + 83) -
                p_over_q * *(b + 47 * OS1_S1 + 83) +
                one_over_two_q * *(b + 13 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 27 * OS1_S1 + 55);
            *(b + 28 * OS1_S1 + 84) =
                prefactor_x * *(b + 28 * OS1_S1 + 56) -
                p_over_q * *(b + 43 * OS1_S1 + 56) +
                one_over_two_q * *(b + 18 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 28 * OS1_S1 + 35);
            *(b + 28 * OS1_S1 + 85) = prefactor_y * *(b + 28 * OS1_S1 + 56) -
                                      p_over_q * *(b + 47 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 56);
            *(b + 28 * OS1_S1 + 86) =
                prefactor_z * *(b + 28 * OS1_S1 + 56) -
                p_over_q * *(b + 48 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 56);
            *(b + 28 * OS1_S1 + 87) = prefactor_y * *(b + 28 * OS1_S1 + 57) -
                                      p_over_q * *(b + 47 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 35);
            *(b + 28 * OS1_S1 + 88) = prefactor_y * *(b + 28 * OS1_S1 + 58) -
                                      p_over_q * *(b + 47 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 58);
            *(b + 28 * OS1_S1 + 89) =
                prefactor_z * *(b + 28 * OS1_S1 + 58) -
                p_over_q * *(b + 48 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 58) +
                one_over_two_q * *(b + 28 * OS1_S1 + 35);
            *(b + 28 * OS1_S1 + 90) =
                prefactor_y * *(b + 28 * OS1_S1 + 59) -
                p_over_q * *(b + 47 * OS1_S1 + 59) +
                one_over_two_q * *(b + 15 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 36);
            *(b + 28 * OS1_S1 + 91) =
                prefactor_z * *(b + 28 * OS1_S1 + 59) -
                p_over_q * *(b + 48 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 59);
            *(b + 28 * OS1_S1 + 92) = prefactor_y * *(b + 28 * OS1_S1 + 61) -
                                      p_over_q * *(b + 47 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 61);
            *(b + 28 * OS1_S1 + 93) =
                prefactor_z * *(b + 28 * OS1_S1 + 61) -
                p_over_q * *(b + 48 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 37);
            *(b + 28 * OS1_S1 + 94) =
                prefactor_x * *(b + 28 * OS1_S1 + 66) -
                p_over_q * *(b + 43 * OS1_S1 + 66) +
                one_over_two_q * *(b + 18 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 45);
            *(b + 28 * OS1_S1 + 95) =
                prefactor_z * *(b + 28 * OS1_S1 + 62) -
                p_over_q * *(b + 48 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 62);
            *(b + 28 * OS1_S1 + 96) = prefactor_y * *(b + 28 * OS1_S1 + 64) -
                                      p_over_q * *(b + 47 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 40);
            *(b + 28 * OS1_S1 + 97) = prefactor_y * *(b + 28 * OS1_S1 + 65) -
                                      p_over_q * *(b + 47 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 15 * OS1_S1 + 65);
            *(b + 28 * OS1_S1 + 98) =
                prefactor_x * *(b + 28 * OS1_S1 + 70) -
                p_over_q * *(b + 43 * OS1_S1 + 70) +
                one_over_two_q * *(b + 18 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 49);
            *(b + 28 * OS1_S1 + 99) = prefactor_x * *(b + 28 * OS1_S1 + 71) -
                                      p_over_q * *(b + 43 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 18 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 28 * OS1_S1 + 50);
            *(b + 28 * OS1_S1 + 100) =
                prefactor_z * *(b + 28 * OS1_S1 + 66) -
                p_over_q * *(b + 48 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 66);
            *(b + 28 * OS1_S1 + 101) =
                prefactor_x * *(b + 28 * OS1_S1 + 73) -
                p_over_q * *(b + 43 * OS1_S1 + 73) +
                one_over_two_q * *(b + 18 * OS1_S1 + 73) +
                one_over_two_q * *(b + 28 * OS1_S1 + 52);
            *(b + 28 * OS1_S1 + 102) =
                prefactor_y * *(b + 28 * OS1_S1 + 69) -
                p_over_q * *(b + 47 * OS1_S1 + 69) +
                one_over_two_q * *(b + 15 * OS1_S1 + 69) +
                one_over_two_q * *(b + 28 * OS1_S1 + 44);
            *(b + 28 * OS1_S1 + 103) = prefactor_y * *(b + 28 * OS1_S1 + 70) -
                                       p_over_q * *(b + 47 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 70);
            *(b + 28 * OS1_S1 + 104) =
                prefactor_x * *(b + 28 * OS1_S1 + 76) -
                p_over_q * *(b + 43 * OS1_S1 + 76) +
                one_over_two_q * *(b + 18 * OS1_S1 + 76) +
                one_over_two_q * *(b + 28 * OS1_S1 + 55);
            *(b + 28 * OS1_S1 + 105) = prefactor_x * *(b + 28 * OS1_S1 + 77) -
                                       p_over_q * *(b + 43 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 77);
            *(b + 28 * OS1_S1 + 106) = prefactor_x * *(b + 28 * OS1_S1 + 78) -
                                       p_over_q * *(b + 43 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 78);
            *(b + 28 * OS1_S1 + 107) = prefactor_x * *(b + 28 * OS1_S1 + 79) -
                                       p_over_q * *(b + 43 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 79);
            *(b + 28 * OS1_S1 + 108) = prefactor_x * *(b + 28 * OS1_S1 + 80) -
                                       p_over_q * *(b + 43 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 80);
            *(b + 28 * OS1_S1 + 109) = prefactor_x * *(b + 28 * OS1_S1 + 81) -
                                       p_over_q * *(b + 43 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 81);
            *(b + 28 * OS1_S1 + 110) = prefactor_y * *(b + 28 * OS1_S1 + 76) -
                                       p_over_q * *(b + 47 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 76);
            *(b + 28 * OS1_S1 + 111) = prefactor_x * *(b + 28 * OS1_S1 + 83) -
                                       p_over_q * *(b + 43 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 83);
            *(b + 28 * OS1_S1 + 112) =
                prefactor_y * *(b + 28 * OS1_S1 + 77) -
                p_over_q * *(b + 47 * OS1_S1 + 77) +
                one_over_two_q * *(b + 15 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 28 * OS1_S1 + 50);
            *(b + 28 * OS1_S1 + 113) =
                prefactor_z * *(b + 28 * OS1_S1 + 77) -
                p_over_q * *(b + 48 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 77);
            *(b + 28 * OS1_S1 + 114) =
                prefactor_z * *(b + 28 * OS1_S1 + 78) -
                p_over_q * *(b + 48 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 78) +
                one_over_two_q * *(b + 28 * OS1_S1 + 50);
            *(b + 28 * OS1_S1 + 115) =
                prefactor_z * *(b + 28 * OS1_S1 + 79) -
                p_over_q * *(b + 48 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 51);
            *(b + 28 * OS1_S1 + 116) =
                prefactor_y * *(b + 28 * OS1_S1 + 81) -
                p_over_q * *(b + 47 * OS1_S1 + 81) +
                one_over_two_q * *(b + 15 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 54);
            *(b + 28 * OS1_S1 + 117) =
                prefactor_y * *(b + 28 * OS1_S1 + 82) -
                p_over_q * *(b + 47 * OS1_S1 + 82) +
                one_over_two_q * *(b + 15 * OS1_S1 + 82) +
                one_over_two_q * *(b + 28 * OS1_S1 + 55);
            *(b + 28 * OS1_S1 + 118) = prefactor_y * *(b + 28 * OS1_S1 + 83) -
                                       p_over_q * *(b + 47 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 83);
            *(b + 28 * OS1_S1 + 119) =
                prefactor_z * *(b + 28 * OS1_S1 + 83) -
                p_over_q * *(b + 48 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 28 * OS1_S1 + 55);
            *(b + 29 * OS1_S1 + 84) =
                prefactor_x * *(b + 29 * OS1_S1 + 56) -
                p_over_q * *(b + 44 * OS1_S1 + 56) +
                one_over_two_q * *(b + 19 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 29 * OS1_S1 + 35);
            *(b + 29 * OS1_S1 + 85) = prefactor_y * *(b + 29 * OS1_S1 + 56) -
                                      p_over_q * *(b + 48 * OS1_S1 + 56);
            *(b + 29 * OS1_S1 + 86) =
                prefactor_z * *(b + 29 * OS1_S1 + 56) -
                p_over_q * *(b + 49 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 56);
            *(b + 29 * OS1_S1 + 87) = prefactor_y * *(b + 29 * OS1_S1 + 57) -
                                      p_over_q * *(b + 48 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 35);
            *(b + 29 * OS1_S1 + 88) = prefactor_y * *(b + 29 * OS1_S1 + 58) -
                                      p_over_q * *(b + 48 * OS1_S1 + 58);
            *(b + 29 * OS1_S1 + 89) =
                prefactor_z * *(b + 29 * OS1_S1 + 58) -
                p_over_q * *(b + 49 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 58) +
                one_over_two_q * *(b + 29 * OS1_S1 + 35);
            *(b + 29 * OS1_S1 + 90) =
                prefactor_y * *(b + 29 * OS1_S1 + 59) -
                p_over_q * *(b + 48 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 36);
            *(b + 29 * OS1_S1 + 91) =
                prefactor_z * *(b + 29 * OS1_S1 + 59) -
                p_over_q * *(b + 49 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 59);
            *(b + 29 * OS1_S1 + 92) = prefactor_y * *(b + 29 * OS1_S1 + 61) -
                                      p_over_q * *(b + 48 * OS1_S1 + 61);
            *(b + 29 * OS1_S1 + 93) =
                prefactor_z * *(b + 29 * OS1_S1 + 61) -
                p_over_q * *(b + 49 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 37);
            *(b + 29 * OS1_S1 + 94) =
                prefactor_x * *(b + 29 * OS1_S1 + 66) -
                p_over_q * *(b + 44 * OS1_S1 + 66) +
                one_over_two_q * *(b + 19 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 45);
            *(b + 29 * OS1_S1 + 95) =
                prefactor_z * *(b + 29 * OS1_S1 + 62) -
                p_over_q * *(b + 49 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 62);
            *(b + 29 * OS1_S1 + 96) = prefactor_y * *(b + 29 * OS1_S1 + 64) -
                                      p_over_q * *(b + 48 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 40);
            *(b + 29 * OS1_S1 + 97) = prefactor_y * *(b + 29 * OS1_S1 + 65) -
                                      p_over_q * *(b + 48 * OS1_S1 + 65);
            *(b + 29 * OS1_S1 + 98) =
                prefactor_x * *(b + 29 * OS1_S1 + 70) -
                p_over_q * *(b + 44 * OS1_S1 + 70) +
                one_over_two_q * *(b + 19 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 49);
            *(b + 29 * OS1_S1 + 99) = prefactor_x * *(b + 29 * OS1_S1 + 71) -
                                      p_over_q * *(b + 44 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 50);
            *(b + 29 * OS1_S1 + 100) =
                prefactor_z * *(b + 29 * OS1_S1 + 66) -
                p_over_q * *(b + 49 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 66);
            *(b + 29 * OS1_S1 + 101) =
                prefactor_x * *(b + 29 * OS1_S1 + 73) -
                p_over_q * *(b + 44 * OS1_S1 + 73) +
                one_over_two_q * *(b + 19 * OS1_S1 + 73) +
                one_over_two_q * *(b + 29 * OS1_S1 + 52);
            *(b + 29 * OS1_S1 + 102) = prefactor_y * *(b + 29 * OS1_S1 + 69) -
                                       p_over_q * *(b + 48 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 44);
            *(b + 29 * OS1_S1 + 103) = prefactor_y * *(b + 29 * OS1_S1 + 70) -
                                       p_over_q * *(b + 48 * OS1_S1 + 70);
            *(b + 29 * OS1_S1 + 104) =
                prefactor_x * *(b + 29 * OS1_S1 + 76) -
                p_over_q * *(b + 44 * OS1_S1 + 76) +
                one_over_two_q * *(b + 19 * OS1_S1 + 76) +
                one_over_two_q * *(b + 29 * OS1_S1 + 55);
            *(b + 29 * OS1_S1 + 105) = prefactor_x * *(b + 29 * OS1_S1 + 77) -
                                       p_over_q * *(b + 44 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 77);
            *(b + 29 * OS1_S1 + 106) = prefactor_x * *(b + 29 * OS1_S1 + 78) -
                                       p_over_q * *(b + 44 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 78);
            *(b + 29 * OS1_S1 + 107) = prefactor_x * *(b + 29 * OS1_S1 + 79) -
                                       p_over_q * *(b + 44 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 79);
            *(b + 29 * OS1_S1 + 108) = prefactor_x * *(b + 29 * OS1_S1 + 80) -
                                       p_over_q * *(b + 44 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 80);
            *(b + 29 * OS1_S1 + 109) = prefactor_x * *(b + 29 * OS1_S1 + 81) -
                                       p_over_q * *(b + 44 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 81);
            *(b + 29 * OS1_S1 + 110) = prefactor_y * *(b + 29 * OS1_S1 + 76) -
                                       p_over_q * *(b + 48 * OS1_S1 + 76);
            *(b + 29 * OS1_S1 + 111) = prefactor_x * *(b + 29 * OS1_S1 + 83) -
                                       p_over_q * *(b + 44 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 83);
            *(b + 29 * OS1_S1 + 112) =
                prefactor_y * *(b + 29 * OS1_S1 + 77) -
                p_over_q * *(b + 48 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 29 * OS1_S1 + 50);
            *(b + 29 * OS1_S1 + 113) =
                prefactor_z * *(b + 29 * OS1_S1 + 77) -
                p_over_q * *(b + 49 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 77);
            *(b + 29 * OS1_S1 + 114) =
                prefactor_z * *(b + 29 * OS1_S1 + 78) -
                p_over_q * *(b + 49 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 78) +
                one_over_two_q * *(b + 29 * OS1_S1 + 50);
            *(b + 29 * OS1_S1 + 115) =
                prefactor_z * *(b + 29 * OS1_S1 + 79) -
                p_over_q * *(b + 49 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 51);
            *(b + 29 * OS1_S1 + 116) =
                prefactor_y * *(b + 29 * OS1_S1 + 81) -
                p_over_q * *(b + 48 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 54);
            *(b + 29 * OS1_S1 + 117) = prefactor_y * *(b + 29 * OS1_S1 + 82) -
                                       p_over_q * *(b + 48 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 55);
            *(b + 29 * OS1_S1 + 118) = prefactor_y * *(b + 29 * OS1_S1 + 83) -
                                       p_over_q * *(b + 48 * OS1_S1 + 83);
            *(b + 29 * OS1_S1 + 119) =
                prefactor_z * *(b + 29 * OS1_S1 + 83) -
                p_over_q * *(b + 49 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 29 * OS1_S1 + 55);
            *(b + 30 * OS1_S1 + 84) =
                prefactor_x * *(b + 30 * OS1_S1 + 56) -
                p_over_q * *(b + 45 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 30 * OS1_S1 + 35);
            *(b + 30 * OS1_S1 + 85) =
                prefactor_y * *(b + 30 * OS1_S1 + 56) -
                p_over_q * *(b + 50 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 56);
            *(b + 30 * OS1_S1 + 86) = prefactor_z * *(b + 30 * OS1_S1 + 56) -
                                      p_over_q * *(b + 51 * OS1_S1 + 56);
            *(b + 30 * OS1_S1 + 87) =
                prefactor_y * *(b + 30 * OS1_S1 + 57) -
                p_over_q * *(b + 50 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 57) +
                one_over_two_q * *(b + 30 * OS1_S1 + 35);
            *(b + 30 * OS1_S1 + 88) = prefactor_z * *(b + 30 * OS1_S1 + 57) -
                                      p_over_q * *(b + 51 * OS1_S1 + 57);
            *(b + 30 * OS1_S1 + 89) = prefactor_z * *(b + 30 * OS1_S1 + 58) -
                                      p_over_q * *(b + 51 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 35);
            *(b + 30 * OS1_S1 + 90) =
                prefactor_y * *(b + 30 * OS1_S1 + 59) -
                p_over_q * *(b + 50 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 36);
            *(b + 30 * OS1_S1 + 91) = prefactor_z * *(b + 30 * OS1_S1 + 59) -
                                      p_over_q * *(b + 51 * OS1_S1 + 59);
            *(b + 30 * OS1_S1 + 92) =
                prefactor_y * *(b + 30 * OS1_S1 + 61) -
                p_over_q * *(b + 50 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 61);
            *(b + 30 * OS1_S1 + 93) =
                prefactor_z * *(b + 30 * OS1_S1 + 61) -
                p_over_q * *(b + 51 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 37);
            *(b + 30 * OS1_S1 + 94) =
                prefactor_x * *(b + 30 * OS1_S1 + 66) -
                p_over_q * *(b + 45 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 45);
            *(b + 30 * OS1_S1 + 95) = prefactor_z * *(b + 30 * OS1_S1 + 62) -
                                      p_over_q * *(b + 51 * OS1_S1 + 62);
            *(b + 30 * OS1_S1 + 96) = prefactor_z * *(b + 30 * OS1_S1 + 63) -
                                      p_over_q * *(b + 51 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 38);
            *(b + 30 * OS1_S1 + 97) =
                prefactor_y * *(b + 30 * OS1_S1 + 65) -
                p_over_q * *(b + 50 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 65);
            *(b + 30 * OS1_S1 + 98) =
                prefactor_x * *(b + 30 * OS1_S1 + 70) -
                p_over_q * *(b + 45 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 49);
            *(b + 30 * OS1_S1 + 99) = prefactor_x * *(b + 30 * OS1_S1 + 71) -
                                      p_over_q * *(b + 45 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 50);
            *(b + 30 * OS1_S1 + 100) = prefactor_z * *(b + 30 * OS1_S1 + 66) -
                                       p_over_q * *(b + 51 * OS1_S1 + 66);
            *(b + 30 * OS1_S1 + 101) = prefactor_z * *(b + 30 * OS1_S1 + 67) -
                                       p_over_q * *(b + 51 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 41);
            *(b + 30 * OS1_S1 + 102) = prefactor_x * *(b + 30 * OS1_S1 + 74) -
                                       p_over_q * *(b + 45 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 53);
            *(b + 30 * OS1_S1 + 103) =
                prefactor_y * *(b + 30 * OS1_S1 + 70) -
                p_over_q * *(b + 50 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 70);
            *(b + 30 * OS1_S1 + 104) = prefactor_x * *(b + 30 * OS1_S1 + 76) -
                                       p_over_q * *(b + 45 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 55);
            *(b + 30 * OS1_S1 + 105) = prefactor_x * *(b + 30 * OS1_S1 + 77) -
                                       p_over_q * *(b + 45 * OS1_S1 + 77);
            *(b + 30 * OS1_S1 + 106) = prefactor_z * *(b + 30 * OS1_S1 + 71) -
                                       p_over_q * *(b + 51 * OS1_S1 + 71);
            *(b + 30 * OS1_S1 + 107) = prefactor_x * *(b + 30 * OS1_S1 + 79) -
                                       p_over_q * *(b + 45 * OS1_S1 + 79);
            *(b + 30 * OS1_S1 + 108) = prefactor_x * *(b + 30 * OS1_S1 + 80) -
                                       p_over_q * *(b + 45 * OS1_S1 + 80);
            *(b + 30 * OS1_S1 + 109) = prefactor_x * *(b + 30 * OS1_S1 + 81) -
                                       p_over_q * *(b + 45 * OS1_S1 + 81);
            *(b + 30 * OS1_S1 + 110) = prefactor_x * *(b + 30 * OS1_S1 + 82) -
                                       p_over_q * *(b + 45 * OS1_S1 + 82);
            *(b + 30 * OS1_S1 + 111) = prefactor_x * *(b + 30 * OS1_S1 + 83) -
                                       p_over_q * *(b + 45 * OS1_S1 + 83);
            *(b + 30 * OS1_S1 + 112) =
                prefactor_y * *(b + 30 * OS1_S1 + 77) -
                p_over_q * *(b + 50 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 30 * OS1_S1 + 50);
            *(b + 30 * OS1_S1 + 113) = prefactor_z * *(b + 30 * OS1_S1 + 77) -
                                       p_over_q * *(b + 51 * OS1_S1 + 77);
            *(b + 30 * OS1_S1 + 114) = prefactor_z * *(b + 30 * OS1_S1 + 78) -
                                       p_over_q * *(b + 51 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 50);
            *(b + 30 * OS1_S1 + 115) =
                prefactor_z * *(b + 30 * OS1_S1 + 79) -
                p_over_q * *(b + 51 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 51);
            *(b + 30 * OS1_S1 + 116) =
                prefactor_y * *(b + 30 * OS1_S1 + 81) -
                p_over_q * *(b + 50 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 54);
            *(b + 30 * OS1_S1 + 117) =
                prefactor_y * *(b + 30 * OS1_S1 + 82) -
                p_over_q * *(b + 50 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 82) +
                one_over_two_q * *(b + 30 * OS1_S1 + 55);
            *(b + 30 * OS1_S1 + 118) =
                prefactor_y * *(b + 30 * OS1_S1 + 83) -
                p_over_q * *(b + 50 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 83);
            *(b + 30 * OS1_S1 + 119) =
                prefactor_z * *(b + 30 * OS1_S1 + 83) -
                p_over_q * *(b + 51 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 30 * OS1_S1 + 55);
            *(b + 31 * OS1_S1 + 84) =
                prefactor_x * *(b + 31 * OS1_S1 + 56) -
                p_over_q * *(b + 46 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 31 * OS1_S1 + 35);
            *(b + 31 * OS1_S1 + 85) =
                prefactor_y * *(b + 31 * OS1_S1 + 56) -
                p_over_q * *(b + 51 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 56);
            *(b + 31 * OS1_S1 + 86) = prefactor_z * *(b + 31 * OS1_S1 + 56) -
                                      p_over_q * *(b + 52 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 56);
            *(b + 31 * OS1_S1 + 87) =
                prefactor_y * *(b + 31 * OS1_S1 + 57) -
                p_over_q * *(b + 51 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 57) +
                one_over_two_q * *(b + 31 * OS1_S1 + 35);
            *(b + 31 * OS1_S1 + 88) = prefactor_z * *(b + 31 * OS1_S1 + 57) -
                                      p_over_q * *(b + 52 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 57);
            *(b + 31 * OS1_S1 + 89) = prefactor_z * *(b + 31 * OS1_S1 + 58) -
                                      p_over_q * *(b + 52 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 35);
            *(b + 31 * OS1_S1 + 90) =
                prefactor_y * *(b + 31 * OS1_S1 + 59) -
                p_over_q * *(b + 51 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 36);
            *(b + 31 * OS1_S1 + 91) = prefactor_z * *(b + 31 * OS1_S1 + 59) -
                                      p_over_q * *(b + 52 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 59);
            *(b + 31 * OS1_S1 + 92) =
                prefactor_y * *(b + 31 * OS1_S1 + 61) -
                p_over_q * *(b + 51 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 61);
            *(b + 31 * OS1_S1 + 93) =
                prefactor_z * *(b + 31 * OS1_S1 + 61) -
                p_over_q * *(b + 52 * OS1_S1 + 61) +
                one_over_two_q * *(b + 16 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 37);
            *(b + 31 * OS1_S1 + 94) =
                prefactor_x * *(b + 31 * OS1_S1 + 66) -
                p_over_q * *(b + 46 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 45);
            *(b + 31 * OS1_S1 + 95) = prefactor_z * *(b + 31 * OS1_S1 + 62) -
                                      p_over_q * *(b + 52 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 62);
            *(b + 31 * OS1_S1 + 96) = prefactor_z * *(b + 31 * OS1_S1 + 63) -
                                      p_over_q * *(b + 52 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 16 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 38);
            *(b + 31 * OS1_S1 + 97) =
                prefactor_y * *(b + 31 * OS1_S1 + 65) -
                p_over_q * *(b + 51 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 65);
            *(b + 31 * OS1_S1 + 98) =
                prefactor_x * *(b + 31 * OS1_S1 + 70) -
                p_over_q * *(b + 46 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 49);
            *(b + 31 * OS1_S1 + 99) = prefactor_x * *(b + 31 * OS1_S1 + 71) -
                                      p_over_q * *(b + 46 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 50);
            *(b + 31 * OS1_S1 + 100) = prefactor_z * *(b + 31 * OS1_S1 + 66) -
                                       p_over_q * *(b + 52 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 66);
            *(b + 31 * OS1_S1 + 101) = prefactor_x * *(b + 31 * OS1_S1 + 73) -
                                       p_over_q * *(b + 46 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 52);
            *(b + 31 * OS1_S1 + 102) = prefactor_x * *(b + 31 * OS1_S1 + 74) -
                                       p_over_q * *(b + 46 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 53);
            *(b + 31 * OS1_S1 + 103) =
                prefactor_y * *(b + 31 * OS1_S1 + 70) -
                p_over_q * *(b + 51 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 70);
            *(b + 31 * OS1_S1 + 104) = prefactor_x * *(b + 31 * OS1_S1 + 76) -
                                       p_over_q * *(b + 46 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 55);
            *(b + 31 * OS1_S1 + 105) = prefactor_x * *(b + 31 * OS1_S1 + 77) -
                                       p_over_q * *(b + 46 * OS1_S1 + 77);
            *(b + 31 * OS1_S1 + 106) = prefactor_x * *(b + 31 * OS1_S1 + 78) -
                                       p_over_q * *(b + 46 * OS1_S1 + 78);
            *(b + 31 * OS1_S1 + 107) = prefactor_x * *(b + 31 * OS1_S1 + 79) -
                                       p_over_q * *(b + 46 * OS1_S1 + 79);
            *(b + 31 * OS1_S1 + 108) = prefactor_x * *(b + 31 * OS1_S1 + 80) -
                                       p_over_q * *(b + 46 * OS1_S1 + 80);
            *(b + 31 * OS1_S1 + 109) = prefactor_x * *(b + 31 * OS1_S1 + 81) -
                                       p_over_q * *(b + 46 * OS1_S1 + 81);
            *(b + 31 * OS1_S1 + 110) = prefactor_x * *(b + 31 * OS1_S1 + 82) -
                                       p_over_q * *(b + 46 * OS1_S1 + 82);
            *(b + 31 * OS1_S1 + 111) = prefactor_x * *(b + 31 * OS1_S1 + 83) -
                                       p_over_q * *(b + 46 * OS1_S1 + 83);
            *(b + 31 * OS1_S1 + 112) =
                prefactor_y * *(b + 31 * OS1_S1 + 77) -
                p_over_q * *(b + 51 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 31 * OS1_S1 + 50);
            *(b + 31 * OS1_S1 + 113) = prefactor_z * *(b + 31 * OS1_S1 + 77) -
                                       p_over_q * *(b + 52 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 77);
            *(b + 31 * OS1_S1 + 114) =
                prefactor_z * *(b + 31 * OS1_S1 + 78) -
                p_over_q * *(b + 52 * OS1_S1 + 78) +
                one_over_two_q * *(b + 16 * OS1_S1 + 78) +
                one_over_two_q * *(b + 31 * OS1_S1 + 50);
            *(b + 31 * OS1_S1 + 115) =
                prefactor_z * *(b + 31 * OS1_S1 + 79) -
                p_over_q * *(b + 52 * OS1_S1 + 79) +
                one_over_two_q * *(b + 16 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 51);
            *(b + 31 * OS1_S1 + 116) =
                prefactor_y * *(b + 31 * OS1_S1 + 81) -
                p_over_q * *(b + 51 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 54);
            *(b + 31 * OS1_S1 + 117) =
                prefactor_y * *(b + 31 * OS1_S1 + 82) -
                p_over_q * *(b + 51 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 82) +
                one_over_two_q * *(b + 31 * OS1_S1 + 55);
            *(b + 31 * OS1_S1 + 118) =
                prefactor_y * *(b + 31 * OS1_S1 + 83) -
                p_over_q * *(b + 51 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 83);
            *(b + 31 * OS1_S1 + 119) =
                prefactor_z * *(b + 31 * OS1_S1 + 83) -
                p_over_q * *(b + 52 * OS1_S1 + 83) +
                one_over_two_q * *(b + 16 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 31 * OS1_S1 + 55);
            *(b + 32 * OS1_S1 + 84) =
                prefactor_x * *(b + 32 * OS1_S1 + 56) -
                p_over_q * *(b + 47 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 32 * OS1_S1 + 35);
            *(b + 32 * OS1_S1 + 85) =
                prefactor_y * *(b + 32 * OS1_S1 + 56) -
                p_over_q * *(b + 52 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 56);
            *(b + 32 * OS1_S1 + 86) =
                prefactor_z * *(b + 32 * OS1_S1 + 56) -
                p_over_q * *(b + 53 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 56);
            *(b + 32 * OS1_S1 + 87) =
                prefactor_y * *(b + 32 * OS1_S1 + 57) -
                p_over_q * *(b + 52 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 57) +
                one_over_two_q * *(b + 32 * OS1_S1 + 35);
            *(b + 32 * OS1_S1 + 88) =
                prefactor_z * *(b + 32 * OS1_S1 + 57) -
                p_over_q * *(b + 53 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 57);
            *(b + 32 * OS1_S1 + 89) =
                prefactor_z * *(b + 32 * OS1_S1 + 58) -
                p_over_q * *(b + 53 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 58) +
                one_over_two_q * *(b + 32 * OS1_S1 + 35);
            *(b + 32 * OS1_S1 + 90) =
                prefactor_y * *(b + 32 * OS1_S1 + 59) -
                p_over_q * *(b + 52 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 36);
            *(b + 32 * OS1_S1 + 91) =
                prefactor_z * *(b + 32 * OS1_S1 + 59) -
                p_over_q * *(b + 53 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 59);
            *(b + 32 * OS1_S1 + 92) =
                prefactor_y * *(b + 32 * OS1_S1 + 61) -
                p_over_q * *(b + 52 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 61);
            *(b + 32 * OS1_S1 + 93) =
                prefactor_z * *(b + 32 * OS1_S1 + 61) -
                p_over_q * *(b + 53 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 37);
            *(b + 32 * OS1_S1 + 94) =
                prefactor_x * *(b + 32 * OS1_S1 + 66) -
                p_over_q * *(b + 47 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 45);
            *(b + 32 * OS1_S1 + 95) =
                prefactor_z * *(b + 32 * OS1_S1 + 62) -
                p_over_q * *(b + 53 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 62);
            *(b + 32 * OS1_S1 + 96) =
                prefactor_z * *(b + 32 * OS1_S1 + 63) -
                p_over_q * *(b + 53 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 63) +
                one_over_two_q * *(b + 32 * OS1_S1 + 38);
            *(b + 32 * OS1_S1 + 97) =
                prefactor_y * *(b + 32 * OS1_S1 + 65) -
                p_over_q * *(b + 52 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 65);
            *(b + 32 * OS1_S1 + 98) =
                prefactor_x * *(b + 32 * OS1_S1 + 70) -
                p_over_q * *(b + 47 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 49);
            *(b + 32 * OS1_S1 + 99) = prefactor_x * *(b + 32 * OS1_S1 + 71) -
                                      p_over_q * *(b + 47 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 50);
            *(b + 32 * OS1_S1 + 100) =
                prefactor_z * *(b + 32 * OS1_S1 + 66) -
                p_over_q * *(b + 53 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 66);
            *(b + 32 * OS1_S1 + 101) = prefactor_x * *(b + 32 * OS1_S1 + 73) -
                                       p_over_q * *(b + 47 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 52);
            *(b + 32 * OS1_S1 + 102) = prefactor_x * *(b + 32 * OS1_S1 + 74) -
                                       p_over_q * *(b + 47 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 53);
            *(b + 32 * OS1_S1 + 103) =
                prefactor_y * *(b + 32 * OS1_S1 + 70) -
                p_over_q * *(b + 52 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 70);
            *(b + 32 * OS1_S1 + 104) = prefactor_x * *(b + 32 * OS1_S1 + 76) -
                                       p_over_q * *(b + 47 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 55);
            *(b + 32 * OS1_S1 + 105) = prefactor_x * *(b + 32 * OS1_S1 + 77) -
                                       p_over_q * *(b + 47 * OS1_S1 + 77);
            *(b + 32 * OS1_S1 + 106) = prefactor_x * *(b + 32 * OS1_S1 + 78) -
                                       p_over_q * *(b + 47 * OS1_S1 + 78);
            *(b + 32 * OS1_S1 + 107) = prefactor_x * *(b + 32 * OS1_S1 + 79) -
                                       p_over_q * *(b + 47 * OS1_S1 + 79);
            *(b + 32 * OS1_S1 + 108) = prefactor_x * *(b + 32 * OS1_S1 + 80) -
                                       p_over_q * *(b + 47 * OS1_S1 + 80);
            *(b + 32 * OS1_S1 + 109) = prefactor_x * *(b + 32 * OS1_S1 + 81) -
                                       p_over_q * *(b + 47 * OS1_S1 + 81);
            *(b + 32 * OS1_S1 + 110) = prefactor_x * *(b + 32 * OS1_S1 + 82) -
                                       p_over_q * *(b + 47 * OS1_S1 + 82);
            *(b + 32 * OS1_S1 + 111) = prefactor_x * *(b + 32 * OS1_S1 + 83) -
                                       p_over_q * *(b + 47 * OS1_S1 + 83);
            *(b + 32 * OS1_S1 + 112) =
                prefactor_y * *(b + 32 * OS1_S1 + 77) -
                p_over_q * *(b + 52 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 32 * OS1_S1 + 50);
            *(b + 32 * OS1_S1 + 113) =
                prefactor_z * *(b + 32 * OS1_S1 + 77) -
                p_over_q * *(b + 53 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 77);
            *(b + 32 * OS1_S1 + 114) =
                prefactor_z * *(b + 32 * OS1_S1 + 78) -
                p_over_q * *(b + 53 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 78) +
                one_over_two_q * *(b + 32 * OS1_S1 + 50);
            *(b + 32 * OS1_S1 + 115) =
                prefactor_z * *(b + 32 * OS1_S1 + 79) -
                p_over_q * *(b + 53 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 51);
            *(b + 32 * OS1_S1 + 116) =
                prefactor_y * *(b + 32 * OS1_S1 + 81) -
                p_over_q * *(b + 52 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 54);
            *(b + 32 * OS1_S1 + 117) =
                prefactor_y * *(b + 32 * OS1_S1 + 82) -
                p_over_q * *(b + 52 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 82) +
                one_over_two_q * *(b + 32 * OS1_S1 + 55);
            *(b + 32 * OS1_S1 + 118) =
                prefactor_y * *(b + 32 * OS1_S1 + 83) -
                p_over_q * *(b + 52 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 83);
            *(b + 32 * OS1_S1 + 119) =
                prefactor_z * *(b + 32 * OS1_S1 + 83) -
                p_over_q * *(b + 53 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 32 * OS1_S1 + 55);
            *(b + 33 * OS1_S1 + 84) =
                prefactor_x * *(b + 33 * OS1_S1 + 56) -
                p_over_q * *(b + 48 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 33 * OS1_S1 + 35);
            *(b + 33 * OS1_S1 + 85) = prefactor_y * *(b + 33 * OS1_S1 + 56) -
                                      p_over_q * *(b + 53 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 56);
            *(b + 33 * OS1_S1 + 86) =
                prefactor_z * *(b + 33 * OS1_S1 + 56) -
                p_over_q * *(b + 54 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 56);
            *(b + 33 * OS1_S1 + 87) = prefactor_y * *(b + 33 * OS1_S1 + 57) -
                                      p_over_q * *(b + 53 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 35);
            *(b + 33 * OS1_S1 + 88) = prefactor_y * *(b + 33 * OS1_S1 + 58) -
                                      p_over_q * *(b + 53 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 58);
            *(b + 33 * OS1_S1 + 89) =
                prefactor_z * *(b + 33 * OS1_S1 + 58) -
                p_over_q * *(b + 54 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 58) +
                one_over_two_q * *(b + 33 * OS1_S1 + 35);
            *(b + 33 * OS1_S1 + 90) =
                prefactor_y * *(b + 33 * OS1_S1 + 59) -
                p_over_q * *(b + 53 * OS1_S1 + 59) +
                one_over_two_q * *(b + 19 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 36);
            *(b + 33 * OS1_S1 + 91) =
                prefactor_z * *(b + 33 * OS1_S1 + 59) -
                p_over_q * *(b + 54 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 59);
            *(b + 33 * OS1_S1 + 92) = prefactor_y * *(b + 33 * OS1_S1 + 61) -
                                      p_over_q * *(b + 53 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 61);
            *(b + 33 * OS1_S1 + 93) =
                prefactor_z * *(b + 33 * OS1_S1 + 61) -
                p_over_q * *(b + 54 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 37);
            *(b + 33 * OS1_S1 + 94) =
                prefactor_x * *(b + 33 * OS1_S1 + 66) -
                p_over_q * *(b + 48 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 45);
            *(b + 33 * OS1_S1 + 95) =
                prefactor_z * *(b + 33 * OS1_S1 + 62) -
                p_over_q * *(b + 54 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 62);
            *(b + 33 * OS1_S1 + 96) = prefactor_y * *(b + 33 * OS1_S1 + 64) -
                                      p_over_q * *(b + 53 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 40);
            *(b + 33 * OS1_S1 + 97) = prefactor_y * *(b + 33 * OS1_S1 + 65) -
                                      p_over_q * *(b + 53 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 19 * OS1_S1 + 65);
            *(b + 33 * OS1_S1 + 98) =
                prefactor_x * *(b + 33 * OS1_S1 + 70) -
                p_over_q * *(b + 48 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 49);
            *(b + 33 * OS1_S1 + 99) = prefactor_x * *(b + 33 * OS1_S1 + 71) -
                                      p_over_q * *(b + 48 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 50);
            *(b + 33 * OS1_S1 + 100) =
                prefactor_z * *(b + 33 * OS1_S1 + 66) -
                p_over_q * *(b + 54 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 66);
            *(b + 33 * OS1_S1 + 101) = prefactor_x * *(b + 33 * OS1_S1 + 73) -
                                       p_over_q * *(b + 48 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 52);
            *(b + 33 * OS1_S1 + 102) = prefactor_x * *(b + 33 * OS1_S1 + 74) -
                                       p_over_q * *(b + 48 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 53);
            *(b + 33 * OS1_S1 + 103) = prefactor_y * *(b + 33 * OS1_S1 + 70) -
                                       p_over_q * *(b + 53 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 70);
            *(b + 33 * OS1_S1 + 104) = prefactor_x * *(b + 33 * OS1_S1 + 76) -
                                       p_over_q * *(b + 48 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 55);
            *(b + 33 * OS1_S1 + 105) = prefactor_x * *(b + 33 * OS1_S1 + 77) -
                                       p_over_q * *(b + 48 * OS1_S1 + 77);
            *(b + 33 * OS1_S1 + 106) = prefactor_x * *(b + 33 * OS1_S1 + 78) -
                                       p_over_q * *(b + 48 * OS1_S1 + 78);
            *(b + 33 * OS1_S1 + 107) = prefactor_x * *(b + 33 * OS1_S1 + 79) -
                                       p_over_q * *(b + 48 * OS1_S1 + 79);
            *(b + 33 * OS1_S1 + 108) = prefactor_x * *(b + 33 * OS1_S1 + 80) -
                                       p_over_q * *(b + 48 * OS1_S1 + 80);
            *(b + 33 * OS1_S1 + 109) = prefactor_x * *(b + 33 * OS1_S1 + 81) -
                                       p_over_q * *(b + 48 * OS1_S1 + 81);
            *(b + 33 * OS1_S1 + 110) = prefactor_x * *(b + 33 * OS1_S1 + 82) -
                                       p_over_q * *(b + 48 * OS1_S1 + 82);
            *(b + 33 * OS1_S1 + 111) = prefactor_x * *(b + 33 * OS1_S1 + 83) -
                                       p_over_q * *(b + 48 * OS1_S1 + 83);
            *(b + 33 * OS1_S1 + 112) =
                prefactor_y * *(b + 33 * OS1_S1 + 77) -
                p_over_q * *(b + 53 * OS1_S1 + 77) +
                one_over_two_q * *(b + 19 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 33 * OS1_S1 + 50);
            *(b + 33 * OS1_S1 + 113) =
                prefactor_z * *(b + 33 * OS1_S1 + 77) -
                p_over_q * *(b + 54 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 77);
            *(b + 33 * OS1_S1 + 114) =
                prefactor_z * *(b + 33 * OS1_S1 + 78) -
                p_over_q * *(b + 54 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 78) +
                one_over_two_q * *(b + 33 * OS1_S1 + 50);
            *(b + 33 * OS1_S1 + 115) =
                prefactor_z * *(b + 33 * OS1_S1 + 79) -
                p_over_q * *(b + 54 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 51);
            *(b + 33 * OS1_S1 + 116) =
                prefactor_y * *(b + 33 * OS1_S1 + 81) -
                p_over_q * *(b + 53 * OS1_S1 + 81) +
                one_over_two_q * *(b + 19 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 54);
            *(b + 33 * OS1_S1 + 117) =
                prefactor_y * *(b + 33 * OS1_S1 + 82) -
                p_over_q * *(b + 53 * OS1_S1 + 82) +
                one_over_two_q * *(b + 19 * OS1_S1 + 82) +
                one_over_two_q * *(b + 33 * OS1_S1 + 55);
            *(b + 33 * OS1_S1 + 118) = prefactor_y * *(b + 33 * OS1_S1 + 83) -
                                       p_over_q * *(b + 53 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 83);
            *(b + 33 * OS1_S1 + 119) =
                prefactor_z * *(b + 33 * OS1_S1 + 83) -
                p_over_q * *(b + 54 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 33 * OS1_S1 + 55);
            *(b + 34 * OS1_S1 + 84) =
                prefactor_x * *(b + 34 * OS1_S1 + 56) -
                p_over_q * *(b + 49 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 34 * OS1_S1 + 35);
            *(b + 34 * OS1_S1 + 85) = prefactor_y * *(b + 34 * OS1_S1 + 56) -
                                      p_over_q * *(b + 54 * OS1_S1 + 56);
            *(b + 34 * OS1_S1 + 86) =
                prefactor_z * *(b + 34 * OS1_S1 + 56) -
                p_over_q * *(b + 55 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 56);
            *(b + 34 * OS1_S1 + 87) = prefactor_y * *(b + 34 * OS1_S1 + 57) -
                                      p_over_q * *(b + 54 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 35);
            *(b + 34 * OS1_S1 + 88) = prefactor_y * *(b + 34 * OS1_S1 + 58) -
                                      p_over_q * *(b + 54 * OS1_S1 + 58);
            *(b + 34 * OS1_S1 + 89) =
                prefactor_z * *(b + 34 * OS1_S1 + 58) -
                p_over_q * *(b + 55 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 58) +
                one_over_two_q * *(b + 34 * OS1_S1 + 35);
            *(b + 34 * OS1_S1 + 90) =
                prefactor_y * *(b + 34 * OS1_S1 + 59) -
                p_over_q * *(b + 54 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 36);
            *(b + 34 * OS1_S1 + 91) =
                prefactor_z * *(b + 34 * OS1_S1 + 59) -
                p_over_q * *(b + 55 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 59);
            *(b + 34 * OS1_S1 + 92) = prefactor_y * *(b + 34 * OS1_S1 + 61) -
                                      p_over_q * *(b + 54 * OS1_S1 + 61);
            *(b + 34 * OS1_S1 + 93) =
                prefactor_z * *(b + 34 * OS1_S1 + 61) -
                p_over_q * *(b + 55 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 37);
            *(b + 34 * OS1_S1 + 94) =
                prefactor_x * *(b + 34 * OS1_S1 + 66) -
                p_over_q * *(b + 49 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 45);
            *(b + 34 * OS1_S1 + 95) =
                prefactor_z * *(b + 34 * OS1_S1 + 62) -
                p_over_q * *(b + 55 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 62);
            *(b + 34 * OS1_S1 + 96) = prefactor_y * *(b + 34 * OS1_S1 + 64) -
                                      p_over_q * *(b + 54 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 40);
            *(b + 34 * OS1_S1 + 97) = prefactor_y * *(b + 34 * OS1_S1 + 65) -
                                      p_over_q * *(b + 54 * OS1_S1 + 65);
            *(b + 34 * OS1_S1 + 98) =
                prefactor_x * *(b + 34 * OS1_S1 + 70) -
                p_over_q * *(b + 49 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 49);
            *(b + 34 * OS1_S1 + 99) = prefactor_x * *(b + 34 * OS1_S1 + 71) -
                                      p_over_q * *(b + 49 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 50);
            *(b + 34 * OS1_S1 + 100) =
                prefactor_z * *(b + 34 * OS1_S1 + 66) -
                p_over_q * *(b + 55 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 66);
            *(b + 34 * OS1_S1 + 101) = prefactor_x * *(b + 34 * OS1_S1 + 73) -
                                       p_over_q * *(b + 49 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 52);
            *(b + 34 * OS1_S1 + 102) = prefactor_y * *(b + 34 * OS1_S1 + 69) -
                                       p_over_q * *(b + 54 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 44);
            *(b + 34 * OS1_S1 + 103) = prefactor_y * *(b + 34 * OS1_S1 + 70) -
                                       p_over_q * *(b + 54 * OS1_S1 + 70);
            *(b + 34 * OS1_S1 + 104) = prefactor_x * *(b + 34 * OS1_S1 + 76) -
                                       p_over_q * *(b + 49 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 55);
            *(b + 34 * OS1_S1 + 105) = prefactor_x * *(b + 34 * OS1_S1 + 77) -
                                       p_over_q * *(b + 49 * OS1_S1 + 77);
            *(b + 34 * OS1_S1 + 106) = prefactor_x * *(b + 34 * OS1_S1 + 78) -
                                       p_over_q * *(b + 49 * OS1_S1 + 78);
            *(b + 34 * OS1_S1 + 107) = prefactor_x * *(b + 34 * OS1_S1 + 79) -
                                       p_over_q * *(b + 49 * OS1_S1 + 79);
            *(b + 34 * OS1_S1 + 108) = prefactor_x * *(b + 34 * OS1_S1 + 80) -
                                       p_over_q * *(b + 49 * OS1_S1 + 80);
            *(b + 34 * OS1_S1 + 109) = prefactor_x * *(b + 34 * OS1_S1 + 81) -
                                       p_over_q * *(b + 49 * OS1_S1 + 81);
            *(b + 34 * OS1_S1 + 110) = prefactor_y * *(b + 34 * OS1_S1 + 76) -
                                       p_over_q * *(b + 54 * OS1_S1 + 76);
            *(b + 34 * OS1_S1 + 111) = prefactor_x * *(b + 34 * OS1_S1 + 83) -
                                       p_over_q * *(b + 49 * OS1_S1 + 83);
            *(b + 34 * OS1_S1 + 112) =
                prefactor_y * *(b + 34 * OS1_S1 + 77) -
                p_over_q * *(b + 54 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 34 * OS1_S1 + 50);
            *(b + 34 * OS1_S1 + 113) =
                prefactor_z * *(b + 34 * OS1_S1 + 77) -
                p_over_q * *(b + 55 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 77);
            *(b + 34 * OS1_S1 + 114) =
                prefactor_z * *(b + 34 * OS1_S1 + 78) -
                p_over_q * *(b + 55 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 78) +
                one_over_two_q * *(b + 34 * OS1_S1 + 50);
            *(b + 34 * OS1_S1 + 115) =
                prefactor_z * *(b + 34 * OS1_S1 + 79) -
                p_over_q * *(b + 55 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 51);
            *(b + 34 * OS1_S1 + 116) =
                prefactor_y * *(b + 34 * OS1_S1 + 81) -
                p_over_q * *(b + 54 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 54);
            *(b + 34 * OS1_S1 + 117) = prefactor_y * *(b + 34 * OS1_S1 + 82) -
                                       p_over_q * *(b + 54 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 55);
            *(b + 34 * OS1_S1 + 118) = prefactor_y * *(b + 34 * OS1_S1 + 83) -
                                       p_over_q * *(b + 54 * OS1_S1 + 83);
            *(b + 34 * OS1_S1 + 119) =
                prefactor_z * *(b + 34 * OS1_S1 + 83) -
                p_over_q * *(b + 55 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 34 * OS1_S1 + 55);
            return;
        }
        void transfer_5_7(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 35 * OS1_S1 + 84) =
                prefactor_x * *(b + 35 * OS1_S1 + 56) -
                p_over_q * *(b + 56 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 35);
            *(b + 35 * OS1_S1 + 85) = prefactor_y * *(b + 35 * OS1_S1 + 56) -
                                      p_over_q * *(b + 57 * OS1_S1 + 56);
            *(b + 35 * OS1_S1 + 86) = prefactor_z * *(b + 35 * OS1_S1 + 56) -
                                      p_over_q * *(b + 58 * OS1_S1 + 56);
            *(b + 35 * OS1_S1 + 87) = prefactor_y * *(b + 35 * OS1_S1 + 57) -
                                      p_over_q * *(b + 57 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 35);
            *(b + 35 * OS1_S1 + 88) = prefactor_z * *(b + 35 * OS1_S1 + 57) -
                                      p_over_q * *(b + 58 * OS1_S1 + 57);
            *(b + 35 * OS1_S1 + 89) = prefactor_z * *(b + 35 * OS1_S1 + 58) -
                                      p_over_q * *(b + 58 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 35);
            *(b + 35 * OS1_S1 + 90) =
                prefactor_y * *(b + 35 * OS1_S1 + 59) -
                p_over_q * *(b + 57 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 36);
            *(b + 35 * OS1_S1 + 91) = prefactor_z * *(b + 35 * OS1_S1 + 59) -
                                      p_over_q * *(b + 58 * OS1_S1 + 59);
            *(b + 35 * OS1_S1 + 92) = prefactor_y * *(b + 35 * OS1_S1 + 61) -
                                      p_over_q * *(b + 57 * OS1_S1 + 61);
            *(b + 35 * OS1_S1 + 93) =
                prefactor_z * *(b + 35 * OS1_S1 + 61) -
                p_over_q * *(b + 58 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 37);
            *(b + 35 * OS1_S1 + 94) =
                prefactor_x * *(b + 35 * OS1_S1 + 66) -
                p_over_q * *(b + 56 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 45);
            *(b + 35 * OS1_S1 + 95) = prefactor_z * *(b + 35 * OS1_S1 + 62) -
                                      p_over_q * *(b + 58 * OS1_S1 + 62);
            *(b + 35 * OS1_S1 + 96) = prefactor_z * *(b + 35 * OS1_S1 + 63) -
                                      p_over_q * *(b + 58 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 38);
            *(b + 35 * OS1_S1 + 97) = prefactor_y * *(b + 35 * OS1_S1 + 65) -
                                      p_over_q * *(b + 57 * OS1_S1 + 65);
            *(b + 35 * OS1_S1 + 98) =
                prefactor_x * *(b + 35 * OS1_S1 + 70) -
                p_over_q * *(b + 56 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 49);
            *(b + 35 * OS1_S1 + 99) =
                prefactor_x * *(b + 35 * OS1_S1 + 71) -
                p_over_q * *(b + 56 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 71) +
                one_over_two_q * *(b + 35 * OS1_S1 + 50);
            *(b + 35 * OS1_S1 + 100) = prefactor_z * *(b + 35 * OS1_S1 + 66) -
                                       p_over_q * *(b + 58 * OS1_S1 + 66);
            *(b + 35 * OS1_S1 + 101) = prefactor_z * *(b + 35 * OS1_S1 + 67) -
                                       p_over_q * *(b + 58 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 41);
            *(b + 35 * OS1_S1 + 102) = prefactor_y * *(b + 35 * OS1_S1 + 69) -
                                       p_over_q * *(b + 57 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 44);
            *(b + 35 * OS1_S1 + 103) = prefactor_y * *(b + 35 * OS1_S1 + 70) -
                                       p_over_q * *(b + 57 * OS1_S1 + 70);
            *(b + 35 * OS1_S1 + 104) =
                prefactor_x * *(b + 35 * OS1_S1 + 76) -
                p_over_q * *(b + 56 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 76) +
                one_over_two_q * *(b + 35 * OS1_S1 + 55);
            *(b + 35 * OS1_S1 + 105) =
                prefactor_x * *(b + 35 * OS1_S1 + 77) -
                p_over_q * *(b + 56 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 77);
            *(b + 35 * OS1_S1 + 106) = prefactor_z * *(b + 35 * OS1_S1 + 71) -
                                       p_over_q * *(b + 58 * OS1_S1 + 71);
            *(b + 35 * OS1_S1 + 107) =
                prefactor_x * *(b + 35 * OS1_S1 + 79) -
                p_over_q * *(b + 56 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 79);
            *(b + 35 * OS1_S1 + 108) =
                prefactor_x * *(b + 35 * OS1_S1 + 80) -
                p_over_q * *(b + 56 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 80);
            *(b + 35 * OS1_S1 + 109) =
                prefactor_x * *(b + 35 * OS1_S1 + 81) -
                p_over_q * *(b + 56 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 81);
            *(b + 35 * OS1_S1 + 110) = prefactor_y * *(b + 35 * OS1_S1 + 76) -
                                       p_over_q * *(b + 57 * OS1_S1 + 76);
            *(b + 35 * OS1_S1 + 111) =
                prefactor_x * *(b + 35 * OS1_S1 + 83) -
                p_over_q * *(b + 56 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 83);
            *(b + 35 * OS1_S1 + 112) =
                prefactor_y * *(b + 35 * OS1_S1 + 77) -
                p_over_q * *(b + 57 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 50);
            *(b + 35 * OS1_S1 + 113) = prefactor_z * *(b + 35 * OS1_S1 + 77) -
                                       p_over_q * *(b + 58 * OS1_S1 + 77);
            *(b + 35 * OS1_S1 + 114) = prefactor_z * *(b + 35 * OS1_S1 + 78) -
                                       p_over_q * *(b + 58 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 50);
            *(b + 35 * OS1_S1 + 115) =
                prefactor_z * *(b + 35 * OS1_S1 + 79) -
                p_over_q * *(b + 58 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 51);
            *(b + 35 * OS1_S1 + 116) =
                prefactor_y * *(b + 35 * OS1_S1 + 81) -
                p_over_q * *(b + 57 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 54);
            *(b + 35 * OS1_S1 + 117) = prefactor_y * *(b + 35 * OS1_S1 + 82) -
                                       p_over_q * *(b + 57 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 55);
            *(b + 35 * OS1_S1 + 118) = prefactor_y * *(b + 35 * OS1_S1 + 83) -
                                       p_over_q * *(b + 57 * OS1_S1 + 83);
            *(b + 35 * OS1_S1 + 119) =
                prefactor_z * *(b + 35 * OS1_S1 + 83) -
                p_over_q * *(b + 58 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 55);
            *(b + 36 * OS1_S1 + 84) =
                prefactor_x * *(b + 36 * OS1_S1 + 56) -
                p_over_q * *(b + 57 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 36 * OS1_S1 + 35);
            *(b + 36 * OS1_S1 + 85) = prefactor_y * *(b + 36 * OS1_S1 + 56) -
                                      p_over_q * *(b + 59 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 56);
            *(b + 36 * OS1_S1 + 86) = prefactor_z * *(b + 36 * OS1_S1 + 56) -
                                      p_over_q * *(b + 60 * OS1_S1 + 56);
            *(b + 36 * OS1_S1 + 87) = prefactor_y * *(b + 36 * OS1_S1 + 57) -
                                      p_over_q * *(b + 59 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 35);
            *(b + 36 * OS1_S1 + 88) = prefactor_z * *(b + 36 * OS1_S1 + 57) -
                                      p_over_q * *(b + 60 * OS1_S1 + 57);
            *(b + 36 * OS1_S1 + 89) = prefactor_z * *(b + 36 * OS1_S1 + 58) -
                                      p_over_q * *(b + 60 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 35);
            *(b + 36 * OS1_S1 + 90) =
                prefactor_y * *(b + 36 * OS1_S1 + 59) -
                p_over_q * *(b + 59 * OS1_S1 + 59) +
                one_over_two_q * *(b + 20 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 36);
            *(b + 36 * OS1_S1 + 91) = prefactor_z * *(b + 36 * OS1_S1 + 59) -
                                      p_over_q * *(b + 60 * OS1_S1 + 59);
            *(b + 36 * OS1_S1 + 92) = prefactor_y * *(b + 36 * OS1_S1 + 61) -
                                      p_over_q * *(b + 59 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 61);
            *(b + 36 * OS1_S1 + 93) =
                prefactor_z * *(b + 36 * OS1_S1 + 61) -
                p_over_q * *(b + 60 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 37);
            *(b + 36 * OS1_S1 + 94) =
                prefactor_x * *(b + 36 * OS1_S1 + 66) -
                p_over_q * *(b + 57 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 45);
            *(b + 36 * OS1_S1 + 95) = prefactor_z * *(b + 36 * OS1_S1 + 62) -
                                      p_over_q * *(b + 60 * OS1_S1 + 62);
            *(b + 36 * OS1_S1 + 96) = prefactor_z * *(b + 36 * OS1_S1 + 63) -
                                      p_over_q * *(b + 60 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 38);
            *(b + 36 * OS1_S1 + 97) = prefactor_y * *(b + 36 * OS1_S1 + 65) -
                                      p_over_q * *(b + 59 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 65);
            *(b + 36 * OS1_S1 + 98) =
                prefactor_x * *(b + 36 * OS1_S1 + 70) -
                p_over_q * *(b + 57 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 49);
            *(b + 36 * OS1_S1 + 99) =
                prefactor_x * *(b + 36 * OS1_S1 + 71) -
                p_over_q * *(b + 57 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 71) +
                one_over_two_q * *(b + 36 * OS1_S1 + 50);
            *(b + 36 * OS1_S1 + 100) = prefactor_z * *(b + 36 * OS1_S1 + 66) -
                                       p_over_q * *(b + 60 * OS1_S1 + 66);
            *(b + 36 * OS1_S1 + 101) = prefactor_z * *(b + 36 * OS1_S1 + 67) -
                                       p_over_q * *(b + 60 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 41);
            *(b + 36 * OS1_S1 + 102) =
                prefactor_y * *(b + 36 * OS1_S1 + 69) -
                p_over_q * *(b + 59 * OS1_S1 + 69) +
                one_over_two_q * *(b + 20 * OS1_S1 + 69) +
                one_over_two_q * *(b + 36 * OS1_S1 + 44);
            *(b + 36 * OS1_S1 + 103) = prefactor_y * *(b + 36 * OS1_S1 + 70) -
                                       p_over_q * *(b + 59 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 70);
            *(b + 36 * OS1_S1 + 104) =
                prefactor_x * *(b + 36 * OS1_S1 + 76) -
                p_over_q * *(b + 57 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 76) +
                one_over_two_q * *(b + 36 * OS1_S1 + 55);
            *(b + 36 * OS1_S1 + 105) =
                prefactor_x * *(b + 36 * OS1_S1 + 77) -
                p_over_q * *(b + 57 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 77);
            *(b + 36 * OS1_S1 + 106) = prefactor_z * *(b + 36 * OS1_S1 + 71) -
                                       p_over_q * *(b + 60 * OS1_S1 + 71);
            *(b + 36 * OS1_S1 + 107) =
                prefactor_x * *(b + 36 * OS1_S1 + 79) -
                p_over_q * *(b + 57 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 79);
            *(b + 36 * OS1_S1 + 108) =
                prefactor_x * *(b + 36 * OS1_S1 + 80) -
                p_over_q * *(b + 57 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 80);
            *(b + 36 * OS1_S1 + 109) =
                prefactor_x * *(b + 36 * OS1_S1 + 81) -
                p_over_q * *(b + 57 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 81);
            *(b + 36 * OS1_S1 + 110) = prefactor_y * *(b + 36 * OS1_S1 + 76) -
                                       p_over_q * *(b + 59 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 76);
            *(b + 36 * OS1_S1 + 111) =
                prefactor_x * *(b + 36 * OS1_S1 + 83) -
                p_over_q * *(b + 57 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 83);
            *(b + 36 * OS1_S1 + 112) =
                prefactor_y * *(b + 36 * OS1_S1 + 77) -
                p_over_q * *(b + 59 * OS1_S1 + 77) +
                one_over_two_q * *(b + 20 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 36 * OS1_S1 + 50);
            *(b + 36 * OS1_S1 + 113) = prefactor_z * *(b + 36 * OS1_S1 + 77) -
                                       p_over_q * *(b + 60 * OS1_S1 + 77);
            *(b + 36 * OS1_S1 + 114) = prefactor_z * *(b + 36 * OS1_S1 + 78) -
                                       p_over_q * *(b + 60 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 50);
            *(b + 36 * OS1_S1 + 115) =
                prefactor_z * *(b + 36 * OS1_S1 + 79) -
                p_over_q * *(b + 60 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 51);
            *(b + 36 * OS1_S1 + 116) =
                prefactor_y * *(b + 36 * OS1_S1 + 81) -
                p_over_q * *(b + 59 * OS1_S1 + 81) +
                one_over_two_q * *(b + 20 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 54);
            *(b + 36 * OS1_S1 + 117) =
                prefactor_y * *(b + 36 * OS1_S1 + 82) -
                p_over_q * *(b + 59 * OS1_S1 + 82) +
                one_over_two_q * *(b + 20 * OS1_S1 + 82) +
                one_over_two_q * *(b + 36 * OS1_S1 + 55);
            *(b + 36 * OS1_S1 + 118) = prefactor_y * *(b + 36 * OS1_S1 + 83) -
                                       p_over_q * *(b + 59 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 83);
            *(b + 36 * OS1_S1 + 119) =
                prefactor_z * *(b + 36 * OS1_S1 + 83) -
                p_over_q * *(b + 60 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 36 * OS1_S1 + 55);
            *(b + 37 * OS1_S1 + 84) =
                prefactor_x * *(b + 37 * OS1_S1 + 56) -
                p_over_q * *(b + 58 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 37 * OS1_S1 + 35);
            *(b + 37 * OS1_S1 + 85) = prefactor_y * *(b + 37 * OS1_S1 + 56) -
                                      p_over_q * *(b + 60 * OS1_S1 + 56);
            *(b + 37 * OS1_S1 + 86) = prefactor_z * *(b + 37 * OS1_S1 + 56) -
                                      p_over_q * *(b + 61 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 56);
            *(b + 37 * OS1_S1 + 87) = prefactor_y * *(b + 37 * OS1_S1 + 57) -
                                      p_over_q * *(b + 60 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 35);
            *(b + 37 * OS1_S1 + 88) = prefactor_y * *(b + 37 * OS1_S1 + 58) -
                                      p_over_q * *(b + 60 * OS1_S1 + 58);
            *(b + 37 * OS1_S1 + 89) = prefactor_z * *(b + 37 * OS1_S1 + 58) -
                                      p_over_q * *(b + 61 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 35);
            *(b + 37 * OS1_S1 + 90) =
                prefactor_y * *(b + 37 * OS1_S1 + 59) -
                p_over_q * *(b + 60 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 36);
            *(b + 37 * OS1_S1 + 91) = prefactor_z * *(b + 37 * OS1_S1 + 59) -
                                      p_over_q * *(b + 61 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 59);
            *(b + 37 * OS1_S1 + 92) = prefactor_y * *(b + 37 * OS1_S1 + 61) -
                                      p_over_q * *(b + 60 * OS1_S1 + 61);
            *(b + 37 * OS1_S1 + 93) =
                prefactor_z * *(b + 37 * OS1_S1 + 61) -
                p_over_q * *(b + 61 * OS1_S1 + 61) +
                one_over_two_q * *(b + 20 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 37);
            *(b + 37 * OS1_S1 + 94) =
                prefactor_x * *(b + 37 * OS1_S1 + 66) -
                p_over_q * *(b + 58 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 45);
            *(b + 37 * OS1_S1 + 95) = prefactor_z * *(b + 37 * OS1_S1 + 62) -
                                      p_over_q * *(b + 61 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 20 * OS1_S1 + 62);
            *(b + 37 * OS1_S1 + 96) = prefactor_y * *(b + 37 * OS1_S1 + 64) -
                                      p_over_q * *(b + 60 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 40);
            *(b + 37 * OS1_S1 + 97) = prefactor_y * *(b + 37 * OS1_S1 + 65) -
                                      p_over_q * *(b + 60 * OS1_S1 + 65);
            *(b + 37 * OS1_S1 + 98) =
                prefactor_x * *(b + 37 * OS1_S1 + 70) -
                p_over_q * *(b + 58 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 49);
            *(b + 37 * OS1_S1 + 99) =
                prefactor_x * *(b + 37 * OS1_S1 + 71) -
                p_over_q * *(b + 58 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 71) +
                one_over_two_q * *(b + 37 * OS1_S1 + 50);
            *(b + 37 * OS1_S1 + 100) = prefactor_z * *(b + 37 * OS1_S1 + 66) -
                                       p_over_q * *(b + 61 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 66);
            *(b + 37 * OS1_S1 + 101) =
                prefactor_z * *(b + 37 * OS1_S1 + 67) -
                p_over_q * *(b + 61 * OS1_S1 + 67) +
                one_over_two_q * *(b + 20 * OS1_S1 + 67) +
                one_over_two_q * *(b + 37 * OS1_S1 + 41);
            *(b + 37 * OS1_S1 + 102) = prefactor_y * *(b + 37 * OS1_S1 + 69) -
                                       p_over_q * *(b + 60 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 44);
            *(b + 37 * OS1_S1 + 103) = prefactor_y * *(b + 37 * OS1_S1 + 70) -
                                       p_over_q * *(b + 60 * OS1_S1 + 70);
            *(b + 37 * OS1_S1 + 104) =
                prefactor_x * *(b + 37 * OS1_S1 + 76) -
                p_over_q * *(b + 58 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 76) +
                one_over_two_q * *(b + 37 * OS1_S1 + 55);
            *(b + 37 * OS1_S1 + 105) =
                prefactor_x * *(b + 37 * OS1_S1 + 77) -
                p_over_q * *(b + 58 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 77);
            *(b + 37 * OS1_S1 + 106) = prefactor_z * *(b + 37 * OS1_S1 + 71) -
                                       p_over_q * *(b + 61 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 71);
            *(b + 37 * OS1_S1 + 107) =
                prefactor_x * *(b + 37 * OS1_S1 + 79) -
                p_over_q * *(b + 58 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 79);
            *(b + 37 * OS1_S1 + 108) =
                prefactor_x * *(b + 37 * OS1_S1 + 80) -
                p_over_q * *(b + 58 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 80);
            *(b + 37 * OS1_S1 + 109) =
                prefactor_x * *(b + 37 * OS1_S1 + 81) -
                p_over_q * *(b + 58 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 81);
            *(b + 37 * OS1_S1 + 110) = prefactor_y * *(b + 37 * OS1_S1 + 76) -
                                       p_over_q * *(b + 60 * OS1_S1 + 76);
            *(b + 37 * OS1_S1 + 111) =
                prefactor_x * *(b + 37 * OS1_S1 + 83) -
                p_over_q * *(b + 58 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 83);
            *(b + 37 * OS1_S1 + 112) =
                prefactor_y * *(b + 37 * OS1_S1 + 77) -
                p_over_q * *(b + 60 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 37 * OS1_S1 + 50);
            *(b + 37 * OS1_S1 + 113) = prefactor_z * *(b + 37 * OS1_S1 + 77) -
                                       p_over_q * *(b + 61 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 77);
            *(b + 37 * OS1_S1 + 114) =
                prefactor_z * *(b + 37 * OS1_S1 + 78) -
                p_over_q * *(b + 61 * OS1_S1 + 78) +
                one_over_two_q * *(b + 20 * OS1_S1 + 78) +
                one_over_two_q * *(b + 37 * OS1_S1 + 50);
            *(b + 37 * OS1_S1 + 115) =
                prefactor_z * *(b + 37 * OS1_S1 + 79) -
                p_over_q * *(b + 61 * OS1_S1 + 79) +
                one_over_two_q * *(b + 20 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 51);
            *(b + 37 * OS1_S1 + 116) =
                prefactor_y * *(b + 37 * OS1_S1 + 81) -
                p_over_q * *(b + 60 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 54);
            *(b + 37 * OS1_S1 + 117) = prefactor_y * *(b + 37 * OS1_S1 + 82) -
                                       p_over_q * *(b + 60 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 55);
            *(b + 37 * OS1_S1 + 118) = prefactor_y * *(b + 37 * OS1_S1 + 83) -
                                       p_over_q * *(b + 60 * OS1_S1 + 83);
            *(b + 37 * OS1_S1 + 119) =
                prefactor_z * *(b + 37 * OS1_S1 + 83) -
                p_over_q * *(b + 61 * OS1_S1 + 83) +
                one_over_two_q * *(b + 20 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 37 * OS1_S1 + 55);
            *(b + 38 * OS1_S1 + 84) =
                prefactor_x * *(b + 38 * OS1_S1 + 56) -
                p_over_q * *(b + 59 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 38 * OS1_S1 + 35);
            *(b + 38 * OS1_S1 + 85) =
                prefactor_y * *(b + 38 * OS1_S1 + 56) -
                p_over_q * *(b + 62 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 56);
            *(b + 38 * OS1_S1 + 86) = prefactor_z * *(b + 38 * OS1_S1 + 56) -
                                      p_over_q * *(b + 63 * OS1_S1 + 56);
            *(b + 38 * OS1_S1 + 87) =
                prefactor_y * *(b + 38 * OS1_S1 + 57) -
                p_over_q * *(b + 62 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 57) +
                one_over_two_q * *(b + 38 * OS1_S1 + 35);
            *(b + 38 * OS1_S1 + 88) = prefactor_z * *(b + 38 * OS1_S1 + 57) -
                                      p_over_q * *(b + 63 * OS1_S1 + 57);
            *(b + 38 * OS1_S1 + 89) = prefactor_z * *(b + 38 * OS1_S1 + 58) -
                                      p_over_q * *(b + 63 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 35);
            *(b + 38 * OS1_S1 + 90) =
                prefactor_y * *(b + 38 * OS1_S1 + 59) -
                p_over_q * *(b + 62 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 36);
            *(b + 38 * OS1_S1 + 91) = prefactor_z * *(b + 38 * OS1_S1 + 59) -
                                      p_over_q * *(b + 63 * OS1_S1 + 59);
            *(b + 38 * OS1_S1 + 92) =
                prefactor_y * *(b + 38 * OS1_S1 + 61) -
                p_over_q * *(b + 62 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 61);
            *(b + 38 * OS1_S1 + 93) =
                prefactor_z * *(b + 38 * OS1_S1 + 61) -
                p_over_q * *(b + 63 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 37);
            *(b + 38 * OS1_S1 + 94) =
                prefactor_x * *(b + 38 * OS1_S1 + 66) -
                p_over_q * *(b + 59 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 45);
            *(b + 38 * OS1_S1 + 95) = prefactor_z * *(b + 38 * OS1_S1 + 62) -
                                      p_over_q * *(b + 63 * OS1_S1 + 62);
            *(b + 38 * OS1_S1 + 96) = prefactor_z * *(b + 38 * OS1_S1 + 63) -
                                      p_over_q * *(b + 63 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 38);
            *(b + 38 * OS1_S1 + 97) =
                prefactor_y * *(b + 38 * OS1_S1 + 65) -
                p_over_q * *(b + 62 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 65);
            *(b + 38 * OS1_S1 + 98) =
                prefactor_x * *(b + 38 * OS1_S1 + 70) -
                p_over_q * *(b + 59 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 49);
            *(b + 38 * OS1_S1 + 99) =
                prefactor_x * *(b + 38 * OS1_S1 + 71) -
                p_over_q * *(b + 59 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 71) +
                one_over_two_q * *(b + 38 * OS1_S1 + 50);
            *(b + 38 * OS1_S1 + 100) = prefactor_z * *(b + 38 * OS1_S1 + 66) -
                                       p_over_q * *(b + 63 * OS1_S1 + 66);
            *(b + 38 * OS1_S1 + 101) = prefactor_z * *(b + 38 * OS1_S1 + 67) -
                                       p_over_q * *(b + 63 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 41);
            *(b + 38 * OS1_S1 + 102) =
                prefactor_y * *(b + 38 * OS1_S1 + 69) -
                p_over_q * *(b + 62 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 69) +
                one_over_two_q * *(b + 38 * OS1_S1 + 44);
            *(b + 38 * OS1_S1 + 103) =
                prefactor_y * *(b + 38 * OS1_S1 + 70) -
                p_over_q * *(b + 62 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 70);
            *(b + 38 * OS1_S1 + 104) =
                prefactor_x * *(b + 38 * OS1_S1 + 76) -
                p_over_q * *(b + 59 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 76) +
                one_over_two_q * *(b + 38 * OS1_S1 + 55);
            *(b + 38 * OS1_S1 + 105) =
                prefactor_x * *(b + 38 * OS1_S1 + 77) -
                p_over_q * *(b + 59 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 77);
            *(b + 38 * OS1_S1 + 106) = prefactor_z * *(b + 38 * OS1_S1 + 71) -
                                       p_over_q * *(b + 63 * OS1_S1 + 71);
            *(b + 38 * OS1_S1 + 107) =
                prefactor_x * *(b + 38 * OS1_S1 + 79) -
                p_over_q * *(b + 59 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 79);
            *(b + 38 * OS1_S1 + 108) =
                prefactor_x * *(b + 38 * OS1_S1 + 80) -
                p_over_q * *(b + 59 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 80);
            *(b + 38 * OS1_S1 + 109) =
                prefactor_x * *(b + 38 * OS1_S1 + 81) -
                p_over_q * *(b + 59 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 81);
            *(b + 38 * OS1_S1 + 110) =
                prefactor_y * *(b + 38 * OS1_S1 + 76) -
                p_over_q * *(b + 62 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 76);
            *(b + 38 * OS1_S1 + 111) =
                prefactor_x * *(b + 38 * OS1_S1 + 83) -
                p_over_q * *(b + 59 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 83);
            *(b + 38 * OS1_S1 + 112) =
                prefactor_y * *(b + 38 * OS1_S1 + 77) -
                p_over_q * *(b + 62 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 38 * OS1_S1 + 50);
            *(b + 38 * OS1_S1 + 113) = prefactor_z * *(b + 38 * OS1_S1 + 77) -
                                       p_over_q * *(b + 63 * OS1_S1 + 77);
            *(b + 38 * OS1_S1 + 114) = prefactor_z * *(b + 38 * OS1_S1 + 78) -
                                       p_over_q * *(b + 63 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 50);
            *(b + 38 * OS1_S1 + 115) =
                prefactor_z * *(b + 38 * OS1_S1 + 79) -
                p_over_q * *(b + 63 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 51);
            *(b + 38 * OS1_S1 + 116) =
                prefactor_y * *(b + 38 * OS1_S1 + 81) -
                p_over_q * *(b + 62 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 54);
            *(b + 38 * OS1_S1 + 117) =
                prefactor_y * *(b + 38 * OS1_S1 + 82) -
                p_over_q * *(b + 62 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 82) +
                one_over_two_q * *(b + 38 * OS1_S1 + 55);
            *(b + 38 * OS1_S1 + 118) =
                prefactor_y * *(b + 38 * OS1_S1 + 83) -
                p_over_q * *(b + 62 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 83);
            *(b + 38 * OS1_S1 + 119) =
                prefactor_z * *(b + 38 * OS1_S1 + 83) -
                p_over_q * *(b + 63 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 38 * OS1_S1 + 55);
            *(b + 39 * OS1_S1 + 84) =
                prefactor_x * *(b + 39 * OS1_S1 + 56) -
                p_over_q * *(b + 60 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 39 * OS1_S1 + 35);
            *(b + 39 * OS1_S1 + 85) = prefactor_y * *(b + 39 * OS1_S1 + 56) -
                                      p_over_q * *(b + 63 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 56);
            *(b + 39 * OS1_S1 + 86) = prefactor_z * *(b + 39 * OS1_S1 + 56) -
                                      p_over_q * *(b + 64 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 56);
            *(b + 39 * OS1_S1 + 87) = prefactor_y * *(b + 39 * OS1_S1 + 57) -
                                      p_over_q * *(b + 63 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 35);
            *(b + 39 * OS1_S1 + 88) = prefactor_z * *(b + 39 * OS1_S1 + 57) -
                                      p_over_q * *(b + 64 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 57);
            *(b + 39 * OS1_S1 + 89) = prefactor_z * *(b + 39 * OS1_S1 + 58) -
                                      p_over_q * *(b + 64 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 35);
            *(b + 39 * OS1_S1 + 90) =
                prefactor_y * *(b + 39 * OS1_S1 + 59) -
                p_over_q * *(b + 63 * OS1_S1 + 59) +
                one_over_two_q * *(b + 22 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 36);
            *(b + 39 * OS1_S1 + 91) = prefactor_z * *(b + 39 * OS1_S1 + 59) -
                                      p_over_q * *(b + 64 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 59);
            *(b + 39 * OS1_S1 + 92) = prefactor_y * *(b + 39 * OS1_S1 + 61) -
                                      p_over_q * *(b + 63 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 61);
            *(b + 39 * OS1_S1 + 93) =
                prefactor_z * *(b + 39 * OS1_S1 + 61) -
                p_over_q * *(b + 64 * OS1_S1 + 61) +
                one_over_two_q * *(b + 21 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 37);
            *(b + 39 * OS1_S1 + 94) =
                prefactor_x * *(b + 39 * OS1_S1 + 66) -
                p_over_q * *(b + 60 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 45);
            *(b + 39 * OS1_S1 + 95) = prefactor_z * *(b + 39 * OS1_S1 + 62) -
                                      p_over_q * *(b + 64 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 62);
            *(b + 39 * OS1_S1 + 96) = prefactor_z * *(b + 39 * OS1_S1 + 63) -
                                      p_over_q * *(b + 64 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 21 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 39 * OS1_S1 + 38);
            *(b + 39 * OS1_S1 + 97) = prefactor_y * *(b + 39 * OS1_S1 + 65) -
                                      p_over_q * *(b + 63 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 22 * OS1_S1 + 65);
            *(b + 39 * OS1_S1 + 98) =
                prefactor_x * *(b + 39 * OS1_S1 + 70) -
                p_over_q * *(b + 60 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 49);
            *(b + 39 * OS1_S1 + 99) =
                prefactor_x * *(b + 39 * OS1_S1 + 71) -
                p_over_q * *(b + 60 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 71) +
                one_over_two_q * *(b + 39 * OS1_S1 + 50);
            *(b + 39 * OS1_S1 + 100) = prefactor_z * *(b + 39 * OS1_S1 + 66) -
                                       p_over_q * *(b + 64 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 66);
            *(b + 39 * OS1_S1 + 101) =
                prefactor_z * *(b + 39 * OS1_S1 + 67) -
                p_over_q * *(b + 64 * OS1_S1 + 67) +
                one_over_two_q * *(b + 21 * OS1_S1 + 67) +
                one_over_two_q * *(b + 39 * OS1_S1 + 41);
            *(b + 39 * OS1_S1 + 102) =
                prefactor_y * *(b + 39 * OS1_S1 + 69) -
                p_over_q * *(b + 63 * OS1_S1 + 69) +
                one_over_two_q * *(b + 22 * OS1_S1 + 69) +
                one_over_two_q * *(b + 39 * OS1_S1 + 44);
            *(b + 39 * OS1_S1 + 103) = prefactor_y * *(b + 39 * OS1_S1 + 70) -
                                       p_over_q * *(b + 63 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 70);
            *(b + 39 * OS1_S1 + 104) =
                prefactor_x * *(b + 39 * OS1_S1 + 76) -
                p_over_q * *(b + 60 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 76) +
                one_over_two_q * *(b + 39 * OS1_S1 + 55);
            *(b + 39 * OS1_S1 + 105) =
                prefactor_x * *(b + 39 * OS1_S1 + 77) -
                p_over_q * *(b + 60 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 77);
            *(b + 39 * OS1_S1 + 106) = prefactor_z * *(b + 39 * OS1_S1 + 71) -
                                       p_over_q * *(b + 64 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 71);
            *(b + 39 * OS1_S1 + 107) =
                prefactor_x * *(b + 39 * OS1_S1 + 79) -
                p_over_q * *(b + 60 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 79);
            *(b + 39 * OS1_S1 + 108) =
                prefactor_x * *(b + 39 * OS1_S1 + 80) -
                p_over_q * *(b + 60 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 80);
            *(b + 39 * OS1_S1 + 109) =
                prefactor_x * *(b + 39 * OS1_S1 + 81) -
                p_over_q * *(b + 60 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 81);
            *(b + 39 * OS1_S1 + 110) = prefactor_y * *(b + 39 * OS1_S1 + 76) -
                                       p_over_q * *(b + 63 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 76);
            *(b + 39 * OS1_S1 + 111) =
                prefactor_x * *(b + 39 * OS1_S1 + 83) -
                p_over_q * *(b + 60 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 83);
            *(b + 39 * OS1_S1 + 112) =
                prefactor_y * *(b + 39 * OS1_S1 + 77) -
                p_over_q * *(b + 63 * OS1_S1 + 77) +
                one_over_two_q * *(b + 22 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 39 * OS1_S1 + 50);
            *(b + 39 * OS1_S1 + 113) = prefactor_z * *(b + 39 * OS1_S1 + 77) -
                                       p_over_q * *(b + 64 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 77);
            *(b + 39 * OS1_S1 + 114) =
                prefactor_z * *(b + 39 * OS1_S1 + 78) -
                p_over_q * *(b + 64 * OS1_S1 + 78) +
                one_over_two_q * *(b + 21 * OS1_S1 + 78) +
                one_over_two_q * *(b + 39 * OS1_S1 + 50);
            *(b + 39 * OS1_S1 + 115) =
                prefactor_z * *(b + 39 * OS1_S1 + 79) -
                p_over_q * *(b + 64 * OS1_S1 + 79) +
                one_over_two_q * *(b + 21 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 51);
            *(b + 39 * OS1_S1 + 116) =
                prefactor_y * *(b + 39 * OS1_S1 + 81) -
                p_over_q * *(b + 63 * OS1_S1 + 81) +
                one_over_two_q * *(b + 22 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 54);
            *(b + 39 * OS1_S1 + 117) =
                prefactor_y * *(b + 39 * OS1_S1 + 82) -
                p_over_q * *(b + 63 * OS1_S1 + 82) +
                one_over_two_q * *(b + 22 * OS1_S1 + 82) +
                one_over_two_q * *(b + 39 * OS1_S1 + 55);
            *(b + 39 * OS1_S1 + 118) = prefactor_y * *(b + 39 * OS1_S1 + 83) -
                                       p_over_q * *(b + 63 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 83);
            *(b + 39 * OS1_S1 + 119) =
                prefactor_z * *(b + 39 * OS1_S1 + 83) -
                p_over_q * *(b + 64 * OS1_S1 + 83) +
                one_over_two_q * *(b + 21 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 39 * OS1_S1 + 55);
            *(b + 40 * OS1_S1 + 84) =
                prefactor_x * *(b + 40 * OS1_S1 + 56) -
                p_over_q * *(b + 61 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 40 * OS1_S1 + 35);
            *(b + 40 * OS1_S1 + 85) = prefactor_y * *(b + 40 * OS1_S1 + 56) -
                                      p_over_q * *(b + 64 * OS1_S1 + 56);
            *(b + 40 * OS1_S1 + 86) =
                prefactor_z * *(b + 40 * OS1_S1 + 56) -
                p_over_q * *(b + 65 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 56);
            *(b + 40 * OS1_S1 + 87) = prefactor_y * *(b + 40 * OS1_S1 + 57) -
                                      p_over_q * *(b + 64 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 35);
            *(b + 40 * OS1_S1 + 88) = prefactor_y * *(b + 40 * OS1_S1 + 58) -
                                      p_over_q * *(b + 64 * OS1_S1 + 58);
            *(b + 40 * OS1_S1 + 89) =
                prefactor_z * *(b + 40 * OS1_S1 + 58) -
                p_over_q * *(b + 65 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 58) +
                one_over_two_q * *(b + 40 * OS1_S1 + 35);
            *(b + 40 * OS1_S1 + 90) =
                prefactor_y * *(b + 40 * OS1_S1 + 59) -
                p_over_q * *(b + 64 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 36);
            *(b + 40 * OS1_S1 + 91) =
                prefactor_z * *(b + 40 * OS1_S1 + 59) -
                p_over_q * *(b + 65 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 59);
            *(b + 40 * OS1_S1 + 92) = prefactor_y * *(b + 40 * OS1_S1 + 61) -
                                      p_over_q * *(b + 64 * OS1_S1 + 61);
            *(b + 40 * OS1_S1 + 93) =
                prefactor_z * *(b + 40 * OS1_S1 + 61) -
                p_over_q * *(b + 65 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 37);
            *(b + 40 * OS1_S1 + 94) =
                prefactor_x * *(b + 40 * OS1_S1 + 66) -
                p_over_q * *(b + 61 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 45);
            *(b + 40 * OS1_S1 + 95) =
                prefactor_z * *(b + 40 * OS1_S1 + 62) -
                p_over_q * *(b + 65 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 62);
            *(b + 40 * OS1_S1 + 96) = prefactor_y * *(b + 40 * OS1_S1 + 64) -
                                      p_over_q * *(b + 64 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 40);
            *(b + 40 * OS1_S1 + 97) = prefactor_y * *(b + 40 * OS1_S1 + 65) -
                                      p_over_q * *(b + 64 * OS1_S1 + 65);
            *(b + 40 * OS1_S1 + 98) =
                prefactor_x * *(b + 40 * OS1_S1 + 70) -
                p_over_q * *(b + 61 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 49);
            *(b + 40 * OS1_S1 + 99) =
                prefactor_x * *(b + 40 * OS1_S1 + 71) -
                p_over_q * *(b + 61 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 71) +
                one_over_two_q * *(b + 40 * OS1_S1 + 50);
            *(b + 40 * OS1_S1 + 100) =
                prefactor_z * *(b + 40 * OS1_S1 + 66) -
                p_over_q * *(b + 65 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 66);
            *(b + 40 * OS1_S1 + 101) =
                prefactor_z * *(b + 40 * OS1_S1 + 67) -
                p_over_q * *(b + 65 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 67) +
                one_over_two_q * *(b + 40 * OS1_S1 + 41);
            *(b + 40 * OS1_S1 + 102) = prefactor_y * *(b + 40 * OS1_S1 + 69) -
                                       p_over_q * *(b + 64 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 44);
            *(b + 40 * OS1_S1 + 103) = prefactor_y * *(b + 40 * OS1_S1 + 70) -
                                       p_over_q * *(b + 64 * OS1_S1 + 70);
            *(b + 40 * OS1_S1 + 104) =
                prefactor_x * *(b + 40 * OS1_S1 + 76) -
                p_over_q * *(b + 61 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 76) +
                one_over_two_q * *(b + 40 * OS1_S1 + 55);
            *(b + 40 * OS1_S1 + 105) =
                prefactor_x * *(b + 40 * OS1_S1 + 77) -
                p_over_q * *(b + 61 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 77);
            *(b + 40 * OS1_S1 + 106) =
                prefactor_z * *(b + 40 * OS1_S1 + 71) -
                p_over_q * *(b + 65 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 71);
            *(b + 40 * OS1_S1 + 107) =
                prefactor_x * *(b + 40 * OS1_S1 + 79) -
                p_over_q * *(b + 61 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 79);
            *(b + 40 * OS1_S1 + 108) =
                prefactor_x * *(b + 40 * OS1_S1 + 80) -
                p_over_q * *(b + 61 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 80);
            *(b + 40 * OS1_S1 + 109) =
                prefactor_x * *(b + 40 * OS1_S1 + 81) -
                p_over_q * *(b + 61 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 81);
            *(b + 40 * OS1_S1 + 110) = prefactor_y * *(b + 40 * OS1_S1 + 76) -
                                       p_over_q * *(b + 64 * OS1_S1 + 76);
            *(b + 40 * OS1_S1 + 111) =
                prefactor_x * *(b + 40 * OS1_S1 + 83) -
                p_over_q * *(b + 61 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 83);
            *(b + 40 * OS1_S1 + 112) =
                prefactor_y * *(b + 40 * OS1_S1 + 77) -
                p_over_q * *(b + 64 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 40 * OS1_S1 + 50);
            *(b + 40 * OS1_S1 + 113) =
                prefactor_z * *(b + 40 * OS1_S1 + 77) -
                p_over_q * *(b + 65 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 77);
            *(b + 40 * OS1_S1 + 114) =
                prefactor_z * *(b + 40 * OS1_S1 + 78) -
                p_over_q * *(b + 65 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 78) +
                one_over_two_q * *(b + 40 * OS1_S1 + 50);
            *(b + 40 * OS1_S1 + 115) =
                prefactor_z * *(b + 40 * OS1_S1 + 79) -
                p_over_q * *(b + 65 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 51);
            *(b + 40 * OS1_S1 + 116) =
                prefactor_y * *(b + 40 * OS1_S1 + 81) -
                p_over_q * *(b + 64 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 54);
            *(b + 40 * OS1_S1 + 117) = prefactor_y * *(b + 40 * OS1_S1 + 82) -
                                       p_over_q * *(b + 64 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 55);
            *(b + 40 * OS1_S1 + 118) = prefactor_y * *(b + 40 * OS1_S1 + 83) -
                                       p_over_q * *(b + 64 * OS1_S1 + 83);
            *(b + 40 * OS1_S1 + 119) =
                prefactor_z * *(b + 40 * OS1_S1 + 83) -
                p_over_q * *(b + 65 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 40 * OS1_S1 + 55);
            *(b + 41 * OS1_S1 + 84) =
                prefactor_x * *(b + 41 * OS1_S1 + 56) -
                p_over_q * *(b + 62 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 41 * OS1_S1 + 35);
            *(b + 41 * OS1_S1 + 85) =
                prefactor_y * *(b + 41 * OS1_S1 + 56) -
                p_over_q * *(b + 66 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 56);
            *(b + 41 * OS1_S1 + 86) = prefactor_z * *(b + 41 * OS1_S1 + 56) -
                                      p_over_q * *(b + 67 * OS1_S1 + 56);
            *(b + 41 * OS1_S1 + 87) =
                prefactor_y * *(b + 41 * OS1_S1 + 57) -
                p_over_q * *(b + 66 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 57) +
                one_over_two_q * *(b + 41 * OS1_S1 + 35);
            *(b + 41 * OS1_S1 + 88) = prefactor_z * *(b + 41 * OS1_S1 + 57) -
                                      p_over_q * *(b + 67 * OS1_S1 + 57);
            *(b + 41 * OS1_S1 + 89) = prefactor_z * *(b + 41 * OS1_S1 + 58) -
                                      p_over_q * *(b + 67 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 35);
            *(b + 41 * OS1_S1 + 90) =
                prefactor_y * *(b + 41 * OS1_S1 + 59) -
                p_over_q * *(b + 66 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 36);
            *(b + 41 * OS1_S1 + 91) = prefactor_z * *(b + 41 * OS1_S1 + 59) -
                                      p_over_q * *(b + 67 * OS1_S1 + 59);
            *(b + 41 * OS1_S1 + 92) =
                prefactor_y * *(b + 41 * OS1_S1 + 61) -
                p_over_q * *(b + 66 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 61);
            *(b + 41 * OS1_S1 + 93) =
                prefactor_z * *(b + 41 * OS1_S1 + 61) -
                p_over_q * *(b + 67 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 37);
            *(b + 41 * OS1_S1 + 94) =
                prefactor_x * *(b + 41 * OS1_S1 + 66) -
                p_over_q * *(b + 62 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 45);
            *(b + 41 * OS1_S1 + 95) = prefactor_z * *(b + 41 * OS1_S1 + 62) -
                                      p_over_q * *(b + 67 * OS1_S1 + 62);
            *(b + 41 * OS1_S1 + 96) = prefactor_z * *(b + 41 * OS1_S1 + 63) -
                                      p_over_q * *(b + 67 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 38);
            *(b + 41 * OS1_S1 + 97) =
                prefactor_y * *(b + 41 * OS1_S1 + 65) -
                p_over_q * *(b + 66 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 65);
            *(b + 41 * OS1_S1 + 98) =
                prefactor_x * *(b + 41 * OS1_S1 + 70) -
                p_over_q * *(b + 62 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 49);
            *(b + 41 * OS1_S1 + 99) =
                prefactor_x * *(b + 41 * OS1_S1 + 71) -
                p_over_q * *(b + 62 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 71) +
                one_over_two_q * *(b + 41 * OS1_S1 + 50);
            *(b + 41 * OS1_S1 + 100) = prefactor_z * *(b + 41 * OS1_S1 + 66) -
                                       p_over_q * *(b + 67 * OS1_S1 + 66);
            *(b + 41 * OS1_S1 + 101) = prefactor_z * *(b + 41 * OS1_S1 + 67) -
                                       p_over_q * *(b + 67 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 41);
            *(b + 41 * OS1_S1 + 102) =
                prefactor_x * *(b + 41 * OS1_S1 + 74) -
                p_over_q * *(b + 62 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 74) +
                one_over_two_q * *(b + 41 * OS1_S1 + 53);
            *(b + 41 * OS1_S1 + 103) =
                prefactor_y * *(b + 41 * OS1_S1 + 70) -
                p_over_q * *(b + 66 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 70);
            *(b + 41 * OS1_S1 + 104) =
                prefactor_x * *(b + 41 * OS1_S1 + 76) -
                p_over_q * *(b + 62 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 76) +
                one_over_two_q * *(b + 41 * OS1_S1 + 55);
            *(b + 41 * OS1_S1 + 105) =
                prefactor_x * *(b + 41 * OS1_S1 + 77) -
                p_over_q * *(b + 62 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 77);
            *(b + 41 * OS1_S1 + 106) = prefactor_z * *(b + 41 * OS1_S1 + 71) -
                                       p_over_q * *(b + 67 * OS1_S1 + 71);
            *(b + 41 * OS1_S1 + 107) =
                prefactor_x * *(b + 41 * OS1_S1 + 79) -
                p_over_q * *(b + 62 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 79);
            *(b + 41 * OS1_S1 + 108) =
                prefactor_x * *(b + 41 * OS1_S1 + 80) -
                p_over_q * *(b + 62 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 80);
            *(b + 41 * OS1_S1 + 109) =
                prefactor_x * *(b + 41 * OS1_S1 + 81) -
                p_over_q * *(b + 62 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 81);
            *(b + 41 * OS1_S1 + 110) =
                prefactor_x * *(b + 41 * OS1_S1 + 82) -
                p_over_q * *(b + 62 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 82);
            *(b + 41 * OS1_S1 + 111) =
                prefactor_x * *(b + 41 * OS1_S1 + 83) -
                p_over_q * *(b + 62 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 83);
            *(b + 41 * OS1_S1 + 112) =
                prefactor_y * *(b + 41 * OS1_S1 + 77) -
                p_over_q * *(b + 66 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 41 * OS1_S1 + 50);
            *(b + 41 * OS1_S1 + 113) = prefactor_z * *(b + 41 * OS1_S1 + 77) -
                                       p_over_q * *(b + 67 * OS1_S1 + 77);
            *(b + 41 * OS1_S1 + 114) = prefactor_z * *(b + 41 * OS1_S1 + 78) -
                                       p_over_q * *(b + 67 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 50);
            *(b + 41 * OS1_S1 + 115) =
                prefactor_z * *(b + 41 * OS1_S1 + 79) -
                p_over_q * *(b + 67 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 51);
            *(b + 41 * OS1_S1 + 116) =
                prefactor_y * *(b + 41 * OS1_S1 + 81) -
                p_over_q * *(b + 66 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 54);
            *(b + 41 * OS1_S1 + 117) =
                prefactor_y * *(b + 41 * OS1_S1 + 82) -
                p_over_q * *(b + 66 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 82) +
                one_over_two_q * *(b + 41 * OS1_S1 + 55);
            *(b + 41 * OS1_S1 + 118) =
                prefactor_y * *(b + 41 * OS1_S1 + 83) -
                p_over_q * *(b + 66 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 83);
            *(b + 41 * OS1_S1 + 119) =
                prefactor_z * *(b + 41 * OS1_S1 + 83) -
                p_over_q * *(b + 67 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 41 * OS1_S1 + 55);
            *(b + 42 * OS1_S1 + 84) =
                prefactor_x * *(b + 42 * OS1_S1 + 56) -
                p_over_q * *(b + 63 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 42 * OS1_S1 + 35);
            *(b + 42 * OS1_S1 + 85) =
                prefactor_y * *(b + 42 * OS1_S1 + 56) -
                p_over_q * *(b + 67 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 56);
            *(b + 42 * OS1_S1 + 86) = prefactor_z * *(b + 42 * OS1_S1 + 56) -
                                      p_over_q * *(b + 68 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 56);
            *(b + 42 * OS1_S1 + 87) =
                prefactor_y * *(b + 42 * OS1_S1 + 57) -
                p_over_q * *(b + 67 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 57) +
                one_over_two_q * *(b + 42 * OS1_S1 + 35);
            *(b + 42 * OS1_S1 + 88) = prefactor_z * *(b + 42 * OS1_S1 + 57) -
                                      p_over_q * *(b + 68 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 57);
            *(b + 42 * OS1_S1 + 89) = prefactor_z * *(b + 42 * OS1_S1 + 58) -
                                      p_over_q * *(b + 68 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 42 * OS1_S1 + 35);
            *(b + 42 * OS1_S1 + 90) =
                prefactor_y * *(b + 42 * OS1_S1 + 59) -
                p_over_q * *(b + 67 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 36);
            *(b + 42 * OS1_S1 + 91) = prefactor_z * *(b + 42 * OS1_S1 + 59) -
                                      p_over_q * *(b + 68 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 59);
            *(b + 42 * OS1_S1 + 92) =
                prefactor_y * *(b + 42 * OS1_S1 + 61) -
                p_over_q * *(b + 67 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 61);
            *(b + 42 * OS1_S1 + 93) =
                prefactor_z * *(b + 42 * OS1_S1 + 61) -
                p_over_q * *(b + 68 * OS1_S1 + 61) +
                one_over_two_q * *(b + 23 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 37);
            *(b + 42 * OS1_S1 + 94) =
                prefactor_x * *(b + 42 * OS1_S1 + 66) -
                p_over_q * *(b + 63 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 45);
            *(b + 42 * OS1_S1 + 95) = prefactor_z * *(b + 42 * OS1_S1 + 62) -
                                      p_over_q * *(b + 68 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 62);
            *(b + 42 * OS1_S1 + 96) = prefactor_z * *(b + 42 * OS1_S1 + 63) -
                                      p_over_q * *(b + 68 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 23 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 42 * OS1_S1 + 38);
            *(b + 42 * OS1_S1 + 97) =
                prefactor_y * *(b + 42 * OS1_S1 + 65) -
                p_over_q * *(b + 67 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 65);
            *(b + 42 * OS1_S1 + 98) =
                prefactor_x * *(b + 42 * OS1_S1 + 70) -
                p_over_q * *(b + 63 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 49);
            *(b + 42 * OS1_S1 + 99) =
                prefactor_x * *(b + 42 * OS1_S1 + 71) -
                p_over_q * *(b + 63 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 71) +
                one_over_two_q * *(b + 42 * OS1_S1 + 50);
            *(b + 42 * OS1_S1 + 100) = prefactor_z * *(b + 42 * OS1_S1 + 66) -
                                       p_over_q * *(b + 68 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 66);
            *(b + 42 * OS1_S1 + 101) =
                prefactor_z * *(b + 42 * OS1_S1 + 67) -
                p_over_q * *(b + 68 * OS1_S1 + 67) +
                one_over_two_q * *(b + 23 * OS1_S1 + 67) +
                one_over_two_q * *(b + 42 * OS1_S1 + 41);
            *(b + 42 * OS1_S1 + 102) =
                prefactor_y * *(b + 42 * OS1_S1 + 69) -
                p_over_q * *(b + 67 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 69) +
                one_over_two_q * *(b + 42 * OS1_S1 + 44);
            *(b + 42 * OS1_S1 + 103) =
                prefactor_y * *(b + 42 * OS1_S1 + 70) -
                p_over_q * *(b + 67 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 70);
            *(b + 42 * OS1_S1 + 104) =
                prefactor_x * *(b + 42 * OS1_S1 + 76) -
                p_over_q * *(b + 63 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 76) +
                one_over_two_q * *(b + 42 * OS1_S1 + 55);
            *(b + 42 * OS1_S1 + 105) =
                prefactor_x * *(b + 42 * OS1_S1 + 77) -
                p_over_q * *(b + 63 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 77);
            *(b + 42 * OS1_S1 + 106) = prefactor_z * *(b + 42 * OS1_S1 + 71) -
                                       p_over_q * *(b + 68 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 71);
            *(b + 42 * OS1_S1 + 107) =
                prefactor_x * *(b + 42 * OS1_S1 + 79) -
                p_over_q * *(b + 63 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 79);
            *(b + 42 * OS1_S1 + 108) =
                prefactor_x * *(b + 42 * OS1_S1 + 80) -
                p_over_q * *(b + 63 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 80);
            *(b + 42 * OS1_S1 + 109) =
                prefactor_x * *(b + 42 * OS1_S1 + 81) -
                p_over_q * *(b + 63 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 81);
            *(b + 42 * OS1_S1 + 110) =
                prefactor_y * *(b + 42 * OS1_S1 + 76) -
                p_over_q * *(b + 67 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 76);
            *(b + 42 * OS1_S1 + 111) =
                prefactor_x * *(b + 42 * OS1_S1 + 83) -
                p_over_q * *(b + 63 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 83);
            *(b + 42 * OS1_S1 + 112) =
                prefactor_y * *(b + 42 * OS1_S1 + 77) -
                p_over_q * *(b + 67 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 42 * OS1_S1 + 50);
            *(b + 42 * OS1_S1 + 113) = prefactor_z * *(b + 42 * OS1_S1 + 77) -
                                       p_over_q * *(b + 68 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 77);
            *(b + 42 * OS1_S1 + 114) =
                prefactor_z * *(b + 42 * OS1_S1 + 78) -
                p_over_q * *(b + 68 * OS1_S1 + 78) +
                one_over_two_q * *(b + 23 * OS1_S1 + 78) +
                one_over_two_q * *(b + 42 * OS1_S1 + 50);
            *(b + 42 * OS1_S1 + 115) =
                prefactor_z * *(b + 42 * OS1_S1 + 79) -
                p_over_q * *(b + 68 * OS1_S1 + 79) +
                one_over_two_q * *(b + 23 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 51);
            *(b + 42 * OS1_S1 + 116) =
                prefactor_y * *(b + 42 * OS1_S1 + 81) -
                p_over_q * *(b + 67 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 54);
            *(b + 42 * OS1_S1 + 117) =
                prefactor_y * *(b + 42 * OS1_S1 + 82) -
                p_over_q * *(b + 67 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 82) +
                one_over_two_q * *(b + 42 * OS1_S1 + 55);
            *(b + 42 * OS1_S1 + 118) =
                prefactor_y * *(b + 42 * OS1_S1 + 83) -
                p_over_q * *(b + 67 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 83);
            *(b + 42 * OS1_S1 + 119) =
                prefactor_z * *(b + 42 * OS1_S1 + 83) -
                p_over_q * *(b + 68 * OS1_S1 + 83) +
                one_over_two_q * *(b + 23 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 42 * OS1_S1 + 55);
            *(b + 43 * OS1_S1 + 84) =
                prefactor_x * *(b + 43 * OS1_S1 + 56) -
                p_over_q * *(b + 64 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 43 * OS1_S1 + 35);
            *(b + 43 * OS1_S1 + 85) = prefactor_y * *(b + 43 * OS1_S1 + 56) -
                                      p_over_q * *(b + 68 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 56);
            *(b + 43 * OS1_S1 + 86) =
                prefactor_z * *(b + 43 * OS1_S1 + 56) -
                p_over_q * *(b + 69 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 56);
            *(b + 43 * OS1_S1 + 87) = prefactor_y * *(b + 43 * OS1_S1 + 57) -
                                      p_over_q * *(b + 68 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 43 * OS1_S1 + 35);
            *(b + 43 * OS1_S1 + 88) = prefactor_y * *(b + 43 * OS1_S1 + 58) -
                                      p_over_q * *(b + 68 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 58);
            *(b + 43 * OS1_S1 + 89) =
                prefactor_z * *(b + 43 * OS1_S1 + 58) -
                p_over_q * *(b + 69 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 58) +
                one_over_two_q * *(b + 43 * OS1_S1 + 35);
            *(b + 43 * OS1_S1 + 90) =
                prefactor_y * *(b + 43 * OS1_S1 + 59) -
                p_over_q * *(b + 68 * OS1_S1 + 59) +
                one_over_two_q * *(b + 25 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 36);
            *(b + 43 * OS1_S1 + 91) =
                prefactor_z * *(b + 43 * OS1_S1 + 59) -
                p_over_q * *(b + 69 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 59);
            *(b + 43 * OS1_S1 + 92) = prefactor_y * *(b + 43 * OS1_S1 + 61) -
                                      p_over_q * *(b + 68 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 61);
            *(b + 43 * OS1_S1 + 93) =
                prefactor_z * *(b + 43 * OS1_S1 + 61) -
                p_over_q * *(b + 69 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 37);
            *(b + 43 * OS1_S1 + 94) =
                prefactor_x * *(b + 43 * OS1_S1 + 66) -
                p_over_q * *(b + 64 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 45);
            *(b + 43 * OS1_S1 + 95) =
                prefactor_z * *(b + 43 * OS1_S1 + 62) -
                p_over_q * *(b + 69 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 62);
            *(b + 43 * OS1_S1 + 96) = prefactor_y * *(b + 43 * OS1_S1 + 64) -
                                      p_over_q * *(b + 68 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 43 * OS1_S1 + 40);
            *(b + 43 * OS1_S1 + 97) = prefactor_y * *(b + 43 * OS1_S1 + 65) -
                                      p_over_q * *(b + 68 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 25 * OS1_S1 + 65);
            *(b + 43 * OS1_S1 + 98) =
                prefactor_x * *(b + 43 * OS1_S1 + 70) -
                p_over_q * *(b + 64 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 49);
            *(b + 43 * OS1_S1 + 99) =
                prefactor_x * *(b + 43 * OS1_S1 + 71) -
                p_over_q * *(b + 64 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 71) +
                one_over_two_q * *(b + 43 * OS1_S1 + 50);
            *(b + 43 * OS1_S1 + 100) =
                prefactor_z * *(b + 43 * OS1_S1 + 66) -
                p_over_q * *(b + 69 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 66);
            *(b + 43 * OS1_S1 + 101) =
                prefactor_z * *(b + 43 * OS1_S1 + 67) -
                p_over_q * *(b + 69 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 67) +
                one_over_two_q * *(b + 43 * OS1_S1 + 41);
            *(b + 43 * OS1_S1 + 102) =
                prefactor_y * *(b + 43 * OS1_S1 + 69) -
                p_over_q * *(b + 68 * OS1_S1 + 69) +
                one_over_two_q * *(b + 25 * OS1_S1 + 69) +
                one_over_two_q * *(b + 43 * OS1_S1 + 44);
            *(b + 43 * OS1_S1 + 103) = prefactor_y * *(b + 43 * OS1_S1 + 70) -
                                       p_over_q * *(b + 68 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 70);
            *(b + 43 * OS1_S1 + 104) =
                prefactor_x * *(b + 43 * OS1_S1 + 76) -
                p_over_q * *(b + 64 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 76) +
                one_over_two_q * *(b + 43 * OS1_S1 + 55);
            *(b + 43 * OS1_S1 + 105) =
                prefactor_x * *(b + 43 * OS1_S1 + 77) -
                p_over_q * *(b + 64 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 77);
            *(b + 43 * OS1_S1 + 106) =
                prefactor_z * *(b + 43 * OS1_S1 + 71) -
                p_over_q * *(b + 69 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 71);
            *(b + 43 * OS1_S1 + 107) =
                prefactor_x * *(b + 43 * OS1_S1 + 79) -
                p_over_q * *(b + 64 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 79);
            *(b + 43 * OS1_S1 + 108) =
                prefactor_x * *(b + 43 * OS1_S1 + 80) -
                p_over_q * *(b + 64 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 80);
            *(b + 43 * OS1_S1 + 109) =
                prefactor_x * *(b + 43 * OS1_S1 + 81) -
                p_over_q * *(b + 64 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 81);
            *(b + 43 * OS1_S1 + 110) = prefactor_y * *(b + 43 * OS1_S1 + 76) -
                                       p_over_q * *(b + 68 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 76);
            *(b + 43 * OS1_S1 + 111) =
                prefactor_x * *(b + 43 * OS1_S1 + 83) -
                p_over_q * *(b + 64 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 83);
            *(b + 43 * OS1_S1 + 112) =
                prefactor_y * *(b + 43 * OS1_S1 + 77) -
                p_over_q * *(b + 68 * OS1_S1 + 77) +
                one_over_two_q * *(b + 25 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 43 * OS1_S1 + 50);
            *(b + 43 * OS1_S1 + 113) =
                prefactor_z * *(b + 43 * OS1_S1 + 77) -
                p_over_q * *(b + 69 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 77);
            *(b + 43 * OS1_S1 + 114) =
                prefactor_z * *(b + 43 * OS1_S1 + 78) -
                p_over_q * *(b + 69 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 78) +
                one_over_two_q * *(b + 43 * OS1_S1 + 50);
            *(b + 43 * OS1_S1 + 115) =
                prefactor_z * *(b + 43 * OS1_S1 + 79) -
                p_over_q * *(b + 69 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 51);
            *(b + 43 * OS1_S1 + 116) =
                prefactor_y * *(b + 43 * OS1_S1 + 81) -
                p_over_q * *(b + 68 * OS1_S1 + 81) +
                one_over_two_q * *(b + 25 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 54);
            *(b + 43 * OS1_S1 + 117) =
                prefactor_y * *(b + 43 * OS1_S1 + 82) -
                p_over_q * *(b + 68 * OS1_S1 + 82) +
                one_over_two_q * *(b + 25 * OS1_S1 + 82) +
                one_over_two_q * *(b + 43 * OS1_S1 + 55);
            *(b + 43 * OS1_S1 + 118) = prefactor_y * *(b + 43 * OS1_S1 + 83) -
                                       p_over_q * *(b + 68 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 83);
            *(b + 43 * OS1_S1 + 119) =
                prefactor_z * *(b + 43 * OS1_S1 + 83) -
                p_over_q * *(b + 69 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 43 * OS1_S1 + 55);
            *(b + 44 * OS1_S1 + 84) =
                prefactor_x * *(b + 44 * OS1_S1 + 56) -
                p_over_q * *(b + 65 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 44 * OS1_S1 + 35);
            *(b + 44 * OS1_S1 + 85) = prefactor_y * *(b + 44 * OS1_S1 + 56) -
                                      p_over_q * *(b + 69 * OS1_S1 + 56);
            *(b + 44 * OS1_S1 + 86) =
                prefactor_z * *(b + 44 * OS1_S1 + 56) -
                p_over_q * *(b + 70 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 56);
            *(b + 44 * OS1_S1 + 87) = prefactor_y * *(b + 44 * OS1_S1 + 57) -
                                      p_over_q * *(b + 69 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 35);
            *(b + 44 * OS1_S1 + 88) = prefactor_y * *(b + 44 * OS1_S1 + 58) -
                                      p_over_q * *(b + 69 * OS1_S1 + 58);
            *(b + 44 * OS1_S1 + 89) =
                prefactor_z * *(b + 44 * OS1_S1 + 58) -
                p_over_q * *(b + 70 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 58) +
                one_over_two_q * *(b + 44 * OS1_S1 + 35);
            *(b + 44 * OS1_S1 + 90) =
                prefactor_y * *(b + 44 * OS1_S1 + 59) -
                p_over_q * *(b + 69 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 36);
            *(b + 44 * OS1_S1 + 91) =
                prefactor_z * *(b + 44 * OS1_S1 + 59) -
                p_over_q * *(b + 70 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 59);
            *(b + 44 * OS1_S1 + 92) = prefactor_y * *(b + 44 * OS1_S1 + 61) -
                                      p_over_q * *(b + 69 * OS1_S1 + 61);
            *(b + 44 * OS1_S1 + 93) =
                prefactor_z * *(b + 44 * OS1_S1 + 61) -
                p_over_q * *(b + 70 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 37);
            *(b + 44 * OS1_S1 + 94) =
                prefactor_x * *(b + 44 * OS1_S1 + 66) -
                p_over_q * *(b + 65 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 45);
            *(b + 44 * OS1_S1 + 95) =
                prefactor_z * *(b + 44 * OS1_S1 + 62) -
                p_over_q * *(b + 70 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 62);
            *(b + 44 * OS1_S1 + 96) = prefactor_y * *(b + 44 * OS1_S1 + 64) -
                                      p_over_q * *(b + 69 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 40);
            *(b + 44 * OS1_S1 + 97) = prefactor_y * *(b + 44 * OS1_S1 + 65) -
                                      p_over_q * *(b + 69 * OS1_S1 + 65);
            *(b + 44 * OS1_S1 + 98) =
                prefactor_x * *(b + 44 * OS1_S1 + 70) -
                p_over_q * *(b + 65 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 49);
            *(b + 44 * OS1_S1 + 99) =
                prefactor_x * *(b + 44 * OS1_S1 + 71) -
                p_over_q * *(b + 65 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 71) +
                one_over_two_q * *(b + 44 * OS1_S1 + 50);
            *(b + 44 * OS1_S1 + 100) =
                prefactor_z * *(b + 44 * OS1_S1 + 66) -
                p_over_q * *(b + 70 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 66);
            *(b + 44 * OS1_S1 + 101) =
                prefactor_x * *(b + 44 * OS1_S1 + 73) -
                p_over_q * *(b + 65 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 73) +
                one_over_two_q * *(b + 44 * OS1_S1 + 52);
            *(b + 44 * OS1_S1 + 102) = prefactor_y * *(b + 44 * OS1_S1 + 69) -
                                       p_over_q * *(b + 69 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 44);
            *(b + 44 * OS1_S1 + 103) = prefactor_y * *(b + 44 * OS1_S1 + 70) -
                                       p_over_q * *(b + 69 * OS1_S1 + 70);
            *(b + 44 * OS1_S1 + 104) =
                prefactor_x * *(b + 44 * OS1_S1 + 76) -
                p_over_q * *(b + 65 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 76) +
                one_over_two_q * *(b + 44 * OS1_S1 + 55);
            *(b + 44 * OS1_S1 + 105) =
                prefactor_x * *(b + 44 * OS1_S1 + 77) -
                p_over_q * *(b + 65 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 77);
            *(b + 44 * OS1_S1 + 106) =
                prefactor_x * *(b + 44 * OS1_S1 + 78) -
                p_over_q * *(b + 65 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 78);
            *(b + 44 * OS1_S1 + 107) =
                prefactor_x * *(b + 44 * OS1_S1 + 79) -
                p_over_q * *(b + 65 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 79);
            *(b + 44 * OS1_S1 + 108) =
                prefactor_x * *(b + 44 * OS1_S1 + 80) -
                p_over_q * *(b + 65 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 80);
            *(b + 44 * OS1_S1 + 109) =
                prefactor_x * *(b + 44 * OS1_S1 + 81) -
                p_over_q * *(b + 65 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 81);
            *(b + 44 * OS1_S1 + 110) = prefactor_y * *(b + 44 * OS1_S1 + 76) -
                                       p_over_q * *(b + 69 * OS1_S1 + 76);
            *(b + 44 * OS1_S1 + 111) =
                prefactor_x * *(b + 44 * OS1_S1 + 83) -
                p_over_q * *(b + 65 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 83);
            *(b + 44 * OS1_S1 + 112) =
                prefactor_y * *(b + 44 * OS1_S1 + 77) -
                p_over_q * *(b + 69 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 44 * OS1_S1 + 50);
            *(b + 44 * OS1_S1 + 113) =
                prefactor_z * *(b + 44 * OS1_S1 + 77) -
                p_over_q * *(b + 70 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 77);
            *(b + 44 * OS1_S1 + 114) =
                prefactor_z * *(b + 44 * OS1_S1 + 78) -
                p_over_q * *(b + 70 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 78) +
                one_over_two_q * *(b + 44 * OS1_S1 + 50);
            *(b + 44 * OS1_S1 + 115) =
                prefactor_z * *(b + 44 * OS1_S1 + 79) -
                p_over_q * *(b + 70 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 51);
            *(b + 44 * OS1_S1 + 116) =
                prefactor_y * *(b + 44 * OS1_S1 + 81) -
                p_over_q * *(b + 69 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 54);
            *(b + 44 * OS1_S1 + 117) = prefactor_y * *(b + 44 * OS1_S1 + 82) -
                                       p_over_q * *(b + 69 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 55);
            *(b + 44 * OS1_S1 + 118) = prefactor_y * *(b + 44 * OS1_S1 + 83) -
                                       p_over_q * *(b + 69 * OS1_S1 + 83);
            *(b + 44 * OS1_S1 + 119) =
                prefactor_z * *(b + 44 * OS1_S1 + 83) -
                p_over_q * *(b + 70 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 44 * OS1_S1 + 55);
            *(b + 45 * OS1_S1 + 84) =
                prefactor_x * *(b + 45 * OS1_S1 + 56) -
                p_over_q * *(b + 66 * OS1_S1 + 56) +
                one_over_two_q * *(b + 30 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 45 * OS1_S1 + 35);
            *(b + 45 * OS1_S1 + 85) =
                prefactor_y * *(b + 45 * OS1_S1 + 56) -
                p_over_q * *(b + 71 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 56);
            *(b + 45 * OS1_S1 + 86) = prefactor_z * *(b + 45 * OS1_S1 + 56) -
                                      p_over_q * *(b + 72 * OS1_S1 + 56);
            *(b + 45 * OS1_S1 + 87) =
                prefactor_y * *(b + 45 * OS1_S1 + 57) -
                p_over_q * *(b + 71 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 57) +
                one_over_two_q * *(b + 45 * OS1_S1 + 35);
            *(b + 45 * OS1_S1 + 88) = prefactor_z * *(b + 45 * OS1_S1 + 57) -
                                      p_over_q * *(b + 72 * OS1_S1 + 57);
            *(b + 45 * OS1_S1 + 89) = prefactor_z * *(b + 45 * OS1_S1 + 58) -
                                      p_over_q * *(b + 72 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 35);
            *(b + 45 * OS1_S1 + 90) =
                prefactor_y * *(b + 45 * OS1_S1 + 59) -
                p_over_q * *(b + 71 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 36);
            *(b + 45 * OS1_S1 + 91) = prefactor_z * *(b + 45 * OS1_S1 + 59) -
                                      p_over_q * *(b + 72 * OS1_S1 + 59);
            *(b + 45 * OS1_S1 + 92) =
                prefactor_y * *(b + 45 * OS1_S1 + 61) -
                p_over_q * *(b + 71 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 61);
            *(b + 45 * OS1_S1 + 93) =
                prefactor_z * *(b + 45 * OS1_S1 + 61) -
                p_over_q * *(b + 72 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 37);
            *(b + 45 * OS1_S1 + 94) =
                prefactor_x * *(b + 45 * OS1_S1 + 66) -
                p_over_q * *(b + 66 * OS1_S1 + 66) +
                one_over_two_q * *(b + 30 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 45);
            *(b + 45 * OS1_S1 + 95) = prefactor_z * *(b + 45 * OS1_S1 + 62) -
                                      p_over_q * *(b + 72 * OS1_S1 + 62);
            *(b + 45 * OS1_S1 + 96) = prefactor_z * *(b + 45 * OS1_S1 + 63) -
                                      p_over_q * *(b + 72 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 38);
            *(b + 45 * OS1_S1 + 97) =
                prefactor_y * *(b + 45 * OS1_S1 + 65) -
                p_over_q * *(b + 71 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 65);
            *(b + 45 * OS1_S1 + 98) =
                prefactor_x * *(b + 45 * OS1_S1 + 70) -
                p_over_q * *(b + 66 * OS1_S1 + 70) +
                one_over_two_q * *(b + 30 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 49);
            *(b + 45 * OS1_S1 + 99) = prefactor_x * *(b + 45 * OS1_S1 + 71) -
                                      p_over_q * *(b + 66 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 50);
            *(b + 45 * OS1_S1 + 100) = prefactor_z * *(b + 45 * OS1_S1 + 66) -
                                       p_over_q * *(b + 72 * OS1_S1 + 66);
            *(b + 45 * OS1_S1 + 101) = prefactor_z * *(b + 45 * OS1_S1 + 67) -
                                       p_over_q * *(b + 72 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 41);
            *(b + 45 * OS1_S1 + 102) =
                prefactor_x * *(b + 45 * OS1_S1 + 74) -
                p_over_q * *(b + 66 * OS1_S1 + 74) +
                one_over_two_q * *(b + 30 * OS1_S1 + 74) +
                one_over_two_q * *(b + 45 * OS1_S1 + 53);
            *(b + 45 * OS1_S1 + 103) =
                prefactor_y * *(b + 45 * OS1_S1 + 70) -
                p_over_q * *(b + 71 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 70);
            *(b + 45 * OS1_S1 + 104) =
                prefactor_x * *(b + 45 * OS1_S1 + 76) -
                p_over_q * *(b + 66 * OS1_S1 + 76) +
                one_over_two_q * *(b + 30 * OS1_S1 + 76) +
                one_over_two_q * *(b + 45 * OS1_S1 + 55);
            *(b + 45 * OS1_S1 + 105) = prefactor_x * *(b + 45 * OS1_S1 + 77) -
                                       p_over_q * *(b + 66 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 77);
            *(b + 45 * OS1_S1 + 106) = prefactor_z * *(b + 45 * OS1_S1 + 71) -
                                       p_over_q * *(b + 72 * OS1_S1 + 71);
            *(b + 45 * OS1_S1 + 107) = prefactor_x * *(b + 45 * OS1_S1 + 79) -
                                       p_over_q * *(b + 66 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 79);
            *(b + 45 * OS1_S1 + 108) = prefactor_x * *(b + 45 * OS1_S1 + 80) -
                                       p_over_q * *(b + 66 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 80);
            *(b + 45 * OS1_S1 + 109) = prefactor_x * *(b + 45 * OS1_S1 + 81) -
                                       p_over_q * *(b + 66 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 81);
            *(b + 45 * OS1_S1 + 110) = prefactor_x * *(b + 45 * OS1_S1 + 82) -
                                       p_over_q * *(b + 66 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 82);
            *(b + 45 * OS1_S1 + 111) = prefactor_x * *(b + 45 * OS1_S1 + 83) -
                                       p_over_q * *(b + 66 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 83);
            *(b + 45 * OS1_S1 + 112) =
                prefactor_y * *(b + 45 * OS1_S1 + 77) -
                p_over_q * *(b + 71 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 45 * OS1_S1 + 50);
            *(b + 45 * OS1_S1 + 113) = prefactor_z * *(b + 45 * OS1_S1 + 77) -
                                       p_over_q * *(b + 72 * OS1_S1 + 77);
            *(b + 45 * OS1_S1 + 114) = prefactor_z * *(b + 45 * OS1_S1 + 78) -
                                       p_over_q * *(b + 72 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 50);
            *(b + 45 * OS1_S1 + 115) =
                prefactor_z * *(b + 45 * OS1_S1 + 79) -
                p_over_q * *(b + 72 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 51);
            *(b + 45 * OS1_S1 + 116) =
                prefactor_y * *(b + 45 * OS1_S1 + 81) -
                p_over_q * *(b + 71 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 54);
            *(b + 45 * OS1_S1 + 117) =
                prefactor_y * *(b + 45 * OS1_S1 + 82) -
                p_over_q * *(b + 71 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 82) +
                one_over_two_q * *(b + 45 * OS1_S1 + 55);
            *(b + 45 * OS1_S1 + 118) =
                prefactor_y * *(b + 45 * OS1_S1 + 83) -
                p_over_q * *(b + 71 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 83);
            *(b + 45 * OS1_S1 + 119) =
                prefactor_z * *(b + 45 * OS1_S1 + 83) -
                p_over_q * *(b + 72 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 45 * OS1_S1 + 55);
            *(b + 46 * OS1_S1 + 84) =
                prefactor_x * *(b + 46 * OS1_S1 + 56) -
                p_over_q * *(b + 67 * OS1_S1 + 56) +
                one_over_two_q * *(b + 31 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 46 * OS1_S1 + 35);
            *(b + 46 * OS1_S1 + 85) =
                prefactor_y * *(b + 46 * OS1_S1 + 56) -
                p_over_q * *(b + 72 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 56);
            *(b + 46 * OS1_S1 + 86) = prefactor_z * *(b + 46 * OS1_S1 + 56) -
                                      p_over_q * *(b + 73 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 56);
            *(b + 46 * OS1_S1 + 87) =
                prefactor_y * *(b + 46 * OS1_S1 + 57) -
                p_over_q * *(b + 72 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 57) +
                one_over_two_q * *(b + 46 * OS1_S1 + 35);
            *(b + 46 * OS1_S1 + 88) = prefactor_z * *(b + 46 * OS1_S1 + 57) -
                                      p_over_q * *(b + 73 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 57);
            *(b + 46 * OS1_S1 + 89) = prefactor_z * *(b + 46 * OS1_S1 + 58) -
                                      p_over_q * *(b + 73 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 35);
            *(b + 46 * OS1_S1 + 90) =
                prefactor_y * *(b + 46 * OS1_S1 + 59) -
                p_over_q * *(b + 72 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 36);
            *(b + 46 * OS1_S1 + 91) = prefactor_z * *(b + 46 * OS1_S1 + 59) -
                                      p_over_q * *(b + 73 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 59);
            *(b + 46 * OS1_S1 + 92) =
                prefactor_y * *(b + 46 * OS1_S1 + 61) -
                p_over_q * *(b + 72 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 61);
            *(b + 46 * OS1_S1 + 93) =
                prefactor_z * *(b + 46 * OS1_S1 + 61) -
                p_over_q * *(b + 73 * OS1_S1 + 61) +
                one_over_two_q * *(b + 26 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 37);
            *(b + 46 * OS1_S1 + 94) =
                prefactor_x * *(b + 46 * OS1_S1 + 66) -
                p_over_q * *(b + 67 * OS1_S1 + 66) +
                one_over_two_q * *(b + 31 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 45);
            *(b + 46 * OS1_S1 + 95) = prefactor_z * *(b + 46 * OS1_S1 + 62) -
                                      p_over_q * *(b + 73 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 62);
            *(b + 46 * OS1_S1 + 96) = prefactor_z * *(b + 46 * OS1_S1 + 63) -
                                      p_over_q * *(b + 73 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 26 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 38);
            *(b + 46 * OS1_S1 + 97) =
                prefactor_y * *(b + 46 * OS1_S1 + 65) -
                p_over_q * *(b + 72 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 65);
            *(b + 46 * OS1_S1 + 98) =
                prefactor_x * *(b + 46 * OS1_S1 + 70) -
                p_over_q * *(b + 67 * OS1_S1 + 70) +
                one_over_two_q * *(b + 31 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 49);
            *(b + 46 * OS1_S1 + 99) = prefactor_x * *(b + 46 * OS1_S1 + 71) -
                                      p_over_q * *(b + 67 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 31 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 46 * OS1_S1 + 50);
            *(b + 46 * OS1_S1 + 100) = prefactor_z * *(b + 46 * OS1_S1 + 66) -
                                       p_over_q * *(b + 73 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 66);
            *(b + 46 * OS1_S1 + 101) =
                prefactor_z * *(b + 46 * OS1_S1 + 67) -
                p_over_q * *(b + 73 * OS1_S1 + 67) +
                one_over_two_q * *(b + 26 * OS1_S1 + 67) +
                one_over_two_q * *(b + 46 * OS1_S1 + 41);
            *(b + 46 * OS1_S1 + 102) =
                prefactor_x * *(b + 46 * OS1_S1 + 74) -
                p_over_q * *(b + 67 * OS1_S1 + 74) +
                one_over_two_q * *(b + 31 * OS1_S1 + 74) +
                one_over_two_q * *(b + 46 * OS1_S1 + 53);
            *(b + 46 * OS1_S1 + 103) =
                prefactor_y * *(b + 46 * OS1_S1 + 70) -
                p_over_q * *(b + 72 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 70);
            *(b + 46 * OS1_S1 + 104) =
                prefactor_x * *(b + 46 * OS1_S1 + 76) -
                p_over_q * *(b + 67 * OS1_S1 + 76) +
                one_over_two_q * *(b + 31 * OS1_S1 + 76) +
                one_over_two_q * *(b + 46 * OS1_S1 + 55);
            *(b + 46 * OS1_S1 + 105) = prefactor_x * *(b + 46 * OS1_S1 + 77) -
                                       p_over_q * *(b + 67 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 77);
            *(b + 46 * OS1_S1 + 106) = prefactor_z * *(b + 46 * OS1_S1 + 71) -
                                       p_over_q * *(b + 73 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 71);
            *(b + 46 * OS1_S1 + 107) = prefactor_x * *(b + 46 * OS1_S1 + 79) -
                                       p_over_q * *(b + 67 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 79);
            *(b + 46 * OS1_S1 + 108) = prefactor_x * *(b + 46 * OS1_S1 + 80) -
                                       p_over_q * *(b + 67 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 80);
            *(b + 46 * OS1_S1 + 109) = prefactor_x * *(b + 46 * OS1_S1 + 81) -
                                       p_over_q * *(b + 67 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 81);
            *(b + 46 * OS1_S1 + 110) = prefactor_x * *(b + 46 * OS1_S1 + 82) -
                                       p_over_q * *(b + 67 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 82);
            *(b + 46 * OS1_S1 + 111) = prefactor_x * *(b + 46 * OS1_S1 + 83) -
                                       p_over_q * *(b + 67 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 83);
            *(b + 46 * OS1_S1 + 112) =
                prefactor_y * *(b + 46 * OS1_S1 + 77) -
                p_over_q * *(b + 72 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 46 * OS1_S1 + 50);
            *(b + 46 * OS1_S1 + 113) = prefactor_z * *(b + 46 * OS1_S1 + 77) -
                                       p_over_q * *(b + 73 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 77);
            *(b + 46 * OS1_S1 + 114) =
                prefactor_z * *(b + 46 * OS1_S1 + 78) -
                p_over_q * *(b + 73 * OS1_S1 + 78) +
                one_over_two_q * *(b + 26 * OS1_S1 + 78) +
                one_over_two_q * *(b + 46 * OS1_S1 + 50);
            *(b + 46 * OS1_S1 + 115) =
                prefactor_z * *(b + 46 * OS1_S1 + 79) -
                p_over_q * *(b + 73 * OS1_S1 + 79) +
                one_over_two_q * *(b + 26 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 51);
            *(b + 46 * OS1_S1 + 116) =
                prefactor_y * *(b + 46 * OS1_S1 + 81) -
                p_over_q * *(b + 72 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 54);
            *(b + 46 * OS1_S1 + 117) =
                prefactor_y * *(b + 46 * OS1_S1 + 82) -
                p_over_q * *(b + 72 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 82) +
                one_over_two_q * *(b + 46 * OS1_S1 + 55);
            *(b + 46 * OS1_S1 + 118) =
                prefactor_y * *(b + 46 * OS1_S1 + 83) -
                p_over_q * *(b + 72 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 83);
            *(b + 46 * OS1_S1 + 119) =
                prefactor_z * *(b + 46 * OS1_S1 + 83) -
                p_over_q * *(b + 73 * OS1_S1 + 83) +
                one_over_two_q * *(b + 26 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 46 * OS1_S1 + 55);
            *(b + 47 * OS1_S1 + 84) =
                prefactor_x * *(b + 47 * OS1_S1 + 56) -
                p_over_q * *(b + 68 * OS1_S1 + 56) +
                one_over_two_q * *(b + 32 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 47 * OS1_S1 + 35);
            *(b + 47 * OS1_S1 + 85) =
                prefactor_y * *(b + 47 * OS1_S1 + 56) -
                p_over_q * *(b + 73 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 56);
            *(b + 47 * OS1_S1 + 86) =
                prefactor_z * *(b + 47 * OS1_S1 + 56) -
                p_over_q * *(b + 74 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 56);
            *(b + 47 * OS1_S1 + 87) =
                prefactor_y * *(b + 47 * OS1_S1 + 57) -
                p_over_q * *(b + 73 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 57) +
                one_over_two_q * *(b + 47 * OS1_S1 + 35);
            *(b + 47 * OS1_S1 + 88) =
                prefactor_z * *(b + 47 * OS1_S1 + 57) -
                p_over_q * *(b + 74 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 57);
            *(b + 47 * OS1_S1 + 89) =
                prefactor_z * *(b + 47 * OS1_S1 + 58) -
                p_over_q * *(b + 74 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 58) +
                one_over_two_q * *(b + 47 * OS1_S1 + 35);
            *(b + 47 * OS1_S1 + 90) =
                prefactor_y * *(b + 47 * OS1_S1 + 59) -
                p_over_q * *(b + 73 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 36);
            *(b + 47 * OS1_S1 + 91) =
                prefactor_z * *(b + 47 * OS1_S1 + 59) -
                p_over_q * *(b + 74 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 59);
            *(b + 47 * OS1_S1 + 92) =
                prefactor_y * *(b + 47 * OS1_S1 + 61) -
                p_over_q * *(b + 73 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 61);
            *(b + 47 * OS1_S1 + 93) =
                prefactor_z * *(b + 47 * OS1_S1 + 61) -
                p_over_q * *(b + 74 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 37);
            *(b + 47 * OS1_S1 + 94) =
                prefactor_x * *(b + 47 * OS1_S1 + 66) -
                p_over_q * *(b + 68 * OS1_S1 + 66) +
                one_over_two_q * *(b + 32 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 45);
            *(b + 47 * OS1_S1 + 95) =
                prefactor_z * *(b + 47 * OS1_S1 + 62) -
                p_over_q * *(b + 74 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 62);
            *(b + 47 * OS1_S1 + 96) =
                prefactor_z * *(b + 47 * OS1_S1 + 63) -
                p_over_q * *(b + 74 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 63) +
                one_over_two_q * *(b + 47 * OS1_S1 + 38);
            *(b + 47 * OS1_S1 + 97) =
                prefactor_y * *(b + 47 * OS1_S1 + 65) -
                p_over_q * *(b + 73 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 65);
            *(b + 47 * OS1_S1 + 98) =
                prefactor_x * *(b + 47 * OS1_S1 + 70) -
                p_over_q * *(b + 68 * OS1_S1 + 70) +
                one_over_two_q * *(b + 32 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 49);
            *(b + 47 * OS1_S1 + 99) = prefactor_x * *(b + 47 * OS1_S1 + 71) -
                                      p_over_q * *(b + 68 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 32 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 47 * OS1_S1 + 50);
            *(b + 47 * OS1_S1 + 100) =
                prefactor_z * *(b + 47 * OS1_S1 + 66) -
                p_over_q * *(b + 74 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 66);
            *(b + 47 * OS1_S1 + 101) =
                prefactor_x * *(b + 47 * OS1_S1 + 73) -
                p_over_q * *(b + 68 * OS1_S1 + 73) +
                one_over_two_q * *(b + 32 * OS1_S1 + 73) +
                one_over_two_q * *(b + 47 * OS1_S1 + 52);
            *(b + 47 * OS1_S1 + 102) =
                prefactor_x * *(b + 47 * OS1_S1 + 74) -
                p_over_q * *(b + 68 * OS1_S1 + 74) +
                one_over_two_q * *(b + 32 * OS1_S1 + 74) +
                one_over_two_q * *(b + 47 * OS1_S1 + 53);
            *(b + 47 * OS1_S1 + 103) =
                prefactor_y * *(b + 47 * OS1_S1 + 70) -
                p_over_q * *(b + 73 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 70);
            *(b + 47 * OS1_S1 + 104) =
                prefactor_x * *(b + 47 * OS1_S1 + 76) -
                p_over_q * *(b + 68 * OS1_S1 + 76) +
                one_over_two_q * *(b + 32 * OS1_S1 + 76) +
                one_over_two_q * *(b + 47 * OS1_S1 + 55);
            *(b + 47 * OS1_S1 + 105) = prefactor_x * *(b + 47 * OS1_S1 + 77) -
                                       p_over_q * *(b + 68 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 77);
            *(b + 47 * OS1_S1 + 106) = prefactor_x * *(b + 47 * OS1_S1 + 78) -
                                       p_over_q * *(b + 68 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 78);
            *(b + 47 * OS1_S1 + 107) = prefactor_x * *(b + 47 * OS1_S1 + 79) -
                                       p_over_q * *(b + 68 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 79);
            *(b + 47 * OS1_S1 + 108) = prefactor_x * *(b + 47 * OS1_S1 + 80) -
                                       p_over_q * *(b + 68 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 80);
            *(b + 47 * OS1_S1 + 109) = prefactor_x * *(b + 47 * OS1_S1 + 81) -
                                       p_over_q * *(b + 68 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 81);
            *(b + 47 * OS1_S1 + 110) = prefactor_x * *(b + 47 * OS1_S1 + 82) -
                                       p_over_q * *(b + 68 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 82);
            *(b + 47 * OS1_S1 + 111) = prefactor_x * *(b + 47 * OS1_S1 + 83) -
                                       p_over_q * *(b + 68 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 83);
            *(b + 47 * OS1_S1 + 112) =
                prefactor_y * *(b + 47 * OS1_S1 + 77) -
                p_over_q * *(b + 73 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 47 * OS1_S1 + 50);
            *(b + 47 * OS1_S1 + 113) =
                prefactor_z * *(b + 47 * OS1_S1 + 77) -
                p_over_q * *(b + 74 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 77);
            *(b + 47 * OS1_S1 + 114) =
                prefactor_z * *(b + 47 * OS1_S1 + 78) -
                p_over_q * *(b + 74 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 78) +
                one_over_two_q * *(b + 47 * OS1_S1 + 50);
            *(b + 47 * OS1_S1 + 115) =
                prefactor_z * *(b + 47 * OS1_S1 + 79) -
                p_over_q * *(b + 74 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 51);
            *(b + 47 * OS1_S1 + 116) =
                prefactor_y * *(b + 47 * OS1_S1 + 81) -
                p_over_q * *(b + 73 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 54);
            *(b + 47 * OS1_S1 + 117) =
                prefactor_y * *(b + 47 * OS1_S1 + 82) -
                p_over_q * *(b + 73 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 82) +
                one_over_two_q * *(b + 47 * OS1_S1 + 55);
            *(b + 47 * OS1_S1 + 118) =
                prefactor_y * *(b + 47 * OS1_S1 + 83) -
                p_over_q * *(b + 73 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 83);
            *(b + 47 * OS1_S1 + 119) =
                prefactor_z * *(b + 47 * OS1_S1 + 83) -
                p_over_q * *(b + 74 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 47 * OS1_S1 + 55);
            *(b + 48 * OS1_S1 + 84) =
                prefactor_x * *(b + 48 * OS1_S1 + 56) -
                p_over_q * *(b + 69 * OS1_S1 + 56) +
                one_over_two_q * *(b + 33 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 48 * OS1_S1 + 35);
            *(b + 48 * OS1_S1 + 85) = prefactor_y * *(b + 48 * OS1_S1 + 56) -
                                      p_over_q * *(b + 74 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 56);
            *(b + 48 * OS1_S1 + 86) =
                prefactor_z * *(b + 48 * OS1_S1 + 56) -
                p_over_q * *(b + 75 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 56);
            *(b + 48 * OS1_S1 + 87) = prefactor_y * *(b + 48 * OS1_S1 + 57) -
                                      p_over_q * *(b + 74 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 35);
            *(b + 48 * OS1_S1 + 88) = prefactor_y * *(b + 48 * OS1_S1 + 58) -
                                      p_over_q * *(b + 74 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 58);
            *(b + 48 * OS1_S1 + 89) =
                prefactor_z * *(b + 48 * OS1_S1 + 58) -
                p_over_q * *(b + 75 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 58) +
                one_over_two_q * *(b + 48 * OS1_S1 + 35);
            *(b + 48 * OS1_S1 + 90) =
                prefactor_y * *(b + 48 * OS1_S1 + 59) -
                p_over_q * *(b + 74 * OS1_S1 + 59) +
                one_over_two_q * *(b + 29 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 36);
            *(b + 48 * OS1_S1 + 91) =
                prefactor_z * *(b + 48 * OS1_S1 + 59) -
                p_over_q * *(b + 75 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 59);
            *(b + 48 * OS1_S1 + 92) = prefactor_y * *(b + 48 * OS1_S1 + 61) -
                                      p_over_q * *(b + 74 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 61);
            *(b + 48 * OS1_S1 + 93) =
                prefactor_z * *(b + 48 * OS1_S1 + 61) -
                p_over_q * *(b + 75 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 37);
            *(b + 48 * OS1_S1 + 94) =
                prefactor_x * *(b + 48 * OS1_S1 + 66) -
                p_over_q * *(b + 69 * OS1_S1 + 66) +
                one_over_two_q * *(b + 33 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 45);
            *(b + 48 * OS1_S1 + 95) =
                prefactor_z * *(b + 48 * OS1_S1 + 62) -
                p_over_q * *(b + 75 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 62);
            *(b + 48 * OS1_S1 + 96) = prefactor_y * *(b + 48 * OS1_S1 + 64) -
                                      p_over_q * *(b + 74 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 40);
            *(b + 48 * OS1_S1 + 97) = prefactor_y * *(b + 48 * OS1_S1 + 65) -
                                      p_over_q * *(b + 74 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 29 * OS1_S1 + 65);
            *(b + 48 * OS1_S1 + 98) =
                prefactor_x * *(b + 48 * OS1_S1 + 70) -
                p_over_q * *(b + 69 * OS1_S1 + 70) +
                one_over_two_q * *(b + 33 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 49);
            *(b + 48 * OS1_S1 + 99) = prefactor_x * *(b + 48 * OS1_S1 + 71) -
                                      p_over_q * *(b + 69 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 33 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 48 * OS1_S1 + 50);
            *(b + 48 * OS1_S1 + 100) =
                prefactor_z * *(b + 48 * OS1_S1 + 66) -
                p_over_q * *(b + 75 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 66);
            *(b + 48 * OS1_S1 + 101) =
                prefactor_x * *(b + 48 * OS1_S1 + 73) -
                p_over_q * *(b + 69 * OS1_S1 + 73) +
                one_over_two_q * *(b + 33 * OS1_S1 + 73) +
                one_over_two_q * *(b + 48 * OS1_S1 + 52);
            *(b + 48 * OS1_S1 + 102) =
                prefactor_y * *(b + 48 * OS1_S1 + 69) -
                p_over_q * *(b + 74 * OS1_S1 + 69) +
                one_over_two_q * *(b + 29 * OS1_S1 + 69) +
                one_over_two_q * *(b + 48 * OS1_S1 + 44);
            *(b + 48 * OS1_S1 + 103) = prefactor_y * *(b + 48 * OS1_S1 + 70) -
                                       p_over_q * *(b + 74 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 70);
            *(b + 48 * OS1_S1 + 104) =
                prefactor_x * *(b + 48 * OS1_S1 + 76) -
                p_over_q * *(b + 69 * OS1_S1 + 76) +
                one_over_two_q * *(b + 33 * OS1_S1 + 76) +
                one_over_two_q * *(b + 48 * OS1_S1 + 55);
            *(b + 48 * OS1_S1 + 105) = prefactor_x * *(b + 48 * OS1_S1 + 77) -
                                       p_over_q * *(b + 69 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 77);
            *(b + 48 * OS1_S1 + 106) = prefactor_x * *(b + 48 * OS1_S1 + 78) -
                                       p_over_q * *(b + 69 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 78);
            *(b + 48 * OS1_S1 + 107) = prefactor_x * *(b + 48 * OS1_S1 + 79) -
                                       p_over_q * *(b + 69 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 79);
            *(b + 48 * OS1_S1 + 108) = prefactor_x * *(b + 48 * OS1_S1 + 80) -
                                       p_over_q * *(b + 69 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 80);
            *(b + 48 * OS1_S1 + 109) = prefactor_x * *(b + 48 * OS1_S1 + 81) -
                                       p_over_q * *(b + 69 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 81);
            *(b + 48 * OS1_S1 + 110) = prefactor_y * *(b + 48 * OS1_S1 + 76) -
                                       p_over_q * *(b + 74 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 76);
            *(b + 48 * OS1_S1 + 111) = prefactor_x * *(b + 48 * OS1_S1 + 83) -
                                       p_over_q * *(b + 69 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 83);
            *(b + 48 * OS1_S1 + 112) =
                prefactor_y * *(b + 48 * OS1_S1 + 77) -
                p_over_q * *(b + 74 * OS1_S1 + 77) +
                one_over_two_q * *(b + 29 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 48 * OS1_S1 + 50);
            *(b + 48 * OS1_S1 + 113) =
                prefactor_z * *(b + 48 * OS1_S1 + 77) -
                p_over_q * *(b + 75 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 77);
            *(b + 48 * OS1_S1 + 114) =
                prefactor_z * *(b + 48 * OS1_S1 + 78) -
                p_over_q * *(b + 75 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 78) +
                one_over_two_q * *(b + 48 * OS1_S1 + 50);
            *(b + 48 * OS1_S1 + 115) =
                prefactor_z * *(b + 48 * OS1_S1 + 79) -
                p_over_q * *(b + 75 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 51);
            *(b + 48 * OS1_S1 + 116) =
                prefactor_y * *(b + 48 * OS1_S1 + 81) -
                p_over_q * *(b + 74 * OS1_S1 + 81) +
                one_over_two_q * *(b + 29 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 54);
            *(b + 48 * OS1_S1 + 117) =
                prefactor_y * *(b + 48 * OS1_S1 + 82) -
                p_over_q * *(b + 74 * OS1_S1 + 82) +
                one_over_two_q * *(b + 29 * OS1_S1 + 82) +
                one_over_two_q * *(b + 48 * OS1_S1 + 55);
            *(b + 48 * OS1_S1 + 118) = prefactor_y * *(b + 48 * OS1_S1 + 83) -
                                       p_over_q * *(b + 74 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 83);
            *(b + 48 * OS1_S1 + 119) =
                prefactor_z * *(b + 48 * OS1_S1 + 83) -
                p_over_q * *(b + 75 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 48 * OS1_S1 + 55);
            *(b + 49 * OS1_S1 + 84) =
                prefactor_x * *(b + 49 * OS1_S1 + 56) -
                p_over_q * *(b + 70 * OS1_S1 + 56) +
                one_over_two_q * *(b + 34 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 49 * OS1_S1 + 35);
            *(b + 49 * OS1_S1 + 85) = prefactor_y * *(b + 49 * OS1_S1 + 56) -
                                      p_over_q * *(b + 75 * OS1_S1 + 56);
            *(b + 49 * OS1_S1 + 86) =
                prefactor_z * *(b + 49 * OS1_S1 + 56) -
                p_over_q * *(b + 76 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 56);
            *(b + 49 * OS1_S1 + 87) = prefactor_y * *(b + 49 * OS1_S1 + 57) -
                                      p_over_q * *(b + 75 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 35);
            *(b + 49 * OS1_S1 + 88) = prefactor_y * *(b + 49 * OS1_S1 + 58) -
                                      p_over_q * *(b + 75 * OS1_S1 + 58);
            *(b + 49 * OS1_S1 + 89) =
                prefactor_z * *(b + 49 * OS1_S1 + 58) -
                p_over_q * *(b + 76 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 58) +
                one_over_two_q * *(b + 49 * OS1_S1 + 35);
            *(b + 49 * OS1_S1 + 90) =
                prefactor_y * *(b + 49 * OS1_S1 + 59) -
                p_over_q * *(b + 75 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 36);
            *(b + 49 * OS1_S1 + 91) =
                prefactor_z * *(b + 49 * OS1_S1 + 59) -
                p_over_q * *(b + 76 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 59);
            *(b + 49 * OS1_S1 + 92) = prefactor_y * *(b + 49 * OS1_S1 + 61) -
                                      p_over_q * *(b + 75 * OS1_S1 + 61);
            *(b + 49 * OS1_S1 + 93) =
                prefactor_z * *(b + 49 * OS1_S1 + 61) -
                p_over_q * *(b + 76 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 37);
            *(b + 49 * OS1_S1 + 94) =
                prefactor_x * *(b + 49 * OS1_S1 + 66) -
                p_over_q * *(b + 70 * OS1_S1 + 66) +
                one_over_two_q * *(b + 34 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 45);
            *(b + 49 * OS1_S1 + 95) =
                prefactor_z * *(b + 49 * OS1_S1 + 62) -
                p_over_q * *(b + 76 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 62);
            *(b + 49 * OS1_S1 + 96) = prefactor_y * *(b + 49 * OS1_S1 + 64) -
                                      p_over_q * *(b + 75 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 40);
            *(b + 49 * OS1_S1 + 97) = prefactor_y * *(b + 49 * OS1_S1 + 65) -
                                      p_over_q * *(b + 75 * OS1_S1 + 65);
            *(b + 49 * OS1_S1 + 98) =
                prefactor_x * *(b + 49 * OS1_S1 + 70) -
                p_over_q * *(b + 70 * OS1_S1 + 70) +
                one_over_two_q * *(b + 34 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 49);
            *(b + 49 * OS1_S1 + 99) = prefactor_x * *(b + 49 * OS1_S1 + 71) -
                                      p_over_q * *(b + 70 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 50);
            *(b + 49 * OS1_S1 + 100) =
                prefactor_z * *(b + 49 * OS1_S1 + 66) -
                p_over_q * *(b + 76 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 66);
            *(b + 49 * OS1_S1 + 101) =
                prefactor_x * *(b + 49 * OS1_S1 + 73) -
                p_over_q * *(b + 70 * OS1_S1 + 73) +
                one_over_two_q * *(b + 34 * OS1_S1 + 73) +
                one_over_two_q * *(b + 49 * OS1_S1 + 52);
            *(b + 49 * OS1_S1 + 102) = prefactor_y * *(b + 49 * OS1_S1 + 69) -
                                       p_over_q * *(b + 75 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 44);
            *(b + 49 * OS1_S1 + 103) = prefactor_y * *(b + 49 * OS1_S1 + 70) -
                                       p_over_q * *(b + 75 * OS1_S1 + 70);
            *(b + 49 * OS1_S1 + 104) =
                prefactor_x * *(b + 49 * OS1_S1 + 76) -
                p_over_q * *(b + 70 * OS1_S1 + 76) +
                one_over_two_q * *(b + 34 * OS1_S1 + 76) +
                one_over_two_q * *(b + 49 * OS1_S1 + 55);
            *(b + 49 * OS1_S1 + 105) = prefactor_x * *(b + 49 * OS1_S1 + 77) -
                                       p_over_q * *(b + 70 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 77);
            *(b + 49 * OS1_S1 + 106) = prefactor_x * *(b + 49 * OS1_S1 + 78) -
                                       p_over_q * *(b + 70 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 78);
            *(b + 49 * OS1_S1 + 107) = prefactor_x * *(b + 49 * OS1_S1 + 79) -
                                       p_over_q * *(b + 70 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 79);
            *(b + 49 * OS1_S1 + 108) = prefactor_x * *(b + 49 * OS1_S1 + 80) -
                                       p_over_q * *(b + 70 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 80);
            *(b + 49 * OS1_S1 + 109) = prefactor_x * *(b + 49 * OS1_S1 + 81) -
                                       p_over_q * *(b + 70 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 81);
            *(b + 49 * OS1_S1 + 110) = prefactor_y * *(b + 49 * OS1_S1 + 76) -
                                       p_over_q * *(b + 75 * OS1_S1 + 76);
            *(b + 49 * OS1_S1 + 111) = prefactor_x * *(b + 49 * OS1_S1 + 83) -
                                       p_over_q * *(b + 70 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 83);
            *(b + 49 * OS1_S1 + 112) =
                prefactor_y * *(b + 49 * OS1_S1 + 77) -
                p_over_q * *(b + 75 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 49 * OS1_S1 + 50);
            *(b + 49 * OS1_S1 + 113) =
                prefactor_z * *(b + 49 * OS1_S1 + 77) -
                p_over_q * *(b + 76 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 77);
            *(b + 49 * OS1_S1 + 114) =
                prefactor_z * *(b + 49 * OS1_S1 + 78) -
                p_over_q * *(b + 76 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 78) +
                one_over_two_q * *(b + 49 * OS1_S1 + 50);
            *(b + 49 * OS1_S1 + 115) =
                prefactor_z * *(b + 49 * OS1_S1 + 79) -
                p_over_q * *(b + 76 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 51);
            *(b + 49 * OS1_S1 + 116) =
                prefactor_y * *(b + 49 * OS1_S1 + 81) -
                p_over_q * *(b + 75 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 54);
            *(b + 49 * OS1_S1 + 117) = prefactor_y * *(b + 49 * OS1_S1 + 82) -
                                       p_over_q * *(b + 75 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 55);
            *(b + 49 * OS1_S1 + 118) = prefactor_y * *(b + 49 * OS1_S1 + 83) -
                                       p_over_q * *(b + 75 * OS1_S1 + 83);
            *(b + 49 * OS1_S1 + 119) =
                prefactor_z * *(b + 49 * OS1_S1 + 83) -
                p_over_q * *(b + 76 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 49 * OS1_S1 + 55);
            *(b + 50 * OS1_S1 + 84) =
                prefactor_x * *(b + 50 * OS1_S1 + 56) -
                p_over_q * *(b + 71 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 35);
            *(b + 50 * OS1_S1 + 85) =
                prefactor_y * *(b + 50 * OS1_S1 + 56) -
                p_over_q * *(b + 77 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 56);
            *(b + 50 * OS1_S1 + 86) = prefactor_z * *(b + 50 * OS1_S1 + 56) -
                                      p_over_q * *(b + 78 * OS1_S1 + 56);
            *(b + 50 * OS1_S1 + 87) =
                prefactor_y * *(b + 50 * OS1_S1 + 57) -
                p_over_q * *(b + 77 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 57) +
                one_over_two_q * *(b + 50 * OS1_S1 + 35);
            *(b + 50 * OS1_S1 + 88) = prefactor_z * *(b + 50 * OS1_S1 + 57) -
                                      p_over_q * *(b + 78 * OS1_S1 + 57);
            *(b + 50 * OS1_S1 + 89) = prefactor_z * *(b + 50 * OS1_S1 + 58) -
                                      p_over_q * *(b + 78 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 35);
            *(b + 50 * OS1_S1 + 90) =
                prefactor_y * *(b + 50 * OS1_S1 + 59) -
                p_over_q * *(b + 77 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 36);
            *(b + 50 * OS1_S1 + 91) = prefactor_z * *(b + 50 * OS1_S1 + 59) -
                                      p_over_q * *(b + 78 * OS1_S1 + 59);
            *(b + 50 * OS1_S1 + 92) =
                prefactor_y * *(b + 50 * OS1_S1 + 61) -
                p_over_q * *(b + 77 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 61);
            *(b + 50 * OS1_S1 + 93) =
                prefactor_z * *(b + 50 * OS1_S1 + 61) -
                p_over_q * *(b + 78 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 37);
            *(b + 50 * OS1_S1 + 94) =
                prefactor_x * *(b + 50 * OS1_S1 + 66) -
                p_over_q * *(b + 71 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 45);
            *(b + 50 * OS1_S1 + 95) = prefactor_z * *(b + 50 * OS1_S1 + 62) -
                                      p_over_q * *(b + 78 * OS1_S1 + 62);
            *(b + 50 * OS1_S1 + 96) = prefactor_z * *(b + 50 * OS1_S1 + 63) -
                                      p_over_q * *(b + 78 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 38);
            *(b + 50 * OS1_S1 + 97) =
                prefactor_y * *(b + 50 * OS1_S1 + 65) -
                p_over_q * *(b + 77 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 65);
            *(b + 50 * OS1_S1 + 98) =
                prefactor_x * *(b + 50 * OS1_S1 + 70) -
                p_over_q * *(b + 71 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 49);
            *(b + 50 * OS1_S1 + 99) = prefactor_x * *(b + 50 * OS1_S1 + 71) -
                                      p_over_q * *(b + 71 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 50);
            *(b + 50 * OS1_S1 + 100) = prefactor_z * *(b + 50 * OS1_S1 + 66) -
                                       p_over_q * *(b + 78 * OS1_S1 + 66);
            *(b + 50 * OS1_S1 + 101) = prefactor_z * *(b + 50 * OS1_S1 + 67) -
                                       p_over_q * *(b + 78 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 41);
            *(b + 50 * OS1_S1 + 102) = prefactor_x * *(b + 50 * OS1_S1 + 74) -
                                       p_over_q * *(b + 71 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 53);
            *(b + 50 * OS1_S1 + 103) =
                prefactor_y * *(b + 50 * OS1_S1 + 70) -
                p_over_q * *(b + 77 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 70);
            *(b + 50 * OS1_S1 + 104) = prefactor_x * *(b + 50 * OS1_S1 + 76) -
                                       p_over_q * *(b + 71 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 55);
            *(b + 50 * OS1_S1 + 105) = prefactor_x * *(b + 50 * OS1_S1 + 77) -
                                       p_over_q * *(b + 71 * OS1_S1 + 77);
            *(b + 50 * OS1_S1 + 106) = prefactor_z * *(b + 50 * OS1_S1 + 71) -
                                       p_over_q * *(b + 78 * OS1_S1 + 71);
            *(b + 50 * OS1_S1 + 107) = prefactor_x * *(b + 50 * OS1_S1 + 79) -
                                       p_over_q * *(b + 71 * OS1_S1 + 79);
            *(b + 50 * OS1_S1 + 108) = prefactor_x * *(b + 50 * OS1_S1 + 80) -
                                       p_over_q * *(b + 71 * OS1_S1 + 80);
            *(b + 50 * OS1_S1 + 109) = prefactor_x * *(b + 50 * OS1_S1 + 81) -
                                       p_over_q * *(b + 71 * OS1_S1 + 81);
            *(b + 50 * OS1_S1 + 110) = prefactor_x * *(b + 50 * OS1_S1 + 82) -
                                       p_over_q * *(b + 71 * OS1_S1 + 82);
            *(b + 50 * OS1_S1 + 111) = prefactor_x * *(b + 50 * OS1_S1 + 83) -
                                       p_over_q * *(b + 71 * OS1_S1 + 83);
            *(b + 50 * OS1_S1 + 112) =
                prefactor_y * *(b + 50 * OS1_S1 + 77) -
                p_over_q * *(b + 77 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 50);
            *(b + 50 * OS1_S1 + 113) = prefactor_z * *(b + 50 * OS1_S1 + 77) -
                                       p_over_q * *(b + 78 * OS1_S1 + 77);
            *(b + 50 * OS1_S1 + 114) = prefactor_z * *(b + 50 * OS1_S1 + 78) -
                                       p_over_q * *(b + 78 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 50);
            *(b + 50 * OS1_S1 + 115) =
                prefactor_z * *(b + 50 * OS1_S1 + 79) -
                p_over_q * *(b + 78 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 51);
            *(b + 50 * OS1_S1 + 116) =
                prefactor_y * *(b + 50 * OS1_S1 + 81) -
                p_over_q * *(b + 77 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 54);
            *(b + 50 * OS1_S1 + 117) =
                prefactor_y * *(b + 50 * OS1_S1 + 82) -
                p_over_q * *(b + 77 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 82) +
                one_over_two_q * *(b + 50 * OS1_S1 + 55);
            *(b + 50 * OS1_S1 + 118) =
                prefactor_y * *(b + 50 * OS1_S1 + 83) -
                p_over_q * *(b + 77 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 83);
            *(b + 50 * OS1_S1 + 119) =
                prefactor_z * *(b + 50 * OS1_S1 + 83) -
                p_over_q * *(b + 78 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 55);
            *(b + 51 * OS1_S1 + 84) =
                prefactor_x * *(b + 51 * OS1_S1 + 56) -
                p_over_q * *(b + 72 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 51 * OS1_S1 + 35);
            *(b + 51 * OS1_S1 + 85) =
                prefactor_y * *(b + 51 * OS1_S1 + 56) -
                p_over_q * *(b + 78 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 56);
            *(b + 51 * OS1_S1 + 86) = prefactor_z * *(b + 51 * OS1_S1 + 56) -
                                      p_over_q * *(b + 79 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 56);
            *(b + 51 * OS1_S1 + 87) =
                prefactor_y * *(b + 51 * OS1_S1 + 57) -
                p_over_q * *(b + 78 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 57) +
                one_over_two_q * *(b + 51 * OS1_S1 + 35);
            *(b + 51 * OS1_S1 + 88) = prefactor_z * *(b + 51 * OS1_S1 + 57) -
                                      p_over_q * *(b + 79 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 57);
            *(b + 51 * OS1_S1 + 89) = prefactor_z * *(b + 51 * OS1_S1 + 58) -
                                      p_over_q * *(b + 79 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 35);
            *(b + 51 * OS1_S1 + 90) =
                prefactor_y * *(b + 51 * OS1_S1 + 59) -
                p_over_q * *(b + 78 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 36);
            *(b + 51 * OS1_S1 + 91) = prefactor_z * *(b + 51 * OS1_S1 + 59) -
                                      p_over_q * *(b + 79 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 59);
            *(b + 51 * OS1_S1 + 92) =
                prefactor_y * *(b + 51 * OS1_S1 + 61) -
                p_over_q * *(b + 78 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 61);
            *(b + 51 * OS1_S1 + 93) =
                prefactor_z * *(b + 51 * OS1_S1 + 61) -
                p_over_q * *(b + 79 * OS1_S1 + 61) +
                one_over_two_q * *(b + 30 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 37);
            *(b + 51 * OS1_S1 + 94) =
                prefactor_x * *(b + 51 * OS1_S1 + 66) -
                p_over_q * *(b + 72 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 45);
            *(b + 51 * OS1_S1 + 95) = prefactor_z * *(b + 51 * OS1_S1 + 62) -
                                      p_over_q * *(b + 79 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 62);
            *(b + 51 * OS1_S1 + 96) = prefactor_z * *(b + 51 * OS1_S1 + 63) -
                                      p_over_q * *(b + 79 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 30 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 38);
            *(b + 51 * OS1_S1 + 97) =
                prefactor_y * *(b + 51 * OS1_S1 + 65) -
                p_over_q * *(b + 78 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 65);
            *(b + 51 * OS1_S1 + 98) =
                prefactor_x * *(b + 51 * OS1_S1 + 70) -
                p_over_q * *(b + 72 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 49);
            *(b + 51 * OS1_S1 + 99) = prefactor_x * *(b + 51 * OS1_S1 + 71) -
                                      p_over_q * *(b + 72 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 50);
            *(b + 51 * OS1_S1 + 100) = prefactor_z * *(b + 51 * OS1_S1 + 66) -
                                       p_over_q * *(b + 79 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 66);
            *(b + 51 * OS1_S1 + 101) = prefactor_x * *(b + 51 * OS1_S1 + 73) -
                                       p_over_q * *(b + 72 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 52);
            *(b + 51 * OS1_S1 + 102) = prefactor_x * *(b + 51 * OS1_S1 + 74) -
                                       p_over_q * *(b + 72 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 53);
            *(b + 51 * OS1_S1 + 103) =
                prefactor_y * *(b + 51 * OS1_S1 + 70) -
                p_over_q * *(b + 78 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 70);
            *(b + 51 * OS1_S1 + 104) = prefactor_x * *(b + 51 * OS1_S1 + 76) -
                                       p_over_q * *(b + 72 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 55);
            *(b + 51 * OS1_S1 + 105) = prefactor_x * *(b + 51 * OS1_S1 + 77) -
                                       p_over_q * *(b + 72 * OS1_S1 + 77);
            *(b + 51 * OS1_S1 + 106) = prefactor_x * *(b + 51 * OS1_S1 + 78) -
                                       p_over_q * *(b + 72 * OS1_S1 + 78);
            *(b + 51 * OS1_S1 + 107) = prefactor_x * *(b + 51 * OS1_S1 + 79) -
                                       p_over_q * *(b + 72 * OS1_S1 + 79);
            *(b + 51 * OS1_S1 + 108) = prefactor_x * *(b + 51 * OS1_S1 + 80) -
                                       p_over_q * *(b + 72 * OS1_S1 + 80);
            *(b + 51 * OS1_S1 + 109) = prefactor_x * *(b + 51 * OS1_S1 + 81) -
                                       p_over_q * *(b + 72 * OS1_S1 + 81);
            *(b + 51 * OS1_S1 + 110) = prefactor_x * *(b + 51 * OS1_S1 + 82) -
                                       p_over_q * *(b + 72 * OS1_S1 + 82);
            *(b + 51 * OS1_S1 + 111) = prefactor_x * *(b + 51 * OS1_S1 + 83) -
                                       p_over_q * *(b + 72 * OS1_S1 + 83);
            *(b + 51 * OS1_S1 + 112) =
                prefactor_y * *(b + 51 * OS1_S1 + 77) -
                p_over_q * *(b + 78 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 51 * OS1_S1 + 50);
            *(b + 51 * OS1_S1 + 113) = prefactor_z * *(b + 51 * OS1_S1 + 77) -
                                       p_over_q * *(b + 79 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 77);
            *(b + 51 * OS1_S1 + 114) =
                prefactor_z * *(b + 51 * OS1_S1 + 78) -
                p_over_q * *(b + 79 * OS1_S1 + 78) +
                one_over_two_q * *(b + 30 * OS1_S1 + 78) +
                one_over_two_q * *(b + 51 * OS1_S1 + 50);
            *(b + 51 * OS1_S1 + 115) =
                prefactor_z * *(b + 51 * OS1_S1 + 79) -
                p_over_q * *(b + 79 * OS1_S1 + 79) +
                one_over_two_q * *(b + 30 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 51);
            *(b + 51 * OS1_S1 + 116) =
                prefactor_y * *(b + 51 * OS1_S1 + 81) -
                p_over_q * *(b + 78 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 54);
            *(b + 51 * OS1_S1 + 117) =
                prefactor_y * *(b + 51 * OS1_S1 + 82) -
                p_over_q * *(b + 78 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 82) +
                one_over_two_q * *(b + 51 * OS1_S1 + 55);
            *(b + 51 * OS1_S1 + 118) =
                prefactor_y * *(b + 51 * OS1_S1 + 83) -
                p_over_q * *(b + 78 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 83);
            *(b + 51 * OS1_S1 + 119) =
                prefactor_z * *(b + 51 * OS1_S1 + 83) -
                p_over_q * *(b + 79 * OS1_S1 + 83) +
                one_over_two_q * *(b + 30 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 51 * OS1_S1 + 55);
            *(b + 52 * OS1_S1 + 84) =
                prefactor_x * *(b + 52 * OS1_S1 + 56) -
                p_over_q * *(b + 73 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 52 * OS1_S1 + 35);
            *(b + 52 * OS1_S1 + 85) =
                prefactor_y * *(b + 52 * OS1_S1 + 56) -
                p_over_q * *(b + 79 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 56);
            *(b + 52 * OS1_S1 + 86) =
                prefactor_z * *(b + 52 * OS1_S1 + 56) -
                p_over_q * *(b + 80 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 56);
            *(b + 52 * OS1_S1 + 87) =
                prefactor_y * *(b + 52 * OS1_S1 + 57) -
                p_over_q * *(b + 79 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 57) +
                one_over_two_q * *(b + 52 * OS1_S1 + 35);
            *(b + 52 * OS1_S1 + 88) =
                prefactor_z * *(b + 52 * OS1_S1 + 57) -
                p_over_q * *(b + 80 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 57);
            *(b + 52 * OS1_S1 + 89) =
                prefactor_z * *(b + 52 * OS1_S1 + 58) -
                p_over_q * *(b + 80 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 58) +
                one_over_two_q * *(b + 52 * OS1_S1 + 35);
            *(b + 52 * OS1_S1 + 90) =
                prefactor_y * *(b + 52 * OS1_S1 + 59) -
                p_over_q * *(b + 79 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 36);
            *(b + 52 * OS1_S1 + 91) =
                prefactor_z * *(b + 52 * OS1_S1 + 59) -
                p_over_q * *(b + 80 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 59);
            *(b + 52 * OS1_S1 + 92) =
                prefactor_y * *(b + 52 * OS1_S1 + 61) -
                p_over_q * *(b + 79 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 61);
            *(b + 52 * OS1_S1 + 93) =
                prefactor_z * *(b + 52 * OS1_S1 + 61) -
                p_over_q * *(b + 80 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 37);
            *(b + 52 * OS1_S1 + 94) =
                prefactor_x * *(b + 52 * OS1_S1 + 66) -
                p_over_q * *(b + 73 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 45);
            *(b + 52 * OS1_S1 + 95) =
                prefactor_z * *(b + 52 * OS1_S1 + 62) -
                p_over_q * *(b + 80 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 62);
            *(b + 52 * OS1_S1 + 96) =
                prefactor_z * *(b + 52 * OS1_S1 + 63) -
                p_over_q * *(b + 80 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 63) +
                one_over_two_q * *(b + 52 * OS1_S1 + 38);
            *(b + 52 * OS1_S1 + 97) =
                prefactor_y * *(b + 52 * OS1_S1 + 65) -
                p_over_q * *(b + 79 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 65);
            *(b + 52 * OS1_S1 + 98) =
                prefactor_x * *(b + 52 * OS1_S1 + 70) -
                p_over_q * *(b + 73 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 49);
            *(b + 52 * OS1_S1 + 99) = prefactor_x * *(b + 52 * OS1_S1 + 71) -
                                      p_over_q * *(b + 73 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 50);
            *(b + 52 * OS1_S1 + 100) =
                prefactor_z * *(b + 52 * OS1_S1 + 66) -
                p_over_q * *(b + 80 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 66);
            *(b + 52 * OS1_S1 + 101) = prefactor_x * *(b + 52 * OS1_S1 + 73) -
                                       p_over_q * *(b + 73 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 52);
            *(b + 52 * OS1_S1 + 102) = prefactor_x * *(b + 52 * OS1_S1 + 74) -
                                       p_over_q * *(b + 73 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 53);
            *(b + 52 * OS1_S1 + 103) =
                prefactor_y * *(b + 52 * OS1_S1 + 70) -
                p_over_q * *(b + 79 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 70);
            *(b + 52 * OS1_S1 + 104) = prefactor_x * *(b + 52 * OS1_S1 + 76) -
                                       p_over_q * *(b + 73 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 55);
            *(b + 52 * OS1_S1 + 105) = prefactor_x * *(b + 52 * OS1_S1 + 77) -
                                       p_over_q * *(b + 73 * OS1_S1 + 77);
            *(b + 52 * OS1_S1 + 106) = prefactor_x * *(b + 52 * OS1_S1 + 78) -
                                       p_over_q * *(b + 73 * OS1_S1 + 78);
            *(b + 52 * OS1_S1 + 107) = prefactor_x * *(b + 52 * OS1_S1 + 79) -
                                       p_over_q * *(b + 73 * OS1_S1 + 79);
            *(b + 52 * OS1_S1 + 108) = prefactor_x * *(b + 52 * OS1_S1 + 80) -
                                       p_over_q * *(b + 73 * OS1_S1 + 80);
            *(b + 52 * OS1_S1 + 109) = prefactor_x * *(b + 52 * OS1_S1 + 81) -
                                       p_over_q * *(b + 73 * OS1_S1 + 81);
            *(b + 52 * OS1_S1 + 110) = prefactor_x * *(b + 52 * OS1_S1 + 82) -
                                       p_over_q * *(b + 73 * OS1_S1 + 82);
            *(b + 52 * OS1_S1 + 111) = prefactor_x * *(b + 52 * OS1_S1 + 83) -
                                       p_over_q * *(b + 73 * OS1_S1 + 83);
            *(b + 52 * OS1_S1 + 112) =
                prefactor_y * *(b + 52 * OS1_S1 + 77) -
                p_over_q * *(b + 79 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 52 * OS1_S1 + 50);
            *(b + 52 * OS1_S1 + 113) =
                prefactor_z * *(b + 52 * OS1_S1 + 77) -
                p_over_q * *(b + 80 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 77);
            *(b + 52 * OS1_S1 + 114) =
                prefactor_z * *(b + 52 * OS1_S1 + 78) -
                p_over_q * *(b + 80 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 78) +
                one_over_two_q * *(b + 52 * OS1_S1 + 50);
            *(b + 52 * OS1_S1 + 115) =
                prefactor_z * *(b + 52 * OS1_S1 + 79) -
                p_over_q * *(b + 80 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 51);
            *(b + 52 * OS1_S1 + 116) =
                prefactor_y * *(b + 52 * OS1_S1 + 81) -
                p_over_q * *(b + 79 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 54);
            *(b + 52 * OS1_S1 + 117) =
                prefactor_y * *(b + 52 * OS1_S1 + 82) -
                p_over_q * *(b + 79 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 82) +
                one_over_two_q * *(b + 52 * OS1_S1 + 55);
            *(b + 52 * OS1_S1 + 118) =
                prefactor_y * *(b + 52 * OS1_S1 + 83) -
                p_over_q * *(b + 79 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 83);
            *(b + 52 * OS1_S1 + 119) =
                prefactor_z * *(b + 52 * OS1_S1 + 83) -
                p_over_q * *(b + 80 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 52 * OS1_S1 + 55);
            *(b + 53 * OS1_S1 + 84) =
                prefactor_x * *(b + 53 * OS1_S1 + 56) -
                p_over_q * *(b + 74 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 53 * OS1_S1 + 35);
            *(b + 53 * OS1_S1 + 85) =
                prefactor_y * *(b + 53 * OS1_S1 + 56) -
                p_over_q * *(b + 80 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 56);
            *(b + 53 * OS1_S1 + 86) =
                prefactor_z * *(b + 53 * OS1_S1 + 56) -
                p_over_q * *(b + 81 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 56);
            *(b + 53 * OS1_S1 + 87) =
                prefactor_y * *(b + 53 * OS1_S1 + 57) -
                p_over_q * *(b + 80 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 57) +
                one_over_two_q * *(b + 53 * OS1_S1 + 35);
            *(b + 53 * OS1_S1 + 88) =
                prefactor_y * *(b + 53 * OS1_S1 + 58) -
                p_over_q * *(b + 80 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 58);
            *(b + 53 * OS1_S1 + 89) =
                prefactor_z * *(b + 53 * OS1_S1 + 58) -
                p_over_q * *(b + 81 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 58) +
                one_over_two_q * *(b + 53 * OS1_S1 + 35);
            *(b + 53 * OS1_S1 + 90) =
                prefactor_y * *(b + 53 * OS1_S1 + 59) -
                p_over_q * *(b + 80 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 36);
            *(b + 53 * OS1_S1 + 91) =
                prefactor_z * *(b + 53 * OS1_S1 + 59) -
                p_over_q * *(b + 81 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 59);
            *(b + 53 * OS1_S1 + 92) =
                prefactor_y * *(b + 53 * OS1_S1 + 61) -
                p_over_q * *(b + 80 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 61);
            *(b + 53 * OS1_S1 + 93) =
                prefactor_z * *(b + 53 * OS1_S1 + 61) -
                p_over_q * *(b + 81 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 37);
            *(b + 53 * OS1_S1 + 94) =
                prefactor_x * *(b + 53 * OS1_S1 + 66) -
                p_over_q * *(b + 74 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 45);
            *(b + 53 * OS1_S1 + 95) =
                prefactor_z * *(b + 53 * OS1_S1 + 62) -
                p_over_q * *(b + 81 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 62);
            *(b + 53 * OS1_S1 + 96) =
                prefactor_y * *(b + 53 * OS1_S1 + 64) -
                p_over_q * *(b + 80 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 64) +
                one_over_two_q * *(b + 53 * OS1_S1 + 40);
            *(b + 53 * OS1_S1 + 97) =
                prefactor_y * *(b + 53 * OS1_S1 + 65) -
                p_over_q * *(b + 80 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 65);
            *(b + 53 * OS1_S1 + 98) =
                prefactor_x * *(b + 53 * OS1_S1 + 70) -
                p_over_q * *(b + 74 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 49);
            *(b + 53 * OS1_S1 + 99) = prefactor_x * *(b + 53 * OS1_S1 + 71) -
                                      p_over_q * *(b + 74 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 50);
            *(b + 53 * OS1_S1 + 100) =
                prefactor_z * *(b + 53 * OS1_S1 + 66) -
                p_over_q * *(b + 81 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 66);
            *(b + 53 * OS1_S1 + 101) = prefactor_x * *(b + 53 * OS1_S1 + 73) -
                                       p_over_q * *(b + 74 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 52);
            *(b + 53 * OS1_S1 + 102) = prefactor_x * *(b + 53 * OS1_S1 + 74) -
                                       p_over_q * *(b + 74 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 53);
            *(b + 53 * OS1_S1 + 103) =
                prefactor_y * *(b + 53 * OS1_S1 + 70) -
                p_over_q * *(b + 80 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 70);
            *(b + 53 * OS1_S1 + 104) = prefactor_x * *(b + 53 * OS1_S1 + 76) -
                                       p_over_q * *(b + 74 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 55);
            *(b + 53 * OS1_S1 + 105) = prefactor_x * *(b + 53 * OS1_S1 + 77) -
                                       p_over_q * *(b + 74 * OS1_S1 + 77);
            *(b + 53 * OS1_S1 + 106) = prefactor_x * *(b + 53 * OS1_S1 + 78) -
                                       p_over_q * *(b + 74 * OS1_S1 + 78);
            *(b + 53 * OS1_S1 + 107) = prefactor_x * *(b + 53 * OS1_S1 + 79) -
                                       p_over_q * *(b + 74 * OS1_S1 + 79);
            *(b + 53 * OS1_S1 + 108) = prefactor_x * *(b + 53 * OS1_S1 + 80) -
                                       p_over_q * *(b + 74 * OS1_S1 + 80);
            *(b + 53 * OS1_S1 + 109) = prefactor_x * *(b + 53 * OS1_S1 + 81) -
                                       p_over_q * *(b + 74 * OS1_S1 + 81);
            *(b + 53 * OS1_S1 + 110) = prefactor_x * *(b + 53 * OS1_S1 + 82) -
                                       p_over_q * *(b + 74 * OS1_S1 + 82);
            *(b + 53 * OS1_S1 + 111) = prefactor_x * *(b + 53 * OS1_S1 + 83) -
                                       p_over_q * *(b + 74 * OS1_S1 + 83);
            *(b + 53 * OS1_S1 + 112) =
                prefactor_y * *(b + 53 * OS1_S1 + 77) -
                p_over_q * *(b + 80 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 53 * OS1_S1 + 50);
            *(b + 53 * OS1_S1 + 113) =
                prefactor_z * *(b + 53 * OS1_S1 + 77) -
                p_over_q * *(b + 81 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 77);
            *(b + 53 * OS1_S1 + 114) =
                prefactor_z * *(b + 53 * OS1_S1 + 78) -
                p_over_q * *(b + 81 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 78) +
                one_over_two_q * *(b + 53 * OS1_S1 + 50);
            *(b + 53 * OS1_S1 + 115) =
                prefactor_z * *(b + 53 * OS1_S1 + 79) -
                p_over_q * *(b + 81 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 51);
            *(b + 53 * OS1_S1 + 116) =
                prefactor_y * *(b + 53 * OS1_S1 + 81) -
                p_over_q * *(b + 80 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 54);
            *(b + 53 * OS1_S1 + 117) =
                prefactor_y * *(b + 53 * OS1_S1 + 82) -
                p_over_q * *(b + 80 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 82) +
                one_over_two_q * *(b + 53 * OS1_S1 + 55);
            *(b + 53 * OS1_S1 + 118) =
                prefactor_y * *(b + 53 * OS1_S1 + 83) -
                p_over_q * *(b + 80 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 83);
            *(b + 53 * OS1_S1 + 119) =
                prefactor_z * *(b + 53 * OS1_S1 + 83) -
                p_over_q * *(b + 81 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 53 * OS1_S1 + 55);
            *(b + 54 * OS1_S1 + 84) =
                prefactor_x * *(b + 54 * OS1_S1 + 56) -
                p_over_q * *(b + 75 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 54 * OS1_S1 + 35);
            *(b + 54 * OS1_S1 + 85) = prefactor_y * *(b + 54 * OS1_S1 + 56) -
                                      p_over_q * *(b + 81 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 56);
            *(b + 54 * OS1_S1 + 86) =
                prefactor_z * *(b + 54 * OS1_S1 + 56) -
                p_over_q * *(b + 82 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 56);
            *(b + 54 * OS1_S1 + 87) = prefactor_y * *(b + 54 * OS1_S1 + 57) -
                                      p_over_q * *(b + 81 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 35);
            *(b + 54 * OS1_S1 + 88) = prefactor_y * *(b + 54 * OS1_S1 + 58) -
                                      p_over_q * *(b + 81 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 58);
            *(b + 54 * OS1_S1 + 89) =
                prefactor_z * *(b + 54 * OS1_S1 + 58) -
                p_over_q * *(b + 82 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 58) +
                one_over_two_q * *(b + 54 * OS1_S1 + 35);
            *(b + 54 * OS1_S1 + 90) =
                prefactor_y * *(b + 54 * OS1_S1 + 59) -
                p_over_q * *(b + 81 * OS1_S1 + 59) +
                one_over_two_q * *(b + 34 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 36);
            *(b + 54 * OS1_S1 + 91) =
                prefactor_z * *(b + 54 * OS1_S1 + 59) -
                p_over_q * *(b + 82 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 59);
            *(b + 54 * OS1_S1 + 92) = prefactor_y * *(b + 54 * OS1_S1 + 61) -
                                      p_over_q * *(b + 81 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 61);
            *(b + 54 * OS1_S1 + 93) =
                prefactor_z * *(b + 54 * OS1_S1 + 61) -
                p_over_q * *(b + 82 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 37);
            *(b + 54 * OS1_S1 + 94) =
                prefactor_x * *(b + 54 * OS1_S1 + 66) -
                p_over_q * *(b + 75 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 45);
            *(b + 54 * OS1_S1 + 95) =
                prefactor_z * *(b + 54 * OS1_S1 + 62) -
                p_over_q * *(b + 82 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 62);
            *(b + 54 * OS1_S1 + 96) = prefactor_y * *(b + 54 * OS1_S1 + 64) -
                                      p_over_q * *(b + 81 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 40);
            *(b + 54 * OS1_S1 + 97) = prefactor_y * *(b + 54 * OS1_S1 + 65) -
                                      p_over_q * *(b + 81 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 34 * OS1_S1 + 65);
            *(b + 54 * OS1_S1 + 98) =
                prefactor_x * *(b + 54 * OS1_S1 + 70) -
                p_over_q * *(b + 75 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 49);
            *(b + 54 * OS1_S1 + 99) = prefactor_x * *(b + 54 * OS1_S1 + 71) -
                                      p_over_q * *(b + 75 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 50);
            *(b + 54 * OS1_S1 + 100) =
                prefactor_z * *(b + 54 * OS1_S1 + 66) -
                p_over_q * *(b + 82 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 66);
            *(b + 54 * OS1_S1 + 101) = prefactor_x * *(b + 54 * OS1_S1 + 73) -
                                       p_over_q * *(b + 75 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 52);
            *(b + 54 * OS1_S1 + 102) = prefactor_x * *(b + 54 * OS1_S1 + 74) -
                                       p_over_q * *(b + 75 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 53);
            *(b + 54 * OS1_S1 + 103) = prefactor_y * *(b + 54 * OS1_S1 + 70) -
                                       p_over_q * *(b + 81 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 70);
            *(b + 54 * OS1_S1 + 104) = prefactor_x * *(b + 54 * OS1_S1 + 76) -
                                       p_over_q * *(b + 75 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 55);
            *(b + 54 * OS1_S1 + 105) = prefactor_x * *(b + 54 * OS1_S1 + 77) -
                                       p_over_q * *(b + 75 * OS1_S1 + 77);
            *(b + 54 * OS1_S1 + 106) = prefactor_x * *(b + 54 * OS1_S1 + 78) -
                                       p_over_q * *(b + 75 * OS1_S1 + 78);
            *(b + 54 * OS1_S1 + 107) = prefactor_x * *(b + 54 * OS1_S1 + 79) -
                                       p_over_q * *(b + 75 * OS1_S1 + 79);
            *(b + 54 * OS1_S1 + 108) = prefactor_x * *(b + 54 * OS1_S1 + 80) -
                                       p_over_q * *(b + 75 * OS1_S1 + 80);
            *(b + 54 * OS1_S1 + 109) = prefactor_x * *(b + 54 * OS1_S1 + 81) -
                                       p_over_q * *(b + 75 * OS1_S1 + 81);
            *(b + 54 * OS1_S1 + 110) = prefactor_x * *(b + 54 * OS1_S1 + 82) -
                                       p_over_q * *(b + 75 * OS1_S1 + 82);
            *(b + 54 * OS1_S1 + 111) = prefactor_x * *(b + 54 * OS1_S1 + 83) -
                                       p_over_q * *(b + 75 * OS1_S1 + 83);
            *(b + 54 * OS1_S1 + 112) =
                prefactor_y * *(b + 54 * OS1_S1 + 77) -
                p_over_q * *(b + 81 * OS1_S1 + 77) +
                one_over_two_q * *(b + 34 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 54 * OS1_S1 + 50);
            *(b + 54 * OS1_S1 + 113) =
                prefactor_z * *(b + 54 * OS1_S1 + 77) -
                p_over_q * *(b + 82 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 77);
            *(b + 54 * OS1_S1 + 114) =
                prefactor_z * *(b + 54 * OS1_S1 + 78) -
                p_over_q * *(b + 82 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 78) +
                one_over_two_q * *(b + 54 * OS1_S1 + 50);
            *(b + 54 * OS1_S1 + 115) =
                prefactor_z * *(b + 54 * OS1_S1 + 79) -
                p_over_q * *(b + 82 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 51);
            *(b + 54 * OS1_S1 + 116) =
                prefactor_y * *(b + 54 * OS1_S1 + 81) -
                p_over_q * *(b + 81 * OS1_S1 + 81) +
                one_over_two_q * *(b + 34 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 54);
            *(b + 54 * OS1_S1 + 117) =
                prefactor_y * *(b + 54 * OS1_S1 + 82) -
                p_over_q * *(b + 81 * OS1_S1 + 82) +
                one_over_two_q * *(b + 34 * OS1_S1 + 82) +
                one_over_two_q * *(b + 54 * OS1_S1 + 55);
            *(b + 54 * OS1_S1 + 118) = prefactor_y * *(b + 54 * OS1_S1 + 83) -
                                       p_over_q * *(b + 81 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 83);
            *(b + 54 * OS1_S1 + 119) =
                prefactor_z * *(b + 54 * OS1_S1 + 83) -
                p_over_q * *(b + 82 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 54 * OS1_S1 + 55);
            *(b + 55 * OS1_S1 + 84) =
                prefactor_x * *(b + 55 * OS1_S1 + 56) -
                p_over_q * *(b + 76 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 35);
            *(b + 55 * OS1_S1 + 85) = prefactor_y * *(b + 55 * OS1_S1 + 56) -
                                      p_over_q * *(b + 82 * OS1_S1 + 56);
            *(b + 55 * OS1_S1 + 86) =
                prefactor_z * *(b + 55 * OS1_S1 + 56) -
                p_over_q * *(b + 83 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 56);
            *(b + 55 * OS1_S1 + 87) = prefactor_y * *(b + 55 * OS1_S1 + 57) -
                                      p_over_q * *(b + 82 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 35);
            *(b + 55 * OS1_S1 + 88) = prefactor_y * *(b + 55 * OS1_S1 + 58) -
                                      p_over_q * *(b + 82 * OS1_S1 + 58);
            *(b + 55 * OS1_S1 + 89) =
                prefactor_z * *(b + 55 * OS1_S1 + 58) -
                p_over_q * *(b + 83 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 58) +
                one_over_two_q * *(b + 55 * OS1_S1 + 35);
            *(b + 55 * OS1_S1 + 90) =
                prefactor_y * *(b + 55 * OS1_S1 + 59) -
                p_over_q * *(b + 82 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 36);
            *(b + 55 * OS1_S1 + 91) =
                prefactor_z * *(b + 55 * OS1_S1 + 59) -
                p_over_q * *(b + 83 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 59);
            *(b + 55 * OS1_S1 + 92) = prefactor_y * *(b + 55 * OS1_S1 + 61) -
                                      p_over_q * *(b + 82 * OS1_S1 + 61);
            *(b + 55 * OS1_S1 + 93) =
                prefactor_z * *(b + 55 * OS1_S1 + 61) -
                p_over_q * *(b + 83 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 37);
            *(b + 55 * OS1_S1 + 94) =
                prefactor_x * *(b + 55 * OS1_S1 + 66) -
                p_over_q * *(b + 76 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 45);
            *(b + 55 * OS1_S1 + 95) =
                prefactor_z * *(b + 55 * OS1_S1 + 62) -
                p_over_q * *(b + 83 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 62);
            *(b + 55 * OS1_S1 + 96) = prefactor_y * *(b + 55 * OS1_S1 + 64) -
                                      p_over_q * *(b + 82 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 40);
            *(b + 55 * OS1_S1 + 97) = prefactor_y * *(b + 55 * OS1_S1 + 65) -
                                      p_over_q * *(b + 82 * OS1_S1 + 65);
            *(b + 55 * OS1_S1 + 98) =
                prefactor_x * *(b + 55 * OS1_S1 + 70) -
                p_over_q * *(b + 76 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 49);
            *(b + 55 * OS1_S1 + 99) = prefactor_x * *(b + 55 * OS1_S1 + 71) -
                                      p_over_q * *(b + 76 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 50);
            *(b + 55 * OS1_S1 + 100) =
                prefactor_z * *(b + 55 * OS1_S1 + 66) -
                p_over_q * *(b + 83 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 66);
            *(b + 55 * OS1_S1 + 101) = prefactor_x * *(b + 55 * OS1_S1 + 73) -
                                       p_over_q * *(b + 76 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 52);
            *(b + 55 * OS1_S1 + 102) = prefactor_y * *(b + 55 * OS1_S1 + 69) -
                                       p_over_q * *(b + 82 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 44);
            *(b + 55 * OS1_S1 + 103) = prefactor_y * *(b + 55 * OS1_S1 + 70) -
                                       p_over_q * *(b + 82 * OS1_S1 + 70);
            *(b + 55 * OS1_S1 + 104) = prefactor_x * *(b + 55 * OS1_S1 + 76) -
                                       p_over_q * *(b + 76 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 55);
            *(b + 55 * OS1_S1 + 105) = prefactor_x * *(b + 55 * OS1_S1 + 77) -
                                       p_over_q * *(b + 76 * OS1_S1 + 77);
            *(b + 55 * OS1_S1 + 106) = prefactor_x * *(b + 55 * OS1_S1 + 78) -
                                       p_over_q * *(b + 76 * OS1_S1 + 78);
            *(b + 55 * OS1_S1 + 107) = prefactor_x * *(b + 55 * OS1_S1 + 79) -
                                       p_over_q * *(b + 76 * OS1_S1 + 79);
            *(b + 55 * OS1_S1 + 108) = prefactor_x * *(b + 55 * OS1_S1 + 80) -
                                       p_over_q * *(b + 76 * OS1_S1 + 80);
            *(b + 55 * OS1_S1 + 109) = prefactor_x * *(b + 55 * OS1_S1 + 81) -
                                       p_over_q * *(b + 76 * OS1_S1 + 81);
            *(b + 55 * OS1_S1 + 110) = prefactor_y * *(b + 55 * OS1_S1 + 76) -
                                       p_over_q * *(b + 82 * OS1_S1 + 76);
            *(b + 55 * OS1_S1 + 111) = prefactor_x * *(b + 55 * OS1_S1 + 83) -
                                       p_over_q * *(b + 76 * OS1_S1 + 83);
            *(b + 55 * OS1_S1 + 112) =
                prefactor_y * *(b + 55 * OS1_S1 + 77) -
                p_over_q * *(b + 82 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 50);
            *(b + 55 * OS1_S1 + 113) =
                prefactor_z * *(b + 55 * OS1_S1 + 77) -
                p_over_q * *(b + 83 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 77);
            *(b + 55 * OS1_S1 + 114) =
                prefactor_z * *(b + 55 * OS1_S1 + 78) -
                p_over_q * *(b + 83 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 78) +
                one_over_two_q * *(b + 55 * OS1_S1 + 50);
            *(b + 55 * OS1_S1 + 115) =
                prefactor_z * *(b + 55 * OS1_S1 + 79) -
                p_over_q * *(b + 83 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 51);
            *(b + 55 * OS1_S1 + 116) =
                prefactor_y * *(b + 55 * OS1_S1 + 81) -
                p_over_q * *(b + 82 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 54);
            *(b + 55 * OS1_S1 + 117) = prefactor_y * *(b + 55 * OS1_S1 + 82) -
                                       p_over_q * *(b + 82 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 55);
            *(b + 55 * OS1_S1 + 118) = prefactor_y * *(b + 55 * OS1_S1 + 83) -
                                       p_over_q * *(b + 82 * OS1_S1 + 83);
            *(b + 55 * OS1_S1 + 119) =
                prefactor_z * *(b + 55 * OS1_S1 + 83) -
                p_over_q * *(b + 83 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 55);
            return;
        }
    }
}
