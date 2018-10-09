/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_8_7(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 120 * OS1_S1 + 84) =
                prefactor_x * *(b + 120 * OS1_S1 + 56) -
                p_over_q * *(b + 165 * OS1_S1 + 56) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 120 * OS1_S1 + 35);
            *(b + 120 * OS1_S1 + 85) = prefactor_y * *(b + 120 * OS1_S1 + 56) -
                                       p_over_q * *(b + 166 * OS1_S1 + 56);
            *(b + 120 * OS1_S1 + 86) = prefactor_z * *(b + 120 * OS1_S1 + 56) -
                                       p_over_q * *(b + 167 * OS1_S1 + 56);
            *(b + 120 * OS1_S1 + 87) =
                prefactor_y * *(b + 120 * OS1_S1 + 57) -
                p_over_q * *(b + 166 * OS1_S1 + 57) +
                one_over_two_q * *(b + 120 * OS1_S1 + 35);
            *(b + 120 * OS1_S1 + 88) = prefactor_z * *(b + 120 * OS1_S1 + 57) -
                                       p_over_q * *(b + 167 * OS1_S1 + 57);
            *(b + 120 * OS1_S1 + 89) =
                prefactor_z * *(b + 120 * OS1_S1 + 58) -
                p_over_q * *(b + 167 * OS1_S1 + 58) +
                one_over_two_q * *(b + 120 * OS1_S1 + 35);
            *(b + 120 * OS1_S1 + 90) =
                prefactor_y * *(b + 120 * OS1_S1 + 59) -
                p_over_q * *(b + 166 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 36);
            *(b + 120 * OS1_S1 + 91) = prefactor_z * *(b + 120 * OS1_S1 + 59) -
                                       p_over_q * *(b + 167 * OS1_S1 + 59);
            *(b + 120 * OS1_S1 + 92) = prefactor_y * *(b + 120 * OS1_S1 + 61) -
                                       p_over_q * *(b + 166 * OS1_S1 + 61);
            *(b + 120 * OS1_S1 + 93) =
                prefactor_z * *(b + 120 * OS1_S1 + 61) -
                p_over_q * *(b + 167 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 37);
            *(b + 120 * OS1_S1 + 94) =
                prefactor_x * *(b + 120 * OS1_S1 + 66) -
                p_over_q * *(b + 165 * OS1_S1 + 66) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 45);
            *(b + 120 * OS1_S1 + 95) = prefactor_z * *(b + 120 * OS1_S1 + 62) -
                                       p_over_q * *(b + 167 * OS1_S1 + 62);
            *(b + 120 * OS1_S1 + 96) =
                prefactor_z * *(b + 120 * OS1_S1 + 63) -
                p_over_q * *(b + 167 * OS1_S1 + 63) +
                one_over_two_q * *(b + 120 * OS1_S1 + 38);
            *(b + 120 * OS1_S1 + 97) = prefactor_y * *(b + 120 * OS1_S1 + 65) -
                                       p_over_q * *(b + 166 * OS1_S1 + 65);
            *(b + 120 * OS1_S1 + 98) =
                prefactor_x * *(b + 120 * OS1_S1 + 70) -
                p_over_q * *(b + 165 * OS1_S1 + 70) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 49);
            *(b + 120 * OS1_S1 + 99) =
                prefactor_x * *(b + 120 * OS1_S1 + 71) -
                p_over_q * *(b + 165 * OS1_S1 + 71) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 71) +
                one_over_two_q * *(b + 120 * OS1_S1 + 50);
            *(b + 120 * OS1_S1 + 100) = prefactor_z * *(b + 120 * OS1_S1 + 66) -
                                        p_over_q * *(b + 167 * OS1_S1 + 66);
            *(b + 120 * OS1_S1 + 101) =
                prefactor_z * *(b + 120 * OS1_S1 + 67) -
                p_over_q * *(b + 167 * OS1_S1 + 67) +
                one_over_two_q * *(b + 120 * OS1_S1 + 41);
            *(b + 120 * OS1_S1 + 102) =
                prefactor_y * *(b + 120 * OS1_S1 + 69) -
                p_over_q * *(b + 166 * OS1_S1 + 69) +
                one_over_two_q * *(b + 120 * OS1_S1 + 44);
            *(b + 120 * OS1_S1 + 103) = prefactor_y * *(b + 120 * OS1_S1 + 70) -
                                        p_over_q * *(b + 166 * OS1_S1 + 70);
            *(b + 120 * OS1_S1 + 104) =
                prefactor_x * *(b + 120 * OS1_S1 + 76) -
                p_over_q * *(b + 165 * OS1_S1 + 76) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 76) +
                one_over_two_q * *(b + 120 * OS1_S1 + 55);
            *(b + 120 * OS1_S1 + 105) =
                prefactor_x * *(b + 120 * OS1_S1 + 77) -
                p_over_q * *(b + 165 * OS1_S1 + 77) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 77);
            *(b + 120 * OS1_S1 + 106) = prefactor_z * *(b + 120 * OS1_S1 + 71) -
                                        p_over_q * *(b + 167 * OS1_S1 + 71);
            *(b + 120 * OS1_S1 + 107) =
                prefactor_x * *(b + 120 * OS1_S1 + 79) -
                p_over_q * *(b + 165 * OS1_S1 + 79) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 79);
            *(b + 120 * OS1_S1 + 108) =
                prefactor_x * *(b + 120 * OS1_S1 + 80) -
                p_over_q * *(b + 165 * OS1_S1 + 80) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 80);
            *(b + 120 * OS1_S1 + 109) =
                prefactor_x * *(b + 120 * OS1_S1 + 81) -
                p_over_q * *(b + 165 * OS1_S1 + 81) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 81);
            *(b + 120 * OS1_S1 + 110) = prefactor_y * *(b + 120 * OS1_S1 + 76) -
                                        p_over_q * *(b + 166 * OS1_S1 + 76);
            *(b + 120 * OS1_S1 + 111) =
                prefactor_x * *(b + 120 * OS1_S1 + 83) -
                p_over_q * *(b + 165 * OS1_S1 + 83) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 83);
            *(b + 120 * OS1_S1 + 112) =
                prefactor_y * *(b + 120 * OS1_S1 + 77) -
                p_over_q * *(b + 166 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 120 * OS1_S1 + 50);
            *(b + 120 * OS1_S1 + 113) = prefactor_z * *(b + 120 * OS1_S1 + 77) -
                                        p_over_q * *(b + 167 * OS1_S1 + 77);
            *(b + 120 * OS1_S1 + 114) =
                prefactor_z * *(b + 120 * OS1_S1 + 78) -
                p_over_q * *(b + 167 * OS1_S1 + 78) +
                one_over_two_q * *(b + 120 * OS1_S1 + 50);
            *(b + 120 * OS1_S1 + 115) =
                prefactor_z * *(b + 120 * OS1_S1 + 79) -
                p_over_q * *(b + 167 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 51);
            *(b + 120 * OS1_S1 + 116) =
                prefactor_y * *(b + 120 * OS1_S1 + 81) -
                p_over_q * *(b + 166 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 54);
            *(b + 120 * OS1_S1 + 117) =
                prefactor_y * *(b + 120 * OS1_S1 + 82) -
                p_over_q * *(b + 166 * OS1_S1 + 82) +
                one_over_two_q * *(b + 120 * OS1_S1 + 55);
            *(b + 120 * OS1_S1 + 118) = prefactor_y * *(b + 120 * OS1_S1 + 83) -
                                        p_over_q * *(b + 166 * OS1_S1 + 83);
            *(b + 120 * OS1_S1 + 119) =
                prefactor_z * *(b + 120 * OS1_S1 + 83) -
                p_over_q * *(b + 167 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 120 * OS1_S1 + 55);
            *(b + 121 * OS1_S1 + 84) =
                prefactor_x * *(b + 121 * OS1_S1 + 56) -
                p_over_q * *(b + 166 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 121 * OS1_S1 + 35);
            *(b + 121 * OS1_S1 + 85) = prefactor_y * *(b + 121 * OS1_S1 + 56) -
                                       p_over_q * *(b + 168 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 56);
            *(b + 121 * OS1_S1 + 86) = prefactor_z * *(b + 121 * OS1_S1 + 56) -
                                       p_over_q * *(b + 169 * OS1_S1 + 56);
            *(b + 121 * OS1_S1 + 87) =
                prefactor_y * *(b + 121 * OS1_S1 + 57) -
                p_over_q * *(b + 168 * OS1_S1 + 57) +
                one_over_two_q * *(b + 84 * OS1_S1 + 57) +
                one_over_two_q * *(b + 121 * OS1_S1 + 35);
            *(b + 121 * OS1_S1 + 88) = prefactor_z * *(b + 121 * OS1_S1 + 57) -
                                       p_over_q * *(b + 169 * OS1_S1 + 57);
            *(b + 121 * OS1_S1 + 89) =
                prefactor_z * *(b + 121 * OS1_S1 + 58) -
                p_over_q * *(b + 169 * OS1_S1 + 58) +
                one_over_two_q * *(b + 121 * OS1_S1 + 35);
            *(b + 121 * OS1_S1 + 90) =
                prefactor_y * *(b + 121 * OS1_S1 + 59) -
                p_over_q * *(b + 168 * OS1_S1 + 59) +
                one_over_two_q * *(b + 84 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 36);
            *(b + 121 * OS1_S1 + 91) = prefactor_z * *(b + 121 * OS1_S1 + 59) -
                                       p_over_q * *(b + 169 * OS1_S1 + 59);
            *(b + 121 * OS1_S1 + 92) = prefactor_y * *(b + 121 * OS1_S1 + 61) -
                                       p_over_q * *(b + 168 * OS1_S1 + 61) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 61);
            *(b + 121 * OS1_S1 + 93) =
                prefactor_z * *(b + 121 * OS1_S1 + 61) -
                p_over_q * *(b + 169 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 37);
            *(b + 121 * OS1_S1 + 94) =
                prefactor_x * *(b + 121 * OS1_S1 + 66) -
                p_over_q * *(b + 166 * OS1_S1 + 66) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 45);
            *(b + 121 * OS1_S1 + 95) = prefactor_z * *(b + 121 * OS1_S1 + 62) -
                                       p_over_q * *(b + 169 * OS1_S1 + 62);
            *(b + 121 * OS1_S1 + 96) =
                prefactor_z * *(b + 121 * OS1_S1 + 63) -
                p_over_q * *(b + 169 * OS1_S1 + 63) +
                one_over_two_q * *(b + 121 * OS1_S1 + 38);
            *(b + 121 * OS1_S1 + 97) = prefactor_y * *(b + 121 * OS1_S1 + 65) -
                                       p_over_q * *(b + 168 * OS1_S1 + 65) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 65);
            *(b + 121 * OS1_S1 + 98) =
                prefactor_x * *(b + 121 * OS1_S1 + 70) -
                p_over_q * *(b + 166 * OS1_S1 + 70) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 49);
            *(b + 121 * OS1_S1 + 99) =
                prefactor_x * *(b + 121 * OS1_S1 + 71) -
                p_over_q * *(b + 166 * OS1_S1 + 71) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 71) +
                one_over_two_q * *(b + 121 * OS1_S1 + 50);
            *(b + 121 * OS1_S1 + 100) = prefactor_z * *(b + 121 * OS1_S1 + 66) -
                                        p_over_q * *(b + 169 * OS1_S1 + 66);
            *(b + 121 * OS1_S1 + 101) =
                prefactor_z * *(b + 121 * OS1_S1 + 67) -
                p_over_q * *(b + 169 * OS1_S1 + 67) +
                one_over_two_q * *(b + 121 * OS1_S1 + 41);
            *(b + 121 * OS1_S1 + 102) =
                prefactor_y * *(b + 121 * OS1_S1 + 69) -
                p_over_q * *(b + 168 * OS1_S1 + 69) +
                one_over_two_q * *(b + 84 * OS1_S1 + 69) +
                one_over_two_q * *(b + 121 * OS1_S1 + 44);
            *(b + 121 * OS1_S1 + 103) =
                prefactor_y * *(b + 121 * OS1_S1 + 70) -
                p_over_q * *(b + 168 * OS1_S1 + 70) +
                one_over_two_q * *(b + 84 * OS1_S1 + 70);
            *(b + 121 * OS1_S1 + 104) =
                prefactor_x * *(b + 121 * OS1_S1 + 76) -
                p_over_q * *(b + 166 * OS1_S1 + 76) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 76) +
                one_over_two_q * *(b + 121 * OS1_S1 + 55);
            *(b + 121 * OS1_S1 + 105) =
                prefactor_x * *(b + 121 * OS1_S1 + 77) -
                p_over_q * *(b + 166 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 77);
            *(b + 121 * OS1_S1 + 106) = prefactor_z * *(b + 121 * OS1_S1 + 71) -
                                        p_over_q * *(b + 169 * OS1_S1 + 71);
            *(b + 121 * OS1_S1 + 107) =
                prefactor_x * *(b + 121 * OS1_S1 + 79) -
                p_over_q * *(b + 166 * OS1_S1 + 79) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 79);
            *(b + 121 * OS1_S1 + 108) =
                prefactor_x * *(b + 121 * OS1_S1 + 80) -
                p_over_q * *(b + 166 * OS1_S1 + 80) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 80);
            *(b + 121 * OS1_S1 + 109) =
                prefactor_x * *(b + 121 * OS1_S1 + 81) -
                p_over_q * *(b + 166 * OS1_S1 + 81) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 81);
            *(b + 121 * OS1_S1 + 110) =
                prefactor_y * *(b + 121 * OS1_S1 + 76) -
                p_over_q * *(b + 168 * OS1_S1 + 76) +
                one_over_two_q * *(b + 84 * OS1_S1 + 76);
            *(b + 121 * OS1_S1 + 111) =
                prefactor_x * *(b + 121 * OS1_S1 + 83) -
                p_over_q * *(b + 166 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 83);
            *(b + 121 * OS1_S1 + 112) =
                prefactor_y * *(b + 121 * OS1_S1 + 77) -
                p_over_q * *(b + 168 * OS1_S1 + 77) +
                one_over_two_q * *(b + 84 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 121 * OS1_S1 + 50);
            *(b + 121 * OS1_S1 + 113) = prefactor_z * *(b + 121 * OS1_S1 + 77) -
                                        p_over_q * *(b + 169 * OS1_S1 + 77);
            *(b + 121 * OS1_S1 + 114) =
                prefactor_z * *(b + 121 * OS1_S1 + 78) -
                p_over_q * *(b + 169 * OS1_S1 + 78) +
                one_over_two_q * *(b + 121 * OS1_S1 + 50);
            *(b + 121 * OS1_S1 + 115) =
                prefactor_z * *(b + 121 * OS1_S1 + 79) -
                p_over_q * *(b + 169 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 51);
            *(b + 121 * OS1_S1 + 116) =
                prefactor_y * *(b + 121 * OS1_S1 + 81) -
                p_over_q * *(b + 168 * OS1_S1 + 81) +
                one_over_two_q * *(b + 84 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 54);
            *(b + 121 * OS1_S1 + 117) =
                prefactor_y * *(b + 121 * OS1_S1 + 82) -
                p_over_q * *(b + 168 * OS1_S1 + 82) +
                one_over_two_q * *(b + 84 * OS1_S1 + 82) +
                one_over_two_q * *(b + 121 * OS1_S1 + 55);
            *(b + 121 * OS1_S1 + 118) =
                prefactor_y * *(b + 121 * OS1_S1 + 83) -
                p_over_q * *(b + 168 * OS1_S1 + 83) +
                one_over_two_q * *(b + 84 * OS1_S1 + 83);
            *(b + 121 * OS1_S1 + 119) =
                prefactor_z * *(b + 121 * OS1_S1 + 83) -
                p_over_q * *(b + 169 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 121 * OS1_S1 + 55);
            *(b + 122 * OS1_S1 + 84) =
                prefactor_x * *(b + 122 * OS1_S1 + 56) -
                p_over_q * *(b + 167 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 122 * OS1_S1 + 35);
            *(b + 122 * OS1_S1 + 85) = prefactor_y * *(b + 122 * OS1_S1 + 56) -
                                       p_over_q * *(b + 169 * OS1_S1 + 56);
            *(b + 122 * OS1_S1 + 86) = prefactor_z * *(b + 122 * OS1_S1 + 56) -
                                       p_over_q * *(b + 170 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 56);
            *(b + 122 * OS1_S1 + 87) =
                prefactor_y * *(b + 122 * OS1_S1 + 57) -
                p_over_q * *(b + 169 * OS1_S1 + 57) +
                one_over_two_q * *(b + 122 * OS1_S1 + 35);
            *(b + 122 * OS1_S1 + 88) = prefactor_y * *(b + 122 * OS1_S1 + 58) -
                                       p_over_q * *(b + 169 * OS1_S1 + 58);
            *(b + 122 * OS1_S1 + 89) =
                prefactor_z * *(b + 122 * OS1_S1 + 58) -
                p_over_q * *(b + 170 * OS1_S1 + 58) +
                one_over_two_q * *(b + 84 * OS1_S1 + 58) +
                one_over_two_q * *(b + 122 * OS1_S1 + 35);
            *(b + 122 * OS1_S1 + 90) =
                prefactor_y * *(b + 122 * OS1_S1 + 59) -
                p_over_q * *(b + 169 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 36);
            *(b + 122 * OS1_S1 + 91) = prefactor_z * *(b + 122 * OS1_S1 + 59) -
                                       p_over_q * *(b + 170 * OS1_S1 + 59) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 59);
            *(b + 122 * OS1_S1 + 92) = prefactor_y * *(b + 122 * OS1_S1 + 61) -
                                       p_over_q * *(b + 169 * OS1_S1 + 61);
            *(b + 122 * OS1_S1 + 93) =
                prefactor_z * *(b + 122 * OS1_S1 + 61) -
                p_over_q * *(b + 170 * OS1_S1 + 61) +
                one_over_two_q * *(b + 84 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 37);
            *(b + 122 * OS1_S1 + 94) =
                prefactor_x * *(b + 122 * OS1_S1 + 66) -
                p_over_q * *(b + 167 * OS1_S1 + 66) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 45);
            *(b + 122 * OS1_S1 + 95) = prefactor_z * *(b + 122 * OS1_S1 + 62) -
                                       p_over_q * *(b + 170 * OS1_S1 + 62) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 62);
            *(b + 122 * OS1_S1 + 96) =
                prefactor_y * *(b + 122 * OS1_S1 + 64) -
                p_over_q * *(b + 169 * OS1_S1 + 64) +
                one_over_two_q * *(b + 122 * OS1_S1 + 40);
            *(b + 122 * OS1_S1 + 97) = prefactor_y * *(b + 122 * OS1_S1 + 65) -
                                       p_over_q * *(b + 169 * OS1_S1 + 65);
            *(b + 122 * OS1_S1 + 98) =
                prefactor_x * *(b + 122 * OS1_S1 + 70) -
                p_over_q * *(b + 167 * OS1_S1 + 70) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 49);
            *(b + 122 * OS1_S1 + 99) =
                prefactor_x * *(b + 122 * OS1_S1 + 71) -
                p_over_q * *(b + 167 * OS1_S1 + 71) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 71) +
                one_over_two_q * *(b + 122 * OS1_S1 + 50);
            *(b + 122 * OS1_S1 + 100) =
                prefactor_z * *(b + 122 * OS1_S1 + 66) -
                p_over_q * *(b + 170 * OS1_S1 + 66) +
                one_over_two_q * *(b + 84 * OS1_S1 + 66);
            *(b + 122 * OS1_S1 + 101) =
                prefactor_z * *(b + 122 * OS1_S1 + 67) -
                p_over_q * *(b + 170 * OS1_S1 + 67) +
                one_over_two_q * *(b + 84 * OS1_S1 + 67) +
                one_over_two_q * *(b + 122 * OS1_S1 + 41);
            *(b + 122 * OS1_S1 + 102) =
                prefactor_y * *(b + 122 * OS1_S1 + 69) -
                p_over_q * *(b + 169 * OS1_S1 + 69) +
                one_over_two_q * *(b + 122 * OS1_S1 + 44);
            *(b + 122 * OS1_S1 + 103) = prefactor_y * *(b + 122 * OS1_S1 + 70) -
                                        p_over_q * *(b + 169 * OS1_S1 + 70);
            *(b + 122 * OS1_S1 + 104) =
                prefactor_x * *(b + 122 * OS1_S1 + 76) -
                p_over_q * *(b + 167 * OS1_S1 + 76) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 76) +
                one_over_two_q * *(b + 122 * OS1_S1 + 55);
            *(b + 122 * OS1_S1 + 105) =
                prefactor_x * *(b + 122 * OS1_S1 + 77) -
                p_over_q * *(b + 167 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 77);
            *(b + 122 * OS1_S1 + 106) =
                prefactor_z * *(b + 122 * OS1_S1 + 71) -
                p_over_q * *(b + 170 * OS1_S1 + 71) +
                one_over_two_q * *(b + 84 * OS1_S1 + 71);
            *(b + 122 * OS1_S1 + 107) =
                prefactor_x * *(b + 122 * OS1_S1 + 79) -
                p_over_q * *(b + 167 * OS1_S1 + 79) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 79);
            *(b + 122 * OS1_S1 + 108) =
                prefactor_x * *(b + 122 * OS1_S1 + 80) -
                p_over_q * *(b + 167 * OS1_S1 + 80) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 80);
            *(b + 122 * OS1_S1 + 109) =
                prefactor_x * *(b + 122 * OS1_S1 + 81) -
                p_over_q * *(b + 167 * OS1_S1 + 81) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 81);
            *(b + 122 * OS1_S1 + 110) = prefactor_y * *(b + 122 * OS1_S1 + 76) -
                                        p_over_q * *(b + 169 * OS1_S1 + 76);
            *(b + 122 * OS1_S1 + 111) =
                prefactor_x * *(b + 122 * OS1_S1 + 83) -
                p_over_q * *(b + 167 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 83);
            *(b + 122 * OS1_S1 + 112) =
                prefactor_y * *(b + 122 * OS1_S1 + 77) -
                p_over_q * *(b + 169 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 122 * OS1_S1 + 50);
            *(b + 122 * OS1_S1 + 113) =
                prefactor_z * *(b + 122 * OS1_S1 + 77) -
                p_over_q * *(b + 170 * OS1_S1 + 77) +
                one_over_two_q * *(b + 84 * OS1_S1 + 77);
            *(b + 122 * OS1_S1 + 114) =
                prefactor_z * *(b + 122 * OS1_S1 + 78) -
                p_over_q * *(b + 170 * OS1_S1 + 78) +
                one_over_two_q * *(b + 84 * OS1_S1 + 78) +
                one_over_two_q * *(b + 122 * OS1_S1 + 50);
            *(b + 122 * OS1_S1 + 115) =
                prefactor_z * *(b + 122 * OS1_S1 + 79) -
                p_over_q * *(b + 170 * OS1_S1 + 79) +
                one_over_two_q * *(b + 84 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 51);
            *(b + 122 * OS1_S1 + 116) =
                prefactor_y * *(b + 122 * OS1_S1 + 81) -
                p_over_q * *(b + 169 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 54);
            *(b + 122 * OS1_S1 + 117) =
                prefactor_y * *(b + 122 * OS1_S1 + 82) -
                p_over_q * *(b + 169 * OS1_S1 + 82) +
                one_over_two_q * *(b + 122 * OS1_S1 + 55);
            *(b + 122 * OS1_S1 + 118) = prefactor_y * *(b + 122 * OS1_S1 + 83) -
                                        p_over_q * *(b + 169 * OS1_S1 + 83);
            *(b + 122 * OS1_S1 + 119) =
                prefactor_z * *(b + 122 * OS1_S1 + 83) -
                p_over_q * *(b + 170 * OS1_S1 + 83) +
                one_over_two_q * *(b + 84 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 122 * OS1_S1 + 55);
            *(b + 123 * OS1_S1 + 84) =
                prefactor_x * *(b + 123 * OS1_S1 + 56) -
                p_over_q * *(b + 168 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 123 * OS1_S1 + 35);
            *(b + 123 * OS1_S1 + 85) =
                prefactor_y * *(b + 123 * OS1_S1 + 56) -
                p_over_q * *(b + 171 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 56);
            *(b + 123 * OS1_S1 + 86) = prefactor_z * *(b + 123 * OS1_S1 + 56) -
                                       p_over_q * *(b + 172 * OS1_S1 + 56);
            *(b + 123 * OS1_S1 + 87) =
                prefactor_y * *(b + 123 * OS1_S1 + 57) -
                p_over_q * *(b + 171 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 57) +
                one_over_two_q * *(b + 123 * OS1_S1 + 35);
            *(b + 123 * OS1_S1 + 88) = prefactor_z * *(b + 123 * OS1_S1 + 57) -
                                       p_over_q * *(b + 172 * OS1_S1 + 57);
            *(b + 123 * OS1_S1 + 89) =
                prefactor_z * *(b + 123 * OS1_S1 + 58) -
                p_over_q * *(b + 172 * OS1_S1 + 58) +
                one_over_two_q * *(b + 123 * OS1_S1 + 35);
            *(b + 123 * OS1_S1 + 90) =
                prefactor_y * *(b + 123 * OS1_S1 + 59) -
                p_over_q * *(b + 171 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 36);
            *(b + 123 * OS1_S1 + 91) = prefactor_z * *(b + 123 * OS1_S1 + 59) -
                                       p_over_q * *(b + 172 * OS1_S1 + 59);
            *(b + 123 * OS1_S1 + 92) =
                prefactor_y * *(b + 123 * OS1_S1 + 61) -
                p_over_q * *(b + 171 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 61);
            *(b + 123 * OS1_S1 + 93) =
                prefactor_z * *(b + 123 * OS1_S1 + 61) -
                p_over_q * *(b + 172 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 37);
            *(b + 123 * OS1_S1 + 94) =
                prefactor_x * *(b + 123 * OS1_S1 + 66) -
                p_over_q * *(b + 168 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 45);
            *(b + 123 * OS1_S1 + 95) = prefactor_z * *(b + 123 * OS1_S1 + 62) -
                                       p_over_q * *(b + 172 * OS1_S1 + 62);
            *(b + 123 * OS1_S1 + 96) =
                prefactor_z * *(b + 123 * OS1_S1 + 63) -
                p_over_q * *(b + 172 * OS1_S1 + 63) +
                one_over_two_q * *(b + 123 * OS1_S1 + 38);
            *(b + 123 * OS1_S1 + 97) =
                prefactor_y * *(b + 123 * OS1_S1 + 65) -
                p_over_q * *(b + 171 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 65);
            *(b + 123 * OS1_S1 + 98) =
                prefactor_x * *(b + 123 * OS1_S1 + 70) -
                p_over_q * *(b + 168 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 49);
            *(b + 123 * OS1_S1 + 99) =
                prefactor_x * *(b + 123 * OS1_S1 + 71) -
                p_over_q * *(b + 168 * OS1_S1 + 71) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 71) +
                one_over_two_q * *(b + 123 * OS1_S1 + 50);
            *(b + 123 * OS1_S1 + 100) = prefactor_z * *(b + 123 * OS1_S1 + 66) -
                                        p_over_q * *(b + 172 * OS1_S1 + 66);
            *(b + 123 * OS1_S1 + 101) =
                prefactor_z * *(b + 123 * OS1_S1 + 67) -
                p_over_q * *(b + 172 * OS1_S1 + 67) +
                one_over_two_q * *(b + 123 * OS1_S1 + 41);
            *(b + 123 * OS1_S1 + 102) =
                prefactor_y * *(b + 123 * OS1_S1 + 69) -
                p_over_q * *(b + 171 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 69) +
                one_over_two_q * *(b + 123 * OS1_S1 + 44);
            *(b + 123 * OS1_S1 + 103) =
                prefactor_y * *(b + 123 * OS1_S1 + 70) -
                p_over_q * *(b + 171 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 70);
            *(b + 123 * OS1_S1 + 104) =
                prefactor_x * *(b + 123 * OS1_S1 + 76) -
                p_over_q * *(b + 168 * OS1_S1 + 76) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 76) +
                one_over_two_q * *(b + 123 * OS1_S1 + 55);
            *(b + 123 * OS1_S1 + 105) =
                prefactor_x * *(b + 123 * OS1_S1 + 77) -
                p_over_q * *(b + 168 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 77);
            *(b + 123 * OS1_S1 + 106) = prefactor_z * *(b + 123 * OS1_S1 + 71) -
                                        p_over_q * *(b + 172 * OS1_S1 + 71);
            *(b + 123 * OS1_S1 + 107) =
                prefactor_x * *(b + 123 * OS1_S1 + 79) -
                p_over_q * *(b + 168 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 79);
            *(b + 123 * OS1_S1 + 108) =
                prefactor_x * *(b + 123 * OS1_S1 + 80) -
                p_over_q * *(b + 168 * OS1_S1 + 80) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 80);
            *(b + 123 * OS1_S1 + 109) =
                prefactor_x * *(b + 123 * OS1_S1 + 81) -
                p_over_q * *(b + 168 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 81);
            *(b + 123 * OS1_S1 + 110) =
                prefactor_y * *(b + 123 * OS1_S1 + 76) -
                p_over_q * *(b + 171 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 76);
            *(b + 123 * OS1_S1 + 111) =
                prefactor_x * *(b + 123 * OS1_S1 + 83) -
                p_over_q * *(b + 168 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 83);
            *(b + 123 * OS1_S1 + 112) =
                prefactor_y * *(b + 123 * OS1_S1 + 77) -
                p_over_q * *(b + 171 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 123 * OS1_S1 + 50);
            *(b + 123 * OS1_S1 + 113) = prefactor_z * *(b + 123 * OS1_S1 + 77) -
                                        p_over_q * *(b + 172 * OS1_S1 + 77);
            *(b + 123 * OS1_S1 + 114) =
                prefactor_z * *(b + 123 * OS1_S1 + 78) -
                p_over_q * *(b + 172 * OS1_S1 + 78) +
                one_over_two_q * *(b + 123 * OS1_S1 + 50);
            *(b + 123 * OS1_S1 + 115) =
                prefactor_z * *(b + 123 * OS1_S1 + 79) -
                p_over_q * *(b + 172 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 51);
            *(b + 123 * OS1_S1 + 116) =
                prefactor_y * *(b + 123 * OS1_S1 + 81) -
                p_over_q * *(b + 171 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 54);
            *(b + 123 * OS1_S1 + 117) =
                prefactor_y * *(b + 123 * OS1_S1 + 82) -
                p_over_q * *(b + 171 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 82) +
                one_over_two_q * *(b + 123 * OS1_S1 + 55);
            *(b + 123 * OS1_S1 + 118) =
                prefactor_y * *(b + 123 * OS1_S1 + 83) -
                p_over_q * *(b + 171 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 83);
            *(b + 123 * OS1_S1 + 119) =
                prefactor_z * *(b + 123 * OS1_S1 + 83) -
                p_over_q * *(b + 172 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 123 * OS1_S1 + 55);
            *(b + 124 * OS1_S1 + 84) =
                prefactor_x * *(b + 124 * OS1_S1 + 56) -
                p_over_q * *(b + 169 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 124 * OS1_S1 + 35);
            *(b + 124 * OS1_S1 + 85) = prefactor_y * *(b + 124 * OS1_S1 + 56) -
                                       p_over_q * *(b + 172 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 56);
            *(b + 124 * OS1_S1 + 86) = prefactor_z * *(b + 124 * OS1_S1 + 56) -
                                       p_over_q * *(b + 173 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 56);
            *(b + 124 * OS1_S1 + 87) =
                prefactor_y * *(b + 124 * OS1_S1 + 57) -
                p_over_q * *(b + 172 * OS1_S1 + 57) +
                one_over_two_q * *(b + 86 * OS1_S1 + 57) +
                one_over_two_q * *(b + 124 * OS1_S1 + 35);
            *(b + 124 * OS1_S1 + 88) = prefactor_z * *(b + 124 * OS1_S1 + 57) -
                                       p_over_q * *(b + 173 * OS1_S1 + 57) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 57);
            *(b + 124 * OS1_S1 + 89) =
                prefactor_z * *(b + 124 * OS1_S1 + 58) -
                p_over_q * *(b + 173 * OS1_S1 + 58) +
                one_over_two_q * *(b + 85 * OS1_S1 + 58) +
                one_over_two_q * *(b + 124 * OS1_S1 + 35);
            *(b + 124 * OS1_S1 + 90) =
                prefactor_y * *(b + 124 * OS1_S1 + 59) -
                p_over_q * *(b + 172 * OS1_S1 + 59) +
                one_over_two_q * *(b + 86 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 36);
            *(b + 124 * OS1_S1 + 91) = prefactor_z * *(b + 124 * OS1_S1 + 59) -
                                       p_over_q * *(b + 173 * OS1_S1 + 59) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 59);
            *(b + 124 * OS1_S1 + 92) = prefactor_y * *(b + 124 * OS1_S1 + 61) -
                                       p_over_q * *(b + 172 * OS1_S1 + 61) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 61);
            *(b + 124 * OS1_S1 + 93) =
                prefactor_z * *(b + 124 * OS1_S1 + 61) -
                p_over_q * *(b + 173 * OS1_S1 + 61) +
                one_over_two_q * *(b + 85 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 37);
            *(b + 124 * OS1_S1 + 94) =
                prefactor_x * *(b + 124 * OS1_S1 + 66) -
                p_over_q * *(b + 169 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 45);
            *(b + 124 * OS1_S1 + 95) = prefactor_z * *(b + 124 * OS1_S1 + 62) -
                                       p_over_q * *(b + 173 * OS1_S1 + 62) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 62);
            *(b + 124 * OS1_S1 + 96) =
                prefactor_z * *(b + 124 * OS1_S1 + 63) -
                p_over_q * *(b + 173 * OS1_S1 + 63) +
                one_over_two_q * *(b + 85 * OS1_S1 + 63) +
                one_over_two_q * *(b + 124 * OS1_S1 + 38);
            *(b + 124 * OS1_S1 + 97) = prefactor_y * *(b + 124 * OS1_S1 + 65) -
                                       p_over_q * *(b + 172 * OS1_S1 + 65) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 65);
            *(b + 124 * OS1_S1 + 98) =
                prefactor_x * *(b + 124 * OS1_S1 + 70) -
                p_over_q * *(b + 169 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 49);
            *(b + 124 * OS1_S1 + 99) =
                prefactor_x * *(b + 124 * OS1_S1 + 71) -
                p_over_q * *(b + 169 * OS1_S1 + 71) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 71) +
                one_over_two_q * *(b + 124 * OS1_S1 + 50);
            *(b + 124 * OS1_S1 + 100) =
                prefactor_z * *(b + 124 * OS1_S1 + 66) -
                p_over_q * *(b + 173 * OS1_S1 + 66) +
                one_over_two_q * *(b + 85 * OS1_S1 + 66);
            *(b + 124 * OS1_S1 + 101) =
                prefactor_z * *(b + 124 * OS1_S1 + 67) -
                p_over_q * *(b + 173 * OS1_S1 + 67) +
                one_over_two_q * *(b + 85 * OS1_S1 + 67) +
                one_over_two_q * *(b + 124 * OS1_S1 + 41);
            *(b + 124 * OS1_S1 + 102) =
                prefactor_y * *(b + 124 * OS1_S1 + 69) -
                p_over_q * *(b + 172 * OS1_S1 + 69) +
                one_over_two_q * *(b + 86 * OS1_S1 + 69) +
                one_over_two_q * *(b + 124 * OS1_S1 + 44);
            *(b + 124 * OS1_S1 + 103) =
                prefactor_y * *(b + 124 * OS1_S1 + 70) -
                p_over_q * *(b + 172 * OS1_S1 + 70) +
                one_over_two_q * *(b + 86 * OS1_S1 + 70);
            *(b + 124 * OS1_S1 + 104) =
                prefactor_x * *(b + 124 * OS1_S1 + 76) -
                p_over_q * *(b + 169 * OS1_S1 + 76) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 76) +
                one_over_two_q * *(b + 124 * OS1_S1 + 55);
            *(b + 124 * OS1_S1 + 105) =
                prefactor_x * *(b + 124 * OS1_S1 + 77) -
                p_over_q * *(b + 169 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 77);
            *(b + 124 * OS1_S1 + 106) =
                prefactor_z * *(b + 124 * OS1_S1 + 71) -
                p_over_q * *(b + 173 * OS1_S1 + 71) +
                one_over_two_q * *(b + 85 * OS1_S1 + 71);
            *(b + 124 * OS1_S1 + 107) =
                prefactor_x * *(b + 124 * OS1_S1 + 79) -
                p_over_q * *(b + 169 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 79);
            *(b + 124 * OS1_S1 + 108) =
                prefactor_x * *(b + 124 * OS1_S1 + 80) -
                p_over_q * *(b + 169 * OS1_S1 + 80) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 80);
            *(b + 124 * OS1_S1 + 109) =
                prefactor_x * *(b + 124 * OS1_S1 + 81) -
                p_over_q * *(b + 169 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 81);
            *(b + 124 * OS1_S1 + 110) =
                prefactor_y * *(b + 124 * OS1_S1 + 76) -
                p_over_q * *(b + 172 * OS1_S1 + 76) +
                one_over_two_q * *(b + 86 * OS1_S1 + 76);
            *(b + 124 * OS1_S1 + 111) =
                prefactor_x * *(b + 124 * OS1_S1 + 83) -
                p_over_q * *(b + 169 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 83);
            *(b + 124 * OS1_S1 + 112) =
                prefactor_y * *(b + 124 * OS1_S1 + 77) -
                p_over_q * *(b + 172 * OS1_S1 + 77) +
                one_over_two_q * *(b + 86 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 124 * OS1_S1 + 50);
            *(b + 124 * OS1_S1 + 113) =
                prefactor_z * *(b + 124 * OS1_S1 + 77) -
                p_over_q * *(b + 173 * OS1_S1 + 77) +
                one_over_two_q * *(b + 85 * OS1_S1 + 77);
            *(b + 124 * OS1_S1 + 114) =
                prefactor_z * *(b + 124 * OS1_S1 + 78) -
                p_over_q * *(b + 173 * OS1_S1 + 78) +
                one_over_two_q * *(b + 85 * OS1_S1 + 78) +
                one_over_two_q * *(b + 124 * OS1_S1 + 50);
            *(b + 124 * OS1_S1 + 115) =
                prefactor_z * *(b + 124 * OS1_S1 + 79) -
                p_over_q * *(b + 173 * OS1_S1 + 79) +
                one_over_two_q * *(b + 85 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 51);
            *(b + 124 * OS1_S1 + 116) =
                prefactor_y * *(b + 124 * OS1_S1 + 81) -
                p_over_q * *(b + 172 * OS1_S1 + 81) +
                one_over_two_q * *(b + 86 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 54);
            *(b + 124 * OS1_S1 + 117) =
                prefactor_y * *(b + 124 * OS1_S1 + 82) -
                p_over_q * *(b + 172 * OS1_S1 + 82) +
                one_over_two_q * *(b + 86 * OS1_S1 + 82) +
                one_over_two_q * *(b + 124 * OS1_S1 + 55);
            *(b + 124 * OS1_S1 + 118) =
                prefactor_y * *(b + 124 * OS1_S1 + 83) -
                p_over_q * *(b + 172 * OS1_S1 + 83) +
                one_over_two_q * *(b + 86 * OS1_S1 + 83);
            *(b + 124 * OS1_S1 + 119) =
                prefactor_z * *(b + 124 * OS1_S1 + 83) -
                p_over_q * *(b + 173 * OS1_S1 + 83) +
                one_over_two_q * *(b + 85 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 124 * OS1_S1 + 55);
            *(b + 125 * OS1_S1 + 84) =
                prefactor_x * *(b + 125 * OS1_S1 + 56) -
                p_over_q * *(b + 170 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 125 * OS1_S1 + 35);
            *(b + 125 * OS1_S1 + 85) = prefactor_y * *(b + 125 * OS1_S1 + 56) -
                                       p_over_q * *(b + 173 * OS1_S1 + 56);
            *(b + 125 * OS1_S1 + 86) =
                prefactor_z * *(b + 125 * OS1_S1 + 56) -
                p_over_q * *(b + 174 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 56);
            *(b + 125 * OS1_S1 + 87) =
                prefactor_y * *(b + 125 * OS1_S1 + 57) -
                p_over_q * *(b + 173 * OS1_S1 + 57) +
                one_over_two_q * *(b + 125 * OS1_S1 + 35);
            *(b + 125 * OS1_S1 + 88) = prefactor_y * *(b + 125 * OS1_S1 + 58) -
                                       p_over_q * *(b + 173 * OS1_S1 + 58);
            *(b + 125 * OS1_S1 + 89) =
                prefactor_z * *(b + 125 * OS1_S1 + 58) -
                p_over_q * *(b + 174 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 58) +
                one_over_two_q * *(b + 125 * OS1_S1 + 35);
            *(b + 125 * OS1_S1 + 90) =
                prefactor_y * *(b + 125 * OS1_S1 + 59) -
                p_over_q * *(b + 173 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 36);
            *(b + 125 * OS1_S1 + 91) =
                prefactor_z * *(b + 125 * OS1_S1 + 59) -
                p_over_q * *(b + 174 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 59);
            *(b + 125 * OS1_S1 + 92) = prefactor_y * *(b + 125 * OS1_S1 + 61) -
                                       p_over_q * *(b + 173 * OS1_S1 + 61);
            *(b + 125 * OS1_S1 + 93) =
                prefactor_z * *(b + 125 * OS1_S1 + 61) -
                p_over_q * *(b + 174 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 37);
            *(b + 125 * OS1_S1 + 94) =
                prefactor_x * *(b + 125 * OS1_S1 + 66) -
                p_over_q * *(b + 170 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 45);
            *(b + 125 * OS1_S1 + 95) =
                prefactor_z * *(b + 125 * OS1_S1 + 62) -
                p_over_q * *(b + 174 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 62);
            *(b + 125 * OS1_S1 + 96) =
                prefactor_y * *(b + 125 * OS1_S1 + 64) -
                p_over_q * *(b + 173 * OS1_S1 + 64) +
                one_over_two_q * *(b + 125 * OS1_S1 + 40);
            *(b + 125 * OS1_S1 + 97) = prefactor_y * *(b + 125 * OS1_S1 + 65) -
                                       p_over_q * *(b + 173 * OS1_S1 + 65);
            *(b + 125 * OS1_S1 + 98) =
                prefactor_x * *(b + 125 * OS1_S1 + 70) -
                p_over_q * *(b + 170 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 49);
            *(b + 125 * OS1_S1 + 99) =
                prefactor_x * *(b + 125 * OS1_S1 + 71) -
                p_over_q * *(b + 170 * OS1_S1 + 71) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 71) +
                one_over_two_q * *(b + 125 * OS1_S1 + 50);
            *(b + 125 * OS1_S1 + 100) =
                prefactor_z * *(b + 125 * OS1_S1 + 66) -
                p_over_q * *(b + 174 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 66);
            *(b + 125 * OS1_S1 + 101) =
                prefactor_z * *(b + 125 * OS1_S1 + 67) -
                p_over_q * *(b + 174 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 67) +
                one_over_two_q * *(b + 125 * OS1_S1 + 41);
            *(b + 125 * OS1_S1 + 102) =
                prefactor_y * *(b + 125 * OS1_S1 + 69) -
                p_over_q * *(b + 173 * OS1_S1 + 69) +
                one_over_two_q * *(b + 125 * OS1_S1 + 44);
            *(b + 125 * OS1_S1 + 103) = prefactor_y * *(b + 125 * OS1_S1 + 70) -
                                        p_over_q * *(b + 173 * OS1_S1 + 70);
            *(b + 125 * OS1_S1 + 104) =
                prefactor_x * *(b + 125 * OS1_S1 + 76) -
                p_over_q * *(b + 170 * OS1_S1 + 76) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 76) +
                one_over_two_q * *(b + 125 * OS1_S1 + 55);
            *(b + 125 * OS1_S1 + 105) =
                prefactor_x * *(b + 125 * OS1_S1 + 77) -
                p_over_q * *(b + 170 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 77);
            *(b + 125 * OS1_S1 + 106) =
                prefactor_z * *(b + 125 * OS1_S1 + 71) -
                p_over_q * *(b + 174 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 71);
            *(b + 125 * OS1_S1 + 107) =
                prefactor_x * *(b + 125 * OS1_S1 + 79) -
                p_over_q * *(b + 170 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 79);
            *(b + 125 * OS1_S1 + 108) =
                prefactor_x * *(b + 125 * OS1_S1 + 80) -
                p_over_q * *(b + 170 * OS1_S1 + 80) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 80);
            *(b + 125 * OS1_S1 + 109) =
                prefactor_x * *(b + 125 * OS1_S1 + 81) -
                p_over_q * *(b + 170 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 81);
            *(b + 125 * OS1_S1 + 110) = prefactor_y * *(b + 125 * OS1_S1 + 76) -
                                        p_over_q * *(b + 173 * OS1_S1 + 76);
            *(b + 125 * OS1_S1 + 111) =
                prefactor_x * *(b + 125 * OS1_S1 + 83) -
                p_over_q * *(b + 170 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 83);
            *(b + 125 * OS1_S1 + 112) =
                prefactor_y * *(b + 125 * OS1_S1 + 77) -
                p_over_q * *(b + 173 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 125 * OS1_S1 + 50);
            *(b + 125 * OS1_S1 + 113) =
                prefactor_z * *(b + 125 * OS1_S1 + 77) -
                p_over_q * *(b + 174 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 77);
            *(b + 125 * OS1_S1 + 114) =
                prefactor_z * *(b + 125 * OS1_S1 + 78) -
                p_over_q * *(b + 174 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 78) +
                one_over_two_q * *(b + 125 * OS1_S1 + 50);
            *(b + 125 * OS1_S1 + 115) =
                prefactor_z * *(b + 125 * OS1_S1 + 79) -
                p_over_q * *(b + 174 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 51);
            *(b + 125 * OS1_S1 + 116) =
                prefactor_y * *(b + 125 * OS1_S1 + 81) -
                p_over_q * *(b + 173 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 54);
            *(b + 125 * OS1_S1 + 117) =
                prefactor_y * *(b + 125 * OS1_S1 + 82) -
                p_over_q * *(b + 173 * OS1_S1 + 82) +
                one_over_two_q * *(b + 125 * OS1_S1 + 55);
            *(b + 125 * OS1_S1 + 118) = prefactor_y * *(b + 125 * OS1_S1 + 83) -
                                        p_over_q * *(b + 173 * OS1_S1 + 83);
            *(b + 125 * OS1_S1 + 119) =
                prefactor_z * *(b + 125 * OS1_S1 + 83) -
                p_over_q * *(b + 174 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 125 * OS1_S1 + 55);
            *(b + 126 * OS1_S1 + 84) =
                prefactor_x * *(b + 126 * OS1_S1 + 56) -
                p_over_q * *(b + 171 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 35);
            *(b + 126 * OS1_S1 + 85) =
                prefactor_y * *(b + 126 * OS1_S1 + 56) -
                p_over_q * *(b + 175 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 56);
            *(b + 126 * OS1_S1 + 86) = prefactor_z * *(b + 126 * OS1_S1 + 56) -
                                       p_over_q * *(b + 176 * OS1_S1 + 56);
            *(b + 126 * OS1_S1 + 87) =
                prefactor_y * *(b + 126 * OS1_S1 + 57) -
                p_over_q * *(b + 175 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 57) +
                one_over_two_q * *(b + 126 * OS1_S1 + 35);
            *(b + 126 * OS1_S1 + 88) = prefactor_z * *(b + 126 * OS1_S1 + 57) -
                                       p_over_q * *(b + 176 * OS1_S1 + 57);
            *(b + 126 * OS1_S1 + 89) =
                prefactor_z * *(b + 126 * OS1_S1 + 58) -
                p_over_q * *(b + 176 * OS1_S1 + 58) +
                one_over_two_q * *(b + 126 * OS1_S1 + 35);
            *(b + 126 * OS1_S1 + 90) =
                prefactor_y * *(b + 126 * OS1_S1 + 59) -
                p_over_q * *(b + 175 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 36);
            *(b + 126 * OS1_S1 + 91) = prefactor_z * *(b + 126 * OS1_S1 + 59) -
                                       p_over_q * *(b + 176 * OS1_S1 + 59);
            *(b + 126 * OS1_S1 + 92) =
                prefactor_y * *(b + 126 * OS1_S1 + 61) -
                p_over_q * *(b + 175 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 61);
            *(b + 126 * OS1_S1 + 93) =
                prefactor_z * *(b + 126 * OS1_S1 + 61) -
                p_over_q * *(b + 176 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 37);
            *(b + 126 * OS1_S1 + 94) =
                prefactor_x * *(b + 126 * OS1_S1 + 66) -
                p_over_q * *(b + 171 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 45);
            *(b + 126 * OS1_S1 + 95) = prefactor_z * *(b + 126 * OS1_S1 + 62) -
                                       p_over_q * *(b + 176 * OS1_S1 + 62);
            *(b + 126 * OS1_S1 + 96) =
                prefactor_z * *(b + 126 * OS1_S1 + 63) -
                p_over_q * *(b + 176 * OS1_S1 + 63) +
                one_over_two_q * *(b + 126 * OS1_S1 + 38);
            *(b + 126 * OS1_S1 + 97) =
                prefactor_y * *(b + 126 * OS1_S1 + 65) -
                p_over_q * *(b + 175 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 65);
            *(b + 126 * OS1_S1 + 98) =
                prefactor_x * *(b + 126 * OS1_S1 + 70) -
                p_over_q * *(b + 171 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 49);
            *(b + 126 * OS1_S1 + 99) =
                prefactor_x * *(b + 126 * OS1_S1 + 71) -
                p_over_q * *(b + 171 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 71) +
                one_over_two_q * *(b + 126 * OS1_S1 + 50);
            *(b + 126 * OS1_S1 + 100) = prefactor_z * *(b + 126 * OS1_S1 + 66) -
                                        p_over_q * *(b + 176 * OS1_S1 + 66);
            *(b + 126 * OS1_S1 + 101) =
                prefactor_z * *(b + 126 * OS1_S1 + 67) -
                p_over_q * *(b + 176 * OS1_S1 + 67) +
                one_over_two_q * *(b + 126 * OS1_S1 + 41);
            *(b + 126 * OS1_S1 + 102) =
                prefactor_y * *(b + 126 * OS1_S1 + 69) -
                p_over_q * *(b + 175 * OS1_S1 + 69) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 69) +
                one_over_two_q * *(b + 126 * OS1_S1 + 44);
            *(b + 126 * OS1_S1 + 103) =
                prefactor_y * *(b + 126 * OS1_S1 + 70) -
                p_over_q * *(b + 175 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 70);
            *(b + 126 * OS1_S1 + 104) =
                prefactor_x * *(b + 126 * OS1_S1 + 76) -
                p_over_q * *(b + 171 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 76) +
                one_over_two_q * *(b + 126 * OS1_S1 + 55);
            *(b + 126 * OS1_S1 + 105) =
                prefactor_x * *(b + 126 * OS1_S1 + 77) -
                p_over_q * *(b + 171 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 77);
            *(b + 126 * OS1_S1 + 106) = prefactor_z * *(b + 126 * OS1_S1 + 71) -
                                        p_over_q * *(b + 176 * OS1_S1 + 71);
            *(b + 126 * OS1_S1 + 107) =
                prefactor_x * *(b + 126 * OS1_S1 + 79) -
                p_over_q * *(b + 171 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 79);
            *(b + 126 * OS1_S1 + 108) =
                prefactor_x * *(b + 126 * OS1_S1 + 80) -
                p_over_q * *(b + 171 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 80);
            *(b + 126 * OS1_S1 + 109) =
                prefactor_x * *(b + 126 * OS1_S1 + 81) -
                p_over_q * *(b + 171 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 81);
            *(b + 126 * OS1_S1 + 110) =
                prefactor_y * *(b + 126 * OS1_S1 + 76) -
                p_over_q * *(b + 175 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 76);
            *(b + 126 * OS1_S1 + 111) =
                prefactor_x * *(b + 126 * OS1_S1 + 83) -
                p_over_q * *(b + 171 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 83);
            *(b + 126 * OS1_S1 + 112) =
                prefactor_y * *(b + 126 * OS1_S1 + 77) -
                p_over_q * *(b + 175 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 50);
            *(b + 126 * OS1_S1 + 113) = prefactor_z * *(b + 126 * OS1_S1 + 77) -
                                        p_over_q * *(b + 176 * OS1_S1 + 77);
            *(b + 126 * OS1_S1 + 114) =
                prefactor_z * *(b + 126 * OS1_S1 + 78) -
                p_over_q * *(b + 176 * OS1_S1 + 78) +
                one_over_two_q * *(b + 126 * OS1_S1 + 50);
            *(b + 126 * OS1_S1 + 115) =
                prefactor_z * *(b + 126 * OS1_S1 + 79) -
                p_over_q * *(b + 176 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 51);
            *(b + 126 * OS1_S1 + 116) =
                prefactor_y * *(b + 126 * OS1_S1 + 81) -
                p_over_q * *(b + 175 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 54);
            *(b + 126 * OS1_S1 + 117) =
                prefactor_y * *(b + 126 * OS1_S1 + 82) -
                p_over_q * *(b + 175 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 82) +
                one_over_two_q * *(b + 126 * OS1_S1 + 55);
            *(b + 126 * OS1_S1 + 118) =
                prefactor_y * *(b + 126 * OS1_S1 + 83) -
                p_over_q * *(b + 175 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 83);
            *(b + 126 * OS1_S1 + 119) =
                prefactor_z * *(b + 126 * OS1_S1 + 83) -
                p_over_q * *(b + 176 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 55);
            *(b + 127 * OS1_S1 + 84) =
                prefactor_x * *(b + 127 * OS1_S1 + 56) -
                p_over_q * *(b + 172 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 35);
            *(b + 127 * OS1_S1 + 85) =
                prefactor_y * *(b + 127 * OS1_S1 + 56) -
                p_over_q * *(b + 176 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 56);
            *(b + 127 * OS1_S1 + 86) = prefactor_z * *(b + 127 * OS1_S1 + 56) -
                                       p_over_q * *(b + 177 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 56);
            *(b + 127 * OS1_S1 + 87) =
                prefactor_y * *(b + 127 * OS1_S1 + 57) -
                p_over_q * *(b + 176 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 57) +
                one_over_two_q * *(b + 127 * OS1_S1 + 35);
            *(b + 127 * OS1_S1 + 88) = prefactor_z * *(b + 127 * OS1_S1 + 57) -
                                       p_over_q * *(b + 177 * OS1_S1 + 57) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 57);
            *(b + 127 * OS1_S1 + 89) =
                prefactor_z * *(b + 127 * OS1_S1 + 58) -
                p_over_q * *(b + 177 * OS1_S1 + 58) +
                one_over_two_q * *(b + 87 * OS1_S1 + 58) +
                one_over_two_q * *(b + 127 * OS1_S1 + 35);
            *(b + 127 * OS1_S1 + 90) =
                prefactor_y * *(b + 127 * OS1_S1 + 59) -
                p_over_q * *(b + 176 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 36);
            *(b + 127 * OS1_S1 + 91) = prefactor_z * *(b + 127 * OS1_S1 + 59) -
                                       p_over_q * *(b + 177 * OS1_S1 + 59) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 59);
            *(b + 127 * OS1_S1 + 92) =
                prefactor_y * *(b + 127 * OS1_S1 + 61) -
                p_over_q * *(b + 176 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 61);
            *(b + 127 * OS1_S1 + 93) =
                prefactor_z * *(b + 127 * OS1_S1 + 61) -
                p_over_q * *(b + 177 * OS1_S1 + 61) +
                one_over_two_q * *(b + 87 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 37);
            *(b + 127 * OS1_S1 + 94) =
                prefactor_x * *(b + 127 * OS1_S1 + 66) -
                p_over_q * *(b + 172 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 45);
            *(b + 127 * OS1_S1 + 95) = prefactor_z * *(b + 127 * OS1_S1 + 62) -
                                       p_over_q * *(b + 177 * OS1_S1 + 62) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 62);
            *(b + 127 * OS1_S1 + 96) =
                prefactor_z * *(b + 127 * OS1_S1 + 63) -
                p_over_q * *(b + 177 * OS1_S1 + 63) +
                one_over_two_q * *(b + 87 * OS1_S1 + 63) +
                one_over_two_q * *(b + 127 * OS1_S1 + 38);
            *(b + 127 * OS1_S1 + 97) =
                prefactor_y * *(b + 127 * OS1_S1 + 65) -
                p_over_q * *(b + 176 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 65);
            *(b + 127 * OS1_S1 + 98) =
                prefactor_x * *(b + 127 * OS1_S1 + 70) -
                p_over_q * *(b + 172 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 49);
            *(b + 127 * OS1_S1 + 99) =
                prefactor_x * *(b + 127 * OS1_S1 + 71) -
                p_over_q * *(b + 172 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 71) +
                one_over_two_q * *(b + 127 * OS1_S1 + 50);
            *(b + 127 * OS1_S1 + 100) =
                prefactor_z * *(b + 127 * OS1_S1 + 66) -
                p_over_q * *(b + 177 * OS1_S1 + 66) +
                one_over_two_q * *(b + 87 * OS1_S1 + 66);
            *(b + 127 * OS1_S1 + 101) =
                prefactor_z * *(b + 127 * OS1_S1 + 67) -
                p_over_q * *(b + 177 * OS1_S1 + 67) +
                one_over_two_q * *(b + 87 * OS1_S1 + 67) +
                one_over_two_q * *(b + 127 * OS1_S1 + 41);
            *(b + 127 * OS1_S1 + 102) =
                prefactor_y * *(b + 127 * OS1_S1 + 69) -
                p_over_q * *(b + 176 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 69) +
                one_over_two_q * *(b + 127 * OS1_S1 + 44);
            *(b + 127 * OS1_S1 + 103) =
                prefactor_y * *(b + 127 * OS1_S1 + 70) -
                p_over_q * *(b + 176 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 70);
            *(b + 127 * OS1_S1 + 104) =
                prefactor_x * *(b + 127 * OS1_S1 + 76) -
                p_over_q * *(b + 172 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 76) +
                one_over_two_q * *(b + 127 * OS1_S1 + 55);
            *(b + 127 * OS1_S1 + 105) =
                prefactor_x * *(b + 127 * OS1_S1 + 77) -
                p_over_q * *(b + 172 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 77);
            *(b + 127 * OS1_S1 + 106) =
                prefactor_z * *(b + 127 * OS1_S1 + 71) -
                p_over_q * *(b + 177 * OS1_S1 + 71) +
                one_over_two_q * *(b + 87 * OS1_S1 + 71);
            *(b + 127 * OS1_S1 + 107) =
                prefactor_x * *(b + 127 * OS1_S1 + 79) -
                p_over_q * *(b + 172 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 79);
            *(b + 127 * OS1_S1 + 108) =
                prefactor_x * *(b + 127 * OS1_S1 + 80) -
                p_over_q * *(b + 172 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 80);
            *(b + 127 * OS1_S1 + 109) =
                prefactor_x * *(b + 127 * OS1_S1 + 81) -
                p_over_q * *(b + 172 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 81);
            *(b + 127 * OS1_S1 + 110) =
                prefactor_y * *(b + 127 * OS1_S1 + 76) -
                p_over_q * *(b + 176 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 76);
            *(b + 127 * OS1_S1 + 111) =
                prefactor_x * *(b + 127 * OS1_S1 + 83) -
                p_over_q * *(b + 172 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 83);
            *(b + 127 * OS1_S1 + 112) =
                prefactor_y * *(b + 127 * OS1_S1 + 77) -
                p_over_q * *(b + 176 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 50);
            *(b + 127 * OS1_S1 + 113) =
                prefactor_z * *(b + 127 * OS1_S1 + 77) -
                p_over_q * *(b + 177 * OS1_S1 + 77) +
                one_over_two_q * *(b + 87 * OS1_S1 + 77);
            *(b + 127 * OS1_S1 + 114) =
                prefactor_z * *(b + 127 * OS1_S1 + 78) -
                p_over_q * *(b + 177 * OS1_S1 + 78) +
                one_over_two_q * *(b + 87 * OS1_S1 + 78) +
                one_over_two_q * *(b + 127 * OS1_S1 + 50);
            *(b + 127 * OS1_S1 + 115) =
                prefactor_z * *(b + 127 * OS1_S1 + 79) -
                p_over_q * *(b + 177 * OS1_S1 + 79) +
                one_over_two_q * *(b + 87 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 51);
            *(b + 127 * OS1_S1 + 116) =
                prefactor_y * *(b + 127 * OS1_S1 + 81) -
                p_over_q * *(b + 176 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 54);
            *(b + 127 * OS1_S1 + 117) =
                prefactor_y * *(b + 127 * OS1_S1 + 82) -
                p_over_q * *(b + 176 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 82) +
                one_over_two_q * *(b + 127 * OS1_S1 + 55);
            *(b + 127 * OS1_S1 + 118) =
                prefactor_y * *(b + 127 * OS1_S1 + 83) -
                p_over_q * *(b + 176 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 83);
            *(b + 127 * OS1_S1 + 119) =
                prefactor_z * *(b + 127 * OS1_S1 + 83) -
                p_over_q * *(b + 177 * OS1_S1 + 83) +
                one_over_two_q * *(b + 87 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 55);
            *(b + 128 * OS1_S1 + 84) =
                prefactor_x * *(b + 128 * OS1_S1 + 56) -
                p_over_q * *(b + 173 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 35);
            *(b + 128 * OS1_S1 + 85) = prefactor_y * *(b + 128 * OS1_S1 + 56) -
                                       p_over_q * *(b + 177 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 56);
            *(b + 128 * OS1_S1 + 86) =
                prefactor_z * *(b + 128 * OS1_S1 + 56) -
                p_over_q * *(b + 178 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 56);
            *(b + 128 * OS1_S1 + 87) =
                prefactor_y * *(b + 128 * OS1_S1 + 57) -
                p_over_q * *(b + 177 * OS1_S1 + 57) +
                one_over_two_q * *(b + 89 * OS1_S1 + 57) +
                one_over_two_q * *(b + 128 * OS1_S1 + 35);
            *(b + 128 * OS1_S1 + 88) = prefactor_y * *(b + 128 * OS1_S1 + 58) -
                                       p_over_q * *(b + 177 * OS1_S1 + 58) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 58);
            *(b + 128 * OS1_S1 + 89) =
                prefactor_z * *(b + 128 * OS1_S1 + 58) -
                p_over_q * *(b + 178 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 58) +
                one_over_two_q * *(b + 128 * OS1_S1 + 35);
            *(b + 128 * OS1_S1 + 90) =
                prefactor_y * *(b + 128 * OS1_S1 + 59) -
                p_over_q * *(b + 177 * OS1_S1 + 59) +
                one_over_two_q * *(b + 89 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 36);
            *(b + 128 * OS1_S1 + 91) =
                prefactor_z * *(b + 128 * OS1_S1 + 59) -
                p_over_q * *(b + 178 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 59);
            *(b + 128 * OS1_S1 + 92) = prefactor_y * *(b + 128 * OS1_S1 + 61) -
                                       p_over_q * *(b + 177 * OS1_S1 + 61) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 61);
            *(b + 128 * OS1_S1 + 93) =
                prefactor_z * *(b + 128 * OS1_S1 + 61) -
                p_over_q * *(b + 178 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 37);
            *(b + 128 * OS1_S1 + 94) =
                prefactor_x * *(b + 128 * OS1_S1 + 66) -
                p_over_q * *(b + 173 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 45);
            *(b + 128 * OS1_S1 + 95) =
                prefactor_z * *(b + 128 * OS1_S1 + 62) -
                p_over_q * *(b + 178 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 62);
            *(b + 128 * OS1_S1 + 96) =
                prefactor_y * *(b + 128 * OS1_S1 + 64) -
                p_over_q * *(b + 177 * OS1_S1 + 64) +
                one_over_two_q * *(b + 89 * OS1_S1 + 64) +
                one_over_two_q * *(b + 128 * OS1_S1 + 40);
            *(b + 128 * OS1_S1 + 97) = prefactor_y * *(b + 128 * OS1_S1 + 65) -
                                       p_over_q * *(b + 177 * OS1_S1 + 65) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 65);
            *(b + 128 * OS1_S1 + 98) =
                prefactor_x * *(b + 128 * OS1_S1 + 70) -
                p_over_q * *(b + 173 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 49);
            *(b + 128 * OS1_S1 + 99) =
                prefactor_x * *(b + 128 * OS1_S1 + 71) -
                p_over_q * *(b + 173 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 71) +
                one_over_two_q * *(b + 128 * OS1_S1 + 50);
            *(b + 128 * OS1_S1 + 100) =
                prefactor_z * *(b + 128 * OS1_S1 + 66) -
                p_over_q * *(b + 178 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 66);
            *(b + 128 * OS1_S1 + 101) =
                prefactor_z * *(b + 128 * OS1_S1 + 67) -
                p_over_q * *(b + 178 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 67) +
                one_over_two_q * *(b + 128 * OS1_S1 + 41);
            *(b + 128 * OS1_S1 + 102) =
                prefactor_y * *(b + 128 * OS1_S1 + 69) -
                p_over_q * *(b + 177 * OS1_S1 + 69) +
                one_over_two_q * *(b + 89 * OS1_S1 + 69) +
                one_over_two_q * *(b + 128 * OS1_S1 + 44);
            *(b + 128 * OS1_S1 + 103) =
                prefactor_y * *(b + 128 * OS1_S1 + 70) -
                p_over_q * *(b + 177 * OS1_S1 + 70) +
                one_over_two_q * *(b + 89 * OS1_S1 + 70);
            *(b + 128 * OS1_S1 + 104) =
                prefactor_x * *(b + 128 * OS1_S1 + 76) -
                p_over_q * *(b + 173 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 76) +
                one_over_two_q * *(b + 128 * OS1_S1 + 55);
            *(b + 128 * OS1_S1 + 105) =
                prefactor_x * *(b + 128 * OS1_S1 + 77) -
                p_over_q * *(b + 173 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 77);
            *(b + 128 * OS1_S1 + 106) =
                prefactor_z * *(b + 128 * OS1_S1 + 71) -
                p_over_q * *(b + 178 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 71);
            *(b + 128 * OS1_S1 + 107) =
                prefactor_x * *(b + 128 * OS1_S1 + 79) -
                p_over_q * *(b + 173 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 79);
            *(b + 128 * OS1_S1 + 108) =
                prefactor_x * *(b + 128 * OS1_S1 + 80) -
                p_over_q * *(b + 173 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 80);
            *(b + 128 * OS1_S1 + 109) =
                prefactor_x * *(b + 128 * OS1_S1 + 81) -
                p_over_q * *(b + 173 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 81);
            *(b + 128 * OS1_S1 + 110) =
                prefactor_y * *(b + 128 * OS1_S1 + 76) -
                p_over_q * *(b + 177 * OS1_S1 + 76) +
                one_over_two_q * *(b + 89 * OS1_S1 + 76);
            *(b + 128 * OS1_S1 + 111) =
                prefactor_x * *(b + 128 * OS1_S1 + 83) -
                p_over_q * *(b + 173 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 83);
            *(b + 128 * OS1_S1 + 112) =
                prefactor_y * *(b + 128 * OS1_S1 + 77) -
                p_over_q * *(b + 177 * OS1_S1 + 77) +
                one_over_two_q * *(b + 89 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 50);
            *(b + 128 * OS1_S1 + 113) =
                prefactor_z * *(b + 128 * OS1_S1 + 77) -
                p_over_q * *(b + 178 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 77);
            *(b + 128 * OS1_S1 + 114) =
                prefactor_z * *(b + 128 * OS1_S1 + 78) -
                p_over_q * *(b + 178 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 78) +
                one_over_two_q * *(b + 128 * OS1_S1 + 50);
            *(b + 128 * OS1_S1 + 115) =
                prefactor_z * *(b + 128 * OS1_S1 + 79) -
                p_over_q * *(b + 178 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 51);
            *(b + 128 * OS1_S1 + 116) =
                prefactor_y * *(b + 128 * OS1_S1 + 81) -
                p_over_q * *(b + 177 * OS1_S1 + 81) +
                one_over_two_q * *(b + 89 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 54);
            *(b + 128 * OS1_S1 + 117) =
                prefactor_y * *(b + 128 * OS1_S1 + 82) -
                p_over_q * *(b + 177 * OS1_S1 + 82) +
                one_over_two_q * *(b + 89 * OS1_S1 + 82) +
                one_over_two_q * *(b + 128 * OS1_S1 + 55);
            *(b + 128 * OS1_S1 + 118) =
                prefactor_y * *(b + 128 * OS1_S1 + 83) -
                p_over_q * *(b + 177 * OS1_S1 + 83) +
                one_over_two_q * *(b + 89 * OS1_S1 + 83);
            *(b + 128 * OS1_S1 + 119) =
                prefactor_z * *(b + 128 * OS1_S1 + 83) -
                p_over_q * *(b + 178 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 55);
            *(b + 129 * OS1_S1 + 84) =
                prefactor_x * *(b + 129 * OS1_S1 + 56) -
                p_over_q * *(b + 174 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 35);
            *(b + 129 * OS1_S1 + 85) = prefactor_y * *(b + 129 * OS1_S1 + 56) -
                                       p_over_q * *(b + 178 * OS1_S1 + 56);
            *(b + 129 * OS1_S1 + 86) =
                prefactor_z * *(b + 129 * OS1_S1 + 56) -
                p_over_q * *(b + 179 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 56);
            *(b + 129 * OS1_S1 + 87) =
                prefactor_y * *(b + 129 * OS1_S1 + 57) -
                p_over_q * *(b + 178 * OS1_S1 + 57) +
                one_over_two_q * *(b + 129 * OS1_S1 + 35);
            *(b + 129 * OS1_S1 + 88) = prefactor_y * *(b + 129 * OS1_S1 + 58) -
                                       p_over_q * *(b + 178 * OS1_S1 + 58);
            *(b + 129 * OS1_S1 + 89) =
                prefactor_z * *(b + 129 * OS1_S1 + 58) -
                p_over_q * *(b + 179 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 58) +
                one_over_two_q * *(b + 129 * OS1_S1 + 35);
            *(b + 129 * OS1_S1 + 90) =
                prefactor_y * *(b + 129 * OS1_S1 + 59) -
                p_over_q * *(b + 178 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 36);
            *(b + 129 * OS1_S1 + 91) =
                prefactor_z * *(b + 129 * OS1_S1 + 59) -
                p_over_q * *(b + 179 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 59);
            *(b + 129 * OS1_S1 + 92) = prefactor_y * *(b + 129 * OS1_S1 + 61) -
                                       p_over_q * *(b + 178 * OS1_S1 + 61);
            *(b + 129 * OS1_S1 + 93) =
                prefactor_z * *(b + 129 * OS1_S1 + 61) -
                p_over_q * *(b + 179 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 37);
            *(b + 129 * OS1_S1 + 94) =
                prefactor_x * *(b + 129 * OS1_S1 + 66) -
                p_over_q * *(b + 174 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 45);
            *(b + 129 * OS1_S1 + 95) =
                prefactor_z * *(b + 129 * OS1_S1 + 62) -
                p_over_q * *(b + 179 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 62);
            *(b + 129 * OS1_S1 + 96) =
                prefactor_y * *(b + 129 * OS1_S1 + 64) -
                p_over_q * *(b + 178 * OS1_S1 + 64) +
                one_over_two_q * *(b + 129 * OS1_S1 + 40);
            *(b + 129 * OS1_S1 + 97) = prefactor_y * *(b + 129 * OS1_S1 + 65) -
                                       p_over_q * *(b + 178 * OS1_S1 + 65);
            *(b + 129 * OS1_S1 + 98) =
                prefactor_x * *(b + 129 * OS1_S1 + 70) -
                p_over_q * *(b + 174 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 49);
            *(b + 129 * OS1_S1 + 99) =
                prefactor_x * *(b + 129 * OS1_S1 + 71) -
                p_over_q * *(b + 174 * OS1_S1 + 71) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 71) +
                one_over_two_q * *(b + 129 * OS1_S1 + 50);
            *(b + 129 * OS1_S1 + 100) =
                prefactor_z * *(b + 129 * OS1_S1 + 66) -
                p_over_q * *(b + 179 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 66);
            *(b + 129 * OS1_S1 + 101) =
                prefactor_z * *(b + 129 * OS1_S1 + 67) -
                p_over_q * *(b + 179 * OS1_S1 + 67) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 67) +
                one_over_two_q * *(b + 129 * OS1_S1 + 41);
            *(b + 129 * OS1_S1 + 102) =
                prefactor_y * *(b + 129 * OS1_S1 + 69) -
                p_over_q * *(b + 178 * OS1_S1 + 69) +
                one_over_two_q * *(b + 129 * OS1_S1 + 44);
            *(b + 129 * OS1_S1 + 103) = prefactor_y * *(b + 129 * OS1_S1 + 70) -
                                        p_over_q * *(b + 178 * OS1_S1 + 70);
            *(b + 129 * OS1_S1 + 104) =
                prefactor_x * *(b + 129 * OS1_S1 + 76) -
                p_over_q * *(b + 174 * OS1_S1 + 76) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 76) +
                one_over_two_q * *(b + 129 * OS1_S1 + 55);
            *(b + 129 * OS1_S1 + 105) =
                prefactor_x * *(b + 129 * OS1_S1 + 77) -
                p_over_q * *(b + 174 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 77);
            *(b + 129 * OS1_S1 + 106) =
                prefactor_z * *(b + 129 * OS1_S1 + 71) -
                p_over_q * *(b + 179 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 71);
            *(b + 129 * OS1_S1 + 107) =
                prefactor_x * *(b + 129 * OS1_S1 + 79) -
                p_over_q * *(b + 174 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 79);
            *(b + 129 * OS1_S1 + 108) =
                prefactor_x * *(b + 129 * OS1_S1 + 80) -
                p_over_q * *(b + 174 * OS1_S1 + 80) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 80);
            *(b + 129 * OS1_S1 + 109) =
                prefactor_x * *(b + 129 * OS1_S1 + 81) -
                p_over_q * *(b + 174 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 81);
            *(b + 129 * OS1_S1 + 110) = prefactor_y * *(b + 129 * OS1_S1 + 76) -
                                        p_over_q * *(b + 178 * OS1_S1 + 76);
            *(b + 129 * OS1_S1 + 111) =
                prefactor_x * *(b + 129 * OS1_S1 + 83) -
                p_over_q * *(b + 174 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 83);
            *(b + 129 * OS1_S1 + 112) =
                prefactor_y * *(b + 129 * OS1_S1 + 77) -
                p_over_q * *(b + 178 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 50);
            *(b + 129 * OS1_S1 + 113) =
                prefactor_z * *(b + 129 * OS1_S1 + 77) -
                p_over_q * *(b + 179 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 77);
            *(b + 129 * OS1_S1 + 114) =
                prefactor_z * *(b + 129 * OS1_S1 + 78) -
                p_over_q * *(b + 179 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 78) +
                one_over_two_q * *(b + 129 * OS1_S1 + 50);
            *(b + 129 * OS1_S1 + 115) =
                prefactor_z * *(b + 129 * OS1_S1 + 79) -
                p_over_q * *(b + 179 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 51);
            *(b + 129 * OS1_S1 + 116) =
                prefactor_y * *(b + 129 * OS1_S1 + 81) -
                p_over_q * *(b + 178 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 54);
            *(b + 129 * OS1_S1 + 117) =
                prefactor_y * *(b + 129 * OS1_S1 + 82) -
                p_over_q * *(b + 178 * OS1_S1 + 82) +
                one_over_two_q * *(b + 129 * OS1_S1 + 55);
            *(b + 129 * OS1_S1 + 118) = prefactor_y * *(b + 129 * OS1_S1 + 83) -
                                        p_over_q * *(b + 178 * OS1_S1 + 83);
            *(b + 129 * OS1_S1 + 119) =
                prefactor_z * *(b + 129 * OS1_S1 + 83) -
                p_over_q * *(b + 179 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 55);
            *(b + 130 * OS1_S1 + 84) =
                prefactor_x * *(b + 130 * OS1_S1 + 56) -
                p_over_q * *(b + 175 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 130 * OS1_S1 + 35);
            *(b + 130 * OS1_S1 + 85) =
                prefactor_y * *(b + 130 * OS1_S1 + 56) -
                p_over_q * *(b + 180 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 56);
            *(b + 130 * OS1_S1 + 86) = prefactor_z * *(b + 130 * OS1_S1 + 56) -
                                       p_over_q * *(b + 181 * OS1_S1 + 56);
            *(b + 130 * OS1_S1 + 87) =
                prefactor_y * *(b + 130 * OS1_S1 + 57) -
                p_over_q * *(b + 180 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 57) +
                one_over_two_q * *(b + 130 * OS1_S1 + 35);
            *(b + 130 * OS1_S1 + 88) = prefactor_z * *(b + 130 * OS1_S1 + 57) -
                                       p_over_q * *(b + 181 * OS1_S1 + 57);
            *(b + 130 * OS1_S1 + 89) =
                prefactor_z * *(b + 130 * OS1_S1 + 58) -
                p_over_q * *(b + 181 * OS1_S1 + 58) +
                one_over_two_q * *(b + 130 * OS1_S1 + 35);
            *(b + 130 * OS1_S1 + 90) =
                prefactor_y * *(b + 130 * OS1_S1 + 59) -
                p_over_q * *(b + 180 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 36);
            *(b + 130 * OS1_S1 + 91) = prefactor_z * *(b + 130 * OS1_S1 + 59) -
                                       p_over_q * *(b + 181 * OS1_S1 + 59);
            *(b + 130 * OS1_S1 + 92) =
                prefactor_y * *(b + 130 * OS1_S1 + 61) -
                p_over_q * *(b + 180 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 61);
            *(b + 130 * OS1_S1 + 93) =
                prefactor_z * *(b + 130 * OS1_S1 + 61) -
                p_over_q * *(b + 181 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 37);
            *(b + 130 * OS1_S1 + 94) =
                prefactor_x * *(b + 130 * OS1_S1 + 66) -
                p_over_q * *(b + 175 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 45);
            *(b + 130 * OS1_S1 + 95) = prefactor_z * *(b + 130 * OS1_S1 + 62) -
                                       p_over_q * *(b + 181 * OS1_S1 + 62);
            *(b + 130 * OS1_S1 + 96) =
                prefactor_z * *(b + 130 * OS1_S1 + 63) -
                p_over_q * *(b + 181 * OS1_S1 + 63) +
                one_over_two_q * *(b + 130 * OS1_S1 + 38);
            *(b + 130 * OS1_S1 + 97) =
                prefactor_y * *(b + 130 * OS1_S1 + 65) -
                p_over_q * *(b + 180 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 65);
            *(b + 130 * OS1_S1 + 98) =
                prefactor_x * *(b + 130 * OS1_S1 + 70) -
                p_over_q * *(b + 175 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 49);
            *(b + 130 * OS1_S1 + 99) =
                prefactor_x * *(b + 130 * OS1_S1 + 71) -
                p_over_q * *(b + 175 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 71) +
                one_over_two_q * *(b + 130 * OS1_S1 + 50);
            *(b + 130 * OS1_S1 + 100) = prefactor_z * *(b + 130 * OS1_S1 + 66) -
                                        p_over_q * *(b + 181 * OS1_S1 + 66);
            *(b + 130 * OS1_S1 + 101) =
                prefactor_z * *(b + 130 * OS1_S1 + 67) -
                p_over_q * *(b + 181 * OS1_S1 + 67) +
                one_over_two_q * *(b + 130 * OS1_S1 + 41);
            *(b + 130 * OS1_S1 + 102) =
                prefactor_y * *(b + 130 * OS1_S1 + 69) -
                p_over_q * *(b + 180 * OS1_S1 + 69) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 69) +
                one_over_two_q * *(b + 130 * OS1_S1 + 44);
            *(b + 130 * OS1_S1 + 103) =
                prefactor_y * *(b + 130 * OS1_S1 + 70) -
                p_over_q * *(b + 180 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 70);
            *(b + 130 * OS1_S1 + 104) =
                prefactor_x * *(b + 130 * OS1_S1 + 76) -
                p_over_q * *(b + 175 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 76) +
                one_over_two_q * *(b + 130 * OS1_S1 + 55);
            *(b + 130 * OS1_S1 + 105) =
                prefactor_x * *(b + 130 * OS1_S1 + 77) -
                p_over_q * *(b + 175 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 77);
            *(b + 130 * OS1_S1 + 106) = prefactor_z * *(b + 130 * OS1_S1 + 71) -
                                        p_over_q * *(b + 181 * OS1_S1 + 71);
            *(b + 130 * OS1_S1 + 107) =
                prefactor_x * *(b + 130 * OS1_S1 + 79) -
                p_over_q * *(b + 175 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 79);
            *(b + 130 * OS1_S1 + 108) =
                prefactor_x * *(b + 130 * OS1_S1 + 80) -
                p_over_q * *(b + 175 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 80);
            *(b + 130 * OS1_S1 + 109) =
                prefactor_x * *(b + 130 * OS1_S1 + 81) -
                p_over_q * *(b + 175 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 81);
            *(b + 130 * OS1_S1 + 110) =
                prefactor_y * *(b + 130 * OS1_S1 + 76) -
                p_over_q * *(b + 180 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 76);
            *(b + 130 * OS1_S1 + 111) =
                prefactor_x * *(b + 130 * OS1_S1 + 83) -
                p_over_q * *(b + 175 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 83);
            *(b + 130 * OS1_S1 + 112) =
                prefactor_y * *(b + 130 * OS1_S1 + 77) -
                p_over_q * *(b + 180 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 130 * OS1_S1 + 50);
            *(b + 130 * OS1_S1 + 113) = prefactor_z * *(b + 130 * OS1_S1 + 77) -
                                        p_over_q * *(b + 181 * OS1_S1 + 77);
            *(b + 130 * OS1_S1 + 114) =
                prefactor_z * *(b + 130 * OS1_S1 + 78) -
                p_over_q * *(b + 181 * OS1_S1 + 78) +
                one_over_two_q * *(b + 130 * OS1_S1 + 50);
            *(b + 130 * OS1_S1 + 115) =
                prefactor_z * *(b + 130 * OS1_S1 + 79) -
                p_over_q * *(b + 181 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 51);
            *(b + 130 * OS1_S1 + 116) =
                prefactor_y * *(b + 130 * OS1_S1 + 81) -
                p_over_q * *(b + 180 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 54);
            *(b + 130 * OS1_S1 + 117) =
                prefactor_y * *(b + 130 * OS1_S1 + 82) -
                p_over_q * *(b + 180 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 82) +
                one_over_two_q * *(b + 130 * OS1_S1 + 55);
            *(b + 130 * OS1_S1 + 118) =
                prefactor_y * *(b + 130 * OS1_S1 + 83) -
                p_over_q * *(b + 180 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 83);
            *(b + 130 * OS1_S1 + 119) =
                prefactor_z * *(b + 130 * OS1_S1 + 83) -
                p_over_q * *(b + 181 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 130 * OS1_S1 + 55);
            *(b + 131 * OS1_S1 + 84) =
                prefactor_x * *(b + 131 * OS1_S1 + 56) -
                p_over_q * *(b + 176 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 131 * OS1_S1 + 35);
            *(b + 131 * OS1_S1 + 85) =
                prefactor_y * *(b + 131 * OS1_S1 + 56) -
                p_over_q * *(b + 181 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 56);
            *(b + 131 * OS1_S1 + 86) = prefactor_z * *(b + 131 * OS1_S1 + 56) -
                                       p_over_q * *(b + 182 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 56);
            *(b + 131 * OS1_S1 + 87) =
                prefactor_y * *(b + 131 * OS1_S1 + 57) -
                p_over_q * *(b + 181 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 57) +
                one_over_two_q * *(b + 131 * OS1_S1 + 35);
            *(b + 131 * OS1_S1 + 88) = prefactor_z * *(b + 131 * OS1_S1 + 57) -
                                       p_over_q * *(b + 182 * OS1_S1 + 57) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 57);
            *(b + 131 * OS1_S1 + 89) =
                prefactor_z * *(b + 131 * OS1_S1 + 58) -
                p_over_q * *(b + 182 * OS1_S1 + 58) +
                one_over_two_q * *(b + 90 * OS1_S1 + 58) +
                one_over_two_q * *(b + 131 * OS1_S1 + 35);
            *(b + 131 * OS1_S1 + 90) =
                prefactor_y * *(b + 131 * OS1_S1 + 59) -
                p_over_q * *(b + 181 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 36);
            *(b + 131 * OS1_S1 + 91) = prefactor_z * *(b + 131 * OS1_S1 + 59) -
                                       p_over_q * *(b + 182 * OS1_S1 + 59) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 59);
            *(b + 131 * OS1_S1 + 92) =
                prefactor_y * *(b + 131 * OS1_S1 + 61) -
                p_over_q * *(b + 181 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 61);
            *(b + 131 * OS1_S1 + 93) =
                prefactor_z * *(b + 131 * OS1_S1 + 61) -
                p_over_q * *(b + 182 * OS1_S1 + 61) +
                one_over_two_q * *(b + 90 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 37);
            *(b + 131 * OS1_S1 + 94) =
                prefactor_x * *(b + 131 * OS1_S1 + 66) -
                p_over_q * *(b + 176 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 45);
            *(b + 131 * OS1_S1 + 95) = prefactor_z * *(b + 131 * OS1_S1 + 62) -
                                       p_over_q * *(b + 182 * OS1_S1 + 62) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 62);
            *(b + 131 * OS1_S1 + 96) =
                prefactor_z * *(b + 131 * OS1_S1 + 63) -
                p_over_q * *(b + 182 * OS1_S1 + 63) +
                one_over_two_q * *(b + 90 * OS1_S1 + 63) +
                one_over_two_q * *(b + 131 * OS1_S1 + 38);
            *(b + 131 * OS1_S1 + 97) =
                prefactor_y * *(b + 131 * OS1_S1 + 65) -
                p_over_q * *(b + 181 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 65);
            *(b + 131 * OS1_S1 + 98) =
                prefactor_x * *(b + 131 * OS1_S1 + 70) -
                p_over_q * *(b + 176 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 49);
            *(b + 131 * OS1_S1 + 99) =
                prefactor_x * *(b + 131 * OS1_S1 + 71) -
                p_over_q * *(b + 176 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 71) +
                one_over_two_q * *(b + 131 * OS1_S1 + 50);
            *(b + 131 * OS1_S1 + 100) =
                prefactor_z * *(b + 131 * OS1_S1 + 66) -
                p_over_q * *(b + 182 * OS1_S1 + 66) +
                one_over_two_q * *(b + 90 * OS1_S1 + 66);
            *(b + 131 * OS1_S1 + 101) =
                prefactor_z * *(b + 131 * OS1_S1 + 67) -
                p_over_q * *(b + 182 * OS1_S1 + 67) +
                one_over_two_q * *(b + 90 * OS1_S1 + 67) +
                one_over_two_q * *(b + 131 * OS1_S1 + 41);
            *(b + 131 * OS1_S1 + 102) =
                prefactor_y * *(b + 131 * OS1_S1 + 69) -
                p_over_q * *(b + 181 * OS1_S1 + 69) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 69) +
                one_over_two_q * *(b + 131 * OS1_S1 + 44);
            *(b + 131 * OS1_S1 + 103) =
                prefactor_y * *(b + 131 * OS1_S1 + 70) -
                p_over_q * *(b + 181 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 70);
            *(b + 131 * OS1_S1 + 104) =
                prefactor_x * *(b + 131 * OS1_S1 + 76) -
                p_over_q * *(b + 176 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 76) +
                one_over_two_q * *(b + 131 * OS1_S1 + 55);
            *(b + 131 * OS1_S1 + 105) =
                prefactor_x * *(b + 131 * OS1_S1 + 77) -
                p_over_q * *(b + 176 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 77);
            *(b + 131 * OS1_S1 + 106) =
                prefactor_z * *(b + 131 * OS1_S1 + 71) -
                p_over_q * *(b + 182 * OS1_S1 + 71) +
                one_over_two_q * *(b + 90 * OS1_S1 + 71);
            *(b + 131 * OS1_S1 + 107) =
                prefactor_x * *(b + 131 * OS1_S1 + 79) -
                p_over_q * *(b + 176 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 79);
            *(b + 131 * OS1_S1 + 108) =
                prefactor_x * *(b + 131 * OS1_S1 + 80) -
                p_over_q * *(b + 176 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 80);
            *(b + 131 * OS1_S1 + 109) =
                prefactor_x * *(b + 131 * OS1_S1 + 81) -
                p_over_q * *(b + 176 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 81);
            *(b + 131 * OS1_S1 + 110) =
                prefactor_y * *(b + 131 * OS1_S1 + 76) -
                p_over_q * *(b + 181 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 76);
            *(b + 131 * OS1_S1 + 111) =
                prefactor_x * *(b + 131 * OS1_S1 + 83) -
                p_over_q * *(b + 176 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 83);
            *(b + 131 * OS1_S1 + 112) =
                prefactor_y * *(b + 131 * OS1_S1 + 77) -
                p_over_q * *(b + 181 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 131 * OS1_S1 + 50);
            *(b + 131 * OS1_S1 + 113) =
                prefactor_z * *(b + 131 * OS1_S1 + 77) -
                p_over_q * *(b + 182 * OS1_S1 + 77) +
                one_over_two_q * *(b + 90 * OS1_S1 + 77);
            *(b + 131 * OS1_S1 + 114) =
                prefactor_z * *(b + 131 * OS1_S1 + 78) -
                p_over_q * *(b + 182 * OS1_S1 + 78) +
                one_over_two_q * *(b + 90 * OS1_S1 + 78) +
                one_over_two_q * *(b + 131 * OS1_S1 + 50);
            *(b + 131 * OS1_S1 + 115) =
                prefactor_z * *(b + 131 * OS1_S1 + 79) -
                p_over_q * *(b + 182 * OS1_S1 + 79) +
                one_over_two_q * *(b + 90 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 51);
            *(b + 131 * OS1_S1 + 116) =
                prefactor_y * *(b + 131 * OS1_S1 + 81) -
                p_over_q * *(b + 181 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 54);
            *(b + 131 * OS1_S1 + 117) =
                prefactor_y * *(b + 131 * OS1_S1 + 82) -
                p_over_q * *(b + 181 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 82) +
                one_over_two_q * *(b + 131 * OS1_S1 + 55);
            *(b + 131 * OS1_S1 + 118) =
                prefactor_y * *(b + 131 * OS1_S1 + 83) -
                p_over_q * *(b + 181 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 83);
            *(b + 131 * OS1_S1 + 119) =
                prefactor_z * *(b + 131 * OS1_S1 + 83) -
                p_over_q * *(b + 182 * OS1_S1 + 83) +
                one_over_two_q * *(b + 90 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 131 * OS1_S1 + 55);
            *(b + 132 * OS1_S1 + 84) =
                prefactor_x * *(b + 132 * OS1_S1 + 56) -
                p_over_q * *(b + 177 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 132 * OS1_S1 + 35);
            *(b + 132 * OS1_S1 + 85) =
                prefactor_y * *(b + 132 * OS1_S1 + 56) -
                p_over_q * *(b + 182 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 56);
            *(b + 132 * OS1_S1 + 86) =
                prefactor_z * *(b + 132 * OS1_S1 + 56) -
                p_over_q * *(b + 183 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 56);
            *(b + 132 * OS1_S1 + 87) =
                prefactor_y * *(b + 132 * OS1_S1 + 57) -
                p_over_q * *(b + 182 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 57) +
                one_over_two_q * *(b + 132 * OS1_S1 + 35);
            *(b + 132 * OS1_S1 + 88) =
                prefactor_z * *(b + 132 * OS1_S1 + 57) -
                p_over_q * *(b + 183 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 57);
            *(b + 132 * OS1_S1 + 89) =
                prefactor_z * *(b + 132 * OS1_S1 + 58) -
                p_over_q * *(b + 183 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 58) +
                one_over_two_q * *(b + 132 * OS1_S1 + 35);
            *(b + 132 * OS1_S1 + 90) =
                prefactor_y * *(b + 132 * OS1_S1 + 59) -
                p_over_q * *(b + 182 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 36);
            *(b + 132 * OS1_S1 + 91) =
                prefactor_z * *(b + 132 * OS1_S1 + 59) -
                p_over_q * *(b + 183 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 59);
            *(b + 132 * OS1_S1 + 92) =
                prefactor_y * *(b + 132 * OS1_S1 + 61) -
                p_over_q * *(b + 182 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 61);
            *(b + 132 * OS1_S1 + 93) =
                prefactor_z * *(b + 132 * OS1_S1 + 61) -
                p_over_q * *(b + 183 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 37);
            *(b + 132 * OS1_S1 + 94) =
                prefactor_x * *(b + 132 * OS1_S1 + 66) -
                p_over_q * *(b + 177 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 45);
            *(b + 132 * OS1_S1 + 95) =
                prefactor_z * *(b + 132 * OS1_S1 + 62) -
                p_over_q * *(b + 183 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 62);
            *(b + 132 * OS1_S1 + 96) =
                prefactor_z * *(b + 132 * OS1_S1 + 63) -
                p_over_q * *(b + 183 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 63) +
                one_over_two_q * *(b + 132 * OS1_S1 + 38);
            *(b + 132 * OS1_S1 + 97) =
                prefactor_y * *(b + 132 * OS1_S1 + 65) -
                p_over_q * *(b + 182 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 65);
            *(b + 132 * OS1_S1 + 98) =
                prefactor_x * *(b + 132 * OS1_S1 + 70) -
                p_over_q * *(b + 177 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 49);
            *(b + 132 * OS1_S1 + 99) =
                prefactor_x * *(b + 132 * OS1_S1 + 71) -
                p_over_q * *(b + 177 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 71) +
                one_over_two_q * *(b + 132 * OS1_S1 + 50);
            *(b + 132 * OS1_S1 + 100) =
                prefactor_z * *(b + 132 * OS1_S1 + 66) -
                p_over_q * *(b + 183 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 66);
            *(b + 132 * OS1_S1 + 101) =
                prefactor_z * *(b + 132 * OS1_S1 + 67) -
                p_over_q * *(b + 183 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 67) +
                one_over_two_q * *(b + 132 * OS1_S1 + 41);
            *(b + 132 * OS1_S1 + 102) =
                prefactor_y * *(b + 132 * OS1_S1 + 69) -
                p_over_q * *(b + 182 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 69) +
                one_over_two_q * *(b + 132 * OS1_S1 + 44);
            *(b + 132 * OS1_S1 + 103) =
                prefactor_y * *(b + 132 * OS1_S1 + 70) -
                p_over_q * *(b + 182 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 70);
            *(b + 132 * OS1_S1 + 104) =
                prefactor_x * *(b + 132 * OS1_S1 + 76) -
                p_over_q * *(b + 177 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 76) +
                one_over_two_q * *(b + 132 * OS1_S1 + 55);
            *(b + 132 * OS1_S1 + 105) =
                prefactor_x * *(b + 132 * OS1_S1 + 77) -
                p_over_q * *(b + 177 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 77);
            *(b + 132 * OS1_S1 + 106) =
                prefactor_z * *(b + 132 * OS1_S1 + 71) -
                p_over_q * *(b + 183 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 71);
            *(b + 132 * OS1_S1 + 107) =
                prefactor_x * *(b + 132 * OS1_S1 + 79) -
                p_over_q * *(b + 177 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 79);
            *(b + 132 * OS1_S1 + 108) =
                prefactor_x * *(b + 132 * OS1_S1 + 80) -
                p_over_q * *(b + 177 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 80);
            *(b + 132 * OS1_S1 + 109) =
                prefactor_x * *(b + 132 * OS1_S1 + 81) -
                p_over_q * *(b + 177 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 81);
            *(b + 132 * OS1_S1 + 110) =
                prefactor_y * *(b + 132 * OS1_S1 + 76) -
                p_over_q * *(b + 182 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 76);
            *(b + 132 * OS1_S1 + 111) =
                prefactor_x * *(b + 132 * OS1_S1 + 83) -
                p_over_q * *(b + 177 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 83);
            *(b + 132 * OS1_S1 + 112) =
                prefactor_y * *(b + 132 * OS1_S1 + 77) -
                p_over_q * *(b + 182 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 132 * OS1_S1 + 50);
            *(b + 132 * OS1_S1 + 113) =
                prefactor_z * *(b + 132 * OS1_S1 + 77) -
                p_over_q * *(b + 183 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 77);
            *(b + 132 * OS1_S1 + 114) =
                prefactor_z * *(b + 132 * OS1_S1 + 78) -
                p_over_q * *(b + 183 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 78) +
                one_over_two_q * *(b + 132 * OS1_S1 + 50);
            *(b + 132 * OS1_S1 + 115) =
                prefactor_z * *(b + 132 * OS1_S1 + 79) -
                p_over_q * *(b + 183 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 51);
            *(b + 132 * OS1_S1 + 116) =
                prefactor_y * *(b + 132 * OS1_S1 + 81) -
                p_over_q * *(b + 182 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 54);
            *(b + 132 * OS1_S1 + 117) =
                prefactor_y * *(b + 132 * OS1_S1 + 82) -
                p_over_q * *(b + 182 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 82) +
                one_over_two_q * *(b + 132 * OS1_S1 + 55);
            *(b + 132 * OS1_S1 + 118) =
                prefactor_y * *(b + 132 * OS1_S1 + 83) -
                p_over_q * *(b + 182 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 83);
            *(b + 132 * OS1_S1 + 119) =
                prefactor_z * *(b + 132 * OS1_S1 + 83) -
                p_over_q * *(b + 183 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 132 * OS1_S1 + 55);
            *(b + 133 * OS1_S1 + 84) =
                prefactor_x * *(b + 133 * OS1_S1 + 56) -
                p_over_q * *(b + 178 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 133 * OS1_S1 + 35);
            *(b + 133 * OS1_S1 + 85) = prefactor_y * *(b + 133 * OS1_S1 + 56) -
                                       p_over_q * *(b + 183 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 56);
            *(b + 133 * OS1_S1 + 86) =
                prefactor_z * *(b + 133 * OS1_S1 + 56) -
                p_over_q * *(b + 184 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 56);
            *(b + 133 * OS1_S1 + 87) =
                prefactor_y * *(b + 133 * OS1_S1 + 57) -
                p_over_q * *(b + 183 * OS1_S1 + 57) +
                one_over_two_q * *(b + 93 * OS1_S1 + 57) +
                one_over_two_q * *(b + 133 * OS1_S1 + 35);
            *(b + 133 * OS1_S1 + 88) = prefactor_y * *(b + 133 * OS1_S1 + 58) -
                                       p_over_q * *(b + 183 * OS1_S1 + 58) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 58);
            *(b + 133 * OS1_S1 + 89) =
                prefactor_z * *(b + 133 * OS1_S1 + 58) -
                p_over_q * *(b + 184 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 58) +
                one_over_two_q * *(b + 133 * OS1_S1 + 35);
            *(b + 133 * OS1_S1 + 90) =
                prefactor_y * *(b + 133 * OS1_S1 + 59) -
                p_over_q * *(b + 183 * OS1_S1 + 59) +
                one_over_two_q * *(b + 93 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 36);
            *(b + 133 * OS1_S1 + 91) =
                prefactor_z * *(b + 133 * OS1_S1 + 59) -
                p_over_q * *(b + 184 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 59);
            *(b + 133 * OS1_S1 + 92) = prefactor_y * *(b + 133 * OS1_S1 + 61) -
                                       p_over_q * *(b + 183 * OS1_S1 + 61) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 61);
            *(b + 133 * OS1_S1 + 93) =
                prefactor_z * *(b + 133 * OS1_S1 + 61) -
                p_over_q * *(b + 184 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 37);
            *(b + 133 * OS1_S1 + 94) =
                prefactor_x * *(b + 133 * OS1_S1 + 66) -
                p_over_q * *(b + 178 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 45);
            *(b + 133 * OS1_S1 + 95) =
                prefactor_z * *(b + 133 * OS1_S1 + 62) -
                p_over_q * *(b + 184 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 62);
            *(b + 133 * OS1_S1 + 96) =
                prefactor_y * *(b + 133 * OS1_S1 + 64) -
                p_over_q * *(b + 183 * OS1_S1 + 64) +
                one_over_two_q * *(b + 93 * OS1_S1 + 64) +
                one_over_two_q * *(b + 133 * OS1_S1 + 40);
            *(b + 133 * OS1_S1 + 97) = prefactor_y * *(b + 133 * OS1_S1 + 65) -
                                       p_over_q * *(b + 183 * OS1_S1 + 65) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 65);
            *(b + 133 * OS1_S1 + 98) =
                prefactor_x * *(b + 133 * OS1_S1 + 70) -
                p_over_q * *(b + 178 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 49);
            *(b + 133 * OS1_S1 + 99) =
                prefactor_x * *(b + 133 * OS1_S1 + 71) -
                p_over_q * *(b + 178 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 71) +
                one_over_two_q * *(b + 133 * OS1_S1 + 50);
            *(b + 133 * OS1_S1 + 100) =
                prefactor_z * *(b + 133 * OS1_S1 + 66) -
                p_over_q * *(b + 184 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 66);
            *(b + 133 * OS1_S1 + 101) =
                prefactor_z * *(b + 133 * OS1_S1 + 67) -
                p_over_q * *(b + 184 * OS1_S1 + 67) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 67) +
                one_over_two_q * *(b + 133 * OS1_S1 + 41);
            *(b + 133 * OS1_S1 + 102) =
                prefactor_y * *(b + 133 * OS1_S1 + 69) -
                p_over_q * *(b + 183 * OS1_S1 + 69) +
                one_over_two_q * *(b + 93 * OS1_S1 + 69) +
                one_over_two_q * *(b + 133 * OS1_S1 + 44);
            *(b + 133 * OS1_S1 + 103) =
                prefactor_y * *(b + 133 * OS1_S1 + 70) -
                p_over_q * *(b + 183 * OS1_S1 + 70) +
                one_over_two_q * *(b + 93 * OS1_S1 + 70);
            *(b + 133 * OS1_S1 + 104) =
                prefactor_x * *(b + 133 * OS1_S1 + 76) -
                p_over_q * *(b + 178 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 76) +
                one_over_two_q * *(b + 133 * OS1_S1 + 55);
            *(b + 133 * OS1_S1 + 105) =
                prefactor_x * *(b + 133 * OS1_S1 + 77) -
                p_over_q * *(b + 178 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 77);
            *(b + 133 * OS1_S1 + 106) =
                prefactor_z * *(b + 133 * OS1_S1 + 71) -
                p_over_q * *(b + 184 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 71);
            *(b + 133 * OS1_S1 + 107) =
                prefactor_x * *(b + 133 * OS1_S1 + 79) -
                p_over_q * *(b + 178 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 79);
            *(b + 133 * OS1_S1 + 108) =
                prefactor_x * *(b + 133 * OS1_S1 + 80) -
                p_over_q * *(b + 178 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 80);
            *(b + 133 * OS1_S1 + 109) =
                prefactor_x * *(b + 133 * OS1_S1 + 81) -
                p_over_q * *(b + 178 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 81);
            *(b + 133 * OS1_S1 + 110) =
                prefactor_y * *(b + 133 * OS1_S1 + 76) -
                p_over_q * *(b + 183 * OS1_S1 + 76) +
                one_over_two_q * *(b + 93 * OS1_S1 + 76);
            *(b + 133 * OS1_S1 + 111) =
                prefactor_x * *(b + 133 * OS1_S1 + 83) -
                p_over_q * *(b + 178 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 83);
            *(b + 133 * OS1_S1 + 112) =
                prefactor_y * *(b + 133 * OS1_S1 + 77) -
                p_over_q * *(b + 183 * OS1_S1 + 77) +
                one_over_two_q * *(b + 93 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 133 * OS1_S1 + 50);
            *(b + 133 * OS1_S1 + 113) =
                prefactor_z * *(b + 133 * OS1_S1 + 77) -
                p_over_q * *(b + 184 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 77);
            *(b + 133 * OS1_S1 + 114) =
                prefactor_z * *(b + 133 * OS1_S1 + 78) -
                p_over_q * *(b + 184 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 78) +
                one_over_two_q * *(b + 133 * OS1_S1 + 50);
            *(b + 133 * OS1_S1 + 115) =
                prefactor_z * *(b + 133 * OS1_S1 + 79) -
                p_over_q * *(b + 184 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 51);
            *(b + 133 * OS1_S1 + 116) =
                prefactor_y * *(b + 133 * OS1_S1 + 81) -
                p_over_q * *(b + 183 * OS1_S1 + 81) +
                one_over_two_q * *(b + 93 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 54);
            *(b + 133 * OS1_S1 + 117) =
                prefactor_y * *(b + 133 * OS1_S1 + 82) -
                p_over_q * *(b + 183 * OS1_S1 + 82) +
                one_over_two_q * *(b + 93 * OS1_S1 + 82) +
                one_over_two_q * *(b + 133 * OS1_S1 + 55);
            *(b + 133 * OS1_S1 + 118) =
                prefactor_y * *(b + 133 * OS1_S1 + 83) -
                p_over_q * *(b + 183 * OS1_S1 + 83) +
                one_over_two_q * *(b + 93 * OS1_S1 + 83);
            *(b + 133 * OS1_S1 + 119) =
                prefactor_z * *(b + 133 * OS1_S1 + 83) -
                p_over_q * *(b + 184 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 133 * OS1_S1 + 55);
            *(b + 134 * OS1_S1 + 84) =
                prefactor_x * *(b + 134 * OS1_S1 + 56) -
                p_over_q * *(b + 179 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 134 * OS1_S1 + 35);
            *(b + 134 * OS1_S1 + 85) = prefactor_y * *(b + 134 * OS1_S1 + 56) -
                                       p_over_q * *(b + 184 * OS1_S1 + 56);
            *(b + 134 * OS1_S1 + 86) =
                prefactor_z * *(b + 134 * OS1_S1 + 56) -
                p_over_q * *(b + 185 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 56);
            *(b + 134 * OS1_S1 + 87) =
                prefactor_y * *(b + 134 * OS1_S1 + 57) -
                p_over_q * *(b + 184 * OS1_S1 + 57) +
                one_over_two_q * *(b + 134 * OS1_S1 + 35);
            *(b + 134 * OS1_S1 + 88) = prefactor_y * *(b + 134 * OS1_S1 + 58) -
                                       p_over_q * *(b + 184 * OS1_S1 + 58);
            *(b + 134 * OS1_S1 + 89) =
                prefactor_z * *(b + 134 * OS1_S1 + 58) -
                p_over_q * *(b + 185 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 58) +
                one_over_two_q * *(b + 134 * OS1_S1 + 35);
            *(b + 134 * OS1_S1 + 90) =
                prefactor_y * *(b + 134 * OS1_S1 + 59) -
                p_over_q * *(b + 184 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 36);
            *(b + 134 * OS1_S1 + 91) =
                prefactor_z * *(b + 134 * OS1_S1 + 59) -
                p_over_q * *(b + 185 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 59);
            *(b + 134 * OS1_S1 + 92) = prefactor_y * *(b + 134 * OS1_S1 + 61) -
                                       p_over_q * *(b + 184 * OS1_S1 + 61);
            *(b + 134 * OS1_S1 + 93) =
                prefactor_z * *(b + 134 * OS1_S1 + 61) -
                p_over_q * *(b + 185 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 37);
            *(b + 134 * OS1_S1 + 94) =
                prefactor_x * *(b + 134 * OS1_S1 + 66) -
                p_over_q * *(b + 179 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 45);
            *(b + 134 * OS1_S1 + 95) =
                prefactor_z * *(b + 134 * OS1_S1 + 62) -
                p_over_q * *(b + 185 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 62);
            *(b + 134 * OS1_S1 + 96) =
                prefactor_y * *(b + 134 * OS1_S1 + 64) -
                p_over_q * *(b + 184 * OS1_S1 + 64) +
                one_over_two_q * *(b + 134 * OS1_S1 + 40);
            *(b + 134 * OS1_S1 + 97) = prefactor_y * *(b + 134 * OS1_S1 + 65) -
                                       p_over_q * *(b + 184 * OS1_S1 + 65);
            *(b + 134 * OS1_S1 + 98) =
                prefactor_x * *(b + 134 * OS1_S1 + 70) -
                p_over_q * *(b + 179 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 49);
            *(b + 134 * OS1_S1 + 99) =
                prefactor_x * *(b + 134 * OS1_S1 + 71) -
                p_over_q * *(b + 179 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 71) +
                one_over_two_q * *(b + 134 * OS1_S1 + 50);
            *(b + 134 * OS1_S1 + 100) =
                prefactor_z * *(b + 134 * OS1_S1 + 66) -
                p_over_q * *(b + 185 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 66);
            *(b + 134 * OS1_S1 + 101) =
                prefactor_z * *(b + 134 * OS1_S1 + 67) -
                p_over_q * *(b + 185 * OS1_S1 + 67) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 67) +
                one_over_two_q * *(b + 134 * OS1_S1 + 41);
            *(b + 134 * OS1_S1 + 102) =
                prefactor_y * *(b + 134 * OS1_S1 + 69) -
                p_over_q * *(b + 184 * OS1_S1 + 69) +
                one_over_two_q * *(b + 134 * OS1_S1 + 44);
            *(b + 134 * OS1_S1 + 103) = prefactor_y * *(b + 134 * OS1_S1 + 70) -
                                        p_over_q * *(b + 184 * OS1_S1 + 70);
            *(b + 134 * OS1_S1 + 104) =
                prefactor_x * *(b + 134 * OS1_S1 + 76) -
                p_over_q * *(b + 179 * OS1_S1 + 76) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 76) +
                one_over_two_q * *(b + 134 * OS1_S1 + 55);
            *(b + 134 * OS1_S1 + 105) =
                prefactor_x * *(b + 134 * OS1_S1 + 77) -
                p_over_q * *(b + 179 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 77);
            *(b + 134 * OS1_S1 + 106) =
                prefactor_z * *(b + 134 * OS1_S1 + 71) -
                p_over_q * *(b + 185 * OS1_S1 + 71) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 71);
            *(b + 134 * OS1_S1 + 107) =
                prefactor_x * *(b + 134 * OS1_S1 + 79) -
                p_over_q * *(b + 179 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 79);
            *(b + 134 * OS1_S1 + 108) =
                prefactor_x * *(b + 134 * OS1_S1 + 80) -
                p_over_q * *(b + 179 * OS1_S1 + 80) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 80);
            *(b + 134 * OS1_S1 + 109) =
                prefactor_x * *(b + 134 * OS1_S1 + 81) -
                p_over_q * *(b + 179 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 81);
            *(b + 134 * OS1_S1 + 110) = prefactor_y * *(b + 134 * OS1_S1 + 76) -
                                        p_over_q * *(b + 184 * OS1_S1 + 76);
            *(b + 134 * OS1_S1 + 111) =
                prefactor_x * *(b + 134 * OS1_S1 + 83) -
                p_over_q * *(b + 179 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 83);
            *(b + 134 * OS1_S1 + 112) =
                prefactor_y * *(b + 134 * OS1_S1 + 77) -
                p_over_q * *(b + 184 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 134 * OS1_S1 + 50);
            *(b + 134 * OS1_S1 + 113) =
                prefactor_z * *(b + 134 * OS1_S1 + 77) -
                p_over_q * *(b + 185 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 77);
            *(b + 134 * OS1_S1 + 114) =
                prefactor_z * *(b + 134 * OS1_S1 + 78) -
                p_over_q * *(b + 185 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 78) +
                one_over_two_q * *(b + 134 * OS1_S1 + 50);
            *(b + 134 * OS1_S1 + 115) =
                prefactor_z * *(b + 134 * OS1_S1 + 79) -
                p_over_q * *(b + 185 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 51);
            *(b + 134 * OS1_S1 + 116) =
                prefactor_y * *(b + 134 * OS1_S1 + 81) -
                p_over_q * *(b + 184 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 54);
            *(b + 134 * OS1_S1 + 117) =
                prefactor_y * *(b + 134 * OS1_S1 + 82) -
                p_over_q * *(b + 184 * OS1_S1 + 82) +
                one_over_two_q * *(b + 134 * OS1_S1 + 55);
            *(b + 134 * OS1_S1 + 118) = prefactor_y * *(b + 134 * OS1_S1 + 83) -
                                        p_over_q * *(b + 184 * OS1_S1 + 83);
            *(b + 134 * OS1_S1 + 119) =
                prefactor_z * *(b + 134 * OS1_S1 + 83) -
                p_over_q * *(b + 185 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 134 * OS1_S1 + 55);
            *(b + 135 * OS1_S1 + 84) =
                prefactor_x * *(b + 135 * OS1_S1 + 56) -
                p_over_q * *(b + 180 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 35);
            *(b + 135 * OS1_S1 + 85) =
                prefactor_y * *(b + 135 * OS1_S1 + 56) -
                p_over_q * *(b + 186 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 56);
            *(b + 135 * OS1_S1 + 86) = prefactor_z * *(b + 135 * OS1_S1 + 56) -
                                       p_over_q * *(b + 187 * OS1_S1 + 56);
            *(b + 135 * OS1_S1 + 87) =
                prefactor_y * *(b + 135 * OS1_S1 + 57) -
                p_over_q * *(b + 186 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 57) +
                one_over_two_q * *(b + 135 * OS1_S1 + 35);
            *(b + 135 * OS1_S1 + 88) = prefactor_z * *(b + 135 * OS1_S1 + 57) -
                                       p_over_q * *(b + 187 * OS1_S1 + 57);
            *(b + 135 * OS1_S1 + 89) =
                prefactor_z * *(b + 135 * OS1_S1 + 58) -
                p_over_q * *(b + 187 * OS1_S1 + 58) +
                one_over_two_q * *(b + 135 * OS1_S1 + 35);
            *(b + 135 * OS1_S1 + 90) =
                prefactor_y * *(b + 135 * OS1_S1 + 59) -
                p_over_q * *(b + 186 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 36);
            *(b + 135 * OS1_S1 + 91) = prefactor_z * *(b + 135 * OS1_S1 + 59) -
                                       p_over_q * *(b + 187 * OS1_S1 + 59);
            *(b + 135 * OS1_S1 + 92) =
                prefactor_y * *(b + 135 * OS1_S1 + 61) -
                p_over_q * *(b + 186 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 61);
            *(b + 135 * OS1_S1 + 93) =
                prefactor_z * *(b + 135 * OS1_S1 + 61) -
                p_over_q * *(b + 187 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 37);
            *(b + 135 * OS1_S1 + 94) =
                prefactor_x * *(b + 135 * OS1_S1 + 66) -
                p_over_q * *(b + 180 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 45);
            *(b + 135 * OS1_S1 + 95) = prefactor_z * *(b + 135 * OS1_S1 + 62) -
                                       p_over_q * *(b + 187 * OS1_S1 + 62);
            *(b + 135 * OS1_S1 + 96) =
                prefactor_z * *(b + 135 * OS1_S1 + 63) -
                p_over_q * *(b + 187 * OS1_S1 + 63) +
                one_over_two_q * *(b + 135 * OS1_S1 + 38);
            *(b + 135 * OS1_S1 + 97) =
                prefactor_y * *(b + 135 * OS1_S1 + 65) -
                p_over_q * *(b + 186 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 65);
            *(b + 135 * OS1_S1 + 98) =
                prefactor_x * *(b + 135 * OS1_S1 + 70) -
                p_over_q * *(b + 180 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 49);
            *(b + 135 * OS1_S1 + 99) =
                prefactor_x * *(b + 135 * OS1_S1 + 71) -
                p_over_q * *(b + 180 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 71) +
                one_over_two_q * *(b + 135 * OS1_S1 + 50);
            *(b + 135 * OS1_S1 + 100) = prefactor_z * *(b + 135 * OS1_S1 + 66) -
                                        p_over_q * *(b + 187 * OS1_S1 + 66);
            *(b + 135 * OS1_S1 + 101) =
                prefactor_z * *(b + 135 * OS1_S1 + 67) -
                p_over_q * *(b + 187 * OS1_S1 + 67) +
                one_over_two_q * *(b + 135 * OS1_S1 + 41);
            *(b + 135 * OS1_S1 + 102) =
                prefactor_x * *(b + 135 * OS1_S1 + 74) -
                p_over_q * *(b + 180 * OS1_S1 + 74) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 74) +
                one_over_two_q * *(b + 135 * OS1_S1 + 53);
            *(b + 135 * OS1_S1 + 103) =
                prefactor_y * *(b + 135 * OS1_S1 + 70) -
                p_over_q * *(b + 186 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 70);
            *(b + 135 * OS1_S1 + 104) =
                prefactor_x * *(b + 135 * OS1_S1 + 76) -
                p_over_q * *(b + 180 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 76) +
                one_over_two_q * *(b + 135 * OS1_S1 + 55);
            *(b + 135 * OS1_S1 + 105) =
                prefactor_x * *(b + 135 * OS1_S1 + 77) -
                p_over_q * *(b + 180 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 77);
            *(b + 135 * OS1_S1 + 106) = prefactor_z * *(b + 135 * OS1_S1 + 71) -
                                        p_over_q * *(b + 187 * OS1_S1 + 71);
            *(b + 135 * OS1_S1 + 107) =
                prefactor_x * *(b + 135 * OS1_S1 + 79) -
                p_over_q * *(b + 180 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 79);
            *(b + 135 * OS1_S1 + 108) =
                prefactor_x * *(b + 135 * OS1_S1 + 80) -
                p_over_q * *(b + 180 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 80);
            *(b + 135 * OS1_S1 + 109) =
                prefactor_x * *(b + 135 * OS1_S1 + 81) -
                p_over_q * *(b + 180 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 81);
            *(b + 135 * OS1_S1 + 110) =
                prefactor_x * *(b + 135 * OS1_S1 + 82) -
                p_over_q * *(b + 180 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 82);
            *(b + 135 * OS1_S1 + 111) =
                prefactor_x * *(b + 135 * OS1_S1 + 83) -
                p_over_q * *(b + 180 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 83);
            *(b + 135 * OS1_S1 + 112) =
                prefactor_y * *(b + 135 * OS1_S1 + 77) -
                p_over_q * *(b + 186 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 50);
            *(b + 135 * OS1_S1 + 113) = prefactor_z * *(b + 135 * OS1_S1 + 77) -
                                        p_over_q * *(b + 187 * OS1_S1 + 77);
            *(b + 135 * OS1_S1 + 114) =
                prefactor_z * *(b + 135 * OS1_S1 + 78) -
                p_over_q * *(b + 187 * OS1_S1 + 78) +
                one_over_two_q * *(b + 135 * OS1_S1 + 50);
            *(b + 135 * OS1_S1 + 115) =
                prefactor_z * *(b + 135 * OS1_S1 + 79) -
                p_over_q * *(b + 187 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 51);
            *(b + 135 * OS1_S1 + 116) =
                prefactor_y * *(b + 135 * OS1_S1 + 81) -
                p_over_q * *(b + 186 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 54);
            *(b + 135 * OS1_S1 + 117) =
                prefactor_y * *(b + 135 * OS1_S1 + 82) -
                p_over_q * *(b + 186 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 82) +
                one_over_two_q * *(b + 135 * OS1_S1 + 55);
            *(b + 135 * OS1_S1 + 118) =
                prefactor_y * *(b + 135 * OS1_S1 + 83) -
                p_over_q * *(b + 186 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 83);
            *(b + 135 * OS1_S1 + 119) =
                prefactor_z * *(b + 135 * OS1_S1 + 83) -
                p_over_q * *(b + 187 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 55);
            *(b + 136 * OS1_S1 + 84) =
                prefactor_x * *(b + 136 * OS1_S1 + 56) -
                p_over_q * *(b + 181 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 136 * OS1_S1 + 35);
            *(b + 136 * OS1_S1 + 85) =
                prefactor_y * *(b + 136 * OS1_S1 + 56) -
                p_over_q * *(b + 187 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 56);
            *(b + 136 * OS1_S1 + 86) = prefactor_z * *(b + 136 * OS1_S1 + 56) -
                                       p_over_q * *(b + 188 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 56);
            *(b + 136 * OS1_S1 + 87) =
                prefactor_y * *(b + 136 * OS1_S1 + 57) -
                p_over_q * *(b + 187 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 57) +
                one_over_two_q * *(b + 136 * OS1_S1 + 35);
            *(b + 136 * OS1_S1 + 88) = prefactor_z * *(b + 136 * OS1_S1 + 57) -
                                       p_over_q * *(b + 188 * OS1_S1 + 57) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 57);
            *(b + 136 * OS1_S1 + 89) =
                prefactor_z * *(b + 136 * OS1_S1 + 58) -
                p_over_q * *(b + 188 * OS1_S1 + 58) +
                one_over_two_q * *(b + 94 * OS1_S1 + 58) +
                one_over_two_q * *(b + 136 * OS1_S1 + 35);
            *(b + 136 * OS1_S1 + 90) =
                prefactor_y * *(b + 136 * OS1_S1 + 59) -
                p_over_q * *(b + 187 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 36);
            *(b + 136 * OS1_S1 + 91) = prefactor_z * *(b + 136 * OS1_S1 + 59) -
                                       p_over_q * *(b + 188 * OS1_S1 + 59) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 59);
            *(b + 136 * OS1_S1 + 92) =
                prefactor_y * *(b + 136 * OS1_S1 + 61) -
                p_over_q * *(b + 187 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 61);
            *(b + 136 * OS1_S1 + 93) =
                prefactor_z * *(b + 136 * OS1_S1 + 61) -
                p_over_q * *(b + 188 * OS1_S1 + 61) +
                one_over_two_q * *(b + 94 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 37);
            *(b + 136 * OS1_S1 + 94) =
                prefactor_x * *(b + 136 * OS1_S1 + 66) -
                p_over_q * *(b + 181 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 45);
            *(b + 136 * OS1_S1 + 95) = prefactor_z * *(b + 136 * OS1_S1 + 62) -
                                       p_over_q * *(b + 188 * OS1_S1 + 62) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 62);
            *(b + 136 * OS1_S1 + 96) =
                prefactor_z * *(b + 136 * OS1_S1 + 63) -
                p_over_q * *(b + 188 * OS1_S1 + 63) +
                one_over_two_q * *(b + 94 * OS1_S1 + 63) +
                one_over_two_q * *(b + 136 * OS1_S1 + 38);
            *(b + 136 * OS1_S1 + 97) =
                prefactor_y * *(b + 136 * OS1_S1 + 65) -
                p_over_q * *(b + 187 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 65);
            *(b + 136 * OS1_S1 + 98) =
                prefactor_x * *(b + 136 * OS1_S1 + 70) -
                p_over_q * *(b + 181 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 49);
            *(b + 136 * OS1_S1 + 99) =
                prefactor_x * *(b + 136 * OS1_S1 + 71) -
                p_over_q * *(b + 181 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 71) +
                one_over_two_q * *(b + 136 * OS1_S1 + 50);
            *(b + 136 * OS1_S1 + 100) =
                prefactor_z * *(b + 136 * OS1_S1 + 66) -
                p_over_q * *(b + 188 * OS1_S1 + 66) +
                one_over_two_q * *(b + 94 * OS1_S1 + 66);
            *(b + 136 * OS1_S1 + 101) =
                prefactor_z * *(b + 136 * OS1_S1 + 67) -
                p_over_q * *(b + 188 * OS1_S1 + 67) +
                one_over_two_q * *(b + 94 * OS1_S1 + 67) +
                one_over_two_q * *(b + 136 * OS1_S1 + 41);
            *(b + 136 * OS1_S1 + 102) =
                prefactor_x * *(b + 136 * OS1_S1 + 74) -
                p_over_q * *(b + 181 * OS1_S1 + 74) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 74) +
                one_over_two_q * *(b + 136 * OS1_S1 + 53);
            *(b + 136 * OS1_S1 + 103) =
                prefactor_y * *(b + 136 * OS1_S1 + 70) -
                p_over_q * *(b + 187 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 70);
            *(b + 136 * OS1_S1 + 104) =
                prefactor_x * *(b + 136 * OS1_S1 + 76) -
                p_over_q * *(b + 181 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 76) +
                one_over_two_q * *(b + 136 * OS1_S1 + 55);
            *(b + 136 * OS1_S1 + 105) =
                prefactor_x * *(b + 136 * OS1_S1 + 77) -
                p_over_q * *(b + 181 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 77);
            *(b + 136 * OS1_S1 + 106) =
                prefactor_z * *(b + 136 * OS1_S1 + 71) -
                p_over_q * *(b + 188 * OS1_S1 + 71) +
                one_over_two_q * *(b + 94 * OS1_S1 + 71);
            *(b + 136 * OS1_S1 + 107) =
                prefactor_x * *(b + 136 * OS1_S1 + 79) -
                p_over_q * *(b + 181 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 79);
            *(b + 136 * OS1_S1 + 108) =
                prefactor_x * *(b + 136 * OS1_S1 + 80) -
                p_over_q * *(b + 181 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 80);
            *(b + 136 * OS1_S1 + 109) =
                prefactor_x * *(b + 136 * OS1_S1 + 81) -
                p_over_q * *(b + 181 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 81);
            *(b + 136 * OS1_S1 + 110) =
                prefactor_x * *(b + 136 * OS1_S1 + 82) -
                p_over_q * *(b + 181 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 82);
            *(b + 136 * OS1_S1 + 111) =
                prefactor_x * *(b + 136 * OS1_S1 + 83) -
                p_over_q * *(b + 181 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 83);
            *(b + 136 * OS1_S1 + 112) =
                prefactor_y * *(b + 136 * OS1_S1 + 77) -
                p_over_q * *(b + 187 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 136 * OS1_S1 + 50);
            *(b + 136 * OS1_S1 + 113) =
                prefactor_z * *(b + 136 * OS1_S1 + 77) -
                p_over_q * *(b + 188 * OS1_S1 + 77) +
                one_over_two_q * *(b + 94 * OS1_S1 + 77);
            *(b + 136 * OS1_S1 + 114) =
                prefactor_z * *(b + 136 * OS1_S1 + 78) -
                p_over_q * *(b + 188 * OS1_S1 + 78) +
                one_over_two_q * *(b + 94 * OS1_S1 + 78) +
                one_over_two_q * *(b + 136 * OS1_S1 + 50);
            *(b + 136 * OS1_S1 + 115) =
                prefactor_z * *(b + 136 * OS1_S1 + 79) -
                p_over_q * *(b + 188 * OS1_S1 + 79) +
                one_over_two_q * *(b + 94 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 51);
            *(b + 136 * OS1_S1 + 116) =
                prefactor_y * *(b + 136 * OS1_S1 + 81) -
                p_over_q * *(b + 187 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 54);
            *(b + 136 * OS1_S1 + 117) =
                prefactor_y * *(b + 136 * OS1_S1 + 82) -
                p_over_q * *(b + 187 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 82) +
                one_over_two_q * *(b + 136 * OS1_S1 + 55);
            *(b + 136 * OS1_S1 + 118) =
                prefactor_y * *(b + 136 * OS1_S1 + 83) -
                p_over_q * *(b + 187 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 83);
            *(b + 136 * OS1_S1 + 119) =
                prefactor_z * *(b + 136 * OS1_S1 + 83) -
                p_over_q * *(b + 188 * OS1_S1 + 83) +
                one_over_two_q * *(b + 94 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 136 * OS1_S1 + 55);
            *(b + 137 * OS1_S1 + 84) =
                prefactor_x * *(b + 137 * OS1_S1 + 56) -
                p_over_q * *(b + 182 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 137 * OS1_S1 + 35);
            *(b + 137 * OS1_S1 + 85) =
                prefactor_y * *(b + 137 * OS1_S1 + 56) -
                p_over_q * *(b + 188 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 56);
            *(b + 137 * OS1_S1 + 86) =
                prefactor_z * *(b + 137 * OS1_S1 + 56) -
                p_over_q * *(b + 189 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 56);
            *(b + 137 * OS1_S1 + 87) =
                prefactor_y * *(b + 137 * OS1_S1 + 57) -
                p_over_q * *(b + 188 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 57) +
                one_over_two_q * *(b + 137 * OS1_S1 + 35);
            *(b + 137 * OS1_S1 + 88) =
                prefactor_z * *(b + 137 * OS1_S1 + 57) -
                p_over_q * *(b + 189 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 57);
            *(b + 137 * OS1_S1 + 89) =
                prefactor_z * *(b + 137 * OS1_S1 + 58) -
                p_over_q * *(b + 189 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 58) +
                one_over_two_q * *(b + 137 * OS1_S1 + 35);
            *(b + 137 * OS1_S1 + 90) =
                prefactor_y * *(b + 137 * OS1_S1 + 59) -
                p_over_q * *(b + 188 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 36);
            *(b + 137 * OS1_S1 + 91) =
                prefactor_z * *(b + 137 * OS1_S1 + 59) -
                p_over_q * *(b + 189 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 59);
            *(b + 137 * OS1_S1 + 92) =
                prefactor_y * *(b + 137 * OS1_S1 + 61) -
                p_over_q * *(b + 188 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 61);
            *(b + 137 * OS1_S1 + 93) =
                prefactor_z * *(b + 137 * OS1_S1 + 61) -
                p_over_q * *(b + 189 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 37);
            *(b + 137 * OS1_S1 + 94) =
                prefactor_x * *(b + 137 * OS1_S1 + 66) -
                p_over_q * *(b + 182 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 45);
            *(b + 137 * OS1_S1 + 95) =
                prefactor_z * *(b + 137 * OS1_S1 + 62) -
                p_over_q * *(b + 189 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 62);
            *(b + 137 * OS1_S1 + 96) =
                prefactor_z * *(b + 137 * OS1_S1 + 63) -
                p_over_q * *(b + 189 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 63) +
                one_over_two_q * *(b + 137 * OS1_S1 + 38);
            *(b + 137 * OS1_S1 + 97) =
                prefactor_y * *(b + 137 * OS1_S1 + 65) -
                p_over_q * *(b + 188 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 65);
            *(b + 137 * OS1_S1 + 98) =
                prefactor_x * *(b + 137 * OS1_S1 + 70) -
                p_over_q * *(b + 182 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 49);
            *(b + 137 * OS1_S1 + 99) =
                prefactor_x * *(b + 137 * OS1_S1 + 71) -
                p_over_q * *(b + 182 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 71) +
                one_over_two_q * *(b + 137 * OS1_S1 + 50);
            *(b + 137 * OS1_S1 + 100) =
                prefactor_z * *(b + 137 * OS1_S1 + 66) -
                p_over_q * *(b + 189 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 66);
            *(b + 137 * OS1_S1 + 101) =
                prefactor_z * *(b + 137 * OS1_S1 + 67) -
                p_over_q * *(b + 189 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 67) +
                one_over_two_q * *(b + 137 * OS1_S1 + 41);
            *(b + 137 * OS1_S1 + 102) =
                prefactor_y * *(b + 137 * OS1_S1 + 69) -
                p_over_q * *(b + 188 * OS1_S1 + 69) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 69) +
                one_over_two_q * *(b + 137 * OS1_S1 + 44);
            *(b + 137 * OS1_S1 + 103) =
                prefactor_y * *(b + 137 * OS1_S1 + 70) -
                p_over_q * *(b + 188 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 70);
            *(b + 137 * OS1_S1 + 104) =
                prefactor_x * *(b + 137 * OS1_S1 + 76) -
                p_over_q * *(b + 182 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 76) +
                one_over_two_q * *(b + 137 * OS1_S1 + 55);
            *(b + 137 * OS1_S1 + 105) =
                prefactor_x * *(b + 137 * OS1_S1 + 77) -
                p_over_q * *(b + 182 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 77);
            *(b + 137 * OS1_S1 + 106) =
                prefactor_z * *(b + 137 * OS1_S1 + 71) -
                p_over_q * *(b + 189 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 71);
            *(b + 137 * OS1_S1 + 107) =
                prefactor_x * *(b + 137 * OS1_S1 + 79) -
                p_over_q * *(b + 182 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 79);
            *(b + 137 * OS1_S1 + 108) =
                prefactor_x * *(b + 137 * OS1_S1 + 80) -
                p_over_q * *(b + 182 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 80);
            *(b + 137 * OS1_S1 + 109) =
                prefactor_x * *(b + 137 * OS1_S1 + 81) -
                p_over_q * *(b + 182 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 81);
            *(b + 137 * OS1_S1 + 110) =
                prefactor_y * *(b + 137 * OS1_S1 + 76) -
                p_over_q * *(b + 188 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 76);
            *(b + 137 * OS1_S1 + 111) =
                prefactor_x * *(b + 137 * OS1_S1 + 83) -
                p_over_q * *(b + 182 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 83);
            *(b + 137 * OS1_S1 + 112) =
                prefactor_y * *(b + 137 * OS1_S1 + 77) -
                p_over_q * *(b + 188 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 137 * OS1_S1 + 50);
            *(b + 137 * OS1_S1 + 113) =
                prefactor_z * *(b + 137 * OS1_S1 + 77) -
                p_over_q * *(b + 189 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 77);
            *(b + 137 * OS1_S1 + 114) =
                prefactor_z * *(b + 137 * OS1_S1 + 78) -
                p_over_q * *(b + 189 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 78) +
                one_over_two_q * *(b + 137 * OS1_S1 + 50);
            *(b + 137 * OS1_S1 + 115) =
                prefactor_z * *(b + 137 * OS1_S1 + 79) -
                p_over_q * *(b + 189 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 51);
            *(b + 137 * OS1_S1 + 116) =
                prefactor_y * *(b + 137 * OS1_S1 + 81) -
                p_over_q * *(b + 188 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 54);
            *(b + 137 * OS1_S1 + 117) =
                prefactor_y * *(b + 137 * OS1_S1 + 82) -
                p_over_q * *(b + 188 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 82) +
                one_over_two_q * *(b + 137 * OS1_S1 + 55);
            *(b + 137 * OS1_S1 + 118) =
                prefactor_y * *(b + 137 * OS1_S1 + 83) -
                p_over_q * *(b + 188 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 83);
            *(b + 137 * OS1_S1 + 119) =
                prefactor_z * *(b + 137 * OS1_S1 + 83) -
                p_over_q * *(b + 189 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 137 * OS1_S1 + 55);
            *(b + 138 * OS1_S1 + 84) =
                prefactor_x * *(b + 138 * OS1_S1 + 56) -
                p_over_q * *(b + 183 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 138 * OS1_S1 + 35);
            *(b + 138 * OS1_S1 + 85) =
                prefactor_y * *(b + 138 * OS1_S1 + 56) -
                p_over_q * *(b + 189 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 56);
            *(b + 138 * OS1_S1 + 86) =
                prefactor_z * *(b + 138 * OS1_S1 + 56) -
                p_over_q * *(b + 190 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 56);
            *(b + 138 * OS1_S1 + 87) =
                prefactor_y * *(b + 138 * OS1_S1 + 57) -
                p_over_q * *(b + 189 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 57) +
                one_over_two_q * *(b + 138 * OS1_S1 + 35);
            *(b + 138 * OS1_S1 + 88) =
                prefactor_y * *(b + 138 * OS1_S1 + 58) -
                p_over_q * *(b + 189 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 58);
            *(b + 138 * OS1_S1 + 89) =
                prefactor_z * *(b + 138 * OS1_S1 + 58) -
                p_over_q * *(b + 190 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 58) +
                one_over_two_q * *(b + 138 * OS1_S1 + 35);
            *(b + 138 * OS1_S1 + 90) =
                prefactor_y * *(b + 138 * OS1_S1 + 59) -
                p_over_q * *(b + 189 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 36);
            *(b + 138 * OS1_S1 + 91) =
                prefactor_z * *(b + 138 * OS1_S1 + 59) -
                p_over_q * *(b + 190 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 59);
            *(b + 138 * OS1_S1 + 92) =
                prefactor_y * *(b + 138 * OS1_S1 + 61) -
                p_over_q * *(b + 189 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 61);
            *(b + 138 * OS1_S1 + 93) =
                prefactor_z * *(b + 138 * OS1_S1 + 61) -
                p_over_q * *(b + 190 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 37);
            *(b + 138 * OS1_S1 + 94) =
                prefactor_x * *(b + 138 * OS1_S1 + 66) -
                p_over_q * *(b + 183 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 45);
            *(b + 138 * OS1_S1 + 95) =
                prefactor_z * *(b + 138 * OS1_S1 + 62) -
                p_over_q * *(b + 190 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 62);
            *(b + 138 * OS1_S1 + 96) =
                prefactor_y * *(b + 138 * OS1_S1 + 64) -
                p_over_q * *(b + 189 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 64) +
                one_over_two_q * *(b + 138 * OS1_S1 + 40);
            *(b + 138 * OS1_S1 + 97) =
                prefactor_y * *(b + 138 * OS1_S1 + 65) -
                p_over_q * *(b + 189 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 65);
            *(b + 138 * OS1_S1 + 98) =
                prefactor_x * *(b + 138 * OS1_S1 + 70) -
                p_over_q * *(b + 183 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 49);
            *(b + 138 * OS1_S1 + 99) =
                prefactor_x * *(b + 138 * OS1_S1 + 71) -
                p_over_q * *(b + 183 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 71) +
                one_over_two_q * *(b + 138 * OS1_S1 + 50);
            *(b + 138 * OS1_S1 + 100) =
                prefactor_z * *(b + 138 * OS1_S1 + 66) -
                p_over_q * *(b + 190 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 66);
            *(b + 138 * OS1_S1 + 101) =
                prefactor_z * *(b + 138 * OS1_S1 + 67) -
                p_over_q * *(b + 190 * OS1_S1 + 67) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 67) +
                one_over_two_q * *(b + 138 * OS1_S1 + 41);
            *(b + 138 * OS1_S1 + 102) =
                prefactor_y * *(b + 138 * OS1_S1 + 69) -
                p_over_q * *(b + 189 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 69) +
                one_over_two_q * *(b + 138 * OS1_S1 + 44);
            *(b + 138 * OS1_S1 + 103) =
                prefactor_y * *(b + 138 * OS1_S1 + 70) -
                p_over_q * *(b + 189 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 70);
            *(b + 138 * OS1_S1 + 104) =
                prefactor_x * *(b + 138 * OS1_S1 + 76) -
                p_over_q * *(b + 183 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 76) +
                one_over_two_q * *(b + 138 * OS1_S1 + 55);
            *(b + 138 * OS1_S1 + 105) =
                prefactor_x * *(b + 138 * OS1_S1 + 77) -
                p_over_q * *(b + 183 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 77);
            *(b + 138 * OS1_S1 + 106) =
                prefactor_z * *(b + 138 * OS1_S1 + 71) -
                p_over_q * *(b + 190 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 71);
            *(b + 138 * OS1_S1 + 107) =
                prefactor_x * *(b + 138 * OS1_S1 + 79) -
                p_over_q * *(b + 183 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 79);
            *(b + 138 * OS1_S1 + 108) =
                prefactor_x * *(b + 138 * OS1_S1 + 80) -
                p_over_q * *(b + 183 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 80);
            *(b + 138 * OS1_S1 + 109) =
                prefactor_x * *(b + 138 * OS1_S1 + 81) -
                p_over_q * *(b + 183 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 81);
            *(b + 138 * OS1_S1 + 110) =
                prefactor_y * *(b + 138 * OS1_S1 + 76) -
                p_over_q * *(b + 189 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 76);
            *(b + 138 * OS1_S1 + 111) =
                prefactor_x * *(b + 138 * OS1_S1 + 83) -
                p_over_q * *(b + 183 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 83);
            *(b + 138 * OS1_S1 + 112) =
                prefactor_y * *(b + 138 * OS1_S1 + 77) -
                p_over_q * *(b + 189 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 138 * OS1_S1 + 50);
            *(b + 138 * OS1_S1 + 113) =
                prefactor_z * *(b + 138 * OS1_S1 + 77) -
                p_over_q * *(b + 190 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 77);
            *(b + 138 * OS1_S1 + 114) =
                prefactor_z * *(b + 138 * OS1_S1 + 78) -
                p_over_q * *(b + 190 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 78) +
                one_over_two_q * *(b + 138 * OS1_S1 + 50);
            *(b + 138 * OS1_S1 + 115) =
                prefactor_z * *(b + 138 * OS1_S1 + 79) -
                p_over_q * *(b + 190 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 51);
            *(b + 138 * OS1_S1 + 116) =
                prefactor_y * *(b + 138 * OS1_S1 + 81) -
                p_over_q * *(b + 189 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 54);
            *(b + 138 * OS1_S1 + 117) =
                prefactor_y * *(b + 138 * OS1_S1 + 82) -
                p_over_q * *(b + 189 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 82) +
                one_over_two_q * *(b + 138 * OS1_S1 + 55);
            *(b + 138 * OS1_S1 + 118) =
                prefactor_y * *(b + 138 * OS1_S1 + 83) -
                p_over_q * *(b + 189 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 83);
            *(b + 138 * OS1_S1 + 119) =
                prefactor_z * *(b + 138 * OS1_S1 + 83) -
                p_over_q * *(b + 190 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 138 * OS1_S1 + 55);
            *(b + 139 * OS1_S1 + 84) =
                prefactor_x * *(b + 139 * OS1_S1 + 56) -
                p_over_q * *(b + 184 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 139 * OS1_S1 + 35);
            *(b + 139 * OS1_S1 + 85) = prefactor_y * *(b + 139 * OS1_S1 + 56) -
                                       p_over_q * *(b + 190 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 56);
            *(b + 139 * OS1_S1 + 86) =
                prefactor_z * *(b + 139 * OS1_S1 + 56) -
                p_over_q * *(b + 191 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 56);
            *(b + 139 * OS1_S1 + 87) =
                prefactor_y * *(b + 139 * OS1_S1 + 57) -
                p_over_q * *(b + 190 * OS1_S1 + 57) +
                one_over_two_q * *(b + 98 * OS1_S1 + 57) +
                one_over_two_q * *(b + 139 * OS1_S1 + 35);
            *(b + 139 * OS1_S1 + 88) = prefactor_y * *(b + 139 * OS1_S1 + 58) -
                                       p_over_q * *(b + 190 * OS1_S1 + 58) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 58);
            *(b + 139 * OS1_S1 + 89) =
                prefactor_z * *(b + 139 * OS1_S1 + 58) -
                p_over_q * *(b + 191 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 58) +
                one_over_two_q * *(b + 139 * OS1_S1 + 35);
            *(b + 139 * OS1_S1 + 90) =
                prefactor_y * *(b + 139 * OS1_S1 + 59) -
                p_over_q * *(b + 190 * OS1_S1 + 59) +
                one_over_two_q * *(b + 98 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 36);
            *(b + 139 * OS1_S1 + 91) =
                prefactor_z * *(b + 139 * OS1_S1 + 59) -
                p_over_q * *(b + 191 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 59);
            *(b + 139 * OS1_S1 + 92) = prefactor_y * *(b + 139 * OS1_S1 + 61) -
                                       p_over_q * *(b + 190 * OS1_S1 + 61) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 61);
            *(b + 139 * OS1_S1 + 93) =
                prefactor_z * *(b + 139 * OS1_S1 + 61) -
                p_over_q * *(b + 191 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 37);
            *(b + 139 * OS1_S1 + 94) =
                prefactor_x * *(b + 139 * OS1_S1 + 66) -
                p_over_q * *(b + 184 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 45);
            *(b + 139 * OS1_S1 + 95) =
                prefactor_z * *(b + 139 * OS1_S1 + 62) -
                p_over_q * *(b + 191 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 62);
            *(b + 139 * OS1_S1 + 96) =
                prefactor_y * *(b + 139 * OS1_S1 + 64) -
                p_over_q * *(b + 190 * OS1_S1 + 64) +
                one_over_two_q * *(b + 98 * OS1_S1 + 64) +
                one_over_two_q * *(b + 139 * OS1_S1 + 40);
            *(b + 139 * OS1_S1 + 97) = prefactor_y * *(b + 139 * OS1_S1 + 65) -
                                       p_over_q * *(b + 190 * OS1_S1 + 65) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 65);
            *(b + 139 * OS1_S1 + 98) =
                prefactor_x * *(b + 139 * OS1_S1 + 70) -
                p_over_q * *(b + 184 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 49);
            *(b + 139 * OS1_S1 + 99) =
                prefactor_x * *(b + 139 * OS1_S1 + 71) -
                p_over_q * *(b + 184 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 71) +
                one_over_two_q * *(b + 139 * OS1_S1 + 50);
            *(b + 139 * OS1_S1 + 100) =
                prefactor_z * *(b + 139 * OS1_S1 + 66) -
                p_over_q * *(b + 191 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 66);
            *(b + 139 * OS1_S1 + 101) =
                prefactor_x * *(b + 139 * OS1_S1 + 73) -
                p_over_q * *(b + 184 * OS1_S1 + 73) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 73) +
                one_over_two_q * *(b + 139 * OS1_S1 + 52);
            *(b + 139 * OS1_S1 + 102) =
                prefactor_y * *(b + 139 * OS1_S1 + 69) -
                p_over_q * *(b + 190 * OS1_S1 + 69) +
                one_over_two_q * *(b + 98 * OS1_S1 + 69) +
                one_over_two_q * *(b + 139 * OS1_S1 + 44);
            *(b + 139 * OS1_S1 + 103) =
                prefactor_y * *(b + 139 * OS1_S1 + 70) -
                p_over_q * *(b + 190 * OS1_S1 + 70) +
                one_over_two_q * *(b + 98 * OS1_S1 + 70);
            *(b + 139 * OS1_S1 + 104) =
                prefactor_x * *(b + 139 * OS1_S1 + 76) -
                p_over_q * *(b + 184 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 76) +
                one_over_two_q * *(b + 139 * OS1_S1 + 55);
            *(b + 139 * OS1_S1 + 105) =
                prefactor_x * *(b + 139 * OS1_S1 + 77) -
                p_over_q * *(b + 184 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 77);
            *(b + 139 * OS1_S1 + 106) =
                prefactor_x * *(b + 139 * OS1_S1 + 78) -
                p_over_q * *(b + 184 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 78);
            *(b + 139 * OS1_S1 + 107) =
                prefactor_x * *(b + 139 * OS1_S1 + 79) -
                p_over_q * *(b + 184 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 79);
            *(b + 139 * OS1_S1 + 108) =
                prefactor_x * *(b + 139 * OS1_S1 + 80) -
                p_over_q * *(b + 184 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 80);
            *(b + 139 * OS1_S1 + 109) =
                prefactor_x * *(b + 139 * OS1_S1 + 81) -
                p_over_q * *(b + 184 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 81);
            *(b + 139 * OS1_S1 + 110) =
                prefactor_y * *(b + 139 * OS1_S1 + 76) -
                p_over_q * *(b + 190 * OS1_S1 + 76) +
                one_over_two_q * *(b + 98 * OS1_S1 + 76);
            *(b + 139 * OS1_S1 + 111) =
                prefactor_x * *(b + 139 * OS1_S1 + 83) -
                p_over_q * *(b + 184 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 83);
            *(b + 139 * OS1_S1 + 112) =
                prefactor_y * *(b + 139 * OS1_S1 + 77) -
                p_over_q * *(b + 190 * OS1_S1 + 77) +
                one_over_two_q * *(b + 98 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 139 * OS1_S1 + 50);
            *(b + 139 * OS1_S1 + 113) =
                prefactor_z * *(b + 139 * OS1_S1 + 77) -
                p_over_q * *(b + 191 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 77);
            *(b + 139 * OS1_S1 + 114) =
                prefactor_z * *(b + 139 * OS1_S1 + 78) -
                p_over_q * *(b + 191 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 78) +
                one_over_two_q * *(b + 139 * OS1_S1 + 50);
            *(b + 139 * OS1_S1 + 115) =
                prefactor_z * *(b + 139 * OS1_S1 + 79) -
                p_over_q * *(b + 191 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 51);
            *(b + 139 * OS1_S1 + 116) =
                prefactor_y * *(b + 139 * OS1_S1 + 81) -
                p_over_q * *(b + 190 * OS1_S1 + 81) +
                one_over_two_q * *(b + 98 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 54);
            *(b + 139 * OS1_S1 + 117) =
                prefactor_y * *(b + 139 * OS1_S1 + 82) -
                p_over_q * *(b + 190 * OS1_S1 + 82) +
                one_over_two_q * *(b + 98 * OS1_S1 + 82) +
                one_over_two_q * *(b + 139 * OS1_S1 + 55);
            *(b + 139 * OS1_S1 + 118) =
                prefactor_y * *(b + 139 * OS1_S1 + 83) -
                p_over_q * *(b + 190 * OS1_S1 + 83) +
                one_over_two_q * *(b + 98 * OS1_S1 + 83);
            *(b + 139 * OS1_S1 + 119) =
                prefactor_z * *(b + 139 * OS1_S1 + 83) -
                p_over_q * *(b + 191 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 139 * OS1_S1 + 55);
            *(b + 140 * OS1_S1 + 84) =
                prefactor_x * *(b + 140 * OS1_S1 + 56) -
                p_over_q * *(b + 185 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 35);
            *(b + 140 * OS1_S1 + 85) = prefactor_y * *(b + 140 * OS1_S1 + 56) -
                                       p_over_q * *(b + 191 * OS1_S1 + 56);
            *(b + 140 * OS1_S1 + 86) =
                prefactor_z * *(b + 140 * OS1_S1 + 56) -
                p_over_q * *(b + 192 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 56);
            *(b + 140 * OS1_S1 + 87) =
                prefactor_y * *(b + 140 * OS1_S1 + 57) -
                p_over_q * *(b + 191 * OS1_S1 + 57) +
                one_over_two_q * *(b + 140 * OS1_S1 + 35);
            *(b + 140 * OS1_S1 + 88) = prefactor_y * *(b + 140 * OS1_S1 + 58) -
                                       p_over_q * *(b + 191 * OS1_S1 + 58);
            *(b + 140 * OS1_S1 + 89) =
                prefactor_z * *(b + 140 * OS1_S1 + 58) -
                p_over_q * *(b + 192 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 58) +
                one_over_two_q * *(b + 140 * OS1_S1 + 35);
            *(b + 140 * OS1_S1 + 90) =
                prefactor_y * *(b + 140 * OS1_S1 + 59) -
                p_over_q * *(b + 191 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 36);
            *(b + 140 * OS1_S1 + 91) =
                prefactor_z * *(b + 140 * OS1_S1 + 59) -
                p_over_q * *(b + 192 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 59);
            *(b + 140 * OS1_S1 + 92) = prefactor_y * *(b + 140 * OS1_S1 + 61) -
                                       p_over_q * *(b + 191 * OS1_S1 + 61);
            *(b + 140 * OS1_S1 + 93) =
                prefactor_z * *(b + 140 * OS1_S1 + 61) -
                p_over_q * *(b + 192 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 37);
            *(b + 140 * OS1_S1 + 94) =
                prefactor_x * *(b + 140 * OS1_S1 + 66) -
                p_over_q * *(b + 185 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 45);
            *(b + 140 * OS1_S1 + 95) =
                prefactor_z * *(b + 140 * OS1_S1 + 62) -
                p_over_q * *(b + 192 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 62);
            *(b + 140 * OS1_S1 + 96) =
                prefactor_y * *(b + 140 * OS1_S1 + 64) -
                p_over_q * *(b + 191 * OS1_S1 + 64) +
                one_over_two_q * *(b + 140 * OS1_S1 + 40);
            *(b + 140 * OS1_S1 + 97) = prefactor_y * *(b + 140 * OS1_S1 + 65) -
                                       p_over_q * *(b + 191 * OS1_S1 + 65);
            *(b + 140 * OS1_S1 + 98) =
                prefactor_x * *(b + 140 * OS1_S1 + 70) -
                p_over_q * *(b + 185 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 49);
            *(b + 140 * OS1_S1 + 99) =
                prefactor_x * *(b + 140 * OS1_S1 + 71) -
                p_over_q * *(b + 185 * OS1_S1 + 71) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 71) +
                one_over_two_q * *(b + 140 * OS1_S1 + 50);
            *(b + 140 * OS1_S1 + 100) =
                prefactor_z * *(b + 140 * OS1_S1 + 66) -
                p_over_q * *(b + 192 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 66);
            *(b + 140 * OS1_S1 + 101) =
                prefactor_x * *(b + 140 * OS1_S1 + 73) -
                p_over_q * *(b + 185 * OS1_S1 + 73) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 73) +
                one_over_two_q * *(b + 140 * OS1_S1 + 52);
            *(b + 140 * OS1_S1 + 102) =
                prefactor_y * *(b + 140 * OS1_S1 + 69) -
                p_over_q * *(b + 191 * OS1_S1 + 69) +
                one_over_two_q * *(b + 140 * OS1_S1 + 44);
            *(b + 140 * OS1_S1 + 103) = prefactor_y * *(b + 140 * OS1_S1 + 70) -
                                        p_over_q * *(b + 191 * OS1_S1 + 70);
            *(b + 140 * OS1_S1 + 104) =
                prefactor_x * *(b + 140 * OS1_S1 + 76) -
                p_over_q * *(b + 185 * OS1_S1 + 76) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 76) +
                one_over_two_q * *(b + 140 * OS1_S1 + 55);
            *(b + 140 * OS1_S1 + 105) =
                prefactor_x * *(b + 140 * OS1_S1 + 77) -
                p_over_q * *(b + 185 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 77);
            *(b + 140 * OS1_S1 + 106) =
                prefactor_x * *(b + 140 * OS1_S1 + 78) -
                p_over_q * *(b + 185 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 78);
            *(b + 140 * OS1_S1 + 107) =
                prefactor_x * *(b + 140 * OS1_S1 + 79) -
                p_over_q * *(b + 185 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 79);
            *(b + 140 * OS1_S1 + 108) =
                prefactor_x * *(b + 140 * OS1_S1 + 80) -
                p_over_q * *(b + 185 * OS1_S1 + 80) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 80);
            *(b + 140 * OS1_S1 + 109) =
                prefactor_x * *(b + 140 * OS1_S1 + 81) -
                p_over_q * *(b + 185 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 81);
            *(b + 140 * OS1_S1 + 110) = prefactor_y * *(b + 140 * OS1_S1 + 76) -
                                        p_over_q * *(b + 191 * OS1_S1 + 76);
            *(b + 140 * OS1_S1 + 111) =
                prefactor_x * *(b + 140 * OS1_S1 + 83) -
                p_over_q * *(b + 185 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 83);
            *(b + 140 * OS1_S1 + 112) =
                prefactor_y * *(b + 140 * OS1_S1 + 77) -
                p_over_q * *(b + 191 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 50);
            *(b + 140 * OS1_S1 + 113) =
                prefactor_z * *(b + 140 * OS1_S1 + 77) -
                p_over_q * *(b + 192 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 77);
            *(b + 140 * OS1_S1 + 114) =
                prefactor_z * *(b + 140 * OS1_S1 + 78) -
                p_over_q * *(b + 192 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 78) +
                one_over_two_q * *(b + 140 * OS1_S1 + 50);
            *(b + 140 * OS1_S1 + 115) =
                prefactor_z * *(b + 140 * OS1_S1 + 79) -
                p_over_q * *(b + 192 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 51);
            *(b + 140 * OS1_S1 + 116) =
                prefactor_y * *(b + 140 * OS1_S1 + 81) -
                p_over_q * *(b + 191 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 54);
            *(b + 140 * OS1_S1 + 117) =
                prefactor_y * *(b + 140 * OS1_S1 + 82) -
                p_over_q * *(b + 191 * OS1_S1 + 82) +
                one_over_two_q * *(b + 140 * OS1_S1 + 55);
            *(b + 140 * OS1_S1 + 118) = prefactor_y * *(b + 140 * OS1_S1 + 83) -
                                        p_over_q * *(b + 191 * OS1_S1 + 83);
            *(b + 140 * OS1_S1 + 119) =
                prefactor_z * *(b + 140 * OS1_S1 + 83) -
                p_over_q * *(b + 192 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 55);
            *(b + 141 * OS1_S1 + 84) =
                prefactor_x * *(b + 141 * OS1_S1 + 56) -
                p_over_q * *(b + 186 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 141 * OS1_S1 + 35);
            *(b + 141 * OS1_S1 + 85) =
                prefactor_y * *(b + 141 * OS1_S1 + 56) -
                p_over_q * *(b + 193 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 56);
            *(b + 141 * OS1_S1 + 86) = prefactor_z * *(b + 141 * OS1_S1 + 56) -
                                       p_over_q * *(b + 194 * OS1_S1 + 56);
            *(b + 141 * OS1_S1 + 87) =
                prefactor_y * *(b + 141 * OS1_S1 + 57) -
                p_over_q * *(b + 193 * OS1_S1 + 57) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 57) +
                one_over_two_q * *(b + 141 * OS1_S1 + 35);
            *(b + 141 * OS1_S1 + 88) = prefactor_z * *(b + 141 * OS1_S1 + 57) -
                                       p_over_q * *(b + 194 * OS1_S1 + 57);
            *(b + 141 * OS1_S1 + 89) =
                prefactor_z * *(b + 141 * OS1_S1 + 58) -
                p_over_q * *(b + 194 * OS1_S1 + 58) +
                one_over_two_q * *(b + 141 * OS1_S1 + 35);
            *(b + 141 * OS1_S1 + 90) =
                prefactor_y * *(b + 141 * OS1_S1 + 59) -
                p_over_q * *(b + 193 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 36);
            *(b + 141 * OS1_S1 + 91) = prefactor_z * *(b + 141 * OS1_S1 + 59) -
                                       p_over_q * *(b + 194 * OS1_S1 + 59);
            *(b + 141 * OS1_S1 + 92) =
                prefactor_y * *(b + 141 * OS1_S1 + 61) -
                p_over_q * *(b + 193 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 61);
            *(b + 141 * OS1_S1 + 93) =
                prefactor_z * *(b + 141 * OS1_S1 + 61) -
                p_over_q * *(b + 194 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 37);
            *(b + 141 * OS1_S1 + 94) =
                prefactor_x * *(b + 141 * OS1_S1 + 66) -
                p_over_q * *(b + 186 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 45);
            *(b + 141 * OS1_S1 + 95) = prefactor_z * *(b + 141 * OS1_S1 + 62) -
                                       p_over_q * *(b + 194 * OS1_S1 + 62);
            *(b + 141 * OS1_S1 + 96) =
                prefactor_z * *(b + 141 * OS1_S1 + 63) -
                p_over_q * *(b + 194 * OS1_S1 + 63) +
                one_over_two_q * *(b + 141 * OS1_S1 + 38);
            *(b + 141 * OS1_S1 + 97) =
                prefactor_y * *(b + 141 * OS1_S1 + 65) -
                p_over_q * *(b + 193 * OS1_S1 + 65) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 65);
            *(b + 141 * OS1_S1 + 98) =
                prefactor_x * *(b + 141 * OS1_S1 + 70) -
                p_over_q * *(b + 186 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 49);
            *(b + 141 * OS1_S1 + 99) =
                prefactor_x * *(b + 141 * OS1_S1 + 71) -
                p_over_q * *(b + 186 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 71) +
                one_over_two_q * *(b + 141 * OS1_S1 + 50);
            *(b + 141 * OS1_S1 + 100) = prefactor_z * *(b + 141 * OS1_S1 + 66) -
                                        p_over_q * *(b + 194 * OS1_S1 + 66);
            *(b + 141 * OS1_S1 + 101) =
                prefactor_z * *(b + 141 * OS1_S1 + 67) -
                p_over_q * *(b + 194 * OS1_S1 + 67) +
                one_over_two_q * *(b + 141 * OS1_S1 + 41);
            *(b + 141 * OS1_S1 + 102) =
                prefactor_x * *(b + 141 * OS1_S1 + 74) -
                p_over_q * *(b + 186 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 74) +
                one_over_two_q * *(b + 141 * OS1_S1 + 53);
            *(b + 141 * OS1_S1 + 103) =
                prefactor_y * *(b + 141 * OS1_S1 + 70) -
                p_over_q * *(b + 193 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 70);
            *(b + 141 * OS1_S1 + 104) =
                prefactor_x * *(b + 141 * OS1_S1 + 76) -
                p_over_q * *(b + 186 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 76) +
                one_over_two_q * *(b + 141 * OS1_S1 + 55);
            *(b + 141 * OS1_S1 + 105) =
                prefactor_x * *(b + 141 * OS1_S1 + 77) -
                p_over_q * *(b + 186 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 77);
            *(b + 141 * OS1_S1 + 106) = prefactor_z * *(b + 141 * OS1_S1 + 71) -
                                        p_over_q * *(b + 194 * OS1_S1 + 71);
            *(b + 141 * OS1_S1 + 107) =
                prefactor_x * *(b + 141 * OS1_S1 + 79) -
                p_over_q * *(b + 186 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 79);
            *(b + 141 * OS1_S1 + 108) =
                prefactor_x * *(b + 141 * OS1_S1 + 80) -
                p_over_q * *(b + 186 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 80);
            *(b + 141 * OS1_S1 + 109) =
                prefactor_x * *(b + 141 * OS1_S1 + 81) -
                p_over_q * *(b + 186 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 81);
            *(b + 141 * OS1_S1 + 110) =
                prefactor_x * *(b + 141 * OS1_S1 + 82) -
                p_over_q * *(b + 186 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 82);
            *(b + 141 * OS1_S1 + 111) =
                prefactor_x * *(b + 141 * OS1_S1 + 83) -
                p_over_q * *(b + 186 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 83);
            *(b + 141 * OS1_S1 + 112) =
                prefactor_y * *(b + 141 * OS1_S1 + 77) -
                p_over_q * *(b + 193 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 141 * OS1_S1 + 50);
            *(b + 141 * OS1_S1 + 113) = prefactor_z * *(b + 141 * OS1_S1 + 77) -
                                        p_over_q * *(b + 194 * OS1_S1 + 77);
            *(b + 141 * OS1_S1 + 114) =
                prefactor_z * *(b + 141 * OS1_S1 + 78) -
                p_over_q * *(b + 194 * OS1_S1 + 78) +
                one_over_two_q * *(b + 141 * OS1_S1 + 50);
            *(b + 141 * OS1_S1 + 115) =
                prefactor_z * *(b + 141 * OS1_S1 + 79) -
                p_over_q * *(b + 194 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 51);
            *(b + 141 * OS1_S1 + 116) =
                prefactor_y * *(b + 141 * OS1_S1 + 81) -
                p_over_q * *(b + 193 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 54);
            *(b + 141 * OS1_S1 + 117) =
                prefactor_y * *(b + 141 * OS1_S1 + 82) -
                p_over_q * *(b + 193 * OS1_S1 + 82) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 82) +
                one_over_two_q * *(b + 141 * OS1_S1 + 55);
            *(b + 141 * OS1_S1 + 118) =
                prefactor_y * *(b + 141 * OS1_S1 + 83) -
                p_over_q * *(b + 193 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 83);
            *(b + 141 * OS1_S1 + 119) =
                prefactor_z * *(b + 141 * OS1_S1 + 83) -
                p_over_q * *(b + 194 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 141 * OS1_S1 + 55);
            *(b + 142 * OS1_S1 + 84) =
                prefactor_x * *(b + 142 * OS1_S1 + 56) -
                p_over_q * *(b + 187 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 35);
            *(b + 142 * OS1_S1 + 85) =
                prefactor_y * *(b + 142 * OS1_S1 + 56) -
                p_over_q * *(b + 194 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 56);
            *(b + 142 * OS1_S1 + 86) = prefactor_z * *(b + 142 * OS1_S1 + 56) -
                                       p_over_q * *(b + 195 * OS1_S1 + 56) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 56);
            *(b + 142 * OS1_S1 + 87) =
                prefactor_y * *(b + 142 * OS1_S1 + 57) -
                p_over_q * *(b + 194 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 57) +
                one_over_two_q * *(b + 142 * OS1_S1 + 35);
            *(b + 142 * OS1_S1 + 88) = prefactor_z * *(b + 142 * OS1_S1 + 57) -
                                       p_over_q * *(b + 195 * OS1_S1 + 57) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 57);
            *(b + 142 * OS1_S1 + 89) =
                prefactor_z * *(b + 142 * OS1_S1 + 58) -
                p_over_q * *(b + 195 * OS1_S1 + 58) +
                one_over_two_q * *(b + 99 * OS1_S1 + 58) +
                one_over_two_q * *(b + 142 * OS1_S1 + 35);
            *(b + 142 * OS1_S1 + 90) =
                prefactor_y * *(b + 142 * OS1_S1 + 59) -
                p_over_q * *(b + 194 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 36);
            *(b + 142 * OS1_S1 + 91) = prefactor_z * *(b + 142 * OS1_S1 + 59) -
                                       p_over_q * *(b + 195 * OS1_S1 + 59) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 59);
            *(b + 142 * OS1_S1 + 92) =
                prefactor_y * *(b + 142 * OS1_S1 + 61) -
                p_over_q * *(b + 194 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 61);
            *(b + 142 * OS1_S1 + 93) =
                prefactor_z * *(b + 142 * OS1_S1 + 61) -
                p_over_q * *(b + 195 * OS1_S1 + 61) +
                one_over_two_q * *(b + 99 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 37);
            *(b + 142 * OS1_S1 + 94) =
                prefactor_x * *(b + 142 * OS1_S1 + 66) -
                p_over_q * *(b + 187 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 45);
            *(b + 142 * OS1_S1 + 95) = prefactor_z * *(b + 142 * OS1_S1 + 62) -
                                       p_over_q * *(b + 195 * OS1_S1 + 62) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 62);
            *(b + 142 * OS1_S1 + 96) =
                prefactor_z * *(b + 142 * OS1_S1 + 63) -
                p_over_q * *(b + 195 * OS1_S1 + 63) +
                one_over_two_q * *(b + 99 * OS1_S1 + 63) +
                one_over_two_q * *(b + 142 * OS1_S1 + 38);
            *(b + 142 * OS1_S1 + 97) =
                prefactor_y * *(b + 142 * OS1_S1 + 65) -
                p_over_q * *(b + 194 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 65);
            *(b + 142 * OS1_S1 + 98) =
                prefactor_x * *(b + 142 * OS1_S1 + 70) -
                p_over_q * *(b + 187 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 49);
            *(b + 142 * OS1_S1 + 99) =
                prefactor_x * *(b + 142 * OS1_S1 + 71) -
                p_over_q * *(b + 187 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 71) +
                one_over_two_q * *(b + 142 * OS1_S1 + 50);
            *(b + 142 * OS1_S1 + 100) =
                prefactor_z * *(b + 142 * OS1_S1 + 66) -
                p_over_q * *(b + 195 * OS1_S1 + 66) +
                one_over_two_q * *(b + 99 * OS1_S1 + 66);
            *(b + 142 * OS1_S1 + 101) =
                prefactor_z * *(b + 142 * OS1_S1 + 67) -
                p_over_q * *(b + 195 * OS1_S1 + 67) +
                one_over_two_q * *(b + 99 * OS1_S1 + 67) +
                one_over_two_q * *(b + 142 * OS1_S1 + 41);
            *(b + 142 * OS1_S1 + 102) =
                prefactor_x * *(b + 142 * OS1_S1 + 74) -
                p_over_q * *(b + 187 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 74) +
                one_over_two_q * *(b + 142 * OS1_S1 + 53);
            *(b + 142 * OS1_S1 + 103) =
                prefactor_y * *(b + 142 * OS1_S1 + 70) -
                p_over_q * *(b + 194 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 70);
            *(b + 142 * OS1_S1 + 104) =
                prefactor_x * *(b + 142 * OS1_S1 + 76) -
                p_over_q * *(b + 187 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 76) +
                one_over_two_q * *(b + 142 * OS1_S1 + 55);
            *(b + 142 * OS1_S1 + 105) =
                prefactor_x * *(b + 142 * OS1_S1 + 77) -
                p_over_q * *(b + 187 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 77);
            *(b + 142 * OS1_S1 + 106) =
                prefactor_z * *(b + 142 * OS1_S1 + 71) -
                p_over_q * *(b + 195 * OS1_S1 + 71) +
                one_over_two_q * *(b + 99 * OS1_S1 + 71);
            *(b + 142 * OS1_S1 + 107) =
                prefactor_x * *(b + 142 * OS1_S1 + 79) -
                p_over_q * *(b + 187 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 79);
            *(b + 142 * OS1_S1 + 108) =
                prefactor_x * *(b + 142 * OS1_S1 + 80) -
                p_over_q * *(b + 187 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 80);
            *(b + 142 * OS1_S1 + 109) =
                prefactor_x * *(b + 142 * OS1_S1 + 81) -
                p_over_q * *(b + 187 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 81);
            *(b + 142 * OS1_S1 + 110) =
                prefactor_x * *(b + 142 * OS1_S1 + 82) -
                p_over_q * *(b + 187 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 82);
            *(b + 142 * OS1_S1 + 111) =
                prefactor_x * *(b + 142 * OS1_S1 + 83) -
                p_over_q * *(b + 187 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 83);
            *(b + 142 * OS1_S1 + 112) =
                prefactor_y * *(b + 142 * OS1_S1 + 77) -
                p_over_q * *(b + 194 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 50);
            *(b + 142 * OS1_S1 + 113) =
                prefactor_z * *(b + 142 * OS1_S1 + 77) -
                p_over_q * *(b + 195 * OS1_S1 + 77) +
                one_over_two_q * *(b + 99 * OS1_S1 + 77);
            *(b + 142 * OS1_S1 + 114) =
                prefactor_z * *(b + 142 * OS1_S1 + 78) -
                p_over_q * *(b + 195 * OS1_S1 + 78) +
                one_over_two_q * *(b + 99 * OS1_S1 + 78) +
                one_over_two_q * *(b + 142 * OS1_S1 + 50);
            *(b + 142 * OS1_S1 + 115) =
                prefactor_z * *(b + 142 * OS1_S1 + 79) -
                p_over_q * *(b + 195 * OS1_S1 + 79) +
                one_over_two_q * *(b + 99 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 51);
            *(b + 142 * OS1_S1 + 116) =
                prefactor_y * *(b + 142 * OS1_S1 + 81) -
                p_over_q * *(b + 194 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 54);
            *(b + 142 * OS1_S1 + 117) =
                prefactor_y * *(b + 142 * OS1_S1 + 82) -
                p_over_q * *(b + 194 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 82) +
                one_over_two_q * *(b + 142 * OS1_S1 + 55);
            *(b + 142 * OS1_S1 + 118) =
                prefactor_y * *(b + 142 * OS1_S1 + 83) -
                p_over_q * *(b + 194 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 83);
            *(b + 142 * OS1_S1 + 119) =
                prefactor_z * *(b + 142 * OS1_S1 + 83) -
                p_over_q * *(b + 195 * OS1_S1 + 83) +
                one_over_two_q * *(b + 99 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 55);
            *(b + 143 * OS1_S1 + 84) =
                prefactor_x * *(b + 143 * OS1_S1 + 56) -
                p_over_q * *(b + 188 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 143 * OS1_S1 + 35);
            *(b + 143 * OS1_S1 + 85) =
                prefactor_y * *(b + 143 * OS1_S1 + 56) -
                p_over_q * *(b + 195 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 56);
            *(b + 143 * OS1_S1 + 86) =
                prefactor_z * *(b + 143 * OS1_S1 + 56) -
                p_over_q * *(b + 196 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 56);
            *(b + 143 * OS1_S1 + 87) =
                prefactor_y * *(b + 143 * OS1_S1 + 57) -
                p_over_q * *(b + 195 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 57) +
                one_over_two_q * *(b + 143 * OS1_S1 + 35);
            *(b + 143 * OS1_S1 + 88) =
                prefactor_z * *(b + 143 * OS1_S1 + 57) -
                p_over_q * *(b + 196 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 57);
            *(b + 143 * OS1_S1 + 89) =
                prefactor_z * *(b + 143 * OS1_S1 + 58) -
                p_over_q * *(b + 196 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 58) +
                one_over_two_q * *(b + 143 * OS1_S1 + 35);
            *(b + 143 * OS1_S1 + 90) =
                prefactor_y * *(b + 143 * OS1_S1 + 59) -
                p_over_q * *(b + 195 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 36);
            *(b + 143 * OS1_S1 + 91) =
                prefactor_z * *(b + 143 * OS1_S1 + 59) -
                p_over_q * *(b + 196 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 59);
            *(b + 143 * OS1_S1 + 92) =
                prefactor_y * *(b + 143 * OS1_S1 + 61) -
                p_over_q * *(b + 195 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 61);
            *(b + 143 * OS1_S1 + 93) =
                prefactor_z * *(b + 143 * OS1_S1 + 61) -
                p_over_q * *(b + 196 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 37);
            *(b + 143 * OS1_S1 + 94) =
                prefactor_x * *(b + 143 * OS1_S1 + 66) -
                p_over_q * *(b + 188 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 45);
            *(b + 143 * OS1_S1 + 95) =
                prefactor_z * *(b + 143 * OS1_S1 + 62) -
                p_over_q * *(b + 196 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 62);
            *(b + 143 * OS1_S1 + 96) =
                prefactor_z * *(b + 143 * OS1_S1 + 63) -
                p_over_q * *(b + 196 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 63) +
                one_over_two_q * *(b + 143 * OS1_S1 + 38);
            *(b + 143 * OS1_S1 + 97) =
                prefactor_y * *(b + 143 * OS1_S1 + 65) -
                p_over_q * *(b + 195 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 65);
            *(b + 143 * OS1_S1 + 98) =
                prefactor_x * *(b + 143 * OS1_S1 + 70) -
                p_over_q * *(b + 188 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 49);
            *(b + 143 * OS1_S1 + 99) =
                prefactor_x * *(b + 143 * OS1_S1 + 71) -
                p_over_q * *(b + 188 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 71) +
                one_over_two_q * *(b + 143 * OS1_S1 + 50);
            *(b + 143 * OS1_S1 + 100) =
                prefactor_z * *(b + 143 * OS1_S1 + 66) -
                p_over_q * *(b + 196 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 66);
            *(b + 143 * OS1_S1 + 101) =
                prefactor_z * *(b + 143 * OS1_S1 + 67) -
                p_over_q * *(b + 196 * OS1_S1 + 67) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 67) +
                one_over_two_q * *(b + 143 * OS1_S1 + 41);
            *(b + 143 * OS1_S1 + 102) =
                prefactor_x * *(b + 143 * OS1_S1 + 74) -
                p_over_q * *(b + 188 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 74) +
                one_over_two_q * *(b + 143 * OS1_S1 + 53);
            *(b + 143 * OS1_S1 + 103) =
                prefactor_y * *(b + 143 * OS1_S1 + 70) -
                p_over_q * *(b + 195 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 70);
            *(b + 143 * OS1_S1 + 104) =
                prefactor_x * *(b + 143 * OS1_S1 + 76) -
                p_over_q * *(b + 188 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 76) +
                one_over_two_q * *(b + 143 * OS1_S1 + 55);
            *(b + 143 * OS1_S1 + 105) =
                prefactor_x * *(b + 143 * OS1_S1 + 77) -
                p_over_q * *(b + 188 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 77);
            *(b + 143 * OS1_S1 + 106) =
                prefactor_z * *(b + 143 * OS1_S1 + 71) -
                p_over_q * *(b + 196 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 71);
            *(b + 143 * OS1_S1 + 107) =
                prefactor_x * *(b + 143 * OS1_S1 + 79) -
                p_over_q * *(b + 188 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 79);
            *(b + 143 * OS1_S1 + 108) =
                prefactor_x * *(b + 143 * OS1_S1 + 80) -
                p_over_q * *(b + 188 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 80);
            *(b + 143 * OS1_S1 + 109) =
                prefactor_x * *(b + 143 * OS1_S1 + 81) -
                p_over_q * *(b + 188 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 81);
            *(b + 143 * OS1_S1 + 110) =
                prefactor_x * *(b + 143 * OS1_S1 + 82) -
                p_over_q * *(b + 188 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 82);
            *(b + 143 * OS1_S1 + 111) =
                prefactor_x * *(b + 143 * OS1_S1 + 83) -
                p_over_q * *(b + 188 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 83);
            *(b + 143 * OS1_S1 + 112) =
                prefactor_y * *(b + 143 * OS1_S1 + 77) -
                p_over_q * *(b + 195 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 143 * OS1_S1 + 50);
            *(b + 143 * OS1_S1 + 113) =
                prefactor_z * *(b + 143 * OS1_S1 + 77) -
                p_over_q * *(b + 196 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 77);
            *(b + 143 * OS1_S1 + 114) =
                prefactor_z * *(b + 143 * OS1_S1 + 78) -
                p_over_q * *(b + 196 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 78) +
                one_over_two_q * *(b + 143 * OS1_S1 + 50);
            *(b + 143 * OS1_S1 + 115) =
                prefactor_z * *(b + 143 * OS1_S1 + 79) -
                p_over_q * *(b + 196 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 51);
            *(b + 143 * OS1_S1 + 116) =
                prefactor_y * *(b + 143 * OS1_S1 + 81) -
                p_over_q * *(b + 195 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 54);
            *(b + 143 * OS1_S1 + 117) =
                prefactor_y * *(b + 143 * OS1_S1 + 82) -
                p_over_q * *(b + 195 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 82) +
                one_over_two_q * *(b + 143 * OS1_S1 + 55);
            *(b + 143 * OS1_S1 + 118) =
                prefactor_y * *(b + 143 * OS1_S1 + 83) -
                p_over_q * *(b + 195 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 83);
            *(b + 143 * OS1_S1 + 119) =
                prefactor_z * *(b + 143 * OS1_S1 + 83) -
                p_over_q * *(b + 196 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 143 * OS1_S1 + 55);
            *(b + 144 * OS1_S1 + 84) =
                prefactor_x * *(b + 144 * OS1_S1 + 56) -
                p_over_q * *(b + 189 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 144 * OS1_S1 + 35);
            *(b + 144 * OS1_S1 + 85) =
                prefactor_y * *(b + 144 * OS1_S1 + 56) -
                p_over_q * *(b + 196 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 56);
            *(b + 144 * OS1_S1 + 86) =
                prefactor_z * *(b + 144 * OS1_S1 + 56) -
                p_over_q * *(b + 197 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 56);
            *(b + 144 * OS1_S1 + 87) =
                prefactor_y * *(b + 144 * OS1_S1 + 57) -
                p_over_q * *(b + 196 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 57) +
                one_over_two_q * *(b + 144 * OS1_S1 + 35);
            *(b + 144 * OS1_S1 + 88) =
                prefactor_z * *(b + 144 * OS1_S1 + 57) -
                p_over_q * *(b + 197 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 57);
            *(b + 144 * OS1_S1 + 89) =
                prefactor_z * *(b + 144 * OS1_S1 + 58) -
                p_over_q * *(b + 197 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 58) +
                one_over_two_q * *(b + 144 * OS1_S1 + 35);
            *(b + 144 * OS1_S1 + 90) =
                prefactor_y * *(b + 144 * OS1_S1 + 59) -
                p_over_q * *(b + 196 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 36);
            *(b + 144 * OS1_S1 + 91) =
                prefactor_z * *(b + 144 * OS1_S1 + 59) -
                p_over_q * *(b + 197 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 59);
            *(b + 144 * OS1_S1 + 92) =
                prefactor_y * *(b + 144 * OS1_S1 + 61) -
                p_over_q * *(b + 196 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 61);
            *(b + 144 * OS1_S1 + 93) =
                prefactor_z * *(b + 144 * OS1_S1 + 61) -
                p_over_q * *(b + 197 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 37);
            *(b + 144 * OS1_S1 + 94) =
                prefactor_x * *(b + 144 * OS1_S1 + 66) -
                p_over_q * *(b + 189 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 45);
            *(b + 144 * OS1_S1 + 95) =
                prefactor_z * *(b + 144 * OS1_S1 + 62) -
                p_over_q * *(b + 197 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 62);
            *(b + 144 * OS1_S1 + 96) =
                prefactor_z * *(b + 144 * OS1_S1 + 63) -
                p_over_q * *(b + 197 * OS1_S1 + 63) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 63) +
                one_over_two_q * *(b + 144 * OS1_S1 + 38);
            *(b + 144 * OS1_S1 + 97) =
                prefactor_y * *(b + 144 * OS1_S1 + 65) -
                p_over_q * *(b + 196 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 65);
            *(b + 144 * OS1_S1 + 98) =
                prefactor_x * *(b + 144 * OS1_S1 + 70) -
                p_over_q * *(b + 189 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 49);
            *(b + 144 * OS1_S1 + 99) =
                prefactor_x * *(b + 144 * OS1_S1 + 71) -
                p_over_q * *(b + 189 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 71) +
                one_over_two_q * *(b + 144 * OS1_S1 + 50);
            *(b + 144 * OS1_S1 + 100) =
                prefactor_z * *(b + 144 * OS1_S1 + 66) -
                p_over_q * *(b + 197 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 66);
            *(b + 144 * OS1_S1 + 101) =
                prefactor_x * *(b + 144 * OS1_S1 + 73) -
                p_over_q * *(b + 189 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 73) +
                one_over_two_q * *(b + 144 * OS1_S1 + 52);
            *(b + 144 * OS1_S1 + 102) =
                prefactor_x * *(b + 144 * OS1_S1 + 74) -
                p_over_q * *(b + 189 * OS1_S1 + 74) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 74) +
                one_over_two_q * *(b + 144 * OS1_S1 + 53);
            *(b + 144 * OS1_S1 + 103) =
                prefactor_y * *(b + 144 * OS1_S1 + 70) -
                p_over_q * *(b + 196 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 70);
            *(b + 144 * OS1_S1 + 104) =
                prefactor_x * *(b + 144 * OS1_S1 + 76) -
                p_over_q * *(b + 189 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 76) +
                one_over_two_q * *(b + 144 * OS1_S1 + 55);
            *(b + 144 * OS1_S1 + 105) =
                prefactor_x * *(b + 144 * OS1_S1 + 77) -
                p_over_q * *(b + 189 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 77);
            *(b + 144 * OS1_S1 + 106) =
                prefactor_x * *(b + 144 * OS1_S1 + 78) -
                p_over_q * *(b + 189 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 78);
            *(b + 144 * OS1_S1 + 107) =
                prefactor_x * *(b + 144 * OS1_S1 + 79) -
                p_over_q * *(b + 189 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 79);
            *(b + 144 * OS1_S1 + 108) =
                prefactor_x * *(b + 144 * OS1_S1 + 80) -
                p_over_q * *(b + 189 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 80);
            *(b + 144 * OS1_S1 + 109) =
                prefactor_x * *(b + 144 * OS1_S1 + 81) -
                p_over_q * *(b + 189 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 81);
            *(b + 144 * OS1_S1 + 110) =
                prefactor_x * *(b + 144 * OS1_S1 + 82) -
                p_over_q * *(b + 189 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 82);
            *(b + 144 * OS1_S1 + 111) =
                prefactor_x * *(b + 144 * OS1_S1 + 83) -
                p_over_q * *(b + 189 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 83);
            *(b + 144 * OS1_S1 + 112) =
                prefactor_y * *(b + 144 * OS1_S1 + 77) -
                p_over_q * *(b + 196 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 144 * OS1_S1 + 50);
            *(b + 144 * OS1_S1 + 113) =
                prefactor_z * *(b + 144 * OS1_S1 + 77) -
                p_over_q * *(b + 197 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 77);
            *(b + 144 * OS1_S1 + 114) =
                prefactor_z * *(b + 144 * OS1_S1 + 78) -
                p_over_q * *(b + 197 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 78) +
                one_over_two_q * *(b + 144 * OS1_S1 + 50);
            *(b + 144 * OS1_S1 + 115) =
                prefactor_z * *(b + 144 * OS1_S1 + 79) -
                p_over_q * *(b + 197 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 51);
            *(b + 144 * OS1_S1 + 116) =
                prefactor_y * *(b + 144 * OS1_S1 + 81) -
                p_over_q * *(b + 196 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 54);
            *(b + 144 * OS1_S1 + 117) =
                prefactor_y * *(b + 144 * OS1_S1 + 82) -
                p_over_q * *(b + 196 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 82) +
                one_over_two_q * *(b + 144 * OS1_S1 + 55);
            *(b + 144 * OS1_S1 + 118) =
                prefactor_y * *(b + 144 * OS1_S1 + 83) -
                p_over_q * *(b + 196 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 83);
            *(b + 144 * OS1_S1 + 119) =
                prefactor_z * *(b + 144 * OS1_S1 + 83) -
                p_over_q * *(b + 197 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 144 * OS1_S1 + 55);
            *(b + 145 * OS1_S1 + 84) =
                prefactor_x * *(b + 145 * OS1_S1 + 56) -
                p_over_q * *(b + 190 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 145 * OS1_S1 + 35);
            *(b + 145 * OS1_S1 + 85) =
                prefactor_y * *(b + 145 * OS1_S1 + 56) -
                p_over_q * *(b + 197 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 56);
            *(b + 145 * OS1_S1 + 86) =
                prefactor_z * *(b + 145 * OS1_S1 + 56) -
                p_over_q * *(b + 198 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 56);
            *(b + 145 * OS1_S1 + 87) =
                prefactor_y * *(b + 145 * OS1_S1 + 57) -
                p_over_q * *(b + 197 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 57) +
                one_over_two_q * *(b + 145 * OS1_S1 + 35);
            *(b + 145 * OS1_S1 + 88) =
                prefactor_y * *(b + 145 * OS1_S1 + 58) -
                p_over_q * *(b + 197 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 58);
            *(b + 145 * OS1_S1 + 89) =
                prefactor_z * *(b + 145 * OS1_S1 + 58) -
                p_over_q * *(b + 198 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 58) +
                one_over_two_q * *(b + 145 * OS1_S1 + 35);
            *(b + 145 * OS1_S1 + 90) =
                prefactor_y * *(b + 145 * OS1_S1 + 59) -
                p_over_q * *(b + 197 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 36);
            *(b + 145 * OS1_S1 + 91) =
                prefactor_z * *(b + 145 * OS1_S1 + 59) -
                p_over_q * *(b + 198 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 59);
            *(b + 145 * OS1_S1 + 92) =
                prefactor_y * *(b + 145 * OS1_S1 + 61) -
                p_over_q * *(b + 197 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 61);
            *(b + 145 * OS1_S1 + 93) =
                prefactor_z * *(b + 145 * OS1_S1 + 61) -
                p_over_q * *(b + 198 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 37);
            *(b + 145 * OS1_S1 + 94) =
                prefactor_x * *(b + 145 * OS1_S1 + 66) -
                p_over_q * *(b + 190 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 45);
            *(b + 145 * OS1_S1 + 95) =
                prefactor_z * *(b + 145 * OS1_S1 + 62) -
                p_over_q * *(b + 198 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 62);
            *(b + 145 * OS1_S1 + 96) =
                prefactor_y * *(b + 145 * OS1_S1 + 64) -
                p_over_q * *(b + 197 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 64) +
                one_over_two_q * *(b + 145 * OS1_S1 + 40);
            *(b + 145 * OS1_S1 + 97) =
                prefactor_y * *(b + 145 * OS1_S1 + 65) -
                p_over_q * *(b + 197 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 65);
            *(b + 145 * OS1_S1 + 98) =
                prefactor_x * *(b + 145 * OS1_S1 + 70) -
                p_over_q * *(b + 190 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 49);
            *(b + 145 * OS1_S1 + 99) =
                prefactor_x * *(b + 145 * OS1_S1 + 71) -
                p_over_q * *(b + 190 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 71) +
                one_over_two_q * *(b + 145 * OS1_S1 + 50);
            *(b + 145 * OS1_S1 + 100) =
                prefactor_z * *(b + 145 * OS1_S1 + 66) -
                p_over_q * *(b + 198 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 66);
            *(b + 145 * OS1_S1 + 101) =
                prefactor_x * *(b + 145 * OS1_S1 + 73) -
                p_over_q * *(b + 190 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 73) +
                one_over_two_q * *(b + 145 * OS1_S1 + 52);
            *(b + 145 * OS1_S1 + 102) =
                prefactor_y * *(b + 145 * OS1_S1 + 69) -
                p_over_q * *(b + 197 * OS1_S1 + 69) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 69) +
                one_over_two_q * *(b + 145 * OS1_S1 + 44);
            *(b + 145 * OS1_S1 + 103) =
                prefactor_y * *(b + 145 * OS1_S1 + 70) -
                p_over_q * *(b + 197 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 70);
            *(b + 145 * OS1_S1 + 104) =
                prefactor_x * *(b + 145 * OS1_S1 + 76) -
                p_over_q * *(b + 190 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 76) +
                one_over_two_q * *(b + 145 * OS1_S1 + 55);
            *(b + 145 * OS1_S1 + 105) =
                prefactor_x * *(b + 145 * OS1_S1 + 77) -
                p_over_q * *(b + 190 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 77);
            *(b + 145 * OS1_S1 + 106) =
                prefactor_x * *(b + 145 * OS1_S1 + 78) -
                p_over_q * *(b + 190 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 78);
            *(b + 145 * OS1_S1 + 107) =
                prefactor_x * *(b + 145 * OS1_S1 + 79) -
                p_over_q * *(b + 190 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 79);
            *(b + 145 * OS1_S1 + 108) =
                prefactor_x * *(b + 145 * OS1_S1 + 80) -
                p_over_q * *(b + 190 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 80);
            *(b + 145 * OS1_S1 + 109) =
                prefactor_x * *(b + 145 * OS1_S1 + 81) -
                p_over_q * *(b + 190 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 81);
            *(b + 145 * OS1_S1 + 110) =
                prefactor_y * *(b + 145 * OS1_S1 + 76) -
                p_over_q * *(b + 197 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 76);
            *(b + 145 * OS1_S1 + 111) =
                prefactor_x * *(b + 145 * OS1_S1 + 83) -
                p_over_q * *(b + 190 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 83);
            *(b + 145 * OS1_S1 + 112) =
                prefactor_y * *(b + 145 * OS1_S1 + 77) -
                p_over_q * *(b + 197 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 145 * OS1_S1 + 50);
            *(b + 145 * OS1_S1 + 113) =
                prefactor_z * *(b + 145 * OS1_S1 + 77) -
                p_over_q * *(b + 198 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 77);
            *(b + 145 * OS1_S1 + 114) =
                prefactor_z * *(b + 145 * OS1_S1 + 78) -
                p_over_q * *(b + 198 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 78) +
                one_over_two_q * *(b + 145 * OS1_S1 + 50);
            *(b + 145 * OS1_S1 + 115) =
                prefactor_z * *(b + 145 * OS1_S1 + 79) -
                p_over_q * *(b + 198 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 51);
            *(b + 145 * OS1_S1 + 116) =
                prefactor_y * *(b + 145 * OS1_S1 + 81) -
                p_over_q * *(b + 197 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 54);
            *(b + 145 * OS1_S1 + 117) =
                prefactor_y * *(b + 145 * OS1_S1 + 82) -
                p_over_q * *(b + 197 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 82) +
                one_over_two_q * *(b + 145 * OS1_S1 + 55);
            *(b + 145 * OS1_S1 + 118) =
                prefactor_y * *(b + 145 * OS1_S1 + 83) -
                p_over_q * *(b + 197 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 83);
            *(b + 145 * OS1_S1 + 119) =
                prefactor_z * *(b + 145 * OS1_S1 + 83) -
                p_over_q * *(b + 198 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 145 * OS1_S1 + 55);
            *(b + 146 * OS1_S1 + 84) =
                prefactor_x * *(b + 146 * OS1_S1 + 56) -
                p_over_q * *(b + 191 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 35);
            *(b + 146 * OS1_S1 + 85) =
                prefactor_y * *(b + 146 * OS1_S1 + 56) -
                p_over_q * *(b + 198 * OS1_S1 + 56) +
                one_over_two_q * *(b + 104 * OS1_S1 + 56);
            *(b + 146 * OS1_S1 + 86) =
                prefactor_z * *(b + 146 * OS1_S1 + 56) -
                p_over_q * *(b + 199 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 56);
            *(b + 146 * OS1_S1 + 87) =
                prefactor_y * *(b + 146 * OS1_S1 + 57) -
                p_over_q * *(b + 198 * OS1_S1 + 57) +
                one_over_two_q * *(b + 104 * OS1_S1 + 57) +
                one_over_two_q * *(b + 146 * OS1_S1 + 35);
            *(b + 146 * OS1_S1 + 88) =
                prefactor_y * *(b + 146 * OS1_S1 + 58) -
                p_over_q * *(b + 198 * OS1_S1 + 58) +
                one_over_two_q * *(b + 104 * OS1_S1 + 58);
            *(b + 146 * OS1_S1 + 89) =
                prefactor_z * *(b + 146 * OS1_S1 + 58) -
                p_over_q * *(b + 199 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 58) +
                one_over_two_q * *(b + 146 * OS1_S1 + 35);
            *(b + 146 * OS1_S1 + 90) =
                prefactor_y * *(b + 146 * OS1_S1 + 59) -
                p_over_q * *(b + 198 * OS1_S1 + 59) +
                one_over_two_q * *(b + 104 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 36);
            *(b + 146 * OS1_S1 + 91) =
                prefactor_z * *(b + 146 * OS1_S1 + 59) -
                p_over_q * *(b + 199 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 59);
            *(b + 146 * OS1_S1 + 92) =
                prefactor_y * *(b + 146 * OS1_S1 + 61) -
                p_over_q * *(b + 198 * OS1_S1 + 61) +
                one_over_two_q * *(b + 104 * OS1_S1 + 61);
            *(b + 146 * OS1_S1 + 93) =
                prefactor_z * *(b + 146 * OS1_S1 + 61) -
                p_over_q * *(b + 199 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 37);
            *(b + 146 * OS1_S1 + 94) =
                prefactor_x * *(b + 146 * OS1_S1 + 66) -
                p_over_q * *(b + 191 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 45);
            *(b + 146 * OS1_S1 + 95) =
                prefactor_z * *(b + 146 * OS1_S1 + 62) -
                p_over_q * *(b + 199 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 62);
            *(b + 146 * OS1_S1 + 96) =
                prefactor_y * *(b + 146 * OS1_S1 + 64) -
                p_over_q * *(b + 198 * OS1_S1 + 64) +
                one_over_two_q * *(b + 104 * OS1_S1 + 64) +
                one_over_two_q * *(b + 146 * OS1_S1 + 40);
            *(b + 146 * OS1_S1 + 97) =
                prefactor_y * *(b + 146 * OS1_S1 + 65) -
                p_over_q * *(b + 198 * OS1_S1 + 65) +
                one_over_two_q * *(b + 104 * OS1_S1 + 65);
            *(b + 146 * OS1_S1 + 98) =
                prefactor_x * *(b + 146 * OS1_S1 + 70) -
                p_over_q * *(b + 191 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 49);
            *(b + 146 * OS1_S1 + 99) =
                prefactor_x * *(b + 146 * OS1_S1 + 71) -
                p_over_q * *(b + 191 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 71) +
                one_over_two_q * *(b + 146 * OS1_S1 + 50);
            *(b + 146 * OS1_S1 + 100) =
                prefactor_z * *(b + 146 * OS1_S1 + 66) -
                p_over_q * *(b + 199 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 66);
            *(b + 146 * OS1_S1 + 101) =
                prefactor_x * *(b + 146 * OS1_S1 + 73) -
                p_over_q * *(b + 191 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 73) +
                one_over_two_q * *(b + 146 * OS1_S1 + 52);
            *(b + 146 * OS1_S1 + 102) =
                prefactor_y * *(b + 146 * OS1_S1 + 69) -
                p_over_q * *(b + 198 * OS1_S1 + 69) +
                one_over_two_q * *(b + 104 * OS1_S1 + 69) +
                one_over_two_q * *(b + 146 * OS1_S1 + 44);
            *(b + 146 * OS1_S1 + 103) =
                prefactor_y * *(b + 146 * OS1_S1 + 70) -
                p_over_q * *(b + 198 * OS1_S1 + 70) +
                one_over_two_q * *(b + 104 * OS1_S1 + 70);
            *(b + 146 * OS1_S1 + 104) =
                prefactor_x * *(b + 146 * OS1_S1 + 76) -
                p_over_q * *(b + 191 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 76) +
                one_over_two_q * *(b + 146 * OS1_S1 + 55);
            *(b + 146 * OS1_S1 + 105) =
                prefactor_x * *(b + 146 * OS1_S1 + 77) -
                p_over_q * *(b + 191 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 77);
            *(b + 146 * OS1_S1 + 106) =
                prefactor_x * *(b + 146 * OS1_S1 + 78) -
                p_over_q * *(b + 191 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 78);
            *(b + 146 * OS1_S1 + 107) =
                prefactor_x * *(b + 146 * OS1_S1 + 79) -
                p_over_q * *(b + 191 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 79);
            *(b + 146 * OS1_S1 + 108) =
                prefactor_x * *(b + 146 * OS1_S1 + 80) -
                p_over_q * *(b + 191 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 80);
            *(b + 146 * OS1_S1 + 109) =
                prefactor_x * *(b + 146 * OS1_S1 + 81) -
                p_over_q * *(b + 191 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 81);
            *(b + 146 * OS1_S1 + 110) =
                prefactor_y * *(b + 146 * OS1_S1 + 76) -
                p_over_q * *(b + 198 * OS1_S1 + 76) +
                one_over_two_q * *(b + 104 * OS1_S1 + 76);
            *(b + 146 * OS1_S1 + 111) =
                prefactor_x * *(b + 146 * OS1_S1 + 83) -
                p_over_q * *(b + 191 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 83);
            *(b + 146 * OS1_S1 + 112) =
                prefactor_y * *(b + 146 * OS1_S1 + 77) -
                p_over_q * *(b + 198 * OS1_S1 + 77) +
                one_over_two_q * *(b + 104 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 50);
            *(b + 146 * OS1_S1 + 113) =
                prefactor_z * *(b + 146 * OS1_S1 + 77) -
                p_over_q * *(b + 199 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 77);
            *(b + 146 * OS1_S1 + 114) =
                prefactor_z * *(b + 146 * OS1_S1 + 78) -
                p_over_q * *(b + 199 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 78) +
                one_over_two_q * *(b + 146 * OS1_S1 + 50);
            *(b + 146 * OS1_S1 + 115) =
                prefactor_z * *(b + 146 * OS1_S1 + 79) -
                p_over_q * *(b + 199 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 51);
            *(b + 146 * OS1_S1 + 116) =
                prefactor_y * *(b + 146 * OS1_S1 + 81) -
                p_over_q * *(b + 198 * OS1_S1 + 81) +
                one_over_two_q * *(b + 104 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 54);
            *(b + 146 * OS1_S1 + 117) =
                prefactor_y * *(b + 146 * OS1_S1 + 82) -
                p_over_q * *(b + 198 * OS1_S1 + 82) +
                one_over_two_q * *(b + 104 * OS1_S1 + 82) +
                one_over_two_q * *(b + 146 * OS1_S1 + 55);
            *(b + 146 * OS1_S1 + 118) =
                prefactor_y * *(b + 146 * OS1_S1 + 83) -
                p_over_q * *(b + 198 * OS1_S1 + 83) +
                one_over_two_q * *(b + 104 * OS1_S1 + 83);
            *(b + 146 * OS1_S1 + 119) =
                prefactor_z * *(b + 146 * OS1_S1 + 83) -
                p_over_q * *(b + 199 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 55);
            *(b + 147 * OS1_S1 + 84) =
                prefactor_x * *(b + 147 * OS1_S1 + 56) -
                p_over_q * *(b + 192 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 147 * OS1_S1 + 35);
            *(b + 147 * OS1_S1 + 85) = prefactor_y * *(b + 147 * OS1_S1 + 56) -
                                       p_over_q * *(b + 199 * OS1_S1 + 56);
            *(b + 147 * OS1_S1 + 86) =
                prefactor_z * *(b + 147 * OS1_S1 + 56) -
                p_over_q * *(b + 200 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 56);
            *(b + 147 * OS1_S1 + 87) =
                prefactor_y * *(b + 147 * OS1_S1 + 57) -
                p_over_q * *(b + 199 * OS1_S1 + 57) +
                one_over_two_q * *(b + 147 * OS1_S1 + 35);
            *(b + 147 * OS1_S1 + 88) = prefactor_y * *(b + 147 * OS1_S1 + 58) -
                                       p_over_q * *(b + 199 * OS1_S1 + 58);
            *(b + 147 * OS1_S1 + 89) =
                prefactor_z * *(b + 147 * OS1_S1 + 58) -
                p_over_q * *(b + 200 * OS1_S1 + 58) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 58) +
                one_over_two_q * *(b + 147 * OS1_S1 + 35);
            *(b + 147 * OS1_S1 + 90) =
                prefactor_y * *(b + 147 * OS1_S1 + 59) -
                p_over_q * *(b + 199 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 36);
            *(b + 147 * OS1_S1 + 91) =
                prefactor_z * *(b + 147 * OS1_S1 + 59) -
                p_over_q * *(b + 200 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 59);
            *(b + 147 * OS1_S1 + 92) = prefactor_y * *(b + 147 * OS1_S1 + 61) -
                                       p_over_q * *(b + 199 * OS1_S1 + 61);
            *(b + 147 * OS1_S1 + 93) =
                prefactor_z * *(b + 147 * OS1_S1 + 61) -
                p_over_q * *(b + 200 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 37);
            *(b + 147 * OS1_S1 + 94) =
                prefactor_x * *(b + 147 * OS1_S1 + 66) -
                p_over_q * *(b + 192 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 45);
            *(b + 147 * OS1_S1 + 95) =
                prefactor_z * *(b + 147 * OS1_S1 + 62) -
                p_over_q * *(b + 200 * OS1_S1 + 62) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 62);
            *(b + 147 * OS1_S1 + 96) =
                prefactor_y * *(b + 147 * OS1_S1 + 64) -
                p_over_q * *(b + 199 * OS1_S1 + 64) +
                one_over_two_q * *(b + 147 * OS1_S1 + 40);
            *(b + 147 * OS1_S1 + 97) = prefactor_y * *(b + 147 * OS1_S1 + 65) -
                                       p_over_q * *(b + 199 * OS1_S1 + 65);
            *(b + 147 * OS1_S1 + 98) =
                prefactor_x * *(b + 147 * OS1_S1 + 70) -
                p_over_q * *(b + 192 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 49);
            *(b + 147 * OS1_S1 + 99) =
                prefactor_x * *(b + 147 * OS1_S1 + 71) -
                p_over_q * *(b + 192 * OS1_S1 + 71) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 71) +
                one_over_two_q * *(b + 147 * OS1_S1 + 50);
            *(b + 147 * OS1_S1 + 100) =
                prefactor_z * *(b + 147 * OS1_S1 + 66) -
                p_over_q * *(b + 200 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 66);
            *(b + 147 * OS1_S1 + 101) =
                prefactor_x * *(b + 147 * OS1_S1 + 73) -
                p_over_q * *(b + 192 * OS1_S1 + 73) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 73) +
                one_over_two_q * *(b + 147 * OS1_S1 + 52);
            *(b + 147 * OS1_S1 + 102) =
                prefactor_y * *(b + 147 * OS1_S1 + 69) -
                p_over_q * *(b + 199 * OS1_S1 + 69) +
                one_over_two_q * *(b + 147 * OS1_S1 + 44);
            *(b + 147 * OS1_S1 + 103) = prefactor_y * *(b + 147 * OS1_S1 + 70) -
                                        p_over_q * *(b + 199 * OS1_S1 + 70);
            *(b + 147 * OS1_S1 + 104) =
                prefactor_x * *(b + 147 * OS1_S1 + 76) -
                p_over_q * *(b + 192 * OS1_S1 + 76) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 76) +
                one_over_two_q * *(b + 147 * OS1_S1 + 55);
            *(b + 147 * OS1_S1 + 105) =
                prefactor_x * *(b + 147 * OS1_S1 + 77) -
                p_over_q * *(b + 192 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 77);
            *(b + 147 * OS1_S1 + 106) =
                prefactor_x * *(b + 147 * OS1_S1 + 78) -
                p_over_q * *(b + 192 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 78);
            *(b + 147 * OS1_S1 + 107) =
                prefactor_x * *(b + 147 * OS1_S1 + 79) -
                p_over_q * *(b + 192 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 79);
            *(b + 147 * OS1_S1 + 108) =
                prefactor_x * *(b + 147 * OS1_S1 + 80) -
                p_over_q * *(b + 192 * OS1_S1 + 80) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 80);
            *(b + 147 * OS1_S1 + 109) =
                prefactor_x * *(b + 147 * OS1_S1 + 81) -
                p_over_q * *(b + 192 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 81);
            *(b + 147 * OS1_S1 + 110) = prefactor_y * *(b + 147 * OS1_S1 + 76) -
                                        p_over_q * *(b + 199 * OS1_S1 + 76);
            *(b + 147 * OS1_S1 + 111) =
                prefactor_x * *(b + 147 * OS1_S1 + 83) -
                p_over_q * *(b + 192 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 83);
            *(b + 147 * OS1_S1 + 112) =
                prefactor_y * *(b + 147 * OS1_S1 + 77) -
                p_over_q * *(b + 199 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 147 * OS1_S1 + 50);
            *(b + 147 * OS1_S1 + 113) =
                prefactor_z * *(b + 147 * OS1_S1 + 77) -
                p_over_q * *(b + 200 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 77);
            *(b + 147 * OS1_S1 + 114) =
                prefactor_z * *(b + 147 * OS1_S1 + 78) -
                p_over_q * *(b + 200 * OS1_S1 + 78) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 78) +
                one_over_two_q * *(b + 147 * OS1_S1 + 50);
            *(b + 147 * OS1_S1 + 115) =
                prefactor_z * *(b + 147 * OS1_S1 + 79) -
                p_over_q * *(b + 200 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 51);
            *(b + 147 * OS1_S1 + 116) =
                prefactor_y * *(b + 147 * OS1_S1 + 81) -
                p_over_q * *(b + 199 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 54);
            *(b + 147 * OS1_S1 + 117) =
                prefactor_y * *(b + 147 * OS1_S1 + 82) -
                p_over_q * *(b + 199 * OS1_S1 + 82) +
                one_over_two_q * *(b + 147 * OS1_S1 + 55);
            *(b + 147 * OS1_S1 + 118) = prefactor_y * *(b + 147 * OS1_S1 + 83) -
                                        p_over_q * *(b + 199 * OS1_S1 + 83);
            *(b + 147 * OS1_S1 + 119) =
                prefactor_z * *(b + 147 * OS1_S1 + 83) -
                p_over_q * *(b + 200 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 147 * OS1_S1 + 55);
            *(b + 148 * OS1_S1 + 84) =
                prefactor_x * *(b + 148 * OS1_S1 + 56) -
                p_over_q * *(b + 193 * OS1_S1 + 56) +
                one_over_two_q * *(b + 112 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 148 * OS1_S1 + 35);
            *(b + 148 * OS1_S1 + 85) =
                prefactor_y * *(b + 148 * OS1_S1 + 56) -
                p_over_q * *(b + 201 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 56);
            *(b + 148 * OS1_S1 + 86) = prefactor_z * *(b + 148 * OS1_S1 + 56) -
                                       p_over_q * *(b + 202 * OS1_S1 + 56);
            *(b + 148 * OS1_S1 + 87) =
                prefactor_y * *(b + 148 * OS1_S1 + 57) -
                p_over_q * *(b + 201 * OS1_S1 + 57) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 57) +
                one_over_two_q * *(b + 148 * OS1_S1 + 35);
            *(b + 148 * OS1_S1 + 88) = prefactor_z * *(b + 148 * OS1_S1 + 57) -
                                       p_over_q * *(b + 202 * OS1_S1 + 57);
            *(b + 148 * OS1_S1 + 89) =
                prefactor_z * *(b + 148 * OS1_S1 + 58) -
                p_over_q * *(b + 202 * OS1_S1 + 58) +
                one_over_two_q * *(b + 148 * OS1_S1 + 35);
            *(b + 148 * OS1_S1 + 90) =
                prefactor_y * *(b + 148 * OS1_S1 + 59) -
                p_over_q * *(b + 201 * OS1_S1 + 59) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 36);
            *(b + 148 * OS1_S1 + 91) = prefactor_z * *(b + 148 * OS1_S1 + 59) -
                                       p_over_q * *(b + 202 * OS1_S1 + 59);
            *(b + 148 * OS1_S1 + 92) =
                prefactor_y * *(b + 148 * OS1_S1 + 61) -
                p_over_q * *(b + 201 * OS1_S1 + 61) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 61);
            *(b + 148 * OS1_S1 + 93) =
                prefactor_z * *(b + 148 * OS1_S1 + 61) -
                p_over_q * *(b + 202 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 37);
            *(b + 148 * OS1_S1 + 94) =
                prefactor_x * *(b + 148 * OS1_S1 + 66) -
                p_over_q * *(b + 193 * OS1_S1 + 66) +
                one_over_two_q * *(b + 112 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 45);
            *(b + 148 * OS1_S1 + 95) = prefactor_z * *(b + 148 * OS1_S1 + 62) -
                                       p_over_q * *(b + 202 * OS1_S1 + 62);
            *(b + 148 * OS1_S1 + 96) =
                prefactor_z * *(b + 148 * OS1_S1 + 63) -
                p_over_q * *(b + 202 * OS1_S1 + 63) +
                one_over_two_q * *(b + 148 * OS1_S1 + 38);
            *(b + 148 * OS1_S1 + 97) =
                prefactor_y * *(b + 148 * OS1_S1 + 65) -
                p_over_q * *(b + 201 * OS1_S1 + 65) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 65);
            *(b + 148 * OS1_S1 + 98) =
                prefactor_x * *(b + 148 * OS1_S1 + 70) -
                p_over_q * *(b + 193 * OS1_S1 + 70) +
                one_over_two_q * *(b + 112 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 49);
            *(b + 148 * OS1_S1 + 99) =
                prefactor_x * *(b + 148 * OS1_S1 + 71) -
                p_over_q * *(b + 193 * OS1_S1 + 71) +
                one_over_two_q * *(b + 112 * OS1_S1 + 71) +
                one_over_two_q * *(b + 148 * OS1_S1 + 50);
            *(b + 148 * OS1_S1 + 100) = prefactor_z * *(b + 148 * OS1_S1 + 66) -
                                        p_over_q * *(b + 202 * OS1_S1 + 66);
            *(b + 148 * OS1_S1 + 101) =
                prefactor_z * *(b + 148 * OS1_S1 + 67) -
                p_over_q * *(b + 202 * OS1_S1 + 67) +
                one_over_two_q * *(b + 148 * OS1_S1 + 41);
            *(b + 148 * OS1_S1 + 102) =
                prefactor_x * *(b + 148 * OS1_S1 + 74) -
                p_over_q * *(b + 193 * OS1_S1 + 74) +
                one_over_two_q * *(b + 112 * OS1_S1 + 74) +
                one_over_two_q * *(b + 148 * OS1_S1 + 53);
            *(b + 148 * OS1_S1 + 103) =
                prefactor_y * *(b + 148 * OS1_S1 + 70) -
                p_over_q * *(b + 201 * OS1_S1 + 70) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 70);
            *(b + 148 * OS1_S1 + 104) =
                prefactor_x * *(b + 148 * OS1_S1 + 76) -
                p_over_q * *(b + 193 * OS1_S1 + 76) +
                one_over_two_q * *(b + 112 * OS1_S1 + 76) +
                one_over_two_q * *(b + 148 * OS1_S1 + 55);
            *(b + 148 * OS1_S1 + 105) =
                prefactor_x * *(b + 148 * OS1_S1 + 77) -
                p_over_q * *(b + 193 * OS1_S1 + 77) +
                one_over_two_q * *(b + 112 * OS1_S1 + 77);
            *(b + 148 * OS1_S1 + 106) = prefactor_z * *(b + 148 * OS1_S1 + 71) -
                                        p_over_q * *(b + 202 * OS1_S1 + 71);
            *(b + 148 * OS1_S1 + 107) =
                prefactor_x * *(b + 148 * OS1_S1 + 79) -
                p_over_q * *(b + 193 * OS1_S1 + 79) +
                one_over_two_q * *(b + 112 * OS1_S1 + 79);
            *(b + 148 * OS1_S1 + 108) =
                prefactor_x * *(b + 148 * OS1_S1 + 80) -
                p_over_q * *(b + 193 * OS1_S1 + 80) +
                one_over_two_q * *(b + 112 * OS1_S1 + 80);
            *(b + 148 * OS1_S1 + 109) =
                prefactor_x * *(b + 148 * OS1_S1 + 81) -
                p_over_q * *(b + 193 * OS1_S1 + 81) +
                one_over_two_q * *(b + 112 * OS1_S1 + 81);
            *(b + 148 * OS1_S1 + 110) =
                prefactor_x * *(b + 148 * OS1_S1 + 82) -
                p_over_q * *(b + 193 * OS1_S1 + 82) +
                one_over_two_q * *(b + 112 * OS1_S1 + 82);
            *(b + 148 * OS1_S1 + 111) =
                prefactor_x * *(b + 148 * OS1_S1 + 83) -
                p_over_q * *(b + 193 * OS1_S1 + 83) +
                one_over_two_q * *(b + 112 * OS1_S1 + 83);
            *(b + 148 * OS1_S1 + 112) =
                prefactor_y * *(b + 148 * OS1_S1 + 77) -
                p_over_q * *(b + 201 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 148 * OS1_S1 + 50);
            *(b + 148 * OS1_S1 + 113) = prefactor_z * *(b + 148 * OS1_S1 + 77) -
                                        p_over_q * *(b + 202 * OS1_S1 + 77);
            *(b + 148 * OS1_S1 + 114) =
                prefactor_z * *(b + 148 * OS1_S1 + 78) -
                p_over_q * *(b + 202 * OS1_S1 + 78) +
                one_over_two_q * *(b + 148 * OS1_S1 + 50);
            *(b + 148 * OS1_S1 + 115) =
                prefactor_z * *(b + 148 * OS1_S1 + 79) -
                p_over_q * *(b + 202 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 51);
            *(b + 148 * OS1_S1 + 116) =
                prefactor_y * *(b + 148 * OS1_S1 + 81) -
                p_over_q * *(b + 201 * OS1_S1 + 81) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 54);
            *(b + 148 * OS1_S1 + 117) =
                prefactor_y * *(b + 148 * OS1_S1 + 82) -
                p_over_q * *(b + 201 * OS1_S1 + 82) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 82) +
                one_over_two_q * *(b + 148 * OS1_S1 + 55);
            *(b + 148 * OS1_S1 + 118) =
                prefactor_y * *(b + 148 * OS1_S1 + 83) -
                p_over_q * *(b + 201 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 83);
            *(b + 148 * OS1_S1 + 119) =
                prefactor_z * *(b + 148 * OS1_S1 + 83) -
                p_over_q * *(b + 202 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 148 * OS1_S1 + 55);
            *(b + 149 * OS1_S1 + 84) =
                prefactor_x * *(b + 149 * OS1_S1 + 56) -
                p_over_q * *(b + 194 * OS1_S1 + 56) +
                one_over_two_q * *(b + 113 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 149 * OS1_S1 + 35);
            *(b + 149 * OS1_S1 + 85) =
                prefactor_y * *(b + 149 * OS1_S1 + 56) -
                p_over_q * *(b + 202 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 56);
            *(b + 149 * OS1_S1 + 86) =
                prefactor_z * *(b + 149 * OS1_S1 + 56) -
                p_over_q * *(b + 203 * OS1_S1 + 56) +
                one_over_two_q * *(b + 105 * OS1_S1 + 56);
            *(b + 149 * OS1_S1 + 87) =
                prefactor_y * *(b + 149 * OS1_S1 + 57) -
                p_over_q * *(b + 202 * OS1_S1 + 57) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 57) +
                one_over_two_q * *(b + 149 * OS1_S1 + 35);
            *(b + 149 * OS1_S1 + 88) =
                prefactor_z * *(b + 149 * OS1_S1 + 57) -
                p_over_q * *(b + 203 * OS1_S1 + 57) +
                one_over_two_q * *(b + 105 * OS1_S1 + 57);
            *(b + 149 * OS1_S1 + 89) =
                prefactor_z * *(b + 149 * OS1_S1 + 58) -
                p_over_q * *(b + 203 * OS1_S1 + 58) +
                one_over_two_q * *(b + 105 * OS1_S1 + 58) +
                one_over_two_q * *(b + 149 * OS1_S1 + 35);
            *(b + 149 * OS1_S1 + 90) =
                prefactor_y * *(b + 149 * OS1_S1 + 59) -
                p_over_q * *(b + 202 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 36);
            *(b + 149 * OS1_S1 + 91) =
                prefactor_z * *(b + 149 * OS1_S1 + 59) -
                p_over_q * *(b + 203 * OS1_S1 + 59) +
                one_over_two_q * *(b + 105 * OS1_S1 + 59);
            *(b + 149 * OS1_S1 + 92) =
                prefactor_y * *(b + 149 * OS1_S1 + 61) -
                p_over_q * *(b + 202 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 61);
            *(b + 149 * OS1_S1 + 93) =
                prefactor_z * *(b + 149 * OS1_S1 + 61) -
                p_over_q * *(b + 203 * OS1_S1 + 61) +
                one_over_two_q * *(b + 105 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 37);
            *(b + 149 * OS1_S1 + 94) =
                prefactor_x * *(b + 149 * OS1_S1 + 66) -
                p_over_q * *(b + 194 * OS1_S1 + 66) +
                one_over_two_q * *(b + 113 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 45);
            *(b + 149 * OS1_S1 + 95) =
                prefactor_z * *(b + 149 * OS1_S1 + 62) -
                p_over_q * *(b + 203 * OS1_S1 + 62) +
                one_over_two_q * *(b + 105 * OS1_S1 + 62);
            *(b + 149 * OS1_S1 + 96) =
                prefactor_z * *(b + 149 * OS1_S1 + 63) -
                p_over_q * *(b + 203 * OS1_S1 + 63) +
                one_over_two_q * *(b + 105 * OS1_S1 + 63) +
                one_over_two_q * *(b + 149 * OS1_S1 + 38);
            *(b + 149 * OS1_S1 + 97) =
                prefactor_y * *(b + 149 * OS1_S1 + 65) -
                p_over_q * *(b + 202 * OS1_S1 + 65) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 65);
            *(b + 149 * OS1_S1 + 98) =
                prefactor_x * *(b + 149 * OS1_S1 + 70) -
                p_over_q * *(b + 194 * OS1_S1 + 70) +
                one_over_two_q * *(b + 113 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 49);
            *(b + 149 * OS1_S1 + 99) =
                prefactor_x * *(b + 149 * OS1_S1 + 71) -
                p_over_q * *(b + 194 * OS1_S1 + 71) +
                one_over_two_q * *(b + 113 * OS1_S1 + 71) +
                one_over_two_q * *(b + 149 * OS1_S1 + 50);
            *(b + 149 * OS1_S1 + 100) =
                prefactor_z * *(b + 149 * OS1_S1 + 66) -
                p_over_q * *(b + 203 * OS1_S1 + 66) +
                one_over_two_q * *(b + 105 * OS1_S1 + 66);
            *(b + 149 * OS1_S1 + 101) =
                prefactor_z * *(b + 149 * OS1_S1 + 67) -
                p_over_q * *(b + 203 * OS1_S1 + 67) +
                one_over_two_q * *(b + 105 * OS1_S1 + 67) +
                one_over_two_q * *(b + 149 * OS1_S1 + 41);
            *(b + 149 * OS1_S1 + 102) =
                prefactor_x * *(b + 149 * OS1_S1 + 74) -
                p_over_q * *(b + 194 * OS1_S1 + 74) +
                one_over_two_q * *(b + 113 * OS1_S1 + 74) +
                one_over_two_q * *(b + 149 * OS1_S1 + 53);
            *(b + 149 * OS1_S1 + 103) =
                prefactor_y * *(b + 149 * OS1_S1 + 70) -
                p_over_q * *(b + 202 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 70);
            *(b + 149 * OS1_S1 + 104) =
                prefactor_x * *(b + 149 * OS1_S1 + 76) -
                p_over_q * *(b + 194 * OS1_S1 + 76) +
                one_over_two_q * *(b + 113 * OS1_S1 + 76) +
                one_over_two_q * *(b + 149 * OS1_S1 + 55);
            *(b + 149 * OS1_S1 + 105) =
                prefactor_x * *(b + 149 * OS1_S1 + 77) -
                p_over_q * *(b + 194 * OS1_S1 + 77) +
                one_over_two_q * *(b + 113 * OS1_S1 + 77);
            *(b + 149 * OS1_S1 + 106) =
                prefactor_z * *(b + 149 * OS1_S1 + 71) -
                p_over_q * *(b + 203 * OS1_S1 + 71) +
                one_over_two_q * *(b + 105 * OS1_S1 + 71);
            *(b + 149 * OS1_S1 + 107) =
                prefactor_x * *(b + 149 * OS1_S1 + 79) -
                p_over_q * *(b + 194 * OS1_S1 + 79) +
                one_over_two_q * *(b + 113 * OS1_S1 + 79);
            *(b + 149 * OS1_S1 + 108) =
                prefactor_x * *(b + 149 * OS1_S1 + 80) -
                p_over_q * *(b + 194 * OS1_S1 + 80) +
                one_over_two_q * *(b + 113 * OS1_S1 + 80);
            *(b + 149 * OS1_S1 + 109) =
                prefactor_x * *(b + 149 * OS1_S1 + 81) -
                p_over_q * *(b + 194 * OS1_S1 + 81) +
                one_over_two_q * *(b + 113 * OS1_S1 + 81);
            *(b + 149 * OS1_S1 + 110) =
                prefactor_x * *(b + 149 * OS1_S1 + 82) -
                p_over_q * *(b + 194 * OS1_S1 + 82) +
                one_over_two_q * *(b + 113 * OS1_S1 + 82);
            *(b + 149 * OS1_S1 + 111) =
                prefactor_x * *(b + 149 * OS1_S1 + 83) -
                p_over_q * *(b + 194 * OS1_S1 + 83) +
                one_over_two_q * *(b + 113 * OS1_S1 + 83);
            *(b + 149 * OS1_S1 + 112) =
                prefactor_y * *(b + 149 * OS1_S1 + 77) -
                p_over_q * *(b + 202 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 149 * OS1_S1 + 50);
            *(b + 149 * OS1_S1 + 113) =
                prefactor_z * *(b + 149 * OS1_S1 + 77) -
                p_over_q * *(b + 203 * OS1_S1 + 77) +
                one_over_two_q * *(b + 105 * OS1_S1 + 77);
            *(b + 149 * OS1_S1 + 114) =
                prefactor_z * *(b + 149 * OS1_S1 + 78) -
                p_over_q * *(b + 203 * OS1_S1 + 78) +
                one_over_two_q * *(b + 105 * OS1_S1 + 78) +
                one_over_two_q * *(b + 149 * OS1_S1 + 50);
            *(b + 149 * OS1_S1 + 115) =
                prefactor_z * *(b + 149 * OS1_S1 + 79) -
                p_over_q * *(b + 203 * OS1_S1 + 79) +
                one_over_two_q * *(b + 105 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 51);
            *(b + 149 * OS1_S1 + 116) =
                prefactor_y * *(b + 149 * OS1_S1 + 81) -
                p_over_q * *(b + 202 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 54);
            *(b + 149 * OS1_S1 + 117) =
                prefactor_y * *(b + 149 * OS1_S1 + 82) -
                p_over_q * *(b + 202 * OS1_S1 + 82) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 82) +
                one_over_two_q * *(b + 149 * OS1_S1 + 55);
            *(b + 149 * OS1_S1 + 118) =
                prefactor_y * *(b + 149 * OS1_S1 + 83) -
                p_over_q * *(b + 202 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 83);
            *(b + 149 * OS1_S1 + 119) =
                prefactor_z * *(b + 149 * OS1_S1 + 83) -
                p_over_q * *(b + 203 * OS1_S1 + 83) +
                one_over_two_q * *(b + 105 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 149 * OS1_S1 + 55);
            *(b + 150 * OS1_S1 + 84) =
                prefactor_x * *(b + 150 * OS1_S1 + 56) -
                p_over_q * *(b + 195 * OS1_S1 + 56) +
                one_over_two_q * *(b + 114 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 35);
            *(b + 150 * OS1_S1 + 85) =
                prefactor_y * *(b + 150 * OS1_S1 + 56) -
                p_over_q * *(b + 203 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 56);
            *(b + 150 * OS1_S1 + 86) =
                prefactor_z * *(b + 150 * OS1_S1 + 56) -
                p_over_q * *(b + 204 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 56);
            *(b + 150 * OS1_S1 + 87) =
                prefactor_y * *(b + 150 * OS1_S1 + 57) -
                p_over_q * *(b + 203 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 57) +
                one_over_two_q * *(b + 150 * OS1_S1 + 35);
            *(b + 150 * OS1_S1 + 88) =
                prefactor_z * *(b + 150 * OS1_S1 + 57) -
                p_over_q * *(b + 204 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 57);
            *(b + 150 * OS1_S1 + 89) =
                prefactor_z * *(b + 150 * OS1_S1 + 58) -
                p_over_q * *(b + 204 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 58) +
                one_over_two_q * *(b + 150 * OS1_S1 + 35);
            *(b + 150 * OS1_S1 + 90) =
                prefactor_y * *(b + 150 * OS1_S1 + 59) -
                p_over_q * *(b + 203 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 36);
            *(b + 150 * OS1_S1 + 91) =
                prefactor_z * *(b + 150 * OS1_S1 + 59) -
                p_over_q * *(b + 204 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 59);
            *(b + 150 * OS1_S1 + 92) =
                prefactor_y * *(b + 150 * OS1_S1 + 61) -
                p_over_q * *(b + 203 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 61);
            *(b + 150 * OS1_S1 + 93) =
                prefactor_z * *(b + 150 * OS1_S1 + 61) -
                p_over_q * *(b + 204 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 37);
            *(b + 150 * OS1_S1 + 94) =
                prefactor_x * *(b + 150 * OS1_S1 + 66) -
                p_over_q * *(b + 195 * OS1_S1 + 66) +
                one_over_two_q * *(b + 114 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 45);
            *(b + 150 * OS1_S1 + 95) =
                prefactor_z * *(b + 150 * OS1_S1 + 62) -
                p_over_q * *(b + 204 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 62);
            *(b + 150 * OS1_S1 + 96) =
                prefactor_z * *(b + 150 * OS1_S1 + 63) -
                p_over_q * *(b + 204 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 63) +
                one_over_two_q * *(b + 150 * OS1_S1 + 38);
            *(b + 150 * OS1_S1 + 97) =
                prefactor_y * *(b + 150 * OS1_S1 + 65) -
                p_over_q * *(b + 203 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 65);
            *(b + 150 * OS1_S1 + 98) =
                prefactor_x * *(b + 150 * OS1_S1 + 70) -
                p_over_q * *(b + 195 * OS1_S1 + 70) +
                one_over_two_q * *(b + 114 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 49);
            *(b + 150 * OS1_S1 + 99) =
                prefactor_x * *(b + 150 * OS1_S1 + 71) -
                p_over_q * *(b + 195 * OS1_S1 + 71) +
                one_over_two_q * *(b + 114 * OS1_S1 + 71) +
                one_over_two_q * *(b + 150 * OS1_S1 + 50);
            *(b + 150 * OS1_S1 + 100) =
                prefactor_z * *(b + 150 * OS1_S1 + 66) -
                p_over_q * *(b + 204 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 66);
            *(b + 150 * OS1_S1 + 101) =
                prefactor_x * *(b + 150 * OS1_S1 + 73) -
                p_over_q * *(b + 195 * OS1_S1 + 73) +
                one_over_two_q * *(b + 114 * OS1_S1 + 73) +
                one_over_two_q * *(b + 150 * OS1_S1 + 52);
            *(b + 150 * OS1_S1 + 102) =
                prefactor_x * *(b + 150 * OS1_S1 + 74) -
                p_over_q * *(b + 195 * OS1_S1 + 74) +
                one_over_two_q * *(b + 114 * OS1_S1 + 74) +
                one_over_two_q * *(b + 150 * OS1_S1 + 53);
            *(b + 150 * OS1_S1 + 103) =
                prefactor_y * *(b + 150 * OS1_S1 + 70) -
                p_over_q * *(b + 203 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 70);
            *(b + 150 * OS1_S1 + 104) =
                prefactor_x * *(b + 150 * OS1_S1 + 76) -
                p_over_q * *(b + 195 * OS1_S1 + 76) +
                one_over_two_q * *(b + 114 * OS1_S1 + 76) +
                one_over_two_q * *(b + 150 * OS1_S1 + 55);
            *(b + 150 * OS1_S1 + 105) =
                prefactor_x * *(b + 150 * OS1_S1 + 77) -
                p_over_q * *(b + 195 * OS1_S1 + 77) +
                one_over_two_q * *(b + 114 * OS1_S1 + 77);
            *(b + 150 * OS1_S1 + 106) =
                prefactor_x * *(b + 150 * OS1_S1 + 78) -
                p_over_q * *(b + 195 * OS1_S1 + 78) +
                one_over_two_q * *(b + 114 * OS1_S1 + 78);
            *(b + 150 * OS1_S1 + 107) =
                prefactor_x * *(b + 150 * OS1_S1 + 79) -
                p_over_q * *(b + 195 * OS1_S1 + 79) +
                one_over_two_q * *(b + 114 * OS1_S1 + 79);
            *(b + 150 * OS1_S1 + 108) =
                prefactor_x * *(b + 150 * OS1_S1 + 80) -
                p_over_q * *(b + 195 * OS1_S1 + 80) +
                one_over_two_q * *(b + 114 * OS1_S1 + 80);
            *(b + 150 * OS1_S1 + 109) =
                prefactor_x * *(b + 150 * OS1_S1 + 81) -
                p_over_q * *(b + 195 * OS1_S1 + 81) +
                one_over_two_q * *(b + 114 * OS1_S1 + 81);
            *(b + 150 * OS1_S1 + 110) =
                prefactor_x * *(b + 150 * OS1_S1 + 82) -
                p_over_q * *(b + 195 * OS1_S1 + 82) +
                one_over_two_q * *(b + 114 * OS1_S1 + 82);
            *(b + 150 * OS1_S1 + 111) =
                prefactor_x * *(b + 150 * OS1_S1 + 83) -
                p_over_q * *(b + 195 * OS1_S1 + 83) +
                one_over_two_q * *(b + 114 * OS1_S1 + 83);
            *(b + 150 * OS1_S1 + 112) =
                prefactor_y * *(b + 150 * OS1_S1 + 77) -
                p_over_q * *(b + 203 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 50);
            *(b + 150 * OS1_S1 + 113) =
                prefactor_z * *(b + 150 * OS1_S1 + 77) -
                p_over_q * *(b + 204 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 77);
            *(b + 150 * OS1_S1 + 114) =
                prefactor_z * *(b + 150 * OS1_S1 + 78) -
                p_over_q * *(b + 204 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 78) +
                one_over_two_q * *(b + 150 * OS1_S1 + 50);
            *(b + 150 * OS1_S1 + 115) =
                prefactor_z * *(b + 150 * OS1_S1 + 79) -
                p_over_q * *(b + 204 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 51);
            *(b + 150 * OS1_S1 + 116) =
                prefactor_y * *(b + 150 * OS1_S1 + 81) -
                p_over_q * *(b + 203 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 54);
            *(b + 150 * OS1_S1 + 117) =
                prefactor_y * *(b + 150 * OS1_S1 + 82) -
                p_over_q * *(b + 203 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 82) +
                one_over_two_q * *(b + 150 * OS1_S1 + 55);
            *(b + 150 * OS1_S1 + 118) =
                prefactor_y * *(b + 150 * OS1_S1 + 83) -
                p_over_q * *(b + 203 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 83);
            *(b + 150 * OS1_S1 + 119) =
                prefactor_z * *(b + 150 * OS1_S1 + 83) -
                p_over_q * *(b + 204 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 55);
            *(b + 151 * OS1_S1 + 84) =
                prefactor_x * *(b + 151 * OS1_S1 + 56) -
                p_over_q * *(b + 196 * OS1_S1 + 56) +
                one_over_two_q * *(b + 115 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 151 * OS1_S1 + 35);
            *(b + 151 * OS1_S1 + 85) =
                prefactor_y * *(b + 151 * OS1_S1 + 56) -
                p_over_q * *(b + 204 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 56);
            *(b + 151 * OS1_S1 + 86) =
                prefactor_z * *(b + 151 * OS1_S1 + 56) -
                p_over_q * *(b + 205 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 56);
            *(b + 151 * OS1_S1 + 87) =
                prefactor_y * *(b + 151 * OS1_S1 + 57) -
                p_over_q * *(b + 204 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 57) +
                one_over_two_q * *(b + 151 * OS1_S1 + 35);
            *(b + 151 * OS1_S1 + 88) =
                prefactor_z * *(b + 151 * OS1_S1 + 57) -
                p_over_q * *(b + 205 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 57);
            *(b + 151 * OS1_S1 + 89) =
                prefactor_z * *(b + 151 * OS1_S1 + 58) -
                p_over_q * *(b + 205 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 58) +
                one_over_two_q * *(b + 151 * OS1_S1 + 35);
            *(b + 151 * OS1_S1 + 90) =
                prefactor_y * *(b + 151 * OS1_S1 + 59) -
                p_over_q * *(b + 204 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 36);
            *(b + 151 * OS1_S1 + 91) =
                prefactor_z * *(b + 151 * OS1_S1 + 59) -
                p_over_q * *(b + 205 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 59);
            *(b + 151 * OS1_S1 + 92) =
                prefactor_y * *(b + 151 * OS1_S1 + 61) -
                p_over_q * *(b + 204 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 61);
            *(b + 151 * OS1_S1 + 93) =
                prefactor_z * *(b + 151 * OS1_S1 + 61) -
                p_over_q * *(b + 205 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 37);
            *(b + 151 * OS1_S1 + 94) =
                prefactor_x * *(b + 151 * OS1_S1 + 66) -
                p_over_q * *(b + 196 * OS1_S1 + 66) +
                one_over_two_q * *(b + 115 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 45);
            *(b + 151 * OS1_S1 + 95) =
                prefactor_z * *(b + 151 * OS1_S1 + 62) -
                p_over_q * *(b + 205 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 62);
            *(b + 151 * OS1_S1 + 96) =
                prefactor_z * *(b + 151 * OS1_S1 + 63) -
                p_over_q * *(b + 205 * OS1_S1 + 63) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 63) +
                one_over_two_q * *(b + 151 * OS1_S1 + 38);
            *(b + 151 * OS1_S1 + 97) =
                prefactor_y * *(b + 151 * OS1_S1 + 65) -
                p_over_q * *(b + 204 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 65);
            *(b + 151 * OS1_S1 + 98) =
                prefactor_x * *(b + 151 * OS1_S1 + 70) -
                p_over_q * *(b + 196 * OS1_S1 + 70) +
                one_over_two_q * *(b + 115 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 49);
            *(b + 151 * OS1_S1 + 99) =
                prefactor_x * *(b + 151 * OS1_S1 + 71) -
                p_over_q * *(b + 196 * OS1_S1 + 71) +
                one_over_two_q * *(b + 115 * OS1_S1 + 71) +
                one_over_two_q * *(b + 151 * OS1_S1 + 50);
            *(b + 151 * OS1_S1 + 100) =
                prefactor_z * *(b + 151 * OS1_S1 + 66) -
                p_over_q * *(b + 205 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 66);
            *(b + 151 * OS1_S1 + 101) =
                prefactor_x * *(b + 151 * OS1_S1 + 73) -
                p_over_q * *(b + 196 * OS1_S1 + 73) +
                one_over_two_q * *(b + 115 * OS1_S1 + 73) +
                one_over_two_q * *(b + 151 * OS1_S1 + 52);
            *(b + 151 * OS1_S1 + 102) =
                prefactor_x * *(b + 151 * OS1_S1 + 74) -
                p_over_q * *(b + 196 * OS1_S1 + 74) +
                one_over_two_q * *(b + 115 * OS1_S1 + 74) +
                one_over_two_q * *(b + 151 * OS1_S1 + 53);
            *(b + 151 * OS1_S1 + 103) =
                prefactor_y * *(b + 151 * OS1_S1 + 70) -
                p_over_q * *(b + 204 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 70);
            *(b + 151 * OS1_S1 + 104) =
                prefactor_x * *(b + 151 * OS1_S1 + 76) -
                p_over_q * *(b + 196 * OS1_S1 + 76) +
                one_over_two_q * *(b + 115 * OS1_S1 + 76) +
                one_over_two_q * *(b + 151 * OS1_S1 + 55);
            *(b + 151 * OS1_S1 + 105) =
                prefactor_x * *(b + 151 * OS1_S1 + 77) -
                p_over_q * *(b + 196 * OS1_S1 + 77) +
                one_over_two_q * *(b + 115 * OS1_S1 + 77);
            *(b + 151 * OS1_S1 + 106) =
                prefactor_x * *(b + 151 * OS1_S1 + 78) -
                p_over_q * *(b + 196 * OS1_S1 + 78) +
                one_over_two_q * *(b + 115 * OS1_S1 + 78);
            *(b + 151 * OS1_S1 + 107) =
                prefactor_x * *(b + 151 * OS1_S1 + 79) -
                p_over_q * *(b + 196 * OS1_S1 + 79) +
                one_over_two_q * *(b + 115 * OS1_S1 + 79);
            *(b + 151 * OS1_S1 + 108) =
                prefactor_x * *(b + 151 * OS1_S1 + 80) -
                p_over_q * *(b + 196 * OS1_S1 + 80) +
                one_over_two_q * *(b + 115 * OS1_S1 + 80);
            *(b + 151 * OS1_S1 + 109) =
                prefactor_x * *(b + 151 * OS1_S1 + 81) -
                p_over_q * *(b + 196 * OS1_S1 + 81) +
                one_over_two_q * *(b + 115 * OS1_S1 + 81);
            *(b + 151 * OS1_S1 + 110) =
                prefactor_x * *(b + 151 * OS1_S1 + 82) -
                p_over_q * *(b + 196 * OS1_S1 + 82) +
                one_over_two_q * *(b + 115 * OS1_S1 + 82);
            *(b + 151 * OS1_S1 + 111) =
                prefactor_x * *(b + 151 * OS1_S1 + 83) -
                p_over_q * *(b + 196 * OS1_S1 + 83) +
                one_over_two_q * *(b + 115 * OS1_S1 + 83);
            *(b + 151 * OS1_S1 + 112) =
                prefactor_y * *(b + 151 * OS1_S1 + 77) -
                p_over_q * *(b + 204 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 151 * OS1_S1 + 50);
            *(b + 151 * OS1_S1 + 113) =
                prefactor_z * *(b + 151 * OS1_S1 + 77) -
                p_over_q * *(b + 205 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 77);
            *(b + 151 * OS1_S1 + 114) =
                prefactor_z * *(b + 151 * OS1_S1 + 78) -
                p_over_q * *(b + 205 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 78) +
                one_over_two_q * *(b + 151 * OS1_S1 + 50);
            *(b + 151 * OS1_S1 + 115) =
                prefactor_z * *(b + 151 * OS1_S1 + 79) -
                p_over_q * *(b + 205 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 51);
            *(b + 151 * OS1_S1 + 116) =
                prefactor_y * *(b + 151 * OS1_S1 + 81) -
                p_over_q * *(b + 204 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 54);
            *(b + 151 * OS1_S1 + 117) =
                prefactor_y * *(b + 151 * OS1_S1 + 82) -
                p_over_q * *(b + 204 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 82) +
                one_over_two_q * *(b + 151 * OS1_S1 + 55);
            *(b + 151 * OS1_S1 + 118) =
                prefactor_y * *(b + 151 * OS1_S1 + 83) -
                p_over_q * *(b + 204 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 83);
            *(b + 151 * OS1_S1 + 119) =
                prefactor_z * *(b + 151 * OS1_S1 + 83) -
                p_over_q * *(b + 205 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 151 * OS1_S1 + 55);
            *(b + 152 * OS1_S1 + 84) =
                prefactor_x * *(b + 152 * OS1_S1 + 56) -
                p_over_q * *(b + 197 * OS1_S1 + 56) +
                one_over_two_q * *(b + 116 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 152 * OS1_S1 + 35);
            *(b + 152 * OS1_S1 + 85) =
                prefactor_y * *(b + 152 * OS1_S1 + 56) -
                p_over_q * *(b + 205 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 56);
            *(b + 152 * OS1_S1 + 86) =
                prefactor_z * *(b + 152 * OS1_S1 + 56) -
                p_over_q * *(b + 206 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 56);
            *(b + 152 * OS1_S1 + 87) =
                prefactor_y * *(b + 152 * OS1_S1 + 57) -
                p_over_q * *(b + 205 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 57) +
                one_over_two_q * *(b + 152 * OS1_S1 + 35);
            *(b + 152 * OS1_S1 + 88) =
                prefactor_y * *(b + 152 * OS1_S1 + 58) -
                p_over_q * *(b + 205 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 58);
            *(b + 152 * OS1_S1 + 89) =
                prefactor_z * *(b + 152 * OS1_S1 + 58) -
                p_over_q * *(b + 206 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 58) +
                one_over_two_q * *(b + 152 * OS1_S1 + 35);
            *(b + 152 * OS1_S1 + 90) =
                prefactor_y * *(b + 152 * OS1_S1 + 59) -
                p_over_q * *(b + 205 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 36);
            *(b + 152 * OS1_S1 + 91) =
                prefactor_z * *(b + 152 * OS1_S1 + 59) -
                p_over_q * *(b + 206 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 59);
            *(b + 152 * OS1_S1 + 92) =
                prefactor_y * *(b + 152 * OS1_S1 + 61) -
                p_over_q * *(b + 205 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 61);
            *(b + 152 * OS1_S1 + 93) =
                prefactor_z * *(b + 152 * OS1_S1 + 61) -
                p_over_q * *(b + 206 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 37);
            *(b + 152 * OS1_S1 + 94) =
                prefactor_x * *(b + 152 * OS1_S1 + 66) -
                p_over_q * *(b + 197 * OS1_S1 + 66) +
                one_over_two_q * *(b + 116 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 45);
            *(b + 152 * OS1_S1 + 95) =
                prefactor_z * *(b + 152 * OS1_S1 + 62) -
                p_over_q * *(b + 206 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 62);
            *(b + 152 * OS1_S1 + 96) =
                prefactor_y * *(b + 152 * OS1_S1 + 64) -
                p_over_q * *(b + 205 * OS1_S1 + 64) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 64) +
                one_over_two_q * *(b + 152 * OS1_S1 + 40);
            *(b + 152 * OS1_S1 + 97) =
                prefactor_y * *(b + 152 * OS1_S1 + 65) -
                p_over_q * *(b + 205 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 65);
            *(b + 152 * OS1_S1 + 98) =
                prefactor_x * *(b + 152 * OS1_S1 + 70) -
                p_over_q * *(b + 197 * OS1_S1 + 70) +
                one_over_two_q * *(b + 116 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 49);
            *(b + 152 * OS1_S1 + 99) =
                prefactor_x * *(b + 152 * OS1_S1 + 71) -
                p_over_q * *(b + 197 * OS1_S1 + 71) +
                one_over_two_q * *(b + 116 * OS1_S1 + 71) +
                one_over_two_q * *(b + 152 * OS1_S1 + 50);
            *(b + 152 * OS1_S1 + 100) =
                prefactor_z * *(b + 152 * OS1_S1 + 66) -
                p_over_q * *(b + 206 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 66);
            *(b + 152 * OS1_S1 + 101) =
                prefactor_x * *(b + 152 * OS1_S1 + 73) -
                p_over_q * *(b + 197 * OS1_S1 + 73) +
                one_over_two_q * *(b + 116 * OS1_S1 + 73) +
                one_over_two_q * *(b + 152 * OS1_S1 + 52);
            *(b + 152 * OS1_S1 + 102) =
                prefactor_x * *(b + 152 * OS1_S1 + 74) -
                p_over_q * *(b + 197 * OS1_S1 + 74) +
                one_over_two_q * *(b + 116 * OS1_S1 + 74) +
                one_over_two_q * *(b + 152 * OS1_S1 + 53);
            *(b + 152 * OS1_S1 + 103) =
                prefactor_y * *(b + 152 * OS1_S1 + 70) -
                p_over_q * *(b + 205 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 70);
            *(b + 152 * OS1_S1 + 104) =
                prefactor_x * *(b + 152 * OS1_S1 + 76) -
                p_over_q * *(b + 197 * OS1_S1 + 76) +
                one_over_two_q * *(b + 116 * OS1_S1 + 76) +
                one_over_two_q * *(b + 152 * OS1_S1 + 55);
            *(b + 152 * OS1_S1 + 105) =
                prefactor_x * *(b + 152 * OS1_S1 + 77) -
                p_over_q * *(b + 197 * OS1_S1 + 77) +
                one_over_two_q * *(b + 116 * OS1_S1 + 77);
            *(b + 152 * OS1_S1 + 106) =
                prefactor_x * *(b + 152 * OS1_S1 + 78) -
                p_over_q * *(b + 197 * OS1_S1 + 78) +
                one_over_two_q * *(b + 116 * OS1_S1 + 78);
            *(b + 152 * OS1_S1 + 107) =
                prefactor_x * *(b + 152 * OS1_S1 + 79) -
                p_over_q * *(b + 197 * OS1_S1 + 79) +
                one_over_two_q * *(b + 116 * OS1_S1 + 79);
            *(b + 152 * OS1_S1 + 108) =
                prefactor_x * *(b + 152 * OS1_S1 + 80) -
                p_over_q * *(b + 197 * OS1_S1 + 80) +
                one_over_two_q * *(b + 116 * OS1_S1 + 80);
            *(b + 152 * OS1_S1 + 109) =
                prefactor_x * *(b + 152 * OS1_S1 + 81) -
                p_over_q * *(b + 197 * OS1_S1 + 81) +
                one_over_two_q * *(b + 116 * OS1_S1 + 81);
            *(b + 152 * OS1_S1 + 110) =
                prefactor_x * *(b + 152 * OS1_S1 + 82) -
                p_over_q * *(b + 197 * OS1_S1 + 82) +
                one_over_two_q * *(b + 116 * OS1_S1 + 82);
            *(b + 152 * OS1_S1 + 111) =
                prefactor_x * *(b + 152 * OS1_S1 + 83) -
                p_over_q * *(b + 197 * OS1_S1 + 83) +
                one_over_two_q * *(b + 116 * OS1_S1 + 83);
            *(b + 152 * OS1_S1 + 112) =
                prefactor_y * *(b + 152 * OS1_S1 + 77) -
                p_over_q * *(b + 205 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 152 * OS1_S1 + 50);
            *(b + 152 * OS1_S1 + 113) =
                prefactor_z * *(b + 152 * OS1_S1 + 77) -
                p_over_q * *(b + 206 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 77);
            *(b + 152 * OS1_S1 + 114) =
                prefactor_z * *(b + 152 * OS1_S1 + 78) -
                p_over_q * *(b + 206 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 78) +
                one_over_two_q * *(b + 152 * OS1_S1 + 50);
            *(b + 152 * OS1_S1 + 115) =
                prefactor_z * *(b + 152 * OS1_S1 + 79) -
                p_over_q * *(b + 206 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 51);
            *(b + 152 * OS1_S1 + 116) =
                prefactor_y * *(b + 152 * OS1_S1 + 81) -
                p_over_q * *(b + 205 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 54);
            *(b + 152 * OS1_S1 + 117) =
                prefactor_y * *(b + 152 * OS1_S1 + 82) -
                p_over_q * *(b + 205 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 82) +
                one_over_two_q * *(b + 152 * OS1_S1 + 55);
            *(b + 152 * OS1_S1 + 118) =
                prefactor_y * *(b + 152 * OS1_S1 + 83) -
                p_over_q * *(b + 205 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 83);
            *(b + 152 * OS1_S1 + 119) =
                prefactor_z * *(b + 152 * OS1_S1 + 83) -
                p_over_q * *(b + 206 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 152 * OS1_S1 + 55);
            *(b + 153 * OS1_S1 + 84) =
                prefactor_x * *(b + 153 * OS1_S1 + 56) -
                p_over_q * *(b + 198 * OS1_S1 + 56) +
                one_over_two_q * *(b + 117 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 35);
            *(b + 153 * OS1_S1 + 85) =
                prefactor_y * *(b + 153 * OS1_S1 + 56) -
                p_over_q * *(b + 206 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 56);
            *(b + 153 * OS1_S1 + 86) =
                prefactor_z * *(b + 153 * OS1_S1 + 56) -
                p_over_q * *(b + 207 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 56);
            *(b + 153 * OS1_S1 + 87) =
                prefactor_y * *(b + 153 * OS1_S1 + 57) -
                p_over_q * *(b + 206 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 57) +
                one_over_two_q * *(b + 153 * OS1_S1 + 35);
            *(b + 153 * OS1_S1 + 88) =
                prefactor_y * *(b + 153 * OS1_S1 + 58) -
                p_over_q * *(b + 206 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 58);
            *(b + 153 * OS1_S1 + 89) =
                prefactor_z * *(b + 153 * OS1_S1 + 58) -
                p_over_q * *(b + 207 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 58) +
                one_over_two_q * *(b + 153 * OS1_S1 + 35);
            *(b + 153 * OS1_S1 + 90) =
                prefactor_y * *(b + 153 * OS1_S1 + 59) -
                p_over_q * *(b + 206 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 36);
            *(b + 153 * OS1_S1 + 91) =
                prefactor_z * *(b + 153 * OS1_S1 + 59) -
                p_over_q * *(b + 207 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 59);
            *(b + 153 * OS1_S1 + 92) =
                prefactor_y * *(b + 153 * OS1_S1 + 61) -
                p_over_q * *(b + 206 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 61);
            *(b + 153 * OS1_S1 + 93) =
                prefactor_z * *(b + 153 * OS1_S1 + 61) -
                p_over_q * *(b + 207 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 37);
            *(b + 153 * OS1_S1 + 94) =
                prefactor_x * *(b + 153 * OS1_S1 + 66) -
                p_over_q * *(b + 198 * OS1_S1 + 66) +
                one_over_two_q * *(b + 117 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 45);
            *(b + 153 * OS1_S1 + 95) =
                prefactor_z * *(b + 153 * OS1_S1 + 62) -
                p_over_q * *(b + 207 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 62);
            *(b + 153 * OS1_S1 + 96) =
                prefactor_y * *(b + 153 * OS1_S1 + 64) -
                p_over_q * *(b + 206 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 64) +
                one_over_two_q * *(b + 153 * OS1_S1 + 40);
            *(b + 153 * OS1_S1 + 97) =
                prefactor_y * *(b + 153 * OS1_S1 + 65) -
                p_over_q * *(b + 206 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 65);
            *(b + 153 * OS1_S1 + 98) =
                prefactor_x * *(b + 153 * OS1_S1 + 70) -
                p_over_q * *(b + 198 * OS1_S1 + 70) +
                one_over_two_q * *(b + 117 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 49);
            *(b + 153 * OS1_S1 + 99) =
                prefactor_x * *(b + 153 * OS1_S1 + 71) -
                p_over_q * *(b + 198 * OS1_S1 + 71) +
                one_over_two_q * *(b + 117 * OS1_S1 + 71) +
                one_over_two_q * *(b + 153 * OS1_S1 + 50);
            *(b + 153 * OS1_S1 + 100) =
                prefactor_z * *(b + 153 * OS1_S1 + 66) -
                p_over_q * *(b + 207 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 66);
            *(b + 153 * OS1_S1 + 101) =
                prefactor_x * *(b + 153 * OS1_S1 + 73) -
                p_over_q * *(b + 198 * OS1_S1 + 73) +
                one_over_two_q * *(b + 117 * OS1_S1 + 73) +
                one_over_two_q * *(b + 153 * OS1_S1 + 52);
            *(b + 153 * OS1_S1 + 102) =
                prefactor_x * *(b + 153 * OS1_S1 + 74) -
                p_over_q * *(b + 198 * OS1_S1 + 74) +
                one_over_two_q * *(b + 117 * OS1_S1 + 74) +
                one_over_two_q * *(b + 153 * OS1_S1 + 53);
            *(b + 153 * OS1_S1 + 103) =
                prefactor_y * *(b + 153 * OS1_S1 + 70) -
                p_over_q * *(b + 206 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 70);
            *(b + 153 * OS1_S1 + 104) =
                prefactor_x * *(b + 153 * OS1_S1 + 76) -
                p_over_q * *(b + 198 * OS1_S1 + 76) +
                one_over_two_q * *(b + 117 * OS1_S1 + 76) +
                one_over_two_q * *(b + 153 * OS1_S1 + 55);
            *(b + 153 * OS1_S1 + 105) =
                prefactor_x * *(b + 153 * OS1_S1 + 77) -
                p_over_q * *(b + 198 * OS1_S1 + 77) +
                one_over_two_q * *(b + 117 * OS1_S1 + 77);
            *(b + 153 * OS1_S1 + 106) =
                prefactor_x * *(b + 153 * OS1_S1 + 78) -
                p_over_q * *(b + 198 * OS1_S1 + 78) +
                one_over_two_q * *(b + 117 * OS1_S1 + 78);
            *(b + 153 * OS1_S1 + 107) =
                prefactor_x * *(b + 153 * OS1_S1 + 79) -
                p_over_q * *(b + 198 * OS1_S1 + 79) +
                one_over_two_q * *(b + 117 * OS1_S1 + 79);
            *(b + 153 * OS1_S1 + 108) =
                prefactor_x * *(b + 153 * OS1_S1 + 80) -
                p_over_q * *(b + 198 * OS1_S1 + 80) +
                one_over_two_q * *(b + 117 * OS1_S1 + 80);
            *(b + 153 * OS1_S1 + 109) =
                prefactor_x * *(b + 153 * OS1_S1 + 81) -
                p_over_q * *(b + 198 * OS1_S1 + 81) +
                one_over_two_q * *(b + 117 * OS1_S1 + 81);
            *(b + 153 * OS1_S1 + 110) =
                prefactor_x * *(b + 153 * OS1_S1 + 82) -
                p_over_q * *(b + 198 * OS1_S1 + 82) +
                one_over_two_q * *(b + 117 * OS1_S1 + 82);
            *(b + 153 * OS1_S1 + 111) =
                prefactor_x * *(b + 153 * OS1_S1 + 83) -
                p_over_q * *(b + 198 * OS1_S1 + 83) +
                one_over_two_q * *(b + 117 * OS1_S1 + 83);
            *(b + 153 * OS1_S1 + 112) =
                prefactor_y * *(b + 153 * OS1_S1 + 77) -
                p_over_q * *(b + 206 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 50);
            *(b + 153 * OS1_S1 + 113) =
                prefactor_z * *(b + 153 * OS1_S1 + 77) -
                p_over_q * *(b + 207 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 77);
            *(b + 153 * OS1_S1 + 114) =
                prefactor_z * *(b + 153 * OS1_S1 + 78) -
                p_over_q * *(b + 207 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 78) +
                one_over_two_q * *(b + 153 * OS1_S1 + 50);
            *(b + 153 * OS1_S1 + 115) =
                prefactor_z * *(b + 153 * OS1_S1 + 79) -
                p_over_q * *(b + 207 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 51);
            *(b + 153 * OS1_S1 + 116) =
                prefactor_y * *(b + 153 * OS1_S1 + 81) -
                p_over_q * *(b + 206 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 54);
            *(b + 153 * OS1_S1 + 117) =
                prefactor_y * *(b + 153 * OS1_S1 + 82) -
                p_over_q * *(b + 206 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 82) +
                one_over_two_q * *(b + 153 * OS1_S1 + 55);
            *(b + 153 * OS1_S1 + 118) =
                prefactor_y * *(b + 153 * OS1_S1 + 83) -
                p_over_q * *(b + 206 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 83);
            *(b + 153 * OS1_S1 + 119) =
                prefactor_z * *(b + 153 * OS1_S1 + 83) -
                p_over_q * *(b + 207 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 55);
            *(b + 154 * OS1_S1 + 84) =
                prefactor_x * *(b + 154 * OS1_S1 + 56) -
                p_over_q * *(b + 199 * OS1_S1 + 56) +
                one_over_two_q * *(b + 118 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 154 * OS1_S1 + 35);
            *(b + 154 * OS1_S1 + 85) =
                prefactor_y * *(b + 154 * OS1_S1 + 56) -
                p_over_q * *(b + 207 * OS1_S1 + 56) +
                one_over_two_q * *(b + 111 * OS1_S1 + 56);
            *(b + 154 * OS1_S1 + 86) =
                prefactor_z * *(b + 154 * OS1_S1 + 56) -
                p_over_q * *(b + 208 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 56);
            *(b + 154 * OS1_S1 + 87) =
                prefactor_y * *(b + 154 * OS1_S1 + 57) -
                p_over_q * *(b + 207 * OS1_S1 + 57) +
                one_over_two_q * *(b + 111 * OS1_S1 + 57) +
                one_over_two_q * *(b + 154 * OS1_S1 + 35);
            *(b + 154 * OS1_S1 + 88) =
                prefactor_y * *(b + 154 * OS1_S1 + 58) -
                p_over_q * *(b + 207 * OS1_S1 + 58) +
                one_over_two_q * *(b + 111 * OS1_S1 + 58);
            *(b + 154 * OS1_S1 + 89) =
                prefactor_z * *(b + 154 * OS1_S1 + 58) -
                p_over_q * *(b + 208 * OS1_S1 + 58) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 58) +
                one_over_two_q * *(b + 154 * OS1_S1 + 35);
            *(b + 154 * OS1_S1 + 90) =
                prefactor_y * *(b + 154 * OS1_S1 + 59) -
                p_over_q * *(b + 207 * OS1_S1 + 59) +
                one_over_two_q * *(b + 111 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 36);
            *(b + 154 * OS1_S1 + 91) =
                prefactor_z * *(b + 154 * OS1_S1 + 59) -
                p_over_q * *(b + 208 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 59);
            *(b + 154 * OS1_S1 + 92) =
                prefactor_y * *(b + 154 * OS1_S1 + 61) -
                p_over_q * *(b + 207 * OS1_S1 + 61) +
                one_over_two_q * *(b + 111 * OS1_S1 + 61);
            *(b + 154 * OS1_S1 + 93) =
                prefactor_z * *(b + 154 * OS1_S1 + 61) -
                p_over_q * *(b + 208 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 37);
            *(b + 154 * OS1_S1 + 94) =
                prefactor_x * *(b + 154 * OS1_S1 + 66) -
                p_over_q * *(b + 199 * OS1_S1 + 66) +
                one_over_two_q * *(b + 118 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 45);
            *(b + 154 * OS1_S1 + 95) =
                prefactor_z * *(b + 154 * OS1_S1 + 62) -
                p_over_q * *(b + 208 * OS1_S1 + 62) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 62);
            *(b + 154 * OS1_S1 + 96) =
                prefactor_y * *(b + 154 * OS1_S1 + 64) -
                p_over_q * *(b + 207 * OS1_S1 + 64) +
                one_over_two_q * *(b + 111 * OS1_S1 + 64) +
                one_over_two_q * *(b + 154 * OS1_S1 + 40);
            *(b + 154 * OS1_S1 + 97) =
                prefactor_y * *(b + 154 * OS1_S1 + 65) -
                p_over_q * *(b + 207 * OS1_S1 + 65) +
                one_over_two_q * *(b + 111 * OS1_S1 + 65);
            *(b + 154 * OS1_S1 + 98) =
                prefactor_x * *(b + 154 * OS1_S1 + 70) -
                p_over_q * *(b + 199 * OS1_S1 + 70) +
                one_over_two_q * *(b + 118 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 49);
            *(b + 154 * OS1_S1 + 99) =
                prefactor_x * *(b + 154 * OS1_S1 + 71) -
                p_over_q * *(b + 199 * OS1_S1 + 71) +
                one_over_two_q * *(b + 118 * OS1_S1 + 71) +
                one_over_two_q * *(b + 154 * OS1_S1 + 50);
            *(b + 154 * OS1_S1 + 100) =
                prefactor_z * *(b + 154 * OS1_S1 + 66) -
                p_over_q * *(b + 208 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 66);
            *(b + 154 * OS1_S1 + 101) =
                prefactor_x * *(b + 154 * OS1_S1 + 73) -
                p_over_q * *(b + 199 * OS1_S1 + 73) +
                one_over_two_q * *(b + 118 * OS1_S1 + 73) +
                one_over_two_q * *(b + 154 * OS1_S1 + 52);
            *(b + 154 * OS1_S1 + 102) =
                prefactor_y * *(b + 154 * OS1_S1 + 69) -
                p_over_q * *(b + 207 * OS1_S1 + 69) +
                one_over_two_q * *(b + 111 * OS1_S1 + 69) +
                one_over_two_q * *(b + 154 * OS1_S1 + 44);
            *(b + 154 * OS1_S1 + 103) =
                prefactor_y * *(b + 154 * OS1_S1 + 70) -
                p_over_q * *(b + 207 * OS1_S1 + 70) +
                one_over_two_q * *(b + 111 * OS1_S1 + 70);
            *(b + 154 * OS1_S1 + 104) =
                prefactor_x * *(b + 154 * OS1_S1 + 76) -
                p_over_q * *(b + 199 * OS1_S1 + 76) +
                one_over_two_q * *(b + 118 * OS1_S1 + 76) +
                one_over_two_q * *(b + 154 * OS1_S1 + 55);
            *(b + 154 * OS1_S1 + 105) =
                prefactor_x * *(b + 154 * OS1_S1 + 77) -
                p_over_q * *(b + 199 * OS1_S1 + 77) +
                one_over_two_q * *(b + 118 * OS1_S1 + 77);
            *(b + 154 * OS1_S1 + 106) =
                prefactor_x * *(b + 154 * OS1_S1 + 78) -
                p_over_q * *(b + 199 * OS1_S1 + 78) +
                one_over_two_q * *(b + 118 * OS1_S1 + 78);
            *(b + 154 * OS1_S1 + 107) =
                prefactor_x * *(b + 154 * OS1_S1 + 79) -
                p_over_q * *(b + 199 * OS1_S1 + 79) +
                one_over_two_q * *(b + 118 * OS1_S1 + 79);
            *(b + 154 * OS1_S1 + 108) =
                prefactor_x * *(b + 154 * OS1_S1 + 80) -
                p_over_q * *(b + 199 * OS1_S1 + 80) +
                one_over_two_q * *(b + 118 * OS1_S1 + 80);
            *(b + 154 * OS1_S1 + 109) =
                prefactor_x * *(b + 154 * OS1_S1 + 81) -
                p_over_q * *(b + 199 * OS1_S1 + 81) +
                one_over_two_q * *(b + 118 * OS1_S1 + 81);
            *(b + 154 * OS1_S1 + 110) =
                prefactor_y * *(b + 154 * OS1_S1 + 76) -
                p_over_q * *(b + 207 * OS1_S1 + 76) +
                one_over_two_q * *(b + 111 * OS1_S1 + 76);
            *(b + 154 * OS1_S1 + 111) =
                prefactor_x * *(b + 154 * OS1_S1 + 83) -
                p_over_q * *(b + 199 * OS1_S1 + 83) +
                one_over_two_q * *(b + 118 * OS1_S1 + 83);
            *(b + 154 * OS1_S1 + 112) =
                prefactor_y * *(b + 154 * OS1_S1 + 77) -
                p_over_q * *(b + 207 * OS1_S1 + 77) +
                one_over_two_q * *(b + 111 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 154 * OS1_S1 + 50);
            *(b + 154 * OS1_S1 + 113) =
                prefactor_z * *(b + 154 * OS1_S1 + 77) -
                p_over_q * *(b + 208 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 77);
            *(b + 154 * OS1_S1 + 114) =
                prefactor_z * *(b + 154 * OS1_S1 + 78) -
                p_over_q * *(b + 208 * OS1_S1 + 78) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 78) +
                one_over_two_q * *(b + 154 * OS1_S1 + 50);
            *(b + 154 * OS1_S1 + 115) =
                prefactor_z * *(b + 154 * OS1_S1 + 79) -
                p_over_q * *(b + 208 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 51);
            *(b + 154 * OS1_S1 + 116) =
                prefactor_y * *(b + 154 * OS1_S1 + 81) -
                p_over_q * *(b + 207 * OS1_S1 + 81) +
                one_over_two_q * *(b + 111 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 54);
            *(b + 154 * OS1_S1 + 117) =
                prefactor_y * *(b + 154 * OS1_S1 + 82) -
                p_over_q * *(b + 207 * OS1_S1 + 82) +
                one_over_two_q * *(b + 111 * OS1_S1 + 82) +
                one_over_two_q * *(b + 154 * OS1_S1 + 55);
            *(b + 154 * OS1_S1 + 118) =
                prefactor_y * *(b + 154 * OS1_S1 + 83) -
                p_over_q * *(b + 207 * OS1_S1 + 83) +
                one_over_two_q * *(b + 111 * OS1_S1 + 83);
            *(b + 154 * OS1_S1 + 119) =
                prefactor_z * *(b + 154 * OS1_S1 + 83) -
                p_over_q * *(b + 208 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 154 * OS1_S1 + 55);
            *(b + 155 * OS1_S1 + 84) =
                prefactor_x * *(b + 155 * OS1_S1 + 56) -
                p_over_q * *(b + 200 * OS1_S1 + 56) +
                one_over_two_q * *(b + 119 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 155 * OS1_S1 + 35);
            *(b + 155 * OS1_S1 + 85) = prefactor_y * *(b + 155 * OS1_S1 + 56) -
                                       p_over_q * *(b + 208 * OS1_S1 + 56);
            *(b + 155 * OS1_S1 + 86) =
                prefactor_z * *(b + 155 * OS1_S1 + 56) -
                p_over_q * *(b + 209 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 56);
            *(b + 155 * OS1_S1 + 87) =
                prefactor_y * *(b + 155 * OS1_S1 + 57) -
                p_over_q * *(b + 208 * OS1_S1 + 57) +
                one_over_two_q * *(b + 155 * OS1_S1 + 35);
            *(b + 155 * OS1_S1 + 88) = prefactor_y * *(b + 155 * OS1_S1 + 58) -
                                       p_over_q * *(b + 208 * OS1_S1 + 58);
            *(b + 155 * OS1_S1 + 89) =
                prefactor_z * *(b + 155 * OS1_S1 + 58) -
                p_over_q * *(b + 209 * OS1_S1 + 58) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 58) +
                one_over_two_q * *(b + 155 * OS1_S1 + 35);
            *(b + 155 * OS1_S1 + 90) =
                prefactor_y * *(b + 155 * OS1_S1 + 59) -
                p_over_q * *(b + 208 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 36);
            *(b + 155 * OS1_S1 + 91) =
                prefactor_z * *(b + 155 * OS1_S1 + 59) -
                p_over_q * *(b + 209 * OS1_S1 + 59) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 59);
            *(b + 155 * OS1_S1 + 92) = prefactor_y * *(b + 155 * OS1_S1 + 61) -
                                       p_over_q * *(b + 208 * OS1_S1 + 61);
            *(b + 155 * OS1_S1 + 93) =
                prefactor_z * *(b + 155 * OS1_S1 + 61) -
                p_over_q * *(b + 209 * OS1_S1 + 61) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 37);
            *(b + 155 * OS1_S1 + 94) =
                prefactor_x * *(b + 155 * OS1_S1 + 66) -
                p_over_q * *(b + 200 * OS1_S1 + 66) +
                one_over_two_q * *(b + 119 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 45);
            *(b + 155 * OS1_S1 + 95) =
                prefactor_z * *(b + 155 * OS1_S1 + 62) -
                p_over_q * *(b + 209 * OS1_S1 + 62) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 62);
            *(b + 155 * OS1_S1 + 96) =
                prefactor_y * *(b + 155 * OS1_S1 + 64) -
                p_over_q * *(b + 208 * OS1_S1 + 64) +
                one_over_two_q * *(b + 155 * OS1_S1 + 40);
            *(b + 155 * OS1_S1 + 97) = prefactor_y * *(b + 155 * OS1_S1 + 65) -
                                       p_over_q * *(b + 208 * OS1_S1 + 65);
            *(b + 155 * OS1_S1 + 98) =
                prefactor_x * *(b + 155 * OS1_S1 + 70) -
                p_over_q * *(b + 200 * OS1_S1 + 70) +
                one_over_two_q * *(b + 119 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 49);
            *(b + 155 * OS1_S1 + 99) =
                prefactor_x * *(b + 155 * OS1_S1 + 71) -
                p_over_q * *(b + 200 * OS1_S1 + 71) +
                one_over_two_q * *(b + 119 * OS1_S1 + 71) +
                one_over_two_q * *(b + 155 * OS1_S1 + 50);
            *(b + 155 * OS1_S1 + 100) =
                prefactor_z * *(b + 155 * OS1_S1 + 66) -
                p_over_q * *(b + 209 * OS1_S1 + 66) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 66);
            *(b + 155 * OS1_S1 + 101) =
                prefactor_x * *(b + 155 * OS1_S1 + 73) -
                p_over_q * *(b + 200 * OS1_S1 + 73) +
                one_over_two_q * *(b + 119 * OS1_S1 + 73) +
                one_over_two_q * *(b + 155 * OS1_S1 + 52);
            *(b + 155 * OS1_S1 + 102) =
                prefactor_y * *(b + 155 * OS1_S1 + 69) -
                p_over_q * *(b + 208 * OS1_S1 + 69) +
                one_over_two_q * *(b + 155 * OS1_S1 + 44);
            *(b + 155 * OS1_S1 + 103) = prefactor_y * *(b + 155 * OS1_S1 + 70) -
                                        p_over_q * *(b + 208 * OS1_S1 + 70);
            *(b + 155 * OS1_S1 + 104) =
                prefactor_x * *(b + 155 * OS1_S1 + 76) -
                p_over_q * *(b + 200 * OS1_S1 + 76) +
                one_over_two_q * *(b + 119 * OS1_S1 + 76) +
                one_over_two_q * *(b + 155 * OS1_S1 + 55);
            *(b + 155 * OS1_S1 + 105) =
                prefactor_x * *(b + 155 * OS1_S1 + 77) -
                p_over_q * *(b + 200 * OS1_S1 + 77) +
                one_over_two_q * *(b + 119 * OS1_S1 + 77);
            *(b + 155 * OS1_S1 + 106) =
                prefactor_x * *(b + 155 * OS1_S1 + 78) -
                p_over_q * *(b + 200 * OS1_S1 + 78) +
                one_over_two_q * *(b + 119 * OS1_S1 + 78);
            *(b + 155 * OS1_S1 + 107) =
                prefactor_x * *(b + 155 * OS1_S1 + 79) -
                p_over_q * *(b + 200 * OS1_S1 + 79) +
                one_over_two_q * *(b + 119 * OS1_S1 + 79);
            *(b + 155 * OS1_S1 + 108) =
                prefactor_x * *(b + 155 * OS1_S1 + 80) -
                p_over_q * *(b + 200 * OS1_S1 + 80) +
                one_over_two_q * *(b + 119 * OS1_S1 + 80);
            *(b + 155 * OS1_S1 + 109) =
                prefactor_x * *(b + 155 * OS1_S1 + 81) -
                p_over_q * *(b + 200 * OS1_S1 + 81) +
                one_over_two_q * *(b + 119 * OS1_S1 + 81);
            *(b + 155 * OS1_S1 + 110) = prefactor_y * *(b + 155 * OS1_S1 + 76) -
                                        p_over_q * *(b + 208 * OS1_S1 + 76);
            *(b + 155 * OS1_S1 + 111) =
                prefactor_x * *(b + 155 * OS1_S1 + 83) -
                p_over_q * *(b + 200 * OS1_S1 + 83) +
                one_over_two_q * *(b + 119 * OS1_S1 + 83);
            *(b + 155 * OS1_S1 + 112) =
                prefactor_y * *(b + 155 * OS1_S1 + 77) -
                p_over_q * *(b + 208 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 155 * OS1_S1 + 50);
            *(b + 155 * OS1_S1 + 113) =
                prefactor_z * *(b + 155 * OS1_S1 + 77) -
                p_over_q * *(b + 209 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 77);
            *(b + 155 * OS1_S1 + 114) =
                prefactor_z * *(b + 155 * OS1_S1 + 78) -
                p_over_q * *(b + 209 * OS1_S1 + 78) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 78) +
                one_over_two_q * *(b + 155 * OS1_S1 + 50);
            *(b + 155 * OS1_S1 + 115) =
                prefactor_z * *(b + 155 * OS1_S1 + 79) -
                p_over_q * *(b + 209 * OS1_S1 + 79) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 51);
            *(b + 155 * OS1_S1 + 116) =
                prefactor_y * *(b + 155 * OS1_S1 + 81) -
                p_over_q * *(b + 208 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 54);
            *(b + 155 * OS1_S1 + 117) =
                prefactor_y * *(b + 155 * OS1_S1 + 82) -
                p_over_q * *(b + 208 * OS1_S1 + 82) +
                one_over_two_q * *(b + 155 * OS1_S1 + 55);
            *(b + 155 * OS1_S1 + 118) = prefactor_y * *(b + 155 * OS1_S1 + 83) -
                                        p_over_q * *(b + 208 * OS1_S1 + 83);
            *(b + 155 * OS1_S1 + 119) =
                prefactor_z * *(b + 155 * OS1_S1 + 83) -
                p_over_q * *(b + 209 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 155 * OS1_S1 + 55);
            *(b + 156 * OS1_S1 + 84) =
                prefactor_x * *(b + 156 * OS1_S1 + 56) -
                p_over_q * *(b + 201 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 156 * OS1_S1 + 35);
            *(b + 156 * OS1_S1 + 85) =
                prefactor_y * *(b + 156 * OS1_S1 + 56) -
                p_over_q * *(b + 210 * OS1_S1 + 56) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 56);
            *(b + 156 * OS1_S1 + 86) = prefactor_z * *(b + 156 * OS1_S1 + 56) -
                                       p_over_q * *(b + 211 * OS1_S1 + 56);
            *(b + 156 * OS1_S1 + 87) =
                prefactor_y * *(b + 156 * OS1_S1 + 57) -
                p_over_q * *(b + 210 * OS1_S1 + 57) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 57) +
                one_over_two_q * *(b + 156 * OS1_S1 + 35);
            *(b + 156 * OS1_S1 + 88) = prefactor_z * *(b + 156 * OS1_S1 + 57) -
                                       p_over_q * *(b + 211 * OS1_S1 + 57);
            *(b + 156 * OS1_S1 + 89) =
                prefactor_z * *(b + 156 * OS1_S1 + 58) -
                p_over_q * *(b + 211 * OS1_S1 + 58) +
                one_over_two_q * *(b + 156 * OS1_S1 + 35);
            *(b + 156 * OS1_S1 + 90) =
                prefactor_y * *(b + 156 * OS1_S1 + 59) -
                p_over_q * *(b + 210 * OS1_S1 + 59) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 36);
            *(b + 156 * OS1_S1 + 91) = prefactor_z * *(b + 156 * OS1_S1 + 59) -
                                       p_over_q * *(b + 211 * OS1_S1 + 59);
            *(b + 156 * OS1_S1 + 92) =
                prefactor_y * *(b + 156 * OS1_S1 + 61) -
                p_over_q * *(b + 210 * OS1_S1 + 61) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 61);
            *(b + 156 * OS1_S1 + 93) =
                prefactor_z * *(b + 156 * OS1_S1 + 61) -
                p_over_q * *(b + 211 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 37);
            *(b + 156 * OS1_S1 + 94) =
                prefactor_x * *(b + 156 * OS1_S1 + 66) -
                p_over_q * *(b + 201 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 45);
            *(b + 156 * OS1_S1 + 95) = prefactor_z * *(b + 156 * OS1_S1 + 62) -
                                       p_over_q * *(b + 211 * OS1_S1 + 62);
            *(b + 156 * OS1_S1 + 96) =
                prefactor_z * *(b + 156 * OS1_S1 + 63) -
                p_over_q * *(b + 211 * OS1_S1 + 63) +
                one_over_two_q * *(b + 156 * OS1_S1 + 38);
            *(b + 156 * OS1_S1 + 97) =
                prefactor_y * *(b + 156 * OS1_S1 + 65) -
                p_over_q * *(b + 210 * OS1_S1 + 65) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 65);
            *(b + 156 * OS1_S1 + 98) =
                prefactor_x * *(b + 156 * OS1_S1 + 70) -
                p_over_q * *(b + 201 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 49);
            *(b + 156 * OS1_S1 + 99) =
                prefactor_x * *(b + 156 * OS1_S1 + 71) -
                p_over_q * *(b + 201 * OS1_S1 + 71) +
                one_over_two_q * *(b + 156 * OS1_S1 + 50);
            *(b + 156 * OS1_S1 + 100) = prefactor_z * *(b + 156 * OS1_S1 + 66) -
                                        p_over_q * *(b + 211 * OS1_S1 + 66);
            *(b + 156 * OS1_S1 + 101) =
                prefactor_z * *(b + 156 * OS1_S1 + 67) -
                p_over_q * *(b + 211 * OS1_S1 + 67) +
                one_over_two_q * *(b + 156 * OS1_S1 + 41);
            *(b + 156 * OS1_S1 + 102) =
                prefactor_x * *(b + 156 * OS1_S1 + 74) -
                p_over_q * *(b + 201 * OS1_S1 + 74) +
                one_over_two_q * *(b + 156 * OS1_S1 + 53);
            *(b + 156 * OS1_S1 + 103) =
                prefactor_y * *(b + 156 * OS1_S1 + 70) -
                p_over_q * *(b + 210 * OS1_S1 + 70) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 70);
            *(b + 156 * OS1_S1 + 104) =
                prefactor_x * *(b + 156 * OS1_S1 + 76) -
                p_over_q * *(b + 201 * OS1_S1 + 76) +
                one_over_two_q * *(b + 156 * OS1_S1 + 55);
            *(b + 156 * OS1_S1 + 105) = prefactor_x * *(b + 156 * OS1_S1 + 77) -
                                        p_over_q * *(b + 201 * OS1_S1 + 77);
            *(b + 156 * OS1_S1 + 106) = prefactor_z * *(b + 156 * OS1_S1 + 71) -
                                        p_over_q * *(b + 211 * OS1_S1 + 71);
            *(b + 156 * OS1_S1 + 107) = prefactor_x * *(b + 156 * OS1_S1 + 79) -
                                        p_over_q * *(b + 201 * OS1_S1 + 79);
            *(b + 156 * OS1_S1 + 108) = prefactor_x * *(b + 156 * OS1_S1 + 80) -
                                        p_over_q * *(b + 201 * OS1_S1 + 80);
            *(b + 156 * OS1_S1 + 109) = prefactor_x * *(b + 156 * OS1_S1 + 81) -
                                        p_over_q * *(b + 201 * OS1_S1 + 81);
            *(b + 156 * OS1_S1 + 110) = prefactor_x * *(b + 156 * OS1_S1 + 82) -
                                        p_over_q * *(b + 201 * OS1_S1 + 82);
            *(b + 156 * OS1_S1 + 111) = prefactor_x * *(b + 156 * OS1_S1 + 83) -
                                        p_over_q * *(b + 201 * OS1_S1 + 83);
            *(b + 156 * OS1_S1 + 112) =
                prefactor_y * *(b + 156 * OS1_S1 + 77) -
                p_over_q * *(b + 210 * OS1_S1 + 77) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 156 * OS1_S1 + 50);
            *(b + 156 * OS1_S1 + 113) = prefactor_z * *(b + 156 * OS1_S1 + 77) -
                                        p_over_q * *(b + 211 * OS1_S1 + 77);
            *(b + 156 * OS1_S1 + 114) =
                prefactor_z * *(b + 156 * OS1_S1 + 78) -
                p_over_q * *(b + 211 * OS1_S1 + 78) +
                one_over_two_q * *(b + 156 * OS1_S1 + 50);
            *(b + 156 * OS1_S1 + 115) =
                prefactor_z * *(b + 156 * OS1_S1 + 79) -
                p_over_q * *(b + 211 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 51);
            *(b + 156 * OS1_S1 + 116) =
                prefactor_y * *(b + 156 * OS1_S1 + 81) -
                p_over_q * *(b + 210 * OS1_S1 + 81) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 54);
            *(b + 156 * OS1_S1 + 117) =
                prefactor_y * *(b + 156 * OS1_S1 + 82) -
                p_over_q * *(b + 210 * OS1_S1 + 82) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 82) +
                one_over_two_q * *(b + 156 * OS1_S1 + 55);
            *(b + 156 * OS1_S1 + 118) =
                prefactor_y * *(b + 156 * OS1_S1 + 83) -
                p_over_q * *(b + 210 * OS1_S1 + 83) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 83);
            *(b + 156 * OS1_S1 + 119) =
                prefactor_z * *(b + 156 * OS1_S1 + 83) -
                p_over_q * *(b + 211 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 156 * OS1_S1 + 55);
            *(b + 157 * OS1_S1 + 84) =
                prefactor_x * *(b + 157 * OS1_S1 + 56) -
                p_over_q * *(b + 202 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 157 * OS1_S1 + 35);
            *(b + 157 * OS1_S1 + 85) =
                prefactor_y * *(b + 157 * OS1_S1 + 56) -
                p_over_q * *(b + 211 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 56);
            *(b + 157 * OS1_S1 + 86) =
                prefactor_z * *(b + 157 * OS1_S1 + 56) -
                p_over_q * *(b + 212 * OS1_S1 + 56) +
                one_over_two_q * *(b + 112 * OS1_S1 + 56);
            *(b + 157 * OS1_S1 + 87) =
                prefactor_y * *(b + 157 * OS1_S1 + 57) -
                p_over_q * *(b + 211 * OS1_S1 + 57) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 57) +
                one_over_two_q * *(b + 157 * OS1_S1 + 35);
            *(b + 157 * OS1_S1 + 88) =
                prefactor_z * *(b + 157 * OS1_S1 + 57) -
                p_over_q * *(b + 212 * OS1_S1 + 57) +
                one_over_two_q * *(b + 112 * OS1_S1 + 57);
            *(b + 157 * OS1_S1 + 89) =
                prefactor_z * *(b + 157 * OS1_S1 + 58) -
                p_over_q * *(b + 212 * OS1_S1 + 58) +
                one_over_two_q * *(b + 112 * OS1_S1 + 58) +
                one_over_two_q * *(b + 157 * OS1_S1 + 35);
            *(b + 157 * OS1_S1 + 90) =
                prefactor_y * *(b + 157 * OS1_S1 + 59) -
                p_over_q * *(b + 211 * OS1_S1 + 59) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 36);
            *(b + 157 * OS1_S1 + 91) =
                prefactor_z * *(b + 157 * OS1_S1 + 59) -
                p_over_q * *(b + 212 * OS1_S1 + 59) +
                one_over_two_q * *(b + 112 * OS1_S1 + 59);
            *(b + 157 * OS1_S1 + 92) =
                prefactor_y * *(b + 157 * OS1_S1 + 61) -
                p_over_q * *(b + 211 * OS1_S1 + 61) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 61);
            *(b + 157 * OS1_S1 + 93) =
                prefactor_z * *(b + 157 * OS1_S1 + 61) -
                p_over_q * *(b + 212 * OS1_S1 + 61) +
                one_over_two_q * *(b + 112 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 37);
            *(b + 157 * OS1_S1 + 94) =
                prefactor_x * *(b + 157 * OS1_S1 + 66) -
                p_over_q * *(b + 202 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 45);
            *(b + 157 * OS1_S1 + 95) =
                prefactor_z * *(b + 157 * OS1_S1 + 62) -
                p_over_q * *(b + 212 * OS1_S1 + 62) +
                one_over_two_q * *(b + 112 * OS1_S1 + 62);
            *(b + 157 * OS1_S1 + 96) =
                prefactor_z * *(b + 157 * OS1_S1 + 63) -
                p_over_q * *(b + 212 * OS1_S1 + 63) +
                one_over_two_q * *(b + 112 * OS1_S1 + 63) +
                one_over_two_q * *(b + 157 * OS1_S1 + 38);
            *(b + 157 * OS1_S1 + 97) =
                prefactor_y * *(b + 157 * OS1_S1 + 65) -
                p_over_q * *(b + 211 * OS1_S1 + 65) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 65);
            *(b + 157 * OS1_S1 + 98) =
                prefactor_x * *(b + 157 * OS1_S1 + 70) -
                p_over_q * *(b + 202 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 49);
            *(b + 157 * OS1_S1 + 99) =
                prefactor_x * *(b + 157 * OS1_S1 + 71) -
                p_over_q * *(b + 202 * OS1_S1 + 71) +
                one_over_two_q * *(b + 157 * OS1_S1 + 50);
            *(b + 157 * OS1_S1 + 100) =
                prefactor_z * *(b + 157 * OS1_S1 + 66) -
                p_over_q * *(b + 212 * OS1_S1 + 66) +
                one_over_two_q * *(b + 112 * OS1_S1 + 66);
            *(b + 157 * OS1_S1 + 101) =
                prefactor_x * *(b + 157 * OS1_S1 + 73) -
                p_over_q * *(b + 202 * OS1_S1 + 73) +
                one_over_two_q * *(b + 157 * OS1_S1 + 52);
            *(b + 157 * OS1_S1 + 102) =
                prefactor_x * *(b + 157 * OS1_S1 + 74) -
                p_over_q * *(b + 202 * OS1_S1 + 74) +
                one_over_two_q * *(b + 157 * OS1_S1 + 53);
            *(b + 157 * OS1_S1 + 103) =
                prefactor_y * *(b + 157 * OS1_S1 + 70) -
                p_over_q * *(b + 211 * OS1_S1 + 70) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 70);
            *(b + 157 * OS1_S1 + 104) =
                prefactor_x * *(b + 157 * OS1_S1 + 76) -
                p_over_q * *(b + 202 * OS1_S1 + 76) +
                one_over_two_q * *(b + 157 * OS1_S1 + 55);
            *(b + 157 * OS1_S1 + 105) = prefactor_x * *(b + 157 * OS1_S1 + 77) -
                                        p_over_q * *(b + 202 * OS1_S1 + 77);
            *(b + 157 * OS1_S1 + 106) = prefactor_x * *(b + 157 * OS1_S1 + 78) -
                                        p_over_q * *(b + 202 * OS1_S1 + 78);
            *(b + 157 * OS1_S1 + 107) = prefactor_x * *(b + 157 * OS1_S1 + 79) -
                                        p_over_q * *(b + 202 * OS1_S1 + 79);
            *(b + 157 * OS1_S1 + 108) = prefactor_x * *(b + 157 * OS1_S1 + 80) -
                                        p_over_q * *(b + 202 * OS1_S1 + 80);
            *(b + 157 * OS1_S1 + 109) = prefactor_x * *(b + 157 * OS1_S1 + 81) -
                                        p_over_q * *(b + 202 * OS1_S1 + 81);
            *(b + 157 * OS1_S1 + 110) = prefactor_x * *(b + 157 * OS1_S1 + 82) -
                                        p_over_q * *(b + 202 * OS1_S1 + 82);
            *(b + 157 * OS1_S1 + 111) = prefactor_x * *(b + 157 * OS1_S1 + 83) -
                                        p_over_q * *(b + 202 * OS1_S1 + 83);
            *(b + 157 * OS1_S1 + 112) =
                prefactor_y * *(b + 157 * OS1_S1 + 77) -
                p_over_q * *(b + 211 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 157 * OS1_S1 + 50);
            *(b + 157 * OS1_S1 + 113) =
                prefactor_z * *(b + 157 * OS1_S1 + 77) -
                p_over_q * *(b + 212 * OS1_S1 + 77) +
                one_over_two_q * *(b + 112 * OS1_S1 + 77);
            *(b + 157 * OS1_S1 + 114) =
                prefactor_z * *(b + 157 * OS1_S1 + 78) -
                p_over_q * *(b + 212 * OS1_S1 + 78) +
                one_over_two_q * *(b + 112 * OS1_S1 + 78) +
                one_over_two_q * *(b + 157 * OS1_S1 + 50);
            *(b + 157 * OS1_S1 + 115) =
                prefactor_z * *(b + 157 * OS1_S1 + 79) -
                p_over_q * *(b + 212 * OS1_S1 + 79) +
                one_over_two_q * *(b + 112 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 51);
            *(b + 157 * OS1_S1 + 116) =
                prefactor_y * *(b + 157 * OS1_S1 + 81) -
                p_over_q * *(b + 211 * OS1_S1 + 81) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 54);
            *(b + 157 * OS1_S1 + 117) =
                prefactor_y * *(b + 157 * OS1_S1 + 82) -
                p_over_q * *(b + 211 * OS1_S1 + 82) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 82) +
                one_over_two_q * *(b + 157 * OS1_S1 + 55);
            *(b + 157 * OS1_S1 + 118) =
                prefactor_y * *(b + 157 * OS1_S1 + 83) -
                p_over_q * *(b + 211 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 83);
            *(b + 157 * OS1_S1 + 119) =
                prefactor_z * *(b + 157 * OS1_S1 + 83) -
                p_over_q * *(b + 212 * OS1_S1 + 83) +
                one_over_two_q * *(b + 112 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 157 * OS1_S1 + 55);
            *(b + 158 * OS1_S1 + 84) =
                prefactor_x * *(b + 158 * OS1_S1 + 56) -
                p_over_q * *(b + 203 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 158 * OS1_S1 + 35);
            *(b + 158 * OS1_S1 + 85) =
                prefactor_y * *(b + 158 * OS1_S1 + 56) -
                p_over_q * *(b + 212 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 56);
            *(b + 158 * OS1_S1 + 86) =
                prefactor_z * *(b + 158 * OS1_S1 + 56) -
                p_over_q * *(b + 213 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 56);
            *(b + 158 * OS1_S1 + 87) =
                prefactor_y * *(b + 158 * OS1_S1 + 57) -
                p_over_q * *(b + 212 * OS1_S1 + 57) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 57) +
                one_over_two_q * *(b + 158 * OS1_S1 + 35);
            *(b + 158 * OS1_S1 + 88) =
                prefactor_z * *(b + 158 * OS1_S1 + 57) -
                p_over_q * *(b + 213 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 57);
            *(b + 158 * OS1_S1 + 89) =
                prefactor_z * *(b + 158 * OS1_S1 + 58) -
                p_over_q * *(b + 213 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 58) +
                one_over_two_q * *(b + 158 * OS1_S1 + 35);
            *(b + 158 * OS1_S1 + 90) =
                prefactor_y * *(b + 158 * OS1_S1 + 59) -
                p_over_q * *(b + 212 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 36);
            *(b + 158 * OS1_S1 + 91) =
                prefactor_z * *(b + 158 * OS1_S1 + 59) -
                p_over_q * *(b + 213 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 59);
            *(b + 158 * OS1_S1 + 92) =
                prefactor_y * *(b + 158 * OS1_S1 + 61) -
                p_over_q * *(b + 212 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 61);
            *(b + 158 * OS1_S1 + 93) =
                prefactor_z * *(b + 158 * OS1_S1 + 61) -
                p_over_q * *(b + 213 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 37);
            *(b + 158 * OS1_S1 + 94) =
                prefactor_x * *(b + 158 * OS1_S1 + 66) -
                p_over_q * *(b + 203 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 45);
            *(b + 158 * OS1_S1 + 95) =
                prefactor_z * *(b + 158 * OS1_S1 + 62) -
                p_over_q * *(b + 213 * OS1_S1 + 62) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 62);
            *(b + 158 * OS1_S1 + 96) =
                prefactor_z * *(b + 158 * OS1_S1 + 63) -
                p_over_q * *(b + 213 * OS1_S1 + 63) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 63) +
                one_over_two_q * *(b + 158 * OS1_S1 + 38);
            *(b + 158 * OS1_S1 + 97) =
                prefactor_y * *(b + 158 * OS1_S1 + 65) -
                p_over_q * *(b + 212 * OS1_S1 + 65) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 65);
            *(b + 158 * OS1_S1 + 98) =
                prefactor_x * *(b + 158 * OS1_S1 + 70) -
                p_over_q * *(b + 203 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 49);
            *(b + 158 * OS1_S1 + 99) =
                prefactor_x * *(b + 158 * OS1_S1 + 71) -
                p_over_q * *(b + 203 * OS1_S1 + 71) +
                one_over_two_q * *(b + 158 * OS1_S1 + 50);
            *(b + 158 * OS1_S1 + 100) =
                prefactor_z * *(b + 158 * OS1_S1 + 66) -
                p_over_q * *(b + 213 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 66);
            *(b + 158 * OS1_S1 + 101) =
                prefactor_x * *(b + 158 * OS1_S1 + 73) -
                p_over_q * *(b + 203 * OS1_S1 + 73) +
                one_over_two_q * *(b + 158 * OS1_S1 + 52);
            *(b + 158 * OS1_S1 + 102) =
                prefactor_x * *(b + 158 * OS1_S1 + 74) -
                p_over_q * *(b + 203 * OS1_S1 + 74) +
                one_over_two_q * *(b + 158 * OS1_S1 + 53);
            *(b + 158 * OS1_S1 + 103) =
                prefactor_y * *(b + 158 * OS1_S1 + 70) -
                p_over_q * *(b + 212 * OS1_S1 + 70) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 70);
            *(b + 158 * OS1_S1 + 104) =
                prefactor_x * *(b + 158 * OS1_S1 + 76) -
                p_over_q * *(b + 203 * OS1_S1 + 76) +
                one_over_two_q * *(b + 158 * OS1_S1 + 55);
            *(b + 158 * OS1_S1 + 105) = prefactor_x * *(b + 158 * OS1_S1 + 77) -
                                        p_over_q * *(b + 203 * OS1_S1 + 77);
            *(b + 158 * OS1_S1 + 106) = prefactor_x * *(b + 158 * OS1_S1 + 78) -
                                        p_over_q * *(b + 203 * OS1_S1 + 78);
            *(b + 158 * OS1_S1 + 107) = prefactor_x * *(b + 158 * OS1_S1 + 79) -
                                        p_over_q * *(b + 203 * OS1_S1 + 79);
            *(b + 158 * OS1_S1 + 108) = prefactor_x * *(b + 158 * OS1_S1 + 80) -
                                        p_over_q * *(b + 203 * OS1_S1 + 80);
            *(b + 158 * OS1_S1 + 109) = prefactor_x * *(b + 158 * OS1_S1 + 81) -
                                        p_over_q * *(b + 203 * OS1_S1 + 81);
            *(b + 158 * OS1_S1 + 110) = prefactor_x * *(b + 158 * OS1_S1 + 82) -
                                        p_over_q * *(b + 203 * OS1_S1 + 82);
            *(b + 158 * OS1_S1 + 111) = prefactor_x * *(b + 158 * OS1_S1 + 83) -
                                        p_over_q * *(b + 203 * OS1_S1 + 83);
            *(b + 158 * OS1_S1 + 112) =
                prefactor_y * *(b + 158 * OS1_S1 + 77) -
                p_over_q * *(b + 212 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 158 * OS1_S1 + 50);
            *(b + 158 * OS1_S1 + 113) =
                prefactor_z * *(b + 158 * OS1_S1 + 77) -
                p_over_q * *(b + 213 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 77);
            *(b + 158 * OS1_S1 + 114) =
                prefactor_z * *(b + 158 * OS1_S1 + 78) -
                p_over_q * *(b + 213 * OS1_S1 + 78) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 78) +
                one_over_two_q * *(b + 158 * OS1_S1 + 50);
            *(b + 158 * OS1_S1 + 115) =
                prefactor_z * *(b + 158 * OS1_S1 + 79) -
                p_over_q * *(b + 213 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 51);
            *(b + 158 * OS1_S1 + 116) =
                prefactor_y * *(b + 158 * OS1_S1 + 81) -
                p_over_q * *(b + 212 * OS1_S1 + 81) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 54);
            *(b + 158 * OS1_S1 + 117) =
                prefactor_y * *(b + 158 * OS1_S1 + 82) -
                p_over_q * *(b + 212 * OS1_S1 + 82) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 82) +
                one_over_two_q * *(b + 158 * OS1_S1 + 55);
            *(b + 158 * OS1_S1 + 118) =
                prefactor_y * *(b + 158 * OS1_S1 + 83) -
                p_over_q * *(b + 212 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 83);
            *(b + 158 * OS1_S1 + 119) =
                prefactor_z * *(b + 158 * OS1_S1 + 83) -
                p_over_q * *(b + 213 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 158 * OS1_S1 + 55);
            *(b + 159 * OS1_S1 + 84) =
                prefactor_x * *(b + 159 * OS1_S1 + 56) -
                p_over_q * *(b + 204 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 35);
            *(b + 159 * OS1_S1 + 85) =
                prefactor_y * *(b + 159 * OS1_S1 + 56) -
                p_over_q * *(b + 213 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 56);
            *(b + 159 * OS1_S1 + 86) =
                prefactor_z * *(b + 159 * OS1_S1 + 56) -
                p_over_q * *(b + 214 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 56);
            *(b + 159 * OS1_S1 + 87) =
                prefactor_y * *(b + 159 * OS1_S1 + 57) -
                p_over_q * *(b + 213 * OS1_S1 + 57) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 57) +
                one_over_two_q * *(b + 159 * OS1_S1 + 35);
            *(b + 159 * OS1_S1 + 88) =
                prefactor_z * *(b + 159 * OS1_S1 + 57) -
                p_over_q * *(b + 214 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 57);
            *(b + 159 * OS1_S1 + 89) =
                prefactor_z * *(b + 159 * OS1_S1 + 58) -
                p_over_q * *(b + 214 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 58) +
                one_over_two_q * *(b + 159 * OS1_S1 + 35);
            *(b + 159 * OS1_S1 + 90) =
                prefactor_y * *(b + 159 * OS1_S1 + 59) -
                p_over_q * *(b + 213 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 36);
            *(b + 159 * OS1_S1 + 91) =
                prefactor_z * *(b + 159 * OS1_S1 + 59) -
                p_over_q * *(b + 214 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 59);
            *(b + 159 * OS1_S1 + 92) =
                prefactor_y * *(b + 159 * OS1_S1 + 61) -
                p_over_q * *(b + 213 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 61);
            *(b + 159 * OS1_S1 + 93) =
                prefactor_z * *(b + 159 * OS1_S1 + 61) -
                p_over_q * *(b + 214 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 37);
            *(b + 159 * OS1_S1 + 94) =
                prefactor_x * *(b + 159 * OS1_S1 + 66) -
                p_over_q * *(b + 204 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 45);
            *(b + 159 * OS1_S1 + 95) =
                prefactor_z * *(b + 159 * OS1_S1 + 62) -
                p_over_q * *(b + 214 * OS1_S1 + 62) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 62);
            *(b + 159 * OS1_S1 + 96) =
                prefactor_z * *(b + 159 * OS1_S1 + 63) -
                p_over_q * *(b + 214 * OS1_S1 + 63) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 63) +
                one_over_two_q * *(b + 159 * OS1_S1 + 38);
            *(b + 159 * OS1_S1 + 97) =
                prefactor_y * *(b + 159 * OS1_S1 + 65) -
                p_over_q * *(b + 213 * OS1_S1 + 65) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 65);
            *(b + 159 * OS1_S1 + 98) =
                prefactor_x * *(b + 159 * OS1_S1 + 70) -
                p_over_q * *(b + 204 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 49);
            *(b + 159 * OS1_S1 + 99) =
                prefactor_x * *(b + 159 * OS1_S1 + 71) -
                p_over_q * *(b + 204 * OS1_S1 + 71) +
                one_over_two_q * *(b + 159 * OS1_S1 + 50);
            *(b + 159 * OS1_S1 + 100) =
                prefactor_z * *(b + 159 * OS1_S1 + 66) -
                p_over_q * *(b + 214 * OS1_S1 + 66) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 66);
            *(b + 159 * OS1_S1 + 101) =
                prefactor_x * *(b + 159 * OS1_S1 + 73) -
                p_over_q * *(b + 204 * OS1_S1 + 73) +
                one_over_two_q * *(b + 159 * OS1_S1 + 52);
            *(b + 159 * OS1_S1 + 102) =
                prefactor_x * *(b + 159 * OS1_S1 + 74) -
                p_over_q * *(b + 204 * OS1_S1 + 74) +
                one_over_two_q * *(b + 159 * OS1_S1 + 53);
            *(b + 159 * OS1_S1 + 103) =
                prefactor_y * *(b + 159 * OS1_S1 + 70) -
                p_over_q * *(b + 213 * OS1_S1 + 70) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 70);
            *(b + 159 * OS1_S1 + 104) =
                prefactor_x * *(b + 159 * OS1_S1 + 76) -
                p_over_q * *(b + 204 * OS1_S1 + 76) +
                one_over_two_q * *(b + 159 * OS1_S1 + 55);
            *(b + 159 * OS1_S1 + 105) = prefactor_x * *(b + 159 * OS1_S1 + 77) -
                                        p_over_q * *(b + 204 * OS1_S1 + 77);
            *(b + 159 * OS1_S1 + 106) = prefactor_x * *(b + 159 * OS1_S1 + 78) -
                                        p_over_q * *(b + 204 * OS1_S1 + 78);
            *(b + 159 * OS1_S1 + 107) = prefactor_x * *(b + 159 * OS1_S1 + 79) -
                                        p_over_q * *(b + 204 * OS1_S1 + 79);
            *(b + 159 * OS1_S1 + 108) = prefactor_x * *(b + 159 * OS1_S1 + 80) -
                                        p_over_q * *(b + 204 * OS1_S1 + 80);
            *(b + 159 * OS1_S1 + 109) = prefactor_x * *(b + 159 * OS1_S1 + 81) -
                                        p_over_q * *(b + 204 * OS1_S1 + 81);
            *(b + 159 * OS1_S1 + 110) = prefactor_x * *(b + 159 * OS1_S1 + 82) -
                                        p_over_q * *(b + 204 * OS1_S1 + 82);
            *(b + 159 * OS1_S1 + 111) = prefactor_x * *(b + 159 * OS1_S1 + 83) -
                                        p_over_q * *(b + 204 * OS1_S1 + 83);
            *(b + 159 * OS1_S1 + 112) =
                prefactor_y * *(b + 159 * OS1_S1 + 77) -
                p_over_q * *(b + 213 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 50);
            *(b + 159 * OS1_S1 + 113) =
                prefactor_z * *(b + 159 * OS1_S1 + 77) -
                p_over_q * *(b + 214 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 77);
            *(b + 159 * OS1_S1 + 114) =
                prefactor_z * *(b + 159 * OS1_S1 + 78) -
                p_over_q * *(b + 214 * OS1_S1 + 78) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 78) +
                one_over_two_q * *(b + 159 * OS1_S1 + 50);
            *(b + 159 * OS1_S1 + 115) =
                prefactor_z * *(b + 159 * OS1_S1 + 79) -
                p_over_q * *(b + 214 * OS1_S1 + 79) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 51);
            *(b + 159 * OS1_S1 + 116) =
                prefactor_y * *(b + 159 * OS1_S1 + 81) -
                p_over_q * *(b + 213 * OS1_S1 + 81) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 54);
            *(b + 159 * OS1_S1 + 117) =
                prefactor_y * *(b + 159 * OS1_S1 + 82) -
                p_over_q * *(b + 213 * OS1_S1 + 82) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 82) +
                one_over_two_q * *(b + 159 * OS1_S1 + 55);
            *(b + 159 * OS1_S1 + 118) =
                prefactor_y * *(b + 159 * OS1_S1 + 83) -
                p_over_q * *(b + 213 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 83);
            *(b + 159 * OS1_S1 + 119) =
                prefactor_z * *(b + 159 * OS1_S1 + 83) -
                p_over_q * *(b + 214 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 55);
            *(b + 160 * OS1_S1 + 84) =
                prefactor_x * *(b + 160 * OS1_S1 + 56) -
                p_over_q * *(b + 205 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 160 * OS1_S1 + 35);
            *(b + 160 * OS1_S1 + 85) =
                prefactor_y * *(b + 160 * OS1_S1 + 56) -
                p_over_q * *(b + 214 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 56);
            *(b + 160 * OS1_S1 + 86) =
                prefactor_z * *(b + 160 * OS1_S1 + 56) -
                p_over_q * *(b + 215 * OS1_S1 + 56) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 56);
            *(b + 160 * OS1_S1 + 87) =
                prefactor_y * *(b + 160 * OS1_S1 + 57) -
                p_over_q * *(b + 214 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 57) +
                one_over_two_q * *(b + 160 * OS1_S1 + 35);
            *(b + 160 * OS1_S1 + 88) =
                prefactor_z * *(b + 160 * OS1_S1 + 57) -
                p_over_q * *(b + 215 * OS1_S1 + 57) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 57);
            *(b + 160 * OS1_S1 + 89) =
                prefactor_z * *(b + 160 * OS1_S1 + 58) -
                p_over_q * *(b + 215 * OS1_S1 + 58) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 58) +
                one_over_two_q * *(b + 160 * OS1_S1 + 35);
            *(b + 160 * OS1_S1 + 90) =
                prefactor_y * *(b + 160 * OS1_S1 + 59) -
                p_over_q * *(b + 214 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 36);
            *(b + 160 * OS1_S1 + 91) =
                prefactor_z * *(b + 160 * OS1_S1 + 59) -
                p_over_q * *(b + 215 * OS1_S1 + 59) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 59);
            *(b + 160 * OS1_S1 + 92) =
                prefactor_y * *(b + 160 * OS1_S1 + 61) -
                p_over_q * *(b + 214 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 61);
            *(b + 160 * OS1_S1 + 93) =
                prefactor_z * *(b + 160 * OS1_S1 + 61) -
                p_over_q * *(b + 215 * OS1_S1 + 61) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 37);
            *(b + 160 * OS1_S1 + 94) =
                prefactor_x * *(b + 160 * OS1_S1 + 66) -
                p_over_q * *(b + 205 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 45);
            *(b + 160 * OS1_S1 + 95) =
                prefactor_z * *(b + 160 * OS1_S1 + 62) -
                p_over_q * *(b + 215 * OS1_S1 + 62) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 62);
            *(b + 160 * OS1_S1 + 96) =
                prefactor_z * *(b + 160 * OS1_S1 + 63) -
                p_over_q * *(b + 215 * OS1_S1 + 63) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 63) +
                one_over_two_q * *(b + 160 * OS1_S1 + 38);
            *(b + 160 * OS1_S1 + 97) =
                prefactor_y * *(b + 160 * OS1_S1 + 65) -
                p_over_q * *(b + 214 * OS1_S1 + 65) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 65);
            *(b + 160 * OS1_S1 + 98) =
                prefactor_x * *(b + 160 * OS1_S1 + 70) -
                p_over_q * *(b + 205 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 49);
            *(b + 160 * OS1_S1 + 99) =
                prefactor_x * *(b + 160 * OS1_S1 + 71) -
                p_over_q * *(b + 205 * OS1_S1 + 71) +
                one_over_two_q * *(b + 160 * OS1_S1 + 50);
            *(b + 160 * OS1_S1 + 100) =
                prefactor_z * *(b + 160 * OS1_S1 + 66) -
                p_over_q * *(b + 215 * OS1_S1 + 66) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 66);
            *(b + 160 * OS1_S1 + 101) =
                prefactor_x * *(b + 160 * OS1_S1 + 73) -
                p_over_q * *(b + 205 * OS1_S1 + 73) +
                one_over_two_q * *(b + 160 * OS1_S1 + 52);
            *(b + 160 * OS1_S1 + 102) =
                prefactor_x * *(b + 160 * OS1_S1 + 74) -
                p_over_q * *(b + 205 * OS1_S1 + 74) +
                one_over_two_q * *(b + 160 * OS1_S1 + 53);
            *(b + 160 * OS1_S1 + 103) =
                prefactor_y * *(b + 160 * OS1_S1 + 70) -
                p_over_q * *(b + 214 * OS1_S1 + 70) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 70);
            *(b + 160 * OS1_S1 + 104) =
                prefactor_x * *(b + 160 * OS1_S1 + 76) -
                p_over_q * *(b + 205 * OS1_S1 + 76) +
                one_over_two_q * *(b + 160 * OS1_S1 + 55);
            *(b + 160 * OS1_S1 + 105) = prefactor_x * *(b + 160 * OS1_S1 + 77) -
                                        p_over_q * *(b + 205 * OS1_S1 + 77);
            *(b + 160 * OS1_S1 + 106) = prefactor_x * *(b + 160 * OS1_S1 + 78) -
                                        p_over_q * *(b + 205 * OS1_S1 + 78);
            *(b + 160 * OS1_S1 + 107) = prefactor_x * *(b + 160 * OS1_S1 + 79) -
                                        p_over_q * *(b + 205 * OS1_S1 + 79);
            *(b + 160 * OS1_S1 + 108) = prefactor_x * *(b + 160 * OS1_S1 + 80) -
                                        p_over_q * *(b + 205 * OS1_S1 + 80);
            *(b + 160 * OS1_S1 + 109) = prefactor_x * *(b + 160 * OS1_S1 + 81) -
                                        p_over_q * *(b + 205 * OS1_S1 + 81);
            *(b + 160 * OS1_S1 + 110) = prefactor_x * *(b + 160 * OS1_S1 + 82) -
                                        p_over_q * *(b + 205 * OS1_S1 + 82);
            *(b + 160 * OS1_S1 + 111) = prefactor_x * *(b + 160 * OS1_S1 + 83) -
                                        p_over_q * *(b + 205 * OS1_S1 + 83);
            *(b + 160 * OS1_S1 + 112) =
                prefactor_y * *(b + 160 * OS1_S1 + 77) -
                p_over_q * *(b + 214 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 160 * OS1_S1 + 50);
            *(b + 160 * OS1_S1 + 113) =
                prefactor_z * *(b + 160 * OS1_S1 + 77) -
                p_over_q * *(b + 215 * OS1_S1 + 77) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 77);
            *(b + 160 * OS1_S1 + 114) =
                prefactor_z * *(b + 160 * OS1_S1 + 78) -
                p_over_q * *(b + 215 * OS1_S1 + 78) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 78) +
                one_over_two_q * *(b + 160 * OS1_S1 + 50);
            *(b + 160 * OS1_S1 + 115) =
                prefactor_z * *(b + 160 * OS1_S1 + 79) -
                p_over_q * *(b + 215 * OS1_S1 + 79) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 51);
            *(b + 160 * OS1_S1 + 116) =
                prefactor_y * *(b + 160 * OS1_S1 + 81) -
                p_over_q * *(b + 214 * OS1_S1 + 81) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 54);
            *(b + 160 * OS1_S1 + 117) =
                prefactor_y * *(b + 160 * OS1_S1 + 82) -
                p_over_q * *(b + 214 * OS1_S1 + 82) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 82) +
                one_over_two_q * *(b + 160 * OS1_S1 + 55);
            *(b + 160 * OS1_S1 + 118) =
                prefactor_y * *(b + 160 * OS1_S1 + 83) -
                p_over_q * *(b + 214 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 83);
            *(b + 160 * OS1_S1 + 119) =
                prefactor_z * *(b + 160 * OS1_S1 + 83) -
                p_over_q * *(b + 215 * OS1_S1 + 83) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 160 * OS1_S1 + 55);
            *(b + 161 * OS1_S1 + 84) =
                prefactor_x * *(b + 161 * OS1_S1 + 56) -
                p_over_q * *(b + 206 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 35);
            *(b + 161 * OS1_S1 + 85) =
                prefactor_y * *(b + 161 * OS1_S1 + 56) -
                p_over_q * *(b + 215 * OS1_S1 + 56) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 56);
            *(b + 161 * OS1_S1 + 86) =
                prefactor_z * *(b + 161 * OS1_S1 + 56) -
                p_over_q * *(b + 216 * OS1_S1 + 56) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 56);
            *(b + 161 * OS1_S1 + 87) =
                prefactor_y * *(b + 161 * OS1_S1 + 57) -
                p_over_q * *(b + 215 * OS1_S1 + 57) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 57) +
                one_over_two_q * *(b + 161 * OS1_S1 + 35);
            *(b + 161 * OS1_S1 + 88) =
                prefactor_y * *(b + 161 * OS1_S1 + 58) -
                p_over_q * *(b + 215 * OS1_S1 + 58) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 58);
            *(b + 161 * OS1_S1 + 89) =
                prefactor_z * *(b + 161 * OS1_S1 + 58) -
                p_over_q * *(b + 216 * OS1_S1 + 58) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 58) +
                one_over_two_q * *(b + 161 * OS1_S1 + 35);
            *(b + 161 * OS1_S1 + 90) =
                prefactor_y * *(b + 161 * OS1_S1 + 59) -
                p_over_q * *(b + 215 * OS1_S1 + 59) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 36);
            *(b + 161 * OS1_S1 + 91) =
                prefactor_z * *(b + 161 * OS1_S1 + 59) -
                p_over_q * *(b + 216 * OS1_S1 + 59) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 59);
            *(b + 161 * OS1_S1 + 92) =
                prefactor_y * *(b + 161 * OS1_S1 + 61) -
                p_over_q * *(b + 215 * OS1_S1 + 61) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 61);
            *(b + 161 * OS1_S1 + 93) =
                prefactor_z * *(b + 161 * OS1_S1 + 61) -
                p_over_q * *(b + 216 * OS1_S1 + 61) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 37);
            *(b + 161 * OS1_S1 + 94) =
                prefactor_x * *(b + 161 * OS1_S1 + 66) -
                p_over_q * *(b + 206 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 45);
            *(b + 161 * OS1_S1 + 95) =
                prefactor_z * *(b + 161 * OS1_S1 + 62) -
                p_over_q * *(b + 216 * OS1_S1 + 62) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 62);
            *(b + 161 * OS1_S1 + 96) =
                prefactor_y * *(b + 161 * OS1_S1 + 64) -
                p_over_q * *(b + 215 * OS1_S1 + 64) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 64) +
                one_over_two_q * *(b + 161 * OS1_S1 + 40);
            *(b + 161 * OS1_S1 + 97) =
                prefactor_y * *(b + 161 * OS1_S1 + 65) -
                p_over_q * *(b + 215 * OS1_S1 + 65) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 65);
            *(b + 161 * OS1_S1 + 98) =
                prefactor_x * *(b + 161 * OS1_S1 + 70) -
                p_over_q * *(b + 206 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 49);
            *(b + 161 * OS1_S1 + 99) =
                prefactor_x * *(b + 161 * OS1_S1 + 71) -
                p_over_q * *(b + 206 * OS1_S1 + 71) +
                one_over_two_q * *(b + 161 * OS1_S1 + 50);
            *(b + 161 * OS1_S1 + 100) =
                prefactor_z * *(b + 161 * OS1_S1 + 66) -
                p_over_q * *(b + 216 * OS1_S1 + 66) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 66);
            *(b + 161 * OS1_S1 + 101) =
                prefactor_x * *(b + 161 * OS1_S1 + 73) -
                p_over_q * *(b + 206 * OS1_S1 + 73) +
                one_over_two_q * *(b + 161 * OS1_S1 + 52);
            *(b + 161 * OS1_S1 + 102) =
                prefactor_x * *(b + 161 * OS1_S1 + 74) -
                p_over_q * *(b + 206 * OS1_S1 + 74) +
                one_over_two_q * *(b + 161 * OS1_S1 + 53);
            *(b + 161 * OS1_S1 + 103) =
                prefactor_y * *(b + 161 * OS1_S1 + 70) -
                p_over_q * *(b + 215 * OS1_S1 + 70) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 70);
            *(b + 161 * OS1_S1 + 104) =
                prefactor_x * *(b + 161 * OS1_S1 + 76) -
                p_over_q * *(b + 206 * OS1_S1 + 76) +
                one_over_two_q * *(b + 161 * OS1_S1 + 55);
            *(b + 161 * OS1_S1 + 105) = prefactor_x * *(b + 161 * OS1_S1 + 77) -
                                        p_over_q * *(b + 206 * OS1_S1 + 77);
            *(b + 161 * OS1_S1 + 106) = prefactor_x * *(b + 161 * OS1_S1 + 78) -
                                        p_over_q * *(b + 206 * OS1_S1 + 78);
            *(b + 161 * OS1_S1 + 107) = prefactor_x * *(b + 161 * OS1_S1 + 79) -
                                        p_over_q * *(b + 206 * OS1_S1 + 79);
            *(b + 161 * OS1_S1 + 108) = prefactor_x * *(b + 161 * OS1_S1 + 80) -
                                        p_over_q * *(b + 206 * OS1_S1 + 80);
            *(b + 161 * OS1_S1 + 109) = prefactor_x * *(b + 161 * OS1_S1 + 81) -
                                        p_over_q * *(b + 206 * OS1_S1 + 81);
            *(b + 161 * OS1_S1 + 110) = prefactor_x * *(b + 161 * OS1_S1 + 82) -
                                        p_over_q * *(b + 206 * OS1_S1 + 82);
            *(b + 161 * OS1_S1 + 111) = prefactor_x * *(b + 161 * OS1_S1 + 83) -
                                        p_over_q * *(b + 206 * OS1_S1 + 83);
            *(b + 161 * OS1_S1 + 112) =
                prefactor_y * *(b + 161 * OS1_S1 + 77) -
                p_over_q * *(b + 215 * OS1_S1 + 77) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 50);
            *(b + 161 * OS1_S1 + 113) =
                prefactor_z * *(b + 161 * OS1_S1 + 77) -
                p_over_q * *(b + 216 * OS1_S1 + 77) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 77);
            *(b + 161 * OS1_S1 + 114) =
                prefactor_z * *(b + 161 * OS1_S1 + 78) -
                p_over_q * *(b + 216 * OS1_S1 + 78) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 78) +
                one_over_two_q * *(b + 161 * OS1_S1 + 50);
            *(b + 161 * OS1_S1 + 115) =
                prefactor_z * *(b + 161 * OS1_S1 + 79) -
                p_over_q * *(b + 216 * OS1_S1 + 79) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 51);
            *(b + 161 * OS1_S1 + 116) =
                prefactor_y * *(b + 161 * OS1_S1 + 81) -
                p_over_q * *(b + 215 * OS1_S1 + 81) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 54);
            *(b + 161 * OS1_S1 + 117) =
                prefactor_y * *(b + 161 * OS1_S1 + 82) -
                p_over_q * *(b + 215 * OS1_S1 + 82) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 82) +
                one_over_two_q * *(b + 161 * OS1_S1 + 55);
            *(b + 161 * OS1_S1 + 118) =
                prefactor_y * *(b + 161 * OS1_S1 + 83) -
                p_over_q * *(b + 215 * OS1_S1 + 83) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 83);
            *(b + 161 * OS1_S1 + 119) =
                prefactor_z * *(b + 161 * OS1_S1 + 83) -
                p_over_q * *(b + 216 * OS1_S1 + 83) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 55);
            *(b + 162 * OS1_S1 + 84) =
                prefactor_x * *(b + 162 * OS1_S1 + 56) -
                p_over_q * *(b + 207 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 162 * OS1_S1 + 35);
            *(b + 162 * OS1_S1 + 85) =
                prefactor_y * *(b + 162 * OS1_S1 + 56) -
                p_over_q * *(b + 216 * OS1_S1 + 56) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 56);
            *(b + 162 * OS1_S1 + 86) =
                prefactor_z * *(b + 162 * OS1_S1 + 56) -
                p_over_q * *(b + 217 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 56);
            *(b + 162 * OS1_S1 + 87) =
                prefactor_y * *(b + 162 * OS1_S1 + 57) -
                p_over_q * *(b + 216 * OS1_S1 + 57) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 57) +
                one_over_two_q * *(b + 162 * OS1_S1 + 35);
            *(b + 162 * OS1_S1 + 88) =
                prefactor_y * *(b + 162 * OS1_S1 + 58) -
                p_over_q * *(b + 216 * OS1_S1 + 58) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 58);
            *(b + 162 * OS1_S1 + 89) =
                prefactor_z * *(b + 162 * OS1_S1 + 58) -
                p_over_q * *(b + 217 * OS1_S1 + 58) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 58) +
                one_over_two_q * *(b + 162 * OS1_S1 + 35);
            *(b + 162 * OS1_S1 + 90) =
                prefactor_y * *(b + 162 * OS1_S1 + 59) -
                p_over_q * *(b + 216 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 36);
            *(b + 162 * OS1_S1 + 91) =
                prefactor_z * *(b + 162 * OS1_S1 + 59) -
                p_over_q * *(b + 217 * OS1_S1 + 59) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 59);
            *(b + 162 * OS1_S1 + 92) =
                prefactor_y * *(b + 162 * OS1_S1 + 61) -
                p_over_q * *(b + 216 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 61);
            *(b + 162 * OS1_S1 + 93) =
                prefactor_z * *(b + 162 * OS1_S1 + 61) -
                p_over_q * *(b + 217 * OS1_S1 + 61) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 37);
            *(b + 162 * OS1_S1 + 94) =
                prefactor_x * *(b + 162 * OS1_S1 + 66) -
                p_over_q * *(b + 207 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 45);
            *(b + 162 * OS1_S1 + 95) =
                prefactor_z * *(b + 162 * OS1_S1 + 62) -
                p_over_q * *(b + 217 * OS1_S1 + 62) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 62);
            *(b + 162 * OS1_S1 + 96) =
                prefactor_y * *(b + 162 * OS1_S1 + 64) -
                p_over_q * *(b + 216 * OS1_S1 + 64) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 64) +
                one_over_two_q * *(b + 162 * OS1_S1 + 40);
            *(b + 162 * OS1_S1 + 97) =
                prefactor_y * *(b + 162 * OS1_S1 + 65) -
                p_over_q * *(b + 216 * OS1_S1 + 65) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 65);
            *(b + 162 * OS1_S1 + 98) =
                prefactor_x * *(b + 162 * OS1_S1 + 70) -
                p_over_q * *(b + 207 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 49);
            *(b + 162 * OS1_S1 + 99) =
                prefactor_x * *(b + 162 * OS1_S1 + 71) -
                p_over_q * *(b + 207 * OS1_S1 + 71) +
                one_over_two_q * *(b + 162 * OS1_S1 + 50);
            *(b + 162 * OS1_S1 + 100) =
                prefactor_z * *(b + 162 * OS1_S1 + 66) -
                p_over_q * *(b + 217 * OS1_S1 + 66) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 66);
            *(b + 162 * OS1_S1 + 101) =
                prefactor_x * *(b + 162 * OS1_S1 + 73) -
                p_over_q * *(b + 207 * OS1_S1 + 73) +
                one_over_two_q * *(b + 162 * OS1_S1 + 52);
            *(b + 162 * OS1_S1 + 102) =
                prefactor_x * *(b + 162 * OS1_S1 + 74) -
                p_over_q * *(b + 207 * OS1_S1 + 74) +
                one_over_two_q * *(b + 162 * OS1_S1 + 53);
            *(b + 162 * OS1_S1 + 103) =
                prefactor_y * *(b + 162 * OS1_S1 + 70) -
                p_over_q * *(b + 216 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 70);
            *(b + 162 * OS1_S1 + 104) =
                prefactor_x * *(b + 162 * OS1_S1 + 76) -
                p_over_q * *(b + 207 * OS1_S1 + 76) +
                one_over_two_q * *(b + 162 * OS1_S1 + 55);
            *(b + 162 * OS1_S1 + 105) = prefactor_x * *(b + 162 * OS1_S1 + 77) -
                                        p_over_q * *(b + 207 * OS1_S1 + 77);
            *(b + 162 * OS1_S1 + 106) = prefactor_x * *(b + 162 * OS1_S1 + 78) -
                                        p_over_q * *(b + 207 * OS1_S1 + 78);
            *(b + 162 * OS1_S1 + 107) = prefactor_x * *(b + 162 * OS1_S1 + 79) -
                                        p_over_q * *(b + 207 * OS1_S1 + 79);
            *(b + 162 * OS1_S1 + 108) = prefactor_x * *(b + 162 * OS1_S1 + 80) -
                                        p_over_q * *(b + 207 * OS1_S1 + 80);
            *(b + 162 * OS1_S1 + 109) = prefactor_x * *(b + 162 * OS1_S1 + 81) -
                                        p_over_q * *(b + 207 * OS1_S1 + 81);
            *(b + 162 * OS1_S1 + 110) = prefactor_x * *(b + 162 * OS1_S1 + 82) -
                                        p_over_q * *(b + 207 * OS1_S1 + 82);
            *(b + 162 * OS1_S1 + 111) = prefactor_x * *(b + 162 * OS1_S1 + 83) -
                                        p_over_q * *(b + 207 * OS1_S1 + 83);
            *(b + 162 * OS1_S1 + 112) =
                prefactor_y * *(b + 162 * OS1_S1 + 77) -
                p_over_q * *(b + 216 * OS1_S1 + 77) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 162 * OS1_S1 + 50);
            *(b + 162 * OS1_S1 + 113) =
                prefactor_z * *(b + 162 * OS1_S1 + 77) -
                p_over_q * *(b + 217 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 77);
            *(b + 162 * OS1_S1 + 114) =
                prefactor_z * *(b + 162 * OS1_S1 + 78) -
                p_over_q * *(b + 217 * OS1_S1 + 78) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 78) +
                one_over_two_q * *(b + 162 * OS1_S1 + 50);
            *(b + 162 * OS1_S1 + 115) =
                prefactor_z * *(b + 162 * OS1_S1 + 79) -
                p_over_q * *(b + 217 * OS1_S1 + 79) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 51);
            *(b + 162 * OS1_S1 + 116) =
                prefactor_y * *(b + 162 * OS1_S1 + 81) -
                p_over_q * *(b + 216 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 54);
            *(b + 162 * OS1_S1 + 117) =
                prefactor_y * *(b + 162 * OS1_S1 + 82) -
                p_over_q * *(b + 216 * OS1_S1 + 82) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 82) +
                one_over_two_q * *(b + 162 * OS1_S1 + 55);
            *(b + 162 * OS1_S1 + 118) =
                prefactor_y * *(b + 162 * OS1_S1 + 83) -
                p_over_q * *(b + 216 * OS1_S1 + 83) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 83);
            *(b + 162 * OS1_S1 + 119) =
                prefactor_z * *(b + 162 * OS1_S1 + 83) -
                p_over_q * *(b + 217 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 162 * OS1_S1 + 55);
            *(b + 163 * OS1_S1 + 84) =
                prefactor_x * *(b + 163 * OS1_S1 + 56) -
                p_over_q * *(b + 208 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 163 * OS1_S1 + 35);
            *(b + 163 * OS1_S1 + 85) =
                prefactor_y * *(b + 163 * OS1_S1 + 56) -
                p_over_q * *(b + 217 * OS1_S1 + 56) +
                one_over_two_q * *(b + 119 * OS1_S1 + 56);
            *(b + 163 * OS1_S1 + 86) =
                prefactor_z * *(b + 163 * OS1_S1 + 56) -
                p_over_q * *(b + 218 * OS1_S1 + 56) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 56);
            *(b + 163 * OS1_S1 + 87) =
                prefactor_y * *(b + 163 * OS1_S1 + 57) -
                p_over_q * *(b + 217 * OS1_S1 + 57) +
                one_over_two_q * *(b + 119 * OS1_S1 + 57) +
                one_over_two_q * *(b + 163 * OS1_S1 + 35);
            *(b + 163 * OS1_S1 + 88) =
                prefactor_y * *(b + 163 * OS1_S1 + 58) -
                p_over_q * *(b + 217 * OS1_S1 + 58) +
                one_over_two_q * *(b + 119 * OS1_S1 + 58);
            *(b + 163 * OS1_S1 + 89) =
                prefactor_z * *(b + 163 * OS1_S1 + 58) -
                p_over_q * *(b + 218 * OS1_S1 + 58) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 58) +
                one_over_two_q * *(b + 163 * OS1_S1 + 35);
            *(b + 163 * OS1_S1 + 90) =
                prefactor_y * *(b + 163 * OS1_S1 + 59) -
                p_over_q * *(b + 217 * OS1_S1 + 59) +
                one_over_two_q * *(b + 119 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 36);
            *(b + 163 * OS1_S1 + 91) =
                prefactor_z * *(b + 163 * OS1_S1 + 59) -
                p_over_q * *(b + 218 * OS1_S1 + 59) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 59);
            *(b + 163 * OS1_S1 + 92) =
                prefactor_y * *(b + 163 * OS1_S1 + 61) -
                p_over_q * *(b + 217 * OS1_S1 + 61) +
                one_over_two_q * *(b + 119 * OS1_S1 + 61);
            *(b + 163 * OS1_S1 + 93) =
                prefactor_z * *(b + 163 * OS1_S1 + 61) -
                p_over_q * *(b + 218 * OS1_S1 + 61) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 37);
            *(b + 163 * OS1_S1 + 94) =
                prefactor_x * *(b + 163 * OS1_S1 + 66) -
                p_over_q * *(b + 208 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 45);
            *(b + 163 * OS1_S1 + 95) =
                prefactor_z * *(b + 163 * OS1_S1 + 62) -
                p_over_q * *(b + 218 * OS1_S1 + 62) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 62);
            *(b + 163 * OS1_S1 + 96) =
                prefactor_y * *(b + 163 * OS1_S1 + 64) -
                p_over_q * *(b + 217 * OS1_S1 + 64) +
                one_over_two_q * *(b + 119 * OS1_S1 + 64) +
                one_over_two_q * *(b + 163 * OS1_S1 + 40);
            *(b + 163 * OS1_S1 + 97) =
                prefactor_y * *(b + 163 * OS1_S1 + 65) -
                p_over_q * *(b + 217 * OS1_S1 + 65) +
                one_over_two_q * *(b + 119 * OS1_S1 + 65);
            *(b + 163 * OS1_S1 + 98) =
                prefactor_x * *(b + 163 * OS1_S1 + 70) -
                p_over_q * *(b + 208 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 49);
            *(b + 163 * OS1_S1 + 99) =
                prefactor_x * *(b + 163 * OS1_S1 + 71) -
                p_over_q * *(b + 208 * OS1_S1 + 71) +
                one_over_two_q * *(b + 163 * OS1_S1 + 50);
            *(b + 163 * OS1_S1 + 100) =
                prefactor_z * *(b + 163 * OS1_S1 + 66) -
                p_over_q * *(b + 218 * OS1_S1 + 66) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 66);
            *(b + 163 * OS1_S1 + 101) =
                prefactor_x * *(b + 163 * OS1_S1 + 73) -
                p_over_q * *(b + 208 * OS1_S1 + 73) +
                one_over_two_q * *(b + 163 * OS1_S1 + 52);
            *(b + 163 * OS1_S1 + 102) =
                prefactor_x * *(b + 163 * OS1_S1 + 74) -
                p_over_q * *(b + 208 * OS1_S1 + 74) +
                one_over_two_q * *(b + 163 * OS1_S1 + 53);
            *(b + 163 * OS1_S1 + 103) =
                prefactor_y * *(b + 163 * OS1_S1 + 70) -
                p_over_q * *(b + 217 * OS1_S1 + 70) +
                one_over_two_q * *(b + 119 * OS1_S1 + 70);
            *(b + 163 * OS1_S1 + 104) =
                prefactor_x * *(b + 163 * OS1_S1 + 76) -
                p_over_q * *(b + 208 * OS1_S1 + 76) +
                one_over_two_q * *(b + 163 * OS1_S1 + 55);
            *(b + 163 * OS1_S1 + 105) = prefactor_x * *(b + 163 * OS1_S1 + 77) -
                                        p_over_q * *(b + 208 * OS1_S1 + 77);
            *(b + 163 * OS1_S1 + 106) = prefactor_x * *(b + 163 * OS1_S1 + 78) -
                                        p_over_q * *(b + 208 * OS1_S1 + 78);
            *(b + 163 * OS1_S1 + 107) = prefactor_x * *(b + 163 * OS1_S1 + 79) -
                                        p_over_q * *(b + 208 * OS1_S1 + 79);
            *(b + 163 * OS1_S1 + 108) = prefactor_x * *(b + 163 * OS1_S1 + 80) -
                                        p_over_q * *(b + 208 * OS1_S1 + 80);
            *(b + 163 * OS1_S1 + 109) = prefactor_x * *(b + 163 * OS1_S1 + 81) -
                                        p_over_q * *(b + 208 * OS1_S1 + 81);
            *(b + 163 * OS1_S1 + 110) = prefactor_x * *(b + 163 * OS1_S1 + 82) -
                                        p_over_q * *(b + 208 * OS1_S1 + 82);
            *(b + 163 * OS1_S1 + 111) = prefactor_x * *(b + 163 * OS1_S1 + 83) -
                                        p_over_q * *(b + 208 * OS1_S1 + 83);
            *(b + 163 * OS1_S1 + 112) =
                prefactor_y * *(b + 163 * OS1_S1 + 77) -
                p_over_q * *(b + 217 * OS1_S1 + 77) +
                one_over_two_q * *(b + 119 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 163 * OS1_S1 + 50);
            *(b + 163 * OS1_S1 + 113) =
                prefactor_z * *(b + 163 * OS1_S1 + 77) -
                p_over_q * *(b + 218 * OS1_S1 + 77) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 77);
            *(b + 163 * OS1_S1 + 114) =
                prefactor_z * *(b + 163 * OS1_S1 + 78) -
                p_over_q * *(b + 218 * OS1_S1 + 78) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 78) +
                one_over_two_q * *(b + 163 * OS1_S1 + 50);
            *(b + 163 * OS1_S1 + 115) =
                prefactor_z * *(b + 163 * OS1_S1 + 79) -
                p_over_q * *(b + 218 * OS1_S1 + 79) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 51);
            *(b + 163 * OS1_S1 + 116) =
                prefactor_y * *(b + 163 * OS1_S1 + 81) -
                p_over_q * *(b + 217 * OS1_S1 + 81) +
                one_over_two_q * *(b + 119 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 54);
            *(b + 163 * OS1_S1 + 117) =
                prefactor_y * *(b + 163 * OS1_S1 + 82) -
                p_over_q * *(b + 217 * OS1_S1 + 82) +
                one_over_two_q * *(b + 119 * OS1_S1 + 82) +
                one_over_two_q * *(b + 163 * OS1_S1 + 55);
            *(b + 163 * OS1_S1 + 118) =
                prefactor_y * *(b + 163 * OS1_S1 + 83) -
                p_over_q * *(b + 217 * OS1_S1 + 83) +
                one_over_two_q * *(b + 119 * OS1_S1 + 83);
            *(b + 163 * OS1_S1 + 119) =
                prefactor_z * *(b + 163 * OS1_S1 + 83) -
                p_over_q * *(b + 218 * OS1_S1 + 83) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 163 * OS1_S1 + 55);
            *(b + 164 * OS1_S1 + 84) =
                prefactor_x * *(b + 164 * OS1_S1 + 56) -
                p_over_q * *(b + 209 * OS1_S1 + 56) +
                6 * one_over_two_q * *(b + 164 * OS1_S1 + 35);
            *(b + 164 * OS1_S1 + 85) = prefactor_y * *(b + 164 * OS1_S1 + 56) -
                                       p_over_q * *(b + 218 * OS1_S1 + 56);
            *(b + 164 * OS1_S1 + 86) =
                prefactor_z * *(b + 164 * OS1_S1 + 56) -
                p_over_q * *(b + 219 * OS1_S1 + 56) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 56);
            *(b + 164 * OS1_S1 + 87) =
                prefactor_y * *(b + 164 * OS1_S1 + 57) -
                p_over_q * *(b + 218 * OS1_S1 + 57) +
                one_over_two_q * *(b + 164 * OS1_S1 + 35);
            *(b + 164 * OS1_S1 + 88) = prefactor_y * *(b + 164 * OS1_S1 + 58) -
                                       p_over_q * *(b + 218 * OS1_S1 + 58);
            *(b + 164 * OS1_S1 + 89) =
                prefactor_z * *(b + 164 * OS1_S1 + 58) -
                p_over_q * *(b + 219 * OS1_S1 + 58) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 58) +
                one_over_two_q * *(b + 164 * OS1_S1 + 35);
            *(b + 164 * OS1_S1 + 90) =
                prefactor_y * *(b + 164 * OS1_S1 + 59) -
                p_over_q * *(b + 218 * OS1_S1 + 59) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 36);
            *(b + 164 * OS1_S1 + 91) =
                prefactor_z * *(b + 164 * OS1_S1 + 59) -
                p_over_q * *(b + 219 * OS1_S1 + 59) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 59);
            *(b + 164 * OS1_S1 + 92) = prefactor_y * *(b + 164 * OS1_S1 + 61) -
                                       p_over_q * *(b + 218 * OS1_S1 + 61);
            *(b + 164 * OS1_S1 + 93) =
                prefactor_z * *(b + 164 * OS1_S1 + 61) -
                p_over_q * *(b + 219 * OS1_S1 + 61) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 61) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 37);
            *(b + 164 * OS1_S1 + 94) =
                prefactor_x * *(b + 164 * OS1_S1 + 66) -
                p_over_q * *(b + 209 * OS1_S1 + 66) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 45);
            *(b + 164 * OS1_S1 + 95) =
                prefactor_z * *(b + 164 * OS1_S1 + 62) -
                p_over_q * *(b + 219 * OS1_S1 + 62) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 62);
            *(b + 164 * OS1_S1 + 96) =
                prefactor_y * *(b + 164 * OS1_S1 + 64) -
                p_over_q * *(b + 218 * OS1_S1 + 64) +
                one_over_two_q * *(b + 164 * OS1_S1 + 40);
            *(b + 164 * OS1_S1 + 97) = prefactor_y * *(b + 164 * OS1_S1 + 65) -
                                       p_over_q * *(b + 218 * OS1_S1 + 65);
            *(b + 164 * OS1_S1 + 98) =
                prefactor_x * *(b + 164 * OS1_S1 + 70) -
                p_over_q * *(b + 209 * OS1_S1 + 70) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 49);
            *(b + 164 * OS1_S1 + 99) =
                prefactor_x * *(b + 164 * OS1_S1 + 71) -
                p_over_q * *(b + 209 * OS1_S1 + 71) +
                one_over_two_q * *(b + 164 * OS1_S1 + 50);
            *(b + 164 * OS1_S1 + 100) =
                prefactor_z * *(b + 164 * OS1_S1 + 66) -
                p_over_q * *(b + 219 * OS1_S1 + 66) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 66);
            *(b + 164 * OS1_S1 + 101) =
                prefactor_x * *(b + 164 * OS1_S1 + 73) -
                p_over_q * *(b + 209 * OS1_S1 + 73) +
                one_over_two_q * *(b + 164 * OS1_S1 + 52);
            *(b + 164 * OS1_S1 + 102) =
                prefactor_y * *(b + 164 * OS1_S1 + 69) -
                p_over_q * *(b + 218 * OS1_S1 + 69) +
                one_over_two_q * *(b + 164 * OS1_S1 + 44);
            *(b + 164 * OS1_S1 + 103) = prefactor_y * *(b + 164 * OS1_S1 + 70) -
                                        p_over_q * *(b + 218 * OS1_S1 + 70);
            *(b + 164 * OS1_S1 + 104) =
                prefactor_x * *(b + 164 * OS1_S1 + 76) -
                p_over_q * *(b + 209 * OS1_S1 + 76) +
                one_over_two_q * *(b + 164 * OS1_S1 + 55);
            *(b + 164 * OS1_S1 + 105) = prefactor_x * *(b + 164 * OS1_S1 + 77) -
                                        p_over_q * *(b + 209 * OS1_S1 + 77);
            *(b + 164 * OS1_S1 + 106) = prefactor_x * *(b + 164 * OS1_S1 + 78) -
                                        p_over_q * *(b + 209 * OS1_S1 + 78);
            *(b + 164 * OS1_S1 + 107) = prefactor_x * *(b + 164 * OS1_S1 + 79) -
                                        p_over_q * *(b + 209 * OS1_S1 + 79);
            *(b + 164 * OS1_S1 + 108) = prefactor_x * *(b + 164 * OS1_S1 + 80) -
                                        p_over_q * *(b + 209 * OS1_S1 + 80);
            *(b + 164 * OS1_S1 + 109) = prefactor_x * *(b + 164 * OS1_S1 + 81) -
                                        p_over_q * *(b + 209 * OS1_S1 + 81);
            *(b + 164 * OS1_S1 + 110) = prefactor_y * *(b + 164 * OS1_S1 + 76) -
                                        p_over_q * *(b + 218 * OS1_S1 + 76);
            *(b + 164 * OS1_S1 + 111) = prefactor_x * *(b + 164 * OS1_S1 + 83) -
                                        p_over_q * *(b + 209 * OS1_S1 + 83);
            *(b + 164 * OS1_S1 + 112) =
                prefactor_y * *(b + 164 * OS1_S1 + 77) -
                p_over_q * *(b + 218 * OS1_S1 + 77) +
                6 * one_over_two_q * *(b + 164 * OS1_S1 + 50);
            *(b + 164 * OS1_S1 + 113) =
                prefactor_z * *(b + 164 * OS1_S1 + 77) -
                p_over_q * *(b + 219 * OS1_S1 + 77) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 77);
            *(b + 164 * OS1_S1 + 114) =
                prefactor_z * *(b + 164 * OS1_S1 + 78) -
                p_over_q * *(b + 219 * OS1_S1 + 78) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 78) +
                one_over_two_q * *(b + 164 * OS1_S1 + 50);
            *(b + 164 * OS1_S1 + 115) =
                prefactor_z * *(b + 164 * OS1_S1 + 79) -
                p_over_q * *(b + 219 * OS1_S1 + 79) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 79) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 51);
            *(b + 164 * OS1_S1 + 116) =
                prefactor_y * *(b + 164 * OS1_S1 + 81) -
                p_over_q * *(b + 218 * OS1_S1 + 81) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 54);
            *(b + 164 * OS1_S1 + 117) =
                prefactor_y * *(b + 164 * OS1_S1 + 82) -
                p_over_q * *(b + 218 * OS1_S1 + 82) +
                one_over_two_q * *(b + 164 * OS1_S1 + 55);
            *(b + 164 * OS1_S1 + 118) = prefactor_y * *(b + 164 * OS1_S1 + 83) -
                                        p_over_q * *(b + 218 * OS1_S1 + 83);
            *(b + 164 * OS1_S1 + 119) =
                prefactor_z * *(b + 164 * OS1_S1 + 83) -
                p_over_q * *(b + 219 * OS1_S1 + 83) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 83) +
                6 * one_over_two_q * *(b + 164 * OS1_S1 + 55);
            return;
        }
    }
}
