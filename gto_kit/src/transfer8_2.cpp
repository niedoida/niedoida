/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_6_8(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 56 * OS1_S1 + 120) =
                prefactor_x * *(b + 56 * OS1_S1 + 84) -
                p_over_q * *(b + 84 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 56);
            *(b + 56 * OS1_S1 + 121) = prefactor_y * *(b + 56 * OS1_S1 + 84) -
                                       p_over_q * *(b + 85 * OS1_S1 + 84);
            *(b + 56 * OS1_S1 + 122) = prefactor_z * *(b + 56 * OS1_S1 + 84) -
                                       p_over_q * *(b + 86 * OS1_S1 + 84);
            *(b + 56 * OS1_S1 + 123) = prefactor_y * *(b + 56 * OS1_S1 + 85) -
                                       p_over_q * *(b + 85 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 56);
            *(b + 56 * OS1_S1 + 124) = prefactor_z * *(b + 56 * OS1_S1 + 85) -
                                       p_over_q * *(b + 86 * OS1_S1 + 85);
            *(b + 56 * OS1_S1 + 125) = prefactor_z * *(b + 56 * OS1_S1 + 86) -
                                       p_over_q * *(b + 86 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 56);
            *(b + 56 * OS1_S1 + 126) =
                prefactor_y * *(b + 56 * OS1_S1 + 87) -
                p_over_q * *(b + 85 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 57);
            *(b + 56 * OS1_S1 + 127) = prefactor_z * *(b + 56 * OS1_S1 + 87) -
                                       p_over_q * *(b + 86 * OS1_S1 + 87);
            *(b + 56 * OS1_S1 + 128) = prefactor_y * *(b + 56 * OS1_S1 + 89) -
                                       p_over_q * *(b + 85 * OS1_S1 + 89);
            *(b + 56 * OS1_S1 + 129) =
                prefactor_z * *(b + 56 * OS1_S1 + 89) -
                p_over_q * *(b + 86 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 58);
            *(b + 56 * OS1_S1 + 130) =
                prefactor_y * *(b + 56 * OS1_S1 + 90) -
                p_over_q * *(b + 85 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 56 * OS1_S1 + 59);
            *(b + 56 * OS1_S1 + 131) = prefactor_z * *(b + 56 * OS1_S1 + 90) -
                                       p_over_q * *(b + 86 * OS1_S1 + 90);
            *(b + 56 * OS1_S1 + 132) = prefactor_z * *(b + 56 * OS1_S1 + 91) -
                                       p_over_q * *(b + 86 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 59);
            *(b + 56 * OS1_S1 + 133) = prefactor_y * *(b + 56 * OS1_S1 + 93) -
                                       p_over_q * *(b + 85 * OS1_S1 + 93);
            *(b + 56 * OS1_S1 + 134) =
                prefactor_z * *(b + 56 * OS1_S1 + 93) -
                p_over_q * *(b + 86 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 56 * OS1_S1 + 61);
            *(b + 56 * OS1_S1 + 135) =
                prefactor_x * *(b + 56 * OS1_S1 + 99) -
                p_over_q * *(b + 84 * OS1_S1 + 99) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 71);
            *(b + 56 * OS1_S1 + 136) = prefactor_z * *(b + 56 * OS1_S1 + 94) -
                                       p_over_q * *(b + 86 * OS1_S1 + 94);
            *(b + 56 * OS1_S1 + 137) = prefactor_z * *(b + 56 * OS1_S1 + 95) -
                                       p_over_q * *(b + 86 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 62);
            *(b + 56 * OS1_S1 + 138) = prefactor_y * *(b + 56 * OS1_S1 + 97) -
                                       p_over_q * *(b + 85 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 65);
            *(b + 56 * OS1_S1 + 139) = prefactor_y * *(b + 56 * OS1_S1 + 98) -
                                       p_over_q * *(b + 85 * OS1_S1 + 98);
            *(b + 56 * OS1_S1 + 140) =
                prefactor_x * *(b + 56 * OS1_S1 + 104) -
                p_over_q * *(b + 84 * OS1_S1 + 104) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 76);
            *(b + 56 * OS1_S1 + 141) =
                prefactor_x * *(b + 56 * OS1_S1 + 105) -
                p_over_q * *(b + 84 * OS1_S1 + 105) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 105) +
                one_over_two_q * *(b + 56 * OS1_S1 + 77);
            *(b + 56 * OS1_S1 + 142) = prefactor_z * *(b + 56 * OS1_S1 + 99) -
                                       p_over_q * *(b + 86 * OS1_S1 + 99);
            *(b + 56 * OS1_S1 + 143) = prefactor_z * *(b + 56 * OS1_S1 + 100) -
                                       p_over_q * *(b + 86 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 66);
            *(b + 56 * OS1_S1 + 144) =
                prefactor_x * *(b + 56 * OS1_S1 + 108) -
                p_over_q * *(b + 84 * OS1_S1 + 108) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 108) +
                one_over_two_q * *(b + 56 * OS1_S1 + 80);
            *(b + 56 * OS1_S1 + 145) = prefactor_y * *(b + 56 * OS1_S1 + 103) -
                                       p_over_q * *(b + 85 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 70);
            *(b + 56 * OS1_S1 + 146) = prefactor_y * *(b + 56 * OS1_S1 + 104) -
                                       p_over_q * *(b + 85 * OS1_S1 + 104);
            *(b + 56 * OS1_S1 + 147) =
                prefactor_x * *(b + 56 * OS1_S1 + 111) -
                p_over_q * *(b + 84 * OS1_S1 + 111) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 111) +
                one_over_two_q * *(b + 56 * OS1_S1 + 83);
            *(b + 56 * OS1_S1 + 148) =
                prefactor_x * *(b + 56 * OS1_S1 + 112) -
                p_over_q * *(b + 84 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 112);
            *(b + 56 * OS1_S1 + 149) = prefactor_z * *(b + 56 * OS1_S1 + 105) -
                                       p_over_q * *(b + 86 * OS1_S1 + 105);
            *(b + 56 * OS1_S1 + 150) =
                prefactor_x * *(b + 56 * OS1_S1 + 114) -
                p_over_q * *(b + 84 * OS1_S1 + 114) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 114);
            *(b + 56 * OS1_S1 + 151) =
                prefactor_x * *(b + 56 * OS1_S1 + 115) -
                p_over_q * *(b + 84 * OS1_S1 + 115) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 115);
            *(b + 56 * OS1_S1 + 152) =
                prefactor_x * *(b + 56 * OS1_S1 + 116) -
                p_over_q * *(b + 84 * OS1_S1 + 116) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 116);
            *(b + 56 * OS1_S1 + 153) =
                prefactor_x * *(b + 56 * OS1_S1 + 117) -
                p_over_q * *(b + 84 * OS1_S1 + 117) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 117);
            *(b + 56 * OS1_S1 + 154) = prefactor_y * *(b + 56 * OS1_S1 + 111) -
                                       p_over_q * *(b + 85 * OS1_S1 + 111);
            *(b + 56 * OS1_S1 + 155) =
                prefactor_x * *(b + 56 * OS1_S1 + 119) -
                p_over_q * *(b + 84 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 35 * OS1_S1 + 119);
            *(b + 56 * OS1_S1 + 156) =
                prefactor_y * *(b + 56 * OS1_S1 + 112) -
                p_over_q * *(b + 85 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 77);
            *(b + 56 * OS1_S1 + 157) = prefactor_z * *(b + 56 * OS1_S1 + 112) -
                                       p_over_q * *(b + 86 * OS1_S1 + 112);
            *(b + 56 * OS1_S1 + 158) = prefactor_z * *(b + 56 * OS1_S1 + 113) -
                                       p_over_q * *(b + 86 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 77);
            *(b + 56 * OS1_S1 + 159) =
                prefactor_z * *(b + 56 * OS1_S1 + 114) -
                p_over_q * *(b + 86 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 78);
            *(b + 56 * OS1_S1 + 160) =
                prefactor_z * *(b + 56 * OS1_S1 + 115) -
                p_over_q * *(b + 86 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 56 * OS1_S1 + 79);
            *(b + 56 * OS1_S1 + 161) =
                prefactor_y * *(b + 56 * OS1_S1 + 117) -
                p_over_q * *(b + 85 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 56 * OS1_S1 + 82);
            *(b + 56 * OS1_S1 + 162) = prefactor_y * *(b + 56 * OS1_S1 + 118) -
                                       p_over_q * *(b + 85 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 83);
            *(b + 56 * OS1_S1 + 163) = prefactor_y * *(b + 56 * OS1_S1 + 119) -
                                       p_over_q * *(b + 85 * OS1_S1 + 119);
            *(b + 56 * OS1_S1 + 164) =
                prefactor_z * *(b + 56 * OS1_S1 + 119) -
                p_over_q * *(b + 86 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 83);
            *(b + 57 * OS1_S1 + 120) =
                prefactor_x * *(b + 57 * OS1_S1 + 84) -
                p_over_q * *(b + 85 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 57 * OS1_S1 + 56);
            *(b + 57 * OS1_S1 + 121) = prefactor_y * *(b + 57 * OS1_S1 + 84) -
                                       p_over_q * *(b + 87 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 84);
            *(b + 57 * OS1_S1 + 122) = prefactor_z * *(b + 57 * OS1_S1 + 84) -
                                       p_over_q * *(b + 88 * OS1_S1 + 84);
            *(b + 57 * OS1_S1 + 123) =
                prefactor_y * *(b + 57 * OS1_S1 + 85) -
                p_over_q * *(b + 87 * OS1_S1 + 85) +
                one_over_two_q * *(b + 35 * OS1_S1 + 85) +
                one_over_two_q * *(b + 57 * OS1_S1 + 56);
            *(b + 57 * OS1_S1 + 124) = prefactor_z * *(b + 57 * OS1_S1 + 85) -
                                       p_over_q * *(b + 88 * OS1_S1 + 85);
            *(b + 57 * OS1_S1 + 125) = prefactor_z * *(b + 57 * OS1_S1 + 86) -
                                       p_over_q * *(b + 88 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 56);
            *(b + 57 * OS1_S1 + 126) =
                prefactor_y * *(b + 57 * OS1_S1 + 87) -
                p_over_q * *(b + 87 * OS1_S1 + 87) +
                one_over_two_q * *(b + 35 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 57);
            *(b + 57 * OS1_S1 + 127) = prefactor_z * *(b + 57 * OS1_S1 + 87) -
                                       p_over_q * *(b + 88 * OS1_S1 + 87);
            *(b + 57 * OS1_S1 + 128) = prefactor_y * *(b + 57 * OS1_S1 + 89) -
                                       p_over_q * *(b + 87 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 89);
            *(b + 57 * OS1_S1 + 129) =
                prefactor_z * *(b + 57 * OS1_S1 + 89) -
                p_over_q * *(b + 88 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 58);
            *(b + 57 * OS1_S1 + 130) =
                prefactor_y * *(b + 57 * OS1_S1 + 90) -
                p_over_q * *(b + 87 * OS1_S1 + 90) +
                one_over_two_q * *(b + 35 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 57 * OS1_S1 + 59);
            *(b + 57 * OS1_S1 + 131) = prefactor_z * *(b + 57 * OS1_S1 + 90) -
                                       p_over_q * *(b + 88 * OS1_S1 + 90);
            *(b + 57 * OS1_S1 + 132) = prefactor_z * *(b + 57 * OS1_S1 + 91) -
                                       p_over_q * *(b + 88 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 59);
            *(b + 57 * OS1_S1 + 133) = prefactor_y * *(b + 57 * OS1_S1 + 93) -
                                       p_over_q * *(b + 87 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 93);
            *(b + 57 * OS1_S1 + 134) =
                prefactor_z * *(b + 57 * OS1_S1 + 93) -
                p_over_q * *(b + 88 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 57 * OS1_S1 + 61);
            *(b + 57 * OS1_S1 + 135) =
                prefactor_x * *(b + 57 * OS1_S1 + 99) -
                p_over_q * *(b + 85 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 71);
            *(b + 57 * OS1_S1 + 136) = prefactor_z * *(b + 57 * OS1_S1 + 94) -
                                       p_over_q * *(b + 88 * OS1_S1 + 94);
            *(b + 57 * OS1_S1 + 137) = prefactor_z * *(b + 57 * OS1_S1 + 95) -
                                       p_over_q * *(b + 88 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 62);
            *(b + 57 * OS1_S1 + 138) =
                prefactor_y * *(b + 57 * OS1_S1 + 97) -
                p_over_q * *(b + 87 * OS1_S1 + 97) +
                one_over_two_q * *(b + 35 * OS1_S1 + 97) +
                one_over_two_q * *(b + 57 * OS1_S1 + 65);
            *(b + 57 * OS1_S1 + 139) = prefactor_y * *(b + 57 * OS1_S1 + 98) -
                                       p_over_q * *(b + 87 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 98);
            *(b + 57 * OS1_S1 + 140) =
                prefactor_x * *(b + 57 * OS1_S1 + 104) -
                p_over_q * *(b + 85 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 76);
            *(b + 57 * OS1_S1 + 141) =
                prefactor_x * *(b + 57 * OS1_S1 + 105) -
                p_over_q * *(b + 85 * OS1_S1 + 105) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 105) +
                one_over_two_q * *(b + 57 * OS1_S1 + 77);
            *(b + 57 * OS1_S1 + 142) = prefactor_z * *(b + 57 * OS1_S1 + 99) -
                                       p_over_q * *(b + 88 * OS1_S1 + 99);
            *(b + 57 * OS1_S1 + 143) = prefactor_z * *(b + 57 * OS1_S1 + 100) -
                                       p_over_q * *(b + 88 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 66);
            *(b + 57 * OS1_S1 + 144) =
                prefactor_x * *(b + 57 * OS1_S1 + 108) -
                p_over_q * *(b + 85 * OS1_S1 + 108) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 108) +
                one_over_two_q * *(b + 57 * OS1_S1 + 80);
            *(b + 57 * OS1_S1 + 145) =
                prefactor_y * *(b + 57 * OS1_S1 + 103) -
                p_over_q * *(b + 87 * OS1_S1 + 103) +
                one_over_two_q * *(b + 35 * OS1_S1 + 103) +
                one_over_two_q * *(b + 57 * OS1_S1 + 70);
            *(b + 57 * OS1_S1 + 146) =
                prefactor_y * *(b + 57 * OS1_S1 + 104) -
                p_over_q * *(b + 87 * OS1_S1 + 104) +
                one_over_two_q * *(b + 35 * OS1_S1 + 104);
            *(b + 57 * OS1_S1 + 147) =
                prefactor_x * *(b + 57 * OS1_S1 + 111) -
                p_over_q * *(b + 85 * OS1_S1 + 111) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 111) +
                one_over_two_q * *(b + 57 * OS1_S1 + 83);
            *(b + 57 * OS1_S1 + 148) =
                prefactor_x * *(b + 57 * OS1_S1 + 112) -
                p_over_q * *(b + 85 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 112);
            *(b + 57 * OS1_S1 + 149) = prefactor_z * *(b + 57 * OS1_S1 + 105) -
                                       p_over_q * *(b + 88 * OS1_S1 + 105);
            *(b + 57 * OS1_S1 + 150) =
                prefactor_x * *(b + 57 * OS1_S1 + 114) -
                p_over_q * *(b + 85 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 114);
            *(b + 57 * OS1_S1 + 151) =
                prefactor_x * *(b + 57 * OS1_S1 + 115) -
                p_over_q * *(b + 85 * OS1_S1 + 115) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 115);
            *(b + 57 * OS1_S1 + 152) =
                prefactor_x * *(b + 57 * OS1_S1 + 116) -
                p_over_q * *(b + 85 * OS1_S1 + 116) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 116);
            *(b + 57 * OS1_S1 + 153) =
                prefactor_x * *(b + 57 * OS1_S1 + 117) -
                p_over_q * *(b + 85 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 117);
            *(b + 57 * OS1_S1 + 154) =
                prefactor_y * *(b + 57 * OS1_S1 + 111) -
                p_over_q * *(b + 87 * OS1_S1 + 111) +
                one_over_two_q * *(b + 35 * OS1_S1 + 111);
            *(b + 57 * OS1_S1 + 155) =
                prefactor_x * *(b + 57 * OS1_S1 + 119) -
                p_over_q * *(b + 85 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 36 * OS1_S1 + 119);
            *(b + 57 * OS1_S1 + 156) =
                prefactor_y * *(b + 57 * OS1_S1 + 112) -
                p_over_q * *(b + 87 * OS1_S1 + 112) +
                one_over_two_q * *(b + 35 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 57 * OS1_S1 + 77);
            *(b + 57 * OS1_S1 + 157) = prefactor_z * *(b + 57 * OS1_S1 + 112) -
                                       p_over_q * *(b + 88 * OS1_S1 + 112);
            *(b + 57 * OS1_S1 + 158) = prefactor_z * *(b + 57 * OS1_S1 + 113) -
                                       p_over_q * *(b + 88 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 77);
            *(b + 57 * OS1_S1 + 159) =
                prefactor_z * *(b + 57 * OS1_S1 + 114) -
                p_over_q * *(b + 88 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 78);
            *(b + 57 * OS1_S1 + 160) =
                prefactor_z * *(b + 57 * OS1_S1 + 115) -
                p_over_q * *(b + 88 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 57 * OS1_S1 + 79);
            *(b + 57 * OS1_S1 + 161) =
                prefactor_y * *(b + 57 * OS1_S1 + 117) -
                p_over_q * *(b + 87 * OS1_S1 + 117) +
                one_over_two_q * *(b + 35 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 82);
            *(b + 57 * OS1_S1 + 162) =
                prefactor_y * *(b + 57 * OS1_S1 + 118) -
                p_over_q * *(b + 87 * OS1_S1 + 118) +
                one_over_two_q * *(b + 35 * OS1_S1 + 118) +
                one_over_two_q * *(b + 57 * OS1_S1 + 83);
            *(b + 57 * OS1_S1 + 163) =
                prefactor_y * *(b + 57 * OS1_S1 + 119) -
                p_over_q * *(b + 87 * OS1_S1 + 119) +
                one_over_two_q * *(b + 35 * OS1_S1 + 119);
            *(b + 57 * OS1_S1 + 164) =
                prefactor_z * *(b + 57 * OS1_S1 + 119) -
                p_over_q * *(b + 88 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 57 * OS1_S1 + 83);
            *(b + 58 * OS1_S1 + 120) =
                prefactor_x * *(b + 58 * OS1_S1 + 84) -
                p_over_q * *(b + 86 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 58 * OS1_S1 + 56);
            *(b + 58 * OS1_S1 + 121) = prefactor_y * *(b + 58 * OS1_S1 + 84) -
                                       p_over_q * *(b + 88 * OS1_S1 + 84);
            *(b + 58 * OS1_S1 + 122) = prefactor_z * *(b + 58 * OS1_S1 + 84) -
                                       p_over_q * *(b + 89 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 84);
            *(b + 58 * OS1_S1 + 123) = prefactor_y * *(b + 58 * OS1_S1 + 85) -
                                       p_over_q * *(b + 88 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 56);
            *(b + 58 * OS1_S1 + 124) = prefactor_y * *(b + 58 * OS1_S1 + 86) -
                                       p_over_q * *(b + 88 * OS1_S1 + 86);
            *(b + 58 * OS1_S1 + 125) =
                prefactor_z * *(b + 58 * OS1_S1 + 86) -
                p_over_q * *(b + 89 * OS1_S1 + 86) +
                one_over_two_q * *(b + 35 * OS1_S1 + 86) +
                one_over_two_q * *(b + 58 * OS1_S1 + 56);
            *(b + 58 * OS1_S1 + 126) =
                prefactor_y * *(b + 58 * OS1_S1 + 87) -
                p_over_q * *(b + 88 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 57);
            *(b + 58 * OS1_S1 + 127) = prefactor_z * *(b + 58 * OS1_S1 + 87) -
                                       p_over_q * *(b + 89 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 87);
            *(b + 58 * OS1_S1 + 128) = prefactor_y * *(b + 58 * OS1_S1 + 89) -
                                       p_over_q * *(b + 88 * OS1_S1 + 89);
            *(b + 58 * OS1_S1 + 129) =
                prefactor_z * *(b + 58 * OS1_S1 + 89) -
                p_over_q * *(b + 89 * OS1_S1 + 89) +
                one_over_two_q * *(b + 35 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 58);
            *(b + 58 * OS1_S1 + 130) =
                prefactor_y * *(b + 58 * OS1_S1 + 90) -
                p_over_q * *(b + 88 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 58 * OS1_S1 + 59);
            *(b + 58 * OS1_S1 + 131) = prefactor_z * *(b + 58 * OS1_S1 + 90) -
                                       p_over_q * *(b + 89 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 90);
            *(b + 58 * OS1_S1 + 132) = prefactor_y * *(b + 58 * OS1_S1 + 92) -
                                       p_over_q * *(b + 88 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 61);
            *(b + 58 * OS1_S1 + 133) = prefactor_y * *(b + 58 * OS1_S1 + 93) -
                                       p_over_q * *(b + 88 * OS1_S1 + 93);
            *(b + 58 * OS1_S1 + 134) =
                prefactor_z * *(b + 58 * OS1_S1 + 93) -
                p_over_q * *(b + 89 * OS1_S1 + 93) +
                one_over_two_q * *(b + 35 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 58 * OS1_S1 + 61);
            *(b + 58 * OS1_S1 + 135) =
                prefactor_x * *(b + 58 * OS1_S1 + 99) -
                p_over_q * *(b + 86 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 71);
            *(b + 58 * OS1_S1 + 136) = prefactor_z * *(b + 58 * OS1_S1 + 94) -
                                       p_over_q * *(b + 89 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 94);
            *(b + 58 * OS1_S1 + 137) =
                prefactor_z * *(b + 58 * OS1_S1 + 95) -
                p_over_q * *(b + 89 * OS1_S1 + 95) +
                one_over_two_q * *(b + 35 * OS1_S1 + 95) +
                one_over_two_q * *(b + 58 * OS1_S1 + 62);
            *(b + 58 * OS1_S1 + 138) = prefactor_y * *(b + 58 * OS1_S1 + 97) -
                                       p_over_q * *(b + 88 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 65);
            *(b + 58 * OS1_S1 + 139) = prefactor_y * *(b + 58 * OS1_S1 + 98) -
                                       p_over_q * *(b + 88 * OS1_S1 + 98);
            *(b + 58 * OS1_S1 + 140) =
                prefactor_x * *(b + 58 * OS1_S1 + 104) -
                p_over_q * *(b + 86 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 76);
            *(b + 58 * OS1_S1 + 141) =
                prefactor_x * *(b + 58 * OS1_S1 + 105) -
                p_over_q * *(b + 86 * OS1_S1 + 105) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 105) +
                one_over_two_q * *(b + 58 * OS1_S1 + 77);
            *(b + 58 * OS1_S1 + 142) = prefactor_z * *(b + 58 * OS1_S1 + 99) -
                                       p_over_q * *(b + 89 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 99);
            *(b + 58 * OS1_S1 + 143) =
                prefactor_z * *(b + 58 * OS1_S1 + 100) -
                p_over_q * *(b + 89 * OS1_S1 + 100) +
                one_over_two_q * *(b + 35 * OS1_S1 + 100) +
                one_over_two_q * *(b + 58 * OS1_S1 + 66);
            *(b + 58 * OS1_S1 + 144) =
                prefactor_x * *(b + 58 * OS1_S1 + 108) -
                p_over_q * *(b + 86 * OS1_S1 + 108) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 108) +
                one_over_two_q * *(b + 58 * OS1_S1 + 80);
            *(b + 58 * OS1_S1 + 145) = prefactor_y * *(b + 58 * OS1_S1 + 103) -
                                       p_over_q * *(b + 88 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 70);
            *(b + 58 * OS1_S1 + 146) = prefactor_y * *(b + 58 * OS1_S1 + 104) -
                                       p_over_q * *(b + 88 * OS1_S1 + 104);
            *(b + 58 * OS1_S1 + 147) =
                prefactor_x * *(b + 58 * OS1_S1 + 111) -
                p_over_q * *(b + 86 * OS1_S1 + 111) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 111) +
                one_over_two_q * *(b + 58 * OS1_S1 + 83);
            *(b + 58 * OS1_S1 + 148) =
                prefactor_x * *(b + 58 * OS1_S1 + 112) -
                p_over_q * *(b + 86 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 112);
            *(b + 58 * OS1_S1 + 149) =
                prefactor_z * *(b + 58 * OS1_S1 + 105) -
                p_over_q * *(b + 89 * OS1_S1 + 105) +
                one_over_two_q * *(b + 35 * OS1_S1 + 105);
            *(b + 58 * OS1_S1 + 150) =
                prefactor_x * *(b + 58 * OS1_S1 + 114) -
                p_over_q * *(b + 86 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 114);
            *(b + 58 * OS1_S1 + 151) =
                prefactor_x * *(b + 58 * OS1_S1 + 115) -
                p_over_q * *(b + 86 * OS1_S1 + 115) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 115);
            *(b + 58 * OS1_S1 + 152) =
                prefactor_x * *(b + 58 * OS1_S1 + 116) -
                p_over_q * *(b + 86 * OS1_S1 + 116) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 116);
            *(b + 58 * OS1_S1 + 153) =
                prefactor_x * *(b + 58 * OS1_S1 + 117) -
                p_over_q * *(b + 86 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 117);
            *(b + 58 * OS1_S1 + 154) = prefactor_y * *(b + 58 * OS1_S1 + 111) -
                                       p_over_q * *(b + 88 * OS1_S1 + 111);
            *(b + 58 * OS1_S1 + 155) =
                prefactor_x * *(b + 58 * OS1_S1 + 119) -
                p_over_q * *(b + 86 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 37 * OS1_S1 + 119);
            *(b + 58 * OS1_S1 + 156) =
                prefactor_y * *(b + 58 * OS1_S1 + 112) -
                p_over_q * *(b + 88 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 58 * OS1_S1 + 77);
            *(b + 58 * OS1_S1 + 157) =
                prefactor_z * *(b + 58 * OS1_S1 + 112) -
                p_over_q * *(b + 89 * OS1_S1 + 112) +
                one_over_two_q * *(b + 35 * OS1_S1 + 112);
            *(b + 58 * OS1_S1 + 158) =
                prefactor_z * *(b + 58 * OS1_S1 + 113) -
                p_over_q * *(b + 89 * OS1_S1 + 113) +
                one_over_two_q * *(b + 35 * OS1_S1 + 113) +
                one_over_two_q * *(b + 58 * OS1_S1 + 77);
            *(b + 58 * OS1_S1 + 159) =
                prefactor_z * *(b + 58 * OS1_S1 + 114) -
                p_over_q * *(b + 89 * OS1_S1 + 114) +
                one_over_two_q * *(b + 35 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 78);
            *(b + 58 * OS1_S1 + 160) =
                prefactor_y * *(b + 58 * OS1_S1 + 116) -
                p_over_q * *(b + 88 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 58 * OS1_S1 + 81);
            *(b + 58 * OS1_S1 + 161) =
                prefactor_y * *(b + 58 * OS1_S1 + 117) -
                p_over_q * *(b + 88 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 82);
            *(b + 58 * OS1_S1 + 162) = prefactor_y * *(b + 58 * OS1_S1 + 118) -
                                       p_over_q * *(b + 88 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 83);
            *(b + 58 * OS1_S1 + 163) = prefactor_y * *(b + 58 * OS1_S1 + 119) -
                                       p_over_q * *(b + 88 * OS1_S1 + 119);
            *(b + 58 * OS1_S1 + 164) =
                prefactor_z * *(b + 58 * OS1_S1 + 119) -
                p_over_q * *(b + 89 * OS1_S1 + 119) +
                one_over_two_q * *(b + 35 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 58 * OS1_S1 + 83);
            *(b + 59 * OS1_S1 + 120) =
                prefactor_x * *(b + 59 * OS1_S1 + 84) -
                p_over_q * *(b + 87 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 59 * OS1_S1 + 56);
            *(b + 59 * OS1_S1 + 121) =
                prefactor_y * *(b + 59 * OS1_S1 + 84) -
                p_over_q * *(b + 90 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 84);
            *(b + 59 * OS1_S1 + 122) = prefactor_z * *(b + 59 * OS1_S1 + 84) -
                                       p_over_q * *(b + 91 * OS1_S1 + 84);
            *(b + 59 * OS1_S1 + 123) =
                prefactor_y * *(b + 59 * OS1_S1 + 85) -
                p_over_q * *(b + 90 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 85) +
                one_over_two_q * *(b + 59 * OS1_S1 + 56);
            *(b + 59 * OS1_S1 + 124) = prefactor_z * *(b + 59 * OS1_S1 + 85) -
                                       p_over_q * *(b + 91 * OS1_S1 + 85);
            *(b + 59 * OS1_S1 + 125) = prefactor_z * *(b + 59 * OS1_S1 + 86) -
                                       p_over_q * *(b + 91 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 56);
            *(b + 59 * OS1_S1 + 126) =
                prefactor_y * *(b + 59 * OS1_S1 + 87) -
                p_over_q * *(b + 90 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 57);
            *(b + 59 * OS1_S1 + 127) = prefactor_z * *(b + 59 * OS1_S1 + 87) -
                                       p_over_q * *(b + 91 * OS1_S1 + 87);
            *(b + 59 * OS1_S1 + 128) =
                prefactor_y * *(b + 59 * OS1_S1 + 89) -
                p_over_q * *(b + 90 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 89);
            *(b + 59 * OS1_S1 + 129) =
                prefactor_z * *(b + 59 * OS1_S1 + 89) -
                p_over_q * *(b + 91 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 58);
            *(b + 59 * OS1_S1 + 130) =
                prefactor_y * *(b + 59 * OS1_S1 + 90) -
                p_over_q * *(b + 90 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 59);
            *(b + 59 * OS1_S1 + 131) = prefactor_z * *(b + 59 * OS1_S1 + 90) -
                                       p_over_q * *(b + 91 * OS1_S1 + 90);
            *(b + 59 * OS1_S1 + 132) = prefactor_z * *(b + 59 * OS1_S1 + 91) -
                                       p_over_q * *(b + 91 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 59);
            *(b + 59 * OS1_S1 + 133) =
                prefactor_y * *(b + 59 * OS1_S1 + 93) -
                p_over_q * *(b + 90 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 93);
            *(b + 59 * OS1_S1 + 134) =
                prefactor_z * *(b + 59 * OS1_S1 + 93) -
                p_over_q * *(b + 91 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 61);
            *(b + 59 * OS1_S1 + 135) =
                prefactor_x * *(b + 59 * OS1_S1 + 99) -
                p_over_q * *(b + 87 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 71);
            *(b + 59 * OS1_S1 + 136) = prefactor_z * *(b + 59 * OS1_S1 + 94) -
                                       p_over_q * *(b + 91 * OS1_S1 + 94);
            *(b + 59 * OS1_S1 + 137) = prefactor_z * *(b + 59 * OS1_S1 + 95) -
                                       p_over_q * *(b + 91 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 62);
            *(b + 59 * OS1_S1 + 138) =
                prefactor_y * *(b + 59 * OS1_S1 + 97) -
                p_over_q * *(b + 90 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 97) +
                one_over_two_q * *(b + 59 * OS1_S1 + 65);
            *(b + 59 * OS1_S1 + 139) =
                prefactor_y * *(b + 59 * OS1_S1 + 98) -
                p_over_q * *(b + 90 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 98);
            *(b + 59 * OS1_S1 + 140) =
                prefactor_x * *(b + 59 * OS1_S1 + 104) -
                p_over_q * *(b + 87 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 76);
            *(b + 59 * OS1_S1 + 141) =
                prefactor_x * *(b + 59 * OS1_S1 + 105) -
                p_over_q * *(b + 87 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 105) +
                one_over_two_q * *(b + 59 * OS1_S1 + 77);
            *(b + 59 * OS1_S1 + 142) = prefactor_z * *(b + 59 * OS1_S1 + 99) -
                                       p_over_q * *(b + 91 * OS1_S1 + 99);
            *(b + 59 * OS1_S1 + 143) = prefactor_z * *(b + 59 * OS1_S1 + 100) -
                                       p_over_q * *(b + 91 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 66);
            *(b + 59 * OS1_S1 + 144) =
                prefactor_x * *(b + 59 * OS1_S1 + 108) -
                p_over_q * *(b + 87 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 108) +
                one_over_two_q * *(b + 59 * OS1_S1 + 80);
            *(b + 59 * OS1_S1 + 145) =
                prefactor_y * *(b + 59 * OS1_S1 + 103) -
                p_over_q * *(b + 90 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 103) +
                one_over_two_q * *(b + 59 * OS1_S1 + 70);
            *(b + 59 * OS1_S1 + 146) =
                prefactor_y * *(b + 59 * OS1_S1 + 104) -
                p_over_q * *(b + 90 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 104);
            *(b + 59 * OS1_S1 + 147) =
                prefactor_x * *(b + 59 * OS1_S1 + 111) -
                p_over_q * *(b + 87 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 111) +
                one_over_two_q * *(b + 59 * OS1_S1 + 83);
            *(b + 59 * OS1_S1 + 148) =
                prefactor_x * *(b + 59 * OS1_S1 + 112) -
                p_over_q * *(b + 87 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 112);
            *(b + 59 * OS1_S1 + 149) = prefactor_z * *(b + 59 * OS1_S1 + 105) -
                                       p_over_q * *(b + 91 * OS1_S1 + 105);
            *(b + 59 * OS1_S1 + 150) =
                prefactor_x * *(b + 59 * OS1_S1 + 114) -
                p_over_q * *(b + 87 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 114);
            *(b + 59 * OS1_S1 + 151) =
                prefactor_x * *(b + 59 * OS1_S1 + 115) -
                p_over_q * *(b + 87 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 115);
            *(b + 59 * OS1_S1 + 152) =
                prefactor_x * *(b + 59 * OS1_S1 + 116) -
                p_over_q * *(b + 87 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 116);
            *(b + 59 * OS1_S1 + 153) =
                prefactor_x * *(b + 59 * OS1_S1 + 117) -
                p_over_q * *(b + 87 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 117);
            *(b + 59 * OS1_S1 + 154) =
                prefactor_y * *(b + 59 * OS1_S1 + 111) -
                p_over_q * *(b + 90 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 111);
            *(b + 59 * OS1_S1 + 155) =
                prefactor_x * *(b + 59 * OS1_S1 + 119) -
                p_over_q * *(b + 87 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 38 * OS1_S1 + 119);
            *(b + 59 * OS1_S1 + 156) =
                prefactor_y * *(b + 59 * OS1_S1 + 112) -
                p_over_q * *(b + 90 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 59 * OS1_S1 + 77);
            *(b + 59 * OS1_S1 + 157) = prefactor_z * *(b + 59 * OS1_S1 + 112) -
                                       p_over_q * *(b + 91 * OS1_S1 + 112);
            *(b + 59 * OS1_S1 + 158) = prefactor_z * *(b + 59 * OS1_S1 + 113) -
                                       p_over_q * *(b + 91 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 77);
            *(b + 59 * OS1_S1 + 159) =
                prefactor_z * *(b + 59 * OS1_S1 + 114) -
                p_over_q * *(b + 91 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 78);
            *(b + 59 * OS1_S1 + 160) =
                prefactor_z * *(b + 59 * OS1_S1 + 115) -
                p_over_q * *(b + 91 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 79);
            *(b + 59 * OS1_S1 + 161) =
                prefactor_y * *(b + 59 * OS1_S1 + 117) -
                p_over_q * *(b + 90 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 59 * OS1_S1 + 82);
            *(b + 59 * OS1_S1 + 162) =
                prefactor_y * *(b + 59 * OS1_S1 + 118) -
                p_over_q * *(b + 90 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 118) +
                one_over_two_q * *(b + 59 * OS1_S1 + 83);
            *(b + 59 * OS1_S1 + 163) =
                prefactor_y * *(b + 59 * OS1_S1 + 119) -
                p_over_q * *(b + 90 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 119);
            *(b + 59 * OS1_S1 + 164) =
                prefactor_z * *(b + 59 * OS1_S1 + 119) -
                p_over_q * *(b + 91 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 59 * OS1_S1 + 83);
            *(b + 60 * OS1_S1 + 120) =
                prefactor_x * *(b + 60 * OS1_S1 + 84) -
                p_over_q * *(b + 88 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 60 * OS1_S1 + 56);
            *(b + 60 * OS1_S1 + 121) = prefactor_y * *(b + 60 * OS1_S1 + 84) -
                                       p_over_q * *(b + 91 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 84);
            *(b + 60 * OS1_S1 + 122) = prefactor_z * *(b + 60 * OS1_S1 + 84) -
                                       p_over_q * *(b + 92 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 84);
            *(b + 60 * OS1_S1 + 123) =
                prefactor_y * *(b + 60 * OS1_S1 + 85) -
                p_over_q * *(b + 91 * OS1_S1 + 85) +
                one_over_two_q * *(b + 37 * OS1_S1 + 85) +
                one_over_two_q * *(b + 60 * OS1_S1 + 56);
            *(b + 60 * OS1_S1 + 124) = prefactor_z * *(b + 60 * OS1_S1 + 85) -
                                       p_over_q * *(b + 92 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 85);
            *(b + 60 * OS1_S1 + 125) =
                prefactor_z * *(b + 60 * OS1_S1 + 86) -
                p_over_q * *(b + 92 * OS1_S1 + 86) +
                one_over_two_q * *(b + 36 * OS1_S1 + 86) +
                one_over_two_q * *(b + 60 * OS1_S1 + 56);
            *(b + 60 * OS1_S1 + 126) =
                prefactor_y * *(b + 60 * OS1_S1 + 87) -
                p_over_q * *(b + 91 * OS1_S1 + 87) +
                one_over_two_q * *(b + 37 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 57);
            *(b + 60 * OS1_S1 + 127) = prefactor_z * *(b + 60 * OS1_S1 + 87) -
                                       p_over_q * *(b + 92 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 87);
            *(b + 60 * OS1_S1 + 128) = prefactor_y * *(b + 60 * OS1_S1 + 89) -
                                       p_over_q * *(b + 91 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 89);
            *(b + 60 * OS1_S1 + 129) =
                prefactor_z * *(b + 60 * OS1_S1 + 89) -
                p_over_q * *(b + 92 * OS1_S1 + 89) +
                one_over_two_q * *(b + 36 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 58);
            *(b + 60 * OS1_S1 + 130) =
                prefactor_y * *(b + 60 * OS1_S1 + 90) -
                p_over_q * *(b + 91 * OS1_S1 + 90) +
                one_over_two_q * *(b + 37 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 60 * OS1_S1 + 59);
            *(b + 60 * OS1_S1 + 131) = prefactor_z * *(b + 60 * OS1_S1 + 90) -
                                       p_over_q * *(b + 92 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 90);
            *(b + 60 * OS1_S1 + 132) =
                prefactor_z * *(b + 60 * OS1_S1 + 91) -
                p_over_q * *(b + 92 * OS1_S1 + 91) +
                one_over_two_q * *(b + 36 * OS1_S1 + 91) +
                one_over_two_q * *(b + 60 * OS1_S1 + 59);
            *(b + 60 * OS1_S1 + 133) = prefactor_y * *(b + 60 * OS1_S1 + 93) -
                                       p_over_q * *(b + 91 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 93);
            *(b + 60 * OS1_S1 + 134) =
                prefactor_z * *(b + 60 * OS1_S1 + 93) -
                p_over_q * *(b + 92 * OS1_S1 + 93) +
                one_over_two_q * *(b + 36 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 60 * OS1_S1 + 61);
            *(b + 60 * OS1_S1 + 135) =
                prefactor_x * *(b + 60 * OS1_S1 + 99) -
                p_over_q * *(b + 88 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 71);
            *(b + 60 * OS1_S1 + 136) = prefactor_z * *(b + 60 * OS1_S1 + 94) -
                                       p_over_q * *(b + 92 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 94);
            *(b + 60 * OS1_S1 + 137) =
                prefactor_z * *(b + 60 * OS1_S1 + 95) -
                p_over_q * *(b + 92 * OS1_S1 + 95) +
                one_over_two_q * *(b + 36 * OS1_S1 + 95) +
                one_over_two_q * *(b + 60 * OS1_S1 + 62);
            *(b + 60 * OS1_S1 + 138) =
                prefactor_y * *(b + 60 * OS1_S1 + 97) -
                p_over_q * *(b + 91 * OS1_S1 + 97) +
                one_over_two_q * *(b + 37 * OS1_S1 + 97) +
                one_over_two_q * *(b + 60 * OS1_S1 + 65);
            *(b + 60 * OS1_S1 + 139) = prefactor_y * *(b + 60 * OS1_S1 + 98) -
                                       p_over_q * *(b + 91 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 98);
            *(b + 60 * OS1_S1 + 140) =
                prefactor_x * *(b + 60 * OS1_S1 + 104) -
                p_over_q * *(b + 88 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 76);
            *(b + 60 * OS1_S1 + 141) =
                prefactor_x * *(b + 60 * OS1_S1 + 105) -
                p_over_q * *(b + 88 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 105) +
                one_over_two_q * *(b + 60 * OS1_S1 + 77);
            *(b + 60 * OS1_S1 + 142) = prefactor_z * *(b + 60 * OS1_S1 + 99) -
                                       p_over_q * *(b + 92 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 99);
            *(b + 60 * OS1_S1 + 143) =
                prefactor_z * *(b + 60 * OS1_S1 + 100) -
                p_over_q * *(b + 92 * OS1_S1 + 100) +
                one_over_two_q * *(b + 36 * OS1_S1 + 100) +
                one_over_two_q * *(b + 60 * OS1_S1 + 66);
            *(b + 60 * OS1_S1 + 144) =
                prefactor_x * *(b + 60 * OS1_S1 + 108) -
                p_over_q * *(b + 88 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 108) +
                one_over_two_q * *(b + 60 * OS1_S1 + 80);
            *(b + 60 * OS1_S1 + 145) =
                prefactor_y * *(b + 60 * OS1_S1 + 103) -
                p_over_q * *(b + 91 * OS1_S1 + 103) +
                one_over_two_q * *(b + 37 * OS1_S1 + 103) +
                one_over_two_q * *(b + 60 * OS1_S1 + 70);
            *(b + 60 * OS1_S1 + 146) =
                prefactor_y * *(b + 60 * OS1_S1 + 104) -
                p_over_q * *(b + 91 * OS1_S1 + 104) +
                one_over_two_q * *(b + 37 * OS1_S1 + 104);
            *(b + 60 * OS1_S1 + 147) =
                prefactor_x * *(b + 60 * OS1_S1 + 111) -
                p_over_q * *(b + 88 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 111) +
                one_over_two_q * *(b + 60 * OS1_S1 + 83);
            *(b + 60 * OS1_S1 + 148) =
                prefactor_x * *(b + 60 * OS1_S1 + 112) -
                p_over_q * *(b + 88 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 112);
            *(b + 60 * OS1_S1 + 149) =
                prefactor_z * *(b + 60 * OS1_S1 + 105) -
                p_over_q * *(b + 92 * OS1_S1 + 105) +
                one_over_two_q * *(b + 36 * OS1_S1 + 105);
            *(b + 60 * OS1_S1 + 150) =
                prefactor_x * *(b + 60 * OS1_S1 + 114) -
                p_over_q * *(b + 88 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 114);
            *(b + 60 * OS1_S1 + 151) =
                prefactor_x * *(b + 60 * OS1_S1 + 115) -
                p_over_q * *(b + 88 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 115);
            *(b + 60 * OS1_S1 + 152) =
                prefactor_x * *(b + 60 * OS1_S1 + 116) -
                p_over_q * *(b + 88 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 116);
            *(b + 60 * OS1_S1 + 153) =
                prefactor_x * *(b + 60 * OS1_S1 + 117) -
                p_over_q * *(b + 88 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 117);
            *(b + 60 * OS1_S1 + 154) =
                prefactor_y * *(b + 60 * OS1_S1 + 111) -
                p_over_q * *(b + 91 * OS1_S1 + 111) +
                one_over_two_q * *(b + 37 * OS1_S1 + 111);
            *(b + 60 * OS1_S1 + 155) =
                prefactor_x * *(b + 60 * OS1_S1 + 119) -
                p_over_q * *(b + 88 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 39 * OS1_S1 + 119);
            *(b + 60 * OS1_S1 + 156) =
                prefactor_y * *(b + 60 * OS1_S1 + 112) -
                p_over_q * *(b + 91 * OS1_S1 + 112) +
                one_over_two_q * *(b + 37 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 60 * OS1_S1 + 77);
            *(b + 60 * OS1_S1 + 157) =
                prefactor_z * *(b + 60 * OS1_S1 + 112) -
                p_over_q * *(b + 92 * OS1_S1 + 112) +
                one_over_two_q * *(b + 36 * OS1_S1 + 112);
            *(b + 60 * OS1_S1 + 158) =
                prefactor_z * *(b + 60 * OS1_S1 + 113) -
                p_over_q * *(b + 92 * OS1_S1 + 113) +
                one_over_two_q * *(b + 36 * OS1_S1 + 113) +
                one_over_two_q * *(b + 60 * OS1_S1 + 77);
            *(b + 60 * OS1_S1 + 159) =
                prefactor_z * *(b + 60 * OS1_S1 + 114) -
                p_over_q * *(b + 92 * OS1_S1 + 114) +
                one_over_two_q * *(b + 36 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 78);
            *(b + 60 * OS1_S1 + 160) =
                prefactor_z * *(b + 60 * OS1_S1 + 115) -
                p_over_q * *(b + 92 * OS1_S1 + 115) +
                one_over_two_q * *(b + 36 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 60 * OS1_S1 + 79);
            *(b + 60 * OS1_S1 + 161) =
                prefactor_y * *(b + 60 * OS1_S1 + 117) -
                p_over_q * *(b + 91 * OS1_S1 + 117) +
                one_over_two_q * *(b + 37 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 82);
            *(b + 60 * OS1_S1 + 162) =
                prefactor_y * *(b + 60 * OS1_S1 + 118) -
                p_over_q * *(b + 91 * OS1_S1 + 118) +
                one_over_two_q * *(b + 37 * OS1_S1 + 118) +
                one_over_two_q * *(b + 60 * OS1_S1 + 83);
            *(b + 60 * OS1_S1 + 163) =
                prefactor_y * *(b + 60 * OS1_S1 + 119) -
                p_over_q * *(b + 91 * OS1_S1 + 119) +
                one_over_two_q * *(b + 37 * OS1_S1 + 119);
            *(b + 60 * OS1_S1 + 164) =
                prefactor_z * *(b + 60 * OS1_S1 + 119) -
                p_over_q * *(b + 92 * OS1_S1 + 119) +
                one_over_two_q * *(b + 36 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 60 * OS1_S1 + 83);
            *(b + 61 * OS1_S1 + 120) =
                prefactor_x * *(b + 61 * OS1_S1 + 84) -
                p_over_q * *(b + 89 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 61 * OS1_S1 + 56);
            *(b + 61 * OS1_S1 + 121) = prefactor_y * *(b + 61 * OS1_S1 + 84) -
                                       p_over_q * *(b + 92 * OS1_S1 + 84);
            *(b + 61 * OS1_S1 + 122) =
                prefactor_z * *(b + 61 * OS1_S1 + 84) -
                p_over_q * *(b + 93 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 84);
            *(b + 61 * OS1_S1 + 123) = prefactor_y * *(b + 61 * OS1_S1 + 85) -
                                       p_over_q * *(b + 92 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 56);
            *(b + 61 * OS1_S1 + 124) = prefactor_y * *(b + 61 * OS1_S1 + 86) -
                                       p_over_q * *(b + 92 * OS1_S1 + 86);
            *(b + 61 * OS1_S1 + 125) =
                prefactor_z * *(b + 61 * OS1_S1 + 86) -
                p_over_q * *(b + 93 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 86) +
                one_over_two_q * *(b + 61 * OS1_S1 + 56);
            *(b + 61 * OS1_S1 + 126) =
                prefactor_y * *(b + 61 * OS1_S1 + 87) -
                p_over_q * *(b + 92 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 57);
            *(b + 61 * OS1_S1 + 127) =
                prefactor_z * *(b + 61 * OS1_S1 + 87) -
                p_over_q * *(b + 93 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 87);
            *(b + 61 * OS1_S1 + 128) = prefactor_y * *(b + 61 * OS1_S1 + 89) -
                                       p_over_q * *(b + 92 * OS1_S1 + 89);
            *(b + 61 * OS1_S1 + 129) =
                prefactor_z * *(b + 61 * OS1_S1 + 89) -
                p_over_q * *(b + 93 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 58);
            *(b + 61 * OS1_S1 + 130) =
                prefactor_y * *(b + 61 * OS1_S1 + 90) -
                p_over_q * *(b + 92 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 59);
            *(b + 61 * OS1_S1 + 131) =
                prefactor_z * *(b + 61 * OS1_S1 + 90) -
                p_over_q * *(b + 93 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 90);
            *(b + 61 * OS1_S1 + 132) = prefactor_y * *(b + 61 * OS1_S1 + 92) -
                                       p_over_q * *(b + 92 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 61);
            *(b + 61 * OS1_S1 + 133) = prefactor_y * *(b + 61 * OS1_S1 + 93) -
                                       p_over_q * *(b + 92 * OS1_S1 + 93);
            *(b + 61 * OS1_S1 + 134) =
                prefactor_z * *(b + 61 * OS1_S1 + 93) -
                p_over_q * *(b + 93 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 61);
            *(b + 61 * OS1_S1 + 135) =
                prefactor_x * *(b + 61 * OS1_S1 + 99) -
                p_over_q * *(b + 89 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 71);
            *(b + 61 * OS1_S1 + 136) =
                prefactor_z * *(b + 61 * OS1_S1 + 94) -
                p_over_q * *(b + 93 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 94);
            *(b + 61 * OS1_S1 + 137) =
                prefactor_z * *(b + 61 * OS1_S1 + 95) -
                p_over_q * *(b + 93 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 95) +
                one_over_two_q * *(b + 61 * OS1_S1 + 62);
            *(b + 61 * OS1_S1 + 138) = prefactor_y * *(b + 61 * OS1_S1 + 97) -
                                       p_over_q * *(b + 92 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 65);
            *(b + 61 * OS1_S1 + 139) = prefactor_y * *(b + 61 * OS1_S1 + 98) -
                                       p_over_q * *(b + 92 * OS1_S1 + 98);
            *(b + 61 * OS1_S1 + 140) =
                prefactor_x * *(b + 61 * OS1_S1 + 104) -
                p_over_q * *(b + 89 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 76);
            *(b + 61 * OS1_S1 + 141) =
                prefactor_x * *(b + 61 * OS1_S1 + 105) -
                p_over_q * *(b + 89 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 105) +
                one_over_two_q * *(b + 61 * OS1_S1 + 77);
            *(b + 61 * OS1_S1 + 142) =
                prefactor_z * *(b + 61 * OS1_S1 + 99) -
                p_over_q * *(b + 93 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 99);
            *(b + 61 * OS1_S1 + 143) =
                prefactor_z * *(b + 61 * OS1_S1 + 100) -
                p_over_q * *(b + 93 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 100) +
                one_over_two_q * *(b + 61 * OS1_S1 + 66);
            *(b + 61 * OS1_S1 + 144) =
                prefactor_x * *(b + 61 * OS1_S1 + 108) -
                p_over_q * *(b + 89 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 108) +
                one_over_two_q * *(b + 61 * OS1_S1 + 80);
            *(b + 61 * OS1_S1 + 145) = prefactor_y * *(b + 61 * OS1_S1 + 103) -
                                       p_over_q * *(b + 92 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 70);
            *(b + 61 * OS1_S1 + 146) = prefactor_y * *(b + 61 * OS1_S1 + 104) -
                                       p_over_q * *(b + 92 * OS1_S1 + 104);
            *(b + 61 * OS1_S1 + 147) =
                prefactor_x * *(b + 61 * OS1_S1 + 111) -
                p_over_q * *(b + 89 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 111) +
                one_over_two_q * *(b + 61 * OS1_S1 + 83);
            *(b + 61 * OS1_S1 + 148) =
                prefactor_x * *(b + 61 * OS1_S1 + 112) -
                p_over_q * *(b + 89 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 112);
            *(b + 61 * OS1_S1 + 149) =
                prefactor_z * *(b + 61 * OS1_S1 + 105) -
                p_over_q * *(b + 93 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 105);
            *(b + 61 * OS1_S1 + 150) =
                prefactor_x * *(b + 61 * OS1_S1 + 114) -
                p_over_q * *(b + 89 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 114);
            *(b + 61 * OS1_S1 + 151) =
                prefactor_x * *(b + 61 * OS1_S1 + 115) -
                p_over_q * *(b + 89 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 115);
            *(b + 61 * OS1_S1 + 152) =
                prefactor_x * *(b + 61 * OS1_S1 + 116) -
                p_over_q * *(b + 89 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 116);
            *(b + 61 * OS1_S1 + 153) =
                prefactor_x * *(b + 61 * OS1_S1 + 117) -
                p_over_q * *(b + 89 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 117);
            *(b + 61 * OS1_S1 + 154) = prefactor_y * *(b + 61 * OS1_S1 + 111) -
                                       p_over_q * *(b + 92 * OS1_S1 + 111);
            *(b + 61 * OS1_S1 + 155) =
                prefactor_x * *(b + 61 * OS1_S1 + 119) -
                p_over_q * *(b + 89 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 40 * OS1_S1 + 119);
            *(b + 61 * OS1_S1 + 156) =
                prefactor_y * *(b + 61 * OS1_S1 + 112) -
                p_over_q * *(b + 92 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 61 * OS1_S1 + 77);
            *(b + 61 * OS1_S1 + 157) =
                prefactor_z * *(b + 61 * OS1_S1 + 112) -
                p_over_q * *(b + 93 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 112);
            *(b + 61 * OS1_S1 + 158) =
                prefactor_z * *(b + 61 * OS1_S1 + 113) -
                p_over_q * *(b + 93 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 113) +
                one_over_two_q * *(b + 61 * OS1_S1 + 77);
            *(b + 61 * OS1_S1 + 159) =
                prefactor_z * *(b + 61 * OS1_S1 + 114) -
                p_over_q * *(b + 93 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 78);
            *(b + 61 * OS1_S1 + 160) =
                prefactor_y * *(b + 61 * OS1_S1 + 116) -
                p_over_q * *(b + 92 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 81);
            *(b + 61 * OS1_S1 + 161) =
                prefactor_y * *(b + 61 * OS1_S1 + 117) -
                p_over_q * *(b + 92 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 61 * OS1_S1 + 82);
            *(b + 61 * OS1_S1 + 162) = prefactor_y * *(b + 61 * OS1_S1 + 118) -
                                       p_over_q * *(b + 92 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 83);
            *(b + 61 * OS1_S1 + 163) = prefactor_y * *(b + 61 * OS1_S1 + 119) -
                                       p_over_q * *(b + 92 * OS1_S1 + 119);
            *(b + 61 * OS1_S1 + 164) =
                prefactor_z * *(b + 61 * OS1_S1 + 119) -
                p_over_q * *(b + 93 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 61 * OS1_S1 + 83);
            *(b + 62 * OS1_S1 + 120) =
                prefactor_x * *(b + 62 * OS1_S1 + 84) -
                p_over_q * *(b + 90 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 62 * OS1_S1 + 56);
            *(b + 62 * OS1_S1 + 121) =
                prefactor_y * *(b + 62 * OS1_S1 + 84) -
                p_over_q * *(b + 94 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 84);
            *(b + 62 * OS1_S1 + 122) = prefactor_z * *(b + 62 * OS1_S1 + 84) -
                                       p_over_q * *(b + 95 * OS1_S1 + 84);
            *(b + 62 * OS1_S1 + 123) =
                prefactor_y * *(b + 62 * OS1_S1 + 85) -
                p_over_q * *(b + 94 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 85) +
                one_over_two_q * *(b + 62 * OS1_S1 + 56);
            *(b + 62 * OS1_S1 + 124) = prefactor_z * *(b + 62 * OS1_S1 + 85) -
                                       p_over_q * *(b + 95 * OS1_S1 + 85);
            *(b + 62 * OS1_S1 + 125) = prefactor_z * *(b + 62 * OS1_S1 + 86) -
                                       p_over_q * *(b + 95 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 56);
            *(b + 62 * OS1_S1 + 126) =
                prefactor_y * *(b + 62 * OS1_S1 + 87) -
                p_over_q * *(b + 94 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 57);
            *(b + 62 * OS1_S1 + 127) = prefactor_z * *(b + 62 * OS1_S1 + 87) -
                                       p_over_q * *(b + 95 * OS1_S1 + 87);
            *(b + 62 * OS1_S1 + 128) =
                prefactor_y * *(b + 62 * OS1_S1 + 89) -
                p_over_q * *(b + 94 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 89);
            *(b + 62 * OS1_S1 + 129) =
                prefactor_z * *(b + 62 * OS1_S1 + 89) -
                p_over_q * *(b + 95 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 58);
            *(b + 62 * OS1_S1 + 130) =
                prefactor_y * *(b + 62 * OS1_S1 + 90) -
                p_over_q * *(b + 94 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 62 * OS1_S1 + 59);
            *(b + 62 * OS1_S1 + 131) = prefactor_z * *(b + 62 * OS1_S1 + 90) -
                                       p_over_q * *(b + 95 * OS1_S1 + 90);
            *(b + 62 * OS1_S1 + 132) = prefactor_z * *(b + 62 * OS1_S1 + 91) -
                                       p_over_q * *(b + 95 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 59);
            *(b + 62 * OS1_S1 + 133) =
                prefactor_y * *(b + 62 * OS1_S1 + 93) -
                p_over_q * *(b + 94 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 93);
            *(b + 62 * OS1_S1 + 134) =
                prefactor_z * *(b + 62 * OS1_S1 + 93) -
                p_over_q * *(b + 95 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 62 * OS1_S1 + 61);
            *(b + 62 * OS1_S1 + 135) =
                prefactor_x * *(b + 62 * OS1_S1 + 99) -
                p_over_q * *(b + 90 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 71);
            *(b + 62 * OS1_S1 + 136) = prefactor_z * *(b + 62 * OS1_S1 + 94) -
                                       p_over_q * *(b + 95 * OS1_S1 + 94);
            *(b + 62 * OS1_S1 + 137) = prefactor_z * *(b + 62 * OS1_S1 + 95) -
                                       p_over_q * *(b + 95 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 62);
            *(b + 62 * OS1_S1 + 138) =
                prefactor_y * *(b + 62 * OS1_S1 + 97) -
                p_over_q * *(b + 94 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 97) +
                one_over_two_q * *(b + 62 * OS1_S1 + 65);
            *(b + 62 * OS1_S1 + 139) =
                prefactor_y * *(b + 62 * OS1_S1 + 98) -
                p_over_q * *(b + 94 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 98);
            *(b + 62 * OS1_S1 + 140) =
                prefactor_x * *(b + 62 * OS1_S1 + 104) -
                p_over_q * *(b + 90 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 76);
            *(b + 62 * OS1_S1 + 141) =
                prefactor_x * *(b + 62 * OS1_S1 + 105) -
                p_over_q * *(b + 90 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 105) +
                one_over_two_q * *(b + 62 * OS1_S1 + 77);
            *(b + 62 * OS1_S1 + 142) = prefactor_z * *(b + 62 * OS1_S1 + 99) -
                                       p_over_q * *(b + 95 * OS1_S1 + 99);
            *(b + 62 * OS1_S1 + 143) = prefactor_z * *(b + 62 * OS1_S1 + 100) -
                                       p_over_q * *(b + 95 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 66);
            *(b + 62 * OS1_S1 + 144) =
                prefactor_x * *(b + 62 * OS1_S1 + 108) -
                p_over_q * *(b + 90 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 108) +
                one_over_two_q * *(b + 62 * OS1_S1 + 80);
            *(b + 62 * OS1_S1 + 145) =
                prefactor_y * *(b + 62 * OS1_S1 + 103) -
                p_over_q * *(b + 94 * OS1_S1 + 103) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 103) +
                one_over_two_q * *(b + 62 * OS1_S1 + 70);
            *(b + 62 * OS1_S1 + 146) =
                prefactor_y * *(b + 62 * OS1_S1 + 104) -
                p_over_q * *(b + 94 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 104);
            *(b + 62 * OS1_S1 + 147) =
                prefactor_x * *(b + 62 * OS1_S1 + 111) -
                p_over_q * *(b + 90 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 111) +
                one_over_two_q * *(b + 62 * OS1_S1 + 83);
            *(b + 62 * OS1_S1 + 148) =
                prefactor_x * *(b + 62 * OS1_S1 + 112) -
                p_over_q * *(b + 90 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 112);
            *(b + 62 * OS1_S1 + 149) = prefactor_z * *(b + 62 * OS1_S1 + 105) -
                                       p_over_q * *(b + 95 * OS1_S1 + 105);
            *(b + 62 * OS1_S1 + 150) =
                prefactor_x * *(b + 62 * OS1_S1 + 114) -
                p_over_q * *(b + 90 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 114);
            *(b + 62 * OS1_S1 + 151) =
                prefactor_x * *(b + 62 * OS1_S1 + 115) -
                p_over_q * *(b + 90 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 115);
            *(b + 62 * OS1_S1 + 152) =
                prefactor_x * *(b + 62 * OS1_S1 + 116) -
                p_over_q * *(b + 90 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 116);
            *(b + 62 * OS1_S1 + 153) =
                prefactor_x * *(b + 62 * OS1_S1 + 117) -
                p_over_q * *(b + 90 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 117);
            *(b + 62 * OS1_S1 + 154) =
                prefactor_y * *(b + 62 * OS1_S1 + 111) -
                p_over_q * *(b + 94 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 111);
            *(b + 62 * OS1_S1 + 155) =
                prefactor_x * *(b + 62 * OS1_S1 + 119) -
                p_over_q * *(b + 90 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 119);
            *(b + 62 * OS1_S1 + 156) =
                prefactor_y * *(b + 62 * OS1_S1 + 112) -
                p_over_q * *(b + 94 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 62 * OS1_S1 + 77);
            *(b + 62 * OS1_S1 + 157) = prefactor_z * *(b + 62 * OS1_S1 + 112) -
                                       p_over_q * *(b + 95 * OS1_S1 + 112);
            *(b + 62 * OS1_S1 + 158) = prefactor_z * *(b + 62 * OS1_S1 + 113) -
                                       p_over_q * *(b + 95 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 77);
            *(b + 62 * OS1_S1 + 159) =
                prefactor_z * *(b + 62 * OS1_S1 + 114) -
                p_over_q * *(b + 95 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 78);
            *(b + 62 * OS1_S1 + 160) =
                prefactor_z * *(b + 62 * OS1_S1 + 115) -
                p_over_q * *(b + 95 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 62 * OS1_S1 + 79);
            *(b + 62 * OS1_S1 + 161) =
                prefactor_y * *(b + 62 * OS1_S1 + 117) -
                p_over_q * *(b + 94 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 62 * OS1_S1 + 82);
            *(b + 62 * OS1_S1 + 162) =
                prefactor_y * *(b + 62 * OS1_S1 + 118) -
                p_over_q * *(b + 94 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 118) +
                one_over_two_q * *(b + 62 * OS1_S1 + 83);
            *(b + 62 * OS1_S1 + 163) =
                prefactor_y * *(b + 62 * OS1_S1 + 119) -
                p_over_q * *(b + 94 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 119);
            *(b + 62 * OS1_S1 + 164) =
                prefactor_z * *(b + 62 * OS1_S1 + 119) -
                p_over_q * *(b + 95 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 62 * OS1_S1 + 83);
            *(b + 63 * OS1_S1 + 120) =
                prefactor_x * *(b + 63 * OS1_S1 + 84) -
                p_over_q * *(b + 91 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 63 * OS1_S1 + 56);
            *(b + 63 * OS1_S1 + 121) =
                prefactor_y * *(b + 63 * OS1_S1 + 84) -
                p_over_q * *(b + 95 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 84);
            *(b + 63 * OS1_S1 + 122) = prefactor_z * *(b + 63 * OS1_S1 + 84) -
                                       p_over_q * *(b + 96 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 84);
            *(b + 63 * OS1_S1 + 123) =
                prefactor_y * *(b + 63 * OS1_S1 + 85) -
                p_over_q * *(b + 95 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 85) +
                one_over_two_q * *(b + 63 * OS1_S1 + 56);
            *(b + 63 * OS1_S1 + 124) = prefactor_z * *(b + 63 * OS1_S1 + 85) -
                                       p_over_q * *(b + 96 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 85);
            *(b + 63 * OS1_S1 + 125) =
                prefactor_z * *(b + 63 * OS1_S1 + 86) -
                p_over_q * *(b + 96 * OS1_S1 + 86) +
                one_over_two_q * *(b + 38 * OS1_S1 + 86) +
                one_over_two_q * *(b + 63 * OS1_S1 + 56);
            *(b + 63 * OS1_S1 + 126) =
                prefactor_y * *(b + 63 * OS1_S1 + 87) -
                p_over_q * *(b + 95 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 57);
            *(b + 63 * OS1_S1 + 127) = prefactor_z * *(b + 63 * OS1_S1 + 87) -
                                       p_over_q * *(b + 96 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 87);
            *(b + 63 * OS1_S1 + 128) =
                prefactor_y * *(b + 63 * OS1_S1 + 89) -
                p_over_q * *(b + 95 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 89);
            *(b + 63 * OS1_S1 + 129) =
                prefactor_z * *(b + 63 * OS1_S1 + 89) -
                p_over_q * *(b + 96 * OS1_S1 + 89) +
                one_over_two_q * *(b + 38 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 58);
            *(b + 63 * OS1_S1 + 130) =
                prefactor_y * *(b + 63 * OS1_S1 + 90) -
                p_over_q * *(b + 95 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 59);
            *(b + 63 * OS1_S1 + 131) = prefactor_z * *(b + 63 * OS1_S1 + 90) -
                                       p_over_q * *(b + 96 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 90);
            *(b + 63 * OS1_S1 + 132) =
                prefactor_z * *(b + 63 * OS1_S1 + 91) -
                p_over_q * *(b + 96 * OS1_S1 + 91) +
                one_over_two_q * *(b + 38 * OS1_S1 + 91) +
                one_over_two_q * *(b + 63 * OS1_S1 + 59);
            *(b + 63 * OS1_S1 + 133) =
                prefactor_y * *(b + 63 * OS1_S1 + 93) -
                p_over_q * *(b + 95 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 93);
            *(b + 63 * OS1_S1 + 134) =
                prefactor_z * *(b + 63 * OS1_S1 + 93) -
                p_over_q * *(b + 96 * OS1_S1 + 93) +
                one_over_two_q * *(b + 38 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 61);
            *(b + 63 * OS1_S1 + 135) =
                prefactor_x * *(b + 63 * OS1_S1 + 99) -
                p_over_q * *(b + 91 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 71);
            *(b + 63 * OS1_S1 + 136) = prefactor_z * *(b + 63 * OS1_S1 + 94) -
                                       p_over_q * *(b + 96 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 94);
            *(b + 63 * OS1_S1 + 137) =
                prefactor_z * *(b + 63 * OS1_S1 + 95) -
                p_over_q * *(b + 96 * OS1_S1 + 95) +
                one_over_two_q * *(b + 38 * OS1_S1 + 95) +
                one_over_two_q * *(b + 63 * OS1_S1 + 62);
            *(b + 63 * OS1_S1 + 138) =
                prefactor_y * *(b + 63 * OS1_S1 + 97) -
                p_over_q * *(b + 95 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 97) +
                one_over_two_q * *(b + 63 * OS1_S1 + 65);
            *(b + 63 * OS1_S1 + 139) =
                prefactor_y * *(b + 63 * OS1_S1 + 98) -
                p_over_q * *(b + 95 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 98);
            *(b + 63 * OS1_S1 + 140) =
                prefactor_x * *(b + 63 * OS1_S1 + 104) -
                p_over_q * *(b + 91 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 76);
            *(b + 63 * OS1_S1 + 141) =
                prefactor_x * *(b + 63 * OS1_S1 + 105) -
                p_over_q * *(b + 91 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 105) +
                one_over_two_q * *(b + 63 * OS1_S1 + 77);
            *(b + 63 * OS1_S1 + 142) = prefactor_z * *(b + 63 * OS1_S1 + 99) -
                                       p_over_q * *(b + 96 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 99);
            *(b + 63 * OS1_S1 + 143) =
                prefactor_z * *(b + 63 * OS1_S1 + 100) -
                p_over_q * *(b + 96 * OS1_S1 + 100) +
                one_over_two_q * *(b + 38 * OS1_S1 + 100) +
                one_over_two_q * *(b + 63 * OS1_S1 + 66);
            *(b + 63 * OS1_S1 + 144) =
                prefactor_x * *(b + 63 * OS1_S1 + 108) -
                p_over_q * *(b + 91 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 108) +
                one_over_two_q * *(b + 63 * OS1_S1 + 80);
            *(b + 63 * OS1_S1 + 145) =
                prefactor_y * *(b + 63 * OS1_S1 + 103) -
                p_over_q * *(b + 95 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 103) +
                one_over_two_q * *(b + 63 * OS1_S1 + 70);
            *(b + 63 * OS1_S1 + 146) =
                prefactor_y * *(b + 63 * OS1_S1 + 104) -
                p_over_q * *(b + 95 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 104);
            *(b + 63 * OS1_S1 + 147) =
                prefactor_x * *(b + 63 * OS1_S1 + 111) -
                p_over_q * *(b + 91 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 111) +
                one_over_two_q * *(b + 63 * OS1_S1 + 83);
            *(b + 63 * OS1_S1 + 148) =
                prefactor_x * *(b + 63 * OS1_S1 + 112) -
                p_over_q * *(b + 91 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 112);
            *(b + 63 * OS1_S1 + 149) =
                prefactor_z * *(b + 63 * OS1_S1 + 105) -
                p_over_q * *(b + 96 * OS1_S1 + 105) +
                one_over_two_q * *(b + 38 * OS1_S1 + 105);
            *(b + 63 * OS1_S1 + 150) =
                prefactor_x * *(b + 63 * OS1_S1 + 114) -
                p_over_q * *(b + 91 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 114);
            *(b + 63 * OS1_S1 + 151) =
                prefactor_x * *(b + 63 * OS1_S1 + 115) -
                p_over_q * *(b + 91 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 115);
            *(b + 63 * OS1_S1 + 152) =
                prefactor_x * *(b + 63 * OS1_S1 + 116) -
                p_over_q * *(b + 91 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 116);
            *(b + 63 * OS1_S1 + 153) =
                prefactor_x * *(b + 63 * OS1_S1 + 117) -
                p_over_q * *(b + 91 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 117);
            *(b + 63 * OS1_S1 + 154) =
                prefactor_y * *(b + 63 * OS1_S1 + 111) -
                p_over_q * *(b + 95 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 111);
            *(b + 63 * OS1_S1 + 155) =
                prefactor_x * *(b + 63 * OS1_S1 + 119) -
                p_over_q * *(b + 91 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 119);
            *(b + 63 * OS1_S1 + 156) =
                prefactor_y * *(b + 63 * OS1_S1 + 112) -
                p_over_q * *(b + 95 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 63 * OS1_S1 + 77);
            *(b + 63 * OS1_S1 + 157) =
                prefactor_z * *(b + 63 * OS1_S1 + 112) -
                p_over_q * *(b + 96 * OS1_S1 + 112) +
                one_over_two_q * *(b + 38 * OS1_S1 + 112);
            *(b + 63 * OS1_S1 + 158) =
                prefactor_z * *(b + 63 * OS1_S1 + 113) -
                p_over_q * *(b + 96 * OS1_S1 + 113) +
                one_over_two_q * *(b + 38 * OS1_S1 + 113) +
                one_over_two_q * *(b + 63 * OS1_S1 + 77);
            *(b + 63 * OS1_S1 + 159) =
                prefactor_z * *(b + 63 * OS1_S1 + 114) -
                p_over_q * *(b + 96 * OS1_S1 + 114) +
                one_over_two_q * *(b + 38 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 78);
            *(b + 63 * OS1_S1 + 160) =
                prefactor_z * *(b + 63 * OS1_S1 + 115) -
                p_over_q * *(b + 96 * OS1_S1 + 115) +
                one_over_two_q * *(b + 38 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 79);
            *(b + 63 * OS1_S1 + 161) =
                prefactor_y * *(b + 63 * OS1_S1 + 117) -
                p_over_q * *(b + 95 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 82);
            *(b + 63 * OS1_S1 + 162) =
                prefactor_y * *(b + 63 * OS1_S1 + 118) -
                p_over_q * *(b + 95 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 118) +
                one_over_two_q * *(b + 63 * OS1_S1 + 83);
            *(b + 63 * OS1_S1 + 163) =
                prefactor_y * *(b + 63 * OS1_S1 + 119) -
                p_over_q * *(b + 95 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 119);
            *(b + 63 * OS1_S1 + 164) =
                prefactor_z * *(b + 63 * OS1_S1 + 119) -
                p_over_q * *(b + 96 * OS1_S1 + 119) +
                one_over_two_q * *(b + 38 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 63 * OS1_S1 + 83);
            *(b + 64 * OS1_S1 + 120) =
                prefactor_x * *(b + 64 * OS1_S1 + 84) -
                p_over_q * *(b + 92 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 64 * OS1_S1 + 56);
            *(b + 64 * OS1_S1 + 121) = prefactor_y * *(b + 64 * OS1_S1 + 84) -
                                       p_over_q * *(b + 96 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 84);
            *(b + 64 * OS1_S1 + 122) =
                prefactor_z * *(b + 64 * OS1_S1 + 84) -
                p_over_q * *(b + 97 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 84);
            *(b + 64 * OS1_S1 + 123) =
                prefactor_y * *(b + 64 * OS1_S1 + 85) -
                p_over_q * *(b + 96 * OS1_S1 + 85) +
                one_over_two_q * *(b + 40 * OS1_S1 + 85) +
                one_over_two_q * *(b + 64 * OS1_S1 + 56);
            *(b + 64 * OS1_S1 + 124) = prefactor_y * *(b + 64 * OS1_S1 + 86) -
                                       p_over_q * *(b + 96 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 86);
            *(b + 64 * OS1_S1 + 125) =
                prefactor_z * *(b + 64 * OS1_S1 + 86) -
                p_over_q * *(b + 97 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 86) +
                one_over_two_q * *(b + 64 * OS1_S1 + 56);
            *(b + 64 * OS1_S1 + 126) =
                prefactor_y * *(b + 64 * OS1_S1 + 87) -
                p_over_q * *(b + 96 * OS1_S1 + 87) +
                one_over_two_q * *(b + 40 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 57);
            *(b + 64 * OS1_S1 + 127) =
                prefactor_z * *(b + 64 * OS1_S1 + 87) -
                p_over_q * *(b + 97 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 87);
            *(b + 64 * OS1_S1 + 128) = prefactor_y * *(b + 64 * OS1_S1 + 89) -
                                       p_over_q * *(b + 96 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 89);
            *(b + 64 * OS1_S1 + 129) =
                prefactor_z * *(b + 64 * OS1_S1 + 89) -
                p_over_q * *(b + 97 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 58);
            *(b + 64 * OS1_S1 + 130) =
                prefactor_y * *(b + 64 * OS1_S1 + 90) -
                p_over_q * *(b + 96 * OS1_S1 + 90) +
                one_over_two_q * *(b + 40 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 59);
            *(b + 64 * OS1_S1 + 131) =
                prefactor_z * *(b + 64 * OS1_S1 + 90) -
                p_over_q * *(b + 97 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 90);
            *(b + 64 * OS1_S1 + 132) =
                prefactor_y * *(b + 64 * OS1_S1 + 92) -
                p_over_q * *(b + 96 * OS1_S1 + 92) +
                one_over_two_q * *(b + 40 * OS1_S1 + 92) +
                one_over_two_q * *(b + 64 * OS1_S1 + 61);
            *(b + 64 * OS1_S1 + 133) = prefactor_y * *(b + 64 * OS1_S1 + 93) -
                                       p_over_q * *(b + 96 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 93);
            *(b + 64 * OS1_S1 + 134) =
                prefactor_z * *(b + 64 * OS1_S1 + 93) -
                p_over_q * *(b + 97 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 61);
            *(b + 64 * OS1_S1 + 135) =
                prefactor_x * *(b + 64 * OS1_S1 + 99) -
                p_over_q * *(b + 92 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 71);
            *(b + 64 * OS1_S1 + 136) =
                prefactor_z * *(b + 64 * OS1_S1 + 94) -
                p_over_q * *(b + 97 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 94);
            *(b + 64 * OS1_S1 + 137) =
                prefactor_z * *(b + 64 * OS1_S1 + 95) -
                p_over_q * *(b + 97 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 95) +
                one_over_two_q * *(b + 64 * OS1_S1 + 62);
            *(b + 64 * OS1_S1 + 138) =
                prefactor_y * *(b + 64 * OS1_S1 + 97) -
                p_over_q * *(b + 96 * OS1_S1 + 97) +
                one_over_two_q * *(b + 40 * OS1_S1 + 97) +
                one_over_two_q * *(b + 64 * OS1_S1 + 65);
            *(b + 64 * OS1_S1 + 139) = prefactor_y * *(b + 64 * OS1_S1 + 98) -
                                       p_over_q * *(b + 96 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 98);
            *(b + 64 * OS1_S1 + 140) =
                prefactor_x * *(b + 64 * OS1_S1 + 104) -
                p_over_q * *(b + 92 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 76);
            *(b + 64 * OS1_S1 + 141) =
                prefactor_x * *(b + 64 * OS1_S1 + 105) -
                p_over_q * *(b + 92 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 105) +
                one_over_two_q * *(b + 64 * OS1_S1 + 77);
            *(b + 64 * OS1_S1 + 142) =
                prefactor_z * *(b + 64 * OS1_S1 + 99) -
                p_over_q * *(b + 97 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 99);
            *(b + 64 * OS1_S1 + 143) =
                prefactor_z * *(b + 64 * OS1_S1 + 100) -
                p_over_q * *(b + 97 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 100) +
                one_over_two_q * *(b + 64 * OS1_S1 + 66);
            *(b + 64 * OS1_S1 + 144) =
                prefactor_x * *(b + 64 * OS1_S1 + 108) -
                p_over_q * *(b + 92 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 108) +
                one_over_two_q * *(b + 64 * OS1_S1 + 80);
            *(b + 64 * OS1_S1 + 145) =
                prefactor_y * *(b + 64 * OS1_S1 + 103) -
                p_over_q * *(b + 96 * OS1_S1 + 103) +
                one_over_two_q * *(b + 40 * OS1_S1 + 103) +
                one_over_two_q * *(b + 64 * OS1_S1 + 70);
            *(b + 64 * OS1_S1 + 146) =
                prefactor_y * *(b + 64 * OS1_S1 + 104) -
                p_over_q * *(b + 96 * OS1_S1 + 104) +
                one_over_two_q * *(b + 40 * OS1_S1 + 104);
            *(b + 64 * OS1_S1 + 147) =
                prefactor_x * *(b + 64 * OS1_S1 + 111) -
                p_over_q * *(b + 92 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 111) +
                one_over_two_q * *(b + 64 * OS1_S1 + 83);
            *(b + 64 * OS1_S1 + 148) =
                prefactor_x * *(b + 64 * OS1_S1 + 112) -
                p_over_q * *(b + 92 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 112);
            *(b + 64 * OS1_S1 + 149) =
                prefactor_z * *(b + 64 * OS1_S1 + 105) -
                p_over_q * *(b + 97 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 105);
            *(b + 64 * OS1_S1 + 150) =
                prefactor_x * *(b + 64 * OS1_S1 + 114) -
                p_over_q * *(b + 92 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 114);
            *(b + 64 * OS1_S1 + 151) =
                prefactor_x * *(b + 64 * OS1_S1 + 115) -
                p_over_q * *(b + 92 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 115);
            *(b + 64 * OS1_S1 + 152) =
                prefactor_x * *(b + 64 * OS1_S1 + 116) -
                p_over_q * *(b + 92 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 116);
            *(b + 64 * OS1_S1 + 153) =
                prefactor_x * *(b + 64 * OS1_S1 + 117) -
                p_over_q * *(b + 92 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 117);
            *(b + 64 * OS1_S1 + 154) =
                prefactor_y * *(b + 64 * OS1_S1 + 111) -
                p_over_q * *(b + 96 * OS1_S1 + 111) +
                one_over_two_q * *(b + 40 * OS1_S1 + 111);
            *(b + 64 * OS1_S1 + 155) =
                prefactor_x * *(b + 64 * OS1_S1 + 119) -
                p_over_q * *(b + 92 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 119);
            *(b + 64 * OS1_S1 + 156) =
                prefactor_y * *(b + 64 * OS1_S1 + 112) -
                p_over_q * *(b + 96 * OS1_S1 + 112) +
                one_over_two_q * *(b + 40 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 64 * OS1_S1 + 77);
            *(b + 64 * OS1_S1 + 157) =
                prefactor_z * *(b + 64 * OS1_S1 + 112) -
                p_over_q * *(b + 97 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 112);
            *(b + 64 * OS1_S1 + 158) =
                prefactor_z * *(b + 64 * OS1_S1 + 113) -
                p_over_q * *(b + 97 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 113) +
                one_over_two_q * *(b + 64 * OS1_S1 + 77);
            *(b + 64 * OS1_S1 + 159) =
                prefactor_z * *(b + 64 * OS1_S1 + 114) -
                p_over_q * *(b + 97 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 78);
            *(b + 64 * OS1_S1 + 160) =
                prefactor_y * *(b + 64 * OS1_S1 + 116) -
                p_over_q * *(b + 96 * OS1_S1 + 116) +
                one_over_two_q * *(b + 40 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 81);
            *(b + 64 * OS1_S1 + 161) =
                prefactor_y * *(b + 64 * OS1_S1 + 117) -
                p_over_q * *(b + 96 * OS1_S1 + 117) +
                one_over_two_q * *(b + 40 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 82);
            *(b + 64 * OS1_S1 + 162) =
                prefactor_y * *(b + 64 * OS1_S1 + 118) -
                p_over_q * *(b + 96 * OS1_S1 + 118) +
                one_over_two_q * *(b + 40 * OS1_S1 + 118) +
                one_over_two_q * *(b + 64 * OS1_S1 + 83);
            *(b + 64 * OS1_S1 + 163) =
                prefactor_y * *(b + 64 * OS1_S1 + 119) -
                p_over_q * *(b + 96 * OS1_S1 + 119) +
                one_over_two_q * *(b + 40 * OS1_S1 + 119);
            *(b + 64 * OS1_S1 + 164) =
                prefactor_z * *(b + 64 * OS1_S1 + 119) -
                p_over_q * *(b + 97 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 64 * OS1_S1 + 83);
            *(b + 65 * OS1_S1 + 120) =
                prefactor_x * *(b + 65 * OS1_S1 + 84) -
                p_over_q * *(b + 93 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 65 * OS1_S1 + 56);
            *(b + 65 * OS1_S1 + 121) = prefactor_y * *(b + 65 * OS1_S1 + 84) -
                                       p_over_q * *(b + 97 * OS1_S1 + 84);
            *(b + 65 * OS1_S1 + 122) =
                prefactor_z * *(b + 65 * OS1_S1 + 84) -
                p_over_q * *(b + 98 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 84);
            *(b + 65 * OS1_S1 + 123) = prefactor_y * *(b + 65 * OS1_S1 + 85) -
                                       p_over_q * *(b + 97 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 56);
            *(b + 65 * OS1_S1 + 124) = prefactor_y * *(b + 65 * OS1_S1 + 86) -
                                       p_over_q * *(b + 97 * OS1_S1 + 86);
            *(b + 65 * OS1_S1 + 125) =
                prefactor_z * *(b + 65 * OS1_S1 + 86) -
                p_over_q * *(b + 98 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 86) +
                one_over_two_q * *(b + 65 * OS1_S1 + 56);
            *(b + 65 * OS1_S1 + 126) =
                prefactor_y * *(b + 65 * OS1_S1 + 87) -
                p_over_q * *(b + 97 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 57);
            *(b + 65 * OS1_S1 + 127) =
                prefactor_z * *(b + 65 * OS1_S1 + 87) -
                p_over_q * *(b + 98 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 87);
            *(b + 65 * OS1_S1 + 128) = prefactor_y * *(b + 65 * OS1_S1 + 89) -
                                       p_over_q * *(b + 97 * OS1_S1 + 89);
            *(b + 65 * OS1_S1 + 129) =
                prefactor_z * *(b + 65 * OS1_S1 + 89) -
                p_over_q * *(b + 98 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 58);
            *(b + 65 * OS1_S1 + 130) =
                prefactor_y * *(b + 65 * OS1_S1 + 90) -
                p_over_q * *(b + 97 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 65 * OS1_S1 + 59);
            *(b + 65 * OS1_S1 + 131) =
                prefactor_z * *(b + 65 * OS1_S1 + 90) -
                p_over_q * *(b + 98 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 90);
            *(b + 65 * OS1_S1 + 132) = prefactor_y * *(b + 65 * OS1_S1 + 92) -
                                       p_over_q * *(b + 97 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 61);
            *(b + 65 * OS1_S1 + 133) = prefactor_y * *(b + 65 * OS1_S1 + 93) -
                                       p_over_q * *(b + 97 * OS1_S1 + 93);
            *(b + 65 * OS1_S1 + 134) =
                prefactor_z * *(b + 65 * OS1_S1 + 93) -
                p_over_q * *(b + 98 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 65 * OS1_S1 + 61);
            *(b + 65 * OS1_S1 + 135) =
                prefactor_x * *(b + 65 * OS1_S1 + 99) -
                p_over_q * *(b + 93 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 71);
            *(b + 65 * OS1_S1 + 136) =
                prefactor_z * *(b + 65 * OS1_S1 + 94) -
                p_over_q * *(b + 98 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 94);
            *(b + 65 * OS1_S1 + 137) =
                prefactor_z * *(b + 65 * OS1_S1 + 95) -
                p_over_q * *(b + 98 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 95) +
                one_over_two_q * *(b + 65 * OS1_S1 + 62);
            *(b + 65 * OS1_S1 + 138) = prefactor_y * *(b + 65 * OS1_S1 + 97) -
                                       p_over_q * *(b + 97 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 65);
            *(b + 65 * OS1_S1 + 139) = prefactor_y * *(b + 65 * OS1_S1 + 98) -
                                       p_over_q * *(b + 97 * OS1_S1 + 98);
            *(b + 65 * OS1_S1 + 140) =
                prefactor_x * *(b + 65 * OS1_S1 + 104) -
                p_over_q * *(b + 93 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 76);
            *(b + 65 * OS1_S1 + 141) =
                prefactor_x * *(b + 65 * OS1_S1 + 105) -
                p_over_q * *(b + 93 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 105) +
                one_over_two_q * *(b + 65 * OS1_S1 + 77);
            *(b + 65 * OS1_S1 + 142) =
                prefactor_z * *(b + 65 * OS1_S1 + 99) -
                p_over_q * *(b + 98 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 99);
            *(b + 65 * OS1_S1 + 143) =
                prefactor_z * *(b + 65 * OS1_S1 + 100) -
                p_over_q * *(b + 98 * OS1_S1 + 100) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 100) +
                one_over_two_q * *(b + 65 * OS1_S1 + 66);
            *(b + 65 * OS1_S1 + 144) =
                prefactor_x * *(b + 65 * OS1_S1 + 108) -
                p_over_q * *(b + 93 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 108) +
                one_over_two_q * *(b + 65 * OS1_S1 + 80);
            *(b + 65 * OS1_S1 + 145) = prefactor_y * *(b + 65 * OS1_S1 + 103) -
                                       p_over_q * *(b + 97 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 70);
            *(b + 65 * OS1_S1 + 146) = prefactor_y * *(b + 65 * OS1_S1 + 104) -
                                       p_over_q * *(b + 97 * OS1_S1 + 104);
            *(b + 65 * OS1_S1 + 147) =
                prefactor_x * *(b + 65 * OS1_S1 + 111) -
                p_over_q * *(b + 93 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 111) +
                one_over_two_q * *(b + 65 * OS1_S1 + 83);
            *(b + 65 * OS1_S1 + 148) =
                prefactor_x * *(b + 65 * OS1_S1 + 112) -
                p_over_q * *(b + 93 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 112);
            *(b + 65 * OS1_S1 + 149) =
                prefactor_z * *(b + 65 * OS1_S1 + 105) -
                p_over_q * *(b + 98 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 105);
            *(b + 65 * OS1_S1 + 150) =
                prefactor_x * *(b + 65 * OS1_S1 + 114) -
                p_over_q * *(b + 93 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 114);
            *(b + 65 * OS1_S1 + 151) =
                prefactor_x * *(b + 65 * OS1_S1 + 115) -
                p_over_q * *(b + 93 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 115);
            *(b + 65 * OS1_S1 + 152) =
                prefactor_x * *(b + 65 * OS1_S1 + 116) -
                p_over_q * *(b + 93 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 116);
            *(b + 65 * OS1_S1 + 153) =
                prefactor_x * *(b + 65 * OS1_S1 + 117) -
                p_over_q * *(b + 93 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 117);
            *(b + 65 * OS1_S1 + 154) = prefactor_y * *(b + 65 * OS1_S1 + 111) -
                                       p_over_q * *(b + 97 * OS1_S1 + 111);
            *(b + 65 * OS1_S1 + 155) =
                prefactor_x * *(b + 65 * OS1_S1 + 119) -
                p_over_q * *(b + 93 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 119);
            *(b + 65 * OS1_S1 + 156) =
                prefactor_y * *(b + 65 * OS1_S1 + 112) -
                p_over_q * *(b + 97 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 65 * OS1_S1 + 77);
            *(b + 65 * OS1_S1 + 157) =
                prefactor_z * *(b + 65 * OS1_S1 + 112) -
                p_over_q * *(b + 98 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 112);
            *(b + 65 * OS1_S1 + 158) =
                prefactor_z * *(b + 65 * OS1_S1 + 113) -
                p_over_q * *(b + 98 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 113) +
                one_over_two_q * *(b + 65 * OS1_S1 + 77);
            *(b + 65 * OS1_S1 + 159) =
                prefactor_z * *(b + 65 * OS1_S1 + 114) -
                p_over_q * *(b + 98 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 78);
            *(b + 65 * OS1_S1 + 160) =
                prefactor_y * *(b + 65 * OS1_S1 + 116) -
                p_over_q * *(b + 97 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 65 * OS1_S1 + 81);
            *(b + 65 * OS1_S1 + 161) =
                prefactor_y * *(b + 65 * OS1_S1 + 117) -
                p_over_q * *(b + 97 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 65 * OS1_S1 + 82);
            *(b + 65 * OS1_S1 + 162) = prefactor_y * *(b + 65 * OS1_S1 + 118) -
                                       p_over_q * *(b + 97 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 83);
            *(b + 65 * OS1_S1 + 163) = prefactor_y * *(b + 65 * OS1_S1 + 119) -
                                       p_over_q * *(b + 97 * OS1_S1 + 119);
            *(b + 65 * OS1_S1 + 164) =
                prefactor_z * *(b + 65 * OS1_S1 + 119) -
                p_over_q * *(b + 98 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 65 * OS1_S1 + 83);
            *(b + 66 * OS1_S1 + 120) =
                prefactor_x * *(b + 66 * OS1_S1 + 84) -
                p_over_q * *(b + 94 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 66 * OS1_S1 + 56);
            *(b + 66 * OS1_S1 + 121) =
                prefactor_y * *(b + 66 * OS1_S1 + 84) -
                p_over_q * *(b + 99 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 84);
            *(b + 66 * OS1_S1 + 122) = prefactor_z * *(b + 66 * OS1_S1 + 84) -
                                       p_over_q * *(b + 100 * OS1_S1 + 84);
            *(b + 66 * OS1_S1 + 123) =
                prefactor_y * *(b + 66 * OS1_S1 + 85) -
                p_over_q * *(b + 99 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 85) +
                one_over_two_q * *(b + 66 * OS1_S1 + 56);
            *(b + 66 * OS1_S1 + 124) = prefactor_z * *(b + 66 * OS1_S1 + 85) -
                                       p_over_q * *(b + 100 * OS1_S1 + 85);
            *(b + 66 * OS1_S1 + 125) = prefactor_z * *(b + 66 * OS1_S1 + 86) -
                                       p_over_q * *(b + 100 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 56);
            *(b + 66 * OS1_S1 + 126) =
                prefactor_y * *(b + 66 * OS1_S1 + 87) -
                p_over_q * *(b + 99 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 57);
            *(b + 66 * OS1_S1 + 127) = prefactor_z * *(b + 66 * OS1_S1 + 87) -
                                       p_over_q * *(b + 100 * OS1_S1 + 87);
            *(b + 66 * OS1_S1 + 128) =
                prefactor_y * *(b + 66 * OS1_S1 + 89) -
                p_over_q * *(b + 99 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 89);
            *(b + 66 * OS1_S1 + 129) =
                prefactor_z * *(b + 66 * OS1_S1 + 89) -
                p_over_q * *(b + 100 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 58);
            *(b + 66 * OS1_S1 + 130) =
                prefactor_x * *(b + 66 * OS1_S1 + 94) -
                p_over_q * *(b + 94 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 66);
            *(b + 66 * OS1_S1 + 131) = prefactor_z * *(b + 66 * OS1_S1 + 90) -
                                       p_over_q * *(b + 100 * OS1_S1 + 90);
            *(b + 66 * OS1_S1 + 132) = prefactor_z * *(b + 66 * OS1_S1 + 91) -
                                       p_over_q * *(b + 100 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 59);
            *(b + 66 * OS1_S1 + 133) =
                prefactor_y * *(b + 66 * OS1_S1 + 93) -
                p_over_q * *(b + 99 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 93);
            *(b + 66 * OS1_S1 + 134) =
                prefactor_z * *(b + 66 * OS1_S1 + 93) -
                p_over_q * *(b + 100 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 61);
            *(b + 66 * OS1_S1 + 135) =
                prefactor_x * *(b + 66 * OS1_S1 + 99) -
                p_over_q * *(b + 94 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 71);
            *(b + 66 * OS1_S1 + 136) = prefactor_z * *(b + 66 * OS1_S1 + 94) -
                                       p_over_q * *(b + 100 * OS1_S1 + 94);
            *(b + 66 * OS1_S1 + 137) = prefactor_z * *(b + 66 * OS1_S1 + 95) -
                                       p_over_q * *(b + 100 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 62);
            *(b + 66 * OS1_S1 + 138) =
                prefactor_y * *(b + 66 * OS1_S1 + 97) -
                p_over_q * *(b + 99 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 97) +
                one_over_two_q * *(b + 66 * OS1_S1 + 65);
            *(b + 66 * OS1_S1 + 139) =
                prefactor_y * *(b + 66 * OS1_S1 + 98) -
                p_over_q * *(b + 99 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 98);
            *(b + 66 * OS1_S1 + 140) =
                prefactor_x * *(b + 66 * OS1_S1 + 104) -
                p_over_q * *(b + 94 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 76);
            *(b + 66 * OS1_S1 + 141) =
                prefactor_x * *(b + 66 * OS1_S1 + 105) -
                p_over_q * *(b + 94 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 105) +
                one_over_two_q * *(b + 66 * OS1_S1 + 77);
            *(b + 66 * OS1_S1 + 142) = prefactor_z * *(b + 66 * OS1_S1 + 99) -
                                       p_over_q * *(b + 100 * OS1_S1 + 99);
            *(b + 66 * OS1_S1 + 143) = prefactor_z * *(b + 66 * OS1_S1 + 100) -
                                       p_over_q * *(b + 100 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 66);
            *(b + 66 * OS1_S1 + 144) =
                prefactor_x * *(b + 66 * OS1_S1 + 108) -
                p_over_q * *(b + 94 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 108) +
                one_over_two_q * *(b + 66 * OS1_S1 + 80);
            *(b + 66 * OS1_S1 + 145) =
                prefactor_x * *(b + 66 * OS1_S1 + 109) -
                p_over_q * *(b + 94 * OS1_S1 + 109) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 109) +
                one_over_two_q * *(b + 66 * OS1_S1 + 81);
            *(b + 66 * OS1_S1 + 146) =
                prefactor_y * *(b + 66 * OS1_S1 + 104) -
                p_over_q * *(b + 99 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 104);
            *(b + 66 * OS1_S1 + 147) =
                prefactor_x * *(b + 66 * OS1_S1 + 111) -
                p_over_q * *(b + 94 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 111) +
                one_over_two_q * *(b + 66 * OS1_S1 + 83);
            *(b + 66 * OS1_S1 + 148) =
                prefactor_x * *(b + 66 * OS1_S1 + 112) -
                p_over_q * *(b + 94 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 112);
            *(b + 66 * OS1_S1 + 149) = prefactor_z * *(b + 66 * OS1_S1 + 105) -
                                       p_over_q * *(b + 100 * OS1_S1 + 105);
            *(b + 66 * OS1_S1 + 150) =
                prefactor_x * *(b + 66 * OS1_S1 + 114) -
                p_over_q * *(b + 94 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 114);
            *(b + 66 * OS1_S1 + 151) =
                prefactor_x * *(b + 66 * OS1_S1 + 115) -
                p_over_q * *(b + 94 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 115);
            *(b + 66 * OS1_S1 + 152) =
                prefactor_x * *(b + 66 * OS1_S1 + 116) -
                p_over_q * *(b + 94 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 116);
            *(b + 66 * OS1_S1 + 153) =
                prefactor_x * *(b + 66 * OS1_S1 + 117) -
                p_over_q * *(b + 94 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 117);
            *(b + 66 * OS1_S1 + 154) =
                prefactor_x * *(b + 66 * OS1_S1 + 118) -
                p_over_q * *(b + 94 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 118);
            *(b + 66 * OS1_S1 + 155) =
                prefactor_x * *(b + 66 * OS1_S1 + 119) -
                p_over_q * *(b + 94 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 119);
            *(b + 66 * OS1_S1 + 156) =
                prefactor_y * *(b + 66 * OS1_S1 + 112) -
                p_over_q * *(b + 99 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 66 * OS1_S1 + 77);
            *(b + 66 * OS1_S1 + 157) = prefactor_z * *(b + 66 * OS1_S1 + 112) -
                                       p_over_q * *(b + 100 * OS1_S1 + 112);
            *(b + 66 * OS1_S1 + 158) = prefactor_z * *(b + 66 * OS1_S1 + 113) -
                                       p_over_q * *(b + 100 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 66 * OS1_S1 + 77);
            *(b + 66 * OS1_S1 + 159) =
                prefactor_z * *(b + 66 * OS1_S1 + 114) -
                p_over_q * *(b + 100 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 78);
            *(b + 66 * OS1_S1 + 160) =
                prefactor_z * *(b + 66 * OS1_S1 + 115) -
                p_over_q * *(b + 100 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 79);
            *(b + 66 * OS1_S1 + 161) =
                prefactor_y * *(b + 66 * OS1_S1 + 117) -
                p_over_q * *(b + 99 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 66 * OS1_S1 + 82);
            *(b + 66 * OS1_S1 + 162) =
                prefactor_y * *(b + 66 * OS1_S1 + 118) -
                p_over_q * *(b + 99 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 118) +
                one_over_two_q * *(b + 66 * OS1_S1 + 83);
            *(b + 66 * OS1_S1 + 163) =
                prefactor_y * *(b + 66 * OS1_S1 + 119) -
                p_over_q * *(b + 99 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 41 * OS1_S1 + 119);
            *(b + 66 * OS1_S1 + 164) =
                prefactor_z * *(b + 66 * OS1_S1 + 119) -
                p_over_q * *(b + 100 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 66 * OS1_S1 + 83);
            *(b + 67 * OS1_S1 + 120) =
                prefactor_x * *(b + 67 * OS1_S1 + 84) -
                p_over_q * *(b + 95 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 67 * OS1_S1 + 56);
            *(b + 67 * OS1_S1 + 121) =
                prefactor_y * *(b + 67 * OS1_S1 + 84) -
                p_over_q * *(b + 100 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 84);
            *(b + 67 * OS1_S1 + 122) = prefactor_z * *(b + 67 * OS1_S1 + 84) -
                                       p_over_q * *(b + 101 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 84);
            *(b + 67 * OS1_S1 + 123) =
                prefactor_y * *(b + 67 * OS1_S1 + 85) -
                p_over_q * *(b + 100 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 85) +
                one_over_two_q * *(b + 67 * OS1_S1 + 56);
            *(b + 67 * OS1_S1 + 124) = prefactor_z * *(b + 67 * OS1_S1 + 85) -
                                       p_over_q * *(b + 101 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 85);
            *(b + 67 * OS1_S1 + 125) =
                prefactor_z * *(b + 67 * OS1_S1 + 86) -
                p_over_q * *(b + 101 * OS1_S1 + 86) +
                one_over_two_q * *(b + 41 * OS1_S1 + 86) +
                one_over_two_q * *(b + 67 * OS1_S1 + 56);
            *(b + 67 * OS1_S1 + 126) =
                prefactor_y * *(b + 67 * OS1_S1 + 87) -
                p_over_q * *(b + 100 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 57);
            *(b + 67 * OS1_S1 + 127) = prefactor_z * *(b + 67 * OS1_S1 + 87) -
                                       p_over_q * *(b + 101 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 87);
            *(b + 67 * OS1_S1 + 128) =
                prefactor_y * *(b + 67 * OS1_S1 + 89) -
                p_over_q * *(b + 100 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 89);
            *(b + 67 * OS1_S1 + 129) =
                prefactor_z * *(b + 67 * OS1_S1 + 89) -
                p_over_q * *(b + 101 * OS1_S1 + 89) +
                one_over_two_q * *(b + 41 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 58);
            *(b + 67 * OS1_S1 + 130) =
                prefactor_x * *(b + 67 * OS1_S1 + 94) -
                p_over_q * *(b + 95 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 66);
            *(b + 67 * OS1_S1 + 131) = prefactor_z * *(b + 67 * OS1_S1 + 90) -
                                       p_over_q * *(b + 101 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 90);
            *(b + 67 * OS1_S1 + 132) =
                prefactor_z * *(b + 67 * OS1_S1 + 91) -
                p_over_q * *(b + 101 * OS1_S1 + 91) +
                one_over_two_q * *(b + 41 * OS1_S1 + 91) +
                one_over_two_q * *(b + 67 * OS1_S1 + 59);
            *(b + 67 * OS1_S1 + 133) =
                prefactor_y * *(b + 67 * OS1_S1 + 93) -
                p_over_q * *(b + 100 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 93);
            *(b + 67 * OS1_S1 + 134) =
                prefactor_z * *(b + 67 * OS1_S1 + 93) -
                p_over_q * *(b + 101 * OS1_S1 + 93) +
                one_over_two_q * *(b + 41 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 61);
            *(b + 67 * OS1_S1 + 135) =
                prefactor_x * *(b + 67 * OS1_S1 + 99) -
                p_over_q * *(b + 95 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 71);
            *(b + 67 * OS1_S1 + 136) = prefactor_z * *(b + 67 * OS1_S1 + 94) -
                                       p_over_q * *(b + 101 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 94);
            *(b + 67 * OS1_S1 + 137) =
                prefactor_z * *(b + 67 * OS1_S1 + 95) -
                p_over_q * *(b + 101 * OS1_S1 + 95) +
                one_over_two_q * *(b + 41 * OS1_S1 + 95) +
                one_over_two_q * *(b + 67 * OS1_S1 + 62);
            *(b + 67 * OS1_S1 + 138) =
                prefactor_y * *(b + 67 * OS1_S1 + 97) -
                p_over_q * *(b + 100 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 97) +
                one_over_two_q * *(b + 67 * OS1_S1 + 65);
            *(b + 67 * OS1_S1 + 139) =
                prefactor_y * *(b + 67 * OS1_S1 + 98) -
                p_over_q * *(b + 100 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 98);
            *(b + 67 * OS1_S1 + 140) =
                prefactor_x * *(b + 67 * OS1_S1 + 104) -
                p_over_q * *(b + 95 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 76);
            *(b + 67 * OS1_S1 + 141) =
                prefactor_x * *(b + 67 * OS1_S1 + 105) -
                p_over_q * *(b + 95 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 105) +
                one_over_two_q * *(b + 67 * OS1_S1 + 77);
            *(b + 67 * OS1_S1 + 142) = prefactor_z * *(b + 67 * OS1_S1 + 99) -
                                       p_over_q * *(b + 101 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 99);
            *(b + 67 * OS1_S1 + 143) =
                prefactor_z * *(b + 67 * OS1_S1 + 100) -
                p_over_q * *(b + 101 * OS1_S1 + 100) +
                one_over_two_q * *(b + 41 * OS1_S1 + 100) +
                one_over_two_q * *(b + 67 * OS1_S1 + 66);
            *(b + 67 * OS1_S1 + 144) =
                prefactor_x * *(b + 67 * OS1_S1 + 108) -
                p_over_q * *(b + 95 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 108) +
                one_over_two_q * *(b + 67 * OS1_S1 + 80);
            *(b + 67 * OS1_S1 + 145) =
                prefactor_x * *(b + 67 * OS1_S1 + 109) -
                p_over_q * *(b + 95 * OS1_S1 + 109) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 109) +
                one_over_two_q * *(b + 67 * OS1_S1 + 81);
            *(b + 67 * OS1_S1 + 146) =
                prefactor_y * *(b + 67 * OS1_S1 + 104) -
                p_over_q * *(b + 100 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 104);
            *(b + 67 * OS1_S1 + 147) =
                prefactor_x * *(b + 67 * OS1_S1 + 111) -
                p_over_q * *(b + 95 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 111) +
                one_over_two_q * *(b + 67 * OS1_S1 + 83);
            *(b + 67 * OS1_S1 + 148) =
                prefactor_x * *(b + 67 * OS1_S1 + 112) -
                p_over_q * *(b + 95 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 112);
            *(b + 67 * OS1_S1 + 149) =
                prefactor_z * *(b + 67 * OS1_S1 + 105) -
                p_over_q * *(b + 101 * OS1_S1 + 105) +
                one_over_two_q * *(b + 41 * OS1_S1 + 105);
            *(b + 67 * OS1_S1 + 150) =
                prefactor_x * *(b + 67 * OS1_S1 + 114) -
                p_over_q * *(b + 95 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 114);
            *(b + 67 * OS1_S1 + 151) =
                prefactor_x * *(b + 67 * OS1_S1 + 115) -
                p_over_q * *(b + 95 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 115);
            *(b + 67 * OS1_S1 + 152) =
                prefactor_x * *(b + 67 * OS1_S1 + 116) -
                p_over_q * *(b + 95 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 116);
            *(b + 67 * OS1_S1 + 153) =
                prefactor_x * *(b + 67 * OS1_S1 + 117) -
                p_over_q * *(b + 95 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 117);
            *(b + 67 * OS1_S1 + 154) =
                prefactor_x * *(b + 67 * OS1_S1 + 118) -
                p_over_q * *(b + 95 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 118);
            *(b + 67 * OS1_S1 + 155) =
                prefactor_x * *(b + 67 * OS1_S1 + 119) -
                p_over_q * *(b + 95 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 119);
            *(b + 67 * OS1_S1 + 156) =
                prefactor_y * *(b + 67 * OS1_S1 + 112) -
                p_over_q * *(b + 100 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 67 * OS1_S1 + 77);
            *(b + 67 * OS1_S1 + 157) =
                prefactor_z * *(b + 67 * OS1_S1 + 112) -
                p_over_q * *(b + 101 * OS1_S1 + 112) +
                one_over_two_q * *(b + 41 * OS1_S1 + 112);
            *(b + 67 * OS1_S1 + 158) =
                prefactor_z * *(b + 67 * OS1_S1 + 113) -
                p_over_q * *(b + 101 * OS1_S1 + 113) +
                one_over_two_q * *(b + 41 * OS1_S1 + 113) +
                one_over_two_q * *(b + 67 * OS1_S1 + 77);
            *(b + 67 * OS1_S1 + 159) =
                prefactor_z * *(b + 67 * OS1_S1 + 114) -
                p_over_q * *(b + 101 * OS1_S1 + 114) +
                one_over_two_q * *(b + 41 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 78);
            *(b + 67 * OS1_S1 + 160) =
                prefactor_z * *(b + 67 * OS1_S1 + 115) -
                p_over_q * *(b + 101 * OS1_S1 + 115) +
                one_over_two_q * *(b + 41 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 79);
            *(b + 67 * OS1_S1 + 161) =
                prefactor_y * *(b + 67 * OS1_S1 + 117) -
                p_over_q * *(b + 100 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 82);
            *(b + 67 * OS1_S1 + 162) =
                prefactor_y * *(b + 67 * OS1_S1 + 118) -
                p_over_q * *(b + 100 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 118) +
                one_over_two_q * *(b + 67 * OS1_S1 + 83);
            *(b + 67 * OS1_S1 + 163) =
                prefactor_y * *(b + 67 * OS1_S1 + 119) -
                p_over_q * *(b + 100 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 119);
            *(b + 67 * OS1_S1 + 164) =
                prefactor_z * *(b + 67 * OS1_S1 + 119) -
                p_over_q * *(b + 101 * OS1_S1 + 119) +
                one_over_two_q * *(b + 41 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 67 * OS1_S1 + 83);
            *(b + 68 * OS1_S1 + 120) =
                prefactor_x * *(b + 68 * OS1_S1 + 84) -
                p_over_q * *(b + 96 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 68 * OS1_S1 + 56);
            *(b + 68 * OS1_S1 + 121) =
                prefactor_y * *(b + 68 * OS1_S1 + 84) -
                p_over_q * *(b + 101 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 84);
            *(b + 68 * OS1_S1 + 122) =
                prefactor_z * *(b + 68 * OS1_S1 + 84) -
                p_over_q * *(b + 102 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 84);
            *(b + 68 * OS1_S1 + 123) =
                prefactor_y * *(b + 68 * OS1_S1 + 85) -
                p_over_q * *(b + 101 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 85) +
                one_over_two_q * *(b + 68 * OS1_S1 + 56);
            *(b + 68 * OS1_S1 + 124) =
                prefactor_z * *(b + 68 * OS1_S1 + 85) -
                p_over_q * *(b + 102 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 85);
            *(b + 68 * OS1_S1 + 125) =
                prefactor_z * *(b + 68 * OS1_S1 + 86) -
                p_over_q * *(b + 102 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 86) +
                one_over_two_q * *(b + 68 * OS1_S1 + 56);
            *(b + 68 * OS1_S1 + 126) =
                prefactor_y * *(b + 68 * OS1_S1 + 87) -
                p_over_q * *(b + 101 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 57);
            *(b + 68 * OS1_S1 + 127) =
                prefactor_z * *(b + 68 * OS1_S1 + 87) -
                p_over_q * *(b + 102 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 87);
            *(b + 68 * OS1_S1 + 128) =
                prefactor_y * *(b + 68 * OS1_S1 + 89) -
                p_over_q * *(b + 101 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 89);
            *(b + 68 * OS1_S1 + 129) =
                prefactor_z * *(b + 68 * OS1_S1 + 89) -
                p_over_q * *(b + 102 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 58);
            *(b + 68 * OS1_S1 + 130) =
                prefactor_y * *(b + 68 * OS1_S1 + 90) -
                p_over_q * *(b + 101 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 59);
            *(b + 68 * OS1_S1 + 131) =
                prefactor_z * *(b + 68 * OS1_S1 + 90) -
                p_over_q * *(b + 102 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 90);
            *(b + 68 * OS1_S1 + 132) =
                prefactor_z * *(b + 68 * OS1_S1 + 91) -
                p_over_q * *(b + 102 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 91) +
                one_over_two_q * *(b + 68 * OS1_S1 + 59);
            *(b + 68 * OS1_S1 + 133) =
                prefactor_y * *(b + 68 * OS1_S1 + 93) -
                p_over_q * *(b + 101 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 93);
            *(b + 68 * OS1_S1 + 134) =
                prefactor_z * *(b + 68 * OS1_S1 + 93) -
                p_over_q * *(b + 102 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 61);
            *(b + 68 * OS1_S1 + 135) =
                prefactor_x * *(b + 68 * OS1_S1 + 99) -
                p_over_q * *(b + 96 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 71);
            *(b + 68 * OS1_S1 + 136) =
                prefactor_z * *(b + 68 * OS1_S1 + 94) -
                p_over_q * *(b + 102 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 94);
            *(b + 68 * OS1_S1 + 137) =
                prefactor_z * *(b + 68 * OS1_S1 + 95) -
                p_over_q * *(b + 102 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 95) +
                one_over_two_q * *(b + 68 * OS1_S1 + 62);
            *(b + 68 * OS1_S1 + 138) =
                prefactor_y * *(b + 68 * OS1_S1 + 97) -
                p_over_q * *(b + 101 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 97) +
                one_over_two_q * *(b + 68 * OS1_S1 + 65);
            *(b + 68 * OS1_S1 + 139) =
                prefactor_y * *(b + 68 * OS1_S1 + 98) -
                p_over_q * *(b + 101 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 98);
            *(b + 68 * OS1_S1 + 140) =
                prefactor_x * *(b + 68 * OS1_S1 + 104) -
                p_over_q * *(b + 96 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 76);
            *(b + 68 * OS1_S1 + 141) =
                prefactor_x * *(b + 68 * OS1_S1 + 105) -
                p_over_q * *(b + 96 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 105) +
                one_over_two_q * *(b + 68 * OS1_S1 + 77);
            *(b + 68 * OS1_S1 + 142) =
                prefactor_z * *(b + 68 * OS1_S1 + 99) -
                p_over_q * *(b + 102 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 99);
            *(b + 68 * OS1_S1 + 143) =
                prefactor_z * *(b + 68 * OS1_S1 + 100) -
                p_over_q * *(b + 102 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 100) +
                one_over_two_q * *(b + 68 * OS1_S1 + 66);
            *(b + 68 * OS1_S1 + 144) =
                prefactor_x * *(b + 68 * OS1_S1 + 108) -
                p_over_q * *(b + 96 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 108) +
                one_over_two_q * *(b + 68 * OS1_S1 + 80);
            *(b + 68 * OS1_S1 + 145) =
                prefactor_y * *(b + 68 * OS1_S1 + 103) -
                p_over_q * *(b + 101 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 103) +
                one_over_two_q * *(b + 68 * OS1_S1 + 70);
            *(b + 68 * OS1_S1 + 146) =
                prefactor_y * *(b + 68 * OS1_S1 + 104) -
                p_over_q * *(b + 101 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 104);
            *(b + 68 * OS1_S1 + 147) =
                prefactor_x * *(b + 68 * OS1_S1 + 111) -
                p_over_q * *(b + 96 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 111) +
                one_over_two_q * *(b + 68 * OS1_S1 + 83);
            *(b + 68 * OS1_S1 + 148) =
                prefactor_x * *(b + 68 * OS1_S1 + 112) -
                p_over_q * *(b + 96 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 112);
            *(b + 68 * OS1_S1 + 149) =
                prefactor_z * *(b + 68 * OS1_S1 + 105) -
                p_over_q * *(b + 102 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 105);
            *(b + 68 * OS1_S1 + 150) =
                prefactor_x * *(b + 68 * OS1_S1 + 114) -
                p_over_q * *(b + 96 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 114);
            *(b + 68 * OS1_S1 + 151) =
                prefactor_x * *(b + 68 * OS1_S1 + 115) -
                p_over_q * *(b + 96 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 115);
            *(b + 68 * OS1_S1 + 152) =
                prefactor_x * *(b + 68 * OS1_S1 + 116) -
                p_over_q * *(b + 96 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 116);
            *(b + 68 * OS1_S1 + 153) =
                prefactor_x * *(b + 68 * OS1_S1 + 117) -
                p_over_q * *(b + 96 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 117);
            *(b + 68 * OS1_S1 + 154) =
                prefactor_y * *(b + 68 * OS1_S1 + 111) -
                p_over_q * *(b + 101 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 111);
            *(b + 68 * OS1_S1 + 155) =
                prefactor_x * *(b + 68 * OS1_S1 + 119) -
                p_over_q * *(b + 96 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 119);
            *(b + 68 * OS1_S1 + 156) =
                prefactor_y * *(b + 68 * OS1_S1 + 112) -
                p_over_q * *(b + 101 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 68 * OS1_S1 + 77);
            *(b + 68 * OS1_S1 + 157) =
                prefactor_z * *(b + 68 * OS1_S1 + 112) -
                p_over_q * *(b + 102 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 112);
            *(b + 68 * OS1_S1 + 158) =
                prefactor_z * *(b + 68 * OS1_S1 + 113) -
                p_over_q * *(b + 102 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 113) +
                one_over_two_q * *(b + 68 * OS1_S1 + 77);
            *(b + 68 * OS1_S1 + 159) =
                prefactor_z * *(b + 68 * OS1_S1 + 114) -
                p_over_q * *(b + 102 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 78);
            *(b + 68 * OS1_S1 + 160) =
                prefactor_z * *(b + 68 * OS1_S1 + 115) -
                p_over_q * *(b + 102 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 79);
            *(b + 68 * OS1_S1 + 161) =
                prefactor_y * *(b + 68 * OS1_S1 + 117) -
                p_over_q * *(b + 101 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 68 * OS1_S1 + 82);
            *(b + 68 * OS1_S1 + 162) =
                prefactor_y * *(b + 68 * OS1_S1 + 118) -
                p_over_q * *(b + 101 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 118) +
                one_over_two_q * *(b + 68 * OS1_S1 + 83);
            *(b + 68 * OS1_S1 + 163) =
                prefactor_y * *(b + 68 * OS1_S1 + 119) -
                p_over_q * *(b + 101 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 119);
            *(b + 68 * OS1_S1 + 164) =
                prefactor_z * *(b + 68 * OS1_S1 + 119) -
                p_over_q * *(b + 102 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 68 * OS1_S1 + 83);
            *(b + 69 * OS1_S1 + 120) =
                prefactor_x * *(b + 69 * OS1_S1 + 84) -
                p_over_q * *(b + 97 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 69 * OS1_S1 + 56);
            *(b + 69 * OS1_S1 + 121) = prefactor_y * *(b + 69 * OS1_S1 + 84) -
                                       p_over_q * *(b + 102 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 84);
            *(b + 69 * OS1_S1 + 122) =
                prefactor_z * *(b + 69 * OS1_S1 + 84) -
                p_over_q * *(b + 103 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 84);
            *(b + 69 * OS1_S1 + 123) =
                prefactor_y * *(b + 69 * OS1_S1 + 85) -
                p_over_q * *(b + 102 * OS1_S1 + 85) +
                one_over_two_q * *(b + 44 * OS1_S1 + 85) +
                one_over_two_q * *(b + 69 * OS1_S1 + 56);
            *(b + 69 * OS1_S1 + 124) = prefactor_y * *(b + 69 * OS1_S1 + 86) -
                                       p_over_q * *(b + 102 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 86);
            *(b + 69 * OS1_S1 + 125) =
                prefactor_z * *(b + 69 * OS1_S1 + 86) -
                p_over_q * *(b + 103 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 86) +
                one_over_two_q * *(b + 69 * OS1_S1 + 56);
            *(b + 69 * OS1_S1 + 126) =
                prefactor_y * *(b + 69 * OS1_S1 + 87) -
                p_over_q * *(b + 102 * OS1_S1 + 87) +
                one_over_two_q * *(b + 44 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 57);
            *(b + 69 * OS1_S1 + 127) =
                prefactor_z * *(b + 69 * OS1_S1 + 87) -
                p_over_q * *(b + 103 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 87);
            *(b + 69 * OS1_S1 + 128) = prefactor_y * *(b + 69 * OS1_S1 + 89) -
                                       p_over_q * *(b + 102 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 89);
            *(b + 69 * OS1_S1 + 129) =
                prefactor_z * *(b + 69 * OS1_S1 + 89) -
                p_over_q * *(b + 103 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 58);
            *(b + 69 * OS1_S1 + 130) =
                prefactor_y * *(b + 69 * OS1_S1 + 90) -
                p_over_q * *(b + 102 * OS1_S1 + 90) +
                one_over_two_q * *(b + 44 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 59);
            *(b + 69 * OS1_S1 + 131) =
                prefactor_z * *(b + 69 * OS1_S1 + 90) -
                p_over_q * *(b + 103 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 90);
            *(b + 69 * OS1_S1 + 132) =
                prefactor_y * *(b + 69 * OS1_S1 + 92) -
                p_over_q * *(b + 102 * OS1_S1 + 92) +
                one_over_two_q * *(b + 44 * OS1_S1 + 92) +
                one_over_two_q * *(b + 69 * OS1_S1 + 61);
            *(b + 69 * OS1_S1 + 133) = prefactor_y * *(b + 69 * OS1_S1 + 93) -
                                       p_over_q * *(b + 102 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 93);
            *(b + 69 * OS1_S1 + 134) =
                prefactor_x * *(b + 69 * OS1_S1 + 98) -
                p_over_q * *(b + 97 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 70);
            *(b + 69 * OS1_S1 + 135) =
                prefactor_x * *(b + 69 * OS1_S1 + 99) -
                p_over_q * *(b + 97 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 71);
            *(b + 69 * OS1_S1 + 136) =
                prefactor_z * *(b + 69 * OS1_S1 + 94) -
                p_over_q * *(b + 103 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 94);
            *(b + 69 * OS1_S1 + 137) =
                prefactor_z * *(b + 69 * OS1_S1 + 95) -
                p_over_q * *(b + 103 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 95) +
                one_over_two_q * *(b + 69 * OS1_S1 + 62);
            *(b + 69 * OS1_S1 + 138) =
                prefactor_y * *(b + 69 * OS1_S1 + 97) -
                p_over_q * *(b + 102 * OS1_S1 + 97) +
                one_over_two_q * *(b + 44 * OS1_S1 + 97) +
                one_over_two_q * *(b + 69 * OS1_S1 + 65);
            *(b + 69 * OS1_S1 + 139) = prefactor_y * *(b + 69 * OS1_S1 + 98) -
                                       p_over_q * *(b + 102 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 98);
            *(b + 69 * OS1_S1 + 140) =
                prefactor_x * *(b + 69 * OS1_S1 + 104) -
                p_over_q * *(b + 97 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 76);
            *(b + 69 * OS1_S1 + 141) =
                prefactor_x * *(b + 69 * OS1_S1 + 105) -
                p_over_q * *(b + 97 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 105) +
                one_over_two_q * *(b + 69 * OS1_S1 + 77);
            *(b + 69 * OS1_S1 + 142) =
                prefactor_z * *(b + 69 * OS1_S1 + 99) -
                p_over_q * *(b + 103 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 99);
            *(b + 69 * OS1_S1 + 143) =
                prefactor_x * *(b + 69 * OS1_S1 + 107) -
                p_over_q * *(b + 97 * OS1_S1 + 107) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 107) +
                one_over_two_q * *(b + 69 * OS1_S1 + 79);
            *(b + 69 * OS1_S1 + 144) =
                prefactor_x * *(b + 69 * OS1_S1 + 108) -
                p_over_q * *(b + 97 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 108) +
                one_over_two_q * *(b + 69 * OS1_S1 + 80);
            *(b + 69 * OS1_S1 + 145) =
                prefactor_y * *(b + 69 * OS1_S1 + 103) -
                p_over_q * *(b + 102 * OS1_S1 + 103) +
                one_over_two_q * *(b + 44 * OS1_S1 + 103) +
                one_over_two_q * *(b + 69 * OS1_S1 + 70);
            *(b + 69 * OS1_S1 + 146) =
                prefactor_y * *(b + 69 * OS1_S1 + 104) -
                p_over_q * *(b + 102 * OS1_S1 + 104) +
                one_over_two_q * *(b + 44 * OS1_S1 + 104);
            *(b + 69 * OS1_S1 + 147) =
                prefactor_x * *(b + 69 * OS1_S1 + 111) -
                p_over_q * *(b + 97 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 111) +
                one_over_two_q * *(b + 69 * OS1_S1 + 83);
            *(b + 69 * OS1_S1 + 148) =
                prefactor_x * *(b + 69 * OS1_S1 + 112) -
                p_over_q * *(b + 97 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 112);
            *(b + 69 * OS1_S1 + 149) =
                prefactor_x * *(b + 69 * OS1_S1 + 113) -
                p_over_q * *(b + 97 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 113);
            *(b + 69 * OS1_S1 + 150) =
                prefactor_x * *(b + 69 * OS1_S1 + 114) -
                p_over_q * *(b + 97 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 114);
            *(b + 69 * OS1_S1 + 151) =
                prefactor_x * *(b + 69 * OS1_S1 + 115) -
                p_over_q * *(b + 97 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 115);
            *(b + 69 * OS1_S1 + 152) =
                prefactor_x * *(b + 69 * OS1_S1 + 116) -
                p_over_q * *(b + 97 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 116);
            *(b + 69 * OS1_S1 + 153) =
                prefactor_x * *(b + 69 * OS1_S1 + 117) -
                p_over_q * *(b + 97 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 117);
            *(b + 69 * OS1_S1 + 154) =
                prefactor_y * *(b + 69 * OS1_S1 + 111) -
                p_over_q * *(b + 102 * OS1_S1 + 111) +
                one_over_two_q * *(b + 44 * OS1_S1 + 111);
            *(b + 69 * OS1_S1 + 155) =
                prefactor_x * *(b + 69 * OS1_S1 + 119) -
                p_over_q * *(b + 97 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 119);
            *(b + 69 * OS1_S1 + 156) =
                prefactor_y * *(b + 69 * OS1_S1 + 112) -
                p_over_q * *(b + 102 * OS1_S1 + 112) +
                one_over_two_q * *(b + 44 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 69 * OS1_S1 + 77);
            *(b + 69 * OS1_S1 + 157) =
                prefactor_z * *(b + 69 * OS1_S1 + 112) -
                p_over_q * *(b + 103 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 112);
            *(b + 69 * OS1_S1 + 158) =
                prefactor_z * *(b + 69 * OS1_S1 + 113) -
                p_over_q * *(b + 103 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 113) +
                one_over_two_q * *(b + 69 * OS1_S1 + 77);
            *(b + 69 * OS1_S1 + 159) =
                prefactor_z * *(b + 69 * OS1_S1 + 114) -
                p_over_q * *(b + 103 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 78);
            *(b + 69 * OS1_S1 + 160) =
                prefactor_y * *(b + 69 * OS1_S1 + 116) -
                p_over_q * *(b + 102 * OS1_S1 + 116) +
                one_over_two_q * *(b + 44 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 81);
            *(b + 69 * OS1_S1 + 161) =
                prefactor_y * *(b + 69 * OS1_S1 + 117) -
                p_over_q * *(b + 102 * OS1_S1 + 117) +
                one_over_two_q * *(b + 44 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 82);
            *(b + 69 * OS1_S1 + 162) =
                prefactor_y * *(b + 69 * OS1_S1 + 118) -
                p_over_q * *(b + 102 * OS1_S1 + 118) +
                one_over_two_q * *(b + 44 * OS1_S1 + 118) +
                one_over_two_q * *(b + 69 * OS1_S1 + 83);
            *(b + 69 * OS1_S1 + 163) =
                prefactor_y * *(b + 69 * OS1_S1 + 119) -
                p_over_q * *(b + 102 * OS1_S1 + 119) +
                one_over_two_q * *(b + 44 * OS1_S1 + 119);
            *(b + 69 * OS1_S1 + 164) =
                prefactor_z * *(b + 69 * OS1_S1 + 119) -
                p_over_q * *(b + 103 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 69 * OS1_S1 + 83);
            *(b + 70 * OS1_S1 + 120) =
                prefactor_x * *(b + 70 * OS1_S1 + 84) -
                p_over_q * *(b + 98 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 70 * OS1_S1 + 56);
            *(b + 70 * OS1_S1 + 121) = prefactor_y * *(b + 70 * OS1_S1 + 84) -
                                       p_over_q * *(b + 103 * OS1_S1 + 84);
            *(b + 70 * OS1_S1 + 122) =
                prefactor_z * *(b + 70 * OS1_S1 + 84) -
                p_over_q * *(b + 104 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 84);
            *(b + 70 * OS1_S1 + 123) = prefactor_y * *(b + 70 * OS1_S1 + 85) -
                                       p_over_q * *(b + 103 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 56);
            *(b + 70 * OS1_S1 + 124) = prefactor_y * *(b + 70 * OS1_S1 + 86) -
                                       p_over_q * *(b + 103 * OS1_S1 + 86);
            *(b + 70 * OS1_S1 + 125) =
                prefactor_z * *(b + 70 * OS1_S1 + 86) -
                p_over_q * *(b + 104 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 86) +
                one_over_two_q * *(b + 70 * OS1_S1 + 56);
            *(b + 70 * OS1_S1 + 126) =
                prefactor_y * *(b + 70 * OS1_S1 + 87) -
                p_over_q * *(b + 103 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 57);
            *(b + 70 * OS1_S1 + 127) =
                prefactor_z * *(b + 70 * OS1_S1 + 87) -
                p_over_q * *(b + 104 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 87);
            *(b + 70 * OS1_S1 + 128) = prefactor_y * *(b + 70 * OS1_S1 + 89) -
                                       p_over_q * *(b + 103 * OS1_S1 + 89);
            *(b + 70 * OS1_S1 + 129) =
                prefactor_z * *(b + 70 * OS1_S1 + 89) -
                p_over_q * *(b + 104 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 58);
            *(b + 70 * OS1_S1 + 130) =
                prefactor_y * *(b + 70 * OS1_S1 + 90) -
                p_over_q * *(b + 103 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 59);
            *(b + 70 * OS1_S1 + 131) =
                prefactor_z * *(b + 70 * OS1_S1 + 90) -
                p_over_q * *(b + 104 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 90);
            *(b + 70 * OS1_S1 + 132) = prefactor_y * *(b + 70 * OS1_S1 + 92) -
                                       p_over_q * *(b + 103 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 61);
            *(b + 70 * OS1_S1 + 133) = prefactor_y * *(b + 70 * OS1_S1 + 93) -
                                       p_over_q * *(b + 103 * OS1_S1 + 93);
            *(b + 70 * OS1_S1 + 134) =
                prefactor_x * *(b + 70 * OS1_S1 + 98) -
                p_over_q * *(b + 98 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 70);
            *(b + 70 * OS1_S1 + 135) =
                prefactor_x * *(b + 70 * OS1_S1 + 99) -
                p_over_q * *(b + 98 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 71);
            *(b + 70 * OS1_S1 + 136) =
                prefactor_z * *(b + 70 * OS1_S1 + 94) -
                p_over_q * *(b + 104 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 94);
            *(b + 70 * OS1_S1 + 137) =
                prefactor_z * *(b + 70 * OS1_S1 + 95) -
                p_over_q * *(b + 104 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 95) +
                one_over_two_q * *(b + 70 * OS1_S1 + 62);
            *(b + 70 * OS1_S1 + 138) = prefactor_y * *(b + 70 * OS1_S1 + 97) -
                                       p_over_q * *(b + 103 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 65);
            *(b + 70 * OS1_S1 + 139) = prefactor_y * *(b + 70 * OS1_S1 + 98) -
                                       p_over_q * *(b + 103 * OS1_S1 + 98);
            *(b + 70 * OS1_S1 + 140) =
                prefactor_x * *(b + 70 * OS1_S1 + 104) -
                p_over_q * *(b + 98 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 76);
            *(b + 70 * OS1_S1 + 141) =
                prefactor_x * *(b + 70 * OS1_S1 + 105) -
                p_over_q * *(b + 98 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 105) +
                one_over_two_q * *(b + 70 * OS1_S1 + 77);
            *(b + 70 * OS1_S1 + 142) =
                prefactor_z * *(b + 70 * OS1_S1 + 99) -
                p_over_q * *(b + 104 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 99);
            *(b + 70 * OS1_S1 + 143) =
                prefactor_x * *(b + 70 * OS1_S1 + 107) -
                p_over_q * *(b + 98 * OS1_S1 + 107) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 107) +
                one_over_two_q * *(b + 70 * OS1_S1 + 79);
            *(b + 70 * OS1_S1 + 144) =
                prefactor_x * *(b + 70 * OS1_S1 + 108) -
                p_over_q * *(b + 98 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 108) +
                one_over_two_q * *(b + 70 * OS1_S1 + 80);
            *(b + 70 * OS1_S1 + 145) = prefactor_y * *(b + 70 * OS1_S1 + 103) -
                                       p_over_q * *(b + 103 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 70);
            *(b + 70 * OS1_S1 + 146) = prefactor_y * *(b + 70 * OS1_S1 + 104) -
                                       p_over_q * *(b + 103 * OS1_S1 + 104);
            *(b + 70 * OS1_S1 + 147) =
                prefactor_x * *(b + 70 * OS1_S1 + 111) -
                p_over_q * *(b + 98 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 111) +
                one_over_two_q * *(b + 70 * OS1_S1 + 83);
            *(b + 70 * OS1_S1 + 148) =
                prefactor_x * *(b + 70 * OS1_S1 + 112) -
                p_over_q * *(b + 98 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 112);
            *(b + 70 * OS1_S1 + 149) =
                prefactor_x * *(b + 70 * OS1_S1 + 113) -
                p_over_q * *(b + 98 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 113);
            *(b + 70 * OS1_S1 + 150) =
                prefactor_x * *(b + 70 * OS1_S1 + 114) -
                p_over_q * *(b + 98 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 114);
            *(b + 70 * OS1_S1 + 151) =
                prefactor_x * *(b + 70 * OS1_S1 + 115) -
                p_over_q * *(b + 98 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 115);
            *(b + 70 * OS1_S1 + 152) =
                prefactor_x * *(b + 70 * OS1_S1 + 116) -
                p_over_q * *(b + 98 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 116);
            *(b + 70 * OS1_S1 + 153) =
                prefactor_x * *(b + 70 * OS1_S1 + 117) -
                p_over_q * *(b + 98 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 117);
            *(b + 70 * OS1_S1 + 154) = prefactor_y * *(b + 70 * OS1_S1 + 111) -
                                       p_over_q * *(b + 103 * OS1_S1 + 111);
            *(b + 70 * OS1_S1 + 155) =
                prefactor_x * *(b + 70 * OS1_S1 + 119) -
                p_over_q * *(b + 98 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 119);
            *(b + 70 * OS1_S1 + 156) =
                prefactor_y * *(b + 70 * OS1_S1 + 112) -
                p_over_q * *(b + 103 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 70 * OS1_S1 + 77);
            *(b + 70 * OS1_S1 + 157) =
                prefactor_z * *(b + 70 * OS1_S1 + 112) -
                p_over_q * *(b + 104 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 112);
            *(b + 70 * OS1_S1 + 158) =
                prefactor_z * *(b + 70 * OS1_S1 + 113) -
                p_over_q * *(b + 104 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 113) +
                one_over_two_q * *(b + 70 * OS1_S1 + 77);
            *(b + 70 * OS1_S1 + 159) =
                prefactor_z * *(b + 70 * OS1_S1 + 114) -
                p_over_q * *(b + 104 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 78);
            *(b + 70 * OS1_S1 + 160) =
                prefactor_y * *(b + 70 * OS1_S1 + 116) -
                p_over_q * *(b + 103 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 81);
            *(b + 70 * OS1_S1 + 161) =
                prefactor_y * *(b + 70 * OS1_S1 + 117) -
                p_over_q * *(b + 103 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 70 * OS1_S1 + 82);
            *(b + 70 * OS1_S1 + 162) = prefactor_y * *(b + 70 * OS1_S1 + 118) -
                                       p_over_q * *(b + 103 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 70 * OS1_S1 + 83);
            *(b + 70 * OS1_S1 + 163) = prefactor_y * *(b + 70 * OS1_S1 + 119) -
                                       p_over_q * *(b + 103 * OS1_S1 + 119);
            *(b + 70 * OS1_S1 + 164) =
                prefactor_z * *(b + 70 * OS1_S1 + 119) -
                p_over_q * *(b + 104 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 44 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 70 * OS1_S1 + 83);
            *(b + 71 * OS1_S1 + 120) =
                prefactor_x * *(b + 71 * OS1_S1 + 84) -
                p_over_q * *(b + 99 * OS1_S1 + 84) +
                one_over_two_q * *(b + 50 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 71 * OS1_S1 + 56);
            *(b + 71 * OS1_S1 + 121) =
                prefactor_y * *(b + 71 * OS1_S1 + 84) -
                p_over_q * *(b + 105 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 84);
            *(b + 71 * OS1_S1 + 122) = prefactor_z * *(b + 71 * OS1_S1 + 84) -
                                       p_over_q * *(b + 106 * OS1_S1 + 84);
            *(b + 71 * OS1_S1 + 123) =
                prefactor_y * *(b + 71 * OS1_S1 + 85) -
                p_over_q * *(b + 105 * OS1_S1 + 85) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 85) +
                one_over_two_q * *(b + 71 * OS1_S1 + 56);
            *(b + 71 * OS1_S1 + 124) = prefactor_z * *(b + 71 * OS1_S1 + 85) -
                                       p_over_q * *(b + 106 * OS1_S1 + 85);
            *(b + 71 * OS1_S1 + 125) = prefactor_z * *(b + 71 * OS1_S1 + 86) -
                                       p_over_q * *(b + 106 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 56);
            *(b + 71 * OS1_S1 + 126) =
                prefactor_y * *(b + 71 * OS1_S1 + 87) -
                p_over_q * *(b + 105 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 57);
            *(b + 71 * OS1_S1 + 127) = prefactor_z * *(b + 71 * OS1_S1 + 87) -
                                       p_over_q * *(b + 106 * OS1_S1 + 87);
            *(b + 71 * OS1_S1 + 128) =
                prefactor_y * *(b + 71 * OS1_S1 + 89) -
                p_over_q * *(b + 105 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 89);
            *(b + 71 * OS1_S1 + 129) =
                prefactor_z * *(b + 71 * OS1_S1 + 89) -
                p_over_q * *(b + 106 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 58);
            *(b + 71 * OS1_S1 + 130) =
                prefactor_x * *(b + 71 * OS1_S1 + 94) -
                p_over_q * *(b + 99 * OS1_S1 + 94) +
                one_over_two_q * *(b + 50 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 71 * OS1_S1 + 66);
            *(b + 71 * OS1_S1 + 131) = prefactor_z * *(b + 71 * OS1_S1 + 90) -
                                       p_over_q * *(b + 106 * OS1_S1 + 90);
            *(b + 71 * OS1_S1 + 132) = prefactor_z * *(b + 71 * OS1_S1 + 91) -
                                       p_over_q * *(b + 106 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 59);
            *(b + 71 * OS1_S1 + 133) =
                prefactor_y * *(b + 71 * OS1_S1 + 93) -
                p_over_q * *(b + 105 * OS1_S1 + 93) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 93);
            *(b + 71 * OS1_S1 + 134) =
                prefactor_z * *(b + 71 * OS1_S1 + 93) -
                p_over_q * *(b + 106 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 71 * OS1_S1 + 61);
            *(b + 71 * OS1_S1 + 135) =
                prefactor_x * *(b + 71 * OS1_S1 + 99) -
                p_over_q * *(b + 99 * OS1_S1 + 99) +
                one_over_two_q * *(b + 50 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 71);
            *(b + 71 * OS1_S1 + 136) = prefactor_z * *(b + 71 * OS1_S1 + 94) -
                                       p_over_q * *(b + 106 * OS1_S1 + 94);
            *(b + 71 * OS1_S1 + 137) = prefactor_z * *(b + 71 * OS1_S1 + 95) -
                                       p_over_q * *(b + 106 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 62);
            *(b + 71 * OS1_S1 + 138) =
                prefactor_y * *(b + 71 * OS1_S1 + 97) -
                p_over_q * *(b + 105 * OS1_S1 + 97) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 97) +
                one_over_two_q * *(b + 71 * OS1_S1 + 65);
            *(b + 71 * OS1_S1 + 139) =
                prefactor_y * *(b + 71 * OS1_S1 + 98) -
                p_over_q * *(b + 105 * OS1_S1 + 98) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 98);
            *(b + 71 * OS1_S1 + 140) =
                prefactor_x * *(b + 71 * OS1_S1 + 104) -
                p_over_q * *(b + 99 * OS1_S1 + 104) +
                one_over_two_q * *(b + 50 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 76);
            *(b + 71 * OS1_S1 + 141) =
                prefactor_x * *(b + 71 * OS1_S1 + 105) -
                p_over_q * *(b + 99 * OS1_S1 + 105) +
                one_over_two_q * *(b + 50 * OS1_S1 + 105) +
                one_over_two_q * *(b + 71 * OS1_S1 + 77);
            *(b + 71 * OS1_S1 + 142) = prefactor_z * *(b + 71 * OS1_S1 + 99) -
                                       p_over_q * *(b + 106 * OS1_S1 + 99);
            *(b + 71 * OS1_S1 + 143) = prefactor_z * *(b + 71 * OS1_S1 + 100) -
                                       p_over_q * *(b + 106 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 66);
            *(b + 71 * OS1_S1 + 144) =
                prefactor_x * *(b + 71 * OS1_S1 + 108) -
                p_over_q * *(b + 99 * OS1_S1 + 108) +
                one_over_two_q * *(b + 50 * OS1_S1 + 108) +
                one_over_two_q * *(b + 71 * OS1_S1 + 80);
            *(b + 71 * OS1_S1 + 145) =
                prefactor_x * *(b + 71 * OS1_S1 + 109) -
                p_over_q * *(b + 99 * OS1_S1 + 109) +
                one_over_two_q * *(b + 50 * OS1_S1 + 109) +
                one_over_two_q * *(b + 71 * OS1_S1 + 81);
            *(b + 71 * OS1_S1 + 146) =
                prefactor_y * *(b + 71 * OS1_S1 + 104) -
                p_over_q * *(b + 105 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 104);
            *(b + 71 * OS1_S1 + 147) =
                prefactor_x * *(b + 71 * OS1_S1 + 111) -
                p_over_q * *(b + 99 * OS1_S1 + 111) +
                one_over_two_q * *(b + 50 * OS1_S1 + 111) +
                one_over_two_q * *(b + 71 * OS1_S1 + 83);
            *(b + 71 * OS1_S1 + 148) =
                prefactor_x * *(b + 71 * OS1_S1 + 112) -
                p_over_q * *(b + 99 * OS1_S1 + 112) +
                one_over_two_q * *(b + 50 * OS1_S1 + 112);
            *(b + 71 * OS1_S1 + 149) = prefactor_z * *(b + 71 * OS1_S1 + 105) -
                                       p_over_q * *(b + 106 * OS1_S1 + 105);
            *(b + 71 * OS1_S1 + 150) =
                prefactor_x * *(b + 71 * OS1_S1 + 114) -
                p_over_q * *(b + 99 * OS1_S1 + 114) +
                one_over_two_q * *(b + 50 * OS1_S1 + 114);
            *(b + 71 * OS1_S1 + 151) =
                prefactor_x * *(b + 71 * OS1_S1 + 115) -
                p_over_q * *(b + 99 * OS1_S1 + 115) +
                one_over_two_q * *(b + 50 * OS1_S1 + 115);
            *(b + 71 * OS1_S1 + 152) =
                prefactor_x * *(b + 71 * OS1_S1 + 116) -
                p_over_q * *(b + 99 * OS1_S1 + 116) +
                one_over_two_q * *(b + 50 * OS1_S1 + 116);
            *(b + 71 * OS1_S1 + 153) =
                prefactor_x * *(b + 71 * OS1_S1 + 117) -
                p_over_q * *(b + 99 * OS1_S1 + 117) +
                one_over_two_q * *(b + 50 * OS1_S1 + 117);
            *(b + 71 * OS1_S1 + 154) =
                prefactor_x * *(b + 71 * OS1_S1 + 118) -
                p_over_q * *(b + 99 * OS1_S1 + 118) +
                one_over_two_q * *(b + 50 * OS1_S1 + 118);
            *(b + 71 * OS1_S1 + 155) =
                prefactor_x * *(b + 71 * OS1_S1 + 119) -
                p_over_q * *(b + 99 * OS1_S1 + 119) +
                one_over_two_q * *(b + 50 * OS1_S1 + 119);
            *(b + 71 * OS1_S1 + 156) =
                prefactor_y * *(b + 71 * OS1_S1 + 112) -
                p_over_q * *(b + 105 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 71 * OS1_S1 + 77);
            *(b + 71 * OS1_S1 + 157) = prefactor_z * *(b + 71 * OS1_S1 + 112) -
                                       p_over_q * *(b + 106 * OS1_S1 + 112);
            *(b + 71 * OS1_S1 + 158) = prefactor_z * *(b + 71 * OS1_S1 + 113) -
                                       p_over_q * *(b + 106 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 71 * OS1_S1 + 77);
            *(b + 71 * OS1_S1 + 159) =
                prefactor_z * *(b + 71 * OS1_S1 + 114) -
                p_over_q * *(b + 106 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 78);
            *(b + 71 * OS1_S1 + 160) =
                prefactor_z * *(b + 71 * OS1_S1 + 115) -
                p_over_q * *(b + 106 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 71 * OS1_S1 + 79);
            *(b + 71 * OS1_S1 + 161) =
                prefactor_y * *(b + 71 * OS1_S1 + 117) -
                p_over_q * *(b + 105 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 82);
            *(b + 71 * OS1_S1 + 162) =
                prefactor_y * *(b + 71 * OS1_S1 + 118) -
                p_over_q * *(b + 105 * OS1_S1 + 118) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 118) +
                one_over_two_q * *(b + 71 * OS1_S1 + 83);
            *(b + 71 * OS1_S1 + 163) =
                prefactor_y * *(b + 71 * OS1_S1 + 119) -
                p_over_q * *(b + 105 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 45 * OS1_S1 + 119);
            *(b + 71 * OS1_S1 + 164) =
                prefactor_z * *(b + 71 * OS1_S1 + 119) -
                p_over_q * *(b + 106 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 71 * OS1_S1 + 83);
            *(b + 72 * OS1_S1 + 120) =
                prefactor_x * *(b + 72 * OS1_S1 + 84) -
                p_over_q * *(b + 100 * OS1_S1 + 84) +
                one_over_two_q * *(b + 51 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 72 * OS1_S1 + 56);
            *(b + 72 * OS1_S1 + 121) =
                prefactor_y * *(b + 72 * OS1_S1 + 84) -
                p_over_q * *(b + 106 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 84);
            *(b + 72 * OS1_S1 + 122) = prefactor_z * *(b + 72 * OS1_S1 + 84) -
                                       p_over_q * *(b + 107 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 84);
            *(b + 72 * OS1_S1 + 123) =
                prefactor_y * *(b + 72 * OS1_S1 + 85) -
                p_over_q * *(b + 106 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 85) +
                one_over_two_q * *(b + 72 * OS1_S1 + 56);
            *(b + 72 * OS1_S1 + 124) = prefactor_z * *(b + 72 * OS1_S1 + 85) -
                                       p_over_q * *(b + 107 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 85);
            *(b + 72 * OS1_S1 + 125) =
                prefactor_z * *(b + 72 * OS1_S1 + 86) -
                p_over_q * *(b + 107 * OS1_S1 + 86) +
                one_over_two_q * *(b + 45 * OS1_S1 + 86) +
                one_over_two_q * *(b + 72 * OS1_S1 + 56);
            *(b + 72 * OS1_S1 + 126) =
                prefactor_y * *(b + 72 * OS1_S1 + 87) -
                p_over_q * *(b + 106 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 57);
            *(b + 72 * OS1_S1 + 127) = prefactor_z * *(b + 72 * OS1_S1 + 87) -
                                       p_over_q * *(b + 107 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 87);
            *(b + 72 * OS1_S1 + 128) =
                prefactor_y * *(b + 72 * OS1_S1 + 89) -
                p_over_q * *(b + 106 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 89);
            *(b + 72 * OS1_S1 + 129) =
                prefactor_z * *(b + 72 * OS1_S1 + 89) -
                p_over_q * *(b + 107 * OS1_S1 + 89) +
                one_over_two_q * *(b + 45 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 58);
            *(b + 72 * OS1_S1 + 130) =
                prefactor_x * *(b + 72 * OS1_S1 + 94) -
                p_over_q * *(b + 100 * OS1_S1 + 94) +
                one_over_two_q * *(b + 51 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 72 * OS1_S1 + 66);
            *(b + 72 * OS1_S1 + 131) = prefactor_z * *(b + 72 * OS1_S1 + 90) -
                                       p_over_q * *(b + 107 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 90);
            *(b + 72 * OS1_S1 + 132) =
                prefactor_z * *(b + 72 * OS1_S1 + 91) -
                p_over_q * *(b + 107 * OS1_S1 + 91) +
                one_over_two_q * *(b + 45 * OS1_S1 + 91) +
                one_over_two_q * *(b + 72 * OS1_S1 + 59);
            *(b + 72 * OS1_S1 + 133) =
                prefactor_y * *(b + 72 * OS1_S1 + 93) -
                p_over_q * *(b + 106 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 93);
            *(b + 72 * OS1_S1 + 134) =
                prefactor_z * *(b + 72 * OS1_S1 + 93) -
                p_over_q * *(b + 107 * OS1_S1 + 93) +
                one_over_two_q * *(b + 45 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 72 * OS1_S1 + 61);
            *(b + 72 * OS1_S1 + 135) =
                prefactor_x * *(b + 72 * OS1_S1 + 99) -
                p_over_q * *(b + 100 * OS1_S1 + 99) +
                one_over_two_q * *(b + 51 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 71);
            *(b + 72 * OS1_S1 + 136) = prefactor_z * *(b + 72 * OS1_S1 + 94) -
                                       p_over_q * *(b + 107 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 94);
            *(b + 72 * OS1_S1 + 137) =
                prefactor_z * *(b + 72 * OS1_S1 + 95) -
                p_over_q * *(b + 107 * OS1_S1 + 95) +
                one_over_two_q * *(b + 45 * OS1_S1 + 95) +
                one_over_two_q * *(b + 72 * OS1_S1 + 62);
            *(b + 72 * OS1_S1 + 138) =
                prefactor_y * *(b + 72 * OS1_S1 + 97) -
                p_over_q * *(b + 106 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 97) +
                one_over_two_q * *(b + 72 * OS1_S1 + 65);
            *(b + 72 * OS1_S1 + 139) =
                prefactor_y * *(b + 72 * OS1_S1 + 98) -
                p_over_q * *(b + 106 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 98);
            *(b + 72 * OS1_S1 + 140) =
                prefactor_x * *(b + 72 * OS1_S1 + 104) -
                p_over_q * *(b + 100 * OS1_S1 + 104) +
                one_over_two_q * *(b + 51 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 76);
            *(b + 72 * OS1_S1 + 141) =
                prefactor_x * *(b + 72 * OS1_S1 + 105) -
                p_over_q * *(b + 100 * OS1_S1 + 105) +
                one_over_two_q * *(b + 51 * OS1_S1 + 105) +
                one_over_two_q * *(b + 72 * OS1_S1 + 77);
            *(b + 72 * OS1_S1 + 142) = prefactor_z * *(b + 72 * OS1_S1 + 99) -
                                       p_over_q * *(b + 107 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 99);
            *(b + 72 * OS1_S1 + 143) =
                prefactor_z * *(b + 72 * OS1_S1 + 100) -
                p_over_q * *(b + 107 * OS1_S1 + 100) +
                one_over_two_q * *(b + 45 * OS1_S1 + 100) +
                one_over_two_q * *(b + 72 * OS1_S1 + 66);
            *(b + 72 * OS1_S1 + 144) =
                prefactor_x * *(b + 72 * OS1_S1 + 108) -
                p_over_q * *(b + 100 * OS1_S1 + 108) +
                one_over_two_q * *(b + 51 * OS1_S1 + 108) +
                one_over_two_q * *(b + 72 * OS1_S1 + 80);
            *(b + 72 * OS1_S1 + 145) =
                prefactor_x * *(b + 72 * OS1_S1 + 109) -
                p_over_q * *(b + 100 * OS1_S1 + 109) +
                one_over_two_q * *(b + 51 * OS1_S1 + 109) +
                one_over_two_q * *(b + 72 * OS1_S1 + 81);
            *(b + 72 * OS1_S1 + 146) =
                prefactor_y * *(b + 72 * OS1_S1 + 104) -
                p_over_q * *(b + 106 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 104);
            *(b + 72 * OS1_S1 + 147) =
                prefactor_x * *(b + 72 * OS1_S1 + 111) -
                p_over_q * *(b + 100 * OS1_S1 + 111) +
                one_over_two_q * *(b + 51 * OS1_S1 + 111) +
                one_over_two_q * *(b + 72 * OS1_S1 + 83);
            *(b + 72 * OS1_S1 + 148) =
                prefactor_x * *(b + 72 * OS1_S1 + 112) -
                p_over_q * *(b + 100 * OS1_S1 + 112) +
                one_over_two_q * *(b + 51 * OS1_S1 + 112);
            *(b + 72 * OS1_S1 + 149) =
                prefactor_z * *(b + 72 * OS1_S1 + 105) -
                p_over_q * *(b + 107 * OS1_S1 + 105) +
                one_over_two_q * *(b + 45 * OS1_S1 + 105);
            *(b + 72 * OS1_S1 + 150) =
                prefactor_x * *(b + 72 * OS1_S1 + 114) -
                p_over_q * *(b + 100 * OS1_S1 + 114) +
                one_over_two_q * *(b + 51 * OS1_S1 + 114);
            *(b + 72 * OS1_S1 + 151) =
                prefactor_x * *(b + 72 * OS1_S1 + 115) -
                p_over_q * *(b + 100 * OS1_S1 + 115) +
                one_over_two_q * *(b + 51 * OS1_S1 + 115);
            *(b + 72 * OS1_S1 + 152) =
                prefactor_x * *(b + 72 * OS1_S1 + 116) -
                p_over_q * *(b + 100 * OS1_S1 + 116) +
                one_over_two_q * *(b + 51 * OS1_S1 + 116);
            *(b + 72 * OS1_S1 + 153) =
                prefactor_x * *(b + 72 * OS1_S1 + 117) -
                p_over_q * *(b + 100 * OS1_S1 + 117) +
                one_over_two_q * *(b + 51 * OS1_S1 + 117);
            *(b + 72 * OS1_S1 + 154) =
                prefactor_x * *(b + 72 * OS1_S1 + 118) -
                p_over_q * *(b + 100 * OS1_S1 + 118) +
                one_over_two_q * *(b + 51 * OS1_S1 + 118);
            *(b + 72 * OS1_S1 + 155) =
                prefactor_x * *(b + 72 * OS1_S1 + 119) -
                p_over_q * *(b + 100 * OS1_S1 + 119) +
                one_over_two_q * *(b + 51 * OS1_S1 + 119);
            *(b + 72 * OS1_S1 + 156) =
                prefactor_y * *(b + 72 * OS1_S1 + 112) -
                p_over_q * *(b + 106 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 72 * OS1_S1 + 77);
            *(b + 72 * OS1_S1 + 157) =
                prefactor_z * *(b + 72 * OS1_S1 + 112) -
                p_over_q * *(b + 107 * OS1_S1 + 112) +
                one_over_two_q * *(b + 45 * OS1_S1 + 112);
            *(b + 72 * OS1_S1 + 158) =
                prefactor_z * *(b + 72 * OS1_S1 + 113) -
                p_over_q * *(b + 107 * OS1_S1 + 113) +
                one_over_two_q * *(b + 45 * OS1_S1 + 113) +
                one_over_two_q * *(b + 72 * OS1_S1 + 77);
            *(b + 72 * OS1_S1 + 159) =
                prefactor_z * *(b + 72 * OS1_S1 + 114) -
                p_over_q * *(b + 107 * OS1_S1 + 114) +
                one_over_two_q * *(b + 45 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 78);
            *(b + 72 * OS1_S1 + 160) =
                prefactor_z * *(b + 72 * OS1_S1 + 115) -
                p_over_q * *(b + 107 * OS1_S1 + 115) +
                one_over_two_q * *(b + 45 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 72 * OS1_S1 + 79);
            *(b + 72 * OS1_S1 + 161) =
                prefactor_y * *(b + 72 * OS1_S1 + 117) -
                p_over_q * *(b + 106 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 82);
            *(b + 72 * OS1_S1 + 162) =
                prefactor_y * *(b + 72 * OS1_S1 + 118) -
                p_over_q * *(b + 106 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 118) +
                one_over_two_q * *(b + 72 * OS1_S1 + 83);
            *(b + 72 * OS1_S1 + 163) =
                prefactor_y * *(b + 72 * OS1_S1 + 119) -
                p_over_q * *(b + 106 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 46 * OS1_S1 + 119);
            *(b + 72 * OS1_S1 + 164) =
                prefactor_z * *(b + 72 * OS1_S1 + 119) -
                p_over_q * *(b + 107 * OS1_S1 + 119) +
                one_over_two_q * *(b + 45 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 72 * OS1_S1 + 83);
            *(b + 73 * OS1_S1 + 120) =
                prefactor_x * *(b + 73 * OS1_S1 + 84) -
                p_over_q * *(b + 101 * OS1_S1 + 84) +
                one_over_two_q * *(b + 52 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 73 * OS1_S1 + 56);
            *(b + 73 * OS1_S1 + 121) =
                prefactor_y * *(b + 73 * OS1_S1 + 84) -
                p_over_q * *(b + 107 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 84);
            *(b + 73 * OS1_S1 + 122) =
                prefactor_z * *(b + 73 * OS1_S1 + 84) -
                p_over_q * *(b + 108 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 84);
            *(b + 73 * OS1_S1 + 123) =
                prefactor_y * *(b + 73 * OS1_S1 + 85) -
                p_over_q * *(b + 107 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 85) +
                one_over_two_q * *(b + 73 * OS1_S1 + 56);
            *(b + 73 * OS1_S1 + 124) =
                prefactor_z * *(b + 73 * OS1_S1 + 85) -
                p_over_q * *(b + 108 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 85);
            *(b + 73 * OS1_S1 + 125) =
                prefactor_z * *(b + 73 * OS1_S1 + 86) -
                p_over_q * *(b + 108 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 86) +
                one_over_two_q * *(b + 73 * OS1_S1 + 56);
            *(b + 73 * OS1_S1 + 126) =
                prefactor_y * *(b + 73 * OS1_S1 + 87) -
                p_over_q * *(b + 107 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 57);
            *(b + 73 * OS1_S1 + 127) =
                prefactor_z * *(b + 73 * OS1_S1 + 87) -
                p_over_q * *(b + 108 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 87);
            *(b + 73 * OS1_S1 + 128) =
                prefactor_y * *(b + 73 * OS1_S1 + 89) -
                p_over_q * *(b + 107 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 89);
            *(b + 73 * OS1_S1 + 129) =
                prefactor_z * *(b + 73 * OS1_S1 + 89) -
                p_over_q * *(b + 108 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 58);
            *(b + 73 * OS1_S1 + 130) =
                prefactor_x * *(b + 73 * OS1_S1 + 94) -
                p_over_q * *(b + 101 * OS1_S1 + 94) +
                one_over_two_q * *(b + 52 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 66);
            *(b + 73 * OS1_S1 + 131) =
                prefactor_z * *(b + 73 * OS1_S1 + 90) -
                p_over_q * *(b + 108 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 90);
            *(b + 73 * OS1_S1 + 132) =
                prefactor_z * *(b + 73 * OS1_S1 + 91) -
                p_over_q * *(b + 108 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 91) +
                one_over_two_q * *(b + 73 * OS1_S1 + 59);
            *(b + 73 * OS1_S1 + 133) =
                prefactor_y * *(b + 73 * OS1_S1 + 93) -
                p_over_q * *(b + 107 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 93);
            *(b + 73 * OS1_S1 + 134) =
                prefactor_x * *(b + 73 * OS1_S1 + 98) -
                p_over_q * *(b + 101 * OS1_S1 + 98) +
                one_over_two_q * *(b + 52 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 70);
            *(b + 73 * OS1_S1 + 135) =
                prefactor_x * *(b + 73 * OS1_S1 + 99) -
                p_over_q * *(b + 101 * OS1_S1 + 99) +
                one_over_two_q * *(b + 52 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 71);
            *(b + 73 * OS1_S1 + 136) =
                prefactor_z * *(b + 73 * OS1_S1 + 94) -
                p_over_q * *(b + 108 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 94);
            *(b + 73 * OS1_S1 + 137) =
                prefactor_z * *(b + 73 * OS1_S1 + 95) -
                p_over_q * *(b + 108 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 95) +
                one_over_two_q * *(b + 73 * OS1_S1 + 62);
            *(b + 73 * OS1_S1 + 138) =
                prefactor_y * *(b + 73 * OS1_S1 + 97) -
                p_over_q * *(b + 107 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 97) +
                one_over_two_q * *(b + 73 * OS1_S1 + 65);
            *(b + 73 * OS1_S1 + 139) =
                prefactor_y * *(b + 73 * OS1_S1 + 98) -
                p_over_q * *(b + 107 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 98);
            *(b + 73 * OS1_S1 + 140) =
                prefactor_x * *(b + 73 * OS1_S1 + 104) -
                p_over_q * *(b + 101 * OS1_S1 + 104) +
                one_over_two_q * *(b + 52 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 76);
            *(b + 73 * OS1_S1 + 141) =
                prefactor_x * *(b + 73 * OS1_S1 + 105) -
                p_over_q * *(b + 101 * OS1_S1 + 105) +
                one_over_two_q * *(b + 52 * OS1_S1 + 105) +
                one_over_two_q * *(b + 73 * OS1_S1 + 77);
            *(b + 73 * OS1_S1 + 142) =
                prefactor_z * *(b + 73 * OS1_S1 + 99) -
                p_over_q * *(b + 108 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 99);
            *(b + 73 * OS1_S1 + 143) =
                prefactor_x * *(b + 73 * OS1_S1 + 107) -
                p_over_q * *(b + 101 * OS1_S1 + 107) +
                one_over_two_q * *(b + 52 * OS1_S1 + 107) +
                one_over_two_q * *(b + 73 * OS1_S1 + 79);
            *(b + 73 * OS1_S1 + 144) =
                prefactor_x * *(b + 73 * OS1_S1 + 108) -
                p_over_q * *(b + 101 * OS1_S1 + 108) +
                one_over_two_q * *(b + 52 * OS1_S1 + 108) +
                one_over_two_q * *(b + 73 * OS1_S1 + 80);
            *(b + 73 * OS1_S1 + 145) =
                prefactor_x * *(b + 73 * OS1_S1 + 109) -
                p_over_q * *(b + 101 * OS1_S1 + 109) +
                one_over_two_q * *(b + 52 * OS1_S1 + 109) +
                one_over_two_q * *(b + 73 * OS1_S1 + 81);
            *(b + 73 * OS1_S1 + 146) =
                prefactor_y * *(b + 73 * OS1_S1 + 104) -
                p_over_q * *(b + 107 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 104);
            *(b + 73 * OS1_S1 + 147) =
                prefactor_x * *(b + 73 * OS1_S1 + 111) -
                p_over_q * *(b + 101 * OS1_S1 + 111) +
                one_over_two_q * *(b + 52 * OS1_S1 + 111) +
                one_over_two_q * *(b + 73 * OS1_S1 + 83);
            *(b + 73 * OS1_S1 + 148) =
                prefactor_x * *(b + 73 * OS1_S1 + 112) -
                p_over_q * *(b + 101 * OS1_S1 + 112) +
                one_over_two_q * *(b + 52 * OS1_S1 + 112);
            *(b + 73 * OS1_S1 + 149) =
                prefactor_x * *(b + 73 * OS1_S1 + 113) -
                p_over_q * *(b + 101 * OS1_S1 + 113) +
                one_over_two_q * *(b + 52 * OS1_S1 + 113);
            *(b + 73 * OS1_S1 + 150) =
                prefactor_x * *(b + 73 * OS1_S1 + 114) -
                p_over_q * *(b + 101 * OS1_S1 + 114) +
                one_over_two_q * *(b + 52 * OS1_S1 + 114);
            *(b + 73 * OS1_S1 + 151) =
                prefactor_x * *(b + 73 * OS1_S1 + 115) -
                p_over_q * *(b + 101 * OS1_S1 + 115) +
                one_over_two_q * *(b + 52 * OS1_S1 + 115);
            *(b + 73 * OS1_S1 + 152) =
                prefactor_x * *(b + 73 * OS1_S1 + 116) -
                p_over_q * *(b + 101 * OS1_S1 + 116) +
                one_over_two_q * *(b + 52 * OS1_S1 + 116);
            *(b + 73 * OS1_S1 + 153) =
                prefactor_x * *(b + 73 * OS1_S1 + 117) -
                p_over_q * *(b + 101 * OS1_S1 + 117) +
                one_over_two_q * *(b + 52 * OS1_S1 + 117);
            *(b + 73 * OS1_S1 + 154) =
                prefactor_x * *(b + 73 * OS1_S1 + 118) -
                p_over_q * *(b + 101 * OS1_S1 + 118) +
                one_over_two_q * *(b + 52 * OS1_S1 + 118);
            *(b + 73 * OS1_S1 + 155) =
                prefactor_x * *(b + 73 * OS1_S1 + 119) -
                p_over_q * *(b + 101 * OS1_S1 + 119) +
                one_over_two_q * *(b + 52 * OS1_S1 + 119);
            *(b + 73 * OS1_S1 + 156) =
                prefactor_y * *(b + 73 * OS1_S1 + 112) -
                p_over_q * *(b + 107 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 73 * OS1_S1 + 77);
            *(b + 73 * OS1_S1 + 157) =
                prefactor_z * *(b + 73 * OS1_S1 + 112) -
                p_over_q * *(b + 108 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 112);
            *(b + 73 * OS1_S1 + 158) =
                prefactor_z * *(b + 73 * OS1_S1 + 113) -
                p_over_q * *(b + 108 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 113) +
                one_over_two_q * *(b + 73 * OS1_S1 + 77);
            *(b + 73 * OS1_S1 + 159) =
                prefactor_z * *(b + 73 * OS1_S1 + 114) -
                p_over_q * *(b + 108 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 78);
            *(b + 73 * OS1_S1 + 160) =
                prefactor_z * *(b + 73 * OS1_S1 + 115) -
                p_over_q * *(b + 108 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 79);
            *(b + 73 * OS1_S1 + 161) =
                prefactor_y * *(b + 73 * OS1_S1 + 117) -
                p_over_q * *(b + 107 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 82);
            *(b + 73 * OS1_S1 + 162) =
                prefactor_y * *(b + 73 * OS1_S1 + 118) -
                p_over_q * *(b + 107 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 118) +
                one_over_two_q * *(b + 73 * OS1_S1 + 83);
            *(b + 73 * OS1_S1 + 163) =
                prefactor_y * *(b + 73 * OS1_S1 + 119) -
                p_over_q * *(b + 107 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 119);
            *(b + 73 * OS1_S1 + 164) =
                prefactor_z * *(b + 73 * OS1_S1 + 119) -
                p_over_q * *(b + 108 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 73 * OS1_S1 + 83);
            *(b + 74 * OS1_S1 + 120) =
                prefactor_x * *(b + 74 * OS1_S1 + 84) -
                p_over_q * *(b + 102 * OS1_S1 + 84) +
                one_over_two_q * *(b + 53 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 74 * OS1_S1 + 56);
            *(b + 74 * OS1_S1 + 121) =
                prefactor_y * *(b + 74 * OS1_S1 + 84) -
                p_over_q * *(b + 108 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 84);
            *(b + 74 * OS1_S1 + 122) =
                prefactor_z * *(b + 74 * OS1_S1 + 84) -
                p_over_q * *(b + 109 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 84);
            *(b + 74 * OS1_S1 + 123) =
                prefactor_y * *(b + 74 * OS1_S1 + 85) -
                p_over_q * *(b + 108 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 85) +
                one_over_two_q * *(b + 74 * OS1_S1 + 56);
            *(b + 74 * OS1_S1 + 124) =
                prefactor_y * *(b + 74 * OS1_S1 + 86) -
                p_over_q * *(b + 108 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 86);
            *(b + 74 * OS1_S1 + 125) =
                prefactor_z * *(b + 74 * OS1_S1 + 86) -
                p_over_q * *(b + 109 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 86) +
                one_over_two_q * *(b + 74 * OS1_S1 + 56);
            *(b + 74 * OS1_S1 + 126) =
                prefactor_y * *(b + 74 * OS1_S1 + 87) -
                p_over_q * *(b + 108 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 57);
            *(b + 74 * OS1_S1 + 127) =
                prefactor_z * *(b + 74 * OS1_S1 + 87) -
                p_over_q * *(b + 109 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 87);
            *(b + 74 * OS1_S1 + 128) =
                prefactor_y * *(b + 74 * OS1_S1 + 89) -
                p_over_q * *(b + 108 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 89);
            *(b + 74 * OS1_S1 + 129) =
                prefactor_z * *(b + 74 * OS1_S1 + 89) -
                p_over_q * *(b + 109 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 58);
            *(b + 74 * OS1_S1 + 130) =
                prefactor_x * *(b + 74 * OS1_S1 + 94) -
                p_over_q * *(b + 102 * OS1_S1 + 94) +
                one_over_two_q * *(b + 53 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 66);
            *(b + 74 * OS1_S1 + 131) =
                prefactor_z * *(b + 74 * OS1_S1 + 90) -
                p_over_q * *(b + 109 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 90);
            *(b + 74 * OS1_S1 + 132) =
                prefactor_y * *(b + 74 * OS1_S1 + 92) -
                p_over_q * *(b + 108 * OS1_S1 + 92) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 92) +
                one_over_two_q * *(b + 74 * OS1_S1 + 61);
            *(b + 74 * OS1_S1 + 133) =
                prefactor_y * *(b + 74 * OS1_S1 + 93) -
                p_over_q * *(b + 108 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 93);
            *(b + 74 * OS1_S1 + 134) =
                prefactor_x * *(b + 74 * OS1_S1 + 98) -
                p_over_q * *(b + 102 * OS1_S1 + 98) +
                one_over_two_q * *(b + 53 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 70);
            *(b + 74 * OS1_S1 + 135) =
                prefactor_x * *(b + 74 * OS1_S1 + 99) -
                p_over_q * *(b + 102 * OS1_S1 + 99) +
                one_over_two_q * *(b + 53 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 71);
            *(b + 74 * OS1_S1 + 136) =
                prefactor_z * *(b + 74 * OS1_S1 + 94) -
                p_over_q * *(b + 109 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 94);
            *(b + 74 * OS1_S1 + 137) =
                prefactor_z * *(b + 74 * OS1_S1 + 95) -
                p_over_q * *(b + 109 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 95) +
                one_over_two_q * *(b + 74 * OS1_S1 + 62);
            *(b + 74 * OS1_S1 + 138) =
                prefactor_y * *(b + 74 * OS1_S1 + 97) -
                p_over_q * *(b + 108 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 97) +
                one_over_two_q * *(b + 74 * OS1_S1 + 65);
            *(b + 74 * OS1_S1 + 139) =
                prefactor_y * *(b + 74 * OS1_S1 + 98) -
                p_over_q * *(b + 108 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 98);
            *(b + 74 * OS1_S1 + 140) =
                prefactor_x * *(b + 74 * OS1_S1 + 104) -
                p_over_q * *(b + 102 * OS1_S1 + 104) +
                one_over_two_q * *(b + 53 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 76);
            *(b + 74 * OS1_S1 + 141) =
                prefactor_x * *(b + 74 * OS1_S1 + 105) -
                p_over_q * *(b + 102 * OS1_S1 + 105) +
                one_over_two_q * *(b + 53 * OS1_S1 + 105) +
                one_over_two_q * *(b + 74 * OS1_S1 + 77);
            *(b + 74 * OS1_S1 + 142) =
                prefactor_z * *(b + 74 * OS1_S1 + 99) -
                p_over_q * *(b + 109 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 99);
            *(b + 74 * OS1_S1 + 143) =
                prefactor_x * *(b + 74 * OS1_S1 + 107) -
                p_over_q * *(b + 102 * OS1_S1 + 107) +
                one_over_two_q * *(b + 53 * OS1_S1 + 107) +
                one_over_two_q * *(b + 74 * OS1_S1 + 79);
            *(b + 74 * OS1_S1 + 144) =
                prefactor_x * *(b + 74 * OS1_S1 + 108) -
                p_over_q * *(b + 102 * OS1_S1 + 108) +
                one_over_two_q * *(b + 53 * OS1_S1 + 108) +
                one_over_two_q * *(b + 74 * OS1_S1 + 80);
            *(b + 74 * OS1_S1 + 145) =
                prefactor_x * *(b + 74 * OS1_S1 + 109) -
                p_over_q * *(b + 102 * OS1_S1 + 109) +
                one_over_two_q * *(b + 53 * OS1_S1 + 109) +
                one_over_two_q * *(b + 74 * OS1_S1 + 81);
            *(b + 74 * OS1_S1 + 146) =
                prefactor_y * *(b + 74 * OS1_S1 + 104) -
                p_over_q * *(b + 108 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 104);
            *(b + 74 * OS1_S1 + 147) =
                prefactor_x * *(b + 74 * OS1_S1 + 111) -
                p_over_q * *(b + 102 * OS1_S1 + 111) +
                one_over_two_q * *(b + 53 * OS1_S1 + 111) +
                one_over_two_q * *(b + 74 * OS1_S1 + 83);
            *(b + 74 * OS1_S1 + 148) =
                prefactor_x * *(b + 74 * OS1_S1 + 112) -
                p_over_q * *(b + 102 * OS1_S1 + 112) +
                one_over_two_q * *(b + 53 * OS1_S1 + 112);
            *(b + 74 * OS1_S1 + 149) =
                prefactor_x * *(b + 74 * OS1_S1 + 113) -
                p_over_q * *(b + 102 * OS1_S1 + 113) +
                one_over_two_q * *(b + 53 * OS1_S1 + 113);
            *(b + 74 * OS1_S1 + 150) =
                prefactor_x * *(b + 74 * OS1_S1 + 114) -
                p_over_q * *(b + 102 * OS1_S1 + 114) +
                one_over_two_q * *(b + 53 * OS1_S1 + 114);
            *(b + 74 * OS1_S1 + 151) =
                prefactor_x * *(b + 74 * OS1_S1 + 115) -
                p_over_q * *(b + 102 * OS1_S1 + 115) +
                one_over_two_q * *(b + 53 * OS1_S1 + 115);
            *(b + 74 * OS1_S1 + 152) =
                prefactor_x * *(b + 74 * OS1_S1 + 116) -
                p_over_q * *(b + 102 * OS1_S1 + 116) +
                one_over_two_q * *(b + 53 * OS1_S1 + 116);
            *(b + 74 * OS1_S1 + 153) =
                prefactor_x * *(b + 74 * OS1_S1 + 117) -
                p_over_q * *(b + 102 * OS1_S1 + 117) +
                one_over_two_q * *(b + 53 * OS1_S1 + 117);
            *(b + 74 * OS1_S1 + 154) =
                prefactor_x * *(b + 74 * OS1_S1 + 118) -
                p_over_q * *(b + 102 * OS1_S1 + 118) +
                one_over_two_q * *(b + 53 * OS1_S1 + 118);
            *(b + 74 * OS1_S1 + 155) =
                prefactor_x * *(b + 74 * OS1_S1 + 119) -
                p_over_q * *(b + 102 * OS1_S1 + 119) +
                one_over_two_q * *(b + 53 * OS1_S1 + 119);
            *(b + 74 * OS1_S1 + 156) =
                prefactor_y * *(b + 74 * OS1_S1 + 112) -
                p_over_q * *(b + 108 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 74 * OS1_S1 + 77);
            *(b + 74 * OS1_S1 + 157) =
                prefactor_z * *(b + 74 * OS1_S1 + 112) -
                p_over_q * *(b + 109 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 112);
            *(b + 74 * OS1_S1 + 158) =
                prefactor_z * *(b + 74 * OS1_S1 + 113) -
                p_over_q * *(b + 109 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 113) +
                one_over_two_q * *(b + 74 * OS1_S1 + 77);
            *(b + 74 * OS1_S1 + 159) =
                prefactor_z * *(b + 74 * OS1_S1 + 114) -
                p_over_q * *(b + 109 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 78);
            *(b + 74 * OS1_S1 + 160) =
                prefactor_y * *(b + 74 * OS1_S1 + 116) -
                p_over_q * *(b + 108 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 81);
            *(b + 74 * OS1_S1 + 161) =
                prefactor_y * *(b + 74 * OS1_S1 + 117) -
                p_over_q * *(b + 108 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 82);
            *(b + 74 * OS1_S1 + 162) =
                prefactor_y * *(b + 74 * OS1_S1 + 118) -
                p_over_q * *(b + 108 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 118) +
                one_over_two_q * *(b + 74 * OS1_S1 + 83);
            *(b + 74 * OS1_S1 + 163) =
                prefactor_y * *(b + 74 * OS1_S1 + 119) -
                p_over_q * *(b + 108 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 119);
            *(b + 74 * OS1_S1 + 164) =
                prefactor_z * *(b + 74 * OS1_S1 + 119) -
                p_over_q * *(b + 109 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 74 * OS1_S1 + 83);
            *(b + 75 * OS1_S1 + 120) =
                prefactor_x * *(b + 75 * OS1_S1 + 84) -
                p_over_q * *(b + 103 * OS1_S1 + 84) +
                one_over_two_q * *(b + 54 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 75 * OS1_S1 + 56);
            *(b + 75 * OS1_S1 + 121) = prefactor_y * *(b + 75 * OS1_S1 + 84) -
                                       p_over_q * *(b + 109 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 84);
            *(b + 75 * OS1_S1 + 122) =
                prefactor_z * *(b + 75 * OS1_S1 + 84) -
                p_over_q * *(b + 110 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 84);
            *(b + 75 * OS1_S1 + 123) =
                prefactor_y * *(b + 75 * OS1_S1 + 85) -
                p_over_q * *(b + 109 * OS1_S1 + 85) +
                one_over_two_q * *(b + 49 * OS1_S1 + 85) +
                one_over_two_q * *(b + 75 * OS1_S1 + 56);
            *(b + 75 * OS1_S1 + 124) = prefactor_y * *(b + 75 * OS1_S1 + 86) -
                                       p_over_q * *(b + 109 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 86);
            *(b + 75 * OS1_S1 + 125) =
                prefactor_z * *(b + 75 * OS1_S1 + 86) -
                p_over_q * *(b + 110 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 86) +
                one_over_two_q * *(b + 75 * OS1_S1 + 56);
            *(b + 75 * OS1_S1 + 126) =
                prefactor_y * *(b + 75 * OS1_S1 + 87) -
                p_over_q * *(b + 109 * OS1_S1 + 87) +
                one_over_two_q * *(b + 49 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 57);
            *(b + 75 * OS1_S1 + 127) =
                prefactor_z * *(b + 75 * OS1_S1 + 87) -
                p_over_q * *(b + 110 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 87);
            *(b + 75 * OS1_S1 + 128) = prefactor_y * *(b + 75 * OS1_S1 + 89) -
                                       p_over_q * *(b + 109 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 89);
            *(b + 75 * OS1_S1 + 129) =
                prefactor_z * *(b + 75 * OS1_S1 + 89) -
                p_over_q * *(b + 110 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 58);
            *(b + 75 * OS1_S1 + 130) =
                prefactor_y * *(b + 75 * OS1_S1 + 90) -
                p_over_q * *(b + 109 * OS1_S1 + 90) +
                one_over_two_q * *(b + 49 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 75 * OS1_S1 + 59);
            *(b + 75 * OS1_S1 + 131) =
                prefactor_z * *(b + 75 * OS1_S1 + 90) -
                p_over_q * *(b + 110 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 90);
            *(b + 75 * OS1_S1 + 132) =
                prefactor_y * *(b + 75 * OS1_S1 + 92) -
                p_over_q * *(b + 109 * OS1_S1 + 92) +
                one_over_two_q * *(b + 49 * OS1_S1 + 92) +
                one_over_two_q * *(b + 75 * OS1_S1 + 61);
            *(b + 75 * OS1_S1 + 133) = prefactor_y * *(b + 75 * OS1_S1 + 93) -
                                       p_over_q * *(b + 109 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 93);
            *(b + 75 * OS1_S1 + 134) =
                prefactor_x * *(b + 75 * OS1_S1 + 98) -
                p_over_q * *(b + 103 * OS1_S1 + 98) +
                one_over_two_q * *(b + 54 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 75 * OS1_S1 + 70);
            *(b + 75 * OS1_S1 + 135) =
                prefactor_x * *(b + 75 * OS1_S1 + 99) -
                p_over_q * *(b + 103 * OS1_S1 + 99) +
                one_over_two_q * *(b + 54 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 71);
            *(b + 75 * OS1_S1 + 136) =
                prefactor_z * *(b + 75 * OS1_S1 + 94) -
                p_over_q * *(b + 110 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 94);
            *(b + 75 * OS1_S1 + 137) =
                prefactor_z * *(b + 75 * OS1_S1 + 95) -
                p_over_q * *(b + 110 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 95) +
                one_over_two_q * *(b + 75 * OS1_S1 + 62);
            *(b + 75 * OS1_S1 + 138) =
                prefactor_y * *(b + 75 * OS1_S1 + 97) -
                p_over_q * *(b + 109 * OS1_S1 + 97) +
                one_over_two_q * *(b + 49 * OS1_S1 + 97) +
                one_over_two_q * *(b + 75 * OS1_S1 + 65);
            *(b + 75 * OS1_S1 + 139) = prefactor_y * *(b + 75 * OS1_S1 + 98) -
                                       p_over_q * *(b + 109 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 98);
            *(b + 75 * OS1_S1 + 140) =
                prefactor_x * *(b + 75 * OS1_S1 + 104) -
                p_over_q * *(b + 103 * OS1_S1 + 104) +
                one_over_two_q * *(b + 54 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 76);
            *(b + 75 * OS1_S1 + 141) =
                prefactor_x * *(b + 75 * OS1_S1 + 105) -
                p_over_q * *(b + 103 * OS1_S1 + 105) +
                one_over_two_q * *(b + 54 * OS1_S1 + 105) +
                one_over_two_q * *(b + 75 * OS1_S1 + 77);
            *(b + 75 * OS1_S1 + 142) =
                prefactor_z * *(b + 75 * OS1_S1 + 99) -
                p_over_q * *(b + 110 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 99);
            *(b + 75 * OS1_S1 + 143) =
                prefactor_x * *(b + 75 * OS1_S1 + 107) -
                p_over_q * *(b + 103 * OS1_S1 + 107) +
                one_over_two_q * *(b + 54 * OS1_S1 + 107) +
                one_over_two_q * *(b + 75 * OS1_S1 + 79);
            *(b + 75 * OS1_S1 + 144) =
                prefactor_x * *(b + 75 * OS1_S1 + 108) -
                p_over_q * *(b + 103 * OS1_S1 + 108) +
                one_over_two_q * *(b + 54 * OS1_S1 + 108) +
                one_over_two_q * *(b + 75 * OS1_S1 + 80);
            *(b + 75 * OS1_S1 + 145) =
                prefactor_y * *(b + 75 * OS1_S1 + 103) -
                p_over_q * *(b + 109 * OS1_S1 + 103) +
                one_over_two_q * *(b + 49 * OS1_S1 + 103) +
                one_over_two_q * *(b + 75 * OS1_S1 + 70);
            *(b + 75 * OS1_S1 + 146) =
                prefactor_y * *(b + 75 * OS1_S1 + 104) -
                p_over_q * *(b + 109 * OS1_S1 + 104) +
                one_over_two_q * *(b + 49 * OS1_S1 + 104);
            *(b + 75 * OS1_S1 + 147) =
                prefactor_x * *(b + 75 * OS1_S1 + 111) -
                p_over_q * *(b + 103 * OS1_S1 + 111) +
                one_over_two_q * *(b + 54 * OS1_S1 + 111) +
                one_over_two_q * *(b + 75 * OS1_S1 + 83);
            *(b + 75 * OS1_S1 + 148) =
                prefactor_x * *(b + 75 * OS1_S1 + 112) -
                p_over_q * *(b + 103 * OS1_S1 + 112) +
                one_over_two_q * *(b + 54 * OS1_S1 + 112);
            *(b + 75 * OS1_S1 + 149) =
                prefactor_x * *(b + 75 * OS1_S1 + 113) -
                p_over_q * *(b + 103 * OS1_S1 + 113) +
                one_over_two_q * *(b + 54 * OS1_S1 + 113);
            *(b + 75 * OS1_S1 + 150) =
                prefactor_x * *(b + 75 * OS1_S1 + 114) -
                p_over_q * *(b + 103 * OS1_S1 + 114) +
                one_over_two_q * *(b + 54 * OS1_S1 + 114);
            *(b + 75 * OS1_S1 + 151) =
                prefactor_x * *(b + 75 * OS1_S1 + 115) -
                p_over_q * *(b + 103 * OS1_S1 + 115) +
                one_over_two_q * *(b + 54 * OS1_S1 + 115);
            *(b + 75 * OS1_S1 + 152) =
                prefactor_x * *(b + 75 * OS1_S1 + 116) -
                p_over_q * *(b + 103 * OS1_S1 + 116) +
                one_over_two_q * *(b + 54 * OS1_S1 + 116);
            *(b + 75 * OS1_S1 + 153) =
                prefactor_x * *(b + 75 * OS1_S1 + 117) -
                p_over_q * *(b + 103 * OS1_S1 + 117) +
                one_over_two_q * *(b + 54 * OS1_S1 + 117);
            *(b + 75 * OS1_S1 + 154) =
                prefactor_y * *(b + 75 * OS1_S1 + 111) -
                p_over_q * *(b + 109 * OS1_S1 + 111) +
                one_over_two_q * *(b + 49 * OS1_S1 + 111);
            *(b + 75 * OS1_S1 + 155) =
                prefactor_x * *(b + 75 * OS1_S1 + 119) -
                p_over_q * *(b + 103 * OS1_S1 + 119) +
                one_over_two_q * *(b + 54 * OS1_S1 + 119);
            *(b + 75 * OS1_S1 + 156) =
                prefactor_y * *(b + 75 * OS1_S1 + 112) -
                p_over_q * *(b + 109 * OS1_S1 + 112) +
                one_over_two_q * *(b + 49 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 75 * OS1_S1 + 77);
            *(b + 75 * OS1_S1 + 157) =
                prefactor_z * *(b + 75 * OS1_S1 + 112) -
                p_over_q * *(b + 110 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 112);
            *(b + 75 * OS1_S1 + 158) =
                prefactor_z * *(b + 75 * OS1_S1 + 113) -
                p_over_q * *(b + 110 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 113) +
                one_over_two_q * *(b + 75 * OS1_S1 + 77);
            *(b + 75 * OS1_S1 + 159) =
                prefactor_z * *(b + 75 * OS1_S1 + 114) -
                p_over_q * *(b + 110 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 78);
            *(b + 75 * OS1_S1 + 160) =
                prefactor_y * *(b + 75 * OS1_S1 + 116) -
                p_over_q * *(b + 109 * OS1_S1 + 116) +
                one_over_two_q * *(b + 49 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 75 * OS1_S1 + 81);
            *(b + 75 * OS1_S1 + 161) =
                prefactor_y * *(b + 75 * OS1_S1 + 117) -
                p_over_q * *(b + 109 * OS1_S1 + 117) +
                one_over_two_q * *(b + 49 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 82);
            *(b + 75 * OS1_S1 + 162) =
                prefactor_y * *(b + 75 * OS1_S1 + 118) -
                p_over_q * *(b + 109 * OS1_S1 + 118) +
                one_over_two_q * *(b + 49 * OS1_S1 + 118) +
                one_over_two_q * *(b + 75 * OS1_S1 + 83);
            *(b + 75 * OS1_S1 + 163) =
                prefactor_y * *(b + 75 * OS1_S1 + 119) -
                p_over_q * *(b + 109 * OS1_S1 + 119) +
                one_over_two_q * *(b + 49 * OS1_S1 + 119);
            *(b + 75 * OS1_S1 + 164) =
                prefactor_z * *(b + 75 * OS1_S1 + 119) -
                p_over_q * *(b + 110 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 48 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 75 * OS1_S1 + 83);
            *(b + 76 * OS1_S1 + 120) =
                prefactor_x * *(b + 76 * OS1_S1 + 84) -
                p_over_q * *(b + 104 * OS1_S1 + 84) +
                one_over_two_q * *(b + 55 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 76 * OS1_S1 + 56);
            *(b + 76 * OS1_S1 + 121) = prefactor_y * *(b + 76 * OS1_S1 + 84) -
                                       p_over_q * *(b + 110 * OS1_S1 + 84);
            *(b + 76 * OS1_S1 + 122) =
                prefactor_z * *(b + 76 * OS1_S1 + 84) -
                p_over_q * *(b + 111 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 84);
            *(b + 76 * OS1_S1 + 123) = prefactor_y * *(b + 76 * OS1_S1 + 85) -
                                       p_over_q * *(b + 110 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 56);
            *(b + 76 * OS1_S1 + 124) = prefactor_y * *(b + 76 * OS1_S1 + 86) -
                                       p_over_q * *(b + 110 * OS1_S1 + 86);
            *(b + 76 * OS1_S1 + 125) =
                prefactor_z * *(b + 76 * OS1_S1 + 86) -
                p_over_q * *(b + 111 * OS1_S1 + 86) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 86) +
                one_over_two_q * *(b + 76 * OS1_S1 + 56);
            *(b + 76 * OS1_S1 + 126) =
                prefactor_y * *(b + 76 * OS1_S1 + 87) -
                p_over_q * *(b + 110 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 57);
            *(b + 76 * OS1_S1 + 127) =
                prefactor_z * *(b + 76 * OS1_S1 + 87) -
                p_over_q * *(b + 111 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 87);
            *(b + 76 * OS1_S1 + 128) = prefactor_y * *(b + 76 * OS1_S1 + 89) -
                                       p_over_q * *(b + 110 * OS1_S1 + 89);
            *(b + 76 * OS1_S1 + 129) =
                prefactor_z * *(b + 76 * OS1_S1 + 89) -
                p_over_q * *(b + 111 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 58);
            *(b + 76 * OS1_S1 + 130) =
                prefactor_y * *(b + 76 * OS1_S1 + 90) -
                p_over_q * *(b + 110 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 76 * OS1_S1 + 59);
            *(b + 76 * OS1_S1 + 131) =
                prefactor_z * *(b + 76 * OS1_S1 + 90) -
                p_over_q * *(b + 111 * OS1_S1 + 90) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 90);
            *(b + 76 * OS1_S1 + 132) = prefactor_y * *(b + 76 * OS1_S1 + 92) -
                                       p_over_q * *(b + 110 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 61);
            *(b + 76 * OS1_S1 + 133) = prefactor_y * *(b + 76 * OS1_S1 + 93) -
                                       p_over_q * *(b + 110 * OS1_S1 + 93);
            *(b + 76 * OS1_S1 + 134) =
                prefactor_x * *(b + 76 * OS1_S1 + 98) -
                p_over_q * *(b + 104 * OS1_S1 + 98) +
                one_over_two_q * *(b + 55 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 76 * OS1_S1 + 70);
            *(b + 76 * OS1_S1 + 135) =
                prefactor_x * *(b + 76 * OS1_S1 + 99) -
                p_over_q * *(b + 104 * OS1_S1 + 99) +
                one_over_two_q * *(b + 55 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 71);
            *(b + 76 * OS1_S1 + 136) =
                prefactor_z * *(b + 76 * OS1_S1 + 94) -
                p_over_q * *(b + 111 * OS1_S1 + 94) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 94);
            *(b + 76 * OS1_S1 + 137) =
                prefactor_z * *(b + 76 * OS1_S1 + 95) -
                p_over_q * *(b + 111 * OS1_S1 + 95) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 95) +
                one_over_two_q * *(b + 76 * OS1_S1 + 62);
            *(b + 76 * OS1_S1 + 138) = prefactor_y * *(b + 76 * OS1_S1 + 97) -
                                       p_over_q * *(b + 110 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 65);
            *(b + 76 * OS1_S1 + 139) = prefactor_y * *(b + 76 * OS1_S1 + 98) -
                                       p_over_q * *(b + 110 * OS1_S1 + 98);
            *(b + 76 * OS1_S1 + 140) =
                prefactor_x * *(b + 76 * OS1_S1 + 104) -
                p_over_q * *(b + 104 * OS1_S1 + 104) +
                one_over_two_q * *(b + 55 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 76);
            *(b + 76 * OS1_S1 + 141) =
                prefactor_x * *(b + 76 * OS1_S1 + 105) -
                p_over_q * *(b + 104 * OS1_S1 + 105) +
                one_over_two_q * *(b + 55 * OS1_S1 + 105) +
                one_over_two_q * *(b + 76 * OS1_S1 + 77);
            *(b + 76 * OS1_S1 + 142) =
                prefactor_z * *(b + 76 * OS1_S1 + 99) -
                p_over_q * *(b + 111 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 99);
            *(b + 76 * OS1_S1 + 143) =
                prefactor_x * *(b + 76 * OS1_S1 + 107) -
                p_over_q * *(b + 104 * OS1_S1 + 107) +
                one_over_two_q * *(b + 55 * OS1_S1 + 107) +
                one_over_two_q * *(b + 76 * OS1_S1 + 79);
            *(b + 76 * OS1_S1 + 144) =
                prefactor_x * *(b + 76 * OS1_S1 + 108) -
                p_over_q * *(b + 104 * OS1_S1 + 108) +
                one_over_two_q * *(b + 55 * OS1_S1 + 108) +
                one_over_two_q * *(b + 76 * OS1_S1 + 80);
            *(b + 76 * OS1_S1 + 145) = prefactor_y * *(b + 76 * OS1_S1 + 103) -
                                       p_over_q * *(b + 110 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 70);
            *(b + 76 * OS1_S1 + 146) = prefactor_y * *(b + 76 * OS1_S1 + 104) -
                                       p_over_q * *(b + 110 * OS1_S1 + 104);
            *(b + 76 * OS1_S1 + 147) =
                prefactor_x * *(b + 76 * OS1_S1 + 111) -
                p_over_q * *(b + 104 * OS1_S1 + 111) +
                one_over_two_q * *(b + 55 * OS1_S1 + 111) +
                one_over_two_q * *(b + 76 * OS1_S1 + 83);
            *(b + 76 * OS1_S1 + 148) =
                prefactor_x * *(b + 76 * OS1_S1 + 112) -
                p_over_q * *(b + 104 * OS1_S1 + 112) +
                one_over_two_q * *(b + 55 * OS1_S1 + 112);
            *(b + 76 * OS1_S1 + 149) =
                prefactor_x * *(b + 76 * OS1_S1 + 113) -
                p_over_q * *(b + 104 * OS1_S1 + 113) +
                one_over_two_q * *(b + 55 * OS1_S1 + 113);
            *(b + 76 * OS1_S1 + 150) =
                prefactor_x * *(b + 76 * OS1_S1 + 114) -
                p_over_q * *(b + 104 * OS1_S1 + 114) +
                one_over_two_q * *(b + 55 * OS1_S1 + 114);
            *(b + 76 * OS1_S1 + 151) =
                prefactor_x * *(b + 76 * OS1_S1 + 115) -
                p_over_q * *(b + 104 * OS1_S1 + 115) +
                one_over_two_q * *(b + 55 * OS1_S1 + 115);
            *(b + 76 * OS1_S1 + 152) =
                prefactor_x * *(b + 76 * OS1_S1 + 116) -
                p_over_q * *(b + 104 * OS1_S1 + 116) +
                one_over_two_q * *(b + 55 * OS1_S1 + 116);
            *(b + 76 * OS1_S1 + 153) =
                prefactor_x * *(b + 76 * OS1_S1 + 117) -
                p_over_q * *(b + 104 * OS1_S1 + 117) +
                one_over_two_q * *(b + 55 * OS1_S1 + 117);
            *(b + 76 * OS1_S1 + 154) = prefactor_y * *(b + 76 * OS1_S1 + 111) -
                                       p_over_q * *(b + 110 * OS1_S1 + 111);
            *(b + 76 * OS1_S1 + 155) =
                prefactor_x * *(b + 76 * OS1_S1 + 119) -
                p_over_q * *(b + 104 * OS1_S1 + 119) +
                one_over_two_q * *(b + 55 * OS1_S1 + 119);
            *(b + 76 * OS1_S1 + 156) =
                prefactor_y * *(b + 76 * OS1_S1 + 112) -
                p_over_q * *(b + 110 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 76 * OS1_S1 + 77);
            *(b + 76 * OS1_S1 + 157) =
                prefactor_z * *(b + 76 * OS1_S1 + 112) -
                p_over_q * *(b + 111 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 112);
            *(b + 76 * OS1_S1 + 158) =
                prefactor_z * *(b + 76 * OS1_S1 + 113) -
                p_over_q * *(b + 111 * OS1_S1 + 113) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 113) +
                one_over_two_q * *(b + 76 * OS1_S1 + 77);
            *(b + 76 * OS1_S1 + 159) =
                prefactor_z * *(b + 76 * OS1_S1 + 114) -
                p_over_q * *(b + 111 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 78);
            *(b + 76 * OS1_S1 + 160) =
                prefactor_y * *(b + 76 * OS1_S1 + 116) -
                p_over_q * *(b + 110 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 76 * OS1_S1 + 81);
            *(b + 76 * OS1_S1 + 161) =
                prefactor_y * *(b + 76 * OS1_S1 + 117) -
                p_over_q * *(b + 110 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 82);
            *(b + 76 * OS1_S1 + 162) = prefactor_y * *(b + 76 * OS1_S1 + 118) -
                                       p_over_q * *(b + 110 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 76 * OS1_S1 + 83);
            *(b + 76 * OS1_S1 + 163) = prefactor_y * *(b + 76 * OS1_S1 + 119) -
                                       p_over_q * *(b + 110 * OS1_S1 + 119);
            *(b + 76 * OS1_S1 + 164) =
                prefactor_z * *(b + 76 * OS1_S1 + 119) -
                p_over_q * *(b + 111 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 49 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 76 * OS1_S1 + 83);
            *(b + 77 * OS1_S1 + 120) =
                prefactor_x * *(b + 77 * OS1_S1 + 84) -
                p_over_q * *(b + 105 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 56);
            *(b + 77 * OS1_S1 + 121) =
                prefactor_y * *(b + 77 * OS1_S1 + 84) -
                p_over_q * *(b + 112 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 84);
            *(b + 77 * OS1_S1 + 122) = prefactor_z * *(b + 77 * OS1_S1 + 84) -
                                       p_over_q * *(b + 113 * OS1_S1 + 84);
            *(b + 77 * OS1_S1 + 123) =
                prefactor_y * *(b + 77 * OS1_S1 + 85) -
                p_over_q * *(b + 112 * OS1_S1 + 85) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 85) +
                one_over_two_q * *(b + 77 * OS1_S1 + 56);
            *(b + 77 * OS1_S1 + 124) = prefactor_z * *(b + 77 * OS1_S1 + 85) -
                                       p_over_q * *(b + 113 * OS1_S1 + 85);
            *(b + 77 * OS1_S1 + 125) = prefactor_z * *(b + 77 * OS1_S1 + 86) -
                                       p_over_q * *(b + 113 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 56);
            *(b + 77 * OS1_S1 + 126) =
                prefactor_y * *(b + 77 * OS1_S1 + 87) -
                p_over_q * *(b + 112 * OS1_S1 + 87) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 57);
            *(b + 77 * OS1_S1 + 127) = prefactor_z * *(b + 77 * OS1_S1 + 87) -
                                       p_over_q * *(b + 113 * OS1_S1 + 87);
            *(b + 77 * OS1_S1 + 128) =
                prefactor_y * *(b + 77 * OS1_S1 + 89) -
                p_over_q * *(b + 112 * OS1_S1 + 89) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 89);
            *(b + 77 * OS1_S1 + 129) =
                prefactor_z * *(b + 77 * OS1_S1 + 89) -
                p_over_q * *(b + 113 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 58);
            *(b + 77 * OS1_S1 + 130) =
                prefactor_x * *(b + 77 * OS1_S1 + 94) -
                p_over_q * *(b + 105 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 77 * OS1_S1 + 66);
            *(b + 77 * OS1_S1 + 131) = prefactor_z * *(b + 77 * OS1_S1 + 90) -
                                       p_over_q * *(b + 113 * OS1_S1 + 90);
            *(b + 77 * OS1_S1 + 132) = prefactor_z * *(b + 77 * OS1_S1 + 91) -
                                       p_over_q * *(b + 113 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 59);
            *(b + 77 * OS1_S1 + 133) =
                prefactor_y * *(b + 77 * OS1_S1 + 93) -
                p_over_q * *(b + 112 * OS1_S1 + 93) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 93);
            *(b + 77 * OS1_S1 + 134) =
                prefactor_z * *(b + 77 * OS1_S1 + 93) -
                p_over_q * *(b + 113 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 77 * OS1_S1 + 61);
            *(b + 77 * OS1_S1 + 135) =
                prefactor_x * *(b + 77 * OS1_S1 + 99) -
                p_over_q * *(b + 105 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 71);
            *(b + 77 * OS1_S1 + 136) = prefactor_z * *(b + 77 * OS1_S1 + 94) -
                                       p_over_q * *(b + 113 * OS1_S1 + 94);
            *(b + 77 * OS1_S1 + 137) = prefactor_z * *(b + 77 * OS1_S1 + 95) -
                                       p_over_q * *(b + 113 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 62);
            *(b + 77 * OS1_S1 + 138) =
                prefactor_y * *(b + 77 * OS1_S1 + 97) -
                p_over_q * *(b + 112 * OS1_S1 + 97) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 97) +
                one_over_two_q * *(b + 77 * OS1_S1 + 65);
            *(b + 77 * OS1_S1 + 139) =
                prefactor_y * *(b + 77 * OS1_S1 + 98) -
                p_over_q * *(b + 112 * OS1_S1 + 98) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 98);
            *(b + 77 * OS1_S1 + 140) =
                prefactor_x * *(b + 77 * OS1_S1 + 104) -
                p_over_q * *(b + 105 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 76);
            *(b + 77 * OS1_S1 + 141) = prefactor_x * *(b + 77 * OS1_S1 + 105) -
                                       p_over_q * *(b + 105 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 77);
            *(b + 77 * OS1_S1 + 142) = prefactor_z * *(b + 77 * OS1_S1 + 99) -
                                       p_over_q * *(b + 113 * OS1_S1 + 99);
            *(b + 77 * OS1_S1 + 143) = prefactor_z * *(b + 77 * OS1_S1 + 100) -
                                       p_over_q * *(b + 113 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 66);
            *(b + 77 * OS1_S1 + 144) = prefactor_x * *(b + 77 * OS1_S1 + 108) -
                                       p_over_q * *(b + 105 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 80);
            *(b + 77 * OS1_S1 + 145) = prefactor_x * *(b + 77 * OS1_S1 + 109) -
                                       p_over_q * *(b + 105 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 81);
            *(b + 77 * OS1_S1 + 146) =
                prefactor_y * *(b + 77 * OS1_S1 + 104) -
                p_over_q * *(b + 112 * OS1_S1 + 104) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 104);
            *(b + 77 * OS1_S1 + 147) = prefactor_x * *(b + 77 * OS1_S1 + 111) -
                                       p_over_q * *(b + 105 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 83);
            *(b + 77 * OS1_S1 + 148) = prefactor_x * *(b + 77 * OS1_S1 + 112) -
                                       p_over_q * *(b + 105 * OS1_S1 + 112);
            *(b + 77 * OS1_S1 + 149) = prefactor_z * *(b + 77 * OS1_S1 + 105) -
                                       p_over_q * *(b + 113 * OS1_S1 + 105);
            *(b + 77 * OS1_S1 + 150) = prefactor_x * *(b + 77 * OS1_S1 + 114) -
                                       p_over_q * *(b + 105 * OS1_S1 + 114);
            *(b + 77 * OS1_S1 + 151) = prefactor_x * *(b + 77 * OS1_S1 + 115) -
                                       p_over_q * *(b + 105 * OS1_S1 + 115);
            *(b + 77 * OS1_S1 + 152) = prefactor_x * *(b + 77 * OS1_S1 + 116) -
                                       p_over_q * *(b + 105 * OS1_S1 + 116);
            *(b + 77 * OS1_S1 + 153) = prefactor_x * *(b + 77 * OS1_S1 + 117) -
                                       p_over_q * *(b + 105 * OS1_S1 + 117);
            *(b + 77 * OS1_S1 + 154) = prefactor_x * *(b + 77 * OS1_S1 + 118) -
                                       p_over_q * *(b + 105 * OS1_S1 + 118);
            *(b + 77 * OS1_S1 + 155) = prefactor_x * *(b + 77 * OS1_S1 + 119) -
                                       p_over_q * *(b + 105 * OS1_S1 + 119);
            *(b + 77 * OS1_S1 + 156) =
                prefactor_y * *(b + 77 * OS1_S1 + 112) -
                p_over_q * *(b + 112 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 77);
            *(b + 77 * OS1_S1 + 157) = prefactor_z * *(b + 77 * OS1_S1 + 112) -
                                       p_over_q * *(b + 113 * OS1_S1 + 112);
            *(b + 77 * OS1_S1 + 158) = prefactor_z * *(b + 77 * OS1_S1 + 113) -
                                       p_over_q * *(b + 113 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 77 * OS1_S1 + 77);
            *(b + 77 * OS1_S1 + 159) =
                prefactor_z * *(b + 77 * OS1_S1 + 114) -
                p_over_q * *(b + 113 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 78);
            *(b + 77 * OS1_S1 + 160) =
                prefactor_z * *(b + 77 * OS1_S1 + 115) -
                p_over_q * *(b + 113 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 77 * OS1_S1 + 79);
            *(b + 77 * OS1_S1 + 161) =
                prefactor_y * *(b + 77 * OS1_S1 + 117) -
                p_over_q * *(b + 112 * OS1_S1 + 117) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 77 * OS1_S1 + 82);
            *(b + 77 * OS1_S1 + 162) =
                prefactor_y * *(b + 77 * OS1_S1 + 118) -
                p_over_q * *(b + 112 * OS1_S1 + 118) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 118) +
                one_over_two_q * *(b + 77 * OS1_S1 + 83);
            *(b + 77 * OS1_S1 + 163) =
                prefactor_y * *(b + 77 * OS1_S1 + 119) -
                p_over_q * *(b + 112 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 50 * OS1_S1 + 119);
            *(b + 77 * OS1_S1 + 164) =
                prefactor_z * *(b + 77 * OS1_S1 + 119) -
                p_over_q * *(b + 113 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 83);
            *(b + 78 * OS1_S1 + 120) =
                prefactor_x * *(b + 78 * OS1_S1 + 84) -
                p_over_q * *(b + 106 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 78 * OS1_S1 + 56);
            *(b + 78 * OS1_S1 + 121) =
                prefactor_y * *(b + 78 * OS1_S1 + 84) -
                p_over_q * *(b + 113 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 84);
            *(b + 78 * OS1_S1 + 122) = prefactor_z * *(b + 78 * OS1_S1 + 84) -
                                       p_over_q * *(b + 114 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 84);
            *(b + 78 * OS1_S1 + 123) =
                prefactor_y * *(b + 78 * OS1_S1 + 85) -
                p_over_q * *(b + 113 * OS1_S1 + 85) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 85) +
                one_over_two_q * *(b + 78 * OS1_S1 + 56);
            *(b + 78 * OS1_S1 + 124) = prefactor_z * *(b + 78 * OS1_S1 + 85) -
                                       p_over_q * *(b + 114 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 85);
            *(b + 78 * OS1_S1 + 125) =
                prefactor_z * *(b + 78 * OS1_S1 + 86) -
                p_over_q * *(b + 114 * OS1_S1 + 86) +
                one_over_two_q * *(b + 50 * OS1_S1 + 86) +
                one_over_two_q * *(b + 78 * OS1_S1 + 56);
            *(b + 78 * OS1_S1 + 126) =
                prefactor_y * *(b + 78 * OS1_S1 + 87) -
                p_over_q * *(b + 113 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 57);
            *(b + 78 * OS1_S1 + 127) = prefactor_z * *(b + 78 * OS1_S1 + 87) -
                                       p_over_q * *(b + 114 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 87);
            *(b + 78 * OS1_S1 + 128) =
                prefactor_y * *(b + 78 * OS1_S1 + 89) -
                p_over_q * *(b + 113 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 89);
            *(b + 78 * OS1_S1 + 129) =
                prefactor_z * *(b + 78 * OS1_S1 + 89) -
                p_over_q * *(b + 114 * OS1_S1 + 89) +
                one_over_two_q * *(b + 50 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 58);
            *(b + 78 * OS1_S1 + 130) =
                prefactor_x * *(b + 78 * OS1_S1 + 94) -
                p_over_q * *(b + 106 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 78 * OS1_S1 + 66);
            *(b + 78 * OS1_S1 + 131) = prefactor_z * *(b + 78 * OS1_S1 + 90) -
                                       p_over_q * *(b + 114 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 90);
            *(b + 78 * OS1_S1 + 132) =
                prefactor_z * *(b + 78 * OS1_S1 + 91) -
                p_over_q * *(b + 114 * OS1_S1 + 91) +
                one_over_two_q * *(b + 50 * OS1_S1 + 91) +
                one_over_two_q * *(b + 78 * OS1_S1 + 59);
            *(b + 78 * OS1_S1 + 133) =
                prefactor_y * *(b + 78 * OS1_S1 + 93) -
                p_over_q * *(b + 113 * OS1_S1 + 93) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 93);
            *(b + 78 * OS1_S1 + 134) =
                prefactor_x * *(b + 78 * OS1_S1 + 98) -
                p_over_q * *(b + 106 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 78 * OS1_S1 + 70);
            *(b + 78 * OS1_S1 + 135) =
                prefactor_x * *(b + 78 * OS1_S1 + 99) -
                p_over_q * *(b + 106 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 71);
            *(b + 78 * OS1_S1 + 136) = prefactor_z * *(b + 78 * OS1_S1 + 94) -
                                       p_over_q * *(b + 114 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 94);
            *(b + 78 * OS1_S1 + 137) =
                prefactor_z * *(b + 78 * OS1_S1 + 95) -
                p_over_q * *(b + 114 * OS1_S1 + 95) +
                one_over_two_q * *(b + 50 * OS1_S1 + 95) +
                one_over_two_q * *(b + 78 * OS1_S1 + 62);
            *(b + 78 * OS1_S1 + 138) =
                prefactor_y * *(b + 78 * OS1_S1 + 97) -
                p_over_q * *(b + 113 * OS1_S1 + 97) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 97) +
                one_over_two_q * *(b + 78 * OS1_S1 + 65);
            *(b + 78 * OS1_S1 + 139) =
                prefactor_y * *(b + 78 * OS1_S1 + 98) -
                p_over_q * *(b + 113 * OS1_S1 + 98) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 98);
            *(b + 78 * OS1_S1 + 140) =
                prefactor_x * *(b + 78 * OS1_S1 + 104) -
                p_over_q * *(b + 106 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 76);
            *(b + 78 * OS1_S1 + 141) = prefactor_x * *(b + 78 * OS1_S1 + 105) -
                                       p_over_q * *(b + 106 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 77);
            *(b + 78 * OS1_S1 + 142) = prefactor_z * *(b + 78 * OS1_S1 + 99) -
                                       p_over_q * *(b + 114 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 99);
            *(b + 78 * OS1_S1 + 143) = prefactor_x * *(b + 78 * OS1_S1 + 107) -
                                       p_over_q * *(b + 106 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 79);
            *(b + 78 * OS1_S1 + 144) = prefactor_x * *(b + 78 * OS1_S1 + 108) -
                                       p_over_q * *(b + 106 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 80);
            *(b + 78 * OS1_S1 + 145) = prefactor_x * *(b + 78 * OS1_S1 + 109) -
                                       p_over_q * *(b + 106 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 81);
            *(b + 78 * OS1_S1 + 146) =
                prefactor_y * *(b + 78 * OS1_S1 + 104) -
                p_over_q * *(b + 113 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 104);
            *(b + 78 * OS1_S1 + 147) = prefactor_x * *(b + 78 * OS1_S1 + 111) -
                                       p_over_q * *(b + 106 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 78 * OS1_S1 + 83);
            *(b + 78 * OS1_S1 + 148) = prefactor_x * *(b + 78 * OS1_S1 + 112) -
                                       p_over_q * *(b + 106 * OS1_S1 + 112);
            *(b + 78 * OS1_S1 + 149) = prefactor_x * *(b + 78 * OS1_S1 + 113) -
                                       p_over_q * *(b + 106 * OS1_S1 + 113);
            *(b + 78 * OS1_S1 + 150) = prefactor_x * *(b + 78 * OS1_S1 + 114) -
                                       p_over_q * *(b + 106 * OS1_S1 + 114);
            *(b + 78 * OS1_S1 + 151) = prefactor_x * *(b + 78 * OS1_S1 + 115) -
                                       p_over_q * *(b + 106 * OS1_S1 + 115);
            *(b + 78 * OS1_S1 + 152) = prefactor_x * *(b + 78 * OS1_S1 + 116) -
                                       p_over_q * *(b + 106 * OS1_S1 + 116);
            *(b + 78 * OS1_S1 + 153) = prefactor_x * *(b + 78 * OS1_S1 + 117) -
                                       p_over_q * *(b + 106 * OS1_S1 + 117);
            *(b + 78 * OS1_S1 + 154) = prefactor_x * *(b + 78 * OS1_S1 + 118) -
                                       p_over_q * *(b + 106 * OS1_S1 + 118);
            *(b + 78 * OS1_S1 + 155) = prefactor_x * *(b + 78 * OS1_S1 + 119) -
                                       p_over_q * *(b + 106 * OS1_S1 + 119);
            *(b + 78 * OS1_S1 + 156) =
                prefactor_y * *(b + 78 * OS1_S1 + 112) -
                p_over_q * *(b + 113 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 78 * OS1_S1 + 77);
            *(b + 78 * OS1_S1 + 157) =
                prefactor_z * *(b + 78 * OS1_S1 + 112) -
                p_over_q * *(b + 114 * OS1_S1 + 112) +
                one_over_two_q * *(b + 50 * OS1_S1 + 112);
            *(b + 78 * OS1_S1 + 158) =
                prefactor_z * *(b + 78 * OS1_S1 + 113) -
                p_over_q * *(b + 114 * OS1_S1 + 113) +
                one_over_two_q * *(b + 50 * OS1_S1 + 113) +
                one_over_two_q * *(b + 78 * OS1_S1 + 77);
            *(b + 78 * OS1_S1 + 159) =
                prefactor_z * *(b + 78 * OS1_S1 + 114) -
                p_over_q * *(b + 114 * OS1_S1 + 114) +
                one_over_two_q * *(b + 50 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 78);
            *(b + 78 * OS1_S1 + 160) =
                prefactor_z * *(b + 78 * OS1_S1 + 115) -
                p_over_q * *(b + 114 * OS1_S1 + 115) +
                one_over_two_q * *(b + 50 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 78 * OS1_S1 + 79);
            *(b + 78 * OS1_S1 + 161) =
                prefactor_y * *(b + 78 * OS1_S1 + 117) -
                p_over_q * *(b + 113 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 82);
            *(b + 78 * OS1_S1 + 162) =
                prefactor_y * *(b + 78 * OS1_S1 + 118) -
                p_over_q * *(b + 113 * OS1_S1 + 118) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 118) +
                one_over_two_q * *(b + 78 * OS1_S1 + 83);
            *(b + 78 * OS1_S1 + 163) =
                prefactor_y * *(b + 78 * OS1_S1 + 119) -
                p_over_q * *(b + 113 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 51 * OS1_S1 + 119);
            *(b + 78 * OS1_S1 + 164) =
                prefactor_z * *(b + 78 * OS1_S1 + 119) -
                p_over_q * *(b + 114 * OS1_S1 + 119) +
                one_over_two_q * *(b + 50 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 78 * OS1_S1 + 83);
            *(b + 79 * OS1_S1 + 120) =
                prefactor_x * *(b + 79 * OS1_S1 + 84) -
                p_over_q * *(b + 107 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 79 * OS1_S1 + 56);
            *(b + 79 * OS1_S1 + 121) =
                prefactor_y * *(b + 79 * OS1_S1 + 84) -
                p_over_q * *(b + 114 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 84);
            *(b + 79 * OS1_S1 + 122) =
                prefactor_z * *(b + 79 * OS1_S1 + 84) -
                p_over_q * *(b + 115 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 84);
            *(b + 79 * OS1_S1 + 123) =
                prefactor_y * *(b + 79 * OS1_S1 + 85) -
                p_over_q * *(b + 114 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 85) +
                one_over_two_q * *(b + 79 * OS1_S1 + 56);
            *(b + 79 * OS1_S1 + 124) =
                prefactor_z * *(b + 79 * OS1_S1 + 85) -
                p_over_q * *(b + 115 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 85);
            *(b + 79 * OS1_S1 + 125) =
                prefactor_z * *(b + 79 * OS1_S1 + 86) -
                p_over_q * *(b + 115 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 86) +
                one_over_two_q * *(b + 79 * OS1_S1 + 56);
            *(b + 79 * OS1_S1 + 126) =
                prefactor_y * *(b + 79 * OS1_S1 + 87) -
                p_over_q * *(b + 114 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 57);
            *(b + 79 * OS1_S1 + 127) =
                prefactor_z * *(b + 79 * OS1_S1 + 87) -
                p_over_q * *(b + 115 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 87);
            *(b + 79 * OS1_S1 + 128) =
                prefactor_y * *(b + 79 * OS1_S1 + 89) -
                p_over_q * *(b + 114 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 89);
            *(b + 79 * OS1_S1 + 129) =
                prefactor_z * *(b + 79 * OS1_S1 + 89) -
                p_over_q * *(b + 115 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 58);
            *(b + 79 * OS1_S1 + 130) =
                prefactor_x * *(b + 79 * OS1_S1 + 94) -
                p_over_q * *(b + 107 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 66);
            *(b + 79 * OS1_S1 + 131) =
                prefactor_z * *(b + 79 * OS1_S1 + 90) -
                p_over_q * *(b + 115 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 90);
            *(b + 79 * OS1_S1 + 132) =
                prefactor_z * *(b + 79 * OS1_S1 + 91) -
                p_over_q * *(b + 115 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 91) +
                one_over_two_q * *(b + 79 * OS1_S1 + 59);
            *(b + 79 * OS1_S1 + 133) =
                prefactor_y * *(b + 79 * OS1_S1 + 93) -
                p_over_q * *(b + 114 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 93);
            *(b + 79 * OS1_S1 + 134) =
                prefactor_x * *(b + 79 * OS1_S1 + 98) -
                p_over_q * *(b + 107 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 70);
            *(b + 79 * OS1_S1 + 135) =
                prefactor_x * *(b + 79 * OS1_S1 + 99) -
                p_over_q * *(b + 107 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 71);
            *(b + 79 * OS1_S1 + 136) =
                prefactor_z * *(b + 79 * OS1_S1 + 94) -
                p_over_q * *(b + 115 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 94);
            *(b + 79 * OS1_S1 + 137) =
                prefactor_z * *(b + 79 * OS1_S1 + 95) -
                p_over_q * *(b + 115 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 95) +
                one_over_two_q * *(b + 79 * OS1_S1 + 62);
            *(b + 79 * OS1_S1 + 138) =
                prefactor_y * *(b + 79 * OS1_S1 + 97) -
                p_over_q * *(b + 114 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 97) +
                one_over_two_q * *(b + 79 * OS1_S1 + 65);
            *(b + 79 * OS1_S1 + 139) =
                prefactor_y * *(b + 79 * OS1_S1 + 98) -
                p_over_q * *(b + 114 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 98);
            *(b + 79 * OS1_S1 + 140) =
                prefactor_x * *(b + 79 * OS1_S1 + 104) -
                p_over_q * *(b + 107 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 76);
            *(b + 79 * OS1_S1 + 141) = prefactor_x * *(b + 79 * OS1_S1 + 105) -
                                       p_over_q * *(b + 107 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 77);
            *(b + 79 * OS1_S1 + 142) =
                prefactor_z * *(b + 79 * OS1_S1 + 99) -
                p_over_q * *(b + 115 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 99);
            *(b + 79 * OS1_S1 + 143) = prefactor_x * *(b + 79 * OS1_S1 + 107) -
                                       p_over_q * *(b + 107 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 79);
            *(b + 79 * OS1_S1 + 144) = prefactor_x * *(b + 79 * OS1_S1 + 108) -
                                       p_over_q * *(b + 107 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 80);
            *(b + 79 * OS1_S1 + 145) = prefactor_x * *(b + 79 * OS1_S1 + 109) -
                                       p_over_q * *(b + 107 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 81);
            *(b + 79 * OS1_S1 + 146) =
                prefactor_y * *(b + 79 * OS1_S1 + 104) -
                p_over_q * *(b + 114 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 104);
            *(b + 79 * OS1_S1 + 147) = prefactor_x * *(b + 79 * OS1_S1 + 111) -
                                       p_over_q * *(b + 107 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 79 * OS1_S1 + 83);
            *(b + 79 * OS1_S1 + 148) = prefactor_x * *(b + 79 * OS1_S1 + 112) -
                                       p_over_q * *(b + 107 * OS1_S1 + 112);
            *(b + 79 * OS1_S1 + 149) = prefactor_x * *(b + 79 * OS1_S1 + 113) -
                                       p_over_q * *(b + 107 * OS1_S1 + 113);
            *(b + 79 * OS1_S1 + 150) = prefactor_x * *(b + 79 * OS1_S1 + 114) -
                                       p_over_q * *(b + 107 * OS1_S1 + 114);
            *(b + 79 * OS1_S1 + 151) = prefactor_x * *(b + 79 * OS1_S1 + 115) -
                                       p_over_q * *(b + 107 * OS1_S1 + 115);
            *(b + 79 * OS1_S1 + 152) = prefactor_x * *(b + 79 * OS1_S1 + 116) -
                                       p_over_q * *(b + 107 * OS1_S1 + 116);
            *(b + 79 * OS1_S1 + 153) = prefactor_x * *(b + 79 * OS1_S1 + 117) -
                                       p_over_q * *(b + 107 * OS1_S1 + 117);
            *(b + 79 * OS1_S1 + 154) = prefactor_x * *(b + 79 * OS1_S1 + 118) -
                                       p_over_q * *(b + 107 * OS1_S1 + 118);
            *(b + 79 * OS1_S1 + 155) = prefactor_x * *(b + 79 * OS1_S1 + 119) -
                                       p_over_q * *(b + 107 * OS1_S1 + 119);
            *(b + 79 * OS1_S1 + 156) =
                prefactor_y * *(b + 79 * OS1_S1 + 112) -
                p_over_q * *(b + 114 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 79 * OS1_S1 + 77);
            *(b + 79 * OS1_S1 + 157) =
                prefactor_z * *(b + 79 * OS1_S1 + 112) -
                p_over_q * *(b + 115 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 112);
            *(b + 79 * OS1_S1 + 158) =
                prefactor_z * *(b + 79 * OS1_S1 + 113) -
                p_over_q * *(b + 115 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 113) +
                one_over_two_q * *(b + 79 * OS1_S1 + 77);
            *(b + 79 * OS1_S1 + 159) =
                prefactor_z * *(b + 79 * OS1_S1 + 114) -
                p_over_q * *(b + 115 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 78);
            *(b + 79 * OS1_S1 + 160) =
                prefactor_z * *(b + 79 * OS1_S1 + 115) -
                p_over_q * *(b + 115 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 79);
            *(b + 79 * OS1_S1 + 161) =
                prefactor_y * *(b + 79 * OS1_S1 + 117) -
                p_over_q * *(b + 114 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 79 * OS1_S1 + 82);
            *(b + 79 * OS1_S1 + 162) =
                prefactor_y * *(b + 79 * OS1_S1 + 118) -
                p_over_q * *(b + 114 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 118) +
                one_over_two_q * *(b + 79 * OS1_S1 + 83);
            *(b + 79 * OS1_S1 + 163) =
                prefactor_y * *(b + 79 * OS1_S1 + 119) -
                p_over_q * *(b + 114 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 52 * OS1_S1 + 119);
            *(b + 79 * OS1_S1 + 164) =
                prefactor_z * *(b + 79 * OS1_S1 + 119) -
                p_over_q * *(b + 115 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 79 * OS1_S1 + 83);
            *(b + 80 * OS1_S1 + 120) =
                prefactor_x * *(b + 80 * OS1_S1 + 84) -
                p_over_q * *(b + 108 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 80 * OS1_S1 + 56);
            *(b + 80 * OS1_S1 + 121) =
                prefactor_y * *(b + 80 * OS1_S1 + 84) -
                p_over_q * *(b + 115 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 84);
            *(b + 80 * OS1_S1 + 122) =
                prefactor_z * *(b + 80 * OS1_S1 + 84) -
                p_over_q * *(b + 116 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 84);
            *(b + 80 * OS1_S1 + 123) =
                prefactor_y * *(b + 80 * OS1_S1 + 85) -
                p_over_q * *(b + 115 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 85) +
                one_over_two_q * *(b + 80 * OS1_S1 + 56);
            *(b + 80 * OS1_S1 + 124) =
                prefactor_z * *(b + 80 * OS1_S1 + 85) -
                p_over_q * *(b + 116 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 85);
            *(b + 80 * OS1_S1 + 125) =
                prefactor_z * *(b + 80 * OS1_S1 + 86) -
                p_over_q * *(b + 116 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 86) +
                one_over_two_q * *(b + 80 * OS1_S1 + 56);
            *(b + 80 * OS1_S1 + 126) =
                prefactor_y * *(b + 80 * OS1_S1 + 87) -
                p_over_q * *(b + 115 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 57);
            *(b + 80 * OS1_S1 + 127) =
                prefactor_z * *(b + 80 * OS1_S1 + 87) -
                p_over_q * *(b + 116 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 87);
            *(b + 80 * OS1_S1 + 128) =
                prefactor_y * *(b + 80 * OS1_S1 + 89) -
                p_over_q * *(b + 115 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 89);
            *(b + 80 * OS1_S1 + 129) =
                prefactor_z * *(b + 80 * OS1_S1 + 89) -
                p_over_q * *(b + 116 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 58);
            *(b + 80 * OS1_S1 + 130) =
                prefactor_x * *(b + 80 * OS1_S1 + 94) -
                p_over_q * *(b + 108 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 80 * OS1_S1 + 66);
            *(b + 80 * OS1_S1 + 131) =
                prefactor_z * *(b + 80 * OS1_S1 + 90) -
                p_over_q * *(b + 116 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 90);
            *(b + 80 * OS1_S1 + 132) =
                prefactor_z * *(b + 80 * OS1_S1 + 91) -
                p_over_q * *(b + 116 * OS1_S1 + 91) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 91) +
                one_over_two_q * *(b + 80 * OS1_S1 + 59);
            *(b + 80 * OS1_S1 + 133) =
                prefactor_y * *(b + 80 * OS1_S1 + 93) -
                p_over_q * *(b + 115 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 93);
            *(b + 80 * OS1_S1 + 134) =
                prefactor_x * *(b + 80 * OS1_S1 + 98) -
                p_over_q * *(b + 108 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 80 * OS1_S1 + 70);
            *(b + 80 * OS1_S1 + 135) =
                prefactor_x * *(b + 80 * OS1_S1 + 99) -
                p_over_q * *(b + 108 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 71);
            *(b + 80 * OS1_S1 + 136) =
                prefactor_z * *(b + 80 * OS1_S1 + 94) -
                p_over_q * *(b + 116 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 94);
            *(b + 80 * OS1_S1 + 137) =
                prefactor_z * *(b + 80 * OS1_S1 + 95) -
                p_over_q * *(b + 116 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 95) +
                one_over_two_q * *(b + 80 * OS1_S1 + 62);
            *(b + 80 * OS1_S1 + 138) =
                prefactor_y * *(b + 80 * OS1_S1 + 97) -
                p_over_q * *(b + 115 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 97) +
                one_over_two_q * *(b + 80 * OS1_S1 + 65);
            *(b + 80 * OS1_S1 + 139) =
                prefactor_y * *(b + 80 * OS1_S1 + 98) -
                p_over_q * *(b + 115 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 98);
            *(b + 80 * OS1_S1 + 140) =
                prefactor_x * *(b + 80 * OS1_S1 + 104) -
                p_over_q * *(b + 108 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 76);
            *(b + 80 * OS1_S1 + 141) = prefactor_x * *(b + 80 * OS1_S1 + 105) -
                                       p_over_q * *(b + 108 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 77);
            *(b + 80 * OS1_S1 + 142) =
                prefactor_z * *(b + 80 * OS1_S1 + 99) -
                p_over_q * *(b + 116 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 99);
            *(b + 80 * OS1_S1 + 143) = prefactor_x * *(b + 80 * OS1_S1 + 107) -
                                       p_over_q * *(b + 108 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 79);
            *(b + 80 * OS1_S1 + 144) = prefactor_x * *(b + 80 * OS1_S1 + 108) -
                                       p_over_q * *(b + 108 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 80);
            *(b + 80 * OS1_S1 + 145) = prefactor_x * *(b + 80 * OS1_S1 + 109) -
                                       p_over_q * *(b + 108 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 81);
            *(b + 80 * OS1_S1 + 146) =
                prefactor_y * *(b + 80 * OS1_S1 + 104) -
                p_over_q * *(b + 115 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 104);
            *(b + 80 * OS1_S1 + 147) = prefactor_x * *(b + 80 * OS1_S1 + 111) -
                                       p_over_q * *(b + 108 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 80 * OS1_S1 + 83);
            *(b + 80 * OS1_S1 + 148) = prefactor_x * *(b + 80 * OS1_S1 + 112) -
                                       p_over_q * *(b + 108 * OS1_S1 + 112);
            *(b + 80 * OS1_S1 + 149) = prefactor_x * *(b + 80 * OS1_S1 + 113) -
                                       p_over_q * *(b + 108 * OS1_S1 + 113);
            *(b + 80 * OS1_S1 + 150) = prefactor_x * *(b + 80 * OS1_S1 + 114) -
                                       p_over_q * *(b + 108 * OS1_S1 + 114);
            *(b + 80 * OS1_S1 + 151) = prefactor_x * *(b + 80 * OS1_S1 + 115) -
                                       p_over_q * *(b + 108 * OS1_S1 + 115);
            *(b + 80 * OS1_S1 + 152) = prefactor_x * *(b + 80 * OS1_S1 + 116) -
                                       p_over_q * *(b + 108 * OS1_S1 + 116);
            *(b + 80 * OS1_S1 + 153) = prefactor_x * *(b + 80 * OS1_S1 + 117) -
                                       p_over_q * *(b + 108 * OS1_S1 + 117);
            *(b + 80 * OS1_S1 + 154) = prefactor_x * *(b + 80 * OS1_S1 + 118) -
                                       p_over_q * *(b + 108 * OS1_S1 + 118);
            *(b + 80 * OS1_S1 + 155) = prefactor_x * *(b + 80 * OS1_S1 + 119) -
                                       p_over_q * *(b + 108 * OS1_S1 + 119);
            *(b + 80 * OS1_S1 + 156) =
                prefactor_y * *(b + 80 * OS1_S1 + 112) -
                p_over_q * *(b + 115 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 80 * OS1_S1 + 77);
            *(b + 80 * OS1_S1 + 157) =
                prefactor_z * *(b + 80 * OS1_S1 + 112) -
                p_over_q * *(b + 116 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 112);
            *(b + 80 * OS1_S1 + 158) =
                prefactor_z * *(b + 80 * OS1_S1 + 113) -
                p_over_q * *(b + 116 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 113) +
                one_over_two_q * *(b + 80 * OS1_S1 + 77);
            *(b + 80 * OS1_S1 + 159) =
                prefactor_z * *(b + 80 * OS1_S1 + 114) -
                p_over_q * *(b + 116 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 78);
            *(b + 80 * OS1_S1 + 160) =
                prefactor_z * *(b + 80 * OS1_S1 + 115) -
                p_over_q * *(b + 116 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 80 * OS1_S1 + 79);
            *(b + 80 * OS1_S1 + 161) =
                prefactor_y * *(b + 80 * OS1_S1 + 117) -
                p_over_q * *(b + 115 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 80 * OS1_S1 + 82);
            *(b + 80 * OS1_S1 + 162) =
                prefactor_y * *(b + 80 * OS1_S1 + 118) -
                p_over_q * *(b + 115 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 118) +
                one_over_two_q * *(b + 80 * OS1_S1 + 83);
            *(b + 80 * OS1_S1 + 163) =
                prefactor_y * *(b + 80 * OS1_S1 + 119) -
                p_over_q * *(b + 115 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 119);
            *(b + 80 * OS1_S1 + 164) =
                prefactor_z * *(b + 80 * OS1_S1 + 119) -
                p_over_q * *(b + 116 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 80 * OS1_S1 + 83);
            *(b + 81 * OS1_S1 + 120) =
                prefactor_x * *(b + 81 * OS1_S1 + 84) -
                p_over_q * *(b + 109 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 81 * OS1_S1 + 56);
            *(b + 81 * OS1_S1 + 121) =
                prefactor_y * *(b + 81 * OS1_S1 + 84) -
                p_over_q * *(b + 116 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 84);
            *(b + 81 * OS1_S1 + 122) =
                prefactor_z * *(b + 81 * OS1_S1 + 84) -
                p_over_q * *(b + 117 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 84);
            *(b + 81 * OS1_S1 + 123) =
                prefactor_y * *(b + 81 * OS1_S1 + 85) -
                p_over_q * *(b + 116 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 85) +
                one_over_two_q * *(b + 81 * OS1_S1 + 56);
            *(b + 81 * OS1_S1 + 124) =
                prefactor_y * *(b + 81 * OS1_S1 + 86) -
                p_over_q * *(b + 116 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 86);
            *(b + 81 * OS1_S1 + 125) =
                prefactor_z * *(b + 81 * OS1_S1 + 86) -
                p_over_q * *(b + 117 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 86) +
                one_over_two_q * *(b + 81 * OS1_S1 + 56);
            *(b + 81 * OS1_S1 + 126) =
                prefactor_y * *(b + 81 * OS1_S1 + 87) -
                p_over_q * *(b + 116 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 57);
            *(b + 81 * OS1_S1 + 127) =
                prefactor_z * *(b + 81 * OS1_S1 + 87) -
                p_over_q * *(b + 117 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 87);
            *(b + 81 * OS1_S1 + 128) =
                prefactor_y * *(b + 81 * OS1_S1 + 89) -
                p_over_q * *(b + 116 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 89);
            *(b + 81 * OS1_S1 + 129) =
                prefactor_z * *(b + 81 * OS1_S1 + 89) -
                p_over_q * *(b + 117 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 58);
            *(b + 81 * OS1_S1 + 130) =
                prefactor_x * *(b + 81 * OS1_S1 + 94) -
                p_over_q * *(b + 109 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 66);
            *(b + 81 * OS1_S1 + 131) =
                prefactor_z * *(b + 81 * OS1_S1 + 90) -
                p_over_q * *(b + 117 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 90);
            *(b + 81 * OS1_S1 + 132) =
                prefactor_y * *(b + 81 * OS1_S1 + 92) -
                p_over_q * *(b + 116 * OS1_S1 + 92) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 92) +
                one_over_two_q * *(b + 81 * OS1_S1 + 61);
            *(b + 81 * OS1_S1 + 133) =
                prefactor_y * *(b + 81 * OS1_S1 + 93) -
                p_over_q * *(b + 116 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 93);
            *(b + 81 * OS1_S1 + 134) =
                prefactor_x * *(b + 81 * OS1_S1 + 98) -
                p_over_q * *(b + 109 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 70);
            *(b + 81 * OS1_S1 + 135) =
                prefactor_x * *(b + 81 * OS1_S1 + 99) -
                p_over_q * *(b + 109 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 71);
            *(b + 81 * OS1_S1 + 136) =
                prefactor_z * *(b + 81 * OS1_S1 + 94) -
                p_over_q * *(b + 117 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 94);
            *(b + 81 * OS1_S1 + 137) =
                prefactor_z * *(b + 81 * OS1_S1 + 95) -
                p_over_q * *(b + 117 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 95) +
                one_over_two_q * *(b + 81 * OS1_S1 + 62);
            *(b + 81 * OS1_S1 + 138) =
                prefactor_y * *(b + 81 * OS1_S1 + 97) -
                p_over_q * *(b + 116 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 97) +
                one_over_two_q * *(b + 81 * OS1_S1 + 65);
            *(b + 81 * OS1_S1 + 139) =
                prefactor_y * *(b + 81 * OS1_S1 + 98) -
                p_over_q * *(b + 116 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 98);
            *(b + 81 * OS1_S1 + 140) =
                prefactor_x * *(b + 81 * OS1_S1 + 104) -
                p_over_q * *(b + 109 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 76);
            *(b + 81 * OS1_S1 + 141) = prefactor_x * *(b + 81 * OS1_S1 + 105) -
                                       p_over_q * *(b + 109 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 77);
            *(b + 81 * OS1_S1 + 142) =
                prefactor_z * *(b + 81 * OS1_S1 + 99) -
                p_over_q * *(b + 117 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 99);
            *(b + 81 * OS1_S1 + 143) = prefactor_x * *(b + 81 * OS1_S1 + 107) -
                                       p_over_q * *(b + 109 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 79);
            *(b + 81 * OS1_S1 + 144) = prefactor_x * *(b + 81 * OS1_S1 + 108) -
                                       p_over_q * *(b + 109 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 80);
            *(b + 81 * OS1_S1 + 145) = prefactor_x * *(b + 81 * OS1_S1 + 109) -
                                       p_over_q * *(b + 109 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 81);
            *(b + 81 * OS1_S1 + 146) =
                prefactor_y * *(b + 81 * OS1_S1 + 104) -
                p_over_q * *(b + 116 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 104);
            *(b + 81 * OS1_S1 + 147) = prefactor_x * *(b + 81 * OS1_S1 + 111) -
                                       p_over_q * *(b + 109 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 81 * OS1_S1 + 83);
            *(b + 81 * OS1_S1 + 148) = prefactor_x * *(b + 81 * OS1_S1 + 112) -
                                       p_over_q * *(b + 109 * OS1_S1 + 112);
            *(b + 81 * OS1_S1 + 149) = prefactor_x * *(b + 81 * OS1_S1 + 113) -
                                       p_over_q * *(b + 109 * OS1_S1 + 113);
            *(b + 81 * OS1_S1 + 150) = prefactor_x * *(b + 81 * OS1_S1 + 114) -
                                       p_over_q * *(b + 109 * OS1_S1 + 114);
            *(b + 81 * OS1_S1 + 151) = prefactor_x * *(b + 81 * OS1_S1 + 115) -
                                       p_over_q * *(b + 109 * OS1_S1 + 115);
            *(b + 81 * OS1_S1 + 152) = prefactor_x * *(b + 81 * OS1_S1 + 116) -
                                       p_over_q * *(b + 109 * OS1_S1 + 116);
            *(b + 81 * OS1_S1 + 153) = prefactor_x * *(b + 81 * OS1_S1 + 117) -
                                       p_over_q * *(b + 109 * OS1_S1 + 117);
            *(b + 81 * OS1_S1 + 154) = prefactor_x * *(b + 81 * OS1_S1 + 118) -
                                       p_over_q * *(b + 109 * OS1_S1 + 118);
            *(b + 81 * OS1_S1 + 155) = prefactor_x * *(b + 81 * OS1_S1 + 119) -
                                       p_over_q * *(b + 109 * OS1_S1 + 119);
            *(b + 81 * OS1_S1 + 156) =
                prefactor_y * *(b + 81 * OS1_S1 + 112) -
                p_over_q * *(b + 116 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 81 * OS1_S1 + 77);
            *(b + 81 * OS1_S1 + 157) =
                prefactor_z * *(b + 81 * OS1_S1 + 112) -
                p_over_q * *(b + 117 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 112);
            *(b + 81 * OS1_S1 + 158) =
                prefactor_z * *(b + 81 * OS1_S1 + 113) -
                p_over_q * *(b + 117 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 113) +
                one_over_two_q * *(b + 81 * OS1_S1 + 77);
            *(b + 81 * OS1_S1 + 159) =
                prefactor_z * *(b + 81 * OS1_S1 + 114) -
                p_over_q * *(b + 117 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 78);
            *(b + 81 * OS1_S1 + 160) =
                prefactor_y * *(b + 81 * OS1_S1 + 116) -
                p_over_q * *(b + 116 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 81);
            *(b + 81 * OS1_S1 + 161) =
                prefactor_y * *(b + 81 * OS1_S1 + 117) -
                p_over_q * *(b + 116 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 81 * OS1_S1 + 82);
            *(b + 81 * OS1_S1 + 162) =
                prefactor_y * *(b + 81 * OS1_S1 + 118) -
                p_over_q * *(b + 116 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 118) +
                one_over_two_q * *(b + 81 * OS1_S1 + 83);
            *(b + 81 * OS1_S1 + 163) =
                prefactor_y * *(b + 81 * OS1_S1 + 119) -
                p_over_q * *(b + 116 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 119);
            *(b + 81 * OS1_S1 + 164) =
                prefactor_z * *(b + 81 * OS1_S1 + 119) -
                p_over_q * *(b + 117 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 53 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 81 * OS1_S1 + 83);
            *(b + 82 * OS1_S1 + 120) =
                prefactor_x * *(b + 82 * OS1_S1 + 84) -
                p_over_q * *(b + 110 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 82 * OS1_S1 + 56);
            *(b + 82 * OS1_S1 + 121) = prefactor_y * *(b + 82 * OS1_S1 + 84) -
                                       p_over_q * *(b + 117 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 84);
            *(b + 82 * OS1_S1 + 122) =
                prefactor_z * *(b + 82 * OS1_S1 + 84) -
                p_over_q * *(b + 118 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 84);
            *(b + 82 * OS1_S1 + 123) =
                prefactor_y * *(b + 82 * OS1_S1 + 85) -
                p_over_q * *(b + 117 * OS1_S1 + 85) +
                one_over_two_q * *(b + 55 * OS1_S1 + 85) +
                one_over_two_q * *(b + 82 * OS1_S1 + 56);
            *(b + 82 * OS1_S1 + 124) = prefactor_y * *(b + 82 * OS1_S1 + 86) -
                                       p_over_q * *(b + 117 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 86);
            *(b + 82 * OS1_S1 + 125) =
                prefactor_z * *(b + 82 * OS1_S1 + 86) -
                p_over_q * *(b + 118 * OS1_S1 + 86) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 86) +
                one_over_two_q * *(b + 82 * OS1_S1 + 56);
            *(b + 82 * OS1_S1 + 126) =
                prefactor_y * *(b + 82 * OS1_S1 + 87) -
                p_over_q * *(b + 117 * OS1_S1 + 87) +
                one_over_two_q * *(b + 55 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 57);
            *(b + 82 * OS1_S1 + 127) =
                prefactor_z * *(b + 82 * OS1_S1 + 87) -
                p_over_q * *(b + 118 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 87);
            *(b + 82 * OS1_S1 + 128) = prefactor_y * *(b + 82 * OS1_S1 + 89) -
                                       p_over_q * *(b + 117 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 89);
            *(b + 82 * OS1_S1 + 129) =
                prefactor_z * *(b + 82 * OS1_S1 + 89) -
                p_over_q * *(b + 118 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 58);
            *(b + 82 * OS1_S1 + 130) =
                prefactor_x * *(b + 82 * OS1_S1 + 94) -
                p_over_q * *(b + 110 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 82 * OS1_S1 + 66);
            *(b + 82 * OS1_S1 + 131) =
                prefactor_z * *(b + 82 * OS1_S1 + 90) -
                p_over_q * *(b + 118 * OS1_S1 + 90) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 90);
            *(b + 82 * OS1_S1 + 132) =
                prefactor_y * *(b + 82 * OS1_S1 + 92) -
                p_over_q * *(b + 117 * OS1_S1 + 92) +
                one_over_two_q * *(b + 55 * OS1_S1 + 92) +
                one_over_two_q * *(b + 82 * OS1_S1 + 61);
            *(b + 82 * OS1_S1 + 133) = prefactor_y * *(b + 82 * OS1_S1 + 93) -
                                       p_over_q * *(b + 117 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 93);
            *(b + 82 * OS1_S1 + 134) =
                prefactor_x * *(b + 82 * OS1_S1 + 98) -
                p_over_q * *(b + 110 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 82 * OS1_S1 + 70);
            *(b + 82 * OS1_S1 + 135) =
                prefactor_x * *(b + 82 * OS1_S1 + 99) -
                p_over_q * *(b + 110 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 71);
            *(b + 82 * OS1_S1 + 136) =
                prefactor_z * *(b + 82 * OS1_S1 + 94) -
                p_over_q * *(b + 118 * OS1_S1 + 94) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 94);
            *(b + 82 * OS1_S1 + 137) =
                prefactor_z * *(b + 82 * OS1_S1 + 95) -
                p_over_q * *(b + 118 * OS1_S1 + 95) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 95) +
                one_over_two_q * *(b + 82 * OS1_S1 + 62);
            *(b + 82 * OS1_S1 + 138) =
                prefactor_y * *(b + 82 * OS1_S1 + 97) -
                p_over_q * *(b + 117 * OS1_S1 + 97) +
                one_over_two_q * *(b + 55 * OS1_S1 + 97) +
                one_over_two_q * *(b + 82 * OS1_S1 + 65);
            *(b + 82 * OS1_S1 + 139) = prefactor_y * *(b + 82 * OS1_S1 + 98) -
                                       p_over_q * *(b + 117 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 98);
            *(b + 82 * OS1_S1 + 140) =
                prefactor_x * *(b + 82 * OS1_S1 + 104) -
                p_over_q * *(b + 110 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 76);
            *(b + 82 * OS1_S1 + 141) = prefactor_x * *(b + 82 * OS1_S1 + 105) -
                                       p_over_q * *(b + 110 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 77);
            *(b + 82 * OS1_S1 + 142) =
                prefactor_z * *(b + 82 * OS1_S1 + 99) -
                p_over_q * *(b + 118 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 99);
            *(b + 82 * OS1_S1 + 143) = prefactor_x * *(b + 82 * OS1_S1 + 107) -
                                       p_over_q * *(b + 110 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 79);
            *(b + 82 * OS1_S1 + 144) = prefactor_x * *(b + 82 * OS1_S1 + 108) -
                                       p_over_q * *(b + 110 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 80);
            *(b + 82 * OS1_S1 + 145) = prefactor_x * *(b + 82 * OS1_S1 + 109) -
                                       p_over_q * *(b + 110 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 81);
            *(b + 82 * OS1_S1 + 146) =
                prefactor_y * *(b + 82 * OS1_S1 + 104) -
                p_over_q * *(b + 117 * OS1_S1 + 104) +
                one_over_two_q * *(b + 55 * OS1_S1 + 104);
            *(b + 82 * OS1_S1 + 147) = prefactor_x * *(b + 82 * OS1_S1 + 111) -
                                       p_over_q * *(b + 110 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 82 * OS1_S1 + 83);
            *(b + 82 * OS1_S1 + 148) = prefactor_x * *(b + 82 * OS1_S1 + 112) -
                                       p_over_q * *(b + 110 * OS1_S1 + 112);
            *(b + 82 * OS1_S1 + 149) = prefactor_x * *(b + 82 * OS1_S1 + 113) -
                                       p_over_q * *(b + 110 * OS1_S1 + 113);
            *(b + 82 * OS1_S1 + 150) = prefactor_x * *(b + 82 * OS1_S1 + 114) -
                                       p_over_q * *(b + 110 * OS1_S1 + 114);
            *(b + 82 * OS1_S1 + 151) = prefactor_x * *(b + 82 * OS1_S1 + 115) -
                                       p_over_q * *(b + 110 * OS1_S1 + 115);
            *(b + 82 * OS1_S1 + 152) = prefactor_x * *(b + 82 * OS1_S1 + 116) -
                                       p_over_q * *(b + 110 * OS1_S1 + 116);
            *(b + 82 * OS1_S1 + 153) = prefactor_x * *(b + 82 * OS1_S1 + 117) -
                                       p_over_q * *(b + 110 * OS1_S1 + 117);
            *(b + 82 * OS1_S1 + 154) = prefactor_x * *(b + 82 * OS1_S1 + 118) -
                                       p_over_q * *(b + 110 * OS1_S1 + 118);
            *(b + 82 * OS1_S1 + 155) = prefactor_x * *(b + 82 * OS1_S1 + 119) -
                                       p_over_q * *(b + 110 * OS1_S1 + 119);
            *(b + 82 * OS1_S1 + 156) =
                prefactor_y * *(b + 82 * OS1_S1 + 112) -
                p_over_q * *(b + 117 * OS1_S1 + 112) +
                one_over_two_q * *(b + 55 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 82 * OS1_S1 + 77);
            *(b + 82 * OS1_S1 + 157) =
                prefactor_z * *(b + 82 * OS1_S1 + 112) -
                p_over_q * *(b + 118 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 112);
            *(b + 82 * OS1_S1 + 158) =
                prefactor_z * *(b + 82 * OS1_S1 + 113) -
                p_over_q * *(b + 118 * OS1_S1 + 113) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 113) +
                one_over_two_q * *(b + 82 * OS1_S1 + 77);
            *(b + 82 * OS1_S1 + 159) =
                prefactor_z * *(b + 82 * OS1_S1 + 114) -
                p_over_q * *(b + 118 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 78);
            *(b + 82 * OS1_S1 + 160) =
                prefactor_y * *(b + 82 * OS1_S1 + 116) -
                p_over_q * *(b + 117 * OS1_S1 + 116) +
                one_over_two_q * *(b + 55 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 82 * OS1_S1 + 81);
            *(b + 82 * OS1_S1 + 161) =
                prefactor_y * *(b + 82 * OS1_S1 + 117) -
                p_over_q * *(b + 117 * OS1_S1 + 117) +
                one_over_two_q * *(b + 55 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 82);
            *(b + 82 * OS1_S1 + 162) =
                prefactor_y * *(b + 82 * OS1_S1 + 118) -
                p_over_q * *(b + 117 * OS1_S1 + 118) +
                one_over_two_q * *(b + 55 * OS1_S1 + 118) +
                one_over_two_q * *(b + 82 * OS1_S1 + 83);
            *(b + 82 * OS1_S1 + 163) =
                prefactor_y * *(b + 82 * OS1_S1 + 119) -
                p_over_q * *(b + 117 * OS1_S1 + 119) +
                one_over_two_q * *(b + 55 * OS1_S1 + 119);
            *(b + 82 * OS1_S1 + 164) =
                prefactor_z * *(b + 82 * OS1_S1 + 119) -
                p_over_q * *(b + 118 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 54 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 82 * OS1_S1 + 83);
            *(b + 83 * OS1_S1 + 120) =
                prefactor_x * *(b + 83 * OS1_S1 + 84) -
                p_over_q * *(b + 111 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 56);
            *(b + 83 * OS1_S1 + 121) = prefactor_y * *(b + 83 * OS1_S1 + 84) -
                                       p_over_q * *(b + 118 * OS1_S1 + 84);
            *(b + 83 * OS1_S1 + 122) =
                prefactor_z * *(b + 83 * OS1_S1 + 84) -
                p_over_q * *(b + 119 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 84);
            *(b + 83 * OS1_S1 + 123) = prefactor_y * *(b + 83 * OS1_S1 + 85) -
                                       p_over_q * *(b + 118 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 56);
            *(b + 83 * OS1_S1 + 124) = prefactor_y * *(b + 83 * OS1_S1 + 86) -
                                       p_over_q * *(b + 118 * OS1_S1 + 86);
            *(b + 83 * OS1_S1 + 125) =
                prefactor_z * *(b + 83 * OS1_S1 + 86) -
                p_over_q * *(b + 119 * OS1_S1 + 86) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 86) +
                one_over_two_q * *(b + 83 * OS1_S1 + 56);
            *(b + 83 * OS1_S1 + 126) =
                prefactor_y * *(b + 83 * OS1_S1 + 87) -
                p_over_q * *(b + 118 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 57);
            *(b + 83 * OS1_S1 + 127) =
                prefactor_z * *(b + 83 * OS1_S1 + 87) -
                p_over_q * *(b + 119 * OS1_S1 + 87) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 87);
            *(b + 83 * OS1_S1 + 128) = prefactor_y * *(b + 83 * OS1_S1 + 89) -
                                       p_over_q * *(b + 118 * OS1_S1 + 89);
            *(b + 83 * OS1_S1 + 129) =
                prefactor_z * *(b + 83 * OS1_S1 + 89) -
                p_over_q * *(b + 119 * OS1_S1 + 89) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 58);
            *(b + 83 * OS1_S1 + 130) =
                prefactor_y * *(b + 83 * OS1_S1 + 90) -
                p_over_q * *(b + 118 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 83 * OS1_S1 + 59);
            *(b + 83 * OS1_S1 + 131) =
                prefactor_z * *(b + 83 * OS1_S1 + 90) -
                p_over_q * *(b + 119 * OS1_S1 + 90) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 90);
            *(b + 83 * OS1_S1 + 132) = prefactor_y * *(b + 83 * OS1_S1 + 92) -
                                       p_over_q * *(b + 118 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 61);
            *(b + 83 * OS1_S1 + 133) = prefactor_y * *(b + 83 * OS1_S1 + 93) -
                                       p_over_q * *(b + 118 * OS1_S1 + 93);
            *(b + 83 * OS1_S1 + 134) =
                prefactor_x * *(b + 83 * OS1_S1 + 98) -
                p_over_q * *(b + 111 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 83 * OS1_S1 + 70);
            *(b + 83 * OS1_S1 + 135) =
                prefactor_x * *(b + 83 * OS1_S1 + 99) -
                p_over_q * *(b + 111 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 71);
            *(b + 83 * OS1_S1 + 136) =
                prefactor_z * *(b + 83 * OS1_S1 + 94) -
                p_over_q * *(b + 119 * OS1_S1 + 94) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 94);
            *(b + 83 * OS1_S1 + 137) =
                prefactor_z * *(b + 83 * OS1_S1 + 95) -
                p_over_q * *(b + 119 * OS1_S1 + 95) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 95) +
                one_over_two_q * *(b + 83 * OS1_S1 + 62);
            *(b + 83 * OS1_S1 + 138) = prefactor_y * *(b + 83 * OS1_S1 + 97) -
                                       p_over_q * *(b + 118 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 65);
            *(b + 83 * OS1_S1 + 139) = prefactor_y * *(b + 83 * OS1_S1 + 98) -
                                       p_over_q * *(b + 118 * OS1_S1 + 98);
            *(b + 83 * OS1_S1 + 140) =
                prefactor_x * *(b + 83 * OS1_S1 + 104) -
                p_over_q * *(b + 111 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 76);
            *(b + 83 * OS1_S1 + 141) = prefactor_x * *(b + 83 * OS1_S1 + 105) -
                                       p_over_q * *(b + 111 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 77);
            *(b + 83 * OS1_S1 + 142) =
                prefactor_z * *(b + 83 * OS1_S1 + 99) -
                p_over_q * *(b + 119 * OS1_S1 + 99) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 99);
            *(b + 83 * OS1_S1 + 143) = prefactor_x * *(b + 83 * OS1_S1 + 107) -
                                       p_over_q * *(b + 111 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 79);
            *(b + 83 * OS1_S1 + 144) = prefactor_x * *(b + 83 * OS1_S1 + 108) -
                                       p_over_q * *(b + 111 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 80);
            *(b + 83 * OS1_S1 + 145) = prefactor_y * *(b + 83 * OS1_S1 + 103) -
                                       p_over_q * *(b + 118 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 70);
            *(b + 83 * OS1_S1 + 146) = prefactor_y * *(b + 83 * OS1_S1 + 104) -
                                       p_over_q * *(b + 118 * OS1_S1 + 104);
            *(b + 83 * OS1_S1 + 147) = prefactor_x * *(b + 83 * OS1_S1 + 111) -
                                       p_over_q * *(b + 111 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 83);
            *(b + 83 * OS1_S1 + 148) = prefactor_x * *(b + 83 * OS1_S1 + 112) -
                                       p_over_q * *(b + 111 * OS1_S1 + 112);
            *(b + 83 * OS1_S1 + 149) = prefactor_x * *(b + 83 * OS1_S1 + 113) -
                                       p_over_q * *(b + 111 * OS1_S1 + 113);
            *(b + 83 * OS1_S1 + 150) = prefactor_x * *(b + 83 * OS1_S1 + 114) -
                                       p_over_q * *(b + 111 * OS1_S1 + 114);
            *(b + 83 * OS1_S1 + 151) = prefactor_x * *(b + 83 * OS1_S1 + 115) -
                                       p_over_q * *(b + 111 * OS1_S1 + 115);
            *(b + 83 * OS1_S1 + 152) = prefactor_x * *(b + 83 * OS1_S1 + 116) -
                                       p_over_q * *(b + 111 * OS1_S1 + 116);
            *(b + 83 * OS1_S1 + 153) = prefactor_x * *(b + 83 * OS1_S1 + 117) -
                                       p_over_q * *(b + 111 * OS1_S1 + 117);
            *(b + 83 * OS1_S1 + 154) = prefactor_y * *(b + 83 * OS1_S1 + 111) -
                                       p_over_q * *(b + 118 * OS1_S1 + 111);
            *(b + 83 * OS1_S1 + 155) = prefactor_x * *(b + 83 * OS1_S1 + 119) -
                                       p_over_q * *(b + 111 * OS1_S1 + 119);
            *(b + 83 * OS1_S1 + 156) =
                prefactor_y * *(b + 83 * OS1_S1 + 112) -
                p_over_q * *(b + 118 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 77);
            *(b + 83 * OS1_S1 + 157) =
                prefactor_z * *(b + 83 * OS1_S1 + 112) -
                p_over_q * *(b + 119 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 112);
            *(b + 83 * OS1_S1 + 158) =
                prefactor_z * *(b + 83 * OS1_S1 + 113) -
                p_over_q * *(b + 119 * OS1_S1 + 113) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 113) +
                one_over_two_q * *(b + 83 * OS1_S1 + 77);
            *(b + 83 * OS1_S1 + 159) =
                prefactor_z * *(b + 83 * OS1_S1 + 114) -
                p_over_q * *(b + 119 * OS1_S1 + 114) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 78);
            *(b + 83 * OS1_S1 + 160) =
                prefactor_y * *(b + 83 * OS1_S1 + 116) -
                p_over_q * *(b + 118 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 83 * OS1_S1 + 81);
            *(b + 83 * OS1_S1 + 161) =
                prefactor_y * *(b + 83 * OS1_S1 + 117) -
                p_over_q * *(b + 118 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 83 * OS1_S1 + 82);
            *(b + 83 * OS1_S1 + 162) = prefactor_y * *(b + 83 * OS1_S1 + 118) -
                                       p_over_q * *(b + 118 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 83 * OS1_S1 + 83);
            *(b + 83 * OS1_S1 + 163) = prefactor_y * *(b + 83 * OS1_S1 + 119) -
                                       p_over_q * *(b + 118 * OS1_S1 + 119);
            *(b + 83 * OS1_S1 + 164) =
                prefactor_z * *(b + 83 * OS1_S1 + 119) -
                p_over_q * *(b + 119 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 55 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 83);
            return;
        }
    }
}
