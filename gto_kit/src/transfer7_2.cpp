/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_6_7(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 56 * OS1_S1 + 84) =
                prefactor_x * *(b + 56 * OS1_S1 + 56) -
                p_over_q * *(b + 84 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 56 * OS1_S1 + 35);
            *(b + 56 * OS1_S1 + 85) = prefactor_y * *(b + 56 * OS1_S1 + 56) -
                                      p_over_q * *(b + 85 * OS1_S1 + 56);
            *(b + 56 * OS1_S1 + 86) = prefactor_z * *(b + 56 * OS1_S1 + 56) -
                                      p_over_q * *(b + 86 * OS1_S1 + 56);
            *(b + 56 * OS1_S1 + 87) = prefactor_y * *(b + 56 * OS1_S1 + 57) -
                                      p_over_q * *(b + 85 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 35);
            *(b + 56 * OS1_S1 + 88) = prefactor_z * *(b + 56 * OS1_S1 + 57) -
                                      p_over_q * *(b + 86 * OS1_S1 + 57);
            *(b + 56 * OS1_S1 + 89) = prefactor_z * *(b + 56 * OS1_S1 + 58) -
                                      p_over_q * *(b + 86 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 35);
            *(b + 56 * OS1_S1 + 90) =
                prefactor_y * *(b + 56 * OS1_S1 + 59) -
                p_over_q * *(b + 85 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 36);
            *(b + 56 * OS1_S1 + 91) = prefactor_z * *(b + 56 * OS1_S1 + 59) -
                                      p_over_q * *(b + 86 * OS1_S1 + 59);
            *(b + 56 * OS1_S1 + 92) = prefactor_y * *(b + 56 * OS1_S1 + 61) -
                                      p_over_q * *(b + 85 * OS1_S1 + 61);
            *(b + 56 * OS1_S1 + 93) =
                prefactor_z * *(b + 56 * OS1_S1 + 61) -
                p_over_q * *(b + 86 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 37);
            *(b + 56 * OS1_S1 + 94) =
                prefactor_x * *(b + 56 * OS1_S1 + 66) -
                p_over_q * *(b + 84 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 45);
            *(b + 56 * OS1_S1 + 95) = prefactor_z * *(b + 56 * OS1_S1 + 62) -
                                      p_over_q * *(b + 86 * OS1_S1 + 62);
            *(b + 56 * OS1_S1 + 96) = prefactor_z * *(b + 56 * OS1_S1 + 63) -
                                      p_over_q * *(b + 86 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 38);
            *(b + 56 * OS1_S1 + 97) = prefactor_y * *(b + 56 * OS1_S1 + 65) -
                                      p_over_q * *(b + 85 * OS1_S1 + 65);
            *(b + 56 * OS1_S1 + 98) =
                prefactor_x * *(b + 56 * OS1_S1 + 70) -
                p_over_q * *(b + 84 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 49);
            *(b + 56 * OS1_S1 + 99) =
                prefactor_x * *(b + 56 * OS1_S1 + 71) -
                p_over_q * *(b + 84 * OS1_S1 + 71) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 71) +
                one_over_two_q * *(b + 56 * OS1_S1 + 50);
            *(b + 56 * OS1_S1 + 100) = prefactor_z * *(b + 56 * OS1_S1 + 66) -
                                       p_over_q * *(b + 86 * OS1_S1 + 66);
            *(b + 56 * OS1_S1 + 101) = prefactor_z * *(b + 56 * OS1_S1 + 67) -
                                       p_over_q * *(b + 86 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 41);
            *(b + 56 * OS1_S1 + 102) = prefactor_y * *(b + 56 * OS1_S1 + 69) -
                                       p_over_q * *(b + 85 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 44);
            *(b + 56 * OS1_S1 + 103) = prefactor_y * *(b + 56 * OS1_S1 + 70) -
                                       p_over_q * *(b + 85 * OS1_S1 + 70);
            *(b + 56 * OS1_S1 + 104) =
                prefactor_x * *(b + 56 * OS1_S1 + 76) -
                p_over_q * *(b + 84 * OS1_S1 + 76) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 76) +
                one_over_two_q * *(b + 56 * OS1_S1 + 55);
            *(b + 56 * OS1_S1 + 105) =
                prefactor_x * *(b + 56 * OS1_S1 + 77) -
                p_over_q * *(b + 84 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 77);
            *(b + 56 * OS1_S1 + 106) = prefactor_z * *(b + 56 * OS1_S1 + 71) -
                                       p_over_q * *(b + 86 * OS1_S1 + 71);
            *(b + 56 * OS1_S1 + 107) =
                prefactor_x * *(b + 56 * OS1_S1 + 79) -
                p_over_q * *(b + 84 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 79);
            *(b + 56 * OS1_S1 + 108) =
                prefactor_x * *(b + 56 * OS1_S1 + 80) -
                p_over_q * *(b + 84 * OS1_S1 + 80) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 80);
            *(b + 56 * OS1_S1 + 109) =
                prefactor_x * *(b + 56 * OS1_S1 + 81) -
                p_over_q * *(b + 84 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 81);
            *(b + 56 * OS1_S1 + 110) = prefactor_y * *(b + 56 * OS1_S1 + 76) -
                                       p_over_q * *(b + 85 * OS1_S1 + 76);
            *(b + 56 * OS1_S1 + 111) =
                prefactor_x * *(b + 56 * OS1_S1 + 83) -
                p_over_q * *(b + 84 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 83);
            *(b + 56 * OS1_S1 + 112) =
                prefactor_y * *(b + 56 * OS1_S1 + 77) -
                p_over_q * *(b + 85 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 56 * OS1_S1 + 50);
            *(b + 56 * OS1_S1 + 113) = prefactor_z * *(b + 56 * OS1_S1 + 77) -
                                       p_over_q * *(b + 86 * OS1_S1 + 77);
            *(b + 56 * OS1_S1 + 114) = prefactor_z * *(b + 56 * OS1_S1 + 78) -
                                       p_over_q * *(b + 86 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 50);
            *(b + 56 * OS1_S1 + 115) =
                prefactor_z * *(b + 56 * OS1_S1 + 79) -
                p_over_q * *(b + 86 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 51);
            *(b + 56 * OS1_S1 + 116) =
                prefactor_y * *(b + 56 * OS1_S1 + 81) -
                p_over_q * *(b + 85 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 54);
            *(b + 56 * OS1_S1 + 117) = prefactor_y * *(b + 56 * OS1_S1 + 82) -
                                       p_over_q * *(b + 85 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 55);
            *(b + 56 * OS1_S1 + 118) = prefactor_y * *(b + 56 * OS1_S1 + 83) -
                                       p_over_q * *(b + 85 * OS1_S1 + 83);
            *(b + 56 * OS1_S1 + 119) =
                prefactor_z * *(b + 56 * OS1_S1 + 83) -
                p_over_q * *(b + 86 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 56 * OS1_S1 + 55);
            *(b + 57 * OS1_S1 + 84) =
                prefactor_x * *(b + 57 * OS1_S1 + 56) -
                p_over_q * *(b + 85 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 35);
            *(b + 57 * OS1_S1 + 85) = prefactor_y * *(b + 57 * OS1_S1 + 56) -
                                      p_over_q * *(b + 87 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 56);
            *(b + 57 * OS1_S1 + 86) = prefactor_z * *(b + 57 * OS1_S1 + 56) -
                                      p_over_q * *(b + 88 * OS1_S1 + 56);
            *(b + 57 * OS1_S1 + 87) = prefactor_y * *(b + 57 * OS1_S1 + 57) -
                                      p_over_q * *(b + 87 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 35);
            *(b + 57 * OS1_S1 + 88) = prefactor_z * *(b + 57 * OS1_S1 + 57) -
                                      p_over_q * *(b + 88 * OS1_S1 + 57);
            *(b + 57 * OS1_S1 + 89) = prefactor_z * *(b + 57 * OS1_S1 + 58) -
                                      p_over_q * *(b + 88 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 35);
            *(b + 57 * OS1_S1 + 90) =
                prefactor_y * *(b + 57 * OS1_S1 + 59) -
                p_over_q * *(b + 87 * OS1_S1 + 59) +
                one_over_two_q * *(b + 35 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 36);
            *(b + 57 * OS1_S1 + 91) = prefactor_z * *(b + 57 * OS1_S1 + 59) -
                                      p_over_q * *(b + 88 * OS1_S1 + 59);
            *(b + 57 * OS1_S1 + 92) = prefactor_y * *(b + 57 * OS1_S1 + 61) -
                                      p_over_q * *(b + 87 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 61);
            *(b + 57 * OS1_S1 + 93) =
                prefactor_z * *(b + 57 * OS1_S1 + 61) -
                p_over_q * *(b + 88 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 37);
            *(b + 57 * OS1_S1 + 94) =
                prefactor_x * *(b + 57 * OS1_S1 + 66) -
                p_over_q * *(b + 85 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 45);
            *(b + 57 * OS1_S1 + 95) = prefactor_z * *(b + 57 * OS1_S1 + 62) -
                                      p_over_q * *(b + 88 * OS1_S1 + 62);
            *(b + 57 * OS1_S1 + 96) = prefactor_z * *(b + 57 * OS1_S1 + 63) -
                                      p_over_q * *(b + 88 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 38);
            *(b + 57 * OS1_S1 + 97) = prefactor_y * *(b + 57 * OS1_S1 + 65) -
                                      p_over_q * *(b + 87 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 65);
            *(b + 57 * OS1_S1 + 98) =
                prefactor_x * *(b + 57 * OS1_S1 + 70) -
                p_over_q * *(b + 85 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 49);
            *(b + 57 * OS1_S1 + 99) =
                prefactor_x * *(b + 57 * OS1_S1 + 71) -
                p_over_q * *(b + 85 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 71) +
                one_over_two_q * *(b + 57 * OS1_S1 + 50);
            *(b + 57 * OS1_S1 + 100) = prefactor_z * *(b + 57 * OS1_S1 + 66) -
                                       p_over_q * *(b + 88 * OS1_S1 + 66);
            *(b + 57 * OS1_S1 + 101) = prefactor_z * *(b + 57 * OS1_S1 + 67) -
                                       p_over_q * *(b + 88 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 41);
            *(b + 57 * OS1_S1 + 102) =
                prefactor_y * *(b + 57 * OS1_S1 + 69) -
                p_over_q * *(b + 87 * OS1_S1 + 69) +
                one_over_two_q * *(b + 35 * OS1_S1 + 69) +
                one_over_two_q * *(b + 57 * OS1_S1 + 44);
            *(b + 57 * OS1_S1 + 103) = prefactor_y * *(b + 57 * OS1_S1 + 70) -
                                       p_over_q * *(b + 87 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 70);
            *(b + 57 * OS1_S1 + 104) =
                prefactor_x * *(b + 57 * OS1_S1 + 76) -
                p_over_q * *(b + 85 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 76) +
                one_over_two_q * *(b + 57 * OS1_S1 + 55);
            *(b + 57 * OS1_S1 + 105) =
                prefactor_x * *(b + 57 * OS1_S1 + 77) -
                p_over_q * *(b + 85 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 77);
            *(b + 57 * OS1_S1 + 106) = prefactor_z * *(b + 57 * OS1_S1 + 71) -
                                       p_over_q * *(b + 88 * OS1_S1 + 71);
            *(b + 57 * OS1_S1 + 107) =
                prefactor_x * *(b + 57 * OS1_S1 + 79) -
                p_over_q * *(b + 85 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 79);
            *(b + 57 * OS1_S1 + 108) =
                prefactor_x * *(b + 57 * OS1_S1 + 80) -
                p_over_q * *(b + 85 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 80);
            *(b + 57 * OS1_S1 + 109) =
                prefactor_x * *(b + 57 * OS1_S1 + 81) -
                p_over_q * *(b + 85 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 81);
            *(b + 57 * OS1_S1 + 110) = prefactor_y * *(b + 57 * OS1_S1 + 76) -
                                       p_over_q * *(b + 87 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 76);
            *(b + 57 * OS1_S1 + 111) =
                prefactor_x * *(b + 57 * OS1_S1 + 83) -
                p_over_q * *(b + 85 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 83);
            *(b + 57 * OS1_S1 + 112) =
                prefactor_y * *(b + 57 * OS1_S1 + 77) -
                p_over_q * *(b + 87 * OS1_S1 + 77) +
                one_over_two_q * *(b + 35 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 50);
            *(b + 57 * OS1_S1 + 113) = prefactor_z * *(b + 57 * OS1_S1 + 77) -
                                       p_over_q * *(b + 88 * OS1_S1 + 77);
            *(b + 57 * OS1_S1 + 114) = prefactor_z * *(b + 57 * OS1_S1 + 78) -
                                       p_over_q * *(b + 88 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 50);
            *(b + 57 * OS1_S1 + 115) =
                prefactor_z * *(b + 57 * OS1_S1 + 79) -
                p_over_q * *(b + 88 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 51);
            *(b + 57 * OS1_S1 + 116) =
                prefactor_y * *(b + 57 * OS1_S1 + 81) -
                p_over_q * *(b + 87 * OS1_S1 + 81) +
                one_over_two_q * *(b + 35 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 54);
            *(b + 57 * OS1_S1 + 117) =
                prefactor_y * *(b + 57 * OS1_S1 + 82) -
                p_over_q * *(b + 87 * OS1_S1 + 82) +
                one_over_two_q * *(b + 35 * OS1_S1 + 82) +
                one_over_two_q * *(b + 57 * OS1_S1 + 55);
            *(b + 57 * OS1_S1 + 118) = prefactor_y * *(b + 57 * OS1_S1 + 83) -
                                       p_over_q * *(b + 87 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 83);
            *(b + 57 * OS1_S1 + 119) =
                prefactor_z * *(b + 57 * OS1_S1 + 83) -
                p_over_q * *(b + 88 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 55);
            *(b + 58 * OS1_S1 + 84) =
                prefactor_x * *(b + 58 * OS1_S1 + 56) -
                p_over_q * *(b + 86 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 35);
            *(b + 58 * OS1_S1 + 85) = prefactor_y * *(b + 58 * OS1_S1 + 56) -
                                      p_over_q * *(b + 88 * OS1_S1 + 56);
            *(b + 58 * OS1_S1 + 86) = prefactor_z * *(b + 58 * OS1_S1 + 56) -
                                      p_over_q * *(b + 89 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 56);
            *(b + 58 * OS1_S1 + 87) = prefactor_y * *(b + 58 * OS1_S1 + 57) -
                                      p_over_q * *(b + 88 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 35);
            *(b + 58 * OS1_S1 + 88) = prefactor_y * *(b + 58 * OS1_S1 + 58) -
                                      p_over_q * *(b + 88 * OS1_S1 + 58);
            *(b + 58 * OS1_S1 + 89) = prefactor_z * *(b + 58 * OS1_S1 + 58) -
                                      p_over_q * *(b + 89 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 35);
            *(b + 58 * OS1_S1 + 90) =
                prefactor_y * *(b + 58 * OS1_S1 + 59) -
                p_over_q * *(b + 88 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 36);
            *(b + 58 * OS1_S1 + 91) = prefactor_z * *(b + 58 * OS1_S1 + 59) -
                                      p_over_q * *(b + 89 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 59);
            *(b + 58 * OS1_S1 + 92) = prefactor_y * *(b + 58 * OS1_S1 + 61) -
                                      p_over_q * *(b + 88 * OS1_S1 + 61);
            *(b + 58 * OS1_S1 + 93) =
                prefactor_z * *(b + 58 * OS1_S1 + 61) -
                p_over_q * *(b + 89 * OS1_S1 + 61) +
                one_over_two_q * *(b + 35 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 37);
            *(b + 58 * OS1_S1 + 94) =
                prefactor_x * *(b + 58 * OS1_S1 + 66) -
                p_over_q * *(b + 86 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 45);
            *(b + 58 * OS1_S1 + 95) = prefactor_z * *(b + 58 * OS1_S1 + 62) -
                                      p_over_q * *(b + 89 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 35 * OS1_S1 + 62);
            *(b + 58 * OS1_S1 + 96) = prefactor_y * *(b + 58 * OS1_S1 + 64) -
                                      p_over_q * *(b + 88 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 40);
            *(b + 58 * OS1_S1 + 97) = prefactor_y * *(b + 58 * OS1_S1 + 65) -
                                      p_over_q * *(b + 88 * OS1_S1 + 65);
            *(b + 58 * OS1_S1 + 98) =
                prefactor_x * *(b + 58 * OS1_S1 + 70) -
                p_over_q * *(b + 86 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 49);
            *(b + 58 * OS1_S1 + 99) =
                prefactor_x * *(b + 58 * OS1_S1 + 71) -
                p_over_q * *(b + 86 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 71) +
                one_over_two_q * *(b + 58 * OS1_S1 + 50);
            *(b + 58 * OS1_S1 + 100) = prefactor_z * *(b + 58 * OS1_S1 + 66) -
                                       p_over_q * *(b + 89 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 66);
            *(b + 58 * OS1_S1 + 101) =
                prefactor_z * *(b + 58 * OS1_S1 + 67) -
                p_over_q * *(b + 89 * OS1_S1 + 67) +
                one_over_two_q * *(b + 35 * OS1_S1 + 67) +
                one_over_two_q * *(b + 58 * OS1_S1 + 41);
            *(b + 58 * OS1_S1 + 102) = prefactor_y * *(b + 58 * OS1_S1 + 69) -
                                       p_over_q * *(b + 88 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 44);
            *(b + 58 * OS1_S1 + 103) = prefactor_y * *(b + 58 * OS1_S1 + 70) -
                                       p_over_q * *(b + 88 * OS1_S1 + 70);
            *(b + 58 * OS1_S1 + 104) =
                prefactor_x * *(b + 58 * OS1_S1 + 76) -
                p_over_q * *(b + 86 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 76) +
                one_over_two_q * *(b + 58 * OS1_S1 + 55);
            *(b + 58 * OS1_S1 + 105) =
                prefactor_x * *(b + 58 * OS1_S1 + 77) -
                p_over_q * *(b + 86 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 77);
            *(b + 58 * OS1_S1 + 106) = prefactor_z * *(b + 58 * OS1_S1 + 71) -
                                       p_over_q * *(b + 89 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 71);
            *(b + 58 * OS1_S1 + 107) =
                prefactor_x * *(b + 58 * OS1_S1 + 79) -
                p_over_q * *(b + 86 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 79);
            *(b + 58 * OS1_S1 + 108) =
                prefactor_x * *(b + 58 * OS1_S1 + 80) -
                p_over_q * *(b + 86 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 80);
            *(b + 58 * OS1_S1 + 109) =
                prefactor_x * *(b + 58 * OS1_S1 + 81) -
                p_over_q * *(b + 86 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 81);
            *(b + 58 * OS1_S1 + 110) = prefactor_y * *(b + 58 * OS1_S1 + 76) -
                                       p_over_q * *(b + 88 * OS1_S1 + 76);
            *(b + 58 * OS1_S1 + 111) =
                prefactor_x * *(b + 58 * OS1_S1 + 83) -
                p_over_q * *(b + 86 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 83);
            *(b + 58 * OS1_S1 + 112) =
                prefactor_y * *(b + 58 * OS1_S1 + 77) -
                p_over_q * *(b + 88 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 50);
            *(b + 58 * OS1_S1 + 113) = prefactor_z * *(b + 58 * OS1_S1 + 77) -
                                       p_over_q * *(b + 89 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 77);
            *(b + 58 * OS1_S1 + 114) =
                prefactor_z * *(b + 58 * OS1_S1 + 78) -
                p_over_q * *(b + 89 * OS1_S1 + 78) +
                one_over_two_q * *(b + 35 * OS1_S1 + 78) +
                one_over_two_q * *(b + 58 * OS1_S1 + 50);
            *(b + 58 * OS1_S1 + 115) =
                prefactor_z * *(b + 58 * OS1_S1 + 79) -
                p_over_q * *(b + 89 * OS1_S1 + 79) +
                one_over_two_q * *(b + 35 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 51);
            *(b + 58 * OS1_S1 + 116) =
                prefactor_y * *(b + 58 * OS1_S1 + 81) -
                p_over_q * *(b + 88 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 54);
            *(b + 58 * OS1_S1 + 117) = prefactor_y * *(b + 58 * OS1_S1 + 82) -
                                       p_over_q * *(b + 88 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 55);
            *(b + 58 * OS1_S1 + 118) = prefactor_y * *(b + 58 * OS1_S1 + 83) -
                                       p_over_q * *(b + 88 * OS1_S1 + 83);
            *(b + 58 * OS1_S1 + 119) =
                prefactor_z * *(b + 58 * OS1_S1 + 83) -
                p_over_q * *(b + 89 * OS1_S1 + 83) +
                one_over_two_q * *(b + 35 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 55);
            *(b + 59 * OS1_S1 + 84) =
                prefactor_x * *(b + 59 * OS1_S1 + 56) -
                p_over_q * *(b + 87 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 59 * OS1_S1 + 35);
            *(b + 59 * OS1_S1 + 85) =
                prefactor_y * *(b + 59 * OS1_S1 + 56) -
                p_over_q * *(b + 90 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 56);
            *(b + 59 * OS1_S1 + 86) = prefactor_z * *(b + 59 * OS1_S1 + 56) -
                                      p_over_q * *(b + 91 * OS1_S1 + 56);
            *(b + 59 * OS1_S1 + 87) =
                prefactor_y * *(b + 59 * OS1_S1 + 57) -
                p_over_q * *(b + 90 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 57) +
                one_over_two_q * *(b + 59 * OS1_S1 + 35);
            *(b + 59 * OS1_S1 + 88) = prefactor_z * *(b + 59 * OS1_S1 + 57) -
                                      p_over_q * *(b + 91 * OS1_S1 + 57);
            *(b + 59 * OS1_S1 + 89) = prefactor_z * *(b + 59 * OS1_S1 + 58) -
                                      p_over_q * *(b + 91 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 35);
            *(b + 59 * OS1_S1 + 90) =
                prefactor_y * *(b + 59 * OS1_S1 + 59) -
                p_over_q * *(b + 90 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 36);
            *(b + 59 * OS1_S1 + 91) = prefactor_z * *(b + 59 * OS1_S1 + 59) -
                                      p_over_q * *(b + 91 * OS1_S1 + 59);
            *(b + 59 * OS1_S1 + 92) =
                prefactor_y * *(b + 59 * OS1_S1 + 61) -
                p_over_q * *(b + 90 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 61);
            *(b + 59 * OS1_S1 + 93) =
                prefactor_z * *(b + 59 * OS1_S1 + 61) -
                p_over_q * *(b + 91 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 37);
            *(b + 59 * OS1_S1 + 94) =
                prefactor_x * *(b + 59 * OS1_S1 + 66) -
                p_over_q * *(b + 87 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 45);
            *(b + 59 * OS1_S1 + 95) = prefactor_z * *(b + 59 * OS1_S1 + 62) -
                                      p_over_q * *(b + 91 * OS1_S1 + 62);
            *(b + 59 * OS1_S1 + 96) = prefactor_z * *(b + 59 * OS1_S1 + 63) -
                                      p_over_q * *(b + 91 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 38);
            *(b + 59 * OS1_S1 + 97) =
                prefactor_y * *(b + 59 * OS1_S1 + 65) -
                p_over_q * *(b + 90 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 65);
            *(b + 59 * OS1_S1 + 98) =
                prefactor_x * *(b + 59 * OS1_S1 + 70) -
                p_over_q * *(b + 87 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 49);
            *(b + 59 * OS1_S1 + 99) =
                prefactor_x * *(b + 59 * OS1_S1 + 71) -
                p_over_q * *(b + 87 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 71) +
                one_over_two_q * *(b + 59 * OS1_S1 + 50);
            *(b + 59 * OS1_S1 + 100) = prefactor_z * *(b + 59 * OS1_S1 + 66) -
                                       p_over_q * *(b + 91 * OS1_S1 + 66);
            *(b + 59 * OS1_S1 + 101) = prefactor_z * *(b + 59 * OS1_S1 + 67) -
                                       p_over_q * *(b + 91 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 41);
            *(b + 59 * OS1_S1 + 102) =
                prefactor_y * *(b + 59 * OS1_S1 + 69) -
                p_over_q * *(b + 90 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 69) +
                one_over_two_q * *(b + 59 * OS1_S1 + 44);
            *(b + 59 * OS1_S1 + 103) =
                prefactor_y * *(b + 59 * OS1_S1 + 70) -
                p_over_q * *(b + 90 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 70);
            *(b + 59 * OS1_S1 + 104) =
                prefactor_x * *(b + 59 * OS1_S1 + 76) -
                p_over_q * *(b + 87 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 76) +
                one_over_two_q * *(b + 59 * OS1_S1 + 55);
            *(b + 59 * OS1_S1 + 105) =
                prefactor_x * *(b + 59 * OS1_S1 + 77) -
                p_over_q * *(b + 87 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 77);
            *(b + 59 * OS1_S1 + 106) = prefactor_z * *(b + 59 * OS1_S1 + 71) -
                                       p_over_q * *(b + 91 * OS1_S1 + 71);
            *(b + 59 * OS1_S1 + 107) =
                prefactor_x * *(b + 59 * OS1_S1 + 79) -
                p_over_q * *(b + 87 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 79);
            *(b + 59 * OS1_S1 + 108) =
                prefactor_x * *(b + 59 * OS1_S1 + 80) -
                p_over_q * *(b + 87 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 80);
            *(b + 59 * OS1_S1 + 109) =
                prefactor_x * *(b + 59 * OS1_S1 + 81) -
                p_over_q * *(b + 87 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 81);
            *(b + 59 * OS1_S1 + 110) =
                prefactor_y * *(b + 59 * OS1_S1 + 76) -
                p_over_q * *(b + 90 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 76);
            *(b + 59 * OS1_S1 + 111) =
                prefactor_x * *(b + 59 * OS1_S1 + 83) -
                p_over_q * *(b + 87 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 83);
            *(b + 59 * OS1_S1 + 112) =
                prefactor_y * *(b + 59 * OS1_S1 + 77) -
                p_over_q * *(b + 90 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 59 * OS1_S1 + 50);
            *(b + 59 * OS1_S1 + 113) = prefactor_z * *(b + 59 * OS1_S1 + 77) -
                                       p_over_q * *(b + 91 * OS1_S1 + 77);
            *(b + 59 * OS1_S1 + 114) = prefactor_z * *(b + 59 * OS1_S1 + 78) -
                                       p_over_q * *(b + 91 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 50);
            *(b + 59 * OS1_S1 + 115) =
                prefactor_z * *(b + 59 * OS1_S1 + 79) -
                p_over_q * *(b + 91 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 51);
            *(b + 59 * OS1_S1 + 116) =
                prefactor_y * *(b + 59 * OS1_S1 + 81) -
                p_over_q * *(b + 90 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 54);
            *(b + 59 * OS1_S1 + 117) =
                prefactor_y * *(b + 59 * OS1_S1 + 82) -
                p_over_q * *(b + 90 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 82) +
                one_over_two_q * *(b + 59 * OS1_S1 + 55);
            *(b + 59 * OS1_S1 + 118) =
                prefactor_y * *(b + 59 * OS1_S1 + 83) -
                p_over_q * *(b + 90 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 83);
            *(b + 59 * OS1_S1 + 119) =
                prefactor_z * *(b + 59 * OS1_S1 + 83) -
                p_over_q * *(b + 91 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 59 * OS1_S1 + 55);
            *(b + 60 * OS1_S1 + 84) =
                prefactor_x * *(b + 60 * OS1_S1 + 56) -
                p_over_q * *(b + 88 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 60 * OS1_S1 + 35);
            *(b + 60 * OS1_S1 + 85) = prefactor_y * *(b + 60 * OS1_S1 + 56) -
                                      p_over_q * *(b + 91 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 56);
            *(b + 60 * OS1_S1 + 86) = prefactor_z * *(b + 60 * OS1_S1 + 56) -
                                      p_over_q * *(b + 92 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 56);
            *(b + 60 * OS1_S1 + 87) = prefactor_y * *(b + 60 * OS1_S1 + 57) -
                                      p_over_q * *(b + 91 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 35);
            *(b + 60 * OS1_S1 + 88) = prefactor_z * *(b + 60 * OS1_S1 + 57) -
                                      p_over_q * *(b + 92 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 57);
            *(b + 60 * OS1_S1 + 89) = prefactor_z * *(b + 60 * OS1_S1 + 58) -
                                      p_over_q * *(b + 92 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 35);
            *(b + 60 * OS1_S1 + 90) =
                prefactor_y * *(b + 60 * OS1_S1 + 59) -
                p_over_q * *(b + 91 * OS1_S1 + 59) +
                one_over_two_q * *(b + 37 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 36);
            *(b + 60 * OS1_S1 + 91) = prefactor_z * *(b + 60 * OS1_S1 + 59) -
                                      p_over_q * *(b + 92 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 59);
            *(b + 60 * OS1_S1 + 92) = prefactor_y * *(b + 60 * OS1_S1 + 61) -
                                      p_over_q * *(b + 91 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 61);
            *(b + 60 * OS1_S1 + 93) =
                prefactor_z * *(b + 60 * OS1_S1 + 61) -
                p_over_q * *(b + 92 * OS1_S1 + 61) +
                one_over_two_q * *(b + 36 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 37);
            *(b + 60 * OS1_S1 + 94) =
                prefactor_x * *(b + 60 * OS1_S1 + 66) -
                p_over_q * *(b + 88 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 45);
            *(b + 60 * OS1_S1 + 95) = prefactor_z * *(b + 60 * OS1_S1 + 62) -
                                      p_over_q * *(b + 92 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 62);
            *(b + 60 * OS1_S1 + 96) = prefactor_z * *(b + 60 * OS1_S1 + 63) -
                                      p_over_q * *(b + 92 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 36 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 60 * OS1_S1 + 38);
            *(b + 60 * OS1_S1 + 97) = prefactor_y * *(b + 60 * OS1_S1 + 65) -
                                      p_over_q * *(b + 91 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 37 * OS1_S1 + 65);
            *(b + 60 * OS1_S1 + 98) =
                prefactor_x * *(b + 60 * OS1_S1 + 70) -
                p_over_q * *(b + 88 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 49);
            *(b + 60 * OS1_S1 + 99) =
                prefactor_x * *(b + 60 * OS1_S1 + 71) -
                p_over_q * *(b + 88 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 71) +
                one_over_two_q * *(b + 60 * OS1_S1 + 50);
            *(b + 60 * OS1_S1 + 100) = prefactor_z * *(b + 60 * OS1_S1 + 66) -
                                       p_over_q * *(b + 92 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 66);
            *(b + 60 * OS1_S1 + 101) =
                prefactor_z * *(b + 60 * OS1_S1 + 67) -
                p_over_q * *(b + 92 * OS1_S1 + 67) +
                one_over_two_q * *(b + 36 * OS1_S1 + 67) +
                one_over_two_q * *(b + 60 * OS1_S1 + 41);
            *(b + 60 * OS1_S1 + 102) =
                prefactor_y * *(b + 60 * OS1_S1 + 69) -
                p_over_q * *(b + 91 * OS1_S1 + 69) +
                one_over_two_q * *(b + 37 * OS1_S1 + 69) +
                one_over_two_q * *(b + 60 * OS1_S1 + 44);
            *(b + 60 * OS1_S1 + 103) = prefactor_y * *(b + 60 * OS1_S1 + 70) -
                                       p_over_q * *(b + 91 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 70);
            *(b + 60 * OS1_S1 + 104) =
                prefactor_x * *(b + 60 * OS1_S1 + 76) -
                p_over_q * *(b + 88 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 76) +
                one_over_two_q * *(b + 60 * OS1_S1 + 55);
            *(b + 60 * OS1_S1 + 105) =
                prefactor_x * *(b + 60 * OS1_S1 + 77) -
                p_over_q * *(b + 88 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 77);
            *(b + 60 * OS1_S1 + 106) = prefactor_z * *(b + 60 * OS1_S1 + 71) -
                                       p_over_q * *(b + 92 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 71);
            *(b + 60 * OS1_S1 + 107) =
                prefactor_x * *(b + 60 * OS1_S1 + 79) -
                p_over_q * *(b + 88 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 79);
            *(b + 60 * OS1_S1 + 108) =
                prefactor_x * *(b + 60 * OS1_S1 + 80) -
                p_over_q * *(b + 88 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 80);
            *(b + 60 * OS1_S1 + 109) =
                prefactor_x * *(b + 60 * OS1_S1 + 81) -
                p_over_q * *(b + 88 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 81);
            *(b + 60 * OS1_S1 + 110) = prefactor_y * *(b + 60 * OS1_S1 + 76) -
                                       p_over_q * *(b + 91 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 76);
            *(b + 60 * OS1_S1 + 111) =
                prefactor_x * *(b + 60 * OS1_S1 + 83) -
                p_over_q * *(b + 88 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 83);
            *(b + 60 * OS1_S1 + 112) =
                prefactor_y * *(b + 60 * OS1_S1 + 77) -
                p_over_q * *(b + 91 * OS1_S1 + 77) +
                one_over_two_q * *(b + 37 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 60 * OS1_S1 + 50);
            *(b + 60 * OS1_S1 + 113) = prefactor_z * *(b + 60 * OS1_S1 + 77) -
                                       p_over_q * *(b + 92 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 77);
            *(b + 60 * OS1_S1 + 114) =
                prefactor_z * *(b + 60 * OS1_S1 + 78) -
                p_over_q * *(b + 92 * OS1_S1 + 78) +
                one_over_two_q * *(b + 36 * OS1_S1 + 78) +
                one_over_two_q * *(b + 60 * OS1_S1 + 50);
            *(b + 60 * OS1_S1 + 115) =
                prefactor_z * *(b + 60 * OS1_S1 + 79) -
                p_over_q * *(b + 92 * OS1_S1 + 79) +
                one_over_two_q * *(b + 36 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 51);
            *(b + 60 * OS1_S1 + 116) =
                prefactor_y * *(b + 60 * OS1_S1 + 81) -
                p_over_q * *(b + 91 * OS1_S1 + 81) +
                one_over_two_q * *(b + 37 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 54);
            *(b + 60 * OS1_S1 + 117) =
                prefactor_y * *(b + 60 * OS1_S1 + 82) -
                p_over_q * *(b + 91 * OS1_S1 + 82) +
                one_over_two_q * *(b + 37 * OS1_S1 + 82) +
                one_over_two_q * *(b + 60 * OS1_S1 + 55);
            *(b + 60 * OS1_S1 + 118) = prefactor_y * *(b + 60 * OS1_S1 + 83) -
                                       p_over_q * *(b + 91 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 83);
            *(b + 60 * OS1_S1 + 119) =
                prefactor_z * *(b + 60 * OS1_S1 + 83) -
                p_over_q * *(b + 92 * OS1_S1 + 83) +
                one_over_two_q * *(b + 36 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 60 * OS1_S1 + 55);
            *(b + 61 * OS1_S1 + 84) =
                prefactor_x * *(b + 61 * OS1_S1 + 56) -
                p_over_q * *(b + 89 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 61 * OS1_S1 + 35);
            *(b + 61 * OS1_S1 + 85) = prefactor_y * *(b + 61 * OS1_S1 + 56) -
                                      p_over_q * *(b + 92 * OS1_S1 + 56);
            *(b + 61 * OS1_S1 + 86) =
                prefactor_z * *(b + 61 * OS1_S1 + 56) -
                p_over_q * *(b + 93 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 56);
            *(b + 61 * OS1_S1 + 87) = prefactor_y * *(b + 61 * OS1_S1 + 57) -
                                      p_over_q * *(b + 92 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 35);
            *(b + 61 * OS1_S1 + 88) = prefactor_y * *(b + 61 * OS1_S1 + 58) -
                                      p_over_q * *(b + 92 * OS1_S1 + 58);
            *(b + 61 * OS1_S1 + 89) =
                prefactor_z * *(b + 61 * OS1_S1 + 58) -
                p_over_q * *(b + 93 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 58) +
                one_over_two_q * *(b + 61 * OS1_S1 + 35);
            *(b + 61 * OS1_S1 + 90) =
                prefactor_y * *(b + 61 * OS1_S1 + 59) -
                p_over_q * *(b + 92 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 36);
            *(b + 61 * OS1_S1 + 91) =
                prefactor_z * *(b + 61 * OS1_S1 + 59) -
                p_over_q * *(b + 93 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 59);
            *(b + 61 * OS1_S1 + 92) = prefactor_y * *(b + 61 * OS1_S1 + 61) -
                                      p_over_q * *(b + 92 * OS1_S1 + 61);
            *(b + 61 * OS1_S1 + 93) =
                prefactor_z * *(b + 61 * OS1_S1 + 61) -
                p_over_q * *(b + 93 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 37);
            *(b + 61 * OS1_S1 + 94) =
                prefactor_x * *(b + 61 * OS1_S1 + 66) -
                p_over_q * *(b + 89 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 45);
            *(b + 61 * OS1_S1 + 95) =
                prefactor_z * *(b + 61 * OS1_S1 + 62) -
                p_over_q * *(b + 93 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 62);
            *(b + 61 * OS1_S1 + 96) = prefactor_y * *(b + 61 * OS1_S1 + 64) -
                                      p_over_q * *(b + 92 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 40);
            *(b + 61 * OS1_S1 + 97) = prefactor_y * *(b + 61 * OS1_S1 + 65) -
                                      p_over_q * *(b + 92 * OS1_S1 + 65);
            *(b + 61 * OS1_S1 + 98) =
                prefactor_x * *(b + 61 * OS1_S1 + 70) -
                p_over_q * *(b + 89 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 49);
            *(b + 61 * OS1_S1 + 99) =
                prefactor_x * *(b + 61 * OS1_S1 + 71) -
                p_over_q * *(b + 89 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 71) +
                one_over_two_q * *(b + 61 * OS1_S1 + 50);
            *(b + 61 * OS1_S1 + 100) =
                prefactor_z * *(b + 61 * OS1_S1 + 66) -
                p_over_q * *(b + 93 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 66);
            *(b + 61 * OS1_S1 + 101) =
                prefactor_z * *(b + 61 * OS1_S1 + 67) -
                p_over_q * *(b + 93 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 67) +
                one_over_two_q * *(b + 61 * OS1_S1 + 41);
            *(b + 61 * OS1_S1 + 102) = prefactor_y * *(b + 61 * OS1_S1 + 69) -
                                       p_over_q * *(b + 92 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 44);
            *(b + 61 * OS1_S1 + 103) = prefactor_y * *(b + 61 * OS1_S1 + 70) -
                                       p_over_q * *(b + 92 * OS1_S1 + 70);
            *(b + 61 * OS1_S1 + 104) =
                prefactor_x * *(b + 61 * OS1_S1 + 76) -
                p_over_q * *(b + 89 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 76) +
                one_over_two_q * *(b + 61 * OS1_S1 + 55);
            *(b + 61 * OS1_S1 + 105) =
                prefactor_x * *(b + 61 * OS1_S1 + 77) -
                p_over_q * *(b + 89 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 77);
            *(b + 61 * OS1_S1 + 106) =
                prefactor_z * *(b + 61 * OS1_S1 + 71) -
                p_over_q * *(b + 93 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 71);
            *(b + 61 * OS1_S1 + 107) =
                prefactor_x * *(b + 61 * OS1_S1 + 79) -
                p_over_q * *(b + 89 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 79);
            *(b + 61 * OS1_S1 + 108) =
                prefactor_x * *(b + 61 * OS1_S1 + 80) -
                p_over_q * *(b + 89 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 80);
            *(b + 61 * OS1_S1 + 109) =
                prefactor_x * *(b + 61 * OS1_S1 + 81) -
                p_over_q * *(b + 89 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 81);
            *(b + 61 * OS1_S1 + 110) = prefactor_y * *(b + 61 * OS1_S1 + 76) -
                                       p_over_q * *(b + 92 * OS1_S1 + 76);
            *(b + 61 * OS1_S1 + 111) =
                prefactor_x * *(b + 61 * OS1_S1 + 83) -
                p_over_q * *(b + 89 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 83);
            *(b + 61 * OS1_S1 + 112) =
                prefactor_y * *(b + 61 * OS1_S1 + 77) -
                p_over_q * *(b + 92 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 61 * OS1_S1 + 50);
            *(b + 61 * OS1_S1 + 113) =
                prefactor_z * *(b + 61 * OS1_S1 + 77) -
                p_over_q * *(b + 93 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 77);
            *(b + 61 * OS1_S1 + 114) =
                prefactor_z * *(b + 61 * OS1_S1 + 78) -
                p_over_q * *(b + 93 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 78) +
                one_over_two_q * *(b + 61 * OS1_S1 + 50);
            *(b + 61 * OS1_S1 + 115) =
                prefactor_z * *(b + 61 * OS1_S1 + 79) -
                p_over_q * *(b + 93 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 51);
            *(b + 61 * OS1_S1 + 116) =
                prefactor_y * *(b + 61 * OS1_S1 + 81) -
                p_over_q * *(b + 92 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 54);
            *(b + 61 * OS1_S1 + 117) = prefactor_y * *(b + 61 * OS1_S1 + 82) -
                                       p_over_q * *(b + 92 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 55);
            *(b + 61 * OS1_S1 + 118) = prefactor_y * *(b + 61 * OS1_S1 + 83) -
                                       p_over_q * *(b + 92 * OS1_S1 + 83);
            *(b + 61 * OS1_S1 + 119) =
                prefactor_z * *(b + 61 * OS1_S1 + 83) -
                p_over_q * *(b + 93 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 61 * OS1_S1 + 55);
            *(b + 62 * OS1_S1 + 84) =
                prefactor_x * *(b + 62 * OS1_S1 + 56) -
                p_over_q * *(b + 90 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 62 * OS1_S1 + 35);
            *(b + 62 * OS1_S1 + 85) =
                prefactor_y * *(b + 62 * OS1_S1 + 56) -
                p_over_q * *(b + 94 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 56);
            *(b + 62 * OS1_S1 + 86) = prefactor_z * *(b + 62 * OS1_S1 + 56) -
                                      p_over_q * *(b + 95 * OS1_S1 + 56);
            *(b + 62 * OS1_S1 + 87) =
                prefactor_y * *(b + 62 * OS1_S1 + 57) -
                p_over_q * *(b + 94 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 57) +
                one_over_two_q * *(b + 62 * OS1_S1 + 35);
            *(b + 62 * OS1_S1 + 88) = prefactor_z * *(b + 62 * OS1_S1 + 57) -
                                      p_over_q * *(b + 95 * OS1_S1 + 57);
            *(b + 62 * OS1_S1 + 89) = prefactor_z * *(b + 62 * OS1_S1 + 58) -
                                      p_over_q * *(b + 95 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 35);
            *(b + 62 * OS1_S1 + 90) =
                prefactor_y * *(b + 62 * OS1_S1 + 59) -
                p_over_q * *(b + 94 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 36);
            *(b + 62 * OS1_S1 + 91) = prefactor_z * *(b + 62 * OS1_S1 + 59) -
                                      p_over_q * *(b + 95 * OS1_S1 + 59);
            *(b + 62 * OS1_S1 + 92) =
                prefactor_y * *(b + 62 * OS1_S1 + 61) -
                p_over_q * *(b + 94 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 61);
            *(b + 62 * OS1_S1 + 93) =
                prefactor_z * *(b + 62 * OS1_S1 + 61) -
                p_over_q * *(b + 95 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 37);
            *(b + 62 * OS1_S1 + 94) =
                prefactor_x * *(b + 62 * OS1_S1 + 66) -
                p_over_q * *(b + 90 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 45);
            *(b + 62 * OS1_S1 + 95) = prefactor_z * *(b + 62 * OS1_S1 + 62) -
                                      p_over_q * *(b + 95 * OS1_S1 + 62);
            *(b + 62 * OS1_S1 + 96) = prefactor_z * *(b + 62 * OS1_S1 + 63) -
                                      p_over_q * *(b + 95 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 38);
            *(b + 62 * OS1_S1 + 97) =
                prefactor_y * *(b + 62 * OS1_S1 + 65) -
                p_over_q * *(b + 94 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 65);
            *(b + 62 * OS1_S1 + 98) =
                prefactor_x * *(b + 62 * OS1_S1 + 70) -
                p_over_q * *(b + 90 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 49);
            *(b + 62 * OS1_S1 + 99) =
                prefactor_x * *(b + 62 * OS1_S1 + 71) -
                p_over_q * *(b + 90 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 71) +
                one_over_two_q * *(b + 62 * OS1_S1 + 50);
            *(b + 62 * OS1_S1 + 100) = prefactor_z * *(b + 62 * OS1_S1 + 66) -
                                       p_over_q * *(b + 95 * OS1_S1 + 66);
            *(b + 62 * OS1_S1 + 101) = prefactor_z * *(b + 62 * OS1_S1 + 67) -
                                       p_over_q * *(b + 95 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 41);
            *(b + 62 * OS1_S1 + 102) =
                prefactor_y * *(b + 62 * OS1_S1 + 69) -
                p_over_q * *(b + 94 * OS1_S1 + 69) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 69) +
                one_over_two_q * *(b + 62 * OS1_S1 + 44);
            *(b + 62 * OS1_S1 + 103) =
                prefactor_y * *(b + 62 * OS1_S1 + 70) -
                p_over_q * *(b + 94 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 70);
            *(b + 62 * OS1_S1 + 104) =
                prefactor_x * *(b + 62 * OS1_S1 + 76) -
                p_over_q * *(b + 90 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 76) +
                one_over_two_q * *(b + 62 * OS1_S1 + 55);
            *(b + 62 * OS1_S1 + 105) =
                prefactor_x * *(b + 62 * OS1_S1 + 77) -
                p_over_q * *(b + 90 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 77);
            *(b + 62 * OS1_S1 + 106) = prefactor_z * *(b + 62 * OS1_S1 + 71) -
                                       p_over_q * *(b + 95 * OS1_S1 + 71);
            *(b + 62 * OS1_S1 + 107) =
                prefactor_x * *(b + 62 * OS1_S1 + 79) -
                p_over_q * *(b + 90 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 79);
            *(b + 62 * OS1_S1 + 108) =
                prefactor_x * *(b + 62 * OS1_S1 + 80) -
                p_over_q * *(b + 90 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 80);
            *(b + 62 * OS1_S1 + 109) =
                prefactor_x * *(b + 62 * OS1_S1 + 81) -
                p_over_q * *(b + 90 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 81);
            *(b + 62 * OS1_S1 + 110) =
                prefactor_y * *(b + 62 * OS1_S1 + 76) -
                p_over_q * *(b + 94 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 76);
            *(b + 62 * OS1_S1 + 111) =
                prefactor_x * *(b + 62 * OS1_S1 + 83) -
                p_over_q * *(b + 90 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 83);
            *(b + 62 * OS1_S1 + 112) =
                prefactor_y * *(b + 62 * OS1_S1 + 77) -
                p_over_q * *(b + 94 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 62 * OS1_S1 + 50);
            *(b + 62 * OS1_S1 + 113) = prefactor_z * *(b + 62 * OS1_S1 + 77) -
                                       p_over_q * *(b + 95 * OS1_S1 + 77);
            *(b + 62 * OS1_S1 + 114) = prefactor_z * *(b + 62 * OS1_S1 + 78) -
                                       p_over_q * *(b + 95 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 50);
            *(b + 62 * OS1_S1 + 115) =
                prefactor_z * *(b + 62 * OS1_S1 + 79) -
                p_over_q * *(b + 95 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 51);
            *(b + 62 * OS1_S1 + 116) =
                prefactor_y * *(b + 62 * OS1_S1 + 81) -
                p_over_q * *(b + 94 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 54);
            *(b + 62 * OS1_S1 + 117) =
                prefactor_y * *(b + 62 * OS1_S1 + 82) -
                p_over_q * *(b + 94 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 82) +
                one_over_two_q * *(b + 62 * OS1_S1 + 55);
            *(b + 62 * OS1_S1 + 118) =
                prefactor_y * *(b + 62 * OS1_S1 + 83) -
                p_over_q * *(b + 94 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 83);
            *(b + 62 * OS1_S1 + 119) =
                prefactor_z * *(b + 62 * OS1_S1 + 83) -
                p_over_q * *(b + 95 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 62 * OS1_S1 + 55);
            *(b + 63 * OS1_S1 + 84) =
                prefactor_x * *(b + 63 * OS1_S1 + 56) -
                p_over_q * *(b + 91 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 63 * OS1_S1 + 35);
            *(b + 63 * OS1_S1 + 85) =
                prefactor_y * *(b + 63 * OS1_S1 + 56) -
                p_over_q * *(b + 95 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 56);
            *(b + 63 * OS1_S1 + 86) = prefactor_z * *(b + 63 * OS1_S1 + 56) -
                                      p_over_q * *(b + 96 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 56);
            *(b + 63 * OS1_S1 + 87) =
                prefactor_y * *(b + 63 * OS1_S1 + 57) -
                p_over_q * *(b + 95 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 57) +
                one_over_two_q * *(b + 63 * OS1_S1 + 35);
            *(b + 63 * OS1_S1 + 88) = prefactor_z * *(b + 63 * OS1_S1 + 57) -
                                      p_over_q * *(b + 96 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 57);
            *(b + 63 * OS1_S1 + 89) = prefactor_z * *(b + 63 * OS1_S1 + 58) -
                                      p_over_q * *(b + 96 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 63 * OS1_S1 + 35);
            *(b + 63 * OS1_S1 + 90) =
                prefactor_y * *(b + 63 * OS1_S1 + 59) -
                p_over_q * *(b + 95 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 36);
            *(b + 63 * OS1_S1 + 91) = prefactor_z * *(b + 63 * OS1_S1 + 59) -
                                      p_over_q * *(b + 96 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 59);
            *(b + 63 * OS1_S1 + 92) =
                prefactor_y * *(b + 63 * OS1_S1 + 61) -
                p_over_q * *(b + 95 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 61);
            *(b + 63 * OS1_S1 + 93) =
                prefactor_z * *(b + 63 * OS1_S1 + 61) -
                p_over_q * *(b + 96 * OS1_S1 + 61) +
                one_over_two_q * *(b + 38 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 37);
            *(b + 63 * OS1_S1 + 94) =
                prefactor_x * *(b + 63 * OS1_S1 + 66) -
                p_over_q * *(b + 91 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 45);
            *(b + 63 * OS1_S1 + 95) = prefactor_z * *(b + 63 * OS1_S1 + 62) -
                                      p_over_q * *(b + 96 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 62);
            *(b + 63 * OS1_S1 + 96) = prefactor_z * *(b + 63 * OS1_S1 + 63) -
                                      p_over_q * *(b + 96 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 38 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 63 * OS1_S1 + 38);
            *(b + 63 * OS1_S1 + 97) =
                prefactor_y * *(b + 63 * OS1_S1 + 65) -
                p_over_q * *(b + 95 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 65);
            *(b + 63 * OS1_S1 + 98) =
                prefactor_x * *(b + 63 * OS1_S1 + 70) -
                p_over_q * *(b + 91 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 49);
            *(b + 63 * OS1_S1 + 99) =
                prefactor_x * *(b + 63 * OS1_S1 + 71) -
                p_over_q * *(b + 91 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 71) +
                one_over_two_q * *(b + 63 * OS1_S1 + 50);
            *(b + 63 * OS1_S1 + 100) = prefactor_z * *(b + 63 * OS1_S1 + 66) -
                                       p_over_q * *(b + 96 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 66);
            *(b + 63 * OS1_S1 + 101) =
                prefactor_z * *(b + 63 * OS1_S1 + 67) -
                p_over_q * *(b + 96 * OS1_S1 + 67) +
                one_over_two_q * *(b + 38 * OS1_S1 + 67) +
                one_over_two_q * *(b + 63 * OS1_S1 + 41);
            *(b + 63 * OS1_S1 + 102) =
                prefactor_y * *(b + 63 * OS1_S1 + 69) -
                p_over_q * *(b + 95 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 69) +
                one_over_two_q * *(b + 63 * OS1_S1 + 44);
            *(b + 63 * OS1_S1 + 103) =
                prefactor_y * *(b + 63 * OS1_S1 + 70) -
                p_over_q * *(b + 95 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 70);
            *(b + 63 * OS1_S1 + 104) =
                prefactor_x * *(b + 63 * OS1_S1 + 76) -
                p_over_q * *(b + 91 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 76) +
                one_over_two_q * *(b + 63 * OS1_S1 + 55);
            *(b + 63 * OS1_S1 + 105) =
                prefactor_x * *(b + 63 * OS1_S1 + 77) -
                p_over_q * *(b + 91 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 77);
            *(b + 63 * OS1_S1 + 106) = prefactor_z * *(b + 63 * OS1_S1 + 71) -
                                       p_over_q * *(b + 96 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 71);
            *(b + 63 * OS1_S1 + 107) =
                prefactor_x * *(b + 63 * OS1_S1 + 79) -
                p_over_q * *(b + 91 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 79);
            *(b + 63 * OS1_S1 + 108) =
                prefactor_x * *(b + 63 * OS1_S1 + 80) -
                p_over_q * *(b + 91 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 80);
            *(b + 63 * OS1_S1 + 109) =
                prefactor_x * *(b + 63 * OS1_S1 + 81) -
                p_over_q * *(b + 91 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 81);
            *(b + 63 * OS1_S1 + 110) =
                prefactor_y * *(b + 63 * OS1_S1 + 76) -
                p_over_q * *(b + 95 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 76);
            *(b + 63 * OS1_S1 + 111) =
                prefactor_x * *(b + 63 * OS1_S1 + 83) -
                p_over_q * *(b + 91 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 83);
            *(b + 63 * OS1_S1 + 112) =
                prefactor_y * *(b + 63 * OS1_S1 + 77) -
                p_over_q * *(b + 95 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 63 * OS1_S1 + 50);
            *(b + 63 * OS1_S1 + 113) = prefactor_z * *(b + 63 * OS1_S1 + 77) -
                                       p_over_q * *(b + 96 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 77);
            *(b + 63 * OS1_S1 + 114) =
                prefactor_z * *(b + 63 * OS1_S1 + 78) -
                p_over_q * *(b + 96 * OS1_S1 + 78) +
                one_over_two_q * *(b + 38 * OS1_S1 + 78) +
                one_over_two_q * *(b + 63 * OS1_S1 + 50);
            *(b + 63 * OS1_S1 + 115) =
                prefactor_z * *(b + 63 * OS1_S1 + 79) -
                p_over_q * *(b + 96 * OS1_S1 + 79) +
                one_over_two_q * *(b + 38 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 51);
            *(b + 63 * OS1_S1 + 116) =
                prefactor_y * *(b + 63 * OS1_S1 + 81) -
                p_over_q * *(b + 95 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 54);
            *(b + 63 * OS1_S1 + 117) =
                prefactor_y * *(b + 63 * OS1_S1 + 82) -
                p_over_q * *(b + 95 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 82) +
                one_over_two_q * *(b + 63 * OS1_S1 + 55);
            *(b + 63 * OS1_S1 + 118) =
                prefactor_y * *(b + 63 * OS1_S1 + 83) -
                p_over_q * *(b + 95 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 83);
            *(b + 63 * OS1_S1 + 119) =
                prefactor_z * *(b + 63 * OS1_S1 + 83) -
                p_over_q * *(b + 96 * OS1_S1 + 83) +
                one_over_two_q * *(b + 38 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 63 * OS1_S1 + 55);
            *(b + 64 * OS1_S1 + 84) =
                prefactor_x * *(b + 64 * OS1_S1 + 56) -
                p_over_q * *(b + 92 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 64 * OS1_S1 + 35);
            *(b + 64 * OS1_S1 + 85) = prefactor_y * *(b + 64 * OS1_S1 + 56) -
                                      p_over_q * *(b + 96 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 56);
            *(b + 64 * OS1_S1 + 86) =
                prefactor_z * *(b + 64 * OS1_S1 + 56) -
                p_over_q * *(b + 97 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 56);
            *(b + 64 * OS1_S1 + 87) = prefactor_y * *(b + 64 * OS1_S1 + 57) -
                                      p_over_q * *(b + 96 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 64 * OS1_S1 + 35);
            *(b + 64 * OS1_S1 + 88) = prefactor_y * *(b + 64 * OS1_S1 + 58) -
                                      p_over_q * *(b + 96 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 58);
            *(b + 64 * OS1_S1 + 89) =
                prefactor_z * *(b + 64 * OS1_S1 + 58) -
                p_over_q * *(b + 97 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 58) +
                one_over_two_q * *(b + 64 * OS1_S1 + 35);
            *(b + 64 * OS1_S1 + 90) =
                prefactor_y * *(b + 64 * OS1_S1 + 59) -
                p_over_q * *(b + 96 * OS1_S1 + 59) +
                one_over_two_q * *(b + 40 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 36);
            *(b + 64 * OS1_S1 + 91) =
                prefactor_z * *(b + 64 * OS1_S1 + 59) -
                p_over_q * *(b + 97 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 59);
            *(b + 64 * OS1_S1 + 92) = prefactor_y * *(b + 64 * OS1_S1 + 61) -
                                      p_over_q * *(b + 96 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 61);
            *(b + 64 * OS1_S1 + 93) =
                prefactor_z * *(b + 64 * OS1_S1 + 61) -
                p_over_q * *(b + 97 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 37);
            *(b + 64 * OS1_S1 + 94) =
                prefactor_x * *(b + 64 * OS1_S1 + 66) -
                p_over_q * *(b + 92 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 45);
            *(b + 64 * OS1_S1 + 95) =
                prefactor_z * *(b + 64 * OS1_S1 + 62) -
                p_over_q * *(b + 97 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 62);
            *(b + 64 * OS1_S1 + 96) = prefactor_y * *(b + 64 * OS1_S1 + 64) -
                                      p_over_q * *(b + 96 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 64 * OS1_S1 + 40);
            *(b + 64 * OS1_S1 + 97) = prefactor_y * *(b + 64 * OS1_S1 + 65) -
                                      p_over_q * *(b + 96 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 40 * OS1_S1 + 65);
            *(b + 64 * OS1_S1 + 98) =
                prefactor_x * *(b + 64 * OS1_S1 + 70) -
                p_over_q * *(b + 92 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 49);
            *(b + 64 * OS1_S1 + 99) =
                prefactor_x * *(b + 64 * OS1_S1 + 71) -
                p_over_q * *(b + 92 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 71) +
                one_over_two_q * *(b + 64 * OS1_S1 + 50);
            *(b + 64 * OS1_S1 + 100) =
                prefactor_z * *(b + 64 * OS1_S1 + 66) -
                p_over_q * *(b + 97 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 66);
            *(b + 64 * OS1_S1 + 101) =
                prefactor_z * *(b + 64 * OS1_S1 + 67) -
                p_over_q * *(b + 97 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 67) +
                one_over_two_q * *(b + 64 * OS1_S1 + 41);
            *(b + 64 * OS1_S1 + 102) =
                prefactor_y * *(b + 64 * OS1_S1 + 69) -
                p_over_q * *(b + 96 * OS1_S1 + 69) +
                one_over_two_q * *(b + 40 * OS1_S1 + 69) +
                one_over_two_q * *(b + 64 * OS1_S1 + 44);
            *(b + 64 * OS1_S1 + 103) = prefactor_y * *(b + 64 * OS1_S1 + 70) -
                                       p_over_q * *(b + 96 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 70);
            *(b + 64 * OS1_S1 + 104) =
                prefactor_x * *(b + 64 * OS1_S1 + 76) -
                p_over_q * *(b + 92 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 76) +
                one_over_two_q * *(b + 64 * OS1_S1 + 55);
            *(b + 64 * OS1_S1 + 105) =
                prefactor_x * *(b + 64 * OS1_S1 + 77) -
                p_over_q * *(b + 92 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 77);
            *(b + 64 * OS1_S1 + 106) =
                prefactor_z * *(b + 64 * OS1_S1 + 71) -
                p_over_q * *(b + 97 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 71);
            *(b + 64 * OS1_S1 + 107) =
                prefactor_x * *(b + 64 * OS1_S1 + 79) -
                p_over_q * *(b + 92 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 79);
            *(b + 64 * OS1_S1 + 108) =
                prefactor_x * *(b + 64 * OS1_S1 + 80) -
                p_over_q * *(b + 92 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 80);
            *(b + 64 * OS1_S1 + 109) =
                prefactor_x * *(b + 64 * OS1_S1 + 81) -
                p_over_q * *(b + 92 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 81);
            *(b + 64 * OS1_S1 + 110) = prefactor_y * *(b + 64 * OS1_S1 + 76) -
                                       p_over_q * *(b + 96 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 76);
            *(b + 64 * OS1_S1 + 111) =
                prefactor_x * *(b + 64 * OS1_S1 + 83) -
                p_over_q * *(b + 92 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 83);
            *(b + 64 * OS1_S1 + 112) =
                prefactor_y * *(b + 64 * OS1_S1 + 77) -
                p_over_q * *(b + 96 * OS1_S1 + 77) +
                one_over_two_q * *(b + 40 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 64 * OS1_S1 + 50);
            *(b + 64 * OS1_S1 + 113) =
                prefactor_z * *(b + 64 * OS1_S1 + 77) -
                p_over_q * *(b + 97 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 77);
            *(b + 64 * OS1_S1 + 114) =
                prefactor_z * *(b + 64 * OS1_S1 + 78) -
                p_over_q * *(b + 97 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 78) +
                one_over_two_q * *(b + 64 * OS1_S1 + 50);
            *(b + 64 * OS1_S1 + 115) =
                prefactor_z * *(b + 64 * OS1_S1 + 79) -
                p_over_q * *(b + 97 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 51);
            *(b + 64 * OS1_S1 + 116) =
                prefactor_y * *(b + 64 * OS1_S1 + 81) -
                p_over_q * *(b + 96 * OS1_S1 + 81) +
                one_over_two_q * *(b + 40 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 54);
            *(b + 64 * OS1_S1 + 117) =
                prefactor_y * *(b + 64 * OS1_S1 + 82) -
                p_over_q * *(b + 96 * OS1_S1 + 82) +
                one_over_two_q * *(b + 40 * OS1_S1 + 82) +
                one_over_two_q * *(b + 64 * OS1_S1 + 55);
            *(b + 64 * OS1_S1 + 118) = prefactor_y * *(b + 64 * OS1_S1 + 83) -
                                       p_over_q * *(b + 96 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 83);
            *(b + 64 * OS1_S1 + 119) =
                prefactor_z * *(b + 64 * OS1_S1 + 83) -
                p_over_q * *(b + 97 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 64 * OS1_S1 + 55);
            *(b + 65 * OS1_S1 + 84) =
                prefactor_x * *(b + 65 * OS1_S1 + 56) -
                p_over_q * *(b + 93 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 65 * OS1_S1 + 35);
            *(b + 65 * OS1_S1 + 85) = prefactor_y * *(b + 65 * OS1_S1 + 56) -
                                      p_over_q * *(b + 97 * OS1_S1 + 56);
            *(b + 65 * OS1_S1 + 86) =
                prefactor_z * *(b + 65 * OS1_S1 + 56) -
                p_over_q * *(b + 98 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 56);
            *(b + 65 * OS1_S1 + 87) = prefactor_y * *(b + 65 * OS1_S1 + 57) -
                                      p_over_q * *(b + 97 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 35);
            *(b + 65 * OS1_S1 + 88) = prefactor_y * *(b + 65 * OS1_S1 + 58) -
                                      p_over_q * *(b + 97 * OS1_S1 + 58);
            *(b + 65 * OS1_S1 + 89) =
                prefactor_z * *(b + 65 * OS1_S1 + 58) -
                p_over_q * *(b + 98 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 58) +
                one_over_two_q * *(b + 65 * OS1_S1 + 35);
            *(b + 65 * OS1_S1 + 90) =
                prefactor_y * *(b + 65 * OS1_S1 + 59) -
                p_over_q * *(b + 97 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 36);
            *(b + 65 * OS1_S1 + 91) =
                prefactor_z * *(b + 65 * OS1_S1 + 59) -
                p_over_q * *(b + 98 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 59);
            *(b + 65 * OS1_S1 + 92) = prefactor_y * *(b + 65 * OS1_S1 + 61) -
                                      p_over_q * *(b + 97 * OS1_S1 + 61);
            *(b + 65 * OS1_S1 + 93) =
                prefactor_z * *(b + 65 * OS1_S1 + 61) -
                p_over_q * *(b + 98 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 37);
            *(b + 65 * OS1_S1 + 94) =
                prefactor_x * *(b + 65 * OS1_S1 + 66) -
                p_over_q * *(b + 93 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 45);
            *(b + 65 * OS1_S1 + 95) =
                prefactor_z * *(b + 65 * OS1_S1 + 62) -
                p_over_q * *(b + 98 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 62);
            *(b + 65 * OS1_S1 + 96) = prefactor_y * *(b + 65 * OS1_S1 + 64) -
                                      p_over_q * *(b + 97 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 40);
            *(b + 65 * OS1_S1 + 97) = prefactor_y * *(b + 65 * OS1_S1 + 65) -
                                      p_over_q * *(b + 97 * OS1_S1 + 65);
            *(b + 65 * OS1_S1 + 98) =
                prefactor_x * *(b + 65 * OS1_S1 + 70) -
                p_over_q * *(b + 93 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 49);
            *(b + 65 * OS1_S1 + 99) =
                prefactor_x * *(b + 65 * OS1_S1 + 71) -
                p_over_q * *(b + 93 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 71) +
                one_over_two_q * *(b + 65 * OS1_S1 + 50);
            *(b + 65 * OS1_S1 + 100) =
                prefactor_z * *(b + 65 * OS1_S1 + 66) -
                p_over_q * *(b + 98 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 66);
            *(b + 65 * OS1_S1 + 101) =
                prefactor_z * *(b + 65 * OS1_S1 + 67) -
                p_over_q * *(b + 98 * OS1_S1 + 67) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 67) +
                one_over_two_q * *(b + 65 * OS1_S1 + 41);
            *(b + 65 * OS1_S1 + 102) = prefactor_y * *(b + 65 * OS1_S1 + 69) -
                                       p_over_q * *(b + 97 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 44);
            *(b + 65 * OS1_S1 + 103) = prefactor_y * *(b + 65 * OS1_S1 + 70) -
                                       p_over_q * *(b + 97 * OS1_S1 + 70);
            *(b + 65 * OS1_S1 + 104) =
                prefactor_x * *(b + 65 * OS1_S1 + 76) -
                p_over_q * *(b + 93 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 76) +
                one_over_two_q * *(b + 65 * OS1_S1 + 55);
            *(b + 65 * OS1_S1 + 105) =
                prefactor_x * *(b + 65 * OS1_S1 + 77) -
                p_over_q * *(b + 93 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 77);
            *(b + 65 * OS1_S1 + 106) =
                prefactor_z * *(b + 65 * OS1_S1 + 71) -
                p_over_q * *(b + 98 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 71);
            *(b + 65 * OS1_S1 + 107) =
                prefactor_x * *(b + 65 * OS1_S1 + 79) -
                p_over_q * *(b + 93 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 79);
            *(b + 65 * OS1_S1 + 108) =
                prefactor_x * *(b + 65 * OS1_S1 + 80) -
                p_over_q * *(b + 93 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 80);
            *(b + 65 * OS1_S1 + 109) =
                prefactor_x * *(b + 65 * OS1_S1 + 81) -
                p_over_q * *(b + 93 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 81);
            *(b + 65 * OS1_S1 + 110) = prefactor_y * *(b + 65 * OS1_S1 + 76) -
                                       p_over_q * *(b + 97 * OS1_S1 + 76);
            *(b + 65 * OS1_S1 + 111) =
                prefactor_x * *(b + 65 * OS1_S1 + 83) -
                p_over_q * *(b + 93 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 83);
            *(b + 65 * OS1_S1 + 112) =
                prefactor_y * *(b + 65 * OS1_S1 + 77) -
                p_over_q * *(b + 97 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 65 * OS1_S1 + 50);
            *(b + 65 * OS1_S1 + 113) =
                prefactor_z * *(b + 65 * OS1_S1 + 77) -
                p_over_q * *(b + 98 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 77);
            *(b + 65 * OS1_S1 + 114) =
                prefactor_z * *(b + 65 * OS1_S1 + 78) -
                p_over_q * *(b + 98 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 78) +
                one_over_two_q * *(b + 65 * OS1_S1 + 50);
            *(b + 65 * OS1_S1 + 115) =
                prefactor_z * *(b + 65 * OS1_S1 + 79) -
                p_over_q * *(b + 98 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 51);
            *(b + 65 * OS1_S1 + 116) =
                prefactor_y * *(b + 65 * OS1_S1 + 81) -
                p_over_q * *(b + 97 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 54);
            *(b + 65 * OS1_S1 + 117) = prefactor_y * *(b + 65 * OS1_S1 + 82) -
                                       p_over_q * *(b + 97 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 55);
            *(b + 65 * OS1_S1 + 118) = prefactor_y * *(b + 65 * OS1_S1 + 83) -
                                       p_over_q * *(b + 97 * OS1_S1 + 83);
            *(b + 65 * OS1_S1 + 119) =
                prefactor_z * *(b + 65 * OS1_S1 + 83) -
                p_over_q * *(b + 98 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 65 * OS1_S1 + 55);
            *(b + 66 * OS1_S1 + 84) =
                prefactor_x * *(b + 66 * OS1_S1 + 56) -
                p_over_q * *(b + 94 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 66 * OS1_S1 + 35);
            *(b + 66 * OS1_S1 + 85) =
                prefactor_y * *(b + 66 * OS1_S1 + 56) -
                p_over_q * *(b + 99 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 56);
            *(b + 66 * OS1_S1 + 86) = prefactor_z * *(b + 66 * OS1_S1 + 56) -
                                      p_over_q * *(b + 100 * OS1_S1 + 56);
            *(b + 66 * OS1_S1 + 87) =
                prefactor_y * *(b + 66 * OS1_S1 + 57) -
                p_over_q * *(b + 99 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 57) +
                one_over_two_q * *(b + 66 * OS1_S1 + 35);
            *(b + 66 * OS1_S1 + 88) = prefactor_z * *(b + 66 * OS1_S1 + 57) -
                                      p_over_q * *(b + 100 * OS1_S1 + 57);
            *(b + 66 * OS1_S1 + 89) = prefactor_z * *(b + 66 * OS1_S1 + 58) -
                                      p_over_q * *(b + 100 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 66 * OS1_S1 + 35);
            *(b + 66 * OS1_S1 + 90) =
                prefactor_y * *(b + 66 * OS1_S1 + 59) -
                p_over_q * *(b + 99 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 36);
            *(b + 66 * OS1_S1 + 91) = prefactor_z * *(b + 66 * OS1_S1 + 59) -
                                      p_over_q * *(b + 100 * OS1_S1 + 59);
            *(b + 66 * OS1_S1 + 92) =
                prefactor_y * *(b + 66 * OS1_S1 + 61) -
                p_over_q * *(b + 99 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 61);
            *(b + 66 * OS1_S1 + 93) =
                prefactor_z * *(b + 66 * OS1_S1 + 61) -
                p_over_q * *(b + 100 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 37);
            *(b + 66 * OS1_S1 + 94) =
                prefactor_x * *(b + 66 * OS1_S1 + 66) -
                p_over_q * *(b + 94 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 45);
            *(b + 66 * OS1_S1 + 95) = prefactor_z * *(b + 66 * OS1_S1 + 62) -
                                      p_over_q * *(b + 100 * OS1_S1 + 62);
            *(b + 66 * OS1_S1 + 96) = prefactor_z * *(b + 66 * OS1_S1 + 63) -
                                      p_over_q * *(b + 100 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 66 * OS1_S1 + 38);
            *(b + 66 * OS1_S1 + 97) =
                prefactor_y * *(b + 66 * OS1_S1 + 65) -
                p_over_q * *(b + 99 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 65);
            *(b + 66 * OS1_S1 + 98) =
                prefactor_x * *(b + 66 * OS1_S1 + 70) -
                p_over_q * *(b + 94 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 49);
            *(b + 66 * OS1_S1 + 99) =
                prefactor_x * *(b + 66 * OS1_S1 + 71) -
                p_over_q * *(b + 94 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 71) +
                one_over_two_q * *(b + 66 * OS1_S1 + 50);
            *(b + 66 * OS1_S1 + 100) = prefactor_z * *(b + 66 * OS1_S1 + 66) -
                                       p_over_q * *(b + 100 * OS1_S1 + 66);
            *(b + 66 * OS1_S1 + 101) = prefactor_z * *(b + 66 * OS1_S1 + 67) -
                                       p_over_q * *(b + 100 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 41);
            *(b + 66 * OS1_S1 + 102) =
                prefactor_x * *(b + 66 * OS1_S1 + 74) -
                p_over_q * *(b + 94 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 74) +
                one_over_two_q * *(b + 66 * OS1_S1 + 53);
            *(b + 66 * OS1_S1 + 103) =
                prefactor_y * *(b + 66 * OS1_S1 + 70) -
                p_over_q * *(b + 99 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 70);
            *(b + 66 * OS1_S1 + 104) =
                prefactor_x * *(b + 66 * OS1_S1 + 76) -
                p_over_q * *(b + 94 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 76) +
                one_over_two_q * *(b + 66 * OS1_S1 + 55);
            *(b + 66 * OS1_S1 + 105) =
                prefactor_x * *(b + 66 * OS1_S1 + 77) -
                p_over_q * *(b + 94 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 77);
            *(b + 66 * OS1_S1 + 106) = prefactor_z * *(b + 66 * OS1_S1 + 71) -
                                       p_over_q * *(b + 100 * OS1_S1 + 71);
            *(b + 66 * OS1_S1 + 107) =
                prefactor_x * *(b + 66 * OS1_S1 + 79) -
                p_over_q * *(b + 94 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 79);
            *(b + 66 * OS1_S1 + 108) =
                prefactor_x * *(b + 66 * OS1_S1 + 80) -
                p_over_q * *(b + 94 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 80);
            *(b + 66 * OS1_S1 + 109) =
                prefactor_x * *(b + 66 * OS1_S1 + 81) -
                p_over_q * *(b + 94 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 81);
            *(b + 66 * OS1_S1 + 110) =
                prefactor_x * *(b + 66 * OS1_S1 + 82) -
                p_over_q * *(b + 94 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 82);
            *(b + 66 * OS1_S1 + 111) =
                prefactor_x * *(b + 66 * OS1_S1 + 83) -
                p_over_q * *(b + 94 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 83);
            *(b + 66 * OS1_S1 + 112) =
                prefactor_y * *(b + 66 * OS1_S1 + 77) -
                p_over_q * *(b + 99 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 66 * OS1_S1 + 50);
            *(b + 66 * OS1_S1 + 113) = prefactor_z * *(b + 66 * OS1_S1 + 77) -
                                       p_over_q * *(b + 100 * OS1_S1 + 77);
            *(b + 66 * OS1_S1 + 114) = prefactor_z * *(b + 66 * OS1_S1 + 78) -
                                       p_over_q * *(b + 100 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 50);
            *(b + 66 * OS1_S1 + 115) =
                prefactor_z * *(b + 66 * OS1_S1 + 79) -
                p_over_q * *(b + 100 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 51);
            *(b + 66 * OS1_S1 + 116) =
                prefactor_y * *(b + 66 * OS1_S1 + 81) -
                p_over_q * *(b + 99 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 54);
            *(b + 66 * OS1_S1 + 117) =
                prefactor_y * *(b + 66 * OS1_S1 + 82) -
                p_over_q * *(b + 99 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 82) +
                one_over_two_q * *(b + 66 * OS1_S1 + 55);
            *(b + 66 * OS1_S1 + 118) =
                prefactor_y * *(b + 66 * OS1_S1 + 83) -
                p_over_q * *(b + 99 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 83);
            *(b + 66 * OS1_S1 + 119) =
                prefactor_z * *(b + 66 * OS1_S1 + 83) -
                p_over_q * *(b + 100 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 66 * OS1_S1 + 55);
            *(b + 67 * OS1_S1 + 84) =
                prefactor_x * *(b + 67 * OS1_S1 + 56) -
                p_over_q * *(b + 95 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 67 * OS1_S1 + 35);
            *(b + 67 * OS1_S1 + 85) =
                prefactor_y * *(b + 67 * OS1_S1 + 56) -
                p_over_q * *(b + 100 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 56);
            *(b + 67 * OS1_S1 + 86) = prefactor_z * *(b + 67 * OS1_S1 + 56) -
                                      p_over_q * *(b + 101 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 56);
            *(b + 67 * OS1_S1 + 87) =
                prefactor_y * *(b + 67 * OS1_S1 + 57) -
                p_over_q * *(b + 100 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 57) +
                one_over_two_q * *(b + 67 * OS1_S1 + 35);
            *(b + 67 * OS1_S1 + 88) = prefactor_z * *(b + 67 * OS1_S1 + 57) -
                                      p_over_q * *(b + 101 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 57);
            *(b + 67 * OS1_S1 + 89) = prefactor_z * *(b + 67 * OS1_S1 + 58) -
                                      p_over_q * *(b + 101 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 67 * OS1_S1 + 35);
            *(b + 67 * OS1_S1 + 90) =
                prefactor_y * *(b + 67 * OS1_S1 + 59) -
                p_over_q * *(b + 100 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 36);
            *(b + 67 * OS1_S1 + 91) = prefactor_z * *(b + 67 * OS1_S1 + 59) -
                                      p_over_q * *(b + 101 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 59);
            *(b + 67 * OS1_S1 + 92) =
                prefactor_y * *(b + 67 * OS1_S1 + 61) -
                p_over_q * *(b + 100 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 61);
            *(b + 67 * OS1_S1 + 93) =
                prefactor_z * *(b + 67 * OS1_S1 + 61) -
                p_over_q * *(b + 101 * OS1_S1 + 61) +
                one_over_two_q * *(b + 41 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 37);
            *(b + 67 * OS1_S1 + 94) =
                prefactor_x * *(b + 67 * OS1_S1 + 66) -
                p_over_q * *(b + 95 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 45);
            *(b + 67 * OS1_S1 + 95) = prefactor_z * *(b + 67 * OS1_S1 + 62) -
                                      p_over_q * *(b + 101 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 62);
            *(b + 67 * OS1_S1 + 96) = prefactor_z * *(b + 67 * OS1_S1 + 63) -
                                      p_over_q * *(b + 101 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 41 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 67 * OS1_S1 + 38);
            *(b + 67 * OS1_S1 + 97) =
                prefactor_y * *(b + 67 * OS1_S1 + 65) -
                p_over_q * *(b + 100 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 65);
            *(b + 67 * OS1_S1 + 98) =
                prefactor_x * *(b + 67 * OS1_S1 + 70) -
                p_over_q * *(b + 95 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 49);
            *(b + 67 * OS1_S1 + 99) =
                prefactor_x * *(b + 67 * OS1_S1 + 71) -
                p_over_q * *(b + 95 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 71) +
                one_over_two_q * *(b + 67 * OS1_S1 + 50);
            *(b + 67 * OS1_S1 + 100) = prefactor_z * *(b + 67 * OS1_S1 + 66) -
                                       p_over_q * *(b + 101 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 66);
            *(b + 67 * OS1_S1 + 101) =
                prefactor_z * *(b + 67 * OS1_S1 + 67) -
                p_over_q * *(b + 101 * OS1_S1 + 67) +
                one_over_two_q * *(b + 41 * OS1_S1 + 67) +
                one_over_two_q * *(b + 67 * OS1_S1 + 41);
            *(b + 67 * OS1_S1 + 102) =
                prefactor_x * *(b + 67 * OS1_S1 + 74) -
                p_over_q * *(b + 95 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 74) +
                one_over_two_q * *(b + 67 * OS1_S1 + 53);
            *(b + 67 * OS1_S1 + 103) =
                prefactor_y * *(b + 67 * OS1_S1 + 70) -
                p_over_q * *(b + 100 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 70);
            *(b + 67 * OS1_S1 + 104) =
                prefactor_x * *(b + 67 * OS1_S1 + 76) -
                p_over_q * *(b + 95 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 76) +
                one_over_two_q * *(b + 67 * OS1_S1 + 55);
            *(b + 67 * OS1_S1 + 105) =
                prefactor_x * *(b + 67 * OS1_S1 + 77) -
                p_over_q * *(b + 95 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 77);
            *(b + 67 * OS1_S1 + 106) = prefactor_z * *(b + 67 * OS1_S1 + 71) -
                                       p_over_q * *(b + 101 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 71);
            *(b + 67 * OS1_S1 + 107) =
                prefactor_x * *(b + 67 * OS1_S1 + 79) -
                p_over_q * *(b + 95 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 79);
            *(b + 67 * OS1_S1 + 108) =
                prefactor_x * *(b + 67 * OS1_S1 + 80) -
                p_over_q * *(b + 95 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 80);
            *(b + 67 * OS1_S1 + 109) =
                prefactor_x * *(b + 67 * OS1_S1 + 81) -
                p_over_q * *(b + 95 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 81);
            *(b + 67 * OS1_S1 + 110) =
                prefactor_x * *(b + 67 * OS1_S1 + 82) -
                p_over_q * *(b + 95 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 82);
            *(b + 67 * OS1_S1 + 111) =
                prefactor_x * *(b + 67 * OS1_S1 + 83) -
                p_over_q * *(b + 95 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 83);
            *(b + 67 * OS1_S1 + 112) =
                prefactor_y * *(b + 67 * OS1_S1 + 77) -
                p_over_q * *(b + 100 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 67 * OS1_S1 + 50);
            *(b + 67 * OS1_S1 + 113) = prefactor_z * *(b + 67 * OS1_S1 + 77) -
                                       p_over_q * *(b + 101 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 77);
            *(b + 67 * OS1_S1 + 114) =
                prefactor_z * *(b + 67 * OS1_S1 + 78) -
                p_over_q * *(b + 101 * OS1_S1 + 78) +
                one_over_two_q * *(b + 41 * OS1_S1 + 78) +
                one_over_two_q * *(b + 67 * OS1_S1 + 50);
            *(b + 67 * OS1_S1 + 115) =
                prefactor_z * *(b + 67 * OS1_S1 + 79) -
                p_over_q * *(b + 101 * OS1_S1 + 79) +
                one_over_two_q * *(b + 41 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 51);
            *(b + 67 * OS1_S1 + 116) =
                prefactor_y * *(b + 67 * OS1_S1 + 81) -
                p_over_q * *(b + 100 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 54);
            *(b + 67 * OS1_S1 + 117) =
                prefactor_y * *(b + 67 * OS1_S1 + 82) -
                p_over_q * *(b + 100 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 82) +
                one_over_two_q * *(b + 67 * OS1_S1 + 55);
            *(b + 67 * OS1_S1 + 118) =
                prefactor_y * *(b + 67 * OS1_S1 + 83) -
                p_over_q * *(b + 100 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 83);
            *(b + 67 * OS1_S1 + 119) =
                prefactor_z * *(b + 67 * OS1_S1 + 83) -
                p_over_q * *(b + 101 * OS1_S1 + 83) +
                one_over_two_q * *(b + 41 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 67 * OS1_S1 + 55);
            *(b + 68 * OS1_S1 + 84) =
                prefactor_x * *(b + 68 * OS1_S1 + 56) -
                p_over_q * *(b + 96 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 68 * OS1_S1 + 35);
            *(b + 68 * OS1_S1 + 85) =
                prefactor_y * *(b + 68 * OS1_S1 + 56) -
                p_over_q * *(b + 101 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 56);
            *(b + 68 * OS1_S1 + 86) =
                prefactor_z * *(b + 68 * OS1_S1 + 56) -
                p_over_q * *(b + 102 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 56);
            *(b + 68 * OS1_S1 + 87) =
                prefactor_y * *(b + 68 * OS1_S1 + 57) -
                p_over_q * *(b + 101 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 57) +
                one_over_two_q * *(b + 68 * OS1_S1 + 35);
            *(b + 68 * OS1_S1 + 88) =
                prefactor_z * *(b + 68 * OS1_S1 + 57) -
                p_over_q * *(b + 102 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 57);
            *(b + 68 * OS1_S1 + 89) =
                prefactor_z * *(b + 68 * OS1_S1 + 58) -
                p_over_q * *(b + 102 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 58) +
                one_over_two_q * *(b + 68 * OS1_S1 + 35);
            *(b + 68 * OS1_S1 + 90) =
                prefactor_y * *(b + 68 * OS1_S1 + 59) -
                p_over_q * *(b + 101 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 36);
            *(b + 68 * OS1_S1 + 91) =
                prefactor_z * *(b + 68 * OS1_S1 + 59) -
                p_over_q * *(b + 102 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 59);
            *(b + 68 * OS1_S1 + 92) =
                prefactor_y * *(b + 68 * OS1_S1 + 61) -
                p_over_q * *(b + 101 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 61);
            *(b + 68 * OS1_S1 + 93) =
                prefactor_z * *(b + 68 * OS1_S1 + 61) -
                p_over_q * *(b + 102 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 37);
            *(b + 68 * OS1_S1 + 94) =
                prefactor_x * *(b + 68 * OS1_S1 + 66) -
                p_over_q * *(b + 96 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 45);
            *(b + 68 * OS1_S1 + 95) =
                prefactor_z * *(b + 68 * OS1_S1 + 62) -
                p_over_q * *(b + 102 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 62);
            *(b + 68 * OS1_S1 + 96) =
                prefactor_z * *(b + 68 * OS1_S1 + 63) -
                p_over_q * *(b + 102 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 63) +
                one_over_two_q * *(b + 68 * OS1_S1 + 38);
            *(b + 68 * OS1_S1 + 97) =
                prefactor_y * *(b + 68 * OS1_S1 + 65) -
                p_over_q * *(b + 101 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 65);
            *(b + 68 * OS1_S1 + 98) =
                prefactor_x * *(b + 68 * OS1_S1 + 70) -
                p_over_q * *(b + 96 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 49);
            *(b + 68 * OS1_S1 + 99) =
                prefactor_x * *(b + 68 * OS1_S1 + 71) -
                p_over_q * *(b + 96 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 71) +
                one_over_two_q * *(b + 68 * OS1_S1 + 50);
            *(b + 68 * OS1_S1 + 100) =
                prefactor_z * *(b + 68 * OS1_S1 + 66) -
                p_over_q * *(b + 102 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 66);
            *(b + 68 * OS1_S1 + 101) =
                prefactor_z * *(b + 68 * OS1_S1 + 67) -
                p_over_q * *(b + 102 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 67) +
                one_over_two_q * *(b + 68 * OS1_S1 + 41);
            *(b + 68 * OS1_S1 + 102) =
                prefactor_y * *(b + 68 * OS1_S1 + 69) -
                p_over_q * *(b + 101 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 69) +
                one_over_two_q * *(b + 68 * OS1_S1 + 44);
            *(b + 68 * OS1_S1 + 103) =
                prefactor_y * *(b + 68 * OS1_S1 + 70) -
                p_over_q * *(b + 101 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 70);
            *(b + 68 * OS1_S1 + 104) =
                prefactor_x * *(b + 68 * OS1_S1 + 76) -
                p_over_q * *(b + 96 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 76) +
                one_over_two_q * *(b + 68 * OS1_S1 + 55);
            *(b + 68 * OS1_S1 + 105) =
                prefactor_x * *(b + 68 * OS1_S1 + 77) -
                p_over_q * *(b + 96 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 77);
            *(b + 68 * OS1_S1 + 106) =
                prefactor_z * *(b + 68 * OS1_S1 + 71) -
                p_over_q * *(b + 102 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 71);
            *(b + 68 * OS1_S1 + 107) =
                prefactor_x * *(b + 68 * OS1_S1 + 79) -
                p_over_q * *(b + 96 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 79);
            *(b + 68 * OS1_S1 + 108) =
                prefactor_x * *(b + 68 * OS1_S1 + 80) -
                p_over_q * *(b + 96 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 80);
            *(b + 68 * OS1_S1 + 109) =
                prefactor_x * *(b + 68 * OS1_S1 + 81) -
                p_over_q * *(b + 96 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 81);
            *(b + 68 * OS1_S1 + 110) =
                prefactor_y * *(b + 68 * OS1_S1 + 76) -
                p_over_q * *(b + 101 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 76);
            *(b + 68 * OS1_S1 + 111) =
                prefactor_x * *(b + 68 * OS1_S1 + 83) -
                p_over_q * *(b + 96 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 83);
            *(b + 68 * OS1_S1 + 112) =
                prefactor_y * *(b + 68 * OS1_S1 + 77) -
                p_over_q * *(b + 101 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 68 * OS1_S1 + 50);
            *(b + 68 * OS1_S1 + 113) =
                prefactor_z * *(b + 68 * OS1_S1 + 77) -
                p_over_q * *(b + 102 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 77);
            *(b + 68 * OS1_S1 + 114) =
                prefactor_z * *(b + 68 * OS1_S1 + 78) -
                p_over_q * *(b + 102 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 78) +
                one_over_two_q * *(b + 68 * OS1_S1 + 50);
            *(b + 68 * OS1_S1 + 115) =
                prefactor_z * *(b + 68 * OS1_S1 + 79) -
                p_over_q * *(b + 102 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 51);
            *(b + 68 * OS1_S1 + 116) =
                prefactor_y * *(b + 68 * OS1_S1 + 81) -
                p_over_q * *(b + 101 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 54);
            *(b + 68 * OS1_S1 + 117) =
                prefactor_y * *(b + 68 * OS1_S1 + 82) -
                p_over_q * *(b + 101 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 82) +
                one_over_two_q * *(b + 68 * OS1_S1 + 55);
            *(b + 68 * OS1_S1 + 118) =
                prefactor_y * *(b + 68 * OS1_S1 + 83) -
                p_over_q * *(b + 101 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 83);
            *(b + 68 * OS1_S1 + 119) =
                prefactor_z * *(b + 68 * OS1_S1 + 83) -
                p_over_q * *(b + 102 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 68 * OS1_S1 + 55);
            *(b + 69 * OS1_S1 + 84) =
                prefactor_x * *(b + 69 * OS1_S1 + 56) -
                p_over_q * *(b + 97 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 69 * OS1_S1 + 35);
            *(b + 69 * OS1_S1 + 85) = prefactor_y * *(b + 69 * OS1_S1 + 56) -
                                      p_over_q * *(b + 102 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 56);
            *(b + 69 * OS1_S1 + 86) =
                prefactor_z * *(b + 69 * OS1_S1 + 56) -
                p_over_q * *(b + 103 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 56);
            *(b + 69 * OS1_S1 + 87) = prefactor_y * *(b + 69 * OS1_S1 + 57) -
                                      p_over_q * *(b + 102 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 69 * OS1_S1 + 35);
            *(b + 69 * OS1_S1 + 88) = prefactor_y * *(b + 69 * OS1_S1 + 58) -
                                      p_over_q * *(b + 102 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 58);
            *(b + 69 * OS1_S1 + 89) =
                prefactor_z * *(b + 69 * OS1_S1 + 58) -
                p_over_q * *(b + 103 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 58) +
                one_over_two_q * *(b + 69 * OS1_S1 + 35);
            *(b + 69 * OS1_S1 + 90) =
                prefactor_y * *(b + 69 * OS1_S1 + 59) -
                p_over_q * *(b + 102 * OS1_S1 + 59) +
                one_over_two_q * *(b + 44 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 36);
            *(b + 69 * OS1_S1 + 91) =
                prefactor_z * *(b + 69 * OS1_S1 + 59) -
                p_over_q * *(b + 103 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 59);
            *(b + 69 * OS1_S1 + 92) = prefactor_y * *(b + 69 * OS1_S1 + 61) -
                                      p_over_q * *(b + 102 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 61);
            *(b + 69 * OS1_S1 + 93) =
                prefactor_z * *(b + 69 * OS1_S1 + 61) -
                p_over_q * *(b + 103 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 37);
            *(b + 69 * OS1_S1 + 94) =
                prefactor_x * *(b + 69 * OS1_S1 + 66) -
                p_over_q * *(b + 97 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 45);
            *(b + 69 * OS1_S1 + 95) =
                prefactor_z * *(b + 69 * OS1_S1 + 62) -
                p_over_q * *(b + 103 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 62);
            *(b + 69 * OS1_S1 + 96) = prefactor_y * *(b + 69 * OS1_S1 + 64) -
                                      p_over_q * *(b + 102 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 69 * OS1_S1 + 40);
            *(b + 69 * OS1_S1 + 97) = prefactor_y * *(b + 69 * OS1_S1 + 65) -
                                      p_over_q * *(b + 102 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 44 * OS1_S1 + 65);
            *(b + 69 * OS1_S1 + 98) =
                prefactor_x * *(b + 69 * OS1_S1 + 70) -
                p_over_q * *(b + 97 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 49);
            *(b + 69 * OS1_S1 + 99) =
                prefactor_x * *(b + 69 * OS1_S1 + 71) -
                p_over_q * *(b + 97 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 71) +
                one_over_two_q * *(b + 69 * OS1_S1 + 50);
            *(b + 69 * OS1_S1 + 100) =
                prefactor_z * *(b + 69 * OS1_S1 + 66) -
                p_over_q * *(b + 103 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 66);
            *(b + 69 * OS1_S1 + 101) =
                prefactor_x * *(b + 69 * OS1_S1 + 73) -
                p_over_q * *(b + 97 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 73) +
                one_over_two_q * *(b + 69 * OS1_S1 + 52);
            *(b + 69 * OS1_S1 + 102) =
                prefactor_y * *(b + 69 * OS1_S1 + 69) -
                p_over_q * *(b + 102 * OS1_S1 + 69) +
                one_over_two_q * *(b + 44 * OS1_S1 + 69) +
                one_over_two_q * *(b + 69 * OS1_S1 + 44);
            *(b + 69 * OS1_S1 + 103) = prefactor_y * *(b + 69 * OS1_S1 + 70) -
                                       p_over_q * *(b + 102 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 70);
            *(b + 69 * OS1_S1 + 104) =
                prefactor_x * *(b + 69 * OS1_S1 + 76) -
                p_over_q * *(b + 97 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 76) +
                one_over_two_q * *(b + 69 * OS1_S1 + 55);
            *(b + 69 * OS1_S1 + 105) =
                prefactor_x * *(b + 69 * OS1_S1 + 77) -
                p_over_q * *(b + 97 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 77);
            *(b + 69 * OS1_S1 + 106) =
                prefactor_x * *(b + 69 * OS1_S1 + 78) -
                p_over_q * *(b + 97 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 78);
            *(b + 69 * OS1_S1 + 107) =
                prefactor_x * *(b + 69 * OS1_S1 + 79) -
                p_over_q * *(b + 97 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 79);
            *(b + 69 * OS1_S1 + 108) =
                prefactor_x * *(b + 69 * OS1_S1 + 80) -
                p_over_q * *(b + 97 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 80);
            *(b + 69 * OS1_S1 + 109) =
                prefactor_x * *(b + 69 * OS1_S1 + 81) -
                p_over_q * *(b + 97 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 81);
            *(b + 69 * OS1_S1 + 110) = prefactor_y * *(b + 69 * OS1_S1 + 76) -
                                       p_over_q * *(b + 102 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 76);
            *(b + 69 * OS1_S1 + 111) =
                prefactor_x * *(b + 69 * OS1_S1 + 83) -
                p_over_q * *(b + 97 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 83);
            *(b + 69 * OS1_S1 + 112) =
                prefactor_y * *(b + 69 * OS1_S1 + 77) -
                p_over_q * *(b + 102 * OS1_S1 + 77) +
                one_over_two_q * *(b + 44 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 69 * OS1_S1 + 50);
            *(b + 69 * OS1_S1 + 113) =
                prefactor_z * *(b + 69 * OS1_S1 + 77) -
                p_over_q * *(b + 103 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 77);
            *(b + 69 * OS1_S1 + 114) =
                prefactor_z * *(b + 69 * OS1_S1 + 78) -
                p_over_q * *(b + 103 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 78) +
                one_over_two_q * *(b + 69 * OS1_S1 + 50);
            *(b + 69 * OS1_S1 + 115) =
                prefactor_z * *(b + 69 * OS1_S1 + 79) -
                p_over_q * *(b + 103 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 51);
            *(b + 69 * OS1_S1 + 116) =
                prefactor_y * *(b + 69 * OS1_S1 + 81) -
                p_over_q * *(b + 102 * OS1_S1 + 81) +
                one_over_two_q * *(b + 44 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 54);
            *(b + 69 * OS1_S1 + 117) =
                prefactor_y * *(b + 69 * OS1_S1 + 82) -
                p_over_q * *(b + 102 * OS1_S1 + 82) +
                one_over_two_q * *(b + 44 * OS1_S1 + 82) +
                one_over_two_q * *(b + 69 * OS1_S1 + 55);
            *(b + 69 * OS1_S1 + 118) = prefactor_y * *(b + 69 * OS1_S1 + 83) -
                                       p_over_q * *(b + 102 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 83);
            *(b + 69 * OS1_S1 + 119) =
                prefactor_z * *(b + 69 * OS1_S1 + 83) -
                p_over_q * *(b + 103 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 69 * OS1_S1 + 55);
            *(b + 70 * OS1_S1 + 84) =
                prefactor_x * *(b + 70 * OS1_S1 + 56) -
                p_over_q * *(b + 98 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 70 * OS1_S1 + 35);
            *(b + 70 * OS1_S1 + 85) = prefactor_y * *(b + 70 * OS1_S1 + 56) -
                                      p_over_q * *(b + 103 * OS1_S1 + 56);
            *(b + 70 * OS1_S1 + 86) =
                prefactor_z * *(b + 70 * OS1_S1 + 56) -
                p_over_q * *(b + 104 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 56);
            *(b + 70 * OS1_S1 + 87) = prefactor_y * *(b + 70 * OS1_S1 + 57) -
                                      p_over_q * *(b + 103 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 70 * OS1_S1 + 35);
            *(b + 70 * OS1_S1 + 88) = prefactor_y * *(b + 70 * OS1_S1 + 58) -
                                      p_over_q * *(b + 103 * OS1_S1 + 58);
            *(b + 70 * OS1_S1 + 89) =
                prefactor_z * *(b + 70 * OS1_S1 + 58) -
                p_over_q * *(b + 104 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 58) +
                one_over_two_q * *(b + 70 * OS1_S1 + 35);
            *(b + 70 * OS1_S1 + 90) =
                prefactor_y * *(b + 70 * OS1_S1 + 59) -
                p_over_q * *(b + 103 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 36);
            *(b + 70 * OS1_S1 + 91) =
                prefactor_z * *(b + 70 * OS1_S1 + 59) -
                p_over_q * *(b + 104 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 59);
            *(b + 70 * OS1_S1 + 92) = prefactor_y * *(b + 70 * OS1_S1 + 61) -
                                      p_over_q * *(b + 103 * OS1_S1 + 61);
            *(b + 70 * OS1_S1 + 93) =
                prefactor_z * *(b + 70 * OS1_S1 + 61) -
                p_over_q * *(b + 104 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 37);
            *(b + 70 * OS1_S1 + 94) =
                prefactor_x * *(b + 70 * OS1_S1 + 66) -
                p_over_q * *(b + 98 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 45);
            *(b + 70 * OS1_S1 + 95) =
                prefactor_z * *(b + 70 * OS1_S1 + 62) -
                p_over_q * *(b + 104 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 62);
            *(b + 70 * OS1_S1 + 96) = prefactor_y * *(b + 70 * OS1_S1 + 64) -
                                      p_over_q * *(b + 103 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 70 * OS1_S1 + 40);
            *(b + 70 * OS1_S1 + 97) = prefactor_y * *(b + 70 * OS1_S1 + 65) -
                                      p_over_q * *(b + 103 * OS1_S1 + 65);
            *(b + 70 * OS1_S1 + 98) =
                prefactor_x * *(b + 70 * OS1_S1 + 70) -
                p_over_q * *(b + 98 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 49);
            *(b + 70 * OS1_S1 + 99) =
                prefactor_x * *(b + 70 * OS1_S1 + 71) -
                p_over_q * *(b + 98 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 71) +
                one_over_two_q * *(b + 70 * OS1_S1 + 50);
            *(b + 70 * OS1_S1 + 100) =
                prefactor_z * *(b + 70 * OS1_S1 + 66) -
                p_over_q * *(b + 104 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 66);
            *(b + 70 * OS1_S1 + 101) =
                prefactor_x * *(b + 70 * OS1_S1 + 73) -
                p_over_q * *(b + 98 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 73) +
                one_over_two_q * *(b + 70 * OS1_S1 + 52);
            *(b + 70 * OS1_S1 + 102) = prefactor_y * *(b + 70 * OS1_S1 + 69) -
                                       p_over_q * *(b + 103 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 44);
            *(b + 70 * OS1_S1 + 103) = prefactor_y * *(b + 70 * OS1_S1 + 70) -
                                       p_over_q * *(b + 103 * OS1_S1 + 70);
            *(b + 70 * OS1_S1 + 104) =
                prefactor_x * *(b + 70 * OS1_S1 + 76) -
                p_over_q * *(b + 98 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 76) +
                one_over_two_q * *(b + 70 * OS1_S1 + 55);
            *(b + 70 * OS1_S1 + 105) =
                prefactor_x * *(b + 70 * OS1_S1 + 77) -
                p_over_q * *(b + 98 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 77);
            *(b + 70 * OS1_S1 + 106) =
                prefactor_x * *(b + 70 * OS1_S1 + 78) -
                p_over_q * *(b + 98 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 78);
            *(b + 70 * OS1_S1 + 107) =
                prefactor_x * *(b + 70 * OS1_S1 + 79) -
                p_over_q * *(b + 98 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 79);
            *(b + 70 * OS1_S1 + 108) =
                prefactor_x * *(b + 70 * OS1_S1 + 80) -
                p_over_q * *(b + 98 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 80);
            *(b + 70 * OS1_S1 + 109) =
                prefactor_x * *(b + 70 * OS1_S1 + 81) -
                p_over_q * *(b + 98 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 81);
            *(b + 70 * OS1_S1 + 110) = prefactor_y * *(b + 70 * OS1_S1 + 76) -
                                       p_over_q * *(b + 103 * OS1_S1 + 76);
            *(b + 70 * OS1_S1 + 111) =
                prefactor_x * *(b + 70 * OS1_S1 + 83) -
                p_over_q * *(b + 98 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 83);
            *(b + 70 * OS1_S1 + 112) =
                prefactor_y * *(b + 70 * OS1_S1 + 77) -
                p_over_q * *(b + 103 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 70 * OS1_S1 + 50);
            *(b + 70 * OS1_S1 + 113) =
                prefactor_z * *(b + 70 * OS1_S1 + 77) -
                p_over_q * *(b + 104 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 77);
            *(b + 70 * OS1_S1 + 114) =
                prefactor_z * *(b + 70 * OS1_S1 + 78) -
                p_over_q * *(b + 104 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 78) +
                one_over_two_q * *(b + 70 * OS1_S1 + 50);
            *(b + 70 * OS1_S1 + 115) =
                prefactor_z * *(b + 70 * OS1_S1 + 79) -
                p_over_q * *(b + 104 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 51);
            *(b + 70 * OS1_S1 + 116) =
                prefactor_y * *(b + 70 * OS1_S1 + 81) -
                p_over_q * *(b + 103 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 54);
            *(b + 70 * OS1_S1 + 117) = prefactor_y * *(b + 70 * OS1_S1 + 82) -
                                       p_over_q * *(b + 103 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 55);
            *(b + 70 * OS1_S1 + 118) = prefactor_y * *(b + 70 * OS1_S1 + 83) -
                                       p_over_q * *(b + 103 * OS1_S1 + 83);
            *(b + 70 * OS1_S1 + 119) =
                prefactor_z * *(b + 70 * OS1_S1 + 83) -
                p_over_q * *(b + 104 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 70 * OS1_S1 + 55);
            *(b + 71 * OS1_S1 + 84) =
                prefactor_x * *(b + 71 * OS1_S1 + 56) -
                p_over_q * *(b + 99 * OS1_S1 + 56) +
                one_over_two_q * *(b + 50 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 35);
            *(b + 71 * OS1_S1 + 85) =
                prefactor_y * *(b + 71 * OS1_S1 + 56) -
                p_over_q * *(b + 105 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 56);
            *(b + 71 * OS1_S1 + 86) = prefactor_z * *(b + 71 * OS1_S1 + 56) -
                                      p_over_q * *(b + 106 * OS1_S1 + 56);
            *(b + 71 * OS1_S1 + 87) =
                prefactor_y * *(b + 71 * OS1_S1 + 57) -
                p_over_q * *(b + 105 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 57) +
                one_over_two_q * *(b + 71 * OS1_S1 + 35);
            *(b + 71 * OS1_S1 + 88) = prefactor_z * *(b + 71 * OS1_S1 + 57) -
                                      p_over_q * *(b + 106 * OS1_S1 + 57);
            *(b + 71 * OS1_S1 + 89) = prefactor_z * *(b + 71 * OS1_S1 + 58) -
                                      p_over_q * *(b + 106 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 35);
            *(b + 71 * OS1_S1 + 90) =
                prefactor_y * *(b + 71 * OS1_S1 + 59) -
                p_over_q * *(b + 105 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 36);
            *(b + 71 * OS1_S1 + 91) = prefactor_z * *(b + 71 * OS1_S1 + 59) -
                                      p_over_q * *(b + 106 * OS1_S1 + 59);
            *(b + 71 * OS1_S1 + 92) =
                prefactor_y * *(b + 71 * OS1_S1 + 61) -
                p_over_q * *(b + 105 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 61);
            *(b + 71 * OS1_S1 + 93) =
                prefactor_z * *(b + 71 * OS1_S1 + 61) -
                p_over_q * *(b + 106 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 37);
            *(b + 71 * OS1_S1 + 94) =
                prefactor_x * *(b + 71 * OS1_S1 + 66) -
                p_over_q * *(b + 99 * OS1_S1 + 66) +
                one_over_two_q * *(b + 50 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 45);
            *(b + 71 * OS1_S1 + 95) = prefactor_z * *(b + 71 * OS1_S1 + 62) -
                                      p_over_q * *(b + 106 * OS1_S1 + 62);
            *(b + 71 * OS1_S1 + 96) = prefactor_z * *(b + 71 * OS1_S1 + 63) -
                                      p_over_q * *(b + 106 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 38);
            *(b + 71 * OS1_S1 + 97) =
                prefactor_y * *(b + 71 * OS1_S1 + 65) -
                p_over_q * *(b + 105 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 65);
            *(b + 71 * OS1_S1 + 98) =
                prefactor_x * *(b + 71 * OS1_S1 + 70) -
                p_over_q * *(b + 99 * OS1_S1 + 70) +
                one_over_two_q * *(b + 50 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 49);
            *(b + 71 * OS1_S1 + 99) = prefactor_x * *(b + 71 * OS1_S1 + 71) -
                                      p_over_q * *(b + 99 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 71 * OS1_S1 + 50);
            *(b + 71 * OS1_S1 + 100) = prefactor_z * *(b + 71 * OS1_S1 + 66) -
                                       p_over_q * *(b + 106 * OS1_S1 + 66);
            *(b + 71 * OS1_S1 + 101) = prefactor_z * *(b + 71 * OS1_S1 + 67) -
                                       p_over_q * *(b + 106 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 41);
            *(b + 71 * OS1_S1 + 102) =
                prefactor_x * *(b + 71 * OS1_S1 + 74) -
                p_over_q * *(b + 99 * OS1_S1 + 74) +
                one_over_two_q * *(b + 50 * OS1_S1 + 74) +
                one_over_two_q * *(b + 71 * OS1_S1 + 53);
            *(b + 71 * OS1_S1 + 103) =
                prefactor_y * *(b + 71 * OS1_S1 + 70) -
                p_over_q * *(b + 105 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 70);
            *(b + 71 * OS1_S1 + 104) =
                prefactor_x * *(b + 71 * OS1_S1 + 76) -
                p_over_q * *(b + 99 * OS1_S1 + 76) +
                one_over_two_q * *(b + 50 * OS1_S1 + 76) +
                one_over_two_q * *(b + 71 * OS1_S1 + 55);
            *(b + 71 * OS1_S1 + 105) = prefactor_x * *(b + 71 * OS1_S1 + 77) -
                                       p_over_q * *(b + 99 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 77);
            *(b + 71 * OS1_S1 + 106) = prefactor_z * *(b + 71 * OS1_S1 + 71) -
                                       p_over_q * *(b + 106 * OS1_S1 + 71);
            *(b + 71 * OS1_S1 + 107) = prefactor_x * *(b + 71 * OS1_S1 + 79) -
                                       p_over_q * *(b + 99 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 79);
            *(b + 71 * OS1_S1 + 108) = prefactor_x * *(b + 71 * OS1_S1 + 80) -
                                       p_over_q * *(b + 99 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 80);
            *(b + 71 * OS1_S1 + 109) = prefactor_x * *(b + 71 * OS1_S1 + 81) -
                                       p_over_q * *(b + 99 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 81);
            *(b + 71 * OS1_S1 + 110) = prefactor_x * *(b + 71 * OS1_S1 + 82) -
                                       p_over_q * *(b + 99 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 82);
            *(b + 71 * OS1_S1 + 111) = prefactor_x * *(b + 71 * OS1_S1 + 83) -
                                       p_over_q * *(b + 99 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 83);
            *(b + 71 * OS1_S1 + 112) =
                prefactor_y * *(b + 71 * OS1_S1 + 77) -
                p_over_q * *(b + 105 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 50);
            *(b + 71 * OS1_S1 + 113) = prefactor_z * *(b + 71 * OS1_S1 + 77) -
                                       p_over_q * *(b + 106 * OS1_S1 + 77);
            *(b + 71 * OS1_S1 + 114) = prefactor_z * *(b + 71 * OS1_S1 + 78) -
                                       p_over_q * *(b + 106 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 50);
            *(b + 71 * OS1_S1 + 115) =
                prefactor_z * *(b + 71 * OS1_S1 + 79) -
                p_over_q * *(b + 106 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 51);
            *(b + 71 * OS1_S1 + 116) =
                prefactor_y * *(b + 71 * OS1_S1 + 81) -
                p_over_q * *(b + 105 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 54);
            *(b + 71 * OS1_S1 + 117) =
                prefactor_y * *(b + 71 * OS1_S1 + 82) -
                p_over_q * *(b + 105 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 82) +
                one_over_two_q * *(b + 71 * OS1_S1 + 55);
            *(b + 71 * OS1_S1 + 118) =
                prefactor_y * *(b + 71 * OS1_S1 + 83) -
                p_over_q * *(b + 105 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 83);
            *(b + 71 * OS1_S1 + 119) =
                prefactor_z * *(b + 71 * OS1_S1 + 83) -
                p_over_q * *(b + 106 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 55);
            *(b + 72 * OS1_S1 + 84) =
                prefactor_x * *(b + 72 * OS1_S1 + 56) -
                p_over_q * *(b + 100 * OS1_S1 + 56) +
                one_over_two_q * *(b + 51 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 72 * OS1_S1 + 35);
            *(b + 72 * OS1_S1 + 85) =
                prefactor_y * *(b + 72 * OS1_S1 + 56) -
                p_over_q * *(b + 106 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 56);
            *(b + 72 * OS1_S1 + 86) = prefactor_z * *(b + 72 * OS1_S1 + 56) -
                                      p_over_q * *(b + 107 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 56);
            *(b + 72 * OS1_S1 + 87) =
                prefactor_y * *(b + 72 * OS1_S1 + 57) -
                p_over_q * *(b + 106 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 57) +
                one_over_two_q * *(b + 72 * OS1_S1 + 35);
            *(b + 72 * OS1_S1 + 88) = prefactor_z * *(b + 72 * OS1_S1 + 57) -
                                      p_over_q * *(b + 107 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 57);
            *(b + 72 * OS1_S1 + 89) = prefactor_z * *(b + 72 * OS1_S1 + 58) -
                                      p_over_q * *(b + 107 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 35);
            *(b + 72 * OS1_S1 + 90) =
                prefactor_y * *(b + 72 * OS1_S1 + 59) -
                p_over_q * *(b + 106 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 36);
            *(b + 72 * OS1_S1 + 91) = prefactor_z * *(b + 72 * OS1_S1 + 59) -
                                      p_over_q * *(b + 107 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 59);
            *(b + 72 * OS1_S1 + 92) =
                prefactor_y * *(b + 72 * OS1_S1 + 61) -
                p_over_q * *(b + 106 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 61);
            *(b + 72 * OS1_S1 + 93) =
                prefactor_z * *(b + 72 * OS1_S1 + 61) -
                p_over_q * *(b + 107 * OS1_S1 + 61) +
                one_over_two_q * *(b + 45 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 37);
            *(b + 72 * OS1_S1 + 94) =
                prefactor_x * *(b + 72 * OS1_S1 + 66) -
                p_over_q * *(b + 100 * OS1_S1 + 66) +
                one_over_two_q * *(b + 51 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 45);
            *(b + 72 * OS1_S1 + 95) = prefactor_z * *(b + 72 * OS1_S1 + 62) -
                                      p_over_q * *(b + 107 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 62);
            *(b + 72 * OS1_S1 + 96) = prefactor_z * *(b + 72 * OS1_S1 + 63) -
                                      p_over_q * *(b + 107 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 45 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 38);
            *(b + 72 * OS1_S1 + 97) =
                prefactor_y * *(b + 72 * OS1_S1 + 65) -
                p_over_q * *(b + 106 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 65);
            *(b + 72 * OS1_S1 + 98) =
                prefactor_x * *(b + 72 * OS1_S1 + 70) -
                p_over_q * *(b + 100 * OS1_S1 + 70) +
                one_over_two_q * *(b + 51 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 49);
            *(b + 72 * OS1_S1 + 99) = prefactor_x * *(b + 72 * OS1_S1 + 71) -
                                      p_over_q * *(b + 100 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 51 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 72 * OS1_S1 + 50);
            *(b + 72 * OS1_S1 + 100) = prefactor_z * *(b + 72 * OS1_S1 + 66) -
                                       p_over_q * *(b + 107 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 66);
            *(b + 72 * OS1_S1 + 101) =
                prefactor_z * *(b + 72 * OS1_S1 + 67) -
                p_over_q * *(b + 107 * OS1_S1 + 67) +
                one_over_two_q * *(b + 45 * OS1_S1 + 67) +
                one_over_two_q * *(b + 72 * OS1_S1 + 41);
            *(b + 72 * OS1_S1 + 102) =
                prefactor_x * *(b + 72 * OS1_S1 + 74) -
                p_over_q * *(b + 100 * OS1_S1 + 74) +
                one_over_two_q * *(b + 51 * OS1_S1 + 74) +
                one_over_two_q * *(b + 72 * OS1_S1 + 53);
            *(b + 72 * OS1_S1 + 103) =
                prefactor_y * *(b + 72 * OS1_S1 + 70) -
                p_over_q * *(b + 106 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 70);
            *(b + 72 * OS1_S1 + 104) =
                prefactor_x * *(b + 72 * OS1_S1 + 76) -
                p_over_q * *(b + 100 * OS1_S1 + 76) +
                one_over_two_q * *(b + 51 * OS1_S1 + 76) +
                one_over_two_q * *(b + 72 * OS1_S1 + 55);
            *(b + 72 * OS1_S1 + 105) = prefactor_x * *(b + 72 * OS1_S1 + 77) -
                                       p_over_q * *(b + 100 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 77);
            *(b + 72 * OS1_S1 + 106) = prefactor_z * *(b + 72 * OS1_S1 + 71) -
                                       p_over_q * *(b + 107 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 71);
            *(b + 72 * OS1_S1 + 107) = prefactor_x * *(b + 72 * OS1_S1 + 79) -
                                       p_over_q * *(b + 100 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 79);
            *(b + 72 * OS1_S1 + 108) = prefactor_x * *(b + 72 * OS1_S1 + 80) -
                                       p_over_q * *(b + 100 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 80);
            *(b + 72 * OS1_S1 + 109) = prefactor_x * *(b + 72 * OS1_S1 + 81) -
                                       p_over_q * *(b + 100 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 81);
            *(b + 72 * OS1_S1 + 110) = prefactor_x * *(b + 72 * OS1_S1 + 82) -
                                       p_over_q * *(b + 100 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 82);
            *(b + 72 * OS1_S1 + 111) = prefactor_x * *(b + 72 * OS1_S1 + 83) -
                                       p_over_q * *(b + 100 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 83);
            *(b + 72 * OS1_S1 + 112) =
                prefactor_y * *(b + 72 * OS1_S1 + 77) -
                p_over_q * *(b + 106 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 72 * OS1_S1 + 50);
            *(b + 72 * OS1_S1 + 113) = prefactor_z * *(b + 72 * OS1_S1 + 77) -
                                       p_over_q * *(b + 107 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 77);
            *(b + 72 * OS1_S1 + 114) =
                prefactor_z * *(b + 72 * OS1_S1 + 78) -
                p_over_q * *(b + 107 * OS1_S1 + 78) +
                one_over_two_q * *(b + 45 * OS1_S1 + 78) +
                one_over_two_q * *(b + 72 * OS1_S1 + 50);
            *(b + 72 * OS1_S1 + 115) =
                prefactor_z * *(b + 72 * OS1_S1 + 79) -
                p_over_q * *(b + 107 * OS1_S1 + 79) +
                one_over_two_q * *(b + 45 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 51);
            *(b + 72 * OS1_S1 + 116) =
                prefactor_y * *(b + 72 * OS1_S1 + 81) -
                p_over_q * *(b + 106 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 54);
            *(b + 72 * OS1_S1 + 117) =
                prefactor_y * *(b + 72 * OS1_S1 + 82) -
                p_over_q * *(b + 106 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 82) +
                one_over_two_q * *(b + 72 * OS1_S1 + 55);
            *(b + 72 * OS1_S1 + 118) =
                prefactor_y * *(b + 72 * OS1_S1 + 83) -
                p_over_q * *(b + 106 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 83);
            *(b + 72 * OS1_S1 + 119) =
                prefactor_z * *(b + 72 * OS1_S1 + 83) -
                p_over_q * *(b + 107 * OS1_S1 + 83) +
                one_over_two_q * *(b + 45 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 72 * OS1_S1 + 55);
            *(b + 73 * OS1_S1 + 84) =
                prefactor_x * *(b + 73 * OS1_S1 + 56) -
                p_over_q * *(b + 101 * OS1_S1 + 56) +
                one_over_two_q * *(b + 52 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 73 * OS1_S1 + 35);
            *(b + 73 * OS1_S1 + 85) =
                prefactor_y * *(b + 73 * OS1_S1 + 56) -
                p_over_q * *(b + 107 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 56);
            *(b + 73 * OS1_S1 + 86) =
                prefactor_z * *(b + 73 * OS1_S1 + 56) -
                p_over_q * *(b + 108 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 56);
            *(b + 73 * OS1_S1 + 87) =
                prefactor_y * *(b + 73 * OS1_S1 + 57) -
                p_over_q * *(b + 107 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 57) +
                one_over_two_q * *(b + 73 * OS1_S1 + 35);
            *(b + 73 * OS1_S1 + 88) =
                prefactor_z * *(b + 73 * OS1_S1 + 57) -
                p_over_q * *(b + 108 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 57);
            *(b + 73 * OS1_S1 + 89) =
                prefactor_z * *(b + 73 * OS1_S1 + 58) -
                p_over_q * *(b + 108 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 58) +
                one_over_two_q * *(b + 73 * OS1_S1 + 35);
            *(b + 73 * OS1_S1 + 90) =
                prefactor_y * *(b + 73 * OS1_S1 + 59) -
                p_over_q * *(b + 107 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 36);
            *(b + 73 * OS1_S1 + 91) =
                prefactor_z * *(b + 73 * OS1_S1 + 59) -
                p_over_q * *(b + 108 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 59);
            *(b + 73 * OS1_S1 + 92) =
                prefactor_y * *(b + 73 * OS1_S1 + 61) -
                p_over_q * *(b + 107 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 61);
            *(b + 73 * OS1_S1 + 93) =
                prefactor_z * *(b + 73 * OS1_S1 + 61) -
                p_over_q * *(b + 108 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 37);
            *(b + 73 * OS1_S1 + 94) =
                prefactor_x * *(b + 73 * OS1_S1 + 66) -
                p_over_q * *(b + 101 * OS1_S1 + 66) +
                one_over_two_q * *(b + 52 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 45);
            *(b + 73 * OS1_S1 + 95) =
                prefactor_z * *(b + 73 * OS1_S1 + 62) -
                p_over_q * *(b + 108 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 62);
            *(b + 73 * OS1_S1 + 96) =
                prefactor_z * *(b + 73 * OS1_S1 + 63) -
                p_over_q * *(b + 108 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 63) +
                one_over_two_q * *(b + 73 * OS1_S1 + 38);
            *(b + 73 * OS1_S1 + 97) =
                prefactor_y * *(b + 73 * OS1_S1 + 65) -
                p_over_q * *(b + 107 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 65);
            *(b + 73 * OS1_S1 + 98) =
                prefactor_x * *(b + 73 * OS1_S1 + 70) -
                p_over_q * *(b + 101 * OS1_S1 + 70) +
                one_over_two_q * *(b + 52 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 49);
            *(b + 73 * OS1_S1 + 99) = prefactor_x * *(b + 73 * OS1_S1 + 71) -
                                      p_over_q * *(b + 101 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 52 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 73 * OS1_S1 + 50);
            *(b + 73 * OS1_S1 + 100) =
                prefactor_z * *(b + 73 * OS1_S1 + 66) -
                p_over_q * *(b + 108 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 66);
            *(b + 73 * OS1_S1 + 101) =
                prefactor_x * *(b + 73 * OS1_S1 + 73) -
                p_over_q * *(b + 101 * OS1_S1 + 73) +
                one_over_two_q * *(b + 52 * OS1_S1 + 73) +
                one_over_two_q * *(b + 73 * OS1_S1 + 52);
            *(b + 73 * OS1_S1 + 102) =
                prefactor_x * *(b + 73 * OS1_S1 + 74) -
                p_over_q * *(b + 101 * OS1_S1 + 74) +
                one_over_two_q * *(b + 52 * OS1_S1 + 74) +
                one_over_two_q * *(b + 73 * OS1_S1 + 53);
            *(b + 73 * OS1_S1 + 103) =
                prefactor_y * *(b + 73 * OS1_S1 + 70) -
                p_over_q * *(b + 107 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 70);
            *(b + 73 * OS1_S1 + 104) =
                prefactor_x * *(b + 73 * OS1_S1 + 76) -
                p_over_q * *(b + 101 * OS1_S1 + 76) +
                one_over_two_q * *(b + 52 * OS1_S1 + 76) +
                one_over_two_q * *(b + 73 * OS1_S1 + 55);
            *(b + 73 * OS1_S1 + 105) = prefactor_x * *(b + 73 * OS1_S1 + 77) -
                                       p_over_q * *(b + 101 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 77);
            *(b + 73 * OS1_S1 + 106) = prefactor_x * *(b + 73 * OS1_S1 + 78) -
                                       p_over_q * *(b + 101 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 78);
            *(b + 73 * OS1_S1 + 107) = prefactor_x * *(b + 73 * OS1_S1 + 79) -
                                       p_over_q * *(b + 101 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 79);
            *(b + 73 * OS1_S1 + 108) = prefactor_x * *(b + 73 * OS1_S1 + 80) -
                                       p_over_q * *(b + 101 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 80);
            *(b + 73 * OS1_S1 + 109) = prefactor_x * *(b + 73 * OS1_S1 + 81) -
                                       p_over_q * *(b + 101 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 81);
            *(b + 73 * OS1_S1 + 110) = prefactor_x * *(b + 73 * OS1_S1 + 82) -
                                       p_over_q * *(b + 101 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 82);
            *(b + 73 * OS1_S1 + 111) = prefactor_x * *(b + 73 * OS1_S1 + 83) -
                                       p_over_q * *(b + 101 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 83);
            *(b + 73 * OS1_S1 + 112) =
                prefactor_y * *(b + 73 * OS1_S1 + 77) -
                p_over_q * *(b + 107 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 73 * OS1_S1 + 50);
            *(b + 73 * OS1_S1 + 113) =
                prefactor_z * *(b + 73 * OS1_S1 + 77) -
                p_over_q * *(b + 108 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 77);
            *(b + 73 * OS1_S1 + 114) =
                prefactor_z * *(b + 73 * OS1_S1 + 78) -
                p_over_q * *(b + 108 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 78) +
                one_over_two_q * *(b + 73 * OS1_S1 + 50);
            *(b + 73 * OS1_S1 + 115) =
                prefactor_z * *(b + 73 * OS1_S1 + 79) -
                p_over_q * *(b + 108 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 51);
            *(b + 73 * OS1_S1 + 116) =
                prefactor_y * *(b + 73 * OS1_S1 + 81) -
                p_over_q * *(b + 107 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 54);
            *(b + 73 * OS1_S1 + 117) =
                prefactor_y * *(b + 73 * OS1_S1 + 82) -
                p_over_q * *(b + 107 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 82) +
                one_over_two_q * *(b + 73 * OS1_S1 + 55);
            *(b + 73 * OS1_S1 + 118) =
                prefactor_y * *(b + 73 * OS1_S1 + 83) -
                p_over_q * *(b + 107 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 83);
            *(b + 73 * OS1_S1 + 119) =
                prefactor_z * *(b + 73 * OS1_S1 + 83) -
                p_over_q * *(b + 108 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 73 * OS1_S1 + 55);
            *(b + 74 * OS1_S1 + 84) =
                prefactor_x * *(b + 74 * OS1_S1 + 56) -
                p_over_q * *(b + 102 * OS1_S1 + 56) +
                one_over_two_q * *(b + 53 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 74 * OS1_S1 + 35);
            *(b + 74 * OS1_S1 + 85) =
                prefactor_y * *(b + 74 * OS1_S1 + 56) -
                p_over_q * *(b + 108 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 56);
            *(b + 74 * OS1_S1 + 86) =
                prefactor_z * *(b + 74 * OS1_S1 + 56) -
                p_over_q * *(b + 109 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 56);
            *(b + 74 * OS1_S1 + 87) =
                prefactor_y * *(b + 74 * OS1_S1 + 57) -
                p_over_q * *(b + 108 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 57) +
                one_over_two_q * *(b + 74 * OS1_S1 + 35);
            *(b + 74 * OS1_S1 + 88) =
                prefactor_y * *(b + 74 * OS1_S1 + 58) -
                p_over_q * *(b + 108 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 58);
            *(b + 74 * OS1_S1 + 89) =
                prefactor_z * *(b + 74 * OS1_S1 + 58) -
                p_over_q * *(b + 109 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 58) +
                one_over_two_q * *(b + 74 * OS1_S1 + 35);
            *(b + 74 * OS1_S1 + 90) =
                prefactor_y * *(b + 74 * OS1_S1 + 59) -
                p_over_q * *(b + 108 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 36);
            *(b + 74 * OS1_S1 + 91) =
                prefactor_z * *(b + 74 * OS1_S1 + 59) -
                p_over_q * *(b + 109 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 59);
            *(b + 74 * OS1_S1 + 92) =
                prefactor_y * *(b + 74 * OS1_S1 + 61) -
                p_over_q * *(b + 108 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 61);
            *(b + 74 * OS1_S1 + 93) =
                prefactor_z * *(b + 74 * OS1_S1 + 61) -
                p_over_q * *(b + 109 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 37);
            *(b + 74 * OS1_S1 + 94) =
                prefactor_x * *(b + 74 * OS1_S1 + 66) -
                p_over_q * *(b + 102 * OS1_S1 + 66) +
                one_over_two_q * *(b + 53 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 45);
            *(b + 74 * OS1_S1 + 95) =
                prefactor_z * *(b + 74 * OS1_S1 + 62) -
                p_over_q * *(b + 109 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 62);
            *(b + 74 * OS1_S1 + 96) =
                prefactor_y * *(b + 74 * OS1_S1 + 64) -
                p_over_q * *(b + 108 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 64) +
                one_over_two_q * *(b + 74 * OS1_S1 + 40);
            *(b + 74 * OS1_S1 + 97) =
                prefactor_y * *(b + 74 * OS1_S1 + 65) -
                p_over_q * *(b + 108 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 65);
            *(b + 74 * OS1_S1 + 98) =
                prefactor_x * *(b + 74 * OS1_S1 + 70) -
                p_over_q * *(b + 102 * OS1_S1 + 70) +
                one_over_two_q * *(b + 53 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 49);
            *(b + 74 * OS1_S1 + 99) = prefactor_x * *(b + 74 * OS1_S1 + 71) -
                                      p_over_q * *(b + 102 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 53 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 74 * OS1_S1 + 50);
            *(b + 74 * OS1_S1 + 100) =
                prefactor_z * *(b + 74 * OS1_S1 + 66) -
                p_over_q * *(b + 109 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 66);
            *(b + 74 * OS1_S1 + 101) =
                prefactor_x * *(b + 74 * OS1_S1 + 73) -
                p_over_q * *(b + 102 * OS1_S1 + 73) +
                one_over_two_q * *(b + 53 * OS1_S1 + 73) +
                one_over_two_q * *(b + 74 * OS1_S1 + 52);
            *(b + 74 * OS1_S1 + 102) =
                prefactor_x * *(b + 74 * OS1_S1 + 74) -
                p_over_q * *(b + 102 * OS1_S1 + 74) +
                one_over_two_q * *(b + 53 * OS1_S1 + 74) +
                one_over_two_q * *(b + 74 * OS1_S1 + 53);
            *(b + 74 * OS1_S1 + 103) =
                prefactor_y * *(b + 74 * OS1_S1 + 70) -
                p_over_q * *(b + 108 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 70);
            *(b + 74 * OS1_S1 + 104) =
                prefactor_x * *(b + 74 * OS1_S1 + 76) -
                p_over_q * *(b + 102 * OS1_S1 + 76) +
                one_over_two_q * *(b + 53 * OS1_S1 + 76) +
                one_over_two_q * *(b + 74 * OS1_S1 + 55);
            *(b + 74 * OS1_S1 + 105) = prefactor_x * *(b + 74 * OS1_S1 + 77) -
                                       p_over_q * *(b + 102 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 77);
            *(b + 74 * OS1_S1 + 106) = prefactor_x * *(b + 74 * OS1_S1 + 78) -
                                       p_over_q * *(b + 102 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 78);
            *(b + 74 * OS1_S1 + 107) = prefactor_x * *(b + 74 * OS1_S1 + 79) -
                                       p_over_q * *(b + 102 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 79);
            *(b + 74 * OS1_S1 + 108) = prefactor_x * *(b + 74 * OS1_S1 + 80) -
                                       p_over_q * *(b + 102 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 80);
            *(b + 74 * OS1_S1 + 109) = prefactor_x * *(b + 74 * OS1_S1 + 81) -
                                       p_over_q * *(b + 102 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 81);
            *(b + 74 * OS1_S1 + 110) = prefactor_x * *(b + 74 * OS1_S1 + 82) -
                                       p_over_q * *(b + 102 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 82);
            *(b + 74 * OS1_S1 + 111) = prefactor_x * *(b + 74 * OS1_S1 + 83) -
                                       p_over_q * *(b + 102 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 83);
            *(b + 74 * OS1_S1 + 112) =
                prefactor_y * *(b + 74 * OS1_S1 + 77) -
                p_over_q * *(b + 108 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 74 * OS1_S1 + 50);
            *(b + 74 * OS1_S1 + 113) =
                prefactor_z * *(b + 74 * OS1_S1 + 77) -
                p_over_q * *(b + 109 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 77);
            *(b + 74 * OS1_S1 + 114) =
                prefactor_z * *(b + 74 * OS1_S1 + 78) -
                p_over_q * *(b + 109 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 78) +
                one_over_two_q * *(b + 74 * OS1_S1 + 50);
            *(b + 74 * OS1_S1 + 115) =
                prefactor_z * *(b + 74 * OS1_S1 + 79) -
                p_over_q * *(b + 109 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 51);
            *(b + 74 * OS1_S1 + 116) =
                prefactor_y * *(b + 74 * OS1_S1 + 81) -
                p_over_q * *(b + 108 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 54);
            *(b + 74 * OS1_S1 + 117) =
                prefactor_y * *(b + 74 * OS1_S1 + 82) -
                p_over_q * *(b + 108 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 82) +
                one_over_two_q * *(b + 74 * OS1_S1 + 55);
            *(b + 74 * OS1_S1 + 118) =
                prefactor_y * *(b + 74 * OS1_S1 + 83) -
                p_over_q * *(b + 108 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 83);
            *(b + 74 * OS1_S1 + 119) =
                prefactor_z * *(b + 74 * OS1_S1 + 83) -
                p_over_q * *(b + 109 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 74 * OS1_S1 + 55);
            *(b + 75 * OS1_S1 + 84) =
                prefactor_x * *(b + 75 * OS1_S1 + 56) -
                p_over_q * *(b + 103 * OS1_S1 + 56) +
                one_over_two_q * *(b + 54 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 75 * OS1_S1 + 35);
            *(b + 75 * OS1_S1 + 85) = prefactor_y * *(b + 75 * OS1_S1 + 56) -
                                      p_over_q * *(b + 109 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 56);
            *(b + 75 * OS1_S1 + 86) =
                prefactor_z * *(b + 75 * OS1_S1 + 56) -
                p_over_q * *(b + 110 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 56);
            *(b + 75 * OS1_S1 + 87) = prefactor_y * *(b + 75 * OS1_S1 + 57) -
                                      p_over_q * *(b + 109 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 35);
            *(b + 75 * OS1_S1 + 88) = prefactor_y * *(b + 75 * OS1_S1 + 58) -
                                      p_over_q * *(b + 109 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 58);
            *(b + 75 * OS1_S1 + 89) =
                prefactor_z * *(b + 75 * OS1_S1 + 58) -
                p_over_q * *(b + 110 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 58) +
                one_over_two_q * *(b + 75 * OS1_S1 + 35);
            *(b + 75 * OS1_S1 + 90) =
                prefactor_y * *(b + 75 * OS1_S1 + 59) -
                p_over_q * *(b + 109 * OS1_S1 + 59) +
                one_over_two_q * *(b + 49 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 36);
            *(b + 75 * OS1_S1 + 91) =
                prefactor_z * *(b + 75 * OS1_S1 + 59) -
                p_over_q * *(b + 110 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 59);
            *(b + 75 * OS1_S1 + 92) = prefactor_y * *(b + 75 * OS1_S1 + 61) -
                                      p_over_q * *(b + 109 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 61);
            *(b + 75 * OS1_S1 + 93) =
                prefactor_z * *(b + 75 * OS1_S1 + 61) -
                p_over_q * *(b + 110 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 37);
            *(b + 75 * OS1_S1 + 94) =
                prefactor_x * *(b + 75 * OS1_S1 + 66) -
                p_over_q * *(b + 103 * OS1_S1 + 66) +
                one_over_two_q * *(b + 54 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 45);
            *(b + 75 * OS1_S1 + 95) =
                prefactor_z * *(b + 75 * OS1_S1 + 62) -
                p_over_q * *(b + 110 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 62);
            *(b + 75 * OS1_S1 + 96) = prefactor_y * *(b + 75 * OS1_S1 + 64) -
                                      p_over_q * *(b + 109 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 40);
            *(b + 75 * OS1_S1 + 97) = prefactor_y * *(b + 75 * OS1_S1 + 65) -
                                      p_over_q * *(b + 109 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 49 * OS1_S1 + 65);
            *(b + 75 * OS1_S1 + 98) =
                prefactor_x * *(b + 75 * OS1_S1 + 70) -
                p_over_q * *(b + 103 * OS1_S1 + 70) +
                one_over_two_q * *(b + 54 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 49);
            *(b + 75 * OS1_S1 + 99) = prefactor_x * *(b + 75 * OS1_S1 + 71) -
                                      p_over_q * *(b + 103 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 54 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 75 * OS1_S1 + 50);
            *(b + 75 * OS1_S1 + 100) =
                prefactor_z * *(b + 75 * OS1_S1 + 66) -
                p_over_q * *(b + 110 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 66);
            *(b + 75 * OS1_S1 + 101) =
                prefactor_x * *(b + 75 * OS1_S1 + 73) -
                p_over_q * *(b + 103 * OS1_S1 + 73) +
                one_over_two_q * *(b + 54 * OS1_S1 + 73) +
                one_over_two_q * *(b + 75 * OS1_S1 + 52);
            *(b + 75 * OS1_S1 + 102) =
                prefactor_y * *(b + 75 * OS1_S1 + 69) -
                p_over_q * *(b + 109 * OS1_S1 + 69) +
                one_over_two_q * *(b + 49 * OS1_S1 + 69) +
                one_over_two_q * *(b + 75 * OS1_S1 + 44);
            *(b + 75 * OS1_S1 + 103) = prefactor_y * *(b + 75 * OS1_S1 + 70) -
                                       p_over_q * *(b + 109 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 70);
            *(b + 75 * OS1_S1 + 104) =
                prefactor_x * *(b + 75 * OS1_S1 + 76) -
                p_over_q * *(b + 103 * OS1_S1 + 76) +
                one_over_two_q * *(b + 54 * OS1_S1 + 76) +
                one_over_two_q * *(b + 75 * OS1_S1 + 55);
            *(b + 75 * OS1_S1 + 105) = prefactor_x * *(b + 75 * OS1_S1 + 77) -
                                       p_over_q * *(b + 103 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 77);
            *(b + 75 * OS1_S1 + 106) = prefactor_x * *(b + 75 * OS1_S1 + 78) -
                                       p_over_q * *(b + 103 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 78);
            *(b + 75 * OS1_S1 + 107) = prefactor_x * *(b + 75 * OS1_S1 + 79) -
                                       p_over_q * *(b + 103 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 79);
            *(b + 75 * OS1_S1 + 108) = prefactor_x * *(b + 75 * OS1_S1 + 80) -
                                       p_over_q * *(b + 103 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 80);
            *(b + 75 * OS1_S1 + 109) = prefactor_x * *(b + 75 * OS1_S1 + 81) -
                                       p_over_q * *(b + 103 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 81);
            *(b + 75 * OS1_S1 + 110) = prefactor_y * *(b + 75 * OS1_S1 + 76) -
                                       p_over_q * *(b + 109 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 76);
            *(b + 75 * OS1_S1 + 111) = prefactor_x * *(b + 75 * OS1_S1 + 83) -
                                       p_over_q * *(b + 103 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 83);
            *(b + 75 * OS1_S1 + 112) =
                prefactor_y * *(b + 75 * OS1_S1 + 77) -
                p_over_q * *(b + 109 * OS1_S1 + 77) +
                one_over_two_q * *(b + 49 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 75 * OS1_S1 + 50);
            *(b + 75 * OS1_S1 + 113) =
                prefactor_z * *(b + 75 * OS1_S1 + 77) -
                p_over_q * *(b + 110 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 77);
            *(b + 75 * OS1_S1 + 114) =
                prefactor_z * *(b + 75 * OS1_S1 + 78) -
                p_over_q * *(b + 110 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 78) +
                one_over_two_q * *(b + 75 * OS1_S1 + 50);
            *(b + 75 * OS1_S1 + 115) =
                prefactor_z * *(b + 75 * OS1_S1 + 79) -
                p_over_q * *(b + 110 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 51);
            *(b + 75 * OS1_S1 + 116) =
                prefactor_y * *(b + 75 * OS1_S1 + 81) -
                p_over_q * *(b + 109 * OS1_S1 + 81) +
                one_over_two_q * *(b + 49 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 54);
            *(b + 75 * OS1_S1 + 117) =
                prefactor_y * *(b + 75 * OS1_S1 + 82) -
                p_over_q * *(b + 109 * OS1_S1 + 82) +
                one_over_two_q * *(b + 49 * OS1_S1 + 82) +
                one_over_two_q * *(b + 75 * OS1_S1 + 55);
            *(b + 75 * OS1_S1 + 118) = prefactor_y * *(b + 75 * OS1_S1 + 83) -
                                       p_over_q * *(b + 109 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 83);
            *(b + 75 * OS1_S1 + 119) =
                prefactor_z * *(b + 75 * OS1_S1 + 83) -
                p_over_q * *(b + 110 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 75 * OS1_S1 + 55);
            *(b + 76 * OS1_S1 + 84) =
                prefactor_x * *(b + 76 * OS1_S1 + 56) -
                p_over_q * *(b + 104 * OS1_S1 + 56) +
                one_over_two_q * *(b + 55 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 35);
            *(b + 76 * OS1_S1 + 85) = prefactor_y * *(b + 76 * OS1_S1 + 56) -
                                      p_over_q * *(b + 110 * OS1_S1 + 56);
            *(b + 76 * OS1_S1 + 86) =
                prefactor_z * *(b + 76 * OS1_S1 + 56) -
                p_over_q * *(b + 111 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 56);
            *(b + 76 * OS1_S1 + 87) = prefactor_y * *(b + 76 * OS1_S1 + 57) -
                                      p_over_q * *(b + 110 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 35);
            *(b + 76 * OS1_S1 + 88) = prefactor_y * *(b + 76 * OS1_S1 + 58) -
                                      p_over_q * *(b + 110 * OS1_S1 + 58);
            *(b + 76 * OS1_S1 + 89) =
                prefactor_z * *(b + 76 * OS1_S1 + 58) -
                p_over_q * *(b + 111 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 58) +
                one_over_two_q * *(b + 76 * OS1_S1 + 35);
            *(b + 76 * OS1_S1 + 90) =
                prefactor_y * *(b + 76 * OS1_S1 + 59) -
                p_over_q * *(b + 110 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 36);
            *(b + 76 * OS1_S1 + 91) =
                prefactor_z * *(b + 76 * OS1_S1 + 59) -
                p_over_q * *(b + 111 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 59);
            *(b + 76 * OS1_S1 + 92) = prefactor_y * *(b + 76 * OS1_S1 + 61) -
                                      p_over_q * *(b + 110 * OS1_S1 + 61);
            *(b + 76 * OS1_S1 + 93) =
                prefactor_z * *(b + 76 * OS1_S1 + 61) -
                p_over_q * *(b + 111 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 37);
            *(b + 76 * OS1_S1 + 94) =
                prefactor_x * *(b + 76 * OS1_S1 + 66) -
                p_over_q * *(b + 104 * OS1_S1 + 66) +
                one_over_two_q * *(b + 55 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 45);
            *(b + 76 * OS1_S1 + 95) =
                prefactor_z * *(b + 76 * OS1_S1 + 62) -
                p_over_q * *(b + 111 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 62);
            *(b + 76 * OS1_S1 + 96) = prefactor_y * *(b + 76 * OS1_S1 + 64) -
                                      p_over_q * *(b + 110 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 40);
            *(b + 76 * OS1_S1 + 97) = prefactor_y * *(b + 76 * OS1_S1 + 65) -
                                      p_over_q * *(b + 110 * OS1_S1 + 65);
            *(b + 76 * OS1_S1 + 98) =
                prefactor_x * *(b + 76 * OS1_S1 + 70) -
                p_over_q * *(b + 104 * OS1_S1 + 70) +
                one_over_two_q * *(b + 55 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 49);
            *(b + 76 * OS1_S1 + 99) = prefactor_x * *(b + 76 * OS1_S1 + 71) -
                                      p_over_q * *(b + 104 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 76 * OS1_S1 + 50);
            *(b + 76 * OS1_S1 + 100) =
                prefactor_z * *(b + 76 * OS1_S1 + 66) -
                p_over_q * *(b + 111 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 66);
            *(b + 76 * OS1_S1 + 101) =
                prefactor_x * *(b + 76 * OS1_S1 + 73) -
                p_over_q * *(b + 104 * OS1_S1 + 73) +
                one_over_two_q * *(b + 55 * OS1_S1 + 73) +
                one_over_two_q * *(b + 76 * OS1_S1 + 52);
            *(b + 76 * OS1_S1 + 102) = prefactor_y * *(b + 76 * OS1_S1 + 69) -
                                       p_over_q * *(b + 110 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 44);
            *(b + 76 * OS1_S1 + 103) = prefactor_y * *(b + 76 * OS1_S1 + 70) -
                                       p_over_q * *(b + 110 * OS1_S1 + 70);
            *(b + 76 * OS1_S1 + 104) =
                prefactor_x * *(b + 76 * OS1_S1 + 76) -
                p_over_q * *(b + 104 * OS1_S1 + 76) +
                one_over_two_q * *(b + 55 * OS1_S1 + 76) +
                one_over_two_q * *(b + 76 * OS1_S1 + 55);
            *(b + 76 * OS1_S1 + 105) = prefactor_x * *(b + 76 * OS1_S1 + 77) -
                                       p_over_q * *(b + 104 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 77);
            *(b + 76 * OS1_S1 + 106) = prefactor_x * *(b + 76 * OS1_S1 + 78) -
                                       p_over_q * *(b + 104 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 78);
            *(b + 76 * OS1_S1 + 107) = prefactor_x * *(b + 76 * OS1_S1 + 79) -
                                       p_over_q * *(b + 104 * OS1_S1 + 79) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 79);
            *(b + 76 * OS1_S1 + 108) = prefactor_x * *(b + 76 * OS1_S1 + 80) -
                                       p_over_q * *(b + 104 * OS1_S1 + 80) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 80);
            *(b + 76 * OS1_S1 + 109) = prefactor_x * *(b + 76 * OS1_S1 + 81) -
                                       p_over_q * *(b + 104 * OS1_S1 + 81) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 81);
            *(b + 76 * OS1_S1 + 110) = prefactor_y * *(b + 76 * OS1_S1 + 76) -
                                       p_over_q * *(b + 110 * OS1_S1 + 76);
            *(b + 76 * OS1_S1 + 111) = prefactor_x * *(b + 76 * OS1_S1 + 83) -
                                       p_over_q * *(b + 104 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 83);
            *(b + 76 * OS1_S1 + 112) =
                prefactor_y * *(b + 76 * OS1_S1 + 77) -
                p_over_q * *(b + 110 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 50);
            *(b + 76 * OS1_S1 + 113) =
                prefactor_z * *(b + 76 * OS1_S1 + 77) -
                p_over_q * *(b + 111 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 77);
            *(b + 76 * OS1_S1 + 114) =
                prefactor_z * *(b + 76 * OS1_S1 + 78) -
                p_over_q * *(b + 111 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 78) +
                one_over_two_q * *(b + 76 * OS1_S1 + 50);
            *(b + 76 * OS1_S1 + 115) =
                prefactor_z * *(b + 76 * OS1_S1 + 79) -
                p_over_q * *(b + 111 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 51);
            *(b + 76 * OS1_S1 + 116) =
                prefactor_y * *(b + 76 * OS1_S1 + 81) -
                p_over_q * *(b + 110 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 54);
            *(b + 76 * OS1_S1 + 117) = prefactor_y * *(b + 76 * OS1_S1 + 82) -
                                       p_over_q * *(b + 110 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 55);
            *(b + 76 * OS1_S1 + 118) = prefactor_y * *(b + 76 * OS1_S1 + 83) -
                                       p_over_q * *(b + 110 * OS1_S1 + 83);
            *(b + 76 * OS1_S1 + 119) =
                prefactor_z * *(b + 76 * OS1_S1 + 83) -
                p_over_q * *(b + 111 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 55);
            *(b + 77 * OS1_S1 + 84) =
                prefactor_x * *(b + 77 * OS1_S1 + 56) -
                p_over_q * *(b + 105 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 77 * OS1_S1 + 35);
            *(b + 77 * OS1_S1 + 85) =
                prefactor_y * *(b + 77 * OS1_S1 + 56) -
                p_over_q * *(b + 112 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 56);
            *(b + 77 * OS1_S1 + 86) = prefactor_z * *(b + 77 * OS1_S1 + 56) -
                                      p_over_q * *(b + 113 * OS1_S1 + 56);
            *(b + 77 * OS1_S1 + 87) =
                prefactor_y * *(b + 77 * OS1_S1 + 57) -
                p_over_q * *(b + 112 * OS1_S1 + 57) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 57) +
                one_over_two_q * *(b + 77 * OS1_S1 + 35);
            *(b + 77 * OS1_S1 + 88) = prefactor_z * *(b + 77 * OS1_S1 + 57) -
                                      p_over_q * *(b + 113 * OS1_S1 + 57);
            *(b + 77 * OS1_S1 + 89) = prefactor_z * *(b + 77 * OS1_S1 + 58) -
                                      p_over_q * *(b + 113 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 35);
            *(b + 77 * OS1_S1 + 90) =
                prefactor_y * *(b + 77 * OS1_S1 + 59) -
                p_over_q * *(b + 112 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 36);
            *(b + 77 * OS1_S1 + 91) = prefactor_z * *(b + 77 * OS1_S1 + 59) -
                                      p_over_q * *(b + 113 * OS1_S1 + 59);
            *(b + 77 * OS1_S1 + 92) =
                prefactor_y * *(b + 77 * OS1_S1 + 61) -
                p_over_q * *(b + 112 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 61);
            *(b + 77 * OS1_S1 + 93) =
                prefactor_z * *(b + 77 * OS1_S1 + 61) -
                p_over_q * *(b + 113 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 37);
            *(b + 77 * OS1_S1 + 94) =
                prefactor_x * *(b + 77 * OS1_S1 + 66) -
                p_over_q * *(b + 105 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 45);
            *(b + 77 * OS1_S1 + 95) = prefactor_z * *(b + 77 * OS1_S1 + 62) -
                                      p_over_q * *(b + 113 * OS1_S1 + 62);
            *(b + 77 * OS1_S1 + 96) = prefactor_z * *(b + 77 * OS1_S1 + 63) -
                                      p_over_q * *(b + 113 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 38);
            *(b + 77 * OS1_S1 + 97) =
                prefactor_y * *(b + 77 * OS1_S1 + 65) -
                p_over_q * *(b + 112 * OS1_S1 + 65) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 65);
            *(b + 77 * OS1_S1 + 98) =
                prefactor_x * *(b + 77 * OS1_S1 + 70) -
                p_over_q * *(b + 105 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 49);
            *(b + 77 * OS1_S1 + 99) = prefactor_x * *(b + 77 * OS1_S1 + 71) -
                                      p_over_q * *(b + 105 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 77 * OS1_S1 + 50);
            *(b + 77 * OS1_S1 + 100) = prefactor_z * *(b + 77 * OS1_S1 + 66) -
                                       p_over_q * *(b + 113 * OS1_S1 + 66);
            *(b + 77 * OS1_S1 + 101) = prefactor_z * *(b + 77 * OS1_S1 + 67) -
                                       p_over_q * *(b + 113 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 41);
            *(b + 77 * OS1_S1 + 102) = prefactor_x * *(b + 77 * OS1_S1 + 74) -
                                       p_over_q * *(b + 105 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 53);
            *(b + 77 * OS1_S1 + 103) =
                prefactor_y * *(b + 77 * OS1_S1 + 70) -
                p_over_q * *(b + 112 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 70);
            *(b + 77 * OS1_S1 + 104) = prefactor_x * *(b + 77 * OS1_S1 + 76) -
                                       p_over_q * *(b + 105 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 55);
            *(b + 77 * OS1_S1 + 105) = prefactor_x * *(b + 77 * OS1_S1 + 77) -
                                       p_over_q * *(b + 105 * OS1_S1 + 77);
            *(b + 77 * OS1_S1 + 106) = prefactor_z * *(b + 77 * OS1_S1 + 71) -
                                       p_over_q * *(b + 113 * OS1_S1 + 71);
            *(b + 77 * OS1_S1 + 107) = prefactor_x * *(b + 77 * OS1_S1 + 79) -
                                       p_over_q * *(b + 105 * OS1_S1 + 79);
            *(b + 77 * OS1_S1 + 108) = prefactor_x * *(b + 77 * OS1_S1 + 80) -
                                       p_over_q * *(b + 105 * OS1_S1 + 80);
            *(b + 77 * OS1_S1 + 109) = prefactor_x * *(b + 77 * OS1_S1 + 81) -
                                       p_over_q * *(b + 105 * OS1_S1 + 81);
            *(b + 77 * OS1_S1 + 110) = prefactor_x * *(b + 77 * OS1_S1 + 82) -
                                       p_over_q * *(b + 105 * OS1_S1 + 82);
            *(b + 77 * OS1_S1 + 111) = prefactor_x * *(b + 77 * OS1_S1 + 83) -
                                       p_over_q * *(b + 105 * OS1_S1 + 83);
            *(b + 77 * OS1_S1 + 112) =
                prefactor_y * *(b + 77 * OS1_S1 + 77) -
                p_over_q * *(b + 112 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 77 * OS1_S1 + 50);
            *(b + 77 * OS1_S1 + 113) = prefactor_z * *(b + 77 * OS1_S1 + 77) -
                                       p_over_q * *(b + 113 * OS1_S1 + 77);
            *(b + 77 * OS1_S1 + 114) = prefactor_z * *(b + 77 * OS1_S1 + 78) -
                                       p_over_q * *(b + 113 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 50);
            *(b + 77 * OS1_S1 + 115) =
                prefactor_z * *(b + 77 * OS1_S1 + 79) -
                p_over_q * *(b + 113 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 51);
            *(b + 77 * OS1_S1 + 116) =
                prefactor_y * *(b + 77 * OS1_S1 + 81) -
                p_over_q * *(b + 112 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 54);
            *(b + 77 * OS1_S1 + 117) =
                prefactor_y * *(b + 77 * OS1_S1 + 82) -
                p_over_q * *(b + 112 * OS1_S1 + 82) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 82) +
                one_over_two_q * *(b + 77 * OS1_S1 + 55);
            *(b + 77 * OS1_S1 + 118) =
                prefactor_y * *(b + 77 * OS1_S1 + 83) -
                p_over_q * *(b + 112 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 83);
            *(b + 77 * OS1_S1 + 119) =
                prefactor_z * *(b + 77 * OS1_S1 + 83) -
                p_over_q * *(b + 113 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 77 * OS1_S1 + 55);
            *(b + 78 * OS1_S1 + 84) =
                prefactor_x * *(b + 78 * OS1_S1 + 56) -
                p_over_q * *(b + 106 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 35);
            *(b + 78 * OS1_S1 + 85) =
                prefactor_y * *(b + 78 * OS1_S1 + 56) -
                p_over_q * *(b + 113 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 56);
            *(b + 78 * OS1_S1 + 86) = prefactor_z * *(b + 78 * OS1_S1 + 56) -
                                      p_over_q * *(b + 114 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 56);
            *(b + 78 * OS1_S1 + 87) =
                prefactor_y * *(b + 78 * OS1_S1 + 57) -
                p_over_q * *(b + 113 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 57) +
                one_over_two_q * *(b + 78 * OS1_S1 + 35);
            *(b + 78 * OS1_S1 + 88) = prefactor_z * *(b + 78 * OS1_S1 + 57) -
                                      p_over_q * *(b + 114 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 57);
            *(b + 78 * OS1_S1 + 89) = prefactor_z * *(b + 78 * OS1_S1 + 58) -
                                      p_over_q * *(b + 114 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 35);
            *(b + 78 * OS1_S1 + 90) =
                prefactor_y * *(b + 78 * OS1_S1 + 59) -
                p_over_q * *(b + 113 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 36);
            *(b + 78 * OS1_S1 + 91) = prefactor_z * *(b + 78 * OS1_S1 + 59) -
                                      p_over_q * *(b + 114 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 59);
            *(b + 78 * OS1_S1 + 92) =
                prefactor_y * *(b + 78 * OS1_S1 + 61) -
                p_over_q * *(b + 113 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 61);
            *(b + 78 * OS1_S1 + 93) =
                prefactor_z * *(b + 78 * OS1_S1 + 61) -
                p_over_q * *(b + 114 * OS1_S1 + 61) +
                one_over_two_q * *(b + 50 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 37);
            *(b + 78 * OS1_S1 + 94) =
                prefactor_x * *(b + 78 * OS1_S1 + 66) -
                p_over_q * *(b + 106 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 45);
            *(b + 78 * OS1_S1 + 95) = prefactor_z * *(b + 78 * OS1_S1 + 62) -
                                      p_over_q * *(b + 114 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 62);
            *(b + 78 * OS1_S1 + 96) = prefactor_z * *(b + 78 * OS1_S1 + 63) -
                                      p_over_q * *(b + 114 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 50 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 38);
            *(b + 78 * OS1_S1 + 97) =
                prefactor_y * *(b + 78 * OS1_S1 + 65) -
                p_over_q * *(b + 113 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 65);
            *(b + 78 * OS1_S1 + 98) =
                prefactor_x * *(b + 78 * OS1_S1 + 70) -
                p_over_q * *(b + 106 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 49);
            *(b + 78 * OS1_S1 + 99) = prefactor_x * *(b + 78 * OS1_S1 + 71) -
                                      p_over_q * *(b + 106 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 78 * OS1_S1 + 50);
            *(b + 78 * OS1_S1 + 100) = prefactor_z * *(b + 78 * OS1_S1 + 66) -
                                       p_over_q * *(b + 114 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 66);
            *(b + 78 * OS1_S1 + 101) = prefactor_x * *(b + 78 * OS1_S1 + 73) -
                                       p_over_q * *(b + 106 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 52);
            *(b + 78 * OS1_S1 + 102) = prefactor_x * *(b + 78 * OS1_S1 + 74) -
                                       p_over_q * *(b + 106 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 53);
            *(b + 78 * OS1_S1 + 103) =
                prefactor_y * *(b + 78 * OS1_S1 + 70) -
                p_over_q * *(b + 113 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 70);
            *(b + 78 * OS1_S1 + 104) = prefactor_x * *(b + 78 * OS1_S1 + 76) -
                                       p_over_q * *(b + 106 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 55);
            *(b + 78 * OS1_S1 + 105) = prefactor_x * *(b + 78 * OS1_S1 + 77) -
                                       p_over_q * *(b + 106 * OS1_S1 + 77);
            *(b + 78 * OS1_S1 + 106) = prefactor_x * *(b + 78 * OS1_S1 + 78) -
                                       p_over_q * *(b + 106 * OS1_S1 + 78);
            *(b + 78 * OS1_S1 + 107) = prefactor_x * *(b + 78 * OS1_S1 + 79) -
                                       p_over_q * *(b + 106 * OS1_S1 + 79);
            *(b + 78 * OS1_S1 + 108) = prefactor_x * *(b + 78 * OS1_S1 + 80) -
                                       p_over_q * *(b + 106 * OS1_S1 + 80);
            *(b + 78 * OS1_S1 + 109) = prefactor_x * *(b + 78 * OS1_S1 + 81) -
                                       p_over_q * *(b + 106 * OS1_S1 + 81);
            *(b + 78 * OS1_S1 + 110) = prefactor_x * *(b + 78 * OS1_S1 + 82) -
                                       p_over_q * *(b + 106 * OS1_S1 + 82);
            *(b + 78 * OS1_S1 + 111) = prefactor_x * *(b + 78 * OS1_S1 + 83) -
                                       p_over_q * *(b + 106 * OS1_S1 + 83);
            *(b + 78 * OS1_S1 + 112) =
                prefactor_y * *(b + 78 * OS1_S1 + 77) -
                p_over_q * *(b + 113 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 50);
            *(b + 78 * OS1_S1 + 113) = prefactor_z * *(b + 78 * OS1_S1 + 77) -
                                       p_over_q * *(b + 114 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 77);
            *(b + 78 * OS1_S1 + 114) =
                prefactor_z * *(b + 78 * OS1_S1 + 78) -
                p_over_q * *(b + 114 * OS1_S1 + 78) +
                one_over_two_q * *(b + 50 * OS1_S1 + 78) +
                one_over_two_q * *(b + 78 * OS1_S1 + 50);
            *(b + 78 * OS1_S1 + 115) =
                prefactor_z * *(b + 78 * OS1_S1 + 79) -
                p_over_q * *(b + 114 * OS1_S1 + 79) +
                one_over_two_q * *(b + 50 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 51);
            *(b + 78 * OS1_S1 + 116) =
                prefactor_y * *(b + 78 * OS1_S1 + 81) -
                p_over_q * *(b + 113 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 54);
            *(b + 78 * OS1_S1 + 117) =
                prefactor_y * *(b + 78 * OS1_S1 + 82) -
                p_over_q * *(b + 113 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 82) +
                one_over_two_q * *(b + 78 * OS1_S1 + 55);
            *(b + 78 * OS1_S1 + 118) =
                prefactor_y * *(b + 78 * OS1_S1 + 83) -
                p_over_q * *(b + 113 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 83);
            *(b + 78 * OS1_S1 + 119) =
                prefactor_z * *(b + 78 * OS1_S1 + 83) -
                p_over_q * *(b + 114 * OS1_S1 + 83) +
                one_over_two_q * *(b + 50 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 55);
            *(b + 79 * OS1_S1 + 84) =
                prefactor_x * *(b + 79 * OS1_S1 + 56) -
                p_over_q * *(b + 107 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 79 * OS1_S1 + 35);
            *(b + 79 * OS1_S1 + 85) =
                prefactor_y * *(b + 79 * OS1_S1 + 56) -
                p_over_q * *(b + 114 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 56);
            *(b + 79 * OS1_S1 + 86) =
                prefactor_z * *(b + 79 * OS1_S1 + 56) -
                p_over_q * *(b + 115 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 56);
            *(b + 79 * OS1_S1 + 87) =
                prefactor_y * *(b + 79 * OS1_S1 + 57) -
                p_over_q * *(b + 114 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 57) +
                one_over_two_q * *(b + 79 * OS1_S1 + 35);
            *(b + 79 * OS1_S1 + 88) =
                prefactor_z * *(b + 79 * OS1_S1 + 57) -
                p_over_q * *(b + 115 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 57);
            *(b + 79 * OS1_S1 + 89) =
                prefactor_z * *(b + 79 * OS1_S1 + 58) -
                p_over_q * *(b + 115 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 58) +
                one_over_two_q * *(b + 79 * OS1_S1 + 35);
            *(b + 79 * OS1_S1 + 90) =
                prefactor_y * *(b + 79 * OS1_S1 + 59) -
                p_over_q * *(b + 114 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 36);
            *(b + 79 * OS1_S1 + 91) =
                prefactor_z * *(b + 79 * OS1_S1 + 59) -
                p_over_q * *(b + 115 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 59);
            *(b + 79 * OS1_S1 + 92) =
                prefactor_y * *(b + 79 * OS1_S1 + 61) -
                p_over_q * *(b + 114 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 61);
            *(b + 79 * OS1_S1 + 93) =
                prefactor_z * *(b + 79 * OS1_S1 + 61) -
                p_over_q * *(b + 115 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 37);
            *(b + 79 * OS1_S1 + 94) =
                prefactor_x * *(b + 79 * OS1_S1 + 66) -
                p_over_q * *(b + 107 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 45);
            *(b + 79 * OS1_S1 + 95) =
                prefactor_z * *(b + 79 * OS1_S1 + 62) -
                p_over_q * *(b + 115 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 62);
            *(b + 79 * OS1_S1 + 96) =
                prefactor_z * *(b + 79 * OS1_S1 + 63) -
                p_over_q * *(b + 115 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 63) +
                one_over_two_q * *(b + 79 * OS1_S1 + 38);
            *(b + 79 * OS1_S1 + 97) =
                prefactor_y * *(b + 79 * OS1_S1 + 65) -
                p_over_q * *(b + 114 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 65);
            *(b + 79 * OS1_S1 + 98) =
                prefactor_x * *(b + 79 * OS1_S1 + 70) -
                p_over_q * *(b + 107 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 49);
            *(b + 79 * OS1_S1 + 99) = prefactor_x * *(b + 79 * OS1_S1 + 71) -
                                      p_over_q * *(b + 107 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 79 * OS1_S1 + 50);
            *(b + 79 * OS1_S1 + 100) =
                prefactor_z * *(b + 79 * OS1_S1 + 66) -
                p_over_q * *(b + 115 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 66);
            *(b + 79 * OS1_S1 + 101) = prefactor_x * *(b + 79 * OS1_S1 + 73) -
                                       p_over_q * *(b + 107 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 52);
            *(b + 79 * OS1_S1 + 102) = prefactor_x * *(b + 79 * OS1_S1 + 74) -
                                       p_over_q * *(b + 107 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 53);
            *(b + 79 * OS1_S1 + 103) =
                prefactor_y * *(b + 79 * OS1_S1 + 70) -
                p_over_q * *(b + 114 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 70);
            *(b + 79 * OS1_S1 + 104) = prefactor_x * *(b + 79 * OS1_S1 + 76) -
                                       p_over_q * *(b + 107 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 55);
            *(b + 79 * OS1_S1 + 105) = prefactor_x * *(b + 79 * OS1_S1 + 77) -
                                       p_over_q * *(b + 107 * OS1_S1 + 77);
            *(b + 79 * OS1_S1 + 106) = prefactor_x * *(b + 79 * OS1_S1 + 78) -
                                       p_over_q * *(b + 107 * OS1_S1 + 78);
            *(b + 79 * OS1_S1 + 107) = prefactor_x * *(b + 79 * OS1_S1 + 79) -
                                       p_over_q * *(b + 107 * OS1_S1 + 79);
            *(b + 79 * OS1_S1 + 108) = prefactor_x * *(b + 79 * OS1_S1 + 80) -
                                       p_over_q * *(b + 107 * OS1_S1 + 80);
            *(b + 79 * OS1_S1 + 109) = prefactor_x * *(b + 79 * OS1_S1 + 81) -
                                       p_over_q * *(b + 107 * OS1_S1 + 81);
            *(b + 79 * OS1_S1 + 110) = prefactor_x * *(b + 79 * OS1_S1 + 82) -
                                       p_over_q * *(b + 107 * OS1_S1 + 82);
            *(b + 79 * OS1_S1 + 111) = prefactor_x * *(b + 79 * OS1_S1 + 83) -
                                       p_over_q * *(b + 107 * OS1_S1 + 83);
            *(b + 79 * OS1_S1 + 112) =
                prefactor_y * *(b + 79 * OS1_S1 + 77) -
                p_over_q * *(b + 114 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 79 * OS1_S1 + 50);
            *(b + 79 * OS1_S1 + 113) =
                prefactor_z * *(b + 79 * OS1_S1 + 77) -
                p_over_q * *(b + 115 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 77);
            *(b + 79 * OS1_S1 + 114) =
                prefactor_z * *(b + 79 * OS1_S1 + 78) -
                p_over_q * *(b + 115 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 78) +
                one_over_two_q * *(b + 79 * OS1_S1 + 50);
            *(b + 79 * OS1_S1 + 115) =
                prefactor_z * *(b + 79 * OS1_S1 + 79) -
                p_over_q * *(b + 115 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 51);
            *(b + 79 * OS1_S1 + 116) =
                prefactor_y * *(b + 79 * OS1_S1 + 81) -
                p_over_q * *(b + 114 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 54);
            *(b + 79 * OS1_S1 + 117) =
                prefactor_y * *(b + 79 * OS1_S1 + 82) -
                p_over_q * *(b + 114 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 82) +
                one_over_two_q * *(b + 79 * OS1_S1 + 55);
            *(b + 79 * OS1_S1 + 118) =
                prefactor_y * *(b + 79 * OS1_S1 + 83) -
                p_over_q * *(b + 114 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 83);
            *(b + 79 * OS1_S1 + 119) =
                prefactor_z * *(b + 79 * OS1_S1 + 83) -
                p_over_q * *(b + 115 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 79 * OS1_S1 + 55);
            *(b + 80 * OS1_S1 + 84) =
                prefactor_x * *(b + 80 * OS1_S1 + 56) -
                p_over_q * *(b + 108 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 80 * OS1_S1 + 35);
            *(b + 80 * OS1_S1 + 85) =
                prefactor_y * *(b + 80 * OS1_S1 + 56) -
                p_over_q * *(b + 115 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 56);
            *(b + 80 * OS1_S1 + 86) =
                prefactor_z * *(b + 80 * OS1_S1 + 56) -
                p_over_q * *(b + 116 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 56);
            *(b + 80 * OS1_S1 + 87) =
                prefactor_y * *(b + 80 * OS1_S1 + 57) -
                p_over_q * *(b + 115 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 57) +
                one_over_two_q * *(b + 80 * OS1_S1 + 35);
            *(b + 80 * OS1_S1 + 88) =
                prefactor_z * *(b + 80 * OS1_S1 + 57) -
                p_over_q * *(b + 116 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 57);
            *(b + 80 * OS1_S1 + 89) =
                prefactor_z * *(b + 80 * OS1_S1 + 58) -
                p_over_q * *(b + 116 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 58) +
                one_over_two_q * *(b + 80 * OS1_S1 + 35);
            *(b + 80 * OS1_S1 + 90) =
                prefactor_y * *(b + 80 * OS1_S1 + 59) -
                p_over_q * *(b + 115 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 36);
            *(b + 80 * OS1_S1 + 91) =
                prefactor_z * *(b + 80 * OS1_S1 + 59) -
                p_over_q * *(b + 116 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 59);
            *(b + 80 * OS1_S1 + 92) =
                prefactor_y * *(b + 80 * OS1_S1 + 61) -
                p_over_q * *(b + 115 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 61);
            *(b + 80 * OS1_S1 + 93) =
                prefactor_z * *(b + 80 * OS1_S1 + 61) -
                p_over_q * *(b + 116 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 37);
            *(b + 80 * OS1_S1 + 94) =
                prefactor_x * *(b + 80 * OS1_S1 + 66) -
                p_over_q * *(b + 108 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 45);
            *(b + 80 * OS1_S1 + 95) =
                prefactor_z * *(b + 80 * OS1_S1 + 62) -
                p_over_q * *(b + 116 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 62);
            *(b + 80 * OS1_S1 + 96) =
                prefactor_z * *(b + 80 * OS1_S1 + 63) -
                p_over_q * *(b + 116 * OS1_S1 + 63) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 63) +
                one_over_two_q * *(b + 80 * OS1_S1 + 38);
            *(b + 80 * OS1_S1 + 97) =
                prefactor_y * *(b + 80 * OS1_S1 + 65) -
                p_over_q * *(b + 115 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 65);
            *(b + 80 * OS1_S1 + 98) =
                prefactor_x * *(b + 80 * OS1_S1 + 70) -
                p_over_q * *(b + 108 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 49);
            *(b + 80 * OS1_S1 + 99) = prefactor_x * *(b + 80 * OS1_S1 + 71) -
                                      p_over_q * *(b + 108 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 80 * OS1_S1 + 50);
            *(b + 80 * OS1_S1 + 100) =
                prefactor_z * *(b + 80 * OS1_S1 + 66) -
                p_over_q * *(b + 116 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 66);
            *(b + 80 * OS1_S1 + 101) = prefactor_x * *(b + 80 * OS1_S1 + 73) -
                                       p_over_q * *(b + 108 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 52);
            *(b + 80 * OS1_S1 + 102) = prefactor_x * *(b + 80 * OS1_S1 + 74) -
                                       p_over_q * *(b + 108 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 53);
            *(b + 80 * OS1_S1 + 103) =
                prefactor_y * *(b + 80 * OS1_S1 + 70) -
                p_over_q * *(b + 115 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 70);
            *(b + 80 * OS1_S1 + 104) = prefactor_x * *(b + 80 * OS1_S1 + 76) -
                                       p_over_q * *(b + 108 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 55);
            *(b + 80 * OS1_S1 + 105) = prefactor_x * *(b + 80 * OS1_S1 + 77) -
                                       p_over_q * *(b + 108 * OS1_S1 + 77);
            *(b + 80 * OS1_S1 + 106) = prefactor_x * *(b + 80 * OS1_S1 + 78) -
                                       p_over_q * *(b + 108 * OS1_S1 + 78);
            *(b + 80 * OS1_S1 + 107) = prefactor_x * *(b + 80 * OS1_S1 + 79) -
                                       p_over_q * *(b + 108 * OS1_S1 + 79);
            *(b + 80 * OS1_S1 + 108) = prefactor_x * *(b + 80 * OS1_S1 + 80) -
                                       p_over_q * *(b + 108 * OS1_S1 + 80);
            *(b + 80 * OS1_S1 + 109) = prefactor_x * *(b + 80 * OS1_S1 + 81) -
                                       p_over_q * *(b + 108 * OS1_S1 + 81);
            *(b + 80 * OS1_S1 + 110) = prefactor_x * *(b + 80 * OS1_S1 + 82) -
                                       p_over_q * *(b + 108 * OS1_S1 + 82);
            *(b + 80 * OS1_S1 + 111) = prefactor_x * *(b + 80 * OS1_S1 + 83) -
                                       p_over_q * *(b + 108 * OS1_S1 + 83);
            *(b + 80 * OS1_S1 + 112) =
                prefactor_y * *(b + 80 * OS1_S1 + 77) -
                p_over_q * *(b + 115 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 80 * OS1_S1 + 50);
            *(b + 80 * OS1_S1 + 113) =
                prefactor_z * *(b + 80 * OS1_S1 + 77) -
                p_over_q * *(b + 116 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 77);
            *(b + 80 * OS1_S1 + 114) =
                prefactor_z * *(b + 80 * OS1_S1 + 78) -
                p_over_q * *(b + 116 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 78) +
                one_over_two_q * *(b + 80 * OS1_S1 + 50);
            *(b + 80 * OS1_S1 + 115) =
                prefactor_z * *(b + 80 * OS1_S1 + 79) -
                p_over_q * *(b + 116 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 51);
            *(b + 80 * OS1_S1 + 116) =
                prefactor_y * *(b + 80 * OS1_S1 + 81) -
                p_over_q * *(b + 115 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 54);
            *(b + 80 * OS1_S1 + 117) =
                prefactor_y * *(b + 80 * OS1_S1 + 82) -
                p_over_q * *(b + 115 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 82) +
                one_over_two_q * *(b + 80 * OS1_S1 + 55);
            *(b + 80 * OS1_S1 + 118) =
                prefactor_y * *(b + 80 * OS1_S1 + 83) -
                p_over_q * *(b + 115 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 83);
            *(b + 80 * OS1_S1 + 119) =
                prefactor_z * *(b + 80 * OS1_S1 + 83) -
                p_over_q * *(b + 116 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 80 * OS1_S1 + 55);
            *(b + 81 * OS1_S1 + 84) =
                prefactor_x * *(b + 81 * OS1_S1 + 56) -
                p_over_q * *(b + 109 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 81 * OS1_S1 + 35);
            *(b + 81 * OS1_S1 + 85) =
                prefactor_y * *(b + 81 * OS1_S1 + 56) -
                p_over_q * *(b + 116 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 56);
            *(b + 81 * OS1_S1 + 86) =
                prefactor_z * *(b + 81 * OS1_S1 + 56) -
                p_over_q * *(b + 117 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 56);
            *(b + 81 * OS1_S1 + 87) =
                prefactor_y * *(b + 81 * OS1_S1 + 57) -
                p_over_q * *(b + 116 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 57) +
                one_over_two_q * *(b + 81 * OS1_S1 + 35);
            *(b + 81 * OS1_S1 + 88) =
                prefactor_y * *(b + 81 * OS1_S1 + 58) -
                p_over_q * *(b + 116 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 58);
            *(b + 81 * OS1_S1 + 89) =
                prefactor_z * *(b + 81 * OS1_S1 + 58) -
                p_over_q * *(b + 117 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 58) +
                one_over_two_q * *(b + 81 * OS1_S1 + 35);
            *(b + 81 * OS1_S1 + 90) =
                prefactor_y * *(b + 81 * OS1_S1 + 59) -
                p_over_q * *(b + 116 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 36);
            *(b + 81 * OS1_S1 + 91) =
                prefactor_z * *(b + 81 * OS1_S1 + 59) -
                p_over_q * *(b + 117 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 59);
            *(b + 81 * OS1_S1 + 92) =
                prefactor_y * *(b + 81 * OS1_S1 + 61) -
                p_over_q * *(b + 116 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 61);
            *(b + 81 * OS1_S1 + 93) =
                prefactor_z * *(b + 81 * OS1_S1 + 61) -
                p_over_q * *(b + 117 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 37);
            *(b + 81 * OS1_S1 + 94) =
                prefactor_x * *(b + 81 * OS1_S1 + 66) -
                p_over_q * *(b + 109 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 45);
            *(b + 81 * OS1_S1 + 95) =
                prefactor_z * *(b + 81 * OS1_S1 + 62) -
                p_over_q * *(b + 117 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 62);
            *(b + 81 * OS1_S1 + 96) =
                prefactor_y * *(b + 81 * OS1_S1 + 64) -
                p_over_q * *(b + 116 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 64) +
                one_over_two_q * *(b + 81 * OS1_S1 + 40);
            *(b + 81 * OS1_S1 + 97) =
                prefactor_y * *(b + 81 * OS1_S1 + 65) -
                p_over_q * *(b + 116 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 65);
            *(b + 81 * OS1_S1 + 98) =
                prefactor_x * *(b + 81 * OS1_S1 + 70) -
                p_over_q * *(b + 109 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 49);
            *(b + 81 * OS1_S1 + 99) = prefactor_x * *(b + 81 * OS1_S1 + 71) -
                                      p_over_q * *(b + 109 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 81 * OS1_S1 + 50);
            *(b + 81 * OS1_S1 + 100) =
                prefactor_z * *(b + 81 * OS1_S1 + 66) -
                p_over_q * *(b + 117 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 66);
            *(b + 81 * OS1_S1 + 101) = prefactor_x * *(b + 81 * OS1_S1 + 73) -
                                       p_over_q * *(b + 109 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 52);
            *(b + 81 * OS1_S1 + 102) = prefactor_x * *(b + 81 * OS1_S1 + 74) -
                                       p_over_q * *(b + 109 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 53);
            *(b + 81 * OS1_S1 + 103) =
                prefactor_y * *(b + 81 * OS1_S1 + 70) -
                p_over_q * *(b + 116 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 70);
            *(b + 81 * OS1_S1 + 104) = prefactor_x * *(b + 81 * OS1_S1 + 76) -
                                       p_over_q * *(b + 109 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 55);
            *(b + 81 * OS1_S1 + 105) = prefactor_x * *(b + 81 * OS1_S1 + 77) -
                                       p_over_q * *(b + 109 * OS1_S1 + 77);
            *(b + 81 * OS1_S1 + 106) = prefactor_x * *(b + 81 * OS1_S1 + 78) -
                                       p_over_q * *(b + 109 * OS1_S1 + 78);
            *(b + 81 * OS1_S1 + 107) = prefactor_x * *(b + 81 * OS1_S1 + 79) -
                                       p_over_q * *(b + 109 * OS1_S1 + 79);
            *(b + 81 * OS1_S1 + 108) = prefactor_x * *(b + 81 * OS1_S1 + 80) -
                                       p_over_q * *(b + 109 * OS1_S1 + 80);
            *(b + 81 * OS1_S1 + 109) = prefactor_x * *(b + 81 * OS1_S1 + 81) -
                                       p_over_q * *(b + 109 * OS1_S1 + 81);
            *(b + 81 * OS1_S1 + 110) = prefactor_x * *(b + 81 * OS1_S1 + 82) -
                                       p_over_q * *(b + 109 * OS1_S1 + 82);
            *(b + 81 * OS1_S1 + 111) = prefactor_x * *(b + 81 * OS1_S1 + 83) -
                                       p_over_q * *(b + 109 * OS1_S1 + 83);
            *(b + 81 * OS1_S1 + 112) =
                prefactor_y * *(b + 81 * OS1_S1 + 77) -
                p_over_q * *(b + 116 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 81 * OS1_S1 + 50);
            *(b + 81 * OS1_S1 + 113) =
                prefactor_z * *(b + 81 * OS1_S1 + 77) -
                p_over_q * *(b + 117 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 77);
            *(b + 81 * OS1_S1 + 114) =
                prefactor_z * *(b + 81 * OS1_S1 + 78) -
                p_over_q * *(b + 117 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 78) +
                one_over_two_q * *(b + 81 * OS1_S1 + 50);
            *(b + 81 * OS1_S1 + 115) =
                prefactor_z * *(b + 81 * OS1_S1 + 79) -
                p_over_q * *(b + 117 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 51);
            *(b + 81 * OS1_S1 + 116) =
                prefactor_y * *(b + 81 * OS1_S1 + 81) -
                p_over_q * *(b + 116 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 54);
            *(b + 81 * OS1_S1 + 117) =
                prefactor_y * *(b + 81 * OS1_S1 + 82) -
                p_over_q * *(b + 116 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 82) +
                one_over_two_q * *(b + 81 * OS1_S1 + 55);
            *(b + 81 * OS1_S1 + 118) =
                prefactor_y * *(b + 81 * OS1_S1 + 83) -
                p_over_q * *(b + 116 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 83);
            *(b + 81 * OS1_S1 + 119) =
                prefactor_z * *(b + 81 * OS1_S1 + 83) -
                p_over_q * *(b + 117 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 81 * OS1_S1 + 55);
            *(b + 82 * OS1_S1 + 84) =
                prefactor_x * *(b + 82 * OS1_S1 + 56) -
                p_over_q * *(b + 110 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 35);
            *(b + 82 * OS1_S1 + 85) = prefactor_y * *(b + 82 * OS1_S1 + 56) -
                                      p_over_q * *(b + 117 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 56);
            *(b + 82 * OS1_S1 + 86) =
                prefactor_z * *(b + 82 * OS1_S1 + 56) -
                p_over_q * *(b + 118 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 56);
            *(b + 82 * OS1_S1 + 87) = prefactor_y * *(b + 82 * OS1_S1 + 57) -
                                      p_over_q * *(b + 117 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 35);
            *(b + 82 * OS1_S1 + 88) = prefactor_y * *(b + 82 * OS1_S1 + 58) -
                                      p_over_q * *(b + 117 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 58);
            *(b + 82 * OS1_S1 + 89) =
                prefactor_z * *(b + 82 * OS1_S1 + 58) -
                p_over_q * *(b + 118 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 58) +
                one_over_two_q * *(b + 82 * OS1_S1 + 35);
            *(b + 82 * OS1_S1 + 90) =
                prefactor_y * *(b + 82 * OS1_S1 + 59) -
                p_over_q * *(b + 117 * OS1_S1 + 59) +
                one_over_two_q * *(b + 55 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 36);
            *(b + 82 * OS1_S1 + 91) =
                prefactor_z * *(b + 82 * OS1_S1 + 59) -
                p_over_q * *(b + 118 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 59);
            *(b + 82 * OS1_S1 + 92) = prefactor_y * *(b + 82 * OS1_S1 + 61) -
                                      p_over_q * *(b + 117 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 61);
            *(b + 82 * OS1_S1 + 93) =
                prefactor_z * *(b + 82 * OS1_S1 + 61) -
                p_over_q * *(b + 118 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 37);
            *(b + 82 * OS1_S1 + 94) =
                prefactor_x * *(b + 82 * OS1_S1 + 66) -
                p_over_q * *(b + 110 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 45);
            *(b + 82 * OS1_S1 + 95) =
                prefactor_z * *(b + 82 * OS1_S1 + 62) -
                p_over_q * *(b + 118 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 62);
            *(b + 82 * OS1_S1 + 96) = prefactor_y * *(b + 82 * OS1_S1 + 64) -
                                      p_over_q * *(b + 117 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 40);
            *(b + 82 * OS1_S1 + 97) = prefactor_y * *(b + 82 * OS1_S1 + 65) -
                                      p_over_q * *(b + 117 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 55 * OS1_S1 + 65);
            *(b + 82 * OS1_S1 + 98) =
                prefactor_x * *(b + 82 * OS1_S1 + 70) -
                p_over_q * *(b + 110 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 49);
            *(b + 82 * OS1_S1 + 99) = prefactor_x * *(b + 82 * OS1_S1 + 71) -
                                      p_over_q * *(b + 110 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 82 * OS1_S1 + 50);
            *(b + 82 * OS1_S1 + 100) =
                prefactor_z * *(b + 82 * OS1_S1 + 66) -
                p_over_q * *(b + 118 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 66);
            *(b + 82 * OS1_S1 + 101) = prefactor_x * *(b + 82 * OS1_S1 + 73) -
                                       p_over_q * *(b + 110 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 52);
            *(b + 82 * OS1_S1 + 102) = prefactor_x * *(b + 82 * OS1_S1 + 74) -
                                       p_over_q * *(b + 110 * OS1_S1 + 74) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 53);
            *(b + 82 * OS1_S1 + 103) = prefactor_y * *(b + 82 * OS1_S1 + 70) -
                                       p_over_q * *(b + 117 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 70);
            *(b + 82 * OS1_S1 + 104) = prefactor_x * *(b + 82 * OS1_S1 + 76) -
                                       p_over_q * *(b + 110 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 55);
            *(b + 82 * OS1_S1 + 105) = prefactor_x * *(b + 82 * OS1_S1 + 77) -
                                       p_over_q * *(b + 110 * OS1_S1 + 77);
            *(b + 82 * OS1_S1 + 106) = prefactor_x * *(b + 82 * OS1_S1 + 78) -
                                       p_over_q * *(b + 110 * OS1_S1 + 78);
            *(b + 82 * OS1_S1 + 107) = prefactor_x * *(b + 82 * OS1_S1 + 79) -
                                       p_over_q * *(b + 110 * OS1_S1 + 79);
            *(b + 82 * OS1_S1 + 108) = prefactor_x * *(b + 82 * OS1_S1 + 80) -
                                       p_over_q * *(b + 110 * OS1_S1 + 80);
            *(b + 82 * OS1_S1 + 109) = prefactor_x * *(b + 82 * OS1_S1 + 81) -
                                       p_over_q * *(b + 110 * OS1_S1 + 81);
            *(b + 82 * OS1_S1 + 110) = prefactor_x * *(b + 82 * OS1_S1 + 82) -
                                       p_over_q * *(b + 110 * OS1_S1 + 82);
            *(b + 82 * OS1_S1 + 111) = prefactor_x * *(b + 82 * OS1_S1 + 83) -
                                       p_over_q * *(b + 110 * OS1_S1 + 83);
            *(b + 82 * OS1_S1 + 112) =
                prefactor_y * *(b + 82 * OS1_S1 + 77) -
                p_over_q * *(b + 117 * OS1_S1 + 77) +
                one_over_two_q * *(b + 55 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 50);
            *(b + 82 * OS1_S1 + 113) =
                prefactor_z * *(b + 82 * OS1_S1 + 77) -
                p_over_q * *(b + 118 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 77);
            *(b + 82 * OS1_S1 + 114) =
                prefactor_z * *(b + 82 * OS1_S1 + 78) -
                p_over_q * *(b + 118 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 78) +
                one_over_two_q * *(b + 82 * OS1_S1 + 50);
            *(b + 82 * OS1_S1 + 115) =
                prefactor_z * *(b + 82 * OS1_S1 + 79) -
                p_over_q * *(b + 118 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 51);
            *(b + 82 * OS1_S1 + 116) =
                prefactor_y * *(b + 82 * OS1_S1 + 81) -
                p_over_q * *(b + 117 * OS1_S1 + 81) +
                one_over_two_q * *(b + 55 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 54);
            *(b + 82 * OS1_S1 + 117) =
                prefactor_y * *(b + 82 * OS1_S1 + 82) -
                p_over_q * *(b + 117 * OS1_S1 + 82) +
                one_over_two_q * *(b + 55 * OS1_S1 + 82) +
                one_over_two_q * *(b + 82 * OS1_S1 + 55);
            *(b + 82 * OS1_S1 + 118) = prefactor_y * *(b + 82 * OS1_S1 + 83) -
                                       p_over_q * *(b + 117 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 83);
            *(b + 82 * OS1_S1 + 119) =
                prefactor_z * *(b + 82 * OS1_S1 + 83) -
                p_over_q * *(b + 118 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 55);
            *(b + 83 * OS1_S1 + 84) =
                prefactor_x * *(b + 83 * OS1_S1 + 56) -
                p_over_q * *(b + 111 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 83 * OS1_S1 + 35);
            *(b + 83 * OS1_S1 + 85) = prefactor_y * *(b + 83 * OS1_S1 + 56) -
                                      p_over_q * *(b + 118 * OS1_S1 + 56);
            *(b + 83 * OS1_S1 + 86) =
                prefactor_z * *(b + 83 * OS1_S1 + 56) -
                p_over_q * *(b + 119 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 56);
            *(b + 83 * OS1_S1 + 87) = prefactor_y * *(b + 83 * OS1_S1 + 57) -
                                      p_over_q * *(b + 118 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 35);
            *(b + 83 * OS1_S1 + 88) = prefactor_y * *(b + 83 * OS1_S1 + 58) -
                                      p_over_q * *(b + 118 * OS1_S1 + 58);
            *(b + 83 * OS1_S1 + 89) =
                prefactor_z * *(b + 83 * OS1_S1 + 58) -
                p_over_q * *(b + 119 * OS1_S1 + 58) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 58) +
                one_over_two_q * *(b + 83 * OS1_S1 + 35);
            *(b + 83 * OS1_S1 + 90) =
                prefactor_y * *(b + 83 * OS1_S1 + 59) -
                p_over_q * *(b + 118 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 36);
            *(b + 83 * OS1_S1 + 91) =
                prefactor_z * *(b + 83 * OS1_S1 + 59) -
                p_over_q * *(b + 119 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 59);
            *(b + 83 * OS1_S1 + 92) = prefactor_y * *(b + 83 * OS1_S1 + 61) -
                                      p_over_q * *(b + 118 * OS1_S1 + 61);
            *(b + 83 * OS1_S1 + 93) =
                prefactor_z * *(b + 83 * OS1_S1 + 61) -
                p_over_q * *(b + 119 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 37);
            *(b + 83 * OS1_S1 + 94) =
                prefactor_x * *(b + 83 * OS1_S1 + 66) -
                p_over_q * *(b + 111 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 45);
            *(b + 83 * OS1_S1 + 95) =
                prefactor_z * *(b + 83 * OS1_S1 + 62) -
                p_over_q * *(b + 119 * OS1_S1 + 62) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 62);
            *(b + 83 * OS1_S1 + 96) = prefactor_y * *(b + 83 * OS1_S1 + 64) -
                                      p_over_q * *(b + 118 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 40);
            *(b + 83 * OS1_S1 + 97) = prefactor_y * *(b + 83 * OS1_S1 + 65) -
                                      p_over_q * *(b + 118 * OS1_S1 + 65);
            *(b + 83 * OS1_S1 + 98) =
                prefactor_x * *(b + 83 * OS1_S1 + 70) -
                p_over_q * *(b + 111 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 49);
            *(b + 83 * OS1_S1 + 99) = prefactor_x * *(b + 83 * OS1_S1 + 71) -
                                      p_over_q * *(b + 111 * OS1_S1 + 71) +
                                      one_over_two_q * *(b + 83 * OS1_S1 + 50);
            *(b + 83 * OS1_S1 + 100) =
                prefactor_z * *(b + 83 * OS1_S1 + 66) -
                p_over_q * *(b + 119 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 66);
            *(b + 83 * OS1_S1 + 101) = prefactor_x * *(b + 83 * OS1_S1 + 73) -
                                       p_over_q * *(b + 111 * OS1_S1 + 73) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 52);
            *(b + 83 * OS1_S1 + 102) = prefactor_y * *(b + 83 * OS1_S1 + 69) -
                                       p_over_q * *(b + 118 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 44);
            *(b + 83 * OS1_S1 + 103) = prefactor_y * *(b + 83 * OS1_S1 + 70) -
                                       p_over_q * *(b + 118 * OS1_S1 + 70);
            *(b + 83 * OS1_S1 + 104) = prefactor_x * *(b + 83 * OS1_S1 + 76) -
                                       p_over_q * *(b + 111 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 55);
            *(b + 83 * OS1_S1 + 105) = prefactor_x * *(b + 83 * OS1_S1 + 77) -
                                       p_over_q * *(b + 111 * OS1_S1 + 77);
            *(b + 83 * OS1_S1 + 106) = prefactor_x * *(b + 83 * OS1_S1 + 78) -
                                       p_over_q * *(b + 111 * OS1_S1 + 78);
            *(b + 83 * OS1_S1 + 107) = prefactor_x * *(b + 83 * OS1_S1 + 79) -
                                       p_over_q * *(b + 111 * OS1_S1 + 79);
            *(b + 83 * OS1_S1 + 108) = prefactor_x * *(b + 83 * OS1_S1 + 80) -
                                       p_over_q * *(b + 111 * OS1_S1 + 80);
            *(b + 83 * OS1_S1 + 109) = prefactor_x * *(b + 83 * OS1_S1 + 81) -
                                       p_over_q * *(b + 111 * OS1_S1 + 81);
            *(b + 83 * OS1_S1 + 110) = prefactor_y * *(b + 83 * OS1_S1 + 76) -
                                       p_over_q * *(b + 118 * OS1_S1 + 76);
            *(b + 83 * OS1_S1 + 111) = prefactor_x * *(b + 83 * OS1_S1 + 83) -
                                       p_over_q * *(b + 111 * OS1_S1 + 83);
            *(b + 83 * OS1_S1 + 112) =
                prefactor_y * *(b + 83 * OS1_S1 + 77) -
                p_over_q * *(b + 118 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 83 * OS1_S1 + 50);
            *(b + 83 * OS1_S1 + 113) =
                prefactor_z * *(b + 83 * OS1_S1 + 77) -
                p_over_q * *(b + 119 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 77);
            *(b + 83 * OS1_S1 + 114) =
                prefactor_z * *(b + 83 * OS1_S1 + 78) -
                p_over_q * *(b + 119 * OS1_S1 + 78) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 78) +
                one_over_two_q * *(b + 83 * OS1_S1 + 50);
            *(b + 83 * OS1_S1 + 115) =
                prefactor_z * *(b + 83 * OS1_S1 + 79) -
                p_over_q * *(b + 119 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 51);
            *(b + 83 * OS1_S1 + 116) =
                prefactor_y * *(b + 83 * OS1_S1 + 81) -
                p_over_q * *(b + 118 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 54);
            *(b + 83 * OS1_S1 + 117) = prefactor_y * *(b + 83 * OS1_S1 + 82) -
                                       p_over_q * *(b + 118 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 55);
            *(b + 83 * OS1_S1 + 118) = prefactor_y * *(b + 83 * OS1_S1 + 83) -
                                       p_over_q * *(b + 118 * OS1_S1 + 83);
            *(b + 83 * OS1_S1 + 119) =
                prefactor_z * *(b + 83 * OS1_S1 + 83) -
                p_over_q * *(b + 119 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 83 * OS1_S1 + 55);
            return;
        }
        void transfer_7_7(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 84 * OS1_S1 + 84) =
                prefactor_x * *(b + 84 * OS1_S1 + 56) -
                p_over_q * *(b + 120 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 84 * OS1_S1 + 35);
            *(b + 84 * OS1_S1 + 85) = prefactor_y * *(b + 84 * OS1_S1 + 56) -
                                      p_over_q * *(b + 121 * OS1_S1 + 56);
            *(b + 84 * OS1_S1 + 86) = prefactor_z * *(b + 84 * OS1_S1 + 56) -
                                      p_over_q * *(b + 122 * OS1_S1 + 56);
            *(b + 84 * OS1_S1 + 87) = prefactor_y * *(b + 84 * OS1_S1 + 57) -
                                      p_over_q * *(b + 121 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 35);
            *(b + 84 * OS1_S1 + 88) = prefactor_z * *(b + 84 * OS1_S1 + 57) -
                                      p_over_q * *(b + 122 * OS1_S1 + 57);
            *(b + 84 * OS1_S1 + 89) = prefactor_z * *(b + 84 * OS1_S1 + 58) -
                                      p_over_q * *(b + 122 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 35);
            *(b + 84 * OS1_S1 + 90) =
                prefactor_y * *(b + 84 * OS1_S1 + 59) -
                p_over_q * *(b + 121 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 36);
            *(b + 84 * OS1_S1 + 91) = prefactor_z * *(b + 84 * OS1_S1 + 59) -
                                      p_over_q * *(b + 122 * OS1_S1 + 59);
            *(b + 84 * OS1_S1 + 92) = prefactor_y * *(b + 84 * OS1_S1 + 61) -
                                      p_over_q * *(b + 121 * OS1_S1 + 61);
            *(b + 84 * OS1_S1 + 93) =
                prefactor_z * *(b + 84 * OS1_S1 + 61) -
                p_over_q * *(b + 122 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 37);
            *(b + 84 * OS1_S1 + 94) =
                prefactor_x * *(b + 84 * OS1_S1 + 66) -
                p_over_q * *(b + 120 * OS1_S1 + 66) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 45);
            *(b + 84 * OS1_S1 + 95) = prefactor_z * *(b + 84 * OS1_S1 + 62) -
                                      p_over_q * *(b + 122 * OS1_S1 + 62);
            *(b + 84 * OS1_S1 + 96) = prefactor_z * *(b + 84 * OS1_S1 + 63) -
                                      p_over_q * *(b + 122 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 84 * OS1_S1 + 38);
            *(b + 84 * OS1_S1 + 97) = prefactor_y * *(b + 84 * OS1_S1 + 65) -
                                      p_over_q * *(b + 121 * OS1_S1 + 65);
            *(b + 84 * OS1_S1 + 98) =
                prefactor_x * *(b + 84 * OS1_S1 + 70) -
                p_over_q * *(b + 120 * OS1_S1 + 70) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 49);
            *(b + 84 * OS1_S1 + 99) =
                prefactor_x * *(b + 84 * OS1_S1 + 71) -
                p_over_q * *(b + 120 * OS1_S1 + 71) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 71) +
                one_over_two_q * *(b + 84 * OS1_S1 + 50);
            *(b + 84 * OS1_S1 + 100) = prefactor_z * *(b + 84 * OS1_S1 + 66) -
                                       p_over_q * *(b + 122 * OS1_S1 + 66);
            *(b + 84 * OS1_S1 + 101) = prefactor_z * *(b + 84 * OS1_S1 + 67) -
                                       p_over_q * *(b + 122 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 41);
            *(b + 84 * OS1_S1 + 102) = prefactor_y * *(b + 84 * OS1_S1 + 69) -
                                       p_over_q * *(b + 121 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 44);
            *(b + 84 * OS1_S1 + 103) = prefactor_y * *(b + 84 * OS1_S1 + 70) -
                                       p_over_q * *(b + 121 * OS1_S1 + 70);
            *(b + 84 * OS1_S1 + 104) =
                prefactor_x * *(b + 84 * OS1_S1 + 76) -
                p_over_q * *(b + 120 * OS1_S1 + 76) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 76) +
                one_over_two_q * *(b + 84 * OS1_S1 + 55);
            *(b + 84 * OS1_S1 + 105) =
                prefactor_x * *(b + 84 * OS1_S1 + 77) -
                p_over_q * *(b + 120 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 77);
            *(b + 84 * OS1_S1 + 106) = prefactor_z * *(b + 84 * OS1_S1 + 71) -
                                       p_over_q * *(b + 122 * OS1_S1 + 71);
            *(b + 84 * OS1_S1 + 107) =
                prefactor_x * *(b + 84 * OS1_S1 + 79) -
                p_over_q * *(b + 120 * OS1_S1 + 79) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 79);
            *(b + 84 * OS1_S1 + 108) =
                prefactor_x * *(b + 84 * OS1_S1 + 80) -
                p_over_q * *(b + 120 * OS1_S1 + 80) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 80);
            *(b + 84 * OS1_S1 + 109) =
                prefactor_x * *(b + 84 * OS1_S1 + 81) -
                p_over_q * *(b + 120 * OS1_S1 + 81) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 81);
            *(b + 84 * OS1_S1 + 110) = prefactor_y * *(b + 84 * OS1_S1 + 76) -
                                       p_over_q * *(b + 121 * OS1_S1 + 76);
            *(b + 84 * OS1_S1 + 111) =
                prefactor_x * *(b + 84 * OS1_S1 + 83) -
                p_over_q * *(b + 120 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 83);
            *(b + 84 * OS1_S1 + 112) =
                prefactor_y * *(b + 84 * OS1_S1 + 77) -
                p_over_q * *(b + 121 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 84 * OS1_S1 + 50);
            *(b + 84 * OS1_S1 + 113) = prefactor_z * *(b + 84 * OS1_S1 + 77) -
                                       p_over_q * *(b + 122 * OS1_S1 + 77);
            *(b + 84 * OS1_S1 + 114) = prefactor_z * *(b + 84 * OS1_S1 + 78) -
                                       p_over_q * *(b + 122 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 50);
            *(b + 84 * OS1_S1 + 115) =
                prefactor_z * *(b + 84 * OS1_S1 + 79) -
                p_over_q * *(b + 122 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 51);
            *(b + 84 * OS1_S1 + 116) =
                prefactor_y * *(b + 84 * OS1_S1 + 81) -
                p_over_q * *(b + 121 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 54);
            *(b + 84 * OS1_S1 + 117) = prefactor_y * *(b + 84 * OS1_S1 + 82) -
                                       p_over_q * *(b + 121 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 55);
            *(b + 84 * OS1_S1 + 118) = prefactor_y * *(b + 84 * OS1_S1 + 83) -
                                       p_over_q * *(b + 121 * OS1_S1 + 83);
            *(b + 84 * OS1_S1 + 119) =
                prefactor_z * *(b + 84 * OS1_S1 + 83) -
                p_over_q * *(b + 122 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 84 * OS1_S1 + 55);
            *(b + 85 * OS1_S1 + 84) =
                prefactor_x * *(b + 85 * OS1_S1 + 56) -
                p_over_q * *(b + 121 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 85 * OS1_S1 + 35);
            *(b + 85 * OS1_S1 + 85) = prefactor_y * *(b + 85 * OS1_S1 + 56) -
                                      p_over_q * *(b + 123 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 56);
            *(b + 85 * OS1_S1 + 86) = prefactor_z * *(b + 85 * OS1_S1 + 56) -
                                      p_over_q * *(b + 124 * OS1_S1 + 56);
            *(b + 85 * OS1_S1 + 87) = prefactor_y * *(b + 85 * OS1_S1 + 57) -
                                      p_over_q * *(b + 123 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 35);
            *(b + 85 * OS1_S1 + 88) = prefactor_z * *(b + 85 * OS1_S1 + 57) -
                                      p_over_q * *(b + 124 * OS1_S1 + 57);
            *(b + 85 * OS1_S1 + 89) = prefactor_z * *(b + 85 * OS1_S1 + 58) -
                                      p_over_q * *(b + 124 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 35);
            *(b + 85 * OS1_S1 + 90) =
                prefactor_y * *(b + 85 * OS1_S1 + 59) -
                p_over_q * *(b + 123 * OS1_S1 + 59) +
                one_over_two_q * *(b + 56 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 36);
            *(b + 85 * OS1_S1 + 91) = prefactor_z * *(b + 85 * OS1_S1 + 59) -
                                      p_over_q * *(b + 124 * OS1_S1 + 59);
            *(b + 85 * OS1_S1 + 92) = prefactor_y * *(b + 85 * OS1_S1 + 61) -
                                      p_over_q * *(b + 123 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 61);
            *(b + 85 * OS1_S1 + 93) =
                prefactor_z * *(b + 85 * OS1_S1 + 61) -
                p_over_q * *(b + 124 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 37);
            *(b + 85 * OS1_S1 + 94) =
                prefactor_x * *(b + 85 * OS1_S1 + 66) -
                p_over_q * *(b + 121 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 45);
            *(b + 85 * OS1_S1 + 95) = prefactor_z * *(b + 85 * OS1_S1 + 62) -
                                      p_over_q * *(b + 124 * OS1_S1 + 62);
            *(b + 85 * OS1_S1 + 96) = prefactor_z * *(b + 85 * OS1_S1 + 63) -
                                      p_over_q * *(b + 124 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 85 * OS1_S1 + 38);
            *(b + 85 * OS1_S1 + 97) = prefactor_y * *(b + 85 * OS1_S1 + 65) -
                                      p_over_q * *(b + 123 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 65);
            *(b + 85 * OS1_S1 + 98) =
                prefactor_x * *(b + 85 * OS1_S1 + 70) -
                p_over_q * *(b + 121 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 49);
            *(b + 85 * OS1_S1 + 99) =
                prefactor_x * *(b + 85 * OS1_S1 + 71) -
                p_over_q * *(b + 121 * OS1_S1 + 71) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 71) +
                one_over_two_q * *(b + 85 * OS1_S1 + 50);
            *(b + 85 * OS1_S1 + 100) = prefactor_z * *(b + 85 * OS1_S1 + 66) -
                                       p_over_q * *(b + 124 * OS1_S1 + 66);
            *(b + 85 * OS1_S1 + 101) = prefactor_z * *(b + 85 * OS1_S1 + 67) -
                                       p_over_q * *(b + 124 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 41);
            *(b + 85 * OS1_S1 + 102) =
                prefactor_y * *(b + 85 * OS1_S1 + 69) -
                p_over_q * *(b + 123 * OS1_S1 + 69) +
                one_over_two_q * *(b + 56 * OS1_S1 + 69) +
                one_over_two_q * *(b + 85 * OS1_S1 + 44);
            *(b + 85 * OS1_S1 + 103) = prefactor_y * *(b + 85 * OS1_S1 + 70) -
                                       p_over_q * *(b + 123 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 70);
            *(b + 85 * OS1_S1 + 104) =
                prefactor_x * *(b + 85 * OS1_S1 + 76) -
                p_over_q * *(b + 121 * OS1_S1 + 76) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 76) +
                one_over_two_q * *(b + 85 * OS1_S1 + 55);
            *(b + 85 * OS1_S1 + 105) =
                prefactor_x * *(b + 85 * OS1_S1 + 77) -
                p_over_q * *(b + 121 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 77);
            *(b + 85 * OS1_S1 + 106) = prefactor_z * *(b + 85 * OS1_S1 + 71) -
                                       p_over_q * *(b + 124 * OS1_S1 + 71);
            *(b + 85 * OS1_S1 + 107) =
                prefactor_x * *(b + 85 * OS1_S1 + 79) -
                p_over_q * *(b + 121 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 79);
            *(b + 85 * OS1_S1 + 108) =
                prefactor_x * *(b + 85 * OS1_S1 + 80) -
                p_over_q * *(b + 121 * OS1_S1 + 80) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 80);
            *(b + 85 * OS1_S1 + 109) =
                prefactor_x * *(b + 85 * OS1_S1 + 81) -
                p_over_q * *(b + 121 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 81);
            *(b + 85 * OS1_S1 + 110) = prefactor_y * *(b + 85 * OS1_S1 + 76) -
                                       p_over_q * *(b + 123 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 76);
            *(b + 85 * OS1_S1 + 111) =
                prefactor_x * *(b + 85 * OS1_S1 + 83) -
                p_over_q * *(b + 121 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 83);
            *(b + 85 * OS1_S1 + 112) =
                prefactor_y * *(b + 85 * OS1_S1 + 77) -
                p_over_q * *(b + 123 * OS1_S1 + 77) +
                one_over_two_q * *(b + 56 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 85 * OS1_S1 + 50);
            *(b + 85 * OS1_S1 + 113) = prefactor_z * *(b + 85 * OS1_S1 + 77) -
                                       p_over_q * *(b + 124 * OS1_S1 + 77);
            *(b + 85 * OS1_S1 + 114) = prefactor_z * *(b + 85 * OS1_S1 + 78) -
                                       p_over_q * *(b + 124 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 50);
            *(b + 85 * OS1_S1 + 115) =
                prefactor_z * *(b + 85 * OS1_S1 + 79) -
                p_over_q * *(b + 124 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 51);
            *(b + 85 * OS1_S1 + 116) =
                prefactor_y * *(b + 85 * OS1_S1 + 81) -
                p_over_q * *(b + 123 * OS1_S1 + 81) +
                one_over_two_q * *(b + 56 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 54);
            *(b + 85 * OS1_S1 + 117) =
                prefactor_y * *(b + 85 * OS1_S1 + 82) -
                p_over_q * *(b + 123 * OS1_S1 + 82) +
                one_over_two_q * *(b + 56 * OS1_S1 + 82) +
                one_over_two_q * *(b + 85 * OS1_S1 + 55);
            *(b + 85 * OS1_S1 + 118) = prefactor_y * *(b + 85 * OS1_S1 + 83) -
                                       p_over_q * *(b + 123 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 83);
            *(b + 85 * OS1_S1 + 119) =
                prefactor_z * *(b + 85 * OS1_S1 + 83) -
                p_over_q * *(b + 124 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 85 * OS1_S1 + 55);
            *(b + 86 * OS1_S1 + 84) =
                prefactor_x * *(b + 86 * OS1_S1 + 56) -
                p_over_q * *(b + 122 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 86 * OS1_S1 + 35);
            *(b + 86 * OS1_S1 + 85) = prefactor_y * *(b + 86 * OS1_S1 + 56) -
                                      p_over_q * *(b + 124 * OS1_S1 + 56);
            *(b + 86 * OS1_S1 + 86) = prefactor_z * *(b + 86 * OS1_S1 + 56) -
                                      p_over_q * *(b + 125 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 56);
            *(b + 86 * OS1_S1 + 87) = prefactor_y * *(b + 86 * OS1_S1 + 57) -
                                      p_over_q * *(b + 124 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 35);
            *(b + 86 * OS1_S1 + 88) = prefactor_y * *(b + 86 * OS1_S1 + 58) -
                                      p_over_q * *(b + 124 * OS1_S1 + 58);
            *(b + 86 * OS1_S1 + 89) = prefactor_z * *(b + 86 * OS1_S1 + 58) -
                                      p_over_q * *(b + 125 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 35);
            *(b + 86 * OS1_S1 + 90) =
                prefactor_y * *(b + 86 * OS1_S1 + 59) -
                p_over_q * *(b + 124 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 36);
            *(b + 86 * OS1_S1 + 91) = prefactor_z * *(b + 86 * OS1_S1 + 59) -
                                      p_over_q * *(b + 125 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 59);
            *(b + 86 * OS1_S1 + 92) = prefactor_y * *(b + 86 * OS1_S1 + 61) -
                                      p_over_q * *(b + 124 * OS1_S1 + 61);
            *(b + 86 * OS1_S1 + 93) =
                prefactor_z * *(b + 86 * OS1_S1 + 61) -
                p_over_q * *(b + 125 * OS1_S1 + 61) +
                one_over_two_q * *(b + 56 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 37);
            *(b + 86 * OS1_S1 + 94) =
                prefactor_x * *(b + 86 * OS1_S1 + 66) -
                p_over_q * *(b + 122 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 45);
            *(b + 86 * OS1_S1 + 95) = prefactor_z * *(b + 86 * OS1_S1 + 62) -
                                      p_over_q * *(b + 125 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 56 * OS1_S1 + 62);
            *(b + 86 * OS1_S1 + 96) = prefactor_y * *(b + 86 * OS1_S1 + 64) -
                                      p_over_q * *(b + 124 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 86 * OS1_S1 + 40);
            *(b + 86 * OS1_S1 + 97) = prefactor_y * *(b + 86 * OS1_S1 + 65) -
                                      p_over_q * *(b + 124 * OS1_S1 + 65);
            *(b + 86 * OS1_S1 + 98) =
                prefactor_x * *(b + 86 * OS1_S1 + 70) -
                p_over_q * *(b + 122 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 49);
            *(b + 86 * OS1_S1 + 99) =
                prefactor_x * *(b + 86 * OS1_S1 + 71) -
                p_over_q * *(b + 122 * OS1_S1 + 71) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 71) +
                one_over_two_q * *(b + 86 * OS1_S1 + 50);
            *(b + 86 * OS1_S1 + 100) = prefactor_z * *(b + 86 * OS1_S1 + 66) -
                                       p_over_q * *(b + 125 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 66);
            *(b + 86 * OS1_S1 + 101) =
                prefactor_z * *(b + 86 * OS1_S1 + 67) -
                p_over_q * *(b + 125 * OS1_S1 + 67) +
                one_over_two_q * *(b + 56 * OS1_S1 + 67) +
                one_over_two_q * *(b + 86 * OS1_S1 + 41);
            *(b + 86 * OS1_S1 + 102) = prefactor_y * *(b + 86 * OS1_S1 + 69) -
                                       p_over_q * *(b + 124 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 44);
            *(b + 86 * OS1_S1 + 103) = prefactor_y * *(b + 86 * OS1_S1 + 70) -
                                       p_over_q * *(b + 124 * OS1_S1 + 70);
            *(b + 86 * OS1_S1 + 104) =
                prefactor_x * *(b + 86 * OS1_S1 + 76) -
                p_over_q * *(b + 122 * OS1_S1 + 76) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 76) +
                one_over_two_q * *(b + 86 * OS1_S1 + 55);
            *(b + 86 * OS1_S1 + 105) =
                prefactor_x * *(b + 86 * OS1_S1 + 77) -
                p_over_q * *(b + 122 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 77);
            *(b + 86 * OS1_S1 + 106) = prefactor_z * *(b + 86 * OS1_S1 + 71) -
                                       p_over_q * *(b + 125 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 71);
            *(b + 86 * OS1_S1 + 107) =
                prefactor_x * *(b + 86 * OS1_S1 + 79) -
                p_over_q * *(b + 122 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 79);
            *(b + 86 * OS1_S1 + 108) =
                prefactor_x * *(b + 86 * OS1_S1 + 80) -
                p_over_q * *(b + 122 * OS1_S1 + 80) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 80);
            *(b + 86 * OS1_S1 + 109) =
                prefactor_x * *(b + 86 * OS1_S1 + 81) -
                p_over_q * *(b + 122 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 81);
            *(b + 86 * OS1_S1 + 110) = prefactor_y * *(b + 86 * OS1_S1 + 76) -
                                       p_over_q * *(b + 124 * OS1_S1 + 76);
            *(b + 86 * OS1_S1 + 111) =
                prefactor_x * *(b + 86 * OS1_S1 + 83) -
                p_over_q * *(b + 122 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 83);
            *(b + 86 * OS1_S1 + 112) =
                prefactor_y * *(b + 86 * OS1_S1 + 77) -
                p_over_q * *(b + 124 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 86 * OS1_S1 + 50);
            *(b + 86 * OS1_S1 + 113) = prefactor_z * *(b + 86 * OS1_S1 + 77) -
                                       p_over_q * *(b + 125 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 77);
            *(b + 86 * OS1_S1 + 114) =
                prefactor_z * *(b + 86 * OS1_S1 + 78) -
                p_over_q * *(b + 125 * OS1_S1 + 78) +
                one_over_two_q * *(b + 56 * OS1_S1 + 78) +
                one_over_two_q * *(b + 86 * OS1_S1 + 50);
            *(b + 86 * OS1_S1 + 115) =
                prefactor_z * *(b + 86 * OS1_S1 + 79) -
                p_over_q * *(b + 125 * OS1_S1 + 79) +
                one_over_two_q * *(b + 56 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 51);
            *(b + 86 * OS1_S1 + 116) =
                prefactor_y * *(b + 86 * OS1_S1 + 81) -
                p_over_q * *(b + 124 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 54);
            *(b + 86 * OS1_S1 + 117) = prefactor_y * *(b + 86 * OS1_S1 + 82) -
                                       p_over_q * *(b + 124 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 55);
            *(b + 86 * OS1_S1 + 118) = prefactor_y * *(b + 86 * OS1_S1 + 83) -
                                       p_over_q * *(b + 124 * OS1_S1 + 83);
            *(b + 86 * OS1_S1 + 119) =
                prefactor_z * *(b + 86 * OS1_S1 + 83) -
                p_over_q * *(b + 125 * OS1_S1 + 83) +
                one_over_two_q * *(b + 56 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 86 * OS1_S1 + 55);
            *(b + 87 * OS1_S1 + 84) =
                prefactor_x * *(b + 87 * OS1_S1 + 56) -
                p_over_q * *(b + 123 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 35);
            *(b + 87 * OS1_S1 + 85) =
                prefactor_y * *(b + 87 * OS1_S1 + 56) -
                p_over_q * *(b + 126 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 56);
            *(b + 87 * OS1_S1 + 86) = prefactor_z * *(b + 87 * OS1_S1 + 56) -
                                      p_over_q * *(b + 127 * OS1_S1 + 56);
            *(b + 87 * OS1_S1 + 87) =
                prefactor_y * *(b + 87 * OS1_S1 + 57) -
                p_over_q * *(b + 126 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 57) +
                one_over_two_q * *(b + 87 * OS1_S1 + 35);
            *(b + 87 * OS1_S1 + 88) = prefactor_z * *(b + 87 * OS1_S1 + 57) -
                                      p_over_q * *(b + 127 * OS1_S1 + 57);
            *(b + 87 * OS1_S1 + 89) = prefactor_z * *(b + 87 * OS1_S1 + 58) -
                                      p_over_q * *(b + 127 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 87 * OS1_S1 + 35);
            *(b + 87 * OS1_S1 + 90) =
                prefactor_y * *(b + 87 * OS1_S1 + 59) -
                p_over_q * *(b + 126 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 36);
            *(b + 87 * OS1_S1 + 91) = prefactor_z * *(b + 87 * OS1_S1 + 59) -
                                      p_over_q * *(b + 127 * OS1_S1 + 59);
            *(b + 87 * OS1_S1 + 92) =
                prefactor_y * *(b + 87 * OS1_S1 + 61) -
                p_over_q * *(b + 126 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 61);
            *(b + 87 * OS1_S1 + 93) =
                prefactor_z * *(b + 87 * OS1_S1 + 61) -
                p_over_q * *(b + 127 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 37);
            *(b + 87 * OS1_S1 + 94) =
                prefactor_x * *(b + 87 * OS1_S1 + 66) -
                p_over_q * *(b + 123 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 45);
            *(b + 87 * OS1_S1 + 95) = prefactor_z * *(b + 87 * OS1_S1 + 62) -
                                      p_over_q * *(b + 127 * OS1_S1 + 62);
            *(b + 87 * OS1_S1 + 96) = prefactor_z * *(b + 87 * OS1_S1 + 63) -
                                      p_over_q * *(b + 127 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 87 * OS1_S1 + 38);
            *(b + 87 * OS1_S1 + 97) =
                prefactor_y * *(b + 87 * OS1_S1 + 65) -
                p_over_q * *(b + 126 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 65);
            *(b + 87 * OS1_S1 + 98) =
                prefactor_x * *(b + 87 * OS1_S1 + 70) -
                p_over_q * *(b + 123 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 49);
            *(b + 87 * OS1_S1 + 99) =
                prefactor_x * *(b + 87 * OS1_S1 + 71) -
                p_over_q * *(b + 123 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 71) +
                one_over_two_q * *(b + 87 * OS1_S1 + 50);
            *(b + 87 * OS1_S1 + 100) = prefactor_z * *(b + 87 * OS1_S1 + 66) -
                                       p_over_q * *(b + 127 * OS1_S1 + 66);
            *(b + 87 * OS1_S1 + 101) = prefactor_z * *(b + 87 * OS1_S1 + 67) -
                                       p_over_q * *(b + 127 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 41);
            *(b + 87 * OS1_S1 + 102) =
                prefactor_y * *(b + 87 * OS1_S1 + 69) -
                p_over_q * *(b + 126 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 69) +
                one_over_two_q * *(b + 87 * OS1_S1 + 44);
            *(b + 87 * OS1_S1 + 103) =
                prefactor_y * *(b + 87 * OS1_S1 + 70) -
                p_over_q * *(b + 126 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 70);
            *(b + 87 * OS1_S1 + 104) =
                prefactor_x * *(b + 87 * OS1_S1 + 76) -
                p_over_q * *(b + 123 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 76) +
                one_over_two_q * *(b + 87 * OS1_S1 + 55);
            *(b + 87 * OS1_S1 + 105) =
                prefactor_x * *(b + 87 * OS1_S1 + 77) -
                p_over_q * *(b + 123 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 77);
            *(b + 87 * OS1_S1 + 106) = prefactor_z * *(b + 87 * OS1_S1 + 71) -
                                       p_over_q * *(b + 127 * OS1_S1 + 71);
            *(b + 87 * OS1_S1 + 107) =
                prefactor_x * *(b + 87 * OS1_S1 + 79) -
                p_over_q * *(b + 123 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 79);
            *(b + 87 * OS1_S1 + 108) =
                prefactor_x * *(b + 87 * OS1_S1 + 80) -
                p_over_q * *(b + 123 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 80);
            *(b + 87 * OS1_S1 + 109) =
                prefactor_x * *(b + 87 * OS1_S1 + 81) -
                p_over_q * *(b + 123 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 81);
            *(b + 87 * OS1_S1 + 110) =
                prefactor_y * *(b + 87 * OS1_S1 + 76) -
                p_over_q * *(b + 126 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 76);
            *(b + 87 * OS1_S1 + 111) =
                prefactor_x * *(b + 87 * OS1_S1 + 83) -
                p_over_q * *(b + 123 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 83);
            *(b + 87 * OS1_S1 + 112) =
                prefactor_y * *(b + 87 * OS1_S1 + 77) -
                p_over_q * *(b + 126 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 50);
            *(b + 87 * OS1_S1 + 113) = prefactor_z * *(b + 87 * OS1_S1 + 77) -
                                       p_over_q * *(b + 127 * OS1_S1 + 77);
            *(b + 87 * OS1_S1 + 114) = prefactor_z * *(b + 87 * OS1_S1 + 78) -
                                       p_over_q * *(b + 127 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 50);
            *(b + 87 * OS1_S1 + 115) =
                prefactor_z * *(b + 87 * OS1_S1 + 79) -
                p_over_q * *(b + 127 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 51);
            *(b + 87 * OS1_S1 + 116) =
                prefactor_y * *(b + 87 * OS1_S1 + 81) -
                p_over_q * *(b + 126 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 54);
            *(b + 87 * OS1_S1 + 117) =
                prefactor_y * *(b + 87 * OS1_S1 + 82) -
                p_over_q * *(b + 126 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 82) +
                one_over_two_q * *(b + 87 * OS1_S1 + 55);
            *(b + 87 * OS1_S1 + 118) =
                prefactor_y * *(b + 87 * OS1_S1 + 83) -
                p_over_q * *(b + 126 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 83);
            *(b + 87 * OS1_S1 + 119) =
                prefactor_z * *(b + 87 * OS1_S1 + 83) -
                p_over_q * *(b + 127 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 55);
            *(b + 88 * OS1_S1 + 84) =
                prefactor_x * *(b + 88 * OS1_S1 + 56) -
                p_over_q * *(b + 124 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 35);
            *(b + 88 * OS1_S1 + 85) = prefactor_y * *(b + 88 * OS1_S1 + 56) -
                                      p_over_q * *(b + 127 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 56);
            *(b + 88 * OS1_S1 + 86) = prefactor_z * *(b + 88 * OS1_S1 + 56) -
                                      p_over_q * *(b + 128 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 56);
            *(b + 88 * OS1_S1 + 87) = prefactor_y * *(b + 88 * OS1_S1 + 57) -
                                      p_over_q * *(b + 127 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 35);
            *(b + 88 * OS1_S1 + 88) = prefactor_z * *(b + 88 * OS1_S1 + 57) -
                                      p_over_q * *(b + 128 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 57);
            *(b + 88 * OS1_S1 + 89) = prefactor_z * *(b + 88 * OS1_S1 + 58) -
                                      p_over_q * *(b + 128 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 35);
            *(b + 88 * OS1_S1 + 90) =
                prefactor_y * *(b + 88 * OS1_S1 + 59) -
                p_over_q * *(b + 127 * OS1_S1 + 59) +
                one_over_two_q * *(b + 58 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 36);
            *(b + 88 * OS1_S1 + 91) = prefactor_z * *(b + 88 * OS1_S1 + 59) -
                                      p_over_q * *(b + 128 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 59);
            *(b + 88 * OS1_S1 + 92) = prefactor_y * *(b + 88 * OS1_S1 + 61) -
                                      p_over_q * *(b + 127 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 61);
            *(b + 88 * OS1_S1 + 93) =
                prefactor_z * *(b + 88 * OS1_S1 + 61) -
                p_over_q * *(b + 128 * OS1_S1 + 61) +
                one_over_two_q * *(b + 57 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 37);
            *(b + 88 * OS1_S1 + 94) =
                prefactor_x * *(b + 88 * OS1_S1 + 66) -
                p_over_q * *(b + 124 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 45);
            *(b + 88 * OS1_S1 + 95) = prefactor_z * *(b + 88 * OS1_S1 + 62) -
                                      p_over_q * *(b + 128 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 62);
            *(b + 88 * OS1_S1 + 96) = prefactor_z * *(b + 88 * OS1_S1 + 63) -
                                      p_over_q * *(b + 128 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 57 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 88 * OS1_S1 + 38);
            *(b + 88 * OS1_S1 + 97) = prefactor_y * *(b + 88 * OS1_S1 + 65) -
                                      p_over_q * *(b + 127 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 58 * OS1_S1 + 65);
            *(b + 88 * OS1_S1 + 98) =
                prefactor_x * *(b + 88 * OS1_S1 + 70) -
                p_over_q * *(b + 124 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 49);
            *(b + 88 * OS1_S1 + 99) =
                prefactor_x * *(b + 88 * OS1_S1 + 71) -
                p_over_q * *(b + 124 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 71) +
                one_over_two_q * *(b + 88 * OS1_S1 + 50);
            *(b + 88 * OS1_S1 + 100) = prefactor_z * *(b + 88 * OS1_S1 + 66) -
                                       p_over_q * *(b + 128 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 66);
            *(b + 88 * OS1_S1 + 101) =
                prefactor_z * *(b + 88 * OS1_S1 + 67) -
                p_over_q * *(b + 128 * OS1_S1 + 67) +
                one_over_two_q * *(b + 57 * OS1_S1 + 67) +
                one_over_two_q * *(b + 88 * OS1_S1 + 41);
            *(b + 88 * OS1_S1 + 102) =
                prefactor_y * *(b + 88 * OS1_S1 + 69) -
                p_over_q * *(b + 127 * OS1_S1 + 69) +
                one_over_two_q * *(b + 58 * OS1_S1 + 69) +
                one_over_two_q * *(b + 88 * OS1_S1 + 44);
            *(b + 88 * OS1_S1 + 103) = prefactor_y * *(b + 88 * OS1_S1 + 70) -
                                       p_over_q * *(b + 127 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 70);
            *(b + 88 * OS1_S1 + 104) =
                prefactor_x * *(b + 88 * OS1_S1 + 76) -
                p_over_q * *(b + 124 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 76) +
                one_over_two_q * *(b + 88 * OS1_S1 + 55);
            *(b + 88 * OS1_S1 + 105) =
                prefactor_x * *(b + 88 * OS1_S1 + 77) -
                p_over_q * *(b + 124 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 77);
            *(b + 88 * OS1_S1 + 106) = prefactor_z * *(b + 88 * OS1_S1 + 71) -
                                       p_over_q * *(b + 128 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 71);
            *(b + 88 * OS1_S1 + 107) =
                prefactor_x * *(b + 88 * OS1_S1 + 79) -
                p_over_q * *(b + 124 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 79);
            *(b + 88 * OS1_S1 + 108) =
                prefactor_x * *(b + 88 * OS1_S1 + 80) -
                p_over_q * *(b + 124 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 80);
            *(b + 88 * OS1_S1 + 109) =
                prefactor_x * *(b + 88 * OS1_S1 + 81) -
                p_over_q * *(b + 124 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 81);
            *(b + 88 * OS1_S1 + 110) = prefactor_y * *(b + 88 * OS1_S1 + 76) -
                                       p_over_q * *(b + 127 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 76);
            *(b + 88 * OS1_S1 + 111) =
                prefactor_x * *(b + 88 * OS1_S1 + 83) -
                p_over_q * *(b + 124 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 83);
            *(b + 88 * OS1_S1 + 112) =
                prefactor_y * *(b + 88 * OS1_S1 + 77) -
                p_over_q * *(b + 127 * OS1_S1 + 77) +
                one_over_two_q * *(b + 58 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 50);
            *(b + 88 * OS1_S1 + 113) = prefactor_z * *(b + 88 * OS1_S1 + 77) -
                                       p_over_q * *(b + 128 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 77);
            *(b + 88 * OS1_S1 + 114) =
                prefactor_z * *(b + 88 * OS1_S1 + 78) -
                p_over_q * *(b + 128 * OS1_S1 + 78) +
                one_over_two_q * *(b + 57 * OS1_S1 + 78) +
                one_over_two_q * *(b + 88 * OS1_S1 + 50);
            *(b + 88 * OS1_S1 + 115) =
                prefactor_z * *(b + 88 * OS1_S1 + 79) -
                p_over_q * *(b + 128 * OS1_S1 + 79) +
                one_over_two_q * *(b + 57 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 51);
            *(b + 88 * OS1_S1 + 116) =
                prefactor_y * *(b + 88 * OS1_S1 + 81) -
                p_over_q * *(b + 127 * OS1_S1 + 81) +
                one_over_two_q * *(b + 58 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 54);
            *(b + 88 * OS1_S1 + 117) =
                prefactor_y * *(b + 88 * OS1_S1 + 82) -
                p_over_q * *(b + 127 * OS1_S1 + 82) +
                one_over_two_q * *(b + 58 * OS1_S1 + 82) +
                one_over_two_q * *(b + 88 * OS1_S1 + 55);
            *(b + 88 * OS1_S1 + 118) = prefactor_y * *(b + 88 * OS1_S1 + 83) -
                                       p_over_q * *(b + 127 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 83);
            *(b + 88 * OS1_S1 + 119) =
                prefactor_z * *(b + 88 * OS1_S1 + 83) -
                p_over_q * *(b + 128 * OS1_S1 + 83) +
                one_over_two_q * *(b + 57 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 55);
            *(b + 89 * OS1_S1 + 84) =
                prefactor_x * *(b + 89 * OS1_S1 + 56) -
                p_over_q * *(b + 125 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 35);
            *(b + 89 * OS1_S1 + 85) = prefactor_y * *(b + 89 * OS1_S1 + 56) -
                                      p_over_q * *(b + 128 * OS1_S1 + 56);
            *(b + 89 * OS1_S1 + 86) =
                prefactor_z * *(b + 89 * OS1_S1 + 56) -
                p_over_q * *(b + 129 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 56);
            *(b + 89 * OS1_S1 + 87) = prefactor_y * *(b + 89 * OS1_S1 + 57) -
                                      p_over_q * *(b + 128 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 89 * OS1_S1 + 35);
            *(b + 89 * OS1_S1 + 88) = prefactor_y * *(b + 89 * OS1_S1 + 58) -
                                      p_over_q * *(b + 128 * OS1_S1 + 58);
            *(b + 89 * OS1_S1 + 89) =
                prefactor_z * *(b + 89 * OS1_S1 + 58) -
                p_over_q * *(b + 129 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 58) +
                one_over_two_q * *(b + 89 * OS1_S1 + 35);
            *(b + 89 * OS1_S1 + 90) =
                prefactor_y * *(b + 89 * OS1_S1 + 59) -
                p_over_q * *(b + 128 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 36);
            *(b + 89 * OS1_S1 + 91) =
                prefactor_z * *(b + 89 * OS1_S1 + 59) -
                p_over_q * *(b + 129 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 59);
            *(b + 89 * OS1_S1 + 92) = prefactor_y * *(b + 89 * OS1_S1 + 61) -
                                      p_over_q * *(b + 128 * OS1_S1 + 61);
            *(b + 89 * OS1_S1 + 93) =
                prefactor_z * *(b + 89 * OS1_S1 + 61) -
                p_over_q * *(b + 129 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 37);
            *(b + 89 * OS1_S1 + 94) =
                prefactor_x * *(b + 89 * OS1_S1 + 66) -
                p_over_q * *(b + 125 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 45);
            *(b + 89 * OS1_S1 + 95) =
                prefactor_z * *(b + 89 * OS1_S1 + 62) -
                p_over_q * *(b + 129 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 62);
            *(b + 89 * OS1_S1 + 96) = prefactor_y * *(b + 89 * OS1_S1 + 64) -
                                      p_over_q * *(b + 128 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 89 * OS1_S1 + 40);
            *(b + 89 * OS1_S1 + 97) = prefactor_y * *(b + 89 * OS1_S1 + 65) -
                                      p_over_q * *(b + 128 * OS1_S1 + 65);
            *(b + 89 * OS1_S1 + 98) =
                prefactor_x * *(b + 89 * OS1_S1 + 70) -
                p_over_q * *(b + 125 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 49);
            *(b + 89 * OS1_S1 + 99) =
                prefactor_x * *(b + 89 * OS1_S1 + 71) -
                p_over_q * *(b + 125 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 71) +
                one_over_two_q * *(b + 89 * OS1_S1 + 50);
            *(b + 89 * OS1_S1 + 100) =
                prefactor_z * *(b + 89 * OS1_S1 + 66) -
                p_over_q * *(b + 129 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 66);
            *(b + 89 * OS1_S1 + 101) =
                prefactor_z * *(b + 89 * OS1_S1 + 67) -
                p_over_q * *(b + 129 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 67) +
                one_over_two_q * *(b + 89 * OS1_S1 + 41);
            *(b + 89 * OS1_S1 + 102) = prefactor_y * *(b + 89 * OS1_S1 + 69) -
                                       p_over_q * *(b + 128 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 44);
            *(b + 89 * OS1_S1 + 103) = prefactor_y * *(b + 89 * OS1_S1 + 70) -
                                       p_over_q * *(b + 128 * OS1_S1 + 70);
            *(b + 89 * OS1_S1 + 104) =
                prefactor_x * *(b + 89 * OS1_S1 + 76) -
                p_over_q * *(b + 125 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 76) +
                one_over_two_q * *(b + 89 * OS1_S1 + 55);
            *(b + 89 * OS1_S1 + 105) =
                prefactor_x * *(b + 89 * OS1_S1 + 77) -
                p_over_q * *(b + 125 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 77);
            *(b + 89 * OS1_S1 + 106) =
                prefactor_z * *(b + 89 * OS1_S1 + 71) -
                p_over_q * *(b + 129 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 71);
            *(b + 89 * OS1_S1 + 107) =
                prefactor_x * *(b + 89 * OS1_S1 + 79) -
                p_over_q * *(b + 125 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 79);
            *(b + 89 * OS1_S1 + 108) =
                prefactor_x * *(b + 89 * OS1_S1 + 80) -
                p_over_q * *(b + 125 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 80);
            *(b + 89 * OS1_S1 + 109) =
                prefactor_x * *(b + 89 * OS1_S1 + 81) -
                p_over_q * *(b + 125 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 81);
            *(b + 89 * OS1_S1 + 110) = prefactor_y * *(b + 89 * OS1_S1 + 76) -
                                       p_over_q * *(b + 128 * OS1_S1 + 76);
            *(b + 89 * OS1_S1 + 111) =
                prefactor_x * *(b + 89 * OS1_S1 + 83) -
                p_over_q * *(b + 125 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 83);
            *(b + 89 * OS1_S1 + 112) =
                prefactor_y * *(b + 89 * OS1_S1 + 77) -
                p_over_q * *(b + 128 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 50);
            *(b + 89 * OS1_S1 + 113) =
                prefactor_z * *(b + 89 * OS1_S1 + 77) -
                p_over_q * *(b + 129 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 77);
            *(b + 89 * OS1_S1 + 114) =
                prefactor_z * *(b + 89 * OS1_S1 + 78) -
                p_over_q * *(b + 129 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 78) +
                one_over_two_q * *(b + 89 * OS1_S1 + 50);
            *(b + 89 * OS1_S1 + 115) =
                prefactor_z * *(b + 89 * OS1_S1 + 79) -
                p_over_q * *(b + 129 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 51);
            *(b + 89 * OS1_S1 + 116) =
                prefactor_y * *(b + 89 * OS1_S1 + 81) -
                p_over_q * *(b + 128 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 54);
            *(b + 89 * OS1_S1 + 117) = prefactor_y * *(b + 89 * OS1_S1 + 82) -
                                       p_over_q * *(b + 128 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 55);
            *(b + 89 * OS1_S1 + 118) = prefactor_y * *(b + 89 * OS1_S1 + 83) -
                                       p_over_q * *(b + 128 * OS1_S1 + 83);
            *(b + 89 * OS1_S1 + 119) =
                prefactor_z * *(b + 89 * OS1_S1 + 83) -
                p_over_q * *(b + 129 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 55);
            *(b + 90 * OS1_S1 + 84) =
                prefactor_x * *(b + 90 * OS1_S1 + 56) -
                p_over_q * *(b + 126 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 90 * OS1_S1 + 35);
            *(b + 90 * OS1_S1 + 85) =
                prefactor_y * *(b + 90 * OS1_S1 + 56) -
                p_over_q * *(b + 130 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 56);
            *(b + 90 * OS1_S1 + 86) = prefactor_z * *(b + 90 * OS1_S1 + 56) -
                                      p_over_q * *(b + 131 * OS1_S1 + 56);
            *(b + 90 * OS1_S1 + 87) =
                prefactor_y * *(b + 90 * OS1_S1 + 57) -
                p_over_q * *(b + 130 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 57) +
                one_over_two_q * *(b + 90 * OS1_S1 + 35);
            *(b + 90 * OS1_S1 + 88) = prefactor_z * *(b + 90 * OS1_S1 + 57) -
                                      p_over_q * *(b + 131 * OS1_S1 + 57);
            *(b + 90 * OS1_S1 + 89) = prefactor_z * *(b + 90 * OS1_S1 + 58) -
                                      p_over_q * *(b + 131 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 90 * OS1_S1 + 35);
            *(b + 90 * OS1_S1 + 90) =
                prefactor_y * *(b + 90 * OS1_S1 + 59) -
                p_over_q * *(b + 130 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 36);
            *(b + 90 * OS1_S1 + 91) = prefactor_z * *(b + 90 * OS1_S1 + 59) -
                                      p_over_q * *(b + 131 * OS1_S1 + 59);
            *(b + 90 * OS1_S1 + 92) =
                prefactor_y * *(b + 90 * OS1_S1 + 61) -
                p_over_q * *(b + 130 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 61);
            *(b + 90 * OS1_S1 + 93) =
                prefactor_z * *(b + 90 * OS1_S1 + 61) -
                p_over_q * *(b + 131 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 37);
            *(b + 90 * OS1_S1 + 94) =
                prefactor_x * *(b + 90 * OS1_S1 + 66) -
                p_over_q * *(b + 126 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 45);
            *(b + 90 * OS1_S1 + 95) = prefactor_z * *(b + 90 * OS1_S1 + 62) -
                                      p_over_q * *(b + 131 * OS1_S1 + 62);
            *(b + 90 * OS1_S1 + 96) = prefactor_z * *(b + 90 * OS1_S1 + 63) -
                                      p_over_q * *(b + 131 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 90 * OS1_S1 + 38);
            *(b + 90 * OS1_S1 + 97) =
                prefactor_y * *(b + 90 * OS1_S1 + 65) -
                p_over_q * *(b + 130 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 65);
            *(b + 90 * OS1_S1 + 98) =
                prefactor_x * *(b + 90 * OS1_S1 + 70) -
                p_over_q * *(b + 126 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 49);
            *(b + 90 * OS1_S1 + 99) =
                prefactor_x * *(b + 90 * OS1_S1 + 71) -
                p_over_q * *(b + 126 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 71) +
                one_over_two_q * *(b + 90 * OS1_S1 + 50);
            *(b + 90 * OS1_S1 + 100) = prefactor_z * *(b + 90 * OS1_S1 + 66) -
                                       p_over_q * *(b + 131 * OS1_S1 + 66);
            *(b + 90 * OS1_S1 + 101) = prefactor_z * *(b + 90 * OS1_S1 + 67) -
                                       p_over_q * *(b + 131 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 41);
            *(b + 90 * OS1_S1 + 102) =
                prefactor_y * *(b + 90 * OS1_S1 + 69) -
                p_over_q * *(b + 130 * OS1_S1 + 69) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 69) +
                one_over_two_q * *(b + 90 * OS1_S1 + 44);
            *(b + 90 * OS1_S1 + 103) =
                prefactor_y * *(b + 90 * OS1_S1 + 70) -
                p_over_q * *(b + 130 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 70);
            *(b + 90 * OS1_S1 + 104) =
                prefactor_x * *(b + 90 * OS1_S1 + 76) -
                p_over_q * *(b + 126 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 76) +
                one_over_two_q * *(b + 90 * OS1_S1 + 55);
            *(b + 90 * OS1_S1 + 105) =
                prefactor_x * *(b + 90 * OS1_S1 + 77) -
                p_over_q * *(b + 126 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 77);
            *(b + 90 * OS1_S1 + 106) = prefactor_z * *(b + 90 * OS1_S1 + 71) -
                                       p_over_q * *(b + 131 * OS1_S1 + 71);
            *(b + 90 * OS1_S1 + 107) =
                prefactor_x * *(b + 90 * OS1_S1 + 79) -
                p_over_q * *(b + 126 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 79);
            *(b + 90 * OS1_S1 + 108) =
                prefactor_x * *(b + 90 * OS1_S1 + 80) -
                p_over_q * *(b + 126 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 80);
            *(b + 90 * OS1_S1 + 109) =
                prefactor_x * *(b + 90 * OS1_S1 + 81) -
                p_over_q * *(b + 126 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 81);
            *(b + 90 * OS1_S1 + 110) =
                prefactor_y * *(b + 90 * OS1_S1 + 76) -
                p_over_q * *(b + 130 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 76);
            *(b + 90 * OS1_S1 + 111) =
                prefactor_x * *(b + 90 * OS1_S1 + 83) -
                p_over_q * *(b + 126 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 83);
            *(b + 90 * OS1_S1 + 112) =
                prefactor_y * *(b + 90 * OS1_S1 + 77) -
                p_over_q * *(b + 130 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 90 * OS1_S1 + 50);
            *(b + 90 * OS1_S1 + 113) = prefactor_z * *(b + 90 * OS1_S1 + 77) -
                                       p_over_q * *(b + 131 * OS1_S1 + 77);
            *(b + 90 * OS1_S1 + 114) = prefactor_z * *(b + 90 * OS1_S1 + 78) -
                                       p_over_q * *(b + 131 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 50);
            *(b + 90 * OS1_S1 + 115) =
                prefactor_z * *(b + 90 * OS1_S1 + 79) -
                p_over_q * *(b + 131 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 51);
            *(b + 90 * OS1_S1 + 116) =
                prefactor_y * *(b + 90 * OS1_S1 + 81) -
                p_over_q * *(b + 130 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 54);
            *(b + 90 * OS1_S1 + 117) =
                prefactor_y * *(b + 90 * OS1_S1 + 82) -
                p_over_q * *(b + 130 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 82) +
                one_over_two_q * *(b + 90 * OS1_S1 + 55);
            *(b + 90 * OS1_S1 + 118) =
                prefactor_y * *(b + 90 * OS1_S1 + 83) -
                p_over_q * *(b + 130 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 83);
            *(b + 90 * OS1_S1 + 119) =
                prefactor_z * *(b + 90 * OS1_S1 + 83) -
                p_over_q * *(b + 131 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 90 * OS1_S1 + 55);
            *(b + 91 * OS1_S1 + 84) =
                prefactor_x * *(b + 91 * OS1_S1 + 56) -
                p_over_q * *(b + 127 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 91 * OS1_S1 + 35);
            *(b + 91 * OS1_S1 + 85) =
                prefactor_y * *(b + 91 * OS1_S1 + 56) -
                p_over_q * *(b + 131 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 56);
            *(b + 91 * OS1_S1 + 86) = prefactor_z * *(b + 91 * OS1_S1 + 56) -
                                      p_over_q * *(b + 132 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 56);
            *(b + 91 * OS1_S1 + 87) =
                prefactor_y * *(b + 91 * OS1_S1 + 57) -
                p_over_q * *(b + 131 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 57) +
                one_over_two_q * *(b + 91 * OS1_S1 + 35);
            *(b + 91 * OS1_S1 + 88) = prefactor_z * *(b + 91 * OS1_S1 + 57) -
                                      p_over_q * *(b + 132 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 57);
            *(b + 91 * OS1_S1 + 89) = prefactor_z * *(b + 91 * OS1_S1 + 58) -
                                      p_over_q * *(b + 132 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 91 * OS1_S1 + 35);
            *(b + 91 * OS1_S1 + 90) =
                prefactor_y * *(b + 91 * OS1_S1 + 59) -
                p_over_q * *(b + 131 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 36);
            *(b + 91 * OS1_S1 + 91) = prefactor_z * *(b + 91 * OS1_S1 + 59) -
                                      p_over_q * *(b + 132 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 59);
            *(b + 91 * OS1_S1 + 92) =
                prefactor_y * *(b + 91 * OS1_S1 + 61) -
                p_over_q * *(b + 131 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 61);
            *(b + 91 * OS1_S1 + 93) =
                prefactor_z * *(b + 91 * OS1_S1 + 61) -
                p_over_q * *(b + 132 * OS1_S1 + 61) +
                one_over_two_q * *(b + 59 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 37);
            *(b + 91 * OS1_S1 + 94) =
                prefactor_x * *(b + 91 * OS1_S1 + 66) -
                p_over_q * *(b + 127 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 45);
            *(b + 91 * OS1_S1 + 95) = prefactor_z * *(b + 91 * OS1_S1 + 62) -
                                      p_over_q * *(b + 132 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 62);
            *(b + 91 * OS1_S1 + 96) = prefactor_z * *(b + 91 * OS1_S1 + 63) -
                                      p_over_q * *(b + 132 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 59 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 91 * OS1_S1 + 38);
            *(b + 91 * OS1_S1 + 97) =
                prefactor_y * *(b + 91 * OS1_S1 + 65) -
                p_over_q * *(b + 131 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 65);
            *(b + 91 * OS1_S1 + 98) =
                prefactor_x * *(b + 91 * OS1_S1 + 70) -
                p_over_q * *(b + 127 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 49);
            *(b + 91 * OS1_S1 + 99) =
                prefactor_x * *(b + 91 * OS1_S1 + 71) -
                p_over_q * *(b + 127 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 71) +
                one_over_two_q * *(b + 91 * OS1_S1 + 50);
            *(b + 91 * OS1_S1 + 100) = prefactor_z * *(b + 91 * OS1_S1 + 66) -
                                       p_over_q * *(b + 132 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 66);
            *(b + 91 * OS1_S1 + 101) =
                prefactor_z * *(b + 91 * OS1_S1 + 67) -
                p_over_q * *(b + 132 * OS1_S1 + 67) +
                one_over_two_q * *(b + 59 * OS1_S1 + 67) +
                one_over_two_q * *(b + 91 * OS1_S1 + 41);
            *(b + 91 * OS1_S1 + 102) =
                prefactor_y * *(b + 91 * OS1_S1 + 69) -
                p_over_q * *(b + 131 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 69) +
                one_over_two_q * *(b + 91 * OS1_S1 + 44);
            *(b + 91 * OS1_S1 + 103) =
                prefactor_y * *(b + 91 * OS1_S1 + 70) -
                p_over_q * *(b + 131 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 70);
            *(b + 91 * OS1_S1 + 104) =
                prefactor_x * *(b + 91 * OS1_S1 + 76) -
                p_over_q * *(b + 127 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 76) +
                one_over_two_q * *(b + 91 * OS1_S1 + 55);
            *(b + 91 * OS1_S1 + 105) =
                prefactor_x * *(b + 91 * OS1_S1 + 77) -
                p_over_q * *(b + 127 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 77);
            *(b + 91 * OS1_S1 + 106) = prefactor_z * *(b + 91 * OS1_S1 + 71) -
                                       p_over_q * *(b + 132 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 71);
            *(b + 91 * OS1_S1 + 107) =
                prefactor_x * *(b + 91 * OS1_S1 + 79) -
                p_over_q * *(b + 127 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 79);
            *(b + 91 * OS1_S1 + 108) =
                prefactor_x * *(b + 91 * OS1_S1 + 80) -
                p_over_q * *(b + 127 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 80);
            *(b + 91 * OS1_S1 + 109) =
                prefactor_x * *(b + 91 * OS1_S1 + 81) -
                p_over_q * *(b + 127 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 81);
            *(b + 91 * OS1_S1 + 110) =
                prefactor_y * *(b + 91 * OS1_S1 + 76) -
                p_over_q * *(b + 131 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 76);
            *(b + 91 * OS1_S1 + 111) =
                prefactor_x * *(b + 91 * OS1_S1 + 83) -
                p_over_q * *(b + 127 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 83);
            *(b + 91 * OS1_S1 + 112) =
                prefactor_y * *(b + 91 * OS1_S1 + 77) -
                p_over_q * *(b + 131 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 91 * OS1_S1 + 50);
            *(b + 91 * OS1_S1 + 113) = prefactor_z * *(b + 91 * OS1_S1 + 77) -
                                       p_over_q * *(b + 132 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 77);
            *(b + 91 * OS1_S1 + 114) =
                prefactor_z * *(b + 91 * OS1_S1 + 78) -
                p_over_q * *(b + 132 * OS1_S1 + 78) +
                one_over_two_q * *(b + 59 * OS1_S1 + 78) +
                one_over_two_q * *(b + 91 * OS1_S1 + 50);
            *(b + 91 * OS1_S1 + 115) =
                prefactor_z * *(b + 91 * OS1_S1 + 79) -
                p_over_q * *(b + 132 * OS1_S1 + 79) +
                one_over_two_q * *(b + 59 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 51);
            *(b + 91 * OS1_S1 + 116) =
                prefactor_y * *(b + 91 * OS1_S1 + 81) -
                p_over_q * *(b + 131 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 54);
            *(b + 91 * OS1_S1 + 117) =
                prefactor_y * *(b + 91 * OS1_S1 + 82) -
                p_over_q * *(b + 131 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 82) +
                one_over_two_q * *(b + 91 * OS1_S1 + 55);
            *(b + 91 * OS1_S1 + 118) =
                prefactor_y * *(b + 91 * OS1_S1 + 83) -
                p_over_q * *(b + 131 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 83);
            *(b + 91 * OS1_S1 + 119) =
                prefactor_z * *(b + 91 * OS1_S1 + 83) -
                p_over_q * *(b + 132 * OS1_S1 + 83) +
                one_over_two_q * *(b + 59 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 91 * OS1_S1 + 55);
            *(b + 92 * OS1_S1 + 84) =
                prefactor_x * *(b + 92 * OS1_S1 + 56) -
                p_over_q * *(b + 128 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 92 * OS1_S1 + 35);
            *(b + 92 * OS1_S1 + 85) = prefactor_y * *(b + 92 * OS1_S1 + 56) -
                                      p_over_q * *(b + 132 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 56);
            *(b + 92 * OS1_S1 + 86) =
                prefactor_z * *(b + 92 * OS1_S1 + 56) -
                p_over_q * *(b + 133 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 56);
            *(b + 92 * OS1_S1 + 87) = prefactor_y * *(b + 92 * OS1_S1 + 57) -
                                      p_over_q * *(b + 132 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 92 * OS1_S1 + 35);
            *(b + 92 * OS1_S1 + 88) = prefactor_y * *(b + 92 * OS1_S1 + 58) -
                                      p_over_q * *(b + 132 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 58);
            *(b + 92 * OS1_S1 + 89) =
                prefactor_z * *(b + 92 * OS1_S1 + 58) -
                p_over_q * *(b + 133 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 58) +
                one_over_two_q * *(b + 92 * OS1_S1 + 35);
            *(b + 92 * OS1_S1 + 90) =
                prefactor_y * *(b + 92 * OS1_S1 + 59) -
                p_over_q * *(b + 132 * OS1_S1 + 59) +
                one_over_two_q * *(b + 61 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 36);
            *(b + 92 * OS1_S1 + 91) =
                prefactor_z * *(b + 92 * OS1_S1 + 59) -
                p_over_q * *(b + 133 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 59);
            *(b + 92 * OS1_S1 + 92) = prefactor_y * *(b + 92 * OS1_S1 + 61) -
                                      p_over_q * *(b + 132 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 61);
            *(b + 92 * OS1_S1 + 93) =
                prefactor_z * *(b + 92 * OS1_S1 + 61) -
                p_over_q * *(b + 133 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 37);
            *(b + 92 * OS1_S1 + 94) =
                prefactor_x * *(b + 92 * OS1_S1 + 66) -
                p_over_q * *(b + 128 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 45);
            *(b + 92 * OS1_S1 + 95) =
                prefactor_z * *(b + 92 * OS1_S1 + 62) -
                p_over_q * *(b + 133 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 62);
            *(b + 92 * OS1_S1 + 96) = prefactor_y * *(b + 92 * OS1_S1 + 64) -
                                      p_over_q * *(b + 132 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 92 * OS1_S1 + 40);
            *(b + 92 * OS1_S1 + 97) = prefactor_y * *(b + 92 * OS1_S1 + 65) -
                                      p_over_q * *(b + 132 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 61 * OS1_S1 + 65);
            *(b + 92 * OS1_S1 + 98) =
                prefactor_x * *(b + 92 * OS1_S1 + 70) -
                p_over_q * *(b + 128 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 49);
            *(b + 92 * OS1_S1 + 99) =
                prefactor_x * *(b + 92 * OS1_S1 + 71) -
                p_over_q * *(b + 128 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 71) +
                one_over_two_q * *(b + 92 * OS1_S1 + 50);
            *(b + 92 * OS1_S1 + 100) =
                prefactor_z * *(b + 92 * OS1_S1 + 66) -
                p_over_q * *(b + 133 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 66);
            *(b + 92 * OS1_S1 + 101) =
                prefactor_z * *(b + 92 * OS1_S1 + 67) -
                p_over_q * *(b + 133 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 67) +
                one_over_two_q * *(b + 92 * OS1_S1 + 41);
            *(b + 92 * OS1_S1 + 102) =
                prefactor_y * *(b + 92 * OS1_S1 + 69) -
                p_over_q * *(b + 132 * OS1_S1 + 69) +
                one_over_two_q * *(b + 61 * OS1_S1 + 69) +
                one_over_two_q * *(b + 92 * OS1_S1 + 44);
            *(b + 92 * OS1_S1 + 103) = prefactor_y * *(b + 92 * OS1_S1 + 70) -
                                       p_over_q * *(b + 132 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 70);
            *(b + 92 * OS1_S1 + 104) =
                prefactor_x * *(b + 92 * OS1_S1 + 76) -
                p_over_q * *(b + 128 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 76) +
                one_over_two_q * *(b + 92 * OS1_S1 + 55);
            *(b + 92 * OS1_S1 + 105) =
                prefactor_x * *(b + 92 * OS1_S1 + 77) -
                p_over_q * *(b + 128 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 77);
            *(b + 92 * OS1_S1 + 106) =
                prefactor_z * *(b + 92 * OS1_S1 + 71) -
                p_over_q * *(b + 133 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 71);
            *(b + 92 * OS1_S1 + 107) =
                prefactor_x * *(b + 92 * OS1_S1 + 79) -
                p_over_q * *(b + 128 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 79);
            *(b + 92 * OS1_S1 + 108) =
                prefactor_x * *(b + 92 * OS1_S1 + 80) -
                p_over_q * *(b + 128 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 80);
            *(b + 92 * OS1_S1 + 109) =
                prefactor_x * *(b + 92 * OS1_S1 + 81) -
                p_over_q * *(b + 128 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 81);
            *(b + 92 * OS1_S1 + 110) = prefactor_y * *(b + 92 * OS1_S1 + 76) -
                                       p_over_q * *(b + 132 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 76);
            *(b + 92 * OS1_S1 + 111) =
                prefactor_x * *(b + 92 * OS1_S1 + 83) -
                p_over_q * *(b + 128 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 83);
            *(b + 92 * OS1_S1 + 112) =
                prefactor_y * *(b + 92 * OS1_S1 + 77) -
                p_over_q * *(b + 132 * OS1_S1 + 77) +
                one_over_two_q * *(b + 61 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 92 * OS1_S1 + 50);
            *(b + 92 * OS1_S1 + 113) =
                prefactor_z * *(b + 92 * OS1_S1 + 77) -
                p_over_q * *(b + 133 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 77);
            *(b + 92 * OS1_S1 + 114) =
                prefactor_z * *(b + 92 * OS1_S1 + 78) -
                p_over_q * *(b + 133 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 78) +
                one_over_two_q * *(b + 92 * OS1_S1 + 50);
            *(b + 92 * OS1_S1 + 115) =
                prefactor_z * *(b + 92 * OS1_S1 + 79) -
                p_over_q * *(b + 133 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 51);
            *(b + 92 * OS1_S1 + 116) =
                prefactor_y * *(b + 92 * OS1_S1 + 81) -
                p_over_q * *(b + 132 * OS1_S1 + 81) +
                one_over_two_q * *(b + 61 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 54);
            *(b + 92 * OS1_S1 + 117) =
                prefactor_y * *(b + 92 * OS1_S1 + 82) -
                p_over_q * *(b + 132 * OS1_S1 + 82) +
                one_over_two_q * *(b + 61 * OS1_S1 + 82) +
                one_over_two_q * *(b + 92 * OS1_S1 + 55);
            *(b + 92 * OS1_S1 + 118) = prefactor_y * *(b + 92 * OS1_S1 + 83) -
                                       p_over_q * *(b + 132 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 83);
            *(b + 92 * OS1_S1 + 119) =
                prefactor_z * *(b + 92 * OS1_S1 + 83) -
                p_over_q * *(b + 133 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 92 * OS1_S1 + 55);
            *(b + 93 * OS1_S1 + 84) =
                prefactor_x * *(b + 93 * OS1_S1 + 56) -
                p_over_q * *(b + 129 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 93 * OS1_S1 + 35);
            *(b + 93 * OS1_S1 + 85) = prefactor_y * *(b + 93 * OS1_S1 + 56) -
                                      p_over_q * *(b + 133 * OS1_S1 + 56);
            *(b + 93 * OS1_S1 + 86) =
                prefactor_z * *(b + 93 * OS1_S1 + 56) -
                p_over_q * *(b + 134 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 56);
            *(b + 93 * OS1_S1 + 87) = prefactor_y * *(b + 93 * OS1_S1 + 57) -
                                      p_over_q * *(b + 133 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 93 * OS1_S1 + 35);
            *(b + 93 * OS1_S1 + 88) = prefactor_y * *(b + 93 * OS1_S1 + 58) -
                                      p_over_q * *(b + 133 * OS1_S1 + 58);
            *(b + 93 * OS1_S1 + 89) =
                prefactor_z * *(b + 93 * OS1_S1 + 58) -
                p_over_q * *(b + 134 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 58) +
                one_over_two_q * *(b + 93 * OS1_S1 + 35);
            *(b + 93 * OS1_S1 + 90) =
                prefactor_y * *(b + 93 * OS1_S1 + 59) -
                p_over_q * *(b + 133 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 36);
            *(b + 93 * OS1_S1 + 91) =
                prefactor_z * *(b + 93 * OS1_S1 + 59) -
                p_over_q * *(b + 134 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 59);
            *(b + 93 * OS1_S1 + 92) = prefactor_y * *(b + 93 * OS1_S1 + 61) -
                                      p_over_q * *(b + 133 * OS1_S1 + 61);
            *(b + 93 * OS1_S1 + 93) =
                prefactor_z * *(b + 93 * OS1_S1 + 61) -
                p_over_q * *(b + 134 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 37);
            *(b + 93 * OS1_S1 + 94) =
                prefactor_x * *(b + 93 * OS1_S1 + 66) -
                p_over_q * *(b + 129 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 45);
            *(b + 93 * OS1_S1 + 95) =
                prefactor_z * *(b + 93 * OS1_S1 + 62) -
                p_over_q * *(b + 134 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 62);
            *(b + 93 * OS1_S1 + 96) = prefactor_y * *(b + 93 * OS1_S1 + 64) -
                                      p_over_q * *(b + 133 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 93 * OS1_S1 + 40);
            *(b + 93 * OS1_S1 + 97) = prefactor_y * *(b + 93 * OS1_S1 + 65) -
                                      p_over_q * *(b + 133 * OS1_S1 + 65);
            *(b + 93 * OS1_S1 + 98) =
                prefactor_x * *(b + 93 * OS1_S1 + 70) -
                p_over_q * *(b + 129 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 49);
            *(b + 93 * OS1_S1 + 99) =
                prefactor_x * *(b + 93 * OS1_S1 + 71) -
                p_over_q * *(b + 129 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 71) +
                one_over_two_q * *(b + 93 * OS1_S1 + 50);
            *(b + 93 * OS1_S1 + 100) =
                prefactor_z * *(b + 93 * OS1_S1 + 66) -
                p_over_q * *(b + 134 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 66);
            *(b + 93 * OS1_S1 + 101) =
                prefactor_z * *(b + 93 * OS1_S1 + 67) -
                p_over_q * *(b + 134 * OS1_S1 + 67) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 67) +
                one_over_two_q * *(b + 93 * OS1_S1 + 41);
            *(b + 93 * OS1_S1 + 102) = prefactor_y * *(b + 93 * OS1_S1 + 69) -
                                       p_over_q * *(b + 133 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 44);
            *(b + 93 * OS1_S1 + 103) = prefactor_y * *(b + 93 * OS1_S1 + 70) -
                                       p_over_q * *(b + 133 * OS1_S1 + 70);
            *(b + 93 * OS1_S1 + 104) =
                prefactor_x * *(b + 93 * OS1_S1 + 76) -
                p_over_q * *(b + 129 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 76) +
                one_over_two_q * *(b + 93 * OS1_S1 + 55);
            *(b + 93 * OS1_S1 + 105) =
                prefactor_x * *(b + 93 * OS1_S1 + 77) -
                p_over_q * *(b + 129 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 77);
            *(b + 93 * OS1_S1 + 106) =
                prefactor_z * *(b + 93 * OS1_S1 + 71) -
                p_over_q * *(b + 134 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 71);
            *(b + 93 * OS1_S1 + 107) =
                prefactor_x * *(b + 93 * OS1_S1 + 79) -
                p_over_q * *(b + 129 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 79);
            *(b + 93 * OS1_S1 + 108) =
                prefactor_x * *(b + 93 * OS1_S1 + 80) -
                p_over_q * *(b + 129 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 80);
            *(b + 93 * OS1_S1 + 109) =
                prefactor_x * *(b + 93 * OS1_S1 + 81) -
                p_over_q * *(b + 129 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 81);
            *(b + 93 * OS1_S1 + 110) = prefactor_y * *(b + 93 * OS1_S1 + 76) -
                                       p_over_q * *(b + 133 * OS1_S1 + 76);
            *(b + 93 * OS1_S1 + 111) =
                prefactor_x * *(b + 93 * OS1_S1 + 83) -
                p_over_q * *(b + 129 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 83);
            *(b + 93 * OS1_S1 + 112) =
                prefactor_y * *(b + 93 * OS1_S1 + 77) -
                p_over_q * *(b + 133 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 93 * OS1_S1 + 50);
            *(b + 93 * OS1_S1 + 113) =
                prefactor_z * *(b + 93 * OS1_S1 + 77) -
                p_over_q * *(b + 134 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 77);
            *(b + 93 * OS1_S1 + 114) =
                prefactor_z * *(b + 93 * OS1_S1 + 78) -
                p_over_q * *(b + 134 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 78) +
                one_over_two_q * *(b + 93 * OS1_S1 + 50);
            *(b + 93 * OS1_S1 + 115) =
                prefactor_z * *(b + 93 * OS1_S1 + 79) -
                p_over_q * *(b + 134 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 51);
            *(b + 93 * OS1_S1 + 116) =
                prefactor_y * *(b + 93 * OS1_S1 + 81) -
                p_over_q * *(b + 133 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 54);
            *(b + 93 * OS1_S1 + 117) = prefactor_y * *(b + 93 * OS1_S1 + 82) -
                                       p_over_q * *(b + 133 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 55);
            *(b + 93 * OS1_S1 + 118) = prefactor_y * *(b + 93 * OS1_S1 + 83) -
                                       p_over_q * *(b + 133 * OS1_S1 + 83);
            *(b + 93 * OS1_S1 + 119) =
                prefactor_z * *(b + 93 * OS1_S1 + 83) -
                p_over_q * *(b + 134 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 93 * OS1_S1 + 55);
            *(b + 94 * OS1_S1 + 84) =
                prefactor_x * *(b + 94 * OS1_S1 + 56) -
                p_over_q * *(b + 130 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 94 * OS1_S1 + 35);
            *(b + 94 * OS1_S1 + 85) =
                prefactor_y * *(b + 94 * OS1_S1 + 56) -
                p_over_q * *(b + 135 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 56);
            *(b + 94 * OS1_S1 + 86) = prefactor_z * *(b + 94 * OS1_S1 + 56) -
                                      p_over_q * *(b + 136 * OS1_S1 + 56);
            *(b + 94 * OS1_S1 + 87) =
                prefactor_y * *(b + 94 * OS1_S1 + 57) -
                p_over_q * *(b + 135 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 57) +
                one_over_two_q * *(b + 94 * OS1_S1 + 35);
            *(b + 94 * OS1_S1 + 88) = prefactor_z * *(b + 94 * OS1_S1 + 57) -
                                      p_over_q * *(b + 136 * OS1_S1 + 57);
            *(b + 94 * OS1_S1 + 89) = prefactor_z * *(b + 94 * OS1_S1 + 58) -
                                      p_over_q * *(b + 136 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 94 * OS1_S1 + 35);
            *(b + 94 * OS1_S1 + 90) =
                prefactor_y * *(b + 94 * OS1_S1 + 59) -
                p_over_q * *(b + 135 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 36);
            *(b + 94 * OS1_S1 + 91) = prefactor_z * *(b + 94 * OS1_S1 + 59) -
                                      p_over_q * *(b + 136 * OS1_S1 + 59);
            *(b + 94 * OS1_S1 + 92) =
                prefactor_y * *(b + 94 * OS1_S1 + 61) -
                p_over_q * *(b + 135 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 61);
            *(b + 94 * OS1_S1 + 93) =
                prefactor_z * *(b + 94 * OS1_S1 + 61) -
                p_over_q * *(b + 136 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 37);
            *(b + 94 * OS1_S1 + 94) =
                prefactor_x * *(b + 94 * OS1_S1 + 66) -
                p_over_q * *(b + 130 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 45);
            *(b + 94 * OS1_S1 + 95) = prefactor_z * *(b + 94 * OS1_S1 + 62) -
                                      p_over_q * *(b + 136 * OS1_S1 + 62);
            *(b + 94 * OS1_S1 + 96) = prefactor_z * *(b + 94 * OS1_S1 + 63) -
                                      p_over_q * *(b + 136 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 94 * OS1_S1 + 38);
            *(b + 94 * OS1_S1 + 97) =
                prefactor_y * *(b + 94 * OS1_S1 + 65) -
                p_over_q * *(b + 135 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 65);
            *(b + 94 * OS1_S1 + 98) =
                prefactor_x * *(b + 94 * OS1_S1 + 70) -
                p_over_q * *(b + 130 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 49);
            *(b + 94 * OS1_S1 + 99) =
                prefactor_x * *(b + 94 * OS1_S1 + 71) -
                p_over_q * *(b + 130 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 71) +
                one_over_two_q * *(b + 94 * OS1_S1 + 50);
            *(b + 94 * OS1_S1 + 100) = prefactor_z * *(b + 94 * OS1_S1 + 66) -
                                       p_over_q * *(b + 136 * OS1_S1 + 66);
            *(b + 94 * OS1_S1 + 101) = prefactor_z * *(b + 94 * OS1_S1 + 67) -
                                       p_over_q * *(b + 136 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 41);
            *(b + 94 * OS1_S1 + 102) =
                prefactor_x * *(b + 94 * OS1_S1 + 74) -
                p_over_q * *(b + 130 * OS1_S1 + 74) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 74) +
                one_over_two_q * *(b + 94 * OS1_S1 + 53);
            *(b + 94 * OS1_S1 + 103) =
                prefactor_y * *(b + 94 * OS1_S1 + 70) -
                p_over_q * *(b + 135 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 70);
            *(b + 94 * OS1_S1 + 104) =
                prefactor_x * *(b + 94 * OS1_S1 + 76) -
                p_over_q * *(b + 130 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 76) +
                one_over_two_q * *(b + 94 * OS1_S1 + 55);
            *(b + 94 * OS1_S1 + 105) =
                prefactor_x * *(b + 94 * OS1_S1 + 77) -
                p_over_q * *(b + 130 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 77);
            *(b + 94 * OS1_S1 + 106) = prefactor_z * *(b + 94 * OS1_S1 + 71) -
                                       p_over_q * *(b + 136 * OS1_S1 + 71);
            *(b + 94 * OS1_S1 + 107) =
                prefactor_x * *(b + 94 * OS1_S1 + 79) -
                p_over_q * *(b + 130 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 79);
            *(b + 94 * OS1_S1 + 108) =
                prefactor_x * *(b + 94 * OS1_S1 + 80) -
                p_over_q * *(b + 130 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 80);
            *(b + 94 * OS1_S1 + 109) =
                prefactor_x * *(b + 94 * OS1_S1 + 81) -
                p_over_q * *(b + 130 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 81);
            *(b + 94 * OS1_S1 + 110) =
                prefactor_x * *(b + 94 * OS1_S1 + 82) -
                p_over_q * *(b + 130 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 82);
            *(b + 94 * OS1_S1 + 111) =
                prefactor_x * *(b + 94 * OS1_S1 + 83) -
                p_over_q * *(b + 130 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 83);
            *(b + 94 * OS1_S1 + 112) =
                prefactor_y * *(b + 94 * OS1_S1 + 77) -
                p_over_q * *(b + 135 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 94 * OS1_S1 + 50);
            *(b + 94 * OS1_S1 + 113) = prefactor_z * *(b + 94 * OS1_S1 + 77) -
                                       p_over_q * *(b + 136 * OS1_S1 + 77);
            *(b + 94 * OS1_S1 + 114) = prefactor_z * *(b + 94 * OS1_S1 + 78) -
                                       p_over_q * *(b + 136 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 50);
            *(b + 94 * OS1_S1 + 115) =
                prefactor_z * *(b + 94 * OS1_S1 + 79) -
                p_over_q * *(b + 136 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 51);
            *(b + 94 * OS1_S1 + 116) =
                prefactor_y * *(b + 94 * OS1_S1 + 81) -
                p_over_q * *(b + 135 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 54);
            *(b + 94 * OS1_S1 + 117) =
                prefactor_y * *(b + 94 * OS1_S1 + 82) -
                p_over_q * *(b + 135 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 82) +
                one_over_two_q * *(b + 94 * OS1_S1 + 55);
            *(b + 94 * OS1_S1 + 118) =
                prefactor_y * *(b + 94 * OS1_S1 + 83) -
                p_over_q * *(b + 135 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 83);
            *(b + 94 * OS1_S1 + 119) =
                prefactor_z * *(b + 94 * OS1_S1 + 83) -
                p_over_q * *(b + 136 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 94 * OS1_S1 + 55);
            *(b + 95 * OS1_S1 + 84) =
                prefactor_x * *(b + 95 * OS1_S1 + 56) -
                p_over_q * *(b + 131 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 95 * OS1_S1 + 35);
            *(b + 95 * OS1_S1 + 85) =
                prefactor_y * *(b + 95 * OS1_S1 + 56) -
                p_over_q * *(b + 136 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 56);
            *(b + 95 * OS1_S1 + 86) = prefactor_z * *(b + 95 * OS1_S1 + 56) -
                                      p_over_q * *(b + 137 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 56);
            *(b + 95 * OS1_S1 + 87) =
                prefactor_y * *(b + 95 * OS1_S1 + 57) -
                p_over_q * *(b + 136 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 57) +
                one_over_two_q * *(b + 95 * OS1_S1 + 35);
            *(b + 95 * OS1_S1 + 88) = prefactor_z * *(b + 95 * OS1_S1 + 57) -
                                      p_over_q * *(b + 137 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 57);
            *(b + 95 * OS1_S1 + 89) = prefactor_z * *(b + 95 * OS1_S1 + 58) -
                                      p_over_q * *(b + 137 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 95 * OS1_S1 + 35);
            *(b + 95 * OS1_S1 + 90) =
                prefactor_y * *(b + 95 * OS1_S1 + 59) -
                p_over_q * *(b + 136 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 36);
            *(b + 95 * OS1_S1 + 91) = prefactor_z * *(b + 95 * OS1_S1 + 59) -
                                      p_over_q * *(b + 137 * OS1_S1 + 59) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 59);
            *(b + 95 * OS1_S1 + 92) =
                prefactor_y * *(b + 95 * OS1_S1 + 61) -
                p_over_q * *(b + 136 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 61);
            *(b + 95 * OS1_S1 + 93) =
                prefactor_z * *(b + 95 * OS1_S1 + 61) -
                p_over_q * *(b + 137 * OS1_S1 + 61) +
                one_over_two_q * *(b + 62 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 37);
            *(b + 95 * OS1_S1 + 94) =
                prefactor_x * *(b + 95 * OS1_S1 + 66) -
                p_over_q * *(b + 131 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 45);
            *(b + 95 * OS1_S1 + 95) = prefactor_z * *(b + 95 * OS1_S1 + 62) -
                                      p_over_q * *(b + 137 * OS1_S1 + 62) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 62);
            *(b + 95 * OS1_S1 + 96) = prefactor_z * *(b + 95 * OS1_S1 + 63) -
                                      p_over_q * *(b + 137 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 62 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 95 * OS1_S1 + 38);
            *(b + 95 * OS1_S1 + 97) =
                prefactor_y * *(b + 95 * OS1_S1 + 65) -
                p_over_q * *(b + 136 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 65);
            *(b + 95 * OS1_S1 + 98) =
                prefactor_x * *(b + 95 * OS1_S1 + 70) -
                p_over_q * *(b + 131 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 49);
            *(b + 95 * OS1_S1 + 99) =
                prefactor_x * *(b + 95 * OS1_S1 + 71) -
                p_over_q * *(b + 131 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 71) +
                one_over_two_q * *(b + 95 * OS1_S1 + 50);
            *(b + 95 * OS1_S1 + 100) = prefactor_z * *(b + 95 * OS1_S1 + 66) -
                                       p_over_q * *(b + 137 * OS1_S1 + 66) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 66);
            *(b + 95 * OS1_S1 + 101) =
                prefactor_z * *(b + 95 * OS1_S1 + 67) -
                p_over_q * *(b + 137 * OS1_S1 + 67) +
                one_over_two_q * *(b + 62 * OS1_S1 + 67) +
                one_over_two_q * *(b + 95 * OS1_S1 + 41);
            *(b + 95 * OS1_S1 + 102) =
                prefactor_y * *(b + 95 * OS1_S1 + 69) -
                p_over_q * *(b + 136 * OS1_S1 + 69) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 69) +
                one_over_two_q * *(b + 95 * OS1_S1 + 44);
            *(b + 95 * OS1_S1 + 103) =
                prefactor_y * *(b + 95 * OS1_S1 + 70) -
                p_over_q * *(b + 136 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 70);
            *(b + 95 * OS1_S1 + 104) =
                prefactor_x * *(b + 95 * OS1_S1 + 76) -
                p_over_q * *(b + 131 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 76) +
                one_over_two_q * *(b + 95 * OS1_S1 + 55);
            *(b + 95 * OS1_S1 + 105) =
                prefactor_x * *(b + 95 * OS1_S1 + 77) -
                p_over_q * *(b + 131 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 77);
            *(b + 95 * OS1_S1 + 106) = prefactor_z * *(b + 95 * OS1_S1 + 71) -
                                       p_over_q * *(b + 137 * OS1_S1 + 71) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 71);
            *(b + 95 * OS1_S1 + 107) =
                prefactor_x * *(b + 95 * OS1_S1 + 79) -
                p_over_q * *(b + 131 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 79);
            *(b + 95 * OS1_S1 + 108) =
                prefactor_x * *(b + 95 * OS1_S1 + 80) -
                p_over_q * *(b + 131 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 80);
            *(b + 95 * OS1_S1 + 109) =
                prefactor_x * *(b + 95 * OS1_S1 + 81) -
                p_over_q * *(b + 131 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 81);
            *(b + 95 * OS1_S1 + 110) =
                prefactor_y * *(b + 95 * OS1_S1 + 76) -
                p_over_q * *(b + 136 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 76);
            *(b + 95 * OS1_S1 + 111) =
                prefactor_x * *(b + 95 * OS1_S1 + 83) -
                p_over_q * *(b + 131 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 83);
            *(b + 95 * OS1_S1 + 112) =
                prefactor_y * *(b + 95 * OS1_S1 + 77) -
                p_over_q * *(b + 136 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 95 * OS1_S1 + 50);
            *(b + 95 * OS1_S1 + 113) = prefactor_z * *(b + 95 * OS1_S1 + 77) -
                                       p_over_q * *(b + 137 * OS1_S1 + 77) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 77);
            *(b + 95 * OS1_S1 + 114) =
                prefactor_z * *(b + 95 * OS1_S1 + 78) -
                p_over_q * *(b + 137 * OS1_S1 + 78) +
                one_over_two_q * *(b + 62 * OS1_S1 + 78) +
                one_over_two_q * *(b + 95 * OS1_S1 + 50);
            *(b + 95 * OS1_S1 + 115) =
                prefactor_z * *(b + 95 * OS1_S1 + 79) -
                p_over_q * *(b + 137 * OS1_S1 + 79) +
                one_over_two_q * *(b + 62 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 51);
            *(b + 95 * OS1_S1 + 116) =
                prefactor_y * *(b + 95 * OS1_S1 + 81) -
                p_over_q * *(b + 136 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 54);
            *(b + 95 * OS1_S1 + 117) =
                prefactor_y * *(b + 95 * OS1_S1 + 82) -
                p_over_q * *(b + 136 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 82) +
                one_over_two_q * *(b + 95 * OS1_S1 + 55);
            *(b + 95 * OS1_S1 + 118) =
                prefactor_y * *(b + 95 * OS1_S1 + 83) -
                p_over_q * *(b + 136 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 83);
            *(b + 95 * OS1_S1 + 119) =
                prefactor_z * *(b + 95 * OS1_S1 + 83) -
                p_over_q * *(b + 137 * OS1_S1 + 83) +
                one_over_two_q * *(b + 62 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 95 * OS1_S1 + 55);
            *(b + 96 * OS1_S1 + 84) =
                prefactor_x * *(b + 96 * OS1_S1 + 56) -
                p_over_q * *(b + 132 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 96 * OS1_S1 + 35);
            *(b + 96 * OS1_S1 + 85) =
                prefactor_y * *(b + 96 * OS1_S1 + 56) -
                p_over_q * *(b + 137 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 56);
            *(b + 96 * OS1_S1 + 86) =
                prefactor_z * *(b + 96 * OS1_S1 + 56) -
                p_over_q * *(b + 138 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 56);
            *(b + 96 * OS1_S1 + 87) =
                prefactor_y * *(b + 96 * OS1_S1 + 57) -
                p_over_q * *(b + 137 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 57) +
                one_over_two_q * *(b + 96 * OS1_S1 + 35);
            *(b + 96 * OS1_S1 + 88) =
                prefactor_z * *(b + 96 * OS1_S1 + 57) -
                p_over_q * *(b + 138 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 57);
            *(b + 96 * OS1_S1 + 89) =
                prefactor_z * *(b + 96 * OS1_S1 + 58) -
                p_over_q * *(b + 138 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 58) +
                one_over_two_q * *(b + 96 * OS1_S1 + 35);
            *(b + 96 * OS1_S1 + 90) =
                prefactor_y * *(b + 96 * OS1_S1 + 59) -
                p_over_q * *(b + 137 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 36);
            *(b + 96 * OS1_S1 + 91) =
                prefactor_z * *(b + 96 * OS1_S1 + 59) -
                p_over_q * *(b + 138 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 59);
            *(b + 96 * OS1_S1 + 92) =
                prefactor_y * *(b + 96 * OS1_S1 + 61) -
                p_over_q * *(b + 137 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 61);
            *(b + 96 * OS1_S1 + 93) =
                prefactor_z * *(b + 96 * OS1_S1 + 61) -
                p_over_q * *(b + 138 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 37);
            *(b + 96 * OS1_S1 + 94) =
                prefactor_x * *(b + 96 * OS1_S1 + 66) -
                p_over_q * *(b + 132 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 45);
            *(b + 96 * OS1_S1 + 95) =
                prefactor_z * *(b + 96 * OS1_S1 + 62) -
                p_over_q * *(b + 138 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 62);
            *(b + 96 * OS1_S1 + 96) =
                prefactor_z * *(b + 96 * OS1_S1 + 63) -
                p_over_q * *(b + 138 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 63) +
                one_over_two_q * *(b + 96 * OS1_S1 + 38);
            *(b + 96 * OS1_S1 + 97) =
                prefactor_y * *(b + 96 * OS1_S1 + 65) -
                p_over_q * *(b + 137 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 65);
            *(b + 96 * OS1_S1 + 98) =
                prefactor_x * *(b + 96 * OS1_S1 + 70) -
                p_over_q * *(b + 132 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 49);
            *(b + 96 * OS1_S1 + 99) =
                prefactor_x * *(b + 96 * OS1_S1 + 71) -
                p_over_q * *(b + 132 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 71) +
                one_over_two_q * *(b + 96 * OS1_S1 + 50);
            *(b + 96 * OS1_S1 + 100) =
                prefactor_z * *(b + 96 * OS1_S1 + 66) -
                p_over_q * *(b + 138 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 66);
            *(b + 96 * OS1_S1 + 101) =
                prefactor_z * *(b + 96 * OS1_S1 + 67) -
                p_over_q * *(b + 138 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 67) +
                one_over_two_q * *(b + 96 * OS1_S1 + 41);
            *(b + 96 * OS1_S1 + 102) =
                prefactor_y * *(b + 96 * OS1_S1 + 69) -
                p_over_q * *(b + 137 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 69) +
                one_over_two_q * *(b + 96 * OS1_S1 + 44);
            *(b + 96 * OS1_S1 + 103) =
                prefactor_y * *(b + 96 * OS1_S1 + 70) -
                p_over_q * *(b + 137 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 70);
            *(b + 96 * OS1_S1 + 104) =
                prefactor_x * *(b + 96 * OS1_S1 + 76) -
                p_over_q * *(b + 132 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 76) +
                one_over_two_q * *(b + 96 * OS1_S1 + 55);
            *(b + 96 * OS1_S1 + 105) =
                prefactor_x * *(b + 96 * OS1_S1 + 77) -
                p_over_q * *(b + 132 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 77);
            *(b + 96 * OS1_S1 + 106) =
                prefactor_z * *(b + 96 * OS1_S1 + 71) -
                p_over_q * *(b + 138 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 71);
            *(b + 96 * OS1_S1 + 107) =
                prefactor_x * *(b + 96 * OS1_S1 + 79) -
                p_over_q * *(b + 132 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 79);
            *(b + 96 * OS1_S1 + 108) =
                prefactor_x * *(b + 96 * OS1_S1 + 80) -
                p_over_q * *(b + 132 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 80);
            *(b + 96 * OS1_S1 + 109) =
                prefactor_x * *(b + 96 * OS1_S1 + 81) -
                p_over_q * *(b + 132 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 81);
            *(b + 96 * OS1_S1 + 110) =
                prefactor_y * *(b + 96 * OS1_S1 + 76) -
                p_over_q * *(b + 137 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 76);
            *(b + 96 * OS1_S1 + 111) =
                prefactor_x * *(b + 96 * OS1_S1 + 83) -
                p_over_q * *(b + 132 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 83);
            *(b + 96 * OS1_S1 + 112) =
                prefactor_y * *(b + 96 * OS1_S1 + 77) -
                p_over_q * *(b + 137 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 96 * OS1_S1 + 50);
            *(b + 96 * OS1_S1 + 113) =
                prefactor_z * *(b + 96 * OS1_S1 + 77) -
                p_over_q * *(b + 138 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 77);
            *(b + 96 * OS1_S1 + 114) =
                prefactor_z * *(b + 96 * OS1_S1 + 78) -
                p_over_q * *(b + 138 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 78) +
                one_over_two_q * *(b + 96 * OS1_S1 + 50);
            *(b + 96 * OS1_S1 + 115) =
                prefactor_z * *(b + 96 * OS1_S1 + 79) -
                p_over_q * *(b + 138 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 51);
            *(b + 96 * OS1_S1 + 116) =
                prefactor_y * *(b + 96 * OS1_S1 + 81) -
                p_over_q * *(b + 137 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 54);
            *(b + 96 * OS1_S1 + 117) =
                prefactor_y * *(b + 96 * OS1_S1 + 82) -
                p_over_q * *(b + 137 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 82) +
                one_over_two_q * *(b + 96 * OS1_S1 + 55);
            *(b + 96 * OS1_S1 + 118) =
                prefactor_y * *(b + 96 * OS1_S1 + 83) -
                p_over_q * *(b + 137 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 83);
            *(b + 96 * OS1_S1 + 119) =
                prefactor_z * *(b + 96 * OS1_S1 + 83) -
                p_over_q * *(b + 138 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 96 * OS1_S1 + 55);
            *(b + 97 * OS1_S1 + 84) =
                prefactor_x * *(b + 97 * OS1_S1 + 56) -
                p_over_q * *(b + 133 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 97 * OS1_S1 + 35);
            *(b + 97 * OS1_S1 + 85) = prefactor_y * *(b + 97 * OS1_S1 + 56) -
                                      p_over_q * *(b + 138 * OS1_S1 + 56) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 56);
            *(b + 97 * OS1_S1 + 86) =
                prefactor_z * *(b + 97 * OS1_S1 + 56) -
                p_over_q * *(b + 139 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 56);
            *(b + 97 * OS1_S1 + 87) = prefactor_y * *(b + 97 * OS1_S1 + 57) -
                                      p_over_q * *(b + 138 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 97 * OS1_S1 + 35);
            *(b + 97 * OS1_S1 + 88) = prefactor_y * *(b + 97 * OS1_S1 + 58) -
                                      p_over_q * *(b + 138 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 58);
            *(b + 97 * OS1_S1 + 89) =
                prefactor_z * *(b + 97 * OS1_S1 + 58) -
                p_over_q * *(b + 139 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 58) +
                one_over_two_q * *(b + 97 * OS1_S1 + 35);
            *(b + 97 * OS1_S1 + 90) =
                prefactor_y * *(b + 97 * OS1_S1 + 59) -
                p_over_q * *(b + 138 * OS1_S1 + 59) +
                one_over_two_q * *(b + 65 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 36);
            *(b + 97 * OS1_S1 + 91) =
                prefactor_z * *(b + 97 * OS1_S1 + 59) -
                p_over_q * *(b + 139 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 59);
            *(b + 97 * OS1_S1 + 92) = prefactor_y * *(b + 97 * OS1_S1 + 61) -
                                      p_over_q * *(b + 138 * OS1_S1 + 61) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 61);
            *(b + 97 * OS1_S1 + 93) =
                prefactor_z * *(b + 97 * OS1_S1 + 61) -
                p_over_q * *(b + 139 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 37);
            *(b + 97 * OS1_S1 + 94) =
                prefactor_x * *(b + 97 * OS1_S1 + 66) -
                p_over_q * *(b + 133 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 45);
            *(b + 97 * OS1_S1 + 95) =
                prefactor_z * *(b + 97 * OS1_S1 + 62) -
                p_over_q * *(b + 139 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 62);
            *(b + 97 * OS1_S1 + 96) = prefactor_y * *(b + 97 * OS1_S1 + 64) -
                                      p_over_q * *(b + 138 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 97 * OS1_S1 + 40);
            *(b + 97 * OS1_S1 + 97) = prefactor_y * *(b + 97 * OS1_S1 + 65) -
                                      p_over_q * *(b + 138 * OS1_S1 + 65) +
                                      one_over_two_q * *(b + 65 * OS1_S1 + 65);
            *(b + 97 * OS1_S1 + 98) =
                prefactor_x * *(b + 97 * OS1_S1 + 70) -
                p_over_q * *(b + 133 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 49);
            *(b + 97 * OS1_S1 + 99) =
                prefactor_x * *(b + 97 * OS1_S1 + 71) -
                p_over_q * *(b + 133 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 71) +
                one_over_two_q * *(b + 97 * OS1_S1 + 50);
            *(b + 97 * OS1_S1 + 100) =
                prefactor_z * *(b + 97 * OS1_S1 + 66) -
                p_over_q * *(b + 139 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 66);
            *(b + 97 * OS1_S1 + 101) =
                prefactor_z * *(b + 97 * OS1_S1 + 67) -
                p_over_q * *(b + 139 * OS1_S1 + 67) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 67) +
                one_over_two_q * *(b + 97 * OS1_S1 + 41);
            *(b + 97 * OS1_S1 + 102) =
                prefactor_y * *(b + 97 * OS1_S1 + 69) -
                p_over_q * *(b + 138 * OS1_S1 + 69) +
                one_over_two_q * *(b + 65 * OS1_S1 + 69) +
                one_over_two_q * *(b + 97 * OS1_S1 + 44);
            *(b + 97 * OS1_S1 + 103) = prefactor_y * *(b + 97 * OS1_S1 + 70) -
                                       p_over_q * *(b + 138 * OS1_S1 + 70) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 70);
            *(b + 97 * OS1_S1 + 104) =
                prefactor_x * *(b + 97 * OS1_S1 + 76) -
                p_over_q * *(b + 133 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 76) +
                one_over_two_q * *(b + 97 * OS1_S1 + 55);
            *(b + 97 * OS1_S1 + 105) =
                prefactor_x * *(b + 97 * OS1_S1 + 77) -
                p_over_q * *(b + 133 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 77);
            *(b + 97 * OS1_S1 + 106) =
                prefactor_z * *(b + 97 * OS1_S1 + 71) -
                p_over_q * *(b + 139 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 71);
            *(b + 97 * OS1_S1 + 107) =
                prefactor_x * *(b + 97 * OS1_S1 + 79) -
                p_over_q * *(b + 133 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 79);
            *(b + 97 * OS1_S1 + 108) =
                prefactor_x * *(b + 97 * OS1_S1 + 80) -
                p_over_q * *(b + 133 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 80);
            *(b + 97 * OS1_S1 + 109) =
                prefactor_x * *(b + 97 * OS1_S1 + 81) -
                p_over_q * *(b + 133 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 81);
            *(b + 97 * OS1_S1 + 110) = prefactor_y * *(b + 97 * OS1_S1 + 76) -
                                       p_over_q * *(b + 138 * OS1_S1 + 76) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 76);
            *(b + 97 * OS1_S1 + 111) =
                prefactor_x * *(b + 97 * OS1_S1 + 83) -
                p_over_q * *(b + 133 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 83);
            *(b + 97 * OS1_S1 + 112) =
                prefactor_y * *(b + 97 * OS1_S1 + 77) -
                p_over_q * *(b + 138 * OS1_S1 + 77) +
                one_over_two_q * *(b + 65 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 97 * OS1_S1 + 50);
            *(b + 97 * OS1_S1 + 113) =
                prefactor_z * *(b + 97 * OS1_S1 + 77) -
                p_over_q * *(b + 139 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 77);
            *(b + 97 * OS1_S1 + 114) =
                prefactor_z * *(b + 97 * OS1_S1 + 78) -
                p_over_q * *(b + 139 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 78) +
                one_over_two_q * *(b + 97 * OS1_S1 + 50);
            *(b + 97 * OS1_S1 + 115) =
                prefactor_z * *(b + 97 * OS1_S1 + 79) -
                p_over_q * *(b + 139 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 51);
            *(b + 97 * OS1_S1 + 116) =
                prefactor_y * *(b + 97 * OS1_S1 + 81) -
                p_over_q * *(b + 138 * OS1_S1 + 81) +
                one_over_two_q * *(b + 65 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 54);
            *(b + 97 * OS1_S1 + 117) =
                prefactor_y * *(b + 97 * OS1_S1 + 82) -
                p_over_q * *(b + 138 * OS1_S1 + 82) +
                one_over_two_q * *(b + 65 * OS1_S1 + 82) +
                one_over_two_q * *(b + 97 * OS1_S1 + 55);
            *(b + 97 * OS1_S1 + 118) = prefactor_y * *(b + 97 * OS1_S1 + 83) -
                                       p_over_q * *(b + 138 * OS1_S1 + 83) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 83);
            *(b + 97 * OS1_S1 + 119) =
                prefactor_z * *(b + 97 * OS1_S1 + 83) -
                p_over_q * *(b + 139 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 97 * OS1_S1 + 55);
            *(b + 98 * OS1_S1 + 84) =
                prefactor_x * *(b + 98 * OS1_S1 + 56) -
                p_over_q * *(b + 134 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 98 * OS1_S1 + 35);
            *(b + 98 * OS1_S1 + 85) = prefactor_y * *(b + 98 * OS1_S1 + 56) -
                                      p_over_q * *(b + 139 * OS1_S1 + 56);
            *(b + 98 * OS1_S1 + 86) =
                prefactor_z * *(b + 98 * OS1_S1 + 56) -
                p_over_q * *(b + 140 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 56);
            *(b + 98 * OS1_S1 + 87) = prefactor_y * *(b + 98 * OS1_S1 + 57) -
                                      p_over_q * *(b + 139 * OS1_S1 + 57) +
                                      one_over_two_q * *(b + 98 * OS1_S1 + 35);
            *(b + 98 * OS1_S1 + 88) = prefactor_y * *(b + 98 * OS1_S1 + 58) -
                                      p_over_q * *(b + 139 * OS1_S1 + 58);
            *(b + 98 * OS1_S1 + 89) =
                prefactor_z * *(b + 98 * OS1_S1 + 58) -
                p_over_q * *(b + 140 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 58) +
                one_over_two_q * *(b + 98 * OS1_S1 + 35);
            *(b + 98 * OS1_S1 + 90) =
                prefactor_y * *(b + 98 * OS1_S1 + 59) -
                p_over_q * *(b + 139 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 36);
            *(b + 98 * OS1_S1 + 91) =
                prefactor_z * *(b + 98 * OS1_S1 + 59) -
                p_over_q * *(b + 140 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 59);
            *(b + 98 * OS1_S1 + 92) = prefactor_y * *(b + 98 * OS1_S1 + 61) -
                                      p_over_q * *(b + 139 * OS1_S1 + 61);
            *(b + 98 * OS1_S1 + 93) =
                prefactor_z * *(b + 98 * OS1_S1 + 61) -
                p_over_q * *(b + 140 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 37);
            *(b + 98 * OS1_S1 + 94) =
                prefactor_x * *(b + 98 * OS1_S1 + 66) -
                p_over_q * *(b + 134 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 45);
            *(b + 98 * OS1_S1 + 95) =
                prefactor_z * *(b + 98 * OS1_S1 + 62) -
                p_over_q * *(b + 140 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 62);
            *(b + 98 * OS1_S1 + 96) = prefactor_y * *(b + 98 * OS1_S1 + 64) -
                                      p_over_q * *(b + 139 * OS1_S1 + 64) +
                                      one_over_two_q * *(b + 98 * OS1_S1 + 40);
            *(b + 98 * OS1_S1 + 97) = prefactor_y * *(b + 98 * OS1_S1 + 65) -
                                      p_over_q * *(b + 139 * OS1_S1 + 65);
            *(b + 98 * OS1_S1 + 98) =
                prefactor_x * *(b + 98 * OS1_S1 + 70) -
                p_over_q * *(b + 134 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 49);
            *(b + 98 * OS1_S1 + 99) =
                prefactor_x * *(b + 98 * OS1_S1 + 71) -
                p_over_q * *(b + 134 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 71) +
                one_over_two_q * *(b + 98 * OS1_S1 + 50);
            *(b + 98 * OS1_S1 + 100) =
                prefactor_z * *(b + 98 * OS1_S1 + 66) -
                p_over_q * *(b + 140 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 66);
            *(b + 98 * OS1_S1 + 101) =
                prefactor_x * *(b + 98 * OS1_S1 + 73) -
                p_over_q * *(b + 134 * OS1_S1 + 73) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 73) +
                one_over_two_q * *(b + 98 * OS1_S1 + 52);
            *(b + 98 * OS1_S1 + 102) = prefactor_y * *(b + 98 * OS1_S1 + 69) -
                                       p_over_q * *(b + 139 * OS1_S1 + 69) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 44);
            *(b + 98 * OS1_S1 + 103) = prefactor_y * *(b + 98 * OS1_S1 + 70) -
                                       p_over_q * *(b + 139 * OS1_S1 + 70);
            *(b + 98 * OS1_S1 + 104) =
                prefactor_x * *(b + 98 * OS1_S1 + 76) -
                p_over_q * *(b + 134 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 76) +
                one_over_two_q * *(b + 98 * OS1_S1 + 55);
            *(b + 98 * OS1_S1 + 105) =
                prefactor_x * *(b + 98 * OS1_S1 + 77) -
                p_over_q * *(b + 134 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 77);
            *(b + 98 * OS1_S1 + 106) =
                prefactor_x * *(b + 98 * OS1_S1 + 78) -
                p_over_q * *(b + 134 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 78);
            *(b + 98 * OS1_S1 + 107) =
                prefactor_x * *(b + 98 * OS1_S1 + 79) -
                p_over_q * *(b + 134 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 79);
            *(b + 98 * OS1_S1 + 108) =
                prefactor_x * *(b + 98 * OS1_S1 + 80) -
                p_over_q * *(b + 134 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 80);
            *(b + 98 * OS1_S1 + 109) =
                prefactor_x * *(b + 98 * OS1_S1 + 81) -
                p_over_q * *(b + 134 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 81);
            *(b + 98 * OS1_S1 + 110) = prefactor_y * *(b + 98 * OS1_S1 + 76) -
                                       p_over_q * *(b + 139 * OS1_S1 + 76);
            *(b + 98 * OS1_S1 + 111) =
                prefactor_x * *(b + 98 * OS1_S1 + 83) -
                p_over_q * *(b + 134 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 83);
            *(b + 98 * OS1_S1 + 112) =
                prefactor_y * *(b + 98 * OS1_S1 + 77) -
                p_over_q * *(b + 139 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 98 * OS1_S1 + 50);
            *(b + 98 * OS1_S1 + 113) =
                prefactor_z * *(b + 98 * OS1_S1 + 77) -
                p_over_q * *(b + 140 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 77);
            *(b + 98 * OS1_S1 + 114) =
                prefactor_z * *(b + 98 * OS1_S1 + 78) -
                p_over_q * *(b + 140 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 78) +
                one_over_two_q * *(b + 98 * OS1_S1 + 50);
            *(b + 98 * OS1_S1 + 115) =
                prefactor_z * *(b + 98 * OS1_S1 + 79) -
                p_over_q * *(b + 140 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 51);
            *(b + 98 * OS1_S1 + 116) =
                prefactor_y * *(b + 98 * OS1_S1 + 81) -
                p_over_q * *(b + 139 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 54);
            *(b + 98 * OS1_S1 + 117) = prefactor_y * *(b + 98 * OS1_S1 + 82) -
                                       p_over_q * *(b + 139 * OS1_S1 + 82) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 55);
            *(b + 98 * OS1_S1 + 118) = prefactor_y * *(b + 98 * OS1_S1 + 83) -
                                       p_over_q * *(b + 139 * OS1_S1 + 83);
            *(b + 98 * OS1_S1 + 119) =
                prefactor_z * *(b + 98 * OS1_S1 + 83) -
                p_over_q * *(b + 140 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 98 * OS1_S1 + 55);
            *(b + 99 * OS1_S1 + 84) =
                prefactor_x * *(b + 99 * OS1_S1 + 56) -
                p_over_q * *(b + 135 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 35);
            *(b + 99 * OS1_S1 + 85) =
                prefactor_y * *(b + 99 * OS1_S1 + 56) -
                p_over_q * *(b + 141 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 56);
            *(b + 99 * OS1_S1 + 86) = prefactor_z * *(b + 99 * OS1_S1 + 56) -
                                      p_over_q * *(b + 142 * OS1_S1 + 56);
            *(b + 99 * OS1_S1 + 87) =
                prefactor_y * *(b + 99 * OS1_S1 + 57) -
                p_over_q * *(b + 141 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 57) +
                one_over_two_q * *(b + 99 * OS1_S1 + 35);
            *(b + 99 * OS1_S1 + 88) = prefactor_z * *(b + 99 * OS1_S1 + 57) -
                                      p_over_q * *(b + 142 * OS1_S1 + 57);
            *(b + 99 * OS1_S1 + 89) = prefactor_z * *(b + 99 * OS1_S1 + 58) -
                                      p_over_q * *(b + 142 * OS1_S1 + 58) +
                                      one_over_two_q * *(b + 99 * OS1_S1 + 35);
            *(b + 99 * OS1_S1 + 90) =
                prefactor_y * *(b + 99 * OS1_S1 + 59) -
                p_over_q * *(b + 141 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 36);
            *(b + 99 * OS1_S1 + 91) = prefactor_z * *(b + 99 * OS1_S1 + 59) -
                                      p_over_q * *(b + 142 * OS1_S1 + 59);
            *(b + 99 * OS1_S1 + 92) =
                prefactor_y * *(b + 99 * OS1_S1 + 61) -
                p_over_q * *(b + 141 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 61);
            *(b + 99 * OS1_S1 + 93) =
                prefactor_z * *(b + 99 * OS1_S1 + 61) -
                p_over_q * *(b + 142 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 37);
            *(b + 99 * OS1_S1 + 94) =
                prefactor_x * *(b + 99 * OS1_S1 + 66) -
                p_over_q * *(b + 135 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 45);
            *(b + 99 * OS1_S1 + 95) = prefactor_z * *(b + 99 * OS1_S1 + 62) -
                                      p_over_q * *(b + 142 * OS1_S1 + 62);
            *(b + 99 * OS1_S1 + 96) = prefactor_z * *(b + 99 * OS1_S1 + 63) -
                                      p_over_q * *(b + 142 * OS1_S1 + 63) +
                                      one_over_two_q * *(b + 99 * OS1_S1 + 38);
            *(b + 99 * OS1_S1 + 97) =
                prefactor_y * *(b + 99 * OS1_S1 + 65) -
                p_over_q * *(b + 141 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 65);
            *(b + 99 * OS1_S1 + 98) =
                prefactor_x * *(b + 99 * OS1_S1 + 70) -
                p_over_q * *(b + 135 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 49);
            *(b + 99 * OS1_S1 + 99) =
                prefactor_x * *(b + 99 * OS1_S1 + 71) -
                p_over_q * *(b + 135 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 71) +
                one_over_two_q * *(b + 99 * OS1_S1 + 50);
            *(b + 99 * OS1_S1 + 100) = prefactor_z * *(b + 99 * OS1_S1 + 66) -
                                       p_over_q * *(b + 142 * OS1_S1 + 66);
            *(b + 99 * OS1_S1 + 101) = prefactor_z * *(b + 99 * OS1_S1 + 67) -
                                       p_over_q * *(b + 142 * OS1_S1 + 67) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 41);
            *(b + 99 * OS1_S1 + 102) =
                prefactor_x * *(b + 99 * OS1_S1 + 74) -
                p_over_q * *(b + 135 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 74) +
                one_over_two_q * *(b + 99 * OS1_S1 + 53);
            *(b + 99 * OS1_S1 + 103) =
                prefactor_y * *(b + 99 * OS1_S1 + 70) -
                p_over_q * *(b + 141 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 70);
            *(b + 99 * OS1_S1 + 104) =
                prefactor_x * *(b + 99 * OS1_S1 + 76) -
                p_over_q * *(b + 135 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 76) +
                one_over_two_q * *(b + 99 * OS1_S1 + 55);
            *(b + 99 * OS1_S1 + 105) =
                prefactor_x * *(b + 99 * OS1_S1 + 77) -
                p_over_q * *(b + 135 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 77);
            *(b + 99 * OS1_S1 + 106) = prefactor_z * *(b + 99 * OS1_S1 + 71) -
                                       p_over_q * *(b + 142 * OS1_S1 + 71);
            *(b + 99 * OS1_S1 + 107) =
                prefactor_x * *(b + 99 * OS1_S1 + 79) -
                p_over_q * *(b + 135 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 79);
            *(b + 99 * OS1_S1 + 108) =
                prefactor_x * *(b + 99 * OS1_S1 + 80) -
                p_over_q * *(b + 135 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 80);
            *(b + 99 * OS1_S1 + 109) =
                prefactor_x * *(b + 99 * OS1_S1 + 81) -
                p_over_q * *(b + 135 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 81);
            *(b + 99 * OS1_S1 + 110) =
                prefactor_x * *(b + 99 * OS1_S1 + 82) -
                p_over_q * *(b + 135 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 82);
            *(b + 99 * OS1_S1 + 111) =
                prefactor_x * *(b + 99 * OS1_S1 + 83) -
                p_over_q * *(b + 135 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 83);
            *(b + 99 * OS1_S1 + 112) =
                prefactor_y * *(b + 99 * OS1_S1 + 77) -
                p_over_q * *(b + 141 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 50);
            *(b + 99 * OS1_S1 + 113) = prefactor_z * *(b + 99 * OS1_S1 + 77) -
                                       p_over_q * *(b + 142 * OS1_S1 + 77);
            *(b + 99 * OS1_S1 + 114) = prefactor_z * *(b + 99 * OS1_S1 + 78) -
                                       p_over_q * *(b + 142 * OS1_S1 + 78) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 50);
            *(b + 99 * OS1_S1 + 115) =
                prefactor_z * *(b + 99 * OS1_S1 + 79) -
                p_over_q * *(b + 142 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 51);
            *(b + 99 * OS1_S1 + 116) =
                prefactor_y * *(b + 99 * OS1_S1 + 81) -
                p_over_q * *(b + 141 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 54);
            *(b + 99 * OS1_S1 + 117) =
                prefactor_y * *(b + 99 * OS1_S1 + 82) -
                p_over_q * *(b + 141 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 82) +
                one_over_two_q * *(b + 99 * OS1_S1 + 55);
            *(b + 99 * OS1_S1 + 118) =
                prefactor_y * *(b + 99 * OS1_S1 + 83) -
                p_over_q * *(b + 141 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 83);
            *(b + 99 * OS1_S1 + 119) =
                prefactor_z * *(b + 99 * OS1_S1 + 83) -
                p_over_q * *(b + 142 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 55);
            *(b + 100 * OS1_S1 + 84) =
                prefactor_x * *(b + 100 * OS1_S1 + 56) -
                p_over_q * *(b + 136 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 100 * OS1_S1 + 35);
            *(b + 100 * OS1_S1 + 85) =
                prefactor_y * *(b + 100 * OS1_S1 + 56) -
                p_over_q * *(b + 142 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 56);
            *(b + 100 * OS1_S1 + 86) = prefactor_z * *(b + 100 * OS1_S1 + 56) -
                                       p_over_q * *(b + 143 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 56);
            *(b + 100 * OS1_S1 + 87) =
                prefactor_y * *(b + 100 * OS1_S1 + 57) -
                p_over_q * *(b + 142 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 57) +
                one_over_two_q * *(b + 100 * OS1_S1 + 35);
            *(b + 100 * OS1_S1 + 88) = prefactor_z * *(b + 100 * OS1_S1 + 57) -
                                       p_over_q * *(b + 143 * OS1_S1 + 57) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 57);
            *(b + 100 * OS1_S1 + 89) =
                prefactor_z * *(b + 100 * OS1_S1 + 58) -
                p_over_q * *(b + 143 * OS1_S1 + 58) +
                one_over_two_q * *(b + 66 * OS1_S1 + 58) +
                one_over_two_q * *(b + 100 * OS1_S1 + 35);
            *(b + 100 * OS1_S1 + 90) =
                prefactor_y * *(b + 100 * OS1_S1 + 59) -
                p_over_q * *(b + 142 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 36);
            *(b + 100 * OS1_S1 + 91) = prefactor_z * *(b + 100 * OS1_S1 + 59) -
                                       p_over_q * *(b + 143 * OS1_S1 + 59) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 59);
            *(b + 100 * OS1_S1 + 92) =
                prefactor_y * *(b + 100 * OS1_S1 + 61) -
                p_over_q * *(b + 142 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 61);
            *(b + 100 * OS1_S1 + 93) =
                prefactor_z * *(b + 100 * OS1_S1 + 61) -
                p_over_q * *(b + 143 * OS1_S1 + 61) +
                one_over_two_q * *(b + 66 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 37);
            *(b + 100 * OS1_S1 + 94) =
                prefactor_x * *(b + 100 * OS1_S1 + 66) -
                p_over_q * *(b + 136 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 45);
            *(b + 100 * OS1_S1 + 95) = prefactor_z * *(b + 100 * OS1_S1 + 62) -
                                       p_over_q * *(b + 143 * OS1_S1 + 62) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 62);
            *(b + 100 * OS1_S1 + 96) =
                prefactor_z * *(b + 100 * OS1_S1 + 63) -
                p_over_q * *(b + 143 * OS1_S1 + 63) +
                one_over_two_q * *(b + 66 * OS1_S1 + 63) +
                one_over_two_q * *(b + 100 * OS1_S1 + 38);
            *(b + 100 * OS1_S1 + 97) =
                prefactor_y * *(b + 100 * OS1_S1 + 65) -
                p_over_q * *(b + 142 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 65);
            *(b + 100 * OS1_S1 + 98) =
                prefactor_x * *(b + 100 * OS1_S1 + 70) -
                p_over_q * *(b + 136 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 49);
            *(b + 100 * OS1_S1 + 99) =
                prefactor_x * *(b + 100 * OS1_S1 + 71) -
                p_over_q * *(b + 136 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 71) +
                one_over_two_q * *(b + 100 * OS1_S1 + 50);
            *(b + 100 * OS1_S1 + 100) =
                prefactor_z * *(b + 100 * OS1_S1 + 66) -
                p_over_q * *(b + 143 * OS1_S1 + 66) +
                one_over_two_q * *(b + 66 * OS1_S1 + 66);
            *(b + 100 * OS1_S1 + 101) =
                prefactor_z * *(b + 100 * OS1_S1 + 67) -
                p_over_q * *(b + 143 * OS1_S1 + 67) +
                one_over_two_q * *(b + 66 * OS1_S1 + 67) +
                one_over_two_q * *(b + 100 * OS1_S1 + 41);
            *(b + 100 * OS1_S1 + 102) =
                prefactor_x * *(b + 100 * OS1_S1 + 74) -
                p_over_q * *(b + 136 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 74) +
                one_over_two_q * *(b + 100 * OS1_S1 + 53);
            *(b + 100 * OS1_S1 + 103) =
                prefactor_y * *(b + 100 * OS1_S1 + 70) -
                p_over_q * *(b + 142 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 70);
            *(b + 100 * OS1_S1 + 104) =
                prefactor_x * *(b + 100 * OS1_S1 + 76) -
                p_over_q * *(b + 136 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 76) +
                one_over_two_q * *(b + 100 * OS1_S1 + 55);
            *(b + 100 * OS1_S1 + 105) =
                prefactor_x * *(b + 100 * OS1_S1 + 77) -
                p_over_q * *(b + 136 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 77);
            *(b + 100 * OS1_S1 + 106) =
                prefactor_z * *(b + 100 * OS1_S1 + 71) -
                p_over_q * *(b + 143 * OS1_S1 + 71) +
                one_over_two_q * *(b + 66 * OS1_S1 + 71);
            *(b + 100 * OS1_S1 + 107) =
                prefactor_x * *(b + 100 * OS1_S1 + 79) -
                p_over_q * *(b + 136 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 79);
            *(b + 100 * OS1_S1 + 108) =
                prefactor_x * *(b + 100 * OS1_S1 + 80) -
                p_over_q * *(b + 136 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 80);
            *(b + 100 * OS1_S1 + 109) =
                prefactor_x * *(b + 100 * OS1_S1 + 81) -
                p_over_q * *(b + 136 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 81);
            *(b + 100 * OS1_S1 + 110) =
                prefactor_x * *(b + 100 * OS1_S1 + 82) -
                p_over_q * *(b + 136 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 82);
            *(b + 100 * OS1_S1 + 111) =
                prefactor_x * *(b + 100 * OS1_S1 + 83) -
                p_over_q * *(b + 136 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 83);
            *(b + 100 * OS1_S1 + 112) =
                prefactor_y * *(b + 100 * OS1_S1 + 77) -
                p_over_q * *(b + 142 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 100 * OS1_S1 + 50);
            *(b + 100 * OS1_S1 + 113) =
                prefactor_z * *(b + 100 * OS1_S1 + 77) -
                p_over_q * *(b + 143 * OS1_S1 + 77) +
                one_over_two_q * *(b + 66 * OS1_S1 + 77);
            *(b + 100 * OS1_S1 + 114) =
                prefactor_z * *(b + 100 * OS1_S1 + 78) -
                p_over_q * *(b + 143 * OS1_S1 + 78) +
                one_over_two_q * *(b + 66 * OS1_S1 + 78) +
                one_over_two_q * *(b + 100 * OS1_S1 + 50);
            *(b + 100 * OS1_S1 + 115) =
                prefactor_z * *(b + 100 * OS1_S1 + 79) -
                p_over_q * *(b + 143 * OS1_S1 + 79) +
                one_over_two_q * *(b + 66 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 51);
            *(b + 100 * OS1_S1 + 116) =
                prefactor_y * *(b + 100 * OS1_S1 + 81) -
                p_over_q * *(b + 142 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 54);
            *(b + 100 * OS1_S1 + 117) =
                prefactor_y * *(b + 100 * OS1_S1 + 82) -
                p_over_q * *(b + 142 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 82) +
                one_over_two_q * *(b + 100 * OS1_S1 + 55);
            *(b + 100 * OS1_S1 + 118) =
                prefactor_y * *(b + 100 * OS1_S1 + 83) -
                p_over_q * *(b + 142 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 83);
            *(b + 100 * OS1_S1 + 119) =
                prefactor_z * *(b + 100 * OS1_S1 + 83) -
                p_over_q * *(b + 143 * OS1_S1 + 83) +
                one_over_two_q * *(b + 66 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 100 * OS1_S1 + 55);
            *(b + 101 * OS1_S1 + 84) =
                prefactor_x * *(b + 101 * OS1_S1 + 56) -
                p_over_q * *(b + 137 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 101 * OS1_S1 + 35);
            *(b + 101 * OS1_S1 + 85) =
                prefactor_y * *(b + 101 * OS1_S1 + 56) -
                p_over_q * *(b + 143 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 56);
            *(b + 101 * OS1_S1 + 86) =
                prefactor_z * *(b + 101 * OS1_S1 + 56) -
                p_over_q * *(b + 144 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 56);
            *(b + 101 * OS1_S1 + 87) =
                prefactor_y * *(b + 101 * OS1_S1 + 57) -
                p_over_q * *(b + 143 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 57) +
                one_over_two_q * *(b + 101 * OS1_S1 + 35);
            *(b + 101 * OS1_S1 + 88) =
                prefactor_z * *(b + 101 * OS1_S1 + 57) -
                p_over_q * *(b + 144 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 57);
            *(b + 101 * OS1_S1 + 89) =
                prefactor_z * *(b + 101 * OS1_S1 + 58) -
                p_over_q * *(b + 144 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 58) +
                one_over_two_q * *(b + 101 * OS1_S1 + 35);
            *(b + 101 * OS1_S1 + 90) =
                prefactor_y * *(b + 101 * OS1_S1 + 59) -
                p_over_q * *(b + 143 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 36);
            *(b + 101 * OS1_S1 + 91) =
                prefactor_z * *(b + 101 * OS1_S1 + 59) -
                p_over_q * *(b + 144 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 59);
            *(b + 101 * OS1_S1 + 92) =
                prefactor_y * *(b + 101 * OS1_S1 + 61) -
                p_over_q * *(b + 143 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 61);
            *(b + 101 * OS1_S1 + 93) =
                prefactor_z * *(b + 101 * OS1_S1 + 61) -
                p_over_q * *(b + 144 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 37);
            *(b + 101 * OS1_S1 + 94) =
                prefactor_x * *(b + 101 * OS1_S1 + 66) -
                p_over_q * *(b + 137 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 45);
            *(b + 101 * OS1_S1 + 95) =
                prefactor_z * *(b + 101 * OS1_S1 + 62) -
                p_over_q * *(b + 144 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 62);
            *(b + 101 * OS1_S1 + 96) =
                prefactor_z * *(b + 101 * OS1_S1 + 63) -
                p_over_q * *(b + 144 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 63) +
                one_over_two_q * *(b + 101 * OS1_S1 + 38);
            *(b + 101 * OS1_S1 + 97) =
                prefactor_y * *(b + 101 * OS1_S1 + 65) -
                p_over_q * *(b + 143 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 65);
            *(b + 101 * OS1_S1 + 98) =
                prefactor_x * *(b + 101 * OS1_S1 + 70) -
                p_over_q * *(b + 137 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 49);
            *(b + 101 * OS1_S1 + 99) =
                prefactor_x * *(b + 101 * OS1_S1 + 71) -
                p_over_q * *(b + 137 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 71) +
                one_over_two_q * *(b + 101 * OS1_S1 + 50);
            *(b + 101 * OS1_S1 + 100) =
                prefactor_z * *(b + 101 * OS1_S1 + 66) -
                p_over_q * *(b + 144 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 66);
            *(b + 101 * OS1_S1 + 101) =
                prefactor_z * *(b + 101 * OS1_S1 + 67) -
                p_over_q * *(b + 144 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 67) +
                one_over_two_q * *(b + 101 * OS1_S1 + 41);
            *(b + 101 * OS1_S1 + 102) =
                prefactor_x * *(b + 101 * OS1_S1 + 74) -
                p_over_q * *(b + 137 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 74) +
                one_over_two_q * *(b + 101 * OS1_S1 + 53);
            *(b + 101 * OS1_S1 + 103) =
                prefactor_y * *(b + 101 * OS1_S1 + 70) -
                p_over_q * *(b + 143 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 70);
            *(b + 101 * OS1_S1 + 104) =
                prefactor_x * *(b + 101 * OS1_S1 + 76) -
                p_over_q * *(b + 137 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 76) +
                one_over_two_q * *(b + 101 * OS1_S1 + 55);
            *(b + 101 * OS1_S1 + 105) =
                prefactor_x * *(b + 101 * OS1_S1 + 77) -
                p_over_q * *(b + 137 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 77);
            *(b + 101 * OS1_S1 + 106) =
                prefactor_z * *(b + 101 * OS1_S1 + 71) -
                p_over_q * *(b + 144 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 71);
            *(b + 101 * OS1_S1 + 107) =
                prefactor_x * *(b + 101 * OS1_S1 + 79) -
                p_over_q * *(b + 137 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 79);
            *(b + 101 * OS1_S1 + 108) =
                prefactor_x * *(b + 101 * OS1_S1 + 80) -
                p_over_q * *(b + 137 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 80);
            *(b + 101 * OS1_S1 + 109) =
                prefactor_x * *(b + 101 * OS1_S1 + 81) -
                p_over_q * *(b + 137 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 81);
            *(b + 101 * OS1_S1 + 110) =
                prefactor_x * *(b + 101 * OS1_S1 + 82) -
                p_over_q * *(b + 137 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 82);
            *(b + 101 * OS1_S1 + 111) =
                prefactor_x * *(b + 101 * OS1_S1 + 83) -
                p_over_q * *(b + 137 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 83);
            *(b + 101 * OS1_S1 + 112) =
                prefactor_y * *(b + 101 * OS1_S1 + 77) -
                p_over_q * *(b + 143 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 101 * OS1_S1 + 50);
            *(b + 101 * OS1_S1 + 113) =
                prefactor_z * *(b + 101 * OS1_S1 + 77) -
                p_over_q * *(b + 144 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 77);
            *(b + 101 * OS1_S1 + 114) =
                prefactor_z * *(b + 101 * OS1_S1 + 78) -
                p_over_q * *(b + 144 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 78) +
                one_over_two_q * *(b + 101 * OS1_S1 + 50);
            *(b + 101 * OS1_S1 + 115) =
                prefactor_z * *(b + 101 * OS1_S1 + 79) -
                p_over_q * *(b + 144 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 51);
            *(b + 101 * OS1_S1 + 116) =
                prefactor_y * *(b + 101 * OS1_S1 + 81) -
                p_over_q * *(b + 143 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 54);
            *(b + 101 * OS1_S1 + 117) =
                prefactor_y * *(b + 101 * OS1_S1 + 82) -
                p_over_q * *(b + 143 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 82) +
                one_over_two_q * *(b + 101 * OS1_S1 + 55);
            *(b + 101 * OS1_S1 + 118) =
                prefactor_y * *(b + 101 * OS1_S1 + 83) -
                p_over_q * *(b + 143 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 83);
            *(b + 101 * OS1_S1 + 119) =
                prefactor_z * *(b + 101 * OS1_S1 + 83) -
                p_over_q * *(b + 144 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 101 * OS1_S1 + 55);
            *(b + 102 * OS1_S1 + 84) =
                prefactor_x * *(b + 102 * OS1_S1 + 56) -
                p_over_q * *(b + 138 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 102 * OS1_S1 + 35);
            *(b + 102 * OS1_S1 + 85) =
                prefactor_y * *(b + 102 * OS1_S1 + 56) -
                p_over_q * *(b + 144 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 56);
            *(b + 102 * OS1_S1 + 86) =
                prefactor_z * *(b + 102 * OS1_S1 + 56) -
                p_over_q * *(b + 145 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 56);
            *(b + 102 * OS1_S1 + 87) =
                prefactor_y * *(b + 102 * OS1_S1 + 57) -
                p_over_q * *(b + 144 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 57) +
                one_over_two_q * *(b + 102 * OS1_S1 + 35);
            *(b + 102 * OS1_S1 + 88) =
                prefactor_y * *(b + 102 * OS1_S1 + 58) -
                p_over_q * *(b + 144 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 58);
            *(b + 102 * OS1_S1 + 89) =
                prefactor_z * *(b + 102 * OS1_S1 + 58) -
                p_over_q * *(b + 145 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 58) +
                one_over_two_q * *(b + 102 * OS1_S1 + 35);
            *(b + 102 * OS1_S1 + 90) =
                prefactor_y * *(b + 102 * OS1_S1 + 59) -
                p_over_q * *(b + 144 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 36);
            *(b + 102 * OS1_S1 + 91) =
                prefactor_z * *(b + 102 * OS1_S1 + 59) -
                p_over_q * *(b + 145 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 59);
            *(b + 102 * OS1_S1 + 92) =
                prefactor_y * *(b + 102 * OS1_S1 + 61) -
                p_over_q * *(b + 144 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 61);
            *(b + 102 * OS1_S1 + 93) =
                prefactor_z * *(b + 102 * OS1_S1 + 61) -
                p_over_q * *(b + 145 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 37);
            *(b + 102 * OS1_S1 + 94) =
                prefactor_x * *(b + 102 * OS1_S1 + 66) -
                p_over_q * *(b + 138 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 45);
            *(b + 102 * OS1_S1 + 95) =
                prefactor_z * *(b + 102 * OS1_S1 + 62) -
                p_over_q * *(b + 145 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 62);
            *(b + 102 * OS1_S1 + 96) =
                prefactor_y * *(b + 102 * OS1_S1 + 64) -
                p_over_q * *(b + 144 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 64) +
                one_over_two_q * *(b + 102 * OS1_S1 + 40);
            *(b + 102 * OS1_S1 + 97) =
                prefactor_y * *(b + 102 * OS1_S1 + 65) -
                p_over_q * *(b + 144 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 65);
            *(b + 102 * OS1_S1 + 98) =
                prefactor_x * *(b + 102 * OS1_S1 + 70) -
                p_over_q * *(b + 138 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 49);
            *(b + 102 * OS1_S1 + 99) =
                prefactor_x * *(b + 102 * OS1_S1 + 71) -
                p_over_q * *(b + 138 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 71) +
                one_over_two_q * *(b + 102 * OS1_S1 + 50);
            *(b + 102 * OS1_S1 + 100) =
                prefactor_z * *(b + 102 * OS1_S1 + 66) -
                p_over_q * *(b + 145 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 66);
            *(b + 102 * OS1_S1 + 101) =
                prefactor_x * *(b + 102 * OS1_S1 + 73) -
                p_over_q * *(b + 138 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 73) +
                one_over_two_q * *(b + 102 * OS1_S1 + 52);
            *(b + 102 * OS1_S1 + 102) =
                prefactor_y * *(b + 102 * OS1_S1 + 69) -
                p_over_q * *(b + 144 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 69) +
                one_over_two_q * *(b + 102 * OS1_S1 + 44);
            *(b + 102 * OS1_S1 + 103) =
                prefactor_y * *(b + 102 * OS1_S1 + 70) -
                p_over_q * *(b + 144 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 70);
            *(b + 102 * OS1_S1 + 104) =
                prefactor_x * *(b + 102 * OS1_S1 + 76) -
                p_over_q * *(b + 138 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 76) +
                one_over_two_q * *(b + 102 * OS1_S1 + 55);
            *(b + 102 * OS1_S1 + 105) =
                prefactor_x * *(b + 102 * OS1_S1 + 77) -
                p_over_q * *(b + 138 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 77);
            *(b + 102 * OS1_S1 + 106) =
                prefactor_x * *(b + 102 * OS1_S1 + 78) -
                p_over_q * *(b + 138 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 78);
            *(b + 102 * OS1_S1 + 107) =
                prefactor_x * *(b + 102 * OS1_S1 + 79) -
                p_over_q * *(b + 138 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 79);
            *(b + 102 * OS1_S1 + 108) =
                prefactor_x * *(b + 102 * OS1_S1 + 80) -
                p_over_q * *(b + 138 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 80);
            *(b + 102 * OS1_S1 + 109) =
                prefactor_x * *(b + 102 * OS1_S1 + 81) -
                p_over_q * *(b + 138 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 81);
            *(b + 102 * OS1_S1 + 110) =
                prefactor_y * *(b + 102 * OS1_S1 + 76) -
                p_over_q * *(b + 144 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 76);
            *(b + 102 * OS1_S1 + 111) =
                prefactor_x * *(b + 102 * OS1_S1 + 83) -
                p_over_q * *(b + 138 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 83);
            *(b + 102 * OS1_S1 + 112) =
                prefactor_y * *(b + 102 * OS1_S1 + 77) -
                p_over_q * *(b + 144 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 102 * OS1_S1 + 50);
            *(b + 102 * OS1_S1 + 113) =
                prefactor_z * *(b + 102 * OS1_S1 + 77) -
                p_over_q * *(b + 145 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 77);
            *(b + 102 * OS1_S1 + 114) =
                prefactor_z * *(b + 102 * OS1_S1 + 78) -
                p_over_q * *(b + 145 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 78) +
                one_over_two_q * *(b + 102 * OS1_S1 + 50);
            *(b + 102 * OS1_S1 + 115) =
                prefactor_z * *(b + 102 * OS1_S1 + 79) -
                p_over_q * *(b + 145 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 51);
            *(b + 102 * OS1_S1 + 116) =
                prefactor_y * *(b + 102 * OS1_S1 + 81) -
                p_over_q * *(b + 144 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 54);
            *(b + 102 * OS1_S1 + 117) =
                prefactor_y * *(b + 102 * OS1_S1 + 82) -
                p_over_q * *(b + 144 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 82) +
                one_over_two_q * *(b + 102 * OS1_S1 + 55);
            *(b + 102 * OS1_S1 + 118) =
                prefactor_y * *(b + 102 * OS1_S1 + 83) -
                p_over_q * *(b + 144 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 83);
            *(b + 102 * OS1_S1 + 119) =
                prefactor_z * *(b + 102 * OS1_S1 + 83) -
                p_over_q * *(b + 145 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 102 * OS1_S1 + 55);
            *(b + 103 * OS1_S1 + 84) =
                prefactor_x * *(b + 103 * OS1_S1 + 56) -
                p_over_q * *(b + 139 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 103 * OS1_S1 + 35);
            *(b + 103 * OS1_S1 + 85) = prefactor_y * *(b + 103 * OS1_S1 + 56) -
                                       p_over_q * *(b + 145 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 56);
            *(b + 103 * OS1_S1 + 86) =
                prefactor_z * *(b + 103 * OS1_S1 + 56) -
                p_over_q * *(b + 146 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 56);
            *(b + 103 * OS1_S1 + 87) =
                prefactor_y * *(b + 103 * OS1_S1 + 57) -
                p_over_q * *(b + 145 * OS1_S1 + 57) +
                one_over_two_q * *(b + 70 * OS1_S1 + 57) +
                one_over_two_q * *(b + 103 * OS1_S1 + 35);
            *(b + 103 * OS1_S1 + 88) = prefactor_y * *(b + 103 * OS1_S1 + 58) -
                                       p_over_q * *(b + 145 * OS1_S1 + 58) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 58);
            *(b + 103 * OS1_S1 + 89) =
                prefactor_z * *(b + 103 * OS1_S1 + 58) -
                p_over_q * *(b + 146 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 58) +
                one_over_two_q * *(b + 103 * OS1_S1 + 35);
            *(b + 103 * OS1_S1 + 90) =
                prefactor_y * *(b + 103 * OS1_S1 + 59) -
                p_over_q * *(b + 145 * OS1_S1 + 59) +
                one_over_two_q * *(b + 70 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 36);
            *(b + 103 * OS1_S1 + 91) =
                prefactor_z * *(b + 103 * OS1_S1 + 59) -
                p_over_q * *(b + 146 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 59);
            *(b + 103 * OS1_S1 + 92) = prefactor_y * *(b + 103 * OS1_S1 + 61) -
                                       p_over_q * *(b + 145 * OS1_S1 + 61) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 61);
            *(b + 103 * OS1_S1 + 93) =
                prefactor_z * *(b + 103 * OS1_S1 + 61) -
                p_over_q * *(b + 146 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 37);
            *(b + 103 * OS1_S1 + 94) =
                prefactor_x * *(b + 103 * OS1_S1 + 66) -
                p_over_q * *(b + 139 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 45);
            *(b + 103 * OS1_S1 + 95) =
                prefactor_z * *(b + 103 * OS1_S1 + 62) -
                p_over_q * *(b + 146 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 62);
            *(b + 103 * OS1_S1 + 96) =
                prefactor_y * *(b + 103 * OS1_S1 + 64) -
                p_over_q * *(b + 145 * OS1_S1 + 64) +
                one_over_two_q * *(b + 70 * OS1_S1 + 64) +
                one_over_two_q * *(b + 103 * OS1_S1 + 40);
            *(b + 103 * OS1_S1 + 97) = prefactor_y * *(b + 103 * OS1_S1 + 65) -
                                       p_over_q * *(b + 145 * OS1_S1 + 65) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 65);
            *(b + 103 * OS1_S1 + 98) =
                prefactor_x * *(b + 103 * OS1_S1 + 70) -
                p_over_q * *(b + 139 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 49);
            *(b + 103 * OS1_S1 + 99) =
                prefactor_x * *(b + 103 * OS1_S1 + 71) -
                p_over_q * *(b + 139 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 71) +
                one_over_two_q * *(b + 103 * OS1_S1 + 50);
            *(b + 103 * OS1_S1 + 100) =
                prefactor_z * *(b + 103 * OS1_S1 + 66) -
                p_over_q * *(b + 146 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 66);
            *(b + 103 * OS1_S1 + 101) =
                prefactor_x * *(b + 103 * OS1_S1 + 73) -
                p_over_q * *(b + 139 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 73) +
                one_over_two_q * *(b + 103 * OS1_S1 + 52);
            *(b + 103 * OS1_S1 + 102) =
                prefactor_y * *(b + 103 * OS1_S1 + 69) -
                p_over_q * *(b + 145 * OS1_S1 + 69) +
                one_over_two_q * *(b + 70 * OS1_S1 + 69) +
                one_over_two_q * *(b + 103 * OS1_S1 + 44);
            *(b + 103 * OS1_S1 + 103) =
                prefactor_y * *(b + 103 * OS1_S1 + 70) -
                p_over_q * *(b + 145 * OS1_S1 + 70) +
                one_over_two_q * *(b + 70 * OS1_S1 + 70);
            *(b + 103 * OS1_S1 + 104) =
                prefactor_x * *(b + 103 * OS1_S1 + 76) -
                p_over_q * *(b + 139 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 76) +
                one_over_two_q * *(b + 103 * OS1_S1 + 55);
            *(b + 103 * OS1_S1 + 105) =
                prefactor_x * *(b + 103 * OS1_S1 + 77) -
                p_over_q * *(b + 139 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 77);
            *(b + 103 * OS1_S1 + 106) =
                prefactor_x * *(b + 103 * OS1_S1 + 78) -
                p_over_q * *(b + 139 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 78);
            *(b + 103 * OS1_S1 + 107) =
                prefactor_x * *(b + 103 * OS1_S1 + 79) -
                p_over_q * *(b + 139 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 79);
            *(b + 103 * OS1_S1 + 108) =
                prefactor_x * *(b + 103 * OS1_S1 + 80) -
                p_over_q * *(b + 139 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 80);
            *(b + 103 * OS1_S1 + 109) =
                prefactor_x * *(b + 103 * OS1_S1 + 81) -
                p_over_q * *(b + 139 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 81);
            *(b + 103 * OS1_S1 + 110) =
                prefactor_y * *(b + 103 * OS1_S1 + 76) -
                p_over_q * *(b + 145 * OS1_S1 + 76) +
                one_over_two_q * *(b + 70 * OS1_S1 + 76);
            *(b + 103 * OS1_S1 + 111) =
                prefactor_x * *(b + 103 * OS1_S1 + 83) -
                p_over_q * *(b + 139 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 83);
            *(b + 103 * OS1_S1 + 112) =
                prefactor_y * *(b + 103 * OS1_S1 + 77) -
                p_over_q * *(b + 145 * OS1_S1 + 77) +
                one_over_two_q * *(b + 70 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 103 * OS1_S1 + 50);
            *(b + 103 * OS1_S1 + 113) =
                prefactor_z * *(b + 103 * OS1_S1 + 77) -
                p_over_q * *(b + 146 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 77);
            *(b + 103 * OS1_S1 + 114) =
                prefactor_z * *(b + 103 * OS1_S1 + 78) -
                p_over_q * *(b + 146 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 78) +
                one_over_two_q * *(b + 103 * OS1_S1 + 50);
            *(b + 103 * OS1_S1 + 115) =
                prefactor_z * *(b + 103 * OS1_S1 + 79) -
                p_over_q * *(b + 146 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 51);
            *(b + 103 * OS1_S1 + 116) =
                prefactor_y * *(b + 103 * OS1_S1 + 81) -
                p_over_q * *(b + 145 * OS1_S1 + 81) +
                one_over_two_q * *(b + 70 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 54);
            *(b + 103 * OS1_S1 + 117) =
                prefactor_y * *(b + 103 * OS1_S1 + 82) -
                p_over_q * *(b + 145 * OS1_S1 + 82) +
                one_over_two_q * *(b + 70 * OS1_S1 + 82) +
                one_over_two_q * *(b + 103 * OS1_S1 + 55);
            *(b + 103 * OS1_S1 + 118) =
                prefactor_y * *(b + 103 * OS1_S1 + 83) -
                p_over_q * *(b + 145 * OS1_S1 + 83) +
                one_over_two_q * *(b + 70 * OS1_S1 + 83);
            *(b + 103 * OS1_S1 + 119) =
                prefactor_z * *(b + 103 * OS1_S1 + 83) -
                p_over_q * *(b + 146 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 103 * OS1_S1 + 55);
            *(b + 104 * OS1_S1 + 84) =
                prefactor_x * *(b + 104 * OS1_S1 + 56) -
                p_over_q * *(b + 140 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 35);
            *(b + 104 * OS1_S1 + 85) = prefactor_y * *(b + 104 * OS1_S1 + 56) -
                                       p_over_q * *(b + 146 * OS1_S1 + 56);
            *(b + 104 * OS1_S1 + 86) =
                prefactor_z * *(b + 104 * OS1_S1 + 56) -
                p_over_q * *(b + 147 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 56);
            *(b + 104 * OS1_S1 + 87) =
                prefactor_y * *(b + 104 * OS1_S1 + 57) -
                p_over_q * *(b + 146 * OS1_S1 + 57) +
                one_over_two_q * *(b + 104 * OS1_S1 + 35);
            *(b + 104 * OS1_S1 + 88) = prefactor_y * *(b + 104 * OS1_S1 + 58) -
                                       p_over_q * *(b + 146 * OS1_S1 + 58);
            *(b + 104 * OS1_S1 + 89) =
                prefactor_z * *(b + 104 * OS1_S1 + 58) -
                p_over_q * *(b + 147 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 58) +
                one_over_two_q * *(b + 104 * OS1_S1 + 35);
            *(b + 104 * OS1_S1 + 90) =
                prefactor_y * *(b + 104 * OS1_S1 + 59) -
                p_over_q * *(b + 146 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 36);
            *(b + 104 * OS1_S1 + 91) =
                prefactor_z * *(b + 104 * OS1_S1 + 59) -
                p_over_q * *(b + 147 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 59);
            *(b + 104 * OS1_S1 + 92) = prefactor_y * *(b + 104 * OS1_S1 + 61) -
                                       p_over_q * *(b + 146 * OS1_S1 + 61);
            *(b + 104 * OS1_S1 + 93) =
                prefactor_z * *(b + 104 * OS1_S1 + 61) -
                p_over_q * *(b + 147 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 37);
            *(b + 104 * OS1_S1 + 94) =
                prefactor_x * *(b + 104 * OS1_S1 + 66) -
                p_over_q * *(b + 140 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 45);
            *(b + 104 * OS1_S1 + 95) =
                prefactor_z * *(b + 104 * OS1_S1 + 62) -
                p_over_q * *(b + 147 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 62);
            *(b + 104 * OS1_S1 + 96) =
                prefactor_y * *(b + 104 * OS1_S1 + 64) -
                p_over_q * *(b + 146 * OS1_S1 + 64) +
                one_over_two_q * *(b + 104 * OS1_S1 + 40);
            *(b + 104 * OS1_S1 + 97) = prefactor_y * *(b + 104 * OS1_S1 + 65) -
                                       p_over_q * *(b + 146 * OS1_S1 + 65);
            *(b + 104 * OS1_S1 + 98) =
                prefactor_x * *(b + 104 * OS1_S1 + 70) -
                p_over_q * *(b + 140 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 49);
            *(b + 104 * OS1_S1 + 99) =
                prefactor_x * *(b + 104 * OS1_S1 + 71) -
                p_over_q * *(b + 140 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 71) +
                one_over_two_q * *(b + 104 * OS1_S1 + 50);
            *(b + 104 * OS1_S1 + 100) =
                prefactor_z * *(b + 104 * OS1_S1 + 66) -
                p_over_q * *(b + 147 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 66);
            *(b + 104 * OS1_S1 + 101) =
                prefactor_x * *(b + 104 * OS1_S1 + 73) -
                p_over_q * *(b + 140 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 73) +
                one_over_two_q * *(b + 104 * OS1_S1 + 52);
            *(b + 104 * OS1_S1 + 102) =
                prefactor_y * *(b + 104 * OS1_S1 + 69) -
                p_over_q * *(b + 146 * OS1_S1 + 69) +
                one_over_two_q * *(b + 104 * OS1_S1 + 44);
            *(b + 104 * OS1_S1 + 103) = prefactor_y * *(b + 104 * OS1_S1 + 70) -
                                        p_over_q * *(b + 146 * OS1_S1 + 70);
            *(b + 104 * OS1_S1 + 104) =
                prefactor_x * *(b + 104 * OS1_S1 + 76) -
                p_over_q * *(b + 140 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 76) +
                one_over_two_q * *(b + 104 * OS1_S1 + 55);
            *(b + 104 * OS1_S1 + 105) =
                prefactor_x * *(b + 104 * OS1_S1 + 77) -
                p_over_q * *(b + 140 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 77);
            *(b + 104 * OS1_S1 + 106) =
                prefactor_x * *(b + 104 * OS1_S1 + 78) -
                p_over_q * *(b + 140 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 78);
            *(b + 104 * OS1_S1 + 107) =
                prefactor_x * *(b + 104 * OS1_S1 + 79) -
                p_over_q * *(b + 140 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 79);
            *(b + 104 * OS1_S1 + 108) =
                prefactor_x * *(b + 104 * OS1_S1 + 80) -
                p_over_q * *(b + 140 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 80);
            *(b + 104 * OS1_S1 + 109) =
                prefactor_x * *(b + 104 * OS1_S1 + 81) -
                p_over_q * *(b + 140 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 81);
            *(b + 104 * OS1_S1 + 110) = prefactor_y * *(b + 104 * OS1_S1 + 76) -
                                        p_over_q * *(b + 146 * OS1_S1 + 76);
            *(b + 104 * OS1_S1 + 111) =
                prefactor_x * *(b + 104 * OS1_S1 + 83) -
                p_over_q * *(b + 140 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 83);
            *(b + 104 * OS1_S1 + 112) =
                prefactor_y * *(b + 104 * OS1_S1 + 77) -
                p_over_q * *(b + 146 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 50);
            *(b + 104 * OS1_S1 + 113) =
                prefactor_z * *(b + 104 * OS1_S1 + 77) -
                p_over_q * *(b + 147 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 77);
            *(b + 104 * OS1_S1 + 114) =
                prefactor_z * *(b + 104 * OS1_S1 + 78) -
                p_over_q * *(b + 147 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 78) +
                one_over_two_q * *(b + 104 * OS1_S1 + 50);
            *(b + 104 * OS1_S1 + 115) =
                prefactor_z * *(b + 104 * OS1_S1 + 79) -
                p_over_q * *(b + 147 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 51);
            *(b + 104 * OS1_S1 + 116) =
                prefactor_y * *(b + 104 * OS1_S1 + 81) -
                p_over_q * *(b + 146 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 54);
            *(b + 104 * OS1_S1 + 117) =
                prefactor_y * *(b + 104 * OS1_S1 + 82) -
                p_over_q * *(b + 146 * OS1_S1 + 82) +
                one_over_two_q * *(b + 104 * OS1_S1 + 55);
            *(b + 104 * OS1_S1 + 118) = prefactor_y * *(b + 104 * OS1_S1 + 83) -
                                        p_over_q * *(b + 146 * OS1_S1 + 83);
            *(b + 104 * OS1_S1 + 119) =
                prefactor_z * *(b + 104 * OS1_S1 + 83) -
                p_over_q * *(b + 147 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 55);
            *(b + 105 * OS1_S1 + 84) =
                prefactor_x * *(b + 105 * OS1_S1 + 56) -
                p_over_q * *(b + 141 * OS1_S1 + 56) +
                one_over_two_q * *(b + 77 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 105 * OS1_S1 + 35);
            *(b + 105 * OS1_S1 + 85) =
                prefactor_y * *(b + 105 * OS1_S1 + 56) -
                p_over_q * *(b + 148 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 56);
            *(b + 105 * OS1_S1 + 86) = prefactor_z * *(b + 105 * OS1_S1 + 56) -
                                       p_over_q * *(b + 149 * OS1_S1 + 56);
            *(b + 105 * OS1_S1 + 87) =
                prefactor_y * *(b + 105 * OS1_S1 + 57) -
                p_over_q * *(b + 148 * OS1_S1 + 57) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 57) +
                one_over_two_q * *(b + 105 * OS1_S1 + 35);
            *(b + 105 * OS1_S1 + 88) = prefactor_z * *(b + 105 * OS1_S1 + 57) -
                                       p_over_q * *(b + 149 * OS1_S1 + 57);
            *(b + 105 * OS1_S1 + 89) =
                prefactor_z * *(b + 105 * OS1_S1 + 58) -
                p_over_q * *(b + 149 * OS1_S1 + 58) +
                one_over_two_q * *(b + 105 * OS1_S1 + 35);
            *(b + 105 * OS1_S1 + 90) =
                prefactor_y * *(b + 105 * OS1_S1 + 59) -
                p_over_q * *(b + 148 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 36);
            *(b + 105 * OS1_S1 + 91) = prefactor_z * *(b + 105 * OS1_S1 + 59) -
                                       p_over_q * *(b + 149 * OS1_S1 + 59);
            *(b + 105 * OS1_S1 + 92) =
                prefactor_y * *(b + 105 * OS1_S1 + 61) -
                p_over_q * *(b + 148 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 61);
            *(b + 105 * OS1_S1 + 93) =
                prefactor_z * *(b + 105 * OS1_S1 + 61) -
                p_over_q * *(b + 149 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 37);
            *(b + 105 * OS1_S1 + 94) =
                prefactor_x * *(b + 105 * OS1_S1 + 66) -
                p_over_q * *(b + 141 * OS1_S1 + 66) +
                one_over_two_q * *(b + 77 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 45);
            *(b + 105 * OS1_S1 + 95) = prefactor_z * *(b + 105 * OS1_S1 + 62) -
                                       p_over_q * *(b + 149 * OS1_S1 + 62);
            *(b + 105 * OS1_S1 + 96) =
                prefactor_z * *(b + 105 * OS1_S1 + 63) -
                p_over_q * *(b + 149 * OS1_S1 + 63) +
                one_over_two_q * *(b + 105 * OS1_S1 + 38);
            *(b + 105 * OS1_S1 + 97) =
                prefactor_y * *(b + 105 * OS1_S1 + 65) -
                p_over_q * *(b + 148 * OS1_S1 + 65) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 65);
            *(b + 105 * OS1_S1 + 98) =
                prefactor_x * *(b + 105 * OS1_S1 + 70) -
                p_over_q * *(b + 141 * OS1_S1 + 70) +
                one_over_two_q * *(b + 77 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 49);
            *(b + 105 * OS1_S1 + 99) =
                prefactor_x * *(b + 105 * OS1_S1 + 71) -
                p_over_q * *(b + 141 * OS1_S1 + 71) +
                one_over_two_q * *(b + 77 * OS1_S1 + 71) +
                one_over_two_q * *(b + 105 * OS1_S1 + 50);
            *(b + 105 * OS1_S1 + 100) = prefactor_z * *(b + 105 * OS1_S1 + 66) -
                                        p_over_q * *(b + 149 * OS1_S1 + 66);
            *(b + 105 * OS1_S1 + 101) =
                prefactor_z * *(b + 105 * OS1_S1 + 67) -
                p_over_q * *(b + 149 * OS1_S1 + 67) +
                one_over_two_q * *(b + 105 * OS1_S1 + 41);
            *(b + 105 * OS1_S1 + 102) =
                prefactor_x * *(b + 105 * OS1_S1 + 74) -
                p_over_q * *(b + 141 * OS1_S1 + 74) +
                one_over_two_q * *(b + 77 * OS1_S1 + 74) +
                one_over_two_q * *(b + 105 * OS1_S1 + 53);
            *(b + 105 * OS1_S1 + 103) =
                prefactor_y * *(b + 105 * OS1_S1 + 70) -
                p_over_q * *(b + 148 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 70);
            *(b + 105 * OS1_S1 + 104) =
                prefactor_x * *(b + 105 * OS1_S1 + 76) -
                p_over_q * *(b + 141 * OS1_S1 + 76) +
                one_over_two_q * *(b + 77 * OS1_S1 + 76) +
                one_over_two_q * *(b + 105 * OS1_S1 + 55);
            *(b + 105 * OS1_S1 + 105) =
                prefactor_x * *(b + 105 * OS1_S1 + 77) -
                p_over_q * *(b + 141 * OS1_S1 + 77) +
                one_over_two_q * *(b + 77 * OS1_S1 + 77);
            *(b + 105 * OS1_S1 + 106) = prefactor_z * *(b + 105 * OS1_S1 + 71) -
                                        p_over_q * *(b + 149 * OS1_S1 + 71);
            *(b + 105 * OS1_S1 + 107) =
                prefactor_x * *(b + 105 * OS1_S1 + 79) -
                p_over_q * *(b + 141 * OS1_S1 + 79) +
                one_over_two_q * *(b + 77 * OS1_S1 + 79);
            *(b + 105 * OS1_S1 + 108) =
                prefactor_x * *(b + 105 * OS1_S1 + 80) -
                p_over_q * *(b + 141 * OS1_S1 + 80) +
                one_over_two_q * *(b + 77 * OS1_S1 + 80);
            *(b + 105 * OS1_S1 + 109) =
                prefactor_x * *(b + 105 * OS1_S1 + 81) -
                p_over_q * *(b + 141 * OS1_S1 + 81) +
                one_over_two_q * *(b + 77 * OS1_S1 + 81);
            *(b + 105 * OS1_S1 + 110) =
                prefactor_x * *(b + 105 * OS1_S1 + 82) -
                p_over_q * *(b + 141 * OS1_S1 + 82) +
                one_over_two_q * *(b + 77 * OS1_S1 + 82);
            *(b + 105 * OS1_S1 + 111) =
                prefactor_x * *(b + 105 * OS1_S1 + 83) -
                p_over_q * *(b + 141 * OS1_S1 + 83) +
                one_over_two_q * *(b + 77 * OS1_S1 + 83);
            *(b + 105 * OS1_S1 + 112) =
                prefactor_y * *(b + 105 * OS1_S1 + 77) -
                p_over_q * *(b + 148 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 105 * OS1_S1 + 50);
            *(b + 105 * OS1_S1 + 113) = prefactor_z * *(b + 105 * OS1_S1 + 77) -
                                        p_over_q * *(b + 149 * OS1_S1 + 77);
            *(b + 105 * OS1_S1 + 114) =
                prefactor_z * *(b + 105 * OS1_S1 + 78) -
                p_over_q * *(b + 149 * OS1_S1 + 78) +
                one_over_two_q * *(b + 105 * OS1_S1 + 50);
            *(b + 105 * OS1_S1 + 115) =
                prefactor_z * *(b + 105 * OS1_S1 + 79) -
                p_over_q * *(b + 149 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 51);
            *(b + 105 * OS1_S1 + 116) =
                prefactor_y * *(b + 105 * OS1_S1 + 81) -
                p_over_q * *(b + 148 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 54);
            *(b + 105 * OS1_S1 + 117) =
                prefactor_y * *(b + 105 * OS1_S1 + 82) -
                p_over_q * *(b + 148 * OS1_S1 + 82) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 82) +
                one_over_two_q * *(b + 105 * OS1_S1 + 55);
            *(b + 105 * OS1_S1 + 118) =
                prefactor_y * *(b + 105 * OS1_S1 + 83) -
                p_over_q * *(b + 148 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 83);
            *(b + 105 * OS1_S1 + 119) =
                prefactor_z * *(b + 105 * OS1_S1 + 83) -
                p_over_q * *(b + 149 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 105 * OS1_S1 + 55);
            *(b + 106 * OS1_S1 + 84) =
                prefactor_x * *(b + 106 * OS1_S1 + 56) -
                p_over_q * *(b + 142 * OS1_S1 + 56) +
                one_over_two_q * *(b + 78 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 35);
            *(b + 106 * OS1_S1 + 85) =
                prefactor_y * *(b + 106 * OS1_S1 + 56) -
                p_over_q * *(b + 149 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 56);
            *(b + 106 * OS1_S1 + 86) = prefactor_z * *(b + 106 * OS1_S1 + 56) -
                                       p_over_q * *(b + 150 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 56);
            *(b + 106 * OS1_S1 + 87) =
                prefactor_y * *(b + 106 * OS1_S1 + 57) -
                p_over_q * *(b + 149 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 57) +
                one_over_two_q * *(b + 106 * OS1_S1 + 35);
            *(b + 106 * OS1_S1 + 88) = prefactor_z * *(b + 106 * OS1_S1 + 57) -
                                       p_over_q * *(b + 150 * OS1_S1 + 57) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 57);
            *(b + 106 * OS1_S1 + 89) =
                prefactor_z * *(b + 106 * OS1_S1 + 58) -
                p_over_q * *(b + 150 * OS1_S1 + 58) +
                one_over_two_q * *(b + 71 * OS1_S1 + 58) +
                one_over_two_q * *(b + 106 * OS1_S1 + 35);
            *(b + 106 * OS1_S1 + 90) =
                prefactor_y * *(b + 106 * OS1_S1 + 59) -
                p_over_q * *(b + 149 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 36);
            *(b + 106 * OS1_S1 + 91) = prefactor_z * *(b + 106 * OS1_S1 + 59) -
                                       p_over_q * *(b + 150 * OS1_S1 + 59) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 59);
            *(b + 106 * OS1_S1 + 92) =
                prefactor_y * *(b + 106 * OS1_S1 + 61) -
                p_over_q * *(b + 149 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 61);
            *(b + 106 * OS1_S1 + 93) =
                prefactor_z * *(b + 106 * OS1_S1 + 61) -
                p_over_q * *(b + 150 * OS1_S1 + 61) +
                one_over_two_q * *(b + 71 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 37);
            *(b + 106 * OS1_S1 + 94) =
                prefactor_x * *(b + 106 * OS1_S1 + 66) -
                p_over_q * *(b + 142 * OS1_S1 + 66) +
                one_over_two_q * *(b + 78 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 45);
            *(b + 106 * OS1_S1 + 95) = prefactor_z * *(b + 106 * OS1_S1 + 62) -
                                       p_over_q * *(b + 150 * OS1_S1 + 62) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 62);
            *(b + 106 * OS1_S1 + 96) =
                prefactor_z * *(b + 106 * OS1_S1 + 63) -
                p_over_q * *(b + 150 * OS1_S1 + 63) +
                one_over_two_q * *(b + 71 * OS1_S1 + 63) +
                one_over_two_q * *(b + 106 * OS1_S1 + 38);
            *(b + 106 * OS1_S1 + 97) =
                prefactor_y * *(b + 106 * OS1_S1 + 65) -
                p_over_q * *(b + 149 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 65);
            *(b + 106 * OS1_S1 + 98) =
                prefactor_x * *(b + 106 * OS1_S1 + 70) -
                p_over_q * *(b + 142 * OS1_S1 + 70) +
                one_over_two_q * *(b + 78 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 49);
            *(b + 106 * OS1_S1 + 99) =
                prefactor_x * *(b + 106 * OS1_S1 + 71) -
                p_over_q * *(b + 142 * OS1_S1 + 71) +
                one_over_two_q * *(b + 78 * OS1_S1 + 71) +
                one_over_two_q * *(b + 106 * OS1_S1 + 50);
            *(b + 106 * OS1_S1 + 100) =
                prefactor_z * *(b + 106 * OS1_S1 + 66) -
                p_over_q * *(b + 150 * OS1_S1 + 66) +
                one_over_two_q * *(b + 71 * OS1_S1 + 66);
            *(b + 106 * OS1_S1 + 101) =
                prefactor_z * *(b + 106 * OS1_S1 + 67) -
                p_over_q * *(b + 150 * OS1_S1 + 67) +
                one_over_two_q * *(b + 71 * OS1_S1 + 67) +
                one_over_two_q * *(b + 106 * OS1_S1 + 41);
            *(b + 106 * OS1_S1 + 102) =
                prefactor_x * *(b + 106 * OS1_S1 + 74) -
                p_over_q * *(b + 142 * OS1_S1 + 74) +
                one_over_two_q * *(b + 78 * OS1_S1 + 74) +
                one_over_two_q * *(b + 106 * OS1_S1 + 53);
            *(b + 106 * OS1_S1 + 103) =
                prefactor_y * *(b + 106 * OS1_S1 + 70) -
                p_over_q * *(b + 149 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 70);
            *(b + 106 * OS1_S1 + 104) =
                prefactor_x * *(b + 106 * OS1_S1 + 76) -
                p_over_q * *(b + 142 * OS1_S1 + 76) +
                one_over_two_q * *(b + 78 * OS1_S1 + 76) +
                one_over_two_q * *(b + 106 * OS1_S1 + 55);
            *(b + 106 * OS1_S1 + 105) =
                prefactor_x * *(b + 106 * OS1_S1 + 77) -
                p_over_q * *(b + 142 * OS1_S1 + 77) +
                one_over_two_q * *(b + 78 * OS1_S1 + 77);
            *(b + 106 * OS1_S1 + 106) =
                prefactor_z * *(b + 106 * OS1_S1 + 71) -
                p_over_q * *(b + 150 * OS1_S1 + 71) +
                one_over_two_q * *(b + 71 * OS1_S1 + 71);
            *(b + 106 * OS1_S1 + 107) =
                prefactor_x * *(b + 106 * OS1_S1 + 79) -
                p_over_q * *(b + 142 * OS1_S1 + 79) +
                one_over_two_q * *(b + 78 * OS1_S1 + 79);
            *(b + 106 * OS1_S1 + 108) =
                prefactor_x * *(b + 106 * OS1_S1 + 80) -
                p_over_q * *(b + 142 * OS1_S1 + 80) +
                one_over_two_q * *(b + 78 * OS1_S1 + 80);
            *(b + 106 * OS1_S1 + 109) =
                prefactor_x * *(b + 106 * OS1_S1 + 81) -
                p_over_q * *(b + 142 * OS1_S1 + 81) +
                one_over_two_q * *(b + 78 * OS1_S1 + 81);
            *(b + 106 * OS1_S1 + 110) =
                prefactor_x * *(b + 106 * OS1_S1 + 82) -
                p_over_q * *(b + 142 * OS1_S1 + 82) +
                one_over_two_q * *(b + 78 * OS1_S1 + 82);
            *(b + 106 * OS1_S1 + 111) =
                prefactor_x * *(b + 106 * OS1_S1 + 83) -
                p_over_q * *(b + 142 * OS1_S1 + 83) +
                one_over_two_q * *(b + 78 * OS1_S1 + 83);
            *(b + 106 * OS1_S1 + 112) =
                prefactor_y * *(b + 106 * OS1_S1 + 77) -
                p_over_q * *(b + 149 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 50);
            *(b + 106 * OS1_S1 + 113) =
                prefactor_z * *(b + 106 * OS1_S1 + 77) -
                p_over_q * *(b + 150 * OS1_S1 + 77) +
                one_over_two_q * *(b + 71 * OS1_S1 + 77);
            *(b + 106 * OS1_S1 + 114) =
                prefactor_z * *(b + 106 * OS1_S1 + 78) -
                p_over_q * *(b + 150 * OS1_S1 + 78) +
                one_over_two_q * *(b + 71 * OS1_S1 + 78) +
                one_over_two_q * *(b + 106 * OS1_S1 + 50);
            *(b + 106 * OS1_S1 + 115) =
                prefactor_z * *(b + 106 * OS1_S1 + 79) -
                p_over_q * *(b + 150 * OS1_S1 + 79) +
                one_over_two_q * *(b + 71 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 51);
            *(b + 106 * OS1_S1 + 116) =
                prefactor_y * *(b + 106 * OS1_S1 + 81) -
                p_over_q * *(b + 149 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 54);
            *(b + 106 * OS1_S1 + 117) =
                prefactor_y * *(b + 106 * OS1_S1 + 82) -
                p_over_q * *(b + 149 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 82) +
                one_over_two_q * *(b + 106 * OS1_S1 + 55);
            *(b + 106 * OS1_S1 + 118) =
                prefactor_y * *(b + 106 * OS1_S1 + 83) -
                p_over_q * *(b + 149 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 83);
            *(b + 106 * OS1_S1 + 119) =
                prefactor_z * *(b + 106 * OS1_S1 + 83) -
                p_over_q * *(b + 150 * OS1_S1 + 83) +
                one_over_two_q * *(b + 71 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 55);
            *(b + 107 * OS1_S1 + 84) =
                prefactor_x * *(b + 107 * OS1_S1 + 56) -
                p_over_q * *(b + 143 * OS1_S1 + 56) +
                one_over_two_q * *(b + 79 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 107 * OS1_S1 + 35);
            *(b + 107 * OS1_S1 + 85) =
                prefactor_y * *(b + 107 * OS1_S1 + 56) -
                p_over_q * *(b + 150 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 56);
            *(b + 107 * OS1_S1 + 86) =
                prefactor_z * *(b + 107 * OS1_S1 + 56) -
                p_over_q * *(b + 151 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 56);
            *(b + 107 * OS1_S1 + 87) =
                prefactor_y * *(b + 107 * OS1_S1 + 57) -
                p_over_q * *(b + 150 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 57) +
                one_over_two_q * *(b + 107 * OS1_S1 + 35);
            *(b + 107 * OS1_S1 + 88) =
                prefactor_z * *(b + 107 * OS1_S1 + 57) -
                p_over_q * *(b + 151 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 57);
            *(b + 107 * OS1_S1 + 89) =
                prefactor_z * *(b + 107 * OS1_S1 + 58) -
                p_over_q * *(b + 151 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 58) +
                one_over_two_q * *(b + 107 * OS1_S1 + 35);
            *(b + 107 * OS1_S1 + 90) =
                prefactor_y * *(b + 107 * OS1_S1 + 59) -
                p_over_q * *(b + 150 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 36);
            *(b + 107 * OS1_S1 + 91) =
                prefactor_z * *(b + 107 * OS1_S1 + 59) -
                p_over_q * *(b + 151 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 59);
            *(b + 107 * OS1_S1 + 92) =
                prefactor_y * *(b + 107 * OS1_S1 + 61) -
                p_over_q * *(b + 150 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 61);
            *(b + 107 * OS1_S1 + 93) =
                prefactor_z * *(b + 107 * OS1_S1 + 61) -
                p_over_q * *(b + 151 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 37);
            *(b + 107 * OS1_S1 + 94) =
                prefactor_x * *(b + 107 * OS1_S1 + 66) -
                p_over_q * *(b + 143 * OS1_S1 + 66) +
                one_over_two_q * *(b + 79 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 45);
            *(b + 107 * OS1_S1 + 95) =
                prefactor_z * *(b + 107 * OS1_S1 + 62) -
                p_over_q * *(b + 151 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 62);
            *(b + 107 * OS1_S1 + 96) =
                prefactor_z * *(b + 107 * OS1_S1 + 63) -
                p_over_q * *(b + 151 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 63) +
                one_over_two_q * *(b + 107 * OS1_S1 + 38);
            *(b + 107 * OS1_S1 + 97) =
                prefactor_y * *(b + 107 * OS1_S1 + 65) -
                p_over_q * *(b + 150 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 65);
            *(b + 107 * OS1_S1 + 98) =
                prefactor_x * *(b + 107 * OS1_S1 + 70) -
                p_over_q * *(b + 143 * OS1_S1 + 70) +
                one_over_two_q * *(b + 79 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 49);
            *(b + 107 * OS1_S1 + 99) =
                prefactor_x * *(b + 107 * OS1_S1 + 71) -
                p_over_q * *(b + 143 * OS1_S1 + 71) +
                one_over_two_q * *(b + 79 * OS1_S1 + 71) +
                one_over_two_q * *(b + 107 * OS1_S1 + 50);
            *(b + 107 * OS1_S1 + 100) =
                prefactor_z * *(b + 107 * OS1_S1 + 66) -
                p_over_q * *(b + 151 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 66);
            *(b + 107 * OS1_S1 + 101) =
                prefactor_x * *(b + 107 * OS1_S1 + 73) -
                p_over_q * *(b + 143 * OS1_S1 + 73) +
                one_over_two_q * *(b + 79 * OS1_S1 + 73) +
                one_over_two_q * *(b + 107 * OS1_S1 + 52);
            *(b + 107 * OS1_S1 + 102) =
                prefactor_x * *(b + 107 * OS1_S1 + 74) -
                p_over_q * *(b + 143 * OS1_S1 + 74) +
                one_over_two_q * *(b + 79 * OS1_S1 + 74) +
                one_over_two_q * *(b + 107 * OS1_S1 + 53);
            *(b + 107 * OS1_S1 + 103) =
                prefactor_y * *(b + 107 * OS1_S1 + 70) -
                p_over_q * *(b + 150 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 70);
            *(b + 107 * OS1_S1 + 104) =
                prefactor_x * *(b + 107 * OS1_S1 + 76) -
                p_over_q * *(b + 143 * OS1_S1 + 76) +
                one_over_two_q * *(b + 79 * OS1_S1 + 76) +
                one_over_two_q * *(b + 107 * OS1_S1 + 55);
            *(b + 107 * OS1_S1 + 105) =
                prefactor_x * *(b + 107 * OS1_S1 + 77) -
                p_over_q * *(b + 143 * OS1_S1 + 77) +
                one_over_two_q * *(b + 79 * OS1_S1 + 77);
            *(b + 107 * OS1_S1 + 106) =
                prefactor_x * *(b + 107 * OS1_S1 + 78) -
                p_over_q * *(b + 143 * OS1_S1 + 78) +
                one_over_two_q * *(b + 79 * OS1_S1 + 78);
            *(b + 107 * OS1_S1 + 107) =
                prefactor_x * *(b + 107 * OS1_S1 + 79) -
                p_over_q * *(b + 143 * OS1_S1 + 79) +
                one_over_two_q * *(b + 79 * OS1_S1 + 79);
            *(b + 107 * OS1_S1 + 108) =
                prefactor_x * *(b + 107 * OS1_S1 + 80) -
                p_over_q * *(b + 143 * OS1_S1 + 80) +
                one_over_two_q * *(b + 79 * OS1_S1 + 80);
            *(b + 107 * OS1_S1 + 109) =
                prefactor_x * *(b + 107 * OS1_S1 + 81) -
                p_over_q * *(b + 143 * OS1_S1 + 81) +
                one_over_two_q * *(b + 79 * OS1_S1 + 81);
            *(b + 107 * OS1_S1 + 110) =
                prefactor_x * *(b + 107 * OS1_S1 + 82) -
                p_over_q * *(b + 143 * OS1_S1 + 82) +
                one_over_two_q * *(b + 79 * OS1_S1 + 82);
            *(b + 107 * OS1_S1 + 111) =
                prefactor_x * *(b + 107 * OS1_S1 + 83) -
                p_over_q * *(b + 143 * OS1_S1 + 83) +
                one_over_two_q * *(b + 79 * OS1_S1 + 83);
            *(b + 107 * OS1_S1 + 112) =
                prefactor_y * *(b + 107 * OS1_S1 + 77) -
                p_over_q * *(b + 150 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 107 * OS1_S1 + 50);
            *(b + 107 * OS1_S1 + 113) =
                prefactor_z * *(b + 107 * OS1_S1 + 77) -
                p_over_q * *(b + 151 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 77);
            *(b + 107 * OS1_S1 + 114) =
                prefactor_z * *(b + 107 * OS1_S1 + 78) -
                p_over_q * *(b + 151 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 78) +
                one_over_two_q * *(b + 107 * OS1_S1 + 50);
            *(b + 107 * OS1_S1 + 115) =
                prefactor_z * *(b + 107 * OS1_S1 + 79) -
                p_over_q * *(b + 151 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 51);
            *(b + 107 * OS1_S1 + 116) =
                prefactor_y * *(b + 107 * OS1_S1 + 81) -
                p_over_q * *(b + 150 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 54);
            *(b + 107 * OS1_S1 + 117) =
                prefactor_y * *(b + 107 * OS1_S1 + 82) -
                p_over_q * *(b + 150 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 82) +
                one_over_two_q * *(b + 107 * OS1_S1 + 55);
            *(b + 107 * OS1_S1 + 118) =
                prefactor_y * *(b + 107 * OS1_S1 + 83) -
                p_over_q * *(b + 150 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 83);
            *(b + 107 * OS1_S1 + 119) =
                prefactor_z * *(b + 107 * OS1_S1 + 83) -
                p_over_q * *(b + 151 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 107 * OS1_S1 + 55);
            *(b + 108 * OS1_S1 + 84) =
                prefactor_x * *(b + 108 * OS1_S1 + 56) -
                p_over_q * *(b + 144 * OS1_S1 + 56) +
                one_over_two_q * *(b + 80 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 108 * OS1_S1 + 35);
            *(b + 108 * OS1_S1 + 85) =
                prefactor_y * *(b + 108 * OS1_S1 + 56) -
                p_over_q * *(b + 151 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 56);
            *(b + 108 * OS1_S1 + 86) =
                prefactor_z * *(b + 108 * OS1_S1 + 56) -
                p_over_q * *(b + 152 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 56);
            *(b + 108 * OS1_S1 + 87) =
                prefactor_y * *(b + 108 * OS1_S1 + 57) -
                p_over_q * *(b + 151 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 57) +
                one_over_two_q * *(b + 108 * OS1_S1 + 35);
            *(b + 108 * OS1_S1 + 88) =
                prefactor_z * *(b + 108 * OS1_S1 + 57) -
                p_over_q * *(b + 152 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 57);
            *(b + 108 * OS1_S1 + 89) =
                prefactor_z * *(b + 108 * OS1_S1 + 58) -
                p_over_q * *(b + 152 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 58) +
                one_over_two_q * *(b + 108 * OS1_S1 + 35);
            *(b + 108 * OS1_S1 + 90) =
                prefactor_y * *(b + 108 * OS1_S1 + 59) -
                p_over_q * *(b + 151 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 36);
            *(b + 108 * OS1_S1 + 91) =
                prefactor_z * *(b + 108 * OS1_S1 + 59) -
                p_over_q * *(b + 152 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 59);
            *(b + 108 * OS1_S1 + 92) =
                prefactor_y * *(b + 108 * OS1_S1 + 61) -
                p_over_q * *(b + 151 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 61);
            *(b + 108 * OS1_S1 + 93) =
                prefactor_z * *(b + 108 * OS1_S1 + 61) -
                p_over_q * *(b + 152 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 37);
            *(b + 108 * OS1_S1 + 94) =
                prefactor_x * *(b + 108 * OS1_S1 + 66) -
                p_over_q * *(b + 144 * OS1_S1 + 66) +
                one_over_two_q * *(b + 80 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 45);
            *(b + 108 * OS1_S1 + 95) =
                prefactor_z * *(b + 108 * OS1_S1 + 62) -
                p_over_q * *(b + 152 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 62);
            *(b + 108 * OS1_S1 + 96) =
                prefactor_z * *(b + 108 * OS1_S1 + 63) -
                p_over_q * *(b + 152 * OS1_S1 + 63) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 63) +
                one_over_two_q * *(b + 108 * OS1_S1 + 38);
            *(b + 108 * OS1_S1 + 97) =
                prefactor_y * *(b + 108 * OS1_S1 + 65) -
                p_over_q * *(b + 151 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 65);
            *(b + 108 * OS1_S1 + 98) =
                prefactor_x * *(b + 108 * OS1_S1 + 70) -
                p_over_q * *(b + 144 * OS1_S1 + 70) +
                one_over_two_q * *(b + 80 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 49);
            *(b + 108 * OS1_S1 + 99) =
                prefactor_x * *(b + 108 * OS1_S1 + 71) -
                p_over_q * *(b + 144 * OS1_S1 + 71) +
                one_over_two_q * *(b + 80 * OS1_S1 + 71) +
                one_over_two_q * *(b + 108 * OS1_S1 + 50);
            *(b + 108 * OS1_S1 + 100) =
                prefactor_z * *(b + 108 * OS1_S1 + 66) -
                p_over_q * *(b + 152 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 66);
            *(b + 108 * OS1_S1 + 101) =
                prefactor_x * *(b + 108 * OS1_S1 + 73) -
                p_over_q * *(b + 144 * OS1_S1 + 73) +
                one_over_two_q * *(b + 80 * OS1_S1 + 73) +
                one_over_two_q * *(b + 108 * OS1_S1 + 52);
            *(b + 108 * OS1_S1 + 102) =
                prefactor_x * *(b + 108 * OS1_S1 + 74) -
                p_over_q * *(b + 144 * OS1_S1 + 74) +
                one_over_two_q * *(b + 80 * OS1_S1 + 74) +
                one_over_two_q * *(b + 108 * OS1_S1 + 53);
            *(b + 108 * OS1_S1 + 103) =
                prefactor_y * *(b + 108 * OS1_S1 + 70) -
                p_over_q * *(b + 151 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 70);
            *(b + 108 * OS1_S1 + 104) =
                prefactor_x * *(b + 108 * OS1_S1 + 76) -
                p_over_q * *(b + 144 * OS1_S1 + 76) +
                one_over_two_q * *(b + 80 * OS1_S1 + 76) +
                one_over_two_q * *(b + 108 * OS1_S1 + 55);
            *(b + 108 * OS1_S1 + 105) =
                prefactor_x * *(b + 108 * OS1_S1 + 77) -
                p_over_q * *(b + 144 * OS1_S1 + 77) +
                one_over_two_q * *(b + 80 * OS1_S1 + 77);
            *(b + 108 * OS1_S1 + 106) =
                prefactor_x * *(b + 108 * OS1_S1 + 78) -
                p_over_q * *(b + 144 * OS1_S1 + 78) +
                one_over_two_q * *(b + 80 * OS1_S1 + 78);
            *(b + 108 * OS1_S1 + 107) =
                prefactor_x * *(b + 108 * OS1_S1 + 79) -
                p_over_q * *(b + 144 * OS1_S1 + 79) +
                one_over_two_q * *(b + 80 * OS1_S1 + 79);
            *(b + 108 * OS1_S1 + 108) =
                prefactor_x * *(b + 108 * OS1_S1 + 80) -
                p_over_q * *(b + 144 * OS1_S1 + 80) +
                one_over_two_q * *(b + 80 * OS1_S1 + 80);
            *(b + 108 * OS1_S1 + 109) =
                prefactor_x * *(b + 108 * OS1_S1 + 81) -
                p_over_q * *(b + 144 * OS1_S1 + 81) +
                one_over_two_q * *(b + 80 * OS1_S1 + 81);
            *(b + 108 * OS1_S1 + 110) =
                prefactor_x * *(b + 108 * OS1_S1 + 82) -
                p_over_q * *(b + 144 * OS1_S1 + 82) +
                one_over_two_q * *(b + 80 * OS1_S1 + 82);
            *(b + 108 * OS1_S1 + 111) =
                prefactor_x * *(b + 108 * OS1_S1 + 83) -
                p_over_q * *(b + 144 * OS1_S1 + 83) +
                one_over_two_q * *(b + 80 * OS1_S1 + 83);
            *(b + 108 * OS1_S1 + 112) =
                prefactor_y * *(b + 108 * OS1_S1 + 77) -
                p_over_q * *(b + 151 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 108 * OS1_S1 + 50);
            *(b + 108 * OS1_S1 + 113) =
                prefactor_z * *(b + 108 * OS1_S1 + 77) -
                p_over_q * *(b + 152 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 77);
            *(b + 108 * OS1_S1 + 114) =
                prefactor_z * *(b + 108 * OS1_S1 + 78) -
                p_over_q * *(b + 152 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 78) +
                one_over_two_q * *(b + 108 * OS1_S1 + 50);
            *(b + 108 * OS1_S1 + 115) =
                prefactor_z * *(b + 108 * OS1_S1 + 79) -
                p_over_q * *(b + 152 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 51);
            *(b + 108 * OS1_S1 + 116) =
                prefactor_y * *(b + 108 * OS1_S1 + 81) -
                p_over_q * *(b + 151 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 54);
            *(b + 108 * OS1_S1 + 117) =
                prefactor_y * *(b + 108 * OS1_S1 + 82) -
                p_over_q * *(b + 151 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 82) +
                one_over_two_q * *(b + 108 * OS1_S1 + 55);
            *(b + 108 * OS1_S1 + 118) =
                prefactor_y * *(b + 108 * OS1_S1 + 83) -
                p_over_q * *(b + 151 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 83);
            *(b + 108 * OS1_S1 + 119) =
                prefactor_z * *(b + 108 * OS1_S1 + 83) -
                p_over_q * *(b + 152 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 108 * OS1_S1 + 55);
            *(b + 109 * OS1_S1 + 84) =
                prefactor_x * *(b + 109 * OS1_S1 + 56) -
                p_over_q * *(b + 145 * OS1_S1 + 56) +
                one_over_two_q * *(b + 81 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 109 * OS1_S1 + 35);
            *(b + 109 * OS1_S1 + 85) =
                prefactor_y * *(b + 109 * OS1_S1 + 56) -
                p_over_q * *(b + 152 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 56);
            *(b + 109 * OS1_S1 + 86) =
                prefactor_z * *(b + 109 * OS1_S1 + 56) -
                p_over_q * *(b + 153 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 56);
            *(b + 109 * OS1_S1 + 87) =
                prefactor_y * *(b + 109 * OS1_S1 + 57) -
                p_over_q * *(b + 152 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 57) +
                one_over_two_q * *(b + 109 * OS1_S1 + 35);
            *(b + 109 * OS1_S1 + 88) =
                prefactor_y * *(b + 109 * OS1_S1 + 58) -
                p_over_q * *(b + 152 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 58);
            *(b + 109 * OS1_S1 + 89) =
                prefactor_z * *(b + 109 * OS1_S1 + 58) -
                p_over_q * *(b + 153 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 58) +
                one_over_two_q * *(b + 109 * OS1_S1 + 35);
            *(b + 109 * OS1_S1 + 90) =
                prefactor_y * *(b + 109 * OS1_S1 + 59) -
                p_over_q * *(b + 152 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 36);
            *(b + 109 * OS1_S1 + 91) =
                prefactor_z * *(b + 109 * OS1_S1 + 59) -
                p_over_q * *(b + 153 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 59);
            *(b + 109 * OS1_S1 + 92) =
                prefactor_y * *(b + 109 * OS1_S1 + 61) -
                p_over_q * *(b + 152 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 61);
            *(b + 109 * OS1_S1 + 93) =
                prefactor_z * *(b + 109 * OS1_S1 + 61) -
                p_over_q * *(b + 153 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 37);
            *(b + 109 * OS1_S1 + 94) =
                prefactor_x * *(b + 109 * OS1_S1 + 66) -
                p_over_q * *(b + 145 * OS1_S1 + 66) +
                one_over_two_q * *(b + 81 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 45);
            *(b + 109 * OS1_S1 + 95) =
                prefactor_z * *(b + 109 * OS1_S1 + 62) -
                p_over_q * *(b + 153 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 62);
            *(b + 109 * OS1_S1 + 96) =
                prefactor_y * *(b + 109 * OS1_S1 + 64) -
                p_over_q * *(b + 152 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 64) +
                one_over_two_q * *(b + 109 * OS1_S1 + 40);
            *(b + 109 * OS1_S1 + 97) =
                prefactor_y * *(b + 109 * OS1_S1 + 65) -
                p_over_q * *(b + 152 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 65);
            *(b + 109 * OS1_S1 + 98) =
                prefactor_x * *(b + 109 * OS1_S1 + 70) -
                p_over_q * *(b + 145 * OS1_S1 + 70) +
                one_over_two_q * *(b + 81 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 49);
            *(b + 109 * OS1_S1 + 99) =
                prefactor_x * *(b + 109 * OS1_S1 + 71) -
                p_over_q * *(b + 145 * OS1_S1 + 71) +
                one_over_two_q * *(b + 81 * OS1_S1 + 71) +
                one_over_two_q * *(b + 109 * OS1_S1 + 50);
            *(b + 109 * OS1_S1 + 100) =
                prefactor_z * *(b + 109 * OS1_S1 + 66) -
                p_over_q * *(b + 153 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 66);
            *(b + 109 * OS1_S1 + 101) =
                prefactor_x * *(b + 109 * OS1_S1 + 73) -
                p_over_q * *(b + 145 * OS1_S1 + 73) +
                one_over_two_q * *(b + 81 * OS1_S1 + 73) +
                one_over_two_q * *(b + 109 * OS1_S1 + 52);
            *(b + 109 * OS1_S1 + 102) =
                prefactor_x * *(b + 109 * OS1_S1 + 74) -
                p_over_q * *(b + 145 * OS1_S1 + 74) +
                one_over_two_q * *(b + 81 * OS1_S1 + 74) +
                one_over_two_q * *(b + 109 * OS1_S1 + 53);
            *(b + 109 * OS1_S1 + 103) =
                prefactor_y * *(b + 109 * OS1_S1 + 70) -
                p_over_q * *(b + 152 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 70);
            *(b + 109 * OS1_S1 + 104) =
                prefactor_x * *(b + 109 * OS1_S1 + 76) -
                p_over_q * *(b + 145 * OS1_S1 + 76) +
                one_over_two_q * *(b + 81 * OS1_S1 + 76) +
                one_over_two_q * *(b + 109 * OS1_S1 + 55);
            *(b + 109 * OS1_S1 + 105) =
                prefactor_x * *(b + 109 * OS1_S1 + 77) -
                p_over_q * *(b + 145 * OS1_S1 + 77) +
                one_over_two_q * *(b + 81 * OS1_S1 + 77);
            *(b + 109 * OS1_S1 + 106) =
                prefactor_x * *(b + 109 * OS1_S1 + 78) -
                p_over_q * *(b + 145 * OS1_S1 + 78) +
                one_over_two_q * *(b + 81 * OS1_S1 + 78);
            *(b + 109 * OS1_S1 + 107) =
                prefactor_x * *(b + 109 * OS1_S1 + 79) -
                p_over_q * *(b + 145 * OS1_S1 + 79) +
                one_over_two_q * *(b + 81 * OS1_S1 + 79);
            *(b + 109 * OS1_S1 + 108) =
                prefactor_x * *(b + 109 * OS1_S1 + 80) -
                p_over_q * *(b + 145 * OS1_S1 + 80) +
                one_over_two_q * *(b + 81 * OS1_S1 + 80);
            *(b + 109 * OS1_S1 + 109) =
                prefactor_x * *(b + 109 * OS1_S1 + 81) -
                p_over_q * *(b + 145 * OS1_S1 + 81) +
                one_over_two_q * *(b + 81 * OS1_S1 + 81);
            *(b + 109 * OS1_S1 + 110) =
                prefactor_x * *(b + 109 * OS1_S1 + 82) -
                p_over_q * *(b + 145 * OS1_S1 + 82) +
                one_over_two_q * *(b + 81 * OS1_S1 + 82);
            *(b + 109 * OS1_S1 + 111) =
                prefactor_x * *(b + 109 * OS1_S1 + 83) -
                p_over_q * *(b + 145 * OS1_S1 + 83) +
                one_over_two_q * *(b + 81 * OS1_S1 + 83);
            *(b + 109 * OS1_S1 + 112) =
                prefactor_y * *(b + 109 * OS1_S1 + 77) -
                p_over_q * *(b + 152 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 109 * OS1_S1 + 50);
            *(b + 109 * OS1_S1 + 113) =
                prefactor_z * *(b + 109 * OS1_S1 + 77) -
                p_over_q * *(b + 153 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 77);
            *(b + 109 * OS1_S1 + 114) =
                prefactor_z * *(b + 109 * OS1_S1 + 78) -
                p_over_q * *(b + 153 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 78) +
                one_over_two_q * *(b + 109 * OS1_S1 + 50);
            *(b + 109 * OS1_S1 + 115) =
                prefactor_z * *(b + 109 * OS1_S1 + 79) -
                p_over_q * *(b + 153 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 51);
            *(b + 109 * OS1_S1 + 116) =
                prefactor_y * *(b + 109 * OS1_S1 + 81) -
                p_over_q * *(b + 152 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 54);
            *(b + 109 * OS1_S1 + 117) =
                prefactor_y * *(b + 109 * OS1_S1 + 82) -
                p_over_q * *(b + 152 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 82) +
                one_over_two_q * *(b + 109 * OS1_S1 + 55);
            *(b + 109 * OS1_S1 + 118) =
                prefactor_y * *(b + 109 * OS1_S1 + 83) -
                p_over_q * *(b + 152 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 83);
            *(b + 109 * OS1_S1 + 119) =
                prefactor_z * *(b + 109 * OS1_S1 + 83) -
                p_over_q * *(b + 153 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 109 * OS1_S1 + 55);
            *(b + 110 * OS1_S1 + 84) =
                prefactor_x * *(b + 110 * OS1_S1 + 56) -
                p_over_q * *(b + 146 * OS1_S1 + 56) +
                one_over_two_q * *(b + 82 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 35);
            *(b + 110 * OS1_S1 + 85) = prefactor_y * *(b + 110 * OS1_S1 + 56) -
                                       p_over_q * *(b + 153 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 56);
            *(b + 110 * OS1_S1 + 86) =
                prefactor_z * *(b + 110 * OS1_S1 + 56) -
                p_over_q * *(b + 154 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 56);
            *(b + 110 * OS1_S1 + 87) =
                prefactor_y * *(b + 110 * OS1_S1 + 57) -
                p_over_q * *(b + 153 * OS1_S1 + 57) +
                one_over_two_q * *(b + 76 * OS1_S1 + 57) +
                one_over_two_q * *(b + 110 * OS1_S1 + 35);
            *(b + 110 * OS1_S1 + 88) = prefactor_y * *(b + 110 * OS1_S1 + 58) -
                                       p_over_q * *(b + 153 * OS1_S1 + 58) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 58);
            *(b + 110 * OS1_S1 + 89) =
                prefactor_z * *(b + 110 * OS1_S1 + 58) -
                p_over_q * *(b + 154 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 58) +
                one_over_two_q * *(b + 110 * OS1_S1 + 35);
            *(b + 110 * OS1_S1 + 90) =
                prefactor_y * *(b + 110 * OS1_S1 + 59) -
                p_over_q * *(b + 153 * OS1_S1 + 59) +
                one_over_two_q * *(b + 76 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 36);
            *(b + 110 * OS1_S1 + 91) =
                prefactor_z * *(b + 110 * OS1_S1 + 59) -
                p_over_q * *(b + 154 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 59);
            *(b + 110 * OS1_S1 + 92) = prefactor_y * *(b + 110 * OS1_S1 + 61) -
                                       p_over_q * *(b + 153 * OS1_S1 + 61) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 61);
            *(b + 110 * OS1_S1 + 93) =
                prefactor_z * *(b + 110 * OS1_S1 + 61) -
                p_over_q * *(b + 154 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 37);
            *(b + 110 * OS1_S1 + 94) =
                prefactor_x * *(b + 110 * OS1_S1 + 66) -
                p_over_q * *(b + 146 * OS1_S1 + 66) +
                one_over_two_q * *(b + 82 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 45);
            *(b + 110 * OS1_S1 + 95) =
                prefactor_z * *(b + 110 * OS1_S1 + 62) -
                p_over_q * *(b + 154 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 62);
            *(b + 110 * OS1_S1 + 96) =
                prefactor_y * *(b + 110 * OS1_S1 + 64) -
                p_over_q * *(b + 153 * OS1_S1 + 64) +
                one_over_two_q * *(b + 76 * OS1_S1 + 64) +
                one_over_two_q * *(b + 110 * OS1_S1 + 40);
            *(b + 110 * OS1_S1 + 97) = prefactor_y * *(b + 110 * OS1_S1 + 65) -
                                       p_over_q * *(b + 153 * OS1_S1 + 65) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 65);
            *(b + 110 * OS1_S1 + 98) =
                prefactor_x * *(b + 110 * OS1_S1 + 70) -
                p_over_q * *(b + 146 * OS1_S1 + 70) +
                one_over_two_q * *(b + 82 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 49);
            *(b + 110 * OS1_S1 + 99) =
                prefactor_x * *(b + 110 * OS1_S1 + 71) -
                p_over_q * *(b + 146 * OS1_S1 + 71) +
                one_over_two_q * *(b + 82 * OS1_S1 + 71) +
                one_over_two_q * *(b + 110 * OS1_S1 + 50);
            *(b + 110 * OS1_S1 + 100) =
                prefactor_z * *(b + 110 * OS1_S1 + 66) -
                p_over_q * *(b + 154 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 66);
            *(b + 110 * OS1_S1 + 101) =
                prefactor_x * *(b + 110 * OS1_S1 + 73) -
                p_over_q * *(b + 146 * OS1_S1 + 73) +
                one_over_two_q * *(b + 82 * OS1_S1 + 73) +
                one_over_two_q * *(b + 110 * OS1_S1 + 52);
            *(b + 110 * OS1_S1 + 102) =
                prefactor_y * *(b + 110 * OS1_S1 + 69) -
                p_over_q * *(b + 153 * OS1_S1 + 69) +
                one_over_two_q * *(b + 76 * OS1_S1 + 69) +
                one_over_two_q * *(b + 110 * OS1_S1 + 44);
            *(b + 110 * OS1_S1 + 103) =
                prefactor_y * *(b + 110 * OS1_S1 + 70) -
                p_over_q * *(b + 153 * OS1_S1 + 70) +
                one_over_two_q * *(b + 76 * OS1_S1 + 70);
            *(b + 110 * OS1_S1 + 104) =
                prefactor_x * *(b + 110 * OS1_S1 + 76) -
                p_over_q * *(b + 146 * OS1_S1 + 76) +
                one_over_two_q * *(b + 82 * OS1_S1 + 76) +
                one_over_two_q * *(b + 110 * OS1_S1 + 55);
            *(b + 110 * OS1_S1 + 105) =
                prefactor_x * *(b + 110 * OS1_S1 + 77) -
                p_over_q * *(b + 146 * OS1_S1 + 77) +
                one_over_two_q * *(b + 82 * OS1_S1 + 77);
            *(b + 110 * OS1_S1 + 106) =
                prefactor_x * *(b + 110 * OS1_S1 + 78) -
                p_over_q * *(b + 146 * OS1_S1 + 78) +
                one_over_two_q * *(b + 82 * OS1_S1 + 78);
            *(b + 110 * OS1_S1 + 107) =
                prefactor_x * *(b + 110 * OS1_S1 + 79) -
                p_over_q * *(b + 146 * OS1_S1 + 79) +
                one_over_two_q * *(b + 82 * OS1_S1 + 79);
            *(b + 110 * OS1_S1 + 108) =
                prefactor_x * *(b + 110 * OS1_S1 + 80) -
                p_over_q * *(b + 146 * OS1_S1 + 80) +
                one_over_two_q * *(b + 82 * OS1_S1 + 80);
            *(b + 110 * OS1_S1 + 109) =
                prefactor_x * *(b + 110 * OS1_S1 + 81) -
                p_over_q * *(b + 146 * OS1_S1 + 81) +
                one_over_two_q * *(b + 82 * OS1_S1 + 81);
            *(b + 110 * OS1_S1 + 110) =
                prefactor_y * *(b + 110 * OS1_S1 + 76) -
                p_over_q * *(b + 153 * OS1_S1 + 76) +
                one_over_two_q * *(b + 76 * OS1_S1 + 76);
            *(b + 110 * OS1_S1 + 111) =
                prefactor_x * *(b + 110 * OS1_S1 + 83) -
                p_over_q * *(b + 146 * OS1_S1 + 83) +
                one_over_two_q * *(b + 82 * OS1_S1 + 83);
            *(b + 110 * OS1_S1 + 112) =
                prefactor_y * *(b + 110 * OS1_S1 + 77) -
                p_over_q * *(b + 153 * OS1_S1 + 77) +
                one_over_two_q * *(b + 76 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 50);
            *(b + 110 * OS1_S1 + 113) =
                prefactor_z * *(b + 110 * OS1_S1 + 77) -
                p_over_q * *(b + 154 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 77);
            *(b + 110 * OS1_S1 + 114) =
                prefactor_z * *(b + 110 * OS1_S1 + 78) -
                p_over_q * *(b + 154 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 78) +
                one_over_two_q * *(b + 110 * OS1_S1 + 50);
            *(b + 110 * OS1_S1 + 115) =
                prefactor_z * *(b + 110 * OS1_S1 + 79) -
                p_over_q * *(b + 154 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 51);
            *(b + 110 * OS1_S1 + 116) =
                prefactor_y * *(b + 110 * OS1_S1 + 81) -
                p_over_q * *(b + 153 * OS1_S1 + 81) +
                one_over_two_q * *(b + 76 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 54);
            *(b + 110 * OS1_S1 + 117) =
                prefactor_y * *(b + 110 * OS1_S1 + 82) -
                p_over_q * *(b + 153 * OS1_S1 + 82) +
                one_over_two_q * *(b + 76 * OS1_S1 + 82) +
                one_over_two_q * *(b + 110 * OS1_S1 + 55);
            *(b + 110 * OS1_S1 + 118) =
                prefactor_y * *(b + 110 * OS1_S1 + 83) -
                p_over_q * *(b + 153 * OS1_S1 + 83) +
                one_over_two_q * *(b + 76 * OS1_S1 + 83);
            *(b + 110 * OS1_S1 + 119) =
                prefactor_z * *(b + 110 * OS1_S1 + 83) -
                p_over_q * *(b + 154 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 55);
            *(b + 111 * OS1_S1 + 84) =
                prefactor_x * *(b + 111 * OS1_S1 + 56) -
                p_over_q * *(b + 147 * OS1_S1 + 56) +
                one_over_two_q * *(b + 83 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 111 * OS1_S1 + 35);
            *(b + 111 * OS1_S1 + 85) = prefactor_y * *(b + 111 * OS1_S1 + 56) -
                                       p_over_q * *(b + 154 * OS1_S1 + 56);
            *(b + 111 * OS1_S1 + 86) =
                prefactor_z * *(b + 111 * OS1_S1 + 56) -
                p_over_q * *(b + 155 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 56);
            *(b + 111 * OS1_S1 + 87) =
                prefactor_y * *(b + 111 * OS1_S1 + 57) -
                p_over_q * *(b + 154 * OS1_S1 + 57) +
                one_over_two_q * *(b + 111 * OS1_S1 + 35);
            *(b + 111 * OS1_S1 + 88) = prefactor_y * *(b + 111 * OS1_S1 + 58) -
                                       p_over_q * *(b + 154 * OS1_S1 + 58);
            *(b + 111 * OS1_S1 + 89) =
                prefactor_z * *(b + 111 * OS1_S1 + 58) -
                p_over_q * *(b + 155 * OS1_S1 + 58) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 58) +
                one_over_two_q * *(b + 111 * OS1_S1 + 35);
            *(b + 111 * OS1_S1 + 90) =
                prefactor_y * *(b + 111 * OS1_S1 + 59) -
                p_over_q * *(b + 154 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 36);
            *(b + 111 * OS1_S1 + 91) =
                prefactor_z * *(b + 111 * OS1_S1 + 59) -
                p_over_q * *(b + 155 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 59);
            *(b + 111 * OS1_S1 + 92) = prefactor_y * *(b + 111 * OS1_S1 + 61) -
                                       p_over_q * *(b + 154 * OS1_S1 + 61);
            *(b + 111 * OS1_S1 + 93) =
                prefactor_z * *(b + 111 * OS1_S1 + 61) -
                p_over_q * *(b + 155 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 37);
            *(b + 111 * OS1_S1 + 94) =
                prefactor_x * *(b + 111 * OS1_S1 + 66) -
                p_over_q * *(b + 147 * OS1_S1 + 66) +
                one_over_two_q * *(b + 83 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 45);
            *(b + 111 * OS1_S1 + 95) =
                prefactor_z * *(b + 111 * OS1_S1 + 62) -
                p_over_q * *(b + 155 * OS1_S1 + 62) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 62);
            *(b + 111 * OS1_S1 + 96) =
                prefactor_y * *(b + 111 * OS1_S1 + 64) -
                p_over_q * *(b + 154 * OS1_S1 + 64) +
                one_over_two_q * *(b + 111 * OS1_S1 + 40);
            *(b + 111 * OS1_S1 + 97) = prefactor_y * *(b + 111 * OS1_S1 + 65) -
                                       p_over_q * *(b + 154 * OS1_S1 + 65);
            *(b + 111 * OS1_S1 + 98) =
                prefactor_x * *(b + 111 * OS1_S1 + 70) -
                p_over_q * *(b + 147 * OS1_S1 + 70) +
                one_over_two_q * *(b + 83 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 49);
            *(b + 111 * OS1_S1 + 99) =
                prefactor_x * *(b + 111 * OS1_S1 + 71) -
                p_over_q * *(b + 147 * OS1_S1 + 71) +
                one_over_two_q * *(b + 83 * OS1_S1 + 71) +
                one_over_two_q * *(b + 111 * OS1_S1 + 50);
            *(b + 111 * OS1_S1 + 100) =
                prefactor_z * *(b + 111 * OS1_S1 + 66) -
                p_over_q * *(b + 155 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 66);
            *(b + 111 * OS1_S1 + 101) =
                prefactor_x * *(b + 111 * OS1_S1 + 73) -
                p_over_q * *(b + 147 * OS1_S1 + 73) +
                one_over_two_q * *(b + 83 * OS1_S1 + 73) +
                one_over_two_q * *(b + 111 * OS1_S1 + 52);
            *(b + 111 * OS1_S1 + 102) =
                prefactor_y * *(b + 111 * OS1_S1 + 69) -
                p_over_q * *(b + 154 * OS1_S1 + 69) +
                one_over_two_q * *(b + 111 * OS1_S1 + 44);
            *(b + 111 * OS1_S1 + 103) = prefactor_y * *(b + 111 * OS1_S1 + 70) -
                                        p_over_q * *(b + 154 * OS1_S1 + 70);
            *(b + 111 * OS1_S1 + 104) =
                prefactor_x * *(b + 111 * OS1_S1 + 76) -
                p_over_q * *(b + 147 * OS1_S1 + 76) +
                one_over_two_q * *(b + 83 * OS1_S1 + 76) +
                one_over_two_q * *(b + 111 * OS1_S1 + 55);
            *(b + 111 * OS1_S1 + 105) =
                prefactor_x * *(b + 111 * OS1_S1 + 77) -
                p_over_q * *(b + 147 * OS1_S1 + 77) +
                one_over_two_q * *(b + 83 * OS1_S1 + 77);
            *(b + 111 * OS1_S1 + 106) =
                prefactor_x * *(b + 111 * OS1_S1 + 78) -
                p_over_q * *(b + 147 * OS1_S1 + 78) +
                one_over_two_q * *(b + 83 * OS1_S1 + 78);
            *(b + 111 * OS1_S1 + 107) =
                prefactor_x * *(b + 111 * OS1_S1 + 79) -
                p_over_q * *(b + 147 * OS1_S1 + 79) +
                one_over_two_q * *(b + 83 * OS1_S1 + 79);
            *(b + 111 * OS1_S1 + 108) =
                prefactor_x * *(b + 111 * OS1_S1 + 80) -
                p_over_q * *(b + 147 * OS1_S1 + 80) +
                one_over_two_q * *(b + 83 * OS1_S1 + 80);
            *(b + 111 * OS1_S1 + 109) =
                prefactor_x * *(b + 111 * OS1_S1 + 81) -
                p_over_q * *(b + 147 * OS1_S1 + 81) +
                one_over_two_q * *(b + 83 * OS1_S1 + 81);
            *(b + 111 * OS1_S1 + 110) = prefactor_y * *(b + 111 * OS1_S1 + 76) -
                                        p_over_q * *(b + 154 * OS1_S1 + 76);
            *(b + 111 * OS1_S1 + 111) =
                prefactor_x * *(b + 111 * OS1_S1 + 83) -
                p_over_q * *(b + 147 * OS1_S1 + 83) +
                one_over_two_q * *(b + 83 * OS1_S1 + 83);
            *(b + 111 * OS1_S1 + 112) =
                prefactor_y * *(b + 111 * OS1_S1 + 77) -
                p_over_q * *(b + 154 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 111 * OS1_S1 + 50);
            *(b + 111 * OS1_S1 + 113) =
                prefactor_z * *(b + 111 * OS1_S1 + 77) -
                p_over_q * *(b + 155 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 77);
            *(b + 111 * OS1_S1 + 114) =
                prefactor_z * *(b + 111 * OS1_S1 + 78) -
                p_over_q * *(b + 155 * OS1_S1 + 78) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 78) +
                one_over_two_q * *(b + 111 * OS1_S1 + 50);
            *(b + 111 * OS1_S1 + 115) =
                prefactor_z * *(b + 111 * OS1_S1 + 79) -
                p_over_q * *(b + 155 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 51);
            *(b + 111 * OS1_S1 + 116) =
                prefactor_y * *(b + 111 * OS1_S1 + 81) -
                p_over_q * *(b + 154 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 54);
            *(b + 111 * OS1_S1 + 117) =
                prefactor_y * *(b + 111 * OS1_S1 + 82) -
                p_over_q * *(b + 154 * OS1_S1 + 82) +
                one_over_two_q * *(b + 111 * OS1_S1 + 55);
            *(b + 111 * OS1_S1 + 118) = prefactor_y * *(b + 111 * OS1_S1 + 83) -
                                        p_over_q * *(b + 154 * OS1_S1 + 83);
            *(b + 111 * OS1_S1 + 119) =
                prefactor_z * *(b + 111 * OS1_S1 + 83) -
                p_over_q * *(b + 155 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 111 * OS1_S1 + 55);
            *(b + 112 * OS1_S1 + 84) =
                prefactor_x * *(b + 112 * OS1_S1 + 56) -
                p_over_q * *(b + 148 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 112 * OS1_S1 + 35);
            *(b + 112 * OS1_S1 + 85) =
                prefactor_y * *(b + 112 * OS1_S1 + 56) -
                p_over_q * *(b + 156 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 56);
            *(b + 112 * OS1_S1 + 86) = prefactor_z * *(b + 112 * OS1_S1 + 56) -
                                       p_over_q * *(b + 157 * OS1_S1 + 56);
            *(b + 112 * OS1_S1 + 87) =
                prefactor_y * *(b + 112 * OS1_S1 + 57) -
                p_over_q * *(b + 156 * OS1_S1 + 57) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 57) +
                one_over_two_q * *(b + 112 * OS1_S1 + 35);
            *(b + 112 * OS1_S1 + 88) = prefactor_z * *(b + 112 * OS1_S1 + 57) -
                                       p_over_q * *(b + 157 * OS1_S1 + 57);
            *(b + 112 * OS1_S1 + 89) =
                prefactor_z * *(b + 112 * OS1_S1 + 58) -
                p_over_q * *(b + 157 * OS1_S1 + 58) +
                one_over_two_q * *(b + 112 * OS1_S1 + 35);
            *(b + 112 * OS1_S1 + 90) =
                prefactor_y * *(b + 112 * OS1_S1 + 59) -
                p_over_q * *(b + 156 * OS1_S1 + 59) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 36);
            *(b + 112 * OS1_S1 + 91) = prefactor_z * *(b + 112 * OS1_S1 + 59) -
                                       p_over_q * *(b + 157 * OS1_S1 + 59);
            *(b + 112 * OS1_S1 + 92) =
                prefactor_y * *(b + 112 * OS1_S1 + 61) -
                p_over_q * *(b + 156 * OS1_S1 + 61) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 61);
            *(b + 112 * OS1_S1 + 93) =
                prefactor_z * *(b + 112 * OS1_S1 + 61) -
                p_over_q * *(b + 157 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 37);
            *(b + 112 * OS1_S1 + 94) =
                prefactor_x * *(b + 112 * OS1_S1 + 66) -
                p_over_q * *(b + 148 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 45);
            *(b + 112 * OS1_S1 + 95) = prefactor_z * *(b + 112 * OS1_S1 + 62) -
                                       p_over_q * *(b + 157 * OS1_S1 + 62);
            *(b + 112 * OS1_S1 + 96) =
                prefactor_z * *(b + 112 * OS1_S1 + 63) -
                p_over_q * *(b + 157 * OS1_S1 + 63) +
                one_over_two_q * *(b + 112 * OS1_S1 + 38);
            *(b + 112 * OS1_S1 + 97) =
                prefactor_y * *(b + 112 * OS1_S1 + 65) -
                p_over_q * *(b + 156 * OS1_S1 + 65) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 65);
            *(b + 112 * OS1_S1 + 98) =
                prefactor_x * *(b + 112 * OS1_S1 + 70) -
                p_over_q * *(b + 148 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 49);
            *(b + 112 * OS1_S1 + 99) =
                prefactor_x * *(b + 112 * OS1_S1 + 71) -
                p_over_q * *(b + 148 * OS1_S1 + 71) +
                one_over_two_q * *(b + 112 * OS1_S1 + 50);
            *(b + 112 * OS1_S1 + 100) = prefactor_z * *(b + 112 * OS1_S1 + 66) -
                                        p_over_q * *(b + 157 * OS1_S1 + 66);
            *(b + 112 * OS1_S1 + 101) =
                prefactor_z * *(b + 112 * OS1_S1 + 67) -
                p_over_q * *(b + 157 * OS1_S1 + 67) +
                one_over_two_q * *(b + 112 * OS1_S1 + 41);
            *(b + 112 * OS1_S1 + 102) =
                prefactor_x * *(b + 112 * OS1_S1 + 74) -
                p_over_q * *(b + 148 * OS1_S1 + 74) +
                one_over_two_q * *(b + 112 * OS1_S1 + 53);
            *(b + 112 * OS1_S1 + 103) =
                prefactor_y * *(b + 112 * OS1_S1 + 70) -
                p_over_q * *(b + 156 * OS1_S1 + 70) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 70);
            *(b + 112 * OS1_S1 + 104) =
                prefactor_x * *(b + 112 * OS1_S1 + 76) -
                p_over_q * *(b + 148 * OS1_S1 + 76) +
                one_over_two_q * *(b + 112 * OS1_S1 + 55);
            *(b + 112 * OS1_S1 + 105) = prefactor_x * *(b + 112 * OS1_S1 + 77) -
                                        p_over_q * *(b + 148 * OS1_S1 + 77);
            *(b + 112 * OS1_S1 + 106) = prefactor_z * *(b + 112 * OS1_S1 + 71) -
                                        p_over_q * *(b + 157 * OS1_S1 + 71);
            *(b + 112 * OS1_S1 + 107) = prefactor_x * *(b + 112 * OS1_S1 + 79) -
                                        p_over_q * *(b + 148 * OS1_S1 + 79);
            *(b + 112 * OS1_S1 + 108) = prefactor_x * *(b + 112 * OS1_S1 + 80) -
                                        p_over_q * *(b + 148 * OS1_S1 + 80);
            *(b + 112 * OS1_S1 + 109) = prefactor_x * *(b + 112 * OS1_S1 + 81) -
                                        p_over_q * *(b + 148 * OS1_S1 + 81);
            *(b + 112 * OS1_S1 + 110) = prefactor_x * *(b + 112 * OS1_S1 + 82) -
                                        p_over_q * *(b + 148 * OS1_S1 + 82);
            *(b + 112 * OS1_S1 + 111) = prefactor_x * *(b + 112 * OS1_S1 + 83) -
                                        p_over_q * *(b + 148 * OS1_S1 + 83);
            *(b + 112 * OS1_S1 + 112) =
                prefactor_y * *(b + 112 * OS1_S1 + 77) -
                p_over_q * *(b + 156 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 112 * OS1_S1 + 50);
            *(b + 112 * OS1_S1 + 113) = prefactor_z * *(b + 112 * OS1_S1 + 77) -
                                        p_over_q * *(b + 157 * OS1_S1 + 77);
            *(b + 112 * OS1_S1 + 114) =
                prefactor_z * *(b + 112 * OS1_S1 + 78) -
                p_over_q * *(b + 157 * OS1_S1 + 78) +
                one_over_two_q * *(b + 112 * OS1_S1 + 50);
            *(b + 112 * OS1_S1 + 115) =
                prefactor_z * *(b + 112 * OS1_S1 + 79) -
                p_over_q * *(b + 157 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 51);
            *(b + 112 * OS1_S1 + 116) =
                prefactor_y * *(b + 112 * OS1_S1 + 81) -
                p_over_q * *(b + 156 * OS1_S1 + 81) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 54);
            *(b + 112 * OS1_S1 + 117) =
                prefactor_y * *(b + 112 * OS1_S1 + 82) -
                p_over_q * *(b + 156 * OS1_S1 + 82) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 82) +
                one_over_two_q * *(b + 112 * OS1_S1 + 55);
            *(b + 112 * OS1_S1 + 118) =
                prefactor_y * *(b + 112 * OS1_S1 + 83) -
                p_over_q * *(b + 156 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 83);
            *(b + 112 * OS1_S1 + 119) =
                prefactor_z * *(b + 112 * OS1_S1 + 83) -
                p_over_q * *(b + 157 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 112 * OS1_S1 + 55);
            *(b + 113 * OS1_S1 + 84) =
                prefactor_x * *(b + 113 * OS1_S1 + 56) -
                p_over_q * *(b + 149 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 113 * OS1_S1 + 35);
            *(b + 113 * OS1_S1 + 85) =
                prefactor_y * *(b + 113 * OS1_S1 + 56) -
                p_over_q * *(b + 157 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 56);
            *(b + 113 * OS1_S1 + 86) = prefactor_z * *(b + 113 * OS1_S1 + 56) -
                                       p_over_q * *(b + 158 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 56);
            *(b + 113 * OS1_S1 + 87) =
                prefactor_y * *(b + 113 * OS1_S1 + 57) -
                p_over_q * *(b + 157 * OS1_S1 + 57) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 57) +
                one_over_two_q * *(b + 113 * OS1_S1 + 35);
            *(b + 113 * OS1_S1 + 88) = prefactor_z * *(b + 113 * OS1_S1 + 57) -
                                       p_over_q * *(b + 158 * OS1_S1 + 57) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 57);
            *(b + 113 * OS1_S1 + 89) =
                prefactor_z * *(b + 113 * OS1_S1 + 58) -
                p_over_q * *(b + 158 * OS1_S1 + 58) +
                one_over_two_q * *(b + 77 * OS1_S1 + 58) +
                one_over_two_q * *(b + 113 * OS1_S1 + 35);
            *(b + 113 * OS1_S1 + 90) =
                prefactor_y * *(b + 113 * OS1_S1 + 59) -
                p_over_q * *(b + 157 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 36);
            *(b + 113 * OS1_S1 + 91) = prefactor_z * *(b + 113 * OS1_S1 + 59) -
                                       p_over_q * *(b + 158 * OS1_S1 + 59) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 59);
            *(b + 113 * OS1_S1 + 92) =
                prefactor_y * *(b + 113 * OS1_S1 + 61) -
                p_over_q * *(b + 157 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 61);
            *(b + 113 * OS1_S1 + 93) =
                prefactor_z * *(b + 113 * OS1_S1 + 61) -
                p_over_q * *(b + 158 * OS1_S1 + 61) +
                one_over_two_q * *(b + 77 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 37);
            *(b + 113 * OS1_S1 + 94) =
                prefactor_x * *(b + 113 * OS1_S1 + 66) -
                p_over_q * *(b + 149 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 45);
            *(b + 113 * OS1_S1 + 95) = prefactor_z * *(b + 113 * OS1_S1 + 62) -
                                       p_over_q * *(b + 158 * OS1_S1 + 62) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 62);
            *(b + 113 * OS1_S1 + 96) =
                prefactor_z * *(b + 113 * OS1_S1 + 63) -
                p_over_q * *(b + 158 * OS1_S1 + 63) +
                one_over_two_q * *(b + 77 * OS1_S1 + 63) +
                one_over_two_q * *(b + 113 * OS1_S1 + 38);
            *(b + 113 * OS1_S1 + 97) =
                prefactor_y * *(b + 113 * OS1_S1 + 65) -
                p_over_q * *(b + 157 * OS1_S1 + 65) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 65);
            *(b + 113 * OS1_S1 + 98) =
                prefactor_x * *(b + 113 * OS1_S1 + 70) -
                p_over_q * *(b + 149 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 49);
            *(b + 113 * OS1_S1 + 99) =
                prefactor_x * *(b + 113 * OS1_S1 + 71) -
                p_over_q * *(b + 149 * OS1_S1 + 71) +
                one_over_two_q * *(b + 113 * OS1_S1 + 50);
            *(b + 113 * OS1_S1 + 100) =
                prefactor_z * *(b + 113 * OS1_S1 + 66) -
                p_over_q * *(b + 158 * OS1_S1 + 66) +
                one_over_two_q * *(b + 77 * OS1_S1 + 66);
            *(b + 113 * OS1_S1 + 101) =
                prefactor_x * *(b + 113 * OS1_S1 + 73) -
                p_over_q * *(b + 149 * OS1_S1 + 73) +
                one_over_two_q * *(b + 113 * OS1_S1 + 52);
            *(b + 113 * OS1_S1 + 102) =
                prefactor_x * *(b + 113 * OS1_S1 + 74) -
                p_over_q * *(b + 149 * OS1_S1 + 74) +
                one_over_two_q * *(b + 113 * OS1_S1 + 53);
            *(b + 113 * OS1_S1 + 103) =
                prefactor_y * *(b + 113 * OS1_S1 + 70) -
                p_over_q * *(b + 157 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 70);
            *(b + 113 * OS1_S1 + 104) =
                prefactor_x * *(b + 113 * OS1_S1 + 76) -
                p_over_q * *(b + 149 * OS1_S1 + 76) +
                one_over_two_q * *(b + 113 * OS1_S1 + 55);
            *(b + 113 * OS1_S1 + 105) = prefactor_x * *(b + 113 * OS1_S1 + 77) -
                                        p_over_q * *(b + 149 * OS1_S1 + 77);
            *(b + 113 * OS1_S1 + 106) = prefactor_x * *(b + 113 * OS1_S1 + 78) -
                                        p_over_q * *(b + 149 * OS1_S1 + 78);
            *(b + 113 * OS1_S1 + 107) = prefactor_x * *(b + 113 * OS1_S1 + 79) -
                                        p_over_q * *(b + 149 * OS1_S1 + 79);
            *(b + 113 * OS1_S1 + 108) = prefactor_x * *(b + 113 * OS1_S1 + 80) -
                                        p_over_q * *(b + 149 * OS1_S1 + 80);
            *(b + 113 * OS1_S1 + 109) = prefactor_x * *(b + 113 * OS1_S1 + 81) -
                                        p_over_q * *(b + 149 * OS1_S1 + 81);
            *(b + 113 * OS1_S1 + 110) = prefactor_x * *(b + 113 * OS1_S1 + 82) -
                                        p_over_q * *(b + 149 * OS1_S1 + 82);
            *(b + 113 * OS1_S1 + 111) = prefactor_x * *(b + 113 * OS1_S1 + 83) -
                                        p_over_q * *(b + 149 * OS1_S1 + 83);
            *(b + 113 * OS1_S1 + 112) =
                prefactor_y * *(b + 113 * OS1_S1 + 77) -
                p_over_q * *(b + 157 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 113 * OS1_S1 + 50);
            *(b + 113 * OS1_S1 + 113) =
                prefactor_z * *(b + 113 * OS1_S1 + 77) -
                p_over_q * *(b + 158 * OS1_S1 + 77) +
                one_over_two_q * *(b + 77 * OS1_S1 + 77);
            *(b + 113 * OS1_S1 + 114) =
                prefactor_z * *(b + 113 * OS1_S1 + 78) -
                p_over_q * *(b + 158 * OS1_S1 + 78) +
                one_over_two_q * *(b + 77 * OS1_S1 + 78) +
                one_over_two_q * *(b + 113 * OS1_S1 + 50);
            *(b + 113 * OS1_S1 + 115) =
                prefactor_z * *(b + 113 * OS1_S1 + 79) -
                p_over_q * *(b + 158 * OS1_S1 + 79) +
                one_over_two_q * *(b + 77 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 51);
            *(b + 113 * OS1_S1 + 116) =
                prefactor_y * *(b + 113 * OS1_S1 + 81) -
                p_over_q * *(b + 157 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 54);
            *(b + 113 * OS1_S1 + 117) =
                prefactor_y * *(b + 113 * OS1_S1 + 82) -
                p_over_q * *(b + 157 * OS1_S1 + 82) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 82) +
                one_over_two_q * *(b + 113 * OS1_S1 + 55);
            *(b + 113 * OS1_S1 + 118) =
                prefactor_y * *(b + 113 * OS1_S1 + 83) -
                p_over_q * *(b + 157 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 83);
            *(b + 113 * OS1_S1 + 119) =
                prefactor_z * *(b + 113 * OS1_S1 + 83) -
                p_over_q * *(b + 158 * OS1_S1 + 83) +
                one_over_two_q * *(b + 77 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 113 * OS1_S1 + 55);
            *(b + 114 * OS1_S1 + 84) =
                prefactor_x * *(b + 114 * OS1_S1 + 56) -
                p_over_q * *(b + 150 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 35);
            *(b + 114 * OS1_S1 + 85) =
                prefactor_y * *(b + 114 * OS1_S1 + 56) -
                p_over_q * *(b + 158 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 56);
            *(b + 114 * OS1_S1 + 86) =
                prefactor_z * *(b + 114 * OS1_S1 + 56) -
                p_over_q * *(b + 159 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 56);
            *(b + 114 * OS1_S1 + 87) =
                prefactor_y * *(b + 114 * OS1_S1 + 57) -
                p_over_q * *(b + 158 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 57) +
                one_over_two_q * *(b + 114 * OS1_S1 + 35);
            *(b + 114 * OS1_S1 + 88) =
                prefactor_z * *(b + 114 * OS1_S1 + 57) -
                p_over_q * *(b + 159 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 57);
            *(b + 114 * OS1_S1 + 89) =
                prefactor_z * *(b + 114 * OS1_S1 + 58) -
                p_over_q * *(b + 159 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 58) +
                one_over_two_q * *(b + 114 * OS1_S1 + 35);
            *(b + 114 * OS1_S1 + 90) =
                prefactor_y * *(b + 114 * OS1_S1 + 59) -
                p_over_q * *(b + 158 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 36);
            *(b + 114 * OS1_S1 + 91) =
                prefactor_z * *(b + 114 * OS1_S1 + 59) -
                p_over_q * *(b + 159 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 59);
            *(b + 114 * OS1_S1 + 92) =
                prefactor_y * *(b + 114 * OS1_S1 + 61) -
                p_over_q * *(b + 158 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 61);
            *(b + 114 * OS1_S1 + 93) =
                prefactor_z * *(b + 114 * OS1_S1 + 61) -
                p_over_q * *(b + 159 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 37);
            *(b + 114 * OS1_S1 + 94) =
                prefactor_x * *(b + 114 * OS1_S1 + 66) -
                p_over_q * *(b + 150 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 45);
            *(b + 114 * OS1_S1 + 95) =
                prefactor_z * *(b + 114 * OS1_S1 + 62) -
                p_over_q * *(b + 159 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 62);
            *(b + 114 * OS1_S1 + 96) =
                prefactor_z * *(b + 114 * OS1_S1 + 63) -
                p_over_q * *(b + 159 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 63) +
                one_over_two_q * *(b + 114 * OS1_S1 + 38);
            *(b + 114 * OS1_S1 + 97) =
                prefactor_y * *(b + 114 * OS1_S1 + 65) -
                p_over_q * *(b + 158 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 65);
            *(b + 114 * OS1_S1 + 98) =
                prefactor_x * *(b + 114 * OS1_S1 + 70) -
                p_over_q * *(b + 150 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 49);
            *(b + 114 * OS1_S1 + 99) =
                prefactor_x * *(b + 114 * OS1_S1 + 71) -
                p_over_q * *(b + 150 * OS1_S1 + 71) +
                one_over_two_q * *(b + 114 * OS1_S1 + 50);
            *(b + 114 * OS1_S1 + 100) =
                prefactor_z * *(b + 114 * OS1_S1 + 66) -
                p_over_q * *(b + 159 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 66);
            *(b + 114 * OS1_S1 + 101) =
                prefactor_x * *(b + 114 * OS1_S1 + 73) -
                p_over_q * *(b + 150 * OS1_S1 + 73) +
                one_over_two_q * *(b + 114 * OS1_S1 + 52);
            *(b + 114 * OS1_S1 + 102) =
                prefactor_x * *(b + 114 * OS1_S1 + 74) -
                p_over_q * *(b + 150 * OS1_S1 + 74) +
                one_over_two_q * *(b + 114 * OS1_S1 + 53);
            *(b + 114 * OS1_S1 + 103) =
                prefactor_y * *(b + 114 * OS1_S1 + 70) -
                p_over_q * *(b + 158 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 70);
            *(b + 114 * OS1_S1 + 104) =
                prefactor_x * *(b + 114 * OS1_S1 + 76) -
                p_over_q * *(b + 150 * OS1_S1 + 76) +
                one_over_two_q * *(b + 114 * OS1_S1 + 55);
            *(b + 114 * OS1_S1 + 105) = prefactor_x * *(b + 114 * OS1_S1 + 77) -
                                        p_over_q * *(b + 150 * OS1_S1 + 77);
            *(b + 114 * OS1_S1 + 106) = prefactor_x * *(b + 114 * OS1_S1 + 78) -
                                        p_over_q * *(b + 150 * OS1_S1 + 78);
            *(b + 114 * OS1_S1 + 107) = prefactor_x * *(b + 114 * OS1_S1 + 79) -
                                        p_over_q * *(b + 150 * OS1_S1 + 79);
            *(b + 114 * OS1_S1 + 108) = prefactor_x * *(b + 114 * OS1_S1 + 80) -
                                        p_over_q * *(b + 150 * OS1_S1 + 80);
            *(b + 114 * OS1_S1 + 109) = prefactor_x * *(b + 114 * OS1_S1 + 81) -
                                        p_over_q * *(b + 150 * OS1_S1 + 81);
            *(b + 114 * OS1_S1 + 110) = prefactor_x * *(b + 114 * OS1_S1 + 82) -
                                        p_over_q * *(b + 150 * OS1_S1 + 82);
            *(b + 114 * OS1_S1 + 111) = prefactor_x * *(b + 114 * OS1_S1 + 83) -
                                        p_over_q * *(b + 150 * OS1_S1 + 83);
            *(b + 114 * OS1_S1 + 112) =
                prefactor_y * *(b + 114 * OS1_S1 + 77) -
                p_over_q * *(b + 158 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 50);
            *(b + 114 * OS1_S1 + 113) =
                prefactor_z * *(b + 114 * OS1_S1 + 77) -
                p_over_q * *(b + 159 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 77);
            *(b + 114 * OS1_S1 + 114) =
                prefactor_z * *(b + 114 * OS1_S1 + 78) -
                p_over_q * *(b + 159 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 78) +
                one_over_two_q * *(b + 114 * OS1_S1 + 50);
            *(b + 114 * OS1_S1 + 115) =
                prefactor_z * *(b + 114 * OS1_S1 + 79) -
                p_over_q * *(b + 159 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 51);
            *(b + 114 * OS1_S1 + 116) =
                prefactor_y * *(b + 114 * OS1_S1 + 81) -
                p_over_q * *(b + 158 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 54);
            *(b + 114 * OS1_S1 + 117) =
                prefactor_y * *(b + 114 * OS1_S1 + 82) -
                p_over_q * *(b + 158 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 82) +
                one_over_two_q * *(b + 114 * OS1_S1 + 55);
            *(b + 114 * OS1_S1 + 118) =
                prefactor_y * *(b + 114 * OS1_S1 + 83) -
                p_over_q * *(b + 158 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 83);
            *(b + 114 * OS1_S1 + 119) =
                prefactor_z * *(b + 114 * OS1_S1 + 83) -
                p_over_q * *(b + 159 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 55);
            *(b + 115 * OS1_S1 + 84) =
                prefactor_x * *(b + 115 * OS1_S1 + 56) -
                p_over_q * *(b + 151 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 115 * OS1_S1 + 35);
            *(b + 115 * OS1_S1 + 85) =
                prefactor_y * *(b + 115 * OS1_S1 + 56) -
                p_over_q * *(b + 159 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 56);
            *(b + 115 * OS1_S1 + 86) =
                prefactor_z * *(b + 115 * OS1_S1 + 56) -
                p_over_q * *(b + 160 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 56);
            *(b + 115 * OS1_S1 + 87) =
                prefactor_y * *(b + 115 * OS1_S1 + 57) -
                p_over_q * *(b + 159 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 57) +
                one_over_two_q * *(b + 115 * OS1_S1 + 35);
            *(b + 115 * OS1_S1 + 88) =
                prefactor_z * *(b + 115 * OS1_S1 + 57) -
                p_over_q * *(b + 160 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 57);
            *(b + 115 * OS1_S1 + 89) =
                prefactor_z * *(b + 115 * OS1_S1 + 58) -
                p_over_q * *(b + 160 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 58) +
                one_over_two_q * *(b + 115 * OS1_S1 + 35);
            *(b + 115 * OS1_S1 + 90) =
                prefactor_y * *(b + 115 * OS1_S1 + 59) -
                p_over_q * *(b + 159 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 36);
            *(b + 115 * OS1_S1 + 91) =
                prefactor_z * *(b + 115 * OS1_S1 + 59) -
                p_over_q * *(b + 160 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 59);
            *(b + 115 * OS1_S1 + 92) =
                prefactor_y * *(b + 115 * OS1_S1 + 61) -
                p_over_q * *(b + 159 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 61);
            *(b + 115 * OS1_S1 + 93) =
                prefactor_z * *(b + 115 * OS1_S1 + 61) -
                p_over_q * *(b + 160 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 37);
            *(b + 115 * OS1_S1 + 94) =
                prefactor_x * *(b + 115 * OS1_S1 + 66) -
                p_over_q * *(b + 151 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 45);
            *(b + 115 * OS1_S1 + 95) =
                prefactor_z * *(b + 115 * OS1_S1 + 62) -
                p_over_q * *(b + 160 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 62);
            *(b + 115 * OS1_S1 + 96) =
                prefactor_z * *(b + 115 * OS1_S1 + 63) -
                p_over_q * *(b + 160 * OS1_S1 + 63) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 63) +
                one_over_two_q * *(b + 115 * OS1_S1 + 38);
            *(b + 115 * OS1_S1 + 97) =
                prefactor_y * *(b + 115 * OS1_S1 + 65) -
                p_over_q * *(b + 159 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 65);
            *(b + 115 * OS1_S1 + 98) =
                prefactor_x * *(b + 115 * OS1_S1 + 70) -
                p_over_q * *(b + 151 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 49);
            *(b + 115 * OS1_S1 + 99) =
                prefactor_x * *(b + 115 * OS1_S1 + 71) -
                p_over_q * *(b + 151 * OS1_S1 + 71) +
                one_over_two_q * *(b + 115 * OS1_S1 + 50);
            *(b + 115 * OS1_S1 + 100) =
                prefactor_z * *(b + 115 * OS1_S1 + 66) -
                p_over_q * *(b + 160 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 66);
            *(b + 115 * OS1_S1 + 101) =
                prefactor_x * *(b + 115 * OS1_S1 + 73) -
                p_over_q * *(b + 151 * OS1_S1 + 73) +
                one_over_two_q * *(b + 115 * OS1_S1 + 52);
            *(b + 115 * OS1_S1 + 102) =
                prefactor_x * *(b + 115 * OS1_S1 + 74) -
                p_over_q * *(b + 151 * OS1_S1 + 74) +
                one_over_two_q * *(b + 115 * OS1_S1 + 53);
            *(b + 115 * OS1_S1 + 103) =
                prefactor_y * *(b + 115 * OS1_S1 + 70) -
                p_over_q * *(b + 159 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 70);
            *(b + 115 * OS1_S1 + 104) =
                prefactor_x * *(b + 115 * OS1_S1 + 76) -
                p_over_q * *(b + 151 * OS1_S1 + 76) +
                one_over_two_q * *(b + 115 * OS1_S1 + 55);
            *(b + 115 * OS1_S1 + 105) = prefactor_x * *(b + 115 * OS1_S1 + 77) -
                                        p_over_q * *(b + 151 * OS1_S1 + 77);
            *(b + 115 * OS1_S1 + 106) = prefactor_x * *(b + 115 * OS1_S1 + 78) -
                                        p_over_q * *(b + 151 * OS1_S1 + 78);
            *(b + 115 * OS1_S1 + 107) = prefactor_x * *(b + 115 * OS1_S1 + 79) -
                                        p_over_q * *(b + 151 * OS1_S1 + 79);
            *(b + 115 * OS1_S1 + 108) = prefactor_x * *(b + 115 * OS1_S1 + 80) -
                                        p_over_q * *(b + 151 * OS1_S1 + 80);
            *(b + 115 * OS1_S1 + 109) = prefactor_x * *(b + 115 * OS1_S1 + 81) -
                                        p_over_q * *(b + 151 * OS1_S1 + 81);
            *(b + 115 * OS1_S1 + 110) = prefactor_x * *(b + 115 * OS1_S1 + 82) -
                                        p_over_q * *(b + 151 * OS1_S1 + 82);
            *(b + 115 * OS1_S1 + 111) = prefactor_x * *(b + 115 * OS1_S1 + 83) -
                                        p_over_q * *(b + 151 * OS1_S1 + 83);
            *(b + 115 * OS1_S1 + 112) =
                prefactor_y * *(b + 115 * OS1_S1 + 77) -
                p_over_q * *(b + 159 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 115 * OS1_S1 + 50);
            *(b + 115 * OS1_S1 + 113) =
                prefactor_z * *(b + 115 * OS1_S1 + 77) -
                p_over_q * *(b + 160 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 77);
            *(b + 115 * OS1_S1 + 114) =
                prefactor_z * *(b + 115 * OS1_S1 + 78) -
                p_over_q * *(b + 160 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 78) +
                one_over_two_q * *(b + 115 * OS1_S1 + 50);
            *(b + 115 * OS1_S1 + 115) =
                prefactor_z * *(b + 115 * OS1_S1 + 79) -
                p_over_q * *(b + 160 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 51);
            *(b + 115 * OS1_S1 + 116) =
                prefactor_y * *(b + 115 * OS1_S1 + 81) -
                p_over_q * *(b + 159 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 54);
            *(b + 115 * OS1_S1 + 117) =
                prefactor_y * *(b + 115 * OS1_S1 + 82) -
                p_over_q * *(b + 159 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 82) +
                one_over_two_q * *(b + 115 * OS1_S1 + 55);
            *(b + 115 * OS1_S1 + 118) =
                prefactor_y * *(b + 115 * OS1_S1 + 83) -
                p_over_q * *(b + 159 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 83);
            *(b + 115 * OS1_S1 + 119) =
                prefactor_z * *(b + 115 * OS1_S1 + 83) -
                p_over_q * *(b + 160 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 115 * OS1_S1 + 55);
            *(b + 116 * OS1_S1 + 84) =
                prefactor_x * *(b + 116 * OS1_S1 + 56) -
                p_over_q * *(b + 152 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 116 * OS1_S1 + 35);
            *(b + 116 * OS1_S1 + 85) =
                prefactor_y * *(b + 116 * OS1_S1 + 56) -
                p_over_q * *(b + 160 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 56);
            *(b + 116 * OS1_S1 + 86) =
                prefactor_z * *(b + 116 * OS1_S1 + 56) -
                p_over_q * *(b + 161 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 56);
            *(b + 116 * OS1_S1 + 87) =
                prefactor_y * *(b + 116 * OS1_S1 + 57) -
                p_over_q * *(b + 160 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 57) +
                one_over_two_q * *(b + 116 * OS1_S1 + 35);
            *(b + 116 * OS1_S1 + 88) =
                prefactor_y * *(b + 116 * OS1_S1 + 58) -
                p_over_q * *(b + 160 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 58);
            *(b + 116 * OS1_S1 + 89) =
                prefactor_z * *(b + 116 * OS1_S1 + 58) -
                p_over_q * *(b + 161 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 58) +
                one_over_two_q * *(b + 116 * OS1_S1 + 35);
            *(b + 116 * OS1_S1 + 90) =
                prefactor_y * *(b + 116 * OS1_S1 + 59) -
                p_over_q * *(b + 160 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 36);
            *(b + 116 * OS1_S1 + 91) =
                prefactor_z * *(b + 116 * OS1_S1 + 59) -
                p_over_q * *(b + 161 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 59);
            *(b + 116 * OS1_S1 + 92) =
                prefactor_y * *(b + 116 * OS1_S1 + 61) -
                p_over_q * *(b + 160 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 61);
            *(b + 116 * OS1_S1 + 93) =
                prefactor_z * *(b + 116 * OS1_S1 + 61) -
                p_over_q * *(b + 161 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 37);
            *(b + 116 * OS1_S1 + 94) =
                prefactor_x * *(b + 116 * OS1_S1 + 66) -
                p_over_q * *(b + 152 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 45);
            *(b + 116 * OS1_S1 + 95) =
                prefactor_z * *(b + 116 * OS1_S1 + 62) -
                p_over_q * *(b + 161 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 62);
            *(b + 116 * OS1_S1 + 96) =
                prefactor_y * *(b + 116 * OS1_S1 + 64) -
                p_over_q * *(b + 160 * OS1_S1 + 64) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 64) +
                one_over_two_q * *(b + 116 * OS1_S1 + 40);
            *(b + 116 * OS1_S1 + 97) =
                prefactor_y * *(b + 116 * OS1_S1 + 65) -
                p_over_q * *(b + 160 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 65);
            *(b + 116 * OS1_S1 + 98) =
                prefactor_x * *(b + 116 * OS1_S1 + 70) -
                p_over_q * *(b + 152 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 49);
            *(b + 116 * OS1_S1 + 99) =
                prefactor_x * *(b + 116 * OS1_S1 + 71) -
                p_over_q * *(b + 152 * OS1_S1 + 71) +
                one_over_two_q * *(b + 116 * OS1_S1 + 50);
            *(b + 116 * OS1_S1 + 100) =
                prefactor_z * *(b + 116 * OS1_S1 + 66) -
                p_over_q * *(b + 161 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 66);
            *(b + 116 * OS1_S1 + 101) =
                prefactor_x * *(b + 116 * OS1_S1 + 73) -
                p_over_q * *(b + 152 * OS1_S1 + 73) +
                one_over_two_q * *(b + 116 * OS1_S1 + 52);
            *(b + 116 * OS1_S1 + 102) =
                prefactor_x * *(b + 116 * OS1_S1 + 74) -
                p_over_q * *(b + 152 * OS1_S1 + 74) +
                one_over_two_q * *(b + 116 * OS1_S1 + 53);
            *(b + 116 * OS1_S1 + 103) =
                prefactor_y * *(b + 116 * OS1_S1 + 70) -
                p_over_q * *(b + 160 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 70);
            *(b + 116 * OS1_S1 + 104) =
                prefactor_x * *(b + 116 * OS1_S1 + 76) -
                p_over_q * *(b + 152 * OS1_S1 + 76) +
                one_over_two_q * *(b + 116 * OS1_S1 + 55);
            *(b + 116 * OS1_S1 + 105) = prefactor_x * *(b + 116 * OS1_S1 + 77) -
                                        p_over_q * *(b + 152 * OS1_S1 + 77);
            *(b + 116 * OS1_S1 + 106) = prefactor_x * *(b + 116 * OS1_S1 + 78) -
                                        p_over_q * *(b + 152 * OS1_S1 + 78);
            *(b + 116 * OS1_S1 + 107) = prefactor_x * *(b + 116 * OS1_S1 + 79) -
                                        p_over_q * *(b + 152 * OS1_S1 + 79);
            *(b + 116 * OS1_S1 + 108) = prefactor_x * *(b + 116 * OS1_S1 + 80) -
                                        p_over_q * *(b + 152 * OS1_S1 + 80);
            *(b + 116 * OS1_S1 + 109) = prefactor_x * *(b + 116 * OS1_S1 + 81) -
                                        p_over_q * *(b + 152 * OS1_S1 + 81);
            *(b + 116 * OS1_S1 + 110) = prefactor_x * *(b + 116 * OS1_S1 + 82) -
                                        p_over_q * *(b + 152 * OS1_S1 + 82);
            *(b + 116 * OS1_S1 + 111) = prefactor_x * *(b + 116 * OS1_S1 + 83) -
                                        p_over_q * *(b + 152 * OS1_S1 + 83);
            *(b + 116 * OS1_S1 + 112) =
                prefactor_y * *(b + 116 * OS1_S1 + 77) -
                p_over_q * *(b + 160 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 116 * OS1_S1 + 50);
            *(b + 116 * OS1_S1 + 113) =
                prefactor_z * *(b + 116 * OS1_S1 + 77) -
                p_over_q * *(b + 161 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 77);
            *(b + 116 * OS1_S1 + 114) =
                prefactor_z * *(b + 116 * OS1_S1 + 78) -
                p_over_q * *(b + 161 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 78) +
                one_over_two_q * *(b + 116 * OS1_S1 + 50);
            *(b + 116 * OS1_S1 + 115) =
                prefactor_z * *(b + 116 * OS1_S1 + 79) -
                p_over_q * *(b + 161 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 51);
            *(b + 116 * OS1_S1 + 116) =
                prefactor_y * *(b + 116 * OS1_S1 + 81) -
                p_over_q * *(b + 160 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 54);
            *(b + 116 * OS1_S1 + 117) =
                prefactor_y * *(b + 116 * OS1_S1 + 82) -
                p_over_q * *(b + 160 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 82) +
                one_over_two_q * *(b + 116 * OS1_S1 + 55);
            *(b + 116 * OS1_S1 + 118) =
                prefactor_y * *(b + 116 * OS1_S1 + 83) -
                p_over_q * *(b + 160 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 83);
            *(b + 116 * OS1_S1 + 119) =
                prefactor_z * *(b + 116 * OS1_S1 + 83) -
                p_over_q * *(b + 161 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 116 * OS1_S1 + 55);
            *(b + 117 * OS1_S1 + 84) =
                prefactor_x * *(b + 117 * OS1_S1 + 56) -
                p_over_q * *(b + 153 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 35);
            *(b + 117 * OS1_S1 + 85) =
                prefactor_y * *(b + 117 * OS1_S1 + 56) -
                p_over_q * *(b + 161 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 56);
            *(b + 117 * OS1_S1 + 86) =
                prefactor_z * *(b + 117 * OS1_S1 + 56) -
                p_over_q * *(b + 162 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 56);
            *(b + 117 * OS1_S1 + 87) =
                prefactor_y * *(b + 117 * OS1_S1 + 57) -
                p_over_q * *(b + 161 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 57) +
                one_over_two_q * *(b + 117 * OS1_S1 + 35);
            *(b + 117 * OS1_S1 + 88) =
                prefactor_y * *(b + 117 * OS1_S1 + 58) -
                p_over_q * *(b + 161 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 58);
            *(b + 117 * OS1_S1 + 89) =
                prefactor_z * *(b + 117 * OS1_S1 + 58) -
                p_over_q * *(b + 162 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 58) +
                one_over_two_q * *(b + 117 * OS1_S1 + 35);
            *(b + 117 * OS1_S1 + 90) =
                prefactor_y * *(b + 117 * OS1_S1 + 59) -
                p_over_q * *(b + 161 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 36);
            *(b + 117 * OS1_S1 + 91) =
                prefactor_z * *(b + 117 * OS1_S1 + 59) -
                p_over_q * *(b + 162 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 59);
            *(b + 117 * OS1_S1 + 92) =
                prefactor_y * *(b + 117 * OS1_S1 + 61) -
                p_over_q * *(b + 161 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 61);
            *(b + 117 * OS1_S1 + 93) =
                prefactor_z * *(b + 117 * OS1_S1 + 61) -
                p_over_q * *(b + 162 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 37);
            *(b + 117 * OS1_S1 + 94) =
                prefactor_x * *(b + 117 * OS1_S1 + 66) -
                p_over_q * *(b + 153 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 45);
            *(b + 117 * OS1_S1 + 95) =
                prefactor_z * *(b + 117 * OS1_S1 + 62) -
                p_over_q * *(b + 162 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 62);
            *(b + 117 * OS1_S1 + 96) =
                prefactor_y * *(b + 117 * OS1_S1 + 64) -
                p_over_q * *(b + 161 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 64) +
                one_over_two_q * *(b + 117 * OS1_S1 + 40);
            *(b + 117 * OS1_S1 + 97) =
                prefactor_y * *(b + 117 * OS1_S1 + 65) -
                p_over_q * *(b + 161 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 65);
            *(b + 117 * OS1_S1 + 98) =
                prefactor_x * *(b + 117 * OS1_S1 + 70) -
                p_over_q * *(b + 153 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 49);
            *(b + 117 * OS1_S1 + 99) =
                prefactor_x * *(b + 117 * OS1_S1 + 71) -
                p_over_q * *(b + 153 * OS1_S1 + 71) +
                one_over_two_q * *(b + 117 * OS1_S1 + 50);
            *(b + 117 * OS1_S1 + 100) =
                prefactor_z * *(b + 117 * OS1_S1 + 66) -
                p_over_q * *(b + 162 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 66);
            *(b + 117 * OS1_S1 + 101) =
                prefactor_x * *(b + 117 * OS1_S1 + 73) -
                p_over_q * *(b + 153 * OS1_S1 + 73) +
                one_over_two_q * *(b + 117 * OS1_S1 + 52);
            *(b + 117 * OS1_S1 + 102) =
                prefactor_x * *(b + 117 * OS1_S1 + 74) -
                p_over_q * *(b + 153 * OS1_S1 + 74) +
                one_over_two_q * *(b + 117 * OS1_S1 + 53);
            *(b + 117 * OS1_S1 + 103) =
                prefactor_y * *(b + 117 * OS1_S1 + 70) -
                p_over_q * *(b + 161 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 70);
            *(b + 117 * OS1_S1 + 104) =
                prefactor_x * *(b + 117 * OS1_S1 + 76) -
                p_over_q * *(b + 153 * OS1_S1 + 76) +
                one_over_two_q * *(b + 117 * OS1_S1 + 55);
            *(b + 117 * OS1_S1 + 105) = prefactor_x * *(b + 117 * OS1_S1 + 77) -
                                        p_over_q * *(b + 153 * OS1_S1 + 77);
            *(b + 117 * OS1_S1 + 106) = prefactor_x * *(b + 117 * OS1_S1 + 78) -
                                        p_over_q * *(b + 153 * OS1_S1 + 78);
            *(b + 117 * OS1_S1 + 107) = prefactor_x * *(b + 117 * OS1_S1 + 79) -
                                        p_over_q * *(b + 153 * OS1_S1 + 79);
            *(b + 117 * OS1_S1 + 108) = prefactor_x * *(b + 117 * OS1_S1 + 80) -
                                        p_over_q * *(b + 153 * OS1_S1 + 80);
            *(b + 117 * OS1_S1 + 109) = prefactor_x * *(b + 117 * OS1_S1 + 81) -
                                        p_over_q * *(b + 153 * OS1_S1 + 81);
            *(b + 117 * OS1_S1 + 110) = prefactor_x * *(b + 117 * OS1_S1 + 82) -
                                        p_over_q * *(b + 153 * OS1_S1 + 82);
            *(b + 117 * OS1_S1 + 111) = prefactor_x * *(b + 117 * OS1_S1 + 83) -
                                        p_over_q * *(b + 153 * OS1_S1 + 83);
            *(b + 117 * OS1_S1 + 112) =
                prefactor_y * *(b + 117 * OS1_S1 + 77) -
                p_over_q * *(b + 161 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 50);
            *(b + 117 * OS1_S1 + 113) =
                prefactor_z * *(b + 117 * OS1_S1 + 77) -
                p_over_q * *(b + 162 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 77);
            *(b + 117 * OS1_S1 + 114) =
                prefactor_z * *(b + 117 * OS1_S1 + 78) -
                p_over_q * *(b + 162 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 78) +
                one_over_two_q * *(b + 117 * OS1_S1 + 50);
            *(b + 117 * OS1_S1 + 115) =
                prefactor_z * *(b + 117 * OS1_S1 + 79) -
                p_over_q * *(b + 162 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 51);
            *(b + 117 * OS1_S1 + 116) =
                prefactor_y * *(b + 117 * OS1_S1 + 81) -
                p_over_q * *(b + 161 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 54);
            *(b + 117 * OS1_S1 + 117) =
                prefactor_y * *(b + 117 * OS1_S1 + 82) -
                p_over_q * *(b + 161 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 82) +
                one_over_two_q * *(b + 117 * OS1_S1 + 55);
            *(b + 117 * OS1_S1 + 118) =
                prefactor_y * *(b + 117 * OS1_S1 + 83) -
                p_over_q * *(b + 161 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 83);
            *(b + 117 * OS1_S1 + 119) =
                prefactor_z * *(b + 117 * OS1_S1 + 83) -
                p_over_q * *(b + 162 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 55);
            *(b + 118 * OS1_S1 + 84) =
                prefactor_x * *(b + 118 * OS1_S1 + 56) -
                p_over_q * *(b + 154 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 118 * OS1_S1 + 35);
            *(b + 118 * OS1_S1 + 85) = prefactor_y * *(b + 118 * OS1_S1 + 56) -
                                       p_over_q * *(b + 162 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 56);
            *(b + 118 * OS1_S1 + 86) =
                prefactor_z * *(b + 118 * OS1_S1 + 56) -
                p_over_q * *(b + 163 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 56);
            *(b + 118 * OS1_S1 + 87) =
                prefactor_y * *(b + 118 * OS1_S1 + 57) -
                p_over_q * *(b + 162 * OS1_S1 + 57) +
                one_over_two_q * *(b + 83 * OS1_S1 + 57) +
                one_over_two_q * *(b + 118 * OS1_S1 + 35);
            *(b + 118 * OS1_S1 + 88) = prefactor_y * *(b + 118 * OS1_S1 + 58) -
                                       p_over_q * *(b + 162 * OS1_S1 + 58) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 58);
            *(b + 118 * OS1_S1 + 89) =
                prefactor_z * *(b + 118 * OS1_S1 + 58) -
                p_over_q * *(b + 163 * OS1_S1 + 58) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 58) +
                one_over_two_q * *(b + 118 * OS1_S1 + 35);
            *(b + 118 * OS1_S1 + 90) =
                prefactor_y * *(b + 118 * OS1_S1 + 59) -
                p_over_q * *(b + 162 * OS1_S1 + 59) +
                one_over_two_q * *(b + 83 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 36);
            *(b + 118 * OS1_S1 + 91) =
                prefactor_z * *(b + 118 * OS1_S1 + 59) -
                p_over_q * *(b + 163 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 59);
            *(b + 118 * OS1_S1 + 92) = prefactor_y * *(b + 118 * OS1_S1 + 61) -
                                       p_over_q * *(b + 162 * OS1_S1 + 61) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 61);
            *(b + 118 * OS1_S1 + 93) =
                prefactor_z * *(b + 118 * OS1_S1 + 61) -
                p_over_q * *(b + 163 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 37);
            *(b + 118 * OS1_S1 + 94) =
                prefactor_x * *(b + 118 * OS1_S1 + 66) -
                p_over_q * *(b + 154 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 45);
            *(b + 118 * OS1_S1 + 95) =
                prefactor_z * *(b + 118 * OS1_S1 + 62) -
                p_over_q * *(b + 163 * OS1_S1 + 62) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 62);
            *(b + 118 * OS1_S1 + 96) =
                prefactor_y * *(b + 118 * OS1_S1 + 64) -
                p_over_q * *(b + 162 * OS1_S1 + 64) +
                one_over_two_q * *(b + 83 * OS1_S1 + 64) +
                one_over_two_q * *(b + 118 * OS1_S1 + 40);
            *(b + 118 * OS1_S1 + 97) = prefactor_y * *(b + 118 * OS1_S1 + 65) -
                                       p_over_q * *(b + 162 * OS1_S1 + 65) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 65);
            *(b + 118 * OS1_S1 + 98) =
                prefactor_x * *(b + 118 * OS1_S1 + 70) -
                p_over_q * *(b + 154 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 49);
            *(b + 118 * OS1_S1 + 99) =
                prefactor_x * *(b + 118 * OS1_S1 + 71) -
                p_over_q * *(b + 154 * OS1_S1 + 71) +
                one_over_two_q * *(b + 118 * OS1_S1 + 50);
            *(b + 118 * OS1_S1 + 100) =
                prefactor_z * *(b + 118 * OS1_S1 + 66) -
                p_over_q * *(b + 163 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 66);
            *(b + 118 * OS1_S1 + 101) =
                prefactor_x * *(b + 118 * OS1_S1 + 73) -
                p_over_q * *(b + 154 * OS1_S1 + 73) +
                one_over_two_q * *(b + 118 * OS1_S1 + 52);
            *(b + 118 * OS1_S1 + 102) =
                prefactor_x * *(b + 118 * OS1_S1 + 74) -
                p_over_q * *(b + 154 * OS1_S1 + 74) +
                one_over_two_q * *(b + 118 * OS1_S1 + 53);
            *(b + 118 * OS1_S1 + 103) =
                prefactor_y * *(b + 118 * OS1_S1 + 70) -
                p_over_q * *(b + 162 * OS1_S1 + 70) +
                one_over_two_q * *(b + 83 * OS1_S1 + 70);
            *(b + 118 * OS1_S1 + 104) =
                prefactor_x * *(b + 118 * OS1_S1 + 76) -
                p_over_q * *(b + 154 * OS1_S1 + 76) +
                one_over_two_q * *(b + 118 * OS1_S1 + 55);
            *(b + 118 * OS1_S1 + 105) = prefactor_x * *(b + 118 * OS1_S1 + 77) -
                                        p_over_q * *(b + 154 * OS1_S1 + 77);
            *(b + 118 * OS1_S1 + 106) = prefactor_x * *(b + 118 * OS1_S1 + 78) -
                                        p_over_q * *(b + 154 * OS1_S1 + 78);
            *(b + 118 * OS1_S1 + 107) = prefactor_x * *(b + 118 * OS1_S1 + 79) -
                                        p_over_q * *(b + 154 * OS1_S1 + 79);
            *(b + 118 * OS1_S1 + 108) = prefactor_x * *(b + 118 * OS1_S1 + 80) -
                                        p_over_q * *(b + 154 * OS1_S1 + 80);
            *(b + 118 * OS1_S1 + 109) = prefactor_x * *(b + 118 * OS1_S1 + 81) -
                                        p_over_q * *(b + 154 * OS1_S1 + 81);
            *(b + 118 * OS1_S1 + 110) = prefactor_x * *(b + 118 * OS1_S1 + 82) -
                                        p_over_q * *(b + 154 * OS1_S1 + 82);
            *(b + 118 * OS1_S1 + 111) = prefactor_x * *(b + 118 * OS1_S1 + 83) -
                                        p_over_q * *(b + 154 * OS1_S1 + 83);
            *(b + 118 * OS1_S1 + 112) =
                prefactor_y * *(b + 118 * OS1_S1 + 77) -
                p_over_q * *(b + 162 * OS1_S1 + 77) +
                one_over_two_q * *(b + 83 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 118 * OS1_S1 + 50);
            *(b + 118 * OS1_S1 + 113) =
                prefactor_z * *(b + 118 * OS1_S1 + 77) -
                p_over_q * *(b + 163 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 77);
            *(b + 118 * OS1_S1 + 114) =
                prefactor_z * *(b + 118 * OS1_S1 + 78) -
                p_over_q * *(b + 163 * OS1_S1 + 78) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 78) +
                one_over_two_q * *(b + 118 * OS1_S1 + 50);
            *(b + 118 * OS1_S1 + 115) =
                prefactor_z * *(b + 118 * OS1_S1 + 79) -
                p_over_q * *(b + 163 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 51);
            *(b + 118 * OS1_S1 + 116) =
                prefactor_y * *(b + 118 * OS1_S1 + 81) -
                p_over_q * *(b + 162 * OS1_S1 + 81) +
                one_over_two_q * *(b + 83 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 54);
            *(b + 118 * OS1_S1 + 117) =
                prefactor_y * *(b + 118 * OS1_S1 + 82) -
                p_over_q * *(b + 162 * OS1_S1 + 82) +
                one_over_two_q * *(b + 83 * OS1_S1 + 82) +
                one_over_two_q * *(b + 118 * OS1_S1 + 55);
            *(b + 118 * OS1_S1 + 118) =
                prefactor_y * *(b + 118 * OS1_S1 + 83) -
                p_over_q * *(b + 162 * OS1_S1 + 83) +
                one_over_two_q * *(b + 83 * OS1_S1 + 83);
            *(b + 118 * OS1_S1 + 119) =
                prefactor_z * *(b + 118 * OS1_S1 + 83) -
                p_over_q * *(b + 163 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 118 * OS1_S1 + 55);
            *(b + 119 * OS1_S1 + 84) =
                prefactor_x * *(b + 119 * OS1_S1 + 56) -
                p_over_q * *(b + 155 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 119 * OS1_S1 + 35);
            *(b + 119 * OS1_S1 + 85) = prefactor_y * *(b + 119 * OS1_S1 + 56) -
                                       p_over_q * *(b + 163 * OS1_S1 + 56);
            *(b + 119 * OS1_S1 + 86) =
                prefactor_z * *(b + 119 * OS1_S1 + 56) -
                p_over_q * *(b + 164 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 56);
            *(b + 119 * OS1_S1 + 87) =
                prefactor_y * *(b + 119 * OS1_S1 + 57) -
                p_over_q * *(b + 163 * OS1_S1 + 57) +
                one_over_two_q * *(b + 119 * OS1_S1 + 35);
            *(b + 119 * OS1_S1 + 88) = prefactor_y * *(b + 119 * OS1_S1 + 58) -
                                       p_over_q * *(b + 163 * OS1_S1 + 58);
            *(b + 119 * OS1_S1 + 89) =
                prefactor_z * *(b + 119 * OS1_S1 + 58) -
                p_over_q * *(b + 164 * OS1_S1 + 58) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 58) +
                one_over_two_q * *(b + 119 * OS1_S1 + 35);
            *(b + 119 * OS1_S1 + 90) =
                prefactor_y * *(b + 119 * OS1_S1 + 59) -
                p_over_q * *(b + 163 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 36);
            *(b + 119 * OS1_S1 + 91) =
                prefactor_z * *(b + 119 * OS1_S1 + 59) -
                p_over_q * *(b + 164 * OS1_S1 + 59) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 59);
            *(b + 119 * OS1_S1 + 92) = prefactor_y * *(b + 119 * OS1_S1 + 61) -
                                       p_over_q * *(b + 163 * OS1_S1 + 61);
            *(b + 119 * OS1_S1 + 93) =
                prefactor_z * *(b + 119 * OS1_S1 + 61) -
                p_over_q * *(b + 164 * OS1_S1 + 61) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 37);
            *(b + 119 * OS1_S1 + 94) =
                prefactor_x * *(b + 119 * OS1_S1 + 66) -
                p_over_q * *(b + 155 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 45);
            *(b + 119 * OS1_S1 + 95) =
                prefactor_z * *(b + 119 * OS1_S1 + 62) -
                p_over_q * *(b + 164 * OS1_S1 + 62) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 62);
            *(b + 119 * OS1_S1 + 96) =
                prefactor_y * *(b + 119 * OS1_S1 + 64) -
                p_over_q * *(b + 163 * OS1_S1 + 64) +
                one_over_two_q * *(b + 119 * OS1_S1 + 40);
            *(b + 119 * OS1_S1 + 97) = prefactor_y * *(b + 119 * OS1_S1 + 65) -
                                       p_over_q * *(b + 163 * OS1_S1 + 65);
            *(b + 119 * OS1_S1 + 98) =
                prefactor_x * *(b + 119 * OS1_S1 + 70) -
                p_over_q * *(b + 155 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 49);
            *(b + 119 * OS1_S1 + 99) =
                prefactor_x * *(b + 119 * OS1_S1 + 71) -
                p_over_q * *(b + 155 * OS1_S1 + 71) +
                one_over_two_q * *(b + 119 * OS1_S1 + 50);
            *(b + 119 * OS1_S1 + 100) =
                prefactor_z * *(b + 119 * OS1_S1 + 66) -
                p_over_q * *(b + 164 * OS1_S1 + 66) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 66);
            *(b + 119 * OS1_S1 + 101) =
                prefactor_x * *(b + 119 * OS1_S1 + 73) -
                p_over_q * *(b + 155 * OS1_S1 + 73) +
                one_over_two_q * *(b + 119 * OS1_S1 + 52);
            *(b + 119 * OS1_S1 + 102) =
                prefactor_y * *(b + 119 * OS1_S1 + 69) -
                p_over_q * *(b + 163 * OS1_S1 + 69) +
                one_over_two_q * *(b + 119 * OS1_S1 + 44);
            *(b + 119 * OS1_S1 + 103) = prefactor_y * *(b + 119 * OS1_S1 + 70) -
                                        p_over_q * *(b + 163 * OS1_S1 + 70);
            *(b + 119 * OS1_S1 + 104) =
                prefactor_x * *(b + 119 * OS1_S1 + 76) -
                p_over_q * *(b + 155 * OS1_S1 + 76) +
                one_over_two_q * *(b + 119 * OS1_S1 + 55);
            *(b + 119 * OS1_S1 + 105) = prefactor_x * *(b + 119 * OS1_S1 + 77) -
                                        p_over_q * *(b + 155 * OS1_S1 + 77);
            *(b + 119 * OS1_S1 + 106) = prefactor_x * *(b + 119 * OS1_S1 + 78) -
                                        p_over_q * *(b + 155 * OS1_S1 + 78);
            *(b + 119 * OS1_S1 + 107) = prefactor_x * *(b + 119 * OS1_S1 + 79) -
                                        p_over_q * *(b + 155 * OS1_S1 + 79);
            *(b + 119 * OS1_S1 + 108) = prefactor_x * *(b + 119 * OS1_S1 + 80) -
                                        p_over_q * *(b + 155 * OS1_S1 + 80);
            *(b + 119 * OS1_S1 + 109) = prefactor_x * *(b + 119 * OS1_S1 + 81) -
                                        p_over_q * *(b + 155 * OS1_S1 + 81);
            *(b + 119 * OS1_S1 + 110) = prefactor_y * *(b + 119 * OS1_S1 + 76) -
                                        p_over_q * *(b + 163 * OS1_S1 + 76);
            *(b + 119 * OS1_S1 + 111) = prefactor_x * *(b + 119 * OS1_S1 + 83) -
                                        p_over_q * *(b + 155 * OS1_S1 + 83);
            *(b + 119 * OS1_S1 + 112) =
                prefactor_y * *(b + 119 * OS1_S1 + 77) -
                p_over_q * *(b + 163 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 119 * OS1_S1 + 50);
            *(b + 119 * OS1_S1 + 113) =
                prefactor_z * *(b + 119 * OS1_S1 + 77) -
                p_over_q * *(b + 164 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 77);
            *(b + 119 * OS1_S1 + 114) =
                prefactor_z * *(b + 119 * OS1_S1 + 78) -
                p_over_q * *(b + 164 * OS1_S1 + 78) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 78) +
                one_over_two_q * *(b + 119 * OS1_S1 + 50);
            *(b + 119 * OS1_S1 + 115) =
                prefactor_z * *(b + 119 * OS1_S1 + 79) -
                p_over_q * *(b + 164 * OS1_S1 + 79) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 51);
            *(b + 119 * OS1_S1 + 116) =
                prefactor_y * *(b + 119 * OS1_S1 + 81) -
                p_over_q * *(b + 163 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 54);
            *(b + 119 * OS1_S1 + 117) =
                prefactor_y * *(b + 119 * OS1_S1 + 82) -
                p_over_q * *(b + 163 * OS1_S1 + 82) +
                one_over_two_q * *(b + 119 * OS1_S1 + 55);
            *(b + 119 * OS1_S1 + 118) = prefactor_y * *(b + 119 * OS1_S1 + 83) -
                                        p_over_q * *(b + 163 * OS1_S1 + 83);
            *(b + 119 * OS1_S1 + 119) =
                prefactor_z * *(b + 119 * OS1_S1 + 83) -
                p_over_q * *(b + 164 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 119 * OS1_S1 + 55);
            return;
        }
    }
}
