/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_9_7(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 165 * OS1_S1 + 84) =
                prefactor_x * *(b + 165 * OS1_S1 + 56) -
                p_over_q * *(b + 220 * OS1_S1 + 56) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 165 * OS1_S1 + 35);
            *(b + 165 * OS1_S1 + 85) = prefactor_y * *(b + 165 * OS1_S1 + 56) -
                                       p_over_q * *(b + 221 * OS1_S1 + 56);
            *(b + 165 * OS1_S1 + 86) = prefactor_z * *(b + 165 * OS1_S1 + 56) -
                                       p_over_q * *(b + 222 * OS1_S1 + 56);
            *(b + 165 * OS1_S1 + 87) =
                prefactor_y * *(b + 165 * OS1_S1 + 57) -
                p_over_q * *(b + 221 * OS1_S1 + 57) +
                one_over_two_q * *(b + 165 * OS1_S1 + 35);
            *(b + 165 * OS1_S1 + 88) = prefactor_z * *(b + 165 * OS1_S1 + 57) -
                                       p_over_q * *(b + 222 * OS1_S1 + 57);
            *(b + 165 * OS1_S1 + 89) =
                prefactor_z * *(b + 165 * OS1_S1 + 58) -
                p_over_q * *(b + 222 * OS1_S1 + 58) +
                one_over_two_q * *(b + 165 * OS1_S1 + 35);
            *(b + 165 * OS1_S1 + 90) =
                prefactor_y * *(b + 165 * OS1_S1 + 59) -
                p_over_q * *(b + 221 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 165 * OS1_S1 + 36);
            *(b + 165 * OS1_S1 + 91) = prefactor_z * *(b + 165 * OS1_S1 + 59) -
                                       p_over_q * *(b + 222 * OS1_S1 + 59);
            *(b + 165 * OS1_S1 + 92) = prefactor_y * *(b + 165 * OS1_S1 + 61) -
                                       p_over_q * *(b + 221 * OS1_S1 + 61);
            *(b + 165 * OS1_S1 + 93) =
                prefactor_z * *(b + 165 * OS1_S1 + 61) -
                p_over_q * *(b + 222 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 165 * OS1_S1 + 37);
            *(b + 165 * OS1_S1 + 94) =
                prefactor_x * *(b + 165 * OS1_S1 + 66) -
                p_over_q * *(b + 220 * OS1_S1 + 66) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 165 * OS1_S1 + 45);
            *(b + 165 * OS1_S1 + 95) = prefactor_z * *(b + 165 * OS1_S1 + 62) -
                                       p_over_q * *(b + 222 * OS1_S1 + 62);
            *(b + 165 * OS1_S1 + 96) =
                prefactor_z * *(b + 165 * OS1_S1 + 63) -
                p_over_q * *(b + 222 * OS1_S1 + 63) +
                one_over_two_q * *(b + 165 * OS1_S1 + 38);
            *(b + 165 * OS1_S1 + 97) = prefactor_y * *(b + 165 * OS1_S1 + 65) -
                                       p_over_q * *(b + 221 * OS1_S1 + 65);
            *(b + 165 * OS1_S1 + 98) =
                prefactor_x * *(b + 165 * OS1_S1 + 70) -
                p_over_q * *(b + 220 * OS1_S1 + 70) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 165 * OS1_S1 + 49);
            *(b + 165 * OS1_S1 + 99) =
                prefactor_x * *(b + 165 * OS1_S1 + 71) -
                p_over_q * *(b + 220 * OS1_S1 + 71) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 71) +
                one_over_two_q * *(b + 165 * OS1_S1 + 50);
            *(b + 165 * OS1_S1 + 100) = prefactor_z * *(b + 165 * OS1_S1 + 66) -
                                        p_over_q * *(b + 222 * OS1_S1 + 66);
            *(b + 165 * OS1_S1 + 101) =
                prefactor_z * *(b + 165 * OS1_S1 + 67) -
                p_over_q * *(b + 222 * OS1_S1 + 67) +
                one_over_two_q * *(b + 165 * OS1_S1 + 41);
            *(b + 165 * OS1_S1 + 102) =
                prefactor_y * *(b + 165 * OS1_S1 + 69) -
                p_over_q * *(b + 221 * OS1_S1 + 69) +
                one_over_two_q * *(b + 165 * OS1_S1 + 44);
            *(b + 165 * OS1_S1 + 103) = prefactor_y * *(b + 165 * OS1_S1 + 70) -
                                        p_over_q * *(b + 221 * OS1_S1 + 70);
            *(b + 165 * OS1_S1 + 104) =
                prefactor_x * *(b + 165 * OS1_S1 + 76) -
                p_over_q * *(b + 220 * OS1_S1 + 76) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 76) +
                one_over_two_q * *(b + 165 * OS1_S1 + 55);
            *(b + 165 * OS1_S1 + 105) =
                prefactor_x * *(b + 165 * OS1_S1 + 77) -
                p_over_q * *(b + 220 * OS1_S1 + 77) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 77);
            *(b + 165 * OS1_S1 + 106) = prefactor_z * *(b + 165 * OS1_S1 + 71) -
                                        p_over_q * *(b + 222 * OS1_S1 + 71);
            *(b + 165 * OS1_S1 + 107) =
                prefactor_x * *(b + 165 * OS1_S1 + 79) -
                p_over_q * *(b + 220 * OS1_S1 + 79) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 79);
            *(b + 165 * OS1_S1 + 108) =
                prefactor_x * *(b + 165 * OS1_S1 + 80) -
                p_over_q * *(b + 220 * OS1_S1 + 80) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 80);
            *(b + 165 * OS1_S1 + 109) =
                prefactor_x * *(b + 165 * OS1_S1 + 81) -
                p_over_q * *(b + 220 * OS1_S1 + 81) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 81);
            *(b + 165 * OS1_S1 + 110) = prefactor_y * *(b + 165 * OS1_S1 + 76) -
                                        p_over_q * *(b + 221 * OS1_S1 + 76);
            *(b + 165 * OS1_S1 + 111) =
                prefactor_x * *(b + 165 * OS1_S1 + 83) -
                p_over_q * *(b + 220 * OS1_S1 + 83) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 83);
            *(b + 165 * OS1_S1 + 112) =
                prefactor_y * *(b + 165 * OS1_S1 + 77) -
                p_over_q * *(b + 221 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 165 * OS1_S1 + 50);
            *(b + 165 * OS1_S1 + 113) = prefactor_z * *(b + 165 * OS1_S1 + 77) -
                                        p_over_q * *(b + 222 * OS1_S1 + 77);
            *(b + 165 * OS1_S1 + 114) =
                prefactor_z * *(b + 165 * OS1_S1 + 78) -
                p_over_q * *(b + 222 * OS1_S1 + 78) +
                one_over_two_q * *(b + 165 * OS1_S1 + 50);
            *(b + 165 * OS1_S1 + 115) =
                prefactor_z * *(b + 165 * OS1_S1 + 79) -
                p_over_q * *(b + 222 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 165 * OS1_S1 + 51);
            *(b + 165 * OS1_S1 + 116) =
                prefactor_y * *(b + 165 * OS1_S1 + 81) -
                p_over_q * *(b + 221 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 165 * OS1_S1 + 54);
            *(b + 165 * OS1_S1 + 117) =
                prefactor_y * *(b + 165 * OS1_S1 + 82) -
                p_over_q * *(b + 221 * OS1_S1 + 82) +
                one_over_two_q * *(b + 165 * OS1_S1 + 55);
            *(b + 165 * OS1_S1 + 118) = prefactor_y * *(b + 165 * OS1_S1 + 83) -
                                        p_over_q * *(b + 221 * OS1_S1 + 83);
            *(b + 165 * OS1_S1 + 119) =
                prefactor_z * *(b + 165 * OS1_S1 + 83) -
                p_over_q * *(b + 222 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 165 * OS1_S1 + 55);
            *(b + 166 * OS1_S1 + 84) =
                prefactor_x * *(b + 166 * OS1_S1 + 56) -
                p_over_q * *(b + 221 * OS1_S1 + 56) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 166 * OS1_S1 + 35);
            *(b + 166 * OS1_S1 + 85) =
                prefactor_y * *(b + 166 * OS1_S1 + 56) -
                p_over_q * *(b + 223 * OS1_S1 + 56) +
                one_over_two_q * *(b + 120 * OS1_S1 + 56);
            *(b + 166 * OS1_S1 + 86) = prefactor_z * *(b + 166 * OS1_S1 + 56) -
                                       p_over_q * *(b + 224 * OS1_S1 + 56);
            *(b + 166 * OS1_S1 + 87) =
                prefactor_y * *(b + 166 * OS1_S1 + 57) -
                p_over_q * *(b + 223 * OS1_S1 + 57) +
                one_over_two_q * *(b + 120 * OS1_S1 + 57) +
                one_over_two_q * *(b + 166 * OS1_S1 + 35);
            *(b + 166 * OS1_S1 + 88) = prefactor_z * *(b + 166 * OS1_S1 + 57) -
                                       p_over_q * *(b + 224 * OS1_S1 + 57);
            *(b + 166 * OS1_S1 + 89) =
                prefactor_z * *(b + 166 * OS1_S1 + 58) -
                p_over_q * *(b + 224 * OS1_S1 + 58) +
                one_over_two_q * *(b + 166 * OS1_S1 + 35);
            *(b + 166 * OS1_S1 + 90) =
                prefactor_y * *(b + 166 * OS1_S1 + 59) -
                p_over_q * *(b + 223 * OS1_S1 + 59) +
                one_over_two_q * *(b + 120 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 36);
            *(b + 166 * OS1_S1 + 91) = prefactor_z * *(b + 166 * OS1_S1 + 59) -
                                       p_over_q * *(b + 224 * OS1_S1 + 59);
            *(b + 166 * OS1_S1 + 92) =
                prefactor_y * *(b + 166 * OS1_S1 + 61) -
                p_over_q * *(b + 223 * OS1_S1 + 61) +
                one_over_two_q * *(b + 120 * OS1_S1 + 61);
            *(b + 166 * OS1_S1 + 93) =
                prefactor_z * *(b + 166 * OS1_S1 + 61) -
                p_over_q * *(b + 224 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 37);
            *(b + 166 * OS1_S1 + 94) =
                prefactor_x * *(b + 166 * OS1_S1 + 66) -
                p_over_q * *(b + 221 * OS1_S1 + 66) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 45);
            *(b + 166 * OS1_S1 + 95) = prefactor_z * *(b + 166 * OS1_S1 + 62) -
                                       p_over_q * *(b + 224 * OS1_S1 + 62);
            *(b + 166 * OS1_S1 + 96) =
                prefactor_z * *(b + 166 * OS1_S1 + 63) -
                p_over_q * *(b + 224 * OS1_S1 + 63) +
                one_over_two_q * *(b + 166 * OS1_S1 + 38);
            *(b + 166 * OS1_S1 + 97) =
                prefactor_y * *(b + 166 * OS1_S1 + 65) -
                p_over_q * *(b + 223 * OS1_S1 + 65) +
                one_over_two_q * *(b + 120 * OS1_S1 + 65);
            *(b + 166 * OS1_S1 + 98) =
                prefactor_x * *(b + 166 * OS1_S1 + 70) -
                p_over_q * *(b + 221 * OS1_S1 + 70) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 49);
            *(b + 166 * OS1_S1 + 99) =
                prefactor_x * *(b + 166 * OS1_S1 + 71) -
                p_over_q * *(b + 221 * OS1_S1 + 71) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 71) +
                one_over_two_q * *(b + 166 * OS1_S1 + 50);
            *(b + 166 * OS1_S1 + 100) = prefactor_z * *(b + 166 * OS1_S1 + 66) -
                                        p_over_q * *(b + 224 * OS1_S1 + 66);
            *(b + 166 * OS1_S1 + 101) =
                prefactor_z * *(b + 166 * OS1_S1 + 67) -
                p_over_q * *(b + 224 * OS1_S1 + 67) +
                one_over_two_q * *(b + 166 * OS1_S1 + 41);
            *(b + 166 * OS1_S1 + 102) =
                prefactor_y * *(b + 166 * OS1_S1 + 69) -
                p_over_q * *(b + 223 * OS1_S1 + 69) +
                one_over_two_q * *(b + 120 * OS1_S1 + 69) +
                one_over_two_q * *(b + 166 * OS1_S1 + 44);
            *(b + 166 * OS1_S1 + 103) =
                prefactor_y * *(b + 166 * OS1_S1 + 70) -
                p_over_q * *(b + 223 * OS1_S1 + 70) +
                one_over_two_q * *(b + 120 * OS1_S1 + 70);
            *(b + 166 * OS1_S1 + 104) =
                prefactor_x * *(b + 166 * OS1_S1 + 76) -
                p_over_q * *(b + 221 * OS1_S1 + 76) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 76) +
                one_over_two_q * *(b + 166 * OS1_S1 + 55);
            *(b + 166 * OS1_S1 + 105) =
                prefactor_x * *(b + 166 * OS1_S1 + 77) -
                p_over_q * *(b + 221 * OS1_S1 + 77) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 77);
            *(b + 166 * OS1_S1 + 106) = prefactor_z * *(b + 166 * OS1_S1 + 71) -
                                        p_over_q * *(b + 224 * OS1_S1 + 71);
            *(b + 166 * OS1_S1 + 107) =
                prefactor_x * *(b + 166 * OS1_S1 + 79) -
                p_over_q * *(b + 221 * OS1_S1 + 79) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 79);
            *(b + 166 * OS1_S1 + 108) =
                prefactor_x * *(b + 166 * OS1_S1 + 80) -
                p_over_q * *(b + 221 * OS1_S1 + 80) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 80);
            *(b + 166 * OS1_S1 + 109) =
                prefactor_x * *(b + 166 * OS1_S1 + 81) -
                p_over_q * *(b + 221 * OS1_S1 + 81) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 81);
            *(b + 166 * OS1_S1 + 110) =
                prefactor_y * *(b + 166 * OS1_S1 + 76) -
                p_over_q * *(b + 223 * OS1_S1 + 76) +
                one_over_two_q * *(b + 120 * OS1_S1 + 76);
            *(b + 166 * OS1_S1 + 111) =
                prefactor_x * *(b + 166 * OS1_S1 + 83) -
                p_over_q * *(b + 221 * OS1_S1 + 83) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 83);
            *(b + 166 * OS1_S1 + 112) =
                prefactor_y * *(b + 166 * OS1_S1 + 77) -
                p_over_q * *(b + 223 * OS1_S1 + 77) +
                one_over_two_q * *(b + 120 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 166 * OS1_S1 + 50);
            *(b + 166 * OS1_S1 + 113) = prefactor_z * *(b + 166 * OS1_S1 + 77) -
                                        p_over_q * *(b + 224 * OS1_S1 + 77);
            *(b + 166 * OS1_S1 + 114) =
                prefactor_z * *(b + 166 * OS1_S1 + 78) -
                p_over_q * *(b + 224 * OS1_S1 + 78) +
                one_over_two_q * *(b + 166 * OS1_S1 + 50);
            *(b + 166 * OS1_S1 + 115) =
                prefactor_z * *(b + 166 * OS1_S1 + 79) -
                p_over_q * *(b + 224 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 51);
            *(b + 166 * OS1_S1 + 116) =
                prefactor_y * *(b + 166 * OS1_S1 + 81) -
                p_over_q * *(b + 223 * OS1_S1 + 81) +
                one_over_two_q * *(b + 120 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 54);
            *(b + 166 * OS1_S1 + 117) =
                prefactor_y * *(b + 166 * OS1_S1 + 82) -
                p_over_q * *(b + 223 * OS1_S1 + 82) +
                one_over_two_q * *(b + 120 * OS1_S1 + 82) +
                one_over_two_q * *(b + 166 * OS1_S1 + 55);
            *(b + 166 * OS1_S1 + 118) =
                prefactor_y * *(b + 166 * OS1_S1 + 83) -
                p_over_q * *(b + 223 * OS1_S1 + 83) +
                one_over_two_q * *(b + 120 * OS1_S1 + 83);
            *(b + 166 * OS1_S1 + 119) =
                prefactor_z * *(b + 166 * OS1_S1 + 83) -
                p_over_q * *(b + 224 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 166 * OS1_S1 + 55);
            *(b + 167 * OS1_S1 + 84) =
                prefactor_x * *(b + 167 * OS1_S1 + 56) -
                p_over_q * *(b + 222 * OS1_S1 + 56) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 167 * OS1_S1 + 35);
            *(b + 167 * OS1_S1 + 85) = prefactor_y * *(b + 167 * OS1_S1 + 56) -
                                       p_over_q * *(b + 224 * OS1_S1 + 56);
            *(b + 167 * OS1_S1 + 86) =
                prefactor_z * *(b + 167 * OS1_S1 + 56) -
                p_over_q * *(b + 225 * OS1_S1 + 56) +
                one_over_two_q * *(b + 120 * OS1_S1 + 56);
            *(b + 167 * OS1_S1 + 87) =
                prefactor_y * *(b + 167 * OS1_S1 + 57) -
                p_over_q * *(b + 224 * OS1_S1 + 57) +
                one_over_two_q * *(b + 167 * OS1_S1 + 35);
            *(b + 167 * OS1_S1 + 88) = prefactor_y * *(b + 167 * OS1_S1 + 58) -
                                       p_over_q * *(b + 224 * OS1_S1 + 58);
            *(b + 167 * OS1_S1 + 89) =
                prefactor_z * *(b + 167 * OS1_S1 + 58) -
                p_over_q * *(b + 225 * OS1_S1 + 58) +
                one_over_two_q * *(b + 120 * OS1_S1 + 58) +
                one_over_two_q * *(b + 167 * OS1_S1 + 35);
            *(b + 167 * OS1_S1 + 90) =
                prefactor_y * *(b + 167 * OS1_S1 + 59) -
                p_over_q * *(b + 224 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 36);
            *(b + 167 * OS1_S1 + 91) =
                prefactor_z * *(b + 167 * OS1_S1 + 59) -
                p_over_q * *(b + 225 * OS1_S1 + 59) +
                one_over_two_q * *(b + 120 * OS1_S1 + 59);
            *(b + 167 * OS1_S1 + 92) = prefactor_y * *(b + 167 * OS1_S1 + 61) -
                                       p_over_q * *(b + 224 * OS1_S1 + 61);
            *(b + 167 * OS1_S1 + 93) =
                prefactor_z * *(b + 167 * OS1_S1 + 61) -
                p_over_q * *(b + 225 * OS1_S1 + 61) +
                one_over_two_q * *(b + 120 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 37);
            *(b + 167 * OS1_S1 + 94) =
                prefactor_x * *(b + 167 * OS1_S1 + 66) -
                p_over_q * *(b + 222 * OS1_S1 + 66) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 45);
            *(b + 167 * OS1_S1 + 95) =
                prefactor_z * *(b + 167 * OS1_S1 + 62) -
                p_over_q * *(b + 225 * OS1_S1 + 62) +
                one_over_two_q * *(b + 120 * OS1_S1 + 62);
            *(b + 167 * OS1_S1 + 96) =
                prefactor_y * *(b + 167 * OS1_S1 + 64) -
                p_over_q * *(b + 224 * OS1_S1 + 64) +
                one_over_two_q * *(b + 167 * OS1_S1 + 40);
            *(b + 167 * OS1_S1 + 97) = prefactor_y * *(b + 167 * OS1_S1 + 65) -
                                       p_over_q * *(b + 224 * OS1_S1 + 65);
            *(b + 167 * OS1_S1 + 98) =
                prefactor_x * *(b + 167 * OS1_S1 + 70) -
                p_over_q * *(b + 222 * OS1_S1 + 70) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 49);
            *(b + 167 * OS1_S1 + 99) =
                prefactor_x * *(b + 167 * OS1_S1 + 71) -
                p_over_q * *(b + 222 * OS1_S1 + 71) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 71) +
                one_over_two_q * *(b + 167 * OS1_S1 + 50);
            *(b + 167 * OS1_S1 + 100) =
                prefactor_z * *(b + 167 * OS1_S1 + 66) -
                p_over_q * *(b + 225 * OS1_S1 + 66) +
                one_over_two_q * *(b + 120 * OS1_S1 + 66);
            *(b + 167 * OS1_S1 + 101) =
                prefactor_z * *(b + 167 * OS1_S1 + 67) -
                p_over_q * *(b + 225 * OS1_S1 + 67) +
                one_over_two_q * *(b + 120 * OS1_S1 + 67) +
                one_over_two_q * *(b + 167 * OS1_S1 + 41);
            *(b + 167 * OS1_S1 + 102) =
                prefactor_y * *(b + 167 * OS1_S1 + 69) -
                p_over_q * *(b + 224 * OS1_S1 + 69) +
                one_over_two_q * *(b + 167 * OS1_S1 + 44);
            *(b + 167 * OS1_S1 + 103) = prefactor_y * *(b + 167 * OS1_S1 + 70) -
                                        p_over_q * *(b + 224 * OS1_S1 + 70);
            *(b + 167 * OS1_S1 + 104) =
                prefactor_x * *(b + 167 * OS1_S1 + 76) -
                p_over_q * *(b + 222 * OS1_S1 + 76) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 76) +
                one_over_two_q * *(b + 167 * OS1_S1 + 55);
            *(b + 167 * OS1_S1 + 105) =
                prefactor_x * *(b + 167 * OS1_S1 + 77) -
                p_over_q * *(b + 222 * OS1_S1 + 77) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 77);
            *(b + 167 * OS1_S1 + 106) =
                prefactor_z * *(b + 167 * OS1_S1 + 71) -
                p_over_q * *(b + 225 * OS1_S1 + 71) +
                one_over_two_q * *(b + 120 * OS1_S1 + 71);
            *(b + 167 * OS1_S1 + 107) =
                prefactor_x * *(b + 167 * OS1_S1 + 79) -
                p_over_q * *(b + 222 * OS1_S1 + 79) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 79);
            *(b + 167 * OS1_S1 + 108) =
                prefactor_x * *(b + 167 * OS1_S1 + 80) -
                p_over_q * *(b + 222 * OS1_S1 + 80) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 80);
            *(b + 167 * OS1_S1 + 109) =
                prefactor_x * *(b + 167 * OS1_S1 + 81) -
                p_over_q * *(b + 222 * OS1_S1 + 81) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 81);
            *(b + 167 * OS1_S1 + 110) = prefactor_y * *(b + 167 * OS1_S1 + 76) -
                                        p_over_q * *(b + 224 * OS1_S1 + 76);
            *(b + 167 * OS1_S1 + 111) =
                prefactor_x * *(b + 167 * OS1_S1 + 83) -
                p_over_q * *(b + 222 * OS1_S1 + 83) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 83);
            *(b + 167 * OS1_S1 + 112) =
                prefactor_y * *(b + 167 * OS1_S1 + 77) -
                p_over_q * *(b + 224 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 167 * OS1_S1 + 50);
            *(b + 167 * OS1_S1 + 113) =
                prefactor_z * *(b + 167 * OS1_S1 + 77) -
                p_over_q * *(b + 225 * OS1_S1 + 77) +
                one_over_two_q * *(b + 120 * OS1_S1 + 77);
            *(b + 167 * OS1_S1 + 114) =
                prefactor_z * *(b + 167 * OS1_S1 + 78) -
                p_over_q * *(b + 225 * OS1_S1 + 78) +
                one_over_two_q * *(b + 120 * OS1_S1 + 78) +
                one_over_two_q * *(b + 167 * OS1_S1 + 50);
            *(b + 167 * OS1_S1 + 115) =
                prefactor_z * *(b + 167 * OS1_S1 + 79) -
                p_over_q * *(b + 225 * OS1_S1 + 79) +
                one_over_two_q * *(b + 120 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 51);
            *(b + 167 * OS1_S1 + 116) =
                prefactor_y * *(b + 167 * OS1_S1 + 81) -
                p_over_q * *(b + 224 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 54);
            *(b + 167 * OS1_S1 + 117) =
                prefactor_y * *(b + 167 * OS1_S1 + 82) -
                p_over_q * *(b + 224 * OS1_S1 + 82) +
                one_over_two_q * *(b + 167 * OS1_S1 + 55);
            *(b + 167 * OS1_S1 + 118) = prefactor_y * *(b + 167 * OS1_S1 + 83) -
                                        p_over_q * *(b + 224 * OS1_S1 + 83);
            *(b + 167 * OS1_S1 + 119) =
                prefactor_z * *(b + 167 * OS1_S1 + 83) -
                p_over_q * *(b + 225 * OS1_S1 + 83) +
                one_over_two_q * *(b + 120 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 167 * OS1_S1 + 55);
            *(b + 168 * OS1_S1 + 84) =
                prefactor_x * *(b + 168 * OS1_S1 + 56) -
                p_over_q * *(b + 223 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 168 * OS1_S1 + 35);
            *(b + 168 * OS1_S1 + 85) =
                prefactor_y * *(b + 168 * OS1_S1 + 56) -
                p_over_q * *(b + 226 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 56);
            *(b + 168 * OS1_S1 + 86) = prefactor_z * *(b + 168 * OS1_S1 + 56) -
                                       p_over_q * *(b + 227 * OS1_S1 + 56);
            *(b + 168 * OS1_S1 + 87) =
                prefactor_y * *(b + 168 * OS1_S1 + 57) -
                p_over_q * *(b + 226 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 57) +
                one_over_two_q * *(b + 168 * OS1_S1 + 35);
            *(b + 168 * OS1_S1 + 88) = prefactor_z * *(b + 168 * OS1_S1 + 57) -
                                       p_over_q * *(b + 227 * OS1_S1 + 57);
            *(b + 168 * OS1_S1 + 89) =
                prefactor_z * *(b + 168 * OS1_S1 + 58) -
                p_over_q * *(b + 227 * OS1_S1 + 58) +
                one_over_two_q * *(b + 168 * OS1_S1 + 35);
            *(b + 168 * OS1_S1 + 90) =
                prefactor_y * *(b + 168 * OS1_S1 + 59) -
                p_over_q * *(b + 226 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 168 * OS1_S1 + 36);
            *(b + 168 * OS1_S1 + 91) = prefactor_z * *(b + 168 * OS1_S1 + 59) -
                                       p_over_q * *(b + 227 * OS1_S1 + 59);
            *(b + 168 * OS1_S1 + 92) =
                prefactor_y * *(b + 168 * OS1_S1 + 61) -
                p_over_q * *(b + 226 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 61);
            *(b + 168 * OS1_S1 + 93) =
                prefactor_z * *(b + 168 * OS1_S1 + 61) -
                p_over_q * *(b + 227 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 168 * OS1_S1 + 37);
            *(b + 168 * OS1_S1 + 94) =
                prefactor_x * *(b + 168 * OS1_S1 + 66) -
                p_over_q * *(b + 223 * OS1_S1 + 66) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 168 * OS1_S1 + 45);
            *(b + 168 * OS1_S1 + 95) = prefactor_z * *(b + 168 * OS1_S1 + 62) -
                                       p_over_q * *(b + 227 * OS1_S1 + 62);
            *(b + 168 * OS1_S1 + 96) =
                prefactor_z * *(b + 168 * OS1_S1 + 63) -
                p_over_q * *(b + 227 * OS1_S1 + 63) +
                one_over_two_q * *(b + 168 * OS1_S1 + 38);
            *(b + 168 * OS1_S1 + 97) =
                prefactor_y * *(b + 168 * OS1_S1 + 65) -
                p_over_q * *(b + 226 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 65);
            *(b + 168 * OS1_S1 + 98) =
                prefactor_x * *(b + 168 * OS1_S1 + 70) -
                p_over_q * *(b + 223 * OS1_S1 + 70) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 168 * OS1_S1 + 49);
            *(b + 168 * OS1_S1 + 99) =
                prefactor_x * *(b + 168 * OS1_S1 + 71) -
                p_over_q * *(b + 223 * OS1_S1 + 71) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 71) +
                one_over_two_q * *(b + 168 * OS1_S1 + 50);
            *(b + 168 * OS1_S1 + 100) = prefactor_z * *(b + 168 * OS1_S1 + 66) -
                                        p_over_q * *(b + 227 * OS1_S1 + 66);
            *(b + 168 * OS1_S1 + 101) =
                prefactor_z * *(b + 168 * OS1_S1 + 67) -
                p_over_q * *(b + 227 * OS1_S1 + 67) +
                one_over_two_q * *(b + 168 * OS1_S1 + 41);
            *(b + 168 * OS1_S1 + 102) =
                prefactor_y * *(b + 168 * OS1_S1 + 69) -
                p_over_q * *(b + 226 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 69) +
                one_over_two_q * *(b + 168 * OS1_S1 + 44);
            *(b + 168 * OS1_S1 + 103) =
                prefactor_y * *(b + 168 * OS1_S1 + 70) -
                p_over_q * *(b + 226 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 70);
            *(b + 168 * OS1_S1 + 104) =
                prefactor_x * *(b + 168 * OS1_S1 + 76) -
                p_over_q * *(b + 223 * OS1_S1 + 76) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 76) +
                one_over_two_q * *(b + 168 * OS1_S1 + 55);
            *(b + 168 * OS1_S1 + 105) =
                prefactor_x * *(b + 168 * OS1_S1 + 77) -
                p_over_q * *(b + 223 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 77);
            *(b + 168 * OS1_S1 + 106) = prefactor_z * *(b + 168 * OS1_S1 + 71) -
                                        p_over_q * *(b + 227 * OS1_S1 + 71);
            *(b + 168 * OS1_S1 + 107) =
                prefactor_x * *(b + 168 * OS1_S1 + 79) -
                p_over_q * *(b + 223 * OS1_S1 + 79) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 79);
            *(b + 168 * OS1_S1 + 108) =
                prefactor_x * *(b + 168 * OS1_S1 + 80) -
                p_over_q * *(b + 223 * OS1_S1 + 80) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 80);
            *(b + 168 * OS1_S1 + 109) =
                prefactor_x * *(b + 168 * OS1_S1 + 81) -
                p_over_q * *(b + 223 * OS1_S1 + 81) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 81);
            *(b + 168 * OS1_S1 + 110) =
                prefactor_y * *(b + 168 * OS1_S1 + 76) -
                p_over_q * *(b + 226 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 76);
            *(b + 168 * OS1_S1 + 111) =
                prefactor_x * *(b + 168 * OS1_S1 + 83) -
                p_over_q * *(b + 223 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 83);
            *(b + 168 * OS1_S1 + 112) =
                prefactor_y * *(b + 168 * OS1_S1 + 77) -
                p_over_q * *(b + 226 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 168 * OS1_S1 + 50);
            *(b + 168 * OS1_S1 + 113) = prefactor_z * *(b + 168 * OS1_S1 + 77) -
                                        p_over_q * *(b + 227 * OS1_S1 + 77);
            *(b + 168 * OS1_S1 + 114) =
                prefactor_z * *(b + 168 * OS1_S1 + 78) -
                p_over_q * *(b + 227 * OS1_S1 + 78) +
                one_over_two_q * *(b + 168 * OS1_S1 + 50);
            *(b + 168 * OS1_S1 + 115) =
                prefactor_z * *(b + 168 * OS1_S1 + 79) -
                p_over_q * *(b + 227 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 168 * OS1_S1 + 51);
            *(b + 168 * OS1_S1 + 116) =
                prefactor_y * *(b + 168 * OS1_S1 + 81) -
                p_over_q * *(b + 226 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 168 * OS1_S1 + 54);
            *(b + 168 * OS1_S1 + 117) =
                prefactor_y * *(b + 168 * OS1_S1 + 82) -
                p_over_q * *(b + 226 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 82) +
                one_over_two_q * *(b + 168 * OS1_S1 + 55);
            *(b + 168 * OS1_S1 + 118) =
                prefactor_y * *(b + 168 * OS1_S1 + 83) -
                p_over_q * *(b + 226 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 83);
            *(b + 168 * OS1_S1 + 119) =
                prefactor_z * *(b + 168 * OS1_S1 + 83) -
                p_over_q * *(b + 227 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 168 * OS1_S1 + 55);
            *(b + 169 * OS1_S1 + 84) =
                prefactor_x * *(b + 169 * OS1_S1 + 56) -
                p_over_q * *(b + 224 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 169 * OS1_S1 + 35);
            *(b + 169 * OS1_S1 + 85) =
                prefactor_y * *(b + 169 * OS1_S1 + 56) -
                p_over_q * *(b + 227 * OS1_S1 + 56) +
                one_over_two_q * *(b + 122 * OS1_S1 + 56);
            *(b + 169 * OS1_S1 + 86) =
                prefactor_z * *(b + 169 * OS1_S1 + 56) -
                p_over_q * *(b + 228 * OS1_S1 + 56) +
                one_over_two_q * *(b + 121 * OS1_S1 + 56);
            *(b + 169 * OS1_S1 + 87) =
                prefactor_y * *(b + 169 * OS1_S1 + 57) -
                p_over_q * *(b + 227 * OS1_S1 + 57) +
                one_over_two_q * *(b + 122 * OS1_S1 + 57) +
                one_over_two_q * *(b + 169 * OS1_S1 + 35);
            *(b + 169 * OS1_S1 + 88) =
                prefactor_z * *(b + 169 * OS1_S1 + 57) -
                p_over_q * *(b + 228 * OS1_S1 + 57) +
                one_over_two_q * *(b + 121 * OS1_S1 + 57);
            *(b + 169 * OS1_S1 + 89) =
                prefactor_z * *(b + 169 * OS1_S1 + 58) -
                p_over_q * *(b + 228 * OS1_S1 + 58) +
                one_over_two_q * *(b + 121 * OS1_S1 + 58) +
                one_over_two_q * *(b + 169 * OS1_S1 + 35);
            *(b + 169 * OS1_S1 + 90) =
                prefactor_y * *(b + 169 * OS1_S1 + 59) -
                p_over_q * *(b + 227 * OS1_S1 + 59) +
                one_over_two_q * *(b + 122 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 36);
            *(b + 169 * OS1_S1 + 91) =
                prefactor_z * *(b + 169 * OS1_S1 + 59) -
                p_over_q * *(b + 228 * OS1_S1 + 59) +
                one_over_two_q * *(b + 121 * OS1_S1 + 59);
            *(b + 169 * OS1_S1 + 92) =
                prefactor_y * *(b + 169 * OS1_S1 + 61) -
                p_over_q * *(b + 227 * OS1_S1 + 61) +
                one_over_two_q * *(b + 122 * OS1_S1 + 61);
            *(b + 169 * OS1_S1 + 93) =
                prefactor_z * *(b + 169 * OS1_S1 + 61) -
                p_over_q * *(b + 228 * OS1_S1 + 61) +
                one_over_two_q * *(b + 121 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 37);
            *(b + 169 * OS1_S1 + 94) =
                prefactor_x * *(b + 169 * OS1_S1 + 66) -
                p_over_q * *(b + 224 * OS1_S1 + 66) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 45);
            *(b + 169 * OS1_S1 + 95) =
                prefactor_z * *(b + 169 * OS1_S1 + 62) -
                p_over_q * *(b + 228 * OS1_S1 + 62) +
                one_over_two_q * *(b + 121 * OS1_S1 + 62);
            *(b + 169 * OS1_S1 + 96) =
                prefactor_z * *(b + 169 * OS1_S1 + 63) -
                p_over_q * *(b + 228 * OS1_S1 + 63) +
                one_over_two_q * *(b + 121 * OS1_S1 + 63) +
                one_over_two_q * *(b + 169 * OS1_S1 + 38);
            *(b + 169 * OS1_S1 + 97) =
                prefactor_y * *(b + 169 * OS1_S1 + 65) -
                p_over_q * *(b + 227 * OS1_S1 + 65) +
                one_over_two_q * *(b + 122 * OS1_S1 + 65);
            *(b + 169 * OS1_S1 + 98) =
                prefactor_x * *(b + 169 * OS1_S1 + 70) -
                p_over_q * *(b + 224 * OS1_S1 + 70) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 49);
            *(b + 169 * OS1_S1 + 99) =
                prefactor_x * *(b + 169 * OS1_S1 + 71) -
                p_over_q * *(b + 224 * OS1_S1 + 71) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 71) +
                one_over_two_q * *(b + 169 * OS1_S1 + 50);
            *(b + 169 * OS1_S1 + 100) =
                prefactor_z * *(b + 169 * OS1_S1 + 66) -
                p_over_q * *(b + 228 * OS1_S1 + 66) +
                one_over_two_q * *(b + 121 * OS1_S1 + 66);
            *(b + 169 * OS1_S1 + 101) =
                prefactor_z * *(b + 169 * OS1_S1 + 67) -
                p_over_q * *(b + 228 * OS1_S1 + 67) +
                one_over_two_q * *(b + 121 * OS1_S1 + 67) +
                one_over_two_q * *(b + 169 * OS1_S1 + 41);
            *(b + 169 * OS1_S1 + 102) =
                prefactor_y * *(b + 169 * OS1_S1 + 69) -
                p_over_q * *(b + 227 * OS1_S1 + 69) +
                one_over_two_q * *(b + 122 * OS1_S1 + 69) +
                one_over_two_q * *(b + 169 * OS1_S1 + 44);
            *(b + 169 * OS1_S1 + 103) =
                prefactor_y * *(b + 169 * OS1_S1 + 70) -
                p_over_q * *(b + 227 * OS1_S1 + 70) +
                one_over_two_q * *(b + 122 * OS1_S1 + 70);
            *(b + 169 * OS1_S1 + 104) =
                prefactor_x * *(b + 169 * OS1_S1 + 76) -
                p_over_q * *(b + 224 * OS1_S1 + 76) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 76) +
                one_over_two_q * *(b + 169 * OS1_S1 + 55);
            *(b + 169 * OS1_S1 + 105) =
                prefactor_x * *(b + 169 * OS1_S1 + 77) -
                p_over_q * *(b + 224 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 77);
            *(b + 169 * OS1_S1 + 106) =
                prefactor_z * *(b + 169 * OS1_S1 + 71) -
                p_over_q * *(b + 228 * OS1_S1 + 71) +
                one_over_two_q * *(b + 121 * OS1_S1 + 71);
            *(b + 169 * OS1_S1 + 107) =
                prefactor_x * *(b + 169 * OS1_S1 + 79) -
                p_over_q * *(b + 224 * OS1_S1 + 79) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 79);
            *(b + 169 * OS1_S1 + 108) =
                prefactor_x * *(b + 169 * OS1_S1 + 80) -
                p_over_q * *(b + 224 * OS1_S1 + 80) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 80);
            *(b + 169 * OS1_S1 + 109) =
                prefactor_x * *(b + 169 * OS1_S1 + 81) -
                p_over_q * *(b + 224 * OS1_S1 + 81) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 81);
            *(b + 169 * OS1_S1 + 110) =
                prefactor_y * *(b + 169 * OS1_S1 + 76) -
                p_over_q * *(b + 227 * OS1_S1 + 76) +
                one_over_two_q * *(b + 122 * OS1_S1 + 76);
            *(b + 169 * OS1_S1 + 111) =
                prefactor_x * *(b + 169 * OS1_S1 + 83) -
                p_over_q * *(b + 224 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 83);
            *(b + 169 * OS1_S1 + 112) =
                prefactor_y * *(b + 169 * OS1_S1 + 77) -
                p_over_q * *(b + 227 * OS1_S1 + 77) +
                one_over_two_q * *(b + 122 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 169 * OS1_S1 + 50);
            *(b + 169 * OS1_S1 + 113) =
                prefactor_z * *(b + 169 * OS1_S1 + 77) -
                p_over_q * *(b + 228 * OS1_S1 + 77) +
                one_over_two_q * *(b + 121 * OS1_S1 + 77);
            *(b + 169 * OS1_S1 + 114) =
                prefactor_z * *(b + 169 * OS1_S1 + 78) -
                p_over_q * *(b + 228 * OS1_S1 + 78) +
                one_over_two_q * *(b + 121 * OS1_S1 + 78) +
                one_over_two_q * *(b + 169 * OS1_S1 + 50);
            *(b + 169 * OS1_S1 + 115) =
                prefactor_z * *(b + 169 * OS1_S1 + 79) -
                p_over_q * *(b + 228 * OS1_S1 + 79) +
                one_over_two_q * *(b + 121 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 51);
            *(b + 169 * OS1_S1 + 116) =
                prefactor_y * *(b + 169 * OS1_S1 + 81) -
                p_over_q * *(b + 227 * OS1_S1 + 81) +
                one_over_two_q * *(b + 122 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 54);
            *(b + 169 * OS1_S1 + 117) =
                prefactor_y * *(b + 169 * OS1_S1 + 82) -
                p_over_q * *(b + 227 * OS1_S1 + 82) +
                one_over_two_q * *(b + 122 * OS1_S1 + 82) +
                one_over_two_q * *(b + 169 * OS1_S1 + 55);
            *(b + 169 * OS1_S1 + 118) =
                prefactor_y * *(b + 169 * OS1_S1 + 83) -
                p_over_q * *(b + 227 * OS1_S1 + 83) +
                one_over_two_q * *(b + 122 * OS1_S1 + 83);
            *(b + 169 * OS1_S1 + 119) =
                prefactor_z * *(b + 169 * OS1_S1 + 83) -
                p_over_q * *(b + 228 * OS1_S1 + 83) +
                one_over_two_q * *(b + 121 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 169 * OS1_S1 + 55);
            *(b + 170 * OS1_S1 + 84) =
                prefactor_x * *(b + 170 * OS1_S1 + 56) -
                p_over_q * *(b + 225 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 170 * OS1_S1 + 35);
            *(b + 170 * OS1_S1 + 85) = prefactor_y * *(b + 170 * OS1_S1 + 56) -
                                       p_over_q * *(b + 228 * OS1_S1 + 56);
            *(b + 170 * OS1_S1 + 86) =
                prefactor_z * *(b + 170 * OS1_S1 + 56) -
                p_over_q * *(b + 229 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 56);
            *(b + 170 * OS1_S1 + 87) =
                prefactor_y * *(b + 170 * OS1_S1 + 57) -
                p_over_q * *(b + 228 * OS1_S1 + 57) +
                one_over_two_q * *(b + 170 * OS1_S1 + 35);
            *(b + 170 * OS1_S1 + 88) = prefactor_y * *(b + 170 * OS1_S1 + 58) -
                                       p_over_q * *(b + 228 * OS1_S1 + 58);
            *(b + 170 * OS1_S1 + 89) =
                prefactor_z * *(b + 170 * OS1_S1 + 58) -
                p_over_q * *(b + 229 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 58) +
                one_over_two_q * *(b + 170 * OS1_S1 + 35);
            *(b + 170 * OS1_S1 + 90) =
                prefactor_y * *(b + 170 * OS1_S1 + 59) -
                p_over_q * *(b + 228 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 170 * OS1_S1 + 36);
            *(b + 170 * OS1_S1 + 91) =
                prefactor_z * *(b + 170 * OS1_S1 + 59) -
                p_over_q * *(b + 229 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 59);
            *(b + 170 * OS1_S1 + 92) = prefactor_y * *(b + 170 * OS1_S1 + 61) -
                                       p_over_q * *(b + 228 * OS1_S1 + 61);
            *(b + 170 * OS1_S1 + 93) =
                prefactor_z * *(b + 170 * OS1_S1 + 61) -
                p_over_q * *(b + 229 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 170 * OS1_S1 + 37);
            *(b + 170 * OS1_S1 + 94) =
                prefactor_x * *(b + 170 * OS1_S1 + 66) -
                p_over_q * *(b + 225 * OS1_S1 + 66) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 170 * OS1_S1 + 45);
            *(b + 170 * OS1_S1 + 95) =
                prefactor_z * *(b + 170 * OS1_S1 + 62) -
                p_over_q * *(b + 229 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 62);
            *(b + 170 * OS1_S1 + 96) =
                prefactor_y * *(b + 170 * OS1_S1 + 64) -
                p_over_q * *(b + 228 * OS1_S1 + 64) +
                one_over_two_q * *(b + 170 * OS1_S1 + 40);
            *(b + 170 * OS1_S1 + 97) = prefactor_y * *(b + 170 * OS1_S1 + 65) -
                                       p_over_q * *(b + 228 * OS1_S1 + 65);
            *(b + 170 * OS1_S1 + 98) =
                prefactor_x * *(b + 170 * OS1_S1 + 70) -
                p_over_q * *(b + 225 * OS1_S1 + 70) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 170 * OS1_S1 + 49);
            *(b + 170 * OS1_S1 + 99) =
                prefactor_x * *(b + 170 * OS1_S1 + 71) -
                p_over_q * *(b + 225 * OS1_S1 + 71) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 71) +
                one_over_two_q * *(b + 170 * OS1_S1 + 50);
            *(b + 170 * OS1_S1 + 100) =
                prefactor_z * *(b + 170 * OS1_S1 + 66) -
                p_over_q * *(b + 229 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 66);
            *(b + 170 * OS1_S1 + 101) =
                prefactor_z * *(b + 170 * OS1_S1 + 67) -
                p_over_q * *(b + 229 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 67) +
                one_over_two_q * *(b + 170 * OS1_S1 + 41);
            *(b + 170 * OS1_S1 + 102) =
                prefactor_y * *(b + 170 * OS1_S1 + 69) -
                p_over_q * *(b + 228 * OS1_S1 + 69) +
                one_over_two_q * *(b + 170 * OS1_S1 + 44);
            *(b + 170 * OS1_S1 + 103) = prefactor_y * *(b + 170 * OS1_S1 + 70) -
                                        p_over_q * *(b + 228 * OS1_S1 + 70);
            *(b + 170 * OS1_S1 + 104) =
                prefactor_x * *(b + 170 * OS1_S1 + 76) -
                p_over_q * *(b + 225 * OS1_S1 + 76) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 76) +
                one_over_two_q * *(b + 170 * OS1_S1 + 55);
            *(b + 170 * OS1_S1 + 105) =
                prefactor_x * *(b + 170 * OS1_S1 + 77) -
                p_over_q * *(b + 225 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 77);
            *(b + 170 * OS1_S1 + 106) =
                prefactor_z * *(b + 170 * OS1_S1 + 71) -
                p_over_q * *(b + 229 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 71);
            *(b + 170 * OS1_S1 + 107) =
                prefactor_x * *(b + 170 * OS1_S1 + 79) -
                p_over_q * *(b + 225 * OS1_S1 + 79) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 79);
            *(b + 170 * OS1_S1 + 108) =
                prefactor_x * *(b + 170 * OS1_S1 + 80) -
                p_over_q * *(b + 225 * OS1_S1 + 80) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 80);
            *(b + 170 * OS1_S1 + 109) =
                prefactor_x * *(b + 170 * OS1_S1 + 81) -
                p_over_q * *(b + 225 * OS1_S1 + 81) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 81);
            *(b + 170 * OS1_S1 + 110) = prefactor_y * *(b + 170 * OS1_S1 + 76) -
                                        p_over_q * *(b + 228 * OS1_S1 + 76);
            *(b + 170 * OS1_S1 + 111) =
                prefactor_x * *(b + 170 * OS1_S1 + 83) -
                p_over_q * *(b + 225 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 83);
            *(b + 170 * OS1_S1 + 112) =
                prefactor_y * *(b + 170 * OS1_S1 + 77) -
                p_over_q * *(b + 228 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 170 * OS1_S1 + 50);
            *(b + 170 * OS1_S1 + 113) =
                prefactor_z * *(b + 170 * OS1_S1 + 77) -
                p_over_q * *(b + 229 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 77);
            *(b + 170 * OS1_S1 + 114) =
                prefactor_z * *(b + 170 * OS1_S1 + 78) -
                p_over_q * *(b + 229 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 78) +
                one_over_two_q * *(b + 170 * OS1_S1 + 50);
            *(b + 170 * OS1_S1 + 115) =
                prefactor_z * *(b + 170 * OS1_S1 + 79) -
                p_over_q * *(b + 229 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 170 * OS1_S1 + 51);
            *(b + 170 * OS1_S1 + 116) =
                prefactor_y * *(b + 170 * OS1_S1 + 81) -
                p_over_q * *(b + 228 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 170 * OS1_S1 + 54);
            *(b + 170 * OS1_S1 + 117) =
                prefactor_y * *(b + 170 * OS1_S1 + 82) -
                p_over_q * *(b + 228 * OS1_S1 + 82) +
                one_over_two_q * *(b + 170 * OS1_S1 + 55);
            *(b + 170 * OS1_S1 + 118) = prefactor_y * *(b + 170 * OS1_S1 + 83) -
                                        p_over_q * *(b + 228 * OS1_S1 + 83);
            *(b + 170 * OS1_S1 + 119) =
                prefactor_z * *(b + 170 * OS1_S1 + 83) -
                p_over_q * *(b + 229 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 170 * OS1_S1 + 55);
            *(b + 171 * OS1_S1 + 84) =
                prefactor_x * *(b + 171 * OS1_S1 + 56) -
                p_over_q * *(b + 226 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 171 * OS1_S1 + 35);
            *(b + 171 * OS1_S1 + 85) =
                prefactor_y * *(b + 171 * OS1_S1 + 56) -
                p_over_q * *(b + 230 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 56);
            *(b + 171 * OS1_S1 + 86) = prefactor_z * *(b + 171 * OS1_S1 + 56) -
                                       p_over_q * *(b + 231 * OS1_S1 + 56);
            *(b + 171 * OS1_S1 + 87) =
                prefactor_y * *(b + 171 * OS1_S1 + 57) -
                p_over_q * *(b + 230 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 57) +
                one_over_two_q * *(b + 171 * OS1_S1 + 35);
            *(b + 171 * OS1_S1 + 88) = prefactor_z * *(b + 171 * OS1_S1 + 57) -
                                       p_over_q * *(b + 231 * OS1_S1 + 57);
            *(b + 171 * OS1_S1 + 89) =
                prefactor_z * *(b + 171 * OS1_S1 + 58) -
                p_over_q * *(b + 231 * OS1_S1 + 58) +
                one_over_two_q * *(b + 171 * OS1_S1 + 35);
            *(b + 171 * OS1_S1 + 90) =
                prefactor_y * *(b + 171 * OS1_S1 + 59) -
                p_over_q * *(b + 230 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 171 * OS1_S1 + 36);
            *(b + 171 * OS1_S1 + 91) = prefactor_z * *(b + 171 * OS1_S1 + 59) -
                                       p_over_q * *(b + 231 * OS1_S1 + 59);
            *(b + 171 * OS1_S1 + 92) =
                prefactor_y * *(b + 171 * OS1_S1 + 61) -
                p_over_q * *(b + 230 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 61);
            *(b + 171 * OS1_S1 + 93) =
                prefactor_z * *(b + 171 * OS1_S1 + 61) -
                p_over_q * *(b + 231 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 171 * OS1_S1 + 37);
            *(b + 171 * OS1_S1 + 94) =
                prefactor_x * *(b + 171 * OS1_S1 + 66) -
                p_over_q * *(b + 226 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 171 * OS1_S1 + 45);
            *(b + 171 * OS1_S1 + 95) = prefactor_z * *(b + 171 * OS1_S1 + 62) -
                                       p_over_q * *(b + 231 * OS1_S1 + 62);
            *(b + 171 * OS1_S1 + 96) =
                prefactor_z * *(b + 171 * OS1_S1 + 63) -
                p_over_q * *(b + 231 * OS1_S1 + 63) +
                one_over_two_q * *(b + 171 * OS1_S1 + 38);
            *(b + 171 * OS1_S1 + 97) =
                prefactor_y * *(b + 171 * OS1_S1 + 65) -
                p_over_q * *(b + 230 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 65);
            *(b + 171 * OS1_S1 + 98) =
                prefactor_x * *(b + 171 * OS1_S1 + 70) -
                p_over_q * *(b + 226 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 171 * OS1_S1 + 49);
            *(b + 171 * OS1_S1 + 99) =
                prefactor_x * *(b + 171 * OS1_S1 + 71) -
                p_over_q * *(b + 226 * OS1_S1 + 71) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 71) +
                one_over_two_q * *(b + 171 * OS1_S1 + 50);
            *(b + 171 * OS1_S1 + 100) = prefactor_z * *(b + 171 * OS1_S1 + 66) -
                                        p_over_q * *(b + 231 * OS1_S1 + 66);
            *(b + 171 * OS1_S1 + 101) =
                prefactor_z * *(b + 171 * OS1_S1 + 67) -
                p_over_q * *(b + 231 * OS1_S1 + 67) +
                one_over_two_q * *(b + 171 * OS1_S1 + 41);
            *(b + 171 * OS1_S1 + 102) =
                prefactor_y * *(b + 171 * OS1_S1 + 69) -
                p_over_q * *(b + 230 * OS1_S1 + 69) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 69) +
                one_over_two_q * *(b + 171 * OS1_S1 + 44);
            *(b + 171 * OS1_S1 + 103) =
                prefactor_y * *(b + 171 * OS1_S1 + 70) -
                p_over_q * *(b + 230 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 70);
            *(b + 171 * OS1_S1 + 104) =
                prefactor_x * *(b + 171 * OS1_S1 + 76) -
                p_over_q * *(b + 226 * OS1_S1 + 76) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 76) +
                one_over_two_q * *(b + 171 * OS1_S1 + 55);
            *(b + 171 * OS1_S1 + 105) =
                prefactor_x * *(b + 171 * OS1_S1 + 77) -
                p_over_q * *(b + 226 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 77);
            *(b + 171 * OS1_S1 + 106) = prefactor_z * *(b + 171 * OS1_S1 + 71) -
                                        p_over_q * *(b + 231 * OS1_S1 + 71);
            *(b + 171 * OS1_S1 + 107) =
                prefactor_x * *(b + 171 * OS1_S1 + 79) -
                p_over_q * *(b + 226 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 79);
            *(b + 171 * OS1_S1 + 108) =
                prefactor_x * *(b + 171 * OS1_S1 + 80) -
                p_over_q * *(b + 226 * OS1_S1 + 80) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 80);
            *(b + 171 * OS1_S1 + 109) =
                prefactor_x * *(b + 171 * OS1_S1 + 81) -
                p_over_q * *(b + 226 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 81);
            *(b + 171 * OS1_S1 + 110) =
                prefactor_y * *(b + 171 * OS1_S1 + 76) -
                p_over_q * *(b + 230 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 76);
            *(b + 171 * OS1_S1 + 111) =
                prefactor_x * *(b + 171 * OS1_S1 + 83) -
                p_over_q * *(b + 226 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 83);
            *(b + 171 * OS1_S1 + 112) =
                prefactor_y * *(b + 171 * OS1_S1 + 77) -
                p_over_q * *(b + 230 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 171 * OS1_S1 + 50);
            *(b + 171 * OS1_S1 + 113) = prefactor_z * *(b + 171 * OS1_S1 + 77) -
                                        p_over_q * *(b + 231 * OS1_S1 + 77);
            *(b + 171 * OS1_S1 + 114) =
                prefactor_z * *(b + 171 * OS1_S1 + 78) -
                p_over_q * *(b + 231 * OS1_S1 + 78) +
                one_over_two_q * *(b + 171 * OS1_S1 + 50);
            *(b + 171 * OS1_S1 + 115) =
                prefactor_z * *(b + 171 * OS1_S1 + 79) -
                p_over_q * *(b + 231 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 171 * OS1_S1 + 51);
            *(b + 171 * OS1_S1 + 116) =
                prefactor_y * *(b + 171 * OS1_S1 + 81) -
                p_over_q * *(b + 230 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 171 * OS1_S1 + 54);
            *(b + 171 * OS1_S1 + 117) =
                prefactor_y * *(b + 171 * OS1_S1 + 82) -
                p_over_q * *(b + 230 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 82) +
                one_over_two_q * *(b + 171 * OS1_S1 + 55);
            *(b + 171 * OS1_S1 + 118) =
                prefactor_y * *(b + 171 * OS1_S1 + 83) -
                p_over_q * *(b + 230 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 83);
            *(b + 171 * OS1_S1 + 119) =
                prefactor_z * *(b + 171 * OS1_S1 + 83) -
                p_over_q * *(b + 231 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 171 * OS1_S1 + 55);
            *(b + 172 * OS1_S1 + 84) =
                prefactor_x * *(b + 172 * OS1_S1 + 56) -
                p_over_q * *(b + 227 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 172 * OS1_S1 + 35);
            *(b + 172 * OS1_S1 + 85) =
                prefactor_y * *(b + 172 * OS1_S1 + 56) -
                p_over_q * *(b + 231 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 56);
            *(b + 172 * OS1_S1 + 86) =
                prefactor_z * *(b + 172 * OS1_S1 + 56) -
                p_over_q * *(b + 232 * OS1_S1 + 56) +
                one_over_two_q * *(b + 123 * OS1_S1 + 56);
            *(b + 172 * OS1_S1 + 87) =
                prefactor_y * *(b + 172 * OS1_S1 + 57) -
                p_over_q * *(b + 231 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 57) +
                one_over_two_q * *(b + 172 * OS1_S1 + 35);
            *(b + 172 * OS1_S1 + 88) =
                prefactor_z * *(b + 172 * OS1_S1 + 57) -
                p_over_q * *(b + 232 * OS1_S1 + 57) +
                one_over_two_q * *(b + 123 * OS1_S1 + 57);
            *(b + 172 * OS1_S1 + 89) =
                prefactor_z * *(b + 172 * OS1_S1 + 58) -
                p_over_q * *(b + 232 * OS1_S1 + 58) +
                one_over_two_q * *(b + 123 * OS1_S1 + 58) +
                one_over_two_q * *(b + 172 * OS1_S1 + 35);
            *(b + 172 * OS1_S1 + 90) =
                prefactor_y * *(b + 172 * OS1_S1 + 59) -
                p_over_q * *(b + 231 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 36);
            *(b + 172 * OS1_S1 + 91) =
                prefactor_z * *(b + 172 * OS1_S1 + 59) -
                p_over_q * *(b + 232 * OS1_S1 + 59) +
                one_over_two_q * *(b + 123 * OS1_S1 + 59);
            *(b + 172 * OS1_S1 + 92) =
                prefactor_y * *(b + 172 * OS1_S1 + 61) -
                p_over_q * *(b + 231 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 61);
            *(b + 172 * OS1_S1 + 93) =
                prefactor_z * *(b + 172 * OS1_S1 + 61) -
                p_over_q * *(b + 232 * OS1_S1 + 61) +
                one_over_two_q * *(b + 123 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 37);
            *(b + 172 * OS1_S1 + 94) =
                prefactor_x * *(b + 172 * OS1_S1 + 66) -
                p_over_q * *(b + 227 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 45);
            *(b + 172 * OS1_S1 + 95) =
                prefactor_z * *(b + 172 * OS1_S1 + 62) -
                p_over_q * *(b + 232 * OS1_S1 + 62) +
                one_over_two_q * *(b + 123 * OS1_S1 + 62);
            *(b + 172 * OS1_S1 + 96) =
                prefactor_z * *(b + 172 * OS1_S1 + 63) -
                p_over_q * *(b + 232 * OS1_S1 + 63) +
                one_over_two_q * *(b + 123 * OS1_S1 + 63) +
                one_over_two_q * *(b + 172 * OS1_S1 + 38);
            *(b + 172 * OS1_S1 + 97) =
                prefactor_y * *(b + 172 * OS1_S1 + 65) -
                p_over_q * *(b + 231 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 65);
            *(b + 172 * OS1_S1 + 98) =
                prefactor_x * *(b + 172 * OS1_S1 + 70) -
                p_over_q * *(b + 227 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 49);
            *(b + 172 * OS1_S1 + 99) =
                prefactor_x * *(b + 172 * OS1_S1 + 71) -
                p_over_q * *(b + 227 * OS1_S1 + 71) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 71) +
                one_over_two_q * *(b + 172 * OS1_S1 + 50);
            *(b + 172 * OS1_S1 + 100) =
                prefactor_z * *(b + 172 * OS1_S1 + 66) -
                p_over_q * *(b + 232 * OS1_S1 + 66) +
                one_over_two_q * *(b + 123 * OS1_S1 + 66);
            *(b + 172 * OS1_S1 + 101) =
                prefactor_z * *(b + 172 * OS1_S1 + 67) -
                p_over_q * *(b + 232 * OS1_S1 + 67) +
                one_over_two_q * *(b + 123 * OS1_S1 + 67) +
                one_over_two_q * *(b + 172 * OS1_S1 + 41);
            *(b + 172 * OS1_S1 + 102) =
                prefactor_y * *(b + 172 * OS1_S1 + 69) -
                p_over_q * *(b + 231 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 69) +
                one_over_two_q * *(b + 172 * OS1_S1 + 44);
            *(b + 172 * OS1_S1 + 103) =
                prefactor_y * *(b + 172 * OS1_S1 + 70) -
                p_over_q * *(b + 231 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 70);
            *(b + 172 * OS1_S1 + 104) =
                prefactor_x * *(b + 172 * OS1_S1 + 76) -
                p_over_q * *(b + 227 * OS1_S1 + 76) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 76) +
                one_over_two_q * *(b + 172 * OS1_S1 + 55);
            *(b + 172 * OS1_S1 + 105) =
                prefactor_x * *(b + 172 * OS1_S1 + 77) -
                p_over_q * *(b + 227 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 77);
            *(b + 172 * OS1_S1 + 106) =
                prefactor_z * *(b + 172 * OS1_S1 + 71) -
                p_over_q * *(b + 232 * OS1_S1 + 71) +
                one_over_two_q * *(b + 123 * OS1_S1 + 71);
            *(b + 172 * OS1_S1 + 107) =
                prefactor_x * *(b + 172 * OS1_S1 + 79) -
                p_over_q * *(b + 227 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 79);
            *(b + 172 * OS1_S1 + 108) =
                prefactor_x * *(b + 172 * OS1_S1 + 80) -
                p_over_q * *(b + 227 * OS1_S1 + 80) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 80);
            *(b + 172 * OS1_S1 + 109) =
                prefactor_x * *(b + 172 * OS1_S1 + 81) -
                p_over_q * *(b + 227 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 81);
            *(b + 172 * OS1_S1 + 110) =
                prefactor_y * *(b + 172 * OS1_S1 + 76) -
                p_over_q * *(b + 231 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 76);
            *(b + 172 * OS1_S1 + 111) =
                prefactor_x * *(b + 172 * OS1_S1 + 83) -
                p_over_q * *(b + 227 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 83);
            *(b + 172 * OS1_S1 + 112) =
                prefactor_y * *(b + 172 * OS1_S1 + 77) -
                p_over_q * *(b + 231 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 172 * OS1_S1 + 50);
            *(b + 172 * OS1_S1 + 113) =
                prefactor_z * *(b + 172 * OS1_S1 + 77) -
                p_over_q * *(b + 232 * OS1_S1 + 77) +
                one_over_two_q * *(b + 123 * OS1_S1 + 77);
            *(b + 172 * OS1_S1 + 114) =
                prefactor_z * *(b + 172 * OS1_S1 + 78) -
                p_over_q * *(b + 232 * OS1_S1 + 78) +
                one_over_two_q * *(b + 123 * OS1_S1 + 78) +
                one_over_two_q * *(b + 172 * OS1_S1 + 50);
            *(b + 172 * OS1_S1 + 115) =
                prefactor_z * *(b + 172 * OS1_S1 + 79) -
                p_over_q * *(b + 232 * OS1_S1 + 79) +
                one_over_two_q * *(b + 123 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 51);
            *(b + 172 * OS1_S1 + 116) =
                prefactor_y * *(b + 172 * OS1_S1 + 81) -
                p_over_q * *(b + 231 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 54);
            *(b + 172 * OS1_S1 + 117) =
                prefactor_y * *(b + 172 * OS1_S1 + 82) -
                p_over_q * *(b + 231 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 82) +
                one_over_two_q * *(b + 172 * OS1_S1 + 55);
            *(b + 172 * OS1_S1 + 118) =
                prefactor_y * *(b + 172 * OS1_S1 + 83) -
                p_over_q * *(b + 231 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 83);
            *(b + 172 * OS1_S1 + 119) =
                prefactor_z * *(b + 172 * OS1_S1 + 83) -
                p_over_q * *(b + 232 * OS1_S1 + 83) +
                one_over_two_q * *(b + 123 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 172 * OS1_S1 + 55);
            *(b + 173 * OS1_S1 + 84) =
                prefactor_x * *(b + 173 * OS1_S1 + 56) -
                p_over_q * *(b + 228 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 173 * OS1_S1 + 35);
            *(b + 173 * OS1_S1 + 85) =
                prefactor_y * *(b + 173 * OS1_S1 + 56) -
                p_over_q * *(b + 232 * OS1_S1 + 56) +
                one_over_two_q * *(b + 125 * OS1_S1 + 56);
            *(b + 173 * OS1_S1 + 86) =
                prefactor_z * *(b + 173 * OS1_S1 + 56) -
                p_over_q * *(b + 233 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 56);
            *(b + 173 * OS1_S1 + 87) =
                prefactor_y * *(b + 173 * OS1_S1 + 57) -
                p_over_q * *(b + 232 * OS1_S1 + 57) +
                one_over_two_q * *(b + 125 * OS1_S1 + 57) +
                one_over_two_q * *(b + 173 * OS1_S1 + 35);
            *(b + 173 * OS1_S1 + 88) =
                prefactor_y * *(b + 173 * OS1_S1 + 58) -
                p_over_q * *(b + 232 * OS1_S1 + 58) +
                one_over_two_q * *(b + 125 * OS1_S1 + 58);
            *(b + 173 * OS1_S1 + 89) =
                prefactor_z * *(b + 173 * OS1_S1 + 58) -
                p_over_q * *(b + 233 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 58) +
                one_over_two_q * *(b + 173 * OS1_S1 + 35);
            *(b + 173 * OS1_S1 + 90) =
                prefactor_y * *(b + 173 * OS1_S1 + 59) -
                p_over_q * *(b + 232 * OS1_S1 + 59) +
                one_over_two_q * *(b + 125 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 36);
            *(b + 173 * OS1_S1 + 91) =
                prefactor_z * *(b + 173 * OS1_S1 + 59) -
                p_over_q * *(b + 233 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 59);
            *(b + 173 * OS1_S1 + 92) =
                prefactor_y * *(b + 173 * OS1_S1 + 61) -
                p_over_q * *(b + 232 * OS1_S1 + 61) +
                one_over_two_q * *(b + 125 * OS1_S1 + 61);
            *(b + 173 * OS1_S1 + 93) =
                prefactor_z * *(b + 173 * OS1_S1 + 61) -
                p_over_q * *(b + 233 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 37);
            *(b + 173 * OS1_S1 + 94) =
                prefactor_x * *(b + 173 * OS1_S1 + 66) -
                p_over_q * *(b + 228 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 45);
            *(b + 173 * OS1_S1 + 95) =
                prefactor_z * *(b + 173 * OS1_S1 + 62) -
                p_over_q * *(b + 233 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 62);
            *(b + 173 * OS1_S1 + 96) =
                prefactor_y * *(b + 173 * OS1_S1 + 64) -
                p_over_q * *(b + 232 * OS1_S1 + 64) +
                one_over_two_q * *(b + 125 * OS1_S1 + 64) +
                one_over_two_q * *(b + 173 * OS1_S1 + 40);
            *(b + 173 * OS1_S1 + 97) =
                prefactor_y * *(b + 173 * OS1_S1 + 65) -
                p_over_q * *(b + 232 * OS1_S1 + 65) +
                one_over_two_q * *(b + 125 * OS1_S1 + 65);
            *(b + 173 * OS1_S1 + 98) =
                prefactor_x * *(b + 173 * OS1_S1 + 70) -
                p_over_q * *(b + 228 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 49);
            *(b + 173 * OS1_S1 + 99) =
                prefactor_x * *(b + 173 * OS1_S1 + 71) -
                p_over_q * *(b + 228 * OS1_S1 + 71) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 71) +
                one_over_two_q * *(b + 173 * OS1_S1 + 50);
            *(b + 173 * OS1_S1 + 100) =
                prefactor_z * *(b + 173 * OS1_S1 + 66) -
                p_over_q * *(b + 233 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 66);
            *(b + 173 * OS1_S1 + 101) =
                prefactor_z * *(b + 173 * OS1_S1 + 67) -
                p_over_q * *(b + 233 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 67) +
                one_over_two_q * *(b + 173 * OS1_S1 + 41);
            *(b + 173 * OS1_S1 + 102) =
                prefactor_y * *(b + 173 * OS1_S1 + 69) -
                p_over_q * *(b + 232 * OS1_S1 + 69) +
                one_over_two_q * *(b + 125 * OS1_S1 + 69) +
                one_over_two_q * *(b + 173 * OS1_S1 + 44);
            *(b + 173 * OS1_S1 + 103) =
                prefactor_y * *(b + 173 * OS1_S1 + 70) -
                p_over_q * *(b + 232 * OS1_S1 + 70) +
                one_over_two_q * *(b + 125 * OS1_S1 + 70);
            *(b + 173 * OS1_S1 + 104) =
                prefactor_x * *(b + 173 * OS1_S1 + 76) -
                p_over_q * *(b + 228 * OS1_S1 + 76) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 76) +
                one_over_two_q * *(b + 173 * OS1_S1 + 55);
            *(b + 173 * OS1_S1 + 105) =
                prefactor_x * *(b + 173 * OS1_S1 + 77) -
                p_over_q * *(b + 228 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 77);
            *(b + 173 * OS1_S1 + 106) =
                prefactor_z * *(b + 173 * OS1_S1 + 71) -
                p_over_q * *(b + 233 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 71);
            *(b + 173 * OS1_S1 + 107) =
                prefactor_x * *(b + 173 * OS1_S1 + 79) -
                p_over_q * *(b + 228 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 79);
            *(b + 173 * OS1_S1 + 108) =
                prefactor_x * *(b + 173 * OS1_S1 + 80) -
                p_over_q * *(b + 228 * OS1_S1 + 80) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 80);
            *(b + 173 * OS1_S1 + 109) =
                prefactor_x * *(b + 173 * OS1_S1 + 81) -
                p_over_q * *(b + 228 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 81);
            *(b + 173 * OS1_S1 + 110) =
                prefactor_y * *(b + 173 * OS1_S1 + 76) -
                p_over_q * *(b + 232 * OS1_S1 + 76) +
                one_over_two_q * *(b + 125 * OS1_S1 + 76);
            *(b + 173 * OS1_S1 + 111) =
                prefactor_x * *(b + 173 * OS1_S1 + 83) -
                p_over_q * *(b + 228 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 83);
            *(b + 173 * OS1_S1 + 112) =
                prefactor_y * *(b + 173 * OS1_S1 + 77) -
                p_over_q * *(b + 232 * OS1_S1 + 77) +
                one_over_two_q * *(b + 125 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 173 * OS1_S1 + 50);
            *(b + 173 * OS1_S1 + 113) =
                prefactor_z * *(b + 173 * OS1_S1 + 77) -
                p_over_q * *(b + 233 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 77);
            *(b + 173 * OS1_S1 + 114) =
                prefactor_z * *(b + 173 * OS1_S1 + 78) -
                p_over_q * *(b + 233 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 78) +
                one_over_two_q * *(b + 173 * OS1_S1 + 50);
            *(b + 173 * OS1_S1 + 115) =
                prefactor_z * *(b + 173 * OS1_S1 + 79) -
                p_over_q * *(b + 233 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 51);
            *(b + 173 * OS1_S1 + 116) =
                prefactor_y * *(b + 173 * OS1_S1 + 81) -
                p_over_q * *(b + 232 * OS1_S1 + 81) +
                one_over_two_q * *(b + 125 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 54);
            *(b + 173 * OS1_S1 + 117) =
                prefactor_y * *(b + 173 * OS1_S1 + 82) -
                p_over_q * *(b + 232 * OS1_S1 + 82) +
                one_over_two_q * *(b + 125 * OS1_S1 + 82) +
                one_over_two_q * *(b + 173 * OS1_S1 + 55);
            *(b + 173 * OS1_S1 + 118) =
                prefactor_y * *(b + 173 * OS1_S1 + 83) -
                p_over_q * *(b + 232 * OS1_S1 + 83) +
                one_over_two_q * *(b + 125 * OS1_S1 + 83);
            *(b + 173 * OS1_S1 + 119) =
                prefactor_z * *(b + 173 * OS1_S1 + 83) -
                p_over_q * *(b + 233 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 173 * OS1_S1 + 55);
            *(b + 174 * OS1_S1 + 84) =
                prefactor_x * *(b + 174 * OS1_S1 + 56) -
                p_over_q * *(b + 229 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 174 * OS1_S1 + 35);
            *(b + 174 * OS1_S1 + 85) = prefactor_y * *(b + 174 * OS1_S1 + 56) -
                                       p_over_q * *(b + 233 * OS1_S1 + 56);
            *(b + 174 * OS1_S1 + 86) =
                prefactor_z * *(b + 174 * OS1_S1 + 56) -
                p_over_q * *(b + 234 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 56);
            *(b + 174 * OS1_S1 + 87) =
                prefactor_y * *(b + 174 * OS1_S1 + 57) -
                p_over_q * *(b + 233 * OS1_S1 + 57) +
                one_over_two_q * *(b + 174 * OS1_S1 + 35);
            *(b + 174 * OS1_S1 + 88) = prefactor_y * *(b + 174 * OS1_S1 + 58) -
                                       p_over_q * *(b + 233 * OS1_S1 + 58);
            *(b + 174 * OS1_S1 + 89) =
                prefactor_z * *(b + 174 * OS1_S1 + 58) -
                p_over_q * *(b + 234 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 58) +
                one_over_two_q * *(b + 174 * OS1_S1 + 35);
            *(b + 174 * OS1_S1 + 90) =
                prefactor_y * *(b + 174 * OS1_S1 + 59) -
                p_over_q * *(b + 233 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 174 * OS1_S1 + 36);
            *(b + 174 * OS1_S1 + 91) =
                prefactor_z * *(b + 174 * OS1_S1 + 59) -
                p_over_q * *(b + 234 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 59);
            *(b + 174 * OS1_S1 + 92) = prefactor_y * *(b + 174 * OS1_S1 + 61) -
                                       p_over_q * *(b + 233 * OS1_S1 + 61);
            *(b + 174 * OS1_S1 + 93) =
                prefactor_z * *(b + 174 * OS1_S1 + 61) -
                p_over_q * *(b + 234 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 174 * OS1_S1 + 37);
            *(b + 174 * OS1_S1 + 94) =
                prefactor_x * *(b + 174 * OS1_S1 + 66) -
                p_over_q * *(b + 229 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 174 * OS1_S1 + 45);
            *(b + 174 * OS1_S1 + 95) =
                prefactor_z * *(b + 174 * OS1_S1 + 62) -
                p_over_q * *(b + 234 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 62);
            *(b + 174 * OS1_S1 + 96) =
                prefactor_y * *(b + 174 * OS1_S1 + 64) -
                p_over_q * *(b + 233 * OS1_S1 + 64) +
                one_over_two_q * *(b + 174 * OS1_S1 + 40);
            *(b + 174 * OS1_S1 + 97) = prefactor_y * *(b + 174 * OS1_S1 + 65) -
                                       p_over_q * *(b + 233 * OS1_S1 + 65);
            *(b + 174 * OS1_S1 + 98) =
                prefactor_x * *(b + 174 * OS1_S1 + 70) -
                p_over_q * *(b + 229 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 174 * OS1_S1 + 49);
            *(b + 174 * OS1_S1 + 99) =
                prefactor_x * *(b + 174 * OS1_S1 + 71) -
                p_over_q * *(b + 229 * OS1_S1 + 71) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 71) +
                one_over_two_q * *(b + 174 * OS1_S1 + 50);
            *(b + 174 * OS1_S1 + 100) =
                prefactor_z * *(b + 174 * OS1_S1 + 66) -
                p_over_q * *(b + 234 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 66);
            *(b + 174 * OS1_S1 + 101) =
                prefactor_z * *(b + 174 * OS1_S1 + 67) -
                p_over_q * *(b + 234 * OS1_S1 + 67) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 67) +
                one_over_two_q * *(b + 174 * OS1_S1 + 41);
            *(b + 174 * OS1_S1 + 102) =
                prefactor_y * *(b + 174 * OS1_S1 + 69) -
                p_over_q * *(b + 233 * OS1_S1 + 69) +
                one_over_two_q * *(b + 174 * OS1_S1 + 44);
            *(b + 174 * OS1_S1 + 103) = prefactor_y * *(b + 174 * OS1_S1 + 70) -
                                        p_over_q * *(b + 233 * OS1_S1 + 70);
            *(b + 174 * OS1_S1 + 104) =
                prefactor_x * *(b + 174 * OS1_S1 + 76) -
                p_over_q * *(b + 229 * OS1_S1 + 76) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 76) +
                one_over_two_q * *(b + 174 * OS1_S1 + 55);
            *(b + 174 * OS1_S1 + 105) =
                prefactor_x * *(b + 174 * OS1_S1 + 77) -
                p_over_q * *(b + 229 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 77);
            *(b + 174 * OS1_S1 + 106) =
                prefactor_z * *(b + 174 * OS1_S1 + 71) -
                p_over_q * *(b + 234 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 71);
            *(b + 174 * OS1_S1 + 107) =
                prefactor_x * *(b + 174 * OS1_S1 + 79) -
                p_over_q * *(b + 229 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 79);
            *(b + 174 * OS1_S1 + 108) =
                prefactor_x * *(b + 174 * OS1_S1 + 80) -
                p_over_q * *(b + 229 * OS1_S1 + 80) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 80);
            *(b + 174 * OS1_S1 + 109) =
                prefactor_x * *(b + 174 * OS1_S1 + 81) -
                p_over_q * *(b + 229 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 81);
            *(b + 174 * OS1_S1 + 110) = prefactor_y * *(b + 174 * OS1_S1 + 76) -
                                        p_over_q * *(b + 233 * OS1_S1 + 76);
            *(b + 174 * OS1_S1 + 111) =
                prefactor_x * *(b + 174 * OS1_S1 + 83) -
                p_over_q * *(b + 229 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 83);
            *(b + 174 * OS1_S1 + 112) =
                prefactor_y * *(b + 174 * OS1_S1 + 77) -
                p_over_q * *(b + 233 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 174 * OS1_S1 + 50);
            *(b + 174 * OS1_S1 + 113) =
                prefactor_z * *(b + 174 * OS1_S1 + 77) -
                p_over_q * *(b + 234 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 77);
            *(b + 174 * OS1_S1 + 114) =
                prefactor_z * *(b + 174 * OS1_S1 + 78) -
                p_over_q * *(b + 234 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 78) +
                one_over_two_q * *(b + 174 * OS1_S1 + 50);
            *(b + 174 * OS1_S1 + 115) =
                prefactor_z * *(b + 174 * OS1_S1 + 79) -
                p_over_q * *(b + 234 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 174 * OS1_S1 + 51);
            *(b + 174 * OS1_S1 + 116) =
                prefactor_y * *(b + 174 * OS1_S1 + 81) -
                p_over_q * *(b + 233 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 174 * OS1_S1 + 54);
            *(b + 174 * OS1_S1 + 117) =
                prefactor_y * *(b + 174 * OS1_S1 + 82) -
                p_over_q * *(b + 233 * OS1_S1 + 82) +
                one_over_two_q * *(b + 174 * OS1_S1 + 55);
            *(b + 174 * OS1_S1 + 118) = prefactor_y * *(b + 174 * OS1_S1 + 83) -
                                        p_over_q * *(b + 233 * OS1_S1 + 83);
            *(b + 174 * OS1_S1 + 119) =
                prefactor_z * *(b + 174 * OS1_S1 + 83) -
                p_over_q * *(b + 234 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 174 * OS1_S1 + 55);
            *(b + 175 * OS1_S1 + 84) =
                prefactor_x * *(b + 175 * OS1_S1 + 56) -
                p_over_q * *(b + 230 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 35);
            *(b + 175 * OS1_S1 + 85) =
                prefactor_y * *(b + 175 * OS1_S1 + 56) -
                p_over_q * *(b + 235 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 56);
            *(b + 175 * OS1_S1 + 86) = prefactor_z * *(b + 175 * OS1_S1 + 56) -
                                       p_over_q * *(b + 236 * OS1_S1 + 56);
            *(b + 175 * OS1_S1 + 87) =
                prefactor_y * *(b + 175 * OS1_S1 + 57) -
                p_over_q * *(b + 235 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 57) +
                one_over_two_q * *(b + 175 * OS1_S1 + 35);
            *(b + 175 * OS1_S1 + 88) = prefactor_z * *(b + 175 * OS1_S1 + 57) -
                                       p_over_q * *(b + 236 * OS1_S1 + 57);
            *(b + 175 * OS1_S1 + 89) =
                prefactor_z * *(b + 175 * OS1_S1 + 58) -
                p_over_q * *(b + 236 * OS1_S1 + 58) +
                one_over_two_q * *(b + 175 * OS1_S1 + 35);
            *(b + 175 * OS1_S1 + 90) =
                prefactor_y * *(b + 175 * OS1_S1 + 59) -
                p_over_q * *(b + 235 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 175 * OS1_S1 + 36);
            *(b + 175 * OS1_S1 + 91) = prefactor_z * *(b + 175 * OS1_S1 + 59) -
                                       p_over_q * *(b + 236 * OS1_S1 + 59);
            *(b + 175 * OS1_S1 + 92) =
                prefactor_y * *(b + 175 * OS1_S1 + 61) -
                p_over_q * *(b + 235 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 61);
            *(b + 175 * OS1_S1 + 93) =
                prefactor_z * *(b + 175 * OS1_S1 + 61) -
                p_over_q * *(b + 236 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 175 * OS1_S1 + 37);
            *(b + 175 * OS1_S1 + 94) =
                prefactor_x * *(b + 175 * OS1_S1 + 66) -
                p_over_q * *(b + 230 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 175 * OS1_S1 + 45);
            *(b + 175 * OS1_S1 + 95) = prefactor_z * *(b + 175 * OS1_S1 + 62) -
                                       p_over_q * *(b + 236 * OS1_S1 + 62);
            *(b + 175 * OS1_S1 + 96) =
                prefactor_z * *(b + 175 * OS1_S1 + 63) -
                p_over_q * *(b + 236 * OS1_S1 + 63) +
                one_over_two_q * *(b + 175 * OS1_S1 + 38);
            *(b + 175 * OS1_S1 + 97) =
                prefactor_y * *(b + 175 * OS1_S1 + 65) -
                p_over_q * *(b + 235 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 65);
            *(b + 175 * OS1_S1 + 98) =
                prefactor_x * *(b + 175 * OS1_S1 + 70) -
                p_over_q * *(b + 230 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 175 * OS1_S1 + 49);
            *(b + 175 * OS1_S1 + 99) =
                prefactor_x * *(b + 175 * OS1_S1 + 71) -
                p_over_q * *(b + 230 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 71) +
                one_over_two_q * *(b + 175 * OS1_S1 + 50);
            *(b + 175 * OS1_S1 + 100) = prefactor_z * *(b + 175 * OS1_S1 + 66) -
                                        p_over_q * *(b + 236 * OS1_S1 + 66);
            *(b + 175 * OS1_S1 + 101) =
                prefactor_z * *(b + 175 * OS1_S1 + 67) -
                p_over_q * *(b + 236 * OS1_S1 + 67) +
                one_over_two_q * *(b + 175 * OS1_S1 + 41);
            *(b + 175 * OS1_S1 + 102) =
                prefactor_y * *(b + 175 * OS1_S1 + 69) -
                p_over_q * *(b + 235 * OS1_S1 + 69) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 69) +
                one_over_two_q * *(b + 175 * OS1_S1 + 44);
            *(b + 175 * OS1_S1 + 103) =
                prefactor_y * *(b + 175 * OS1_S1 + 70) -
                p_over_q * *(b + 235 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 70);
            *(b + 175 * OS1_S1 + 104) =
                prefactor_x * *(b + 175 * OS1_S1 + 76) -
                p_over_q * *(b + 230 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 76) +
                one_over_two_q * *(b + 175 * OS1_S1 + 55);
            *(b + 175 * OS1_S1 + 105) =
                prefactor_x * *(b + 175 * OS1_S1 + 77) -
                p_over_q * *(b + 230 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 77);
            *(b + 175 * OS1_S1 + 106) = prefactor_z * *(b + 175 * OS1_S1 + 71) -
                                        p_over_q * *(b + 236 * OS1_S1 + 71);
            *(b + 175 * OS1_S1 + 107) =
                prefactor_x * *(b + 175 * OS1_S1 + 79) -
                p_over_q * *(b + 230 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 79);
            *(b + 175 * OS1_S1 + 108) =
                prefactor_x * *(b + 175 * OS1_S1 + 80) -
                p_over_q * *(b + 230 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 80);
            *(b + 175 * OS1_S1 + 109) =
                prefactor_x * *(b + 175 * OS1_S1 + 81) -
                p_over_q * *(b + 230 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 81);
            *(b + 175 * OS1_S1 + 110) =
                prefactor_y * *(b + 175 * OS1_S1 + 76) -
                p_over_q * *(b + 235 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 76);
            *(b + 175 * OS1_S1 + 111) =
                prefactor_x * *(b + 175 * OS1_S1 + 83) -
                p_over_q * *(b + 230 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 83);
            *(b + 175 * OS1_S1 + 112) =
                prefactor_y * *(b + 175 * OS1_S1 + 77) -
                p_over_q * *(b + 235 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 50);
            *(b + 175 * OS1_S1 + 113) = prefactor_z * *(b + 175 * OS1_S1 + 77) -
                                        p_over_q * *(b + 236 * OS1_S1 + 77);
            *(b + 175 * OS1_S1 + 114) =
                prefactor_z * *(b + 175 * OS1_S1 + 78) -
                p_over_q * *(b + 236 * OS1_S1 + 78) +
                one_over_two_q * *(b + 175 * OS1_S1 + 50);
            *(b + 175 * OS1_S1 + 115) =
                prefactor_z * *(b + 175 * OS1_S1 + 79) -
                p_over_q * *(b + 236 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 175 * OS1_S1 + 51);
            *(b + 175 * OS1_S1 + 116) =
                prefactor_y * *(b + 175 * OS1_S1 + 81) -
                p_over_q * *(b + 235 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 175 * OS1_S1 + 54);
            *(b + 175 * OS1_S1 + 117) =
                prefactor_y * *(b + 175 * OS1_S1 + 82) -
                p_over_q * *(b + 235 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 82) +
                one_over_two_q * *(b + 175 * OS1_S1 + 55);
            *(b + 175 * OS1_S1 + 118) =
                prefactor_y * *(b + 175 * OS1_S1 + 83) -
                p_over_q * *(b + 235 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 83);
            *(b + 175 * OS1_S1 + 119) =
                prefactor_z * *(b + 175 * OS1_S1 + 83) -
                p_over_q * *(b + 236 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 55);
            *(b + 176 * OS1_S1 + 84) =
                prefactor_x * *(b + 176 * OS1_S1 + 56) -
                p_over_q * *(b + 231 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 35);
            *(b + 176 * OS1_S1 + 85) =
                prefactor_y * *(b + 176 * OS1_S1 + 56) -
                p_over_q * *(b + 236 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 56);
            *(b + 176 * OS1_S1 + 86) =
                prefactor_z * *(b + 176 * OS1_S1 + 56) -
                p_over_q * *(b + 237 * OS1_S1 + 56) +
                one_over_two_q * *(b + 126 * OS1_S1 + 56);
            *(b + 176 * OS1_S1 + 87) =
                prefactor_y * *(b + 176 * OS1_S1 + 57) -
                p_over_q * *(b + 236 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 57) +
                one_over_two_q * *(b + 176 * OS1_S1 + 35);
            *(b + 176 * OS1_S1 + 88) =
                prefactor_z * *(b + 176 * OS1_S1 + 57) -
                p_over_q * *(b + 237 * OS1_S1 + 57) +
                one_over_two_q * *(b + 126 * OS1_S1 + 57);
            *(b + 176 * OS1_S1 + 89) =
                prefactor_z * *(b + 176 * OS1_S1 + 58) -
                p_over_q * *(b + 237 * OS1_S1 + 58) +
                one_over_two_q * *(b + 126 * OS1_S1 + 58) +
                one_over_two_q * *(b + 176 * OS1_S1 + 35);
            *(b + 176 * OS1_S1 + 90) =
                prefactor_y * *(b + 176 * OS1_S1 + 59) -
                p_over_q * *(b + 236 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 36);
            *(b + 176 * OS1_S1 + 91) =
                prefactor_z * *(b + 176 * OS1_S1 + 59) -
                p_over_q * *(b + 237 * OS1_S1 + 59) +
                one_over_two_q * *(b + 126 * OS1_S1 + 59);
            *(b + 176 * OS1_S1 + 92) =
                prefactor_y * *(b + 176 * OS1_S1 + 61) -
                p_over_q * *(b + 236 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 61);
            *(b + 176 * OS1_S1 + 93) =
                prefactor_z * *(b + 176 * OS1_S1 + 61) -
                p_over_q * *(b + 237 * OS1_S1 + 61) +
                one_over_two_q * *(b + 126 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 37);
            *(b + 176 * OS1_S1 + 94) =
                prefactor_x * *(b + 176 * OS1_S1 + 66) -
                p_over_q * *(b + 231 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 45);
            *(b + 176 * OS1_S1 + 95) =
                prefactor_z * *(b + 176 * OS1_S1 + 62) -
                p_over_q * *(b + 237 * OS1_S1 + 62) +
                one_over_two_q * *(b + 126 * OS1_S1 + 62);
            *(b + 176 * OS1_S1 + 96) =
                prefactor_z * *(b + 176 * OS1_S1 + 63) -
                p_over_q * *(b + 237 * OS1_S1 + 63) +
                one_over_two_q * *(b + 126 * OS1_S1 + 63) +
                one_over_two_q * *(b + 176 * OS1_S1 + 38);
            *(b + 176 * OS1_S1 + 97) =
                prefactor_y * *(b + 176 * OS1_S1 + 65) -
                p_over_q * *(b + 236 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 65);
            *(b + 176 * OS1_S1 + 98) =
                prefactor_x * *(b + 176 * OS1_S1 + 70) -
                p_over_q * *(b + 231 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 49);
            *(b + 176 * OS1_S1 + 99) =
                prefactor_x * *(b + 176 * OS1_S1 + 71) -
                p_over_q * *(b + 231 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 71) +
                one_over_two_q * *(b + 176 * OS1_S1 + 50);
            *(b + 176 * OS1_S1 + 100) =
                prefactor_z * *(b + 176 * OS1_S1 + 66) -
                p_over_q * *(b + 237 * OS1_S1 + 66) +
                one_over_two_q * *(b + 126 * OS1_S1 + 66);
            *(b + 176 * OS1_S1 + 101) =
                prefactor_z * *(b + 176 * OS1_S1 + 67) -
                p_over_q * *(b + 237 * OS1_S1 + 67) +
                one_over_two_q * *(b + 126 * OS1_S1 + 67) +
                one_over_two_q * *(b + 176 * OS1_S1 + 41);
            *(b + 176 * OS1_S1 + 102) =
                prefactor_y * *(b + 176 * OS1_S1 + 69) -
                p_over_q * *(b + 236 * OS1_S1 + 69) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 69) +
                one_over_two_q * *(b + 176 * OS1_S1 + 44);
            *(b + 176 * OS1_S1 + 103) =
                prefactor_y * *(b + 176 * OS1_S1 + 70) -
                p_over_q * *(b + 236 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 70);
            *(b + 176 * OS1_S1 + 104) =
                prefactor_x * *(b + 176 * OS1_S1 + 76) -
                p_over_q * *(b + 231 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 76) +
                one_over_two_q * *(b + 176 * OS1_S1 + 55);
            *(b + 176 * OS1_S1 + 105) =
                prefactor_x * *(b + 176 * OS1_S1 + 77) -
                p_over_q * *(b + 231 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 77);
            *(b + 176 * OS1_S1 + 106) =
                prefactor_z * *(b + 176 * OS1_S1 + 71) -
                p_over_q * *(b + 237 * OS1_S1 + 71) +
                one_over_two_q * *(b + 126 * OS1_S1 + 71);
            *(b + 176 * OS1_S1 + 107) =
                prefactor_x * *(b + 176 * OS1_S1 + 79) -
                p_over_q * *(b + 231 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 79);
            *(b + 176 * OS1_S1 + 108) =
                prefactor_x * *(b + 176 * OS1_S1 + 80) -
                p_over_q * *(b + 231 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 80);
            *(b + 176 * OS1_S1 + 109) =
                prefactor_x * *(b + 176 * OS1_S1 + 81) -
                p_over_q * *(b + 231 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 81);
            *(b + 176 * OS1_S1 + 110) =
                prefactor_y * *(b + 176 * OS1_S1 + 76) -
                p_over_q * *(b + 236 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 76);
            *(b + 176 * OS1_S1 + 111) =
                prefactor_x * *(b + 176 * OS1_S1 + 83) -
                p_over_q * *(b + 231 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 83);
            *(b + 176 * OS1_S1 + 112) =
                prefactor_y * *(b + 176 * OS1_S1 + 77) -
                p_over_q * *(b + 236 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 50);
            *(b + 176 * OS1_S1 + 113) =
                prefactor_z * *(b + 176 * OS1_S1 + 77) -
                p_over_q * *(b + 237 * OS1_S1 + 77) +
                one_over_two_q * *(b + 126 * OS1_S1 + 77);
            *(b + 176 * OS1_S1 + 114) =
                prefactor_z * *(b + 176 * OS1_S1 + 78) -
                p_over_q * *(b + 237 * OS1_S1 + 78) +
                one_over_two_q * *(b + 126 * OS1_S1 + 78) +
                one_over_two_q * *(b + 176 * OS1_S1 + 50);
            *(b + 176 * OS1_S1 + 115) =
                prefactor_z * *(b + 176 * OS1_S1 + 79) -
                p_over_q * *(b + 237 * OS1_S1 + 79) +
                one_over_two_q * *(b + 126 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 51);
            *(b + 176 * OS1_S1 + 116) =
                prefactor_y * *(b + 176 * OS1_S1 + 81) -
                p_over_q * *(b + 236 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 54);
            *(b + 176 * OS1_S1 + 117) =
                prefactor_y * *(b + 176 * OS1_S1 + 82) -
                p_over_q * *(b + 236 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 82) +
                one_over_two_q * *(b + 176 * OS1_S1 + 55);
            *(b + 176 * OS1_S1 + 118) =
                prefactor_y * *(b + 176 * OS1_S1 + 83) -
                p_over_q * *(b + 236 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 83);
            *(b + 176 * OS1_S1 + 119) =
                prefactor_z * *(b + 176 * OS1_S1 + 83) -
                p_over_q * *(b + 237 * OS1_S1 + 83) +
                one_over_two_q * *(b + 126 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 55);
            *(b + 177 * OS1_S1 + 84) =
                prefactor_x * *(b + 177 * OS1_S1 + 56) -
                p_over_q * *(b + 232 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 35);
            *(b + 177 * OS1_S1 + 85) =
                prefactor_y * *(b + 177 * OS1_S1 + 56) -
                p_over_q * *(b + 237 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 56);
            *(b + 177 * OS1_S1 + 86) =
                prefactor_z * *(b + 177 * OS1_S1 + 56) -
                p_over_q * *(b + 238 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 56);
            *(b + 177 * OS1_S1 + 87) =
                prefactor_y * *(b + 177 * OS1_S1 + 57) -
                p_over_q * *(b + 237 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 57) +
                one_over_two_q * *(b + 177 * OS1_S1 + 35);
            *(b + 177 * OS1_S1 + 88) =
                prefactor_z * *(b + 177 * OS1_S1 + 57) -
                p_over_q * *(b + 238 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 57);
            *(b + 177 * OS1_S1 + 89) =
                prefactor_z * *(b + 177 * OS1_S1 + 58) -
                p_over_q * *(b + 238 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 58) +
                one_over_two_q * *(b + 177 * OS1_S1 + 35);
            *(b + 177 * OS1_S1 + 90) =
                prefactor_y * *(b + 177 * OS1_S1 + 59) -
                p_over_q * *(b + 237 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 177 * OS1_S1 + 36);
            *(b + 177 * OS1_S1 + 91) =
                prefactor_z * *(b + 177 * OS1_S1 + 59) -
                p_over_q * *(b + 238 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 59);
            *(b + 177 * OS1_S1 + 92) =
                prefactor_y * *(b + 177 * OS1_S1 + 61) -
                p_over_q * *(b + 237 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 61);
            *(b + 177 * OS1_S1 + 93) =
                prefactor_z * *(b + 177 * OS1_S1 + 61) -
                p_over_q * *(b + 238 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 177 * OS1_S1 + 37);
            *(b + 177 * OS1_S1 + 94) =
                prefactor_x * *(b + 177 * OS1_S1 + 66) -
                p_over_q * *(b + 232 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 177 * OS1_S1 + 45);
            *(b + 177 * OS1_S1 + 95) =
                prefactor_z * *(b + 177 * OS1_S1 + 62) -
                p_over_q * *(b + 238 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 62);
            *(b + 177 * OS1_S1 + 96) =
                prefactor_z * *(b + 177 * OS1_S1 + 63) -
                p_over_q * *(b + 238 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 63) +
                one_over_two_q * *(b + 177 * OS1_S1 + 38);
            *(b + 177 * OS1_S1 + 97) =
                prefactor_y * *(b + 177 * OS1_S1 + 65) -
                p_over_q * *(b + 237 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 65);
            *(b + 177 * OS1_S1 + 98) =
                prefactor_x * *(b + 177 * OS1_S1 + 70) -
                p_over_q * *(b + 232 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 177 * OS1_S1 + 49);
            *(b + 177 * OS1_S1 + 99) =
                prefactor_x * *(b + 177 * OS1_S1 + 71) -
                p_over_q * *(b + 232 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 71) +
                one_over_two_q * *(b + 177 * OS1_S1 + 50);
            *(b + 177 * OS1_S1 + 100) =
                prefactor_z * *(b + 177 * OS1_S1 + 66) -
                p_over_q * *(b + 238 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 66);
            *(b + 177 * OS1_S1 + 101) =
                prefactor_z * *(b + 177 * OS1_S1 + 67) -
                p_over_q * *(b + 238 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 67) +
                one_over_two_q * *(b + 177 * OS1_S1 + 41);
            *(b + 177 * OS1_S1 + 102) =
                prefactor_y * *(b + 177 * OS1_S1 + 69) -
                p_over_q * *(b + 237 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 69) +
                one_over_two_q * *(b + 177 * OS1_S1 + 44);
            *(b + 177 * OS1_S1 + 103) =
                prefactor_y * *(b + 177 * OS1_S1 + 70) -
                p_over_q * *(b + 237 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 70);
            *(b + 177 * OS1_S1 + 104) =
                prefactor_x * *(b + 177 * OS1_S1 + 76) -
                p_over_q * *(b + 232 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 76) +
                one_over_two_q * *(b + 177 * OS1_S1 + 55);
            *(b + 177 * OS1_S1 + 105) =
                prefactor_x * *(b + 177 * OS1_S1 + 77) -
                p_over_q * *(b + 232 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 77);
            *(b + 177 * OS1_S1 + 106) =
                prefactor_z * *(b + 177 * OS1_S1 + 71) -
                p_over_q * *(b + 238 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 71);
            *(b + 177 * OS1_S1 + 107) =
                prefactor_x * *(b + 177 * OS1_S1 + 79) -
                p_over_q * *(b + 232 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 79);
            *(b + 177 * OS1_S1 + 108) =
                prefactor_x * *(b + 177 * OS1_S1 + 80) -
                p_over_q * *(b + 232 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 80);
            *(b + 177 * OS1_S1 + 109) =
                prefactor_x * *(b + 177 * OS1_S1 + 81) -
                p_over_q * *(b + 232 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 81);
            *(b + 177 * OS1_S1 + 110) =
                prefactor_y * *(b + 177 * OS1_S1 + 76) -
                p_over_q * *(b + 237 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 76);
            *(b + 177 * OS1_S1 + 111) =
                prefactor_x * *(b + 177 * OS1_S1 + 83) -
                p_over_q * *(b + 232 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 83);
            *(b + 177 * OS1_S1 + 112) =
                prefactor_y * *(b + 177 * OS1_S1 + 77) -
                p_over_q * *(b + 237 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 50);
            *(b + 177 * OS1_S1 + 113) =
                prefactor_z * *(b + 177 * OS1_S1 + 77) -
                p_over_q * *(b + 238 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 77);
            *(b + 177 * OS1_S1 + 114) =
                prefactor_z * *(b + 177 * OS1_S1 + 78) -
                p_over_q * *(b + 238 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 78) +
                one_over_two_q * *(b + 177 * OS1_S1 + 50);
            *(b + 177 * OS1_S1 + 115) =
                prefactor_z * *(b + 177 * OS1_S1 + 79) -
                p_over_q * *(b + 238 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 177 * OS1_S1 + 51);
            *(b + 177 * OS1_S1 + 116) =
                prefactor_y * *(b + 177 * OS1_S1 + 81) -
                p_over_q * *(b + 237 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 177 * OS1_S1 + 54);
            *(b + 177 * OS1_S1 + 117) =
                prefactor_y * *(b + 177 * OS1_S1 + 82) -
                p_over_q * *(b + 237 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 82) +
                one_over_two_q * *(b + 177 * OS1_S1 + 55);
            *(b + 177 * OS1_S1 + 118) =
                prefactor_y * *(b + 177 * OS1_S1 + 83) -
                p_over_q * *(b + 237 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 83);
            *(b + 177 * OS1_S1 + 119) =
                prefactor_z * *(b + 177 * OS1_S1 + 83) -
                p_over_q * *(b + 238 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 55);
            *(b + 178 * OS1_S1 + 84) =
                prefactor_x * *(b + 178 * OS1_S1 + 56) -
                p_over_q * *(b + 233 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 35);
            *(b + 178 * OS1_S1 + 85) =
                prefactor_y * *(b + 178 * OS1_S1 + 56) -
                p_over_q * *(b + 238 * OS1_S1 + 56) +
                one_over_two_q * *(b + 129 * OS1_S1 + 56);
            *(b + 178 * OS1_S1 + 86) =
                prefactor_z * *(b + 178 * OS1_S1 + 56) -
                p_over_q * *(b + 239 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 56);
            *(b + 178 * OS1_S1 + 87) =
                prefactor_y * *(b + 178 * OS1_S1 + 57) -
                p_over_q * *(b + 238 * OS1_S1 + 57) +
                one_over_two_q * *(b + 129 * OS1_S1 + 57) +
                one_over_two_q * *(b + 178 * OS1_S1 + 35);
            *(b + 178 * OS1_S1 + 88) =
                prefactor_y * *(b + 178 * OS1_S1 + 58) -
                p_over_q * *(b + 238 * OS1_S1 + 58) +
                one_over_two_q * *(b + 129 * OS1_S1 + 58);
            *(b + 178 * OS1_S1 + 89) =
                prefactor_z * *(b + 178 * OS1_S1 + 58) -
                p_over_q * *(b + 239 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 58) +
                one_over_two_q * *(b + 178 * OS1_S1 + 35);
            *(b + 178 * OS1_S1 + 90) =
                prefactor_y * *(b + 178 * OS1_S1 + 59) -
                p_over_q * *(b + 238 * OS1_S1 + 59) +
                one_over_two_q * *(b + 129 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 36);
            *(b + 178 * OS1_S1 + 91) =
                prefactor_z * *(b + 178 * OS1_S1 + 59) -
                p_over_q * *(b + 239 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 59);
            *(b + 178 * OS1_S1 + 92) =
                prefactor_y * *(b + 178 * OS1_S1 + 61) -
                p_over_q * *(b + 238 * OS1_S1 + 61) +
                one_over_two_q * *(b + 129 * OS1_S1 + 61);
            *(b + 178 * OS1_S1 + 93) =
                prefactor_z * *(b + 178 * OS1_S1 + 61) -
                p_over_q * *(b + 239 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 37);
            *(b + 178 * OS1_S1 + 94) =
                prefactor_x * *(b + 178 * OS1_S1 + 66) -
                p_over_q * *(b + 233 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 45);
            *(b + 178 * OS1_S1 + 95) =
                prefactor_z * *(b + 178 * OS1_S1 + 62) -
                p_over_q * *(b + 239 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 62);
            *(b + 178 * OS1_S1 + 96) =
                prefactor_y * *(b + 178 * OS1_S1 + 64) -
                p_over_q * *(b + 238 * OS1_S1 + 64) +
                one_over_two_q * *(b + 129 * OS1_S1 + 64) +
                one_over_two_q * *(b + 178 * OS1_S1 + 40);
            *(b + 178 * OS1_S1 + 97) =
                prefactor_y * *(b + 178 * OS1_S1 + 65) -
                p_over_q * *(b + 238 * OS1_S1 + 65) +
                one_over_two_q * *(b + 129 * OS1_S1 + 65);
            *(b + 178 * OS1_S1 + 98) =
                prefactor_x * *(b + 178 * OS1_S1 + 70) -
                p_over_q * *(b + 233 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 49);
            *(b + 178 * OS1_S1 + 99) =
                prefactor_x * *(b + 178 * OS1_S1 + 71) -
                p_over_q * *(b + 233 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 71) +
                one_over_two_q * *(b + 178 * OS1_S1 + 50);
            *(b + 178 * OS1_S1 + 100) =
                prefactor_z * *(b + 178 * OS1_S1 + 66) -
                p_over_q * *(b + 239 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 66);
            *(b + 178 * OS1_S1 + 101) =
                prefactor_z * *(b + 178 * OS1_S1 + 67) -
                p_over_q * *(b + 239 * OS1_S1 + 67) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 67) +
                one_over_two_q * *(b + 178 * OS1_S1 + 41);
            *(b + 178 * OS1_S1 + 102) =
                prefactor_y * *(b + 178 * OS1_S1 + 69) -
                p_over_q * *(b + 238 * OS1_S1 + 69) +
                one_over_two_q * *(b + 129 * OS1_S1 + 69) +
                one_over_two_q * *(b + 178 * OS1_S1 + 44);
            *(b + 178 * OS1_S1 + 103) =
                prefactor_y * *(b + 178 * OS1_S1 + 70) -
                p_over_q * *(b + 238 * OS1_S1 + 70) +
                one_over_two_q * *(b + 129 * OS1_S1 + 70);
            *(b + 178 * OS1_S1 + 104) =
                prefactor_x * *(b + 178 * OS1_S1 + 76) -
                p_over_q * *(b + 233 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 76) +
                one_over_two_q * *(b + 178 * OS1_S1 + 55);
            *(b + 178 * OS1_S1 + 105) =
                prefactor_x * *(b + 178 * OS1_S1 + 77) -
                p_over_q * *(b + 233 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 77);
            *(b + 178 * OS1_S1 + 106) =
                prefactor_z * *(b + 178 * OS1_S1 + 71) -
                p_over_q * *(b + 239 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 71);
            *(b + 178 * OS1_S1 + 107) =
                prefactor_x * *(b + 178 * OS1_S1 + 79) -
                p_over_q * *(b + 233 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 79);
            *(b + 178 * OS1_S1 + 108) =
                prefactor_x * *(b + 178 * OS1_S1 + 80) -
                p_over_q * *(b + 233 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 80);
            *(b + 178 * OS1_S1 + 109) =
                prefactor_x * *(b + 178 * OS1_S1 + 81) -
                p_over_q * *(b + 233 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 81);
            *(b + 178 * OS1_S1 + 110) =
                prefactor_y * *(b + 178 * OS1_S1 + 76) -
                p_over_q * *(b + 238 * OS1_S1 + 76) +
                one_over_two_q * *(b + 129 * OS1_S1 + 76);
            *(b + 178 * OS1_S1 + 111) =
                prefactor_x * *(b + 178 * OS1_S1 + 83) -
                p_over_q * *(b + 233 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 83);
            *(b + 178 * OS1_S1 + 112) =
                prefactor_y * *(b + 178 * OS1_S1 + 77) -
                p_over_q * *(b + 238 * OS1_S1 + 77) +
                one_over_two_q * *(b + 129 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 50);
            *(b + 178 * OS1_S1 + 113) =
                prefactor_z * *(b + 178 * OS1_S1 + 77) -
                p_over_q * *(b + 239 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 77);
            *(b + 178 * OS1_S1 + 114) =
                prefactor_z * *(b + 178 * OS1_S1 + 78) -
                p_over_q * *(b + 239 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 78) +
                one_over_two_q * *(b + 178 * OS1_S1 + 50);
            *(b + 178 * OS1_S1 + 115) =
                prefactor_z * *(b + 178 * OS1_S1 + 79) -
                p_over_q * *(b + 239 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 51);
            *(b + 178 * OS1_S1 + 116) =
                prefactor_y * *(b + 178 * OS1_S1 + 81) -
                p_over_q * *(b + 238 * OS1_S1 + 81) +
                one_over_two_q * *(b + 129 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 54);
            *(b + 178 * OS1_S1 + 117) =
                prefactor_y * *(b + 178 * OS1_S1 + 82) -
                p_over_q * *(b + 238 * OS1_S1 + 82) +
                one_over_two_q * *(b + 129 * OS1_S1 + 82) +
                one_over_two_q * *(b + 178 * OS1_S1 + 55);
            *(b + 178 * OS1_S1 + 118) =
                prefactor_y * *(b + 178 * OS1_S1 + 83) -
                p_over_q * *(b + 238 * OS1_S1 + 83) +
                one_over_two_q * *(b + 129 * OS1_S1 + 83);
            *(b + 178 * OS1_S1 + 119) =
                prefactor_z * *(b + 178 * OS1_S1 + 83) -
                p_over_q * *(b + 239 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 55);
            *(b + 179 * OS1_S1 + 84) =
                prefactor_x * *(b + 179 * OS1_S1 + 56) -
                p_over_q * *(b + 234 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 35);
            *(b + 179 * OS1_S1 + 85) = prefactor_y * *(b + 179 * OS1_S1 + 56) -
                                       p_over_q * *(b + 239 * OS1_S1 + 56);
            *(b + 179 * OS1_S1 + 86) =
                prefactor_z * *(b + 179 * OS1_S1 + 56) -
                p_over_q * *(b + 240 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 56);
            *(b + 179 * OS1_S1 + 87) =
                prefactor_y * *(b + 179 * OS1_S1 + 57) -
                p_over_q * *(b + 239 * OS1_S1 + 57) +
                one_over_two_q * *(b + 179 * OS1_S1 + 35);
            *(b + 179 * OS1_S1 + 88) = prefactor_y * *(b + 179 * OS1_S1 + 58) -
                                       p_over_q * *(b + 239 * OS1_S1 + 58);
            *(b + 179 * OS1_S1 + 89) =
                prefactor_z * *(b + 179 * OS1_S1 + 58) -
                p_over_q * *(b + 240 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 58) +
                one_over_two_q * *(b + 179 * OS1_S1 + 35);
            *(b + 179 * OS1_S1 + 90) =
                prefactor_y * *(b + 179 * OS1_S1 + 59) -
                p_over_q * *(b + 239 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 179 * OS1_S1 + 36);
            *(b + 179 * OS1_S1 + 91) =
                prefactor_z * *(b + 179 * OS1_S1 + 59) -
                p_over_q * *(b + 240 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 59);
            *(b + 179 * OS1_S1 + 92) = prefactor_y * *(b + 179 * OS1_S1 + 61) -
                                       p_over_q * *(b + 239 * OS1_S1 + 61);
            *(b + 179 * OS1_S1 + 93) =
                prefactor_z * *(b + 179 * OS1_S1 + 61) -
                p_over_q * *(b + 240 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 179 * OS1_S1 + 37);
            *(b + 179 * OS1_S1 + 94) =
                prefactor_x * *(b + 179 * OS1_S1 + 66) -
                p_over_q * *(b + 234 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 179 * OS1_S1 + 45);
            *(b + 179 * OS1_S1 + 95) =
                prefactor_z * *(b + 179 * OS1_S1 + 62) -
                p_over_q * *(b + 240 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 62);
            *(b + 179 * OS1_S1 + 96) =
                prefactor_y * *(b + 179 * OS1_S1 + 64) -
                p_over_q * *(b + 239 * OS1_S1 + 64) +
                one_over_two_q * *(b + 179 * OS1_S1 + 40);
            *(b + 179 * OS1_S1 + 97) = prefactor_y * *(b + 179 * OS1_S1 + 65) -
                                       p_over_q * *(b + 239 * OS1_S1 + 65);
            *(b + 179 * OS1_S1 + 98) =
                prefactor_x * *(b + 179 * OS1_S1 + 70) -
                p_over_q * *(b + 234 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 179 * OS1_S1 + 49);
            *(b + 179 * OS1_S1 + 99) =
                prefactor_x * *(b + 179 * OS1_S1 + 71) -
                p_over_q * *(b + 234 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 71) +
                one_over_two_q * *(b + 179 * OS1_S1 + 50);
            *(b + 179 * OS1_S1 + 100) =
                prefactor_z * *(b + 179 * OS1_S1 + 66) -
                p_over_q * *(b + 240 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 66);
            *(b + 179 * OS1_S1 + 101) =
                prefactor_z * *(b + 179 * OS1_S1 + 67) -
                p_over_q * *(b + 240 * OS1_S1 + 67) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 67) +
                one_over_two_q * *(b + 179 * OS1_S1 + 41);
            *(b + 179 * OS1_S1 + 102) =
                prefactor_y * *(b + 179 * OS1_S1 + 69) -
                p_over_q * *(b + 239 * OS1_S1 + 69) +
                one_over_two_q * *(b + 179 * OS1_S1 + 44);
            *(b + 179 * OS1_S1 + 103) = prefactor_y * *(b + 179 * OS1_S1 + 70) -
                                        p_over_q * *(b + 239 * OS1_S1 + 70);
            *(b + 179 * OS1_S1 + 104) =
                prefactor_x * *(b + 179 * OS1_S1 + 76) -
                p_over_q * *(b + 234 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 76) +
                one_over_two_q * *(b + 179 * OS1_S1 + 55);
            *(b + 179 * OS1_S1 + 105) =
                prefactor_x * *(b + 179 * OS1_S1 + 77) -
                p_over_q * *(b + 234 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 77);
            *(b + 179 * OS1_S1 + 106) =
                prefactor_z * *(b + 179 * OS1_S1 + 71) -
                p_over_q * *(b + 240 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 71);
            *(b + 179 * OS1_S1 + 107) =
                prefactor_x * *(b + 179 * OS1_S1 + 79) -
                p_over_q * *(b + 234 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 79);
            *(b + 179 * OS1_S1 + 108) =
                prefactor_x * *(b + 179 * OS1_S1 + 80) -
                p_over_q * *(b + 234 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 80);
            *(b + 179 * OS1_S1 + 109) =
                prefactor_x * *(b + 179 * OS1_S1 + 81) -
                p_over_q * *(b + 234 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 81);
            *(b + 179 * OS1_S1 + 110) = prefactor_y * *(b + 179 * OS1_S1 + 76) -
                                        p_over_q * *(b + 239 * OS1_S1 + 76);
            *(b + 179 * OS1_S1 + 111) =
                prefactor_x * *(b + 179 * OS1_S1 + 83) -
                p_over_q * *(b + 234 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 83);
            *(b + 179 * OS1_S1 + 112) =
                prefactor_y * *(b + 179 * OS1_S1 + 77) -
                p_over_q * *(b + 239 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 50);
            *(b + 179 * OS1_S1 + 113) =
                prefactor_z * *(b + 179 * OS1_S1 + 77) -
                p_over_q * *(b + 240 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 77);
            *(b + 179 * OS1_S1 + 114) =
                prefactor_z * *(b + 179 * OS1_S1 + 78) -
                p_over_q * *(b + 240 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 78) +
                one_over_two_q * *(b + 179 * OS1_S1 + 50);
            *(b + 179 * OS1_S1 + 115) =
                prefactor_z * *(b + 179 * OS1_S1 + 79) -
                p_over_q * *(b + 240 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 179 * OS1_S1 + 51);
            *(b + 179 * OS1_S1 + 116) =
                prefactor_y * *(b + 179 * OS1_S1 + 81) -
                p_over_q * *(b + 239 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 179 * OS1_S1 + 54);
            *(b + 179 * OS1_S1 + 117) =
                prefactor_y * *(b + 179 * OS1_S1 + 82) -
                p_over_q * *(b + 239 * OS1_S1 + 82) +
                one_over_two_q * *(b + 179 * OS1_S1 + 55);
            *(b + 179 * OS1_S1 + 118) = prefactor_y * *(b + 179 * OS1_S1 + 83) -
                                        p_over_q * *(b + 239 * OS1_S1 + 83);
            *(b + 179 * OS1_S1 + 119) =
                prefactor_z * *(b + 179 * OS1_S1 + 83) -
                p_over_q * *(b + 240 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 55);
            *(b + 180 * OS1_S1 + 84) =
                prefactor_x * *(b + 180 * OS1_S1 + 56) -
                p_over_q * *(b + 235 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 35);
            *(b + 180 * OS1_S1 + 85) =
                prefactor_y * *(b + 180 * OS1_S1 + 56) -
                p_over_q * *(b + 241 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 56);
            *(b + 180 * OS1_S1 + 86) = prefactor_z * *(b + 180 * OS1_S1 + 56) -
                                       p_over_q * *(b + 242 * OS1_S1 + 56);
            *(b + 180 * OS1_S1 + 87) =
                prefactor_y * *(b + 180 * OS1_S1 + 57) -
                p_over_q * *(b + 241 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 57) +
                one_over_two_q * *(b + 180 * OS1_S1 + 35);
            *(b + 180 * OS1_S1 + 88) = prefactor_z * *(b + 180 * OS1_S1 + 57) -
                                       p_over_q * *(b + 242 * OS1_S1 + 57);
            *(b + 180 * OS1_S1 + 89) =
                prefactor_z * *(b + 180 * OS1_S1 + 58) -
                p_over_q * *(b + 242 * OS1_S1 + 58) +
                one_over_two_q * *(b + 180 * OS1_S1 + 35);
            *(b + 180 * OS1_S1 + 90) =
                prefactor_y * *(b + 180 * OS1_S1 + 59) -
                p_over_q * *(b + 241 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 180 * OS1_S1 + 36);
            *(b + 180 * OS1_S1 + 91) = prefactor_z * *(b + 180 * OS1_S1 + 59) -
                                       p_over_q * *(b + 242 * OS1_S1 + 59);
            *(b + 180 * OS1_S1 + 92) =
                prefactor_y * *(b + 180 * OS1_S1 + 61) -
                p_over_q * *(b + 241 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 61);
            *(b + 180 * OS1_S1 + 93) =
                prefactor_z * *(b + 180 * OS1_S1 + 61) -
                p_over_q * *(b + 242 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 180 * OS1_S1 + 37);
            *(b + 180 * OS1_S1 + 94) =
                prefactor_x * *(b + 180 * OS1_S1 + 66) -
                p_over_q * *(b + 235 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 180 * OS1_S1 + 45);
            *(b + 180 * OS1_S1 + 95) = prefactor_z * *(b + 180 * OS1_S1 + 62) -
                                       p_over_q * *(b + 242 * OS1_S1 + 62);
            *(b + 180 * OS1_S1 + 96) =
                prefactor_z * *(b + 180 * OS1_S1 + 63) -
                p_over_q * *(b + 242 * OS1_S1 + 63) +
                one_over_two_q * *(b + 180 * OS1_S1 + 38);
            *(b + 180 * OS1_S1 + 97) =
                prefactor_y * *(b + 180 * OS1_S1 + 65) -
                p_over_q * *(b + 241 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 65);
            *(b + 180 * OS1_S1 + 98) =
                prefactor_x * *(b + 180 * OS1_S1 + 70) -
                p_over_q * *(b + 235 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 180 * OS1_S1 + 49);
            *(b + 180 * OS1_S1 + 99) =
                prefactor_x * *(b + 180 * OS1_S1 + 71) -
                p_over_q * *(b + 235 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 71) +
                one_over_two_q * *(b + 180 * OS1_S1 + 50);
            *(b + 180 * OS1_S1 + 100) = prefactor_z * *(b + 180 * OS1_S1 + 66) -
                                        p_over_q * *(b + 242 * OS1_S1 + 66);
            *(b + 180 * OS1_S1 + 101) =
                prefactor_z * *(b + 180 * OS1_S1 + 67) -
                p_over_q * *(b + 242 * OS1_S1 + 67) +
                one_over_two_q * *(b + 180 * OS1_S1 + 41);
            *(b + 180 * OS1_S1 + 102) =
                prefactor_x * *(b + 180 * OS1_S1 + 74) -
                p_over_q * *(b + 235 * OS1_S1 + 74) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 74) +
                one_over_two_q * *(b + 180 * OS1_S1 + 53);
            *(b + 180 * OS1_S1 + 103) =
                prefactor_y * *(b + 180 * OS1_S1 + 70) -
                p_over_q * *(b + 241 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 70);
            *(b + 180 * OS1_S1 + 104) =
                prefactor_x * *(b + 180 * OS1_S1 + 76) -
                p_over_q * *(b + 235 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 76) +
                one_over_two_q * *(b + 180 * OS1_S1 + 55);
            *(b + 180 * OS1_S1 + 105) =
                prefactor_x * *(b + 180 * OS1_S1 + 77) -
                p_over_q * *(b + 235 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 77);
            *(b + 180 * OS1_S1 + 106) = prefactor_z * *(b + 180 * OS1_S1 + 71) -
                                        p_over_q * *(b + 242 * OS1_S1 + 71);
            *(b + 180 * OS1_S1 + 107) =
                prefactor_x * *(b + 180 * OS1_S1 + 79) -
                p_over_q * *(b + 235 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 79);
            *(b + 180 * OS1_S1 + 108) =
                prefactor_x * *(b + 180 * OS1_S1 + 80) -
                p_over_q * *(b + 235 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 80);
            *(b + 180 * OS1_S1 + 109) =
                prefactor_x * *(b + 180 * OS1_S1 + 81) -
                p_over_q * *(b + 235 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 81);
            *(b + 180 * OS1_S1 + 110) =
                prefactor_x * *(b + 180 * OS1_S1 + 82) -
                p_over_q * *(b + 235 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 82);
            *(b + 180 * OS1_S1 + 111) =
                prefactor_x * *(b + 180 * OS1_S1 + 83) -
                p_over_q * *(b + 235 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 83);
            *(b + 180 * OS1_S1 + 112) =
                prefactor_y * *(b + 180 * OS1_S1 + 77) -
                p_over_q * *(b + 241 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 50);
            *(b + 180 * OS1_S1 + 113) = prefactor_z * *(b + 180 * OS1_S1 + 77) -
                                        p_over_q * *(b + 242 * OS1_S1 + 77);
            *(b + 180 * OS1_S1 + 114) =
                prefactor_z * *(b + 180 * OS1_S1 + 78) -
                p_over_q * *(b + 242 * OS1_S1 + 78) +
                one_over_two_q * *(b + 180 * OS1_S1 + 50);
            *(b + 180 * OS1_S1 + 115) =
                prefactor_z * *(b + 180 * OS1_S1 + 79) -
                p_over_q * *(b + 242 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 180 * OS1_S1 + 51);
            *(b + 180 * OS1_S1 + 116) =
                prefactor_y * *(b + 180 * OS1_S1 + 81) -
                p_over_q * *(b + 241 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 180 * OS1_S1 + 54);
            *(b + 180 * OS1_S1 + 117) =
                prefactor_y * *(b + 180 * OS1_S1 + 82) -
                p_over_q * *(b + 241 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 82) +
                one_over_two_q * *(b + 180 * OS1_S1 + 55);
            *(b + 180 * OS1_S1 + 118) =
                prefactor_y * *(b + 180 * OS1_S1 + 83) -
                p_over_q * *(b + 241 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 83);
            *(b + 180 * OS1_S1 + 119) =
                prefactor_z * *(b + 180 * OS1_S1 + 83) -
                p_over_q * *(b + 242 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 55);
            *(b + 181 * OS1_S1 + 84) =
                prefactor_x * *(b + 181 * OS1_S1 + 56) -
                p_over_q * *(b + 236 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 181 * OS1_S1 + 35);
            *(b + 181 * OS1_S1 + 85) =
                prefactor_y * *(b + 181 * OS1_S1 + 56) -
                p_over_q * *(b + 242 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 56);
            *(b + 181 * OS1_S1 + 86) =
                prefactor_z * *(b + 181 * OS1_S1 + 56) -
                p_over_q * *(b + 243 * OS1_S1 + 56) +
                one_over_two_q * *(b + 130 * OS1_S1 + 56);
            *(b + 181 * OS1_S1 + 87) =
                prefactor_y * *(b + 181 * OS1_S1 + 57) -
                p_over_q * *(b + 242 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 57) +
                one_over_two_q * *(b + 181 * OS1_S1 + 35);
            *(b + 181 * OS1_S1 + 88) =
                prefactor_z * *(b + 181 * OS1_S1 + 57) -
                p_over_q * *(b + 243 * OS1_S1 + 57) +
                one_over_two_q * *(b + 130 * OS1_S1 + 57);
            *(b + 181 * OS1_S1 + 89) =
                prefactor_z * *(b + 181 * OS1_S1 + 58) -
                p_over_q * *(b + 243 * OS1_S1 + 58) +
                one_over_two_q * *(b + 130 * OS1_S1 + 58) +
                one_over_two_q * *(b + 181 * OS1_S1 + 35);
            *(b + 181 * OS1_S1 + 90) =
                prefactor_y * *(b + 181 * OS1_S1 + 59) -
                p_over_q * *(b + 242 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 36);
            *(b + 181 * OS1_S1 + 91) =
                prefactor_z * *(b + 181 * OS1_S1 + 59) -
                p_over_q * *(b + 243 * OS1_S1 + 59) +
                one_over_two_q * *(b + 130 * OS1_S1 + 59);
            *(b + 181 * OS1_S1 + 92) =
                prefactor_y * *(b + 181 * OS1_S1 + 61) -
                p_over_q * *(b + 242 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 61);
            *(b + 181 * OS1_S1 + 93) =
                prefactor_z * *(b + 181 * OS1_S1 + 61) -
                p_over_q * *(b + 243 * OS1_S1 + 61) +
                one_over_two_q * *(b + 130 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 37);
            *(b + 181 * OS1_S1 + 94) =
                prefactor_x * *(b + 181 * OS1_S1 + 66) -
                p_over_q * *(b + 236 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 45);
            *(b + 181 * OS1_S1 + 95) =
                prefactor_z * *(b + 181 * OS1_S1 + 62) -
                p_over_q * *(b + 243 * OS1_S1 + 62) +
                one_over_two_q * *(b + 130 * OS1_S1 + 62);
            *(b + 181 * OS1_S1 + 96) =
                prefactor_z * *(b + 181 * OS1_S1 + 63) -
                p_over_q * *(b + 243 * OS1_S1 + 63) +
                one_over_two_q * *(b + 130 * OS1_S1 + 63) +
                one_over_two_q * *(b + 181 * OS1_S1 + 38);
            *(b + 181 * OS1_S1 + 97) =
                prefactor_y * *(b + 181 * OS1_S1 + 65) -
                p_over_q * *(b + 242 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 65);
            *(b + 181 * OS1_S1 + 98) =
                prefactor_x * *(b + 181 * OS1_S1 + 70) -
                p_over_q * *(b + 236 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 49);
            *(b + 181 * OS1_S1 + 99) =
                prefactor_x * *(b + 181 * OS1_S1 + 71) -
                p_over_q * *(b + 236 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 71) +
                one_over_two_q * *(b + 181 * OS1_S1 + 50);
            *(b + 181 * OS1_S1 + 100) =
                prefactor_z * *(b + 181 * OS1_S1 + 66) -
                p_over_q * *(b + 243 * OS1_S1 + 66) +
                one_over_two_q * *(b + 130 * OS1_S1 + 66);
            *(b + 181 * OS1_S1 + 101) =
                prefactor_z * *(b + 181 * OS1_S1 + 67) -
                p_over_q * *(b + 243 * OS1_S1 + 67) +
                one_over_two_q * *(b + 130 * OS1_S1 + 67) +
                one_over_two_q * *(b + 181 * OS1_S1 + 41);
            *(b + 181 * OS1_S1 + 102) =
                prefactor_y * *(b + 181 * OS1_S1 + 69) -
                p_over_q * *(b + 242 * OS1_S1 + 69) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 69) +
                one_over_two_q * *(b + 181 * OS1_S1 + 44);
            *(b + 181 * OS1_S1 + 103) =
                prefactor_y * *(b + 181 * OS1_S1 + 70) -
                p_over_q * *(b + 242 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 70);
            *(b + 181 * OS1_S1 + 104) =
                prefactor_x * *(b + 181 * OS1_S1 + 76) -
                p_over_q * *(b + 236 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 76) +
                one_over_two_q * *(b + 181 * OS1_S1 + 55);
            *(b + 181 * OS1_S1 + 105) =
                prefactor_x * *(b + 181 * OS1_S1 + 77) -
                p_over_q * *(b + 236 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 77);
            *(b + 181 * OS1_S1 + 106) =
                prefactor_z * *(b + 181 * OS1_S1 + 71) -
                p_over_q * *(b + 243 * OS1_S1 + 71) +
                one_over_two_q * *(b + 130 * OS1_S1 + 71);
            *(b + 181 * OS1_S1 + 107) =
                prefactor_x * *(b + 181 * OS1_S1 + 79) -
                p_over_q * *(b + 236 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 79);
            *(b + 181 * OS1_S1 + 108) =
                prefactor_x * *(b + 181 * OS1_S1 + 80) -
                p_over_q * *(b + 236 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 80);
            *(b + 181 * OS1_S1 + 109) =
                prefactor_x * *(b + 181 * OS1_S1 + 81) -
                p_over_q * *(b + 236 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 81);
            *(b + 181 * OS1_S1 + 110) =
                prefactor_y * *(b + 181 * OS1_S1 + 76) -
                p_over_q * *(b + 242 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 76);
            *(b + 181 * OS1_S1 + 111) =
                prefactor_x * *(b + 181 * OS1_S1 + 83) -
                p_over_q * *(b + 236 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 83);
            *(b + 181 * OS1_S1 + 112) =
                prefactor_y * *(b + 181 * OS1_S1 + 77) -
                p_over_q * *(b + 242 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 181 * OS1_S1 + 50);
            *(b + 181 * OS1_S1 + 113) =
                prefactor_z * *(b + 181 * OS1_S1 + 77) -
                p_over_q * *(b + 243 * OS1_S1 + 77) +
                one_over_two_q * *(b + 130 * OS1_S1 + 77);
            *(b + 181 * OS1_S1 + 114) =
                prefactor_z * *(b + 181 * OS1_S1 + 78) -
                p_over_q * *(b + 243 * OS1_S1 + 78) +
                one_over_two_q * *(b + 130 * OS1_S1 + 78) +
                one_over_two_q * *(b + 181 * OS1_S1 + 50);
            *(b + 181 * OS1_S1 + 115) =
                prefactor_z * *(b + 181 * OS1_S1 + 79) -
                p_over_q * *(b + 243 * OS1_S1 + 79) +
                one_over_two_q * *(b + 130 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 51);
            *(b + 181 * OS1_S1 + 116) =
                prefactor_y * *(b + 181 * OS1_S1 + 81) -
                p_over_q * *(b + 242 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 54);
            *(b + 181 * OS1_S1 + 117) =
                prefactor_y * *(b + 181 * OS1_S1 + 82) -
                p_over_q * *(b + 242 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 82) +
                one_over_two_q * *(b + 181 * OS1_S1 + 55);
            *(b + 181 * OS1_S1 + 118) =
                prefactor_y * *(b + 181 * OS1_S1 + 83) -
                p_over_q * *(b + 242 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 83);
            *(b + 181 * OS1_S1 + 119) =
                prefactor_z * *(b + 181 * OS1_S1 + 83) -
                p_over_q * *(b + 243 * OS1_S1 + 83) +
                one_over_two_q * *(b + 130 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 181 * OS1_S1 + 55);
            *(b + 182 * OS1_S1 + 84) =
                prefactor_x * *(b + 182 * OS1_S1 + 56) -
                p_over_q * *(b + 237 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 182 * OS1_S1 + 35);
            *(b + 182 * OS1_S1 + 85) =
                prefactor_y * *(b + 182 * OS1_S1 + 56) -
                p_over_q * *(b + 243 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 56);
            *(b + 182 * OS1_S1 + 86) =
                prefactor_z * *(b + 182 * OS1_S1 + 56) -
                p_over_q * *(b + 244 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 56);
            *(b + 182 * OS1_S1 + 87) =
                prefactor_y * *(b + 182 * OS1_S1 + 57) -
                p_over_q * *(b + 243 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 57) +
                one_over_two_q * *(b + 182 * OS1_S1 + 35);
            *(b + 182 * OS1_S1 + 88) =
                prefactor_z * *(b + 182 * OS1_S1 + 57) -
                p_over_q * *(b + 244 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 57);
            *(b + 182 * OS1_S1 + 89) =
                prefactor_z * *(b + 182 * OS1_S1 + 58) -
                p_over_q * *(b + 244 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 58) +
                one_over_two_q * *(b + 182 * OS1_S1 + 35);
            *(b + 182 * OS1_S1 + 90) =
                prefactor_y * *(b + 182 * OS1_S1 + 59) -
                p_over_q * *(b + 243 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 182 * OS1_S1 + 36);
            *(b + 182 * OS1_S1 + 91) =
                prefactor_z * *(b + 182 * OS1_S1 + 59) -
                p_over_q * *(b + 244 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 59);
            *(b + 182 * OS1_S1 + 92) =
                prefactor_y * *(b + 182 * OS1_S1 + 61) -
                p_over_q * *(b + 243 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 61);
            *(b + 182 * OS1_S1 + 93) =
                prefactor_z * *(b + 182 * OS1_S1 + 61) -
                p_over_q * *(b + 244 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 182 * OS1_S1 + 37);
            *(b + 182 * OS1_S1 + 94) =
                prefactor_x * *(b + 182 * OS1_S1 + 66) -
                p_over_q * *(b + 237 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 182 * OS1_S1 + 45);
            *(b + 182 * OS1_S1 + 95) =
                prefactor_z * *(b + 182 * OS1_S1 + 62) -
                p_over_q * *(b + 244 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 62);
            *(b + 182 * OS1_S1 + 96) =
                prefactor_z * *(b + 182 * OS1_S1 + 63) -
                p_over_q * *(b + 244 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 63) +
                one_over_two_q * *(b + 182 * OS1_S1 + 38);
            *(b + 182 * OS1_S1 + 97) =
                prefactor_y * *(b + 182 * OS1_S1 + 65) -
                p_over_q * *(b + 243 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 65);
            *(b + 182 * OS1_S1 + 98) =
                prefactor_x * *(b + 182 * OS1_S1 + 70) -
                p_over_q * *(b + 237 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 182 * OS1_S1 + 49);
            *(b + 182 * OS1_S1 + 99) =
                prefactor_x * *(b + 182 * OS1_S1 + 71) -
                p_over_q * *(b + 237 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 71) +
                one_over_two_q * *(b + 182 * OS1_S1 + 50);
            *(b + 182 * OS1_S1 + 100) =
                prefactor_z * *(b + 182 * OS1_S1 + 66) -
                p_over_q * *(b + 244 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 66);
            *(b + 182 * OS1_S1 + 101) =
                prefactor_z * *(b + 182 * OS1_S1 + 67) -
                p_over_q * *(b + 244 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 67) +
                one_over_two_q * *(b + 182 * OS1_S1 + 41);
            *(b + 182 * OS1_S1 + 102) =
                prefactor_y * *(b + 182 * OS1_S1 + 69) -
                p_over_q * *(b + 243 * OS1_S1 + 69) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 69) +
                one_over_two_q * *(b + 182 * OS1_S1 + 44);
            *(b + 182 * OS1_S1 + 103) =
                prefactor_y * *(b + 182 * OS1_S1 + 70) -
                p_over_q * *(b + 243 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 70);
            *(b + 182 * OS1_S1 + 104) =
                prefactor_x * *(b + 182 * OS1_S1 + 76) -
                p_over_q * *(b + 237 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 76) +
                one_over_two_q * *(b + 182 * OS1_S1 + 55);
            *(b + 182 * OS1_S1 + 105) =
                prefactor_x * *(b + 182 * OS1_S1 + 77) -
                p_over_q * *(b + 237 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 77);
            *(b + 182 * OS1_S1 + 106) =
                prefactor_z * *(b + 182 * OS1_S1 + 71) -
                p_over_q * *(b + 244 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 71);
            *(b + 182 * OS1_S1 + 107) =
                prefactor_x * *(b + 182 * OS1_S1 + 79) -
                p_over_q * *(b + 237 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 79);
            *(b + 182 * OS1_S1 + 108) =
                prefactor_x * *(b + 182 * OS1_S1 + 80) -
                p_over_q * *(b + 237 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 80);
            *(b + 182 * OS1_S1 + 109) =
                prefactor_x * *(b + 182 * OS1_S1 + 81) -
                p_over_q * *(b + 237 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 81);
            *(b + 182 * OS1_S1 + 110) =
                prefactor_y * *(b + 182 * OS1_S1 + 76) -
                p_over_q * *(b + 243 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 76);
            *(b + 182 * OS1_S1 + 111) =
                prefactor_x * *(b + 182 * OS1_S1 + 83) -
                p_over_q * *(b + 237 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 83);
            *(b + 182 * OS1_S1 + 112) =
                prefactor_y * *(b + 182 * OS1_S1 + 77) -
                p_over_q * *(b + 243 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 182 * OS1_S1 + 50);
            *(b + 182 * OS1_S1 + 113) =
                prefactor_z * *(b + 182 * OS1_S1 + 77) -
                p_over_q * *(b + 244 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 77);
            *(b + 182 * OS1_S1 + 114) =
                prefactor_z * *(b + 182 * OS1_S1 + 78) -
                p_over_q * *(b + 244 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 78) +
                one_over_two_q * *(b + 182 * OS1_S1 + 50);
            *(b + 182 * OS1_S1 + 115) =
                prefactor_z * *(b + 182 * OS1_S1 + 79) -
                p_over_q * *(b + 244 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 182 * OS1_S1 + 51);
            *(b + 182 * OS1_S1 + 116) =
                prefactor_y * *(b + 182 * OS1_S1 + 81) -
                p_over_q * *(b + 243 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 182 * OS1_S1 + 54);
            *(b + 182 * OS1_S1 + 117) =
                prefactor_y * *(b + 182 * OS1_S1 + 82) -
                p_over_q * *(b + 243 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 82) +
                one_over_two_q * *(b + 182 * OS1_S1 + 55);
            *(b + 182 * OS1_S1 + 118) =
                prefactor_y * *(b + 182 * OS1_S1 + 83) -
                p_over_q * *(b + 243 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 83);
            *(b + 182 * OS1_S1 + 119) =
                prefactor_z * *(b + 182 * OS1_S1 + 83) -
                p_over_q * *(b + 244 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 182 * OS1_S1 + 55);
            *(b + 183 * OS1_S1 + 84) =
                prefactor_x * *(b + 183 * OS1_S1 + 56) -
                p_over_q * *(b + 238 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 183 * OS1_S1 + 35);
            *(b + 183 * OS1_S1 + 85) =
                prefactor_y * *(b + 183 * OS1_S1 + 56) -
                p_over_q * *(b + 244 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 56);
            *(b + 183 * OS1_S1 + 86) =
                prefactor_z * *(b + 183 * OS1_S1 + 56) -
                p_over_q * *(b + 245 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 56);
            *(b + 183 * OS1_S1 + 87) =
                prefactor_y * *(b + 183 * OS1_S1 + 57) -
                p_over_q * *(b + 244 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 57) +
                one_over_two_q * *(b + 183 * OS1_S1 + 35);
            *(b + 183 * OS1_S1 + 88) =
                prefactor_y * *(b + 183 * OS1_S1 + 58) -
                p_over_q * *(b + 244 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 58);
            *(b + 183 * OS1_S1 + 89) =
                prefactor_z * *(b + 183 * OS1_S1 + 58) -
                p_over_q * *(b + 245 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 58) +
                one_over_two_q * *(b + 183 * OS1_S1 + 35);
            *(b + 183 * OS1_S1 + 90) =
                prefactor_y * *(b + 183 * OS1_S1 + 59) -
                p_over_q * *(b + 244 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 183 * OS1_S1 + 36);
            *(b + 183 * OS1_S1 + 91) =
                prefactor_z * *(b + 183 * OS1_S1 + 59) -
                p_over_q * *(b + 245 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 59);
            *(b + 183 * OS1_S1 + 92) =
                prefactor_y * *(b + 183 * OS1_S1 + 61) -
                p_over_q * *(b + 244 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 61);
            *(b + 183 * OS1_S1 + 93) =
                prefactor_z * *(b + 183 * OS1_S1 + 61) -
                p_over_q * *(b + 245 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 183 * OS1_S1 + 37);
            *(b + 183 * OS1_S1 + 94) =
                prefactor_x * *(b + 183 * OS1_S1 + 66) -
                p_over_q * *(b + 238 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 183 * OS1_S1 + 45);
            *(b + 183 * OS1_S1 + 95) =
                prefactor_z * *(b + 183 * OS1_S1 + 62) -
                p_over_q * *(b + 245 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 62);
            *(b + 183 * OS1_S1 + 96) =
                prefactor_y * *(b + 183 * OS1_S1 + 64) -
                p_over_q * *(b + 244 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 64) +
                one_over_two_q * *(b + 183 * OS1_S1 + 40);
            *(b + 183 * OS1_S1 + 97) =
                prefactor_y * *(b + 183 * OS1_S1 + 65) -
                p_over_q * *(b + 244 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 65);
            *(b + 183 * OS1_S1 + 98) =
                prefactor_x * *(b + 183 * OS1_S1 + 70) -
                p_over_q * *(b + 238 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 183 * OS1_S1 + 49);
            *(b + 183 * OS1_S1 + 99) =
                prefactor_x * *(b + 183 * OS1_S1 + 71) -
                p_over_q * *(b + 238 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 71) +
                one_over_two_q * *(b + 183 * OS1_S1 + 50);
            *(b + 183 * OS1_S1 + 100) =
                prefactor_z * *(b + 183 * OS1_S1 + 66) -
                p_over_q * *(b + 245 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 66);
            *(b + 183 * OS1_S1 + 101) =
                prefactor_z * *(b + 183 * OS1_S1 + 67) -
                p_over_q * *(b + 245 * OS1_S1 + 67) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 67) +
                one_over_two_q * *(b + 183 * OS1_S1 + 41);
            *(b + 183 * OS1_S1 + 102) =
                prefactor_y * *(b + 183 * OS1_S1 + 69) -
                p_over_q * *(b + 244 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 69) +
                one_over_two_q * *(b + 183 * OS1_S1 + 44);
            *(b + 183 * OS1_S1 + 103) =
                prefactor_y * *(b + 183 * OS1_S1 + 70) -
                p_over_q * *(b + 244 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 70);
            *(b + 183 * OS1_S1 + 104) =
                prefactor_x * *(b + 183 * OS1_S1 + 76) -
                p_over_q * *(b + 238 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 76) +
                one_over_two_q * *(b + 183 * OS1_S1 + 55);
            *(b + 183 * OS1_S1 + 105) =
                prefactor_x * *(b + 183 * OS1_S1 + 77) -
                p_over_q * *(b + 238 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 77);
            *(b + 183 * OS1_S1 + 106) =
                prefactor_z * *(b + 183 * OS1_S1 + 71) -
                p_over_q * *(b + 245 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 71);
            *(b + 183 * OS1_S1 + 107) =
                prefactor_x * *(b + 183 * OS1_S1 + 79) -
                p_over_q * *(b + 238 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 79);
            *(b + 183 * OS1_S1 + 108) =
                prefactor_x * *(b + 183 * OS1_S1 + 80) -
                p_over_q * *(b + 238 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 80);
            *(b + 183 * OS1_S1 + 109) =
                prefactor_x * *(b + 183 * OS1_S1 + 81) -
                p_over_q * *(b + 238 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 81);
            *(b + 183 * OS1_S1 + 110) =
                prefactor_y * *(b + 183 * OS1_S1 + 76) -
                p_over_q * *(b + 244 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 76);
            *(b + 183 * OS1_S1 + 111) =
                prefactor_x * *(b + 183 * OS1_S1 + 83) -
                p_over_q * *(b + 238 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 83);
            *(b + 183 * OS1_S1 + 112) =
                prefactor_y * *(b + 183 * OS1_S1 + 77) -
                p_over_q * *(b + 244 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 183 * OS1_S1 + 50);
            *(b + 183 * OS1_S1 + 113) =
                prefactor_z * *(b + 183 * OS1_S1 + 77) -
                p_over_q * *(b + 245 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 77);
            *(b + 183 * OS1_S1 + 114) =
                prefactor_z * *(b + 183 * OS1_S1 + 78) -
                p_over_q * *(b + 245 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 78) +
                one_over_two_q * *(b + 183 * OS1_S1 + 50);
            *(b + 183 * OS1_S1 + 115) =
                prefactor_z * *(b + 183 * OS1_S1 + 79) -
                p_over_q * *(b + 245 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 183 * OS1_S1 + 51);
            *(b + 183 * OS1_S1 + 116) =
                prefactor_y * *(b + 183 * OS1_S1 + 81) -
                p_over_q * *(b + 244 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 183 * OS1_S1 + 54);
            *(b + 183 * OS1_S1 + 117) =
                prefactor_y * *(b + 183 * OS1_S1 + 82) -
                p_over_q * *(b + 244 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 82) +
                one_over_two_q * *(b + 183 * OS1_S1 + 55);
            *(b + 183 * OS1_S1 + 118) =
                prefactor_y * *(b + 183 * OS1_S1 + 83) -
                p_over_q * *(b + 244 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 83);
            *(b + 183 * OS1_S1 + 119) =
                prefactor_z * *(b + 183 * OS1_S1 + 83) -
                p_over_q * *(b + 245 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 183 * OS1_S1 + 55);
            *(b + 184 * OS1_S1 + 84) =
                prefactor_x * *(b + 184 * OS1_S1 + 56) -
                p_over_q * *(b + 239 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 184 * OS1_S1 + 35);
            *(b + 184 * OS1_S1 + 85) =
                prefactor_y * *(b + 184 * OS1_S1 + 56) -
                p_over_q * *(b + 245 * OS1_S1 + 56) +
                one_over_two_q * *(b + 134 * OS1_S1 + 56);
            *(b + 184 * OS1_S1 + 86) =
                prefactor_z * *(b + 184 * OS1_S1 + 56) -
                p_over_q * *(b + 246 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 56);
            *(b + 184 * OS1_S1 + 87) =
                prefactor_y * *(b + 184 * OS1_S1 + 57) -
                p_over_q * *(b + 245 * OS1_S1 + 57) +
                one_over_two_q * *(b + 134 * OS1_S1 + 57) +
                one_over_two_q * *(b + 184 * OS1_S1 + 35);
            *(b + 184 * OS1_S1 + 88) =
                prefactor_y * *(b + 184 * OS1_S1 + 58) -
                p_over_q * *(b + 245 * OS1_S1 + 58) +
                one_over_two_q * *(b + 134 * OS1_S1 + 58);
            *(b + 184 * OS1_S1 + 89) =
                prefactor_z * *(b + 184 * OS1_S1 + 58) -
                p_over_q * *(b + 246 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 58) +
                one_over_two_q * *(b + 184 * OS1_S1 + 35);
            *(b + 184 * OS1_S1 + 90) =
                prefactor_y * *(b + 184 * OS1_S1 + 59) -
                p_over_q * *(b + 245 * OS1_S1 + 59) +
                one_over_two_q * *(b + 134 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 36);
            *(b + 184 * OS1_S1 + 91) =
                prefactor_z * *(b + 184 * OS1_S1 + 59) -
                p_over_q * *(b + 246 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 59);
            *(b + 184 * OS1_S1 + 92) =
                prefactor_y * *(b + 184 * OS1_S1 + 61) -
                p_over_q * *(b + 245 * OS1_S1 + 61) +
                one_over_two_q * *(b + 134 * OS1_S1 + 61);
            *(b + 184 * OS1_S1 + 93) =
                prefactor_z * *(b + 184 * OS1_S1 + 61) -
                p_over_q * *(b + 246 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 37);
            *(b + 184 * OS1_S1 + 94) =
                prefactor_x * *(b + 184 * OS1_S1 + 66) -
                p_over_q * *(b + 239 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 45);
            *(b + 184 * OS1_S1 + 95) =
                prefactor_z * *(b + 184 * OS1_S1 + 62) -
                p_over_q * *(b + 246 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 62);
            *(b + 184 * OS1_S1 + 96) =
                prefactor_y * *(b + 184 * OS1_S1 + 64) -
                p_over_q * *(b + 245 * OS1_S1 + 64) +
                one_over_two_q * *(b + 134 * OS1_S1 + 64) +
                one_over_two_q * *(b + 184 * OS1_S1 + 40);
            *(b + 184 * OS1_S1 + 97) =
                prefactor_y * *(b + 184 * OS1_S1 + 65) -
                p_over_q * *(b + 245 * OS1_S1 + 65) +
                one_over_two_q * *(b + 134 * OS1_S1 + 65);
            *(b + 184 * OS1_S1 + 98) =
                prefactor_x * *(b + 184 * OS1_S1 + 70) -
                p_over_q * *(b + 239 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 49);
            *(b + 184 * OS1_S1 + 99) =
                prefactor_x * *(b + 184 * OS1_S1 + 71) -
                p_over_q * *(b + 239 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 71) +
                one_over_two_q * *(b + 184 * OS1_S1 + 50);
            *(b + 184 * OS1_S1 + 100) =
                prefactor_z * *(b + 184 * OS1_S1 + 66) -
                p_over_q * *(b + 246 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 66);
            *(b + 184 * OS1_S1 + 101) =
                prefactor_z * *(b + 184 * OS1_S1 + 67) -
                p_over_q * *(b + 246 * OS1_S1 + 67) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 67) +
                one_over_two_q * *(b + 184 * OS1_S1 + 41);
            *(b + 184 * OS1_S1 + 102) =
                prefactor_y * *(b + 184 * OS1_S1 + 69) -
                p_over_q * *(b + 245 * OS1_S1 + 69) +
                one_over_two_q * *(b + 134 * OS1_S1 + 69) +
                one_over_two_q * *(b + 184 * OS1_S1 + 44);
            *(b + 184 * OS1_S1 + 103) =
                prefactor_y * *(b + 184 * OS1_S1 + 70) -
                p_over_q * *(b + 245 * OS1_S1 + 70) +
                one_over_two_q * *(b + 134 * OS1_S1 + 70);
            *(b + 184 * OS1_S1 + 104) =
                prefactor_x * *(b + 184 * OS1_S1 + 76) -
                p_over_q * *(b + 239 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 76) +
                one_over_two_q * *(b + 184 * OS1_S1 + 55);
            *(b + 184 * OS1_S1 + 105) =
                prefactor_x * *(b + 184 * OS1_S1 + 77) -
                p_over_q * *(b + 239 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 77);
            *(b + 184 * OS1_S1 + 106) =
                prefactor_z * *(b + 184 * OS1_S1 + 71) -
                p_over_q * *(b + 246 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 71);
            *(b + 184 * OS1_S1 + 107) =
                prefactor_x * *(b + 184 * OS1_S1 + 79) -
                p_over_q * *(b + 239 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 79);
            *(b + 184 * OS1_S1 + 108) =
                prefactor_x * *(b + 184 * OS1_S1 + 80) -
                p_over_q * *(b + 239 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 80);
            *(b + 184 * OS1_S1 + 109) =
                prefactor_x * *(b + 184 * OS1_S1 + 81) -
                p_over_q * *(b + 239 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 81);
            *(b + 184 * OS1_S1 + 110) =
                prefactor_y * *(b + 184 * OS1_S1 + 76) -
                p_over_q * *(b + 245 * OS1_S1 + 76) +
                one_over_two_q * *(b + 134 * OS1_S1 + 76);
            *(b + 184 * OS1_S1 + 111) =
                prefactor_x * *(b + 184 * OS1_S1 + 83) -
                p_over_q * *(b + 239 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 83);
            *(b + 184 * OS1_S1 + 112) =
                prefactor_y * *(b + 184 * OS1_S1 + 77) -
                p_over_q * *(b + 245 * OS1_S1 + 77) +
                one_over_two_q * *(b + 134 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 184 * OS1_S1 + 50);
            *(b + 184 * OS1_S1 + 113) =
                prefactor_z * *(b + 184 * OS1_S1 + 77) -
                p_over_q * *(b + 246 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 77);
            *(b + 184 * OS1_S1 + 114) =
                prefactor_z * *(b + 184 * OS1_S1 + 78) -
                p_over_q * *(b + 246 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 78) +
                one_over_two_q * *(b + 184 * OS1_S1 + 50);
            *(b + 184 * OS1_S1 + 115) =
                prefactor_z * *(b + 184 * OS1_S1 + 79) -
                p_over_q * *(b + 246 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 51);
            *(b + 184 * OS1_S1 + 116) =
                prefactor_y * *(b + 184 * OS1_S1 + 81) -
                p_over_q * *(b + 245 * OS1_S1 + 81) +
                one_over_two_q * *(b + 134 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 54);
            *(b + 184 * OS1_S1 + 117) =
                prefactor_y * *(b + 184 * OS1_S1 + 82) -
                p_over_q * *(b + 245 * OS1_S1 + 82) +
                one_over_two_q * *(b + 134 * OS1_S1 + 82) +
                one_over_two_q * *(b + 184 * OS1_S1 + 55);
            *(b + 184 * OS1_S1 + 118) =
                prefactor_y * *(b + 184 * OS1_S1 + 83) -
                p_over_q * *(b + 245 * OS1_S1 + 83) +
                one_over_two_q * *(b + 134 * OS1_S1 + 83);
            *(b + 184 * OS1_S1 + 119) =
                prefactor_z * *(b + 184 * OS1_S1 + 83) -
                p_over_q * *(b + 246 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 184 * OS1_S1 + 55);
            *(b + 185 * OS1_S1 + 84) =
                prefactor_x * *(b + 185 * OS1_S1 + 56) -
                p_over_q * *(b + 240 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 35);
            *(b + 185 * OS1_S1 + 85) = prefactor_y * *(b + 185 * OS1_S1 + 56) -
                                       p_over_q * *(b + 246 * OS1_S1 + 56);
            *(b + 185 * OS1_S1 + 86) =
                prefactor_z * *(b + 185 * OS1_S1 + 56) -
                p_over_q * *(b + 247 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 56);
            *(b + 185 * OS1_S1 + 87) =
                prefactor_y * *(b + 185 * OS1_S1 + 57) -
                p_over_q * *(b + 246 * OS1_S1 + 57) +
                one_over_two_q * *(b + 185 * OS1_S1 + 35);
            *(b + 185 * OS1_S1 + 88) = prefactor_y * *(b + 185 * OS1_S1 + 58) -
                                       p_over_q * *(b + 246 * OS1_S1 + 58);
            *(b + 185 * OS1_S1 + 89) =
                prefactor_z * *(b + 185 * OS1_S1 + 58) -
                p_over_q * *(b + 247 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 58) +
                one_over_two_q * *(b + 185 * OS1_S1 + 35);
            *(b + 185 * OS1_S1 + 90) =
                prefactor_y * *(b + 185 * OS1_S1 + 59) -
                p_over_q * *(b + 246 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 185 * OS1_S1 + 36);
            *(b + 185 * OS1_S1 + 91) =
                prefactor_z * *(b + 185 * OS1_S1 + 59) -
                p_over_q * *(b + 247 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 59);
            *(b + 185 * OS1_S1 + 92) = prefactor_y * *(b + 185 * OS1_S1 + 61) -
                                       p_over_q * *(b + 246 * OS1_S1 + 61);
            *(b + 185 * OS1_S1 + 93) =
                prefactor_z * *(b + 185 * OS1_S1 + 61) -
                p_over_q * *(b + 247 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 185 * OS1_S1 + 37);
            *(b + 185 * OS1_S1 + 94) =
                prefactor_x * *(b + 185 * OS1_S1 + 66) -
                p_over_q * *(b + 240 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 185 * OS1_S1 + 45);
            *(b + 185 * OS1_S1 + 95) =
                prefactor_z * *(b + 185 * OS1_S1 + 62) -
                p_over_q * *(b + 247 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 62);
            *(b + 185 * OS1_S1 + 96) =
                prefactor_y * *(b + 185 * OS1_S1 + 64) -
                p_over_q * *(b + 246 * OS1_S1 + 64) +
                one_over_two_q * *(b + 185 * OS1_S1 + 40);
            *(b + 185 * OS1_S1 + 97) = prefactor_y * *(b + 185 * OS1_S1 + 65) -
                                       p_over_q * *(b + 246 * OS1_S1 + 65);
            *(b + 185 * OS1_S1 + 98) =
                prefactor_x * *(b + 185 * OS1_S1 + 70) -
                p_over_q * *(b + 240 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 185 * OS1_S1 + 49);
            *(b + 185 * OS1_S1 + 99) =
                prefactor_x * *(b + 185 * OS1_S1 + 71) -
                p_over_q * *(b + 240 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 71) +
                one_over_two_q * *(b + 185 * OS1_S1 + 50);
            *(b + 185 * OS1_S1 + 100) =
                prefactor_z * *(b + 185 * OS1_S1 + 66) -
                p_over_q * *(b + 247 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 66);
            *(b + 185 * OS1_S1 + 101) =
                prefactor_x * *(b + 185 * OS1_S1 + 73) -
                p_over_q * *(b + 240 * OS1_S1 + 73) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 73) +
                one_over_two_q * *(b + 185 * OS1_S1 + 52);
            *(b + 185 * OS1_S1 + 102) =
                prefactor_y * *(b + 185 * OS1_S1 + 69) -
                p_over_q * *(b + 246 * OS1_S1 + 69) +
                one_over_two_q * *(b + 185 * OS1_S1 + 44);
            *(b + 185 * OS1_S1 + 103) = prefactor_y * *(b + 185 * OS1_S1 + 70) -
                                        p_over_q * *(b + 246 * OS1_S1 + 70);
            *(b + 185 * OS1_S1 + 104) =
                prefactor_x * *(b + 185 * OS1_S1 + 76) -
                p_over_q * *(b + 240 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 76) +
                one_over_two_q * *(b + 185 * OS1_S1 + 55);
            *(b + 185 * OS1_S1 + 105) =
                prefactor_x * *(b + 185 * OS1_S1 + 77) -
                p_over_q * *(b + 240 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 77);
            *(b + 185 * OS1_S1 + 106) =
                prefactor_x * *(b + 185 * OS1_S1 + 78) -
                p_over_q * *(b + 240 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 78);
            *(b + 185 * OS1_S1 + 107) =
                prefactor_x * *(b + 185 * OS1_S1 + 79) -
                p_over_q * *(b + 240 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 79);
            *(b + 185 * OS1_S1 + 108) =
                prefactor_x * *(b + 185 * OS1_S1 + 80) -
                p_over_q * *(b + 240 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 80);
            *(b + 185 * OS1_S1 + 109) =
                prefactor_x * *(b + 185 * OS1_S1 + 81) -
                p_over_q * *(b + 240 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 81);
            *(b + 185 * OS1_S1 + 110) = prefactor_y * *(b + 185 * OS1_S1 + 76) -
                                        p_over_q * *(b + 246 * OS1_S1 + 76);
            *(b + 185 * OS1_S1 + 111) =
                prefactor_x * *(b + 185 * OS1_S1 + 83) -
                p_over_q * *(b + 240 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 83);
            *(b + 185 * OS1_S1 + 112) =
                prefactor_y * *(b + 185 * OS1_S1 + 77) -
                p_over_q * *(b + 246 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 50);
            *(b + 185 * OS1_S1 + 113) =
                prefactor_z * *(b + 185 * OS1_S1 + 77) -
                p_over_q * *(b + 247 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 77);
            *(b + 185 * OS1_S1 + 114) =
                prefactor_z * *(b + 185 * OS1_S1 + 78) -
                p_over_q * *(b + 247 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 78) +
                one_over_two_q * *(b + 185 * OS1_S1 + 50);
            *(b + 185 * OS1_S1 + 115) =
                prefactor_z * *(b + 185 * OS1_S1 + 79) -
                p_over_q * *(b + 247 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 185 * OS1_S1 + 51);
            *(b + 185 * OS1_S1 + 116) =
                prefactor_y * *(b + 185 * OS1_S1 + 81) -
                p_over_q * *(b + 246 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 185 * OS1_S1 + 54);
            *(b + 185 * OS1_S1 + 117) =
                prefactor_y * *(b + 185 * OS1_S1 + 82) -
                p_over_q * *(b + 246 * OS1_S1 + 82) +
                one_over_two_q * *(b + 185 * OS1_S1 + 55);
            *(b + 185 * OS1_S1 + 118) = prefactor_y * *(b + 185 * OS1_S1 + 83) -
                                        p_over_q * *(b + 246 * OS1_S1 + 83);
            *(b + 185 * OS1_S1 + 119) =
                prefactor_z * *(b + 185 * OS1_S1 + 83) -
                p_over_q * *(b + 247 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 55);
            *(b + 186 * OS1_S1 + 84) =
                prefactor_x * *(b + 186 * OS1_S1 + 56) -
                p_over_q * *(b + 241 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 186 * OS1_S1 + 35);
            *(b + 186 * OS1_S1 + 85) =
                prefactor_y * *(b + 186 * OS1_S1 + 56) -
                p_over_q * *(b + 248 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 56);
            *(b + 186 * OS1_S1 + 86) = prefactor_z * *(b + 186 * OS1_S1 + 56) -
                                       p_over_q * *(b + 249 * OS1_S1 + 56);
            *(b + 186 * OS1_S1 + 87) =
                prefactor_y * *(b + 186 * OS1_S1 + 57) -
                p_over_q * *(b + 248 * OS1_S1 + 57) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 57) +
                one_over_two_q * *(b + 186 * OS1_S1 + 35);
            *(b + 186 * OS1_S1 + 88) = prefactor_z * *(b + 186 * OS1_S1 + 57) -
                                       p_over_q * *(b + 249 * OS1_S1 + 57);
            *(b + 186 * OS1_S1 + 89) =
                prefactor_z * *(b + 186 * OS1_S1 + 58) -
                p_over_q * *(b + 249 * OS1_S1 + 58) +
                one_over_two_q * *(b + 186 * OS1_S1 + 35);
            *(b + 186 * OS1_S1 + 90) =
                prefactor_y * *(b + 186 * OS1_S1 + 59) -
                p_over_q * *(b + 248 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 186 * OS1_S1 + 36);
            *(b + 186 * OS1_S1 + 91) = prefactor_z * *(b + 186 * OS1_S1 + 59) -
                                       p_over_q * *(b + 249 * OS1_S1 + 59);
            *(b + 186 * OS1_S1 + 92) =
                prefactor_y * *(b + 186 * OS1_S1 + 61) -
                p_over_q * *(b + 248 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 61);
            *(b + 186 * OS1_S1 + 93) =
                prefactor_z * *(b + 186 * OS1_S1 + 61) -
                p_over_q * *(b + 249 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 186 * OS1_S1 + 37);
            *(b + 186 * OS1_S1 + 94) =
                prefactor_x * *(b + 186 * OS1_S1 + 66) -
                p_over_q * *(b + 241 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 186 * OS1_S1 + 45);
            *(b + 186 * OS1_S1 + 95) = prefactor_z * *(b + 186 * OS1_S1 + 62) -
                                       p_over_q * *(b + 249 * OS1_S1 + 62);
            *(b + 186 * OS1_S1 + 96) =
                prefactor_z * *(b + 186 * OS1_S1 + 63) -
                p_over_q * *(b + 249 * OS1_S1 + 63) +
                one_over_two_q * *(b + 186 * OS1_S1 + 38);
            *(b + 186 * OS1_S1 + 97) =
                prefactor_y * *(b + 186 * OS1_S1 + 65) -
                p_over_q * *(b + 248 * OS1_S1 + 65) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 65);
            *(b + 186 * OS1_S1 + 98) =
                prefactor_x * *(b + 186 * OS1_S1 + 70) -
                p_over_q * *(b + 241 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 186 * OS1_S1 + 49);
            *(b + 186 * OS1_S1 + 99) =
                prefactor_x * *(b + 186 * OS1_S1 + 71) -
                p_over_q * *(b + 241 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 71) +
                one_over_two_q * *(b + 186 * OS1_S1 + 50);
            *(b + 186 * OS1_S1 + 100) = prefactor_z * *(b + 186 * OS1_S1 + 66) -
                                        p_over_q * *(b + 249 * OS1_S1 + 66);
            *(b + 186 * OS1_S1 + 101) =
                prefactor_z * *(b + 186 * OS1_S1 + 67) -
                p_over_q * *(b + 249 * OS1_S1 + 67) +
                one_over_two_q * *(b + 186 * OS1_S1 + 41);
            *(b + 186 * OS1_S1 + 102) =
                prefactor_x * *(b + 186 * OS1_S1 + 74) -
                p_over_q * *(b + 241 * OS1_S1 + 74) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 74) +
                one_over_two_q * *(b + 186 * OS1_S1 + 53);
            *(b + 186 * OS1_S1 + 103) =
                prefactor_y * *(b + 186 * OS1_S1 + 70) -
                p_over_q * *(b + 248 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 70);
            *(b + 186 * OS1_S1 + 104) =
                prefactor_x * *(b + 186 * OS1_S1 + 76) -
                p_over_q * *(b + 241 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 76) +
                one_over_two_q * *(b + 186 * OS1_S1 + 55);
            *(b + 186 * OS1_S1 + 105) =
                prefactor_x * *(b + 186 * OS1_S1 + 77) -
                p_over_q * *(b + 241 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 77);
            *(b + 186 * OS1_S1 + 106) = prefactor_z * *(b + 186 * OS1_S1 + 71) -
                                        p_over_q * *(b + 249 * OS1_S1 + 71);
            *(b + 186 * OS1_S1 + 107) =
                prefactor_x * *(b + 186 * OS1_S1 + 79) -
                p_over_q * *(b + 241 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 79);
            *(b + 186 * OS1_S1 + 108) =
                prefactor_x * *(b + 186 * OS1_S1 + 80) -
                p_over_q * *(b + 241 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 80);
            *(b + 186 * OS1_S1 + 109) =
                prefactor_x * *(b + 186 * OS1_S1 + 81) -
                p_over_q * *(b + 241 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 81);
            *(b + 186 * OS1_S1 + 110) =
                prefactor_x * *(b + 186 * OS1_S1 + 82) -
                p_over_q * *(b + 241 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 82);
            *(b + 186 * OS1_S1 + 111) =
                prefactor_x * *(b + 186 * OS1_S1 + 83) -
                p_over_q * *(b + 241 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 83);
            *(b + 186 * OS1_S1 + 112) =
                prefactor_y * *(b + 186 * OS1_S1 + 77) -
                p_over_q * *(b + 248 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 186 * OS1_S1 + 50);
            *(b + 186 * OS1_S1 + 113) = prefactor_z * *(b + 186 * OS1_S1 + 77) -
                                        p_over_q * *(b + 249 * OS1_S1 + 77);
            *(b + 186 * OS1_S1 + 114) =
                prefactor_z * *(b + 186 * OS1_S1 + 78) -
                p_over_q * *(b + 249 * OS1_S1 + 78) +
                one_over_two_q * *(b + 186 * OS1_S1 + 50);
            *(b + 186 * OS1_S1 + 115) =
                prefactor_z * *(b + 186 * OS1_S1 + 79) -
                p_over_q * *(b + 249 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 186 * OS1_S1 + 51);
            *(b + 186 * OS1_S1 + 116) =
                prefactor_y * *(b + 186 * OS1_S1 + 81) -
                p_over_q * *(b + 248 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 186 * OS1_S1 + 54);
            *(b + 186 * OS1_S1 + 117) =
                prefactor_y * *(b + 186 * OS1_S1 + 82) -
                p_over_q * *(b + 248 * OS1_S1 + 82) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 82) +
                one_over_two_q * *(b + 186 * OS1_S1 + 55);
            *(b + 186 * OS1_S1 + 118) =
                prefactor_y * *(b + 186 * OS1_S1 + 83) -
                p_over_q * *(b + 248 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 83);
            *(b + 186 * OS1_S1 + 119) =
                prefactor_z * *(b + 186 * OS1_S1 + 83) -
                p_over_q * *(b + 249 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 186 * OS1_S1 + 55);
            *(b + 187 * OS1_S1 + 84) =
                prefactor_x * *(b + 187 * OS1_S1 + 56) -
                p_over_q * *(b + 242 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 35);
            *(b + 187 * OS1_S1 + 85) =
                prefactor_y * *(b + 187 * OS1_S1 + 56) -
                p_over_q * *(b + 249 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 56);
            *(b + 187 * OS1_S1 + 86) =
                prefactor_z * *(b + 187 * OS1_S1 + 56) -
                p_over_q * *(b + 250 * OS1_S1 + 56) +
                one_over_two_q * *(b + 135 * OS1_S1 + 56);
            *(b + 187 * OS1_S1 + 87) =
                prefactor_y * *(b + 187 * OS1_S1 + 57) -
                p_over_q * *(b + 249 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 57) +
                one_over_two_q * *(b + 187 * OS1_S1 + 35);
            *(b + 187 * OS1_S1 + 88) =
                prefactor_z * *(b + 187 * OS1_S1 + 57) -
                p_over_q * *(b + 250 * OS1_S1 + 57) +
                one_over_two_q * *(b + 135 * OS1_S1 + 57);
            *(b + 187 * OS1_S1 + 89) =
                prefactor_z * *(b + 187 * OS1_S1 + 58) -
                p_over_q * *(b + 250 * OS1_S1 + 58) +
                one_over_two_q * *(b + 135 * OS1_S1 + 58) +
                one_over_two_q * *(b + 187 * OS1_S1 + 35);
            *(b + 187 * OS1_S1 + 90) =
                prefactor_y * *(b + 187 * OS1_S1 + 59) -
                p_over_q * *(b + 249 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 36);
            *(b + 187 * OS1_S1 + 91) =
                prefactor_z * *(b + 187 * OS1_S1 + 59) -
                p_over_q * *(b + 250 * OS1_S1 + 59) +
                one_over_two_q * *(b + 135 * OS1_S1 + 59);
            *(b + 187 * OS1_S1 + 92) =
                prefactor_y * *(b + 187 * OS1_S1 + 61) -
                p_over_q * *(b + 249 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 61);
            *(b + 187 * OS1_S1 + 93) =
                prefactor_z * *(b + 187 * OS1_S1 + 61) -
                p_over_q * *(b + 250 * OS1_S1 + 61) +
                one_over_two_q * *(b + 135 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 37);
            *(b + 187 * OS1_S1 + 94) =
                prefactor_x * *(b + 187 * OS1_S1 + 66) -
                p_over_q * *(b + 242 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 45);
            *(b + 187 * OS1_S1 + 95) =
                prefactor_z * *(b + 187 * OS1_S1 + 62) -
                p_over_q * *(b + 250 * OS1_S1 + 62) +
                one_over_two_q * *(b + 135 * OS1_S1 + 62);
            *(b + 187 * OS1_S1 + 96) =
                prefactor_z * *(b + 187 * OS1_S1 + 63) -
                p_over_q * *(b + 250 * OS1_S1 + 63) +
                one_over_two_q * *(b + 135 * OS1_S1 + 63) +
                one_over_two_q * *(b + 187 * OS1_S1 + 38);
            *(b + 187 * OS1_S1 + 97) =
                prefactor_y * *(b + 187 * OS1_S1 + 65) -
                p_over_q * *(b + 249 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 65);
            *(b + 187 * OS1_S1 + 98) =
                prefactor_x * *(b + 187 * OS1_S1 + 70) -
                p_over_q * *(b + 242 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 49);
            *(b + 187 * OS1_S1 + 99) =
                prefactor_x * *(b + 187 * OS1_S1 + 71) -
                p_over_q * *(b + 242 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 71) +
                one_over_two_q * *(b + 187 * OS1_S1 + 50);
            *(b + 187 * OS1_S1 + 100) =
                prefactor_z * *(b + 187 * OS1_S1 + 66) -
                p_over_q * *(b + 250 * OS1_S1 + 66) +
                one_over_two_q * *(b + 135 * OS1_S1 + 66);
            *(b + 187 * OS1_S1 + 101) =
                prefactor_z * *(b + 187 * OS1_S1 + 67) -
                p_over_q * *(b + 250 * OS1_S1 + 67) +
                one_over_two_q * *(b + 135 * OS1_S1 + 67) +
                one_over_two_q * *(b + 187 * OS1_S1 + 41);
            *(b + 187 * OS1_S1 + 102) =
                prefactor_x * *(b + 187 * OS1_S1 + 74) -
                p_over_q * *(b + 242 * OS1_S1 + 74) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 74) +
                one_over_two_q * *(b + 187 * OS1_S1 + 53);
            *(b + 187 * OS1_S1 + 103) =
                prefactor_y * *(b + 187 * OS1_S1 + 70) -
                p_over_q * *(b + 249 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 70);
            *(b + 187 * OS1_S1 + 104) =
                prefactor_x * *(b + 187 * OS1_S1 + 76) -
                p_over_q * *(b + 242 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 76) +
                one_over_two_q * *(b + 187 * OS1_S1 + 55);
            *(b + 187 * OS1_S1 + 105) =
                prefactor_x * *(b + 187 * OS1_S1 + 77) -
                p_over_q * *(b + 242 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 77);
            *(b + 187 * OS1_S1 + 106) =
                prefactor_z * *(b + 187 * OS1_S1 + 71) -
                p_over_q * *(b + 250 * OS1_S1 + 71) +
                one_over_two_q * *(b + 135 * OS1_S1 + 71);
            *(b + 187 * OS1_S1 + 107) =
                prefactor_x * *(b + 187 * OS1_S1 + 79) -
                p_over_q * *(b + 242 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 79);
            *(b + 187 * OS1_S1 + 108) =
                prefactor_x * *(b + 187 * OS1_S1 + 80) -
                p_over_q * *(b + 242 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 80);
            *(b + 187 * OS1_S1 + 109) =
                prefactor_x * *(b + 187 * OS1_S1 + 81) -
                p_over_q * *(b + 242 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 81);
            *(b + 187 * OS1_S1 + 110) =
                prefactor_x * *(b + 187 * OS1_S1 + 82) -
                p_over_q * *(b + 242 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 82);
            *(b + 187 * OS1_S1 + 111) =
                prefactor_x * *(b + 187 * OS1_S1 + 83) -
                p_over_q * *(b + 242 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 83);
            *(b + 187 * OS1_S1 + 112) =
                prefactor_y * *(b + 187 * OS1_S1 + 77) -
                p_over_q * *(b + 249 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 50);
            *(b + 187 * OS1_S1 + 113) =
                prefactor_z * *(b + 187 * OS1_S1 + 77) -
                p_over_q * *(b + 250 * OS1_S1 + 77) +
                one_over_two_q * *(b + 135 * OS1_S1 + 77);
            *(b + 187 * OS1_S1 + 114) =
                prefactor_z * *(b + 187 * OS1_S1 + 78) -
                p_over_q * *(b + 250 * OS1_S1 + 78) +
                one_over_two_q * *(b + 135 * OS1_S1 + 78) +
                one_over_two_q * *(b + 187 * OS1_S1 + 50);
            *(b + 187 * OS1_S1 + 115) =
                prefactor_z * *(b + 187 * OS1_S1 + 79) -
                p_over_q * *(b + 250 * OS1_S1 + 79) +
                one_over_two_q * *(b + 135 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 51);
            *(b + 187 * OS1_S1 + 116) =
                prefactor_y * *(b + 187 * OS1_S1 + 81) -
                p_over_q * *(b + 249 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 54);
            *(b + 187 * OS1_S1 + 117) =
                prefactor_y * *(b + 187 * OS1_S1 + 82) -
                p_over_q * *(b + 249 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 82) +
                one_over_two_q * *(b + 187 * OS1_S1 + 55);
            *(b + 187 * OS1_S1 + 118) =
                prefactor_y * *(b + 187 * OS1_S1 + 83) -
                p_over_q * *(b + 249 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 83);
            *(b + 187 * OS1_S1 + 119) =
                prefactor_z * *(b + 187 * OS1_S1 + 83) -
                p_over_q * *(b + 250 * OS1_S1 + 83) +
                one_over_two_q * *(b + 135 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 55);
            *(b + 188 * OS1_S1 + 84) =
                prefactor_x * *(b + 188 * OS1_S1 + 56) -
                p_over_q * *(b + 243 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 188 * OS1_S1 + 35);
            *(b + 188 * OS1_S1 + 85) =
                prefactor_y * *(b + 188 * OS1_S1 + 56) -
                p_over_q * *(b + 250 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 56);
            *(b + 188 * OS1_S1 + 86) =
                prefactor_z * *(b + 188 * OS1_S1 + 56) -
                p_over_q * *(b + 251 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 56);
            *(b + 188 * OS1_S1 + 87) =
                prefactor_y * *(b + 188 * OS1_S1 + 57) -
                p_over_q * *(b + 250 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 57) +
                one_over_two_q * *(b + 188 * OS1_S1 + 35);
            *(b + 188 * OS1_S1 + 88) =
                prefactor_z * *(b + 188 * OS1_S1 + 57) -
                p_over_q * *(b + 251 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 57);
            *(b + 188 * OS1_S1 + 89) =
                prefactor_z * *(b + 188 * OS1_S1 + 58) -
                p_over_q * *(b + 251 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 58) +
                one_over_two_q * *(b + 188 * OS1_S1 + 35);
            *(b + 188 * OS1_S1 + 90) =
                prefactor_y * *(b + 188 * OS1_S1 + 59) -
                p_over_q * *(b + 250 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 188 * OS1_S1 + 36);
            *(b + 188 * OS1_S1 + 91) =
                prefactor_z * *(b + 188 * OS1_S1 + 59) -
                p_over_q * *(b + 251 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 59);
            *(b + 188 * OS1_S1 + 92) =
                prefactor_y * *(b + 188 * OS1_S1 + 61) -
                p_over_q * *(b + 250 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 61);
            *(b + 188 * OS1_S1 + 93) =
                prefactor_z * *(b + 188 * OS1_S1 + 61) -
                p_over_q * *(b + 251 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 188 * OS1_S1 + 37);
            *(b + 188 * OS1_S1 + 94) =
                prefactor_x * *(b + 188 * OS1_S1 + 66) -
                p_over_q * *(b + 243 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 188 * OS1_S1 + 45);
            *(b + 188 * OS1_S1 + 95) =
                prefactor_z * *(b + 188 * OS1_S1 + 62) -
                p_over_q * *(b + 251 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 62);
            *(b + 188 * OS1_S1 + 96) =
                prefactor_z * *(b + 188 * OS1_S1 + 63) -
                p_over_q * *(b + 251 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 63) +
                one_over_two_q * *(b + 188 * OS1_S1 + 38);
            *(b + 188 * OS1_S1 + 97) =
                prefactor_y * *(b + 188 * OS1_S1 + 65) -
                p_over_q * *(b + 250 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 65);
            *(b + 188 * OS1_S1 + 98) =
                prefactor_x * *(b + 188 * OS1_S1 + 70) -
                p_over_q * *(b + 243 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 188 * OS1_S1 + 49);
            *(b + 188 * OS1_S1 + 99) =
                prefactor_x * *(b + 188 * OS1_S1 + 71) -
                p_over_q * *(b + 243 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 71) +
                one_over_two_q * *(b + 188 * OS1_S1 + 50);
            *(b + 188 * OS1_S1 + 100) =
                prefactor_z * *(b + 188 * OS1_S1 + 66) -
                p_over_q * *(b + 251 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 66);
            *(b + 188 * OS1_S1 + 101) =
                prefactor_z * *(b + 188 * OS1_S1 + 67) -
                p_over_q * *(b + 251 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 67) +
                one_over_two_q * *(b + 188 * OS1_S1 + 41);
            *(b + 188 * OS1_S1 + 102) =
                prefactor_x * *(b + 188 * OS1_S1 + 74) -
                p_over_q * *(b + 243 * OS1_S1 + 74) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 74) +
                one_over_two_q * *(b + 188 * OS1_S1 + 53);
            *(b + 188 * OS1_S1 + 103) =
                prefactor_y * *(b + 188 * OS1_S1 + 70) -
                p_over_q * *(b + 250 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 70);
            *(b + 188 * OS1_S1 + 104) =
                prefactor_x * *(b + 188 * OS1_S1 + 76) -
                p_over_q * *(b + 243 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 76) +
                one_over_two_q * *(b + 188 * OS1_S1 + 55);
            *(b + 188 * OS1_S1 + 105) =
                prefactor_x * *(b + 188 * OS1_S1 + 77) -
                p_over_q * *(b + 243 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 77);
            *(b + 188 * OS1_S1 + 106) =
                prefactor_z * *(b + 188 * OS1_S1 + 71) -
                p_over_q * *(b + 251 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 71);
            *(b + 188 * OS1_S1 + 107) =
                prefactor_x * *(b + 188 * OS1_S1 + 79) -
                p_over_q * *(b + 243 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 79);
            *(b + 188 * OS1_S1 + 108) =
                prefactor_x * *(b + 188 * OS1_S1 + 80) -
                p_over_q * *(b + 243 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 80);
            *(b + 188 * OS1_S1 + 109) =
                prefactor_x * *(b + 188 * OS1_S1 + 81) -
                p_over_q * *(b + 243 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 81);
            *(b + 188 * OS1_S1 + 110) =
                prefactor_x * *(b + 188 * OS1_S1 + 82) -
                p_over_q * *(b + 243 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 82);
            *(b + 188 * OS1_S1 + 111) =
                prefactor_x * *(b + 188 * OS1_S1 + 83) -
                p_over_q * *(b + 243 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 83);
            *(b + 188 * OS1_S1 + 112) =
                prefactor_y * *(b + 188 * OS1_S1 + 77) -
                p_over_q * *(b + 250 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 188 * OS1_S1 + 50);
            *(b + 188 * OS1_S1 + 113) =
                prefactor_z * *(b + 188 * OS1_S1 + 77) -
                p_over_q * *(b + 251 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 77);
            *(b + 188 * OS1_S1 + 114) =
                prefactor_z * *(b + 188 * OS1_S1 + 78) -
                p_over_q * *(b + 251 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 78) +
                one_over_two_q * *(b + 188 * OS1_S1 + 50);
            *(b + 188 * OS1_S1 + 115) =
                prefactor_z * *(b + 188 * OS1_S1 + 79) -
                p_over_q * *(b + 251 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 188 * OS1_S1 + 51);
            *(b + 188 * OS1_S1 + 116) =
                prefactor_y * *(b + 188 * OS1_S1 + 81) -
                p_over_q * *(b + 250 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 188 * OS1_S1 + 54);
            *(b + 188 * OS1_S1 + 117) =
                prefactor_y * *(b + 188 * OS1_S1 + 82) -
                p_over_q * *(b + 250 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 82) +
                one_over_two_q * *(b + 188 * OS1_S1 + 55);
            *(b + 188 * OS1_S1 + 118) =
                prefactor_y * *(b + 188 * OS1_S1 + 83) -
                p_over_q * *(b + 250 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 83);
            *(b + 188 * OS1_S1 + 119) =
                prefactor_z * *(b + 188 * OS1_S1 + 83) -
                p_over_q * *(b + 251 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 188 * OS1_S1 + 55);
            *(b + 189 * OS1_S1 + 84) =
                prefactor_x * *(b + 189 * OS1_S1 + 56) -
                p_over_q * *(b + 244 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 189 * OS1_S1 + 35);
            *(b + 189 * OS1_S1 + 85) =
                prefactor_y * *(b + 189 * OS1_S1 + 56) -
                p_over_q * *(b + 251 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 56);
            *(b + 189 * OS1_S1 + 86) =
                prefactor_z * *(b + 189 * OS1_S1 + 56) -
                p_over_q * *(b + 252 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 56);
            *(b + 189 * OS1_S1 + 87) =
                prefactor_y * *(b + 189 * OS1_S1 + 57) -
                p_over_q * *(b + 251 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 57) +
                one_over_two_q * *(b + 189 * OS1_S1 + 35);
            *(b + 189 * OS1_S1 + 88) =
                prefactor_z * *(b + 189 * OS1_S1 + 57) -
                p_over_q * *(b + 252 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 57);
            *(b + 189 * OS1_S1 + 89) =
                prefactor_z * *(b + 189 * OS1_S1 + 58) -
                p_over_q * *(b + 252 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 58) +
                one_over_two_q * *(b + 189 * OS1_S1 + 35);
            *(b + 189 * OS1_S1 + 90) =
                prefactor_y * *(b + 189 * OS1_S1 + 59) -
                p_over_q * *(b + 251 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 189 * OS1_S1 + 36);
            *(b + 189 * OS1_S1 + 91) =
                prefactor_z * *(b + 189 * OS1_S1 + 59) -
                p_over_q * *(b + 252 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 59);
            *(b + 189 * OS1_S1 + 92) =
                prefactor_y * *(b + 189 * OS1_S1 + 61) -
                p_over_q * *(b + 251 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 61);
            *(b + 189 * OS1_S1 + 93) =
                prefactor_z * *(b + 189 * OS1_S1 + 61) -
                p_over_q * *(b + 252 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 189 * OS1_S1 + 37);
            *(b + 189 * OS1_S1 + 94) =
                prefactor_x * *(b + 189 * OS1_S1 + 66) -
                p_over_q * *(b + 244 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 189 * OS1_S1 + 45);
            *(b + 189 * OS1_S1 + 95) =
                prefactor_z * *(b + 189 * OS1_S1 + 62) -
                p_over_q * *(b + 252 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 62);
            *(b + 189 * OS1_S1 + 96) =
                prefactor_z * *(b + 189 * OS1_S1 + 63) -
                p_over_q * *(b + 252 * OS1_S1 + 63) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 63) +
                one_over_two_q * *(b + 189 * OS1_S1 + 38);
            *(b + 189 * OS1_S1 + 97) =
                prefactor_y * *(b + 189 * OS1_S1 + 65) -
                p_over_q * *(b + 251 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 65);
            *(b + 189 * OS1_S1 + 98) =
                prefactor_x * *(b + 189 * OS1_S1 + 70) -
                p_over_q * *(b + 244 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 189 * OS1_S1 + 49);
            *(b + 189 * OS1_S1 + 99) =
                prefactor_x * *(b + 189 * OS1_S1 + 71) -
                p_over_q * *(b + 244 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 71) +
                one_over_two_q * *(b + 189 * OS1_S1 + 50);
            *(b + 189 * OS1_S1 + 100) =
                prefactor_z * *(b + 189 * OS1_S1 + 66) -
                p_over_q * *(b + 252 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 66);
            *(b + 189 * OS1_S1 + 101) =
                prefactor_z * *(b + 189 * OS1_S1 + 67) -
                p_over_q * *(b + 252 * OS1_S1 + 67) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 67) +
                one_over_two_q * *(b + 189 * OS1_S1 + 41);
            *(b + 189 * OS1_S1 + 102) =
                prefactor_y * *(b + 189 * OS1_S1 + 69) -
                p_over_q * *(b + 251 * OS1_S1 + 69) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 69) +
                one_over_two_q * *(b + 189 * OS1_S1 + 44);
            *(b + 189 * OS1_S1 + 103) =
                prefactor_y * *(b + 189 * OS1_S1 + 70) -
                p_over_q * *(b + 251 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 70);
            *(b + 189 * OS1_S1 + 104) =
                prefactor_x * *(b + 189 * OS1_S1 + 76) -
                p_over_q * *(b + 244 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 76) +
                one_over_two_q * *(b + 189 * OS1_S1 + 55);
            *(b + 189 * OS1_S1 + 105) =
                prefactor_x * *(b + 189 * OS1_S1 + 77) -
                p_over_q * *(b + 244 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 77);
            *(b + 189 * OS1_S1 + 106) =
                prefactor_z * *(b + 189 * OS1_S1 + 71) -
                p_over_q * *(b + 252 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 71);
            *(b + 189 * OS1_S1 + 107) =
                prefactor_x * *(b + 189 * OS1_S1 + 79) -
                p_over_q * *(b + 244 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 79);
            *(b + 189 * OS1_S1 + 108) =
                prefactor_x * *(b + 189 * OS1_S1 + 80) -
                p_over_q * *(b + 244 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 80);
            *(b + 189 * OS1_S1 + 109) =
                prefactor_x * *(b + 189 * OS1_S1 + 81) -
                p_over_q * *(b + 244 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 81);
            *(b + 189 * OS1_S1 + 110) =
                prefactor_y * *(b + 189 * OS1_S1 + 76) -
                p_over_q * *(b + 251 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 76);
            *(b + 189 * OS1_S1 + 111) =
                prefactor_x * *(b + 189 * OS1_S1 + 83) -
                p_over_q * *(b + 244 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 83);
            *(b + 189 * OS1_S1 + 112) =
                prefactor_y * *(b + 189 * OS1_S1 + 77) -
                p_over_q * *(b + 251 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 189 * OS1_S1 + 50);
            *(b + 189 * OS1_S1 + 113) =
                prefactor_z * *(b + 189 * OS1_S1 + 77) -
                p_over_q * *(b + 252 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 77);
            *(b + 189 * OS1_S1 + 114) =
                prefactor_z * *(b + 189 * OS1_S1 + 78) -
                p_over_q * *(b + 252 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 78) +
                one_over_two_q * *(b + 189 * OS1_S1 + 50);
            *(b + 189 * OS1_S1 + 115) =
                prefactor_z * *(b + 189 * OS1_S1 + 79) -
                p_over_q * *(b + 252 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 189 * OS1_S1 + 51);
            *(b + 189 * OS1_S1 + 116) =
                prefactor_y * *(b + 189 * OS1_S1 + 81) -
                p_over_q * *(b + 251 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 189 * OS1_S1 + 54);
            *(b + 189 * OS1_S1 + 117) =
                prefactor_y * *(b + 189 * OS1_S1 + 82) -
                p_over_q * *(b + 251 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 82) +
                one_over_two_q * *(b + 189 * OS1_S1 + 55);
            *(b + 189 * OS1_S1 + 118) =
                prefactor_y * *(b + 189 * OS1_S1 + 83) -
                p_over_q * *(b + 251 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 83);
            *(b + 189 * OS1_S1 + 119) =
                prefactor_z * *(b + 189 * OS1_S1 + 83) -
                p_over_q * *(b + 252 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 189 * OS1_S1 + 55);
            *(b + 190 * OS1_S1 + 84) =
                prefactor_x * *(b + 190 * OS1_S1 + 56) -
                p_over_q * *(b + 245 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 190 * OS1_S1 + 35);
            *(b + 190 * OS1_S1 + 85) =
                prefactor_y * *(b + 190 * OS1_S1 + 56) -
                p_over_q * *(b + 252 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 56);
            *(b + 190 * OS1_S1 + 86) =
                prefactor_z * *(b + 190 * OS1_S1 + 56) -
                p_over_q * *(b + 253 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 56);
            *(b + 190 * OS1_S1 + 87) =
                prefactor_y * *(b + 190 * OS1_S1 + 57) -
                p_over_q * *(b + 252 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 57) +
                one_over_two_q * *(b + 190 * OS1_S1 + 35);
            *(b + 190 * OS1_S1 + 88) =
                prefactor_y * *(b + 190 * OS1_S1 + 58) -
                p_over_q * *(b + 252 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 58);
            *(b + 190 * OS1_S1 + 89) =
                prefactor_z * *(b + 190 * OS1_S1 + 58) -
                p_over_q * *(b + 253 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 58) +
                one_over_two_q * *(b + 190 * OS1_S1 + 35);
            *(b + 190 * OS1_S1 + 90) =
                prefactor_y * *(b + 190 * OS1_S1 + 59) -
                p_over_q * *(b + 252 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 190 * OS1_S1 + 36);
            *(b + 190 * OS1_S1 + 91) =
                prefactor_z * *(b + 190 * OS1_S1 + 59) -
                p_over_q * *(b + 253 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 59);
            *(b + 190 * OS1_S1 + 92) =
                prefactor_y * *(b + 190 * OS1_S1 + 61) -
                p_over_q * *(b + 252 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 61);
            *(b + 190 * OS1_S1 + 93) =
                prefactor_z * *(b + 190 * OS1_S1 + 61) -
                p_over_q * *(b + 253 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 190 * OS1_S1 + 37);
            *(b + 190 * OS1_S1 + 94) =
                prefactor_x * *(b + 190 * OS1_S1 + 66) -
                p_over_q * *(b + 245 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 190 * OS1_S1 + 45);
            *(b + 190 * OS1_S1 + 95) =
                prefactor_z * *(b + 190 * OS1_S1 + 62) -
                p_over_q * *(b + 253 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 62);
            *(b + 190 * OS1_S1 + 96) =
                prefactor_y * *(b + 190 * OS1_S1 + 64) -
                p_over_q * *(b + 252 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 64) +
                one_over_two_q * *(b + 190 * OS1_S1 + 40);
            *(b + 190 * OS1_S1 + 97) =
                prefactor_y * *(b + 190 * OS1_S1 + 65) -
                p_over_q * *(b + 252 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 65);
            *(b + 190 * OS1_S1 + 98) =
                prefactor_x * *(b + 190 * OS1_S1 + 70) -
                p_over_q * *(b + 245 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 190 * OS1_S1 + 49);
            *(b + 190 * OS1_S1 + 99) =
                prefactor_x * *(b + 190 * OS1_S1 + 71) -
                p_over_q * *(b + 245 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 71) +
                one_over_two_q * *(b + 190 * OS1_S1 + 50);
            *(b + 190 * OS1_S1 + 100) =
                prefactor_z * *(b + 190 * OS1_S1 + 66) -
                p_over_q * *(b + 253 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 66);
            *(b + 190 * OS1_S1 + 101) =
                prefactor_x * *(b + 190 * OS1_S1 + 73) -
                p_over_q * *(b + 245 * OS1_S1 + 73) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 73) +
                one_over_two_q * *(b + 190 * OS1_S1 + 52);
            *(b + 190 * OS1_S1 + 102) =
                prefactor_y * *(b + 190 * OS1_S1 + 69) -
                p_over_q * *(b + 252 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 69) +
                one_over_two_q * *(b + 190 * OS1_S1 + 44);
            *(b + 190 * OS1_S1 + 103) =
                prefactor_y * *(b + 190 * OS1_S1 + 70) -
                p_over_q * *(b + 252 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 70);
            *(b + 190 * OS1_S1 + 104) =
                prefactor_x * *(b + 190 * OS1_S1 + 76) -
                p_over_q * *(b + 245 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 76) +
                one_over_two_q * *(b + 190 * OS1_S1 + 55);
            *(b + 190 * OS1_S1 + 105) =
                prefactor_x * *(b + 190 * OS1_S1 + 77) -
                p_over_q * *(b + 245 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 77);
            *(b + 190 * OS1_S1 + 106) =
                prefactor_x * *(b + 190 * OS1_S1 + 78) -
                p_over_q * *(b + 245 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 78);
            *(b + 190 * OS1_S1 + 107) =
                prefactor_x * *(b + 190 * OS1_S1 + 79) -
                p_over_q * *(b + 245 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 79);
            *(b + 190 * OS1_S1 + 108) =
                prefactor_x * *(b + 190 * OS1_S1 + 80) -
                p_over_q * *(b + 245 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 80);
            *(b + 190 * OS1_S1 + 109) =
                prefactor_x * *(b + 190 * OS1_S1 + 81) -
                p_over_q * *(b + 245 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 81);
            *(b + 190 * OS1_S1 + 110) =
                prefactor_y * *(b + 190 * OS1_S1 + 76) -
                p_over_q * *(b + 252 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 76);
            *(b + 190 * OS1_S1 + 111) =
                prefactor_x * *(b + 190 * OS1_S1 + 83) -
                p_over_q * *(b + 245 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 83);
            *(b + 190 * OS1_S1 + 112) =
                prefactor_y * *(b + 190 * OS1_S1 + 77) -
                p_over_q * *(b + 252 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 190 * OS1_S1 + 50);
            *(b + 190 * OS1_S1 + 113) =
                prefactor_z * *(b + 190 * OS1_S1 + 77) -
                p_over_q * *(b + 253 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 77);
            *(b + 190 * OS1_S1 + 114) =
                prefactor_z * *(b + 190 * OS1_S1 + 78) -
                p_over_q * *(b + 253 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 78) +
                one_over_two_q * *(b + 190 * OS1_S1 + 50);
            *(b + 190 * OS1_S1 + 115) =
                prefactor_z * *(b + 190 * OS1_S1 + 79) -
                p_over_q * *(b + 253 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 190 * OS1_S1 + 51);
            *(b + 190 * OS1_S1 + 116) =
                prefactor_y * *(b + 190 * OS1_S1 + 81) -
                p_over_q * *(b + 252 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 190 * OS1_S1 + 54);
            *(b + 190 * OS1_S1 + 117) =
                prefactor_y * *(b + 190 * OS1_S1 + 82) -
                p_over_q * *(b + 252 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 82) +
                one_over_two_q * *(b + 190 * OS1_S1 + 55);
            *(b + 190 * OS1_S1 + 118) =
                prefactor_y * *(b + 190 * OS1_S1 + 83) -
                p_over_q * *(b + 252 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 83);
            *(b + 190 * OS1_S1 + 119) =
                prefactor_z * *(b + 190 * OS1_S1 + 83) -
                p_over_q * *(b + 253 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 190 * OS1_S1 + 55);
            *(b + 191 * OS1_S1 + 84) =
                prefactor_x * *(b + 191 * OS1_S1 + 56) -
                p_over_q * *(b + 246 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 35);
            *(b + 191 * OS1_S1 + 85) =
                prefactor_y * *(b + 191 * OS1_S1 + 56) -
                p_over_q * *(b + 253 * OS1_S1 + 56) +
                one_over_two_q * *(b + 140 * OS1_S1 + 56);
            *(b + 191 * OS1_S1 + 86) =
                prefactor_z * *(b + 191 * OS1_S1 + 56) -
                p_over_q * *(b + 254 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 56);
            *(b + 191 * OS1_S1 + 87) =
                prefactor_y * *(b + 191 * OS1_S1 + 57) -
                p_over_q * *(b + 253 * OS1_S1 + 57) +
                one_over_two_q * *(b + 140 * OS1_S1 + 57) +
                one_over_two_q * *(b + 191 * OS1_S1 + 35);
            *(b + 191 * OS1_S1 + 88) =
                prefactor_y * *(b + 191 * OS1_S1 + 58) -
                p_over_q * *(b + 253 * OS1_S1 + 58) +
                one_over_two_q * *(b + 140 * OS1_S1 + 58);
            *(b + 191 * OS1_S1 + 89) =
                prefactor_z * *(b + 191 * OS1_S1 + 58) -
                p_over_q * *(b + 254 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 58) +
                one_over_two_q * *(b + 191 * OS1_S1 + 35);
            *(b + 191 * OS1_S1 + 90) =
                prefactor_y * *(b + 191 * OS1_S1 + 59) -
                p_over_q * *(b + 253 * OS1_S1 + 59) +
                one_over_two_q * *(b + 140 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 36);
            *(b + 191 * OS1_S1 + 91) =
                prefactor_z * *(b + 191 * OS1_S1 + 59) -
                p_over_q * *(b + 254 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 59);
            *(b + 191 * OS1_S1 + 92) =
                prefactor_y * *(b + 191 * OS1_S1 + 61) -
                p_over_q * *(b + 253 * OS1_S1 + 61) +
                one_over_two_q * *(b + 140 * OS1_S1 + 61);
            *(b + 191 * OS1_S1 + 93) =
                prefactor_z * *(b + 191 * OS1_S1 + 61) -
                p_over_q * *(b + 254 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 37);
            *(b + 191 * OS1_S1 + 94) =
                prefactor_x * *(b + 191 * OS1_S1 + 66) -
                p_over_q * *(b + 246 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 45);
            *(b + 191 * OS1_S1 + 95) =
                prefactor_z * *(b + 191 * OS1_S1 + 62) -
                p_over_q * *(b + 254 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 62);
            *(b + 191 * OS1_S1 + 96) =
                prefactor_y * *(b + 191 * OS1_S1 + 64) -
                p_over_q * *(b + 253 * OS1_S1 + 64) +
                one_over_two_q * *(b + 140 * OS1_S1 + 64) +
                one_over_two_q * *(b + 191 * OS1_S1 + 40);
            *(b + 191 * OS1_S1 + 97) =
                prefactor_y * *(b + 191 * OS1_S1 + 65) -
                p_over_q * *(b + 253 * OS1_S1 + 65) +
                one_over_two_q * *(b + 140 * OS1_S1 + 65);
            *(b + 191 * OS1_S1 + 98) =
                prefactor_x * *(b + 191 * OS1_S1 + 70) -
                p_over_q * *(b + 246 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 49);
            *(b + 191 * OS1_S1 + 99) =
                prefactor_x * *(b + 191 * OS1_S1 + 71) -
                p_over_q * *(b + 246 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 71) +
                one_over_two_q * *(b + 191 * OS1_S1 + 50);
            *(b + 191 * OS1_S1 + 100) =
                prefactor_z * *(b + 191 * OS1_S1 + 66) -
                p_over_q * *(b + 254 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 66);
            *(b + 191 * OS1_S1 + 101) =
                prefactor_x * *(b + 191 * OS1_S1 + 73) -
                p_over_q * *(b + 246 * OS1_S1 + 73) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 73) +
                one_over_two_q * *(b + 191 * OS1_S1 + 52);
            *(b + 191 * OS1_S1 + 102) =
                prefactor_y * *(b + 191 * OS1_S1 + 69) -
                p_over_q * *(b + 253 * OS1_S1 + 69) +
                one_over_two_q * *(b + 140 * OS1_S1 + 69) +
                one_over_two_q * *(b + 191 * OS1_S1 + 44);
            *(b + 191 * OS1_S1 + 103) =
                prefactor_y * *(b + 191 * OS1_S1 + 70) -
                p_over_q * *(b + 253 * OS1_S1 + 70) +
                one_over_two_q * *(b + 140 * OS1_S1 + 70);
            *(b + 191 * OS1_S1 + 104) =
                prefactor_x * *(b + 191 * OS1_S1 + 76) -
                p_over_q * *(b + 246 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 76) +
                one_over_two_q * *(b + 191 * OS1_S1 + 55);
            *(b + 191 * OS1_S1 + 105) =
                prefactor_x * *(b + 191 * OS1_S1 + 77) -
                p_over_q * *(b + 246 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 77);
            *(b + 191 * OS1_S1 + 106) =
                prefactor_x * *(b + 191 * OS1_S1 + 78) -
                p_over_q * *(b + 246 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 78);
            *(b + 191 * OS1_S1 + 107) =
                prefactor_x * *(b + 191 * OS1_S1 + 79) -
                p_over_q * *(b + 246 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 79);
            *(b + 191 * OS1_S1 + 108) =
                prefactor_x * *(b + 191 * OS1_S1 + 80) -
                p_over_q * *(b + 246 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 80);
            *(b + 191 * OS1_S1 + 109) =
                prefactor_x * *(b + 191 * OS1_S1 + 81) -
                p_over_q * *(b + 246 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 81);
            *(b + 191 * OS1_S1 + 110) =
                prefactor_y * *(b + 191 * OS1_S1 + 76) -
                p_over_q * *(b + 253 * OS1_S1 + 76) +
                one_over_two_q * *(b + 140 * OS1_S1 + 76);
            *(b + 191 * OS1_S1 + 111) =
                prefactor_x * *(b + 191 * OS1_S1 + 83) -
                p_over_q * *(b + 246 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 83);
            *(b + 191 * OS1_S1 + 112) =
                prefactor_y * *(b + 191 * OS1_S1 + 77) -
                p_over_q * *(b + 253 * OS1_S1 + 77) +
                one_over_two_q * *(b + 140 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 50);
            *(b + 191 * OS1_S1 + 113) =
                prefactor_z * *(b + 191 * OS1_S1 + 77) -
                p_over_q * *(b + 254 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 77);
            *(b + 191 * OS1_S1 + 114) =
                prefactor_z * *(b + 191 * OS1_S1 + 78) -
                p_over_q * *(b + 254 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 78) +
                one_over_two_q * *(b + 191 * OS1_S1 + 50);
            *(b + 191 * OS1_S1 + 115) =
                prefactor_z * *(b + 191 * OS1_S1 + 79) -
                p_over_q * *(b + 254 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 51);
            *(b + 191 * OS1_S1 + 116) =
                prefactor_y * *(b + 191 * OS1_S1 + 81) -
                p_over_q * *(b + 253 * OS1_S1 + 81) +
                one_over_two_q * *(b + 140 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 54);
            *(b + 191 * OS1_S1 + 117) =
                prefactor_y * *(b + 191 * OS1_S1 + 82) -
                p_over_q * *(b + 253 * OS1_S1 + 82) +
                one_over_two_q * *(b + 140 * OS1_S1 + 82) +
                one_over_two_q * *(b + 191 * OS1_S1 + 55);
            *(b + 191 * OS1_S1 + 118) =
                prefactor_y * *(b + 191 * OS1_S1 + 83) -
                p_over_q * *(b + 253 * OS1_S1 + 83) +
                one_over_two_q * *(b + 140 * OS1_S1 + 83);
            *(b + 191 * OS1_S1 + 119) =
                prefactor_z * *(b + 191 * OS1_S1 + 83) -
                p_over_q * *(b + 254 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 55);
            *(b + 192 * OS1_S1 + 84) =
                prefactor_x * *(b + 192 * OS1_S1 + 56) -
                p_over_q * *(b + 247 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 192 * OS1_S1 + 35);
            *(b + 192 * OS1_S1 + 85) = prefactor_y * *(b + 192 * OS1_S1 + 56) -
                                       p_over_q * *(b + 254 * OS1_S1 + 56);
            *(b + 192 * OS1_S1 + 86) =
                prefactor_z * *(b + 192 * OS1_S1 + 56) -
                p_over_q * *(b + 255 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 56);
            *(b + 192 * OS1_S1 + 87) =
                prefactor_y * *(b + 192 * OS1_S1 + 57) -
                p_over_q * *(b + 254 * OS1_S1 + 57) +
                one_over_two_q * *(b + 192 * OS1_S1 + 35);
            *(b + 192 * OS1_S1 + 88) = prefactor_y * *(b + 192 * OS1_S1 + 58) -
                                       p_over_q * *(b + 254 * OS1_S1 + 58);
            *(b + 192 * OS1_S1 + 89) =
                prefactor_z * *(b + 192 * OS1_S1 + 58) -
                p_over_q * *(b + 255 * OS1_S1 + 58) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 58) +
                one_over_two_q * *(b + 192 * OS1_S1 + 35);
            *(b + 192 * OS1_S1 + 90) =
                prefactor_y * *(b + 192 * OS1_S1 + 59) -
                p_over_q * *(b + 254 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 192 * OS1_S1 + 36);
            *(b + 192 * OS1_S1 + 91) =
                prefactor_z * *(b + 192 * OS1_S1 + 59) -
                p_over_q * *(b + 255 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 59);
            *(b + 192 * OS1_S1 + 92) = prefactor_y * *(b + 192 * OS1_S1 + 61) -
                                       p_over_q * *(b + 254 * OS1_S1 + 61);
            *(b + 192 * OS1_S1 + 93) =
                prefactor_z * *(b + 192 * OS1_S1 + 61) -
                p_over_q * *(b + 255 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 192 * OS1_S1 + 37);
            *(b + 192 * OS1_S1 + 94) =
                prefactor_x * *(b + 192 * OS1_S1 + 66) -
                p_over_q * *(b + 247 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 192 * OS1_S1 + 45);
            *(b + 192 * OS1_S1 + 95) =
                prefactor_z * *(b + 192 * OS1_S1 + 62) -
                p_over_q * *(b + 255 * OS1_S1 + 62) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 62);
            *(b + 192 * OS1_S1 + 96) =
                prefactor_y * *(b + 192 * OS1_S1 + 64) -
                p_over_q * *(b + 254 * OS1_S1 + 64) +
                one_over_two_q * *(b + 192 * OS1_S1 + 40);
            *(b + 192 * OS1_S1 + 97) = prefactor_y * *(b + 192 * OS1_S1 + 65) -
                                       p_over_q * *(b + 254 * OS1_S1 + 65);
            *(b + 192 * OS1_S1 + 98) =
                prefactor_x * *(b + 192 * OS1_S1 + 70) -
                p_over_q * *(b + 247 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 192 * OS1_S1 + 49);
            *(b + 192 * OS1_S1 + 99) =
                prefactor_x * *(b + 192 * OS1_S1 + 71) -
                p_over_q * *(b + 247 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 71) +
                one_over_two_q * *(b + 192 * OS1_S1 + 50);
            *(b + 192 * OS1_S1 + 100) =
                prefactor_z * *(b + 192 * OS1_S1 + 66) -
                p_over_q * *(b + 255 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 66);
            *(b + 192 * OS1_S1 + 101) =
                prefactor_x * *(b + 192 * OS1_S1 + 73) -
                p_over_q * *(b + 247 * OS1_S1 + 73) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 73) +
                one_over_two_q * *(b + 192 * OS1_S1 + 52);
            *(b + 192 * OS1_S1 + 102) =
                prefactor_y * *(b + 192 * OS1_S1 + 69) -
                p_over_q * *(b + 254 * OS1_S1 + 69) +
                one_over_two_q * *(b + 192 * OS1_S1 + 44);
            *(b + 192 * OS1_S1 + 103) = prefactor_y * *(b + 192 * OS1_S1 + 70) -
                                        p_over_q * *(b + 254 * OS1_S1 + 70);
            *(b + 192 * OS1_S1 + 104) =
                prefactor_x * *(b + 192 * OS1_S1 + 76) -
                p_over_q * *(b + 247 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 76) +
                one_over_two_q * *(b + 192 * OS1_S1 + 55);
            *(b + 192 * OS1_S1 + 105) =
                prefactor_x * *(b + 192 * OS1_S1 + 77) -
                p_over_q * *(b + 247 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 77);
            *(b + 192 * OS1_S1 + 106) =
                prefactor_x * *(b + 192 * OS1_S1 + 78) -
                p_over_q * *(b + 247 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 78);
            *(b + 192 * OS1_S1 + 107) =
                prefactor_x * *(b + 192 * OS1_S1 + 79) -
                p_over_q * *(b + 247 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 79);
            *(b + 192 * OS1_S1 + 108) =
                prefactor_x * *(b + 192 * OS1_S1 + 80) -
                p_over_q * *(b + 247 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 80);
            *(b + 192 * OS1_S1 + 109) =
                prefactor_x * *(b + 192 * OS1_S1 + 81) -
                p_over_q * *(b + 247 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 81);
            *(b + 192 * OS1_S1 + 110) = prefactor_y * *(b + 192 * OS1_S1 + 76) -
                                        p_over_q * *(b + 254 * OS1_S1 + 76);
            *(b + 192 * OS1_S1 + 111) =
                prefactor_x * *(b + 192 * OS1_S1 + 83) -
                p_over_q * *(b + 247 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 83);
            *(b + 192 * OS1_S1 + 112) =
                prefactor_y * *(b + 192 * OS1_S1 + 77) -
                p_over_q * *(b + 254 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 192 * OS1_S1 + 50);
            *(b + 192 * OS1_S1 + 113) =
                prefactor_z * *(b + 192 * OS1_S1 + 77) -
                p_over_q * *(b + 255 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 77);
            *(b + 192 * OS1_S1 + 114) =
                prefactor_z * *(b + 192 * OS1_S1 + 78) -
                p_over_q * *(b + 255 * OS1_S1 + 78) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 78) +
                one_over_two_q * *(b + 192 * OS1_S1 + 50);
            *(b + 192 * OS1_S1 + 115) =
                prefactor_z * *(b + 192 * OS1_S1 + 79) -
                p_over_q * *(b + 255 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 192 * OS1_S1 + 51);
            *(b + 192 * OS1_S1 + 116) =
                prefactor_y * *(b + 192 * OS1_S1 + 81) -
                p_over_q * *(b + 254 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 192 * OS1_S1 + 54);
            *(b + 192 * OS1_S1 + 117) =
                prefactor_y * *(b + 192 * OS1_S1 + 82) -
                p_over_q * *(b + 254 * OS1_S1 + 82) +
                one_over_two_q * *(b + 192 * OS1_S1 + 55);
            *(b + 192 * OS1_S1 + 118) = prefactor_y * *(b + 192 * OS1_S1 + 83) -
                                        p_over_q * *(b + 254 * OS1_S1 + 83);
            *(b + 192 * OS1_S1 + 119) =
                prefactor_z * *(b + 192 * OS1_S1 + 83) -
                p_over_q * *(b + 255 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 192 * OS1_S1 + 55);
            *(b + 193 * OS1_S1 + 84) =
                prefactor_x * *(b + 193 * OS1_S1 + 56) -
                p_over_q * *(b + 248 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 193 * OS1_S1 + 35);
            *(b + 193 * OS1_S1 + 85) =
                prefactor_y * *(b + 193 * OS1_S1 + 56) -
                p_over_q * *(b + 256 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 56);
            *(b + 193 * OS1_S1 + 86) = prefactor_z * *(b + 193 * OS1_S1 + 56) -
                                       p_over_q * *(b + 257 * OS1_S1 + 56);
            *(b + 193 * OS1_S1 + 87) =
                prefactor_y * *(b + 193 * OS1_S1 + 57) -
                p_over_q * *(b + 256 * OS1_S1 + 57) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 57) +
                one_over_two_q * *(b + 193 * OS1_S1 + 35);
            *(b + 193 * OS1_S1 + 88) = prefactor_z * *(b + 193 * OS1_S1 + 57) -
                                       p_over_q * *(b + 257 * OS1_S1 + 57);
            *(b + 193 * OS1_S1 + 89) =
                prefactor_z * *(b + 193 * OS1_S1 + 58) -
                p_over_q * *(b + 257 * OS1_S1 + 58) +
                one_over_two_q * *(b + 193 * OS1_S1 + 35);
            *(b + 193 * OS1_S1 + 90) =
                prefactor_y * *(b + 193 * OS1_S1 + 59) -
                p_over_q * *(b + 256 * OS1_S1 + 59) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 193 * OS1_S1 + 36);
            *(b + 193 * OS1_S1 + 91) = prefactor_z * *(b + 193 * OS1_S1 + 59) -
                                       p_over_q * *(b + 257 * OS1_S1 + 59);
            *(b + 193 * OS1_S1 + 92) =
                prefactor_y * *(b + 193 * OS1_S1 + 61) -
                p_over_q * *(b + 256 * OS1_S1 + 61) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 61);
            *(b + 193 * OS1_S1 + 93) =
                prefactor_z * *(b + 193 * OS1_S1 + 61) -
                p_over_q * *(b + 257 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 193 * OS1_S1 + 37);
            *(b + 193 * OS1_S1 + 94) =
                prefactor_x * *(b + 193 * OS1_S1 + 66) -
                p_over_q * *(b + 248 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 193 * OS1_S1 + 45);
            *(b + 193 * OS1_S1 + 95) = prefactor_z * *(b + 193 * OS1_S1 + 62) -
                                       p_over_q * *(b + 257 * OS1_S1 + 62);
            *(b + 193 * OS1_S1 + 96) =
                prefactor_z * *(b + 193 * OS1_S1 + 63) -
                p_over_q * *(b + 257 * OS1_S1 + 63) +
                one_over_two_q * *(b + 193 * OS1_S1 + 38);
            *(b + 193 * OS1_S1 + 97) =
                prefactor_y * *(b + 193 * OS1_S1 + 65) -
                p_over_q * *(b + 256 * OS1_S1 + 65) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 65);
            *(b + 193 * OS1_S1 + 98) =
                prefactor_x * *(b + 193 * OS1_S1 + 70) -
                p_over_q * *(b + 248 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 193 * OS1_S1 + 49);
            *(b + 193 * OS1_S1 + 99) =
                prefactor_x * *(b + 193 * OS1_S1 + 71) -
                p_over_q * *(b + 248 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 71) +
                one_over_two_q * *(b + 193 * OS1_S1 + 50);
            *(b + 193 * OS1_S1 + 100) = prefactor_z * *(b + 193 * OS1_S1 + 66) -
                                        p_over_q * *(b + 257 * OS1_S1 + 66);
            *(b + 193 * OS1_S1 + 101) =
                prefactor_z * *(b + 193 * OS1_S1 + 67) -
                p_over_q * *(b + 257 * OS1_S1 + 67) +
                one_over_two_q * *(b + 193 * OS1_S1 + 41);
            *(b + 193 * OS1_S1 + 102) =
                prefactor_x * *(b + 193 * OS1_S1 + 74) -
                p_over_q * *(b + 248 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 74) +
                one_over_two_q * *(b + 193 * OS1_S1 + 53);
            *(b + 193 * OS1_S1 + 103) =
                prefactor_y * *(b + 193 * OS1_S1 + 70) -
                p_over_q * *(b + 256 * OS1_S1 + 70) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 70);
            *(b + 193 * OS1_S1 + 104) =
                prefactor_x * *(b + 193 * OS1_S1 + 76) -
                p_over_q * *(b + 248 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 76) +
                one_over_two_q * *(b + 193 * OS1_S1 + 55);
            *(b + 193 * OS1_S1 + 105) =
                prefactor_x * *(b + 193 * OS1_S1 + 77) -
                p_over_q * *(b + 248 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 77);
            *(b + 193 * OS1_S1 + 106) = prefactor_z * *(b + 193 * OS1_S1 + 71) -
                                        p_over_q * *(b + 257 * OS1_S1 + 71);
            *(b + 193 * OS1_S1 + 107) =
                prefactor_x * *(b + 193 * OS1_S1 + 79) -
                p_over_q * *(b + 248 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 79);
            *(b + 193 * OS1_S1 + 108) =
                prefactor_x * *(b + 193 * OS1_S1 + 80) -
                p_over_q * *(b + 248 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 80);
            *(b + 193 * OS1_S1 + 109) =
                prefactor_x * *(b + 193 * OS1_S1 + 81) -
                p_over_q * *(b + 248 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 81);
            *(b + 193 * OS1_S1 + 110) =
                prefactor_x * *(b + 193 * OS1_S1 + 82) -
                p_over_q * *(b + 248 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 82);
            *(b + 193 * OS1_S1 + 111) =
                prefactor_x * *(b + 193 * OS1_S1 + 83) -
                p_over_q * *(b + 248 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 83);
            *(b + 193 * OS1_S1 + 112) =
                prefactor_y * *(b + 193 * OS1_S1 + 77) -
                p_over_q * *(b + 256 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 193 * OS1_S1 + 50);
            *(b + 193 * OS1_S1 + 113) = prefactor_z * *(b + 193 * OS1_S1 + 77) -
                                        p_over_q * *(b + 257 * OS1_S1 + 77);
            *(b + 193 * OS1_S1 + 114) =
                prefactor_z * *(b + 193 * OS1_S1 + 78) -
                p_over_q * *(b + 257 * OS1_S1 + 78) +
                one_over_two_q * *(b + 193 * OS1_S1 + 50);
            *(b + 193 * OS1_S1 + 115) =
                prefactor_z * *(b + 193 * OS1_S1 + 79) -
                p_over_q * *(b + 257 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 193 * OS1_S1 + 51);
            *(b + 193 * OS1_S1 + 116) =
                prefactor_y * *(b + 193 * OS1_S1 + 81) -
                p_over_q * *(b + 256 * OS1_S1 + 81) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 193 * OS1_S1 + 54);
            *(b + 193 * OS1_S1 + 117) =
                prefactor_y * *(b + 193 * OS1_S1 + 82) -
                p_over_q * *(b + 256 * OS1_S1 + 82) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 82) +
                one_over_two_q * *(b + 193 * OS1_S1 + 55);
            *(b + 193 * OS1_S1 + 118) =
                prefactor_y * *(b + 193 * OS1_S1 + 83) -
                p_over_q * *(b + 256 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 83);
            *(b + 193 * OS1_S1 + 119) =
                prefactor_z * *(b + 193 * OS1_S1 + 83) -
                p_over_q * *(b + 257 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 193 * OS1_S1 + 55);
            *(b + 194 * OS1_S1 + 84) =
                prefactor_x * *(b + 194 * OS1_S1 + 56) -
                p_over_q * *(b + 249 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 194 * OS1_S1 + 35);
            *(b + 194 * OS1_S1 + 85) =
                prefactor_y * *(b + 194 * OS1_S1 + 56) -
                p_over_q * *(b + 257 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 56);
            *(b + 194 * OS1_S1 + 86) =
                prefactor_z * *(b + 194 * OS1_S1 + 56) -
                p_over_q * *(b + 258 * OS1_S1 + 56) +
                one_over_two_q * *(b + 141 * OS1_S1 + 56);
            *(b + 194 * OS1_S1 + 87) =
                prefactor_y * *(b + 194 * OS1_S1 + 57) -
                p_over_q * *(b + 257 * OS1_S1 + 57) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 57) +
                one_over_two_q * *(b + 194 * OS1_S1 + 35);
            *(b + 194 * OS1_S1 + 88) =
                prefactor_z * *(b + 194 * OS1_S1 + 57) -
                p_over_q * *(b + 258 * OS1_S1 + 57) +
                one_over_two_q * *(b + 141 * OS1_S1 + 57);
            *(b + 194 * OS1_S1 + 89) =
                prefactor_z * *(b + 194 * OS1_S1 + 58) -
                p_over_q * *(b + 258 * OS1_S1 + 58) +
                one_over_two_q * *(b + 141 * OS1_S1 + 58) +
                one_over_two_q * *(b + 194 * OS1_S1 + 35);
            *(b + 194 * OS1_S1 + 90) =
                prefactor_y * *(b + 194 * OS1_S1 + 59) -
                p_over_q * *(b + 257 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 36);
            *(b + 194 * OS1_S1 + 91) =
                prefactor_z * *(b + 194 * OS1_S1 + 59) -
                p_over_q * *(b + 258 * OS1_S1 + 59) +
                one_over_two_q * *(b + 141 * OS1_S1 + 59);
            *(b + 194 * OS1_S1 + 92) =
                prefactor_y * *(b + 194 * OS1_S1 + 61) -
                p_over_q * *(b + 257 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 61);
            *(b + 194 * OS1_S1 + 93) =
                prefactor_z * *(b + 194 * OS1_S1 + 61) -
                p_over_q * *(b + 258 * OS1_S1 + 61) +
                one_over_two_q * *(b + 141 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 37);
            *(b + 194 * OS1_S1 + 94) =
                prefactor_x * *(b + 194 * OS1_S1 + 66) -
                p_over_q * *(b + 249 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 45);
            *(b + 194 * OS1_S1 + 95) =
                prefactor_z * *(b + 194 * OS1_S1 + 62) -
                p_over_q * *(b + 258 * OS1_S1 + 62) +
                one_over_two_q * *(b + 141 * OS1_S1 + 62);
            *(b + 194 * OS1_S1 + 96) =
                prefactor_z * *(b + 194 * OS1_S1 + 63) -
                p_over_q * *(b + 258 * OS1_S1 + 63) +
                one_over_two_q * *(b + 141 * OS1_S1 + 63) +
                one_over_two_q * *(b + 194 * OS1_S1 + 38);
            *(b + 194 * OS1_S1 + 97) =
                prefactor_y * *(b + 194 * OS1_S1 + 65) -
                p_over_q * *(b + 257 * OS1_S1 + 65) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 65);
            *(b + 194 * OS1_S1 + 98) =
                prefactor_x * *(b + 194 * OS1_S1 + 70) -
                p_over_q * *(b + 249 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 49);
            *(b + 194 * OS1_S1 + 99) =
                prefactor_x * *(b + 194 * OS1_S1 + 71) -
                p_over_q * *(b + 249 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 71) +
                one_over_two_q * *(b + 194 * OS1_S1 + 50);
            *(b + 194 * OS1_S1 + 100) =
                prefactor_z * *(b + 194 * OS1_S1 + 66) -
                p_over_q * *(b + 258 * OS1_S1 + 66) +
                one_over_two_q * *(b + 141 * OS1_S1 + 66);
            *(b + 194 * OS1_S1 + 101) =
                prefactor_z * *(b + 194 * OS1_S1 + 67) -
                p_over_q * *(b + 258 * OS1_S1 + 67) +
                one_over_two_q * *(b + 141 * OS1_S1 + 67) +
                one_over_two_q * *(b + 194 * OS1_S1 + 41);
            *(b + 194 * OS1_S1 + 102) =
                prefactor_x * *(b + 194 * OS1_S1 + 74) -
                p_over_q * *(b + 249 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 74) +
                one_over_two_q * *(b + 194 * OS1_S1 + 53);
            *(b + 194 * OS1_S1 + 103) =
                prefactor_y * *(b + 194 * OS1_S1 + 70) -
                p_over_q * *(b + 257 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 70);
            *(b + 194 * OS1_S1 + 104) =
                prefactor_x * *(b + 194 * OS1_S1 + 76) -
                p_over_q * *(b + 249 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 76) +
                one_over_two_q * *(b + 194 * OS1_S1 + 55);
            *(b + 194 * OS1_S1 + 105) =
                prefactor_x * *(b + 194 * OS1_S1 + 77) -
                p_over_q * *(b + 249 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 77);
            *(b + 194 * OS1_S1 + 106) =
                prefactor_z * *(b + 194 * OS1_S1 + 71) -
                p_over_q * *(b + 258 * OS1_S1 + 71) +
                one_over_two_q * *(b + 141 * OS1_S1 + 71);
            *(b + 194 * OS1_S1 + 107) =
                prefactor_x * *(b + 194 * OS1_S1 + 79) -
                p_over_q * *(b + 249 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 79);
            *(b + 194 * OS1_S1 + 108) =
                prefactor_x * *(b + 194 * OS1_S1 + 80) -
                p_over_q * *(b + 249 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 80);
            *(b + 194 * OS1_S1 + 109) =
                prefactor_x * *(b + 194 * OS1_S1 + 81) -
                p_over_q * *(b + 249 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 81);
            *(b + 194 * OS1_S1 + 110) =
                prefactor_x * *(b + 194 * OS1_S1 + 82) -
                p_over_q * *(b + 249 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 82);
            *(b + 194 * OS1_S1 + 111) =
                prefactor_x * *(b + 194 * OS1_S1 + 83) -
                p_over_q * *(b + 249 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 83);
            *(b + 194 * OS1_S1 + 112) =
                prefactor_y * *(b + 194 * OS1_S1 + 77) -
                p_over_q * *(b + 257 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 194 * OS1_S1 + 50);
            *(b + 194 * OS1_S1 + 113) =
                prefactor_z * *(b + 194 * OS1_S1 + 77) -
                p_over_q * *(b + 258 * OS1_S1 + 77) +
                one_over_two_q * *(b + 141 * OS1_S1 + 77);
            *(b + 194 * OS1_S1 + 114) =
                prefactor_z * *(b + 194 * OS1_S1 + 78) -
                p_over_q * *(b + 258 * OS1_S1 + 78) +
                one_over_two_q * *(b + 141 * OS1_S1 + 78) +
                one_over_two_q * *(b + 194 * OS1_S1 + 50);
            *(b + 194 * OS1_S1 + 115) =
                prefactor_z * *(b + 194 * OS1_S1 + 79) -
                p_over_q * *(b + 258 * OS1_S1 + 79) +
                one_over_two_q * *(b + 141 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 51);
            *(b + 194 * OS1_S1 + 116) =
                prefactor_y * *(b + 194 * OS1_S1 + 81) -
                p_over_q * *(b + 257 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 54);
            *(b + 194 * OS1_S1 + 117) =
                prefactor_y * *(b + 194 * OS1_S1 + 82) -
                p_over_q * *(b + 257 * OS1_S1 + 82) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 82) +
                one_over_two_q * *(b + 194 * OS1_S1 + 55);
            *(b + 194 * OS1_S1 + 118) =
                prefactor_y * *(b + 194 * OS1_S1 + 83) -
                p_over_q * *(b + 257 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 83);
            *(b + 194 * OS1_S1 + 119) =
                prefactor_z * *(b + 194 * OS1_S1 + 83) -
                p_over_q * *(b + 258 * OS1_S1 + 83) +
                one_over_two_q * *(b + 141 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 194 * OS1_S1 + 55);
            *(b + 195 * OS1_S1 + 84) =
                prefactor_x * *(b + 195 * OS1_S1 + 56) -
                p_over_q * *(b + 250 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 35);
            *(b + 195 * OS1_S1 + 85) =
                prefactor_y * *(b + 195 * OS1_S1 + 56) -
                p_over_q * *(b + 258 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 56);
            *(b + 195 * OS1_S1 + 86) =
                prefactor_z * *(b + 195 * OS1_S1 + 56) -
                p_over_q * *(b + 259 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 56);
            *(b + 195 * OS1_S1 + 87) =
                prefactor_y * *(b + 195 * OS1_S1 + 57) -
                p_over_q * *(b + 258 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 57) +
                one_over_two_q * *(b + 195 * OS1_S1 + 35);
            *(b + 195 * OS1_S1 + 88) =
                prefactor_z * *(b + 195 * OS1_S1 + 57) -
                p_over_q * *(b + 259 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 57);
            *(b + 195 * OS1_S1 + 89) =
                prefactor_z * *(b + 195 * OS1_S1 + 58) -
                p_over_q * *(b + 259 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 58) +
                one_over_two_q * *(b + 195 * OS1_S1 + 35);
            *(b + 195 * OS1_S1 + 90) =
                prefactor_y * *(b + 195 * OS1_S1 + 59) -
                p_over_q * *(b + 258 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 195 * OS1_S1 + 36);
            *(b + 195 * OS1_S1 + 91) =
                prefactor_z * *(b + 195 * OS1_S1 + 59) -
                p_over_q * *(b + 259 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 59);
            *(b + 195 * OS1_S1 + 92) =
                prefactor_y * *(b + 195 * OS1_S1 + 61) -
                p_over_q * *(b + 258 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 61);
            *(b + 195 * OS1_S1 + 93) =
                prefactor_z * *(b + 195 * OS1_S1 + 61) -
                p_over_q * *(b + 259 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 195 * OS1_S1 + 37);
            *(b + 195 * OS1_S1 + 94) =
                prefactor_x * *(b + 195 * OS1_S1 + 66) -
                p_over_q * *(b + 250 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 195 * OS1_S1 + 45);
            *(b + 195 * OS1_S1 + 95) =
                prefactor_z * *(b + 195 * OS1_S1 + 62) -
                p_over_q * *(b + 259 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 62);
            *(b + 195 * OS1_S1 + 96) =
                prefactor_z * *(b + 195 * OS1_S1 + 63) -
                p_over_q * *(b + 259 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 63) +
                one_over_two_q * *(b + 195 * OS1_S1 + 38);
            *(b + 195 * OS1_S1 + 97) =
                prefactor_y * *(b + 195 * OS1_S1 + 65) -
                p_over_q * *(b + 258 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 65);
            *(b + 195 * OS1_S1 + 98) =
                prefactor_x * *(b + 195 * OS1_S1 + 70) -
                p_over_q * *(b + 250 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 195 * OS1_S1 + 49);
            *(b + 195 * OS1_S1 + 99) =
                prefactor_x * *(b + 195 * OS1_S1 + 71) -
                p_over_q * *(b + 250 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 71) +
                one_over_two_q * *(b + 195 * OS1_S1 + 50);
            *(b + 195 * OS1_S1 + 100) =
                prefactor_z * *(b + 195 * OS1_S1 + 66) -
                p_over_q * *(b + 259 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 66);
            *(b + 195 * OS1_S1 + 101) =
                prefactor_z * *(b + 195 * OS1_S1 + 67) -
                p_over_q * *(b + 259 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 67) +
                one_over_two_q * *(b + 195 * OS1_S1 + 41);
            *(b + 195 * OS1_S1 + 102) =
                prefactor_x * *(b + 195 * OS1_S1 + 74) -
                p_over_q * *(b + 250 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 74) +
                one_over_two_q * *(b + 195 * OS1_S1 + 53);
            *(b + 195 * OS1_S1 + 103) =
                prefactor_y * *(b + 195 * OS1_S1 + 70) -
                p_over_q * *(b + 258 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 70);
            *(b + 195 * OS1_S1 + 104) =
                prefactor_x * *(b + 195 * OS1_S1 + 76) -
                p_over_q * *(b + 250 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 76) +
                one_over_two_q * *(b + 195 * OS1_S1 + 55);
            *(b + 195 * OS1_S1 + 105) =
                prefactor_x * *(b + 195 * OS1_S1 + 77) -
                p_over_q * *(b + 250 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 77);
            *(b + 195 * OS1_S1 + 106) =
                prefactor_z * *(b + 195 * OS1_S1 + 71) -
                p_over_q * *(b + 259 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 71);
            *(b + 195 * OS1_S1 + 107) =
                prefactor_x * *(b + 195 * OS1_S1 + 79) -
                p_over_q * *(b + 250 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 79);
            *(b + 195 * OS1_S1 + 108) =
                prefactor_x * *(b + 195 * OS1_S1 + 80) -
                p_over_q * *(b + 250 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 80);
            *(b + 195 * OS1_S1 + 109) =
                prefactor_x * *(b + 195 * OS1_S1 + 81) -
                p_over_q * *(b + 250 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 81);
            *(b + 195 * OS1_S1 + 110) =
                prefactor_x * *(b + 195 * OS1_S1 + 82) -
                p_over_q * *(b + 250 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 82);
            *(b + 195 * OS1_S1 + 111) =
                prefactor_x * *(b + 195 * OS1_S1 + 83) -
                p_over_q * *(b + 250 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 83);
            *(b + 195 * OS1_S1 + 112) =
                prefactor_y * *(b + 195 * OS1_S1 + 77) -
                p_over_q * *(b + 258 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 50);
            *(b + 195 * OS1_S1 + 113) =
                prefactor_z * *(b + 195 * OS1_S1 + 77) -
                p_over_q * *(b + 259 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 77);
            *(b + 195 * OS1_S1 + 114) =
                prefactor_z * *(b + 195 * OS1_S1 + 78) -
                p_over_q * *(b + 259 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 78) +
                one_over_two_q * *(b + 195 * OS1_S1 + 50);
            *(b + 195 * OS1_S1 + 115) =
                prefactor_z * *(b + 195 * OS1_S1 + 79) -
                p_over_q * *(b + 259 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 195 * OS1_S1 + 51);
            *(b + 195 * OS1_S1 + 116) =
                prefactor_y * *(b + 195 * OS1_S1 + 81) -
                p_over_q * *(b + 258 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 195 * OS1_S1 + 54);
            *(b + 195 * OS1_S1 + 117) =
                prefactor_y * *(b + 195 * OS1_S1 + 82) -
                p_over_q * *(b + 258 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 82) +
                one_over_two_q * *(b + 195 * OS1_S1 + 55);
            *(b + 195 * OS1_S1 + 118) =
                prefactor_y * *(b + 195 * OS1_S1 + 83) -
                p_over_q * *(b + 258 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 83);
            *(b + 195 * OS1_S1 + 119) =
                prefactor_z * *(b + 195 * OS1_S1 + 83) -
                p_over_q * *(b + 259 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 55);
            *(b + 196 * OS1_S1 + 84) =
                prefactor_x * *(b + 196 * OS1_S1 + 56) -
                p_over_q * *(b + 251 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 196 * OS1_S1 + 35);
            *(b + 196 * OS1_S1 + 85) =
                prefactor_y * *(b + 196 * OS1_S1 + 56) -
                p_over_q * *(b + 259 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 56);
            *(b + 196 * OS1_S1 + 86) =
                prefactor_z * *(b + 196 * OS1_S1 + 56) -
                p_over_q * *(b + 260 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 56);
            *(b + 196 * OS1_S1 + 87) =
                prefactor_y * *(b + 196 * OS1_S1 + 57) -
                p_over_q * *(b + 259 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 57) +
                one_over_two_q * *(b + 196 * OS1_S1 + 35);
            *(b + 196 * OS1_S1 + 88) =
                prefactor_z * *(b + 196 * OS1_S1 + 57) -
                p_over_q * *(b + 260 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 57);
            *(b + 196 * OS1_S1 + 89) =
                prefactor_z * *(b + 196 * OS1_S1 + 58) -
                p_over_q * *(b + 260 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 58) +
                one_over_two_q * *(b + 196 * OS1_S1 + 35);
            *(b + 196 * OS1_S1 + 90) =
                prefactor_y * *(b + 196 * OS1_S1 + 59) -
                p_over_q * *(b + 259 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 196 * OS1_S1 + 36);
            *(b + 196 * OS1_S1 + 91) =
                prefactor_z * *(b + 196 * OS1_S1 + 59) -
                p_over_q * *(b + 260 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 59);
            *(b + 196 * OS1_S1 + 92) =
                prefactor_y * *(b + 196 * OS1_S1 + 61) -
                p_over_q * *(b + 259 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 61);
            *(b + 196 * OS1_S1 + 93) =
                prefactor_z * *(b + 196 * OS1_S1 + 61) -
                p_over_q * *(b + 260 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 196 * OS1_S1 + 37);
            *(b + 196 * OS1_S1 + 94) =
                prefactor_x * *(b + 196 * OS1_S1 + 66) -
                p_over_q * *(b + 251 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 196 * OS1_S1 + 45);
            *(b + 196 * OS1_S1 + 95) =
                prefactor_z * *(b + 196 * OS1_S1 + 62) -
                p_over_q * *(b + 260 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 62);
            *(b + 196 * OS1_S1 + 96) =
                prefactor_z * *(b + 196 * OS1_S1 + 63) -
                p_over_q * *(b + 260 * OS1_S1 + 63) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 63) +
                one_over_two_q * *(b + 196 * OS1_S1 + 38);
            *(b + 196 * OS1_S1 + 97) =
                prefactor_y * *(b + 196 * OS1_S1 + 65) -
                p_over_q * *(b + 259 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 65);
            *(b + 196 * OS1_S1 + 98) =
                prefactor_x * *(b + 196 * OS1_S1 + 70) -
                p_over_q * *(b + 251 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 196 * OS1_S1 + 49);
            *(b + 196 * OS1_S1 + 99) =
                prefactor_x * *(b + 196 * OS1_S1 + 71) -
                p_over_q * *(b + 251 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 71) +
                one_over_two_q * *(b + 196 * OS1_S1 + 50);
            *(b + 196 * OS1_S1 + 100) =
                prefactor_z * *(b + 196 * OS1_S1 + 66) -
                p_over_q * *(b + 260 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 66);
            *(b + 196 * OS1_S1 + 101) =
                prefactor_x * *(b + 196 * OS1_S1 + 73) -
                p_over_q * *(b + 251 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 73) +
                one_over_two_q * *(b + 196 * OS1_S1 + 52);
            *(b + 196 * OS1_S1 + 102) =
                prefactor_x * *(b + 196 * OS1_S1 + 74) -
                p_over_q * *(b + 251 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 74) +
                one_over_two_q * *(b + 196 * OS1_S1 + 53);
            *(b + 196 * OS1_S1 + 103) =
                prefactor_y * *(b + 196 * OS1_S1 + 70) -
                p_over_q * *(b + 259 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 70);
            *(b + 196 * OS1_S1 + 104) =
                prefactor_x * *(b + 196 * OS1_S1 + 76) -
                p_over_q * *(b + 251 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 76) +
                one_over_two_q * *(b + 196 * OS1_S1 + 55);
            *(b + 196 * OS1_S1 + 105) =
                prefactor_x * *(b + 196 * OS1_S1 + 77) -
                p_over_q * *(b + 251 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 77);
            *(b + 196 * OS1_S1 + 106) =
                prefactor_x * *(b + 196 * OS1_S1 + 78) -
                p_over_q * *(b + 251 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 78);
            *(b + 196 * OS1_S1 + 107) =
                prefactor_x * *(b + 196 * OS1_S1 + 79) -
                p_over_q * *(b + 251 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 79);
            *(b + 196 * OS1_S1 + 108) =
                prefactor_x * *(b + 196 * OS1_S1 + 80) -
                p_over_q * *(b + 251 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 80);
            *(b + 196 * OS1_S1 + 109) =
                prefactor_x * *(b + 196 * OS1_S1 + 81) -
                p_over_q * *(b + 251 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 81);
            *(b + 196 * OS1_S1 + 110) =
                prefactor_x * *(b + 196 * OS1_S1 + 82) -
                p_over_q * *(b + 251 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 82);
            *(b + 196 * OS1_S1 + 111) =
                prefactor_x * *(b + 196 * OS1_S1 + 83) -
                p_over_q * *(b + 251 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 83);
            *(b + 196 * OS1_S1 + 112) =
                prefactor_y * *(b + 196 * OS1_S1 + 77) -
                p_over_q * *(b + 259 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 196 * OS1_S1 + 50);
            *(b + 196 * OS1_S1 + 113) =
                prefactor_z * *(b + 196 * OS1_S1 + 77) -
                p_over_q * *(b + 260 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 77);
            *(b + 196 * OS1_S1 + 114) =
                prefactor_z * *(b + 196 * OS1_S1 + 78) -
                p_over_q * *(b + 260 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 78) +
                one_over_two_q * *(b + 196 * OS1_S1 + 50);
            *(b + 196 * OS1_S1 + 115) =
                prefactor_z * *(b + 196 * OS1_S1 + 79) -
                p_over_q * *(b + 260 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 196 * OS1_S1 + 51);
            *(b + 196 * OS1_S1 + 116) =
                prefactor_y * *(b + 196 * OS1_S1 + 81) -
                p_over_q * *(b + 259 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 196 * OS1_S1 + 54);
            *(b + 196 * OS1_S1 + 117) =
                prefactor_y * *(b + 196 * OS1_S1 + 82) -
                p_over_q * *(b + 259 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 82) +
                one_over_two_q * *(b + 196 * OS1_S1 + 55);
            *(b + 196 * OS1_S1 + 118) =
                prefactor_y * *(b + 196 * OS1_S1 + 83) -
                p_over_q * *(b + 259 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 83);
            *(b + 196 * OS1_S1 + 119) =
                prefactor_z * *(b + 196 * OS1_S1 + 83) -
                p_over_q * *(b + 260 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 196 * OS1_S1 + 55);
            *(b + 197 * OS1_S1 + 84) =
                prefactor_x * *(b + 197 * OS1_S1 + 56) -
                p_over_q * *(b + 252 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 197 * OS1_S1 + 35);
            *(b + 197 * OS1_S1 + 85) =
                prefactor_y * *(b + 197 * OS1_S1 + 56) -
                p_over_q * *(b + 260 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 56);
            *(b + 197 * OS1_S1 + 86) =
                prefactor_z * *(b + 197 * OS1_S1 + 56) -
                p_over_q * *(b + 261 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 56);
            *(b + 197 * OS1_S1 + 87) =
                prefactor_y * *(b + 197 * OS1_S1 + 57) -
                p_over_q * *(b + 260 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 57) +
                one_over_two_q * *(b + 197 * OS1_S1 + 35);
            *(b + 197 * OS1_S1 + 88) =
                prefactor_y * *(b + 197 * OS1_S1 + 58) -
                p_over_q * *(b + 260 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 58);
            *(b + 197 * OS1_S1 + 89) =
                prefactor_z * *(b + 197 * OS1_S1 + 58) -
                p_over_q * *(b + 261 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 58) +
                one_over_two_q * *(b + 197 * OS1_S1 + 35);
            *(b + 197 * OS1_S1 + 90) =
                prefactor_y * *(b + 197 * OS1_S1 + 59) -
                p_over_q * *(b + 260 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 197 * OS1_S1 + 36);
            *(b + 197 * OS1_S1 + 91) =
                prefactor_z * *(b + 197 * OS1_S1 + 59) -
                p_over_q * *(b + 261 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 59);
            *(b + 197 * OS1_S1 + 92) =
                prefactor_y * *(b + 197 * OS1_S1 + 61) -
                p_over_q * *(b + 260 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 61);
            *(b + 197 * OS1_S1 + 93) =
                prefactor_z * *(b + 197 * OS1_S1 + 61) -
                p_over_q * *(b + 261 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 197 * OS1_S1 + 37);
            *(b + 197 * OS1_S1 + 94) =
                prefactor_x * *(b + 197 * OS1_S1 + 66) -
                p_over_q * *(b + 252 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 197 * OS1_S1 + 45);
            *(b + 197 * OS1_S1 + 95) =
                prefactor_z * *(b + 197 * OS1_S1 + 62) -
                p_over_q * *(b + 261 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 62);
            *(b + 197 * OS1_S1 + 96) =
                prefactor_y * *(b + 197 * OS1_S1 + 64) -
                p_over_q * *(b + 260 * OS1_S1 + 64) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 64) +
                one_over_two_q * *(b + 197 * OS1_S1 + 40);
            *(b + 197 * OS1_S1 + 97) =
                prefactor_y * *(b + 197 * OS1_S1 + 65) -
                p_over_q * *(b + 260 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 65);
            *(b + 197 * OS1_S1 + 98) =
                prefactor_x * *(b + 197 * OS1_S1 + 70) -
                p_over_q * *(b + 252 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 197 * OS1_S1 + 49);
            *(b + 197 * OS1_S1 + 99) =
                prefactor_x * *(b + 197 * OS1_S1 + 71) -
                p_over_q * *(b + 252 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 71) +
                one_over_two_q * *(b + 197 * OS1_S1 + 50);
            *(b + 197 * OS1_S1 + 100) =
                prefactor_z * *(b + 197 * OS1_S1 + 66) -
                p_over_q * *(b + 261 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 66);
            *(b + 197 * OS1_S1 + 101) =
                prefactor_x * *(b + 197 * OS1_S1 + 73) -
                p_over_q * *(b + 252 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 73) +
                one_over_two_q * *(b + 197 * OS1_S1 + 52);
            *(b + 197 * OS1_S1 + 102) =
                prefactor_x * *(b + 197 * OS1_S1 + 74) -
                p_over_q * *(b + 252 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 74) +
                one_over_two_q * *(b + 197 * OS1_S1 + 53);
            *(b + 197 * OS1_S1 + 103) =
                prefactor_y * *(b + 197 * OS1_S1 + 70) -
                p_over_q * *(b + 260 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 70);
            *(b + 197 * OS1_S1 + 104) =
                prefactor_x * *(b + 197 * OS1_S1 + 76) -
                p_over_q * *(b + 252 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 76) +
                one_over_two_q * *(b + 197 * OS1_S1 + 55);
            *(b + 197 * OS1_S1 + 105) =
                prefactor_x * *(b + 197 * OS1_S1 + 77) -
                p_over_q * *(b + 252 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 77);
            *(b + 197 * OS1_S1 + 106) =
                prefactor_x * *(b + 197 * OS1_S1 + 78) -
                p_over_q * *(b + 252 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 78);
            *(b + 197 * OS1_S1 + 107) =
                prefactor_x * *(b + 197 * OS1_S1 + 79) -
                p_over_q * *(b + 252 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 79);
            *(b + 197 * OS1_S1 + 108) =
                prefactor_x * *(b + 197 * OS1_S1 + 80) -
                p_over_q * *(b + 252 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 80);
            *(b + 197 * OS1_S1 + 109) =
                prefactor_x * *(b + 197 * OS1_S1 + 81) -
                p_over_q * *(b + 252 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 81);
            *(b + 197 * OS1_S1 + 110) =
                prefactor_x * *(b + 197 * OS1_S1 + 82) -
                p_over_q * *(b + 252 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 82);
            *(b + 197 * OS1_S1 + 111) =
                prefactor_x * *(b + 197 * OS1_S1 + 83) -
                p_over_q * *(b + 252 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 83);
            *(b + 197 * OS1_S1 + 112) =
                prefactor_y * *(b + 197 * OS1_S1 + 77) -
                p_over_q * *(b + 260 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 197 * OS1_S1 + 50);
            *(b + 197 * OS1_S1 + 113) =
                prefactor_z * *(b + 197 * OS1_S1 + 77) -
                p_over_q * *(b + 261 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 77);
            *(b + 197 * OS1_S1 + 114) =
                prefactor_z * *(b + 197 * OS1_S1 + 78) -
                p_over_q * *(b + 261 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 78) +
                one_over_two_q * *(b + 197 * OS1_S1 + 50);
            *(b + 197 * OS1_S1 + 115) =
                prefactor_z * *(b + 197 * OS1_S1 + 79) -
                p_over_q * *(b + 261 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 197 * OS1_S1 + 51);
            *(b + 197 * OS1_S1 + 116) =
                prefactor_y * *(b + 197 * OS1_S1 + 81) -
                p_over_q * *(b + 260 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 197 * OS1_S1 + 54);
            *(b + 197 * OS1_S1 + 117) =
                prefactor_y * *(b + 197 * OS1_S1 + 82) -
                p_over_q * *(b + 260 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 82) +
                one_over_two_q * *(b + 197 * OS1_S1 + 55);
            *(b + 197 * OS1_S1 + 118) =
                prefactor_y * *(b + 197 * OS1_S1 + 83) -
                p_over_q * *(b + 260 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 83);
            *(b + 197 * OS1_S1 + 119) =
                prefactor_z * *(b + 197 * OS1_S1 + 83) -
                p_over_q * *(b + 261 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 197 * OS1_S1 + 55);
            *(b + 198 * OS1_S1 + 84) =
                prefactor_x * *(b + 198 * OS1_S1 + 56) -
                p_over_q * *(b + 253 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 35);
            *(b + 198 * OS1_S1 + 85) =
                prefactor_y * *(b + 198 * OS1_S1 + 56) -
                p_over_q * *(b + 261 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 56);
            *(b + 198 * OS1_S1 + 86) =
                prefactor_z * *(b + 198 * OS1_S1 + 56) -
                p_over_q * *(b + 262 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 56);
            *(b + 198 * OS1_S1 + 87) =
                prefactor_y * *(b + 198 * OS1_S1 + 57) -
                p_over_q * *(b + 261 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 57) +
                one_over_two_q * *(b + 198 * OS1_S1 + 35);
            *(b + 198 * OS1_S1 + 88) =
                prefactor_y * *(b + 198 * OS1_S1 + 58) -
                p_over_q * *(b + 261 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 58);
            *(b + 198 * OS1_S1 + 89) =
                prefactor_z * *(b + 198 * OS1_S1 + 58) -
                p_over_q * *(b + 262 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 58) +
                one_over_two_q * *(b + 198 * OS1_S1 + 35);
            *(b + 198 * OS1_S1 + 90) =
                prefactor_y * *(b + 198 * OS1_S1 + 59) -
                p_over_q * *(b + 261 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 198 * OS1_S1 + 36);
            *(b + 198 * OS1_S1 + 91) =
                prefactor_z * *(b + 198 * OS1_S1 + 59) -
                p_over_q * *(b + 262 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 59);
            *(b + 198 * OS1_S1 + 92) =
                prefactor_y * *(b + 198 * OS1_S1 + 61) -
                p_over_q * *(b + 261 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 61);
            *(b + 198 * OS1_S1 + 93) =
                prefactor_z * *(b + 198 * OS1_S1 + 61) -
                p_over_q * *(b + 262 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 198 * OS1_S1 + 37);
            *(b + 198 * OS1_S1 + 94) =
                prefactor_x * *(b + 198 * OS1_S1 + 66) -
                p_over_q * *(b + 253 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 198 * OS1_S1 + 45);
            *(b + 198 * OS1_S1 + 95) =
                prefactor_z * *(b + 198 * OS1_S1 + 62) -
                p_over_q * *(b + 262 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 62);
            *(b + 198 * OS1_S1 + 96) =
                prefactor_y * *(b + 198 * OS1_S1 + 64) -
                p_over_q * *(b + 261 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 64) +
                one_over_two_q * *(b + 198 * OS1_S1 + 40);
            *(b + 198 * OS1_S1 + 97) =
                prefactor_y * *(b + 198 * OS1_S1 + 65) -
                p_over_q * *(b + 261 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 65);
            *(b + 198 * OS1_S1 + 98) =
                prefactor_x * *(b + 198 * OS1_S1 + 70) -
                p_over_q * *(b + 253 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 198 * OS1_S1 + 49);
            *(b + 198 * OS1_S1 + 99) =
                prefactor_x * *(b + 198 * OS1_S1 + 71) -
                p_over_q * *(b + 253 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 71) +
                one_over_two_q * *(b + 198 * OS1_S1 + 50);
            *(b + 198 * OS1_S1 + 100) =
                prefactor_z * *(b + 198 * OS1_S1 + 66) -
                p_over_q * *(b + 262 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 66);
            *(b + 198 * OS1_S1 + 101) =
                prefactor_x * *(b + 198 * OS1_S1 + 73) -
                p_over_q * *(b + 253 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 73) +
                one_over_two_q * *(b + 198 * OS1_S1 + 52);
            *(b + 198 * OS1_S1 + 102) =
                prefactor_y * *(b + 198 * OS1_S1 + 69) -
                p_over_q * *(b + 261 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 69) +
                one_over_two_q * *(b + 198 * OS1_S1 + 44);
            *(b + 198 * OS1_S1 + 103) =
                prefactor_y * *(b + 198 * OS1_S1 + 70) -
                p_over_q * *(b + 261 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 70);
            *(b + 198 * OS1_S1 + 104) =
                prefactor_x * *(b + 198 * OS1_S1 + 76) -
                p_over_q * *(b + 253 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 76) +
                one_over_two_q * *(b + 198 * OS1_S1 + 55);
            *(b + 198 * OS1_S1 + 105) =
                prefactor_x * *(b + 198 * OS1_S1 + 77) -
                p_over_q * *(b + 253 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 77);
            *(b + 198 * OS1_S1 + 106) =
                prefactor_x * *(b + 198 * OS1_S1 + 78) -
                p_over_q * *(b + 253 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 78);
            *(b + 198 * OS1_S1 + 107) =
                prefactor_x * *(b + 198 * OS1_S1 + 79) -
                p_over_q * *(b + 253 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 79);
            *(b + 198 * OS1_S1 + 108) =
                prefactor_x * *(b + 198 * OS1_S1 + 80) -
                p_over_q * *(b + 253 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 80);
            *(b + 198 * OS1_S1 + 109) =
                prefactor_x * *(b + 198 * OS1_S1 + 81) -
                p_over_q * *(b + 253 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 81);
            *(b + 198 * OS1_S1 + 110) =
                prefactor_y * *(b + 198 * OS1_S1 + 76) -
                p_over_q * *(b + 261 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 76);
            *(b + 198 * OS1_S1 + 111) =
                prefactor_x * *(b + 198 * OS1_S1 + 83) -
                p_over_q * *(b + 253 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 83);
            *(b + 198 * OS1_S1 + 112) =
                prefactor_y * *(b + 198 * OS1_S1 + 77) -
                p_over_q * *(b + 261 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 50);
            *(b + 198 * OS1_S1 + 113) =
                prefactor_z * *(b + 198 * OS1_S1 + 77) -
                p_over_q * *(b + 262 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 77);
            *(b + 198 * OS1_S1 + 114) =
                prefactor_z * *(b + 198 * OS1_S1 + 78) -
                p_over_q * *(b + 262 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 78) +
                one_over_two_q * *(b + 198 * OS1_S1 + 50);
            *(b + 198 * OS1_S1 + 115) =
                prefactor_z * *(b + 198 * OS1_S1 + 79) -
                p_over_q * *(b + 262 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 198 * OS1_S1 + 51);
            *(b + 198 * OS1_S1 + 116) =
                prefactor_y * *(b + 198 * OS1_S1 + 81) -
                p_over_q * *(b + 261 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 198 * OS1_S1 + 54);
            *(b + 198 * OS1_S1 + 117) =
                prefactor_y * *(b + 198 * OS1_S1 + 82) -
                p_over_q * *(b + 261 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 82) +
                one_over_two_q * *(b + 198 * OS1_S1 + 55);
            *(b + 198 * OS1_S1 + 118) =
                prefactor_y * *(b + 198 * OS1_S1 + 83) -
                p_over_q * *(b + 261 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 83);
            *(b + 198 * OS1_S1 + 119) =
                prefactor_z * *(b + 198 * OS1_S1 + 83) -
                p_over_q * *(b + 262 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 55);
            *(b + 199 * OS1_S1 + 84) =
                prefactor_x * *(b + 199 * OS1_S1 + 56) -
                p_over_q * *(b + 254 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 199 * OS1_S1 + 35);
            *(b + 199 * OS1_S1 + 85) =
                prefactor_y * *(b + 199 * OS1_S1 + 56) -
                p_over_q * *(b + 262 * OS1_S1 + 56) +
                one_over_two_q * *(b + 147 * OS1_S1 + 56);
            *(b + 199 * OS1_S1 + 86) =
                prefactor_z * *(b + 199 * OS1_S1 + 56) -
                p_over_q * *(b + 263 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 56);
            *(b + 199 * OS1_S1 + 87) =
                prefactor_y * *(b + 199 * OS1_S1 + 57) -
                p_over_q * *(b + 262 * OS1_S1 + 57) +
                one_over_two_q * *(b + 147 * OS1_S1 + 57) +
                one_over_two_q * *(b + 199 * OS1_S1 + 35);
            *(b + 199 * OS1_S1 + 88) =
                prefactor_y * *(b + 199 * OS1_S1 + 58) -
                p_over_q * *(b + 262 * OS1_S1 + 58) +
                one_over_two_q * *(b + 147 * OS1_S1 + 58);
            *(b + 199 * OS1_S1 + 89) =
                prefactor_z * *(b + 199 * OS1_S1 + 58) -
                p_over_q * *(b + 263 * OS1_S1 + 58) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 58) +
                one_over_two_q * *(b + 199 * OS1_S1 + 35);
            *(b + 199 * OS1_S1 + 90) =
                prefactor_y * *(b + 199 * OS1_S1 + 59) -
                p_over_q * *(b + 262 * OS1_S1 + 59) +
                one_over_two_q * *(b + 147 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 36);
            *(b + 199 * OS1_S1 + 91) =
                prefactor_z * *(b + 199 * OS1_S1 + 59) -
                p_over_q * *(b + 263 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 59);
            *(b + 199 * OS1_S1 + 92) =
                prefactor_y * *(b + 199 * OS1_S1 + 61) -
                p_over_q * *(b + 262 * OS1_S1 + 61) +
                one_over_two_q * *(b + 147 * OS1_S1 + 61);
            *(b + 199 * OS1_S1 + 93) =
                prefactor_z * *(b + 199 * OS1_S1 + 61) -
                p_over_q * *(b + 263 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 37);
            *(b + 199 * OS1_S1 + 94) =
                prefactor_x * *(b + 199 * OS1_S1 + 66) -
                p_over_q * *(b + 254 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 45);
            *(b + 199 * OS1_S1 + 95) =
                prefactor_z * *(b + 199 * OS1_S1 + 62) -
                p_over_q * *(b + 263 * OS1_S1 + 62) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 62);
            *(b + 199 * OS1_S1 + 96) =
                prefactor_y * *(b + 199 * OS1_S1 + 64) -
                p_over_q * *(b + 262 * OS1_S1 + 64) +
                one_over_two_q * *(b + 147 * OS1_S1 + 64) +
                one_over_two_q * *(b + 199 * OS1_S1 + 40);
            *(b + 199 * OS1_S1 + 97) =
                prefactor_y * *(b + 199 * OS1_S1 + 65) -
                p_over_q * *(b + 262 * OS1_S1 + 65) +
                one_over_two_q * *(b + 147 * OS1_S1 + 65);
            *(b + 199 * OS1_S1 + 98) =
                prefactor_x * *(b + 199 * OS1_S1 + 70) -
                p_over_q * *(b + 254 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 49);
            *(b + 199 * OS1_S1 + 99) =
                prefactor_x * *(b + 199 * OS1_S1 + 71) -
                p_over_q * *(b + 254 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 71) +
                one_over_two_q * *(b + 199 * OS1_S1 + 50);
            *(b + 199 * OS1_S1 + 100) =
                prefactor_z * *(b + 199 * OS1_S1 + 66) -
                p_over_q * *(b + 263 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 66);
            *(b + 199 * OS1_S1 + 101) =
                prefactor_x * *(b + 199 * OS1_S1 + 73) -
                p_over_q * *(b + 254 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 73) +
                one_over_two_q * *(b + 199 * OS1_S1 + 52);
            *(b + 199 * OS1_S1 + 102) =
                prefactor_y * *(b + 199 * OS1_S1 + 69) -
                p_over_q * *(b + 262 * OS1_S1 + 69) +
                one_over_two_q * *(b + 147 * OS1_S1 + 69) +
                one_over_two_q * *(b + 199 * OS1_S1 + 44);
            *(b + 199 * OS1_S1 + 103) =
                prefactor_y * *(b + 199 * OS1_S1 + 70) -
                p_over_q * *(b + 262 * OS1_S1 + 70) +
                one_over_two_q * *(b + 147 * OS1_S1 + 70);
            *(b + 199 * OS1_S1 + 104) =
                prefactor_x * *(b + 199 * OS1_S1 + 76) -
                p_over_q * *(b + 254 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 76) +
                one_over_two_q * *(b + 199 * OS1_S1 + 55);
            *(b + 199 * OS1_S1 + 105) =
                prefactor_x * *(b + 199 * OS1_S1 + 77) -
                p_over_q * *(b + 254 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 77);
            *(b + 199 * OS1_S1 + 106) =
                prefactor_x * *(b + 199 * OS1_S1 + 78) -
                p_over_q * *(b + 254 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 78);
            *(b + 199 * OS1_S1 + 107) =
                prefactor_x * *(b + 199 * OS1_S1 + 79) -
                p_over_q * *(b + 254 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 79);
            *(b + 199 * OS1_S1 + 108) =
                prefactor_x * *(b + 199 * OS1_S1 + 80) -
                p_over_q * *(b + 254 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 80);
            *(b + 199 * OS1_S1 + 109) =
                prefactor_x * *(b + 199 * OS1_S1 + 81) -
                p_over_q * *(b + 254 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 81);
            *(b + 199 * OS1_S1 + 110) =
                prefactor_y * *(b + 199 * OS1_S1 + 76) -
                p_over_q * *(b + 262 * OS1_S1 + 76) +
                one_over_two_q * *(b + 147 * OS1_S1 + 76);
            *(b + 199 * OS1_S1 + 111) =
                prefactor_x * *(b + 199 * OS1_S1 + 83) -
                p_over_q * *(b + 254 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 83);
            *(b + 199 * OS1_S1 + 112) =
                prefactor_y * *(b + 199 * OS1_S1 + 77) -
                p_over_q * *(b + 262 * OS1_S1 + 77) +
                one_over_two_q * *(b + 147 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 199 * OS1_S1 + 50);
            *(b + 199 * OS1_S1 + 113) =
                prefactor_z * *(b + 199 * OS1_S1 + 77) -
                p_over_q * *(b + 263 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 77);
            *(b + 199 * OS1_S1 + 114) =
                prefactor_z * *(b + 199 * OS1_S1 + 78) -
                p_over_q * *(b + 263 * OS1_S1 + 78) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 78) +
                one_over_two_q * *(b + 199 * OS1_S1 + 50);
            *(b + 199 * OS1_S1 + 115) =
                prefactor_z * *(b + 199 * OS1_S1 + 79) -
                p_over_q * *(b + 263 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 51);
            *(b + 199 * OS1_S1 + 116) =
                prefactor_y * *(b + 199 * OS1_S1 + 81) -
                p_over_q * *(b + 262 * OS1_S1 + 81) +
                one_over_two_q * *(b + 147 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 54);
            *(b + 199 * OS1_S1 + 117) =
                prefactor_y * *(b + 199 * OS1_S1 + 82) -
                p_over_q * *(b + 262 * OS1_S1 + 82) +
                one_over_two_q * *(b + 147 * OS1_S1 + 82) +
                one_over_two_q * *(b + 199 * OS1_S1 + 55);
            *(b + 199 * OS1_S1 + 118) =
                prefactor_y * *(b + 199 * OS1_S1 + 83) -
                p_over_q * *(b + 262 * OS1_S1 + 83) +
                one_over_two_q * *(b + 147 * OS1_S1 + 83);
            *(b + 199 * OS1_S1 + 119) =
                prefactor_z * *(b + 199 * OS1_S1 + 83) -
                p_over_q * *(b + 263 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 199 * OS1_S1 + 55);
            *(b + 200 * OS1_S1 + 84) =
                prefactor_x * *(b + 200 * OS1_S1 + 56) -
                p_over_q * *(b + 255 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 200 * OS1_S1 + 35);
            *(b + 200 * OS1_S1 + 85) = prefactor_y * *(b + 200 * OS1_S1 + 56) -
                                       p_over_q * *(b + 263 * OS1_S1 + 56);
            *(b + 200 * OS1_S1 + 86) =
                prefactor_z * *(b + 200 * OS1_S1 + 56) -
                p_over_q * *(b + 264 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 56);
            *(b + 200 * OS1_S1 + 87) =
                prefactor_y * *(b + 200 * OS1_S1 + 57) -
                p_over_q * *(b + 263 * OS1_S1 + 57) +
                one_over_two_q * *(b + 200 * OS1_S1 + 35);
            *(b + 200 * OS1_S1 + 88) = prefactor_y * *(b + 200 * OS1_S1 + 58) -
                                       p_over_q * *(b + 263 * OS1_S1 + 58);
            *(b + 200 * OS1_S1 + 89) =
                prefactor_z * *(b + 200 * OS1_S1 + 58) -
                p_over_q * *(b + 264 * OS1_S1 + 58) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 58) +
                one_over_two_q * *(b + 200 * OS1_S1 + 35);
            *(b + 200 * OS1_S1 + 90) =
                prefactor_y * *(b + 200 * OS1_S1 + 59) -
                p_over_q * *(b + 263 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 200 * OS1_S1 + 36);
            *(b + 200 * OS1_S1 + 91) =
                prefactor_z * *(b + 200 * OS1_S1 + 59) -
                p_over_q * *(b + 264 * OS1_S1 + 59) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 59);
            *(b + 200 * OS1_S1 + 92) = prefactor_y * *(b + 200 * OS1_S1 + 61) -
                                       p_over_q * *(b + 263 * OS1_S1 + 61);
            *(b + 200 * OS1_S1 + 93) =
                prefactor_z * *(b + 200 * OS1_S1 + 61) -
                p_over_q * *(b + 264 * OS1_S1 + 61) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 200 * OS1_S1 + 37);
            *(b + 200 * OS1_S1 + 94) =
                prefactor_x * *(b + 200 * OS1_S1 + 66) -
                p_over_q * *(b + 255 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 200 * OS1_S1 + 45);
            *(b + 200 * OS1_S1 + 95) =
                prefactor_z * *(b + 200 * OS1_S1 + 62) -
                p_over_q * *(b + 264 * OS1_S1 + 62) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 62);
            *(b + 200 * OS1_S1 + 96) =
                prefactor_y * *(b + 200 * OS1_S1 + 64) -
                p_over_q * *(b + 263 * OS1_S1 + 64) +
                one_over_two_q * *(b + 200 * OS1_S1 + 40);
            *(b + 200 * OS1_S1 + 97) = prefactor_y * *(b + 200 * OS1_S1 + 65) -
                                       p_over_q * *(b + 263 * OS1_S1 + 65);
            *(b + 200 * OS1_S1 + 98) =
                prefactor_x * *(b + 200 * OS1_S1 + 70) -
                p_over_q * *(b + 255 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 200 * OS1_S1 + 49);
            *(b + 200 * OS1_S1 + 99) =
                prefactor_x * *(b + 200 * OS1_S1 + 71) -
                p_over_q * *(b + 255 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 71) +
                one_over_two_q * *(b + 200 * OS1_S1 + 50);
            *(b + 200 * OS1_S1 + 100) =
                prefactor_z * *(b + 200 * OS1_S1 + 66) -
                p_over_q * *(b + 264 * OS1_S1 + 66) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 66);
            *(b + 200 * OS1_S1 + 101) =
                prefactor_x * *(b + 200 * OS1_S1 + 73) -
                p_over_q * *(b + 255 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 73) +
                one_over_two_q * *(b + 200 * OS1_S1 + 52);
            *(b + 200 * OS1_S1 + 102) =
                prefactor_y * *(b + 200 * OS1_S1 + 69) -
                p_over_q * *(b + 263 * OS1_S1 + 69) +
                one_over_two_q * *(b + 200 * OS1_S1 + 44);
            *(b + 200 * OS1_S1 + 103) = prefactor_y * *(b + 200 * OS1_S1 + 70) -
                                        p_over_q * *(b + 263 * OS1_S1 + 70);
            *(b + 200 * OS1_S1 + 104) =
                prefactor_x * *(b + 200 * OS1_S1 + 76) -
                p_over_q * *(b + 255 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 76) +
                one_over_two_q * *(b + 200 * OS1_S1 + 55);
            *(b + 200 * OS1_S1 + 105) =
                prefactor_x * *(b + 200 * OS1_S1 + 77) -
                p_over_q * *(b + 255 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 77);
            *(b + 200 * OS1_S1 + 106) =
                prefactor_x * *(b + 200 * OS1_S1 + 78) -
                p_over_q * *(b + 255 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 78);
            *(b + 200 * OS1_S1 + 107) =
                prefactor_x * *(b + 200 * OS1_S1 + 79) -
                p_over_q * *(b + 255 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 79);
            *(b + 200 * OS1_S1 + 108) =
                prefactor_x * *(b + 200 * OS1_S1 + 80) -
                p_over_q * *(b + 255 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 80);
            *(b + 200 * OS1_S1 + 109) =
                prefactor_x * *(b + 200 * OS1_S1 + 81) -
                p_over_q * *(b + 255 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 81);
            *(b + 200 * OS1_S1 + 110) = prefactor_y * *(b + 200 * OS1_S1 + 76) -
                                        p_over_q * *(b + 263 * OS1_S1 + 76);
            *(b + 200 * OS1_S1 + 111) =
                prefactor_x * *(b + 200 * OS1_S1 + 83) -
                p_over_q * *(b + 255 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 83);
            *(b + 200 * OS1_S1 + 112) =
                prefactor_y * *(b + 200 * OS1_S1 + 77) -
                p_over_q * *(b + 263 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 200 * OS1_S1 + 50);
            *(b + 200 * OS1_S1 + 113) =
                prefactor_z * *(b + 200 * OS1_S1 + 77) -
                p_over_q * *(b + 264 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 77);
            *(b + 200 * OS1_S1 + 114) =
                prefactor_z * *(b + 200 * OS1_S1 + 78) -
                p_over_q * *(b + 264 * OS1_S1 + 78) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 78) +
                one_over_two_q * *(b + 200 * OS1_S1 + 50);
            *(b + 200 * OS1_S1 + 115) =
                prefactor_z * *(b + 200 * OS1_S1 + 79) -
                p_over_q * *(b + 264 * OS1_S1 + 79) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 200 * OS1_S1 + 51);
            *(b + 200 * OS1_S1 + 116) =
                prefactor_y * *(b + 200 * OS1_S1 + 81) -
                p_over_q * *(b + 263 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 200 * OS1_S1 + 54);
            *(b + 200 * OS1_S1 + 117) =
                prefactor_y * *(b + 200 * OS1_S1 + 82) -
                p_over_q * *(b + 263 * OS1_S1 + 82) +
                one_over_two_q * *(b + 200 * OS1_S1 + 55);
            *(b + 200 * OS1_S1 + 118) = prefactor_y * *(b + 200 * OS1_S1 + 83) -
                                        p_over_q * *(b + 263 * OS1_S1 + 83);
            *(b + 200 * OS1_S1 + 119) =
                prefactor_z * *(b + 200 * OS1_S1 + 83) -
                p_over_q * *(b + 264 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 200 * OS1_S1 + 55);
            *(b + 201 * OS1_S1 + 84) =
                prefactor_x * *(b + 201 * OS1_S1 + 56) -
                p_over_q * *(b + 256 * OS1_S1 + 56) +
                one_over_two_q * *(b + 156 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 201 * OS1_S1 + 35);
            *(b + 201 * OS1_S1 + 85) =
                prefactor_y * *(b + 201 * OS1_S1 + 56) -
                p_over_q * *(b + 265 * OS1_S1 + 56) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 56);
            *(b + 201 * OS1_S1 + 86) = prefactor_z * *(b + 201 * OS1_S1 + 56) -
                                       p_over_q * *(b + 266 * OS1_S1 + 56);
            *(b + 201 * OS1_S1 + 87) =
                prefactor_y * *(b + 201 * OS1_S1 + 57) -
                p_over_q * *(b + 265 * OS1_S1 + 57) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 57) +
                one_over_two_q * *(b + 201 * OS1_S1 + 35);
            *(b + 201 * OS1_S1 + 88) = prefactor_z * *(b + 201 * OS1_S1 + 57) -
                                       p_over_q * *(b + 266 * OS1_S1 + 57);
            *(b + 201 * OS1_S1 + 89) =
                prefactor_z * *(b + 201 * OS1_S1 + 58) -
                p_over_q * *(b + 266 * OS1_S1 + 58) +
                one_over_two_q * *(b + 201 * OS1_S1 + 35);
            *(b + 201 * OS1_S1 + 90) =
                prefactor_y * *(b + 201 * OS1_S1 + 59) -
                p_over_q * *(b + 265 * OS1_S1 + 59) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 36);
            *(b + 201 * OS1_S1 + 91) = prefactor_z * *(b + 201 * OS1_S1 + 59) -
                                       p_over_q * *(b + 266 * OS1_S1 + 59);
            *(b + 201 * OS1_S1 + 92) =
                prefactor_y * *(b + 201 * OS1_S1 + 61) -
                p_over_q * *(b + 265 * OS1_S1 + 61) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 61);
            *(b + 201 * OS1_S1 + 93) =
                prefactor_z * *(b + 201 * OS1_S1 + 61) -
                p_over_q * *(b + 266 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 37);
            *(b + 201 * OS1_S1 + 94) =
                prefactor_x * *(b + 201 * OS1_S1 + 66) -
                p_over_q * *(b + 256 * OS1_S1 + 66) +
                one_over_two_q * *(b + 156 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 45);
            *(b + 201 * OS1_S1 + 95) = prefactor_z * *(b + 201 * OS1_S1 + 62) -
                                       p_over_q * *(b + 266 * OS1_S1 + 62);
            *(b + 201 * OS1_S1 + 96) =
                prefactor_z * *(b + 201 * OS1_S1 + 63) -
                p_over_q * *(b + 266 * OS1_S1 + 63) +
                one_over_two_q * *(b + 201 * OS1_S1 + 38);
            *(b + 201 * OS1_S1 + 97) =
                prefactor_y * *(b + 201 * OS1_S1 + 65) -
                p_over_q * *(b + 265 * OS1_S1 + 65) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 65);
            *(b + 201 * OS1_S1 + 98) =
                prefactor_x * *(b + 201 * OS1_S1 + 70) -
                p_over_q * *(b + 256 * OS1_S1 + 70) +
                one_over_two_q * *(b + 156 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 49);
            *(b + 201 * OS1_S1 + 99) =
                prefactor_x * *(b + 201 * OS1_S1 + 71) -
                p_over_q * *(b + 256 * OS1_S1 + 71) +
                one_over_two_q * *(b + 156 * OS1_S1 + 71) +
                one_over_two_q * *(b + 201 * OS1_S1 + 50);
            *(b + 201 * OS1_S1 + 100) = prefactor_z * *(b + 201 * OS1_S1 + 66) -
                                        p_over_q * *(b + 266 * OS1_S1 + 66);
            *(b + 201 * OS1_S1 + 101) =
                prefactor_z * *(b + 201 * OS1_S1 + 67) -
                p_over_q * *(b + 266 * OS1_S1 + 67) +
                one_over_two_q * *(b + 201 * OS1_S1 + 41);
            *(b + 201 * OS1_S1 + 102) =
                prefactor_x * *(b + 201 * OS1_S1 + 74) -
                p_over_q * *(b + 256 * OS1_S1 + 74) +
                one_over_two_q * *(b + 156 * OS1_S1 + 74) +
                one_over_two_q * *(b + 201 * OS1_S1 + 53);
            *(b + 201 * OS1_S1 + 103) =
                prefactor_y * *(b + 201 * OS1_S1 + 70) -
                p_over_q * *(b + 265 * OS1_S1 + 70) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 70);
            *(b + 201 * OS1_S1 + 104) =
                prefactor_x * *(b + 201 * OS1_S1 + 76) -
                p_over_q * *(b + 256 * OS1_S1 + 76) +
                one_over_two_q * *(b + 156 * OS1_S1 + 76) +
                one_over_two_q * *(b + 201 * OS1_S1 + 55);
            *(b + 201 * OS1_S1 + 105) =
                prefactor_x * *(b + 201 * OS1_S1 + 77) -
                p_over_q * *(b + 256 * OS1_S1 + 77) +
                one_over_two_q * *(b + 156 * OS1_S1 + 77);
            *(b + 201 * OS1_S1 + 106) = prefactor_z * *(b + 201 * OS1_S1 + 71) -
                                        p_over_q * *(b + 266 * OS1_S1 + 71);
            *(b + 201 * OS1_S1 + 107) =
                prefactor_x * *(b + 201 * OS1_S1 + 79) -
                p_over_q * *(b + 256 * OS1_S1 + 79) +
                one_over_two_q * *(b + 156 * OS1_S1 + 79);
            *(b + 201 * OS1_S1 + 108) =
                prefactor_x * *(b + 201 * OS1_S1 + 80) -
                p_over_q * *(b + 256 * OS1_S1 + 80) +
                one_over_two_q * *(b + 156 * OS1_S1 + 80);
            *(b + 201 * OS1_S1 + 109) =
                prefactor_x * *(b + 201 * OS1_S1 + 81) -
                p_over_q * *(b + 256 * OS1_S1 + 81) +
                one_over_two_q * *(b + 156 * OS1_S1 + 81);
            *(b + 201 * OS1_S1 + 110) =
                prefactor_x * *(b + 201 * OS1_S1 + 82) -
                p_over_q * *(b + 256 * OS1_S1 + 82) +
                one_over_two_q * *(b + 156 * OS1_S1 + 82);
            *(b + 201 * OS1_S1 + 111) =
                prefactor_x * *(b + 201 * OS1_S1 + 83) -
                p_over_q * *(b + 256 * OS1_S1 + 83) +
                one_over_two_q * *(b + 156 * OS1_S1 + 83);
            *(b + 201 * OS1_S1 + 112) =
                prefactor_y * *(b + 201 * OS1_S1 + 77) -
                p_over_q * *(b + 265 * OS1_S1 + 77) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 201 * OS1_S1 + 50);
            *(b + 201 * OS1_S1 + 113) = prefactor_z * *(b + 201 * OS1_S1 + 77) -
                                        p_over_q * *(b + 266 * OS1_S1 + 77);
            *(b + 201 * OS1_S1 + 114) =
                prefactor_z * *(b + 201 * OS1_S1 + 78) -
                p_over_q * *(b + 266 * OS1_S1 + 78) +
                one_over_two_q * *(b + 201 * OS1_S1 + 50);
            *(b + 201 * OS1_S1 + 115) =
                prefactor_z * *(b + 201 * OS1_S1 + 79) -
                p_over_q * *(b + 266 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 51);
            *(b + 201 * OS1_S1 + 116) =
                prefactor_y * *(b + 201 * OS1_S1 + 81) -
                p_over_q * *(b + 265 * OS1_S1 + 81) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 54);
            *(b + 201 * OS1_S1 + 117) =
                prefactor_y * *(b + 201 * OS1_S1 + 82) -
                p_over_q * *(b + 265 * OS1_S1 + 82) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 82) +
                one_over_two_q * *(b + 201 * OS1_S1 + 55);
            *(b + 201 * OS1_S1 + 118) =
                prefactor_y * *(b + 201 * OS1_S1 + 83) -
                p_over_q * *(b + 265 * OS1_S1 + 83) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 83);
            *(b + 201 * OS1_S1 + 119) =
                prefactor_z * *(b + 201 * OS1_S1 + 83) -
                p_over_q * *(b + 266 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 201 * OS1_S1 + 55);
            *(b + 202 * OS1_S1 + 84) =
                prefactor_x * *(b + 202 * OS1_S1 + 56) -
                p_over_q * *(b + 257 * OS1_S1 + 56) +
                one_over_two_q * *(b + 157 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 202 * OS1_S1 + 35);
            *(b + 202 * OS1_S1 + 85) =
                prefactor_y * *(b + 202 * OS1_S1 + 56) -
                p_over_q * *(b + 266 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 56);
            *(b + 202 * OS1_S1 + 86) =
                prefactor_z * *(b + 202 * OS1_S1 + 56) -
                p_over_q * *(b + 267 * OS1_S1 + 56) +
                one_over_two_q * *(b + 148 * OS1_S1 + 56);
            *(b + 202 * OS1_S1 + 87) =
                prefactor_y * *(b + 202 * OS1_S1 + 57) -
                p_over_q * *(b + 266 * OS1_S1 + 57) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 57) +
                one_over_two_q * *(b + 202 * OS1_S1 + 35);
            *(b + 202 * OS1_S1 + 88) =
                prefactor_z * *(b + 202 * OS1_S1 + 57) -
                p_over_q * *(b + 267 * OS1_S1 + 57) +
                one_over_two_q * *(b + 148 * OS1_S1 + 57);
            *(b + 202 * OS1_S1 + 89) =
                prefactor_z * *(b + 202 * OS1_S1 + 58) -
                p_over_q * *(b + 267 * OS1_S1 + 58) +
                one_over_two_q * *(b + 148 * OS1_S1 + 58) +
                one_over_two_q * *(b + 202 * OS1_S1 + 35);
            *(b + 202 * OS1_S1 + 90) =
                prefactor_y * *(b + 202 * OS1_S1 + 59) -
                p_over_q * *(b + 266 * OS1_S1 + 59) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 36);
            *(b + 202 * OS1_S1 + 91) =
                prefactor_z * *(b + 202 * OS1_S1 + 59) -
                p_over_q * *(b + 267 * OS1_S1 + 59) +
                one_over_two_q * *(b + 148 * OS1_S1 + 59);
            *(b + 202 * OS1_S1 + 92) =
                prefactor_y * *(b + 202 * OS1_S1 + 61) -
                p_over_q * *(b + 266 * OS1_S1 + 61) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 61);
            *(b + 202 * OS1_S1 + 93) =
                prefactor_z * *(b + 202 * OS1_S1 + 61) -
                p_over_q * *(b + 267 * OS1_S1 + 61) +
                one_over_two_q * *(b + 148 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 37);
            *(b + 202 * OS1_S1 + 94) =
                prefactor_x * *(b + 202 * OS1_S1 + 66) -
                p_over_q * *(b + 257 * OS1_S1 + 66) +
                one_over_two_q * *(b + 157 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 45);
            *(b + 202 * OS1_S1 + 95) =
                prefactor_z * *(b + 202 * OS1_S1 + 62) -
                p_over_q * *(b + 267 * OS1_S1 + 62) +
                one_over_two_q * *(b + 148 * OS1_S1 + 62);
            *(b + 202 * OS1_S1 + 96) =
                prefactor_z * *(b + 202 * OS1_S1 + 63) -
                p_over_q * *(b + 267 * OS1_S1 + 63) +
                one_over_two_q * *(b + 148 * OS1_S1 + 63) +
                one_over_two_q * *(b + 202 * OS1_S1 + 38);
            *(b + 202 * OS1_S1 + 97) =
                prefactor_y * *(b + 202 * OS1_S1 + 65) -
                p_over_q * *(b + 266 * OS1_S1 + 65) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 65);
            *(b + 202 * OS1_S1 + 98) =
                prefactor_x * *(b + 202 * OS1_S1 + 70) -
                p_over_q * *(b + 257 * OS1_S1 + 70) +
                one_over_two_q * *(b + 157 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 49);
            *(b + 202 * OS1_S1 + 99) =
                prefactor_x * *(b + 202 * OS1_S1 + 71) -
                p_over_q * *(b + 257 * OS1_S1 + 71) +
                one_over_two_q * *(b + 157 * OS1_S1 + 71) +
                one_over_two_q * *(b + 202 * OS1_S1 + 50);
            *(b + 202 * OS1_S1 + 100) =
                prefactor_z * *(b + 202 * OS1_S1 + 66) -
                p_over_q * *(b + 267 * OS1_S1 + 66) +
                one_over_two_q * *(b + 148 * OS1_S1 + 66);
            *(b + 202 * OS1_S1 + 101) =
                prefactor_z * *(b + 202 * OS1_S1 + 67) -
                p_over_q * *(b + 267 * OS1_S1 + 67) +
                one_over_two_q * *(b + 148 * OS1_S1 + 67) +
                one_over_two_q * *(b + 202 * OS1_S1 + 41);
            *(b + 202 * OS1_S1 + 102) =
                prefactor_x * *(b + 202 * OS1_S1 + 74) -
                p_over_q * *(b + 257 * OS1_S1 + 74) +
                one_over_two_q * *(b + 157 * OS1_S1 + 74) +
                one_over_two_q * *(b + 202 * OS1_S1 + 53);
            *(b + 202 * OS1_S1 + 103) =
                prefactor_y * *(b + 202 * OS1_S1 + 70) -
                p_over_q * *(b + 266 * OS1_S1 + 70) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 70);
            *(b + 202 * OS1_S1 + 104) =
                prefactor_x * *(b + 202 * OS1_S1 + 76) -
                p_over_q * *(b + 257 * OS1_S1 + 76) +
                one_over_two_q * *(b + 157 * OS1_S1 + 76) +
                one_over_two_q * *(b + 202 * OS1_S1 + 55);
            *(b + 202 * OS1_S1 + 105) =
                prefactor_x * *(b + 202 * OS1_S1 + 77) -
                p_over_q * *(b + 257 * OS1_S1 + 77) +
                one_over_two_q * *(b + 157 * OS1_S1 + 77);
            *(b + 202 * OS1_S1 + 106) =
                prefactor_z * *(b + 202 * OS1_S1 + 71) -
                p_over_q * *(b + 267 * OS1_S1 + 71) +
                one_over_two_q * *(b + 148 * OS1_S1 + 71);
            *(b + 202 * OS1_S1 + 107) =
                prefactor_x * *(b + 202 * OS1_S1 + 79) -
                p_over_q * *(b + 257 * OS1_S1 + 79) +
                one_over_two_q * *(b + 157 * OS1_S1 + 79);
            *(b + 202 * OS1_S1 + 108) =
                prefactor_x * *(b + 202 * OS1_S1 + 80) -
                p_over_q * *(b + 257 * OS1_S1 + 80) +
                one_over_two_q * *(b + 157 * OS1_S1 + 80);
            *(b + 202 * OS1_S1 + 109) =
                prefactor_x * *(b + 202 * OS1_S1 + 81) -
                p_over_q * *(b + 257 * OS1_S1 + 81) +
                one_over_two_q * *(b + 157 * OS1_S1 + 81);
            *(b + 202 * OS1_S1 + 110) =
                prefactor_x * *(b + 202 * OS1_S1 + 82) -
                p_over_q * *(b + 257 * OS1_S1 + 82) +
                one_over_two_q * *(b + 157 * OS1_S1 + 82);
            *(b + 202 * OS1_S1 + 111) =
                prefactor_x * *(b + 202 * OS1_S1 + 83) -
                p_over_q * *(b + 257 * OS1_S1 + 83) +
                one_over_two_q * *(b + 157 * OS1_S1 + 83);
            *(b + 202 * OS1_S1 + 112) =
                prefactor_y * *(b + 202 * OS1_S1 + 77) -
                p_over_q * *(b + 266 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 202 * OS1_S1 + 50);
            *(b + 202 * OS1_S1 + 113) =
                prefactor_z * *(b + 202 * OS1_S1 + 77) -
                p_over_q * *(b + 267 * OS1_S1 + 77) +
                one_over_two_q * *(b + 148 * OS1_S1 + 77);
            *(b + 202 * OS1_S1 + 114) =
                prefactor_z * *(b + 202 * OS1_S1 + 78) -
                p_over_q * *(b + 267 * OS1_S1 + 78) +
                one_over_two_q * *(b + 148 * OS1_S1 + 78) +
                one_over_two_q * *(b + 202 * OS1_S1 + 50);
            *(b + 202 * OS1_S1 + 115) =
                prefactor_z * *(b + 202 * OS1_S1 + 79) -
                p_over_q * *(b + 267 * OS1_S1 + 79) +
                one_over_two_q * *(b + 148 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 51);
            *(b + 202 * OS1_S1 + 116) =
                prefactor_y * *(b + 202 * OS1_S1 + 81) -
                p_over_q * *(b + 266 * OS1_S1 + 81) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 54);
            *(b + 202 * OS1_S1 + 117) =
                prefactor_y * *(b + 202 * OS1_S1 + 82) -
                p_over_q * *(b + 266 * OS1_S1 + 82) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 82) +
                one_over_two_q * *(b + 202 * OS1_S1 + 55);
            *(b + 202 * OS1_S1 + 118) =
                prefactor_y * *(b + 202 * OS1_S1 + 83) -
                p_over_q * *(b + 266 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 83);
            *(b + 202 * OS1_S1 + 119) =
                prefactor_z * *(b + 202 * OS1_S1 + 83) -
                p_over_q * *(b + 267 * OS1_S1 + 83) +
                one_over_two_q * *(b + 148 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 202 * OS1_S1 + 55);
            *(b + 203 * OS1_S1 + 84) =
                prefactor_x * *(b + 203 * OS1_S1 + 56) -
                p_over_q * *(b + 258 * OS1_S1 + 56) +
                one_over_two_q * *(b + 158 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 203 * OS1_S1 + 35);
            *(b + 203 * OS1_S1 + 85) =
                prefactor_y * *(b + 203 * OS1_S1 + 56) -
                p_over_q * *(b + 267 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 56);
            *(b + 203 * OS1_S1 + 86) =
                prefactor_z * *(b + 203 * OS1_S1 + 56) -
                p_over_q * *(b + 268 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 56);
            *(b + 203 * OS1_S1 + 87) =
                prefactor_y * *(b + 203 * OS1_S1 + 57) -
                p_over_q * *(b + 267 * OS1_S1 + 57) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 57) +
                one_over_two_q * *(b + 203 * OS1_S1 + 35);
            *(b + 203 * OS1_S1 + 88) =
                prefactor_z * *(b + 203 * OS1_S1 + 57) -
                p_over_q * *(b + 268 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 57);
            *(b + 203 * OS1_S1 + 89) =
                prefactor_z * *(b + 203 * OS1_S1 + 58) -
                p_over_q * *(b + 268 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 58) +
                one_over_two_q * *(b + 203 * OS1_S1 + 35);
            *(b + 203 * OS1_S1 + 90) =
                prefactor_y * *(b + 203 * OS1_S1 + 59) -
                p_over_q * *(b + 267 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 36);
            *(b + 203 * OS1_S1 + 91) =
                prefactor_z * *(b + 203 * OS1_S1 + 59) -
                p_over_q * *(b + 268 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 59);
            *(b + 203 * OS1_S1 + 92) =
                prefactor_y * *(b + 203 * OS1_S1 + 61) -
                p_over_q * *(b + 267 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 61);
            *(b + 203 * OS1_S1 + 93) =
                prefactor_z * *(b + 203 * OS1_S1 + 61) -
                p_over_q * *(b + 268 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 37);
            *(b + 203 * OS1_S1 + 94) =
                prefactor_x * *(b + 203 * OS1_S1 + 66) -
                p_over_q * *(b + 258 * OS1_S1 + 66) +
                one_over_two_q * *(b + 158 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 45);
            *(b + 203 * OS1_S1 + 95) =
                prefactor_z * *(b + 203 * OS1_S1 + 62) -
                p_over_q * *(b + 268 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 62);
            *(b + 203 * OS1_S1 + 96) =
                prefactor_z * *(b + 203 * OS1_S1 + 63) -
                p_over_q * *(b + 268 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 63) +
                one_over_two_q * *(b + 203 * OS1_S1 + 38);
            *(b + 203 * OS1_S1 + 97) =
                prefactor_y * *(b + 203 * OS1_S1 + 65) -
                p_over_q * *(b + 267 * OS1_S1 + 65) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 65);
            *(b + 203 * OS1_S1 + 98) =
                prefactor_x * *(b + 203 * OS1_S1 + 70) -
                p_over_q * *(b + 258 * OS1_S1 + 70) +
                one_over_two_q * *(b + 158 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 49);
            *(b + 203 * OS1_S1 + 99) =
                prefactor_x * *(b + 203 * OS1_S1 + 71) -
                p_over_q * *(b + 258 * OS1_S1 + 71) +
                one_over_two_q * *(b + 158 * OS1_S1 + 71) +
                one_over_two_q * *(b + 203 * OS1_S1 + 50);
            *(b + 203 * OS1_S1 + 100) =
                prefactor_z * *(b + 203 * OS1_S1 + 66) -
                p_over_q * *(b + 268 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 66);
            *(b + 203 * OS1_S1 + 101) =
                prefactor_x * *(b + 203 * OS1_S1 + 73) -
                p_over_q * *(b + 258 * OS1_S1 + 73) +
                one_over_two_q * *(b + 158 * OS1_S1 + 73) +
                one_over_two_q * *(b + 203 * OS1_S1 + 52);
            *(b + 203 * OS1_S1 + 102) =
                prefactor_x * *(b + 203 * OS1_S1 + 74) -
                p_over_q * *(b + 258 * OS1_S1 + 74) +
                one_over_two_q * *(b + 158 * OS1_S1 + 74) +
                one_over_two_q * *(b + 203 * OS1_S1 + 53);
            *(b + 203 * OS1_S1 + 103) =
                prefactor_y * *(b + 203 * OS1_S1 + 70) -
                p_over_q * *(b + 267 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 70);
            *(b + 203 * OS1_S1 + 104) =
                prefactor_x * *(b + 203 * OS1_S1 + 76) -
                p_over_q * *(b + 258 * OS1_S1 + 76) +
                one_over_two_q * *(b + 158 * OS1_S1 + 76) +
                one_over_two_q * *(b + 203 * OS1_S1 + 55);
            *(b + 203 * OS1_S1 + 105) =
                prefactor_x * *(b + 203 * OS1_S1 + 77) -
                p_over_q * *(b + 258 * OS1_S1 + 77) +
                one_over_two_q * *(b + 158 * OS1_S1 + 77);
            *(b + 203 * OS1_S1 + 106) =
                prefactor_x * *(b + 203 * OS1_S1 + 78) -
                p_over_q * *(b + 258 * OS1_S1 + 78) +
                one_over_two_q * *(b + 158 * OS1_S1 + 78);
            *(b + 203 * OS1_S1 + 107) =
                prefactor_x * *(b + 203 * OS1_S1 + 79) -
                p_over_q * *(b + 258 * OS1_S1 + 79) +
                one_over_two_q * *(b + 158 * OS1_S1 + 79);
            *(b + 203 * OS1_S1 + 108) =
                prefactor_x * *(b + 203 * OS1_S1 + 80) -
                p_over_q * *(b + 258 * OS1_S1 + 80) +
                one_over_two_q * *(b + 158 * OS1_S1 + 80);
            *(b + 203 * OS1_S1 + 109) =
                prefactor_x * *(b + 203 * OS1_S1 + 81) -
                p_over_q * *(b + 258 * OS1_S1 + 81) +
                one_over_two_q * *(b + 158 * OS1_S1 + 81);
            *(b + 203 * OS1_S1 + 110) =
                prefactor_x * *(b + 203 * OS1_S1 + 82) -
                p_over_q * *(b + 258 * OS1_S1 + 82) +
                one_over_two_q * *(b + 158 * OS1_S1 + 82);
            *(b + 203 * OS1_S1 + 111) =
                prefactor_x * *(b + 203 * OS1_S1 + 83) -
                p_over_q * *(b + 258 * OS1_S1 + 83) +
                one_over_two_q * *(b + 158 * OS1_S1 + 83);
            *(b + 203 * OS1_S1 + 112) =
                prefactor_y * *(b + 203 * OS1_S1 + 77) -
                p_over_q * *(b + 267 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 203 * OS1_S1 + 50);
            *(b + 203 * OS1_S1 + 113) =
                prefactor_z * *(b + 203 * OS1_S1 + 77) -
                p_over_q * *(b + 268 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 77);
            *(b + 203 * OS1_S1 + 114) =
                prefactor_z * *(b + 203 * OS1_S1 + 78) -
                p_over_q * *(b + 268 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 78) +
                one_over_two_q * *(b + 203 * OS1_S1 + 50);
            *(b + 203 * OS1_S1 + 115) =
                prefactor_z * *(b + 203 * OS1_S1 + 79) -
                p_over_q * *(b + 268 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 51);
            *(b + 203 * OS1_S1 + 116) =
                prefactor_y * *(b + 203 * OS1_S1 + 81) -
                p_over_q * *(b + 267 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 54);
            *(b + 203 * OS1_S1 + 117) =
                prefactor_y * *(b + 203 * OS1_S1 + 82) -
                p_over_q * *(b + 267 * OS1_S1 + 82) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 82) +
                one_over_two_q * *(b + 203 * OS1_S1 + 55);
            *(b + 203 * OS1_S1 + 118) =
                prefactor_y * *(b + 203 * OS1_S1 + 83) -
                p_over_q * *(b + 267 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 83);
            *(b + 203 * OS1_S1 + 119) =
                prefactor_z * *(b + 203 * OS1_S1 + 83) -
                p_over_q * *(b + 268 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 203 * OS1_S1 + 55);
            *(b + 204 * OS1_S1 + 84) =
                prefactor_x * *(b + 204 * OS1_S1 + 56) -
                p_over_q * *(b + 259 * OS1_S1 + 56) +
                one_over_two_q * *(b + 159 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 35);
            *(b + 204 * OS1_S1 + 85) =
                prefactor_y * *(b + 204 * OS1_S1 + 56) -
                p_over_q * *(b + 268 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 56);
            *(b + 204 * OS1_S1 + 86) =
                prefactor_z * *(b + 204 * OS1_S1 + 56) -
                p_over_q * *(b + 269 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 56);
            *(b + 204 * OS1_S1 + 87) =
                prefactor_y * *(b + 204 * OS1_S1 + 57) -
                p_over_q * *(b + 268 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 57) +
                one_over_two_q * *(b + 204 * OS1_S1 + 35);
            *(b + 204 * OS1_S1 + 88) =
                prefactor_z * *(b + 204 * OS1_S1 + 57) -
                p_over_q * *(b + 269 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 57);
            *(b + 204 * OS1_S1 + 89) =
                prefactor_z * *(b + 204 * OS1_S1 + 58) -
                p_over_q * *(b + 269 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 58) +
                one_over_two_q * *(b + 204 * OS1_S1 + 35);
            *(b + 204 * OS1_S1 + 90) =
                prefactor_y * *(b + 204 * OS1_S1 + 59) -
                p_over_q * *(b + 268 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 36);
            *(b + 204 * OS1_S1 + 91) =
                prefactor_z * *(b + 204 * OS1_S1 + 59) -
                p_over_q * *(b + 269 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 59);
            *(b + 204 * OS1_S1 + 92) =
                prefactor_y * *(b + 204 * OS1_S1 + 61) -
                p_over_q * *(b + 268 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 61);
            *(b + 204 * OS1_S1 + 93) =
                prefactor_z * *(b + 204 * OS1_S1 + 61) -
                p_over_q * *(b + 269 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 37);
            *(b + 204 * OS1_S1 + 94) =
                prefactor_x * *(b + 204 * OS1_S1 + 66) -
                p_over_q * *(b + 259 * OS1_S1 + 66) +
                one_over_two_q * *(b + 159 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 45);
            *(b + 204 * OS1_S1 + 95) =
                prefactor_z * *(b + 204 * OS1_S1 + 62) -
                p_over_q * *(b + 269 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 62);
            *(b + 204 * OS1_S1 + 96) =
                prefactor_z * *(b + 204 * OS1_S1 + 63) -
                p_over_q * *(b + 269 * OS1_S1 + 63) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 63) +
                one_over_two_q * *(b + 204 * OS1_S1 + 38);
            *(b + 204 * OS1_S1 + 97) =
                prefactor_y * *(b + 204 * OS1_S1 + 65) -
                p_over_q * *(b + 268 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 65);
            *(b + 204 * OS1_S1 + 98) =
                prefactor_x * *(b + 204 * OS1_S1 + 70) -
                p_over_q * *(b + 259 * OS1_S1 + 70) +
                one_over_two_q * *(b + 159 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 49);
            *(b + 204 * OS1_S1 + 99) =
                prefactor_x * *(b + 204 * OS1_S1 + 71) -
                p_over_q * *(b + 259 * OS1_S1 + 71) +
                one_over_two_q * *(b + 159 * OS1_S1 + 71) +
                one_over_two_q * *(b + 204 * OS1_S1 + 50);
            *(b + 204 * OS1_S1 + 100) =
                prefactor_z * *(b + 204 * OS1_S1 + 66) -
                p_over_q * *(b + 269 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 66);
            *(b + 204 * OS1_S1 + 101) =
                prefactor_x * *(b + 204 * OS1_S1 + 73) -
                p_over_q * *(b + 259 * OS1_S1 + 73) +
                one_over_two_q * *(b + 159 * OS1_S1 + 73) +
                one_over_two_q * *(b + 204 * OS1_S1 + 52);
            *(b + 204 * OS1_S1 + 102) =
                prefactor_x * *(b + 204 * OS1_S1 + 74) -
                p_over_q * *(b + 259 * OS1_S1 + 74) +
                one_over_two_q * *(b + 159 * OS1_S1 + 74) +
                one_over_two_q * *(b + 204 * OS1_S1 + 53);
            *(b + 204 * OS1_S1 + 103) =
                prefactor_y * *(b + 204 * OS1_S1 + 70) -
                p_over_q * *(b + 268 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 70);
            *(b + 204 * OS1_S1 + 104) =
                prefactor_x * *(b + 204 * OS1_S1 + 76) -
                p_over_q * *(b + 259 * OS1_S1 + 76) +
                one_over_two_q * *(b + 159 * OS1_S1 + 76) +
                one_over_two_q * *(b + 204 * OS1_S1 + 55);
            *(b + 204 * OS1_S1 + 105) =
                prefactor_x * *(b + 204 * OS1_S1 + 77) -
                p_over_q * *(b + 259 * OS1_S1 + 77) +
                one_over_two_q * *(b + 159 * OS1_S1 + 77);
            *(b + 204 * OS1_S1 + 106) =
                prefactor_x * *(b + 204 * OS1_S1 + 78) -
                p_over_q * *(b + 259 * OS1_S1 + 78) +
                one_over_two_q * *(b + 159 * OS1_S1 + 78);
            *(b + 204 * OS1_S1 + 107) =
                prefactor_x * *(b + 204 * OS1_S1 + 79) -
                p_over_q * *(b + 259 * OS1_S1 + 79) +
                one_over_two_q * *(b + 159 * OS1_S1 + 79);
            *(b + 204 * OS1_S1 + 108) =
                prefactor_x * *(b + 204 * OS1_S1 + 80) -
                p_over_q * *(b + 259 * OS1_S1 + 80) +
                one_over_two_q * *(b + 159 * OS1_S1 + 80);
            *(b + 204 * OS1_S1 + 109) =
                prefactor_x * *(b + 204 * OS1_S1 + 81) -
                p_over_q * *(b + 259 * OS1_S1 + 81) +
                one_over_two_q * *(b + 159 * OS1_S1 + 81);
            *(b + 204 * OS1_S1 + 110) =
                prefactor_x * *(b + 204 * OS1_S1 + 82) -
                p_over_q * *(b + 259 * OS1_S1 + 82) +
                one_over_two_q * *(b + 159 * OS1_S1 + 82);
            *(b + 204 * OS1_S1 + 111) =
                prefactor_x * *(b + 204 * OS1_S1 + 83) -
                p_over_q * *(b + 259 * OS1_S1 + 83) +
                one_over_two_q * *(b + 159 * OS1_S1 + 83);
            *(b + 204 * OS1_S1 + 112) =
                prefactor_y * *(b + 204 * OS1_S1 + 77) -
                p_over_q * *(b + 268 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 50);
            *(b + 204 * OS1_S1 + 113) =
                prefactor_z * *(b + 204 * OS1_S1 + 77) -
                p_over_q * *(b + 269 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 77);
            *(b + 204 * OS1_S1 + 114) =
                prefactor_z * *(b + 204 * OS1_S1 + 78) -
                p_over_q * *(b + 269 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 78) +
                one_over_two_q * *(b + 204 * OS1_S1 + 50);
            *(b + 204 * OS1_S1 + 115) =
                prefactor_z * *(b + 204 * OS1_S1 + 79) -
                p_over_q * *(b + 269 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 51);
            *(b + 204 * OS1_S1 + 116) =
                prefactor_y * *(b + 204 * OS1_S1 + 81) -
                p_over_q * *(b + 268 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 54);
            *(b + 204 * OS1_S1 + 117) =
                prefactor_y * *(b + 204 * OS1_S1 + 82) -
                p_over_q * *(b + 268 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 82) +
                one_over_two_q * *(b + 204 * OS1_S1 + 55);
            *(b + 204 * OS1_S1 + 118) =
                prefactor_y * *(b + 204 * OS1_S1 + 83) -
                p_over_q * *(b + 268 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 83);
            *(b + 204 * OS1_S1 + 119) =
                prefactor_z * *(b + 204 * OS1_S1 + 83) -
                p_over_q * *(b + 269 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 55);
            *(b + 205 * OS1_S1 + 84) =
                prefactor_x * *(b + 205 * OS1_S1 + 56) -
                p_over_q * *(b + 260 * OS1_S1 + 56) +
                one_over_two_q * *(b + 160 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 205 * OS1_S1 + 35);
            *(b + 205 * OS1_S1 + 85) =
                prefactor_y * *(b + 205 * OS1_S1 + 56) -
                p_over_q * *(b + 269 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 56);
            *(b + 205 * OS1_S1 + 86) =
                prefactor_z * *(b + 205 * OS1_S1 + 56) -
                p_over_q * *(b + 270 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 56);
            *(b + 205 * OS1_S1 + 87) =
                prefactor_y * *(b + 205 * OS1_S1 + 57) -
                p_over_q * *(b + 269 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 57) +
                one_over_two_q * *(b + 205 * OS1_S1 + 35);
            *(b + 205 * OS1_S1 + 88) =
                prefactor_z * *(b + 205 * OS1_S1 + 57) -
                p_over_q * *(b + 270 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 57);
            *(b + 205 * OS1_S1 + 89) =
                prefactor_z * *(b + 205 * OS1_S1 + 58) -
                p_over_q * *(b + 270 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 58) +
                one_over_two_q * *(b + 205 * OS1_S1 + 35);
            *(b + 205 * OS1_S1 + 90) =
                prefactor_y * *(b + 205 * OS1_S1 + 59) -
                p_over_q * *(b + 269 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 36);
            *(b + 205 * OS1_S1 + 91) =
                prefactor_z * *(b + 205 * OS1_S1 + 59) -
                p_over_q * *(b + 270 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 59);
            *(b + 205 * OS1_S1 + 92) =
                prefactor_y * *(b + 205 * OS1_S1 + 61) -
                p_over_q * *(b + 269 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 61);
            *(b + 205 * OS1_S1 + 93) =
                prefactor_z * *(b + 205 * OS1_S1 + 61) -
                p_over_q * *(b + 270 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 37);
            *(b + 205 * OS1_S1 + 94) =
                prefactor_x * *(b + 205 * OS1_S1 + 66) -
                p_over_q * *(b + 260 * OS1_S1 + 66) +
                one_over_two_q * *(b + 160 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 45);
            *(b + 205 * OS1_S1 + 95) =
                prefactor_z * *(b + 205 * OS1_S1 + 62) -
                p_over_q * *(b + 270 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 62);
            *(b + 205 * OS1_S1 + 96) =
                prefactor_z * *(b + 205 * OS1_S1 + 63) -
                p_over_q * *(b + 270 * OS1_S1 + 63) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 63) +
                one_over_two_q * *(b + 205 * OS1_S1 + 38);
            *(b + 205 * OS1_S1 + 97) =
                prefactor_y * *(b + 205 * OS1_S1 + 65) -
                p_over_q * *(b + 269 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 65);
            *(b + 205 * OS1_S1 + 98) =
                prefactor_x * *(b + 205 * OS1_S1 + 70) -
                p_over_q * *(b + 260 * OS1_S1 + 70) +
                one_over_two_q * *(b + 160 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 49);
            *(b + 205 * OS1_S1 + 99) =
                prefactor_x * *(b + 205 * OS1_S1 + 71) -
                p_over_q * *(b + 260 * OS1_S1 + 71) +
                one_over_two_q * *(b + 160 * OS1_S1 + 71) +
                one_over_two_q * *(b + 205 * OS1_S1 + 50);
            *(b + 205 * OS1_S1 + 100) =
                prefactor_z * *(b + 205 * OS1_S1 + 66) -
                p_over_q * *(b + 270 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 66);
            *(b + 205 * OS1_S1 + 101) =
                prefactor_x * *(b + 205 * OS1_S1 + 73) -
                p_over_q * *(b + 260 * OS1_S1 + 73) +
                one_over_two_q * *(b + 160 * OS1_S1 + 73) +
                one_over_two_q * *(b + 205 * OS1_S1 + 52);
            *(b + 205 * OS1_S1 + 102) =
                prefactor_x * *(b + 205 * OS1_S1 + 74) -
                p_over_q * *(b + 260 * OS1_S1 + 74) +
                one_over_two_q * *(b + 160 * OS1_S1 + 74) +
                one_over_two_q * *(b + 205 * OS1_S1 + 53);
            *(b + 205 * OS1_S1 + 103) =
                prefactor_y * *(b + 205 * OS1_S1 + 70) -
                p_over_q * *(b + 269 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 70);
            *(b + 205 * OS1_S1 + 104) =
                prefactor_x * *(b + 205 * OS1_S1 + 76) -
                p_over_q * *(b + 260 * OS1_S1 + 76) +
                one_over_two_q * *(b + 160 * OS1_S1 + 76) +
                one_over_two_q * *(b + 205 * OS1_S1 + 55);
            *(b + 205 * OS1_S1 + 105) =
                prefactor_x * *(b + 205 * OS1_S1 + 77) -
                p_over_q * *(b + 260 * OS1_S1 + 77) +
                one_over_two_q * *(b + 160 * OS1_S1 + 77);
            *(b + 205 * OS1_S1 + 106) =
                prefactor_x * *(b + 205 * OS1_S1 + 78) -
                p_over_q * *(b + 260 * OS1_S1 + 78) +
                one_over_two_q * *(b + 160 * OS1_S1 + 78);
            *(b + 205 * OS1_S1 + 107) =
                prefactor_x * *(b + 205 * OS1_S1 + 79) -
                p_over_q * *(b + 260 * OS1_S1 + 79) +
                one_over_two_q * *(b + 160 * OS1_S1 + 79);
            *(b + 205 * OS1_S1 + 108) =
                prefactor_x * *(b + 205 * OS1_S1 + 80) -
                p_over_q * *(b + 260 * OS1_S1 + 80) +
                one_over_two_q * *(b + 160 * OS1_S1 + 80);
            *(b + 205 * OS1_S1 + 109) =
                prefactor_x * *(b + 205 * OS1_S1 + 81) -
                p_over_q * *(b + 260 * OS1_S1 + 81) +
                one_over_two_q * *(b + 160 * OS1_S1 + 81);
            *(b + 205 * OS1_S1 + 110) =
                prefactor_x * *(b + 205 * OS1_S1 + 82) -
                p_over_q * *(b + 260 * OS1_S1 + 82) +
                one_over_two_q * *(b + 160 * OS1_S1 + 82);
            *(b + 205 * OS1_S1 + 111) =
                prefactor_x * *(b + 205 * OS1_S1 + 83) -
                p_over_q * *(b + 260 * OS1_S1 + 83) +
                one_over_two_q * *(b + 160 * OS1_S1 + 83);
            *(b + 205 * OS1_S1 + 112) =
                prefactor_y * *(b + 205 * OS1_S1 + 77) -
                p_over_q * *(b + 269 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 205 * OS1_S1 + 50);
            *(b + 205 * OS1_S1 + 113) =
                prefactor_z * *(b + 205 * OS1_S1 + 77) -
                p_over_q * *(b + 270 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 77);
            *(b + 205 * OS1_S1 + 114) =
                prefactor_z * *(b + 205 * OS1_S1 + 78) -
                p_over_q * *(b + 270 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 78) +
                one_over_two_q * *(b + 205 * OS1_S1 + 50);
            *(b + 205 * OS1_S1 + 115) =
                prefactor_z * *(b + 205 * OS1_S1 + 79) -
                p_over_q * *(b + 270 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 51);
            *(b + 205 * OS1_S1 + 116) =
                prefactor_y * *(b + 205 * OS1_S1 + 81) -
                p_over_q * *(b + 269 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 54);
            *(b + 205 * OS1_S1 + 117) =
                prefactor_y * *(b + 205 * OS1_S1 + 82) -
                p_over_q * *(b + 269 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 82) +
                one_over_two_q * *(b + 205 * OS1_S1 + 55);
            *(b + 205 * OS1_S1 + 118) =
                prefactor_y * *(b + 205 * OS1_S1 + 83) -
                p_over_q * *(b + 269 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 83);
            *(b + 205 * OS1_S1 + 119) =
                prefactor_z * *(b + 205 * OS1_S1 + 83) -
                p_over_q * *(b + 270 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 205 * OS1_S1 + 55);
            *(b + 206 * OS1_S1 + 84) =
                prefactor_x * *(b + 206 * OS1_S1 + 56) -
                p_over_q * *(b + 261 * OS1_S1 + 56) +
                one_over_two_q * *(b + 161 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 35);
            *(b + 206 * OS1_S1 + 85) =
                prefactor_y * *(b + 206 * OS1_S1 + 56) -
                p_over_q * *(b + 270 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 56);
            *(b + 206 * OS1_S1 + 86) =
                prefactor_z * *(b + 206 * OS1_S1 + 56) -
                p_over_q * *(b + 271 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 56);
            *(b + 206 * OS1_S1 + 87) =
                prefactor_y * *(b + 206 * OS1_S1 + 57) -
                p_over_q * *(b + 270 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 57) +
                one_over_two_q * *(b + 206 * OS1_S1 + 35);
            *(b + 206 * OS1_S1 + 88) =
                prefactor_y * *(b + 206 * OS1_S1 + 58) -
                p_over_q * *(b + 270 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 58);
            *(b + 206 * OS1_S1 + 89) =
                prefactor_z * *(b + 206 * OS1_S1 + 58) -
                p_over_q * *(b + 271 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 58) +
                one_over_two_q * *(b + 206 * OS1_S1 + 35);
            *(b + 206 * OS1_S1 + 90) =
                prefactor_y * *(b + 206 * OS1_S1 + 59) -
                p_over_q * *(b + 270 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 36);
            *(b + 206 * OS1_S1 + 91) =
                prefactor_z * *(b + 206 * OS1_S1 + 59) -
                p_over_q * *(b + 271 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 59);
            *(b + 206 * OS1_S1 + 92) =
                prefactor_y * *(b + 206 * OS1_S1 + 61) -
                p_over_q * *(b + 270 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 61);
            *(b + 206 * OS1_S1 + 93) =
                prefactor_z * *(b + 206 * OS1_S1 + 61) -
                p_over_q * *(b + 271 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 37);
            *(b + 206 * OS1_S1 + 94) =
                prefactor_x * *(b + 206 * OS1_S1 + 66) -
                p_over_q * *(b + 261 * OS1_S1 + 66) +
                one_over_two_q * *(b + 161 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 45);
            *(b + 206 * OS1_S1 + 95) =
                prefactor_z * *(b + 206 * OS1_S1 + 62) -
                p_over_q * *(b + 271 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 62);
            *(b + 206 * OS1_S1 + 96) =
                prefactor_y * *(b + 206 * OS1_S1 + 64) -
                p_over_q * *(b + 270 * OS1_S1 + 64) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 64) +
                one_over_two_q * *(b + 206 * OS1_S1 + 40);
            *(b + 206 * OS1_S1 + 97) =
                prefactor_y * *(b + 206 * OS1_S1 + 65) -
                p_over_q * *(b + 270 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 65);
            *(b + 206 * OS1_S1 + 98) =
                prefactor_x * *(b + 206 * OS1_S1 + 70) -
                p_over_q * *(b + 261 * OS1_S1 + 70) +
                one_over_two_q * *(b + 161 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 49);
            *(b + 206 * OS1_S1 + 99) =
                prefactor_x * *(b + 206 * OS1_S1 + 71) -
                p_over_q * *(b + 261 * OS1_S1 + 71) +
                one_over_two_q * *(b + 161 * OS1_S1 + 71) +
                one_over_two_q * *(b + 206 * OS1_S1 + 50);
            *(b + 206 * OS1_S1 + 100) =
                prefactor_z * *(b + 206 * OS1_S1 + 66) -
                p_over_q * *(b + 271 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 66);
            *(b + 206 * OS1_S1 + 101) =
                prefactor_x * *(b + 206 * OS1_S1 + 73) -
                p_over_q * *(b + 261 * OS1_S1 + 73) +
                one_over_two_q * *(b + 161 * OS1_S1 + 73) +
                one_over_two_q * *(b + 206 * OS1_S1 + 52);
            *(b + 206 * OS1_S1 + 102) =
                prefactor_x * *(b + 206 * OS1_S1 + 74) -
                p_over_q * *(b + 261 * OS1_S1 + 74) +
                one_over_two_q * *(b + 161 * OS1_S1 + 74) +
                one_over_two_q * *(b + 206 * OS1_S1 + 53);
            *(b + 206 * OS1_S1 + 103) =
                prefactor_y * *(b + 206 * OS1_S1 + 70) -
                p_over_q * *(b + 270 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 70);
            *(b + 206 * OS1_S1 + 104) =
                prefactor_x * *(b + 206 * OS1_S1 + 76) -
                p_over_q * *(b + 261 * OS1_S1 + 76) +
                one_over_two_q * *(b + 161 * OS1_S1 + 76) +
                one_over_two_q * *(b + 206 * OS1_S1 + 55);
            *(b + 206 * OS1_S1 + 105) =
                prefactor_x * *(b + 206 * OS1_S1 + 77) -
                p_over_q * *(b + 261 * OS1_S1 + 77) +
                one_over_two_q * *(b + 161 * OS1_S1 + 77);
            *(b + 206 * OS1_S1 + 106) =
                prefactor_x * *(b + 206 * OS1_S1 + 78) -
                p_over_q * *(b + 261 * OS1_S1 + 78) +
                one_over_two_q * *(b + 161 * OS1_S1 + 78);
            *(b + 206 * OS1_S1 + 107) =
                prefactor_x * *(b + 206 * OS1_S1 + 79) -
                p_over_q * *(b + 261 * OS1_S1 + 79) +
                one_over_two_q * *(b + 161 * OS1_S1 + 79);
            *(b + 206 * OS1_S1 + 108) =
                prefactor_x * *(b + 206 * OS1_S1 + 80) -
                p_over_q * *(b + 261 * OS1_S1 + 80) +
                one_over_two_q * *(b + 161 * OS1_S1 + 80);
            *(b + 206 * OS1_S1 + 109) =
                prefactor_x * *(b + 206 * OS1_S1 + 81) -
                p_over_q * *(b + 261 * OS1_S1 + 81) +
                one_over_two_q * *(b + 161 * OS1_S1 + 81);
            *(b + 206 * OS1_S1 + 110) =
                prefactor_x * *(b + 206 * OS1_S1 + 82) -
                p_over_q * *(b + 261 * OS1_S1 + 82) +
                one_over_two_q * *(b + 161 * OS1_S1 + 82);
            *(b + 206 * OS1_S1 + 111) =
                prefactor_x * *(b + 206 * OS1_S1 + 83) -
                p_over_q * *(b + 261 * OS1_S1 + 83) +
                one_over_two_q * *(b + 161 * OS1_S1 + 83);
            *(b + 206 * OS1_S1 + 112) =
                prefactor_y * *(b + 206 * OS1_S1 + 77) -
                p_over_q * *(b + 270 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 50);
            *(b + 206 * OS1_S1 + 113) =
                prefactor_z * *(b + 206 * OS1_S1 + 77) -
                p_over_q * *(b + 271 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 77);
            *(b + 206 * OS1_S1 + 114) =
                prefactor_z * *(b + 206 * OS1_S1 + 78) -
                p_over_q * *(b + 271 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 78) +
                one_over_two_q * *(b + 206 * OS1_S1 + 50);
            *(b + 206 * OS1_S1 + 115) =
                prefactor_z * *(b + 206 * OS1_S1 + 79) -
                p_over_q * *(b + 271 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 51);
            *(b + 206 * OS1_S1 + 116) =
                prefactor_y * *(b + 206 * OS1_S1 + 81) -
                p_over_q * *(b + 270 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 54);
            *(b + 206 * OS1_S1 + 117) =
                prefactor_y * *(b + 206 * OS1_S1 + 82) -
                p_over_q * *(b + 270 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 82) +
                one_over_two_q * *(b + 206 * OS1_S1 + 55);
            *(b + 206 * OS1_S1 + 118) =
                prefactor_y * *(b + 206 * OS1_S1 + 83) -
                p_over_q * *(b + 270 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 83);
            *(b + 206 * OS1_S1 + 119) =
                prefactor_z * *(b + 206 * OS1_S1 + 83) -
                p_over_q * *(b + 271 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 55);
            *(b + 207 * OS1_S1 + 84) =
                prefactor_x * *(b + 207 * OS1_S1 + 56) -
                p_over_q * *(b + 262 * OS1_S1 + 56) +
                one_over_two_q * *(b + 162 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 207 * OS1_S1 + 35);
            *(b + 207 * OS1_S1 + 85) =
                prefactor_y * *(b + 207 * OS1_S1 + 56) -
                p_over_q * *(b + 271 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 56);
            *(b + 207 * OS1_S1 + 86) =
                prefactor_z * *(b + 207 * OS1_S1 + 56) -
                p_over_q * *(b + 272 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 56);
            *(b + 207 * OS1_S1 + 87) =
                prefactor_y * *(b + 207 * OS1_S1 + 57) -
                p_over_q * *(b + 271 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 57) +
                one_over_two_q * *(b + 207 * OS1_S1 + 35);
            *(b + 207 * OS1_S1 + 88) =
                prefactor_y * *(b + 207 * OS1_S1 + 58) -
                p_over_q * *(b + 271 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 58);
            *(b + 207 * OS1_S1 + 89) =
                prefactor_z * *(b + 207 * OS1_S1 + 58) -
                p_over_q * *(b + 272 * OS1_S1 + 58) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 58) +
                one_over_two_q * *(b + 207 * OS1_S1 + 35);
            *(b + 207 * OS1_S1 + 90) =
                prefactor_y * *(b + 207 * OS1_S1 + 59) -
                p_over_q * *(b + 271 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 36);
            *(b + 207 * OS1_S1 + 91) =
                prefactor_z * *(b + 207 * OS1_S1 + 59) -
                p_over_q * *(b + 272 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 59);
            *(b + 207 * OS1_S1 + 92) =
                prefactor_y * *(b + 207 * OS1_S1 + 61) -
                p_over_q * *(b + 271 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 61);
            *(b + 207 * OS1_S1 + 93) =
                prefactor_z * *(b + 207 * OS1_S1 + 61) -
                p_over_q * *(b + 272 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 37);
            *(b + 207 * OS1_S1 + 94) =
                prefactor_x * *(b + 207 * OS1_S1 + 66) -
                p_over_q * *(b + 262 * OS1_S1 + 66) +
                one_over_two_q * *(b + 162 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 45);
            *(b + 207 * OS1_S1 + 95) =
                prefactor_z * *(b + 207 * OS1_S1 + 62) -
                p_over_q * *(b + 272 * OS1_S1 + 62) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 62);
            *(b + 207 * OS1_S1 + 96) =
                prefactor_y * *(b + 207 * OS1_S1 + 64) -
                p_over_q * *(b + 271 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 64) +
                one_over_two_q * *(b + 207 * OS1_S1 + 40);
            *(b + 207 * OS1_S1 + 97) =
                prefactor_y * *(b + 207 * OS1_S1 + 65) -
                p_over_q * *(b + 271 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 65);
            *(b + 207 * OS1_S1 + 98) =
                prefactor_x * *(b + 207 * OS1_S1 + 70) -
                p_over_q * *(b + 262 * OS1_S1 + 70) +
                one_over_two_q * *(b + 162 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 49);
            *(b + 207 * OS1_S1 + 99) =
                prefactor_x * *(b + 207 * OS1_S1 + 71) -
                p_over_q * *(b + 262 * OS1_S1 + 71) +
                one_over_two_q * *(b + 162 * OS1_S1 + 71) +
                one_over_two_q * *(b + 207 * OS1_S1 + 50);
            *(b + 207 * OS1_S1 + 100) =
                prefactor_z * *(b + 207 * OS1_S1 + 66) -
                p_over_q * *(b + 272 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 66);
            *(b + 207 * OS1_S1 + 101) =
                prefactor_x * *(b + 207 * OS1_S1 + 73) -
                p_over_q * *(b + 262 * OS1_S1 + 73) +
                one_over_two_q * *(b + 162 * OS1_S1 + 73) +
                one_over_two_q * *(b + 207 * OS1_S1 + 52);
            *(b + 207 * OS1_S1 + 102) =
                prefactor_x * *(b + 207 * OS1_S1 + 74) -
                p_over_q * *(b + 262 * OS1_S1 + 74) +
                one_over_two_q * *(b + 162 * OS1_S1 + 74) +
                one_over_two_q * *(b + 207 * OS1_S1 + 53);
            *(b + 207 * OS1_S1 + 103) =
                prefactor_y * *(b + 207 * OS1_S1 + 70) -
                p_over_q * *(b + 271 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 70);
            *(b + 207 * OS1_S1 + 104) =
                prefactor_x * *(b + 207 * OS1_S1 + 76) -
                p_over_q * *(b + 262 * OS1_S1 + 76) +
                one_over_two_q * *(b + 162 * OS1_S1 + 76) +
                one_over_two_q * *(b + 207 * OS1_S1 + 55);
            *(b + 207 * OS1_S1 + 105) =
                prefactor_x * *(b + 207 * OS1_S1 + 77) -
                p_over_q * *(b + 262 * OS1_S1 + 77) +
                one_over_two_q * *(b + 162 * OS1_S1 + 77);
            *(b + 207 * OS1_S1 + 106) =
                prefactor_x * *(b + 207 * OS1_S1 + 78) -
                p_over_q * *(b + 262 * OS1_S1 + 78) +
                one_over_two_q * *(b + 162 * OS1_S1 + 78);
            *(b + 207 * OS1_S1 + 107) =
                prefactor_x * *(b + 207 * OS1_S1 + 79) -
                p_over_q * *(b + 262 * OS1_S1 + 79) +
                one_over_two_q * *(b + 162 * OS1_S1 + 79);
            *(b + 207 * OS1_S1 + 108) =
                prefactor_x * *(b + 207 * OS1_S1 + 80) -
                p_over_q * *(b + 262 * OS1_S1 + 80) +
                one_over_two_q * *(b + 162 * OS1_S1 + 80);
            *(b + 207 * OS1_S1 + 109) =
                prefactor_x * *(b + 207 * OS1_S1 + 81) -
                p_over_q * *(b + 262 * OS1_S1 + 81) +
                one_over_two_q * *(b + 162 * OS1_S1 + 81);
            *(b + 207 * OS1_S1 + 110) =
                prefactor_x * *(b + 207 * OS1_S1 + 82) -
                p_over_q * *(b + 262 * OS1_S1 + 82) +
                one_over_two_q * *(b + 162 * OS1_S1 + 82);
            *(b + 207 * OS1_S1 + 111) =
                prefactor_x * *(b + 207 * OS1_S1 + 83) -
                p_over_q * *(b + 262 * OS1_S1 + 83) +
                one_over_two_q * *(b + 162 * OS1_S1 + 83);
            *(b + 207 * OS1_S1 + 112) =
                prefactor_y * *(b + 207 * OS1_S1 + 77) -
                p_over_q * *(b + 271 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 207 * OS1_S1 + 50);
            *(b + 207 * OS1_S1 + 113) =
                prefactor_z * *(b + 207 * OS1_S1 + 77) -
                p_over_q * *(b + 272 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 77);
            *(b + 207 * OS1_S1 + 114) =
                prefactor_z * *(b + 207 * OS1_S1 + 78) -
                p_over_q * *(b + 272 * OS1_S1 + 78) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 78) +
                one_over_two_q * *(b + 207 * OS1_S1 + 50);
            *(b + 207 * OS1_S1 + 115) =
                prefactor_z * *(b + 207 * OS1_S1 + 79) -
                p_over_q * *(b + 272 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 51);
            *(b + 207 * OS1_S1 + 116) =
                prefactor_y * *(b + 207 * OS1_S1 + 81) -
                p_over_q * *(b + 271 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 54);
            *(b + 207 * OS1_S1 + 117) =
                prefactor_y * *(b + 207 * OS1_S1 + 82) -
                p_over_q * *(b + 271 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 82) +
                one_over_two_q * *(b + 207 * OS1_S1 + 55);
            *(b + 207 * OS1_S1 + 118) =
                prefactor_y * *(b + 207 * OS1_S1 + 83) -
                p_over_q * *(b + 271 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 83);
            *(b + 207 * OS1_S1 + 119) =
                prefactor_z * *(b + 207 * OS1_S1 + 83) -
                p_over_q * *(b + 272 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 207 * OS1_S1 + 55);
            *(b + 208 * OS1_S1 + 84) =
                prefactor_x * *(b + 208 * OS1_S1 + 56) -
                p_over_q * *(b + 263 * OS1_S1 + 56) +
                one_over_two_q * *(b + 163 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 208 * OS1_S1 + 35);
            *(b + 208 * OS1_S1 + 85) =
                prefactor_y * *(b + 208 * OS1_S1 + 56) -
                p_over_q * *(b + 272 * OS1_S1 + 56) +
                one_over_two_q * *(b + 155 * OS1_S1 + 56);
            *(b + 208 * OS1_S1 + 86) =
                prefactor_z * *(b + 208 * OS1_S1 + 56) -
                p_over_q * *(b + 273 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 56);
            *(b + 208 * OS1_S1 + 87) =
                prefactor_y * *(b + 208 * OS1_S1 + 57) -
                p_over_q * *(b + 272 * OS1_S1 + 57) +
                one_over_two_q * *(b + 155 * OS1_S1 + 57) +
                one_over_two_q * *(b + 208 * OS1_S1 + 35);
            *(b + 208 * OS1_S1 + 88) =
                prefactor_y * *(b + 208 * OS1_S1 + 58) -
                p_over_q * *(b + 272 * OS1_S1 + 58) +
                one_over_two_q * *(b + 155 * OS1_S1 + 58);
            *(b + 208 * OS1_S1 + 89) =
                prefactor_z * *(b + 208 * OS1_S1 + 58) -
                p_over_q * *(b + 273 * OS1_S1 + 58) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 58) +
                one_over_two_q * *(b + 208 * OS1_S1 + 35);
            *(b + 208 * OS1_S1 + 90) =
                prefactor_y * *(b + 208 * OS1_S1 + 59) -
                p_over_q * *(b + 272 * OS1_S1 + 59) +
                one_over_two_q * *(b + 155 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 36);
            *(b + 208 * OS1_S1 + 91) =
                prefactor_z * *(b + 208 * OS1_S1 + 59) -
                p_over_q * *(b + 273 * OS1_S1 + 59) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 59);
            *(b + 208 * OS1_S1 + 92) =
                prefactor_y * *(b + 208 * OS1_S1 + 61) -
                p_over_q * *(b + 272 * OS1_S1 + 61) +
                one_over_two_q * *(b + 155 * OS1_S1 + 61);
            *(b + 208 * OS1_S1 + 93) =
                prefactor_z * *(b + 208 * OS1_S1 + 61) -
                p_over_q * *(b + 273 * OS1_S1 + 61) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 37);
            *(b + 208 * OS1_S1 + 94) =
                prefactor_x * *(b + 208 * OS1_S1 + 66) -
                p_over_q * *(b + 263 * OS1_S1 + 66) +
                one_over_two_q * *(b + 163 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 45);
            *(b + 208 * OS1_S1 + 95) =
                prefactor_z * *(b + 208 * OS1_S1 + 62) -
                p_over_q * *(b + 273 * OS1_S1 + 62) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 62);
            *(b + 208 * OS1_S1 + 96) =
                prefactor_y * *(b + 208 * OS1_S1 + 64) -
                p_over_q * *(b + 272 * OS1_S1 + 64) +
                one_over_two_q * *(b + 155 * OS1_S1 + 64) +
                one_over_two_q * *(b + 208 * OS1_S1 + 40);
            *(b + 208 * OS1_S1 + 97) =
                prefactor_y * *(b + 208 * OS1_S1 + 65) -
                p_over_q * *(b + 272 * OS1_S1 + 65) +
                one_over_two_q * *(b + 155 * OS1_S1 + 65);
            *(b + 208 * OS1_S1 + 98) =
                prefactor_x * *(b + 208 * OS1_S1 + 70) -
                p_over_q * *(b + 263 * OS1_S1 + 70) +
                one_over_two_q * *(b + 163 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 49);
            *(b + 208 * OS1_S1 + 99) =
                prefactor_x * *(b + 208 * OS1_S1 + 71) -
                p_over_q * *(b + 263 * OS1_S1 + 71) +
                one_over_two_q * *(b + 163 * OS1_S1 + 71) +
                one_over_two_q * *(b + 208 * OS1_S1 + 50);
            *(b + 208 * OS1_S1 + 100) =
                prefactor_z * *(b + 208 * OS1_S1 + 66) -
                p_over_q * *(b + 273 * OS1_S1 + 66) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 66);
            *(b + 208 * OS1_S1 + 101) =
                prefactor_x * *(b + 208 * OS1_S1 + 73) -
                p_over_q * *(b + 263 * OS1_S1 + 73) +
                one_over_two_q * *(b + 163 * OS1_S1 + 73) +
                one_over_two_q * *(b + 208 * OS1_S1 + 52);
            *(b + 208 * OS1_S1 + 102) =
                prefactor_y * *(b + 208 * OS1_S1 + 69) -
                p_over_q * *(b + 272 * OS1_S1 + 69) +
                one_over_two_q * *(b + 155 * OS1_S1 + 69) +
                one_over_two_q * *(b + 208 * OS1_S1 + 44);
            *(b + 208 * OS1_S1 + 103) =
                prefactor_y * *(b + 208 * OS1_S1 + 70) -
                p_over_q * *(b + 272 * OS1_S1 + 70) +
                one_over_two_q * *(b + 155 * OS1_S1 + 70);
            *(b + 208 * OS1_S1 + 104) =
                prefactor_x * *(b + 208 * OS1_S1 + 76) -
                p_over_q * *(b + 263 * OS1_S1 + 76) +
                one_over_two_q * *(b + 163 * OS1_S1 + 76) +
                one_over_two_q * *(b + 208 * OS1_S1 + 55);
            *(b + 208 * OS1_S1 + 105) =
                prefactor_x * *(b + 208 * OS1_S1 + 77) -
                p_over_q * *(b + 263 * OS1_S1 + 77) +
                one_over_two_q * *(b + 163 * OS1_S1 + 77);
            *(b + 208 * OS1_S1 + 106) =
                prefactor_x * *(b + 208 * OS1_S1 + 78) -
                p_over_q * *(b + 263 * OS1_S1 + 78) +
                one_over_two_q * *(b + 163 * OS1_S1 + 78);
            *(b + 208 * OS1_S1 + 107) =
                prefactor_x * *(b + 208 * OS1_S1 + 79) -
                p_over_q * *(b + 263 * OS1_S1 + 79) +
                one_over_two_q * *(b + 163 * OS1_S1 + 79);
            *(b + 208 * OS1_S1 + 108) =
                prefactor_x * *(b + 208 * OS1_S1 + 80) -
                p_over_q * *(b + 263 * OS1_S1 + 80) +
                one_over_two_q * *(b + 163 * OS1_S1 + 80);
            *(b + 208 * OS1_S1 + 109) =
                prefactor_x * *(b + 208 * OS1_S1 + 81) -
                p_over_q * *(b + 263 * OS1_S1 + 81) +
                one_over_two_q * *(b + 163 * OS1_S1 + 81);
            *(b + 208 * OS1_S1 + 110) =
                prefactor_y * *(b + 208 * OS1_S1 + 76) -
                p_over_q * *(b + 272 * OS1_S1 + 76) +
                one_over_two_q * *(b + 155 * OS1_S1 + 76);
            *(b + 208 * OS1_S1 + 111) =
                prefactor_x * *(b + 208 * OS1_S1 + 83) -
                p_over_q * *(b + 263 * OS1_S1 + 83) +
                one_over_two_q * *(b + 163 * OS1_S1 + 83);
            *(b + 208 * OS1_S1 + 112) =
                prefactor_y * *(b + 208 * OS1_S1 + 77) -
                p_over_q * *(b + 272 * OS1_S1 + 77) +
                one_over_two_q * *(b + 155 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 208 * OS1_S1 + 50);
            *(b + 208 * OS1_S1 + 113) =
                prefactor_z * *(b + 208 * OS1_S1 + 77) -
                p_over_q * *(b + 273 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 77);
            *(b + 208 * OS1_S1 + 114) =
                prefactor_z * *(b + 208 * OS1_S1 + 78) -
                p_over_q * *(b + 273 * OS1_S1 + 78) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 78) +
                one_over_two_q * *(b + 208 * OS1_S1 + 50);
            *(b + 208 * OS1_S1 + 115) =
                prefactor_z * *(b + 208 * OS1_S1 + 79) -
                p_over_q * *(b + 273 * OS1_S1 + 79) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 51);
            *(b + 208 * OS1_S1 + 116) =
                prefactor_y * *(b + 208 * OS1_S1 + 81) -
                p_over_q * *(b + 272 * OS1_S1 + 81) +
                one_over_two_q * *(b + 155 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 54);
            *(b + 208 * OS1_S1 + 117) =
                prefactor_y * *(b + 208 * OS1_S1 + 82) -
                p_over_q * *(b + 272 * OS1_S1 + 82) +
                one_over_two_q * *(b + 155 * OS1_S1 + 82) +
                one_over_two_q * *(b + 208 * OS1_S1 + 55);
            *(b + 208 * OS1_S1 + 118) =
                prefactor_y * *(b + 208 * OS1_S1 + 83) -
                p_over_q * *(b + 272 * OS1_S1 + 83) +
                one_over_two_q * *(b + 155 * OS1_S1 + 83);
            *(b + 208 * OS1_S1 + 119) =
                prefactor_z * *(b + 208 * OS1_S1 + 83) -
                p_over_q * *(b + 273 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 208 * OS1_S1 + 55);
            *(b + 209 * OS1_S1 + 84) =
                prefactor_x * *(b + 209 * OS1_S1 + 56) -
                p_over_q * *(b + 264 * OS1_S1 + 56) +
                one_over_two_q * *(b + 164 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 209 * OS1_S1 + 35);
            *(b + 209 * OS1_S1 + 85) = prefactor_y * *(b + 209 * OS1_S1 + 56) -
                                       p_over_q * *(b + 273 * OS1_S1 + 56);
            *(b + 209 * OS1_S1 + 86) =
                prefactor_z * *(b + 209 * OS1_S1 + 56) -
                p_over_q * *(b + 274 * OS1_S1 + 56) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 56);
            *(b + 209 * OS1_S1 + 87) =
                prefactor_y * *(b + 209 * OS1_S1 + 57) -
                p_over_q * *(b + 273 * OS1_S1 + 57) +
                one_over_two_q * *(b + 209 * OS1_S1 + 35);
            *(b + 209 * OS1_S1 + 88) = prefactor_y * *(b + 209 * OS1_S1 + 58) -
                                       p_over_q * *(b + 273 * OS1_S1 + 58);
            *(b + 209 * OS1_S1 + 89) =
                prefactor_z * *(b + 209 * OS1_S1 + 58) -
                p_over_q * *(b + 274 * OS1_S1 + 58) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 58) +
                one_over_two_q * *(b + 209 * OS1_S1 + 35);
            *(b + 209 * OS1_S1 + 90) =
                prefactor_y * *(b + 209 * OS1_S1 + 59) -
                p_over_q * *(b + 273 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 36);
            *(b + 209 * OS1_S1 + 91) =
                prefactor_z * *(b + 209 * OS1_S1 + 59) -
                p_over_q * *(b + 274 * OS1_S1 + 59) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 59);
            *(b + 209 * OS1_S1 + 92) = prefactor_y * *(b + 209 * OS1_S1 + 61) -
                                       p_over_q * *(b + 273 * OS1_S1 + 61);
            *(b + 209 * OS1_S1 + 93) =
                prefactor_z * *(b + 209 * OS1_S1 + 61) -
                p_over_q * *(b + 274 * OS1_S1 + 61) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 37);
            *(b + 209 * OS1_S1 + 94) =
                prefactor_x * *(b + 209 * OS1_S1 + 66) -
                p_over_q * *(b + 264 * OS1_S1 + 66) +
                one_over_two_q * *(b + 164 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 45);
            *(b + 209 * OS1_S1 + 95) =
                prefactor_z * *(b + 209 * OS1_S1 + 62) -
                p_over_q * *(b + 274 * OS1_S1 + 62) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 62);
            *(b + 209 * OS1_S1 + 96) =
                prefactor_y * *(b + 209 * OS1_S1 + 64) -
                p_over_q * *(b + 273 * OS1_S1 + 64) +
                one_over_two_q * *(b + 209 * OS1_S1 + 40);
            *(b + 209 * OS1_S1 + 97) = prefactor_y * *(b + 209 * OS1_S1 + 65) -
                                       p_over_q * *(b + 273 * OS1_S1 + 65);
            *(b + 209 * OS1_S1 + 98) =
                prefactor_x * *(b + 209 * OS1_S1 + 70) -
                p_over_q * *(b + 264 * OS1_S1 + 70) +
                one_over_two_q * *(b + 164 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 49);
            *(b + 209 * OS1_S1 + 99) =
                prefactor_x * *(b + 209 * OS1_S1 + 71) -
                p_over_q * *(b + 264 * OS1_S1 + 71) +
                one_over_two_q * *(b + 164 * OS1_S1 + 71) +
                one_over_two_q * *(b + 209 * OS1_S1 + 50);
            *(b + 209 * OS1_S1 + 100) =
                prefactor_z * *(b + 209 * OS1_S1 + 66) -
                p_over_q * *(b + 274 * OS1_S1 + 66) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 66);
            *(b + 209 * OS1_S1 + 101) =
                prefactor_x * *(b + 209 * OS1_S1 + 73) -
                p_over_q * *(b + 264 * OS1_S1 + 73) +
                one_over_two_q * *(b + 164 * OS1_S1 + 73) +
                one_over_two_q * *(b + 209 * OS1_S1 + 52);
            *(b + 209 * OS1_S1 + 102) =
                prefactor_y * *(b + 209 * OS1_S1 + 69) -
                p_over_q * *(b + 273 * OS1_S1 + 69) +
                one_over_two_q * *(b + 209 * OS1_S1 + 44);
            *(b + 209 * OS1_S1 + 103) = prefactor_y * *(b + 209 * OS1_S1 + 70) -
                                        p_over_q * *(b + 273 * OS1_S1 + 70);
            *(b + 209 * OS1_S1 + 104) =
                prefactor_x * *(b + 209 * OS1_S1 + 76) -
                p_over_q * *(b + 264 * OS1_S1 + 76) +
                one_over_two_q * *(b + 164 * OS1_S1 + 76) +
                one_over_two_q * *(b + 209 * OS1_S1 + 55);
            *(b + 209 * OS1_S1 + 105) =
                prefactor_x * *(b + 209 * OS1_S1 + 77) -
                p_over_q * *(b + 264 * OS1_S1 + 77) +
                one_over_two_q * *(b + 164 * OS1_S1 + 77);
            *(b + 209 * OS1_S1 + 106) =
                prefactor_x * *(b + 209 * OS1_S1 + 78) -
                p_over_q * *(b + 264 * OS1_S1 + 78) +
                one_over_two_q * *(b + 164 * OS1_S1 + 78);
            *(b + 209 * OS1_S1 + 107) =
                prefactor_x * *(b + 209 * OS1_S1 + 79) -
                p_over_q * *(b + 264 * OS1_S1 + 79) +
                one_over_two_q * *(b + 164 * OS1_S1 + 79);
            *(b + 209 * OS1_S1 + 108) =
                prefactor_x * *(b + 209 * OS1_S1 + 80) -
                p_over_q * *(b + 264 * OS1_S1 + 80) +
                one_over_two_q * *(b + 164 * OS1_S1 + 80);
            *(b + 209 * OS1_S1 + 109) =
                prefactor_x * *(b + 209 * OS1_S1 + 81) -
                p_over_q * *(b + 264 * OS1_S1 + 81) +
                one_over_two_q * *(b + 164 * OS1_S1 + 81);
            *(b + 209 * OS1_S1 + 110) = prefactor_y * *(b + 209 * OS1_S1 + 76) -
                                        p_over_q * *(b + 273 * OS1_S1 + 76);
            *(b + 209 * OS1_S1 + 111) =
                prefactor_x * *(b + 209 * OS1_S1 + 83) -
                p_over_q * *(b + 264 * OS1_S1 + 83) +
                one_over_two_q * *(b + 164 * OS1_S1 + 83);
            *(b + 209 * OS1_S1 + 112) =
                prefactor_y * *(b + 209 * OS1_S1 + 77) -
                p_over_q * *(b + 273 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 209 * OS1_S1 + 50);
            *(b + 209 * OS1_S1 + 113) =
                prefactor_z * *(b + 209 * OS1_S1 + 77) -
                p_over_q * *(b + 274 * OS1_S1 + 77) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 77);
            *(b + 209 * OS1_S1 + 114) =
                prefactor_z * *(b + 209 * OS1_S1 + 78) -
                p_over_q * *(b + 274 * OS1_S1 + 78) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 78) +
                one_over_two_q * *(b + 209 * OS1_S1 + 50);
            *(b + 209 * OS1_S1 + 115) =
                prefactor_z * *(b + 209 * OS1_S1 + 79) -
                p_over_q * *(b + 274 * OS1_S1 + 79) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 51);
            *(b + 209 * OS1_S1 + 116) =
                prefactor_y * *(b + 209 * OS1_S1 + 81) -
                p_over_q * *(b + 273 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 54);
            *(b + 209 * OS1_S1 + 117) =
                prefactor_y * *(b + 209 * OS1_S1 + 82) -
                p_over_q * *(b + 273 * OS1_S1 + 82) +
                one_over_two_q * *(b + 209 * OS1_S1 + 55);
            *(b + 209 * OS1_S1 + 118) = prefactor_y * *(b + 209 * OS1_S1 + 83) -
                                        p_over_q * *(b + 273 * OS1_S1 + 83);
            *(b + 209 * OS1_S1 + 119) =
                prefactor_z * *(b + 209 * OS1_S1 + 83) -
                p_over_q * *(b + 274 * OS1_S1 + 83) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 209 * OS1_S1 + 55);
            *(b + 210 * OS1_S1 + 84) =
                prefactor_x * *(b + 210 * OS1_S1 + 56) -
                p_over_q * *(b + 265 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 210 * OS1_S1 + 35);
            *(b + 210 * OS1_S1 + 85) =
                prefactor_y * *(b + 210 * OS1_S1 + 56) -
                p_over_q * *(b + 275 * OS1_S1 + 56) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 56);
            *(b + 210 * OS1_S1 + 86) = prefactor_z * *(b + 210 * OS1_S1 + 56) -
                                       p_over_q * *(b + 276 * OS1_S1 + 56);
            *(b + 210 * OS1_S1 + 87) =
                prefactor_y * *(b + 210 * OS1_S1 + 57) -
                p_over_q * *(b + 275 * OS1_S1 + 57) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 57) +
                one_over_two_q * *(b + 210 * OS1_S1 + 35);
            *(b + 210 * OS1_S1 + 88) = prefactor_z * *(b + 210 * OS1_S1 + 57) -
                                       p_over_q * *(b + 276 * OS1_S1 + 57);
            *(b + 210 * OS1_S1 + 89) =
                prefactor_z * *(b + 210 * OS1_S1 + 58) -
                p_over_q * *(b + 276 * OS1_S1 + 58) +
                one_over_two_q * *(b + 210 * OS1_S1 + 35);
            *(b + 210 * OS1_S1 + 90) =
                prefactor_y * *(b + 210 * OS1_S1 + 59) -
                p_over_q * *(b + 275 * OS1_S1 + 59) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 210 * OS1_S1 + 36);
            *(b + 210 * OS1_S1 + 91) = prefactor_z * *(b + 210 * OS1_S1 + 59) -
                                       p_over_q * *(b + 276 * OS1_S1 + 59);
            *(b + 210 * OS1_S1 + 92) =
                prefactor_y * *(b + 210 * OS1_S1 + 61) -
                p_over_q * *(b + 275 * OS1_S1 + 61) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 61);
            *(b + 210 * OS1_S1 + 93) =
                prefactor_z * *(b + 210 * OS1_S1 + 61) -
                p_over_q * *(b + 276 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 210 * OS1_S1 + 37);
            *(b + 210 * OS1_S1 + 94) =
                prefactor_x * *(b + 210 * OS1_S1 + 66) -
                p_over_q * *(b + 265 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 210 * OS1_S1 + 45);
            *(b + 210 * OS1_S1 + 95) = prefactor_z * *(b + 210 * OS1_S1 + 62) -
                                       p_over_q * *(b + 276 * OS1_S1 + 62);
            *(b + 210 * OS1_S1 + 96) =
                prefactor_z * *(b + 210 * OS1_S1 + 63) -
                p_over_q * *(b + 276 * OS1_S1 + 63) +
                one_over_two_q * *(b + 210 * OS1_S1 + 38);
            *(b + 210 * OS1_S1 + 97) =
                prefactor_y * *(b + 210 * OS1_S1 + 65) -
                p_over_q * *(b + 275 * OS1_S1 + 65) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 65);
            *(b + 210 * OS1_S1 + 98) =
                prefactor_x * *(b + 210 * OS1_S1 + 70) -
                p_over_q * *(b + 265 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 210 * OS1_S1 + 49);
            *(b + 210 * OS1_S1 + 99) =
                prefactor_x * *(b + 210 * OS1_S1 + 71) -
                p_over_q * *(b + 265 * OS1_S1 + 71) +
                one_over_two_q * *(b + 210 * OS1_S1 + 50);
            *(b + 210 * OS1_S1 + 100) = prefactor_z * *(b + 210 * OS1_S1 + 66) -
                                        p_over_q * *(b + 276 * OS1_S1 + 66);
            *(b + 210 * OS1_S1 + 101) =
                prefactor_z * *(b + 210 * OS1_S1 + 67) -
                p_over_q * *(b + 276 * OS1_S1 + 67) +
                one_over_two_q * *(b + 210 * OS1_S1 + 41);
            *(b + 210 * OS1_S1 + 102) =
                prefactor_x * *(b + 210 * OS1_S1 + 74) -
                p_over_q * *(b + 265 * OS1_S1 + 74) +
                one_over_two_q * *(b + 210 * OS1_S1 + 53);
            *(b + 210 * OS1_S1 + 103) =
                prefactor_y * *(b + 210 * OS1_S1 + 70) -
                p_over_q * *(b + 275 * OS1_S1 + 70) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 70);
            *(b + 210 * OS1_S1 + 104) =
                prefactor_x * *(b + 210 * OS1_S1 + 76) -
                p_over_q * *(b + 265 * OS1_S1 + 76) +
                one_over_two_q * *(b + 210 * OS1_S1 + 55);
            *(b + 210 * OS1_S1 + 105) = prefactor_x * *(b + 210 * OS1_S1 + 77) -
                                        p_over_q * *(b + 265 * OS1_S1 + 77);
            *(b + 210 * OS1_S1 + 106) = prefactor_z * *(b + 210 * OS1_S1 + 71) -
                                        p_over_q * *(b + 276 * OS1_S1 + 71);
            *(b + 210 * OS1_S1 + 107) = prefactor_x * *(b + 210 * OS1_S1 + 79) -
                                        p_over_q * *(b + 265 * OS1_S1 + 79);
            *(b + 210 * OS1_S1 + 108) = prefactor_x * *(b + 210 * OS1_S1 + 80) -
                                        p_over_q * *(b + 265 * OS1_S1 + 80);
            *(b + 210 * OS1_S1 + 109) = prefactor_x * *(b + 210 * OS1_S1 + 81) -
                                        p_over_q * *(b + 265 * OS1_S1 + 81);
            *(b + 210 * OS1_S1 + 110) = prefactor_x * *(b + 210 * OS1_S1 + 82) -
                                        p_over_q * *(b + 265 * OS1_S1 + 82);
            *(b + 210 * OS1_S1 + 111) = prefactor_x * *(b + 210 * OS1_S1 + 83) -
                                        p_over_q * *(b + 265 * OS1_S1 + 83);
            *(b + 210 * OS1_S1 + 112) =
                prefactor_y * *(b + 210 * OS1_S1 + 77) -
                p_over_q * *(b + 275 * OS1_S1 + 77) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 210 * OS1_S1 + 50);
            *(b + 210 * OS1_S1 + 113) = prefactor_z * *(b + 210 * OS1_S1 + 77) -
                                        p_over_q * *(b + 276 * OS1_S1 + 77);
            *(b + 210 * OS1_S1 + 114) =
                prefactor_z * *(b + 210 * OS1_S1 + 78) -
                p_over_q * *(b + 276 * OS1_S1 + 78) +
                one_over_two_q * *(b + 210 * OS1_S1 + 50);
            *(b + 210 * OS1_S1 + 115) =
                prefactor_z * *(b + 210 * OS1_S1 + 79) -
                p_over_q * *(b + 276 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 210 * OS1_S1 + 51);
            *(b + 210 * OS1_S1 + 116) =
                prefactor_y * *(b + 210 * OS1_S1 + 81) -
                p_over_q * *(b + 275 * OS1_S1 + 81) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 210 * OS1_S1 + 54);
            *(b + 210 * OS1_S1 + 117) =
                prefactor_y * *(b + 210 * OS1_S1 + 82) -
                p_over_q * *(b + 275 * OS1_S1 + 82) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 82) +
                one_over_two_q * *(b + 210 * OS1_S1 + 55);
            *(b + 210 * OS1_S1 + 118) =
                prefactor_y * *(b + 210 * OS1_S1 + 83) -
                p_over_q * *(b + 275 * OS1_S1 + 83) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 83);
            *(b + 210 * OS1_S1 + 119) =
                prefactor_z * *(b + 210 * OS1_S1 + 83) -
                p_over_q * *(b + 276 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 210 * OS1_S1 + 55);
            *(b + 211 * OS1_S1 + 84) =
                prefactor_x * *(b + 211 * OS1_S1 + 56) -
                p_over_q * *(b + 266 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 211 * OS1_S1 + 35);
            *(b + 211 * OS1_S1 + 85) =
                prefactor_y * *(b + 211 * OS1_S1 + 56) -
                p_over_q * *(b + 276 * OS1_S1 + 56) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 56);
            *(b + 211 * OS1_S1 + 86) =
                prefactor_z * *(b + 211 * OS1_S1 + 56) -
                p_over_q * *(b + 277 * OS1_S1 + 56) +
                one_over_two_q * *(b + 156 * OS1_S1 + 56);
            *(b + 211 * OS1_S1 + 87) =
                prefactor_y * *(b + 211 * OS1_S1 + 57) -
                p_over_q * *(b + 276 * OS1_S1 + 57) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 57) +
                one_over_two_q * *(b + 211 * OS1_S1 + 35);
            *(b + 211 * OS1_S1 + 88) =
                prefactor_z * *(b + 211 * OS1_S1 + 57) -
                p_over_q * *(b + 277 * OS1_S1 + 57) +
                one_over_two_q * *(b + 156 * OS1_S1 + 57);
            *(b + 211 * OS1_S1 + 89) =
                prefactor_z * *(b + 211 * OS1_S1 + 58) -
                p_over_q * *(b + 277 * OS1_S1 + 58) +
                one_over_two_q * *(b + 156 * OS1_S1 + 58) +
                one_over_two_q * *(b + 211 * OS1_S1 + 35);
            *(b + 211 * OS1_S1 + 90) =
                prefactor_y * *(b + 211 * OS1_S1 + 59) -
                p_over_q * *(b + 276 * OS1_S1 + 59) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 36);
            *(b + 211 * OS1_S1 + 91) =
                prefactor_z * *(b + 211 * OS1_S1 + 59) -
                p_over_q * *(b + 277 * OS1_S1 + 59) +
                one_over_two_q * *(b + 156 * OS1_S1 + 59);
            *(b + 211 * OS1_S1 + 92) =
                prefactor_y * *(b + 211 * OS1_S1 + 61) -
                p_over_q * *(b + 276 * OS1_S1 + 61) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 61);
            *(b + 211 * OS1_S1 + 93) =
                prefactor_z * *(b + 211 * OS1_S1 + 61) -
                p_over_q * *(b + 277 * OS1_S1 + 61) +
                one_over_two_q * *(b + 156 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 37);
            *(b + 211 * OS1_S1 + 94) =
                prefactor_x * *(b + 211 * OS1_S1 + 66) -
                p_over_q * *(b + 266 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 45);
            *(b + 211 * OS1_S1 + 95) =
                prefactor_z * *(b + 211 * OS1_S1 + 62) -
                p_over_q * *(b + 277 * OS1_S1 + 62) +
                one_over_two_q * *(b + 156 * OS1_S1 + 62);
            *(b + 211 * OS1_S1 + 96) =
                prefactor_z * *(b + 211 * OS1_S1 + 63) -
                p_over_q * *(b + 277 * OS1_S1 + 63) +
                one_over_two_q * *(b + 156 * OS1_S1 + 63) +
                one_over_two_q * *(b + 211 * OS1_S1 + 38);
            *(b + 211 * OS1_S1 + 97) =
                prefactor_y * *(b + 211 * OS1_S1 + 65) -
                p_over_q * *(b + 276 * OS1_S1 + 65) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 65);
            *(b + 211 * OS1_S1 + 98) =
                prefactor_x * *(b + 211 * OS1_S1 + 70) -
                p_over_q * *(b + 266 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 49);
            *(b + 211 * OS1_S1 + 99) =
                prefactor_x * *(b + 211 * OS1_S1 + 71) -
                p_over_q * *(b + 266 * OS1_S1 + 71) +
                one_over_two_q * *(b + 211 * OS1_S1 + 50);
            *(b + 211 * OS1_S1 + 100) =
                prefactor_z * *(b + 211 * OS1_S1 + 66) -
                p_over_q * *(b + 277 * OS1_S1 + 66) +
                one_over_two_q * *(b + 156 * OS1_S1 + 66);
            *(b + 211 * OS1_S1 + 101) =
                prefactor_x * *(b + 211 * OS1_S1 + 73) -
                p_over_q * *(b + 266 * OS1_S1 + 73) +
                one_over_two_q * *(b + 211 * OS1_S1 + 52);
            *(b + 211 * OS1_S1 + 102) =
                prefactor_x * *(b + 211 * OS1_S1 + 74) -
                p_over_q * *(b + 266 * OS1_S1 + 74) +
                one_over_two_q * *(b + 211 * OS1_S1 + 53);
            *(b + 211 * OS1_S1 + 103) =
                prefactor_y * *(b + 211 * OS1_S1 + 70) -
                p_over_q * *(b + 276 * OS1_S1 + 70) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 70);
            *(b + 211 * OS1_S1 + 104) =
                prefactor_x * *(b + 211 * OS1_S1 + 76) -
                p_over_q * *(b + 266 * OS1_S1 + 76) +
                one_over_two_q * *(b + 211 * OS1_S1 + 55);
            *(b + 211 * OS1_S1 + 105) = prefactor_x * *(b + 211 * OS1_S1 + 77) -
                                        p_over_q * *(b + 266 * OS1_S1 + 77);
            *(b + 211 * OS1_S1 + 106) = prefactor_x * *(b + 211 * OS1_S1 + 78) -
                                        p_over_q * *(b + 266 * OS1_S1 + 78);
            *(b + 211 * OS1_S1 + 107) = prefactor_x * *(b + 211 * OS1_S1 + 79) -
                                        p_over_q * *(b + 266 * OS1_S1 + 79);
            *(b + 211 * OS1_S1 + 108) = prefactor_x * *(b + 211 * OS1_S1 + 80) -
                                        p_over_q * *(b + 266 * OS1_S1 + 80);
            *(b + 211 * OS1_S1 + 109) = prefactor_x * *(b + 211 * OS1_S1 + 81) -
                                        p_over_q * *(b + 266 * OS1_S1 + 81);
            *(b + 211 * OS1_S1 + 110) = prefactor_x * *(b + 211 * OS1_S1 + 82) -
                                        p_over_q * *(b + 266 * OS1_S1 + 82);
            *(b + 211 * OS1_S1 + 111) = prefactor_x * *(b + 211 * OS1_S1 + 83) -
                                        p_over_q * *(b + 266 * OS1_S1 + 83);
            *(b + 211 * OS1_S1 + 112) =
                prefactor_y * *(b + 211 * OS1_S1 + 77) -
                p_over_q * *(b + 276 * OS1_S1 + 77) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 211 * OS1_S1 + 50);
            *(b + 211 * OS1_S1 + 113) =
                prefactor_z * *(b + 211 * OS1_S1 + 77) -
                p_over_q * *(b + 277 * OS1_S1 + 77) +
                one_over_two_q * *(b + 156 * OS1_S1 + 77);
            *(b + 211 * OS1_S1 + 114) =
                prefactor_z * *(b + 211 * OS1_S1 + 78) -
                p_over_q * *(b + 277 * OS1_S1 + 78) +
                one_over_two_q * *(b + 156 * OS1_S1 + 78) +
                one_over_two_q * *(b + 211 * OS1_S1 + 50);
            *(b + 211 * OS1_S1 + 115) =
                prefactor_z * *(b + 211 * OS1_S1 + 79) -
                p_over_q * *(b + 277 * OS1_S1 + 79) +
                one_over_two_q * *(b + 156 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 51);
            *(b + 211 * OS1_S1 + 116) =
                prefactor_y * *(b + 211 * OS1_S1 + 81) -
                p_over_q * *(b + 276 * OS1_S1 + 81) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 54);
            *(b + 211 * OS1_S1 + 117) =
                prefactor_y * *(b + 211 * OS1_S1 + 82) -
                p_over_q * *(b + 276 * OS1_S1 + 82) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 82) +
                one_over_two_q * *(b + 211 * OS1_S1 + 55);
            *(b + 211 * OS1_S1 + 118) =
                prefactor_y * *(b + 211 * OS1_S1 + 83) -
                p_over_q * *(b + 276 * OS1_S1 + 83) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 83);
            *(b + 211 * OS1_S1 + 119) =
                prefactor_z * *(b + 211 * OS1_S1 + 83) -
                p_over_q * *(b + 277 * OS1_S1 + 83) +
                one_over_two_q * *(b + 156 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 211 * OS1_S1 + 55);
            *(b + 212 * OS1_S1 + 84) =
                prefactor_x * *(b + 212 * OS1_S1 + 56) -
                p_over_q * *(b + 267 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 212 * OS1_S1 + 35);
            *(b + 212 * OS1_S1 + 85) =
                prefactor_y * *(b + 212 * OS1_S1 + 56) -
                p_over_q * *(b + 277 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 56);
            *(b + 212 * OS1_S1 + 86) =
                prefactor_z * *(b + 212 * OS1_S1 + 56) -
                p_over_q * *(b + 278 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 56);
            *(b + 212 * OS1_S1 + 87) =
                prefactor_y * *(b + 212 * OS1_S1 + 57) -
                p_over_q * *(b + 277 * OS1_S1 + 57) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 57) +
                one_over_two_q * *(b + 212 * OS1_S1 + 35);
            *(b + 212 * OS1_S1 + 88) =
                prefactor_z * *(b + 212 * OS1_S1 + 57) -
                p_over_q * *(b + 278 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 57);
            *(b + 212 * OS1_S1 + 89) =
                prefactor_z * *(b + 212 * OS1_S1 + 58) -
                p_over_q * *(b + 278 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 58) +
                one_over_two_q * *(b + 212 * OS1_S1 + 35);
            *(b + 212 * OS1_S1 + 90) =
                prefactor_y * *(b + 212 * OS1_S1 + 59) -
                p_over_q * *(b + 277 * OS1_S1 + 59) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 212 * OS1_S1 + 36);
            *(b + 212 * OS1_S1 + 91) =
                prefactor_z * *(b + 212 * OS1_S1 + 59) -
                p_over_q * *(b + 278 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 59);
            *(b + 212 * OS1_S1 + 92) =
                prefactor_y * *(b + 212 * OS1_S1 + 61) -
                p_over_q * *(b + 277 * OS1_S1 + 61) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 61);
            *(b + 212 * OS1_S1 + 93) =
                prefactor_z * *(b + 212 * OS1_S1 + 61) -
                p_over_q * *(b + 278 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 212 * OS1_S1 + 37);
            *(b + 212 * OS1_S1 + 94) =
                prefactor_x * *(b + 212 * OS1_S1 + 66) -
                p_over_q * *(b + 267 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 212 * OS1_S1 + 45);
            *(b + 212 * OS1_S1 + 95) =
                prefactor_z * *(b + 212 * OS1_S1 + 62) -
                p_over_q * *(b + 278 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 62);
            *(b + 212 * OS1_S1 + 96) =
                prefactor_z * *(b + 212 * OS1_S1 + 63) -
                p_over_q * *(b + 278 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 63) +
                one_over_two_q * *(b + 212 * OS1_S1 + 38);
            *(b + 212 * OS1_S1 + 97) =
                prefactor_y * *(b + 212 * OS1_S1 + 65) -
                p_over_q * *(b + 277 * OS1_S1 + 65) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 65);
            *(b + 212 * OS1_S1 + 98) =
                prefactor_x * *(b + 212 * OS1_S1 + 70) -
                p_over_q * *(b + 267 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 212 * OS1_S1 + 49);
            *(b + 212 * OS1_S1 + 99) =
                prefactor_x * *(b + 212 * OS1_S1 + 71) -
                p_over_q * *(b + 267 * OS1_S1 + 71) +
                one_over_two_q * *(b + 212 * OS1_S1 + 50);
            *(b + 212 * OS1_S1 + 100) =
                prefactor_z * *(b + 212 * OS1_S1 + 66) -
                p_over_q * *(b + 278 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 66);
            *(b + 212 * OS1_S1 + 101) =
                prefactor_x * *(b + 212 * OS1_S1 + 73) -
                p_over_q * *(b + 267 * OS1_S1 + 73) +
                one_over_two_q * *(b + 212 * OS1_S1 + 52);
            *(b + 212 * OS1_S1 + 102) =
                prefactor_x * *(b + 212 * OS1_S1 + 74) -
                p_over_q * *(b + 267 * OS1_S1 + 74) +
                one_over_two_q * *(b + 212 * OS1_S1 + 53);
            *(b + 212 * OS1_S1 + 103) =
                prefactor_y * *(b + 212 * OS1_S1 + 70) -
                p_over_q * *(b + 277 * OS1_S1 + 70) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 70);
            *(b + 212 * OS1_S1 + 104) =
                prefactor_x * *(b + 212 * OS1_S1 + 76) -
                p_over_q * *(b + 267 * OS1_S1 + 76) +
                one_over_two_q * *(b + 212 * OS1_S1 + 55);
            *(b + 212 * OS1_S1 + 105) = prefactor_x * *(b + 212 * OS1_S1 + 77) -
                                        p_over_q * *(b + 267 * OS1_S1 + 77);
            *(b + 212 * OS1_S1 + 106) = prefactor_x * *(b + 212 * OS1_S1 + 78) -
                                        p_over_q * *(b + 267 * OS1_S1 + 78);
            *(b + 212 * OS1_S1 + 107) = prefactor_x * *(b + 212 * OS1_S1 + 79) -
                                        p_over_q * *(b + 267 * OS1_S1 + 79);
            *(b + 212 * OS1_S1 + 108) = prefactor_x * *(b + 212 * OS1_S1 + 80) -
                                        p_over_q * *(b + 267 * OS1_S1 + 80);
            *(b + 212 * OS1_S1 + 109) = prefactor_x * *(b + 212 * OS1_S1 + 81) -
                                        p_over_q * *(b + 267 * OS1_S1 + 81);
            *(b + 212 * OS1_S1 + 110) = prefactor_x * *(b + 212 * OS1_S1 + 82) -
                                        p_over_q * *(b + 267 * OS1_S1 + 82);
            *(b + 212 * OS1_S1 + 111) = prefactor_x * *(b + 212 * OS1_S1 + 83) -
                                        p_over_q * *(b + 267 * OS1_S1 + 83);
            *(b + 212 * OS1_S1 + 112) =
                prefactor_y * *(b + 212 * OS1_S1 + 77) -
                p_over_q * *(b + 277 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 212 * OS1_S1 + 50);
            *(b + 212 * OS1_S1 + 113) =
                prefactor_z * *(b + 212 * OS1_S1 + 77) -
                p_over_q * *(b + 278 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 77);
            *(b + 212 * OS1_S1 + 114) =
                prefactor_z * *(b + 212 * OS1_S1 + 78) -
                p_over_q * *(b + 278 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 78) +
                one_over_two_q * *(b + 212 * OS1_S1 + 50);
            *(b + 212 * OS1_S1 + 115) =
                prefactor_z * *(b + 212 * OS1_S1 + 79) -
                p_over_q * *(b + 278 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 212 * OS1_S1 + 51);
            *(b + 212 * OS1_S1 + 116) =
                prefactor_y * *(b + 212 * OS1_S1 + 81) -
                p_over_q * *(b + 277 * OS1_S1 + 81) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 212 * OS1_S1 + 54);
            *(b + 212 * OS1_S1 + 117) =
                prefactor_y * *(b + 212 * OS1_S1 + 82) -
                p_over_q * *(b + 277 * OS1_S1 + 82) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 82) +
                one_over_two_q * *(b + 212 * OS1_S1 + 55);
            *(b + 212 * OS1_S1 + 118) =
                prefactor_y * *(b + 212 * OS1_S1 + 83) -
                p_over_q * *(b + 277 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 83);
            *(b + 212 * OS1_S1 + 119) =
                prefactor_z * *(b + 212 * OS1_S1 + 83) -
                p_over_q * *(b + 278 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 212 * OS1_S1 + 55);
            *(b + 213 * OS1_S1 + 84) =
                prefactor_x * *(b + 213 * OS1_S1 + 56) -
                p_over_q * *(b + 268 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 213 * OS1_S1 + 35);
            *(b + 213 * OS1_S1 + 85) =
                prefactor_y * *(b + 213 * OS1_S1 + 56) -
                p_over_q * *(b + 278 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 56);
            *(b + 213 * OS1_S1 + 86) =
                prefactor_z * *(b + 213 * OS1_S1 + 56) -
                p_over_q * *(b + 279 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 56);
            *(b + 213 * OS1_S1 + 87) =
                prefactor_y * *(b + 213 * OS1_S1 + 57) -
                p_over_q * *(b + 278 * OS1_S1 + 57) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 57) +
                one_over_two_q * *(b + 213 * OS1_S1 + 35);
            *(b + 213 * OS1_S1 + 88) =
                prefactor_z * *(b + 213 * OS1_S1 + 57) -
                p_over_q * *(b + 279 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 57);
            *(b + 213 * OS1_S1 + 89) =
                prefactor_z * *(b + 213 * OS1_S1 + 58) -
                p_over_q * *(b + 279 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 58) +
                one_over_two_q * *(b + 213 * OS1_S1 + 35);
            *(b + 213 * OS1_S1 + 90) =
                prefactor_y * *(b + 213 * OS1_S1 + 59) -
                p_over_q * *(b + 278 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 213 * OS1_S1 + 36);
            *(b + 213 * OS1_S1 + 91) =
                prefactor_z * *(b + 213 * OS1_S1 + 59) -
                p_over_q * *(b + 279 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 59);
            *(b + 213 * OS1_S1 + 92) =
                prefactor_y * *(b + 213 * OS1_S1 + 61) -
                p_over_q * *(b + 278 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 61);
            *(b + 213 * OS1_S1 + 93) =
                prefactor_z * *(b + 213 * OS1_S1 + 61) -
                p_over_q * *(b + 279 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 213 * OS1_S1 + 37);
            *(b + 213 * OS1_S1 + 94) =
                prefactor_x * *(b + 213 * OS1_S1 + 66) -
                p_over_q * *(b + 268 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 213 * OS1_S1 + 45);
            *(b + 213 * OS1_S1 + 95) =
                prefactor_z * *(b + 213 * OS1_S1 + 62) -
                p_over_q * *(b + 279 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 62);
            *(b + 213 * OS1_S1 + 96) =
                prefactor_z * *(b + 213 * OS1_S1 + 63) -
                p_over_q * *(b + 279 * OS1_S1 + 63) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 63) +
                one_over_two_q * *(b + 213 * OS1_S1 + 38);
            *(b + 213 * OS1_S1 + 97) =
                prefactor_y * *(b + 213 * OS1_S1 + 65) -
                p_over_q * *(b + 278 * OS1_S1 + 65) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 65);
            *(b + 213 * OS1_S1 + 98) =
                prefactor_x * *(b + 213 * OS1_S1 + 70) -
                p_over_q * *(b + 268 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 213 * OS1_S1 + 49);
            *(b + 213 * OS1_S1 + 99) =
                prefactor_x * *(b + 213 * OS1_S1 + 71) -
                p_over_q * *(b + 268 * OS1_S1 + 71) +
                one_over_two_q * *(b + 213 * OS1_S1 + 50);
            *(b + 213 * OS1_S1 + 100) =
                prefactor_z * *(b + 213 * OS1_S1 + 66) -
                p_over_q * *(b + 279 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 66);
            *(b + 213 * OS1_S1 + 101) =
                prefactor_x * *(b + 213 * OS1_S1 + 73) -
                p_over_q * *(b + 268 * OS1_S1 + 73) +
                one_over_two_q * *(b + 213 * OS1_S1 + 52);
            *(b + 213 * OS1_S1 + 102) =
                prefactor_x * *(b + 213 * OS1_S1 + 74) -
                p_over_q * *(b + 268 * OS1_S1 + 74) +
                one_over_two_q * *(b + 213 * OS1_S1 + 53);
            *(b + 213 * OS1_S1 + 103) =
                prefactor_y * *(b + 213 * OS1_S1 + 70) -
                p_over_q * *(b + 278 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 70);
            *(b + 213 * OS1_S1 + 104) =
                prefactor_x * *(b + 213 * OS1_S1 + 76) -
                p_over_q * *(b + 268 * OS1_S1 + 76) +
                one_over_two_q * *(b + 213 * OS1_S1 + 55);
            *(b + 213 * OS1_S1 + 105) = prefactor_x * *(b + 213 * OS1_S1 + 77) -
                                        p_over_q * *(b + 268 * OS1_S1 + 77);
            *(b + 213 * OS1_S1 + 106) = prefactor_x * *(b + 213 * OS1_S1 + 78) -
                                        p_over_q * *(b + 268 * OS1_S1 + 78);
            *(b + 213 * OS1_S1 + 107) = prefactor_x * *(b + 213 * OS1_S1 + 79) -
                                        p_over_q * *(b + 268 * OS1_S1 + 79);
            *(b + 213 * OS1_S1 + 108) = prefactor_x * *(b + 213 * OS1_S1 + 80) -
                                        p_over_q * *(b + 268 * OS1_S1 + 80);
            *(b + 213 * OS1_S1 + 109) = prefactor_x * *(b + 213 * OS1_S1 + 81) -
                                        p_over_q * *(b + 268 * OS1_S1 + 81);
            *(b + 213 * OS1_S1 + 110) = prefactor_x * *(b + 213 * OS1_S1 + 82) -
                                        p_over_q * *(b + 268 * OS1_S1 + 82);
            *(b + 213 * OS1_S1 + 111) = prefactor_x * *(b + 213 * OS1_S1 + 83) -
                                        p_over_q * *(b + 268 * OS1_S1 + 83);
            *(b + 213 * OS1_S1 + 112) =
                prefactor_y * *(b + 213 * OS1_S1 + 77) -
                p_over_q * *(b + 278 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 213 * OS1_S1 + 50);
            *(b + 213 * OS1_S1 + 113) =
                prefactor_z * *(b + 213 * OS1_S1 + 77) -
                p_over_q * *(b + 279 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 77);
            *(b + 213 * OS1_S1 + 114) =
                prefactor_z * *(b + 213 * OS1_S1 + 78) -
                p_over_q * *(b + 279 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 78) +
                one_over_two_q * *(b + 213 * OS1_S1 + 50);
            *(b + 213 * OS1_S1 + 115) =
                prefactor_z * *(b + 213 * OS1_S1 + 79) -
                p_over_q * *(b + 279 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 213 * OS1_S1 + 51);
            *(b + 213 * OS1_S1 + 116) =
                prefactor_y * *(b + 213 * OS1_S1 + 81) -
                p_over_q * *(b + 278 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 213 * OS1_S1 + 54);
            *(b + 213 * OS1_S1 + 117) =
                prefactor_y * *(b + 213 * OS1_S1 + 82) -
                p_over_q * *(b + 278 * OS1_S1 + 82) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 82) +
                one_over_two_q * *(b + 213 * OS1_S1 + 55);
            *(b + 213 * OS1_S1 + 118) =
                prefactor_y * *(b + 213 * OS1_S1 + 83) -
                p_over_q * *(b + 278 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 83);
            *(b + 213 * OS1_S1 + 119) =
                prefactor_z * *(b + 213 * OS1_S1 + 83) -
                p_over_q * *(b + 279 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 213 * OS1_S1 + 55);
            *(b + 214 * OS1_S1 + 84) =
                prefactor_x * *(b + 214 * OS1_S1 + 56) -
                p_over_q * *(b + 269 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 35);
            *(b + 214 * OS1_S1 + 85) =
                prefactor_y * *(b + 214 * OS1_S1 + 56) -
                p_over_q * *(b + 279 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 56);
            *(b + 214 * OS1_S1 + 86) =
                prefactor_z * *(b + 214 * OS1_S1 + 56) -
                p_over_q * *(b + 280 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 56);
            *(b + 214 * OS1_S1 + 87) =
                prefactor_y * *(b + 214 * OS1_S1 + 57) -
                p_over_q * *(b + 279 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 57) +
                one_over_two_q * *(b + 214 * OS1_S1 + 35);
            *(b + 214 * OS1_S1 + 88) =
                prefactor_z * *(b + 214 * OS1_S1 + 57) -
                p_over_q * *(b + 280 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 57);
            *(b + 214 * OS1_S1 + 89) =
                prefactor_z * *(b + 214 * OS1_S1 + 58) -
                p_over_q * *(b + 280 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 58) +
                one_over_two_q * *(b + 214 * OS1_S1 + 35);
            *(b + 214 * OS1_S1 + 90) =
                prefactor_y * *(b + 214 * OS1_S1 + 59) -
                p_over_q * *(b + 279 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 214 * OS1_S1 + 36);
            *(b + 214 * OS1_S1 + 91) =
                prefactor_z * *(b + 214 * OS1_S1 + 59) -
                p_over_q * *(b + 280 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 59);
            *(b + 214 * OS1_S1 + 92) =
                prefactor_y * *(b + 214 * OS1_S1 + 61) -
                p_over_q * *(b + 279 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 61);
            *(b + 214 * OS1_S1 + 93) =
                prefactor_z * *(b + 214 * OS1_S1 + 61) -
                p_over_q * *(b + 280 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 214 * OS1_S1 + 37);
            *(b + 214 * OS1_S1 + 94) =
                prefactor_x * *(b + 214 * OS1_S1 + 66) -
                p_over_q * *(b + 269 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 214 * OS1_S1 + 45);
            *(b + 214 * OS1_S1 + 95) =
                prefactor_z * *(b + 214 * OS1_S1 + 62) -
                p_over_q * *(b + 280 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 62);
            *(b + 214 * OS1_S1 + 96) =
                prefactor_z * *(b + 214 * OS1_S1 + 63) -
                p_over_q * *(b + 280 * OS1_S1 + 63) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 63) +
                one_over_two_q * *(b + 214 * OS1_S1 + 38);
            *(b + 214 * OS1_S1 + 97) =
                prefactor_y * *(b + 214 * OS1_S1 + 65) -
                p_over_q * *(b + 279 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 65);
            *(b + 214 * OS1_S1 + 98) =
                prefactor_x * *(b + 214 * OS1_S1 + 70) -
                p_over_q * *(b + 269 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 214 * OS1_S1 + 49);
            *(b + 214 * OS1_S1 + 99) =
                prefactor_x * *(b + 214 * OS1_S1 + 71) -
                p_over_q * *(b + 269 * OS1_S1 + 71) +
                one_over_two_q * *(b + 214 * OS1_S1 + 50);
            *(b + 214 * OS1_S1 + 100) =
                prefactor_z * *(b + 214 * OS1_S1 + 66) -
                p_over_q * *(b + 280 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 66);
            *(b + 214 * OS1_S1 + 101) =
                prefactor_x * *(b + 214 * OS1_S1 + 73) -
                p_over_q * *(b + 269 * OS1_S1 + 73) +
                one_over_two_q * *(b + 214 * OS1_S1 + 52);
            *(b + 214 * OS1_S1 + 102) =
                prefactor_x * *(b + 214 * OS1_S1 + 74) -
                p_over_q * *(b + 269 * OS1_S1 + 74) +
                one_over_two_q * *(b + 214 * OS1_S1 + 53);
            *(b + 214 * OS1_S1 + 103) =
                prefactor_y * *(b + 214 * OS1_S1 + 70) -
                p_over_q * *(b + 279 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 70);
            *(b + 214 * OS1_S1 + 104) =
                prefactor_x * *(b + 214 * OS1_S1 + 76) -
                p_over_q * *(b + 269 * OS1_S1 + 76) +
                one_over_two_q * *(b + 214 * OS1_S1 + 55);
            *(b + 214 * OS1_S1 + 105) = prefactor_x * *(b + 214 * OS1_S1 + 77) -
                                        p_over_q * *(b + 269 * OS1_S1 + 77);
            *(b + 214 * OS1_S1 + 106) = prefactor_x * *(b + 214 * OS1_S1 + 78) -
                                        p_over_q * *(b + 269 * OS1_S1 + 78);
            *(b + 214 * OS1_S1 + 107) = prefactor_x * *(b + 214 * OS1_S1 + 79) -
                                        p_over_q * *(b + 269 * OS1_S1 + 79);
            *(b + 214 * OS1_S1 + 108) = prefactor_x * *(b + 214 * OS1_S1 + 80) -
                                        p_over_q * *(b + 269 * OS1_S1 + 80);
            *(b + 214 * OS1_S1 + 109) = prefactor_x * *(b + 214 * OS1_S1 + 81) -
                                        p_over_q * *(b + 269 * OS1_S1 + 81);
            *(b + 214 * OS1_S1 + 110) = prefactor_x * *(b + 214 * OS1_S1 + 82) -
                                        p_over_q * *(b + 269 * OS1_S1 + 82);
            *(b + 214 * OS1_S1 + 111) = prefactor_x * *(b + 214 * OS1_S1 + 83) -
                                        p_over_q * *(b + 269 * OS1_S1 + 83);
            *(b + 214 * OS1_S1 + 112) =
                prefactor_y * *(b + 214 * OS1_S1 + 77) -
                p_over_q * *(b + 279 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 50);
            *(b + 214 * OS1_S1 + 113) =
                prefactor_z * *(b + 214 * OS1_S1 + 77) -
                p_over_q * *(b + 280 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 77);
            *(b + 214 * OS1_S1 + 114) =
                prefactor_z * *(b + 214 * OS1_S1 + 78) -
                p_over_q * *(b + 280 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 78) +
                one_over_two_q * *(b + 214 * OS1_S1 + 50);
            *(b + 214 * OS1_S1 + 115) =
                prefactor_z * *(b + 214 * OS1_S1 + 79) -
                p_over_q * *(b + 280 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 214 * OS1_S1 + 51);
            *(b + 214 * OS1_S1 + 116) =
                prefactor_y * *(b + 214 * OS1_S1 + 81) -
                p_over_q * *(b + 279 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 214 * OS1_S1 + 54);
            *(b + 214 * OS1_S1 + 117) =
                prefactor_y * *(b + 214 * OS1_S1 + 82) -
                p_over_q * *(b + 279 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 82) +
                one_over_two_q * *(b + 214 * OS1_S1 + 55);
            *(b + 214 * OS1_S1 + 118) =
                prefactor_y * *(b + 214 * OS1_S1 + 83) -
                p_over_q * *(b + 279 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 83);
            *(b + 214 * OS1_S1 + 119) =
                prefactor_z * *(b + 214 * OS1_S1 + 83) -
                p_over_q * *(b + 280 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 55);
            *(b + 215 * OS1_S1 + 84) =
                prefactor_x * *(b + 215 * OS1_S1 + 56) -
                p_over_q * *(b + 270 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 35);
            *(b + 215 * OS1_S1 + 85) =
                prefactor_y * *(b + 215 * OS1_S1 + 56) -
                p_over_q * *(b + 280 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 56);
            *(b + 215 * OS1_S1 + 86) =
                prefactor_z * *(b + 215 * OS1_S1 + 56) -
                p_over_q * *(b + 281 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 56);
            *(b + 215 * OS1_S1 + 87) =
                prefactor_y * *(b + 215 * OS1_S1 + 57) -
                p_over_q * *(b + 280 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 57) +
                one_over_two_q * *(b + 215 * OS1_S1 + 35);
            *(b + 215 * OS1_S1 + 88) =
                prefactor_y * *(b + 215 * OS1_S1 + 58) -
                p_over_q * *(b + 280 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 58);
            *(b + 215 * OS1_S1 + 89) =
                prefactor_z * *(b + 215 * OS1_S1 + 58) -
                p_over_q * *(b + 281 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 58) +
                one_over_two_q * *(b + 215 * OS1_S1 + 35);
            *(b + 215 * OS1_S1 + 90) =
                prefactor_y * *(b + 215 * OS1_S1 + 59) -
                p_over_q * *(b + 280 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 215 * OS1_S1 + 36);
            *(b + 215 * OS1_S1 + 91) =
                prefactor_z * *(b + 215 * OS1_S1 + 59) -
                p_over_q * *(b + 281 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 59);
            *(b + 215 * OS1_S1 + 92) =
                prefactor_y * *(b + 215 * OS1_S1 + 61) -
                p_over_q * *(b + 280 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 61);
            *(b + 215 * OS1_S1 + 93) =
                prefactor_z * *(b + 215 * OS1_S1 + 61) -
                p_over_q * *(b + 281 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 215 * OS1_S1 + 37);
            *(b + 215 * OS1_S1 + 94) =
                prefactor_x * *(b + 215 * OS1_S1 + 66) -
                p_over_q * *(b + 270 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 215 * OS1_S1 + 45);
            *(b + 215 * OS1_S1 + 95) =
                prefactor_z * *(b + 215 * OS1_S1 + 62) -
                p_over_q * *(b + 281 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 62);
            *(b + 215 * OS1_S1 + 96) =
                prefactor_y * *(b + 215 * OS1_S1 + 64) -
                p_over_q * *(b + 280 * OS1_S1 + 64) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 64) +
                one_over_two_q * *(b + 215 * OS1_S1 + 40);
            *(b + 215 * OS1_S1 + 97) =
                prefactor_y * *(b + 215 * OS1_S1 + 65) -
                p_over_q * *(b + 280 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 65);
            *(b + 215 * OS1_S1 + 98) =
                prefactor_x * *(b + 215 * OS1_S1 + 70) -
                p_over_q * *(b + 270 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 215 * OS1_S1 + 49);
            *(b + 215 * OS1_S1 + 99) =
                prefactor_x * *(b + 215 * OS1_S1 + 71) -
                p_over_q * *(b + 270 * OS1_S1 + 71) +
                one_over_two_q * *(b + 215 * OS1_S1 + 50);
            *(b + 215 * OS1_S1 + 100) =
                prefactor_z * *(b + 215 * OS1_S1 + 66) -
                p_over_q * *(b + 281 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 66);
            *(b + 215 * OS1_S1 + 101) =
                prefactor_x * *(b + 215 * OS1_S1 + 73) -
                p_over_q * *(b + 270 * OS1_S1 + 73) +
                one_over_two_q * *(b + 215 * OS1_S1 + 52);
            *(b + 215 * OS1_S1 + 102) =
                prefactor_x * *(b + 215 * OS1_S1 + 74) -
                p_over_q * *(b + 270 * OS1_S1 + 74) +
                one_over_two_q * *(b + 215 * OS1_S1 + 53);
            *(b + 215 * OS1_S1 + 103) =
                prefactor_y * *(b + 215 * OS1_S1 + 70) -
                p_over_q * *(b + 280 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 70);
            *(b + 215 * OS1_S1 + 104) =
                prefactor_x * *(b + 215 * OS1_S1 + 76) -
                p_over_q * *(b + 270 * OS1_S1 + 76) +
                one_over_two_q * *(b + 215 * OS1_S1 + 55);
            *(b + 215 * OS1_S1 + 105) = prefactor_x * *(b + 215 * OS1_S1 + 77) -
                                        p_over_q * *(b + 270 * OS1_S1 + 77);
            *(b + 215 * OS1_S1 + 106) = prefactor_x * *(b + 215 * OS1_S1 + 78) -
                                        p_over_q * *(b + 270 * OS1_S1 + 78);
            *(b + 215 * OS1_S1 + 107) = prefactor_x * *(b + 215 * OS1_S1 + 79) -
                                        p_over_q * *(b + 270 * OS1_S1 + 79);
            *(b + 215 * OS1_S1 + 108) = prefactor_x * *(b + 215 * OS1_S1 + 80) -
                                        p_over_q * *(b + 270 * OS1_S1 + 80);
            *(b + 215 * OS1_S1 + 109) = prefactor_x * *(b + 215 * OS1_S1 + 81) -
                                        p_over_q * *(b + 270 * OS1_S1 + 81);
            *(b + 215 * OS1_S1 + 110) = prefactor_x * *(b + 215 * OS1_S1 + 82) -
                                        p_over_q * *(b + 270 * OS1_S1 + 82);
            *(b + 215 * OS1_S1 + 111) = prefactor_x * *(b + 215 * OS1_S1 + 83) -
                                        p_over_q * *(b + 270 * OS1_S1 + 83);
            *(b + 215 * OS1_S1 + 112) =
                prefactor_y * *(b + 215 * OS1_S1 + 77) -
                p_over_q * *(b + 280 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 50);
            *(b + 215 * OS1_S1 + 113) =
                prefactor_z * *(b + 215 * OS1_S1 + 77) -
                p_over_q * *(b + 281 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 77);
            *(b + 215 * OS1_S1 + 114) =
                prefactor_z * *(b + 215 * OS1_S1 + 78) -
                p_over_q * *(b + 281 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 78) +
                one_over_two_q * *(b + 215 * OS1_S1 + 50);
            *(b + 215 * OS1_S1 + 115) =
                prefactor_z * *(b + 215 * OS1_S1 + 79) -
                p_over_q * *(b + 281 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 215 * OS1_S1 + 51);
            *(b + 215 * OS1_S1 + 116) =
                prefactor_y * *(b + 215 * OS1_S1 + 81) -
                p_over_q * *(b + 280 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 215 * OS1_S1 + 54);
            *(b + 215 * OS1_S1 + 117) =
                prefactor_y * *(b + 215 * OS1_S1 + 82) -
                p_over_q * *(b + 280 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 82) +
                one_over_two_q * *(b + 215 * OS1_S1 + 55);
            *(b + 215 * OS1_S1 + 118) =
                prefactor_y * *(b + 215 * OS1_S1 + 83) -
                p_over_q * *(b + 280 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 83);
            *(b + 215 * OS1_S1 + 119) =
                prefactor_z * *(b + 215 * OS1_S1 + 83) -
                p_over_q * *(b + 281 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 55);
            *(b + 216 * OS1_S1 + 84) =
                prefactor_x * *(b + 216 * OS1_S1 + 56) -
                p_over_q * *(b + 271 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 216 * OS1_S1 + 35);
            *(b + 216 * OS1_S1 + 85) =
                prefactor_y * *(b + 216 * OS1_S1 + 56) -
                p_over_q * *(b + 281 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 56);
            *(b + 216 * OS1_S1 + 86) =
                prefactor_z * *(b + 216 * OS1_S1 + 56) -
                p_over_q * *(b + 282 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 56);
            *(b + 216 * OS1_S1 + 87) =
                prefactor_y * *(b + 216 * OS1_S1 + 57) -
                p_over_q * *(b + 281 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 57) +
                one_over_two_q * *(b + 216 * OS1_S1 + 35);
            *(b + 216 * OS1_S1 + 88) =
                prefactor_y * *(b + 216 * OS1_S1 + 58) -
                p_over_q * *(b + 281 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 58);
            *(b + 216 * OS1_S1 + 89) =
                prefactor_z * *(b + 216 * OS1_S1 + 58) -
                p_over_q * *(b + 282 * OS1_S1 + 58) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 58) +
                one_over_two_q * *(b + 216 * OS1_S1 + 35);
            *(b + 216 * OS1_S1 + 90) =
                prefactor_y * *(b + 216 * OS1_S1 + 59) -
                p_over_q * *(b + 281 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 216 * OS1_S1 + 36);
            *(b + 216 * OS1_S1 + 91) =
                prefactor_z * *(b + 216 * OS1_S1 + 59) -
                p_over_q * *(b + 282 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 59);
            *(b + 216 * OS1_S1 + 92) =
                prefactor_y * *(b + 216 * OS1_S1 + 61) -
                p_over_q * *(b + 281 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 61);
            *(b + 216 * OS1_S1 + 93) =
                prefactor_z * *(b + 216 * OS1_S1 + 61) -
                p_over_q * *(b + 282 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 216 * OS1_S1 + 37);
            *(b + 216 * OS1_S1 + 94) =
                prefactor_x * *(b + 216 * OS1_S1 + 66) -
                p_over_q * *(b + 271 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 216 * OS1_S1 + 45);
            *(b + 216 * OS1_S1 + 95) =
                prefactor_z * *(b + 216 * OS1_S1 + 62) -
                p_over_q * *(b + 282 * OS1_S1 + 62) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 62);
            *(b + 216 * OS1_S1 + 96) =
                prefactor_y * *(b + 216 * OS1_S1 + 64) -
                p_over_q * *(b + 281 * OS1_S1 + 64) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 64) +
                one_over_two_q * *(b + 216 * OS1_S1 + 40);
            *(b + 216 * OS1_S1 + 97) =
                prefactor_y * *(b + 216 * OS1_S1 + 65) -
                p_over_q * *(b + 281 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 65);
            *(b + 216 * OS1_S1 + 98) =
                prefactor_x * *(b + 216 * OS1_S1 + 70) -
                p_over_q * *(b + 271 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 216 * OS1_S1 + 49);
            *(b + 216 * OS1_S1 + 99) =
                prefactor_x * *(b + 216 * OS1_S1 + 71) -
                p_over_q * *(b + 271 * OS1_S1 + 71) +
                one_over_two_q * *(b + 216 * OS1_S1 + 50);
            *(b + 216 * OS1_S1 + 100) =
                prefactor_z * *(b + 216 * OS1_S1 + 66) -
                p_over_q * *(b + 282 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 66);
            *(b + 216 * OS1_S1 + 101) =
                prefactor_x * *(b + 216 * OS1_S1 + 73) -
                p_over_q * *(b + 271 * OS1_S1 + 73) +
                one_over_two_q * *(b + 216 * OS1_S1 + 52);
            *(b + 216 * OS1_S1 + 102) =
                prefactor_x * *(b + 216 * OS1_S1 + 74) -
                p_over_q * *(b + 271 * OS1_S1 + 74) +
                one_over_two_q * *(b + 216 * OS1_S1 + 53);
            *(b + 216 * OS1_S1 + 103) =
                prefactor_y * *(b + 216 * OS1_S1 + 70) -
                p_over_q * *(b + 281 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 70);
            *(b + 216 * OS1_S1 + 104) =
                prefactor_x * *(b + 216 * OS1_S1 + 76) -
                p_over_q * *(b + 271 * OS1_S1 + 76) +
                one_over_two_q * *(b + 216 * OS1_S1 + 55);
            *(b + 216 * OS1_S1 + 105) = prefactor_x * *(b + 216 * OS1_S1 + 77) -
                                        p_over_q * *(b + 271 * OS1_S1 + 77);
            *(b + 216 * OS1_S1 + 106) = prefactor_x * *(b + 216 * OS1_S1 + 78) -
                                        p_over_q * *(b + 271 * OS1_S1 + 78);
            *(b + 216 * OS1_S1 + 107) = prefactor_x * *(b + 216 * OS1_S1 + 79) -
                                        p_over_q * *(b + 271 * OS1_S1 + 79);
            *(b + 216 * OS1_S1 + 108) = prefactor_x * *(b + 216 * OS1_S1 + 80) -
                                        p_over_q * *(b + 271 * OS1_S1 + 80);
            *(b + 216 * OS1_S1 + 109) = prefactor_x * *(b + 216 * OS1_S1 + 81) -
                                        p_over_q * *(b + 271 * OS1_S1 + 81);
            *(b + 216 * OS1_S1 + 110) = prefactor_x * *(b + 216 * OS1_S1 + 82) -
                                        p_over_q * *(b + 271 * OS1_S1 + 82);
            *(b + 216 * OS1_S1 + 111) = prefactor_x * *(b + 216 * OS1_S1 + 83) -
                                        p_over_q * *(b + 271 * OS1_S1 + 83);
            *(b + 216 * OS1_S1 + 112) =
                prefactor_y * *(b + 216 * OS1_S1 + 77) -
                p_over_q * *(b + 281 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 216 * OS1_S1 + 50);
            *(b + 216 * OS1_S1 + 113) =
                prefactor_z * *(b + 216 * OS1_S1 + 77) -
                p_over_q * *(b + 282 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 77);
            *(b + 216 * OS1_S1 + 114) =
                prefactor_z * *(b + 216 * OS1_S1 + 78) -
                p_over_q * *(b + 282 * OS1_S1 + 78) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 78) +
                one_over_two_q * *(b + 216 * OS1_S1 + 50);
            *(b + 216 * OS1_S1 + 115) =
                prefactor_z * *(b + 216 * OS1_S1 + 79) -
                p_over_q * *(b + 282 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 216 * OS1_S1 + 51);
            *(b + 216 * OS1_S1 + 116) =
                prefactor_y * *(b + 216 * OS1_S1 + 81) -
                p_over_q * *(b + 281 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 216 * OS1_S1 + 54);
            *(b + 216 * OS1_S1 + 117) =
                prefactor_y * *(b + 216 * OS1_S1 + 82) -
                p_over_q * *(b + 281 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 82) +
                one_over_two_q * *(b + 216 * OS1_S1 + 55);
            *(b + 216 * OS1_S1 + 118) =
                prefactor_y * *(b + 216 * OS1_S1 + 83) -
                p_over_q * *(b + 281 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 83);
            *(b + 216 * OS1_S1 + 119) =
                prefactor_z * *(b + 216 * OS1_S1 + 83) -
                p_over_q * *(b + 282 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 216 * OS1_S1 + 55);
            *(b + 217 * OS1_S1 + 84) =
                prefactor_x * *(b + 217 * OS1_S1 + 56) -
                p_over_q * *(b + 272 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 217 * OS1_S1 + 35);
            *(b + 217 * OS1_S1 + 85) =
                prefactor_y * *(b + 217 * OS1_S1 + 56) -
                p_over_q * *(b + 282 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 56);
            *(b + 217 * OS1_S1 + 86) =
                prefactor_z * *(b + 217 * OS1_S1 + 56) -
                p_over_q * *(b + 283 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 56);
            *(b + 217 * OS1_S1 + 87) =
                prefactor_y * *(b + 217 * OS1_S1 + 57) -
                p_over_q * *(b + 282 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 57) +
                one_over_two_q * *(b + 217 * OS1_S1 + 35);
            *(b + 217 * OS1_S1 + 88) =
                prefactor_y * *(b + 217 * OS1_S1 + 58) -
                p_over_q * *(b + 282 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 58);
            *(b + 217 * OS1_S1 + 89) =
                prefactor_z * *(b + 217 * OS1_S1 + 58) -
                p_over_q * *(b + 283 * OS1_S1 + 58) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 58) +
                one_over_two_q * *(b + 217 * OS1_S1 + 35);
            *(b + 217 * OS1_S1 + 90) =
                prefactor_y * *(b + 217 * OS1_S1 + 59) -
                p_over_q * *(b + 282 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 217 * OS1_S1 + 36);
            *(b + 217 * OS1_S1 + 91) =
                prefactor_z * *(b + 217 * OS1_S1 + 59) -
                p_over_q * *(b + 283 * OS1_S1 + 59) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 59);
            *(b + 217 * OS1_S1 + 92) =
                prefactor_y * *(b + 217 * OS1_S1 + 61) -
                p_over_q * *(b + 282 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 61);
            *(b + 217 * OS1_S1 + 93) =
                prefactor_z * *(b + 217 * OS1_S1 + 61) -
                p_over_q * *(b + 283 * OS1_S1 + 61) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 217 * OS1_S1 + 37);
            *(b + 217 * OS1_S1 + 94) =
                prefactor_x * *(b + 217 * OS1_S1 + 66) -
                p_over_q * *(b + 272 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 217 * OS1_S1 + 45);
            *(b + 217 * OS1_S1 + 95) =
                prefactor_z * *(b + 217 * OS1_S1 + 62) -
                p_over_q * *(b + 283 * OS1_S1 + 62) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 62);
            *(b + 217 * OS1_S1 + 96) =
                prefactor_y * *(b + 217 * OS1_S1 + 64) -
                p_over_q * *(b + 282 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 64) +
                one_over_two_q * *(b + 217 * OS1_S1 + 40);
            *(b + 217 * OS1_S1 + 97) =
                prefactor_y * *(b + 217 * OS1_S1 + 65) -
                p_over_q * *(b + 282 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 65);
            *(b + 217 * OS1_S1 + 98) =
                prefactor_x * *(b + 217 * OS1_S1 + 70) -
                p_over_q * *(b + 272 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 217 * OS1_S1 + 49);
            *(b + 217 * OS1_S1 + 99) =
                prefactor_x * *(b + 217 * OS1_S1 + 71) -
                p_over_q * *(b + 272 * OS1_S1 + 71) +
                one_over_two_q * *(b + 217 * OS1_S1 + 50);
            *(b + 217 * OS1_S1 + 100) =
                prefactor_z * *(b + 217 * OS1_S1 + 66) -
                p_over_q * *(b + 283 * OS1_S1 + 66) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 66);
            *(b + 217 * OS1_S1 + 101) =
                prefactor_x * *(b + 217 * OS1_S1 + 73) -
                p_over_q * *(b + 272 * OS1_S1 + 73) +
                one_over_two_q * *(b + 217 * OS1_S1 + 52);
            *(b + 217 * OS1_S1 + 102) =
                prefactor_x * *(b + 217 * OS1_S1 + 74) -
                p_over_q * *(b + 272 * OS1_S1 + 74) +
                one_over_two_q * *(b + 217 * OS1_S1 + 53);
            *(b + 217 * OS1_S1 + 103) =
                prefactor_y * *(b + 217 * OS1_S1 + 70) -
                p_over_q * *(b + 282 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 70);
            *(b + 217 * OS1_S1 + 104) =
                prefactor_x * *(b + 217 * OS1_S1 + 76) -
                p_over_q * *(b + 272 * OS1_S1 + 76) +
                one_over_two_q * *(b + 217 * OS1_S1 + 55);
            *(b + 217 * OS1_S1 + 105) = prefactor_x * *(b + 217 * OS1_S1 + 77) -
                                        p_over_q * *(b + 272 * OS1_S1 + 77);
            *(b + 217 * OS1_S1 + 106) = prefactor_x * *(b + 217 * OS1_S1 + 78) -
                                        p_over_q * *(b + 272 * OS1_S1 + 78);
            *(b + 217 * OS1_S1 + 107) = prefactor_x * *(b + 217 * OS1_S1 + 79) -
                                        p_over_q * *(b + 272 * OS1_S1 + 79);
            *(b + 217 * OS1_S1 + 108) = prefactor_x * *(b + 217 * OS1_S1 + 80) -
                                        p_over_q * *(b + 272 * OS1_S1 + 80);
            *(b + 217 * OS1_S1 + 109) = prefactor_x * *(b + 217 * OS1_S1 + 81) -
                                        p_over_q * *(b + 272 * OS1_S1 + 81);
            *(b + 217 * OS1_S1 + 110) = prefactor_x * *(b + 217 * OS1_S1 + 82) -
                                        p_over_q * *(b + 272 * OS1_S1 + 82);
            *(b + 217 * OS1_S1 + 111) = prefactor_x * *(b + 217 * OS1_S1 + 83) -
                                        p_over_q * *(b + 272 * OS1_S1 + 83);
            *(b + 217 * OS1_S1 + 112) =
                prefactor_y * *(b + 217 * OS1_S1 + 77) -
                p_over_q * *(b + 282 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 217 * OS1_S1 + 50);
            *(b + 217 * OS1_S1 + 113) =
                prefactor_z * *(b + 217 * OS1_S1 + 77) -
                p_over_q * *(b + 283 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 77);
            *(b + 217 * OS1_S1 + 114) =
                prefactor_z * *(b + 217 * OS1_S1 + 78) -
                p_over_q * *(b + 283 * OS1_S1 + 78) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 78) +
                one_over_two_q * *(b + 217 * OS1_S1 + 50);
            *(b + 217 * OS1_S1 + 115) =
                prefactor_z * *(b + 217 * OS1_S1 + 79) -
                p_over_q * *(b + 283 * OS1_S1 + 79) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 217 * OS1_S1 + 51);
            *(b + 217 * OS1_S1 + 116) =
                prefactor_y * *(b + 217 * OS1_S1 + 81) -
                p_over_q * *(b + 282 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 217 * OS1_S1 + 54);
            *(b + 217 * OS1_S1 + 117) =
                prefactor_y * *(b + 217 * OS1_S1 + 82) -
                p_over_q * *(b + 282 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 82) +
                one_over_two_q * *(b + 217 * OS1_S1 + 55);
            *(b + 217 * OS1_S1 + 118) =
                prefactor_y * *(b + 217 * OS1_S1 + 83) -
                p_over_q * *(b + 282 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 83);
            *(b + 217 * OS1_S1 + 119) =
                prefactor_z * *(b + 217 * OS1_S1 + 83) -
                p_over_q * *(b + 283 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 217 * OS1_S1 + 55);
            *(b + 218 * OS1_S1 + 84) =
                prefactor_x * *(b + 218 * OS1_S1 + 56) -
                p_over_q * *(b + 273 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 218 * OS1_S1 + 35);
            *(b + 218 * OS1_S1 + 85) =
                prefactor_y * *(b + 218 * OS1_S1 + 56) -
                p_over_q * *(b + 283 * OS1_S1 + 56) +
                one_over_two_q * *(b + 164 * OS1_S1 + 56);
            *(b + 218 * OS1_S1 + 86) =
                prefactor_z * *(b + 218 * OS1_S1 + 56) -
                p_over_q * *(b + 284 * OS1_S1 + 56) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 56);
            *(b + 218 * OS1_S1 + 87) =
                prefactor_y * *(b + 218 * OS1_S1 + 57) -
                p_over_q * *(b + 283 * OS1_S1 + 57) +
                one_over_two_q * *(b + 164 * OS1_S1 + 57) +
                one_over_two_q * *(b + 218 * OS1_S1 + 35);
            *(b + 218 * OS1_S1 + 88) =
                prefactor_y * *(b + 218 * OS1_S1 + 58) -
                p_over_q * *(b + 283 * OS1_S1 + 58) +
                one_over_two_q * *(b + 164 * OS1_S1 + 58);
            *(b + 218 * OS1_S1 + 89) =
                prefactor_z * *(b + 218 * OS1_S1 + 58) -
                p_over_q * *(b + 284 * OS1_S1 + 58) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 58) +
                one_over_two_q * *(b + 218 * OS1_S1 + 35);
            *(b + 218 * OS1_S1 + 90) =
                prefactor_y * *(b + 218 * OS1_S1 + 59) -
                p_over_q * *(b + 283 * OS1_S1 + 59) +
                one_over_two_q * *(b + 164 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 36);
            *(b + 218 * OS1_S1 + 91) =
                prefactor_z * *(b + 218 * OS1_S1 + 59) -
                p_over_q * *(b + 284 * OS1_S1 + 59) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 59);
            *(b + 218 * OS1_S1 + 92) =
                prefactor_y * *(b + 218 * OS1_S1 + 61) -
                p_over_q * *(b + 283 * OS1_S1 + 61) +
                one_over_two_q * *(b + 164 * OS1_S1 + 61);
            *(b + 218 * OS1_S1 + 93) =
                prefactor_z * *(b + 218 * OS1_S1 + 61) -
                p_over_q * *(b + 284 * OS1_S1 + 61) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 37);
            *(b + 218 * OS1_S1 + 94) =
                prefactor_x * *(b + 218 * OS1_S1 + 66) -
                p_over_q * *(b + 273 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 45);
            *(b + 218 * OS1_S1 + 95) =
                prefactor_z * *(b + 218 * OS1_S1 + 62) -
                p_over_q * *(b + 284 * OS1_S1 + 62) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 62);
            *(b + 218 * OS1_S1 + 96) =
                prefactor_y * *(b + 218 * OS1_S1 + 64) -
                p_over_q * *(b + 283 * OS1_S1 + 64) +
                one_over_two_q * *(b + 164 * OS1_S1 + 64) +
                one_over_two_q * *(b + 218 * OS1_S1 + 40);
            *(b + 218 * OS1_S1 + 97) =
                prefactor_y * *(b + 218 * OS1_S1 + 65) -
                p_over_q * *(b + 283 * OS1_S1 + 65) +
                one_over_two_q * *(b + 164 * OS1_S1 + 65);
            *(b + 218 * OS1_S1 + 98) =
                prefactor_x * *(b + 218 * OS1_S1 + 70) -
                p_over_q * *(b + 273 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 49);
            *(b + 218 * OS1_S1 + 99) =
                prefactor_x * *(b + 218 * OS1_S1 + 71) -
                p_over_q * *(b + 273 * OS1_S1 + 71) +
                one_over_two_q * *(b + 218 * OS1_S1 + 50);
            *(b + 218 * OS1_S1 + 100) =
                prefactor_z * *(b + 218 * OS1_S1 + 66) -
                p_over_q * *(b + 284 * OS1_S1 + 66) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 66);
            *(b + 218 * OS1_S1 + 101) =
                prefactor_x * *(b + 218 * OS1_S1 + 73) -
                p_over_q * *(b + 273 * OS1_S1 + 73) +
                one_over_two_q * *(b + 218 * OS1_S1 + 52);
            *(b + 218 * OS1_S1 + 102) =
                prefactor_x * *(b + 218 * OS1_S1 + 74) -
                p_over_q * *(b + 273 * OS1_S1 + 74) +
                one_over_two_q * *(b + 218 * OS1_S1 + 53);
            *(b + 218 * OS1_S1 + 103) =
                prefactor_y * *(b + 218 * OS1_S1 + 70) -
                p_over_q * *(b + 283 * OS1_S1 + 70) +
                one_over_two_q * *(b + 164 * OS1_S1 + 70);
            *(b + 218 * OS1_S1 + 104) =
                prefactor_x * *(b + 218 * OS1_S1 + 76) -
                p_over_q * *(b + 273 * OS1_S1 + 76) +
                one_over_two_q * *(b + 218 * OS1_S1 + 55);
            *(b + 218 * OS1_S1 + 105) = prefactor_x * *(b + 218 * OS1_S1 + 77) -
                                        p_over_q * *(b + 273 * OS1_S1 + 77);
            *(b + 218 * OS1_S1 + 106) = prefactor_x * *(b + 218 * OS1_S1 + 78) -
                                        p_over_q * *(b + 273 * OS1_S1 + 78);
            *(b + 218 * OS1_S1 + 107) = prefactor_x * *(b + 218 * OS1_S1 + 79) -
                                        p_over_q * *(b + 273 * OS1_S1 + 79);
            *(b + 218 * OS1_S1 + 108) = prefactor_x * *(b + 218 * OS1_S1 + 80) -
                                        p_over_q * *(b + 273 * OS1_S1 + 80);
            *(b + 218 * OS1_S1 + 109) = prefactor_x * *(b + 218 * OS1_S1 + 81) -
                                        p_over_q * *(b + 273 * OS1_S1 + 81);
            *(b + 218 * OS1_S1 + 110) = prefactor_x * *(b + 218 * OS1_S1 + 82) -
                                        p_over_q * *(b + 273 * OS1_S1 + 82);
            *(b + 218 * OS1_S1 + 111) = prefactor_x * *(b + 218 * OS1_S1 + 83) -
                                        p_over_q * *(b + 273 * OS1_S1 + 83);
            *(b + 218 * OS1_S1 + 112) =
                prefactor_y * *(b + 218 * OS1_S1 + 77) -
                p_over_q * *(b + 283 * OS1_S1 + 77) +
                one_over_two_q * *(b + 164 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 218 * OS1_S1 + 50);
            *(b + 218 * OS1_S1 + 113) =
                prefactor_z * *(b + 218 * OS1_S1 + 77) -
                p_over_q * *(b + 284 * OS1_S1 + 77) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 77);
            *(b + 218 * OS1_S1 + 114) =
                prefactor_z * *(b + 218 * OS1_S1 + 78) -
                p_over_q * *(b + 284 * OS1_S1 + 78) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 78) +
                one_over_two_q * *(b + 218 * OS1_S1 + 50);
            *(b + 218 * OS1_S1 + 115) =
                prefactor_z * *(b + 218 * OS1_S1 + 79) -
                p_over_q * *(b + 284 * OS1_S1 + 79) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 51);
            *(b + 218 * OS1_S1 + 116) =
                prefactor_y * *(b + 218 * OS1_S1 + 81) -
                p_over_q * *(b + 283 * OS1_S1 + 81) +
                one_over_two_q * *(b + 164 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 54);
            *(b + 218 * OS1_S1 + 117) =
                prefactor_y * *(b + 218 * OS1_S1 + 82) -
                p_over_q * *(b + 283 * OS1_S1 + 82) +
                one_over_two_q * *(b + 164 * OS1_S1 + 82) +
                one_over_two_q * *(b + 218 * OS1_S1 + 55);
            *(b + 218 * OS1_S1 + 118) =
                prefactor_y * *(b + 218 * OS1_S1 + 83) -
                p_over_q * *(b + 283 * OS1_S1 + 83) +
                one_over_two_q * *(b + 164 * OS1_S1 + 83);
            *(b + 218 * OS1_S1 + 119) =
                prefactor_z * *(b + 218 * OS1_S1 + 83) -
                p_over_q * *(b + 284 * OS1_S1 + 83) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 218 * OS1_S1 + 55);
            *(b + 219 * OS1_S1 + 84) =
                prefactor_x * *(b + 219 * OS1_S1 + 56) -
                p_over_q * *(b + 274 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 219 * OS1_S1 + 35);
            *(b + 219 * OS1_S1 + 85) = prefactor_y * *(b + 219 * OS1_S1 + 56) -
                                       p_over_q * *(b + 284 * OS1_S1 + 56);
            *(b + 219 * OS1_S1 + 86) =
                prefactor_z * *(b + 219 * OS1_S1 + 56) -
                p_over_q * *(b + 285 * OS1_S1 + 56) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 56);
            *(b + 219 * OS1_S1 + 87) =
                prefactor_y * *(b + 219 * OS1_S1 + 57) -
                p_over_q * *(b + 284 * OS1_S1 + 57) +
                one_over_two_q * *(b + 219 * OS1_S1 + 35);
            *(b + 219 * OS1_S1 + 88) = prefactor_y * *(b + 219 * OS1_S1 + 58) -
                                       p_over_q * *(b + 284 * OS1_S1 + 58);
            *(b + 219 * OS1_S1 + 89) =
                prefactor_z * *(b + 219 * OS1_S1 + 58) -
                p_over_q * *(b + 285 * OS1_S1 + 58) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 58) +
                one_over_two_q * *(b + 219 * OS1_S1 + 35);
            *(b + 219 * OS1_S1 + 90) =
                prefactor_y * *(b + 219 * OS1_S1 + 59) -
                p_over_q * *(b + 284 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 219 * OS1_S1 + 36);
            *(b + 219 * OS1_S1 + 91) =
                prefactor_z * *(b + 219 * OS1_S1 + 59) -
                p_over_q * *(b + 285 * OS1_S1 + 59) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 59);
            *(b + 219 * OS1_S1 + 92) = prefactor_y * *(b + 219 * OS1_S1 + 61) -
                                       p_over_q * *(b + 284 * OS1_S1 + 61);
            *(b + 219 * OS1_S1 + 93) =
                prefactor_z * *(b + 219 * OS1_S1 + 61) -
                p_over_q * *(b + 285 * OS1_S1 + 61) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 219 * OS1_S1 + 37);
            *(b + 219 * OS1_S1 + 94) =
                prefactor_x * *(b + 219 * OS1_S1 + 66) -
                p_over_q * *(b + 274 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 219 * OS1_S1 + 45);
            *(b + 219 * OS1_S1 + 95) =
                prefactor_z * *(b + 219 * OS1_S1 + 62) -
                p_over_q * *(b + 285 * OS1_S1 + 62) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 62);
            *(b + 219 * OS1_S1 + 96) =
                prefactor_y * *(b + 219 * OS1_S1 + 64) -
                p_over_q * *(b + 284 * OS1_S1 + 64) +
                one_over_two_q * *(b + 219 * OS1_S1 + 40);
            *(b + 219 * OS1_S1 + 97) = prefactor_y * *(b + 219 * OS1_S1 + 65) -
                                       p_over_q * *(b + 284 * OS1_S1 + 65);
            *(b + 219 * OS1_S1 + 98) =
                prefactor_x * *(b + 219 * OS1_S1 + 70) -
                p_over_q * *(b + 274 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 219 * OS1_S1 + 49);
            *(b + 219 * OS1_S1 + 99) =
                prefactor_x * *(b + 219 * OS1_S1 + 71) -
                p_over_q * *(b + 274 * OS1_S1 + 71) +
                one_over_two_q * *(b + 219 * OS1_S1 + 50);
            *(b + 219 * OS1_S1 + 100) =
                prefactor_z * *(b + 219 * OS1_S1 + 66) -
                p_over_q * *(b + 285 * OS1_S1 + 66) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 66);
            *(b + 219 * OS1_S1 + 101) =
                prefactor_x * *(b + 219 * OS1_S1 + 73) -
                p_over_q * *(b + 274 * OS1_S1 + 73) +
                one_over_two_q * *(b + 219 * OS1_S1 + 52);
            *(b + 219 * OS1_S1 + 102) =
                prefactor_y * *(b + 219 * OS1_S1 + 69) -
                p_over_q * *(b + 284 * OS1_S1 + 69) +
                one_over_two_q * *(b + 219 * OS1_S1 + 44);
            *(b + 219 * OS1_S1 + 103) = prefactor_y * *(b + 219 * OS1_S1 + 70) -
                                        p_over_q * *(b + 284 * OS1_S1 + 70);
            *(b + 219 * OS1_S1 + 104) =
                prefactor_x * *(b + 219 * OS1_S1 + 76) -
                p_over_q * *(b + 274 * OS1_S1 + 76) +
                one_over_two_q * *(b + 219 * OS1_S1 + 55);
            *(b + 219 * OS1_S1 + 105) = prefactor_x * *(b + 219 * OS1_S1 + 77) -
                                        p_over_q * *(b + 274 * OS1_S1 + 77);
            *(b + 219 * OS1_S1 + 106) = prefactor_x * *(b + 219 * OS1_S1 + 78) -
                                        p_over_q * *(b + 274 * OS1_S1 + 78);
            *(b + 219 * OS1_S1 + 107) = prefactor_x * *(b + 219 * OS1_S1 + 79) -
                                        p_over_q * *(b + 274 * OS1_S1 + 79);
            *(b + 219 * OS1_S1 + 108) = prefactor_x * *(b + 219 * OS1_S1 + 80) -
                                        p_over_q * *(b + 274 * OS1_S1 + 80);
            *(b + 219 * OS1_S1 + 109) = prefactor_x * *(b + 219 * OS1_S1 + 81) -
                                        p_over_q * *(b + 274 * OS1_S1 + 81);
            *(b + 219 * OS1_S1 + 110) = prefactor_y * *(b + 219 * OS1_S1 + 76) -
                                        p_over_q * *(b + 284 * OS1_S1 + 76);
            *(b + 219 * OS1_S1 + 111) = prefactor_x * *(b + 219 * OS1_S1 + 83) -
                                        p_over_q * *(b + 274 * OS1_S1 + 83);
            *(b + 219 * OS1_S1 + 112) =
                prefactor_y * *(b + 219 * OS1_S1 + 77) -
                p_over_q * *(b + 284 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 219 * OS1_S1 + 50);
            *(b + 219 * OS1_S1 + 113) =
                prefactor_z * *(b + 219 * OS1_S1 + 77) -
                p_over_q * *(b + 285 * OS1_S1 + 77) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 77);
            *(b + 219 * OS1_S1 + 114) =
                prefactor_z * *(b + 219 * OS1_S1 + 78) -
                p_over_q * *(b + 285 * OS1_S1 + 78) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 78) +
                one_over_two_q * *(b + 219 * OS1_S1 + 50);
            *(b + 219 * OS1_S1 + 115) =
                prefactor_z * *(b + 219 * OS1_S1 + 79) -
                p_over_q * *(b + 285 * OS1_S1 + 79) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 219 * OS1_S1 + 51);
            *(b + 219 * OS1_S1 + 116) =
                prefactor_y * *(b + 219 * OS1_S1 + 81) -
                p_over_q * *(b + 284 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 219 * OS1_S1 + 54);
            *(b + 219 * OS1_S1 + 117) =
                prefactor_y * *(b + 219 * OS1_S1 + 82) -
                p_over_q * *(b + 284 * OS1_S1 + 82) +
                one_over_two_q * *(b + 219 * OS1_S1 + 55);
            *(b + 219 * OS1_S1 + 118) = prefactor_y * *(b + 219 * OS1_S1 + 83) -
                                        p_over_q * *(b + 284 * OS1_S1 + 83);
            *(b + 219 * OS1_S1 + 119) =
                prefactor_z * *(b + 219 * OS1_S1 + 83) -
                p_over_q * *(b + 285 * OS1_S1 + 83) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 219 * OS1_S1 + 55);
            return;
        }
    }
}
