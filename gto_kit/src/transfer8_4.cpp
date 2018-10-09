/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_8_8(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 120 * OS1_S1 + 120) =
                prefactor_x * *(b + 120 * OS1_S1 + 84) -
                p_over_q * *(b + 165 * OS1_S1 + 84) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 120 * OS1_S1 + 56);
            *(b + 120 * OS1_S1 + 121) = prefactor_y * *(b + 120 * OS1_S1 + 84) -
                                        p_over_q * *(b + 166 * OS1_S1 + 84);
            *(b + 120 * OS1_S1 + 122) = prefactor_z * *(b + 120 * OS1_S1 + 84) -
                                        p_over_q * *(b + 167 * OS1_S1 + 84);
            *(b + 120 * OS1_S1 + 123) =
                prefactor_y * *(b + 120 * OS1_S1 + 85) -
                p_over_q * *(b + 166 * OS1_S1 + 85) +
                one_over_two_q * *(b + 120 * OS1_S1 + 56);
            *(b + 120 * OS1_S1 + 124) = prefactor_z * *(b + 120 * OS1_S1 + 85) -
                                        p_over_q * *(b + 167 * OS1_S1 + 85);
            *(b + 120 * OS1_S1 + 125) =
                prefactor_z * *(b + 120 * OS1_S1 + 86) -
                p_over_q * *(b + 167 * OS1_S1 + 86) +
                one_over_two_q * *(b + 120 * OS1_S1 + 56);
            *(b + 120 * OS1_S1 + 126) =
                prefactor_y * *(b + 120 * OS1_S1 + 87) -
                p_over_q * *(b + 166 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 57);
            *(b + 120 * OS1_S1 + 127) = prefactor_z * *(b + 120 * OS1_S1 + 87) -
                                        p_over_q * *(b + 167 * OS1_S1 + 87);
            *(b + 120 * OS1_S1 + 128) = prefactor_y * *(b + 120 * OS1_S1 + 89) -
                                        p_over_q * *(b + 166 * OS1_S1 + 89);
            *(b + 120 * OS1_S1 + 129) =
                prefactor_z * *(b + 120 * OS1_S1 + 89) -
                p_over_q * *(b + 167 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 58);
            *(b + 120 * OS1_S1 + 130) =
                prefactor_y * *(b + 120 * OS1_S1 + 90) -
                p_over_q * *(b + 166 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 120 * OS1_S1 + 59);
            *(b + 120 * OS1_S1 + 131) = prefactor_z * *(b + 120 * OS1_S1 + 90) -
                                        p_over_q * *(b + 167 * OS1_S1 + 90);
            *(b + 120 * OS1_S1 + 132) =
                prefactor_z * *(b + 120 * OS1_S1 + 91) -
                p_over_q * *(b + 167 * OS1_S1 + 91) +
                one_over_two_q * *(b + 120 * OS1_S1 + 59);
            *(b + 120 * OS1_S1 + 133) = prefactor_y * *(b + 120 * OS1_S1 + 93) -
                                        p_over_q * *(b + 166 * OS1_S1 + 93);
            *(b + 120 * OS1_S1 + 134) =
                prefactor_z * *(b + 120 * OS1_S1 + 93) -
                p_over_q * *(b + 167 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 120 * OS1_S1 + 61);
            *(b + 120 * OS1_S1 + 135) =
                prefactor_x * *(b + 120 * OS1_S1 + 99) -
                p_over_q * *(b + 165 * OS1_S1 + 99) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 71);
            *(b + 120 * OS1_S1 + 136) = prefactor_z * *(b + 120 * OS1_S1 + 94) -
                                        p_over_q * *(b + 167 * OS1_S1 + 94);
            *(b + 120 * OS1_S1 + 137) =
                prefactor_z * *(b + 120 * OS1_S1 + 95) -
                p_over_q * *(b + 167 * OS1_S1 + 95) +
                one_over_two_q * *(b + 120 * OS1_S1 + 62);
            *(b + 120 * OS1_S1 + 138) =
                prefactor_y * *(b + 120 * OS1_S1 + 97) -
                p_over_q * *(b + 166 * OS1_S1 + 97) +
                one_over_two_q * *(b + 120 * OS1_S1 + 65);
            *(b + 120 * OS1_S1 + 139) = prefactor_y * *(b + 120 * OS1_S1 + 98) -
                                        p_over_q * *(b + 166 * OS1_S1 + 98);
            *(b + 120 * OS1_S1 + 140) =
                prefactor_x * *(b + 120 * OS1_S1 + 104) -
                p_over_q * *(b + 165 * OS1_S1 + 104) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 76);
            *(b + 120 * OS1_S1 + 141) =
                prefactor_x * *(b + 120 * OS1_S1 + 105) -
                p_over_q * *(b + 165 * OS1_S1 + 105) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 105) +
                one_over_two_q * *(b + 120 * OS1_S1 + 77);
            *(b + 120 * OS1_S1 + 142) = prefactor_z * *(b + 120 * OS1_S1 + 99) -
                                        p_over_q * *(b + 167 * OS1_S1 + 99);
            *(b + 120 * OS1_S1 + 143) =
                prefactor_z * *(b + 120 * OS1_S1 + 100) -
                p_over_q * *(b + 167 * OS1_S1 + 100) +
                one_over_two_q * *(b + 120 * OS1_S1 + 66);
            *(b + 120 * OS1_S1 + 144) =
                prefactor_x * *(b + 120 * OS1_S1 + 108) -
                p_over_q * *(b + 165 * OS1_S1 + 108) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 108) +
                one_over_two_q * *(b + 120 * OS1_S1 + 80);
            *(b + 120 * OS1_S1 + 145) =
                prefactor_y * *(b + 120 * OS1_S1 + 103) -
                p_over_q * *(b + 166 * OS1_S1 + 103) +
                one_over_two_q * *(b + 120 * OS1_S1 + 70);
            *(b + 120 * OS1_S1 + 146) =
                prefactor_y * *(b + 120 * OS1_S1 + 104) -
                p_over_q * *(b + 166 * OS1_S1 + 104);
            *(b + 120 * OS1_S1 + 147) =
                prefactor_x * *(b + 120 * OS1_S1 + 111) -
                p_over_q * *(b + 165 * OS1_S1 + 111) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 111) +
                one_over_two_q * *(b + 120 * OS1_S1 + 83);
            *(b + 120 * OS1_S1 + 148) =
                prefactor_x * *(b + 120 * OS1_S1 + 112) -
                p_over_q * *(b + 165 * OS1_S1 + 112) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 112);
            *(b + 120 * OS1_S1 + 149) =
                prefactor_z * *(b + 120 * OS1_S1 + 105) -
                p_over_q * *(b + 167 * OS1_S1 + 105);
            *(b + 120 * OS1_S1 + 150) =
                prefactor_x * *(b + 120 * OS1_S1 + 114) -
                p_over_q * *(b + 165 * OS1_S1 + 114) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 114);
            *(b + 120 * OS1_S1 + 151) =
                prefactor_x * *(b + 120 * OS1_S1 + 115) -
                p_over_q * *(b + 165 * OS1_S1 + 115) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 115);
            *(b + 120 * OS1_S1 + 152) =
                prefactor_x * *(b + 120 * OS1_S1 + 116) -
                p_over_q * *(b + 165 * OS1_S1 + 116) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 116);
            *(b + 120 * OS1_S1 + 153) =
                prefactor_x * *(b + 120 * OS1_S1 + 117) -
                p_over_q * *(b + 165 * OS1_S1 + 117) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 117);
            *(b + 120 * OS1_S1 + 154) =
                prefactor_y * *(b + 120 * OS1_S1 + 111) -
                p_over_q * *(b + 166 * OS1_S1 + 111);
            *(b + 120 * OS1_S1 + 155) =
                prefactor_x * *(b + 120 * OS1_S1 + 119) -
                p_over_q * *(b + 165 * OS1_S1 + 119) +
                8 * one_over_two_q * *(b + 84 * OS1_S1 + 119);
            *(b + 120 * OS1_S1 + 156) =
                prefactor_y * *(b + 120 * OS1_S1 + 112) -
                p_over_q * *(b + 166 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 120 * OS1_S1 + 77);
            *(b + 120 * OS1_S1 + 157) =
                prefactor_z * *(b + 120 * OS1_S1 + 112) -
                p_over_q * *(b + 167 * OS1_S1 + 112);
            *(b + 120 * OS1_S1 + 158) =
                prefactor_z * *(b + 120 * OS1_S1 + 113) -
                p_over_q * *(b + 167 * OS1_S1 + 113) +
                one_over_two_q * *(b + 120 * OS1_S1 + 77);
            *(b + 120 * OS1_S1 + 159) =
                prefactor_z * *(b + 120 * OS1_S1 + 114) -
                p_over_q * *(b + 167 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 78);
            *(b + 120 * OS1_S1 + 160) =
                prefactor_z * *(b + 120 * OS1_S1 + 115) -
                p_over_q * *(b + 167 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 120 * OS1_S1 + 79);
            *(b + 120 * OS1_S1 + 161) =
                prefactor_y * *(b + 120 * OS1_S1 + 117) -
                p_over_q * *(b + 166 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 120 * OS1_S1 + 82);
            *(b + 120 * OS1_S1 + 162) =
                prefactor_y * *(b + 120 * OS1_S1 + 118) -
                p_over_q * *(b + 166 * OS1_S1 + 118) +
                one_over_two_q * *(b + 120 * OS1_S1 + 83);
            *(b + 120 * OS1_S1 + 163) =
                prefactor_y * *(b + 120 * OS1_S1 + 119) -
                p_over_q * *(b + 166 * OS1_S1 + 119);
            *(b + 120 * OS1_S1 + 164) =
                prefactor_z * *(b + 120 * OS1_S1 + 119) -
                p_over_q * *(b + 167 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 120 * OS1_S1 + 83);
            *(b + 121 * OS1_S1 + 120) =
                prefactor_x * *(b + 121 * OS1_S1 + 84) -
                p_over_q * *(b + 166 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 121 * OS1_S1 + 56);
            *(b + 121 * OS1_S1 + 121) =
                prefactor_y * *(b + 121 * OS1_S1 + 84) -
                p_over_q * *(b + 168 * OS1_S1 + 84) +
                one_over_two_q * *(b + 84 * OS1_S1 + 84);
            *(b + 121 * OS1_S1 + 122) = prefactor_z * *(b + 121 * OS1_S1 + 84) -
                                        p_over_q * *(b + 169 * OS1_S1 + 84);
            *(b + 121 * OS1_S1 + 123) =
                prefactor_y * *(b + 121 * OS1_S1 + 85) -
                p_over_q * *(b + 168 * OS1_S1 + 85) +
                one_over_two_q * *(b + 84 * OS1_S1 + 85) +
                one_over_two_q * *(b + 121 * OS1_S1 + 56);
            *(b + 121 * OS1_S1 + 124) = prefactor_z * *(b + 121 * OS1_S1 + 85) -
                                        p_over_q * *(b + 169 * OS1_S1 + 85);
            *(b + 121 * OS1_S1 + 125) =
                prefactor_z * *(b + 121 * OS1_S1 + 86) -
                p_over_q * *(b + 169 * OS1_S1 + 86) +
                one_over_two_q * *(b + 121 * OS1_S1 + 56);
            *(b + 121 * OS1_S1 + 126) =
                prefactor_y * *(b + 121 * OS1_S1 + 87) -
                p_over_q * *(b + 168 * OS1_S1 + 87) +
                one_over_two_q * *(b + 84 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 57);
            *(b + 121 * OS1_S1 + 127) = prefactor_z * *(b + 121 * OS1_S1 + 87) -
                                        p_over_q * *(b + 169 * OS1_S1 + 87);
            *(b + 121 * OS1_S1 + 128) =
                prefactor_y * *(b + 121 * OS1_S1 + 89) -
                p_over_q * *(b + 168 * OS1_S1 + 89) +
                one_over_two_q * *(b + 84 * OS1_S1 + 89);
            *(b + 121 * OS1_S1 + 129) =
                prefactor_z * *(b + 121 * OS1_S1 + 89) -
                p_over_q * *(b + 169 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 58);
            *(b + 121 * OS1_S1 + 130) =
                prefactor_y * *(b + 121 * OS1_S1 + 90) -
                p_over_q * *(b + 168 * OS1_S1 + 90) +
                one_over_two_q * *(b + 84 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 121 * OS1_S1 + 59);
            *(b + 121 * OS1_S1 + 131) = prefactor_z * *(b + 121 * OS1_S1 + 90) -
                                        p_over_q * *(b + 169 * OS1_S1 + 90);
            *(b + 121 * OS1_S1 + 132) =
                prefactor_z * *(b + 121 * OS1_S1 + 91) -
                p_over_q * *(b + 169 * OS1_S1 + 91) +
                one_over_two_q * *(b + 121 * OS1_S1 + 59);
            *(b + 121 * OS1_S1 + 133) =
                prefactor_y * *(b + 121 * OS1_S1 + 93) -
                p_over_q * *(b + 168 * OS1_S1 + 93) +
                one_over_two_q * *(b + 84 * OS1_S1 + 93);
            *(b + 121 * OS1_S1 + 134) =
                prefactor_z * *(b + 121 * OS1_S1 + 93) -
                p_over_q * *(b + 169 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 121 * OS1_S1 + 61);
            *(b + 121 * OS1_S1 + 135) =
                prefactor_x * *(b + 121 * OS1_S1 + 99) -
                p_over_q * *(b + 166 * OS1_S1 + 99) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 71);
            *(b + 121 * OS1_S1 + 136) = prefactor_z * *(b + 121 * OS1_S1 + 94) -
                                        p_over_q * *(b + 169 * OS1_S1 + 94);
            *(b + 121 * OS1_S1 + 137) =
                prefactor_z * *(b + 121 * OS1_S1 + 95) -
                p_over_q * *(b + 169 * OS1_S1 + 95) +
                one_over_two_q * *(b + 121 * OS1_S1 + 62);
            *(b + 121 * OS1_S1 + 138) =
                prefactor_y * *(b + 121 * OS1_S1 + 97) -
                p_over_q * *(b + 168 * OS1_S1 + 97) +
                one_over_two_q * *(b + 84 * OS1_S1 + 97) +
                one_over_two_q * *(b + 121 * OS1_S1 + 65);
            *(b + 121 * OS1_S1 + 139) =
                prefactor_y * *(b + 121 * OS1_S1 + 98) -
                p_over_q * *(b + 168 * OS1_S1 + 98) +
                one_over_two_q * *(b + 84 * OS1_S1 + 98);
            *(b + 121 * OS1_S1 + 140) =
                prefactor_x * *(b + 121 * OS1_S1 + 104) -
                p_over_q * *(b + 166 * OS1_S1 + 104) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 76);
            *(b + 121 * OS1_S1 + 141) =
                prefactor_x * *(b + 121 * OS1_S1 + 105) -
                p_over_q * *(b + 166 * OS1_S1 + 105) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 105) +
                one_over_two_q * *(b + 121 * OS1_S1 + 77);
            *(b + 121 * OS1_S1 + 142) = prefactor_z * *(b + 121 * OS1_S1 + 99) -
                                        p_over_q * *(b + 169 * OS1_S1 + 99);
            *(b + 121 * OS1_S1 + 143) =
                prefactor_z * *(b + 121 * OS1_S1 + 100) -
                p_over_q * *(b + 169 * OS1_S1 + 100) +
                one_over_two_q * *(b + 121 * OS1_S1 + 66);
            *(b + 121 * OS1_S1 + 144) =
                prefactor_x * *(b + 121 * OS1_S1 + 108) -
                p_over_q * *(b + 166 * OS1_S1 + 108) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 108) +
                one_over_two_q * *(b + 121 * OS1_S1 + 80);
            *(b + 121 * OS1_S1 + 145) =
                prefactor_y * *(b + 121 * OS1_S1 + 103) -
                p_over_q * *(b + 168 * OS1_S1 + 103) +
                one_over_two_q * *(b + 84 * OS1_S1 + 103) +
                one_over_two_q * *(b + 121 * OS1_S1 + 70);
            *(b + 121 * OS1_S1 + 146) =
                prefactor_y * *(b + 121 * OS1_S1 + 104) -
                p_over_q * *(b + 168 * OS1_S1 + 104) +
                one_over_two_q * *(b + 84 * OS1_S1 + 104);
            *(b + 121 * OS1_S1 + 147) =
                prefactor_x * *(b + 121 * OS1_S1 + 111) -
                p_over_q * *(b + 166 * OS1_S1 + 111) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 111) +
                one_over_two_q * *(b + 121 * OS1_S1 + 83);
            *(b + 121 * OS1_S1 + 148) =
                prefactor_x * *(b + 121 * OS1_S1 + 112) -
                p_over_q * *(b + 166 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 112);
            *(b + 121 * OS1_S1 + 149) =
                prefactor_z * *(b + 121 * OS1_S1 + 105) -
                p_over_q * *(b + 169 * OS1_S1 + 105);
            *(b + 121 * OS1_S1 + 150) =
                prefactor_x * *(b + 121 * OS1_S1 + 114) -
                p_over_q * *(b + 166 * OS1_S1 + 114) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 114);
            *(b + 121 * OS1_S1 + 151) =
                prefactor_x * *(b + 121 * OS1_S1 + 115) -
                p_over_q * *(b + 166 * OS1_S1 + 115) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 115);
            *(b + 121 * OS1_S1 + 152) =
                prefactor_x * *(b + 121 * OS1_S1 + 116) -
                p_over_q * *(b + 166 * OS1_S1 + 116) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 116);
            *(b + 121 * OS1_S1 + 153) =
                prefactor_x * *(b + 121 * OS1_S1 + 117) -
                p_over_q * *(b + 166 * OS1_S1 + 117) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 117);
            *(b + 121 * OS1_S1 + 154) =
                prefactor_y * *(b + 121 * OS1_S1 + 111) -
                p_over_q * *(b + 168 * OS1_S1 + 111) +
                one_over_two_q * *(b + 84 * OS1_S1 + 111);
            *(b + 121 * OS1_S1 + 155) =
                prefactor_x * *(b + 121 * OS1_S1 + 119) -
                p_over_q * *(b + 166 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 119);
            *(b + 121 * OS1_S1 + 156) =
                prefactor_y * *(b + 121 * OS1_S1 + 112) -
                p_over_q * *(b + 168 * OS1_S1 + 112) +
                one_over_two_q * *(b + 84 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 121 * OS1_S1 + 77);
            *(b + 121 * OS1_S1 + 157) =
                prefactor_z * *(b + 121 * OS1_S1 + 112) -
                p_over_q * *(b + 169 * OS1_S1 + 112);
            *(b + 121 * OS1_S1 + 158) =
                prefactor_z * *(b + 121 * OS1_S1 + 113) -
                p_over_q * *(b + 169 * OS1_S1 + 113) +
                one_over_two_q * *(b + 121 * OS1_S1 + 77);
            *(b + 121 * OS1_S1 + 159) =
                prefactor_z * *(b + 121 * OS1_S1 + 114) -
                p_over_q * *(b + 169 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 78);
            *(b + 121 * OS1_S1 + 160) =
                prefactor_z * *(b + 121 * OS1_S1 + 115) -
                p_over_q * *(b + 169 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 121 * OS1_S1 + 79);
            *(b + 121 * OS1_S1 + 161) =
                prefactor_y * *(b + 121 * OS1_S1 + 117) -
                p_over_q * *(b + 168 * OS1_S1 + 117) +
                one_over_two_q * *(b + 84 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 82);
            *(b + 121 * OS1_S1 + 162) =
                prefactor_y * *(b + 121 * OS1_S1 + 118) -
                p_over_q * *(b + 168 * OS1_S1 + 118) +
                one_over_two_q * *(b + 84 * OS1_S1 + 118) +
                one_over_two_q * *(b + 121 * OS1_S1 + 83);
            *(b + 121 * OS1_S1 + 163) =
                prefactor_y * *(b + 121 * OS1_S1 + 119) -
                p_over_q * *(b + 168 * OS1_S1 + 119) +
                one_over_two_q * *(b + 84 * OS1_S1 + 119);
            *(b + 121 * OS1_S1 + 164) =
                prefactor_z * *(b + 121 * OS1_S1 + 119) -
                p_over_q * *(b + 169 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 121 * OS1_S1 + 83);
            *(b + 122 * OS1_S1 + 120) =
                prefactor_x * *(b + 122 * OS1_S1 + 84) -
                p_over_q * *(b + 167 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 122 * OS1_S1 + 56);
            *(b + 122 * OS1_S1 + 121) = prefactor_y * *(b + 122 * OS1_S1 + 84) -
                                        p_over_q * *(b + 169 * OS1_S1 + 84);
            *(b + 122 * OS1_S1 + 122) =
                prefactor_z * *(b + 122 * OS1_S1 + 84) -
                p_over_q * *(b + 170 * OS1_S1 + 84) +
                one_over_two_q * *(b + 84 * OS1_S1 + 84);
            *(b + 122 * OS1_S1 + 123) =
                prefactor_y * *(b + 122 * OS1_S1 + 85) -
                p_over_q * *(b + 169 * OS1_S1 + 85) +
                one_over_two_q * *(b + 122 * OS1_S1 + 56);
            *(b + 122 * OS1_S1 + 124) = prefactor_y * *(b + 122 * OS1_S1 + 86) -
                                        p_over_q * *(b + 169 * OS1_S1 + 86);
            *(b + 122 * OS1_S1 + 125) =
                prefactor_z * *(b + 122 * OS1_S1 + 86) -
                p_over_q * *(b + 170 * OS1_S1 + 86) +
                one_over_two_q * *(b + 84 * OS1_S1 + 86) +
                one_over_two_q * *(b + 122 * OS1_S1 + 56);
            *(b + 122 * OS1_S1 + 126) =
                prefactor_y * *(b + 122 * OS1_S1 + 87) -
                p_over_q * *(b + 169 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 57);
            *(b + 122 * OS1_S1 + 127) =
                prefactor_z * *(b + 122 * OS1_S1 + 87) -
                p_over_q * *(b + 170 * OS1_S1 + 87) +
                one_over_two_q * *(b + 84 * OS1_S1 + 87);
            *(b + 122 * OS1_S1 + 128) = prefactor_y * *(b + 122 * OS1_S1 + 89) -
                                        p_over_q * *(b + 169 * OS1_S1 + 89);
            *(b + 122 * OS1_S1 + 129) =
                prefactor_z * *(b + 122 * OS1_S1 + 89) -
                p_over_q * *(b + 170 * OS1_S1 + 89) +
                one_over_two_q * *(b + 84 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 58);
            *(b + 122 * OS1_S1 + 130) =
                prefactor_y * *(b + 122 * OS1_S1 + 90) -
                p_over_q * *(b + 169 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 122 * OS1_S1 + 59);
            *(b + 122 * OS1_S1 + 131) =
                prefactor_z * *(b + 122 * OS1_S1 + 90) -
                p_over_q * *(b + 170 * OS1_S1 + 90) +
                one_over_two_q * *(b + 84 * OS1_S1 + 90);
            *(b + 122 * OS1_S1 + 132) =
                prefactor_y * *(b + 122 * OS1_S1 + 92) -
                p_over_q * *(b + 169 * OS1_S1 + 92) +
                one_over_two_q * *(b + 122 * OS1_S1 + 61);
            *(b + 122 * OS1_S1 + 133) = prefactor_y * *(b + 122 * OS1_S1 + 93) -
                                        p_over_q * *(b + 169 * OS1_S1 + 93);
            *(b + 122 * OS1_S1 + 134) =
                prefactor_z * *(b + 122 * OS1_S1 + 93) -
                p_over_q * *(b + 170 * OS1_S1 + 93) +
                one_over_two_q * *(b + 84 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 122 * OS1_S1 + 61);
            *(b + 122 * OS1_S1 + 135) =
                prefactor_x * *(b + 122 * OS1_S1 + 99) -
                p_over_q * *(b + 167 * OS1_S1 + 99) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 71);
            *(b + 122 * OS1_S1 + 136) =
                prefactor_z * *(b + 122 * OS1_S1 + 94) -
                p_over_q * *(b + 170 * OS1_S1 + 94) +
                one_over_two_q * *(b + 84 * OS1_S1 + 94);
            *(b + 122 * OS1_S1 + 137) =
                prefactor_z * *(b + 122 * OS1_S1 + 95) -
                p_over_q * *(b + 170 * OS1_S1 + 95) +
                one_over_two_q * *(b + 84 * OS1_S1 + 95) +
                one_over_two_q * *(b + 122 * OS1_S1 + 62);
            *(b + 122 * OS1_S1 + 138) =
                prefactor_y * *(b + 122 * OS1_S1 + 97) -
                p_over_q * *(b + 169 * OS1_S1 + 97) +
                one_over_two_q * *(b + 122 * OS1_S1 + 65);
            *(b + 122 * OS1_S1 + 139) = prefactor_y * *(b + 122 * OS1_S1 + 98) -
                                        p_over_q * *(b + 169 * OS1_S1 + 98);
            *(b + 122 * OS1_S1 + 140) =
                prefactor_x * *(b + 122 * OS1_S1 + 104) -
                p_over_q * *(b + 167 * OS1_S1 + 104) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 76);
            *(b + 122 * OS1_S1 + 141) =
                prefactor_x * *(b + 122 * OS1_S1 + 105) -
                p_over_q * *(b + 167 * OS1_S1 + 105) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 105) +
                one_over_two_q * *(b + 122 * OS1_S1 + 77);
            *(b + 122 * OS1_S1 + 142) =
                prefactor_z * *(b + 122 * OS1_S1 + 99) -
                p_over_q * *(b + 170 * OS1_S1 + 99) +
                one_over_two_q * *(b + 84 * OS1_S1 + 99);
            *(b + 122 * OS1_S1 + 143) =
                prefactor_z * *(b + 122 * OS1_S1 + 100) -
                p_over_q * *(b + 170 * OS1_S1 + 100) +
                one_over_two_q * *(b + 84 * OS1_S1 + 100) +
                one_over_two_q * *(b + 122 * OS1_S1 + 66);
            *(b + 122 * OS1_S1 + 144) =
                prefactor_x * *(b + 122 * OS1_S1 + 108) -
                p_over_q * *(b + 167 * OS1_S1 + 108) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 108) +
                one_over_two_q * *(b + 122 * OS1_S1 + 80);
            *(b + 122 * OS1_S1 + 145) =
                prefactor_y * *(b + 122 * OS1_S1 + 103) -
                p_over_q * *(b + 169 * OS1_S1 + 103) +
                one_over_two_q * *(b + 122 * OS1_S1 + 70);
            *(b + 122 * OS1_S1 + 146) =
                prefactor_y * *(b + 122 * OS1_S1 + 104) -
                p_over_q * *(b + 169 * OS1_S1 + 104);
            *(b + 122 * OS1_S1 + 147) =
                prefactor_x * *(b + 122 * OS1_S1 + 111) -
                p_over_q * *(b + 167 * OS1_S1 + 111) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 111) +
                one_over_two_q * *(b + 122 * OS1_S1 + 83);
            *(b + 122 * OS1_S1 + 148) =
                prefactor_x * *(b + 122 * OS1_S1 + 112) -
                p_over_q * *(b + 167 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 112);
            *(b + 122 * OS1_S1 + 149) =
                prefactor_z * *(b + 122 * OS1_S1 + 105) -
                p_over_q * *(b + 170 * OS1_S1 + 105) +
                one_over_two_q * *(b + 84 * OS1_S1 + 105);
            *(b + 122 * OS1_S1 + 150) =
                prefactor_x * *(b + 122 * OS1_S1 + 114) -
                p_over_q * *(b + 167 * OS1_S1 + 114) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 114);
            *(b + 122 * OS1_S1 + 151) =
                prefactor_x * *(b + 122 * OS1_S1 + 115) -
                p_over_q * *(b + 167 * OS1_S1 + 115) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 115);
            *(b + 122 * OS1_S1 + 152) =
                prefactor_x * *(b + 122 * OS1_S1 + 116) -
                p_over_q * *(b + 167 * OS1_S1 + 116) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 116);
            *(b + 122 * OS1_S1 + 153) =
                prefactor_x * *(b + 122 * OS1_S1 + 117) -
                p_over_q * *(b + 167 * OS1_S1 + 117) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 117);
            *(b + 122 * OS1_S1 + 154) =
                prefactor_y * *(b + 122 * OS1_S1 + 111) -
                p_over_q * *(b + 169 * OS1_S1 + 111);
            *(b + 122 * OS1_S1 + 155) =
                prefactor_x * *(b + 122 * OS1_S1 + 119) -
                p_over_q * *(b + 167 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 119);
            *(b + 122 * OS1_S1 + 156) =
                prefactor_y * *(b + 122 * OS1_S1 + 112) -
                p_over_q * *(b + 169 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 122 * OS1_S1 + 77);
            *(b + 122 * OS1_S1 + 157) =
                prefactor_z * *(b + 122 * OS1_S1 + 112) -
                p_over_q * *(b + 170 * OS1_S1 + 112) +
                one_over_two_q * *(b + 84 * OS1_S1 + 112);
            *(b + 122 * OS1_S1 + 158) =
                prefactor_z * *(b + 122 * OS1_S1 + 113) -
                p_over_q * *(b + 170 * OS1_S1 + 113) +
                one_over_two_q * *(b + 84 * OS1_S1 + 113) +
                one_over_two_q * *(b + 122 * OS1_S1 + 77);
            *(b + 122 * OS1_S1 + 159) =
                prefactor_z * *(b + 122 * OS1_S1 + 114) -
                p_over_q * *(b + 170 * OS1_S1 + 114) +
                one_over_two_q * *(b + 84 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 78);
            *(b + 122 * OS1_S1 + 160) =
                prefactor_y * *(b + 122 * OS1_S1 + 116) -
                p_over_q * *(b + 169 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 122 * OS1_S1 + 81);
            *(b + 122 * OS1_S1 + 161) =
                prefactor_y * *(b + 122 * OS1_S1 + 117) -
                p_over_q * *(b + 169 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 82);
            *(b + 122 * OS1_S1 + 162) =
                prefactor_y * *(b + 122 * OS1_S1 + 118) -
                p_over_q * *(b + 169 * OS1_S1 + 118) +
                one_over_two_q * *(b + 122 * OS1_S1 + 83);
            *(b + 122 * OS1_S1 + 163) =
                prefactor_y * *(b + 122 * OS1_S1 + 119) -
                p_over_q * *(b + 169 * OS1_S1 + 119);
            *(b + 122 * OS1_S1 + 164) =
                prefactor_z * *(b + 122 * OS1_S1 + 119) -
                p_over_q * *(b + 170 * OS1_S1 + 119) +
                one_over_two_q * *(b + 84 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 122 * OS1_S1 + 83);
            *(b + 123 * OS1_S1 + 120) =
                prefactor_x * *(b + 123 * OS1_S1 + 84) -
                p_over_q * *(b + 168 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 56);
            *(b + 123 * OS1_S1 + 121) =
                prefactor_y * *(b + 123 * OS1_S1 + 84) -
                p_over_q * *(b + 171 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 84);
            *(b + 123 * OS1_S1 + 122) = prefactor_z * *(b + 123 * OS1_S1 + 84) -
                                        p_over_q * *(b + 172 * OS1_S1 + 84);
            *(b + 123 * OS1_S1 + 123) =
                prefactor_y * *(b + 123 * OS1_S1 + 85) -
                p_over_q * *(b + 171 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 85) +
                one_over_two_q * *(b + 123 * OS1_S1 + 56);
            *(b + 123 * OS1_S1 + 124) = prefactor_z * *(b + 123 * OS1_S1 + 85) -
                                        p_over_q * *(b + 172 * OS1_S1 + 85);
            *(b + 123 * OS1_S1 + 125) =
                prefactor_z * *(b + 123 * OS1_S1 + 86) -
                p_over_q * *(b + 172 * OS1_S1 + 86) +
                one_over_two_q * *(b + 123 * OS1_S1 + 56);
            *(b + 123 * OS1_S1 + 126) =
                prefactor_y * *(b + 123 * OS1_S1 + 87) -
                p_over_q * *(b + 171 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 57);
            *(b + 123 * OS1_S1 + 127) = prefactor_z * *(b + 123 * OS1_S1 + 87) -
                                        p_over_q * *(b + 172 * OS1_S1 + 87);
            *(b + 123 * OS1_S1 + 128) =
                prefactor_y * *(b + 123 * OS1_S1 + 89) -
                p_over_q * *(b + 171 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 89);
            *(b + 123 * OS1_S1 + 129) =
                prefactor_z * *(b + 123 * OS1_S1 + 89) -
                p_over_q * *(b + 172 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 58);
            *(b + 123 * OS1_S1 + 130) =
                prefactor_y * *(b + 123 * OS1_S1 + 90) -
                p_over_q * *(b + 171 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 59);
            *(b + 123 * OS1_S1 + 131) = prefactor_z * *(b + 123 * OS1_S1 + 90) -
                                        p_over_q * *(b + 172 * OS1_S1 + 90);
            *(b + 123 * OS1_S1 + 132) =
                prefactor_z * *(b + 123 * OS1_S1 + 91) -
                p_over_q * *(b + 172 * OS1_S1 + 91) +
                one_over_two_q * *(b + 123 * OS1_S1 + 59);
            *(b + 123 * OS1_S1 + 133) =
                prefactor_y * *(b + 123 * OS1_S1 + 93) -
                p_over_q * *(b + 171 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 93);
            *(b + 123 * OS1_S1 + 134) =
                prefactor_z * *(b + 123 * OS1_S1 + 93) -
                p_over_q * *(b + 172 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 61);
            *(b + 123 * OS1_S1 + 135) =
                prefactor_x * *(b + 123 * OS1_S1 + 99) -
                p_over_q * *(b + 168 * OS1_S1 + 99) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 71);
            *(b + 123 * OS1_S1 + 136) = prefactor_z * *(b + 123 * OS1_S1 + 94) -
                                        p_over_q * *(b + 172 * OS1_S1 + 94);
            *(b + 123 * OS1_S1 + 137) =
                prefactor_z * *(b + 123 * OS1_S1 + 95) -
                p_over_q * *(b + 172 * OS1_S1 + 95) +
                one_over_two_q * *(b + 123 * OS1_S1 + 62);
            *(b + 123 * OS1_S1 + 138) =
                prefactor_y * *(b + 123 * OS1_S1 + 97) -
                p_over_q * *(b + 171 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 97) +
                one_over_two_q * *(b + 123 * OS1_S1 + 65);
            *(b + 123 * OS1_S1 + 139) =
                prefactor_y * *(b + 123 * OS1_S1 + 98) -
                p_over_q * *(b + 171 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 98);
            *(b + 123 * OS1_S1 + 140) =
                prefactor_x * *(b + 123 * OS1_S1 + 104) -
                p_over_q * *(b + 168 * OS1_S1 + 104) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 76);
            *(b + 123 * OS1_S1 + 141) =
                prefactor_x * *(b + 123 * OS1_S1 + 105) -
                p_over_q * *(b + 168 * OS1_S1 + 105) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 105) +
                one_over_two_q * *(b + 123 * OS1_S1 + 77);
            *(b + 123 * OS1_S1 + 142) = prefactor_z * *(b + 123 * OS1_S1 + 99) -
                                        p_over_q * *(b + 172 * OS1_S1 + 99);
            *(b + 123 * OS1_S1 + 143) =
                prefactor_z * *(b + 123 * OS1_S1 + 100) -
                p_over_q * *(b + 172 * OS1_S1 + 100) +
                one_over_two_q * *(b + 123 * OS1_S1 + 66);
            *(b + 123 * OS1_S1 + 144) =
                prefactor_x * *(b + 123 * OS1_S1 + 108) -
                p_over_q * *(b + 168 * OS1_S1 + 108) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 108) +
                one_over_two_q * *(b + 123 * OS1_S1 + 80);
            *(b + 123 * OS1_S1 + 145) =
                prefactor_y * *(b + 123 * OS1_S1 + 103) -
                p_over_q * *(b + 171 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 103) +
                one_over_two_q * *(b + 123 * OS1_S1 + 70);
            *(b + 123 * OS1_S1 + 146) =
                prefactor_y * *(b + 123 * OS1_S1 + 104) -
                p_over_q * *(b + 171 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 104);
            *(b + 123 * OS1_S1 + 147) =
                prefactor_x * *(b + 123 * OS1_S1 + 111) -
                p_over_q * *(b + 168 * OS1_S1 + 111) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 111) +
                one_over_two_q * *(b + 123 * OS1_S1 + 83);
            *(b + 123 * OS1_S1 + 148) =
                prefactor_x * *(b + 123 * OS1_S1 + 112) -
                p_over_q * *(b + 168 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 112);
            *(b + 123 * OS1_S1 + 149) =
                prefactor_z * *(b + 123 * OS1_S1 + 105) -
                p_over_q * *(b + 172 * OS1_S1 + 105);
            *(b + 123 * OS1_S1 + 150) =
                prefactor_x * *(b + 123 * OS1_S1 + 114) -
                p_over_q * *(b + 168 * OS1_S1 + 114) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 114);
            *(b + 123 * OS1_S1 + 151) =
                prefactor_x * *(b + 123 * OS1_S1 + 115) -
                p_over_q * *(b + 168 * OS1_S1 + 115) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 115);
            *(b + 123 * OS1_S1 + 152) =
                prefactor_x * *(b + 123 * OS1_S1 + 116) -
                p_over_q * *(b + 168 * OS1_S1 + 116) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 116);
            *(b + 123 * OS1_S1 + 153) =
                prefactor_x * *(b + 123 * OS1_S1 + 117) -
                p_over_q * *(b + 168 * OS1_S1 + 117) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 117);
            *(b + 123 * OS1_S1 + 154) =
                prefactor_y * *(b + 123 * OS1_S1 + 111) -
                p_over_q * *(b + 171 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 111);
            *(b + 123 * OS1_S1 + 155) =
                prefactor_x * *(b + 123 * OS1_S1 + 119) -
                p_over_q * *(b + 168 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 87 * OS1_S1 + 119);
            *(b + 123 * OS1_S1 + 156) =
                prefactor_y * *(b + 123 * OS1_S1 + 112) -
                p_over_q * *(b + 171 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 77);
            *(b + 123 * OS1_S1 + 157) =
                prefactor_z * *(b + 123 * OS1_S1 + 112) -
                p_over_q * *(b + 172 * OS1_S1 + 112);
            *(b + 123 * OS1_S1 + 158) =
                prefactor_z * *(b + 123 * OS1_S1 + 113) -
                p_over_q * *(b + 172 * OS1_S1 + 113) +
                one_over_two_q * *(b + 123 * OS1_S1 + 77);
            *(b + 123 * OS1_S1 + 159) =
                prefactor_z * *(b + 123 * OS1_S1 + 114) -
                p_over_q * *(b + 172 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 78);
            *(b + 123 * OS1_S1 + 160) =
                prefactor_z * *(b + 123 * OS1_S1 + 115) -
                p_over_q * *(b + 172 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 79);
            *(b + 123 * OS1_S1 + 161) =
                prefactor_y * *(b + 123 * OS1_S1 + 117) -
                p_over_q * *(b + 171 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 123 * OS1_S1 + 82);
            *(b + 123 * OS1_S1 + 162) =
                prefactor_y * *(b + 123 * OS1_S1 + 118) -
                p_over_q * *(b + 171 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 118) +
                one_over_two_q * *(b + 123 * OS1_S1 + 83);
            *(b + 123 * OS1_S1 + 163) =
                prefactor_y * *(b + 123 * OS1_S1 + 119) -
                p_over_q * *(b + 171 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 119);
            *(b + 123 * OS1_S1 + 164) =
                prefactor_z * *(b + 123 * OS1_S1 + 119) -
                p_over_q * *(b + 172 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 83);
            *(b + 124 * OS1_S1 + 120) =
                prefactor_x * *(b + 124 * OS1_S1 + 84) -
                p_over_q * *(b + 169 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 56);
            *(b + 124 * OS1_S1 + 121) =
                prefactor_y * *(b + 124 * OS1_S1 + 84) -
                p_over_q * *(b + 172 * OS1_S1 + 84) +
                one_over_two_q * *(b + 86 * OS1_S1 + 84);
            *(b + 124 * OS1_S1 + 122) =
                prefactor_z * *(b + 124 * OS1_S1 + 84) -
                p_over_q * *(b + 173 * OS1_S1 + 84) +
                one_over_two_q * *(b + 85 * OS1_S1 + 84);
            *(b + 124 * OS1_S1 + 123) =
                prefactor_y * *(b + 124 * OS1_S1 + 85) -
                p_over_q * *(b + 172 * OS1_S1 + 85) +
                one_over_two_q * *(b + 86 * OS1_S1 + 85) +
                one_over_two_q * *(b + 124 * OS1_S1 + 56);
            *(b + 124 * OS1_S1 + 124) =
                prefactor_z * *(b + 124 * OS1_S1 + 85) -
                p_over_q * *(b + 173 * OS1_S1 + 85) +
                one_over_two_q * *(b + 85 * OS1_S1 + 85);
            *(b + 124 * OS1_S1 + 125) =
                prefactor_z * *(b + 124 * OS1_S1 + 86) -
                p_over_q * *(b + 173 * OS1_S1 + 86) +
                one_over_two_q * *(b + 85 * OS1_S1 + 86) +
                one_over_two_q * *(b + 124 * OS1_S1 + 56);
            *(b + 124 * OS1_S1 + 126) =
                prefactor_y * *(b + 124 * OS1_S1 + 87) -
                p_over_q * *(b + 172 * OS1_S1 + 87) +
                one_over_two_q * *(b + 86 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 57);
            *(b + 124 * OS1_S1 + 127) =
                prefactor_z * *(b + 124 * OS1_S1 + 87) -
                p_over_q * *(b + 173 * OS1_S1 + 87) +
                one_over_two_q * *(b + 85 * OS1_S1 + 87);
            *(b + 124 * OS1_S1 + 128) =
                prefactor_y * *(b + 124 * OS1_S1 + 89) -
                p_over_q * *(b + 172 * OS1_S1 + 89) +
                one_over_two_q * *(b + 86 * OS1_S1 + 89);
            *(b + 124 * OS1_S1 + 129) =
                prefactor_z * *(b + 124 * OS1_S1 + 89) -
                p_over_q * *(b + 173 * OS1_S1 + 89) +
                one_over_two_q * *(b + 85 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 58);
            *(b + 124 * OS1_S1 + 130) =
                prefactor_y * *(b + 124 * OS1_S1 + 90) -
                p_over_q * *(b + 172 * OS1_S1 + 90) +
                one_over_two_q * *(b + 86 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 124 * OS1_S1 + 59);
            *(b + 124 * OS1_S1 + 131) =
                prefactor_z * *(b + 124 * OS1_S1 + 90) -
                p_over_q * *(b + 173 * OS1_S1 + 90) +
                one_over_two_q * *(b + 85 * OS1_S1 + 90);
            *(b + 124 * OS1_S1 + 132) =
                prefactor_z * *(b + 124 * OS1_S1 + 91) -
                p_over_q * *(b + 173 * OS1_S1 + 91) +
                one_over_two_q * *(b + 85 * OS1_S1 + 91) +
                one_over_two_q * *(b + 124 * OS1_S1 + 59);
            *(b + 124 * OS1_S1 + 133) =
                prefactor_y * *(b + 124 * OS1_S1 + 93) -
                p_over_q * *(b + 172 * OS1_S1 + 93) +
                one_over_two_q * *(b + 86 * OS1_S1 + 93);
            *(b + 124 * OS1_S1 + 134) =
                prefactor_z * *(b + 124 * OS1_S1 + 93) -
                p_over_q * *(b + 173 * OS1_S1 + 93) +
                one_over_two_q * *(b + 85 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 124 * OS1_S1 + 61);
            *(b + 124 * OS1_S1 + 135) =
                prefactor_x * *(b + 124 * OS1_S1 + 99) -
                p_over_q * *(b + 169 * OS1_S1 + 99) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 71);
            *(b + 124 * OS1_S1 + 136) =
                prefactor_z * *(b + 124 * OS1_S1 + 94) -
                p_over_q * *(b + 173 * OS1_S1 + 94) +
                one_over_two_q * *(b + 85 * OS1_S1 + 94);
            *(b + 124 * OS1_S1 + 137) =
                prefactor_z * *(b + 124 * OS1_S1 + 95) -
                p_over_q * *(b + 173 * OS1_S1 + 95) +
                one_over_two_q * *(b + 85 * OS1_S1 + 95) +
                one_over_two_q * *(b + 124 * OS1_S1 + 62);
            *(b + 124 * OS1_S1 + 138) =
                prefactor_y * *(b + 124 * OS1_S1 + 97) -
                p_over_q * *(b + 172 * OS1_S1 + 97) +
                one_over_two_q * *(b + 86 * OS1_S1 + 97) +
                one_over_two_q * *(b + 124 * OS1_S1 + 65);
            *(b + 124 * OS1_S1 + 139) =
                prefactor_y * *(b + 124 * OS1_S1 + 98) -
                p_over_q * *(b + 172 * OS1_S1 + 98) +
                one_over_two_q * *(b + 86 * OS1_S1 + 98);
            *(b + 124 * OS1_S1 + 140) =
                prefactor_x * *(b + 124 * OS1_S1 + 104) -
                p_over_q * *(b + 169 * OS1_S1 + 104) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 76);
            *(b + 124 * OS1_S1 + 141) =
                prefactor_x * *(b + 124 * OS1_S1 + 105) -
                p_over_q * *(b + 169 * OS1_S1 + 105) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 105) +
                one_over_two_q * *(b + 124 * OS1_S1 + 77);
            *(b + 124 * OS1_S1 + 142) =
                prefactor_z * *(b + 124 * OS1_S1 + 99) -
                p_over_q * *(b + 173 * OS1_S1 + 99) +
                one_over_two_q * *(b + 85 * OS1_S1 + 99);
            *(b + 124 * OS1_S1 + 143) =
                prefactor_z * *(b + 124 * OS1_S1 + 100) -
                p_over_q * *(b + 173 * OS1_S1 + 100) +
                one_over_two_q * *(b + 85 * OS1_S1 + 100) +
                one_over_two_q * *(b + 124 * OS1_S1 + 66);
            *(b + 124 * OS1_S1 + 144) =
                prefactor_x * *(b + 124 * OS1_S1 + 108) -
                p_over_q * *(b + 169 * OS1_S1 + 108) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 108) +
                one_over_two_q * *(b + 124 * OS1_S1 + 80);
            *(b + 124 * OS1_S1 + 145) =
                prefactor_y * *(b + 124 * OS1_S1 + 103) -
                p_over_q * *(b + 172 * OS1_S1 + 103) +
                one_over_two_q * *(b + 86 * OS1_S1 + 103) +
                one_over_two_q * *(b + 124 * OS1_S1 + 70);
            *(b + 124 * OS1_S1 + 146) =
                prefactor_y * *(b + 124 * OS1_S1 + 104) -
                p_over_q * *(b + 172 * OS1_S1 + 104) +
                one_over_two_q * *(b + 86 * OS1_S1 + 104);
            *(b + 124 * OS1_S1 + 147) =
                prefactor_x * *(b + 124 * OS1_S1 + 111) -
                p_over_q * *(b + 169 * OS1_S1 + 111) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 111) +
                one_over_two_q * *(b + 124 * OS1_S1 + 83);
            *(b + 124 * OS1_S1 + 148) =
                prefactor_x * *(b + 124 * OS1_S1 + 112) -
                p_over_q * *(b + 169 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 112);
            *(b + 124 * OS1_S1 + 149) =
                prefactor_z * *(b + 124 * OS1_S1 + 105) -
                p_over_q * *(b + 173 * OS1_S1 + 105) +
                one_over_two_q * *(b + 85 * OS1_S1 + 105);
            *(b + 124 * OS1_S1 + 150) =
                prefactor_x * *(b + 124 * OS1_S1 + 114) -
                p_over_q * *(b + 169 * OS1_S1 + 114) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 114);
            *(b + 124 * OS1_S1 + 151) =
                prefactor_x * *(b + 124 * OS1_S1 + 115) -
                p_over_q * *(b + 169 * OS1_S1 + 115) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 115);
            *(b + 124 * OS1_S1 + 152) =
                prefactor_x * *(b + 124 * OS1_S1 + 116) -
                p_over_q * *(b + 169 * OS1_S1 + 116) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 116);
            *(b + 124 * OS1_S1 + 153) =
                prefactor_x * *(b + 124 * OS1_S1 + 117) -
                p_over_q * *(b + 169 * OS1_S1 + 117) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 117);
            *(b + 124 * OS1_S1 + 154) =
                prefactor_y * *(b + 124 * OS1_S1 + 111) -
                p_over_q * *(b + 172 * OS1_S1 + 111) +
                one_over_two_q * *(b + 86 * OS1_S1 + 111);
            *(b + 124 * OS1_S1 + 155) =
                prefactor_x * *(b + 124 * OS1_S1 + 119) -
                p_over_q * *(b + 169 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 88 * OS1_S1 + 119);
            *(b + 124 * OS1_S1 + 156) =
                prefactor_y * *(b + 124 * OS1_S1 + 112) -
                p_over_q * *(b + 172 * OS1_S1 + 112) +
                one_over_two_q * *(b + 86 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 77);
            *(b + 124 * OS1_S1 + 157) =
                prefactor_z * *(b + 124 * OS1_S1 + 112) -
                p_over_q * *(b + 173 * OS1_S1 + 112) +
                one_over_two_q * *(b + 85 * OS1_S1 + 112);
            *(b + 124 * OS1_S1 + 158) =
                prefactor_z * *(b + 124 * OS1_S1 + 113) -
                p_over_q * *(b + 173 * OS1_S1 + 113) +
                one_over_two_q * *(b + 85 * OS1_S1 + 113) +
                one_over_two_q * *(b + 124 * OS1_S1 + 77);
            *(b + 124 * OS1_S1 + 159) =
                prefactor_z * *(b + 124 * OS1_S1 + 114) -
                p_over_q * *(b + 173 * OS1_S1 + 114) +
                one_over_two_q * *(b + 85 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 78);
            *(b + 124 * OS1_S1 + 160) =
                prefactor_z * *(b + 124 * OS1_S1 + 115) -
                p_over_q * *(b + 173 * OS1_S1 + 115) +
                one_over_two_q * *(b + 85 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 124 * OS1_S1 + 79);
            *(b + 124 * OS1_S1 + 161) =
                prefactor_y * *(b + 124 * OS1_S1 + 117) -
                p_over_q * *(b + 172 * OS1_S1 + 117) +
                one_over_two_q * *(b + 86 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 82);
            *(b + 124 * OS1_S1 + 162) =
                prefactor_y * *(b + 124 * OS1_S1 + 118) -
                p_over_q * *(b + 172 * OS1_S1 + 118) +
                one_over_two_q * *(b + 86 * OS1_S1 + 118) +
                one_over_two_q * *(b + 124 * OS1_S1 + 83);
            *(b + 124 * OS1_S1 + 163) =
                prefactor_y * *(b + 124 * OS1_S1 + 119) -
                p_over_q * *(b + 172 * OS1_S1 + 119) +
                one_over_two_q * *(b + 86 * OS1_S1 + 119);
            *(b + 124 * OS1_S1 + 164) =
                prefactor_z * *(b + 124 * OS1_S1 + 119) -
                p_over_q * *(b + 173 * OS1_S1 + 119) +
                one_over_two_q * *(b + 85 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 83);
            *(b + 125 * OS1_S1 + 120) =
                prefactor_x * *(b + 125 * OS1_S1 + 84) -
                p_over_q * *(b + 170 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 56);
            *(b + 125 * OS1_S1 + 121) = prefactor_y * *(b + 125 * OS1_S1 + 84) -
                                        p_over_q * *(b + 173 * OS1_S1 + 84);
            *(b + 125 * OS1_S1 + 122) =
                prefactor_z * *(b + 125 * OS1_S1 + 84) -
                p_over_q * *(b + 174 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 84);
            *(b + 125 * OS1_S1 + 123) =
                prefactor_y * *(b + 125 * OS1_S1 + 85) -
                p_over_q * *(b + 173 * OS1_S1 + 85) +
                one_over_two_q * *(b + 125 * OS1_S1 + 56);
            *(b + 125 * OS1_S1 + 124) = prefactor_y * *(b + 125 * OS1_S1 + 86) -
                                        p_over_q * *(b + 173 * OS1_S1 + 86);
            *(b + 125 * OS1_S1 + 125) =
                prefactor_z * *(b + 125 * OS1_S1 + 86) -
                p_over_q * *(b + 174 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 86) +
                one_over_two_q * *(b + 125 * OS1_S1 + 56);
            *(b + 125 * OS1_S1 + 126) =
                prefactor_y * *(b + 125 * OS1_S1 + 87) -
                p_over_q * *(b + 173 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 57);
            *(b + 125 * OS1_S1 + 127) =
                prefactor_z * *(b + 125 * OS1_S1 + 87) -
                p_over_q * *(b + 174 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 87);
            *(b + 125 * OS1_S1 + 128) = prefactor_y * *(b + 125 * OS1_S1 + 89) -
                                        p_over_q * *(b + 173 * OS1_S1 + 89);
            *(b + 125 * OS1_S1 + 129) =
                prefactor_z * *(b + 125 * OS1_S1 + 89) -
                p_over_q * *(b + 174 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 58);
            *(b + 125 * OS1_S1 + 130) =
                prefactor_y * *(b + 125 * OS1_S1 + 90) -
                p_over_q * *(b + 173 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 59);
            *(b + 125 * OS1_S1 + 131) =
                prefactor_z * *(b + 125 * OS1_S1 + 90) -
                p_over_q * *(b + 174 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 90);
            *(b + 125 * OS1_S1 + 132) =
                prefactor_y * *(b + 125 * OS1_S1 + 92) -
                p_over_q * *(b + 173 * OS1_S1 + 92) +
                one_over_two_q * *(b + 125 * OS1_S1 + 61);
            *(b + 125 * OS1_S1 + 133) = prefactor_y * *(b + 125 * OS1_S1 + 93) -
                                        p_over_q * *(b + 173 * OS1_S1 + 93);
            *(b + 125 * OS1_S1 + 134) =
                prefactor_z * *(b + 125 * OS1_S1 + 93) -
                p_over_q * *(b + 174 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 61);
            *(b + 125 * OS1_S1 + 135) =
                prefactor_x * *(b + 125 * OS1_S1 + 99) -
                p_over_q * *(b + 170 * OS1_S1 + 99) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 71);
            *(b + 125 * OS1_S1 + 136) =
                prefactor_z * *(b + 125 * OS1_S1 + 94) -
                p_over_q * *(b + 174 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 94);
            *(b + 125 * OS1_S1 + 137) =
                prefactor_z * *(b + 125 * OS1_S1 + 95) -
                p_over_q * *(b + 174 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 95) +
                one_over_two_q * *(b + 125 * OS1_S1 + 62);
            *(b + 125 * OS1_S1 + 138) =
                prefactor_y * *(b + 125 * OS1_S1 + 97) -
                p_over_q * *(b + 173 * OS1_S1 + 97) +
                one_over_two_q * *(b + 125 * OS1_S1 + 65);
            *(b + 125 * OS1_S1 + 139) = prefactor_y * *(b + 125 * OS1_S1 + 98) -
                                        p_over_q * *(b + 173 * OS1_S1 + 98);
            *(b + 125 * OS1_S1 + 140) =
                prefactor_x * *(b + 125 * OS1_S1 + 104) -
                p_over_q * *(b + 170 * OS1_S1 + 104) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 76);
            *(b + 125 * OS1_S1 + 141) =
                prefactor_x * *(b + 125 * OS1_S1 + 105) -
                p_over_q * *(b + 170 * OS1_S1 + 105) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 105) +
                one_over_two_q * *(b + 125 * OS1_S1 + 77);
            *(b + 125 * OS1_S1 + 142) =
                prefactor_z * *(b + 125 * OS1_S1 + 99) -
                p_over_q * *(b + 174 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 99);
            *(b + 125 * OS1_S1 + 143) =
                prefactor_z * *(b + 125 * OS1_S1 + 100) -
                p_over_q * *(b + 174 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 100) +
                one_over_two_q * *(b + 125 * OS1_S1 + 66);
            *(b + 125 * OS1_S1 + 144) =
                prefactor_x * *(b + 125 * OS1_S1 + 108) -
                p_over_q * *(b + 170 * OS1_S1 + 108) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 108) +
                one_over_two_q * *(b + 125 * OS1_S1 + 80);
            *(b + 125 * OS1_S1 + 145) =
                prefactor_y * *(b + 125 * OS1_S1 + 103) -
                p_over_q * *(b + 173 * OS1_S1 + 103) +
                one_over_two_q * *(b + 125 * OS1_S1 + 70);
            *(b + 125 * OS1_S1 + 146) =
                prefactor_y * *(b + 125 * OS1_S1 + 104) -
                p_over_q * *(b + 173 * OS1_S1 + 104);
            *(b + 125 * OS1_S1 + 147) =
                prefactor_x * *(b + 125 * OS1_S1 + 111) -
                p_over_q * *(b + 170 * OS1_S1 + 111) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 111) +
                one_over_two_q * *(b + 125 * OS1_S1 + 83);
            *(b + 125 * OS1_S1 + 148) =
                prefactor_x * *(b + 125 * OS1_S1 + 112) -
                p_over_q * *(b + 170 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 112);
            *(b + 125 * OS1_S1 + 149) =
                prefactor_z * *(b + 125 * OS1_S1 + 105) -
                p_over_q * *(b + 174 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 105);
            *(b + 125 * OS1_S1 + 150) =
                prefactor_x * *(b + 125 * OS1_S1 + 114) -
                p_over_q * *(b + 170 * OS1_S1 + 114) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 114);
            *(b + 125 * OS1_S1 + 151) =
                prefactor_x * *(b + 125 * OS1_S1 + 115) -
                p_over_q * *(b + 170 * OS1_S1 + 115) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 115);
            *(b + 125 * OS1_S1 + 152) =
                prefactor_x * *(b + 125 * OS1_S1 + 116) -
                p_over_q * *(b + 170 * OS1_S1 + 116) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 116);
            *(b + 125 * OS1_S1 + 153) =
                prefactor_x * *(b + 125 * OS1_S1 + 117) -
                p_over_q * *(b + 170 * OS1_S1 + 117) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 117);
            *(b + 125 * OS1_S1 + 154) =
                prefactor_y * *(b + 125 * OS1_S1 + 111) -
                p_over_q * *(b + 173 * OS1_S1 + 111);
            *(b + 125 * OS1_S1 + 155) =
                prefactor_x * *(b + 125 * OS1_S1 + 119) -
                p_over_q * *(b + 170 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 89 * OS1_S1 + 119);
            *(b + 125 * OS1_S1 + 156) =
                prefactor_y * *(b + 125 * OS1_S1 + 112) -
                p_over_q * *(b + 173 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 77);
            *(b + 125 * OS1_S1 + 157) =
                prefactor_z * *(b + 125 * OS1_S1 + 112) -
                p_over_q * *(b + 174 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 112);
            *(b + 125 * OS1_S1 + 158) =
                prefactor_z * *(b + 125 * OS1_S1 + 113) -
                p_over_q * *(b + 174 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 113) +
                one_over_two_q * *(b + 125 * OS1_S1 + 77);
            *(b + 125 * OS1_S1 + 159) =
                prefactor_z * *(b + 125 * OS1_S1 + 114) -
                p_over_q * *(b + 174 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 78);
            *(b + 125 * OS1_S1 + 160) =
                prefactor_y * *(b + 125 * OS1_S1 + 116) -
                p_over_q * *(b + 173 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 81);
            *(b + 125 * OS1_S1 + 161) =
                prefactor_y * *(b + 125 * OS1_S1 + 117) -
                p_over_q * *(b + 173 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 125 * OS1_S1 + 82);
            *(b + 125 * OS1_S1 + 162) =
                prefactor_y * *(b + 125 * OS1_S1 + 118) -
                p_over_q * *(b + 173 * OS1_S1 + 118) +
                one_over_two_q * *(b + 125 * OS1_S1 + 83);
            *(b + 125 * OS1_S1 + 163) =
                prefactor_y * *(b + 125 * OS1_S1 + 119) -
                p_over_q * *(b + 173 * OS1_S1 + 119);
            *(b + 125 * OS1_S1 + 164) =
                prefactor_z * *(b + 125 * OS1_S1 + 119) -
                p_over_q * *(b + 174 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 83);
            *(b + 126 * OS1_S1 + 120) =
                prefactor_x * *(b + 126 * OS1_S1 + 84) -
                p_over_q * *(b + 171 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 126 * OS1_S1 + 56);
            *(b + 126 * OS1_S1 + 121) =
                prefactor_y * *(b + 126 * OS1_S1 + 84) -
                p_over_q * *(b + 175 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 84);
            *(b + 126 * OS1_S1 + 122) = prefactor_z * *(b + 126 * OS1_S1 + 84) -
                                        p_over_q * *(b + 176 * OS1_S1 + 84);
            *(b + 126 * OS1_S1 + 123) =
                prefactor_y * *(b + 126 * OS1_S1 + 85) -
                p_over_q * *(b + 175 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 85) +
                one_over_two_q * *(b + 126 * OS1_S1 + 56);
            *(b + 126 * OS1_S1 + 124) = prefactor_z * *(b + 126 * OS1_S1 + 85) -
                                        p_over_q * *(b + 176 * OS1_S1 + 85);
            *(b + 126 * OS1_S1 + 125) =
                prefactor_z * *(b + 126 * OS1_S1 + 86) -
                p_over_q * *(b + 176 * OS1_S1 + 86) +
                one_over_two_q * *(b + 126 * OS1_S1 + 56);
            *(b + 126 * OS1_S1 + 126) =
                prefactor_y * *(b + 126 * OS1_S1 + 87) -
                p_over_q * *(b + 175 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 57);
            *(b + 126 * OS1_S1 + 127) = prefactor_z * *(b + 126 * OS1_S1 + 87) -
                                        p_over_q * *(b + 176 * OS1_S1 + 87);
            *(b + 126 * OS1_S1 + 128) =
                prefactor_y * *(b + 126 * OS1_S1 + 89) -
                p_over_q * *(b + 175 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 89);
            *(b + 126 * OS1_S1 + 129) =
                prefactor_z * *(b + 126 * OS1_S1 + 89) -
                p_over_q * *(b + 176 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 58);
            *(b + 126 * OS1_S1 + 130) =
                prefactor_y * *(b + 126 * OS1_S1 + 90) -
                p_over_q * *(b + 175 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 126 * OS1_S1 + 59);
            *(b + 126 * OS1_S1 + 131) = prefactor_z * *(b + 126 * OS1_S1 + 90) -
                                        p_over_q * *(b + 176 * OS1_S1 + 90);
            *(b + 126 * OS1_S1 + 132) =
                prefactor_z * *(b + 126 * OS1_S1 + 91) -
                p_over_q * *(b + 176 * OS1_S1 + 91) +
                one_over_two_q * *(b + 126 * OS1_S1 + 59);
            *(b + 126 * OS1_S1 + 133) =
                prefactor_y * *(b + 126 * OS1_S1 + 93) -
                p_over_q * *(b + 175 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 93);
            *(b + 126 * OS1_S1 + 134) =
                prefactor_z * *(b + 126 * OS1_S1 + 93) -
                p_over_q * *(b + 176 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 126 * OS1_S1 + 61);
            *(b + 126 * OS1_S1 + 135) =
                prefactor_x * *(b + 126 * OS1_S1 + 99) -
                p_over_q * *(b + 171 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 71);
            *(b + 126 * OS1_S1 + 136) = prefactor_z * *(b + 126 * OS1_S1 + 94) -
                                        p_over_q * *(b + 176 * OS1_S1 + 94);
            *(b + 126 * OS1_S1 + 137) =
                prefactor_z * *(b + 126 * OS1_S1 + 95) -
                p_over_q * *(b + 176 * OS1_S1 + 95) +
                one_over_two_q * *(b + 126 * OS1_S1 + 62);
            *(b + 126 * OS1_S1 + 138) =
                prefactor_y * *(b + 126 * OS1_S1 + 97) -
                p_over_q * *(b + 175 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 97) +
                one_over_two_q * *(b + 126 * OS1_S1 + 65);
            *(b + 126 * OS1_S1 + 139) =
                prefactor_y * *(b + 126 * OS1_S1 + 98) -
                p_over_q * *(b + 175 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 98);
            *(b + 126 * OS1_S1 + 140) =
                prefactor_x * *(b + 126 * OS1_S1 + 104) -
                p_over_q * *(b + 171 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 76);
            *(b + 126 * OS1_S1 + 141) =
                prefactor_x * *(b + 126 * OS1_S1 + 105) -
                p_over_q * *(b + 171 * OS1_S1 + 105) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 105) +
                one_over_two_q * *(b + 126 * OS1_S1 + 77);
            *(b + 126 * OS1_S1 + 142) = prefactor_z * *(b + 126 * OS1_S1 + 99) -
                                        p_over_q * *(b + 176 * OS1_S1 + 99);
            *(b + 126 * OS1_S1 + 143) =
                prefactor_z * *(b + 126 * OS1_S1 + 100) -
                p_over_q * *(b + 176 * OS1_S1 + 100) +
                one_over_two_q * *(b + 126 * OS1_S1 + 66);
            *(b + 126 * OS1_S1 + 144) =
                prefactor_x * *(b + 126 * OS1_S1 + 108) -
                p_over_q * *(b + 171 * OS1_S1 + 108) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 108) +
                one_over_two_q * *(b + 126 * OS1_S1 + 80);
            *(b + 126 * OS1_S1 + 145) =
                prefactor_y * *(b + 126 * OS1_S1 + 103) -
                p_over_q * *(b + 175 * OS1_S1 + 103) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 103) +
                one_over_two_q * *(b + 126 * OS1_S1 + 70);
            *(b + 126 * OS1_S1 + 146) =
                prefactor_y * *(b + 126 * OS1_S1 + 104) -
                p_over_q * *(b + 175 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 104);
            *(b + 126 * OS1_S1 + 147) =
                prefactor_x * *(b + 126 * OS1_S1 + 111) -
                p_over_q * *(b + 171 * OS1_S1 + 111) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 111) +
                one_over_two_q * *(b + 126 * OS1_S1 + 83);
            *(b + 126 * OS1_S1 + 148) =
                prefactor_x * *(b + 126 * OS1_S1 + 112) -
                p_over_q * *(b + 171 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 112);
            *(b + 126 * OS1_S1 + 149) =
                prefactor_z * *(b + 126 * OS1_S1 + 105) -
                p_over_q * *(b + 176 * OS1_S1 + 105);
            *(b + 126 * OS1_S1 + 150) =
                prefactor_x * *(b + 126 * OS1_S1 + 114) -
                p_over_q * *(b + 171 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 114);
            *(b + 126 * OS1_S1 + 151) =
                prefactor_x * *(b + 126 * OS1_S1 + 115) -
                p_over_q * *(b + 171 * OS1_S1 + 115) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 115);
            *(b + 126 * OS1_S1 + 152) =
                prefactor_x * *(b + 126 * OS1_S1 + 116) -
                p_over_q * *(b + 171 * OS1_S1 + 116) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 116);
            *(b + 126 * OS1_S1 + 153) =
                prefactor_x * *(b + 126 * OS1_S1 + 117) -
                p_over_q * *(b + 171 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 117);
            *(b + 126 * OS1_S1 + 154) =
                prefactor_y * *(b + 126 * OS1_S1 + 111) -
                p_over_q * *(b + 175 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 111);
            *(b + 126 * OS1_S1 + 155) =
                prefactor_x * *(b + 126 * OS1_S1 + 119) -
                p_over_q * *(b + 171 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 90 * OS1_S1 + 119);
            *(b + 126 * OS1_S1 + 156) =
                prefactor_y * *(b + 126 * OS1_S1 + 112) -
                p_over_q * *(b + 175 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 126 * OS1_S1 + 77);
            *(b + 126 * OS1_S1 + 157) =
                prefactor_z * *(b + 126 * OS1_S1 + 112) -
                p_over_q * *(b + 176 * OS1_S1 + 112);
            *(b + 126 * OS1_S1 + 158) =
                prefactor_z * *(b + 126 * OS1_S1 + 113) -
                p_over_q * *(b + 176 * OS1_S1 + 113) +
                one_over_two_q * *(b + 126 * OS1_S1 + 77);
            *(b + 126 * OS1_S1 + 159) =
                prefactor_z * *(b + 126 * OS1_S1 + 114) -
                p_over_q * *(b + 176 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 78);
            *(b + 126 * OS1_S1 + 160) =
                prefactor_z * *(b + 126 * OS1_S1 + 115) -
                p_over_q * *(b + 176 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 126 * OS1_S1 + 79);
            *(b + 126 * OS1_S1 + 161) =
                prefactor_y * *(b + 126 * OS1_S1 + 117) -
                p_over_q * *(b + 175 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 126 * OS1_S1 + 82);
            *(b + 126 * OS1_S1 + 162) =
                prefactor_y * *(b + 126 * OS1_S1 + 118) -
                p_over_q * *(b + 175 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 118) +
                one_over_two_q * *(b + 126 * OS1_S1 + 83);
            *(b + 126 * OS1_S1 + 163) =
                prefactor_y * *(b + 126 * OS1_S1 + 119) -
                p_over_q * *(b + 175 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 119);
            *(b + 126 * OS1_S1 + 164) =
                prefactor_z * *(b + 126 * OS1_S1 + 119) -
                p_over_q * *(b + 176 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 126 * OS1_S1 + 83);
            *(b + 127 * OS1_S1 + 120) =
                prefactor_x * *(b + 127 * OS1_S1 + 84) -
                p_over_q * *(b + 172 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 127 * OS1_S1 + 56);
            *(b + 127 * OS1_S1 + 121) =
                prefactor_y * *(b + 127 * OS1_S1 + 84) -
                p_over_q * *(b + 176 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 84);
            *(b + 127 * OS1_S1 + 122) =
                prefactor_z * *(b + 127 * OS1_S1 + 84) -
                p_over_q * *(b + 177 * OS1_S1 + 84) +
                one_over_two_q * *(b + 87 * OS1_S1 + 84);
            *(b + 127 * OS1_S1 + 123) =
                prefactor_y * *(b + 127 * OS1_S1 + 85) -
                p_over_q * *(b + 176 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 85) +
                one_over_two_q * *(b + 127 * OS1_S1 + 56);
            *(b + 127 * OS1_S1 + 124) =
                prefactor_z * *(b + 127 * OS1_S1 + 85) -
                p_over_q * *(b + 177 * OS1_S1 + 85) +
                one_over_two_q * *(b + 87 * OS1_S1 + 85);
            *(b + 127 * OS1_S1 + 125) =
                prefactor_z * *(b + 127 * OS1_S1 + 86) -
                p_over_q * *(b + 177 * OS1_S1 + 86) +
                one_over_two_q * *(b + 87 * OS1_S1 + 86) +
                one_over_two_q * *(b + 127 * OS1_S1 + 56);
            *(b + 127 * OS1_S1 + 126) =
                prefactor_y * *(b + 127 * OS1_S1 + 87) -
                p_over_q * *(b + 176 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 57);
            *(b + 127 * OS1_S1 + 127) =
                prefactor_z * *(b + 127 * OS1_S1 + 87) -
                p_over_q * *(b + 177 * OS1_S1 + 87) +
                one_over_two_q * *(b + 87 * OS1_S1 + 87);
            *(b + 127 * OS1_S1 + 128) =
                prefactor_y * *(b + 127 * OS1_S1 + 89) -
                p_over_q * *(b + 176 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 89);
            *(b + 127 * OS1_S1 + 129) =
                prefactor_z * *(b + 127 * OS1_S1 + 89) -
                p_over_q * *(b + 177 * OS1_S1 + 89) +
                one_over_two_q * *(b + 87 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 58);
            *(b + 127 * OS1_S1 + 130) =
                prefactor_y * *(b + 127 * OS1_S1 + 90) -
                p_over_q * *(b + 176 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 59);
            *(b + 127 * OS1_S1 + 131) =
                prefactor_z * *(b + 127 * OS1_S1 + 90) -
                p_over_q * *(b + 177 * OS1_S1 + 90) +
                one_over_two_q * *(b + 87 * OS1_S1 + 90);
            *(b + 127 * OS1_S1 + 132) =
                prefactor_z * *(b + 127 * OS1_S1 + 91) -
                p_over_q * *(b + 177 * OS1_S1 + 91) +
                one_over_two_q * *(b + 87 * OS1_S1 + 91) +
                one_over_two_q * *(b + 127 * OS1_S1 + 59);
            *(b + 127 * OS1_S1 + 133) =
                prefactor_y * *(b + 127 * OS1_S1 + 93) -
                p_over_q * *(b + 176 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 93);
            *(b + 127 * OS1_S1 + 134) =
                prefactor_z * *(b + 127 * OS1_S1 + 93) -
                p_over_q * *(b + 177 * OS1_S1 + 93) +
                one_over_two_q * *(b + 87 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 61);
            *(b + 127 * OS1_S1 + 135) =
                prefactor_x * *(b + 127 * OS1_S1 + 99) -
                p_over_q * *(b + 172 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 71);
            *(b + 127 * OS1_S1 + 136) =
                prefactor_z * *(b + 127 * OS1_S1 + 94) -
                p_over_q * *(b + 177 * OS1_S1 + 94) +
                one_over_two_q * *(b + 87 * OS1_S1 + 94);
            *(b + 127 * OS1_S1 + 137) =
                prefactor_z * *(b + 127 * OS1_S1 + 95) -
                p_over_q * *(b + 177 * OS1_S1 + 95) +
                one_over_two_q * *(b + 87 * OS1_S1 + 95) +
                one_over_two_q * *(b + 127 * OS1_S1 + 62);
            *(b + 127 * OS1_S1 + 138) =
                prefactor_y * *(b + 127 * OS1_S1 + 97) -
                p_over_q * *(b + 176 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 97) +
                one_over_two_q * *(b + 127 * OS1_S1 + 65);
            *(b + 127 * OS1_S1 + 139) =
                prefactor_y * *(b + 127 * OS1_S1 + 98) -
                p_over_q * *(b + 176 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 98);
            *(b + 127 * OS1_S1 + 140) =
                prefactor_x * *(b + 127 * OS1_S1 + 104) -
                p_over_q * *(b + 172 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 76);
            *(b + 127 * OS1_S1 + 141) =
                prefactor_x * *(b + 127 * OS1_S1 + 105) -
                p_over_q * *(b + 172 * OS1_S1 + 105) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 105) +
                one_over_two_q * *(b + 127 * OS1_S1 + 77);
            *(b + 127 * OS1_S1 + 142) =
                prefactor_z * *(b + 127 * OS1_S1 + 99) -
                p_over_q * *(b + 177 * OS1_S1 + 99) +
                one_over_two_q * *(b + 87 * OS1_S1 + 99);
            *(b + 127 * OS1_S1 + 143) =
                prefactor_z * *(b + 127 * OS1_S1 + 100) -
                p_over_q * *(b + 177 * OS1_S1 + 100) +
                one_over_two_q * *(b + 87 * OS1_S1 + 100) +
                one_over_two_q * *(b + 127 * OS1_S1 + 66);
            *(b + 127 * OS1_S1 + 144) =
                prefactor_x * *(b + 127 * OS1_S1 + 108) -
                p_over_q * *(b + 172 * OS1_S1 + 108) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 108) +
                one_over_two_q * *(b + 127 * OS1_S1 + 80);
            *(b + 127 * OS1_S1 + 145) =
                prefactor_y * *(b + 127 * OS1_S1 + 103) -
                p_over_q * *(b + 176 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 103) +
                one_over_two_q * *(b + 127 * OS1_S1 + 70);
            *(b + 127 * OS1_S1 + 146) =
                prefactor_y * *(b + 127 * OS1_S1 + 104) -
                p_over_q * *(b + 176 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 104);
            *(b + 127 * OS1_S1 + 147) =
                prefactor_x * *(b + 127 * OS1_S1 + 111) -
                p_over_q * *(b + 172 * OS1_S1 + 111) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 111) +
                one_over_two_q * *(b + 127 * OS1_S1 + 83);
            *(b + 127 * OS1_S1 + 148) =
                prefactor_x * *(b + 127 * OS1_S1 + 112) -
                p_over_q * *(b + 172 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 112);
            *(b + 127 * OS1_S1 + 149) =
                prefactor_z * *(b + 127 * OS1_S1 + 105) -
                p_over_q * *(b + 177 * OS1_S1 + 105) +
                one_over_two_q * *(b + 87 * OS1_S1 + 105);
            *(b + 127 * OS1_S1 + 150) =
                prefactor_x * *(b + 127 * OS1_S1 + 114) -
                p_over_q * *(b + 172 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 114);
            *(b + 127 * OS1_S1 + 151) =
                prefactor_x * *(b + 127 * OS1_S1 + 115) -
                p_over_q * *(b + 172 * OS1_S1 + 115) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 115);
            *(b + 127 * OS1_S1 + 152) =
                prefactor_x * *(b + 127 * OS1_S1 + 116) -
                p_over_q * *(b + 172 * OS1_S1 + 116) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 116);
            *(b + 127 * OS1_S1 + 153) =
                prefactor_x * *(b + 127 * OS1_S1 + 117) -
                p_over_q * *(b + 172 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 117);
            *(b + 127 * OS1_S1 + 154) =
                prefactor_y * *(b + 127 * OS1_S1 + 111) -
                p_over_q * *(b + 176 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 111);
            *(b + 127 * OS1_S1 + 155) =
                prefactor_x * *(b + 127 * OS1_S1 + 119) -
                p_over_q * *(b + 172 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 91 * OS1_S1 + 119);
            *(b + 127 * OS1_S1 + 156) =
                prefactor_y * *(b + 127 * OS1_S1 + 112) -
                p_over_q * *(b + 176 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 127 * OS1_S1 + 77);
            *(b + 127 * OS1_S1 + 157) =
                prefactor_z * *(b + 127 * OS1_S1 + 112) -
                p_over_q * *(b + 177 * OS1_S1 + 112) +
                one_over_two_q * *(b + 87 * OS1_S1 + 112);
            *(b + 127 * OS1_S1 + 158) =
                prefactor_z * *(b + 127 * OS1_S1 + 113) -
                p_over_q * *(b + 177 * OS1_S1 + 113) +
                one_over_two_q * *(b + 87 * OS1_S1 + 113) +
                one_over_two_q * *(b + 127 * OS1_S1 + 77);
            *(b + 127 * OS1_S1 + 159) =
                prefactor_z * *(b + 127 * OS1_S1 + 114) -
                p_over_q * *(b + 177 * OS1_S1 + 114) +
                one_over_two_q * *(b + 87 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 78);
            *(b + 127 * OS1_S1 + 160) =
                prefactor_z * *(b + 127 * OS1_S1 + 115) -
                p_over_q * *(b + 177 * OS1_S1 + 115) +
                one_over_two_q * *(b + 87 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 79);
            *(b + 127 * OS1_S1 + 161) =
                prefactor_y * *(b + 127 * OS1_S1 + 117) -
                p_over_q * *(b + 176 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 82);
            *(b + 127 * OS1_S1 + 162) =
                prefactor_y * *(b + 127 * OS1_S1 + 118) -
                p_over_q * *(b + 176 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 118) +
                one_over_two_q * *(b + 127 * OS1_S1 + 83);
            *(b + 127 * OS1_S1 + 163) =
                prefactor_y * *(b + 127 * OS1_S1 + 119) -
                p_over_q * *(b + 176 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 119);
            *(b + 127 * OS1_S1 + 164) =
                prefactor_z * *(b + 127 * OS1_S1 + 119) -
                p_over_q * *(b + 177 * OS1_S1 + 119) +
                one_over_two_q * *(b + 87 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 127 * OS1_S1 + 83);
            *(b + 128 * OS1_S1 + 120) =
                prefactor_x * *(b + 128 * OS1_S1 + 84) -
                p_over_q * *(b + 173 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 128 * OS1_S1 + 56);
            *(b + 128 * OS1_S1 + 121) =
                prefactor_y * *(b + 128 * OS1_S1 + 84) -
                p_over_q * *(b + 177 * OS1_S1 + 84) +
                one_over_two_q * *(b + 89 * OS1_S1 + 84);
            *(b + 128 * OS1_S1 + 122) =
                prefactor_z * *(b + 128 * OS1_S1 + 84) -
                p_over_q * *(b + 178 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 84);
            *(b + 128 * OS1_S1 + 123) =
                prefactor_y * *(b + 128 * OS1_S1 + 85) -
                p_over_q * *(b + 177 * OS1_S1 + 85) +
                one_over_two_q * *(b + 89 * OS1_S1 + 85) +
                one_over_two_q * *(b + 128 * OS1_S1 + 56);
            *(b + 128 * OS1_S1 + 124) =
                prefactor_y * *(b + 128 * OS1_S1 + 86) -
                p_over_q * *(b + 177 * OS1_S1 + 86) +
                one_over_two_q * *(b + 89 * OS1_S1 + 86);
            *(b + 128 * OS1_S1 + 125) =
                prefactor_z * *(b + 128 * OS1_S1 + 86) -
                p_over_q * *(b + 178 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 86) +
                one_over_two_q * *(b + 128 * OS1_S1 + 56);
            *(b + 128 * OS1_S1 + 126) =
                prefactor_y * *(b + 128 * OS1_S1 + 87) -
                p_over_q * *(b + 177 * OS1_S1 + 87) +
                one_over_two_q * *(b + 89 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 57);
            *(b + 128 * OS1_S1 + 127) =
                prefactor_z * *(b + 128 * OS1_S1 + 87) -
                p_over_q * *(b + 178 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 87);
            *(b + 128 * OS1_S1 + 128) =
                prefactor_y * *(b + 128 * OS1_S1 + 89) -
                p_over_q * *(b + 177 * OS1_S1 + 89) +
                one_over_two_q * *(b + 89 * OS1_S1 + 89);
            *(b + 128 * OS1_S1 + 129) =
                prefactor_z * *(b + 128 * OS1_S1 + 89) -
                p_over_q * *(b + 178 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 58);
            *(b + 128 * OS1_S1 + 130) =
                prefactor_y * *(b + 128 * OS1_S1 + 90) -
                p_over_q * *(b + 177 * OS1_S1 + 90) +
                one_over_two_q * *(b + 89 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 59);
            *(b + 128 * OS1_S1 + 131) =
                prefactor_z * *(b + 128 * OS1_S1 + 90) -
                p_over_q * *(b + 178 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 90);
            *(b + 128 * OS1_S1 + 132) =
                prefactor_y * *(b + 128 * OS1_S1 + 92) -
                p_over_q * *(b + 177 * OS1_S1 + 92) +
                one_over_two_q * *(b + 89 * OS1_S1 + 92) +
                one_over_two_q * *(b + 128 * OS1_S1 + 61);
            *(b + 128 * OS1_S1 + 133) =
                prefactor_y * *(b + 128 * OS1_S1 + 93) -
                p_over_q * *(b + 177 * OS1_S1 + 93) +
                one_over_two_q * *(b + 89 * OS1_S1 + 93);
            *(b + 128 * OS1_S1 + 134) =
                prefactor_z * *(b + 128 * OS1_S1 + 93) -
                p_over_q * *(b + 178 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 61);
            *(b + 128 * OS1_S1 + 135) =
                prefactor_x * *(b + 128 * OS1_S1 + 99) -
                p_over_q * *(b + 173 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 71);
            *(b + 128 * OS1_S1 + 136) =
                prefactor_z * *(b + 128 * OS1_S1 + 94) -
                p_over_q * *(b + 178 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 94);
            *(b + 128 * OS1_S1 + 137) =
                prefactor_z * *(b + 128 * OS1_S1 + 95) -
                p_over_q * *(b + 178 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 95) +
                one_over_two_q * *(b + 128 * OS1_S1 + 62);
            *(b + 128 * OS1_S1 + 138) =
                prefactor_y * *(b + 128 * OS1_S1 + 97) -
                p_over_q * *(b + 177 * OS1_S1 + 97) +
                one_over_two_q * *(b + 89 * OS1_S1 + 97) +
                one_over_two_q * *(b + 128 * OS1_S1 + 65);
            *(b + 128 * OS1_S1 + 139) =
                prefactor_y * *(b + 128 * OS1_S1 + 98) -
                p_over_q * *(b + 177 * OS1_S1 + 98) +
                one_over_two_q * *(b + 89 * OS1_S1 + 98);
            *(b + 128 * OS1_S1 + 140) =
                prefactor_x * *(b + 128 * OS1_S1 + 104) -
                p_over_q * *(b + 173 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 76);
            *(b + 128 * OS1_S1 + 141) =
                prefactor_x * *(b + 128 * OS1_S1 + 105) -
                p_over_q * *(b + 173 * OS1_S1 + 105) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 105) +
                one_over_two_q * *(b + 128 * OS1_S1 + 77);
            *(b + 128 * OS1_S1 + 142) =
                prefactor_z * *(b + 128 * OS1_S1 + 99) -
                p_over_q * *(b + 178 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 99);
            *(b + 128 * OS1_S1 + 143) =
                prefactor_z * *(b + 128 * OS1_S1 + 100) -
                p_over_q * *(b + 178 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 100) +
                one_over_two_q * *(b + 128 * OS1_S1 + 66);
            *(b + 128 * OS1_S1 + 144) =
                prefactor_x * *(b + 128 * OS1_S1 + 108) -
                p_over_q * *(b + 173 * OS1_S1 + 108) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 108) +
                one_over_two_q * *(b + 128 * OS1_S1 + 80);
            *(b + 128 * OS1_S1 + 145) =
                prefactor_y * *(b + 128 * OS1_S1 + 103) -
                p_over_q * *(b + 177 * OS1_S1 + 103) +
                one_over_two_q * *(b + 89 * OS1_S1 + 103) +
                one_over_two_q * *(b + 128 * OS1_S1 + 70);
            *(b + 128 * OS1_S1 + 146) =
                prefactor_y * *(b + 128 * OS1_S1 + 104) -
                p_over_q * *(b + 177 * OS1_S1 + 104) +
                one_over_two_q * *(b + 89 * OS1_S1 + 104);
            *(b + 128 * OS1_S1 + 147) =
                prefactor_x * *(b + 128 * OS1_S1 + 111) -
                p_over_q * *(b + 173 * OS1_S1 + 111) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 111) +
                one_over_two_q * *(b + 128 * OS1_S1 + 83);
            *(b + 128 * OS1_S1 + 148) =
                prefactor_x * *(b + 128 * OS1_S1 + 112) -
                p_over_q * *(b + 173 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 112);
            *(b + 128 * OS1_S1 + 149) =
                prefactor_z * *(b + 128 * OS1_S1 + 105) -
                p_over_q * *(b + 178 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 105);
            *(b + 128 * OS1_S1 + 150) =
                prefactor_x * *(b + 128 * OS1_S1 + 114) -
                p_over_q * *(b + 173 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 114);
            *(b + 128 * OS1_S1 + 151) =
                prefactor_x * *(b + 128 * OS1_S1 + 115) -
                p_over_q * *(b + 173 * OS1_S1 + 115) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 115);
            *(b + 128 * OS1_S1 + 152) =
                prefactor_x * *(b + 128 * OS1_S1 + 116) -
                p_over_q * *(b + 173 * OS1_S1 + 116) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 116);
            *(b + 128 * OS1_S1 + 153) =
                prefactor_x * *(b + 128 * OS1_S1 + 117) -
                p_over_q * *(b + 173 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 117);
            *(b + 128 * OS1_S1 + 154) =
                prefactor_y * *(b + 128 * OS1_S1 + 111) -
                p_over_q * *(b + 177 * OS1_S1 + 111) +
                one_over_two_q * *(b + 89 * OS1_S1 + 111);
            *(b + 128 * OS1_S1 + 155) =
                prefactor_x * *(b + 128 * OS1_S1 + 119) -
                p_over_q * *(b + 173 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 92 * OS1_S1 + 119);
            *(b + 128 * OS1_S1 + 156) =
                prefactor_y * *(b + 128 * OS1_S1 + 112) -
                p_over_q * *(b + 177 * OS1_S1 + 112) +
                one_over_two_q * *(b + 89 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 128 * OS1_S1 + 77);
            *(b + 128 * OS1_S1 + 157) =
                prefactor_z * *(b + 128 * OS1_S1 + 112) -
                p_over_q * *(b + 178 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 112);
            *(b + 128 * OS1_S1 + 158) =
                prefactor_z * *(b + 128 * OS1_S1 + 113) -
                p_over_q * *(b + 178 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 113) +
                one_over_two_q * *(b + 128 * OS1_S1 + 77);
            *(b + 128 * OS1_S1 + 159) =
                prefactor_z * *(b + 128 * OS1_S1 + 114) -
                p_over_q * *(b + 178 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 78);
            *(b + 128 * OS1_S1 + 160) =
                prefactor_y * *(b + 128 * OS1_S1 + 116) -
                p_over_q * *(b + 177 * OS1_S1 + 116) +
                one_over_two_q * *(b + 89 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 81);
            *(b + 128 * OS1_S1 + 161) =
                prefactor_y * *(b + 128 * OS1_S1 + 117) -
                p_over_q * *(b + 177 * OS1_S1 + 117) +
                one_over_two_q * *(b + 89 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 82);
            *(b + 128 * OS1_S1 + 162) =
                prefactor_y * *(b + 128 * OS1_S1 + 118) -
                p_over_q * *(b + 177 * OS1_S1 + 118) +
                one_over_two_q * *(b + 89 * OS1_S1 + 118) +
                one_over_two_q * *(b + 128 * OS1_S1 + 83);
            *(b + 128 * OS1_S1 + 163) =
                prefactor_y * *(b + 128 * OS1_S1 + 119) -
                p_over_q * *(b + 177 * OS1_S1 + 119) +
                one_over_two_q * *(b + 89 * OS1_S1 + 119);
            *(b + 128 * OS1_S1 + 164) =
                prefactor_z * *(b + 128 * OS1_S1 + 119) -
                p_over_q * *(b + 178 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 128 * OS1_S1 + 83);
            *(b + 129 * OS1_S1 + 120) =
                prefactor_x * *(b + 129 * OS1_S1 + 84) -
                p_over_q * *(b + 174 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 129 * OS1_S1 + 56);
            *(b + 129 * OS1_S1 + 121) = prefactor_y * *(b + 129 * OS1_S1 + 84) -
                                        p_over_q * *(b + 178 * OS1_S1 + 84);
            *(b + 129 * OS1_S1 + 122) =
                prefactor_z * *(b + 129 * OS1_S1 + 84) -
                p_over_q * *(b + 179 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 84);
            *(b + 129 * OS1_S1 + 123) =
                prefactor_y * *(b + 129 * OS1_S1 + 85) -
                p_over_q * *(b + 178 * OS1_S1 + 85) +
                one_over_two_q * *(b + 129 * OS1_S1 + 56);
            *(b + 129 * OS1_S1 + 124) = prefactor_y * *(b + 129 * OS1_S1 + 86) -
                                        p_over_q * *(b + 178 * OS1_S1 + 86);
            *(b + 129 * OS1_S1 + 125) =
                prefactor_z * *(b + 129 * OS1_S1 + 86) -
                p_over_q * *(b + 179 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 86) +
                one_over_two_q * *(b + 129 * OS1_S1 + 56);
            *(b + 129 * OS1_S1 + 126) =
                prefactor_y * *(b + 129 * OS1_S1 + 87) -
                p_over_q * *(b + 178 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 57);
            *(b + 129 * OS1_S1 + 127) =
                prefactor_z * *(b + 129 * OS1_S1 + 87) -
                p_over_q * *(b + 179 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 87);
            *(b + 129 * OS1_S1 + 128) = prefactor_y * *(b + 129 * OS1_S1 + 89) -
                                        p_over_q * *(b + 178 * OS1_S1 + 89);
            *(b + 129 * OS1_S1 + 129) =
                prefactor_z * *(b + 129 * OS1_S1 + 89) -
                p_over_q * *(b + 179 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 58);
            *(b + 129 * OS1_S1 + 130) =
                prefactor_y * *(b + 129 * OS1_S1 + 90) -
                p_over_q * *(b + 178 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 129 * OS1_S1 + 59);
            *(b + 129 * OS1_S1 + 131) =
                prefactor_z * *(b + 129 * OS1_S1 + 90) -
                p_over_q * *(b + 179 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 90);
            *(b + 129 * OS1_S1 + 132) =
                prefactor_y * *(b + 129 * OS1_S1 + 92) -
                p_over_q * *(b + 178 * OS1_S1 + 92) +
                one_over_two_q * *(b + 129 * OS1_S1 + 61);
            *(b + 129 * OS1_S1 + 133) = prefactor_y * *(b + 129 * OS1_S1 + 93) -
                                        p_over_q * *(b + 178 * OS1_S1 + 93);
            *(b + 129 * OS1_S1 + 134) =
                prefactor_z * *(b + 129 * OS1_S1 + 93) -
                p_over_q * *(b + 179 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 129 * OS1_S1 + 61);
            *(b + 129 * OS1_S1 + 135) =
                prefactor_x * *(b + 129 * OS1_S1 + 99) -
                p_over_q * *(b + 174 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 71);
            *(b + 129 * OS1_S1 + 136) =
                prefactor_z * *(b + 129 * OS1_S1 + 94) -
                p_over_q * *(b + 179 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 94);
            *(b + 129 * OS1_S1 + 137) =
                prefactor_z * *(b + 129 * OS1_S1 + 95) -
                p_over_q * *(b + 179 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 95) +
                one_over_two_q * *(b + 129 * OS1_S1 + 62);
            *(b + 129 * OS1_S1 + 138) =
                prefactor_y * *(b + 129 * OS1_S1 + 97) -
                p_over_q * *(b + 178 * OS1_S1 + 97) +
                one_over_two_q * *(b + 129 * OS1_S1 + 65);
            *(b + 129 * OS1_S1 + 139) = prefactor_y * *(b + 129 * OS1_S1 + 98) -
                                        p_over_q * *(b + 178 * OS1_S1 + 98);
            *(b + 129 * OS1_S1 + 140) =
                prefactor_x * *(b + 129 * OS1_S1 + 104) -
                p_over_q * *(b + 174 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 76);
            *(b + 129 * OS1_S1 + 141) =
                prefactor_x * *(b + 129 * OS1_S1 + 105) -
                p_over_q * *(b + 174 * OS1_S1 + 105) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 105) +
                one_over_two_q * *(b + 129 * OS1_S1 + 77);
            *(b + 129 * OS1_S1 + 142) =
                prefactor_z * *(b + 129 * OS1_S1 + 99) -
                p_over_q * *(b + 179 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 99);
            *(b + 129 * OS1_S1 + 143) =
                prefactor_z * *(b + 129 * OS1_S1 + 100) -
                p_over_q * *(b + 179 * OS1_S1 + 100) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 100) +
                one_over_two_q * *(b + 129 * OS1_S1 + 66);
            *(b + 129 * OS1_S1 + 144) =
                prefactor_x * *(b + 129 * OS1_S1 + 108) -
                p_over_q * *(b + 174 * OS1_S1 + 108) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 108) +
                one_over_two_q * *(b + 129 * OS1_S1 + 80);
            *(b + 129 * OS1_S1 + 145) =
                prefactor_y * *(b + 129 * OS1_S1 + 103) -
                p_over_q * *(b + 178 * OS1_S1 + 103) +
                one_over_two_q * *(b + 129 * OS1_S1 + 70);
            *(b + 129 * OS1_S1 + 146) =
                prefactor_y * *(b + 129 * OS1_S1 + 104) -
                p_over_q * *(b + 178 * OS1_S1 + 104);
            *(b + 129 * OS1_S1 + 147) =
                prefactor_x * *(b + 129 * OS1_S1 + 111) -
                p_over_q * *(b + 174 * OS1_S1 + 111) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 111) +
                one_over_two_q * *(b + 129 * OS1_S1 + 83);
            *(b + 129 * OS1_S1 + 148) =
                prefactor_x * *(b + 129 * OS1_S1 + 112) -
                p_over_q * *(b + 174 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 112);
            *(b + 129 * OS1_S1 + 149) =
                prefactor_z * *(b + 129 * OS1_S1 + 105) -
                p_over_q * *(b + 179 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 105);
            *(b + 129 * OS1_S1 + 150) =
                prefactor_x * *(b + 129 * OS1_S1 + 114) -
                p_over_q * *(b + 174 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 114);
            *(b + 129 * OS1_S1 + 151) =
                prefactor_x * *(b + 129 * OS1_S1 + 115) -
                p_over_q * *(b + 174 * OS1_S1 + 115) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 115);
            *(b + 129 * OS1_S1 + 152) =
                prefactor_x * *(b + 129 * OS1_S1 + 116) -
                p_over_q * *(b + 174 * OS1_S1 + 116) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 116);
            *(b + 129 * OS1_S1 + 153) =
                prefactor_x * *(b + 129 * OS1_S1 + 117) -
                p_over_q * *(b + 174 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 117);
            *(b + 129 * OS1_S1 + 154) =
                prefactor_y * *(b + 129 * OS1_S1 + 111) -
                p_over_q * *(b + 178 * OS1_S1 + 111);
            *(b + 129 * OS1_S1 + 155) =
                prefactor_x * *(b + 129 * OS1_S1 + 119) -
                p_over_q * *(b + 174 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 93 * OS1_S1 + 119);
            *(b + 129 * OS1_S1 + 156) =
                prefactor_y * *(b + 129 * OS1_S1 + 112) -
                p_over_q * *(b + 178 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 129 * OS1_S1 + 77);
            *(b + 129 * OS1_S1 + 157) =
                prefactor_z * *(b + 129 * OS1_S1 + 112) -
                p_over_q * *(b + 179 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 112);
            *(b + 129 * OS1_S1 + 158) =
                prefactor_z * *(b + 129 * OS1_S1 + 113) -
                p_over_q * *(b + 179 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 113) +
                one_over_two_q * *(b + 129 * OS1_S1 + 77);
            *(b + 129 * OS1_S1 + 159) =
                prefactor_z * *(b + 129 * OS1_S1 + 114) -
                p_over_q * *(b + 179 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 78);
            *(b + 129 * OS1_S1 + 160) =
                prefactor_y * *(b + 129 * OS1_S1 + 116) -
                p_over_q * *(b + 178 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 129 * OS1_S1 + 81);
            *(b + 129 * OS1_S1 + 161) =
                prefactor_y * *(b + 129 * OS1_S1 + 117) -
                p_over_q * *(b + 178 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 129 * OS1_S1 + 82);
            *(b + 129 * OS1_S1 + 162) =
                prefactor_y * *(b + 129 * OS1_S1 + 118) -
                p_over_q * *(b + 178 * OS1_S1 + 118) +
                one_over_two_q * *(b + 129 * OS1_S1 + 83);
            *(b + 129 * OS1_S1 + 163) =
                prefactor_y * *(b + 129 * OS1_S1 + 119) -
                p_over_q * *(b + 178 * OS1_S1 + 119);
            *(b + 129 * OS1_S1 + 164) =
                prefactor_z * *(b + 129 * OS1_S1 + 119) -
                p_over_q * *(b + 179 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 129 * OS1_S1 + 83);
            *(b + 130 * OS1_S1 + 120) =
                prefactor_x * *(b + 130 * OS1_S1 + 84) -
                p_over_q * *(b + 175 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 130 * OS1_S1 + 56);
            *(b + 130 * OS1_S1 + 121) =
                prefactor_y * *(b + 130 * OS1_S1 + 84) -
                p_over_q * *(b + 180 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 84);
            *(b + 130 * OS1_S1 + 122) = prefactor_z * *(b + 130 * OS1_S1 + 84) -
                                        p_over_q * *(b + 181 * OS1_S1 + 84);
            *(b + 130 * OS1_S1 + 123) =
                prefactor_y * *(b + 130 * OS1_S1 + 85) -
                p_over_q * *(b + 180 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 85) +
                one_over_two_q * *(b + 130 * OS1_S1 + 56);
            *(b + 130 * OS1_S1 + 124) = prefactor_z * *(b + 130 * OS1_S1 + 85) -
                                        p_over_q * *(b + 181 * OS1_S1 + 85);
            *(b + 130 * OS1_S1 + 125) =
                prefactor_z * *(b + 130 * OS1_S1 + 86) -
                p_over_q * *(b + 181 * OS1_S1 + 86) +
                one_over_two_q * *(b + 130 * OS1_S1 + 56);
            *(b + 130 * OS1_S1 + 126) =
                prefactor_y * *(b + 130 * OS1_S1 + 87) -
                p_over_q * *(b + 180 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 57);
            *(b + 130 * OS1_S1 + 127) = prefactor_z * *(b + 130 * OS1_S1 + 87) -
                                        p_over_q * *(b + 181 * OS1_S1 + 87);
            *(b + 130 * OS1_S1 + 128) =
                prefactor_y * *(b + 130 * OS1_S1 + 89) -
                p_over_q * *(b + 180 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 89);
            *(b + 130 * OS1_S1 + 129) =
                prefactor_z * *(b + 130 * OS1_S1 + 89) -
                p_over_q * *(b + 181 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 58);
            *(b + 130 * OS1_S1 + 130) =
                prefactor_y * *(b + 130 * OS1_S1 + 90) -
                p_over_q * *(b + 180 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 130 * OS1_S1 + 59);
            *(b + 130 * OS1_S1 + 131) = prefactor_z * *(b + 130 * OS1_S1 + 90) -
                                        p_over_q * *(b + 181 * OS1_S1 + 90);
            *(b + 130 * OS1_S1 + 132) =
                prefactor_z * *(b + 130 * OS1_S1 + 91) -
                p_over_q * *(b + 181 * OS1_S1 + 91) +
                one_over_two_q * *(b + 130 * OS1_S1 + 59);
            *(b + 130 * OS1_S1 + 133) =
                prefactor_y * *(b + 130 * OS1_S1 + 93) -
                p_over_q * *(b + 180 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 93);
            *(b + 130 * OS1_S1 + 134) =
                prefactor_z * *(b + 130 * OS1_S1 + 93) -
                p_over_q * *(b + 181 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 130 * OS1_S1 + 61);
            *(b + 130 * OS1_S1 + 135) =
                prefactor_x * *(b + 130 * OS1_S1 + 99) -
                p_over_q * *(b + 175 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 71);
            *(b + 130 * OS1_S1 + 136) = prefactor_z * *(b + 130 * OS1_S1 + 94) -
                                        p_over_q * *(b + 181 * OS1_S1 + 94);
            *(b + 130 * OS1_S1 + 137) =
                prefactor_z * *(b + 130 * OS1_S1 + 95) -
                p_over_q * *(b + 181 * OS1_S1 + 95) +
                one_over_two_q * *(b + 130 * OS1_S1 + 62);
            *(b + 130 * OS1_S1 + 138) =
                prefactor_y * *(b + 130 * OS1_S1 + 97) -
                p_over_q * *(b + 180 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 97) +
                one_over_two_q * *(b + 130 * OS1_S1 + 65);
            *(b + 130 * OS1_S1 + 139) =
                prefactor_y * *(b + 130 * OS1_S1 + 98) -
                p_over_q * *(b + 180 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 98);
            *(b + 130 * OS1_S1 + 140) =
                prefactor_x * *(b + 130 * OS1_S1 + 104) -
                p_over_q * *(b + 175 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 76);
            *(b + 130 * OS1_S1 + 141) =
                prefactor_x * *(b + 130 * OS1_S1 + 105) -
                p_over_q * *(b + 175 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 105) +
                one_over_two_q * *(b + 130 * OS1_S1 + 77);
            *(b + 130 * OS1_S1 + 142) = prefactor_z * *(b + 130 * OS1_S1 + 99) -
                                        p_over_q * *(b + 181 * OS1_S1 + 99);
            *(b + 130 * OS1_S1 + 143) =
                prefactor_z * *(b + 130 * OS1_S1 + 100) -
                p_over_q * *(b + 181 * OS1_S1 + 100) +
                one_over_two_q * *(b + 130 * OS1_S1 + 66);
            *(b + 130 * OS1_S1 + 144) =
                prefactor_x * *(b + 130 * OS1_S1 + 108) -
                p_over_q * *(b + 175 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 108) +
                one_over_two_q * *(b + 130 * OS1_S1 + 80);
            *(b + 130 * OS1_S1 + 145) =
                prefactor_y * *(b + 130 * OS1_S1 + 103) -
                p_over_q * *(b + 180 * OS1_S1 + 103) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 103) +
                one_over_two_q * *(b + 130 * OS1_S1 + 70);
            *(b + 130 * OS1_S1 + 146) =
                prefactor_y * *(b + 130 * OS1_S1 + 104) -
                p_over_q * *(b + 180 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 104);
            *(b + 130 * OS1_S1 + 147) =
                prefactor_x * *(b + 130 * OS1_S1 + 111) -
                p_over_q * *(b + 175 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 111) +
                one_over_two_q * *(b + 130 * OS1_S1 + 83);
            *(b + 130 * OS1_S1 + 148) =
                prefactor_x * *(b + 130 * OS1_S1 + 112) -
                p_over_q * *(b + 175 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 112);
            *(b + 130 * OS1_S1 + 149) =
                prefactor_z * *(b + 130 * OS1_S1 + 105) -
                p_over_q * *(b + 181 * OS1_S1 + 105);
            *(b + 130 * OS1_S1 + 150) =
                prefactor_x * *(b + 130 * OS1_S1 + 114) -
                p_over_q * *(b + 175 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 114);
            *(b + 130 * OS1_S1 + 151) =
                prefactor_x * *(b + 130 * OS1_S1 + 115) -
                p_over_q * *(b + 175 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 115);
            *(b + 130 * OS1_S1 + 152) =
                prefactor_x * *(b + 130 * OS1_S1 + 116) -
                p_over_q * *(b + 175 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 116);
            *(b + 130 * OS1_S1 + 153) =
                prefactor_x * *(b + 130 * OS1_S1 + 117) -
                p_over_q * *(b + 175 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 117);
            *(b + 130 * OS1_S1 + 154) =
                prefactor_y * *(b + 130 * OS1_S1 + 111) -
                p_over_q * *(b + 180 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 111);
            *(b + 130 * OS1_S1 + 155) =
                prefactor_x * *(b + 130 * OS1_S1 + 119) -
                p_over_q * *(b + 175 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 94 * OS1_S1 + 119);
            *(b + 130 * OS1_S1 + 156) =
                prefactor_y * *(b + 130 * OS1_S1 + 112) -
                p_over_q * *(b + 180 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 130 * OS1_S1 + 77);
            *(b + 130 * OS1_S1 + 157) =
                prefactor_z * *(b + 130 * OS1_S1 + 112) -
                p_over_q * *(b + 181 * OS1_S1 + 112);
            *(b + 130 * OS1_S1 + 158) =
                prefactor_z * *(b + 130 * OS1_S1 + 113) -
                p_over_q * *(b + 181 * OS1_S1 + 113) +
                one_over_two_q * *(b + 130 * OS1_S1 + 77);
            *(b + 130 * OS1_S1 + 159) =
                prefactor_z * *(b + 130 * OS1_S1 + 114) -
                p_over_q * *(b + 181 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 78);
            *(b + 130 * OS1_S1 + 160) =
                prefactor_z * *(b + 130 * OS1_S1 + 115) -
                p_over_q * *(b + 181 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 130 * OS1_S1 + 79);
            *(b + 130 * OS1_S1 + 161) =
                prefactor_y * *(b + 130 * OS1_S1 + 117) -
                p_over_q * *(b + 180 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 130 * OS1_S1 + 82);
            *(b + 130 * OS1_S1 + 162) =
                prefactor_y * *(b + 130 * OS1_S1 + 118) -
                p_over_q * *(b + 180 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 118) +
                one_over_two_q * *(b + 130 * OS1_S1 + 83);
            *(b + 130 * OS1_S1 + 163) =
                prefactor_y * *(b + 130 * OS1_S1 + 119) -
                p_over_q * *(b + 180 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 90 * OS1_S1 + 119);
            *(b + 130 * OS1_S1 + 164) =
                prefactor_z * *(b + 130 * OS1_S1 + 119) -
                p_over_q * *(b + 181 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 130 * OS1_S1 + 83);
            *(b + 131 * OS1_S1 + 120) =
                prefactor_x * *(b + 131 * OS1_S1 + 84) -
                p_over_q * *(b + 176 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 131 * OS1_S1 + 56);
            *(b + 131 * OS1_S1 + 121) =
                prefactor_y * *(b + 131 * OS1_S1 + 84) -
                p_over_q * *(b + 181 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 84);
            *(b + 131 * OS1_S1 + 122) =
                prefactor_z * *(b + 131 * OS1_S1 + 84) -
                p_over_q * *(b + 182 * OS1_S1 + 84) +
                one_over_two_q * *(b + 90 * OS1_S1 + 84);
            *(b + 131 * OS1_S1 + 123) =
                prefactor_y * *(b + 131 * OS1_S1 + 85) -
                p_over_q * *(b + 181 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 85) +
                one_over_two_q * *(b + 131 * OS1_S1 + 56);
            *(b + 131 * OS1_S1 + 124) =
                prefactor_z * *(b + 131 * OS1_S1 + 85) -
                p_over_q * *(b + 182 * OS1_S1 + 85) +
                one_over_two_q * *(b + 90 * OS1_S1 + 85);
            *(b + 131 * OS1_S1 + 125) =
                prefactor_z * *(b + 131 * OS1_S1 + 86) -
                p_over_q * *(b + 182 * OS1_S1 + 86) +
                one_over_two_q * *(b + 90 * OS1_S1 + 86) +
                one_over_two_q * *(b + 131 * OS1_S1 + 56);
            *(b + 131 * OS1_S1 + 126) =
                prefactor_y * *(b + 131 * OS1_S1 + 87) -
                p_over_q * *(b + 181 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 57);
            *(b + 131 * OS1_S1 + 127) =
                prefactor_z * *(b + 131 * OS1_S1 + 87) -
                p_over_q * *(b + 182 * OS1_S1 + 87) +
                one_over_two_q * *(b + 90 * OS1_S1 + 87);
            *(b + 131 * OS1_S1 + 128) =
                prefactor_y * *(b + 131 * OS1_S1 + 89) -
                p_over_q * *(b + 181 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 89);
            *(b + 131 * OS1_S1 + 129) =
                prefactor_z * *(b + 131 * OS1_S1 + 89) -
                p_over_q * *(b + 182 * OS1_S1 + 89) +
                one_over_two_q * *(b + 90 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 58);
            *(b + 131 * OS1_S1 + 130) =
                prefactor_y * *(b + 131 * OS1_S1 + 90) -
                p_over_q * *(b + 181 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 131 * OS1_S1 + 59);
            *(b + 131 * OS1_S1 + 131) =
                prefactor_z * *(b + 131 * OS1_S1 + 90) -
                p_over_q * *(b + 182 * OS1_S1 + 90) +
                one_over_two_q * *(b + 90 * OS1_S1 + 90);
            *(b + 131 * OS1_S1 + 132) =
                prefactor_z * *(b + 131 * OS1_S1 + 91) -
                p_over_q * *(b + 182 * OS1_S1 + 91) +
                one_over_two_q * *(b + 90 * OS1_S1 + 91) +
                one_over_two_q * *(b + 131 * OS1_S1 + 59);
            *(b + 131 * OS1_S1 + 133) =
                prefactor_y * *(b + 131 * OS1_S1 + 93) -
                p_over_q * *(b + 181 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 93);
            *(b + 131 * OS1_S1 + 134) =
                prefactor_z * *(b + 131 * OS1_S1 + 93) -
                p_over_q * *(b + 182 * OS1_S1 + 93) +
                one_over_two_q * *(b + 90 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 131 * OS1_S1 + 61);
            *(b + 131 * OS1_S1 + 135) =
                prefactor_x * *(b + 131 * OS1_S1 + 99) -
                p_over_q * *(b + 176 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 71);
            *(b + 131 * OS1_S1 + 136) =
                prefactor_z * *(b + 131 * OS1_S1 + 94) -
                p_over_q * *(b + 182 * OS1_S1 + 94) +
                one_over_two_q * *(b + 90 * OS1_S1 + 94);
            *(b + 131 * OS1_S1 + 137) =
                prefactor_z * *(b + 131 * OS1_S1 + 95) -
                p_over_q * *(b + 182 * OS1_S1 + 95) +
                one_over_two_q * *(b + 90 * OS1_S1 + 95) +
                one_over_two_q * *(b + 131 * OS1_S1 + 62);
            *(b + 131 * OS1_S1 + 138) =
                prefactor_y * *(b + 131 * OS1_S1 + 97) -
                p_over_q * *(b + 181 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 97) +
                one_over_two_q * *(b + 131 * OS1_S1 + 65);
            *(b + 131 * OS1_S1 + 139) =
                prefactor_y * *(b + 131 * OS1_S1 + 98) -
                p_over_q * *(b + 181 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 98);
            *(b + 131 * OS1_S1 + 140) =
                prefactor_x * *(b + 131 * OS1_S1 + 104) -
                p_over_q * *(b + 176 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 76);
            *(b + 131 * OS1_S1 + 141) =
                prefactor_x * *(b + 131 * OS1_S1 + 105) -
                p_over_q * *(b + 176 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 105) +
                one_over_two_q * *(b + 131 * OS1_S1 + 77);
            *(b + 131 * OS1_S1 + 142) =
                prefactor_z * *(b + 131 * OS1_S1 + 99) -
                p_over_q * *(b + 182 * OS1_S1 + 99) +
                one_over_two_q * *(b + 90 * OS1_S1 + 99);
            *(b + 131 * OS1_S1 + 143) =
                prefactor_z * *(b + 131 * OS1_S1 + 100) -
                p_over_q * *(b + 182 * OS1_S1 + 100) +
                one_over_two_q * *(b + 90 * OS1_S1 + 100) +
                one_over_two_q * *(b + 131 * OS1_S1 + 66);
            *(b + 131 * OS1_S1 + 144) =
                prefactor_x * *(b + 131 * OS1_S1 + 108) -
                p_over_q * *(b + 176 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 108) +
                one_over_two_q * *(b + 131 * OS1_S1 + 80);
            *(b + 131 * OS1_S1 + 145) =
                prefactor_y * *(b + 131 * OS1_S1 + 103) -
                p_over_q * *(b + 181 * OS1_S1 + 103) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 103) +
                one_over_two_q * *(b + 131 * OS1_S1 + 70);
            *(b + 131 * OS1_S1 + 146) =
                prefactor_y * *(b + 131 * OS1_S1 + 104) -
                p_over_q * *(b + 181 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 104);
            *(b + 131 * OS1_S1 + 147) =
                prefactor_x * *(b + 131 * OS1_S1 + 111) -
                p_over_q * *(b + 176 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 111) +
                one_over_two_q * *(b + 131 * OS1_S1 + 83);
            *(b + 131 * OS1_S1 + 148) =
                prefactor_x * *(b + 131 * OS1_S1 + 112) -
                p_over_q * *(b + 176 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 112);
            *(b + 131 * OS1_S1 + 149) =
                prefactor_z * *(b + 131 * OS1_S1 + 105) -
                p_over_q * *(b + 182 * OS1_S1 + 105) +
                one_over_two_q * *(b + 90 * OS1_S1 + 105);
            *(b + 131 * OS1_S1 + 150) =
                prefactor_x * *(b + 131 * OS1_S1 + 114) -
                p_over_q * *(b + 176 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 114);
            *(b + 131 * OS1_S1 + 151) =
                prefactor_x * *(b + 131 * OS1_S1 + 115) -
                p_over_q * *(b + 176 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 115);
            *(b + 131 * OS1_S1 + 152) =
                prefactor_x * *(b + 131 * OS1_S1 + 116) -
                p_over_q * *(b + 176 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 116);
            *(b + 131 * OS1_S1 + 153) =
                prefactor_x * *(b + 131 * OS1_S1 + 117) -
                p_over_q * *(b + 176 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 117);
            *(b + 131 * OS1_S1 + 154) =
                prefactor_y * *(b + 131 * OS1_S1 + 111) -
                p_over_q * *(b + 181 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 111);
            *(b + 131 * OS1_S1 + 155) =
                prefactor_x * *(b + 131 * OS1_S1 + 119) -
                p_over_q * *(b + 176 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 119);
            *(b + 131 * OS1_S1 + 156) =
                prefactor_y * *(b + 131 * OS1_S1 + 112) -
                p_over_q * *(b + 181 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 131 * OS1_S1 + 77);
            *(b + 131 * OS1_S1 + 157) =
                prefactor_z * *(b + 131 * OS1_S1 + 112) -
                p_over_q * *(b + 182 * OS1_S1 + 112) +
                one_over_two_q * *(b + 90 * OS1_S1 + 112);
            *(b + 131 * OS1_S1 + 158) =
                prefactor_z * *(b + 131 * OS1_S1 + 113) -
                p_over_q * *(b + 182 * OS1_S1 + 113) +
                one_over_two_q * *(b + 90 * OS1_S1 + 113) +
                one_over_two_q * *(b + 131 * OS1_S1 + 77);
            *(b + 131 * OS1_S1 + 159) =
                prefactor_z * *(b + 131 * OS1_S1 + 114) -
                p_over_q * *(b + 182 * OS1_S1 + 114) +
                one_over_two_q * *(b + 90 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 78);
            *(b + 131 * OS1_S1 + 160) =
                prefactor_z * *(b + 131 * OS1_S1 + 115) -
                p_over_q * *(b + 182 * OS1_S1 + 115) +
                one_over_two_q * *(b + 90 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 131 * OS1_S1 + 79);
            *(b + 131 * OS1_S1 + 161) =
                prefactor_y * *(b + 131 * OS1_S1 + 117) -
                p_over_q * *(b + 181 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 82);
            *(b + 131 * OS1_S1 + 162) =
                prefactor_y * *(b + 131 * OS1_S1 + 118) -
                p_over_q * *(b + 181 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 118) +
                one_over_two_q * *(b + 131 * OS1_S1 + 83);
            *(b + 131 * OS1_S1 + 163) =
                prefactor_y * *(b + 131 * OS1_S1 + 119) -
                p_over_q * *(b + 181 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 119);
            *(b + 131 * OS1_S1 + 164) =
                prefactor_z * *(b + 131 * OS1_S1 + 119) -
                p_over_q * *(b + 182 * OS1_S1 + 119) +
                one_over_two_q * *(b + 90 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 131 * OS1_S1 + 83);
            *(b + 132 * OS1_S1 + 120) =
                prefactor_x * *(b + 132 * OS1_S1 + 84) -
                p_over_q * *(b + 177 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 132 * OS1_S1 + 56);
            *(b + 132 * OS1_S1 + 121) =
                prefactor_y * *(b + 132 * OS1_S1 + 84) -
                p_over_q * *(b + 182 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 84);
            *(b + 132 * OS1_S1 + 122) =
                prefactor_z * *(b + 132 * OS1_S1 + 84) -
                p_over_q * *(b + 183 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 84);
            *(b + 132 * OS1_S1 + 123) =
                prefactor_y * *(b + 132 * OS1_S1 + 85) -
                p_over_q * *(b + 182 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 85) +
                one_over_two_q * *(b + 132 * OS1_S1 + 56);
            *(b + 132 * OS1_S1 + 124) =
                prefactor_z * *(b + 132 * OS1_S1 + 85) -
                p_over_q * *(b + 183 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 85);
            *(b + 132 * OS1_S1 + 125) =
                prefactor_z * *(b + 132 * OS1_S1 + 86) -
                p_over_q * *(b + 183 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 86) +
                one_over_two_q * *(b + 132 * OS1_S1 + 56);
            *(b + 132 * OS1_S1 + 126) =
                prefactor_y * *(b + 132 * OS1_S1 + 87) -
                p_over_q * *(b + 182 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 57);
            *(b + 132 * OS1_S1 + 127) =
                prefactor_z * *(b + 132 * OS1_S1 + 87) -
                p_over_q * *(b + 183 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 87);
            *(b + 132 * OS1_S1 + 128) =
                prefactor_y * *(b + 132 * OS1_S1 + 89) -
                p_over_q * *(b + 182 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 89);
            *(b + 132 * OS1_S1 + 129) =
                prefactor_z * *(b + 132 * OS1_S1 + 89) -
                p_over_q * *(b + 183 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 58);
            *(b + 132 * OS1_S1 + 130) =
                prefactor_y * *(b + 132 * OS1_S1 + 90) -
                p_over_q * *(b + 182 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 59);
            *(b + 132 * OS1_S1 + 131) =
                prefactor_z * *(b + 132 * OS1_S1 + 90) -
                p_over_q * *(b + 183 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 90);
            *(b + 132 * OS1_S1 + 132) =
                prefactor_z * *(b + 132 * OS1_S1 + 91) -
                p_over_q * *(b + 183 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 91) +
                one_over_two_q * *(b + 132 * OS1_S1 + 59);
            *(b + 132 * OS1_S1 + 133) =
                prefactor_y * *(b + 132 * OS1_S1 + 93) -
                p_over_q * *(b + 182 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 93);
            *(b + 132 * OS1_S1 + 134) =
                prefactor_z * *(b + 132 * OS1_S1 + 93) -
                p_over_q * *(b + 183 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 61);
            *(b + 132 * OS1_S1 + 135) =
                prefactor_x * *(b + 132 * OS1_S1 + 99) -
                p_over_q * *(b + 177 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 71);
            *(b + 132 * OS1_S1 + 136) =
                prefactor_z * *(b + 132 * OS1_S1 + 94) -
                p_over_q * *(b + 183 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 94);
            *(b + 132 * OS1_S1 + 137) =
                prefactor_z * *(b + 132 * OS1_S1 + 95) -
                p_over_q * *(b + 183 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 95) +
                one_over_two_q * *(b + 132 * OS1_S1 + 62);
            *(b + 132 * OS1_S1 + 138) =
                prefactor_y * *(b + 132 * OS1_S1 + 97) -
                p_over_q * *(b + 182 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 97) +
                one_over_two_q * *(b + 132 * OS1_S1 + 65);
            *(b + 132 * OS1_S1 + 139) =
                prefactor_y * *(b + 132 * OS1_S1 + 98) -
                p_over_q * *(b + 182 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 98);
            *(b + 132 * OS1_S1 + 140) =
                prefactor_x * *(b + 132 * OS1_S1 + 104) -
                p_over_q * *(b + 177 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 76);
            *(b + 132 * OS1_S1 + 141) =
                prefactor_x * *(b + 132 * OS1_S1 + 105) -
                p_over_q * *(b + 177 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 105) +
                one_over_two_q * *(b + 132 * OS1_S1 + 77);
            *(b + 132 * OS1_S1 + 142) =
                prefactor_z * *(b + 132 * OS1_S1 + 99) -
                p_over_q * *(b + 183 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 99);
            *(b + 132 * OS1_S1 + 143) =
                prefactor_z * *(b + 132 * OS1_S1 + 100) -
                p_over_q * *(b + 183 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 100) +
                one_over_two_q * *(b + 132 * OS1_S1 + 66);
            *(b + 132 * OS1_S1 + 144) =
                prefactor_x * *(b + 132 * OS1_S1 + 108) -
                p_over_q * *(b + 177 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 108) +
                one_over_two_q * *(b + 132 * OS1_S1 + 80);
            *(b + 132 * OS1_S1 + 145) =
                prefactor_y * *(b + 132 * OS1_S1 + 103) -
                p_over_q * *(b + 182 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 103) +
                one_over_two_q * *(b + 132 * OS1_S1 + 70);
            *(b + 132 * OS1_S1 + 146) =
                prefactor_y * *(b + 132 * OS1_S1 + 104) -
                p_over_q * *(b + 182 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 104);
            *(b + 132 * OS1_S1 + 147) =
                prefactor_x * *(b + 132 * OS1_S1 + 111) -
                p_over_q * *(b + 177 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 111) +
                one_over_two_q * *(b + 132 * OS1_S1 + 83);
            *(b + 132 * OS1_S1 + 148) =
                prefactor_x * *(b + 132 * OS1_S1 + 112) -
                p_over_q * *(b + 177 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 112);
            *(b + 132 * OS1_S1 + 149) =
                prefactor_z * *(b + 132 * OS1_S1 + 105) -
                p_over_q * *(b + 183 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 105);
            *(b + 132 * OS1_S1 + 150) =
                prefactor_x * *(b + 132 * OS1_S1 + 114) -
                p_over_q * *(b + 177 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 114);
            *(b + 132 * OS1_S1 + 151) =
                prefactor_x * *(b + 132 * OS1_S1 + 115) -
                p_over_q * *(b + 177 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 115);
            *(b + 132 * OS1_S1 + 152) =
                prefactor_x * *(b + 132 * OS1_S1 + 116) -
                p_over_q * *(b + 177 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 116);
            *(b + 132 * OS1_S1 + 153) =
                prefactor_x * *(b + 132 * OS1_S1 + 117) -
                p_over_q * *(b + 177 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 117);
            *(b + 132 * OS1_S1 + 154) =
                prefactor_y * *(b + 132 * OS1_S1 + 111) -
                p_over_q * *(b + 182 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 111);
            *(b + 132 * OS1_S1 + 155) =
                prefactor_x * *(b + 132 * OS1_S1 + 119) -
                p_over_q * *(b + 177 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 96 * OS1_S1 + 119);
            *(b + 132 * OS1_S1 + 156) =
                prefactor_y * *(b + 132 * OS1_S1 + 112) -
                p_over_q * *(b + 182 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 132 * OS1_S1 + 77);
            *(b + 132 * OS1_S1 + 157) =
                prefactor_z * *(b + 132 * OS1_S1 + 112) -
                p_over_q * *(b + 183 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 112);
            *(b + 132 * OS1_S1 + 158) =
                prefactor_z * *(b + 132 * OS1_S1 + 113) -
                p_over_q * *(b + 183 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 113) +
                one_over_two_q * *(b + 132 * OS1_S1 + 77);
            *(b + 132 * OS1_S1 + 159) =
                prefactor_z * *(b + 132 * OS1_S1 + 114) -
                p_over_q * *(b + 183 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 78);
            *(b + 132 * OS1_S1 + 160) =
                prefactor_z * *(b + 132 * OS1_S1 + 115) -
                p_over_q * *(b + 183 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 79);
            *(b + 132 * OS1_S1 + 161) =
                prefactor_y * *(b + 132 * OS1_S1 + 117) -
                p_over_q * *(b + 182 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 132 * OS1_S1 + 82);
            *(b + 132 * OS1_S1 + 162) =
                prefactor_y * *(b + 132 * OS1_S1 + 118) -
                p_over_q * *(b + 182 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 118) +
                one_over_two_q * *(b + 132 * OS1_S1 + 83);
            *(b + 132 * OS1_S1 + 163) =
                prefactor_y * *(b + 132 * OS1_S1 + 119) -
                p_over_q * *(b + 182 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 119);
            *(b + 132 * OS1_S1 + 164) =
                prefactor_z * *(b + 132 * OS1_S1 + 119) -
                p_over_q * *(b + 183 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 132 * OS1_S1 + 83);
            *(b + 133 * OS1_S1 + 120) =
                prefactor_x * *(b + 133 * OS1_S1 + 84) -
                p_over_q * *(b + 178 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 133 * OS1_S1 + 56);
            *(b + 133 * OS1_S1 + 121) =
                prefactor_y * *(b + 133 * OS1_S1 + 84) -
                p_over_q * *(b + 183 * OS1_S1 + 84) +
                one_over_two_q * *(b + 93 * OS1_S1 + 84);
            *(b + 133 * OS1_S1 + 122) =
                prefactor_z * *(b + 133 * OS1_S1 + 84) -
                p_over_q * *(b + 184 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 84);
            *(b + 133 * OS1_S1 + 123) =
                prefactor_y * *(b + 133 * OS1_S1 + 85) -
                p_over_q * *(b + 183 * OS1_S1 + 85) +
                one_over_two_q * *(b + 93 * OS1_S1 + 85) +
                one_over_two_q * *(b + 133 * OS1_S1 + 56);
            *(b + 133 * OS1_S1 + 124) =
                prefactor_y * *(b + 133 * OS1_S1 + 86) -
                p_over_q * *(b + 183 * OS1_S1 + 86) +
                one_over_two_q * *(b + 93 * OS1_S1 + 86);
            *(b + 133 * OS1_S1 + 125) =
                prefactor_z * *(b + 133 * OS1_S1 + 86) -
                p_over_q * *(b + 184 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 86) +
                one_over_two_q * *(b + 133 * OS1_S1 + 56);
            *(b + 133 * OS1_S1 + 126) =
                prefactor_y * *(b + 133 * OS1_S1 + 87) -
                p_over_q * *(b + 183 * OS1_S1 + 87) +
                one_over_two_q * *(b + 93 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 57);
            *(b + 133 * OS1_S1 + 127) =
                prefactor_z * *(b + 133 * OS1_S1 + 87) -
                p_over_q * *(b + 184 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 87);
            *(b + 133 * OS1_S1 + 128) =
                prefactor_y * *(b + 133 * OS1_S1 + 89) -
                p_over_q * *(b + 183 * OS1_S1 + 89) +
                one_over_two_q * *(b + 93 * OS1_S1 + 89);
            *(b + 133 * OS1_S1 + 129) =
                prefactor_z * *(b + 133 * OS1_S1 + 89) -
                p_over_q * *(b + 184 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 58);
            *(b + 133 * OS1_S1 + 130) =
                prefactor_y * *(b + 133 * OS1_S1 + 90) -
                p_over_q * *(b + 183 * OS1_S1 + 90) +
                one_over_two_q * *(b + 93 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 133 * OS1_S1 + 59);
            *(b + 133 * OS1_S1 + 131) =
                prefactor_z * *(b + 133 * OS1_S1 + 90) -
                p_over_q * *(b + 184 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 90);
            *(b + 133 * OS1_S1 + 132) =
                prefactor_y * *(b + 133 * OS1_S1 + 92) -
                p_over_q * *(b + 183 * OS1_S1 + 92) +
                one_over_two_q * *(b + 93 * OS1_S1 + 92) +
                one_over_two_q * *(b + 133 * OS1_S1 + 61);
            *(b + 133 * OS1_S1 + 133) =
                prefactor_y * *(b + 133 * OS1_S1 + 93) -
                p_over_q * *(b + 183 * OS1_S1 + 93) +
                one_over_two_q * *(b + 93 * OS1_S1 + 93);
            *(b + 133 * OS1_S1 + 134) =
                prefactor_z * *(b + 133 * OS1_S1 + 93) -
                p_over_q * *(b + 184 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 133 * OS1_S1 + 61);
            *(b + 133 * OS1_S1 + 135) =
                prefactor_x * *(b + 133 * OS1_S1 + 99) -
                p_over_q * *(b + 178 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 71);
            *(b + 133 * OS1_S1 + 136) =
                prefactor_z * *(b + 133 * OS1_S1 + 94) -
                p_over_q * *(b + 184 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 94);
            *(b + 133 * OS1_S1 + 137) =
                prefactor_z * *(b + 133 * OS1_S1 + 95) -
                p_over_q * *(b + 184 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 95) +
                one_over_two_q * *(b + 133 * OS1_S1 + 62);
            *(b + 133 * OS1_S1 + 138) =
                prefactor_y * *(b + 133 * OS1_S1 + 97) -
                p_over_q * *(b + 183 * OS1_S1 + 97) +
                one_over_two_q * *(b + 93 * OS1_S1 + 97) +
                one_over_two_q * *(b + 133 * OS1_S1 + 65);
            *(b + 133 * OS1_S1 + 139) =
                prefactor_y * *(b + 133 * OS1_S1 + 98) -
                p_over_q * *(b + 183 * OS1_S1 + 98) +
                one_over_two_q * *(b + 93 * OS1_S1 + 98);
            *(b + 133 * OS1_S1 + 140) =
                prefactor_x * *(b + 133 * OS1_S1 + 104) -
                p_over_q * *(b + 178 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 76);
            *(b + 133 * OS1_S1 + 141) =
                prefactor_x * *(b + 133 * OS1_S1 + 105) -
                p_over_q * *(b + 178 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 105) +
                one_over_two_q * *(b + 133 * OS1_S1 + 77);
            *(b + 133 * OS1_S1 + 142) =
                prefactor_z * *(b + 133 * OS1_S1 + 99) -
                p_over_q * *(b + 184 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 99);
            *(b + 133 * OS1_S1 + 143) =
                prefactor_z * *(b + 133 * OS1_S1 + 100) -
                p_over_q * *(b + 184 * OS1_S1 + 100) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 100) +
                one_over_two_q * *(b + 133 * OS1_S1 + 66);
            *(b + 133 * OS1_S1 + 144) =
                prefactor_x * *(b + 133 * OS1_S1 + 108) -
                p_over_q * *(b + 178 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 108) +
                one_over_two_q * *(b + 133 * OS1_S1 + 80);
            *(b + 133 * OS1_S1 + 145) =
                prefactor_y * *(b + 133 * OS1_S1 + 103) -
                p_over_q * *(b + 183 * OS1_S1 + 103) +
                one_over_two_q * *(b + 93 * OS1_S1 + 103) +
                one_over_two_q * *(b + 133 * OS1_S1 + 70);
            *(b + 133 * OS1_S1 + 146) =
                prefactor_y * *(b + 133 * OS1_S1 + 104) -
                p_over_q * *(b + 183 * OS1_S1 + 104) +
                one_over_two_q * *(b + 93 * OS1_S1 + 104);
            *(b + 133 * OS1_S1 + 147) =
                prefactor_x * *(b + 133 * OS1_S1 + 111) -
                p_over_q * *(b + 178 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 111) +
                one_over_two_q * *(b + 133 * OS1_S1 + 83);
            *(b + 133 * OS1_S1 + 148) =
                prefactor_x * *(b + 133 * OS1_S1 + 112) -
                p_over_q * *(b + 178 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 112);
            *(b + 133 * OS1_S1 + 149) =
                prefactor_z * *(b + 133 * OS1_S1 + 105) -
                p_over_q * *(b + 184 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 105);
            *(b + 133 * OS1_S1 + 150) =
                prefactor_x * *(b + 133 * OS1_S1 + 114) -
                p_over_q * *(b + 178 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 114);
            *(b + 133 * OS1_S1 + 151) =
                prefactor_x * *(b + 133 * OS1_S1 + 115) -
                p_over_q * *(b + 178 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 115);
            *(b + 133 * OS1_S1 + 152) =
                prefactor_x * *(b + 133 * OS1_S1 + 116) -
                p_over_q * *(b + 178 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 116);
            *(b + 133 * OS1_S1 + 153) =
                prefactor_x * *(b + 133 * OS1_S1 + 117) -
                p_over_q * *(b + 178 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 117);
            *(b + 133 * OS1_S1 + 154) =
                prefactor_y * *(b + 133 * OS1_S1 + 111) -
                p_over_q * *(b + 183 * OS1_S1 + 111) +
                one_over_two_q * *(b + 93 * OS1_S1 + 111);
            *(b + 133 * OS1_S1 + 155) =
                prefactor_x * *(b + 133 * OS1_S1 + 119) -
                p_over_q * *(b + 178 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 119);
            *(b + 133 * OS1_S1 + 156) =
                prefactor_y * *(b + 133 * OS1_S1 + 112) -
                p_over_q * *(b + 183 * OS1_S1 + 112) +
                one_over_two_q * *(b + 93 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 133 * OS1_S1 + 77);
            *(b + 133 * OS1_S1 + 157) =
                prefactor_z * *(b + 133 * OS1_S1 + 112) -
                p_over_q * *(b + 184 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 112);
            *(b + 133 * OS1_S1 + 158) =
                prefactor_z * *(b + 133 * OS1_S1 + 113) -
                p_over_q * *(b + 184 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 113) +
                one_over_two_q * *(b + 133 * OS1_S1 + 77);
            *(b + 133 * OS1_S1 + 159) =
                prefactor_z * *(b + 133 * OS1_S1 + 114) -
                p_over_q * *(b + 184 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 78);
            *(b + 133 * OS1_S1 + 160) =
                prefactor_y * *(b + 133 * OS1_S1 + 116) -
                p_over_q * *(b + 183 * OS1_S1 + 116) +
                one_over_two_q * *(b + 93 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 133 * OS1_S1 + 81);
            *(b + 133 * OS1_S1 + 161) =
                prefactor_y * *(b + 133 * OS1_S1 + 117) -
                p_over_q * *(b + 183 * OS1_S1 + 117) +
                one_over_two_q * *(b + 93 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 82);
            *(b + 133 * OS1_S1 + 162) =
                prefactor_y * *(b + 133 * OS1_S1 + 118) -
                p_over_q * *(b + 183 * OS1_S1 + 118) +
                one_over_two_q * *(b + 93 * OS1_S1 + 118) +
                one_over_two_q * *(b + 133 * OS1_S1 + 83);
            *(b + 133 * OS1_S1 + 163) =
                prefactor_y * *(b + 133 * OS1_S1 + 119) -
                p_over_q * *(b + 183 * OS1_S1 + 119) +
                one_over_two_q * *(b + 93 * OS1_S1 + 119);
            *(b + 133 * OS1_S1 + 164) =
                prefactor_z * *(b + 133 * OS1_S1 + 119) -
                p_over_q * *(b + 184 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 133 * OS1_S1 + 83);
            *(b + 134 * OS1_S1 + 120) =
                prefactor_x * *(b + 134 * OS1_S1 + 84) -
                p_over_q * *(b + 179 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 134 * OS1_S1 + 56);
            *(b + 134 * OS1_S1 + 121) = prefactor_y * *(b + 134 * OS1_S1 + 84) -
                                        p_over_q * *(b + 184 * OS1_S1 + 84);
            *(b + 134 * OS1_S1 + 122) =
                prefactor_z * *(b + 134 * OS1_S1 + 84) -
                p_over_q * *(b + 185 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 84);
            *(b + 134 * OS1_S1 + 123) =
                prefactor_y * *(b + 134 * OS1_S1 + 85) -
                p_over_q * *(b + 184 * OS1_S1 + 85) +
                one_over_two_q * *(b + 134 * OS1_S1 + 56);
            *(b + 134 * OS1_S1 + 124) = prefactor_y * *(b + 134 * OS1_S1 + 86) -
                                        p_over_q * *(b + 184 * OS1_S1 + 86);
            *(b + 134 * OS1_S1 + 125) =
                prefactor_z * *(b + 134 * OS1_S1 + 86) -
                p_over_q * *(b + 185 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 86) +
                one_over_two_q * *(b + 134 * OS1_S1 + 56);
            *(b + 134 * OS1_S1 + 126) =
                prefactor_y * *(b + 134 * OS1_S1 + 87) -
                p_over_q * *(b + 184 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 57);
            *(b + 134 * OS1_S1 + 127) =
                prefactor_z * *(b + 134 * OS1_S1 + 87) -
                p_over_q * *(b + 185 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 87);
            *(b + 134 * OS1_S1 + 128) = prefactor_y * *(b + 134 * OS1_S1 + 89) -
                                        p_over_q * *(b + 184 * OS1_S1 + 89);
            *(b + 134 * OS1_S1 + 129) =
                prefactor_z * *(b + 134 * OS1_S1 + 89) -
                p_over_q * *(b + 185 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 58);
            *(b + 134 * OS1_S1 + 130) =
                prefactor_y * *(b + 134 * OS1_S1 + 90) -
                p_over_q * *(b + 184 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 134 * OS1_S1 + 59);
            *(b + 134 * OS1_S1 + 131) =
                prefactor_z * *(b + 134 * OS1_S1 + 90) -
                p_over_q * *(b + 185 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 90);
            *(b + 134 * OS1_S1 + 132) =
                prefactor_y * *(b + 134 * OS1_S1 + 92) -
                p_over_q * *(b + 184 * OS1_S1 + 92) +
                one_over_two_q * *(b + 134 * OS1_S1 + 61);
            *(b + 134 * OS1_S1 + 133) = prefactor_y * *(b + 134 * OS1_S1 + 93) -
                                        p_over_q * *(b + 184 * OS1_S1 + 93);
            *(b + 134 * OS1_S1 + 134) =
                prefactor_z * *(b + 134 * OS1_S1 + 93) -
                p_over_q * *(b + 185 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 134 * OS1_S1 + 61);
            *(b + 134 * OS1_S1 + 135) =
                prefactor_x * *(b + 134 * OS1_S1 + 99) -
                p_over_q * *(b + 179 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 71);
            *(b + 134 * OS1_S1 + 136) =
                prefactor_z * *(b + 134 * OS1_S1 + 94) -
                p_over_q * *(b + 185 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 94);
            *(b + 134 * OS1_S1 + 137) =
                prefactor_z * *(b + 134 * OS1_S1 + 95) -
                p_over_q * *(b + 185 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 95) +
                one_over_two_q * *(b + 134 * OS1_S1 + 62);
            *(b + 134 * OS1_S1 + 138) =
                prefactor_y * *(b + 134 * OS1_S1 + 97) -
                p_over_q * *(b + 184 * OS1_S1 + 97) +
                one_over_two_q * *(b + 134 * OS1_S1 + 65);
            *(b + 134 * OS1_S1 + 139) = prefactor_y * *(b + 134 * OS1_S1 + 98) -
                                        p_over_q * *(b + 184 * OS1_S1 + 98);
            *(b + 134 * OS1_S1 + 140) =
                prefactor_x * *(b + 134 * OS1_S1 + 104) -
                p_over_q * *(b + 179 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 76);
            *(b + 134 * OS1_S1 + 141) =
                prefactor_x * *(b + 134 * OS1_S1 + 105) -
                p_over_q * *(b + 179 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 105) +
                one_over_two_q * *(b + 134 * OS1_S1 + 77);
            *(b + 134 * OS1_S1 + 142) =
                prefactor_z * *(b + 134 * OS1_S1 + 99) -
                p_over_q * *(b + 185 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 99);
            *(b + 134 * OS1_S1 + 143) =
                prefactor_z * *(b + 134 * OS1_S1 + 100) -
                p_over_q * *(b + 185 * OS1_S1 + 100) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 100) +
                one_over_two_q * *(b + 134 * OS1_S1 + 66);
            *(b + 134 * OS1_S1 + 144) =
                prefactor_x * *(b + 134 * OS1_S1 + 108) -
                p_over_q * *(b + 179 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 108) +
                one_over_two_q * *(b + 134 * OS1_S1 + 80);
            *(b + 134 * OS1_S1 + 145) =
                prefactor_y * *(b + 134 * OS1_S1 + 103) -
                p_over_q * *(b + 184 * OS1_S1 + 103) +
                one_over_two_q * *(b + 134 * OS1_S1 + 70);
            *(b + 134 * OS1_S1 + 146) =
                prefactor_y * *(b + 134 * OS1_S1 + 104) -
                p_over_q * *(b + 184 * OS1_S1 + 104);
            *(b + 134 * OS1_S1 + 147) =
                prefactor_x * *(b + 134 * OS1_S1 + 111) -
                p_over_q * *(b + 179 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 111) +
                one_over_two_q * *(b + 134 * OS1_S1 + 83);
            *(b + 134 * OS1_S1 + 148) =
                prefactor_x * *(b + 134 * OS1_S1 + 112) -
                p_over_q * *(b + 179 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 112);
            *(b + 134 * OS1_S1 + 149) =
                prefactor_z * *(b + 134 * OS1_S1 + 105) -
                p_over_q * *(b + 185 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 105);
            *(b + 134 * OS1_S1 + 150) =
                prefactor_x * *(b + 134 * OS1_S1 + 114) -
                p_over_q * *(b + 179 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 114);
            *(b + 134 * OS1_S1 + 151) =
                prefactor_x * *(b + 134 * OS1_S1 + 115) -
                p_over_q * *(b + 179 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 115);
            *(b + 134 * OS1_S1 + 152) =
                prefactor_x * *(b + 134 * OS1_S1 + 116) -
                p_over_q * *(b + 179 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 116);
            *(b + 134 * OS1_S1 + 153) =
                prefactor_x * *(b + 134 * OS1_S1 + 117) -
                p_over_q * *(b + 179 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 117);
            *(b + 134 * OS1_S1 + 154) =
                prefactor_y * *(b + 134 * OS1_S1 + 111) -
                p_over_q * *(b + 184 * OS1_S1 + 111);
            *(b + 134 * OS1_S1 + 155) =
                prefactor_x * *(b + 134 * OS1_S1 + 119) -
                p_over_q * *(b + 179 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 98 * OS1_S1 + 119);
            *(b + 134 * OS1_S1 + 156) =
                prefactor_y * *(b + 134 * OS1_S1 + 112) -
                p_over_q * *(b + 184 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 134 * OS1_S1 + 77);
            *(b + 134 * OS1_S1 + 157) =
                prefactor_z * *(b + 134 * OS1_S1 + 112) -
                p_over_q * *(b + 185 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 112);
            *(b + 134 * OS1_S1 + 158) =
                prefactor_z * *(b + 134 * OS1_S1 + 113) -
                p_over_q * *(b + 185 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 113) +
                one_over_two_q * *(b + 134 * OS1_S1 + 77);
            *(b + 134 * OS1_S1 + 159) =
                prefactor_z * *(b + 134 * OS1_S1 + 114) -
                p_over_q * *(b + 185 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 78);
            *(b + 134 * OS1_S1 + 160) =
                prefactor_y * *(b + 134 * OS1_S1 + 116) -
                p_over_q * *(b + 184 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 134 * OS1_S1 + 81);
            *(b + 134 * OS1_S1 + 161) =
                prefactor_y * *(b + 134 * OS1_S1 + 117) -
                p_over_q * *(b + 184 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 134 * OS1_S1 + 82);
            *(b + 134 * OS1_S1 + 162) =
                prefactor_y * *(b + 134 * OS1_S1 + 118) -
                p_over_q * *(b + 184 * OS1_S1 + 118) +
                one_over_two_q * *(b + 134 * OS1_S1 + 83);
            *(b + 134 * OS1_S1 + 163) =
                prefactor_y * *(b + 134 * OS1_S1 + 119) -
                p_over_q * *(b + 184 * OS1_S1 + 119);
            *(b + 134 * OS1_S1 + 164) =
                prefactor_z * *(b + 134 * OS1_S1 + 119) -
                p_over_q * *(b + 185 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 93 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 134 * OS1_S1 + 83);
            *(b + 135 * OS1_S1 + 120) =
                prefactor_x * *(b + 135 * OS1_S1 + 84) -
                p_over_q * *(b + 180 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 135 * OS1_S1 + 56);
            *(b + 135 * OS1_S1 + 121) =
                prefactor_y * *(b + 135 * OS1_S1 + 84) -
                p_over_q * *(b + 186 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 84);
            *(b + 135 * OS1_S1 + 122) = prefactor_z * *(b + 135 * OS1_S1 + 84) -
                                        p_over_q * *(b + 187 * OS1_S1 + 84);
            *(b + 135 * OS1_S1 + 123) =
                prefactor_y * *(b + 135 * OS1_S1 + 85) -
                p_over_q * *(b + 186 * OS1_S1 + 85) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 85) +
                one_over_two_q * *(b + 135 * OS1_S1 + 56);
            *(b + 135 * OS1_S1 + 124) = prefactor_z * *(b + 135 * OS1_S1 + 85) -
                                        p_over_q * *(b + 187 * OS1_S1 + 85);
            *(b + 135 * OS1_S1 + 125) =
                prefactor_z * *(b + 135 * OS1_S1 + 86) -
                p_over_q * *(b + 187 * OS1_S1 + 86) +
                one_over_two_q * *(b + 135 * OS1_S1 + 56);
            *(b + 135 * OS1_S1 + 126) =
                prefactor_y * *(b + 135 * OS1_S1 + 87) -
                p_over_q * *(b + 186 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 57);
            *(b + 135 * OS1_S1 + 127) = prefactor_z * *(b + 135 * OS1_S1 + 87) -
                                        p_over_q * *(b + 187 * OS1_S1 + 87);
            *(b + 135 * OS1_S1 + 128) =
                prefactor_y * *(b + 135 * OS1_S1 + 89) -
                p_over_q * *(b + 186 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 89);
            *(b + 135 * OS1_S1 + 129) =
                prefactor_z * *(b + 135 * OS1_S1 + 89) -
                p_over_q * *(b + 187 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 58);
            *(b + 135 * OS1_S1 + 130) =
                prefactor_x * *(b + 135 * OS1_S1 + 94) -
                p_over_q * *(b + 180 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 135 * OS1_S1 + 66);
            *(b + 135 * OS1_S1 + 131) = prefactor_z * *(b + 135 * OS1_S1 + 90) -
                                        p_over_q * *(b + 187 * OS1_S1 + 90);
            *(b + 135 * OS1_S1 + 132) =
                prefactor_z * *(b + 135 * OS1_S1 + 91) -
                p_over_q * *(b + 187 * OS1_S1 + 91) +
                one_over_two_q * *(b + 135 * OS1_S1 + 59);
            *(b + 135 * OS1_S1 + 133) =
                prefactor_y * *(b + 135 * OS1_S1 + 93) -
                p_over_q * *(b + 186 * OS1_S1 + 93) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 93);
            *(b + 135 * OS1_S1 + 134) =
                prefactor_z * *(b + 135 * OS1_S1 + 93) -
                p_over_q * *(b + 187 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 135 * OS1_S1 + 61);
            *(b + 135 * OS1_S1 + 135) =
                prefactor_x * *(b + 135 * OS1_S1 + 99) -
                p_over_q * *(b + 180 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 71);
            *(b + 135 * OS1_S1 + 136) = prefactor_z * *(b + 135 * OS1_S1 + 94) -
                                        p_over_q * *(b + 187 * OS1_S1 + 94);
            *(b + 135 * OS1_S1 + 137) =
                prefactor_z * *(b + 135 * OS1_S1 + 95) -
                p_over_q * *(b + 187 * OS1_S1 + 95) +
                one_over_two_q * *(b + 135 * OS1_S1 + 62);
            *(b + 135 * OS1_S1 + 138) =
                prefactor_y * *(b + 135 * OS1_S1 + 97) -
                p_over_q * *(b + 186 * OS1_S1 + 97) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 97) +
                one_over_two_q * *(b + 135 * OS1_S1 + 65);
            *(b + 135 * OS1_S1 + 139) =
                prefactor_y * *(b + 135 * OS1_S1 + 98) -
                p_over_q * *(b + 186 * OS1_S1 + 98) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 98);
            *(b + 135 * OS1_S1 + 140) =
                prefactor_x * *(b + 135 * OS1_S1 + 104) -
                p_over_q * *(b + 180 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 76);
            *(b + 135 * OS1_S1 + 141) =
                prefactor_x * *(b + 135 * OS1_S1 + 105) -
                p_over_q * *(b + 180 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 105) +
                one_over_two_q * *(b + 135 * OS1_S1 + 77);
            *(b + 135 * OS1_S1 + 142) = prefactor_z * *(b + 135 * OS1_S1 + 99) -
                                        p_over_q * *(b + 187 * OS1_S1 + 99);
            *(b + 135 * OS1_S1 + 143) =
                prefactor_z * *(b + 135 * OS1_S1 + 100) -
                p_over_q * *(b + 187 * OS1_S1 + 100) +
                one_over_two_q * *(b + 135 * OS1_S1 + 66);
            *(b + 135 * OS1_S1 + 144) =
                prefactor_x * *(b + 135 * OS1_S1 + 108) -
                p_over_q * *(b + 180 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 108) +
                one_over_two_q * *(b + 135 * OS1_S1 + 80);
            *(b + 135 * OS1_S1 + 145) =
                prefactor_x * *(b + 135 * OS1_S1 + 109) -
                p_over_q * *(b + 180 * OS1_S1 + 109) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 109) +
                one_over_two_q * *(b + 135 * OS1_S1 + 81);
            *(b + 135 * OS1_S1 + 146) =
                prefactor_y * *(b + 135 * OS1_S1 + 104) -
                p_over_q * *(b + 186 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 104);
            *(b + 135 * OS1_S1 + 147) =
                prefactor_x * *(b + 135 * OS1_S1 + 111) -
                p_over_q * *(b + 180 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 111) +
                one_over_two_q * *(b + 135 * OS1_S1 + 83);
            *(b + 135 * OS1_S1 + 148) =
                prefactor_x * *(b + 135 * OS1_S1 + 112) -
                p_over_q * *(b + 180 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 112);
            *(b + 135 * OS1_S1 + 149) =
                prefactor_z * *(b + 135 * OS1_S1 + 105) -
                p_over_q * *(b + 187 * OS1_S1 + 105);
            *(b + 135 * OS1_S1 + 150) =
                prefactor_x * *(b + 135 * OS1_S1 + 114) -
                p_over_q * *(b + 180 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 114);
            *(b + 135 * OS1_S1 + 151) =
                prefactor_x * *(b + 135 * OS1_S1 + 115) -
                p_over_q * *(b + 180 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 115);
            *(b + 135 * OS1_S1 + 152) =
                prefactor_x * *(b + 135 * OS1_S1 + 116) -
                p_over_q * *(b + 180 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 116);
            *(b + 135 * OS1_S1 + 153) =
                prefactor_x * *(b + 135 * OS1_S1 + 117) -
                p_over_q * *(b + 180 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 117);
            *(b + 135 * OS1_S1 + 154) =
                prefactor_x * *(b + 135 * OS1_S1 + 118) -
                p_over_q * *(b + 180 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 118);
            *(b + 135 * OS1_S1 + 155) =
                prefactor_x * *(b + 135 * OS1_S1 + 119) -
                p_over_q * *(b + 180 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 119);
            *(b + 135 * OS1_S1 + 156) =
                prefactor_y * *(b + 135 * OS1_S1 + 112) -
                p_over_q * *(b + 186 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 135 * OS1_S1 + 77);
            *(b + 135 * OS1_S1 + 157) =
                prefactor_z * *(b + 135 * OS1_S1 + 112) -
                p_over_q * *(b + 187 * OS1_S1 + 112);
            *(b + 135 * OS1_S1 + 158) =
                prefactor_z * *(b + 135 * OS1_S1 + 113) -
                p_over_q * *(b + 187 * OS1_S1 + 113) +
                one_over_two_q * *(b + 135 * OS1_S1 + 77);
            *(b + 135 * OS1_S1 + 159) =
                prefactor_z * *(b + 135 * OS1_S1 + 114) -
                p_over_q * *(b + 187 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 78);
            *(b + 135 * OS1_S1 + 160) =
                prefactor_z * *(b + 135 * OS1_S1 + 115) -
                p_over_q * *(b + 187 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 135 * OS1_S1 + 79);
            *(b + 135 * OS1_S1 + 161) =
                prefactor_y * *(b + 135 * OS1_S1 + 117) -
                p_over_q * *(b + 186 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 135 * OS1_S1 + 82);
            *(b + 135 * OS1_S1 + 162) =
                prefactor_y * *(b + 135 * OS1_S1 + 118) -
                p_over_q * *(b + 186 * OS1_S1 + 118) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 118) +
                one_over_two_q * *(b + 135 * OS1_S1 + 83);
            *(b + 135 * OS1_S1 + 163) =
                prefactor_y * *(b + 135 * OS1_S1 + 119) -
                p_over_q * *(b + 186 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 94 * OS1_S1 + 119);
            *(b + 135 * OS1_S1 + 164) =
                prefactor_z * *(b + 135 * OS1_S1 + 119) -
                p_over_q * *(b + 187 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 135 * OS1_S1 + 83);
            *(b + 136 * OS1_S1 + 120) =
                prefactor_x * *(b + 136 * OS1_S1 + 84) -
                p_over_q * *(b + 181 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 136 * OS1_S1 + 56);
            *(b + 136 * OS1_S1 + 121) =
                prefactor_y * *(b + 136 * OS1_S1 + 84) -
                p_over_q * *(b + 187 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 84);
            *(b + 136 * OS1_S1 + 122) =
                prefactor_z * *(b + 136 * OS1_S1 + 84) -
                p_over_q * *(b + 188 * OS1_S1 + 84) +
                one_over_two_q * *(b + 94 * OS1_S1 + 84);
            *(b + 136 * OS1_S1 + 123) =
                prefactor_y * *(b + 136 * OS1_S1 + 85) -
                p_over_q * *(b + 187 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 85) +
                one_over_two_q * *(b + 136 * OS1_S1 + 56);
            *(b + 136 * OS1_S1 + 124) =
                prefactor_z * *(b + 136 * OS1_S1 + 85) -
                p_over_q * *(b + 188 * OS1_S1 + 85) +
                one_over_two_q * *(b + 94 * OS1_S1 + 85);
            *(b + 136 * OS1_S1 + 125) =
                prefactor_z * *(b + 136 * OS1_S1 + 86) -
                p_over_q * *(b + 188 * OS1_S1 + 86) +
                one_over_two_q * *(b + 94 * OS1_S1 + 86) +
                one_over_two_q * *(b + 136 * OS1_S1 + 56);
            *(b + 136 * OS1_S1 + 126) =
                prefactor_y * *(b + 136 * OS1_S1 + 87) -
                p_over_q * *(b + 187 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 57);
            *(b + 136 * OS1_S1 + 127) =
                prefactor_z * *(b + 136 * OS1_S1 + 87) -
                p_over_q * *(b + 188 * OS1_S1 + 87) +
                one_over_two_q * *(b + 94 * OS1_S1 + 87);
            *(b + 136 * OS1_S1 + 128) =
                prefactor_y * *(b + 136 * OS1_S1 + 89) -
                p_over_q * *(b + 187 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 89);
            *(b + 136 * OS1_S1 + 129) =
                prefactor_z * *(b + 136 * OS1_S1 + 89) -
                p_over_q * *(b + 188 * OS1_S1 + 89) +
                one_over_two_q * *(b + 94 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 58);
            *(b + 136 * OS1_S1 + 130) =
                prefactor_x * *(b + 136 * OS1_S1 + 94) -
                p_over_q * *(b + 181 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 136 * OS1_S1 + 66);
            *(b + 136 * OS1_S1 + 131) =
                prefactor_z * *(b + 136 * OS1_S1 + 90) -
                p_over_q * *(b + 188 * OS1_S1 + 90) +
                one_over_two_q * *(b + 94 * OS1_S1 + 90);
            *(b + 136 * OS1_S1 + 132) =
                prefactor_z * *(b + 136 * OS1_S1 + 91) -
                p_over_q * *(b + 188 * OS1_S1 + 91) +
                one_over_two_q * *(b + 94 * OS1_S1 + 91) +
                one_over_two_q * *(b + 136 * OS1_S1 + 59);
            *(b + 136 * OS1_S1 + 133) =
                prefactor_y * *(b + 136 * OS1_S1 + 93) -
                p_over_q * *(b + 187 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 93);
            *(b + 136 * OS1_S1 + 134) =
                prefactor_z * *(b + 136 * OS1_S1 + 93) -
                p_over_q * *(b + 188 * OS1_S1 + 93) +
                one_over_two_q * *(b + 94 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 136 * OS1_S1 + 61);
            *(b + 136 * OS1_S1 + 135) =
                prefactor_x * *(b + 136 * OS1_S1 + 99) -
                p_over_q * *(b + 181 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 71);
            *(b + 136 * OS1_S1 + 136) =
                prefactor_z * *(b + 136 * OS1_S1 + 94) -
                p_over_q * *(b + 188 * OS1_S1 + 94) +
                one_over_two_q * *(b + 94 * OS1_S1 + 94);
            *(b + 136 * OS1_S1 + 137) =
                prefactor_z * *(b + 136 * OS1_S1 + 95) -
                p_over_q * *(b + 188 * OS1_S1 + 95) +
                one_over_two_q * *(b + 94 * OS1_S1 + 95) +
                one_over_two_q * *(b + 136 * OS1_S1 + 62);
            *(b + 136 * OS1_S1 + 138) =
                prefactor_y * *(b + 136 * OS1_S1 + 97) -
                p_over_q * *(b + 187 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 97) +
                one_over_two_q * *(b + 136 * OS1_S1 + 65);
            *(b + 136 * OS1_S1 + 139) =
                prefactor_y * *(b + 136 * OS1_S1 + 98) -
                p_over_q * *(b + 187 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 98);
            *(b + 136 * OS1_S1 + 140) =
                prefactor_x * *(b + 136 * OS1_S1 + 104) -
                p_over_q * *(b + 181 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 76);
            *(b + 136 * OS1_S1 + 141) =
                prefactor_x * *(b + 136 * OS1_S1 + 105) -
                p_over_q * *(b + 181 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 105) +
                one_over_two_q * *(b + 136 * OS1_S1 + 77);
            *(b + 136 * OS1_S1 + 142) =
                prefactor_z * *(b + 136 * OS1_S1 + 99) -
                p_over_q * *(b + 188 * OS1_S1 + 99) +
                one_over_two_q * *(b + 94 * OS1_S1 + 99);
            *(b + 136 * OS1_S1 + 143) =
                prefactor_z * *(b + 136 * OS1_S1 + 100) -
                p_over_q * *(b + 188 * OS1_S1 + 100) +
                one_over_two_q * *(b + 94 * OS1_S1 + 100) +
                one_over_two_q * *(b + 136 * OS1_S1 + 66);
            *(b + 136 * OS1_S1 + 144) =
                prefactor_x * *(b + 136 * OS1_S1 + 108) -
                p_over_q * *(b + 181 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 108) +
                one_over_two_q * *(b + 136 * OS1_S1 + 80);
            *(b + 136 * OS1_S1 + 145) =
                prefactor_x * *(b + 136 * OS1_S1 + 109) -
                p_over_q * *(b + 181 * OS1_S1 + 109) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 109) +
                one_over_two_q * *(b + 136 * OS1_S1 + 81);
            *(b + 136 * OS1_S1 + 146) =
                prefactor_y * *(b + 136 * OS1_S1 + 104) -
                p_over_q * *(b + 187 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 104);
            *(b + 136 * OS1_S1 + 147) =
                prefactor_x * *(b + 136 * OS1_S1 + 111) -
                p_over_q * *(b + 181 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 111) +
                one_over_two_q * *(b + 136 * OS1_S1 + 83);
            *(b + 136 * OS1_S1 + 148) =
                prefactor_x * *(b + 136 * OS1_S1 + 112) -
                p_over_q * *(b + 181 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 112);
            *(b + 136 * OS1_S1 + 149) =
                prefactor_z * *(b + 136 * OS1_S1 + 105) -
                p_over_q * *(b + 188 * OS1_S1 + 105) +
                one_over_two_q * *(b + 94 * OS1_S1 + 105);
            *(b + 136 * OS1_S1 + 150) =
                prefactor_x * *(b + 136 * OS1_S1 + 114) -
                p_over_q * *(b + 181 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 114);
            *(b + 136 * OS1_S1 + 151) =
                prefactor_x * *(b + 136 * OS1_S1 + 115) -
                p_over_q * *(b + 181 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 115);
            *(b + 136 * OS1_S1 + 152) =
                prefactor_x * *(b + 136 * OS1_S1 + 116) -
                p_over_q * *(b + 181 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 116);
            *(b + 136 * OS1_S1 + 153) =
                prefactor_x * *(b + 136 * OS1_S1 + 117) -
                p_over_q * *(b + 181 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 117);
            *(b + 136 * OS1_S1 + 154) =
                prefactor_x * *(b + 136 * OS1_S1 + 118) -
                p_over_q * *(b + 181 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 118);
            *(b + 136 * OS1_S1 + 155) =
                prefactor_x * *(b + 136 * OS1_S1 + 119) -
                p_over_q * *(b + 181 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 119);
            *(b + 136 * OS1_S1 + 156) =
                prefactor_y * *(b + 136 * OS1_S1 + 112) -
                p_over_q * *(b + 187 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 136 * OS1_S1 + 77);
            *(b + 136 * OS1_S1 + 157) =
                prefactor_z * *(b + 136 * OS1_S1 + 112) -
                p_over_q * *(b + 188 * OS1_S1 + 112) +
                one_over_two_q * *(b + 94 * OS1_S1 + 112);
            *(b + 136 * OS1_S1 + 158) =
                prefactor_z * *(b + 136 * OS1_S1 + 113) -
                p_over_q * *(b + 188 * OS1_S1 + 113) +
                one_over_two_q * *(b + 94 * OS1_S1 + 113) +
                one_over_two_q * *(b + 136 * OS1_S1 + 77);
            *(b + 136 * OS1_S1 + 159) =
                prefactor_z * *(b + 136 * OS1_S1 + 114) -
                p_over_q * *(b + 188 * OS1_S1 + 114) +
                one_over_two_q * *(b + 94 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 78);
            *(b + 136 * OS1_S1 + 160) =
                prefactor_z * *(b + 136 * OS1_S1 + 115) -
                p_over_q * *(b + 188 * OS1_S1 + 115) +
                one_over_two_q * *(b + 94 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 136 * OS1_S1 + 79);
            *(b + 136 * OS1_S1 + 161) =
                prefactor_y * *(b + 136 * OS1_S1 + 117) -
                p_over_q * *(b + 187 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 82);
            *(b + 136 * OS1_S1 + 162) =
                prefactor_y * *(b + 136 * OS1_S1 + 118) -
                p_over_q * *(b + 187 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 118) +
                one_over_two_q * *(b + 136 * OS1_S1 + 83);
            *(b + 136 * OS1_S1 + 163) =
                prefactor_y * *(b + 136 * OS1_S1 + 119) -
                p_over_q * *(b + 187 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 95 * OS1_S1 + 119);
            *(b + 136 * OS1_S1 + 164) =
                prefactor_z * *(b + 136 * OS1_S1 + 119) -
                p_over_q * *(b + 188 * OS1_S1 + 119) +
                one_over_two_q * *(b + 94 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 136 * OS1_S1 + 83);
            *(b + 137 * OS1_S1 + 120) =
                prefactor_x * *(b + 137 * OS1_S1 + 84) -
                p_over_q * *(b + 182 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 137 * OS1_S1 + 56);
            *(b + 137 * OS1_S1 + 121) =
                prefactor_y * *(b + 137 * OS1_S1 + 84) -
                p_over_q * *(b + 188 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 84);
            *(b + 137 * OS1_S1 + 122) =
                prefactor_z * *(b + 137 * OS1_S1 + 84) -
                p_over_q * *(b + 189 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 84);
            *(b + 137 * OS1_S1 + 123) =
                prefactor_y * *(b + 137 * OS1_S1 + 85) -
                p_over_q * *(b + 188 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 85) +
                one_over_two_q * *(b + 137 * OS1_S1 + 56);
            *(b + 137 * OS1_S1 + 124) =
                prefactor_z * *(b + 137 * OS1_S1 + 85) -
                p_over_q * *(b + 189 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 85);
            *(b + 137 * OS1_S1 + 125) =
                prefactor_z * *(b + 137 * OS1_S1 + 86) -
                p_over_q * *(b + 189 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 86) +
                one_over_two_q * *(b + 137 * OS1_S1 + 56);
            *(b + 137 * OS1_S1 + 126) =
                prefactor_y * *(b + 137 * OS1_S1 + 87) -
                p_over_q * *(b + 188 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 57);
            *(b + 137 * OS1_S1 + 127) =
                prefactor_z * *(b + 137 * OS1_S1 + 87) -
                p_over_q * *(b + 189 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 87);
            *(b + 137 * OS1_S1 + 128) =
                prefactor_y * *(b + 137 * OS1_S1 + 89) -
                p_over_q * *(b + 188 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 89);
            *(b + 137 * OS1_S1 + 129) =
                prefactor_z * *(b + 137 * OS1_S1 + 89) -
                p_over_q * *(b + 189 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 58);
            *(b + 137 * OS1_S1 + 130) =
                prefactor_y * *(b + 137 * OS1_S1 + 90) -
                p_over_q * *(b + 188 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 59);
            *(b + 137 * OS1_S1 + 131) =
                prefactor_z * *(b + 137 * OS1_S1 + 90) -
                p_over_q * *(b + 189 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 90);
            *(b + 137 * OS1_S1 + 132) =
                prefactor_z * *(b + 137 * OS1_S1 + 91) -
                p_over_q * *(b + 189 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 91) +
                one_over_two_q * *(b + 137 * OS1_S1 + 59);
            *(b + 137 * OS1_S1 + 133) =
                prefactor_y * *(b + 137 * OS1_S1 + 93) -
                p_over_q * *(b + 188 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 93);
            *(b + 137 * OS1_S1 + 134) =
                prefactor_z * *(b + 137 * OS1_S1 + 93) -
                p_over_q * *(b + 189 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 61);
            *(b + 137 * OS1_S1 + 135) =
                prefactor_x * *(b + 137 * OS1_S1 + 99) -
                p_over_q * *(b + 182 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 71);
            *(b + 137 * OS1_S1 + 136) =
                prefactor_z * *(b + 137 * OS1_S1 + 94) -
                p_over_q * *(b + 189 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 94);
            *(b + 137 * OS1_S1 + 137) =
                prefactor_z * *(b + 137 * OS1_S1 + 95) -
                p_over_q * *(b + 189 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 95) +
                one_over_two_q * *(b + 137 * OS1_S1 + 62);
            *(b + 137 * OS1_S1 + 138) =
                prefactor_y * *(b + 137 * OS1_S1 + 97) -
                p_over_q * *(b + 188 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 97) +
                one_over_two_q * *(b + 137 * OS1_S1 + 65);
            *(b + 137 * OS1_S1 + 139) =
                prefactor_y * *(b + 137 * OS1_S1 + 98) -
                p_over_q * *(b + 188 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 98);
            *(b + 137 * OS1_S1 + 140) =
                prefactor_x * *(b + 137 * OS1_S1 + 104) -
                p_over_q * *(b + 182 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 76);
            *(b + 137 * OS1_S1 + 141) =
                prefactor_x * *(b + 137 * OS1_S1 + 105) -
                p_over_q * *(b + 182 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 105) +
                one_over_two_q * *(b + 137 * OS1_S1 + 77);
            *(b + 137 * OS1_S1 + 142) =
                prefactor_z * *(b + 137 * OS1_S1 + 99) -
                p_over_q * *(b + 189 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 99);
            *(b + 137 * OS1_S1 + 143) =
                prefactor_z * *(b + 137 * OS1_S1 + 100) -
                p_over_q * *(b + 189 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 100) +
                one_over_two_q * *(b + 137 * OS1_S1 + 66);
            *(b + 137 * OS1_S1 + 144) =
                prefactor_x * *(b + 137 * OS1_S1 + 108) -
                p_over_q * *(b + 182 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 108) +
                one_over_two_q * *(b + 137 * OS1_S1 + 80);
            *(b + 137 * OS1_S1 + 145) =
                prefactor_y * *(b + 137 * OS1_S1 + 103) -
                p_over_q * *(b + 188 * OS1_S1 + 103) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 103) +
                one_over_two_q * *(b + 137 * OS1_S1 + 70);
            *(b + 137 * OS1_S1 + 146) =
                prefactor_y * *(b + 137 * OS1_S1 + 104) -
                p_over_q * *(b + 188 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 104);
            *(b + 137 * OS1_S1 + 147) =
                prefactor_x * *(b + 137 * OS1_S1 + 111) -
                p_over_q * *(b + 182 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 111) +
                one_over_two_q * *(b + 137 * OS1_S1 + 83);
            *(b + 137 * OS1_S1 + 148) =
                prefactor_x * *(b + 137 * OS1_S1 + 112) -
                p_over_q * *(b + 182 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 112);
            *(b + 137 * OS1_S1 + 149) =
                prefactor_z * *(b + 137 * OS1_S1 + 105) -
                p_over_q * *(b + 189 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 105);
            *(b + 137 * OS1_S1 + 150) =
                prefactor_x * *(b + 137 * OS1_S1 + 114) -
                p_over_q * *(b + 182 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 114);
            *(b + 137 * OS1_S1 + 151) =
                prefactor_x * *(b + 137 * OS1_S1 + 115) -
                p_over_q * *(b + 182 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 115);
            *(b + 137 * OS1_S1 + 152) =
                prefactor_x * *(b + 137 * OS1_S1 + 116) -
                p_over_q * *(b + 182 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 116);
            *(b + 137 * OS1_S1 + 153) =
                prefactor_x * *(b + 137 * OS1_S1 + 117) -
                p_over_q * *(b + 182 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 117);
            *(b + 137 * OS1_S1 + 154) =
                prefactor_y * *(b + 137 * OS1_S1 + 111) -
                p_over_q * *(b + 188 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 111);
            *(b + 137 * OS1_S1 + 155) =
                prefactor_x * *(b + 137 * OS1_S1 + 119) -
                p_over_q * *(b + 182 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 119);
            *(b + 137 * OS1_S1 + 156) =
                prefactor_y * *(b + 137 * OS1_S1 + 112) -
                p_over_q * *(b + 188 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 137 * OS1_S1 + 77);
            *(b + 137 * OS1_S1 + 157) =
                prefactor_z * *(b + 137 * OS1_S1 + 112) -
                p_over_q * *(b + 189 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 112);
            *(b + 137 * OS1_S1 + 158) =
                prefactor_z * *(b + 137 * OS1_S1 + 113) -
                p_over_q * *(b + 189 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 113) +
                one_over_two_q * *(b + 137 * OS1_S1 + 77);
            *(b + 137 * OS1_S1 + 159) =
                prefactor_z * *(b + 137 * OS1_S1 + 114) -
                p_over_q * *(b + 189 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 78);
            *(b + 137 * OS1_S1 + 160) =
                prefactor_z * *(b + 137 * OS1_S1 + 115) -
                p_over_q * *(b + 189 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 79);
            *(b + 137 * OS1_S1 + 161) =
                prefactor_y * *(b + 137 * OS1_S1 + 117) -
                p_over_q * *(b + 188 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 137 * OS1_S1 + 82);
            *(b + 137 * OS1_S1 + 162) =
                prefactor_y * *(b + 137 * OS1_S1 + 118) -
                p_over_q * *(b + 188 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 118) +
                one_over_two_q * *(b + 137 * OS1_S1 + 83);
            *(b + 137 * OS1_S1 + 163) =
                prefactor_y * *(b + 137 * OS1_S1 + 119) -
                p_over_q * *(b + 188 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 119);
            *(b + 137 * OS1_S1 + 164) =
                prefactor_z * *(b + 137 * OS1_S1 + 119) -
                p_over_q * *(b + 189 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 137 * OS1_S1 + 83);
            *(b + 138 * OS1_S1 + 120) =
                prefactor_x * *(b + 138 * OS1_S1 + 84) -
                p_over_q * *(b + 183 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 138 * OS1_S1 + 56);
            *(b + 138 * OS1_S1 + 121) =
                prefactor_y * *(b + 138 * OS1_S1 + 84) -
                p_over_q * *(b + 189 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 84);
            *(b + 138 * OS1_S1 + 122) =
                prefactor_z * *(b + 138 * OS1_S1 + 84) -
                p_over_q * *(b + 190 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 84);
            *(b + 138 * OS1_S1 + 123) =
                prefactor_y * *(b + 138 * OS1_S1 + 85) -
                p_over_q * *(b + 189 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 85) +
                one_over_two_q * *(b + 138 * OS1_S1 + 56);
            *(b + 138 * OS1_S1 + 124) =
                prefactor_y * *(b + 138 * OS1_S1 + 86) -
                p_over_q * *(b + 189 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 86);
            *(b + 138 * OS1_S1 + 125) =
                prefactor_z * *(b + 138 * OS1_S1 + 86) -
                p_over_q * *(b + 190 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 86) +
                one_over_two_q * *(b + 138 * OS1_S1 + 56);
            *(b + 138 * OS1_S1 + 126) =
                prefactor_y * *(b + 138 * OS1_S1 + 87) -
                p_over_q * *(b + 189 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 57);
            *(b + 138 * OS1_S1 + 127) =
                prefactor_z * *(b + 138 * OS1_S1 + 87) -
                p_over_q * *(b + 190 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 87);
            *(b + 138 * OS1_S1 + 128) =
                prefactor_y * *(b + 138 * OS1_S1 + 89) -
                p_over_q * *(b + 189 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 89);
            *(b + 138 * OS1_S1 + 129) =
                prefactor_z * *(b + 138 * OS1_S1 + 89) -
                p_over_q * *(b + 190 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 58);
            *(b + 138 * OS1_S1 + 130) =
                prefactor_y * *(b + 138 * OS1_S1 + 90) -
                p_over_q * *(b + 189 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 59);
            *(b + 138 * OS1_S1 + 131) =
                prefactor_z * *(b + 138 * OS1_S1 + 90) -
                p_over_q * *(b + 190 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 90);
            *(b + 138 * OS1_S1 + 132) =
                prefactor_y * *(b + 138 * OS1_S1 + 92) -
                p_over_q * *(b + 189 * OS1_S1 + 92) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 92) +
                one_over_two_q * *(b + 138 * OS1_S1 + 61);
            *(b + 138 * OS1_S1 + 133) =
                prefactor_y * *(b + 138 * OS1_S1 + 93) -
                p_over_q * *(b + 189 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 93);
            *(b + 138 * OS1_S1 + 134) =
                prefactor_z * *(b + 138 * OS1_S1 + 93) -
                p_over_q * *(b + 190 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 61);
            *(b + 138 * OS1_S1 + 135) =
                prefactor_x * *(b + 138 * OS1_S1 + 99) -
                p_over_q * *(b + 183 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 71);
            *(b + 138 * OS1_S1 + 136) =
                prefactor_z * *(b + 138 * OS1_S1 + 94) -
                p_over_q * *(b + 190 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 94);
            *(b + 138 * OS1_S1 + 137) =
                prefactor_z * *(b + 138 * OS1_S1 + 95) -
                p_over_q * *(b + 190 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 95) +
                one_over_two_q * *(b + 138 * OS1_S1 + 62);
            *(b + 138 * OS1_S1 + 138) =
                prefactor_y * *(b + 138 * OS1_S1 + 97) -
                p_over_q * *(b + 189 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 97) +
                one_over_two_q * *(b + 138 * OS1_S1 + 65);
            *(b + 138 * OS1_S1 + 139) =
                prefactor_y * *(b + 138 * OS1_S1 + 98) -
                p_over_q * *(b + 189 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 98);
            *(b + 138 * OS1_S1 + 140) =
                prefactor_x * *(b + 138 * OS1_S1 + 104) -
                p_over_q * *(b + 183 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 76);
            *(b + 138 * OS1_S1 + 141) =
                prefactor_x * *(b + 138 * OS1_S1 + 105) -
                p_over_q * *(b + 183 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 105) +
                one_over_two_q * *(b + 138 * OS1_S1 + 77);
            *(b + 138 * OS1_S1 + 142) =
                prefactor_z * *(b + 138 * OS1_S1 + 99) -
                p_over_q * *(b + 190 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 99);
            *(b + 138 * OS1_S1 + 143) =
                prefactor_z * *(b + 138 * OS1_S1 + 100) -
                p_over_q * *(b + 190 * OS1_S1 + 100) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 100) +
                one_over_two_q * *(b + 138 * OS1_S1 + 66);
            *(b + 138 * OS1_S1 + 144) =
                prefactor_x * *(b + 138 * OS1_S1 + 108) -
                p_over_q * *(b + 183 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 108) +
                one_over_two_q * *(b + 138 * OS1_S1 + 80);
            *(b + 138 * OS1_S1 + 145) =
                prefactor_y * *(b + 138 * OS1_S1 + 103) -
                p_over_q * *(b + 189 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 103) +
                one_over_two_q * *(b + 138 * OS1_S1 + 70);
            *(b + 138 * OS1_S1 + 146) =
                prefactor_y * *(b + 138 * OS1_S1 + 104) -
                p_over_q * *(b + 189 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 104);
            *(b + 138 * OS1_S1 + 147) =
                prefactor_x * *(b + 138 * OS1_S1 + 111) -
                p_over_q * *(b + 183 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 111) +
                one_over_two_q * *(b + 138 * OS1_S1 + 83);
            *(b + 138 * OS1_S1 + 148) =
                prefactor_x * *(b + 138 * OS1_S1 + 112) -
                p_over_q * *(b + 183 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 112);
            *(b + 138 * OS1_S1 + 149) =
                prefactor_z * *(b + 138 * OS1_S1 + 105) -
                p_over_q * *(b + 190 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 105);
            *(b + 138 * OS1_S1 + 150) =
                prefactor_x * *(b + 138 * OS1_S1 + 114) -
                p_over_q * *(b + 183 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 114);
            *(b + 138 * OS1_S1 + 151) =
                prefactor_x * *(b + 138 * OS1_S1 + 115) -
                p_over_q * *(b + 183 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 115);
            *(b + 138 * OS1_S1 + 152) =
                prefactor_x * *(b + 138 * OS1_S1 + 116) -
                p_over_q * *(b + 183 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 116);
            *(b + 138 * OS1_S1 + 153) =
                prefactor_x * *(b + 138 * OS1_S1 + 117) -
                p_over_q * *(b + 183 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 117);
            *(b + 138 * OS1_S1 + 154) =
                prefactor_y * *(b + 138 * OS1_S1 + 111) -
                p_over_q * *(b + 189 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 111);
            *(b + 138 * OS1_S1 + 155) =
                prefactor_x * *(b + 138 * OS1_S1 + 119) -
                p_over_q * *(b + 183 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 119);
            *(b + 138 * OS1_S1 + 156) =
                prefactor_y * *(b + 138 * OS1_S1 + 112) -
                p_over_q * *(b + 189 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 138 * OS1_S1 + 77);
            *(b + 138 * OS1_S1 + 157) =
                prefactor_z * *(b + 138 * OS1_S1 + 112) -
                p_over_q * *(b + 190 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 112);
            *(b + 138 * OS1_S1 + 158) =
                prefactor_z * *(b + 138 * OS1_S1 + 113) -
                p_over_q * *(b + 190 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 113) +
                one_over_two_q * *(b + 138 * OS1_S1 + 77);
            *(b + 138 * OS1_S1 + 159) =
                prefactor_z * *(b + 138 * OS1_S1 + 114) -
                p_over_q * *(b + 190 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 78);
            *(b + 138 * OS1_S1 + 160) =
                prefactor_y * *(b + 138 * OS1_S1 + 116) -
                p_over_q * *(b + 189 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 81);
            *(b + 138 * OS1_S1 + 161) =
                prefactor_y * *(b + 138 * OS1_S1 + 117) -
                p_over_q * *(b + 189 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 138 * OS1_S1 + 82);
            *(b + 138 * OS1_S1 + 162) =
                prefactor_y * *(b + 138 * OS1_S1 + 118) -
                p_over_q * *(b + 189 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 118) +
                one_over_two_q * *(b + 138 * OS1_S1 + 83);
            *(b + 138 * OS1_S1 + 163) =
                prefactor_y * *(b + 138 * OS1_S1 + 119) -
                p_over_q * *(b + 189 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 119);
            *(b + 138 * OS1_S1 + 164) =
                prefactor_z * *(b + 138 * OS1_S1 + 119) -
                p_over_q * *(b + 190 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 138 * OS1_S1 + 83);
            *(b + 139 * OS1_S1 + 120) =
                prefactor_x * *(b + 139 * OS1_S1 + 84) -
                p_over_q * *(b + 184 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 139 * OS1_S1 + 56);
            *(b + 139 * OS1_S1 + 121) =
                prefactor_y * *(b + 139 * OS1_S1 + 84) -
                p_over_q * *(b + 190 * OS1_S1 + 84) +
                one_over_two_q * *(b + 98 * OS1_S1 + 84);
            *(b + 139 * OS1_S1 + 122) =
                prefactor_z * *(b + 139 * OS1_S1 + 84) -
                p_over_q * *(b + 191 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 84);
            *(b + 139 * OS1_S1 + 123) =
                prefactor_y * *(b + 139 * OS1_S1 + 85) -
                p_over_q * *(b + 190 * OS1_S1 + 85) +
                one_over_two_q * *(b + 98 * OS1_S1 + 85) +
                one_over_two_q * *(b + 139 * OS1_S1 + 56);
            *(b + 139 * OS1_S1 + 124) =
                prefactor_y * *(b + 139 * OS1_S1 + 86) -
                p_over_q * *(b + 190 * OS1_S1 + 86) +
                one_over_two_q * *(b + 98 * OS1_S1 + 86);
            *(b + 139 * OS1_S1 + 125) =
                prefactor_z * *(b + 139 * OS1_S1 + 86) -
                p_over_q * *(b + 191 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 86) +
                one_over_two_q * *(b + 139 * OS1_S1 + 56);
            *(b + 139 * OS1_S1 + 126) =
                prefactor_y * *(b + 139 * OS1_S1 + 87) -
                p_over_q * *(b + 190 * OS1_S1 + 87) +
                one_over_two_q * *(b + 98 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 57);
            *(b + 139 * OS1_S1 + 127) =
                prefactor_z * *(b + 139 * OS1_S1 + 87) -
                p_over_q * *(b + 191 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 87);
            *(b + 139 * OS1_S1 + 128) =
                prefactor_y * *(b + 139 * OS1_S1 + 89) -
                p_over_q * *(b + 190 * OS1_S1 + 89) +
                one_over_two_q * *(b + 98 * OS1_S1 + 89);
            *(b + 139 * OS1_S1 + 129) =
                prefactor_z * *(b + 139 * OS1_S1 + 89) -
                p_over_q * *(b + 191 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 58);
            *(b + 139 * OS1_S1 + 130) =
                prefactor_y * *(b + 139 * OS1_S1 + 90) -
                p_over_q * *(b + 190 * OS1_S1 + 90) +
                one_over_two_q * *(b + 98 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 139 * OS1_S1 + 59);
            *(b + 139 * OS1_S1 + 131) =
                prefactor_z * *(b + 139 * OS1_S1 + 90) -
                p_over_q * *(b + 191 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 90);
            *(b + 139 * OS1_S1 + 132) =
                prefactor_y * *(b + 139 * OS1_S1 + 92) -
                p_over_q * *(b + 190 * OS1_S1 + 92) +
                one_over_two_q * *(b + 98 * OS1_S1 + 92) +
                one_over_two_q * *(b + 139 * OS1_S1 + 61);
            *(b + 139 * OS1_S1 + 133) =
                prefactor_y * *(b + 139 * OS1_S1 + 93) -
                p_over_q * *(b + 190 * OS1_S1 + 93) +
                one_over_two_q * *(b + 98 * OS1_S1 + 93);
            *(b + 139 * OS1_S1 + 134) =
                prefactor_x * *(b + 139 * OS1_S1 + 98) -
                p_over_q * *(b + 184 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 139 * OS1_S1 + 70);
            *(b + 139 * OS1_S1 + 135) =
                prefactor_x * *(b + 139 * OS1_S1 + 99) -
                p_over_q * *(b + 184 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 71);
            *(b + 139 * OS1_S1 + 136) =
                prefactor_z * *(b + 139 * OS1_S1 + 94) -
                p_over_q * *(b + 191 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 94);
            *(b + 139 * OS1_S1 + 137) =
                prefactor_z * *(b + 139 * OS1_S1 + 95) -
                p_over_q * *(b + 191 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 95) +
                one_over_two_q * *(b + 139 * OS1_S1 + 62);
            *(b + 139 * OS1_S1 + 138) =
                prefactor_y * *(b + 139 * OS1_S1 + 97) -
                p_over_q * *(b + 190 * OS1_S1 + 97) +
                one_over_two_q * *(b + 98 * OS1_S1 + 97) +
                one_over_two_q * *(b + 139 * OS1_S1 + 65);
            *(b + 139 * OS1_S1 + 139) =
                prefactor_y * *(b + 139 * OS1_S1 + 98) -
                p_over_q * *(b + 190 * OS1_S1 + 98) +
                one_over_two_q * *(b + 98 * OS1_S1 + 98);
            *(b + 139 * OS1_S1 + 140) =
                prefactor_x * *(b + 139 * OS1_S1 + 104) -
                p_over_q * *(b + 184 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 76);
            *(b + 139 * OS1_S1 + 141) =
                prefactor_x * *(b + 139 * OS1_S1 + 105) -
                p_over_q * *(b + 184 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 105) +
                one_over_two_q * *(b + 139 * OS1_S1 + 77);
            *(b + 139 * OS1_S1 + 142) =
                prefactor_z * *(b + 139 * OS1_S1 + 99) -
                p_over_q * *(b + 191 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 99);
            *(b + 139 * OS1_S1 + 143) =
                prefactor_x * *(b + 139 * OS1_S1 + 107) -
                p_over_q * *(b + 184 * OS1_S1 + 107) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 107) +
                one_over_two_q * *(b + 139 * OS1_S1 + 79);
            *(b + 139 * OS1_S1 + 144) =
                prefactor_x * *(b + 139 * OS1_S1 + 108) -
                p_over_q * *(b + 184 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 108) +
                one_over_two_q * *(b + 139 * OS1_S1 + 80);
            *(b + 139 * OS1_S1 + 145) =
                prefactor_y * *(b + 139 * OS1_S1 + 103) -
                p_over_q * *(b + 190 * OS1_S1 + 103) +
                one_over_two_q * *(b + 98 * OS1_S1 + 103) +
                one_over_two_q * *(b + 139 * OS1_S1 + 70);
            *(b + 139 * OS1_S1 + 146) =
                prefactor_y * *(b + 139 * OS1_S1 + 104) -
                p_over_q * *(b + 190 * OS1_S1 + 104) +
                one_over_two_q * *(b + 98 * OS1_S1 + 104);
            *(b + 139 * OS1_S1 + 147) =
                prefactor_x * *(b + 139 * OS1_S1 + 111) -
                p_over_q * *(b + 184 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 111) +
                one_over_two_q * *(b + 139 * OS1_S1 + 83);
            *(b + 139 * OS1_S1 + 148) =
                prefactor_x * *(b + 139 * OS1_S1 + 112) -
                p_over_q * *(b + 184 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 112);
            *(b + 139 * OS1_S1 + 149) =
                prefactor_x * *(b + 139 * OS1_S1 + 113) -
                p_over_q * *(b + 184 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 113);
            *(b + 139 * OS1_S1 + 150) =
                prefactor_x * *(b + 139 * OS1_S1 + 114) -
                p_over_q * *(b + 184 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 114);
            *(b + 139 * OS1_S1 + 151) =
                prefactor_x * *(b + 139 * OS1_S1 + 115) -
                p_over_q * *(b + 184 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 115);
            *(b + 139 * OS1_S1 + 152) =
                prefactor_x * *(b + 139 * OS1_S1 + 116) -
                p_over_q * *(b + 184 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 116);
            *(b + 139 * OS1_S1 + 153) =
                prefactor_x * *(b + 139 * OS1_S1 + 117) -
                p_over_q * *(b + 184 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 117);
            *(b + 139 * OS1_S1 + 154) =
                prefactor_y * *(b + 139 * OS1_S1 + 111) -
                p_over_q * *(b + 190 * OS1_S1 + 111) +
                one_over_two_q * *(b + 98 * OS1_S1 + 111);
            *(b + 139 * OS1_S1 + 155) =
                prefactor_x * *(b + 139 * OS1_S1 + 119) -
                p_over_q * *(b + 184 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 119);
            *(b + 139 * OS1_S1 + 156) =
                prefactor_y * *(b + 139 * OS1_S1 + 112) -
                p_over_q * *(b + 190 * OS1_S1 + 112) +
                one_over_two_q * *(b + 98 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 139 * OS1_S1 + 77);
            *(b + 139 * OS1_S1 + 157) =
                prefactor_z * *(b + 139 * OS1_S1 + 112) -
                p_over_q * *(b + 191 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 112);
            *(b + 139 * OS1_S1 + 158) =
                prefactor_z * *(b + 139 * OS1_S1 + 113) -
                p_over_q * *(b + 191 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 113) +
                one_over_two_q * *(b + 139 * OS1_S1 + 77);
            *(b + 139 * OS1_S1 + 159) =
                prefactor_z * *(b + 139 * OS1_S1 + 114) -
                p_over_q * *(b + 191 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 78);
            *(b + 139 * OS1_S1 + 160) =
                prefactor_y * *(b + 139 * OS1_S1 + 116) -
                p_over_q * *(b + 190 * OS1_S1 + 116) +
                one_over_two_q * *(b + 98 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 139 * OS1_S1 + 81);
            *(b + 139 * OS1_S1 + 161) =
                prefactor_y * *(b + 139 * OS1_S1 + 117) -
                p_over_q * *(b + 190 * OS1_S1 + 117) +
                one_over_two_q * *(b + 98 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 82);
            *(b + 139 * OS1_S1 + 162) =
                prefactor_y * *(b + 139 * OS1_S1 + 118) -
                p_over_q * *(b + 190 * OS1_S1 + 118) +
                one_over_two_q * *(b + 98 * OS1_S1 + 118) +
                one_over_two_q * *(b + 139 * OS1_S1 + 83);
            *(b + 139 * OS1_S1 + 163) =
                prefactor_y * *(b + 139 * OS1_S1 + 119) -
                p_over_q * *(b + 190 * OS1_S1 + 119) +
                one_over_two_q * *(b + 98 * OS1_S1 + 119);
            *(b + 139 * OS1_S1 + 164) =
                prefactor_z * *(b + 139 * OS1_S1 + 119) -
                p_over_q * *(b + 191 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 97 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 139 * OS1_S1 + 83);
            *(b + 140 * OS1_S1 + 120) =
                prefactor_x * *(b + 140 * OS1_S1 + 84) -
                p_over_q * *(b + 185 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 140 * OS1_S1 + 56);
            *(b + 140 * OS1_S1 + 121) = prefactor_y * *(b + 140 * OS1_S1 + 84) -
                                        p_over_q * *(b + 191 * OS1_S1 + 84);
            *(b + 140 * OS1_S1 + 122) =
                prefactor_z * *(b + 140 * OS1_S1 + 84) -
                p_over_q * *(b + 192 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 84);
            *(b + 140 * OS1_S1 + 123) =
                prefactor_y * *(b + 140 * OS1_S1 + 85) -
                p_over_q * *(b + 191 * OS1_S1 + 85) +
                one_over_two_q * *(b + 140 * OS1_S1 + 56);
            *(b + 140 * OS1_S1 + 124) = prefactor_y * *(b + 140 * OS1_S1 + 86) -
                                        p_over_q * *(b + 191 * OS1_S1 + 86);
            *(b + 140 * OS1_S1 + 125) =
                prefactor_z * *(b + 140 * OS1_S1 + 86) -
                p_over_q * *(b + 192 * OS1_S1 + 86) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 86) +
                one_over_two_q * *(b + 140 * OS1_S1 + 56);
            *(b + 140 * OS1_S1 + 126) =
                prefactor_y * *(b + 140 * OS1_S1 + 87) -
                p_over_q * *(b + 191 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 57);
            *(b + 140 * OS1_S1 + 127) =
                prefactor_z * *(b + 140 * OS1_S1 + 87) -
                p_over_q * *(b + 192 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 87);
            *(b + 140 * OS1_S1 + 128) = prefactor_y * *(b + 140 * OS1_S1 + 89) -
                                        p_over_q * *(b + 191 * OS1_S1 + 89);
            *(b + 140 * OS1_S1 + 129) =
                prefactor_z * *(b + 140 * OS1_S1 + 89) -
                p_over_q * *(b + 192 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 58);
            *(b + 140 * OS1_S1 + 130) =
                prefactor_y * *(b + 140 * OS1_S1 + 90) -
                p_over_q * *(b + 191 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 140 * OS1_S1 + 59);
            *(b + 140 * OS1_S1 + 131) =
                prefactor_z * *(b + 140 * OS1_S1 + 90) -
                p_over_q * *(b + 192 * OS1_S1 + 90) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 90);
            *(b + 140 * OS1_S1 + 132) =
                prefactor_y * *(b + 140 * OS1_S1 + 92) -
                p_over_q * *(b + 191 * OS1_S1 + 92) +
                one_over_two_q * *(b + 140 * OS1_S1 + 61);
            *(b + 140 * OS1_S1 + 133) = prefactor_y * *(b + 140 * OS1_S1 + 93) -
                                        p_over_q * *(b + 191 * OS1_S1 + 93);
            *(b + 140 * OS1_S1 + 134) =
                prefactor_x * *(b + 140 * OS1_S1 + 98) -
                p_over_q * *(b + 185 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 140 * OS1_S1 + 70);
            *(b + 140 * OS1_S1 + 135) =
                prefactor_x * *(b + 140 * OS1_S1 + 99) -
                p_over_q * *(b + 185 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 71);
            *(b + 140 * OS1_S1 + 136) =
                prefactor_z * *(b + 140 * OS1_S1 + 94) -
                p_over_q * *(b + 192 * OS1_S1 + 94) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 94);
            *(b + 140 * OS1_S1 + 137) =
                prefactor_z * *(b + 140 * OS1_S1 + 95) -
                p_over_q * *(b + 192 * OS1_S1 + 95) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 95) +
                one_over_two_q * *(b + 140 * OS1_S1 + 62);
            *(b + 140 * OS1_S1 + 138) =
                prefactor_y * *(b + 140 * OS1_S1 + 97) -
                p_over_q * *(b + 191 * OS1_S1 + 97) +
                one_over_two_q * *(b + 140 * OS1_S1 + 65);
            *(b + 140 * OS1_S1 + 139) = prefactor_y * *(b + 140 * OS1_S1 + 98) -
                                        p_over_q * *(b + 191 * OS1_S1 + 98);
            *(b + 140 * OS1_S1 + 140) =
                prefactor_x * *(b + 140 * OS1_S1 + 104) -
                p_over_q * *(b + 185 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 76);
            *(b + 140 * OS1_S1 + 141) =
                prefactor_x * *(b + 140 * OS1_S1 + 105) -
                p_over_q * *(b + 185 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 105) +
                one_over_two_q * *(b + 140 * OS1_S1 + 77);
            *(b + 140 * OS1_S1 + 142) =
                prefactor_z * *(b + 140 * OS1_S1 + 99) -
                p_over_q * *(b + 192 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 99);
            *(b + 140 * OS1_S1 + 143) =
                prefactor_x * *(b + 140 * OS1_S1 + 107) -
                p_over_q * *(b + 185 * OS1_S1 + 107) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 107) +
                one_over_two_q * *(b + 140 * OS1_S1 + 79);
            *(b + 140 * OS1_S1 + 144) =
                prefactor_x * *(b + 140 * OS1_S1 + 108) -
                p_over_q * *(b + 185 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 108) +
                one_over_two_q * *(b + 140 * OS1_S1 + 80);
            *(b + 140 * OS1_S1 + 145) =
                prefactor_y * *(b + 140 * OS1_S1 + 103) -
                p_over_q * *(b + 191 * OS1_S1 + 103) +
                one_over_two_q * *(b + 140 * OS1_S1 + 70);
            *(b + 140 * OS1_S1 + 146) =
                prefactor_y * *(b + 140 * OS1_S1 + 104) -
                p_over_q * *(b + 191 * OS1_S1 + 104);
            *(b + 140 * OS1_S1 + 147) =
                prefactor_x * *(b + 140 * OS1_S1 + 111) -
                p_over_q * *(b + 185 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 111) +
                one_over_two_q * *(b + 140 * OS1_S1 + 83);
            *(b + 140 * OS1_S1 + 148) =
                prefactor_x * *(b + 140 * OS1_S1 + 112) -
                p_over_q * *(b + 185 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 112);
            *(b + 140 * OS1_S1 + 149) =
                prefactor_x * *(b + 140 * OS1_S1 + 113) -
                p_over_q * *(b + 185 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 113);
            *(b + 140 * OS1_S1 + 150) =
                prefactor_x * *(b + 140 * OS1_S1 + 114) -
                p_over_q * *(b + 185 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 114);
            *(b + 140 * OS1_S1 + 151) =
                prefactor_x * *(b + 140 * OS1_S1 + 115) -
                p_over_q * *(b + 185 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 115);
            *(b + 140 * OS1_S1 + 152) =
                prefactor_x * *(b + 140 * OS1_S1 + 116) -
                p_over_q * *(b + 185 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 116);
            *(b + 140 * OS1_S1 + 153) =
                prefactor_x * *(b + 140 * OS1_S1 + 117) -
                p_over_q * *(b + 185 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 117);
            *(b + 140 * OS1_S1 + 154) =
                prefactor_y * *(b + 140 * OS1_S1 + 111) -
                p_over_q * *(b + 191 * OS1_S1 + 111);
            *(b + 140 * OS1_S1 + 155) =
                prefactor_x * *(b + 140 * OS1_S1 + 119) -
                p_over_q * *(b + 185 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 119);
            *(b + 140 * OS1_S1 + 156) =
                prefactor_y * *(b + 140 * OS1_S1 + 112) -
                p_over_q * *(b + 191 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 140 * OS1_S1 + 77);
            *(b + 140 * OS1_S1 + 157) =
                prefactor_z * *(b + 140 * OS1_S1 + 112) -
                p_over_q * *(b + 192 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 112);
            *(b + 140 * OS1_S1 + 158) =
                prefactor_z * *(b + 140 * OS1_S1 + 113) -
                p_over_q * *(b + 192 * OS1_S1 + 113) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 113) +
                one_over_two_q * *(b + 140 * OS1_S1 + 77);
            *(b + 140 * OS1_S1 + 159) =
                prefactor_z * *(b + 140 * OS1_S1 + 114) -
                p_over_q * *(b + 192 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 78);
            *(b + 140 * OS1_S1 + 160) =
                prefactor_y * *(b + 140 * OS1_S1 + 116) -
                p_over_q * *(b + 191 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 140 * OS1_S1 + 81);
            *(b + 140 * OS1_S1 + 161) =
                prefactor_y * *(b + 140 * OS1_S1 + 117) -
                p_over_q * *(b + 191 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 140 * OS1_S1 + 82);
            *(b + 140 * OS1_S1 + 162) =
                prefactor_y * *(b + 140 * OS1_S1 + 118) -
                p_over_q * *(b + 191 * OS1_S1 + 118) +
                one_over_two_q * *(b + 140 * OS1_S1 + 83);
            *(b + 140 * OS1_S1 + 163) =
                prefactor_y * *(b + 140 * OS1_S1 + 119) -
                p_over_q * *(b + 191 * OS1_S1 + 119);
            *(b + 140 * OS1_S1 + 164) =
                prefactor_z * *(b + 140 * OS1_S1 + 119) -
                p_over_q * *(b + 192 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 98 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 140 * OS1_S1 + 83);
            *(b + 141 * OS1_S1 + 120) =
                prefactor_x * *(b + 141 * OS1_S1 + 84) -
                p_over_q * *(b + 186 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 56);
            *(b + 141 * OS1_S1 + 121) =
                prefactor_y * *(b + 141 * OS1_S1 + 84) -
                p_over_q * *(b + 193 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 84);
            *(b + 141 * OS1_S1 + 122) = prefactor_z * *(b + 141 * OS1_S1 + 84) -
                                        p_over_q * *(b + 194 * OS1_S1 + 84);
            *(b + 141 * OS1_S1 + 123) =
                prefactor_y * *(b + 141 * OS1_S1 + 85) -
                p_over_q * *(b + 193 * OS1_S1 + 85) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 85) +
                one_over_two_q * *(b + 141 * OS1_S1 + 56);
            *(b + 141 * OS1_S1 + 124) = prefactor_z * *(b + 141 * OS1_S1 + 85) -
                                        p_over_q * *(b + 194 * OS1_S1 + 85);
            *(b + 141 * OS1_S1 + 125) =
                prefactor_z * *(b + 141 * OS1_S1 + 86) -
                p_over_q * *(b + 194 * OS1_S1 + 86) +
                one_over_two_q * *(b + 141 * OS1_S1 + 56);
            *(b + 141 * OS1_S1 + 126) =
                prefactor_y * *(b + 141 * OS1_S1 + 87) -
                p_over_q * *(b + 193 * OS1_S1 + 87) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 57);
            *(b + 141 * OS1_S1 + 127) = prefactor_z * *(b + 141 * OS1_S1 + 87) -
                                        p_over_q * *(b + 194 * OS1_S1 + 87);
            *(b + 141 * OS1_S1 + 128) =
                prefactor_y * *(b + 141 * OS1_S1 + 89) -
                p_over_q * *(b + 193 * OS1_S1 + 89) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 89);
            *(b + 141 * OS1_S1 + 129) =
                prefactor_z * *(b + 141 * OS1_S1 + 89) -
                p_over_q * *(b + 194 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 58);
            *(b + 141 * OS1_S1 + 130) =
                prefactor_x * *(b + 141 * OS1_S1 + 94) -
                p_over_q * *(b + 186 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 66);
            *(b + 141 * OS1_S1 + 131) = prefactor_z * *(b + 141 * OS1_S1 + 90) -
                                        p_over_q * *(b + 194 * OS1_S1 + 90);
            *(b + 141 * OS1_S1 + 132) =
                prefactor_z * *(b + 141 * OS1_S1 + 91) -
                p_over_q * *(b + 194 * OS1_S1 + 91) +
                one_over_two_q * *(b + 141 * OS1_S1 + 59);
            *(b + 141 * OS1_S1 + 133) =
                prefactor_y * *(b + 141 * OS1_S1 + 93) -
                p_over_q * *(b + 193 * OS1_S1 + 93) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 93);
            *(b + 141 * OS1_S1 + 134) =
                prefactor_z * *(b + 141 * OS1_S1 + 93) -
                p_over_q * *(b + 194 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 61);
            *(b + 141 * OS1_S1 + 135) =
                prefactor_x * *(b + 141 * OS1_S1 + 99) -
                p_over_q * *(b + 186 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 71);
            *(b + 141 * OS1_S1 + 136) = prefactor_z * *(b + 141 * OS1_S1 + 94) -
                                        p_over_q * *(b + 194 * OS1_S1 + 94);
            *(b + 141 * OS1_S1 + 137) =
                prefactor_z * *(b + 141 * OS1_S1 + 95) -
                p_over_q * *(b + 194 * OS1_S1 + 95) +
                one_over_two_q * *(b + 141 * OS1_S1 + 62);
            *(b + 141 * OS1_S1 + 138) =
                prefactor_y * *(b + 141 * OS1_S1 + 97) -
                p_over_q * *(b + 193 * OS1_S1 + 97) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 97) +
                one_over_two_q * *(b + 141 * OS1_S1 + 65);
            *(b + 141 * OS1_S1 + 139) =
                prefactor_y * *(b + 141 * OS1_S1 + 98) -
                p_over_q * *(b + 193 * OS1_S1 + 98) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 98);
            *(b + 141 * OS1_S1 + 140) =
                prefactor_x * *(b + 141 * OS1_S1 + 104) -
                p_over_q * *(b + 186 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 76);
            *(b + 141 * OS1_S1 + 141) =
                prefactor_x * *(b + 141 * OS1_S1 + 105) -
                p_over_q * *(b + 186 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 105) +
                one_over_two_q * *(b + 141 * OS1_S1 + 77);
            *(b + 141 * OS1_S1 + 142) = prefactor_z * *(b + 141 * OS1_S1 + 99) -
                                        p_over_q * *(b + 194 * OS1_S1 + 99);
            *(b + 141 * OS1_S1 + 143) =
                prefactor_z * *(b + 141 * OS1_S1 + 100) -
                p_over_q * *(b + 194 * OS1_S1 + 100) +
                one_over_two_q * *(b + 141 * OS1_S1 + 66);
            *(b + 141 * OS1_S1 + 144) =
                prefactor_x * *(b + 141 * OS1_S1 + 108) -
                p_over_q * *(b + 186 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 108) +
                one_over_two_q * *(b + 141 * OS1_S1 + 80);
            *(b + 141 * OS1_S1 + 145) =
                prefactor_x * *(b + 141 * OS1_S1 + 109) -
                p_over_q * *(b + 186 * OS1_S1 + 109) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 109) +
                one_over_two_q * *(b + 141 * OS1_S1 + 81);
            *(b + 141 * OS1_S1 + 146) =
                prefactor_y * *(b + 141 * OS1_S1 + 104) -
                p_over_q * *(b + 193 * OS1_S1 + 104) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 104);
            *(b + 141 * OS1_S1 + 147) =
                prefactor_x * *(b + 141 * OS1_S1 + 111) -
                p_over_q * *(b + 186 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 111) +
                one_over_two_q * *(b + 141 * OS1_S1 + 83);
            *(b + 141 * OS1_S1 + 148) =
                prefactor_x * *(b + 141 * OS1_S1 + 112) -
                p_over_q * *(b + 186 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 112);
            *(b + 141 * OS1_S1 + 149) =
                prefactor_z * *(b + 141 * OS1_S1 + 105) -
                p_over_q * *(b + 194 * OS1_S1 + 105);
            *(b + 141 * OS1_S1 + 150) =
                prefactor_x * *(b + 141 * OS1_S1 + 114) -
                p_over_q * *(b + 186 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 114);
            *(b + 141 * OS1_S1 + 151) =
                prefactor_x * *(b + 141 * OS1_S1 + 115) -
                p_over_q * *(b + 186 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 115);
            *(b + 141 * OS1_S1 + 152) =
                prefactor_x * *(b + 141 * OS1_S1 + 116) -
                p_over_q * *(b + 186 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 116);
            *(b + 141 * OS1_S1 + 153) =
                prefactor_x * *(b + 141 * OS1_S1 + 117) -
                p_over_q * *(b + 186 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 117);
            *(b + 141 * OS1_S1 + 154) =
                prefactor_x * *(b + 141 * OS1_S1 + 118) -
                p_over_q * *(b + 186 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 118);
            *(b + 141 * OS1_S1 + 155) =
                prefactor_x * *(b + 141 * OS1_S1 + 119) -
                p_over_q * *(b + 186 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 119);
            *(b + 141 * OS1_S1 + 156) =
                prefactor_y * *(b + 141 * OS1_S1 + 112) -
                p_over_q * *(b + 193 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 77);
            *(b + 141 * OS1_S1 + 157) =
                prefactor_z * *(b + 141 * OS1_S1 + 112) -
                p_over_q * *(b + 194 * OS1_S1 + 112);
            *(b + 141 * OS1_S1 + 158) =
                prefactor_z * *(b + 141 * OS1_S1 + 113) -
                p_over_q * *(b + 194 * OS1_S1 + 113) +
                one_over_two_q * *(b + 141 * OS1_S1 + 77);
            *(b + 141 * OS1_S1 + 159) =
                prefactor_z * *(b + 141 * OS1_S1 + 114) -
                p_over_q * *(b + 194 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 78);
            *(b + 141 * OS1_S1 + 160) =
                prefactor_z * *(b + 141 * OS1_S1 + 115) -
                p_over_q * *(b + 194 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 79);
            *(b + 141 * OS1_S1 + 161) =
                prefactor_y * *(b + 141 * OS1_S1 + 117) -
                p_over_q * *(b + 193 * OS1_S1 + 117) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 141 * OS1_S1 + 82);
            *(b + 141 * OS1_S1 + 162) =
                prefactor_y * *(b + 141 * OS1_S1 + 118) -
                p_over_q * *(b + 193 * OS1_S1 + 118) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 118) +
                one_over_two_q * *(b + 141 * OS1_S1 + 83);
            *(b + 141 * OS1_S1 + 163) =
                prefactor_y * *(b + 141 * OS1_S1 + 119) -
                p_over_q * *(b + 193 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 99 * OS1_S1 + 119);
            *(b + 141 * OS1_S1 + 164) =
                prefactor_z * *(b + 141 * OS1_S1 + 119) -
                p_over_q * *(b + 194 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 83);
            *(b + 142 * OS1_S1 + 120) =
                prefactor_x * *(b + 142 * OS1_S1 + 84) -
                p_over_q * *(b + 187 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 142 * OS1_S1 + 56);
            *(b + 142 * OS1_S1 + 121) =
                prefactor_y * *(b + 142 * OS1_S1 + 84) -
                p_over_q * *(b + 194 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 84);
            *(b + 142 * OS1_S1 + 122) =
                prefactor_z * *(b + 142 * OS1_S1 + 84) -
                p_over_q * *(b + 195 * OS1_S1 + 84) +
                one_over_two_q * *(b + 99 * OS1_S1 + 84);
            *(b + 142 * OS1_S1 + 123) =
                prefactor_y * *(b + 142 * OS1_S1 + 85) -
                p_over_q * *(b + 194 * OS1_S1 + 85) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 85) +
                one_over_two_q * *(b + 142 * OS1_S1 + 56);
            *(b + 142 * OS1_S1 + 124) =
                prefactor_z * *(b + 142 * OS1_S1 + 85) -
                p_over_q * *(b + 195 * OS1_S1 + 85) +
                one_over_two_q * *(b + 99 * OS1_S1 + 85);
            *(b + 142 * OS1_S1 + 125) =
                prefactor_z * *(b + 142 * OS1_S1 + 86) -
                p_over_q * *(b + 195 * OS1_S1 + 86) +
                one_over_two_q * *(b + 99 * OS1_S1 + 86) +
                one_over_two_q * *(b + 142 * OS1_S1 + 56);
            *(b + 142 * OS1_S1 + 126) =
                prefactor_y * *(b + 142 * OS1_S1 + 87) -
                p_over_q * *(b + 194 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 57);
            *(b + 142 * OS1_S1 + 127) =
                prefactor_z * *(b + 142 * OS1_S1 + 87) -
                p_over_q * *(b + 195 * OS1_S1 + 87) +
                one_over_two_q * *(b + 99 * OS1_S1 + 87);
            *(b + 142 * OS1_S1 + 128) =
                prefactor_y * *(b + 142 * OS1_S1 + 89) -
                p_over_q * *(b + 194 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 89);
            *(b + 142 * OS1_S1 + 129) =
                prefactor_z * *(b + 142 * OS1_S1 + 89) -
                p_over_q * *(b + 195 * OS1_S1 + 89) +
                one_over_two_q * *(b + 99 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 58);
            *(b + 142 * OS1_S1 + 130) =
                prefactor_x * *(b + 142 * OS1_S1 + 94) -
                p_over_q * *(b + 187 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 66);
            *(b + 142 * OS1_S1 + 131) =
                prefactor_z * *(b + 142 * OS1_S1 + 90) -
                p_over_q * *(b + 195 * OS1_S1 + 90) +
                one_over_two_q * *(b + 99 * OS1_S1 + 90);
            *(b + 142 * OS1_S1 + 132) =
                prefactor_z * *(b + 142 * OS1_S1 + 91) -
                p_over_q * *(b + 195 * OS1_S1 + 91) +
                one_over_two_q * *(b + 99 * OS1_S1 + 91) +
                one_over_two_q * *(b + 142 * OS1_S1 + 59);
            *(b + 142 * OS1_S1 + 133) =
                prefactor_y * *(b + 142 * OS1_S1 + 93) -
                p_over_q * *(b + 194 * OS1_S1 + 93) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 93);
            *(b + 142 * OS1_S1 + 134) =
                prefactor_z * *(b + 142 * OS1_S1 + 93) -
                p_over_q * *(b + 195 * OS1_S1 + 93) +
                one_over_two_q * *(b + 99 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 61);
            *(b + 142 * OS1_S1 + 135) =
                prefactor_x * *(b + 142 * OS1_S1 + 99) -
                p_over_q * *(b + 187 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 71);
            *(b + 142 * OS1_S1 + 136) =
                prefactor_z * *(b + 142 * OS1_S1 + 94) -
                p_over_q * *(b + 195 * OS1_S1 + 94) +
                one_over_two_q * *(b + 99 * OS1_S1 + 94);
            *(b + 142 * OS1_S1 + 137) =
                prefactor_z * *(b + 142 * OS1_S1 + 95) -
                p_over_q * *(b + 195 * OS1_S1 + 95) +
                one_over_two_q * *(b + 99 * OS1_S1 + 95) +
                one_over_two_q * *(b + 142 * OS1_S1 + 62);
            *(b + 142 * OS1_S1 + 138) =
                prefactor_y * *(b + 142 * OS1_S1 + 97) -
                p_over_q * *(b + 194 * OS1_S1 + 97) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 97) +
                one_over_two_q * *(b + 142 * OS1_S1 + 65);
            *(b + 142 * OS1_S1 + 139) =
                prefactor_y * *(b + 142 * OS1_S1 + 98) -
                p_over_q * *(b + 194 * OS1_S1 + 98) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 98);
            *(b + 142 * OS1_S1 + 140) =
                prefactor_x * *(b + 142 * OS1_S1 + 104) -
                p_over_q * *(b + 187 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 76);
            *(b + 142 * OS1_S1 + 141) =
                prefactor_x * *(b + 142 * OS1_S1 + 105) -
                p_over_q * *(b + 187 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 105) +
                one_over_two_q * *(b + 142 * OS1_S1 + 77);
            *(b + 142 * OS1_S1 + 142) =
                prefactor_z * *(b + 142 * OS1_S1 + 99) -
                p_over_q * *(b + 195 * OS1_S1 + 99) +
                one_over_two_q * *(b + 99 * OS1_S1 + 99);
            *(b + 142 * OS1_S1 + 143) =
                prefactor_z * *(b + 142 * OS1_S1 + 100) -
                p_over_q * *(b + 195 * OS1_S1 + 100) +
                one_over_two_q * *(b + 99 * OS1_S1 + 100) +
                one_over_two_q * *(b + 142 * OS1_S1 + 66);
            *(b + 142 * OS1_S1 + 144) =
                prefactor_x * *(b + 142 * OS1_S1 + 108) -
                p_over_q * *(b + 187 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 108) +
                one_over_two_q * *(b + 142 * OS1_S1 + 80);
            *(b + 142 * OS1_S1 + 145) =
                prefactor_x * *(b + 142 * OS1_S1 + 109) -
                p_over_q * *(b + 187 * OS1_S1 + 109) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 109) +
                one_over_two_q * *(b + 142 * OS1_S1 + 81);
            *(b + 142 * OS1_S1 + 146) =
                prefactor_y * *(b + 142 * OS1_S1 + 104) -
                p_over_q * *(b + 194 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 104);
            *(b + 142 * OS1_S1 + 147) =
                prefactor_x * *(b + 142 * OS1_S1 + 111) -
                p_over_q * *(b + 187 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 111) +
                one_over_two_q * *(b + 142 * OS1_S1 + 83);
            *(b + 142 * OS1_S1 + 148) =
                prefactor_x * *(b + 142 * OS1_S1 + 112) -
                p_over_q * *(b + 187 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 112);
            *(b + 142 * OS1_S1 + 149) =
                prefactor_z * *(b + 142 * OS1_S1 + 105) -
                p_over_q * *(b + 195 * OS1_S1 + 105) +
                one_over_two_q * *(b + 99 * OS1_S1 + 105);
            *(b + 142 * OS1_S1 + 150) =
                prefactor_x * *(b + 142 * OS1_S1 + 114) -
                p_over_q * *(b + 187 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 114);
            *(b + 142 * OS1_S1 + 151) =
                prefactor_x * *(b + 142 * OS1_S1 + 115) -
                p_over_q * *(b + 187 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 115);
            *(b + 142 * OS1_S1 + 152) =
                prefactor_x * *(b + 142 * OS1_S1 + 116) -
                p_over_q * *(b + 187 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 116);
            *(b + 142 * OS1_S1 + 153) =
                prefactor_x * *(b + 142 * OS1_S1 + 117) -
                p_over_q * *(b + 187 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 117);
            *(b + 142 * OS1_S1 + 154) =
                prefactor_x * *(b + 142 * OS1_S1 + 118) -
                p_over_q * *(b + 187 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 118);
            *(b + 142 * OS1_S1 + 155) =
                prefactor_x * *(b + 142 * OS1_S1 + 119) -
                p_over_q * *(b + 187 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 119);
            *(b + 142 * OS1_S1 + 156) =
                prefactor_y * *(b + 142 * OS1_S1 + 112) -
                p_over_q * *(b + 194 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 142 * OS1_S1 + 77);
            *(b + 142 * OS1_S1 + 157) =
                prefactor_z * *(b + 142 * OS1_S1 + 112) -
                p_over_q * *(b + 195 * OS1_S1 + 112) +
                one_over_two_q * *(b + 99 * OS1_S1 + 112);
            *(b + 142 * OS1_S1 + 158) =
                prefactor_z * *(b + 142 * OS1_S1 + 113) -
                p_over_q * *(b + 195 * OS1_S1 + 113) +
                one_over_two_q * *(b + 99 * OS1_S1 + 113) +
                one_over_two_q * *(b + 142 * OS1_S1 + 77);
            *(b + 142 * OS1_S1 + 159) =
                prefactor_z * *(b + 142 * OS1_S1 + 114) -
                p_over_q * *(b + 195 * OS1_S1 + 114) +
                one_over_two_q * *(b + 99 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 78);
            *(b + 142 * OS1_S1 + 160) =
                prefactor_z * *(b + 142 * OS1_S1 + 115) -
                p_over_q * *(b + 195 * OS1_S1 + 115) +
                one_over_two_q * *(b + 99 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 79);
            *(b + 142 * OS1_S1 + 161) =
                prefactor_y * *(b + 142 * OS1_S1 + 117) -
                p_over_q * *(b + 194 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 82);
            *(b + 142 * OS1_S1 + 162) =
                prefactor_y * *(b + 142 * OS1_S1 + 118) -
                p_over_q * *(b + 194 * OS1_S1 + 118) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 118) +
                one_over_two_q * *(b + 142 * OS1_S1 + 83);
            *(b + 142 * OS1_S1 + 163) =
                prefactor_y * *(b + 142 * OS1_S1 + 119) -
                p_over_q * *(b + 194 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 100 * OS1_S1 + 119);
            *(b + 142 * OS1_S1 + 164) =
                prefactor_z * *(b + 142 * OS1_S1 + 119) -
                p_over_q * *(b + 195 * OS1_S1 + 119) +
                one_over_two_q * *(b + 99 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 142 * OS1_S1 + 83);
            *(b + 143 * OS1_S1 + 120) =
                prefactor_x * *(b + 143 * OS1_S1 + 84) -
                p_over_q * *(b + 188 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 143 * OS1_S1 + 56);
            *(b + 143 * OS1_S1 + 121) =
                prefactor_y * *(b + 143 * OS1_S1 + 84) -
                p_over_q * *(b + 195 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 84);
            *(b + 143 * OS1_S1 + 122) =
                prefactor_z * *(b + 143 * OS1_S1 + 84) -
                p_over_q * *(b + 196 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 84);
            *(b + 143 * OS1_S1 + 123) =
                prefactor_y * *(b + 143 * OS1_S1 + 85) -
                p_over_q * *(b + 195 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 85) +
                one_over_two_q * *(b + 143 * OS1_S1 + 56);
            *(b + 143 * OS1_S1 + 124) =
                prefactor_z * *(b + 143 * OS1_S1 + 85) -
                p_over_q * *(b + 196 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 85);
            *(b + 143 * OS1_S1 + 125) =
                prefactor_z * *(b + 143 * OS1_S1 + 86) -
                p_over_q * *(b + 196 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 86) +
                one_over_two_q * *(b + 143 * OS1_S1 + 56);
            *(b + 143 * OS1_S1 + 126) =
                prefactor_y * *(b + 143 * OS1_S1 + 87) -
                p_over_q * *(b + 195 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 57);
            *(b + 143 * OS1_S1 + 127) =
                prefactor_z * *(b + 143 * OS1_S1 + 87) -
                p_over_q * *(b + 196 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 87);
            *(b + 143 * OS1_S1 + 128) =
                prefactor_y * *(b + 143 * OS1_S1 + 89) -
                p_over_q * *(b + 195 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 89);
            *(b + 143 * OS1_S1 + 129) =
                prefactor_z * *(b + 143 * OS1_S1 + 89) -
                p_over_q * *(b + 196 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 58);
            *(b + 143 * OS1_S1 + 130) =
                prefactor_x * *(b + 143 * OS1_S1 + 94) -
                p_over_q * *(b + 188 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 66);
            *(b + 143 * OS1_S1 + 131) =
                prefactor_z * *(b + 143 * OS1_S1 + 90) -
                p_over_q * *(b + 196 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 90);
            *(b + 143 * OS1_S1 + 132) =
                prefactor_z * *(b + 143 * OS1_S1 + 91) -
                p_over_q * *(b + 196 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 91) +
                one_over_two_q * *(b + 143 * OS1_S1 + 59);
            *(b + 143 * OS1_S1 + 133) =
                prefactor_y * *(b + 143 * OS1_S1 + 93) -
                p_over_q * *(b + 195 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 93);
            *(b + 143 * OS1_S1 + 134) =
                prefactor_z * *(b + 143 * OS1_S1 + 93) -
                p_over_q * *(b + 196 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 61);
            *(b + 143 * OS1_S1 + 135) =
                prefactor_x * *(b + 143 * OS1_S1 + 99) -
                p_over_q * *(b + 188 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 71);
            *(b + 143 * OS1_S1 + 136) =
                prefactor_z * *(b + 143 * OS1_S1 + 94) -
                p_over_q * *(b + 196 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 94);
            *(b + 143 * OS1_S1 + 137) =
                prefactor_z * *(b + 143 * OS1_S1 + 95) -
                p_over_q * *(b + 196 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 95) +
                one_over_two_q * *(b + 143 * OS1_S1 + 62);
            *(b + 143 * OS1_S1 + 138) =
                prefactor_y * *(b + 143 * OS1_S1 + 97) -
                p_over_q * *(b + 195 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 97) +
                one_over_two_q * *(b + 143 * OS1_S1 + 65);
            *(b + 143 * OS1_S1 + 139) =
                prefactor_y * *(b + 143 * OS1_S1 + 98) -
                p_over_q * *(b + 195 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 98);
            *(b + 143 * OS1_S1 + 140) =
                prefactor_x * *(b + 143 * OS1_S1 + 104) -
                p_over_q * *(b + 188 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 76);
            *(b + 143 * OS1_S1 + 141) =
                prefactor_x * *(b + 143 * OS1_S1 + 105) -
                p_over_q * *(b + 188 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 105) +
                one_over_two_q * *(b + 143 * OS1_S1 + 77);
            *(b + 143 * OS1_S1 + 142) =
                prefactor_z * *(b + 143 * OS1_S1 + 99) -
                p_over_q * *(b + 196 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 99);
            *(b + 143 * OS1_S1 + 143) =
                prefactor_z * *(b + 143 * OS1_S1 + 100) -
                p_over_q * *(b + 196 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 100) +
                one_over_two_q * *(b + 143 * OS1_S1 + 66);
            *(b + 143 * OS1_S1 + 144) =
                prefactor_x * *(b + 143 * OS1_S1 + 108) -
                p_over_q * *(b + 188 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 108) +
                one_over_two_q * *(b + 143 * OS1_S1 + 80);
            *(b + 143 * OS1_S1 + 145) =
                prefactor_x * *(b + 143 * OS1_S1 + 109) -
                p_over_q * *(b + 188 * OS1_S1 + 109) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 109) +
                one_over_two_q * *(b + 143 * OS1_S1 + 81);
            *(b + 143 * OS1_S1 + 146) =
                prefactor_y * *(b + 143 * OS1_S1 + 104) -
                p_over_q * *(b + 195 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 104);
            *(b + 143 * OS1_S1 + 147) =
                prefactor_x * *(b + 143 * OS1_S1 + 111) -
                p_over_q * *(b + 188 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 111) +
                one_over_two_q * *(b + 143 * OS1_S1 + 83);
            *(b + 143 * OS1_S1 + 148) =
                prefactor_x * *(b + 143 * OS1_S1 + 112) -
                p_over_q * *(b + 188 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 112);
            *(b + 143 * OS1_S1 + 149) =
                prefactor_z * *(b + 143 * OS1_S1 + 105) -
                p_over_q * *(b + 196 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 105);
            *(b + 143 * OS1_S1 + 150) =
                prefactor_x * *(b + 143 * OS1_S1 + 114) -
                p_over_q * *(b + 188 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 114);
            *(b + 143 * OS1_S1 + 151) =
                prefactor_x * *(b + 143 * OS1_S1 + 115) -
                p_over_q * *(b + 188 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 115);
            *(b + 143 * OS1_S1 + 152) =
                prefactor_x * *(b + 143 * OS1_S1 + 116) -
                p_over_q * *(b + 188 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 116);
            *(b + 143 * OS1_S1 + 153) =
                prefactor_x * *(b + 143 * OS1_S1 + 117) -
                p_over_q * *(b + 188 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 117);
            *(b + 143 * OS1_S1 + 154) =
                prefactor_x * *(b + 143 * OS1_S1 + 118) -
                p_over_q * *(b + 188 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 118);
            *(b + 143 * OS1_S1 + 155) =
                prefactor_x * *(b + 143 * OS1_S1 + 119) -
                p_over_q * *(b + 188 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 119);
            *(b + 143 * OS1_S1 + 156) =
                prefactor_y * *(b + 143 * OS1_S1 + 112) -
                p_over_q * *(b + 195 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 143 * OS1_S1 + 77);
            *(b + 143 * OS1_S1 + 157) =
                prefactor_z * *(b + 143 * OS1_S1 + 112) -
                p_over_q * *(b + 196 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 112);
            *(b + 143 * OS1_S1 + 158) =
                prefactor_z * *(b + 143 * OS1_S1 + 113) -
                p_over_q * *(b + 196 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 113) +
                one_over_two_q * *(b + 143 * OS1_S1 + 77);
            *(b + 143 * OS1_S1 + 159) =
                prefactor_z * *(b + 143 * OS1_S1 + 114) -
                p_over_q * *(b + 196 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 78);
            *(b + 143 * OS1_S1 + 160) =
                prefactor_z * *(b + 143 * OS1_S1 + 115) -
                p_over_q * *(b + 196 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 79);
            *(b + 143 * OS1_S1 + 161) =
                prefactor_y * *(b + 143 * OS1_S1 + 117) -
                p_over_q * *(b + 195 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 143 * OS1_S1 + 82);
            *(b + 143 * OS1_S1 + 162) =
                prefactor_y * *(b + 143 * OS1_S1 + 118) -
                p_over_q * *(b + 195 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 118) +
                one_over_two_q * *(b + 143 * OS1_S1 + 83);
            *(b + 143 * OS1_S1 + 163) =
                prefactor_y * *(b + 143 * OS1_S1 + 119) -
                p_over_q * *(b + 195 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 101 * OS1_S1 + 119);
            *(b + 143 * OS1_S1 + 164) =
                prefactor_z * *(b + 143 * OS1_S1 + 119) -
                p_over_q * *(b + 196 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 143 * OS1_S1 + 83);
            *(b + 144 * OS1_S1 + 120) =
                prefactor_x * *(b + 144 * OS1_S1 + 84) -
                p_over_q * *(b + 189 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 144 * OS1_S1 + 56);
            *(b + 144 * OS1_S1 + 121) =
                prefactor_y * *(b + 144 * OS1_S1 + 84) -
                p_over_q * *(b + 196 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 84);
            *(b + 144 * OS1_S1 + 122) =
                prefactor_z * *(b + 144 * OS1_S1 + 84) -
                p_over_q * *(b + 197 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 84);
            *(b + 144 * OS1_S1 + 123) =
                prefactor_y * *(b + 144 * OS1_S1 + 85) -
                p_over_q * *(b + 196 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 85) +
                one_over_two_q * *(b + 144 * OS1_S1 + 56);
            *(b + 144 * OS1_S1 + 124) =
                prefactor_z * *(b + 144 * OS1_S1 + 85) -
                p_over_q * *(b + 197 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 85);
            *(b + 144 * OS1_S1 + 125) =
                prefactor_z * *(b + 144 * OS1_S1 + 86) -
                p_over_q * *(b + 197 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 86) +
                one_over_two_q * *(b + 144 * OS1_S1 + 56);
            *(b + 144 * OS1_S1 + 126) =
                prefactor_y * *(b + 144 * OS1_S1 + 87) -
                p_over_q * *(b + 196 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 57);
            *(b + 144 * OS1_S1 + 127) =
                prefactor_z * *(b + 144 * OS1_S1 + 87) -
                p_over_q * *(b + 197 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 87);
            *(b + 144 * OS1_S1 + 128) =
                prefactor_y * *(b + 144 * OS1_S1 + 89) -
                p_over_q * *(b + 196 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 89);
            *(b + 144 * OS1_S1 + 129) =
                prefactor_z * *(b + 144 * OS1_S1 + 89) -
                p_over_q * *(b + 197 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 58);
            *(b + 144 * OS1_S1 + 130) =
                prefactor_x * *(b + 144 * OS1_S1 + 94) -
                p_over_q * *(b + 189 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 66);
            *(b + 144 * OS1_S1 + 131) =
                prefactor_z * *(b + 144 * OS1_S1 + 90) -
                p_over_q * *(b + 197 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 90);
            *(b + 144 * OS1_S1 + 132) =
                prefactor_z * *(b + 144 * OS1_S1 + 91) -
                p_over_q * *(b + 197 * OS1_S1 + 91) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 91) +
                one_over_two_q * *(b + 144 * OS1_S1 + 59);
            *(b + 144 * OS1_S1 + 133) =
                prefactor_y * *(b + 144 * OS1_S1 + 93) -
                p_over_q * *(b + 196 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 93);
            *(b + 144 * OS1_S1 + 134) =
                prefactor_x * *(b + 144 * OS1_S1 + 98) -
                p_over_q * *(b + 189 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 70);
            *(b + 144 * OS1_S1 + 135) =
                prefactor_x * *(b + 144 * OS1_S1 + 99) -
                p_over_q * *(b + 189 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 71);
            *(b + 144 * OS1_S1 + 136) =
                prefactor_z * *(b + 144 * OS1_S1 + 94) -
                p_over_q * *(b + 197 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 94);
            *(b + 144 * OS1_S1 + 137) =
                prefactor_z * *(b + 144 * OS1_S1 + 95) -
                p_over_q * *(b + 197 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 95) +
                one_over_two_q * *(b + 144 * OS1_S1 + 62);
            *(b + 144 * OS1_S1 + 138) =
                prefactor_y * *(b + 144 * OS1_S1 + 97) -
                p_over_q * *(b + 196 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 97) +
                one_over_two_q * *(b + 144 * OS1_S1 + 65);
            *(b + 144 * OS1_S1 + 139) =
                prefactor_y * *(b + 144 * OS1_S1 + 98) -
                p_over_q * *(b + 196 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 98);
            *(b + 144 * OS1_S1 + 140) =
                prefactor_x * *(b + 144 * OS1_S1 + 104) -
                p_over_q * *(b + 189 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 76);
            *(b + 144 * OS1_S1 + 141) =
                prefactor_x * *(b + 144 * OS1_S1 + 105) -
                p_over_q * *(b + 189 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 105) +
                one_over_two_q * *(b + 144 * OS1_S1 + 77);
            *(b + 144 * OS1_S1 + 142) =
                prefactor_z * *(b + 144 * OS1_S1 + 99) -
                p_over_q * *(b + 197 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 99);
            *(b + 144 * OS1_S1 + 143) =
                prefactor_x * *(b + 144 * OS1_S1 + 107) -
                p_over_q * *(b + 189 * OS1_S1 + 107) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 107) +
                one_over_two_q * *(b + 144 * OS1_S1 + 79);
            *(b + 144 * OS1_S1 + 144) =
                prefactor_x * *(b + 144 * OS1_S1 + 108) -
                p_over_q * *(b + 189 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 108) +
                one_over_two_q * *(b + 144 * OS1_S1 + 80);
            *(b + 144 * OS1_S1 + 145) =
                prefactor_x * *(b + 144 * OS1_S1 + 109) -
                p_over_q * *(b + 189 * OS1_S1 + 109) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 109) +
                one_over_two_q * *(b + 144 * OS1_S1 + 81);
            *(b + 144 * OS1_S1 + 146) =
                prefactor_y * *(b + 144 * OS1_S1 + 104) -
                p_over_q * *(b + 196 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 104);
            *(b + 144 * OS1_S1 + 147) =
                prefactor_x * *(b + 144 * OS1_S1 + 111) -
                p_over_q * *(b + 189 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 111) +
                one_over_two_q * *(b + 144 * OS1_S1 + 83);
            *(b + 144 * OS1_S1 + 148) =
                prefactor_x * *(b + 144 * OS1_S1 + 112) -
                p_over_q * *(b + 189 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 112);
            *(b + 144 * OS1_S1 + 149) =
                prefactor_x * *(b + 144 * OS1_S1 + 113) -
                p_over_q * *(b + 189 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 113);
            *(b + 144 * OS1_S1 + 150) =
                prefactor_x * *(b + 144 * OS1_S1 + 114) -
                p_over_q * *(b + 189 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 114);
            *(b + 144 * OS1_S1 + 151) =
                prefactor_x * *(b + 144 * OS1_S1 + 115) -
                p_over_q * *(b + 189 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 115);
            *(b + 144 * OS1_S1 + 152) =
                prefactor_x * *(b + 144 * OS1_S1 + 116) -
                p_over_q * *(b + 189 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 116);
            *(b + 144 * OS1_S1 + 153) =
                prefactor_x * *(b + 144 * OS1_S1 + 117) -
                p_over_q * *(b + 189 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 117);
            *(b + 144 * OS1_S1 + 154) =
                prefactor_x * *(b + 144 * OS1_S1 + 118) -
                p_over_q * *(b + 189 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 118);
            *(b + 144 * OS1_S1 + 155) =
                prefactor_x * *(b + 144 * OS1_S1 + 119) -
                p_over_q * *(b + 189 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 119);
            *(b + 144 * OS1_S1 + 156) =
                prefactor_y * *(b + 144 * OS1_S1 + 112) -
                p_over_q * *(b + 196 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 144 * OS1_S1 + 77);
            *(b + 144 * OS1_S1 + 157) =
                prefactor_z * *(b + 144 * OS1_S1 + 112) -
                p_over_q * *(b + 197 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 112);
            *(b + 144 * OS1_S1 + 158) =
                prefactor_z * *(b + 144 * OS1_S1 + 113) -
                p_over_q * *(b + 197 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 113) +
                one_over_two_q * *(b + 144 * OS1_S1 + 77);
            *(b + 144 * OS1_S1 + 159) =
                prefactor_z * *(b + 144 * OS1_S1 + 114) -
                p_over_q * *(b + 197 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 78);
            *(b + 144 * OS1_S1 + 160) =
                prefactor_z * *(b + 144 * OS1_S1 + 115) -
                p_over_q * *(b + 197 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 79);
            *(b + 144 * OS1_S1 + 161) =
                prefactor_y * *(b + 144 * OS1_S1 + 117) -
                p_over_q * *(b + 196 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 144 * OS1_S1 + 82);
            *(b + 144 * OS1_S1 + 162) =
                prefactor_y * *(b + 144 * OS1_S1 + 118) -
                p_over_q * *(b + 196 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 118) +
                one_over_two_q * *(b + 144 * OS1_S1 + 83);
            *(b + 144 * OS1_S1 + 163) =
                prefactor_y * *(b + 144 * OS1_S1 + 119) -
                p_over_q * *(b + 196 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 119);
            *(b + 144 * OS1_S1 + 164) =
                prefactor_z * *(b + 144 * OS1_S1 + 119) -
                p_over_q * *(b + 197 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 144 * OS1_S1 + 83);
            *(b + 145 * OS1_S1 + 120) =
                prefactor_x * *(b + 145 * OS1_S1 + 84) -
                p_over_q * *(b + 190 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 145 * OS1_S1 + 56);
            *(b + 145 * OS1_S1 + 121) =
                prefactor_y * *(b + 145 * OS1_S1 + 84) -
                p_over_q * *(b + 197 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 84);
            *(b + 145 * OS1_S1 + 122) =
                prefactor_z * *(b + 145 * OS1_S1 + 84) -
                p_over_q * *(b + 198 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 84);
            *(b + 145 * OS1_S1 + 123) =
                prefactor_y * *(b + 145 * OS1_S1 + 85) -
                p_over_q * *(b + 197 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 85) +
                one_over_two_q * *(b + 145 * OS1_S1 + 56);
            *(b + 145 * OS1_S1 + 124) =
                prefactor_y * *(b + 145 * OS1_S1 + 86) -
                p_over_q * *(b + 197 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 86);
            *(b + 145 * OS1_S1 + 125) =
                prefactor_z * *(b + 145 * OS1_S1 + 86) -
                p_over_q * *(b + 198 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 86) +
                one_over_two_q * *(b + 145 * OS1_S1 + 56);
            *(b + 145 * OS1_S1 + 126) =
                prefactor_y * *(b + 145 * OS1_S1 + 87) -
                p_over_q * *(b + 197 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 57);
            *(b + 145 * OS1_S1 + 127) =
                prefactor_z * *(b + 145 * OS1_S1 + 87) -
                p_over_q * *(b + 198 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 87);
            *(b + 145 * OS1_S1 + 128) =
                prefactor_y * *(b + 145 * OS1_S1 + 89) -
                p_over_q * *(b + 197 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 89);
            *(b + 145 * OS1_S1 + 129) =
                prefactor_z * *(b + 145 * OS1_S1 + 89) -
                p_over_q * *(b + 198 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 58);
            *(b + 145 * OS1_S1 + 130) =
                prefactor_y * *(b + 145 * OS1_S1 + 90) -
                p_over_q * *(b + 197 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 59);
            *(b + 145 * OS1_S1 + 131) =
                prefactor_z * *(b + 145 * OS1_S1 + 90) -
                p_over_q * *(b + 198 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 90);
            *(b + 145 * OS1_S1 + 132) =
                prefactor_y * *(b + 145 * OS1_S1 + 92) -
                p_over_q * *(b + 197 * OS1_S1 + 92) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 92) +
                one_over_two_q * *(b + 145 * OS1_S1 + 61);
            *(b + 145 * OS1_S1 + 133) =
                prefactor_y * *(b + 145 * OS1_S1 + 93) -
                p_over_q * *(b + 197 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 93);
            *(b + 145 * OS1_S1 + 134) =
                prefactor_x * *(b + 145 * OS1_S1 + 98) -
                p_over_q * *(b + 190 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 70);
            *(b + 145 * OS1_S1 + 135) =
                prefactor_x * *(b + 145 * OS1_S1 + 99) -
                p_over_q * *(b + 190 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 71);
            *(b + 145 * OS1_S1 + 136) =
                prefactor_z * *(b + 145 * OS1_S1 + 94) -
                p_over_q * *(b + 198 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 94);
            *(b + 145 * OS1_S1 + 137) =
                prefactor_z * *(b + 145 * OS1_S1 + 95) -
                p_over_q * *(b + 198 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 95) +
                one_over_two_q * *(b + 145 * OS1_S1 + 62);
            *(b + 145 * OS1_S1 + 138) =
                prefactor_y * *(b + 145 * OS1_S1 + 97) -
                p_over_q * *(b + 197 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 97) +
                one_over_two_q * *(b + 145 * OS1_S1 + 65);
            *(b + 145 * OS1_S1 + 139) =
                prefactor_y * *(b + 145 * OS1_S1 + 98) -
                p_over_q * *(b + 197 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 98);
            *(b + 145 * OS1_S1 + 140) =
                prefactor_x * *(b + 145 * OS1_S1 + 104) -
                p_over_q * *(b + 190 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 76);
            *(b + 145 * OS1_S1 + 141) =
                prefactor_x * *(b + 145 * OS1_S1 + 105) -
                p_over_q * *(b + 190 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 105) +
                one_over_two_q * *(b + 145 * OS1_S1 + 77);
            *(b + 145 * OS1_S1 + 142) =
                prefactor_z * *(b + 145 * OS1_S1 + 99) -
                p_over_q * *(b + 198 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 99);
            *(b + 145 * OS1_S1 + 143) =
                prefactor_x * *(b + 145 * OS1_S1 + 107) -
                p_over_q * *(b + 190 * OS1_S1 + 107) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 107) +
                one_over_two_q * *(b + 145 * OS1_S1 + 79);
            *(b + 145 * OS1_S1 + 144) =
                prefactor_x * *(b + 145 * OS1_S1 + 108) -
                p_over_q * *(b + 190 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 108) +
                one_over_two_q * *(b + 145 * OS1_S1 + 80);
            *(b + 145 * OS1_S1 + 145) =
                prefactor_y * *(b + 145 * OS1_S1 + 103) -
                p_over_q * *(b + 197 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 103) +
                one_over_two_q * *(b + 145 * OS1_S1 + 70);
            *(b + 145 * OS1_S1 + 146) =
                prefactor_y * *(b + 145 * OS1_S1 + 104) -
                p_over_q * *(b + 197 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 104);
            *(b + 145 * OS1_S1 + 147) =
                prefactor_x * *(b + 145 * OS1_S1 + 111) -
                p_over_q * *(b + 190 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 111) +
                one_over_two_q * *(b + 145 * OS1_S1 + 83);
            *(b + 145 * OS1_S1 + 148) =
                prefactor_x * *(b + 145 * OS1_S1 + 112) -
                p_over_q * *(b + 190 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 112);
            *(b + 145 * OS1_S1 + 149) =
                prefactor_x * *(b + 145 * OS1_S1 + 113) -
                p_over_q * *(b + 190 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 113);
            *(b + 145 * OS1_S1 + 150) =
                prefactor_x * *(b + 145 * OS1_S1 + 114) -
                p_over_q * *(b + 190 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 114);
            *(b + 145 * OS1_S1 + 151) =
                prefactor_x * *(b + 145 * OS1_S1 + 115) -
                p_over_q * *(b + 190 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 115);
            *(b + 145 * OS1_S1 + 152) =
                prefactor_x * *(b + 145 * OS1_S1 + 116) -
                p_over_q * *(b + 190 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 116);
            *(b + 145 * OS1_S1 + 153) =
                prefactor_x * *(b + 145 * OS1_S1 + 117) -
                p_over_q * *(b + 190 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 117);
            *(b + 145 * OS1_S1 + 154) =
                prefactor_y * *(b + 145 * OS1_S1 + 111) -
                p_over_q * *(b + 197 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 111);
            *(b + 145 * OS1_S1 + 155) =
                prefactor_x * *(b + 145 * OS1_S1 + 119) -
                p_over_q * *(b + 190 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 119);
            *(b + 145 * OS1_S1 + 156) =
                prefactor_y * *(b + 145 * OS1_S1 + 112) -
                p_over_q * *(b + 197 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 145 * OS1_S1 + 77);
            *(b + 145 * OS1_S1 + 157) =
                prefactor_z * *(b + 145 * OS1_S1 + 112) -
                p_over_q * *(b + 198 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 112);
            *(b + 145 * OS1_S1 + 158) =
                prefactor_z * *(b + 145 * OS1_S1 + 113) -
                p_over_q * *(b + 198 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 113) +
                one_over_two_q * *(b + 145 * OS1_S1 + 77);
            *(b + 145 * OS1_S1 + 159) =
                prefactor_z * *(b + 145 * OS1_S1 + 114) -
                p_over_q * *(b + 198 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 78);
            *(b + 145 * OS1_S1 + 160) =
                prefactor_y * *(b + 145 * OS1_S1 + 116) -
                p_over_q * *(b + 197 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 81);
            *(b + 145 * OS1_S1 + 161) =
                prefactor_y * *(b + 145 * OS1_S1 + 117) -
                p_over_q * *(b + 197 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 145 * OS1_S1 + 82);
            *(b + 145 * OS1_S1 + 162) =
                prefactor_y * *(b + 145 * OS1_S1 + 118) -
                p_over_q * *(b + 197 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 118) +
                one_over_two_q * *(b + 145 * OS1_S1 + 83);
            *(b + 145 * OS1_S1 + 163) =
                prefactor_y * *(b + 145 * OS1_S1 + 119) -
                p_over_q * *(b + 197 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 119);
            *(b + 145 * OS1_S1 + 164) =
                prefactor_z * *(b + 145 * OS1_S1 + 119) -
                p_over_q * *(b + 198 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 102 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 145 * OS1_S1 + 83);
            *(b + 146 * OS1_S1 + 120) =
                prefactor_x * *(b + 146 * OS1_S1 + 84) -
                p_over_q * *(b + 191 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 146 * OS1_S1 + 56);
            *(b + 146 * OS1_S1 + 121) =
                prefactor_y * *(b + 146 * OS1_S1 + 84) -
                p_over_q * *(b + 198 * OS1_S1 + 84) +
                one_over_two_q * *(b + 104 * OS1_S1 + 84);
            *(b + 146 * OS1_S1 + 122) =
                prefactor_z * *(b + 146 * OS1_S1 + 84) -
                p_over_q * *(b + 199 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 84);
            *(b + 146 * OS1_S1 + 123) =
                prefactor_y * *(b + 146 * OS1_S1 + 85) -
                p_over_q * *(b + 198 * OS1_S1 + 85) +
                one_over_two_q * *(b + 104 * OS1_S1 + 85) +
                one_over_two_q * *(b + 146 * OS1_S1 + 56);
            *(b + 146 * OS1_S1 + 124) =
                prefactor_y * *(b + 146 * OS1_S1 + 86) -
                p_over_q * *(b + 198 * OS1_S1 + 86) +
                one_over_two_q * *(b + 104 * OS1_S1 + 86);
            *(b + 146 * OS1_S1 + 125) =
                prefactor_z * *(b + 146 * OS1_S1 + 86) -
                p_over_q * *(b + 199 * OS1_S1 + 86) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 86) +
                one_over_two_q * *(b + 146 * OS1_S1 + 56);
            *(b + 146 * OS1_S1 + 126) =
                prefactor_y * *(b + 146 * OS1_S1 + 87) -
                p_over_q * *(b + 198 * OS1_S1 + 87) +
                one_over_two_q * *(b + 104 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 57);
            *(b + 146 * OS1_S1 + 127) =
                prefactor_z * *(b + 146 * OS1_S1 + 87) -
                p_over_q * *(b + 199 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 87);
            *(b + 146 * OS1_S1 + 128) =
                prefactor_y * *(b + 146 * OS1_S1 + 89) -
                p_over_q * *(b + 198 * OS1_S1 + 89) +
                one_over_two_q * *(b + 104 * OS1_S1 + 89);
            *(b + 146 * OS1_S1 + 129) =
                prefactor_z * *(b + 146 * OS1_S1 + 89) -
                p_over_q * *(b + 199 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 58);
            *(b + 146 * OS1_S1 + 130) =
                prefactor_y * *(b + 146 * OS1_S1 + 90) -
                p_over_q * *(b + 198 * OS1_S1 + 90) +
                one_over_two_q * *(b + 104 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 59);
            *(b + 146 * OS1_S1 + 131) =
                prefactor_z * *(b + 146 * OS1_S1 + 90) -
                p_over_q * *(b + 199 * OS1_S1 + 90) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 90);
            *(b + 146 * OS1_S1 + 132) =
                prefactor_y * *(b + 146 * OS1_S1 + 92) -
                p_over_q * *(b + 198 * OS1_S1 + 92) +
                one_over_two_q * *(b + 104 * OS1_S1 + 92) +
                one_over_two_q * *(b + 146 * OS1_S1 + 61);
            *(b + 146 * OS1_S1 + 133) =
                prefactor_y * *(b + 146 * OS1_S1 + 93) -
                p_over_q * *(b + 198 * OS1_S1 + 93) +
                one_over_two_q * *(b + 104 * OS1_S1 + 93);
            *(b + 146 * OS1_S1 + 134) =
                prefactor_x * *(b + 146 * OS1_S1 + 98) -
                p_over_q * *(b + 191 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 70);
            *(b + 146 * OS1_S1 + 135) =
                prefactor_x * *(b + 146 * OS1_S1 + 99) -
                p_over_q * *(b + 191 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 71);
            *(b + 146 * OS1_S1 + 136) =
                prefactor_z * *(b + 146 * OS1_S1 + 94) -
                p_over_q * *(b + 199 * OS1_S1 + 94) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 94);
            *(b + 146 * OS1_S1 + 137) =
                prefactor_z * *(b + 146 * OS1_S1 + 95) -
                p_over_q * *(b + 199 * OS1_S1 + 95) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 95) +
                one_over_two_q * *(b + 146 * OS1_S1 + 62);
            *(b + 146 * OS1_S1 + 138) =
                prefactor_y * *(b + 146 * OS1_S1 + 97) -
                p_over_q * *(b + 198 * OS1_S1 + 97) +
                one_over_two_q * *(b + 104 * OS1_S1 + 97) +
                one_over_two_q * *(b + 146 * OS1_S1 + 65);
            *(b + 146 * OS1_S1 + 139) =
                prefactor_y * *(b + 146 * OS1_S1 + 98) -
                p_over_q * *(b + 198 * OS1_S1 + 98) +
                one_over_two_q * *(b + 104 * OS1_S1 + 98);
            *(b + 146 * OS1_S1 + 140) =
                prefactor_x * *(b + 146 * OS1_S1 + 104) -
                p_over_q * *(b + 191 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 76);
            *(b + 146 * OS1_S1 + 141) =
                prefactor_x * *(b + 146 * OS1_S1 + 105) -
                p_over_q * *(b + 191 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 105) +
                one_over_two_q * *(b + 146 * OS1_S1 + 77);
            *(b + 146 * OS1_S1 + 142) =
                prefactor_z * *(b + 146 * OS1_S1 + 99) -
                p_over_q * *(b + 199 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 99);
            *(b + 146 * OS1_S1 + 143) =
                prefactor_x * *(b + 146 * OS1_S1 + 107) -
                p_over_q * *(b + 191 * OS1_S1 + 107) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 107) +
                one_over_two_q * *(b + 146 * OS1_S1 + 79);
            *(b + 146 * OS1_S1 + 144) =
                prefactor_x * *(b + 146 * OS1_S1 + 108) -
                p_over_q * *(b + 191 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 108) +
                one_over_two_q * *(b + 146 * OS1_S1 + 80);
            *(b + 146 * OS1_S1 + 145) =
                prefactor_y * *(b + 146 * OS1_S1 + 103) -
                p_over_q * *(b + 198 * OS1_S1 + 103) +
                one_over_two_q * *(b + 104 * OS1_S1 + 103) +
                one_over_two_q * *(b + 146 * OS1_S1 + 70);
            *(b + 146 * OS1_S1 + 146) =
                prefactor_y * *(b + 146 * OS1_S1 + 104) -
                p_over_q * *(b + 198 * OS1_S1 + 104) +
                one_over_two_q * *(b + 104 * OS1_S1 + 104);
            *(b + 146 * OS1_S1 + 147) =
                prefactor_x * *(b + 146 * OS1_S1 + 111) -
                p_over_q * *(b + 191 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 111) +
                one_over_two_q * *(b + 146 * OS1_S1 + 83);
            *(b + 146 * OS1_S1 + 148) =
                prefactor_x * *(b + 146 * OS1_S1 + 112) -
                p_over_q * *(b + 191 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 112);
            *(b + 146 * OS1_S1 + 149) =
                prefactor_x * *(b + 146 * OS1_S1 + 113) -
                p_over_q * *(b + 191 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 113);
            *(b + 146 * OS1_S1 + 150) =
                prefactor_x * *(b + 146 * OS1_S1 + 114) -
                p_over_q * *(b + 191 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 114);
            *(b + 146 * OS1_S1 + 151) =
                prefactor_x * *(b + 146 * OS1_S1 + 115) -
                p_over_q * *(b + 191 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 115);
            *(b + 146 * OS1_S1 + 152) =
                prefactor_x * *(b + 146 * OS1_S1 + 116) -
                p_over_q * *(b + 191 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 116);
            *(b + 146 * OS1_S1 + 153) =
                prefactor_x * *(b + 146 * OS1_S1 + 117) -
                p_over_q * *(b + 191 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 117);
            *(b + 146 * OS1_S1 + 154) =
                prefactor_y * *(b + 146 * OS1_S1 + 111) -
                p_over_q * *(b + 198 * OS1_S1 + 111) +
                one_over_two_q * *(b + 104 * OS1_S1 + 111);
            *(b + 146 * OS1_S1 + 155) =
                prefactor_x * *(b + 146 * OS1_S1 + 119) -
                p_over_q * *(b + 191 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 119);
            *(b + 146 * OS1_S1 + 156) =
                prefactor_y * *(b + 146 * OS1_S1 + 112) -
                p_over_q * *(b + 198 * OS1_S1 + 112) +
                one_over_two_q * *(b + 104 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 146 * OS1_S1 + 77);
            *(b + 146 * OS1_S1 + 157) =
                prefactor_z * *(b + 146 * OS1_S1 + 112) -
                p_over_q * *(b + 199 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 112);
            *(b + 146 * OS1_S1 + 158) =
                prefactor_z * *(b + 146 * OS1_S1 + 113) -
                p_over_q * *(b + 199 * OS1_S1 + 113) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 113) +
                one_over_two_q * *(b + 146 * OS1_S1 + 77);
            *(b + 146 * OS1_S1 + 159) =
                prefactor_z * *(b + 146 * OS1_S1 + 114) -
                p_over_q * *(b + 199 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 78);
            *(b + 146 * OS1_S1 + 160) =
                prefactor_y * *(b + 146 * OS1_S1 + 116) -
                p_over_q * *(b + 198 * OS1_S1 + 116) +
                one_over_two_q * *(b + 104 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 81);
            *(b + 146 * OS1_S1 + 161) =
                prefactor_y * *(b + 146 * OS1_S1 + 117) -
                p_over_q * *(b + 198 * OS1_S1 + 117) +
                one_over_two_q * *(b + 104 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 82);
            *(b + 146 * OS1_S1 + 162) =
                prefactor_y * *(b + 146 * OS1_S1 + 118) -
                p_over_q * *(b + 198 * OS1_S1 + 118) +
                one_over_two_q * *(b + 104 * OS1_S1 + 118) +
                one_over_two_q * *(b + 146 * OS1_S1 + 83);
            *(b + 146 * OS1_S1 + 163) =
                prefactor_y * *(b + 146 * OS1_S1 + 119) -
                p_over_q * *(b + 198 * OS1_S1 + 119) +
                one_over_two_q * *(b + 104 * OS1_S1 + 119);
            *(b + 146 * OS1_S1 + 164) =
                prefactor_z * *(b + 146 * OS1_S1 + 119) -
                p_over_q * *(b + 199 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 103 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 146 * OS1_S1 + 83);
            *(b + 147 * OS1_S1 + 120) =
                prefactor_x * *(b + 147 * OS1_S1 + 84) -
                p_over_q * *(b + 192 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 56);
            *(b + 147 * OS1_S1 + 121) = prefactor_y * *(b + 147 * OS1_S1 + 84) -
                                        p_over_q * *(b + 199 * OS1_S1 + 84);
            *(b + 147 * OS1_S1 + 122) =
                prefactor_z * *(b + 147 * OS1_S1 + 84) -
                p_over_q * *(b + 200 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 84);
            *(b + 147 * OS1_S1 + 123) =
                prefactor_y * *(b + 147 * OS1_S1 + 85) -
                p_over_q * *(b + 199 * OS1_S1 + 85) +
                one_over_two_q * *(b + 147 * OS1_S1 + 56);
            *(b + 147 * OS1_S1 + 124) = prefactor_y * *(b + 147 * OS1_S1 + 86) -
                                        p_over_q * *(b + 199 * OS1_S1 + 86);
            *(b + 147 * OS1_S1 + 125) =
                prefactor_z * *(b + 147 * OS1_S1 + 86) -
                p_over_q * *(b + 200 * OS1_S1 + 86) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 86) +
                one_over_two_q * *(b + 147 * OS1_S1 + 56);
            *(b + 147 * OS1_S1 + 126) =
                prefactor_y * *(b + 147 * OS1_S1 + 87) -
                p_over_q * *(b + 199 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 57);
            *(b + 147 * OS1_S1 + 127) =
                prefactor_z * *(b + 147 * OS1_S1 + 87) -
                p_over_q * *(b + 200 * OS1_S1 + 87) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 87);
            *(b + 147 * OS1_S1 + 128) = prefactor_y * *(b + 147 * OS1_S1 + 89) -
                                        p_over_q * *(b + 199 * OS1_S1 + 89);
            *(b + 147 * OS1_S1 + 129) =
                prefactor_z * *(b + 147 * OS1_S1 + 89) -
                p_over_q * *(b + 200 * OS1_S1 + 89) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 58);
            *(b + 147 * OS1_S1 + 130) =
                prefactor_y * *(b + 147 * OS1_S1 + 90) -
                p_over_q * *(b + 199 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 59);
            *(b + 147 * OS1_S1 + 131) =
                prefactor_z * *(b + 147 * OS1_S1 + 90) -
                p_over_q * *(b + 200 * OS1_S1 + 90) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 90);
            *(b + 147 * OS1_S1 + 132) =
                prefactor_y * *(b + 147 * OS1_S1 + 92) -
                p_over_q * *(b + 199 * OS1_S1 + 92) +
                one_over_two_q * *(b + 147 * OS1_S1 + 61);
            *(b + 147 * OS1_S1 + 133) = prefactor_y * *(b + 147 * OS1_S1 + 93) -
                                        p_over_q * *(b + 199 * OS1_S1 + 93);
            *(b + 147 * OS1_S1 + 134) =
                prefactor_x * *(b + 147 * OS1_S1 + 98) -
                p_over_q * *(b + 192 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 70);
            *(b + 147 * OS1_S1 + 135) =
                prefactor_x * *(b + 147 * OS1_S1 + 99) -
                p_over_q * *(b + 192 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 71);
            *(b + 147 * OS1_S1 + 136) =
                prefactor_z * *(b + 147 * OS1_S1 + 94) -
                p_over_q * *(b + 200 * OS1_S1 + 94) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 94);
            *(b + 147 * OS1_S1 + 137) =
                prefactor_z * *(b + 147 * OS1_S1 + 95) -
                p_over_q * *(b + 200 * OS1_S1 + 95) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 95) +
                one_over_two_q * *(b + 147 * OS1_S1 + 62);
            *(b + 147 * OS1_S1 + 138) =
                prefactor_y * *(b + 147 * OS1_S1 + 97) -
                p_over_q * *(b + 199 * OS1_S1 + 97) +
                one_over_two_q * *(b + 147 * OS1_S1 + 65);
            *(b + 147 * OS1_S1 + 139) = prefactor_y * *(b + 147 * OS1_S1 + 98) -
                                        p_over_q * *(b + 199 * OS1_S1 + 98);
            *(b + 147 * OS1_S1 + 140) =
                prefactor_x * *(b + 147 * OS1_S1 + 104) -
                p_over_q * *(b + 192 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 76);
            *(b + 147 * OS1_S1 + 141) =
                prefactor_x * *(b + 147 * OS1_S1 + 105) -
                p_over_q * *(b + 192 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 105) +
                one_over_two_q * *(b + 147 * OS1_S1 + 77);
            *(b + 147 * OS1_S1 + 142) =
                prefactor_z * *(b + 147 * OS1_S1 + 99) -
                p_over_q * *(b + 200 * OS1_S1 + 99) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 99);
            *(b + 147 * OS1_S1 + 143) =
                prefactor_x * *(b + 147 * OS1_S1 + 107) -
                p_over_q * *(b + 192 * OS1_S1 + 107) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 107) +
                one_over_two_q * *(b + 147 * OS1_S1 + 79);
            *(b + 147 * OS1_S1 + 144) =
                prefactor_x * *(b + 147 * OS1_S1 + 108) -
                p_over_q * *(b + 192 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 108) +
                one_over_two_q * *(b + 147 * OS1_S1 + 80);
            *(b + 147 * OS1_S1 + 145) =
                prefactor_y * *(b + 147 * OS1_S1 + 103) -
                p_over_q * *(b + 199 * OS1_S1 + 103) +
                one_over_two_q * *(b + 147 * OS1_S1 + 70);
            *(b + 147 * OS1_S1 + 146) =
                prefactor_y * *(b + 147 * OS1_S1 + 104) -
                p_over_q * *(b + 199 * OS1_S1 + 104);
            *(b + 147 * OS1_S1 + 147) =
                prefactor_x * *(b + 147 * OS1_S1 + 111) -
                p_over_q * *(b + 192 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 111) +
                one_over_two_q * *(b + 147 * OS1_S1 + 83);
            *(b + 147 * OS1_S1 + 148) =
                prefactor_x * *(b + 147 * OS1_S1 + 112) -
                p_over_q * *(b + 192 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 112);
            *(b + 147 * OS1_S1 + 149) =
                prefactor_x * *(b + 147 * OS1_S1 + 113) -
                p_over_q * *(b + 192 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 113);
            *(b + 147 * OS1_S1 + 150) =
                prefactor_x * *(b + 147 * OS1_S1 + 114) -
                p_over_q * *(b + 192 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 114);
            *(b + 147 * OS1_S1 + 151) =
                prefactor_x * *(b + 147 * OS1_S1 + 115) -
                p_over_q * *(b + 192 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 115);
            *(b + 147 * OS1_S1 + 152) =
                prefactor_x * *(b + 147 * OS1_S1 + 116) -
                p_over_q * *(b + 192 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 116);
            *(b + 147 * OS1_S1 + 153) =
                prefactor_x * *(b + 147 * OS1_S1 + 117) -
                p_over_q * *(b + 192 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 117);
            *(b + 147 * OS1_S1 + 154) =
                prefactor_y * *(b + 147 * OS1_S1 + 111) -
                p_over_q * *(b + 199 * OS1_S1 + 111);
            *(b + 147 * OS1_S1 + 155) =
                prefactor_x * *(b + 147 * OS1_S1 + 119) -
                p_over_q * *(b + 192 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 119);
            *(b + 147 * OS1_S1 + 156) =
                prefactor_y * *(b + 147 * OS1_S1 + 112) -
                p_over_q * *(b + 199 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 77);
            *(b + 147 * OS1_S1 + 157) =
                prefactor_z * *(b + 147 * OS1_S1 + 112) -
                p_over_q * *(b + 200 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 112);
            *(b + 147 * OS1_S1 + 158) =
                prefactor_z * *(b + 147 * OS1_S1 + 113) -
                p_over_q * *(b + 200 * OS1_S1 + 113) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 113) +
                one_over_two_q * *(b + 147 * OS1_S1 + 77);
            *(b + 147 * OS1_S1 + 159) =
                prefactor_z * *(b + 147 * OS1_S1 + 114) -
                p_over_q * *(b + 200 * OS1_S1 + 114) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 78);
            *(b + 147 * OS1_S1 + 160) =
                prefactor_y * *(b + 147 * OS1_S1 + 116) -
                p_over_q * *(b + 199 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 81);
            *(b + 147 * OS1_S1 + 161) =
                prefactor_y * *(b + 147 * OS1_S1 + 117) -
                p_over_q * *(b + 199 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 147 * OS1_S1 + 82);
            *(b + 147 * OS1_S1 + 162) =
                prefactor_y * *(b + 147 * OS1_S1 + 118) -
                p_over_q * *(b + 199 * OS1_S1 + 118) +
                one_over_two_q * *(b + 147 * OS1_S1 + 83);
            *(b + 147 * OS1_S1 + 163) =
                prefactor_y * *(b + 147 * OS1_S1 + 119) -
                p_over_q * *(b + 199 * OS1_S1 + 119);
            *(b + 147 * OS1_S1 + 164) =
                prefactor_z * *(b + 147 * OS1_S1 + 119) -
                p_over_q * *(b + 200 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 104 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 83);
            *(b + 148 * OS1_S1 + 120) =
                prefactor_x * *(b + 148 * OS1_S1 + 84) -
                p_over_q * *(b + 193 * OS1_S1 + 84) +
                one_over_two_q * *(b + 112 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 148 * OS1_S1 + 56);
            *(b + 148 * OS1_S1 + 121) =
                prefactor_y * *(b + 148 * OS1_S1 + 84) -
                p_over_q * *(b + 201 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 84);
            *(b + 148 * OS1_S1 + 122) = prefactor_z * *(b + 148 * OS1_S1 + 84) -
                                        p_over_q * *(b + 202 * OS1_S1 + 84);
            *(b + 148 * OS1_S1 + 123) =
                prefactor_y * *(b + 148 * OS1_S1 + 85) -
                p_over_q * *(b + 201 * OS1_S1 + 85) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 85) +
                one_over_two_q * *(b + 148 * OS1_S1 + 56);
            *(b + 148 * OS1_S1 + 124) = prefactor_z * *(b + 148 * OS1_S1 + 85) -
                                        p_over_q * *(b + 202 * OS1_S1 + 85);
            *(b + 148 * OS1_S1 + 125) =
                prefactor_z * *(b + 148 * OS1_S1 + 86) -
                p_over_q * *(b + 202 * OS1_S1 + 86) +
                one_over_two_q * *(b + 148 * OS1_S1 + 56);
            *(b + 148 * OS1_S1 + 126) =
                prefactor_y * *(b + 148 * OS1_S1 + 87) -
                p_over_q * *(b + 201 * OS1_S1 + 87) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 57);
            *(b + 148 * OS1_S1 + 127) = prefactor_z * *(b + 148 * OS1_S1 + 87) -
                                        p_over_q * *(b + 202 * OS1_S1 + 87);
            *(b + 148 * OS1_S1 + 128) =
                prefactor_y * *(b + 148 * OS1_S1 + 89) -
                p_over_q * *(b + 201 * OS1_S1 + 89) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 89);
            *(b + 148 * OS1_S1 + 129) =
                prefactor_z * *(b + 148 * OS1_S1 + 89) -
                p_over_q * *(b + 202 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 58);
            *(b + 148 * OS1_S1 + 130) =
                prefactor_x * *(b + 148 * OS1_S1 + 94) -
                p_over_q * *(b + 193 * OS1_S1 + 94) +
                one_over_two_q * *(b + 112 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 148 * OS1_S1 + 66);
            *(b + 148 * OS1_S1 + 131) = prefactor_z * *(b + 148 * OS1_S1 + 90) -
                                        p_over_q * *(b + 202 * OS1_S1 + 90);
            *(b + 148 * OS1_S1 + 132) =
                prefactor_z * *(b + 148 * OS1_S1 + 91) -
                p_over_q * *(b + 202 * OS1_S1 + 91) +
                one_over_two_q * *(b + 148 * OS1_S1 + 59);
            *(b + 148 * OS1_S1 + 133) =
                prefactor_y * *(b + 148 * OS1_S1 + 93) -
                p_over_q * *(b + 201 * OS1_S1 + 93) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 93);
            *(b + 148 * OS1_S1 + 134) =
                prefactor_z * *(b + 148 * OS1_S1 + 93) -
                p_over_q * *(b + 202 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 148 * OS1_S1 + 61);
            *(b + 148 * OS1_S1 + 135) =
                prefactor_x * *(b + 148 * OS1_S1 + 99) -
                p_over_q * *(b + 193 * OS1_S1 + 99) +
                one_over_two_q * *(b + 112 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 71);
            *(b + 148 * OS1_S1 + 136) = prefactor_z * *(b + 148 * OS1_S1 + 94) -
                                        p_over_q * *(b + 202 * OS1_S1 + 94);
            *(b + 148 * OS1_S1 + 137) =
                prefactor_z * *(b + 148 * OS1_S1 + 95) -
                p_over_q * *(b + 202 * OS1_S1 + 95) +
                one_over_two_q * *(b + 148 * OS1_S1 + 62);
            *(b + 148 * OS1_S1 + 138) =
                prefactor_y * *(b + 148 * OS1_S1 + 97) -
                p_over_q * *(b + 201 * OS1_S1 + 97) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 97) +
                one_over_two_q * *(b + 148 * OS1_S1 + 65);
            *(b + 148 * OS1_S1 + 139) =
                prefactor_y * *(b + 148 * OS1_S1 + 98) -
                p_over_q * *(b + 201 * OS1_S1 + 98) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 98);
            *(b + 148 * OS1_S1 + 140) =
                prefactor_x * *(b + 148 * OS1_S1 + 104) -
                p_over_q * *(b + 193 * OS1_S1 + 104) +
                one_over_two_q * *(b + 112 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 76);
            *(b + 148 * OS1_S1 + 141) =
                prefactor_x * *(b + 148 * OS1_S1 + 105) -
                p_over_q * *(b + 193 * OS1_S1 + 105) +
                one_over_two_q * *(b + 112 * OS1_S1 + 105) +
                one_over_two_q * *(b + 148 * OS1_S1 + 77);
            *(b + 148 * OS1_S1 + 142) = prefactor_z * *(b + 148 * OS1_S1 + 99) -
                                        p_over_q * *(b + 202 * OS1_S1 + 99);
            *(b + 148 * OS1_S1 + 143) =
                prefactor_z * *(b + 148 * OS1_S1 + 100) -
                p_over_q * *(b + 202 * OS1_S1 + 100) +
                one_over_two_q * *(b + 148 * OS1_S1 + 66);
            *(b + 148 * OS1_S1 + 144) =
                prefactor_x * *(b + 148 * OS1_S1 + 108) -
                p_over_q * *(b + 193 * OS1_S1 + 108) +
                one_over_two_q * *(b + 112 * OS1_S1 + 108) +
                one_over_two_q * *(b + 148 * OS1_S1 + 80);
            *(b + 148 * OS1_S1 + 145) =
                prefactor_x * *(b + 148 * OS1_S1 + 109) -
                p_over_q * *(b + 193 * OS1_S1 + 109) +
                one_over_two_q * *(b + 112 * OS1_S1 + 109) +
                one_over_two_q * *(b + 148 * OS1_S1 + 81);
            *(b + 148 * OS1_S1 + 146) =
                prefactor_y * *(b + 148 * OS1_S1 + 104) -
                p_over_q * *(b + 201 * OS1_S1 + 104) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 104);
            *(b + 148 * OS1_S1 + 147) =
                prefactor_x * *(b + 148 * OS1_S1 + 111) -
                p_over_q * *(b + 193 * OS1_S1 + 111) +
                one_over_two_q * *(b + 112 * OS1_S1 + 111) +
                one_over_two_q * *(b + 148 * OS1_S1 + 83);
            *(b + 148 * OS1_S1 + 148) =
                prefactor_x * *(b + 148 * OS1_S1 + 112) -
                p_over_q * *(b + 193 * OS1_S1 + 112) +
                one_over_two_q * *(b + 112 * OS1_S1 + 112);
            *(b + 148 * OS1_S1 + 149) =
                prefactor_z * *(b + 148 * OS1_S1 + 105) -
                p_over_q * *(b + 202 * OS1_S1 + 105);
            *(b + 148 * OS1_S1 + 150) =
                prefactor_x * *(b + 148 * OS1_S1 + 114) -
                p_over_q * *(b + 193 * OS1_S1 + 114) +
                one_over_two_q * *(b + 112 * OS1_S1 + 114);
            *(b + 148 * OS1_S1 + 151) =
                prefactor_x * *(b + 148 * OS1_S1 + 115) -
                p_over_q * *(b + 193 * OS1_S1 + 115) +
                one_over_two_q * *(b + 112 * OS1_S1 + 115);
            *(b + 148 * OS1_S1 + 152) =
                prefactor_x * *(b + 148 * OS1_S1 + 116) -
                p_over_q * *(b + 193 * OS1_S1 + 116) +
                one_over_two_q * *(b + 112 * OS1_S1 + 116);
            *(b + 148 * OS1_S1 + 153) =
                prefactor_x * *(b + 148 * OS1_S1 + 117) -
                p_over_q * *(b + 193 * OS1_S1 + 117) +
                one_over_two_q * *(b + 112 * OS1_S1 + 117);
            *(b + 148 * OS1_S1 + 154) =
                prefactor_x * *(b + 148 * OS1_S1 + 118) -
                p_over_q * *(b + 193 * OS1_S1 + 118) +
                one_over_two_q * *(b + 112 * OS1_S1 + 118);
            *(b + 148 * OS1_S1 + 155) =
                prefactor_x * *(b + 148 * OS1_S1 + 119) -
                p_over_q * *(b + 193 * OS1_S1 + 119) +
                one_over_two_q * *(b + 112 * OS1_S1 + 119);
            *(b + 148 * OS1_S1 + 156) =
                prefactor_y * *(b + 148 * OS1_S1 + 112) -
                p_over_q * *(b + 201 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 148 * OS1_S1 + 77);
            *(b + 148 * OS1_S1 + 157) =
                prefactor_z * *(b + 148 * OS1_S1 + 112) -
                p_over_q * *(b + 202 * OS1_S1 + 112);
            *(b + 148 * OS1_S1 + 158) =
                prefactor_z * *(b + 148 * OS1_S1 + 113) -
                p_over_q * *(b + 202 * OS1_S1 + 113) +
                one_over_two_q * *(b + 148 * OS1_S1 + 77);
            *(b + 148 * OS1_S1 + 159) =
                prefactor_z * *(b + 148 * OS1_S1 + 114) -
                p_over_q * *(b + 202 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 78);
            *(b + 148 * OS1_S1 + 160) =
                prefactor_z * *(b + 148 * OS1_S1 + 115) -
                p_over_q * *(b + 202 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 148 * OS1_S1 + 79);
            *(b + 148 * OS1_S1 + 161) =
                prefactor_y * *(b + 148 * OS1_S1 + 117) -
                p_over_q * *(b + 201 * OS1_S1 + 117) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 82);
            *(b + 148 * OS1_S1 + 162) =
                prefactor_y * *(b + 148 * OS1_S1 + 118) -
                p_over_q * *(b + 201 * OS1_S1 + 118) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 118) +
                one_over_two_q * *(b + 148 * OS1_S1 + 83);
            *(b + 148 * OS1_S1 + 163) =
                prefactor_y * *(b + 148 * OS1_S1 + 119) -
                p_over_q * *(b + 201 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 119);
            *(b + 148 * OS1_S1 + 164) =
                prefactor_z * *(b + 148 * OS1_S1 + 119) -
                p_over_q * *(b + 202 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 148 * OS1_S1 + 83);
            *(b + 149 * OS1_S1 + 120) =
                prefactor_x * *(b + 149 * OS1_S1 + 84) -
                p_over_q * *(b + 194 * OS1_S1 + 84) +
                one_over_two_q * *(b + 113 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 56);
            *(b + 149 * OS1_S1 + 121) =
                prefactor_y * *(b + 149 * OS1_S1 + 84) -
                p_over_q * *(b + 202 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 84);
            *(b + 149 * OS1_S1 + 122) =
                prefactor_z * *(b + 149 * OS1_S1 + 84) -
                p_over_q * *(b + 203 * OS1_S1 + 84) +
                one_over_two_q * *(b + 105 * OS1_S1 + 84);
            *(b + 149 * OS1_S1 + 123) =
                prefactor_y * *(b + 149 * OS1_S1 + 85) -
                p_over_q * *(b + 202 * OS1_S1 + 85) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 85) +
                one_over_two_q * *(b + 149 * OS1_S1 + 56);
            *(b + 149 * OS1_S1 + 124) =
                prefactor_z * *(b + 149 * OS1_S1 + 85) -
                p_over_q * *(b + 203 * OS1_S1 + 85) +
                one_over_two_q * *(b + 105 * OS1_S1 + 85);
            *(b + 149 * OS1_S1 + 125) =
                prefactor_z * *(b + 149 * OS1_S1 + 86) -
                p_over_q * *(b + 203 * OS1_S1 + 86) +
                one_over_two_q * *(b + 105 * OS1_S1 + 86) +
                one_over_two_q * *(b + 149 * OS1_S1 + 56);
            *(b + 149 * OS1_S1 + 126) =
                prefactor_y * *(b + 149 * OS1_S1 + 87) -
                p_over_q * *(b + 202 * OS1_S1 + 87) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 57);
            *(b + 149 * OS1_S1 + 127) =
                prefactor_z * *(b + 149 * OS1_S1 + 87) -
                p_over_q * *(b + 203 * OS1_S1 + 87) +
                one_over_two_q * *(b + 105 * OS1_S1 + 87);
            *(b + 149 * OS1_S1 + 128) =
                prefactor_y * *(b + 149 * OS1_S1 + 89) -
                p_over_q * *(b + 202 * OS1_S1 + 89) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 89);
            *(b + 149 * OS1_S1 + 129) =
                prefactor_z * *(b + 149 * OS1_S1 + 89) -
                p_over_q * *(b + 203 * OS1_S1 + 89) +
                one_over_two_q * *(b + 105 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 58);
            *(b + 149 * OS1_S1 + 130) =
                prefactor_x * *(b + 149 * OS1_S1 + 94) -
                p_over_q * *(b + 194 * OS1_S1 + 94) +
                one_over_two_q * *(b + 113 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 149 * OS1_S1 + 66);
            *(b + 149 * OS1_S1 + 131) =
                prefactor_z * *(b + 149 * OS1_S1 + 90) -
                p_over_q * *(b + 203 * OS1_S1 + 90) +
                one_over_two_q * *(b + 105 * OS1_S1 + 90);
            *(b + 149 * OS1_S1 + 132) =
                prefactor_z * *(b + 149 * OS1_S1 + 91) -
                p_over_q * *(b + 203 * OS1_S1 + 91) +
                one_over_two_q * *(b + 105 * OS1_S1 + 91) +
                one_over_two_q * *(b + 149 * OS1_S1 + 59);
            *(b + 149 * OS1_S1 + 133) =
                prefactor_y * *(b + 149 * OS1_S1 + 93) -
                p_over_q * *(b + 202 * OS1_S1 + 93) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 93);
            *(b + 149 * OS1_S1 + 134) =
                prefactor_z * *(b + 149 * OS1_S1 + 93) -
                p_over_q * *(b + 203 * OS1_S1 + 93) +
                one_over_two_q * *(b + 105 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 149 * OS1_S1 + 61);
            *(b + 149 * OS1_S1 + 135) =
                prefactor_x * *(b + 149 * OS1_S1 + 99) -
                p_over_q * *(b + 194 * OS1_S1 + 99) +
                one_over_two_q * *(b + 113 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 71);
            *(b + 149 * OS1_S1 + 136) =
                prefactor_z * *(b + 149 * OS1_S1 + 94) -
                p_over_q * *(b + 203 * OS1_S1 + 94) +
                one_over_two_q * *(b + 105 * OS1_S1 + 94);
            *(b + 149 * OS1_S1 + 137) =
                prefactor_z * *(b + 149 * OS1_S1 + 95) -
                p_over_q * *(b + 203 * OS1_S1 + 95) +
                one_over_two_q * *(b + 105 * OS1_S1 + 95) +
                one_over_two_q * *(b + 149 * OS1_S1 + 62);
            *(b + 149 * OS1_S1 + 138) =
                prefactor_y * *(b + 149 * OS1_S1 + 97) -
                p_over_q * *(b + 202 * OS1_S1 + 97) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 97) +
                one_over_two_q * *(b + 149 * OS1_S1 + 65);
            *(b + 149 * OS1_S1 + 139) =
                prefactor_y * *(b + 149 * OS1_S1 + 98) -
                p_over_q * *(b + 202 * OS1_S1 + 98) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 98);
            *(b + 149 * OS1_S1 + 140) =
                prefactor_x * *(b + 149 * OS1_S1 + 104) -
                p_over_q * *(b + 194 * OS1_S1 + 104) +
                one_over_two_q * *(b + 113 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 76);
            *(b + 149 * OS1_S1 + 141) =
                prefactor_x * *(b + 149 * OS1_S1 + 105) -
                p_over_q * *(b + 194 * OS1_S1 + 105) +
                one_over_two_q * *(b + 113 * OS1_S1 + 105) +
                one_over_two_q * *(b + 149 * OS1_S1 + 77);
            *(b + 149 * OS1_S1 + 142) =
                prefactor_z * *(b + 149 * OS1_S1 + 99) -
                p_over_q * *(b + 203 * OS1_S1 + 99) +
                one_over_two_q * *(b + 105 * OS1_S1 + 99);
            *(b + 149 * OS1_S1 + 143) =
                prefactor_z * *(b + 149 * OS1_S1 + 100) -
                p_over_q * *(b + 203 * OS1_S1 + 100) +
                one_over_two_q * *(b + 105 * OS1_S1 + 100) +
                one_over_two_q * *(b + 149 * OS1_S1 + 66);
            *(b + 149 * OS1_S1 + 144) =
                prefactor_x * *(b + 149 * OS1_S1 + 108) -
                p_over_q * *(b + 194 * OS1_S1 + 108) +
                one_over_two_q * *(b + 113 * OS1_S1 + 108) +
                one_over_two_q * *(b + 149 * OS1_S1 + 80);
            *(b + 149 * OS1_S1 + 145) =
                prefactor_x * *(b + 149 * OS1_S1 + 109) -
                p_over_q * *(b + 194 * OS1_S1 + 109) +
                one_over_two_q * *(b + 113 * OS1_S1 + 109) +
                one_over_two_q * *(b + 149 * OS1_S1 + 81);
            *(b + 149 * OS1_S1 + 146) =
                prefactor_y * *(b + 149 * OS1_S1 + 104) -
                p_over_q * *(b + 202 * OS1_S1 + 104) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 104);
            *(b + 149 * OS1_S1 + 147) =
                prefactor_x * *(b + 149 * OS1_S1 + 111) -
                p_over_q * *(b + 194 * OS1_S1 + 111) +
                one_over_two_q * *(b + 113 * OS1_S1 + 111) +
                one_over_two_q * *(b + 149 * OS1_S1 + 83);
            *(b + 149 * OS1_S1 + 148) =
                prefactor_x * *(b + 149 * OS1_S1 + 112) -
                p_over_q * *(b + 194 * OS1_S1 + 112) +
                one_over_two_q * *(b + 113 * OS1_S1 + 112);
            *(b + 149 * OS1_S1 + 149) =
                prefactor_z * *(b + 149 * OS1_S1 + 105) -
                p_over_q * *(b + 203 * OS1_S1 + 105) +
                one_over_two_q * *(b + 105 * OS1_S1 + 105);
            *(b + 149 * OS1_S1 + 150) =
                prefactor_x * *(b + 149 * OS1_S1 + 114) -
                p_over_q * *(b + 194 * OS1_S1 + 114) +
                one_over_two_q * *(b + 113 * OS1_S1 + 114);
            *(b + 149 * OS1_S1 + 151) =
                prefactor_x * *(b + 149 * OS1_S1 + 115) -
                p_over_q * *(b + 194 * OS1_S1 + 115) +
                one_over_two_q * *(b + 113 * OS1_S1 + 115);
            *(b + 149 * OS1_S1 + 152) =
                prefactor_x * *(b + 149 * OS1_S1 + 116) -
                p_over_q * *(b + 194 * OS1_S1 + 116) +
                one_over_two_q * *(b + 113 * OS1_S1 + 116);
            *(b + 149 * OS1_S1 + 153) =
                prefactor_x * *(b + 149 * OS1_S1 + 117) -
                p_over_q * *(b + 194 * OS1_S1 + 117) +
                one_over_two_q * *(b + 113 * OS1_S1 + 117);
            *(b + 149 * OS1_S1 + 154) =
                prefactor_x * *(b + 149 * OS1_S1 + 118) -
                p_over_q * *(b + 194 * OS1_S1 + 118) +
                one_over_two_q * *(b + 113 * OS1_S1 + 118);
            *(b + 149 * OS1_S1 + 155) =
                prefactor_x * *(b + 149 * OS1_S1 + 119) -
                p_over_q * *(b + 194 * OS1_S1 + 119) +
                one_over_two_q * *(b + 113 * OS1_S1 + 119);
            *(b + 149 * OS1_S1 + 156) =
                prefactor_y * *(b + 149 * OS1_S1 + 112) -
                p_over_q * *(b + 202 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 77);
            *(b + 149 * OS1_S1 + 157) =
                prefactor_z * *(b + 149 * OS1_S1 + 112) -
                p_over_q * *(b + 203 * OS1_S1 + 112) +
                one_over_two_q * *(b + 105 * OS1_S1 + 112);
            *(b + 149 * OS1_S1 + 158) =
                prefactor_z * *(b + 149 * OS1_S1 + 113) -
                p_over_q * *(b + 203 * OS1_S1 + 113) +
                one_over_two_q * *(b + 105 * OS1_S1 + 113) +
                one_over_two_q * *(b + 149 * OS1_S1 + 77);
            *(b + 149 * OS1_S1 + 159) =
                prefactor_z * *(b + 149 * OS1_S1 + 114) -
                p_over_q * *(b + 203 * OS1_S1 + 114) +
                one_over_two_q * *(b + 105 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 78);
            *(b + 149 * OS1_S1 + 160) =
                prefactor_z * *(b + 149 * OS1_S1 + 115) -
                p_over_q * *(b + 203 * OS1_S1 + 115) +
                one_over_two_q * *(b + 105 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 149 * OS1_S1 + 79);
            *(b + 149 * OS1_S1 + 161) =
                prefactor_y * *(b + 149 * OS1_S1 + 117) -
                p_over_q * *(b + 202 * OS1_S1 + 117) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 82);
            *(b + 149 * OS1_S1 + 162) =
                prefactor_y * *(b + 149 * OS1_S1 + 118) -
                p_over_q * *(b + 202 * OS1_S1 + 118) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 118) +
                one_over_two_q * *(b + 149 * OS1_S1 + 83);
            *(b + 149 * OS1_S1 + 163) =
                prefactor_y * *(b + 149 * OS1_S1 + 119) -
                p_over_q * *(b + 202 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 106 * OS1_S1 + 119);
            *(b + 149 * OS1_S1 + 164) =
                prefactor_z * *(b + 149 * OS1_S1 + 119) -
                p_over_q * *(b + 203 * OS1_S1 + 119) +
                one_over_two_q * *(b + 105 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 83);
            *(b + 150 * OS1_S1 + 120) =
                prefactor_x * *(b + 150 * OS1_S1 + 84) -
                p_over_q * *(b + 195 * OS1_S1 + 84) +
                one_over_two_q * *(b + 114 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 150 * OS1_S1 + 56);
            *(b + 150 * OS1_S1 + 121) =
                prefactor_y * *(b + 150 * OS1_S1 + 84) -
                p_over_q * *(b + 203 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 84);
            *(b + 150 * OS1_S1 + 122) =
                prefactor_z * *(b + 150 * OS1_S1 + 84) -
                p_over_q * *(b + 204 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 84);
            *(b + 150 * OS1_S1 + 123) =
                prefactor_y * *(b + 150 * OS1_S1 + 85) -
                p_over_q * *(b + 203 * OS1_S1 + 85) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 85) +
                one_over_two_q * *(b + 150 * OS1_S1 + 56);
            *(b + 150 * OS1_S1 + 124) =
                prefactor_z * *(b + 150 * OS1_S1 + 85) -
                p_over_q * *(b + 204 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 85);
            *(b + 150 * OS1_S1 + 125) =
                prefactor_z * *(b + 150 * OS1_S1 + 86) -
                p_over_q * *(b + 204 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 86) +
                one_over_two_q * *(b + 150 * OS1_S1 + 56);
            *(b + 150 * OS1_S1 + 126) =
                prefactor_y * *(b + 150 * OS1_S1 + 87) -
                p_over_q * *(b + 203 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 57);
            *(b + 150 * OS1_S1 + 127) =
                prefactor_z * *(b + 150 * OS1_S1 + 87) -
                p_over_q * *(b + 204 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 87);
            *(b + 150 * OS1_S1 + 128) =
                prefactor_y * *(b + 150 * OS1_S1 + 89) -
                p_over_q * *(b + 203 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 89);
            *(b + 150 * OS1_S1 + 129) =
                prefactor_z * *(b + 150 * OS1_S1 + 89) -
                p_over_q * *(b + 204 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 58);
            *(b + 150 * OS1_S1 + 130) =
                prefactor_x * *(b + 150 * OS1_S1 + 94) -
                p_over_q * *(b + 195 * OS1_S1 + 94) +
                one_over_two_q * *(b + 114 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 66);
            *(b + 150 * OS1_S1 + 131) =
                prefactor_z * *(b + 150 * OS1_S1 + 90) -
                p_over_q * *(b + 204 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 90);
            *(b + 150 * OS1_S1 + 132) =
                prefactor_z * *(b + 150 * OS1_S1 + 91) -
                p_over_q * *(b + 204 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 91) +
                one_over_two_q * *(b + 150 * OS1_S1 + 59);
            *(b + 150 * OS1_S1 + 133) =
                prefactor_y * *(b + 150 * OS1_S1 + 93) -
                p_over_q * *(b + 203 * OS1_S1 + 93) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 93);
            *(b + 150 * OS1_S1 + 134) =
                prefactor_x * *(b + 150 * OS1_S1 + 98) -
                p_over_q * *(b + 195 * OS1_S1 + 98) +
                one_over_two_q * *(b + 114 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 70);
            *(b + 150 * OS1_S1 + 135) =
                prefactor_x * *(b + 150 * OS1_S1 + 99) -
                p_over_q * *(b + 195 * OS1_S1 + 99) +
                one_over_two_q * *(b + 114 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 71);
            *(b + 150 * OS1_S1 + 136) =
                prefactor_z * *(b + 150 * OS1_S1 + 94) -
                p_over_q * *(b + 204 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 94);
            *(b + 150 * OS1_S1 + 137) =
                prefactor_z * *(b + 150 * OS1_S1 + 95) -
                p_over_q * *(b + 204 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 95) +
                one_over_two_q * *(b + 150 * OS1_S1 + 62);
            *(b + 150 * OS1_S1 + 138) =
                prefactor_y * *(b + 150 * OS1_S1 + 97) -
                p_over_q * *(b + 203 * OS1_S1 + 97) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 97) +
                one_over_two_q * *(b + 150 * OS1_S1 + 65);
            *(b + 150 * OS1_S1 + 139) =
                prefactor_y * *(b + 150 * OS1_S1 + 98) -
                p_over_q * *(b + 203 * OS1_S1 + 98) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 98);
            *(b + 150 * OS1_S1 + 140) =
                prefactor_x * *(b + 150 * OS1_S1 + 104) -
                p_over_q * *(b + 195 * OS1_S1 + 104) +
                one_over_two_q * *(b + 114 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 76);
            *(b + 150 * OS1_S1 + 141) =
                prefactor_x * *(b + 150 * OS1_S1 + 105) -
                p_over_q * *(b + 195 * OS1_S1 + 105) +
                one_over_two_q * *(b + 114 * OS1_S1 + 105) +
                one_over_two_q * *(b + 150 * OS1_S1 + 77);
            *(b + 150 * OS1_S1 + 142) =
                prefactor_z * *(b + 150 * OS1_S1 + 99) -
                p_over_q * *(b + 204 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 99);
            *(b + 150 * OS1_S1 + 143) =
                prefactor_x * *(b + 150 * OS1_S1 + 107) -
                p_over_q * *(b + 195 * OS1_S1 + 107) +
                one_over_two_q * *(b + 114 * OS1_S1 + 107) +
                one_over_two_q * *(b + 150 * OS1_S1 + 79);
            *(b + 150 * OS1_S1 + 144) =
                prefactor_x * *(b + 150 * OS1_S1 + 108) -
                p_over_q * *(b + 195 * OS1_S1 + 108) +
                one_over_two_q * *(b + 114 * OS1_S1 + 108) +
                one_over_two_q * *(b + 150 * OS1_S1 + 80);
            *(b + 150 * OS1_S1 + 145) =
                prefactor_x * *(b + 150 * OS1_S1 + 109) -
                p_over_q * *(b + 195 * OS1_S1 + 109) +
                one_over_two_q * *(b + 114 * OS1_S1 + 109) +
                one_over_two_q * *(b + 150 * OS1_S1 + 81);
            *(b + 150 * OS1_S1 + 146) =
                prefactor_y * *(b + 150 * OS1_S1 + 104) -
                p_over_q * *(b + 203 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 104);
            *(b + 150 * OS1_S1 + 147) =
                prefactor_x * *(b + 150 * OS1_S1 + 111) -
                p_over_q * *(b + 195 * OS1_S1 + 111) +
                one_over_two_q * *(b + 114 * OS1_S1 + 111) +
                one_over_two_q * *(b + 150 * OS1_S1 + 83);
            *(b + 150 * OS1_S1 + 148) =
                prefactor_x * *(b + 150 * OS1_S1 + 112) -
                p_over_q * *(b + 195 * OS1_S1 + 112) +
                one_over_two_q * *(b + 114 * OS1_S1 + 112);
            *(b + 150 * OS1_S1 + 149) =
                prefactor_x * *(b + 150 * OS1_S1 + 113) -
                p_over_q * *(b + 195 * OS1_S1 + 113) +
                one_over_two_q * *(b + 114 * OS1_S1 + 113);
            *(b + 150 * OS1_S1 + 150) =
                prefactor_x * *(b + 150 * OS1_S1 + 114) -
                p_over_q * *(b + 195 * OS1_S1 + 114) +
                one_over_two_q * *(b + 114 * OS1_S1 + 114);
            *(b + 150 * OS1_S1 + 151) =
                prefactor_x * *(b + 150 * OS1_S1 + 115) -
                p_over_q * *(b + 195 * OS1_S1 + 115) +
                one_over_two_q * *(b + 114 * OS1_S1 + 115);
            *(b + 150 * OS1_S1 + 152) =
                prefactor_x * *(b + 150 * OS1_S1 + 116) -
                p_over_q * *(b + 195 * OS1_S1 + 116) +
                one_over_two_q * *(b + 114 * OS1_S1 + 116);
            *(b + 150 * OS1_S1 + 153) =
                prefactor_x * *(b + 150 * OS1_S1 + 117) -
                p_over_q * *(b + 195 * OS1_S1 + 117) +
                one_over_two_q * *(b + 114 * OS1_S1 + 117);
            *(b + 150 * OS1_S1 + 154) =
                prefactor_x * *(b + 150 * OS1_S1 + 118) -
                p_over_q * *(b + 195 * OS1_S1 + 118) +
                one_over_two_q * *(b + 114 * OS1_S1 + 118);
            *(b + 150 * OS1_S1 + 155) =
                prefactor_x * *(b + 150 * OS1_S1 + 119) -
                p_over_q * *(b + 195 * OS1_S1 + 119) +
                one_over_two_q * *(b + 114 * OS1_S1 + 119);
            *(b + 150 * OS1_S1 + 156) =
                prefactor_y * *(b + 150 * OS1_S1 + 112) -
                p_over_q * *(b + 203 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 150 * OS1_S1 + 77);
            *(b + 150 * OS1_S1 + 157) =
                prefactor_z * *(b + 150 * OS1_S1 + 112) -
                p_over_q * *(b + 204 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 112);
            *(b + 150 * OS1_S1 + 158) =
                prefactor_z * *(b + 150 * OS1_S1 + 113) -
                p_over_q * *(b + 204 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 113) +
                one_over_two_q * *(b + 150 * OS1_S1 + 77);
            *(b + 150 * OS1_S1 + 159) =
                prefactor_z * *(b + 150 * OS1_S1 + 114) -
                p_over_q * *(b + 204 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 78);
            *(b + 150 * OS1_S1 + 160) =
                prefactor_z * *(b + 150 * OS1_S1 + 115) -
                p_over_q * *(b + 204 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 79);
            *(b + 150 * OS1_S1 + 161) =
                prefactor_y * *(b + 150 * OS1_S1 + 117) -
                p_over_q * *(b + 203 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 82);
            *(b + 150 * OS1_S1 + 162) =
                prefactor_y * *(b + 150 * OS1_S1 + 118) -
                p_over_q * *(b + 203 * OS1_S1 + 118) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 118) +
                one_over_two_q * *(b + 150 * OS1_S1 + 83);
            *(b + 150 * OS1_S1 + 163) =
                prefactor_y * *(b + 150 * OS1_S1 + 119) -
                p_over_q * *(b + 203 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 107 * OS1_S1 + 119);
            *(b + 150 * OS1_S1 + 164) =
                prefactor_z * *(b + 150 * OS1_S1 + 119) -
                p_over_q * *(b + 204 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 150 * OS1_S1 + 83);
            *(b + 151 * OS1_S1 + 120) =
                prefactor_x * *(b + 151 * OS1_S1 + 84) -
                p_over_q * *(b + 196 * OS1_S1 + 84) +
                one_over_two_q * *(b + 115 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 151 * OS1_S1 + 56);
            *(b + 151 * OS1_S1 + 121) =
                prefactor_y * *(b + 151 * OS1_S1 + 84) -
                p_over_q * *(b + 204 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 84);
            *(b + 151 * OS1_S1 + 122) =
                prefactor_z * *(b + 151 * OS1_S1 + 84) -
                p_over_q * *(b + 205 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 84);
            *(b + 151 * OS1_S1 + 123) =
                prefactor_y * *(b + 151 * OS1_S1 + 85) -
                p_over_q * *(b + 204 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 85) +
                one_over_two_q * *(b + 151 * OS1_S1 + 56);
            *(b + 151 * OS1_S1 + 124) =
                prefactor_z * *(b + 151 * OS1_S1 + 85) -
                p_over_q * *(b + 205 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 85);
            *(b + 151 * OS1_S1 + 125) =
                prefactor_z * *(b + 151 * OS1_S1 + 86) -
                p_over_q * *(b + 205 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 86) +
                one_over_two_q * *(b + 151 * OS1_S1 + 56);
            *(b + 151 * OS1_S1 + 126) =
                prefactor_y * *(b + 151 * OS1_S1 + 87) -
                p_over_q * *(b + 204 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 57);
            *(b + 151 * OS1_S1 + 127) =
                prefactor_z * *(b + 151 * OS1_S1 + 87) -
                p_over_q * *(b + 205 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 87);
            *(b + 151 * OS1_S1 + 128) =
                prefactor_y * *(b + 151 * OS1_S1 + 89) -
                p_over_q * *(b + 204 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 89);
            *(b + 151 * OS1_S1 + 129) =
                prefactor_z * *(b + 151 * OS1_S1 + 89) -
                p_over_q * *(b + 205 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 58);
            *(b + 151 * OS1_S1 + 130) =
                prefactor_x * *(b + 151 * OS1_S1 + 94) -
                p_over_q * *(b + 196 * OS1_S1 + 94) +
                one_over_two_q * *(b + 115 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 151 * OS1_S1 + 66);
            *(b + 151 * OS1_S1 + 131) =
                prefactor_z * *(b + 151 * OS1_S1 + 90) -
                p_over_q * *(b + 205 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 90);
            *(b + 151 * OS1_S1 + 132) =
                prefactor_z * *(b + 151 * OS1_S1 + 91) -
                p_over_q * *(b + 205 * OS1_S1 + 91) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 91) +
                one_over_two_q * *(b + 151 * OS1_S1 + 59);
            *(b + 151 * OS1_S1 + 133) =
                prefactor_y * *(b + 151 * OS1_S1 + 93) -
                p_over_q * *(b + 204 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 93);
            *(b + 151 * OS1_S1 + 134) =
                prefactor_x * *(b + 151 * OS1_S1 + 98) -
                p_over_q * *(b + 196 * OS1_S1 + 98) +
                one_over_two_q * *(b + 115 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 151 * OS1_S1 + 70);
            *(b + 151 * OS1_S1 + 135) =
                prefactor_x * *(b + 151 * OS1_S1 + 99) -
                p_over_q * *(b + 196 * OS1_S1 + 99) +
                one_over_two_q * *(b + 115 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 71);
            *(b + 151 * OS1_S1 + 136) =
                prefactor_z * *(b + 151 * OS1_S1 + 94) -
                p_over_q * *(b + 205 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 94);
            *(b + 151 * OS1_S1 + 137) =
                prefactor_z * *(b + 151 * OS1_S1 + 95) -
                p_over_q * *(b + 205 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 95) +
                one_over_two_q * *(b + 151 * OS1_S1 + 62);
            *(b + 151 * OS1_S1 + 138) =
                prefactor_y * *(b + 151 * OS1_S1 + 97) -
                p_over_q * *(b + 204 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 97) +
                one_over_two_q * *(b + 151 * OS1_S1 + 65);
            *(b + 151 * OS1_S1 + 139) =
                prefactor_y * *(b + 151 * OS1_S1 + 98) -
                p_over_q * *(b + 204 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 98);
            *(b + 151 * OS1_S1 + 140) =
                prefactor_x * *(b + 151 * OS1_S1 + 104) -
                p_over_q * *(b + 196 * OS1_S1 + 104) +
                one_over_two_q * *(b + 115 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 76);
            *(b + 151 * OS1_S1 + 141) =
                prefactor_x * *(b + 151 * OS1_S1 + 105) -
                p_over_q * *(b + 196 * OS1_S1 + 105) +
                one_over_two_q * *(b + 115 * OS1_S1 + 105) +
                one_over_two_q * *(b + 151 * OS1_S1 + 77);
            *(b + 151 * OS1_S1 + 142) =
                prefactor_z * *(b + 151 * OS1_S1 + 99) -
                p_over_q * *(b + 205 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 99);
            *(b + 151 * OS1_S1 + 143) =
                prefactor_x * *(b + 151 * OS1_S1 + 107) -
                p_over_q * *(b + 196 * OS1_S1 + 107) +
                one_over_two_q * *(b + 115 * OS1_S1 + 107) +
                one_over_two_q * *(b + 151 * OS1_S1 + 79);
            *(b + 151 * OS1_S1 + 144) =
                prefactor_x * *(b + 151 * OS1_S1 + 108) -
                p_over_q * *(b + 196 * OS1_S1 + 108) +
                one_over_two_q * *(b + 115 * OS1_S1 + 108) +
                one_over_two_q * *(b + 151 * OS1_S1 + 80);
            *(b + 151 * OS1_S1 + 145) =
                prefactor_x * *(b + 151 * OS1_S1 + 109) -
                p_over_q * *(b + 196 * OS1_S1 + 109) +
                one_over_two_q * *(b + 115 * OS1_S1 + 109) +
                one_over_two_q * *(b + 151 * OS1_S1 + 81);
            *(b + 151 * OS1_S1 + 146) =
                prefactor_y * *(b + 151 * OS1_S1 + 104) -
                p_over_q * *(b + 204 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 104);
            *(b + 151 * OS1_S1 + 147) =
                prefactor_x * *(b + 151 * OS1_S1 + 111) -
                p_over_q * *(b + 196 * OS1_S1 + 111) +
                one_over_two_q * *(b + 115 * OS1_S1 + 111) +
                one_over_two_q * *(b + 151 * OS1_S1 + 83);
            *(b + 151 * OS1_S1 + 148) =
                prefactor_x * *(b + 151 * OS1_S1 + 112) -
                p_over_q * *(b + 196 * OS1_S1 + 112) +
                one_over_two_q * *(b + 115 * OS1_S1 + 112);
            *(b + 151 * OS1_S1 + 149) =
                prefactor_x * *(b + 151 * OS1_S1 + 113) -
                p_over_q * *(b + 196 * OS1_S1 + 113) +
                one_over_two_q * *(b + 115 * OS1_S1 + 113);
            *(b + 151 * OS1_S1 + 150) =
                prefactor_x * *(b + 151 * OS1_S1 + 114) -
                p_over_q * *(b + 196 * OS1_S1 + 114) +
                one_over_two_q * *(b + 115 * OS1_S1 + 114);
            *(b + 151 * OS1_S1 + 151) =
                prefactor_x * *(b + 151 * OS1_S1 + 115) -
                p_over_q * *(b + 196 * OS1_S1 + 115) +
                one_over_two_q * *(b + 115 * OS1_S1 + 115);
            *(b + 151 * OS1_S1 + 152) =
                prefactor_x * *(b + 151 * OS1_S1 + 116) -
                p_over_q * *(b + 196 * OS1_S1 + 116) +
                one_over_two_q * *(b + 115 * OS1_S1 + 116);
            *(b + 151 * OS1_S1 + 153) =
                prefactor_x * *(b + 151 * OS1_S1 + 117) -
                p_over_q * *(b + 196 * OS1_S1 + 117) +
                one_over_two_q * *(b + 115 * OS1_S1 + 117);
            *(b + 151 * OS1_S1 + 154) =
                prefactor_x * *(b + 151 * OS1_S1 + 118) -
                p_over_q * *(b + 196 * OS1_S1 + 118) +
                one_over_two_q * *(b + 115 * OS1_S1 + 118);
            *(b + 151 * OS1_S1 + 155) =
                prefactor_x * *(b + 151 * OS1_S1 + 119) -
                p_over_q * *(b + 196 * OS1_S1 + 119) +
                one_over_two_q * *(b + 115 * OS1_S1 + 119);
            *(b + 151 * OS1_S1 + 156) =
                prefactor_y * *(b + 151 * OS1_S1 + 112) -
                p_over_q * *(b + 204 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 151 * OS1_S1 + 77);
            *(b + 151 * OS1_S1 + 157) =
                prefactor_z * *(b + 151 * OS1_S1 + 112) -
                p_over_q * *(b + 205 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 112);
            *(b + 151 * OS1_S1 + 158) =
                prefactor_z * *(b + 151 * OS1_S1 + 113) -
                p_over_q * *(b + 205 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 113) +
                one_over_two_q * *(b + 151 * OS1_S1 + 77);
            *(b + 151 * OS1_S1 + 159) =
                prefactor_z * *(b + 151 * OS1_S1 + 114) -
                p_over_q * *(b + 205 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 78);
            *(b + 151 * OS1_S1 + 160) =
                prefactor_z * *(b + 151 * OS1_S1 + 115) -
                p_over_q * *(b + 205 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 151 * OS1_S1 + 79);
            *(b + 151 * OS1_S1 + 161) =
                prefactor_y * *(b + 151 * OS1_S1 + 117) -
                p_over_q * *(b + 204 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 82);
            *(b + 151 * OS1_S1 + 162) =
                prefactor_y * *(b + 151 * OS1_S1 + 118) -
                p_over_q * *(b + 204 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 118) +
                one_over_two_q * *(b + 151 * OS1_S1 + 83);
            *(b + 151 * OS1_S1 + 163) =
                prefactor_y * *(b + 151 * OS1_S1 + 119) -
                p_over_q * *(b + 204 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 119);
            *(b + 151 * OS1_S1 + 164) =
                prefactor_z * *(b + 151 * OS1_S1 + 119) -
                p_over_q * *(b + 205 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 151 * OS1_S1 + 83);
            *(b + 152 * OS1_S1 + 120) =
                prefactor_x * *(b + 152 * OS1_S1 + 84) -
                p_over_q * *(b + 197 * OS1_S1 + 84) +
                one_over_two_q * *(b + 116 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 152 * OS1_S1 + 56);
            *(b + 152 * OS1_S1 + 121) =
                prefactor_y * *(b + 152 * OS1_S1 + 84) -
                p_over_q * *(b + 205 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 84);
            *(b + 152 * OS1_S1 + 122) =
                prefactor_z * *(b + 152 * OS1_S1 + 84) -
                p_over_q * *(b + 206 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 84);
            *(b + 152 * OS1_S1 + 123) =
                prefactor_y * *(b + 152 * OS1_S1 + 85) -
                p_over_q * *(b + 205 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 85) +
                one_over_two_q * *(b + 152 * OS1_S1 + 56);
            *(b + 152 * OS1_S1 + 124) =
                prefactor_y * *(b + 152 * OS1_S1 + 86) -
                p_over_q * *(b + 205 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 86);
            *(b + 152 * OS1_S1 + 125) =
                prefactor_z * *(b + 152 * OS1_S1 + 86) -
                p_over_q * *(b + 206 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 86) +
                one_over_two_q * *(b + 152 * OS1_S1 + 56);
            *(b + 152 * OS1_S1 + 126) =
                prefactor_y * *(b + 152 * OS1_S1 + 87) -
                p_over_q * *(b + 205 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 57);
            *(b + 152 * OS1_S1 + 127) =
                prefactor_z * *(b + 152 * OS1_S1 + 87) -
                p_over_q * *(b + 206 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 87);
            *(b + 152 * OS1_S1 + 128) =
                prefactor_y * *(b + 152 * OS1_S1 + 89) -
                p_over_q * *(b + 205 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 89);
            *(b + 152 * OS1_S1 + 129) =
                prefactor_z * *(b + 152 * OS1_S1 + 89) -
                p_over_q * *(b + 206 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 58);
            *(b + 152 * OS1_S1 + 130) =
                prefactor_x * *(b + 152 * OS1_S1 + 94) -
                p_over_q * *(b + 197 * OS1_S1 + 94) +
                one_over_two_q * *(b + 116 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 152 * OS1_S1 + 66);
            *(b + 152 * OS1_S1 + 131) =
                prefactor_z * *(b + 152 * OS1_S1 + 90) -
                p_over_q * *(b + 206 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 90);
            *(b + 152 * OS1_S1 + 132) =
                prefactor_y * *(b + 152 * OS1_S1 + 92) -
                p_over_q * *(b + 205 * OS1_S1 + 92) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 92) +
                one_over_two_q * *(b + 152 * OS1_S1 + 61);
            *(b + 152 * OS1_S1 + 133) =
                prefactor_y * *(b + 152 * OS1_S1 + 93) -
                p_over_q * *(b + 205 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 93);
            *(b + 152 * OS1_S1 + 134) =
                prefactor_x * *(b + 152 * OS1_S1 + 98) -
                p_over_q * *(b + 197 * OS1_S1 + 98) +
                one_over_two_q * *(b + 116 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 152 * OS1_S1 + 70);
            *(b + 152 * OS1_S1 + 135) =
                prefactor_x * *(b + 152 * OS1_S1 + 99) -
                p_over_q * *(b + 197 * OS1_S1 + 99) +
                one_over_two_q * *(b + 116 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 71);
            *(b + 152 * OS1_S1 + 136) =
                prefactor_z * *(b + 152 * OS1_S1 + 94) -
                p_over_q * *(b + 206 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 94);
            *(b + 152 * OS1_S1 + 137) =
                prefactor_z * *(b + 152 * OS1_S1 + 95) -
                p_over_q * *(b + 206 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 95) +
                one_over_two_q * *(b + 152 * OS1_S1 + 62);
            *(b + 152 * OS1_S1 + 138) =
                prefactor_y * *(b + 152 * OS1_S1 + 97) -
                p_over_q * *(b + 205 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 97) +
                one_over_two_q * *(b + 152 * OS1_S1 + 65);
            *(b + 152 * OS1_S1 + 139) =
                prefactor_y * *(b + 152 * OS1_S1 + 98) -
                p_over_q * *(b + 205 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 98);
            *(b + 152 * OS1_S1 + 140) =
                prefactor_x * *(b + 152 * OS1_S1 + 104) -
                p_over_q * *(b + 197 * OS1_S1 + 104) +
                one_over_two_q * *(b + 116 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 76);
            *(b + 152 * OS1_S1 + 141) =
                prefactor_x * *(b + 152 * OS1_S1 + 105) -
                p_over_q * *(b + 197 * OS1_S1 + 105) +
                one_over_two_q * *(b + 116 * OS1_S1 + 105) +
                one_over_two_q * *(b + 152 * OS1_S1 + 77);
            *(b + 152 * OS1_S1 + 142) =
                prefactor_z * *(b + 152 * OS1_S1 + 99) -
                p_over_q * *(b + 206 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 99);
            *(b + 152 * OS1_S1 + 143) =
                prefactor_x * *(b + 152 * OS1_S1 + 107) -
                p_over_q * *(b + 197 * OS1_S1 + 107) +
                one_over_two_q * *(b + 116 * OS1_S1 + 107) +
                one_over_two_q * *(b + 152 * OS1_S1 + 79);
            *(b + 152 * OS1_S1 + 144) =
                prefactor_x * *(b + 152 * OS1_S1 + 108) -
                p_over_q * *(b + 197 * OS1_S1 + 108) +
                one_over_two_q * *(b + 116 * OS1_S1 + 108) +
                one_over_two_q * *(b + 152 * OS1_S1 + 80);
            *(b + 152 * OS1_S1 + 145) =
                prefactor_x * *(b + 152 * OS1_S1 + 109) -
                p_over_q * *(b + 197 * OS1_S1 + 109) +
                one_over_two_q * *(b + 116 * OS1_S1 + 109) +
                one_over_two_q * *(b + 152 * OS1_S1 + 81);
            *(b + 152 * OS1_S1 + 146) =
                prefactor_y * *(b + 152 * OS1_S1 + 104) -
                p_over_q * *(b + 205 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 104);
            *(b + 152 * OS1_S1 + 147) =
                prefactor_x * *(b + 152 * OS1_S1 + 111) -
                p_over_q * *(b + 197 * OS1_S1 + 111) +
                one_over_two_q * *(b + 116 * OS1_S1 + 111) +
                one_over_two_q * *(b + 152 * OS1_S1 + 83);
            *(b + 152 * OS1_S1 + 148) =
                prefactor_x * *(b + 152 * OS1_S1 + 112) -
                p_over_q * *(b + 197 * OS1_S1 + 112) +
                one_over_two_q * *(b + 116 * OS1_S1 + 112);
            *(b + 152 * OS1_S1 + 149) =
                prefactor_x * *(b + 152 * OS1_S1 + 113) -
                p_over_q * *(b + 197 * OS1_S1 + 113) +
                one_over_two_q * *(b + 116 * OS1_S1 + 113);
            *(b + 152 * OS1_S1 + 150) =
                prefactor_x * *(b + 152 * OS1_S1 + 114) -
                p_over_q * *(b + 197 * OS1_S1 + 114) +
                one_over_two_q * *(b + 116 * OS1_S1 + 114);
            *(b + 152 * OS1_S1 + 151) =
                prefactor_x * *(b + 152 * OS1_S1 + 115) -
                p_over_q * *(b + 197 * OS1_S1 + 115) +
                one_over_two_q * *(b + 116 * OS1_S1 + 115);
            *(b + 152 * OS1_S1 + 152) =
                prefactor_x * *(b + 152 * OS1_S1 + 116) -
                p_over_q * *(b + 197 * OS1_S1 + 116) +
                one_over_two_q * *(b + 116 * OS1_S1 + 116);
            *(b + 152 * OS1_S1 + 153) =
                prefactor_x * *(b + 152 * OS1_S1 + 117) -
                p_over_q * *(b + 197 * OS1_S1 + 117) +
                one_over_two_q * *(b + 116 * OS1_S1 + 117);
            *(b + 152 * OS1_S1 + 154) =
                prefactor_x * *(b + 152 * OS1_S1 + 118) -
                p_over_q * *(b + 197 * OS1_S1 + 118) +
                one_over_two_q * *(b + 116 * OS1_S1 + 118);
            *(b + 152 * OS1_S1 + 155) =
                prefactor_x * *(b + 152 * OS1_S1 + 119) -
                p_over_q * *(b + 197 * OS1_S1 + 119) +
                one_over_two_q * *(b + 116 * OS1_S1 + 119);
            *(b + 152 * OS1_S1 + 156) =
                prefactor_y * *(b + 152 * OS1_S1 + 112) -
                p_over_q * *(b + 205 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 152 * OS1_S1 + 77);
            *(b + 152 * OS1_S1 + 157) =
                prefactor_z * *(b + 152 * OS1_S1 + 112) -
                p_over_q * *(b + 206 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 112);
            *(b + 152 * OS1_S1 + 158) =
                prefactor_z * *(b + 152 * OS1_S1 + 113) -
                p_over_q * *(b + 206 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 113) +
                one_over_two_q * *(b + 152 * OS1_S1 + 77);
            *(b + 152 * OS1_S1 + 159) =
                prefactor_z * *(b + 152 * OS1_S1 + 114) -
                p_over_q * *(b + 206 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 78);
            *(b + 152 * OS1_S1 + 160) =
                prefactor_y * *(b + 152 * OS1_S1 + 116) -
                p_over_q * *(b + 205 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 152 * OS1_S1 + 81);
            *(b + 152 * OS1_S1 + 161) =
                prefactor_y * *(b + 152 * OS1_S1 + 117) -
                p_over_q * *(b + 205 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 82);
            *(b + 152 * OS1_S1 + 162) =
                prefactor_y * *(b + 152 * OS1_S1 + 118) -
                p_over_q * *(b + 205 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 118) +
                one_over_two_q * *(b + 152 * OS1_S1 + 83);
            *(b + 152 * OS1_S1 + 163) =
                prefactor_y * *(b + 152 * OS1_S1 + 119) -
                p_over_q * *(b + 205 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 119);
            *(b + 152 * OS1_S1 + 164) =
                prefactor_z * *(b + 152 * OS1_S1 + 119) -
                p_over_q * *(b + 206 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 108 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 152 * OS1_S1 + 83);
            *(b + 153 * OS1_S1 + 120) =
                prefactor_x * *(b + 153 * OS1_S1 + 84) -
                p_over_q * *(b + 198 * OS1_S1 + 84) +
                one_over_two_q * *(b + 117 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 153 * OS1_S1 + 56);
            *(b + 153 * OS1_S1 + 121) =
                prefactor_y * *(b + 153 * OS1_S1 + 84) -
                p_over_q * *(b + 206 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 84);
            *(b + 153 * OS1_S1 + 122) =
                prefactor_z * *(b + 153 * OS1_S1 + 84) -
                p_over_q * *(b + 207 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 84);
            *(b + 153 * OS1_S1 + 123) =
                prefactor_y * *(b + 153 * OS1_S1 + 85) -
                p_over_q * *(b + 206 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 85) +
                one_over_two_q * *(b + 153 * OS1_S1 + 56);
            *(b + 153 * OS1_S1 + 124) =
                prefactor_y * *(b + 153 * OS1_S1 + 86) -
                p_over_q * *(b + 206 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 86);
            *(b + 153 * OS1_S1 + 125) =
                prefactor_z * *(b + 153 * OS1_S1 + 86) -
                p_over_q * *(b + 207 * OS1_S1 + 86) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 86) +
                one_over_two_q * *(b + 153 * OS1_S1 + 56);
            *(b + 153 * OS1_S1 + 126) =
                prefactor_y * *(b + 153 * OS1_S1 + 87) -
                p_over_q * *(b + 206 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 57);
            *(b + 153 * OS1_S1 + 127) =
                prefactor_z * *(b + 153 * OS1_S1 + 87) -
                p_over_q * *(b + 207 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 87);
            *(b + 153 * OS1_S1 + 128) =
                prefactor_y * *(b + 153 * OS1_S1 + 89) -
                p_over_q * *(b + 206 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 89);
            *(b + 153 * OS1_S1 + 129) =
                prefactor_z * *(b + 153 * OS1_S1 + 89) -
                p_over_q * *(b + 207 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 58);
            *(b + 153 * OS1_S1 + 130) =
                prefactor_x * *(b + 153 * OS1_S1 + 94) -
                p_over_q * *(b + 198 * OS1_S1 + 94) +
                one_over_two_q * *(b + 117 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 66);
            *(b + 153 * OS1_S1 + 131) =
                prefactor_z * *(b + 153 * OS1_S1 + 90) -
                p_over_q * *(b + 207 * OS1_S1 + 90) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 90);
            *(b + 153 * OS1_S1 + 132) =
                prefactor_y * *(b + 153 * OS1_S1 + 92) -
                p_over_q * *(b + 206 * OS1_S1 + 92) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 92) +
                one_over_two_q * *(b + 153 * OS1_S1 + 61);
            *(b + 153 * OS1_S1 + 133) =
                prefactor_y * *(b + 153 * OS1_S1 + 93) -
                p_over_q * *(b + 206 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 93);
            *(b + 153 * OS1_S1 + 134) =
                prefactor_x * *(b + 153 * OS1_S1 + 98) -
                p_over_q * *(b + 198 * OS1_S1 + 98) +
                one_over_two_q * *(b + 117 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 70);
            *(b + 153 * OS1_S1 + 135) =
                prefactor_x * *(b + 153 * OS1_S1 + 99) -
                p_over_q * *(b + 198 * OS1_S1 + 99) +
                one_over_two_q * *(b + 117 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 71);
            *(b + 153 * OS1_S1 + 136) =
                prefactor_z * *(b + 153 * OS1_S1 + 94) -
                p_over_q * *(b + 207 * OS1_S1 + 94) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 94);
            *(b + 153 * OS1_S1 + 137) =
                prefactor_z * *(b + 153 * OS1_S1 + 95) -
                p_over_q * *(b + 207 * OS1_S1 + 95) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 95) +
                one_over_two_q * *(b + 153 * OS1_S1 + 62);
            *(b + 153 * OS1_S1 + 138) =
                prefactor_y * *(b + 153 * OS1_S1 + 97) -
                p_over_q * *(b + 206 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 97) +
                one_over_two_q * *(b + 153 * OS1_S1 + 65);
            *(b + 153 * OS1_S1 + 139) =
                prefactor_y * *(b + 153 * OS1_S1 + 98) -
                p_over_q * *(b + 206 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 98);
            *(b + 153 * OS1_S1 + 140) =
                prefactor_x * *(b + 153 * OS1_S1 + 104) -
                p_over_q * *(b + 198 * OS1_S1 + 104) +
                one_over_two_q * *(b + 117 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 76);
            *(b + 153 * OS1_S1 + 141) =
                prefactor_x * *(b + 153 * OS1_S1 + 105) -
                p_over_q * *(b + 198 * OS1_S1 + 105) +
                one_over_two_q * *(b + 117 * OS1_S1 + 105) +
                one_over_two_q * *(b + 153 * OS1_S1 + 77);
            *(b + 153 * OS1_S1 + 142) =
                prefactor_z * *(b + 153 * OS1_S1 + 99) -
                p_over_q * *(b + 207 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 99);
            *(b + 153 * OS1_S1 + 143) =
                prefactor_x * *(b + 153 * OS1_S1 + 107) -
                p_over_q * *(b + 198 * OS1_S1 + 107) +
                one_over_two_q * *(b + 117 * OS1_S1 + 107) +
                one_over_two_q * *(b + 153 * OS1_S1 + 79);
            *(b + 153 * OS1_S1 + 144) =
                prefactor_x * *(b + 153 * OS1_S1 + 108) -
                p_over_q * *(b + 198 * OS1_S1 + 108) +
                one_over_two_q * *(b + 117 * OS1_S1 + 108) +
                one_over_two_q * *(b + 153 * OS1_S1 + 80);
            *(b + 153 * OS1_S1 + 145) =
                prefactor_x * *(b + 153 * OS1_S1 + 109) -
                p_over_q * *(b + 198 * OS1_S1 + 109) +
                one_over_two_q * *(b + 117 * OS1_S1 + 109) +
                one_over_two_q * *(b + 153 * OS1_S1 + 81);
            *(b + 153 * OS1_S1 + 146) =
                prefactor_y * *(b + 153 * OS1_S1 + 104) -
                p_over_q * *(b + 206 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 104);
            *(b + 153 * OS1_S1 + 147) =
                prefactor_x * *(b + 153 * OS1_S1 + 111) -
                p_over_q * *(b + 198 * OS1_S1 + 111) +
                one_over_two_q * *(b + 117 * OS1_S1 + 111) +
                one_over_two_q * *(b + 153 * OS1_S1 + 83);
            *(b + 153 * OS1_S1 + 148) =
                prefactor_x * *(b + 153 * OS1_S1 + 112) -
                p_over_q * *(b + 198 * OS1_S1 + 112) +
                one_over_two_q * *(b + 117 * OS1_S1 + 112);
            *(b + 153 * OS1_S1 + 149) =
                prefactor_x * *(b + 153 * OS1_S1 + 113) -
                p_over_q * *(b + 198 * OS1_S1 + 113) +
                one_over_two_q * *(b + 117 * OS1_S1 + 113);
            *(b + 153 * OS1_S1 + 150) =
                prefactor_x * *(b + 153 * OS1_S1 + 114) -
                p_over_q * *(b + 198 * OS1_S1 + 114) +
                one_over_two_q * *(b + 117 * OS1_S1 + 114);
            *(b + 153 * OS1_S1 + 151) =
                prefactor_x * *(b + 153 * OS1_S1 + 115) -
                p_over_q * *(b + 198 * OS1_S1 + 115) +
                one_over_two_q * *(b + 117 * OS1_S1 + 115);
            *(b + 153 * OS1_S1 + 152) =
                prefactor_x * *(b + 153 * OS1_S1 + 116) -
                p_over_q * *(b + 198 * OS1_S1 + 116) +
                one_over_two_q * *(b + 117 * OS1_S1 + 116);
            *(b + 153 * OS1_S1 + 153) =
                prefactor_x * *(b + 153 * OS1_S1 + 117) -
                p_over_q * *(b + 198 * OS1_S1 + 117) +
                one_over_two_q * *(b + 117 * OS1_S1 + 117);
            *(b + 153 * OS1_S1 + 154) =
                prefactor_x * *(b + 153 * OS1_S1 + 118) -
                p_over_q * *(b + 198 * OS1_S1 + 118) +
                one_over_two_q * *(b + 117 * OS1_S1 + 118);
            *(b + 153 * OS1_S1 + 155) =
                prefactor_x * *(b + 153 * OS1_S1 + 119) -
                p_over_q * *(b + 198 * OS1_S1 + 119) +
                one_over_two_q * *(b + 117 * OS1_S1 + 119);
            *(b + 153 * OS1_S1 + 156) =
                prefactor_y * *(b + 153 * OS1_S1 + 112) -
                p_over_q * *(b + 206 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 153 * OS1_S1 + 77);
            *(b + 153 * OS1_S1 + 157) =
                prefactor_z * *(b + 153 * OS1_S1 + 112) -
                p_over_q * *(b + 207 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 112);
            *(b + 153 * OS1_S1 + 158) =
                prefactor_z * *(b + 153 * OS1_S1 + 113) -
                p_over_q * *(b + 207 * OS1_S1 + 113) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 113) +
                one_over_two_q * *(b + 153 * OS1_S1 + 77);
            *(b + 153 * OS1_S1 + 159) =
                prefactor_z * *(b + 153 * OS1_S1 + 114) -
                p_over_q * *(b + 207 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 78);
            *(b + 153 * OS1_S1 + 160) =
                prefactor_y * *(b + 153 * OS1_S1 + 116) -
                p_over_q * *(b + 206 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 81);
            *(b + 153 * OS1_S1 + 161) =
                prefactor_y * *(b + 153 * OS1_S1 + 117) -
                p_over_q * *(b + 206 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 82);
            *(b + 153 * OS1_S1 + 162) =
                prefactor_y * *(b + 153 * OS1_S1 + 118) -
                p_over_q * *(b + 206 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 118) +
                one_over_two_q * *(b + 153 * OS1_S1 + 83);
            *(b + 153 * OS1_S1 + 163) =
                prefactor_y * *(b + 153 * OS1_S1 + 119) -
                p_over_q * *(b + 206 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 119);
            *(b + 153 * OS1_S1 + 164) =
                prefactor_z * *(b + 153 * OS1_S1 + 119) -
                p_over_q * *(b + 207 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 109 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 153 * OS1_S1 + 83);
            *(b + 154 * OS1_S1 + 120) =
                prefactor_x * *(b + 154 * OS1_S1 + 84) -
                p_over_q * *(b + 199 * OS1_S1 + 84) +
                one_over_two_q * *(b + 118 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 56);
            *(b + 154 * OS1_S1 + 121) =
                prefactor_y * *(b + 154 * OS1_S1 + 84) -
                p_over_q * *(b + 207 * OS1_S1 + 84) +
                one_over_two_q * *(b + 111 * OS1_S1 + 84);
            *(b + 154 * OS1_S1 + 122) =
                prefactor_z * *(b + 154 * OS1_S1 + 84) -
                p_over_q * *(b + 208 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 84);
            *(b + 154 * OS1_S1 + 123) =
                prefactor_y * *(b + 154 * OS1_S1 + 85) -
                p_over_q * *(b + 207 * OS1_S1 + 85) +
                one_over_two_q * *(b + 111 * OS1_S1 + 85) +
                one_over_two_q * *(b + 154 * OS1_S1 + 56);
            *(b + 154 * OS1_S1 + 124) =
                prefactor_y * *(b + 154 * OS1_S1 + 86) -
                p_over_q * *(b + 207 * OS1_S1 + 86) +
                one_over_two_q * *(b + 111 * OS1_S1 + 86);
            *(b + 154 * OS1_S1 + 125) =
                prefactor_z * *(b + 154 * OS1_S1 + 86) -
                p_over_q * *(b + 208 * OS1_S1 + 86) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 86) +
                one_over_two_q * *(b + 154 * OS1_S1 + 56);
            *(b + 154 * OS1_S1 + 126) =
                prefactor_y * *(b + 154 * OS1_S1 + 87) -
                p_over_q * *(b + 207 * OS1_S1 + 87) +
                one_over_two_q * *(b + 111 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 57);
            *(b + 154 * OS1_S1 + 127) =
                prefactor_z * *(b + 154 * OS1_S1 + 87) -
                p_over_q * *(b + 208 * OS1_S1 + 87) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 87);
            *(b + 154 * OS1_S1 + 128) =
                prefactor_y * *(b + 154 * OS1_S1 + 89) -
                p_over_q * *(b + 207 * OS1_S1 + 89) +
                one_over_two_q * *(b + 111 * OS1_S1 + 89);
            *(b + 154 * OS1_S1 + 129) =
                prefactor_z * *(b + 154 * OS1_S1 + 89) -
                p_over_q * *(b + 208 * OS1_S1 + 89) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 58);
            *(b + 154 * OS1_S1 + 130) =
                prefactor_y * *(b + 154 * OS1_S1 + 90) -
                p_over_q * *(b + 207 * OS1_S1 + 90) +
                one_over_two_q * *(b + 111 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 154 * OS1_S1 + 59);
            *(b + 154 * OS1_S1 + 131) =
                prefactor_z * *(b + 154 * OS1_S1 + 90) -
                p_over_q * *(b + 208 * OS1_S1 + 90) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 90);
            *(b + 154 * OS1_S1 + 132) =
                prefactor_y * *(b + 154 * OS1_S1 + 92) -
                p_over_q * *(b + 207 * OS1_S1 + 92) +
                one_over_two_q * *(b + 111 * OS1_S1 + 92) +
                one_over_two_q * *(b + 154 * OS1_S1 + 61);
            *(b + 154 * OS1_S1 + 133) =
                prefactor_y * *(b + 154 * OS1_S1 + 93) -
                p_over_q * *(b + 207 * OS1_S1 + 93) +
                one_over_two_q * *(b + 111 * OS1_S1 + 93);
            *(b + 154 * OS1_S1 + 134) =
                prefactor_x * *(b + 154 * OS1_S1 + 98) -
                p_over_q * *(b + 199 * OS1_S1 + 98) +
                one_over_two_q * *(b + 118 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 154 * OS1_S1 + 70);
            *(b + 154 * OS1_S1 + 135) =
                prefactor_x * *(b + 154 * OS1_S1 + 99) -
                p_over_q * *(b + 199 * OS1_S1 + 99) +
                one_over_two_q * *(b + 118 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 71);
            *(b + 154 * OS1_S1 + 136) =
                prefactor_z * *(b + 154 * OS1_S1 + 94) -
                p_over_q * *(b + 208 * OS1_S1 + 94) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 94);
            *(b + 154 * OS1_S1 + 137) =
                prefactor_z * *(b + 154 * OS1_S1 + 95) -
                p_over_q * *(b + 208 * OS1_S1 + 95) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 95) +
                one_over_two_q * *(b + 154 * OS1_S1 + 62);
            *(b + 154 * OS1_S1 + 138) =
                prefactor_y * *(b + 154 * OS1_S1 + 97) -
                p_over_q * *(b + 207 * OS1_S1 + 97) +
                one_over_two_q * *(b + 111 * OS1_S1 + 97) +
                one_over_two_q * *(b + 154 * OS1_S1 + 65);
            *(b + 154 * OS1_S1 + 139) =
                prefactor_y * *(b + 154 * OS1_S1 + 98) -
                p_over_q * *(b + 207 * OS1_S1 + 98) +
                one_over_two_q * *(b + 111 * OS1_S1 + 98);
            *(b + 154 * OS1_S1 + 140) =
                prefactor_x * *(b + 154 * OS1_S1 + 104) -
                p_over_q * *(b + 199 * OS1_S1 + 104) +
                one_over_two_q * *(b + 118 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 76);
            *(b + 154 * OS1_S1 + 141) =
                prefactor_x * *(b + 154 * OS1_S1 + 105) -
                p_over_q * *(b + 199 * OS1_S1 + 105) +
                one_over_two_q * *(b + 118 * OS1_S1 + 105) +
                one_over_two_q * *(b + 154 * OS1_S1 + 77);
            *(b + 154 * OS1_S1 + 142) =
                prefactor_z * *(b + 154 * OS1_S1 + 99) -
                p_over_q * *(b + 208 * OS1_S1 + 99) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 99);
            *(b + 154 * OS1_S1 + 143) =
                prefactor_x * *(b + 154 * OS1_S1 + 107) -
                p_over_q * *(b + 199 * OS1_S1 + 107) +
                one_over_two_q * *(b + 118 * OS1_S1 + 107) +
                one_over_two_q * *(b + 154 * OS1_S1 + 79);
            *(b + 154 * OS1_S1 + 144) =
                prefactor_x * *(b + 154 * OS1_S1 + 108) -
                p_over_q * *(b + 199 * OS1_S1 + 108) +
                one_over_two_q * *(b + 118 * OS1_S1 + 108) +
                one_over_two_q * *(b + 154 * OS1_S1 + 80);
            *(b + 154 * OS1_S1 + 145) =
                prefactor_y * *(b + 154 * OS1_S1 + 103) -
                p_over_q * *(b + 207 * OS1_S1 + 103) +
                one_over_two_q * *(b + 111 * OS1_S1 + 103) +
                one_over_two_q * *(b + 154 * OS1_S1 + 70);
            *(b + 154 * OS1_S1 + 146) =
                prefactor_y * *(b + 154 * OS1_S1 + 104) -
                p_over_q * *(b + 207 * OS1_S1 + 104) +
                one_over_two_q * *(b + 111 * OS1_S1 + 104);
            *(b + 154 * OS1_S1 + 147) =
                prefactor_x * *(b + 154 * OS1_S1 + 111) -
                p_over_q * *(b + 199 * OS1_S1 + 111) +
                one_over_two_q * *(b + 118 * OS1_S1 + 111) +
                one_over_two_q * *(b + 154 * OS1_S1 + 83);
            *(b + 154 * OS1_S1 + 148) =
                prefactor_x * *(b + 154 * OS1_S1 + 112) -
                p_over_q * *(b + 199 * OS1_S1 + 112) +
                one_over_two_q * *(b + 118 * OS1_S1 + 112);
            *(b + 154 * OS1_S1 + 149) =
                prefactor_x * *(b + 154 * OS1_S1 + 113) -
                p_over_q * *(b + 199 * OS1_S1 + 113) +
                one_over_two_q * *(b + 118 * OS1_S1 + 113);
            *(b + 154 * OS1_S1 + 150) =
                prefactor_x * *(b + 154 * OS1_S1 + 114) -
                p_over_q * *(b + 199 * OS1_S1 + 114) +
                one_over_two_q * *(b + 118 * OS1_S1 + 114);
            *(b + 154 * OS1_S1 + 151) =
                prefactor_x * *(b + 154 * OS1_S1 + 115) -
                p_over_q * *(b + 199 * OS1_S1 + 115) +
                one_over_two_q * *(b + 118 * OS1_S1 + 115);
            *(b + 154 * OS1_S1 + 152) =
                prefactor_x * *(b + 154 * OS1_S1 + 116) -
                p_over_q * *(b + 199 * OS1_S1 + 116) +
                one_over_two_q * *(b + 118 * OS1_S1 + 116);
            *(b + 154 * OS1_S1 + 153) =
                prefactor_x * *(b + 154 * OS1_S1 + 117) -
                p_over_q * *(b + 199 * OS1_S1 + 117) +
                one_over_two_q * *(b + 118 * OS1_S1 + 117);
            *(b + 154 * OS1_S1 + 154) =
                prefactor_y * *(b + 154 * OS1_S1 + 111) -
                p_over_q * *(b + 207 * OS1_S1 + 111) +
                one_over_two_q * *(b + 111 * OS1_S1 + 111);
            *(b + 154 * OS1_S1 + 155) =
                prefactor_x * *(b + 154 * OS1_S1 + 119) -
                p_over_q * *(b + 199 * OS1_S1 + 119) +
                one_over_two_q * *(b + 118 * OS1_S1 + 119);
            *(b + 154 * OS1_S1 + 156) =
                prefactor_y * *(b + 154 * OS1_S1 + 112) -
                p_over_q * *(b + 207 * OS1_S1 + 112) +
                one_over_two_q * *(b + 111 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 77);
            *(b + 154 * OS1_S1 + 157) =
                prefactor_z * *(b + 154 * OS1_S1 + 112) -
                p_over_q * *(b + 208 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 112);
            *(b + 154 * OS1_S1 + 158) =
                prefactor_z * *(b + 154 * OS1_S1 + 113) -
                p_over_q * *(b + 208 * OS1_S1 + 113) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 113) +
                one_over_two_q * *(b + 154 * OS1_S1 + 77);
            *(b + 154 * OS1_S1 + 159) =
                prefactor_z * *(b + 154 * OS1_S1 + 114) -
                p_over_q * *(b + 208 * OS1_S1 + 114) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 78);
            *(b + 154 * OS1_S1 + 160) =
                prefactor_y * *(b + 154 * OS1_S1 + 116) -
                p_over_q * *(b + 207 * OS1_S1 + 116) +
                one_over_two_q * *(b + 111 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 154 * OS1_S1 + 81);
            *(b + 154 * OS1_S1 + 161) =
                prefactor_y * *(b + 154 * OS1_S1 + 117) -
                p_over_q * *(b + 207 * OS1_S1 + 117) +
                one_over_two_q * *(b + 111 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 82);
            *(b + 154 * OS1_S1 + 162) =
                prefactor_y * *(b + 154 * OS1_S1 + 118) -
                p_over_q * *(b + 207 * OS1_S1 + 118) +
                one_over_two_q * *(b + 111 * OS1_S1 + 118) +
                one_over_two_q * *(b + 154 * OS1_S1 + 83);
            *(b + 154 * OS1_S1 + 163) =
                prefactor_y * *(b + 154 * OS1_S1 + 119) -
                p_over_q * *(b + 207 * OS1_S1 + 119) +
                one_over_two_q * *(b + 111 * OS1_S1 + 119);
            *(b + 154 * OS1_S1 + 164) =
                prefactor_z * *(b + 154 * OS1_S1 + 119) -
                p_over_q * *(b + 208 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 110 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 83);
            *(b + 155 * OS1_S1 + 120) =
                prefactor_x * *(b + 155 * OS1_S1 + 84) -
                p_over_q * *(b + 200 * OS1_S1 + 84) +
                one_over_two_q * *(b + 119 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 155 * OS1_S1 + 56);
            *(b + 155 * OS1_S1 + 121) = prefactor_y * *(b + 155 * OS1_S1 + 84) -
                                        p_over_q * *(b + 208 * OS1_S1 + 84);
            *(b + 155 * OS1_S1 + 122) =
                prefactor_z * *(b + 155 * OS1_S1 + 84) -
                p_over_q * *(b + 209 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 84);
            *(b + 155 * OS1_S1 + 123) =
                prefactor_y * *(b + 155 * OS1_S1 + 85) -
                p_over_q * *(b + 208 * OS1_S1 + 85) +
                one_over_two_q * *(b + 155 * OS1_S1 + 56);
            *(b + 155 * OS1_S1 + 124) = prefactor_y * *(b + 155 * OS1_S1 + 86) -
                                        p_over_q * *(b + 208 * OS1_S1 + 86);
            *(b + 155 * OS1_S1 + 125) =
                prefactor_z * *(b + 155 * OS1_S1 + 86) -
                p_over_q * *(b + 209 * OS1_S1 + 86) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 86) +
                one_over_two_q * *(b + 155 * OS1_S1 + 56);
            *(b + 155 * OS1_S1 + 126) =
                prefactor_y * *(b + 155 * OS1_S1 + 87) -
                p_over_q * *(b + 208 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 57);
            *(b + 155 * OS1_S1 + 127) =
                prefactor_z * *(b + 155 * OS1_S1 + 87) -
                p_over_q * *(b + 209 * OS1_S1 + 87) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 87);
            *(b + 155 * OS1_S1 + 128) = prefactor_y * *(b + 155 * OS1_S1 + 89) -
                                        p_over_q * *(b + 208 * OS1_S1 + 89);
            *(b + 155 * OS1_S1 + 129) =
                prefactor_z * *(b + 155 * OS1_S1 + 89) -
                p_over_q * *(b + 209 * OS1_S1 + 89) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 58);
            *(b + 155 * OS1_S1 + 130) =
                prefactor_y * *(b + 155 * OS1_S1 + 90) -
                p_over_q * *(b + 208 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 155 * OS1_S1 + 59);
            *(b + 155 * OS1_S1 + 131) =
                prefactor_z * *(b + 155 * OS1_S1 + 90) -
                p_over_q * *(b + 209 * OS1_S1 + 90) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 90);
            *(b + 155 * OS1_S1 + 132) =
                prefactor_y * *(b + 155 * OS1_S1 + 92) -
                p_over_q * *(b + 208 * OS1_S1 + 92) +
                one_over_two_q * *(b + 155 * OS1_S1 + 61);
            *(b + 155 * OS1_S1 + 133) = prefactor_y * *(b + 155 * OS1_S1 + 93) -
                                        p_over_q * *(b + 208 * OS1_S1 + 93);
            *(b + 155 * OS1_S1 + 134) =
                prefactor_x * *(b + 155 * OS1_S1 + 98) -
                p_over_q * *(b + 200 * OS1_S1 + 98) +
                one_over_two_q * *(b + 119 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 155 * OS1_S1 + 70);
            *(b + 155 * OS1_S1 + 135) =
                prefactor_x * *(b + 155 * OS1_S1 + 99) -
                p_over_q * *(b + 200 * OS1_S1 + 99) +
                one_over_two_q * *(b + 119 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 71);
            *(b + 155 * OS1_S1 + 136) =
                prefactor_z * *(b + 155 * OS1_S1 + 94) -
                p_over_q * *(b + 209 * OS1_S1 + 94) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 94);
            *(b + 155 * OS1_S1 + 137) =
                prefactor_z * *(b + 155 * OS1_S1 + 95) -
                p_over_q * *(b + 209 * OS1_S1 + 95) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 95) +
                one_over_two_q * *(b + 155 * OS1_S1 + 62);
            *(b + 155 * OS1_S1 + 138) =
                prefactor_y * *(b + 155 * OS1_S1 + 97) -
                p_over_q * *(b + 208 * OS1_S1 + 97) +
                one_over_two_q * *(b + 155 * OS1_S1 + 65);
            *(b + 155 * OS1_S1 + 139) = prefactor_y * *(b + 155 * OS1_S1 + 98) -
                                        p_over_q * *(b + 208 * OS1_S1 + 98);
            *(b + 155 * OS1_S1 + 140) =
                prefactor_x * *(b + 155 * OS1_S1 + 104) -
                p_over_q * *(b + 200 * OS1_S1 + 104) +
                one_over_two_q * *(b + 119 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 76);
            *(b + 155 * OS1_S1 + 141) =
                prefactor_x * *(b + 155 * OS1_S1 + 105) -
                p_over_q * *(b + 200 * OS1_S1 + 105) +
                one_over_two_q * *(b + 119 * OS1_S1 + 105) +
                one_over_two_q * *(b + 155 * OS1_S1 + 77);
            *(b + 155 * OS1_S1 + 142) =
                prefactor_z * *(b + 155 * OS1_S1 + 99) -
                p_over_q * *(b + 209 * OS1_S1 + 99) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 99);
            *(b + 155 * OS1_S1 + 143) =
                prefactor_x * *(b + 155 * OS1_S1 + 107) -
                p_over_q * *(b + 200 * OS1_S1 + 107) +
                one_over_two_q * *(b + 119 * OS1_S1 + 107) +
                one_over_two_q * *(b + 155 * OS1_S1 + 79);
            *(b + 155 * OS1_S1 + 144) =
                prefactor_x * *(b + 155 * OS1_S1 + 108) -
                p_over_q * *(b + 200 * OS1_S1 + 108) +
                one_over_two_q * *(b + 119 * OS1_S1 + 108) +
                one_over_two_q * *(b + 155 * OS1_S1 + 80);
            *(b + 155 * OS1_S1 + 145) =
                prefactor_y * *(b + 155 * OS1_S1 + 103) -
                p_over_q * *(b + 208 * OS1_S1 + 103) +
                one_over_two_q * *(b + 155 * OS1_S1 + 70);
            *(b + 155 * OS1_S1 + 146) =
                prefactor_y * *(b + 155 * OS1_S1 + 104) -
                p_over_q * *(b + 208 * OS1_S1 + 104);
            *(b + 155 * OS1_S1 + 147) =
                prefactor_x * *(b + 155 * OS1_S1 + 111) -
                p_over_q * *(b + 200 * OS1_S1 + 111) +
                one_over_two_q * *(b + 119 * OS1_S1 + 111) +
                one_over_two_q * *(b + 155 * OS1_S1 + 83);
            *(b + 155 * OS1_S1 + 148) =
                prefactor_x * *(b + 155 * OS1_S1 + 112) -
                p_over_q * *(b + 200 * OS1_S1 + 112) +
                one_over_two_q * *(b + 119 * OS1_S1 + 112);
            *(b + 155 * OS1_S1 + 149) =
                prefactor_x * *(b + 155 * OS1_S1 + 113) -
                p_over_q * *(b + 200 * OS1_S1 + 113) +
                one_over_two_q * *(b + 119 * OS1_S1 + 113);
            *(b + 155 * OS1_S1 + 150) =
                prefactor_x * *(b + 155 * OS1_S1 + 114) -
                p_over_q * *(b + 200 * OS1_S1 + 114) +
                one_over_two_q * *(b + 119 * OS1_S1 + 114);
            *(b + 155 * OS1_S1 + 151) =
                prefactor_x * *(b + 155 * OS1_S1 + 115) -
                p_over_q * *(b + 200 * OS1_S1 + 115) +
                one_over_two_q * *(b + 119 * OS1_S1 + 115);
            *(b + 155 * OS1_S1 + 152) =
                prefactor_x * *(b + 155 * OS1_S1 + 116) -
                p_over_q * *(b + 200 * OS1_S1 + 116) +
                one_over_two_q * *(b + 119 * OS1_S1 + 116);
            *(b + 155 * OS1_S1 + 153) =
                prefactor_x * *(b + 155 * OS1_S1 + 117) -
                p_over_q * *(b + 200 * OS1_S1 + 117) +
                one_over_two_q * *(b + 119 * OS1_S1 + 117);
            *(b + 155 * OS1_S1 + 154) =
                prefactor_y * *(b + 155 * OS1_S1 + 111) -
                p_over_q * *(b + 208 * OS1_S1 + 111);
            *(b + 155 * OS1_S1 + 155) =
                prefactor_x * *(b + 155 * OS1_S1 + 119) -
                p_over_q * *(b + 200 * OS1_S1 + 119) +
                one_over_two_q * *(b + 119 * OS1_S1 + 119);
            *(b + 155 * OS1_S1 + 156) =
                prefactor_y * *(b + 155 * OS1_S1 + 112) -
                p_over_q * *(b + 208 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 155 * OS1_S1 + 77);
            *(b + 155 * OS1_S1 + 157) =
                prefactor_z * *(b + 155 * OS1_S1 + 112) -
                p_over_q * *(b + 209 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 112);
            *(b + 155 * OS1_S1 + 158) =
                prefactor_z * *(b + 155 * OS1_S1 + 113) -
                p_over_q * *(b + 209 * OS1_S1 + 113) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 113) +
                one_over_two_q * *(b + 155 * OS1_S1 + 77);
            *(b + 155 * OS1_S1 + 159) =
                prefactor_z * *(b + 155 * OS1_S1 + 114) -
                p_over_q * *(b + 209 * OS1_S1 + 114) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 78);
            *(b + 155 * OS1_S1 + 160) =
                prefactor_y * *(b + 155 * OS1_S1 + 116) -
                p_over_q * *(b + 208 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 155 * OS1_S1 + 81);
            *(b + 155 * OS1_S1 + 161) =
                prefactor_y * *(b + 155 * OS1_S1 + 117) -
                p_over_q * *(b + 208 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 82);
            *(b + 155 * OS1_S1 + 162) =
                prefactor_y * *(b + 155 * OS1_S1 + 118) -
                p_over_q * *(b + 208 * OS1_S1 + 118) +
                one_over_two_q * *(b + 155 * OS1_S1 + 83);
            *(b + 155 * OS1_S1 + 163) =
                prefactor_y * *(b + 155 * OS1_S1 + 119) -
                p_over_q * *(b + 208 * OS1_S1 + 119);
            *(b + 155 * OS1_S1 + 164) =
                prefactor_z * *(b + 155 * OS1_S1 + 119) -
                p_over_q * *(b + 209 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 155 * OS1_S1 + 83);
            *(b + 156 * OS1_S1 + 120) =
                prefactor_x * *(b + 156 * OS1_S1 + 84) -
                p_over_q * *(b + 201 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 156 * OS1_S1 + 56);
            *(b + 156 * OS1_S1 + 121) =
                prefactor_y * *(b + 156 * OS1_S1 + 84) -
                p_over_q * *(b + 210 * OS1_S1 + 84) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 84);
            *(b + 156 * OS1_S1 + 122) = prefactor_z * *(b + 156 * OS1_S1 + 84) -
                                        p_over_q * *(b + 211 * OS1_S1 + 84);
            *(b + 156 * OS1_S1 + 123) =
                prefactor_y * *(b + 156 * OS1_S1 + 85) -
                p_over_q * *(b + 210 * OS1_S1 + 85) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 85) +
                one_over_two_q * *(b + 156 * OS1_S1 + 56);
            *(b + 156 * OS1_S1 + 124) = prefactor_z * *(b + 156 * OS1_S1 + 85) -
                                        p_over_q * *(b + 211 * OS1_S1 + 85);
            *(b + 156 * OS1_S1 + 125) =
                prefactor_z * *(b + 156 * OS1_S1 + 86) -
                p_over_q * *(b + 211 * OS1_S1 + 86) +
                one_over_two_q * *(b + 156 * OS1_S1 + 56);
            *(b + 156 * OS1_S1 + 126) =
                prefactor_y * *(b + 156 * OS1_S1 + 87) -
                p_over_q * *(b + 210 * OS1_S1 + 87) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 57);
            *(b + 156 * OS1_S1 + 127) = prefactor_z * *(b + 156 * OS1_S1 + 87) -
                                        p_over_q * *(b + 211 * OS1_S1 + 87);
            *(b + 156 * OS1_S1 + 128) =
                prefactor_y * *(b + 156 * OS1_S1 + 89) -
                p_over_q * *(b + 210 * OS1_S1 + 89) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 89);
            *(b + 156 * OS1_S1 + 129) =
                prefactor_z * *(b + 156 * OS1_S1 + 89) -
                p_over_q * *(b + 211 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 58);
            *(b + 156 * OS1_S1 + 130) =
                prefactor_x * *(b + 156 * OS1_S1 + 94) -
                p_over_q * *(b + 201 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 156 * OS1_S1 + 66);
            *(b + 156 * OS1_S1 + 131) = prefactor_z * *(b + 156 * OS1_S1 + 90) -
                                        p_over_q * *(b + 211 * OS1_S1 + 90);
            *(b + 156 * OS1_S1 + 132) =
                prefactor_z * *(b + 156 * OS1_S1 + 91) -
                p_over_q * *(b + 211 * OS1_S1 + 91) +
                one_over_two_q * *(b + 156 * OS1_S1 + 59);
            *(b + 156 * OS1_S1 + 133) =
                prefactor_y * *(b + 156 * OS1_S1 + 93) -
                p_over_q * *(b + 210 * OS1_S1 + 93) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 93);
            *(b + 156 * OS1_S1 + 134) =
                prefactor_z * *(b + 156 * OS1_S1 + 93) -
                p_over_q * *(b + 211 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 156 * OS1_S1 + 61);
            *(b + 156 * OS1_S1 + 135) =
                prefactor_x * *(b + 156 * OS1_S1 + 99) -
                p_over_q * *(b + 201 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 71);
            *(b + 156 * OS1_S1 + 136) = prefactor_z * *(b + 156 * OS1_S1 + 94) -
                                        p_over_q * *(b + 211 * OS1_S1 + 94);
            *(b + 156 * OS1_S1 + 137) =
                prefactor_z * *(b + 156 * OS1_S1 + 95) -
                p_over_q * *(b + 211 * OS1_S1 + 95) +
                one_over_two_q * *(b + 156 * OS1_S1 + 62);
            *(b + 156 * OS1_S1 + 138) =
                prefactor_y * *(b + 156 * OS1_S1 + 97) -
                p_over_q * *(b + 210 * OS1_S1 + 97) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 97) +
                one_over_two_q * *(b + 156 * OS1_S1 + 65);
            *(b + 156 * OS1_S1 + 139) =
                prefactor_y * *(b + 156 * OS1_S1 + 98) -
                p_over_q * *(b + 210 * OS1_S1 + 98) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 98);
            *(b + 156 * OS1_S1 + 140) =
                prefactor_x * *(b + 156 * OS1_S1 + 104) -
                p_over_q * *(b + 201 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 76);
            *(b + 156 * OS1_S1 + 141) =
                prefactor_x * *(b + 156 * OS1_S1 + 105) -
                p_over_q * *(b + 201 * OS1_S1 + 105) +
                one_over_two_q * *(b + 156 * OS1_S1 + 77);
            *(b + 156 * OS1_S1 + 142) = prefactor_z * *(b + 156 * OS1_S1 + 99) -
                                        p_over_q * *(b + 211 * OS1_S1 + 99);
            *(b + 156 * OS1_S1 + 143) =
                prefactor_z * *(b + 156 * OS1_S1 + 100) -
                p_over_q * *(b + 211 * OS1_S1 + 100) +
                one_over_two_q * *(b + 156 * OS1_S1 + 66);
            *(b + 156 * OS1_S1 + 144) =
                prefactor_x * *(b + 156 * OS1_S1 + 108) -
                p_over_q * *(b + 201 * OS1_S1 + 108) +
                one_over_two_q * *(b + 156 * OS1_S1 + 80);
            *(b + 156 * OS1_S1 + 145) =
                prefactor_x * *(b + 156 * OS1_S1 + 109) -
                p_over_q * *(b + 201 * OS1_S1 + 109) +
                one_over_two_q * *(b + 156 * OS1_S1 + 81);
            *(b + 156 * OS1_S1 + 146) =
                prefactor_y * *(b + 156 * OS1_S1 + 104) -
                p_over_q * *(b + 210 * OS1_S1 + 104) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 104);
            *(b + 156 * OS1_S1 + 147) =
                prefactor_x * *(b + 156 * OS1_S1 + 111) -
                p_over_q * *(b + 201 * OS1_S1 + 111) +
                one_over_two_q * *(b + 156 * OS1_S1 + 83);
            *(b + 156 * OS1_S1 + 148) =
                prefactor_x * *(b + 156 * OS1_S1 + 112) -
                p_over_q * *(b + 201 * OS1_S1 + 112);
            *(b + 156 * OS1_S1 + 149) =
                prefactor_z * *(b + 156 * OS1_S1 + 105) -
                p_over_q * *(b + 211 * OS1_S1 + 105);
            *(b + 156 * OS1_S1 + 150) =
                prefactor_x * *(b + 156 * OS1_S1 + 114) -
                p_over_q * *(b + 201 * OS1_S1 + 114);
            *(b + 156 * OS1_S1 + 151) =
                prefactor_x * *(b + 156 * OS1_S1 + 115) -
                p_over_q * *(b + 201 * OS1_S1 + 115);
            *(b + 156 * OS1_S1 + 152) =
                prefactor_x * *(b + 156 * OS1_S1 + 116) -
                p_over_q * *(b + 201 * OS1_S1 + 116);
            *(b + 156 * OS1_S1 + 153) =
                prefactor_x * *(b + 156 * OS1_S1 + 117) -
                p_over_q * *(b + 201 * OS1_S1 + 117);
            *(b + 156 * OS1_S1 + 154) =
                prefactor_x * *(b + 156 * OS1_S1 + 118) -
                p_over_q * *(b + 201 * OS1_S1 + 118);
            *(b + 156 * OS1_S1 + 155) =
                prefactor_x * *(b + 156 * OS1_S1 + 119) -
                p_over_q * *(b + 201 * OS1_S1 + 119);
            *(b + 156 * OS1_S1 + 156) =
                prefactor_y * *(b + 156 * OS1_S1 + 112) -
                p_over_q * *(b + 210 * OS1_S1 + 112) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 156 * OS1_S1 + 77);
            *(b + 156 * OS1_S1 + 157) =
                prefactor_z * *(b + 156 * OS1_S1 + 112) -
                p_over_q * *(b + 211 * OS1_S1 + 112);
            *(b + 156 * OS1_S1 + 158) =
                prefactor_z * *(b + 156 * OS1_S1 + 113) -
                p_over_q * *(b + 211 * OS1_S1 + 113) +
                one_over_two_q * *(b + 156 * OS1_S1 + 77);
            *(b + 156 * OS1_S1 + 159) =
                prefactor_z * *(b + 156 * OS1_S1 + 114) -
                p_over_q * *(b + 211 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 78);
            *(b + 156 * OS1_S1 + 160) =
                prefactor_z * *(b + 156 * OS1_S1 + 115) -
                p_over_q * *(b + 211 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 156 * OS1_S1 + 79);
            *(b + 156 * OS1_S1 + 161) =
                prefactor_y * *(b + 156 * OS1_S1 + 117) -
                p_over_q * *(b + 210 * OS1_S1 + 117) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 156 * OS1_S1 + 82);
            *(b + 156 * OS1_S1 + 162) =
                prefactor_y * *(b + 156 * OS1_S1 + 118) -
                p_over_q * *(b + 210 * OS1_S1 + 118) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 118) +
                one_over_two_q * *(b + 156 * OS1_S1 + 83);
            *(b + 156 * OS1_S1 + 163) =
                prefactor_y * *(b + 156 * OS1_S1 + 119) -
                p_over_q * *(b + 210 * OS1_S1 + 119) +
                8 * one_over_two_q * *(b + 112 * OS1_S1 + 119);
            *(b + 156 * OS1_S1 + 164) =
                prefactor_z * *(b + 156 * OS1_S1 + 119) -
                p_over_q * *(b + 211 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 156 * OS1_S1 + 83);
            *(b + 157 * OS1_S1 + 120) =
                prefactor_x * *(b + 157 * OS1_S1 + 84) -
                p_over_q * *(b + 202 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 157 * OS1_S1 + 56);
            *(b + 157 * OS1_S1 + 121) =
                prefactor_y * *(b + 157 * OS1_S1 + 84) -
                p_over_q * *(b + 211 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 84);
            *(b + 157 * OS1_S1 + 122) =
                prefactor_z * *(b + 157 * OS1_S1 + 84) -
                p_over_q * *(b + 212 * OS1_S1 + 84) +
                one_over_two_q * *(b + 112 * OS1_S1 + 84);
            *(b + 157 * OS1_S1 + 123) =
                prefactor_y * *(b + 157 * OS1_S1 + 85) -
                p_over_q * *(b + 211 * OS1_S1 + 85) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 85) +
                one_over_two_q * *(b + 157 * OS1_S1 + 56);
            *(b + 157 * OS1_S1 + 124) =
                prefactor_z * *(b + 157 * OS1_S1 + 85) -
                p_over_q * *(b + 212 * OS1_S1 + 85) +
                one_over_two_q * *(b + 112 * OS1_S1 + 85);
            *(b + 157 * OS1_S1 + 125) =
                prefactor_z * *(b + 157 * OS1_S1 + 86) -
                p_over_q * *(b + 212 * OS1_S1 + 86) +
                one_over_two_q * *(b + 112 * OS1_S1 + 86) +
                one_over_two_q * *(b + 157 * OS1_S1 + 56);
            *(b + 157 * OS1_S1 + 126) =
                prefactor_y * *(b + 157 * OS1_S1 + 87) -
                p_over_q * *(b + 211 * OS1_S1 + 87) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 57);
            *(b + 157 * OS1_S1 + 127) =
                prefactor_z * *(b + 157 * OS1_S1 + 87) -
                p_over_q * *(b + 212 * OS1_S1 + 87) +
                one_over_two_q * *(b + 112 * OS1_S1 + 87);
            *(b + 157 * OS1_S1 + 128) =
                prefactor_y * *(b + 157 * OS1_S1 + 89) -
                p_over_q * *(b + 211 * OS1_S1 + 89) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 89);
            *(b + 157 * OS1_S1 + 129) =
                prefactor_z * *(b + 157 * OS1_S1 + 89) -
                p_over_q * *(b + 212 * OS1_S1 + 89) +
                one_over_two_q * *(b + 112 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 58);
            *(b + 157 * OS1_S1 + 130) =
                prefactor_x * *(b + 157 * OS1_S1 + 94) -
                p_over_q * *(b + 202 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 157 * OS1_S1 + 66);
            *(b + 157 * OS1_S1 + 131) =
                prefactor_z * *(b + 157 * OS1_S1 + 90) -
                p_over_q * *(b + 212 * OS1_S1 + 90) +
                one_over_two_q * *(b + 112 * OS1_S1 + 90);
            *(b + 157 * OS1_S1 + 132) =
                prefactor_z * *(b + 157 * OS1_S1 + 91) -
                p_over_q * *(b + 212 * OS1_S1 + 91) +
                one_over_two_q * *(b + 112 * OS1_S1 + 91) +
                one_over_two_q * *(b + 157 * OS1_S1 + 59);
            *(b + 157 * OS1_S1 + 133) =
                prefactor_y * *(b + 157 * OS1_S1 + 93) -
                p_over_q * *(b + 211 * OS1_S1 + 93) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 93);
            *(b + 157 * OS1_S1 + 134) =
                prefactor_x * *(b + 157 * OS1_S1 + 98) -
                p_over_q * *(b + 202 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 157 * OS1_S1 + 70);
            *(b + 157 * OS1_S1 + 135) =
                prefactor_x * *(b + 157 * OS1_S1 + 99) -
                p_over_q * *(b + 202 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 71);
            *(b + 157 * OS1_S1 + 136) =
                prefactor_z * *(b + 157 * OS1_S1 + 94) -
                p_over_q * *(b + 212 * OS1_S1 + 94) +
                one_over_two_q * *(b + 112 * OS1_S1 + 94);
            *(b + 157 * OS1_S1 + 137) =
                prefactor_z * *(b + 157 * OS1_S1 + 95) -
                p_over_q * *(b + 212 * OS1_S1 + 95) +
                one_over_two_q * *(b + 112 * OS1_S1 + 95) +
                one_over_two_q * *(b + 157 * OS1_S1 + 62);
            *(b + 157 * OS1_S1 + 138) =
                prefactor_y * *(b + 157 * OS1_S1 + 97) -
                p_over_q * *(b + 211 * OS1_S1 + 97) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 97) +
                one_over_two_q * *(b + 157 * OS1_S1 + 65);
            *(b + 157 * OS1_S1 + 139) =
                prefactor_y * *(b + 157 * OS1_S1 + 98) -
                p_over_q * *(b + 211 * OS1_S1 + 98) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 98);
            *(b + 157 * OS1_S1 + 140) =
                prefactor_x * *(b + 157 * OS1_S1 + 104) -
                p_over_q * *(b + 202 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 76);
            *(b + 157 * OS1_S1 + 141) =
                prefactor_x * *(b + 157 * OS1_S1 + 105) -
                p_over_q * *(b + 202 * OS1_S1 + 105) +
                one_over_two_q * *(b + 157 * OS1_S1 + 77);
            *(b + 157 * OS1_S1 + 142) =
                prefactor_z * *(b + 157 * OS1_S1 + 99) -
                p_over_q * *(b + 212 * OS1_S1 + 99) +
                one_over_two_q * *(b + 112 * OS1_S1 + 99);
            *(b + 157 * OS1_S1 + 143) =
                prefactor_x * *(b + 157 * OS1_S1 + 107) -
                p_over_q * *(b + 202 * OS1_S1 + 107) +
                one_over_two_q * *(b + 157 * OS1_S1 + 79);
            *(b + 157 * OS1_S1 + 144) =
                prefactor_x * *(b + 157 * OS1_S1 + 108) -
                p_over_q * *(b + 202 * OS1_S1 + 108) +
                one_over_two_q * *(b + 157 * OS1_S1 + 80);
            *(b + 157 * OS1_S1 + 145) =
                prefactor_x * *(b + 157 * OS1_S1 + 109) -
                p_over_q * *(b + 202 * OS1_S1 + 109) +
                one_over_two_q * *(b + 157 * OS1_S1 + 81);
            *(b + 157 * OS1_S1 + 146) =
                prefactor_y * *(b + 157 * OS1_S1 + 104) -
                p_over_q * *(b + 211 * OS1_S1 + 104) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 104);
            *(b + 157 * OS1_S1 + 147) =
                prefactor_x * *(b + 157 * OS1_S1 + 111) -
                p_over_q * *(b + 202 * OS1_S1 + 111) +
                one_over_two_q * *(b + 157 * OS1_S1 + 83);
            *(b + 157 * OS1_S1 + 148) =
                prefactor_x * *(b + 157 * OS1_S1 + 112) -
                p_over_q * *(b + 202 * OS1_S1 + 112);
            *(b + 157 * OS1_S1 + 149) =
                prefactor_x * *(b + 157 * OS1_S1 + 113) -
                p_over_q * *(b + 202 * OS1_S1 + 113);
            *(b + 157 * OS1_S1 + 150) =
                prefactor_x * *(b + 157 * OS1_S1 + 114) -
                p_over_q * *(b + 202 * OS1_S1 + 114);
            *(b + 157 * OS1_S1 + 151) =
                prefactor_x * *(b + 157 * OS1_S1 + 115) -
                p_over_q * *(b + 202 * OS1_S1 + 115);
            *(b + 157 * OS1_S1 + 152) =
                prefactor_x * *(b + 157 * OS1_S1 + 116) -
                p_over_q * *(b + 202 * OS1_S1 + 116);
            *(b + 157 * OS1_S1 + 153) =
                prefactor_x * *(b + 157 * OS1_S1 + 117) -
                p_over_q * *(b + 202 * OS1_S1 + 117);
            *(b + 157 * OS1_S1 + 154) =
                prefactor_x * *(b + 157 * OS1_S1 + 118) -
                p_over_q * *(b + 202 * OS1_S1 + 118);
            *(b + 157 * OS1_S1 + 155) =
                prefactor_x * *(b + 157 * OS1_S1 + 119) -
                p_over_q * *(b + 202 * OS1_S1 + 119);
            *(b + 157 * OS1_S1 + 156) =
                prefactor_y * *(b + 157 * OS1_S1 + 112) -
                p_over_q * *(b + 211 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 157 * OS1_S1 + 77);
            *(b + 157 * OS1_S1 + 157) =
                prefactor_z * *(b + 157 * OS1_S1 + 112) -
                p_over_q * *(b + 212 * OS1_S1 + 112) +
                one_over_two_q * *(b + 112 * OS1_S1 + 112);
            *(b + 157 * OS1_S1 + 158) =
                prefactor_z * *(b + 157 * OS1_S1 + 113) -
                p_over_q * *(b + 212 * OS1_S1 + 113) +
                one_over_two_q * *(b + 112 * OS1_S1 + 113) +
                one_over_two_q * *(b + 157 * OS1_S1 + 77);
            *(b + 157 * OS1_S1 + 159) =
                prefactor_z * *(b + 157 * OS1_S1 + 114) -
                p_over_q * *(b + 212 * OS1_S1 + 114) +
                one_over_two_q * *(b + 112 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 78);
            *(b + 157 * OS1_S1 + 160) =
                prefactor_z * *(b + 157 * OS1_S1 + 115) -
                p_over_q * *(b + 212 * OS1_S1 + 115) +
                one_over_two_q * *(b + 112 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 157 * OS1_S1 + 79);
            *(b + 157 * OS1_S1 + 161) =
                prefactor_y * *(b + 157 * OS1_S1 + 117) -
                p_over_q * *(b + 211 * OS1_S1 + 117) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 82);
            *(b + 157 * OS1_S1 + 162) =
                prefactor_y * *(b + 157 * OS1_S1 + 118) -
                p_over_q * *(b + 211 * OS1_S1 + 118) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 118) +
                one_over_two_q * *(b + 157 * OS1_S1 + 83);
            *(b + 157 * OS1_S1 + 163) =
                prefactor_y * *(b + 157 * OS1_S1 + 119) -
                p_over_q * *(b + 211 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 119);
            *(b + 157 * OS1_S1 + 164) =
                prefactor_z * *(b + 157 * OS1_S1 + 119) -
                p_over_q * *(b + 212 * OS1_S1 + 119) +
                one_over_two_q * *(b + 112 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 157 * OS1_S1 + 83);
            *(b + 158 * OS1_S1 + 120) =
                prefactor_x * *(b + 158 * OS1_S1 + 84) -
                p_over_q * *(b + 203 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 56);
            *(b + 158 * OS1_S1 + 121) =
                prefactor_y * *(b + 158 * OS1_S1 + 84) -
                p_over_q * *(b + 212 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 84);
            *(b + 158 * OS1_S1 + 122) =
                prefactor_z * *(b + 158 * OS1_S1 + 84) -
                p_over_q * *(b + 213 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 84);
            *(b + 158 * OS1_S1 + 123) =
                prefactor_y * *(b + 158 * OS1_S1 + 85) -
                p_over_q * *(b + 212 * OS1_S1 + 85) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 85) +
                one_over_two_q * *(b + 158 * OS1_S1 + 56);
            *(b + 158 * OS1_S1 + 124) =
                prefactor_z * *(b + 158 * OS1_S1 + 85) -
                p_over_q * *(b + 213 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 85);
            *(b + 158 * OS1_S1 + 125) =
                prefactor_z * *(b + 158 * OS1_S1 + 86) -
                p_over_q * *(b + 213 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 86) +
                one_over_two_q * *(b + 158 * OS1_S1 + 56);
            *(b + 158 * OS1_S1 + 126) =
                prefactor_y * *(b + 158 * OS1_S1 + 87) -
                p_over_q * *(b + 212 * OS1_S1 + 87) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 57);
            *(b + 158 * OS1_S1 + 127) =
                prefactor_z * *(b + 158 * OS1_S1 + 87) -
                p_over_q * *(b + 213 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 87);
            *(b + 158 * OS1_S1 + 128) =
                prefactor_y * *(b + 158 * OS1_S1 + 89) -
                p_over_q * *(b + 212 * OS1_S1 + 89) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 89);
            *(b + 158 * OS1_S1 + 129) =
                prefactor_z * *(b + 158 * OS1_S1 + 89) -
                p_over_q * *(b + 213 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 58);
            *(b + 158 * OS1_S1 + 130) =
                prefactor_x * *(b + 158 * OS1_S1 + 94) -
                p_over_q * *(b + 203 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 66);
            *(b + 158 * OS1_S1 + 131) =
                prefactor_z * *(b + 158 * OS1_S1 + 90) -
                p_over_q * *(b + 213 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 90);
            *(b + 158 * OS1_S1 + 132) =
                prefactor_z * *(b + 158 * OS1_S1 + 91) -
                p_over_q * *(b + 213 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 91) +
                one_over_two_q * *(b + 158 * OS1_S1 + 59);
            *(b + 158 * OS1_S1 + 133) =
                prefactor_y * *(b + 158 * OS1_S1 + 93) -
                p_over_q * *(b + 212 * OS1_S1 + 93) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 93);
            *(b + 158 * OS1_S1 + 134) =
                prefactor_x * *(b + 158 * OS1_S1 + 98) -
                p_over_q * *(b + 203 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 70);
            *(b + 158 * OS1_S1 + 135) =
                prefactor_x * *(b + 158 * OS1_S1 + 99) -
                p_over_q * *(b + 203 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 71);
            *(b + 158 * OS1_S1 + 136) =
                prefactor_z * *(b + 158 * OS1_S1 + 94) -
                p_over_q * *(b + 213 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 94);
            *(b + 158 * OS1_S1 + 137) =
                prefactor_z * *(b + 158 * OS1_S1 + 95) -
                p_over_q * *(b + 213 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 95) +
                one_over_two_q * *(b + 158 * OS1_S1 + 62);
            *(b + 158 * OS1_S1 + 138) =
                prefactor_y * *(b + 158 * OS1_S1 + 97) -
                p_over_q * *(b + 212 * OS1_S1 + 97) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 97) +
                one_over_two_q * *(b + 158 * OS1_S1 + 65);
            *(b + 158 * OS1_S1 + 139) =
                prefactor_y * *(b + 158 * OS1_S1 + 98) -
                p_over_q * *(b + 212 * OS1_S1 + 98) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 98);
            *(b + 158 * OS1_S1 + 140) =
                prefactor_x * *(b + 158 * OS1_S1 + 104) -
                p_over_q * *(b + 203 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 76);
            *(b + 158 * OS1_S1 + 141) =
                prefactor_x * *(b + 158 * OS1_S1 + 105) -
                p_over_q * *(b + 203 * OS1_S1 + 105) +
                one_over_two_q * *(b + 158 * OS1_S1 + 77);
            *(b + 158 * OS1_S1 + 142) =
                prefactor_z * *(b + 158 * OS1_S1 + 99) -
                p_over_q * *(b + 213 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 99);
            *(b + 158 * OS1_S1 + 143) =
                prefactor_x * *(b + 158 * OS1_S1 + 107) -
                p_over_q * *(b + 203 * OS1_S1 + 107) +
                one_over_two_q * *(b + 158 * OS1_S1 + 79);
            *(b + 158 * OS1_S1 + 144) =
                prefactor_x * *(b + 158 * OS1_S1 + 108) -
                p_over_q * *(b + 203 * OS1_S1 + 108) +
                one_over_two_q * *(b + 158 * OS1_S1 + 80);
            *(b + 158 * OS1_S1 + 145) =
                prefactor_x * *(b + 158 * OS1_S1 + 109) -
                p_over_q * *(b + 203 * OS1_S1 + 109) +
                one_over_two_q * *(b + 158 * OS1_S1 + 81);
            *(b + 158 * OS1_S1 + 146) =
                prefactor_y * *(b + 158 * OS1_S1 + 104) -
                p_over_q * *(b + 212 * OS1_S1 + 104) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 104);
            *(b + 158 * OS1_S1 + 147) =
                prefactor_x * *(b + 158 * OS1_S1 + 111) -
                p_over_q * *(b + 203 * OS1_S1 + 111) +
                one_over_two_q * *(b + 158 * OS1_S1 + 83);
            *(b + 158 * OS1_S1 + 148) =
                prefactor_x * *(b + 158 * OS1_S1 + 112) -
                p_over_q * *(b + 203 * OS1_S1 + 112);
            *(b + 158 * OS1_S1 + 149) =
                prefactor_x * *(b + 158 * OS1_S1 + 113) -
                p_over_q * *(b + 203 * OS1_S1 + 113);
            *(b + 158 * OS1_S1 + 150) =
                prefactor_x * *(b + 158 * OS1_S1 + 114) -
                p_over_q * *(b + 203 * OS1_S1 + 114);
            *(b + 158 * OS1_S1 + 151) =
                prefactor_x * *(b + 158 * OS1_S1 + 115) -
                p_over_q * *(b + 203 * OS1_S1 + 115);
            *(b + 158 * OS1_S1 + 152) =
                prefactor_x * *(b + 158 * OS1_S1 + 116) -
                p_over_q * *(b + 203 * OS1_S1 + 116);
            *(b + 158 * OS1_S1 + 153) =
                prefactor_x * *(b + 158 * OS1_S1 + 117) -
                p_over_q * *(b + 203 * OS1_S1 + 117);
            *(b + 158 * OS1_S1 + 154) =
                prefactor_x * *(b + 158 * OS1_S1 + 118) -
                p_over_q * *(b + 203 * OS1_S1 + 118);
            *(b + 158 * OS1_S1 + 155) =
                prefactor_x * *(b + 158 * OS1_S1 + 119) -
                p_over_q * *(b + 203 * OS1_S1 + 119);
            *(b + 158 * OS1_S1 + 156) =
                prefactor_y * *(b + 158 * OS1_S1 + 112) -
                p_over_q * *(b + 212 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 77);
            *(b + 158 * OS1_S1 + 157) =
                prefactor_z * *(b + 158 * OS1_S1 + 112) -
                p_over_q * *(b + 213 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 112);
            *(b + 158 * OS1_S1 + 158) =
                prefactor_z * *(b + 158 * OS1_S1 + 113) -
                p_over_q * *(b + 213 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 113) +
                one_over_two_q * *(b + 158 * OS1_S1 + 77);
            *(b + 158 * OS1_S1 + 159) =
                prefactor_z * *(b + 158 * OS1_S1 + 114) -
                p_over_q * *(b + 213 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 78);
            *(b + 158 * OS1_S1 + 160) =
                prefactor_z * *(b + 158 * OS1_S1 + 115) -
                p_over_q * *(b + 213 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 79);
            *(b + 158 * OS1_S1 + 161) =
                prefactor_y * *(b + 158 * OS1_S1 + 117) -
                p_over_q * *(b + 212 * OS1_S1 + 117) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 158 * OS1_S1 + 82);
            *(b + 158 * OS1_S1 + 162) =
                prefactor_y * *(b + 158 * OS1_S1 + 118) -
                p_over_q * *(b + 212 * OS1_S1 + 118) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 118) +
                one_over_two_q * *(b + 158 * OS1_S1 + 83);
            *(b + 158 * OS1_S1 + 163) =
                prefactor_y * *(b + 158 * OS1_S1 + 119) -
                p_over_q * *(b + 212 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 114 * OS1_S1 + 119);
            *(b + 158 * OS1_S1 + 164) =
                prefactor_z * *(b + 158 * OS1_S1 + 119) -
                p_over_q * *(b + 213 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 83);
            *(b + 159 * OS1_S1 + 120) =
                prefactor_x * *(b + 159 * OS1_S1 + 84) -
                p_over_q * *(b + 204 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 159 * OS1_S1 + 56);
            *(b + 159 * OS1_S1 + 121) =
                prefactor_y * *(b + 159 * OS1_S1 + 84) -
                p_over_q * *(b + 213 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 84);
            *(b + 159 * OS1_S1 + 122) =
                prefactor_z * *(b + 159 * OS1_S1 + 84) -
                p_over_q * *(b + 214 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 84);
            *(b + 159 * OS1_S1 + 123) =
                prefactor_y * *(b + 159 * OS1_S1 + 85) -
                p_over_q * *(b + 213 * OS1_S1 + 85) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 85) +
                one_over_two_q * *(b + 159 * OS1_S1 + 56);
            *(b + 159 * OS1_S1 + 124) =
                prefactor_z * *(b + 159 * OS1_S1 + 85) -
                p_over_q * *(b + 214 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 85);
            *(b + 159 * OS1_S1 + 125) =
                prefactor_z * *(b + 159 * OS1_S1 + 86) -
                p_over_q * *(b + 214 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 86) +
                one_over_two_q * *(b + 159 * OS1_S1 + 56);
            *(b + 159 * OS1_S1 + 126) =
                prefactor_y * *(b + 159 * OS1_S1 + 87) -
                p_over_q * *(b + 213 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 57);
            *(b + 159 * OS1_S1 + 127) =
                prefactor_z * *(b + 159 * OS1_S1 + 87) -
                p_over_q * *(b + 214 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 87);
            *(b + 159 * OS1_S1 + 128) =
                prefactor_y * *(b + 159 * OS1_S1 + 89) -
                p_over_q * *(b + 213 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 89);
            *(b + 159 * OS1_S1 + 129) =
                prefactor_z * *(b + 159 * OS1_S1 + 89) -
                p_over_q * *(b + 214 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 58);
            *(b + 159 * OS1_S1 + 130) =
                prefactor_x * *(b + 159 * OS1_S1 + 94) -
                p_over_q * *(b + 204 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 159 * OS1_S1 + 66);
            *(b + 159 * OS1_S1 + 131) =
                prefactor_z * *(b + 159 * OS1_S1 + 90) -
                p_over_q * *(b + 214 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 90);
            *(b + 159 * OS1_S1 + 132) =
                prefactor_z * *(b + 159 * OS1_S1 + 91) -
                p_over_q * *(b + 214 * OS1_S1 + 91) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 91) +
                one_over_two_q * *(b + 159 * OS1_S1 + 59);
            *(b + 159 * OS1_S1 + 133) =
                prefactor_y * *(b + 159 * OS1_S1 + 93) -
                p_over_q * *(b + 213 * OS1_S1 + 93) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 93);
            *(b + 159 * OS1_S1 + 134) =
                prefactor_x * *(b + 159 * OS1_S1 + 98) -
                p_over_q * *(b + 204 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 159 * OS1_S1 + 70);
            *(b + 159 * OS1_S1 + 135) =
                prefactor_x * *(b + 159 * OS1_S1 + 99) -
                p_over_q * *(b + 204 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 71);
            *(b + 159 * OS1_S1 + 136) =
                prefactor_z * *(b + 159 * OS1_S1 + 94) -
                p_over_q * *(b + 214 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 94);
            *(b + 159 * OS1_S1 + 137) =
                prefactor_z * *(b + 159 * OS1_S1 + 95) -
                p_over_q * *(b + 214 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 95) +
                one_over_two_q * *(b + 159 * OS1_S1 + 62);
            *(b + 159 * OS1_S1 + 138) =
                prefactor_y * *(b + 159 * OS1_S1 + 97) -
                p_over_q * *(b + 213 * OS1_S1 + 97) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 97) +
                one_over_two_q * *(b + 159 * OS1_S1 + 65);
            *(b + 159 * OS1_S1 + 139) =
                prefactor_y * *(b + 159 * OS1_S1 + 98) -
                p_over_q * *(b + 213 * OS1_S1 + 98) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 98);
            *(b + 159 * OS1_S1 + 140) =
                prefactor_x * *(b + 159 * OS1_S1 + 104) -
                p_over_q * *(b + 204 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 76);
            *(b + 159 * OS1_S1 + 141) =
                prefactor_x * *(b + 159 * OS1_S1 + 105) -
                p_over_q * *(b + 204 * OS1_S1 + 105) +
                one_over_two_q * *(b + 159 * OS1_S1 + 77);
            *(b + 159 * OS1_S1 + 142) =
                prefactor_z * *(b + 159 * OS1_S1 + 99) -
                p_over_q * *(b + 214 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 99);
            *(b + 159 * OS1_S1 + 143) =
                prefactor_x * *(b + 159 * OS1_S1 + 107) -
                p_over_q * *(b + 204 * OS1_S1 + 107) +
                one_over_two_q * *(b + 159 * OS1_S1 + 79);
            *(b + 159 * OS1_S1 + 144) =
                prefactor_x * *(b + 159 * OS1_S1 + 108) -
                p_over_q * *(b + 204 * OS1_S1 + 108) +
                one_over_two_q * *(b + 159 * OS1_S1 + 80);
            *(b + 159 * OS1_S1 + 145) =
                prefactor_x * *(b + 159 * OS1_S1 + 109) -
                p_over_q * *(b + 204 * OS1_S1 + 109) +
                one_over_two_q * *(b + 159 * OS1_S1 + 81);
            *(b + 159 * OS1_S1 + 146) =
                prefactor_y * *(b + 159 * OS1_S1 + 104) -
                p_over_q * *(b + 213 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 104);
            *(b + 159 * OS1_S1 + 147) =
                prefactor_x * *(b + 159 * OS1_S1 + 111) -
                p_over_q * *(b + 204 * OS1_S1 + 111) +
                one_over_two_q * *(b + 159 * OS1_S1 + 83);
            *(b + 159 * OS1_S1 + 148) =
                prefactor_x * *(b + 159 * OS1_S1 + 112) -
                p_over_q * *(b + 204 * OS1_S1 + 112);
            *(b + 159 * OS1_S1 + 149) =
                prefactor_x * *(b + 159 * OS1_S1 + 113) -
                p_over_q * *(b + 204 * OS1_S1 + 113);
            *(b + 159 * OS1_S1 + 150) =
                prefactor_x * *(b + 159 * OS1_S1 + 114) -
                p_over_q * *(b + 204 * OS1_S1 + 114);
            *(b + 159 * OS1_S1 + 151) =
                prefactor_x * *(b + 159 * OS1_S1 + 115) -
                p_over_q * *(b + 204 * OS1_S1 + 115);
            *(b + 159 * OS1_S1 + 152) =
                prefactor_x * *(b + 159 * OS1_S1 + 116) -
                p_over_q * *(b + 204 * OS1_S1 + 116);
            *(b + 159 * OS1_S1 + 153) =
                prefactor_x * *(b + 159 * OS1_S1 + 117) -
                p_over_q * *(b + 204 * OS1_S1 + 117);
            *(b + 159 * OS1_S1 + 154) =
                prefactor_x * *(b + 159 * OS1_S1 + 118) -
                p_over_q * *(b + 204 * OS1_S1 + 118);
            *(b + 159 * OS1_S1 + 155) =
                prefactor_x * *(b + 159 * OS1_S1 + 119) -
                p_over_q * *(b + 204 * OS1_S1 + 119);
            *(b + 159 * OS1_S1 + 156) =
                prefactor_y * *(b + 159 * OS1_S1 + 112) -
                p_over_q * *(b + 213 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 159 * OS1_S1 + 77);
            *(b + 159 * OS1_S1 + 157) =
                prefactor_z * *(b + 159 * OS1_S1 + 112) -
                p_over_q * *(b + 214 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 112);
            *(b + 159 * OS1_S1 + 158) =
                prefactor_z * *(b + 159 * OS1_S1 + 113) -
                p_over_q * *(b + 214 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 113) +
                one_over_two_q * *(b + 159 * OS1_S1 + 77);
            *(b + 159 * OS1_S1 + 159) =
                prefactor_z * *(b + 159 * OS1_S1 + 114) -
                p_over_q * *(b + 214 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 78);
            *(b + 159 * OS1_S1 + 160) =
                prefactor_z * *(b + 159 * OS1_S1 + 115) -
                p_over_q * *(b + 214 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 159 * OS1_S1 + 79);
            *(b + 159 * OS1_S1 + 161) =
                prefactor_y * *(b + 159 * OS1_S1 + 117) -
                p_over_q * *(b + 213 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 159 * OS1_S1 + 82);
            *(b + 159 * OS1_S1 + 162) =
                prefactor_y * *(b + 159 * OS1_S1 + 118) -
                p_over_q * *(b + 213 * OS1_S1 + 118) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 118) +
                one_over_two_q * *(b + 159 * OS1_S1 + 83);
            *(b + 159 * OS1_S1 + 163) =
                prefactor_y * *(b + 159 * OS1_S1 + 119) -
                p_over_q * *(b + 213 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 115 * OS1_S1 + 119);
            *(b + 159 * OS1_S1 + 164) =
                prefactor_z * *(b + 159 * OS1_S1 + 119) -
                p_over_q * *(b + 214 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 159 * OS1_S1 + 83);
            *(b + 160 * OS1_S1 + 120) =
                prefactor_x * *(b + 160 * OS1_S1 + 84) -
                p_over_q * *(b + 205 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 160 * OS1_S1 + 56);
            *(b + 160 * OS1_S1 + 121) =
                prefactor_y * *(b + 160 * OS1_S1 + 84) -
                p_over_q * *(b + 214 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 84);
            *(b + 160 * OS1_S1 + 122) =
                prefactor_z * *(b + 160 * OS1_S1 + 84) -
                p_over_q * *(b + 215 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 84);
            *(b + 160 * OS1_S1 + 123) =
                prefactor_y * *(b + 160 * OS1_S1 + 85) -
                p_over_q * *(b + 214 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 85) +
                one_over_two_q * *(b + 160 * OS1_S1 + 56);
            *(b + 160 * OS1_S1 + 124) =
                prefactor_z * *(b + 160 * OS1_S1 + 85) -
                p_over_q * *(b + 215 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 85);
            *(b + 160 * OS1_S1 + 125) =
                prefactor_z * *(b + 160 * OS1_S1 + 86) -
                p_over_q * *(b + 215 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 86) +
                one_over_two_q * *(b + 160 * OS1_S1 + 56);
            *(b + 160 * OS1_S1 + 126) =
                prefactor_y * *(b + 160 * OS1_S1 + 87) -
                p_over_q * *(b + 214 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 57);
            *(b + 160 * OS1_S1 + 127) =
                prefactor_z * *(b + 160 * OS1_S1 + 87) -
                p_over_q * *(b + 215 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 87);
            *(b + 160 * OS1_S1 + 128) =
                prefactor_y * *(b + 160 * OS1_S1 + 89) -
                p_over_q * *(b + 214 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 89);
            *(b + 160 * OS1_S1 + 129) =
                prefactor_z * *(b + 160 * OS1_S1 + 89) -
                p_over_q * *(b + 215 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 58);
            *(b + 160 * OS1_S1 + 130) =
                prefactor_x * *(b + 160 * OS1_S1 + 94) -
                p_over_q * *(b + 205 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 160 * OS1_S1 + 66);
            *(b + 160 * OS1_S1 + 131) =
                prefactor_z * *(b + 160 * OS1_S1 + 90) -
                p_over_q * *(b + 215 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 90);
            *(b + 160 * OS1_S1 + 132) =
                prefactor_z * *(b + 160 * OS1_S1 + 91) -
                p_over_q * *(b + 215 * OS1_S1 + 91) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 91) +
                one_over_two_q * *(b + 160 * OS1_S1 + 59);
            *(b + 160 * OS1_S1 + 133) =
                prefactor_y * *(b + 160 * OS1_S1 + 93) -
                p_over_q * *(b + 214 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 93);
            *(b + 160 * OS1_S1 + 134) =
                prefactor_x * *(b + 160 * OS1_S1 + 98) -
                p_over_q * *(b + 205 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 160 * OS1_S1 + 70);
            *(b + 160 * OS1_S1 + 135) =
                prefactor_x * *(b + 160 * OS1_S1 + 99) -
                p_over_q * *(b + 205 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 71);
            *(b + 160 * OS1_S1 + 136) =
                prefactor_z * *(b + 160 * OS1_S1 + 94) -
                p_over_q * *(b + 215 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 94);
            *(b + 160 * OS1_S1 + 137) =
                prefactor_z * *(b + 160 * OS1_S1 + 95) -
                p_over_q * *(b + 215 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 95) +
                one_over_two_q * *(b + 160 * OS1_S1 + 62);
            *(b + 160 * OS1_S1 + 138) =
                prefactor_y * *(b + 160 * OS1_S1 + 97) -
                p_over_q * *(b + 214 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 97) +
                one_over_two_q * *(b + 160 * OS1_S1 + 65);
            *(b + 160 * OS1_S1 + 139) =
                prefactor_y * *(b + 160 * OS1_S1 + 98) -
                p_over_q * *(b + 214 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 98);
            *(b + 160 * OS1_S1 + 140) =
                prefactor_x * *(b + 160 * OS1_S1 + 104) -
                p_over_q * *(b + 205 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 76);
            *(b + 160 * OS1_S1 + 141) =
                prefactor_x * *(b + 160 * OS1_S1 + 105) -
                p_over_q * *(b + 205 * OS1_S1 + 105) +
                one_over_two_q * *(b + 160 * OS1_S1 + 77);
            *(b + 160 * OS1_S1 + 142) =
                prefactor_z * *(b + 160 * OS1_S1 + 99) -
                p_over_q * *(b + 215 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 99);
            *(b + 160 * OS1_S1 + 143) =
                prefactor_x * *(b + 160 * OS1_S1 + 107) -
                p_over_q * *(b + 205 * OS1_S1 + 107) +
                one_over_two_q * *(b + 160 * OS1_S1 + 79);
            *(b + 160 * OS1_S1 + 144) =
                prefactor_x * *(b + 160 * OS1_S1 + 108) -
                p_over_q * *(b + 205 * OS1_S1 + 108) +
                one_over_two_q * *(b + 160 * OS1_S1 + 80);
            *(b + 160 * OS1_S1 + 145) =
                prefactor_x * *(b + 160 * OS1_S1 + 109) -
                p_over_q * *(b + 205 * OS1_S1 + 109) +
                one_over_two_q * *(b + 160 * OS1_S1 + 81);
            *(b + 160 * OS1_S1 + 146) =
                prefactor_y * *(b + 160 * OS1_S1 + 104) -
                p_over_q * *(b + 214 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 104);
            *(b + 160 * OS1_S1 + 147) =
                prefactor_x * *(b + 160 * OS1_S1 + 111) -
                p_over_q * *(b + 205 * OS1_S1 + 111) +
                one_over_two_q * *(b + 160 * OS1_S1 + 83);
            *(b + 160 * OS1_S1 + 148) =
                prefactor_x * *(b + 160 * OS1_S1 + 112) -
                p_over_q * *(b + 205 * OS1_S1 + 112);
            *(b + 160 * OS1_S1 + 149) =
                prefactor_x * *(b + 160 * OS1_S1 + 113) -
                p_over_q * *(b + 205 * OS1_S1 + 113);
            *(b + 160 * OS1_S1 + 150) =
                prefactor_x * *(b + 160 * OS1_S1 + 114) -
                p_over_q * *(b + 205 * OS1_S1 + 114);
            *(b + 160 * OS1_S1 + 151) =
                prefactor_x * *(b + 160 * OS1_S1 + 115) -
                p_over_q * *(b + 205 * OS1_S1 + 115);
            *(b + 160 * OS1_S1 + 152) =
                prefactor_x * *(b + 160 * OS1_S1 + 116) -
                p_over_q * *(b + 205 * OS1_S1 + 116);
            *(b + 160 * OS1_S1 + 153) =
                prefactor_x * *(b + 160 * OS1_S1 + 117) -
                p_over_q * *(b + 205 * OS1_S1 + 117);
            *(b + 160 * OS1_S1 + 154) =
                prefactor_x * *(b + 160 * OS1_S1 + 118) -
                p_over_q * *(b + 205 * OS1_S1 + 118);
            *(b + 160 * OS1_S1 + 155) =
                prefactor_x * *(b + 160 * OS1_S1 + 119) -
                p_over_q * *(b + 205 * OS1_S1 + 119);
            *(b + 160 * OS1_S1 + 156) =
                prefactor_y * *(b + 160 * OS1_S1 + 112) -
                p_over_q * *(b + 214 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 160 * OS1_S1 + 77);
            *(b + 160 * OS1_S1 + 157) =
                prefactor_z * *(b + 160 * OS1_S1 + 112) -
                p_over_q * *(b + 215 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 112);
            *(b + 160 * OS1_S1 + 158) =
                prefactor_z * *(b + 160 * OS1_S1 + 113) -
                p_over_q * *(b + 215 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 113) +
                one_over_two_q * *(b + 160 * OS1_S1 + 77);
            *(b + 160 * OS1_S1 + 159) =
                prefactor_z * *(b + 160 * OS1_S1 + 114) -
                p_over_q * *(b + 215 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 78);
            *(b + 160 * OS1_S1 + 160) =
                prefactor_z * *(b + 160 * OS1_S1 + 115) -
                p_over_q * *(b + 215 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 160 * OS1_S1 + 79);
            *(b + 160 * OS1_S1 + 161) =
                prefactor_y * *(b + 160 * OS1_S1 + 117) -
                p_over_q * *(b + 214 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 160 * OS1_S1 + 82);
            *(b + 160 * OS1_S1 + 162) =
                prefactor_y * *(b + 160 * OS1_S1 + 118) -
                p_over_q * *(b + 214 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 118) +
                one_over_two_q * *(b + 160 * OS1_S1 + 83);
            *(b + 160 * OS1_S1 + 163) =
                prefactor_y * *(b + 160 * OS1_S1 + 119) -
                p_over_q * *(b + 214 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 116 * OS1_S1 + 119);
            *(b + 160 * OS1_S1 + 164) =
                prefactor_z * *(b + 160 * OS1_S1 + 119) -
                p_over_q * *(b + 215 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 115 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 160 * OS1_S1 + 83);
            *(b + 161 * OS1_S1 + 120) =
                prefactor_x * *(b + 161 * OS1_S1 + 84) -
                p_over_q * *(b + 206 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 161 * OS1_S1 + 56);
            *(b + 161 * OS1_S1 + 121) =
                prefactor_y * *(b + 161 * OS1_S1 + 84) -
                p_over_q * *(b + 215 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 84);
            *(b + 161 * OS1_S1 + 122) =
                prefactor_z * *(b + 161 * OS1_S1 + 84) -
                p_over_q * *(b + 216 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 84);
            *(b + 161 * OS1_S1 + 123) =
                prefactor_y * *(b + 161 * OS1_S1 + 85) -
                p_over_q * *(b + 215 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 85) +
                one_over_two_q * *(b + 161 * OS1_S1 + 56);
            *(b + 161 * OS1_S1 + 124) =
                prefactor_y * *(b + 161 * OS1_S1 + 86) -
                p_over_q * *(b + 215 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 86);
            *(b + 161 * OS1_S1 + 125) =
                prefactor_z * *(b + 161 * OS1_S1 + 86) -
                p_over_q * *(b + 216 * OS1_S1 + 86) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 86) +
                one_over_two_q * *(b + 161 * OS1_S1 + 56);
            *(b + 161 * OS1_S1 + 126) =
                prefactor_y * *(b + 161 * OS1_S1 + 87) -
                p_over_q * *(b + 215 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 57);
            *(b + 161 * OS1_S1 + 127) =
                prefactor_z * *(b + 161 * OS1_S1 + 87) -
                p_over_q * *(b + 216 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 87);
            *(b + 161 * OS1_S1 + 128) =
                prefactor_y * *(b + 161 * OS1_S1 + 89) -
                p_over_q * *(b + 215 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 89);
            *(b + 161 * OS1_S1 + 129) =
                prefactor_z * *(b + 161 * OS1_S1 + 89) -
                p_over_q * *(b + 216 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 58);
            *(b + 161 * OS1_S1 + 130) =
                prefactor_x * *(b + 161 * OS1_S1 + 94) -
                p_over_q * *(b + 206 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 161 * OS1_S1 + 66);
            *(b + 161 * OS1_S1 + 131) =
                prefactor_z * *(b + 161 * OS1_S1 + 90) -
                p_over_q * *(b + 216 * OS1_S1 + 90) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 90);
            *(b + 161 * OS1_S1 + 132) =
                prefactor_y * *(b + 161 * OS1_S1 + 92) -
                p_over_q * *(b + 215 * OS1_S1 + 92) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 92) +
                one_over_two_q * *(b + 161 * OS1_S1 + 61);
            *(b + 161 * OS1_S1 + 133) =
                prefactor_y * *(b + 161 * OS1_S1 + 93) -
                p_over_q * *(b + 215 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 93);
            *(b + 161 * OS1_S1 + 134) =
                prefactor_x * *(b + 161 * OS1_S1 + 98) -
                p_over_q * *(b + 206 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 161 * OS1_S1 + 70);
            *(b + 161 * OS1_S1 + 135) =
                prefactor_x * *(b + 161 * OS1_S1 + 99) -
                p_over_q * *(b + 206 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 71);
            *(b + 161 * OS1_S1 + 136) =
                prefactor_z * *(b + 161 * OS1_S1 + 94) -
                p_over_q * *(b + 216 * OS1_S1 + 94) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 94);
            *(b + 161 * OS1_S1 + 137) =
                prefactor_z * *(b + 161 * OS1_S1 + 95) -
                p_over_q * *(b + 216 * OS1_S1 + 95) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 95) +
                one_over_two_q * *(b + 161 * OS1_S1 + 62);
            *(b + 161 * OS1_S1 + 138) =
                prefactor_y * *(b + 161 * OS1_S1 + 97) -
                p_over_q * *(b + 215 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 97) +
                one_over_two_q * *(b + 161 * OS1_S1 + 65);
            *(b + 161 * OS1_S1 + 139) =
                prefactor_y * *(b + 161 * OS1_S1 + 98) -
                p_over_q * *(b + 215 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 98);
            *(b + 161 * OS1_S1 + 140) =
                prefactor_x * *(b + 161 * OS1_S1 + 104) -
                p_over_q * *(b + 206 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 76);
            *(b + 161 * OS1_S1 + 141) =
                prefactor_x * *(b + 161 * OS1_S1 + 105) -
                p_over_q * *(b + 206 * OS1_S1 + 105) +
                one_over_two_q * *(b + 161 * OS1_S1 + 77);
            *(b + 161 * OS1_S1 + 142) =
                prefactor_z * *(b + 161 * OS1_S1 + 99) -
                p_over_q * *(b + 216 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 99);
            *(b + 161 * OS1_S1 + 143) =
                prefactor_x * *(b + 161 * OS1_S1 + 107) -
                p_over_q * *(b + 206 * OS1_S1 + 107) +
                one_over_two_q * *(b + 161 * OS1_S1 + 79);
            *(b + 161 * OS1_S1 + 144) =
                prefactor_x * *(b + 161 * OS1_S1 + 108) -
                p_over_q * *(b + 206 * OS1_S1 + 108) +
                one_over_two_q * *(b + 161 * OS1_S1 + 80);
            *(b + 161 * OS1_S1 + 145) =
                prefactor_x * *(b + 161 * OS1_S1 + 109) -
                p_over_q * *(b + 206 * OS1_S1 + 109) +
                one_over_two_q * *(b + 161 * OS1_S1 + 81);
            *(b + 161 * OS1_S1 + 146) =
                prefactor_y * *(b + 161 * OS1_S1 + 104) -
                p_over_q * *(b + 215 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 104);
            *(b + 161 * OS1_S1 + 147) =
                prefactor_x * *(b + 161 * OS1_S1 + 111) -
                p_over_q * *(b + 206 * OS1_S1 + 111) +
                one_over_two_q * *(b + 161 * OS1_S1 + 83);
            *(b + 161 * OS1_S1 + 148) =
                prefactor_x * *(b + 161 * OS1_S1 + 112) -
                p_over_q * *(b + 206 * OS1_S1 + 112);
            *(b + 161 * OS1_S1 + 149) =
                prefactor_x * *(b + 161 * OS1_S1 + 113) -
                p_over_q * *(b + 206 * OS1_S1 + 113);
            *(b + 161 * OS1_S1 + 150) =
                prefactor_x * *(b + 161 * OS1_S1 + 114) -
                p_over_q * *(b + 206 * OS1_S1 + 114);
            *(b + 161 * OS1_S1 + 151) =
                prefactor_x * *(b + 161 * OS1_S1 + 115) -
                p_over_q * *(b + 206 * OS1_S1 + 115);
            *(b + 161 * OS1_S1 + 152) =
                prefactor_x * *(b + 161 * OS1_S1 + 116) -
                p_over_q * *(b + 206 * OS1_S1 + 116);
            *(b + 161 * OS1_S1 + 153) =
                prefactor_x * *(b + 161 * OS1_S1 + 117) -
                p_over_q * *(b + 206 * OS1_S1 + 117);
            *(b + 161 * OS1_S1 + 154) =
                prefactor_x * *(b + 161 * OS1_S1 + 118) -
                p_over_q * *(b + 206 * OS1_S1 + 118);
            *(b + 161 * OS1_S1 + 155) =
                prefactor_x * *(b + 161 * OS1_S1 + 119) -
                p_over_q * *(b + 206 * OS1_S1 + 119);
            *(b + 161 * OS1_S1 + 156) =
                prefactor_y * *(b + 161 * OS1_S1 + 112) -
                p_over_q * *(b + 215 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 161 * OS1_S1 + 77);
            *(b + 161 * OS1_S1 + 157) =
                prefactor_z * *(b + 161 * OS1_S1 + 112) -
                p_over_q * *(b + 216 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 112);
            *(b + 161 * OS1_S1 + 158) =
                prefactor_z * *(b + 161 * OS1_S1 + 113) -
                p_over_q * *(b + 216 * OS1_S1 + 113) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 113) +
                one_over_two_q * *(b + 161 * OS1_S1 + 77);
            *(b + 161 * OS1_S1 + 159) =
                prefactor_z * *(b + 161 * OS1_S1 + 114) -
                p_over_q * *(b + 216 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 78);
            *(b + 161 * OS1_S1 + 160) =
                prefactor_y * *(b + 161 * OS1_S1 + 116) -
                p_over_q * *(b + 215 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 161 * OS1_S1 + 81);
            *(b + 161 * OS1_S1 + 161) =
                prefactor_y * *(b + 161 * OS1_S1 + 117) -
                p_over_q * *(b + 215 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 161 * OS1_S1 + 82);
            *(b + 161 * OS1_S1 + 162) =
                prefactor_y * *(b + 161 * OS1_S1 + 118) -
                p_over_q * *(b + 215 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 118) +
                one_over_two_q * *(b + 161 * OS1_S1 + 83);
            *(b + 161 * OS1_S1 + 163) =
                prefactor_y * *(b + 161 * OS1_S1 + 119) -
                p_over_q * *(b + 215 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 119);
            *(b + 161 * OS1_S1 + 164) =
                prefactor_z * *(b + 161 * OS1_S1 + 119) -
                p_over_q * *(b + 216 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 116 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 161 * OS1_S1 + 83);
            *(b + 162 * OS1_S1 + 120) =
                prefactor_x * *(b + 162 * OS1_S1 + 84) -
                p_over_q * *(b + 207 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 56);
            *(b + 162 * OS1_S1 + 121) =
                prefactor_y * *(b + 162 * OS1_S1 + 84) -
                p_over_q * *(b + 216 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 84);
            *(b + 162 * OS1_S1 + 122) =
                prefactor_z * *(b + 162 * OS1_S1 + 84) -
                p_over_q * *(b + 217 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 84);
            *(b + 162 * OS1_S1 + 123) =
                prefactor_y * *(b + 162 * OS1_S1 + 85) -
                p_over_q * *(b + 216 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 85) +
                one_over_two_q * *(b + 162 * OS1_S1 + 56);
            *(b + 162 * OS1_S1 + 124) =
                prefactor_y * *(b + 162 * OS1_S1 + 86) -
                p_over_q * *(b + 216 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 86);
            *(b + 162 * OS1_S1 + 125) =
                prefactor_z * *(b + 162 * OS1_S1 + 86) -
                p_over_q * *(b + 217 * OS1_S1 + 86) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 86) +
                one_over_two_q * *(b + 162 * OS1_S1 + 56);
            *(b + 162 * OS1_S1 + 126) =
                prefactor_y * *(b + 162 * OS1_S1 + 87) -
                p_over_q * *(b + 216 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 57);
            *(b + 162 * OS1_S1 + 127) =
                prefactor_z * *(b + 162 * OS1_S1 + 87) -
                p_over_q * *(b + 217 * OS1_S1 + 87) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 87);
            *(b + 162 * OS1_S1 + 128) =
                prefactor_y * *(b + 162 * OS1_S1 + 89) -
                p_over_q * *(b + 216 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 89);
            *(b + 162 * OS1_S1 + 129) =
                prefactor_z * *(b + 162 * OS1_S1 + 89) -
                p_over_q * *(b + 217 * OS1_S1 + 89) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 58);
            *(b + 162 * OS1_S1 + 130) =
                prefactor_x * *(b + 162 * OS1_S1 + 94) -
                p_over_q * *(b + 207 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 66);
            *(b + 162 * OS1_S1 + 131) =
                prefactor_z * *(b + 162 * OS1_S1 + 90) -
                p_over_q * *(b + 217 * OS1_S1 + 90) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 90);
            *(b + 162 * OS1_S1 + 132) =
                prefactor_y * *(b + 162 * OS1_S1 + 92) -
                p_over_q * *(b + 216 * OS1_S1 + 92) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 92) +
                one_over_two_q * *(b + 162 * OS1_S1 + 61);
            *(b + 162 * OS1_S1 + 133) =
                prefactor_y * *(b + 162 * OS1_S1 + 93) -
                p_over_q * *(b + 216 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 93);
            *(b + 162 * OS1_S1 + 134) =
                prefactor_x * *(b + 162 * OS1_S1 + 98) -
                p_over_q * *(b + 207 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 70);
            *(b + 162 * OS1_S1 + 135) =
                prefactor_x * *(b + 162 * OS1_S1 + 99) -
                p_over_q * *(b + 207 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 71);
            *(b + 162 * OS1_S1 + 136) =
                prefactor_z * *(b + 162 * OS1_S1 + 94) -
                p_over_q * *(b + 217 * OS1_S1 + 94) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 94);
            *(b + 162 * OS1_S1 + 137) =
                prefactor_z * *(b + 162 * OS1_S1 + 95) -
                p_over_q * *(b + 217 * OS1_S1 + 95) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 95) +
                one_over_two_q * *(b + 162 * OS1_S1 + 62);
            *(b + 162 * OS1_S1 + 138) =
                prefactor_y * *(b + 162 * OS1_S1 + 97) -
                p_over_q * *(b + 216 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 97) +
                one_over_two_q * *(b + 162 * OS1_S1 + 65);
            *(b + 162 * OS1_S1 + 139) =
                prefactor_y * *(b + 162 * OS1_S1 + 98) -
                p_over_q * *(b + 216 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 98);
            *(b + 162 * OS1_S1 + 140) =
                prefactor_x * *(b + 162 * OS1_S1 + 104) -
                p_over_q * *(b + 207 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 76);
            *(b + 162 * OS1_S1 + 141) =
                prefactor_x * *(b + 162 * OS1_S1 + 105) -
                p_over_q * *(b + 207 * OS1_S1 + 105) +
                one_over_two_q * *(b + 162 * OS1_S1 + 77);
            *(b + 162 * OS1_S1 + 142) =
                prefactor_z * *(b + 162 * OS1_S1 + 99) -
                p_over_q * *(b + 217 * OS1_S1 + 99) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 99);
            *(b + 162 * OS1_S1 + 143) =
                prefactor_x * *(b + 162 * OS1_S1 + 107) -
                p_over_q * *(b + 207 * OS1_S1 + 107) +
                one_over_two_q * *(b + 162 * OS1_S1 + 79);
            *(b + 162 * OS1_S1 + 144) =
                prefactor_x * *(b + 162 * OS1_S1 + 108) -
                p_over_q * *(b + 207 * OS1_S1 + 108) +
                one_over_two_q * *(b + 162 * OS1_S1 + 80);
            *(b + 162 * OS1_S1 + 145) =
                prefactor_x * *(b + 162 * OS1_S1 + 109) -
                p_over_q * *(b + 207 * OS1_S1 + 109) +
                one_over_two_q * *(b + 162 * OS1_S1 + 81);
            *(b + 162 * OS1_S1 + 146) =
                prefactor_y * *(b + 162 * OS1_S1 + 104) -
                p_over_q * *(b + 216 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 104);
            *(b + 162 * OS1_S1 + 147) =
                prefactor_x * *(b + 162 * OS1_S1 + 111) -
                p_over_q * *(b + 207 * OS1_S1 + 111) +
                one_over_two_q * *(b + 162 * OS1_S1 + 83);
            *(b + 162 * OS1_S1 + 148) =
                prefactor_x * *(b + 162 * OS1_S1 + 112) -
                p_over_q * *(b + 207 * OS1_S1 + 112);
            *(b + 162 * OS1_S1 + 149) =
                prefactor_x * *(b + 162 * OS1_S1 + 113) -
                p_over_q * *(b + 207 * OS1_S1 + 113);
            *(b + 162 * OS1_S1 + 150) =
                prefactor_x * *(b + 162 * OS1_S1 + 114) -
                p_over_q * *(b + 207 * OS1_S1 + 114);
            *(b + 162 * OS1_S1 + 151) =
                prefactor_x * *(b + 162 * OS1_S1 + 115) -
                p_over_q * *(b + 207 * OS1_S1 + 115);
            *(b + 162 * OS1_S1 + 152) =
                prefactor_x * *(b + 162 * OS1_S1 + 116) -
                p_over_q * *(b + 207 * OS1_S1 + 116);
            *(b + 162 * OS1_S1 + 153) =
                prefactor_x * *(b + 162 * OS1_S1 + 117) -
                p_over_q * *(b + 207 * OS1_S1 + 117);
            *(b + 162 * OS1_S1 + 154) =
                prefactor_x * *(b + 162 * OS1_S1 + 118) -
                p_over_q * *(b + 207 * OS1_S1 + 118);
            *(b + 162 * OS1_S1 + 155) =
                prefactor_x * *(b + 162 * OS1_S1 + 119) -
                p_over_q * *(b + 207 * OS1_S1 + 119);
            *(b + 162 * OS1_S1 + 156) =
                prefactor_y * *(b + 162 * OS1_S1 + 112) -
                p_over_q * *(b + 216 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 77);
            *(b + 162 * OS1_S1 + 157) =
                prefactor_z * *(b + 162 * OS1_S1 + 112) -
                p_over_q * *(b + 217 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 112);
            *(b + 162 * OS1_S1 + 158) =
                prefactor_z * *(b + 162 * OS1_S1 + 113) -
                p_over_q * *(b + 217 * OS1_S1 + 113) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 113) +
                one_over_two_q * *(b + 162 * OS1_S1 + 77);
            *(b + 162 * OS1_S1 + 159) =
                prefactor_z * *(b + 162 * OS1_S1 + 114) -
                p_over_q * *(b + 217 * OS1_S1 + 114) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 78);
            *(b + 162 * OS1_S1 + 160) =
                prefactor_y * *(b + 162 * OS1_S1 + 116) -
                p_over_q * *(b + 216 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 81);
            *(b + 162 * OS1_S1 + 161) =
                prefactor_y * *(b + 162 * OS1_S1 + 117) -
                p_over_q * *(b + 216 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 162 * OS1_S1 + 82);
            *(b + 162 * OS1_S1 + 162) =
                prefactor_y * *(b + 162 * OS1_S1 + 118) -
                p_over_q * *(b + 216 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 118) +
                one_over_two_q * *(b + 162 * OS1_S1 + 83);
            *(b + 162 * OS1_S1 + 163) =
                prefactor_y * *(b + 162 * OS1_S1 + 119) -
                p_over_q * *(b + 216 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 119);
            *(b + 162 * OS1_S1 + 164) =
                prefactor_z * *(b + 162 * OS1_S1 + 119) -
                p_over_q * *(b + 217 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 117 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 83);
            *(b + 163 * OS1_S1 + 120) =
                prefactor_x * *(b + 163 * OS1_S1 + 84) -
                p_over_q * *(b + 208 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 163 * OS1_S1 + 56);
            *(b + 163 * OS1_S1 + 121) =
                prefactor_y * *(b + 163 * OS1_S1 + 84) -
                p_over_q * *(b + 217 * OS1_S1 + 84) +
                one_over_two_q * *(b + 119 * OS1_S1 + 84);
            *(b + 163 * OS1_S1 + 122) =
                prefactor_z * *(b + 163 * OS1_S1 + 84) -
                p_over_q * *(b + 218 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 84);
            *(b + 163 * OS1_S1 + 123) =
                prefactor_y * *(b + 163 * OS1_S1 + 85) -
                p_over_q * *(b + 217 * OS1_S1 + 85) +
                one_over_two_q * *(b + 119 * OS1_S1 + 85) +
                one_over_two_q * *(b + 163 * OS1_S1 + 56);
            *(b + 163 * OS1_S1 + 124) =
                prefactor_y * *(b + 163 * OS1_S1 + 86) -
                p_over_q * *(b + 217 * OS1_S1 + 86) +
                one_over_two_q * *(b + 119 * OS1_S1 + 86);
            *(b + 163 * OS1_S1 + 125) =
                prefactor_z * *(b + 163 * OS1_S1 + 86) -
                p_over_q * *(b + 218 * OS1_S1 + 86) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 86) +
                one_over_two_q * *(b + 163 * OS1_S1 + 56);
            *(b + 163 * OS1_S1 + 126) =
                prefactor_y * *(b + 163 * OS1_S1 + 87) -
                p_over_q * *(b + 217 * OS1_S1 + 87) +
                one_over_two_q * *(b + 119 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 57);
            *(b + 163 * OS1_S1 + 127) =
                prefactor_z * *(b + 163 * OS1_S1 + 87) -
                p_over_q * *(b + 218 * OS1_S1 + 87) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 87);
            *(b + 163 * OS1_S1 + 128) =
                prefactor_y * *(b + 163 * OS1_S1 + 89) -
                p_over_q * *(b + 217 * OS1_S1 + 89) +
                one_over_two_q * *(b + 119 * OS1_S1 + 89);
            *(b + 163 * OS1_S1 + 129) =
                prefactor_z * *(b + 163 * OS1_S1 + 89) -
                p_over_q * *(b + 218 * OS1_S1 + 89) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 58);
            *(b + 163 * OS1_S1 + 130) =
                prefactor_x * *(b + 163 * OS1_S1 + 94) -
                p_over_q * *(b + 208 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 163 * OS1_S1 + 66);
            *(b + 163 * OS1_S1 + 131) =
                prefactor_z * *(b + 163 * OS1_S1 + 90) -
                p_over_q * *(b + 218 * OS1_S1 + 90) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 90);
            *(b + 163 * OS1_S1 + 132) =
                prefactor_y * *(b + 163 * OS1_S1 + 92) -
                p_over_q * *(b + 217 * OS1_S1 + 92) +
                one_over_two_q * *(b + 119 * OS1_S1 + 92) +
                one_over_two_q * *(b + 163 * OS1_S1 + 61);
            *(b + 163 * OS1_S1 + 133) =
                prefactor_y * *(b + 163 * OS1_S1 + 93) -
                p_over_q * *(b + 217 * OS1_S1 + 93) +
                one_over_two_q * *(b + 119 * OS1_S1 + 93);
            *(b + 163 * OS1_S1 + 134) =
                prefactor_x * *(b + 163 * OS1_S1 + 98) -
                p_over_q * *(b + 208 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 163 * OS1_S1 + 70);
            *(b + 163 * OS1_S1 + 135) =
                prefactor_x * *(b + 163 * OS1_S1 + 99) -
                p_over_q * *(b + 208 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 71);
            *(b + 163 * OS1_S1 + 136) =
                prefactor_z * *(b + 163 * OS1_S1 + 94) -
                p_over_q * *(b + 218 * OS1_S1 + 94) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 94);
            *(b + 163 * OS1_S1 + 137) =
                prefactor_z * *(b + 163 * OS1_S1 + 95) -
                p_over_q * *(b + 218 * OS1_S1 + 95) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 95) +
                one_over_two_q * *(b + 163 * OS1_S1 + 62);
            *(b + 163 * OS1_S1 + 138) =
                prefactor_y * *(b + 163 * OS1_S1 + 97) -
                p_over_q * *(b + 217 * OS1_S1 + 97) +
                one_over_two_q * *(b + 119 * OS1_S1 + 97) +
                one_over_two_q * *(b + 163 * OS1_S1 + 65);
            *(b + 163 * OS1_S1 + 139) =
                prefactor_y * *(b + 163 * OS1_S1 + 98) -
                p_over_q * *(b + 217 * OS1_S1 + 98) +
                one_over_two_q * *(b + 119 * OS1_S1 + 98);
            *(b + 163 * OS1_S1 + 140) =
                prefactor_x * *(b + 163 * OS1_S1 + 104) -
                p_over_q * *(b + 208 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 76);
            *(b + 163 * OS1_S1 + 141) =
                prefactor_x * *(b + 163 * OS1_S1 + 105) -
                p_over_q * *(b + 208 * OS1_S1 + 105) +
                one_over_two_q * *(b + 163 * OS1_S1 + 77);
            *(b + 163 * OS1_S1 + 142) =
                prefactor_z * *(b + 163 * OS1_S1 + 99) -
                p_over_q * *(b + 218 * OS1_S1 + 99) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 99);
            *(b + 163 * OS1_S1 + 143) =
                prefactor_x * *(b + 163 * OS1_S1 + 107) -
                p_over_q * *(b + 208 * OS1_S1 + 107) +
                one_over_two_q * *(b + 163 * OS1_S1 + 79);
            *(b + 163 * OS1_S1 + 144) =
                prefactor_x * *(b + 163 * OS1_S1 + 108) -
                p_over_q * *(b + 208 * OS1_S1 + 108) +
                one_over_two_q * *(b + 163 * OS1_S1 + 80);
            *(b + 163 * OS1_S1 + 145) =
                prefactor_x * *(b + 163 * OS1_S1 + 109) -
                p_over_q * *(b + 208 * OS1_S1 + 109) +
                one_over_two_q * *(b + 163 * OS1_S1 + 81);
            *(b + 163 * OS1_S1 + 146) =
                prefactor_y * *(b + 163 * OS1_S1 + 104) -
                p_over_q * *(b + 217 * OS1_S1 + 104) +
                one_over_two_q * *(b + 119 * OS1_S1 + 104);
            *(b + 163 * OS1_S1 + 147) =
                prefactor_x * *(b + 163 * OS1_S1 + 111) -
                p_over_q * *(b + 208 * OS1_S1 + 111) +
                one_over_two_q * *(b + 163 * OS1_S1 + 83);
            *(b + 163 * OS1_S1 + 148) =
                prefactor_x * *(b + 163 * OS1_S1 + 112) -
                p_over_q * *(b + 208 * OS1_S1 + 112);
            *(b + 163 * OS1_S1 + 149) =
                prefactor_x * *(b + 163 * OS1_S1 + 113) -
                p_over_q * *(b + 208 * OS1_S1 + 113);
            *(b + 163 * OS1_S1 + 150) =
                prefactor_x * *(b + 163 * OS1_S1 + 114) -
                p_over_q * *(b + 208 * OS1_S1 + 114);
            *(b + 163 * OS1_S1 + 151) =
                prefactor_x * *(b + 163 * OS1_S1 + 115) -
                p_over_q * *(b + 208 * OS1_S1 + 115);
            *(b + 163 * OS1_S1 + 152) =
                prefactor_x * *(b + 163 * OS1_S1 + 116) -
                p_over_q * *(b + 208 * OS1_S1 + 116);
            *(b + 163 * OS1_S1 + 153) =
                prefactor_x * *(b + 163 * OS1_S1 + 117) -
                p_over_q * *(b + 208 * OS1_S1 + 117);
            *(b + 163 * OS1_S1 + 154) =
                prefactor_x * *(b + 163 * OS1_S1 + 118) -
                p_over_q * *(b + 208 * OS1_S1 + 118);
            *(b + 163 * OS1_S1 + 155) =
                prefactor_x * *(b + 163 * OS1_S1 + 119) -
                p_over_q * *(b + 208 * OS1_S1 + 119);
            *(b + 163 * OS1_S1 + 156) =
                prefactor_y * *(b + 163 * OS1_S1 + 112) -
                p_over_q * *(b + 217 * OS1_S1 + 112) +
                one_over_two_q * *(b + 119 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 163 * OS1_S1 + 77);
            *(b + 163 * OS1_S1 + 157) =
                prefactor_z * *(b + 163 * OS1_S1 + 112) -
                p_over_q * *(b + 218 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 112);
            *(b + 163 * OS1_S1 + 158) =
                prefactor_z * *(b + 163 * OS1_S1 + 113) -
                p_over_q * *(b + 218 * OS1_S1 + 113) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 113) +
                one_over_two_q * *(b + 163 * OS1_S1 + 77);
            *(b + 163 * OS1_S1 + 159) =
                prefactor_z * *(b + 163 * OS1_S1 + 114) -
                p_over_q * *(b + 218 * OS1_S1 + 114) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 78);
            *(b + 163 * OS1_S1 + 160) =
                prefactor_y * *(b + 163 * OS1_S1 + 116) -
                p_over_q * *(b + 217 * OS1_S1 + 116) +
                one_over_two_q * *(b + 119 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 163 * OS1_S1 + 81);
            *(b + 163 * OS1_S1 + 161) =
                prefactor_y * *(b + 163 * OS1_S1 + 117) -
                p_over_q * *(b + 217 * OS1_S1 + 117) +
                one_over_two_q * *(b + 119 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 82);
            *(b + 163 * OS1_S1 + 162) =
                prefactor_y * *(b + 163 * OS1_S1 + 118) -
                p_over_q * *(b + 217 * OS1_S1 + 118) +
                one_over_two_q * *(b + 119 * OS1_S1 + 118) +
                one_over_two_q * *(b + 163 * OS1_S1 + 83);
            *(b + 163 * OS1_S1 + 163) =
                prefactor_y * *(b + 163 * OS1_S1 + 119) -
                p_over_q * *(b + 217 * OS1_S1 + 119) +
                one_over_two_q * *(b + 119 * OS1_S1 + 119);
            *(b + 163 * OS1_S1 + 164) =
                prefactor_z * *(b + 163 * OS1_S1 + 119) -
                p_over_q * *(b + 218 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 163 * OS1_S1 + 83);
            *(b + 164 * OS1_S1 + 120) =
                prefactor_x * *(b + 164 * OS1_S1 + 84) -
                p_over_q * *(b + 209 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 164 * OS1_S1 + 56);
            *(b + 164 * OS1_S1 + 121) = prefactor_y * *(b + 164 * OS1_S1 + 84) -
                                        p_over_q * *(b + 218 * OS1_S1 + 84);
            *(b + 164 * OS1_S1 + 122) =
                prefactor_z * *(b + 164 * OS1_S1 + 84) -
                p_over_q * *(b + 219 * OS1_S1 + 84) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 84);
            *(b + 164 * OS1_S1 + 123) =
                prefactor_y * *(b + 164 * OS1_S1 + 85) -
                p_over_q * *(b + 218 * OS1_S1 + 85) +
                one_over_two_q * *(b + 164 * OS1_S1 + 56);
            *(b + 164 * OS1_S1 + 124) = prefactor_y * *(b + 164 * OS1_S1 + 86) -
                                        p_over_q * *(b + 218 * OS1_S1 + 86);
            *(b + 164 * OS1_S1 + 125) =
                prefactor_z * *(b + 164 * OS1_S1 + 86) -
                p_over_q * *(b + 219 * OS1_S1 + 86) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 86) +
                one_over_two_q * *(b + 164 * OS1_S1 + 56);
            *(b + 164 * OS1_S1 + 126) =
                prefactor_y * *(b + 164 * OS1_S1 + 87) -
                p_over_q * *(b + 218 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 57);
            *(b + 164 * OS1_S1 + 127) =
                prefactor_z * *(b + 164 * OS1_S1 + 87) -
                p_over_q * *(b + 219 * OS1_S1 + 87) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 87);
            *(b + 164 * OS1_S1 + 128) = prefactor_y * *(b + 164 * OS1_S1 + 89) -
                                        p_over_q * *(b + 218 * OS1_S1 + 89);
            *(b + 164 * OS1_S1 + 129) =
                prefactor_z * *(b + 164 * OS1_S1 + 89) -
                p_over_q * *(b + 219 * OS1_S1 + 89) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 58);
            *(b + 164 * OS1_S1 + 130) =
                prefactor_y * *(b + 164 * OS1_S1 + 90) -
                p_over_q * *(b + 218 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 164 * OS1_S1 + 59);
            *(b + 164 * OS1_S1 + 131) =
                prefactor_z * *(b + 164 * OS1_S1 + 90) -
                p_over_q * *(b + 219 * OS1_S1 + 90) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 90);
            *(b + 164 * OS1_S1 + 132) =
                prefactor_y * *(b + 164 * OS1_S1 + 92) -
                p_over_q * *(b + 218 * OS1_S1 + 92) +
                one_over_two_q * *(b + 164 * OS1_S1 + 61);
            *(b + 164 * OS1_S1 + 133) = prefactor_y * *(b + 164 * OS1_S1 + 93) -
                                        p_over_q * *(b + 218 * OS1_S1 + 93);
            *(b + 164 * OS1_S1 + 134) =
                prefactor_x * *(b + 164 * OS1_S1 + 98) -
                p_over_q * *(b + 209 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 164 * OS1_S1 + 70);
            *(b + 164 * OS1_S1 + 135) =
                prefactor_x * *(b + 164 * OS1_S1 + 99) -
                p_over_q * *(b + 209 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 71);
            *(b + 164 * OS1_S1 + 136) =
                prefactor_z * *(b + 164 * OS1_S1 + 94) -
                p_over_q * *(b + 219 * OS1_S1 + 94) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 94);
            *(b + 164 * OS1_S1 + 137) =
                prefactor_z * *(b + 164 * OS1_S1 + 95) -
                p_over_q * *(b + 219 * OS1_S1 + 95) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 95) +
                one_over_two_q * *(b + 164 * OS1_S1 + 62);
            *(b + 164 * OS1_S1 + 138) =
                prefactor_y * *(b + 164 * OS1_S1 + 97) -
                p_over_q * *(b + 218 * OS1_S1 + 97) +
                one_over_two_q * *(b + 164 * OS1_S1 + 65);
            *(b + 164 * OS1_S1 + 139) = prefactor_y * *(b + 164 * OS1_S1 + 98) -
                                        p_over_q * *(b + 218 * OS1_S1 + 98);
            *(b + 164 * OS1_S1 + 140) =
                prefactor_x * *(b + 164 * OS1_S1 + 104) -
                p_over_q * *(b + 209 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 76);
            *(b + 164 * OS1_S1 + 141) =
                prefactor_x * *(b + 164 * OS1_S1 + 105) -
                p_over_q * *(b + 209 * OS1_S1 + 105) +
                one_over_two_q * *(b + 164 * OS1_S1 + 77);
            *(b + 164 * OS1_S1 + 142) =
                prefactor_z * *(b + 164 * OS1_S1 + 99) -
                p_over_q * *(b + 219 * OS1_S1 + 99) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 99);
            *(b + 164 * OS1_S1 + 143) =
                prefactor_x * *(b + 164 * OS1_S1 + 107) -
                p_over_q * *(b + 209 * OS1_S1 + 107) +
                one_over_two_q * *(b + 164 * OS1_S1 + 79);
            *(b + 164 * OS1_S1 + 144) =
                prefactor_x * *(b + 164 * OS1_S1 + 108) -
                p_over_q * *(b + 209 * OS1_S1 + 108) +
                one_over_two_q * *(b + 164 * OS1_S1 + 80);
            *(b + 164 * OS1_S1 + 145) =
                prefactor_y * *(b + 164 * OS1_S1 + 103) -
                p_over_q * *(b + 218 * OS1_S1 + 103) +
                one_over_two_q * *(b + 164 * OS1_S1 + 70);
            *(b + 164 * OS1_S1 + 146) =
                prefactor_y * *(b + 164 * OS1_S1 + 104) -
                p_over_q * *(b + 218 * OS1_S1 + 104);
            *(b + 164 * OS1_S1 + 147) =
                prefactor_x * *(b + 164 * OS1_S1 + 111) -
                p_over_q * *(b + 209 * OS1_S1 + 111) +
                one_over_two_q * *(b + 164 * OS1_S1 + 83);
            *(b + 164 * OS1_S1 + 148) =
                prefactor_x * *(b + 164 * OS1_S1 + 112) -
                p_over_q * *(b + 209 * OS1_S1 + 112);
            *(b + 164 * OS1_S1 + 149) =
                prefactor_x * *(b + 164 * OS1_S1 + 113) -
                p_over_q * *(b + 209 * OS1_S1 + 113);
            *(b + 164 * OS1_S1 + 150) =
                prefactor_x * *(b + 164 * OS1_S1 + 114) -
                p_over_q * *(b + 209 * OS1_S1 + 114);
            *(b + 164 * OS1_S1 + 151) =
                prefactor_x * *(b + 164 * OS1_S1 + 115) -
                p_over_q * *(b + 209 * OS1_S1 + 115);
            *(b + 164 * OS1_S1 + 152) =
                prefactor_x * *(b + 164 * OS1_S1 + 116) -
                p_over_q * *(b + 209 * OS1_S1 + 116);
            *(b + 164 * OS1_S1 + 153) =
                prefactor_x * *(b + 164 * OS1_S1 + 117) -
                p_over_q * *(b + 209 * OS1_S1 + 117);
            *(b + 164 * OS1_S1 + 154) =
                prefactor_y * *(b + 164 * OS1_S1 + 111) -
                p_over_q * *(b + 218 * OS1_S1 + 111);
            *(b + 164 * OS1_S1 + 155) =
                prefactor_x * *(b + 164 * OS1_S1 + 119) -
                p_over_q * *(b + 209 * OS1_S1 + 119);
            *(b + 164 * OS1_S1 + 156) =
                prefactor_y * *(b + 164 * OS1_S1 + 112) -
                p_over_q * *(b + 218 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 164 * OS1_S1 + 77);
            *(b + 164 * OS1_S1 + 157) =
                prefactor_z * *(b + 164 * OS1_S1 + 112) -
                p_over_q * *(b + 219 * OS1_S1 + 112) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 112);
            *(b + 164 * OS1_S1 + 158) =
                prefactor_z * *(b + 164 * OS1_S1 + 113) -
                p_over_q * *(b + 219 * OS1_S1 + 113) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 113) +
                one_over_two_q * *(b + 164 * OS1_S1 + 77);
            *(b + 164 * OS1_S1 + 159) =
                prefactor_z * *(b + 164 * OS1_S1 + 114) -
                p_over_q * *(b + 219 * OS1_S1 + 114) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 78);
            *(b + 164 * OS1_S1 + 160) =
                prefactor_y * *(b + 164 * OS1_S1 + 116) -
                p_over_q * *(b + 218 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 164 * OS1_S1 + 81);
            *(b + 164 * OS1_S1 + 161) =
                prefactor_y * *(b + 164 * OS1_S1 + 117) -
                p_over_q * *(b + 218 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 164 * OS1_S1 + 82);
            *(b + 164 * OS1_S1 + 162) =
                prefactor_y * *(b + 164 * OS1_S1 + 118) -
                p_over_q * *(b + 218 * OS1_S1 + 118) +
                one_over_two_q * *(b + 164 * OS1_S1 + 83);
            *(b + 164 * OS1_S1 + 163) =
                prefactor_y * *(b + 164 * OS1_S1 + 119) -
                p_over_q * *(b + 218 * OS1_S1 + 119);
            *(b + 164 * OS1_S1 + 164) =
                prefactor_z * *(b + 164 * OS1_S1 + 119) -
                p_over_q * *(b + 219 * OS1_S1 + 119) +
                8 * one_over_two_q * *(b + 119 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 164 * OS1_S1 + 83);
            return;
        }
    }
}
